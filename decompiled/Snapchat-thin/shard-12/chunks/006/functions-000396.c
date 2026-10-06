/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109300b50; end: 109301aa3;  */

/* WARNING: Removing unreachable block (ram,0x0001093010a0) */
/* WARNING: Removing unreachable block (ram,0x0001093010bc) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_109300b50(ulong *param_1,ulong param_2,long *param_3,int *param_4)

{
  long *****ppppplVar1;
  long *****ppppplVar2;
  uint uVar3;
  int iVar4;
  long *******ppppppplVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long *******ppppppplVar9;
  undefined *puVar10;
  long *plVar11;
  undefined **ppuVar12;
  uint uVar13;
  ulong uVar14;
  long *unaff_x20;
  long ****pppplVar15;
  long ******pppppplVar16;
  long *plVar17;
  ulong uVar18;
  long ****pppplVar19;
  long ******pppppplVar20;
  long ******pppppplVar21;
  long *plVar22;
  ulong uVar23;
  long ******pppppplVar24;
  ulong uVar25;
  long ******pppppplVar26;
  ulong uVar27;
  int iVar28;
  long lVar29;
  float fVar30;
  float fVar31;
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  long *****ppppplStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *****ppppplStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  undefined8 uStack_100;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  undefined8 uStack_e0;
  long *******ppppppplStack_d0;
  ulong uStack_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  long lStack_b0;
  
  fVar40 = (float)param_2;
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = *param_3;
  uVar3 = *(uint *)(lVar29 + 0x10);
  iVar28 = 3;
  if (-1 < *param_4 && 0xe3 < (long)(int)uVar3) {
    iVar28 = (int)uVar3 / 0x4c;
  }
  if (iVar28 - 1U < uVar3) {
    iVar4 = *(int *)(lVar29 + 0xc);
    uVar18 = (ulong)iVar4;
    uVar23 = (ulong)(int)(iVar28 - 1U);
    do {
      uStack_c8 = 0;
      iStack_c0 = 0;
      uStack_bc = 0;
      iStack_b8 = 0;
      unaff_x20 = (long *)0x0;
      if (iVar4 != 0) {
        uVar27 = 0;
        uVar14 = 0;
        do {
          uVar13 = (uint)uVar14;
          if ((*(uint *)(*(long *)(*(long *)(lVar29 + 0x28) + 0x10) +
                        (long)(*(int *)(lVar29 + 0x14) * (int)uVar23 + ((int)(uint)uVar27 >> 5)) * 4
                        ) >> (ulong)((uint)uVar27 & 0x1f) & 1) == 0) {
            if ((uVar14 & 1) != 0) goto LAB_109300c8c;
            if (uVar13 == 4) {
              iVar8 = (int)&uStack_c8;
              FUN_1093000f4();
              if (iVar8 == 0) {
                param_2 = CONCAT44(uStack_bc,iStack_c0);
                uStack_c8 = param_2;
                iStack_c0 = iStack_b8;
                uStack_bc = 1;
                iStack_b8 = 0;
                uVar14 = 3;
              }
              else {
                plVar22 = param_3;
                FUN_1093001ac(param_3,&uStack_c8,uVar23,uVar27);
                if ((int)plVar22 == 0) {
                  param_2 = CONCAT44(uStack_bc,iStack_c0);
                  uStack_c8 = param_2;
                  uVar14 = 3;
                  uStack_bc = 1;
                }
                else {
                  if ((char)param_3[4] == '\x01') {
                    unaff_x20 = param_3;
                    FUN_109300a08();
                  }
                  else {
                    uVar14 = param_3[2] - param_3[1] >> 3;
                    if (uVar14 < 2) {
                      uVar13 = 0;
                    }
                    else {
                      uVar25 = 0;
                      plVar17 = (long *)0x0;
                      plVar22 = unaff_x20;
                      do {
                        fVar40 = (float)param_2;
                        plVar11 = *(long **)(param_3[1] + uVar25 * 8);
                        if (plVar11 != (long *)0x0) {
                          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                        }
                        if ((int)plVar11[3] < 2) {
                          iVar28 = (int)plVar11[1] + -1;
LAB_109300de8:
                          *(int *)(plVar11 + 1) = iVar28;
                          if (iVar28 == 0) {
                            bVar6 = true;
                            goto LAB_109300df4;
                          }
                        }
                        else {
                          if (plVar17 == (long *)0x0) {
                            iVar28 = (int)plVar11[1];
                            *(int *)(plVar11 + 1) = iVar28 + 1;
                            plVar17 = plVar11;
                            goto LAB_109300de8;
                          }
                          *(undefined1 *)(param_3 + 4) = 1;
                          (**(code **)(*plVar17 + 0x10))(plVar17);
                          fVar30 = fVar40;
                          (**(code **)(*plVar11 + 0x10))(plVar11);
                          fVar39 = fVar30;
                          (**(code **)(*plVar17 + 0x18))(plVar17);
                          fVar31 = fVar39;
                          (**(code **)(*plVar11 + 0x18))(plVar11);
                          fVar40 = ABS(fVar40 - fVar30) - ABS(fVar39 - fVar31);
                          param_2 = (ulong)(uint)fVar40;
                          uVar13 = (int)fVar40 / 2;
                          plVar22 = (long *)(ulong)uVar13;
                          iVar28 = (int)plVar11[1] + -1;
                          *(int *)(plVar11 + 1) = iVar28;
                          if (iVar28 != 0) goto LAB_109300e3c;
                          bVar6 = false;
LAB_109300df4:
                          uVar13 = (uint)plVar22;
                          *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
                          (**(code **)(*plVar11 + 8))(plVar11);
                          if (!bVar6) goto LAB_109300e28;
                        }
                        uVar25 = uVar25 + 1;
                      } while (uVar14 != uVar25);
                      uVar13 = 0;
LAB_109300e28:
                      if (plVar17 != (long *)0x0) {
LAB_109300e3c:
                        iVar28 = (int)plVar17[1] + -1;
                        *(int *)(plVar17 + 1) = iVar28;
                        if (iVar28 == 0) {
                          *(undefined4 *)(plVar17 + 1) = 0xdeadf001;
                          (**(code **)(*plVar17 + 8))(plVar17);
                        }
                      }
                    }
                    if (iStack_c0 < (int)uVar13) {
                      uVar23 = uVar23 + (long)(int)((uVar13 - iStack_c0) + -2);
                      uVar27 = uVar18 - 1;
                    }
                    unaff_x20 = (long *)((ulong)unaff_x20 & 0xffffffff);
                  }
                  iStack_b8 = 0;
                  uStack_bc = 0;
                  uVar14 = 0;
                  uStack_c8 = 0;
                  iVar28 = 2;
                }
                iStack_c0 = iStack_b8;
                iStack_b8 = 0;
              }
            }
            else {
              uVar14 = (long)(int)uVar13 | 1;
              *(int *)((long)&uStack_c8 + uVar14 * 4) = *(int *)((long)&uStack_c8 + uVar14 * 4) + 1;
            }
          }
          else {
            uVar14 = (ulong)((uVar13 & 1) + uVar13);
LAB_109300c8c:
            *(int *)((long)&uStack_c8 + (long)(int)uVar14 * 4) =
                 *(int *)((long)&uStack_c8 + (long)(int)uVar14 * 4) + 1;
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 < uVar18);
      }
      uVar27 = 0;
      FUN_1093000f4();
      if ((((uVar27 & 1) != 0) &&
          (plVar22 = param_3, FUN_1093001ac(param_3,&uStack_c8,uVar23,uVar18), (int)plVar22 != 0))
         && (iVar28 = (int)uStack_c8, (char)param_3[4] == '\x01')) {
        unaff_x20 = param_3;
        FUN_109300a08();
      }
      fVar40 = (float)param_2;
      uVar23 = uVar23 + (long)iVar28;
    } while ((uVar23 < (ulong)(long)(int)uVar3) && (((ulong)unaff_x20 & 1) == 0));
  }
  pppppplVar16 = (long ******)(param_3 + 1);
  ppppplVar1 = *pppppplVar16;
  ppppplVar2 = (long *****)param_3[2];
  uVar23 = (long)ppppplVar2 - (long)ppppplVar1 >> 3;
  if (uVar23 < 3) {
    ppppppplVar9 = (long *******)0x10;
    ___cxa_allocate_exception();
    FUN_1092f3d6c();
    ppuVar12 = &PTR_DAT_110aea3f0;
    ___cxa_throw();
    goto LAB_1093018f8;
  }
  if ((long)ppppplVar2 - (long)ppppplVar1 != 0x18) {
    uVar18 = 0;
    fVar31 = 0.0;
    fVar40 = 0.0;
    do {
      fVar39 = *(float *)((long)ppppplVar1[uVar18] + 0x14);
      fVar31 = fVar31 + fVar39;
      fVar40 = fVar40 + fVar39 * fVar39;
      uVar18 = uVar18 + 1;
    } while (uVar23 != uVar18);
    fVar31 = fVar31 / (float)uVar23;
    ppppppplStack_110 = (long *******)CONCAT44(ppppppplStack_110._4_4_,fVar31);
    lVar29 = 0;
    if (ppppplVar2 != ppppplVar1) {
      lVar29 = LZCOUNT(uVar23) * -2 + 0x7e;
    }
    FUN_109301be8(ppppplVar1,ppppplVar2,&ppppppplStack_110,lVar29,1);
    fVar40 = SQRT(fVar40 / (float)uVar23 - fVar31 * fVar31);
    fVar39 = fVar40;
    if (fVar40 <= fVar31 * 0.2) {
      fVar39 = fVar31 * 0.2;
    }
    plVar22 = (long *)param_3[1];
    plVar17 = (long *)param_3[2];
    if (0x18 < (ulong)((long)plVar17 - (long)plVar22)) {
      uVar23 = 0;
      do {
        fVar40 = ABS(*(float *)(plVar22[uVar23] + 0x14) - fVar31);
        uVar18 = (ulong)(uint)fVar40;
        if (fVar39 < fVar40) {
          plVar22 = plVar22 + uVar23;
          while (plVar11 = plVar22 + 1, plVar11 != plVar17) {
            FUN_109300090(plVar11 + -1,*plVar11);
            fVar40 = (float)uVar18;
            plVar22 = plVar11;
          }
          FUN_1092ffeb4(pppppplVar16,plVar22);
          uVar23 = uVar23 - 1;
          plVar22 = (long *)param_3[1];
          plVar17 = (long *)param_3[2];
        }
        uVar23 = uVar23 + 1;
        uVar18 = (long)plVar17 - (long)plVar22 >> 3;
      } while ((uVar23 < uVar18) && (3 < uVar18));
      if (0x18 < (ulong)((long)plVar17 - (long)plVar22)) {
        fVar40 = 0.0;
        plVar11 = plVar22;
        uVar23 = uVar18;
        if (plVar17 != plVar22) {
          do {
            fVar40 = fVar40 + *(float *)(*plVar11 + 0x14);
            uVar23 = uVar23 - 1;
            plVar11 = plVar11 + 1;
          } while (uVar23 != 0);
        }
        fVar40 = fVar40 / (float)uVar18;
        ppppppplStack_110 = (long *******)CONCAT44(ppppppplStack_110._4_4_,fVar40);
        lVar29 = 0;
        if (plVar17 != plVar22) {
          lVar29 = LZCOUNT(uVar18) * -2 + 0x7e;
        }
        FUN_109303e20(plVar22,plVar17,&ppppppplStack_110,lVar29,1);
        if ((0x18 < (ulong)(param_3[2] - param_3[1])) &&
           (lVar29 = param_3[1] + 0x18, lVar29 != param_3[2])) {
          FUN_1092ffeb4(pppppplVar16,lVar29);
        }
      }
    }
  }
  FUN_1093063f4(&ppppppplStack_f0);
  FUN_109300090(ppppppplStack_f0,**pppppplVar16);
  FUN_109300090(ppppppplStack_f0 + 1,(*pppppplVar16)[1]);
  FUN_109300090(ppppppplStack_f0 + 2,(*pppppplVar16)[2]);
  uStack_120 = 0;
  uStack_118 = 0;
  ppppplStack_128 = (long *****)0x0;
  FUN_10930645c(&ppppplStack_128,ppppppplStack_f0,ppppppplStack_e8,
                (long)ppppppplStack_e8 - (long)ppppppplStack_f0 >> 3);
  pppplVar15 = *ppppplStack_128;
  if (pppplVar15 != (long ****)0x0) {
    *(int *)(pppplVar15 + 1) = *(int *)(pppplVar15 + 1) + 1;
  }
  pppplVar19 = ppppplStack_128[1];
  if (pppplVar19 != (long ****)0x0) {
    *(int *)(pppplVar19 + 1) = *(int *)(pppplVar19 + 1) + 1;
  }
  (*(code *)(*pppplVar15)[2])(pppplVar15);
  fVar38 = fVar40;
  (*(code *)(*pppplVar19)[2])(pppplVar19);
  fVar30 = fVar38;
  (*(code *)(*pppplVar15)[3])(pppplVar15);
  fVar39 = fVar30;
  (*(code *)(*pppplVar19)[3])(pppplVar19);
  iVar28 = *(int *)(pppplVar19 + 1);
  *(int *)(pppplVar19 + 1) = iVar28 + -1;
  fVar31 = fVar39;
  if (iVar28 + -1 == 0) {
    *(undefined4 *)(pppplVar19 + 1) = 0xdeadf001;
    (*(code *)(*pppplVar19)[1])(pppplVar19);
  }
  iVar28 = *(int *)(pppplVar15 + 1);
  *(int *)(pppplVar15 + 1) = iVar28 + -1;
  if (iVar28 + -1 == 0) {
    *(undefined4 *)(pppplVar15 + 1) = 0xdeadf001;
    (*(code *)(*pppplVar15)[1])(pppplVar15);
  }
  pppplVar15 = ppppplStack_128[1];
  if (pppplVar15 != (long ****)0x0) {
    *(int *)(pppplVar15 + 1) = *(int *)(pppplVar15 + 1) + 1;
  }
  pppplVar19 = ppppplStack_128[2];
  if (pppplVar19 != (long ****)0x0) {
    *(int *)(pppplVar19 + 1) = *(int *)(pppplVar19 + 1) + 1;
  }
  (*(code *)(*pppplVar15)[2])(pppplVar15);
  fVar32 = fVar31;
  (*(code *)(*pppplVar19)[2])(pppplVar19);
  fVar33 = fVar32;
  (*(code *)(*pppplVar15)[3])(pppplVar15);
  fVar37 = fVar33;
  (*(code *)(*pppplVar19)[3])(pppplVar19);
  iVar28 = *(int *)(pppplVar19 + 1);
  *(int *)(pppplVar19 + 1) = iVar28 + -1;
  fVar41 = fVar37;
  if (iVar28 + -1 == 0) {
    *(undefined4 *)(pppplVar19 + 1) = 0xdeadf001;
    (*(code *)(*pppplVar19)[1])(pppplVar19);
  }
  iVar28 = *(int *)(pppplVar15 + 1);
  *(int *)(pppplVar15 + 1) = iVar28 + -1;
  if (iVar28 + -1 == 0) {
    *(undefined4 *)(pppplVar15 + 1) = 0xdeadf001;
    (*(code *)(*pppplVar15)[1])(pppplVar15);
  }
  pppplVar15 = *ppppplStack_128;
  if (pppplVar15 != (long ****)0x0) {
    *(int *)(pppplVar15 + 1) = *(int *)(pppplVar15 + 1) + 1;
  }
  pppplVar19 = ppppplStack_128[2];
  if (pppplVar19 != (long ****)0x0) {
    *(int *)(pppplVar19 + 1) = *(int *)(pppplVar19 + 1) + 1;
  }
  (*(code *)(*pppplVar15)[2])(pppplVar15);
  fVar34 = fVar41;
  (*(code *)(*pppplVar19)[2])(pppplVar19);
  fVar35 = fVar34;
  (*(code *)(*pppplVar15)[3])(pppplVar15);
  fVar36 = fVar35;
  (*(code *)(*pppplVar19)[3])(pppplVar19);
  fVar36 = (fVar35 - fVar36) * (fVar35 - fVar36);
  fVar41 = fVar36 + (fVar41 - fVar34) * (fVar41 - fVar34);
  iVar28 = *(int *)(pppplVar19 + 1);
  *(int *)(pppplVar19 + 1) = iVar28 + -1;
  if (iVar28 + -1 == 0) {
    *(undefined4 *)(pppplVar19 + 1) = 0xdeadf001;
    (*(code *)(*pppplVar19)[1])(pppplVar19);
  }
  fVar40 = SQRT((fVar30 - fVar39) * (fVar30 - fVar39) + (fVar40 - fVar38) * (fVar40 - fVar38));
  fVar31 = SQRT((fVar33 - fVar37) * (fVar33 - fVar37) + (fVar31 - fVar32) * (fVar31 - fVar32));
  iVar28 = *(int *)(pppplVar15 + 1);
  fVar41 = SQRT(fVar41);
  *(int *)(pppplVar15 + 1) = iVar28 + -1;
  if (iVar28 + -1 == 0) {
    *(undefined4 *)(pppplVar15 + 1) = 0xdeadf001;
    (*(code *)(*pppplVar15)[1])(pppplVar15);
  }
  bVar6 = true;
  bVar7 = false;
  if (fVar40 <= fVar31) {
    bVar6 = false;
    bVar7 = true;
    if (!NAN(fVar31) && !NAN(fVar41)) {
      bVar6 = fVar31 < fVar41;
      bVar7 = false;
    }
  }
  if (bVar6 == bVar7) {
    pppppplVar16 = (long ******)*ppppplStack_128;
    if (pppppplVar16 != (long ******)0x0) {
      *(int *)(pppppplVar16 + 1) = *(int *)(pppppplVar16 + 1) + 1;
    }
    pppppplVar24 = (long ******)ppppplStack_128[1];
joined_r0x000109301468:
    if (pppppplVar24 != (long ******)0x0) {
      *(int *)(pppppplVar24 + 1) = *(int *)(pppppplVar24 + 1) + 1;
    }
    pppppplVar20 = (long ******)ppppplStack_128[2];
  }
  else {
    bVar6 = true;
    bVar7 = false;
    if (fVar31 <= fVar41) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar41) && !NAN(fVar40)) {
        bVar6 = fVar41 < fVar40;
        bVar7 = false;
      }
    }
    if (bVar6 == bVar7) {
      pppppplVar16 = (long ******)ppppplStack_128[1];
      if (pppppplVar16 != (long ******)0x0) {
        *(int *)(pppppplVar16 + 1) = *(int *)(pppppplVar16 + 1) + 1;
      }
      pppppplVar24 = (long ******)*ppppplStack_128;
      goto joined_r0x000109301468;
    }
    pppppplVar16 = (long ******)ppppplStack_128[2];
    if (pppppplVar16 != (long ******)0x0) {
      *(int *)(pppppplVar16 + 1) = *(int *)(pppppplVar16 + 1) + 1;
    }
    pppppplVar24 = (long ******)*ppppplStack_128;
    if (pppppplVar24 != (long ******)0x0) {
      *(int *)(pppppplVar24 + 1) = *(int *)(pppppplVar24 + 1) + 1;
    }
    pppppplVar20 = (long ******)ppppplStack_128[1];
  }
  if (pppppplVar20 != (long ******)0x0) {
    *(int *)(pppppplVar20 + 1) = *(int *)(pppppplVar20 + 1) + 1;
  }
  (*(code *)(*pppppplVar20)[3])(pppppplVar20);
  fVar37 = fVar36;
  (*(code *)(*pppppplVar16)[3])(pppppplVar16);
  fVar41 = fVar37;
  (*(code *)(*pppppplVar24)[2])(pppppplVar24);
  fVar38 = fVar41;
  (*(code *)(*pppppplVar16)[2])(pppppplVar16);
  fVar30 = fVar38;
  (*(code *)(*pppppplVar20)[2])(pppppplVar20);
  fVar39 = fVar30;
  (*(code *)(*pppppplVar16)[2])(pppppplVar16);
  fVar31 = fVar39;
  (*(code *)(*pppppplVar24)[3])(pppppplVar24);
  fVar40 = fVar31;
  (*(code *)(*pppppplVar16)[3])(pppppplVar16);
  pppppplVar21 = pppppplVar20;
  pppppplVar26 = pppppplVar24;
  if ((fVar36 - fVar37) * (fVar41 - fVar38) < (fVar30 - fVar39) * (fVar31 - fVar40)) {
    *(int *)(pppppplVar24 + 1) = *(int *)(pppppplVar24 + 1) + 1;
    *(int *)(pppppplVar20 + 1) = *(int *)(pppppplVar20 + 1) + 1;
    iVar28 = *(int *)(pppppplVar24 + 1);
    *(int *)(pppppplVar24 + 1) = iVar28 + -1;
    if (iVar28 + -1 == 0) {
      *(undefined4 *)(pppppplVar24 + 1) = 0xdeadf001;
      (*(code *)(*pppppplVar24)[1])(pppppplVar24);
      iVar28 = *(int *)(pppppplVar24 + 1) + 1;
    }
    *(int *)(pppppplVar24 + 1) = iVar28;
    iVar28 = *(int *)(pppppplVar20 + 1);
    *(int *)(pppppplVar20 + 1) = iVar28 + -1;
    if (iVar28 + -1 == 0) {
      *(undefined4 *)(pppppplVar20 + 1) = 0xdeadf001;
      (*(code *)(*pppppplVar20)[1])(pppppplVar20);
    }
    iVar28 = *(int *)(pppppplVar24 + 1);
    *(int *)(pppppplVar24 + 1) = iVar28 + -1;
    pppppplVar21 = pppppplVar24;
    pppppplVar26 = pppppplVar20;
    if (iVar28 + -1 == 0) {
      *(undefined4 *)(pppppplVar24 + 1) = 0xdeadf001;
      (*(code *)(*pppppplVar24)[1])(pppppplVar24);
    }
  }
  FUN_1093063f4(&ppppppplStack_110);
  ppppppplVar9 = ppppppplStack_110;
  *(int *)(pppppplVar21 + 1) = *(int *)(pppppplVar21 + 1) + 1;
  pppppplVar24 = *ppppppplStack_110;
  if ((pppppplVar24 != (long ******)0x0) &&
     (iVar28 = *(int *)(pppppplVar24 + 1), *(int *)(pppppplVar24 + 1) = iVar28 + -1,
     iVar28 + -1 == 0)) {
    *(undefined4 *)(pppppplVar24 + 1) = 0xdeadf001;
    (*(code *)(*pppppplVar24)[1])();
  }
  ppppppplVar5 = ppppppplStack_110;
  *ppppppplVar9 = pppppplVar21;
  *(int *)(pppppplVar16 + 1) = *(int *)(pppppplVar16 + 1) + 1;
  pppppplVar24 = ppppppplStack_110[1];
  if ((pppppplVar24 != (long ******)0x0) &&
     (iVar28 = *(int *)(pppppplVar24 + 1), *(int *)(pppppplVar24 + 1) = iVar28 + -1,
     iVar28 + -1 == 0)) {
    *(undefined4 *)(pppppplVar24 + 1) = 0xdeadf001;
    (*(code *)(*pppppplVar24)[1])();
  }
  ppppppplVar9 = ppppppplStack_110;
  ppppppplVar5[1] = pppppplVar16;
  *(int *)(pppppplVar26 + 1) = *(int *)(pppppplVar26 + 1) + 1;
  pppppplVar24 = ppppppplStack_110[2];
  if ((pppppplVar24 != (long ******)0x0) &&
     (iVar28 = *(int *)(pppppplVar24 + 1), *(int *)(pppppplVar24 + 1) = iVar28 + -1,
     iVar28 + -1 == 0)) {
    *(undefined4 *)(pppppplVar24 + 1) = 0xdeadf001;
    (*(code *)(*pppppplVar24)[1])();
  }
  ppppppplVar9[2] = pppppplVar26;
  iVar28 = *(int *)(pppppplVar21 + 1);
  *(int *)(pppppplVar21 + 1) = iVar28 + -1;
  if (iVar28 + -1 == 0) {
    *(undefined4 *)(pppppplVar21 + 1) = 0xdeadf001;
    (*(code *)(*pppppplVar21)[1])(pppppplVar21);
  }
  iVar28 = *(int *)(pppppplVar26 + 1);
  *(int *)(pppppplVar26 + 1) = iVar28 + -1;
  if (iVar28 + -1 == 0) {
    *(undefined4 *)(pppppplVar26 + 1) = 0xdeadf001;
    (*(code *)(*pppppplVar26)[1])(pppppplVar26);
  }
  iVar28 = *(int *)(pppppplVar16 + 1);
  *(int *)(pppppplVar16 + 1) = iVar28 + -1;
  if (iVar28 + -1 == 0) {
    *(undefined4 *)(pppppplVar16 + 1) = 0xdeadf001;
    (*(code *)(*pppppplVar16)[1])(pppppplVar16);
  }
  ppppppplVar5 = ppppppplStack_f0;
  ppppppplVar9 = ppppppplStack_e8;
  if (ppppppplStack_f0 != (long *******)0x0) {
    while (ppppppplVar9 != ppppppplVar5) {
      ppppppplVar9 = ppppppplVar9 + -1;
      pppppplVar16 = *ppppppplVar9;
      if ((pppppplVar16 != (long ******)0x0) &&
         (iVar28 = *(int *)(pppppplVar16 + 1), *(int *)(pppppplVar16 + 1) = iVar28 + -1,
         iVar28 + -1 == 0)) {
        *(undefined4 *)(pppppplVar16 + 1) = 0xdeadf001;
        (*(code *)(*pppppplVar16)[1])();
      }
    }
    ppppppplStack_e8 = ppppppplVar5;
    __ZdlPv(ppppppplStack_f0);
  }
  ppppppplStack_e8 = ppppppplStack_108;
  ppppppplStack_f0 = ppppppplStack_110;
  uStack_e0 = uStack_100;
  ppppppplStack_108 = (long *******)0x0;
  uStack_100 = 0;
  ppppppplStack_110 = (long *******)0x0;
  ppppppplStack_d0 = (long *******)&ppppppplStack_110;
  func_0x0001092ffe74(&ppppppplStack_d0);
  ppppppplStack_d0 = (long *******)&ppppplStack_128;
  func_0x0001092ffe74(&ppppppplStack_d0);
  unaff_x20 = (long *)0x28;
  __Znwm();
  ppppplStack_140 = (long *****)0x0;
  uStack_138 = 0;
  uStack_130 = 0;
  FUN_10930645c(&ppppplStack_140,ppppppplStack_f0,ppppppplStack_e8,
                (long)ppppppplStack_e8 - (long)ppppppplStack_f0 >> 3);
  pppppplVar16 = &ppppplStack_140;
  ppuVar12 = (undefined **)&ppppplStack_140;
  FUN_10930654c(unaff_x20,ppuVar12);
  *(int *)(unaff_x20 + 1) = (int)unaff_x20[1] + 1;
  *param_1 = (ulong)unaff_x20;
  ppppppplStack_110 = (long *******)pppppplVar16;
  func_0x0001092ffe74(&ppppppplStack_110);
  ppppppplStack_110 = (long *******)&ppppppplStack_f0;
  ppppppplVar9 = (long *******)&ppppppplStack_110;
  func_0x0001092ffe74();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    auVar42._8_8_ = ppuVar12;
    auVar42._0_8_ = ppppppplVar9;
    return auVar42;
  }
LAB_1093018f8:
  ___stack_chk_fail();
  ppppppplStack_110 = (long *******)pppppplVar16;
  func_0x0001092ffe74(&ppppppplStack_110);
  __ZdlPv(unaff_x20);
  ppppppplStack_110 = (long *******)&ppppppplStack_f0;
  func_0x0001092ffe74(&ppppppplStack_110);
  __Unwind_Resume(ppppppplVar9);
  puVar10 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar10 >> 0x3d == 0) {
    lVar29 = (long)puVar10 << 3;
    __Znwm(lVar29);
    auVar43._8_8_ = puVar10;
    auVar43._0_8_ = lVar29;
    return auVar43;
  }
  func_0x000104c4f740();
  if ((puVar10[0x18] & 1) == 0) {
    plVar17 = (long *)**(undefined8 **)(puVar10 + 8);
    plVar22 = (long *)**(long **)(puVar10 + 0x10);
    while (plVar22 != plVar17) {
      plVar22 = plVar22 + -1;
      plVar11 = (long *)*plVar22;
      if ((plVar11 != (long *)0x0) &&
         (iVar28 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar28, iVar28 == 0)) {
        *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
        (**(code **)(*plVar11 + 8))();
      }
    }
  }
  auVar44._8_8_ = ppuVar12;
  auVar44._0_8_ = puVar10;
  return auVar44;
}



/* Entry: 109301aa4; end: 109301ab7;  */

