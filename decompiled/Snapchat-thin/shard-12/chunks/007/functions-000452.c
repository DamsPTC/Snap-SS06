/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10951f7ec; end: 10951f833;  */

void FUN_10951f7ec(undefined8 *param_1)

{
  if ((param_1 != (undefined8 *)0x0) && ((code *)*param_1 != (code *)0x0)) {
    (*(code *)*param_1)(3,param_1,0,&PTR_DAT_1108a6340,&UNK_10ddb8950);
  }
  return;
}



/* Entry: 10951f834; end: 10951fb9b;  */

void FUN_10951f834(undefined8 **param_1,long *param_2,int param_3)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 ***pppuVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  undefined8 *puVar29;
  long *plVar30;
  undefined8 *puVar31;
  ulong uVar32;
  ulong unaff_x27;
  long lVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 **ppuVar36;
  undefined8 **ppuVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  undefined8 **ppuVar44;
  float fVar45;
  long *plStack_110;
  long alStack_108 [3];
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 ***pppuStack_d8;
  undefined1 uStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  long lStack_90;
  
  if (param_1[0x3d][0x2e] == 0) {
    plVar23 = (long *)0x168;
    __Znwm();
    plVar23[0xb] = 0;
    plVar23[10] = 0;
    plVar23[0xd] = 0;
    plVar23[0xc] = 0;
    plVar23[1] = 0;
    *plVar23 = 0;
    plVar23[3] = 0;
    plVar23[2] = 0;
    plVar23[5] = 0;
    plVar23[4] = 0;
    plVar23[7] = 0;
    plVar23[6] = 0;
    plVar23[9] = 0;
    plVar23[8] = 0;
    *(undefined4 *)(plVar23 + 10) = 0x3f800000;
    plVar23[0x10] = 0;
    plVar23[0xf] = 0;
    plVar23[0x12] = 0;
    plVar23[0x11] = 0;
    plVar23[0x14] = 0;
    plVar23[0x13] = 0;
    plVar23[0x16] = 0;
    plVar23[0x15] = 0;
    plVar23[0x18] = 0;
    plVar23[0x17] = 0;
    plVar23[0x1a] = 0;
    plVar23[0x19] = 0;
    plVar23[0x1c] = 0;
    plVar23[0x1b] = 0;
    plVar23[0x1e] = 0;
    plVar23[0x1d] = 0;
    plVar23[0xe] = 0;
    plVar23[0xd] = 0;
    *plVar23 = (long)&PTR_FUN_110afaae0;
    plVar23[0x1f] = 0;
    plVar23[0x20] = 0;
    *(undefined4 *)(plVar23 + 0x21) = 0x42ff0000;
    plVar23[0x28] = 0;
    plVar23[0x27] = 0;
    *(undefined8 *)((long)plVar23 + 0x124) = 0;
    *(undefined8 *)((long)plVar23 + 0x11c) = 0;
    *(undefined8 *)((long)plVar23 + 0x134) = 0;
    *(undefined8 *)((long)plVar23 + 300) = 0;
    *(undefined8 *)((long)plVar23 + 0x114) = 0;
    *(undefined8 *)((long)plVar23 + 0x10c) = 0;
    plVar23[0x29] = (long)(plVar23 + 0x22);
    plVar23[0x2a] = (long)(plVar23 + 0x2b);
    plVar23[0x2b] = 0;
    plVar23[0x2c] = 0;
    plVar28 = (long *)0x260;
    __Znwm();
    plVar28[1] = 0;
    plVar28[2] = 0;
    *plVar28 = (long)&PTR_FUN_110af9ae8;
    FUN_1094fd754();
    FUN_109503734(plVar23 + 4,&stack0xffffffffffffffa8);
    if (plVar28 != (long *)0x0) {
      plVar30 = plVar28 + 1;
      do {
        lVar16 = *plVar30;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar9) {
          *plVar30 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
      }
    }
    plVar28 = (long *)0x48;
    __Znwm();
    plVar28[1] = 0;
    plVar28[2] = 0;
    *plVar28 = (long)&PTR_DAT_110afa548;
    plVar28[8] = 0;
    plVar28[3] = (long)&PTR_FUN_110af8b68;
    plVar28[5] = 0;
    plVar28[4] = 0;
    plVar28[7] = 0;
    plVar28[6] = 0;
    *(undefined4 *)(plVar28 + 8) = 0x3f800000;
    FUN_10951538c(plVar23 + 0xd,&stack0xffffffffffffffa8);
    if (plVar28 != (long *)0x0) {
      plVar30 = plVar28 + 1;
      do {
        lVar16 = *plVar30;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar9) {
          *plVar30 = lVar16 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
      }
    }
    plVar28 = (long *)plVar23[0xd];
    (**(code **)(*plVar28 + 0x10))(plVar28,param_1[0x3d] + 0x30);
    puVar17 = param_1[0x3d];
    *(undefined4 *)(plVar23 + 1) = *(undefined4 *)((long)puVar17 + 0x2c);
    if (*(long *)(puVar17[0x2c] + 0x158) != *(long *)(puVar17[0x2c] + 0x160)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar23[4] + 8);
      puVar17 = param_1[0x3d];
    }
    if (puVar17[0x30] != puVar17[0x31]) {
      plVar28 = (long *)0x48;
      __Znwm();
      plVar28[1] = 0;
      plVar28[2] = 0;
      *plVar28 = (long)&PTR_DAT_110afa548;
      plVar28[8] = 0;
      plVar28[3] = (long)&PTR_FUN_110af8b68;
      plVar28[5] = 0;
      plVar28[4] = 0;
      plVar28[7] = 0;
      plVar28[6] = 0;
      *(undefined4 *)(plVar28 + 8) = 0x3f800000;
      FUN_10951538c(plVar23 + 0xd,&stack0xffffffffffffffa8);
      if (plVar28 != (long *)0x0) {
        plVar30 = plVar28 + 1;
        do {
          lVar16 = *plVar30;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar9) {
            *plVar30 = lVar16 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
        }
      }
      (**(code **)(*(long *)plVar23[0xd] + 0x10))((long *)plVar23[0xd],param_1[0x3d] + 0x30);
    }
    FUN_1095153f0(param_1 + 0x22,&stack0xffffffffffffffb8);
    plVar30 = param_1[0x23];
    for (plVar28 = param_1[0x22]; plVar28 != plVar30; plVar28 = plVar28 + 1) {
      FUN_10951aa50(*plVar28 + 0x30);
      lVar16 = *plVar28;
      if (*(char *)(lVar16 + 0x60) == '\x01') {
        *(undefined1 *)(lVar16 + 0x60) = 0;
      }
      lVar16 = *(long *)(lVar16 + 0x20);
      *(undefined8 *)(lVar16 + 0x28) = 0x3f8000003f800000;
      *(undefined8 *)(lVar16 + 0x20) = 0;
    }
    FUN_1095154d4(param_1);
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 8))();
    }
    return;
  }
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = (undefined8 *)0x0;
  puStack_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  FUN_109517e34(&puStack_f0,*param_2,param_2[1],param_2[1] - *param_2 >> 7);
  lVar16 = 0;
  if (puStack_e8 != puStack_f0) {
    lVar16 = LZCOUNT((long)puStack_e8 - (long)puStack_f0 >> 7) * -2 + 0x7e;
  }
  ppuStack_c8 = param_1;
  FUN_109517eb8(puStack_f0,puStack_e8,&ppuStack_c8,lVar16,1);
  ppuStack_c8 = (undefined8 **)((ulong)ppuStack_c8 & 0xffffffffffffff00);
  func_0x0001074b2d2c(alStack_108,(long)param_1[0x23] - (long)param_1[0x22] >> 3,&ppuStack_c8);
  puVar7 = puStack_e8;
  ppuVar1 = param_1 + 0x22;
  puVar17 = param_1[0x22];
  puVar31 = param_1[0x23];
  uVar12 = (long)puVar31 - (long)puVar17 >> 3;
  if (puStack_f0 != puStack_e8) {
    fVar43 = *(float *)((long)param_1[0x3d] + 0x34);
    uVar26 = uVar12;
    if (uVar12 < 2) {
      uVar26 = 1;
    }
    fVar45 = 1.0 - fVar43;
    puVar29 = puStack_f0;
    do {
      lVar16 = alStack_108[0];
      bVar4 = *(byte *)(puVar29 + 6);
      if (bVar4 == 1) {
        fVar34 = *(float *)((long)puVar29 + 0x2c);
        fVar39 = 1.0 - *(float *)((long)param_1[0x3d] + 0x5c);
        bVar9 = false;
        bVar10 = true;
        bVar11 = false;
        if (fVar34 < *(float *)((long)param_1[0x3d] + 0x5c)) {
          bVar9 = false;
          bVar10 = false;
          bVar11 = true;
          if (!NAN(fVar34) && !NAN(fVar39)) {
            bVar9 = fVar34 < fVar39;
            bVar10 = fVar34 == fVar39;
            bVar11 = false;
          }
        }
        if (bVar10 || bVar9 != bVar11) goto LAB_109514a40;
      }
      else {
LAB_109514a40:
        unaff_x27 = unaff_x27 & 0xffffffffffffff00;
        if (puVar31 == puVar17) {
          puVar14 = param_1[0x3d];
        }
        else {
          bVar9 = false;
          uVar13 = 0;
          uVar41 = 0xbf800000;
          do {
            while( true ) {
              uVar38 = uVar13;
              uVar32 = uVar38 >> 6;
              uVar25 = 1L << (uVar38 & 0x3f);
              uVar27 = *(ulong *)(lVar16 + uVar32 * 8);
              if ((uVar27 & uVar25) != 0) break;
              lVar33 = (*ppuVar1)[uVar38];
              uVar35 = 0;
              if (*(char *)(lVar33 + 0x60) == '\x01') {
                uVar13 = *(ulong *)(lVar33 + 0x38);
                if (uVar13 != 0) {
                  uVar18 = *(ulong *)(lVar33 + 0x58);
                  uVar19 = uVar13 - 1;
                  if ((uVar13 & uVar19) == 0) {
                    uVar21 = uVar19 & uVar18;
                  }
                  else {
                    uVar21 = uVar18;
                    if (uVar13 <= uVar18) {
                      uVar21 = 0;
                      if (uVar13 != 0) {
                        uVar21 = uVar18 / uVar13;
                      }
                      uVar21 = uVar18 - uVar21 * uVar13;
                    }
                  }
                  plVar23 = *(long **)(*(long *)(lVar33 + 0x30) + uVar21 * 8);
                  if (plVar23 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar23 = (long *)*plVar23;
                        if (plVar23 == (long *)0x0) goto LAB_1095152d4;
                        uVar24 = plVar23[1];
                        if (uVar18 == uVar24) break;
                        if ((uVar13 & uVar19) == 0) {
                          uVar24 = uVar24 & uVar19;
                        }
                        else if (uVar13 <= uVar24) {
                          uVar6 = 0;
                          if (uVar13 != 0) {
                            uVar6 = uVar24 / uVar13;
                          }
                          uVar24 = uVar24 - uVar6 * uVar13;
                        }
                        if (uVar24 != uVar21) goto LAB_1095152d4;
                      }
                    } while (plVar23[2] != uVar18);
                    func_0x0001094cf7e0(puVar29,plVar23 + 3);
                    goto LAB_109514b44;
                  }
                }
LAB_1095152d4:
                FUN_109262df8(&UNK_10f639994);
                goto LAB_1095152ec;
              }
LAB_109514b44:
              if (((float)uVar35 <= (float)uVar41) ||
                 (puVar14 = param_1[0x3d], (float)uVar35 <= *(float *)(puVar14 + 4))) break;
              if (((*(byte *)(puVar14 + 6) & bVar4) != 0) &&
                 (lVar20 = *(long *)(lVar33 + 0x20), *(char *)(lVar20 + 0x214) == '\x01')) {
                if (*(float *)((long)puVar29 + 0x2c) <= fVar43) {
                  bVar10 = false;
                }
                else {
                  if ((*(byte *)(lVar20 + 500) & 1) == 0) {
                    fVar34 = 0.5;
                    if (*(char *)(lVar20 + 0x1fc) == '\x01') {
                      lVar22 = 0xc;
                      goto LAB_109514bb4;
                    }
                  }
                  else {
                    lVar22 = 4;
LAB_109514bb4:
                    fVar34 = *(float *)(lVar20 + 0x1ec + lVar22);
                  }
                  bVar10 = fVar43 < fVar34;
                }
                if (*(float *)((long)puVar29 + 0x2c) <= fVar45) {
                  if ((*(byte *)(lVar20 + 500) & 1) == 0) {
                    fVar34 = 0.5;
                    if (*(char *)(lVar20 + 0x1fc) == '\x01') {
                      lVar22 = 0xc;
                      goto LAB_109514bf4;
                    }
                  }
                  else {
                    lVar22 = 4;
LAB_109514bf4:
                    fVar34 = *(float *)(lVar20 + 0x1ec + lVar22);
                  }
                  bVar11 = fVar34 <= fVar45;
                }
                else {
                  bVar11 = false;
                }
                if (!bVar10 && !bVar11) break;
              }
              bVar9 = true;
              uVar13 = uVar38 + 1;
              uVar41 = uVar35;
              unaff_x27 = uVar38;
              if (uVar38 + 1 == uVar26) goto LAB_109514c54;
            }
            uVar13 = uVar38 + 1;
          } while (uVar38 + 1 != uVar26);
          puVar14 = param_1[0x3d];
          if (bVar9) {
            lVar33 = (*ppuVar1)[unaff_x27];
            uVar32 = unaff_x27 >> 6;
            uVar27 = *(ulong *)(lVar16 + uVar32 * 8);
            uVar25 = 1L << (unaff_x27 & 0x3f);
            uVar38 = unaff_x27;
LAB_109514c54:
            *(ulong *)(lVar16 + uVar32 * 8) = uVar25 | uVar27;
            pppuVar2 = (undefined8 ***)(lVar33 + 8);
            pppuVar15 = (undefined8 ***)((long)puVar14 + 0x2c);
            if (*(float *)(puVar29 + 5) < *(float *)((long)puVar14 + 0x1c)) {
              iVar3 = (*(int *)((long)puVar14 + 0x2c) + 1) / 2;
              ppuStack_c8 = (undefined8 **)CONCAT44(ppuStack_c8._4_4_,iVar3);
              pppuVar15 = &ppuStack_c8;
              if (iVar3 <= *(int *)pppuVar2) {
                pppuVar15 = pppuVar2;
              }
            }
            *(int *)pppuVar2 = *(int *)pppuVar15;
            unaff_x27 = uVar38;
            goto LAB_109515040;
          }
        }
        if (*(float *)((long)puVar14 + 0x1c) <= *(float *)(puVar29 + 5)) {
          if ((*(byte *)((long)puVar14 + 0x31) & bVar4) != 0) {
            for (plVar23 = param_1[0x22]; plVar23 != param_1[0x23]; plVar23 = plVar23 + 1) {
              lVar16 = *(long *)(*plVar23 + 0x20);
              if (*(char *)(lVar16 + 0x214) == '\x01') {
                if (*(float *)((long)puVar29 + 0x2c) <= fVar43) {
                  bVar9 = false;
                }
                else {
                  if ((*(byte *)(lVar16 + 500) & 1) == 0) {
                    fVar34 = 0.5;
                    if (*(char *)(lVar16 + 0x1fc) == '\x01') {
                      lVar33 = 0xc;
                      goto LAB_109514d38;
                    }
                  }
                  else {
                    lVar33 = 4;
LAB_109514d38:
                    fVar34 = *(float *)(lVar16 + 0x1ec + lVar33);
                  }
                  bVar9 = fVar43 < fVar34;
                }
                if (*(float *)((long)puVar29 + 0x2c) <= fVar45) {
                  if ((*(byte *)(lVar16 + 500) & 1) == 0) {
                    fVar34 = 0.5;
                    if (*(char *)(lVar16 + 0x1fc) == '\x01') {
                      lVar33 = 0xc;
                      goto LAB_109514d78;
                    }
                  }
                  else {
                    lVar33 = 4;
LAB_109514d78:
                    fVar34 = *(float *)(lVar16 + 0x1ec + lVar33);
                  }
                  bVar10 = fVar34 <= fVar45;
                }
                else {
                  bVar10 = false;
                }
                if (bVar9 || bVar10) goto LAB_109515040;
              }
            }
          }
          (*(code *)(*param_1)[0xe])(&plStack_110,param_1);
          FUN_109503f40(&ppuStack_c8,&pppuStack_d8,puVar29);
          FUN_109503734(plStack_110 + 4,&ppuStack_c8);
          ppuVar44 = ppuStack_c0;
          if (ppuStack_c0 != (undefined8 **)0x0) {
            ppuVar36 = ppuStack_c0 + 1;
            do {
              puVar14 = *ppuVar36;
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(ppuVar36,0x10);
              if (bVar9) {
                *ppuVar36 = (undefined8 *)((long)puVar14 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (puVar14 == (undefined8 *)0x0) {
              (*(code *)(*ppuStack_c0)[2])(ppuStack_c0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
            }
          }
          plVar23 = plStack_110;
          uVar41 = *puVar29;
          *(undefined8 *)((long)plStack_110 + 0x14) = puVar29[1];
          *(undefined8 *)((long)plStack_110 + 0xc) = uVar41;
          puVar14 = param_1[0x3d];
          *(undefined4 *)(plStack_110 + 1) = *(undefined4 *)((long)puVar14 + 0x2c);
          if (puVar14[0x30] == puVar14[0x31]) {
            if (*(char *)(puVar14 + 0x18) == '\x01') {
              puVar14 = (undefined8 *)0x48;
              __Znwm();
              puVar14[1] = 0;
              puVar14[2] = 0;
              *puVar14 = &PTR_FUN_110afa4f8;
              puVar14[8] = 0;
              puVar14[5] = 0;
              puVar14[4] = 0;
              puVar14[7] = 0;
              puVar14[6] = 0;
              *(undefined4 *)(puVar14 + 8) = 0x3f800000;
              puVar14[3] = &PTR_FUN_110af81d0;
              plVar28 = (long *)plVar23[0xe];
              plVar23[0xd] = (long)(puVar14 + 3);
              plVar23[0xe] = (long)puVar14;
              if (plVar28 != (long *)0x0) {
                plVar23 = plVar28 + 1;
                do {
                  lVar16 = *plVar23;
                  cVar5 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar9) {
                    *plVar23 = lVar16 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar16 == 0) {
                  (**(code **)(*plVar28 + 0x10))(plVar28);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
                }
              }
              plVar28 = (long *)plStack_110[0xd];
              puVar14 = (undefined8 *)param_1[0x3d][0x19];
              plVar23 = (long *)param_1[0x3d][0x1a];
              if (plVar23 != (long *)0x0) {
                plVar30 = plVar23 + 1;
                do {
                  cVar5 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar30,0x10);
                  if (bVar9) {
                    *plVar30 = *plVar30 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              ppuStack_c8 = (undefined8 **)0x0;
              ppuStack_c0 = (undefined8 **)0x0;
              ppuStack_b8 = (undefined8 **)0x0;
              pppuStack_d8 = &ppuStack_c8;
              uStack_d0 = 0;
              ppuVar44 = (undefined8 **)0x10;
              puStack_a0 = puVar14;
              plStack_98 = plVar23;
              __Znwm();
              ppuStack_c0 = ppuVar44 + 2;
              *ppuVar44 = puVar14;
              ppuVar44[1] = plVar23;
              if (plVar23 != (long *)0x0) {
                plVar30 = plVar23 + 1;
                do {
                  cVar5 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar30,0x10);
                  if (bVar9) {
                    *plVar30 = *plVar30 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              ppuStack_c8 = ppuVar44;
              ppuStack_b8 = ppuStack_c0;
              (**(code **)(*plVar28 + 0x10))(plVar28,&ppuStack_c8);
              pppuStack_d8 = &ppuStack_c8;
              FUN_10950a490(&pppuStack_d8);
              if (plVar23 != (long *)0x0) {
                plVar28 = plVar23 + 1;
                do {
                  lVar16 = *plVar28;
                  cVar5 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar9) {
                    *plVar28 = lVar16 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar16 == 0) {
                  (**(code **)(*plVar23 + 0x10))(plVar23);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
                }
              }
            }
          }
          else {
            ppuVar44 = (undefined8 **)0x48;
            __Znwm();
            ppuVar44[1] = (undefined8 *)0x0;
            ppuVar44[2] = (undefined8 *)0x0;
            *ppuVar44 = &PTR_DAT_110afa548;
            ppuStack_c8 = ppuVar44 + 3;
            *ppuStack_c8 = &PTR_FUN_110af8b68;
            ppuVar44[8] = (undefined8 *)0x0;
            ppuVar44[5] = (undefined8 *)0x0;
            ppuVar44[4] = (undefined8 *)0x0;
            ppuVar44[7] = (undefined8 *)0x0;
            ppuVar44[6] = (undefined8 *)0x0;
            *(undefined4 *)(ppuVar44 + 8) = 0x3f800000;
            ppuStack_c0 = ppuVar44;
            FUN_10951538c(plVar23 + 0xd,&ppuStack_c8);
            ppuVar44 = ppuStack_c0;
            if (ppuStack_c0 != (undefined8 **)0x0) {
              ppuVar36 = ppuStack_c0 + 1;
              do {
                puVar14 = *ppuVar36;
                cVar5 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(ppuVar36,0x10);
                if (bVar9) {
                  *ppuVar36 = (undefined8 *)((long)puVar14 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (puVar14 == (undefined8 *)0x0) {
                (*(code *)(*ppuStack_c0)[2])(ppuStack_c0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar44);
              }
            }
            (**(code **)(*(long *)plStack_110[0xd] + 0x10))
                      ((long *)plStack_110[0xd],param_1[0x3d] + 0x30);
          }
          FUN_1095153f0(ppuVar1,&plStack_110);
          plVar23 = plStack_110;
          plStack_110 = (long *)0x0;
          if (plVar23 != (long *)0x0) {
            (**(code **)(*plVar23 + 8))();
          }
        }
      }
LAB_109515040:
      puVar29 = puVar29 + 0x10;
    } while (puVar29 != puVar7);
  }
  if (puVar31 != puVar17) {
    uVar26 = 0;
    ppuVar44 = (undefined8 **)NEON_fmov(0x3f800000,4);
    do {
      if ((*(ulong *)(alStack_108[0] + (uVar26 >> 6) * 8) >> (uVar26 & 0x3f) & 1) == 0) {
        if (param_1[0x40] == (long *)0x0) {
          ppuVar36 = (undefined8 **)0x0;
          ppuVar37 = ppuVar44;
        }
        else {
          (**(code **)(*param_1[0x40] + 0x28))(&ppuStack_c8);
          ppuVar36 = ppuStack_c8;
          ppuVar37 = ppuStack_c0;
        }
        lVar16 = param_1[0x22][uVar26];
        fVar45 = SUB84(ppuVar37,0) + SUB84(ppuVar36,0);
        fVar43 = (float)((ulong)ppuVar36 >> 0x20);
        fVar34 = (float)((ulong)ppuVar37 >> 0x20) + fVar43;
        uVar38 = CONCAT44(fVar34,fVar45);
        uVar25 = *(ulong *)(*(long *)(lVar16 + 0x20) + 0x20);
        uVar41 = *(undefined8 *)(*(long *)(lVar16 + 0x20) + 0x28);
        fVar39 = (float)(uVar25 >> 0x20);
        uVar13 = (ulong)ppuVar36 ^
                 ((ulong)ppuVar36 ^ uVar25) &
                 CONCAT44(-(uint)(fVar43 < fVar39),-(uint)(SUB84(ppuVar36,0) < (float)uVar25));
        fVar40 = (float)uVar41;
        fVar43 = (float)uVar25 + fVar40;
        fVar42 = (float)((ulong)uVar41 >> 0x20);
        fVar39 = fVar39 + fVar42;
        uVar38 = uVar38 ^ (uVar38 ^ CONCAT44(fVar39,fVar43)) &
                          CONCAT44(-(uint)(fVar39 < fVar34),-(uint)(fVar43 < fVar45));
        fVar43 = (float)uVar38 - (float)uVar13;
        fVar45 = (float)(uVar38 >> 0x20) - (float)(uVar13 >> 0x20);
        fVar34 = (float)NEON_fminnm(fVar43,fVar45);
        fVar43 = fVar43 * fVar45;
        if (fVar34 <= 0.0) {
          fVar43 = 0.0;
        }
        if (fVar40 * fVar42 < *(float *)(param_1[0x3d] + 0xc) * fVar43) {
          *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + -1;
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar12 != uVar26);
  }
  FUN_1095154d4(param_1);
  plVar23 = param_1[0x22];
  plVar28 = param_1[0x23];
  uVar12 = (long)plVar28 - (long)plVar23;
  if (param_3 <= (int)(uVar12 >> 3)) {
    uVar26 = (ulong)param_3;
    uVar13 = (long)uVar12 >> 3;
    if (uVar13 < uVar26) {
      uVar13 = uVar26 - uVar13;
      if ((ulong)((long)param_1[0x24] - (long)plVar28 >> 3) < uVar13) {
        if (param_3 < 0) goto LAB_1095152e8;
        uVar25 = (long)param_1[0x24] - (long)plVar23;
        uVar38 = (long)uVar25 >> 2;
        if (uVar38 <= uVar26) {
          uVar38 = uVar26;
        }
        if (0x7ffffffffffffff7 < uVar25) {
          uVar38 = 0x1fffffffffffffff;
        }
        ppuVar44 = ppuVar1;
        ppuStack_a8 = ppuVar1;
        FUN_109519a2c();
        puVar17 = param_1[0x22];
        lVar33 = (long)param_1[0x23] - (long)puVar17;
        lVar16 = (long)ppuVar44 + uVar12;
        _bzero(lVar16,uVar13 * 8);
        puVar31 = (undefined8 *)(lVar16 - lVar33);
        _memcpy(puVar31,puVar17,lVar33);
        ppuStack_c8 = (undefined8 **)param_1[0x22];
        param_1[0x22] = puVar31;
        param_1[0x23] = (undefined8 *)(lVar16 + uVar13 * 8);
        puStack_b0 = param_1[0x24];
        param_1[0x24] = ppuVar44 + uVar38;
        ppuStack_c0 = ppuStack_c8;
        ppuStack_b8 = ppuStack_c8;
        func_0x000109519a60(&ppuStack_c8);
        plVar28 = param_1[0x23];
      }
      else {
        _bzero(plVar28,uVar13 * 8);
        plVar28 = plVar28 + uVar13;
LAB_109515230:
        param_1[0x23] = plVar28;
      }
    }
    else if (uVar26 < uVar13) {
      plVar30 = plVar28;
      while (plVar28 = plVar23 + uVar26, plVar30 != plVar23 + uVar26) {
        plVar30 = plVar30 + -1;
        plVar28 = (long *)*plVar30;
        *plVar30 = 0;
        if (plVar28 != (long *)0x0) {
          (**(code **)(*plVar28 + 8))();
        }
      }
      goto LAB_109515230;
    }
    plVar23 = *ppuVar1;
  }
  for (; plVar23 != plVar28; plVar23 = plVar23 + 1) {
    FUN_10951aa50(*plVar23 + 0x30);
    if (*(char *)(*plVar23 + 0x60) == '\x01') {
      *(undefined1 *)(*plVar23 + 0x60) = 0;
    }
  }
  if (alStack_108[0] != 0) {
    __ZdlPv();
  }
  ppuStack_c8 = &puStack_f0;
  FUN_1094d8bdc(&ppuStack_c8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
LAB_1095152e8:
  FUN_109519a18();
LAB_1095152ec:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1095152f0);
  (*pcVar8)();
}



/* Entry: 10951fb9c; end: 10951fc3b;  */

void FUN_10951fb9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x168;
  __Znwm();
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_FUN_110afaae0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined4 *)(puVar1 + 0x21) = 0x42ff0000;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  *(undefined8 *)((long)puVar1 + 0x124) = 0;
  *(undefined8 *)((long)puVar1 + 0x11c) = 0;
  *(undefined8 *)((long)puVar1 + 0x134) = 0;
  *(undefined8 *)((long)puVar1 + 300) = 0;
  *(undefined8 *)((long)puVar1 + 0x114) = 0;
  *(undefined8 *)((long)puVar1 + 0x10c) = 0;
  puVar1[0x29] = puVar1 + 0x22;
  puVar1[0x2a] = puVar1 + 0x2b;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10951fc3c; end: 10951fdc7;  */

void FUN_10951fc3c(undefined4 *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined1 uStack_169;
  long lStack_168;
  undefined1 auStack_120 [208];
  
  if (*(long *)(param_3 + 0x10) != 0) {
    lVar4 = *(long *)(param_6 + 0x100);
    if (lVar4 == 0) {
      lVar4 = 0xa0;
      __Znwm();
      FUN_10950424c();
      lVar1 = *(long *)(param_6 + 0x100);
      *(long *)(param_6 + 0x100) = lVar4;
      if (lVar1 != 0) {
        FUN_109520070();
        lVar4 = *(long *)(param_6 + 0x100);
      }
    }
    uVar5 = NEON_rev64(**(undefined8 **)(param_3 + 0x40),4);
    *(undefined8 *)(lVar4 + 0x48) = uVar5;
    FUN_1095049a8(lVar4,param_3,param_6,param_6 + 0x108,param_4);
    *param_1 = 0x42ff0000;
    *(undefined8 *)(param_1 + 3) = 0;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 7) = 0;
    *(undefined8 *)(param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 0xb) = 0;
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
    *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined1 *)(param_1 + 0x18) = 4;
    *(undefined1 *)(param_1 + 0x2e) = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x32) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    *(undefined1 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x37) = 0;
    *(undefined8 *)(param_1 + 0x35) = 0;
    *(undefined1 *)(param_1 + 0x39) = 0;
    FUN_1094d91e0(auStack_120,param_6 + 0x108,*(undefined1 *)(param_3 + 0x60),param_3 + 0x68,
                  param_3 + 0x78,*(undefined8 *)(param_3 + 0xc0),*(undefined8 *)(param_3 + 200));
    FUN_109502d70(param_1,auStack_120);
    FUN_1094d92f0(auStack_120);
    return;
  }
  puVar2 = &UNK_10f572a93;
  func_0x000105688514();
  __ZdlPv();
  __Unwind_Resume();
  lVar4 = *(long *)(*(long *)(puVar2 + 0x1e8) + 0x160);
  lStack_188 = 0;
  lStack_180 = 0;
  uStack_178 = 0;
  FUN_1094fb9ec(&lStack_188,
                (*(long *)(lVar4 + 0x1c0) - *(long *)(lVar4 + 0x1b8) >> 3) * -0x5555555555555555);
  lVar1 = *(long *)(lVar4 + 0x1c0);
  for (lVar4 = *(long *)(lVar4 + 0x1b8); lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    lVar3 = *(long *)(param_3 + 0x20) + 0x40;
    lStack_168 = lVar4;
    FUN_1094e1a28(lVar3,lVar4,&UNK_10dd5b8f9,&lStack_168,&uStack_169);
    FUN_1094fbb0c(&lStack_188,lVar3 + 0x28);
  }
  FUN_10950454c(*(undefined8 *)(param_3 + 0x100),&lStack_188,param_3);
  uVar5 = *(undefined8 *)(*(long *)(**(long **)(puVar2 + 0x110) + 0x20) + 0x20);
  *(undefined8 *)(param_4 + 0xdc) =
       *(undefined8 *)(*(long *)(**(long **)(puVar2 + 0x110) + 0x20) + 0x28);
  *(undefined8 *)(param_4 + 0xd4) = uVar5;
  if (lStack_188 != 0) {
    lStack_180 = lStack_188;
    __ZdlPv();
  }
  return;
}



/* Entry: 10951fdc8; end: 10951fed7;  */

void FUN_10951fdc8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long lStack_48;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x1e8) + 0x160);
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  FUN_1094fb9ec(&lStack_68,
                (*(long *)(lVar3 + 0x1c0) - *(long *)(lVar3 + 0x1b8) >> 3) * -0x5555555555555555);
  lVar1 = *(long *)(lVar3 + 0x1c0);
  for (lVar3 = *(long *)(lVar3 + 0x1b8); lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    lVar2 = *(long *)(param_2 + 0x20) + 0x40;
    lStack_48 = lVar3;
    FUN_1094e1a28(lVar2,lVar3,&UNK_10dd5b8f9,&lStack_48,&uStack_49);
    FUN_1094fbb0c(&lStack_68,lVar2 + 0x28);
  }
  FUN_10950454c(*(undefined8 *)(param_2 + 0x100),&lStack_68,param_2);
  lVar3 = *(long *)(**(long **)(param_1 + 0x110) + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(param_3 + 0xdc) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(param_3 + 0xd4) = uVar4;
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    __ZdlPv();
  }
  return;
}



/* Entry: 10951fed8; end: 10951fedf;  */

void FUN_10951fed8(long *param_1,ulong *param_2,long *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  undefined ***pppuVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined **ppuStack_e0;
  long *plStack_d8;
  undefined **ppuStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined4 auStack_88 [2];
  ulong uStack_80;
  long *plStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)0x1c8;
  __Znwm();
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7[3] = 0;
  plVar7[2] = 0;
  plVar7[7] = 0;
  plVar7[6] = 0;
  plVar7[9] = 0;
  plVar7[8] = 0;
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[0xf] = 0;
  plVar7[0xe] = 0;
  plVar7[0x11] = 0;
  plVar7[0x10] = 0;
  plVar7[0x13] = 0;
  plVar7[0x12] = 0;
  plVar7[0x15] = 0;
  plVar7[0x14] = 0;
  plVar7[0x17] = 0;
  plVar7[0x16] = 0;
  plVar7[0x19] = 0;
  plVar7[0x18] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x1d] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x21] = 0;
  plVar7[0x20] = 0;
  plVar7[0x23] = 0;
  plVar7[0x22] = 0;
  plVar7[0x25] = 0;
  plVar7[0x24] = 0;
  plVar7[0x27] = 0;
  plVar7[0x26] = 0;
  plVar7[0x29] = 0;
  plVar7[0x28] = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2a] = 0;
  plVar7[0x2d] = 0;
  plVar7[0x2c] = 0;
  plVar7[0x2f] = 0;
  plVar7[0x2e] = 0;
  plVar7[0x31] = 0;
  plVar7[0x30] = 0;
  plVar7[0x33] = 0;
  plVar7[0x32] = 0;
  plVar7[0x35] = 0;
  plVar7[0x34] = 0;
  plVar7[0x37] = 0;
  plVar7[0x36] = 0;
  plVar7[0x38] = 0;
  *plVar7 = (long)&PTR_FUN_110af9d20;
  *(undefined1 *)(plVar7 + 1) = 1;
  plVar7[3] = 0x3f3333333f4ccccd;
  plVar7[2] = 0x3dcccccd3ecccccd;
  plVar7[5] = 0;
  plVar7[4] = 0;
  plVar7[4] = 0x3f4ccccd3f333333;
  plVar7[5] = 0x5ffffffff;
  *(undefined1 *)((long)plVar7 + 0x31) = 0;
  *(undefined4 *)((long)plVar7 + 0x34) = 0x3f266666;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[0xb] = 0x3f0000003c23d70a;
  plVar7[10] = 0x3fb333333f333333;
  *(undefined4 *)(plVar7 + 0xc) = 0x40000000;
  *(undefined1 *)((long)plVar7 + 0x65) = 0;
  func_0x000107c31940(plVar7 + 0xd,&UNK_10f5728ac);
  plVar7[0x12] = 0;
  *(undefined4 *)(plVar7 + 0x10) = 2;
  plVar7[0x11] = 0x3faeb851eb851eb8;
  plVar7[0x13] = 0;
  plVar7[0x14] = 0;
  func_0x000107c31940(plVar7 + 0x15,&UNK_10f5728b1);
  plVar7[0x1a] = 0;
  plVar7[0x19] = 0;
  *(undefined1 *)(plVar7 + 0x18) = 1;
  plVar7[0x1c] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x1e] = 0;
  plVar7[0x1d] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x20] = 0x200000001;
  plVar7[0x22] = 0;
  plVar7[0x21] = 0;
  plVar7[0x24] = 0;
  plVar7[0x23] = 0;
  plVar7[0x26] = 0;
  plVar7[0x25] = 0;
  plVar7[0x28] = 0;
  plVar7[0x27] = 0;
  plVar7[0x2a] = 0;
  plVar7[0x29] = 0;
  plVar7[0x2c] = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2e] = 0;
  plVar7[0x2d] = 0;
  plVar7[0x30] = 0;
  plVar7[0x2f] = 0;
  plVar7[0x32] = 0;
  plVar7[0x31] = 0;
  plVar7[0x34] = 0;
  plVar7[0x33] = 0;
  plVar7[0x35] = 0;
  *(undefined4 *)(plVar7 + 0x36) = 1;
  *(undefined2 *)((long)plVar7 + 0x1b4) = 0;
  FUN_1093809c4(plVar7 + 0x37);
  plVar8 = (long *)param_1[0x3d];
  param_1[0x3d] = (long)plVar7;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
    plVar7 = (long *)param_1[0x3d];
  }
  lVar16 = *param_3;
  *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(lVar16 + 0x14);
  plStack_e8 = *(long **)(lVar16 + 0x38);
  uStack_f0 = *(undefined8 *)(lVar16 + 0x30);
  if (*(long *)(lVar16 + 0x38) != 0) {
    plVar8 = (long *)(*(long *)(lVar16 + 0x38) + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  (**(code **)(*plVar7 + 0x10))(plVar7,&uStack_f0,param_4);
  plVar8 = plStack_e8;
  if (plStack_e8 != (long *)0x0) {
    plVar17 = plStack_e8 + 1;
    do {
      lVar16 = *plVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *plVar17 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (((ulong)plVar7 & 1) != 0) {
    FUN_1094f7728(param_1[0x3d] + 0x150,*param_3 + 0x30);
    cVar4 = *(char *)(*param_3 + 8);
    lVar16 = param_1[0x3d];
    *(char *)(lVar16 + 8) = cVar4;
    if (cVar4 == '\x01') {
      if (*(int *)(lVar16 + 0x1b0) == 0) {
        FUN_10937e740(&ppuStack_a0,&UNK_10f572623);
        FUN_109388c6c(2,&UNK_10f572551,&DAT_10f323079,0xa3,&ppuStack_a0);
        if ((long)plStack_90 < 0) {
          __ZdlPv(ppuStack_a0);
        }
      }
      else {
        uVar9 = 0x58;
        __Znwm(0x58);
        FUN_10953bdc4();
        FUN_109476864(param_1 + 0x34,uVar9);
      }
    }
    uVar18 = *(ulong *)(param_5 + 8);
    if (-1 < (char)*(byte *)(param_5 + 0x17)) {
      uVar18 = (ulong)*(byte *)(param_5 + 0x17);
    }
    if (uVar18 == 0) {
      FUN_10937e740(&ppuStack_a0,&UNK_10f5726a1);
      FUN_109388c6c(2,&UNK_10f572551,&DAT_10f323079,0xa7,&ppuStack_a0);
      if ((long)plStack_90 < 0) {
        __ZdlPv(ppuStack_a0);
      }
    }
    plVar8 = (long *)0x28;
    __Znwm();
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_DAT_110afa410;
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
    FUN_1094a39d4(plVar8 + 3,&ppuStack_a0,param_5,&uStack_c0);
    ppuStack_a0 = (undefined **)(plVar8 + 3);
    uStack_98 = plVar8;
    FUN_10951264c(param_1 + 0x47,&ppuStack_a0);
    plVar8 = uStack_98;
    if (uStack_98 != (long *)0x0) {
      plVar7 = uStack_98 + 1;
      do {
        lVar16 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*uStack_98 + 0x10))(uStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = (long *)0x288;
    __Znwm();
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_110afa300;
    _bzero(plVar8 + 4,0x268);
    plVar8[3] = (long)&PTR_FUN_110afb0d8;
    FUN_1093809c4(plVar8 + 4);
    FUN_1093809c4(plVar8 + 6);
    *(undefined1 *)(plVar8 + 8) = 1;
    *(undefined8 *)((long)plVar8 + 0x44) = 0x8000000080;
    *(undefined4 *)((long)plVar8 + 0x4c) = 1;
    plVar8[10] = 2;
    plVar8[0xc] = 0;
    plVar8[0xb] = 0;
    plVar8[0xe] = 0;
    plVar8[0xd] = 0;
    plVar8[0x10] = 0;
    plVar8[0xf] = 0;
    *(undefined1 *)(plVar8 + 0x11) = 1;
    plVar8[0x12] = 0;
    ppuStack_a0 = (undefined **)0x42ea000042f60000;
    uStack_98 = (long *)CONCAT44(uStack_98._4_4_,0x42d00000);
    plVar8[0x13] = 0;
    plVar8[0x14] = 0;
    FUN_1093c71a0(plVar8 + 0x12,&ppuStack_a0,(long)&uStack_98 + 4,3);
    plVar8[0x15] = 0x3f800000;
    func_0x000107c31940(plVar8 + 0x16,"data");
    plVar8[0x1a] = 0;
    plVar8[0x19] = 0;
    plVar8[0x39] = 0;
    plVar8[0x36] = 0;
    plVar8[0x35] = 0;
    plVar8[0x38] = 0;
    plVar8[0x37] = 0;
    plVar8[0x32] = 0;
    plVar8[0x31] = 0;
    plVar8[0x34] = 0;
    plVar8[0x33] = 0;
    plVar8[0x2e] = 0;
    plVar8[0x2d] = 0;
    plVar8[0x30] = 0;
    plVar8[0x2f] = 0;
    plVar8[0x2a] = 0;
    plVar8[0x29] = 0;
    plVar8[0x2c] = 0;
    plVar8[0x2b] = 0;
    plVar8[0x26] = 0;
    plVar8[0x25] = 0;
    plVar8[0x28] = 0;
    plVar8[0x27] = 0;
    plVar8[0x22] = 0;
    plVar8[0x21] = 0;
    plVar8[0x24] = 0;
    plVar8[0x23] = 0;
    plVar8[0x1e] = 0;
    plVar8[0x1d] = 0;
    plVar8[0x20] = 0;
    plVar8[0x1f] = 0;
    plVar8[0x1c] = 0;
    plVar8[0x1b] = 0;
    func_0x000107c31940(&ppuStack_a0,&DAT_10f68f0c6);
    plVar8[0x3a] = 0;
    plVar8[0x3b] = 0;
    plVar8[0x3c] = 0;
    func_0x000107c2ac94(plVar8 + 0x3a,&ppuStack_a0,auStack_88,1);
    if ((long)plStack_90 < 0) {
      __ZdlPv(ppuStack_a0);
    }
    func_0x000107c31940(&ppuStack_a0,"main");
    plVar8[0x3d] = 0;
    plVar8[0x3e] = 0;
    plVar8[0x3f] = 0;
    func_0x000107c2ac94(plVar8 + 0x3d,&ppuStack_a0,auStack_88,1);
    if ((long)plStack_90 < 0) {
      __ZdlPv(ppuStack_a0);
    }
    *(undefined2 *)(plVar8 + 0x41) = 0;
    plVar8[0x40] = 0;
    *(undefined4 *)((long)plVar8 + 0x20c) = 0x3f000000;
    plVar8[0x42] = 0;
    plVar8[0x44] = 0;
    plVar8[0x43] = 0;
    plVar8[0x45] = 0x42a000003e4ccccd;
    plVar8[0x46] = 0x240000000;
    plVar8[0x47] = 0x447a000041200000;
    *(undefined8 *)((long)plVar8 + 0x27c) = 0x3f80000000000000;
    plVar8[0x49] = 0;
    plVar8[0x48] = 0;
    plVar8[0x4b] = 0;
    plVar8[0x4a] = 0;
    plVar8[0x4d] = 0;
    plVar8[0x4c] = 0;
    *(undefined8 *)((long)plVar8 + 0x271) = 0;
    *(undefined8 *)((long)plVar8 + 0x269) = 0;
    ppuStack_a0 = (undefined **)(plVar8 + 3);
    uStack_98 = plVar8;
    func_0x000109511110(param_1[0x3d] + 0x160,&ppuStack_a0);
    plVar8 = uStack_98;
    if (uStack_98 != (long *)0x0) {
      plVar7 = uStack_98 + 1;
      do {
        lVar16 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*uStack_98 + 0x10))(uStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    lVar16 = param_1[0x3d];
    plVar8 = *(long **)(lVar16 + 0x160);
    plStack_b8 = *(long **)(lVar16 + 0x158);
    uStack_c0 = *(ulong *)(lVar16 + 0x150);
    if (*(long *)(lVar16 + 0x158) != 0) {
      plVar7 = (long *)(*(long *)(lVar16 + 0x158) + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    (**(code **)(*plVar8 + 0x10))(plVar8,&uStack_c0,param_4);
    plVar7 = plStack_b8;
    if (((ulong)plVar8 & 1) == 0) {
      bVar3 = *(byte *)(*(long *)(param_1[0x3d] + 0x160) + 0x28);
      if (plStack_b8 != (long *)0x0) {
        plVar17 = plStack_b8 + 1;
        do {
          lVar16 = *plVar17;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar8 = plVar7;
        }
      }
      if ((bVar3 & 1) != 0) goto LAB_1095122dc;
    }
    else if (plStack_b8 != (long *)0x0) {
      plVar17 = plStack_b8 + 1;
      do {
        lVar16 = *plVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *plVar17 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        plVar8 = plVar7;
      }
    }
    if ((*(byte *)(*(long *)(param_1[0x3d] + 0x160) + 0x28) & 1) == 0) {
LAB_109511ec8:
      FUN_10951be88();
      lVar16 = param_1[0x3d];
      plVar7 = plVar8;
      func_0x000107c31944();
      plVar17 = (long *)plVar8[1];
      if (plVar17 == (long *)0x0) {
        ppuVar10 = (undefined **)0x0;
      }
      else {
        uVar18 = (long)plVar17 - 1;
        if (((ulong)plVar17 & uVar18) == 0) {
          plVar19 = (long *)(uVar18 & (ulong)plVar7);
        }
        else {
          plVar19 = plVar7;
          if (plVar17 <= plVar7) {
            uVar20 = 0;
            if (plVar17 != (long *)0x0) {
              uVar20 = (ulong)plVar7 / (ulong)plVar17;
            }
            plVar19 = (long *)((long)plVar7 - uVar20 * (long)plVar17);
          }
        }
        plVar14 = *(long **)(*plVar8 + (long)plVar19 * 8);
        if (plVar14 != (long *)0x0) {
          for (plVar14 = (long *)*plVar14; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
            plVar15 = (long *)plVar14[1];
            if (plVar7 == plVar15) {
              plVar15 = plVar8;
              func_0x000104c4fbc4(plVar8,plVar14 + 2,lVar16 + 0xd8);
              if (((ulong)plVar15 & 1) != 0) {
                if ((long *)plVar14[8] == (long *)0x0) goto LAB_109512374;
                (**(code **)(*(long *)plVar14[8] + 0x30))(&ppuStack_a0);
                ppuVar10 = ppuStack_a0;
                goto LAB_109511f88;
              }
            }
            else {
              if (((ulong)plVar17 & uVar18) == 0) {
                plVar15 = (long *)((ulong)plVar15 & uVar18);
              }
              else if (plVar17 <= plVar15) {
                uVar20 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar20 = (ulong)plVar15 / (ulong)plVar17;
                }
                plVar15 = (long *)((long)plVar15 - uVar20 * (long)plVar17);
              }
              if (plVar15 != plVar19) break;
            }
          }
        }
        ppuVar10 = (undefined **)0x0;
      }
LAB_109511f88:
      ppuStack_a0 = (undefined **)0x0;
      plVar8 = (long *)param_1[0x46];
      param_1[0x46] = (long)ppuVar10;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
        ppuVar10 = ppuStack_a0;
        ppuStack_a0 = (undefined **)0x0;
        if (ppuVar10 != (undefined **)0x0) {
          (**(code **)(*ppuVar10 + 0x18))();
        }
        ppuVar10 = (undefined **)param_1[0x46];
      }
      if ((ppuVar10 == (undefined **)0x0) ||
         ((**(code **)(*ppuVar10 + 8))(ppuVar10,*(undefined8 *)(param_1[0x3d] + 0xf0)),
         ((ulong)ppuVar10 & 1) == 0)) {
        puVar11 = (undefined8 *)0x8;
        __Znwm();
        *puVar11 = &PTR_FUN_110afa728;
        plVar8 = (long *)param_1[0x46];
        param_1[0x46] = (long)puVar11;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      lVar16 = param_1[0x3d];
      if (*(char *)(lVar16 + 0x13f) < '\0') {
        if (*(long *)(lVar16 + 0x130) != 0) goto LAB_10951202c;
      }
      else if (*(char *)(lVar16 + 0x13f) != '\0') {
LAB_10951202c:
        uStack_98 = (long *)0x0;
        plStack_90 = (long *)0x0;
        auStack_88[0] = 2;
        ppuStack_a0 = &PTR_FUN_110afa2c0;
        uStack_80 = 0;
        plStack_78 = (long *)0x0;
        FUN_1094f7728(&uStack_98,lVar16 + 0x140);
        func_0x0001094d6804(&uStack_80,param_1 + 0x47);
        auStack_88[0] = (undefined4)param_4;
        lVar16 = param_1[0x3d];
        bVar3 = *(byte *)(lVar16 + 0x1b5);
        puVar12 = (ulong *)0xc0;
        __Znwm();
        if (*(char *)(lVar16 + 0x13f) < '\0') {
          func_0x000107c3192c(&uStack_c0,*(undefined8 *)(lVar16 + 0x128),
                              *(undefined8 *)(lVar16 + 0x130));
        }
        else {
          plStack_b8 = *(long **)(lVar16 + 0x130);
          uStack_c0 = *(ulong *)(lVar16 + 0x128);
          uStack_b0 = *(ulong *)(lVar16 + 0x138);
        }
        uVar18 = uStack_b0;
        uVar21 = param_2[1];
        uVar20 = *param_2;
        if (param_2[1] != 0) {
          plVar8 = (long *)(param_2[1] + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uVar2 = *(undefined4 *)(lVar16 + 0x28);
        puVar12[1] = (ulong)plStack_b8;
        *puVar12 = uStack_c0;
        uStack_c0 = 0;
        plStack_b8 = (long *)0x0;
        uStack_b0 = 0;
        puVar12[2] = uVar18;
        puVar12[3] = (ulong)&PTR_DAT_110afa2e0;
        puVar12[5] = (ulong)plStack_90;
        puVar12[4] = (ulong)uStack_98;
        if (plStack_90 != (long *)0x0) {
          plVar8 = plStack_90 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        *(undefined4 *)(puVar12 + 6) = auStack_88[0];
        puVar12[3] = (ulong)&PTR_FUN_110afa2c0;
        puVar12[8] = (ulong)plStack_78;
        puVar12[7] = uStack_80;
        if (plStack_78 != (long *)0x0) {
          plVar8 = plStack_78 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar5) {
              *plVar8 = *plVar8 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar12[10] = uVar21;
        puVar12[9] = uVar20;
        *(undefined4 *)(puVar12 + 0xb) = uVar2;
        puVar12[0xd] = 0;
        puVar12[0xe] = 0;
        puVar12[0xc] = 0;
        *(byte *)(puVar12 + 0xf) = (bVar3 ^ 0xff) & 1;
        puVar12[0x10] = 0x32aaaba7;
        puVar12[0x12] = 0;
        puVar12[0x11] = 0;
        puVar12[0x14] = 0;
        puVar12[0x13] = 0;
        puVar12[0x16] = 0;
        puVar12[0x15] = 0;
        puVar12[0x17] = 0;
        lVar16 = param_1[0x49];
        param_1[0x49] = (long)puVar12;
        if (lVar16 != 0) {
          FUN_10951a24c();
        }
        plVar8 = plStack_78;
        ppuStack_a0 = &PTR_FUN_110afa2c0;
        if (plStack_78 != (long *)0x0) {
          plVar7 = plStack_78 + 1;
          do {
            lVar16 = *plVar7;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_78 + 0x10))(plStack_78);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        plVar8 = plStack_90;
        ppuStack_a0 = &PTR_DAT_110afa2e0;
        if (plStack_90 != (long *)0x0) {
          plVar7 = plStack_90 + 1;
          do {
            lVar16 = *plVar7;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar5) {
              *plVar7 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_90 + 0x10))(plStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
        lVar16 = param_1[0x3d];
      }
      if (*(char *)(lVar16 + 0xa7) < '\0') {
        if (*(long *)(lVar16 + 0x98) != 0) goto LAB_109512220;
      }
      else if (*(char *)(lVar16 + 0xa7) != '\0') {
LAB_109512220:
        plVar8 = param_1;
        (**(code **)(*param_1 + 0x38))(param_1,param_2,*param_3,param_4);
        uVar18 = (ulong)*(byte *)(*param_3 + 0x14);
        plVar7 = (long *)param_1[0x40];
        (**(code **)(*plVar7 + 0x18))();
        FUN_1094f5b18(uVar18,plVar7);
        if ((uVar18 & 1) == 0) {
          FUN_10937e740(&ppuStack_a0,&UNK_10f572735);
          FUN_109388c6c(1,&UNK_10f572551,&DAT_10f323079,200,&ppuStack_a0);
          goto LAB_1095122cc;
        }
        (**(code **)(*(long *)param_1[0x40] + 0x18))();
        if ((int)plVar8 == 0) goto LAB_1095122dc;
        lVar16 = param_1[0x3d];
      }
      if ((*(long *)(lVar16 + 0x170) != 0) && (param_1[0x3e] == 0)) {
        *(undefined1 *)(lVar16 + 8) = 0;
      }
      uVar9 = 1;
      goto LAB_1095122e0;
    }
    FUN_10952f15c();
    func_0x00010952f820(&ppuStack_d0);
    if ((ppuStack_d0 == (undefined **)0x0) ||
       (___dynamic_cast(ppuStack_d0,&PTR_DAT_110afa6f0,&PTR_DAT_110afb348,0),
       ppuStack_d0 == (undefined **)0x0)) {
      pppuVar13 = &ppuStack_a0;
    }
    else {
      uStack_98 = plStack_c8;
      pppuVar13 = &ppuStack_d0;
      ppuStack_a0 = ppuStack_d0;
    }
    *pppuVar13 = (undefined **)0x0;
    pppuVar13[1] = (undefined **)0x0;
    plVar8 = uStack_98;
    ppuVar10 = ppuStack_a0;
    ppuStack_a0 = (undefined **)0x0;
    uStack_98 = (long *)0x0;
    plVar7 = (long *)param_1[0x3f];
    param_1[0x3f] = (long)plVar8;
    param_1[0x3e] = (long)ppuVar10;
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 1;
      do {
        lVar16 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    plVar8 = uStack_98;
    if (uStack_98 != (long *)0x0) {
      plVar7 = uStack_98 + 1;
      do {
        lVar16 = *plVar7;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*uStack_98 + 0x10))(uStack_98);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (plStack_c8 != (long *)0x0) {
      plVar8 = plStack_c8 + 1;
      do {
        lVar16 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *plVar8 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
      }
    }
    if (param_1[0x3e] != 0) {
      plVar8 = (long *)0x40;
      __Znwm();
      plVar7 = plVar8 + 1;
      *plVar7 = 0;
      plVar8[2] = 0;
      ppuVar10 = (undefined **)(plVar8 + 3);
      *ppuVar10 = (undefined *)&PTR_FUN_110afa3a0;
      *plVar8 = (long)&PTR_DAT_110afa350;
      plVar8[4] = 0;
      plVar8[5] = 0;
      plVar8[6] = 0;
      plVar8[7] = 0;
      lVar16 = *(long *)(param_1[0x3d] + 0x160);
      lVar1 = *(long *)(param_1[0x3d] + 0x168);
      ppuStack_a0 = ppuVar10;
      uStack_98 = plVar8;
      if (lVar1 == 0) {
        plVar8[4] = lVar16;
        plVar8[5] = 0;
      }
      else {
        plVar17 = (long *)(lVar1 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *plVar17 = *plVar17 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        plVar17 = (long *)plVar8[5];
        plVar8[4] = lVar16;
        plVar8[5] = lVar1;
        if (plVar17 != (long *)0x0) {
          plVar19 = plVar17 + 1;
          do {
            lVar16 = *plVar19;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *plVar19 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          }
        }
      }
      func_0x0001094d6804(plVar8 + 6,param_1 + 0x47);
      plVar17 = (long *)param_1[0x3e];
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppuStack_e0 = ppuVar10;
      plStack_d8 = plVar8;
      (**(code **)(*plVar17 + 0x10))(plVar17,param_2,&ppuStack_e0);
      plVar7 = plStack_d8;
      plVar8 = plVar17;
      if (plStack_d8 != (long *)0x0) {
        plVar19 = plStack_d8 + 1;
        do {
          lVar16 = *plVar19;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *plVar19 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar8 = plVar7;
        }
      }
      plVar7 = uStack_98;
      if (uStack_98 != (long *)0x0) {
        plVar19 = uStack_98 + 1;
        do {
          lVar16 = *plVar19;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *plVar19 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*uStack_98 + 0x10))(uStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          plVar8 = plVar7;
        }
      }
      if ((int)plVar17 == 0) goto LAB_1095122dc;
      if (*(char *)(*(long *)(param_1[0x3d] + 0x160) + 0x28) == '\x01') {
        plVar8 = (long *)(ulong)*(byte *)(*param_3 + 0x14);
        FUN_1094f5b18(plVar8,*(undefined1 *)(*(long *)(param_1[0x3e] + 0x18) + 0x70));
        if (((ulong)plVar8 & 1) == 0) {
          FUN_10937e740(&ppuStack_a0,&UNK_10f5726d5);
          FUN_109388c6c(1,&UNK_10f572551,&DAT_10f323079,0xaf,&ppuStack_a0);
          goto LAB_1095122cc;
        }
      }
      goto LAB_109511ec8;
    }
    FUN_10937e740(&ppuStack_a0,&UNK_10f5725f5);
    FUN_109388c6c(1,&UNK_10f572551,&UNK_10f5725e8,0x68,&ppuStack_a0);
LAB_1095122cc:
    if ((long)plStack_90 < 0) {
      __ZdlPv(ppuStack_a0);
    }
  }
LAB_1095122dc:
  uVar9 = 0;
LAB_1095122e0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail(uVar9);
LAB_109512374:
  func_0x000104c501e4();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10951237c);
  (*pcVar6)();
}



/* Entry: 10951fee0; end: 10951fef3;  */

void FUN_10951fee0(void)

{
  FUN_109510978();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10951fef4; end: 10951ffaf;  */

undefined8 * FUN_10951fef4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110afaae0;
  if (param_1[0x28] != 0) {
    piVar1 = (int *)(param_1[0x28] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x21);
    }
  }
  param_1[0x28] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  if (0 < *(int *)((long)param_1 + 0x10c)) {
    lVar5 = 0;
    lVar7 = param_1[0x29];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x10c));
  }
  puVar6 = (undefined8 *)param_1[0x2a];
  if (puVar6 != param_1 + 0x2b && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  lVar5 = param_1[0x20];
  param_1[0x20] = 0;
  if (lVar5 != 0) {
    FUN_109520070();
  }
  *param_1 = &PTR_FUN_110af9f50;
  FUN_10950c748(param_1 + 0x1a);
  FUN_10950c8cc(param_1 + 0x14);
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  FUN_1094fb118(param_1 + 0xf);
  func_0x00010950ca5c(param_1 + 0xd);
  func_0x00010950cab4(param_1 + 6);
  FUN_109503e90(param_1 + 4);
  return param_1;
}



/* Entry: 10951ffb0; end: 10952006f;  */

void FUN_10951ffb0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110afaae0;
  if (param_1[0x28] != 0) {
    piVar1 = (int *)(param_1[0x28] + 0x14);
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
      func_0x000109a848d4(param_1 + 0x21);
    }
  }
  param_1[0x28] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  if (0 < *(int *)((long)param_1 + 0x10c)) {
    lVar5 = 0;
    lVar7 = param_1[0x29];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x10c));
  }
  puVar6 = (undefined8 *)param_1[0x2a];
  if (puVar6 != param_1 + 0x2b && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  lVar5 = param_1[0x20];
  param_1[0x20] = 0;
  if (lVar5 != 0) {
    FUN_109520070();
  }
  FUN_10950c6e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109520070; end: 1095200cb;  */

void FUN_109520070(long param_1)

{
  long lStack_28;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x88);
    __ZdlPv();
  }
  lStack_28 = param_1 + 0x70;
  func_0x000104c607c8(&lStack_28);
  if (*(long *)(param_1 + 0x58) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    __ZdlPv();
  }
  __ZdlPv(param_1);
  return;
}



/* Entry: 1095200cc; end: 1095201ef;  */

undefined8 * FUN_1095200cc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  lVar4 = *param_2;
  plVar6 = param_1 + 10;
  *plVar6 = lVar4;
  lVar5 = param_2[1];
  param_1[0xb] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar4 = *plVar6;
  }
  *(undefined2 *)(param_1 + 0xc) = 0;
  func_0x000104bec9f0(param_1 + 1,
                      (*(long *)(lVar4 + 0x40) - *(long *)(lVar4 + 0x38) >> 3) * 0x6db6db6db6db6db7,
                      0);
  FUN_1095201f0(param_1 + 4,
                (*(long *)(*plVar6 + 0x40) - *(long *)(*plVar6 + 0x38) >> 3) * 0x6db6db6db6db6db7);
  FUN_1095201f0(param_1 + 7,
                (*(long *)(*plVar6 + 0x40) - *(long *)(*plVar6 + 0x38) >> 3) * 0x6db6db6db6db6db7);
  return param_1;
}



/* Entry: 1095201f0; end: 109520283;  */

void FUN_1095201f0(long *param_1,ulong param_2,float *param_3,long param_4,long param_5,
                  float *param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  float *pfVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  long lVar13;
  float *pfVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  undefined *puVar20;
  long lVar21;
  float *pfVar22;
  float *pfVar23;
  long *plVar24;
  long lVar25;
  float *pfVar26;
  float fVar27;
  float fVar28;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar8 = param_1[1] - *param_1 >> 3;
  bVar4 = param_2 < (ulong)(lVar8 * -0x5555555555555555);
  pfVar7 = (float *)(param_2 + lVar8 * 0x5555555555555555);
  if (bVar4 || pfVar7 == (float *)0x0) {
    if (bVar4) {
      plVar24 = (long *)(*param_1 + param_2 * 0x18);
      plVar5 = (long *)param_1[1];
      while (plVar3 = plVar5, plVar3 != plVar24) {
        plVar5 = plVar3 + -3;
        if (*plVar5 != 0) {
          plVar3[-2] = *plVar5;
          __ZdlPv();
        }
      }
      param_1[1] = (long)plVar24;
    }
    return;
  }
  lVar8 = param_1[1];
  if ((float *)((param_1[2] - lVar8 >> 3) * -0x5555555555555555) < pfVar7) {
    lVar8 = lVar8 - *param_1;
    puVar15 = (undefined *)((long)pfVar7 + (lVar8 >> 3) * -0x5555555555555555);
    if ((undefined *)0xaaaaaaaaaaaaaaa < puVar15) {
      FUN_1093957a0();
      pfVar6 = (float *)&DAT_10f62a4d8;
      FUN_109262df8();
      do {
        if (param_5 == 0) {
          return;
        }
        if ((param_4 <= param_7) || (param_5 <= param_7)) {
          if (param_4 <= param_5) {
            if (pfVar7 == pfVar6) {
              return;
            }
            lVar8 = -(long)param_6;
            pfVar11 = param_6;
            pfVar19 = pfVar6;
            do {
              pfVar23 = pfVar19 + 1;
              pfVar26 = pfVar11 + 1;
              *pfVar11 = *pfVar19;
              lVar8 = lVar8 + -4;
              pfVar11 = pfVar26;
              pfVar19 = pfVar23;
            } while (pfVar23 != pfVar7);
            do {
              if (pfVar7 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__memmove_11034c660)(pfVar6,param_6,-((long)param_6 + lVar8));
                return;
              }
              bVar4 = *param_6 <= *pfVar7;
              fVar28 = *pfVar7;
              if (bVar4) {
                fVar28 = *param_6;
              }
              lVar9 = 4;
              if (bVar4) {
                lVar9 = 0;
              }
              pfVar7 = (float *)((long)pfVar7 + lVar9);
              lVar9 = 0;
              if (bVar4) {
                lVar9 = 4;
              }
              param_6 = (float *)((long)param_6 + lVar9);
              *pfVar6 = fVar28;
              pfVar6 = pfVar6 + 1;
            } while (pfVar26 != param_6);
            return;
          }
          if (pfVar7 != param_3) {
            lVar8 = 0;
            do {
              *(undefined4 *)((long)param_6 + lVar8) = *(undefined4 *)((long)pfVar7 + lVar8);
              lVar8 = lVar8 + 4;
            } while ((float *)((long)pfVar7 + lVar8) != param_3);
            pfVar11 = (float *)((long)param_6 + lVar8);
            do {
              if (pfVar7 == pfVar6) {
                if (pfVar11 == param_6) {
                  return;
                }
                lVar8 = -4;
                do {
                  pfVar11 = pfVar11 + -1;
                  *(float *)((long)param_3 + lVar8) = *pfVar11;
                  lVar8 = lVar8 + -4;
                } while (pfVar11 != param_6);
                return;
              }
              fVar27 = pfVar11[-1];
              fVar28 = pfVar7[-1];
              pfVar19 = pfVar7 + -1;
              if (fVar28 <= fVar27) {
                pfVar11 = pfVar11 + -1;
                pfVar19 = pfVar7;
                fVar28 = fVar27;
              }
              pfVar7 = pfVar19;
              param_3 = param_3 + -1;
              *param_3 = fVar28;
            } while (pfVar11 != param_6);
            return;
          }
          return;
        }
        if (param_4 == 0) {
          return;
        }
        lVar8 = 0;
        lVar9 = -param_4;
        while (fVar28 = *(float *)((long)pfVar6 + lVar8), fVar28 <= *pfVar7) {
          lVar8 = lVar8 + 4;
          bVar4 = lVar9 == -1;
          lVar9 = lVar9 + 1;
          if (bVar4) {
            return;
          }
        }
        if (-lVar9 < param_5) {
          lVar25 = param_5 / 2;
          pfVar11 = pfVar7 + lVar25;
          puVar15 = (undefined *)((long)pfVar7 + (-lVar8 - (long)pfVar6));
          pfVar19 = pfVar7;
          if (puVar15 != (undefined *)0x0) {
            uVar10 = (long)puVar15 >> 2;
            pfVar19 = (float *)((long)pfVar6 + lVar8);
            do {
              uVar12 = uVar10 >> 1;
              uVar16 = uVar10 + (uVar10 >> 1 ^ 0xffffffffffffffff);
              uVar10 = uVar12;
              if (pfVar19[uVar12] <= *pfVar11) {
                uVar10 = uVar16;
                pfVar19 = pfVar19 + uVar12 + 1;
              }
            } while (uVar10 != 0);
          }
          param_4 = (long)((long)pfVar19 + (-lVar8 - (long)pfVar6)) >> 2;
        }
        else {
          if (lVar9 == -1) {
            *(float *)((long)pfVar6 + lVar8) = *pfVar7;
            *pfVar7 = fVar28;
            return;
          }
          param_4 = -lVar9 / 2;
          pfVar11 = pfVar7;
          if (pfVar7 != param_3) {
            uVar10 = (long)param_3 - (long)pfVar7 >> 2;
            pfVar19 = pfVar7;
            do {
              uVar16 = uVar10 >> 1;
              pfVar11 = pfVar19 + uVar16 + 1;
              uVar10 = uVar10 + (uVar10 >> 1 ^ 0xffffffffffffffff);
              if (*(float *)((long)pfVar6 + lVar8 + param_4 * 4) <= pfVar19[uVar16]) {
                pfVar11 = pfVar19;
                uVar10 = uVar16;
              }
              pfVar19 = pfVar11;
            } while (uVar10 != 0);
          }
          lVar25 = (long)pfVar11 - (long)pfVar7 >> 2;
          pfVar19 = (float *)((long)pfVar6 + lVar8 + param_4 * 4);
        }
        lVar1 = (long)pfVar7 - (long)pfVar19;
        pfVar26 = pfVar11;
        if ((lVar1 != 0) && (lVar2 = (long)pfVar11 - (long)pfVar7, pfVar26 = pfVar19, lVar2 != 0)) {
          if (pfVar19 + 1 == pfVar7) {
            fVar28 = *pfVar19;
            _memmove(pfVar19);
            *(float *)((long)pfVar19 + lVar2) = fVar28;
            pfVar26 = (float *)((long)pfVar19 + lVar2);
          }
          else if (pfVar7 + 1 == pfVar11) {
            pfVar7 = pfVar11 + -1;
            fVar28 = *pfVar7;
            pfVar26 = (float *)((long)pfVar11 - ((long)pfVar7 - (long)pfVar19));
            if ((long)pfVar7 - (long)pfVar19 != 0) {
              _memmove(pfVar26,pfVar19,(long)pfVar7 - (long)pfVar19);
            }
            *pfVar19 = fVar28;
          }
          else {
            lVar13 = lVar1 >> 2;
            lVar18 = lVar2 >> 2;
            lVar21 = lVar13;
            pfVar23 = pfVar19;
            pfVar22 = pfVar7;
            if (lVar13 == lVar2 >> 2) {
              do {
                pfVar14 = pfVar22 + 1;
                fVar28 = *pfVar23;
                *pfVar23 = *pfVar22;
                *pfVar22 = fVar28;
                pfVar26 = pfVar7;
                if (pfVar23 + 1 == pfVar7) break;
                pfVar23 = pfVar23 + 1;
                pfVar22 = pfVar14;
              } while (pfVar14 != pfVar11);
            }
            else {
              do {
                lVar17 = lVar18;
                lVar18 = 0;
                if (lVar17 != 0) {
                  lVar18 = lVar21 / lVar17;
                }
                lVar18 = lVar21 - lVar18 * lVar17;
                lVar21 = lVar17;
              } while (lVar18 != 0);
              pfVar7 = pfVar19 + lVar17;
              do {
                pfVar7 = pfVar7 + -1;
                fVar28 = *pfVar7;
                pfVar26 = (float *)(lVar1 + (long)pfVar7);
                pfVar23 = pfVar7;
                do {
                  pfVar22 = pfVar26;
                  *pfVar23 = *pfVar22;
                  lVar18 = (long)pfVar11 - (long)pfVar22 >> 2;
                  pfVar26 = (float *)((long)pfVar22 + lVar1);
                  if (lVar18 <= lVar13) {
                    pfVar26 = pfVar19 + (lVar13 - lVar18);
                  }
                  pfVar23 = pfVar22;
                } while (pfVar26 != pfVar7);
                *pfVar22 = fVar28;
              } while (pfVar7 != pfVar19);
              pfVar26 = (float *)(lVar2 + (long)pfVar19);
            }
          }
        }
        if (param_4 + lVar25 < (param_5 - (param_4 + lVar25)) - lVar9) {
          FUN_109520c5c((undefined *)((long)pfVar6 + lVar8),pfVar19,pfVar26);
          pfVar6 = pfVar26;
          pfVar7 = pfVar11;
          param_4 = -(param_4 + lVar9);
          param_5 = param_5 - lVar25;
        }
        else {
          FUN_109520c5c(pfVar26,pfVar11,param_3,-(param_4 + lVar9),param_5 - lVar25);
          pfVar6 = (float *)((long)pfVar6 + lVar8);
          pfVar7 = pfVar19;
          param_3 = pfVar26;
          param_5 = lVar25;
        }
      } while( true );
    }
    lVar9 = param_1[2] - *param_1 >> 3;
    puVar20 = (undefined *)(lVar9 * 0x5555555555555556);
    if (puVar20 < puVar15 || (long)puVar20 - (long)puVar15 == 0) {
      puVar20 = puVar15;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      puVar20 = (undefined *)0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (puVar20 == (undefined *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_1;
      FUN_1093957b4();
    }
    lVar8 = (long)plVar5 + lVar8;
    lVar9 = (((long)pfVar7 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(lVar8,lVar9);
    lVar25 = lVar8 - (param_1[1] - *param_1);
    _memcpy(lVar25);
    lStack_68 = *param_1;
    *param_1 = lVar25;
    param_1[1] = lVar8 + lVar9;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar5 + (long)puVar20 * 3);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x000108a11c04(&lStack_68);
  }
  else {
    if (pfVar7 != (float *)0x0) {
      lVar9 = (((long)pfVar7 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
      _bzero(lVar8,lVar9);
      lVar8 = lVar8 + lVar9;
    }
    param_1[1] = lVar8;
  }
  return;
}



/* Entry: 109520284; end: 109520773;  */

void FUN_109520284(long param_1,long *param_2,long param_3,ulong param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined *puVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar18 = *(long *)(param_1 + 0x50);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0x3f800000;
  func_0x000107c31940(&lStack_78,&UNK_10f572b0c);
  lVar10 = lVar18 + 0x68;
  func_0x0001067e045c(lVar10,&lStack_78);
  if (lStack_68 < 0) {
    __ZdlPv(lStack_78);
  }
  lVar14 = *(long *)(lVar18 + 8);
  lVar18 = *(long *)(lVar18 + 0x10);
  bVar9 = lVar14 == lVar18;
  if (lVar10 == 0) {
    while (!bVar9) {
      func_0x000107c2827c(&uStack_a0,lVar14,lVar14);
      lVar14 = lVar14 + 0x18;
      bVar9 = lVar14 == lVar18;
    }
  }
  else if (!bVar9) {
    do {
      lVar10 = param_3 + 0x40;
      FUN_1094e1944(lVar10,lVar14);
      if (lVar10 == 0) {
        FUN_109262df8(&UNK_10f639994);
        goto LAB_10952070c;
      }
      if (*(float *)(lVar10 + 0x30) < *(float *)(*(long *)(param_1 + 0x50) + 0x90)) {
        func_0x000107c2827c(&uStack_a0,lVar14,lVar14);
      }
      lVar14 = lVar14 + 0x18;
    } while (lVar14 != lVar18);
  }
  piVar19 = (int *)(*(long *)(*(long *)(param_1 + 0x50) + 0x38) + param_4 * 0x38);
  lStack_78 = 0;
  lStack_70 = 0;
  lStack_68 = 0;
  lVar10 = *(long *)(piVar19 + 2);
  if (*(long *)(piVar19 + 4) == lVar10) goto LAB_109520688;
  uVar21 = 0;
  lVar18 = *(long *)(*(long *)(param_1 + 0x50) + 0x20) + (long)*piVar19 * 0x10;
  do {
    lVar14 = *(long *)(param_1 + 0x50);
    piVar2 = (int *)(*(long *)(lVar14 + 0x20) + (long)*(int *)(lVar10 + uVar21 * 4) * 0x10);
    iVar4 = *piVar2;
    lVar10 = *(long *)(lVar14 + 8);
    uVar15 = (*(long *)(lVar14 + 0x10) - lVar10 >> 3) * -0x5555555555555555;
    if (uVar15 < (ulong)(long)iVar4 || uVar15 - (long)iVar4 == 0) {
      FUN_109520c48();
      goto LAB_10952070c;
    }
    iVar5 = piVar2[1];
    if (uVar15 < (ulong)(long)iVar5 || uVar15 - (long)iVar5 == 0) {
      FUN_109520c48();
LAB_10952070c:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x109520710);
      (*pcVar8)();
    }
    puVar11 = &uStack_a0;
    func_0x0001067e045c(puVar11,lVar10 + (long)iVar4 * 0x18);
    if (puVar11 != (undefined8 *)0x0) {
      puVar11 = &uStack_a0;
      func_0x0001067e045c(puVar11,lVar10 + (long)iVar5 * 0x18);
      if (puVar11 != (undefined8 *)0x0) {
        pfVar16 = (float *)(*param_2 + (long)*piVar2 * 0xc);
        pfVar12 = (float *)(*param_2 + (long)piVar2[1] * 0xc);
        fVar6 = SQRT((pfVar16[1] - pfVar12[1]) * (pfVar16[1] - pfVar12[1]) +
                     (*pfVar16 - *pfVar12) * (*pfVar16 - *pfVar12) +
                     (pfVar16[2] - pfVar12[2]) * (pfVar16[2] - pfVar12[2]));
        if (((((float)piVar2[2] <= fVar6) && (fVar6 <= (float)piVar2[3])) &&
            (fStack_a4 = *(float *)(*(long *)(piVar19 + 8) + uVar21 * 4) * fVar6,
            *(float *)(lVar18 + 8) <= fStack_a4)) && (fStack_a4 <= *(float *)(lVar18 + 0xc))) {
          FUN_1092c9a40(&lStack_78,&fStack_a4);
        }
      }
    }
    uVar21 = uVar21 + 1;
    lVar10 = *(long *)(piVar19 + 2);
  } while (uVar21 < (ulong)(*(long *)(piVar19 + 4) - lVar10 >> 2));
  if (lStack_78 != lStack_70) {
    __ZNSt3__16__sortIRNS_6__lessIffEEPfEEvT0_S5_T_(lStack_78,lStack_70,&fStack_a4);
    uVar21 = lStack_70 - lStack_78 >> 2;
    uVar1 = (int)((float)uVar21 * 0.334) + 1;
    uVar3 = (int)uVar1 >> 1;
    iVar4 = ((int)uVar21 - (uVar1 & 0xfffffffe)) + uVar3;
    plVar20 = (long *)(*(long *)(param_1 + 0x20) + param_4 * 0x18);
    lVar10 = *plVar20;
    lVar18 = plVar20[1];
    uVar21 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
    lVar14 = lVar18;
    lVar17 = lVar10;
    if (uVar21 != (long)iVar4 * 4) {
      lVar14 = lStack_78 + (long)iVar4 * 4;
      lVar17 = uVar21 + lStack_78;
      do {
        FUN_1092c9a40(plVar20,lVar17);
        lVar17 = lVar17 + 4;
      } while (lVar17 != lVar14);
      lVar14 = plVar20[1];
      lVar17 = *plVar20;
    }
    puVar7 = PTR___ZSt7nothrow_1103469d8;
    uVar13 = lVar18 - lVar10;
    lVar10 = lVar17 + ((long)(uVar13 * 0x40000000) >> 0x1e);
    uVar15 = (long)(uVar13 * 0x40000000) >> 0x20;
    uVar22 = lVar14 - lVar10 >> 2;
    uVar21 = uVar22;
    if ((long)(int)(uVar13 >> 2) <= (long)uVar22) {
      uVar21 = uVar15;
    }
    uVar13 = uVar21;
    if (0 < (long)uVar21) {
      do {
        lVar18 = uVar13 << 2;
        __ZnwmRKSt9nothrow_t(lVar18,puVar7);
        if (lVar18 != 0) {
          FUN_109520c5c(lVar17,lVar10,lVar14,uVar15,uVar22,lVar18,uVar13);
          __ZdlPv(lVar18);
          goto LAB_109520600;
        }
        uVar21 = uVar13 >> 1;
        bVar9 = 1 < uVar13;
        uVar13 = uVar21;
      } while (bVar9);
    }
    FUN_109520c5c(lVar17,lVar10,lVar14,uVar15,uVar22,0,uVar21);
LAB_109520600:
    FUN_1092c9a40(*(long *)(param_1 + 0x38) + param_4 * 0x18,
                  *plVar20 + (plVar20[1] - *plVar20 >> 3) * 4);
    uVar21 = 1L << (param_4 & 0x3f);
    uVar15 = *(ulong *)(*(long *)(param_1 + 8) + (param_4 >> 6) * 8);
    if ((uVar15 & uVar21) == 0) {
      plVar20 = (long *)(*(long *)(param_1 + 0x38) + param_4 * 0x18);
      lVar10 = *plVar20;
      lVar18 = plVar20[1];
      uVar13 = (ulong)(lVar18 - lVar10) >> 2;
      lVar14 = *(long *)(param_1 + 0x50);
      if (*(int *)(lVar14 + 0x50) <= (int)uVar13) {
        uVar22 = (ulong)*(uint *)(lVar14 + 0x60);
        if (0 < (int)*(uint *)(lVar14 + 0x60)) {
          lVar17 = uVar13 << 0x20;
          do {
            lVar17 = lVar17 + -0x100000000;
            if (*(float *)(lVar14 + 0x98) <
                ABS(*(float *)(lVar18 + -4) - *(float *)(lVar10 + (lVar17 >> 0x1e))))
            goto LAB_109520670;
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        goto LAB_109520640;
      }
LAB_109520670:
      uVar15 = uVar15 & (uVar21 ^ 0xffffffffffffffff);
    }
    else {
LAB_109520640:
      uVar15 = uVar15 | uVar21;
    }
    *(ulong *)(*(long *)(param_1 + 8) + (param_4 >> 6) * 8) = uVar15;
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
LAB_109520688:
  func_0x000107c2826c(&uStack_a0);
  return;
}



/* Entry: 109520774; end: 10952083f;  */

void FUN_109520774(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined1 uVar3;
  uint uVar4;
  
  piVar1 = param_1;
  FUN_109520840(param_1,param_3);
  if ((int)piVar1 != 0) {
    *param_1 = *param_1 + 1;
    if (*(long *)(*(long *)(param_1 + 0x14) + 0x40) == *(long *)(*(long *)(param_1 + 0x14) + 0x38))
    {
      uVar3 = 1;
    }
    else {
      uVar2 = 0;
      uVar4 = 1;
      do {
        FUN_109520284(param_1,param_2,param_3,uVar2);
        uVar4 = uVar4 & (uint)(*(ulong *)(*(long *)(param_1 + 2) + (uVar2 >> 6) * 8) >>
                              (uVar2 & 0x3f));
        uVar3 = (undefined1)uVar4;
        uVar2 = uVar2 + 1;
      } while (uVar2 < (ulong)((*(long *)(*(long *)(param_1 + 0x14) + 0x40) -
                                *(long *)(*(long *)(param_1 + 0x14) + 0x38) >> 3) *
                              0x6db6db6db6db6db7));
    }
    *(undefined1 *)(param_1 + 0x18) = uVar3;
  }
  return;
}



/* Entry: 109520840; end: 109520917;  */

undefined8 FUN_109520840(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar2 = *(long *)(param_1 + 0x50);
  if (*(long *)(lVar2 + 0x80) != 0) {
    func_0x000107c31940(auStack_48,&UNK_10f572b08);
    lVar2 = lVar2 + 0x68;
    func_0x0001067e045c(lVar2,auStack_48);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    if (lVar2 == 0) {
      plVar1 = *(long **)(param_2 + 0xf0);
      while( true ) {
        if (plVar1 == (long *)0x0) {
          return 0;
        }
        lVar2 = *(long *)(param_1 + 0x50) + 0x68;
        func_0x0001067e045c(lVar2,plVar1 + 2);
        if ((lVar2 != 0) && (*(float *)(*(long *)(param_1 + 0x50) + 0x94) < *(float *)(plVar1 + 5)))
        break;
        plVar1 = (long *)*plVar1;
      }
    }
  }
  return 1;
}



/* Entry: 109520918; end: 1095209af;  */

bool FUN_109520918(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  
  lVar4 = *(long *)(param_1 + 0x14);
  iVar5 = *param_1;
  if ((0 < *(int *)(lVar4 + 0x58)) && (*(int *)(lVar4 + 0x54) <= iVar5)) {
    piVar3 = param_1;
    FUN_1095209b0();
    if (((ulong)piVar3 & 1) != 0) {
      return false;
    }
    piVar3 = param_1 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar4 = *(long *)(param_1 + 0x14);
    if (*(int *)(lVar4 + 0x58) < param_1[1]) {
      *piVar3 = 0;
      return true;
    }
    iVar5 = *param_1;
  }
  return iVar5 < *(int *)(lVar4 + 0x54);
}



/* Entry: 1095209b0; end: 109520a1f;  */

byte FUN_1095209b0(long param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  
  if (*(char *)(*(long *)(param_1 + 0x50) + 0x5c) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x60);
  }
  else if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
    if (*(long **)(param_1 + 0x38) == *(long **)(param_1 + 0x40)) {
      bVar1 = 1;
    }
    else {
      bVar1 = 1;
      plVar2 = *(long **)(param_1 + 0x38);
      do {
        plVar3 = plVar2 + 3;
        bVar1 = bVar1 & *(int *)(*(long *)(param_1 + 0x50) + 0x50) <=
                        (int)((ulong)(plVar2[1] - *plVar2) >> 2);
        plVar2 = plVar3;
      } while (plVar3 != *(long **)(param_1 + 0x40));
    }
    *(byte *)(param_1 + 0x61) = bVar1;
  }
  else {
    bVar1 = 1;
  }
  return bVar1 & 1;
}



/* Entry: 109520a20; end: 109520ae3;  */

void FUN_109520a20(long *param_1,long param_2,float *param_3,float *param_4,long param_5,
                  long param_6,float *param_7,long param_8)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  float *pfVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  float *pfVar20;
  undefined *puVar21;
  long lVar22;
  float *pfVar23;
  float *pfVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  lVar25 = *(long *)(param_2 + 0x38);
  lVar9 = *(long *)(param_2 + 0x40);
  if (lVar25 != lVar9) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    func_0x0001073b504c(param_1,(lVar9 - lVar25 >> 3) * -0x5555555555555555);
    plVar5 = *(long **)(param_2 + 0x38);
    plVar6 = *(long **)(param_2 + 0x40);
    while( true ) {
      if (plVar5 == plVar6) {
        return;
      }
      if (*plVar5 == plVar5[1]) break;
      FUN_1092c9a40(param_1,plVar5[1] + -4);
      plVar5 = plVar5 + 3;
    }
    func_0x000105688514(&UNK_10f572ad8);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x109520ab4);
    (*pcVar3)();
  }
  plVar5 = (long *)&UNK_10f572ad8;
  func_0x000105688514();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  __Unwind_Resume();
  lVar25 = plVar5[1];
  if ((float *)((plVar5[2] - lVar25 >> 3) * -0x5555555555555555) < param_3) {
    lVar25 = lVar25 - *plVar5;
    puVar16 = (undefined *)((long)param_3 + (lVar25 >> 3) * -0x5555555555555555);
    if ((undefined *)0xaaaaaaaaaaaaaaa < puVar16) {
      FUN_1093957a0();
      pfVar7 = (float *)&DAT_10f62a4d8;
      FUN_109262df8();
      do {
        if (param_6 == 0) {
          return;
        }
        if ((param_5 <= param_8) || (param_6 <= param_8)) {
          if (param_5 <= param_6) {
            if (param_3 == pfVar7) {
              return;
            }
            lVar25 = -(long)param_7;
            pfVar12 = param_7;
            pfVar20 = pfVar7;
            do {
              pfVar11 = pfVar20 + 1;
              pfVar24 = pfVar12 + 1;
              *pfVar12 = *pfVar20;
              lVar25 = lVar25 + -4;
              pfVar12 = pfVar24;
              pfVar20 = pfVar11;
            } while (pfVar11 != param_3);
            do {
              if (param_3 == param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__memmove_11034c660)(pfVar7,param_7,-((long)param_7 + lVar25));
                return;
              }
              bVar4 = *param_7 <= *param_3;
              fVar27 = *param_3;
              if (bVar4) {
                fVar27 = *param_7;
              }
              lVar9 = 4;
              if (bVar4) {
                lVar9 = 0;
              }
              param_3 = (float *)((long)param_3 + lVar9);
              lVar9 = 0;
              if (bVar4) {
                lVar9 = 4;
              }
              param_7 = (float *)((long)param_7 + lVar9);
              *pfVar7 = fVar27;
              pfVar7 = pfVar7 + 1;
            } while (pfVar24 != param_7);
            return;
          }
          if (param_3 != param_4) {
            lVar25 = 0;
            do {
              *(undefined4 *)((long)param_7 + lVar25) = *(undefined4 *)((long)param_3 + lVar25);
              lVar25 = lVar25 + 4;
            } while ((float *)((long)param_3 + lVar25) != param_4);
            pfVar12 = (float *)((long)param_7 + lVar25);
            do {
              if (param_3 == pfVar7) {
                if (pfVar12 == param_7) {
                  return;
                }
                lVar25 = -4;
                do {
                  pfVar12 = pfVar12 + -1;
                  *(float *)((long)param_4 + lVar25) = *pfVar12;
                  lVar25 = lVar25 + -4;
                } while (pfVar12 != param_7);
                return;
              }
              fVar26 = pfVar12[-1];
              fVar27 = param_3[-1];
              pfVar20 = param_3 + -1;
              if (fVar27 <= fVar26) {
                pfVar12 = pfVar12 + -1;
                pfVar20 = param_3;
                fVar27 = fVar26;
              }
              param_3 = pfVar20;
              param_4 = param_4 + -1;
              *param_4 = fVar27;
            } while (pfVar12 != param_7);
            return;
          }
          return;
        }
        if (param_5 == 0) {
          return;
        }
        lVar25 = 0;
        lVar9 = -param_5;
        while (fVar27 = *(float *)((long)pfVar7 + lVar25), fVar27 <= *param_3) {
          lVar25 = lVar25 + 4;
          bVar4 = lVar9 == -1;
          lVar9 = lVar9 + 1;
          if (bVar4) {
            return;
          }
        }
        if (-lVar9 < param_6) {
          lVar8 = param_6 / 2;
          pfVar12 = param_3 + lVar8;
          puVar16 = (undefined *)((long)param_3 + (-lVar25 - (long)pfVar7));
          pfVar20 = param_3;
          if (puVar16 != (undefined *)0x0) {
            uVar10 = (long)puVar16 >> 2;
            pfVar20 = (float *)((long)pfVar7 + lVar25);
            do {
              uVar13 = uVar10 >> 1;
              uVar17 = uVar10 + (uVar10 >> 1 ^ 0xffffffffffffffff);
              uVar10 = uVar13;
              if (pfVar20[uVar13] <= *pfVar12) {
                uVar10 = uVar17;
                pfVar20 = pfVar20 + uVar13 + 1;
              }
            } while (uVar10 != 0);
          }
          param_5 = (long)((long)pfVar20 + (-lVar25 - (long)pfVar7)) >> 2;
        }
        else {
          if (lVar9 == -1) {
            *(float *)((long)pfVar7 + lVar25) = *param_3;
            *param_3 = fVar27;
            return;
          }
          param_5 = -lVar9 / 2;
          pfVar12 = param_3;
          if (param_3 != param_4) {
            uVar10 = (long)param_4 - (long)param_3 >> 2;
            pfVar20 = param_3;
            do {
              uVar17 = uVar10 >> 1;
              pfVar12 = pfVar20 + uVar17 + 1;
              uVar10 = uVar10 + (uVar10 >> 1 ^ 0xffffffffffffffff);
              if (*(float *)((long)pfVar7 + lVar25 + param_5 * 4) <= pfVar20[uVar17]) {
                pfVar12 = pfVar20;
                uVar10 = uVar17;
              }
              pfVar20 = pfVar12;
            } while (uVar10 != 0);
          }
          lVar8 = (long)pfVar12 - (long)param_3 >> 2;
          pfVar20 = (float *)((long)pfVar7 + lVar25 + param_5 * 4);
        }
        lVar1 = (long)param_3 - (long)pfVar20;
        pfVar24 = pfVar12;
        if ((lVar1 != 0) && (lVar2 = (long)pfVar12 - (long)param_3, pfVar24 = pfVar20, lVar2 != 0))
        {
          if (pfVar20 + 1 == param_3) {
            fVar27 = *pfVar20;
            _memmove(pfVar20);
            *(float *)((long)pfVar20 + lVar2) = fVar27;
            pfVar24 = (float *)((long)pfVar20 + lVar2);
          }
          else if (param_3 + 1 == pfVar12) {
            pfVar11 = pfVar12 + -1;
            fVar27 = *pfVar11;
            pfVar24 = (float *)((long)pfVar12 - ((long)pfVar11 - (long)pfVar20));
            if ((long)pfVar11 - (long)pfVar20 != 0) {
              _memmove(pfVar24,pfVar20,(long)pfVar11 - (long)pfVar20);
            }
            *pfVar20 = fVar27;
          }
          else {
            lVar14 = lVar1 >> 2;
            lVar19 = lVar2 >> 2;
            lVar22 = lVar14;
            pfVar11 = pfVar20;
            pfVar23 = param_3;
            if (lVar14 == lVar2 >> 2) {
              do {
                pfVar15 = pfVar23 + 1;
                fVar27 = *pfVar11;
                *pfVar11 = *pfVar23;
                *pfVar23 = fVar27;
                pfVar24 = param_3;
                if (pfVar11 + 1 == param_3) break;
                pfVar11 = pfVar11 + 1;
                pfVar23 = pfVar15;
              } while (pfVar15 != pfVar12);
            }
            else {
              do {
                lVar18 = lVar19;
                lVar19 = 0;
                if (lVar18 != 0) {
                  lVar19 = lVar22 / lVar18;
                }
                lVar19 = lVar22 - lVar19 * lVar18;
                lVar22 = lVar18;
              } while (lVar19 != 0);
              pfVar24 = pfVar20 + lVar18;
              do {
                pfVar24 = pfVar24 + -1;
                fVar27 = *pfVar24;
                pfVar11 = (float *)(lVar1 + (long)pfVar24);
                pfVar23 = pfVar24;
                do {
                  pfVar15 = pfVar11;
                  *pfVar23 = *pfVar15;
                  lVar19 = (long)pfVar12 - (long)pfVar15 >> 2;
                  pfVar11 = (float *)((long)pfVar15 + lVar1);
                  if (lVar19 <= lVar14) {
                    pfVar11 = pfVar20 + (lVar14 - lVar19);
                  }
                  pfVar23 = pfVar15;
                } while (pfVar11 != pfVar24);
                *pfVar15 = fVar27;
              } while (pfVar24 != pfVar20);
              pfVar24 = (float *)(lVar2 + (long)pfVar20);
            }
          }
        }
        if (param_5 + lVar8 < (param_6 - (param_5 + lVar8)) - lVar9) {
          FUN_109520c5c((undefined *)((long)pfVar7 + lVar25),pfVar20,pfVar24);
          pfVar7 = pfVar24;
          param_3 = pfVar12;
          param_5 = -(param_5 + lVar9);
          param_6 = param_6 - lVar8;
        }
        else {
          FUN_109520c5c(pfVar24,pfVar12,param_4,-(param_5 + lVar9),param_6 - lVar8);
          pfVar7 = (float *)((long)pfVar7 + lVar25);
          param_3 = pfVar20;
          param_4 = pfVar24;
          param_6 = lVar8;
        }
      } while( true );
    }
    lVar9 = plVar5[2] - *plVar5 >> 3;
    puVar21 = (undefined *)(lVar9 * 0x5555555555555556);
    if (puVar21 < puVar16 || (long)puVar21 - (long)puVar16 == 0) {
      puVar21 = puVar16;
    }
    if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      puVar21 = (undefined *)0xaaaaaaaaaaaaaaa;
    }
    plStack_78 = plVar5;
    if (puVar21 == (undefined *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = plVar5;
      FUN_1093957b4();
    }
    puVar16 = (undefined *)((long)plVar6 + lVar25);
    lVar25 = (((long)param_3 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(puVar16,lVar25);
    lVar9 = (long)puVar16 - (plVar5[1] - *plVar5);
    _memcpy(lVar9);
    lStack_98 = *plVar5;
    *plVar5 = lVar9;
    plVar5[1] = (long)(puVar16 + lVar25);
    lStack_80 = plVar5[2];
    plVar5[2] = (long)(plVar6 + (long)puVar21 * 3);
    lStack_90 = lStack_98;
    lStack_88 = lStack_98;
    func_0x000108a11c04(&lStack_98);
  }
  else {
    if (param_3 != (float *)0x0) {
      lVar9 = (((long)param_3 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
      _bzero(lVar25,lVar9);
      lVar25 = lVar25 + lVar9;
    }
    plVar5[1] = lVar25;
  }
  return;
}



/* Entry: 109520ae4; end: 109520c47;  */

void FUN_109520ae4(long *param_1,float *param_2,float *param_3,long param_4,long param_5,
                  float *param_6,long param_7)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  undefined *puVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  
  lVar23 = param_1[1];
  if ((float *)((param_1[2] - lVar23 >> 3) * -0x5555555555555555) < param_2) {
    lVar23 = lVar23 - *param_1;
    puVar13 = (undefined *)((long)param_2 + (lVar23 >> 3) * -0x5555555555555555);
    if ((undefined *)0xaaaaaaaaaaaaaaa < puVar13) {
      FUN_1093957a0();
      pfVar5 = (float *)&DAT_10f62a4d8;
      FUN_109262df8();
      do {
        if (param_5 == 0) {
          return;
        }
        if ((param_4 <= param_7) || (param_5 <= param_7)) {
          if (param_4 <= param_5) {
            if (param_2 == pfVar5) {
              return;
            }
            lVar23 = -(long)param_6;
            pfVar9 = param_6;
            pfVar17 = pfVar5;
            do {
              pfVar8 = pfVar17 + 1;
              pfVar22 = pfVar9 + 1;
              *pfVar9 = *pfVar17;
              lVar23 = lVar23 + -4;
              pfVar9 = pfVar22;
              pfVar17 = pfVar8;
            } while (pfVar8 != param_2);
            do {
              if (param_2 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__memmove_11034c660)(pfVar5,param_6,-((long)param_6 + lVar23));
                return;
              }
              bVar3 = *param_6 <= *param_2;
              fVar25 = *param_2;
              if (bVar3) {
                fVar25 = *param_6;
              }
              lVar6 = 4;
              if (bVar3) {
                lVar6 = 0;
              }
              param_2 = (float *)((long)param_2 + lVar6);
              lVar6 = 0;
              if (bVar3) {
                lVar6 = 4;
              }
              param_6 = (float *)((long)param_6 + lVar6);
              *pfVar5 = fVar25;
              pfVar5 = pfVar5 + 1;
            } while (pfVar22 != param_6);
            return;
          }
          if (param_2 != param_3) {
            lVar23 = 0;
            do {
              *(undefined4 *)((long)param_6 + lVar23) = *(undefined4 *)((long)param_2 + lVar23);
              lVar23 = lVar23 + 4;
            } while ((float *)((long)param_2 + lVar23) != param_3);
            pfVar9 = (float *)((long)param_6 + lVar23);
            do {
              if (param_2 == pfVar5) {
                if (pfVar9 == param_6) {
                  return;
                }
                lVar23 = -4;
                do {
                  pfVar9 = pfVar9 + -1;
                  *(float *)((long)param_3 + lVar23) = *pfVar9;
                  lVar23 = lVar23 + -4;
                } while (pfVar9 != param_6);
                return;
              }
              fVar24 = pfVar9[-1];
              fVar25 = param_2[-1];
              pfVar17 = param_2 + -1;
              if (fVar25 <= fVar24) {
                pfVar9 = pfVar9 + -1;
                pfVar17 = param_2;
                fVar25 = fVar24;
              }
              param_2 = pfVar17;
              param_3 = param_3 + -1;
              *param_3 = fVar25;
            } while (pfVar9 != param_6);
            return;
          }
          return;
        }
        if (param_4 == 0) {
          return;
        }
        lVar23 = 0;
        lVar6 = -param_4;
        while (fVar25 = *(float *)((long)pfVar5 + lVar23), fVar25 <= *param_2) {
          lVar23 = lVar23 + 4;
          bVar3 = lVar6 == -1;
          lVar6 = lVar6 + 1;
          if (bVar3) {
            return;
          }
        }
        if (-lVar6 < param_5) {
          lVar21 = param_5 / 2;
          pfVar9 = param_2 + lVar21;
          puVar13 = (undefined *)((long)param_2 + (-lVar23 - (long)pfVar5));
          pfVar17 = param_2;
          if (puVar13 != (undefined *)0x0) {
            uVar7 = (long)puVar13 >> 2;
            pfVar17 = (float *)((long)pfVar5 + lVar23);
            do {
              uVar10 = uVar7 >> 1;
              uVar14 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
              uVar7 = uVar10;
              if (pfVar17[uVar10] <= *pfVar9) {
                uVar7 = uVar14;
                pfVar17 = pfVar17 + uVar10 + 1;
              }
            } while (uVar7 != 0);
          }
          param_4 = (long)((long)pfVar17 + (-lVar23 - (long)pfVar5)) >> 2;
        }
        else {
          if (lVar6 == -1) {
            *(float *)((long)pfVar5 + lVar23) = *param_2;
            *param_2 = fVar25;
            return;
          }
          param_4 = -lVar6 / 2;
          pfVar9 = param_2;
          if (param_2 != param_3) {
            uVar7 = (long)param_3 - (long)param_2 >> 2;
            pfVar17 = param_2;
            do {
              uVar14 = uVar7 >> 1;
              pfVar9 = pfVar17 + uVar14 + 1;
              uVar7 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
              if (*(float *)((long)pfVar5 + lVar23 + param_4 * 4) <= pfVar17[uVar14]) {
                pfVar9 = pfVar17;
                uVar7 = uVar14;
              }
              pfVar17 = pfVar9;
            } while (uVar7 != 0);
          }
          lVar21 = (long)pfVar9 - (long)param_2 >> 2;
          pfVar17 = (float *)((long)pfVar5 + lVar23 + param_4 * 4);
        }
        lVar1 = (long)param_2 - (long)pfVar17;
        pfVar22 = pfVar9;
        if ((lVar1 != 0) && (lVar2 = (long)pfVar9 - (long)param_2, pfVar22 = pfVar17, lVar2 != 0)) {
          if (pfVar17 + 1 == param_2) {
            fVar25 = *pfVar17;
            _memmove(pfVar17);
            *(float *)((long)pfVar17 + lVar2) = fVar25;
            pfVar22 = (float *)((long)pfVar17 + lVar2);
          }
          else if (param_2 + 1 == pfVar9) {
            pfVar8 = pfVar9 + -1;
            fVar25 = *pfVar8;
            pfVar22 = (float *)((long)pfVar9 - ((long)pfVar8 - (long)pfVar17));
            if ((long)pfVar8 - (long)pfVar17 != 0) {
              _memmove(pfVar22,pfVar17,(long)pfVar8 - (long)pfVar17);
            }
            *pfVar17 = fVar25;
          }
          else {
            lVar11 = lVar1 >> 2;
            lVar16 = lVar2 >> 2;
            lVar19 = lVar11;
            pfVar8 = pfVar17;
            pfVar20 = param_2;
            if (lVar11 == lVar2 >> 2) {
              do {
                pfVar12 = pfVar20 + 1;
                fVar25 = *pfVar8;
                *pfVar8 = *pfVar20;
                *pfVar20 = fVar25;
                pfVar22 = param_2;
                if (pfVar8 + 1 == param_2) break;
                pfVar8 = pfVar8 + 1;
                pfVar20 = pfVar12;
              } while (pfVar12 != pfVar9);
            }
            else {
              do {
                lVar15 = lVar16;
                lVar16 = 0;
                if (lVar15 != 0) {
                  lVar16 = lVar19 / lVar15;
                }
                lVar16 = lVar19 - lVar16 * lVar15;
                lVar19 = lVar15;
              } while (lVar16 != 0);
              pfVar22 = pfVar17 + lVar15;
              do {
                pfVar22 = pfVar22 + -1;
                fVar25 = *pfVar22;
                pfVar8 = (float *)(lVar1 + (long)pfVar22);
                pfVar20 = pfVar22;
                do {
                  pfVar12 = pfVar8;
                  *pfVar20 = *pfVar12;
                  lVar16 = (long)pfVar9 - (long)pfVar12 >> 2;
                  pfVar8 = (float *)((long)pfVar12 + lVar1);
                  if (lVar16 <= lVar11) {
                    pfVar8 = pfVar17 + (lVar11 - lVar16);
                  }
                  pfVar20 = pfVar12;
                } while (pfVar8 != pfVar22);
                *pfVar12 = fVar25;
              } while (pfVar22 != pfVar17);
              pfVar22 = (float *)(lVar2 + (long)pfVar17);
            }
          }
        }
        if (param_4 + lVar21 < (param_5 - (param_4 + lVar21)) - lVar6) {
          FUN_109520c5c((undefined *)((long)pfVar5 + lVar23),pfVar17,pfVar22);
          pfVar5 = pfVar22;
          param_2 = pfVar9;
          param_4 = -(param_4 + lVar6);
          param_5 = param_5 - lVar21;
        }
        else {
          FUN_109520c5c(pfVar22,pfVar9,param_3,-(param_4 + lVar6),param_5 - lVar21);
          pfVar5 = (float *)((long)pfVar5 + lVar23);
          param_2 = pfVar17;
          param_3 = pfVar22;
          param_5 = lVar21;
        }
      } while( true );
    }
    lVar6 = param_1[2] - *param_1 >> 3;
    puVar18 = (undefined *)(lVar6 * 0x5555555555555556);
    if (puVar18 < puVar13 || (long)puVar18 - (long)puVar13 == 0) {
      puVar18 = puVar13;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      puVar18 = (undefined *)0xaaaaaaaaaaaaaaa;
    }
    plStack_48 = param_1;
    if (puVar18 == (undefined *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_1093957b4();
    }
    lVar23 = (long)plVar4 + lVar23;
    lVar6 = (((long)param_2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
    _bzero(lVar23,lVar6);
    lVar21 = lVar23 - (param_1[1] - *param_1);
    _memcpy(lVar21);
    lStack_68 = *param_1;
    *param_1 = lVar21;
    param_1[1] = lVar23 + lVar6;
    lStack_50 = param_1[2];
    param_1[2] = (long)(plVar4 + (long)puVar18 * 3);
    lStack_60 = lStack_68;
    lStack_58 = lStack_68;
    func_0x000108a11c04(&lStack_68);
  }
  else {
    if (param_2 != (float *)0x0) {
      lVar6 = (((long)param_2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18;
      _bzero(lVar23,lVar6);
      lVar23 = lVar23 + lVar6;
    }
    param_1[1] = lVar23;
  }
  return;
}



/* Entry: 109520c48; end: 109520c5b;  */

void FUN_109520c48(undefined8 param_1,float *param_2,float *param_3,long param_4,long param_5,
                  float *param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  
  pfVar5 = (float *)&DAT_10f62a4d8;
  FUN_109262df8();
  do {
    if (param_5 == 0) {
      return;
    }
    if ((param_4 <= param_7) || (param_5 <= param_7)) {
      if (param_4 <= param_5) {
        if (param_2 == pfVar5) {
          return;
        }
        lVar21 = -(long)param_6;
        pfVar9 = param_6;
        pfVar16 = pfVar5;
        do {
          pfVar8 = pfVar16 + 1;
          pfVar19 = pfVar9 + 1;
          *pfVar9 = *pfVar16;
          lVar21 = lVar21 + -4;
          pfVar9 = pfVar19;
          pfVar16 = pfVar8;
        } while (pfVar8 != param_2);
        do {
          if (param_2 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__memmove_11034c660)(pfVar5,param_6,-((long)param_6 + lVar21));
            return;
          }
          bVar4 = *param_6 <= *param_2;
          fVar23 = *param_2;
          if (bVar4) {
            fVar23 = *param_6;
          }
          lVar20 = 4;
          if (bVar4) {
            lVar20 = 0;
          }
          param_2 = (float *)((long)param_2 + lVar20);
          lVar20 = 0;
          if (bVar4) {
            lVar20 = 4;
          }
          param_6 = (float *)((long)param_6 + lVar20);
          *pfVar5 = fVar23;
          pfVar5 = pfVar5 + 1;
        } while (pfVar19 != param_6);
        return;
      }
      if (param_2 != param_3) {
        lVar21 = 0;
        do {
          *(undefined4 *)((long)param_6 + lVar21) = *(undefined4 *)((long)param_2 + lVar21);
          lVar21 = lVar21 + 4;
        } while ((float *)((long)param_2 + lVar21) != param_3);
        pfVar9 = (float *)((long)param_6 + lVar21);
        do {
          if (param_2 == pfVar5) {
            if (pfVar9 == param_6) {
              return;
            }
            lVar21 = -4;
            do {
              pfVar9 = pfVar9 + -1;
              *(float *)((long)param_3 + lVar21) = *pfVar9;
              lVar21 = lVar21 + -4;
            } while (pfVar9 != param_6);
            return;
          }
          fVar22 = pfVar9[-1];
          fVar23 = param_2[-1];
          pfVar16 = param_2 + -1;
          if (fVar23 <= fVar22) {
            pfVar9 = pfVar9 + -1;
            pfVar16 = param_2;
            fVar23 = fVar22;
          }
          param_2 = pfVar16;
          param_3 = param_3 + -1;
          *param_3 = fVar23;
        } while (pfVar9 != param_6);
        return;
      }
      return;
    }
    if (param_4 == 0) {
      return;
    }
    lVar21 = 0;
    lVar20 = -param_4;
    while (fVar23 = *(float *)((long)pfVar5 + lVar21), fVar23 <= *param_2) {
      lVar21 = lVar21 + 4;
      bVar4 = lVar20 == -1;
      lVar20 = lVar20 + 1;
      if (bVar4) {
        return;
      }
    }
    if (-lVar20 < param_5) {
      lVar6 = param_5 / 2;
      pfVar9 = param_2 + lVar6;
      puVar1 = (undefined *)((long)param_2 + (-lVar21 - (long)pfVar5));
      pfVar16 = param_2;
      if (puVar1 != (undefined *)0x0) {
        uVar7 = (long)puVar1 >> 2;
        pfVar16 = (float *)((long)pfVar5 + lVar21);
        do {
          uVar10 = uVar7 >> 1;
          uVar13 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
          uVar7 = uVar10;
          if (pfVar16[uVar10] <= *pfVar9) {
            uVar7 = uVar13;
            pfVar16 = pfVar16 + uVar10 + 1;
          }
        } while (uVar7 != 0);
      }
      param_4 = (long)((long)pfVar16 + (-lVar21 - (long)pfVar5)) >> 2;
    }
    else {
      if (lVar20 == -1) {
        *(float *)((long)pfVar5 + lVar21) = *param_2;
        *param_2 = fVar23;
        return;
      }
      param_4 = -lVar20 / 2;
      pfVar9 = param_2;
      if (param_2 != param_3) {
        uVar7 = (long)param_3 - (long)param_2 >> 2;
        pfVar16 = param_2;
        do {
          uVar13 = uVar7 >> 1;
          pfVar9 = pfVar16 + uVar13 + 1;
          uVar7 = uVar7 + (uVar7 >> 1 ^ 0xffffffffffffffff);
          if (*(float *)((long)pfVar5 + lVar21 + param_4 * 4) <= pfVar16[uVar13]) {
            pfVar9 = pfVar16;
            uVar7 = uVar13;
          }
          pfVar16 = pfVar9;
        } while (uVar7 != 0);
      }
      lVar6 = (long)pfVar9 - (long)param_2 >> 2;
      pfVar16 = (float *)((long)pfVar5 + lVar21 + param_4 * 4);
    }
    lVar2 = (long)param_2 - (long)pfVar16;
    pfVar19 = pfVar9;
    if ((lVar2 != 0) && (lVar3 = (long)pfVar9 - (long)param_2, pfVar19 = pfVar16, lVar3 != 0)) {
      if (pfVar16 + 1 == param_2) {
        fVar23 = *pfVar16;
        _memmove(pfVar16);
        *(float *)((long)pfVar16 + lVar3) = fVar23;
        pfVar19 = (float *)((long)pfVar16 + lVar3);
      }
      else if (param_2 + 1 == pfVar9) {
        pfVar8 = pfVar9 + -1;
        fVar23 = *pfVar8;
        pfVar19 = (float *)((long)pfVar9 - ((long)pfVar8 - (long)pfVar16));
        if ((long)pfVar8 - (long)pfVar16 != 0) {
          _memmove(pfVar19,pfVar16,(long)pfVar8 - (long)pfVar16);
        }
        *pfVar16 = fVar23;
      }
      else {
        lVar11 = lVar2 >> 2;
        lVar15 = lVar3 >> 2;
        lVar17 = lVar11;
        pfVar8 = pfVar16;
        pfVar18 = param_2;
        if (lVar11 == lVar3 >> 2) {
          do {
            pfVar12 = pfVar18 + 1;
            fVar23 = *pfVar8;
            *pfVar8 = *pfVar18;
            *pfVar18 = fVar23;
            pfVar19 = param_2;
            if (pfVar8 + 1 == param_2) break;
            pfVar8 = pfVar8 + 1;
            pfVar18 = pfVar12;
          } while (pfVar12 != pfVar9);
        }
        else {
          do {
            lVar14 = lVar15;
            lVar15 = 0;
            if (lVar14 != 0) {
              lVar15 = lVar17 / lVar14;
            }
            lVar15 = lVar17 - lVar15 * lVar14;
            lVar17 = lVar14;
          } while (lVar15 != 0);
          pfVar19 = pfVar16 + lVar14;
          do {
            pfVar19 = pfVar19 + -1;
            fVar23 = *pfVar19;
            pfVar8 = (float *)(lVar2 + (long)pfVar19);
            pfVar18 = pfVar19;
            do {
              pfVar12 = pfVar8;
              *pfVar18 = *pfVar12;
              lVar15 = (long)pfVar9 - (long)pfVar12 >> 2;
              pfVar8 = (float *)((long)pfVar12 + lVar2);
              if (lVar15 <= lVar11) {
                pfVar8 = pfVar16 + (lVar11 - lVar15);
              }
              pfVar18 = pfVar12;
            } while (pfVar8 != pfVar19);
            *pfVar12 = fVar23;
          } while (pfVar19 != pfVar16);
          pfVar19 = (float *)(lVar3 + (long)pfVar16);
        }
      }
    }
    if (param_4 + lVar6 < (param_5 - (param_4 + lVar6)) - lVar20) {
      FUN_109520c5c((undefined *)((long)pfVar5 + lVar21),pfVar16,pfVar19);
      pfVar5 = pfVar19;
      param_2 = pfVar9;
      param_4 = -(param_4 + lVar20);
      param_5 = param_5 - lVar6;
    }
    else {
      FUN_109520c5c(pfVar19,pfVar9,param_3,-(param_4 + lVar20),param_5 - lVar6);
      pfVar5 = (float *)((long)pfVar5 + lVar21);
      param_2 = pfVar16;
      param_3 = pfVar19;
      param_5 = lVar6;
    }
  } while( true );
}



/* Entry: 109520c5c; end: 10952110b;  */

void FUN_109520c5c(float *param_1,float *param_2,float *param_3,long param_4,long param_5,
                  float *param_6,long param_7)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  float *pfVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  
  do {
    if (param_5 == 0) {
      return;
    }
    if ((param_4 <= param_7) || (param_5 <= param_7)) {
      if (param_4 <= param_5) {
        if (param_2 == param_1) {
          return;
        }
        lVar19 = -(long)param_6;
        pfVar7 = param_6;
        pfVar14 = param_1;
        do {
          pfVar6 = pfVar14 + 1;
          pfVar17 = pfVar7 + 1;
          *pfVar7 = *pfVar14;
          lVar19 = lVar19 + -4;
          pfVar7 = pfVar17;
          pfVar14 = pfVar6;
        } while (pfVar6 != param_2);
        do {
          if (param_2 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__memmove_11034c660)(param_1,param_6,-((long)param_6 + lVar19));
            return;
          }
          bVar3 = *param_6 <= *param_2;
          fVar21 = *param_2;
          if (bVar3) {
            fVar21 = *param_6;
          }
          lVar18 = 4;
          if (bVar3) {
            lVar18 = 0;
          }
          param_2 = (float *)((long)param_2 + lVar18);
          lVar18 = 0;
          if (bVar3) {
            lVar18 = 4;
          }
          param_6 = (float *)((long)param_6 + lVar18);
          *param_1 = fVar21;
          param_1 = param_1 + 1;
        } while (pfVar17 != param_6);
        return;
      }
      if (param_2 != param_3) {
        lVar19 = 0;
        do {
          *(undefined4 *)((long)param_6 + lVar19) = *(undefined4 *)((long)param_2 + lVar19);
          lVar19 = lVar19 + 4;
        } while ((float *)((long)param_2 + lVar19) != param_3);
        pfVar7 = (float *)((long)param_6 + lVar19);
        do {
          if (param_2 == param_1) {
            if (pfVar7 == param_6) {
              return;
            }
            lVar19 = -4;
            do {
              pfVar7 = pfVar7 + -1;
              *(float *)((long)param_3 + lVar19) = *pfVar7;
              lVar19 = lVar19 + -4;
            } while (pfVar7 != param_6);
            return;
          }
          fVar20 = pfVar7[-1];
          fVar21 = param_2[-1];
          pfVar14 = param_2 + -1;
          if (fVar21 <= fVar20) {
            pfVar7 = pfVar7 + -1;
            pfVar14 = param_2;
            fVar21 = fVar20;
          }
          param_2 = pfVar14;
          param_3 = param_3 + -1;
          *param_3 = fVar21;
        } while (pfVar7 != param_6);
        return;
      }
      return;
    }
    if (param_4 == 0) {
      return;
    }
    lVar19 = 0;
    lVar18 = -param_4;
    while (fVar21 = *(float *)((long)param_1 + lVar19), fVar21 <= *param_2) {
      lVar19 = lVar19 + 4;
      bVar3 = lVar18 == -1;
      lVar18 = lVar18 + 1;
      if (bVar3) {
        return;
      }
    }
    if (-lVar18 < param_5) {
      lVar4 = param_5 / 2;
      pfVar7 = param_2 + lVar4;
      lVar1 = (long)param_2 + (-lVar19 - (long)param_1);
      pfVar14 = param_2;
      if (lVar1 != 0) {
        uVar5 = lVar1 >> 2;
        pfVar14 = (float *)((long)param_1 + lVar19);
        do {
          uVar8 = uVar5 >> 1;
          uVar11 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
          uVar5 = uVar8;
          if (pfVar14[uVar8] <= *pfVar7) {
            uVar5 = uVar11;
            pfVar14 = pfVar14 + uVar8 + 1;
          }
        } while (uVar5 != 0);
      }
      param_4 = (long)pfVar14 + (-lVar19 - (long)param_1) >> 2;
    }
    else {
      if (lVar18 == -1) {
        *(float *)((long)param_1 + lVar19) = *param_2;
        *param_2 = fVar21;
        return;
      }
      param_4 = -lVar18 / 2;
      pfVar7 = param_2;
      if (param_2 != param_3) {
        uVar5 = (long)param_3 - (long)param_2 >> 2;
        pfVar14 = param_2;
        do {
          uVar11 = uVar5 >> 1;
          pfVar7 = pfVar14 + uVar11 + 1;
          uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
          if (*(float *)((long)param_1 + lVar19 + param_4 * 4) <= pfVar14[uVar11]) {
            pfVar7 = pfVar14;
            uVar5 = uVar11;
          }
          pfVar14 = pfVar7;
        } while (uVar5 != 0);
      }
      lVar4 = (long)pfVar7 - (long)param_2 >> 2;
      pfVar14 = (float *)((long)param_1 + lVar19 + param_4 * 4);
    }
    lVar1 = (long)param_2 - (long)pfVar14;
    pfVar17 = pfVar7;
    if ((lVar1 != 0) && (lVar2 = (long)pfVar7 - (long)param_2, pfVar17 = pfVar14, lVar2 != 0)) {
      if (pfVar14 + 1 == param_2) {
        fVar21 = *pfVar14;
        _memmove(pfVar14,param_2,lVar2);
        *(float *)((long)pfVar14 + lVar2) = fVar21;
        pfVar17 = (float *)((long)pfVar14 + lVar2);
      }
      else if (param_2 + 1 == pfVar7) {
        pfVar6 = pfVar7 + -1;
        fVar21 = *pfVar6;
        pfVar17 = (float *)((long)pfVar7 - ((long)pfVar6 - (long)pfVar14));
        if ((long)pfVar6 - (long)pfVar14 != 0) {
          _memmove(pfVar17,pfVar14,(long)pfVar6 - (long)pfVar14);
        }
        *pfVar14 = fVar21;
      }
      else {
        lVar9 = lVar1 >> 2;
        lVar13 = lVar2 >> 2;
        lVar15 = lVar9;
        pfVar6 = pfVar14;
        pfVar16 = param_2;
        if (lVar9 == lVar2 >> 2) {
          do {
            pfVar10 = pfVar16 + 1;
            fVar21 = *pfVar6;
            *pfVar6 = *pfVar16;
            *pfVar16 = fVar21;
            pfVar17 = param_2;
            if (pfVar6 + 1 == param_2) break;
            pfVar6 = pfVar6 + 1;
            pfVar16 = pfVar10;
          } while (pfVar10 != pfVar7);
        }
        else {
          do {
            lVar12 = lVar13;
            lVar13 = 0;
            if (lVar12 != 0) {
              lVar13 = lVar15 / lVar12;
            }
            lVar13 = lVar15 - lVar13 * lVar12;
            lVar15 = lVar12;
          } while (lVar13 != 0);
          pfVar17 = pfVar14 + lVar12;
          do {
            pfVar17 = pfVar17 + -1;
            fVar21 = *pfVar17;
            pfVar6 = (float *)(lVar1 + (long)pfVar17);
            pfVar16 = pfVar17;
            do {
              pfVar10 = pfVar6;
              *pfVar16 = *pfVar10;
              lVar13 = (long)pfVar7 - (long)pfVar10 >> 2;
              pfVar6 = (float *)((long)pfVar10 + lVar1);
              if (lVar13 <= lVar9) {
                pfVar6 = pfVar14 + (lVar9 - lVar13);
              }
              pfVar16 = pfVar10;
            } while (pfVar6 != pfVar17);
            *pfVar10 = fVar21;
          } while (pfVar17 != pfVar14);
          pfVar17 = (float *)(lVar2 + (long)pfVar14);
        }
      }
    }
    if (param_4 + lVar4 < (param_5 - (param_4 + lVar4)) - lVar18) {
      FUN_109520c5c((long)param_1 + lVar19,pfVar14,pfVar17);
      param_5 = param_5 - lVar4;
      param_4 = -(param_4 + lVar18);
      param_2 = pfVar7;
      param_1 = pfVar17;
    }
    else {
      FUN_109520c5c(pfVar17,pfVar7,param_3,-(param_4 + lVar18),param_5 - lVar4);
      param_5 = lVar4;
      param_3 = pfVar17;
      param_2 = pfVar14;
      param_1 = (float *)((long)param_1 + lVar19);
    }
  } while( true );
}



/* Entry: 10952110c; end: 109521197;  */

undefined8 FUN_10952110c(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000113829f38 & 1) == 0) {
    iVar1 = 0x13829f38;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x28;
      __Znwm();
      FUN_109521198();
      uRam0000000113829f30 = uVar2;
      ___cxa_guard_release(0x113829f38);
    }
  }
  return uRam0000000113829f30;
}



/* Entry: 109521198; end: 10952156b;  */

undefined8 * FUN_109521198(undefined8 *param_1)

{
  undefined ***pppuVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *extraout_x8;
  undefined ***apppuStack_60 [2];
  char cStack_49;
  undefined **ppuStack_48;
  code *pcStack_40;
  char cStack_31;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x000107c31940(apppuStack_60,&UNK_10f572b1b);
  puVar2 = param_1;
  FUN_1095220dc(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110afab78;
  pcStack_40 = FUN_10952156c;
  pppuStack_30 = &ppuStack_48;
  FUN_109522624(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_109521234:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_109521234;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f572b30);
  puVar2 = param_1;
  FUN_1095220dc(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110afac78;
  pcStack_40 = FUN_1095215bc;
  pppuStack_30 = &ppuStack_48;
  FUN_109522624(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1095212b8:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1095212b8;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f572b45);
  puVar2 = param_1;
  FUN_1095220dc(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110afad68;
  pcStack_40 = (code *)0x109521724;
  pppuStack_30 = &ppuStack_48;
  FUN_109522624(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_10952133c:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_10952133c;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f572b5e);
  puVar2 = param_1;
  FUN_1095220dc(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110afae58;
  pcStack_40 = (code *)0x109521884;
  pppuStack_30 = &ppuStack_48;
  FUN_109522624(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
LAB_1095213c0:
    (**(code **)((long)*pppuStack_30 + lVar3))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar3 = 0x28;
    goto LAB_1095213c0;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(&ppuStack_48,&DAT_10f572b74);
  puVar2 = param_1;
  FUN_1095220dc(param_1,&ppuStack_48,&ppuStack_48);
  FUN_109521c84(puVar2 + 5);
  if (cStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  func_0x000107c31940(&ppuStack_48,&DAT_10f572b87);
  puVar2 = param_1;
  FUN_1095220dc(param_1,&ppuStack_48,&ppuStack_48);
  FUN_109521c84(puVar2 + 5);
  if (cStack_31 < '\0') {
    __ZdlPv(ppuStack_48);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f572b9f);
  puVar2 = param_1;
  FUN_1095220dc(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_DAT_110afb038;
  pcStack_40 = (code *)0x109521d28;
  pppuStack_30 = &ppuStack_48;
  FUN_109522624(&ppuStack_48,puVar2 + 5);
  pppuVar1 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar3 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_1095214c0;
    lVar3 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar3))();
LAB_1095214c0:
  if (cStack_49 < '\0') {
    pppuVar1 = apppuStack_60[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  FUN_109522020(param_1);
  __Unwind_Resume(pppuVar1);
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110afab28;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[4] = 0;
  extraout_x8[1] = puVar2;
  puVar2 = puVar2 + 3;
  *puVar2 = &PTR_FUN_110af9898;
  *extraout_x8 = puVar2;
  return puVar2;
}



/* Entry: 10952156c; end: 1095215bb;  */

void FUN_10952156c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110afab28;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[4] = 0;
  param_1[1] = puVar1;
  puVar1[3] = &PTR_FUN_110af9898;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 1095215bc; end: 1095219e7;  */

void FUN_1095215bc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar4 = (long *)0x298;
  __Znwm();
  plVar7 = plVar4 + 1;
  *plVar7 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110afac28;
  _bzero(plVar4 + 6,0x268);
  plVar5 = plVar4 + 3;
  *plVar5 = (long)&PTR_FUN_110afa1f0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[7] = 0;
  *(undefined4 *)(plVar4 + 10) = 0x42ff0000;
  *(undefined8 *)((long)plVar4 + 0x5c) = 0;
  *(undefined8 *)((long)plVar4 + 0x54) = 0;
  *(undefined8 *)((long)plVar4 + 0x6c) = 0;
  *(undefined8 *)((long)plVar4 + 100) = 0;
  *(undefined8 *)((long)plVar4 + 0x7c) = 0;
  *(undefined8 *)((long)plVar4 + 0x74) = 0;
  plVar4[0x11] = 0;
  plVar4[0x10] = 0;
  plVar4[0x14] = 0;
  plVar4[0x12] = (long)(plVar4 + 0xb);
  plVar4[0x13] = (long)(plVar4 + 0x14);
  plVar4[0x15] = 0;
  *(undefined1 *)(plVar4 + 0x16) = 4;
  plVar4[0x17] = 0;
  plVar4[0x18] = 0;
  *(undefined1 *)(plVar4 + 0x19) = 0;
  *(undefined8 *)((long)plVar4 + 0x151) = 0;
  *(undefined8 *)((long)plVar4 + 0x149) = 0;
  plVar4[0x27] = 0;
  plVar4[0x26] = 0;
  plVar4[0x29] = 0;
  plVar4[0x28] = 0;
  plVar4[0x25] = 0;
  plVar4[0x24] = 0;
  *(undefined4 *)(plVar4 + 0x35) = 0;
  plVar4[0x32] = 0;
  plVar4[0x31] = 0;
  plVar4[0x34] = 0;
  plVar4[0x33] = 0;
  plVar4[0x30] = 0;
  plVar4[0x2f] = 0;
  *(undefined1 *)(plVar4 + 0x36) = 4;
  plVar4[0x38] = 0x32aaaba7;
  plVar4[0x3a] = 0;
  plVar4[0x39] = 0;
  plVar4[0x3c] = 0;
  plVar4[0x3b] = 0;
  plVar4[0x3e] = 0;
  plVar4[0x3d] = 0;
  plVar4[0x40] = 0;
  plVar4[0x3f] = 0;
  plVar4[0x42] = 0;
  plVar4[0x41] = 0;
  plVar4[0x44] = 0;
  plVar4[0x43] = 0;
  plVar4[0x45] = (long)&PTR_FUN_110af9720;
  plVar4[0x47] = 0;
  plVar4[0x46] = 0;
  plVar4[0x49] = 0;
  plVar4[0x48] = 0;
  plVar4[0x4b] = 0;
  plVar4[0x4a] = 0;
  *(undefined8 *)((long)plVar4 + 0x261) = 0;
  *(undefined8 *)((long)plVar4 + 0x259) = 0;
  *param_1 = plVar5;
  param_1[1] = plVar4;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = plVar4 + 2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[4] = (long)plVar5;
  plVar4[5] = (long)plVar4;
  do {
    lVar6 = *plVar7;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
  return;
}



/* Entry: 1095219e8; end: 109521c83;  */

void FUN_1095219e8(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uStack_54;
  
  plVar3 = (long *)0x410;
  __Znwm();
  plVar6 = plVar3 + 1;
  plVar3[2] = 0;
  *plVar6 = 0;
  *plVar3 = (long)&PTR_DAT_110afaef8;
  _bzero(plVar3 + 8,0x3d0);
  *(undefined4 *)(plVar3 + 0x39) = 0x42ff0000;
  *(undefined8 *)((long)plVar3 + 0x1d4) = 0;
  *(undefined8 *)((long)plVar3 + 0x1cc) = 0;
  *(undefined8 *)((long)plVar3 + 0x1e4) = 0;
  *(undefined8 *)((long)plVar3 + 0x1dc) = 0;
  *(undefined8 *)((long)plVar3 + 500) = 0;
  *(undefined8 *)((long)plVar3 + 0x1ec) = 0;
  plVar3[0x40] = 0;
  plVar3[0x3f] = 0;
  plVar3[0x41] = (long)(plVar3 + 0x3a);
  plVar3[0x42] = (long)(plVar3 + 0x43);
  plVar3[0x44] = 0;
  plVar3[0x43] = 0;
  *(undefined1 *)(plVar3 + 0x45) = 4;
  plVar3[0x47] = 0;
  plVar3[0x46] = 0;
  *(undefined1 *)(plVar3 + 0x48) = 0;
  plVar3[0x54] = 0;
  plVar3[0x53] = 0;
  plVar3[0x56] = 0;
  plVar3[0x55] = 0;
  plVar3[0x58] = 0;
  plVar3[0x57] = 0;
  *(undefined8 *)((long)plVar3 + 0x2c9) = 0;
  *(undefined8 *)((long)plVar3 + 0x2c1) = 0;
  plVar3[0x5f] = 0;
  plVar3[0x5e] = 0;
  plVar3[0x61] = 0;
  plVar3[0x60] = 0;
  plVar3[99] = 0;
  plVar3[0x62] = 0;
  plVar7 = plVar3 + 3;
  *plVar7 = (long)&PTR_FUN_110afa048;
  *(undefined4 *)(plVar3 + 100) = 0;
  *(undefined1 *)(plVar3 + 0x65) = 4;
  plVar3[0x67] = 0x32aaaba7;
  plVar3[0x69] = 0;
  plVar3[0x68] = 0;
  plVar3[0x6b] = 0;
  plVar3[0x6a] = 0;
  plVar3[0x6d] = 0;
  plVar3[0x6c] = 0;
  plVar3[0x6f] = 0;
  plVar3[0x6e] = 0;
  plVar3[0x71] = 0;
  plVar3[0x70] = 0;
  plVar3[0x73] = 0;
  plVar3[0x72] = 0;
  plVar3[0x74] = (long)&PTR_FUN_110af9720;
  plVar3[0x76] = 0;
  plVar3[0x75] = 0;
  plVar3[0x78] = 0;
  plVar3[0x77] = 0;
  plVar3[0x7a] = 0;
  plVar3[0x79] = 0;
  *(undefined8 *)((long)plVar3 + 0x3d9) = 0;
  *(undefined8 *)((long)plVar3 + 0x3d1) = 0;
  plVar3[0x32] = (long)&PTR_FUN_110afa118;
  plVar3[5] = 0;
  plVar3[4] = 0;
  plVar3[7] = 0;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 8) = 0x3f800000;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[9] = (long)&PTR_FUN_110af9c48;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  *(undefined4 *)(plVar3 + 0x10) = 5;
  uStack_54 = 0;
  plVar3[0x12] = 0;
  plVar3[0x13] = 0;
  plVar3[0x11] = 0;
  FUN_109522b28(plVar3 + 0x11,&uStack_54,&stack0xffffffffffffffb0,1);
  plVar3[0x14] = 0;
  plVar3[0x15] = 0;
  plVar3[0x16] = 0;
  plVar3[0x17] = 0x3dbcb21c3fa6fad0;
  *(undefined2 *)(plVar3 + 0x18) = 0;
  *(undefined8 *)((long)plVar3 + 0xcc) = 0;
  *(undefined8 *)((long)plVar3 + 0xc4) = 0;
  *(undefined8 *)((long)plVar3 + 0xd1) = 0;
  *(undefined1 *)((long)plVar3 + 0xd9) = 1;
  *(undefined1 *)(plVar3 + 0x1c) = 0;
  *(undefined1 *)(plVar3 + 0x1e) = 0;
  plVar3[0x1f] = 0x32aaaba7;
  plVar3[0x21] = 0;
  plVar3[0x20] = 0;
  plVar3[0x23] = 0;
  plVar3[0x22] = 0;
  plVar3[0x25] = 0;
  plVar3[0x24] = 0;
  plVar3[0x27] = 0;
  plVar3[0x26] = 0;
  plVar3[0x29] = 0;
  plVar3[0x28] = 0;
  plVar3[0x2a] = 0x32aaaba7;
  plVar3[0x2c] = 0;
  plVar3[0x2b] = 0;
  plVar3[0x2e] = 0;
  plVar3[0x2d] = 0;
  plVar3[0x30] = 0;
  plVar3[0x2f] = 0;
  plVar3[0x31] = 0;
  lVar5 = (long)plVar7 + *(long *)(plVar3[3] + -0x18);
  *param_1 = plVar7;
  param_1[1] = plVar3;
  if ((lVar5 != -8) &&
     ((*(long *)(lVar5 + 0x10) == 0 || (*(long *)(*(long *)(lVar5 + 0x10) + 8) == -1)))) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar7 = plVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar4 = *(long *)(lVar5 + 0x10);
    *(long *)(lVar5 + 8) = lVar5;
    *(long **)(lVar5 + 0x10) = plVar3;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 109521c84; end: 109521dcb;  */

undefined8 * FUN_109521c84(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *extraout_x8;
  undefined **ppuStack_48;
  code *pcStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR_FUN_110afaf48;
  pcStack_40 = FUN_1095219e8;
  pppuStack_30 = &ppuStack_48;
  FUN_109522624(&ppuStack_48,param_1);
  if (pppuStack_30 == &ppuStack_48) {
    lVar2 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_109521cf8;
    lVar2 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar2))();
LAB_109521cf8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)0x130;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110afafe8;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  *(undefined4 *)(puVar1 + 4) = 0x42ff0000;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xe] = 0;
  puVar1[0xc] = puVar1 + 5;
  puVar1[0xd] = puVar1 + 0xe;
  puVar1[0xf] = 0;
  *(undefined1 *)(puVar1 + 0x10) = 4;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  extraout_x8[1] = puVar1;
  puVar1 = puVar1 + 3;
  *puVar1 = &PTR_FUN_110afa918;
  *extraout_x8 = puVar1;
  return puVar1;
}



/* Entry: 109521dcc; end: 109521f03;  */

void FUN_109521dcc(undefined8 *param_1,long param_2,long *param_3,undefined *param_4)

{
  long *plVar1;
  undefined8 extraout_x8;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined1 auStack_1c8 [56];
  undefined8 uStack_190;
  char cStack_179;
  undefined **appuStack_168 [19];
  long **pplStack_d0;
  undefined4 uStack_c8;
  long *plStack_c0;
  code *pcStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    if (param_3[1] != 0x12) goto LAB_109521ea0;
    plVar1 = (long *)*param_3;
  }
  else {
    plVar1 = param_3;
    if (*(char *)((long)param_3 + 0x17) != '\x12') goto LAB_109521ea0;
  }
  if ((*plVar1 == 0x72546c617275654e && plVar1[1] == 0x6369676f4c6b6361) &&
      (short)plVar1[2] == 0x6433) {
    FUN_109521f04(auStack_48,&UNK_10f572c53,&PTR_DAT_110afab08,&PTR_DAT_110afab10);
    param_4 = &UNK_10f572c42;
    FUN_109388c6c(2,&UNK_10f572bae,&UNK_10f572c42,0x34,auStack_48);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
  }
LAB_109521ea0:
  FUN_109522d9c();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar1 = *(long **)(param_2 + 0x40);
    if (plVar1 == (long *)0x0) {
      func_0x000104c501e4();
      if (cStack_31 < '\0') {
        __ZdlPv(auStack_48[0]);
      }
      __Unwind_Resume(plVar1);
      FUN_10926db08(&ppuStack_1d8);
      pplStack_d0 = &plStack_c0;
      uStack_c8 = 2;
      pcStack_b8 = FUN_10937b8b8;
      pcStack_b0 = FUN_10937b948;
      pcStack_a0 = FUN_10937b8b8;
      pcStack_98 = FUN_10937b948;
      plStack_c0 = param_3;
      puStack_a8 = param_4;
      FUN_10937ad5c(&ppuStack_1d8,plVar1,pplStack_d0,2);
      FUN_10926dc5c(extraout_x8,&ppuStack_1d0,&pplStack_d0);
      appuStack_168[0] = &PTR_DAT_11088d708;
      ppuStack_1d8 = &PTR_SUB_11088d6e0;
      ppuStack_1d0 = &PTR_DAT_11088d7b0;
      if (cStack_179 < '\0') {
        __ZdlPv(uStack_190);
      }
      ppuStack_1d0 = (undefined **)
                     (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
      __ZNSt3__16localeD1Ev(auStack_1c8);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1d8,&PTR_PTR_11088d720);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_168);
      return;
    }
    (**(code **)(*plVar1 + 0x30))(param_1);
  }
  return;
}



/* Entry: 109521f04; end: 10952201f;  */

void FUN_109521f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined1 auStack_178 [56];
  undefined8 uStack_140;
  char cStack_129;
  undefined **appuStack_118 [19];
  undefined8 *puStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  code *pcStack_48;
  
  FUN_10926db08(&ppuStack_188);
  puStack_80 = &uStack_70;
  uStack_78 = 2;
  pcStack_68 = FUN_10937b8b8;
  pcStack_60 = FUN_10937b948;
  pcStack_50 = FUN_10937b8b8;
  pcStack_48 = FUN_10937b948;
  uStack_70 = param_3;
  uStack_58 = param_4;
  FUN_10937ad5c(&ppuStack_188,param_2,puStack_80,2);
  FUN_10926dc5c(param_1,&ppuStack_180,&puStack_80);
  appuStack_118[0] = &PTR_DAT_11088d708;
  ppuStack_188 = &PTR_SUB_11088d6e0;
  ppuStack_180 = &PTR_DAT_11088d7b0;
  if (cStack_129 < '\0') {
    __ZdlPv(uStack_140);
  }
  ppuStack_180 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_178);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_188,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_118);
  return;
}



/* Entry: 109522020; end: 10952207b;  */

long * FUN_109522020(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10952207c(plVar1 + 2);
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



/* Entry: 10952207c; end: 1095220db;  */

void FUN_10952207c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 3) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1095220b8;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1095220b8:
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 1095220dc; end: 1095224c7;  */

long * FUN_1095220dc(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar7 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar13 <= plVar7) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar7) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x48;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar7;
  lVar3 = *param_3;
  plVar5[3] = param_3[1];
  plVar5[2] = lVar3;
  plVar5[4] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  plVar5[8] = 0;
  if ((plVar13 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar13 < (float)(param_1[3] + 1))) {
    uVar14 = 1;
    if ((long *)0x2 < plVar13) {
      uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
    }
    plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
    plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar6 <= plVar13) {
      plVar6 = plVar13;
    }
    if ((long)plVar6 - 1U == 0) {
      plVar6 = (long *)0x2;
    }
    else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar13 = (long *)param_1[1];
    if (plVar13 < plVar6) {
LAB_109522264:
      if ((ulong)plVar6 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1095224b4);
        (*pcVar2)();
      }
      lVar3 = (long)plVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar13 = (long *)0x0;
      param_1[1] = (long)plVar6;
      do {
        *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
        plVar13 = (long *)((long)plVar13 + 1);
      } while (plVar6 != plVar13);
      plVar8 = (long *)param_1[2];
      plVar13 = plVar6;
      if (plVar8 != (long *)0x0) {
        plVar9 = (long *)plVar8[1];
        uVar14 = (long)plVar6 - 1;
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar14);
        }
        else if (plVar6 <= plVar9) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)plVar6;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
        }
        *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
        plVar10 = (long *)*plVar8;
        while (plVar10 != (long *)0x0) {
          plVar12 = (long *)plVar10[1];
          if (((ulong)plVar6 & uVar14) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar14);
          }
          else if (plVar6 <= plVar12) {
            uVar1 = 0;
            if (plVar6 != (long *)0x0) {
              uVar1 = (ulong)plVar12 / (ulong)plVar6;
            }
            plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
          }
          plVar11 = plVar10;
          if (plVar12 != plVar9) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar12 * 8) = plVar8;
              plVar9 = plVar12;
            }
            else {
              *plVar8 = *plVar10;
              *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
              **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
              plVar11 = plVar8;
            }
          }
          plVar8 = plVar11;
          plVar10 = (long *)*plVar11;
        }
      }
    }
    else if (plVar6 < plVar13) {
      plVar8 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar8) {
        plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
      }
      if (plVar6 <= plVar8) {
        plVar6 = plVar8;
      }
      if (plVar6 < plVar13) {
        if (plVar6 != (long *)0x0) goto LAB_109522264;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar13 <= plVar7) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
      }
    }
  }
  lVar3 = *param_1;
  plVar7 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar5 = *plVar7;
    *plVar7 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar7;
    if (*plVar5 == 0) goto LAB_109522444;
    plVar7 = *(long **)(*plVar5 + 8);
    if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
      plVar7 = (long *)((ulong)plVar7 & (long)plVar13 - 1U);
    }
    else if (plVar13 <= plVar7) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar7 / (ulong)plVar13;
      }
      plVar7 = (long *)((long)plVar7 - uVar14 * (long)plVar13);
    }
    plVar7 = (long *)(*param_1 + (long)plVar7 * 8);
  }
  else {
    *plVar5 = *plVar7;
  }
  *plVar7 = (long)plVar5;
LAB_109522444:
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1095224c8; end: 10952250f;  */

void FUN_1095224c8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10952207c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109522510; end: 10952251f;  */

void FUN_109522510(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afab28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109522520; end: 10952253f;  */

void FUN_109522520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afab28;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109522540; end: 109522553;  */

long FUN_109522540(long param_1)

{
  long lVar1;
  
  FUN_109503ae4(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = 0;
  if (lVar1 != 0) {
    FUN_109503988();
  }
  return param_1 + 0x18;
}



/* Entry: 109522554; end: 109522587;  */

void FUN_109522554(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110afab78;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109522588; end: 1095225a3;  */

void FUN_109522588(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110afab78;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1095225a4; end: 109522617;  */

void FUN_1095225a4(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 8))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 109522618; end: 109522623;  */

undefined ** FUN_109522618(void)

{
  return &PTR_DAT_110afabf8;
}



/* Entry: 109522624; end: 10952278f;  */

void FUN_109522624(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long alStack_40 [3];
  long lStack_28;
  
  plVar2 = alStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_2;
  if (param_2 != param_1) {
    plVar1 = (long *)param_1[3];
    plVar5 = (long *)param_2[3];
    if (plVar1 == param_1) {
      if (plVar5 == param_2) {
        (**(code **)(*plVar1 + 0x18))(plVar1,alStack_40);
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = 0;
        (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
        (**(code **)(*(long *)param_2[3] + 0x20))();
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        (**(code **)(alStack_40[0] + 0x18))(alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        plVar2 = (long *)param_1[3];
        (**(code **)(*plVar2 + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      param_1 = plVar2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar2 = (long *)param_2[3];
      (**(code **)(*plVar2 + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
      param_1 = plVar2;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
      param_1 = plVar1;
    }
  }
  iVar3 = (int)plVar4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *param_1 = (long)&PTR_FUN_110afac28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109522790; end: 10952279f;  */

void FUN_109522790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afac28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1095227a0; end: 1095227bf;  */

void FUN_1095227a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afac28;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095227c0; end: 1095227d7;  */

void FUN_1095227c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001095227c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1095227d8; end: 10952280b;  */

void FUN_1095227d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110afac78;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10952280c; end: 109522827;  */

void FUN_10952280c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110afac78;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109522828; end: 10952289b;  */

void FUN_109522828(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 8))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 10952289c; end: 1095228b7;  */

undefined ** FUN_10952289c(void)

{
  return &PTR_DAT_110aface8;
}



/* Entry: 1095228b8; end: 1095228d7;  */

void FUN_1095228b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afad18;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095228d8; end: 1095228eb;  */

undefined8 * FUN_1095228d8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lStack_28;
  
  *(undefined8 *)(param_1 + 0x18) = &PTR_FUN_110afa1f0;
  if (*(long *)(param_1 + 0x1b8) != 0) {
    FUN_1094a310c(param_1 + 0x1b8);
  }
  if (*(char *)(param_1 + 0x290) == '\x01') {
    func_0x0001094e64a8(param_1 + 0x268);
  }
  lVar4 = *(long *)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 0x260) = 0;
  if (lVar4 != 0) {
    FUN_10951a24c();
  }
  func_0x0001094d9450(param_1 + 0x250);
  plVar5 = *(long **)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  *(undefined ***)(param_1 + 0x228) = &PTR_FUN_110af9720;
  lStack_28 = param_1 + 0x230;
  FUN_1094ff084(&lStack_28);
  func_0x000109503bd4(param_1 + 0x218);
  plVar5 = *(long **)(param_1 + 0x210);
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
  plVar5 = *(long **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x1c0);
  FUN_109476864(param_1 + 0x1b8,0);
  FUN_1095173a8(param_1 + 400);
  lStack_28 = param_1 + 0x178;
  FUN_1093702c4(&lStack_28);
  lStack_28 = param_1 + 0x140;
  FUN_1094d8bdc(&lStack_28);
  func_0x00010951741c(param_1 + 0x128);
  plVar5 = *(long **)(param_1 + 0x120);
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_1094d92f0(param_1 + 0x50);
  lStack_28 = param_1 + 0x38;
  FUN_109500848(&lStack_28);
  if (*(long *)(param_1 + 0x28) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1095228ec; end: 10952291f;  */

void FUN_1095228ec(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110afad68;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109522920; end: 10952293b;  */

void FUN_109522920(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110afad68;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10952293c; end: 1095229af;  */

void FUN_10952293c(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 8))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 1095229b0; end: 1095229cb;  */

undefined ** FUN_1095229b0(void)

{
  return &PTR_DAT_110afadd8;
}



/* Entry: 1095229cc; end: 1095229eb;  */

void FUN_1095229cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afae08;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1095229ec; end: 109522a03;  */

void FUN_1095229ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001095229f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 109522a04; end: 109522a37;  */

void FUN_109522a04(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110afae58;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109522a38; end: 109522a53;  */

void FUN_109522a38(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110afae58;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109522a54; end: 109522adb;  */

void FUN_109522a54(long *param_1,long param_2)

{
  long *plStack_30;
  long lStack_28;
  
  (**(code **)(param_2 + 8))(&plStack_30);
  if (plStack_30 != (long *)0x0) {
    plStack_30 = (long *)((long)plStack_30 + *(long *)(*plStack_30 + -0x18));
  }
  *param_1 = (long)plStack_30;
  param_1[1] = lStack_28;
  return;
}



/* Entry: 109522adc; end: 109522af7;  */

undefined ** FUN_109522adc(void)

{
  return &PTR_DAT_110afaec8;
}



/* Entry: 109522af8; end: 109522b17;  */

void FUN_109522af8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afaef8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109522b18; end: 109522b27;  */

void FUN_109522b18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109522b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 109522b28; end: 109522b97;  */

void FUN_109522b28(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_109265f60(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 109522b98; end: 109522b9f;  */

void FUN_109522b98(void)

{
  return;
}



/* Entry: 109522ba0; end: 109522bd3;  */

void FUN_109522ba0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110afaf48;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109522bd4; end: 109522bef;  */

void FUN_109522bd4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110afaf48;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109522bf0; end: 109522c77;  */

void FUN_109522bf0(long *param_1,long param_2)

{
  long *plStack_30;
  long lStack_28;
  
  (**(code **)(param_2 + 8))(&plStack_30);
  if (plStack_30 != (long *)0x0) {
    plStack_30 = (long *)((long)plStack_30 + *(long *)(*plStack_30 + -0x18));
  }
  *param_1 = (long)plStack_30;
  param_1[1] = lStack_28;
  return;
}



/* Entry: 109522c78; end: 109522c93;  */

undefined ** FUN_109522c78(void)

{
  return &PTR_DAT_110afafb8;
}



/* Entry: 109522c94; end: 109522cb3;  */

void FUN_109522c94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110afafe8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109522cb4; end: 109522ccb;  */

void FUN_109522cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000109522cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 109522ccc; end: 109522cff;  */

void FUN_109522ccc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_110afb038;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 109522d00; end: 109522d1b;  */

void FUN_109522d00(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110afb038;
  param_2[1] = uVar1;
  return;
}



/* Entry: 109522d1c; end: 109522d8f;  */

void FUN_109522d1c(undefined8 *param_1,long param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(param_2 + 8))(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  return;
}



/* Entry: 109522d90; end: 109522d9b;  */

undefined ** FUN_109522d90(void)

{
  return &PTR_DAT_110afb0a8;
}



/* Entry: 109522d9c; end: 109522e7f;  */

long FUN_109522d9c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
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
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
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



/* Entry: 109522e80; end: 109522f6f;  */

undefined8 FUN_109522e80(float param_1,float param_2,long param_3,undefined4 param_4)

{
  float fVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  if (param_1 <= param_2) {
    if (*(long *)(param_3 + 0x20) != 0) {
      fVar1 = *(float *)(*(long *)(param_3 + 0x20) + 4);
      if (fVar1 <= param_2) {
        if (fVar1 < param_1) {
          *(undefined4 *)(param_3 + 8) = 0;
        }
      }
      else {
        *(undefined4 *)(param_3 + 8) = param_4;
      }
      return 1;
    }
    FUN_10937e740(auStack_38,&UNK_10f572d4c);
    FUN_109388c6c(1,&UNK_10f572c7c,&UNK_10f572d0a,0xd,auStack_38);
  }
  else {
    FUN_10937e740(auStack_38,&UNK_10f572d14);
    FUN_109388c6c(1,&UNK_10f572c7c,&UNK_10f572d0a,9,auStack_38);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return 0;
}



/* Entry: 109522f70; end: 10952462b;  */

/* WARNING: Removing unreachable block (ram,0x000109524044) */
/* WARNING: Removing unreachable block (ram,0x000109523fdc) */
/* WARNING: Removing unreachable block (ram,0x000109523f74) */
/* WARNING: Removing unreachable block (ram,0x000109523f0c) */
/* WARNING: Removing unreachable block (ram,0x000109523ea4) */
/* WARNING: Removing unreachable block (ram,0x000109523e3c) */
/* WARNING: Removing unreachable block (ram,0x000109523bc0) */
/* WARNING: Removing unreachable block (ram,0x000109523b58) */
/* WARNING: Removing unreachable block (ram,0x000109523aec) */
/* WARNING: Removing unreachable block (ram,0x0001095238ac) */
/* WARNING: Removing unreachable block (ram,0x00010952329c) */
/* WARNING: Removing unreachable block (ram,0x0001095231b0) */
/* WARNING: Removing unreachable block (ram,0x000109523148) */
/* WARNING: Removing unreachable block (ram,0x0001095230e0) */
/* WARNING: Removing unreachable block (ram,0x000109523068) */
/* WARNING: Removing unreachable block (ram,0x0001095230ac) */
/* WARNING: Removing unreachable block (ram,0x000109523114) */
/* WARNING: Removing unreachable block (ram,0x00010952317c) */
/* WARNING: Removing unreachable block (ram,0x000109523268) */
/* WARNING: Removing unreachable block (ram,0x0001095232ec) */
/* WARNING: Removing unreachable block (ram,0x000109523ab4) */
/* WARNING: Removing unreachable block (ram,0x000109523b24) */
/* WARNING: Removing unreachable block (ram,0x000109523b8c) */
/* WARNING: Removing unreachable block (ram,0x000109523bf4) */
/* WARNING: Removing unreachable block (ram,0x000109523e70) */
/* WARNING: Removing unreachable block (ram,0x000109523ed8) */
/* WARNING: Removing unreachable block (ram,0x000109523f40) */
/* WARNING: Removing unreachable block (ram,0x000109523fa8) */
/* WARNING: Removing unreachable block (ram,0x000109524010) */
/* WARNING: Removing unreachable block (ram,0x00010952417c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_109522f70(long param_1,undefined8 *param_2,uint param_3)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  char *****pppppcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char ******ppppppcVar9;
  char *******pppppppcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  char *****pppppcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 auStack_170 [2];
  undefined7 uStack_160;
  undefined4 uStack_159;
  undefined1 uStack_155;
  undefined4 uStack_154;
  long lStack_150;
  char *******pppppppcStack_148;
  char *****pppppcStack_140;
  char *****pppppcStack_138;
  undefined8 uStack_130;
  char *******pppppppcStack_128;
  char *******pppppppcStack_120;
  char ******ppppppcStack_118;
  char *****pppppcStack_110;
  undefined8 uStack_108;
  char *******pppppppcStack_100;
  char ******ppppppcStack_f8;
  char *****pppppcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  undefined8 uStack_60;
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_155 = 0;
  uStack_154 = 0;
  if (param_3 < 2) {
    puVar8 = (undefined8 *)&UNK_10f5676e2;
LAB_109522fe4:
    lStack_150 = 0xb;
    uStack_160 = (undefined7)*puVar8;
    uStack_159 = *(undefined4 *)((long)puVar8 + 7);
  }
  else {
    if (param_3 == 2) {
      puVar8 = (undefined8 *)&UNK_10f5676ee;
      goto LAB_109522fe4;
    }
    lStack_150 = 0xc;
    uStack_160 = 0x6769685f736f69;
    uStack_159 = 0x6e655f68;
    uStack_155 = 100;
  }
  lStack_150 = lStack_150 << 0x38;
  FUN_1094a68cc(auStack_170,*param_2,&uStack_160);
  uVar11 = *param_2;
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572d6a);
  FUN_1094a68cc(&pppppppcStack_120,uVar11,&pppppppcStack_100);
  FUN_1094a7878(param_1 + 0x18,&pppppppcStack_120);
  FUN_109380f8c(&pppppppcStack_120);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572d6a);
  FUN_1094a68cc(&pppppppcStack_120,auStack_170,&pppppppcStack_100);
  FUN_1094a7878(param_1 + 8,&pppppppcStack_120);
  FUN_109380f8c(&pppppppcStack_120);
  func_0x000107c31940(&pppppppcStack_100,"enabled");
  FUN_1094d2114(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x28);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f56f6d0);
  FUN_1094a775c(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x2c);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f4edfe2);
  FUN_1094a775c(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x30);
  func_0x000107c31940(&pppppppcStack_100,&DAT_10f56f6ff);
  FUN_1094a69fc(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x40);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572d72);
  FUN_1094a69fc(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x58);
  func_0x000107c31940(&pppppppcStack_120,&DAT_10f30a732);
  pppppcStack_188 = (char *****)0x0;
  uStack_180 = 0;
  uStack_178 = 0;
  FUN_1094a75e8(&pppppppcStack_100,param_1 + 8,&pppppppcStack_120,param_1 + 0x18,&pppppcStack_188);
  puVar8 = (undefined8 *)(param_1 + 0x158);
  func_0x000107c3193c(puVar8);
  *(char *******)(param_1 + 0x160) = ppppppcStack_f8;
  *puVar8 = pppppppcStack_100;
  *(char ******)(param_1 + 0x168) = pppppcStack_f0;
  ppppppcStack_f8 = (char ******)0x0;
  pppppcStack_f0 = (char *****)0x0;
  pppppppcStack_100 = (char *******)0x0;
  pppppppcStack_148 = (char *******)&pppppppcStack_100;
  func_0x000104c607c8(&pppppppcStack_148);
  pppppppcStack_148 = (char *******)&pppppcStack_188;
  func_0x000104c607c8(&pppppppcStack_148);
  if ((long)pppppcStack_110 < 0) {
    __ZdlPv(pppppppcStack_120);
  }
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f56f70a);
  func_0x0001094d2230(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x78);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f56f719);
  FUN_1094d1e80(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x90);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f56f729);
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  lStack_1a8 = 0;
  FUN_1094d1f9c(auStack_1a0,param_1 + 8,&pppppppcStack_100,param_1 + 0x18,&uStack_1b8);
  if (lStack_1a8 < 0) {
    __ZdlPv(uStack_1b8);
  }
  uVar4 = SUB84(auStack_1a0,0);
  FUN_10937e5e8();
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  func_0x000107c31940(&pppppppcStack_120,&UNK_10f56f7ae);
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  lStack_1c0 = 0;
  FUN_1094d1f9c(&pppppppcStack_100,param_1 + 8,&pppppppcStack_120,param_1 + 0x18,&uStack_1d0);
  if (*(char *)(param_1 + 199) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xb0));
  }
  *(char *******)(param_1 + 0xb8) = ppppppcStack_f8;
  *(char ********)(param_1 + 0xb0) = pppppppcStack_100;
  *(char ******)(param_1 + 0xc0) = pppppcStack_f0;
  pppppcStack_f0 = (char *****)((ulong)pppppcStack_f0 & 0xffffffffffffff);
  pppppppcStack_100 = (char *******)((ulong)pppppppcStack_100 & 0xffffffffffffff00);
  if (lStack_1c0 < 0) {
    __ZdlPv(uStack_1d0);
  }
  if ((long)pppppcStack_110 < 0) {
    __ZdlPv(pppppppcStack_120);
  }
  func_0x000107c31940(&pppppppcStack_120,&UNK_10f572d83);
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  lStack_1d8 = 0;
  FUN_1094d1f9c(&pppppppcStack_100,param_1 + 8,&pppppppcStack_120,param_1 + 0x18,&uStack_1e8);
  if (*(char *)(param_1 + 0xdf) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 200));
  }
  *(char *******)(param_1 + 0xd0) = ppppppcStack_f8;
  *(char ********)(param_1 + 200) = pppppppcStack_100;
  *(char ******)(param_1 + 0xd8) = pppppcStack_f0;
  pppppcStack_f0 = (char *****)((ulong)pppppcStack_f0 & 0xffffffffffffff);
  pppppppcStack_100 = (char *******)((ulong)pppppppcStack_100 & 0xffffffffffffff00);
  if (lStack_1d8 < 0) {
    __ZdlPv(uStack_1e8);
  }
  if ((long)pppppcStack_110 < 0) {
    __ZdlPv(pppppppcStack_120);
  }
  func_0x000107c31940(&pppppppcStack_120,&UNK_10f572d95);
  uStack_200 = 0;
  uStack_1f8 = 0;
  lStack_1f0 = 0;
  FUN_1094d1f9c(&pppppppcStack_100,param_1 + 8,&pppppppcStack_120,param_1 + 0x18,&uStack_200);
  if (*(char *)(param_1 + 0xf7) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xe0));
  }
  *(char *******)(param_1 + 0xe8) = ppppppcStack_f8;
  *(char ********)(param_1 + 0xe0) = pppppppcStack_100;
  *(char ******)(param_1 + 0xf0) = pppppcStack_f0;
  pppppcStack_f0 = (char *****)((ulong)pppppcStack_f0 & 0xffffffffffffff);
  pppppppcStack_100 = (char *******)((ulong)pppppppcStack_100 & 0xffffffffffffff00);
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  if ((long)pppppcStack_110 < 0) {
    __ZdlPv(pppppppcStack_120);
  }
  func_0x000107c31940(&pppppppcStack_120,&UNK_10f56f7c2);
  uStack_218 = 0;
  uStack_210 = 0;
  lStack_208 = 0;
  FUN_1094d1f9c(&pppppppcStack_100,param_1 + 8,&pppppppcStack_120,param_1 + 0x18,&uStack_218);
  if (*(char *)(param_1 + 0x10f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0xf8));
  }
  *(char *******)(param_1 + 0x100) = ppppppcStack_f8;
  *(char ********)(param_1 + 0xf8) = pppppppcStack_100;
  *(char ******)(param_1 + 0x108) = pppppcStack_f0;
  pppppcStack_f0 = (char *****)((ulong)pppppcStack_f0 & 0xffffffffffffff);
  pppppppcStack_100 = (char *******)((ulong)pppppppcStack_100 & 0xffffffffffffff00);
  if (lStack_208 < 0) {
    __ZdlPv(uStack_218);
  }
  if ((long)pppppcStack_110 < 0) {
    __ZdlPv(pppppppcStack_120);
  }
  func_0x000107c31940(&pppppppcStack_120,&UNK_10f572da2);
  uStack_230 = 0;
  uStack_228 = 0;
  lStack_220 = 0;
  FUN_1094d1f9c(&pppppppcStack_100,param_1 + 8,&pppppppcStack_120,param_1 + 0x18,&uStack_230);
  puVar1 = (ulong *)(param_1 + 0x128);
  if (*(char *)(param_1 + 0x13f) < '\0') {
    __ZdlPv(*puVar1);
  }
  *(char *******)(param_1 + 0x130) = ppppppcStack_f8;
  *puVar1 = (ulong)pppppppcStack_100;
  *(char ******)(param_1 + 0x138) = pppppcStack_f0;
  pppppcStack_f0 = (char *****)((ulong)pppppcStack_f0 & 0xffffffffffffff);
  pppppppcStack_100 = (char *******)((ulong)pppppppcStack_100 & 0xffffffffffffff00);
  if (lStack_220 < 0) {
    __ZdlPv(uStack_230);
  }
  if ((long)pppppcStack_110 < 0) {
    __ZdlPv(pppppppcStack_120);
  }
  func_0x000107c31940(&pppppppcStack_120,&UNK_10f56f5ce);
  uStack_248 = 0;
  uStack_240 = 0;
  lStack_238 = 0;
  FUN_1094d1f9c(&pppppppcStack_100,param_1 + 8,&pppppppcStack_120,param_1 + 0x18,&uStack_248);
  if (*(char *)(param_1 + 0x127) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x110));
  }
  *(char *******)(param_1 + 0x118) = ppppppcStack_f8;
  *(char ********)(param_1 + 0x110) = pppppppcStack_100;
  *(char ******)(param_1 + 0x120) = pppppcStack_f0;
  pppppcStack_f0 = (char *****)((ulong)pppppcStack_f0 & 0xffffffffffffff);
  pppppppcStack_100 = (char *******)((ulong)pppppppcStack_100 & 0xffffffffffffff00);
  if (lStack_238 < 0) {
    __ZdlPv(uStack_248);
  }
  if ((long)pppppcStack_110 < 0) {
    __ZdlPv(pppppppcStack_120);
  }
  func_0x000107c31940(&pppppppcStack_120,&UNK_10f572db0);
  uStack_260 = 0;
  uStack_258 = 0;
  lStack_250 = 0;
  FUN_1094d1f9c(&pppppppcStack_100,param_1 + 8,&pppppppcStack_120,param_1 + 0x18,&uStack_260);
  if (*(char *)(param_1 + 0x157) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x140));
  }
  *(char *******)(param_1 + 0x148) = ppppppcStack_f8;
  *(char ********)(param_1 + 0x140) = pppppppcStack_100;
  *(char ******)(param_1 + 0x150) = pppppcStack_f0;
  pppppcStack_f0 = (char *****)((ulong)pppppcStack_f0 & 0xffffffffffffff);
  pppppppcStack_100 = (char *******)((ulong)pppppppcStack_100 & 0xffffffffffffff00);
  if (lStack_250 < 0) {
    __ZdlPv(uStack_260);
  }
  if ((long)pppppcStack_110 < 0) {
    __ZdlPv(pppppppcStack_120);
  }
  if (*(char *)(param_1 + 199) < '\0') {
    func_0x000107c3192c(&pppppppcStack_100,*(undefined8 *)(param_1 + 0xb0),
                        *(undefined8 *)(param_1 + 0xb8));
  }
  else {
    ppppppcStack_f8 = *(char *******)(param_1 + 0xb8);
    pppppppcStack_100 = *(char ********)(param_1 + 0xb0);
    pppppcStack_f0 = *(char ******)(param_1 + 0xc0);
  }
  if (*(char *)(param_1 + 0x10f) < '\0') {
    func_0x000107c3192c(&uStack_e8,*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100))
    ;
  }
  else {
    uStack_e0 = *(undefined8 *)(param_1 + 0x100);
    uStack_e8 = *(undefined8 *)(param_1 + 0xf8);
    uStack_d8 = *(undefined8 *)(param_1 + 0x108);
  }
  if (*(char *)(param_1 + 0x127) < '\0') {
    func_0x000107c3192c(&uStack_d0,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x118)
                       );
  }
  else {
    uStack_c8 = *(undefined8 *)(param_1 + 0x118);
    uStack_d0 = *(undefined8 *)(param_1 + 0x110);
    uStack_c0 = *(undefined8 *)(param_1 + 0x120);
  }
  if (*(char *)(param_1 + 0x13f) < '\0') {
    func_0x000107c3192c(&uStack_b8,*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x130)
                       );
  }
  else {
    uStack_b0 = *(undefined8 *)(param_1 + 0x130);
    uStack_b8 = *puVar1;
    uStack_a8 = *(undefined8 *)(param_1 + 0x138);
  }
  if (*(char *)(param_1 + 0x157) < '\0') {
    func_0x000107c3192c(&uStack_a0,*(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x148)
                       );
  }
  else {
    uStack_98 = *(undefined8 *)(param_1 + 0x148);
    uStack_a0 = *(undefined8 *)(param_1 + 0x140);
    uStack_90 = *(undefined8 *)(param_1 + 0x150);
  }
  if (*(char *)(param_1 + 0xdf) < '\0') {
    func_0x000107c3192c(&uStack_88,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
  }
  else {
    uStack_80 = *(undefined8 *)(param_1 + 0xd0);
    uStack_88 = *(undefined8 *)(param_1 + 200);
    uStack_78 = *(undefined8 *)(param_1 + 0xd8);
  }
  if (*(char *)(param_1 + 0xf7) < '\0') {
    func_0x000107c3192c(auStack_70,*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8));
  }
  else {
    auStack_70[1] = *(undefined8 *)(param_1 + 0xe8);
    auStack_70[0] = *(undefined8 *)(param_1 + 0xe0);
    uStack_60 = *(undefined8 *)(param_1 + 0xf0);
  }
  FUN_109508250(param_1 + 0x188,&pppppppcStack_100,&lStack_58,7);
  lVar13 = 0;
  do {
    if ((&cStack_59)[lVar13] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
    }
    lVar13 = lVar13 + -0x18;
  } while (lVar13 != -0xa8);
  puVar12 = *(undefined8 **)(param_1 + 400);
  puVar15 = *(undefined8 **)(param_1 + 0x188);
  puVar7 = *(undefined8 **)(param_1 + 0x188);
  do {
    puVar14 = puVar7;
    if (puVar14 == puVar12) goto LAB_109523870;
    puVar7 = puVar14 + 3;
    uVar2 = puVar14[1];
    if (-1 < (char)*(byte *)((long)puVar14 + 0x17)) {
      uVar2 = (ulong)*(byte *)((long)puVar14 + 0x17);
    }
    puVar15 = puVar12;
  } while (uVar2 != 0);
  puVar15 = puVar14;
  if ((puVar14 != puVar12) && (puVar7 != puVar12)) {
    do {
      uVar2 = puVar7[1];
      if (-1 < (char)*(byte *)((long)puVar7 + 0x17)) {
        uVar2 = (ulong)*(byte *)((long)puVar7 + 0x17);
      }
      puVar15 = puVar14;
      if (uVar2 != 0) {
        if (*(char *)((long)puVar14 + 0x17) < '\0') {
          __ZdlPv(*puVar14);
        }
        uVar16 = puVar7[1];
        uVar11 = *puVar7;
        puVar14[2] = puVar7[2];
        puVar15 = puVar14 + 3;
        puVar14[1] = uVar16;
        *puVar14 = uVar11;
        *(undefined1 *)((long)puVar7 + 0x17) = 0;
        *(undefined1 *)puVar7 = 0;
      }
      puVar7 = puVar7 + 3;
      puVar14 = puVar15;
    } while (puVar7 != puVar12);
    puVar12 = *(undefined8 **)(param_1 + 400);
  }
LAB_109523870:
  func_0x000107c2846c(param_1 + 0x188,puVar15,puVar12);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f56f7e3);
  FUN_1094a69fc(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x98);
  func_0x000107c31940(auStack_278,&UNK_10f572dbb);
  ppppppcVar9 = *(char *******)(param_1 + 8);
  pppppcStack_140 = (char *****)0x0;
  pppppcStack_138 = (char *****)0x0;
  uStack_130 = 0x8000000000000000;
  cVar3 = *(char *)ppppppcVar9;
  pppppppcStack_148 = (char *******)ppppppcVar9;
  if (cVar3 == '\x01') {
    pppppcVar6 = ppppppcVar9[1];
    FUN_1093793a4(pppppcVar6,auStack_278);
    ppppppcVar9 = *(char *******)(param_1 + 8);
    cVar3 = *(char *)ppppppcVar9;
    pppppcStack_140 = pppppcVar6;
LAB_109523928:
    ppppppcStack_f8 = (char ******)0x0;
    pppppcStack_f0 = (char *****)0x0;
    uStack_e8 = 0x8000000000000000;
    pppppppcStack_100 = (char *******)ppppppcVar9;
    if (cVar3 == '\x01') {
      ppppppcStack_f8 = (char ******)(ppppppcVar9[1] + 1);
    }
    else {
      if (cVar3 == '\x02') {
        pppppcStack_f0 = (char *****)ppppppcVar9[1][1];
        goto LAB_10952394c;
      }
      uStack_e8 = 1;
    }
  }
  else {
    if (cVar3 != '\x02') {
      uStack_130 = 1;
      goto LAB_109523928;
    }
    pppppcStack_f0 = (char *****)ppppppcVar9[1][1];
    pppppcStack_138 = pppppcStack_f0;
    pppppppcStack_100 = (char *******)ppppppcVar9;
LAB_10952394c:
    uStack_e8 = 0x8000000000000000;
    ppppppcStack_f8 = (char ******)0x0;
  }
  pppppppcVar10 = (char *******)&pppppppcStack_148;
  FUN_109379420(pppppppcVar10,&pppppppcStack_100);
  if ((int)pppppppcVar10 == 0) {
    FUN_10937b950(&pppppppcStack_148);
    pppppppcStack_100 = (char *******)0x0;
    FUN_1095247c8();
    pppppppcVar10 = pppppppcStack_100;
  }
  else {
    pppppppcStack_120 = *(char ********)(param_1 + 0x18);
    ppppppcStack_f8 = (char ******)0x0;
    pppppcStack_f0 = (char *****)0x0;
    uStack_e8 = 0x8000000000000000;
    cVar3 = *(char *)pppppppcStack_120;
    pppppppcStack_100 = pppppppcStack_120;
    if (cVar3 == '\x01') {
      pppppcVar6 = (char *****)pppppppcStack_120[1];
      FUN_1093793a4(pppppcVar6,auStack_278);
      pppppppcStack_120 = *(char ********)(param_1 + 0x18);
      cVar3 = *(char *)pppppppcStack_120;
      ppppppcStack_f8 = (char ******)pppppcVar6;
LAB_1095239fc:
      ppppppcStack_118 = (char ******)0x0;
      pppppcStack_110 = (char *****)0x0;
      uStack_108 = 0x8000000000000000;
      if (cVar3 == '\x01') {
        ppppppcStack_118 = pppppppcStack_120[1] + 1;
      }
      else {
        if (cVar3 == '\x02') {
          pppppcStack_110 = pppppppcStack_120[1][1];
          goto LAB_109523a20;
        }
        uStack_108 = 1;
      }
    }
    else {
      if (cVar3 != '\x02') {
        uStack_e8 = 1;
        goto LAB_1095239fc;
      }
      pppppcStack_110 = pppppppcStack_120[1][1];
      pppppcStack_f0 = pppppcStack_110;
LAB_109523a20:
      uStack_108 = 0x8000000000000000;
      ppppppcStack_118 = (char ******)0x0;
    }
    pppppppcVar10 = (char *******)&pppppppcStack_100;
    FUN_109379420(pppppppcVar10,&pppppppcStack_120);
    if (((ulong)pppppppcVar10 & 1) == 0) {
      FUN_10937b950(&pppppppcStack_100);
      pppppppcStack_120 = (char *******)0x0;
      FUN_1095247c8();
      pppppppcVar10 = pppppppcStack_120;
    }
    else {
      pppppppcVar10 = (char *******)(char ******)0x0;
    }
  }
  *(char ********)(param_1 + 0x1e8) = pppppppcVar10;
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572ddd);
  lVar13 = param_1 + 8;
  FUN_109506694(lVar13,&pppppppcStack_100,param_1 + 0x18,0);
  *(char *)(param_1 + 0x1f0) = (char)lVar13;
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572dfa);
  lVar13 = param_1 + 8;
  FUN_109506694(lVar13,&pppppppcStack_100,param_1 + 0x18,0);
  *(char *)(param_1 + 0x1f1) = (char)lVar13;
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572e11);
  uVar4 = 0;
  FUN_1094d3328(param_1 + 8,&pppppppcStack_100,param_1 + 0x18);
  *(undefined4 *)(param_1 + 500) = uVar4;
  func_0x000107c31940(&pppppppcStack_100,&DAT_10f572e26);
  FUN_1094d04c4(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x1a0);
  func_0x000107c31940(&pppppppcStack_100,&DAT_10f570088);
  FUN_1094d04c4(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x1b8);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f570098);
  FUN_1094d04c4(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x1d0);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f570120);
  FUN_1094d1e80(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x210);
  func_0x000107c31940(auStack_278,&UNK_10f572e33);
  ppppppcVar9 = *(char *******)(param_1 + 8);
  pppppcStack_140 = (char *****)0x0;
  pppppcStack_138 = (char *****)0x0;
  uStack_130 = 0x8000000000000000;
  cVar3 = *(char *)ppppppcVar9;
  pppppppcStack_148 = (char *******)ppppppcVar9;
  if (cVar3 == '\x01') {
    pppppcVar6 = ppppppcVar9[1];
    FUN_1093793a4(pppppcVar6,auStack_278);
    ppppppcVar9 = *(char *******)(param_1 + 8);
    cVar3 = *(char *)ppppppcVar9;
    pppppcStack_140 = pppppcVar6;
LAB_109523c70:
    ppppppcStack_f8 = (char ******)0x0;
    pppppcStack_f0 = (char *****)0x0;
    uStack_e8 = 0x8000000000000000;
    pppppppcStack_100 = (char *******)ppppppcVar9;
    if (cVar3 == '\x01') {
      ppppppcStack_f8 = (char ******)(ppppppcVar9[1] + 1);
    }
    else {
      if (cVar3 == '\x02') {
        pppppcStack_f0 = (char *****)ppppppcVar9[1][1];
        goto LAB_109523c94;
      }
      uStack_e8 = 1;
    }
  }
  else {
    if (cVar3 != '\x02') {
      uStack_130 = 1;
      goto LAB_109523c70;
    }
    pppppcStack_f0 = (char *****)ppppppcVar9[1][1];
    pppppcStack_138 = pppppcStack_f0;
    pppppppcStack_100 = (char *******)ppppppcVar9;
LAB_109523c94:
    uStack_e8 = 0x8000000000000000;
    ppppppcStack_f8 = (char ******)0x0;
  }
  pppppppcVar10 = (char *******)&pppppppcStack_148;
  FUN_109379420(pppppppcVar10,&pppppppcStack_100);
  if (((ulong)pppppppcVar10 & 1) == 0) {
    pppppppcVar10 = (char *******)&pppppppcStack_148;
    FUN_10937b950(pppppppcVar10);
    FUN_109524828(&pppppppcStack_100,pppppppcVar10);
    func_0x000108a64d6c(param_1 + 0x230);
    *(char *******)(param_1 + 0x238) = ppppppcStack_f8;
    *(char ********)(param_1 + 0x230) = pppppppcStack_100;
    *(char ******)(param_1 + 0x240) = pppppcStack_f0;
    ppppppcStack_f8 = (char ******)0x0;
    pppppcStack_f0 = (char *****)0x0;
    pppppppcStack_100 = (char *******)0x0;
    pppppppcVar10 = (char *******)&pppppppcStack_120;
    pppppppcStack_120 = (char *******)&pppppppcStack_100;
LAB_109523dfc:
    func_0x0001093957f8(pppppppcVar10);
  }
  else {
    pppppppcVar10 = *(char ********)(param_1 + 0x18);
    ppppppcStack_f8 = (char ******)0x0;
    pppppcStack_f0 = (char *****)0x0;
    uStack_e8 = 0x8000000000000000;
    cVar3 = *(char *)pppppppcVar10;
    pppppppcStack_100 = pppppppcVar10;
    if (cVar3 == '\x01') {
      ppppppcVar9 = pppppppcVar10[1];
      FUN_1093793a4(ppppppcVar9,auStack_278);
      pppppppcVar10 = *(char ********)(param_1 + 0x18);
      cVar3 = *(char *)pppppppcVar10;
      ppppppcStack_f8 = ppppppcVar9;
LAB_109523d6c:
      ppppppcStack_118 = (char ******)0x0;
      pppppcStack_110 = (char *****)0x0;
      uStack_108 = 0x8000000000000000;
      pppppppcStack_120 = pppppppcVar10;
      if (cVar3 == '\x01') {
        ppppppcStack_118 = pppppppcVar10[1] + 1;
      }
      else {
        if (cVar3 == '\x02') {
          pppppcStack_110 = pppppppcVar10[1][1];
          goto LAB_109523d90;
        }
        uStack_108 = 1;
      }
    }
    else {
      if (cVar3 != '\x02') {
        uStack_e8 = 1;
        goto LAB_109523d6c;
      }
      pppppcStack_110 = pppppppcVar10[1][1];
      pppppppcStack_120 = pppppppcVar10;
      pppppcStack_f0 = pppppcStack_110;
LAB_109523d90:
      uStack_108 = 0x8000000000000000;
      ppppppcStack_118 = (char ******)0x0;
    }
    pppppppcVar10 = (char *******)&pppppppcStack_100;
    FUN_109379420(pppppppcVar10,&pppppppcStack_120);
    if (((ulong)pppppppcVar10 & 1) == 0) {
      pppppppcVar10 = (char *******)&pppppppcStack_100;
      FUN_10937b950(pppppppcVar10);
      FUN_109524828(&pppppppcStack_120,pppppppcVar10);
      func_0x000108a64d6c(param_1 + 0x230);
      *(char *******)(param_1 + 0x238) = ppppppcStack_118;
      *(char ********)(param_1 + 0x230) = pppppppcStack_120;
      *(char ******)(param_1 + 0x240) = pppppcStack_110;
      ppppppcStack_118 = (char ******)0x0;
      pppppcStack_110 = (char *****)0x0;
      pppppppcStack_120 = (char *******)0x0;
      pppppppcVar10 = (char *******)&pppppppcStack_128;
      pppppppcStack_128 = (char *******)&pppppppcStack_120;
      goto LAB_109523dfc;
    }
  }
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572e48);
  FUN_1094d1e80(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x214);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572e53);
  FUN_1094d1e80(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x218);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572e64);
  func_0x0001094d2230(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x248);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572e72);
  FUN_1094d1e80(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x228);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572e87);
  FUN_1094d1e80(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x22c);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572e9d);
  FUN_1094a775c(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x21c);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572eb2);
  FUN_1094d1e80(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x220);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572ec3);
  FUN_1094d1e80(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x224);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572ed4);
  FUN_1094d2114(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x260);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572ee7);
  FUN_1094d1e80(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x264);
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572efe);
  FUN_1094d1e80(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x268);
  func_0x000107c31940(&pppppppcStack_148,&UNK_10f572f13);
  ppppppcVar9 = *(char *******)(param_1 + 8);
  ppppppcStack_f8 = (char ******)0x0;
  pppppcStack_f0 = (char *****)0x0;
  uStack_e8 = 0x8000000000000000;
  cVar3 = *(char *)ppppppcVar9;
  pppppppcStack_100 = (char *******)ppppppcVar9;
  if (cVar3 == '\x01') {
    pppppcVar6 = ppppppcVar9[1];
    FUN_1093793a4(pppppcVar6,&pppppppcStack_148);
    ppppppcVar9 = *(char *******)(param_1 + 8);
    cVar3 = *(char *)ppppppcVar9;
    ppppppcStack_f8 = (char ******)pppppcVar6;
LAB_1095240c0:
    ppppppcStack_118 = (char ******)0x0;
    pppppcStack_110 = (char *****)0x0;
    uStack_108 = 0x8000000000000000;
    pppppppcStack_120 = (char *******)ppppppcVar9;
    if (cVar3 == '\x01') {
      ppppppcStack_118 = (char ******)(ppppppcVar9[1] + 1);
      goto LAB_109524104;
    }
    if (cVar3 != '\x02') {
      uStack_108 = 1;
      goto LAB_109524104;
    }
    pppppcStack_110 = (char *****)ppppppcVar9[1][1];
  }
  else {
    if (cVar3 != '\x02') {
      uStack_e8 = 1;
      goto LAB_1095240c0;
    }
    pppppcStack_110 = (char *****)ppppppcVar9[1][1];
    pppppppcStack_120 = (char *******)ppppppcVar9;
    pppppcStack_f0 = pppppcStack_110;
  }
  uStack_108 = 0x8000000000000000;
  ppppppcStack_118 = (char ******)0x0;
LAB_109524104:
  pppppppcVar10 = (char *******)&pppppppcStack_100;
  FUN_109379420(pppppppcVar10,&pppppppcStack_120);
  if (((ulong)pppppppcVar10 & 1) == 0) {
    FUN_10937b950(&pppppppcStack_100);
    FUN_1094e5754();
    *(char ********)(param_1 + 0x38) = pppppppcStack_120;
  }
  else {
    FUN_1094e55d4(param_1 + 0x18,&pppppppcStack_148,param_1 + 0x38);
  }
  if ((long)pppppcStack_138 < 0) {
    __ZdlPv(pppppppcStack_148);
  }
  func_0x000107c31940(&pppppppcStack_100,&UNK_10f572f24);
  FUN_1094a775c(param_1 + 8,&pppppppcStack_100,param_1 + 0x18,param_1 + 0x34);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x1f8);
  pppppppcStack_100 = (char *******)0x0;
  ppppppcStack_f8 = (char ******)0x0;
  pppppcStack_f0 = (char *****)0x0;
  func_0x000107c31940(&pppppppcStack_120,&UNK_10f56f802);
  FUN_1094d04c4(param_1 + 8,&pppppppcStack_120,param_1 + 0x18,&pppppppcStack_100);
  if ((long)pppppcStack_110 < 0) {
    __ZdlPv(pppppppcStack_120);
  }
  if (pppppppcStack_100 == (char *******)ppppppcStack_f8) {
    if (*(int *)(param_1 + 0x94) != 0) {
      pppppppcStack_120 = (char *******)CONCAT44(pppppppcStack_120._4_4_,2);
      func_0x0001094d25f0(param_1 + 0x1f8,&pppppppcStack_120);
    }
  }
  else {
    FUN_10937dae0(&pppppppcStack_120,&pppppppcStack_100);
    if (*(long *)(param_1 + 0x1f8) != 0) {
      *(long *)(param_1 + 0x200) = *(long *)(param_1 + 0x1f8);
      __ZdlPv();
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      *(undefined8 *)(param_1 + 0x200) = 0;
      *(undefined8 *)(param_1 + 0x208) = 0;
    }
    *(char *******)(param_1 + 0x200) = ppppppcStack_118;
    *(char ********)(param_1 + 0x1f8) = pppppppcStack_120;
    *(char ******)(param_1 + 0x208) = pppppcStack_110;
  }
  pppppppcStack_120 = (char *******)0x0;
  ppppppcStack_118 = (char ******)0x0;
  pppppcStack_110 = (char *****)0x0;
  func_0x000107c31940(&pppppppcStack_148,&UNK_10f56f818);
  FUN_1094a69fc(param_1 + 8,&pppppppcStack_148,param_1 + 0x18,&pppppppcStack_120);
  if ((long)pppppcStack_138 < 0) {
    __ZdlPv(pppppppcStack_148);
  }
  uVar5 = (uint)&pppppppcStack_120;
  FUN_1094f59bc();
  if ((uVar5 >> 8 & 1) != 0) {
    *(char *)(param_1 + 0x70) = (char)uVar5;
  }
  if ((long)pppppcStack_110 < 0) {
    __ZdlPv(pppppppcStack_120);
  }
  pppppppcStack_120 = (char *******)&pppppppcStack_100;
  func_0x000104c607c8(&pppppppcStack_120);
  if (cStack_189 < '\0') {
    __ZdlPv(auStack_1a0[0]);
  }
  puVar7 = auStack_170;
  FUN_109380f8c();
  if (lStack_150 < 0) {
    puVar7 = (undefined8 *)CONCAT17((undefined1)uStack_159,uStack_160);
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return (undefined8 *)0x1;
  }
  ___stack_chk_fail();
  pppppppcStack_120 = (char *******)&pppppppcStack_100;
  func_0x000104c607c8(&pppppppcStack_120);
  if (cStack_189 < '\0') {
    __ZdlPv(auStack_1a0[0]);
  }
  FUN_109380f8c(auStack_170);
  if (lStack_150 < 0) {
    __ZdlPv(CONCAT17((undefined1)uStack_159,uStack_160));
  }
  puVar12 = puVar7;
  __Unwind_Resume();
  pcStack_288 = FUN_10952462c;
  *puVar12 = &PTR_FUN_110afb0d8;
  puStack_2a0 = puVar8;
  puStack_298 = puVar7;
  puStack_290 = &stack0xfffffffffffffff0;
  if (puVar12[0x49] != 0) {
    puVar12[0x4a] = puVar12[0x49];
    __ZdlPv();
  }
  puStack_2a8 = puVar12 + 0x46;
  func_0x0001093957f8(&puStack_2a8);
  if (puVar12[0x3f] != 0) {
    puVar12[0x40] = puVar12[0x3f];
    __ZdlPv();
  }
  puStack_2a8 = puVar12 + 0x3a;
  func_0x000104c607c8(&puStack_2a8);
  puStack_2a8 = puVar12 + 0x37;
  func_0x000104c607c8(&puStack_2a8);
  puStack_2a8 = puVar12 + 0x34;
  func_0x000104c607c8(&puStack_2a8);
  puStack_2a8 = puVar12 + 0x31;
  func_0x000104c607c8(&puStack_2a8);
  puStack_2a8 = puVar12 + 0x2e;
  func_0x000104c607c8(&puStack_2a8);
  puStack_2a8 = puVar12 + 0x2b;
  func_0x000104c607c8(&puStack_2a8);
  if (*(char *)((long)puVar12 + 0x157) < '\0') {
    __ZdlPv(puVar12[0x28]);
  }
  if (*(char *)((long)puVar12 + 0x13f) < '\0') {
    __ZdlPv(puVar12[0x25]);
  }
  if (*(char *)((long)puVar12 + 0x127) < '\0') {
    __ZdlPv(puVar12[0x22]);
  }
  if (*(char *)((long)puVar12 + 0x10f) < '\0') {
    __ZdlPv(puVar12[0x1f]);
  }
  if (*(char *)((long)puVar12 + 0xf7) < '\0') {
    __ZdlPv(puVar12[0x1c]);
  }
  if (*(char *)((long)puVar12 + 0xdf) < '\0') {
    __ZdlPv(puVar12[0x19]);
  }
  if (*(char *)((long)puVar12 + 199) < '\0') {
    __ZdlPv(puVar12[0x16]);
  }
  if (*(char *)((long)puVar12 + 0xaf) < '\0') {
    __ZdlPv(puVar12[0x13]);
  }
  if (puVar12[0xf] != 0) {
    puVar12[0x10] = puVar12[0xf];
    __ZdlPv();
  }
  if (*(char *)((long)puVar12 + 0x6f) < '\0') {
    __ZdlPv(puVar12[0xb]);
  }
  if (*(char *)((long)puVar12 + 0x57) < '\0') {
    __ZdlPv(puVar12[8]);
  }
  FUN_109380f8c(puVar12 + 3);
  FUN_109380f8c(puVar12 + 1);
  return puVar12;
}



/* Entry: 10952462c; end: 10952462f;  */

undefined8 * FUN_10952462c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110afb0d8;
  if (param_1[0x49] != 0) {
    param_1[0x4a] = param_1[0x49];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x46;
  func_0x0001093957f8(&puStack_28);
  if (param_1[0x3f] != 0) {
    param_1[0x40] = param_1[0x3f];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x3a;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 0x37;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 0x34;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 0x31;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 0x2e;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 0x2b;
  func_0x000104c607c8(&puStack_28);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    __ZdlPv(param_1[0x25]);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    __ZdlPv(param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    __ZdlPv(param_1[0x1c]);
  }
  if (*(char *)((long)param_1 + 0xdf) < '\0') {
    __ZdlPv(param_1[0x19]);
  }
  if (*(char *)((long)param_1 + 199) < '\0') {
    __ZdlPv(param_1[0x16]);
  }
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  FUN_109380f8c(param_1 + 3);
  FUN_109380f8c(param_1 + 1);
  return param_1;
}



/* Entry: 109524630; end: 109524643;  */

void FUN_109524630(void)

{
  FUN_109524644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109524644; end: 1095247c7;  */

undefined8 * FUN_109524644(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110afb0d8;
  if (param_1[0x49] != 0) {
    param_1[0x4a] = param_1[0x49];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x46;
  func_0x0001093957f8(&puStack_28);
  if (param_1[0x3f] != 0) {
    param_1[0x40] = param_1[0x3f];
    __ZdlPv();
  }
  puStack_28 = param_1 + 0x3a;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 0x37;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 0x34;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 0x31;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 0x2e;
  func_0x000104c607c8(&puStack_28);
  puStack_28 = param_1 + 0x2b;
  func_0x000104c607c8(&puStack_28);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    __ZdlPv(param_1[0x25]);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    __ZdlPv(param_1[0x22]);
  }
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(param_1[0x1f]);
  }
  if (*(char *)((long)param_1 + 0xf7) < '\0') {
    __ZdlPv(param_1[0x1c]);
  }
  if (*(char *)((long)param_1 + 0xdf) < '\0') {
    __ZdlPv(param_1[0x19]);
  }
  if (*(char *)((long)param_1 + 199) < '\0') {
    __ZdlPv(param_1[0x16]);
  }
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    __ZdlPv(param_1[0x13]);
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  FUN_109380f8c(param_1 + 3);
  FUN_109380f8c(param_1 + 1);
  return param_1;
}



/* Entry: 1095247c8; end: 109524827;  */

void FUN_1095247c8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_1094cf080(param_1,0);
  FUN_10937ba88();
  FUN_1094cf080(param_1,1);
  FUN_10937ba88();
  *param_2 = uStack_38;
  param_2[1] = uStack_34;
  return;
}



/* Entry: 109524828; end: 109524d93;  */

void FUN_109524828(undefined8 *param_1,char *param_2)

{
  char cVar1;
  long **pplVar2;
  long ***ppplVar3;
  code *pcVar4;
  bool bVar5;
  char **ppcVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long ****pppplVar10;
  ulong uVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  long ***ppplVar17;
  char *pcStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long ***ppplStack_100;
  long ***ppplStack_f8;
  long ***ppplStack_f0;
  long **pplStack_e0;
  long **pplStack_d8;
  long **pplStack_d0;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long ***ppplStack_80;
  long ***ppplStack_78;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_2 != '\x02') {
    uVar7 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_10937bcec(param_2);
    func_0x000107c31940(&ppplStack_c0,param_2);
    FUN_10928a5e0(&ppplStack_98,&UNK_10f56748c,&ppplStack_c0);
    FUN_10937bbbc(uVar7,0x12e,&ppplStack_98);
    ___cxa_throw(uVar7,&PTR_DAT_110af4510,FUN_10937bd14);
LAB_109524ce0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x109524ce4);
    (*pcVar4)();
  }
  ppplStack_f8 = (long ***)0x0;
  ppplStack_f0 = (long ***)0x0;
  ppplStack_100 = (long ***)0x0;
  func_0x000108a11934(&ppplStack_100,(*(long **)(param_2 + 8))[1] - **(long **)(param_2 + 8) >> 4);
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0x8000000000000000;
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    uStack_108 = 1;
  }
  else {
    if (cVar1 == '\x02') {
      uStack_110 = **(undefined8 **)(param_2 + 8);
      puStack_138 = (undefined8 *)0x0;
      uStack_128 = 0x8000000000000000;
      uStack_130 = (*(undefined8 **)(param_2 + 8))[1];
      goto LAB_109524908;
    }
    if (cVar1 == '\x01') {
      puStack_138 = *(undefined8 **)(param_2 + 8) + 1;
      uStack_118 = **(undefined8 **)(param_2 + 8);
      uStack_128 = 0x8000000000000000;
      uStack_130 = 0;
      goto LAB_109524908;
    }
    uStack_108 = 0;
  }
  puStack_138 = (undefined8 *)0x0;
  uStack_130 = 0;
  uStack_128 = 1;
LAB_109524908:
  pppplVar14 = (long ****)ppplStack_f8;
  pcStack_140 = param_2;
  pcStack_120 = param_2;
  do {
    ppcVar6 = &pcStack_120;
    FUN_10937c708(ppcVar6,&pcStack_140);
    if (((ulong)ppcVar6 & 1) != 0) {
      func_0x000108a64d6c(param_1);
      param_1[1] = ppplStack_f8;
      *param_1 = ppplStack_100;
      param_1[2] = ppplStack_f0;
      ppplStack_f8 = (long ***)0x0;
      ppplStack_f0 = (long ***)0x0;
      ppplStack_100 = (long ***)0x0;
      ppplStack_98 = (long ***)&ppplStack_100;
      func_0x0001093957f8(&ppplStack_98);
      return;
    }
    FUN_10937c560(&pcStack_120);
    FUN_1094a87f4(&pplStack_e0);
    ppplVar17 = ppplStack_100;
    if (ppplStack_f8 < ppplStack_f0) {
      if (pppplVar14 == (long ****)ppplStack_f8) {
        *ppplStack_f8 = (long **)0x0;
        ppplStack_f8[1] = (long **)0x0;
        pplVar2 = pplStack_e0;
        ppplStack_f8[2] = (long **)0x0;
        ppplStack_f8[1] = pplStack_d8;
        *ppplStack_f8 = pplVar2;
        ppplStack_f8[2] = pplStack_d0;
        ppplStack_f8 = ppplStack_f8 + 3;
      }
      else {
        pppplVar10 = (long ****)(ppplStack_f8 + -3);
        pppplVar15 = (long ****)ppplStack_f8;
        if (pppplVar10 < ppplStack_f8) {
          *ppplStack_f8 = (long **)0x0;
          ppplStack_f8[1] = (long **)0x0;
          ppplStack_f8[2] = (long **)0x0;
          ppplStack_f8[1] = ppplStack_f8[-2];
          *ppplStack_f8 = (long **)*pppplVar10;
          ppplStack_f8[2] = ppplStack_f8[-1];
          *pppplVar10 = (long ***)0x0;
          ppplStack_f8[-2] = (long **)0x0;
          ppplStack_f8[-1] = (long **)0x0;
          pppplVar15 = (long ****)(ppplStack_f8 + 3);
        }
        bVar5 = (long ****)ppplStack_f8 != pppplVar14 + 3;
        pppplVar16 = pppplVar10;
        ppplStack_f8 = (long ***)pppplVar15;
        if (bVar5) {
          do {
            pppplVar10 = pppplVar10 + -3;
            func_0x0001074714f0(pppplVar16,pppplVar10);
            pppplVar16 = pppplVar16 + -3;
          } while (pppplVar10 != pppplVar14);
        }
        if (*pppplVar14 != (long ***)0x0) {
          pppplVar14[1] = *pppplVar14;
          __ZdlPv();
          *pppplVar14 = (long ***)0x0;
          pppplVar14[1] = (long ***)0x0;
          pppplVar14[2] = (long ***)0x0;
        }
        pppplVar14[1] = (long ***)pplStack_d8;
        *pppplVar14 = (long ***)pplStack_e0;
        pppplVar14[2] = (long ***)pplStack_d0;
      }
    }
    else {
      uVar8 = ((long)ppplStack_f8 - (long)ppplStack_100 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar8) {
        FUN_1093957a0();
        goto LAB_109524ce0;
      }
      lVar9 = (long)ppplStack_f0 - (long)ppplStack_100 >> 3;
      uVar11 = lVar9 * 0x5555555555555556;
      if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
        uVar11 = uVar8;
      }
      if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
        uVar11 = 0xaaaaaaaaaaaaaaa;
      }
      ppplStack_a0 = (long ***)&ppplStack_100;
      if (uVar11 == 0) {
        pppplVar15 = (long ****)0x0;
        uVar11 = 0;
      }
      else {
        pppplVar15 = &ppplStack_100;
        FUN_1093957b4();
        uVar11 = uVar11 * 0x18;
      }
      uVar8 = (long)pppplVar14 - (long)ppplVar17;
      ppplStack_b8 = (long ***)((long)pppplVar15 + uVar8);
      ppplStack_a8 = (long ***)((long)pppplVar15 + uVar11);
      ppplStack_c0 = (long ***)pppplVar15;
      ppplStack_b0 = ppplStack_b8;
      if (uVar8 == uVar11) {
        if ((long)uVar8 < 1) {
          uVar11 = 1;
          if (pppplVar14 != (long ****)ppplVar17) {
            uVar11 = (-uVar8 >> 3) * -0x5555555555555556;
          }
          pppplVar15 = &ppplStack_100;
          uVar8 = uVar11;
          ppplStack_78 = (long ***)&ppplStack_100;
          FUN_1093957b4();
          pppplVar16 = pppplVar15 + (uVar11 >> 2) * 3;
          pppplVar10 = pppplVar16;
          if ((long)ppplStack_b0 - (long)ppplStack_b8 != 0) {
            pppplVar10 = (long ****)((long)pppplVar16 + ((long)ppplStack_b0 - (long)ppplStack_b8));
            pppplVar12 = (long ****)ppplStack_b8;
            pppplVar13 = pppplVar16;
            do {
              *pppplVar13 = (long ***)0x0;
              pppplVar13[1] = (long ***)0x0;
              pppplVar13[2] = (long ***)0x0;
              ppplVar17 = *pppplVar12;
              pppplVar13[1] = pppplVar12[1];
              *pppplVar13 = ppplVar17;
              pppplVar13[2] = pppplVar12[2];
              *pppplVar12 = (long ***)0x0;
              pppplVar12[1] = (long ***)0x0;
              pppplVar12[2] = (long ***)0x0;
              pppplVar13 = pppplVar13 + 3;
              pppplVar12 = pppplVar12 + 3;
            } while (pppplVar13 != pppplVar10);
          }
          ppplStack_98 = ppplStack_c0;
          ppplStack_80 = ppplStack_a8;
          ppplStack_c0 = (long ***)pppplVar15;
          ppplStack_90 = ppplStack_b8;
          ppplStack_b8 = (long ***)pppplVar16;
          ppplStack_88 = ppplStack_b0;
          ppplStack_b0 = (long ***)pppplVar10;
          ppplStack_a8 = (long ***)(pppplVar15 + uVar8 * 3);
          func_0x000108a11c04(&ppplStack_98);
        }
        else {
          ppplStack_b8 = ppplStack_b8 + ((uVar8 >> 3) * -0x5555555555555555 + 1 >> 1) * -3;
          ppplStack_b0 = ppplStack_b8;
        }
      }
      ppplVar17 = ppplStack_b0;
      *ppplStack_b0 = (long **)0x0;
      ppplVar17[1] = (long **)0x0;
      ppplVar17[2] = (long **)0x0;
      ppplVar17[1] = pplStack_d8;
      *ppplVar17 = pplStack_e0;
      ppplVar17[2] = pplStack_d0;
      ppplVar3 = ppplStack_b8;
      pplStack_e0 = (long **)0x0;
      pplStack_d8 = (long **)0x0;
      pplStack_d0 = (long **)0x0;
      pppplVar15 = (long ****)(ppplStack_b0 + 3);
      lVar9 = (long)ppplStack_f8 - (long)pppplVar14;
      _memcpy(pppplVar15,pppplVar14,lVar9);
      ppplStack_b0 = (long ***)((long)pppplVar15 + lVar9);
      pppplVar15 = (long ****)((long)ppplVar3 - ((long)pppplVar14 - (long)ppplStack_100));
      ppplStack_f8 = (long ***)pppplVar14;
      _memcpy(pppplVar15);
      ppplVar17 = ppplStack_f0;
      ppplStack_f0 = ppplStack_a8;
      ppplStack_f8 = ppplStack_b0;
      ppplStack_b0 = ppplStack_100;
      ppplStack_a8 = ppplVar17;
      ppplStack_c0 = ppplStack_100;
      ppplStack_b8 = ppplStack_100;
      ppplStack_100 = (long ***)pppplVar15;
      func_0x000108a11c04(&ppplStack_c0);
      pppplVar14 = (long ****)ppplVar3;
      if ((long ***)pplStack_e0 != (long ***)0x0) {
        pplStack_d8 = pplStack_e0;
        __ZdlPv();
      }
    }
    pppplVar14 = pppplVar14 + 3;
    FUN_10937c698(&pcStack_120);
  } while( true );
}



/* Entry: 109524d94; end: 109525017;  */

undefined8 FUN_109524d94(long param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 auStack_58 [16];
  undefined8 auStack_48 [2];
  char cStack_31;
  
  uVar1 = *param_2;
  func_0x000107c31940(auStack_48,&UNK_10f572d6a);
  FUN_1093781f4(uVar1,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  if ((uVar1 & 1) != 0) {
    uVar1 = *param_2;
    func_0x000107c31940(auStack_48,&UNK_10f572d6a);
    FUN_1094a68cc(auStack_58,uVar1,auStack_48);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    func_0x000107c31940(auStack_48,&UNK_10f572f2f);
    func_0x0001094a6db0(auStack_58,auStack_48,param_1 + 8);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    func_0x000107c31940(auStack_48,&UNK_10f572f3f);
    func_0x0001094a6db0(auStack_58,auStack_48,param_1 + 0x14);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    func_0x000107c31940(auStack_48,&UNK_10f572f51);
    func_0x0001094a6db0(auStack_58,auStack_48,param_1 + 0x18);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    func_0x000107c31940(auStack_48,&UNK_10f572f62);
    func_0x0001094a6db0(auStack_58,auStack_48,param_1 + 0x1c);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    func_0x000107c31940(auStack_48,&UNK_10f572f77);
    func_0x0001094a6db0(auStack_58,auStack_48,param_1 + 0x20);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    func_0x000107c31940(auStack_48,&UNK_10f572f87);
    FUN_1094a9268(auStack_58,auStack_48,param_1 + 0xc);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    func_0x000107c31940(auStack_48,&UNK_10f572f9c);
    FUN_1094a9268(auStack_58,auStack_48,param_1 + 0x10);
    if (cStack_31 < '\0') {
      __ZdlPv(auStack_48[0]);
    }
    FUN_109380f8c(auStack_58);
  }
  return 1;
}



/* Entry: 109525018; end: 10952501f;  */

void FUN_109525018(void)

{
  return;
}



/* Entry: 109525020; end: 1095250b7;  */

void FUN_109525020(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf8;
  __Znwm();
  *(undefined4 *)(puVar1 + 1) = 0x42ff0000;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *(undefined8 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[0xb] = 0;
  puVar1[9] = puVar1 + 2;
  puVar1[10] = puVar1 + 0xb;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0x42ff0000;
  *(undefined8 *)((long)puVar1 + 0x74) = 0;
  *(undefined8 *)((long)puVar1 + 0x6c) = 0;
  *(undefined8 *)((long)puVar1 + 0x84) = 0;
  *(undefined8 *)((long)puVar1 + 0x7c) = 0;
  *(undefined8 *)((long)puVar1 + 0x94) = 0;
  *(undefined8 *)((long)puVar1 + 0x8c) = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x17] = 0;
  puVar1[0x15] = puVar1 + 0xe;
  puVar1[0x16] = puVar1 + 0x17;
  puVar1[0x18] = 0;
  *puVar1 = &PTR_FUN_110afb200;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 1095250b8; end: 1095251ab;  */

void FUN_1095250b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 auStack_48 [2];
  char cStack_31;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c31940(auStack_48,&UNK_10f572fb1);
  FUN_1094a69fc(lVar1 + 8,auStack_48,*(long *)(param_1 + 0x18) + 0x18,param_1 + 0x40);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  lVar1 = (long)*(char *)(param_1 + 0x57);
  if (lVar1 < 0) {
    lVar1 = *(long *)(param_1 + 0x48);
  }
  if (lVar1 != 0) {
    func_0x000107c2ac70(*(long *)(param_1 + 0x18) + 0x188,param_1 + 0x40);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c31940(auStack_48,&UNK_10f572fc0);
  FUN_1094d2114(lVar1 + 8,auStack_48,*(long *)(param_1 + 0x18) + 0x18,param_1 + 0x58);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  FUN_10952b504(param_1,param_2);
  return;
}



/* Entry: 1095251ac; end: 109528af7;  */

void FUN_1095251ac(undefined8 *param_1,long param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  undefined8 *puVar25;
  float *pfVar26;
  float *pfVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  bool bVar30;
  long *plVar31;
  long lVar32;
  int *piVar33;
  int *piVar34;
  undefined8 uVar35;
  undefined8 *puVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  bool bVar44;
  undefined1 (*pauVar45) [16];
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  long lVar52;
  ulong uVar53;
  ulong uVar54;
  long lVar55;
  float *pfVar56;
  long lVar57;
  long lVar58;
  ulong uVar59;
  float *pfVar60;
  float *pfVar61;
  float *pfVar62;
  ulong uVar63;
  long *plVar64;
  undefined1 (*pauVar65) [16];
  long lVar66;
  long lVar67;
  undefined1 (*pauVar68) [16];
  long lVar69;
  long lVar70;
  long lVar71;
  undefined1 (*pauVar72) [16];
  ulong uVar73;
  long lVar74;
  undefined8 *puVar75;
  ulong uVar76;
  ulong uVar77;
  ulong uVar78;
  long lVar79;
  float *pfVar80;
  long lVar81;
  long lVar82;
  undefined4 uVar83;
  float fVar84;
  float fVar87;
  int iVar99;
  float fVar100;
  int iVar101;
  undefined1 auVar88 [12];
  undefined1 auVar89 [12];
  float fVar98;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar94 [16];
  float fVar85;
  int iVar86;
  float fVar102;
  int iVar103;
  undefined1 auVar96 [16];
  int iVar104;
  undefined1 auVar105 [12];
  int iVar118;
  undefined1 auVar107 [16];
  int iVar119;
  undefined1 auVar106 [12];
  int iVar120;
  int iVar121;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar122 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  float fVar129;
  undefined1 in_q4 [16];
  undefined1 auVar130 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  float fVar143;
  undefined1 uVar144;
  undefined1 uVar145;
  undefined1 uVar146;
  undefined1 uVar147;
  float fVar148;
  float fVar149;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  float fVar152;
  float fVar159;
  float fVar160;
  undefined1 auVar153 [16];
  float fVar161;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  float fVar168;
  undefined8 uVar169;
  float fVar170;
  float fVar171;
  undefined8 uVar172;
  undefined8 uVar173;
  undefined8 uVar174;
  undefined8 uVar175;
  undefined8 uVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  float fVar180;
  float fVar182;
  float fVar183;
  float fVar184;
  float fVar185;
  undefined8 uVar181;
  undefined8 uVar186;
  undefined8 uVar187;
  undefined8 uVar188;
  undefined8 uVar189;
  undefined8 uVar190;
  undefined8 uVar191;
  undefined8 uVar192;
  undefined8 uVar193;
  undefined8 uStack_228;
  undefined8 uStack_170;
  float *pfStack_160;
  float *pfStack_158;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  float *pfStack_118;
  float *pfStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 auStack_b0 [2];
  long lStack_a0;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar95 [16];
  undefined1 auVar97 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar67 = param_3;
  FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0xb0);
  if (lVar67 == 0) {
LAB_109528994:
    FUN_109262df8(&UNK_10f639994);
  }
  else {
    iVar86 = *(int *)(lVar67 + 0x30);
    iVar99 = *(int *)(lVar67 + 0x34);
    lVar67 = param_3;
    FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0xb0);
    if (lVar67 == 0) goto LAB_109528994;
    lVar67 = *(long *)(lVar67 + 0x48);
    lVar57 = param_3;
    FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0x128);
    if (lVar57 == 0) goto LAB_109528994;
    pauVar72 = *(undefined1 (**) [16])(lVar57 + 0x48);
    lVar57 = param_3;
    FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0x128);
    if (lVar57 == 0) goto LAB_109528994;
    fVar87 = 0.0;
    uVar3 = iVar99 * iVar86;
    uVar53 = (ulong)uVar3;
    if (uVar3 != 0) {
      do {
        func_0x0001094cf860(lVar67,2);
        fVar129 = *(float *)(lVar67 + 4);
        if (*(float *)(lVar67 + 4) <= fVar87) {
          fVar129 = fVar87;
        }
        fVar87 = fVar129;
        lVar67 = lVar67 + 8;
        uVar53 = uVar53 - 1;
      } while (uVar53 != 0);
    }
    iVar99 = *(int *)(lVar57 + 0x30);
    uVar6 = (uint)*(byte *)(*(long *)(param_2 + 0x18) + 0x1f0) << 1 | 1;
    uVar3 = uVar6 + *(byte *)(*(long *)(param_2 + 0x18) + 0x1f1);
    iVar86 = *(int *)(lVar57 + 0x34);
    uVar23 = 0;
    if (uVar3 != 0) {
      uVar23 = *(uint *)(lVar57 + 0x38) / uVar3;
    }
    FUN_109528cb8(&pfStack_118,uVar23);
    puVar10 = (undefined8 *)*param_4;
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0xf8;
      __Znwm();
      *(undefined4 *)(puVar10 + 1) = 0x42ff0000;
      *(undefined8 *)((long)puVar10 + 0x14) = 0;
      *(undefined8 *)((long)puVar10 + 0xc) = 0;
      *(undefined8 *)((long)puVar10 + 0x24) = 0;
      *(undefined8 *)((long)puVar10 + 0x1c) = 0;
      *(undefined8 *)((long)puVar10 + 0x34) = 0;
      *(undefined8 *)((long)puVar10 + 0x2c) = 0;
      puVar10[8] = 0;
      puVar10[7] = 0;
      puVar10[0xb] = 0;
      puVar10[9] = puVar10 + 2;
      puVar10[10] = puVar10 + 0xb;
      puVar10[0xc] = 0;
      *(undefined4 *)(puVar10 + 0xd) = 0x42ff0000;
      *(undefined8 *)((long)puVar10 + 0x74) = 0;
      *(undefined8 *)((long)puVar10 + 0x6c) = 0;
      *(undefined8 *)((long)puVar10 + 0x84) = 0;
      *(undefined8 *)((long)puVar10 + 0x7c) = 0;
      *(undefined8 *)((long)puVar10 + 0x94) = 0;
      *(undefined8 *)((long)puVar10 + 0x8c) = 0;
      puVar10[0x14] = 0;
      puVar10[0x13] = 0;
      puVar10[0x17] = 0;
      puVar10[0x15] = puVar10 + 0xe;
      puVar10[0x16] = puVar10 + 0x17;
      puVar10[0x18] = 0;
      *puVar10 = &PTR_FUN_110afb200;
      puVar10[0x1e] = 0;
      puVar10[0x1d] = 0;
      puVar10[0x1c] = 0;
      puVar10[0x1b] = 0;
      puVar10[0x1a] = 0;
      puVar10[0x19] = 0;
      *param_4 = puVar10;
    }
    ___dynamic_cast();
    if (puVar10 != (undefined8 *)0x0) {
      plVar31 = puVar10 + 0x19;
      uVar4 = iVar86 * iVar99;
      uVar53 = (ulong)uVar4;
      uVar23 = *(uint *)(lVar57 + 0x38);
      if ((ulong)(uVar23 * uVar4) != puVar10[0x1a] - *plVar31 >> 2) {
        FUN_109528af8(plVar31);
        uVar23 = *(uint *)(lVar57 + 0x38);
      }
      plVar64 = puVar10 + 0x1c;
      uVar63 = puVar10[0x1d] - *plVar64 >> 2;
      if (uVar63 != uVar23) {
        FUN_109528af8(plVar64,(ulong)uVar23);
        uVar23 = *(uint *)(lVar57 + 0x38);
        uVar63 = (ulong)uVar23;
      }
      pfVar80 = (float *)*plVar31;
      uVar5 = *(int *)(lVar57 + 0x34) * *(int *)(lVar57 + 0x30);
      uVar76 = (ulong)uVar5;
      if (uVar23 == 3) {
        uVar63 = uVar76 * 3;
        if (4 < uVar5) {
          do {
            lVar67 = 0;
            pfVar20 = pfVar80 + uVar76;
            pfVar27 = pfVar20 + uVar76;
            auVar94 = *pauVar72;
            auVar90 = *(undefined1 (*) [16])(pauVar72[1] + 8);
            auVar107 = *(undefined1 (*) [16])(pauVar72[2] + 4);
            uVar83 = auVar94._0_4_;
            auVar130._4_12_ = in_q4._4_12_;
            auVar130._0_4_ = uVar83;
            auVar132._12_4_ = in_q4._12_4_;
            auVar132._0_8_ = auVar130._0_8_;
            auVar132._8_4_ = auVar94._8_4_;
            auVar131._8_8_ = auVar132._8_8_;
            auVar131._0_8_ = (float *)CONCAT44(*(undefined4 *)(*pauVar72 + 0xc),uVar83);
            auVar133._0_12_ = auVar131._0_12_;
            auVar133._12_4_ = *(undefined4 *)(pauVar72[1] + 4);
            uStack_f8 = (float *)CONCAT44(auVar107._0_4_,auVar90._0_4_);
            auVar125._4_12_ = auVar90._4_12_;
            auVar125._0_4_ = auVar90._8_4_;
            auVar123._0_8_ = auVar125._0_8_;
            auVar123._8_4_ = auVar90._12_4_;
            auVar123._12_4_ = auVar90._12_4_;
            auVar122._8_8_ = auVar123._8_8_;
            auVar122._4_4_ = auVar107._8_4_;
            auVar122._0_4_ = auVar90._8_4_;
            auVar124._0_12_ = auVar122._0_12_;
            auVar124._12_4_ = auVar107._12_4_;
            auVar125 = NEON_ext(auVar133,auVar124,8,1);
            in_q4._8_8_ = uStack_f8;
            in_q4._0_8_ = auVar131._0_8_;
            auVar92._12_4_ = auVar94._12_4_;
            auVar92._0_8_ = auVar94._0_8_;
            auVar92._8_4_ = auVar94._4_4_;
            auVar91._8_8_ = auVar92._8_8_;
            auVar91._4_4_ = *(undefined4 *)(*pauVar72 + 0xc);
            auVar91._0_4_ = uVar83;
            auVar93._0_12_ = auVar91._0_12_;
            auVar93._12_4_ = *(undefined4 *)pauVar72[1];
            auVar94[4] = auVar107[4];
            auVar94._0_4_ = auVar90._4_4_;
            auVar94[5] = auVar107[5];
            auVar94[6] = auVar107[6];
            auVar94[7] = auVar107[7];
            auVar94[8] = auVar90[0xc];
            auVar94[9] = auVar90[0xd];
            auVar94[10] = auVar90[0xe];
            auVar94[0xb] = auVar90[0xf];
            auVar94[0xc] = auVar107[0xc];
            auVar94[0xd] = auVar107[0xd];
            auVar94[0xe] = auVar107[0xe];
            auVar94[0xf] = auVar107[0xf];
            auVar94 = NEON_ext(auVar93,auVar94,8,1);
            *(float **)(pfVar80 + 2) = uStack_f8;
            *(float **)pfVar80 = auVar131._0_8_;
            *(long *)(pfVar20 + 2) = auVar94._8_8_;
            *(long *)pfVar20 = auVar94._0_8_;
            *(long *)(pfVar27 + 2) = auVar125._8_8_;
            *(long *)pfVar27 = auVar125._0_8_;
            Hint_Prefetch(pfVar80 + 4,2,0,0);
            pfVar80 = pfVar80 + 4;
            Hint_Prefetch(pfVar20 + 4,2,0,0);
            Hint_Prefetch(pfVar27 + 4,2,0,0);
            uStack_100 = auVar131._0_8_;
            uStack_e8 = auVar94._8_8_;
            uStack_f0 = auVar94._0_8_;
            uStack_d8 = auVar125._8_8_;
            uStack_e0 = auVar125._0_8_;
            lVar58 = *plVar64;
            do {
              fVar129 = (float)NEON_fmaxv(*(undefined1 (*) [16])(&uStack_100 + lVar67 * 2),4);
              fVar84 = *(float *)(lVar58 + lVar67 * 4);
              if (fVar129 <= fVar84) {
                fVar129 = fVar84;
              }
              *(float *)(lVar58 + lVar67 * 4) = fVar129;
              lVar67 = lVar67 + 1;
            } while (lVar67 != 3);
            pauVar72 = pauVar72 + 3;
            uVar63 = uVar63 - 0xc;
          } while (0xc < uVar63);
        }
        if (uVar63 != 0) {
          lVar67 = 0;
          pfVar20 = pfVar80;
          do {
            if (2 < uVar63) {
              uVar54 = 0;
              pauVar45 = pauVar72;
              do {
                pfVar20[uVar54] = *(float *)*pauVar45;
                uVar54 = uVar54 + 1;
                pauVar45 = (undefined1 (*) [16])(*pauVar45 + 0xc);
              } while (((uint)uVar63 & 0xff) / 3 != uVar54);
            }
            pauVar72 = (undefined1 (*) [16])(*pauVar72 + 4);
            lVar67 = lVar67 + 1;
            pfVar20 = pfVar20 + uVar76;
          } while (lVar67 != 3);
          lVar67 = 0;
          lVar58 = *plVar64;
          do {
            lVar38 = 3;
            pfVar20 = pfVar80;
            fVar129 = *(float *)(lVar58 + lVar67 * 4);
            do {
              fVar84 = *pfVar20;
              if (*pfVar20 <= fVar129) {
                fVar84 = fVar129;
              }
              *(float *)(lVar58 + lVar67 * 4) = fVar84;
              pfVar20 = pfVar20 + uVar76;
              lVar38 = lVar38 + -1;
              fVar129 = fVar84;
            } while (lVar38 != 0);
            lVar67 = lVar67 + 1;
            pfVar80 = pfVar80 + 1;
          } while (lVar67 != 3);
        }
      }
      else if (uVar23 == 2) {
        uVar63 = uVar76 << 1;
        pfVar20 = pfVar80;
        uVar54 = uVar76;
        if (3 < uVar5) {
          do {
            pfVar27 = pfVar80 + uVar76;
            auVar90._0_8_ = CONCAT44(*(undefined4 *)(*pauVar72 + 8),*(undefined4 *)*pauVar72);
            auVar107._0_8_ =
                 CONCAT44(*(undefined4 *)(*pauVar72 + 0xc),*(undefined4 *)(*pauVar72 + 4));
            auVar90._8_4_ = *(undefined4 *)pauVar72[1];
            auVar107._8_4_ = *(undefined4 *)(pauVar72[1] + 4);
            auVar90._12_4_ = *(undefined4 *)(pauVar72[1] + 8);
            auVar107._12_4_ = *(undefined4 *)(pauVar72[1] + 0xc);
            pauVar72 = pauVar72 + 2;
            *(long *)(pfVar80 + 2) = auVar90._8_8_;
            *(undefined8 *)pfVar80 = auVar90._0_8_;
            *(long *)(pfVar27 + 2) = auVar107._8_8_;
            *(undefined8 *)pfVar27 = auVar107._0_8_;
            pfVar20 = pfVar80 + 4;
            Hint_Prefetch(pfVar80 + 4,2,0,0);
            Hint_Prefetch(pfVar27 + 4,2,0,0);
            fVar84 = (float)NEON_fmaxv(auVar90,4);
            fVar129 = (float)NEON_fmaxv(auVar107,4);
            uVar54 = *(ulong *)*plVar64;
            *(ulong *)*plVar64 =
                 uVar54 ^ (uVar54 ^ CONCAT44(fVar129,fVar84)) &
                          CONCAT44(-(uint)((float)(uVar54 >> 0x20) < fVar129),
                                   -(uint)((float)uVar54 < fVar84));
            uVar63 = uVar63 - 8;
            pfVar80 = pfVar20;
            uVar54 = uVar63;
          } while (7 < uVar63);
        }
        if (uVar54 != 0) {
          pfVar80 = pfVar20;
          bVar44 = false;
          do {
            uVar54 = 0;
            pauVar45 = pauVar72;
            do {
              pfVar80[uVar54] = *(float *)*pauVar45;
              uVar54 = uVar54 + 1;
              pauVar45 = (undefined1 (*) [16])(*pauVar45 + 8);
            } while (uVar63 >> 1 != uVar54);
            pauVar72 = (undefined1 (*) [16])(*pauVar72 + 4);
            pfVar80 = pfVar80 + uVar76;
            bVar30 = !bVar44;
            bVar44 = true;
          } while (bVar30);
          lVar67 = 0;
          lVar58 = *plVar64;
          do {
            fVar129 = *(float *)((long)pfVar20 + lVar67);
            if (*(float *)((long)pfVar20 + lVar67) <= *(float *)(lVar58 + lVar67)) {
              fVar129 = *(float *)(lVar58 + lVar67);
            }
            *(float *)(lVar58 + lVar67) = fVar129;
            fVar84 = *(float *)((long)pfVar20 + lVar67 + uVar76 * 4);
            if (fVar84 <= fVar129) {
              fVar84 = fVar129;
            }
            *(float *)(lVar58 + lVar67) = fVar84;
            lVar67 = lVar67 + 4;
          } while (lVar67 != 8);
        }
      }
      else if (uVar23 == 1) {
        _memcpy(pfVar80,pauVar72,uVar76 << 2);
        fVar84 = *(float *)*plVar64;
        fVar129 = *pfVar80;
        if (*pfVar80 <= fVar84) {
          fVar129 = fVar84;
        }
        *(float *)*plVar64 = fVar129;
      }
      else {
        if ((uVar5 & 0xffffff00) != 0) {
          uVar54 = 0;
          do {
            FUN_109528f74(pfVar80,pauVar72,uVar63,uVar76,0x100,uVar54,plVar64);
            uVar54 = uVar54 + 0x100;
          } while (uVar54 < (uVar76 & 0xffffff00));
        }
        if ((uVar5 & 0xff) != 0) {
          FUN_109528f74(pfVar80,pauVar72,uVar63,uVar76,uVar76 & 0xff,uVar76 & 0xffffff00,plVar64);
        }
      }
      if (*(int *)(lVar57 + 0x38) != 0) {
        uVar76 = 0;
        uStack_228 = 0;
        uVar63 = (ulong)(uVar4 * uVar6);
        lVar67 = uVar53 * 4;
        lVar58 = uVar63 * 4;
        do {
          lVar38 = uVar76 * 4;
          lVar24 = *plVar31;
          uVar6 = *(uint *)(lVar57 + 0x34);
          uVar54 = (ulong)uVar6;
          if (uVar6 != 0) {
            fVar129 = *(float *)(*plVar64 + (ulong)uStack_228._4_4_ * 4);
            uVar23 = *(uint *)(lVar57 + 0x30);
            uVar59 = (ulong)uVar23;
            lVar70 = uVar59 * 8;
            uVar73 = uVar59 * 4;
            auVar150._8_4_ = 0x3f7b70f3;
            auVar150._0_8_ = 0x3f7b70f33f7b70f3;
            auVar150._12_4_ = 0x3f7b70f3;
            uVar35 = auVar150._8_8_;
            if (uVar6 < 4) {
              uVar77 = 0;
              fVar84 = 0.0;
              uVar78 = uVar54;
LAB_109525afc:
              if (uVar78 < 2) {
                if (uVar77 < uVar54) {
                  pauVar72 = (undefined1 (*) [16])(lVar24 + lVar38 + uVar77 * uVar59 * 4);
                  pfVar80 = (float *)(lVar24 + lVar38 + (uVar73 & 0x3fffffff0) + uVar77 * uVar59 * 4
                                     );
                  do {
                    if ((uVar23 & 0xfffffffc) != 0) {
                      uVar78 = 0;
                      pauVar45 = pauVar72;
                      do {
                        iVar86 = 0x13732f60;
                        auVar94 = *pauVar45;
                        if ((bRam0000000113732f60 & 1) == 0) {
                          ___cxa_guard_acquire();
                          auVar150._8_8_ = uVar35;
                          auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                          if (iVar86 != 0) {
                            fRam0000000113732f88 = -88.0;
                            fRam0000000113732f8c = -88.0;
                            uRam0000000113732f80 = 0xc2b00000c2b00000;
                            ___cxa_guard_release(0x113732f60);
                            auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                          }
                        }
                        fVar85 = auVar94._0_4_ - fVar129;
                        fVar98 = auVar94._4_4_ - fVar129;
                        fVar100 = auVar94._8_4_ - fVar129;
                        fVar102 = auVar94._12_4_ - fVar129;
                        iVar104 = (int)(fVar85 * 12102203.0) + auVar150._0_4_;
                        iVar118 = (int)(fVar98 * 12102203.0) + auVar150._4_4_;
                        iVar119 = (int)(fVar100 * 12102203.0) + auVar150._8_4_;
                        iVar120 = (int)(fVar102 * 12102203.0) + auVar150._12_4_;
                        iVar86 = -(uint)((float)uRam0000000113732f80 <= fVar85);
                        iVar99 = -(uint)((float)((ulong)uRam0000000113732f80 >> 0x20) <= fVar98);
                        iVar101 = -(uint)(fRam0000000113732f88 <= fVar100);
                        iVar103 = -(uint)(fRam0000000113732f8c <= fVar102);
                        fVar85 = (float)CONCAT13((byte)((uint)iVar86 >> 0x18) &
                                                 (byte)((uint)iVar104 >> 0x18),
                                                 CONCAT12((byte)((uint)iVar86 >> 0x10) &
                                                          (byte)((uint)iVar104 >> 0x10),
                                                          CONCAT11((byte)((uint)iVar86 >> 8) &
                                                                   (byte)((uint)iVar104 >> 8),
                                                                   (byte)iVar86 & (byte)iVar104)));
                        auVar88._0_8_ =
                             CONCAT17((byte)((uint)iVar99 >> 0x18) & (byte)((uint)iVar118 >> 0x18),
                                      CONCAT16((byte)((uint)iVar99 >> 0x10) &
                                               (byte)((uint)iVar118 >> 0x10),
                                               CONCAT15((byte)((uint)iVar99 >> 8) &
                                                        (byte)((uint)iVar118 >> 8),
                                                        CONCAT14((byte)iVar99 & (byte)iVar118,fVar85
                                                                ))));
                        auVar88[8] = (byte)iVar101 & (byte)iVar119;
                        auVar88[9] = (byte)((uint)iVar101 >> 8) & (byte)((uint)iVar119 >> 8);
                        auVar88[10] = (byte)((uint)iVar101 >> 0x10) & (byte)((uint)iVar119 >> 0x10);
                        auVar88[0xb] = (byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar119 >> 0x18)
                        ;
                        auVar95[0xc] = (byte)iVar103 & (byte)iVar120;
                        auVar95._0_12_ = auVar88;
                        auVar95[0xd] = (byte)((uint)iVar103 >> 8) & (byte)((uint)iVar120 >> 8);
                        auVar95[0xe] = (byte)((uint)iVar103 >> 0x10) & (byte)((uint)iVar120 >> 0x10)
                        ;
                        auVar95[0xf] = (byte)((uint)iVar103 >> 0x18) & (byte)((uint)iVar120 >> 0x18)
                        ;
                        *(long *)(*pauVar45 + 8) = auVar95._8_8_;
                        *(undefined8 *)*pauVar45 = auVar88._0_8_;
                        fVar84 = fVar84 + fVar85 + (float)((ulong)auVar88._0_8_ >> 0x20) +
                                          auVar88._8_4_ + auVar95._12_4_;
                        uVar78 = uVar78 + 4;
                        pauVar45 = pauVar45 + 1;
                      } while (uVar78 < (uVar59 & 0xfffffffc));
                    }
                    pfVar20 = pfVar80;
                    uVar78 = uVar59 & 3;
                    if (uVar59 != (uVar59 & 0xfffffffc)) {
                      do {
                        fVar98 = *pfVar20;
                        fVar100 = (float)_expf(fVar98 - fVar129);
                        fVar85 = 0.0;
                        if (-88.0 <= fVar98 - fVar129) {
                          fVar85 = fVar100;
                        }
                        fVar84 = fVar84 + fVar85;
                        *pfVar20 = fVar85;
                        uVar78 = uVar78 - 1;
                        pfVar20 = pfVar20 + 1;
                      } while (uVar78 != 0);
                    }
                    uVar77 = uVar77 + 1;
                    pauVar72 = (undefined1 (*) [16])(*pauVar72 + uVar73);
                    pfVar80 = pfVar80 + uVar59;
                    auVar150._8_8_ = uVar35;
                    auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                  } while (uVar77 != uVar54);
                }
              }
              else {
                uVar37 = uVar54 - (uVar78 & 1);
                if (uVar77 < uVar37) {
                  pauVar72 = (undefined1 (*) [16])(lVar24 + lVar38 + (uVar59 + uVar77 * uVar59) * 4)
                  ;
                  pauVar45 = (undefined1 (*) [16])(lVar24 + lVar38 + uVar77 * uVar59 * 4);
                  do {
                    if ((uVar23 & 0xfffffffc) != 0) {
                      uVar14 = 0;
                      pauVar65 = pauVar72;
                      pauVar68 = pauVar45;
                      do {
                        iVar86 = 0x13732f68;
                        auVar94 = *pauVar68;
                        if ((bRam0000000113732f68 & 1) == 0) {
                          ___cxa_guard_acquire();
                          auVar150._8_8_ = uVar35;
                          auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                          if (iVar86 != 0) {
                            fRam0000000113732f98 = -88.0;
                            fRam0000000113732f9c = -88.0;
                            uRam0000000113732f90 = 0xc2b00000c2b00000;
                            ___cxa_guard_release(0x113732f68);
                            auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                          }
                        }
                        iVar86 = 0x13732f68;
                        fVar85 = auVar94._0_4_ - fVar129;
                        fVar98 = auVar94._4_4_ - fVar129;
                        fVar100 = auVar94._8_4_ - fVar129;
                        fVar102 = auVar94._12_4_ - fVar129;
                        iVar118 = (int)(fVar85 * 12102203.0) + auVar150._0_4_;
                        iVar119 = (int)(fVar98 * 12102203.0) + auVar150._4_4_;
                        iVar120 = (int)(fVar100 * 12102203.0) + auVar150._8_4_;
                        iVar121 = (int)(fVar102 * 12102203.0) + auVar150._12_4_;
                        iVar99 = -(uint)((float)uRam0000000113732f90 <= fVar85);
                        iVar101 = -(uint)((float)((ulong)uRam0000000113732f90 >> 0x20) <= fVar98);
                        iVar103 = -(uint)(fRam0000000113732f98 <= fVar100);
                        iVar104 = -(uint)(fRam0000000113732f9c <= fVar102);
                        auVar96._0_8_ =
                             CONCAT17((byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar119 >> 0x18),
                                      CONCAT16((byte)((uint)iVar101 >> 0x10) &
                                               (byte)((uint)iVar119 >> 0x10),
                                               CONCAT15((byte)((uint)iVar101 >> 8) &
                                                        (byte)((uint)iVar119 >> 8),
                                                        CONCAT14((byte)iVar101 & (byte)iVar119,
                                                                 CONCAT13((byte)((uint)iVar99 >>
                                                                                0x18) &
                                                                          (byte)((uint)iVar118 >>
                                                                                0x18),
                                                                          CONCAT12((byte)((uint)
                                                  iVar99 >> 0x10) & (byte)((uint)iVar118 >> 0x10),
                                                  CONCAT11((byte)((uint)iVar99 >> 8) &
                                                           (byte)((uint)iVar118 >> 8),
                                                           (byte)iVar99 & (byte)iVar118)))))));
                        auVar96[8] = (byte)iVar103 & (byte)iVar120;
                        auVar96[9] = (byte)((uint)iVar103 >> 8) & (byte)((uint)iVar120 >> 8);
                        auVar96[10] = (byte)((uint)iVar103 >> 0x10) & (byte)((uint)iVar120 >> 0x10);
                        auVar96[0xb] = (byte)((uint)iVar103 >> 0x18) & (byte)((uint)iVar120 >> 0x18)
                        ;
                        auVar96[0xc] = (byte)iVar104 & (byte)iVar121;
                        auVar96[0xd] = (byte)((uint)iVar104 >> 8) & (byte)((uint)iVar121 >> 8);
                        auVar96[0xe] = (byte)((uint)iVar104 >> 0x10) & (byte)((uint)iVar121 >> 0x10)
                        ;
                        auVar96[0xf] = (byte)((uint)iVar104 >> 0x18) & (byte)((uint)iVar121 >> 0x18)
                        ;
                        uVar169 = auVar96._8_8_;
                        *(undefined8 *)(*pauVar68 + 8) = uVar169;
                        *(undefined8 *)*pauVar68 = auVar96._0_8_;
                        auVar94 = *pauVar65;
                        if ((bRam0000000113732f68 & 1) == 0) {
                          ___cxa_guard_acquire();
                          auVar96._8_8_ = uVar169;
                          auVar150._8_8_ = uVar35;
                          auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                          if (iVar86 != 0) {
                            fRam0000000113732f98 = -88.0;
                            fRam0000000113732f9c = -88.0;
                            uRam0000000113732f90 = 0xc2b00000c2b00000;
                            ___cxa_guard_release(0x113732f68);
                            auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                          }
                        }
                        fVar85 = auVar94._0_4_ - fVar129;
                        fVar98 = auVar94._4_4_ - fVar129;
                        fVar100 = auVar94._8_4_ - fVar129;
                        fVar102 = auVar94._12_4_ - fVar129;
                        iVar104 = (int)(fVar85 * 12102203.0) + auVar150._0_4_;
                        iVar118 = (int)(fVar98 * 12102203.0) + auVar150._4_4_;
                        iVar119 = (int)(fVar100 * 12102203.0) + auVar150._8_4_;
                        iVar120 = (int)(fVar102 * 12102203.0) + auVar150._12_4_;
                        iVar86 = -(uint)((float)uRam0000000113732f90 <= fVar85);
                        iVar99 = -(uint)((float)((ulong)uRam0000000113732f90 >> 0x20) <= fVar98);
                        iVar101 = -(uint)(fRam0000000113732f98 <= fVar100);
                        iVar103 = -(uint)(fRam0000000113732f9c <= fVar102);
                        fVar85 = (float)CONCAT13((byte)((uint)iVar86 >> 0x18) &
                                                 (byte)((uint)iVar104 >> 0x18),
                                                 CONCAT12((byte)((uint)iVar86 >> 0x10) &
                                                          (byte)((uint)iVar104 >> 0x10),
                                                          CONCAT11((byte)((uint)iVar86 >> 8) &
                                                                   (byte)((uint)iVar104 >> 8),
                                                                   (byte)iVar86 & (byte)iVar104)));
                        auVar106._0_8_ =
                             CONCAT17((byte)((uint)iVar99 >> 0x18) & (byte)((uint)iVar118 >> 0x18),
                                      CONCAT16((byte)((uint)iVar99 >> 0x10) &
                                               (byte)((uint)iVar118 >> 0x10),
                                               CONCAT15((byte)((uint)iVar99 >> 8) &
                                                        (byte)((uint)iVar118 >> 8),
                                                        CONCAT14((byte)iVar99 & (byte)iVar118,fVar85
                                                                ))));
                        auVar106[8] = (byte)iVar101 & (byte)iVar119;
                        auVar106[9] = (byte)((uint)iVar101 >> 8) & (byte)((uint)iVar119 >> 8);
                        auVar106[10] = (byte)((uint)iVar101 >> 0x10) & (byte)((uint)iVar119 >> 0x10)
                        ;
                        auVar106[0xb] =
                             (byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar119 >> 0x18);
                        auVar109[0xc] = (byte)iVar103 & (byte)iVar120;
                        auVar109._0_12_ = auVar106;
                        auVar109[0xd] = (byte)((uint)iVar103 >> 8) & (byte)((uint)iVar120 >> 8);
                        auVar109[0xe] =
                             (byte)((uint)iVar103 >> 0x10) & (byte)((uint)iVar120 >> 0x10);
                        auVar109[0xf] =
                             (byte)((uint)iVar103 >> 0x18) & (byte)((uint)iVar120 >> 0x18);
                        *(long *)(*pauVar65 + 8) = auVar109._8_8_;
                        *(undefined8 *)*pauVar65 = auVar106._0_8_;
                        fVar84 = fVar84 + auVar96._0_4_ + auVar96._4_4_ +
                                          auVar96._8_4_ + auVar96._12_4_ +
                                 fVar85 + (float)((ulong)auVar106._0_8_ >> 0x20) +
                                 auVar106._8_4_ + auVar109._12_4_;
                        uVar14 = uVar14 + 4;
                        pauVar68 = pauVar68 + 1;
                        pauVar65 = pauVar65 + 1;
                      } while (uVar14 < (uVar59 & 0xfffffffc));
                    }
                    lVar49 = 0;
                    bVar44 = true;
                    do {
                      bVar30 = bVar44;
                      if (uVar59 != (uVar59 & 0xfffffffc)) {
                        uVar14 = uVar59 & 3;
                        pfVar80 = (float *)(lVar24 + lVar38 + (uVar73 & 0x3fffffff0) +
                                           uVar73 * (uVar77 + lVar49));
                        do {
                          fVar98 = *pfVar80;
                          fVar100 = (float)_expf(fVar98 - fVar129);
                          fVar85 = 0.0;
                          if (-88.0 <= fVar98 - fVar129) {
                            fVar85 = fVar100;
                          }
                          fVar84 = fVar84 + fVar85;
                          *pfVar80 = fVar85;
                          uVar14 = uVar14 - 1;
                          pfVar80 = pfVar80 + 1;
                        } while (uVar14 != 0);
                      }
                      lVar49 = 1;
                      bVar44 = false;
                    } while (bVar30);
                    uVar77 = uVar77 + 2;
                    pauVar72 = (undefined1 (*) [16])(*pauVar72 + lVar70);
                    pauVar45 = (undefined1 (*) [16])(*pauVar45 + lVar70);
                    auVar150._8_8_ = uVar35;
                    auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                  } while (uVar77 < uVar37);
                }
                if ((uVar78 & 1) != 0) {
                  if ((uVar23 & 0xfffffffc) != 0) {
                    uVar78 = 0;
                    pauVar72 = (undefined1 (*) [16])
                               (lVar24 + lVar38 + (uVar37 & 0xffffffff) * uVar59 * 4);
                    do {
                      iVar86 = 0x13732f60;
                      auVar94 = *pauVar72;
                      if ((bRam0000000113732f60 & 1) == 0) {
                        ___cxa_guard_acquire();
                        auVar150._8_8_ = uVar35;
                        auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                        if (iVar86 != 0) {
                          fRam0000000113732f88 = -88.0;
                          fRam0000000113732f8c = -88.0;
                          uRam0000000113732f80 = 0xc2b00000c2b00000;
                          ___cxa_guard_release(0x113732f60);
                          auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                        }
                      }
                      fVar85 = auVar94._0_4_ - fVar129;
                      fVar98 = auVar94._4_4_ - fVar129;
                      fVar100 = auVar94._8_4_ - fVar129;
                      fVar102 = auVar94._12_4_ - fVar129;
                      iVar104 = (int)(fVar85 * 12102203.0) + auVar150._0_4_;
                      iVar118 = (int)(fVar98 * 12102203.0) + auVar150._4_4_;
                      iVar119 = (int)(fVar100 * 12102203.0) + auVar150._8_4_;
                      iVar120 = (int)(fVar102 * 12102203.0) + auVar150._12_4_;
                      iVar86 = -(uint)((float)uRam0000000113732f80 <= fVar85);
                      iVar99 = -(uint)((float)((ulong)uRam0000000113732f80 >> 0x20) <= fVar98);
                      iVar101 = -(uint)(fRam0000000113732f88 <= fVar100);
                      iVar103 = -(uint)(fRam0000000113732f8c <= fVar102);
                      fVar85 = (float)CONCAT13((byte)((uint)iVar86 >> 0x18) &
                                               (byte)((uint)iVar104 >> 0x18),
                                               CONCAT12((byte)((uint)iVar86 >> 0x10) &
                                                        (byte)((uint)iVar104 >> 0x10),
                                                        CONCAT11((byte)((uint)iVar86 >> 8) &
                                                                 (byte)((uint)iVar104 >> 8),
                                                                 (byte)iVar86 & (byte)iVar104)));
                      auVar89._0_8_ =
                           CONCAT17((byte)((uint)iVar99 >> 0x18) & (byte)((uint)iVar118 >> 0x18),
                                    CONCAT16((byte)((uint)iVar99 >> 0x10) &
                                             (byte)((uint)iVar118 >> 0x10),
                                             CONCAT15((byte)((uint)iVar99 >> 8) &
                                                      (byte)((uint)iVar118 >> 8),
                                                      CONCAT14((byte)iVar99 & (byte)iVar118,fVar85))
                                            ));
                      auVar89[8] = (byte)iVar101 & (byte)iVar119;
                      auVar89[9] = (byte)((uint)iVar101 >> 8) & (byte)((uint)iVar119 >> 8);
                      auVar89[10] = (byte)((uint)iVar101 >> 0x10) & (byte)((uint)iVar119 >> 0x10);
                      auVar89[0xb] = (byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar119 >> 0x18);
                      auVar97[0xc] = (byte)iVar103 & (byte)iVar120;
                      auVar97._0_12_ = auVar89;
                      auVar97[0xd] = (byte)((uint)iVar103 >> 8) & (byte)((uint)iVar120 >> 8);
                      auVar97[0xe] = (byte)((uint)iVar103 >> 0x10) & (byte)((uint)iVar120 >> 0x10);
                      auVar97[0xf] = (byte)((uint)iVar103 >> 0x18) & (byte)((uint)iVar120 >> 0x18);
                      *(long *)(*pauVar72 + 8) = auVar97._8_8_;
                      *(undefined8 *)*pauVar72 = auVar89._0_8_;
                      fVar84 = fVar84 + fVar85 + (float)((ulong)auVar89._0_8_ >> 0x20) +
                                        auVar89._8_4_ + auVar97._12_4_;
                      uVar78 = uVar78 + 4;
                      pauVar72 = pauVar72 + 1;
                    } while (uVar78 < (uVar59 & 0xfffffffc));
                  }
                  lVar70 = uVar59 - (uVar59 & 0xfffffffc);
                  if (lVar70 != 0) {
                    pfVar80 = (float *)(lVar24 + lVar38 +
                                       (uVar73 & 0x3fffffff0) + (uVar37 & 0xffffffff) * uVar59 * 4);
                    do {
                      fVar98 = *pfVar80;
                      fVar100 = (float)_expf(fVar98 - fVar129);
                      fVar85 = 0.0;
                      if (-88.0 <= fVar98 - fVar129) {
                        fVar85 = fVar100;
                      }
                      fVar84 = fVar84 + fVar85;
                      *pfVar80 = fVar85;
                      lVar70 = lVar70 + -1;
                      pfVar80 = pfVar80 + 1;
                    } while (lVar70 != 0);
                  }
                }
              }
            }
            else {
              uVar78 = 0;
              uVar77 = uVar54 & 0xfffffffc;
              pauVar72 = (undefined1 (*) [16])(lVar24 + lVar38);
              pfVar80 = (float *)(*pauVar72 + (uVar73 & 0x3fffffff0));
              fVar84 = 0.0;
              do {
                if ((uVar23 & 0xfffffffc) != 0) {
                  uVar37 = 0;
                  pauVar45 = pauVar72;
                  do {
                    iVar86 = 0x13732f70;
                    auVar94 = *pauVar45;
                    if ((bRam0000000113732f70 & 1) == 0) {
                      ___cxa_guard_acquire();
                      auVar150._8_8_ = uVar35;
                      auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                      if (iVar86 != 0) {
                        fRam0000000113732fa8 = -88.0;
                        fRam0000000113732fac = -88.0;
                        fRam0000000113732fa0 = -88.0;
                        fRam0000000113732fa4 = -88.0;
                        ___cxa_guard_release(0x113732f70);
                        auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                      }
                    }
                    iVar86 = 0x13732f70;
                    fVar85 = auVar94._0_4_ - fVar129;
                    fVar98 = auVar94._4_4_ - fVar129;
                    fVar100 = auVar94._8_4_ - fVar129;
                    fVar102 = auVar94._12_4_ - fVar129;
                    iVar118 = (int)(fVar85 * 12102203.0) + auVar150._0_4_;
                    iVar119 = (int)(fVar98 * 12102203.0) + auVar150._4_4_;
                    iVar120 = (int)(fVar100 * 12102203.0) + auVar150._8_4_;
                    iVar121 = (int)(fVar102 * 12102203.0) + auVar150._12_4_;
                    iVar99 = -(uint)(fRam0000000113732fa0 <= fVar85);
                    iVar101 = -(uint)(fRam0000000113732fa4 <= fVar98);
                    iVar103 = -(uint)(fRam0000000113732fa8 <= fVar100);
                    iVar104 = -(uint)(fRam0000000113732fac <= fVar102);
                    auVar126._0_8_ =
                         CONCAT17((byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar119 >> 0x18),
                                  CONCAT16((byte)((uint)iVar101 >> 0x10) &
                                           (byte)((uint)iVar119 >> 0x10),
                                           CONCAT15((byte)((uint)iVar101 >> 8) &
                                                    (byte)((uint)iVar119 >> 8),
                                                    CONCAT14((byte)iVar101 & (byte)iVar119,
                                                             CONCAT13((byte)((uint)iVar99 >> 0x18) &
                                                                      (byte)((uint)iVar118 >> 0x18),
                                                                      CONCAT12((byte)((uint)iVar99
                                                                                     >> 0x10) &
                                                                               (byte)((uint)iVar118
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((uint
                                                  )iVar99 >> 8) & (byte)((uint)iVar118 >> 8),
                                                  (byte)iVar99 & (byte)iVar118)))))));
                    auVar126[8] = (byte)iVar103 & (byte)iVar120;
                    auVar126[9] = (byte)((uint)iVar103 >> 8) & (byte)((uint)iVar120 >> 8);
                    auVar126[10] = (byte)((uint)iVar103 >> 0x10) & (byte)((uint)iVar120 >> 0x10);
                    auVar126[0xb] = (byte)((uint)iVar103 >> 0x18) & (byte)((uint)iVar120 >> 0x18);
                    auVar126[0xc] = (byte)iVar104 & (byte)iVar121;
                    auVar126[0xd] = (byte)((uint)iVar104 >> 8) & (byte)((uint)iVar121 >> 8);
                    auVar126[0xe] = (byte)((uint)iVar104 >> 0x10) & (byte)((uint)iVar121 >> 0x10);
                    auVar126[0xf] = (byte)((uint)iVar104 >> 0x18) & (byte)((uint)iVar121 >> 0x18);
                    uVar169 = auVar126._8_8_;
                    *(undefined8 *)(*pauVar45 + 8) = uVar169;
                    *(undefined8 *)*pauVar45 = auVar126._0_8_;
                    auVar94 = *(undefined1 (*) [16])(*pauVar45 + uVar73);
                    if ((bRam0000000113732f70 & 1) == 0) {
                      ___cxa_guard_acquire();
                      auVar126._8_8_ = uVar169;
                      auVar150._8_8_ = uVar35;
                      auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                      if (iVar86 != 0) {
                        fRam0000000113732fa8 = -88.0;
                        fRam0000000113732fac = -88.0;
                        fRam0000000113732fa0 = -88.0;
                        fRam0000000113732fa4 = -88.0;
                        ___cxa_guard_release(0x113732f70);
                        auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                      }
                    }
                    iVar86 = 0x13732f70;
                    fVar85 = auVar94._0_4_ - fVar129;
                    fVar98 = auVar94._4_4_ - fVar129;
                    fVar100 = auVar94._8_4_ - fVar129;
                    fVar102 = auVar94._12_4_ - fVar129;
                    iVar118 = (int)(fVar85 * 12102203.0) + auVar150._0_4_;
                    iVar119 = (int)(fVar98 * 12102203.0) + auVar150._4_4_;
                    iVar120 = (int)(fVar100 * 12102203.0) + auVar150._8_4_;
                    iVar121 = (int)(fVar102 * 12102203.0) + auVar150._12_4_;
                    iVar99 = -(uint)(fRam0000000113732fa0 <= fVar85);
                    iVar101 = -(uint)(fRam0000000113732fa4 <= fVar98);
                    iVar103 = -(uint)(fRam0000000113732fa8 <= fVar100);
                    iVar104 = -(uint)(fRam0000000113732fac <= fVar102);
                    auVar153._0_8_ =
                         CONCAT17((byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar119 >> 0x18),
                                  CONCAT16((byte)((uint)iVar101 >> 0x10) &
                                           (byte)((uint)iVar119 >> 0x10),
                                           CONCAT15((byte)((uint)iVar101 >> 8) &
                                                    (byte)((uint)iVar119 >> 8),
                                                    CONCAT14((byte)iVar101 & (byte)iVar119,
                                                             CONCAT13((byte)((uint)iVar99 >> 0x18) &
                                                                      (byte)((uint)iVar118 >> 0x18),
                                                                      CONCAT12((byte)((uint)iVar99
                                                                                     >> 0x10) &
                                                                               (byte)((uint)iVar118
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((uint
                                                  )iVar99 >> 8) & (byte)((uint)iVar118 >> 8),
                                                  (byte)iVar99 & (byte)iVar118)))))));
                    auVar153[8] = (byte)iVar103 & (byte)iVar120;
                    auVar153[9] = (byte)((uint)iVar103 >> 8) & (byte)((uint)iVar120 >> 8);
                    auVar153[10] = (byte)((uint)iVar103 >> 0x10) & (byte)((uint)iVar120 >> 0x10);
                    auVar153[0xb] = (byte)((uint)iVar103 >> 0x18) & (byte)((uint)iVar120 >> 0x18);
                    auVar153[0xc] = (byte)iVar104 & (byte)iVar121;
                    auVar153[0xd] = (byte)((uint)iVar104 >> 8) & (byte)((uint)iVar121 >> 8);
                    auVar153[0xe] = (byte)((uint)iVar104 >> 0x10) & (byte)((uint)iVar121 >> 0x10);
                    auVar153[0xf] = (byte)((uint)iVar104 >> 0x18) & (byte)((uint)iVar121 >> 0x18);
                    uVar169 = auVar153._8_8_;
                    *(undefined8 *)((long)(*pauVar45 + uVar73) + 8) = uVar169;
                    *(undefined8 *)(*pauVar45 + uVar73) = auVar153._0_8_;
                    auVar94 = *(undefined1 (*) [16])(*pauVar45 + lVar70);
                    if ((bRam0000000113732f70 & 1) == 0) {
                      ___cxa_guard_acquire();
                      auVar153._8_8_ = uVar169;
                      auVar150._8_8_ = uVar35;
                      auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                      if (iVar86 != 0) {
                        fRam0000000113732fa8 = -88.0;
                        fRam0000000113732fac = -88.0;
                        fRam0000000113732fa0 = -88.0;
                        fRam0000000113732fa4 = -88.0;
                        ___cxa_guard_release(0x113732f70);
                        auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                      }
                    }
                    iVar86 = 0x13732f70;
                    fVar85 = auVar94._0_4_ - fVar129;
                    fVar98 = auVar94._4_4_ - fVar129;
                    fVar100 = auVar94._8_4_ - fVar129;
                    fVar102 = auVar94._12_4_ - fVar129;
                    iVar118 = (int)(fVar85 * 12102203.0) + auVar150._0_4_;
                    iVar119 = (int)(fVar98 * 12102203.0) + auVar150._4_4_;
                    iVar120 = (int)(fVar100 * 12102203.0) + auVar150._8_4_;
                    iVar121 = (int)(fVar102 * 12102203.0) + auVar150._12_4_;
                    iVar99 = -(uint)(fRam0000000113732fa0 <= fVar85);
                    iVar101 = -(uint)(fRam0000000113732fa4 <= fVar98);
                    iVar103 = -(uint)(fRam0000000113732fa8 <= fVar100);
                    iVar104 = -(uint)(fRam0000000113732fac <= fVar102);
                    fVar85 = (float)CONCAT13((byte)((uint)iVar99 >> 0x18) &
                                             (byte)((uint)iVar118 >> 0x18),
                                             CONCAT12((byte)((uint)iVar99 >> 0x10) &
                                                      (byte)((uint)iVar118 >> 0x10),
                                                      CONCAT11((byte)((uint)iVar99 >> 8) &
                                                               (byte)((uint)iVar118 >> 8),
                                                               (byte)iVar99 & (byte)iVar118)));
                    uVar169 = CONCAT17((byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar119 >> 0x18)
                                       ,CONCAT16((byte)((uint)iVar101 >> 0x10) &
                                                 (byte)((uint)iVar119 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar101 >> 8) &
                                                          (byte)((uint)iVar119 >> 8),
                                                          CONCAT14((byte)iVar101 & (byte)iVar119,
                                                                   fVar85))));
                    fVar98 = (float)CONCAT13((byte)((uint)iVar103 >> 0x18) &
                                             (byte)((uint)iVar120 >> 0x18),
                                             CONCAT12((byte)((uint)iVar103 >> 0x10) &
                                                      (byte)((uint)iVar120 >> 0x10),
                                                      CONCAT11((byte)((uint)iVar103 >> 8) &
                                                               (byte)((uint)iVar120 >> 8),
                                                               (byte)iVar103 & (byte)iVar120)));
                    uVar172 = CONCAT17((byte)((uint)iVar104 >> 0x18) & (byte)((uint)iVar121 >> 0x18)
                                       ,CONCAT16((byte)((uint)iVar104 >> 0x10) &
                                                 (byte)((uint)iVar121 >> 0x10),
                                                 CONCAT15((byte)((uint)iVar104 >> 8) &
                                                          (byte)((uint)iVar121 >> 8),
                                                          CONCAT14((byte)iVar104 & (byte)iVar121,
                                                                   fVar98))));
                    *(undefined8 *)((long)(*pauVar45 + lVar70) + 8) = uVar172;
                    *(undefined8 *)(*pauVar45 + lVar70) = uVar169;
                    auVar94 = *(undefined1 (*) [16])(*pauVar45 + uVar59 * 0xc);
                    if ((bRam0000000113732f70 & 1) == 0) {
                      ___cxa_guard_acquire();
                      auVar150._8_8_ = uVar35;
                      auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                      if (iVar86 != 0) {
                        fRam0000000113732fa8 = -88.0;
                        fRam0000000113732fac = -88.0;
                        fRam0000000113732fa0 = -88.0;
                        fRam0000000113732fa4 = -88.0;
                        ___cxa_guard_release(0x113732f70);
                        auVar150._0_8_ = 0x3f7b70f33f7b70f3;
                      }
                    }
                    fVar100 = auVar94._0_4_ - fVar129;
                    fVar102 = auVar94._4_4_ - fVar129;
                    fVar143 = auVar94._8_4_ - fVar129;
                    fVar149 = auVar94._12_4_ - fVar129;
                    iVar104 = (int)(fVar100 * 12102203.0) + auVar150._0_4_;
                    iVar118 = (int)(fVar102 * 12102203.0) + auVar150._4_4_;
                    iVar119 = (int)(fVar143 * 12102203.0) + auVar150._8_4_;
                    iVar120 = (int)(fVar149 * 12102203.0) + auVar150._12_4_;
                    iVar86 = -(uint)(fRam0000000113732fa0 <= fVar100);
                    iVar99 = -(uint)(fRam0000000113732fa4 <= fVar102);
                    iVar101 = -(uint)(fRam0000000113732fa8 <= fVar143);
                    iVar103 = -(uint)(fRam0000000113732fac <= fVar149);
                    fVar100 = (float)CONCAT13((byte)((uint)iVar86 >> 0x18) &
                                              (byte)((uint)iVar104 >> 0x18),
                                              CONCAT12((byte)((uint)iVar86 >> 0x10) &
                                                       (byte)((uint)iVar104 >> 0x10),
                                                       CONCAT11((byte)((uint)iVar86 >> 8) &
                                                                (byte)((uint)iVar104 >> 8),
                                                                (byte)iVar86 & (byte)iVar104)));
                    auVar105._0_8_ =
                         CONCAT17((byte)((uint)iVar99 >> 0x18) & (byte)((uint)iVar118 >> 0x18),
                                  CONCAT16((byte)((uint)iVar99 >> 0x10) &
                                           (byte)((uint)iVar118 >> 0x10),
                                           CONCAT15((byte)((uint)iVar99 >> 8) &
                                                    (byte)((uint)iVar118 >> 8),
                                                    CONCAT14((byte)iVar99 & (byte)iVar118,fVar100)))
                                 );
                    auVar105[8] = (byte)iVar101 & (byte)iVar119;
                    auVar105[9] = (byte)((uint)iVar101 >> 8) & (byte)((uint)iVar119 >> 8);
                    auVar105[10] = (byte)((uint)iVar101 >> 0x10) & (byte)((uint)iVar119 >> 0x10);
                    auVar105[0xb] = (byte)((uint)iVar101 >> 0x18) & (byte)((uint)iVar119 >> 0x18);
                    auVar108[0xc] = (byte)iVar103 & (byte)iVar120;
                    auVar108._0_12_ = auVar105;
                    auVar108[0xd] = (byte)((uint)iVar103 >> 8) & (byte)((uint)iVar120 >> 8);
                    auVar108[0xe] = (byte)((uint)iVar103 >> 0x10) & (byte)((uint)iVar120 >> 0x10);
                    auVar108[0xf] = (byte)((uint)iVar103 >> 0x18) & (byte)((uint)iVar120 >> 0x18);
                    *(long *)((long)(*pauVar45 + uVar59 * 0xc) + 8) = auVar108._8_8_;
                    *(undefined8 *)(*pauVar45 + uVar59 * 0xc) = auVar105._0_8_;
                    fVar84 = fVar84 + auVar126._0_4_ + auVar126._4_4_ +
                                      auVar126._8_4_ + auVar126._12_4_ +
                             auVar153._0_4_ + auVar153._4_4_ + auVar153._8_4_ + auVar153._12_4_ +
                             fVar85 + (float)((ulong)uVar169 >> 0x20) +
                             fVar98 + (float)((ulong)uVar172 >> 0x20) +
                             fVar100 + (float)((ulong)auVar105._0_8_ >> 0x20) +
                             auVar105._8_4_ + auVar108._12_4_;
                    uVar37 = uVar37 + 4;
                    pauVar45 = pauVar45 + 1;
                  } while (uVar37 < (uVar59 & 0xfffffffc));
                }
                lVar49 = 0;
                pfVar20 = pfVar80;
                do {
                  uVar37 = uVar59 & 3;
                  pfVar27 = pfVar20;
                  if (uVar59 != (uVar59 & 0xfffffffc)) {
                    do {
                      fVar98 = *pfVar27;
                      fVar100 = (float)_expf(fVar98 - fVar129);
                      fVar85 = 0.0;
                      if (-88.0 <= fVar98 - fVar129) {
                        fVar85 = fVar100;
                      }
                      fVar84 = fVar84 + fVar85;
                      *pfVar27 = fVar85;
                      uVar37 = uVar37 - 1;
                      pfVar27 = pfVar27 + 1;
                    } while (uVar37 != 0);
                  }
                  lVar49 = lVar49 + 1;
                  pfVar20 = pfVar20 + uVar59;
                } while (lVar49 != 4);
                uVar78 = uVar78 + 4;
                pauVar72 = pauVar72 + uVar59;
                pfVar80 = pfVar80 + uVar59 * 4;
                auVar150._8_8_ = uVar35;
                auVar150._0_8_ = 0x3f7b70f33f7b70f3;
              } while (uVar78 < uVar77);
              uVar78 = uVar54 & 3;
              if ((uVar6 & 3) != 0) goto LAB_109525afc;
            }
            fVar84 = 1.0 / fVar84;
            if (uVar6 < 4) {
              uVar77 = 0;
              uVar78 = uVar54;
            }
            else {
              uVar78 = 0;
              uVar77 = uVar54 & 0xfffffffc;
              pfVar80 = (float *)(lVar24 + lVar38);
              pfVar20 = (float *)(lVar24 + (uVar73 & 0x3fffffff0) + lVar38);
              do {
                if ((uVar23 & 0xfffffffc) != 0) {
                  uVar37 = 0;
                  pfVar27 = pfVar80;
                  do {
                    pfVar27[2] = pfVar27[2] * fVar84;
                    pfVar27[3] = pfVar27[3] * fVar84;
                    *pfVar27 = *pfVar27 * fVar84;
                    pfVar27[1] = pfVar27[1] * fVar84;
                    pfVar62 = pfVar27 + uVar59;
                    fVar129 = *pfVar62;
                    fVar85 = pfVar62[1];
                    pfVar61 = pfVar27 + uVar59;
                    pfVar61[2] = pfVar62[2] * fVar84;
                    pfVar61[3] = pfVar62[3] * fVar84;
                    *pfVar61 = fVar129 * fVar84;
                    pfVar61[1] = fVar85 * fVar84;
                    pfVar62 = pfVar27 + uVar59 * 2;
                    fVar129 = *pfVar62;
                    fVar85 = pfVar62[1];
                    fVar98 = pfVar62[3];
                    pfVar61 = pfVar27 + uVar59 * 2;
                    pfVar61[2] = pfVar62[2] * fVar84;
                    pfVar61[3] = fVar98 * fVar84;
                    *pfVar61 = fVar129 * fVar84;
                    pfVar61[1] = fVar85 * fVar84;
                    pfVar62 = pfVar27 + uVar59 * 3;
                    auVar110._0_8_ = CONCAT44(pfVar62[1] * fVar84,*pfVar62 * fVar84);
                    auVar110._8_4_ = pfVar62[2] * fVar84;
                    auVar110._12_4_ = pfVar62[3] * fVar84;
                    *(long *)(pfVar27 + uVar59 * 3 + 2) = auVar110._8_8_;
                    *(undefined8 *)(pfVar27 + uVar59 * 3) = auVar110._0_8_;
                    uVar37 = uVar37 + 4;
                    pfVar27 = pfVar27 + 4;
                  } while (uVar37 < (uVar59 & 0xfffffffc));
                }
                lVar70 = 0;
                pfVar27 = pfVar20;
                do {
                  uVar37 = uVar59 & 3;
                  pfVar62 = pfVar27;
                  if (uVar59 != (uVar59 & 0xfffffffc)) {
                    do {
                      *pfVar62 = fVar84 * *pfVar62;
                      uVar37 = uVar37 - 1;
                      pfVar62 = pfVar62 + 1;
                    } while (uVar37 != 0);
                  }
                  lVar70 = lVar70 + 1;
                  pfVar27 = pfVar27 + uVar59;
                } while (lVar70 != 4);
                uVar78 = uVar78 + 4;
                pfVar80 = pfVar80 + uVar59 * 4;
                pfVar20 = pfVar20 + uVar59 * 4;
              } while (uVar78 < uVar77);
              uVar78 = uVar54 & 3;
              if ((uVar6 & 3) == 0) goto LAB_1095262e8;
            }
            if (uVar78 < 2) {
              if (uVar77 < uVar54) {
                pfVar80 = (float *)(lVar24 + lVar38 + uVar77 * uVar59 * 4);
                pfVar20 = (float *)(lVar24 + lVar38 + (uVar73 & 0x3fffffff0) + uVar77 * uVar59 * 4);
                do {
                  if ((uVar23 & 0xfffffffc) != 0) {
                    uVar73 = 0;
                    pfVar27 = pfVar80;
                    do {
                      auVar111._0_8_ = CONCAT44(pfVar27[1] * fVar84,*pfVar27 * fVar84);
                      auVar111._8_4_ = pfVar27[2] * fVar84;
                      auVar111._12_4_ = pfVar27[3] * fVar84;
                      *(long *)(pfVar27 + 2) = auVar111._8_8_;
                      *(undefined8 *)pfVar27 = auVar111._0_8_;
                      uVar73 = uVar73 + 4;
                      pfVar27 = pfVar27 + 4;
                    } while (uVar73 < (uVar59 & 0xfffffffc));
                  }
                  pfVar27 = pfVar20;
                  uVar73 = uVar59 & 3;
                  if (uVar59 != (uVar59 & 0xfffffffc)) {
                    do {
                      *pfVar27 = fVar84 * *pfVar27;
                      uVar73 = uVar73 - 1;
                      pfVar27 = pfVar27 + 1;
                    } while (uVar73 != 0);
                  }
                  uVar77 = uVar77 + 1;
                  pfVar80 = pfVar80 + uVar59;
                  pfVar20 = pfVar20 + uVar59;
                } while (uVar77 != uVar54);
              }
            }
            else {
              uVar54 = uVar54 - (uVar78 & 1);
              if (uVar77 < uVar54) {
                pfVar80 = (float *)(lVar24 + lVar38 + (uVar59 + uVar77 * uVar59) * 4);
                pfVar20 = (float *)(lVar24 + lVar38 + uVar77 * uVar59 * 4);
                do {
                  if ((uVar23 & 0xfffffffc) != 0) {
                    uVar37 = 0;
                    pfVar27 = pfVar80;
                    pfVar62 = pfVar20;
                    do {
                      pfVar62[2] = pfVar62[2] * fVar84;
                      pfVar62[3] = pfVar62[3] * fVar84;
                      *pfVar62 = *pfVar62 * fVar84;
                      pfVar62[1] = pfVar62[1] * fVar84;
                      auVar112._0_8_ = CONCAT44(pfVar27[1] * fVar84,*pfVar27 * fVar84);
                      auVar112._8_4_ = pfVar27[2] * fVar84;
                      auVar112._12_4_ = pfVar27[3] * fVar84;
                      *(long *)(pfVar27 + 2) = auVar112._8_8_;
                      *(undefined8 *)pfVar27 = auVar112._0_8_;
                      uVar37 = uVar37 + 4;
                      pfVar27 = pfVar27 + 4;
                      pfVar62 = pfVar62 + 4;
                    } while (uVar37 < (uVar59 & 0xfffffffc));
                  }
                  lVar70 = 0;
                  bVar44 = true;
                  do {
                    bVar30 = bVar44;
                    if (uVar59 != (uVar59 & 0xfffffffc)) {
                      uVar37 = uVar59 & 3;
                      pfVar27 = (float *)(lVar24 + (uVar73 & 0x3fffffff0) + lVar38 +
                                         uVar73 * (uVar77 + lVar70));
                      do {
                        *pfVar27 = fVar84 * *pfVar27;
                        uVar37 = uVar37 - 1;
                        pfVar27 = pfVar27 + 1;
                      } while (uVar37 != 0);
                    }
                    lVar70 = 1;
                    bVar44 = false;
                  } while (bVar30);
                  uVar77 = uVar77 + 2;
                  pfVar80 = pfVar80 + uVar59 * 2;
                  pfVar20 = pfVar20 + uVar59 * 2;
                } while (uVar77 < uVar54);
              }
              if ((uVar78 & 1) != 0) {
                if ((uVar23 & 0xfffffffc) != 0) {
                  uVar78 = 0;
                  pfVar80 = (float *)(lVar24 + lVar38 + (uVar54 & 0xffffffff) * uVar59 * 4);
                  do {
                    auVar113._0_8_ = CONCAT44(pfVar80[1] * fVar84,*pfVar80 * fVar84);
                    auVar113._8_4_ = pfVar80[2] * fVar84;
                    auVar113._12_4_ = pfVar80[3] * fVar84;
                    *(long *)(pfVar80 + 2) = auVar113._8_8_;
                    *(undefined8 *)pfVar80 = auVar113._0_8_;
                    uVar78 = uVar78 + 4;
                    pfVar80 = pfVar80 + 4;
                  } while (uVar78 < (uVar59 & 0xfffffffc));
                }
                lVar70 = uVar59 - (uVar59 & 0xfffffffc);
                if (lVar70 != 0) {
                  pfVar80 = (float *)(lVar24 + lVar38 +
                                     (uVar73 & 0x3fffffff0) + (uVar54 & 0xffffffff) * uVar59 * 4);
                  do {
                    *pfVar80 = fVar84 * *pfVar80;
                    lVar70 = lVar70 + -1;
                    pfVar80 = pfVar80 + 1;
                  } while (lVar70 != 0);
                }
              }
            }
          }
LAB_1095262e8:
          lVar70 = lVar24 + (ulong)(uStack_228._4_4_ * uVar4) * 4;
          lVar81 = *(long *)(param_2 + 0x18);
          lVar49 = lVar70 + uVar53 * 4;
          lVar42 = lVar49;
          if (*(char *)(lVar81 + 0x1f0) == '\0') {
            lVar42 = 0;
          }
          cVar2 = *(char *)(lVar81 + 0x1f1);
          pfVar80 = pfStack_118 + (uStack_228 & 0xffffffff) * 5;
          uVar6 = *(uint *)(lVar57 + 0x30);
          uVar54 = (ulong)uVar6;
          uVar23 = *(uint *)(lVar57 + 0x34);
          uVar59 = (ulong)uVar23;
          fVar129 = 1.0 / (float)uVar54;
          if (lVar42 == 0 || *(char *)(lVar81 + 0x1f0) == '\0') {
            if (uVar23 == 0) {
LAB_1095263bc:
              pfVar80[0] = 0.0;
              pfVar80[1] = 0.0;
              fVar98 = 0.0;
              goto LAB_109527b74;
            }
            if (uVar23 < 4) {
              uVar78 = 0;
              fVar84 = 0.0;
              fVar85 = 0.0;
              uVar73 = uVar59;
LAB_109526594:
              if (uVar73 < 2) {
                if (uVar78 < uVar59) {
                  uVar73 = uVar54 & 0xfffffffc;
                  pfVar20 = (float *)(lVar24 + lVar38 + uVar78 * uVar54 * 4);
                  pfVar27 = (float *)(lVar24 + lVar38 +
                                     (uVar54 * 4 & 0x3fffffff0) + uVar78 * uVar54 * 4);
                  do {
                    if ((uVar6 & 0xfffffffc) == 0) {
                      auVar135 = ZEXT216(0);
                      fVar98 = 0.0;
                      fVar100 = 0.0;
                      fVar102 = 0.0;
                      fVar143 = 0.0;
                    }
                    else {
                      uVar77 = 0;
                      fVar149 = (float)(uVar78 + 1) / (float)uVar59;
                      fVar98 = 0.0;
                      fVar100 = 0.0;
                      fVar102 = 0.0;
                      fVar143 = 0.0;
                      pfVar62 = pfVar20;
                      auVar94 = ZEXT216(0);
                      do {
                        fVar148 = (float)uVar77;
                        auVar135._0_4_ =
                             auVar94._0_4_ + *pfVar62 * ((fVar148 + 1.0) * fVar129 + 0.0);
                        auVar135._4_4_ =
                             auVar94._4_4_ + pfVar62[1] * ((fVar148 + 2.0) * fVar129 + 0.0);
                        auVar135._8_4_ =
                             auVar94._8_4_ + pfVar62[2] * ((fVar148 + 3.0) * fVar129 + 0.0);
                        auVar135._12_4_ =
                             auVar94._12_4_ + pfVar62[3] * ((fVar148 + 4.0) * fVar129 + 0.0);
                        fVar98 = fVar98 + *pfVar62 * fVar149;
                        fVar100 = fVar100 + pfVar62[1] * fVar149;
                        fVar102 = fVar102 + pfVar62[2] * fVar149;
                        fVar143 = fVar143 + pfVar62[3] * fVar149;
                        uVar77 = uVar77 + 4;
                        pfVar62 = pfVar62 + 4;
                        auVar94 = auVar135;
                      } while (uVar77 < uVar73);
                    }
                    uVar144 = 0;
                    uVar145 = 0;
                    uVar146 = 0;
                    uVar147 = 0;
                    fVar149 = 0.0;
                    if (uVar54 != uVar73) {
                      fVar149 = 0.0;
                      uVar144 = 0;
                      uVar145 = 0;
                      uVar146 = 0;
                      uVar147 = 0;
                      uVar37 = uVar54 & 3;
                      pfVar62 = pfVar27;
                      uVar77 = uVar73 | 1;
                      do {
                        fVar149 = fVar149 + (fVar129 * (float)uVar77 + 0.0) * *pfVar62;
                        fVar148 = (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(uVar145,uVar144)
                                                                  )) +
                                  ((float)uVar78 / (float)uVar59) * *pfVar62;
                        uVar144 = SUB41(fVar148,0);
                        uVar145 = (undefined1)((uint)fVar148 >> 8);
                        uVar146 = (undefined1)((uint)fVar148 >> 0x10);
                        uVar147 = (undefined1)((uint)fVar148 >> 0x18);
                        uVar77 = uVar77 + 1;
                        uVar37 = uVar37 - 1;
                        pfVar62 = pfVar62 + 1;
                      } while (uVar37 != 0);
                    }
                    fVar84 = fVar84 + auVar135._0_4_ + fVar149 + auVar135._4_4_ + 0.0 +
                                      auVar135._8_4_ + 0.0 + auVar135._12_4_ + 0.0;
                    fVar85 = fVar85 + fVar98 + (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(
                                                  uVar145,uVar144))) + fVar100 + 0.0 +
                                      fVar102 + 0.0 + fVar143 + 0.0;
                    uVar78 = uVar78 + 1;
                    pfVar20 = pfVar20 + uVar54;
                    pfVar27 = pfVar27 + uVar54;
                  } while (uVar78 != uVar59);
                }
              }
              else {
                uVar77 = uVar59 - (uVar73 & 1);
                if (uVar78 < uVar77) {
                  uVar37 = uVar54 & 0xfffffffc;
                  puVar29 = (undefined8 *)(lVar24 + lVar38 + (uVar54 + uVar78 * uVar54) * 4);
                  puVar28 = (undefined8 *)(lVar24 + lVar38 + uVar78 * uVar54 * 4);
                  do {
                    lVar49 = 0;
                    do {
                      lVar42 = lVar49 + 1;
                      fVar98 = (float)(lVar42 + uVar78) / (float)uVar59;
                      *(float *)(&uStack_f8 + lVar49 * 2) = fVar98;
                      *(float *)((long)&uStack_f8 + lVar49 * 0x10 + 4) = fVar98;
                      *(float *)(&uStack_100 + lVar49 * 2) = fVar98;
                      *(float *)((long)&uStack_100 + lVar49 * 0x10 + 4) = fVar98;
                      lVar49 = lVar42;
                    } while (lVar42 != 2);
                    if ((uVar6 & 0xfffffffc) == 0) {
                      auVar138 = ZEXT216(0);
                      fVar98 = 0.0;
                      fVar100 = 0.0;
                      fVar102 = 0.0;
                      fVar143 = 0.0;
                    }
                    else {
                      uVar14 = 0;
                      auVar138._0_14_ = ZEXT214(0);
                      auVar138._14_2_ = 0;
                      fVar98 = 0.0;
                      fVar100 = 0.0;
                      fVar102 = 0.0;
                      fVar143 = 0.0;
                      puVar15 = puVar28;
                      puVar36 = puVar29;
                      do {
                        fVar149 = (float)uVar14;
                        fVar152 = (fVar149 + 1.0) * fVar129 + 0.0;
                        fVar159 = (fVar149 + 2.0) * fVar129 + 0.0;
                        fVar160 = (fVar149 + 3.0) * fVar129 + 0.0;
                        fVar161 = (fVar149 + 4.0) * fVar129 + 0.0;
                        fVar163 = (float)*puVar15;
                        fVar165 = (float)((ulong)*puVar15 >> 0x20);
                        fVar167 = (float)puVar15[1];
                        fVar170 = (float)((ulong)puVar15[1] >> 0x20);
                        fVar149 = auVar138._4_4_;
                        fVar148 = auVar138._8_4_;
                        fVar162 = auVar138._12_4_;
                        fVar164 = (float)*puVar36;
                        fVar166 = (float)((ulong)*puVar36 >> 0x20);
                        fVar168 = (float)puVar36[1];
                        fVar171 = (float)((ulong)puVar36[1] >> 0x20);
                        auVar138._0_4_ = fVar164 * fVar152 + auVar138._0_4_ + fVar163 * fVar152;
                        auVar138._4_4_ = fVar166 * fVar159 + fVar149 + fVar165 * fVar159;
                        auVar138._8_4_ = fVar168 * fVar160 + fVar148 + fVar167 * fVar160;
                        auVar138._12_4_ = fVar171 * fVar161 + fVar162 + fVar170 * fVar161;
                        fVar98 = fVar98 + (SUB84(uStack_100,0) + 0.0) * fVar163 +
                                 ((float)uStack_f0 + 0.0) * fVar164;
                        fVar100 = fVar100 + ((float)((ulong)uStack_100 >> 0x20) + 0.0) * fVar165 +
                                  (uStack_f0._4_4_ + 0.0) * fVar166;
                        fVar102 = fVar102 + (SUB84(uStack_f8,0) + 0.0) * fVar167 +
                                  ((float)uStack_e8 + 0.0) * fVar168;
                        fVar143 = fVar143 + ((float)((ulong)uStack_f8 >> 0x20) + 0.0) * fVar170 +
                                  (uStack_e8._4_4_ + 0.0) * fVar171;
                        uVar14 = uVar14 + 4;
                        puVar15 = puVar15 + 2;
                        puVar36 = puVar36 + 2;
                      } while (uVar14 < uVar37);
                    }
                    uVar14 = 0;
                    fVar149 = 0.0;
                    uVar144 = 0;
                    uVar145 = 0;
                    uVar146 = 0;
                    uVar147 = 0;
                    bVar44 = true;
                    do {
                      bVar30 = bVar44;
                      if (uVar54 != uVar37) {
                        pfVar20 = (float *)(lVar24 + (uVar54 * 4 & 0x3fffffff0) + lVar38 +
                                           uVar54 * 4 * (uVar78 + uVar14));
                        uVar43 = uVar37 | 1;
                        uVar18 = uVar54 & 3;
                        do {
                          fVar149 = fVar149 + (fVar129 * (float)uVar43 + 0.0) * *pfVar20;
                          fVar148 = (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(uVar145,
                                                  uVar144))) +
                                    ((float)(uVar14 | uVar78) / (float)uVar59) * *pfVar20;
                          uVar144 = SUB41(fVar148,0);
                          uVar145 = (undefined1)((uint)fVar148 >> 8);
                          uVar146 = (undefined1)((uint)fVar148 >> 0x10);
                          uVar147 = (undefined1)((uint)fVar148 >> 0x18);
                          uVar43 = uVar43 + 1;
                          uVar18 = uVar18 - 1;
                          pfVar20 = pfVar20 + 1;
                        } while (uVar18 != 0);
                      }
                      uVar14 = 1;
                      bVar44 = false;
                    } while (bVar30);
                    fVar84 = fVar84 + auVar138._0_4_ + fVar149 + auVar138._4_4_ + 0.0 +
                                      auVar138._8_4_ + 0.0 + auVar138._12_4_ + 0.0;
                    fVar85 = fVar85 + fVar98 + (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(
                                                  uVar145,uVar144))) + fVar100 + 0.0 +
                                      fVar102 + 0.0 + fVar143 + 0.0;
                    uVar78 = uVar78 + 2;
                    puVar29 = puVar29 + uVar54;
                    puVar28 = puVar28 + uVar54;
                  } while (uVar78 < uVar77);
                }
                if ((uVar73 & 1) != 0) {
                  uVar73 = uVar54 & 0xfffffffc;
                  if ((uVar6 & 0xfffffffc) == 0) {
                    auVar127 = ZEXT216(0);
                    auVar140 = ZEXT216(0);
                  }
                  else {
                    uVar78 = 0;
                    fVar98 = (float)(uVar77 + 1) / (float)uVar59;
                    pauVar72 = (undefined1 (*) [16])
                               (lVar24 + lVar38 + (uVar77 & 0xffffffff) * uVar54 * 4);
                    auVar94 = ZEXT216(0);
                    auVar90 = ZEXT216(0);
                    do {
                      fVar100 = (float)uVar78;
                      auVar107 = *pauVar72;
                      auVar127._0_4_ =
                           auVar94._0_4_ + auVar107._0_4_ * ((fVar100 + 1.0) * fVar129 + 0.0);
                      auVar127._4_4_ =
                           auVar94._4_4_ + auVar107._4_4_ * ((fVar100 + 2.0) * fVar129 + 0.0);
                      auVar127._8_4_ =
                           auVar94._8_4_ + auVar107._8_4_ * ((fVar100 + 3.0) * fVar129 + 0.0);
                      auVar127._12_4_ =
                           auVar94._12_4_ + auVar107._12_4_ * ((fVar100 + 4.0) * fVar129 + 0.0);
                      auVar140._0_4_ = auVar90._0_4_ + auVar107._0_4_ * fVar98;
                      auVar140._4_4_ = auVar90._4_4_ + auVar107._4_4_ * fVar98;
                      auVar140._8_4_ = auVar90._8_4_ + auVar107._8_4_ * fVar98;
                      auVar140._12_4_ = auVar90._12_4_ + auVar107._12_4_ * fVar98;
                      uVar78 = uVar78 + 4;
                      pauVar72 = pauVar72 + 1;
                      auVar94 = auVar127;
                      auVar90 = auVar140;
                    } while (uVar78 < uVar73);
                  }
                  uVar144 = 0;
                  uVar145 = 0;
                  uVar146 = 0;
                  uVar147 = 0;
                  fVar98 = 0.0;
                  lVar49 = uVar54 - uVar73;
                  if (lVar49 != 0) {
                    fVar98 = 0.0;
                    uVar144 = 0;
                    uVar145 = 0;
                    uVar146 = 0;
                    uVar147 = 0;
                    pfVar20 = (float *)(lVar24 + lVar38 +
                                       (uVar54 & 0xfffffffc) * 4 +
                                       (uVar77 & 0xffffffff) * uVar54 * 4);
                    do {
                      uVar73 = uVar73 + 1;
                      fVar98 = fVar98 + (fVar129 * (float)uVar73 + 0.0) * *pfVar20;
                      fVar100 = (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(uVar145,uVar144)))
                                + ((float)uVar77 / (float)uVar59) * *pfVar20;
                      uVar144 = SUB41(fVar100,0);
                      uVar145 = (undefined1)((uint)fVar100 >> 8);
                      uVar146 = (undefined1)((uint)fVar100 >> 0x10);
                      uVar147 = (undefined1)((uint)fVar100 >> 0x18);
                      lVar49 = lVar49 + -1;
                      pfVar20 = pfVar20 + 1;
                    } while (lVar49 != 0);
                  }
                  fVar84 = fVar84 + auVar127._0_4_ + fVar98 + auVar127._4_4_ + 0.0 +
                                    auVar127._8_4_ + 0.0 + auVar127._12_4_ + 0.0;
                  fVar85 = fVar85 + auVar140._0_4_ +
                                    (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(uVar145,
                                                  uVar144))) + auVar140._4_4_ + 0.0 +
                                    auVar140._8_4_ + 0.0 + auVar140._12_4_ + 0.0;
                }
              }
            }
            else {
              uVar73 = 0;
              uVar78 = uVar59 & 0xfffffffc;
              uVar77 = uVar54 & 0xfffffffc;
              puVar29 = (undefined8 *)(lVar24 + lVar38);
              fVar85 = 0.0;
              fVar84 = 0.0;
              pfVar20 = (float *)((long)puVar29 + (uVar54 * 4 & 0x3fffffff0));
              do {
                lVar49 = 0;
                do {
                  lVar42 = lVar49 + 1;
                  fVar98 = (float)(lVar42 + uVar73) / (float)uVar59;
                  *(float *)(&uStack_f8 + lVar49 * 2) = fVar98;
                  *(float *)((long)&uStack_f8 + lVar49 * 0x10 + 4) = fVar98;
                  *(float *)(&uStack_100 + lVar49 * 2) = fVar98;
                  *(float *)((long)&uStack_100 + lVar49 * 0x10 + 4) = fVar98;
                  lVar49 = lVar42;
                } while (lVar42 != 4);
                if ((uVar6 & 0xfffffffc) == 0) {
                  auVar134 = ZEXT216(0);
                  fVar98 = 0.0;
                  fVar100 = 0.0;
                  fVar102 = 0.0;
                  fVar143 = 0.0;
                }
                else {
                  uVar37 = 0;
                  auVar134._0_14_ = ZEXT214(0);
                  auVar134._14_2_ = 0;
                  fVar98 = 0.0;
                  fVar100 = 0.0;
                  fVar102 = 0.0;
                  fVar143 = 0.0;
                  puVar28 = puVar29;
                  do {
                    fVar149 = (float)uVar37;
                    fVar152 = (fVar149 + 1.0) * fVar129 + 0.0;
                    fVar159 = (fVar149 + 2.0) * fVar129 + 0.0;
                    fVar160 = (fVar149 + 3.0) * fVar129 + 0.0;
                    fVar161 = (fVar149 + 4.0) * fVar129 + 0.0;
                    fVar163 = (float)*puVar28;
                    fVar167 = (float)((ulong)*puVar28 >> 0x20);
                    fVar177 = (float)puVar28[1];
                    fVar182 = (float)((ulong)puVar28[1] >> 0x20);
                    fVar149 = auVar134._4_4_;
                    fVar148 = auVar134._8_4_;
                    fVar162 = auVar134._12_4_;
                    puVar15 = (undefined8 *)((long)puVar28 + uVar54 * 4);
                    uVar169 = puVar15[1];
                    uVar35 = *puVar15;
                    fVar164 = (float)uVar35;
                    fVar168 = (float)((ulong)uVar35 >> 0x20);
                    fVar178 = (float)uVar169;
                    fVar183 = (float)((ulong)uVar169 >> 0x20);
                    uVar169 = (puVar28 + uVar54)[1];
                    uVar35 = puVar28[uVar54];
                    fVar165 = (float)uVar35;
                    fVar170 = (float)((ulong)uVar35 >> 0x20);
                    fVar179 = (float)uVar169;
                    fVar184 = (float)((ulong)uVar169 >> 0x20);
                    puVar15 = (undefined8 *)((long)puVar28 + uVar54 * 0xc);
                    uVar169 = puVar15[1];
                    uVar35 = *puVar15;
                    fVar166 = (float)uVar35;
                    fVar171 = (float)((ulong)uVar35 >> 0x20);
                    fVar180 = (float)uVar169;
                    fVar185 = (float)((ulong)uVar169 >> 0x20);
                    auVar134._0_4_ =
                         fVar166 * fVar152 +
                         fVar165 * fVar152 + fVar164 * fVar152 + auVar134._0_4_ + fVar163 * fVar152;
                    auVar134._4_4_ =
                         fVar171 * fVar159 +
                         fVar170 * fVar159 + fVar168 * fVar159 + fVar149 + fVar167 * fVar159;
                    auVar134._8_4_ =
                         fVar180 * fVar160 +
                         fVar179 * fVar160 + fVar178 * fVar160 + fVar148 + fVar177 * fVar160;
                    auVar134._12_4_ =
                         fVar185 * fVar161 +
                         fVar184 * fVar161 + fVar183 * fVar161 + fVar162 + fVar182 * fVar161;
                    fVar98 = fVar98 + (SUB84(uStack_100,0) + 0.0) * fVar163 +
                             ((float)uStack_f0 + 0.0) * fVar164 + ((float)uStack_e0 + 0.0) * fVar165
                             + ((float)uStack_d0 + 0.0) * fVar166;
                    fVar100 = fVar100 + ((float)((ulong)uStack_100 >> 0x20) + 0.0) * fVar167 +
                              (uStack_f0._4_4_ + 0.0) * fVar168 +
                              ((float)((ulong)uStack_e0 >> 0x20) + 0.0) * fVar170 +
                              ((float)((ulong)uStack_d0 >> 0x20) + 0.0) * fVar171;
                    fVar102 = fVar102 + (SUB84(uStack_f8,0) + 0.0) * fVar177 +
                              ((float)uStack_e8 + 0.0) * fVar178 +
                              ((float)uStack_d8 + 0.0) * fVar179 +
                              ((float)uStack_c8 + 0.0) * fVar180;
                    fVar143 = fVar143 + ((float)((ulong)uStack_f8 >> 0x20) + 0.0) * fVar182 +
                              (uStack_e8._4_4_ + 0.0) * fVar183 +
                              ((float)((ulong)uStack_d8 >> 0x20) + 0.0) * fVar184 +
                              ((float)((ulong)uStack_c8 >> 0x20) + 0.0) * fVar185;
                    uVar37 = uVar37 + 4;
                    puVar28 = puVar28 + 2;
                  } while (uVar37 < uVar77);
                }
                lVar49 = 0;
                fVar149 = 0.0;
                uVar144 = 0;
                uVar145 = 0;
                uVar146 = 0;
                uVar147 = 0;
                pfVar27 = pfVar20;
                do {
                  if (uVar54 != uVar77) {
                    pfVar62 = pfVar27;
                    uVar37 = uVar77 | 1;
                    uVar14 = uVar54 & 3;
                    do {
                      fVar149 = fVar149 + (fVar129 * (float)uVar37 + 0.0) * *pfVar62;
                      fVar148 = (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(uVar145,uVar144)))
                                + ((float)(lVar49 + uVar73) / (float)uVar59) * *pfVar62;
                      uVar144 = SUB41(fVar148,0);
                      uVar145 = (undefined1)((uint)fVar148 >> 8);
                      uVar146 = (undefined1)((uint)fVar148 >> 0x10);
                      uVar147 = (undefined1)((uint)fVar148 >> 0x18);
                      uVar37 = uVar37 + 1;
                      uVar14 = uVar14 - 1;
                      pfVar62 = pfVar62 + 1;
                    } while (uVar14 != 0);
                  }
                  lVar49 = lVar49 + 1;
                  pfVar27 = pfVar27 + uVar54;
                } while (lVar49 != 4);
                fVar84 = fVar84 + auVar134._0_4_ + fVar149 + auVar134._4_4_ + 0.0 +
                                  auVar134._8_4_ + 0.0 + auVar134._12_4_ + 0.0;
                fVar85 = fVar85 + fVar98 + (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(uVar145
                                                  ,uVar144))) + fVar100 + 0.0 +
                                  fVar102 + 0.0 + fVar143 + 0.0;
                uVar73 = uVar73 + 4;
                puVar29 = puVar29 + uVar54 * 2;
                pfVar20 = pfVar20 + uVar54 * 4;
              } while (uVar73 < uVar78);
              uVar73 = uVar59 & 3;
              if ((uVar23 & 3) != 0) goto LAB_109526594;
            }
            *pfVar80 = fVar84;
            pfVar80[1] = fVar85;
            if (uVar23 < 4) {
              uVar78 = 0;
              fVar98 = 0.0;
              uVar73 = uVar59;
            }
            else {
              uVar73 = 0;
              uVar78 = uVar59 & 0xfffffffc;
              uVar77 = uVar54 & 0xfffffffc;
              fVar100 = (float)(uVar77 - 4);
              pfVar20 = (float *)(lVar24 + (uVar54 * 4 & 0x3fffffff0) + lVar38);
              fVar98 = 0.0;
              do {
                lVar49 = 0;
                do {
                  lVar42 = lVar49 + 1;
                  fVar102 = (float)(lVar42 + uVar73) / (float)uVar59;
                  *(float *)(&uStack_f8 + lVar49 * 2) = fVar102;
                  *(float *)((long)&uStack_f8 + lVar49 * 0x10 + 4) = fVar102;
                  *(float *)(&uStack_100 + lVar49 * 2) = fVar102;
                  *(float *)((long)&uStack_100 + lVar49 * 0x10 + 4) = fVar102;
                  lVar49 = lVar42;
                } while (lVar42 != 4);
                if ((uVar6 & 0xfffffffc) == 0) {
                  auVar154 = ZEXT216(0);
                }
                else {
                  pfVar27 = (float *)(lVar70 + (uVar77 - 4) * 4 + (uVar73 | 3) * uVar54 * 4);
                  auVar154._0_4_ =
                       fVar84 + ABS(((fVar100 + 1.0) * fVar129 + 0.0) - fVar84) * *pfVar27 +
                       *pfVar27 * ABS(((float)uStack_d0 + 0.0) - fVar85);
                  auVar154._4_4_ =
                       fVar84 + ABS(((fVar100 + 2.0) * fVar129 + 0.0) - fVar84) * pfVar27[1] +
                       pfVar27[1] * ABS(((float)((ulong)uStack_d0 >> 0x20) + 0.0) - fVar85);
                  auVar154._8_4_ =
                       fVar84 + ABS(((fVar100 + 3.0) * fVar129 + 0.0) - fVar84) * pfVar27[2] +
                       pfVar27[2] * ABS(((float)uStack_c8 + 0.0) - fVar85);
                  auVar154._12_4_ =
                       fVar84 + ABS(((fVar100 + 4.0) * fVar129 + 0.0) - fVar84) * pfVar27[3] +
                       pfVar27[3] * ABS(((float)((ulong)uStack_c8 >> 0x20) + 0.0) - fVar85);
                }
                lVar49 = 0;
                pfVar27 = pfVar20;
                do {
                  if (uVar54 != uVar77) {
                    pfVar62 = pfVar27;
                    uVar37 = uVar77 | 1;
                    uVar14 = uVar54 & 3;
                    do {
                      fVar98 = fVar98 + ABS((fVar129 * (float)uVar37 + 0.0) - fVar84) * *pfVar62 +
                               ABS((float)(lVar49 + uVar73) / (float)uVar59 - fVar85) * *pfVar62;
                      uVar37 = uVar37 + 1;
                      uVar14 = uVar14 - 1;
                      pfVar62 = pfVar62 + 1;
                    } while (uVar14 != 0);
                  }
                  lVar49 = lVar49 + 1;
                  pfVar27 = pfVar27 + uVar54;
                } while (lVar49 != 4);
                fVar98 = fVar98 + auVar154._0_4_ + fVar98 + auVar154._4_4_ + 0.0 +
                                  auVar154._8_4_ + 0.0 + auVar154._12_4_ + 0.0;
                uVar73 = uVar73 + 4;
                pfVar20 = pfVar20 + uVar54 * 4;
              } while (uVar73 < uVar78);
              uVar73 = uVar59 & 3;
              if ((uVar23 & 3) == 0) goto LAB_109527b74;
            }
            if (uVar73 < 2) {
              if (uVar78 < uVar59) {
                uVar73 = uVar54 & 0xfffffffc;
                fVar100 = (float)(uVar73 - 4);
                pfVar20 = (float *)(lVar24 + lVar38 +
                                   (uVar54 * 4 & 0x3fffffff0) + uVar78 * uVar54 * 4);
                do {
                  if ((uVar6 & 0xfffffffc) == 0) {
                    auVar151 = ZEXT216(0);
                  }
                  else {
                    pfVar27 = (float *)(lVar70 + (uVar73 - 4) * 4 + uVar78 * uVar54 * 4);
                    fVar102 = ABS((float)(uVar78 + 1) / (float)uVar59 - fVar85);
                    auVar151._0_4_ =
                         *pfVar27 * fVar102 +
                         fVar84 + ABS(((fVar100 + 1.0) * fVar129 + 0.0) - fVar84) * *pfVar27;
                    auVar151._4_4_ =
                         pfVar27[1] * fVar102 +
                         fVar84 + ABS(((fVar100 + 2.0) * fVar129 + 0.0) - fVar84) * pfVar27[1];
                    auVar151._8_4_ =
                         pfVar27[2] * fVar102 +
                         fVar84 + ABS(((fVar100 + 3.0) * fVar129 + 0.0) - fVar84) * pfVar27[2];
                    auVar151._12_4_ =
                         pfVar27[3] * fVar102 +
                         fVar84 + ABS(((fVar100 + 4.0) * fVar129 + 0.0) - fVar84) * pfVar27[3];
                  }
                  if (uVar54 != uVar73) {
                    uVar37 = uVar54 & 3;
                    pfVar27 = pfVar20;
                    uVar77 = uVar73 | 1;
                    do {
                      fVar98 = fVar98 + ABS((fVar129 * (float)uVar77 + 0.0) - fVar84) * *pfVar27 +
                               ABS((float)uVar78 / (float)uVar59 - fVar85) * *pfVar27;
                      uVar77 = uVar77 + 1;
                      uVar37 = uVar37 - 1;
                      pfVar27 = pfVar27 + 1;
                    } while (uVar37 != 0);
                  }
                  fVar98 = fVar98 + auVar151._0_4_ + fVar98 + auVar151._4_4_ + 0.0 +
                                    auVar151._8_4_ + 0.0 + auVar151._12_4_ + 0.0;
                  uVar78 = uVar78 + 1;
                  pfVar20 = pfVar20 + uVar54;
                } while (uVar78 != uVar59);
              }
            }
            else {
              uVar77 = uVar59 - (uVar73 & 1);
              if (uVar78 < uVar77) {
                uVar37 = uVar54 & 0xfffffffc;
                fVar100 = (float)(uVar37 - 4);
                do {
                  lVar49 = 0;
                  do {
                    lVar42 = lVar49 + 1;
                    fVar102 = (float)(lVar42 + uVar78) / (float)uVar59;
                    *(float *)(&uStack_f8 + lVar49 * 2) = fVar102;
                    *(float *)((long)&uStack_f8 + lVar49 * 0x10 + 4) = fVar102;
                    *(float *)(&uStack_100 + lVar49 * 2) = fVar102;
                    *(float *)((long)&uStack_100 + lVar49 * 0x10 + 4) = fVar102;
                    lVar49 = lVar42;
                  } while (lVar42 != 2);
                  if ((uVar6 & 0xfffffffc) == 0) {
                    auVar155 = ZEXT216(0);
                  }
                  else {
                    pfVar20 = (float *)(lVar70 + (uVar37 - 4) * 4 + (uVar78 | 1) * uVar54 * 4);
                    auVar155._0_4_ =
                         fVar84 + ABS(((fVar100 + 1.0) * fVar129 + 0.0) - fVar84) * *pfVar20 +
                         *pfVar20 * ABS(((float)uStack_f0 + 0.0) - fVar85);
                    auVar155._4_4_ =
                         fVar84 + ABS(((fVar100 + 2.0) * fVar129 + 0.0) - fVar84) * pfVar20[1] +
                         pfVar20[1] * ABS(((float)((ulong)uStack_f0 >> 0x20) + 0.0) - fVar85);
                    auVar155._8_4_ =
                         fVar84 + ABS(((fVar100 + 3.0) * fVar129 + 0.0) - fVar84) * pfVar20[2] +
                         pfVar20[2] * ABS(((float)uStack_e8 + 0.0) - fVar85);
                    auVar155._12_4_ =
                         fVar84 + ABS(((fVar100 + 4.0) * fVar129 + 0.0) - fVar84) * pfVar20[3] +
                         pfVar20[3] * ABS(((float)((ulong)uStack_e8 >> 0x20) + 0.0) - fVar85);
                  }
                  uVar14 = 0;
                  bVar44 = true;
                  do {
                    bVar30 = bVar44;
                    if (uVar54 != uVar37) {
                      pfVar20 = (float *)(lVar24 + (uVar54 * 4 & 0x3fffffff0) + lVar38 +
                                         uVar54 * 4 * (uVar78 + uVar14));
                      uVar43 = uVar37 | 1;
                      uVar18 = uVar54 & 3;
                      do {
                        fVar98 = fVar98 + ABS((fVar129 * (float)uVar43 + 0.0) - fVar84) * *pfVar20 +
                                 ABS((float)(uVar14 | uVar78) / (float)uVar59 - fVar85) * *pfVar20;
                        uVar43 = uVar43 + 1;
                        uVar18 = uVar18 - 1;
                        pfVar20 = pfVar20 + 1;
                      } while (uVar18 != 0);
                    }
                    uVar14 = 1;
                    bVar44 = false;
                  } while (bVar30);
                  fVar98 = fVar98 + auVar155._0_4_ + fVar98 + auVar155._4_4_ + 0.0 +
                                    auVar155._8_4_ + 0.0 + auVar155._12_4_ + 0.0;
                  uVar78 = uVar78 + 2;
                } while (uVar78 < uVar77);
              }
              if ((uVar73 & 1) != 0) {
                uVar73 = uVar54 & 0xfffffffc;
                if ((uVar6 & 0xfffffffc) == 0) {
                  auVar142 = ZEXT216(0);
                }
                else {
                  fVar100 = (float)(uVar73 - 4);
                  auVar94 = *(undefined1 (*) [16])
                             (lVar70 + (uVar77 & 0xffffffff) * uVar54 * 4 + (uVar73 - 4) * 4);
                  fVar102 = ABS((float)(uVar77 + 1) / (float)uVar59 - fVar85);
                  auVar142._0_4_ =
                       auVar94._0_4_ * fVar102 +
                       fVar84 + ABS(((fVar100 + 1.0) * fVar129 + 0.0) - fVar84) * auVar94._0_4_;
                  auVar142._4_4_ =
                       auVar94._4_4_ * fVar102 +
                       fVar84 + ABS(((fVar100 + 2.0) * fVar129 + 0.0) - fVar84) * auVar94._4_4_;
                  auVar142._8_4_ =
                       auVar94._8_4_ * fVar102 +
                       fVar84 + ABS(((fVar100 + 3.0) * fVar129 + 0.0) - fVar84) * auVar94._8_4_;
                  auVar142._12_4_ =
                       auVar94._12_4_ * fVar102 +
                       fVar84 + ABS(((fVar100 + 4.0) * fVar129 + 0.0) - fVar84) * auVar94._12_4_;
                }
                lVar70 = uVar54 - uVar73;
                if (lVar70 != 0) {
                  pfVar20 = (float *)(lVar24 + lVar38 +
                                     (uVar54 & 0xfffffffc) * 4 + (uVar77 & 0xffffffff) * uVar54 * 4)
                  ;
                  do {
                    uVar73 = uVar73 + 1;
                    fVar98 = fVar98 + ABS((fVar129 * (float)uVar73 + 0.0) - fVar84) * *pfVar20 +
                             ABS((float)uVar77 / (float)uVar59 - fVar85) * *pfVar20;
                    lVar70 = lVar70 + -1;
                    pfVar20 = pfVar20 + 1;
                  } while (lVar70 != 0);
                }
LAB_109527b5c:
                fVar98 = fVar98 + auVar142._0_4_ + fVar98 + auVar142._4_4_ + 0.0 +
                                  auVar142._8_4_ + 0.0 + auVar142._12_4_ + 0.0;
              }
            }
          }
          else {
            if (uVar23 == 0) goto LAB_1095263bc;
            uVar73 = uVar54 * 4;
            lVar46 = uVar54 * 0x10;
            lVar52 = lVar42 + uVar53 * 4;
            if (uVar23 < 4) {
              uVar77 = 0;
              fVar85 = 0.0;
              fVar84 = 0.0;
              uVar78 = uVar59;
LAB_1095269a8:
              if (uVar78 < 2) {
                if (uVar77 < uVar59) {
                  uVar78 = uVar54 & 0xfffffffc;
                  lVar40 = uVar77 * uVar54;
                  lVar19 = lVar42 + lVar40 * 4;
                  pfVar20 = (float *)(lVar24 + lVar38 + lVar40 * 4);
                  lVar16 = (uVar73 & 0x3fffffff0) + lVar40 * 4;
                  lVar40 = lVar42 + lVar67 + lVar16;
                  lVar16 = lVar24 + lVar38 + lVar16;
                  lVar41 = lVar16 + lVar67;
                  do {
                    uVar37 = uVar77 + 1;
                    if ((uVar6 & 0xfffffffc) == 0) {
                      auVar137 = ZEXT216(0);
                      fVar98 = 0.0;
                      fVar100 = 0.0;
                      fVar102 = 0.0;
                      fVar143 = 0.0;
                    }
                    else {
                      uVar14 = 0;
                      fVar149 = (float)uVar37 / (float)uVar59;
                      fVar98 = 0.0;
                      fVar100 = 0.0;
                      fVar102 = 0.0;
                      fVar143 = 0.0;
                      lVar17 = lVar19;
                      pfVar27 = pfVar20;
                      auVar94 = ZEXT216(0);
                      do {
                        fVar148 = (float)uVar14;
                        uVar169 = *(undefined8 *)(pfVar27 + uVar53 + 2);
                        uVar35 = *(undefined8 *)(pfVar27 + uVar53);
                        auVar137._0_4_ =
                             auVar94._0_4_ + *pfVar27 * ((float)uVar35 + (fVar148 + 1.0) * fVar129);
                        auVar137._4_4_ =
                             auVar94._4_4_ +
                             pfVar27[1] *
                             ((float)((ulong)uVar35 >> 0x20) + (fVar148 + 2.0) * fVar129);
                        auVar137._8_4_ =
                             auVar94._8_4_ +
                             pfVar27[2] * ((float)uVar169 + (fVar148 + 3.0) * fVar129);
                        auVar137._12_4_ =
                             auVar94._12_4_ +
                             pfVar27[3] *
                             ((float)((ulong)uVar169 >> 0x20) + (fVar148 + 4.0) * fVar129);
                        pfVar62 = (float *)(lVar17 + lVar67);
                        fVar98 = fVar98 + *pfVar27 * (fVar149 + *pfVar62);
                        fVar100 = fVar100 + pfVar27[1] * (fVar149 + pfVar62[1]);
                        fVar102 = fVar102 + pfVar27[2] * (fVar149 + pfVar62[2]);
                        fVar143 = fVar143 + pfVar27[3] * (fVar149 + pfVar62[3]);
                        uVar14 = uVar14 + 4;
                        lVar17 = lVar17 + 0x10;
                        pfVar27 = pfVar27 + 4;
                        auVar94 = auVar137;
                      } while (uVar14 < uVar78);
                    }
                    uVar144 = 0;
                    uVar145 = 0;
                    uVar146 = 0;
                    uVar147 = 0;
                    fVar149 = 0.0;
                    if (uVar54 != uVar78) {
                      uVar14 = 0;
                      fVar149 = 0.0;
                      uVar144 = 0;
                      uVar145 = 0;
                      uVar146 = 0;
                      uVar147 = 0;
                      do {
                        fVar148 = *(float *)(lVar16 + uVar14 * 4);
                        lVar17 = uVar14 * 4;
                        lVar32 = uVar14 * 4;
                        uVar14 = uVar14 + 1;
                        fVar149 = fVar149 + (*(float *)(lVar41 + lVar17) +
                                            fVar129 * (float)(uVar14 + uVar78)) * fVar148;
                        fVar148 = (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(uVar145,uVar144)
                                                                  )) +
                                  ((float)uVar77 / (float)uVar59 + *(float *)(lVar40 + lVar32)) *
                                  fVar148;
                        uVar144 = SUB41(fVar148,0);
                        uVar145 = (undefined1)((uint)fVar148 >> 8);
                        uVar146 = (undefined1)((uint)fVar148 >> 0x10);
                        uVar147 = (undefined1)((uint)fVar148 >> 0x18);
                      } while ((uVar54 & 3) != uVar14);
                    }
                    fVar85 = fVar85 + auVar137._0_4_ + fVar149 + auVar137._4_4_ + 0.0 +
                                      auVar137._8_4_ + 0.0 + auVar137._12_4_ + 0.0;
                    lVar19 = lVar19 + uVar73;
                    pfVar20 = pfVar20 + uVar54;
                    lVar40 = lVar40 + uVar73;
                    fVar84 = fVar84 + fVar98 + (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(
                                                  uVar145,uVar144))) + fVar100 + 0.0 +
                                      fVar102 + 0.0 + fVar143 + 0.0;
                    lVar41 = lVar41 + uVar73;
                    lVar16 = lVar16 + uVar73;
                    uVar77 = uVar37;
                  } while (uVar37 != uVar59);
                }
              }
              else {
                uVar37 = uVar59 - (uVar78 & 1);
                if (uVar77 < uVar37) {
                  lVar32 = 0;
                  uVar14 = uVar54 & 0xfffffffc;
                  lVar19 = lVar42 + lVar67;
                  lVar48 = uVar54 + uVar77 * uVar54;
                  lVar40 = lVar24 + lVar67;
                  lVar16 = lVar38 + lVar48 * 4;
                  lVar21 = uVar77 * uVar54;
                  lVar41 = lVar38 + lVar21 * 4;
                  lVar17 = (uVar73 & 0x3fffffff0) + lVar38;
                  do {
                    lVar55 = 0;
                    do {
                      lVar39 = lVar55 + 1;
                      fVar98 = (float)(lVar39 + uVar77) / (float)uVar59;
                      *(float *)(&uStack_f8 + lVar55 * 2) = fVar98;
                      *(float *)((long)&uStack_f8 + lVar55 * 0x10 + 4) = fVar98;
                      *(float *)(&uStack_100 + lVar55 * 2) = fVar98;
                      *(float *)((long)&uStack_100 + lVar55 * 0x10 + 4) = fVar98;
                      lVar55 = lVar39;
                    } while (lVar39 != 2);
                    if ((uVar6 & 0xfffffffc) == 0) {
                      auVar139 = ZEXT216(0);
                      fVar98 = 0.0;
                      fVar100 = 0.0;
                      fVar102 = 0.0;
                      fVar143 = 0.0;
                    }
                    else {
                      uVar43 = 0;
                      auVar139 = ZEXT216(0);
                      fVar98 = 0.0;
                      fVar100 = 0.0;
                      fVar102 = 0.0;
                      fVar143 = 0.0;
                      lVar50 = lVar24 + lVar41;
                      lVar11 = lVar40 + lVar41;
                      lVar22 = lVar19 + lVar21 * 4;
                      lVar12 = lVar24 + lVar16;
                      lVar39 = lVar40 + lVar16;
                      lVar55 = lVar19 + lVar48 * 4;
                      do {
                        fVar149 = (float)uVar43;
                        fVar152 = (fVar149 + 1.0) * fVar129;
                        fVar159 = (fVar149 + 2.0) * fVar129;
                        fVar160 = (fVar149 + 3.0) * fVar129;
                        fVar161 = (fVar149 + 4.0) * fVar129;
                        uVar169 = ((undefined8 *)(lVar50 + lVar32))[1];
                        uVar35 = *(undefined8 *)(lVar50 + lVar32);
                        uVar174 = ((undefined8 *)(lVar11 + lVar32))[1];
                        uVar172 = *(undefined8 *)(lVar11 + lVar32);
                        fVar163 = (float)uVar35;
                        fVar165 = (float)((ulong)uVar35 >> 0x20);
                        fVar167 = (float)uVar169;
                        fVar170 = (float)((ulong)uVar169 >> 0x20);
                        uVar181 = ((undefined8 *)(lVar22 + lVar32))[1];
                        uVar176 = *(undefined8 *)(lVar22 + lVar32);
                        fVar149 = auVar139._4_4_;
                        fVar148 = auVar139._8_4_;
                        fVar162 = auVar139._12_4_;
                        uVar169 = ((undefined8 *)(lVar12 + lVar32))[1];
                        uVar35 = *(undefined8 *)(lVar12 + lVar32);
                        uVar175 = ((undefined8 *)(lVar39 + lVar32))[1];
                        uVar173 = *(undefined8 *)(lVar39 + lVar32);
                        fVar164 = (float)uVar35;
                        fVar166 = (float)((ulong)uVar35 >> 0x20);
                        fVar168 = (float)uVar169;
                        fVar171 = (float)((ulong)uVar169 >> 0x20);
                        uVar169 = ((undefined8 *)(lVar55 + lVar32))[1];
                        uVar35 = *(undefined8 *)(lVar55 + lVar32);
                        auVar139._0_4_ =
                             fVar164 * ((float)uVar173 + fVar152) +
                             auVar139._0_4_ + fVar163 * ((float)uVar172 + fVar152);
                        auVar139._4_4_ =
                             fVar166 * ((float)((ulong)uVar173 >> 0x20) + fVar159) +
                             fVar149 + fVar165 * ((float)((ulong)uVar172 >> 0x20) + fVar159);
                        auVar139._8_4_ =
                             fVar168 * ((float)uVar175 + fVar160) +
                             fVar148 + fVar167 * ((float)uVar174 + fVar160);
                        auVar139._12_4_ =
                             fVar171 * ((float)((ulong)uVar175 >> 0x20) + fVar161) +
                             fVar162 + fVar170 * ((float)((ulong)uVar174 >> 0x20) + fVar161);
                        uVar43 = uVar43 + 4;
                        lVar55 = lVar55 + 0x10;
                        lVar39 = lVar39 + 0x10;
                        lVar12 = lVar12 + 0x10;
                        fVar98 = fVar98 + fVar163 * (SUB84(uStack_100,0) + (float)uVar176) +
                                 fVar164 * ((float)uStack_f0 + (float)uVar35);
                        fVar100 = fVar100 + fVar165 * ((float)((ulong)uStack_100 >> 0x20) +
                                                      (float)((ulong)uVar176 >> 0x20)) +
                                  fVar166 * (uStack_f0._4_4_ + (float)((ulong)uVar35 >> 0x20));
                        fVar102 = fVar102 + fVar167 * (SUB84(uStack_f8,0) + (float)uVar181) +
                                  fVar168 * ((float)uStack_e8 + (float)uVar169);
                        fVar143 = fVar143 + fVar170 * ((float)((ulong)uStack_f8 >> 0x20) +
                                                      (float)((ulong)uVar181 >> 0x20)) +
                                  fVar171 * (uStack_e8._4_4_ + (float)((ulong)uVar169 >> 0x20));
                        lVar22 = lVar22 + 0x10;
                        lVar11 = lVar11 + 0x10;
                        lVar50 = lVar50 + 0x10;
                      } while (uVar43 < uVar14);
                    }
                    uVar43 = 0;
                    fVar149 = 0.0;
                    uVar144 = 0;
                    uVar145 = 0;
                    uVar146 = 0;
                    uVar147 = 0;
                    bVar44 = true;
                    do {
                      bVar30 = bVar44;
                      if (uVar54 != uVar14) {
                        uVar18 = 0;
                        lVar55 = uVar73 * (uVar77 + uVar43);
                        do {
                          fVar148 = *(float *)(lVar24 + lVar17 + lVar55 + uVar18 * 4);
                          lVar39 = uVar18 * 4;
                          lVar12 = uVar18 * 4;
                          uVar18 = uVar18 + 1;
                          fVar149 = fVar149 + (*(float *)(lVar40 + lVar17 + lVar55 + lVar39) +
                                              fVar129 * (float)(uVar18 + uVar14)) * fVar148;
                          fVar148 = (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(uVar145,
                                                  uVar144))) +
                                    ((float)(uVar43 | uVar77) / (float)uVar59 +
                                    *(float *)(lVar19 + (uVar73 & 0x3fffffff0) + lVar55 + lVar12)) *
                                    fVar148;
                          uVar144 = SUB41(fVar148,0);
                          uVar145 = (undefined1)((uint)fVar148 >> 8);
                          uVar146 = (undefined1)((uint)fVar148 >> 0x10);
                          uVar147 = (undefined1)((uint)fVar148 >> 0x18);
                        } while ((uVar54 & 3) != uVar18);
                      }
                      uVar43 = 1;
                      bVar44 = false;
                    } while (bVar30);
                    fVar85 = fVar85 + auVar139._0_4_ + fVar149 + auVar139._4_4_ + 0.0 +
                                      auVar139._8_4_ + 0.0 + auVar139._12_4_ + 0.0;
                    fVar84 = fVar84 + fVar98 + (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(
                                                  uVar145,uVar144))) + fVar100 + 0.0 +
                                      fVar102 + 0.0 + fVar143 + 0.0;
                    uVar77 = uVar77 + 2;
                    lVar32 = lVar32 + uVar54 * 8;
                  } while (uVar77 < uVar37);
                }
                if ((uVar78 & 1) != 0) {
                  uVar78 = uVar54 & 0xfffffffc;
                  if ((uVar6 & 0xfffffffc) == 0) {
                    auVar128 = ZEXT216(0);
                    auVar141 = ZEXT216(0);
                  }
                  else {
                    uVar77 = 0;
                    fVar98 = (float)(uVar37 + 1) / (float)uVar59;
                    lVar40 = (uVar37 & 0xffffffff) * uVar54;
                    lVar19 = lVar42 + lVar40 * 4;
                    pauVar72 = (undefined1 (*) [16])(lVar24 + lVar38 + lVar40 * 4);
                    auVar94 = ZEXT216(0);
                    auVar90 = ZEXT216(0);
                    do {
                      fVar100 = (float)uVar77;
                      auVar107 = *pauVar72;
                      uVar169 = *(undefined8 *)((long)(*pauVar72 + lVar67) + 8);
                      uVar35 = *(undefined8 *)(*pauVar72 + lVar67);
                      auVar128._0_4_ =
                           auVar94._0_4_ +
                           auVar107._0_4_ * ((float)uVar35 + (fVar100 + 1.0) * fVar129);
                      auVar128._4_4_ =
                           auVar94._4_4_ +
                           auVar107._4_4_ *
                           ((float)((ulong)uVar35 >> 0x20) + (fVar100 + 2.0) * fVar129);
                      auVar128._8_4_ =
                           auVar94._8_4_ +
                           auVar107._8_4_ * ((float)uVar169 + (fVar100 + 3.0) * fVar129);
                      auVar128._12_4_ =
                           auVar94._12_4_ +
                           auVar107._12_4_ *
                           ((float)((ulong)uVar169 >> 0x20) + (fVar100 + 4.0) * fVar129);
                      pfVar20 = (float *)(lVar19 + lVar67);
                      auVar141._0_4_ = auVar90._0_4_ + auVar107._0_4_ * (fVar98 + *pfVar20);
                      auVar141._4_4_ = auVar90._4_4_ + auVar107._4_4_ * (fVar98 + pfVar20[1]);
                      auVar141._8_4_ = auVar90._8_4_ + auVar107._8_4_ * (fVar98 + pfVar20[2]);
                      auVar141._12_4_ = auVar90._12_4_ + auVar107._12_4_ * (fVar98 + pfVar20[3]);
                      uVar77 = uVar77 + 4;
                      lVar19 = lVar19 + 0x10;
                      pauVar72 = pauVar72 + 1;
                      auVar94 = auVar128;
                      auVar90 = auVar141;
                    } while (uVar77 < uVar78);
                  }
                  uVar144 = 0;
                  uVar145 = 0;
                  uVar146 = 0;
                  uVar147 = 0;
                  fVar98 = 0.0;
                  if (uVar54 != uVar78) {
                    lVar19 = 0;
                    lVar40 = (uVar73 & 0x3fffffff0) + (uVar37 & 0xffffffff) * uVar54 * 4;
                    lVar16 = lVar24 + lVar38 + lVar40;
                    fVar98 = 0.0;
                    uVar144 = 0;
                    uVar145 = 0;
                    uVar146 = 0;
                    uVar147 = 0;
                    do {
                      fVar100 = *(float *)(lVar16 + lVar19 * 4);
                      lVar41 = lVar19 * 4;
                      lVar17 = lVar19 * 4;
                      lVar19 = lVar19 + 1;
                      fVar98 = fVar98 + (*(float *)(lVar16 + lVar67 + lVar41) +
                                        fVar129 * (float)(lVar19 + uVar78)) * fVar100;
                      fVar100 = (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(uVar145,uVar144)))
                                + ((float)uVar37 / (float)uVar59 +
                                  *(float *)(lVar42 + lVar67 + lVar40 + lVar17)) * fVar100;
                      uVar144 = SUB41(fVar100,0);
                      uVar145 = (undefined1)((uint)fVar100 >> 8);
                      uVar146 = (undefined1)((uint)fVar100 >> 0x10);
                      uVar147 = (undefined1)((uint)fVar100 >> 0x18);
                    } while (uVar54 - uVar78 != lVar19);
                  }
                  fVar85 = fVar85 + auVar128._0_4_ + fVar98 + auVar128._4_4_ + 0.0 +
                                    auVar128._8_4_ + 0.0 + auVar128._12_4_ + 0.0;
                  fVar84 = fVar84 + auVar141._0_4_ +
                                    (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(uVar145,
                                                  uVar144))) + auVar141._4_4_ + 0.0 +
                                    auVar141._8_4_ + 0.0 + auVar141._12_4_ + 0.0;
                }
              }
            }
            else {
              lVar55 = 0;
              uVar78 = 0;
              uVar77 = uVar59 & 0xfffffffc;
              uVar37 = uVar54 & 0xfffffffc;
              lVar19 = lVar42 + lVar67;
              lVar40 = lVar24 + lVar67;
              lVar16 = lVar38 + uVar54 * 0xc;
              lVar41 = lVar38 + uVar54 * 8;
              lVar17 = lVar38 + uVar54 * 4;
              fVar84 = 0.0;
              fVar85 = 0.0;
              lVar32 = lVar19 + (uVar73 & 0x3fffffff0);
              lVar48 = (uVar73 & 0x3fffffff0) + lVar38;
              lVar21 = lVar40 + lVar48;
              lVar48 = lVar24 + lVar48;
              do {
                lVar39 = 0;
                do {
                  lVar12 = lVar39 + 1;
                  fVar98 = (float)(lVar12 + uVar78) / (float)uVar59;
                  *(float *)(&uStack_f8 + lVar39 * 2) = fVar98;
                  *(float *)((long)&uStack_f8 + lVar39 * 0x10 + 4) = fVar98;
                  *(float *)(&uStack_100 + lVar39 * 2) = fVar98;
                  *(float *)((long)&uStack_100 + lVar39 * 0x10 + 4) = fVar98;
                  lVar39 = lVar12;
                } while (lVar12 != 4);
                if ((uVar6 & 0xfffffffc) == 0) {
                  auVar136 = ZEXT216(0);
                  fVar98 = 0.0;
                  fVar100 = 0.0;
                  fVar102 = 0.0;
                  fVar143 = 0.0;
                }
                else {
                  uVar14 = 0;
                  auVar136 = ZEXT216(0);
                  fVar98 = 0.0;
                  fVar100 = 0.0;
                  fVar102 = 0.0;
                  fVar143 = 0.0;
                  lVar11 = lVar19 + uVar54 * 8;
                  lVar22 = lVar24 + lVar16;
                  lVar39 = lVar19 + uVar54 * 0xc;
                  lVar47 = lVar19 + uVar54 * 4;
                  lVar12 = lVar40 + lVar16;
                  lVar50 = lVar40 + lVar41;
                  lVar66 = lVar24 + lVar38;
                  lVar69 = lVar40 + lVar38;
                  lVar71 = lVar24 + lVar41;
                  lVar74 = lVar40 + lVar17;
                  lVar79 = lVar24 + lVar17;
                  lVar82 = lVar52;
                  do {
                    fVar149 = (float)uVar14;
                    fVar152 = (fVar149 + 1.0) * fVar129;
                    fVar159 = (fVar149 + 2.0) * fVar129;
                    fVar160 = (fVar149 + 3.0) * fVar129;
                    fVar161 = (fVar149 + 4.0) * fVar129;
                    uVar169 = ((undefined8 *)(lVar66 + lVar55))[1];
                    uVar35 = *(undefined8 *)(lVar66 + lVar55);
                    uVar176 = ((undefined8 *)(lVar69 + lVar55))[1];
                    uVar172 = *(undefined8 *)(lVar69 + lVar55);
                    fVar163 = (float)uVar35;
                    fVar167 = (float)((ulong)uVar35 >> 0x20);
                    fVar177 = (float)uVar169;
                    fVar182 = (float)((ulong)uVar169 >> 0x20);
                    uVar191 = ((undefined8 *)(lVar82 + lVar55))[1];
                    uVar188 = *(undefined8 *)(lVar82 + lVar55);
                    fVar149 = auVar136._4_4_;
                    fVar148 = auVar136._8_4_;
                    fVar162 = auVar136._12_4_;
                    uVar169 = ((undefined8 *)(lVar79 + lVar55))[1];
                    uVar35 = *(undefined8 *)(lVar79 + lVar55);
                    uVar181 = ((undefined8 *)(lVar74 + lVar55))[1];
                    uVar173 = *(undefined8 *)(lVar74 + lVar55);
                    fVar164 = (float)uVar35;
                    fVar168 = (float)((ulong)uVar35 >> 0x20);
                    fVar178 = (float)uVar169;
                    fVar183 = (float)((ulong)uVar169 >> 0x20);
                    uVar192 = ((undefined8 *)(lVar47 + lVar55))[1];
                    uVar189 = *(undefined8 *)(lVar47 + lVar55);
                    uVar169 = ((undefined8 *)(lVar71 + lVar55))[1];
                    uVar35 = *(undefined8 *)(lVar71 + lVar55);
                    uVar186 = ((undefined8 *)(lVar50 + lVar55))[1];
                    uVar174 = *(undefined8 *)(lVar50 + lVar55);
                    fVar165 = (float)uVar35;
                    fVar170 = (float)((ulong)uVar35 >> 0x20);
                    fVar179 = (float)uVar169;
                    fVar184 = (float)((ulong)uVar169 >> 0x20);
                    uVar193 = ((undefined8 *)(lVar11 + lVar55))[1];
                    uVar190 = *(undefined8 *)(lVar11 + lVar55);
                    uVar169 = ((undefined8 *)(lVar22 + lVar55))[1];
                    uVar35 = *(undefined8 *)(lVar22 + lVar55);
                    uVar187 = ((undefined8 *)(lVar12 + lVar55))[1];
                    uVar175 = *(undefined8 *)(lVar12 + lVar55);
                    fVar166 = (float)uVar35;
                    fVar171 = (float)((ulong)uVar35 >> 0x20);
                    fVar180 = (float)uVar169;
                    fVar185 = (float)((ulong)uVar169 >> 0x20);
                    uVar169 = ((undefined8 *)(lVar39 + lVar55))[1];
                    uVar35 = *(undefined8 *)(lVar39 + lVar55);
                    auVar136._0_4_ =
                         fVar165 * (fVar152 + (float)uVar174) +
                         fVar164 * ((float)uVar173 + fVar152) +
                         auVar136._0_4_ + fVar163 * ((float)uVar172 + fVar152) +
                         fVar166 * (fVar152 + (float)uVar175);
                    auVar136._4_4_ =
                         fVar170 * (fVar159 + (float)((ulong)uVar174 >> 0x20)) +
                         fVar168 * ((float)((ulong)uVar173 >> 0x20) + fVar159) +
                         fVar149 + fVar167 * ((float)((ulong)uVar172 >> 0x20) + fVar159) +
                         fVar171 * (fVar159 + (float)((ulong)uVar175 >> 0x20));
                    auVar136._8_4_ =
                         fVar179 * (fVar160 + (float)uVar186) +
                         fVar178 * ((float)uVar181 + fVar160) +
                         fVar148 + fVar177 * ((float)uVar176 + fVar160) +
                         fVar180 * (fVar160 + (float)uVar187);
                    auVar136._12_4_ =
                         fVar184 * (fVar161 + (float)((ulong)uVar186 >> 0x20)) +
                         fVar183 * ((float)((ulong)uVar181 >> 0x20) + fVar161) +
                         fVar162 + fVar182 * ((float)((ulong)uVar176 >> 0x20) + fVar161) +
                         fVar185 * (fVar161 + (float)((ulong)uVar187 >> 0x20));
                    uVar14 = uVar14 + 4;
                    lVar39 = lVar39 + 0x10;
                    lVar12 = lVar12 + 0x10;
                    lVar22 = lVar22 + 0x10;
                    lVar11 = lVar11 + 0x10;
                    lVar50 = lVar50 + 0x10;
                    lVar71 = lVar71 + 0x10;
                    lVar47 = lVar47 + 0x10;
                    lVar74 = lVar74 + 0x10;
                    lVar79 = lVar79 + 0x10;
                    fVar98 = fVar98 + fVar163 * (SUB84(uStack_100,0) + (float)uVar188) +
                             fVar164 * ((float)uStack_f0 + (float)uVar189) +
                             fVar165 * ((float)uStack_e0 + (float)uVar190) +
                             fVar166 * ((float)uStack_d0 + (float)uVar35);
                    fVar100 = fVar100 + fVar167 * ((float)((ulong)uStack_100 >> 0x20) +
                                                  (float)((ulong)uVar188 >> 0x20)) +
                              fVar168 * (uStack_f0._4_4_ + (float)((ulong)uVar189 >> 0x20)) +
                              fVar170 * ((float)((ulong)uStack_e0 >> 0x20) +
                                        (float)((ulong)uVar190 >> 0x20)) +
                              fVar171 * ((float)((ulong)uStack_d0 >> 0x20) +
                                        (float)((ulong)uVar35 >> 0x20));
                    fVar102 = fVar102 + fVar177 * (SUB84(uStack_f8,0) + (float)uVar191) +
                              fVar178 * ((float)uStack_e8 + (float)uVar192) +
                              fVar179 * ((float)uStack_d8 + (float)uVar193) +
                              fVar180 * ((float)uStack_c8 + (float)uVar169);
                    fVar143 = fVar143 + fVar182 * ((float)((ulong)uStack_f8 >> 0x20) +
                                                  (float)((ulong)uVar191 >> 0x20)) +
                              fVar183 * (uStack_e8._4_4_ + (float)((ulong)uVar192 >> 0x20)) +
                              fVar184 * ((float)((ulong)uStack_d8 >> 0x20) +
                                        (float)((ulong)uVar193 >> 0x20)) +
                              fVar185 * ((float)((ulong)uStack_c8 >> 0x20) +
                                        (float)((ulong)uVar169 >> 0x20));
                    lVar82 = lVar82 + 0x10;
                    lVar69 = lVar69 + 0x10;
                    lVar66 = lVar66 + 0x10;
                  } while (uVar14 < uVar37);
                }
                lVar39 = 0;
                uVar144 = 0;
                uVar145 = 0;
                uVar146 = 0;
                uVar147 = 0;
                fVar149 = 0.0;
                lVar12 = lVar32;
                lVar11 = lVar48;
                lVar22 = lVar21;
                do {
                  if (uVar54 != uVar37) {
                    uVar14 = 0;
                    do {
                      fVar162 = *(float *)(lVar11 + uVar14 * 4);
                      lVar50 = uVar14 * 4;
                      lVar71 = uVar14 * 4;
                      uVar14 = uVar14 + 1;
                      fVar148 = (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(uVar145,uVar144)))
                                + (*(float *)(lVar22 + lVar50) + fVar129 * (float)(uVar14 + uVar37))
                                  * fVar162;
                      uVar144 = SUB41(fVar148,0);
                      uVar145 = (undefined1)((uint)fVar148 >> 8);
                      uVar146 = (undefined1)((uint)fVar148 >> 0x10);
                      uVar147 = (undefined1)((uint)fVar148 >> 0x18);
                      fVar149 = fVar149 + ((float)(lVar39 + uVar78) / (float)uVar59 +
                                          *(float *)(lVar12 + lVar71)) * fVar162;
                    } while ((uVar54 & 3) != uVar14);
                  }
                  lVar39 = lVar39 + 1;
                  lVar12 = lVar12 + uVar73;
                  lVar22 = lVar22 + uVar73;
                  lVar11 = lVar11 + uVar73;
                } while (lVar39 != 4);
                fVar85 = fVar85 + auVar136._0_4_ +
                                  (float)CONCAT13(uVar147,CONCAT12(uVar146,CONCAT11(uVar145,uVar144)
                                                                  )) + auVar136._4_4_ + 0.0 +
                                  auVar136._8_4_ + 0.0 + auVar136._12_4_ + 0.0;
                uVar78 = uVar78 + 4;
                lVar55 = lVar55 + lVar46;
                fVar84 = fVar84 + fVar98 + fVar149 + fVar100 + 0.0 + fVar102 + 0.0 + fVar143 + 0.0;
                lVar32 = lVar32 + lVar46;
                lVar21 = lVar21 + lVar46;
                lVar48 = lVar48 + lVar46;
              } while (uVar78 < uVar77);
              uVar78 = uVar59 & 3;
              if ((uVar23 & 3) != 0) goto LAB_1095269a8;
            }
            *pfVar80 = fVar85;
            pfVar80[1] = fVar84;
            if (uVar23 < 4) {
              uVar77 = 0;
              fVar98 = 0.0;
              uVar78 = uVar59;
            }
            else {
              uVar78 = 0;
              uVar37 = uVar54 & 0xfffffffc;
              uVar14 = uVar37 - 4;
              fVar100 = (float)uVar14;
              uVar77 = uVar59 & 0xfffffffc;
              lVar19 = lVar42 + lVar67 + (uVar73 & 0x3fffffff0);
              lVar40 = lVar24 + (uVar73 & 0x3fffffff0) + lVar38;
              lVar16 = lVar40 + lVar67;
              fVar98 = 0.0;
              do {
                lVar41 = 0;
                do {
                  lVar17 = lVar41 + 1;
                  fVar102 = (float)(lVar17 + uVar78) / (float)uVar23;
                  *(float *)(&uStack_f8 + lVar41 * 2) = fVar102;
                  *(float *)((long)&uStack_f8 + lVar41 * 0x10 + 4) = fVar102;
                  *(float *)(&uStack_100 + lVar41 * 2) = fVar102;
                  *(float *)((long)&uStack_100 + lVar41 * 0x10 + 4) = fVar102;
                  lVar41 = lVar17;
                } while (lVar17 != 4);
                if ((uVar6 & 0xfffffffc) == 0) {
                  auVar156 = ZEXT216(0);
                }
                else {
                  lVar41 = (uVar78 | 3) * uVar54;
                  pfVar20 = (float *)(lVar70 + uVar14 * 4 + lVar41 * 4);
                  lVar41 = (lVar41 + uVar14) * 4;
                  puVar29 = (undefined8 *)(lVar49 + lVar41);
                  uVar169 = puVar29[1];
                  uVar35 = *puVar29;
                  puVar29 = (undefined8 *)(lVar52 + lVar41);
                  uVar173 = puVar29[1];
                  uVar172 = *puVar29;
                  auVar156._0_4_ =
                       fVar85 + *pfVar20 * ABS(((fVar100 + 1.0) * fVar129 + (float)uVar35) - fVar85)
                       + *pfVar20 * ABS(((float)uVar172 + (float)uStack_d0) - fVar84);
                  auVar156._4_4_ =
                       fVar85 + pfVar20[1] *
                                ABS(((fVar100 + 2.0) * fVar129 + (float)((ulong)uVar35 >> 0x20)) -
                                    fVar85) +
                       pfVar20[1] *
                       ABS(((float)((ulong)uVar172 >> 0x20) + (float)((ulong)uStack_d0 >> 0x20)) -
                           fVar84);
                  auVar156._8_4_ =
                       fVar85 + pfVar20[2] *
                                ABS(((fVar100 + 3.0) * fVar129 + (float)uVar169) - fVar85) +
                       pfVar20[2] * ABS(((float)uVar173 + (float)uStack_c8) - fVar84);
                  auVar156._12_4_ =
                       fVar85 + pfVar20[3] *
                                ABS(((fVar100 + 4.0) * fVar129 + (float)((ulong)uVar169 >> 0x20)) -
                                    fVar85) +
                       pfVar20[3] *
                       ABS(((float)((ulong)uVar173 >> 0x20) + (float)((ulong)uStack_c8 >> 0x20)) -
                           fVar84);
                }
                lVar41 = 0;
                lVar32 = lVar16;
                lVar17 = lVar19;
                lVar21 = lVar40;
                do {
                  if (uVar54 != uVar37) {
                    uVar43 = 0;
                    do {
                      fVar102 = *(float *)(lVar21 + uVar43 * 4);
                      lVar48 = uVar43 * 4;
                      lVar55 = uVar43 * 4;
                      uVar43 = uVar43 + 1;
                      fVar98 = fVar98 + ABS((*(float *)(lVar32 + lVar48) +
                                            fVar129 * (float)(uVar43 + uVar37)) - fVar85) * fVar102
                               + ABS(((float)(lVar41 + uVar78) / (float)uVar23 +
                                     *(float *)(lVar17 + lVar55)) - fVar84) * fVar102;
                    } while ((uVar54 & 3) != uVar43);
                  }
                  lVar41 = lVar41 + 1;
                  lVar17 = lVar17 + uVar73;
                  lVar32 = lVar32 + uVar73;
                  lVar21 = lVar21 + uVar73;
                } while (lVar41 != 4);
                uVar78 = uVar78 + 4;
                fVar98 = fVar98 + auVar156._0_4_ + fVar98 + auVar156._4_4_ + 0.0 +
                                  auVar156._8_4_ + 0.0 + auVar156._12_4_ + 0.0;
                lVar19 = lVar19 + lVar46;
                lVar16 = lVar16 + lVar46;
                lVar40 = lVar40 + lVar46;
              } while (uVar78 < uVar77);
              uVar78 = uVar59 & 3;
              if ((uVar23 & 3) == 0) goto LAB_109527b74;
            }
            if (uVar78 < 2) {
              if (uVar77 < uVar59) {
                uVar78 = uVar54 & 0xfffffffc;
                uVar37 = uVar78 - 4;
                fVar100 = (float)uVar37;
                lVar46 = (uVar73 & 0x3fffffff0) + uVar77 * uVar54 * 4;
                lVar42 = lVar42 + lVar67 + lVar46;
                lVar46 = lVar24 + lVar38 + lVar46;
                lVar19 = lVar46 + lVar67;
                do {
                  if ((uVar6 & 0xfffffffc) == 0) {
                    auVar157 = ZEXT216(0);
                  }
                  else {
                    fVar102 = (float)(uVar77 + 1) / (float)uVar59;
                    puVar29 = (undefined8 *)(lVar70 + uVar37 * 4 + uVar77 * uVar54 * 4);
                    uVar169 = puVar29[1];
                    uVar35 = *puVar29;
                    lVar40 = (uVar77 * uVar54 + uVar37) * 4;
                    puVar29 = (undefined8 *)(lVar49 + lVar40);
                    uVar173 = puVar29[1];
                    uVar172 = *puVar29;
                    puVar29 = (undefined8 *)(lVar52 + lVar40);
                    uVar175 = puVar29[1];
                    uVar174 = *puVar29;
                    fVar143 = (float)uVar35;
                    fVar149 = (float)((ulong)uVar35 >> 0x20);
                    fVar148 = (float)uVar169;
                    fVar162 = (float)((ulong)uVar169 >> 0x20);
                    auVar157._0_4_ =
                         fVar85 + fVar143 * ABS(((fVar100 + 1.0) * fVar129 + (float)uVar172) -
                                                fVar85) +
                         fVar143 * ABS((fVar102 + (float)uVar174) - fVar84);
                    auVar157._4_4_ =
                         fVar85 + fVar149 * ABS(((fVar100 + 2.0) * fVar129 +
                                                (float)((ulong)uVar172 >> 0x20)) - fVar85) +
                         fVar149 * ABS((fVar102 + (float)((ulong)uVar174 >> 0x20)) - fVar84);
                    auVar157._8_4_ =
                         fVar85 + fVar148 * ABS(((fVar100 + 3.0) * fVar129 + (float)uVar173) -
                                                fVar85) +
                         fVar148 * ABS((fVar102 + (float)uVar175) - fVar84);
                    auVar157._12_4_ =
                         fVar85 + fVar162 * ABS(((fVar100 + 4.0) * fVar129 +
                                                (float)((ulong)uVar173 >> 0x20)) - fVar85) +
                         fVar162 * ABS((fVar102 + (float)((ulong)uVar175 >> 0x20)) - fVar84);
                  }
                  if (uVar54 != uVar78) {
                    uVar14 = 0;
                    do {
                      fVar102 = *(float *)(lVar46 + uVar14 * 4);
                      lVar40 = uVar14 * 4;
                      lVar16 = uVar14 * 4;
                      uVar14 = uVar14 + 1;
                      fVar98 = fVar98 + ABS((*(float *)(lVar19 + lVar40) +
                                            fVar129 * (float)(uVar14 + uVar78)) - fVar85) * fVar102
                               + ABS(((float)uVar77 / (float)uVar59 + *(float *)(lVar42 + lVar16)) -
                                     fVar84) * fVar102;
                    } while ((uVar54 & 3) != uVar14);
                  }
                  uVar77 = uVar77 + 1;
                  fVar98 = fVar98 + auVar157._0_4_ + fVar98 + auVar157._4_4_ + 0.0 +
                                    auVar157._8_4_ + 0.0 + auVar157._12_4_ + 0.0;
                  lVar42 = lVar42 + uVar73;
                  lVar19 = lVar19 + uVar73;
                  lVar46 = lVar46 + uVar73;
                } while (uVar77 != uVar59);
              }
            }
            else {
              uVar37 = uVar59 - (uVar78 & 1);
              if (uVar77 < uVar37) {
                uVar14 = uVar54 & 0xfffffffc;
                uVar43 = uVar14 - 4;
                fVar100 = (float)uVar43;
                lVar46 = lVar24 + (uVar73 & 0x3fffffff0) + lVar38;
                do {
                  lVar19 = 0;
                  do {
                    lVar40 = lVar19 + 1;
                    fVar102 = (float)(lVar40 + uVar77) / (float)uVar23;
                    *(float *)(&uStack_f8 + lVar19 * 2) = fVar102;
                    *(float *)((long)&uStack_f8 + lVar19 * 0x10 + 4) = fVar102;
                    *(float *)(&uStack_100 + lVar19 * 2) = fVar102;
                    *(float *)((long)&uStack_100 + lVar19 * 0x10 + 4) = fVar102;
                    lVar19 = lVar40;
                  } while (lVar40 != 2);
                  if ((uVar6 & 0xfffffffc) == 0) {
                    auVar158 = ZEXT216(0);
                  }
                  else {
                    lVar19 = (uVar77 | 1) * uVar54;
                    pfVar20 = (float *)(lVar70 + uVar43 * 4 + lVar19 * 4);
                    lVar19 = (lVar19 + uVar43) * 4;
                    puVar29 = (undefined8 *)(lVar49 + lVar19);
                    uVar169 = puVar29[1];
                    uVar35 = *puVar29;
                    puVar29 = (undefined8 *)(lVar52 + lVar19);
                    uVar173 = puVar29[1];
                    uVar172 = *puVar29;
                    auVar158._0_4_ =
                         fVar85 + *pfVar20 *
                                  ABS(((fVar100 + 1.0) * fVar129 + (float)uVar35) - fVar85) +
                         *pfVar20 * ABS(((float)uVar172 + (float)uStack_f0) - fVar84);
                    auVar158._4_4_ =
                         fVar85 + pfVar20[1] *
                                  ABS(((fVar100 + 2.0) * fVar129 + (float)((ulong)uVar35 >> 0x20)) -
                                      fVar85) +
                         pfVar20[1] *
                         ABS(((float)((ulong)uVar172 >> 0x20) + (float)((ulong)uStack_f0 >> 0x20)) -
                             fVar84);
                    auVar158._8_4_ =
                         fVar85 + pfVar20[2] *
                                  ABS(((fVar100 + 3.0) * fVar129 + (float)uVar169) - fVar85) +
                         pfVar20[2] * ABS(((float)uVar173 + (float)uStack_e8) - fVar84);
                    auVar158._12_4_ =
                         fVar85 + pfVar20[3] *
                                  ABS(((fVar100 + 4.0) * fVar129 + (float)((ulong)uVar169 >> 0x20))
                                      - fVar85) +
                         pfVar20[3] *
                         ABS(((float)((ulong)uVar173 >> 0x20) + (float)((ulong)uStack_e8 >> 0x20)) -
                             fVar84);
                  }
                  uVar18 = 0;
                  bVar44 = true;
                  do {
                    bVar30 = bVar44;
                    if (uVar54 != uVar14) {
                      uVar51 = 0;
                      lVar19 = uVar73 * (uVar77 + uVar18);
                      do {
                        fVar102 = *(float *)(lVar46 + lVar19 + uVar51 * 4);
                        lVar40 = uVar51 * 4;
                        lVar16 = uVar51 * 4;
                        uVar51 = uVar51 + 1;
                        fVar98 = fVar98 + ABS((*(float *)(lVar46 + lVar67 + lVar19 + lVar40) +
                                              fVar129 * (float)(uVar51 + uVar14)) - fVar85) *
                                          fVar102 +
                                 ABS(((float)(uVar18 | uVar77) / (float)uVar23 +
                                     *(float *)(lVar42 + lVar67 + (uVar73 & 0x3fffffff0) + lVar19 +
                                               lVar16)) - fVar84) * fVar102;
                      } while ((uVar54 & 3) != uVar51);
                    }
                    uVar18 = 1;
                    bVar44 = false;
                  } while (bVar30);
                  fVar98 = fVar98 + auVar158._0_4_ + fVar98 + auVar158._4_4_ + 0.0 +
                                    auVar158._8_4_ + 0.0 + auVar158._12_4_ + 0.0;
                  uVar77 = uVar77 + 2;
                } while (uVar77 < uVar37);
              }
              if ((uVar78 & 1) != 0) {
                uVar78 = uVar54 & 0xfffffffc;
                if ((uVar6 & 0xfffffffc) == 0) {
                  auVar142 = ZEXT216(0);
                }
                else {
                  uVar77 = uVar78 - 4;
                  fVar100 = (float)uVar77;
                  fVar102 = (float)(uVar37 + 1) / (float)uVar23;
                  puVar29 = (undefined8 *)(lVar70 + (uVar37 & 0xffffffff) * uVar54 * 4 + uVar77 * 4)
                  ;
                  uVar169 = puVar29[1];
                  uVar35 = *puVar29;
                  lVar70 = (uVar77 + (uVar37 & 0xffffffff) * uVar54) * 4;
                  puVar29 = (undefined8 *)(lVar49 + lVar70);
                  uVar173 = puVar29[1];
                  uVar172 = *puVar29;
                  puVar29 = (undefined8 *)(lVar52 + lVar70);
                  uVar175 = puVar29[1];
                  uVar174 = *puVar29;
                  fVar143 = (float)uVar35;
                  fVar149 = (float)((ulong)uVar35 >> 0x20);
                  fVar148 = (float)uVar169;
                  fVar162 = (float)((ulong)uVar169 >> 0x20);
                  auVar142._0_4_ =
                       fVar85 + fVar143 * ABS(((fVar100 + 1.0) * fVar129 + (float)uVar172) - fVar85)
                       + fVar143 * ABS((fVar102 + (float)uVar174) - fVar84);
                  auVar142._4_4_ =
                       fVar85 + fVar149 * ABS(((fVar100 + 2.0) * fVar129 +
                                              (float)((ulong)uVar172 >> 0x20)) - fVar85) +
                       fVar149 * ABS((fVar102 + (float)((ulong)uVar174 >> 0x20)) - fVar84);
                  auVar142._8_4_ =
                       fVar85 + fVar148 * ABS(((fVar100 + 3.0) * fVar129 + (float)uVar173) - fVar85)
                       + fVar148 * ABS((fVar102 + (float)uVar175) - fVar84);
                  auVar142._12_4_ =
                       fVar85 + fVar162 * ABS(((fVar100 + 4.0) * fVar129 +
                                              (float)((ulong)uVar173 >> 0x20)) - fVar85) +
                       fVar162 * ABS((fVar102 + (float)((ulong)uVar175 >> 0x20)) - fVar84);
                }
                if (uVar54 != uVar78) {
                  lVar70 = 0;
                  lVar49 = (uVar73 & 0x3fffffff0) + (uVar37 & 0xffffffff) * uVar54 * 4;
                  lVar52 = lVar24 + lVar38 + lVar49;
                  do {
                    fVar100 = *(float *)(lVar52 + lVar70 * 4);
                    lVar46 = lVar70 * 4;
                    lVar19 = lVar70 * 4;
                    lVar70 = lVar70 + 1;
                    fVar98 = fVar98 + ABS((*(float *)(lVar52 + lVar67 + lVar46) +
                                          fVar129 * (float)(lVar70 + uVar78)) - fVar85) * fVar100 +
                             ABS(((float)uVar37 / (float)uVar23 +
                                 *(float *)(lVar42 + lVar67 + lVar49 + lVar19)) - fVar84) * fVar100;
                  } while (uVar54 - uVar78 != lVar70);
                }
                goto LAB_109527b5c;
              }
            }
          }
LAB_109527b74:
          pfVar80[2] = fVar98 * 0.5;
          if ((cVar2 != '\0') && (lVar24 != 0)) {
            if (uVar23 == 0) {
              fVar129 = 0.0;
            }
            else {
              if (uVar23 < 4) {
                uVar78 = 0;
                fVar129 = 0.0;
                uVar73 = uVar59;
              }
              else {
                uVar73 = 0;
                uVar78 = uVar59 & 0xfffffffc;
                pfVar20 = (float *)(lVar24 + lVar38);
                pfVar27 = (float *)(lVar24 + (uVar54 * 4 & 0x3fffffff0) + lVar38);
                pfVar62 = pfVar27 + uVar63;
                fVar129 = 0.0;
                do {
                  if ((uVar6 & 0xfffffffc) == 0) {
                    auVar114 = ZEXT216(0);
                  }
                  else {
                    uVar77 = 0;
                    auVar114 = ZEXT216(0);
                    pfVar61 = pfVar20;
                    do {
                      pfVar26 = pfVar61 + uVar63;
                      pfVar56 = pfVar61 + uVar54;
                      pfVar60 = pfVar61 + uVar54 + uVar63;
                      fVar84 = auVar114._4_4_;
                      fVar85 = auVar114._8_4_;
                      fVar98 = auVar114._12_4_;
                      pfVar7 = pfVar61 + uVar54 * 2;
                      pfVar8 = pfVar61 + uVar54 * 2 + uVar63;
                      auVar94 = *(undefined1 (*) [16])(pfVar61 + uVar54 * 3);
                      auVar90 = *(undefined1 (*) [16])(pfVar61 + uVar54 * 3 + uVar63);
                      auVar114._0_4_ =
                           auVar114._0_4_ + *pfVar61 * *pfVar26 + *pfVar56 * *pfVar60 +
                           *pfVar7 * *pfVar8 + auVar94._0_4_ * auVar90._0_4_;
                      auVar114._4_4_ =
                           fVar84 + pfVar61[1] * pfVar26[1] + pfVar56[1] * pfVar60[1] +
                           pfVar7[1] * pfVar8[1] + auVar94._4_4_ * auVar90._4_4_;
                      auVar114._8_4_ =
                           fVar85 + pfVar61[2] * pfVar26[2] + pfVar56[2] * pfVar60[2] +
                           pfVar7[2] * pfVar8[2] + auVar94._8_4_ * auVar90._8_4_;
                      auVar114._12_4_ =
                           fVar98 + pfVar61[3] * pfVar26[3] + pfVar56[3] * pfVar60[3] +
                           pfVar7[3] * pfVar8[3] + auVar94._12_4_ * auVar90._12_4_;
                      uVar77 = uVar77 + 4;
                      pfVar61 = pfVar61 + 4;
                    } while (uVar77 < (uVar54 & 0xfffffffc));
                  }
                  lVar70 = 0;
                  fVar84 = 0.0;
                  pfVar26 = pfVar27;
                  pfVar61 = pfVar62;
                  do {
                    pfVar56 = pfVar26;
                    pfVar60 = pfVar61;
                    uVar77 = uVar54 & 3;
                    if (uVar54 != (uVar54 & 0xfffffffc)) {
                      do {
                        fVar84 = fVar84 + *pfVar60 * *pfVar56;
                        uVar77 = uVar77 - 1;
                        pfVar56 = pfVar56 + 1;
                        pfVar60 = pfVar60 + 1;
                      } while (uVar77 != 0);
                    }
                    lVar70 = lVar70 + 1;
                    pfVar61 = pfVar61 + uVar54;
                    pfVar26 = pfVar26 + uVar54;
                  } while (lVar70 != 4);
                  uVar73 = uVar73 + 4;
                  fVar129 = fVar129 + fVar84 + auVar114._0_4_ + auVar114._4_4_ +
                                               auVar114._8_4_ + auVar114._12_4_;
                  pfVar20 = pfVar20 + uVar54 * 4;
                  pfVar62 = pfVar62 + uVar54 * 4;
                  pfVar27 = pfVar27 + uVar54 * 4;
                } while (uVar73 < uVar78);
                uVar73 = uVar59 & 3;
                if ((uVar23 & 3) == 0) goto LAB_109527f6c;
              }
              if (uVar73 < 2) {
                if (uVar78 < uVar59) {
                  pauVar72 = (undefined1 (*) [16])(lVar24 + lVar38 + uVar78 * uVar54 * 4);
                  pfVar20 = (float *)(lVar24 + lVar38 +
                                     (uVar54 * 4 & 0x3fffffff0) + uVar78 * uVar54 * 4);
                  do {
                    if ((uVar6 & 0xfffffffc) == 0) {
                      auVar115 = ZEXT216(0);
                    }
                    else {
                      uVar73 = 0;
                      pauVar45 = pauVar72;
                      auVar94 = ZEXT216(0);
                      do {
                        pfVar27 = (float *)(*pauVar45 + lVar58);
                        auVar90 = *pauVar45;
                        auVar115._0_4_ = auVar94._0_4_ + auVar90._0_4_ * *pfVar27;
                        auVar115._4_4_ = auVar94._4_4_ + auVar90._4_4_ * pfVar27[1];
                        auVar115._8_4_ = auVar94._8_4_ + auVar90._8_4_ * pfVar27[2];
                        auVar115._12_4_ = auVar94._12_4_ + auVar90._12_4_ * pfVar27[3];
                        uVar73 = uVar73 + 4;
                        pauVar45 = pauVar45 + 1;
                        auVar94 = auVar115;
                      } while (uVar73 < (uVar54 & 0xfffffffc));
                    }
                    fVar84 = 0.0;
                    pfVar27 = pfVar20;
                    uVar73 = uVar54 & 3;
                    if (uVar54 != (uVar54 & 0xfffffffc)) {
                      do {
                        fVar84 = fVar84 + pfVar27[uVar63] * *pfVar27;
                        uVar73 = uVar73 - 1;
                        pfVar27 = pfVar27 + 1;
                      } while (uVar73 != 0);
                    }
                    fVar129 = fVar129 + fVar84 + auVar115._0_4_ + auVar115._4_4_ +
                                                 auVar115._8_4_ + auVar115._12_4_;
                    uVar78 = uVar78 + 1;
                    pauVar72 = (undefined1 (*) [16])(*pauVar72 + uVar54 * 4);
                    pfVar20 = pfVar20 + uVar54;
                  } while (uVar78 != uVar59);
                }
              }
              else {
                uVar59 = uVar59 - (uVar73 & 1);
                if (uVar78 < uVar59) {
                  lVar49 = uVar54 + uVar78 * uVar54;
                  lVar70 = lVar24 + lVar58 + lVar49 * 4;
                  lVar46 = uVar54 * 8;
                  lVar49 = lVar24 + lVar49 * 4;
                  lVar42 = lVar24 + lVar58 + uVar78 * uVar54 * 4;
                  lVar52 = lVar24 + uVar78 * uVar54 * 4;
                  do {
                    if ((uVar6 & 0xfffffffc) == 0) {
                      auVar116 = ZEXT216(0);
                    }
                    else {
                      uVar77 = 0;
                      auVar116 = ZEXT216(0);
                      lVar41 = lVar52;
                      lVar16 = lVar42;
                      lVar40 = lVar49;
                      lVar19 = lVar70;
                      do {
                        pfVar20 = (float *)(lVar41 + lVar38);
                        pfVar27 = (float *)(lVar16 + lVar38);
                        fVar84 = auVar116._4_4_;
                        fVar85 = auVar116._8_4_;
                        fVar98 = auVar116._12_4_;
                        pfVar62 = (float *)(lVar40 + lVar38);
                        auVar94 = *(undefined1 (*) [16])(lVar19 + lVar38);
                        uVar77 = uVar77 + 4;
                        lVar19 = lVar19 + 0x10;
                        auVar116._0_4_ =
                             auVar116._0_4_ + *pfVar20 * *pfVar27 + *pfVar62 * auVar94._0_4_;
                        auVar116._4_4_ =
                             fVar84 + pfVar20[1] * pfVar27[1] + pfVar62[1] * auVar94._4_4_;
                        auVar116._8_4_ =
                             fVar85 + pfVar20[2] * pfVar27[2] + pfVar62[2] * auVar94._8_4_;
                        auVar116._12_4_ =
                             fVar98 + pfVar20[3] * pfVar27[3] + pfVar62[3] * auVar94._12_4_;
                        lVar40 = lVar40 + 0x10;
                        lVar16 = lVar16 + 0x10;
                        lVar41 = lVar41 + 0x10;
                      } while (uVar77 < (uVar54 & 0xfffffffc));
                    }
                    lVar19 = 0;
                    fVar84 = 0.0;
                    bVar44 = true;
                    do {
                      bVar30 = bVar44;
                      if (uVar54 != (uVar54 & 0xfffffffc)) {
                        pfVar20 = (float *)(lVar24 + (uVar54 * 4 & 0x3fffffff0) + lVar38 +
                                           uVar54 * 4 * (uVar78 + lVar19));
                        uVar77 = uVar54 & 3;
                        do {
                          fVar84 = fVar84 + pfVar20[uVar63] * *pfVar20;
                          pfVar20 = pfVar20 + 1;
                          uVar77 = uVar77 - 1;
                        } while (uVar77 != 0);
                      }
                      lVar19 = 1;
                      bVar44 = false;
                    } while (bVar30);
                    uVar78 = uVar78 + 2;
                    lVar70 = lVar70 + lVar46;
                    fVar129 = fVar129 + fVar84 + auVar116._0_4_ + auVar116._4_4_ +
                                                 auVar116._8_4_ + auVar116._12_4_;
                    lVar49 = lVar49 + lVar46;
                    lVar42 = lVar42 + lVar46;
                    lVar52 = lVar52 + lVar46;
                  } while (uVar78 < uVar59);
                }
                if ((uVar73 & 1) != 0) {
                  if ((uVar6 & 0xfffffffc) == 0) {
                    auVar117 = ZEXT216(0);
                  }
                  else {
                    uVar73 = 0;
                    pauVar72 = (undefined1 (*) [16])
                               (lVar24 + lVar38 + (uVar59 & 0xffffffff) * uVar54 * 4);
                    auVar94 = ZEXT216(0);
                    do {
                      pfVar20 = (float *)(*pauVar72 + lVar58);
                      auVar90 = *pauVar72;
                      auVar117._0_4_ = auVar94._0_4_ + auVar90._0_4_ * *pfVar20;
                      auVar117._4_4_ = auVar94._4_4_ + auVar90._4_4_ * pfVar20[1];
                      auVar117._8_4_ = auVar94._8_4_ + auVar90._8_4_ * pfVar20[2];
                      auVar117._12_4_ = auVar94._12_4_ + auVar90._12_4_ * pfVar20[3];
                      uVar73 = uVar73 + 4;
                      pauVar72 = pauVar72 + 1;
                      auVar94 = auVar117;
                    } while (uVar73 < (uVar54 & 0xfffffffc));
                  }
                  fVar84 = 0.0;
                  lVar70 = uVar54 - (uVar54 & 0xfffffffc);
                  if (lVar70 != 0) {
                    pfVar20 = (float *)(lVar24 + lVar38 +
                                       (uVar54 & 0xfffffffc) * 4 +
                                       (uVar59 & 0xffffffff) * uVar54 * 4);
                    do {
                      fVar84 = fVar84 + pfVar20[uVar63] * *pfVar20;
                      pfVar20 = pfVar20 + 1;
                      lVar70 = lVar70 + -1;
                    } while (lVar70 != 0);
                  }
                  fVar129 = fVar129 + fVar84 + auVar117._0_4_ + auVar117._4_4_ +
                                               auVar117._8_4_ + auVar117._12_4_;
                }
              }
            }
LAB_109527f6c:
            pfVar80[3] = fVar129;
          }
          pfStack_118[(uStack_228 & 0xffffffff) * 5 + 4] = *(float *)(lVar81 + 500);
          uStack_228._4_4_ = uStack_228._4_4_ + uVar3;
          uStack_228 = CONCAT44(uStack_228._4_4_,(int)uStack_228 + 1);
          uVar76 = (ulong)((int)uVar76 + uVar4 * uVar3);
        } while (uStack_228._4_4_ < *(uint *)(lVar57 + 0x38));
      }
      param_1[0x2b] = 0;
      param_1[0x2a] = 0;
      param_1[0x2d] = 0;
      param_1[0x2c] = 0;
      param_1[0x27] = 0;
      param_1[0x26] = 0;
      param_1[0x29] = 0;
      param_1[0x28] = 0;
      *(undefined8 *)((long)param_1 + 0x174) = 0;
      *(undefined8 *)((long)param_1 + 0x16c) = 0;
      param_1[0x23] = 0;
      param_1[0x22] = 0;
      param_1[0x25] = 0;
      param_1[0x24] = 0;
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      param_1[0x21] = 0;
      param_1[0x20] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x13] = 0;
      param_1[0x12] = 0;
      param_1[0x15] = 0;
      param_1[0x14] = 0;
      param_1[0x11] = 0;
      param_1[0x10] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      param_1[0xd] = 0;
      param_1[0xc] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      puVar75 = param_1 + 0x1a;
      param_1[0x1b] = 0;
      *puVar75 = 0;
      puVar15 = param_1 + 0xe;
      param_1[0xf] = 0;
      *puVar15 = 0;
      *(undefined4 *)(param_1 + 6) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x19) = 0x42ff0000;
      puVar36 = param_1 + 7;
      param_1[8] = 0;
      *puVar36 = 0;
      param_1[10] = 0;
      param_1[9] = 0;
      *(undefined4 *)(param_1 + 0xd) = 0x42ff0000;
      *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
      piVar33 = (int *)((long)param_1 + 0x6c);
      *(undefined8 *)((long)param_1 + 0x74) = 0;
      piVar33[0] = 0;
      piVar33[1] = 0;
      *(undefined8 *)((long)param_1 + 0x84) = 0;
      *(undefined8 *)((long)param_1 + 0x7c) = 0;
      *(undefined8 *)((long)param_1 + 0x94) = 0;
      *(undefined8 *)((long)param_1 + 0x8c) = 0;
      param_1[0x14] = 0;
      param_1[0x13] = 0;
      param_1[0x15] = puVar15;
      puVar28 = param_1 + 0x17;
      *puVar28 = 0;
      param_1[0x16] = puVar28;
      param_1[0x18] = 0;
      piVar34 = (int *)((long)param_1 + 0xcc);
      *(undefined8 *)((long)param_1 + 0xd4) = 0;
      piVar34[0] = 0;
      piVar34[1] = 0;
      *(undefined8 *)((long)param_1 + 0xe4) = 0;
      *(undefined8 *)((long)param_1 + 0xdc) = 0;
      *(undefined8 *)((long)param_1 + 0xf4) = 0;
      *(undefined8 *)((long)param_1 + 0xec) = 0;
      param_1[0x20] = 0;
      param_1[0x1f] = 0;
      param_1[0x21] = puVar75;
      puVar29 = param_1 + 0x23;
      param_1[0x22] = puVar29;
      param_1[0x27] = 0;
      param_1[0x26] = 0;
      param_1[0x29] = 0;
      param_1[0x28] = 0;
      param_1[0x23] = 0;
      param_1[0x24] = 0;
      *(undefined1 *)(param_1 + 0x25) = 0;
      *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
      *(undefined4 *)((long)param_1 + 0x17c) = 0;
      *(undefined1 *)(param_1 + 0x30) = 1;
      *(float *)(param_1 + 0xc) = fVar87;
      *(undefined1 *)((long)param_1 + 100) = 1;
      if (pfStack_110 != pfStack_118) {
        lVar57 = 0;
        lVar67 = 0;
        uVar53 = 0;
        do {
          pfVar80 = pfStack_118;
          uStack_100 = (float *)(*(long *)(*(long *)(param_2 + 0x18) + 0x1b8) + lVar57);
          puVar13 = param_1 + 2;
          FUN_1094e1a28(puVar13,uStack_100,&UNK_10dd5b8f9,&uStack_100,&puStack_130);
          puVar25 = (undefined8 *)((long)pfVar80 + lVar67);
          puVar13[5] = *puVar25;
          uVar35 = puVar25[1];
          *(undefined4 *)(puVar13 + 7) = *(undefined4 *)(puVar25 + 2);
          puVar13[6] = uVar35;
          uVar53 = uVar53 + 1;
          lVar67 = lVar67 + 0x14;
          lVar57 = lVar57 + 0x18;
        } while (uVar53 < (ulong)(((long)pfStack_110 - (long)pfStack_118 >> 2) * -0x3333333333333333
                                 ));
      }
      pfVar80 = pfStack_118;
      uStack_100 = *(float **)(*(long *)(param_2 + 0x18) + 0x1b8);
      puVar13 = param_1 + 2;
      FUN_1094e1a28(puVar13,uStack_100,&UNK_10dd5b8f9,&uStack_100,&puStack_130);
      lVar67 = param_3;
      FUN_10938e710(param_3,*(long *)(param_2 + 0x18) + 0xf8);
      if (lVar67 == 0) {
        FUN_109262df8(&UNK_10f639994);
        goto LAB_1095289f8;
      }
      FUN_10952a9f0(&puStack_130,lVar67 + 0x28,puVar13 + 5);
      lVar67 = param_3;
      FUN_10937a848(param_3,*(long *)(param_2 + 0x18) + 0x110);
      lVar57 = *(long *)(param_2 + 0x18);
      if (lVar67 == 0) {
        uStack_100 = (float *)CONCAT44((pfStack_118 + (long)*(int *)(lVar57 + 0x1ec) * 5)[1] -
                                       (pfStack_118 + (long)*(int *)(lVar57 + 0x1e8) * 5)[1],
                                       pfStack_118[(long)*(int *)(lVar57 + 0x1ec) * 5] -
                                       pfStack_118[(long)*(int *)(lVar57 + 0x1e8) * 5]);
        uStack_f8 = (float *)((ulong)uStack_f8 & 0xffffffff00000000);
        lStack_140 = 0;
        uStack_138 = 0;
        lStack_148 = 0;
        FUN_1093c71a0(&lStack_148,&uStack_100,(long)&uStack_f8 + 4,3);
LAB_10952823c:
        if (*(char *)(param_2 + 0x57) < '\0') {
          if (*(long *)(param_2 + 0x48) != 0) goto LAB_109528254;
        }
        else if (*(char *)(param_2 + 0x57) != '\0') {
LAB_109528254:
          lVar67 = param_3;
          FUN_10938e710(param_3,param_2 + 0x40);
          if (lVar67 == 0) {
            FUN_109262df8(&UNK_10f639994);
            goto LAB_1095289f8;
          }
          FUN_10952a9f0(&uStack_100,lVar67 + 0x28,puVar13 + 5);
          fVar129 = *uStack_100;
          uStack_f8 = uStack_100;
          __ZdlPv();
          fVar87 = 1.0 - fVar129;
          if (*(char *)(param_2 + 0x58) == '\0') {
            fVar87 = fVar129;
          }
          *(float *)(param_1 + 0x25) = fVar87;
          *(undefined1 *)((long)param_1 + 300) = 1;
        }
        lVar67 = *(long *)(param_2 + 0x18);
        if (*(char *)(lVar67 + 0x157) < '\0') {
          if (*(long *)(lVar67 + 0x148) != 0) goto LAB_1095282c4;
        }
        else if (*(char *)(lVar67 + 0x157) != '\0') {
LAB_1095282c4:
          lVar57 = param_3;
          FUN_10938e710(param_3,lVar67 + 0x140);
          if (lVar57 == 0) {
            FUN_109262df8(&UNK_10f639994);
            goto LAB_1095289f8;
          }
          FUN_10952a9f0(&pfStack_160,lVar57 + 0x28,puVar13 + 5);
          pfVar62 = pfStack_160;
          pfVar27 = pfStack_160;
          for (pfVar20 = pfStack_160; pfVar20 != pfStack_158; pfVar20 = pfVar20 + 1) {
            pfStack_160 = pfVar27;
            fVar87 = (float)_expf();
            *pfVar20 = 1.0 / (fVar87 + 1.0);
            pfVar27 = pfStack_160;
          }
          lVar67 = *(long *)(param_2 + 0x18);
          lVar57 = *(long *)(lVar67 + 0x1a0);
          if ((*(long *)(lVar67 + 0x1a8) - lVar57 >> 3) * -0x5555555555555555 -
              ((long)pfStack_158 - (long)pfVar62 >> 2) != 0) {
            FUN_10938ce40(&UNK_10f572fd9);
            goto LAB_1095289f8;
          }
          pfStack_160 = pfVar62;
          if (*(long *)(lVar67 + 0x1a8) != lVar57) {
            uVar53 = 0;
            pfVar20 = (float *)(param_1 + 0x26);
            plVar31 = param_1 + 0x28;
            pfStack_160 = pfVar27;
            do {
              plVar64 = (long *)(lVar57 + uVar53 * 0x18);
              fVar87 = pfStack_160[uVar53];
              pfVar27 = pfVar20;
              func_0x000107c31944(pfVar20,plVar64);
              pfVar62 = (float *)param_1[0x27];
              if (pfVar62 != (float *)0x0) {
                uVar63 = (long)pfVar62 - 1;
                if (((ulong)pfVar62 & uVar63) == 0) {
                  pfVar80 = (float *)(uVar63 & (ulong)pfVar27);
                }
                else {
                  pfVar80 = pfVar27;
                  if (pfVar62 <= pfVar27) {
                    uVar76 = 0;
                    if (pfVar62 != (float *)0x0) {
                      uVar76 = (ulong)pfVar27 / (ulong)pfVar62;
                    }
                    pfVar80 = (float *)((long)pfVar27 - uVar76 * (long)pfVar62);
                  }
                }
                puVar25 = *(undefined8 **)(*(long *)pfVar20 + (long)pfVar80 * 8);
                if (puVar25 != (undefined8 *)0x0) {
                  for (pfVar61 = (float *)*puVar25; pfVar61 != (float *)0x0;
                      pfVar61 = *(float **)pfVar61) {
                    pfVar26 = *(float **)(pfVar61 + 2);
                    if (pfVar26 == pfVar27) {
                      pfVar26 = pfVar20;
                      func_0x000104c4fbc4(pfVar20,pfVar61 + 4,plVar64);
                      if (((ulong)pfVar26 & 1) != 0) goto LAB_10952857c;
                    }
                    else {
                      if (((ulong)pfVar62 & uVar63) == 0) {
                        pfVar26 = (float *)((ulong)pfVar26 & uVar63);
                      }
                      else if (pfVar62 <= pfVar26) {
                        uVar76 = 0;
                        if (pfVar62 != (float *)0x0) {
                          uVar76 = (ulong)pfVar26 / (ulong)pfVar62;
                        }
                        pfVar26 = (float *)((long)pfVar26 - uVar76 * (long)pfVar62);
                      }
                      if (pfVar26 != pfVar80) break;
                    }
                  }
                }
              }
              pfVar61 = (float *)0x30;
              __Znwm();
              uStack_f0 = 0;
              pfVar61[0] = 0.0;
              pfVar61[1] = 0.0;
              *(float **)(pfVar61 + 2) = pfVar27;
              uStack_100 = pfVar61;
              uStack_f8 = pfVar20;
              if (*(char *)((long)plVar64 + 0x17) < '\0') {
                func_0x000107c3192c(pfVar61 + 4,*plVar64,plVar64[1]);
              }
              else {
                lVar67 = *plVar64;
                lVar57 = plVar64[1];
                *(long *)(pfVar61 + 8) = plVar64[2];
                *(long *)(pfVar61 + 6) = lVar57;
                *(long *)(pfVar61 + 4) = lVar67;
              }
              pfVar61[10] = 0.0;
              pfVar61[0xb] = 0.0;
              uStack_f0 = CONCAT71(uStack_f0._1_7_,1);
              if ((pfVar62 == (float *)0x0) ||
                 (*(float *)(param_1 + 0x2a) * (float)pfVar62 < (float)(param_1[0x29] + 1))) {
                uVar63 = 1;
                if ((float *)0x2 < pfVar62) {
                  uVar63 = (ulong)(((ulong)pfVar62 & (long)pfVar62 - 1U) != 0);
                }
                uVar63 = uVar63 | (long)pfVar62 << 1;
                uVar76 = (ulong)((float)(param_1[0x29] + 1) / *(float *)(param_1 + 0x2a));
                if (uVar63 <= uVar76) {
                  uVar63 = uVar76;
                }
                FUN_1094e0244(pfVar20,uVar63);
                pfVar62 = (float *)param_1[0x27];
                if (((ulong)pfVar62 & (long)pfVar62 - 1U) == 0) {
                  pfVar80 = (float *)((long)pfVar62 - 1U & (ulong)pfVar27);
                }
                else {
                  pfVar80 = pfVar27;
                  if (pfVar62 <= pfVar27) {
                    uVar63 = 0;
                    if (pfVar62 != (float *)0x0) {
                      uVar63 = (ulong)pfVar27 / (ulong)pfVar62;
                    }
                    pfVar80 = (float *)((long)pfVar27 - uVar63 * (long)pfVar62);
                  }
                }
              }
              lVar67 = *(long *)pfVar20;
              plVar64 = *(long **)(lVar67 + (long)pfVar80 * 8);
              if (plVar64 == (long *)0x0) {
                *(long *)uStack_100 = *plVar31;
                *plVar31 = (long)uStack_100;
                *(long **)(lVar67 + (long)pfVar80 * 8) = plVar31;
                if (*(long *)uStack_100 != 0) {
                  pfVar27 = *(float **)(*(long *)uStack_100 + 8);
                  if (((ulong)pfVar62 & (long)pfVar62 - 1U) == 0) {
                    pfVar27 = (float *)((ulong)pfVar27 & (long)pfVar62 - 1U);
                  }
                  else if (pfVar62 <= pfVar27) {
                    uVar63 = 0;
                    if (pfVar62 != (float *)0x0) {
                      uVar63 = (ulong)pfVar27 / (ulong)pfVar62;
                    }
                    pfVar27 = (float *)((long)pfVar27 - uVar63 * (long)pfVar62);
                  }
                  *(float **)(*(long *)pfVar20 + (long)pfVar27 * 8) = uStack_100;
                }
              }
              else {
                *(long *)uStack_100 = *plVar64;
                *plVar64 = (long)uStack_100;
              }
              param_1[0x29] = param_1[0x29] + 1;
              pfVar61 = uStack_100;
LAB_10952857c:
              pfVar61[10] = fVar87;
              *(undefined2 *)(pfVar61 + 0xb) = 0;
              *(undefined1 *)((long)pfVar61 + 0x2e) = 0;
              uVar53 = uVar53 + 1;
              lVar67 = *(long *)(param_2 + 0x18);
              lVar57 = *(long *)(lVar67 + 0x1a0);
            } while (uVar53 < (ulong)((*(long *)(lVar67 + 0x1a8) - lVar57 >> 3) *
                                     -0x5555555555555555));
          }
          if (pfStack_160 != (float *)0x0) {
            __ZdlPv(pfStack_160);
            lVar67 = *(long *)(param_2 + 0x18);
          }
        }
        uVar35 = *puStack_130;
        *param_1 = CONCAT44((float)((ulong)puVar13[5] >> 0x20) +
                            (float)((ulong)uVar35 >> 0x20) * -0.5,
                            (float)puVar13[5] + (float)uVar35 * -0.5);
        param_1[1] = uVar35;
        lVar57 = *(long *)(lVar67 + 0x1d0);
        if (*(long *)(lVar67 + 0x1d8) != lVar57) {
          lVar58 = 0;
          lVar67 = 0;
          uVar53 = 0;
          do {
            uStack_170 = *(undefined8 *)(lStack_148 + lVar58);
            fVar85 = *(float *)((undefined8 *)(lStack_148 + lVar58) + 1);
            fVar129 = (float)uStack_170;
            fVar84 = (float)((ulong)uStack_170 >> 0x20);
            fVar87 = SQRT(fVar84 * fVar84 + fVar129 * fVar129 + fVar85 * fVar85);
            if (1e-07 < fVar87) {
              uStack_170 = CONCAT44(fVar84 / fVar87,fVar129 / fVar87);
              fVar85 = fVar85 / fVar87;
            }
            uStack_100 = (float *)(lVar57 + lVar67);
            puVar13 = puVar36;
            FUN_1094da208(puVar36,uStack_100,&UNK_10dd5b8f9,&uStack_100,&pfStack_160);
            puVar13[5] = uStack_170;
            *(float *)(puVar13 + 6) = fVar85;
            uVar53 = uVar53 + 1;
            lVar57 = *(long *)(*(long *)(param_2 + 0x18) + 0x1d0);
            lVar67 = lVar67 + 0x18;
            lVar58 = lVar58 + 0xc;
          } while (uVar53 < (ulong)((*(long *)(*(long *)(param_2 + 0x18) + 0x1d8) - lVar57 >> 3) *
                                   -0x5555555555555555));
        }
        FUN_10952aa6c(&uStack_100,param_2,param_3);
        if (param_1[0x14] != 0) {
          piVar1 = (int *)(param_1[0x14] + 0x14);
          do {
            iVar86 = *piVar1;
            cVar2 = '\x01';
            bVar44 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar44) {
              *piVar1 = iVar86 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar86 + -1 == 0) {
            func_0x000109a848d4(param_1 + 0xd);
          }
        }
        if (0 < *(int *)((long)param_1 + 0x6c)) {
          lVar67 = 0;
          lVar57 = param_1[0x15];
          do {
            *(undefined4 *)(lVar57 + lVar67 * 4) = 0;
            lVar67 = lVar67 + 1;
          } while (lVar67 < *piVar33);
        }
        param_1[0xe] = uStack_f8;
        param_1[0xd] = uStack_100;
        param_1[0x10] = uStack_e8;
        param_1[0xf] = uStack_f0;
        param_1[0x12] = uStack_d8;
        param_1[0x11] = uStack_e0;
        param_1[0x14] = uStack_c8;
        param_1[0x13] = uStack_d0;
        puVar36 = (undefined8 *)param_1[0x16];
        iVar86 = uStack_100._4_4_;
        if (puVar36 != puVar28) {
          if (puVar36 != (undefined8 *)0x0) {
            _free(puVar36[-1]);
          }
          param_1[0x15] = puVar15;
          param_1[0x16] = puVar28;
          puVar36 = puVar28;
          iVar86 = uStack_100._4_4_;
        }
        if (iVar86 < 3) {
          puVar28 = (undefined8 *)((ulong)&uStack_100 | 4);
          *puVar36 = *puStack_b8;
          puVar36[1] = puStack_b8[1];
          uStack_100 = (float *)CONCAT44(uStack_100._4_4_,0x42ff0000);
          puVar28[1] = 0;
          *puVar28 = 0;
          puVar28[3] = 0;
          puVar28[2] = 0;
          puVar28[5] = 0;
          puVar28[4] = 0;
          *(undefined8 *)((long)puVar28 + 0x34) = 0;
          *(undefined8 *)((long)puVar28 + 0x2c) = 0;
          if (puStack_b8 != auStack_b0) {
            _free(puStack_b8[-1]);
          }
        }
        else {
          param_1[0x15] = uStack_c0;
          param_1[0x16] = puStack_b8;
        }
        FUN_10952ace8(&uStack_100,param_2,param_3,puVar10);
        if (param_1[0x20] != 0) {
          piVar33 = (int *)(param_1[0x20] + 0x14);
          do {
            iVar86 = *piVar33;
            cVar2 = '\x01';
            bVar44 = (bool)ExclusiveMonitorPass(piVar33,0x10);
            if (bVar44) {
              *piVar33 = iVar86 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar86 + -1 == 0) {
            func_0x000109a848d4(param_1 + 0x19);
          }
        }
        if (0 < *(int *)((long)param_1 + 0xcc)) {
          lVar67 = 0;
          lVar57 = param_1[0x21];
          do {
            *(undefined4 *)(lVar57 + lVar67 * 4) = 0;
            lVar67 = lVar67 + 1;
          } while (lVar67 < *piVar34);
        }
        param_1[0x1a] = uStack_f8;
        param_1[0x19] = uStack_100;
        param_1[0x1c] = uStack_e8;
        param_1[0x1b] = uStack_f0;
        param_1[0x1e] = uStack_d8;
        param_1[0x1d] = uStack_e0;
        param_1[0x20] = uStack_c8;
        param_1[0x1f] = uStack_d0;
        puVar10 = (undefined8 *)param_1[0x22];
        iVar86 = uStack_100._4_4_;
        if (puVar10 != puVar29) {
          if (puVar10 != (undefined8 *)0x0) {
            _free(puVar10[-1]);
          }
          param_1[0x21] = puVar75;
          param_1[0x22] = puVar29;
          puVar10 = puVar29;
          iVar86 = uStack_100._4_4_;
        }
        if (iVar86 < 3) {
          puVar29 = (undefined8 *)((ulong)&uStack_100 | 4);
          *puVar10 = *puStack_b8;
          puVar10[1] = puStack_b8[1];
          uStack_100 = (float *)CONCAT44(uStack_100._4_4_,0x42ff0000);
          puVar29[1] = 0;
          *puVar29 = 0;
          puVar29[3] = 0;
          puVar29[2] = 0;
          puVar29[5] = 0;
          puVar29[4] = 0;
          *(undefined8 *)((long)puVar29 + 0x34) = 0;
          *(undefined8 *)((long)puVar29 + 0x2c) = 0;
          if (puStack_b8 != auStack_b0) {
            _free(puStack_b8[-1]);
          }
        }
        else {
          param_1[0x21] = uStack_c0;
          param_1[0x22] = puStack_b8;
        }
        if (lStack_148 != 0) {
          lStack_140 = lStack_148;
          __ZdlPv();
        }
        if (puStack_130 != (undefined8 *)0x0) {
          puStack_128 = puStack_130;
          __ZdlPv();
        }
        if (pfStack_118 != (float *)0x0) {
          pfStack_110 = pfStack_118;
          __ZdlPv();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
          return;
        }
        ___stack_chk_fail();
      }
      else {
        lVar67 = param_3;
        FUN_10937a848(param_3,lVar57 + 0x110);
        if (lVar67 != 0) {
          FUN_10952a9f0(&lStack_148,lVar67 + 0x28,puVar13 + 5);
          goto LAB_10952823c;
        }
      }
      FUN_109262df8(&UNK_10f639994);
      goto LAB_1095289f8;
    }
  }
  ___cxa_bad_cast();
LAB_1095289f8:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1095289fc);
  (*pcVar9)();
}



/* Entry: 109528af8; end: 109528c1f;  */

long * FUN_109528af8(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  
  plVar4 = (long *)*param_1;
  plVar3 = (long *)param_1[1];
  lVar7 = (long)plVar3 - (long)plVar4;
  uVar10 = lVar7 >> 2;
  if (uVar10 < param_2) {
    uVar9 = param_2 - uVar10;
    if ((ulong)(param_1[2] - (long)plVar3 >> 2) < uVar9) {
      uVar5 = param_1[2] - (long)plVar4;
      uVar6 = (long)uVar5 >> 1;
      if (uVar6 <= param_2) {
        uVar6 = param_2;
      }
      if (0x7ffffffffffffffb < uVar5) {
        uVar6 = 0x3fffffffffffffff;
      }
      if (uVar6 >> 0x3e == 0) {
        lVar2 = uVar6 << 2;
        _malloc();
        if (lVar2 != 0) {
          lVar1 = lVar2 + lVar7;
          _bzero(lVar1,uVar9 * 4);
          plVar8 = (long *)(lVar1 + uVar10 * -4);
          plVar3 = plVar8;
          _memcpy(plVar8,plVar4,lVar7);
          *param_1 = (long)plVar8;
          param_1[1] = lVar1 + uVar9 * 4;
          param_1[2] = lVar2 + uVar6 * 4;
          if (plVar4 == (long *)0x0) {
            return plVar3;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_11034c310)(plVar4);
          return plVar4;
        }
      }
      plVar4 = (long *)0x8;
      ___cxa_allocate_exception();
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      if (*(char *)((long)plVar4 + 0x57) < '\0') {
        __ZdlPv(plVar4[8]);
      }
      *plVar4 = (long)&PTR_FUN_110afb2e0;
      func_0x0001094d9450(plVar4 + 5);
      FUN_10950a500(plVar4 + 3);
      FUN_10938cda4(plVar4 + 2,0);
      FUN_10938cda4(plVar4 + 1,0);
      return plVar4;
    }
    plVar4 = plVar3;
    _bzero(plVar3,uVar9 * 4);
    lVar7 = (long)plVar3 + uVar9 * 4;
  }
  else {
    if (uVar10 <= param_2) {
      return param_1;
    }
    lVar7 = (long)plVar4 + param_2 * 4;
    plVar4 = param_1;
  }
  param_1[1] = lVar7;
  return plVar4;
}



/* Entry: 109528c20; end: 109528c83;  */

undefined8 * FUN_109528c20(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  *param_1 = &PTR_FUN_110afb2e0;
  func_0x0001094d9450(param_1 + 5);
  FUN_10950a500(param_1 + 3);
  FUN_10938cda4(param_1 + 2,0);
  FUN_10938cda4(param_1 + 1,0);
  return param_1;
}



/* Entry: 109528c84; end: 109528c9b;  */

undefined8 FUN_109528c84(void)

{
  FUN_1094d9a44();
  FUN_1094d9a44();
  return 0;
}



/* Entry: 109528c9c; end: 109528ca3;  */

undefined8 FUN_109528c9c(void)

{
  return 0;
}



/* Entry: 109528ca4; end: 109528cb7;  */

undefined8 * FUN_109528ca4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)&UNK_10f57300d;
  func_0x000105688514();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (param_2 != 0) {
    FUN_1094f9508(puVar1);
    puVar2 = (undefined8 *)puVar1[1];
    puVar3 = (undefined8 *)((long)puVar2 + param_2 * 0x14);
    do {
      *(undefined4 *)(puVar2 + 1) = 0;
      *puVar2 = 0;
      *(undefined8 *)((long)puVar2 + 0xc) = 0x3f0000003f800000;
      puVar2 = (undefined8 *)((long)puVar2 + 0x14);
    } while (puVar2 != puVar3);
    puVar1[1] = puVar3;
  }
  return puVar1;
}



/* Entry: 109528cb8; end: 109528d3b;  */

undefined8 * FUN_109528cb8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_1094f9508(param_1);
    puVar1 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)((long)puVar1 + param_2 * 0x14);
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      *puVar1 = 0;
      *(undefined8 *)((long)puVar1 + 0xc) = 0x3f0000003f800000;
      puVar1 = (undefined8 *)((long)puVar1 + 0x14);
    } while (puVar1 != puVar2);
    param_1[1] = puVar2;
  }
  return param_1;
}



/* Entry: 109528d3c; end: 109528d93;  */

undefined8 * FUN_109528d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afb2e0;
  func_0x0001094d9450(param_1 + 5);
  FUN_10950a500(param_1 + 3);
  FUN_10938cda4(param_1 + 2,0);
  FUN_10938cda4(param_1 + 1,0);
  return param_1;
}



/* Entry: 109528d94; end: 109528ebf;  */

undefined8 * FUN_109528d94(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110afb220;
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



/* Entry: 109528ec0; end: 109528f5b;  */

undefined8 * FUN_109528ec0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110afb200;
  if (param_1[0x1c] != 0) {
    param_1[0x1d] = param_1[0x1c];
    _free();
  }
  if (param_1[0x19] != 0) {
    param_1[0x1a] = param_1[0x19];
    _free();
  }
  *param_1 = &PTR_FUN_110afb220;
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



/* Entry: 109528f5c; end: 109528f5f;  */

undefined8 * FUN_109528f5c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110afb220;
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



/* Entry: 109528f60; end: 109528f73;  */

void FUN_109528f60(void)

{
  FUN_109528d94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109528f74; end: 10952976f;  */

void FUN_109528f74(long param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,long param_6,
                  long *param_7)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  float *pfVar9;
  float *pfVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 (*pauVar17) [12];
  undefined8 *puVar18;
  float *pfVar19;
  float *pfVar20;
  undefined4 *puVar21;
  ulong uVar22;
  undefined4 *puVar23;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  ulong uVar27;
  bool bVar28;
  undefined4 *puVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar50;
  undefined1 in_q5 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  float fStack_58;
  float fStack_54;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar47 [16];
  undefined1 auVar43 [16];
  undefined1 auVar48 [16];
  undefined1 auVar44 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  if (param_3 != 0) {
    lVar14 = param_6 * param_3;
    lVar1 = param_2 + lVar14 * 4;
    lVar2 = param_1 + param_6 * 4;
    if (param_3 < 4) {
      uVar13 = 0;
      uVar11 = param_3;
    }
    else {
      lVar12 = 0;
      uVar11 = 0;
      uVar13 = param_3 & 0xfffffffc;
      lVar15 = param_3 * 4;
      do {
        pauVar17 = (undefined1 (*) [12])(lVar1 + uVar11 * 4);
        pfVar10 = (float *)(lVar2 + uVar11 * param_4 * 4);
        uVar22 = param_5 << 2;
        if (3 < param_5) {
          do {
            lVar16 = 0;
            puVar18 = (undefined8 *)(*(undefined1 (*) [16])(*pauVar17 + param_3 * 4) + param_3 * 4);
            pfVar9 = pfVar10 + param_4;
            auVar39 = *(undefined1 (*) [16])(*pauVar17 + param_3 * 4);
            pfVar20 = pfVar9 + param_4;
            auVar3 = *(undefined1 (*) [16])((long)puVar18 + lVar15);
            uVar50 = (undefined4)*puVar18;
            uVar41 = SUB124(*pauVar17,0);
            uVar31 = auVar39._0_4_;
            auVar51._0_8_ = in_q5._4_8_ << 0x20;
            auVar51._12_4_ = in_q5._12_4_;
            auVar51._8_4_ = (int)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
            auVar4._4_8_ = auVar51._8_8_;
            auVar4._0_4_ = auVar39._8_4_;
            in_q5._0_12_ = auVar4 << 0x20;
            in_q5._12_4_ = auVar39._12_4_;
            fStack_58 = (float)((ulong)puVar18[1] >> 0x20);
            fStack_54 = auVar3._12_4_;
            uVar30 = (undefined4)puVar18[1];
            auVar45._4_12_ = auVar3._4_12_;
            auVar45._0_4_ = uVar30;
            auVar43._0_8_ = auVar45._0_8_;
            auVar43._8_4_ = fStack_58;
            auVar43._12_4_ = fStack_54;
            auVar42._8_8_ = auVar43._8_8_;
            auVar42._4_4_ = auVar3._8_4_;
            auVar42._0_4_ = uVar30;
            auVar44._0_12_ = auVar42._0_12_;
            auVar44._12_4_ = fStack_54;
            auVar37._4_4_ = uVar31;
            auVar37._0_4_ = uVar41;
            auVar37._8_4_ = SUB124(*pauVar17,8);
            auVar37._12_4_ = auVar39._8_4_;
            auVar45 = NEON_ext(auVar37,auVar44,8,1);
            uVar30 = SUB124(*pauVar17,0);
            auVar33._4_12_ = auVar39._4_12_;
            auVar33._0_4_ = uVar30;
            auVar35._0_8_ = auVar33._0_8_;
            auVar35._8_4_ = SUB124(*pauVar17,4);
            auVar35._12_4_ = auVar39._12_4_;
            auVar34._8_8_ = auVar35._8_8_;
            auVar34._4_4_ = uVar31;
            auVar34._0_4_ = uVar30;
            auVar36._0_12_ = auVar34._0_12_;
            auVar36._12_4_ = auVar39._4_4_;
            auVar39._4_4_ = auVar3._4_4_;
            auVar39._0_4_ = (int)((ulong)*puVar18 >> 0x20);
            auVar39._8_4_ = fStack_58;
            auVar39._12_4_ = fStack_54;
            auVar37 = NEON_ext(auVar36,auVar39,8,1);
            *(ulong *)(pfVar10 + 2) = CONCAT44(auVar3._0_4_,uVar50);
            *(ulong *)pfVar10 = CONCAT44(uVar31,uVar41);
            *(long *)(pfVar9 + 2) = auVar37._8_8_;
            *(long *)pfVar9 = auVar37._0_8_;
            *(long *)(pfVar20 + 2) = auVar45._8_8_;
            *(long *)pfVar20 = auVar45._0_8_;
            pfVar20 = pfVar20 + param_4;
            pfVar20[2] = fStack_58;
            pfVar20[3] = fStack_54;
            *(long *)pfVar20 = in_q5._8_8_;
            uStack_88 = CONCAT44(auVar3._0_4_,uVar50);
            uStack_90 = CONCAT44(uVar31,uVar41);
            uStack_78 = auVar37._8_8_;
            uStack_80 = auVar37._0_8_;
            uStack_68 = auVar45._8_8_;
            uStack_70 = auVar45._0_8_;
            uStack_60 = in_q5._8_8_;
            lVar24 = *param_7;
            do {
              fVar32 = (float)NEON_fmaxv(*(undefined1 (*) [16])(&uStack_90 + lVar16 * 2),4);
              fVar40 = *(float *)(lVar24 + lVar12 + lVar16 * 4);
              if (fVar32 <= fVar40) {
                fVar32 = fVar40;
              }
              *(float *)(lVar24 + lVar12 + lVar16 * 4) = fVar32;
              lVar16 = lVar16 + 1;
            } while (lVar16 != 4);
            pauVar17 = (undefined1 (*) [12])((long)pauVar17 + param_3 * 0x10);
            pfVar10 = pfVar10 + 4;
            uVar22 = uVar22 - 0x10;
          } while (0xf < uVar22);
        }
        if (uVar22 == 0xc) {
          lVar16 = 0;
          pfVar9 = pfVar10 + param_4;
          pfVar20 = pfVar9 + param_4;
          uVar7 = *(undefined8 *)(*pauVar17 + 8);
          uVar5 = *(undefined8 *)(*pauVar17 + 8);
          puVar18 = (undefined8 *)(*pauVar17 + lVar15);
          uVar41 = *(undefined4 *)((long)puVar18 + 0xc);
          uVar6 = puVar18[1];
          pfVar19 = (float *)((long)puVar18 + lVar15);
          in_q5._0_8_ = CONCAT44((int)((ulong)*puVar18 >> 0x20),
                                 (int)((ulong)*(undefined8 *)*pauVar17 >> 0x20));
          in_q5._8_8_ = 0;
          *(ulong *)pfVar10 = CONCAT44((int)*puVar18,(int)*(undefined8 *)*pauVar17);
          *(ulong *)pfVar9 = in_q5._0_8_;
          *(ulong *)pfVar20 = CONCAT44((int)uVar6,(int)uVar5);
          *(ulong *)(pfVar20 + param_4) = CONCAT44(uVar41,(int)((ulong)uVar7 >> 0x20));
          pfVar10[2] = *pfVar19;
          pfVar9[2] = pfVar19[1];
          pfVar20[2] = pfVar19[2];
          (pfVar20 + param_4)[2] = pfVar19[3];
          lVar24 = *param_7 + uVar11 * 4;
          do {
            lVar26 = 4;
            pfVar9 = pfVar10;
            fVar32 = *(float *)(lVar24 + lVar16 * 4);
            do {
              fVar40 = *pfVar9;
              if (*pfVar9 <= fVar32) {
                fVar40 = fVar32;
              }
              *(float *)(lVar24 + lVar16 * 4) = fVar40;
              pfVar9 = pfVar9 + param_4;
              lVar26 = lVar26 + -1;
              fVar32 = fVar40;
            } while (lVar26 != 0);
            lVar16 = lVar16 + 1;
            pfVar10 = pfVar10 + 1;
          } while (lVar16 != 4);
        }
        else if (uVar22 == 8) {
          lVar16 = 0;
          pfVar9 = pfVar10 + param_4;
          uVar7 = *(undefined8 *)(*pauVar17 + 8);
          uVar5 = *(undefined8 *)(*pauVar17 + 8);
          puVar18 = (undefined8 *)(*pauVar17 + lVar15);
          uVar41 = *(undefined4 *)((long)puVar18 + 0xc);
          uVar6 = puVar18[1];
          in_q5._0_8_ = CONCAT44((int)((ulong)*puVar18 >> 0x20),
                                 (int)((ulong)*(undefined8 *)*pauVar17 >> 0x20));
          in_q5._8_8_ = 0;
          *(ulong *)pfVar10 = CONCAT44((int)*puVar18,(int)*(undefined8 *)*pauVar17);
          *(ulong *)pfVar9 = in_q5._0_8_;
          *(ulong *)(pfVar9 + param_4) = CONCAT44((int)uVar6,(int)uVar5);
          *(ulong *)(pfVar9 + param_4 + param_4) = CONCAT44(uVar41,(int)((ulong)uVar7 >> 0x20));
          lVar24 = *param_7 + uVar11 * 4;
          do {
            lVar26 = 4;
            pfVar9 = pfVar10;
            fVar32 = *(float *)(lVar24 + lVar16 * 4);
            do {
              fVar40 = *pfVar9;
              if (*pfVar9 <= fVar32) {
                fVar40 = fVar32;
              }
              *(float *)(lVar24 + lVar16 * 4) = fVar40;
              pfVar9 = pfVar9 + param_4;
              lVar26 = lVar26 + -1;
              fVar32 = fVar40;
            } while (lVar26 != 0);
            lVar16 = lVar16 + 1;
            pfVar10 = pfVar10 + 1;
          } while (lVar16 != 4);
        }
        else if (uVar22 == 4) {
          lVar16 = 0;
          *pfVar10 = *(float *)*pauVar17;
          pfVar9 = pfVar10 + param_4;
          *pfVar9 = *(float *)(*pauVar17 + 4);
          pfVar9[param_4] = *(float *)(*pauVar17 + 8);
          (pfVar9 + param_4)[param_4] = *(float *)pauVar17[1];
          lVar24 = *param_7 + uVar11 * 4;
          do {
            lVar26 = 4;
            pfVar9 = pfVar10;
            fVar32 = *(float *)(lVar24 + lVar16 * 4);
            do {
              fVar40 = *pfVar9;
              if (*pfVar9 <= fVar32) {
                fVar40 = fVar32;
              }
              *(float *)(lVar24 + lVar16 * 4) = fVar40;
              pfVar9 = pfVar9 + param_4;
              lVar26 = lVar26 + -1;
              fVar32 = fVar40;
            } while (lVar26 != 0);
            lVar16 = lVar16 + 1;
            pfVar10 = pfVar10 + 1;
          } while (lVar16 != 4);
        }
        uVar11 = uVar11 + 4;
        lVar12 = lVar12 + 0x10;
      } while (uVar11 < uVar13);
      uVar11 = param_3 & 3;
      if (uVar11 == 0) {
        return;
      }
    }
    if (uVar11 == 3) {
      if (uVar13 < param_3) {
        lVar14 = uVar13 << 2;
        do {
          pfVar10 = (float *)(lVar1 + uVar13 * 4);
          pfVar9 = (float *)(lVar2 + uVar13 * param_4 * 4);
          uVar11 = param_5 * 3;
          if (param_5 < 4) {
LAB_10952932c:
            lVar12 = 0;
            pfVar20 = pfVar9;
            do {
              if (2 < uVar11) {
                uVar22 = 0;
                pfVar19 = pfVar10;
                do {
                  pfVar20[uVar22] = *pfVar19;
                  uVar22 = uVar22 + 1;
                  pfVar19 = pfVar19 + param_3;
                } while (((uint)uVar11 & 0xff) / 3 != uVar22);
              }
              pfVar10 = pfVar10 + 1;
              lVar12 = lVar12 + 1;
              pfVar20 = pfVar20 + param_4;
            } while (lVar12 != 3);
            lVar12 = 0;
            lVar15 = *param_7 + uVar13 * 4;
            do {
              lVar16 = 3;
              pfVar10 = pfVar9;
              fVar32 = *(float *)(lVar15 + lVar12 * 4);
              do {
                fVar40 = *pfVar10;
                if (*pfVar10 <= fVar32) {
                  fVar40 = fVar32;
                }
                *(float *)(lVar15 + lVar12 * 4) = fVar40;
                pfVar10 = pfVar10 + param_4;
                lVar16 = lVar16 + -1;
                fVar32 = fVar40;
              } while (lVar16 != 0);
              lVar12 = lVar12 + 1;
              pfVar9 = pfVar9 + 1;
            } while (lVar12 != 3);
          }
          else {
            do {
              lVar12 = 0;
              auVar37 = *(undefined1 (*) [16])(pfVar10 + -1);
              pauVar17 = (undefined1 (*) [12])(*(undefined1 (*) [16])(pfVar10 + -1) + param_3 * 4);
              puVar18 = (undefined8 *)(*pauVar17 + param_3 * 4);
              pfVar20 = pfVar9 + param_4;
              pfVar19 = pfVar20 + param_4;
              auVar39 = *(undefined1 (*) [16])((long)puVar18 + param_3 * 4);
              auVar52._4_12_ = in_q5._4_12_;
              auVar52._0_4_ = auVar37._0_4_;
              auVar54._12_4_ = in_q5._12_4_;
              auVar54._0_8_ = auVar52._0_8_;
              auVar54._8_4_ = auVar37._4_4_;
              auVar53._8_8_ = auVar54._8_8_;
              auVar53._4_4_ = SUB124(*pauVar17,0);
              auVar53._0_4_ = auVar37._0_4_;
              auVar55._0_12_ = auVar53._0_12_;
              auVar55._12_4_ = SUB124(*pauVar17,4);
              auVar38._0_12_ = auVar37._0_12_;
              auVar38._12_4_ = (int)*(undefined8 *)(*pauVar17 + 8);
              fVar32 = (float)((ulong)puVar18[1] >> 0x20);
              fVar40 = auVar39._12_4_;
              auVar3._4_4_ = auVar39._4_4_;
              auVar3._0_4_ = (int)((ulong)*puVar18 >> 0x20);
              auVar3._8_4_ = fVar32;
              auVar3._12_4_ = fVar40;
              in_q5 = NEON_ext(auVar55,auVar3,8,1);
              uVar41 = (undefined4)puVar18[1];
              auVar46._4_12_ = auVar39._4_12_;
              auVar46._0_4_ = uVar41;
              auVar48._0_8_ = auVar46._0_8_;
              auVar48._8_4_ = fVar32;
              auVar48._12_4_ = fVar40;
              auVar47._8_8_ = auVar48._8_8_;
              auVar47._4_4_ = auVar39._8_4_;
              auVar47._0_4_ = uVar41;
              auVar49._0_12_ = auVar47._0_12_;
              auVar49._12_4_ = fVar40;
              auVar39 = NEON_ext(auVar38,auVar49,8,1);
              uStack_70 = CONCAT44((int)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20),
                                   auVar37._12_4_);
              *(long *)(pfVar9 + 2) = in_q5._8_8_;
              *(long *)pfVar9 = in_q5._0_8_;
              *(long *)(pfVar20 + 2) = auVar39._8_8_;
              *(long *)pfVar20 = auVar39._0_8_;
              pfVar19[2] = fVar32;
              pfVar19[3] = fVar40;
              *(undefined8 *)pfVar19 = uStack_70;
              Hint_Prefetch(pfVar9 + 4,2,0,0);
              pfVar9 = pfVar9 + 4;
              Hint_Prefetch(pfVar20 + 4,2,0,0);
              Hint_Prefetch(pfVar19 + 4,2,0,0);
              uStack_88 = in_q5._8_8_;
              uStack_90 = in_q5._0_8_;
              uStack_78 = auVar39._8_8_;
              uStack_80 = auVar39._0_8_;
              uStack_68 = CONCAT44(fVar40,fVar32);
              lVar15 = *param_7;
              do {
                fVar32 = (float)NEON_fmaxv(*(undefined1 (*) [16])(&uStack_90 + lVar12 * 2),4);
                fVar40 = *(float *)(lVar15 + lVar14 + lVar12 * 4);
                if (fVar32 <= fVar40) {
                  fVar32 = fVar40;
                }
                *(float *)(lVar15 + lVar14 + lVar12 * 4) = fVar32;
                lVar12 = lVar12 + 1;
              } while (lVar12 != 3);
              pfVar10 = pfVar10 + param_3 * 4;
              uVar11 = uVar11 - 0xc;
            } while (0xb < uVar11);
            if (uVar11 != 0) goto LAB_10952932c;
          }
          uVar13 = uVar13 + 3;
          lVar14 = lVar14 + 0xc;
        } while (uVar13 < param_3);
      }
    }
    else if (param_3 != uVar13) {
      if (param_3 - uVar13 < 2) {
        if (uVar13 < param_3) {
          uVar11 = param_5 >> 1;
          lVar12 = uVar13 * param_4 * 4 + param_6 * 4;
          lVar15 = param_1 + lVar12;
          param_1 = param_1 + lVar12 + uVar11 * 4;
          lVar14 = lVar14 * 4 + uVar13 * 4;
          lVar12 = param_3 * (param_6 * 4 + uVar11 * 4) + uVar13 * 4;
          do {
            pfVar10 = (float *)(lVar2 + uVar13 * param_4 * 4);
            if (param_5 < 2) {
              fVar32 = *(float *)(lVar1 + uVar13 * 4);
              *pfVar10 = fVar32;
              fVar40 = *(float *)(*param_7 + param_6 * 4);
              if (fVar32 <= fVar40) {
                fVar32 = fVar40;
              }
              *(float *)(*param_7 + param_6 * 4) = fVar32;
            }
            else {
              lVar16 = 0;
              lVar24 = param_2;
              do {
                uVar41 = *(undefined4 *)(lVar24 + lVar12);
                *(undefined4 *)(lVar15 + lVar16) = *(undefined4 *)(lVar24 + lVar14);
                *(undefined4 *)(param_1 + lVar16) = uVar41;
                lVar16 = lVar16 + 4;
                lVar24 = lVar24 + param_3 * 4;
              } while (uVar11 * 4 - lVar16 != 0);
              if ((param_4 & 1) != 0) {
                pfVar10[uVar11 * 2] = *(float *)(lVar24 + lVar12);
              }
              fVar40 = *(float *)(*param_7 + uVar13 * 4);
              fVar32 = *pfVar10;
              if (*pfVar10 <= fVar40) {
                fVar32 = fVar40;
              }
              *(float *)(*param_7 + uVar13 * 4) = fVar32;
            }
            uVar13 = uVar13 + 1;
            lVar15 = lVar15 + param_4 * 4;
            param_1 = param_1 + param_4 * 4;
            lVar14 = lVar14 + 4;
            lVar12 = lVar12 + 4;
          } while (uVar13 != param_3);
        }
      }
      else {
        uVar11 = param_3 & 0xfffffffe;
        if (uVar13 < uVar11) {
          lVar12 = uVar13 * 4;
          lVar15 = param_1 + param_4 * (lVar12 + 4) + param_6 * 4;
          do {
            puVar23 = (undefined4 *)(lVar1 + uVar13 * 4);
            puVar21 = (undefined4 *)(lVar2 + uVar13 * param_4 * 4);
            uVar22 = param_5 << 1;
            if (param_5 < 4) {
LAB_1095295f0:
              puVar25 = puVar21;
              bVar28 = false;
              do {
                uVar27 = 0;
                puVar29 = puVar23;
                do {
                  puVar25[uVar27] = *puVar29;
                  uVar27 = uVar27 + 1;
                  puVar29 = puVar29 + param_3;
                } while (uVar22 >> 1 != uVar27);
                puVar23 = puVar23 + 1;
                puVar25 = puVar25 + param_4;
                bVar8 = !bVar28;
                bVar28 = true;
              } while (bVar8);
              lVar16 = 0;
              lVar24 = *param_7 + lVar12;
              do {
                fVar32 = *(float *)((long)puVar21 + lVar16);
                if (*(float *)((long)puVar21 + lVar16) <= *(float *)(lVar24 + lVar16)) {
                  fVar32 = *(float *)(lVar24 + lVar16);
                }
                *(float *)(lVar24 + lVar16) = fVar32;
                fVar40 = *(float *)((long)puVar21 + lVar16 + param_4 * 4);
                if (fVar40 <= fVar32) {
                  fVar40 = fVar32;
                }
                *(float *)(lVar24 + lVar16) = fVar40;
                lVar16 = lVar16 + 4;
              } while (lVar16 != 8);
            }
            else {
              lVar24 = *param_7 + lVar12;
              lVar16 = lVar15;
              do {
                lVar26 = 0;
                *puVar21 = *puVar23;
                puVar25 = puVar23 + param_3;
                puVar21[1] = *puVar25;
                puVar21[2] = puVar25[param_3];
                puVar21[3] = (puVar25 + param_3)[param_3];
                puVar25 = puVar21 + param_4;
                puVar29 = puVar23 + 1;
                *puVar25 = *puVar29;
                puVar29 = puVar29 + param_3;
                puVar25[1] = *puVar29;
                puVar25[2] = puVar29[param_3];
                puVar25[3] = (puVar29 + param_3)[param_3];
                do {
                  fVar32 = *(float *)((long)puVar21 + lVar26);
                  if (*(float *)((long)puVar21 + lVar26) <= *(float *)(lVar24 + lVar26)) {
                    fVar32 = *(float *)(lVar24 + lVar26);
                  }
                  *(float *)(lVar24 + lVar26) = fVar32;
                  fVar40 = *(float *)(lVar16 + lVar26);
                  if (*(float *)(lVar16 + lVar26) <= fVar32) {
                    fVar40 = fVar32;
                  }
                  *(float *)(lVar24 + lVar26) = fVar40;
                  lVar26 = lVar26 + 4;
                } while (lVar26 != 8);
                puVar23 = puVar23 + param_3 * 4;
                puVar21 = puVar21 + 4;
                uVar22 = uVar22 - 8;
                lVar16 = lVar16 + 0x10;
              } while (7 < uVar22);
              if (uVar22 != 0) goto LAB_1095295f0;
            }
            uVar13 = uVar13 + 2;
            lVar15 = lVar15 + param_4 * 8;
            lVar12 = lVar12 + 8;
          } while (uVar13 < uVar11);
        }
        if (uVar11 != param_3) {
          uVar22 = param_5 >> 1;
          uVar13 = param_3 >> 1;
          lVar12 = param_4 * uVar13 * 8 + param_6 * 4;
          lVar15 = param_1 + lVar12;
          param_1 = param_1 + lVar12 + uVar22 * 4;
          lVar14 = lVar14 * 4 + uVar13 * 8;
          lVar12 = param_3 * (param_6 * 4 + uVar22 * 4) + uVar13 * 8;
          do {
            pfVar10 = (float *)(lVar2 + uVar11 * param_4 * 4);
            if (param_5 < 2) {
              fVar32 = *(float *)(lVar1 + uVar11 * 4);
              *pfVar10 = fVar32;
              fVar40 = *(float *)(*param_7 + param_6 * 4);
              if (fVar32 <= fVar40) {
                fVar32 = fVar40;
              }
              *(float *)(*param_7 + param_6 * 4) = fVar32;
            }
            else {
              lVar16 = 0;
              lVar24 = param_2;
              do {
                uVar41 = *(undefined4 *)(lVar24 + lVar12);
                *(undefined4 *)(lVar15 + lVar16) = *(undefined4 *)(lVar24 + lVar14);
                *(undefined4 *)(param_1 + lVar16) = uVar41;
                lVar16 = lVar16 + 4;
                lVar24 = lVar24 + param_3 * 4;
              } while (uVar22 * 4 - lVar16 != 0);
              if ((param_4 & 1) != 0) {
                pfVar10[uVar22 * 2] = *(float *)(lVar24 + lVar12);
              }
              fVar40 = *(float *)(*param_7 + uVar11 * 4);
              fVar32 = *pfVar10;
              if (*pfVar10 <= fVar40) {
                fVar32 = fVar40;
              }
              *(float *)(*param_7 + uVar11 * 4) = fVar32;
            }
            uVar11 = uVar11 + 1;
            lVar15 = lVar15 + param_4 * 4;
            param_1 = param_1 + param_4 * 4;
            lVar14 = lVar14 + 4;
            lVar12 = lVar12 + 4;
          } while (uVar11 != param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 109529770; end: 109529a37;  */

void FUN_109529770(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long *unaff_x21;
  long lVar6;
  long unaff_x22;
  long lVar7;
  ulong uVar8;
  undefined8 auStack_118 [2];
  char cStack_101;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined1 uStack_69;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(long *)(lVar3 + 0x178) - *(long *)(lVar3 + 0x170) != 0x18) {
LAB_109529a14:
    puVar1 = &UNK_10f573049;
    func_0x000105688514();
    func_0x000105675c90(&uStack_d0);
    puVar2 = puVar1;
    __Unwind_Resume();
    pcStack_d8 = FUN_109529a38;
    lVar3 = *(long *)(puVar2 + 0x18);
    *(undefined4 *)(puVar2 + 0x38) = *(undefined4 *)(lVar3 + 0x90);
    lStack_100 = unaff_x22;
    plStack_f8 = unaff_x21;
    lStack_f0 = unaff_x20;
    puStack_e8 = puVar1;
    puStack_e0 = &stack0xfffffffffffffff0;
    func_0x000107c31940(auStack_118,&UNK_10f573086);
    FUN_1094a69fc(lVar3 + 8,auStack_118,*(long *)(puVar2 + 0x18) + 0x18,puVar2 + 0x40);
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    lVar3 = (long)(char)puVar2[0x57];
    if (lVar3 < 0) {
      lVar3 = *(long *)(puVar2 + 0x48);
    }
    if (lVar3 != 0) {
      func_0x000107c2ac70(*(long *)(puVar2 + 0x18) + 0x170,puVar2 + 0x40);
    }
    lVar3 = *(long *)(puVar2 + 0x18);
    func_0x000107c31940(auStack_118,&UNK_10f573095);
    FUN_1094a69fc(lVar3 + 8,auStack_118,*(long *)(puVar2 + 0x18) + 0x18,puVar2 + 0x58);
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    lVar3 = (long)(char)puVar2[0x6f];
    if (lVar3 < 0) {
      lVar3 = *(long *)(puVar2 + 0x60);
    }
    if (lVar3 != 0) {
      func_0x000107c2ac70(*(long *)(puVar2 + 0x18) + 0x188,puVar2 + 0x58);
    }
    lVar3 = *(long *)(puVar2 + 0x18);
    func_0x000107c31940(auStack_118,&UNK_10f573086);
    FUN_1094a69fc(lVar3 + 8,auStack_118,*(long *)(puVar2 + 0x18) + 0x18,puVar2 + 0x40);
    if (cStack_101 < '\0') {
      __ZdlPv(auStack_118[0]);
    }
    FUN_10952b504(puVar2,param_2);
    return;
  }
  iStack_78 = (int)((ulong)(*(long *)(lVar3 + 0x1c0) - *(long *)(lVar3 + 0x1b8)) >> 3) *
              (int)*(ulong *)(lVar3 + 0x38) * 0x55555556;
  uStack_80 = 0x100000001;
  uStack_74 = 1;
  if ((*param_2 == param_2[1]) || (*(ulong *)(*param_2 + 0x28) < *(ulong *)(lVar3 + 0x38))) {
    func_0x000109cdb584(&uStack_d0,*(undefined8 *)(param_1 + 0x10),&uStack_80,&UNK_10dfd2118);
    uStack_68 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x170);
    FUN_10937a098(param_3,uStack_68,&UNK_10dd5b8f9,&uStack_68,&uStack_69);
    *(undefined8 *)(param_3 + 0x38) = uStack_c0;
    *(undefined8 *)(param_3 + 0x30) = uStack_c8;
    *(undefined8 *)(param_3 + 0x40) = uStack_b8;
    func_0x0001093783c0(param_3 + 0x48,auStack_b0);
    func_0x00010937843c(param_3 + 0x58,auStack_a0);
    func_0x000105675c90(&uStack_d0);
  }
  else {
    func_0x000109cdb584(&uStack_d0,*(undefined8 *)(param_1 + 0x10),&uStack_80,&UNK_10dfd2118);
    uStack_68 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x170);
    lVar3 = param_3;
    FUN_10937a098(param_3,uStack_68,&UNK_10dd5b8f9,&uStack_68,&uStack_69);
    *(undefined8 *)(lVar3 + 0x38) = uStack_c0;
    *(undefined8 *)(lVar3 + 0x30) = uStack_c8;
    *(undefined8 *)(lVar3 + 0x40) = uStack_b8;
    func_0x0001093783c0(lVar3 + 0x48,auStack_b0);
    func_0x00010937843c(lVar3 + 0x58,auStack_a0);
    func_0x000105675c90(&uStack_d0);
    lVar6 = *param_2;
    unaff_x20 = *(long *)(param_1 + 0x18);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x170);
    FUN_10937a098(param_3,uStack_d0,&UNK_10dd5b8f9,&uStack_d0,&uStack_68);
    lVar3 = *(long *)(lVar6 + 8);
    if (*(long *)(lVar6 + 0x10) != lVar3) {
      uVar8 = *(ulong *)(lVar6 + 0x20);
      unaff_x21 = (long *)(lVar3 + (uVar8 / 0x66) * 8);
      lVar4 = *unaff_x21;
      lVar5 = lVar4 + (uVar8 % 0x66) * 0x28;
      uVar8 = *(long *)(lVar6 + 0x28) + uVar8;
      unaff_x22 = *(long *)(lVar3 + (uVar8 / 0x66) * 8) + (uVar8 % 0x66) * 0x28;
      if (lVar5 != unaff_x22) {
        lVar3 = *(long *)(param_3 + 0x48);
        do {
          if (*(long *)(lVar5 + 0x18) != 0) {
            lVar7 = 0;
            lVar6 = 0;
            uVar8 = 0;
            do {
              param_2 = (long *)(*(long *)(unaff_x20 + 0x1b8) + lVar6);
              lVar4 = lVar5;
              FUN_1094e1944(lVar5,param_2);
              if (lVar4 == 0) {
                FUN_109262df8(&UNK_10f639994);
                goto LAB_109529a14;
              }
              *(ulong *)(lVar3 + uVar8 * 8) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x28) >> 0x20) + -0.5,
                            (float)*(undefined8 *)(lVar4 + 0x28) + -0.5);
              uVar8 = uVar8 + 1;
              lVar6 = lVar6 + 0x18;
              lVar7 = lVar7 + 8;
            } while (uVar8 < *(ulong *)(lVar5 + 0x18));
            lVar4 = *unaff_x21;
            lVar3 = lVar3 + lVar7;
          }
          lVar5 = lVar5 + 0x28;
          if (lVar5 - lVar4 == 0xff0) {
            unaff_x21 = unaff_x21 + 1;
            lVar4 = *unaff_x21;
            lVar5 = lVar4;
          }
        } while (lVar5 != unaff_x22);
      }
    }
  }
  return;
}


