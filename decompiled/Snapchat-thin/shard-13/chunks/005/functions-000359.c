/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a7b9154; end: 10a7b92c3;  */

void FUN_10a7b9154(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int aiStack_80 [2];
  long lStack_78;
  long lStack_70;
  long *plStack_60;
  long *plStack_58;
  
  plVar5 = (long *)*param_4;
  if (plVar5 != (long *)0x0) {
    plStack_60 = (long *)0x0;
    plStack_58 = (long *)0x0;
    plVar3 = (long *)plVar5[1];
    if (plVar3 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_58 = plVar3;
      if (plVar3 != (long *)0x0) {
        plStack_60 = (long *)*plVar5;
        if (plStack_60 != (long *)0x0) {
          if (*(char *)(param_1 + 0xa9) == '\x01') {
            FUN_10a7b92c4(param_1,param_2,param_3,&plStack_60,param_4,param_7);
          }
          else {
            (**(code **)(*plStack_60 + 0x50))
                      (aiStack_80,plStack_60,*(undefined8 *)(*param_4 + 0x18),param_7);
            if ((lStack_78 != lStack_70) && (aiStack_80[0] == *(int *)(param_1 + 8))) {
              FUN_10a7b9778(param_1,param_2,param_3,aiStack_80,param_6);
            }
            if (lStack_78 != 0) {
              __ZdlPv();
            }
          }
        }
      }
    }
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10a7b92c4; end: 10a7b9777;  */

void FUN_10a7b92c4(long param_1,int *param_2,int *param_3,long *param_4,long *param_5,int *param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint *puStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  
  if (*(char *)(param_1 + 0xa8) != '\x01') {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  lVar32 = *param_4;
  if (lVar32 == 0 || *param_5 == 0) {
    return;
  }
  plVar21 = *(long **)(lVar32 + 0x28);
  if (plVar21 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar21 + 0x50))();
  plVar22 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar22 + 0x50))();
  if ((int)plVar21 != (int)plVar22) {
    return;
  }
  lVar31 = *param_5;
  if (*(long *)(lVar31 + 0x18) == 0) {
    return;
  }
  plVar21 = *(long **)(*param_4 + 0x28);
  if (plVar21 == (long *)0x0) {
    uStack_d8 = *(undefined8 *)(*param_4 + 0x80);
  }
  else {
    plVar22 = plVar21;
    (**(code **)(*plVar21 + 0x28))();
    uVar19 = (uint)plVar22;
    if (uVar19 < 2) {
      uVar19 = 1;
    }
    (**(code **)(*plVar21 + 0x30))();
    uVar20 = (uint)plVar21;
    if (uVar20 < 2) {
      uVar20 = 1;
    }
    uStack_d8 = CONCAT44(uVar20,uVar19);
  }
  if (*(int *)(param_1 + 0x18) < 2) {
    bVar1 = 1 < *(int *)(param_1 + 0x1c);
  }
  else {
    bVar1 = true;
  }
  if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
    if (*param_6 == 0 && param_6[1] == 0) goto LAB_10a7b9400;
    bVar24 = *param_6 != param_2[2] - *param_2 || param_6[1] != param_2[3] - param_2[1];
    if (!bVar1) goto LAB_10a7b944c;
LAB_10a7b9404:
    uStack_dc = 0;
    plVar21 = *(long **)(lVar31 + 0x18);
    if (!bVar24) {
      plVar21 = plVar21 + 8;
      param_2 = param_3;
LAB_10a7b96a0:
      plStack_100 = &lStack_f8;
      puStack_108 = &uStack_dc;
      uStack_e8 = 0;
      lStack_f0 = 0;
      lStack_f8 = 0;
      uStack_c8 = plVar21[1];
      lStack_d0 = *plVar21;
      uStack_118 = *(undefined8 *)(param_2 + 2);
      uStack_120 = *(undefined8 *)param_2;
      FUN_10a7b9c6c(&puStack_108,&lStack_d0,&uStack_120,0,&uStack_d8,param_1 + 0x80);
      goto LAB_10a7b96cc;
    }
  }
  else {
LAB_10a7b9400:
    bVar24 = false;
    if (bVar1) goto LAB_10a7b9404;
LAB_10a7b944c:
    uStack_dc = *(uint *)(param_1 + 0x10);
    plVar21 = *(long **)(lVar31 + 0x18);
    if (!bVar24) goto LAB_10a7b96a0;
  }
  plStack_100 = &lStack_f8;
  puStack_108 = &uStack_dc;
  uStack_e8 = 0;
  lStack_f0 = 0;
  lStack_f8 = 0;
  uVar19 = *(uint *)(param_1 + 0x24);
  if (uVar19 != 0) {
    uVar20 = 0;
    lVar31 = *plVar21;
    iVar10 = *(int *)((long)plVar21 + 4);
    lVar18 = plVar21[1];
    iVar11 = *(int *)((long)plVar21 + 0xc);
    iVar30 = (int)uStack_d8;
    fVar33 = (float)iVar30;
    fVar37 = (float)(int)lVar31 / fVar33;
    iVar29 = (int)((ulong)uStack_d8 >> 0x20);
    fVar35 = (float)iVar29;
    fVar38 = (float)iVar10 / fVar35;
    iVar8 = *param_2;
    iVar12 = param_2[1];
    iVar34 = *(int *)(param_1 + 0x80);
    iVar36 = *(int *)(param_1 + 0x84);
    fVar39 = (float)iVar8 / (float)iVar34;
    fVar40 = (float)iVar12 / (float)iVar36;
    iVar9 = param_2[2];
    iVar13 = param_2[3];
    do {
      uVar2 = iVar30 >> (uVar20 & 0x1f);
      if ((int)uVar2 < 2) {
        uVar2 = 1;
      }
      uVar3 = iVar29 >> (uVar20 & 0x1f);
      if ((int)uVar3 < 2) {
        uVar3 = 1;
      }
      uVar4 = *(int *)(param_1 + 0x80) >> (uVar20 & 0x1f);
      if ((int)uVar4 < 2) {
        uVar4 = 1;
      }
      uVar5 = *(int *)(param_1 + 0x84) >> (uVar20 & 0x1f);
      uVar27 = (uint)(fVar37 * (float)uVar2);
      uVar28 = (uint)(fVar38 * (float)uVar3);
      if ((int)uVar5 < 2) {
        uVar5 = 1;
      }
      uVar25 = (uint)(fVar39 * (float)uVar4);
      uVar26 = (uint)(fVar40 * (float)uVar5);
      iVar14 = (int)((fVar37 + (float)((int)lVar18 - (int)lVar31) / fVar33) * (float)uVar2) - uVar27
      ;
      iVar15 = (int)((fVar38 + (float)(iVar11 - iVar10) / fVar35) * (float)uVar3) - uVar28;
      iVar16 = (int)((fVar39 + (float)(iVar9 - iVar8) / (float)iVar34) * (float)uVar4) - uVar25;
      iVar17 = (int)((fVar40 + (float)(iVar13 - iVar12) / (float)iVar36) * (float)uVar5) - uVar26;
      if (iVar14 <= iVar16) {
        iVar16 = iVar14;
      }
      if (iVar15 <= iVar17) {
        iVar17 = iVar15;
      }
      if (0 < iVar16 && 0 < iVar17) {
        uVar19 = uVar27;
        if ((int)uStack_dc <= (int)uVar27) {
          uVar19 = uStack_dc;
        }
        uVar6 = uVar25;
        if ((int)uVar19 <= (int)uVar25) {
          uVar6 = uVar19;
        }
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        uVar19 = uVar28;
        if ((int)uStack_dc <= (int)uVar28) {
          uVar19 = uStack_dc;
        }
        uVar7 = uVar26;
        if ((int)uVar19 <= (int)uVar26) {
          uVar7 = uVar19;
        }
        uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
        uVar19 = (uVar2 - uVar27) - iVar16;
        uVar2 = (uVar4 - uVar25) - iVar16;
        if ((int)uStack_dc <= (int)uVar19) {
          uVar19 = uStack_dc;
        }
        if ((int)uVar19 <= (int)uVar2) {
          uVar2 = uVar19;
        }
        uVar19 = (uVar3 - uVar28) - iVar17;
        uVar3 = (uVar5 - uVar26) - iVar17;
        if ((int)uStack_dc <= (int)uVar19) {
          uVar19 = uStack_dc;
        }
        if ((int)uVar19 <= (int)uVar3) {
          uVar3 = uVar19;
        }
        iVar16 = uVar6 + iVar16 + (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
        uVar23 = (ulong)(uVar7 + iVar17 + (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)));
        lStack_d0 = CONCAT44(uVar28 - uVar7,uVar27 - uVar6);
        uStack_c8 = lStack_d0 + (uVar23 << 0x20) & 0xffffffff00000000 |
                    (ulong)(iVar16 + (uVar27 - uVar6));
        lStack_c0 = CONCAT44(uVar26 - uVar7,uVar25 - uVar6);
        uStack_b8 = lStack_c0 + (uVar23 << 0x20) & 0xffffffff00000000 |
                    (ulong)(iVar16 + (uVar25 - uVar6));
        uStack_b0 = uVar20;
        uStack_ac = uVar20;
        FUN_10a7b9d9c(plStack_100,&lStack_d0);
        uVar19 = *(uint *)(param_1 + 0x24);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar19);
  }
LAB_10a7b96cc:
  if (lStack_f8 != lStack_f0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0xa8))
              (*(long **)(param_1 + 0x28),*(undefined8 *)(lVar32 + 0x28),lStack_f8,
               (lStack_f0 - lStack_f8 >> 3) * -0x3333333333333333);
    (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
  }
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv(lStack_f8);
  }
  return;
}



/* Entry: 10a7b9778; end: 10a7b9c6b;  */

void FUN_10a7b9778(long *param_1,uint *param_2,long **param_3,uint *param_4,int *param_5,
                  int *param_6)

{
  uint uVar1;
  undefined **ppuVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  long *plVar14;
  uint *puVar15;
  undefined4 uVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  int *piVar26;
  long *unaff_x22;
  long lVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  uint *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  uint uStack_124;
  uint *puStack_120;
  int iStack_114;
  uint *puStack_110;
  long *plStack_108;
  uint uStack_fc;
  int *piStack_f8;
  ulong uStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  int iStack_d4;
  code *pcStack_d0;
  undefined **appuStack_c8 [7];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = param_1;
  puVar15 = param_2;
  puVar31 = param_4;
  if (((*(byte *)((long)param_1 + 0xa9) & 1) == 0) && ((char)param_1[0x15] == '\x01')) {
    lVar18 = *(long *)(param_4 + 2);
    lVar27 = *(long *)(param_4 + 4);
    if ((lVar18 != lVar27) &&
       (plVar14 = (long *)(ulong)*param_4, *param_4 == *(uint *)(param_1 + 1))) {
      uVar25 = (uint)param_5;
      if (((int)param_1[3] < 2) && (iStack_d4 = -1, *(int *)((long)param_1 + 0x1c) < 2)) {
        iVar29 = 0;
        unaff_x22 = (long *)0x0;
      }
      else {
        func_0x00010ab79cdc();
        iStack_d4 = (int)plVar14;
        if (iStack_d4 == -1) goto LAB_10a7b9bd8;
        puVar15 = (uint *)0x0;
        FUN_10a1b70c8(&plStack_e8);
        unaff_x22 = plStack_e8;
        if (plStack_e8 == (long *)0x0) goto LAB_10a7b9bd8;
        lVar18 = *(long *)(param_4 + 2);
        lVar27 = *(long *)(param_4 + 4);
        iVar29 = 1;
      }
      uStack_124 = uVar25;
      puStack_120 = param_2;
      plStack_108 = unaff_x22;
      if (lVar27 != lVar18) {
        uVar24 = 0;
        uVar3 = *param_2;
        uVar5 = param_2[1];
        uVar30 = *(uint *)(param_1 + 0x10);
        uVar25 = *(uint *)((long)param_1 + 0x84);
        fVar32 = (float)(int)uVar30;
        fVar33 = (float)(int)uVar25;
        fVar34 = (float)(int)uVar3 / fVar32;
        fVar35 = (float)(int)uVar5 / fVar33;
        uVar4 = param_2[2];
        uVar6 = param_2[3];
        iStack_114 = iVar29;
        puStack_110 = param_4;
        while( true ) {
          piVar26 = (int *)(ulong)uVar25;
          lVar27 = param_1[0x16];
          uVar21 = (param_1[0x17] - lVar27 >> 3) * -0x5555555555555555;
          if (uVar21 <= uVar24) break;
          plVar14 = (long *)(lVar18 + uVar24 * 0x20);
          iVar17 = (int)(fVar34 * (float)(int)uVar30);
          iVar22 = (int)(fVar35 * (float)(int)uVar25);
          uVar23 = (uint)((fVar34 + (float)(int)(uVar4 - uVar3) / fVar32) * (float)(int)uVar30);
          plStack_e8 = (long *)CONCAT44(iVar22,iVar17);
          uVar20 = (long)plStack_e8 +
                   ((ulong)(uint)((int)((fVar35 + (float)(int)(uVar6 - uVar5) / fVar33) *
                                       (float)(int)uVar25) - iVar22) << 0x20);
          uStack_e0 = uVar20 & 0xffffffff00000000 | (ulong)uVar23;
          uStack_f0 = uVar24;
          if (iVar29 == 0) {
            ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 1) * 4;
            if (0x56 < *(uint *)(param_1 + 1)) {
              ppuVar2 = &PTR_DAT_110ae4700;
            }
            bVar8 = *(byte *)((long)ppuVar2 + 0x1b);
            param_6 = (int *)(ulong)bVar8;
            lVar18 = plVar14[2];
            iVar28 = *(int *)((long)plVar14 + 0x14);
            iVar9 = (int)plVar14[3] - (int)lVar18;
            uVar1 = *(int *)((long)plVar14 + 0x1c) - iVar28;
            iVar10 = uVar23 - iVar17;
            uVar25 = (int)(uVar20 >> 0x20) - iVar22;
            if (iVar9 <= iVar10) {
              iVar10 = iVar9;
            }
            if ((int)uVar1 <= (int)uVar25) {
              uVar25 = uVar1;
            }
            uVar24 = (ulong)uVar25;
            piStack_f8 = piVar26;
            if (0 < (int)uVar25) {
              lVar27 = *plVar14;
              uVar21 = ((long)iVar17 + (long)(int)uVar30 * (long)iVar22) * (long)param_6;
              uStack_fc = uVar30;
              do {
                uVar20 = (param_1[0x17] - param_1[0x16] >> 3) * -0x5555555555555555;
                if ((uVar20 < uStack_f0 || uVar20 - uStack_f0 == 0) ||
                   (plVar19 = (long *)(param_1[0x16] + uStack_f0 * 0x18), lVar7 = *plVar19,
                   (ulong)(plVar19[1] - lVar7) <= uVar21)) goto LAB_10a7b9c18;
                _memcpy(lVar7 + uVar21,
                        lVar27 + (long)(int)(uint)bVar8 *
                                 (long)((int)lVar18 + iVar28 * (int)plVar14[1]),
                        (long)(int)(uint)bVar8 * (long)iVar10);
                uVar21 = uVar21 + (long)(int)(uint)bVar8 * (long)(int)uVar30;
                iVar28 = iVar28 + 1;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
              lVar27 = param_1[0x16];
              uVar21 = (param_1[0x17] - lVar27 >> 3) * -0x5555555555555555;
              unaff_x22 = plStack_108;
              param_4 = puStack_110;
              iVar29 = iStack_114;
              uVar30 = uStack_fc;
            }
            piVar26 = piStack_f8;
            puVar31 = (uint *)(ulong)uVar30;
            if (uVar21 <= uStack_f0) goto LAB_10a7b9c18;
            puVar15 = *(uint **)(lVar27 + uStack_f0 * 0x18);
            param_3 = &plStack_e8;
            plVar14 = param_1;
            param_5 = piStack_f8;
            FUN_10a7b8ad0();
          }
          else {
            plVar19 = unaff_x22;
            (**(code **)(*unaff_x22 + 0x18))
                      (unaff_x22,(int)plVar14[1],*(undefined4 *)((long)plVar14 + 0xc));
            pcStack_d0 = FUN_10a7b9eec;
            appuStack_c8[0] = &PTR_DAT_110c19068;
            FUN_10a1b76e0(unaff_x22,(int)plVar14[1],*(undefined4 *)((long)plVar14 + 0xc),&iStack_d4,
                          (long)(int)plVar19,*plVar14,&pcStack_d0);
            (*(code *)*appuStack_c8[0])(appuStack_c8);
            uVar24 = (param_1[0x17] - param_1[0x16] >> 3) * -0x5555555555555555;
            if (uVar24 < uStack_f0 || uVar24 - uStack_f0 == 0) goto LAB_10a7b9c18;
            puVar15 = *(uint **)(param_1[0x16] + uStack_f0 * 0x18);
            param_3 = (long **)*plVar14;
            puVar31 = (uint *)plVar14[1];
            param_5 = (int *)plVar14[2];
            param_6 = (int *)CONCAT44(uVar25,uVar30);
            plVar14 = unaff_x22;
            (**(code **)(*unaff_x22 + 0x20))();
          }
          *(undefined1 *)(param_1 + 4) = 1;
          if ((char)param_4[1] != '\x01') break;
          uVar25 = (int)piVar26 / 2;
          if ((int)uVar25 < 2) {
            uVar25 = 1;
          }
          uVar30 = (int)uVar30 / 2;
          if ((int)uVar30 < 2) {
            uVar30 = 1;
          }
          uVar24 = uStack_f0 + 1;
          lVar18 = *(long *)(param_4 + 2);
          if ((ulong)(*(long *)(param_4 + 4) - lVar18 >> 5) <= uVar24) break;
        }
      }
      if ((((uStack_124 & 1) == 0) && ((*(byte *)((long)param_1 + 0xaa) & 1) == 0)) &&
         ((param_4[1] & 1) == 0)) {
        if (param_1[0x17] == param_1[0x16]) {
LAB_10a7b9c18:
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10a7b9c1c);
          (*pcVar13)();
        }
        puVar15 = (uint *)(ulong)*puStack_120;
        param_3 = (long **)(ulong)puStack_120[1];
        param_5 = (int *)(ulong)(puStack_120[2] - *puStack_120);
        param_6 = (int *)(ulong)(puStack_120[3] - puStack_120[1]);
        plVar14 = (long *)param_1[5];
        uStack_130 = 0;
        puVar31 = (uint *)0x0;
        (**(code **)(*plVar14 + 0xa0))();
      }
      if (unaff_x22 != (long *)0x0) {
        plVar14 = unaff_x22;
        (**(code **)(*unaff_x22 + 0x30))();
      }
    }
  }
LAB_10a7b9bd8:
  uVar16 = SUB84(puVar31,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  if (unaff_x22 != (long *)0x0) {
    (**(code **)(*plStack_108 + 0x30))();
  }
  __Unwind_Resume();
  uVar25 = *puVar15;
  uVar3 = puVar15[1];
  uVar30 = *(uint *)param_3;
  uVar4 = *(uint *)((long)param_3 + 4);
  iVar17 = *(uint *)((long)param_3 + 0xc) - uVar4;
  iVar29 = *(uint *)(param_3 + 1) - uVar30;
  if ((int)(puVar15[2] - uVar25) <= (int)(*(uint *)(param_3 + 1) - uVar30)) {
    iVar29 = puVar15[2] - uVar25;
  }
  if ((int)(puVar15[3] - uVar3) <= iVar17) {
    iVar17 = puVar15[3] - uVar3;
  }
  if (0 < iVar29 && 0 < iVar17) {
    pcStack_138 = FUN_10a7b9c6c;
    uVar6 = *(uint *)*plVar14;
    uVar5 = uVar25;
    if ((int)uVar6 <= (int)uVar25) {
      uVar5 = uVar6;
    }
    uVar23 = uVar30;
    if ((int)uVar5 <= (int)uVar30) {
      uVar23 = uVar5;
    }
    uVar23 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
    uVar5 = uVar3;
    if ((int)uVar6 <= (int)uVar3) {
      uVar5 = uVar6;
    }
    uVar1 = uVar4;
    if ((int)uVar5 <= (int)uVar4) {
      uVar1 = uVar5;
    }
    uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    uVar5 = (*param_5 - uVar25) - iVar29;
    uVar11 = (*param_6 - uVar30) - iVar29;
    if ((int)uVar6 <= (int)uVar5) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 <= (int)uVar11) {
      uVar11 = uVar5;
    }
    uVar5 = (param_5[1] - uVar3) - iVar17;
    uVar12 = (param_6[1] - uVar4) - iVar17;
    if ((int)uVar6 <= (int)uVar5) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 <= (int)uVar12) {
      uVar12 = uVar5;
    }
    iVar29 = uVar23 + iVar29 + (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU));
    uVar24 = (ulong)(uVar1 + iVar17 + (uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)));
    lStack_168 = CONCAT44(uVar3 - uVar1,uVar25 - uVar23);
    uStack_160 = lStack_168 + (uVar24 << 0x20) & 0xffffffff00000000 |
                 (ulong)(iVar29 + (uVar25 - uVar23));
    lStack_158 = CONCAT44(uVar4 - uVar1,uVar30 - uVar23);
    uStack_150 = lStack_158 + (uVar24 << 0x20) & 0xffffffff00000000 |
                 (ulong)(iVar29 + (uVar30 - uVar23));
    uStack_148 = uVar16;
    uStack_144 = uVar16;
    puStack_140 = &stack0xfffffffffffffff0;
    FUN_10a7b9d9c(plVar14[1],&lStack_168);
  }
  return;
}



/* Entry: 10a7b9c6c; end: 10a7b9d9b;  */

void FUN_10a7b9c6c(undefined8 *param_1,uint *param_2,uint *param_3,undefined4 param_4,int *param_5,
                  int *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar5 = *param_2;
  uVar7 = param_2[1];
  uVar6 = *param_3;
  uVar8 = param_3[1];
  iVar1 = param_3[2] - uVar6;
  if ((int)(param_2[2] - uVar5) <= (int)(param_3[2] - uVar6)) {
    iVar1 = param_2[2] - uVar5;
  }
  iVar4 = param_3[3] - uVar8;
  if ((int)(param_2[3] - uVar7) <= (int)(param_3[3] - uVar8)) {
    iVar4 = param_2[3] - uVar7;
  }
  if (0 < iVar1 && 0 < iVar4) {
    uVar9 = *(uint *)*param_1;
    uVar10 = uVar5;
    if ((int)uVar9 <= (int)uVar5) {
      uVar10 = uVar9;
    }
    uVar2 = uVar6;
    if ((int)uVar10 <= (int)uVar6) {
      uVar2 = uVar10;
    }
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    uVar10 = uVar7;
    if ((int)uVar9 <= (int)uVar7) {
      uVar10 = uVar9;
    }
    uVar3 = uVar8;
    if ((int)uVar10 <= (int)uVar8) {
      uVar3 = uVar10;
    }
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    uVar10 = (*param_5 - uVar5) - iVar1;
    uVar11 = (*param_6 - uVar6) - iVar1;
    if ((int)uVar9 <= (int)uVar10) {
      uVar10 = uVar9;
    }
    if ((int)uVar10 <= (int)uVar11) {
      uVar11 = uVar10;
    }
    uVar10 = (param_5[1] - uVar7) - iVar4;
    uVar12 = (param_6[1] - uVar8) - iVar4;
    if ((int)uVar9 <= (int)uVar10) {
      uVar10 = uVar9;
    }
    if ((int)uVar10 <= (int)uVar12) {
      uVar12 = uVar10;
    }
    iVar1 = uVar2 + iVar1 + (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU));
    uVar13 = (ulong)(uVar3 + iVar4 + (uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)));
    lStack_38 = CONCAT44(uVar7 - uVar3,uVar5 - uVar2);
    uStack_30 = lStack_38 + (uVar13 << 0x20) & 0xffffffff00000000 | (ulong)(iVar1 + (uVar5 - uVar2))
    ;
    lStack_28 = CONCAT44(uVar8 - uVar3,uVar6 - uVar2);
    uStack_20 = lStack_28 + (uVar13 << 0x20) & 0xffffffff00000000 | (ulong)(iVar1 + (uVar6 - uVar2))
    ;
    uStack_18 = param_4;
    uStack_14 = param_4;
    FUN_10a7b9d9c(param_1[1],&lStack_38);
  }
  return;
}



/* Entry: 10a7b9d9c; end: 10a7b9e93;  */

void FUN_10a7b9d9c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 < (undefined8 *)param_1[2]) {
    uVar9 = param_2[1];
    uVar8 = *param_2;
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    puVar7[4] = param_2[4];
    puVar7[1] = uVar9;
    *puVar7 = uVar8;
    puVar7[3] = uVar11;
    puVar7[2] = uVar10;
    puVar7 = puVar7 + 5;
  }
  else {
    lVar6 = (long)puVar7 - *param_1;
    uVar3 = (lVar6 >> 3) * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar3) {
      FUN_10a7b9e94();
      FUN_109ffde64(&UNK_10f676ba7);
      if (param_2 < (undefined8 *)0x666666666666667) {
        __Znwm((long)param_2 * 0x28);
        return;
      }
      func_0x000109ffded8();
      return;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar4 * -0x6666666666666666;
    if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
      uVar5 = uVar3;
    }
    if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar5 = 0x666666666666666;
    }
    plVar2 = param_1;
    FUN_10a7b9ea8();
    puVar1 = (undefined8 *)((long)plVar2 + lVar6);
    uVar9 = param_2[1];
    uVar8 = *param_2;
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    puVar1[4] = param_2[4];
    puVar1[1] = uVar9;
    *puVar1 = uVar8;
    puVar1[3] = uVar11;
    puVar1[2] = uVar10;
    puVar7 = puVar1 + 5;
    lVar4 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar4);
    lVar6 = *param_1;
    *param_1 = lVar4;
    param_1[1] = (long)puVar7;
    param_1[2] = (long)(plVar2 + uVar5 * 5);
    if (lVar6 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar7;
  return;
}



/* Entry: 10a7b9e94; end: 10a7b9ea7;  */

void FUN_10a7b9e94(undefined8 param_1,ulong param_2)

{
  FUN_109ffde64(&UNK_10f676ba7);
  if (param_2 < 0x666666666666667) {
    __Znwm(param_2 * 0x28);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a7b9ea8; end: 10a7b9eeb;  */

void FUN_10a7b9ea8(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
    __Znwm(param_2 * 0x28);
    return;
  }
  func_0x000109ffded8();
  return;
}



/* Entry: 10a7b9eec; end: 10a7b9f13;  */

void FUN_10a7b9eec(void)

{
  return;
}



/* Entry: 10a7b9f14; end: 10a7ba327;  */

void FUN_10a7b9f14(long param_1,int *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,int *param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  
  plVar8 = (long *)*param_4;
  if (plVar8 == (long *)0x0) {
    if ((bRam000000011330a9e8 & 1) == 0) {
      return;
    }
    FUN_10ae06f30(0,1,&UNK_10f6774a8,&UNK_10f6774ea,0x4a5,&UNK_10f6775d2,&stack0x00000000);
    return;
  }
  if (*(char *)(param_1 + 0xa9) != '\x01') {
    if (*(char *)(param_1 + 0xa8) != '\x01') {
      return;
    }
    if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
      if (*param_7 != 0 || param_7[1] != 0) {
        iVar3 = *param_2;
        iVar5 = param_2[1];
        iVar16 = param_2[2] - iVar3;
        iVar18 = param_2[3] - iVar5;
        lVar11 = plVar8[0xb];
        uVar4 = (undefined4)plVar8[1];
        uVar6 = *(undefined4 *)((long)plVar8 + 0xc);
        lVar13 = plVar8[1];
        if ((*param_7 != iVar16) || (param_7[1] != iVar18)) {
          iVar17 = *(int *)(param_1 + 0x80);
          iVar19 = *(int *)(param_1 + 0x84);
          lStack_78 = CONCAT44(iVar18,iVar16);
          FUN_10a775818(&lStack_90,param_1,&lStack_78);
          if (*(int *)(param_1 + 0x24) != 0) {
            lVar12 = 0;
            lVar14 = 0;
            uVar15 = 0;
            iVar16 = *(int *)(param_1 + 0x80);
            iVar18 = *(int *)(param_1 + 0x84);
            do {
              if (((ulong)(lStack_88 - lStack_90 >> 4) <= uVar15) ||
                 (uVar10 = (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 3) *
                           -0x5555555555555555, uVar10 < uVar15 || uVar10 - uVar15 == 0))
              goto LAB_10a7ba304;
              puVar2 = (undefined8 *)(lStack_90 + lVar14);
              uVar9 = *puVar2;
              (**(code **)(*(long *)*param_4 + 0x20))
                        ((long *)*param_4,*(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar12),lVar11
                         ,lVar13,uVar9,CONCAT44(iVar18,iVar16),
                         CONCAT44((int)(((float)iVar5 / (float)iVar19) * (float)iVar18),
                                  (int)(((float)iVar3 / (float)iVar17) * (float)iVar16)),
                         CONCAT44(*(int *)((long)puVar2 + 0xc) - (int)((ulong)uVar9 >> 0x20),
                                  *(int *)(puVar2 + 1) - (int)uVar9));
              iVar16 = iVar16 / 2;
              if (iVar16 < 2) {
                iVar16 = 1;
              }
              iVar18 = iVar18 / 2;
              if (iVar18 < 2) {
                iVar18 = 1;
              }
              *(undefined1 *)(param_1 + 0x20) = 1;
              uVar15 = uVar15 + 1;
              lVar14 = lVar14 + 0x10;
              lVar12 = lVar12 + 0x18;
            } while (uVar15 < *(uint *)(param_1 + 0x24));
          }
          goto LAB_10a7ba2f0;
        }
        goto LAB_10a7ba03c;
      }
    }
    lVar11 = plVar8[0xb];
    uVar4 = (undefined4)plVar8[1];
    uVar6 = *(undefined4 *)((long)plVar8 + 0xc);
LAB_10a7ba03c:
    if (*(undefined8 **)(param_1 + 0xb8) != *(undefined8 **)(param_1 + 0xb0)) {
      (**(code **)(*plVar8 + 0x20))
                (plVar8,**(undefined8 **)(param_1 + 0xb0),lVar11,CONCAT44(uVar6,uVar4),0,
                 *(undefined8 *)(param_1 + 0x80),*(undefined8 *)param_2,CONCAT44(uVar6,uVar4));
      *(undefined1 *)(param_1 + 0x20) = 1;
      return;
    }
LAB_10a7ba304:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a7ba308);
    (*pcVar7)();
  }
  if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
    if (*param_7 != 0 || param_7[1] != 0) {
      iVar3 = *param_2;
      iVar5 = param_2[1];
      lVar11 = plVar8[0xb];
      lStack_78 = plVar8[1];
      if ((*param_7 != param_2[2] - iVar3) || (param_7[1] != param_2[3] - iVar5)) {
        iVar16 = *(int *)(param_1 + 0x80);
        iVar18 = *(int *)(param_1 + 0x84);
        uStack_98 = CONCAT44(param_2[3] - iVar5,param_2[2] - iVar3);
        FUN_10a775818(&lStack_90,param_1,&uStack_98);
        if (*(int *)(param_1 + 0x24) != 0) {
          lVar13 = 0;
          uVar15 = 0;
          iVar17 = *(int *)(param_1 + 0x80);
          iVar19 = *(int *)(param_1 + 0x84);
          do {
            if ((ulong)(lStack_88 - lStack_90 >> 4) <= uVar15) goto LAB_10a7ba304;
            piVar1 = (int *)(lStack_90 + lVar13);
            uStack_98 = CONCAT44(piVar1[3] - piVar1[1],piVar1[2] - *piVar1);
            FUN_10a7ba328(param_1,*param_4,lVar11,&lStack_78,piVar1,
                          (int)(((float)iVar3 / (float)iVar16) * (float)iVar17),
                          (int)(((float)iVar5 / (float)iVar18) * (float)iVar19),&uStack_98,
                          (int)uVar15);
            iVar17 = iVar17 / 2;
            if (iVar17 < 2) {
              iVar17 = 1;
            }
            iVar19 = iVar19 / 2;
            if (iVar19 < 2) {
              iVar19 = 1;
            }
            uVar15 = uVar15 + 1;
            lVar13 = lVar13 + 0x10;
          } while (uVar15 < *(uint *)(param_1 + 0x24));
        }
LAB_10a7ba2f0:
        if (lStack_90 == 0) {
          return;
        }
        lStack_88 = lStack_90;
        __ZdlPv();
        return;
      }
      goto LAB_10a7b9f88;
    }
  }
  lVar11 = plVar8[0xb];
  lStack_78 = plVar8[1];
  iVar3 = *param_2;
  iVar5 = param_2[1];