undefined1  [16] FUN_109301aa4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar2 >> 0x3d != 0) {
    func_0x000104c4f740();
    if ((puVar2[0x18] & 1) == 0) {
      plVar5 = (long *)**(undefined8 **)(puVar2 + 8);
      plVar6 = (long *)**(long **)(puVar2 + 0x10);
      while (plVar6 != plVar5) {
        plVar6 = plVar6 + -1;
        plVar4 = (long *)*plVar6;
        if ((plVar4 != (long *)0x0) &&
           (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
          *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = puVar2;
    return auVar8;
  }
  lVar3 = (long)puVar2 << 3;
  __Znwm(lVar3);
  auVar7._8_8_ = puVar2;
  auVar7._0_8_ = lVar3;
  return auVar7;
}



/* Entry: 109301ab8; end: 109301aeb;  */

undefined1  [16] FUN_109301ab8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 >> 0x3d != 0) {
    func_0x000104c4f740();
    if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
      plVar4 = (long *)**(undefined8 **)(param_1 + 8);
      plVar5 = (long *)**(long **)(param_1 + 0x10);
      while (plVar5 != plVar4) {
        plVar5 = plVar5 + -1;
        plVar3 = (long *)*plVar5;
        if ((plVar3 != (long *)0x0) &&
           (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
          *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
          (**(code **)(*plVar3 + 8))();
        }
      }
    }
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = param_1;
    return auVar7;
  }
  lVar2 = param_1 << 3;
  __Znwm(lVar2);
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = lVar2;
  return auVar6;
}



/* Entry: 109301aec; end: 109301be7;  */

long FUN_109301aec(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    plVar3 = (long *)**(undefined8 **)(param_1 + 8);
    plVar4 = (long *)**(long **)(param_1 + 0x10);
    while (plVar4 != plVar3) {
      plVar4 = plVar4 + -1;
      plVar2 = (long *)*plVar4;
      if ((plVar2 != (long *)0x0) &&
         (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
        *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 109301be8; end: 10930308b;  */

void FUN_109301be8(long *param_1,long *param_2,float *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  long *plStack_98;
  
  plStack_98 = param_2;
LAB_109301c38:
  do {
    plVar4 = param_1;
    uVar14 = (long)plStack_98 - (long)plVar4 >> 3;
    if (uVar14 - 2 == 0 || (long)uVar14 < 2) {
      if (uVar14 < 2) {
        return;
      }
      if (uVar14 == 2) {
        plVar11 = plStack_98 + -1;
        plVar10 = (long *)*plVar11;
        if (plVar10 != (long *)0x0) {
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        }
        plVar3 = (long *)*plVar4;
        if (plVar3 == (long *)0x0) {
          iVar5 = iRam0000000000000008 + -1;
        }
        else {
          iVar5 = (int)plVar3[1];
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        fVar17 = *(float *)((long)plVar10 + 0x14);
        fVar18 = *(float *)((long)plVar3 + 0x14);
        fVar19 = *param_3;
        *(int *)(plVar3 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
          (**(code **)(*plVar3 + 8))();
        }
        iVar5 = (int)plVar10[1] + -1;
        *(int *)(plVar10 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
          (**(code **)(*plVar10 + 8))(plVar10);
        }
        if (ABS(fVar17 - fVar19) <= ABS(fVar18 - fVar19)) {
          return;
        }
        goto code_r0x00010930308c;
      }
    }
    else {
      if (uVar14 == 3) {
        plVar11 = plStack_98 + -1;
        plVar10 = plVar4 + 1;
        plVar3 = (long *)*plVar10;
        if (plVar3 != (long *)0x0) {
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        }
        plVar12 = (long *)*plVar4;
        if (plVar12 == (long *)0x0) {
          iVar5 = iRam0000000000000008 + -1;
        }
        else {
          iVar5 = (int)plVar12[1];
        }
        fVar17 = *(float *)((long)plVar3 + 0x14);
        fVar18 = *(float *)((long)plVar12 + 0x14);
        fVar19 = *param_3;
        *(int *)(plVar12 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
          (**(code **)(*plVar12 + 8))();
        }
        iVar5 = (int)plVar3[1] + -1;
        *(int *)(plVar3 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        plVar3 = (long *)*plVar11;
        if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
          if (plVar3 != (long *)0x0) {
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          }
          plVar12 = (long *)*plVar10;
          if (plVar12 == (long *)0x0) {
            iVar5 = iRam0000000000000008 + -1;
          }
          else {
            iVar5 = (int)plVar12[1];
          }
          fVar17 = *(float *)((long)plVar3 + 0x14);
          fVar18 = *(float *)((long)plVar12 + 0x14);
          fVar19 = *param_3;
          *(int *)(plVar12 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
            (**(code **)(*plVar12 + 8))();
          }
          iVar5 = (int)plVar3[1] + -1;
          *(int *)(plVar3 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
            (**(code **)(*plVar3 + 8))(plVar3);
          }
          if (ABS(fVar17 - fVar19) <= ABS(fVar18 - fVar19)) {
            FUN_10930308c(plVar4,plVar10);
            plVar4 = (long *)*plVar11;
            if (plVar4 != (long *)0x0) {
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            }
            plVar3 = (long *)*plVar10;
            if (plVar3 == (long *)0x0) {
              iVar5 = iRam0000000000000008 + -1;
            }
            else {
              iVar5 = (int)plVar3[1];
            }
            fVar17 = *(float *)((long)plVar4 + 0x14);
            fVar18 = *(float *)((long)plVar3 + 0x14);
            fVar19 = *param_3;
            *(int *)(plVar3 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
              (**(code **)(*plVar3 + 8))();
            }
            iVar5 = (int)plVar4[1] + -1;
            *(int *)(plVar4 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
              (**(code **)(*plVar4 + 8))(plVar4);
            }
            plVar4 = plVar10;
            if (ABS(fVar17 - fVar19) <= ABS(fVar18 - fVar19)) {
              return;
            }
          }
code_r0x00010930308c:
          plVar10 = (long *)*plVar4;
          if (plVar10 != (long *)0x0) {
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          }
          FUN_109300090(plVar4,*plVar11);
          FUN_109300090(plVar11,plVar10);
          if ((plVar10 != (long *)0x0) &&
             (iVar5 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar5, iVar5 == 0)) {
            *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x000109303104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar10 + 8))(plVar10);
            return;
          }
          return;
        }
        if (plVar3 != (long *)0x0) {
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        }
        plVar12 = (long *)*plVar10;
        if (plVar12 == (long *)0x0) {
          iVar5 = iRam0000000000000008 + -1;
        }
        else {
          iVar5 = (int)plVar12[1];
        }
        fVar17 = *(float *)((long)plVar3 + 0x14);
        fVar18 = *(float *)((long)plVar12 + 0x14);
        fVar19 = *param_3;
        *(int *)(plVar12 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
          (**(code **)(*plVar12 + 8))();
        }
        iVar5 = (int)plVar3[1] + -1;
        *(int *)(plVar3 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
          FUN_10930308c(plVar10,plVar11);
          plVar11 = (long *)*plVar10;
          if (plVar11 != (long *)0x0) {
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          }
          plVar3 = (long *)*plVar4;
          if (plVar3 == (long *)0x0) {
            iVar5 = iRam0000000000000008 + -1;
          }
          else {
            iVar5 = (int)plVar3[1];
          }
          fVar17 = *(float *)((long)plVar11 + 0x14);
          fVar18 = *(float *)((long)plVar3 + 0x14);
          fVar19 = *param_3;
          *(int *)(plVar3 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
            (**(code **)(*plVar3 + 8))();
          }
          iVar5 = (int)plVar11[1] + -1;
          *(int *)(plVar11 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
            (**(code **)(*plVar11 + 8))(plVar11);
          }
          plVar11 = plVar10;
          if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) goto code_r0x00010930308c;
        }
        return;
      }
      if (uVar14 == 4) {
        plVar11 = plVar4 + 1;
        plVar10 = plVar4 + 2;
        FUN_109303144();
        plVar3 = (long *)plStack_98[-1];
        if (plVar3 != (long *)0x0) {
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        }
        plVar12 = (long *)*plVar10;
        if (plVar12 == (long *)0x0) {
          iVar5 = iRam0000000000000008 + -1;
        }
        else {
          iVar5 = (int)plVar12[1];
        }
        fVar17 = *(float *)((long)plVar3 + 0x14);
        fVar18 = *(float *)((long)plVar12 + 0x14);
        fVar19 = *param_3;
        *(int *)(plVar12 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
          (**(code **)(*plVar12 + 8))();
        }
        iVar5 = (int)plVar3[1] + -1;
        *(int *)(plVar3 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
          (**(code **)(*plVar3 + 8))(plVar3);
        }
        if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
          FUN_10930308c(plVar10,plStack_98 + -1);
          plVar3 = (long *)*plVar10;
          if (plVar3 != (long *)0x0) {
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          }
          plVar12 = (long *)*plVar11;
          if (plVar12 == (long *)0x0) {
            iVar5 = iRam0000000000000008 + -1;
          }
          else {
            iVar5 = (int)plVar12[1];
          }
          fVar17 = *(float *)((long)plVar3 + 0x14);
          fVar18 = *(float *)((long)plVar12 + 0x14);
          fVar19 = *param_3;
          *(int *)(plVar12 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
            (**(code **)(*plVar12 + 8))();
          }
          iVar5 = (int)plVar3[1] + -1;
          *(int *)(plVar3 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
            (**(code **)(*plVar3 + 8))(plVar3);
          }
          if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
            FUN_10930308c(plVar11,plVar10);
            plVar10 = (long *)*plVar11;
            if (plVar10 != (long *)0x0) {
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            }
            plVar3 = (long *)*plVar4;
            if (plVar3 == (long *)0x0) {
              iVar5 = iRam0000000000000008 + -1;
            }
            else {
              iVar5 = (int)plVar3[1];
            }
            fVar17 = *(float *)((long)plVar10 + 0x14);
            fVar18 = *(float *)((long)plVar3 + 0x14);
            fVar19 = *param_3;
            *(int *)(plVar3 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
              (**(code **)(*plVar3 + 8))();
            }
            iVar5 = (int)plVar10[1] + -1;
            *(int *)(plVar10 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
              (**(code **)(*plVar10 + 8))(plVar10);
            }
            if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) goto code_r0x00010930308c;
          }
        }
        return;
      }
      if (uVar14 == 5) {
        plVar11 = plVar4 + 1;
        plVar10 = plVar4 + 2;
        plVar3 = plVar4 + 3;
        FUN_109303480();
        plVar12 = (long *)plStack_98[-1];
        if (plVar12 != (long *)0x0) {
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        }
        plVar15 = (long *)*plVar3;
        if (plVar15 == (long *)0x0) {
          iVar5 = iRam0000000000000008 + -1;
        }
        else {
          iVar5 = (int)plVar15[1];
        }
        fVar17 = *(float *)((long)plVar12 + 0x14);
        fVar18 = *(float *)((long)plVar15 + 0x14);
        fVar19 = *param_3;
        *(int *)(plVar15 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
          (**(code **)(*plVar15 + 8))();
        }
        iVar5 = (int)plVar12[1] + -1;
        *(int *)(plVar12 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
          (**(code **)(*plVar12 + 8))(plVar12);
        }
        if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
          FUN_10930308c(plVar3,plStack_98 + -1);
          plVar12 = (long *)*plVar3;
          if (plVar12 != (long *)0x0) {
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          }
          plVar15 = (long *)*plVar10;
          if (plVar15 == (long *)0x0) {
            iVar5 = iRam0000000000000008 + -1;
          }
          else {
            iVar5 = (int)plVar15[1];
          }
          fVar17 = *(float *)((long)plVar12 + 0x14);
          fVar18 = *(float *)((long)plVar15 + 0x14);
          fVar19 = *param_3;
          *(int *)(plVar15 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
            (**(code **)(*plVar15 + 8))();
          }
          iVar5 = (int)plVar12[1] + -1;
          *(int *)(plVar12 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
            (**(code **)(*plVar12 + 8))(plVar12);
          }
          if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
            FUN_10930308c(plVar10,plVar3);
            plVar3 = (long *)*plVar10;
            if (plVar3 != (long *)0x0) {
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            }
            plVar12 = (long *)*plVar11;
            if (plVar12 == (long *)0x0) {
              iVar5 = iRam0000000000000008 + -1;
            }
            else {
              iVar5 = (int)plVar12[1];
            }
            fVar17 = *(float *)((long)plVar3 + 0x14);
            fVar18 = *(float *)((long)plVar12 + 0x14);
            fVar19 = *param_3;
            *(int *)(plVar12 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
              (**(code **)(*plVar12 + 8))();
            }
            iVar5 = (int)plVar3[1] + -1;
            *(int *)(plVar3 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
              (**(code **)(*plVar3 + 8))(plVar3);
            }
            if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
              FUN_10930308c(plVar11,plVar10);
              plVar10 = (long *)*plVar11;
              if (plVar10 != (long *)0x0) {
                *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              }
              plVar3 = (long *)*plVar4;
              if (plVar3 == (long *)0x0) {
                iVar5 = iRam0000000000000008 + -1;
              }
              else {
                iVar5 = (int)plVar3[1];
              }
              fVar17 = *(float *)((long)plVar10 + 0x14);
              fVar18 = *(float *)((long)plVar3 + 0x14);
              fVar19 = *param_3;
              *(int *)(plVar3 + 1) = iVar5;
              if (iVar5 == 0) {
                *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
                (**(code **)(*plVar3 + 8))();
              }
              iVar5 = (int)plVar10[1] + -1;
              *(int *)(plVar10 + 1) = iVar5;
              if (iVar5 == 0) {
                *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
                (**(code **)(*plVar10 + 8))(plVar10);
              }
              if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) goto code_r0x00010930308c;
            }
          }
        }
        return;
      }
    }
    if ((long)uVar14 < 0x18) {
      plVar10 = plVar4 + 1;
      if ((param_5 & 1) == 0) {
        if (plVar4 == plStack_98 || plVar10 == plStack_98) {
          return;
        }
        do {
          plVar11 = plVar10;
          plVar10 = (long *)plVar4[1];
          if (plVar10 != (long *)0x0) {
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          }
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            iVar5 = iRam0000000000000008 + -1;
          }
          else {
            iVar5 = (int)plVar4[1];
            *(int *)(plVar4 + 1) = iVar5 + 1;
          }
          fVar17 = *(float *)((long)plVar10 + 0x14);
          fVar18 = *(float *)((long)plVar4 + 0x14);
          fVar19 = *param_3;
          *(int *)(plVar4 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
            (**(code **)(*plVar4 + 8))();
          }
          iVar5 = (int)plVar10[1] + -1;
          *(int *)(plVar10 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
            (**(code **)(*plVar10 + 8))(plVar10);
          }
          if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
            plVar10 = (long *)*plVar11;
            plVar4 = plVar11;
            if (plVar10 != (long *)0x0) {
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            }
            do {
              FUN_109300090(plVar4,plVar4[-1]);
              if (plVar10 != (long *)0x0) {
                *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              }
              plVar3 = (long *)plVar4[-2];
              if (plVar3 == (long *)0x0) {
                iVar5 = iRam0000000000000008 + -1;
              }
              else {
                iVar5 = (int)plVar3[1];
                *(int *)(plVar3 + 1) = iVar5 + 1;
              }
              fVar17 = *(float *)((long)plVar10 + 0x14);
              fVar18 = *(float *)((long)plVar3 + 0x14);
              fVar19 = *param_3;
              *(int *)(plVar3 + 1) = iVar5;
              if (iVar5 == 0) {
                *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
                (**(code **)(*plVar3 + 8))();
              }
              iVar5 = (int)plVar10[1] + -1;
              *(int *)(plVar10 + 1) = iVar5;
              if (iVar5 == 0) {
                *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
                (**(code **)(*plVar10 + 8))(plVar10);
              }
              plVar4 = plVar4 + -1;
            } while (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19));
            FUN_109300090(plVar4,plVar10);
            iVar5 = (int)plVar10[1] + -1;
            *(int *)(plVar10 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          }
          plVar10 = plVar11 + 1;
          plVar4 = plVar11;
        } while (plVar11 + 1 != plStack_98);
        return;
      }
      if (plVar4 == plStack_98 || plVar10 == plStack_98) {
        return;
      }
      lVar9 = 0;
      plVar11 = plVar4;
      do {
        plVar3 = plVar10;
        plVar10 = (long *)plVar11[1];
        if (plVar10 != (long *)0x0) {
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          iVar5 = iRam0000000000000008 + -1;
        }
        else {
          iVar5 = (int)plVar11[1];
          *(int *)(plVar11 + 1) = iVar5 + 1;
        }
        fVar17 = *(float *)((long)plVar10 + 0x14);
        fVar18 = *(float *)((long)plVar11 + 0x14);
        fVar19 = *param_3;
        *(int *)(plVar11 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
          (**(code **)(*plVar11 + 8))();
        }
        iVar5 = (int)plVar10[1] + -1;
        *(int *)(plVar10 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
          (**(code **)(*plVar10 + 8))(plVar10);
        }
        if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
          plVar10 = (long *)*plVar3;
          lVar13 = lVar9;
          if (plVar10 != (long *)0x0) {
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          }
          for (; FUN_109300090((undefined8 *)((long)plVar4 + lVar13) + 1,
                               *(undefined8 *)((long)plVar4 + lVar13)), plVar11 = plVar4,
              lVar13 != 0; lVar13 = lVar13 + -8) {
            if (plVar10 != (long *)0x0) {
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            }
            plVar11 = *(long **)((long)plVar4 + lVar13 + -8);
            if (plVar11 == (long *)0x0) {
              iVar5 = iRam0000000000000008 + -1;
            }
            else {
              iVar5 = (int)plVar11[1];
              *(int *)(plVar11 + 1) = iVar5 + 1;
            }
            fVar17 = *(float *)((long)plVar10 + 0x14);
            fVar18 = *(float *)((long)plVar11 + 0x14);
            fVar19 = *param_3;
            *(int *)(plVar11 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
              (**(code **)(*plVar11 + 8))();
            }
            iVar5 = (int)plVar10[1] + -1;
            *(int *)(plVar10 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
              (**(code **)(*plVar10 + 8))(plVar10);
            }
            if (ABS(fVar17 - fVar19) <= ABS(fVar18 - fVar19)) {
              plVar11 = (long *)((long)plVar4 + lVar13);
              break;
            }
          }
          FUN_109300090(plVar11,plVar10);
          if ((plVar10 != (long *)0x0) &&
             (iVar5 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar5, iVar5 == 0)) {
            *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
            (**(code **)(*plVar10 + 8))(plVar10);
          }
        }
        lVar9 = lVar9 + 8;
        plVar10 = plVar3 + 1;
        plVar11 = plVar3;
        if (plVar3 + 1 == plStack_98) {
          return;
        }
      } while( true );
    }
    if (param_4 == 0) {
      if (plVar4 == plStack_98) {
        return;
      }
      uVar6 = uVar14 - 2 >> 1;
      uVar8 = uVar6;
      do {
        if ((long)uVar8 <= (long)uVar6) {
          uVar7 = uVar8 << 1 | 1;
          plVar10 = plVar4 + uVar7;
          uVar16 = uVar8 * 2 + 2;
          if ((long)uVar16 < (long)uVar14) {
            plVar11 = (long *)*plVar10;
            if (plVar11 != (long *)0x0) {
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            }
            plVar3 = (long *)plVar10[1];
            if (plVar3 == (long *)0x0) {
              iVar5 = iRam0000000000000008 + -1;
            }
            else {
              iVar5 = (int)plVar3[1];
              *(int *)(plVar3 + 1) = iVar5 + 1;
            }
            fVar17 = *(float *)((long)plVar11 + 0x14);
            fVar18 = *(float *)((long)plVar3 + 0x14);
            fVar19 = *param_3;
            *(int *)(plVar3 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
              (**(code **)(*plVar3 + 8))();
            }
            iVar5 = (int)plVar11[1] + -1;
            *(int *)(plVar11 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
              (**(code **)(*plVar11 + 8))(plVar11);
            }
            if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
              uVar7 = uVar16;
              plVar10 = plVar10 + 1;
            }
          }
          plVar11 = (long *)*plVar10;
          if (plVar11 != (long *)0x0) {
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          }
          plVar3 = plVar4 + uVar8;
          plVar12 = (long *)*plVar3;
          if (plVar12 == (long *)0x0) {
            iVar5 = iRam0000000000000008 + -1;
          }
          else {
            iVar5 = (int)plVar12[1];
            *(int *)(plVar12 + 1) = iVar5 + 1;
          }
          fVar17 = *(float *)((long)plVar11 + 0x14);
          fVar18 = *(float *)((long)plVar12 + 0x14);
          fVar19 = *param_3;
          *(int *)(plVar12 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
            (**(code **)(*plVar12 + 8))();
          }
          iVar5 = (int)plVar11[1] + -1;
          *(int *)(plVar11 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
            (**(code **)(*plVar11 + 8))(plVar11);
          }
          if (ABS(fVar17 - fVar19) <= ABS(fVar18 - fVar19)) {
            plVar11 = (long *)*plVar3;
            if (plVar11 != (long *)0x0) {
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            }
            do {
              plVar12 = plVar10;
              FUN_109300090(plVar3,*plVar12);
              if ((long)uVar6 < (long)uVar7) break;
              uVar1 = uVar7 << 1 | 1;
              plVar10 = plVar4 + uVar1;
              uVar16 = uVar7 * 2 + 2;
              uVar7 = uVar1;
              if ((long)uVar16 < (long)uVar14) {
                plVar3 = (long *)*plVar10;
                if (plVar3 != (long *)0x0) {
                  *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
                }
                plVar15 = (long *)plVar10[1];
                if (plVar15 == (long *)0x0) {
                  iVar5 = iRam0000000000000008 + -1;
                }
                else {
                  iVar5 = (int)plVar15[1];
                  *(int *)(plVar15 + 1) = iVar5 + 1;
                }
                fVar17 = *(float *)((long)plVar3 + 0x14);
                fVar18 = *(float *)((long)plVar15 + 0x14);
                fVar19 = *param_3;
                *(int *)(plVar15 + 1) = iVar5;
                if (iVar5 == 0) {
                  *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
                  (**(code **)(*plVar15 + 8))();
                }
                iVar5 = (int)plVar3[1] + -1;
                *(int *)(plVar3 + 1) = iVar5;
                if (iVar5 == 0) {
                  *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
                  (**(code **)(*plVar3 + 8))(plVar3);
                }
                if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
                  uVar7 = uVar16;
                  plVar10 = plVar10 + 1;
                }
              }
              plVar3 = (long *)*plVar10;
              if (plVar3 != (long *)0x0) {
                *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              }
              fVar17 = *(float *)((long)plVar3 + 0x14);
              fVar18 = *(float *)((long)plVar11 + 0x14);
              fVar19 = *param_3;
              if ((int)plVar11[1] == 0) {
                *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
                (**(code **)(*plVar11 + 8))(plVar11);
              }
              iVar5 = (int)plVar3[1] + -1;
              *(int *)(plVar3 + 1) = iVar5;
              if (iVar5 == 0) {
                *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
                (**(code **)(*plVar3 + 8))(plVar3);
              }
              plVar3 = plVar12;
            } while (ABS(fVar17 - fVar19) <= ABS(fVar18 - fVar19));
            FUN_109300090(plVar12,plVar11);
            if ((plVar11 != (long *)0x0) &&
               (iVar5 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar5, iVar5 == 0)) {
              *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
        bVar2 = uVar8 != 0;
        uVar8 = uVar8 - 1;
      } while (bVar2);
      do {
        plVar10 = (long *)*plVar4;
        if (plVar10 != (long *)0x0) {
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        }
        plVar11 = plVar4;
        uVar8 = 0;
        do {
          plVar3 = plVar11 + uVar8 + 1;
          uVar16 = uVar8 << 1 | 1;
          uVar6 = uVar8 * 2 + 2;
          if ((long)uVar6 < (long)uVar14) {
            plVar12 = (long *)*plVar3;
            if (plVar12 != (long *)0x0) {
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            }
            plVar15 = (long *)plVar11[uVar8 + 2];
            if (plVar15 == (long *)0x0) {
              iVar5 = iRam0000000000000008 + -1;
            }
            else {
              iVar5 = (int)plVar15[1];
              *(int *)(plVar15 + 1) = iVar5 + 1;
            }
            fVar17 = *(float *)((long)plVar12 + 0x14);
            fVar18 = *(float *)((long)plVar15 + 0x14);
            fVar19 = *param_3;
            *(int *)(plVar15 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
              (**(code **)(*plVar15 + 8))();
            }
            iVar5 = (int)plVar12[1] + -1;
            *(int *)(plVar12 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
              (**(code **)(*plVar12 + 8))(plVar12);
            }
            if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
              plVar3 = plVar11 + uVar8 + 2;
              uVar16 = uVar6;
            }
          }
          FUN_109300090(plVar11,*plVar3);
          plVar11 = plVar3;
          uVar8 = uVar16;
        } while ((long)uVar16 <= (long)(uVar14 - 2 >> 1));
        plStack_98 = plStack_98 + -1;
        if (plVar3 == plStack_98) {
          FUN_109300090(plVar3,plVar10);
        }
        else {
          FUN_109300090(plVar3,*plStack_98);
          FUN_109300090(plStack_98,plVar10);
          lVar9 = (long)plVar3 + (8 - (long)plVar4) >> 3;
          if (1 < lVar9) {
            uVar8 = lVar9 - 2U >> 1;
            plVar11 = plVar4 + uVar8;
            plVar12 = (long *)*plVar11;
            if (plVar12 != (long *)0x0) {
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            }
            plVar15 = (long *)*plVar3;
            if (plVar15 == (long *)0x0) {
              iVar5 = iRam0000000000000008 + -1;
            }
            else {
              iVar5 = (int)plVar15[1];
              *(int *)(plVar15 + 1) = iVar5 + 1;
            }
            fVar17 = *(float *)((long)plVar12 + 0x14);
            fVar18 = *(float *)((long)plVar15 + 0x14);
            fVar19 = *param_3;
            *(int *)(plVar15 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
              (**(code **)(*plVar15 + 8))();
            }
            iVar5 = (int)plVar12[1] + -1;
            *(int *)(plVar12 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
              (**(code **)(*plVar12 + 8))(plVar12);
            }
            if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
              plVar12 = (long *)*plVar3;
              if (plVar12 != (long *)0x0) {
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              }
              do {
                plVar15 = plVar11;
                FUN_109300090(plVar3,*plVar15);
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1 >> 1;
                plVar11 = (long *)plVar4[uVar8];
                if (plVar11 != (long *)0x0) {
                  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                }
                fVar17 = *(float *)((long)plVar11 + 0x14);
                fVar18 = *(float *)((long)plVar12 + 0x14);
                fVar19 = *param_3;
                if ((int)plVar12[1] == 0) {
                  *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
                  (**(code **)(*plVar12 + 8))(plVar12);
                }
                iVar5 = (int)plVar11[1] + -1;
                *(int *)(plVar11 + 1) = iVar5;
                if (iVar5 == 0) {
                  *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
                  (**(code **)(*plVar11 + 8))(plVar11);
                }
                plVar3 = plVar15;
                plVar11 = plVar4 + uVar8;
              } while (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19));
              FUN_109300090(plVar15,plVar12);
              if ((plVar12 != (long *)0x0) &&
                 (iVar5 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar5, iVar5 == 0)) {
                *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
                (**(code **)(*plVar12 + 8))(plVar12);
              }
            }
          }
        }
        if ((plVar10 != (long *)0x0) &&
           (iVar5 = (int)plVar10[1] + -1, *(int *)(plVar10 + 1) = iVar5, iVar5 == 0)) {
          *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
          (**(code **)(*plVar10 + 8))(plVar10);
        }
        bVar2 = (long)uVar14 < 3;
        uVar14 = uVar14 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar10 = plVar4 + (uVar14 >> 1);
    plVar11 = plStack_98 + -1;
    if (uVar14 < 0x81) {
      FUN_109303144(plVar10,plVar4,plVar11,param_3);
    }
    else {
      FUN_109303144(plVar4,plVar10,plVar11,param_3);
      FUN_109303144(plVar4 + 1,plVar10 + -1,plStack_98 + -2,param_3);
      FUN_109303144(plVar4 + 2,plVar10 + 1,plStack_98 + -3,param_3);
      FUN_109303144(plVar10 + -1,plVar10,plVar10 + 1,param_3);
      FUN_109303990(plVar4,plVar10);
    }
    param_4 = param_4 + -1;
    param_1 = plVar4;
    if ((param_5 & 1) == 0) {
      plVar10 = (long *)plVar4[-1];
      if (plVar10 != (long *)0x0) {
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      }
      plVar3 = (long *)*plVar4;
      if (plVar3 == (long *)0x0) {
        iVar5 = iRam0000000000000008 + -1;
      }
      else {
        iVar5 = (int)plVar3[1];
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      fVar17 = *(float *)((long)plVar10 + 0x14);
      fVar18 = *(float *)((long)plVar3 + 0x14);
      fVar19 = *param_3;
      *(int *)(plVar3 + 1) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
        (**(code **)(*plVar3 + 8))();
      }
      iVar5 = (int)plVar10[1] + -1;
      *(int *)(plVar10 + 1) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
        (**(code **)(*plVar10 + 8))(plVar10);
      }
      if (ABS(fVar17 - fVar19) <= ABS(fVar18 - fVar19)) {
        plVar10 = (long *)*plVar4;
        if (plVar10 != (long *)0x0) {
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 2;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          iVar5 = iRam0000000000000008 + -1;
        }
        else {
          iVar5 = (int)plVar11[1];
          *(int *)(plVar11 + 1) = iVar5 + 1;
        }
        fVar17 = *(float *)((long)plVar10 + 0x14);
        fVar18 = *(float *)((long)plVar11 + 0x14);
        fVar19 = *param_3;
        *(int *)(plVar11 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
          (**(code **)(*plVar11 + 8))();
        }
        iVar5 = (int)plVar10[1] + -1;
        *(int *)(plVar10 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
          (**(code **)(*plVar10 + 8))(plVar10);
        }
        if (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19)) {
          do {
            param_1 = param_1 + 1;
            plVar11 = (long *)*param_1;
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            if (plVar11 == (long *)0x0) {
              iVar5 = iRam0000000000000008 + -1;
            }
            else {
              iVar5 = (int)plVar11[1];
              *(int *)(plVar11 + 1) = iVar5 + 1;
            }
            fVar17 = *(float *)((long)plVar10 + 0x14);
            fVar18 = *(float *)((long)plVar11 + 0x14);
            fVar19 = *param_3;
            *(int *)(plVar11 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
              (**(code **)(*plVar11 + 8))();
            }
            iVar5 = (int)plVar10[1] + -1;
            *(int *)(plVar10 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          } while (ABS(fVar17 - fVar19) <= ABS(fVar18 - fVar19));
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (plStack_98 <= param_1) break;
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            plVar11 = (long *)*param_1;
            if (plVar11 == (long *)0x0) {
              iVar5 = iRam0000000000000008 + -1;
            }
            else {
              iVar5 = (int)plVar11[1];
              *(int *)(plVar11 + 1) = iVar5 + 1;
            }
            fVar17 = *(float *)((long)plVar10 + 0x14);
            fVar18 = *(float *)((long)plVar11 + 0x14);
            fVar19 = *param_3;
            *(int *)(plVar11 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
              (**(code **)(*plVar11 + 8))();
            }
            iVar5 = (int)plVar10[1] + -1;
            *(int *)(plVar10 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          } while (ABS(fVar17 - fVar19) <= ABS(fVar18 - fVar19));
        }
        plVar11 = plStack_98;
        if (param_1 < plStack_98) {
          do {
            plVar11 = plVar11 + -1;
            plVar3 = (long *)*plVar11;
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            if (plVar3 == (long *)0x0) {
              iVar5 = iRam0000000000000008 + -1;
            }
            else {
              iVar5 = (int)plVar3[1];
              *(int *)(plVar3 + 1) = iVar5 + 1;
            }
            fVar17 = *(float *)((long)plVar10 + 0x14);
            fVar18 = *(float *)((long)plVar3 + 0x14);
            fVar19 = *param_3;
            *(int *)(plVar3 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
              (**(code **)(*plVar3 + 8))();
            }
            iVar5 = (int)plVar10[1] + -1;
            *(int *)(plVar10 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          } while (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19));
        }
        while (param_1 < plVar11) {
          FUN_10930308c(param_1,plVar11);
          do {
            param_1 = param_1 + 1;
            plVar3 = (long *)*param_1;
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            if (plVar3 == (long *)0x0) {
              iVar5 = iRam0000000000000008 + -1;
            }
            else {
              iVar5 = (int)plVar3[1];
              *(int *)(plVar3 + 1) = iVar5 + 1;
            }
            fVar17 = *(float *)((long)plVar10 + 0x14);
            fVar18 = *(float *)((long)plVar3 + 0x14);
            fVar19 = *param_3;
            *(int *)(plVar3 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
              (**(code **)(*plVar3 + 8))();
            }
            iVar5 = (int)plVar10[1] + -1;
            *(int *)(plVar10 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          } while (ABS(fVar17 - fVar19) <= ABS(fVar18 - fVar19));
          do {
            plVar11 = plVar11 + -1;
            plVar3 = (long *)*plVar11;
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            if (plVar3 == (long *)0x0) {
              iVar5 = iRam0000000000000008 + -1;
            }
            else {
              iVar5 = (int)plVar3[1];
              *(int *)(plVar3 + 1) = iVar5 + 1;
            }
            fVar17 = *(float *)((long)plVar10 + 0x14);
            fVar18 = *(float *)((long)plVar3 + 0x14);
            fVar19 = *param_3;
            *(int *)(plVar3 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
              (**(code **)(*plVar3 + 8))();
            }
            iVar5 = (int)plVar10[1] + -1;
            *(int *)(plVar10 + 1) = iVar5;
            if (iVar5 == 0) {
              *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          } while (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19));
        }
        plVar11 = param_1 + -1;
        if (plVar11 != plVar4) {
          FUN_109300090(plVar4,*plVar11);
        }
        FUN_109300090(plVar11,plVar10);
        param_5 = 0;
        iVar5 = (int)plVar10[1] + -1;
        *(int *)(plVar10 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
          (**(code **)(*plVar10 + 8))(plVar10);
          param_5 = 0;
        }
        goto LAB_109301c38;
      }
    }
    plVar10 = (long *)*plVar4;
    if (plVar10 != (long *)0x0) {
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    }
    lVar9 = 0;
    do {
      plVar3 = *(long **)((long)plVar4 + lVar9 + 8);
      if (plVar3 != (long *)0x0) {
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      }
      fVar17 = *(float *)((long)plVar3 + 0x14);
      fVar18 = *(float *)((long)plVar10 + 0x14);
      fVar19 = *param_3;
      if ((int)plVar10[1] == 0) {
        *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
        (**(code **)(*plVar10 + 8))(plVar10);
      }
      iVar5 = (int)plVar3[1] + -1;
      *(int *)(plVar3 + 1) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      lVar9 = lVar9 + 8;
    } while (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19));
    plVar3 = (long *)((long)plVar4 + lVar9);
    plVar12 = plStack_98;
    if (lVar9 == 8) {
      if (plVar3 < plStack_98) {
        while( true ) {
          plVar12 = (long *)*plVar11;
          if (plVar12 != (long *)0x0) {
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          }
          fVar17 = *(float *)((long)plVar12 + 0x14);
          fVar18 = *(float *)((long)plVar10 + 0x14);
          fVar19 = *param_3;
          if ((int)plVar10[1] == 0) {
            *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
            (**(code **)(*plVar10 + 8))(plVar10);
          }
          iVar5 = (int)plVar12[1] + -1;
          *(int *)(plVar12 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
            (**(code **)(*plVar12 + 8))(plVar12);
          }
          plVar12 = plVar11;
          if ((plVar11 <= plVar3) || (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19))) break;
          plVar11 = plVar11 + -1;
        }
      }
    }
    else {
      do {
        plVar12 = plVar12 + -1;
        plVar11 = (long *)*plVar12;
        if (plVar11 != (long *)0x0) {
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        }
        fVar17 = *(float *)((long)plVar11 + 0x14);
        fVar18 = *(float *)((long)plVar10 + 0x14);
        fVar19 = *param_3;
        if ((int)plVar10[1] == 0) {
          *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
          (**(code **)(*plVar10 + 8))(plVar10);
        }
        iVar5 = (int)plVar11[1] + -1;
        *(int *)(plVar11 + 1) = iVar5;
        if (iVar5 == 0) {
          *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      } while (ABS(fVar17 - fVar19) <= ABS(fVar18 - fVar19));
    }
    param_1 = plVar3;
    plVar11 = plVar12;
    if (plVar3 < plVar12) {
      do {
        FUN_10930308c(param_1,plVar11);
        do {
          param_1 = param_1 + 1;
          plVar15 = (long *)*param_1;
          if (plVar15 != (long *)0x0) {
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          }
          fVar17 = *(float *)((long)plVar15 + 0x14);
          fVar18 = *(float *)((long)plVar10 + 0x14);
          fVar19 = *param_3;
          if ((int)plVar10[1] == 0) {
            *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
            (**(code **)(*plVar10 + 8))(plVar10);
          }
          iVar5 = (int)plVar15[1] + -1;
          *(int *)(plVar15 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
            (**(code **)(*plVar15 + 8))(plVar15);
          }
        } while (ABS(fVar18 - fVar19) < ABS(fVar17 - fVar19));
        do {
          plVar11 = plVar11 + -1;
          plVar15 = (long *)*plVar11;
          if (plVar15 != (long *)0x0) {
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          }
          fVar17 = *(float *)((long)plVar15 + 0x14);
          fVar18 = *(float *)((long)plVar10 + 0x14);
          fVar19 = *param_3;
          if ((int)plVar10[1] == 0) {
            *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
            (**(code **)(*plVar10 + 8))(plVar10);
          }
          iVar5 = (int)plVar15[1] + -1;
          *(int *)(plVar15 + 1) = iVar5;
          if (iVar5 == 0) {
            *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
            (**(code **)(*plVar15 + 8))(plVar15);
          }
        } while (ABS(fVar17 - fVar19) <= ABS(fVar18 - fVar19));
      } while (param_1 < plVar11);
    }
    plVar11 = param_1 + -1;
    if (plVar11 != plVar4) {
      FUN_109300090(plVar4,*plVar11);
    }
    FUN_109300090(plVar11,plVar10);
    iVar5 = (int)plVar10[1] + -1;
    *(int *)(plVar10 + 1) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(plVar10 + 1) = 0xdeadf001;
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    if (plVar3 < plVar12) {
LAB_1093020f0:
      FUN_109301be8(plVar4,plVar11,param_3,param_4,param_5 & 1);
      param_5 = 0;
    }
    else {
      plVar10 = plVar4;
      FUN_109303a48(plVar4,plVar11,param_3);
      plVar3 = param_1;
      FUN_109303a48(param_1,plStack_98,param_3);
      if ((int)plVar3 == 0) {
        if (((ulong)plVar10 & 1) == 0) goto LAB_1093020f0;
      }
      else {
        plStack_98 = plVar11;
        param_1 = plVar4;
        if (((ulong)plVar10 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 10930308c; end: 109303143;  */

void FUN_10930308c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
  FUN_109300090(param_1,*param_2);
  FUN_109300090(param_2,plVar2);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x000109303104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}



/* Entry: 109303144; end: 10930347f;  */

void FUN_109303144(long *param_1,long *param_2,long *param_3,float *param_4)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  plVar3 = (long *)*param_2;
  if (plVar3 != (long *)0x0) {
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  }
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    iVar2 = iRam0000000000000008 + -1;
  }
  else {
    iVar2 = (int)plVar1[1];
  }
  fVar4 = *(float *)((long)plVar3 + 0x14);
  fVar5 = *(float *)((long)plVar1 + 0x14);
  fVar6 = *param_4;
  *(int *)(plVar1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
    (**(code **)(*plVar1 + 8))();
  }
  iVar2 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  plVar3 = (long *)*param_3;
  if (ABS(fVar4 - fVar6) <= ABS(fVar5 - fVar6)) {
    if (plVar3 != (long *)0x0) {
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
    plVar1 = (long *)*param_2;
    if (plVar1 == (long *)0x0) {
      iVar2 = iRam0000000000000008 + -1;
    }
    else {
      iVar2 = (int)plVar1[1];
    }
    fVar4 = *(float *)((long)plVar3 + 0x14);
    fVar5 = *(float *)((long)plVar1 + 0x14);
    fVar6 = *param_4;
    *(int *)(plVar1 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
      (**(code **)(*plVar1 + 8))();
    }
    iVar2 = (int)plVar3[1] + -1;
    *(int *)(plVar3 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    if (ABS(fVar5 - fVar6) < ABS(fVar4 - fVar6)) {
      FUN_10930308c(param_2,param_3);
      plVar3 = (long *)*param_2;
      if (plVar3 != (long *)0x0) {
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      }
      plVar1 = (long *)*param_1;
      if (plVar1 == (long *)0x0) {
        iVar2 = iRam0000000000000008 + -1;
      }
      else {
        iVar2 = (int)plVar1[1];
      }
      fVar4 = *(float *)((long)plVar3 + 0x14);
      fVar5 = *(float *)((long)plVar1 + 0x14);
      fVar6 = *param_4;
      *(int *)(plVar1 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
        (**(code **)(*plVar1 + 8))();
      }
      iVar2 = (int)plVar3[1] + -1;
      *(int *)(plVar3 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      param_3 = param_2;
      if (ABS(fVar5 - fVar6) < ABS(fVar4 - fVar6)) goto code_r0x00010930308c;
    }
    return;
  }
  if (plVar3 != (long *)0x0) {
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
    iVar2 = iRam0000000000000008 + -1;
  }
  else {
    iVar2 = (int)plVar1[1];
  }
  fVar4 = *(float *)((long)plVar3 + 0x14);
  fVar5 = *(float *)((long)plVar1 + 0x14);
  fVar6 = *param_4;
  *(int *)(plVar1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
    (**(code **)(*plVar1 + 8))();
  }
  iVar2 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (ABS(fVar4 - fVar6) <= ABS(fVar5 - fVar6)) {
    FUN_10930308c(param_1,param_2);
    plVar3 = (long *)*param_3;
    if (plVar3 != (long *)0x0) {
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
    plVar1 = (long *)*param_2;
    if (plVar1 == (long *)0x0) {
      iVar2 = iRam0000000000000008 + -1;
    }
    else {
      iVar2 = (int)plVar1[1];
    }
    fVar4 = *(float *)((long)plVar3 + 0x14);
    fVar5 = *(float *)((long)plVar1 + 0x14);
    fVar6 = *param_4;
    *(int *)(plVar1 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
      (**(code **)(*plVar1 + 8))();
    }
    iVar2 = (int)plVar3[1] + -1;
    *(int *)(plVar3 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    param_1 = param_2;
    if (ABS(fVar4 - fVar6) <= ABS(fVar5 - fVar6)) {
      return;
    }
  }
code_r0x00010930308c:
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  }
  FUN_109300090(param_1,*param_3);
  FUN_109300090(param_3,plVar3);
  if ((plVar3 != (long *)0x0) &&
     (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x000109303104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 8))(plVar3);
    return;
  }
  return;
}



/* Entry: 109303480; end: 10930398f;  */

void FUN_109303480(long *param_1,long *param_2,long *param_3,undefined8 *param_4,float *param_5)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_109303144();
  plVar3 = (long *)*param_4;
  if (plVar3 != (long *)0x0) {
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  }
  plVar1 = (long *)*param_3;
  if (plVar1 == (long *)0x0) {
    iVar2 = iRam0000000000000008 + -1;
  }
  else {
    iVar2 = (int)plVar1[1];
  }
  fVar4 = *(float *)((long)plVar3 + 0x14);
  fVar5 = *(float *)((long)plVar1 + 0x14);
  fVar6 = *param_5;
  *(int *)(plVar1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
    (**(code **)(*plVar1 + 8))();
  }
  iVar2 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (ABS(fVar5 - fVar6) < ABS(fVar4 - fVar6)) {
    FUN_10930308c(param_3,param_4);
    plVar3 = (long *)*param_3;
    if (plVar3 != (long *)0x0) {
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
    plVar1 = (long *)*param_2;
    if (plVar1 == (long *)0x0) {
      iVar2 = iRam0000000000000008 + -1;
    }
    else {
      iVar2 = (int)plVar1[1];
    }
    fVar4 = *(float *)((long)plVar3 + 0x14);
    fVar5 = *(float *)((long)plVar1 + 0x14);
    fVar6 = *param_5;
    *(int *)(plVar1 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
      (**(code **)(*plVar1 + 8))();
    }
    iVar2 = (int)plVar3[1] + -1;
    *(int *)(plVar3 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    if (ABS(fVar5 - fVar6) < ABS(fVar4 - fVar6)) {
      FUN_10930308c(param_2,param_3);
      plVar3 = (long *)*param_2;
      if (plVar3 != (long *)0x0) {
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      }
      plVar1 = (long *)*param_1;
      if (plVar1 == (long *)0x0) {
        iVar2 = iRam0000000000000008 + -1;
      }
      else {
        iVar2 = (int)plVar1[1];
      }
      fVar4 = *(float *)((long)plVar3 + 0x14);
      fVar5 = *(float *)((long)plVar1 + 0x14);
      fVar6 = *param_5;
      *(int *)(plVar1 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
        (**(code **)(*plVar1 + 8))();
      }
      iVar2 = (int)plVar3[1] + -1;
      *(int *)(plVar3 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      if (ABS(fVar5 - fVar6) < ABS(fVar4 - fVar6)) {
        plVar3 = (long *)*param_1;
        if (plVar3 != (long *)0x0) {
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        }
        FUN_109300090(param_1,*param_2);
        FUN_109300090(param_2,plVar3);
        if ((plVar3 != (long *)0x0) &&
           (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
          *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x000109303104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 8))(plVar3);
          return;
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 109303990; end: 109303a47;  */

void FUN_109303990(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  }
  FUN_109300090(param_1,*param_2);
  FUN_109300090(param_2,plVar2);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x000109303a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}



/* Entry: 109303a48; end: 109303e1f;  */

bool FUN_109303a48(long *param_1,long *param_2,float *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar5 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      plVar6 = (long *)param_2[-1];
      if (plVar6 != (long *)0x0) {
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      }
      plVar1 = (long *)*param_1;
      if (plVar1 == (long *)0x0) {
        iVar4 = iRam0000000000000008 + -1;
      }
      else {
        iVar4 = (int)plVar1[1];
        *(int *)(plVar1 + 1) = iVar4 + 1;
      }
      fVar10 = *(float *)((long)plVar6 + 0x14);
      fVar11 = *(float *)((long)plVar1 + 0x14);
      fVar12 = *param_3;
      *(int *)(plVar1 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar1 + 1) = 0xdeadf001;
        (**(code **)(*plVar1 + 8))();
      }
      iVar4 = (int)plVar6[1] + -1;
      *(int *)(plVar6 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(plVar6 + 1) = 0xdeadf001;
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      if (ABS(fVar10 - fVar12) <= ABS(fVar11 - fVar12)) {
        return true;
      }
      FUN_10930308c(param_1,param_2 + -1);
      return true;
    }
  }
  else {
    if (uVar5 == 3) {
      FUN_109303144(param_1,param_1 + 1,param_2 + -1,param_3);
      return true;
    }
    if (uVar5 == 4) {
      func_0x000109303480(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
      return true;
    }
    if (uVar5 == 5) {
      func_0x0001093036bc(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
      return true;
    }
  }
  FUN_109303144(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar9 = 0;
    iVar4 = 0;
    plVar6 = param_1 + 2;
    plVar1 = param_1 + 3;
    do {
      plVar7 = (long *)*plVar1;
      if (plVar7 != (long *)0x0) {
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      }
      plVar2 = (long *)*plVar6;
      if (plVar2 == (long *)0x0) {
        iVar3 = iRam0000000000000008 + -1;
      }
      else {
        iVar3 = (int)plVar2[1];
        *(int *)(plVar2 + 1) = iVar3 + 1;
      }
      fVar10 = *(float *)((long)plVar7 + 0x14);
      fVar11 = *(float *)((long)plVar2 + 0x14);
      fVar12 = *param_3;
      *(int *)(plVar2 + 1) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
        (**(code **)(*plVar2 + 8))();
      }
      iVar3 = (int)plVar7[1] + -1;
      *(int *)(plVar7 + 1) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(plVar7 + 1) = 0xdeadf001;
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      if (ABS(fVar11 - fVar12) < ABS(fVar10 - fVar12)) {
        plVar7 = (long *)*plVar1;
        lVar8 = lVar9;
        if (plVar7 != (long *)0x0) {
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        }
        for (; FUN_109300090((long)param_1 + lVar8 + 0x18,
                             *(undefined8 *)((long)param_1 + lVar8 + 0x10)), plVar2 = param_1,
            lVar8 != -0x10; lVar8 = lVar8 + -8) {
          if (plVar7 != (long *)0x0) {
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          }
          plVar2 = *(long **)((long)param_1 + lVar8 + 8);
          if (plVar2 == (long *)0x0) {
            iVar3 = iRam0000000000000008 + -1;
          }
          else {
            iVar3 = (int)plVar2[1];
            *(int *)(plVar2 + 1) = iVar3 + 1;
          }
          fVar10 = *(float *)((long)plVar7 + 0x14);
          fVar11 = *(float *)((long)plVar2 + 0x14);
          fVar12 = *param_3;
          *(int *)(plVar2 + 1) = iVar3;
          if (iVar3 == 0) {
            *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
            (**(code **)(*plVar2 + 8))();
          }
          fVar10 = ABS(fVar10 - fVar12);
          fVar11 = ABS(fVar11 - fVar12);
          iVar3 = (int)plVar7[1] + -1;
          *(int *)(plVar7 + 1) = iVar3;
          if (iVar3 == 0) {
            *(undefined4 *)(plVar7 + 1) = 0xdeadf001;
            (**(code **)(*plVar7 + 8))(plVar7);
            plVar2 = plVar6;
            if (fVar10 <= fVar11) break;
          }
          else if (fVar10 <= fVar11) {
            plVar2 = (long *)((long)param_1 + lVar8 + 0x10);
            break;
          }
          plVar6 = plVar6 + -1;
        }
        FUN_109300090(plVar2,plVar7);
        if ((plVar7 != (long *)0x0) &&
           (iVar3 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar3, iVar3 == 0)) {
          *(undefined4 *)(plVar7 + 1) = 0xdeadf001;
          (**(code **)(*plVar7 + 8))(plVar7);
        }
        iVar4 = iVar4 + 1;
        if (iVar4 == 8) {
          return plVar1 + 1 == param_2;
        }
      }
      plVar7 = plVar1 + 1;
      lVar9 = lVar9 + 8;
      plVar6 = plVar1;
      plVar1 = plVar7;
    } while (plVar7 != param_2);
  }
  return true;
}



/* Entry: 109303e20; end: 109305627;  */

/* WARNING: Possible PIC construction at 0x000109305cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109305cc4) */
/* WARNING: Removing unreachable block (ram,0x000109305ccc) */
/* WARNING: Removing unreachable block (ram,0x000109305cd8) */
/* WARNING: Removing unreachable block (ram,0x000109305ce0) */
/* WARNING: Removing unreachable block (ram,0x000109305cec) */
/* WARNING: Removing unreachable block (ram,0x000109305d1c) */
/* WARNING: Removing unreachable block (ram,0x000109305cfc) */
/* WARNING: Removing unreachable block (ram,0x000109305d10) */
/* WARNING: Removing unreachable block (ram,0x000109305d14) */
/* WARNING: Removing unreachable block (ram,0x000109305d20) */
/* WARNING: Removing unreachable block (ram,0x000109305d38) */
/* WARNING: Removing unreachable block (ram,0x000109305d48) */
/* WARNING: Removing unreachable block (ram,0x000109305d60) */
/* WARNING: Removing unreachable block (ram,0x000109305d58) */
/* WARNING: Removing unreachable block (ram,0x000109305d78) */
/* WARNING: Removing unreachable block (ram,0x000109305d8c) */
/* WARNING: Removing unreachable block (ram,0x000109305d98) */
/* WARNING: Removing unreachable block (ram,0x000109305da0) */
/* WARNING: Removing unreachable block (ram,0x000109305dac) */
/* WARNING: Removing unreachable block (ram,0x000109305ddc) */
/* WARNING: Removing unreachable block (ram,0x000109305dbc) */
/* WARNING: Removing unreachable block (ram,0x000109305dd0) */
/* WARNING: Removing unreachable block (ram,0x000109305dd4) */
/* WARNING: Removing unreachable block (ram,0x000109305de0) */
/* WARNING: Removing unreachable block (ram,0x000109305df0) */
/* WARNING: Removing unreachable block (ram,0x000109305e00) */
/* WARNING: Removing unreachable block (ram,0x000109305e18) */
/* WARNING: Removing unreachable block (ram,0x000109305e10) */
/* WARNING: Removing unreachable block (ram,0x000109305e30) */
/* WARNING: Removing unreachable block (ram,0x000109305e44) */
/* WARNING: Removing unreachable block (ram,0x000109305e50) */
/* WARNING: Removing unreachable block (ram,0x000109305e58) */
/* WARNING: Removing unreachable block (ram,0x000109305e64) */
/* WARNING: Removing unreachable block (ram,0x000109305e94) */
/* WARNING: Removing unreachable block (ram,0x000109305e74) */
/* WARNING: Removing unreachable block (ram,0x000109305e88) */
/* WARNING: Removing unreachable block (ram,0x000109305e8c) */
/* WARNING: Removing unreachable block (ram,0x000109305e98) */
/* WARNING: Removing unreachable block (ram,0x000109305ea8) */
/* WARNING: Removing unreachable block (ram,0x000109305eb8) */
/* WARNING: Removing unreachable block (ram,0x000109305ed0) */
/* WARNING: Removing unreachable block (ram,0x000109305ec8) */
/* WARNING: Removing unreachable block (ram,0x000109305ee8) */
/* WARNING: Removing unreachable block (ram,0x000109305efc) */
/* WARNING: Removing unreachable block (ram,0x000109305f08) */
/* WARNING: Removing unreachable block (ram,0x000109305f10) */
/* WARNING: Removing unreachable block (ram,0x000109305f1c) */
/* WARNING: Removing unreachable block (ram,0x000109305f4c) */
/* WARNING: Removing unreachable block (ram,0x000109305f2c) */
/* WARNING: Removing unreachable block (ram,0x000109305f40) */
/* WARNING: Removing unreachable block (ram,0x000109305f44) */
/* WARNING: Removing unreachable block (ram,0x000109305f50) */
/* WARNING: Removing unreachable block (ram,0x000109305f60) */
/* WARNING: Removing unreachable block (ram,0x000109305f70) */
/* WARNING: Removing unreachable block (ram,0x000109305fa8) */
/* WARNING: Removing unreachable block (ram,0x000109305f80) */
/* WARNING: Removing unreachable block (ram,0x000109305f84) */
/* WARNING: Removing unreachable block (ram,0x000109305ecc) */
/* WARNING: Removing unreachable block (ram,0x000109305e14) */
/* WARNING: Removing unreachable block (ram,0x000109305d5c) */
/* WARNING: Removing unreachable block (ram,0x000109305fc0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109303e20(long *param_1,long *param_2,float *param_3,long param_4,uint param_5)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x19;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  float *unaff_x21;
  long lVar10;
  long *unaff_x22;
  long *plVar11;
  long *unaff_x23;
  long *unaff_x24;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *plVar15;
  ulong uVar16;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
LAB_109303e68:
  do {
    plVar5 = param_1;
    uVar7 = (long)param_2 - (long)plVar5 >> 3;
    if (uVar7 - 2 != 0 && 1 < (long)uVar7) {
      if (uVar7 == 3) {
        param_2 = param_2 + -1;
        plVar11 = plVar5 + 1;
        plVar12 = (long *)*plVar11;
        if (plVar12 != (long *)0x0) {
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        }
        plVar4 = (long *)*plVar5;
        if (plVar4 != (long *)0x0) {
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        }
        if ((int)plVar12[3] == (int)plVar4[3]) {
          bVar3 = ABS(*(float *)((long)plVar12 + 0x14) - *param_3) <
                  ABS(*(float *)((long)plVar4 + 0x14) - *param_3);
        }
        else {
          bVar3 = (int)plVar4[3] < (int)plVar12[3];
        }
        iVar2 = (int)plVar4[1] + -1;
        *(int *)(plVar4 + 1) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
          (**(code **)(*plVar4 + 8))();
        }
        iVar2 = (int)plVar12[1] + -1;
        *(int *)(plVar12 + 1) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
          (**(code **)(*plVar12 + 8))(plVar12);
        }
        plVar12 = (long *)*param_2;
        if (bVar3) {
          if (plVar12 != (long *)0x0) {
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          }
          plVar4 = (long *)*plVar11;
          if (plVar4 != (long *)0x0) {
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          }
          if ((int)plVar12[3] == (int)plVar4[3]) {
            bVar3 = ABS(*(float *)((long)plVar12 + 0x14) - *param_3) <
                    ABS(*(float *)((long)plVar4 + 0x14) - *param_3);
          }
          else {
            bVar3 = (int)plVar4[3] < (int)plVar12[3];
          }
          iVar2 = (int)plVar4[1] + -1;
          *(int *)(plVar4 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
            (**(code **)(*plVar4 + 8))();
          }
          iVar2 = (int)plVar12[1] + -1;
          *(int *)(plVar12 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
            (**(code **)(*plVar12 + 8))(plVar12);
          }
          if (bVar3) goto code_r0x00010930308c;
          FUN_10930308c(plVar5,plVar11);
          plVar12 = (long *)*param_2;
          if (plVar12 != (long *)0x0) {
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          }
          plVar5 = (long *)*plVar11;
          if (plVar5 != (long *)0x0) {
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          }
          if ((int)plVar12[3] == (int)plVar5[3]) {
            bVar3 = ABS(*(float *)((long)plVar12 + 0x14) - *param_3) <
                    ABS(*(float *)((long)plVar5 + 0x14) - *param_3);
          }
          else {
            bVar3 = (int)plVar5[3] < (int)plVar12[3];
          }
          iVar2 = (int)plVar5[1] + -1;
          *(int *)(plVar5 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
            (**(code **)(*plVar5 + 8))();
          }
          iVar2 = (int)plVar12[1] + -1;
          *(int *)(plVar12 + 1) = iVar2;
          plVar5 = plVar11;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
        else {
          if (plVar12 != (long *)0x0) {
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          }
          plVar4 = (long *)*plVar11;
          if (plVar4 != (long *)0x0) {
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          }
          if ((int)plVar12[3] == (int)plVar4[3]) {
            bVar3 = ABS(*(float *)((long)plVar12 + 0x14) - *param_3) <
                    ABS(*(float *)((long)plVar4 + 0x14) - *param_3);
          }
          else {
            bVar3 = (int)plVar4[3] < (int)plVar12[3];
          }
          iVar2 = (int)plVar4[1] + -1;
          *(int *)(plVar4 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
            (**(code **)(*plVar4 + 8))();
          }
          iVar2 = (int)plVar12[1] + -1;
          *(int *)(plVar12 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
            (**(code **)(*plVar12 + 8))(plVar12);
          }
          if (!bVar3) {
            return;
          }
          FUN_10930308c(plVar11,param_2);
          plVar12 = (long *)*plVar11;
          if (plVar12 != (long *)0x0) {
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          }
          plVar4 = (long *)*plVar5;
          if (plVar4 != (long *)0x0) {
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          }
          if ((int)plVar12[3] == (int)plVar4[3]) {
            bVar3 = ABS(*(float *)((long)plVar12 + 0x14) - *param_3) <
                    ABS(*(float *)((long)plVar4 + 0x14) - *param_3);
          }
          else {
            bVar3 = (int)plVar4[3] < (int)plVar12[3];
          }
          iVar2 = (int)plVar4[1] + -1;
          *(int *)(plVar4 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
            (**(code **)(*plVar4 + 8))();
          }
          iVar2 = (int)plVar12[1] + -1;
          *(int *)(plVar12 + 1) = iVar2;
          param_2 = plVar11;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
        if (!bVar3) {
          return;
        }
        goto code_r0x00010930308c;
      }
      if (uVar7 == 4) {
        plVar11 = param_2 + -1;
      }
      else {
        if (uVar7 != 5) goto LAB_109303ea0;
        unaff_x24 = param_2 + -1;
        unaff_x19 = plVar5 + 1;
        unaff_x22 = plVar5 + 2;
        plVar11 = plVar5 + 3;
        unaff_x29 = &stack0xfffffffffffffff0;
        unaff_x30 = 0x109305cc4;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        unaff_x20 = plVar5;
        unaff_x21 = param_3;
        unaff_x23 = plVar11;
      }
      plVar12 = plVar5 + 2;
      param_2 = plVar5 + 1;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(float **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      FUN_109305628();
      plVar4 = (long *)*plVar11;
      if (plVar4 != (long *)0x0) {
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      }
      plVar13 = (long *)*plVar12;
      if (plVar13 != (long *)0x0) {
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      }
      if ((int)plVar4[3] == (int)plVar13[3]) {
        bVar3 = ABS(*(float *)((long)plVar4 + 0x14) - *param_3) <
                ABS(*(float *)((long)plVar13 + 0x14) - *param_3);
      }
      else {
        bVar3 = (int)plVar13[3] < (int)plVar4[3];
      }
      iVar2 = (int)plVar13[1] + -1;
      *(int *)(plVar13 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
        (**(code **)(*plVar13 + 8))();
      }
      iVar2 = (int)plVar4[1] + -1;
      *(int *)(plVar4 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      if (bVar3) {
        FUN_10930308c(plVar12,plVar11);
        plVar11 = (long *)*plVar12;
        if (plVar11 != (long *)0x0) {
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        }
        plVar4 = (long *)*param_2;
        if (plVar4 != (long *)0x0) {
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        }
        if ((int)plVar11[3] == (int)plVar4[3]) {
          bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                  ABS(*(float *)((long)plVar4 + 0x14) - *param_3);
        }
        else {
          bVar3 = (int)plVar4[3] < (int)plVar11[3];
        }
        iVar2 = (int)plVar4[1] + -1;
        *(int *)(plVar4 + 1) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
          (**(code **)(*plVar4 + 8))();
        }
        iVar2 = (int)plVar11[1] + -1;
        *(int *)(plVar11 + 1) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
          (**(code **)(*plVar11 + 8))(plVar11);
        }
        if (bVar3) {
          FUN_10930308c(param_2,plVar12);
          plVar11 = (long *)*param_2;
          if (plVar11 != (long *)0x0) {
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          }
          plVar12 = (long *)*plVar5;
          if (plVar12 != (long *)0x0) {
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          }
          if ((int)plVar11[3] == (int)plVar12[3]) {
            bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                    ABS(*(float *)((long)plVar12 + 0x14) - *param_3);
          }
          else {
            bVar3 = (int)plVar12[3] < (int)plVar11[3];
          }
          iVar2 = (int)plVar12[1] + -1;
          *(int *)(plVar12 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
            (**(code **)(*plVar12 + 8))();
          }
          iVar2 = (int)plVar11[1] + -1;
          *(int *)(plVar11 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
            (**(code **)(*plVar11 + 8))(plVar11);
          }
          if (bVar3) {
            unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
            unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
            unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
code_r0x00010930308c:
            *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
            *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
            plVar11 = (long *)*plVar5;
            if (plVar11 != (long *)0x0) {
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            }
            FUN_109300090(plVar5,*param_2);
            FUN_109300090(param_2,plVar11);
            if ((plVar11 != (long *)0x0) &&
               (iVar2 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar2, iVar2 == 0)) {
              *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x000109303104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar11 + 8))(plVar11);
              return;
            }
            return;
          }
        }
      }
      return;
    }
    if (uVar7 < 2) {
      return;
    }
    if (uVar7 == 2) {
      param_2 = param_2 + -1;
      plVar11 = (long *)*param_2;
      if (plVar11 != (long *)0x0) {
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      }
      plVar12 = (long *)*plVar5;
      if (plVar12 != (long *)0x0) {
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      }
      if ((int)plVar11[3] == (int)plVar12[3]) {
        bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                ABS(*(float *)((long)plVar12 + 0x14) - *param_3);
      }
      else {
        bVar3 = (int)plVar12[3] < (int)plVar11[3];
      }
      iVar2 = (int)plVar12[1] + -1;
      *(int *)(plVar12 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
        (**(code **)(*plVar12 + 8))();
      }
      iVar2 = (int)plVar11[1] + -1;
      *(int *)(plVar11 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
        (**(code **)(*plVar11 + 8))(plVar11);
        if (!bVar3) {
          return;
        }
      }
      else if (!bVar3) {
        return;
      }
      goto code_r0x00010930308c;
    }
LAB_109303ea0:
    if ((long)uVar7 < 0x18) {
      plVar11 = plVar5 + 1;
      if ((param_5 & 1) == 0) {
        if (plVar5 == param_2 || plVar11 == param_2) {
          return;
        }
        do {
          plVar12 = plVar11;
          plVar11 = (long *)plVar5[1];
          if (plVar11 != (long *)0x0) {
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          }
          plVar5 = (long *)*plVar5;
          if (plVar5 != (long *)0x0) {
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          }
          if ((int)plVar11[3] == (int)plVar5[3]) {
            bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                    ABS(*(float *)((long)plVar5 + 0x14) - *param_3);
          }
          else {
            bVar3 = (int)plVar5[3] < (int)plVar11[3];
          }
          iVar2 = (int)plVar5[1] + -1;
          *(int *)(plVar5 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar5 + 1) = 0xdeadf001;
            (**(code **)(*plVar5 + 8))();
          }
          iVar2 = (int)plVar11[1] + -1;
          *(int *)(plVar11 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
            (**(code **)(*plVar11 + 8))(plVar11);
          }
          if (bVar3) {
            plVar11 = (long *)*plVar12;
            plVar5 = plVar12;
            if (plVar11 != (long *)0x0) {
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            }
            do {
              FUN_109300090(plVar5,plVar5[-1]);
              if (plVar11 != (long *)0x0) {
                *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              }
              plVar4 = (long *)plVar5[-2];
              if (plVar4 != (long *)0x0) {
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              }
              if ((int)plVar11[3] == (int)plVar4[3]) {
                bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                        ABS(*(float *)((long)plVar4 + 0x14) - *param_3);
              }
              else {
                bVar3 = (int)plVar4[3] < (int)plVar11[3];
              }
              iVar2 = (int)plVar4[1] + -1;
              *(int *)(plVar4 + 1) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
                (**(code **)(*plVar4 + 8))();
              }
              iVar2 = (int)plVar11[1] + -1;
              *(int *)(plVar11 + 1) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
                (**(code **)(*plVar11 + 8))(plVar11);
              }
              plVar5 = plVar5 + -1;
            } while (bVar3);
            FUN_109300090(plVar5,plVar11);
            iVar2 = (int)plVar11[1] + -1;
            *(int *)(plVar11 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
          plVar11 = plVar12 + 1;
          plVar5 = plVar12;
        } while (plVar12 + 1 != param_2);
        return;
      }
      if (plVar5 == param_2 || plVar11 == param_2) {
        return;
      }
      lVar10 = 0;
      plVar12 = plVar5;
      do {
        plVar4 = plVar11;
        plVar11 = (long *)plVar12[1];
        if (plVar11 != (long *)0x0) {
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 != (long *)0x0) {
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        }
        if ((int)plVar11[3] == (int)plVar12[3]) {
          bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                  ABS(*(float *)((long)plVar12 + 0x14) - *param_3);
        }
        else {
          bVar3 = (int)plVar12[3] < (int)plVar11[3];
        }
        iVar2 = (int)plVar12[1] + -1;
        *(int *)(plVar12 + 1) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
          (**(code **)(*plVar12 + 8))();
        }
        iVar2 = (int)plVar11[1] + -1;
        *(int *)(plVar11 + 1) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
          (**(code **)(*plVar11 + 8))(plVar11);
        }
        if (bVar3) {
          plVar11 = (long *)*plVar4;
          lVar14 = lVar10;
          if (plVar11 != (long *)0x0) {
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          }
          for (; FUN_109300090((undefined8 *)((long)plVar5 + lVar14) + 1,
                               *(undefined8 *)((long)plVar5 + lVar14)), plVar12 = plVar5,
              lVar14 != 0; lVar14 = lVar14 + -8) {
            if (plVar11 != (long *)0x0) {
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            }
            plVar12 = *(long **)((long)plVar5 + lVar14 + -8);
            if (plVar12 != (long *)0x0) {
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            }
            if ((int)plVar11[3] == (int)plVar12[3]) {
              bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                      ABS(*(float *)((long)plVar12 + 0x14) - *param_3);
            }
            else {
              bVar3 = (int)plVar12[3] < (int)plVar11[3];
            }
            iVar2 = (int)plVar12[1] + -1;
            *(int *)(plVar12 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
              (**(code **)(*plVar12 + 8))();
            }
            iVar2 = (int)plVar11[1] + -1;
            *(int *)(plVar11 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
              (**(code **)(*plVar11 + 8))(plVar11);
            }
            if (!bVar3) {
              plVar12 = (long *)((long)plVar5 + lVar14);
              break;
            }
          }
          FUN_109300090(plVar12,plVar11);
          if ((plVar11 != (long *)0x0) &&
             (iVar2 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar2, iVar2 == 0)) {
            *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
            (**(code **)(*plVar11 + 8))(plVar11);
          }
        }
        lVar10 = lVar10 + 8;
        plVar11 = plVar4 + 1;
        plVar12 = plVar4;
        if (plVar4 + 1 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_4 == 0) {
      if (plVar5 == param_2) {
        return;
      }
      uVar6 = uVar7 - 2 >> 1;
      uVar9 = uVar6;
      do {
        if ((long)uVar9 <= (long)uVar6) {
          uVar8 = uVar9 << 1 | 1;
          plVar11 = plVar5 + uVar8;
          uVar16 = uVar9 * 2 + 2;
          if ((long)uVar16 < (long)uVar7) {
            plVar12 = (long *)*plVar11;
            if (plVar12 != (long *)0x0) {
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            }
            plVar4 = (long *)plVar11[1];
            if (plVar4 != (long *)0x0) {
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            }
            if ((int)plVar12[3] == (int)plVar4[3]) {
              bVar3 = ABS(*(float *)((long)plVar12 + 0x14) - *param_3) <
                      ABS(*(float *)((long)plVar4 + 0x14) - *param_3);
            }
            else {
              bVar3 = (int)plVar4[3] < (int)plVar12[3];
            }
            iVar2 = (int)plVar4[1] + -1;
            *(int *)(plVar4 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
              (**(code **)(*plVar4 + 8))();
            }
            iVar2 = (int)plVar12[1] + -1;
            *(int *)(plVar12 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
              (**(code **)(*plVar12 + 8))(plVar12);
            }
            if (bVar3) {
              uVar8 = uVar16;
              plVar11 = plVar11 + 1;
            }
          }
          plVar12 = (long *)*plVar11;
          if (plVar12 != (long *)0x0) {
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          }
          plVar4 = plVar5 + uVar9;
          plVar13 = (long *)*plVar4;
          if (plVar13 != (long *)0x0) {
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          }
          if ((int)plVar12[3] == (int)plVar13[3]) {
            bVar3 = ABS(*(float *)((long)plVar12 + 0x14) - *param_3) <
                    ABS(*(float *)((long)plVar13 + 0x14) - *param_3);
          }
          else {
            bVar3 = (int)plVar13[3] < (int)plVar12[3];
          }
          iVar2 = (int)plVar13[1] + -1;
          *(int *)(plVar13 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
            (**(code **)(*plVar13 + 8))();
          }
          iVar2 = (int)plVar12[1] + -1;
          *(int *)(plVar12 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
            (**(code **)(*plVar12 + 8))(plVar12);
          }
          if (!bVar3) {
            plVar12 = (long *)*plVar4;
            if (plVar12 != (long *)0x0) {
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            }
            do {
              plVar13 = plVar11;
              FUN_109300090(plVar4,*plVar13);
              if ((long)uVar6 < (long)uVar8) break;
              uVar1 = uVar8 << 1 | 1;
              plVar11 = plVar5 + uVar1;
              uVar16 = uVar8 * 2 + 2;
              uVar8 = uVar1;
              if ((long)uVar16 < (long)uVar7) {
                plVar4 = (long *)*plVar11;
                if (plVar4 != (long *)0x0) {
                  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                }
                plVar15 = (long *)plVar11[1];
                if (plVar15 != (long *)0x0) {
                  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                }
                if ((int)plVar4[3] == (int)plVar15[3]) {
                  bVar3 = ABS(*(float *)((long)plVar4 + 0x14) - *param_3) <
                          ABS(*(float *)((long)plVar15 + 0x14) - *param_3);
                }
                else {
                  bVar3 = (int)plVar15[3] < (int)plVar4[3];
                }
                iVar2 = (int)plVar15[1] + -1;
                *(int *)(plVar15 + 1) = iVar2;
                if (iVar2 == 0) {
                  *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
                  (**(code **)(*plVar15 + 8))();
                }
                iVar2 = (int)plVar4[1] + -1;
                *(int *)(plVar4 + 1) = iVar2;
                if (iVar2 == 0) {
                  *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
                  (**(code **)(*plVar4 + 8))(plVar4);
                }
                if (bVar3) {
                  uVar8 = uVar16;
                  plVar11 = plVar11 + 1;
                }
              }
              plVar4 = (long *)*plVar11;
              if (plVar4 != (long *)0x0) {
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              }
              if (plVar12 != (long *)0x0) {
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              }
              if ((int)plVar4[3] == (int)plVar12[3]) {
                bVar3 = ABS(*(float *)((long)plVar4 + 0x14) - *param_3) <
                        ABS(*(float *)((long)plVar12 + 0x14) - *param_3);
              }
              else {
                bVar3 = (int)plVar12[3] < (int)plVar4[3];
              }
              iVar2 = (int)plVar12[1] + -1;
              *(int *)(plVar12 + 1) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
                (**(code **)(*plVar12 + 8))(plVar12);
              }
              iVar2 = (int)plVar4[1] + -1;
              *(int *)(plVar4 + 1) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
                (**(code **)(*plVar4 + 8))(plVar4);
              }
              plVar4 = plVar13;
            } while (!bVar3);
            FUN_109300090(plVar13,plVar12);
            if ((plVar12 != (long *)0x0) &&
               (iVar2 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar2, iVar2 == 0)) {
              *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
              (**(code **)(*plVar12 + 8))(plVar12);
            }
          }
        }
        bVar3 = uVar9 != 0;
        uVar9 = uVar9 - 1;
      } while (bVar3);
      do {
        plVar11 = (long *)*plVar5;
        if (plVar11 != (long *)0x0) {
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        }
        plVar12 = plVar5;
        uVar9 = 0;
        do {
          plVar4 = plVar12 + uVar9 + 1;
          uVar16 = uVar9 << 1 | 1;
          uVar6 = uVar9 * 2 + 2;
          if ((long)uVar6 < (long)uVar7) {
            plVar13 = (long *)*plVar4;
            if (plVar13 != (long *)0x0) {
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            }
            plVar15 = (long *)plVar12[uVar9 + 2];
            if (plVar15 != (long *)0x0) {
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            }
            if ((int)plVar13[3] == (int)plVar15[3]) {
              bVar3 = ABS(*(float *)((long)plVar13 + 0x14) - *param_3) <
                      ABS(*(float *)((long)plVar15 + 0x14) - *param_3);
            }
            else {
              bVar3 = (int)plVar15[3] < (int)plVar13[3];
            }
            iVar2 = (int)plVar15[1] + -1;
            *(int *)(plVar15 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
              (**(code **)(*plVar15 + 8))();
            }
            iVar2 = (int)plVar13[1] + -1;
            *(int *)(plVar13 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
              (**(code **)(*plVar13 + 8))(plVar13);
            }
            if (bVar3) {
              plVar4 = plVar12 + uVar9 + 2;
              uVar16 = uVar6;
            }
          }
          FUN_109300090(plVar12,*plVar4);
          plVar12 = plVar4;
          uVar9 = uVar16;
        } while ((long)uVar16 <= (long)(uVar7 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar4 == param_2) {
          FUN_109300090(plVar4,plVar11);
        }
        else {
          FUN_109300090(plVar4,*param_2);
          FUN_109300090(param_2,plVar11);
          lVar10 = (long)plVar4 + (8 - (long)plVar5) >> 3;
          if (1 < lVar10) {
            uVar9 = lVar10 - 2U >> 1;
            plVar12 = plVar5 + uVar9;
            plVar13 = (long *)*plVar12;
            if (plVar13 != (long *)0x0) {
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            }
            plVar15 = (long *)*plVar4;
            if (plVar15 != (long *)0x0) {
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            }
            if ((int)plVar13[3] == (int)plVar15[3]) {
              bVar3 = ABS(*(float *)((long)plVar13 + 0x14) - *param_3) <
                      ABS(*(float *)((long)plVar15 + 0x14) - *param_3);
            }
            else {
              bVar3 = (int)plVar15[3] < (int)plVar13[3];
            }
            iVar2 = (int)plVar15[1] + -1;
            *(int *)(plVar15 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
              (**(code **)(*plVar15 + 8))();
            }
            iVar2 = (int)plVar13[1] + -1;
            *(int *)(plVar13 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
              (**(code **)(*plVar13 + 8))(plVar13);
            }
            if (bVar3) {
              plVar13 = (long *)*plVar4;
              if (plVar13 != (long *)0x0) {
                *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              }
              do {
                plVar15 = plVar12;
                FUN_109300090(plVar4,*plVar15);
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1 >> 1;
                plVar12 = (long *)plVar5[uVar9];
                if (plVar12 != (long *)0x0) {
                  *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                }
                if (plVar13 != (long *)0x0) {
                  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
                }
                if ((int)plVar12[3] == (int)plVar13[3]) {
                  bVar3 = ABS(*(float *)((long)plVar12 + 0x14) - *param_3) <
                          ABS(*(float *)((long)plVar13 + 0x14) - *param_3);
                }
                else {
                  bVar3 = (int)plVar13[3] < (int)plVar12[3];
                }
                iVar2 = (int)plVar13[1] + -1;
                *(int *)(plVar13 + 1) = iVar2;
                if (iVar2 == 0) {
                  *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
                  (**(code **)(*plVar13 + 8))(plVar13);
                }
                iVar2 = (int)plVar12[1] + -1;
                *(int *)(plVar12 + 1) = iVar2;
                if (iVar2 == 0) {
                  *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
                  (**(code **)(*plVar12 + 8))(plVar12);
                }
                plVar4 = plVar15;
                plVar12 = plVar5 + uVar9;
              } while (bVar3);
              FUN_109300090(plVar15,plVar13);
              if ((plVar13 != (long *)0x0) &&
                 (iVar2 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar2, iVar2 == 0)) {
                *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
                (**(code **)(*plVar13 + 8))(plVar13);
              }
            }
          }
        }
        if ((plVar11 != (long *)0x0) &&
           (iVar2 = (int)plVar11[1] + -1, *(int *)(plVar11 + 1) = iVar2, iVar2 == 0)) {
          *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
          (**(code **)(*plVar11 + 8))(plVar11);
        }
        bVar3 = (long)uVar7 < 3;
        uVar7 = uVar7 - 1;
        if (bVar3) {
          return;
        }
      } while( true );
    }
    plVar11 = plVar5 + (uVar7 >> 1);
    plVar12 = param_2 + -1;
    if (uVar7 < 0x81) {
      FUN_109305628(plVar11,plVar5,plVar12,param_3);
    }
    else {
      FUN_109305628(plVar5,plVar11,plVar12,param_3);
      FUN_109305628(plVar5 + 1,plVar11 + -1,param_2 + -2,param_3);
      FUN_109305628(plVar5 + 2,plVar11 + 1,param_2 + -3,param_3);
      FUN_109305628(plVar11 + -1,plVar11,plVar11 + 1,param_3);
      FUN_109303990(plVar5,plVar11);
    }
    param_4 = param_4 + -1;
    param_1 = plVar5;
    if ((param_5 & 1) == 0) {
      plVar11 = (long *)plVar5[-1];
      if (plVar11 != (long *)0x0) {
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      }
      plVar4 = (long *)*plVar5;
      if (plVar4 != (long *)0x0) {
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      }
      if ((int)plVar11[3] == (int)plVar4[3]) {
        bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                ABS(*(float *)((long)plVar4 + 0x14) - *param_3);
      }
      else {
        bVar3 = (int)plVar4[3] < (int)plVar11[3];
      }
      iVar2 = (int)plVar4[1] + -1;
      *(int *)(plVar4 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      iVar2 = (int)plVar11[1] + -1;
      *(int *)(plVar11 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
        (**(code **)(*plVar11 + 8))(plVar11);
      }
      if (!bVar3) {
        plVar11 = (long *)*plVar5;
        if (plVar11 != (long *)0x0) {
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 2;
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 != (long *)0x0) {
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        }
        if ((int)plVar11[3] == (int)plVar12[3]) {
          bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                  ABS(*(float *)((long)plVar12 + 0x14) - *param_3);
        }
        else {
          bVar3 = (int)plVar12[3] < (int)plVar11[3];
        }
        iVar2 = (int)plVar12[1] + -1;
        *(int *)(plVar12 + 1) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
          (**(code **)(*plVar12 + 8))();
        }
        iVar2 = (int)plVar11[1] + -1;
        *(int *)(plVar11 + 1) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
          (**(code **)(*plVar11 + 8))(plVar11);
        }
        if (bVar3) {
          do {
            while( true ) {
              param_1 = param_1 + 1;
              plVar12 = (long *)*param_1;
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              if (plVar12 != (long *)0x0) {
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              }
              if ((int)plVar11[3] == (int)plVar12[3]) {
                bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                        ABS(*(float *)((long)plVar12 + 0x14) - *param_3);
              }
              else {
                bVar3 = (int)plVar12[3] < (int)plVar11[3];
              }
              iVar2 = (int)plVar12[1] + -1;
              *(int *)(plVar12 + 1) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
                (**(code **)(*plVar12 + 8))();
              }
              iVar2 = (int)plVar11[1] + -1;
              *(int *)(plVar11 + 1) = iVar2;
              if (iVar2 == 0) break;
              if (bVar3) goto LAB_1093045ac;
            }
            *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
            (**(code **)(*plVar11 + 8))(plVar11);
          } while (!bVar3);
        }
        else {
          do {
            param_1 = param_1 + 1;
            if (param_2 <= param_1) break;
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            plVar12 = (long *)*param_1;
            if (plVar12 != (long *)0x0) {
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            }
            if ((int)plVar11[3] == (int)plVar12[3]) {
              bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                      ABS(*(float *)((long)plVar12 + 0x14) - *param_3);
            }
            else {
              bVar3 = (int)plVar12[3] < (int)plVar11[3];
            }
            iVar2 = (int)plVar12[1] + -1;
            *(int *)(plVar12 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
              (**(code **)(*plVar12 + 8))();
            }
            iVar2 = (int)plVar11[1] + -1;
            *(int *)(plVar11 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          } while (!bVar3);
        }
LAB_1093045ac:
        plVar12 = param_2;
        if (param_1 < param_2) {
          do {
            while( true ) {
              plVar12 = plVar12 + -1;
              plVar4 = (long *)*plVar12;
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              if (plVar4 != (long *)0x0) {
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              }
              if ((int)plVar11[3] == (int)plVar4[3]) {
                bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                        ABS(*(float *)((long)plVar4 + 0x14) - *param_3);
              }
              else {
                bVar3 = (int)plVar4[3] < (int)plVar11[3];
              }
              iVar2 = (int)plVar4[1] + -1;
              *(int *)(plVar4 + 1) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
                (**(code **)(*plVar4 + 8))();
              }
              iVar2 = (int)plVar11[1] + -1;
              *(int *)(plVar11 + 1) = iVar2;
              if (iVar2 == 0) break;
              if (!bVar3) goto LAB_1093047b4;
            }
            *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
            (**(code **)(*plVar11 + 8))(plVar11);
          } while (bVar3);
        }
LAB_1093047b4:
        while (param_1 < plVar12) {
          FUN_10930308c(param_1,plVar12);
          do {
            while( true ) {
              param_1 = param_1 + 1;
              plVar4 = (long *)*param_1;
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              if (plVar4 != (long *)0x0) {
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              }
              if ((int)plVar11[3] == (int)plVar4[3]) {
                bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                        ABS(*(float *)((long)plVar4 + 0x14) - *param_3);
              }
              else {
                bVar3 = (int)plVar4[3] < (int)plVar11[3];
              }
              iVar2 = (int)plVar4[1] + -1;
              *(int *)(plVar4 + 1) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
                (**(code **)(*plVar4 + 8))();
              }
              iVar2 = (int)plVar11[1] + -1;
              *(int *)(plVar11 + 1) = iVar2;
              if (iVar2 == 0) break;
              if (bVar3) goto LAB_109304718;
            }
            *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
            (**(code **)(*plVar11 + 8))(plVar11);
          } while (!bVar3);
LAB_109304718:
          do {
            plVar12 = plVar12 + -1;
            plVar4 = (long *)*plVar12;
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            if (plVar4 != (long *)0x0) {
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            }
            if ((int)plVar11[3] == (int)plVar4[3]) {
              bVar3 = ABS(*(float *)((long)plVar11 + 0x14) - *param_3) <
                      ABS(*(float *)((long)plVar4 + 0x14) - *param_3);
            }
            else {
              bVar3 = (int)plVar4[3] < (int)plVar11[3];
            }
            iVar2 = (int)plVar4[1] + -1;
            *(int *)(plVar4 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
              (**(code **)(*plVar4 + 8))();
            }
            iVar2 = (int)plVar11[1] + -1;
            *(int *)(plVar11 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          } while (bVar3);
        }
        plVar12 = param_1 + -1;
        if (plVar12 != plVar5) {
          FUN_109300090(plVar5,*plVar12);
        }
        FUN_109300090(plVar12,plVar11);
        param_5 = 0;
        iVar2 = (int)plVar11[1] + -1;
        *(int *)(plVar11 + 1) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
          (**(code **)(*plVar11 + 8))(plVar11);
          param_5 = 0;
        }
        goto LAB_109303e68;
      }
    }
    plVar11 = (long *)*plVar5;
    if (plVar11 != (long *)0x0) {
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    }
    lVar10 = 0;
    do {
      plVar4 = *(long **)((long)plVar5 + lVar10 + 8);
      if (plVar4 != (long *)0x0) {
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      }
      if (plVar11 != (long *)0x0) {
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      }
      if ((int)plVar4[3] == (int)plVar11[3]) {
        bVar3 = ABS(*(float *)((long)plVar4 + 0x14) - *param_3) <
                ABS(*(float *)((long)plVar11 + 0x14) - *param_3);
      }
      else {
        bVar3 = (int)plVar11[3] < (int)plVar4[3];
      }
      iVar2 = (int)plVar11[1] + -1;
      *(int *)(plVar11 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
        (**(code **)(*plVar11 + 8))(plVar11);
      }
      iVar2 = (int)plVar4[1] + -1;
      *(int *)(plVar4 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      lVar10 = lVar10 + 8;
    } while (bVar3);
    plVar4 = (long *)((long)plVar5 + lVar10);
    plVar13 = param_2;
    if (lVar10 == 8) {
      if (plVar4 < param_2) {
        while( true ) {
          plVar13 = (long *)*plVar12;
          if (plVar13 != (long *)0x0) {
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          }
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          if ((int)plVar13[3] == (int)plVar11[3]) {
            bVar3 = ABS(*(float *)((long)plVar13 + 0x14) - *param_3) <
                    ABS(*(float *)((long)plVar11 + 0x14) - *param_3);
          }
          else {
            bVar3 = (int)plVar11[3] < (int)plVar13[3];
          }
          iVar2 = (int)plVar11[1] + -1;
          *(int *)(plVar11 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
            (**(code **)(*plVar11 + 8))(plVar11);
          }
          iVar2 = (int)plVar13[1] + -1;
          *(int *)(plVar13 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar13 + 1) = 0xdeadf001;
            (**(code **)(*plVar13 + 8))(plVar13);
          }
          if (plVar12 <= plVar4) {
            bVar3 = true;
          }
          plVar13 = plVar12;
          if (bVar3) break;
          plVar12 = plVar12 + -1;
        }
      }
    }
    else {
      do {
        while( true ) {
          plVar13 = plVar13 + -1;
          plVar12 = (long *)*plVar13;
          if (plVar12 != (long *)0x0) {
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          }
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          if ((int)plVar12[3] == (int)plVar11[3]) {
            bVar3 = ABS(*(float *)((long)plVar12 + 0x14) - *param_3) <
                    ABS(*(float *)((long)plVar11 + 0x14) - *param_3);
          }
          else {
            bVar3 = (int)plVar11[3] < (int)plVar12[3];
          }
          iVar2 = (int)plVar11[1] + -1;
          *(int *)(plVar11 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
            (**(code **)(*plVar11 + 8))(plVar11);
          }
          iVar2 = (int)plVar12[1] + -1;
          *(int *)(plVar12 + 1) = iVar2;
          if (iVar2 == 0) break;
          if (bVar3) goto LAB_109304234;
        }
        *(undefined4 *)(plVar12 + 1) = 0xdeadf001;
        (**(code **)(*plVar12 + 8))(plVar12);
      } while (!bVar3);
    }
LAB_109304234:
    param_1 = plVar4;
    plVar12 = plVar13;
    if (plVar4 < plVar13) {
      do {
        FUN_10930308c(param_1,plVar12);
        do {
          while( true ) {
            param_1 = param_1 + 1;
            plVar15 = (long *)*param_1;
            if (plVar15 != (long *)0x0) {
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            }
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            if ((int)plVar15[3] == (int)plVar11[3]) {
              bVar3 = ABS(*(float *)((long)plVar15 + 0x14) - *param_3) <
                      ABS(*(float *)((long)plVar11 + 0x14) - *param_3);
            }
            else {
              bVar3 = (int)plVar11[3] < (int)plVar15[3];
            }
            iVar2 = (int)plVar11[1] + -1;
            *(int *)(plVar11 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
              (**(code **)(*plVar11 + 8))(plVar11);
            }
            iVar2 = (int)plVar15[1] + -1;
            *(int *)(plVar15 + 1) = iVar2;
            if (iVar2 == 0) break;
            if (!bVar3) goto LAB_109304314;
          }
          *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
          (**(code **)(*plVar15 + 8))(plVar15);
        } while (bVar3);
LAB_109304314:
        do {
          plVar12 = plVar12 + -1;
          plVar15 = (long *)*plVar12;
          if (plVar15 != (long *)0x0) {
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          }
          if (plVar11 != (long *)0x0) {
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          }
          if ((int)plVar15[3] == (int)plVar11[3]) {
            bVar3 = ABS(*(float *)((long)plVar15 + 0x14) - *param_3) <
                    ABS(*(float *)((long)plVar11 + 0x14) - *param_3);
          }
          else {
            bVar3 = (int)plVar11[3] < (int)plVar15[3];
          }
          iVar2 = (int)plVar11[1] + -1;
          *(int *)(plVar11 + 1) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
            (**(code **)(*plVar11 + 8))(plVar11);
          }
          iVar2 = (int)plVar15[1] + -1;
          *(int *)(plVar15 + 1) = iVar2;
          if (iVar2 != 0) {
            if (bVar3) break;
            goto LAB_109304314;
          }
          *(undefined4 *)(plVar15 + 1) = 0xdeadf001;
          (**(code **)(*plVar15 + 8))(plVar15);
        } while (!bVar3);
      } while (param_1 < plVar12);
    }
    plVar12 = param_1 + -1;
    if (plVar12 != plVar5) {
      FUN_109300090(plVar5,*plVar12);
    }
    FUN_109300090(plVar12,plVar11);
    iVar2 = (int)plVar11[1] + -1;
    *(int *)(plVar11 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(plVar11 + 1) = 0xdeadf001;
      (**(code **)(*plVar11 + 8))(plVar11);
    }
    if (plVar4 < plVar13) {
LAB_10930443c:
      FUN_109303e20(plVar5,plVar12,param_3,param_4,param_5 & 1);
      param_5 = 0;
    }
    else {
      plVar11 = plVar5;
      FUN_109305fdc(plVar5,plVar12,param_3);
      plVar4 = param_1;
      FUN_109305fdc(param_1,param_2,param_3);
      if ((int)plVar4 == 0) {
        if (((ulong)plVar11 & 1) == 0) goto LAB_10930443c;
      }
      else {
        param_2 = plVar12;
        param_1 = plVar5;
        if (((ulong)plVar11 & 1) != 0) {
          return;
        }
      }
    }
  } while( true );
}



/* Entry: 109305628; end: 109305c87;  */

void FUN_109305628(long *param_1,long *param_2,long *param_3,float *param_4)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_2;
  if (plVar4 != (long *)0x0) {
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  }
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  }
  if ((int)plVar4[3] == (int)plVar3[3]) {
    bVar2 = ABS(*(float *)((long)plVar4 + 0x14) - *param_4) <
            ABS(*(float *)((long)plVar3 + 0x14) - *param_4);
  }
  else {
    bVar2 = (int)plVar3[3] < (int)plVar4[3];
  }
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))();
  }
  iVar1 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  plVar4 = (long *)*param_3;
  if (bVar2) {
    if (plVar4 != (long *)0x0) {
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    }
    plVar3 = (long *)*param_2;
    if (plVar3 != (long *)0x0) {
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
    if ((int)plVar4[3] == (int)plVar3[3]) {
      bVar2 = ABS(*(float *)((long)plVar4 + 0x14) - *param_4) <
              ABS(*(float *)((long)plVar3 + 0x14) - *param_4);
    }
    else {
      bVar2 = (int)plVar3[3] < (int)plVar4[3];
    }
    iVar1 = (int)plVar3[1] + -1;
    *(int *)(plVar3 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
      (**(code **)(*plVar3 + 8))();
    }
    iVar1 = (int)plVar4[1] + -1;
    *(int *)(plVar4 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    if (bVar2) goto LAB_1093059cc;
    FUN_10930308c(param_1,param_2);
    plVar4 = (long *)*param_3;
    if (plVar4 != (long *)0x0) {
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    }
    plVar3 = (long *)*param_2;
    if (plVar3 != (long *)0x0) {
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
    if ((int)plVar4[3] == (int)plVar3[3]) {
      bVar2 = ABS(*(float *)((long)plVar4 + 0x14) - *param_4) <
              ABS(*(float *)((long)plVar3 + 0x14) - *param_4);
    }
    else {
      bVar2 = (int)plVar3[3] < (int)plVar4[3];
    }
    iVar1 = (int)plVar3[1] + -1;
    *(int *)(plVar3 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
      (**(code **)(*plVar3 + 8))();
    }
    iVar1 = (int)plVar4[1] + -1;
    *(int *)(plVar4 + 1) = iVar1;
    param_1 = param_2;
    if (iVar1 == 0) {
      *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  else {
    if (plVar4 != (long *)0x0) {
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    }
    plVar3 = (long *)*param_2;
    if (plVar3 != (long *)0x0) {
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
    if ((int)plVar4[3] == (int)plVar3[3]) {
      bVar2 = ABS(*(float *)((long)plVar4 + 0x14) - *param_4) <
              ABS(*(float *)((long)plVar3 + 0x14) - *param_4);
    }
    else {
      bVar2 = (int)plVar3[3] < (int)plVar4[3];
    }
    iVar1 = (int)plVar3[1] + -1;
    *(int *)(plVar3 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
      (**(code **)(*plVar3 + 8))();
    }
    iVar1 = (int)plVar4[1] + -1;
    *(int *)(plVar4 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    if (!bVar2) {
      return;
    }
    FUN_10930308c(param_2,param_3);
    plVar4 = (long *)*param_2;
    if (plVar4 != (long *)0x0) {
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    }
    plVar3 = (long *)*param_1;
    if (plVar3 != (long *)0x0) {
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
    if ((int)plVar4[3] == (int)plVar3[3]) {
      bVar2 = ABS(*(float *)((long)plVar4 + 0x14) - *param_4) <
              ABS(*(float *)((long)plVar3 + 0x14) - *param_4);
    }
    else {
      bVar2 = (int)plVar3[3] < (int)plVar4[3];
    }
    iVar1 = (int)plVar3[1] + -1;
    *(int *)(plVar3 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
      (**(code **)(*plVar3 + 8))();
    }
    iVar1 = (int)plVar4[1] + -1;
    *(int *)(plVar4 + 1) = iVar1;
    param_3 = param_2;
    if (iVar1 == 0) {
      *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  if (!bVar2) {
    return;
  }
LAB_1093059cc:
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  }
  FUN_109300090(param_1,*param_3);
  FUN_109300090(param_3,plVar4);
  if ((plVar4 != (long *)0x0) &&
     (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x000109303104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))(plVar4);
    return;
  }
  return;
}



/* Entry: 109305c88; end: 109305fdb;  */

void FUN_109305c88(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5,
                  float *param_6)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  func_0x0001093059fc();
  plVar4 = (long *)*param_5;
  if (plVar4 != (long *)0x0) {
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  }
  plVar3 = (long *)*param_4;
  if (plVar3 != (long *)0x0) {
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
  }
  if ((int)plVar4[3] == (int)plVar3[3]) {
    bVar2 = ABS(*(float *)((long)plVar4 + 0x14) - *param_6) <
            ABS(*(float *)((long)plVar3 + 0x14) - *param_6);
  }
  else {
    bVar2 = (int)plVar3[3] < (int)plVar4[3];
  }
  iVar1 = (int)plVar3[1] + -1;
  *(int *)(plVar3 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
    (**(code **)(*plVar3 + 8))();
  }
  iVar1 = (int)plVar4[1] + -1;
  *(int *)(plVar4 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  if (bVar2) {
    FUN_10930308c(param_4,param_5);
    plVar4 = (long *)*param_4;
    if (plVar4 != (long *)0x0) {
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    }
    plVar3 = (long *)*param_3;
    if (plVar3 != (long *)0x0) {
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    }
    if ((int)plVar4[3] == (int)plVar3[3]) {
      bVar2 = ABS(*(float *)((long)plVar4 + 0x14) - *param_6) <
              ABS(*(float *)((long)plVar3 + 0x14) - *param_6);
    }
    else {
      bVar2 = (int)plVar3[3] < (int)plVar4[3];
    }
    iVar1 = (int)plVar3[1] + -1;
    *(int *)(plVar3 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
      (**(code **)(*plVar3 + 8))();
    }
    iVar1 = (int)plVar4[1] + -1;
    *(int *)(plVar4 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    if (bVar2) {
      FUN_10930308c(param_3,param_4);
      plVar4 = (long *)*param_3;
      if (plVar4 != (long *)0x0) {
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      }
      plVar3 = (long *)*param_2;
      if (plVar3 != (long *)0x0) {
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      }
      if ((int)plVar4[3] == (int)plVar3[3]) {
        bVar2 = ABS(*(float *)((long)plVar4 + 0x14) - *param_6) <
                ABS(*(float *)((long)plVar3 + 0x14) - *param_6);
      }
      else {
        bVar2 = (int)plVar3[3] < (int)plVar4[3];
      }
      iVar1 = (int)plVar3[1] + -1;
      *(int *)(plVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
        (**(code **)(*plVar3 + 8))();
      }
      iVar1 = (int)plVar4[1] + -1;
      *(int *)(plVar4 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      if (bVar2) {
        FUN_10930308c(param_2,param_3);
        plVar4 = (long *)*param_2;
        if (plVar4 != (long *)0x0) {
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        }
        plVar3 = (long *)*param_1;
        if (plVar3 != (long *)0x0) {
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        }
        if ((int)plVar4[3] == (int)plVar3[3]) {
          bVar2 = ABS(*(float *)((long)plVar4 + 0x14) - *param_6) <
                  ABS(*(float *)((long)plVar3 + 0x14) - *param_6);
        }
        else {
          bVar2 = (int)plVar3[3] < (int)plVar4[3];
        }
        iVar1 = (int)plVar3[1] + -1;
        *(int *)(plVar3 + 1) = iVar1;
        if (iVar1 == 0) {
          *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
          (**(code **)(*plVar3 + 8))();
        }
        iVar1 = (int)plVar4[1] + -1;
        *(int *)(plVar4 + 1) = iVar1;
        if (iVar1 == 0) {
          *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        if (bVar2) {
          plVar4 = (long *)*param_1;
          if (plVar4 != (long *)0x0) {
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          }
          FUN_109300090(param_1,*param_2);
          FUN_109300090(param_2,plVar4);
          if ((plVar4 != (long *)0x0) &&
             (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
            *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
                    /* WARNING: Could not recover jumptable at 0x000109303104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 8))(plVar4);
            return;
          }
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 109305fdc; end: 1093063f3;  */

bool FUN_109305fdc(long *param_1,long *param_2,float *param_3)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  uVar5 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      plVar6 = (long *)param_2[-1];
      if (plVar6 != (long *)0x0) {
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      }
      plVar3 = (long *)*param_1;
      if (plVar3 != (long *)0x0) {
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      }
      if ((int)plVar6[3] == (int)plVar3[3]) {
        bVar2 = ABS(*(float *)((long)plVar6 + 0x14) - *param_3) <
                ABS(*(float *)((long)plVar3 + 0x14) - *param_3);
      }
      else {
        bVar2 = (int)plVar3[3] < (int)plVar6[3];
      }
      iVar9 = (int)plVar3[1] + -1;
      *(int *)(plVar3 + 1) = iVar9;
      if (iVar9 == 0) {
        *(undefined4 *)(plVar3 + 1) = 0xdeadf001;
        (**(code **)(*plVar3 + 8))();
      }
      iVar9 = (int)plVar6[1] + -1;
      *(int *)(plVar6 + 1) = iVar9;
      if (iVar9 == 0) {
        *(undefined4 *)(plVar6 + 1) = 0xdeadf001;
        (**(code **)(*plVar6 + 8))(plVar6);
      }
      if (!bVar2) {
        return true;
      }
      FUN_10930308c(param_1,param_2 + -1);
      return true;
    }
  }
  else {
    if (uVar5 == 3) {
      FUN_109305628(param_1,param_1 + 1,param_2 + -1,param_3);
      return true;
    }
    if (uVar5 == 4) {
      func_0x0001093059fc(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
      return true;
    }
    if (uVar5 == 5) {
      FUN_109305c88(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
      return true;
    }
  }
  FUN_109305628(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar8 = 0;
    iVar9 = 0;
    plVar6 = param_1 + 2;
    plVar3 = param_1 + 3;
    do {
      plVar7 = (long *)*plVar3;
      if (plVar7 != (long *)0x0) {
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      }
      plVar4 = (long *)*plVar6;
      if (plVar4 != (long *)0x0) {
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      }
      if ((int)plVar7[3] == (int)plVar4[3]) {
        bVar2 = ABS(*(float *)((long)plVar7 + 0x14) - *param_3) <
                ABS(*(float *)((long)plVar4 + 0x14) - *param_3);
      }
      else {
        bVar2 = (int)plVar4[3] < (int)plVar7[3];
      }
      iVar1 = (int)plVar4[1] + -1;
      *(int *)(plVar4 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
        (**(code **)(*plVar4 + 8))();
      }
      iVar1 = (int)plVar7[1] + -1;
      *(int *)(plVar7 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(plVar7 + 1) = 0xdeadf001;
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      if (bVar2) {
        plVar7 = (long *)*plVar3;
        lVar10 = lVar8;
        if (plVar7 != (long *)0x0) {
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        }
        for (; FUN_109300090((long)param_1 + lVar10 + 0x18,
                             *(undefined8 *)((long)param_1 + lVar10 + 0x10)), plVar4 = param_1,
            lVar10 != -0x10; lVar10 = lVar10 + -8) {
          if (plVar7 != (long *)0x0) {
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          }
          plVar4 = *(long **)((long)param_1 + lVar10 + 8);
          if (plVar4 != (long *)0x0) {
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          }
          if ((int)plVar7[3] == (int)plVar4[3]) {
            bVar2 = ABS(*(float *)((long)plVar7 + 0x14) - *param_3) <
                    ABS(*(float *)((long)plVar4 + 0x14) - *param_3);
          }
          else {
            bVar2 = (int)plVar4[3] < (int)plVar7[3];
          }
          iVar1 = (int)plVar4[1] + -1;
          *(int *)(plVar4 + 1) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)(plVar4 + 1) = 0xdeadf001;
            (**(code **)(*plVar4 + 8))();
          }
          iVar1 = (int)plVar7[1] + -1;
          *(int *)(plVar7 + 1) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)(plVar7 + 1) = 0xdeadf001;
            (**(code **)(*plVar7 + 8))(plVar7);
            plVar4 = plVar6;
            if (!bVar2) break;
          }
          else if (!bVar2) {
            plVar4 = (long *)((long)param_1 + lVar10 + 0x10);
            break;
          }
          plVar6 = plVar6 + -1;
        }
        FUN_109300090(plVar4,plVar7);
        if ((plVar7 != (long *)0x0) &&
           (iVar1 = (int)plVar7[1] + -1, *(int *)(plVar7 + 1) = iVar1, iVar1 == 0)) {
          *(undefined4 *)(plVar7 + 1) = 0xdeadf001;
          (**(code **)(*plVar7 + 8))(plVar7);
        }
        iVar9 = iVar9 + 1;
        if (iVar9 == 8) {
          return plVar3 + 1 == param_2;
        }
      }
      plVar7 = plVar3 + 1;
      lVar8 = lVar8 + 8;
      plVar6 = plVar3;
      plVar3 = plVar7;
    } while (plVar7 != param_2);
  }
  return true;
}



/* Entry: 1093063f4; end: 10930645b;  */

undefined8 * FUN_1093063f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  param_1[1] = puVar1 + 3;
  param_1[2] = puVar1 + 3;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *param_1 = puVar1;
  return param_1;
}



/* Entry: 10930645c; end: 10930654b;  */

void FUN_10930645c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_4 != (undefined8 *)0x0) {
    if ((ulong)param_4 >> 0x3d != 0) {
      FUN_109301aa4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109306524);
      (*pcVar1)();
    }
    puVar2 = param_2;
    FUN_109301ab8();
    *param_1 = param_4;
    param_1[1] = param_4;
    param_1[2] = param_4 + (long)puVar2;
    ppuStack_58 = &puStack_40;
    ppuStack_50 = &puStack_38;
    uStack_48 = 0;
    puStack_40 = param_4;
    puStack_60 = param_1;
    for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 1) {
      *param_4 = 0;
      FUN_109300090(param_4,*param_2);
      param_4 = puStack_38 + 1;
    }
    uStack_48 = 1;
    FUN_109301aec(&puStack_60);
    param_1[1] = param_4;
  }
  return;
}



/* Entry: 10930654c; end: 10930663f;  */

undefined8 * FUN_10930654c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110aeb008;
  param_1[2] = 0;
  FUN_109300090(param_1 + 2,*(undefined8 *)*param_2);
  param_1[3] = 0;
  FUN_109300090(param_1 + 3,*(undefined8 *)(*param_2 + 8));
  lVar1 = *param_2;
  param_1[4] = 0;
  FUN_109300090(param_1 + 4,*(undefined8 *)(lVar1 + 0x10));
  return param_1;
}



/* Entry: 109306640; end: 1093067b7;  */

undefined8 * FUN_109306640(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110aeb008;
  plVar2 = (long *)param_1[4];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[3];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    *(undefined4 *)(plVar2 + 1) = 0xdeadf001;
    (**(code **)(*plVar2 + 8))();
  }
  return param_1;
}



/* Entry: 1093067b8; end: 109306803;  */

void FUN_1093067b8(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109306804; end: 10930685f;  */

undefined8 * FUN_109306804(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aeb040;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1093067b8(param_1,param_3);
  return param_1;
}



/* Entry: 109306860; end: 1093068b7;  */

long FUN_109306860(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 1093068b8; end: 1093068db;  */

undefined ** FUN_1093068b8(void)

{
  return &PTR_DAT_110aeb1c0;
}



/* Entry: 1093068dc; end: 109306b33;  */

long * FUN_1093068dc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong uStack_48;
  
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      iVar8 = *(int *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 0xd;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      iVar8 = *(int *)(param_1 + 0x14);
    }
    *(undefined1 *)param_2 = 0x15;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  iVar8 = *(int *)(param_1 + 0x18);
  if (iVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      iVar8 = *(int *)(param_1 + 0x18);
    }
    *(undefined1 *)param_2 = 0x1d;
    *(int *)((long)param_2 + 1) = iVar8;
    param_2 = (long *)((long)param_2 + 5);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar6 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar6 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar8 = (int)puVar7;
          _memcpy(param_2,lVar6,(long)iVar8);
          uVar2 = (int)uStack_48 - iVar8;
          uStack_48 = (ulong)uVar2;
          lVar6 = lVar6 + iVar8;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar8);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lVar6,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar6,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109306b34; end: 109306bdb;  */

long FUN_109306b34(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x1c) = (int)lVar1;
  return lVar1;
}



/* Entry: 109306bdc; end: 109306c3f;  */

undefined8 * FUN_109306bdc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aeb090;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  func_0x000109306b90(param_1,param_3);
  return param_1;
}



/* Entry: 109306c40; end: 109306c97;  */

long FUN_109306c40(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109306c98; end: 109306cbb;  */

undefined ** FUN_109306c98(void)

{
  return &PTR_DAT_110aeb1f0;
}



/* Entry: 109306cbc; end: 109306f13;  */

long * FUN_109306cbc(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar8;
  ulong uStack_48;
  undefined1 *puVar7;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      lVar8 = *(long *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 9;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      lVar8 = *(long *)(param_1 + 0x18);
    }
    *(undefined1 *)param_2 = 0x11;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
  }
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      lVar8 = *(long *)(param_1 + 0x20);
    }
    *(undefined1 *)param_2 = 0x19;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar8 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar6 = (int)puVar7;
          _memcpy(param_2,lVar8,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar6;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lVar8,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar8,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109306f14; end: 109306f6b;  */

long FUN_109306f14(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar1;
  return lVar1;
}



/* Entry: 109306f6c; end: 109306fff;  */

undefined8 * FUN_109306f6c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aeb180;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000109307f78(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000109307f78(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  return param_1;
}



/* Entry: 109307000; end: 10930706b;  */

long FUN_109307000(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10930706c; end: 10930706f;  */

long FUN_10930706c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109307070; end: 109307083;  */

void FUN_109307070(void)

{
  FUN_109307000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109307084; end: 10930708f;  */

undefined ** FUN_109307084(void)

{
  return &PTR_DAT_110aeb220;
}



/* Entry: 109307090; end: 1093070eb;  */

void FUN_109307090(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000109306ca4(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000109306ca4(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1093070ec; end: 109307257;  */

long * FUN_1093070ec(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  plVar1 = param_2;
  if ((uVar3 & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x28),param_2,param_3);
  }
  plVar2 = plVar1;
  if ((uVar3 >> 1 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x28),plVar1,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      lVar7 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar7 < (int)uVar3) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar2,lStack_50,(long)iVar6);
          uVar3 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar1 = (long *)((long)plVar2 + (long)iVar6);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar2 = plVar1;
          } while (plVar4 <= plVar1);
          lVar7 = (long)plVar4 + (0x10 - (long)plVar2);
        } while ((int)lVar7 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar2,lStack_50,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lStack_50,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar3);
    }
  }
  return plVar2;
}



/* Entry: 109307258; end: 109307317;  */

long FUN_109307258(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_109306f14();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_109306f14();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109307318; end: 10930731b;  */

void FUN_109307318(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000109307f78(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x000109306b90();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000109307f78(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x000109306b90();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10930731c; end: 1093073ef;  */

void FUN_10930731c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000109307f78(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        func_0x000109306b90();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000109307f78(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        func_0x000109306b90();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1093073f0; end: 109307483;  */

void FUN_1093073f0(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_2 + 0x20);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_2 + 0x28);
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_2 + 0x30);
  }
  if (*(long *)(param_2 + 0x38) != 0) {
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x38);
  }
  if (*(long *)(param_2 + 0x40) != 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x40);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 109307484; end: 1093074eb;  */

undefined8 * FUN_109307484(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aeb130;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  FUN_1093073f0(param_1,param_3);
  return param_1;
}



/* Entry: 1093074ec; end: 109307543;  */

long FUN_1093074ec(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109307544; end: 109307573;  */

undefined ** FUN_109307544(void)

{
  return &PTR_DAT_110aeb250;
}



/* Entry: 109307574; end: 109307927;  */

long * FUN_109307574(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar8;
  ulong uStack_48;
  undefined1 *puVar7;
  
  plVar3 = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar3 = param_3;
    func_0x000107c282e4(param_3,*(int *)(param_1 + 0x10),param_2);
  }
  plVar1 = plVar3;
  if (*(int *)(param_1 + 0x14) != 0) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(int *)(param_1 + 0x14),plVar3);
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      lVar8 = *(long *)(param_1 + 0x18);
    }
    *(undefined1 *)plVar1 = 0x19;
    *(long *)((long)plVar1 + 1) = lVar8;
    plVar1 = (long *)((long)plVar1 + 9);
  }
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      lVar8 = *(long *)(param_1 + 0x20);
    }
    *(undefined1 *)plVar1 = 0x21;
    *(long *)((long)plVar1 + 1) = lVar8;
    plVar1 = (long *)((long)plVar1 + 9);
  }
  lVar8 = *(long *)(param_1 + 0x28);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      lVar8 = *(long *)(param_1 + 0x28);
    }
    *(undefined1 *)plVar1 = 0x29;
    *(long *)((long)plVar1 + 1) = lVar8;
    plVar1 = (long *)((long)plVar1 + 9);
  }
  lVar8 = *(long *)(param_1 + 0x30);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      lVar8 = *(long *)(param_1 + 0x30);
    }
    *(undefined1 *)plVar1 = 0x31;
    *(long *)((long)plVar1 + 1) = lVar8;
    plVar1 = (long *)((long)plVar1 + 9);
  }
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      lVar8 = *(long *)(param_1 + 0x38);
    }
    *(undefined1 *)plVar1 = 0x39;
    *(long *)((long)plVar1 + 1) = lVar8;
    plVar1 = (long *)((long)plVar1 + 9);
  }
  lVar8 = *(long *)(param_1 + 0x40);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= plVar1) {
      do {
        if ((char)param_3[7] == '\x01') {
          plVar1 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        plVar1 = (long *)((long)plVar4 + (long)((int)plVar1 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= plVar1);
      lVar8 = *(long *)(param_1 + 0x40);
    }
    *(undefined1 *)plVar1 = 0x41;
    *(long *)((long)plVar1 + 1) = lVar8;
    plVar1 = (long *)((long)plVar1 + 9);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar8 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)plVar1) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar6 = (int)puVar7;
          _memcpy(plVar1,lVar8,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar6;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar1 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)plVar1));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lVar8,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lVar8,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109307928; end: 109307a37;  */

ulong FUN_109307928(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = uVar1 + 9;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = uVar1 + 9;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = uVar1 + 9;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = uVar1 + 9;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar1 = uVar1 + 9;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = uVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x48) = (int)uVar1;
  return uVar1;
}



