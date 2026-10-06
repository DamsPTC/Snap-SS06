/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a419cd4; end: 10a419d5b;  */

void FUN_10a419cd4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_3;
  lVar1 = param_3[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    FUN_10a0e3264();
  }
  param_3[1] = lVar2;
  FUN_10a419d5c(param_3,param_2[1] - *param_2 >> 5);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_10a419b30(param_1,lVar2,param_3);
  }
  return;
}



/* Entry: 10a419d5c; end: 10a419df7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a419d5c(undefined8 param_1,long *param_2,code *******param_3,long *param_4)

{
  code ****ppppcVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  bool bVar7;
  code *******pppppppcVar8;
  code ******ppppppcVar9;
  code cVar10;
  code ******ppppppcVar11;
  code *****pppppcVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  code ******ppppppcVar16;
  code *****pppppcVar17;
  long lVar18;
  code ***pppcVar19;
  code *******pppppppcVar20;
  code ******ppppppcVar21;
  ulong uVar22;
  code ******ppppppcVar23;
  code ******ppppppcVar24;
  code ****ppppcVar25;
  code ******ppppppcVar26;
  ulong uVar27;
  code *******pppppppcVar28;
  code *******pppppppcVar29;
  code *******pppppppcVar30;
  code *******pppppppcVar31;
  code ****ppppcVar32;
  code *******pppppppcVar33;
  code *******pppppppcVar34;
  code *****pppppcVar35;
  code ******unaff_x25;
  code *****pppppcVar36;
  code *******pppppppcVar37;
  code ******ppppppcVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  code *****pppppcVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  code ******ppppppcStack_350;
  code *******pppppppcStack_348;
  code ******ppppppcStack_340;
  code *******pppppppcStack_338;
  undefined8 uStack_330;
  code *******pppppppcStack_260;
  code *******pppppppcStack_258;
  code *******pppppppcStack_248;
  code *******pppppppcStack_240;
  code *******pppppppcStack_238;
  code *******pppppppcStack_230;
  code ******ppppppcStack_228;
  code ******ppppppcStack_220;
  long lStack_218;
  float fStack_210;
  code *******pppppppcStack_200;
  code *******pppppppcStack_1f8;
  code *******pppppppcStack_1f0;
  code *******pppppppcStack_1e8;
  code *******pppppppcStack_1e0;
  code *******pppppppcStack_1d8;
  code *******pppppppcStack_1d0;
  code *******pppppppcStack_1c8;
  code *******pppppppcStack_1c0;
  code *******pppppppcStack_1b8;
  long lStack_1a0;
  undefined8 uStack_188;
  code ****ppppcStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar14 = *param_2;
  if (param_3 <= (code *******)(param_2[2] - lVar14 >> 5)) {
    return;
  }
  if ((ulong)param_3 >> 0x3b == 0) {
    lVar18 = param_2[1];
    pppppppcVar8 = param_3;
    plStack_38 = param_2;
    FUN_10a436860();
    lVar14 = (long)param_3 + (lVar18 - lVar14);
    lVar18 = lVar14 + (*param_2 - param_2[1]);
    func_0x00010a436894(*param_2,param_2[1],lVar18);
    lStack_58 = *param_2;
    *param_2 = lVar18;
    param_2[1] = lVar14;
    lStack_40 = param_2[2];
    param_2[2] = (long)(param_3 + (long)pppppppcVar8 * 4);
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a4368f8(&lStack_58);
    return;
  }
  FUN_10a43684c();
  param_4[1] = *param_4;
  if ((ulong)((long)param_3[1] - (long)*param_3) <= (ulong)(param_4[2] - *param_4)) {
LAB_10a419e8c:
    ppppppcVar11 = *param_3;
    ppppppcVar9 = param_3[1];
    do {
      if (ppppppcVar11 == ppppppcVar9) {
        return;
      }
      pppppcVar35 = *ppppppcVar11;
      if (((*(byte *)((long)pppppcVar35 + 0x69) & 1) == 0) &&
         (ppppcVar32 = pppppcVar35[8], ppppcVar32 != (code ****)0x0)) {
        ppppcVar25 = pppppcVar35[9];
        if (ppppcVar25 != (code ****)0x0) {
          ppppcVar1 = ppppcVar25 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppcVar1,0x10);
            if (bVar7) {
              *ppppcVar1 = (code ***)((long)*ppppcVar1 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            pppcVar19 = *ppppcVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppcVar1,0x10);
            if (bVar7) {
              *ppppcVar1 = (code ***)((long)pppcVar19 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppcVar19 == (code ***)0x0) {
            (*(code *)(*ppppcVar25)[2])(ppppcVar25);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar25);
          }
        }
        fVar39 = *(float *)(pppppcVar35 + 0xc);
        fVar44 = *(float *)(ppppppcVar11 + 2);
        bVar7 = true;
        if ((fVar44 != *(float *)((long)pppppcVar35 + 0x5c)) &&
           (bVar7 = false, !NAN(fVar44) && !NAN(fVar39))) {
          bVar7 = fVar44 == fVar39;
        }
        ppppcStack_f0 = ppppcVar32;
        if (bVar7) {
          uStack_e8 = ppppppcVar11[2];
          FUN_10a41a03c(param_4,&ppppcStack_f0);
          uStack_e8 = (code *****)
                      CONCAT44(*(float *)(ppppppcVar11 + 2) + -1.1920929e-07,
                               *(float *)(ppppppcVar11 + 2) + 1.1920929e-07);
        }
        else {
          bVar3 = *(byte *)(pppppcVar35 + 0xd);
          fVar39 = fVar39 + 1.1920929e-07;
          fVar40 = *(float *)((long)ppppppcVar11 + 0x14);
          fVar43 = ABS(fVar44 - fVar40);
          bVar7 = (float)param_1 * *(float *)((long)pppppcVar35 + 0x54) + -1.1920929e-07 <= fVar43;
          if ((bVar3 == 0) || (fVar45 = fVar39, bVar7 || fVar43 <= 1.1920929e-07)) {
            fVar45 = *(float *)((long)pppppcVar35 + 0x5c) + -1.1920929e-07;
            fVar6 = fVar45;
            if ((bVar3 & 1) == 0 && (!bVar7 && 1.1920929e-07 < fVar43)) {
LAB_10a419fc4:
              uStack_e8 = (code *****)CONCAT44(fVar40,fVar6);
              FUN_10a41a03c(param_4,&ppppcStack_f0);
              uStack_e8 = (code *****)CONCAT44(fVar45,fVar44);
            }
            else {
              if ((bVar3 & 1) == 0) {
                fVar6 = fVar39;
                if (fVar44 < fVar40) goto LAB_10a419fc4;
              }
              else if (fVar40 < fVar44) goto LAB_10a419f7c;
              uStack_e8 = ppppppcVar11[2];
            }
          }
          else {
LAB_10a419f7c:
            uStack_e8 = (code *****)CONCAT44(fVar40,fVar45);
            FUN_10a41a03c(param_4,&ppppcStack_f0);
            uStack_e8 = (code *****)CONCAT44(fVar39,fVar44);
          }
        }
        ppppcStack_f0 = ppppcVar32;
        FUN_10a41a03c(param_4,&ppppcStack_f0);
      }
      ppppppcVar11 = ppppppcVar11 + 4;
    } while( true );
  }
  pppppppcVar8 = (code *******)((long)param_3[1] - (long)*param_3 >> 4);
  if ((ulong)pppppppcVar8 >> 0x3c == 0) {
    pppppppcVar37 = param_3;
    FUN_10a436570();
    lVar18 = (long)pppppppcVar8 - (param_4[1] - *param_4);
    _memcpy(lVar18);
    lVar14 = *param_4;
    *param_4 = lVar18;
    param_4[1] = (long)pppppppcVar8;
    param_4[2] = (long)(pppppppcVar8 + (long)pppppppcVar37 * 2);
    if (lVar14 != 0) {
      __ZdlPv();
    }
    goto LAB_10a419e8c;
  }
  uVar41 = param_1;
  FUN_10a43655c();
  ppppppcVar11 = pppppppcVar8[1];
  if (ppppppcVar11 < pppppppcVar8[2]) {
    ppppppcVar9 = *param_3;
    ppppppcVar11[1] = (code *****)param_3[1];
    *ppppppcVar11 = (code *****)ppppppcVar9;
    ppppppcVar11 = ppppppcVar11 + 2;
LAB_10a41a0e8:
    pppppppcVar8[1] = ppppppcVar11;
    return;
  }
  lVar14 = (long)ppppppcVar11 - (long)*pppppppcVar8;
  uVar27 = (lVar14 >> 4) + 1;
  if (uVar27 >> 0x3c == 0) {
    uVar15 = (long)pppppppcVar8[2] - (long)*pppppppcVar8;
    uVar22 = (long)uVar15 >> 3;
    if (uVar22 <= uVar27) {
      uVar22 = uVar27;
    }
    if (0x7fffffffffffffef < uVar15) {
      uVar22 = 0xfffffffffffffff;
    }
    pppppppcVar37 = param_3;
    FUN_10a436570();
    plVar2 = (long *)(uVar22 + lVar14);
    ppppppcVar11 = *param_3;
    plVar2[1] = (long)param_3[1];
    *plVar2 = (long)ppppppcVar11;
    ppppppcVar11 = (code ******)(plVar2 + 2);
    ppppppcVar26 = (code ******)((long)plVar2 - ((long)pppppppcVar8[1] - (long)*pppppppcVar8));
    _memcpy(ppppppcVar26);
    ppppppcVar9 = *pppppppcVar8;
    *pppppppcVar8 = ppppppcVar26;
    pppppppcVar8[1] = ppppppcVar11;
    pppppppcVar8[2] = (code ******)(uVar22 + (long)pppppppcVar37 * 0x10);
    if (ppppppcVar9 != (code ******)0x0) {
      __ZdlPv();
    }
    goto LAB_10a41a0e8;
  }
  pppppppcVar37 = param_3;
  FUN_10a43655c();
  if (pppppppcVar8[0x4c] == pppppppcVar8[0x4d]) {
    return;
  }
  FUN_10a4158d4();
  if ((pppppppcVar8[0x67] == pppppppcVar8[0x68]) ||
     (((long)pppppppcVar8[0x47] - (long)pppppppcVar8[0x46] >> 4) * -0x3333333333333333 -
      ((long)pppppppcVar8[0x68] - (long)pppppppcVar8[0x67] >> 6) != 0)) {
    FUN_10a41a204(pppppppcVar8,pppppppcVar37);
  }
  FUN_10a419cd4(uVar41,pppppppcVar8 + 0x4c,pppppppcVar8 + 0x52);
  if (pppppppcVar8[0x52] == pppppppcVar8[0x53]) {
SUB_10a440420:
    if (pppppppcVar8[0x65] != (code ******)0x0) {
      ppppppcVar11 = pppppppcVar8[100];
      while (ppppppcVar11 != (code ******)0x0) {
        ppppppcVar11 = (code ******)*ppppppcVar11;
        __ZdlPv();
      }
      pppppppcVar8[100] = (code ******)0x0;
      ppppppcVar11 = pppppppcVar8[99];
      if (ppppppcVar11 != (code ******)0x0) {
        ppppppcVar9 = (code ******)0x0;
        do {
          pppppppcVar8[0x62][(long)ppppppcVar9] = (code *****)0x0;
          ppppppcVar9 = (code ******)((long)ppppppcVar9 + 1);
        } while (ppppppcVar11 != ppppppcVar9);
      }
      pppppppcVar8[0x65] = (code ******)0x0;
    }
    return;
  }
  FUN_10a419df8(uVar41);
  FUN_10a416cf8(pppppppcVar8 + 0x46,pppppppcVar8 + 0x67,pppppppcVar8 + 0x52);
  FUN_10a418dd0(pppppppcVar8,pppppppcVar8 + 0x52);
  pppppppcVar37 = pppppppcVar8 + 0x52;
  FUN_10a419308(pppppppcVar8);
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar31 = pppppppcVar8;
  uStack_188 = param_1;
  if (pppppppcVar8[0x42][6] == (code *****)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) goto SUB_10a440420;
  }
  else {
    param_3 = (code *******)pppppppcVar8[0x4f];
    pppppppcVar33 = (code *******)pppppppcVar8[0x50];
    uVar27 = (long)pppppppcVar33 - (long)param_3;
    ppppppcVar11 = pppppppcVar8[0x57];
    pppppppcVar29 = (code *******)pppppppcVar8[0x55];
    if ((ulong)((long)ppppppcVar11 - (long)pppppppcVar29) < uVar27) {
      pppppppcVar30 = (code *******)((long)uVar27 >> 4);
      if (pppppppcVar29 != (code *******)0x0) {
        pppppppcVar8[0x56] = (code ******)pppppppcVar29;
        __ZdlPv();
        ppppppcVar11 = (code ******)0x0;
        pppppppcVar8[0x55] = (code ******)0x0;
        pppppppcVar8[0x56] = (code ******)0x0;
        pppppppcVar8[0x57] = (code ******)0x0;
        pppppppcVar31 = pppppppcVar29;
      }
      if ((ulong)pppppppcVar30 >> 0x3c != 0) goto LAB_10a418cb0;
      pppppppcVar31 = (code *******)((long)ppppppcVar11 >> 3);
      if ((code *******)((long)ppppppcVar11 >> 3) <= pppppppcVar30) {
        pppppppcVar31 = pppppppcVar30;
      }
      if ((code ******)0x7fffffffffffffef < ppppppcVar11) {
        pppppppcVar31 = (code *******)0xfffffffffffffff;
      }
      if ((ulong)pppppppcVar31 >> 0x3c != 0) goto LAB_10a418cb0;
      FUN_10a436570();
      pppppppcVar8[0x55] = (code ******)pppppppcVar31;
      pppppppcVar8[0x56] = (code ******)pppppppcVar31;
      pppppppcVar8[0x57] = (code ******)(pppppppcVar31 + (long)pppppppcVar37 * 2);
      pppppppcVar29 = pppppppcVar31;
LAB_10a418164:
      if (pppppppcVar33 != param_3) {
        pppppppcVar37 = param_3;
        _memmove(pppppppcVar29,param_3,uVar27);
      }
      ppppppcVar11 = (code ******)((long)pppppppcVar29 + uVar27);
    }
    else {
      pppppppcVar31 = (code *******)pppppppcVar8[0x56];
      if (uVar27 <= (ulong)((long)pppppppcVar31 - (long)pppppppcVar29)) goto LAB_10a418164;
      pppppppcVar30 = (code *******)((long)param_3 + ((long)pppppppcVar31 - (long)pppppppcVar29));
      if (pppppppcVar31 != pppppppcVar29) {
        _memmove(pppppppcVar29);
        pppppppcVar31 = (code *******)pppppppcVar8[0x56];
        pppppppcVar37 = param_3;
      }
      param_3 = (code *******)((long)pppppppcVar33 - (long)pppppppcVar30);
      if (param_3 != (code *******)0x0) {
        _memmove(pppppppcVar31,pppppppcVar30,param_3);
        pppppppcVar37 = pppppppcVar30;
      }
      ppppppcVar11 = (code ******)((long)pppppppcVar31 + (long)param_3);
    }
    pppppppcVar8[0x56] = ppppppcVar11;
    pppppppcStack_248 = (code *******)0x0;
    pppppppcStack_240 = (code *******)0x0;
    pppppppcStack_238 = (code *******)0x0;
    ppppppcVar9 = pppppppcVar8[0x55];
    if (ppppppcVar9 != ppppppcVar11) {
      unaff_x25 = (code ******)0x9ddfea08eb382d69;
      param_3 = pppppppcVar8 + 0x5d;
      pppppppcVar31 = pppppppcVar8 + 0x5f;
      pppppppcVar29 = pppppppcVar37;
      do {
        pppppppcVar33 = (code *******)(*ppppppcVar9)[0x22];
        ppppppcVar26 = (code ******)(*ppppppcVar9)[0x23];
        if (ppppppcVar26 != (code ******)0x0) {
          ppppppcVar38 = ppppppcVar26 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppcVar38,0x10);
            if (bVar7) {
              *ppppppcVar38 = (code *****)((long)*ppppppcVar38 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppppcVar37 = pppppppcVar29;
        pppppppcStack_230 = pppppppcVar33;
        ppppppcStack_228 = ppppppcVar26;
        if (2 < (ulong)(((long)pppppppcVar33[2] - (long)pppppppcVar33[1] >> 4) * -0x5555555555555555
                       )) {
          FUN_10aa8113c(*(undefined4 *)(ppppppcVar9 + 1),*(undefined4 *)((long)ppppppcVar9 + 0xc));
          pppppppcVar37 = (code *******)0x0;
          if (pppppppcVar29 != (code *******)0x0) {
            pppppppcVar29 = pppppppcVar33 + (long)pppppppcVar29 * 6;
            do {
              pppppppcVar34 = (code *******)pppppppcVar33[1];
              pppppppcVar30 = param_3;
              pppppppcVar37 = pppppppcVar34;
              FUN_10a440484();
              if (pppppppcVar30 == (code *******)0x0) {
                pppppppcVar30 = pppppppcVar8 + 0x62;
                pppppppcVar37 = pppppppcVar34;
                FUN_10a440484();
                if (pppppppcVar30 == (code *******)0x0) {
                  uVar27 = ((ulong)(uint)((int)pppppppcVar34 << 3) + 8 ^
                           (ulong)pppppppcVar34 >> 0x20) * -0x622015f714c7d297;
                  uVar27 = ((ulong)pppppppcVar34 >> 0x20 ^ uVar27 >> 0x2f ^ uVar27) *
                           -0x622015f714c7d297;
                  pppppppcVar28 = (code *******)((uVar27 ^ uVar27 >> 0x2f) * -0x622015f714c7d297);
                  pppppppcVar30 = (code *******)pppppppcVar8[0x5e];
                  pppppppcVar37 = pppppppcVar8;
                  if (pppppppcVar30 != (code *******)0x0) {
                    uVar27 = (long)pppppppcVar30 - 1;
                    if (((ulong)pppppppcVar30 & uVar27) == 0) {
                      pppppppcVar37 = (code *******)(uVar27 & (ulong)pppppppcVar28);
                    }
                    else {
                      pppppppcVar37 = pppppppcVar28;
                      if (pppppppcVar30 <= pppppppcVar28) {
                        uVar22 = 0;
                        if (pppppppcVar30 != (code *******)0x0) {
                          uVar22 = (ulong)pppppppcVar28 / (ulong)pppppppcVar30;
                        }
                        pppppppcVar37 =
                             (code *******)((long)pppppppcVar28 - uVar22 * (long)pppppppcVar30);
                      }
                    }
                    pppppcVar35 = (*param_3)[(long)pppppppcVar37];
                    if (pppppcVar35 != (code *****)0x0) {
                      do {
                        while( true ) {
                          pppppcVar35 = (code *****)*pppppcVar35;
                          if (pppppcVar35 == (code *****)0x0) goto LAB_10a4182ec;
                          pppppppcVar20 = (code *******)pppppcVar35[1];
                          if (pppppppcVar20 != pppppppcVar28) break;
                          if ((code *******)pppppcVar35[2] == pppppppcVar34) goto LAB_10a418588;
                        }
                        if (((ulong)pppppppcVar30 & uVar27) == 0) {
                          pppppppcVar20 = (code *******)((ulong)pppppppcVar20 & uVar27);
                        }
                        else if (pppppppcVar30 <= pppppppcVar20) {
                          uVar22 = 0;
                          if (pppppppcVar30 != (code *******)0x0) {
                            uVar22 = (ulong)pppppppcVar20 / (ulong)pppppppcVar30;
                          }
                          pppppppcVar20 =
                               (code *******)((long)pppppppcVar20 - uVar22 * (long)pppppppcVar30);
                        }
                      } while (pppppppcVar20 == pppppppcVar37);
                    }
                  }
LAB_10a4182ec:
                  ppppppcVar38 = (code ******)0x18;
                  __Znwm();
                  *ppppppcVar38 = (code *****)0x0;
                  ppppppcVar38[1] = (code *****)pppppppcVar28;
                  ppppppcVar38[2] = (code *****)pppppppcVar34;
                  if ((pppppppcVar30 == (code *******)0x0) ||
                     (*(float *)(pppppppcVar8 + 0x61) * (float)pppppppcVar30 <
                      (float)((long)pppppppcVar8[0x60] + 1))) {
                    uVar27 = 1;
                    if ((code *******)0x2 < pppppppcVar30) {
                      uVar27 = (ulong)(((ulong)pppppppcVar30 & (long)pppppppcVar30 - 1U) != 0);
                    }
                    pppppppcVar37 = (code *******)(uVar27 | (long)pppppppcVar30 << 1);
                    pppppppcVar34 =
                         (code *******)
                         (long)((float)((long)pppppppcVar8[0x60] + 1) /
                               *(float *)(pppppppcVar8 + 0x61));
                    if (pppppppcVar37 <= pppppppcVar34) {
                      pppppppcVar37 = pppppppcVar34;
                    }
                    if ((long)pppppppcVar37 - 1U == 0) {
                      pppppppcVar37 = (code *******)0x2;
                    }
                    else if (((ulong)pppppppcVar37 & (long)pppppppcVar37 - 1U) != 0) {
                      __ZNSt3__112__next_primeEm();
                      pppppppcVar30 = (code *******)pppppppcVar8[0x5e];
                    }
                    if (pppppppcVar30 < pppppppcVar37) {
LAB_10a418390:
                      pppppppcVar30 = pppppppcVar37;
                      if ((ulong)pppppppcVar30 >> 0x3d != 0) {
                        func_0x000109ffded8();
                        goto LAB_10a418ca8;
                      }
                      ppppppcVar21 = (code ******)((long)pppppppcVar30 << 3);
                      __Znwm();
                      ppppppcVar23 = *param_3;
                      *param_3 = ppppppcVar21;
                      if (ppppppcVar23 != (code ******)0x0) {
                        __ZdlPv();
                      }
                      pppppppcVar37 = (code *******)0x0;
                      pppppppcVar8[0x5e] = (code ******)pppppppcVar30;
                      do {
                        (*param_3)[(long)pppppppcVar37] = (code *****)0x0;
                        pppppppcVar37 = (code *******)((long)pppppppcVar37 + 1);
                      } while (pppppppcVar30 != pppppppcVar37);
                      ppppppcVar21 = *pppppppcVar31;
                      if (ppppppcVar21 != (code ******)0x0) {
                        pppppppcVar37 = (code *******)ppppppcVar21[1];
                        uVar27 = (long)pppppppcVar30 - 1;
                        if (((ulong)pppppppcVar30 & uVar27) == 0) {
                          pppppppcVar37 = (code *******)((ulong)pppppppcVar37 & uVar27);
                        }
                        else if (pppppppcVar30 <= pppppppcVar37) {
                          uVar22 = 0;
                          if (pppppppcVar30 != (code *******)0x0) {
                            uVar22 = (ulong)pppppppcVar37 / (ulong)pppppppcVar30;
                          }
                          pppppppcVar37 =
                               (code *******)((long)pppppppcVar37 - uVar22 * (long)pppppppcVar30);
                        }
                        (*param_3)[(long)pppppppcVar37] = (code *****)pppppppcVar31;
                        ppppppcVar23 = (code ******)*ppppppcVar21;
                        while (ppppppcVar23 != (code ******)0x0) {
                          pppppppcVar34 = (code *******)ppppppcVar23[1];
                          if (((ulong)pppppppcVar30 & uVar27) == 0) {
                            pppppppcVar34 = (code *******)((ulong)pppppppcVar34 & uVar27);
                          }
                          else if (pppppppcVar30 <= pppppppcVar34) {
                            uVar22 = 0;
                            if (pppppppcVar30 != (code *******)0x0) {
                              uVar22 = (ulong)pppppppcVar34 / (ulong)pppppppcVar30;
                            }
                            pppppppcVar34 =
                                 (code *******)((long)pppppppcVar34 - uVar22 * (long)pppppppcVar30);
                          }
                          ppppppcVar16 = ppppppcVar23;
                          if (pppppppcVar34 != pppppppcVar37) {
                            ppppppcVar24 = *param_3;
                            if (ppppppcVar24[(long)pppppppcVar34] == (code *****)0x0) {
                              ppppppcVar24[(long)pppppppcVar34] = (code *****)ppppppcVar21;
                              pppppppcVar37 = pppppppcVar34;
                            }
                            else {
                              *ppppppcVar21 = *ppppppcVar23;
                              *ppppppcVar23 = (code *****)*ppppppcVar24[(long)pppppppcVar34];
                              *ppppppcVar24[(long)pppppppcVar34] = (code ****)ppppppcVar23;
                              ppppppcVar16 = ppppppcVar21;
                            }
                          }
                          ppppppcVar21 = ppppppcVar16;
                          ppppppcVar23 = (code ******)*ppppppcVar16;
                        }
                      }
                    }
                    else if (pppppppcVar37 < pppppppcVar30) {
                      pppppppcVar34 =
                           (code *******)
                           (long)((float)pppppppcVar8[0x60] / *(float *)(pppppppcVar8 + 0x61));
                      if ((pppppppcVar30 < (code *******)0x3) ||
                         (((ulong)pppppppcVar30 & (long)pppppppcVar30 - 1U) != 0)) {
                        __ZNSt3__112__next_primeEm();
                      }
                      else if ((code *******)0x1 < pppppppcVar34) {
                        pppppppcVar34 =
                             (code *******)(1L << (-LZCOUNT((long)pppppppcVar34 + -1) & 0x3fU));
                      }
                      if (pppppppcVar37 <= pppppppcVar34) {
                        pppppppcVar37 = pppppppcVar34;
                      }
                      if (pppppppcVar37 < pppppppcVar30) {
                        if (pppppppcVar37 != (code *******)0x0) goto LAB_10a418390;
                        ppppppcVar21 = *param_3;
                        *param_3 = (code ******)0x0;
                        if (ppppppcVar21 != (code ******)0x0) {
                          __ZdlPv();
                        }
                        pppppppcVar30 = (code *******)0x0;
                        pppppppcVar8[0x5e] = (code ******)0x0;
                      }
                      else {
                        pppppppcVar30 = (code *******)pppppppcVar8[0x5e];
                      }
                    }
                    if (((ulong)pppppppcVar30 & (long)pppppppcVar30 - 1U) == 0) {
                      pppppppcVar37 =
                           (code *******)((long)pppppppcVar30 - 1U & (ulong)pppppppcVar28);
                    }
                    else {
                      pppppppcVar37 = pppppppcVar28;
                      if (pppppppcVar30 <= pppppppcVar28) {
                        uVar27 = 0;
                        if (pppppppcVar30 != (code *******)0x0) {
                          uVar27 = (ulong)pppppppcVar28 / (ulong)pppppppcVar30;
                        }
                        pppppppcVar37 =
                             (code *******)((long)pppppppcVar28 - uVar27 * (long)pppppppcVar30);
                      }
                    }
                  }
                  ppppppcVar23 = *param_3;
                  ppppppcVar21 = (code ******)ppppppcVar23[(long)pppppppcVar37];
                  if (ppppppcVar21 == (code ******)0x0) {
                    *ppppppcVar38 = (code *****)*pppppppcVar31;
                    *pppppppcVar31 = ppppppcVar38;
                    ppppppcVar23[(long)pppppppcVar37] = (code *****)pppppppcVar31;
                    if (*ppppppcVar38 != (code *****)0x0) {
                      pppppppcVar37 = (code *******)(*ppppppcVar38)[1];
                      if (((ulong)pppppppcVar30 & (long)pppppppcVar30 - 1U) == 0) {
                        pppppppcVar37 =
                             (code *******)((ulong)pppppppcVar37 & (long)pppppppcVar30 - 1U);
                      }
                      else if (pppppppcVar30 <= pppppppcVar37) {
                        uVar27 = 0;
                        if (pppppppcVar30 != (code *******)0x0) {
                          uVar27 = (ulong)pppppppcVar37 / (ulong)pppppppcVar30;
                        }
                        pppppppcVar37 =
                             (code *******)((long)pppppppcVar37 - uVar27 * (long)pppppppcVar30);
                      }
                      ppppppcVar21 = *param_3 + (long)pppppppcVar37;
                      goto LAB_10a418578;
                    }
                  }
                  else {
                    *ppppppcVar38 = *ppppppcVar21;
LAB_10a418578:
                    *ppppppcVar21 = (code *****)ppppppcVar38;
                  }
                  pppppppcVar8[0x60] = (code ******)((long)pppppppcVar8[0x60] + 1);
LAB_10a418588:
                  pppppppcVar30 = pppppppcStack_240;
                  if (pppppppcStack_240 < pppppppcStack_238) {
                    pppppppcVar37 = pppppppcVar33;
                    FUN_10a4365a4(pppppppcStack_240);
                    pppppppcStack_240 = pppppppcVar30 + 6;
                  }
                  else {
                    lVar14 = (long)pppppppcStack_240 - (long)pppppppcStack_248;
                    uVar27 = (lVar14 >> 4) * -0x5555555555555555 + 1;
                    if (0x555555555555555 < uVar27) {
                      FUN_10a43668c();
LAB_10a418ca8:
                    /* WARNING: Does not return */
                      pcVar13 = (code *)SoftwareBreakpoint(1,0x10a418cac);
                      (*pcVar13)();
                    }
                    lVar18 = (long)pppppppcStack_238 - (long)pppppppcStack_248 >> 4;
                    uVar22 = lVar18 * 0x5555555555555556;
                    if (uVar22 < uVar27 || uVar22 - uVar27 == 0) {
                      uVar22 = uVar27;
                    }
                    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar18 * -0x5555555555555555)) {
                      uVar22 = 0x555555555555555;
                    }
                    pppppppcStack_1c0 = (code *******)&pppppppcStack_248;
                    if (uVar22 == 0) {
                      pppppppcVar37 = (code *******)0x0;
                    }
                    else {
                      pppppppcVar37 = (code *******)&pppppppcStack_248;
                      FUN_10a4366a0();
                    }
                    ppppppcVar38 = (code ******)((long)pppppppcVar37 + lVar14);
                    pppppppcStack_1c8 = pppppppcVar37 + uVar22 * 6;
                    pppppppcStack_1e0 = pppppppcVar37;
                    pppppppcStack_1d8 = (code *******)ppppppcVar38;
                    pppppppcStack_1d0 = (code *******)ppppppcVar38;
                    FUN_10a4365a4(ppppppcVar38,pppppppcVar33);
                    pppppppcStack_1d0 = (code *******)(ppppppcVar38 + 6);
                    pppppppcVar30 =
                         (code *******)
                         ((long)pppppppcStack_248 + ((long)ppppppcVar38 - (long)pppppppcStack_240));
                    pppppppcVar37 = pppppppcStack_248;
                    func_0x00010a4366e4(&pppppppcStack_248,pppppppcStack_248,pppppppcStack_240,
                                        pppppppcVar30);
                    pppppppcVar28 = pppppppcStack_1d0;
                    pppppppcVar34 = pppppppcStack_238;
                    pppppppcStack_238 = pppppppcStack_1c8;
                    pppppppcStack_240 = pppppppcStack_1d0;
                    pppppppcStack_1d0 = pppppppcStack_248;
                    pppppppcStack_1c8 = pppppppcVar34;
                    pppppppcStack_1e0 = pppppppcStack_248;
                    pppppppcStack_1d8 = pppppppcStack_248;
                    pppppppcStack_248 = pppppppcVar30;
                    func_0x00010a436790(&pppppppcStack_1e0);
                    pppppppcStack_240 = pppppppcVar28;
                  }
                }
              }
              pppppppcVar33 = pppppppcVar33 + 6;
            } while (pppppppcVar33 != pppppppcVar29);
          }
        }
        if (ppppppcVar26 != (code ******)0x0) {
          ppppppcVar38 = ppppppcVar26 + 1;
          do {
            pppppcVar35 = *ppppppcVar38;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppcVar38,0x10);
            if (bVar7) {
              *ppppppcVar38 = (code *****)((long)pppppcVar35 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppcVar35 == (code *****)0x0) {
            (*(code *)(*ppppppcVar26)[2])(ppppppcVar26);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar26);
          }
        }
        pppppppcVar33 = pppppppcStack_240;
        ppppppcVar9 = ppppppcVar9 + 2;
        pppppppcVar29 = pppppppcVar37;
      } while (ppppppcVar9 != ppppppcVar11);
      if (pppppppcStack_248 != pppppppcStack_240) {
        pppppppcVar31 = pppppppcStack_248;
        do {
          ppppppcVar11 = pppppppcVar8[0x42];
          param_3 = (code *******)0x48;
          __Znwm();
          param_3[1] = (code ******)0x0;
          param_3[2] = (code ******)0x0;
          *param_3 = (code ******)&PTR_DAT_110bd9710;
          if (*(char *)((long)pppppppcVar31 + 0x2f) < '\0') {
            func_0x000107c3192c(&pppppppcStack_1e0,pppppppcVar31[3],pppppppcVar31[4]);
          }
          else {
            pppppppcStack_1d8 = (code *******)pppppppcVar31[4];
            pppppppcStack_1e0 = (code *******)pppppppcVar31[3];
            pppppppcStack_1d0 = (code *******)pppppppcVar31[5];
          }
          pppppppcStack_260 = param_3 + 3;
          *pppppppcStack_260 = (code ******)&PTR_DAT_110bd46b8;
          param_3[4] = (code ******)0x0;
          param_3[5] = (code ******)0x0;
          param_3[7] = (code ******)pppppppcStack_1d8;
          param_3[6] = (code ******)pppppppcStack_1e0;
          param_3[8] = (code ******)pppppppcStack_1d0;
          ppppppcStack_228 = (code ******)0x0;
          pppppppcStack_230 = (code *******)0x0;
          lStack_218 = 0;
          ppppppcStack_220 = (code ******)0x0;
          fStack_210 = *(float *)(ppppppcVar11 + 7);
          pppppppcVar37 = (code *******)ppppppcVar11[4];
          pppppppcStack_258 = param_3;
          FUN_10a43ed84(&pppppppcStack_230);
          ppppppcVar26 = ppppppcStack_228;
          ppppppcVar38 = ppppppcStack_220;
          for (pppppcVar35 = ppppppcVar11[5]; ppppppcStack_228 = ppppppcVar26,
              ppppppcStack_220 = ppppppcVar38, pppppcVar35 != (code *****)0x0;
              pppppcVar35 = (code *****)*pppppcVar35) {
            pppppcVar12 = (code *****)pppppcVar35[2];
            uVar27 = ((ulong)(uint)((int)pppppcVar12 << 3) + 8 ^ (ulong)pppppcVar12 >> 0x20) *
                     -0x622015f714c7d297;
            uVar27 = ((ulong)pppppcVar12 >> 0x20 ^ uVar27 >> 0x2f ^ uVar27) * -0x622015f714c7d297;
            ppppppcVar38 = (code ******)((uVar27 ^ uVar27 >> 0x2f) * -0x622015f714c7d297);
            if (ppppppcVar26 != (code ******)0x0) {
              uVar27 = (long)ppppppcVar26 - 1;
              if (((ulong)ppppppcVar26 & uVar27) == 0) {
                ppppppcVar9 = (code ******)((ulong)ppppppcVar38 & uVar27);
              }
              else {
                ppppppcVar9 = ppppppcVar38;
                if (ppppppcVar26 <= ppppppcVar38) {
                  uVar22 = 0;
                  if (ppppppcVar26 != (code ******)0x0) {
                    uVar22 = (ulong)ppppppcVar38 / (ulong)ppppppcVar26;
                  }
                  ppppppcVar9 = (code ******)((long)ppppppcVar38 - uVar22 * (long)ppppppcVar26);
                }
              }
              ppppppcVar21 = pppppppcStack_230[(long)ppppppcVar9];
              if (ppppppcVar21 != (code ******)0x0) {
                do {
                  while( true ) {
                    ppppppcVar21 = (code ******)*ppppppcVar21;
                    if (ppppppcVar21 == (code ******)0x0) goto LAB_10a41889c;
                    ppppppcVar23 = (code ******)ppppppcVar21[1];
                    if (ppppppcVar23 != ppppppcVar38) break;
                    if (ppppppcVar21[2] == pppppcVar12) goto LAB_10a418a00;
                  }
                  if (((ulong)ppppppcVar26 & uVar27) == 0) {
                    ppppppcVar23 = (code ******)((ulong)ppppppcVar23 & uVar27);
                  }
                  else if (ppppppcVar26 <= ppppppcVar23) {
                    uVar22 = 0;
                    if (ppppppcVar26 != (code ******)0x0) {
                      uVar22 = (ulong)ppppppcVar23 / (ulong)ppppppcVar26;
                    }
                    ppppppcVar23 = (code ******)((long)ppppppcVar23 - uVar22 * (long)ppppppcVar26);
                  }
                } while (ppppppcVar23 == ppppppcVar9);
              }
            }
LAB_10a41889c:
            ppppppcVar21 = (code ******)0x68;
            __Znwm();
            *ppppppcVar21 = (code *****)0x0;
            ppppppcVar21[1] = (code *****)ppppppcVar38;
            ppppcVar32 = pppppcVar35[3];
            pppppcVar12 = (code *****)pppppcVar35[2];
            ppppppcVar21[3] = (code *****)pppppcVar35[3];
            ppppppcVar21[2] = pppppcVar12;
            if (ppppcVar32 != (code ****)0x0) {
              ppppcVar32 = ppppcVar32 + 1;
              do {
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(ppppcVar32,0x10);
                if (bVar7) {
                  *ppppcVar32 = (code ***)((long)*ppppcVar32 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            pppppppcStack_1e0 = (code *******)(ppppppcVar21 + 4);
            *(undefined1 *)(ppppppcVar21 + 0xc) = 3;
            if (*(code *)(pppppcVar35 + 0xc) == (code)0x0) {
              cVar10 = (code)0x0;
            }
            else {
              pppppppcVar37 = (code *******)(pppppcVar35 + 4);
              FUN_10a005398(&pppppppcStack_1e0);
              cVar10 = *(code *)(pppppcVar35 + 0xc);
            }
            *(code *)(ppppppcVar21 + 0xc) = cVar10;
            if ((ppppppcVar26 == (code ******)0x0) ||
               (fStack_210 * (float)ppppppcVar26 < (float)(lStack_218 + 1))) {
              uVar27 = 1;
              if ((code ******)0x2 < ppppppcVar26) {
                uVar27 = (ulong)(((ulong)ppppppcVar26 & (long)ppppppcVar26 - 1U) != 0);
              }
              pppppppcVar37 = (code *******)(uVar27 | (long)ppppppcVar26 << 1);
              pppppppcVar29 = (code *******)(long)((float)(lStack_218 + 1) / fStack_210);
              if (pppppppcVar37 <= pppppppcVar29) {
                pppppppcVar37 = pppppppcVar29;
              }
              FUN_10a43ed84(&pppppppcStack_230);
              ppppppcVar26 = ppppppcStack_228;
              if (((ulong)ppppppcStack_228 & (long)ppppppcStack_228 - 1U) == 0) {
                ppppppcVar9 = (code ******)((long)ppppppcStack_228 - 1U & (ulong)ppppppcVar38);
              }
              else {
                ppppppcVar9 = ppppppcVar38;
                if (ppppppcStack_228 <= ppppppcVar38) {
                  uVar27 = 0;
                  if (ppppppcStack_228 != (code ******)0x0) {
                    uVar27 = (ulong)ppppppcVar38 / (ulong)ppppppcStack_228;
                  }
                  ppppppcVar9 = (code ******)((long)ppppppcVar38 - uVar27 * (long)ppppppcStack_228);
                }
              }
            }
            ppppppcVar38 = pppppppcStack_230[(long)ppppppcVar9];
            if (ppppppcVar38 == (code ******)0x0) {
              *ppppppcVar21 = (code *****)ppppppcStack_220;
              pppppppcStack_230[(long)ppppppcVar9] = (code ******)&ppppppcStack_220;
              ppppppcStack_220 = ppppppcVar21;
              if (*ppppppcVar21 != (code *****)0x0) {
                ppppppcVar38 = (code ******)(*ppppppcVar21)[1];
                if (((ulong)ppppppcVar26 & (long)ppppppcVar26 - 1U) == 0) {
                  ppppppcVar38 = (code ******)((ulong)ppppppcVar38 & (long)ppppppcVar26 - 1U);
                }
                else if (ppppppcVar26 <= ppppppcVar38) {
                  uVar27 = 0;
                  if (ppppppcVar26 != (code ******)0x0) {
                    uVar27 = (ulong)ppppppcVar38 / (ulong)ppppppcVar26;
                  }
                  ppppppcVar38 = (code ******)((long)ppppppcVar38 - uVar27 * (long)ppppppcVar26);
                }
                pppppppcStack_230[(long)ppppppcVar38] = ppppppcVar21;
              }
            }
            else {
              *ppppppcVar21 = *ppppppcVar38;
              *ppppppcVar38 = (code *****)ppppppcVar21;
            }
            lStack_218 = lStack_218 + 1;
LAB_10a418a00:
            ppppppcVar26 = ppppppcStack_228;
            ppppppcVar38 = ppppppcStack_220;
          }
          if (ppppppcVar38 == (code ******)0x0) {
            FUN_10a43fd9c(&pppppppcStack_230);
LAB_10a418c10:
            pppppppcVar29 = param_3 + 1;
            do {
              ppppppcVar11 = *pppppppcVar29;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar29,0x10);
              if (bVar7) {
                *pppppppcVar29 = (code ******)((long)ppppppcVar11 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppppppcVar11 == (code ******)0x0) {
              (*(code *)(*param_3)[2])(param_3);
              __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
            }
          }
          else {
            do {
              pppppppcVar29 = (code *******)ppppppcVar38[2];
              ppppppcVar26 = ppppppcVar11 + 3;
              FUN_10a43f794();
              pppppppcVar37 = pppppppcVar29;
              if (ppppppcVar26 != (code ******)0x0) {
                if (*(char *)(ppppppcVar38 + 0xc) == '\x01') {
                  pppppcVar35 = ppppppcVar38[4];
                  pppppppcStack_1d8 = pppppppcStack_258;
                  pppppppcStack_1e0 = pppppppcStack_260;
                  if (pppppppcStack_258 != (code *******)0x0) {
                    pppppppcVar37 = pppppppcStack_258 + 1;
                    do {
                      cVar4 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar37,0x10);
                      if (bVar7) {
                        *pppppppcVar37 = (code ******)((long)*pppppppcVar37 + 1);
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                  pppppppcVar37 = (code *******)(ppppppcVar38 + 4);
                  (*(code *)pppppcVar35)(&pppppppcStack_1e0);
                  if (pppppppcStack_1d8 != (code *******)0x0) {
                    pppppppcVar29 = pppppppcStack_1d8 + 1;
                    do {
                      ppppppcVar26 = *pppppppcVar29;
                      cVar4 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar29,0x10);
                      if (bVar7) {
                        *pppppppcVar29 = (code ******)((long)ppppppcVar26 + -1);
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                      pppppppcVar30 = pppppppcStack_1d8;
                    } while (cVar4 != '\0');
LAB_10a418ac8:
                    if (ppppppcVar26 == (code ******)0x0) {
                      (*(code *)(*pppppppcVar30)[2])(pppppppcVar30);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar30);
                    }
                  }
                }
                else if (*(char *)(ppppppcVar38 + 0xc) == '\x02') {
                  ppppppcVar26 = ppppppcVar38 + 4;
                  FUN_10a688b40();
                  pppppppcVar30 = pppppppcStack_258;
                  if (ppppppcVar26 == (code ******)0x0) {
                    pppppppcVar37 = (code *******)0x0;
                    if (pppppppcVar29 != (code *******)0x0) {
                      pppppppcStack_1d0 = (code *******)ppppppcVar38[4];
                      pppppppcStack_1c8 = (code *******)ppppppcVar38[5];
                      if (pppppppcStack_1c8 != (code *******)0x0) {
                        pppppppcVar37 = pppppppcStack_1c8 + 1;
                        do {
                          cVar4 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar37,0x10);
                          if (bVar7) {
                            *pppppppcVar37 = (code ******)((long)*pppppppcVar37 + 1);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                      }
                      pppppppcStack_1f0 = pppppppcStack_260;
                      pppppppcStack_1e8 = pppppppcStack_258;
                      if (pppppppcStack_258 == (code *******)0x0) {
                        pppppppcStack_1b8 = (code *******)0x0;
                      }
                      else {
                        pppppppcVar37 = pppppppcStack_258 + 1;
                        do {
                          cVar4 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar37,0x10);
                          if (bVar7) {
                            *pppppppcVar37 = (code ******)((long)*pppppppcVar37 + 1);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        pppppppcStack_1b8 = pppppppcStack_258;
                        do {
                          cVar4 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar37,0x10);
                          if (bVar7) {
                            *pppppppcVar37 = (code ******)((long)*pppppppcVar37 + 1);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                      }
                      pppppppcStack_1c0 = pppppppcStack_260;
                      pppppppcStack_1d8 = (code *******)&PTR_FUN_110bd9750;
                      pppppppcStack_1f8 = (code *******)0x0;
                      pppppppcStack_200 = (code *******)0x0;
                      pppppppcStack_1e0 = (code *******)FUN_10a4407f4;
                      pppppppcVar37 = (code *******)&pppppppcStack_1e0;
                      FUN_10a4634ec(pppppppcVar29);
                      (*(code *)*pppppppcStack_1d8)(&pppppppcStack_1d8);
                      if (pppppppcVar30 != (code *******)0x0) {
                        pppppppcVar29 = pppppppcVar30 + 1;
                        do {
                          ppppppcVar26 = *pppppppcVar29;
                          cVar4 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar29,0x10);
                          if (bVar7) {
                            *pppppppcVar29 = (code ******)((long)ppppppcVar26 + -1);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        if (ppppppcVar26 == (code ******)0x0) {
                          (*(code *)(*pppppppcVar30)[2])(pppppppcVar30);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar30);
                        }
                      }
                      if (pppppppcStack_1f8 != (code *******)0x0) {
                        pppppppcVar29 = pppppppcStack_1f8 + 1;
                        do {
                          ppppppcVar26 = *pppppppcVar29;
                          cVar4 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar29,0x10);
                          if (bVar7) {
                            *pppppppcVar29 = (code ******)((long)ppppppcVar26 + -1);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                          pppppppcVar30 = pppppppcStack_1f8;
                        } while (cVar4 != '\0');
                        goto LAB_10a418ac8;
                      }
                    }
                  }
                  else {
                    *ppppppcVar26 =
                         (code *****)
                         CONCAT44((int)((ulong)*ppppppcVar26 >> 0x20) + 1,(int)*ppppppcVar26 + 1);
                    pppppppcVar37 = (code *******)&pppppppcStack_260;
                    FUN_10a4405f0(ppppppcVar38[4]);
                    iVar5 = *(int *)((long)ppppppcVar26 + 4) + -1;
                    *(int *)((long)ppppppcVar26 + 4) = iVar5;
                    if (iVar5 == 0) {
                      *(undefined4 *)ppppppcVar26 = 0;
                    }
                  }
                }
              }
              param_3 = pppppppcStack_258;
              ppppppcVar38 = (code ******)*ppppppcVar38;
            } while (ppppppcVar38 != (code ******)0x0);
            FUN_10a43fd9c(&pppppppcStack_230);
            if (param_3 != (code *******)0x0) goto LAB_10a418c10;
          }
          pppppppcVar31 = pppppppcVar31 + 6;
        } while (pppppppcVar31 != pppppppcVar33);
      }
    }
    pppppppcStack_1e0 = (code *******)&pppppppcStack_248;
    pppppppcVar31 = (code *******)&pppppppcStack_1e0;
    FUN_10a4367dc();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10a418cb0:
  FUN_10a43655c();
  __ZNSt3__119__shared_weak_countD2Ev(param_3);
  __ZdlPv();
  pppppppcStack_200 = (code *******)&pppppppcStack_248;
  FUN_10a4367dc(&pppppppcStack_200);
  __Unwind_Resume();
  ppppppcVar11 = pppppppcVar31[0x47];
  ppppppcVar9 = pppppppcVar31[0x46];
  if (ppppppcVar11 != ppppppcVar9) {
    uVar27 = 0;
    pppppppcVar8 = pppppppcVar31 + 0x58;
    pppppppcVar29 = pppppppcVar31 + 0x5a;
    do {
      ppppppcVar26 = ppppppcVar9 + uVar27 * 10;
      pppppcVar35 = ppppppcVar26[7];
      pppppcVar12 = ppppppcVar26[8];
      if (pppppcVar35 != pppppcVar12) {
        do {
          ppppcVar32 = *pppppcVar35;
          if (*(code *)(ppppcVar32 + 0x6b) == (code)0x1) {
            FUN_10a440978(pppppppcVar8);
            ppppppcVar9 = pppppppcVar37[1];
            for (ppppppcVar11 = *pppppppcVar37; ppppppcVar11 != ppppppcVar9;
                ppppppcVar11 = ppppppcVar11 + 4) {
              FUN_10aa71aa0(&ppppppcStack_350,(*ppppppcVar11)[8],ppppppcVar26);
              if ((uVar27 == 0) && (ppppppcStack_350 == (code ******)0x0)) {
                ppppcVar25 = (*ppppppcVar11)[8];
                FUN_10a416ae4();
                FUN_10aa71aa0(&ppppppcStack_340,ppppcVar25,0x1137eb188);
                pppppppcVar30 = pppppppcStack_338;
                ppppppcStack_350 = ppppppcStack_340;
                pppppppcVar33 = pppppppcStack_348;
                ppppppcStack_340 = (code ******)0x0;
                pppppppcStack_338 = (code *******)0x0;
                pppppppcStack_348 = pppppppcVar30;
                if (pppppppcVar33 != (code *******)0x0) {
                  pppppppcVar30 = pppppppcVar33 + 1;
                  do {
                    ppppppcVar38 = *pppppppcVar30;
                    cVar4 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                    if (bVar7) {
                      *pppppppcVar30 = (code ******)((long)ppppppcVar38 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (ppppppcVar38 == (code ******)0x0) {
                    (*(code *)(*pppppppcVar33)[2])(pppppppcVar33);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar33);
                  }
                }
                pppppppcVar33 = pppppppcStack_338;
                if (pppppppcStack_338 != (code *******)0x0) {
                  pppppppcVar30 = pppppppcStack_338 + 1;
                  do {
                    ppppppcVar38 = *pppppppcVar30;
                    cVar4 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                    if (bVar7) {
                      *pppppppcVar30 = (code ******)((long)ppppppcVar38 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (ppppppcVar38 == (code ******)0x0) {
                    (*(code *)(*pppppppcStack_338)[2])(pppppppcStack_338);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar33);
                  }
                }
              }
              if ((ppppppcStack_350 != (code ******)0x0) &&
                 (pppppcVar36 = ppppppcStack_350[0x11], pppppcVar36 != (code *****)0x0)) {
                fVar44 = *(float *)(*ppppppcVar11 + 10);
                fVar39 = *(float *)(ppppppcVar11 + 2);
                do {
                  ppppcVar25 = ppppcVar32 + 99;
                  FUN_10a428b30(ppppcVar25,pppppcVar36 + 2);
                  if ((int)ppppcVar25 != 0) {
                    ppppppcVar21 = (code ******)pppppcVar36[5];
                    ppppppcVar38 = pppppppcVar31[0x59];
                    if (ppppppcVar38 != (code ******)0x0) {
                      pcVar13 = (code *)((long)ppppppcVar38 + -1);
                      if (((ulong)ppppppcVar38 & (ulong)pcVar13) == 0) {
                        unaff_x25 = (code ******)((ulong)pcVar13 & (ulong)ppppppcVar21);
                      }
                      else {
                        unaff_x25 = ppppppcVar21;
                        if (ppppppcVar38 <= ppppppcVar21) {
                          uVar22 = 0;
                          if (ppppppcVar38 != (code ******)0x0) {
                            uVar22 = (ulong)ppppppcVar21 / (ulong)ppppppcVar38;
                          }
                          unaff_x25 = (code ******)
                                      ((long)ppppppcVar21 - uVar22 * (long)ppppppcVar38);
                        }
                      }
                      if ((*pppppppcVar8)[(long)unaff_x25] != (code *****)0x0) {
                        for (ppppppcVar23 = (code ******)*(*pppppppcVar8)[(long)unaff_x25];
                            ppppppcVar23 != (code ******)0x0;
                            ppppppcVar23 = (code ******)*ppppppcVar23) {
                          ppppppcVar16 = (code ******)ppppppcVar23[1];
                          if (ppppppcVar16 == ppppppcVar21) {
                            if ((code ******)ppppppcVar23[5] == ppppppcVar21) goto LAB_10a419154;
                          }
                          else {
                            if (((ulong)ppppppcVar38 & (ulong)pcVar13) == 0) {
                              ppppppcVar16 = (code ******)((ulong)ppppppcVar16 & (ulong)pcVar13);
                            }
                            else if (ppppppcVar38 <= ppppppcVar16) {
                              uVar22 = 0;
                              if (ppppppcVar38 != (code ******)0x0) {
                                uVar22 = (ulong)ppppppcVar16 / (ulong)ppppppcVar38;
                              }
                              ppppppcVar16 = (code ******)
                                             ((long)ppppppcVar16 - uVar22 * (long)ppppppcVar38);
                            }
                            if (ppppppcVar16 != unaff_x25) break;
                          }
                        }
                      }
                    }
                    ppppppcVar23 = (code ******)0x38;
                    __Znwm();
                    uStack_330 = 0;
                    *ppppppcVar23 = (code *****)0x0;
                    ppppppcVar23[1] = (code *****)ppppppcVar21;
                    ppppppcStack_340 = ppppppcVar23;
                    pppppppcStack_338 = pppppppcVar8;
                    if ((char)*(code *)((long)pppppcVar36 + 0x27) < '\0') {
                      func_0x000107c3192c(ppppppcVar23 + 2,pppppcVar36[2],pppppcVar36[3]);
                    }
                    else {
                      pppppcVar42 = (code *****)pppppcVar36[3];
                      pppppcVar17 = (code *****)pppppcVar36[2];
                      ppppppcVar23[4] = (code *****)pppppcVar36[4];
                      ppppppcVar23[3] = pppppcVar42;
                      ppppppcVar23[2] = pppppcVar17;
                    }
                    ppppppcVar23[5] = (code *****)pppppcVar36[5];
                    *(undefined4 *)(ppppppcVar23 + 6) = 0;
                    uStack_330 = CONCAT71(uStack_330._1_7_,1);
                    if ((ppppppcVar38 == (code ******)0x0) ||
                       (*(float *)(pppppppcVar31 + 0x5c) * (float)ppppppcVar38 <
                        (float)((long)pppppppcVar31[0x5b] + 1))) {
                      uVar22 = 1;
                      if ((code ******)0x2 < ppppppcVar38) {
                        uVar22 = (ulong)(((ulong)ppppppcVar38 & (ulong)((long)ppppppcVar38 + -1)) !=
                                        0);
                      }
                      uVar22 = uVar22 | (long)ppppppcVar38 << 1;
                      uVar15 = (ulong)((float)((long)pppppppcVar31[0x5b] + 1) /
                                      *(float *)(pppppppcVar31 + 0x5c));
                      if (uVar22 <= uVar15) {
                        uVar22 = uVar15;
                      }
                      FUN_10a1f9fe4(pppppppcVar8,uVar22);
                      ppppppcVar38 = pppppppcVar31[0x59];
                      if (((ulong)ppppppcVar38 & (ulong)((long)ppppppcVar38 + -1)) == 0) {
                        unaff_x25 = (code ******)
                                    ((ulong)((long)ppppppcVar38 + -1) & (ulong)ppppppcVar21);
                      }
                      else {
                        unaff_x25 = ppppppcVar21;
                        if (ppppppcVar38 <= ppppppcVar21) {
                          uVar22 = 0;
                          if (ppppppcVar38 != (code ******)0x0) {
                            uVar22 = (ulong)ppppppcVar21 / (ulong)ppppppcVar38;
                          }
                          unaff_x25 = (code ******)
                                      ((long)ppppppcVar21 - uVar22 * (long)ppppppcVar38);
                        }
                      }
                    }
                    ppppppcVar21 = *pppppppcVar8;
                    pppppcVar17 = ppppppcVar21[(long)unaff_x25];
                    if (pppppcVar17 == (code *****)0x0) {
                      *ppppppcStack_340 = (code *****)*pppppppcVar29;
                      *pppppppcVar29 = ppppppcStack_340;
                      ppppppcVar21[(long)unaff_x25] = (code *****)pppppppcVar29;
                      if (*ppppppcStack_340 != (code *****)0x0) {
                        ppppppcVar21 = (code ******)(*ppppppcStack_340)[1];
                        if (((ulong)ppppppcVar38 & (ulong)((long)ppppppcVar38 + -1)) == 0) {
                          ppppppcVar21 = (code ******)
                                         ((ulong)ppppppcVar21 & (ulong)((long)ppppppcVar38 + -1));
                        }
                        else if (ppppppcVar38 <= ppppppcVar21) {
                          uVar22 = 0;
                          if (ppppppcVar38 != (code ******)0x0) {
                            uVar22 = (ulong)ppppppcVar21 / (ulong)ppppppcVar38;
                          }
                          ppppppcVar21 = (code ******)
                                         ((long)ppppppcVar21 - uVar22 * (long)ppppppcVar38);
                        }
                        (*pppppppcVar8)[(long)ppppppcVar21] = (code *****)ppppppcStack_340;
                      }
                    }
                    else {
                      *ppppppcStack_340 = (code *****)*pppppcVar17;
                      *pppppcVar17 = (code ****)ppppppcStack_340;
                    }
                    pppppppcVar31[0x5b] = (code ******)((long)pppppppcVar31[0x5b] + 1);
                    ppppppcVar23 = ppppppcStack_340;
LAB_10a419154:
                    fVar40 = *(float *)(ppppppcVar23 + 6);
                    if (*(int *)(*ppppppcVar11 + 0xe) == 2) {
                      fVar43 = fVar39;
                      (*(code *)**pppppcVar36[6])();
                      fVar40 = fVar40 + fVar44 * fVar43;
                    }
                    else {
                      fVar43 = fVar39;
                      (*(code *)**pppppcVar36[6])();
                      fVar40 = fVar44 * fVar43 + (1.0 - fVar44) * fVar40;
                    }
                    *(float *)(ppppppcVar23 + 6) = fVar40;
                  }
                  pppppcVar36 = (code *****)*pppppcVar36;
                } while (pppppcVar36 != (code *****)0x0);
              }
              pppppppcVar33 = pppppppcStack_348;
              if (pppppppcStack_348 != (code *******)0x0) {
                pppppppcVar30 = pppppppcStack_348 + 1;
                do {
                  ppppppcVar38 = *pppppppcVar30;
                  cVar4 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                  if (bVar7) {
                    *pppppppcVar30 = (code ******)((long)ppppppcVar38 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (ppppppcVar38 == (code ******)0x0) {
                  (*(code *)(*pppppppcStack_348)[2])(pppppppcStack_348);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar33);
                }
              }
            }
            for (ppppppcVar11 = *pppppppcVar29; ppppppcVar11 != (code ******)0x0;
                ppppppcVar11 = (code ******)*ppppppcVar11) {
              FUN_10a428c04(*(undefined4 *)(ppppppcVar11 + 6),
                            (float)(double)ppppcVar32[0x2e][0x10a][1],ppppcVar32 + 99,
                            ppppppcVar11 + 2);
            }
            FUN_10a440978(pppppppcVar8);
          }
          pppppcVar35 = pppppcVar35 + 1;
        } while (pppppcVar35 != pppppcVar12);
        ppppppcVar11 = pppppppcVar31[0x47];
        ppppppcVar9 = pppppppcVar31[0x46];
      }
      uVar27 = uVar27 + 1;
      uVar22 = ((long)ppppppcVar11 - (long)ppppppcVar9 >> 4) * -0x3333333333333333;
    } while (uVar27 <= uVar22 && uVar22 - uVar27 != 0);
  }
  return;
}



/* Entry: 10a419df8; end: 10a41a03b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a419df8(undefined8 param_1,undefined8 param_2,code *******param_3,long *param_4)

{
  code ****ppppcVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  bool bVar7;
  code *******pppppppcVar8;
  long lVar9;
  code ******ppppppcVar10;
  code cVar11;
  code ******ppppppcVar12;
  code *****pppppcVar13;
  code *pcVar14;
  ulong uVar15;
  code ******ppppppcVar16;
  code *****pppppcVar17;
  code ***pppcVar18;
  code *******pppppppcVar19;
  code ******ppppppcVar20;
  ulong uVar21;
  code ******ppppppcVar22;
  code ******ppppppcVar23;
  code ****ppppcVar24;
  code ******ppppppcVar25;
  ulong uVar26;
  code *******pppppppcVar27;
  code *******pppppppcVar28;
  long lVar29;
  code *******pppppppcVar30;
  code *******pppppppcVar31;
  code ****ppppcVar32;
  code *******pppppppcVar33;
  code *******pppppppcVar34;
  code *****pppppcVar35;
  code ******unaff_x25;
  code *****pppppcVar36;
  code *******pppppppcVar37;
  code ******ppppppcVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  code *****pppppcVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  code ******ppppppcStack_2f0;
  code *******pppppppcStack_2e8;
  code ******ppppppcStack_2e0;
  code *******pppppppcStack_2d8;
  undefined8 uStack_2d0;
  code *******pppppppcStack_200;
  code *******pppppppcStack_1f8;
  code *******pppppppcStack_1e8;
  code *******pppppppcStack_1e0;
  code *******pppppppcStack_1d8;
  code *******pppppppcStack_1d0;
  code ******ppppppcStack_1c8;
  code ******ppppppcStack_1c0;
  long lStack_1b8;
  float fStack_1b0;
  code *******pppppppcStack_1a0;
  code *******pppppppcStack_198;
  code *******pppppppcStack_190;
  code *******pppppppcStack_188;
  code *******pppppppcStack_180;
  code *******pppppppcStack_178;
  code *******pppppppcStack_170;
  code *******pppppppcStack_168;
  code *******pppppppcStack_160;
  code *******pppppppcStack_158;
  long lStack_140;
  undefined8 uStack_128;
  code ****ppppcStack_90;
  undefined8 uStack_88;
  
  param_4[1] = *param_4;
  if ((ulong)((long)param_3[1] - (long)*param_3) <= (ulong)(param_4[2] - *param_4)) {
LAB_10a419e8c:
    ppppppcVar12 = *param_3;
    ppppppcVar10 = param_3[1];
    do {
      if (ppppppcVar12 == ppppppcVar10) {
        return;
      }
      pppppcVar35 = *ppppppcVar12;
      if (((*(byte *)((long)pppppcVar35 + 0x69) & 1) == 0) &&
         (ppppcVar32 = pppppcVar35[8], ppppcVar32 != (code ****)0x0)) {
        ppppcVar24 = pppppcVar35[9];
        if (ppppcVar24 != (code ****)0x0) {
          ppppcVar1 = ppppcVar24 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppcVar1,0x10);
            if (bVar7) {
              *ppppcVar1 = (code ***)((long)*ppppcVar1 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            pppcVar18 = *ppppcVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppcVar1,0x10);
            if (bVar7) {
              *ppppcVar1 = (code ***)((long)pppcVar18 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppcVar18 == (code ***)0x0) {
            (*(code *)(*ppppcVar24)[2])(ppppcVar24);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppcVar24);
          }
        }
        fVar39 = *(float *)(pppppcVar35 + 0xc);
        fVar44 = *(float *)(ppppppcVar12 + 2);
        bVar7 = true;
        if ((fVar44 != *(float *)((long)pppppcVar35 + 0x5c)) &&
           (bVar7 = false, !NAN(fVar44) && !NAN(fVar39))) {
          bVar7 = fVar44 == fVar39;
        }
        ppppcStack_90 = ppppcVar32;
        if (bVar7) {
          uStack_88 = ppppppcVar12[2];
          FUN_10a41a03c(param_4,&ppppcStack_90);
          uStack_88 = (code *****)
                      CONCAT44(*(float *)(ppppppcVar12 + 2) + -1.1920929e-07,
                               *(float *)(ppppppcVar12 + 2) + 1.1920929e-07);
        }
        else {
          bVar3 = *(byte *)(pppppcVar35 + 0xd);
          fVar39 = fVar39 + 1.1920929e-07;
          fVar40 = *(float *)((long)ppppppcVar12 + 0x14);
          fVar43 = ABS(fVar44 - fVar40);
          bVar7 = (float)param_1 * *(float *)((long)pppppcVar35 + 0x54) + -1.1920929e-07 <= fVar43;
          if ((bVar3 == 0) || (fVar45 = fVar39, bVar7 || fVar43 <= 1.1920929e-07)) {
            fVar45 = *(float *)((long)pppppcVar35 + 0x5c) + -1.1920929e-07;
            fVar6 = fVar45;
            if ((bVar3 & 1) == 0 && (!bVar7 && 1.1920929e-07 < fVar43)) {
LAB_10a419fc4:
              uStack_88 = (code *****)CONCAT44(fVar40,fVar6);
              FUN_10a41a03c(param_4,&ppppcStack_90);
              uStack_88 = (code *****)CONCAT44(fVar45,fVar44);
            }
            else {
              if ((bVar3 & 1) == 0) {
                fVar6 = fVar39;
                if (fVar44 < fVar40) goto LAB_10a419fc4;
              }
              else if (fVar40 < fVar44) goto LAB_10a419f7c;
              uStack_88 = ppppppcVar12[2];
            }
          }
          else {
LAB_10a419f7c:
            uStack_88 = (code *****)CONCAT44(fVar40,fVar45);
            FUN_10a41a03c(param_4,&ppppcStack_90);
            uStack_88 = (code *****)CONCAT44(fVar39,fVar44);
          }
        }
        ppppcStack_90 = ppppcVar32;
        FUN_10a41a03c(param_4,&ppppcStack_90);
      }
      ppppppcVar12 = ppppppcVar12 + 4;
    } while( true );
  }
  pppppppcVar8 = (code *******)((long)param_3[1] - (long)*param_3 >> 4);
  if ((ulong)pppppppcVar8 >> 0x3c == 0) {
    pppppppcVar37 = param_3;
    FUN_10a436570();
    lVar29 = (long)pppppppcVar8 - (param_4[1] - *param_4);
    _memcpy(lVar29);
    lVar9 = *param_4;
    *param_4 = lVar29;
    param_4[1] = (long)pppppppcVar8;
    param_4[2] = (long)(pppppppcVar8 + (long)pppppppcVar37 * 2);
    if (lVar9 != 0) {
      __ZdlPv();
    }
    goto LAB_10a419e8c;
  }
  uVar41 = param_1;
  FUN_10a43655c();
  ppppppcVar12 = pppppppcVar8[1];
  if (ppppppcVar12 < pppppppcVar8[2]) {
    ppppppcVar10 = *param_3;
    ppppppcVar12[1] = (code *****)param_3[1];
    *ppppppcVar12 = (code *****)ppppppcVar10;
    ppppppcVar12 = ppppppcVar12 + 2;
LAB_10a41a0e8:
    pppppppcVar8[1] = ppppppcVar12;
    return;
  }
  lVar9 = (long)ppppppcVar12 - (long)*pppppppcVar8;
  uVar26 = (lVar9 >> 4) + 1;
  if (uVar26 >> 0x3c == 0) {
    uVar15 = (long)pppppppcVar8[2] - (long)*pppppppcVar8;
    uVar21 = (long)uVar15 >> 3;
    if (uVar21 <= uVar26) {
      uVar21 = uVar26;
    }
    if (0x7fffffffffffffef < uVar15) {
      uVar21 = 0xfffffffffffffff;
    }
    pppppppcVar37 = param_3;
    FUN_10a436570();
    plVar2 = (long *)(uVar21 + lVar9);
    ppppppcVar12 = *param_3;
    plVar2[1] = (long)param_3[1];
    *plVar2 = (long)ppppppcVar12;
    ppppppcVar12 = (code ******)(plVar2 + 2);
    ppppppcVar25 = (code ******)((long)plVar2 - ((long)pppppppcVar8[1] - (long)*pppppppcVar8));
    _memcpy(ppppppcVar25);
    ppppppcVar10 = *pppppppcVar8;
    *pppppppcVar8 = ppppppcVar25;
    pppppppcVar8[1] = ppppppcVar12;
    pppppppcVar8[2] = (code ******)(uVar21 + (long)pppppppcVar37 * 0x10);
    if (ppppppcVar10 != (code ******)0x0) {
      __ZdlPv();
    }
    goto LAB_10a41a0e8;
  }
  pppppppcVar37 = param_3;
  FUN_10a43655c();
  if (pppppppcVar8[0x4c] == pppppppcVar8[0x4d]) {
    return;
  }
  FUN_10a4158d4();
  if ((pppppppcVar8[0x67] == pppppppcVar8[0x68]) ||
     (((long)pppppppcVar8[0x47] - (long)pppppppcVar8[0x46] >> 4) * -0x3333333333333333 -
      ((long)pppppppcVar8[0x68] - (long)pppppppcVar8[0x67] >> 6) != 0)) {
    FUN_10a41a204(pppppppcVar8,pppppppcVar37);
  }
  FUN_10a419cd4(uVar41,pppppppcVar8 + 0x4c,pppppppcVar8 + 0x52);
  if (pppppppcVar8[0x52] == pppppppcVar8[0x53]) {
SUB_10a440420:
    if (pppppppcVar8[0x65] != (code ******)0x0) {
      ppppppcVar12 = pppppppcVar8[100];
      while (ppppppcVar12 != (code ******)0x0) {
        ppppppcVar12 = (code ******)*ppppppcVar12;
        __ZdlPv();
      }
      pppppppcVar8[100] = (code ******)0x0;
      ppppppcVar12 = pppppppcVar8[99];
      if (ppppppcVar12 != (code ******)0x0) {
        ppppppcVar10 = (code ******)0x0;
        do {
          pppppppcVar8[0x62][(long)ppppppcVar10] = (code *****)0x0;
          ppppppcVar10 = (code ******)((long)ppppppcVar10 + 1);
        } while (ppppppcVar12 != ppppppcVar10);
      }
      pppppppcVar8[0x65] = (code ******)0x0;
    }
    return;
  }
  FUN_10a419df8(uVar41);
  FUN_10a416cf8(pppppppcVar8 + 0x46,pppppppcVar8 + 0x67,pppppppcVar8 + 0x52);
  FUN_10a418dd0(pppppppcVar8,pppppppcVar8 + 0x52);
  pppppppcVar37 = pppppppcVar8 + 0x52;
  FUN_10a419308(pppppppcVar8);
  lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar31 = pppppppcVar8;
  uStack_128 = param_1;
  if (pppppppcVar8[0x42][6] == (code *****)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_140) goto SUB_10a440420;
  }
  else {
    param_3 = (code *******)pppppppcVar8[0x4f];
    pppppppcVar33 = (code *******)pppppppcVar8[0x50];
    uVar26 = (long)pppppppcVar33 - (long)param_3;
    ppppppcVar12 = pppppppcVar8[0x57];
    pppppppcVar28 = (code *******)pppppppcVar8[0x55];
    if ((ulong)((long)ppppppcVar12 - (long)pppppppcVar28) < uVar26) {
      pppppppcVar30 = (code *******)((long)uVar26 >> 4);
      if (pppppppcVar28 != (code *******)0x0) {
        pppppppcVar8[0x56] = (code ******)pppppppcVar28;
        __ZdlPv();
        ppppppcVar12 = (code ******)0x0;
        pppppppcVar8[0x55] = (code ******)0x0;
        pppppppcVar8[0x56] = (code ******)0x0;
        pppppppcVar8[0x57] = (code ******)0x0;
        pppppppcVar31 = pppppppcVar28;
      }
      if ((ulong)pppppppcVar30 >> 0x3c != 0) goto LAB_10a418cb0;
      pppppppcVar31 = (code *******)((long)ppppppcVar12 >> 3);
      if ((code *******)((long)ppppppcVar12 >> 3) <= pppppppcVar30) {
        pppppppcVar31 = pppppppcVar30;
      }
      if ((code ******)0x7fffffffffffffef < ppppppcVar12) {
        pppppppcVar31 = (code *******)0xfffffffffffffff;
      }
      if ((ulong)pppppppcVar31 >> 0x3c != 0) goto LAB_10a418cb0;
      FUN_10a436570();
      pppppppcVar8[0x55] = (code ******)pppppppcVar31;
      pppppppcVar8[0x56] = (code ******)pppppppcVar31;
      pppppppcVar8[0x57] = (code ******)(pppppppcVar31 + (long)pppppppcVar37 * 2);
      pppppppcVar28 = pppppppcVar31;
LAB_10a418164:
      if (pppppppcVar33 != param_3) {
        pppppppcVar37 = param_3;
        _memmove(pppppppcVar28,param_3,uVar26);
      }
      ppppppcVar12 = (code ******)((long)pppppppcVar28 + uVar26);
    }
    else {
      pppppppcVar31 = (code *******)pppppppcVar8[0x56];
      if (uVar26 <= (ulong)((long)pppppppcVar31 - (long)pppppppcVar28)) goto LAB_10a418164;
      pppppppcVar30 = (code *******)((long)param_3 + ((long)pppppppcVar31 - (long)pppppppcVar28));
      if (pppppppcVar31 != pppppppcVar28) {
        _memmove(pppppppcVar28);
        pppppppcVar31 = (code *******)pppppppcVar8[0x56];
        pppppppcVar37 = param_3;
      }
      param_3 = (code *******)((long)pppppppcVar33 - (long)pppppppcVar30);
      if (param_3 != (code *******)0x0) {
        _memmove(pppppppcVar31,pppppppcVar30,param_3);
        pppppppcVar37 = pppppppcVar30;
      }
      ppppppcVar12 = (code ******)((long)pppppppcVar31 + (long)param_3);
    }
    pppppppcVar8[0x56] = ppppppcVar12;
    pppppppcStack_1e8 = (code *******)0x0;
    pppppppcStack_1e0 = (code *******)0x0;
    pppppppcStack_1d8 = (code *******)0x0;
    ppppppcVar10 = pppppppcVar8[0x55];
    if (ppppppcVar10 != ppppppcVar12) {
      unaff_x25 = (code ******)0x9ddfea08eb382d69;
      param_3 = pppppppcVar8 + 0x5d;
      pppppppcVar31 = pppppppcVar8 + 0x5f;
      pppppppcVar28 = pppppppcVar37;
      do {
        pppppppcVar33 = (code *******)(*ppppppcVar10)[0x22];
        ppppppcVar25 = (code ******)(*ppppppcVar10)[0x23];
        if (ppppppcVar25 != (code ******)0x0) {
          ppppppcVar38 = ppppppcVar25 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppcVar38,0x10);
            if (bVar7) {
              *ppppppcVar38 = (code *****)((long)*ppppppcVar38 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        pppppppcVar37 = pppppppcVar28;
        pppppppcStack_1d0 = pppppppcVar33;
        ppppppcStack_1c8 = ppppppcVar25;
        if (2 < (ulong)(((long)pppppppcVar33[2] - (long)pppppppcVar33[1] >> 4) * -0x5555555555555555
                       )) {
          FUN_10aa8113c(*(undefined4 *)(ppppppcVar10 + 1),*(undefined4 *)((long)ppppppcVar10 + 0xc))
          ;
          pppppppcVar37 = (code *******)0x0;
          if (pppppppcVar28 != (code *******)0x0) {
            pppppppcVar28 = pppppppcVar33 + (long)pppppppcVar28 * 6;
            do {
              pppppppcVar34 = (code *******)pppppppcVar33[1];
              pppppppcVar30 = param_3;
              pppppppcVar37 = pppppppcVar34;
              FUN_10a440484();
              if (pppppppcVar30 == (code *******)0x0) {
                pppppppcVar30 = pppppppcVar8 + 0x62;
                pppppppcVar37 = pppppppcVar34;
                FUN_10a440484();
                if (pppppppcVar30 == (code *******)0x0) {
                  uVar26 = ((ulong)(uint)((int)pppppppcVar34 << 3) + 8 ^
                           (ulong)pppppppcVar34 >> 0x20) * -0x622015f714c7d297;
                  uVar26 = ((ulong)pppppppcVar34 >> 0x20 ^ uVar26 >> 0x2f ^ uVar26) *
                           -0x622015f714c7d297;
                  pppppppcVar27 = (code *******)((uVar26 ^ uVar26 >> 0x2f) * -0x622015f714c7d297);
                  pppppppcVar30 = (code *******)pppppppcVar8[0x5e];
                  pppppppcVar37 = pppppppcVar8;
                  if (pppppppcVar30 != (code *******)0x0) {
                    uVar26 = (long)pppppppcVar30 - 1;
                    if (((ulong)pppppppcVar30 & uVar26) == 0) {
                      pppppppcVar37 = (code *******)(uVar26 & (ulong)pppppppcVar27);
                    }
                    else {
                      pppppppcVar37 = pppppppcVar27;
                      if (pppppppcVar30 <= pppppppcVar27) {
                        uVar21 = 0;
                        if (pppppppcVar30 != (code *******)0x0) {
                          uVar21 = (ulong)pppppppcVar27 / (ulong)pppppppcVar30;
                        }
                        pppppppcVar37 =
                             (code *******)((long)pppppppcVar27 - uVar21 * (long)pppppppcVar30);
                      }
                    }
                    pppppcVar35 = (*param_3)[(long)pppppppcVar37];
                    if (pppppcVar35 != (code *****)0x0) {
                      do {
                        while( true ) {
                          pppppcVar35 = (code *****)*pppppcVar35;
                          if (pppppcVar35 == (code *****)0x0) goto LAB_10a4182ec;
                          pppppppcVar19 = (code *******)pppppcVar35[1];
                          if (pppppppcVar19 != pppppppcVar27) break;
                          if ((code *******)pppppcVar35[2] == pppppppcVar34) goto LAB_10a418588;
                        }
                        if (((ulong)pppppppcVar30 & uVar26) == 0) {
                          pppppppcVar19 = (code *******)((ulong)pppppppcVar19 & uVar26);
                        }
                        else if (pppppppcVar30 <= pppppppcVar19) {
                          uVar21 = 0;
                          if (pppppppcVar30 != (code *******)0x0) {
                            uVar21 = (ulong)pppppppcVar19 / (ulong)pppppppcVar30;
                          }
                          pppppppcVar19 =
                               (code *******)((long)pppppppcVar19 - uVar21 * (long)pppppppcVar30);
                        }
                      } while (pppppppcVar19 == pppppppcVar37);
                    }
                  }
LAB_10a4182ec:
                  ppppppcVar38 = (code ******)0x18;
                  __Znwm();
                  *ppppppcVar38 = (code *****)0x0;
                  ppppppcVar38[1] = (code *****)pppppppcVar27;
                  ppppppcVar38[2] = (code *****)pppppppcVar34;
                  if ((pppppppcVar30 == (code *******)0x0) ||
                     (*(float *)(pppppppcVar8 + 0x61) * (float)pppppppcVar30 <
                      (float)((long)pppppppcVar8[0x60] + 1))) {
                    uVar26 = 1;
                    if ((code *******)0x2 < pppppppcVar30) {
                      uVar26 = (ulong)(((ulong)pppppppcVar30 & (long)pppppppcVar30 - 1U) != 0);
                    }
                    pppppppcVar37 = (code *******)(uVar26 | (long)pppppppcVar30 << 1);
                    pppppppcVar34 =
                         (code *******)
                         (long)((float)((long)pppppppcVar8[0x60] + 1) /
                               *(float *)(pppppppcVar8 + 0x61));
                    if (pppppppcVar37 <= pppppppcVar34) {
                      pppppppcVar37 = pppppppcVar34;
                    }
                    if ((long)pppppppcVar37 - 1U == 0) {
                      pppppppcVar37 = (code *******)0x2;
                    }
                    else if (((ulong)pppppppcVar37 & (long)pppppppcVar37 - 1U) != 0) {
                      __ZNSt3__112__next_primeEm();
                      pppppppcVar30 = (code *******)pppppppcVar8[0x5e];
                    }
                    if (pppppppcVar30 < pppppppcVar37) {
LAB_10a418390:
                      pppppppcVar30 = pppppppcVar37;
                      if ((ulong)pppppppcVar30 >> 0x3d != 0) {
                        func_0x000109ffded8();
                        goto LAB_10a418ca8;
                      }
                      ppppppcVar20 = (code ******)((long)pppppppcVar30 << 3);
                      __Znwm();
                      ppppppcVar22 = *param_3;
                      *param_3 = ppppppcVar20;
                      if (ppppppcVar22 != (code ******)0x0) {
                        __ZdlPv();
                      }
                      pppppppcVar37 = (code *******)0x0;
                      pppppppcVar8[0x5e] = (code ******)pppppppcVar30;
                      do {
                        (*param_3)[(long)pppppppcVar37] = (code *****)0x0;
                        pppppppcVar37 = (code *******)((long)pppppppcVar37 + 1);
                      } while (pppppppcVar30 != pppppppcVar37);
                      ppppppcVar20 = *pppppppcVar31;
                      if (ppppppcVar20 != (code ******)0x0) {
                        pppppppcVar37 = (code *******)ppppppcVar20[1];
                        uVar26 = (long)pppppppcVar30 - 1;
                        if (((ulong)pppppppcVar30 & uVar26) == 0) {
                          pppppppcVar37 = (code *******)((ulong)pppppppcVar37 & uVar26);
                        }
                        else if (pppppppcVar30 <= pppppppcVar37) {
                          uVar21 = 0;
                          if (pppppppcVar30 != (code *******)0x0) {
                            uVar21 = (ulong)pppppppcVar37 / (ulong)pppppppcVar30;
                          }
                          pppppppcVar37 =
                               (code *******)((long)pppppppcVar37 - uVar21 * (long)pppppppcVar30);
                        }
                        (*param_3)[(long)pppppppcVar37] = (code *****)pppppppcVar31;
                        ppppppcVar22 = (code ******)*ppppppcVar20;
                        while (ppppppcVar22 != (code ******)0x0) {
                          pppppppcVar34 = (code *******)ppppppcVar22[1];
                          if (((ulong)pppppppcVar30 & uVar26) == 0) {
                            pppppppcVar34 = (code *******)((ulong)pppppppcVar34 & uVar26);
                          }
                          else if (pppppppcVar30 <= pppppppcVar34) {
                            uVar21 = 0;
                            if (pppppppcVar30 != (code *******)0x0) {
                              uVar21 = (ulong)pppppppcVar34 / (ulong)pppppppcVar30;
                            }
                            pppppppcVar34 =
                                 (code *******)((long)pppppppcVar34 - uVar21 * (long)pppppppcVar30);
                          }
                          ppppppcVar16 = ppppppcVar22;
                          if (pppppppcVar34 != pppppppcVar37) {
                            ppppppcVar23 = *param_3;
                            if (ppppppcVar23[(long)pppppppcVar34] == (code *****)0x0) {
                              ppppppcVar23[(long)pppppppcVar34] = (code *****)ppppppcVar20;
                              pppppppcVar37 = pppppppcVar34;
                            }
                            else {
                              *ppppppcVar20 = *ppppppcVar22;
                              *ppppppcVar22 = (code *****)*ppppppcVar23[(long)pppppppcVar34];
                              *ppppppcVar23[(long)pppppppcVar34] = (code ****)ppppppcVar22;
                              ppppppcVar16 = ppppppcVar20;
                            }
                          }
                          ppppppcVar20 = ppppppcVar16;
                          ppppppcVar22 = (code ******)*ppppppcVar16;
                        }
                      }
                    }
                    else if (pppppppcVar37 < pppppppcVar30) {
                      pppppppcVar34 =
                           (code *******)
                           (long)((float)pppppppcVar8[0x60] / *(float *)(pppppppcVar8 + 0x61));
                      if ((pppppppcVar30 < (code *******)0x3) ||
                         (((ulong)pppppppcVar30 & (long)pppppppcVar30 - 1U) != 0)) {
                        __ZNSt3__112__next_primeEm();
                      }
                      else if ((code *******)0x1 < pppppppcVar34) {
                        pppppppcVar34 =
                             (code *******)(1L << (-LZCOUNT((long)pppppppcVar34 + -1) & 0x3fU));
                      }
                      if (pppppppcVar37 <= pppppppcVar34) {
                        pppppppcVar37 = pppppppcVar34;
                      }
                      if (pppppppcVar37 < pppppppcVar30) {
                        if (pppppppcVar37 != (code *******)0x0) goto LAB_10a418390;
                        ppppppcVar20 = *param_3;
                        *param_3 = (code ******)0x0;
                        if (ppppppcVar20 != (code ******)0x0) {
                          __ZdlPv();
                        }
                        pppppppcVar30 = (code *******)0x0;
                        pppppppcVar8[0x5e] = (code ******)0x0;
                      }
                      else {
                        pppppppcVar30 = (code *******)pppppppcVar8[0x5e];
                      }
                    }
                    if (((ulong)pppppppcVar30 & (long)pppppppcVar30 - 1U) == 0) {
                      pppppppcVar37 =
                           (code *******)((long)pppppppcVar30 - 1U & (ulong)pppppppcVar27);
                    }
                    else {
                      pppppppcVar37 = pppppppcVar27;
                      if (pppppppcVar30 <= pppppppcVar27) {
                        uVar26 = 0;
                        if (pppppppcVar30 != (code *******)0x0) {
                          uVar26 = (ulong)pppppppcVar27 / (ulong)pppppppcVar30;
                        }
                        pppppppcVar37 =
                             (code *******)((long)pppppppcVar27 - uVar26 * (long)pppppppcVar30);
                      }
                    }
                  }
                  ppppppcVar22 = *param_3;
                  ppppppcVar20 = (code ******)ppppppcVar22[(long)pppppppcVar37];
                  if (ppppppcVar20 == (code ******)0x0) {
                    *ppppppcVar38 = (code *****)*pppppppcVar31;
                    *pppppppcVar31 = ppppppcVar38;
                    ppppppcVar22[(long)pppppppcVar37] = (code *****)pppppppcVar31;
                    if (*ppppppcVar38 != (code *****)0x0) {
                      pppppppcVar37 = (code *******)(*ppppppcVar38)[1];
                      if (((ulong)pppppppcVar30 & (long)pppppppcVar30 - 1U) == 0) {
                        pppppppcVar37 =
                             (code *******)((ulong)pppppppcVar37 & (long)pppppppcVar30 - 1U);
                      }
                      else if (pppppppcVar30 <= pppppppcVar37) {
                        uVar26 = 0;
                        if (pppppppcVar30 != (code *******)0x0) {
                          uVar26 = (ulong)pppppppcVar37 / (ulong)pppppppcVar30;
                        }
                        pppppppcVar37 =
                             (code *******)((long)pppppppcVar37 - uVar26 * (long)pppppppcVar30);
                      }
                      ppppppcVar20 = *param_3 + (long)pppppppcVar37;
                      goto LAB_10a418578;
                    }
                  }
                  else {
                    *ppppppcVar38 = *ppppppcVar20;
LAB_10a418578:
                    *ppppppcVar20 = (code *****)ppppppcVar38;
                  }
                  pppppppcVar8[0x60] = (code ******)((long)pppppppcVar8[0x60] + 1);
LAB_10a418588:
                  pppppppcVar30 = pppppppcStack_1e0;
                  if (pppppppcStack_1e0 < pppppppcStack_1d8) {
                    pppppppcVar37 = pppppppcVar33;
                    FUN_10a4365a4(pppppppcStack_1e0);
                    pppppppcStack_1e0 = pppppppcVar30 + 6;
                  }
                  else {
                    lVar9 = (long)pppppppcStack_1e0 - (long)pppppppcStack_1e8;
                    uVar26 = (lVar9 >> 4) * -0x5555555555555555 + 1;
                    if (0x555555555555555 < uVar26) {
                      FUN_10a43668c();
LAB_10a418ca8:
                    /* WARNING: Does not return */
                      pcVar14 = (code *)SoftwareBreakpoint(1,0x10a418cac);
                      (*pcVar14)();
                    }
                    lVar29 = (long)pppppppcStack_1d8 - (long)pppppppcStack_1e8 >> 4;
                    uVar21 = lVar29 * 0x5555555555555556;
                    if (uVar21 < uVar26 || uVar21 - uVar26 == 0) {
                      uVar21 = uVar26;
                    }
                    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar29 * -0x5555555555555555)) {
                      uVar21 = 0x555555555555555;
                    }
                    pppppppcStack_160 = (code *******)&pppppppcStack_1e8;
                    if (uVar21 == 0) {
                      pppppppcVar37 = (code *******)0x0;
                    }
                    else {
                      pppppppcVar37 = (code *******)&pppppppcStack_1e8;
                      FUN_10a4366a0();
                    }
                    ppppppcVar38 = (code ******)((long)pppppppcVar37 + lVar9);
                    pppppppcStack_168 = pppppppcVar37 + uVar21 * 6;
                    pppppppcStack_180 = pppppppcVar37;
                    pppppppcStack_178 = (code *******)ppppppcVar38;
                    pppppppcStack_170 = (code *******)ppppppcVar38;
                    FUN_10a4365a4(ppppppcVar38,pppppppcVar33);
                    pppppppcStack_170 = (code *******)(ppppppcVar38 + 6);
                    pppppppcVar30 =
                         (code *******)
                         ((long)pppppppcStack_1e8 + ((long)ppppppcVar38 - (long)pppppppcStack_1e0));
                    pppppppcVar37 = pppppppcStack_1e8;
                    func_0x00010a4366e4(&pppppppcStack_1e8,pppppppcStack_1e8,pppppppcStack_1e0,
                                        pppppppcVar30);
                    pppppppcVar27 = pppppppcStack_170;
                    pppppppcVar34 = pppppppcStack_1d8;
                    pppppppcStack_1d8 = pppppppcStack_168;
                    pppppppcStack_1e0 = pppppppcStack_170;
                    pppppppcStack_170 = pppppppcStack_1e8;
                    pppppppcStack_168 = pppppppcVar34;
                    pppppppcStack_180 = pppppppcStack_1e8;
                    pppppppcStack_178 = pppppppcStack_1e8;
                    pppppppcStack_1e8 = pppppppcVar30;
                    func_0x00010a436790(&pppppppcStack_180);
                    pppppppcStack_1e0 = pppppppcVar27;
                  }
                }
              }
              pppppppcVar33 = pppppppcVar33 + 6;
            } while (pppppppcVar33 != pppppppcVar28);
          }
        }
        if (ppppppcVar25 != (code ******)0x0) {
          ppppppcVar38 = ppppppcVar25 + 1;
          do {
            pppppcVar35 = *ppppppcVar38;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppcVar38,0x10);
            if (bVar7) {
              *ppppppcVar38 = (code *****)((long)pppppcVar35 + -1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pppppcVar35 == (code *****)0x0) {
            (*(code *)(*ppppppcVar25)[2])(ppppppcVar25);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar25);
          }
        }
        pppppppcVar33 = pppppppcStack_1e0;
        ppppppcVar10 = ppppppcVar10 + 2;
        pppppppcVar28 = pppppppcVar37;
      } while (ppppppcVar10 != ppppppcVar12);
      if (pppppppcStack_1e8 != pppppppcStack_1e0) {
        pppppppcVar31 = pppppppcStack_1e8;
        do {
          ppppppcVar12 = pppppppcVar8[0x42];
          param_3 = (code *******)0x48;
          __Znwm();
          param_3[1] = (code ******)0x0;
          param_3[2] = (code ******)0x0;
          *param_3 = (code ******)&PTR_DAT_110bd9710;
          if (*(char *)((long)pppppppcVar31 + 0x2f) < '\0') {
            func_0x000107c3192c(&pppppppcStack_180,pppppppcVar31[3],pppppppcVar31[4]);
          }
          else {
            pppppppcStack_178 = (code *******)pppppppcVar31[4];
            pppppppcStack_180 = (code *******)pppppppcVar31[3];
            pppppppcStack_170 = (code *******)pppppppcVar31[5];
          }
          pppppppcStack_200 = param_3 + 3;
          *pppppppcStack_200 = (code ******)&PTR_DAT_110bd46b8;
          param_3[4] = (code ******)0x0;
          param_3[5] = (code ******)0x0;
          param_3[7] = (code ******)pppppppcStack_178;
          param_3[6] = (code ******)pppppppcStack_180;
          param_3[8] = (code ******)pppppppcStack_170;
          ppppppcStack_1c8 = (code ******)0x0;
          pppppppcStack_1d0 = (code *******)0x0;
          lStack_1b8 = 0;
          ppppppcStack_1c0 = (code ******)0x0;
          fStack_1b0 = *(float *)(ppppppcVar12 + 7);
          pppppppcVar37 = (code *******)ppppppcVar12[4];
          pppppppcStack_1f8 = param_3;
          FUN_10a43ed84(&pppppppcStack_1d0);
          ppppppcVar25 = ppppppcStack_1c8;
          ppppppcVar38 = ppppppcStack_1c0;
          for (pppppcVar35 = ppppppcVar12[5]; ppppppcStack_1c8 = ppppppcVar25,
              ppppppcStack_1c0 = ppppppcVar38, pppppcVar35 != (code *****)0x0;
              pppppcVar35 = (code *****)*pppppcVar35) {
            pppppcVar13 = (code *****)pppppcVar35[2];
            uVar26 = ((ulong)(uint)((int)pppppcVar13 << 3) + 8 ^ (ulong)pppppcVar13 >> 0x20) *
                     -0x622015f714c7d297;
            uVar26 = ((ulong)pppppcVar13 >> 0x20 ^ uVar26 >> 0x2f ^ uVar26) * -0x622015f714c7d297;
            ppppppcVar38 = (code ******)((uVar26 ^ uVar26 >> 0x2f) * -0x622015f714c7d297);
            if (ppppppcVar25 != (code ******)0x0) {
              uVar26 = (long)ppppppcVar25 - 1;
              if (((ulong)ppppppcVar25 & uVar26) == 0) {
                ppppppcVar10 = (code ******)((ulong)ppppppcVar38 & uVar26);
              }
              else {
                ppppppcVar10 = ppppppcVar38;
                if (ppppppcVar25 <= ppppppcVar38) {
                  uVar21 = 0;
                  if (ppppppcVar25 != (code ******)0x0) {
                    uVar21 = (ulong)ppppppcVar38 / (ulong)ppppppcVar25;
                  }
                  ppppppcVar10 = (code ******)((long)ppppppcVar38 - uVar21 * (long)ppppppcVar25);
                }
              }
              ppppppcVar20 = pppppppcStack_1d0[(long)ppppppcVar10];
              if (ppppppcVar20 != (code ******)0x0) {
                do {
                  while( true ) {
                    ppppppcVar20 = (code ******)*ppppppcVar20;
                    if (ppppppcVar20 == (code ******)0x0) goto LAB_10a41889c;
                    ppppppcVar22 = (code ******)ppppppcVar20[1];
                    if (ppppppcVar22 != ppppppcVar38) break;
                    if (ppppppcVar20[2] == pppppcVar13) goto LAB_10a418a00;
                  }
                  if (((ulong)ppppppcVar25 & uVar26) == 0) {
                    ppppppcVar22 = (code ******)((ulong)ppppppcVar22 & uVar26);
                  }
                  else if (ppppppcVar25 <= ppppppcVar22) {
                    uVar21 = 0;
                    if (ppppppcVar25 != (code ******)0x0) {
                      uVar21 = (ulong)ppppppcVar22 / (ulong)ppppppcVar25;
                    }
                    ppppppcVar22 = (code ******)((long)ppppppcVar22 - uVar21 * (long)ppppppcVar25);
                  }
                } while (ppppppcVar22 == ppppppcVar10);
              }
            }
LAB_10a41889c:
            ppppppcVar20 = (code ******)0x68;
            __Znwm();
            *ppppppcVar20 = (code *****)0x0;
            ppppppcVar20[1] = (code *****)ppppppcVar38;
            ppppcVar32 = pppppcVar35[3];
            pppppcVar13 = (code *****)pppppcVar35[2];
            ppppppcVar20[3] = (code *****)pppppcVar35[3];
            ppppppcVar20[2] = pppppcVar13;
            if (ppppcVar32 != (code ****)0x0) {
              ppppcVar32 = ppppcVar32 + 1;
              do {
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(ppppcVar32,0x10);
                if (bVar7) {
                  *ppppcVar32 = (code ***)((long)*ppppcVar32 + 1);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            pppppppcStack_180 = (code *******)(ppppppcVar20 + 4);
            *(undefined1 *)(ppppppcVar20 + 0xc) = 3;
            if (*(code *)(pppppcVar35 + 0xc) == (code)0x0) {
              cVar11 = (code)0x0;
            }
            else {
              pppppppcVar37 = (code *******)(pppppcVar35 + 4);
              FUN_10a005398(&pppppppcStack_180);
              cVar11 = *(code *)(pppppcVar35 + 0xc);
            }
            *(code *)(ppppppcVar20 + 0xc) = cVar11;
            if ((ppppppcVar25 == (code ******)0x0) ||
               (fStack_1b0 * (float)ppppppcVar25 < (float)(lStack_1b8 + 1))) {
              uVar26 = 1;
              if ((code ******)0x2 < ppppppcVar25) {
                uVar26 = (ulong)(((ulong)ppppppcVar25 & (long)ppppppcVar25 - 1U) != 0);
              }
              pppppppcVar37 = (code *******)(uVar26 | (long)ppppppcVar25 << 1);
              pppppppcVar28 = (code *******)(long)((float)(lStack_1b8 + 1) / fStack_1b0);
              if (pppppppcVar37 <= pppppppcVar28) {
                pppppppcVar37 = pppppppcVar28;
              }
              FUN_10a43ed84(&pppppppcStack_1d0);
              ppppppcVar25 = ppppppcStack_1c8;
              if (((ulong)ppppppcStack_1c8 & (long)ppppppcStack_1c8 - 1U) == 0) {
                ppppppcVar10 = (code ******)((long)ppppppcStack_1c8 - 1U & (ulong)ppppppcVar38);
              }
              else {
                ppppppcVar10 = ppppppcVar38;
                if (ppppppcStack_1c8 <= ppppppcVar38) {
                  uVar26 = 0;
                  if (ppppppcStack_1c8 != (code ******)0x0) {
                    uVar26 = (ulong)ppppppcVar38 / (ulong)ppppppcStack_1c8;
                  }
                  ppppppcVar10 = (code ******)((long)ppppppcVar38 - uVar26 * (long)ppppppcStack_1c8)
                  ;
                }
              }
            }
            ppppppcVar38 = pppppppcStack_1d0[(long)ppppppcVar10];
            if (ppppppcVar38 == (code ******)0x0) {
              *ppppppcVar20 = (code *****)ppppppcStack_1c0;
              pppppppcStack_1d0[(long)ppppppcVar10] = (code ******)&ppppppcStack_1c0;
              ppppppcStack_1c0 = ppppppcVar20;
              if (*ppppppcVar20 != (code *****)0x0) {
                ppppppcVar38 = (code ******)(*ppppppcVar20)[1];
                if (((ulong)ppppppcVar25 & (long)ppppppcVar25 - 1U) == 0) {
                  ppppppcVar38 = (code ******)((ulong)ppppppcVar38 & (long)ppppppcVar25 - 1U);
                }
                else if (ppppppcVar25 <= ppppppcVar38) {
                  uVar26 = 0;
                  if (ppppppcVar25 != (code ******)0x0) {
                    uVar26 = (ulong)ppppppcVar38 / (ulong)ppppppcVar25;
                  }
                  ppppppcVar38 = (code ******)((long)ppppppcVar38 - uVar26 * (long)ppppppcVar25);
                }
                pppppppcStack_1d0[(long)ppppppcVar38] = ppppppcVar20;
              }
            }
            else {
              *ppppppcVar20 = *ppppppcVar38;
              *ppppppcVar38 = (code *****)ppppppcVar20;
            }
            lStack_1b8 = lStack_1b8 + 1;
LAB_10a418a00:
            ppppppcVar25 = ppppppcStack_1c8;
            ppppppcVar38 = ppppppcStack_1c0;
          }
          if (ppppppcVar38 == (code ******)0x0) {
            FUN_10a43fd9c(&pppppppcStack_1d0);
LAB_10a418c10:
            pppppppcVar28 = param_3 + 1;
            do {
              ppppppcVar12 = *pppppppcVar28;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar28,0x10);
              if (bVar7) {
                *pppppppcVar28 = (code ******)((long)ppppppcVar12 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppppppcVar12 == (code ******)0x0) {
              (*(code *)(*param_3)[2])(param_3);
              __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
            }
          }
          else {
            do {
              pppppppcVar28 = (code *******)ppppppcVar38[2];
              ppppppcVar25 = ppppppcVar12 + 3;
              FUN_10a43f794();
              pppppppcVar37 = pppppppcVar28;
              if (ppppppcVar25 != (code ******)0x0) {
                if (*(char *)(ppppppcVar38 + 0xc) == '\x01') {
                  pppppcVar35 = ppppppcVar38[4];
                  pppppppcStack_178 = pppppppcStack_1f8;
                  pppppppcStack_180 = pppppppcStack_200;
                  if (pppppppcStack_1f8 != (code *******)0x0) {
                    pppppppcVar37 = pppppppcStack_1f8 + 1;
                    do {
                      cVar4 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar37,0x10);
                      if (bVar7) {
                        *pppppppcVar37 = (code ******)((long)*pppppppcVar37 + 1);
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                  }
                  pppppppcVar37 = (code *******)(ppppppcVar38 + 4);
                  (*(code *)pppppcVar35)(&pppppppcStack_180);
                  if (pppppppcStack_178 != (code *******)0x0) {
                    pppppppcVar28 = pppppppcStack_178 + 1;
                    do {
                      ppppppcVar25 = *pppppppcVar28;
                      cVar4 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar28,0x10);
                      if (bVar7) {
                        *pppppppcVar28 = (code ******)((long)ppppppcVar25 + -1);
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                      pppppppcVar30 = pppppppcStack_178;
                    } while (cVar4 != '\0');
LAB_10a418ac8:
                    if (ppppppcVar25 == (code ******)0x0) {
                      (*(code *)(*pppppppcVar30)[2])(pppppppcVar30);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar30);
                    }
                  }
                }
                else if (*(char *)(ppppppcVar38 + 0xc) == '\x02') {
                  ppppppcVar25 = ppppppcVar38 + 4;
                  FUN_10a688b40();
                  pppppppcVar30 = pppppppcStack_1f8;
                  if (ppppppcVar25 == (code ******)0x0) {
                    pppppppcVar37 = (code *******)0x0;
                    if (pppppppcVar28 != (code *******)0x0) {
                      pppppppcStack_170 = (code *******)ppppppcVar38[4];
                      pppppppcStack_168 = (code *******)ppppppcVar38[5];
                      if (pppppppcStack_168 != (code *******)0x0) {
                        pppppppcVar37 = pppppppcStack_168 + 1;
                        do {
                          cVar4 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar37,0x10);
                          if (bVar7) {
                            *pppppppcVar37 = (code ******)((long)*pppppppcVar37 + 1);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                      }
                      pppppppcStack_190 = pppppppcStack_200;
                      pppppppcStack_188 = pppppppcStack_1f8;
                      if (pppppppcStack_1f8 == (code *******)0x0) {
                        pppppppcStack_158 = (code *******)0x0;
                      }
                      else {
                        pppppppcVar37 = pppppppcStack_1f8 + 1;
                        do {
                          cVar4 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar37,0x10);
                          if (bVar7) {
                            *pppppppcVar37 = (code ******)((long)*pppppppcVar37 + 1);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        pppppppcStack_158 = pppppppcStack_1f8;
                        do {
                          cVar4 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar37,0x10);
                          if (bVar7) {
                            *pppppppcVar37 = (code ******)((long)*pppppppcVar37 + 1);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                      }
                      pppppppcStack_160 = pppppppcStack_200;
                      pppppppcStack_178 = (code *******)&PTR_FUN_110bd9750;
                      pppppppcStack_198 = (code *******)0x0;
                      pppppppcStack_1a0 = (code *******)0x0;
                      pppppppcStack_180 = (code *******)FUN_10a4407f4;
                      pppppppcVar37 = (code *******)&pppppppcStack_180;
                      FUN_10a4634ec(pppppppcVar28);
                      (*(code *)*pppppppcStack_178)(&pppppppcStack_178);
                      if (pppppppcVar30 != (code *******)0x0) {
                        pppppppcVar28 = pppppppcVar30 + 1;
                        do {
                          ppppppcVar25 = *pppppppcVar28;
                          cVar4 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar28,0x10);
                          if (bVar7) {
                            *pppppppcVar28 = (code ******)((long)ppppppcVar25 + -1);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        if (ppppppcVar25 == (code ******)0x0) {
                          (*(code *)(*pppppppcVar30)[2])(pppppppcVar30);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar30);
                        }
                      }
                      if (pppppppcStack_198 != (code *******)0x0) {
                        pppppppcVar28 = pppppppcStack_198 + 1;
                        do {
                          ppppppcVar25 = *pppppppcVar28;
                          cVar4 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar28,0x10);
                          if (bVar7) {
                            *pppppppcVar28 = (code ******)((long)ppppppcVar25 + -1);
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                          pppppppcVar30 = pppppppcStack_198;
                        } while (cVar4 != '\0');
                        goto LAB_10a418ac8;
                      }
                    }
                  }
                  else {
                    *ppppppcVar25 =
                         (code *****)
                         CONCAT44((int)((ulong)*ppppppcVar25 >> 0x20) + 1,(int)*ppppppcVar25 + 1);
                    pppppppcVar37 = (code *******)&pppppppcStack_200;
                    FUN_10a4405f0(ppppppcVar38[4]);
                    iVar5 = *(int *)((long)ppppppcVar25 + 4) + -1;
                    *(int *)((long)ppppppcVar25 + 4) = iVar5;
                    if (iVar5 == 0) {
                      *(undefined4 *)ppppppcVar25 = 0;
                    }
                  }
                }
              }
              param_3 = pppppppcStack_1f8;
              ppppppcVar38 = (code ******)*ppppppcVar38;
            } while (ppppppcVar38 != (code ******)0x0);
            FUN_10a43fd9c(&pppppppcStack_1d0);
            if (param_3 != (code *******)0x0) goto LAB_10a418c10;
          }
          pppppppcVar31 = pppppppcVar31 + 6;
        } while (pppppppcVar31 != pppppppcVar33);
      }
    }
    pppppppcStack_180 = (code *******)&pppppppcStack_1e8;
    pppppppcVar31 = (code *******)&pppppppcStack_180;
    FUN_10a4367dc();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_140) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10a418cb0:
  FUN_10a43655c();
  __ZNSt3__119__shared_weak_countD2Ev(param_3);
  __ZdlPv();
  pppppppcStack_1a0 = (code *******)&pppppppcStack_1e8;
  FUN_10a4367dc(&pppppppcStack_1a0);
  __Unwind_Resume();
  ppppppcVar12 = pppppppcVar31[0x47];
  ppppppcVar10 = pppppppcVar31[0x46];
  if (ppppppcVar12 != ppppppcVar10) {
    uVar26 = 0;
    pppppppcVar8 = pppppppcVar31 + 0x58;
    pppppppcVar28 = pppppppcVar31 + 0x5a;
    do {
      ppppppcVar25 = ppppppcVar10 + uVar26 * 10;
      pppppcVar35 = ppppppcVar25[7];
      pppppcVar13 = ppppppcVar25[8];
      if (pppppcVar35 != pppppcVar13) {
        do {
          ppppcVar32 = *pppppcVar35;
          if (*(code *)(ppppcVar32 + 0x6b) == (code)0x1) {
            FUN_10a440978(pppppppcVar8);
            ppppppcVar10 = pppppppcVar37[1];
            for (ppppppcVar12 = *pppppppcVar37; ppppppcVar12 != ppppppcVar10;
                ppppppcVar12 = ppppppcVar12 + 4) {
              FUN_10aa71aa0(&ppppppcStack_2f0,(*ppppppcVar12)[8],ppppppcVar25);
              if ((uVar26 == 0) && (ppppppcStack_2f0 == (code ******)0x0)) {
                ppppcVar24 = (*ppppppcVar12)[8];
                FUN_10a416ae4();
                FUN_10aa71aa0(&ppppppcStack_2e0,ppppcVar24,0x1137eb188);
                pppppppcVar30 = pppppppcStack_2d8;
                ppppppcStack_2f0 = ppppppcStack_2e0;
                pppppppcVar33 = pppppppcStack_2e8;
                ppppppcStack_2e0 = (code ******)0x0;
                pppppppcStack_2d8 = (code *******)0x0;
                pppppppcStack_2e8 = pppppppcVar30;
                if (pppppppcVar33 != (code *******)0x0) {
                  pppppppcVar30 = pppppppcVar33 + 1;
                  do {
                    ppppppcVar38 = *pppppppcVar30;
                    cVar4 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                    if (bVar7) {
                      *pppppppcVar30 = (code ******)((long)ppppppcVar38 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (ppppppcVar38 == (code ******)0x0) {
                    (*(code *)(*pppppppcVar33)[2])(pppppppcVar33);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar33);
                  }
                }
                pppppppcVar33 = pppppppcStack_2d8;
                if (pppppppcStack_2d8 != (code *******)0x0) {
                  pppppppcVar30 = pppppppcStack_2d8 + 1;
                  do {
                    ppppppcVar38 = *pppppppcVar30;
                    cVar4 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                    if (bVar7) {
                      *pppppppcVar30 = (code ******)((long)ppppppcVar38 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (ppppppcVar38 == (code ******)0x0) {
                    (*(code *)(*pppppppcStack_2d8)[2])(pppppppcStack_2d8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar33);
                  }
                }
              }
              if ((ppppppcStack_2f0 != (code ******)0x0) &&
                 (pppppcVar36 = ppppppcStack_2f0[0x11], pppppcVar36 != (code *****)0x0)) {
                fVar44 = *(float *)(*ppppppcVar12 + 10);
                fVar39 = *(float *)(ppppppcVar12 + 2);
                do {
                  ppppcVar24 = ppppcVar32 + 99;
                  FUN_10a428b30(ppppcVar24,pppppcVar36 + 2);
                  if ((int)ppppcVar24 != 0) {
                    ppppppcVar20 = (code ******)pppppcVar36[5];
                    ppppppcVar38 = pppppppcVar31[0x59];
                    if (ppppppcVar38 != (code ******)0x0) {
                      pcVar14 = (code *)((long)ppppppcVar38 + -1);
                      if (((ulong)ppppppcVar38 & (ulong)pcVar14) == 0) {
                        unaff_x25 = (code ******)((ulong)pcVar14 & (ulong)ppppppcVar20);
                      }
                      else {
                        unaff_x25 = ppppppcVar20;
                        if (ppppppcVar38 <= ppppppcVar20) {
                          uVar21 = 0;
                          if (ppppppcVar38 != (code ******)0x0) {
                            uVar21 = (ulong)ppppppcVar20 / (ulong)ppppppcVar38;
                          }
                          unaff_x25 = (code ******)
                                      ((long)ppppppcVar20 - uVar21 * (long)ppppppcVar38);
                        }
                      }
                      if ((*pppppppcVar8)[(long)unaff_x25] != (code *****)0x0) {
                        for (ppppppcVar22 = (code ******)*(*pppppppcVar8)[(long)unaff_x25];
                            ppppppcVar22 != (code ******)0x0;
                            ppppppcVar22 = (code ******)*ppppppcVar22) {
                          ppppppcVar16 = (code ******)ppppppcVar22[1];
                          if (ppppppcVar16 == ppppppcVar20) {
                            if ((code ******)ppppppcVar22[5] == ppppppcVar20) goto LAB_10a419154;
                          }
                          else {
                            if (((ulong)ppppppcVar38 & (ulong)pcVar14) == 0) {
                              ppppppcVar16 = (code ******)((ulong)ppppppcVar16 & (ulong)pcVar14);
                            }
                            else if (ppppppcVar38 <= ppppppcVar16) {
                              uVar21 = 0;
                              if (ppppppcVar38 != (code ******)0x0) {
                                uVar21 = (ulong)ppppppcVar16 / (ulong)ppppppcVar38;
                              }
                              ppppppcVar16 = (code ******)
                                             ((long)ppppppcVar16 - uVar21 * (long)ppppppcVar38);
                            }
                            if (ppppppcVar16 != unaff_x25) break;
                          }
                        }
                      }
                    }
                    ppppppcVar22 = (code ******)0x38;
                    __Znwm();
                    uStack_2d0 = 0;
                    *ppppppcVar22 = (code *****)0x0;
                    ppppppcVar22[1] = (code *****)ppppppcVar20;
                    ppppppcStack_2e0 = ppppppcVar22;
                    pppppppcStack_2d8 = pppppppcVar8;
                    if ((char)*(code *)((long)pppppcVar36 + 0x27) < '\0') {
                      func_0x000107c3192c(ppppppcVar22 + 2,pppppcVar36[2],pppppcVar36[3]);
                    }
                    else {
                      pppppcVar42 = (code *****)pppppcVar36[3];
                      pppppcVar17 = (code *****)pppppcVar36[2];
                      ppppppcVar22[4] = (code *****)pppppcVar36[4];
                      ppppppcVar22[3] = pppppcVar42;
                      ppppppcVar22[2] = pppppcVar17;
                    }
                    ppppppcVar22[5] = (code *****)pppppcVar36[5];
                    *(undefined4 *)(ppppppcVar22 + 6) = 0;
                    uStack_2d0 = CONCAT71(uStack_2d0._1_7_,1);
                    if ((ppppppcVar38 == (code ******)0x0) ||
                       (*(float *)(pppppppcVar31 + 0x5c) * (float)ppppppcVar38 <
                        (float)((long)pppppppcVar31[0x5b] + 1))) {
                      uVar21 = 1;
                      if ((code ******)0x2 < ppppppcVar38) {
                        uVar21 = (ulong)(((ulong)ppppppcVar38 & (ulong)((long)ppppppcVar38 + -1)) !=
                                        0);
                      }
                      uVar21 = uVar21 | (long)ppppppcVar38 << 1;
                      uVar15 = (ulong)((float)((long)pppppppcVar31[0x5b] + 1) /
                                      *(float *)(pppppppcVar31 + 0x5c));
                      if (uVar21 <= uVar15) {
                        uVar21 = uVar15;
                      }
                      FUN_10a1f9fe4(pppppppcVar8,uVar21);
                      ppppppcVar38 = pppppppcVar31[0x59];
                      if (((ulong)ppppppcVar38 & (ulong)((long)ppppppcVar38 + -1)) == 0) {
                        unaff_x25 = (code ******)
                                    ((ulong)((long)ppppppcVar38 + -1) & (ulong)ppppppcVar20);
                      }
                      else {
                        unaff_x25 = ppppppcVar20;
                        if (ppppppcVar38 <= ppppppcVar20) {
                          uVar21 = 0;
                          if (ppppppcVar38 != (code ******)0x0) {
                            uVar21 = (ulong)ppppppcVar20 / (ulong)ppppppcVar38;
                          }
                          unaff_x25 = (code ******)
                                      ((long)ppppppcVar20 - uVar21 * (long)ppppppcVar38);
                        }
                      }
                    }
                    ppppppcVar20 = *pppppppcVar8;
                    pppppcVar17 = ppppppcVar20[(long)unaff_x25];
                    if (pppppcVar17 == (code *****)0x0) {
                      *ppppppcStack_2e0 = (code *****)*pppppppcVar28;
                      *pppppppcVar28 = ppppppcStack_2e0;
                      ppppppcVar20[(long)unaff_x25] = (code *****)pppppppcVar28;
                      if (*ppppppcStack_2e0 != (code *****)0x0) {
                        ppppppcVar20 = (code ******)(*ppppppcStack_2e0)[1];
                        if (((ulong)ppppppcVar38 & (ulong)((long)ppppppcVar38 + -1)) == 0) {
                          ppppppcVar20 = (code ******)
                                         ((ulong)ppppppcVar20 & (ulong)((long)ppppppcVar38 + -1));
                        }
                        else if (ppppppcVar38 <= ppppppcVar20) {
                          uVar21 = 0;
                          if (ppppppcVar38 != (code ******)0x0) {
                            uVar21 = (ulong)ppppppcVar20 / (ulong)ppppppcVar38;
                          }
                          ppppppcVar20 = (code ******)
                                         ((long)ppppppcVar20 - uVar21 * (long)ppppppcVar38);
                        }
                        (*pppppppcVar8)[(long)ppppppcVar20] = (code *****)ppppppcStack_2e0;
                      }
                    }
                    else {
                      *ppppppcStack_2e0 = (code *****)*pppppcVar17;
                      *pppppcVar17 = (code ****)ppppppcStack_2e0;
                    }
                    pppppppcVar31[0x5b] = (code ******)((long)pppppppcVar31[0x5b] + 1);
                    ppppppcVar22 = ppppppcStack_2e0;
LAB_10a419154:
                    fVar40 = *(float *)(ppppppcVar22 + 6);
                    if (*(int *)(*ppppppcVar12 + 0xe) == 2) {
                      fVar43 = fVar39;
                      (*(code *)**pppppcVar36[6])();
                      fVar40 = fVar40 + fVar44 * fVar43;
                    }
                    else {
                      fVar43 = fVar39;
                      (*(code *)**pppppcVar36[6])();
                      fVar40 = fVar44 * fVar43 + (1.0 - fVar44) * fVar40;
                    }
                    *(float *)(ppppppcVar22 + 6) = fVar40;
                  }
                  pppppcVar36 = (code *****)*pppppcVar36;
                } while (pppppcVar36 != (code *****)0x0);
              }
              pppppppcVar33 = pppppppcStack_2e8;
              if (pppppppcStack_2e8 != (code *******)0x0) {
                pppppppcVar30 = pppppppcStack_2e8 + 1;
                do {
                  ppppppcVar38 = *pppppppcVar30;
                  cVar4 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(pppppppcVar30,0x10);
                  if (bVar7) {
                    *pppppppcVar30 = (code ******)((long)ppppppcVar38 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (ppppppcVar38 == (code ******)0x0) {
                  (*(code *)(*pppppppcStack_2e8)[2])(pppppppcStack_2e8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar33);
                }
              }
            }
            for (ppppppcVar12 = *pppppppcVar28; ppppppcVar12 != (code ******)0x0;
                ppppppcVar12 = (code ******)*ppppppcVar12) {
              FUN_10a428c04(*(undefined4 *)(ppppppcVar12 + 6),
                            (float)(double)ppppcVar32[0x2e][0x10a][1],ppppcVar32 + 99,
                            ppppppcVar12 + 2);
            }
            FUN_10a440978(pppppppcVar8);
          }
          pppppcVar35 = pppppcVar35 + 1;
        } while (pppppcVar35 != pppppcVar13);
        ppppppcVar12 = pppppppcVar31[0x47];
        ppppppcVar10 = pppppppcVar31[0x46];
      }
      uVar26 = uVar26 + 1;
      uVar21 = ((long)ppppppcVar12 - (long)ppppppcVar10 >> 4) * -0x3333333333333333;
    } while (uVar26 <= uVar21 && uVar21 - uVar26 != 0);
  }
  return;
}



/* Entry: 10a41a03c; end: 10a41a0ff;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a41a03c(undefined8 param_1,code *******param_2,code *******param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code ******ppppppcVar5;
  code cVar6;
  code ******ppppppcVar7;
  long lVar8;
  code *****pppppcVar9;
  code *pcVar10;
  ulong uVar11;
  code *****pppppcVar12;
  code ******ppppppcVar13;
  code *****pppppcVar14;
  code *******pppppppcVar15;
  code ******ppppppcVar16;
  ulong uVar17;
  code ******ppppppcVar18;
  code ******ppppppcVar19;
  code ****ppppcVar20;
  code ******ppppppcVar21;
  ulong uVar22;
  code *******pppppppcVar23;
  long lVar24;
  code *******pppppppcVar25;
  code *******pppppppcVar26;
  code *******pppppppcVar27;
  code *******pppppppcVar28;
  code *******pppppppcVar29;
  code ****ppppcVar30;
  code ******unaff_x25;
  code *****pppppcVar31;
  code *******pppppppcVar32;
  code ******ppppppcVar33;
  float fVar34;
  code *****pppppcVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  code ******ppppppcStack_260;
  code *******pppppppcStack_258;
  code ******ppppppcStack_250;
  code *******pppppppcStack_248;
  undefined8 uStack_240;
  code *******pppppppcStack_170;
  code *******pppppppcStack_168;
  code *******pppppppcStack_158;
  code *******pppppppcStack_150;
  code *******pppppppcStack_148;
  code *******pppppppcStack_140;
  code ******ppppppcStack_138;
  code ******ppppppcStack_130;
  long lStack_128;
  float fStack_120;
  code *******pppppppcStack_110;
  code *******pppppppcStack_108;
  code *******pppppppcStack_100;
  code *******pppppppcStack_f8;
  code *******pppppppcStack_f0;
  code *******pppppppcStack_e8;
  code *******pppppppcStack_e0;
  code *******pppppppcStack_d8;
  code *******pppppppcStack_d0;
  code *******pppppppcStack_c8;
  long lStack_b0;
  
  ppppppcVar7 = param_2[1];
  if (ppppppcVar7 < param_2[2]) {
    ppppppcVar5 = *param_3;
    ppppppcVar7[1] = (code *****)param_3[1];
    *ppppppcVar7 = (code *****)ppppppcVar5;
    ppppppcVar7 = ppppppcVar7 + 2;
LAB_10a41a0e8:
    param_2[1] = ppppppcVar7;
    return;
  }
  lVar24 = (long)ppppppcVar7 - (long)*param_2;
  uVar22 = (lVar24 >> 4) + 1;
  if (uVar22 >> 0x3c == 0) {
    uVar11 = (long)param_2[2] - (long)*param_2;
    uVar17 = (long)uVar11 >> 3;
    if (uVar17 <= uVar22) {
      uVar17 = uVar22;
    }
    if (0x7fffffffffffffef < uVar11) {
      uVar17 = 0xfffffffffffffff;
    }
    pppppppcVar32 = param_3;
    FUN_10a436570();
    plVar1 = (long *)(uVar17 + lVar24);
    ppppppcVar7 = *param_3;
    plVar1[1] = (long)param_3[1];
    *plVar1 = (long)ppppppcVar7;
    ppppppcVar7 = (code ******)(plVar1 + 2);
    ppppppcVar21 = (code ******)((long)plVar1 - ((long)param_2[1] - (long)*param_2));
    _memcpy(ppppppcVar21);
    ppppppcVar5 = *param_2;
    *param_2 = ppppppcVar21;
    param_2[1] = ppppppcVar7;
    param_2[2] = (code ******)(uVar17 + (long)pppppppcVar32 * 0x10);
    if (ppppppcVar5 != (code ******)0x0) {
      __ZdlPv();
    }
    goto LAB_10a41a0e8;
  }
  pppppppcVar32 = param_3;
  FUN_10a43655c();
  if (param_2[0x4c] == param_2[0x4d]) {
    return;
  }
  FUN_10a4158d4();
  if ((param_2[0x67] == param_2[0x68]) ||
     (((long)param_2[0x47] - (long)param_2[0x46] >> 4) * -0x3333333333333333 -
      ((long)param_2[0x68] - (long)param_2[0x67] >> 6) != 0)) {
    FUN_10a41a204(param_2,pppppppcVar32);
  }
  FUN_10a419cd4(param_1,param_2 + 0x4c,param_2 + 0x52);
  if (param_2[0x52] == param_2[0x53]) {
SUB_10a440420:
    if (param_2[0x65] != (code ******)0x0) {
      ppppppcVar7 = param_2[100];
      while (ppppppcVar7 != (code ******)0x0) {
        ppppppcVar7 = (code ******)*ppppppcVar7;
        __ZdlPv();
      }
      param_2[100] = (code ******)0x0;
      ppppppcVar7 = param_2[99];
      if (ppppppcVar7 != (code ******)0x0) {
        ppppppcVar5 = (code ******)0x0;
        do {
          param_2[0x62][(long)ppppppcVar5] = (code *****)0x0;
          ppppppcVar5 = (code ******)((long)ppppppcVar5 + 1);
        } while (ppppppcVar7 != ppppppcVar5);
      }
      param_2[0x65] = (code ******)0x0;
    }
    return;
  }
  FUN_10a419df8(param_1);
  FUN_10a416cf8(param_2 + 0x46,param_2 + 0x67,param_2 + 0x52);
  FUN_10a418dd0(param_2,param_2 + 0x52);
  pppppppcVar32 = param_2 + 0x52;
  FUN_10a419308(param_2);
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar27 = param_2;
  if (param_2[0x42][6] == (code *****)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) goto SUB_10a440420;
  }
  else {
    param_3 = (code *******)param_2[0x4f];
    pppppppcVar28 = (code *******)param_2[0x50];
    uVar22 = (long)pppppppcVar28 - (long)param_3;
    ppppppcVar7 = param_2[0x57];
    pppppppcVar25 = (code *******)param_2[0x55];
    if ((ulong)((long)ppppppcVar7 - (long)pppppppcVar25) < uVar22) {
      pppppppcVar26 = (code *******)((long)uVar22 >> 4);
      if (pppppppcVar25 != (code *******)0x0) {
        param_2[0x56] = (code ******)pppppppcVar25;
        __ZdlPv();
        ppppppcVar7 = (code ******)0x0;
        param_2[0x55] = (code ******)0x0;
        param_2[0x56] = (code ******)0x0;
        param_2[0x57] = (code ******)0x0;
        pppppppcVar27 = pppppppcVar25;
      }
      if ((ulong)pppppppcVar26 >> 0x3c != 0) goto LAB_10a418cb0;
      pppppppcVar27 = (code *******)((long)ppppppcVar7 >> 3);
      if ((code *******)((long)ppppppcVar7 >> 3) <= pppppppcVar26) {
        pppppppcVar27 = pppppppcVar26;
      }
      if ((code ******)0x7fffffffffffffef < ppppppcVar7) {
        pppppppcVar27 = (code *******)0xfffffffffffffff;
      }
      if ((ulong)pppppppcVar27 >> 0x3c != 0) goto LAB_10a418cb0;
      FUN_10a436570();
      param_2[0x55] = (code ******)pppppppcVar27;
      param_2[0x56] = (code ******)pppppppcVar27;
      param_2[0x57] = (code ******)(pppppppcVar27 + (long)pppppppcVar32 * 2);
      pppppppcVar25 = pppppppcVar27;
LAB_10a418164:
      if (pppppppcVar28 != param_3) {
        pppppppcVar32 = param_3;
        _memmove(pppppppcVar25,param_3,uVar22);
      }
      ppppppcVar7 = (code ******)((long)pppppppcVar25 + uVar22);
    }
    else {
      pppppppcVar27 = (code *******)param_2[0x56];
      if (uVar22 <= (ulong)((long)pppppppcVar27 - (long)pppppppcVar25)) goto LAB_10a418164;
      pppppppcVar26 = (code *******)((long)param_3 + ((long)pppppppcVar27 - (long)pppppppcVar25));
      if (pppppppcVar27 != pppppppcVar25) {
        _memmove(pppppppcVar25);
        pppppppcVar27 = (code *******)param_2[0x56];
        pppppppcVar32 = param_3;
      }
      param_3 = (code *******)((long)pppppppcVar28 - (long)pppppppcVar26);
      if (param_3 != (code *******)0x0) {
        _memmove(pppppppcVar27,pppppppcVar26,param_3);
        pppppppcVar32 = pppppppcVar26;
      }
      ppppppcVar7 = (code ******)((long)pppppppcVar27 + (long)param_3);
    }
    param_2[0x56] = ppppppcVar7;
    pppppppcStack_158 = (code *******)0x0;
    pppppppcStack_150 = (code *******)0x0;
    pppppppcStack_148 = (code *******)0x0;
    ppppppcVar5 = param_2[0x55];
    if (ppppppcVar5 != ppppppcVar7) {
      unaff_x25 = (code ******)0x9ddfea08eb382d69;
      param_3 = param_2 + 0x5d;
      pppppppcVar27 = param_2 + 0x5f;
      pppppppcVar25 = pppppppcVar32;
      do {
        pppppppcVar28 = (code *******)(*ppppppcVar5)[0x22];
        ppppppcVar21 = (code ******)(*ppppppcVar5)[0x23];
        if (ppppppcVar21 != (code ******)0x0) {
          ppppppcVar33 = ppppppcVar21 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppppcVar33,0x10);
            if (bVar3) {
              *ppppppcVar33 = (code *****)((long)*ppppppcVar33 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pppppppcVar32 = pppppppcVar25;
        pppppppcStack_140 = pppppppcVar28;
        ppppppcStack_138 = ppppppcVar21;
        if (2 < (ulong)(((long)pppppppcVar28[2] - (long)pppppppcVar28[1] >> 4) * -0x5555555555555555
                       )) {
          FUN_10aa8113c(*(undefined4 *)(ppppppcVar5 + 1),*(undefined4 *)((long)ppppppcVar5 + 0xc));
          pppppppcVar32 = (code *******)0x0;
          if (pppppppcVar25 != (code *******)0x0) {
            pppppppcVar25 = pppppppcVar28 + (long)pppppppcVar25 * 6;
            do {
              pppppppcVar29 = (code *******)pppppppcVar28[1];
              pppppppcVar26 = param_3;
              pppppppcVar32 = pppppppcVar29;
              FUN_10a440484();
              if (pppppppcVar26 == (code *******)0x0) {
                pppppppcVar26 = param_2 + 0x62;
                pppppppcVar32 = pppppppcVar29;
                FUN_10a440484();
                if (pppppppcVar26 == (code *******)0x0) {
                  uVar22 = ((ulong)(uint)((int)pppppppcVar29 << 3) + 8 ^
                           (ulong)pppppppcVar29 >> 0x20) * -0x622015f714c7d297;
                  uVar22 = ((ulong)pppppppcVar29 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) *
                           -0x622015f714c7d297;
                  pppppppcVar23 = (code *******)((uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297);
                  pppppppcVar26 = (code *******)param_2[0x5e];
                  pppppppcVar32 = param_2;
                  if (pppppppcVar26 != (code *******)0x0) {
                    uVar22 = (long)pppppppcVar26 - 1;
                    if (((ulong)pppppppcVar26 & uVar22) == 0) {
                      pppppppcVar32 = (code *******)(uVar22 & (ulong)pppppppcVar23);
                    }
                    else {
                      pppppppcVar32 = pppppppcVar23;
                      if (pppppppcVar26 <= pppppppcVar23) {
                        uVar17 = 0;
                        if (pppppppcVar26 != (code *******)0x0) {
                          uVar17 = (ulong)pppppppcVar23 / (ulong)pppppppcVar26;
                        }
                        pppppppcVar32 =
                             (code *******)((long)pppppppcVar23 - uVar17 * (long)pppppppcVar26);
                      }
                    }
                    pppppcVar12 = (*param_3)[(long)pppppppcVar32];
                    if (pppppcVar12 != (code *****)0x0) {
                      do {
                        while( true ) {
                          pppppcVar12 = (code *****)*pppppcVar12;
                          if (pppppcVar12 == (code *****)0x0) goto LAB_10a4182ec;
                          pppppppcVar15 = (code *******)pppppcVar12[1];
                          if (pppppppcVar15 != pppppppcVar23) break;
                          if ((code *******)pppppcVar12[2] == pppppppcVar29) goto LAB_10a418588;
                        }
                        if (((ulong)pppppppcVar26 & uVar22) == 0) {
                          pppppppcVar15 = (code *******)((ulong)pppppppcVar15 & uVar22);
                        }
                        else if (pppppppcVar26 <= pppppppcVar15) {
                          uVar17 = 0;
                          if (pppppppcVar26 != (code *******)0x0) {
                            uVar17 = (ulong)pppppppcVar15 / (ulong)pppppppcVar26;
                          }
                          pppppppcVar15 =
                               (code *******)((long)pppppppcVar15 - uVar17 * (long)pppppppcVar26);
                        }
                      } while (pppppppcVar15 == pppppppcVar32);
                    }
                  }
LAB_10a4182ec:
                  ppppppcVar33 = (code ******)0x18;
                  __Znwm();
                  *ppppppcVar33 = (code *****)0x0;
                  ppppppcVar33[1] = (code *****)pppppppcVar23;
                  ppppppcVar33[2] = (code *****)pppppppcVar29;
                  if ((pppppppcVar26 == (code *******)0x0) ||
                     (*(float *)(param_2 + 0x61) * (float)pppppppcVar26 <
                      (float)((long)param_2[0x60] + 1))) {
                    uVar22 = 1;
                    if ((code *******)0x2 < pppppppcVar26) {
                      uVar22 = (ulong)(((ulong)pppppppcVar26 & (long)pppppppcVar26 - 1U) != 0);
                    }
                    pppppppcVar32 = (code *******)(uVar22 | (long)pppppppcVar26 << 1);
                    pppppppcVar29 =
                         (code *******)
                         (long)((float)((long)param_2[0x60] + 1) / *(float *)(param_2 + 0x61));
                    if (pppppppcVar32 <= pppppppcVar29) {
                      pppppppcVar32 = pppppppcVar29;
                    }
                    if ((long)pppppppcVar32 - 1U == 0) {
                      pppppppcVar32 = (code *******)0x2;
                    }
                    else if (((ulong)pppppppcVar32 & (long)pppppppcVar32 - 1U) != 0) {
                      __ZNSt3__112__next_primeEm();
                      pppppppcVar26 = (code *******)param_2[0x5e];
                    }
                    if (pppppppcVar26 < pppppppcVar32) {
LAB_10a418390:
                      pppppppcVar26 = pppppppcVar32;
                      if ((ulong)pppppppcVar26 >> 0x3d != 0) {
                        func_0x000109ffded8();
                        goto LAB_10a418ca8;
                      }
                      ppppppcVar16 = (code ******)((long)pppppppcVar26 << 3);
                      __Znwm();
                      ppppppcVar18 = *param_3;
                      *param_3 = ppppppcVar16;
                      if (ppppppcVar18 != (code ******)0x0) {
                        __ZdlPv();
                      }
                      pppppppcVar32 = (code *******)0x0;
                      param_2[0x5e] = (code ******)pppppppcVar26;
                      do {
                        (*param_3)[(long)pppppppcVar32] = (code *****)0x0;
                        pppppppcVar32 = (code *******)((long)pppppppcVar32 + 1);
                      } while (pppppppcVar26 != pppppppcVar32);
                      ppppppcVar16 = *pppppppcVar27;
                      if (ppppppcVar16 != (code ******)0x0) {
                        pppppppcVar32 = (code *******)ppppppcVar16[1];
                        uVar22 = (long)pppppppcVar26 - 1;
                        if (((ulong)pppppppcVar26 & uVar22) == 0) {
                          pppppppcVar32 = (code *******)((ulong)pppppppcVar32 & uVar22);
                        }
                        else if (pppppppcVar26 <= pppppppcVar32) {
                          uVar17 = 0;
                          if (pppppppcVar26 != (code *******)0x0) {
                            uVar17 = (ulong)pppppppcVar32 / (ulong)pppppppcVar26;
                          }
                          pppppppcVar32 =
                               (code *******)((long)pppppppcVar32 - uVar17 * (long)pppppppcVar26);
                        }
                        (*param_3)[(long)pppppppcVar32] = (code *****)pppppppcVar27;
                        ppppppcVar18 = (code ******)*ppppppcVar16;
                        while (ppppppcVar18 != (code ******)0x0) {
                          pppppppcVar29 = (code *******)ppppppcVar18[1];
                          if (((ulong)pppppppcVar26 & uVar22) == 0) {
                            pppppppcVar29 = (code *******)((ulong)pppppppcVar29 & uVar22);
                          }
                          else if (pppppppcVar26 <= pppppppcVar29) {
                            uVar17 = 0;
                            if (pppppppcVar26 != (code *******)0x0) {
                              uVar17 = (ulong)pppppppcVar29 / (ulong)pppppppcVar26;
                            }
                            pppppppcVar29 =
                                 (code *******)((long)pppppppcVar29 - uVar17 * (long)pppppppcVar26);
                          }
                          ppppppcVar13 = ppppppcVar18;
                          if (pppppppcVar29 != pppppppcVar32) {
                            ppppppcVar19 = *param_3;
                            if (ppppppcVar19[(long)pppppppcVar29] == (code *****)0x0) {
                              ppppppcVar19[(long)pppppppcVar29] = (code *****)ppppppcVar16;
                              pppppppcVar32 = pppppppcVar29;
                            }
                            else {
                              *ppppppcVar16 = *ppppppcVar18;
                              *ppppppcVar18 = (code *****)*ppppppcVar19[(long)pppppppcVar29];
                              *ppppppcVar19[(long)pppppppcVar29] = (code ****)ppppppcVar18;
                              ppppppcVar13 = ppppppcVar16;
                            }
                          }
                          ppppppcVar16 = ppppppcVar13;
                          ppppppcVar18 = (code ******)*ppppppcVar13;
                        }
                      }
                    }
                    else if (pppppppcVar32 < pppppppcVar26) {
                      pppppppcVar29 =
                           (code *******)(long)((float)param_2[0x60] / *(float *)(param_2 + 0x61));
                      if ((pppppppcVar26 < (code *******)0x3) ||
                         (((ulong)pppppppcVar26 & (long)pppppppcVar26 - 1U) != 0)) {
                        __ZNSt3__112__next_primeEm();
                      }
                      else if ((code *******)0x1 < pppppppcVar29) {
                        pppppppcVar29 =
                             (code *******)(1L << (-LZCOUNT((long)pppppppcVar29 + -1) & 0x3fU));
                      }
                      if (pppppppcVar32 <= pppppppcVar29) {
                        pppppppcVar32 = pppppppcVar29;
                      }
                      if (pppppppcVar32 < pppppppcVar26) {
                        if (pppppppcVar32 != (code *******)0x0) goto LAB_10a418390;
                        ppppppcVar16 = *param_3;
                        *param_3 = (code ******)0x0;
                        if (ppppppcVar16 != (code ******)0x0) {
                          __ZdlPv();
                        }
                        pppppppcVar26 = (code *******)0x0;
                        param_2[0x5e] = (code ******)0x0;
                      }
                      else {
                        pppppppcVar26 = (code *******)param_2[0x5e];
                      }
                    }
                    if (((ulong)pppppppcVar26 & (long)pppppppcVar26 - 1U) == 0) {
                      pppppppcVar32 =
                           (code *******)((long)pppppppcVar26 - 1U & (ulong)pppppppcVar23);
                    }
                    else {
                      pppppppcVar32 = pppppppcVar23;
                      if (pppppppcVar26 <= pppppppcVar23) {
                        uVar22 = 0;
                        if (pppppppcVar26 != (code *******)0x0) {
                          uVar22 = (ulong)pppppppcVar23 / (ulong)pppppppcVar26;
                        }
                        pppppppcVar32 =
                             (code *******)((long)pppppppcVar23 - uVar22 * (long)pppppppcVar26);
                      }
                    }
                  }
                  ppppppcVar18 = *param_3;
                  ppppppcVar16 = (code ******)ppppppcVar18[(long)pppppppcVar32];
                  if (ppppppcVar16 == (code ******)0x0) {
                    *ppppppcVar33 = (code *****)*pppppppcVar27;
                    *pppppppcVar27 = ppppppcVar33;
                    ppppppcVar18[(long)pppppppcVar32] = (code *****)pppppppcVar27;
                    if (*ppppppcVar33 != (code *****)0x0) {
                      pppppppcVar32 = (code *******)(*ppppppcVar33)[1];
                      if (((ulong)pppppppcVar26 & (long)pppppppcVar26 - 1U) == 0) {
                        pppppppcVar32 =
                             (code *******)((ulong)pppppppcVar32 & (long)pppppppcVar26 - 1U);
                      }
                      else if (pppppppcVar26 <= pppppppcVar32) {
                        uVar22 = 0;
                        if (pppppppcVar26 != (code *******)0x0) {
                          uVar22 = (ulong)pppppppcVar32 / (ulong)pppppppcVar26;
                        }
                        pppppppcVar32 =
                             (code *******)((long)pppppppcVar32 - uVar22 * (long)pppppppcVar26);
                      }
                      ppppppcVar16 = *param_3 + (long)pppppppcVar32;
                      goto LAB_10a418578;
                    }
                  }
                  else {
                    *ppppppcVar33 = *ppppppcVar16;
LAB_10a418578:
                    *ppppppcVar16 = (code *****)ppppppcVar33;
                  }
                  param_2[0x60] = (code ******)((long)param_2[0x60] + 1);
LAB_10a418588:
                  pppppppcVar26 = pppppppcStack_150;
                  if (pppppppcStack_150 < pppppppcStack_148) {
                    pppppppcVar32 = pppppppcVar28;
                    FUN_10a4365a4(pppppppcStack_150);
                    pppppppcStack_150 = pppppppcVar26 + 6;
                  }
                  else {
                    lVar24 = (long)pppppppcStack_150 - (long)pppppppcStack_158;
                    uVar22 = (lVar24 >> 4) * -0x5555555555555555 + 1;
                    if (0x555555555555555 < uVar22) {
                      FUN_10a43668c();
LAB_10a418ca8:
                    /* WARNING: Does not return */
                      pcVar10 = (code *)SoftwareBreakpoint(1,0x10a418cac);
                      (*pcVar10)();
                    }
                    lVar8 = (long)pppppppcStack_148 - (long)pppppppcStack_158 >> 4;
                    uVar17 = lVar8 * 0x5555555555555556;
                    if (uVar17 < uVar22 || uVar17 - uVar22 == 0) {
                      uVar17 = uVar22;
                    }
                    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
                      uVar17 = 0x555555555555555;
                    }
                    pppppppcStack_d0 = (code *******)&pppppppcStack_158;
                    if (uVar17 == 0) {
                      pppppppcVar32 = (code *******)0x0;
                    }
                    else {
                      pppppppcVar32 = (code *******)&pppppppcStack_158;
                      FUN_10a4366a0();
                    }
                    ppppppcVar33 = (code ******)((long)pppppppcVar32 + lVar24);
                    pppppppcStack_d8 = pppppppcVar32 + uVar17 * 6;
                    pppppppcStack_f0 = pppppppcVar32;
                    pppppppcStack_e8 = (code *******)ppppppcVar33;
                    pppppppcStack_e0 = (code *******)ppppppcVar33;
                    FUN_10a4365a4(ppppppcVar33,pppppppcVar28);
                    pppppppcStack_e0 = (code *******)(ppppppcVar33 + 6);
                    pppppppcVar26 =
                         (code *******)
                         ((long)pppppppcStack_158 + ((long)ppppppcVar33 - (long)pppppppcStack_150));
                    pppppppcVar32 = pppppppcStack_158;
                    func_0x00010a4366e4(&pppppppcStack_158,pppppppcStack_158,pppppppcStack_150,
                                        pppppppcVar26);
                    pppppppcVar23 = pppppppcStack_e0;
                    pppppppcVar29 = pppppppcStack_148;
                    pppppppcStack_148 = pppppppcStack_d8;
                    pppppppcStack_150 = pppppppcStack_e0;
                    pppppppcStack_e0 = pppppppcStack_158;
                    pppppppcStack_d8 = pppppppcVar29;
                    pppppppcStack_f0 = pppppppcStack_158;
                    pppppppcStack_e8 = pppppppcStack_158;
                    pppppppcStack_158 = pppppppcVar26;
                    func_0x00010a436790(&pppppppcStack_f0);
                    pppppppcStack_150 = pppppppcVar23;
                  }
                }
              }
              pppppppcVar28 = pppppppcVar28 + 6;
            } while (pppppppcVar28 != pppppppcVar25);
          }
        }
        if (ppppppcVar21 != (code ******)0x0) {
          ppppppcVar33 = ppppppcVar21 + 1;
          do {
            pppppcVar12 = *ppppppcVar33;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppppcVar33,0x10);
            if (bVar3) {
              *ppppppcVar33 = (code *****)((long)pppppcVar12 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (pppppcVar12 == (code *****)0x0) {
            (*(code *)(*ppppppcVar21)[2])(ppppppcVar21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar21);
          }
        }
        pppppppcVar28 = pppppppcStack_150;
        ppppppcVar5 = ppppppcVar5 + 2;
        pppppppcVar25 = pppppppcVar32;
      } while (ppppppcVar5 != ppppppcVar7);
      if (pppppppcStack_158 != pppppppcStack_150) {
        pppppppcVar27 = pppppppcStack_158;
        do {
          ppppppcVar7 = param_2[0x42];
          param_3 = (code *******)0x48;
          __Znwm();
          param_3[1] = (code ******)0x0;
          param_3[2] = (code ******)0x0;
          *param_3 = (code ******)&PTR_DAT_110bd9710;
          if (*(char *)((long)pppppppcVar27 + 0x2f) < '\0') {
            func_0x000107c3192c(&pppppppcStack_f0,pppppppcVar27[3],pppppppcVar27[4]);
          }
          else {
            pppppppcStack_e8 = (code *******)pppppppcVar27[4];
            pppppppcStack_f0 = (code *******)pppppppcVar27[3];
            pppppppcStack_e0 = (code *******)pppppppcVar27[5];
          }
          pppppppcStack_170 = param_3 + 3;
          *pppppppcStack_170 = (code ******)&PTR_DAT_110bd46b8;
          param_3[4] = (code ******)0x0;
          param_3[5] = (code ******)0x0;
          param_3[7] = (code ******)pppppppcStack_e8;
          param_3[6] = (code ******)pppppppcStack_f0;
          param_3[8] = (code ******)pppppppcStack_e0;
          ppppppcStack_138 = (code ******)0x0;
          pppppppcStack_140 = (code *******)0x0;
          lStack_128 = 0;
          ppppppcStack_130 = (code ******)0x0;
          fStack_120 = *(float *)(ppppppcVar7 + 7);
          pppppppcVar32 = (code *******)ppppppcVar7[4];
          pppppppcStack_168 = param_3;
          FUN_10a43ed84(&pppppppcStack_140);
          ppppppcVar21 = ppppppcStack_138;
          ppppppcVar33 = ppppppcStack_130;
          for (pppppcVar12 = ppppppcVar7[5]; ppppppcStack_138 = ppppppcVar21,
              ppppppcStack_130 = ppppppcVar33, pppppcVar12 != (code *****)0x0;
              pppppcVar12 = (code *****)*pppppcVar12) {
            pppppcVar9 = (code *****)pppppcVar12[2];
            uVar22 = ((ulong)(uint)((int)pppppcVar9 << 3) + 8 ^ (ulong)pppppcVar9 >> 0x20) *
                     -0x622015f714c7d297;
            uVar22 = ((ulong)pppppcVar9 >> 0x20 ^ uVar22 >> 0x2f ^ uVar22) * -0x622015f714c7d297;
            ppppppcVar33 = (code ******)((uVar22 ^ uVar22 >> 0x2f) * -0x622015f714c7d297);
            if (ppppppcVar21 != (code ******)0x0) {
              uVar22 = (long)ppppppcVar21 - 1;
              if (((ulong)ppppppcVar21 & uVar22) == 0) {
                ppppppcVar5 = (code ******)((ulong)ppppppcVar33 & uVar22);
              }
              else {
                ppppppcVar5 = ppppppcVar33;
                if (ppppppcVar21 <= ppppppcVar33) {
                  uVar17 = 0;
                  if (ppppppcVar21 != (code ******)0x0) {
                    uVar17 = (ulong)ppppppcVar33 / (ulong)ppppppcVar21;
                  }
                  ppppppcVar5 = (code ******)((long)ppppppcVar33 - uVar17 * (long)ppppppcVar21);
                }
              }
              ppppppcVar16 = pppppppcStack_140[(long)ppppppcVar5];
              if (ppppppcVar16 != (code ******)0x0) {
                do {
                  while( true ) {
                    ppppppcVar16 = (code ******)*ppppppcVar16;
                    if (ppppppcVar16 == (code ******)0x0) goto LAB_10a41889c;
                    ppppppcVar18 = (code ******)ppppppcVar16[1];
                    if (ppppppcVar18 != ppppppcVar33) break;
                    if (ppppppcVar16[2] == pppppcVar9) goto LAB_10a418a00;
                  }
                  if (((ulong)ppppppcVar21 & uVar22) == 0) {
                    ppppppcVar18 = (code ******)((ulong)ppppppcVar18 & uVar22);
                  }
                  else if (ppppppcVar21 <= ppppppcVar18) {
                    uVar17 = 0;
                    if (ppppppcVar21 != (code ******)0x0) {
                      uVar17 = (ulong)ppppppcVar18 / (ulong)ppppppcVar21;
                    }
                    ppppppcVar18 = (code ******)((long)ppppppcVar18 - uVar17 * (long)ppppppcVar21);
                  }
                } while (ppppppcVar18 == ppppppcVar5);
              }
            }
LAB_10a41889c:
            ppppppcVar16 = (code ******)0x68;
            __Znwm();
            *ppppppcVar16 = (code *****)0x0;
            ppppppcVar16[1] = (code *****)ppppppcVar33;
            ppppcVar20 = pppppcVar12[3];
            pppppcVar9 = (code *****)pppppcVar12[2];
            ppppppcVar16[3] = (code *****)pppppcVar12[3];
            ppppppcVar16[2] = pppppcVar9;
            if (ppppcVar20 != (code ****)0x0) {
              ppppcVar20 = ppppcVar20 + 1;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppcVar20,0x10);
                if (bVar3) {
                  *ppppcVar20 = (code ***)((long)*ppppcVar20 + 1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            pppppppcStack_f0 = (code *******)(ppppppcVar16 + 4);
            *(undefined1 *)(ppppppcVar16 + 0xc) = 3;
            if (*(code *)(pppppcVar12 + 0xc) == (code)0x0) {
              cVar6 = (code)0x0;
            }
            else {
              pppppppcVar32 = (code *******)(pppppcVar12 + 4);
              FUN_10a005398(&pppppppcStack_f0);
              cVar6 = *(code *)(pppppcVar12 + 0xc);
            }
            *(code *)(ppppppcVar16 + 0xc) = cVar6;
            if ((ppppppcVar21 == (code ******)0x0) ||
               (fStack_120 * (float)ppppppcVar21 < (float)(lStack_128 + 1))) {
              uVar22 = 1;
              if ((code ******)0x2 < ppppppcVar21) {
                uVar22 = (ulong)(((ulong)ppppppcVar21 & (long)ppppppcVar21 - 1U) != 0);
              }
              pppppppcVar32 = (code *******)(uVar22 | (long)ppppppcVar21 << 1);
              pppppppcVar25 = (code *******)(long)((float)(lStack_128 + 1) / fStack_120);
              if (pppppppcVar32 <= pppppppcVar25) {
                pppppppcVar32 = pppppppcVar25;
              }
              FUN_10a43ed84(&pppppppcStack_140);
              ppppppcVar21 = ppppppcStack_138;
              if (((ulong)ppppppcStack_138 & (long)ppppppcStack_138 - 1U) == 0) {
                ppppppcVar5 = (code ******)((long)ppppppcStack_138 - 1U & (ulong)ppppppcVar33);
              }
              else {
                ppppppcVar5 = ppppppcVar33;
                if (ppppppcStack_138 <= ppppppcVar33) {
                  uVar22 = 0;
                  if (ppppppcStack_138 != (code ******)0x0) {
                    uVar22 = (ulong)ppppppcVar33 / (ulong)ppppppcStack_138;
                  }
                  ppppppcVar5 = (code ******)((long)ppppppcVar33 - uVar22 * (long)ppppppcStack_138);
                }
              }
            }
            ppppppcVar33 = pppppppcStack_140[(long)ppppppcVar5];
            if (ppppppcVar33 == (code ******)0x0) {
              *ppppppcVar16 = (code *****)ppppppcStack_130;
              pppppppcStack_140[(long)ppppppcVar5] = (code ******)&ppppppcStack_130;
              ppppppcStack_130 = ppppppcVar16;
              if (*ppppppcVar16 != (code *****)0x0) {
                ppppppcVar33 = (code ******)(*ppppppcVar16)[1];
                if (((ulong)ppppppcVar21 & (long)ppppppcVar21 - 1U) == 0) {
                  ppppppcVar33 = (code ******)((ulong)ppppppcVar33 & (long)ppppppcVar21 - 1U);
                }
                else if (ppppppcVar21 <= ppppppcVar33) {
                  uVar22 = 0;
                  if (ppppppcVar21 != (code ******)0x0) {
                    uVar22 = (ulong)ppppppcVar33 / (ulong)ppppppcVar21;
                  }
                  ppppppcVar33 = (code ******)((long)ppppppcVar33 - uVar22 * (long)ppppppcVar21);
                }
                pppppppcStack_140[(long)ppppppcVar33] = ppppppcVar16;
              }
            }
            else {
              *ppppppcVar16 = *ppppppcVar33;
              *ppppppcVar33 = (code *****)ppppppcVar16;
            }
            lStack_128 = lStack_128 + 1;
LAB_10a418a00:
            ppppppcVar21 = ppppppcStack_138;
            ppppppcVar33 = ppppppcStack_130;
          }
          if (ppppppcVar33 == (code ******)0x0) {
            FUN_10a43fd9c(&pppppppcStack_140);
LAB_10a418c10:
            pppppppcVar25 = param_3 + 1;
            do {
              ppppppcVar7 = *pppppppcVar25;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
              if (bVar3) {
                *pppppppcVar25 = (code ******)((long)ppppppcVar7 + -1);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (ppppppcVar7 == (code ******)0x0) {
              (*(code *)(*param_3)[2])(param_3);
              __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
            }
          }
          else {
            do {
              pppppppcVar25 = (code *******)ppppppcVar33[2];
              ppppppcVar21 = ppppppcVar7 + 3;
              FUN_10a43f794();
              pppppppcVar32 = pppppppcVar25;
              if (ppppppcVar21 != (code ******)0x0) {
                if (*(char *)(ppppppcVar33 + 0xc) == '\x01') {
                  pppppcVar12 = ppppppcVar33[4];
                  pppppppcStack_e8 = pppppppcStack_168;
                  pppppppcStack_f0 = pppppppcStack_170;
                  if (pppppppcStack_168 != (code *******)0x0) {
                    pppppppcVar32 = pppppppcStack_168 + 1;
                    do {
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar32,0x10);
                      if (bVar3) {
                        *pppppppcVar32 = (code ******)((long)*pppppppcVar32 + 1);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                  }
                  pppppppcVar32 = (code *******)(ppppppcVar33 + 4);
                  (*(code *)pppppcVar12)(&pppppppcStack_f0);
                  if (pppppppcStack_e8 != (code *******)0x0) {
                    pppppppcVar25 = pppppppcStack_e8 + 1;
                    do {
                      ppppppcVar21 = *pppppppcVar25;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
                      if (bVar3) {
                        *pppppppcVar25 = (code ******)((long)ppppppcVar21 + -1);
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                      pppppppcVar26 = pppppppcStack_e8;
                    } while (cVar2 != '\0');
LAB_10a418ac8:
                    if (ppppppcVar21 == (code ******)0x0) {
                      (*(code *)(*pppppppcVar26)[2])(pppppppcVar26);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar26);
                    }
                  }
                }
                else if (*(char *)(ppppppcVar33 + 0xc) == '\x02') {
                  ppppppcVar21 = ppppppcVar33 + 4;
                  FUN_10a688b40();
                  pppppppcVar26 = pppppppcStack_168;
                  if (ppppppcVar21 == (code ******)0x0) {
                    pppppppcVar32 = (code *******)0x0;
                    if (pppppppcVar25 != (code *******)0x0) {
                      pppppppcStack_e0 = (code *******)ppppppcVar33[4];
                      pppppppcStack_d8 = (code *******)ppppppcVar33[5];
                      if (pppppppcStack_d8 != (code *******)0x0) {
                        pppppppcVar32 = pppppppcStack_d8 + 1;
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar32,0x10);
                          if (bVar3) {
                            *pppppppcVar32 = (code ******)((long)*pppppppcVar32 + 1);
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      pppppppcStack_100 = pppppppcStack_170;
                      pppppppcStack_f8 = pppppppcStack_168;
                      if (pppppppcStack_168 == (code *******)0x0) {
                        pppppppcStack_c8 = (code *******)0x0;
                      }
                      else {
                        pppppppcVar32 = pppppppcStack_168 + 1;
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar32,0x10);
                          if (bVar3) {
                            *pppppppcVar32 = (code ******)((long)*pppppppcVar32 + 1);
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        pppppppcStack_c8 = pppppppcStack_168;
                        do {
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar32,0x10);
                          if (bVar3) {
                            *pppppppcVar32 = (code ******)((long)*pppppppcVar32 + 1);
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                      }
                      pppppppcStack_d0 = pppppppcStack_170;
                      pppppppcStack_e8 = (code *******)&PTR_FUN_110bd9750;
                      pppppppcStack_108 = (code *******)0x0;
                      pppppppcStack_110 = (code *******)0x0;
                      pppppppcStack_f0 = (code *******)FUN_10a4407f4;
                      pppppppcVar32 = (code *******)&pppppppcStack_f0;
                      FUN_10a4634ec(pppppppcVar25);
                      (*(code *)*pppppppcStack_e8)(&pppppppcStack_e8);
                      if (pppppppcVar26 != (code *******)0x0) {
                        pppppppcVar25 = pppppppcVar26 + 1;
                        do {
                          ppppppcVar21 = *pppppppcVar25;
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
                          if (bVar3) {
                            *pppppppcVar25 = (code ******)((long)ppppppcVar21 + -1);
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar2 != '\0');
                        if (ppppppcVar21 == (code ******)0x0) {
                          (*(code *)(*pppppppcVar26)[2])(pppppppcVar26);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar26);
                        }
                      }
                      if (pppppppcStack_108 != (code *******)0x0) {
                        pppppppcVar25 = pppppppcStack_108 + 1;
                        do {
                          ppppppcVar21 = *pppppppcVar25;
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar25,0x10);
                          if (bVar3) {
                            *pppppppcVar25 = (code ******)((long)ppppppcVar21 + -1);
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                          pppppppcVar26 = pppppppcStack_108;
                        } while (cVar2 != '\0');
                        goto LAB_10a418ac8;
                      }
                    }
                  }
                  else {
                    *ppppppcVar21 =
                         (code *****)
                         CONCAT44((int)((ulong)*ppppppcVar21 >> 0x20) + 1,(int)*ppppppcVar21 + 1);
                    pppppppcVar32 = (code *******)&pppppppcStack_170;
                    FUN_10a4405f0(ppppppcVar33[4]);
                    iVar4 = *(int *)((long)ppppppcVar21 + 4) + -1;
                    *(int *)((long)ppppppcVar21 + 4) = iVar4;
                    if (iVar4 == 0) {
                      *(undefined4 *)ppppppcVar21 = 0;
                    }
                  }
                }
              }
              param_3 = pppppppcStack_168;
              ppppppcVar33 = (code ******)*ppppppcVar33;
            } while (ppppppcVar33 != (code ******)0x0);
            FUN_10a43fd9c(&pppppppcStack_140);
            if (param_3 != (code *******)0x0) goto LAB_10a418c10;
          }
          pppppppcVar27 = pppppppcVar27 + 6;
        } while (pppppppcVar27 != pppppppcVar28);
      }
    }
    pppppppcStack_f0 = (code *******)&pppppppcStack_158;
    pppppppcVar27 = (code *******)&pppppppcStack_f0;
    FUN_10a4367dc();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10a418cb0:
  FUN_10a43655c();
  __ZNSt3__119__shared_weak_countD2Ev(param_3);
  __ZdlPv();
  pppppppcStack_110 = (code *******)&pppppppcStack_158;
  FUN_10a4367dc(&pppppppcStack_110);
  __Unwind_Resume();
  ppppppcVar7 = pppppppcVar27[0x47];
  ppppppcVar5 = pppppppcVar27[0x46];
  if (ppppppcVar7 != ppppppcVar5) {
    uVar22 = 0;
    pppppppcVar25 = pppppppcVar27 + 0x58;
    pppppppcVar28 = pppppppcVar27 + 0x5a;
    do {
      ppppppcVar21 = ppppppcVar5 + uVar22 * 10;
      pppppcVar12 = ppppppcVar21[7];
      pppppcVar9 = ppppppcVar21[8];
      if (pppppcVar12 != pppppcVar9) {
        do {
          ppppcVar20 = *pppppcVar12;
          if (*(code *)(ppppcVar20 + 0x6b) == (code)0x1) {
            FUN_10a440978(pppppppcVar25);
            ppppppcVar5 = pppppppcVar32[1];
            for (ppppppcVar7 = *pppppppcVar32; ppppppcVar7 != ppppppcVar5;
                ppppppcVar7 = ppppppcVar7 + 4) {
              FUN_10aa71aa0(&ppppppcStack_260,(*ppppppcVar7)[8],ppppppcVar21);
              if ((uVar22 == 0) && (ppppppcStack_260 == (code ******)0x0)) {
                ppppcVar30 = (*ppppppcVar7)[8];
                FUN_10a416ae4();
                FUN_10aa71aa0(&ppppppcStack_250,ppppcVar30,0x1137eb188);
                pppppppcVar29 = pppppppcStack_248;
                ppppppcStack_260 = ppppppcStack_250;
                pppppppcVar26 = pppppppcStack_258;
                ppppppcStack_250 = (code ******)0x0;
                pppppppcStack_248 = (code *******)0x0;
                pppppppcStack_258 = pppppppcVar29;
                if (pppppppcVar26 != (code *******)0x0) {
                  pppppppcVar29 = pppppppcVar26 + 1;
                  do {
                    ppppppcVar33 = *pppppppcVar29;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar29,0x10);
                    if (bVar3) {
                      *pppppppcVar29 = (code ******)((long)ppppppcVar33 + -1);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (ppppppcVar33 == (code ******)0x0) {
                    (*(code *)(*pppppppcVar26)[2])(pppppppcVar26);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar26);
                  }
                }
                pppppppcVar26 = pppppppcStack_248;
                if (pppppppcStack_248 != (code *******)0x0) {
                  pppppppcVar29 = pppppppcStack_248 + 1;
                  do {
                    ppppppcVar33 = *pppppppcVar29;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar29,0x10);
                    if (bVar3) {
                      *pppppppcVar29 = (code ******)((long)ppppppcVar33 + -1);
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (ppppppcVar33 == (code ******)0x0) {
                    (*(code *)(*pppppppcStack_248)[2])(pppppppcStack_248);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar26);
                  }
                }
              }
              if ((ppppppcStack_260 != (code ******)0x0) &&
                 (pppppcVar31 = ppppppcStack_260[0x11], pppppcVar31 != (code *****)0x0)) {
                fVar37 = *(float *)(*ppppppcVar7 + 10);
                fVar36 = *(float *)(ppppppcVar7 + 2);
                do {
                  ppppcVar30 = ppppcVar20 + 99;
                  FUN_10a428b30(ppppcVar30,pppppcVar31 + 2);
                  if ((int)ppppcVar30 != 0) {
                    ppppppcVar16 = (code ******)pppppcVar31[5];
                    ppppppcVar33 = pppppppcVar27[0x59];
                    if (ppppppcVar33 != (code ******)0x0) {
                      pcVar10 = (code *)((long)ppppppcVar33 + -1);
                      if (((ulong)ppppppcVar33 & (ulong)pcVar10) == 0) {
                        unaff_x25 = (code ******)((ulong)pcVar10 & (ulong)ppppppcVar16);
                      }
                      else {
                        unaff_x25 = ppppppcVar16;
                        if (ppppppcVar33 <= ppppppcVar16) {
                          uVar17 = 0;
                          if (ppppppcVar33 != (code ******)0x0) {
                            uVar17 = (ulong)ppppppcVar16 / (ulong)ppppppcVar33;
                          }
                          unaff_x25 = (code ******)
                                      ((long)ppppppcVar16 - uVar17 * (long)ppppppcVar33);
                        }
                      }
                      if ((*pppppppcVar25)[(long)unaff_x25] != (code *****)0x0) {
                        for (ppppppcVar18 = (code ******)*(*pppppppcVar25)[(long)unaff_x25];
                            ppppppcVar18 != (code ******)0x0;
                            ppppppcVar18 = (code ******)*ppppppcVar18) {
                          ppppppcVar13 = (code ******)ppppppcVar18[1];
                          if (ppppppcVar13 == ppppppcVar16) {
                            if ((code ******)ppppppcVar18[5] == ppppppcVar16) goto LAB_10a419154;
                          }
                          else {
                            if (((ulong)ppppppcVar33 & (ulong)pcVar10) == 0) {
                              ppppppcVar13 = (code ******)((ulong)ppppppcVar13 & (ulong)pcVar10);
                            }
                            else if (ppppppcVar33 <= ppppppcVar13) {
                              uVar17 = 0;
                              if (ppppppcVar33 != (code ******)0x0) {
                                uVar17 = (ulong)ppppppcVar13 / (ulong)ppppppcVar33;
                              }
                              ppppppcVar13 = (code ******)
                                             ((long)ppppppcVar13 - uVar17 * (long)ppppppcVar33);
                            }
                            if (ppppppcVar13 != unaff_x25) break;
                          }
                        }
                      }
                    }
                    ppppppcVar18 = (code ******)0x38;
                    __Znwm();
                    uStack_240 = 0;
                    *ppppppcVar18 = (code *****)0x0;
                    ppppppcVar18[1] = (code *****)ppppppcVar16;
                    ppppppcStack_250 = ppppppcVar18;
                    pppppppcStack_248 = pppppppcVar25;
                    if ((char)*(code *)((long)pppppcVar31 + 0x27) < '\0') {
                      func_0x000107c3192c(ppppppcVar18 + 2,pppppcVar31[2],pppppcVar31[3]);
                    }
                    else {
                      pppppcVar35 = (code *****)pppppcVar31[3];
                      pppppcVar14 = (code *****)pppppcVar31[2];
                      ppppppcVar18[4] = (code *****)pppppcVar31[4];
                      ppppppcVar18[3] = pppppcVar35;
                      ppppppcVar18[2] = pppppcVar14;
                    }
                    ppppppcVar18[5] = (code *****)pppppcVar31[5];
                    *(undefined4 *)(ppppppcVar18 + 6) = 0;
                    uStack_240 = CONCAT71(uStack_240._1_7_,1);
                    if ((ppppppcVar33 == (code ******)0x0) ||
                       (*(float *)(pppppppcVar27 + 0x5c) * (float)ppppppcVar33 <
                        (float)((long)pppppppcVar27[0x5b] + 1))) {
                      uVar17 = 1;
                      if ((code ******)0x2 < ppppppcVar33) {
                        uVar17 = (ulong)(((ulong)ppppppcVar33 & (ulong)((long)ppppppcVar33 + -1)) !=
                                        0);
                      }
                      uVar17 = uVar17 | (long)ppppppcVar33 << 1;
                      uVar11 = (ulong)((float)((long)pppppppcVar27[0x5b] + 1) /
                                      *(float *)(pppppppcVar27 + 0x5c));
                      if (uVar17 <= uVar11) {
                        uVar17 = uVar11;
                      }
                      FUN_10a1f9fe4(pppppppcVar25,uVar17);
                      ppppppcVar33 = pppppppcVar27[0x59];
                      if (((ulong)ppppppcVar33 & (ulong)((long)ppppppcVar33 + -1)) == 0) {
                        unaff_x25 = (code ******)
                                    ((ulong)((long)ppppppcVar33 + -1) & (ulong)ppppppcVar16);
                      }
                      else {
                        unaff_x25 = ppppppcVar16;
                        if (ppppppcVar33 <= ppppppcVar16) {
                          uVar17 = 0;
                          if (ppppppcVar33 != (code ******)0x0) {
                            uVar17 = (ulong)ppppppcVar16 / (ulong)ppppppcVar33;
                          }
                          unaff_x25 = (code ******)
                                      ((long)ppppppcVar16 - uVar17 * (long)ppppppcVar33);
                        }
                      }
                    }
                    ppppppcVar16 = *pppppppcVar25;
                    pppppcVar14 = ppppppcVar16[(long)unaff_x25];
                    if (pppppcVar14 == (code *****)0x0) {
                      *ppppppcStack_250 = (code *****)*pppppppcVar28;
                      *pppppppcVar28 = ppppppcStack_250;
                      ppppppcVar16[(long)unaff_x25] = (code *****)pppppppcVar28;
                      if (*ppppppcStack_250 != (code *****)0x0) {
                        ppppppcVar16 = (code ******)(*ppppppcStack_250)[1];
                        if (((ulong)ppppppcVar33 & (ulong)((long)ppppppcVar33 + -1)) == 0) {
                          ppppppcVar16 = (code ******)
                                         ((ulong)ppppppcVar16 & (ulong)((long)ppppppcVar33 + -1));
                        }
                        else if (ppppppcVar33 <= ppppppcVar16) {
                          uVar17 = 0;
                          if (ppppppcVar33 != (code ******)0x0) {
                            uVar17 = (ulong)ppppppcVar16 / (ulong)ppppppcVar33;
                          }
                          ppppppcVar16 = (code ******)
                                         ((long)ppppppcVar16 - uVar17 * (long)ppppppcVar33);
                        }
                        (*pppppppcVar25)[(long)ppppppcVar16] = (code *****)ppppppcStack_250;
                      }
                    }
                    else {
                      *ppppppcStack_250 = (code *****)*pppppcVar14;
                      *pppppcVar14 = (code ****)ppppppcStack_250;
                    }
                    pppppppcVar27[0x5b] = (code ******)((long)pppppppcVar27[0x5b] + 1);
                    ppppppcVar18 = ppppppcStack_250;
LAB_10a419154:
                    fVar38 = *(float *)(ppppppcVar18 + 6);
                    if (*(int *)(*ppppppcVar7 + 0xe) == 2) {
                      fVar34 = fVar36;
                      (*(code *)**pppppcVar31[6])();
                      fVar38 = fVar38 + fVar37 * fVar34;
                    }
                    else {
                      fVar34 = fVar36;
                      (*(code *)**pppppcVar31[6])();
                      fVar38 = fVar37 * fVar34 + (1.0 - fVar37) * fVar38;
                    }
                    *(float *)(ppppppcVar18 + 6) = fVar38;
                  }
                  pppppcVar31 = (code *****)*pppppcVar31;
                } while (pppppcVar31 != (code *****)0x0);
              }
              pppppppcVar26 = pppppppcStack_258;
              if (pppppppcStack_258 != (code *******)0x0) {
                pppppppcVar29 = pppppppcStack_258 + 1;
                do {
                  ppppppcVar33 = *pppppppcVar29;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(pppppppcVar29,0x10);
                  if (bVar3) {
                    *pppppppcVar29 = (code ******)((long)ppppppcVar33 + -1);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (ppppppcVar33 == (code ******)0x0) {
                  (*(code *)(*pppppppcStack_258)[2])(pppppppcStack_258);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar26);
                }
              }
            }
            for (ppppppcVar7 = *pppppppcVar28; ppppppcVar7 != (code ******)0x0;
                ppppppcVar7 = (code ******)*ppppppcVar7) {
              FUN_10a428c04(*(undefined4 *)(ppppppcVar7 + 6),
                            (float)(double)ppppcVar20[0x2e][0x10a][1],ppppcVar20 + 99,
                            ppppppcVar7 + 2);
            }
            FUN_10a440978(pppppppcVar25);
          }
          pppppcVar12 = pppppcVar12 + 1;
        } while (pppppcVar12 != pppppcVar9);
        ppppppcVar7 = pppppppcVar27[0x47];
        ppppppcVar5 = pppppppcVar27[0x46];
      }
      uVar22 = uVar22 + 1;
      uVar17 = ((long)ppppppcVar7 - (long)ppppppcVar5 >> 4) * -0x3333333333333333;
    } while (uVar22 <= uVar17 && uVar17 - uVar22 != 0);
  }
  return;
}



/* Entry: 10a41a100; end: 10a41a203;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a41a100(undefined8 param_1,code *******param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code cVar4;
  code ******ppppppcVar5;
  long lVar6;
  code *****pppppcVar7;
  code *pcVar8;
  ulong uVar9;
  code *****pppppcVar10;
  code ******ppppppcVar11;
  code ******ppppppcVar12;
  ulong uVar13;
  code *****pppppcVar14;
  code *******pppppppcVar15;
  code ******ppppppcVar16;
  code ******ppppppcVar17;
  code ******ppppppcVar18;
  long lVar19;
  code ****ppppcVar20;
  code *******unaff_x20;
  ulong uVar21;
  code *******pppppppcVar22;
  code *******pppppppcVar23;
  code *******pppppppcVar24;
  code *******pppppppcVar25;
  code *******pppppppcVar26;
  code *******pppppppcVar27;
  code ****ppppcVar28;
  code ******unaff_x25;
  code *****pppppcVar29;
  code ******ppppppcVar30;
  code *******pppppppcVar31;
  code ******ppppppcVar32;
  float fVar33;
  code *****pppppcVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  code ******ppppppcStack_230;
  code *******pppppppcStack_228;
  code ******ppppppcStack_220;
  code *******pppppppcStack_218;
  undefined8 uStack_210;
  code *******pppppppcStack_140;
  code *******pppppppcStack_138;
  code *******pppppppcStack_128;
  code *******pppppppcStack_120;
  code *******pppppppcStack_118;
  code *******pppppppcStack_110;
  code ******ppppppcStack_108;
  code ******ppppppcStack_100;
  long lStack_f8;
  float fStack_f0;
  code *******pppppppcStack_e0;
  code *******pppppppcStack_d8;
  code *******pppppppcStack_d0;
  code *******pppppppcStack_c8;
  code *******pppppppcStack_c0;
  code *******pppppppcStack_b8;
  code *******pppppppcStack_b0;
  code *******pppppppcStack_a8;
  code *******pppppppcStack_a0;
  code *******pppppppcStack_98;
  long lStack_80;
  
  if (param_2[0x4c] == param_2[0x4d]) {
    return;
  }
  FUN_10a4158d4();
  if ((param_2[0x67] == param_2[0x68]) ||
     (((long)param_2[0x47] - (long)param_2[0x46] >> 4) * -0x3333333333333333 -
      ((long)param_2[0x68] - (long)param_2[0x67] >> 6) != 0)) {
    FUN_10a41a204(param_2,param_3);
  }
  FUN_10a419cd4(param_1,param_2 + 0x4c,param_2 + 0x52);
  if (param_2[0x52] == param_2[0x53]) {
SUB_10a440420:
    if (param_2[0x65] != (code ******)0x0) {
      ppppppcVar5 = param_2[100];
      while (ppppppcVar5 != (code ******)0x0) {
        ppppppcVar5 = (code ******)*ppppppcVar5;
        __ZdlPv();
      }
      param_2[100] = (code ******)0x0;
      ppppppcVar5 = param_2[99];
      if (ppppppcVar5 != (code ******)0x0) {
        ppppppcVar30 = (code ******)0x0;
        do {
          param_2[0x62][(long)ppppppcVar30] = (code *****)0x0;
          ppppppcVar30 = (code ******)((long)ppppppcVar30 + 1);
        } while (ppppppcVar5 != ppppppcVar30);
      }
      param_2[0x65] = (code ******)0x0;
    }
    return;
  }
  FUN_10a419df8(param_1);
  FUN_10a416cf8(param_2 + 0x46,param_2 + 0x67,param_2 + 0x52);
  FUN_10a418dd0(param_2,param_2 + 0x52);
  pppppppcVar31 = param_2 + 0x52;
  FUN_10a419308(param_2);
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar25 = param_2;
  if (param_2[0x42][6] == (code *****)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) goto SUB_10a440420;
  }
  else {
    unaff_x20 = (code *******)param_2[0x4f];
    pppppppcVar26 = (code *******)param_2[0x50];
    uVar21 = (long)pppppppcVar26 - (long)unaff_x20;
    ppppppcVar5 = param_2[0x57];
    pppppppcVar23 = (code *******)param_2[0x55];
    if ((ulong)((long)ppppppcVar5 - (long)pppppppcVar23) < uVar21) {
      pppppppcVar24 = (code *******)((long)uVar21 >> 4);
      if (pppppppcVar23 != (code *******)0x0) {
        param_2[0x56] = (code ******)pppppppcVar23;
        __ZdlPv();
        ppppppcVar5 = (code ******)0x0;
        param_2[0x55] = (code ******)0x0;
        param_2[0x56] = (code ******)0x0;
        param_2[0x57] = (code ******)0x0;
        pppppppcVar25 = pppppppcVar23;
      }
      if ((ulong)pppppppcVar24 >> 0x3c != 0) goto LAB_10a418cb0;
      pppppppcVar25 = (code *******)((long)ppppppcVar5 >> 3);
      if ((code *******)((long)ppppppcVar5 >> 3) <= pppppppcVar24) {
        pppppppcVar25 = pppppppcVar24;
      }
      if ((code ******)0x7fffffffffffffef < ppppppcVar5) {
        pppppppcVar25 = (code *******)0xfffffffffffffff;
      }
      if ((ulong)pppppppcVar25 >> 0x3c != 0) goto LAB_10a418cb0;
      FUN_10a436570();
      param_2[0x55] = (code ******)pppppppcVar25;
      param_2[0x56] = (code ******)pppppppcVar25;
      param_2[0x57] = (code ******)(pppppppcVar25 + (long)pppppppcVar31 * 2);
      pppppppcVar23 = pppppppcVar25;
LAB_10a418164:
      if (pppppppcVar26 != unaff_x20) {
        pppppppcVar31 = unaff_x20;
        _memmove(pppppppcVar23,unaff_x20,uVar21);
      }
      ppppppcVar5 = (code ******)((long)pppppppcVar23 + uVar21);
    }
    else {
      pppppppcVar25 = (code *******)param_2[0x56];
      if (uVar21 <= (ulong)((long)pppppppcVar25 - (long)pppppppcVar23)) goto LAB_10a418164;
      pppppppcVar24 = (code *******)((long)unaff_x20 + ((long)pppppppcVar25 - (long)pppppppcVar23));
      if (pppppppcVar25 != pppppppcVar23) {
        _memmove(pppppppcVar23);
        pppppppcVar25 = (code *******)param_2[0x56];
        pppppppcVar31 = unaff_x20;
      }
      unaff_x20 = (code *******)((long)pppppppcVar26 - (long)pppppppcVar24);
      if (unaff_x20 != (code *******)0x0) {
        _memmove(pppppppcVar25,pppppppcVar24,unaff_x20);
        pppppppcVar31 = pppppppcVar24;
      }
      ppppppcVar5 = (code ******)((long)pppppppcVar25 + (long)unaff_x20);
    }
    param_2[0x56] = ppppppcVar5;
    pppppppcStack_128 = (code *******)0x0;
    pppppppcStack_120 = (code *******)0x0;
    pppppppcStack_118 = (code *******)0x0;
    ppppppcVar30 = param_2[0x55];
    if (ppppppcVar30 != ppppppcVar5) {
      unaff_x25 = (code ******)0x9ddfea08eb382d69;
      unaff_x20 = param_2 + 0x5d;
      pppppppcVar25 = param_2 + 0x5f;
      pppppppcVar23 = pppppppcVar31;
      do {
        pppppppcVar26 = (code *******)(*ppppppcVar30)[0x22];
        ppppppcVar11 = (code ******)(*ppppppcVar30)[0x23];
        if (ppppppcVar11 != (code ******)0x0) {
          ppppppcVar32 = ppppppcVar11 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar32,0x10);
            if (bVar2) {
              *ppppppcVar32 = (code *****)((long)*ppppppcVar32 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        pppppppcVar31 = pppppppcVar23;
        pppppppcStack_110 = pppppppcVar26;
        ppppppcStack_108 = ppppppcVar11;
        if (2 < (ulong)(((long)pppppppcVar26[2] - (long)pppppppcVar26[1] >> 4) * -0x5555555555555555
                       )) {
          FUN_10aa8113c(*(undefined4 *)(ppppppcVar30 + 1),*(undefined4 *)((long)ppppppcVar30 + 0xc))
          ;
          pppppppcVar31 = (code *******)0x0;
          if (pppppppcVar23 != (code *******)0x0) {
            pppppppcVar23 = pppppppcVar26 + (long)pppppppcVar23 * 6;
            do {
              pppppppcVar27 = (code *******)pppppppcVar26[1];
              pppppppcVar24 = unaff_x20;
              pppppppcVar31 = pppppppcVar27;
              FUN_10a440484();
              if (pppppppcVar24 == (code *******)0x0) {
                pppppppcVar24 = param_2 + 0x62;
                pppppppcVar31 = pppppppcVar27;
                FUN_10a440484();
                if (pppppppcVar24 == (code *******)0x0) {
                  uVar21 = ((ulong)(uint)((int)pppppppcVar27 << 3) + 8 ^
                           (ulong)pppppppcVar27 >> 0x20) * -0x622015f714c7d297;
                  uVar21 = ((ulong)pppppppcVar27 >> 0x20 ^ uVar21 >> 0x2f ^ uVar21) *
                           -0x622015f714c7d297;
                  pppppppcVar22 = (code *******)((uVar21 ^ uVar21 >> 0x2f) * -0x622015f714c7d297);
                  pppppppcVar24 = (code *******)param_2[0x5e];
                  pppppppcVar31 = param_2;
                  if (pppppppcVar24 != (code *******)0x0) {
                    uVar21 = (long)pppppppcVar24 - 1;
                    if (((ulong)pppppppcVar24 & uVar21) == 0) {
                      pppppppcVar31 = (code *******)(uVar21 & (ulong)pppppppcVar22);
                    }
                    else {
                      pppppppcVar31 = pppppppcVar22;
                      if (pppppppcVar24 <= pppppppcVar22) {
                        uVar9 = 0;
                        if (pppppppcVar24 != (code *******)0x0) {
                          uVar9 = (ulong)pppppppcVar22 / (ulong)pppppppcVar24;
                        }
                        pppppppcVar31 =
                             (code *******)((long)pppppppcVar22 - uVar9 * (long)pppppppcVar24);
                      }
                    }
                    pppppcVar10 = (*unaff_x20)[(long)pppppppcVar31];
                    if (pppppcVar10 != (code *****)0x0) {
                      do {
                        while( true ) {
                          pppppcVar10 = (code *****)*pppppcVar10;
                          if (pppppcVar10 == (code *****)0x0) goto LAB_10a4182ec;
                          pppppppcVar15 = (code *******)pppppcVar10[1];
                          if (pppppppcVar15 != pppppppcVar22) break;
                          if ((code *******)pppppcVar10[2] == pppppppcVar27) goto LAB_10a418588;
                        }
                        if (((ulong)pppppppcVar24 & uVar21) == 0) {
                          pppppppcVar15 = (code *******)((ulong)pppppppcVar15 & uVar21);
                        }
                        else if (pppppppcVar24 <= pppppppcVar15) {
                          uVar9 = 0;
                          if (pppppppcVar24 != (code *******)0x0) {
                            uVar9 = (ulong)pppppppcVar15 / (ulong)pppppppcVar24;
                          }
                          pppppppcVar15 =
                               (code *******)((long)pppppppcVar15 - uVar9 * (long)pppppppcVar24);
                        }
                      } while (pppppppcVar15 == pppppppcVar31);
                    }
                  }
LAB_10a4182ec:
                  ppppppcVar32 = (code ******)0x18;
                  __Znwm();
                  *ppppppcVar32 = (code *****)0x0;
                  ppppppcVar32[1] = (code *****)pppppppcVar22;
                  ppppppcVar32[2] = (code *****)pppppppcVar27;
                  if ((pppppppcVar24 == (code *******)0x0) ||
                     (*(float *)(param_2 + 0x61) * (float)pppppppcVar24 <
                      (float)((long)param_2[0x60] + 1))) {
                    uVar21 = 1;
                    if ((code *******)0x2 < pppppppcVar24) {
                      uVar21 = (ulong)(((ulong)pppppppcVar24 & (long)pppppppcVar24 - 1U) != 0);
                    }
                    pppppppcVar31 = (code *******)(uVar21 | (long)pppppppcVar24 << 1);
                    pppppppcVar27 =
                         (code *******)
                         (long)((float)((long)param_2[0x60] + 1) / *(float *)(param_2 + 0x61));
                    if (pppppppcVar31 <= pppppppcVar27) {
                      pppppppcVar31 = pppppppcVar27;
                    }
                    if ((long)pppppppcVar31 - 1U == 0) {
                      pppppppcVar31 = (code *******)0x2;
                    }
                    else if (((ulong)pppppppcVar31 & (long)pppppppcVar31 - 1U) != 0) {
                      __ZNSt3__112__next_primeEm();
                      pppppppcVar24 = (code *******)param_2[0x5e];
                    }
                    if (pppppppcVar24 < pppppppcVar31) {
LAB_10a418390:
                      pppppppcVar24 = pppppppcVar31;
                      if ((ulong)pppppppcVar24 >> 0x3d != 0) {
                        func_0x000109ffded8();
                        goto LAB_10a418ca8;
                      }
                      ppppppcVar16 = (code ******)((long)pppppppcVar24 << 3);
                      __Znwm();
                      ppppppcVar17 = *unaff_x20;
                      *unaff_x20 = ppppppcVar16;
                      if (ppppppcVar17 != (code ******)0x0) {
                        __ZdlPv();
                      }
                      pppppppcVar31 = (code *******)0x0;
                      param_2[0x5e] = (code ******)pppppppcVar24;
                      do {
                        (*unaff_x20)[(long)pppppppcVar31] = (code *****)0x0;
                        pppppppcVar31 = (code *******)((long)pppppppcVar31 + 1);
                      } while (pppppppcVar24 != pppppppcVar31);
                      ppppppcVar16 = *pppppppcVar25;
                      if (ppppppcVar16 != (code ******)0x0) {
                        pppppppcVar31 = (code *******)ppppppcVar16[1];
                        uVar21 = (long)pppppppcVar24 - 1;
                        if (((ulong)pppppppcVar24 & uVar21) == 0) {
                          pppppppcVar31 = (code *******)((ulong)pppppppcVar31 & uVar21);
                        }
                        else if (pppppppcVar24 <= pppppppcVar31) {
                          uVar9 = 0;
                          if (pppppppcVar24 != (code *******)0x0) {
                            uVar9 = (ulong)pppppppcVar31 / (ulong)pppppppcVar24;
                          }
                          pppppppcVar31 =
                               (code *******)((long)pppppppcVar31 - uVar9 * (long)pppppppcVar24);
                        }
                        (*unaff_x20)[(long)pppppppcVar31] = (code *****)pppppppcVar25;
                        ppppppcVar17 = (code ******)*ppppppcVar16;
                        while (ppppppcVar17 != (code ******)0x0) {
                          pppppppcVar27 = (code *******)ppppppcVar17[1];
                          if (((ulong)pppppppcVar24 & uVar21) == 0) {
                            pppppppcVar27 = (code *******)((ulong)pppppppcVar27 & uVar21);
                          }
                          else if (pppppppcVar24 <= pppppppcVar27) {
                            uVar9 = 0;
                            if (pppppppcVar24 != (code *******)0x0) {
                              uVar9 = (ulong)pppppppcVar27 / (ulong)pppppppcVar24;
                            }
                            pppppppcVar27 =
                                 (code *******)((long)pppppppcVar27 - uVar9 * (long)pppppppcVar24);
                          }
                          ppppppcVar12 = ppppppcVar17;
                          if (pppppppcVar27 != pppppppcVar31) {
                            ppppppcVar18 = *unaff_x20;
                            if (ppppppcVar18[(long)pppppppcVar27] == (code *****)0x0) {
                              ppppppcVar18[(long)pppppppcVar27] = (code *****)ppppppcVar16;
                              pppppppcVar31 = pppppppcVar27;
                            }
                            else {
                              *ppppppcVar16 = *ppppppcVar17;
                              *ppppppcVar17 = (code *****)*ppppppcVar18[(long)pppppppcVar27];
                              *ppppppcVar18[(long)pppppppcVar27] = (code ****)ppppppcVar17;
                              ppppppcVar12 = ppppppcVar16;
                            }
                          }
                          ppppppcVar16 = ppppppcVar12;
                          ppppppcVar17 = (code ******)*ppppppcVar12;
                        }
                      }
                    }
                    else if (pppppppcVar31 < pppppppcVar24) {
                      pppppppcVar27 =
                           (code *******)(long)((float)param_2[0x60] / *(float *)(param_2 + 0x61));
                      if ((pppppppcVar24 < (code *******)0x3) ||
                         (((ulong)pppppppcVar24 & (long)pppppppcVar24 - 1U) != 0)) {
                        __ZNSt3__112__next_primeEm();
                      }
                      else if ((code *******)0x1 < pppppppcVar27) {
                        pppppppcVar27 =
                             (code *******)(1L << (-LZCOUNT((long)pppppppcVar27 + -1) & 0x3fU));
                      }
                      if (pppppppcVar31 <= pppppppcVar27) {
                        pppppppcVar31 = pppppppcVar27;
                      }
                      if (pppppppcVar31 < pppppppcVar24) {
                        if (pppppppcVar31 != (code *******)0x0) goto LAB_10a418390;
                        ppppppcVar16 = *unaff_x20;
                        *unaff_x20 = (code ******)0x0;
                        if (ppppppcVar16 != (code ******)0x0) {
                          __ZdlPv();
                        }
                        pppppppcVar24 = (code *******)0x0;
                        param_2[0x5e] = (code ******)0x0;
                      }
                      else {
                        pppppppcVar24 = (code *******)param_2[0x5e];
                      }
                    }
                    if (((ulong)pppppppcVar24 & (long)pppppppcVar24 - 1U) == 0) {
                      pppppppcVar31 =
                           (code *******)((long)pppppppcVar24 - 1U & (ulong)pppppppcVar22);
                    }
                    else {
                      pppppppcVar31 = pppppppcVar22;
                      if (pppppppcVar24 <= pppppppcVar22) {
                        uVar21 = 0;
                        if (pppppppcVar24 != (code *******)0x0) {
                          uVar21 = (ulong)pppppppcVar22 / (ulong)pppppppcVar24;
                        }
                        pppppppcVar31 =
                             (code *******)((long)pppppppcVar22 - uVar21 * (long)pppppppcVar24);
                      }
                    }
                  }
                  ppppppcVar17 = *unaff_x20;
                  ppppppcVar16 = (code ******)ppppppcVar17[(long)pppppppcVar31];
                  if (ppppppcVar16 == (code ******)0x0) {
                    *ppppppcVar32 = (code *****)*pppppppcVar25;
                    *pppppppcVar25 = ppppppcVar32;
                    ppppppcVar17[(long)pppppppcVar31] = (code *****)pppppppcVar25;
                    if (*ppppppcVar32 != (code *****)0x0) {
                      pppppppcVar31 = (code *******)(*ppppppcVar32)[1];
                      if (((ulong)pppppppcVar24 & (long)pppppppcVar24 - 1U) == 0) {
                        pppppppcVar31 =
                             (code *******)((ulong)pppppppcVar31 & (long)pppppppcVar24 - 1U);
                      }
                      else if (pppppppcVar24 <= pppppppcVar31) {
                        uVar21 = 0;
                        if (pppppppcVar24 != (code *******)0x0) {
                          uVar21 = (ulong)pppppppcVar31 / (ulong)pppppppcVar24;
                        }
                        pppppppcVar31 =
                             (code *******)((long)pppppppcVar31 - uVar21 * (long)pppppppcVar24);
                      }
                      ppppppcVar16 = *unaff_x20 + (long)pppppppcVar31;
                      goto LAB_10a418578;
                    }
                  }
                  else {
                    *ppppppcVar32 = *ppppppcVar16;
LAB_10a418578:
                    *ppppppcVar16 = (code *****)ppppppcVar32;
                  }
                  param_2[0x60] = (code ******)((long)param_2[0x60] + 1);
LAB_10a418588:
                  pppppppcVar24 = pppppppcStack_120;
                  if (pppppppcStack_120 < pppppppcStack_118) {
                    pppppppcVar31 = pppppppcVar26;
                    FUN_10a4365a4(pppppppcStack_120);
                    pppppppcStack_120 = pppppppcVar24 + 6;
                  }
                  else {
                    lVar19 = (long)pppppppcStack_120 - (long)pppppppcStack_128;
                    uVar21 = (lVar19 >> 4) * -0x5555555555555555 + 1;
                    if (0x555555555555555 < uVar21) {
                      FUN_10a43668c();
LAB_10a418ca8:
                    /* WARNING: Does not return */
                      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a418cac);
                      (*pcVar8)();
                    }
                    lVar6 = (long)pppppppcStack_118 - (long)pppppppcStack_128 >> 4;
                    uVar9 = lVar6 * 0x5555555555555556;
                    if (uVar9 < uVar21 || uVar9 - uVar21 == 0) {
                      uVar9 = uVar21;
                    }
                    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
                      uVar9 = 0x555555555555555;
                    }
                    pppppppcStack_a0 = (code *******)&pppppppcStack_128;
                    if (uVar9 == 0) {
                      pppppppcVar31 = (code *******)0x0;
                    }
                    else {
                      pppppppcVar31 = (code *******)&pppppppcStack_128;
                      FUN_10a4366a0();
                    }
                    ppppppcVar32 = (code ******)((long)pppppppcVar31 + lVar19);
                    pppppppcStack_a8 = pppppppcVar31 + uVar9 * 6;
                    pppppppcStack_c0 = pppppppcVar31;
                    pppppppcStack_b8 = (code *******)ppppppcVar32;
                    pppppppcStack_b0 = (code *******)ppppppcVar32;
                    FUN_10a4365a4(ppppppcVar32,pppppppcVar26);
                    pppppppcStack_b0 = (code *******)(ppppppcVar32 + 6);
                    pppppppcVar24 =
                         (code *******)
                         ((long)pppppppcStack_128 + ((long)ppppppcVar32 - (long)pppppppcStack_120));
                    pppppppcVar31 = pppppppcStack_128;
                    func_0x00010a4366e4(&pppppppcStack_128,pppppppcStack_128,pppppppcStack_120,
                                        pppppppcVar24);
                    pppppppcVar22 = pppppppcStack_b0;
                    pppppppcVar27 = pppppppcStack_118;
                    pppppppcStack_118 = pppppppcStack_a8;
                    pppppppcStack_120 = pppppppcStack_b0;
                    pppppppcStack_b0 = pppppppcStack_128;
                    pppppppcStack_a8 = pppppppcVar27;
                    pppppppcStack_c0 = pppppppcStack_128;
                    pppppppcStack_b8 = pppppppcStack_128;
                    pppppppcStack_128 = pppppppcVar24;
                    func_0x00010a436790(&pppppppcStack_c0);
                    pppppppcStack_120 = pppppppcVar22;
                  }
                }
              }
              pppppppcVar26 = pppppppcVar26 + 6;
            } while (pppppppcVar26 != pppppppcVar23);
          }
        }
        if (ppppppcVar11 != (code ******)0x0) {
          ppppppcVar32 = ppppppcVar11 + 1;
          do {
            pppppcVar10 = *ppppppcVar32;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppppppcVar32,0x10);
            if (bVar2) {
              *ppppppcVar32 = (code *****)((long)pppppcVar10 + -1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (pppppcVar10 == (code *****)0x0) {
            (*(code *)(*ppppppcVar11)[2])(ppppppcVar11);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar11);
          }
        }
        pppppppcVar26 = pppppppcStack_120;
        ppppppcVar30 = ppppppcVar30 + 2;
        pppppppcVar23 = pppppppcVar31;
      } while (ppppppcVar30 != ppppppcVar5);
      if (pppppppcStack_128 != pppppppcStack_120) {
        pppppppcVar25 = pppppppcStack_128;
        do {
          ppppppcVar5 = param_2[0x42];
          unaff_x20 = (code *******)0x48;
          __Znwm();
          unaff_x20[1] = (code ******)0x0;
          unaff_x20[2] = (code ******)0x0;
          *unaff_x20 = (code ******)&PTR_DAT_110bd9710;
          if (*(char *)((long)pppppppcVar25 + 0x2f) < '\0') {
            func_0x000107c3192c(&pppppppcStack_c0,pppppppcVar25[3],pppppppcVar25[4]);
          }
          else {
            pppppppcStack_b8 = (code *******)pppppppcVar25[4];
            pppppppcStack_c0 = (code *******)pppppppcVar25[3];
            pppppppcStack_b0 = (code *******)pppppppcVar25[5];
          }
          pppppppcStack_140 = unaff_x20 + 3;
          *pppppppcStack_140 = (code ******)&PTR_DAT_110bd46b8;
          unaff_x20[4] = (code ******)0x0;
          unaff_x20[5] = (code ******)0x0;
          unaff_x20[7] = (code ******)pppppppcStack_b8;
          unaff_x20[6] = (code ******)pppppppcStack_c0;
          unaff_x20[8] = (code ******)pppppppcStack_b0;
          ppppppcStack_108 = (code ******)0x0;
          pppppppcStack_110 = (code *******)0x0;
          lStack_f8 = 0;
          ppppppcStack_100 = (code ******)0x0;
          fStack_f0 = *(float *)(ppppppcVar5 + 7);
          pppppppcVar31 = (code *******)ppppppcVar5[4];
          pppppppcStack_138 = unaff_x20;
          FUN_10a43ed84(&pppppppcStack_110);
          ppppppcVar11 = ppppppcStack_108;
          ppppppcVar32 = ppppppcStack_100;
          for (pppppcVar10 = ppppppcVar5[5]; ppppppcStack_108 = ppppppcVar11,
              ppppppcStack_100 = ppppppcVar32, pppppcVar10 != (code *****)0x0;
              pppppcVar10 = (code *****)*pppppcVar10) {
            pppppcVar7 = (code *****)pppppcVar10[2];
            uVar21 = ((ulong)(uint)((int)pppppcVar7 << 3) + 8 ^ (ulong)pppppcVar7 >> 0x20) *
                     -0x622015f714c7d297;
            uVar21 = ((ulong)pppppcVar7 >> 0x20 ^ uVar21 >> 0x2f ^ uVar21) * -0x622015f714c7d297;
            ppppppcVar32 = (code ******)((uVar21 ^ uVar21 >> 0x2f) * -0x622015f714c7d297);
            if (ppppppcVar11 != (code ******)0x0) {
              uVar21 = (long)ppppppcVar11 - 1;
              if (((ulong)ppppppcVar11 & uVar21) == 0) {
                ppppppcVar30 = (code ******)((ulong)ppppppcVar32 & uVar21);
              }
              else {
                ppppppcVar30 = ppppppcVar32;
                if (ppppppcVar11 <= ppppppcVar32) {
                  uVar9 = 0;
                  if (ppppppcVar11 != (code ******)0x0) {
                    uVar9 = (ulong)ppppppcVar32 / (ulong)ppppppcVar11;
                  }
                  ppppppcVar30 = (code ******)((long)ppppppcVar32 - uVar9 * (long)ppppppcVar11);
                }
              }
              ppppppcVar16 = pppppppcStack_110[(long)ppppppcVar30];
              if (ppppppcVar16 != (code ******)0x0) {
                do {
                  while( true ) {
                    ppppppcVar16 = (code ******)*ppppppcVar16;
                    if (ppppppcVar16 == (code ******)0x0) goto LAB_10a41889c;
                    ppppppcVar17 = (code ******)ppppppcVar16[1];
                    if (ppppppcVar17 != ppppppcVar32) break;
                    if (ppppppcVar16[2] == pppppcVar7) goto LAB_10a418a00;
                  }
                  if (((ulong)ppppppcVar11 & uVar21) == 0) {
                    ppppppcVar17 = (code ******)((ulong)ppppppcVar17 & uVar21);
                  }
                  else if (ppppppcVar11 <= ppppppcVar17) {
                    uVar9 = 0;
                    if (ppppppcVar11 != (code ******)0x0) {
                      uVar9 = (ulong)ppppppcVar17 / (ulong)ppppppcVar11;
                    }
                    ppppppcVar17 = (code ******)((long)ppppppcVar17 - uVar9 * (long)ppppppcVar11);
                  }
                } while (ppppppcVar17 == ppppppcVar30);
              }
            }
LAB_10a41889c:
            ppppppcVar16 = (code ******)0x68;
            __Znwm();
            *ppppppcVar16 = (code *****)0x0;
            ppppppcVar16[1] = (code *****)ppppppcVar32;
            ppppcVar20 = pppppcVar10[3];
            pppppcVar7 = (code *****)pppppcVar10[2];
            ppppppcVar16[3] = (code *****)pppppcVar10[3];
            ppppppcVar16[2] = pppppcVar7;
            if (ppppcVar20 != (code ****)0x0) {
              ppppcVar20 = ppppcVar20 + 1;
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(ppppcVar20,0x10);
                if (bVar2) {
                  *ppppcVar20 = (code ***)((long)*ppppcVar20 + 1);
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            pppppppcStack_c0 = (code *******)(ppppppcVar16 + 4);
            *(undefined1 *)(ppppppcVar16 + 0xc) = 3;
            if (*(code *)(pppppcVar10 + 0xc) == (code)0x0) {
              cVar4 = (code)0x0;
            }
            else {
              pppppppcVar31 = (code *******)(pppppcVar10 + 4);
              FUN_10a005398(&pppppppcStack_c0);
              cVar4 = *(code *)(pppppcVar10 + 0xc);
            }
            *(code *)(ppppppcVar16 + 0xc) = cVar4;
            if ((ppppppcVar11 == (code ******)0x0) ||
               (fStack_f0 * (float)ppppppcVar11 < (float)(lStack_f8 + 1))) {
              uVar21 = 1;
              if ((code ******)0x2 < ppppppcVar11) {
                uVar21 = (ulong)(((ulong)ppppppcVar11 & (long)ppppppcVar11 - 1U) != 0);
              }
              pppppppcVar31 = (code *******)(uVar21 | (long)ppppppcVar11 << 1);
              pppppppcVar23 = (code *******)(long)((float)(lStack_f8 + 1) / fStack_f0);
              if (pppppppcVar31 <= pppppppcVar23) {
                pppppppcVar31 = pppppppcVar23;
              }
              FUN_10a43ed84(&pppppppcStack_110);
              ppppppcVar11 = ppppppcStack_108;
              if (((ulong)ppppppcStack_108 & (long)ppppppcStack_108 - 1U) == 0) {
                ppppppcVar30 = (code ******)((long)ppppppcStack_108 - 1U & (ulong)ppppppcVar32);
              }
              else {
                ppppppcVar30 = ppppppcVar32;
                if (ppppppcStack_108 <= ppppppcVar32) {
                  uVar21 = 0;
                  if (ppppppcStack_108 != (code ******)0x0) {
                    uVar21 = (ulong)ppppppcVar32 / (ulong)ppppppcStack_108;
                  }
                  ppppppcVar30 = (code ******)((long)ppppppcVar32 - uVar21 * (long)ppppppcStack_108)
                  ;
                }
              }
            }
            ppppppcVar32 = pppppppcStack_110[(long)ppppppcVar30];
            if (ppppppcVar32 == (code ******)0x0) {
              *ppppppcVar16 = (code *****)ppppppcStack_100;
              pppppppcStack_110[(long)ppppppcVar30] = (code ******)&ppppppcStack_100;
              ppppppcStack_100 = ppppppcVar16;
              if (*ppppppcVar16 != (code *****)0x0) {
                ppppppcVar32 = (code ******)(*ppppppcVar16)[1];
                if (((ulong)ppppppcVar11 & (long)ppppppcVar11 - 1U) == 0) {
                  ppppppcVar32 = (code ******)((ulong)ppppppcVar32 & (long)ppppppcVar11 - 1U);
                }
                else if (ppppppcVar11 <= ppppppcVar32) {
                  uVar21 = 0;
                  if (ppppppcVar11 != (code ******)0x0) {
                    uVar21 = (ulong)ppppppcVar32 / (ulong)ppppppcVar11;
                  }
                  ppppppcVar32 = (code ******)((long)ppppppcVar32 - uVar21 * (long)ppppppcVar11);
                }
                pppppppcStack_110[(long)ppppppcVar32] = ppppppcVar16;
              }
            }
            else {
              *ppppppcVar16 = *ppppppcVar32;
              *ppppppcVar32 = (code *****)ppppppcVar16;
            }
            lStack_f8 = lStack_f8 + 1;
LAB_10a418a00:
            ppppppcVar11 = ppppppcStack_108;
            ppppppcVar32 = ppppppcStack_100;
          }
          if (ppppppcVar32 == (code ******)0x0) {
            FUN_10a43fd9c(&pppppppcStack_110);
LAB_10a418c10:
            pppppppcVar23 = unaff_x20 + 1;
            do {
              ppppppcVar5 = *pppppppcVar23;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar23,0x10);
              if (bVar2) {
                *pppppppcVar23 = (code ******)((long)ppppppcVar5 + -1);
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (ppppppcVar5 == (code ******)0x0) {
              (*(code *)(*unaff_x20)[2])(unaff_x20);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x20);
            }
          }
          else {
            do {
              pppppppcVar23 = (code *******)ppppppcVar32[2];
              ppppppcVar11 = ppppppcVar5 + 3;
              FUN_10a43f794();
              pppppppcVar31 = pppppppcVar23;
              if (ppppppcVar11 != (code ******)0x0) {
                if (*(char *)(ppppppcVar32 + 0xc) == '\x01') {
                  pppppcVar10 = ppppppcVar32[4];
                  pppppppcStack_b8 = pppppppcStack_138;
                  pppppppcStack_c0 = pppppppcStack_140;
                  if (pppppppcStack_138 != (code *******)0x0) {
                    pppppppcVar31 = pppppppcStack_138 + 1;
                    do {
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar31,0x10);
                      if (bVar2) {
                        *pppppppcVar31 = (code ******)((long)*pppppppcVar31 + 1);
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar1 != '\0');
                  }
                  pppppppcVar31 = (code *******)(ppppppcVar32 + 4);
                  (*(code *)pppppcVar10)(&pppppppcStack_c0);
                  if (pppppppcStack_b8 != (code *******)0x0) {
                    pppppppcVar23 = pppppppcStack_b8 + 1;
                    do {
                      ppppppcVar11 = *pppppppcVar23;
                      cVar1 = '\x01';
                      bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar23,0x10);
                      if (bVar2) {
                        *pppppppcVar23 = (code ******)((long)ppppppcVar11 + -1);
                        cVar1 = ExclusiveMonitorsStatus();
                      }
                      pppppppcVar24 = pppppppcStack_b8;
                    } while (cVar1 != '\0');
LAB_10a418ac8:
                    if (ppppppcVar11 == (code ******)0x0) {
                      (*(code *)(*pppppppcVar24)[2])(pppppppcVar24);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar24);
                    }
                  }
                }
                else if (*(char *)(ppppppcVar32 + 0xc) == '\x02') {
                  ppppppcVar11 = ppppppcVar32 + 4;
                  FUN_10a688b40();
                  pppppppcVar24 = pppppppcStack_138;
                  if (ppppppcVar11 == (code ******)0x0) {
                    pppppppcVar31 = (code *******)0x0;
                    if (pppppppcVar23 != (code *******)0x0) {
                      pppppppcStack_b0 = (code *******)ppppppcVar32[4];
                      pppppppcStack_a8 = (code *******)ppppppcVar32[5];
                      if (pppppppcStack_a8 != (code *******)0x0) {
                        pppppppcVar31 = pppppppcStack_a8 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar31,0x10);
                          if (bVar2) {
                            *pppppppcVar31 = (code ******)((long)*pppppppcVar31 + 1);
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
                      pppppppcStack_d0 = pppppppcStack_140;
                      pppppppcStack_c8 = pppppppcStack_138;
                      if (pppppppcStack_138 == (code *******)0x0) {
                        pppppppcStack_98 = (code *******)0x0;
                      }
                      else {
                        pppppppcVar31 = pppppppcStack_138 + 1;
                        do {
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar31,0x10);
                          if (bVar2) {
                            *pppppppcVar31 = (code ******)((long)*pppppppcVar31 + 1);
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                        pppppppcStack_98 = pppppppcStack_138;
                        do {
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar31,0x10);
                          if (bVar2) {
                            *pppppppcVar31 = (code ******)((long)*pppppppcVar31 + 1);
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                      }
                      pppppppcStack_a0 = pppppppcStack_140;
                      pppppppcStack_b8 = (code *******)&PTR_FUN_110bd9750;
                      pppppppcStack_d8 = (code *******)0x0;
                      pppppppcStack_e0 = (code *******)0x0;
                      pppppppcStack_c0 = (code *******)FUN_10a4407f4;
                      pppppppcVar31 = (code *******)&pppppppcStack_c0;
                      FUN_10a4634ec(pppppppcVar23);
                      (*(code *)*pppppppcStack_b8)(&pppppppcStack_b8);
                      if (pppppppcVar24 != (code *******)0x0) {
                        pppppppcVar23 = pppppppcVar24 + 1;
                        do {
                          ppppppcVar11 = *pppppppcVar23;
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar23,0x10);
                          if (bVar2) {
                            *pppppppcVar23 = (code ******)((long)ppppppcVar11 + -1);
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar1 != '\0');
                        if (ppppppcVar11 == (code ******)0x0) {
                          (*(code *)(*pppppppcVar24)[2])(pppppppcVar24);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar24);
                        }
                      }
                      if (pppppppcStack_d8 != (code *******)0x0) {
                        pppppppcVar23 = pppppppcStack_d8 + 1;
                        do {
                          ppppppcVar11 = *pppppppcVar23;
                          cVar1 = '\x01';
                          bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar23,0x10);
                          if (bVar2) {
                            *pppppppcVar23 = (code ******)((long)ppppppcVar11 + -1);
                            cVar1 = ExclusiveMonitorsStatus();
                          }
                          pppppppcVar24 = pppppppcStack_d8;
                        } while (cVar1 != '\0');
                        goto LAB_10a418ac8;
                      }
                    }
                  }
                  else {
                    *ppppppcVar11 =
                         (code *****)
                         CONCAT44((int)((ulong)*ppppppcVar11 >> 0x20) + 1,(int)*ppppppcVar11 + 1);
                    pppppppcVar31 = (code *******)&pppppppcStack_140;
                    FUN_10a4405f0(ppppppcVar32[4]);
                    iVar3 = *(int *)((long)ppppppcVar11 + 4) + -1;
                    *(int *)((long)ppppppcVar11 + 4) = iVar3;
                    if (iVar3 == 0) {
                      *(undefined4 *)ppppppcVar11 = 0;
                    }
                  }
                }
              }
              unaff_x20 = pppppppcStack_138;
              ppppppcVar32 = (code ******)*ppppppcVar32;
            } while (ppppppcVar32 != (code ******)0x0);
            FUN_10a43fd9c(&pppppppcStack_110);
            if (unaff_x20 != (code *******)0x0) goto LAB_10a418c10;
          }
          pppppppcVar25 = pppppppcVar25 + 6;
        } while (pppppppcVar25 != pppppppcVar26);
      }
    }
    pppppppcStack_c0 = (code *******)&pppppppcStack_128;
    pppppppcVar25 = (code *******)&pppppppcStack_c0;
    FUN_10a4367dc();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
  }
  ___stack_chk_fail();
LAB_10a418cb0:
  FUN_10a43655c();
  __ZNSt3__119__shared_weak_countD2Ev(unaff_x20);
  __ZdlPv();
  pppppppcStack_e0 = (code *******)&pppppppcStack_128;
  FUN_10a4367dc(&pppppppcStack_e0);
  __Unwind_Resume();
  ppppppcVar5 = pppppppcVar25[0x47];
  ppppppcVar30 = pppppppcVar25[0x46];
  if (ppppppcVar5 != ppppppcVar30) {
    uVar21 = 0;
    pppppppcVar23 = pppppppcVar25 + 0x58;
    pppppppcVar26 = pppppppcVar25 + 0x5a;
    do {
      ppppppcVar11 = ppppppcVar30 + uVar21 * 10;
      pppppcVar10 = ppppppcVar11[7];
      pppppcVar7 = ppppppcVar11[8];
      if (pppppcVar10 != pppppcVar7) {
        do {
          ppppcVar20 = *pppppcVar10;
          if (*(code *)(ppppcVar20 + 0x6b) == (code)0x1) {
            FUN_10a440978(pppppppcVar23);
            ppppppcVar30 = pppppppcVar31[1];
            for (ppppppcVar5 = *pppppppcVar31; ppppppcVar5 != ppppppcVar30;
                ppppppcVar5 = ppppppcVar5 + 4) {
              FUN_10aa71aa0(&ppppppcStack_230,(*ppppppcVar5)[8],ppppppcVar11);
              if ((uVar21 == 0) && (ppppppcStack_230 == (code ******)0x0)) {
                ppppcVar28 = (*ppppppcVar5)[8];
                FUN_10a416ae4();
                FUN_10aa71aa0(&ppppppcStack_220,ppppcVar28,0x1137eb188);
                pppppppcVar27 = pppppppcStack_218;
                ppppppcStack_230 = ppppppcStack_220;
                pppppppcVar24 = pppppppcStack_228;
                ppppppcStack_220 = (code ******)0x0;
                pppppppcStack_218 = (code *******)0x0;
                pppppppcStack_228 = pppppppcVar27;
                if (pppppppcVar24 != (code *******)0x0) {
                  pppppppcVar27 = pppppppcVar24 + 1;
                  do {
                    ppppppcVar32 = *pppppppcVar27;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar27,0x10);
                    if (bVar2) {
                      *pppppppcVar27 = (code ******)((long)ppppppcVar32 + -1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (ppppppcVar32 == (code ******)0x0) {
                    (*(code *)(*pppppppcVar24)[2])(pppppppcVar24);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar24);
                  }
                }
                pppppppcVar24 = pppppppcStack_218;
                if (pppppppcStack_218 != (code *******)0x0) {
                  pppppppcVar27 = pppppppcStack_218 + 1;
                  do {
                    ppppppcVar32 = *pppppppcVar27;
                    cVar1 = '\x01';
                    bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar27,0x10);
                    if (bVar2) {
                      *pppppppcVar27 = (code ******)((long)ppppppcVar32 + -1);
                      cVar1 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar1 != '\0');
                  if (ppppppcVar32 == (code ******)0x0) {
                    (*(code *)(*pppppppcStack_218)[2])(pppppppcStack_218);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar24);
                  }
                }
              }
              if ((ppppppcStack_230 != (code ******)0x0) &&
                 (pppppcVar29 = ppppppcStack_230[0x11], pppppcVar29 != (code *****)0x0)) {
                fVar36 = *(float *)(*ppppppcVar5 + 10);
                fVar35 = *(float *)(ppppppcVar5 + 2);
                do {
                  ppppcVar28 = ppppcVar20 + 99;
                  FUN_10a428b30(ppppcVar28,pppppcVar29 + 2);
                  if ((int)ppppcVar28 != 0) {
                    ppppppcVar16 = (code ******)pppppcVar29[5];
                    ppppppcVar32 = pppppppcVar25[0x59];
                    if (ppppppcVar32 != (code ******)0x0) {
                      pcVar8 = (code *)((long)ppppppcVar32 + -1);
                      if (((ulong)ppppppcVar32 & (ulong)pcVar8) == 0) {
                        unaff_x25 = (code ******)((ulong)pcVar8 & (ulong)ppppppcVar16);
                      }
                      else {
                        unaff_x25 = ppppppcVar16;
                        if (ppppppcVar32 <= ppppppcVar16) {
                          uVar9 = 0;
                          if (ppppppcVar32 != (code ******)0x0) {
                            uVar9 = (ulong)ppppppcVar16 / (ulong)ppppppcVar32;
                          }
                          unaff_x25 = (code ******)((long)ppppppcVar16 - uVar9 * (long)ppppppcVar32)
                          ;
                        }
                      }
                      if ((*pppppppcVar23)[(long)unaff_x25] != (code *****)0x0) {
                        for (ppppppcVar17 = (code ******)*(*pppppppcVar23)[(long)unaff_x25];
                            ppppppcVar17 != (code ******)0x0;
                            ppppppcVar17 = (code ******)*ppppppcVar17) {
                          ppppppcVar12 = (code ******)ppppppcVar17[1];
                          if (ppppppcVar12 == ppppppcVar16) {
                            if ((code ******)ppppppcVar17[5] == ppppppcVar16) goto LAB_10a419154;
                          }
                          else {
                            if (((ulong)ppppppcVar32 & (ulong)pcVar8) == 0) {
                              ppppppcVar12 = (code ******)((ulong)ppppppcVar12 & (ulong)pcVar8);
                            }
                            else if (ppppppcVar32 <= ppppppcVar12) {
                              uVar9 = 0;
                              if (ppppppcVar32 != (code ******)0x0) {
                                uVar9 = (ulong)ppppppcVar12 / (ulong)ppppppcVar32;
                              }
                              ppppppcVar12 = (code ******)
                                             ((long)ppppppcVar12 - uVar9 * (long)ppppppcVar32);
                            }
                            if (ppppppcVar12 != unaff_x25) break;
                          }
                        }
                      }
                    }
                    ppppppcVar17 = (code ******)0x38;
                    __Znwm();
                    uStack_210 = 0;
                    *ppppppcVar17 = (code *****)0x0;
                    ppppppcVar17[1] = (code *****)ppppppcVar16;
                    ppppppcStack_220 = ppppppcVar17;
                    pppppppcStack_218 = pppppppcVar23;
                    if ((char)*(code *)((long)pppppcVar29 + 0x27) < '\0') {
                      func_0x000107c3192c(ppppppcVar17 + 2,pppppcVar29[2],pppppcVar29[3]);
                    }
                    else {
                      pppppcVar34 = (code *****)pppppcVar29[3];
                      pppppcVar14 = (code *****)pppppcVar29[2];
                      ppppppcVar17[4] = (code *****)pppppcVar29[4];
                      ppppppcVar17[3] = pppppcVar34;
                      ppppppcVar17[2] = pppppcVar14;
                    }
                    ppppppcVar17[5] = (code *****)pppppcVar29[5];
                    *(undefined4 *)(ppppppcVar17 + 6) = 0;
                    uStack_210 = CONCAT71(uStack_210._1_7_,1);
                    if ((ppppppcVar32 == (code ******)0x0) ||
                       (*(float *)(pppppppcVar25 + 0x5c) * (float)ppppppcVar32 <
                        (float)((long)pppppppcVar25[0x5b] + 1))) {
                      uVar9 = 1;
                      if ((code ******)0x2 < ppppppcVar32) {
                        uVar9 = (ulong)(((ulong)ppppppcVar32 & (ulong)((long)ppppppcVar32 + -1)) !=
                                       0);
                      }
                      uVar9 = uVar9 | (long)ppppppcVar32 << 1;
                      uVar13 = (ulong)((float)((long)pppppppcVar25[0x5b] + 1) /
                                      *(float *)(pppppppcVar25 + 0x5c));
                      if (uVar9 <= uVar13) {
                        uVar9 = uVar13;
                      }
                      FUN_10a1f9fe4(pppppppcVar23,uVar9);
                      ppppppcVar32 = pppppppcVar25[0x59];
                      if (((ulong)ppppppcVar32 & (ulong)((long)ppppppcVar32 + -1)) == 0) {
                        unaff_x25 = (code ******)
                                    ((ulong)((long)ppppppcVar32 + -1) & (ulong)ppppppcVar16);
                      }
                      else {
                        unaff_x25 = ppppppcVar16;
                        if (ppppppcVar32 <= ppppppcVar16) {
                          uVar9 = 0;
                          if (ppppppcVar32 != (code ******)0x0) {
                            uVar9 = (ulong)ppppppcVar16 / (ulong)ppppppcVar32;
                          }
                          unaff_x25 = (code ******)((long)ppppppcVar16 - uVar9 * (long)ppppppcVar32)
                          ;
                        }
                      }
                    }
                    ppppppcVar16 = *pppppppcVar23;
                    pppppcVar14 = ppppppcVar16[(long)unaff_x25];
                    if (pppppcVar14 == (code *****)0x0) {
                      *ppppppcStack_220 = (code *****)*pppppppcVar26;
                      *pppppppcVar26 = ppppppcStack_220;
                      ppppppcVar16[(long)unaff_x25] = (code *****)pppppppcVar26;
                      if (*ppppppcStack_220 != (code *****)0x0) {
                        ppppppcVar16 = (code ******)(*ppppppcStack_220)[1];
                        if (((ulong)ppppppcVar32 & (ulong)((long)ppppppcVar32 + -1)) == 0) {
                          ppppppcVar16 = (code ******)
                                         ((ulong)ppppppcVar16 & (ulong)((long)ppppppcVar32 + -1));
                        }
                        else if (ppppppcVar32 <= ppppppcVar16) {
                          uVar9 = 0;
                          if (ppppppcVar32 != (code ******)0x0) {
                            uVar9 = (ulong)ppppppcVar16 / (ulong)ppppppcVar32;
                          }
                          ppppppcVar16 = (code ******)
                                         ((long)ppppppcVar16 - uVar9 * (long)ppppppcVar32);
                        }
                        (*pppppppcVar23)[(long)ppppppcVar16] = (code *****)ppppppcStack_220;
                      }
                    }
                    else {
                      *ppppppcStack_220 = (code *****)*pppppcVar14;
                      *pppppcVar14 = (code ****)ppppppcStack_220;
                    }
                    pppppppcVar25[0x5b] = (code ******)((long)pppppppcVar25[0x5b] + 1);
                    ppppppcVar17 = ppppppcStack_220;
LAB_10a419154:
                    fVar37 = *(float *)(ppppppcVar17 + 6);
                    if (*(int *)(*ppppppcVar5 + 0xe) == 2) {
                      fVar33 = fVar35;
                      (*(code *)**pppppcVar29[6])();
                      fVar37 = fVar37 + fVar36 * fVar33;
                    }
                    else {
                      fVar33 = fVar35;
                      (*(code *)**pppppcVar29[6])();
                      fVar37 = fVar36 * fVar33 + (1.0 - fVar36) * fVar37;
                    }
                    *(float *)(ppppppcVar17 + 6) = fVar37;
                  }
                  pppppcVar29 = (code *****)*pppppcVar29;
                } while (pppppcVar29 != (code *****)0x0);
              }
              pppppppcVar24 = pppppppcStack_228;
              if (pppppppcStack_228 != (code *******)0x0) {
                pppppppcVar27 = pppppppcStack_228 + 1;
                do {
                  ppppppcVar32 = *pppppppcVar27;
                  cVar1 = '\x01';
                  bVar2 = (bool)ExclusiveMonitorPass(pppppppcVar27,0x10);
                  if (bVar2) {
                    *pppppppcVar27 = (code ******)((long)ppppppcVar32 + -1);
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
                if (ppppppcVar32 == (code ******)0x0) {
                  (*(code *)(*pppppppcStack_228)[2])(pppppppcStack_228);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar24);
                }
              }
            }
            for (ppppppcVar5 = *pppppppcVar26; ppppppcVar5 != (code ******)0x0;
                ppppppcVar5 = (code ******)*ppppppcVar5) {
              FUN_10a428c04(*(undefined4 *)(ppppppcVar5 + 6),
                            (float)(double)ppppcVar20[0x2e][0x10a][1],ppppcVar20 + 99,
                            ppppppcVar5 + 2);
            }
            FUN_10a440978(pppppppcVar23);
          }
          pppppcVar10 = pppppcVar10 + 1;
        } while (pppppcVar10 != pppppcVar7);
        ppppppcVar5 = pppppppcVar25[0x47];
        ppppppcVar30 = pppppppcVar25[0x46];
      }
      uVar21 = uVar21 + 1;
      uVar9 = ((long)ppppppcVar5 - (long)ppppppcVar30 >> 4) * -0x3333333333333333;
    } while (uVar21 <= uVar9 && uVar9 - uVar21 != 0);
  }
  return;
}



/* Entry: 10a41a204; end: 10a41a2b7;  */

void FUN_10a41a204(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  long *plVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  code **ppcVar11;
  undefined *puVar12;
  long lVar13;
  code **ppcVar14;
  long *extraout_x8;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined **ppuStack_d0;
  long *plStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x338);
  pcStack_68 = FUN_10a4409e0;
  ppuStack_60 = &PTR_FUN_110bd9768;
  ppcVar11 = &pcStack_68;
  lVar13 = 0;
  lStack_58 = param_1;
  FUN_10a3e75d4(param_2,ppcVar11);
  pppuVar9 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    __Unwind_Resume();
    if (lVar13 == 0) {
      pppuVar15 = pppuVar9;
      ppcVar14 = ppcVar11;
      func_0x00010a0fda30();
    }
    else {
      ppuStack_b8 = pppuVar9[9];
      ppuStack_c0 = pppuVar9[8];
      lVar13 = lVar13 + 0x88;
      func_0x00010a35bf90(lVar13,&ppuStack_c0);
      plVar4 = (long *)((ulong)&ppuStack_c0 | 8);
      pppuVar15 = &ppuStack_c0;
      if (lVar13 != 0) {
        plVar4 = (long *)(lVar13 + 0x28);
        pppuVar15 = (undefined ***)(lVar13 + 0x20);
      }
      ppcVar14 = (code **)*plVar4;
      pppuVar15 = (undefined ***)*pppuVar15;
    }
    FUN_10a0d7500(&ppuStack_d0,pppuVar9[0x2e],pppuVar15,ppcVar14);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (ppuStack_d0 + 0x2a,pppuVar9 + 0x2a);
    uVar2 = (*(ushort *)(pppuVar9 + 0x30) >> 1 & 1) << 1;
    uVar3 = *(ushort *)(ppuStack_d0 + 0x30) & 0xfffc;
    *(ushort *)(ppuStack_d0 + 0x30) = uVar3 | *(ushort *)(ppuStack_d0 + 0x30) & 1 | uVar2;
    *(ushort *)(ppuStack_d0 + 0x30) = uVar3 | uVar2 | *(ushort *)(pppuVar9 + 0x30) & 1;
    ppuStack_c0 = ppuStack_d0;
    ppuStack_b8 = (undefined **)plStack_c8;
    if (plStack_c8 != (long *)0x0) {
      plVar4 = plStack_c8 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar7) {
          *plVar4 = *plVar4 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    FUN_10a3c7ce8(ppcVar11,&ppuStack_c0);
    ppuVar16 = ppuStack_b8;
    if (ppuStack_b8 != (undefined **)0x0) {
      plVar4 = (long *)(ppuStack_b8 + 1);
      do {
        lVar13 = *plVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar7) {
          *plVar4 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)((long)*ppuStack_b8 + 0x10))(ppuStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
      }
    }
    ppuVar17 = pppuVar9[0x4d];
    for (ppuVar16 = pppuVar9[0x4c]; ppuVar8 = ppuStack_d0, ppuVar16 != ppuVar17;
        ppuVar16 = ppuVar16 + 4) {
      puVar10 = *ppuVar16;
      lVar13 = (long)(char)puVar10[0x3f];
      if (lVar13 < 0) {
        puVar12 = *(undefined **)(puVar10 + 0x28);
        lVar13 = *(long *)(puVar10 + 0x30);
      }
      else {
        puVar12 = puVar10 + 0x28;
      }
      func_0x00010ac985c0(auStack_e0,puVar10,puVar12,lVar13);
      FUN_10a419588(ppuVar8,auStack_e0);
      plVar4 = plStack_d8;
      if (plStack_d8 != (long *)0x0) {
        plVar1 = plStack_d8 + 1;
        do {
          lVar13 = *plVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
    }
    uVar5 = *(undefined1 *)(pppuVar9 + 0x3e);
    extraout_x8[1] = (long)plStack_c8;
    *extraout_x8 = (long)ppuStack_d0;
    *(undefined1 *)(ppuStack_d0 + 0x3e) = uVar5;
    return;
  }
  return;
}



/* Entry: 10a41a2b8; end: 10a41a4af;  */

void FUN_10a41a2b8(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined1 auStack_70 [8];
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar13 = param_2;
    uVar11 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar14 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar14 = (long *)(param_4 + 0x20);
    }
    uVar11 = *puVar4;
    lVar13 = *plVar14;
  }
  FUN_10a0d7500(&lStack_60,*(undefined8 *)(param_2 + 0x170),lVar13,uVar11);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lStack_60 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lStack_60 + 0x180) & 0xfffc;
  *(ushort *)(lStack_60 + 0x180) = uVar3 | *(ushort *)(lStack_60 + 0x180) & 1 | uVar2;
  *(ushort *)(lStack_60 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  lStack_50 = lStack_60;
  plStack_48 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar14 = plStack_58 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *plVar14 = *plVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar14 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar15 = plStack_48 + 1;
    do {
      lVar13 = *plVar15;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *plVar15 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
  }
  plVar15 = *(long **)(param_2 + 0x268);
  for (plVar14 = *(long **)(param_2 + 0x260); lVar13 = lStack_60, plVar14 != plVar15;
      plVar14 = plVar14 + 4) {
    lVar9 = *plVar14;
    lVar12 = (long)*(char *)(lVar9 + 0x3f);
    if (lVar12 < 0) {
      lVar10 = *(long *)(lVar9 + 0x28);
      lVar12 = *(long *)(lVar9 + 0x30);
    }
    else {
      lVar10 = lVar9 + 0x28;
    }
    func_0x00010ac985c0(auStack_70,lVar9,lVar10,lVar12);
    FUN_10a419588(lVar13,auStack_70);
    plVar8 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar13 = *plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  uVar5 = *(undefined1 *)(param_2 + 0x1f0);
  param_1[1] = (long)plStack_58;
  *param_1 = lStack_60;
  *(undefined1 *)(lStack_60 + 0x1f0) = uVar5;
  return;
}



/* Entry: 10a41a4b0; end: 10a41a4db;  */

void FUN_10a41a4b0(long param_1)

{
  long lVar1;
  float *pfVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fStack_8;
  float fStack_4;
  
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    pfVar4 = *(float **)(param_1 + 0x268);
    if (*(float **)(param_1 + 0x260) != pfVar4) {
      lVar6 = *(long *)(param_1 + 0x4d0);
      pfVar5 = *(float **)(param_1 + 0x260) + 4;
      do {
        if (lVar6 == 0) {
          lVar6 = *(long *)(*(long *)(param_1 + 0x170) + 0xa20);
          *(long *)(param_1 + 0x4d0) = lVar6;
        }
        lVar7 = *(long *)(pfVar5 + -4);
        if (*(int *)(lVar6 + 0x18) < 0x135) {
          lVar1 = 0x60;
          if (*(char *)(lVar7 + 0x68) == '\0') {
            lVar1 = 0x5c;
          }
          fVar8 = *(float *)(lVar7 + lVar1);
        }
        else {
          fStack_4 = *(float *)(lVar7 + 0x5c);
          if (*(char *)(lVar7 + 0x68) == '\0') {
            fStack_8 = *(float *)(lVar7 + 0x60);
            fStack_4 = fStack_4 + *(float *)(lVar7 + 100);
            bVar3 = false;
            if (!NAN(fStack_8) && !NAN(fStack_4)) {
              bVar3 = fStack_8 < fStack_4;
            }
          }
          else {
            fStack_8 = *(float *)(lVar7 + 0x60) - *(float *)(lVar7 + 100);
            bVar3 = fStack_4 < fStack_8;
          }
          pfVar2 = &fStack_8;
          if (!bVar3) {
            pfVar2 = &fStack_4;
          }
          fVar8 = *pfVar2;
        }
        *pfVar5 = fVar8;
        pfVar5[1] = fVar8;
        *(undefined1 *)(pfVar5 + 2) = 2;
        pfVar2 = pfVar5 + 4;
        pfVar5 = pfVar5 + 8;
      } while (pfVar2 != pfVar4);
    }
    return;
  }
  return;
}



/* Entry: 10a41a4dc; end: 10a41a5ab;  */

void FUN_10a41a4dc(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10a3c7928();
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bd4a00,*(undefined1 *)(param_1 + 0x1f0));
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110bd91f8);
  plVar3 = *(long **)(param_1 + 0x268);
  plVar2 = *(long **)(param_1 + 0x260);
  while (plVar2 != plVar3) {
    (**(code **)(*param_2 + 0x10))(param_2);
    lVar1 = 0;
    if (*plVar2 != 0) {
      lVar1 = *plVar2 + 0x18;
    }
    (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110bd9218,lVar1);
    (**(code **)(*param_2 + 0x20))(param_2);
    plVar2 = plVar2 + 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a41a5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10a41a5ac; end: 10a41a7df;  */

void FUN_10a41a5ac(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  func_0x00010a3c7a18();
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bd4a00,*(undefined1 *)(param_1 + 0x1f0));
  *(char *)(param_1 + 0x1f0) = (char)plVar3;
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110bd91f8);
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x208))();
  if ((int)plVar3 != 0) {
    iVar6 = 0;
    lVar9 = NEON_fmov(0x3f800000,4);
    do {
      (**(code **)(*param_2 + 0x218))(param_2,iVar6);
      plVar4 = (long *)0x90;
      __Znwm();
      plVar8 = plVar4 + 1;
      plVar4[2] = 0;
      *plVar8 = 0;
      *plVar4 = (long)&PTR_FUN_110ba1ef8;
      plVar7 = plVar4 + 3;
      *plVar7 = (long)&PTR_FUN_110c6a310;
      plVar4[4] = 0;
      plVar4[5] = 0;
      *(undefined1 *)(plVar4 + 7) = 0;
      plVar4[6] = (long)&PTR_FUN_110c6a378;
      plVar4[9] = 0;
      plVar4[8] = 0;
      plVar4[0xb] = 0;
      plVar4[10] = 0;
      plVar4[0xc] = 0;
      plVar4[0xd] = lVar9;
      *(undefined1 *)(plVar4 + 0xe) = 1;
      *(undefined4 *)((long)plVar4 + 0x84) = 0;
      *(undefined8 *)((long)plVar4 + 0x74) = 0;
      *(undefined8 *)((long)plVar4 + 0x7a) = 0;
      plVar4[0x11] = 1;
      plStack_80 = plVar7;
      plStack_78 = plVar4;
      (**(code **)(*param_2 + 0x1f0))(param_2,&PTR_DAT_110bd9218);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plStack_90 = plVar7;
      plStack_88 = plVar4;
      FUN_10a419588(param_1,&plStack_90);
      do {
        lVar5 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
      (**(code **)(*param_2 + 0x220))(param_2);
      plVar4 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar7 = plStack_78 + 1;
        do {
          lVar5 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != (int)plVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010a41a7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10a41a7e0; end: 10a41aa0b;  */

/* WARNING: Removing unreachable block (ram,0x00010a41a970) */

void FUN_10a41a7e0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long alStack_b8 [2];
  char cStack_a1;
  undefined8 ***pppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [24];
  
  func_0x000107c2b054(auStack_58,&UNK_10f656adc);
  func_0x000107c2b054(auStack_70,&UNK_10f656650);
  puVar1 = &DAT_10f4a5045;
  if ((*(ushort *)(param_2 + 0x180) & 0x17) != 0) {
    puVar1 = &DAT_10f4a504a;
  }
  func_0x000107c2b054(auStack_88,puVar1);
  lVar5 = *(long *)(param_2 + 0x248);
  lVar6 = *(long *)(param_2 + 0x250);
  if (lVar5 != lVar6) {
    do {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (alStack_b8,&UNK_10f656af8,lVar5);
      plVar4 = alStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&UNK_10f656aff,3);
      uStack_98 = plVar4[1];
      pppuStack_a0 = (undefined8 ***)*plVar4;
      uStack_90 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar2 = uStack_98;
      ppppuVar3 = (undefined8 ****)pppuStack_a0;
      if (-1 < (long)uStack_90) {
        uVar2 = uStack_90 >> 0x38;
        ppppuVar3 = &pppuStack_a0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (auStack_70,ppppuVar3,uVar2);
      if ((long)uStack_90 < 0) {
        __ZdlPv(pppuStack_a0);
      }
      if (cStack_a1 < '\0') {
        __ZdlPv(alStack_b8[0]);
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar6);
  }
  FUN_10a0ee900(param_1,&UNK_10f656b03,0x11);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  return;
}



/* Entry: 10a41aa0c; end: 10a41aa13;  */

/* WARNING: Removing unreachable block (ram,0x00010a41a970) */

void FUN_10a41aa0c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long alStack_b8 [2];
  char cStack_a1;
  undefined8 ***pppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [24];
  
  func_0x000107c2b054(auStack_58,&UNK_10f656adc);
  func_0x000107c2b054(auStack_70,&UNK_10f656650);
  puVar1 = &DAT_10f4a5045;
  if ((*(ushort *)(param_2 + 0x170) & 0x17) != 0) {
    puVar1 = &DAT_10f4a504a;
  }
  func_0x000107c2b054(auStack_88,puVar1);
  lVar5 = *(long *)(param_2 + 0x238);
  lVar6 = *(long *)(param_2 + 0x240);
  if (lVar5 != lVar6) {
    do {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (alStack_b8,&UNK_10f656af8,lVar5);
      plVar4 = alStack_b8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar4,&UNK_10f656aff,3);
      uStack_98 = plVar4[1];
      pppuStack_a0 = (undefined8 ***)*plVar4;
      uStack_90 = plVar4[2];
      plVar4[1] = 0;
      plVar4[2] = 0;
      *plVar4 = 0;
      uVar2 = uStack_98;
      ppppuVar3 = (undefined8 ****)pppuStack_a0;
      if (-1 < (long)uStack_90) {
        uVar2 = uStack_90 >> 0x38;
        ppppuVar3 = &pppuStack_a0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (auStack_70,ppppuVar3,uVar2);
      if ((long)uStack_90 < 0) {
        __ZdlPv(pppuStack_a0);
      }
      if (cStack_a1 < '\0') {
        __ZdlPv(alStack_b8[0]);
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != lVar6);
  }
  FUN_10a0ee900(param_1,&UNK_10f656b03,0x11);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  if (cStack_59 < '\0') {
    __ZdlPv(auStack_70[0]);
  }
  return;
}



/* Entry: 10a41aa14; end: 10a41aa8b;  */

float FUN_10a41aa14(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulong)param_3 >> 0x20);
  uVar6 = (undefined4)param_3;
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (undefined4)param_2;
  FUN_10a00946c(&UNK_10f65840a);
  FUN_10a00946c(&UNK_10f658425);
  FUN_10a00946c(&UNK_10f65843d);
  FUN_10a00946c(&UNK_10f65840a);
  FUN_10a00946c(&UNK_10f6589f5);
  pfVar1 = (float *)&UNK_10f6589f5;
  FUN_10a00946c();
  uVar3 = CONCAT44(uVar7,uVar6);
  uVar2 = CONCAT44(uVar5,uVar4);
  (**(code **)*param_5)(uVar2,param_5);
  (**(code **)*param_5)(uVar3,param_5);
  return *pfVar1 + param_1 * ((float)uVar2 - (float)uVar3);
}



/* Entry: 10a41aa8c; end: 10a41ab2b;  */

float FUN_10a41aa8c(float param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                   undefined8 *param_5)

{
  (**(code **)*param_5)(param_2,param_5);
  (**(code **)*param_5)(param_3,param_5);
  return *param_4 + param_1 * ((float)param_2 - (float)param_3);
}



/* Entry: 10a41ab2c; end: 10a41ad9b;  */

float FUN_10a41ab2c(float param_1,float param_2,float param_3,float param_4,float *param_5,
                   undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = param_2;
  fVar5 = param_3;
  (**(code **)*param_6)(param_6);
  fVar3 = param_3 * param_3;
  fVar2 = fVar9 * fVar9 + fVar3;
  fVar1 = param_4 * param_4 + fVar5 * fVar5 + fVar2;
  fVar4 = param_4 / fVar1;
  fVar8 = -fVar5 / fVar1;
  fVar9 = -fVar9 / fVar1;
  fVar1 = -param_3 / fVar1;
  (**(code **)*param_6)(param_6);
  fVar5 = ((-(fVar8 * param_2) + param_4 * fVar4) - fVar2 * fVar9) - fVar3 * fVar1;
  fVar6 = (param_4 * fVar8 + param_2 * fVar4 + fVar3 * fVar9) - fVar2 * fVar1;
  fVar7 = (param_4 * fVar9 + fVar2 * fVar4 + param_2 * fVar1) - fVar3 * fVar8;
  fVar1 = (param_4 * fVar1 + fVar3 * fVar4 + fVar2 * fVar8) - param_2 * fVar9;
  fVar9 = fVar5 + fVar6 * 0.0 + fVar7 * 0.0 + fVar1 * 0.0;
  if (fVar9 < 0.0) {
    fVar5 = -fVar5;
    fVar6 = -fVar6;
    fVar7 = -fVar7;
    fVar1 = -fVar1;
    fVar9 = -fVar9;
  }
  if (fVar9 <= 0.9999999) {
    _acosf();
    fVar2 = (1.0 - param_1) * fVar9;
    _sinf();
    fVar4 = fVar2 * 0.0;
    param_1 = param_1 * fVar9;
    _sinf();
    _sinf();
    fVar5 = (fVar2 + fVar5 * param_1) / fVar9;
    fVar2 = (fVar4 + fVar6 * param_1) / fVar9;
    fVar3 = (fVar4 + fVar7 * param_1) / fVar9;
    fVar9 = (fVar4 + fVar1 * param_1) / fVar9;
  }
  else {
    fVar9 = 1.0 - param_1;
    fVar5 = fVar9 + param_1 * fVar5;
    fVar2 = param_1 * fVar6 + fVar9 * 0.0;
    fVar3 = param_1 * fVar7 + fVar9 * 0.0;
    fVar9 = param_1 * fVar1 + fVar9 * 0.0;
  }
  fVar7 = *param_5;
  fVar8 = param_5[1];
  fVar10 = param_5[2];
  fVar11 = param_5[3];
  fVar4 = ((-(fVar7 * fVar2) + fVar5 * fVar11) - fVar3 * fVar8) - fVar9 * fVar10;
  fVar1 = (fVar5 * fVar7 + fVar2 * fVar11 + fVar9 * fVar8) - fVar3 * fVar10;
  fVar6 = (fVar5 * fVar8 + fVar3 * fVar11 + fVar2 * fVar10) - fVar9 * fVar7;
  fVar9 = (fVar5 * fVar10 + fVar9 * fVar11 + fVar3 * fVar7) - fVar2 * fVar8;
  fVar9 = fVar4 * fVar4 + fVar1 * fVar1 + fVar6 * fVar6 + fVar9 * fVar9;
  if (fVar9 == 0.0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = fVar1 * (1.0 / SQRT(fVar9));
  }
  return fVar1;
}



/* Entry: 10a41ad9c; end: 10a41ae87;  */

float FUN_10a41ad9c(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  (**(code **)*param_5)(param_3);
  (**(code **)*param_5)(param_4,param_5);
  return param_2 + param_1 * ((float)param_3 - (float)param_4);
}



/* Entry: 10a41ae88; end: 10a41af37;  */

float FUN_10a41ae88(float param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                   undefined8 *param_5)

{
  (**(code **)*param_5)(param_2,param_5);
  (**(code **)*param_5)(param_3,param_5);
  return *param_4 + param_1 * ((float)param_2 - (float)param_3);
}



/* Entry: 10a41af38; end: 10a41af93;  */

float FUN_10a41af38(float param_1,undefined8 param_2,float *param_3,undefined8 *param_4)

{
  (**(code **)*param_4)(param_2,param_4);
  return *param_3 + param_1 * (float)param_2;
}



/* Entry: 10a41af94; end: 10a41b01f;  */

float FUN_10a41af94(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                   undefined8 *param_5)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  uVar2 = param_2;
  (**(code **)*param_5)(param_2,param_5);
  fVar1 = (float)param_2;
  _powf();
  _powf(uVar2,param_1);
  _powf(CONCAT44(uVar4,uVar3),param_1);
  return *param_4 * fVar1;
}



/* Entry: 10a41b020; end: 10a41b1b7;  */

float FUN_10a41b020(float param_1,undefined8 param_2,float *param_3,undefined8 *param_4)

{
  (**(code **)*param_4)(param_2,param_4);
  return (1.0 - param_1) * *param_3 + param_1 * (float)param_2;
}



/* Entry: 10a41b1b8; end: 10a41b1f7;  */

float FUN_10a41b1b8(float param_1,float param_2,undefined8 param_3,undefined8 *param_4)

{
  (**(code **)*param_4)(param_3);
  return param_1 * (float)param_3 + (1.0 - param_1) * param_2;
}



/* Entry: 10a41b1f8; end: 10a41b343;  */

float FUN_10a41b1f8(float param_1,undefined8 param_2,float *param_3,undefined8 *param_4)

{
  (**(code **)*param_4)(param_2,param_4);
  return (1.0 - param_1) * *param_3 + param_1 * (float)param_2;
}



/* Entry: 10a41b344; end: 10a41b417;  */

float FUN_10a41b344(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                   undefined8 *param_5)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar4 = (undefined4)((ulong)param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  uVar2 = param_2;
  (**(code **)*param_5)(param_2,param_5);
  fVar5 = 1.0 - (float)param_1;
  fVar1 = *param_4;
  _powf(fVar1,fVar5);
  _powf(param_4[1],fVar5);
  _powf(param_4[2],fVar5);
  _powf(param_2,param_1);
  _powf(uVar2,param_1);
  _powf(CONCAT44(uVar4,uVar3),param_1);
  return fVar1 * (float)param_2;
}



/* Entry: 10a41b418; end: 10a41b62b;  */

void FUN_10a41b418(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(param_2 + 0x248);
  lVar6 = *(long *)(param_2 + 0x250);
  FUN_10a415b78(lVar2,lVar6,param_3);
  if (lVar6 != lVar2) {
    uVar5 = *(ulong *)(lVar2 + 0x18);
    lVar6 = *(long *)(param_2 + 0x260);
    if ((ulong)(*(long *)(param_2 + 0x268) - lVar6 >> 5) <= uVar5) goto LAB_10a41b5f0;
    uVar7 = *(undefined8 *)(param_2 + 0x168);
    FUN_10a4158d4(param_2,uVar7);
    if ((*(long *)(param_2 + 0x338) == *(long *)(param_2 + 0x340)) ||
       ((*(long *)(param_2 + 0x238) - *(long *)(param_2 + 0x230) >> 4) * -0x3333333333333333 -
        (*(long *)(param_2 + 0x340) - *(long *)(param_2 + 0x338) >> 6) != 0)) {
      FUN_10a41a204(param_2,uVar7);
    }
    lVar3 = *(long *)(param_2 + 0x298);
    lVar8 = *(long *)(param_2 + 0x290);
    while (lVar3 != lVar8) {
      lVar3 = lVar3 + -0x20;
      FUN_10a0e3264();
    }
    *(long *)(param_2 + 0x298) = lVar8;
    FUN_10a419b30(param_1,lVar6 + uVar5 * 0x20,param_2 + 0x290);
    if (*(long *)(param_2 + 0x290) != *(long *)(param_2 + 0x298)) {
      FUN_10a419df8(param_1);
      FUN_10a416cf8(param_2 + 0x230,param_2 + 0x338,param_2 + 0x290);
      FUN_10a418dd0(param_2,param_2 + 0x290);
      FUN_10a419308(param_2,param_2 + 0x290);
      FUN_10a418008(param_2);
    }
    lVar6 = *(long *)(param_2 + 0x250);
  }
  if (lVar6 == lVar2) {
    lVar2 = *(long *)(param_2 + 0x4d0);
    if (lVar2 == 0) {
      lVar2 = *(long *)(*(long *)(param_2 + 0x170) + 0xa20);
      *(long *)(param_2 + 0x4d0) = lVar2;
    }
    if (0x104 < *(int *)(lVar2 + 0x18)) {
      puVar4 = (undefined8 *)0x120;
      ___cxa_allocate_exception();
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (auStack_68,&UNK_10f656ab6,param_3);
      FUN_10a002a94(puVar4,auStack_68);
      *puVar4 = &PTR_FUN_110b99e70;
      ___cxa_throw(puVar4,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10a41b5f0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41b5f4);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 10a41b62c; end: 10a41b717;  */

void FUN_10a41b62c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar4 = *(long *)(param_1 + 0x220);
  uVar5 = *(undefined8 *)(param_1 + 0x170);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    lStack_28 = *(long *)(lVar4 + 0x18);
    uStack_30 = *(undefined8 *)(lVar4 + 0x10);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(uVar5,&uStack_30,&PTR_DAT_110bd9e28);
    if (lStack_28 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)uVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)uVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a41b718; end: 10a41be57;  */

void FUN_10a41b718(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6584b8,0x18);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd7828;
  pppuVar2 = (undefined8 ***)&UNK_10f656650;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd7828;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a41be38;
    FUN_10a054dac(param_1,&DAT_10f2ee801,FUN_10a440af0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a41be38;
    FUN_10a054dac(param_1,&DAT_10f3becc6,FUN_10a440c28,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a41be38;
    FUN_10a054dac(param_1,&DAT_10f385236,FUN_10a440d54,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a41be38;
    FUN_10a054dac(param_1,&UNK_10f656bc8,FUN_10a440e18,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a41be38;
    FUN_10a054dac(param_1,&UNK_10f656bd6,FUN_10a440f80,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a41be38;
    FUN_10a054dac(param_1,&DAT_10f684680,FUN_10a4412cc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a41be38;
    FUN_10a054dac(param_1,&DAT_10f2ee806,FUN_10a441408,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a41be38;
    FUN_10a054dac(param_1,"resume",FUN_10a4414cc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f30839b,FUN_10a441620,FUN_10a441744);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f350e61,FUN_10a441e3c,FUN_10a441f04);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f408bea,FUN_10a44205c,FUN_10a442124);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,"duration",FUN_10a4421d8,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68f20c,FUN_10a4422a0,FUN_10a442368);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f656be2,FUN_10a44241c,FUN_10a4424f8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f656bed,FUN_10a4425b0,FUN_10a44268c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f656bf9,FUN_10a442744,FUN_10a4427fc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f656c03,FUN_10a4428b4,FUN_10a442970);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,0x42,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f656c13,FUN_10a442a28,FUN_10a442ae4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f656c1d,FUN_10a442b9c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f656c2a,FUN_10a442cd0,FUN_10a442d88);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,4);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f656c3e,FUN_10a442e5c,FUN_10a442f18);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6584b8,0x18);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a41be38:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a41be3c);
  (*pcVar6)();
}



/* Entry: 10a41be58; end: 10a41bf73;  */

void FUN_10a41be58(undefined8 param_1)

{
  undefined4 uStack_ac;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f656c4b;
  uStack_88 = 0x4ffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  puStack_70 = &UNK_10f656650;
  uStack_68 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10a41bf74(param_1,&puStack_a8);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f656c58;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 0;
  FUN_10a41bfcc(param_1,&puStack_a8,&uStack_ac);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f656c61;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f656650;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_ac = 1;
  FUN_10a41bfcc(param_1,&puStack_a8,&uStack_ac);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10a41bf74; end: 10a41bfcb;  */

ulong FUN_10a41bf74(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10a41bfcc; end: 10a41c023;  */

ulong FUN_10a41bfcc(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a442ffc(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10a41c024; end: 10a41c1e7;  */

undefined8 * FUN_10a41c024(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 uStack_21;
  
  param_1[0x55] = &PTR_FUN_110c383b8;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  *(undefined2 *)(param_1 + 0x58) = 0x100;
  puVar1 = param_1;
  FUN_10a3c575c(param_1,&PTR_PTR_110bd4f70,param_2,param_3);
  *puVar1 = &PTR_FUN_110bd4a38;
  puVar1[2] = &PTR_DAT_110bd4c18;
  puVar1[7] = &PTR_DAT_110bd4c70;
  puVar1[0xd] = &PTR_DAT_110bd4c90;
  puVar1[0x55] = &PTR_DAT_110bd4f30;
  puVar1[0x16] = &PTR_DAT_110bd4d00;
  puVar1[0x17] = &PTR_DAT_110bd4d30;
  puVar1[0x3e] = &PTR_FUN_110bd4d60;
  puVar1[0x3f] = &PTR_DAT_110bd4ed0;
  puVar1[0x41] = 0;
  puVar1[0x40] = 0;
  puVar1[0x43] = 0;
  puVar1[0x42] = 0;
  puVar1[0x45] = 0;
  puVar1[0x44] = 0;
  *(undefined2 *)(puVar1 + 0x46) = 0;
  *(undefined4 *)((long)puVar1 + 0x234) = 0x3f800000;
  puVar1[0x47] = 0;
  *(undefined1 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)((long)puVar1 + 0x244) = 0x3f8000003f800000;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0xffffffffffffffff;
  puVar1[0x4d] = 0;
  puVar1[0x4c] = 0;
  FUN_10a4430c8(puVar1 + 0x4e,&uStack_21);
  param_1[0x50] = 0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x51] = puVar1 + 3;
  param_1[0x52] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x51);
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110bf7fc8;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((long)puVar1 + 0x4d) = 0;
  *(undefined8 *)((long)puVar1 + 0x45) = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  param_1[0x53] = puVar1 + 3;
  param_1[0x54] = puVar1;
  FUN_10a5cf1fc(param_1 + 0x53);
  return param_1;
}



/* Entry: 10a41c1e8; end: 10a41c28b;  */

void FUN_10a41c1e8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bd4a38;
  param_1[2] = &PTR_DAT_110bd4c18;
  param_1[7] = &PTR_DAT_110bd4c70;
  param_1[0xd] = &PTR_DAT_110bd4c90;
  param_1[0x55] = &PTR_DAT_110bd4f30;
  param_1[0x16] = &PTR_DAT_110bd4d00;
  param_1[0x17] = &PTR_DAT_110bd4d30;
  param_1[0x3e] = &PTR_FUN_110bd4d60;
  param_1[0x3f] = &PTR_DAT_110bd4ed0;
  func_0x00010a004e5c(param_1 + 0x53);
  func_0x00010a004e5c(param_1 + 0x51);
  FUN_10a443070(param_1 + 0x4e);
  func_0x00010a4431f0(param_1 + 0x4c);
  func_0x00010a443198(param_1 + 0x44);
  func_0x00010a3bef9c(param_1 + 0x42);
  FUN_10a37eea0(param_1 + 0x40);
  *param_1 = &PTR_FUN_110bd76c0;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x55] = &PTR_DAT_110bd77f0;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a41c28c; end: 10a41c2cf;  */

void FUN_10a41c28c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110bd4a38;
  param_1[2] = &PTR_DAT_110bd4c18;
  param_1[7] = &PTR_DAT_110bd4c70;
  param_1[0xd] = &PTR_DAT_110bd4c90;
  param_1[0x55] = &PTR_DAT_110bd4f30;
  param_1[0x16] = &PTR_DAT_110bd4d00;
  param_1[0x17] = &PTR_DAT_110bd4d30;
  param_1[0x3e] = &PTR_FUN_110bd4d60;
  param_1[0x3f] = &PTR_DAT_110bd4ed0;
  func_0x00010a004e5c(param_1 + 0x53);
  func_0x00010a004e5c(param_1 + 0x51);
  FUN_10a443070(param_1 + 0x4e);
  func_0x00010a4431f0(param_1 + 0x4c);
  func_0x00010a443198(param_1 + 0x44);
  func_0x00010a3bef9c(param_1 + 0x42);
  FUN_10a37eea0(param_1 + 0x40);
  *param_1 = &PTR_FUN_110bd76c0;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x55] = &PTR_DAT_110bd77f0;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a41c2d0; end: 10a41c373;  */

void FUN_10a41c2d0(void)

{
  FUN_10a41c1e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a41c374; end: 10a41c3a3;  */

void FUN_10a41c374(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a41c1e8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a41c3a4; end: 10a41cbc7;  */

/* WARNING: Possible PIC construction at 0x00010a41c998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a41c770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a41c774) */

code ** FUN_10a41c3a4(code **param_1,code **param_2)

{
  code **ppcVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  code **ppcVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined *puVar13;
  byte bVar14;
  uint uVar15;
  code *pcVar16;
  long lVar17;
  code *pcVar18;
  code **ppcVar19;
  code *pcVar20;
  undefined1 *unaff_x29;
  undefined1 *puVar21;
  undefined8 unaff_x30;
  code *pcVar22;
  code *pcStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  code **ppcStack_98;
  code *pcStack_90;
  code **ppcStack_88;
  code *pcStack_80;
  code **ppcStack_78;
  long lStack_48;
  
  ppcVar19 = &pcStack_b0;
  puVar21 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar16 = *param_2;
  if (pcVar16 == (code *)0x0) {
LAB_10a41c4c4:
    FUN_10a41cbc8(param_1 + 0x40,param_2);
    pcVar16 = param_1[0x40];
    if (pcVar16 == (code *)0x0) {
      pcStack_90 = (code *)0x0;
      ppcStack_88 = (code **)0x0;
      ppcVar9 = param_1 + 0x42;
      ppuVar11 = &pcStack_90;
      func_0x00010a41cc44(ppcVar9);
      param_2 = ppcStack_88;
      if (ppcStack_88 != (code **)0x0) {
        ppcVar19 = ppcStack_88 + 1;
        do {
          pcVar16 = *ppcVar19;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppcVar19,0x10);
          if (bVar6) {
            *ppcVar19 = pcVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pcVar16 == (code *)0x0) {
          (**(code **)(*ppcStack_88 + 0x10))(ppcStack_88);
          ppcVar9 = param_2;
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
        }
      }
      param_1[0x47] = (code *)0x0;
    }
    else {
      ppuVar11 = &PTR_DAT_110c41a28;
      pcVar22 = pcVar16;
      ___dynamic_cast(pcVar16,&PTR_DAT_110c41a28,&PTR_DAT_110c4a7a0,0);
      if ((pcVar22 != (code *)0x0) && (((byte)pcVar22[0x138] & 1) == 0)) goto LAB_10a41cb6c;
      (**(code **)(*(long *)pcVar16 + 0x90))();
      if (pcVar16 == (code *)0x0) {
        pcStack_90 = (code *)0x0;
        ppcStack_88 = (code **)0x0;
      }
      else {
        func_0x00010a443248(&pcStack_90,pcVar16 + 0x10);
      }
      ppcVar7 = param_1 + 0x42;
      ppuVar11 = &pcStack_90;
      ppcVar9 = ppcVar7;
      func_0x00010a41cc44(ppcVar7);
      ppcVar8 = ppcStack_88;
      if (ppcStack_88 != (code **)0x0) {
        ppcVar1 = ppcStack_88 + 1;
        do {
          pcVar16 = *ppcVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppcVar1,0x10);
          if (bVar6) {
            *ppcVar1 = pcVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pcVar16 == (code *)0x0) {
          (**(code **)(*ppcStack_88 + 0x10))(ppcStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar8);
          ppcVar9 = ppcVar8;
        }
      }
      if (*ppcVar7 == (code *)0x0) {
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          puVar13 = &UNK_10f656d9f;
          uVar10 = 2;
          uVar12 = 0x77;
          unaff_x30 = 0x10a41c774;
          goto SUB_10ae06f08;
        }
        goto LAB_10a41cb38;
      }
      pcVar16 = *param_2;
      if (pcVar16 == (code *)0x0) {
LAB_10a41c67c:
        param_1[0x47] = (code *)0x0;
      }
      else {
        param_2 = *(code ***)(pcVar16 + 0xe0);
        plVar3 = *(long **)(pcVar16 + 0xe8);
        if (plVar3 != (long *)0x0) {
          plVar2 = plVar3 + 1;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = *plVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            lVar17 = *plVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *plVar2 = lVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
          }
        }
        if (param_2 == (code **)0x0) goto LAB_10a41c67c;
        ppcVar19 = param_2;
        ___dynamic_cast(param_2,&PTR_DAT_110c5efc0,&PTR_DAT_110c5e3f0,0);
        param_1[0x47] = (code *)ppcVar19;
        if (ppcVar19 != (code **)0x0) {
          (**(code **)(*param_1 + 0x148))(*(undefined4 *)((long)param_1 + 0x234),param_1);
          ppuVar11 = (undefined **)(ulong)*(byte *)(param_1 + 0x48);
          FUN_10a41cca8(param_1);
          FUN_10a41ce08(*(undefined4 *)((long)param_1 + 0x244),param_1);
          ppcVar9 = (code **)param_1[0x4e];
          func_0x00010a3a0eb8(ppcVar9);
          goto LAB_10a41cb38;
        }
      }
      FUN_10a41cef4(&pcStack_90,param_1);
      param_2 = ppcStack_88;
      ppcStack_98 = ppcStack_88;
      pcStack_a0 = pcStack_90;
      if (ppcStack_88 != (code **)0x0) {
        ppcVar19 = ppcStack_88 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppcVar19,0x10);
          if (bVar6) {
            *ppcVar19 = *ppcVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        ppcVar9 = ppcStack_88 + 1;
        do {
          pcVar16 = *ppcVar9;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppcVar9,0x10);
          if (bVar6) {
            *ppcVar9 = pcVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pcVar16 == (code *)0x0) {
          (**(code **)(*ppcStack_88 + 0x10))(ppcStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
        }
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppcVar19,0x10);
          if (bVar6) {
            *ppcVar19 = *ppcVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if ((((ulong)param_1[0x50] & 1) == 0) && (*(char *)((long)param_1 + 0x281) != '\x01')) {
        if (param_1[0x44] != (code *)0x0) {
          (**(code **)(*(long *)param_1[0x44] + 0x1a8))();
        }
        pcVar20 = param_1[0x2e];
        pcVar16 = (code *)0x80;
        __Znwm();
        pcVar22 = pcVar16 + 8;
        *(long *)pcVar22 = 0;
        *(undefined8 *)(pcVar16 + 0x10) = 0;
        *(undefined ***)pcVar16 = &PTR_DAT_110bd98f8;
        pcVar18 = pcVar16 + 0x18;
        *(undefined ***)pcVar18 = &PTR_FUN_110bcbce0;
        *(undefined8 *)(pcVar16 + 0x30) = 0;
        *(undefined8 *)(pcVar16 + 0x38) = 0;
        pcVar16[0x40] = (code)0x0;
        *(undefined8 *)(pcVar16 + 0x48) = 0xffffffffffffffff;
        *(code **)(pcVar16 + 0x50) = pcVar20;
        *(undefined8 *)(pcVar16 + 0x58) = 0;
        *(undefined4 *)(pcVar16 + 0x5f) = 0;
        *(undefined8 *)(pcVar16 + 0x6c) = 0x3f800000;
        *(undefined8 *)(pcVar16 + 100) = 0x3a83126f3a83126f;
        *(undefined8 *)(pcVar16 + 0x74) = 0x3f80000000000000;
        pcVar16[0x7c] = (code)0x0;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar22,0x10);
          if (bVar6) {
            *(long *)pcVar22 = *(long *)pcVar22 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        pcVar20 = pcVar16 + 0x10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar20,0x10);
          if (bVar6) {
            *(long *)pcVar20 = *(long *)pcVar20 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(code **)(pcVar16 + 0x20) = pcVar18;
        *(code **)(pcVar16 + 0x28) = pcVar16;
        do {
          lVar17 = *(long *)pcVar22;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pcVar22,0x10);
          if (bVar6) {
            *(long *)pcVar22 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*(long *)pcVar16 + 0x10))(pcVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar16);
        }
        param_1[0x44] = pcVar18;
        ppcVar19 = (code **)param_1[0x45];
        param_1[0x45] = pcVar16;
        if (ppcVar19 != (code **)0x0) {
          ppcVar9 = ppcVar19 + 1;
          do {
            pcVar16 = *ppcVar9;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppcVar9,0x10);
            if (bVar6) {
              *ppcVar9 = pcVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (pcVar16 == (code *)0x0) {
            (**(code **)(*ppcVar19 + 0x10))(ppcVar19);
LAB_10a41c948:
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar19);
          }
        }
      }
      else {
        ppcVar19 = param_1 + 0x44;
        pcVar16 = param_1[0x44];
        if (pcVar16 == (code *)0x0) {
          bVar14 = 1;
          if (*(int *)((long)param_1 + 0x284) != 1) {
            bVar14 = *(byte *)((long)param_1 + 0x282);
          }
          FUN_10a443288(&pcStack_90,param_1[0x2e],bVar14 & 1);
          func_0x00010a41cf88(ppcVar19,&pcStack_90);
          if (ppcStack_88 != (code **)0x0) {
            ppcVar19 = ppcStack_88 + 1;
            do {
              pcVar16 = *ppcVar19;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppcVar19,0x10);
              if (bVar6) {
                *ppcVar19 = pcVar16 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_10a41c81c:
            ppcVar19 = ppcStack_88;
            if (pcVar16 == (code *)0x0) {
              (**(code **)(*ppcStack_88 + 0x10))(ppcStack_88);
              goto LAB_10a41c948;
            }
          }
        }
        else {
          (**(code **)(*(long *)pcVar16 + 0x1c8))();
          if (((int)pcVar16 == 0) || ((*(byte *)((long)param_1 + 0x283) & 1) == 0)) {
            (**(code **)(*(long *)*ppcVar19 + 0x1a8))();
            bVar14 = 1;
            if (*(int *)((long)param_1 + 0x284) != 1) {
              bVar14 = *(byte *)((long)param_1 + 0x282);
            }
            FUN_10a443288(&pcStack_90,param_1[0x2e],bVar14 & 1);
            func_0x00010a41cf88(ppcVar19,&pcStack_90);
            if (ppcStack_88 != (code **)0x0) {
              ppcVar19 = ppcStack_88 + 1;
              do {
                pcVar16 = *ppcVar19;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppcVar19,0x10);
                if (bVar6) {
                  *ppcVar19 = pcVar16 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              goto LAB_10a41c81c;
            }
          }
          else {
            (**(code **)(*(long *)*ppcVar19 + 0x140))(*ppcVar19,0);
          }
        }
      }
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        pcStack_b0 = param_1[0x44];
        pcVar16 = param_1[0x42] + 0x30;
        pcStack_a8 = *(code **)pcVar16;
        if (-1 < (char)param_1[0x42][0x47]) {
          pcStack_a8 = pcVar16;
        }
        puVar13 = &UNK_10f656dc4;
        uVar10 = 8;
        uVar12 = 0xa8;
        unaff_x30 = 0x10a41c99c;
        ppcVar19 = &pcStack_b0;
SUB_10ae06f08:
        ppcVar9 = (code **)0x1;
        *(undefined1 **)((long)ppcVar19 + -0x10) = puVar21;
        *(undefined8 *)((long)ppcVar19 + -8) = unaff_x30;
        *(code ***)((long)ppcVar19 + -0x18) = ppcVar19;
        FUN_10ae06f30(1,uVar10,&UNK_10f656cc0,&UNK_10f656cfa,uVar12,puVar13,ppcVar19);
        return ppcVar9;
      }
      pcVar16 = param_1[0x44];
      pcStack_90 = FUN_10a443434;
      ppcStack_88 = (code **)&PTR_FUN_110bd9938;
      ppcStack_78 = ppcStack_98;
      pcStack_80 = pcStack_a0;
      if (param_2 != (code **)0x0) {
        ppcVar19 = param_2 + 2;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppcVar19,0x10);
          if (bVar6) {
            *ppcVar19 = *ppcVar19 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      (**(code **)(*(long *)pcVar16 + 0x120))(pcVar16,ppcVar7,&pcStack_90);
      param_1[0x4b] = pcVar16;
      (**ppcStack_88)(&ppcStack_88);
      param_1[0x4a] = (code *)0x0;
      pcVar16 = *(code **)(param_1[0x40] + 0xe0);
      plVar3 = *(long **)(param_1[0x40] + 0xe8);
      if (plVar3 != (long *)0x0) {
        plVar2 = plVar3 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      if (pcVar16 == (code *)0x0) {
        pcVar16 = (code *)0x0;
      }
      else {
        ___dynamic_cast(pcVar16,&PTR_DAT_110c5efc0,&PTR_DAT_110c674a8,0);
      }
      if (plVar3 != (long *)0x0) {
        plVar2 = plVar3 + 1;
        do {
          lVar17 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
      if (pcVar16 == (code *)0x0) {
        (**(code **)(*param_1 + 0x148))(*(undefined4 *)((long)param_1 + 0x234),param_1);
        if (((ulong)param_1[0x48] & 1) == 0) {
          uVar15 = (uint)*(byte *)((long)param_1 + 0x281);
        }
        else {
          uVar15 = 1;
        }
        ppuVar11 = (undefined **)(ulong)(uVar15 & 1);
        FUN_10a41cca8(param_1);
        FUN_10a41ce08(*(undefined4 *)((long)param_1 + 0x244),param_1);
      }
      else {
        (**(code **)(*param_1 + 0x148))(0x3f800000,param_1);
        FUN_10a41ce08(0x3f800000,param_1);
        ppuVar11 = (code **)0x1;
        FUN_10a41cca8(param_1);
        param_1[0x4a] = pcVar16;
      }
      ppcVar9 = (code **)param_1[0x4e];
      func_0x00010a3a0eb8(ppcVar9);
      if (param_1[0x2e][0xe2a] == (code)0x1) {
        (**(code **)(*param_1 + 0x168))(param_1);
        ppcVar9 = param_1;
      }
      if (param_2 != (code **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
        ppcVar9 = param_2;
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
      }
    }
LAB_10a41cb38:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return ppcVar9;
    }
  }
  else {
    ppcVar9 = *(code ***)(pcVar16 + 0xe0);
    ppcVar7 = *(code ***)(pcVar16 + 0xe8);
    if (ppcVar7 != (code **)0x0) {
      ppcVar8 = ppcVar7 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppcVar8,0x10);
        if (bVar6) {
          *ppcVar8 = *ppcVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (ppcVar9 == (code **)0x0) {
      bVar6 = false;
      ppuVar11 = param_2;
    }
    else {
      ppuVar11 = &PTR_DAT_110c5efc0;
      ___dynamic_cast(ppcVar9,&PTR_DAT_110c5efc0,&PTR_DAT_110c67490,0);
      bVar6 = ppcVar9 != (code **)0x0;
    }
    if (ppcVar7 != (code **)0x0) {
      ppcVar8 = ppcVar7 + 1;
      do {
        pcVar16 = *ppcVar8;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppcVar8,0x10);
        if (bVar4) {
          *ppcVar8 = pcVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (pcVar16 == (code *)0x0) {
        (**(code **)(*ppcVar7 + 0x10))(ppcVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar7);
        ppcVar9 = ppcVar7;
      }
    }
    if (!bVar6) goto LAB_10a41c4c4;
    if ((bRam000000011330a9e8 >> 1 & 1) == 0) goto LAB_10a41cb38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      puVar13 = &UNK_10f656d6e;
      uVar10 = 2;
      uVar12 = 0x60;
      ppcVar19 = (code **)register0x00000008;
      puVar21 = unaff_x29;
      goto SUB_10ae06f08;
    }
  }
  ___stack_chk_fail();
LAB_10a41cb6c:
  ppcVar19 = (code **)&UNK_10f656c6c;
  FUN_10a00946c();
  if (param_2 != (code **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
  }
  __Unwind_Resume();
  pcVar22 = (code *)ppuVar11[1];
  pcVar16 = (code *)*ppuVar11;
  if ((code *)ppuVar11[1] != (code *)0x0) {
    pcVar18 = (code *)(ppuVar11[1] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
      if (bVar6) {
        *(long *)pcVar18 = *(long *)pcVar18 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  pcVar18 = ppcVar19[1];
  ppcVar19[1] = pcVar22;
  *ppcVar19 = pcVar16;
  if (pcVar18 != (code *)0x0) {
    pcVar16 = pcVar18 + 8;
    do {
      lVar17 = *(long *)pcVar16;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar16,0x10);
      if (bVar6) {
        *(long *)pcVar16 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*(long *)pcVar18 + 0x10))(pcVar18);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar18);
    }
  }
  return ppcVar19;
}



/* Entry: 10a41cbc8; end: 10a41cca7;  */

undefined8 * FUN_10a41cbc8(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10a41cca8; end: 10a41ce07;  */

/* WARNING: Possible PIC construction at 0x00010a41dba4: Changing call to branch */

void FUN_10a41cca8(long *param_1,int param_2)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 *unaff_x29;
  undefined1 *puVar12;
  undefined8 unaff_x30;
  undefined4 uVar13;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  
  uVar2 = (undefined1)param_2;
  *(undefined1 *)(param_1 + 0x48) = uVar2;
  if (param_1[0x47] == 0) {
    FUN_10a3dd9ac(&uStack_68,param_1[0x2e]);
    uVar13 = 0x3f800000;
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
      uVar13 = NEON_ucvtf((uint)*(byte *)((long)param_1 + 0x281));
    }
    FUN_10a7718b4(uVar13,uStack_68,param_1,0xb);
    FUN_10a7718b4(*(float *)(param_1 + 0x49) * 100.0,uStack_68,param_1,0xc);
    if (cStack_58 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_60);
    }
    if (param_2 != 0) {
      puVar5 = &stack0xffffffffffffffd0;
      puVar12 = &stack0xfffffffffffffff0;
      plVar6 = (long *)param_1[0x44];
      if (plVar6 == (long *)0x0) {
        if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
          *(undefined1 *)(param_1 + 0x50) = 1;
        }
      }
      else if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
        (**(code **)(*plVar6 + 0x170))();
        if (((ulong)plVar6 & 1) == 0) {
          *(undefined1 *)(param_1 + 0x50) = 1;
          if ((bRam000000011330a9e8 >> 3 & 1) == 0) {
            plVar6 = (long *)param_1[0x41];
            if (param_1[0x41] != 0) {
              plVar1 = (long *)(param_1[0x41] + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = *plVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            (**(code **)(*param_1 + 0xf0))(param_1,&stack0xffffffffffffffd0);
            if (plVar6 == (long *)0x0) {
              return;
            }
            plVar1 = plVar6 + 1;
            do {
              lVar10 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar10 != 0) {
              return;
            }
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            return;
          }
          puVar7 = &UNK_10f657045;
          uVar9 = 0x2e2;
          unaff_x30 = 0x10a41dba8;
        }
        else {
          if ((bRam000000011330a9e8 >> 3 & 1) == 0) {
            return;
          }
          puVar7 = &UNK_10f657073;
          uVar9 = 0x2e5;
          puVar5 = (undefined1 *)register0x00000008;
          puVar12 = unaff_x29;
        }
        *(undefined1 **)(puVar5 + -0x10) = puVar12;
        *(undefined8 *)(puVar5 + -8) = unaff_x30;
        *(undefined1 **)(puVar5 + -0x18) = puVar5;
        FUN_10ae06f30(1,8,&UNK_10f656cc0,&UNK_10f657001,uVar9,puVar7,puVar5);
        return;
      }
      return;
    }
  }
  else {
    lVar10 = *(long *)(param_1[0x47] + 0xb8);
    puVar11 = *(undefined8 **)(lVar10 + 0x2138);
    uVar9 = *puVar11;
    __ZNSt3__15mutex4lockEv(uVar9);
    *(undefined1 *)(puVar11[2] + 0x4020) = uVar2;
    __ZNSt3__15mutex6unlockEv(uVar9);
    *(undefined1 *)(lVar10 + 0x2218) = uVar2;
    lVar10 = param_1[0x49];
    lVar8 = *(long *)(param_1[0x47] + 0xb8);
    puVar11 = *(undefined8 **)(lVar8 + 0x2138);
    uVar9 = *puVar11;
    __ZNSt3__15mutex4lockEv(uVar9);
    *(int *)(puVar11[2] + 0x401c) = (int)lVar10;
    __ZNSt3__15mutex6unlockEv(uVar9);
    *(int *)(lVar8 + 0x221c) = (int)lVar10;
  }
  return;
}



/* Entry: 10a41ce08; end: 10a41cef3;  */

void FUN_10a41ce08(float param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  fVar4 = 1.0;
  if (param_1 <= 1.0) {
    fVar4 = param_1;
  }
  fVar5 = 0.0;
  if (0.0 <= param_1) {
    fVar5 = fVar4;
  }
  *(float *)(param_2 + 0x244) = fVar5;
  if (*(long *)(param_2 + 0x238) == 0) {
    FUN_10a3dd9ac(&uStack_58,*(undefined8 *)(param_2 + 0x170));
    fVar4 = *(float *)(param_2 + 0x244);
    _log10f(fVar4);
    FUN_10a7718b4(fVar4 * 20.0,uStack_58,param_2,0xd);
    if (cStack_48 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_50);
    }
  }
  else {
    lVar2 = *(long *)(*(long *)(param_2 + 0x238) + 0xb8);
    puVar3 = *(undefined8 **)(lVar2 + 0x2138);
    uVar1 = *puVar3;
    __ZNSt3__15mutex4lockEv(uVar1);
    *(float *)(puVar3[2] + 0x4018) = fVar5;
    __ZNSt3__15mutex6unlockEv(uVar1);
    *(float *)(lVar2 + 0x2224) = fVar5;
  }
  return;
}



/* Entry: 10a41cef4; end: 10a41cfeb;  */

void FUN_10a41cef4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uStack_30;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x50))(&uStack_30,param_2);
  param_1[1] = plStack_28;
  *param_1 = uStack_30;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10a41cfec; end: 10a41d043;  */

/* WARNING: Possible PIC construction at 0x00010a41c998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a41c770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a41c774) */

code ** FUN_10a41cfec(long param_1,code **param_2)

{
  code **ppcVar1;
  long *plVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  bool bVar6;
  code **ppcVar7;
  long *plVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  byte bVar16;
  uint uVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  long *plVar22;
  long *plVar23;
  undefined1 *unaff_x29;
  undefined1 *puVar24;
  undefined8 unaff_x30;
  code *pcVar25;
  undefined8 uStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  code **ppcStack_98;
  code *pcStack_90;
  code **ppcStack_88;
  code *pcStack_80;
  code **ppcStack_78;
  long lStack_48;
  
  ppcVar11 = (code **)(param_1 + -0x1f0);
  puVar5 = &uStack_b0;
  puVar24 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar18 = *param_2;
  if (pcVar18 == (code *)0x0) {
LAB_10a41c4c4:
    FUN_10a41cbc8(param_1 + 0x10,param_2);
    plVar22 = *(long **)(param_1 + 0x10);
    if (plVar22 == (long *)0x0) {
      pcStack_90 = (code *)0x0;
      ppcStack_88 = (code **)0x0;
      ppcVar10 = (code **)(param_1 + 0x20);
      ppuVar13 = &pcStack_90;
      func_0x00010a41cc44(ppcVar10);
      param_2 = ppcStack_88;
      if (ppcStack_88 != (code **)0x0) {
        ppcVar11 = ppcStack_88 + 1;
        do {
          pcVar18 = *ppcVar11;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppcVar11,0x10);
          if (bVar6) {
            *ppcVar11 = pcVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pcVar18 == (code *)0x0) {
          (**(code **)(*ppcStack_88 + 0x10))(ppcStack_88);
          ppcVar10 = param_2;
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
        }
      }
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    else {
      ppuVar13 = &PTR_DAT_110c41a28;
      plVar8 = plVar22;
      ___dynamic_cast(plVar22,&PTR_DAT_110c41a28,&PTR_DAT_110c4a7a0,0);
      if ((plVar8 != (long *)0x0) && ((*(byte *)(plVar8 + 0x27) & 1) == 0)) goto LAB_10a41cb6c;
      (**(code **)(*plVar22 + 0x90))();
      if (plVar22 == (long *)0x0) {
        pcStack_90 = (code *)0x0;
        ppcStack_88 = (code **)0x0;
      }
      else {
        func_0x00010a443248(&pcStack_90,plVar22 + 2);
      }
      ppcVar7 = (code **)(param_1 + 0x20);
      ppuVar13 = &pcStack_90;
      ppcVar10 = ppcVar7;
      func_0x00010a41cc44(ppcVar7);
      ppcVar9 = ppcStack_88;
      if (ppcStack_88 != (code **)0x0) {
        ppcVar1 = ppcStack_88 + 1;
        do {
          pcVar18 = *ppcVar1;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppcVar1,0x10);
          if (bVar6) {
            *ppcVar1 = pcVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pcVar18 == (code *)0x0) {
          (**(code **)(*ppcStack_88 + 0x10))(ppcStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar9);
          ppcVar10 = ppcVar9;
        }
      }
      if (*ppcVar7 == (code *)0x0) {
        if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
          puVar15 = &UNK_10f656d9f;
          uVar12 = 2;
          uVar14 = 0x77;
          unaff_x30 = 0x10a41c774;
          goto SUB_10ae06f08;
        }
        goto LAB_10a41cb38;
      }
      pcVar18 = *param_2;
      if (pcVar18 == (code *)0x0) {
LAB_10a41c67c:
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      else {
        param_2 = *(code ***)(pcVar18 + 0xe0);
        plVar22 = *(long **)(pcVar18 + 0xe8);
        if (plVar22 != (long *)0x0) {
          plVar8 = plVar22 + 1;
          do {
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            lVar20 = *plVar8;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar6) {
              *plVar8 = lVar20 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
          }
        }
        if (param_2 == (code **)0x0) goto LAB_10a41c67c;
        ppcVar10 = param_2;
        ___dynamic_cast(param_2,&PTR_DAT_110c5efc0,&PTR_DAT_110c5e3f0,0);
        *(code ***)(param_1 + 0x48) = ppcVar10;
        if (ppcVar10 != (code **)0x0) {
          (**(code **)(*ppcVar11 + 0x148))(*(undefined4 *)(param_1 + 0x44),ppcVar11);
          ppuVar13 = (undefined **)(ulong)*(byte *)(param_1 + 0x50);
          FUN_10a41cca8(ppcVar11);
          FUN_10a41ce08(*(undefined4 *)(param_1 + 0x54),ppcVar11);
          ppcVar10 = *(code ***)(param_1 + 0x80);
          func_0x00010a3a0eb8(ppcVar10);
          goto LAB_10a41cb38;
        }
      }
      FUN_10a41cef4(&pcStack_90,ppcVar11);
      param_2 = ppcStack_88;
      ppcStack_98 = ppcStack_88;
      pcStack_a0 = pcStack_90;
      if (ppcStack_88 != (code **)0x0) {
        ppcVar10 = ppcStack_88 + 2;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppcVar10,0x10);
          if (bVar6) {
            *ppcVar10 = *ppcVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        ppcVar9 = ppcStack_88 + 1;
        do {
          pcVar18 = *ppcVar9;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppcVar9,0x10);
          if (bVar6) {
            *ppcVar9 = pcVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pcVar18 == (code *)0x0) {
          (**(code **)(*ppcStack_88 + 0x10))(ppcStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
        }
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppcVar10,0x10);
          if (bVar6) {
            *ppcVar10 = *ppcVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (((*(byte *)(param_1 + 0x90) & 1) == 0) && (*(char *)(param_1 + 0x91) != '\x01')) {
        if (*(long **)(param_1 + 0x30) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x30) + 0x1a8))();
        }
        lVar20 = *(long *)(param_1 + -0x80);
        plVar22 = (long *)0x80;
        __Znwm();
        plVar8 = plVar22 + 1;
        *plVar8 = 0;
        plVar22[2] = 0;
        *plVar22 = (long)&PTR_DAT_110bd98f8;
        plVar23 = plVar22 + 3;
        *plVar23 = (long)&PTR_FUN_110bcbce0;
        plVar22[6] = 0;
        plVar22[7] = 0;
        *(undefined1 *)(plVar22 + 8) = 0;
        plVar22[9] = -1;
        plVar22[10] = lVar20;
        plVar22[0xb] = 0;
        *(undefined4 *)((long)plVar22 + 0x5f) = 0;
        *(undefined8 *)((long)plVar22 + 0x6c) = 0x3f800000;
        *(undefined8 *)((long)plVar22 + 100) = 0x3a83126f3a83126f;
        *(undefined8 *)((long)plVar22 + 0x74) = 0x3f80000000000000;
        *(undefined1 *)((long)plVar22 + 0x7c) = 0;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar2 = plVar22 + 2;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar22[4] = (long)plVar23;
        plVar22[5] = (long)plVar22;
        do {
          lVar20 = *plVar8;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar20 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
        *(long **)(param_1 + 0x30) = plVar23;
        ppcVar10 = *(code ***)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar22;
        if (ppcVar10 != (code **)0x0) {
          ppcVar9 = ppcVar10 + 1;
          do {
            pcVar18 = *ppcVar9;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppcVar9,0x10);
            if (bVar6) {
              *ppcVar9 = pcVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (pcVar18 == (code *)0x0) {
            (**(code **)(*ppcVar10 + 0x10))(ppcVar10);
LAB_10a41c948:
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar10);
          }
        }
      }
      else {
        puVar5 = (undefined8 *)(param_1 + 0x30);
        plVar22 = *(long **)(param_1 + 0x30);
        if (plVar22 == (long *)0x0) {
          bVar16 = 1;
          if (*(int *)(param_1 + 0x94) != 1) {
            bVar16 = *(byte *)(param_1 + 0x92);
          }
          FUN_10a443288(&pcStack_90,*(undefined8 *)(param_1 + -0x80),bVar16 & 1);
          func_0x00010a41cf88(puVar5,&pcStack_90);
          if (ppcStack_88 != (code **)0x0) {
            ppcVar10 = ppcStack_88 + 1;
            do {
              pcVar18 = *ppcVar10;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppcVar10,0x10);
              if (bVar6) {
                *ppcVar10 = pcVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_10a41c81c:
            ppcVar10 = ppcStack_88;
            if (pcVar18 == (code *)0x0) {
              (**(code **)(*ppcStack_88 + 0x10))(ppcStack_88);
              goto LAB_10a41c948;
            }
          }
        }
        else {
          (**(code **)(*plVar22 + 0x1c8))();
          if (((int)plVar22 == 0) || ((*(byte *)(param_1 + 0x93) & 1) == 0)) {
            (**(code **)(*(long *)*puVar5 + 0x1a8))();
            bVar16 = 1;
            if (*(int *)(param_1 + 0x94) != 1) {
              bVar16 = *(byte *)(param_1 + 0x92);
            }
            FUN_10a443288(&pcStack_90,*(undefined8 *)(param_1 + -0x80),bVar16 & 1);
            func_0x00010a41cf88(puVar5,&pcStack_90);
            if (ppcStack_88 != (code **)0x0) {
              ppcVar10 = ppcStack_88 + 1;
              do {
                pcVar18 = *ppcVar10;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppcVar10,0x10);
                if (bVar6) {
                  *ppcVar10 = pcVar18 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              goto LAB_10a41c81c;
            }
          }
          else {
            (**(code **)(*(long *)*puVar5 + 0x140))((long *)*puVar5,0);
          }
        }
      }
      if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
        uStack_b0 = *(undefined8 *)(param_1 + 0x30);
        plVar22 = (long *)(*(long *)(param_1 + 0x20) + 0x30);
        lStack_a8 = *plVar22;
        if (-1 < *(char *)(*(long *)(param_1 + 0x20) + 0x47)) {
          lStack_a8 = (long)plVar22;
        }
        puVar15 = &UNK_10f656dc4;
        uVar12 = 8;
        uVar14 = 0xa8;
        unaff_x30 = 0x10a41c99c;
        puVar5 = &uStack_b0;
SUB_10ae06f08:
        ppcVar11 = (code **)0x1;
        *(undefined1 **)((long)puVar5 + -0x10) = puVar24;
        *(undefined8 *)((long)puVar5 + -8) = unaff_x30;
        *(undefined8 **)((long)puVar5 + -0x18) = puVar5;
        FUN_10ae06f30(1,uVar12,&UNK_10f656cc0,&UNK_10f656cfa,uVar14,puVar15,puVar5);
        return ppcVar11;
      }
      plVar22 = *(long **)(param_1 + 0x30);
      pcStack_90 = FUN_10a443434;
      ppcStack_88 = (code **)&PTR_FUN_110bd9938;
      ppcStack_78 = ppcStack_98;
      pcStack_80 = pcStack_a0;
      if (param_2 != (code **)0x0) {
        ppcVar10 = param_2 + 2;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppcVar10,0x10);
          if (bVar6) {
            *ppcVar10 = *ppcVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      (**(code **)(*plVar22 + 0x120))(plVar22,ppcVar7,&pcStack_90);
      *(long **)(param_1 + 0x68) = plVar22;
      (**ppcStack_88)(&ppcStack_88);
      *(undefined8 *)(param_1 + 0x60) = 0;
      lVar20 = *(long *)(*(long *)(param_1 + 0x10) + 0xe0);
      plVar22 = *(long **)(*(long *)(param_1 + 0x10) + 0xe8);
      if (plVar22 != (long *)0x0) {
        plVar8 = plVar22 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (lVar20 == 0) {
        lVar20 = 0;
      }
      else {
        ___dynamic_cast(lVar20,&PTR_DAT_110c5efc0,&PTR_DAT_110c674a8,0);
      }
      if (plVar22 != (long *)0x0) {
        plVar8 = plVar22 + 1;
        do {
          lVar19 = *plVar8;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
        }
      }
      if (lVar20 == 0) {
        (**(code **)(*ppcVar11 + 0x148))(*(undefined4 *)(param_1 + 0x44),ppcVar11);
        if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
          uVar17 = (uint)*(byte *)(param_1 + 0x91);
        }
        else {
          uVar17 = 1;
        }
        ppuVar13 = (undefined **)(ulong)(uVar17 & 1);
        FUN_10a41cca8(ppcVar11);
        FUN_10a41ce08(*(undefined4 *)(param_1 + 0x54),ppcVar11);
      }
      else {
        (**(code **)(*ppcVar11 + 0x148))(0x3f800000,ppcVar11);
        FUN_10a41ce08(0x3f800000,ppcVar11);
        ppuVar13 = (code **)0x1;
        FUN_10a41cca8(ppcVar11);
        *(long *)(param_1 + 0x60) = lVar20;
      }
      ppcVar10 = *(code ***)(param_1 + 0x80);
      func_0x00010a3a0eb8(ppcVar10);
      if (*(char *)(*(long *)(param_1 + -0x80) + 0xe2a) == '\x01') {
        (**(code **)(*ppcVar11 + 0x168))(ppcVar11);
        ppcVar10 = ppcVar11;
      }
      if (param_2 != (code **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
        ppcVar10 = param_2;
        __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
      }
    }
LAB_10a41cb38:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return ppcVar10;
    }
  }
  else {
    ppcVar10 = *(code ***)(pcVar18 + 0xe0);
    ppcVar7 = *(code ***)(pcVar18 + 0xe8);
    if (ppcVar7 != (code **)0x0) {
      ppcVar9 = ppcVar7 + 1;
      do {
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppcVar9,0x10);
        if (bVar6) {
          *ppcVar9 = *ppcVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (ppcVar10 == (code **)0x0) {
      bVar6 = false;
      ppuVar13 = param_2;
    }
    else {
      ppuVar13 = &PTR_DAT_110c5efc0;
      ___dynamic_cast(ppcVar10,&PTR_DAT_110c5efc0,&PTR_DAT_110c67490,0);
      bVar6 = ppcVar10 != (code **)0x0;
    }
    if (ppcVar7 != (code **)0x0) {
      ppcVar9 = ppcVar7 + 1;
      do {
        pcVar18 = *ppcVar9;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppcVar9,0x10);
        if (bVar3) {
          *ppcVar9 = pcVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (pcVar18 == (code *)0x0) {
        (**(code **)(*ppcVar7 + 0x10))(ppcVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppcVar7);
        ppcVar10 = ppcVar7;
      }
    }
    if (!bVar6) goto LAB_10a41c4c4;
    if ((bRam000000011330a9e8 >> 1 & 1) == 0) goto LAB_10a41cb38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      puVar15 = &UNK_10f656d6e;
      uVar12 = 2;
      uVar14 = 0x60;
      puVar5 = (undefined8 *)register0x00000008;
      puVar24 = unaff_x29;
      goto SUB_10ae06f08;
    }
  }
  ___stack_chk_fail();
LAB_10a41cb6c:
  ppcVar11 = (code **)&UNK_10f656c6c;
  FUN_10a00946c();
  if (param_2 != (code **)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_2);
  }
  __Unwind_Resume();
  pcVar25 = (code *)ppuVar13[1];
  pcVar18 = (code *)*ppuVar13;
  if ((code *)ppuVar13[1] != (code *)0x0) {
    pcVar21 = (code *)(ppuVar13[1] + 8);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar21,0x10);
      if (bVar6) {
        *(long *)pcVar21 = *(long *)pcVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  pcVar21 = ppcVar11[1];
  ppcVar11[1] = pcVar25;
  *ppcVar11 = pcVar18;
  if (pcVar21 != (code *)0x0) {
    pcVar18 = pcVar21 + 8;
    do {
      lVar20 = *(long *)pcVar18;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pcVar18,0x10);
      if (bVar6) {
        *(long *)pcVar18 = lVar20 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*(long *)pcVar21 + 0x10))(pcVar21);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar21);
    }
  }
  return ppcVar11;
}



/* Entry: 10a41d044; end: 10a41d0cb;  */

void FUN_10a41d044(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  uVar5 = *(undefined8 *)(param_1 + 0x270);
  FUN_10a41cef4(auStack_30,param_1);
  FUN_10a3a0d60(uVar5,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a41d0cc; end: 10a41d13b;  */

void FUN_10a41d0cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  uVar5 = *(undefined8 *)(param_1 + 0x208);
  FUN_10a41cef4(auStack_30,param_1 + -0x68);
  FUN_10a3a0d60(uVar5,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a41d13c; end: 10a41d42f;  */

void FUN_10a41d13c(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_70;
  float fStack_68;
  long lStack_60;
  long *plStack_58;
  
  if (*(long *)(param_5 + 0x238) == 0) {
    plVar3 = *(long **)(param_5 + 0x220);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41d3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x1a0))(plVar3,*(undefined8 *)(param_5 + 0x178));
      return;
    }
  }
  else {
    FUN_10ad1455c(*(undefined8 *)(*(long *)(param_5 + 0x238) + 0xb8));
    if (*(char *)(*(long *)(param_5 + 0x270) + 0x18) == '\x01') {
      lVar5 = *(long *)(*(long *)(param_5 + 0x238) + 200);
      plVar3 = *(long **)(*(long *)(param_5 + 0x238) + 0xd0);
      if (plVar3 != (long *)0x0) {
        plVar4 = plVar3 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_60 = lVar5;
      plStack_58 = plVar3;
      if (lVar5 != 0) {
        plVar4 = (long *)(*(long *)(*(long *)(param_5 + 0x170) + 0xb90) + 0x30);
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_10a41d388;
          lVar6 = plVar4[2];
        } while ((*(ushort *)(lVar6 + 0x180) & 0x17) != 0);
        FUN_10a2cd058(*(undefined8 *)(param_5 + 0x178));
        fVar8 = param_1;
        fVar12 = param_3;
        fVar13 = param_2;
        func_0x00010a2cd08c(*(undefined8 *)(param_5 + 0x178));
        fVar7 = fVar8;
        fVar9 = fVar13;
        fVar10 = fVar12;
        FUN_10a2cd058(*(undefined8 *)(lVar6 + 0x178));
        fVar11 = fVar12 * fVar8 + fVar13 * param_4;
        fVar12 = -(param_4 * fVar8) + fVar13 * fVar12;
        fVar13 = 0.5 - (fVar8 * fVar8 + fVar13 * fVar13);
        fVar11 = fVar11 + fVar11;
        fVar12 = fVar12 + fVar12;
        fVar13 = fVar13 + fVar13;
        fVar7 = fVar7 - param_1;
        fVar9 = fVar9 - param_2;
        fVar10 = fVar10 - param_3;
        fVar14 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13);
        fVar15 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9);
        fVar8 = 0.0;
        bVar2 = true;
        if ((1.1920929e-07 <= fVar14) && (bVar2 = false, !NAN(fVar15))) {
          bVar2 = fVar15 < 1.1920929e-07;
        }
        if (!bVar2) {
          fVar8 = (fVar13 * fVar10 + fVar11 * fVar7 + fVar12 * fVar9) / (fVar14 * fVar15);
          fVar7 = -1.0;
          if (-1.0 <= fVar8) {
            fVar7 = fVar8;
          }
          fVar8 = 1.0;
          if (fVar7 <= 1.0) {
            fVar8 = fVar7;
          }
          _acosf();
        }
        lVar6 = *(long *)(lVar6 + 0x178);
        if ((*(byte *)(lVar6 + 0x2a) >> 6 & 1) != 0) {
          func_0x00010a3e933c(lVar6);
        }
        fStack_68 = param_1 * *(float *)(lVar6 + 0x108) + param_2 * *(float *)(lVar6 + 0x118) +
                    param_3 * *(float *)(lVar6 + 0x128) + *(float *)(lVar6 + 0x138);
        uStack_70 = CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x100) >> 0x20) * param_1 +
                             (float)((ulong)*(undefined8 *)(lVar6 + 0x110) >> 0x20) * param_2 +
                             (float)((ulong)*(undefined8 *)(lVar6 + 0x120) >> 0x20) * param_3 +
                             (float)((ulong)*(undefined8 *)(lVar6 + 0x130) >> 0x20),
                             (float)*(undefined8 *)(lVar6 + 0x100) * param_1 +
                             (float)*(undefined8 *)(lVar6 + 0x110) * param_2 +
                             (float)*(undefined8 *)(lVar6 + 0x120) * param_3 +
                             (float)*(undefined8 *)(lVar6 + 0x130));
        FUN_10ad1f0a4((float)*(double *)(*(long *)(*(long *)(param_5 + 0x170) + 0x850) + 0x10),lVar5
                      ,&uStack_70);
        if (*(char *)(lVar5 + 0x5883) == '\x01') {
          *(float *)(lVar5 + 0x3c) = fVar8;
          fVar7 = *(float *)(lVar5 + 0x34);
          _cosf();
          fVar8 = (fVar8 * fVar7 + 1.0) / (fVar7 + 1.0);
          _powf(fVar8,*(undefined4 *)(lVar5 + 0x38));
          *(float *)(lVar5 + 0x30) = fVar8;
        }
      }
LAB_10a41d388:
      if (plVar3 != (long *)0x0) {
        plVar4 = plVar3 + 1;
        do {
          lVar5 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
  }
  return;
}



/* Entry: 10a41d430; end: 10a41d437;  */

void FUN_10a41d430(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_70;
  float fStack_68;
  long lStack_60;
  long *plStack_58;
  
  if (*(long *)(param_5 + 0x1d0) == 0) {
    plVar3 = *(long **)(param_5 + 0x1b8);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41d3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x1a0))(plVar3,*(undefined8 *)(param_5 + 0x110));
      return;
    }
  }
  else {
    FUN_10ad1455c(*(undefined8 *)(*(long *)(param_5 + 0x1d0) + 0xb8));
    if (*(char *)(*(long *)(param_5 + 0x208) + 0x18) == '\x01') {
      lVar5 = *(long *)(*(long *)(param_5 + 0x1d0) + 200);
      plVar3 = *(long **)(*(long *)(param_5 + 0x1d0) + 0xd0);
      if (plVar3 != (long *)0x0) {
        plVar4 = plVar3 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      lStack_60 = lVar5;
      plStack_58 = plVar3;
      if (lVar5 != 0) {
        plVar4 = (long *)(*(long *)(*(long *)(param_5 + 0x108) + 0xb90) + 0x30);
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_10a41d388;
          lVar6 = plVar4[2];
        } while ((*(ushort *)(lVar6 + 0x180) & 0x17) != 0);
        FUN_10a2cd058(*(undefined8 *)(param_5 + 0x110));
        fVar8 = param_1;
        fVar12 = param_3;
        fVar13 = param_2;
        func_0x00010a2cd08c(*(undefined8 *)(param_5 + 0x110));
        fVar7 = fVar8;
        fVar9 = fVar13;
        fVar10 = fVar12;
        FUN_10a2cd058(*(undefined8 *)(lVar6 + 0x178));
        fVar11 = fVar12 * fVar8 + fVar13 * param_4;
        fVar12 = -(param_4 * fVar8) + fVar13 * fVar12;
        fVar13 = 0.5 - (fVar8 * fVar8 + fVar13 * fVar13);
        fVar11 = fVar11 + fVar11;
        fVar12 = fVar12 + fVar12;
        fVar13 = fVar13 + fVar13;
        fVar7 = fVar7 - param_1;
        fVar9 = fVar9 - param_2;
        fVar10 = fVar10 - param_3;
        fVar14 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13);
        fVar15 = SQRT(fVar10 * fVar10 + fVar7 * fVar7 + fVar9 * fVar9);
        fVar8 = 0.0;
        bVar2 = true;
        if ((1.1920929e-07 <= fVar14) && (bVar2 = false, !NAN(fVar15))) {
          bVar2 = fVar15 < 1.1920929e-07;
        }
        if (!bVar2) {
          fVar8 = (fVar13 * fVar10 + fVar11 * fVar7 + fVar12 * fVar9) / (fVar14 * fVar15);
          fVar7 = -1.0;
          if (-1.0 <= fVar8) {
            fVar7 = fVar8;
          }
          fVar8 = 1.0;
          if (fVar7 <= 1.0) {
            fVar8 = fVar7;
          }
          _acosf();
        }
        lVar6 = *(long *)(lVar6 + 0x178);
        if ((*(byte *)(lVar6 + 0x2a) >> 6 & 1) != 0) {
          func_0x00010a3e933c(lVar6);
        }
        fStack_68 = param_1 * *(float *)(lVar6 + 0x108) + param_2 * *(float *)(lVar6 + 0x118) +
                    param_3 * *(float *)(lVar6 + 0x128) + *(float *)(lVar6 + 0x138);
        uStack_70 = CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0x100) >> 0x20) * param_1 +
                             (float)((ulong)*(undefined8 *)(lVar6 + 0x110) >> 0x20) * param_2 +
                             (float)((ulong)*(undefined8 *)(lVar6 + 0x120) >> 0x20) * param_3 +
                             (float)((ulong)*(undefined8 *)(lVar6 + 0x130) >> 0x20),
                             (float)*(undefined8 *)(lVar6 + 0x100) * param_1 +
                             (float)*(undefined8 *)(lVar6 + 0x110) * param_2 +
                             (float)*(undefined8 *)(lVar6 + 0x120) * param_3 +
                             (float)*(undefined8 *)(lVar6 + 0x130));
        FUN_10ad1f0a4((float)*(double *)(*(long *)(*(long *)(param_5 + 0x108) + 0x850) + 0x10),lVar5
                      ,&uStack_70);
        if (*(char *)(lVar5 + 0x5883) == '\x01') {
          *(float *)(lVar5 + 0x3c) = fVar8;
          fVar7 = *(float *)(lVar5 + 0x34);
          _cosf();
          fVar8 = (fVar8 * fVar7 + 1.0) / (fVar7 + 1.0);
          _powf(fVar8,*(undefined4 *)(lVar5 + 0x38));
          *(float *)(lVar5 + 0x30) = fVar8;
        }
      }
LAB_10a41d388:
      if (plVar3 != (long *)0x0) {
        plVar4 = plVar3 + 1;
        do {
          lVar5 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
  }
  return;
}



/* Entry: 10a41d438; end: 10a41d57b;  */

void FUN_10a41d438(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 auStack_40 [2];
  char cStack_29;
  char cStack_28;
  
  if (*(int *)(*(long *)(param_1[0x2e] + 0x100) + 0x2a8) - 7U < 2) {
    if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
      return;
    }
    FUN_10ae06f30(1,2,&UNK_10f656cc0,&UNK_10f656deb,0xff,&UNK_10f656e2d,&stack0x00000000);
    return;
  }
  plVar13 = param_1;
  FUN_10a41d57c(auStack_40);
  if (cStack_28 == '\x01') {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_58,&UNK_10f656e69,auStack_40);
    FUN_10a0029c0(auStack_58);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a41d530);
    (*pcVar6)();
  }
  if (param_1[0x47] != 0) {
    FUN_10ad13c80(*(undefined8 *)(param_1[0x47] + 0xb8));
    return;
  }
  plVar7 = (long *)param_1[0x44];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x1a0))(plVar7,param_1[0x2f]);
    (**(code **)(*(long *)param_1[0x44] + 0x128))((long *)param_1[0x44],param_2);
    return;
  }
  puVar8 = &UNK_10f656fd4;
  FUN_10a00946c();
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if ((cStack_28 == '\x01') && (cStack_29 < '\0')) {
    __ZdlPv(auStack_40[0]);
  }
  __Unwind_Resume();
  lVar14 = plVar13[0x4a];
  if ((lVar14 == 0) || (plVar7 = plVar13, (**(code **)(*plVar13 + 0x120))(), (int)plVar7 == 0)) {
    if (plVar13[0x47] != 0) {
      lVar9 = plVar13[0x2e] + 0xd48;
      FUN_10a5aeb74(lVar9,&PTR_DAT_110c674a8);
      if (*(long *)(lVar9 + 8) != lVar9) {
        puVar10 = &UNK_10f656f14;
        goto LAB_10a41d6fc;
      }
    }
    lVar9 = plVar13[0x2e] + 0xd48;
    FUN_10a5aeb74(lVar9,&PTR_DAT_110bd7828);
    lVar15 = *(long *)(lVar9 + 8);
    if (lVar15 == lVar9) {
LAB_10a41d70c:
      uVar11 = 0;
      *puVar8 = 0;
      goto LAB_10a41d714;
    }
    bVar4 = 0;
    bVar16 = false;
    do {
      plVar13 = *(long **)(lVar15 + 0x28);
      bVar5 = bVar4;
      if ((plVar13[0x44] != 0) &&
         (plVar7 = plVar13, (**(code **)(*plVar13 + 0x120))(), (int)plVar7 != 0)) {
        (**(code **)(*plVar13 + 0xf8))(&plStack_c0,plVar13);
        if ((plStack_c0 == (long *)0x0) ||
           (plVar13 = plStack_c0, (**(code **)(*plStack_c0 + 0x90))(),
           (*(byte *)((long)plVar13 + 0x4c) & 1) == 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
          bVar16 = true;
        }
        plVar13 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar7 = plStack_b8 + 1;
          do {
            lVar12 = *plVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = lVar12 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        bVar4 = 1;
        bVar5 = 1;
        if (!bVar3) break;
      }
      bVar4 = bVar5;
      lVar15 = *(long *)(lVar15 + 8);
    } while (lVar15 != lVar9);
    if (bVar16) {
      puVar10 = &UNK_10f656f5a;
    }
    else {
      if ((bool)(lVar14 == 0 | bVar4 ^ 1)) goto LAB_10a41d70c;
      puVar10 = &UNK_10f656f94;
    }
  }
  else {
    puVar10 = &UNK_10f656ef2;
  }
LAB_10a41d6fc:
  func_0x000107c2b054(puVar8,puVar10);
  uVar11 = 1;
LAB_10a41d714:
  puVar8[0x18] = uVar11;
  return;
}



/* Entry: 10a41d57c; end: 10a41d747;  */

void FUN_10a41d57c(undefined1 *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined1 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  long *plStack_60;
  long *plStack_58;
  
  lVar12 = param_2[0x4a];
  if ((lVar12 == 0) || (plVar11 = param_2, (**(code **)(*param_2 + 0x120))(), (int)plVar11 == 0)) {
    if (param_2[0x47] != 0) {
      lVar6 = param_2[0x2e] + 0xd48;
      FUN_10a5aeb74(lVar6,&PTR_DAT_110c674a8);
      if (*(long *)(lVar6 + 8) != lVar6) {
        puVar8 = &UNK_10f656f14;
        goto LAB_10a41d6fc;
      }
    }
    lVar6 = param_2[0x2e] + 0xd48;
    FUN_10a5aeb74(lVar6,&PTR_DAT_110bd7828);
    lVar13 = *(long *)(lVar6 + 8);
    if (lVar13 == lVar6) {
LAB_10a41d70c:
      uVar9 = 0;
      *param_1 = 0;
      goto LAB_10a41d714;
    }
    bVar4 = 0;
    bVar14 = false;
    do {
      plVar11 = *(long **)(lVar13 + 0x28);
      bVar5 = bVar4;
      if ((plVar11[0x44] != 0) &&
         (plVar7 = plVar11, (**(code **)(*plVar11 + 0x120))(), (int)plVar7 != 0)) {
        (**(code **)(*plVar11 + 0xf8))(&plStack_60,plVar11);
        if ((plStack_60 == (long *)0x0) ||
           (plVar11 = plStack_60, (**(code **)(*plStack_60 + 0x90))(),
           (*(byte *)((long)plVar11 + 0x4c) & 1) == 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
          bVar14 = true;
        }
        plVar11 = plStack_58;
        if (plStack_58 != (long *)0x0) {
          plVar7 = plStack_58 + 1;
          do {
            lVar10 = *plVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = lVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          }
        }
        bVar4 = 1;
        bVar5 = 1;
        if (!bVar3) break;
      }
      bVar4 = bVar5;
      lVar13 = *(long *)(lVar13 + 8);
    } while (lVar13 != lVar6);
    if (bVar14) {
      puVar8 = &UNK_10f656f5a;
    }
    else {
      if ((bool)(lVar12 == 0 | bVar4 ^ 1)) goto LAB_10a41d70c;
      puVar8 = &UNK_10f656f94;
    }
  }
  else {
    puVar8 = &UNK_10f656ef2;
  }
LAB_10a41d6fc:
  func_0x000107c2b054(param_1,puVar8);
  uVar9 = 1;
LAB_10a41d714:
  param_1[0x18] = uVar9;
  return;
}



/* Entry: 10a41d748; end: 10a41d74f;  */

void FUN_10a41d748(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  undefined1 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 auStack_40 [2];
  char cStack_29;
  char cStack_28;
  
  plVar10 = (long *)(param_1 + -0x1f0);
  if (*(int *)(*(long *)(*(long *)(param_1 + -0x80) + 0x100) + 0x2a8) - 7U < 2) {
    if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
      return;
    }
    FUN_10ae06f30(1,2,&UNK_10f656cc0,&UNK_10f656deb,0xff,&UNK_10f656e2d,&stack0x00000000);
    return;
  }
  FUN_10a41d57c(auStack_40);
  if (cStack_28 == '\x01') {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_58,&UNK_10f656e69,auStack_40);
    FUN_10a0029c0(auStack_58);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a41d530);
    (*pcVar6)();
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10ad13c80(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0xb8));
    return;
  }
  plVar7 = *(long **)(param_1 + 0x30);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x1a0))(plVar7,*(undefined8 *)(param_1 + -0x78));
    (**(code **)(**(long **)(param_1 + 0x30) + 0x128))(*(long **)(param_1 + 0x30),param_2);
    return;
  }
  puVar8 = &UNK_10f656fd4;
  FUN_10a00946c();
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  if ((cStack_28 == '\x01') && (cStack_29 < '\0')) {
    __ZdlPv(auStack_40[0]);
  }
  __Unwind_Resume();
  lVar14 = plVar10[0x4a];
  if ((lVar14 == 0) || (plVar7 = plVar10, (**(code **)(*plVar10 + 0x120))(), (int)plVar7 == 0)) {
    if (plVar10[0x47] != 0) {
      lVar9 = plVar10[0x2e] + 0xd48;
      FUN_10a5aeb74(lVar9,&PTR_DAT_110c674a8);
      if (*(long *)(lVar9 + 8) != lVar9) {
        puVar11 = &UNK_10f656f14;
        goto LAB_10a41d6fc;
      }
    }
    lVar9 = plVar10[0x2e] + 0xd48;
    FUN_10a5aeb74(lVar9,&PTR_DAT_110bd7828);
    lVar15 = *(long *)(lVar9 + 8);
    if (lVar15 == lVar9) {
LAB_10a41d70c:
      uVar12 = 0;
      *puVar8 = 0;
      goto LAB_10a41d714;
    }
    bVar4 = 0;
    bVar16 = false;
    do {
      plVar10 = *(long **)(lVar15 + 0x28);
      bVar5 = bVar4;
      if ((plVar10[0x44] != 0) &&
         (plVar7 = plVar10, (**(code **)(*plVar10 + 0x120))(), (int)plVar7 != 0)) {
        (**(code **)(*plVar10 + 0xf8))(&plStack_c0,plVar10);
        if ((plStack_c0 == (long *)0x0) ||
           (plVar10 = plStack_c0, (**(code **)(*plStack_c0 + 0x90))(),
           (*(byte *)((long)plVar10 + 0x4c) & 1) == 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
          bVar16 = true;
        }
        plVar10 = plStack_b8;
        if (plStack_b8 != (long *)0x0) {
          plVar7 = plStack_b8 + 1;
          do {
            lVar13 = *plVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = lVar13 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        bVar4 = 1;
        bVar5 = 1;
        if (!bVar3) break;
      }
      bVar4 = bVar5;
      lVar15 = *(long *)(lVar15 + 8);
    } while (lVar15 != lVar9);
    if (bVar16) {
      puVar11 = &UNK_10f656f5a;
    }
    else {
      if ((bool)(lVar14 == 0 | bVar4 ^ 1)) goto LAB_10a41d70c;
      puVar11 = &UNK_10f656f94;
    }
  }
  else {
    puVar11 = &UNK_10f656ef2;
  }
LAB_10a41d6fc:
  func_0x000107c2b054(puVar8,puVar11);
  uVar12 = 1;
LAB_10a41d714:
  puVar8[0x18] = uVar12;
  return;
}



/* Entry: 10a41d750; end: 10a41d787;  */

void FUN_10a41d750(undefined *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar8;
  long *plVar9;
  undefined8 unaff_x22;
  undefined8 *puVar10;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  for (; *(long *)(param_1 + 0x238) == 0; param_1 = param_1 + -0x1f0) {
    if (*(long **)(param_1 + 0x220) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41d770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x220) + 0x140))();
      return;
    }
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    param_1 = &UNK_10f656fd4;
    unaff_x30 = FUN_10a41d788;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar2;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x238) + 0xb8);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = *(undefined8 **)(lVar3 + 0x2138);
  uVar8 = *puVar10;
  __ZNSt3__15mutex4lockEv(uVar8);
  *(undefined1 *)(puVar10[2] + 0x10) = 0;
  __ZNSt3__15mutex6unlockEv();
  if ((int)param_2 == 0) {
    lVar6 = lVar3 + 0x10;
    plVar9 = *(long **)(lVar3 + 0x20);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x18;
      __Znwm();
      *plVar9 = lVar3;
      plVar9[2] = 0x10ad15c4c;
      *(code **)((long)register0x00000008 + -0x48) = FUN_10ad15bf4;
      *(long **)((long)register0x00000008 + -0x40) = plVar9;
      *(long *)((long)register0x00000008 + -0x38) = lVar6;
      (*(code *)**(undefined8 **)(lVar3 + 0x10))
                (lVar6,(undefined1 *)((long)register0x00000008 + -0x48));
    }
    else {
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      (**(code **)(*plVar9 + 0x28))(plVar9,0,(undefined1 *)((long)register0x00000008 + -0x50));
      if (*(long *)((long)register0x00000008 + -0x50) != 0) {
        func_0x0001092af97c((undefined1 *)((long)register0x00000008 + -0x50));
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad13f6c);
        (*pcVar1)();
      }
      plVar4 = (long *)0x20;
      __Znwm();
      *plVar4 = lVar3;
      plVar4[2] = (long)FUN_10ad15c40;
      plVar4[3] = (long)plVar9;
      *(code **)((long)register0x00000008 + -0x48) = FUN_10ad15bc4;
      *(long **)((long)register0x00000008 + -0x40) = plVar4;
      *(long *)((long)register0x00000008 + -0x38) = lVar6;
      (*(code *)**(undefined8 **)(lVar3 + 0x10))
                (lVar6,(undefined1 *)((long)register0x00000008 + -0x48));
      __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x50));
    }
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x50));
    uVar5 = 0;
    lVar6 = 0x221a;
    lVar7 = 0x2219;
  }
  else {
    *(undefined4 *)(lVar3 + 0x2204) = *(undefined4 *)(lVar3 + 0x2220);
    *(undefined4 *)(lVar3 + 0x2208) = 0;
    *(undefined4 *)(lVar3 + 0x220c) = *(undefined4 *)(lVar3 + 0x2220);
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(undefined8 *)(lVar3 + 0x21f0) = uVar8;
    uVar5 = 1;
    lVar6 = 0x21fa;
    lVar7 = 0x21f9;
  }
  *(undefined1 *)(lVar3 + lVar7) = 0;
  *(undefined1 *)(lVar3 + lVar6) = uVar5;
  return;
}



/* Entry: 10a41d788; end: 10a41d78f;  */

void FUN_10a41d788(undefined *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar8;
  long *plVar9;
  undefined8 unaff_x22;
  undefined8 *puVar10;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while (*(long *)(param_1 + 0x48) == 0) {
    if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41d770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x140))();
      return;
    }
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    param_1 = &UNK_10f656fd4;
    unaff_x30 = FUN_10a41d788;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar2;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0xb8);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = *(undefined8 **)(lVar3 + 0x2138);
  uVar8 = *puVar10;
  __ZNSt3__15mutex4lockEv(uVar8);
  *(undefined1 *)(puVar10[2] + 0x10) = 0;
  __ZNSt3__15mutex6unlockEv();
  if ((int)param_2 == 0) {
    lVar6 = lVar3 + 0x10;
    plVar9 = *(long **)(lVar3 + 0x20);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x18;
      __Znwm();
      *plVar9 = lVar3;
      plVar9[2] = 0x10ad15c4c;
      *(code **)((long)register0x00000008 + -0x48) = FUN_10ad15bf4;
      *(long **)((long)register0x00000008 + -0x40) = plVar9;
      *(long *)((long)register0x00000008 + -0x38) = lVar6;
      (*(code *)**(undefined8 **)(lVar3 + 0x10))
                (lVar6,(undefined1 *)((long)register0x00000008 + -0x48));
    }
    else {
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
      (**(code **)(*plVar9 + 0x28))(plVar9,0,(undefined1 *)((long)register0x00000008 + -0x50));
      if (*(long *)((long)register0x00000008 + -0x50) != 0) {
        func_0x0001092af97c((undefined1 *)((long)register0x00000008 + -0x50));
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad13f6c);
        (*pcVar1)();
      }
      plVar4 = (long *)0x20;
      __Znwm();
      *plVar4 = lVar3;
      plVar4[2] = (long)FUN_10ad15c40;
      plVar4[3] = (long)plVar9;
      *(code **)((long)register0x00000008 + -0x48) = FUN_10ad15bc4;
      *(long **)((long)register0x00000008 + -0x40) = plVar4;
      *(long *)((long)register0x00000008 + -0x38) = lVar6;
      (*(code *)**(undefined8 **)(lVar3 + 0x10))
                (lVar6,(undefined1 *)((long)register0x00000008 + -0x48));
      __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x50));
    }
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    __ZNSt13exception_ptrD1Ev((undefined1 *)((long)register0x00000008 + -0x50));
    uVar5 = 0;
    lVar6 = 0x221a;
    lVar7 = 0x2219;
  }
  else {
    *(undefined4 *)(lVar3 + 0x2204) = *(undefined4 *)(lVar3 + 0x2220);
    *(undefined4 *)(lVar3 + 0x2208) = 0;
    *(undefined4 *)(lVar3 + 0x220c) = *(undefined4 *)(lVar3 + 0x2220);
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(undefined8 *)(lVar3 + 0x21f0) = uVar8;
    uVar5 = 1;
    lVar6 = 0x21fa;
    lVar7 = 0x21f9;
  }
  *(undefined1 *)(lVar3 + lVar7) = 0;
  *(undefined1 *)(lVar3 + lVar6) = uVar5;
  return;
}



/* Entry: 10a41d790; end: 10a41d7f3;  */

undefined8 FUN_10a41d790(long param_1)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 0x238) == 0) {
    if (*(long **)(param_1 + 0x220) == (long *)0x0) {
      puVar1 = &UNK_10f656fd4;
      FUN_10a00946c(&UNK_10f656fd4);
      FUN_10a41d790(puVar1 + -0x1f0);
      return 0;
    }
    (**(code **)(**(long **)(param_1 + 0x220) + 0x130))();
  }
  else {
    FUN_10ad13f84(*(undefined8 *)(*(long *)(param_1 + 0x238) + 0xb8));
  }
  return 0;
}



/* Entry: 10a41d7f4; end: 10a41d8c7;  */

undefined8 FUN_10a41d7f4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 auStack_40 [2];
  char cStack_29;
  char cStack_28;
  
  FUN_10a41d57c(auStack_40,param_1);
  if (cStack_28 == '\x01') {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_58,&UNK_10f656e69,auStack_40);
    FUN_10a0029c0(auStack_58);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41d87c);
    (*pcVar1)();
  }
  if (*(long *)(param_1 + 0x238) == 0) {
    if (*(long **)(param_1 + 0x220) == (long *)0x0) {
      puVar2 = &UNK_10f656fd4;
      FUN_10a00946c(&UNK_10f656fd4);
      if (cStack_41 < '\0') {
        __ZdlPv(auStack_58[0]);
      }
      if ((cStack_28 == '\x01') && (cStack_29 < '\0')) {
        __ZdlPv(auStack_40[0]);
      }
      __Unwind_Resume(puVar2);
      FUN_10a41d7f4(puVar2 + -0x1f0);
      return 0;
    }
    (**(code **)(**(long **)(param_1 + 0x220) + 0x138))();
  }
  else {
    FUN_10ad140ac(*(undefined8 *)(*(long *)(param_1 + 0x238) + 0xb8));
  }
  return 0;
}



/* Entry: 10a41d8c8; end: 10a41d91b;  */

undefined8 FUN_10a41d8c8(long param_1)

{
  FUN_10a41d7f4(param_1 + -0x1f0);
  return 0;
}



/* Entry: 10a41d91c; end: 10a41d923;  */

void FUN_10a41d91c(undefined *param_1)

{
  undefined1 *puVar1;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(long *)(param_1 + 0x48) == 0) {
      if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41d908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x160))();
        return;
      }
    }
    else {
      FUN_10a14efe0();
    }
    param_1 = &UNK_10f656fd4;
    unaff_x30 = FUN_10a41d91c;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar1;
  } while( true );
}



/* Entry: 10a41d924; end: 10a41d95b;  */

void FUN_10a41d924(undefined *param_1)

{
  undefined1 *puVar1;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(long *)(param_1 + 0x238) == 0) {
      if (*(long **)(param_1 + 0x220) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41d948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x220) + 0x158))();
        return;
      }
    }
    else {
      FUN_10a14efe0();
    }
    param_1 = &UNK_10f656fd4;
    unaff_x30 = FUN_10a41d95c;
    FUN_10a00946c();
    param_1 = param_1 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar1;
  } while( true );
}



/* Entry: 10a41d95c; end: 10a41d9d3;  */

void FUN_10a41d95c(undefined *param_1)

{
  undefined1 *puVar1;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(long *)(param_1 + 0x48) == 0) {
      if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41d948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x158))();
        return;
      }
    }
    else {
      FUN_10a14efe0();
    }
    param_1 = &UNK_10f656fd4;
    unaff_x30 = FUN_10a41d95c;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar1;
  } while( true );
}



/* Entry: 10a41d9d4; end: 10a41da13;  */

long * FUN_10a41d9d4(undefined *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    if (*(long *)(param_1 + 0x238) != 0) {
      return (long *)(ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x238) + 0xb8) + 0x221a);
    }
    plVar2 = *(long **)(param_1 + 0x220);
    if (plVar2 != (long *)0x0) break;
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    param_1 = &UNK_10f656fd4;
    unaff_x30 = FUN_10a41da14;
    FUN_10a00946c();
    param_1 = param_1 + -0x1f0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a41d9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x178))();
  return plVar2;
}



/* Entry: 10a41da14; end: 10a41da77;  */

long * FUN_10a41da14(undefined *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    if (*(long *)(param_1 + 0x48) != 0) {
      return (long *)(ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0xb8) + 0x221a);
    }
    plVar2 = *(long **)(param_1 + 0x30);
    if (plVar2 != (long *)0x0) break;
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    param_1 = &UNK_10f656fd4;
    unaff_x30 = FUN_10a41da14;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a41d9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x178))();
  return plVar2;
}



/* Entry: 10a41da78; end: 10a41dadf;  */

void FUN_10a41da78(undefined *param_1)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  undefined1 *apuStack_50 [5];
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  FUN_10a14efe0();
  uStack_18 = 0x10a41da84;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10a14efe0();
  uStack_28 = 0x10a41da90;
  apuStack_50[4] = (undefined1 *)&puStack_20;
  FUN_10a14efe0();
  apuStack_50[3] = (undefined1 *)0x10a41da9c;
  pcVar2 = (code *)0x10a41daa8;
  apuStack_50[2] = (undefined1 *)(apuStack_50 + 4);
  FUN_10a14efe0();
  ppuVar1 = apuStack_50 + 2;
  do {
    *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar1;
    *(code **)((long)ppuVar1 + -8) = pcVar2;
    if (*(long *)(param_1 + 0x238) == 0) {
      if (*(long **)(param_1 + 0x220) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41dacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x220) + 0x168))();
        return;
      }
    }
    else {
      FUN_10a14efe0();
    }
    param_1 = &UNK_10f656fd4;
    pcVar2 = FUN_10a41dae0;
    FUN_10a00946c();
    param_1 = param_1 + -0x1f0;
    ppuVar1 = (undefined1 **)((long)ppuVar1 + -0x10);
  } while( true );
}



/* Entry: 10a41dae0; end: 10a41dae7;  */

void FUN_10a41dae0(undefined *param_1)

{
  undefined1 *puVar1;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar1 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (*(long *)(param_1 + 0x48) == 0) {
      if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41dacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x30) + 0x168))();
        return;
      }
    }
    else {
      FUN_10a14efe0();
    }
    param_1 = &UNK_10f656fd4;
    unaff_x30 = FUN_10a41dae0;
    FUN_10a00946c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x10);
    unaff_x29 = puVar1;
  } while( true );
}



/* Entry: 10a41dae8; end: 10a41dc3b;  */

/* WARNING: Possible PIC construction at 0x00010a41dba4: Changing call to branch */

void FUN_10a41dae8(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *unaff_x29;
  undefined1 *puVar8;
  undefined8 unaff_x30;
  long lStack_30;
  long *plStack_28;
  
  plVar3 = &lStack_30;
  puVar8 = &stack0xfffffffffffffff0;
  plVar4 = (long *)param_1[0x44];
  if (plVar4 == (long *)0x0) {
    if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
  }
  else if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    (**(code **)(*plVar4 + 0x170))();
    if (((ulong)plVar4 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x50) = 1;
      if ((bRam000000011330a9e8 >> 3 & 1) == 0) {
        plStack_28 = (long *)param_1[0x41];
        lStack_30 = param_1[0x40];
        if (param_1[0x41] != 0) {
          plVar3 = (long *)(param_1[0x41] + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = *plVar3 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        (**(code **)(*param_1 + 0xf0))(param_1,&lStack_30);
        plVar3 = plStack_28;
        if (plStack_28 == (long *)0x0) {
          return;
        }
        plVar4 = plStack_28 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 != 0) {
          return;
        }
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        return;
      }
      puVar6 = &UNK_10f657045;
      uVar5 = 0x2e2;
      unaff_x30 = 0x10a41dba8;
    }
    else {
      if ((bRam000000011330a9e8 >> 3 & 1) == 0) {
        return;
      }
      puVar6 = &UNK_10f657073;
      uVar5 = 0x2e5;
      plVar3 = (long *)register0x00000008;
      puVar8 = unaff_x29;
    }
    *(undefined1 **)((long)plVar3 + -0x10) = puVar8;
    *(undefined8 *)((long)plVar3 + -8) = unaff_x30;
    *(long **)((long)plVar3 + -0x18) = plVar3;
    FUN_10ae06f30(1,8,&UNK_10f656cc0,&UNK_10f657001,uVar5,puVar6,plVar3);
    return;
  }
  return;
}



/* Entry: 10a41dc3c; end: 10a41dc9b;  */

void FUN_10a41dc3c(long param_1)

{
  if (*(long **)(param_1 + 0x220) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41dc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x220) + 0x1b8))();
    return;
  }
  return;
}



/* Entry: 10a41dc9c; end: 10a41dd03;  */

void FUN_10a41dc9c(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (param_1[0x4a] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41dcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x108))();
    return;
  }
  func_0x000107c2b054(auStack_38,&DAT_10f3ac753);
  FUN_10a41dd04(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41dce8);
  (*pcVar1)();
}



/* Entry: 10a41dd04; end: 10a41dd4f;  */

void FUN_10a41dd04(undefined8 param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f6584d1,param_1);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41dd34);
  (*pcVar1)();
}



/* Entry: 10a41dd50; end: 10a41dd57;  */

void FUN_10a41dd50(long param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41dcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + -0x1f0) + 0x108))();
    return;
  }
  func_0x000107c2b054(auStack_38,&DAT_10f3ac753);
  FUN_10a41dd04(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41dce8);
  (*pcVar1)();
}



/* Entry: 10a41dd58; end: 10a41ddbf;  */

void FUN_10a41dd58(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (param_1[0x4a] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41dd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))();
    return;
  }
  func_0x000107c2b054(auStack_38,&UNK_10f656e7b);
  FUN_10a41dd04(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41dda4);
  (*pcVar1)();
}



/* Entry: 10a41ddc0; end: 10a41ddc7;  */

void FUN_10a41ddc0(long param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41dd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + -0x1f0) + 0x110))();
    return;
  }
  func_0x000107c2b054(auStack_38,&UNK_10f656e7b);
  FUN_10a41dd04(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41dda4);
  (*pcVar1)();
}



/* Entry: 10a41ddc8; end: 10a41de2f;  */

void FUN_10a41ddc8(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (param_1[0x4a] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41ddf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x118))();
    return;
  }
  func_0x000107c2b054(auStack_38,&UNK_10f656e81);
  FUN_10a41dd04(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41de14);
  (*pcVar1)();
}



/* Entry: 10a41de30; end: 10a41de37;  */

void FUN_10a41de30(long param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41ddf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + -0x1f0) + 0x118))();
    return;
  }
  func_0x000107c2b054(auStack_38,&UNK_10f656e81);
  FUN_10a41dd04(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41de14);
  (*pcVar1)();
}



/* Entry: 10a41de38; end: 10a41de9f;  */

void FUN_10a41de38(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (param_1[0x4a] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41de64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x138))();
    return;
  }
  func_0x000107c2b054(auStack_38,&UNK_10f656e88);
  FUN_10a41dd04(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41de84);
  (*pcVar1)();
}



/* Entry: 10a41dea0; end: 10a41dea7;  */

void FUN_10a41dea0(long param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41de64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + -0x1f0) + 0x138))();
    return;
  }
  func_0x000107c2b054(auStack_38,&UNK_10f656e88);
  FUN_10a41dd04(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41de84);
  (*pcVar1)();
}



/* Entry: 10a41dea8; end: 10a41df0f;  */

void FUN_10a41dea8(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (param_1[0x4a] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41ded4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x148))();
    return;
  }
  func_0x000107c2b054(auStack_38,&UNK_10f656e99);
  FUN_10a41dd04(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41def4);
  (*pcVar1)();
}



/* Entry: 10a41df10; end: 10a41df17;  */

void FUN_10a41df10(long param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41ded4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + -0x1f0) + 0x148))();
    return;
  }
  func_0x000107c2b054(auStack_38,&UNK_10f656e99);
  FUN_10a41dd04(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41def4);
  (*pcVar1)();
}



/* Entry: 10a41df18; end: 10a41dfd7;  */

/* WARNING: Possible PIC construction at 0x00010a41dba4: Changing call to branch */

void FUN_10a41df18(float param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 ****ppppuVar13;
  code *pcVar14;
  undefined4 uVar15;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char cStack_d8;
  undefined8 ***pppuStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 **ppuStack_50;
  code *pcStack_48;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (*(long *)(param_2 + 0x250) != 0) {
    func_0x000107c2b054(auStack_38,&UNK_10f656ea8);
    FUN_10a41dd04(auStack_38);
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x10a41dfb0);
    (*pcVar14)();
  }
  if (*(long *)(param_2 + 0x238) != 0) {
    lVar9 = *(long *)(*(long *)(param_2 + 0x238) + 0xb8);
    if (0.001 < param_1) {
      *(float *)(lVar9 + 0x21fc) = param_1;
    }
    *(bool *)(lVar9 + 0x21f8) = 0.001 < param_1;
    return;
  }
  if (*(long **)(param_2 + 0x220) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41df74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x220) + 0x180))();
    return;
  }
  puVar7 = &UNK_10f656fd4;
  FUN_10a00946c();
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  __Unwind_Resume();
  pcStack_48 = FUN_10a41dfd8;
  ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
  if (*(long *)(puVar7 + 0x250) != 0) {
    func_0x000107c2b054(auStack_78,&UNK_10f656eb0);
    FUN_10a41dd04(auStack_78);
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x10a41e058);
    (*pcVar14)();
  }
  if (*(long *)(puVar7 + 0x238) != 0) {
    if (param_1 <= 0.001) {
      param_1 = 0.001;
    }
    *(float *)(*(long *)(*(long *)(puVar7 + 0x238) + 0xb8) + 0x2200) = param_1;
    return;
  }
  if (*(long **)(puVar7 + 0x220) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41e038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(puVar7 + 0x220) + 400))();
    return;
  }
  plVar8 = (long *)&UNK_10f656fd4;
  FUN_10a00946c();
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  __Unwind_Resume();
  pcStack_88 = FUN_10a41e080;
  pppuStack_90 = &ppuStack_50;
  if (plVar8[0x4a] != 0) {
    func_0x000107c2b054(&stack0xffffffffffffff48,&UNK_10f656eb9);
    FUN_10a41dd04(&stack0xffffffffffffff48);
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x10a41e0c4);
    (*pcVar14)();
  }
  uVar2 = (undefined1)param_3;
  *(undefined1 *)(plVar8 + 0x48) = uVar2;
  if (plVar8[0x47] == 0) {
    FUN_10a3dd9ac(&uStack_e8,plVar8[0x2e]);
    uVar15 = 0x3f800000;
    if ((*(byte *)(plVar8 + 0x48) & 1) == 0) {
      uVar15 = NEON_ucvtf((uint)*(byte *)((long)plVar8 + 0x281));
    }
    FUN_10a7718b4(uVar15,uStack_e8,plVar8,0xb);
    FUN_10a7718b4(*(float *)(plVar8 + 0x49) * 100.0,uStack_e8,plVar8,0xc);
    if (cStack_d8 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_e0);
    }
    if (param_3 != 0) {
      puVar5 = &stack0xffffffffffffff50;
      ppppuVar13 = &pppuStack_90;
      plVar6 = (long *)plVar8[0x44];
      if (plVar6 == (long *)0x0) {
        if ((*(byte *)(plVar8 + 0x50) & 1) == 0) {
          *(undefined1 *)(plVar8 + 0x50) = 1;
        }
      }
      else if ((*(byte *)(plVar8 + 0x50) & 1) == 0) {
        (**(code **)(*plVar6 + 0x170))();
        if (((ulong)plVar6 & 1) == 0) {
          *(undefined1 *)(plVar8 + 0x50) = 1;
          if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
            puVar7 = &UNK_10f657045;
            uVar11 = 0x2e2;
            pcVar14 = (code *)0x10a41dba8;
            goto SUB_10ae06f08;
          }
          plVar6 = (long *)plVar8[0x41];
          if (plVar8[0x41] != 0) {
            plVar1 = (long *)(plVar8[0x41] + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = *plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          (**(code **)(*plVar8 + 0xf0))(plVar8,&stack0xffffffffffffff50);
          if (plVar6 != (long *)0x0) {
            plVar8 = plVar6 + 1;
            do {
              lVar9 = *plVar8;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
            }
          }
        }
        else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          puVar7 = &UNK_10f657073;
          uVar11 = 0x2e5;
          puVar5 = auStack_80;
          ppppuVar13 = (undefined8 ****)pppuStack_90;
          pcVar14 = pcStack_88;
SUB_10ae06f08:
          *(undefined8 *****)(puVar5 + -0x10) = ppppuVar13;
          *(code **)(puVar5 + -8) = pcVar14;
          *(undefined1 **)(puVar5 + -0x18) = puVar5;
          FUN_10ae06f30(1,8,&UNK_10f656cc0,&UNK_10f657001,uVar11,puVar7,puVar5);
          return;
        }
      }
      return;
    }
  }
  else {
    lVar9 = *(long *)(plVar8[0x47] + 0xb8);
    puVar12 = *(undefined8 **)(lVar9 + 0x2138);
    uVar11 = *puVar12;
    __ZNSt3__15mutex4lockEv(uVar11);
    *(undefined1 *)(puVar12[2] + 0x4020) = uVar2;
    __ZNSt3__15mutex6unlockEv(uVar11);
    *(undefined1 *)(lVar9 + 0x2218) = uVar2;
    lVar9 = plVar8[0x49];
    lVar10 = *(long *)(plVar8[0x47] + 0xb8);
    puVar12 = *(undefined8 **)(lVar10 + 0x2138);
    uVar11 = *puVar12;
    __ZNSt3__15mutex4lockEv(uVar11);
    *(int *)(puVar12[2] + 0x401c) = (int)lVar9;
    __ZNSt3__15mutex6unlockEv(uVar11);
    *(int *)(lVar10 + 0x221c) = (int)lVar9;
  }
  return;
}



/* Entry: 10a41dfd8; end: 10a41e07f;  */

/* WARNING: Possible PIC construction at 0x00010a41dba4: Changing call to branch */

void FUN_10a41dfd8(float param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 ****ppppuVar13;
  code *pcVar14;
  undefined4 uVar15;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  char cStack_98;
  undefined8 ***pppuStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [8];
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (*(long *)(param_2 + 0x250) != 0) {
    func_0x000107c2b054(auStack_38,&UNK_10f656eb0);
    FUN_10a41dd04(auStack_38);
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x10a41e058);
    (*pcVar14)();
  }
  if (*(long *)(param_2 + 0x238) != 0) {
    if (param_1 <= 0.001) {
      param_1 = 0.001;
    }
    *(float *)(*(long *)(*(long *)(param_2 + 0x238) + 0xb8) + 0x2200) = param_1;
    return;
  }
  if (*(long **)(param_2 + 0x220) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41e038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x220) + 400))();
    return;
  }
  plVar7 = (long *)&UNK_10f656fd4;
  FUN_10a00946c();
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  __Unwind_Resume();
  pcStack_48 = FUN_10a41e080;
  pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
  if (plVar7[0x4a] == 0) {
    uVar2 = (undefined1)param_3;
    *(undefined1 *)(plVar7 + 0x48) = uVar2;
    if (plVar7[0x47] == 0) {
      FUN_10a3dd9ac(&uStack_a8,plVar7[0x2e]);
      uVar15 = 0x3f800000;
      if ((*(byte *)(plVar7 + 0x48) & 1) == 0) {
        uVar15 = NEON_ucvtf((uint)*(byte *)((long)plVar7 + 0x281));
      }
      FUN_10a7718b4(uVar15,uStack_a8,plVar7,0xb);
      FUN_10a7718b4(*(float *)(plVar7 + 0x49) * 100.0,uStack_a8,plVar7,0xc);
      if (cStack_98 == '\x01') {
        __ZNSt3__15mutex6unlockEv(uStack_a0);
      }
      if (param_3 != 0) {
        puVar5 = &stack0xffffffffffffff90;
        ppppuVar13 = &pppuStack_50;
        plVar6 = (long *)plVar7[0x44];
        if (plVar6 == (long *)0x0) {
          if ((*(byte *)(plVar7 + 0x50) & 1) == 0) {
            *(undefined1 *)(plVar7 + 0x50) = 1;
          }
        }
        else if ((*(byte *)(plVar7 + 0x50) & 1) == 0) {
          (**(code **)(*plVar6 + 0x170))();
          if (((ulong)plVar6 & 1) == 0) {
            *(undefined1 *)(plVar7 + 0x50) = 1;
            if ((bRam000000011330a9e8 >> 3 & 1) == 0) {
              plVar6 = (long *)plVar7[0x41];
              if (plVar7[0x41] != 0) {
                plVar1 = (long *)(plVar7[0x41] + 8);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *plVar1 = *plVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              (**(code **)(*plVar7 + 0xf0))(plVar7,&stack0xffffffffffffff90);
              if (plVar6 == (long *)0x0) {
                return;
              }
              plVar7 = plVar6 + 1;
              do {
                lVar11 = *plVar7;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar4) {
                  *plVar7 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 != 0) {
                return;
              }
              (**(code **)(*plVar6 + 0x10))(plVar6);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              return;
            }
            puVar8 = &UNK_10f657045;
            uVar10 = 0x2e2;
            pcVar14 = (code *)0x10a41dba8;
          }
          else {
            if ((bRam000000011330a9e8 >> 3 & 1) == 0) {
              return;
            }
            puVar8 = &UNK_10f657073;
            uVar10 = 0x2e5;
            puVar5 = auStack_40;
            ppppuVar13 = (undefined8 ****)pppuStack_50;
            pcVar14 = pcStack_48;
          }
          *(undefined8 *****)(puVar5 + -0x10) = ppppuVar13;
          *(code **)(puVar5 + -8) = pcVar14;
          *(undefined1 **)(puVar5 + -0x18) = puVar5;
          FUN_10ae06f30(1,8,&UNK_10f656cc0,&UNK_10f657001,uVar10,puVar8,puVar5);
          return;
        }
        return;
      }
    }
    else {
      lVar11 = *(long *)(plVar7[0x47] + 0xb8);
      puVar12 = *(undefined8 **)(lVar11 + 0x2138);
      uVar10 = *puVar12;
      __ZNSt3__15mutex4lockEv(uVar10);
      *(undefined1 *)(puVar12[2] + 0x4020) = uVar2;
      __ZNSt3__15mutex6unlockEv(uVar10);
      *(undefined1 *)(lVar11 + 0x2218) = uVar2;
      lVar11 = plVar7[0x49];
      lVar9 = *(long *)(plVar7[0x47] + 0xb8);
      puVar12 = *(undefined8 **)(lVar9 + 0x2138);
      uVar10 = *puVar12;
      __ZNSt3__15mutex4lockEv(uVar10);
      *(int *)(puVar12[2] + 0x401c) = (int)lVar11;
      __ZNSt3__15mutex6unlockEv(uVar10);
      *(int *)(lVar9 + 0x221c) = (int)lVar11;
    }
    return;
  }
  func_0x000107c2b054(&stack0xffffffffffffff88,&UNK_10f656eb9);
  FUN_10a41dd04(&stack0xffffffffffffff88);
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10a41e0c4);
  (*pcVar14)();
}



/* Entry: 10a41e080; end: 10a41e0df;  */

/* WARNING: Possible PIC construction at 0x00010a41dba4: Changing call to branch */

void FUN_10a41e080(long *param_1,int param_2)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 *unaff_x29;
  undefined1 *puVar13;
  undefined8 unaff_x30;
  undefined4 uVar14;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  
  if (param_1[0x4a] != 0) {
    func_0x000107c2b054(&stack0xffffffffffffffc8,&UNK_10f656eb9);
    FUN_10a41dd04(&stack0xffffffffffffffc8);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a41e0c4);
    (*pcVar5)();
  }
  uVar2 = (undefined1)param_2;
  *(undefined1 *)(param_1 + 0x48) = uVar2;
  if (param_1[0x47] == 0) {
    FUN_10a3dd9ac(&uStack_68,param_1[0x2e]);
    uVar14 = 0x3f800000;
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
      uVar14 = NEON_ucvtf((uint)*(byte *)((long)param_1 + 0x281));
    }
    FUN_10a7718b4(uVar14,uStack_68,param_1,0xb);
    FUN_10a7718b4(*(float *)(param_1 + 0x49) * 100.0,uStack_68,param_1,0xc);
    if (cStack_58 == '\x01') {
      __ZNSt3__15mutex6unlockEv(uStack_60);
    }
    if (param_2 != 0) {
      puVar6 = &stack0xffffffffffffffd0;
      puVar13 = &stack0xfffffffffffffff0;
      plVar7 = (long *)param_1[0x44];
      if (plVar7 == (long *)0x0) {
        if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
          *(undefined1 *)(param_1 + 0x50) = 1;
        }
      }
      else if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
        (**(code **)(*plVar7 + 0x170))();
        if (((ulong)plVar7 & 1) == 0) {
          *(undefined1 *)(param_1 + 0x50) = 1;
          if ((bRam000000011330a9e8 >> 3 & 1) == 0) {
            plVar7 = (long *)param_1[0x41];
            if (param_1[0x41] != 0) {
              plVar1 = (long *)(param_1[0x41] + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *plVar1 = *plVar1 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            (**(code **)(*param_1 + 0xf0))(param_1,&stack0xffffffffffffffd0);
            if (plVar7 == (long *)0x0) {
              return;
            }
            plVar1 = plVar7 + 1;
            do {
              lVar11 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar11 != 0) {
              return;
            }
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            return;
          }
          puVar8 = &UNK_10f657045;
          uVar10 = 0x2e2;
          unaff_x30 = 0x10a41dba8;
        }
        else {
          if ((bRam000000011330a9e8 >> 3 & 1) == 0) {
            return;
          }
          puVar8 = &UNK_10f657073;
          uVar10 = 0x2e5;
          puVar6 = (undefined1 *)register0x00000008;
          puVar13 = unaff_x29;
        }
        *(undefined1 **)(puVar6 + -0x10) = puVar13;
        *(undefined8 *)(puVar6 + -8) = unaff_x30;
        *(undefined1 **)(puVar6 + -0x18) = puVar6;
        FUN_10ae06f30(1,8,&UNK_10f656cc0,&UNK_10f657001,uVar10,puVar8,puVar6);
        return;
      }
      return;
    }
  }
  else {
    lVar11 = *(long *)(param_1[0x47] + 0xb8);
    puVar12 = *(undefined8 **)(lVar11 + 0x2138);
    uVar10 = *puVar12;
    __ZNSt3__15mutex4lockEv(uVar10);
    *(undefined1 *)(puVar12[2] + 0x4020) = uVar2;
    __ZNSt3__15mutex6unlockEv(uVar10);
    *(undefined1 *)(lVar11 + 0x2218) = uVar2;
    lVar11 = param_1[0x49];
    lVar9 = *(long *)(param_1[0x47] + 0xb8);
    puVar12 = *(undefined8 **)(lVar9 + 0x2138);
    uVar10 = *puVar12;
    __ZNSt3__15mutex4lockEv(uVar10);
    *(int *)(puVar12[2] + 0x401c) = (int)lVar11;
    __ZNSt3__15mutex6unlockEv(uVar10);
    *(int *)(lVar9 + 0x221c) = (int)lVar11;
  }
  return;
}



/* Entry: 10a41e0e0; end: 10a41e203;  */

void FUN_10a41e0e0(float param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  if (*(long *)(param_2 + 0x250) == 0) {
    fVar5 = 1.0;
    if (param_1 <= 1.0) {
      fVar5 = param_1;
    }
    fVar6 = 0.0;
    if (0.0 <= param_1) {
      fVar6 = fVar5;
    }
    *(float *)(param_2 + 0x248) = fVar6;
    if (*(long *)(param_2 + 0x238) == 0) {
      FUN_10a3dd9ac(&uStack_58,*(undefined8 *)(param_2 + 0x170));
      FUN_10a7718b4(*(float *)(param_2 + 0x248) * 100.0,uStack_58,param_2,0xc);
      if (cStack_48 == '\x01') {
        __ZNSt3__15mutex6unlockEv(uStack_50);
      }
    }
    else {
      lVar3 = *(long *)(*(long *)(param_2 + 0x238) + 0xb8);
      puVar4 = *(undefined8 **)(lVar3 + 0x2138);
      uVar2 = *puVar4;
      __ZNSt3__15mutex4lockEv(uVar2);
      *(float *)(puVar4[2] + 0x401c) = fVar6;
      __ZNSt3__15mutex6unlockEv(uVar2);
      *(float *)(lVar3 + 0x221c) = fVar6;
    }
    return;
  }
  func_0x000107c2b054(&uStack_58,&UNK_10f656ec5);
  FUN_10a41dd04(&uStack_58);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41e1cc);
  (*pcVar1)();
}



/* Entry: 10a41e204; end: 10a41e263;  */

void FUN_10a41e204(float param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  if (*(long *)(param_2 + 0x250) == 0) {
    fVar5 = 1.0;
    if (param_1 <= 1.0) {
      fVar5 = param_1;
    }
    fVar6 = 0.0;
    if (0.0 <= param_1) {
      fVar6 = fVar5;
    }
    *(float *)(param_2 + 0x244) = fVar6;
    if (*(long *)(param_2 + 0x238) == 0) {
      FUN_10a3dd9ac(&uStack_58,*(undefined8 *)(param_2 + 0x170));
      fVar5 = *(float *)(param_2 + 0x244);
      _log10f(fVar5);
      FUN_10a7718b4(fVar5 * 20.0,uStack_58,param_2,0xd);
      if (cStack_48 == '\x01') {
        __ZNSt3__15mutex6unlockEv(uStack_50);
      }
    }
    else {
      lVar3 = *(long *)(*(long *)(param_2 + 0x238) + 0xb8);
      puVar4 = *(undefined8 **)(lVar3 + 0x2138);
      uVar2 = *puVar4;
      __ZNSt3__15mutex4lockEv(uVar2);
      *(float *)(puVar4[2] + 0x4018) = fVar6;
      __ZNSt3__15mutex6unlockEv(uVar2);
      *(float *)(lVar3 + 0x2224) = fVar6;
    }
    return;
  }
  func_0x000107c2b054(&stack0xffffffffffffffc8,&UNK_10f656ecc);
  FUN_10a41dd04(&stack0xffffffffffffffc8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41e248);
  (*pcVar1)();
}



/* Entry: 10a41e264; end: 10a41e533;  */

void FUN_10a41e264(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long *plVar8;
  byte bVar9;
  ulong extraout_x9;
  undefined *puVar10;
  long unaff_x20;
  code **unaff_x21;
  code **unaff_x22;
  code **unaff_x23;
  undefined4 uVar11;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined ***pppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 auStack_148 [2];
  char cStack_131;
  code *pcStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  long lStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == (undefined **)0x0) {
    pppuVar6 = (undefined ***)&UNK_10f656ee2;
    FUN_10a00946c();
  }
  else {
    func_0x00010a3c7a18();
    uVar11 = *(undefined4 *)(param_1 + 0x234);
    (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bd4f88);
    *(undefined4 *)(param_1 + 0x234) = uVar11;
    ppuVar4 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bd4fa8,*(undefined1 *)(param_1 + 0x230));
    *(char *)(param_1 + 0x230) = (char)ppuVar4;
    ppuVar4 = param_2;
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_DAT_110bd4fc8,*(undefined1 *)(param_1 + 0x240));
    *(char *)(param_1 + 0x240) = (char)ppuVar4;
    uVar11 = *(undefined4 *)(param_1 + 0x244);
    (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110bd4fe8);
    *(undefined4 *)(param_1 + 0x244) = uVar11;
    FUN_10a3a108c(*(undefined8 *)(param_1 + 0x270),param_2);
    if ((*(byte *)(*(long *)(param_1 + 0x270) + 0x18) & 1) == 0) {
      ppuVar4 = &PTR___tlv_bootstrap_11340df18;
      (*(code *)PTR___tlv_bootstrap_11340df18)();
      bVar9 = 1;
      if (((extraout_x9 & 1) == 0) && (((ulong)*ppuVar4 & 1) == 0)) {
        bVar9 = *(byte *)(param_1 + 0x281);
      }
    }
    else {
      bVar9 = 1;
    }
    *(byte *)(param_1 + 0x280) = bVar9 & 1;
    unaff_x21 = &pcStack_130;
    pcStack_130 = FUN_10a443a50;
    ppuStack_128 = &PTR_FUN_110bd9970;
    unaff_x22 = &pcStack_f0;
    pcStack_f0 = FUN_10a443a50;
    ppuStack_e8 = &PTR_FUN_110bd9970;
    uStack_a0 = CONCAT17(10,(undefined7)uStack_a0);
    uStack_b0 = 0x6172746f69647561;
    uStack_a8 = CONCAT53(uStack_a8._3_5_,0x6b63);
    pcStack_98 = FUN_10a443810;
    ppuStack_90 = &PTR_FUN_110bd9958;
    puVar5 = (undefined8 *)0x58;
    lStack_120 = param_1;
    lStack_e0 = param_1;
    __Znwm();
    unaff_x23 = &pcStack_98;
    *puVar5 = FUN_10a443a50;
    puVar5[1] = &PTR_FUN_110bd9970;
    puVar5[2] = param_1;
    puVar5[9] = uStack_a8;
    puVar5[8] = uStack_b0;
    puVar5[10] = uStack_a0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    puStack_88 = puVar5;
    func_0x000107c2b054(auStack_148,&UNK_10f656650);
    ppuVar4 = &PTR_DAT_110bd5008;
    (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110bd5008,&pcStack_98,0,auStack_148);
    param_2 = ppuVar4;
    if (cStack_131 < '\0') {
      __ZdlPv(auStack_148[0]);
      param_2 = ppuVar4;
    }
    (*(code *)*ppuStack_90)(&ppuStack_90);
    if (uStack_a0 < 0) {
      __ZdlPv(uStack_b0);
    }
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    pppuVar6 = &ppuStack_128;
    (*(code *)*ppuStack_128)();
    unaff_x20 = param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
  }
  ___stack_chk_fail();
  if (cStack_131 < '\0') {
    __ZdlPv(auStack_148[0]);
  }
  (*(code *)*ppuStack_90)(unaff_x23 + 1);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(unaff_x22 + 1);
  (*(code *)*ppuStack_128)(unaff_x21 + 1);
  pppuVar7 = pppuVar6;
  __Unwind_Resume();
  pcStack_158 = FUN_10a41e534;
  lStack_170 = unaff_x20;
  pppuStack_168 = pppuVar6;
  puStack_160 = &stack0xfffffffffffffff0;
  if (param_2 != (undefined **)0x0) {
    func_0x00010a3c7928();
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)((long)pppuVar7 + 0x234),param_2,&PTR_DAT_110bd4f88);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bd4fa8,*(undefined1 *)(pppuVar7 + 0x46));
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bd4fc8,*(undefined1 *)(pppuVar7 + 0x48));
    (**(code **)(*param_2 + 0x60))
              (*(undefined4 *)((long)pppuVar7 + 0x244),param_2,&PTR_DAT_110bd4fe8);
    func_0x00010a3a1148(pppuVar7[0x4e],param_2);
    puStack_180 = &UNK_10f658525;
    uStack_178 = 0x15;
    ppuStack_188 = pppuVar7[0x41];
    ppuStack_190 = pppuVar7[0x40];
    if (pppuVar7[0x41] != (undefined **)0x0) {
      ppuVar4 = pppuVar7[0x41] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
        if (bVar3) {
          *ppuVar4 = *ppuVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bd5008,&ppuStack_190,&puStack_180);
    ppuVar4 = ppuStack_188;
    if (ppuStack_188 != (undefined **)0x0) {
      ppuVar1 = ppuStack_188 + 1;
      do {
        puVar10 = *ppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
        if (bVar3) {
          *ppuVar1 = puVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar10 == (undefined *)0x0) {
        (**(code **)(*ppuStack_188 + 0x10))(ppuStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar4);
      }
    }
    return;
  }
  plVar8 = (long *)&UNK_10f656ee2;
  FUN_10a00946c();
  func_0x00010a052384(&ppuStack_190);
  __Unwind_Resume();
  if (plVar8[0x40] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41e6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x108))();
    return;
  }
  return;
}



/* Entry: 10a41e534; end: 10a41e68b;  */

void FUN_10a41e534(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (param_2 != (long *)0x0) {
    FUN_10a3c7928();
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x234),param_2,&PTR_DAT_110bd4f88);
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bd4fa8,*(undefined1 *)(param_1 + 0x230));
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110bd4fc8,*(undefined1 *)(param_1 + 0x240));
    (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0x244),param_2,&PTR_DAT_110bd4fe8);
    func_0x00010a3a1148(*(undefined8 *)(param_1 + 0x270),param_2);
    puStack_30 = &UNK_10f658525;
    uStack_28 = 0x15;
    plStack_38 = *(long **)(param_1 + 0x208);
    uStack_40 = *(undefined8 *)(param_1 + 0x200);
    if (*(long *)(param_1 + 0x208) != 0) {
      plVar4 = (long *)(*(long *)(param_1 + 0x208) + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bd5008,&uStack_40,&puStack_30);
    plVar4 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
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
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    return;
  }
  plVar4 = (long *)&UNK_10f656ee2;
  FUN_10a00946c();
  func_0x00010a052384(&uStack_40);
  __Unwind_Resume();
  if (plVar4[0x40] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41e6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x108))();
    return;
  }
  return;
}



/* Entry: 10a41e68c; end: 10a41e6f3;  */

void FUN_10a41e68c(long *param_1)

{
  if (param_1[0x40] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41e6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x108))(param_1,0);
    return;
  }
  return;
}



/* Entry: 10a41e6f4; end: 10a41e763;  */

void FUN_10a41e6f4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  FUN_10a5ae998(*(undefined8 *)(param_1 + 0x288),&PTR_DAT_110bd7828,*(undefined8 *)(param_1 + 0x170)
                ,param_1);
  lVar4 = *(long *)(param_1 + 0x298);
  uVar5 = *(undefined8 *)(param_1 + 0x170);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    lStack_28 = *(long *)(lVar4 + 0x18);
    uStack_30 = *(undefined8 *)(lVar4 + 0x10);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(uVar5,&uStack_30,&PTR_DAT_110bd31c8,param_1 + 0x1f8);
    if (lStack_28 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)uVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)uVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10a41e764; end: 10a41ebfb;  */

void FUN_10a41e764(undefined8 *param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined ***pppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    puVar11 = param_2;
    uVar10 = param_3;
    func_0x00010a0fda30();
  }
  else {
    ppuStack_98 = *(undefined ***)(param_2 + 0x48);
    puStack_a0 = *(undefined **)(param_2 + 0x40);
    lVar9 = param_4 + 0x88;
    func_0x00010a35bf90(lVar9,&puStack_a0);
    puVar3 = (undefined8 *)((ulong)&puStack_a0 | 8);
    ppuVar6 = &puStack_a0;
    if (lVar9 != 0) {
      puVar3 = (undefined8 *)(lVar9 + 0x28);
      ppuVar6 = (undefined **)(lVar9 + 0x20);
    }
    uVar10 = *puVar3;
    puVar11 = *ppuVar6;
  }
  puVar13 = *(undefined **)(param_2 + 0x170);
  FUN_10a3dd220(puVar13);
  FUN_10a443e98(puVar13,puVar11,uVar10);
  ppuVar6 = (undefined **)0x28;
  puStack_f0 = puVar13;
  __Znwm();
  ppuVar14 = ppuVar6 + 1;
  *ppuVar14 = (undefined *)0x0;
  *ppuVar6 = (undefined *)&PTR_FUN_110bd99b0;
  ppuVar6[2] = (undefined *)0x0;
  ppuVar6[3] = puVar13;
  ppuVar6[4] = FUN_10a3df8cc;
  ppuStack_e8 = ppuVar6;
  if (puVar13 != (undefined *)0x0) {
    if (*(long *)(puVar13 + 0x30) == 0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar5) {
          *ppuVar14 = *ppuVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuVar12 = ppuVar6 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
        if (bVar5) {
          *ppuVar12 = *ppuVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined **)(puVar13 + 0x28) = puVar13;
      *(undefined ***)(puVar13 + 0x30) = ppuVar6;
    }
    else {
      if (*(long *)(*(long *)(puVar13 + 0x30) + 8) != -1) goto LAB_10a41e8e0;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar5) {
          *ppuVar14 = *ppuVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuVar12 = ppuVar6 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar12,0x10);
        if (bVar5) {
          *ppuVar12 = *ppuVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined **)(puVar13 + 0x28) = puVar13;
      *(undefined ***)(puVar13 + 0x30) = ppuVar6;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      puVar11 = *ppuVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar5) {
        *ppuVar14 = puVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
LAB_10a41e8e0:
  puVar11 = puStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (puStack_f0 + 0x150,param_2 + 0x150);
  uVar1 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar2 = *(ushort *)(puVar11 + 0x180) & 0xfffc;
  *(ushort *)(puVar11 + 0x180) = uVar2 | *(ushort *)(puVar11 + 0x180) & 1 | uVar1;
  *(ushort *)(puVar11 + 0x180) = uVar2 | uVar1 | *(ushort *)(param_2 + 0x180) & 1;
  puStack_a0 = puVar11;
  ppuStack_98 = ppuStack_e8;
  if (ppuStack_e8 != (undefined **)0x0) {
    ppuVar6 = ppuStack_e8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar5) {
        *ppuVar6 = *ppuVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_10a3c7ce8(param_3,&puStack_a0);
  ppuVar6 = ppuStack_98;
  if (ppuStack_98 != (undefined **)0x0) {
    ppuVar14 = ppuStack_98 + 1;
    do {
      puVar11 = *ppuVar14;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar5) {
        *ppuVar14 = puVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  lVar9 = *(long *)(param_2 + 0x200);
  puStack_d0 = puStack_f0 + 0x200;
  puStack_e0 = (undefined *)0x10a444084;
  ppuStack_d8 = &PTR_FUN_110bd99f0;
  if (lVar9 == 0) {
    puStack_a0 = (undefined *)0x0;
    FUN_10a2e9e64(&puStack_e0,&puStack_a0);
    goto LAB_10a41eaf8;
  }
  if (param_4 == 0) {
    FUN_10a443ff0(&puStack_a0,lVar9);
    FUN_10a443f64(&puStack_e0,&puStack_a0);
    if (ppuStack_98 == (undefined **)0x0) goto LAB_10a41eaf8;
    ppuVar6 = ppuStack_98 + 1;
    do {
      puVar11 = *ppuVar6;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
      if (bVar5) {
        *ppuVar6 = puVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_10a41eadc:
    ppuVar6 = ppuStack_98;
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_98 + 0x10))(ppuStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar6);
    }
  }
  else {
    puVar11 = *(undefined **)(lVar9 + 0x40);
    ppuVar6 = *(undefined ***)(lVar9 + 0x48);
    if (*(char *)(param_4 + 0xb8) == '\x01') {
      puStack_a0 = (undefined *)0x10a444084;
      ppuStack_98 = &PTR_FUN_110bd99f0;
      puStack_90 = puStack_d0;
      FUN_10a069d9c(param_4,puVar11,ppuVar6,&puStack_a0);
    }
    else {
      lVar7 = param_4 + 0x88;
      puStack_a0 = puVar11;
      ppuStack_98 = ppuVar6;
      func_0x00010a35bf90(lVar7,&puStack_a0);
      pppuVar8 = &ppuStack_98;
      ppuVar14 = &puStack_a0;
      if (lVar7 != 0) {
        pppuVar8 = (undefined ***)(lVar7 + 0x28);
        ppuVar14 = (undefined **)(lVar7 + 0x20);
      }
      ppuVar12 = *pppuVar8;
      puVar13 = *ppuVar14;
      if (puVar11 == puVar13 && ppuVar6 == ppuVar12) {
        FUN_10a443ff0(&puStack_a0,lVar9);
        FUN_10a443f64(&puStack_e0,&puStack_a0);
        if (ppuStack_98 == (undefined **)0x0) goto LAB_10a41eaf8;
        ppuVar6 = ppuStack_98 + 1;
        do {
          puVar11 = *ppuVar6;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppuVar6,0x10);
          if (bVar5) {
            *ppuVar6 = puVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_10a41eadc;
      }
      puStack_a0 = puStack_e0;
      (*(code *)ppuStack_d8[3])(&ppuStack_98,&ppuStack_d8);
      FUN_10a069d9c(param_4,puVar13,ppuVar12,&puStack_a0);
    }
    (*(code *)*ppuStack_98)(&ppuStack_98);
  }
LAB_10a41eaf8:
  pppuVar8 = &ppuStack_d8;
  (*(code *)*ppuStack_d8)();
  param_1[1] = ppuStack_e8;
  *param_1 = puStack_f0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a37eea0(&puStack_a0);
  (*(code *)*ppuStack_d8)(&ppuStack_d8);
  FUN_10a3bd174(&puStack_f0);
  __Unwind_Resume();
  ppuVar6 = pppuVar8[0x44];
  if (ppuVar6 == (undefined **)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010a41ec10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*ppuVar6 + 0x140))(ppuVar6,0);
  return;
}



/* Entry: 10a41ebfc; end: 10a41ec7f;  */

void FUN_10a41ebfc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x220);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010a41ec10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x140))(plVar1,0);
    return;
  }
  return;
}



/* Entry: 10a41ec80; end: 10a41ef77;  */

/* WARNING: Removing unreachable block (ram,0x00010a41eea4) */
/* WARNING: Removing unreachable block (ram,0x00010a41ed50) */
/* WARNING: Removing unreachable block (ram,0x00010a41ed14) */
/* WARNING: Removing unreachable block (ram,0x00010a41ee94) */
/* WARNING: Removing unreachable block (ram,0x00010a41eeb4) */

void FUN_10a41ec80(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  FUN_10a3c829c(auStack_48);
  func_0x000107c2b054(&uStack_60,"N/A");
  func_0x000107c2b054(&uStack_80,"N/A");
  func_0x000107c2b054(&uStack_a0,"N/A");
  func_0x000107c2b054(&uStack_c0,"N/A");
  if ((param_2[0x47] == 0) && (param_2[0x44] != 0)) {
    (**(code **)(*param_2 + 0x140))(param_2);
    __ZNSt3__19to_stringEf(&uStack_d8);
    uStack_58 = uStack_d0;
    uStack_60 = uStack_d8;
    lStack_50 = lStack_c8;
    if ((long *)param_2[0x44] == (long *)0x0) {
      FUN_10a00946c(&UNK_10f656fd4);
    }
    else {
      (**(code **)(*(long *)param_2[0x44] + 0x188))();
      __ZNSt3__19to_stringEf(&uStack_d8);
      uStack_78 = uStack_d0;
      uStack_80 = uStack_d8;
      lStack_70 = lStack_c8;
      if ((long *)param_2[0x44] != (long *)0x0) {
        (**(code **)(*(long *)param_2[0x44] + 0x198))();
        __ZNSt3__19to_stringEf(&uStack_d8);
        if (uStack_90._7_1_ < '\0') {
          __ZdlPv(uStack_a0);
        }
        uStack_98 = uStack_d0;
        uStack_a0 = uStack_d8;
        uStack_90 = lStack_c8;
        (**(code **)(*param_2 + 0x130))(param_2);
        __ZNSt3__19to_stringEf(&uStack_d8);
        if (uStack_b0._7_1_ < '\0') {
          __ZdlPv(uStack_c0);
        }
        uStack_b8 = uStack_d0;
        uStack_c0 = uStack_d8;
        uStack_b0 = lStack_c8;
        goto LAB_10a41eddc;
      }
      FUN_10a00946c(&UNK_10f656fd4);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41eef0);
    (*pcVar1)();
  }
LAB_10a41eddc:
  FUN_10a0ee900(param_1,&UNK_10f6570c4,0x4b);
  if (uStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  if (uStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  return;
}



/* Entry: 10a41ef78; end: 10a41f063;  */

/* WARNING: Removing unreachable block (ram,0x00010a41eea4) */
/* WARNING: Removing unreachable block (ram,0x00010a41ed50) */
/* WARNING: Removing unreachable block (ram,0x00010a41ed14) */
/* WARNING: Removing unreachable block (ram,0x00010a41ee94) */
/* WARNING: Removing unreachable block (ram,0x00010a41eeb4) */

void FUN_10a41ef78(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar2 = (long *)(param_2 + -0x10);
  FUN_10a3c829c(auStack_48);
  func_0x000107c2b054(&uStack_60,"N/A");
  func_0x000107c2b054(&uStack_80,"N/A");
  func_0x000107c2b054(&uStack_a0,"N/A");
  func_0x000107c2b054(&uStack_c0,"N/A");
  if ((*(long *)(param_2 + 0x228) == 0) && (*(long *)(param_2 + 0x210) != 0)) {
    (**(code **)(*plVar2 + 0x140))(plVar2);
    __ZNSt3__19to_stringEf(&uStack_d8);
    uStack_58 = uStack_d0;
    uStack_60 = uStack_d8;
    lStack_50 = lStack_c8;
    if (*(long **)(param_2 + 0x210) == (long *)0x0) {
      FUN_10a00946c(&UNK_10f656fd4);
    }
    else {
      (**(code **)(**(long **)(param_2 + 0x210) + 0x188))();
      __ZNSt3__19to_stringEf(&uStack_d8);
      uStack_78 = uStack_d0;
      uStack_80 = uStack_d8;
      lStack_70 = lStack_c8;
      if (*(long **)(param_2 + 0x210) != (long *)0x0) {
        (**(code **)(**(long **)(param_2 + 0x210) + 0x198))();
        __ZNSt3__19to_stringEf(&uStack_d8);
        if (uStack_90._7_1_ < '\0') {
          __ZdlPv(uStack_a0);
        }
        uStack_98 = uStack_d0;
        uStack_a0 = uStack_d8;
        uStack_90 = lStack_c8;
        (**(code **)(*plVar2 + 0x130))(plVar2);
        __ZNSt3__19to_stringEf(&uStack_d8);
        if (uStack_b0._7_1_ < '\0') {
          __ZdlPv(uStack_c0);
        }
        uStack_b8 = uStack_d0;
        uStack_c0 = uStack_d8;
        uStack_b0 = lStack_c8;
        goto LAB_10a41eddc;
      }
      FUN_10a00946c(&UNK_10f656fd4);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41eef0);
    (*pcVar1)();
  }
LAB_10a41eddc:
  FUN_10a0ee900(param_1,&UNK_10f6570c4,0x4b);
  if (uStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  if (uStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  return;
}



/* Entry: 10a41f064; end: 10a41f343;  */

void FUN_10a41f064(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65853b,0x1e);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bd79f0;
  pppuVar2 = (undefined8 ***)&UNK_10f656650;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110bd79f0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a41f324;
    FUN_10a054dac(param_1,&UNK_10f657110,FUN_10a44417c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a41f324;
    FUN_10a054dac(param_1,&UNK_10f65711d,FUN_10a44431c,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10a41f324;
    FUN_10a054dac(param_1,&UNK_10f65712a,FUN_10a444430,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f657137,FUN_10a444564,FUN_10a4446cc);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65853b,0x1e);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10a41f324:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a41f328);
  (*pcVar6)();
}



/* Entry: 10a41f344; end: 10a41f407;  */

/* WARNING: Removing unreachable block (ram,0x00010a41f3d0) */

void FUN_10a41f344(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110bd5040;
  param_1[2] = &PTR_DAT_110bd5150;
  param_1[7] = &PTR_DAT_110bd51a8;
  param_1[0xd] = &PTR_DAT_110bd51c8;
  param_1[0x48] = &PTR_DAT_110bd52c8;
  param_1[0x16] = &PTR_DAT_110bd5238;
  param_1[0x17] = &PTR_DAT_110bd5268;
  FUN_10a444c40(param_1 + 0x46);
  func_0x0001094e64a8(param_1 + 0x41);
  lVar2 = param_1[0x3e];
  if (lVar2 != 0) {
    lVar4 = lVar2;
    lVar3 = param_1[0x3f];
    if (param_1[0x3f] != lVar2) {
      do {
        lVar4 = lVar3 + -0x40;
        func_0x0001094e64a8(lVar3 + -0x28);
        lVar3 = lVar4;
      } while (lVar4 != lVar2);
      lVar4 = param_1[0x3e];
    }
    param_1[0x3f] = lVar2;
    __ZdlPv(lVar4);
  }
  *param_1 = &PTR_FUN_110bd7888;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x48] = &PTR_DAT_110bd79b8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a41f408; end: 10a41f443;  */

/* WARNING: Removing unreachable block (ram,0x00010a41f3d0) */

void FUN_10a41f408(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_110bd5040;
  param_1[2] = &PTR_DAT_110bd5150;
  param_1[7] = &PTR_DAT_110bd51a8;
  param_1[0xd] = &PTR_DAT_110bd51c8;
  param_1[0x48] = &PTR_DAT_110bd52c8;
  param_1[0x16] = &PTR_DAT_110bd5238;
  param_1[0x17] = &PTR_DAT_110bd5268;
  FUN_10a444c40(param_1 + 0x46);
  func_0x0001094e64a8(param_1 + 0x41);
  lVar2 = param_1[0x3e];
  if (lVar2 != 0) {
    lVar4 = lVar2;
    lVar3 = param_1[0x3f];
    if (param_1[0x3f] != lVar2) {
      do {
        lVar4 = lVar3 + -0x40;
        func_0x0001094e64a8(lVar3 + -0x28);
        lVar3 = lVar4;
      } while (lVar4 != lVar2);
      lVar4 = param_1[0x3e];
    }
    param_1[0x3f] = lVar2;
    __ZdlPv(lVar4);
  }
  *param_1 = &PTR_FUN_110bd7888;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x48] = &PTR_DAT_110bd79b8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar2 = param_1[0x14];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x15];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar2 = param_1[0x12];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x13];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0x11];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar2 = param_1[0xe];
  if (lVar2 != 0) {
    plVar1 = (long *)param_1[0xf];
    *plVar1 = lVar2;
    *(long **)(lVar2 + 8) = plVar1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  FUN_10a3ebf4c(&stack0xffffffffffffffd8);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10a41f444; end: 10a41f4cf;  */

void FUN_10a41f444(void)

{
  FUN_10a41f344();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a41f4d0; end: 10a41f4ff;  */

void FUN_10a41f4d0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a41f344((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a41f500; end: 10a41f60f;  */

void FUN_10a41f500(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ushort uVar4;
  long lStack_60;
  undefined8 uStack_58;
  char cStack_50;
  undefined1 uStack_41;
  
  lVar3 = param_2 + 0x208;
  lStack_60 = param_3;
  func_0x0001094e6524(lVar3,param_3,&UNK_10dd5b8f9,&lStack_60,&uStack_41);
  *(int *)(lVar3 + 0x28) = (int)param_1;
  lVar3 = *(long *)(param_2 + 0x170);
  if (*(int *)(*(long *)(lVar3 + 0xa20) + 0x18) < 0x53) {
    uVar4 = 0x12;
  }
  else {
    uVar4 = 0x17;
  }
  if ((*(ushort *)(param_2 + 0x180) & uVar4) != 0) {
    return;
  }
  FUN_10a3dd9ac(&lStack_60);
  lVar1 = lStack_60;
  if (lStack_60 == 0) {
    FUN_10a00946c(&UNK_10f657143);
  }
  else {
    FUN_10ad07dec();
    func_0x0001094ccb54();
    if (lVar3 != 0) {
      FUN_10a7718b4(param_1,lVar1,param_2,*(undefined4 *)(lVar3 + 0x28));
      if (cStack_50 != '\x01') {
        return;
      }
      __ZNSt3__15mutex6unlockEv(uStack_58);
      return;
    }
    FUN_109ffdddc(&UNK_10f639994);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a41f5f0);
  (*pcVar2)();
}



/* Entry: 10a41f610; end: 10a41f70b;  */

undefined8 FUN_10a41f610(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_70 [24];
  long lStack_58;
  undefined8 uStack_50;
  char cStack_48;
  
  lVar2 = *(long *)(param_2 + 0x170);
  FUN_10a3dd9ac(&lStack_58);
  if (lStack_58 == 0) {
    FUN_10a00946c(&UNK_10f6571e5);
  }
  else {
    FUN_10ad07dec();
    func_0x0001094ccb54();
    FUN_10ad07dec();
    if (lVar2 != 0) {
      FUN_10a7717e4(lStack_58,*(undefined4 *)(lVar2 + 0x28));
      if (cStack_48 == '\x01') {
        __ZNSt3__15mutex6unlockEv(uStack_50);
      }
      return param_1;
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_70,&UNK_10f6571b9,param_3);
    FUN_10a0029c0(auStack_70);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41f6c8);
  (*pcVar1)();
}



/* Entry: 10a41f70c; end: 10a41f9a3;  */

void FUN_10a41f70c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar9 = param_2;
    uVar8 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar8 = *puVar4;
    lVar9 = *plVar7;
  }
  lVar10 = *(long *)(param_2 + 0x170);
  FUN_10a3dd220(lVar10);
  FUN_10a444ce8(lVar10,lVar9,uVar8);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_FUN_110bd9a20;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 0x30) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
    }
    else {
      if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10a41f870;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = *plVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      *(long *)(lVar10 + 0x28) = lVar10;
      *(long **)(lVar10 + 0x30) = plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar9 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
LAB_10a41f870:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar9 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  if (lVar10 != param_2) {
    *(undefined4 *)(lVar10 + 0x228) = *(undefined4 *)(param_2 + 0x228);
    func_0x00010951774c(lVar10 + 0x208,*(undefined8 *)(param_2 + 0x218),0);
  }
  FUN_10a41f9a4(lVar10 + 0x230,*(undefined8 *)(param_2 + 0x230),*(undefined8 *)(param_2 + 0x238));
  *param_1 = lVar10;
  param_1[1] = (long)plVar7;
  return;
}



/* Entry: 10a41f9a4; end: 10a41fa17;  */

undefined8 * FUN_10a41f9a4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a41fa18; end: 10a41fae3;  */

void FUN_10a41fa18(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  FUN_10a3c7928();
  puStack_30 = &UNK_10f65856b;
  uStack_28 = 0x16;
  plStack_38 = *(long **)(param_1 + 0x238);
  uStack_40 = *(undefined8 *)(param_1 + 0x230);
  if (*(long *)(param_1 + 0x238) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x238) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110bd5320,&uStack_40,&puStack_30);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a41fae4; end: 10a41fccb;  */

void FUN_10a41fae4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  byte bVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  char cStack_1a8;
  undefined1 auStack_150 [8];
  undefined8 auStack_148 [2];
  char cStack_131;
  undefined8 uStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010a3c7a18();
  uStack_130 = 0x10a4450c4;
  ppuStack_128 = &PTR_DAT_110bd9a78;
  uStack_f0 = 0x10a4450c4;
  ppuStack_e8 = &PTR_DAT_110bd9a78;
  uStack_a0 = CONCAT17(0x10,(undefined7)uStack_a0);
  uStack_a8 = 0x7465737341746365;
  uStack_b0 = 0x6666456f69647541;
  uStack_a0 = uStack_a0 & 0xffffffffffffff00;
  pcStack_98 = FUN_10a444e88;
  ppuStack_90 = &PTR_FUN_110bd9a60;
  puVar8 = (undefined8 *)0x58;
  uStack_120 = param_1;
  uStack_e0 = param_1;
  __Znwm();
  *puVar8 = 0x10a4450c4;
  puVar8[1] = &PTR_DAT_110bd9a78;
  puVar8[2] = param_1;
  puVar8[9] = uStack_a8;
  puVar8[8] = uStack_b0;
  puVar8[10] = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_88 = puVar8;
  func_0x000107c2b054(auStack_148,&UNK_10f656650);
  ppuVar12 = &PTR_DAT_110bd5320;
  (**(code **)(*param_2 + 0x250))(param_2,&PTR_DAT_110bd5320,&pcStack_98,0,auStack_148);
  if (cStack_131 < '\0') {
    __ZdlPv(auStack_148[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if ((long)uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  pppuVar9 = &ppuStack_128;
  (*(code *)*ppuStack_128)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_131 < '\0') {
    __ZdlPv(auStack_148[0]);
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if ((long)uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  (*(code *)*ppuStack_e8)(&ppuStack_e8);
  (*(code *)*ppuStack_128)(&ppuStack_128);
  __Unwind_Resume();
  if (((ulong)pppuVar9[0x30] & 0x12) != 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
      return;
    }
    FUN_10ae06f30(1,2,&UNK_10f657258,&UNK_10f657298,0x52,&UNK_10f6572ee,auStack_150);
    return;
  }
  pppuVar10 = (undefined ***)pppuVar9[0x2e];
  FUN_10a3dd9ac(&ppuStack_1b8);
  if (ppuStack_1b8 == (undefined **)0x0) {
    FUN_10a00946c(&UNK_10f657382);
  }
  else {
    ppuVar3 = pppuVar9[0x3f];
    for (ppuVar13 = pppuVar9[0x3e]; ppuVar13 != ppuVar3; ppuVar13 = ppuVar13 + 8) {
      if (*(char *)((long)ppuVar13 + 0x17) < '\0') {
        pppuVar10 = &ppuStack_1d0;
        func_0x000107c3192c(&ppuStack_1d0,*ppuVar13,ppuVar13[1]);
      }
      else {
        puStack_1c8 = ppuVar13[1];
        ppuStack_1d0 = (undefined **)*ppuVar13;
        puStack_1c0 = ppuVar13[2];
      }
      puVar5 = puStack_1c0;
      puVar1 = puStack_1c8;
      if (-1 < (long)puStack_1c0) {
        puVar1 = (undefined *)((ulong)puStack_1c0 >> 0x38);
      }
      bVar4 = *(byte *)((long)ppuVar12 + 0x17);
      puVar2 = ppuVar12[1];
      if (-1 < (char)bVar4) {
        puVar2 = (undefined *)(ulong)bVar4;
      }
      if (puVar1 == puVar2) {
        pppuVar10 = (undefined ***)ppuStack_1d0;
        if (-1 < (long)puStack_1c0) {
          pppuVar10 = &ppuStack_1d0;
        }
        ppuVar11 = (undefined **)*ppuVar12;
        if (-1 < (char)bVar4) {
          ppuVar11 = ppuVar12;
        }
        _memcmp(pppuVar10,ppuVar11);
        bVar7 = (int)pppuVar10 == 0;
        ppuVar11 = ppuStack_1d0;
      }
      else {
        bVar7 = false;
        ppuVar11 = ppuStack_1d0;
      }
      ppuStack_1d0 = ppuVar11;
      if ((long)puVar5 < 0) {
        __ZdlPv();
        pppuVar10 = (undefined ***)ppuVar11;
      }
      if (bVar7) {
        ppuVar13 = ppuVar13 + 5;
        while( true ) {
          ppuVar13 = (undefined **)*ppuVar13;
          if (ppuVar13 == (undefined **)0x0) {
            if (cStack_1a8 != '\x01') {
              return;
            }
            __ZNSt3__15mutex6unlockEv(uStack_1b0);
            return;
          }
          FUN_10ad07dec();
          func_0x0001094ccb54();
          if (pppuVar10 == (undefined ***)0x0) break;
          ppuVar12 = (undefined **)(pppuVar10 + 5);
          pppuVar10 = (undefined ***)ppuStack_1b8;
          FUN_10a7718b4(*(undefined4 *)(ppuVar13 + 5),ppuStack_1b8,pppuVar9,*(undefined4 *)ppuVar12)
          ;
        }
        FUN_109ffdddc(&UNK_10f639994);
        goto LAB_10a41feb4;
      }
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&ppuStack_1d0,&UNK_10f657342,ppuVar12);
    FUN_10a0029c0(&ppuStack_1d0);
  }
LAB_10a41feb4:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a41feb8);
  (*pcVar6)();
}



/* Entry: 10a41fccc; end: 10a41feff;  */

void FUN_10a41fccc(long param_1,long *param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 **ppuVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  char cStack_58;
  
  if ((*(ushort *)(param_1 + 0x180) & 0x12) != 0) {
    if ((bRam000000011330a9e8 >> 1 & 1) == 0) {
      return;
    }
    FUN_10ae06f30(1,2,&UNK_10f657258,&UNK_10f657298,0x52,&UNK_10f6572ee,&stack0x00000000);
    return;
  }
  ppuVar10 = *(undefined1 ***)(param_1 + 0x170);
  FUN_10a3dd9ac(&puStack_68);
  if (puStack_68 == (undefined1 *)0x0) {
    FUN_10a00946c(&UNK_10f657382);
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x1f8);
    for (puVar12 = *(undefined8 **)(param_1 + 0x1f0); puVar12 != puVar5; puVar12 = puVar12 + 8) {
      if (*(char *)((long)puVar12 + 0x17) < '\0') {
        ppuVar10 = &puStack_80;
        func_0x000107c3192c(&puStack_80,*puVar12,puVar12[1]);
      }
      else {
        uStack_78 = puVar12[1];
        puStack_80 = (undefined1 *)*puVar12;
        uStack_70 = puVar12[2];
      }
      uVar7 = uStack_70;
      uVar2 = uStack_78;
      if (-1 < (long)uStack_70) {
        uVar2 = uStack_70 >> 0x38;
      }
      bVar6 = *(byte *)((long)param_2 + 0x17);
      uVar3 = param_2[1];
      if (-1 < (char)bVar6) {
        uVar3 = (ulong)bVar6;
      }
      if (uVar2 == uVar3) {
        ppuVar10 = (undefined1 **)puStack_80;
        if (-1 < (long)uStack_70) {
          ppuVar10 = &puStack_80;
        }
        plVar4 = (long *)*param_2;
        if (-1 < (char)bVar6) {
          plVar4 = param_2;
        }
        _memcmp(ppuVar10,plVar4);
        bVar9 = (int)ppuVar10 == 0;
        puVar11 = puStack_80;
      }
      else {
        bVar9 = false;
        puVar11 = puStack_80;
      }
      puStack_80 = puVar11;
      if ((long)uVar7 < 0) {
        __ZdlPv();
        ppuVar10 = (undefined1 **)puVar11;
      }
      if (bVar9) {
        puVar12 = puVar12 + 5;
        while( true ) {
          puVar12 = (undefined8 *)*puVar12;
          if (puVar12 == (undefined8 *)0x0) {
            if (cStack_58 != '\x01') {
              return;
            }
            __ZNSt3__15mutex6unlockEv(uStack_60);
            return;
          }
          FUN_10ad07dec();
          func_0x0001094ccb54();
          if (ppuVar10 == (undefined1 **)0x0) break;
          puVar1 = (undefined4 *)((long)ppuVar10 + 0x28);
          ppuVar10 = (undefined1 **)puStack_68;
          FUN_10a7718b4(*(undefined4 *)(puVar12 + 5),puStack_68,param_1,*puVar1);
        }
        FUN_109ffdddc(&UNK_10f639994);
        goto LAB_10a41feb4;
      }
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&puStack_80,&UNK_10f657342,param_2);
    FUN_10a0029c0(&puStack_80);
  }
LAB_10a41feb4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a41feb8);
  (*pcVar8)();
}



/* Entry: 10a41ff00; end: 10a41ff8f;  */

void FUN_10a41ff00(long param_1)

{
  code *pcVar1;
  long lStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_10a3dd9ac(&lStack_38,*(undefined8 *)(param_1 + 0x170));
  if (lStack_38 == 0) {
    FUN_10a00946c(&UNK_10f6573f8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41ff70);
    (*pcVar1)();
  }
  FUN_10a771a4c(lStack_38,param_1);
  if (cStack_28 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uStack_30);
    return;
  }
  return;
}



/* Entry: 10a41ff90; end: 10a41ff97;  */

void FUN_10a41ff90(long param_1)

{
  code *pcVar1;
  long lStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_10a3dd9ac(&lStack_38,*(undefined8 *)(param_1 + 0x108));
  if (lStack_38 == 0) {
    FUN_10a00946c(&UNK_10f6573f8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a41ff70);
    (*pcVar1)();
  }
  FUN_10a771a4c(lStack_38,param_1 + -0x68);
  if (cStack_28 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uStack_30);
    return;
  }
  return;
}



/* Entry: 10a41ff98; end: 10a420077;  */

void FUN_10a41ff98(long param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  undefined8 uStack_40;
  char cStack_38;
  
  lVar3 = *(long *)(param_1 + 0x170);
  FUN_10a3dd9ac(&lStack_48);
  if (lStack_48 == 0) {
    FUN_10a00946c(&UNK_10f657465);
  }
  else {
    plVar4 = (long *)(param_1 + 0x218);
    while( true ) {
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        if (cStack_38 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(uStack_40);
          return;
        }
        return;
      }
      FUN_10ad07dec();
      func_0x0001094ccb54();
      if (lVar3 == 0) break;
      puVar1 = (undefined4 *)(lVar3 + 0x28);
      lVar3 = lStack_48;
      FUN_10a7718b4(*(undefined4 *)(plVar4 + 5),lStack_48,param_1,*puVar1);
    }
    FUN_109ffdddc(&UNK_10f639994);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a420050);
  (*pcVar2)();
}