LAB_10a7b9f88:
  lStack_90 = 0;
  FUN_10a7ba328(param_1,plVar8,lVar11,&lStack_78,&lStack_90,iVar3,iVar5,&lStack_78,0);
  return;
}



/* Entry: 10a7ba328; end: 10a7ba4b7;  */

void FUN_10a7ba328(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,int param_6,int param_7,int *param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined1 uStack_79;
  long lStack_78;
  long lStack_70;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = param_6 / iVar1;
  }
  param_6 = param_6 - iVar3 * iVar1;
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = (param_6 + iVar1 + *param_8 + -1) / iVar1;
  }
  iVar4 = iVar4 * iVar1;
  if (0 < iVar4) {
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = param_7 / iVar2;
    }
    param_7 = param_7 - iVar5 * iVar2;
    iVar6 = 0;
    if (iVar2 != 0) {
      iVar6 = (param_7 + iVar2 + param_8[1] + -1) / iVar2;
    }
    iVar6 = iVar6 * iVar2;
    if ((0 < iVar6) &&
       (plVar7 = param_2, (**(code **)(*param_2 + 0x18))(param_2,iVar4,iVar6), 0 < (int)plVar7)) {
      uStack_79 = 0;
      FUN_10a0cf3f0(&lStack_78,(ulong)plVar7 & 0xffffffff,&uStack_79);
      (**(code **)(*param_2 + 0x20))
                (param_2,lStack_78,param_3,*param_4,*param_5,CONCAT44(iVar6,iVar4),
                 CONCAT44(param_7,param_6),*(undefined8 *)param_8);
      (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
                (*(long **)(param_1 + 0x28),iVar3 * iVar1,iVar5 * iVar2,0,iVar4,iVar6,0,lStack_78,
                 param_9,0);
      (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
      if (lStack_78 != 0) {
        lStack_70 = lStack_78;
        __ZdlPv();
      }
    }
  }
  return;
}



/* Entry: 10a7ba4b8; end: 10a7ba60b;  */

void FUN_10a7ba4b8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *extraout_x8;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    uVar10 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    puVar9[1] = param_2[1];
    *puVar9 = uVar10;
    puVar9[3] = uVar12;
    puVar9[2] = uVar11;
    puVar9 = puVar9 + 4;
  }
  else {
    lVar8 = (long)puVar9 - *param_1;
    uVar1 = (lVar8 >> 5) + 1;
    if (uVar1 >> 0x3b != 0) {
      FUN_10a7ba60c();
      lVar8 = *param_1;
      if ((undefined8 *)(param_1[2] - lVar8 >> 5) < param_2) {
        if ((ulong)param_2 >> 0x3b != 0) {
          FUN_10a7ba60c();
          FUN_109ffde64(&UNK_10f676ba7);
          if ((ulong)param_2 >> 0x3b == 0) {
            __Znwm((long)param_2 << 5);
            return;
          }
          func_0x000109ffded8();
          lVar8 = 0x78;
          __Znwm();
          FUN_10a7ba6c4();
          *extraout_x8 = lVar8 + 0x18;
          extraout_x8[1] = lVar8;
          return;
        }
        lVar6 = param_1[1];
        plVar3 = param_1;
        FUN_10a7ba620();
        lVar8 = (long)plVar3 + (lVar6 - lVar8);
        lVar7 = lVar8 - (param_1[1] - *param_1);
        _memcpy(lVar7);
        lVar6 = *param_1;
        *param_1 = lVar7;
        param_1[1] = lVar8;
        param_1[2] = (long)(plVar3 + (long)param_2 * 4);
        if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)();
          return;
        }
      }
      return;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 4;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar4) {
      uVar5 = 0x7ffffffffffffff;
    }
    plVar3 = param_1;
    FUN_10a7ba620();
    puVar2 = (undefined8 *)((long)plVar3 + lVar8);
    uVar10 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    puVar2[1] = param_2[1];
    *puVar2 = uVar10;
    puVar2[3] = uVar12;
    puVar2[2] = uVar11;
    puVar9 = puVar2 + 4;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lVar8 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)(plVar3 + uVar5 * 4);
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return;
}



/* Entry: 10a7ba60c; end: 10a7ba61f;  */

void FUN_10a7ba60c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long *extraout_x8;
  
  FUN_109ffde64(&UNK_10f676ba7);
  if (param_2 >> 0x3b == 0) {
    __Znwm(param_2 << 5);
    return;
  }
  func_0x000109ffded8();
  lVar1 = 0x78;
  __Znwm();
  FUN_10a7ba6c4();
  *extraout_x8 = lVar1 + 0x18;
  extraout_x8[1] = lVar1;
  return;
}



/* Entry: 10a7ba620; end: 10a7ba653;  */

void FUN_10a7ba620(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long *extraout_x8;
  
  if (param_2 >> 0x3b == 0) {
    __Znwm(param_2 << 5);
    return;
  }
  func_0x000109ffded8();
  lVar1 = 0x78;
  __Znwm();
  FUN_10a7ba6c4();
  *extraout_x8 = lVar1 + 0x18;
  extraout_x8[1] = lVar1;
  return;
}



/* Entry: 10a7ba654; end: 10a7ba6c3;  */

void FUN_10a7ba654(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x78;
  __Znwm();
  FUN_10a7ba6c4();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a7ba6c4; end: 10a7ba70b;  */

undefined8 * FUN_10a7ba6c4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bc82f0;
  FUN_10a7ba70c(param_1 + 3);
  return param_1;
}



/* Entry: 10a7ba70c; end: 10a7ba817;  */