/* Entry: 109307a38; end: 109307a9b;  */

undefined8 * FUN_109307a38(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aeb0e0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  func_0x0001093079ec(param_1,param_3);
  return param_1;
}



/* Entry: 109307a9c; end: 109307af3;  */

long FUN_109307a9c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  return param_1;
}



/* Entry: 109307af4; end: 109307b17;  */

undefined ** FUN_109307af4(void)

{
  return &PTR_DAT_110aeb280;
}



/* Entry: 109307b18; end: 109307d6f;  */

long * FUN_109307b18(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar8;
  ulong uStack_48;
  undefined1 *puVar7;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      lVar8 = *(long *)(param_1 + 0x10);
    }
    *(undefined1 *)param_2 = 9;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      lVar8 = *(long *)(param_1 + 0x18);
    }
    *(undefined1 *)param_2 = 0x11;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
  }
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    plVar3 = (long *)*param_3;
    if (plVar3 <= param_2) {
      do {
        if ((char)param_3[7] == '\x01') {
          param_2 = param_3 + 2;
          break;
        }
        plVar4 = param_3;
        func_0x000107c303dc();
        param_2 = (long *)((long)plVar4 + (long)((int)param_2 - (int)plVar3));
        plVar3 = (long *)*param_3;
      } while (plVar3 <= param_2);
      lVar8 = *(long *)(param_1 + 0x20);
    }
    *(undefined1 *)param_2 = 0x19;
    *(long *)((long)param_2 + 1) = lVar8;
    param_2 = (long *)((long)param_2 + 9);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lVar8 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar8 = uVar5 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)param_2 < (long)(int)uVar2) {
      puVar7 = (undefined1 *)((*param_3 - (long)param_2) + 0x10);
      if ((int)puVar7 < (int)uVar2) {
        do {
          iVar6 = (int)puVar7;
          _memcpy(param_2,lVar8,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lVar8 = lVar8 + iVar6;
          plVar4 = (long *)*param_3;
          plVar3 = (long *)((long)param_2 + (long)iVar6);
          do {
            param_2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar3 = (long *)((long)plVar1 + (long)((int)plVar3 - (int)plVar4));
            plVar4 = (long *)*param_3;
            param_2 = plVar3;
          } while (plVar4 <= plVar3);
          puVar7 = (undefined1 *)((long)plVar4 + (0x10 - (long)param_2));
        } while ((int)puVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(param_2,lVar8,(long)(int)(uint)uStack_48);
      param_2 = (long *)((long)param_2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(param_2,lVar8,uStack_48 & 0xffffffff);
      param_2 = (long *)((long)param_2 + (long)(int)uVar2);
    }
  }
  return param_2;
}



/* Entry: 109307d70; end: 109307def;  */

long FUN_109307d70(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x28) = (int)lVar1;
  return lVar1;
}



/* Entry: 109307df0; end: 109307fef;  */

void FUN_109307df0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110aeb040;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 109307ff0; end: 109307ff3;  */

long FUN_109307ff0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x18);
  return param_1;
}



/* Entry: 109307ff4; end: 109308007;  */

void FUN_109307ff4(void)

{
  func_0x000109307fbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109308008; end: 109308067;  */

undefined ** FUN_109308008(void)

{
  return &PTR_DAT_110aeb878;
}



/* Entry: 109308068; end: 10930820b;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109308068(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c280a0(param_3,1,*(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc,param_2);
    param_2 = plVar1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar1 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x20),param_2);
    param_2 = plVar1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar1 = param_3;
    func_0x000107c282ac(param_3,*(undefined4 *)(param_1 + 0x24),param_2);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar2 >> 3 & 1) != 0) {
    plVar1 = param_3;
    func_0x0001088bdd44(param_3,*(undefined4 *)(param_1 + 0x28),param_2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 10930820c; end: 1093082f7;  */

long FUN_10930820c(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    lVar3 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar3 = uVar5 + ((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x24)) * -9 + 0x2c0U >> 6) + lVar3;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar3 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x28)) * -9 + 0x2c0U >> 6) + lVar3;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar4 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar4 < 0) {
      lVar4 = *(long *)(uVar5 + 0x10);
    }
    lVar3 = lVar4 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 1093082f8; end: 1093083c3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1093082f8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x18,uVar3 & 0xfffffffffffffffc,uVar2);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1093083c4; end: 10930842f;  */