undefined8
FUN_10a7ba70c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = (long *)param_2[1];
  if (plVar4 == (long *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 == (long *)0x0) {
      uStack_50 = 0;
      plStack_48 = (long *)0x0;
      plVar4 = (long *)param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      if (plVar4 == (long *)0x0) goto LAB_10a7ba7c4;
    }
    else {
      uStack_50 = *param_2;
      plVar1 = plVar4 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      plStack_48 = plVar4;
      if (lVar5 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
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
      if (lVar5 != 0) goto LAB_10a7ba7c4;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10a7ba7c4:
  FUN_10a77d610(param_1,&uStack_50,param_3,param_4);
  if (plStack_48 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a7ba818; end: 10a7ba893;  */

long * FUN_10a7ba818(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110c19098;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x98;
  }
  FUN_10a7ba894(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a7ba894; end: 10a7ba943;  */

void FUN_10a7ba894(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a7ba944; end: 10a7ba947;  */

void FUN_10a7ba944(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7ba948; end: 10a7ba95b;  */

void FUN_10a7ba948(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7ba95c; end: 10a7ba973;  */

void FUN_10a7ba95c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a7ba96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a7ba974; end: 10a7ba9ab;  */

undefined8 FUN_10a7ba974(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c190e8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a7ba9ac; end: 10a7ba9af;  */

void FUN_10a7ba9ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7ba9b0; end: 10a7babc7;  */

undefined8 *
FUN_10a7ba9b0(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,int param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9,
             undefined4 param_10,char param_11)

{
  undefined **ppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined2 uStack_6c;
  undefined2 auStack_6a [5];
  
  puVar3 = param_1;
  FUN_10a773774(param_1,param_2,param_4,param_3,param_6,param_7,param_8,param_10);
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  *puVar3 = &PTR_FUN_110c19110;
  *(char *)(puVar3 + 0x15) = (char)param_5;
  *(char *)((long)puVar3 + 0xa9) = param_11;
  *(undefined1 *)((long)puVar3 + 0xaa) = 0;
  puVar6 = puVar3 + 0x16;
  *puVar6 = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  if (((param_11 != '\0') && (*(char *)((long)param_1 + 0x21) == '\x01')) &&
     ((1 < *(int *)(param_1 + 3) || (1 < *(int *)((long)param_1 + 0x1c))))) {
    *(undefined1 *)((long)param_1 + 0xa9) = 0;
  }
  FUN_10a7babc8(param_1,param_9,param_6);
  if ((param_5 != 0) && ((*(byte *)((long)param_1 + 0xa9) & 1) == 0)) {
    uVar7 = (uint)param_8;
    if ((uVar7 == 0) || ((*(byte *)((long)param_1 + 0x21) & 1) == 0)) {
      FUN_10a7bb03c(puVar6,1);
      if (param_1[0x17] == param_1[0x16]) {
LAB_10a7bab90:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a7bab94);
        (*pcVar2)();
      }
      ppuVar1 = &PTR_DAT_110ae4700 + (param_3 & 0xffffffff) * 4;
      if (0x56 < (uint)param_3) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      uStack_6c = 0;
      FUN_10a7bb0d0(param_1[0x16],
                    (long)*(int *)((long)param_1 + 0x8c) * (long)*(int *)(param_1 + 0x11) *
                    (ulong)*(byte *)((long)ppuVar1 + 0x1b),&uStack_6c);
    }
    else {
      FUN_10a7bb03c(puVar6,uVar7 + 1);
      uVar4 = 0;
      uVar8 = param_1[0x10];
      ppuVar1 = &PTR_DAT_110ae4700 + (param_3 & 0xffffffff) * 4;
      if (0x56 < (uint)param_3) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      do {
        uVar5 = ((long)(param_1[0x17] - param_1[0x16]) >> 3) * -0x5555555555555555;
        if (uVar5 < (byte)uVar4 || uVar5 - (byte)uVar4 == 0) goto LAB_10a7bab90;
        iVar9 = (int)((ulong)uVar8 >> 0x20);
        auStack_6a[0] = 0;
        FUN_10a7bb0d0(param_1[0x16] + (ulong)(uVar4 & 0xff) * 0x18,
                      (long)(int)(uint)*(byte *)((long)ppuVar1 + 0x1b) * (long)((int)uVar8 * iVar9),
                      auStack_6a);
        uVar8 = NEON_smax(CONCAT44(iVar9 / 2,(int)uVar8 / 2),0x100000001,4);
        uVar4 = (uVar4 & 0xff) + 1;
      } while ((uVar4 & 0xff) < uVar7);
    }
  }
  return param_1;
}



/* Entry: 10a7babc8; end: 10a7bb03b;  */

void FUN_10a7babc8(long param_1,int param_2,uint param_3)

{
  undefined **ppuVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  bool bVar12;
  undefined8 uVar13;
  uint uVar14;
  ushort uStack_da;
  long *plStack_d8;
  long *plStack_d0;
  uint uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulong uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  if (param_2 == 0) {
    lStack_88 = 0;
    lStack_80 = 0;
    uStack_78 = 0;
    if (*(char *)(param_1 + 0xa9) == '\x01') goto LAB_10a7bac48;
    bVar8 = false;
    lVar10 = 0;
  }
  else {
    lStack_88 = 0;
    lStack_80 = 0;
    uStack_78 = 0;
    if ((*(byte *)(param_1 + 0xa9) & 1) == 0) {
      if (((*(char *)(param_1 + 0xa8) != '\x01') ||
          (plVar6 = *(long **)(param_1 + 0xb0), plVar6 == *(long **)(param_1 + 0xb8))) ||
         (*plVar6 == plVar6[1])) {
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 8) * 4;
        if (0x56 < *(uint *)(param_1 + 8)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        lVar5 = (long)*(int *)(param_1 + 0x84) * (long)*(int *)(param_1 + 0x80) *
                (ulong)*(byte *)((long)ppuVar1 + 0x1b);
        lVar10 = lVar5 * 2;
        if ((int)lVar5 < 0) {
          lVar10 = -1;
        }
        __Znam();
        _bzero();
        bVar12 = false;
        bVar8 = true;
        goto LAB_10a7bace8;
      }
      bVar8 = true;
      lVar10 = *plVar6;
    }
    else {
LAB_10a7bac48:
      uStack_78 = 0;
      lStack_80 = 0;
      lStack_88 = 0;
      ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 8) * 4;
      if (0x56 < *(uint *)(param_1 + 8)) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      uStack_c0 = uStack_c0 & 0xffff0000;
      func_0x000109366310(&lStack_88,
                          (long)*(int *)(param_1 + 0x84) * (long)*(int *)(param_1 + 0x80) *
                          (ulong)*(byte *)((long)ppuVar1 + 0x1b),&uStack_c0);
      bVar8 = true;
      lVar10 = lStack_88;
    }
  }
  bVar12 = true;
LAB_10a7bace8:
  uStack_b0 = *(undefined4 *)(param_1 + 8);
  uStack_c0 = 0;
  uStack_bc = *(undefined8 *)(param_1 + 0x80);
  uStack_b4 = 1;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_a4 = 1;
  uStack_a0 = (ulong)param_3;
  if (bVar8) {
    uVar9 = 0x20;
  }
  else {
    uStack_a8 = 4;
    uVar9 = 0x24;
  }
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    uStack_a8 = uVar9;
  }
  lVar5 = 0;
  lStack_90 = lVar10;
  FUN_10a2421c8();
  plVar6 = *(long **)(lVar5 + 0x228);
  (**(code **)(*plVar6 + 0x20))(plVar6,&uStack_c0);
  FUN_10a0a25e4(&plStack_d8,plVar6);
  FUN_10a00e5c4(param_1 + 0x28,&plStack_d8);
  plVar6 = plStack_d0;
  if (plStack_d0 != (long *)0x0) {
    plVar7 = plStack_d0 + 1;
    do {
      lVar5 = *plVar7;
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar8) {
        *plVar7 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (((*(char *)(param_1 + 0xa9) == '\x01') && (*(char *)(param_1 + 0x21) == '\x01')) &&
     ((uVar11 = *(uint *)(param_1 + 0x24), uVar11 != 0 && (*(long *)(param_1 + 0x28) != 0)))) {
    if ((*(int *)(param_1 + 0x18) < 2) && (*(int *)(param_1 + 0x1c) < 2)) {
      bVar8 = false;
      plVar6 = (long *)0x0;
    }
    else {
      iVar4 = *(int *)(param_1 + 8);
      func_0x00010ab79cdc();
      if (iVar4 == -1) {
        plVar6 = (long *)0x0;
      }
      else {
        FUN_10a1b70c8(&plStack_d8);
        uVar11 = *(uint *)(param_1 + 0x24);
        plVar6 = plStack_d8;
      }
      bVar8 = true;
    }
    if (1 < uVar11) {
      uVar13 = NEON_smax(CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) / 2,
                                  (int)*(undefined8 *)(param_1 + 0x80) / 2),0x100000001,4);
      uVar11 = 1;
      do {
        uVar14 = (uint)((ulong)uVar13 >> 0x20);
        uVar3 = (uint)uVar13;
        if (bVar8) {
          if ((plVar6 != (long *)0x0) &&
             (plVar7 = plVar6, (**(code **)(*plVar6 + 0x18))(plVar6,uVar3,uVar14), 0 < (int)plVar7))
          {
            uStack_da = uStack_da & 0xff00;
            FUN_10a0cf3f0(&plStack_d8,(ulong)plVar7 & 0xffffffff,&uStack_da);
            (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
                      (*(long **)(param_1 + 0x28),0,0,0,uVar3,uVar14,0,plStack_d8,uVar11,0);
            goto LAB_10a7baf34;
          }
        }
        else {
          ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 8) * 4;
          if (0x56 < *(uint *)(param_1 + 8)) {
            ppuVar1 = &PTR_DAT_110ae4700;
          }
          uStack_da = 0;
          FUN_10a7bbdc4(&plStack_d8,(ulong)*(byte *)((long)ppuVar1 + 0x1b) * (ulong)(uVar3 * uVar14)
                        ,&uStack_da);
          (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
                    (*(long **)(param_1 + 0x28),0,0,0,uVar3,uVar14,0,plStack_d8,uVar11,0);
LAB_10a7baf34:
          if (plStack_d8 != (long *)0x0) {
            plStack_d0 = plStack_d8;
            __ZdlPv();
          }
        }
        uVar13 = NEON_umax(CONCAT44(uVar14 >> 1,uVar3 >> 1),0x100000001,4);
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_1 + 0x24));
    }
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6);
    }
  }
  if (lVar10 == 0) {
    bVar12 = true;
  }
  if (!bVar12) {
    __ZdaPv(lVar10);
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a7bb03c; end: 10a7bb0cf;  */

void FUN_10a7bb03c(long *param_1,ulong param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar7 = param_1[1] - *param_1 >> 3;
  bVar3 = param_2 < (ulong)(lVar7 * -0x5555555555555555);
  uVar6 = param_2 + lVar7 * 0x5555555555555555;
  if (bVar3 || uVar6 == 0) {
    if (bVar3) {
      plVar5 = (long *)(*param_1 + param_2 * 0x18);
      plVar4 = (long *)param_1[1];
      while (plVar2 = plVar4, plVar2 != plVar5) {
        plVar4 = plVar2 + -3;
        if (*plVar4 != 0) {
          plVar2[-2] = *plVar4;
          __ZdlPv();
        }
      }
      param_1[1] = (long)plVar5;
    }
    return;
  }
  lVar7 = param_1[1];
  if ((ulong)((param_1[2] - lVar7 >> 3) * -0x5555555555555555) < uVar6) {
    lVar7 = lVar7 - *param_1;
    uVar12 = uVar6 + (lVar7 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar12) {
      FUN_10a7bbfa8();
      plVar4 = (long *)&UNK_10f676ba7;
      FUN_109ffde64();
      if (uVar6 < 0xaaaaaaaaaaaaaab) {
        __Znwm(uVar6 * 0x18);
        return;
      }
      func_0x000109ffded8();
      puVar9 = (undefined2 *)plVar4[1];
      if ((ulong)(plVar4[2] - (long)puVar9 >> 1) < uVar6) {
        lVar7 = (long)puVar9 - *plVar4;
        uVar12 = uVar6 + (lVar7 >> 1);
        if ((long)uVar12 < 0) {
          func_0x00010a0446d4();
          if (*(long *)*plVar4 == 0) {
            return;
          }
          FUN_10a7bc140();
          lVar7 = *(long *)*plVar4;
        }
        else {
          uVar11 = plVar4[2] - *plVar4;
          uVar13 = uVar11;
          if (uVar11 <= uVar12) {
            uVar13 = uVar12;
          }
          if (0x7ffffffffffffffd < uVar11) {
            uVar13 = 0x7fffffffffffffff;
          }
          if (uVar13 == 0) {
            plVar5 = (long *)0x0;
          }
          else {
            plVar5 = plVar4;
            FUN_10a0446e8();
          }
          puVar9 = (undefined2 *)((long)plVar5 + lVar7);
          lVar7 = uVar6 << 1;
          uVar1 = *param_3;
          puVar10 = puVar9;
          do {
            *puVar10 = uVar1;
            lVar7 = lVar7 + -2;
            puVar10 = puVar10 + 1;
          } while (lVar7 != 0);
          lVar8 = (long)puVar9 - (plVar4[1] - *plVar4);
          _memcpy(lVar8);
          lVar7 = *plVar4;
          *plVar4 = lVar8;
          plVar4[1] = (long)(puVar9 + uVar6);
          plVar4[2] = (long)((long)plVar5 + uVar13 * 2);
          if (lVar7 == 0) {
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar7);
        return;
      }
      puVar10 = puVar9;
      if (uVar6 != 0) {
        uVar1 = *param_3;
        lVar7 = uVar6 << 1;
        puVar10 = puVar9 + uVar6;
        do {
          *puVar9 = uVar1;
          lVar7 = lVar7 + -2;
          puVar9 = puVar9 + 1;
        } while (lVar7 != 0);
      }
      plVar4[1] = (long)puVar10;
      return;
    }
    lVar8 = param_1[2] - *param_1 >> 3;
    uVar13 = lVar8 * 0x5555555555555556;
    if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
      uVar13 = uVar12;
    }
    if (0x555555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar13 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (uVar13 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_10a7bbfbc();
    }
    lVar7 = (long)plVar4 + lVar7;
    lVar8 = ((uVar6 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar7,lVar8);
    lVar14 = lVar7 - (param_1[1] - *param_1);
    _memcpy(lVar14);
    lStack_68 = *param_1;
    *param_1 = lVar14;
    param_1[1] = lVar7 + lVar8;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar4 + uVar13 * 3);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    FUN_109de72c8(&lStack_68);
  }
  else {
    if (uVar6 != 0) {
      lVar8 = ((uVar6 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar7,lVar8);
      lVar7 = lVar7 + lVar8;
    }
    param_1[1] = lVar7;
  }
  return;
}



/* Entry: 10a7bb0d0; end: 10a7bb0ff;  */

void FUN_10a7bb0d0(long *param_1,ulong param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = param_1[1] - *param_1 >> 1;
  if (param_2 <= uVar6) {
    if (param_2 < uVar6) {
      param_1[1] = *param_1 + param_2 * 2;
    }
    return;
  }
  param_2 = param_2 - uVar6;
  puVar4 = (undefined2 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar4 >> 1) < param_2) {
    lVar9 = (long)puVar4 - *param_1;
    uVar6 = param_2 + (lVar9 >> 1);
    if ((long)uVar6 < 0) {
      func_0x00010a0446d4();
      if (*(long *)*param_1 == 0) {
        return;
      }
      FUN_10a7bc140();
      lVar9 = *(long *)*param_1;
    }
    else {
      uVar7 = param_1[2] - *param_1;
      uVar3 = uVar7;
      if (uVar7 <= uVar6) {
        uVar3 = uVar6;
      }
      if (0x7ffffffffffffffd < uVar7) {
        uVar3 = 0x7fffffffffffffff;
      }
      if (uVar3 == 0) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = param_1;
        FUN_10a0446e8();
      }
      puVar4 = (undefined2 *)((long)plVar2 + lVar9);
      lVar9 = param_2 * 2;
      uVar1 = *param_3;
      puVar5 = puVar4;
      do {
        *puVar5 = uVar1;
        lVar9 = lVar9 + -2;
        puVar5 = puVar5 + 1;
      } while (lVar9 != 0);
      lVar8 = (long)puVar4 - (param_1[1] - *param_1);
      _memcpy(lVar8);
      lVar9 = *param_1;
      *param_1 = lVar8;
      param_1[1] = (long)(puVar4 + param_2);
      param_1[2] = (long)plVar2 + uVar3 * 2;
      if (lVar9 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar9);
    return;
  }
  puVar5 = puVar4;
  if (param_2 != 0) {
    uVar1 = *param_3;
    lVar9 = param_2 * 2;
    puVar5 = puVar4 + param_2;
    do {
      *puVar4 = uVar1;
      lVar9 = lVar9 + -2;
      puVar4 = puVar4 + 1;
    } while (lVar9 != 0);
  }
  param_1[1] = (long)puVar5;
  return;
}



/* Entry: 10a7bb100; end: 10a7bb1fb;  */

undefined8 * FUN_10a7bb100(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c19110;
  puStack_28 = param_1 + 0x16;
  FUN_10a7bc100(&puStack_28);
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110c18ff0;
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    __ZdlPv();
  }
  FUN_10a7a2e48(param_1 + 7);
  func_0x00010a0523dc(param_1 + 5);
  return param_1;
}



/* Entry: 10a7bb1fc; end: 10a7bb2bb;  */

void FUN_10a7bb1fc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_38;
  
  FUN_10a77468c(&iStack_58);
  if ((iStack_58 < iStack_50 && iStack_4c != iStack_54) &&
      (iStack_50 <= iStack_58 || iStack_54 <= iStack_4c)) {
    (**(code **)(*param_2 + 0x60))(param_1,param_2,auStack_48,uStack_38);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  return;
}



/* Entry: 10a7bb2bc; end: 10a7bb34f;  */

void FUN_10a7bb2bc(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,0);
  if ((param_4 != 0) && (*param_1 != 0)) {
    lVar1 = *(long *)(*param_1 + 0x18);
    FUN_10a7bc194(param_2,lVar1,lVar1 + 0x40,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7bb350; end: 10a7bb3e7;  */

void FUN_10a7bb350(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,0);
  if ((*param_4 != 0) && (*param_1 != 0)) {
    lVar1 = *(long *)(*param_1 + 0x18);
    FUN_10a7bd520(param_2,lVar1,lVar1 + 0x20,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7bb3e8; end: 10a7bb477;  */

void FUN_10a7bb3e8(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,0);
  if (*param_1 != 0) {
    lVar1 = *(long *)(*param_1 + 0x18);
    FUN_10a7be1d4(param_2,lVar1,lVar1 + 0x40,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7bb478; end: 10a7bb50b;  */

void FUN_10a7bb478(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x60))(param_1,param_2,param_3,0);
  if ((param_4 != 0) && (*param_1 != 0)) {
    lVar1 = *(long *)(*param_1 + 0x18);
    FUN_10a7bc194(param_2,lVar1,lVar1 + 0x40,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7bb50c; end: 10a7bb5bf;  */

void FUN_10a7bb50c(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  
  if (*param_4 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(*param_4 + 0x10) == 1;
  }
  (**(code **)(*param_2 + 0x60))(param_1,param_2,param_3,bVar1);
  if ((*param_4 != 0) && (*param_1 != 0)) {
    lVar2 = *(long *)(*param_1 + 0x18);
    FUN_10a7bd520(param_2,lVar2,lVar2 + 0x40,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7bb5c0; end: 10a7bb64f;  */

void FUN_10a7bb5c0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x60))(param_1,param_2,param_3,0);
  if (*param_1 != 0) {
    lVar1 = *(long *)(*param_1 + 0x18);
    FUN_10a7be1d4(param_2,lVar1,lVar1 + 0x40,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7bb650; end: 10a7bb98f;  */

void FUN_10a7bb650(long *param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  byte bVar9;
  bool bVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  undefined8 uStack_58;
  
  if ((*(int *)(param_2 + 0x24) == 0) || (*(char *)(param_2 + 0x21) != '\x01')) {
LAB_10a7bb698:
    iVar19 = param_3[2] - *param_3;
    iVar21 = param_3[3] - param_3[1];
  }
  else {
    iVar19 = *param_4;
    iVar21 = param_4[1];
    if (iVar19 == 0 && iVar21 == 0) goto LAB_10a7bb698;
    if (iVar19 != param_3[2] - *param_3 || iVar21 != param_3[3] - param_3[1]) {
      uStack_58 = *(undefined8 *)param_4;
      bVar10 = true;
      goto LAB_10a7bb6b4;
    }
  }
  bVar10 = false;
  uStack_58 = CONCAT44(iVar21,iVar19);
LAB_10a7bb6b4:
  uStack_70 = *(undefined4 *)(param_2 + 8);
  FUN_10ab79b88();
  FUN_10a326b40(param_1,&uStack_78,&uStack_58,&uStack_70);
  if ((*(byte *)(param_2 + 0xa9) & 1) == 0) {
    ppuVar3 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 8) * 4;
    if (0x56 < *(uint *)(param_2 + 8)) {
      ppuVar3 = &PTR_DAT_110ae4700;
    }
    bVar9 = *(byte *)((long)ppuVar3 + 0x1b);
    uVar30 = (ulong)bVar9;
    iVar19 = 1;
    FUN_109fc8e58(1,1);
    uVar29 = (uint)bVar9;
    if (!bVar10) {
      plVar32 = *(long **)(param_2 + 0xb0);
      if (*(long **)(param_2 + 0xb8) != plVar32) {
        uVar30 = (ulong)(int)((*param_3 + *(int *)(param_2 + 0x80) * param_3[1]) * uVar29);
        if (uVar30 < (ulong)(plVar32[1] - *plVar32 >> 1)) {
          lVar22 = *param_1;
          FUN_10a1b7ee0(*(undefined8 *)(lVar22 + 0x28),*plVar32 + uVar30 * 2,
                        *(undefined8 *)(lVar22 + 0x18),*(int *)(param_2 + 0x80) * iVar19,
                        (long)*(int *)(lVar22 + 0x14));
          return;
        }
      }
LAB_10a7bb974:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10a7bb978);
      (*pcVar11)();
    }
    uStack_78 = CONCAT44(param_3[3] - param_3[1],param_3[2] - *param_3);
    FUN_10a775818(&uStack_70);
    uVar24 = *(uint *)(param_2 + 0x24);
    if (uVar24 != 0) {
      uVar20 = 0;
      iVar4 = *param_3;
      iVar6 = param_3[1];
      iVar5 = param_3[2];
      iVar7 = param_3[3];
      iVar19 = *(int *)(param_2 + 0x80);
      iVar21 = *(int *)(param_2 + 0x84);
      fVar36 = (float)iVar19;
      fVar34 = (float)iVar4 / fVar36;
      fVar37 = (float)iVar21;
      fVar35 = (float)iVar6 / fVar37;
      lVar22 = *(long *)(*param_1 + 0x28);
      do {
        iVar13 = (int)(fVar35 * (float)iVar21);
        iVar23 = (int)((fVar35 + (float)(iVar7 - iVar6) / fVar37) * (float)iVar21);
        if (iVar13 < iVar23) {
          iVar25 = 0;
          iVar26 = (int)((fVar34 + (float)(iVar5 - iVar4) / fVar36) * (float)iVar19);
          iVar12 = (int)(fVar34 * (float)iVar19);
          uVar27 = uVar20 & 0xff;
          uVar14 = uVar30 * ((long)iVar12 + (long)iVar19 * (long)iVar13);
          do {
            if (iVar12 < iVar26) {
              iVar15 = 0;
              uVar16 = uVar14;
              lVar17 = (long)iVar12;
              do {
                if ((ulong)(lStack_68 - CONCAT44(uStack_6c,uStack_70) >> 4) <= uVar27)
                goto LAB_10a7bb974;
                if (uVar29 != 0) {
                  piVar2 = (int *)(CONCAT44(uStack_6c,uStack_70) + uVar27 * 0x10);
                  puVar18 = (undefined1 *)
                            (lVar22 + (int)(uVar29 * (*piVar2 + iVar15 +
                                                     *(int *)(*param_1 + 0x10) *
                                                     (iVar25 + piVar2[1]))));
                  uVar28 = uVar16;
                  uVar31 = uVar30;
                  do {
                    uVar33 = (*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0) >> 3) *
                             -0x5555555555555555;
                    if ((uVar33 < uVar27 || uVar33 - uVar27 == 0) ||
                       (plVar32 = (long *)(*(long *)(param_2 + 0xb0) + uVar27 * 0x18),
                       lVar8 = *plVar32, (ulong)(plVar32[1] - lVar8 >> 1) <= uVar28))
                    goto LAB_10a7bb974;
                    *puVar18 = (char)*(undefined2 *)(lVar8 + uVar28 * 2);
                    uVar28 = uVar28 + 1;
                    uVar31 = uVar31 - 1;
                    puVar18 = puVar18 + 1;
                  } while (uVar31 != 0);
                }
                lVar17 = lVar17 + 1;
                iVar15 = iVar15 + 1;
                uVar16 = uVar16 + uVar30;
              } while ((int)lVar17 != iVar26);
            }
            iVar13 = iVar13 + 1;
            iVar25 = iVar25 + 1;
            uVar14 = uVar14 + (long)(int)uVar29 * (long)iVar19;
          } while (iVar13 != iVar23);
          uVar24 = *(uint *)(param_2 + 0x24);
        }
        iVar19 = iVar19 / 2;
        if (iVar19 < 2) {
          iVar19 = 1;
        }
        iVar21 = iVar21 / 2;
        if (iVar21 < 2) {
          iVar21 = 1;
        }
        uVar1 = (int)uVar20 + 1;
        uVar20 = (ulong)uVar1;
      } while ((uVar1 & 0xff) < uVar24);
    }
    lStack_68 = CONCAT44(uStack_6c,uStack_70);
    if (lStack_68 != 0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a7bb990; end: 10a7bbbaf;  */

void FUN_10a7bb990(undefined4 *param_1,long param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  
  *(undefined1 *)(param_1 + 1) = 0;
  puVar9 = (undefined8 *)(param_1 + 2);
  *puVar9 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = *(undefined4 *)(param_2 + 8);
  plVar3 = *(long **)(param_2 + 0xb0);
  if ((plVar3 != *(long **)(param_2 + 0xb8)) && (lVar10 = *plVar3, lVar10 != plVar3[1])) {
    iVar16 = *(int *)(param_2 + 0x24);
    if ((iVar16 != 0) && (*(char *)(param_2 + 0x21) == '\x01')) {
      iVar8 = *param_4;
      iVar17 = param_4[1];
      if (iVar8 != 0 || iVar17 != 0) {
        iVar1 = *param_3;
        iVar2 = param_3[1];
        iVar4 = param_3[2] - iVar1;
        iVar5 = param_3[3] - iVar2;
        *(bool *)(param_1 + 1) = iVar8 != iVar4 || iVar17 != iVar5;
        if (iVar8 != iVar4 || iVar17 != iVar5) {
          uVar14 = *(undefined8 *)(param_2 + 0x80);
          func_0x00010a7ba580(puVar9,iVar16);
          if (*(int *)(param_2 + 0x24) == 0) {
            return;
          }
          lVar10 = 0;
          uVar11 = 0;
          fVar15 = (float)(int)((ulong)uVar14 >> 0x20);
          iVar16 = (int)uVar14;
          fVar18 = (float)iVar1 / (float)iVar16;
          fVar19 = (float)iVar2 / fVar15;
          do {
            uVar7 = (*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0) >> 3) *
                    -0x5555555555555555;
            if (uVar7 < uVar11 || uVar7 - uVar11 == 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7bbb8c);
              (*pcVar6)();
            }
            iVar17 = (int)((ulong)uVar14 >> 0x20);
            fVar12 = (float)iVar17;
            iVar8 = (int)(fVar19 * fVar12);
            fVar13 = (float)(int)uVar14;
            lStack_b0 = *(long *)(*(long *)(param_2 + 0xb0) + lVar10);
            lStack_a0 = CONCAT44(iVar8,(int)(fVar18 * fVar13));
            uStack_98 = lStack_a0 +
                        ((ulong)(uint)((int)((fVar19 + (float)iVar5 / fVar15) * fVar12) - iVar8) <<
                        0x20) & 0xffffffff00000000 |
                        (ulong)(uint)(int)((fVar18 + (float)iVar4 / (float)iVar16) * fVar13);
            uStack_a8 = uVar14;
            func_0x00010a7ba4b8(puVar9,&lStack_b0);
            uVar14 = NEON_smax(CONCAT44(iVar17 / 2,(int)uVar14 / 2),0x100000001,4);
            uVar11 = uVar11 + 1;
            lVar10 = lVar10 + 0x18;
          } while (uVar11 < *(uint *)(param_2 + 0x24));
          return;
        }
      }
    }
    uStack_a8 = *(undefined8 *)(param_2 + 0x80);
    uStack_98 = *(ulong *)(param_3 + 2);
    lStack_a0 = *(long *)param_3;
    lStack_b0 = lVar10;
    func_0x00010a7ba4b8(puVar9,&lStack_b0);
  }
  return;
}



/* Entry: 10a7bbbb0; end: 10a7bbbb7;  */

undefined1 FUN_10a7bbbb0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa9);
}



/* Entry: 10a7bbbb8; end: 10a7bbc7f;  */

void FUN_10a7bbbb8(undefined8 *param_1,long param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 uStack_31;
  
  if (*param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lStack_48 = *(long *)(param_2 + 0xa0);
    uStack_50 = *(undefined8 *)(param_2 + 0x98);
    if (*(long *)(param_2 + 0xa0) != 0) {
      plVar1 = (long *)(*(long *)(param_2 + 0xa0) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_54 = param_4;
    FUN_10a7be778(param_1,&uStack_31,&uStack_50,param_3,&uStack_54);
    if (lStack_48 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a773954(param_2,*param_3 + 0x20);
  }
  return;
}



/* Entry: 10a7bbc80; end: 10a7bbc8f;  */

void FUN_10a7bbc80(long *param_1)

{
  *(undefined1 *)((long)param_1 + 0xaa) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010a7bbc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))();
  return;
}



/* Entry: 10a7bbc90; end: 10a7bbdc3;  */

void FUN_10a7bbc90(long param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (((*(byte *)(param_1 + 0xa9) & 1) == 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
    if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
      uVar2 = 0;
      uVar3 = 0;
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      do {
        uVar4 = (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
        if (uVar4 < (byte)uVar3 || uVar4 - (byte)uVar3 == 0) goto LAB_10a7bbdc0;
        iVar6 = (int)((ulong)uVar5 >> 0x20);
        (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
                  (*(long **)(param_1 + 0x28),0,0,0,(int)uVar5,iVar6,0,
                   *(undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)(uVar3 & 0xff) * 0x18),uVar2,0
                  );
        uVar5 = NEON_smax(CONCAT44(iVar6 / 2,(int)uVar5 / 2),0x100000001,4);
        uVar3 = (uVar3 & 0xff) + 1;
        uVar2 = uVar3 & 0xff;
      } while ((uVar3 & 0xff) < *(uint *)(param_1 + 0x24));
    }
    else {
      if (*(undefined8 **)(param_1 + 0xb8) == *(undefined8 **)(param_1 + 0xb0)) {
LAB_10a7bbdc0:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7bbdc4);
        (*pcVar1)();
      }
      (**(code **)(**(long **)(param_1 + 0x28) + 0x98))
                (*(long **)(param_1 + 0x28),**(undefined8 **)(param_1 + 0xb0),0,0);
      (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10a7bbdc4; end: 10a7bbe43;  */

undefined8 * FUN_10a7bbdc4(undefined8 *param_1,long param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a14f690(param_1);
    puVar2 = (undefined2 *)param_1[1];
    lVar4 = param_2 << 1;
    uVar1 = *param_3;
    puVar3 = puVar2;
    do {
      *puVar3 = uVar1;
      lVar4 = lVar4 + -2;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    param_1[1] = puVar2 + param_2;
  }
  return param_1;
}



/* Entry: 10a7bbe44; end: 10a7bbfa7;  */

void FUN_10a7bbe44(long *param_1,ulong param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar11 = param_1[1];
  if ((ulong)((param_1[2] - lVar11 >> 3) * -0x5555555555555555) < param_2) {
    lVar11 = lVar11 - *param_1;
    uVar8 = param_2 + (lVar11 >> 3) * -0x5555555555555555;
    if (0xaaaaaaaaaaaaaaa < uVar8) {
      FUN_10a7bbfa8();
      plVar2 = (long *)&UNK_10f676ba7;
      FUN_109ffde64();
      if (param_2 < 0xaaaaaaaaaaaaaab) {
        __Znwm(param_2 * 0x18);
        return;
      }
      func_0x000109ffded8();
      puVar5 = (undefined2 *)plVar2[1];
      if ((ulong)(plVar2[2] - (long)puVar5 >> 1) < param_2) {
        lVar11 = (long)puVar5 - *plVar2;
        uVar8 = param_2 + (lVar11 >> 1);
        if ((long)uVar8 < 0) {
          func_0x00010a0446d4();
          if (*(long *)*plVar2 == 0) {
            return;
          }
          FUN_10a7bc140();
          lVar11 = *(long *)*plVar2;
        }
        else {
          uVar7 = plVar2[2] - *plVar2;
          uVar9 = uVar7;
          if (uVar7 <= uVar8) {
            uVar9 = uVar8;
          }
          if (0x7ffffffffffffffd < uVar7) {
            uVar9 = 0x7fffffffffffffff;
          }
          if (uVar9 == 0) {
            plVar3 = (long *)0x0;
          }
          else {
            plVar3 = plVar2;
            FUN_10a0446e8();
          }
          puVar5 = (undefined2 *)((long)plVar3 + lVar11);
          lVar11 = param_2 << 1;
          uVar1 = *param_3;
          puVar6 = puVar5;
          do {
            *puVar6 = uVar1;
            lVar11 = lVar11 + -2;
            puVar6 = puVar6 + 1;
          } while (lVar11 != 0);
          lVar4 = (long)puVar5 - (plVar2[1] - *plVar2);
          _memcpy(lVar4);
          lVar11 = *plVar2;
          *plVar2 = lVar4;
          plVar2[1] = (long)(puVar5 + param_2);
          plVar2[2] = (long)((long)plVar3 + uVar9 * 2);
          if (lVar11 == 0) {
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(lVar11);
        return;
      }
      puVar6 = puVar5;
      if (param_2 != 0) {
        uVar1 = *param_3;
        lVar11 = param_2 << 1;
        puVar6 = puVar5 + param_2;
        do {
          *puVar5 = uVar1;
          lVar11 = lVar11 + -2;
          puVar5 = puVar5 + 1;
        } while (lVar11 != 0);
      }
      plVar2[1] = (long)puVar6;
      return;
    }
    lVar4 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar4 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (uVar9 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10a7bbfbc();
    }
    lVar11 = (long)plVar2 + lVar11;
    lVar4 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar11,lVar4);
    lVar10 = lVar11 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    lStack_68 = *param_1;
    *param_1 = lVar10;
    param_1[1] = lVar11 + lVar4;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar2 + uVar9 * 3);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    FUN_109de72c8(&lStack_68);
  }
  else {
    if (param_2 != 0) {
      lVar4 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar11,lVar4);
      lVar11 = lVar11 + lVar4;
    }
    param_1[1] = lVar11;
  }
  return;
}



/* Entry: 10a7bbfa8; end: 10a7bbfbb;  */

void FUN_10a7bbfa8(undefined8 param_1,ulong param_2,undefined2 *param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  plVar3 = (long *)&UNK_10f676ba7;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  puVar6 = (undefined2 *)plVar3[1];
  if ((ulong)(plVar3[2] - (long)puVar6 >> 1) < param_2) {
    lVar10 = (long)puVar6 - *plVar3;
    uVar1 = param_2 + (lVar10 >> 1);
    if ((long)uVar1 < 0) {
      func_0x00010a0446d4();
      if (*(long *)*plVar3 == 0) {
        return;
      }
      FUN_10a7bc140();
      lVar10 = *(long *)*plVar3;
    }
    else {
      uVar8 = plVar3[2] - *plVar3;
      uVar5 = uVar8;
      if (uVar8 <= uVar1) {
        uVar5 = uVar1;
      }
      if (0x7ffffffffffffffd < uVar8) {
        uVar5 = 0x7fffffffffffffff;
      }
      if (uVar5 == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        plVar4 = plVar3;
        FUN_10a0446e8();
      }
      puVar6 = (undefined2 *)((long)plVar4 + lVar10);
      lVar10 = param_2 << 1;
      uVar2 = *param_3;
      puVar7 = puVar6;
      do {
        *puVar7 = uVar2;
        lVar10 = lVar10 + -2;
        puVar7 = puVar7 + 1;
      } while (lVar10 != 0);
      lVar9 = (long)puVar6 - (plVar3[1] - *plVar3);
      _memcpy(lVar9);
      lVar10 = *plVar3;
      *plVar3 = lVar9;
      plVar3[1] = (long)(puVar6 + param_2);
      plVar3[2] = (long)((long)plVar4 + uVar5 * 2);
      if (lVar10 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar10);
    return;
  }
  puVar7 = puVar6;
  if (param_2 != 0) {
    uVar2 = *param_3;
    lVar10 = param_2 << 1;
    puVar7 = puVar6 + param_2;
    do {
      *puVar6 = uVar2;
      lVar10 = lVar10 + -2;
      puVar6 = puVar6 + 1;
    } while (lVar10 != 0);
  }
  plVar3[1] = (long)puVar7;
  return;
}



/* Entry: 10a7bbfbc; end: 10a7bbfff;  */

void FUN_10a7bbfbc(long *param_1,ulong param_2,undefined2 *param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  puVar5 = (undefined2 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar5 >> 1) < param_2) {
    lVar9 = (long)puVar5 - *param_1;
    uVar1 = param_2 + (lVar9 >> 1);
    if ((long)uVar1 < 0) {
      func_0x00010a0446d4();
      if (*(long *)*param_1 == 0) {
        return;
      }
      FUN_10a7bc140();
      lVar9 = *(long *)*param_1;
    }
    else {
      uVar7 = param_1[2] - *param_1;
      uVar4 = uVar7;
      if (uVar7 <= uVar1) {
        uVar4 = uVar1;
      }
      if (0x7ffffffffffffffd < uVar7) {
        uVar4 = 0x7fffffffffffffff;
      }
      if (uVar4 == 0) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = param_1;
        FUN_10a0446e8();
      }
      puVar5 = (undefined2 *)((long)plVar3 + lVar9);
      lVar9 = param_2 << 1;
      uVar2 = *param_3;
      puVar6 = puVar5;
      do {
        *puVar6 = uVar2;
        lVar9 = lVar9 + -2;
        puVar6 = puVar6 + 1;
      } while (lVar9 != 0);
      lVar8 = (long)puVar5 - (param_1[1] - *param_1);
      _memcpy(lVar8);
      lVar9 = *param_1;
      *param_1 = lVar8;
      param_1[1] = (long)(puVar5 + param_2);
      param_1[2] = (long)plVar3 + uVar4 * 2;
      if (lVar9 == 0) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar9);
    return;
  }
  puVar6 = puVar5;
  if (param_2 != 0) {
    uVar2 = *param_3;
    lVar9 = param_2 << 1;
    puVar6 = puVar5 + param_2;
    do {
      *puVar5 = uVar2;
      lVar9 = lVar9 + -2;
      puVar5 = puVar5 + 1;
    } while (lVar9 != 0);
  }
  param_1[1] = (long)puVar6;
  return;
}



/* Entry: 10a7bc000; end: 10a7bc0ff;  */

void FUN_10a7bc000(long *param_1,ulong param_2,undefined2 *param_3)

{
  ulong uVar1;
  undefined2 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  puVar5 = (undefined2 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar5 >> 1)) {
    puVar6 = puVar5;
    if (param_2 != 0) {
      uVar2 = *param_3;
      lVar9 = param_2 << 1;
      puVar6 = puVar5 + param_2;
      do {
        *puVar5 = uVar2;
        lVar9 = lVar9 + -2;
        puVar5 = puVar5 + 1;
      } while (lVar9 != 0);
    }
    param_1[1] = (long)puVar6;
    return;
  }
  lVar9 = (long)puVar5 - *param_1;
  uVar1 = param_2 + (lVar9 >> 1);
  if ((long)uVar1 < 0) {
    func_0x00010a0446d4();
    if (*(long *)*param_1 == 0) {
      return;
    }
    FUN_10a7bc140();
    lVar9 = *(long *)*param_1;
  }
  else {
    uVar7 = param_1[2] - *param_1;
    uVar4 = uVar7;
    if (uVar7 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7ffffffffffffffd < uVar7) {
      uVar4 = 0x7fffffffffffffff;
    }
    if (uVar4 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10a0446e8();
    }
    puVar5 = (undefined2 *)((long)plVar3 + lVar9);
    lVar9 = param_2 << 1;
    uVar2 = *param_3;
    puVar6 = puVar5;
    do {
      *puVar6 = uVar2;
      lVar9 = lVar9 + -2;
      puVar6 = puVar6 + 1;
    } while (lVar9 != 0);
    lVar8 = (long)puVar5 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar9 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)(puVar5 + param_2);
    param_1[2] = (long)plVar3 + uVar4 * 2;
    if (lVar9 == 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar9);
  return;
}



/* Entry: 10a7bc100; end: 10a7bc13f;  */

void FUN_10a7bc100(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10a7bc140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a7bc140; end: 10a7bc193;  */

void FUN_10a7bc140(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10a7bc194; end: 10a7bcaa7;  */

/* WARNING: Possible PIC construction at 0x00010a7bc7d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a7bc7d4) */

void FUN_10a7bc194(long param_1,ulong *param_2,undefined8 param_3,undefined2 *param_4,uint param_5,
                  ulong param_6,int *param_7)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined2 *puVar15;
  undefined2 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long unaff_x19;
  undefined8 unaff_x20;
  uint uVar28;
  ulong unaff_x21;
  ulong uVar29;
  ulong unaff_x22;
  ulong uVar30;
  long lVar31;
  ulong unaff_x23;
  long lVar32;
  undefined8 unaff_x24;
  long lVar33;
  long lVar34;
  uint uVar35;
  ulong unaff_x25;
  long lVar36;
  ulong unaff_x26;
  undefined8 unaff_x27;
  uint uVar37;
  ulong unaff_x28;
  ulong uVar38;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar39;
  int iVar40;
  ulong uVar41;
  int iVar42;
  undefined8 uVar43;
  int iVar44;
  float fVar45;
  int iVar46;
  int iVar47;
  float fVar48;
  int iVar49;
  undefined2 *puStack_170;
  int iStack_168;
  int iStack_164;
  long lStack_160;
  uint uStack_158;
  uint uStack_154;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  uint uStack_12c;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  ulong *puStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined2 *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  
  puVar2 = &stack0xfffffffffffffff0;
  if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
    if (*param_7 == 0 && param_7[1] == 0) goto LAB_10a7bc1f4;
    bVar1 = *param_7 != (int)param_2[1] - (int)*param_2 ||
            param_7[1] != *(int *)((long)param_2 + 0xc) - *(int *)((long)param_2 + 4);
  }
  else {
LAB_10a7bc1f4:
    bVar1 = false;
  }
  puStack_c8 = param_4;
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    uVar21 = *(uint *)(param_1 + 8);
    uVar37 = uVar21;
    if (param_5 != 0) {
      uVar37 = param_5;
    }
    ppuVar3 = &PTR_DAT_110ae4700 + (ulong)uVar21 * 4;
    if (0x56 < uVar21) {
      ppuVar3 = &PTR_DAT_110ae4700;
    }
    bVar6 = *(byte *)((long)ppuVar3 + 0x1b);
    ppuVar3 = &PTR_DAT_110ae4700 + (ulong)uVar37 * 4;
    if (0x56 < uVar37) {
      ppuVar3 = &PTR_DAT_110ae4700;
    }
    bVar7 = *(byte *)((long)ppuVar3 + 0x1b);
    iVar46 = (int)*param_2;
    iVar49 = *(int *)((long)param_2 + 4);
    uVar29 = (long)(int)param_2[1] - (long)iVar46;
    lVar33 = (long)*(int *)((long)param_2 + 0xc) - (long)iVar49;
    iVar40 = (int)uVar29;
    uVar37 = (uint)bVar7;
    if (!bVar1) {
      lStack_160 = uVar29 * bVar7 * lVar33;
      iStack_164 = iVar40 * uVar37;
      iStack_168 = 0;
      puStack_170 = param_4;
      uStack_158 = uVar37;
      uStack_154 = (uint)bVar6;
      FUN_10a7bcaa8(param_1,(long)iVar46,(long)iVar49,uVar29,lVar33,*(undefined4 *)(param_1 + 0x80),
                    *(undefined4 *)(param_1 + 0x84),0);
      return;
    }
    uStack_c0 = uVar29 & 0xffffffff | lVar33 << 0x20;
    iVar44 = *(int *)(param_1 + 0x80);
    iVar47 = *(int *)(param_1 + 0x84);
    FUN_10a775818(&piStack_b0,param_1,&uStack_c0);
    if (*(int *)(param_1 + 0x24) != 0) {
      lVar32 = 0;
      uVar29 = 0;
      fVar45 = (float)iVar46 / (float)iVar44;
      fVar48 = (float)iVar49 / (float)iVar47;
      iVar46 = *param_7;
      iVar49 = param_7[1];
      uVar41 = *(ulong *)(param_1 + 0x80);
      uVar43 = 0;
      do {
        if ((ulong)((long)piStack_a8 - (long)piStack_b0 >> 4) <= uVar29) goto LAB_10a7bca84;
        iVar10 = (int)(fVar45 * (float)(int)uVar41);
        iVar42 = (int)(uVar41 >> 0x20);
        fVar39 = (float)iVar42;
        iVar11 = (int)(fVar48 * fVar39);
        iStack_168 = (*(int *)((long)piStack_b0 + lVar32) +
                     ((int *)((long)piStack_b0 + lVar32))[1] * iVar40) * uVar37;
        puStack_170 = puStack_c8;
        iStack_164 = iVar40 * (uint)bVar7;
        lStack_160 = (long)iVar46 * (long)(int)(uint)bVar7 * (long)iVar49;
        uStack_158 = uVar37;
        uStack_154 = (uint)bVar6;
        uStack_e0 = uVar41;
        uStack_d8 = uVar43;
        FUN_10a7bcaa8(param_1,iVar10,iVar11,
                      (int)((fVar45 + (float)iVar40 / (float)iVar44) * (float)(int)uVar41) - iVar10,
                      (int)((fVar48 + (float)(int)lVar33 / (float)iVar47) * fVar39) - iVar11,
                      uVar41 & 0xffffffff,iVar42,uVar29);
        uVar41 = NEON_smax(CONCAT44((int)(uStack_e0 >> 0x20) / 2,(int)uStack_e0 / 2),0x100000001,4);
        uVar29 = uVar29 + 1;
        lVar32 = lVar32 + 0x10;
      } while (uVar29 < *(uint *)(param_1 + 0x24));
    }
LAB_10a7bc7f8:
    if (piStack_b0 != (int *)0x0) {
      piStack_a8 = piStack_b0;
      __ZdlPv();
    }
    return;
  }
  if (((param_6 & 1) == 0) && ((*(byte *)(param_1 + 0xaa) & 1) == 0)) {
    if (!bVar1) {
      puStack_170 = (undefined2 *)0x0;
      (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))();
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0xa8) != '\x01') {
    return;
  }
  uVar21 = *(uint *)(param_1 + 8);
  uVar37 = uVar21;
  if (param_5 != 0) {
    uVar37 = param_5;
  }
  ppuVar3 = &PTR_DAT_110ae4700 + (ulong)uVar21 * 4;
  if (0x56 < uVar21) {
    ppuVar3 = &PTR_DAT_110ae4700;
  }
  bVar6 = *(byte *)((long)ppuVar3 + 0x1b);
  uVar29 = (ulong)bVar6;
  ppuVar3 = &PTR_DAT_110ae4700 + (ulong)uVar37 * 4;
  if (0x56 < uVar37) {
    ppuVar3 = &PTR_DAT_110ae4700;
  }
  uVar41 = (ulong)*(byte *)((long)ppuVar3 + 0x1b);
  iVar46 = (int)*param_2;
  lStack_e8 = (long)iVar46;
  iVar49 = *(int *)((long)param_2 + 4);
  uStack_e0 = (ulong)iVar49;
  uVar37 = (int)param_2[1] - iVar46;
  uVar21 = *(int *)((long)param_2 + 0xc) - iVar49;
  uVar38 = (ulong)uVar21;
  uVar35 = (uint)*(byte *)((long)ppuVar3 + 0x1b);
  uVar28 = (uint)bVar6;
  if (bVar1) {
    uStack_c0 = CONCAT44(uVar21,uVar37);
    iVar46 = *(int *)(param_1 + 0x80);
    iVar49 = *(int *)(param_1 + 0x84);
    FUN_10a775818(&piStack_b0);
    if (*(int *)(param_1 + 0x24) == 0) goto LAB_10a7bc7f8;
    unaff_x27 = 0;
    fVar45 = (float)(int)lStack_e8 / (float)iVar46;
    fVar48 = (float)(int)uStack_e0 / (float)iVar49;
    unaff_x22 = (long)*param_7 * (long)(int)uVar35 * (long)param_7[1];
    uVar38 = *(ulong *)(param_1 + 0x80);
    lStack_148 = uVar29 * 2;
    if ((long)piStack_a8 - (long)piStack_b0 >> 4 != 0) {
      iVar40 = (int)uVar38;
      uVar17 = (uint)(fVar45 * (float)iVar40);
      uStack_108 = (ulong)uVar17;
      uVar18 = (uint)((fVar45 + (float)(int)uVar37 / (float)iVar46) * (float)iVar40);
      uStack_110 = (ulong)uVar18;
      uStack_128 = uVar38 & 0xffffffff;
      uStack_138 = 0;
      uStack_12c = (uint)(uVar38 >> 0x20);
      uVar19 = (uint)(fVar48 * (float)(int)uStack_12c);
      uStack_120 = (ulong)uVar19;
      uVar21 = (uint)((fVar48 + (float)(int)uVar21 / (float)iVar49) * (float)(int)uStack_12c);
      uStack_118 = (ulong)uVar21;
      uStack_140 = uVar38;
      if (uVar35 == uVar28) {
        if ((int)uVar19 < (int)uVar21) {
          lVar33 = 0;
          uVar23 = (uVar18 - uVar17) * uVar28;
          puStack_f0 = (ulong *)(-(ulong)(uVar23 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar23 << 1)
          ;
          uStack_e0 = (long)(int)uVar35 * (long)(int)(uVar18 - uVar17);
          lStack_f8 = (long)(int)uVar21 - (long)(int)uVar19;
          lStack_100 = (long)(int)lStack_148 * (long)iVar40;
          uVar38 = uVar29 * (((long)(int)uVar19 + -1) * (long)iVar40 + (long)(int)uVar17);
          lStack_e8 = (long)(int)uVar28 * (long)iVar40;
          lVar32 = lStack_148 * ((long)(int)uVar17 + (long)iVar40 * (long)(int)uVar19);
          do {
            lVar22 = ((long)*piStack_b0 + (long)(int)(((int)lVar33 + piStack_b0[1]) * uVar37)) *
                     uVar41;
            if (((int)lVar22 < 0) || (unaff_x22 < uStack_e0 + lVar22)) break;
            plVar4 = *(long **)(param_1 + 0xb0);
            if ((*(long *)(param_1 + 0xb8) - (long)plVar4 >> 3) * -0x5555555555555555 == 0)
            goto LAB_10a7bca84;
            uVar38 = uVar38 + lStack_e8;
            if ((ulong)(plVar4[1] - *plVar4 >> 1) <= uVar38) goto LAB_10a7bca84;
            lVar33 = lVar33 + 1;
            lVar34 = lVar32 + lStack_100;
            _memcpy(*plVar4 + lVar32,puStack_c8 + lVar22,puStack_f0);
            lVar32 = lVar34;
          } while (lStack_f8 != lVar33);
        }
      }
      else if ((int)uVar19 < (int)uVar21) {
        iVar46 = 0;
        uVar38 = uVar29 * ((long)(int)uVar17 + (long)iVar40 * (long)(int)uVar19);
        uVar23 = uVar19;
        do {
          if ((int)uVar17 < (int)uVar18) {
            iVar49 = 0;
            uVar30 = uVar38;
            lVar33 = (long)(int)uVar17;
            do {
              uVar8 = (((int)lVar33 - uVar17) + *piStack_b0 +
                      ((uVar23 - uVar19) + piStack_b0[1]) * uVar37) * uVar35;
              if ((-1 < (int)uVar8) && (uVar8 + uVar41 <= unaff_x22 && uVar28 != 0)) {
                uVar27 = 0;
                plVar4 = *(long **)(param_1 + 0xb0);
                lVar32 = *(long *)(param_1 + 0xb8);
                puVar12 = puStack_c8 +
                          uVar35 * (*piStack_b0 + iVar49 + uVar37 * (iVar46 + piStack_b0[1]));
                uVar24 = uVar30;
                uVar25 = uVar29;
                do {
                  if (uVar27 < uVar41) {
                    uVar16 = *puVar12;
                  }
                  else {
                    uVar16 = 0xffff;
                  }
                  if (((lVar32 - (long)plVar4 >> 3) * -0x5555555555555555 == 0) ||
                     ((ulong)(plVar4[1] - *plVar4 >> 1) <= uVar24)) goto LAB_10a7bca84;
                  *(undefined2 *)(*plVar4 + uVar24 * 2) = uVar16;
                  uVar27 = uVar27 + 1;
                  puVar12 = puVar12 + 1;
                  uVar24 = uVar24 + 1;
                  uVar25 = uVar25 - 1;
                } while (uVar25 != 0);
              }
              lVar33 = lVar33 + 1;
              iVar49 = iVar49 + 1;
              uVar30 = uVar30 + uVar29;
            } while ((uint)lVar33 != uVar18);
          }
          uVar23 = uVar23 + 1;
          iVar46 = iVar46 + 1;
          uVar38 = uVar38 + (long)(int)uVar28 * (long)iVar40;
        } while (uVar23 != uVar21);
      }
      uVar30 = uStack_128;
      uVar21 = uStack_12c;
      unaff_x24 = 0xaaaaaaaaaaaaaaab;
      uStack_c0 = uStack_108 | uStack_120 << 0x20;
      uStack_b8 = uStack_c0 + ((ulong)(uint)((int)uStack_118 - (int)uStack_120) << 0x20) &
                  0xffffffff00000000 | uStack_110;
      if ((*(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0) >> 3) *
          -0x5555555555555555 != 0) {
        unaff_x23 = (ulong)uStack_12c;
        unaff_x20 = 0x18;
        FUN_10a7bce18(param_1,**(undefined8 **)(param_1 + 0xb0),&uStack_c0,uStack_128,unaff_x23,
                      uVar29);
        if ((*(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0) >> 3) *
            -0x5555555555555555 != 0) {
          uVar43 = **(undefined8 **)(param_1 + 0xb0);
          puVar14 = &uStack_c0;
          unaff_x30 = 0x10a7bc7d4;
          register0x00000008 = (BADSPACEBASE *)&puStack_170;
          unaff_x19 = param_1;
          unaff_x21 = uVar29;
          unaff_x25 = uVar41;
          unaff_x26 = (ulong)uVar37;
          unaff_x28 = uVar30;
          unaff_x29 = puVar2;
          goto SUB_10a7bd314;
        }
      }
    }
  }
  else {
    iVar40 = *(int *)(param_1 + 0x80);
    uVar30 = (ulong)iVar40;
    puStack_f0 = param_2;
    if (uVar35 == uVar28) {
      if (0 < (int)uVar21) {
        lVar33 = 0;
        lVar32 = (lStack_e8 + (long)iVar49 * (long)iVar40) * uVar29 * 2;
        iVar46 = 0;
        do {
          plVar4 = *(long **)(param_1 + 0xb0);
          if ((*(long **)(param_1 + 0xb8) == plVar4) ||
             ((ulong)(plVar4[1] - *plVar4 >> 1) <=
              (lStack_e8 + (lVar33 + uStack_e0) * uVar30) * uVar29)) goto LAB_10a7bca84;
          uVar38 = uVar38 - 1;
          lVar33 = lVar33 + 1;
          _memcpy(*plVar4 + lVar32,puStack_c8 + iVar46,
                  -(ulong)(uVar37 * uVar28 >> 0x1f) & 0xfffffffe00000000 |
                  (ulong)(uVar37 * uVar28) << 1);
          lVar32 = lVar32 + (long)iVar40 * (long)(int)uVar28 * 2;
          iVar46 = iVar46 + uVar37 * uVar35;
        } while (uVar38 != 0);
      }
    }
    else if (0 < (int)uVar21) {
      uVar27 = 0;
      iVar46 = (iVar46 + iVar49 * iVar40) * uVar28;
      do {
        if (0 < (int)uVar37) {
          uVar24 = 0;
          puVar12 = puStack_c8;
          iVar49 = iVar46;
          do {
            uVar25 = (ulong)iVar49;
            if (uVar28 != 0) {
              uVar26 = 0;
              plVar4 = *(long **)(param_1 + 0xb0);
              plVar5 = *(long **)(param_1 + 0xb8);
              uVar13 = uVar29;
              puVar15 = puVar12;
              do {
                if (uVar26 < uVar41) {
                  uVar16 = *puVar15;
                }
                else {
                  uVar16 = 0xffff;
                }
                if ((plVar5 == plVar4) || ((ulong)(plVar4[1] - *plVar4 >> 1) <= uVar25))
                goto LAB_10a7bca84;
                *(undefined2 *)(*plVar4 + uVar25 * 2) = uVar16;
                uVar26 = uVar26 + 1;
                puVar15 = puVar15 + 1;
                uVar25 = uVar25 + 1;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            uVar24 = uVar24 + 1;
            puVar12 = puVar12 + uVar41;
            iVar49 = iVar49 + uVar28;
          } while (uVar24 != uVar37);
        }
        uVar27 = uVar27 + 1;
        puStack_c8 = puStack_c8 + (long)(int)uVar35 * (long)(int)uVar37;
        iVar46 = iVar46 + iVar40 * uVar28;
      } while (uVar27 != uVar38);
    }
    puVar14 = puStack_f0;
    if (*(undefined8 **)(param_1 + 0xb8) != *(undefined8 **)(param_1 + 0xb0)) {
      FUN_10a7bce18(param_1,**(undefined8 **)(param_1 + 0xb0),puStack_f0,uVar30,
                    *(undefined4 *)(param_1 + 0x84),uVar29);
      if (*(undefined8 **)(param_1 + 0xb8) != *(undefined8 **)(param_1 + 0xb0)) {
        uVar43 = **(undefined8 **)(param_1 + 0xb0);
        uVar21 = *(uint *)(param_1 + 0x84);
SUB_10a7bd314:
        *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        iVar49 = *(int *)(param_1 + 0x10);
        iVar46 = *(int *)(param_1 + 0xc) + iVar49 + *(int *)(param_1 + 0x14);
        if (iVar49 < iVar46) {
          *(undefined8 *)((long)register0x00000008 + -0x68) = uVar43;
          uVar41 = *puVar14;
          iVar44 = *(int *)((long)puVar14 + 4);
          uVar38 = puVar14[1];
          iVar47 = *(int *)((long)puVar14 + 0xc);
          *(int *)((long)register0x00000008 + -0x84) = (int)uVar41;
          uVar37 = (int)uVar41 - iVar46;
          uVar37 = uVar37 & ((int)uVar37 >> 0x1f ^ 0xffffffffU);
          iVar40 = (int)uVar38 + iVar46;
          iVar10 = (int)uVar30;
          if (iVar10 <= iVar40) {
            iVar40 = iVar10;
          }
          uVar35 = iVar44 - iVar46;
          uVar35 = uVar35 & ((int)uVar35 >> 0x1f ^ 0xffffffffU);
          uVar41 = (ulong)uVar35;
          uVar28 = iVar47 + iVar46;
          if ((int)uVar21 <= (int)uVar28) {
            uVar28 = uVar21;
          }
          *(uint *)((long)register0x00000008 + -0x7c) = uVar28;
          iVar46 = (int)uVar38 + iVar49;
          if (iVar10 <= iVar46) {
            iVar46 = iVar10;
          }
          *(int *)((long)register0x00000008 + -0x80) = iVar46;
          uVar17 = iVar44 - iVar49;
          uVar28 = iVar47 + iVar49;
          uVar18 = uVar28;
          if ((int)uVar21 <= (int)uVar28) {
            uVar18 = uVar21;
          }
          *(ulong *)((long)register0x00000008 + -0x78) = (ulong)uVar18;
          *(ulong *)((long)register0x00000008 + -0x70) = (ulong)uVar37;
          *(int *)((long)register0x00000008 + -0x88) = iVar40;
          uVar21 = (uint)bVar6;
          lVar32 = (long)(int)uVar21;
          *(ulong *)((long)register0x00000008 + -0x90) = uVar29 * 2;
          lVar33 = uVar29 * 2 * (long)(int)(iVar40 - uVar37);
          if (((int)uVar35 < (int)uVar17) && (lVar33 != 0)) {
            lVar22 = *(long *)((long)register0x00000008 + -0x68) +
                     ((long)iVar10 * uVar41 +
                     (*(ulong *)((long)register0x00000008 + -0x70) & 0xffffffff)) * lVar32 * 2;
            do {
              _bzero(lVar22,lVar33);
              uVar41 = uVar41 + 1;
              lVar22 = lVar22 + (long)(int)uVar21 * (long)iVar10 * 2;
            } while (uVar41 < uVar17);
          }
          uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
          lVar22 = *(long *)((long)register0x00000008 + -0x68);
          if (((int)uVar28 < *(int *)((long)register0x00000008 + -0x7c)) && (lVar33 != 0)) {
            iVar46 = *(int *)((long)register0x00000008 + -0x7c) -
                     (int)*(undefined8 *)((long)register0x00000008 + -0x78);
            lVar34 = lVar22 + (*(long *)((long)register0x00000008 + -0x70) +
                              (long)(int)*(undefined8 *)((long)register0x00000008 + -0x78) *
                              (long)iVar10) * lVar32 * 2;
            do {
              _bzero(lVar34,lVar33);
              lVar34 = lVar34 + (long)(int)uVar21 * (long)iVar10 * 2;
              iVar46 = iVar46 + -1;
            } while (iVar46 != 0);
          }
          if ((int)uVar17 < (int)*(long *)((long)register0x00000008 + -0x78)) {
            lVar33 = 0;
            iVar46 = *(int *)((long)register0x00000008 + -0x80);
            uVar29 = *(ulong *)((long)register0x00000008 + -0x70);
            lVar36 = (long)(int)((*(int *)((long)register0x00000008 + -0x84) - iVar49 &
                                 (*(int *)((long)register0x00000008 + -0x84) - iVar49 >> 0x1f ^
                                 0xffffffffU)) - (int)uVar29) * (long)(int)(uint)bVar6;
            lVar31 = *(long *)((long)register0x00000008 + -0x90) *
                     (long)(*(int *)((long)register0x00000008 + -0x88) - iVar46);
            lVar34 = *(long *)((long)register0x00000008 + -0x78) - (ulong)uVar17;
            lVar20 = (long)iVar10 * (ulong)uVar17;
            do {
              if (lVar36 != 0) {
                _bzero(lVar22 + (lVar20 + (uVar29 & 0xffffffff)) * lVar32 * 2 + lVar33,lVar36 * 2);
              }
              if (lVar31 != 0) {
                _bzero(lVar22 + (lVar20 + iVar46) * lVar32 * 2 + lVar33,lVar31);
              }
              lVar33 = lVar33 + (long)(int)uVar21 * (long)iVar10 * 2;
              lVar34 = lVar34 + -1;
            } while (lVar34 != 0);
          }
        }
        return;
      }
    }
  }
LAB_10a7bca84:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10a7bca88);
  (*pcVar9)();
}



/* Entry: 10a7bcaa8; end: 10a7bce17;  */

void FUN_10a7bcaa8(long param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                  int param_7,undefined4 param_8,long param_9,int param_10,uint param_11,
                  ulong param_12,uint param_13,uint param_14)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined2 uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  iVar16 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14);
  uVar2 = param_2 - iVar16 & (param_2 - iVar16 >> 0x1f ^ 0xffffffffU);
  uVar3 = param_3 - iVar16 & (param_3 - iVar16 >> 0x1f ^ 0xffffffffU);
  iVar10 = param_4 + param_2 + iVar16;
  if (param_6 <= iVar10) {
    iVar10 = param_6;
  }
  iVar1 = param_5 + param_3 + iVar16;
  if (param_7 <= iVar1) {
    iVar1 = param_7;
  }
  uVar5 = iVar10 - uVar2;
  uVar12 = (ulong)uVar5;
  uVar6 = iVar1 - uVar3;
  uVar11 = (ulong)uVar6;
  if (0 < (int)uVar5 && 0 < (int)uVar6) {
    uVar4 = (ulong)param_14;
    uStack_90 = uStack_90 & 0xffffffffffff0000;
    FUN_10a7bbdc4(&lStack_80,uVar11 * (long)(int)param_14 * uVar12,&uStack_90);
    if (iVar16 <= param_2) {
      param_2 = iVar16;
    }
    if (iVar16 <= param_3) {
      param_3 = iVar16;
    }
    if (param_13 == param_14) {
      if (0 < (int)param_5) {
        lVar18 = (long)param_10;
        uVar17 = (ulong)param_5;
        iVar16 = param_14 * (param_2 + param_3 * uVar5);
        param_9 = param_9 + (long)param_10 * 2;
        do {
          if ((lVar18 < 0) ||
             (param_12 < (ulong)((long)(int)param_14 * (long)(int)param_4 + lVar18))) break;
          if ((ulong)(lStack_78 - lStack_80 >> 1) <= (ulong)(long)iVar16) {
LAB_10a7bcdf8:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a7bcdfc);
            (*pcVar7)();
          }
          _memcpy(lStack_80 + (long)iVar16 * 2,param_9,(long)(int)param_14 * (long)(int)param_4 * 2)
          ;
          iVar16 = iVar16 + param_14 * uVar5;
          param_9 = param_9 + (-(ulong)(param_11 >> 0x1f) & 0xfffffffe00000000 |
                              (ulong)param_11 << 1);
          lVar18 = lVar18 + (int)param_11;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
    }
    else if (0 < (int)param_5) {
      uVar17 = 0;
      lVar18 = (long)(int)param_13;
      iVar16 = param_14 * (param_2 + param_3 * uVar5);
      param_9 = param_9 + (long)param_10 * 2;
      do {
        if (0 < (int)param_4) {
          uVar8 = 0;
          lVar9 = param_9;
          iVar10 = iVar16;
          do {
            if (((0 < (int)param_14) &&
                (lVar13 = (long)param_10 + uVar17 * (long)(int)param_11 + uVar8 * lVar18,
                -1 < lVar13)) && ((ulong)(lVar13 + lVar18) <= param_12)) {
              uVar14 = 0;
              do {
                if ((long)uVar14 < lVar18) {
                  uVar15 = *(undefined2 *)(lVar9 + uVar14 * 2);
                }
                else {
                  uVar15 = 0xffff;
                }
                if ((ulong)(lStack_78 - lStack_80 >> 1) <= (long)iVar10 + uVar14)
                goto LAB_10a7bcdf8;
                *(undefined2 *)(lStack_80 + (long)iVar10 * 2 + uVar14 * 2) = uVar15;
                uVar14 = uVar14 + 1;
              } while (uVar4 != uVar14);
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + (-(ulong)(param_13 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_13 << 1)
            ;
            iVar10 = iVar10 + param_14;
          } while (uVar8 != param_4);
        }
        uVar17 = uVar17 + 1;
        param_9 = param_9 + (-(ulong)(param_11 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_11 << 1)
        ;
        iVar16 = iVar16 + param_14 * uVar5;
      } while (uVar17 != param_5);
    }
    uStack_90 = CONCAT44(param_3,param_2);
    uStack_88 = CONCAT44(param_3 + param_5,param_2 + param_4);
    FUN_10a7bce18(param_1,lStack_80,&uStack_90,uVar12,uVar11,uVar4);
    func_0x00010a7bd314(param_1,lStack_80,&uStack_90,uVar12,uVar11,uVar4);
    (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
              (*(long **)(param_1 + 0x28),uVar2,uVar3,0,uVar12,uVar11,0,lStack_80,param_8,0);
    (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
    if (lStack_80 != 0) {
      lStack_78 = lStack_80;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a7bce18; end: 10a7bd51f;  */

void FUN_10a7bce18(long param_1,long param_2,int *param_3,uint param_4,int param_5,ulong param_6)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar23 = *param_3;
    iVar4 = param_3[1];
    lVar13 = (long)iVar23;
    uVar3 = param_3[2];
    iVar21 = param_3[3];
    if ((uVar3 - iVar23 != 0 && iVar23 <= (int)uVar3) && iVar4 < iVar21) {
      lVar15 = (long)iVar4;
      iVar14 = (int)param_6;
      uVar5 = (uVar3 - iVar23) * iVar14;
      uVar24 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
      lVar9 = (long)iVar14;
      lVar1 = param_2 + (long)(int)((iVar4 * param_4 + iVar23) * iVar14) * 2;
      lVar10 = (long)(int)param_4;
      if (0 < iVar4) {
        lVar18 = param_2 + (lVar13 + (lVar15 + -1) * lVar10) * lVar9 * 2;
        lVar20 = 1;
        lVar16 = lVar15;
        do {
          _memcpy(lVar18,lVar1,uVar24);
          if (*(int *)(param_1 + 0x10) <= lVar20) break;
          lVar20 = lVar20 + 1;
          lVar18 = lVar18 + (long)iVar14 * (long)(int)param_4 * -2;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      iVar7 = iVar21 + -1;
      iVar22 = iVar21;
      if (iVar21 <= param_5) {
        iVar22 = param_5;
      }
      lVar20 = param_2 + (long)(int)((iVar7 * param_4 + iVar23) * iVar14) * 2;
      if (iVar21 < param_5) {
        lVar18 = param_2 + (lVar10 + (long)(int)param_4 * (long)iVar7 + lVar13) * lVar9 * 2;
        uVar17 = 1;
        do {
          _memcpy(lVar18,lVar20,uVar24);
          uVar2 = uVar17 + 1;
          lVar18 = lVar18 + (long)iVar14 * (long)(int)param_4 * 2;
          bVar8 = (long)uVar17 < (long)*(int *)(param_1 + 0x10);
          uVar17 = uVar2;
        } while (bVar8 && (iVar22 - iVar21) + 1 != uVar2);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      uVar24 = -(param_6 >> 0x1f & 1) & 0xfffffffe00000000 | (param_6 & 0xffffffff) << 1;
      if (0 < iVar23) {
        lVar11 = iVar21 - lVar15;
        lVar18 = param_2 + (lVar13 + (long)iVar4 * (long)(int)param_4) * lVar9 * 2;
        iVar25 = iVar14 * (iVar23 + iVar4 * param_4 + -1);
        iVar22 = 1;
        lVar16 = lVar11;
        lVar12 = lVar18;
        iVar19 = iVar25;
        do {
          do {
            _memcpy(param_2 + (long)iVar25 * 2,lVar12,uVar24);
            iVar25 = iVar25 + iVar14 * param_4;
            lVar16 = lVar16 + -1;
            lVar12 = lVar12 + (long)iVar14 * (long)(int)param_4 * 2;
          } while (lVar16 != 0);
          if (*(int *)(param_1 + 0x10) <= iVar22) break;
          iVar25 = iVar19 - iVar14;
          bVar8 = iVar22 != iVar23;
          iVar22 = iVar22 + 1;
          lVar16 = lVar11;
          lVar12 = lVar18;
          iVar19 = iVar25;
        } while (bVar8);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      iVar22 = uVar3 - 1;
      uVar5 = uVar3;
      if ((int)uVar3 <= (int)param_4) {
        uVar5 = param_4;
      }
      if ((int)uVar3 < (int)param_4) {
        lVar12 = iVar21 - lVar15;
        iVar25 = iVar14 * (uVar3 + iVar4 * param_4 + -1);
        lVar9 = param_2 + (lVar9 + lVar9 * ((long)iVar22 + (long)iVar4 * (long)(int)param_4)) * 2;
        lVar18 = lVar12;
        iVar19 = iVar25;
        lVar16 = lVar9;
        uVar17 = 1;
        do {
          do {
            _memcpy(lVar9,param_2 + (long)iVar19 * 2,uVar24);
            lVar9 = lVar9 + (long)iVar14 * (long)(int)param_4 * 2;
            lVar18 = lVar18 + -1;
            iVar19 = iVar19 + iVar14 * param_4;
          } while (lVar18 != 0);
          uVar2 = uVar17 + 1;
          lVar9 = lVar16 + uVar24;
          bVar8 = (long)uVar17 < (long)*(int *)(param_1 + 0x10);
          lVar18 = lVar12;
          iVar19 = iVar25;
          lVar16 = lVar9;
          uVar17 = uVar2;
        } while (bVar8 && uVar2 != (uVar5 - uVar3) + 1);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      lVar9 = 0;
      lVar10 = lVar10 - iVar22;
      iVar25 = iVar14 * (uVar3 + iVar21 * param_4);
      iVar21 = iVar14 * (iVar23 + iVar21 * param_4 + -1);
      iVar6 = param_4 * (iVar4 + -1);
      iVar19 = iVar14 * (uVar3 + iVar6);
      iVar23 = iVar14 * (iVar23 + iVar6 + -1);
      do {
        lVar15 = lVar15 + -1;
        lVar18 = lVar9 + 1;
        if ((lVar18 <= lVar13) && (-1 < lVar15)) {
          _memcpy(param_2 + (long)iVar23 * 2,lVar1,uVar24);
        }
        if ((-1 < lVar15) && (lVar18 < lVar10)) {
          _memcpy(param_2 + (long)iVar19 * 2,
                  param_2 + (long)(int)((iVar22 + iVar4 * param_4) * iVar14) * 2,uVar24);
        }
        lVar16 = (long)iVar7 + 1 + lVar9;
        if ((lVar18 <= lVar13) && (lVar16 < param_5)) {
          _memcpy(param_2 + (long)iVar21 * 2,lVar20,uVar24);
        }
        if ((lVar16 < param_5) && (lVar18 < lVar10)) {
          _memcpy(param_2 + (long)iVar25 * 2,
                  param_2 + (long)(int)((iVar7 * param_4 + iVar22) * iVar14) * 2,uVar24);
        }
        lVar9 = lVar9 + 1;
        iVar25 = iVar25 + iVar14 + iVar14 * param_4;
        iVar21 = iVar21 + iVar14 * (param_4 - 1);
        iVar19 = iVar19 + (iVar14 - iVar14 * param_4);
        iVar23 = iVar23 + iVar14 * ~param_4;
      } while (lVar9 < *(int *)(param_1 + 0x10));
    }
  }
  return;
}



/* Entry: 10a7bd520; end: 10a7bd68f;  */

void FUN_10a7bd520(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int aiStack_80 [2];
  long lStack_78;
  long lStack_70;
  long *plStack_60;
  long *plStack_58;
  
  plVar5 = (long *)*param_4;
  if (plVar5 != (long *)0x0) {
    plStack_60 = (long *)0x0;
    plStack_58 = (long *)0x0;
    plVar3 = (long *)plVar5[1];
    if (plVar3 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_58 = plVar3;
      if (plVar3 != (long *)0x0) {
        plStack_60 = (long *)*plVar5;
        if (plStack_60 != (long *)0x0) {
          if (*(char *)(param_1 + 0xa9) == '\x01') {
            FUN_10a7bd690(param_1,param_2,param_3,&plStack_60,param_4,param_7);
          }
          else {
            (**(code **)(*plStack_60 + 0x50))
                      (aiStack_80,plStack_60,*(undefined8 *)(*param_4 + 0x18),param_7);
            if ((lStack_78 != lStack_70) && (aiStack_80[0] == *(int *)(param_1 + 8))) {
              FUN_10a7bdb44(param_1,param_2,param_3,aiStack_80,param_6);
            }
            if (lStack_78 != 0) {
              __ZdlPv();
            }
          }
        }
      }
    }
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar3 = plStack_58 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 10a7bd690; end: 10a7bdb43;  */

void FUN_10a7bd690(long param_1,int *param_2,int *param_3,long *param_4,long *param_5,int *param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  long *plVar22;
  ulong uVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  float fVar33;
  int iVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint *puStack_108;
  long *plStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  uint uStack_b0;
  uint uStack_ac;
  
  if (*(char *)(param_1 + 0xa8) != '\x01') {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  lVar32 = *param_4;
  if (lVar32 == 0 || *param_5 == 0) {
    return;
  }
  plVar21 = *(long **)(lVar32 + 0x28);
  if (plVar21 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar21 + 0x50))();
  plVar22 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar22 + 0x50))();
  if ((int)plVar21 != (int)plVar22) {
    return;
  }
  lVar31 = *param_5;
  if (*(long *)(lVar31 + 0x18) == 0) {
    return;
  }
  plVar21 = *(long **)(*param_4 + 0x28);
  if (plVar21 == (long *)0x0) {
    uStack_d8 = *(undefined8 *)(*param_4 + 0x80);
  }
  else {
    plVar22 = plVar21;
    (**(code **)(*plVar21 + 0x28))();
    uVar19 = (uint)plVar22;
    if (uVar19 < 2) {
      uVar19 = 1;
    }
    (**(code **)(*plVar21 + 0x30))();
    uVar20 = (uint)plVar21;
    if (uVar20 < 2) {
      uVar20 = 1;
    }
    uStack_d8 = CONCAT44(uVar20,uVar19);
  }
  if (*(int *)(param_1 + 0x18) < 2) {
    bVar1 = 1 < *(int *)(param_1 + 0x1c);
  }
  else {
    bVar1 = true;
  }
  if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
    if (*param_6 == 0 && param_6[1] == 0) goto LAB_10a7bd7cc;
    bVar24 = *param_6 != param_2[2] - *param_2 || param_6[1] != param_2[3] - param_2[1];
    if (!bVar1) goto LAB_10a7bd818;
LAB_10a7bd7d0:
    uStack_dc = 0;
    plVar21 = *(long **)(lVar31 + 0x18);
    if (!bVar24) {
      plVar21 = plVar21 + 8;
      param_2 = param_3;
LAB_10a7bda6c:
      plStack_100 = &lStack_f8;
      puStack_108 = &uStack_dc;
      uStack_e8 = 0;
      lStack_f0 = 0;
      lStack_f8 = 0;
      uStack_c8 = plVar21[1];
      lStack_d0 = *plVar21;
      uStack_118 = *(undefined8 *)(param_2 + 2);
      uStack_120 = *(undefined8 *)param_2;
      FUN_10a7be07c(&puStack_108,&lStack_d0,&uStack_120,0,&uStack_d8,param_1 + 0x80);
      goto LAB_10a7bda98;
    }
  }
  else {
LAB_10a7bd7cc:
    bVar24 = false;
    if (bVar1) goto LAB_10a7bd7d0;
LAB_10a7bd818:
    uStack_dc = *(uint *)(param_1 + 0x10);
    plVar21 = *(long **)(lVar31 + 0x18);
    if (!bVar24) goto LAB_10a7bda6c;
  }
  plStack_100 = &lStack_f8;
  puStack_108 = &uStack_dc;
  uStack_e8 = 0;
  lStack_f0 = 0;
  lStack_f8 = 0;
  uVar19 = *(uint *)(param_1 + 0x24);
  if (uVar19 != 0) {
    uVar20 = 0;
    lVar31 = *plVar21;
    iVar10 = *(int *)((long)plVar21 + 4);
    lVar18 = plVar21[1];
    iVar11 = *(int *)((long)plVar21 + 0xc);
    iVar30 = (int)uStack_d8;
    fVar33 = (float)iVar30;
    fVar37 = (float)(int)lVar31 / fVar33;
    iVar29 = (int)((ulong)uStack_d8 >> 0x20);
    fVar35 = (float)iVar29;
    fVar38 = (float)iVar10 / fVar35;
    iVar8 = *param_2;
    iVar12 = param_2[1];
    iVar34 = *(int *)(param_1 + 0x80);
    iVar36 = *(int *)(param_1 + 0x84);
    fVar39 = (float)iVar8 / (float)iVar34;
    fVar40 = (float)iVar12 / (float)iVar36;
    iVar9 = param_2[2];
    iVar13 = param_2[3];
    do {
      uVar2 = iVar30 >> (uVar20 & 0x1f);
      if ((int)uVar2 < 2) {
        uVar2 = 1;
      }
      uVar3 = iVar29 >> (uVar20 & 0x1f);
      if ((int)uVar3 < 2) {
        uVar3 = 1;
      }
      uVar4 = *(int *)(param_1 + 0x80) >> (uVar20 & 0x1f);
      if ((int)uVar4 < 2) {
        uVar4 = 1;
      }
      uVar5 = *(int *)(param_1 + 0x84) >> (uVar20 & 0x1f);
      uVar27 = (uint)(fVar37 * (float)uVar2);
      uVar28 = (uint)(fVar38 * (float)uVar3);
      if ((int)uVar5 < 2) {
        uVar5 = 1;
      }
      uVar25 = (uint)(fVar39 * (float)uVar4);
      uVar26 = (uint)(fVar40 * (float)uVar5);
      iVar14 = (int)((fVar37 + (float)((int)lVar18 - (int)lVar31) / fVar33) * (float)uVar2) - uVar27
      ;
      iVar15 = (int)((fVar38 + (float)(iVar11 - iVar10) / fVar35) * (float)uVar3) - uVar28;
      iVar16 = (int)((fVar39 + (float)(iVar9 - iVar8) / (float)iVar34) * (float)uVar4) - uVar25;
      iVar17 = (int)((fVar40 + (float)(iVar13 - iVar12) / (float)iVar36) * (float)uVar5) - uVar26;
      if (iVar14 <= iVar16) {
        iVar16 = iVar14;
      }
      if (iVar15 <= iVar17) {
        iVar17 = iVar15;
      }
      if (0 < iVar16 && 0 < iVar17) {
        uVar19 = uVar27;
        if ((int)uStack_dc <= (int)uVar27) {
          uVar19 = uStack_dc;
        }
        uVar6 = uVar25;
        if ((int)uVar19 <= (int)uVar25) {
          uVar6 = uVar19;
        }
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        uVar19 = uVar28;
        if ((int)uStack_dc <= (int)uVar28) {
          uVar19 = uStack_dc;
        }
        uVar7 = uVar26;
        if ((int)uVar19 <= (int)uVar26) {
          uVar7 = uVar19;
        }
        uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
        uVar19 = (uVar2 - uVar27) - iVar16;
        uVar2 = (uVar4 - uVar25) - iVar16;
        if ((int)uStack_dc <= (int)uVar19) {
          uVar19 = uStack_dc;
        }
        if ((int)uVar19 <= (int)uVar2) {
          uVar2 = uVar19;
        }
        uVar19 = (uVar3 - uVar28) - iVar17;
        uVar3 = (uVar5 - uVar26) - iVar17;
        if ((int)uStack_dc <= (int)uVar19) {
          uVar19 = uStack_dc;
        }
        if ((int)uVar19 <= (int)uVar3) {
          uVar3 = uVar19;
        }
        iVar16 = uVar6 + iVar16 + (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
        uVar23 = (ulong)(uVar7 + iVar17 + (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)));
        lStack_d0 = CONCAT44(uVar28 - uVar7,uVar27 - uVar6);
        uStack_c8 = lStack_d0 + (uVar23 << 0x20) & 0xffffffff00000000 |
                    (ulong)(iVar16 + (uVar27 - uVar6));
        lStack_c0 = CONCAT44(uVar26 - uVar7,uVar25 - uVar6);
        uStack_b8 = lStack_c0 + (uVar23 << 0x20) & 0xffffffff00000000 |
                    (ulong)(iVar16 + (uVar25 - uVar6));
        uStack_b0 = uVar20;
        uStack_ac = uVar20;
        FUN_10a7b9d9c(plStack_100,&lStack_d0);
        uVar19 = *(uint *)(param_1 + 0x24);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar19);
  }
LAB_10a7bda98:
  if (lStack_f8 != lStack_f0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0xa8))
              (*(long **)(param_1 + 0x28),*(undefined8 *)(lVar32 + 0x28),lStack_f8,
               (lStack_f0 - lStack_f8 >> 3) * -0x3333333333333333);
    (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
  }
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv(lStack_f8);
  }
  return;
}



/* Entry: 10a7bdb44; end: 10a7be07b;  */

void FUN_10a7bdb44(long *param_1,uint *param_2,long **param_3,uint *param_4,int *param_5,
                  int *param_6)

{
  uint uVar1;
  undefined **ppuVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  long *plVar14;
  uint *puVar15;
  undefined4 uVar16;
  uint *puVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  int iVar26;
  long *unaff_x20;
  uint uVar27;
  long lVar28;
  int *piVar29;
  uint uVar30;
  long lVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  long lStack_178;
  ulong uStack_170;
  long lStack_168;
  ulong uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  uint uStack_134;
  uint *puStack_130;
  int iStack_124;
  uint *puStack_120;
  long *plStack_118;
  int *piStack_110;
  uint *puStack_108;
  long lStack_100;
  int iStack_f4;
  ulong uStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  int iStack_d4;
  code *pcStack_d0;
  undefined **appuStack_c8 [7];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = param_1;
  puVar15 = param_2;
  puVar17 = param_4;
  if (((*(byte *)((long)param_1 + 0xa9) & 1) == 0) && ((char)param_1[0x15] == '\x01')) {
    lVar19 = *(long *)(param_4 + 2);
    lVar28 = *(long *)(param_4 + 4);
    if ((lVar19 != lVar28) &&
       (plVar14 = (long *)(ulong)*param_4, *param_4 == *(uint *)(param_1 + 1))) {
      uVar27 = (uint)param_5;
      if (((int)param_1[3] < 2) && (iStack_d4 = -1, *(int *)((long)param_1 + 0x1c) < 2)) {
        iVar26 = 0;
        unaff_x20 = (long *)0x0;
      }
      else {
        func_0x00010ab79cdc();
        iStack_d4 = (int)plVar14;
        if (iStack_d4 == -1) goto LAB_10a7bdfe8;
        puVar15 = (uint *)0x0;
        FUN_10a1b70c8(&plStack_e8);
        unaff_x20 = plStack_e8;
        if (plStack_e8 == (long *)0x0) goto LAB_10a7bdfe8;
        lVar19 = *(long *)(param_4 + 2);
        lVar28 = *(long *)(param_4 + 4);
        iVar26 = 1;
      }
      uStack_134 = uVar27;
      puStack_130 = param_2;
      plStack_118 = unaff_x20;
      if (lVar28 != lVar19) {
        uVar25 = 0;
        uVar3 = *param_2;
        uVar5 = param_2[1];
        uVar30 = *(uint *)(param_1 + 0x10);
        uVar27 = *(uint *)((long)param_1 + 0x84);
        fVar33 = (float)(int)uVar30;
        fVar34 = (float)(int)uVar27;
        fVar35 = (float)(int)uVar3 / fVar33;
        fVar36 = (float)(int)uVar5 / fVar34;
        uVar4 = param_2[2];
        uVar6 = param_2[3];
        iStack_124 = iVar26;
        puStack_120 = param_4;
        while( true ) {
          piVar29 = (int *)(ulong)uVar27;
          lVar28 = param_1[0x16];
          uVar21 = (param_1[0x17] - lVar28 >> 3) * -0x5555555555555555;
          if (uVar21 <= uVar25) break;
          plVar14 = (long *)(lVar19 + uVar25 * 0x20);
          iVar18 = (int)(fVar35 * (float)(int)uVar30);
          iVar23 = (int)(fVar36 * (float)(int)uVar27);
          uVar24 = (uint)((fVar35 + (float)(int)(uVar4 - uVar3) / fVar33) * (float)(int)uVar30);
          plStack_e8 = (long *)CONCAT44(iVar23,iVar18);
          uVar22 = (long)plStack_e8 +
                   ((ulong)(uint)((int)((fVar36 + (float)(int)(uVar6 - uVar5) / fVar34) *
                                       (float)(int)uVar27) - iVar23) << 0x20);
          uStack_e0 = uVar22 & 0xffffffff00000000 | (ulong)uVar24;
          uStack_f0 = uVar25;
          if (iVar26 == 0) {
            ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 1) * 4;
            if (0x56 < *(uint *)(param_1 + 1)) {
              ppuVar2 = &PTR_DAT_110ae4700;
            }
            bVar8 = *(byte *)((long)ppuVar2 + 0x1b);
            param_6 = (int *)(ulong)bVar8;
            iStack_f4 = (int)plVar14[2];
            iVar32 = *(int *)((long)plVar14 + 0x14);
            iVar9 = (int)plVar14[3] - iStack_f4;
            uVar1 = *(int *)((long)plVar14 + 0x1c) - iVar32;
            iVar10 = uVar24 - iVar18;
            uVar27 = (int)(uVar22 >> 0x20) - iVar23;
            if (iVar9 <= iVar10) {
              iVar10 = iVar9;
            }
            if ((int)uVar1 <= (int)uVar27) {
              uVar27 = uVar1;
            }
            uVar25 = (ulong)uVar27;
            puVar17 = (uint *)(ulong)uVar30;
            if (0 < (int)uVar27) {
              lStack_100 = (long)(int)(uint)bVar8 * (long)iVar10 * 2;
              lVar31 = *plVar14;
              lVar28 = (long)(int)(uint)bVar8 * (long)(int)uVar30;
              uVar21 = (((long)iVar23 + -1) * (long)(int)uVar30 + (long)iVar18) * (long)param_6;
              lVar19 = ((long)iVar18 + (long)(int)uVar30 * (long)iVar23) * (long)param_6 * 2;
              piStack_110 = piVar29;
              puStack_108 = (uint *)(ulong)uVar30;
              do {
                uVar22 = (param_1[0x17] - param_1[0x16] >> 3) * -0x5555555555555555;
                if (uVar22 < uStack_f0 || uVar22 - uStack_f0 == 0) goto LAB_10a7be028;
                plVar20 = (long *)(param_1[0x16] + uStack_f0 * 0x18);
                lVar7 = *plVar20;
                uVar21 = uVar21 + lVar28;
                if ((ulong)(plVar20[1] - lVar7 >> 1) <= uVar21) goto LAB_10a7be028;
                iVar26 = iVar32 * (int)plVar14[1];
                uVar25 = uVar25 - 1;
                iVar32 = iVar32 + 1;
                _memcpy(lVar7 + lVar19,lVar31 + (long)(int)((iStack_f4 + iVar26) * (uint)bVar8) * 2,
                        lStack_100);
                lVar19 = lVar19 + lVar28 * 2;
              } while (uVar25 != 0);
              lVar28 = param_1[0x16];
              uVar21 = (param_1[0x17] - lVar28 >> 3) * -0x5555555555555555;
              unaff_x20 = plStack_118;
              param_4 = puStack_120;
              piVar29 = piStack_110;
              puVar17 = puStack_108;
              iVar26 = iStack_124;
            }
            uVar30 = (uint)puVar17;
            if (uVar21 <= uStack_f0) goto LAB_10a7be028;
            puVar15 = *(uint **)(lVar28 + uStack_f0 * 0x18);
            param_3 = &plStack_e8;
            plVar14 = param_1;
            param_5 = piVar29;
            FUN_10a7bce18();
          }
          else {
            plVar20 = unaff_x20;
            (**(code **)(*unaff_x20 + 0x18))
                      (unaff_x20,(int)plVar14[1],*(undefined4 *)((long)plVar14 + 0xc));
            pcStack_d0 = FUN_10a7be1ac;
            appuStack_c8[0] = &PTR_DAT_110c191d0;
            FUN_10a1b76e0(unaff_x20,(int)plVar14[1],*(undefined4 *)((long)plVar14 + 0xc),&iStack_d4,
                          (long)(int)plVar20,*plVar14,&pcStack_d0);
            (*(code *)*appuStack_c8[0])(appuStack_c8);
            uVar25 = (param_1[0x17] - param_1[0x16] >> 3) * -0x5555555555555555;
            if (uVar25 < uStack_f0 || uVar25 - uStack_f0 == 0) goto LAB_10a7be028;
            puVar15 = *(uint **)(param_1[0x16] + uStack_f0 * 0x18);
            param_3 = (long **)*plVar14;
            puVar17 = (uint *)plVar14[1];
            param_5 = (int *)plVar14[2];
            param_6 = (int *)CONCAT44(uVar27,uVar30);
            plVar14 = unaff_x20;
            (**(code **)(*unaff_x20 + 0x20))();
          }
          *(undefined1 *)(param_1 + 4) = 1;
          if ((char)param_4[1] != '\x01') break;
          uVar27 = (int)piVar29 / 2;
          if ((int)uVar27 < 2) {
            uVar27 = 1;
          }
          uVar30 = (int)uVar30 / 2;
          if ((int)uVar30 < 2) {
            uVar30 = 1;
          }
          uVar25 = uStack_f0 + 1;
          lVar19 = *(long *)(param_4 + 2);
          if ((ulong)(*(long *)(param_4 + 4) - lVar19 >> 5) <= uVar25) break;
        }
      }
      if ((((uStack_134 & 1) == 0) && ((*(byte *)((long)param_1 + 0xaa) & 1) == 0)) &&
         ((param_4[1] & 1) == 0)) {
        if (param_1[0x17] == param_1[0x16]) {
LAB_10a7be028:
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10a7be02c);
          (*pcVar13)();
        }
        puVar15 = (uint *)(ulong)*puStack_130;
        param_3 = (long **)(ulong)puStack_130[1];
        param_5 = (int *)(ulong)(puStack_130[2] - *puStack_130);
        param_6 = (int *)(ulong)(puStack_130[3] - puStack_130[1]);
        plVar14 = (long *)param_1[5];
        uStack_140 = 0;
        puVar17 = (uint *)0x0;
        (**(code **)(*plVar14 + 0xa0))();
      }
      if (unaff_x20 != (long *)0x0) {
        plVar14 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x30))();
      }
    }
  }
LAB_10a7bdfe8:
  uVar16 = SUB84(puVar17,0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  if (unaff_x20 != (long *)0x0) {
    (**(code **)(*plStack_118 + 0x30))();
  }
  __Unwind_Resume();
  uVar27 = *puVar15;
  uVar3 = puVar15[1];
  uVar30 = *(uint *)param_3;
  uVar4 = *(uint *)((long)param_3 + 4);
  iVar18 = *(uint *)((long)param_3 + 0xc) - uVar4;
  iVar26 = *(uint *)(param_3 + 1) - uVar30;
  if ((int)(puVar15[2] - uVar27) <= (int)(*(uint *)(param_3 + 1) - uVar30)) {
    iVar26 = puVar15[2] - uVar27;
  }
  if ((int)(puVar15[3] - uVar3) <= iVar18) {
    iVar18 = puVar15[3] - uVar3;
  }
  if (0 < iVar26 && 0 < iVar18) {
    pcStack_148 = FUN_10a7be07c;
    uVar6 = *(uint *)*plVar14;
    uVar5 = uVar27;
    if ((int)uVar6 <= (int)uVar27) {
      uVar5 = uVar6;
    }
    uVar24 = uVar30;
    if ((int)uVar5 <= (int)uVar30) {
      uVar24 = uVar5;
    }
    uVar24 = uVar24 & ((int)uVar24 >> 0x1f ^ 0xffffffffU);
    uVar5 = uVar3;
    if ((int)uVar6 <= (int)uVar3) {
      uVar5 = uVar6;
    }
    uVar1 = uVar4;
    if ((int)uVar5 <= (int)uVar4) {
      uVar1 = uVar5;
    }
    uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    uVar5 = (*param_5 - uVar27) - iVar26;
    uVar11 = (*param_6 - uVar30) - iVar26;
    if ((int)uVar6 <= (int)uVar5) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 <= (int)uVar11) {
      uVar11 = uVar5;
    }
    uVar5 = (param_5[1] - uVar3) - iVar18;
    uVar12 = (param_6[1] - uVar4) - iVar18;
    if ((int)uVar6 <= (int)uVar5) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 <= (int)uVar12) {
      uVar12 = uVar5;
    }
    iVar26 = uVar24 + iVar26 + (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU));
    uVar25 = (ulong)(uVar1 + iVar18 + (uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)));
    lStack_178 = CONCAT44(uVar3 - uVar1,uVar27 - uVar24);
    uStack_170 = lStack_178 + (uVar25 << 0x20) & 0xffffffff00000000 |
                 (ulong)(iVar26 + (uVar27 - uVar24));
    lStack_168 = CONCAT44(uVar4 - uVar1,uVar30 - uVar24);
    uStack_160 = lStack_168 + (uVar25 << 0x20) & 0xffffffff00000000 |
                 (ulong)(iVar26 + (uVar30 - uVar24));
    uStack_158 = uVar16;
    uStack_154 = uVar16;
    puStack_150 = &stack0xfffffffffffffff0;
    FUN_10a7b9d9c(plVar14[1],&lStack_178);
  }
  return;
}



/* Entry: 10a7be07c; end: 10a7be1ab;  */

void FUN_10a7be07c(undefined8 *param_1,uint *param_2,uint *param_3,undefined4 param_4,int *param_5,
                  int *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar5 = *param_2;
  uVar7 = param_2[1];
  uVar6 = *param_3;
  uVar8 = param_3[1];
  iVar1 = param_3[2] - uVar6;
  if ((int)(param_2[2] - uVar5) <= (int)(param_3[2] - uVar6)) {
    iVar1 = param_2[2] - uVar5;
  }
  iVar4 = param_3[3] - uVar8;
  if ((int)(param_2[3] - uVar7) <= (int)(param_3[3] - uVar8)) {
    iVar4 = param_2[3] - uVar7;
  }
  if (0 < iVar1 && 0 < iVar4) {
    uVar9 = *(uint *)*param_1;
    uVar10 = uVar5;
    if ((int)uVar9 <= (int)uVar5) {
      uVar10 = uVar9;
    }
    uVar2 = uVar6;
    if ((int)uVar10 <= (int)uVar6) {
      uVar2 = uVar10;
    }
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    uVar10 = uVar7;
    if ((int)uVar9 <= (int)uVar7) {
      uVar10 = uVar9;
    }
    uVar3 = uVar8;
    if ((int)uVar10 <= (int)uVar8) {
      uVar3 = uVar10;
    }
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    uVar10 = (*param_5 - uVar5) - iVar1;
    uVar11 = (*param_6 - uVar6) - iVar1;
    if ((int)uVar9 <= (int)uVar10) {
      uVar10 = uVar9;
    }
    if ((int)uVar10 <= (int)uVar11) {
      uVar11 = uVar10;
    }
    uVar10 = (param_5[1] - uVar7) - iVar4;
    uVar12 = (param_6[1] - uVar8) - iVar4;
    if ((int)uVar9 <= (int)uVar10) {
      uVar10 = uVar9;
    }
    if ((int)uVar10 <= (int)uVar12) {
      uVar12 = uVar10;
    }
    iVar1 = uVar2 + iVar1 + (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU));
    uVar13 = (ulong)(uVar3 + iVar4 + (uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)));
    lStack_38 = CONCAT44(uVar7 - uVar3,uVar5 - uVar2);
    uStack_30 = lStack_38 + (uVar13 << 0x20) & 0xffffffff00000000 | (ulong)(iVar1 + (uVar5 - uVar2))
    ;
    lStack_28 = CONCAT44(uVar8 - uVar3,uVar6 - uVar2);
    uStack_20 = lStack_28 + (uVar13 << 0x20) & 0xffffffff00000000 | (ulong)(iVar1 + (uVar6 - uVar2))
    ;
    uStack_18 = param_4;
    uStack_14 = param_4;
    FUN_10a7b9d9c(param_1[1],&lStack_38);
  }
  return;
}



/* Entry: 10a7be1ac; end: 10a7be1d3;  */

void FUN_10a7be1ac(void)

{
  return;
}



/* Entry: 10a7be1d4; end: 10a7be5e7;  */

void FUN_10a7be1d4(long param_1,int *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,int *param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  
  plVar8 = (long *)*param_4;
  if (plVar8 == (long *)0x0) {
    if ((bRam000000011330a9e8 & 1) == 0) {
      return;
    }
    FUN_10ae06f30(0,1,&UNK_10f6774a8,&UNK_10f6775fa,0x4a5,&UNK_10f6775d2,&stack0x00000000);
    return;
  }
  if (*(char *)(param_1 + 0xa9) != '\x01') {
    if (*(char *)(param_1 + 0xa8) != '\x01') {
      return;
    }
    if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
      if (*param_7 != 0 || param_7[1] != 0) {
        iVar3 = *param_2;
        iVar5 = param_2[1];
        iVar16 = param_2[2] - iVar3;
        iVar18 = param_2[3] - iVar5;
        lVar11 = plVar8[0xb];
        uVar4 = (undefined4)plVar8[1];
        uVar6 = *(undefined4 *)((long)plVar8 + 0xc);
        lVar13 = plVar8[1];
        if ((*param_7 != iVar16) || (param_7[1] != iVar18)) {
          iVar17 = *(int *)(param_1 + 0x80);
          iVar19 = *(int *)(param_1 + 0x84);
          lStack_78 = CONCAT44(iVar18,iVar16);
          FUN_10a775818(&lStack_90,param_1,&lStack_78);
          if (*(int *)(param_1 + 0x24) != 0) {
            lVar12 = 0;
            lVar14 = 0;
            uVar15 = 0;
            iVar16 = *(int *)(param_1 + 0x80);
            iVar18 = *(int *)(param_1 + 0x84);
            do {
              if (((ulong)(lStack_88 - lStack_90 >> 4) <= uVar15) ||
                 (uVar10 = (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 3) *
                           -0x5555555555555555, uVar10 < uVar15 || uVar10 - uVar15 == 0))
              goto LAB_10a7be5c4;
              puVar2 = (undefined8 *)(lStack_90 + lVar14);
              uVar9 = *puVar2;
              (**(code **)(*(long *)*param_4 + 0x20))
                        ((long *)*param_4,*(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar12),lVar11
                         ,lVar13,uVar9,CONCAT44(iVar18,iVar16),
                         CONCAT44((int)(((float)iVar5 / (float)iVar19) * (float)iVar18),
                                  (int)(((float)iVar3 / (float)iVar17) * (float)iVar16)),
                         CONCAT44(*(int *)((long)puVar2 + 0xc) - (int)((ulong)uVar9 >> 0x20),
                                  *(int *)(puVar2 + 1) - (int)uVar9));
              iVar16 = iVar16 / 2;
              if (iVar16 < 2) {
                iVar16 = 1;
              }
              iVar18 = iVar18 / 2;
              if (iVar18 < 2) {
                iVar18 = 1;
              }
              *(undefined1 *)(param_1 + 0x20) = 1;
              uVar15 = uVar15 + 1;
              lVar14 = lVar14 + 0x10;
              lVar12 = lVar12 + 0x18;
            } while (uVar15 < *(uint *)(param_1 + 0x24));
          }
          goto LAB_10a7be5b0;
        }
        goto LAB_10a7be2fc;
      }
    }
    lVar11 = plVar8[0xb];
    uVar4 = (undefined4)plVar8[1];
    uVar6 = *(undefined4 *)((long)plVar8 + 0xc);
LAB_10a7be2fc:
    if (*(undefined8 **)(param_1 + 0xb8) != *(undefined8 **)(param_1 + 0xb0)) {
      (**(code **)(*plVar8 + 0x20))
                (plVar8,**(undefined8 **)(param_1 + 0xb0),lVar11,CONCAT44(uVar6,uVar4),0,
                 *(undefined8 *)(param_1 + 0x80),*(undefined8 *)param_2,CONCAT44(uVar6,uVar4));
      *(undefined1 *)(param_1 + 0x20) = 1;
      return;
    }
LAB_10a7be5c4:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a7be5c8);
    (*pcVar7)();
  }
  if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
    if (*param_7 != 0 || param_7[1] != 0) {
      iVar3 = *param_2;
      iVar5 = param_2[1];
      lVar11 = plVar8[0xb];
      lStack_78 = plVar8[1];
      if ((*param_7 != param_2[2] - iVar3) || (param_7[1] != param_2[3] - iVar5)) {
        iVar16 = *(int *)(param_1 + 0x80);
        iVar18 = *(int *)(param_1 + 0x84);
        uStack_98 = CONCAT44(param_2[3] - iVar5,param_2[2] - iVar3);
        FUN_10a775818(&lStack_90,param_1,&uStack_98);
        if (*(int *)(param_1 + 0x24) != 0) {
          lVar13 = 0;
          uVar15 = 0;
          iVar17 = *(int *)(param_1 + 0x80);
          iVar19 = *(int *)(param_1 + 0x84);
          do {
            if ((ulong)(lStack_88 - lStack_90 >> 4) <= uVar15) goto LAB_10a7be5c4;
            piVar1 = (int *)(lStack_90 + lVar13);
            uStack_98 = CONCAT44(piVar1[3] - piVar1[1],piVar1[2] - *piVar1);
            FUN_10a7be5e8(param_1,*param_4,lVar11,&lStack_78,piVar1,
                          (int)(((float)iVar3 / (float)iVar16) * (float)iVar17),
                          (int)(((float)iVar5 / (float)iVar18) * (float)iVar19),&uStack_98,
                          (int)uVar15);
            iVar17 = iVar17 / 2;
            if (iVar17 < 2) {
              iVar17 = 1;
            }
            iVar19 = iVar19 / 2;
            if (iVar19 < 2) {
              iVar19 = 1;
            }
            uVar15 = uVar15 + 1;
            lVar13 = lVar13 + 0x10;
          } while (uVar15 < *(uint *)(param_1 + 0x24));
        }
LAB_10a7be5b0:
        if (lStack_90 == 0) {
          return;
        }
        lStack_88 = lStack_90;
        __ZdlPv();
        return;
      }
      goto LAB_10a7be248;
    }
  }
  lVar11 = plVar8[0xb];
  lStack_78 = plVar8[1];
  iVar3 = *param_2;
  iVar5 = param_2[1];
LAB_10a7be248:
  lStack_90 = 0;
  FUN_10a7be5e8(param_1,plVar8,lVar11,&lStack_78,&lStack_90,iVar3,iVar5,&lStack_78,0);
  return;
}



/* Entry: 10a7be5e8; end: 10a7be777;  */

void FUN_10a7be5e8(long param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,int param_6,int param_7,int *param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined1 uStack_79;
  long lStack_78;
  long lStack_70;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = param_6 / iVar1;
  }
  param_6 = param_6 - iVar3 * iVar1;
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = (param_6 + iVar1 + *param_8 + -1) / iVar1;
  }
  iVar4 = iVar4 * iVar1;
  if (0 < iVar4) {
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = param_7 / iVar2;
    }
    param_7 = param_7 - iVar5 * iVar2;
    iVar6 = 0;
    if (iVar2 != 0) {
      iVar6 = (param_7 + iVar2 + param_8[1] + -1) / iVar2;
    }
    iVar6 = iVar6 * iVar2;
    if ((0 < iVar6) &&
       (plVar7 = param_2, (**(code **)(*param_2 + 0x18))(param_2,iVar4,iVar6), 0 < (int)plVar7)) {
      uStack_79 = 0;
      FUN_10a0cf3f0(&lStack_78,(ulong)plVar7 & 0xffffffff,&uStack_79);
      (**(code **)(*param_2 + 0x20))
                (param_2,lStack_78,param_3,*param_4,*param_5,CONCAT44(iVar6,iVar4),
                 CONCAT44(param_7,param_6),*(undefined8 *)param_8);
      (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
                (*(long **)(param_1 + 0x28),iVar3 * iVar1,iVar5 * iVar2,0,iVar4,iVar6,0,lStack_78,
                 param_9,0);
      (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
      if (lStack_78 != 0) {
        lStack_70 = lStack_78;
        __ZdlPv();
      }
    }
  }
  return;
}



/* Entry: 10a7be778; end: 10a7be7e7;  */

void FUN_10a7be778(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x78;
  __Znwm();
  FUN_10a7be7e8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a7be7e8; end: 10a7be82f;  */

undefined8 * FUN_10a7be7e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bc82f0;
  FUN_10a7be830(param_1 + 3);
  return param_1;
}



/* Entry: 10a7be830; end: 10a7be93b;  */

undefined8
FUN_10a7be830(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_50;
  long *plStack_48;
  
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  plVar4 = (long *)param_2[1];
  if (plVar4 == (long *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 == (long *)0x0) {
      uStack_50 = 0;
      plStack_48 = (long *)0x0;
      plVar4 = (long *)param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      if (plVar4 == (long *)0x0) goto LAB_10a7be8e8;
    }
    else {
      uStack_50 = *param_2;
      plVar1 = plVar4 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar5 = param_2[1];
      *param_2 = 0;
      param_2[1] = 0;
      plStack_48 = plVar4;
      if (lVar5 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
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
      if (lVar5 != 0) goto LAB_10a7be8e8;
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
LAB_10a7be8e8:
  FUN_10a77d610(param_1,&uStack_50,param_3,param_4);
  if (plStack_48 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a7be93c; end: 10a7be9b7;  */

long * FUN_10a7be93c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = param_2;
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_110c19200;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = param_2;
  param_1[1] = (long)puVar2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x98;
  }
  FUN_10a7be9b8(param_1,lVar1,param_2);
  return param_1;
}



/* Entry: 10a7be9b8; end: 10a7bea67;  */

void FUN_10a7be9b8(long param_1,undefined8 *param_2,undefined8 param_3)

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



/* Entry: 10a7bea68; end: 10a7bea6b;  */

void FUN_10a7bea68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7bea6c; end: 10a7bea7f;  */

void FUN_10a7bea6c(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7bea80; end: 10a7bea97;  */

void FUN_10a7bea80(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a7bea90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a7bea98; end: 10a7beacf;  */

undefined8 FUN_10a7bea98(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c19250);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a7bead0; end: 10a7bead3;  */

void FUN_10a7bead0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7bead4; end: 10a7bebcf;  */

undefined8 * FUN_10a7bead4(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c189b8;
  puStack_28 = param_1 + 0x16;
  func_0x00010a7bf8dc(&puStack_28);
  if (param_1[0x14] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110c18ff0;
  if (param_1[0xd] != 0) {
    param_1[0xe] = param_1[0xd];
    __ZdlPv();
  }
  FUN_10a7a2e48(param_1 + 7);
  func_0x00010a0523dc(param_1 + 5);
  return param_1;
}



/* Entry: 10a7bebd0; end: 10a7bec8f;  */

void FUN_10a7bebd0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined1 auStack_48 [8];
  long *plStack_40;
  undefined1 uStack_38;
  
  FUN_10a77468c(&iStack_58);
  if ((iStack_58 < iStack_50 && iStack_4c != iStack_54) &&
      (iStack_50 <= iStack_58 || iStack_54 <= iStack_4c)) {
    (**(code **)(*param_2 + 0x60))(param_1,param_2,auStack_48,uStack_38);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  if (plStack_40 != (long *)0x0) {
    plVar1 = plStack_40 + 1;
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
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_40);
    }
  }
  return;
}



/* Entry: 10a7bec90; end: 10a7bed1f;  */

void FUN_10a7bec90(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,0);
  if ((param_4 != 0) && (*param_1 != 0)) {
    FUN_10a7bf970(param_2,*(undefined8 *)(*param_1 + 0x18),param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7bed20; end: 10a7bedaf;  */

void FUN_10a7bed20(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,0);
  if ((*param_4 != 0) && (*param_1 != 0)) {
    lVar1 = *(long *)(*param_1 + 0x18);
    FUN_10a7c0ce4(param_2,lVar1,lVar1 + 0x20,param_4,param_6,param_7);
  }
  return;
}



/* Entry: 10a7bedb0; end: 10a7bee23;  */

void FUN_10a7bedb0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,0);
  if (*param_1 != 0) {
    FUN_10a7c184c(param_2,*(undefined8 *)(*param_1 + 0x18),param_4,*param_7,param_7[1]);
  }
  return;
}



/* Entry: 10a7bee24; end: 10a7beeb3;  */

void FUN_10a7bee24(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  (**(code **)(*param_2 + 0x60))(param_1,param_2,param_3,0);
  if ((param_4 != 0) && (*param_1 != 0)) {
    FUN_10a7bf970(param_2,*(undefined8 *)(*param_1 + 0x18),param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10a7beeb4; end: 10a7bef5f;  */

void FUN_10a7beeb4(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  
  if (*param_4 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(*param_4 + 0x10) == 1;
  }
  (**(code **)(*param_2 + 0x60))(param_1,param_2,param_3,bVar1);
  if ((*param_4 != 0) && (*param_1 != 0)) {
    lVar2 = *(long *)(*param_1 + 0x18);
    FUN_10a7c0ce4(param_2,lVar2,lVar2 + 0x40,param_4,param_6,param_7);
  }
  return;
}



/* Entry: 10a7bef60; end: 10a7befd3;  */

void FUN_10a7bef60(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  (**(code **)(*param_2 + 0x60))(param_1,param_2,param_3,0);
  if (*param_1 != 0) {
    FUN_10a7c184c(param_2,*(undefined8 *)(*param_1 + 0x18),param_4,*param_7,param_7[1]);
  }
  return;
}



/* Entry: 10a7befd4; end: 10a7bf313;  */

void FUN_10a7befd4(long *param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  byte bVar9;
  bool bVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long lStack_68;
  undefined8 uStack_58;
  
  if ((*(int *)(param_2 + 0x24) == 0) || (*(char *)(param_2 + 0x21) != '\x01')) {
LAB_10a7bf01c:
    iVar19 = param_3[2] - *param_3;
    iVar21 = param_3[3] - param_3[1];
  }
  else {
    iVar19 = *param_4;
    iVar21 = param_4[1];
    if (iVar19 == 0 && iVar21 == 0) goto LAB_10a7bf01c;
    if (iVar19 != param_3[2] - *param_3 || iVar21 != param_3[3] - param_3[1]) {
      uStack_58 = *(undefined8 *)param_4;
      bVar10 = true;
      goto LAB_10a7bf038;
    }
  }
  bVar10 = false;
  uStack_58 = CONCAT44(iVar21,iVar19);
LAB_10a7bf038:
  uStack_70 = *(undefined4 *)(param_2 + 8);
  FUN_10ab79b88();
  FUN_10a326b40(param_1,&uStack_78,&uStack_58,&uStack_70);
  if ((*(byte *)(param_2 + 0xa9) & 1) == 0) {
    ppuVar3 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 8) * 4;
    if (0x56 < *(uint *)(param_2 + 8)) {
      ppuVar3 = &PTR_DAT_110ae4700;
    }
    bVar9 = *(byte *)((long)ppuVar3 + 0x1b);
    uVar30 = (ulong)bVar9;
    iVar19 = 1;
    FUN_109fc8e58(1,1);
    uVar29 = (uint)bVar9;
    if (!bVar10) {
      plVar32 = *(long **)(param_2 + 0xb0);
      if (*(long **)(param_2 + 0xb8) != plVar32) {
        uVar30 = (ulong)(int)((*param_3 + *(int *)(param_2 + 0x80) * param_3[1]) * uVar29);
        if (uVar30 < (ulong)(plVar32[1] - *plVar32 >> 2)) {
          lVar22 = *param_1;
          FUN_10a1b7ee0(*(undefined8 *)(lVar22 + 0x28),*plVar32 + uVar30 * 4,
                        *(undefined8 *)(lVar22 + 0x18),*(int *)(param_2 + 0x80) * iVar19,
                        (long)*(int *)(lVar22 + 0x14));
          return;
        }
      }
LAB_10a7bf2f8:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10a7bf2fc);
      (*pcVar11)();
    }
    uStack_78 = CONCAT44(param_3[3] - param_3[1],param_3[2] - *param_3);
    FUN_10a775818(&uStack_70);
    uVar24 = *(uint *)(param_2 + 0x24);
    if (uVar24 != 0) {
      uVar20 = 0;
      iVar4 = *param_3;
      iVar6 = param_3[1];
      iVar5 = param_3[2];
      iVar7 = param_3[3];
      iVar19 = *(int *)(param_2 + 0x80);
      iVar21 = *(int *)(param_2 + 0x84);
      fVar36 = (float)iVar19;
      fVar34 = (float)iVar4 / fVar36;
      fVar37 = (float)iVar21;
      fVar35 = (float)iVar6 / fVar37;
      lVar22 = *(long *)(*param_1 + 0x28);
      do {
        iVar13 = (int)(fVar35 * (float)iVar21);
        iVar23 = (int)((fVar35 + (float)(iVar7 - iVar6) / fVar37) * (float)iVar21);
        if (iVar13 < iVar23) {
          iVar25 = 0;
          iVar26 = (int)((fVar34 + (float)(iVar5 - iVar4) / fVar36) * (float)iVar19);
          iVar12 = (int)(fVar34 * (float)iVar19);
          uVar27 = uVar20 & 0xff;
          uVar14 = uVar30 * ((long)iVar12 + (long)iVar19 * (long)iVar13);
          do {
            if (iVar12 < iVar26) {
              iVar15 = 0;
              uVar16 = uVar14;
              lVar17 = (long)iVar12;
              do {
                if ((ulong)(lStack_68 - CONCAT44(uStack_6c,uStack_70) >> 4) <= uVar27)
                goto LAB_10a7bf2f8;
                if (uVar29 != 0) {
                  piVar2 = (int *)(CONCAT44(uStack_6c,uStack_70) + uVar27 * 0x10);
                  puVar18 = (undefined1 *)
                            (lVar22 + (int)(uVar29 * (*piVar2 + iVar15 +
                                                     *(int *)(*param_1 + 0x10) *
                                                     (iVar25 + piVar2[1]))));
                  uVar28 = uVar16;
                  uVar31 = uVar30;
                  do {
                    uVar33 = (*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0) >> 3) *
                             -0x5555555555555555;
                    if ((uVar33 < uVar27 || uVar33 - uVar27 == 0) ||
                       (plVar32 = (long *)(*(long *)(param_2 + 0xb0) + uVar27 * 0x18),
                       lVar8 = *plVar32, (ulong)(plVar32[1] - lVar8 >> 2) <= uVar28))
                    goto LAB_10a7bf2f8;
                    *puVar18 = (char)*(undefined4 *)(lVar8 + uVar28 * 4);
                    uVar28 = uVar28 + 1;
                    uVar31 = uVar31 - 1;
                    puVar18 = puVar18 + 1;
                  } while (uVar31 != 0);
                }
                lVar17 = lVar17 + 1;
                iVar15 = iVar15 + 1;
                uVar16 = uVar16 + uVar30;
              } while ((int)lVar17 != iVar26);
            }
            iVar13 = iVar13 + 1;
            iVar25 = iVar25 + 1;
            uVar14 = uVar14 + (long)(int)uVar29 * (long)iVar19;
          } while (iVar13 != iVar23);
          uVar24 = *(uint *)(param_2 + 0x24);
        }
        iVar19 = iVar19 / 2;
        if (iVar19 < 2) {
          iVar19 = 1;
        }
        iVar21 = iVar21 / 2;
        if (iVar21 < 2) {
          iVar21 = 1;
        }
        uVar1 = (int)uVar20 + 1;
        uVar20 = (ulong)uVar1;
      } while ((uVar1 & 0xff) < uVar24);
    }
    lStack_68 = CONCAT44(uStack_6c,uStack_70);
    if (lStack_68 != 0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a7bf314; end: 10a7bf533;  */

void FUN_10a7bf314(undefined4 *param_1,long param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  
  *(undefined1 *)(param_1 + 1) = 0;
  puVar9 = (undefined8 *)(param_1 + 2);
  *puVar9 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = *(undefined4 *)(param_2 + 8);
  plVar3 = *(long **)(param_2 + 0xb0);
  if ((plVar3 != *(long **)(param_2 + 0xb8)) && (lVar10 = *plVar3, lVar10 != plVar3[1])) {
    iVar16 = *(int *)(param_2 + 0x24);
    if ((iVar16 != 0) && (*(char *)(param_2 + 0x21) == '\x01')) {
      iVar8 = *param_4;
      iVar17 = param_4[1];
      if (iVar8 != 0 || iVar17 != 0) {
        iVar1 = *param_3;
        iVar2 = param_3[1];
        iVar4 = param_3[2] - iVar1;
        iVar5 = param_3[3] - iVar2;
        *(bool *)(param_1 + 1) = iVar8 != iVar4 || iVar17 != iVar5;
        if (iVar8 != iVar4 || iVar17 != iVar5) {
          uVar14 = *(undefined8 *)(param_2 + 0x80);
          func_0x00010a7ba580(puVar9,iVar16);
          if (*(int *)(param_2 + 0x24) == 0) {
            return;
          }
          lVar10 = 0;
          uVar11 = 0;
          fVar15 = (float)(int)((ulong)uVar14 >> 0x20);
          iVar16 = (int)uVar14;
          fVar18 = (float)iVar1 / (float)iVar16;
          fVar19 = (float)iVar2 / fVar15;
          do {
            uVar7 = (*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0) >> 3) *
                    -0x5555555555555555;
            if (uVar7 < uVar11 || uVar7 - uVar11 == 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7bf510);
              (*pcVar6)();
            }
            iVar17 = (int)((ulong)uVar14 >> 0x20);
            fVar12 = (float)iVar17;
            iVar8 = (int)(fVar19 * fVar12);
            fVar13 = (float)(int)uVar14;
            lStack_b0 = *(long *)(*(long *)(param_2 + 0xb0) + lVar10);
            lStack_a0 = CONCAT44(iVar8,(int)(fVar18 * fVar13));
            uStack_98 = lStack_a0 +
                        ((ulong)(uint)((int)((fVar19 + (float)iVar5 / fVar15) * fVar12) - iVar8) <<
                        0x20) & 0xffffffff00000000 |
                        (ulong)(uint)(int)((fVar18 + (float)iVar4 / (float)iVar16) * fVar13);
            uStack_a8 = uVar14;
            func_0x00010a7ba4b8(puVar9,&lStack_b0);
            uVar14 = NEON_smax(CONCAT44(iVar17 / 2,(int)uVar14 / 2),0x100000001,4);
            uVar11 = uVar11 + 1;
            lVar10 = lVar10 + 0x18;
          } while (uVar11 < *(uint *)(param_2 + 0x24));
          return;
        }
      }
    }
    uStack_a8 = *(undefined8 *)(param_2 + 0x80);
    uStack_98 = *(ulong *)(param_3 + 2);
    lStack_a0 = *(long *)param_3;
    lStack_b0 = lVar10;
    func_0x00010a7ba4b8(puVar9,&lStack_b0);
  }
  return;
}



/* Entry: 10a7bf534; end: 10a7bf53b;  */

undefined1 FUN_10a7bf534(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa9);
}



/* Entry: 10a7bf53c; end: 10a7bf6bf;  */

void FUN_10a7bf53c(long *param_1,long param_2,long *param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined4 uStack_64;
  undefined8 uStack_60;
  long *plStack_58;
  
  if (*param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  plVar8 = *(long **)(param_2 + 0xa0);
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = *plVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5 = (undefined8 *)0x78;
  uStack_64 = param_4;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bc82f0;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar8;
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar6 == (long *)0x0) {
      uStack_60 = 0;
      plStack_58 = (long *)0x0;
    }
    else {
      plVar1 = plVar6 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      uStack_60 = uVar2;
      plStack_58 = plVar6;
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      plVar8 = plVar6 + 1;
      do {
        lVar7 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 != 0) goto LAB_10a7bf628;
      (**(code **)(*plVar6 + 0x10))(plVar6);
      plVar8 = plVar6;
    }
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
LAB_10a7bf628:
  FUN_10a77d610(puVar5 + 3,&uStack_60,param_3,&uStack_64);
  if (plStack_58 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = (long)(puVar5 + 3);
  param_1[1] = (long)puVar5;
  FUN_10a773954(param_2,*param_3 + 0x20);
  return;
}



/* Entry: 10a7bf6c0; end: 10a7bf6cf;  */

void FUN_10a7bf6c0(long *param_1)

{
  *(undefined1 *)((long)param_1 + 0xaa) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010a7bf6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))();
  return;
}



/* Entry: 10a7bf6d0; end: 10a7bf803;  */

void FUN_10a7bf6d0(long param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (((*(byte *)(param_1 + 0xa9) & 1) == 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
    if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
      uVar2 = 0;
      uVar3 = 0;
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      do {
        uVar4 = (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 3) * -0x5555555555555555;
        if (uVar4 < (byte)uVar3 || uVar4 - (byte)uVar3 == 0) goto LAB_10a7bf800;
        iVar6 = (int)((ulong)uVar5 >> 0x20);
        (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
                  (*(long **)(param_1 + 0x28),0,0,0,(int)uVar5,iVar6,0,
                   *(undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)(uVar3 & 0xff) * 0x18),uVar2,0
                  );
        uVar5 = NEON_smax(CONCAT44(iVar6 / 2,(int)uVar5 / 2),0x100000001,4);
        uVar3 = (uVar3 & 0xff) + 1;
        uVar2 = uVar3 & 0xff;
      } while ((uVar3 & 0xff) < *(uint *)(param_1 + 0x24));
    }
    else {
      if (*(undefined8 **)(param_1 + 0xb8) == *(undefined8 **)(param_1 + 0xb0)) {
LAB_10a7bf800:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7bf804);
        (*pcVar1)();
      }
      (**(code **)(**(long **)(param_1 + 0x28) + 0x98))
                (*(long **)(param_1 + 0x28),**(undefined8 **)(param_1 + 0xb0),0,0);
      (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 10a7bf804; end: 10a7bf883;  */

undefined8 * FUN_10a7bf804(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109ffe174(param_1);
    puVar2 = (undefined4 *)param_1[1];
    lVar4 = param_2 << 2;
    uVar1 = *param_3;
    puVar3 = puVar2;
    do {
      *puVar3 = uVar1;
      lVar4 = lVar4 + -4;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    param_1[1] = puVar2 + param_2;
  }
  return param_1;
}



/* Entry: 10a7bf884; end: 10a7bf897;  */

void FUN_10a7bf884(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f676ba7;
  FUN_109ffde64();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*puVar1 != 0) {
    FUN_10a7bf91c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 10a7bf898; end: 10a7bf91b;  */

void FUN_10a7bf898(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*param_1 != 0) {
    FUN_10a7bf91c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a7bf91c; end: 10a7bf96f;  */

void FUN_10a7bf91c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  while (plVar2 = plVar3, plVar2 != plVar1) {
    plVar3 = plVar2 + -3;
    if (*plVar3 != 0) {
      plVar2[-2] = *plVar3;
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10a7bf970; end: 10a7c027f;  */

/* WARNING: Possible PIC construction at 0x00010a7bffb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a7bffb4) */

void FUN_10a7bf970(long param_1,ulong *param_2,undefined4 *param_3,uint param_4,ulong param_5,
                  int *param_6)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long unaff_x19;
  undefined8 unaff_x20;
  uint uVar29;
  ulong unaff_x21;
  ulong uVar30;
  long lVar31;
  ulong unaff_x22;
  ulong uVar32;
  long lVar33;
  ulong unaff_x23;
  long lVar34;
  undefined8 unaff_x24;
  long lVar35;
  uint uVar36;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  uint uVar37;
  ulong unaff_x28;
  ulong uVar38;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar39;
  int iVar40;
  ulong uVar41;
  int iVar42;
  undefined8 uVar43;
  int iVar44;
  float fVar45;
  int iVar46;
  int iVar47;
  float fVar48;
  int iVar49;
  undefined4 *puStack_170;
  int iStack_168;
  int iStack_164;
  long lStack_160;
  uint uStack_158;
  uint uStack_154;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  uint uStack_12c;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  ulong *puStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined4 *puStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  int *piStack_b0;
  int *piStack_a8;
  
  puVar2 = &stack0xfffffffffffffff0;
  if ((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) {
    if (*param_6 == 0 && param_6[1] == 0) goto LAB_10a7bf9d0;
    bVar1 = *param_6 != (int)param_2[1] - (int)*param_2 ||
            param_6[1] != *(int *)((long)param_2 + 0xc) - *(int *)((long)param_2 + 4);
  }
  else {
LAB_10a7bf9d0:
    bVar1 = false;
  }
  puStack_c8 = param_3;
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    uVar21 = *(uint *)(param_1 + 8);
    uVar37 = uVar21;
    if (param_4 != 0) {
      uVar37 = param_4;
    }
    ppuVar3 = &PTR_DAT_110ae4700 + (ulong)uVar21 * 4;
    if (0x56 < uVar21) {
      ppuVar3 = &PTR_DAT_110ae4700;
    }
    bVar7 = *(byte *)((long)ppuVar3 + 0x1b);
    ppuVar3 = &PTR_DAT_110ae4700 + (ulong)uVar37 * 4;
    if (0x56 < uVar37) {
      ppuVar3 = &PTR_DAT_110ae4700;
    }
    bVar8 = *(byte *)((long)ppuVar3 + 0x1b);
    iVar46 = (int)*param_2;
    iVar49 = *(int *)((long)param_2 + 4);
    uVar30 = (long)(int)param_2[1] - (long)iVar46;
    lVar35 = (long)*(int *)((long)param_2 + 0xc) - (long)iVar49;
    iVar40 = (int)uVar30;
    uVar37 = (uint)bVar8;
    if (!bVar1) {
      lStack_160 = uVar30 * bVar8 * lVar35;
      iStack_164 = iVar40 * uVar37;
      iStack_168 = 0;
      puStack_170 = param_3;
      uStack_158 = uVar37;
      uStack_154 = (uint)bVar7;
      FUN_10a7c0280(param_1,(long)iVar46,(long)iVar49,uVar30,lVar35,*(undefined4 *)(param_1 + 0x80),
                    *(undefined4 *)(param_1 + 0x84),0);
      return;
    }
    uStack_c0 = uVar30 & 0xffffffff | lVar35 << 0x20;
    iVar44 = *(int *)(param_1 + 0x80);
    iVar47 = *(int *)(param_1 + 0x84);
    FUN_10a775818(&piStack_b0,param_1,&uStack_c0);
    if (*(int *)(param_1 + 0x24) != 0) {
      lVar34 = 0;
      uVar30 = 0;
      fVar45 = (float)iVar46 / (float)iVar44;
      fVar48 = (float)iVar49 / (float)iVar47;
      iVar46 = *param_6;
      iVar49 = param_6[1];
      uVar41 = *(ulong *)(param_1 + 0x80);
      uVar43 = 0;
      do {
        if ((ulong)((long)piStack_a8 - (long)piStack_b0 >> 4) <= uVar30) goto LAB_10a7c0260;
        iVar11 = (int)(fVar45 * (float)(int)uVar41);
        iVar42 = (int)(uVar41 >> 0x20);
        fVar39 = (float)iVar42;
        iVar12 = (int)(fVar48 * fVar39);
        iStack_168 = (*(int *)((long)piStack_b0 + lVar34) +
                     ((int *)((long)piStack_b0 + lVar34))[1] * iVar40) * uVar37;
        puStack_170 = puStack_c8;
        iStack_164 = iVar40 * (uint)bVar8;
        lStack_160 = (long)iVar46 * (long)(int)(uint)bVar8 * (long)iVar49;
        uStack_158 = uVar37;
        uStack_154 = (uint)bVar7;
        uStack_e0 = uVar41;
        uStack_d8 = uVar43;
        FUN_10a7c0280(param_1,iVar11,iVar12,
                      (int)((fVar45 + (float)iVar40 / (float)iVar44) * (float)(int)uVar41) - iVar11,
                      (int)((fVar48 + (float)(int)lVar35 / (float)iVar47) * fVar39) - iVar12,
                      uVar41 & 0xffffffff,iVar42,uVar30);
        uVar41 = NEON_smax(CONCAT44((int)(uStack_e0 >> 0x20) / 2,(int)uStack_e0 / 2),0x100000001,4);
        uVar30 = uVar30 + 1;
        lVar34 = lVar34 + 0x10;
      } while (uVar30 < *(uint *)(param_1 + 0x24));
    }
LAB_10a7bffd4:
    if (piStack_b0 != (int *)0x0) {
      piStack_a8 = piStack_b0;
      __ZdlPv();
    }
    return;
  }
  if (((param_5 & 1) == 0) && ((*(byte *)(param_1 + 0xaa) & 1) == 0)) {
    if (!bVar1) {
      puStack_170 = (undefined4 *)0x0;
      (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))();
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0xa8) != '\x01') {
    return;
  }
  uVar21 = *(uint *)(param_1 + 8);
  uVar37 = uVar21;
  if (param_4 != 0) {
    uVar37 = param_4;
  }
  ppuVar3 = &PTR_DAT_110ae4700 + (ulong)uVar21 * 4;
  if (0x56 < uVar21) {
    ppuVar3 = &PTR_DAT_110ae4700;
  }
  uVar30 = (ulong)*(byte *)((long)ppuVar3 + 0x1b);
  ppuVar4 = &PTR_DAT_110ae4700 + (ulong)uVar37 * 4;
  if (0x56 < uVar37) {
    ppuVar4 = &PTR_DAT_110ae4700;
  }
  uVar41 = (ulong)*(byte *)((long)ppuVar4 + 0x1b);
  iVar46 = (int)*param_2;
  lStack_e8 = (long)iVar46;
  iVar49 = *(int *)((long)param_2 + 4);
  uStack_e0 = (ulong)iVar49;
  uVar37 = (int)param_2[1] - iVar46;
  uVar21 = *(int *)((long)param_2 + 0xc) - iVar49;
  uVar38 = (ulong)uVar21;
  uVar36 = (uint)*(byte *)((long)ppuVar4 + 0x1b);
  uVar29 = (uint)*(byte *)((long)ppuVar3 + 0x1b);
  if (bVar1) {
    uStack_c0 = CONCAT44(uVar21,uVar37);
    iVar46 = *(int *)(param_1 + 0x80);
    iVar49 = *(int *)(param_1 + 0x84);
    FUN_10a775818(&piStack_b0);
    if (*(int *)(param_1 + 0x24) == 0) goto LAB_10a7bffd4;
    unaff_x27 = 0;
    fVar45 = (float)(int)lStack_e8 / (float)iVar46;
    fVar48 = (float)(int)uStack_e0 / (float)iVar49;
    unaff_x22 = (long)*param_6 * (long)(int)uVar36 * (long)param_6[1];
    uVar38 = *(ulong *)(param_1 + 0x80);
    lStack_148 = uVar30 * 4;
    if ((long)piStack_a8 - (long)piStack_b0 >> 4 != 0) {
      iVar40 = (int)uVar38;
      uVar18 = (uint)(fVar45 * (float)iVar40);
      uStack_108 = (ulong)uVar18;
      uVar19 = (uint)((fVar45 + (float)(int)uVar37 / (float)iVar46) * (float)iVar40);
      uStack_110 = (ulong)uVar19;
      uStack_128 = uVar38 & 0xffffffff;
      uStack_138 = 0;
      uStack_12c = (uint)(uVar38 >> 0x20);
      uVar20 = (uint)(fVar48 * (float)(int)uStack_12c);
      uStack_120 = (ulong)uVar20;
      uVar21 = (uint)((fVar48 + (float)(int)uVar21 / (float)iVar49) * (float)(int)uStack_12c);
      uStack_118 = (ulong)uVar21;
      uStack_140 = uVar38;
      if (uVar36 == uVar29) {
        if ((int)uVar20 < (int)uVar21) {
          lVar35 = 0;
          uVar24 = (uVar19 - uVar18) * uVar29;
          puStack_f0 = (ulong *)(-(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar24 << 2)
          ;
          uStack_e0 = (long)(int)uVar36 * (long)(int)(uVar19 - uVar18);
          lStack_f8 = (long)(int)uVar21 - (long)(int)uVar20;
          lStack_100 = (long)(int)lStack_148 * (long)iVar40;
          uVar38 = uVar30 * (((long)(int)uVar20 + -1) * (long)iVar40 + (long)(int)uVar18);
          lStack_e8 = (long)(int)uVar29 * (long)iVar40;
          lVar34 = lStack_148 * ((long)(int)uVar18 + (long)iVar40 * (long)(int)uVar20);
          do {
            lVar22 = ((long)*piStack_b0 + (long)(int)(((int)lVar35 + piStack_b0[1]) * uVar37)) *
                     uVar41;
            if (((int)lVar22 < 0) || (unaff_x22 < uStack_e0 + lVar22)) break;
            plVar5 = *(long **)(param_1 + 0xb0);
            if ((*(long *)(param_1 + 0xb8) - (long)plVar5 >> 3) * -0x5555555555555555 == 0)
            goto LAB_10a7c0260;
            uVar38 = uVar38 + lStack_e8;
            if ((ulong)(plVar5[1] - *plVar5 >> 2) <= uVar38) goto LAB_10a7c0260;
            lVar35 = lVar35 + 1;
            lVar23 = lVar34 + lStack_100;
            _memcpy(*plVar5 + lVar34,puStack_c8 + lVar22,puStack_f0);
            lVar34 = lVar23;
          } while (lStack_f8 != lVar35);
        }
      }
      else if ((int)uVar20 < (int)uVar21) {
        iVar46 = 0;
        uVar38 = uVar30 * ((long)(int)uVar18 + (long)iVar40 * (long)(int)uVar20);
        uVar24 = uVar20;
        do {
          if ((int)uVar18 < (int)uVar19) {
            iVar49 = 0;
            uVar32 = uVar38;
            lVar35 = (long)(int)uVar18;
            do {
              uVar9 = (((int)lVar35 - uVar18) + *piStack_b0 +
                      ((uVar24 - uVar20) + piStack_b0[1]) * uVar37) * uVar36;
              if ((-1 < (int)uVar9) && (uVar9 + uVar41 <= unaff_x22 && uVar29 != 0)) {
                uVar28 = 0;
                plVar5 = *(long **)(param_1 + 0xb0);
                lVar34 = *(long *)(param_1 + 0xb8);
                puVar13 = puStack_c8 +
                          uVar36 * (*piStack_b0 + iVar49 + uVar37 * (iVar46 + piStack_b0[1]));
                uVar25 = uVar32;
                uVar26 = uVar30;
                do {
                  if (uVar28 < uVar41) {
                    uVar17 = *puVar13;
                  }
                  else {
                    uVar17 = 0xffffffff;
                  }
                  if (((lVar34 - (long)plVar5 >> 3) * -0x5555555555555555 == 0) ||
                     ((ulong)(plVar5[1] - *plVar5 >> 2) <= uVar25)) goto LAB_10a7c0260;
                  *(undefined4 *)(*plVar5 + uVar25 * 4) = uVar17;
                  uVar28 = uVar28 + 1;
                  puVar13 = puVar13 + 1;
                  uVar25 = uVar25 + 1;
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
              lVar35 = lVar35 + 1;
              iVar49 = iVar49 + 1;
              uVar32 = uVar32 + uVar30;
            } while ((uint)lVar35 != uVar19);
          }
          uVar24 = uVar24 + 1;
          iVar46 = iVar46 + 1;
          uVar38 = uVar38 + (long)(int)uVar29 * (long)iVar40;
        } while (uVar24 != uVar21);
      }
      uVar32 = uStack_128;
      uVar21 = uStack_12c;
      unaff_x24 = 0xaaaaaaaaaaaaaaab;
      uStack_c0 = uStack_108 | uStack_120 << 0x20;
      uStack_b8 = uStack_c0 + ((ulong)(uint)((int)uStack_118 - (int)uStack_120) << 0x20) &
                  0xffffffff00000000 | uStack_110;
      if ((*(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0) >> 3) *
          -0x5555555555555555 != 0) {
        unaff_x23 = (ulong)uStack_12c;
        unaff_x20 = 0x18;
        FUN_10a7c05e4(param_1,**(undefined8 **)(param_1 + 0xb0),&uStack_c0,uStack_128,unaff_x23,
                      uVar30);
        if ((*(long *)(param_1 + 0xb8) - (long)*(undefined8 **)(param_1 + 0xb0) >> 3) *
            -0x5555555555555555 != 0) {
          uVar43 = **(undefined8 **)(param_1 + 0xb0);
          puVar15 = &uStack_c0;
          unaff_x30 = 0x10a7bffb4;
          register0x00000008 = (BADSPACEBASE *)&puStack_170;
          unaff_x19 = param_1;
          unaff_x21 = uVar30;
          unaff_x25 = uVar41;
          unaff_x26 = (ulong)uVar37;
          unaff_x28 = uVar32;
          unaff_x29 = puVar2;
          goto SUB_10a7c0ae4;
        }
      }
    }
  }
  else {
    iVar40 = *(int *)(param_1 + 0x80);
    uVar32 = (ulong)iVar40;
    puStack_f0 = param_2;
    if (uVar36 == uVar29) {
      if (0 < (int)uVar21) {
        lVar35 = 0;
        lVar34 = (lStack_e8 + (long)iVar49 * (long)iVar40) * uVar30 * 4;
        iVar46 = 0;
        do {
          plVar5 = *(long **)(param_1 + 0xb0);
          if ((*(long **)(param_1 + 0xb8) == plVar5) ||
             ((ulong)(plVar5[1] - *plVar5 >> 2) <=
              (lStack_e8 + (lVar35 + uStack_e0) * uVar32) * uVar30)) goto LAB_10a7c0260;
          uVar38 = uVar38 - 1;
          lVar35 = lVar35 + 1;
          _memcpy(*plVar5 + lVar34,puStack_c8 + iVar46,
                  -(ulong)(uVar37 * uVar29 >> 0x1f) & 0xfffffffc00000000 |
                  (ulong)(uVar37 * uVar29) << 2);
          lVar34 = lVar34 + (long)iVar40 * (long)(int)uVar29 * 4;
          iVar46 = iVar46 + uVar37 * uVar36;
        } while (uVar38 != 0);
      }
    }
    else if (0 < (int)uVar21) {
      uVar28 = 0;
      iVar46 = (iVar46 + iVar49 * iVar40) * uVar29;
      do {
        if (0 < (int)uVar37) {
          uVar25 = 0;
          puVar13 = puStack_c8;
          iVar49 = iVar46;
          do {
            uVar26 = (ulong)iVar49;
            if (uVar29 != 0) {
              uVar27 = 0;
              plVar5 = *(long **)(param_1 + 0xb0);
              plVar6 = *(long **)(param_1 + 0xb8);
              uVar14 = uVar30;
              puVar16 = puVar13;
              do {
                if (uVar27 < uVar41) {
                  uVar17 = *puVar16;
                }
                else {
                  uVar17 = 0xffffffff;
                }
                if ((plVar6 == plVar5) || ((ulong)(plVar5[1] - *plVar5 >> 2) <= uVar26))
                goto LAB_10a7c0260;
                *(undefined4 *)(*plVar5 + uVar26 * 4) = uVar17;
                uVar27 = uVar27 + 1;
                puVar16 = puVar16 + 1;
                uVar26 = uVar26 + 1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            uVar25 = uVar25 + 1;
            puVar13 = puVar13 + uVar41;
            iVar49 = iVar49 + uVar29;
          } while (uVar25 != uVar37);
        }
        uVar28 = uVar28 + 1;
        puStack_c8 = puStack_c8 + (long)(int)uVar36 * (long)(int)uVar37;
        iVar46 = iVar46 + iVar40 * uVar29;
      } while (uVar28 != uVar38);
    }
    puVar15 = puStack_f0;
    if (*(undefined8 **)(param_1 + 0xb8) != *(undefined8 **)(param_1 + 0xb0)) {
      FUN_10a7c05e4(param_1,**(undefined8 **)(param_1 + 0xb0),puStack_f0,uVar32,
                    *(undefined4 *)(param_1 + 0x84),uVar30);
      if (*(undefined8 **)(param_1 + 0xb8) != *(undefined8 **)(param_1 + 0xb0)) {
        uVar43 = **(undefined8 **)(param_1 + 0xb0);
        uVar21 = *(uint *)(param_1 + 0x84);
SUB_10a7c0ae4:
        *(ulong *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        iVar49 = *(int *)(param_1 + 0x10);
        iVar46 = *(int *)(param_1 + 0xc) + iVar49 + *(int *)(param_1 + 0x14);
        if (iVar49 < iVar46) {
          *(undefined8 *)((long)register0x00000008 + -0x68) = uVar43;
          uVar41 = *puVar15;
          iVar44 = *(int *)((long)puVar15 + 4);
          uVar38 = puVar15[1];
          iVar47 = *(int *)((long)puVar15 + 0xc);
          *(int *)((long)register0x00000008 + -0x80) = (int)uVar41;
          uVar37 = (int)uVar41 - iVar46;
          uVar37 = uVar37 & ((int)uVar37 >> 0x1f ^ 0xffffffffU);
          iVar40 = (int)uVar38 + iVar46;
          iVar11 = (int)uVar32;
          if (iVar11 <= iVar40) {
            iVar40 = iVar11;
          }
          uVar36 = iVar44 - iVar46;
          uVar36 = uVar36 & ((int)uVar36 >> 0x1f ^ 0xffffffffU);
          uVar41 = (ulong)uVar36;
          uVar29 = iVar47 + iVar46;
          if ((int)uVar21 <= (int)uVar29) {
            uVar29 = uVar21;
          }
          iVar46 = (int)uVar38 + iVar49;
          if (iVar11 <= iVar46) {
            iVar46 = iVar11;
          }
          *(int *)((long)register0x00000008 + -0x7c) = iVar46;
          uVar19 = iVar44 - iVar49;
          uVar18 = iVar47 + iVar49;
          uVar20 = uVar18;
          if ((int)uVar21 <= (int)uVar18) {
            uVar20 = uVar21;
          }
          *(ulong *)((long)register0x00000008 + -0x78) = (ulong)uVar20;
          *(ulong *)((long)register0x00000008 + -0x70) = (ulong)uVar37;
          *(int *)((long)register0x00000008 + -0x84) = iVar40;
          *(ulong *)((long)register0x00000008 + -0x90) = uVar30 * 4;
          lVar35 = uVar30 * 4 * (long)(int)(iVar40 - uVar37);
          if (((int)uVar36 < (int)uVar19) && (lVar35 != 0)) {
            lVar34 = *(long *)((long)register0x00000008 + -0x68) +
                     ((long)iVar11 * uVar41 +
                     (*(ulong *)((long)register0x00000008 + -0x70) & 0xffffffff)) * uVar30 * 4;
            do {
              _bzero(lVar34,lVar35);
              uVar41 = uVar41 + 1;
              lVar34 = lVar34 + (long)iVar11 * uVar30 * 4;
            } while (uVar41 < uVar19);
          }
          uVar19 = uVar19 & ((int)uVar19 >> 0x1f ^ 0xffffffffU);
          lVar34 = *(long *)((long)register0x00000008 + -0x68);
          if (((int)uVar18 < (int)uVar29) && (lVar35 != 0)) {
            iVar46 = uVar29 - (int)*(undefined8 *)((long)register0x00000008 + -0x78);
            lVar22 = lVar34 + (*(long *)((long)register0x00000008 + -0x70) +
                              (long)(int)*(undefined8 *)((long)register0x00000008 + -0x78) *
                              (long)iVar11) * uVar30 * 4;
            do {
              _bzero(lVar22,lVar35);
              lVar22 = lVar22 + (long)iVar11 * uVar30 * 4;
              iVar46 = iVar46 + -1;
            } while (iVar46 != 0);
          }
          if ((int)uVar19 < (int)*(long *)((long)register0x00000008 + -0x78)) {
            lVar35 = 0;
            iVar46 = *(int *)((long)register0x00000008 + -0x7c);
            uVar41 = *(ulong *)((long)register0x00000008 + -0x70);
            lVar31 = *(long *)((long)register0x00000008 + -0x90) *
                     (long)(int)((*(int *)((long)register0x00000008 + -0x80) - iVar49 &
                                 (*(int *)((long)register0x00000008 + -0x80) - iVar49 >> 0x1f ^
                                 0xffffffffU)) - (int)uVar41);
            lVar33 = *(long *)((long)register0x00000008 + -0x90) *
                     (long)(*(int *)((long)register0x00000008 + -0x84) - iVar46);
            lVar22 = *(long *)((long)register0x00000008 + -0x78) - (ulong)uVar19;
            lVar23 = (long)iVar11 * (ulong)uVar19;
            do {
              if (lVar31 != 0) {
                _bzero(lVar34 + (lVar23 + (uVar41 & 0xffffffff)) * uVar30 * 4 + lVar35,lVar31);
              }
              if (lVar33 != 0) {
                _bzero(lVar34 + (lVar23 + iVar46) * uVar30 * 4 + lVar35,lVar33);
              }
              lVar35 = lVar35 + (long)iVar11 * uVar30 * 4;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
          }
        }
        return;
      }
    }
  }
LAB_10a7c0260:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10a7c0264);
  (*pcVar10)();
}



/* Entry: 10a7c0280; end: 10a7c05e3;  */

void FUN_10a7c0280(long param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                  int param_7,undefined4 param_8,long param_9,int param_10,uint param_11,
                  ulong param_12,uint param_13,uint param_14)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  iVar16 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14);
  uVar2 = param_2 - iVar16 & (param_2 - iVar16 >> 0x1f ^ 0xffffffffU);
  uVar3 = param_3 - iVar16 & (param_3 - iVar16 >> 0x1f ^ 0xffffffffU);
  iVar9 = param_4 + param_2 + iVar16;
  if (param_6 <= iVar9) {
    iVar9 = param_6;
  }
  iVar1 = param_5 + param_3 + iVar16;
  if (param_7 <= iVar1) {
    iVar1 = param_7;
  }
  uVar5 = iVar9 - uVar2;
  uVar13 = (ulong)uVar5;
  uVar6 = iVar1 - uVar3;
  if (0 < (int)uVar5 && 0 < (int)uVar6) {
    uVar15 = (ulong)param_13;
    uVar4 = (ulong)param_14;
    uStack_88 = uStack_88 & 0xffffffff00000000;
    FUN_10a7bf804(&lStack_78,uVar6 * uVar4 * uVar13,&uStack_88);
    if (iVar16 <= param_2) {
      param_2 = iVar16;
    }
    if (iVar16 <= param_3) {
      param_3 = iVar16;
    }
    if (param_13 == param_14) {
      if (0 < (int)param_5) {
        lVar17 = (long)param_10;
        uVar15 = (ulong)param_5;
        iVar16 = param_14 * (param_2 + param_3 * uVar5);
        param_9 = param_9 + (long)param_10 * 4;
        do {
          if ((lVar17 < 0) || (param_12 < uVar4 * (long)(int)param_4 + lVar17)) break;
          if ((ulong)(lStack_70 - lStack_78 >> 2) <= (ulong)(long)iVar16) {
LAB_10a7c05c4:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10a7c05c8);
            (*pcVar7)();
          }
          _memcpy(lStack_78 + (long)iVar16 * 4,param_9,(long)(int)param_4 * uVar4 * 4);
          iVar16 = iVar16 + param_14 * uVar5;
          param_9 = param_9 + (-(ulong)(param_11 >> 0x1f) & 0xfffffffc00000000 |
                              (ulong)param_11 << 2);
          lVar17 = lVar17 + (int)param_11;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
    }
    else if (0 < (int)param_5) {
      uVar12 = 0;
      param_9 = param_9 + (long)param_10 * 4;
      iVar16 = param_14 * (param_2 + param_3 * uVar5);
      do {
        if (0 < (int)param_4) {
          uVar8 = 0;
          lVar17 = param_9;
          iVar9 = iVar16;
          do {
            if (((param_14 != 0) &&
                (lVar10 = (long)param_10 + uVar12 * (long)(int)param_11 + uVar8 * uVar15,
                -1 < lVar10)) && (lVar10 + uVar15 <= param_12)) {
              uVar11 = 0;
              do {
                if (uVar11 < uVar15) {
                  uVar14 = *(undefined4 *)(lVar17 + uVar11 * 4);
                }
                else {
                  uVar14 = 0xffffffff;
                }
                if ((ulong)(lStack_70 - lStack_78 >> 2) <= (long)iVar9 + uVar11) goto LAB_10a7c05c4;
                *(undefined4 *)(lStack_78 + (long)iVar9 * 4 + uVar11 * 4) = uVar14;
                uVar11 = uVar11 + 1;
              } while (uVar4 != uVar11);
            }
            uVar8 = uVar8 + 1;
            lVar17 = lVar17 + uVar15 * 4;
            iVar9 = iVar9 + param_14;
          } while (uVar8 != param_4);
        }
        uVar12 = uVar12 + 1;
        param_9 = param_9 + (-(ulong)(param_11 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_11 << 2)
        ;
        iVar16 = iVar16 + param_14 * uVar5;
      } while (uVar12 != param_5);
    }
    uStack_88 = CONCAT44(param_3,param_2);
    uStack_80 = CONCAT44(param_3 + param_5,param_2 + param_4);
    FUN_10a7c05e4(param_1,lStack_78,&uStack_88,uVar13,uVar6,uVar4);
    func_0x00010a7c0ae4(param_1,lStack_78,&uStack_88,uVar13,uVar6,uVar4);
    (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
              (*(long **)(param_1 + 0x28),uVar2,uVar3,0,uVar13,uVar6,0,lStack_78,param_8,0);
    (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
    if (lStack_78 != 0) {
      lStack_70 = lStack_78;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10a7c05e4; end: 10a7c0ce3;  */

void FUN_10a7c05e4(long param_1,long param_2,int *param_3,uint param_4,int param_5,uint param_6)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar19 = *param_3;
    iVar4 = param_3[1];
    lVar12 = (long)iVar19;
    uVar3 = param_3[2];
    iVar21 = param_3[3];
    if ((uVar3 - iVar19 != 0 && iVar19 <= (int)uVar3) && iVar4 < iVar21) {
      lVar13 = (long)iVar4;
      uVar5 = (uVar3 - iVar19) * param_6;
      uVar22 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
      uVar9 = (ulong)param_6;
      lVar1 = param_2 + (long)(int)((iVar4 * param_4 + iVar19) * param_6) * 4;
      lVar10 = (long)(int)param_4;
      if (0 < iVar4) {
        lVar15 = param_2 + (lVar12 + (lVar13 + -1) * lVar10) * uVar9 * 4;
        lVar18 = 1;
        lVar24 = lVar13;
        do {
          _memcpy(lVar15,lVar1,uVar22);
          if (*(int *)(param_1 + 0x10) <= lVar18) break;
          lVar18 = lVar18 + 1;
          lVar15 = lVar15 + lVar10 * uVar9 * -4;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      iVar7 = iVar21 + -1;
      iVar20 = iVar21;
      if (iVar21 <= param_5) {
        iVar20 = param_5;
      }
      lVar18 = param_2 + (long)(int)((iVar7 * param_4 + iVar19) * param_6) * 4;
      if (iVar21 < param_5) {
        lVar15 = param_2 + (lVar10 + (long)(int)param_4 * (long)iVar7 + lVar12) * uVar9 * 4;
        uVar16 = 1;
        do {
          _memcpy(lVar15,lVar18,uVar22);
          uVar2 = uVar16 + 1;
          lVar15 = lVar15 + lVar10 * uVar9 * 4;
          bVar8 = (long)uVar16 < (long)*(int *)(param_1 + 0x10);
          uVar16 = uVar2;
        } while (bVar8 && (iVar20 - iVar21) + 1 != uVar2);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      lVar15 = (ulong)param_6 * 4;
      if (0 < iVar19) {
        lVar11 = iVar21 - lVar13;
        lVar24 = param_2 + (lVar12 + (long)iVar4 * (long)(int)param_4) * uVar9 * 4;
        iVar25 = param_6 * (iVar19 + iVar4 * param_4 + -1);
        iVar20 = 1;
        lVar14 = lVar11;
        lVar23 = lVar24;
        iVar17 = iVar25;
        do {
          do {
            _memcpy(param_2 + (long)iVar25 * 4,lVar23,lVar15);
            iVar25 = iVar25 + param_6 * param_4;
            lVar14 = lVar14 + -1;
            lVar23 = lVar23 + lVar10 * uVar9 * 4;
          } while (lVar14 != 0);
          if (*(int *)(param_1 + 0x10) <= iVar20) break;
          iVar25 = iVar17 - param_6;
          bVar8 = iVar20 != iVar19;
          iVar20 = iVar20 + 1;
          lVar14 = lVar11;
          lVar23 = lVar24;
          iVar17 = iVar25;
        } while (bVar8);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      iVar20 = uVar3 - 1;
      uVar5 = uVar3;
      if ((int)uVar3 <= (int)param_4) {
        uVar5 = param_4;
      }
      if ((int)uVar3 < (int)param_4) {
        lVar11 = iVar21 - lVar13;
        iVar25 = param_6 * (uVar3 + iVar4 * param_4 + -1);
        lVar24 = param_2 + (uVar9 + uVar9 * ((long)iVar20 + (long)iVar4 * (long)(int)param_4)) * 4;
        lVar14 = lVar11;
        iVar17 = iVar25;
        lVar23 = lVar24;
        uVar22 = 1;
        do {
          do {
            _memcpy(lVar24,param_2 + (long)iVar17 * 4,lVar15);
            lVar24 = lVar24 + lVar10 * uVar9 * 4;
            lVar14 = lVar14 + -1;
            iVar17 = iVar17 + param_6 * param_4;
          } while (lVar14 != 0);
          uVar16 = uVar22 + 1;
          lVar24 = lVar23 + lVar15;
          bVar8 = (long)uVar22 < (long)*(int *)(param_1 + 0x10);
          lVar14 = lVar11;
          iVar17 = iVar25;
          lVar23 = lVar24;
          uVar22 = uVar16;
        } while (bVar8 && uVar16 != (uVar5 - uVar3) + 1);
        if (*(int *)(param_1 + 0x10) < 1) {
          return;
        }
      }
      lVar24 = 0;
      lVar10 = lVar10 - iVar20;
      iVar25 = param_6 * (uVar3 + iVar21 * param_4);
      iVar21 = param_6 * (iVar19 + iVar21 * param_4 + -1);
      iVar6 = param_4 * (iVar4 + -1);
      iVar17 = param_6 * (uVar3 + iVar6);
      iVar19 = param_6 * (iVar19 + iVar6 + -1);
      do {
        lVar13 = lVar13 + -1;
        lVar14 = lVar24 + 1;
        if ((lVar14 <= lVar12) && (-1 < lVar13)) {
          _memcpy(param_2 + (long)iVar19 * 4,lVar1,lVar15);
        }
        if ((-1 < lVar13) && (lVar14 < lVar10)) {
          _memcpy(param_2 + (long)iVar17 * 4,
                  param_2 + (long)(int)((iVar20 + iVar4 * param_4) * param_6) * 4,lVar15);
        }
        lVar23 = (long)iVar7 + 1 + lVar24;
        if ((lVar14 <= lVar12) && (lVar23 < param_5)) {
          _memcpy(param_2 + (long)iVar21 * 4,lVar18,lVar15);
        }
        if ((lVar23 < param_5) && (lVar14 < lVar10)) {
          _memcpy(param_2 + (long)iVar25 * 4,
                  param_2 + (long)(int)((iVar7 * param_4 + iVar20) * param_6) * 4,lVar15);
        }
        lVar24 = lVar24 + 1;
        iVar25 = iVar25 + param_6 + param_6 * param_4;
        iVar21 = iVar21 + param_6 * (param_4 - 1);
        iVar17 = iVar17 + (param_6 - param_6 * param_4);
        iVar19 = iVar19 + param_6 * ~param_4;
      } while (lVar24 < *(int *)(param_1 + 0x10));
    }
  }
  return;
}



/* Entry: 10a7c0ce4; end: 10a7c16f7;  */

void FUN_10a7c0ce4(code **param_1,code **param_2,code **param_3,code **param_4,code *param_5,
                  code **param_6,code *param_7,ulong param_8)

{
  code **ppcVar1;
  int iVar2;
  uint uVar3;
  undefined **ppuVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  byte bVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [4];
  undefined1 auVar20 [4];
  uint uVar21;
  code **ppcVar22;
  long *plVar23;
  code **ppcVar24;
  code **ppcVar25;
  code **ppcVar26;
  uint uVar27;
  code **ppcVar28;
  uint uVar29;
  long lVar30;
  int iVar31;
  uint uVar32;
  int *piVar33;
  bool bVar34;
  ulong uVar35;
  ulong uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  code *pcVar42;
  code **ppcVar43;
  ulong uVar44;
  code *unaff_x23;
  int iVar45;
  uint uVar46;
  code *pcVar47;
  long lVar48;
  float fVar49;
  uint uVar50;
  float fVar51;
  uint uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  long lStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  uint uStack_184;
  code **ppcStack_180;
  code *pcStack_178;
  code **ppcStack_170;
  code *pcStack_168;
  code **ppcStack_160;
  int iStack_158;
  uint uStack_154;
  code **ppcStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  code **ppcStack_138;
  code **ppcStack_130;
  code *pcStack_120;
  code **ppcStack_118;
  code *pcStack_110;
  code *pcStack_108;
  undefined1 auStack_f4 [4];
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  uint uStack_d0;
  uint uStack_cc;
  long lStack_b0;
  
  uVar21 = (uint)param_8;
  uVar39 = (uint)param_7;
  uVar29 = (uint)param_5;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar42 = *param_4;
  ppcVar24 = param_1;
  ppcVar25 = param_2;
  ppcVar43 = param_3;
  ppcVar26 = param_4;
  ppcVar28 = param_6;
  uVar27 = uVar29;
  if ((pcVar42 == (code *)0x0) ||
     (ppcVar22 = *(code ***)(pcVar42 + 8), ppcVar24 = ppcVar22, ppcVar22 == (code **)0x0))
  goto LAB_10a7c12bc;
  __ZNSt3__119__shared_weak_count4lockEv();
  uVar21 = (uint)param_8;
  uVar39 = (uint)param_7;
  uVar27 = (uint)param_5;
  ppcVar24 = ppcVar22;
  ppcStack_118 = ppcVar22;
  if (ppcVar22 == (code **)0x0) goto LAB_10a7c12bc;
  unaff_x23 = *(code **)pcVar42;
  pcStack_120 = unaff_x23;
  if (unaff_x23 == (code *)0x0) goto LAB_10a7c128c;
  if (*(char *)((long)param_1 + 0xa9) == '\x01') {
    if (((*(char *)(param_1 + 0x15) == '\x01') && (param_1[5] != (code *)0x0)) &&
       (*param_4 != (code *)0x0)) {
      plVar23 = *(long **)(unaff_x23 + 0x28);
      ppcVar24 = (code **)0x0;
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x50))();
        ppcVar24 = (code **)param_1[5];
        (**(code **)(*ppcVar24 + 0x50))();
        uVar21 = (uint)param_8;
        uVar39 = (uint)param_7;
        uVar27 = (uint)param_5;
        if (((int)plVar23 == (int)ppcVar24) && (pcVar42 = *param_4, *(long *)(pcVar42 + 0x18) != 0))
        {
          ppcVar43 = *(code ***)(unaff_x23 + 0x28);
          if (ppcVar43 == (code **)0x0) {
            uVar44 = *(ulong *)(unaff_x23 + 0x80);
          }
          else {
            ppcVar24 = ppcVar43;
            (**(code **)(*ppcVar43 + 0x28))();
            (**(code **)(*ppcVar43 + 0x30))();
            uVar39 = (uint)ppcVar24;
            if (uVar39 < 2) {
              uVar39 = 1;
            }
            uVar21 = (uint)ppcVar43;
            if (uVar21 < 2) {
              uVar21 = 1;
            }
            uVar44 = CONCAT44(uVar21,uVar39);
            ppcVar24 = ppcVar43;
          }
          uVar21 = (uint)param_8;
          uVar39 = (uint)param_7;
          uVar27 = (uint)param_5;
          if ((int)*(uint *)(param_1 + 3) < 2) {
            bVar14 = 1 < (int)*(uint *)((long)param_1 + 0x1c);
          }
          else {
            bVar14 = true;
          }
          ppcVar43 = (code **)(uVar44 >> 0x20);
          if ((*(char *)((long)param_1 + 0x21) == '\x01') && (*(uint *)((long)param_1 + 0x24) != 0))
          {
            if (*(uint *)param_6 == 0 && *(uint *)((long)param_6 + 4) == 0) goto LAB_10a7c134c;
            bVar34 = *(uint *)param_6 != *(uint *)(param_2 + 1) - *(uint *)param_2 ||
                     *(uint *)((long)param_6 + 4) !=
                     *(uint *)((long)param_2 + 0xc) - *(uint *)((long)param_2 + 4);
            if (!bVar14) goto LAB_10a7c1398;
LAB_10a7c1354:
            auStack_f4 = (undefined1  [4])0x0;
            piVar33 = *(int **)(pcVar42 + 0x18);
            if (bVar34) goto LAB_10a7c13b0;
            piVar33 = piVar33 + 0x10;
            param_2 = param_3;
LAB_10a7c15d8:
            ppcStack_130 = (code **)0x0;
            ppcStack_138 = (code **)0x0;
            uStack_140 = (code **)0x0;
            ppuStack_e8 = *(undefined ***)(piVar33 + 2);
            pcStack_f0 = *(code **)piVar33;
            pcStack_108 = param_2[1];
            pcStack_110 = *param_2;
            uVar39 = *(uint *)(param_1 + 0x10);
            uVar21 = *(uint *)((long)param_1 + 0x84);
            ppcVar24 = (code **)auStack_f4;
            ppcVar25 = (code **)&uStack_140;
            ppcVar26 = &pcStack_110;
            FUN_10a7c16f8(ppcVar24,ppcVar25,&pcStack_f0);
            uVar27 = (uint)uVar44;
            ppcVar28 = ppcVar43;
          }
          else {
LAB_10a7c134c:
            bVar34 = false;
            if (bVar14) goto LAB_10a7c1354;
LAB_10a7c1398:
            auStack_f4 = *(undefined1 (*) [4])(param_1 + 2);
            piVar33 = *(int **)(pcVar42 + 0x18);
            if (!bVar34) goto LAB_10a7c15d8;
LAB_10a7c13b0:
            auVar20 = auStack_f4;
            ppcStack_130 = (code **)0x0;
            ppcStack_138 = (code **)0x0;
            uStack_140 = (code **)0x0;
            uVar29 = *(uint *)((long)param_1 + 0x24);
            if (uVar29 != 0) {
              uVar46 = 0;
              iVar31 = *piVar33;
              iVar7 = piVar33[1];
              iVar37 = piVar33[2];
              iVar8 = piVar33[3];
              fVar49 = (float)(int)uVar44;
              fVar53 = (float)iVar31 / fVar49;
              iVar45 = (int)(uVar44 >> 0x20);
              fVar51 = (float)iVar45;
              fVar54 = (float)iVar7 / fVar51;
              uVar5 = *(uint *)param_2;
              uVar9 = *(uint *)((long)param_2 + 4);
              uVar50 = *(uint *)(param_1 + 0x10);
              uVar52 = *(uint *)((long)param_1 + 0x84);
              fVar55 = (float)(int)uVar5 / (float)(int)uVar50;
              fVar56 = (float)(int)uVar9 / (float)(int)uVar52;
              uVar6 = *(uint *)(param_2 + 1);
              uVar10 = *(uint *)((long)param_2 + 0xc);
              do {
                uVar39 = (int)uVar44 >> (uVar46 & 0x1f);
                if ((int)uVar39 < 2) {
                  uVar39 = 1;
                }
                uVar21 = iVar45 >> (uVar46 & 0x1f);
                if ((int)uVar21 < 2) {
                  uVar21 = 1;
                }
                uVar27 = (int)*(uint *)(param_1 + 0x10) >> (uVar46 & 0x1f);
                if ((int)uVar27 < 2) {
                  uVar27 = 1;
                }
                uVar3 = (int)*(uint *)((long)param_1 + 0x84) >> (uVar46 & 0x1f);
                uVar40 = (uint)(fVar53 * (float)uVar39);
                uVar41 = (uint)(fVar54 * (float)uVar21);
                if ((int)uVar3 < 2) {
                  uVar3 = 1;
                }
                uVar32 = (uint)(fVar55 * (float)uVar27);
                uVar38 = (uint)(fVar56 * (float)uVar3);
                uVar15 = (int)((fVar53 + (float)(iVar37 - iVar31) / fVar49) * (float)uVar39) -
                         uVar40;
                uVar16 = (int)((fVar54 + (float)(iVar8 - iVar7) / fVar51) * (float)uVar21) - uVar41;
                uVar17 = (int)((fVar55 + (float)(int)(uVar6 - uVar5) / (float)(int)uVar50) *
                              (float)uVar27) - uVar32;
                ppcVar25 = (code **)(ulong)uVar17;
                uVar18 = (int)((fVar56 + (float)(int)(uVar10 - uVar9) / (float)(int)uVar52) *
                              (float)uVar3) - uVar38;
                if ((int)uVar15 <= (int)uVar17) {
                  uVar17 = uVar15;
                }
                if ((int)uVar16 <= (int)uVar18) {
                  uVar18 = uVar16;
                }
                ppcVar24 = (code **)(ulong)uVar18;
                if (0 < (int)uVar17 && 0 < (int)uVar18) {
                  auVar19 = (undefined1  [4])uVar40;
                  if ((int)auVar20 <= (int)uVar40) {
                    auVar19 = auVar20;
                  }
                  uVar29 = uVar32;
                  if ((int)auVar19 <= (int)uVar32) {
                    uVar29 = (uint)auVar19;
                  }
                  uVar29 = uVar29 & ((int)uVar29 >> 0x1f ^ 0xffffffffU);
                  auVar19 = (undefined1  [4])uVar41;
                  if ((int)auVar20 <= (int)uVar41) {
                    auVar19 = auVar20;
                  }
                  uVar15 = uVar38;
                  if ((int)auVar19 <= (int)uVar38) {
                    uVar15 = (uint)auVar19;
                  }
                  uVar15 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
                  auVar19 = (undefined1  [4])((uVar39 - uVar40) - uVar17);
                  uVar39 = (uVar27 - uVar32) - uVar17;
                  if ((int)auVar20 <= (int)auVar19) {
                    auVar19 = auVar20;
                  }
                  if ((int)auVar19 <= (int)uVar39) {
                    uVar39 = (uint)auVar19;
                  }
                  auVar19 = (undefined1  [4])((uVar21 - uVar41) - uVar18);
                  uVar21 = (uVar3 - uVar38) - uVar18;
                  if ((int)auVar20 <= (int)auVar19) {
                    auVar19 = auVar20;
                  }
                  if ((int)auVar19 <= (int)uVar21) {
                    uVar21 = (uint)auVar19;
                  }
                  iVar2 = uVar29 + uVar17 + (uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU));
                  uVar36 = (ulong)(uVar15 + uVar18 + (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU)))
                  ;
                  pcStack_f0 = (code *)CONCAT44(uVar41 - uVar15,uVar40 - uVar29);
                  ppuStack_e8 = (undefined **)
                                ((ulong)(pcStack_f0 + (uVar36 << 0x20)) & 0xffffffff00000000 |
                                (ulong)(iVar2 + (uVar40 - uVar29)));
                  lStack_e0 = CONCAT44(uVar38 - uVar15,uVar32 - uVar29);
                  uStack_d8 = lStack_e0 + (uVar36 << 0x20) & 0xffffffff00000000 |
                              (ulong)(iVar2 + (uVar32 - uVar29));
                  ppcVar24 = (code **)&uStack_140;
                  ppcVar25 = &pcStack_f0;
                  uStack_d0 = uVar46;
                  uStack_cc = uVar46;
                  FUN_10a7b9d9c(ppcVar24,ppcVar25);
                  uVar29 = *(uint *)((long)param_1 + 0x24);
                }
                uVar21 = (uint)param_8;
                uVar39 = (uint)param_7;
                uVar27 = (uint)param_5;
                uVar46 = uVar46 + 1;
              } while (uVar46 < uVar29);
            }
          }
          if (uStack_140 != ppcStack_138) {
            ppcVar25 = *(code ***)(unaff_x23 + 0x28);
            ppcVar26 = (code **)(((long)ppcStack_138 - (long)uStack_140 >> 3) * -0x3333333333333333)
            ;
            (**(code **)(*(long *)param_1[5] + 0xa8))(param_1[5],ppcVar25);
            ppcVar24 = (code **)param_1[5];
            (**(code **)(*ppcVar24 + 0xb0))();
          }
          param_6 = uStack_140;
          if (uStack_140 != (code **)0x0) {
            ppcStack_138 = uStack_140;
            ppcVar24 = uStack_140;
            __ZdlPv();
          }
          goto LAB_10a7c1288;
        }
      }
    }
  }
  else {
    ppcVar25 = *(code ***)(*param_4 + 0x18);
    (**(code **)(*(long *)unaff_x23 + 0x50))(&uStack_140,unaff_x23,ppcVar25);
    uVar21 = (uint)param_8;
    uVar39 = (uint)param_7;
    uVar27 = (uint)param_5;
    if ((((ppcStack_138 != ppcStack_130) && ((uint)uStack_140 == *(uint *)(param_1 + 1))) &&
        ((*(byte *)((long)param_1 + 0xa9) & 1) == 0)) && (*(char *)(param_1 + 0x15) == '\x01')) {
      if (((int)*(uint *)(param_1 + 3) < 2) &&
         (auStack_f4 = (undefined1  [4])0xffffffff, (int)*(uint *)((long)param_1 + 0x1c) < 2)) {
        iStack_158 = 0;
        unaff_x23 = (code *)0x0;
LAB_10a7c0ec8:
        uVar21 = (uint)param_8;
        uVar39 = (uint)param_7;
        uVar27 = (uint)param_5;
        uStack_184 = uVar29;
        pcStack_178 = unaff_x23;
        if (ppcStack_130 != ppcStack_138) {
          uVar44 = 0;
          uVar5 = *(uint *)param_2;
          uVar9 = *(uint *)((long)param_2 + 4);
          uVar46 = *(uint *)(param_1 + 0x10);
          uVar29 = *(uint *)((long)param_1 + 0x84);
          fVar49 = (float)(int)uVar46;
          fVar51 = (float)(int)uVar29;
          fVar53 = (float)(int)uVar5 / fVar49;
          fVar54 = (float)(int)uVar9 / fVar51;
          uVar6 = *(uint *)(param_2 + 1);
          uVar10 = *(uint *)((long)param_2 + 0xc);
          ppcStack_180 = ppcVar22;
          ppcStack_170 = param_2;
          while( true ) {
            uVar21 = (uint)param_8;
            uVar39 = (uint)param_7;
            uVar27 = (uint)param_5;
            param_5 = (code *)(ulong)uVar29;
            ppcVar24 = (code **)(ulong)uVar46;
            pcVar42 = param_1[0x16];
            uVar36 = ((long)param_1[0x17] - (long)pcVar42 >> 3) * -0x5555555555555555;
            if (uVar36 <= uVar44) break;
            ppcVar25 = ppcStack_138 + uVar44 * 4;
            iVar31 = (int)(fVar53 * (float)(int)uVar46);
            iVar37 = (int)(fVar54 * (float)(int)uVar29);
            uVar39 = (uint)((fVar53 + (float)(int)(uVar6 - uVar5) / fVar49) * (float)(int)uVar46);
            pcVar47 = (code *)CONCAT44(iVar37,iVar31);
            pcStack_108 = (code *)((ulong)(pcVar47 +
                                          ((ulong)(uint)((int)((fVar54 + (float)(int)(uVar10 - uVar9
                                                                                     ) / fVar51) *
                                                              (float)(int)uVar29) - iVar37) << 0x20)
                                          ) & 0xffffffff00000000 | (ulong)uVar39);
            ppcStack_150 = ppcVar25;
            uStack_148 = uVar44;
            pcStack_110 = pcVar47;
            if (iStack_158 == 0) {
              ppuVar4 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 1) * 4;
              if (0x56 < *(uint *)(param_1 + 1)) {
                ppuVar4 = &PTR_DAT_110ae4700;
              }
              bVar12 = *(byte *)((long)ppuVar4 + 0x1b);
              ppcVar28 = (code **)(ulong)bVar12;
              uStack_154 = *(uint *)(ppcVar25 + 2);
              uVar21 = *(uint *)((long)ppcVar25 + 0x14);
              uVar27 = *(uint *)((long)ppcVar25 + 0x1c) - uVar21;
              iVar7 = uVar39 - iVar31;
              uVar39 = (int)((ulong)(pcVar47 +
                                    ((ulong)(uint)((int)((fVar54 + (float)(int)(uVar10 - uVar9) /
                                                                   fVar51) * (float)(int)uVar29) -
                                                  iVar37) << 0x20)) >> 0x20) - iVar37;
              if ((int)(*(uint *)(ppcVar25 + 3) - uStack_154) <= iVar7) {
                iVar7 = *(uint *)(ppcVar25 + 3) - uStack_154;
              }
              if ((int)uVar27 <= (int)uVar39) {
                uVar39 = uVar27;
              }
              uVar44 = (ulong)uVar39;
              if (0 < (int)uVar39) {
                pcVar42 = *ppcVar25;
                lVar48 = (long)(int)(uint)bVar12 * (long)(int)uVar46;
                uVar36 = (((long)iVar37 + -1) * (long)(int)uVar46 + (long)iVar31) * (long)ppcVar28;
                lVar30 = ((long)iVar31 + (long)(int)uVar46 * (long)iVar37) * (long)ppcVar28 * 4;
                pcStack_168 = param_5;
                ppcStack_160 = ppcVar24;
                do {
                  uVar35 = ((long)param_1[0x17] - (long)param_1[0x16] >> 3) * -0x5555555555555555;
                  if (uVar35 < uStack_148 || uVar35 - uStack_148 == 0) goto LAB_10a7c1664;
                  pcVar47 = param_1[0x16] + uStack_148 * 0x18;
                  lVar11 = *(long *)pcVar47;
                  uVar36 = uVar36 + lVar48;
                  if ((ulong)(*(long *)(pcVar47 + 8) - lVar11 >> 2) <= uVar36) goto LAB_10a7c1664;
                  iVar31 = uVar21 * *(uint *)(ppcStack_150 + 1);
                  uVar44 = uVar44 - 1;
                  uVar21 = uVar21 + 1;
                  _memcpy(lVar11 + lVar30,
                          pcVar42 + (long)(int)((uStack_154 + iVar31) * (uint)bVar12) * 4,
                          (long)(int)(uint)bVar12 * (long)iVar7 * 4);
                  lVar30 = lVar30 + lVar48 * 4;
                } while (uVar44 != 0);
                pcVar42 = param_1[0x16];
                uVar36 = ((long)param_1[0x17] - (long)pcVar42 >> 3) * -0x5555555555555555;
                unaff_x23 = pcStack_178;
                ppcVar24 = ppcStack_160;
                param_5 = pcStack_168;
                ppcVar22 = ppcStack_180;
              }
              param_2 = ppcStack_170;
              uVar29 = (uint)param_5;
              if (uVar36 <= uStack_148) goto LAB_10a7c1664;
              ppcVar25 = *(code ***)(pcVar42 + uStack_148 * 0x18);
              param_6 = &pcStack_110;
              ppcVar26 = ppcVar24;
              FUN_10a7c05e4(param_1,ppcVar25);
            }
            else {
              pcVar42 = unaff_x23;
              (**(code **)(*(long *)unaff_x23 + 0x18))
                        (unaff_x23,*(uint *)(ppcVar25 + 1),*(uint *)((long)ppcVar25 + 0xc));
              pcStack_f0 = FUN_10a7c1824;
              ppuStack_e8 = &PTR_DAT_110c18a78;
              FUN_10a1b76e0(unaff_x23,*(uint *)(ppcVar25 + 1),*(uint *)((long)ppcVar25 + 0xc),
                            auStack_f4,(long)(int)pcVar42,*ppcVar25,&pcStack_f0);
              (*(code *)*ppuStack_e8)(&ppuStack_e8);
              uVar44 = ((long)param_1[0x17] - (long)param_1[0x16] >> 3) * -0x5555555555555555;
              if (uVar44 < uStack_148 || uVar44 - uStack_148 == 0) goto LAB_10a7c1664;
              ppcVar25 = *(code ***)(param_1[0x16] + uStack_148 * 0x18);
              param_6 = (code **)*ppcStack_150;
              ppcVar26 = (code **)ppcStack_150[1];
              param_5 = ppcStack_150[2];
              param_8 = (ulong)(*(uint *)(ppcStack_150 + 3) - (int)param_5);
              ppcVar28 = (code **)CONCAT44(uVar29,uVar46);
              (**(code **)(*(long *)unaff_x23 + 0x20))(unaff_x23,ppcVar25);
              param_7 = pcVar47;
            }
            uVar21 = (uint)param_8;
            uVar39 = (uint)param_7;
            uVar27 = (uint)param_5;
            *(undefined1 *)(param_1 + 4) = 1;
            if (uStack_140._4_1_ != '\x01') break;
            uVar29 = (int)uVar29 / 2;
            if ((int)uVar29 < 2) {
              uVar29 = 1;
            }
            uVar46 = (int)ppcVar24 / 2;
            if ((int)uVar46 < 2) {
              uVar46 = 1;
            }
            uVar44 = uStack_148 + 1;
            if ((ulong)((long)ppcStack_130 - (long)ppcStack_138 >> 5) <= uVar44) break;
          }
        }
        if ((((uStack_184 & 1) == 0) && ((*(byte *)((long)param_1 + 0xaa) & 1) == 0)) &&
           (((ulong)uStack_140 & 0x100000000) == 0)) {
          if (param_1[0x17] == param_1[0x16]) {
LAB_10a7c1664:
                    /* WARNING: Does not return */
            pcVar42 = (code *)SoftwareBreakpoint(1,0x10a7c1668);
            (*pcVar42)();
          }
          ppcVar25 = (code **)(ulong)*(uint *)param_2;
          param_6 = (code **)(ulong)*(uint *)((long)param_2 + 4);
          uVar27 = *(uint *)(param_2 + 1) - *(uint *)param_2;
          ppcVar28 = (code **)(ulong)(*(uint *)((long)param_2 + 0xc) - *(uint *)((long)param_2 + 4))
          ;
          uVar21 = (uint)*(undefined8 *)param_1[0x16];
          uStack_190 = 0;
          ppcVar26 = (code **)0x0;
          uVar39 = 0;
          (**(code **)(*(long *)param_1[5] + 0xa0))();
        }
        if (unaff_x23 != (code *)0x0) {
          (**(code **)(*(long *)unaff_x23 + 0x30))(unaff_x23);
        }
      }
      else {
        uVar39 = (uint)uStack_140;
        func_0x00010ab79cdc();
        auStack_f4 = (undefined1  [4])uVar39;
        uVar21 = (uint)param_8;
        uVar39 = (uint)param_7;
        uVar27 = (uint)param_5;
        if (auStack_f4 != (undefined1  [4])0xffffffff) {
          ppcVar25 = (code **)0x0;
          FUN_10a1b70c8(&pcStack_f0);
          uVar21 = (uint)param_8;
          uVar39 = (uint)param_7;
          uVar27 = (uint)param_5;
          unaff_x23 = pcStack_f0;
          if (pcStack_f0 != (code *)0x0) {
            iStack_158 = 1;
            goto LAB_10a7c0ec8;
          }
        }
      }
    }
    ppcVar24 = ppcStack_138;
    if (ppcStack_138 != (code **)0x0) {
      ppcStack_130 = ppcStack_138;
      __ZdlPv();
      ppcVar22 = ppcStack_118;
    }
LAB_10a7c1288:
    ppcVar43 = param_6;
    if (ppcVar22 == (code **)0x0) goto LAB_10a7c12bc;
  }
LAB_10a7c128c:
  ppcVar1 = ppcVar22 + 1;
  do {
    pcVar42 = *ppcVar1;
    cVar13 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(ppcVar1,0x10);
    if (bVar14) {
      *ppcVar1 = pcVar42 + -1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if (pcVar42 == (code *)0x0) {
    (**(code **)(*ppcVar22 + 0x10))(ppcVar22);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppcVar24 = ppcVar22;
  }
LAB_10a7c12bc:
  iVar31 = (int)ppcVar28;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  if (unaff_x23 != (code *)0x0) {
    (**(code **)(*(long *)pcStack_178 + 0x30))();
  }
  if (ppcStack_138 != (code **)0x0) {
    ppcStack_130 = ppcStack_138;
    __ZdlPv();
  }
  func_0x00010a1f74b8(&pcStack_120);
  __Unwind_Resume();
  uVar29 = *(uint *)ppcVar43;
  uVar5 = *(uint *)((long)ppcVar43 + 4);
  iVar8 = *(uint *)((long)ppcVar43 + 0xc) - uVar5;
  uVar46 = *(uint *)ppcVar26;
  uVar6 = *(uint *)((long)ppcVar26 + 4);
  iVar7 = *(uint *)((long)ppcVar26 + 0xc) - uVar6;
  iVar37 = *(uint *)(ppcVar26 + 1) - uVar46;
  if ((int)(*(uint *)(ppcVar43 + 1) - uVar29) <= (int)(*(uint *)(ppcVar26 + 1) - uVar46)) {
    iVar37 = *(uint *)(ppcVar43 + 1) - uVar29;
  }
  if (iVar8 <= iVar7) {
    iVar7 = iVar8;
  }
  if (0 < iVar37 && 0 < iVar7) {
    pcStack_198 = FUN_10a7c16f8;
    uVar10 = *(uint *)ppcVar24;
    uVar9 = uVar29;
    if ((int)uVar10 <= (int)uVar29) {
      uVar9 = uVar10;
    }
    uVar50 = uVar46;
    if ((int)uVar9 <= (int)uVar46) {
      uVar50 = uVar9;
    }
    uVar50 = uVar50 & ((int)uVar50 >> 0x1f ^ 0xffffffffU);
    uVar9 = uVar5;
    if ((int)uVar10 <= (int)uVar5) {
      uVar9 = uVar10;
    }
    uVar52 = uVar6;
    if ((int)uVar9 <= (int)uVar6) {
      uVar52 = uVar9;
    }
    uVar52 = uVar52 & ((int)uVar52 >> 0x1f ^ 0xffffffffU);
    uVar27 = (uVar27 - uVar29) - iVar37;
    uVar39 = (uVar39 - uVar46) - iVar37;
    if ((int)uVar10 <= (int)uVar27) {
      uVar27 = uVar10;
    }
    if ((int)uVar27 <= (int)uVar39) {
      uVar39 = uVar27;
    }
    uVar27 = (iVar31 - uVar5) - iVar7;
    uVar21 = (uVar21 - uVar6) - iVar7;
    if ((int)uVar10 <= (int)uVar27) {
      uVar27 = uVar10;
    }
    if ((int)uVar27 <= (int)uVar21) {
      uVar21 = uVar27;
    }
    uStack_1a8 = 0;
    iVar31 = uVar50 + iVar37 + (uVar39 & ((int)uVar39 >> 0x1f ^ 0xffffffffU));
    uVar44 = (ulong)(uVar52 + iVar7 + (uVar21 & ((int)uVar21 >> 0x1f ^ 0xffffffffU)));
    lStack_1c8 = CONCAT44(uVar5 - uVar52,uVar29 - uVar50);
    uStack_1c0 = lStack_1c8 + (uVar44 << 0x20) & 0xffffffff00000000 |
                 (ulong)(iVar31 + (uVar29 - uVar50));
    lStack_1b8 = CONCAT44(uVar6 - uVar52,uVar46 - uVar50);
    uStack_1b0 = lStack_1b8 + (uVar44 << 0x20) & 0xffffffff00000000 |
                 (ulong)(iVar31 + (uVar46 - uVar50));
    puStack_1a0 = &stack0xfffffffffffffff0;
    FUN_10a7b9d9c(ppcVar25,&lStack_1c8);
  }
  return;
}



/* Entry: 10a7c16f8; end: 10a7c1823;  */

void FUN_10a7c16f8(uint *param_1,undefined8 param_2,uint *param_3,uint *param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  ulong uStack_20;
  undefined8 uStack_18;
  
  uVar5 = *param_3;
  uVar7 = param_3[1];
  uVar6 = *param_4;
  uVar8 = param_4[1];
  iVar1 = param_4[2] - uVar6;
  if ((int)(param_3[2] - uVar5) <= (int)(param_4[2] - uVar6)) {
    iVar1 = param_3[2] - uVar5;
  }
  iVar4 = param_4[3] - uVar8;
  if ((int)(param_3[3] - uVar7) <= (int)(param_4[3] - uVar8)) {
    iVar4 = param_3[3] - uVar7;
  }
  if (0 < iVar1 && 0 < iVar4) {
    uVar9 = *param_1;
    uVar10 = uVar5;
    if ((int)uVar9 <= (int)uVar5) {
      uVar10 = uVar9;
    }
    uVar2 = uVar6;
    if ((int)uVar10 <= (int)uVar6) {
      uVar2 = uVar10;
    }
    uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
    uVar10 = uVar7;
    if ((int)uVar9 <= (int)uVar7) {
      uVar10 = uVar9;
    }
    uVar3 = uVar8;
    if ((int)uVar10 <= (int)uVar8) {
      uVar3 = uVar10;
    }
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    uVar10 = (param_5 - uVar5) - iVar1;
    uVar11 = (param_7 - uVar6) - iVar1;
    if ((int)uVar9 <= (int)uVar10) {
      uVar10 = uVar9;
    }
    if ((int)uVar10 <= (int)uVar11) {
      uVar11 = uVar10;
    }
    uVar10 = (param_6 - uVar7) - iVar4;
    uVar12 = (param_8 - uVar8) - iVar4;
    if ((int)uVar9 <= (int)uVar10) {
      uVar10 = uVar9;
    }
    if ((int)uVar10 <= (int)uVar12) {
      uVar12 = uVar10;
    }
    uStack_18 = 0;
    iVar1 = uVar2 + iVar1 + (uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU));
    uVar13 = (ulong)(uVar3 + iVar4 + (uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)));
    lStack_38 = CONCAT44(uVar7 - uVar3,uVar5 - uVar2);
    uStack_30 = lStack_38 + (uVar13 << 0x20) & 0xffffffff00000000 | (ulong)(iVar1 + (uVar5 - uVar2))
    ;
    lStack_28 = CONCAT44(uVar8 - uVar3,uVar6 - uVar2);
    uStack_20 = lStack_28 + (uVar13 << 0x20) & 0xffffffff00000000 | (ulong)(iVar1 + (uVar6 - uVar2))
    ;
    FUN_10a7b9d9c(param_2,&lStack_38);
  }
  return;
}



/* Entry: 10a7c1824; end: 10a7c184b;  */

void FUN_10a7c1824(void)

{
  return;
}



/* Entry: 10a7c184c; end: 10a7c1c5b;  */

void FUN_10a7c184c(long param_1,int *param_2,long *param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  
  plVar9 = (long *)*param_3;
  if (plVar9 == (long *)0x0) {
    if ((bRam000000011330a9e8 & 1) == 0) {
      return;
    }
    FUN_10ae06f30(0,1,&UNK_10f6774a8,&UNK_10f6776f1,0x4a5,&UNK_10f6775d2,&stack0x00000000);
    return;
  }
  if (*(char *)(param_1 + 0xa9) == '\x01') {
    if (((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) &&
       (param_4 != 0 || param_5 != 0)) {
      iVar3 = *param_2;
      iVar5 = param_2[1];
      lVar12 = plVar9[0xb];
      lStack_78 = plVar9[1];
      if ((param_4 != param_2[2] - iVar3) || (param_5 != param_2[3] - iVar5)) {
        iVar16 = *(int *)(param_1 + 0x80);
        iVar18 = *(int *)(param_1 + 0x84);
        uStack_98 = CONCAT44(param_2[3] - iVar5,param_2[2] - iVar3);
        FUN_10a775818(&lStack_90,param_1,&uStack_98);
        lVar7 = lStack_78;
        if (*(int *)(param_1 + 0x24) != 0) {
          lVar14 = 0;
          uVar15 = 0;
          iVar17 = *(int *)(param_1 + 0x80);
          iVar19 = *(int *)(param_1 + 0x84);
          do {
            if ((ulong)(lStack_88 - lStack_90 >> 4) <= uVar15) goto LAB_10a7c1c38;
            piVar1 = (int *)(lStack_90 + lVar14);
            uStack_98 = CONCAT44(piVar1[3] - piVar1[1],piVar1[2] - *piVar1);
            FUN_10a7c1c5c(param_1,*param_3,lVar12,lVar7,piVar1,
                          (int)(((float)iVar3 / (float)iVar16) * (float)iVar17),
                          (int)(((float)iVar5 / (float)iVar18) * (float)iVar19),&uStack_98,
                          (int)uVar15);
            iVar17 = iVar17 / 2;
            if (iVar17 < 2) {
              iVar17 = 1;
            }
            iVar19 = iVar19 / 2;
            if (iVar19 < 2) {
              iVar19 = 1;
            }
            uVar15 = uVar15 + 1;
            lVar14 = lVar14 + 0x10;
          } while (uVar15 < *(uint *)(param_1 + 0x24));
        }
LAB_10a7c1c24:
        if (lStack_90 == 0) {
          return;
        }
        lStack_88 = lStack_90;
        __ZdlPv();
        return;
      }
    }
    else {
      lVar12 = plVar9[0xb];
      lStack_78 = plVar9[1];
      iVar3 = *param_2;
      iVar5 = param_2[1];
    }
    lStack_90 = 0;
    FUN_10a7c1c5c(param_1,plVar9,lVar12,lStack_78,&lStack_90,iVar3,iVar5,&lStack_78,0);
  }
  else {
    if (*(char *)(param_1 + 0xa8) != '\x01') {
      return;
    }
    if (((*(char *)(param_1 + 0x21) == '\x01') && (*(int *)(param_1 + 0x24) != 0)) &&
       (param_4 != 0 || param_5 != 0)) {
      iVar3 = *param_2;
      iVar5 = param_2[1];
      iVar16 = param_2[2] - iVar3;
      iVar18 = param_2[3] - iVar5;
      lVar12 = plVar9[0xb];
      uVar4 = (undefined4)plVar9[1];
      uVar6 = *(undefined4 *)((long)plVar9 + 0xc);
      lVar7 = plVar9[1];
      if ((param_4 != iVar16) || (param_5 != iVar18)) {
        iVar17 = *(int *)(param_1 + 0x80);
        iVar19 = *(int *)(param_1 + 0x84);
        lStack_78 = CONCAT44(iVar18,iVar16);
        FUN_10a775818(&lStack_90,param_1,&lStack_78);
        if (*(int *)(param_1 + 0x24) != 0) {
          lVar13 = 0;
          lVar14 = 0;
          uVar15 = 0;
          iVar16 = *(int *)(param_1 + 0x80);
          iVar18 = *(int *)(param_1 + 0x84);
          do {
            if (((ulong)(lStack_88 - lStack_90 >> 4) <= uVar15) ||
               (uVar11 = (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 3) *
                         -0x5555555555555555, uVar11 < uVar15 || uVar11 - uVar15 == 0))
            goto LAB_10a7c1c38;
            puVar2 = (undefined8 *)(lStack_90 + lVar14);
            uVar10 = *puVar2;
            (**(code **)(*(long *)*param_3 + 0x20))
                      ((long *)*param_3,*(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar13),lVar12,
                       lVar7,uVar10,CONCAT44(iVar18,iVar16),
                       CONCAT44((int)(((float)iVar5 / (float)iVar19) * (float)iVar18),
                                (int)(((float)iVar3 / (float)iVar17) * (float)iVar16)),
                       CONCAT44(*(int *)((long)puVar2 + 0xc) - (int)((ulong)uVar10 >> 0x20),
                                *(int *)(puVar2 + 1) - (int)uVar10));
            iVar16 = iVar16 / 2;
            if (iVar16 < 2) {
              iVar16 = 1;
            }
            iVar18 = iVar18 / 2;
            if (iVar18 < 2) {
              iVar18 = 1;
            }
            *(undefined1 *)(param_1 + 0x20) = 1;
            uVar15 = uVar15 + 1;
            lVar14 = lVar14 + 0x10;
            lVar13 = lVar13 + 0x18;
          } while (uVar15 < *(uint *)(param_1 + 0x24));
        }
        goto LAB_10a7c1c24;
      }
    }
    else {
      lVar12 = plVar9[0xb];
      uVar4 = (undefined4)plVar9[1];
      uVar6 = *(undefined4 *)((long)plVar9 + 0xc);
    }
    if (*(undefined8 **)(param_1 + 0xb8) == *(undefined8 **)(param_1 + 0xb0)) {
LAB_10a7c1c38:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a7c1c3c);
      (*pcVar8)();
    }
    (**(code **)(*plVar9 + 0x20))
              (plVar9,**(undefined8 **)(param_1 + 0xb0),lVar12,CONCAT44(uVar6,uVar4),0,
               *(undefined8 *)(param_1 + 0x80),*(undefined8 *)param_2,CONCAT44(uVar6,uVar4));
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}



/* Entry: 10a7c1c5c; end: 10a7c1de7;  */

void FUN_10a7c1c5c(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,int param_6,int param_7,int *param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined1 uStack_79;
  long lStack_78;
  long lStack_70;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = param_6 / iVar1;
  }
  param_6 = param_6 - iVar3 * iVar1;
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = (param_6 + iVar1 + *param_8 + -1) / iVar1;
  }
  iVar4 = iVar4 * iVar1;
  if (0 < iVar4) {
    iVar5 = 0;
    if (iVar2 != 0) {
      iVar5 = param_7 / iVar2;
    }
    param_7 = param_7 - iVar5 * iVar2;
    iVar6 = 0;
    if (iVar2 != 0) {
      iVar6 = (param_7 + iVar2 + param_8[1] + -1) / iVar2;
    }
    iVar6 = iVar6 * iVar2;
    if ((0 < iVar6) &&
       (plVar7 = param_2, (**(code **)(*param_2 + 0x18))(param_2,iVar4,iVar6), 0 < (int)plVar7)) {
      uStack_79 = 0;
      FUN_10a0cf3f0(&lStack_78,(ulong)plVar7 & 0xffffffff,&uStack_79);
      (**(code **)(*param_2 + 0x20))
                (param_2,lStack_78,param_3,param_4,*param_5,CONCAT44(iVar6,iVar4),
                 CONCAT44(param_7,param_6),*(undefined8 *)param_8);
      (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))
                (*(long **)(param_1 + 0x28),iVar3 * iVar1,iVar5 * iVar2,0,iVar4,iVar6,0,lStack_78,
                 param_9,0);
      (**(code **)(**(long **)(param_1 + 0x28) + 0xb0))();
      if (lStack_78 != 0) {
        lStack_70 = lStack_78;
        __ZdlPv();
      }
    }
  }
  return;
}



/* Entry: 10a7c1de8; end: 10a7c1deb;  */

void FUN_10a7c1de8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a7c1dec; end: 10a7c1dff;  */

void FUN_10a7c1dec(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7c1e00; end: 10a7c1e17;  */

void FUN_10a7c1e00(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a7c1e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10a7c1e18; end: 10a7c1e4f;  */

undefined8 FUN_10a7c1e18(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c18af8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a7c1e50; end: 10a7c1e53;  */

void FUN_10a7c1e50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7c1e54; end: 10a7c1ff3;  */

long * FUN_10a7c1e54(long *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  plVar6 = (long *)*param_1;
  plVar4 = (long *)param_1[1];
  lVar12 = (long)plVar4 - (long)plVar6;
  bVar3 = param_2 < (ulong)((lVar12 >> 3) * -0x5555555555555555);
  uVar13 = param_2 + (lVar12 >> 3) * 0x5555555555555555;
  if (bVar3 || uVar13 == 0) {
    plVar5 = param_1;
    if (bVar3) {
      while (plVar2 = plVar4, plVar2 != plVar6 + param_2 * 3) {
        plVar4 = plVar2 + -3;
        plVar5 = (long *)*plVar4;
        if (plVar5 != (long *)0x0) {
          plVar2[-2] = (long)plVar5;
          __ZdlPv();
        }
      }
      param_1[1] = (long)(plVar6 + param_2 * 3);
    }
  }
  else if ((ulong)((param_1[2] - (long)plVar4 >> 3) * -0x5555555555555555) < uVar13) {
    lVar7 = param_1[2] - (long)plVar6 >> 3;
    uVar10 = lVar7 * 0x5555555555555556;
    if (uVar10 < param_2 || uVar10 - param_2 == 0) {
      uVar10 = param_2;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar10 = 0xaaaaaaaaaaaaaaa;
    }
    if (0xaaaaaaaaaaaaaaa < uVar10) {
      func_0x000109ffded8();
      lVar12 = *param_1;
      puVar1 = (undefined8 *)param_1[1];
      uVar13 = (long)puVar1 - lVar12 >> 3;
      if (uVar13 < param_2) {
        uVar10 = param_2 - uVar13;
        if ((ulong)(param_1[2] - (long)puVar1 >> 3) < uVar10) {
          if (param_2 >> 0x3d != 0) {
            FUN_10a3ebd38();
            *param_1 = (long)&PTR_FUN_110c18b20;
            FUN_10a7c2ec8(param_1 + 0x16);
            if (param_1[0x14] != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            *param_1 = (long)&PTR_DAT_110c18ff0;
            if (param_1[0xd] != 0) {
              param_1[0xe] = param_1[0xd];
              __ZdlPv();
            }
            FUN_10a7a2e48(param_1 + 7);
            func_0x00010a0523dc(param_1 + 5);
            return param_1;
          }
          uVar8 = param_1[2] - lVar12;
          uVar11 = (long)uVar8 >> 2;
          if (uVar11 <= param_2) {
            uVar11 = param_2;
          }
          if (0x7ffffffffffffff7 < uVar8) {
            uVar11 = 0x1fffffffffffffff;
          }
          plVar4 = param_1;
          FUN_10a3ebd4c();
          puVar1 = (undefined8 *)((long)plVar4 + ((long)puVar1 - lVar12));
          lVar12 = param_2 * 8 + uVar13 * -8;
          puVar9 = puVar1;
          do {
            *puVar9 = param_3;
            lVar12 = lVar12 + -8;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
          lVar12 = (long)puVar1 - (param_1[1] - *param_1);
          _memcpy(lVar12);
          plVar6 = (long *)*param_1;
          *param_1 = lVar12;
          param_1[1] = (long)(puVar1 + uVar10);
          param_1[2] = (long)(plVar4 + uVar11);
          param_1 = (long *)0x0;
          if (plVar6 != (long *)0x0) goto code_r0x00010bdbd7ac;
        }
        else {
          lVar12 = param_2 * 8 + uVar13 * -8;
          puVar9 = puVar1;
          do {
            *puVar9 = param_3;
            lVar12 = lVar12 + -8;
            puVar9 = puVar9 + 1;
          } while (lVar12 != 0);
          param_1[1] = (long)(puVar1 + uVar10);
        }
      }
      else if (param_2 < uVar13) {
        param_1[1] = lVar12 + param_2 * 8;
      }
      return param_1;
    }
    plVar4 = (long *)(uVar10 * 0x18);
    __Znwm();
    lVar7 = ((uVar13 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero((long)plVar4 + lVar12,lVar7);
    plVar5 = plVar4;
    _memcpy(plVar4,plVar6,lVar12);
    *param_1 = (long)plVar4;
    param_1[1] = (long)plVar4 + lVar12 + lVar7;
    param_1[2] = (long)(plVar4 + uVar10 * 3);
    if (plVar6 != (long *)0x0) {
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar6);
      return plVar6;
    }
  }
  else {
    uVar13 = (uVar13 * 0x18 - 0x18) / 0x18;
    plVar5 = plVar4;
    _bzero(plVar4,uVar13 * 0x18 + 0x18);
    param_1[1] = (long)(plVar4 + uVar13 * 3 + 3);
  }
  return plVar5;
}