long FUN_1093083c4(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109308430; end: 109308433;  */

long FUN_109308430(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109308434; end: 109308447;  */

void FUN_109308434(void)

{
  FUN_1093083c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109308448; end: 109308453;  */

undefined ** FUN_109308448(void)

{
  return &PTR_DAT_110aeb8b0;
}



/* Entry: 109308454; end: 1093084af;  */

void FUN_109308454(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 1093084b0; end: 10930861b;  */

long * FUN_1093084b0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  plVar1 = param_2;
  if ((uVar3 & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
  }
  plVar2 = plVar1;
  if ((uVar3 >> 1 & 1) != 0) {
    plVar2 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),plVar1,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar5 + 8);
      uStack_48 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lStack_50 = uVar5 + 8;
    }
    uVar3 = (uint)uStack_48;
    if (*param_3 - (long)plVar2 < (long)(int)uVar3) {
      lVar7 = (*param_3 - (long)plVar2) + 0x10;
      if ((int)lVar7 < (int)uVar3) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar2,lStack_50,(long)iVar6);
          uVar3 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar3;
          lStack_50 = lStack_50 + iVar6;
          plVar4 = (long *)*param_3;
          plVar1 = (long *)((long)plVar2 + (long)iVar6);
          do {
            plVar2 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar2 = param_3;
            func_0x000107c303dc();
            plVar1 = (long *)((long)plVar2 + (long)((int)plVar1 - (int)plVar4));
            plVar4 = (long *)*param_3;
            plVar2 = plVar1;
          } while (plVar4 <= plVar1);
          lVar7 = (long)plVar4 + (0x10 - (long)plVar2);
        } while ((int)lVar7 < (int)uVar3);
      }
      uStack_48._0_4_ = uVar3;
      _memcpy(plVar2,lStack_50,(long)(int)(uint)uStack_48);
      plVar2 = (long *)((long)plVar2 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar2,lStack_50,uStack_48 & 0xffffffff);
      plVar2 = (long *)((long)plVar2 + (long)(int)uVar3);
    }
  }
  return plVar2;
}



/* Entry: 10930861c; end: 1093086db;  */

long FUN_10930861c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_109340c2c();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_109340c2c();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 1093086dc; end: 1093086df;  */

void FUN_1093086dc(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1093408b0();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1093086e0; end: 1093087b3;  */

void FUN_1093086e0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1093408b0();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1093087b4; end: 1093087eb;  */

void FUN_1093087b4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 == param_1) {
    return;
  }
  FUN_109308454();
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar3;
      }
      else {
        FUN_1093408b0();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1093087ec; end: 10930889b;  */

undefined8 * FUN_1093087ec(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110aeb568;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000109312590(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000109312590(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x000109312590(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = param_2;
  return param_1;
}



/* Entry: 10930889c; end: 109308927;  */

long FUN_10930889c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109308928; end: 10930892b;  */

long FUN_109308928(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10930892c; end: 10930893f;  */

void FUN_10930892c(void)

{
  FUN_10930889c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109308940; end: 10930894b;  */

undefined ** FUN_109308940(void)

{
  return &PTR_DAT_110aeb8e8;
}



/* Entry: 10930894c; end: 1093089bf;  */

void FUN_10930894c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x28));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 1093089c0; end: 109308b57;  */

long * FUN_1093089c0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar1 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar2 >> 2 & 1) != 0) {
    plVar1 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109308b58; end: 109308c43;  */

long FUN_109308b58(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_109340c2c();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_109340c2c();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      FUN_109340c2c();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109308c44; end: 109308c47;  */

void FUN_109308c44(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        FUN_1093408b0();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109308c48; end: 109308d4f;  */

void FUN_109308c48(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar3;
      }
      else {
        FUN_1093408b0();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109308d50; end: 109308dfb;  */

long FUN_109308d50(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109308dfc; end: 109308dff;  */

long FUN_109308dfc(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 8) & 1) != 0) {
      func_0x0001053936ac();
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109308e00; end: 109308e13;  */

void FUN_109308e00(void)

{
  FUN_109308d50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109308e14; end: 109308e1f;  */

undefined ** FUN_109308e14(void)

{
  return &PTR_DAT_110aeb920;
}



/* Entry: 109308e20; end: 109308ea3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109308e20(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x0001093409d8(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 109308ea4; end: 10930905f;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_109308ea4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lStack_50;
  ulong uStack_48;
  long lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    plVar1 = (long *)0x1;
    func_0x000107c303cc(1,*(long *)(param_1 + 0x18),
                        *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    plVar1 = (long *)0x2;
    func_0x000107c303cc(2,*(long *)(param_1 + 0x20),
                        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    plVar1 = (long *)0x3;
    func_0x000107c303cc(3,*(long *)(param_1 + 0x28),
                        *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x14),param_2,param_3);
    param_2 = plVar1;
  }
  plVar1 = param_2;
  if ((uVar2 >> 3 & 1) != 0) {
    plVar1 = (long *)0x4;
    func_0x000107c303cc(4,*(long *)(param_1 + 0x30),
                        *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14),param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uStack_48 = (ulong)*(char *)(uVar4 + 0x1f);
    if ((long)uStack_48 < 0) {
      lStack_50 = *(long *)(uVar4 + 8);
      uStack_48 = (ulong)*(uint *)(uVar4 + 0x10);
    }
    else {
      lStack_50 = uVar4 + 8;
    }
    uVar2 = (uint)uStack_48;
    if (*param_3 - (long)plVar1 < (long)(int)uVar2) {
      lVar7 = (*param_3 - (long)plVar1) + 0x10;
      if ((int)lVar7 < (int)uVar2) {
        do {
          iVar6 = (int)lVar7;
          _memcpy(plVar1,lStack_50,(long)iVar6);
          uVar2 = (int)uStack_48 - iVar6;
          uStack_48 = (ulong)uVar2;
          lStack_50 = lStack_50 + iVar6;
          plVar3 = (long *)*param_3;
          plVar5 = (long *)((long)plVar1 + (long)iVar6);
          do {
            plVar1 = param_3 + 2;
            if ((*(byte *)(param_3 + 7) & 1) != 0) break;
            plVar1 = param_3;
            func_0x000107c303dc();
            plVar5 = (long *)((long)plVar1 + (long)((int)plVar5 - (int)plVar3));
            plVar3 = (long *)*param_3;
            plVar1 = plVar5;
          } while (plVar3 <= plVar5);
          lVar7 = (long)plVar3 + (0x10 - (long)plVar1);
        } while ((int)lVar7 < (int)uVar2);
      }
      uStack_48._0_4_ = uVar2;
      _memcpy(plVar1,lStack_50,(long)(int)(uint)uStack_48);
      plVar1 = (long *)((long)plVar1 + (long)(int)(uint)uStack_48);
    }
    else {
      _memcpy(plVar1,lStack_50,uStack_48 & 0xffffffff);
      plVar1 = (long *)((long)plVar1 + (long)(int)uVar2);
    }
  }
  return plVar1;
}



/* Entry: 109309060; end: 10930917f;  */

long FUN_109309060(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      FUN_109340c2c();
      lVar4 = lVar4 + (ulong)((int)LZCOUNT((int)lVar4) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      FUN_109340c2c();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      FUN_109340c2c();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      FUN_109340c2c();
      lVar4 = lVar4 + lVar2 + (ulong)((int)LZCOUNT((int)lVar2) * -9 + 0x160U >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109309180; end: 1093092b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109309180(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_1093408b0();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x000109312590(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar3;
      }
      else {
        FUN_1093408b0();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1093092b4; end: 109309303;  */

long FUN_1093092b4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109309304; end: 109309307;  */

long FUN_109309304(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109309308; end: 10930931b;  */

void FUN_109309308(void)

{
  FUN_1093092b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10930931c; end: 10930937b;  */

undefined ** FUN_10930931c(void)

{
  return &PTR_DAT_110aeb958;
}



/* Entry: 10930937c; end: 1093096e7;  */

byte * FUN_10930937c(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar11 = *(uint *)(param_1 + 0x10);
  if ((uVar11 >> 1 & 1) != 0) {
    pbVar1 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x30),param_2);
    param_2 = pbVar1;
  }
  if ((uVar11 >> 2 & 1) != 0) {
    pbVar1 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x34),param_2);
    param_2 = pbVar1;
  }
  pbVar1 = param_2;
  if ((uVar11 & 1) != 0) {
    pbVar1 = param_3;
    func_0x000107c280a0(param_3,4,*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc,param_2);
  }
  iVar14 = *(int *)(param_1 + 0x18);
  if (0 < iVar14) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar1) {
      do {
        if (param_3[0x38] == 1) {
          pbVar1 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        pbVar1 = pbVar2 + ((int)pbVar1 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar1);
      iVar14 = *(int *)(param_1 + 0x18);
    }
    uVar11 = iVar14 * 4;
    uVar12 = (ulong)uVar11;
    pbVar4 = pbVar1 + 1;
    *pbVar1 = 0x32;
    uVar5 = uVar12;
    uVar8 = uVar11;
    if (0x7f < uVar11) {
      do {
        pbVar1 = pbVar4;
        uVar7 = (uint)uVar5;
        pbVar4 = pbVar1 + 1;
        *pbVar1 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        uVar8 = (uint)uVar5;
      } while (uVar7 >> 0xe != 0);
    }
    pbVar1 = pbVar1 + 2;
    *pbVar4 = (byte)uVar8;
    lVar13 = *(long *)(param_1 + 0x20);
    uVar15 = (ulong)(int)uVar11;
    uVar5 = uVar12;
    if ((*(long *)param_3 - (long)pbVar1 < (long)(int)uVar11) &&
       (pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10), uVar5 = uVar15,
       (int)pbVar4 < (int)uVar11)) {
      pbVar2 = param_3 + 0x10;
      do {
        iVar14 = (int)pbVar4;
        _memcpy(pbVar1,lVar13,(long)iVar14);
        uVar11 = (int)uVar12 - iVar14;
        uVar12 = (ulong)uVar11;
        lVar13 = lVar13 + iVar14;
        pbVar10 = pbVar1 + iVar14;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar1 = pbVar2;
          pbVar4 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_1093095d4:
            param_3[0x38] = 1;
LAB_1093095b4:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar16 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_1093095b4;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar2,(long)pbVar6 - (long)pbVar2);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_1093095d4;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)param_3 = pbVar2 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar4 = pbVar2 + (int)uStack_64;
            }
            else {
              uVar16 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar16;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar1 = pbStack_70;
            }
          }
          pbVar10 = pbVar1 + ((int)pbVar10 - (int)pbVar6);
          pbVar6 = pbVar4;
          pbVar1 = pbVar10;
        } while (pbVar4 <= pbVar10);
        pbVar4 = pbVar4 + (0x10 - (long)pbVar1);
      } while ((int)pbVar4 < (int)uVar11);
      uVar15 = (ulong)(int)uVar11;
      uVar5 = uVar15;
    }
    _memcpy(pbVar1,lVar13,uVar5);
    pbVar1 = pbVar1 + uVar15;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar13 = *(long *)(uVar5 + 8);
      uVar12 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar13 = uVar5 + 8;
    }
    uVar11 = (uint)uVar12;
    if (*(long *)param_3 - (long)pbVar1 < (long)(int)uVar11) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10);
      if ((int)pbVar4 < (int)uVar11) {
        do {
          iVar14 = (int)pbVar4;
          _memcpy(pbVar1,lVar13,(long)iVar14);
          uVar11 = (int)uVar12 - iVar14;
          uVar12 = (ulong)uVar11;
          lVar13 = lVar13 + iVar14;
          pbVar4 = *(byte **)param_3;
          pbVar2 = pbVar1 + iVar14;
          do {
            pbVar1 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar1 = param_3;
            func_0x000107c303dc();
            pbVar2 = pbVar1 + ((int)pbVar2 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar1 = pbVar2;
          } while (pbVar4 <= pbVar2);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar1);
        } while ((int)pbVar4 < (int)uVar11);
      }
      _memcpy(pbVar1,lVar13,(long)(int)uVar11);
      pbVar1 = pbVar1 + (int)uVar11;
    }
    else {
      _memcpy(pbVar1,lVar13,uVar12 & 0xffffffff);
      pbVar1 = pbVar1 + (int)uVar11;
    }
  }
  return pbVar1;
}



/* Entry: 1093096e8; end: 1093097db;  */

long FUN_1093096e8(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar4 = lVar4 + (ulong)uVar1 * 4;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x2c0U >> 6) + lVar4;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar5 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 1093097dc; end: 1093098f3;  */

void FUN_1093097dc(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      FUN_109311970(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 7) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x28,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 1093098f4; end: 109309943;  */

long FUN_1093098f4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109309944; end: 109309947;  */

long FUN_109309944(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}



/* Entry: 109309948; end: 10930995b;  */

void FUN_109309948(void)

{
  FUN_1093098f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10930995c; end: 1093099bb;  */

undefined ** FUN_10930995c(void)

{
  return &PTR_DAT_110aeb990;
}



/* Entry: 1093099bc; end: 109309d27;  */

byte * FUN_1093099bc(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  byte *pbStack_70;
  uint uStack_64;
  
  uVar11 = *(uint *)(param_1 + 0x10);
  if ((uVar11 >> 1 & 1) != 0) {
    pbVar1 = param_3;
    func_0x000107c282e4(param_3,*(undefined4 *)(param_1 + 0x30),param_2);
    param_2 = pbVar1;
  }
  if ((uVar11 >> 2 & 1) != 0) {
    pbVar1 = param_3;
    func_0x00010598f43c(param_3,*(undefined4 *)(param_1 + 0x34),param_2);
    param_2 = pbVar1;
  }
  pbVar1 = param_2;
  if ((uVar11 & 1) != 0) {
    pbVar1 = param_3;
    func_0x000107c280a0(param_3,4,*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc,param_2);
  }
  iVar14 = *(int *)(param_1 + 0x18);
  if (0 < iVar14) {
    pbVar4 = *(byte **)param_3;
    if (pbVar4 <= pbVar1) {
      do {
        if (param_3[0x38] == 1) {
          pbVar1 = param_3 + 0x10;
          break;
        }
        pbVar2 = param_3;
        func_0x000107c303dc();
        pbVar1 = pbVar2 + ((int)pbVar1 - (int)pbVar4);
        pbVar4 = *(byte **)param_3;
      } while (pbVar4 <= pbVar1);
      iVar14 = *(int *)(param_1 + 0x18);
    }
    uVar11 = iVar14 * 4;
    uVar12 = (ulong)uVar11;
    pbVar4 = pbVar1 + 1;
    *pbVar1 = 0x2a;
    uVar5 = uVar12;
    uVar8 = uVar11;
    if (0x7f < uVar11) {
      do {
        pbVar1 = pbVar4;
        uVar7 = (uint)uVar5;
        pbVar4 = pbVar1 + 1;
        *pbVar1 = (byte)uVar5 | 0x80;
        uVar5 = uVar5 >> 7;
        uVar8 = (uint)uVar5;
      } while (uVar7 >> 0xe != 0);
    }
    pbVar1 = pbVar1 + 2;
    *pbVar4 = (byte)uVar8;
    lVar13 = *(long *)(param_1 + 0x20);
    uVar15 = (ulong)(int)uVar11;
    uVar5 = uVar12;
    if ((*(long *)param_3 - (long)pbVar1 < (long)(int)uVar11) &&
       (pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10), uVar5 = uVar15,
       (int)pbVar4 < (int)uVar11)) {
      pbVar2 = param_3 + 0x10;
      do {
        iVar14 = (int)pbVar4;
        _memcpy(pbVar1,lVar13,(long)iVar14);
        uVar11 = (int)uVar12 - iVar14;
        uVar12 = (ulong)uVar11;
        lVar13 = lVar13 + iVar14;
        pbVar10 = pbVar1 + iVar14;
        pbVar6 = *(byte **)param_3;
        do {
          pbVar1 = pbVar2;
          pbVar4 = pbVar6;
          if ((param_3[0x38] & 1) != 0) break;
          if (*(long *)(param_3 + 0x30) == 0) {
LAB_109309c14:
            param_3[0x38] = 1;
LAB_109309bf4:
            *(byte **)param_3 = param_3 + 0x20;
            pbVar4 = param_3 + 0x20;
          }
          else {
            if (*(long *)(param_3 + 8) == 0) {
              uVar16 = *(undefined8 *)pbVar6;
              *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)(param_3 + 8) = pbVar6;
              goto LAB_109309bf4;
            }
            _memcpy(*(long *)(param_3 + 8),pbVar2,(long)pbVar6 - (long)pbVar2);
            do {
              plVar3 = *(long **)(param_3 + 0x30);
              (**(code **)(*plVar3 + 0x10))(plVar3,&pbStack_70,&uStack_64);
              if (((ulong)plVar3 & 1) == 0) goto LAB_109309c14;
            } while (uStack_64 == 0);
            puVar9 = *(undefined8 **)param_3;
            if ((int)uStack_64 < 0x11) {
              uVar16 = *puVar9;
              *(undefined8 *)(param_3 + 0x18) = puVar9[1];
              *(undefined8 *)pbVar2 = uVar16;
              *(byte **)param_3 = pbVar2 + (int)uStack_64;
              *(byte **)(param_3 + 8) = pbStack_70;
              pbVar4 = pbVar2 + (int)uStack_64;
            }
            else {
              uVar16 = *puVar9;
              *(undefined8 *)(pbStack_70 + 8) = puVar9[1];
              *(undefined8 *)pbStack_70 = uVar16;
              *(byte **)param_3 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              param_3[0xb] = 0;
              param_3[0xc] = 0;
              param_3[0xd] = 0;
              param_3[0xe] = 0;
              param_3[0xf] = 0;
              pbVar4 = pbStack_70 + ((ulong)uStack_64 - 0x10);
              pbVar1 = pbStack_70;
            }
          }
          pbVar10 = pbVar1 + ((int)pbVar10 - (int)pbVar6);
          pbVar6 = pbVar4;
          pbVar1 = pbVar10;
        } while (pbVar4 <= pbVar10);
        pbVar4 = pbVar4 + (0x10 - (long)pbVar1);
      } while ((int)pbVar4 < (int)uVar11);
      uVar15 = (ulong)(int)uVar11;
      uVar5 = uVar15;
    }
    _memcpy(pbVar1,lVar13,uVar5);
    pbVar1 = pbVar1 + uVar15;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar12 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar12 < 0) {
      lVar13 = *(long *)(uVar5 + 8);
      uVar12 = (ulong)*(uint *)(uVar5 + 0x10);
    }
    else {
      lVar13 = uVar5 + 8;
    }
    uVar11 = (uint)uVar12;
    if (*(long *)param_3 - (long)pbVar1 < (long)(int)uVar11) {
      pbVar4 = (byte *)((*(long *)param_3 - (long)pbVar1) + 0x10);
      if ((int)pbVar4 < (int)uVar11) {
        do {
          iVar14 = (int)pbVar4;
          _memcpy(pbVar1,lVar13,(long)iVar14);
          uVar11 = (int)uVar12 - iVar14;
          uVar12 = (ulong)uVar11;
          lVar13 = lVar13 + iVar14;
          pbVar4 = *(byte **)param_3;
          pbVar2 = pbVar1 + iVar14;
          do {
            pbVar1 = param_3 + 0x10;
            if ((param_3[0x38] & 1) != 0) break;
            pbVar1 = param_3;
            func_0x000107c303dc();
            pbVar2 = pbVar1 + ((int)pbVar2 - (int)pbVar4);
            pbVar4 = *(byte **)param_3;
            pbVar1 = pbVar2;
          } while (pbVar4 <= pbVar2);
          pbVar4 = pbVar4 + (0x10 - (long)pbVar1);
        } while ((int)pbVar4 < (int)uVar11);
      }
      _memcpy(pbVar1,lVar13,(long)(int)uVar11);
      pbVar1 = pbVar1 + (int)uVar11;
    }
    else {
      _memcpy(pbVar1,lVar13,uVar12 & 0xffffffff);
      pbVar1 = pbVar1 + (int)uVar11;
    }
  }
  return pbVar1;
}



/* Entry: 109309d28; end: 109309e1b;  */

long FUN_109309d28(long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (ulong)((int)LZCOUNT(-((ulong)(uVar1 >> 0x1d) & 1) & 0xffffffff00000000 |
                                 ((ulong)uVar1 & 0x3fffffff) << 2) * -9 + 0x280U >> 6) + 1;
  }
  lVar4 = lVar4 + (ulong)uVar1 * 4;
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc;
      bVar2 = *(byte *)(uVar5 + 0x17);
      uVar5 = *(ulong *)(uVar5 + 8);
      if (-1 < (char)bVar2) {
        uVar5 = (ulong)bVar2;
      }
      lVar4 = lVar4 + uVar5 + (ulong)((int)LZCOUNT((int)uVar5) * -9 + 0x160U >> 6) + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x30)) * -9 + 0x2c0U >> 6) + lVar4;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar4 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x34)) * -9 + 0x2c0U >> 6) + lVar4;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar3 = (long)*(char *)(uVar5 + 0x1f);
    if (lVar3 < 0) {
      lVar3 = *(long *)(uVar5 + 0x10);
    }
    lVar4 = lVar3 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 109309e1c; end: 109309f33;  */

void FUN_109309e1c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    iVar3 = iVar2 + iVar1;
    if (*(int *)(param_1 + 0x1c) < iVar3) {
      FUN_109311970(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x18);
      iVar3 = iVar2 + iVar1;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    if (0 < iVar1) {
      uVar8 = iVar1 + 1;
      puVar5 = *(undefined4 **)(param_2 + 0x20);
      puVar7 = (undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4);
      do {
        *puVar7 = *puVar5;
        uVar8 = uVar8 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (1 < uVar8);
    }
  }
  uVar8 = *(uint *)(param_2 + 0x10);
  if ((uVar8 & 7) != 0) {
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)(param_2 + 0x28);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulong *)(uVar4 & 0xfffffffffffffffe);
      }
      func_0x000107c30248(param_1 + 0x28,uVar6 & 0xfffffffffffffffc,uVar4);
    }
    if ((uVar8 >> 1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    if ((uVar8 >> 2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar8;
  if ((*(ulong *)(param_2 + 8) & 1) == 0) {
    return;
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 109309f34; end: 109309f8b;  */

long FUN_109309f34(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  func_0x000107c30258(param_1 + 0x28);
  func_0x000107c30258(param_1 + 0x30);
  if (0 < *(int *)(param_1 + 0x1c)) {
    if (*(long *)(*(long *)(param_1 + 0x20) + -8) == 0) {
      __ZdlPv();
    }
  }
  return param_1;
}


