/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a31448c; end: 10a31473b;  */

void FUN_10a31448c(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                  ulong param_5,ulong param_6,long *param_7)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long lVar18;
  uint uStack_b0;
  int iStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar18 = *param_7;
  uStack_b0 = *(uint *)(lVar18 + 0x24);
  uVar13 = (ulong)*(int *)(lVar18 + 0x10);
  uVar9 = *(ulong *)(lVar18 + 0x40);
  uVar12 = 0;
  if (uVar13 != 0) {
    uVar12 = (uint)(*(ulong *)(lVar18 + 0x18) / uVar13);
  }
  if (uVar9 == 0) {
    uVar9 = *(ulong *)(lVar18 + 0x18) * (ulong)*(uint *)(lVar18 + 0x14);
  }
  bVar3 = 1 < uStack_b0 - 3;
  bVar4 = uVar12 != 3;
  if (!bVar3 && !bVar4) {
    bVar5 = uStack_b0 == 3;
    uStack_b0 = 5;
    if (bVar5) {
      uStack_b0 = 1;
    }
    uVar9 = (ulong)(uint)(param_4 * (int)param_5 * (int)param_6 * 4);
    uVar12 = 4;
  }
  puVar6 = (undefined1 *)(uVar9 & 0xffffffff);
  __Znam();
  _bzero();
  uVar14 = param_6;
  uVar16 = param_5;
  if (0 < (int)param_6) {
    iVar10 = 0;
    iStack_78 = 0;
    iVar7 = 0;
    puVar17 = puVar6;
    do {
      if (0 < (int)uVar16) {
        uVar13 = 0;
        do {
          if (bVar3 || bVar4) {
            _memcpy(puVar17,*(long *)(lVar18 + 0x28) +
                            *(long *)(lVar18 + 0x18) * (uVar13 + (long)iVar7) +
                            (ulong)(uint)(*(int *)(lVar18 + 0x20) * iStack_78 <<
                                         ((*(uint *)(lVar18 + 0x24) & 0xfffffffb) == 0xb)),
                    (ulong)(uVar12 * param_4));
            puVar17 = puVar17 + uVar12 * param_4;
          }
          else if (0 < param_4) {
            iVar11 = iStack_78;
            iVar15 = param_4;
            do {
              puVar1 = (undefined1 *)
                       (*(long *)(lVar18 + 0x28) + *(long *)(lVar18 + 0x18) * (uVar13 + (long)iVar7)
                       + (ulong)(uint)(*(int *)(lVar18 + 0x20) * iVar11 <<
                                      ((*(uint *)(lVar18 + 0x24) & 0xfffffffb) == 0xb)));
              *puVar17 = *puVar1;
              puVar17[1] = puVar1[1];
              puVar17[2] = puVar1[2];
              puVar17[3] = 0xff;
              puVar17 = puVar17 + uVar12;
              iVar11 = iVar11 + 1;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          puStack_70 = &UNK_10f64dde5;
          uStack_68 = 0x3c;
          if (puVar6 + (long)(uVar9 & 0xffffffff) < puVar17) {
            FUN_10a0edfc4(&puStack_70);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a31471c);
            (*pcVar2)();
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != (param_5 & 0xffffffff));
        uVar13 = (ulong)*(uint *)(lVar18 + 0x10);
        uVar16 = param_5 & 0xffffffff;
        uVar14 = param_6 & 0xffffffff;
      }
      iVar11 = iStack_78 + param_4;
      iStack_78 = iVar11;
      if ((int)uVar13 <= iVar11) {
        iStack_78 = 0;
      }
      iVar15 = 0;
      if ((int)uVar13 <= iVar11) {
        iVar15 = (int)uVar16;
      }
      iVar7 = iVar15 + iVar7;
      iVar10 = iVar10 + 1;
    } while (iVar10 != (int)uVar14);
  }
  uVar8 = 3;
  if ((uStack_b0 & 0xfffffffb) != 0xb) {
    uVar8 = 1;
  }
  FUN_10ad4b4a0(param_2,param_3,2,param_4,uVar16,uVar14,uStack_b0,uVar8,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(puVar6);
  return;
}



/* Entry: 10a31473c; end: 10a3149c7;  */

void FUN_10a31473c(undefined8 param_1,undefined4 param_2,ulong param_3,uint param_4,long *param_5)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  undefined1 *puVar18;
  long lVar19;
  int iStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar19 = *param_5;
  uVar6 = 0;
  if ((long)*(int *)(lVar19 + 0x10) != 0) {
    uVar6 = (uint)(*(ulong *)(lVar19 + 0x18) / (ulong)(long)*(int *)(lVar19 + 0x10));
  }
  uVar3 = *(uint *)(lVar19 + 0x24);
  uVar15 = 5;
  if (uVar3 == 3) {
    uVar15 = 1;
  }
  bVar9 = 1 < uVar3 - 3;
  bVar7 = bVar9 || uVar6 != 3;
  if (bVar7) {
    uVar15 = uVar3;
  }
  uVar3 = 4;
  if (bVar7) {
    uVar3 = uVar6;
  }
  iVar11 = (int)param_3;
  uVar4 = uVar3 * iVar11;
  puVar10 = (undefined1 *)(ulong)(uVar4 * param_4);
  __Znam();
  _bzero();
  iVar17 = 0;
  iVar1 = 0;
  iStack_78 = 0;
  uVar12 = 3;
  if ((uVar15 & 0xfffffffb) != 0xb) {
    uVar12 = 1;
  }
  do {
    if (0 < (int)param_4) {
      uVar16 = 0;
      puVar18 = puVar10;
      do {
        if (bVar9 || uVar6 != 3) {
          _memcpy(puVar18,*(long *)(lVar19 + 0x28) +
                          *(long *)(lVar19 + 0x18) * (uVar16 + (long)iVar1) +
                          (ulong)(uint)(*(int *)(lVar19 + 0x20) * iStack_78 <<
                                       ((*(uint *)(lVar19 + 0x24) & 0xfffffffb) == 0xb)),
                  (ulong)uVar4);
          puVar18 = puVar18 + uVar4;
        }
        else if (0 < iVar11) {
          uVar14 = param_3;
          iVar13 = iStack_78;
          do {
            puVar2 = (undefined1 *)
                     (*(long *)(lVar19 + 0x28) + *(long *)(lVar19 + 0x18) * (uVar16 + (long)iVar1) +
                     (ulong)(uint)(*(int *)(lVar19 + 0x20) * iVar13 <<
                                  ((*(uint *)(lVar19 + 0x24) & 0xfffffffb) == 0xb)));
            *puVar18 = *puVar2;
            puVar18[1] = puVar2[1];
            puVar18[2] = puVar2[2];
            puVar18[3] = 0xff;
            puVar18 = puVar18 + uVar3;
            iVar13 = iVar13 + 1;
            uVar5 = (int)uVar14 - 1;
            uVar14 = (ulong)uVar5;
          } while (uVar5 != 0);
        }
        puStack_70 = &UNK_10f64de22;
        uStack_68 = 0x41;
        if (puVar10 + (long)(ulong)(uVar4 * param_4) < puVar18) {
          FUN_10a0edfc4(&puStack_70);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10a3149b0);
          (*pcVar8)();
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != param_4);
    }
    FUN_10ad4b248(param_2,iVar17 + 0x8515,2,param_3,param_4,uVar15,uVar12,uVar12,puVar10,0,0);
    iVar13 = iStack_78 + iVar11;
    iStack_78 = iVar13;
    if (*(int *)(lVar19 + 0x10) <= iVar13) {
      iStack_78 = 0;
    }
    uVar5 = 0;
    if (*(int *)(lVar19 + 0x10) <= iVar13) {
      uVar5 = param_4;
    }
    iVar1 = uVar5 + iVar1;
    iVar17 = iVar17 + 1;
    if (iVar17 == 6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdaPv_110352250)(puVar10);
      return;
    }
  } while( true );
}



/* Entry: 10a3149c8; end: 10a314d23;  */

undefined8 **
FUN_10a3149c8(undefined8 param_1,undefined8 **param_2,undefined8 param_3,undefined8 param_4,
             int param_5,undefined8 *param_6)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 **ppuVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong *puVar8;
  undefined8 auStack_630 [25];
  undefined *puStack_568;
  undefined **appuStack_560 [7];
  undefined *puStack_528;
  undefined **appuStack_520 [7];
  undefined1 auStack_4e8 [208];
  ulong uStack_418;
  undefined4 auStack_410 [26];
  undefined8 *apuStack_3a8 [8];
  undefined8 *apuStack_368 [24];
  ulong uStack_2a8;
  undefined4 auStack_2a0 [24];
  ulong uStack_240;
  undefined8 *puStack_238;
  undefined4 uStack_230;
  long lStack_228;
  undefined1 auStack_220 [40];
  undefined8 *apuStack_1f8 [24];
  byte bStack_138;
  undefined8 auStack_130 [2];
  long lStack_120;
  ulong uStack_d0;
  undefined8 *puStack_c8;
  undefined4 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [72];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 < 1) {
    puVar8 = (ulong *)*param_6;
    uStack_2a8 = *puVar8;
    auStack_2a0[0] = (undefined4)puVar8[1];
    puVar3 = &uStack_2a8;
    FUN_10a314d24();
    uVar6 = 3;
    if (((uint)puVar3 & 0xfffffffb) != 0xb) {
      uVar6 = 1;
    }
    FUN_10a314fa4(&uStack_2a8,puVar8);
    uVar1 = uStack_2a8;
    if (uStack_2a8 != 0) {
      _memcpy(auStack_130,auStack_2a0,uStack_2a8 << 5);
    }
    puStack_c8 = puStack_238;
    uStack_d0 = uStack_240;
    uStack_c0 = uStack_230;
    lStack_b8 = lStack_228;
    if (lStack_228 != 0) {
      _memcpy(auStack_b0,auStack_220,lStack_228 * 0x18);
    }
    if (uVar1 == 1) {
      uStack_2a8 = uStack_2a8 & 0xffffffffffffff00;
      bStack_138 = 0;
      if (-1 < lStack_120) {
        uStack_418 = uStack_d0;
        auStack_410[0] = puStack_c8._0_4_;
        puVar4 = &uStack_418;
        func_0x0001096f1ebc();
        if (((int)puVar4 == 0) ||
           (((ulong)puStack_c8 >> 0x20) * ((ulong)puVar4 & 0xffffffff) - lStack_120 == 0))
        goto LAB_10a314bf4;
      }
      FUN_10a314fa4(auStack_4e8,puVar8);
      puStack_568 = &UNK_1096f34d4;
      appuStack_560[0] = &PTR_DAT_110b0afd0;
      puStack_528 = &UNK_1096f3724;
      appuStack_520[0] = &PTR_DAT_110b0afe8;
      func_0x0001096f2b1c(&uStack_418,auStack_4e8,&puStack_568,0,1);
      if (bStack_138 == 1) {
        func_0x0001096f2494();
      }
      else {
        func_0x0001096f2390(&uStack_2a8,&uStack_418);
        bStack_138 = 1;
      }
      func_0x0001096f2328(&uStack_418);
      (*(code *)*apuStack_368[0])(apuStack_368);
      (*(code *)*apuStack_3a8[0])(apuStack_3a8);
      (*(code *)*appuStack_520[0])(appuStack_520);
      (*(code *)*appuStack_560[0])(appuStack_560);
      if ((bStack_138 & 1) != 0) {
        func_0x0001096f2204(auStack_4e8,&uStack_2a8);
        puVar8 = &uStack_418;
        func_0x0001096f3848(&uStack_418,auStack_4e8);
        if (uStack_418 == 0) {
          auStack_130[0] = 0;
        }
        else {
          _memcpy(auStack_630,auStack_410,uStack_418 << 5);
          auStack_130[0] = auStack_630[0];
        }
LAB_10a314bf4:
        FUN_10ad4b248(param_2,0xde1,2,param_3,param_4,puVar3,uVar6,uVar6,auStack_130[0],0,0);
        if (bStack_138 == 1) {
          func_0x0001096f2328(&uStack_2a8);
          (*(code *)*apuStack_1f8[0])(apuStack_1f8);
          param_2 = &puStack_238;
          (*(code *)*puStack_238)();
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          return param_2;
        }
        ___stack_chk_fail();
        (*(code *)*appuStack_520[0])(puVar8 + 9);
        (*(code *)*appuStack_560[0])(puVar8 + 1);
        if (bStack_138 == 1) {
          func_0x0001096f2328(&uStack_2a8);
          (*(code *)*apuStack_1f8[0])(apuStack_1f8);
          (*(code *)*puStack_238)(&puStack_238);
        }
        __Unwind_Resume();
        ppuVar5 = param_2;
        func_0x0001096f1fac();
        if (((ulong)ppuVar5 & 1) == 0) {
          ppuVar5 = param_2;
          func_0x0001096f1fac(param_2,&UNK_10e4aa750);
          if (((ulong)ppuVar5 & 1) == 0) {
            ppuVar5 = param_2;
            func_0x0001096f1fac(param_2,&UNK_10e4ab304);
            if (((ulong)ppuVar5 & 1) == 0) {
              ppuVar5 = param_2;
              func_0x0001096f1fac(param_2,&UNK_10e4ab310);
              if (((ulong)ppuVar5 & 1) == 0) {
                ppuVar5 = param_2;
                func_0x0001096f1fac(param_2,&UNK_10e4ab31c);
                if (((ulong)ppuVar5 & 1) == 0) {
                  ppuVar5 = param_2;
                  func_0x0001096f1fac(param_2,&UNK_10e4aa744);
                  if (((ulong)ppuVar5 & 1) == 0) {
                    ppuVar5 = param_2;
                    func_0x0001096f1fac(param_2,&UNK_10e4ab328);
                    if (((ulong)ppuVar5 & 1) == 0) {
                      ppuVar5 = param_2;
                      func_0x0001096f1fac(param_2,&UNK_10e4ab334);
                      if (((ulong)ppuVar5 & 1) == 0) {
                        ppuVar5 = param_2;
                        func_0x0001096f1fac(param_2,&UNK_10e4ab340);
                        if (((ulong)ppuVar5 & 1) == 0) {
                          ppuVar5 = param_2;
                          func_0x0001096f1fac(param_2,&UNK_10e4ab34c);
                          if (((ulong)ppuVar5 & 1) == 0) {
                            ppuVar5 = param_2;
                            func_0x0001096f1fac(param_2,&UNK_10e4ab358);
                            if (((ulong)ppuVar5 & 1) == 0) {
                              ppuVar5 = param_2;
                              func_0x0001096f1fac(param_2,&UNK_10e4ab364);
                              if (((ulong)ppuVar5 & 1) == 0) {
                                ppuVar5 = param_2;
                                func_0x0001096f1fac(param_2,&UNK_10e4ab370);
                                if (((ulong)ppuVar5 & 1) == 0) {
                                  ppuVar5 = param_2;
                                  func_0x0001096f1fac(param_2,&UNK_10e4ab37c);
                                  if (((ulong)ppuVar5 & 1) == 0) {
                                    ppuVar5 = param_2;
                                    func_0x0001096f1fac(param_2,&UNK_10e4ab388);
                                    if (((ulong)ppuVar5 & 1) == 0) {
                                      ppuVar5 = param_2;
                                      func_0x0001096f1fac(param_2,&UNK_10e4ab394);
                                      if (((ulong)ppuVar5 & 1) == 0) {
                                        ppuVar5 = param_2;
                                        func_0x0001096f1fac(param_2,&UNK_10e4ab3a0);
                                        if (((ulong)ppuVar5 & 1) == 0) {
                                          ppuVar5 = param_2;
                                          func_0x0001096f1fac(param_2,&UNK_10e4ab3ac);
                                          if (((ulong)ppuVar5 & 1) == 0) {
                                            ppuVar5 = param_2;
                                            func_0x0001096f1fac(param_2,&UNK_10e4ab3b8);
                                            if (((ulong)ppuVar5 & 1) == 0) {
                                              ppuVar5 = param_2;
                                              func_0x0001096f1fac(param_2,&UNK_10e4ab3c4);
                                              if (((ulong)ppuVar5 & 1) == 0) {
                                                ppuVar5 = param_2;
                                                func_0x0001096f1fac(param_2,&UNK_10e4ab3d0);
                                                if (((ulong)ppuVar5 & 1) == 0) {
                                                  func_0x0001096f1fac(param_2,&UNK_10e4ab3dc);
                                                  uVar7 = 0x15;
                                                  if ((int)param_2 == 0) {
                                                    uVar7 = 0xffffffff;
                                                  }
                                                  ppuVar5 = (undefined8 **)(ulong)uVar7;
                                                }
                                                else {
                                                  ppuVar5 = (undefined8 **)0x14;
                                                }
                                              }
                                              else {
                                                ppuVar5 = (undefined8 **)0x13;
                                              }
                                            }
                                            else {
                                              ppuVar5 = (undefined8 **)0x12;
                                            }
                                          }
                                          else {
                                            ppuVar5 = (undefined8 **)0x10;
                                          }
                                        }
                                        else {
                                          ppuVar5 = (undefined8 **)0xe;
                                        }
                                      }
                                      else {
                                        ppuVar5 = (undefined8 **)0x11;
                                      }
                                    }
                                    else {
                                      ppuVar5 = (undefined8 **)0xf;
                                    }
                                  }
                                  else {
                                    ppuVar5 = (undefined8 **)0xd;
                                  }
                                }
                                else {
                                  ppuVar5 = (undefined8 **)0xc;
                                }
                              }
                              else {
                                ppuVar5 = (undefined8 **)0xb;
                              }
                            }
                            else {
                              ppuVar5 = (undefined8 **)0x16;
                            }
                          }
                          else {
                            ppuVar5 = (undefined8 **)0xa;
                          }
                        }
                        else {
                          ppuVar5 = (undefined8 **)0x9;
                        }
                      }
                      else {
                        ppuVar5 = (undefined8 **)0x8;
                      }
                    }
                    else {
                      ppuVar5 = (undefined8 **)0x7;
                    }
                  }
                  else {
                    ppuVar5 = (undefined8 **)0x5;
                  }
                }
                else {
                  ppuVar5 = (undefined8 **)0x4;
                }
              }
              else {
                ppuVar5 = (undefined8 **)0x3;
              }
            }
            else {
              ppuVar5 = (undefined8 **)0x2;
            }
          }
          else {
            ppuVar5 = (undefined8 **)0x1;
          }
        }
        else {
          ppuVar5 = (undefined8 **)0x0;
        }
        return ppuVar5;
      }
      goto LAB_10a314ca8;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f64de64);
  }
  FUN_10a00946c(&UNK_10f64dea7);
LAB_10a314ca8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a314cac);
  (*pcVar2)();
}



/* Entry: 10a314d24; end: 10a314fa3;  */

undefined4 FUN_10a314d24(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1;
  func_0x0001096f1fac(param_1,&UNK_10e4ab2f8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x0001096f1fac(param_1,&UNK_10e4aa750);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x0001096f1fac(param_1,&UNK_10e4ab304);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x0001096f1fac(param_1,&UNK_10e4ab310);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_1;
          func_0x0001096f1fac(param_1,&UNK_10e4ab31c);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_1;
            func_0x0001096f1fac(param_1,&UNK_10e4aa744);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_1;
              func_0x0001096f1fac(param_1,&UNK_10e4ab328);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_1;
                func_0x0001096f1fac(param_1,&UNK_10e4ab334);
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_1;
                  func_0x0001096f1fac(param_1,&UNK_10e4ab340);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_1;
                    func_0x0001096f1fac(param_1,&UNK_10e4ab34c);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_1;
                      func_0x0001096f1fac(param_1,&UNK_10e4ab358);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_1;
                        func_0x0001096f1fac(param_1,&UNK_10e4ab364);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = param_1;
                          func_0x0001096f1fac(param_1,&UNK_10e4ab370);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = param_1;
                            func_0x0001096f1fac(param_1,&UNK_10e4ab37c);
                            if ((uVar1 & 1) == 0) {
                              uVar1 = param_1;
                              func_0x0001096f1fac(param_1,&UNK_10e4ab388);
                              if ((uVar1 & 1) == 0) {
                                uVar1 = param_1;
                                func_0x0001096f1fac(param_1,&UNK_10e4ab394);
                                if ((uVar1 & 1) == 0) {
                                  uVar1 = param_1;
                                  func_0x0001096f1fac(param_1,&UNK_10e4ab3a0);
                                  if ((uVar1 & 1) == 0) {
                                    uVar1 = param_1;
                                    func_0x0001096f1fac(param_1,&UNK_10e4ab3ac);
                                    if ((uVar1 & 1) == 0) {
                                      uVar1 = param_1;
                                      func_0x0001096f1fac(param_1,&UNK_10e4ab3b8);
                                      if ((uVar1 & 1) == 0) {
                                        uVar1 = param_1;
                                        func_0x0001096f1fac(param_1,&UNK_10e4ab3c4);
                                        if ((uVar1 & 1) == 0) {
                                          uVar1 = param_1;
                                          func_0x0001096f1fac(param_1,&UNK_10e4ab3d0);
                                          if ((uVar1 & 1) == 0) {
                                            func_0x0001096f1fac(param_1,&UNK_10e4ab3dc);
                                            uVar2 = 0x15;
                                            if ((int)param_1 == 0) {
                                              uVar2 = 0xffffffff;
                                            }
                                          }
                                          else {
                                            uVar2 = 0x14;
                                          }
                                        }
                                        else {
                                          uVar2 = 0x13;
                                        }
                                      }
                                      else {
                                        uVar2 = 0x12;
                                      }
                                    }
                                    else {
                                      uVar2 = 0x10;
                                    }
                                  }
                                  else {
                                    uVar2 = 0xe;
                                  }
                                }
                                else {
                                  uVar2 = 0x11;
                                }
                              }
                              else {
                                uVar2 = 0xf;
                              }
                            }
                            else {
                              uVar2 = 0xd;
                            }
                          }
                          else {
                            uVar2 = 0xc;
                          }
                        }
                        else {
                          uVar2 = 0xb;
                        }
                      }
                      else {
                        uVar2 = 0x16;
                      }
                    }
                    else {
                      uVar2 = 10;
                    }
                  }
                  else {
                    uVar2 = 9;
                  }
                }
                else {
                  uVar2 = 8;
                }
              }
              else {
                uVar2 = 7;
              }
            }
            else {
              uVar2 = 5;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10a314fa4; end: 10a315057;  */

void FUN_10a314fa4(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 in_x4;
  ulong *in_x5;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 unaff_x24;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  int iVar23;
  undefined1 *puVar24;
  uint uVar25;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined1 *puStack_270;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  long lStack_158;
  undefined1 auStack_150 [72];
  undefined1 auStack_108 [208];
  long lStack_38;
  
  puVar10 = &uStack_170;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = param_2[0x1d];
  uStack_168 = param_2[1];
  uStack_170 = *param_2;
  uStack_160 = *(undefined4 *)(param_2 + 2);
  lStack_158 = param_2[3];
  if (lStack_158 != 0) {
    _memcpy(auStack_150,param_2 + 4,lStack_158 * 0x18);
  }
  func_0x0001096f22ac(auStack_108,param_2 + 0x1e);
  func_0x0001096f3848(param_1,auStack_108);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a00946c(&UNK_10f64deef);
  FUN_10a00946c(&UNK_10f64df2e);
  plVar21 = (long *)*in_x5;
  lVar18 = plVar21[0xb];
  uVar14 = (uint)in_x4;
  iVar23 = (int)puVar10;
  puVar24 = (undefined1 *)puVar10;
  if (*(int *)((long)plVar21 + 0x14) == 1) {
    uVar20 = (ulong)*(uint *)(plVar21 + 2);
    (**(code **)(*plVar21 + 0x18))(plVar21,uVar17,puVar10);
    FUN_10ad4b5fc(uVar20);
    FUN_10ad4bd78();
    iVar13 = 0;
    _glCompressedTexImage2D(0xde1,0,uVar20,uVar17,puVar10,0,plVar21,lVar18);
    if ((int)uVar14 < 1) {
      return;
    }
    _glTexParameteri(0xde1,0x813d,in_x4);
  }
  else {
    uVar20 = plVar21[0xc];
    if ((int)uVar14 < 1) {
      uVar5 = (ulong)*(uint *)(plVar21 + 2);
      FUN_10ad4b5fc(uVar5);
      FUN_10ad4bd78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__glCompressedTexImage2D_11034b448)(0xde1,0,uVar5,uVar17,puVar10,0,uVar20,lVar18)
      ;
      return;
    }
    _glTexParameteri(0xde1,0x813d,in_x4);
    plVar11 = plVar21;
    (**(code **)(*plVar21 + 0x18))(plVar21,uVar17,iVar23 / 2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar20;
    uVar20 = (ulong)*(uint *)(plVar21 + 2);
    FUN_10ad4b5fc(uVar20);
    FUN_10ad4bd78();
    plVar21 = (long *)(ulong)(SUB164(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffe);
    iVar13 = 0;
    _glCompressedTexImage2D(0xde1,0,uVar20,uVar17,puVar10,0,plVar21,lVar18 + (int)plVar11);
  }
  plVar11 = (long *)*in_x5;
  lVar18 = plVar11[0xb];
  iVar16 = (int)uVar17;
  if (*(int *)((long)plVar11 + 0x14) != 1) {
    if ((((iVar16 == 0) || (((long)iVar16 & (long)iVar16 - 1U) != 0)) || (iVar23 == 0)) ||
       (((long)iVar23 & (long)iVar23 - 1U) != 0)) {
      _glBindTexture(0xde1,0);
      uVar9 = (undefined4)in_x4;
      puVar7 = &UNK_10f64ddb2;
      FUN_10a00946c();
      __ZdaPv(unaff_x24);
      __Unwind_Resume(puVar7);
      plVar21 = (long *)*plVar21;
      lVar18 = plVar21[0xb];
      plVar8 = plVar21;
      puStack_270 = (undefined1 *)puVar10;
      (**(code **)(*plVar21 + 0x18))(plVar21,plVar11,puVar24);
      uVar17 = (ulong)((int)plVar8 * iVar13);
      uVar20 = uVar17;
      __Znam();
      _bzero();
      if (0 < iVar13) {
        uVar14 = 0;
        uVar22 = 0;
        lVar19 = plVar21[1];
        uVar5 = uVar20;
        iVar23 = iVar13;
        do {
          (**(code **)(*plVar21 + 0x20))
                    (plVar21,uVar5,lVar18,lVar19,uVar22 | (ulong)uVar14 << 0x20,
                     (ulong)plVar11 & 0xffffffff | (long)puVar24 << 0x20,0,0);
          plVar8 = plVar21;
          (**(code **)(*plVar21 + 0x18))(plVar21,plVar11,puVar24);
          uVar5 = uVar5 + (long)(int)plVar8;
          puStack_280 = &UNK_10f64df72;
          uStack_278 = 0x42;
          if (uVar20 + uVar17 < uVar5) {
            FUN_10a0edfc4(&puStack_280);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3156bc);
            (*pcVar4)();
          }
          uVar25 = (int)uVar22 + (int)plVar11;
          uVar12 = uVar25;
          if ((int)plVar21[1] <= (int)uVar25) {
            uVar12 = 0;
          }
          uVar22 = (ulong)uVar12;
          iVar16 = 0;
          if ((int)plVar21[1] <= (int)uVar25) {
            iVar16 = (int)puVar24;
          }
          uVar14 = iVar16 + uVar14;
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      uVar5 = (ulong)*(uint *)(plVar21 + 2);
      FUN_10ad4b5fc(uVar5);
      FUN_10ad4bd78();
      _glCompressedTexImage3D(uVar9,0,uVar5,plVar11,puVar24,iVar13,0,uVar17,uVar20);
    }
    else {
      uVar22 = (ulong)(uint)(iVar16 >> 1);
      uVar12 = iVar23 >> 1;
      plVar21 = plVar11;
      (**(code **)(*plVar11 + 0x18))(plVar11,uVar22,uVar12);
      uVar20 = (ulong)(int)plVar21;
      __Znam(uVar20);
      _bzero();
      uVar25 = 0;
      uVar5 = 0;
      iVar23 = 1;
      do {
        (**(code **)(*plVar11 + 0x20))
                  (plVar11,uVar20,lVar18,uVar17 & 0xffffffff | (long)puVar10 << 0x20,
                   uVar5 | (ulong)uVar25 << 0x20,uVar22 | (ulong)uVar12 << 0x20,0,0);
        plVar21 = plVar11;
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar22,uVar12);
        uVar6 = (ulong)*(uint *)(plVar11 + 2);
        FUN_10ad4b5fc(uVar6);
        FUN_10ad4bd78();
        _glCompressedTexImage2D(0xde1,iVar23,uVar6,uVar22,uVar12,0,plVar21,uVar20);
        uVar5 = (ulong)(uint)((int)uVar5 + (int)uVar22);
        uVar2 = (int)uVar22 >> 1;
        uVar12 = (int)uVar12 >> 1;
        uVar25 = uVar25 + uVar12;
        if ((int)uVar2 < 2) {
          uVar2 = 1;
        }
        uVar22 = (ulong)uVar2;
        if ((int)uVar12 < 2) {
          uVar12 = 1;
        }
        iVar23 = iVar23 + 1;
      } while (iVar23 - uVar14 != 1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(uVar20);
    return;
  }
  uVar25 = 0;
  iVar13 = 1;
  do {
    uVar5 = (ulong)*(uint *)(plVar11 + 2);
    func_0x00010ab79cbc(uVar5);
    lVar19 = 0;
    puVar24 = (undefined1 *)puVar10;
    uVar20 = uVar17;
    iVar15 = iVar13;
    do {
      uVar22 = uVar20;
      FUN_109fc8e58(uVar20,puVar24,uVar5);
      lVar19 = uVar22 + lVar19;
      uVar12 = (uint)(uVar20 >> 1) & 0x7fffffff;
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      uVar20 = (ulong)uVar12;
      uVar12 = (uint)((ulong)puVar24 >> 1) & 0x7fffffff;
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      puVar24 = (undefined1 *)(ulong)uVar12;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    uVar25 = uVar25 + 1;
    iVar15 = iVar16 >> (uVar25 & 0x1f);
    iVar1 = iVar23 >> (uVar25 & 0x1f);
    if (iVar15 < 2) {
      iVar15 = 1;
    }
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    FUN_109fc8e58(uVar20,puVar24,uVar5);
    uVar20 = (ulong)*(uint *)(plVar11 + 2);
    plVar21 = plVar11;
    (**(code **)(*plVar11 + 0x18))(plVar11,iVar15,iVar1);
    FUN_10ad4b5fc(uVar20);
    FUN_10ad4bd78();
    _glCompressedTexImage2D(0xde1,uVar25,uVar20,iVar15,iVar1,0,plVar21,lVar18 + lVar19);
    iVar13 = iVar13 + 1;
  } while (uVar25 != uVar14);
  return;
}



/* Entry: 10a315058; end: 10a31507f;  */

void FUN_10a315058(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,ulong *param_6)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined4 uVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 unaff_x24;
  ulong uVar19;
  long *plVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  undefined *puStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  
  FUN_10a00946c(&UNK_10f64deef);
  FUN_10a00946c(&UNK_10f64df2e);
  plVar20 = (long *)*param_6;
  lVar16 = plVar20[0xb];
  uVar13 = (uint)param_5;
  iVar21 = (int)param_4;
  uVar22 = param_4;
  if (*(int *)((long)plVar20 + 0x14) == 1) {
    uVar19 = (ulong)*(uint *)(plVar20 + 2);
    (**(code **)(*plVar20 + 0x18))(plVar20,param_3,param_4);
    FUN_10ad4b5fc(uVar19);
    FUN_10ad4bd78();
    iVar12 = 0;
    _glCompressedTexImage2D(0xde1,0,uVar19,param_3,param_4,0,plVar20,lVar16);
    if ((int)uVar13 < 1) {
      return;
    }
    _glTexParameteri(0xde1,0x813d,param_5);
  }
  else {
    uVar19 = plVar20[0xc];
    if ((int)uVar13 < 1) {
      uVar22 = (ulong)*(uint *)(plVar20 + 2);
      FUN_10ad4b5fc(uVar22);
      FUN_10ad4bd78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__glCompressedTexImage2D_11034b448)
                (0xde1,0,uVar22,param_3,param_4,0,uVar19,lVar16);
      return;
    }
    _glTexParameteri(0xde1,0x813d,param_5);
    plVar10 = plVar20;
    (**(code **)(*plVar20 + 0x18))(plVar20,param_3,iVar21 / 2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar19;
    uVar19 = (ulong)*(uint *)(plVar20 + 2);
    FUN_10ad4b5fc(uVar19);
    FUN_10ad4bd78();
    plVar20 = (long *)(ulong)(SUB164(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffe);
    iVar12 = 0;
    _glCompressedTexImage2D(0xde1,0,uVar19,param_3,param_4,0,plVar20,lVar16 + (int)plVar10);
  }
  plVar10 = (long *)*param_6;
  lVar16 = plVar10[0xb];
  iVar15 = (int)param_3;
  if (*(int *)((long)plVar10 + 0x14) != 1) {
    if ((((iVar15 == 0) || (((long)iVar15 & (long)iVar15 - 1U) != 0)) || (iVar21 == 0)) ||
       (((long)iVar21 & (long)iVar21 - 1U) != 0)) {
      _glBindTexture(0xde1,0);
      uVar9 = (undefined4)param_5;
      puVar7 = &UNK_10f64ddb2;
      FUN_10a00946c();
      __ZdaPv(unaff_x24);
      __Unwind_Resume(puVar7);
      plVar20 = (long *)*plVar20;
      lVar16 = plVar20[0xb];
      plVar8 = plVar20;
      uStack_100 = param_4;
      (**(code **)(*plVar20 + 0x18))(plVar20,plVar10,uVar22);
      uVar5 = (ulong)((int)plVar8 * iVar12);
      uVar19 = uVar5;
      __Znam();
      _bzero();
      if (0 < iVar12) {
        uVar13 = 0;
        uVar18 = 0;
        lVar17 = plVar20[1];
        uVar6 = uVar19;
        iVar21 = iVar12;
        do {
          (**(code **)(*plVar20 + 0x20))
                    (plVar20,uVar6,lVar16,lVar17,uVar18 | (ulong)uVar13 << 0x20,
                     (ulong)plVar10 & 0xffffffff | uVar22 << 0x20,0,0);
          plVar8 = plVar20;
          (**(code **)(*plVar20 + 0x18))(plVar20,plVar10,uVar22);
          uVar6 = uVar6 + (long)(int)plVar8;
          puStack_110 = &UNK_10f64df72;
          uStack_108 = 0x42;
          if (uVar19 + uVar5 < uVar6) {
            FUN_10a0edfc4(&puStack_110);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3156bc);
            (*pcVar4)();
          }
          uVar23 = (int)uVar18 + (int)plVar10;
          uVar11 = uVar23;
          if ((int)plVar20[1] <= (int)uVar23) {
            uVar11 = 0;
          }
          uVar18 = (ulong)uVar11;
          iVar15 = 0;
          if ((int)plVar20[1] <= (int)uVar23) {
            iVar15 = (int)uVar22;
          }
          uVar13 = iVar15 + uVar13;
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
      }
      uVar6 = (ulong)*(uint *)(plVar20 + 2);
      FUN_10ad4b5fc(uVar6);
      FUN_10ad4bd78();
      _glCompressedTexImage3D(uVar9,0,uVar6,plVar10,uVar22,iVar12,0,uVar5,uVar19);
    }
    else {
      uVar5 = (ulong)(uint)(iVar15 >> 1);
      uVar11 = iVar21 >> 1;
      plVar20 = plVar10;
      (**(code **)(*plVar10 + 0x18))(plVar10,uVar5,uVar11);
      uVar19 = (ulong)(int)plVar20;
      __Znam(uVar19);
      _bzero();
      uVar23 = 0;
      uVar22 = 0;
      iVar21 = 1;
      do {
        (**(code **)(*plVar10 + 0x20))
                  (plVar10,uVar19,lVar16,param_3 & 0xffffffff | param_4 << 0x20,
                   uVar22 | (ulong)uVar23 << 0x20,uVar5 | (ulong)uVar11 << 0x20,0,0);
        plVar20 = plVar10;
        (**(code **)(*plVar10 + 0x18))(plVar10,uVar5,uVar11);
        uVar6 = (ulong)*(uint *)(plVar10 + 2);
        FUN_10ad4b5fc(uVar6);
        FUN_10ad4bd78();
        _glCompressedTexImage2D(0xde1,iVar21,uVar6,uVar5,uVar11,0,plVar20,uVar19);
        uVar22 = (ulong)(uint)((int)uVar22 + (int)uVar5);
        uVar2 = (int)uVar5 >> 1;
        uVar11 = (int)uVar11 >> 1;
        uVar23 = uVar23 + uVar11;
        if ((int)uVar2 < 2) {
          uVar2 = 1;
        }
        uVar5 = (ulong)uVar2;
        if ((int)uVar11 < 2) {
          uVar11 = 1;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 - uVar13 != 1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(uVar19);
    return;
  }
  uVar23 = 0;
  iVar12 = 1;
  do {
    uVar5 = (ulong)*(uint *)(plVar10 + 2);
    func_0x00010ab79cbc(uVar5);
    lVar17 = 0;
    uVar22 = param_4;
    uVar19 = param_3;
    iVar14 = iVar12;
    do {
      uVar6 = uVar19;
      FUN_109fc8e58(uVar19,uVar22,uVar5);
      lVar17 = uVar6 + lVar17;
      uVar11 = (uint)(uVar19 >> 1) & 0x7fffffff;
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      uVar19 = (ulong)uVar11;
      uVar11 = (uint)(uVar22 >> 1) & 0x7fffffff;
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      uVar22 = (ulong)uVar11;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    uVar23 = uVar23 + 1;
    iVar14 = iVar15 >> (uVar23 & 0x1f);
    iVar1 = iVar21 >> (uVar23 & 0x1f);
    if (iVar14 < 2) {
      iVar14 = 1;
    }
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    FUN_109fc8e58(uVar19,uVar22,uVar5);
    uVar22 = (ulong)*(uint *)(plVar10 + 2);
    plVar20 = plVar10;
    (**(code **)(*plVar10 + 0x18))(plVar10,iVar14,iVar1);
    FUN_10ad4b5fc(uVar22);
    FUN_10ad4bd78();
    _glCompressedTexImage2D(0xde1,uVar23,uVar22,iVar14,iVar1,0,plVar20,lVar16 + lVar17);
    iVar12 = iVar12 + 1;
  } while (uVar23 != uVar13);
  return;
}



/* Entry: 10a315080; end: 10a31522f;  */

void FUN_10a315080(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,ulong *param_6)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined4 uVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 unaff_x24;
  ulong uVar19;
  long *plVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  
  plVar20 = (long *)*param_6;
  lVar16 = plVar20[0xb];
  uVar13 = (uint)param_5;
  iVar21 = (int)param_4;
  uVar22 = param_4;
  if (*(int *)((long)plVar20 + 0x14) == 1) {
    uVar19 = (ulong)*(uint *)(plVar20 + 2);
    (**(code **)(*plVar20 + 0x18))(plVar20,param_3,param_4);
    FUN_10ad4b5fc(uVar19);
    FUN_10ad4bd78();
    iVar12 = 0;
    _glCompressedTexImage2D(0xde1,0,uVar19,param_3,param_4,0,plVar20,lVar16);
    if ((int)uVar13 < 1) {
      return;
    }
    _glTexParameteri(0xde1,0x813d,param_5);
  }
  else {
    uVar19 = plVar20[0xc];
    if ((int)uVar13 < 1) {
      uVar22 = (ulong)*(uint *)(plVar20 + 2);
      FUN_10ad4b5fc(uVar22);
      FUN_10ad4bd78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__glCompressedTexImage2D_11034b448)
                (0xde1,0,uVar22,param_3,param_4,0,uVar19,lVar16);
      return;
    }
    _glTexParameteri(0xde1,0x813d,param_5);
    plVar10 = plVar20;
    (**(code **)(*plVar20 + 0x18))(plVar20,param_3,iVar21 / 2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar19;
    uVar19 = (ulong)*(uint *)(plVar20 + 2);
    FUN_10ad4b5fc(uVar19);
    FUN_10ad4bd78();
    plVar20 = (long *)(ulong)(SUB164(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffe);
    iVar12 = 0;
    _glCompressedTexImage2D(0xde1,0,uVar19,param_3,param_4,0,plVar20,lVar16 + (int)plVar10);
  }
  plVar10 = (long *)*param_6;
  lVar16 = plVar10[0xb];
  iVar15 = (int)param_3;
  if (*(int *)((long)plVar10 + 0x14) != 1) {
    if ((((iVar15 == 0) || (((long)iVar15 & (long)iVar15 - 1U) != 0)) || (iVar21 == 0)) ||
       (((long)iVar21 & (long)iVar21 - 1U) != 0)) {
      _glBindTexture(0xde1,0);
      uVar9 = (undefined4)param_5;
      puVar7 = &UNK_10f64ddb2;
      FUN_10a00946c();
      __ZdaPv(unaff_x24);
      __Unwind_Resume(puVar7);
      plVar20 = (long *)*plVar20;
      lVar16 = plVar20[0xb];
      plVar8 = plVar20;
      uStack_e0 = param_4;
      (**(code **)(*plVar20 + 0x18))(plVar20,plVar10,uVar22);
      uVar5 = (ulong)((int)plVar8 * iVar12);
      uVar19 = uVar5;
      __Znam();
      _bzero();
      if (0 < iVar12) {
        uVar13 = 0;
        uVar18 = 0;
        lVar17 = plVar20[1];
        uVar6 = uVar19;
        iVar21 = iVar12;
        do {
          (**(code **)(*plVar20 + 0x20))
                    (plVar20,uVar6,lVar16,lVar17,uVar18 | (ulong)uVar13 << 0x20,
                     (ulong)plVar10 & 0xffffffff | uVar22 << 0x20,0,0);
          plVar8 = plVar20;
          (**(code **)(*plVar20 + 0x18))(plVar20,plVar10,uVar22);
          uVar6 = uVar6 + (long)(int)plVar8;
          puStack_f0 = &UNK_10f64df72;
          uStack_e8 = 0x42;
          if (uVar19 + uVar5 < uVar6) {
            FUN_10a0edfc4(&puStack_f0);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a3156bc);
            (*pcVar4)();
          }
          uVar23 = (int)uVar18 + (int)plVar10;
          uVar11 = uVar23;
          if ((int)plVar20[1] <= (int)uVar23) {
            uVar11 = 0;
          }
          uVar18 = (ulong)uVar11;
          iVar15 = 0;
          if ((int)plVar20[1] <= (int)uVar23) {
            iVar15 = (int)uVar22;
          }
          uVar13 = iVar15 + uVar13;
          iVar21 = iVar21 + -1;
        } while (iVar21 != 0);
      }
      uVar6 = (ulong)*(uint *)(plVar20 + 2);
      FUN_10ad4b5fc(uVar6);
      FUN_10ad4bd78();
      _glCompressedTexImage3D(uVar9,0,uVar6,plVar10,uVar22,iVar12,0,uVar5,uVar19);
    }
    else {
      uVar5 = (ulong)(uint)(iVar15 >> 1);
      uVar11 = iVar21 >> 1;
      plVar20 = plVar10;
      (**(code **)(*plVar10 + 0x18))(plVar10,uVar5,uVar11);
      uVar19 = (ulong)(int)plVar20;
      __Znam(uVar19);
      _bzero();
      uVar23 = 0;
      uVar22 = 0;
      iVar21 = 1;
      do {
        (**(code **)(*plVar10 + 0x20))
                  (plVar10,uVar19,lVar16,param_3 & 0xffffffff | param_4 << 0x20,
                   uVar22 | (ulong)uVar23 << 0x20,uVar5 | (ulong)uVar11 << 0x20,0,0);
        plVar20 = plVar10;
        (**(code **)(*plVar10 + 0x18))(plVar10,uVar5,uVar11);
        uVar6 = (ulong)*(uint *)(plVar10 + 2);
        FUN_10ad4b5fc(uVar6);
        FUN_10ad4bd78();
        _glCompressedTexImage2D(0xde1,iVar21,uVar6,uVar5,uVar11,0,plVar20,uVar19);
        uVar22 = (ulong)(uint)((int)uVar22 + (int)uVar5);
        uVar2 = (int)uVar5 >> 1;
        uVar11 = (int)uVar11 >> 1;
        uVar23 = uVar23 + uVar11;
        if ((int)uVar2 < 2) {
          uVar2 = 1;
        }
        uVar5 = (ulong)uVar2;
        if ((int)uVar11 < 2) {
          uVar11 = 1;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 - uVar13 != 1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(uVar19);
    return;
  }
  uVar23 = 0;
  iVar12 = 1;
  do {
    uVar5 = (ulong)*(uint *)(plVar10 + 2);
    func_0x00010ab79cbc(uVar5);
    lVar17 = 0;
    uVar22 = param_4;
    uVar19 = param_3;
    iVar14 = iVar12;
    do {
      uVar6 = uVar19;
      FUN_109fc8e58(uVar19,uVar22,uVar5);
      lVar17 = uVar6 + lVar17;
      uVar11 = (uint)(uVar19 >> 1) & 0x7fffffff;
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      uVar19 = (ulong)uVar11;
      uVar11 = (uint)(uVar22 >> 1) & 0x7fffffff;
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      uVar22 = (ulong)uVar11;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    uVar23 = uVar23 + 1;
    iVar14 = iVar15 >> (uVar23 & 0x1f);
    iVar1 = iVar21 >> (uVar23 & 0x1f);
    if (iVar14 < 2) {
      iVar14 = 1;
    }
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    FUN_109fc8e58(uVar19,uVar22,uVar5);
    uVar22 = (ulong)*(uint *)(plVar10 + 2);
    plVar20 = plVar10;
    (**(code **)(*plVar10 + 0x18))(plVar10,iVar14,iVar1);
    FUN_10ad4b5fc(uVar22);
    FUN_10ad4bd78();
    _glCompressedTexImage2D(0xde1,uVar23,uVar22,iVar14,iVar1,0,plVar20,lVar16 + lVar17);
    iVar12 = iVar12 + 1;
  } while (uVar23 != uVar13);
  return;
}



/* Entry: 10a315230; end: 10a315527;  */

void FUN_10a315230(ulong param_1,ulong param_2,uint param_3,long *param_4,long param_5,int param_6,
                  undefined8 *param_7)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  
  lVar9 = param_4[0xb];
  iVar15 = (int)param_1;
  iVar12 = (int)param_2;
  if (*(int *)((long)param_4 + 0x14) == 1) {
    uVar18 = 0;
    iVar10 = 1;
    do {
      uVar4 = (ulong)*(uint *)(param_4 + 2);
      func_0x00010ab79cbc(uVar4);
      lVar13 = 0;
      uVar16 = param_2;
      uVar17 = param_1;
      iVar11 = iVar10;
      do {
        uVar5 = uVar17;
        FUN_109fc8e58(uVar17,uVar16,uVar4);
        lVar13 = uVar5 + lVar13;
        uVar8 = (uint)(uVar17 >> 1) & 0x7fffffff;
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        uVar17 = (ulong)uVar8;
        uVar8 = (uint)(uVar16 >> 1) & 0x7fffffff;
        if (uVar8 < 2) {
          uVar8 = 1;
        }
        uVar16 = (ulong)uVar8;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar18 = uVar18 + 1;
      iVar11 = iVar15 >> (uVar18 & 0x1f);
      iVar1 = iVar12 >> (uVar18 & 0x1f);
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      if (iVar1 < 2) {
        iVar1 = 1;
      }
      FUN_109fc8e58(uVar17,uVar16,uVar4);
      uVar16 = (ulong)*(uint *)(param_4 + 2);
      plVar7 = param_4;
      (**(code **)(*param_4 + 0x18))(param_4,iVar11,iVar1);
      FUN_10ad4b5fc(uVar16);
      FUN_10ad4bd78();
      _glCompressedTexImage2D(0xde1,uVar18,uVar16,iVar11,iVar1,0,plVar7,lVar9 + lVar13);
      iVar10 = iVar10 + 1;
    } while (uVar18 != param_3);
    return;
  }
  if ((((iVar15 == 0) || (((long)iVar15 & (long)iVar15 - 1U) != 0)) || (iVar12 == 0)) ||
     (((long)iVar12 & (long)iVar12 - 1U) != 0)) {
    _glBindTexture(0xde1,0);
    puVar6 = &UNK_10f64ddb2;
    FUN_10a00946c();
    __ZdaPv();
    __Unwind_Resume(puVar6);
    plVar14 = (long *)*param_7;
    lVar9 = plVar14[0xb];
    plVar7 = plVar14;
    uStack_e0 = param_2;
    (**(code **)(*plVar14 + 0x18))(plVar14,param_4,param_5);
    uVar17 = (ulong)((int)plVar7 * param_6);
    uVar16 = uVar17;
    __Znam();
    _bzero();
    if (0 < param_6) {
      uVar18 = 0;
      uVar5 = 0;
      lVar13 = plVar14[1];
      uVar4 = uVar16;
      iVar15 = param_6;
      do {
        (**(code **)(*plVar14 + 0x20))
                  (plVar14,uVar4,lVar9,lVar13,uVar5 | (ulong)uVar18 << 0x20,
                   (ulong)param_4 & 0xffffffff | param_5 << 0x20,0,0);
        plVar7 = plVar14;
        (**(code **)(*plVar14 + 0x18))(plVar14,param_4,param_5);
        uVar4 = uVar4 + (long)(int)plVar7;
        puStack_f0 = &UNK_10f64df72;
        uStack_e8 = 0x42;
        if (uVar16 + uVar17 < uVar4) {
          FUN_10a0edfc4(&puStack_f0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3156bc);
          (*pcVar3)();
        }
        uVar8 = (int)uVar5 + (int)param_4;
        uVar2 = uVar8;
        if ((int)plVar14[1] <= (int)uVar8) {
          uVar2 = 0;
        }
        uVar5 = (ulong)uVar2;
        iVar12 = 0;
        if ((int)plVar14[1] <= (int)uVar8) {
          iVar12 = (int)param_5;
        }
        uVar18 = iVar12 + uVar18;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
    uVar4 = (ulong)*(uint *)(plVar14 + 2);
    FUN_10ad4b5fc(uVar4);
    FUN_10ad4bd78();
    _glCompressedTexImage3D(param_3,0,uVar4,param_4,param_5,param_6,0,uVar17,uVar16);
  }
  else {
    uVar4 = (ulong)(uint)(iVar15 >> 1);
    uVar8 = iVar12 >> 1;
    plVar7 = param_4;
    (**(code **)(*param_4 + 0x18))(param_4,uVar4,uVar8);
    uVar16 = (ulong)(int)plVar7;
    __Znam(uVar16);
    _bzero();
    uVar18 = 0;
    uVar17 = 0;
    iVar15 = 1;
    do {
      (**(code **)(*param_4 + 0x20))
                (param_4,uVar16,lVar9,param_1 & 0xffffffff | param_2 << 0x20,
                 uVar17 | (ulong)uVar18 << 0x20,uVar4 | (ulong)uVar8 << 0x20,0,0);
      plVar7 = param_4;
      (**(code **)(*param_4 + 0x18))(param_4,uVar4,uVar8);
      uVar5 = (ulong)*(uint *)(param_4 + 2);
      FUN_10ad4b5fc(uVar5);
      FUN_10ad4bd78();
      _glCompressedTexImage2D(0xde1,iVar15,uVar5,uVar4,uVar8,0,plVar7,uVar16);
      uVar17 = (ulong)(uint)((int)uVar17 + (int)uVar4);
      uVar2 = (int)uVar4 >> 1;
      uVar8 = (int)uVar8 >> 1;
      uVar18 = uVar18 + uVar8;
      if ((int)uVar2 < 2) {
        uVar2 = 1;
      }
      uVar4 = (ulong)uVar2;
      if ((int)uVar8 < 2) {
        uVar8 = 1;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 - param_3 != 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(uVar16);
  return;
}



/* Entry: 10a315528; end: 10a3156db;  */

void FUN_10a315528(undefined8 param_1,undefined8 param_2,undefined4 param_3,ulong param_4,
                  long param_5,int param_6,undefined8 *param_7)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  plVar12 = (long *)*param_7;
  lVar7 = plVar12[0xb];
  plVar4 = plVar12;
  (**(code **)(*plVar12 + 0x18))(plVar12,param_4,param_5);
  uVar9 = (ulong)((int)plVar4 * param_6);
  uVar5 = uVar9;
  __Znam();
  _bzero();
  if (0 < param_6) {
    uVar8 = 0;
    uVar11 = 0;
    lVar14 = plVar12[1];
    uVar6 = uVar5;
    iVar13 = param_6;
    do {
      (**(code **)(*plVar12 + 0x20))
                (plVar12,uVar6,lVar7,lVar14,uVar11 | (ulong)uVar8 << 0x20,
                 param_4 & 0xffffffff | param_5 << 0x20,0,0);
      plVar4 = plVar12;
      (**(code **)(*plVar12 + 0x18))(plVar12,param_4,param_5);
      uVar6 = uVar6 + (long)(int)plVar4;
      puStack_70 = &UNK_10f64df72;
      uStack_68 = 0x42;
      if (uVar5 + uVar9 < uVar6) {
        FUN_10a0edfc4(&puStack_70);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a3156bc);
        (*pcVar3)();
      }
      uVar1 = (int)uVar11 + (int)param_4;
      uVar2 = uVar1;
      if ((int)plVar12[1] <= (int)uVar1) {
        uVar2 = 0;
      }
      uVar11 = (ulong)uVar2;
      iVar10 = 0;
      if ((int)plVar12[1] <= (int)uVar1) {
        iVar10 = (int)param_5;
      }
      uVar8 = iVar10 + uVar8;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  uVar6 = (ulong)*(uint *)(plVar12 + 2);
  FUN_10ad4b5fc(uVar6);
  FUN_10ad4bd78();
  _glCompressedTexImage3D(param_3,0,uVar6,param_4,param_5,param_6,0,uVar9,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(uVar5);
  return;
}



/* Entry: 10a3156dc; end: 10a3158cb;  */

void FUN_10a3156dc(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  
  plVar7 = (long *)*param_5;
  lVar8 = plVar7[0xb];
  if (*(int *)((long)plVar7 + 0x14) == 1) {
    lVar12 = 0;
    do {
      uVar3 = (ulong)*(uint *)(plVar7 + 2);
      func_0x00010ab79cbc(uVar3);
      uVar10 = param_3;
      FUN_109fc8e58(param_3,param_4,uVar3);
      uVar3 = (ulong)*(uint *)(plVar7 + 2);
      plVar4 = plVar7;
      (**(code **)(*plVar7 + 0x18))(plVar7,param_3,param_4);
      FUN_10ad4b5fc(uVar3);
      FUN_10ad4bd78();
      _glCompressedTexImage2D
                ((int)lVar12 + 0x8515,0,uVar3,param_3,param_4,0,plVar4,lVar8 + uVar10 * lVar12);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 6);
    return;
  }
  plVar4 = plVar7;
  (**(code **)(*plVar7 + 0x18))(plVar7,param_3,param_4);
  lVar12 = (long)(int)plVar4;
  __Znam(lVar12);
  _bzero();
  uVar9 = 0;
  uVar10 = 0;
  lVar5 = plVar7[1];
  iVar11 = 6;
  iVar13 = 0x8515;
  do {
    (**(code **)(*plVar7 + 0x20))
              (plVar7,lVar12,lVar8,lVar5,uVar10 | (ulong)uVar9 << 0x20,
               param_3 & 0xffffffff | param_4 << 0x20,0,0);
    uVar3 = (ulong)*(uint *)(plVar7 + 2);
    FUN_10ad4b5fc(uVar3);
    FUN_10ad4bd78();
    _glCompressedTexImage2D(iVar13,0,uVar3,param_3,param_4,0,plVar4,lVar12);
    uVar1 = (int)uVar10 + (int)param_3;
    uVar2 = uVar1;
    if ((int)plVar7[1] <= (int)uVar1) {
      uVar2 = 0;
    }
    uVar10 = (ulong)uVar2;
    iVar6 = 0;
    if ((int)plVar7[1] <= (int)uVar1) {
      iVar6 = (int)param_4;
    }
    uVar9 = iVar6 + uVar9;
    iVar13 = iVar13 + 1;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(lVar12);
  return;
}



/* Entry: 10a3158cc; end: 10a315a03;  */

undefined8 FUN_10a3158cc(ulong param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  ulong uVar8;
  
  uVar4 = (uint)param_1;
  uVar8 = param_1 & 0xffffffff;
  ppuVar6 = &PTR_DAT_110ae4700 + uVar8 * 4;
  if (0x56 < uVar4) {
    ppuVar6 = &PTR_DAT_110ae4700;
  }
  if (*(byte *)(ppuVar6 + 3) < 2 && *(byte *)((long)ppuVar6 + 0x19) < 2) {
    FUN_10ad4c000();
    if (0x56 < uVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a315a00);
      (*pcVar3)();
    }
    lVar7 = param_1 + uVar8 * 0xc;
    uVar1 = *(uint *)(lVar7 + 4);
    uVar8 = (ulong)uVar1;
    if ((uVar1 != 0) && (iVar2 = *(int *)(lVar7 + 8), iVar2 != 0x1406 && iVar2 != 0x140b)) {
      if ((int)uVar1 < 0x80e1) {
        if ((int)uVar1 < 0x1908) {
          if (uVar1 == 0x1902) {
            return 0x14;
          }
          if (uVar1 == 0x1903) {
            return 6;
          }
          if (uVar1 == 0x1907) {
            return 3;
          }
        }
        else {
          if (uVar1 == 0x1908) {
            return 1;
          }
          if (uVar1 == 0x1909) {
            return 7;
          }
          if (uVar1 == 0x190a) {
            return 2;
          }
        }
      }
      else if ((int)uVar1 < 0x84f9) {
        if (uVar1 == 0x80e1) {
          return 5;
        }
        if (uVar1 == 0x8227) {
          return 9;
        }
        if (uVar1 == 0x8228) {
          return 0x13;
        }
      }
      else {
        if (uVar1 == 0x84f9) {
          return 0xd;
        }
        if (uVar1 == 0x8d99) {
          return 0xe;
        }
        if (uVar1 == 0x8d94) {
          return 0x12;
        }
      }
      func_0x00010925651c();
      FUN_10ae030a0(0,uVar8);
      ppuVar6 = &PTR_PTR_1133014d0;
      FUN_10ae079a0();
      FUN_10ae030d8();
      FUN_10ae07cd4(ppuVar6,&PTR_PTR_1133014d0);
      return 0xffffffff;
    }
  }
  uVar5 = 7;
  switch(uVar4) {
  case 1:
  case 0x23:
    uVar5 = 6;
    break;
  case 2:
  case 0x21:
  case 0x24:
    uVar5 = 9;
    break;
  case 3:
    uVar5 = 3;
    break;
  case 4:
  case 0x29:
    uVar5 = 1;
    break;
  default:
    func_0x00010a316d50(&stack0xffffffffffffffdc);
  case 0x2c:
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
    uVar5 = 0xffffffff;
    break;
  case 0xc:
    uVar5 = 0x10;
    break;
  case 0x13:
  case 0x1c:
    uVar5 = 0xe;
    break;
  case 0x14:
    uVar5 = 0x12;
    break;
  case 0x20:
    uVar5 = 0xf;
    break;
  case 0x22:
    uVar5 = 0xb;
    break;
  case 0x25:
    uVar5 = 0xc;
    break;
  case 0x26:
    break;
  case 0x27:
    uVar5 = 5;
    break;
  case 0x2e:
  case 0x2f:
    uVar5 = 0xd;
  }
  return uVar5;
}



/* Entry: 10a315a04; end: 10a315b2f;  */

ulong FUN_10a315a04(uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  undefined **ppuVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puStack_58;
  undefined8 uStack_50;
  char cStack_41;
  
  uVar5 = 1;
  FUN_10a303694();
  if ((*(uint *)(uVar5 + 0x228) < param_1 || *(uint *)(uVar5 + 0x228) < param_2) ||
     (*(int *)(uVar5 + 0x1f0) != 2000 && *(uint *)(uVar5 + 0x22c) < param_3)) {
    FUN_10a0ee900(&puStack_58,&UNK_10f64dfb5,0xce);
    FUN_10a0029c0(&puStack_58);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a315afc);
    (*pcVar4)();
  }
  if (param_3 == 1) {
    if ((param_4 == 0xde1) || (param_4 == 0x84f5)) {
      puStack_58 = &UNK_10f64e0a6;
      uStack_50 = 0x23;
      if (param_5 != 4) {
        return uVar5;
      }
    }
    else {
      puStack_58 = &UNK_10f64e084;
      uStack_50 = 0x21;
    }
  }
  else {
    puStack_58 = &UNK_10f64e084;
    uStack_50 = 0x21;
    if ((param_3 != 0) && (param_4 == 0x8c1a)) {
      return uVar5;
    }
  }
  ppuVar6 = &puStack_58;
  FUN_10a0edfc4();
  if (cStack_41 < '\0') {
    __ZdlPv(puStack_58);
  }
  __Unwind_Resume();
  ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)((long)ppuVar6 + 0x34) * 4;
  if (0x56 < *(uint *)((long)ppuVar6 + 0x34)) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  if (*(byte *)((long)ppuVar1 + 0x1a) == 0) {
    func_0x000109243bf8(&UNK_10f62e152);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a315b88);
    (*pcVar4)();
  }
  bVar2 = *(byte *)(ppuVar1 + 3);
  uVar3 = 0;
  if (bVar2 != 0) {
    uVar3 = ((*(int *)(ppuVar6 + 3) + (uint)bVar2) - 1) / (uint)bVar2;
  }
  return (ulong)(uVar3 * *(byte *)((long)ppuVar1 + 0x1a));
}



/* Entry: 10a315b30; end: 10a315b8b;  */

int FUN_10a315b30(long param_1)

{
  undefined **ppuVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  
  ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 0x34) * 4;
  if (0x56 < *(uint *)(param_1 + 0x34)) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  if (*(byte *)((long)ppuVar1 + 0x1a) != 0) {
    bVar2 = *(byte *)(ppuVar1 + 3);
    uVar3 = 0;
    if (bVar2 != 0) {
      uVar3 = ((*(int *)(param_1 + 0x18) + (uint)bVar2) - 1) / (uint)bVar2;
    }
    return uVar3 * *(byte *)((long)ppuVar1 + 0x1a);
  }
  func_0x000109243bf8(&UNK_10f62e152);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a315b88);
  (*pcVar4)();
}



/* Entry: 10a315b8c; end: 10a315bfb;  */

long * FUN_10a315b8c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar1 = &puStack_20;
  puStack_20 = &UNK_10f64e0ca;
  uStack_18 = 0x2e;
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    return *(long **)(param_1 + 8);
  }
  FUN_10a0edfc4();
  ppuVar2 = &puStack_40;
  uStack_28 = 0x10a315bc4;
  puStack_40 = &UNK_10f64e0ca;
  uStack_38 = 0x2e;
  if (*(long *)((long)ppuVar1 + 8) != 0) {
    return (long *)((long)ppuVar1 + 8);
  }
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0edfc4();
  (**(code **)((long)*ppuVar2 + 0x30))();
  if (*(int *)((long)ppuVar2[3] + 0x734) == 1) {
    func_0x00010926dea0(ppuVar2,0);
    plVar3 = (long *)(ulong)*(uint *)((long)ppuVar2 + 0xac);
  }
  else {
    plVar3 = (long *)0x0;
  }
  return plVar3;
}



/* Entry: 10a315bfc; end: 10a315c4f;  */

undefined4 FUN_10a315bfc(long *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x30))();
  if (*(int *)(param_1[3] + 0x734) == 1) {
    func_0x00010926dea0(param_1,0);
    uVar1 = *(undefined4 *)((long)param_1 + 0xac);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10a315c50; end: 10a315c67;  */

void FUN_10a315c50(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a315c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))();
  return;
}



/* Entry: 10a315c68; end: 10a315d4b;  */

void FUN_10a315c68(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
  return;
}



/* Entry: 10a315d4c; end: 10a316033;  */

undefined8 *
FUN_10a315d4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9
             )

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puStack_80;
  long *plStack_78;
  undefined *puStack_70;
  long *plStack_68;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0x100000000;
  param_1[8] = 0x500000004;
  param_1[7] = 0x300000002;
  *(undefined4 *)(param_1 + 9) = 0;
  *(int *)((long)param_1 + 0x4c) = param_6;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = (undefined1)param_9;
  *param_1 = &PTR_DAT_110bc39d0;
  *(undefined1 *)((long)param_1 + 0x55) = 0;
  *(int *)(param_1 + 0xb) = (int)param_8;
  if (param_6 == 0xb) {
    uVar9 = 3;
  }
  else {
    if (param_6 != 0xc) goto LAB_10a315df8;
    uVar9 = 4;
  }
  *(undefined4 *)(param_1 + 0xb) = uVar9;
LAB_10a315df8:
  FUN_10a315a04(param_3,param_4,param_5,param_2);
  uVar10 = param_3;
  if ((uint)param_5 < 2) {
    FUN_10ad4ae74(param_3,param_4,1,*(undefined4 *)((long)param_1 + 0x4c),
                  *(undefined4 *)(param_1 + 0xb));
  }
  else {
    puStack_70 = &UNK_10f64e0f9;
    plStack_68 = (long *)0x1f;
    if ((int)param_2 != 0x8c1a) {
      FUN_10a0edfc4(&puStack_70);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a315ff8);
      (*pcVar5)();
    }
    FUN_10ad4af94(param_3,param_4,param_5,1,1,*(undefined4 *)((long)param_1 + 0x4c),
                  *(undefined4 *)(param_1 + 0xb));
  }
  FUN_10a303694(1);
  FUN_10a303840();
  uVar9 = 1;
  if (param_9._1_1_ != '\0') {
    puStack_70 = (undefined *)CONCAT44((int)param_4,(int)param_3);
    plStack_68 = (long *)CONCAT44(plStack_68._4_4_,1);
    uVar9 = SUB84(&puStack_70,0);
    func_0x000109296754();
  }
  uVar8 = (ulong)*(uint *)((long)param_1 + 0x4c);
  FUN_10ad4b390(param_8);
  func_0x00010ad4c21c(uVar8,param_8);
  FUN_10a316e3c(&puStack_70,param_3,param_4,param_5,uVar8,uVar10,param_2,1,param_7,uVar9);
  plStack_78 = plStack_68;
  puStack_80 = puStack_70;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x00010a169c14(param_1 + 1,&puStack_80);
  plVar1 = plStack_78;
  lVar7 = param_1[1];
  uVar11 = *(undefined8 *)(lVar7 + 0x3c);
  uVar10 = *(undefined8 *)(lVar7 + 0x34);
  uVar13 = *(undefined8 *)(lVar7 + 0x4c);
  uVar12 = *(undefined8 *)(lVar7 + 0x44);
  uVar9 = *(undefined4 *)(lVar7 + 0x54);
  uVar14 = *(undefined8 *)(lVar7 + 0x24);
  param_1[4] = *(undefined8 *)(lVar7 + 0x2c);
  param_1[3] = uVar14;
  *(undefined4 *)(param_1 + 9) = uVar9;
  param_1[8] = uVar13;
  param_1[7] = uVar12;
  param_1[6] = uVar11;
  param_1[5] = uVar10;
  if (plStack_78 != (long *)0x0) {
    plVar2 = plStack_78 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar6 = (uint *)0x113834ef0;
  FUN_10a1c5e98();
  plVar1 = plStack_68;
  *(byte *)((long)param_1 + 0x55) = (byte)(*puVar6 >> 7) & 1;
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return param_1;
}



/* Entry: 10a316034; end: 10a31613f;  */

/* WARNING: Removing unreachable block (ram,0x00010a30390c) */

void FUN_10a316034(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar3 = 1;
  FUN_10a303694();
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10a303840(lVar3,0xde1,plVar4,0);
  _glPixelStorei(0xd05,1);
  _glPixelStorei(0xcf5,1);
  if (((int)param_1[0xb] == (int)param_3) ||
     ((uVar6 = 2, (int)param_3 == 4 && ((int)param_1[0xb] == 3)))) {
    uVar6 = 3;
  }
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x48))(param_1);
  lVar2 = param_1[3];
  uVar1 = *(undefined4 *)((long)param_1 + 0x1c);
  uVar5 = (ulong)*(uint *)((long)param_1 + 0x34);
  FUN_10a3158cc(uVar5);
  FUN_10ad4b248(plVar4,0xde1,uVar6,(int)lVar2,uVar1,uVar5,(int)param_1[0xb],param_3,param_2,0,0);
  if ((*(char *)(lVar3 + 0x270) != '\x01') || (*(int *)(lVar3 + 0xb0) != 0)) {
    _glActiveTexture(0x84c0);
    *(undefined4 *)(lVar3 + 0xb0) = 0;
    if (*(char *)(lVar3 + 0x270) != '\x01') {
      _glBindTexture(0xde1,0);
      goto LAB_10a3038e4;
    }
  }
  if ((*(int *)(lVar3 + 0x10c) == 0) && (*(int *)(lVar3 + 0x14c) == 0xde1)) {
    return;
  }
  _glBindTexture(0xde1,0);
LAB_10a3038e4:
  *(undefined4 *)(lVar3 + 0x10c) = 0;
  *(undefined4 *)(lVar3 + 0x14c) = 0xde1;
  *(int *)(lVar3 + 0x27c) = *(int *)(lVar3 + 0x27c) + 1;
  return;
}



/* Entry: 10a316140; end: 10a3161bb;  */

undefined8 FUN_10a316140(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  if ((*(uint *)(param_2 + 0x24) & 0xfffffffb) != 0xb) {
    uVar1 = 1;
  }
  FUN_10a315d4c(param_1,0xde1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),1,
                *(uint *)(param_2 + 0x24),0x35,uVar1,0x100);
  FUN_10a316034();
  return param_1;
}



/* Entry: 10a3161bc; end: 10a31646f;  */

undefined8 ** FUN_10a3161bc(undefined8 **param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 uStack_5d0;
  undefined4 uStack_5c8;
  undefined8 uStack_5c0;
  undefined4 uStack_5b8;
  undefined1 auStack_568 [208];
  undefined8 *apuStack_498 [25];
  undefined *puStack_3d0;
  undefined **appuStack_3c8 [7];
  undefined *puStack_390;
  undefined **appuStack_388 [7];
  long lStack_350;
  undefined1 auStack_348 [200];
  long lStack_280;
  undefined4 auStack_278 [24];
  long lStack_218;
  undefined8 *puStack_210;
  undefined4 uStack_208;
  undefined8 *apuStack_1d0 [24];
  undefined8 *apuStack_110 [2];
  long lStack_100;
  long lStack_b0;
  undefined8 *puStack_a8;
  undefined4 uStack_a0;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_280 = *param_2;
  auStack_278[0] = (undefined4)param_2[1];
  uVar5 = (uint)&lStack_280;
  FUN_10a314d24();
  if ((*(int *)((long)param_2 + 0xc) == *(int *)(param_1 + 3)) &&
     ((int)param_2[2] == *(int *)((long)param_1 + 0x1c))) {
    if (uVar5 == *(uint *)((long)param_1 + 0x4c)) {
      uVar8 = 3;
      if ((uVar5 & 0xfffffffb) != 0xb) {
        uVar8 = 1;
      }
      *(undefined4 *)(param_1 + 0xb) = uVar8;
      FUN_10a314fa4(&lStack_280,param_2);
      lVar3 = lStack_280;
      if (lStack_280 != 0) {
        _memcpy(apuStack_110,auStack_278,lStack_280 << 5);
      }
      puStack_a8 = puStack_210;
      puVar7 = puStack_a8;
      lStack_b0 = lStack_218;
      uStack_a0 = uStack_208;
      if (lVar3 == 1) {
        if (-1 < lStack_100) {
          puStack_a8._0_4_ = SUB84(puStack_210,0);
          lStack_280 = lStack_218;
          auStack_278[0] = puStack_a8._0_4_;
          plVar6 = &lStack_280;
          puStack_a8 = puVar7;
          func_0x0001096f1ebc();
          if (((int)plVar6 == 0) ||
             (((ulong)puStack_a8 >> 0x20) * ((ulong)plVar6 & 0xffffffff) - lStack_100 == 0)) {
            FUN_10a316034(param_1,apuStack_110[0],*(undefined4 *)(param_1 + 0xb));
            goto LAB_10a3163bc;
          }
        }
        FUN_10a314fa4(&lStack_350,param_2);
        puStack_3d0 = &UNK_1096f34d4;
        appuStack_3c8[0] = &PTR_DAT_110b0afd0;
        puStack_390 = &UNK_1096f3724;
        appuStack_388[0] = &PTR_DAT_110b0afe8;
        func_0x0001096f2b1c(&lStack_280,&lStack_350,&puStack_3d0,0,1);
        (*(code *)*appuStack_388[0])(appuStack_388);
        (*(code *)*appuStack_3c8[0])(appuStack_3c8);
        func_0x0001096f2204(auStack_568,&lStack_280);
        func_0x0001096f3848(&lStack_350,auStack_568);
        if (lStack_350 == 0) {
          apuStack_498[0] = (undefined8 *)0x0;
        }
        else {
          _memcpy(apuStack_498,auStack_348,lStack_350 << 5);
        }
        FUN_10a316034(param_1,apuStack_498[0],*(undefined4 *)(param_1 + 0xb));
        func_0x0001096f2328(&lStack_280);
        (*(code *)*apuStack_1d0[0])(apuStack_1d0);
        param_1 = &puStack_210;
        (*(code *)*puStack_210)();
        apuStack_110[0] = apuStack_498[0];
LAB_10a3163bc:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return param_1;
        }
        ___stack_chk_fail();
        func_0x0001096f2328(&lStack_280);
        (*(code *)*apuStack_1d0[0])(apuStack_1d0);
        (*(code *)*puStack_210)(&puStack_210);
        __Unwind_Resume(param_1);
        uVar1 = *(undefined4 *)((long)apuStack_110[0] + 0xc);
        uVar2 = *(undefined4 *)(apuStack_110[0] + 2);
        uStack_5c0 = *apuStack_110[0];
        uStack_5b8 = *(undefined4 *)(apuStack_110[0] + 1);
        puVar7 = &uStack_5c0;
        FUN_10a314d24(puVar7);
        uStack_5d0 = *apuStack_110[0];
        uStack_5c8 = *(undefined4 *)(apuStack_110[0] + 1);
        uVar5 = (uint)&uStack_5d0;
        FUN_10a314d24();
        uVar8 = 3;
        if ((uVar5 & 0xfffffffb) != 0xb) {
          uVar8 = 1;
        }
        FUN_10a315d4c(param_1,0xde1,uVar1,uVar2,1,puVar7,0x35,uVar8,0x100);
        FUN_10a3161bc();
        return param_1;
      }
      FUN_10a00946c(&UNK_10f64e17d);
      goto LAB_10a316408;
    }
  }
  FUN_10a00946c(&UNK_10f64e147);
LAB_10a316408:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a31640c);
  (*pcVar4)();
}



/* Entry: 10a316470; end: 10a316537;  */

undefined8 FUN_10a316470(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uVar1 = *(undefined4 *)((long)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uStack_50 = *param_2;
  uStack_48 = *(undefined4 *)(param_2 + 1);
  puVar4 = &uStack_50;
  FUN_10a314d24(puVar4);
  uStack_60 = *param_2;
  uStack_58 = *(undefined4 *)(param_2 + 1);
  uVar3 = (uint)&uStack_60;
  FUN_10a314d24();
  uVar5 = 3;
  if ((uVar3 & 0xfffffffb) != 0xb) {
    uVar5 = 1;
  }
  FUN_10a315d4c(param_1,0xde1,uVar1,uVar2,1,puVar4,0x35,uVar5,0x100);
  FUN_10a3161bc();
  return param_1;
}



/* Entry: 10a316538; end: 10a316683;  */

undefined8 *
FUN_10a316538(undefined8 *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_40;
  long *plStack_38;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0x100000000;
  param_1[8] = 0x500000004;
  param_1[7] = 0x300000002;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = param_5;
  *param_1 = &PTR_DAT_110bc39d0;
  *(undefined1 *)((long)param_1 + 0x55) = 0;
  *(undefined4 *)(param_1 + 0xb) = param_4;
  param_2 = (long *)*param_2;
  (**(code **)(*param_2 + 0xc0))();
  plStack_38 = (long *)param_2[1];
  lStack_40 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x00010a169c14(param_1 + 1,&lStack_40);
  plVar1 = plStack_38;
  lVar7 = param_1[1];
  uVar9 = *(undefined8 *)(lVar7 + 0x3c);
  uVar8 = *(undefined8 *)(lVar7 + 0x34);
  uVar11 = *(undefined8 *)(lVar7 + 0x4c);
  uVar10 = *(undefined8 *)(lVar7 + 0x44);
  uVar3 = *(undefined4 *)(lVar7 + 0x54);
  uVar12 = *(undefined8 *)(lVar7 + 0x24);
  param_1[4] = *(undefined8 *)(lVar7 + 0x2c);
  param_1[3] = uVar12;
  *(undefined4 *)(param_1 + 9) = uVar3;
  param_1[8] = uVar11;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  param_1[5] = uVar8;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar6 = (uint *)0x113834ef0;
  FUN_10a1c5e98();
  *(byte *)((long)param_1 + 0x55) = (byte)(*puVar6 >> 7) & 1;
  return param_1;
}



/* Entry: 10a316684; end: 10a3167bf;  */

undefined8 *
FUN_10a316684(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined1 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_40;
  long *plStack_38;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0x100000000;
  param_1[8] = 0x500000004;
  param_1[7] = 0x300000002;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x54) = param_5;
  *param_1 = &PTR_DAT_110bc39d0;
  *(undefined1 *)((long)param_1 + 0x55) = 0;
  *(undefined4 *)(param_1 + 0xb) = param_4;
  plStack_38 = (long *)param_2[1];
  uStack_40 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  func_0x00010a169c14(param_1 + 1,&uStack_40);
  plVar1 = plStack_38;
  lVar7 = param_1[1];
  uVar9 = *(undefined8 *)(lVar7 + 0x3c);
  uVar8 = *(undefined8 *)(lVar7 + 0x34);
  uVar11 = *(undefined8 *)(lVar7 + 0x4c);
  uVar10 = *(undefined8 *)(lVar7 + 0x44);
  uVar3 = *(undefined4 *)(lVar7 + 0x54);
  uVar12 = *(undefined8 *)(lVar7 + 0x24);
  param_1[4] = *(undefined8 *)(lVar7 + 0x2c);
  param_1[3] = uVar12;
  *(undefined4 *)(param_1 + 9) = uVar3;
  param_1[8] = uVar11;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  param_1[5] = uVar8;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  puVar6 = (uint *)0x113834ef0;
  FUN_10a1c5e98();
  *(byte *)((long)param_1 + 0x55) = (byte)(*puVar6 >> 7) & 1;
  return param_1;
}



/* Entry: 10a3167c0; end: 10a316b2b;  */

void FUN_10a3167c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined4 auStack_100 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined4 *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_94;
  undefined *puStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  uint uStack_68;
  
  ppuVar5 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puVar11 = *ppuVar5;
  if ((((puVar11 != (undefined *)0x0) && (puVar11[0xc0] == '\x01')) &&
      (*(long *)(puVar11 + 0x80) != 0)) &&
     ((lVar12 = *(long *)(*(long *)(puVar11 + 0x80) + 0x18), lVar12 != 0 &&
      (iVar1 = *(int *)(lVar12 + 0x734), iVar1 == 6 || iVar1 == 1)))) {
    FUN_10a08dbac(puVar11 + 0x18);
  }
  plVar6 = (long *)0x1;
  FUN_10a303694();
  puStack_90 = (undefined *)CONCAT44(puStack_90._4_4_,0xffffffff);
  uVar10 = 0x8ca6;
  _glGetIntegerv(0x8ca6,&puStack_90);
  uStack_94 = puStack_90._0_4_;
  puStack_a8 = &uStack_94;
  plStack_b0 = plVar6;
  __ZSt19uncaught_exceptionsv();
  puStack_c0 = (undefined *)0x0;
  plStack_b8 = (long *)0x0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_a0 = uVar10;
  if (*(char *)((long)param_1 + 0x55) == '\x01') {
    lVar12 = param_1[3];
    lVar13 = *(long *)(*plVar6 + 0x10);
    puStack_90 = &UNK_10f635282;
    plStack_88 = (long *)0x2b;
    if (lVar13 == 0) {
      FUN_10a0edfc4(&puStack_90);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a316af4);
      (*pcVar4)();
    }
    func_0x00010ab9ca70(&puStack_90,param_1,0);
    uVar10 = 0x8ca9;
    if (uStack_68 < 2) {
      uVar10 = 0x8d40;
    }
    FUN_10ab9cbe8(auStack_100,lVar13 + 0x50,uVar10,&puStack_90,0,lVar12,0);
    FUN_10ab9b224(&uStack_e0,auStack_100);
    FUN_10ab9ce18(auStack_100);
    plVar6 = (long *)0x0;
    puVar11 = (undefined *)0x0;
  }
  else {
    FUN_10a3018c8();
    auStack_100[0] = (undefined4)param_1[3];
    FUN_10a09d3bc(&puStack_90);
    plVar6 = plStack_88;
    puVar11 = puStack_90;
    puStack_c0 = puStack_90;
    plStack_b8 = plStack_88;
    _glBindFramebuffer(0x8d40,*(undefined4 *)(puStack_90 + 0x10));
    _glViewport(0,0,*(undefined4 *)(puVar11 + 8),*(undefined4 *)(puVar11 + 0xc));
    plVar7 = param_1;
    (**(code **)(*param_1 + 0x48))();
    *(int *)(puVar11 + 0x14) = (int)plVar7;
    *(undefined4 *)(puVar11 + 0x1c) = 0xde1;
    puVar11[0x30] = 0;
    _glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,plVar7,0);
  }
  uVar8 = (ulong)*(uint *)((long)param_1 + 0x34);
  FUN_10a3158cc(uVar8);
  uVar9 = (ulong)*(uint *)(param_1 + 0xb);
  FUN_10ad4b124();
  _glPixelStorei(0xd05,1);
  _glPixelStorei(0xcf5,1);
  _glReadPixels(0,param_4,(int)param_1[3],param_5,uVar8 >> 0x20,uVar9,param_2);
  plVar7 = param_1;
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_10a1b7ee0(param_2,param_2,param_3,(ulong)plVar7 & 0xffffffff,(long)(int)param_5);
  if (*(char *)((long)param_1 + 0x55) == '\x01') {
    plStack_88 = (long *)0x0;
    puStack_90 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_10ab9b224(&uStack_e0,&puStack_90);
    FUN_10ab9ce18(&puStack_90);
  }
  else {
    func_0x00010a301a5c(puVar11,0x8d40);
    func_0x00010a301a24(puVar11,0x8d40);
    puStack_c0 = (undefined *)0x0;
    plStack_b8 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 1;
      do {
        lVar12 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *plVar7 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  FUN_10ab9ce18(&uStack_e0);
  plVar6 = plStack_b8;
  if (plStack_b8 != (long *)0x0) {
    plVar7 = plStack_b8 + 1;
    do {
      lVar12 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a316b2c(&plStack_b0);
  return;
}



/* Entry: 10a316b2c; end: 10a316b7b;  */

long * FUN_10a316b2c(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  
  plVar3 = param_1;
  __ZSt19uncaught_exceptionsv();
  if ((int)plVar3 <= (int)param_1[2]) {
    lVar1 = *param_1;
    uVar2 = *(undefined4 *)param_1[1];
    _glBindFramebuffer(0x8d40,uVar2);
    *(undefined4 *)(lVar1 + 0xa0) = uVar2;
  }
  return param_1;
}



/* Entry: 10a316b7c; end: 10a316bdb;  */

/* WARNING: Removing unreachable block (ram,0x00010a30390c) */

long FUN_10a316b7c(long *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  
  if (((*(int *)(param_2 + 0x10) != (int)param_1[3]) ||
      (*(int *)(param_2 + 0x14) != *(int *)((long)param_1 + 0x1c))) ||
     (*(uint *)(param_2 + 0x24) != *(uint *)((long)param_1 + 0x4c))) {
    puVar7 = &UNK_10f64e119;
    FUN_10a00946c();
    iVar2 = (int)puVar7;
    if (iVar2 < 0x80e1) {
      if (iVar2 < 0x1908) {
        if (iVar2 == 0x1902) {
          return 0x14;
        }
        if (iVar2 == 0x1903) {
          return 6;
        }
        if (iVar2 == 0x1907) {
          return 3;
        }
      }
      else {
        if (iVar2 == 0x1908) {
          return 1;
        }
        if (iVar2 == 0x1909) {
          return 7;
        }
        if (iVar2 == 0x190a) {
          return 2;
        }
      }
    }
    else if (iVar2 < 0x84f9) {
      if (iVar2 == 0x80e1) {
        return 5;
      }
      if (iVar2 == 0x8227) {
        return 9;
      }
      if (iVar2 == 0x8228) {
        return 0x13;
      }
    }
    else {
      if (iVar2 == 0x84f9) {
        return 0xd;
      }
      if (iVar2 == 0x8d99) {
        return 0xe;
      }
      if (iVar2 == 0x8d94) {
        return 0x12;
      }
    }
    func_0x00010925651c();
    FUN_10ae030a0(0,puVar7);
    ppuVar9 = &PTR_PTR_1133014d0;
    FUN_10ae079a0();
    FUN_10ae030d8();
    FUN_10ae07cd4(ppuVar9,&PTR_PTR_1133014d0);
    return 0xffffffff;
  }
  iVar2 = 3;
  if ((*(uint *)(param_2 + 0x24) & 0xfffffffb) != 0xb) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0xb) = iVar2;
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  lVar4 = 1;
  FUN_10a303694();
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10a303840(lVar4,0xde1,plVar5,0);
  _glPixelStorei(0xd05,1);
  _glPixelStorei(0xcf5,1);
  if (((int)param_1[0xb] == iVar2) || ((uVar10 = 2, iVar2 == 4 && ((int)param_1[0xb] == 3)))) {
    uVar10 = 3;
  }
  plVar5 = param_1;
  (**(code **)(*param_1 + 0x48))(param_1);
  lVar3 = param_1[3];
  uVar1 = *(undefined4 *)((long)param_1 + 0x1c);
  uVar6 = (ulong)*(uint *)((long)param_1 + 0x34);
  FUN_10a3158cc(uVar6);
  FUN_10ad4b248(plVar5,0xde1,uVar10,(int)lVar3,uVar1,uVar6,(int)param_1[0xb],iVar2,uVar8,0,0);
  if ((*(char *)(lVar4 + 0x270) != '\x01') || (lVar3 = lVar4, *(int *)(lVar4 + 0xb0) != 0)) {
    lVar3 = 0x84c0;
    _glActiveTexture(0x84c0);
    *(undefined4 *)(lVar4 + 0xb0) = 0;
    if (*(char *)(lVar4 + 0x270) != '\x01') {
      lVar3 = 0xde1;
      _glBindTexture(0xde1,0);
      goto LAB_10a3038e4;
    }
  }
  if ((*(int *)(lVar4 + 0x10c) == 0) && (*(int *)(lVar4 + 0x14c) == 0xde1)) {
    return lVar3;
  }
  lVar3 = 0xde1;
  _glBindTexture(0xde1,0);
LAB_10a3038e4:
  *(undefined4 *)(lVar4 + 0x10c) = 0;
  *(undefined4 *)(lVar4 + 0x14c) = 0xde1;
  *(int *)(lVar4 + 0x27c) = *(int *)(lVar4 + 0x27c) + 1;
  return lVar3;
}



/* Entry: 10a316bdc; end: 10a316e17;  */

undefined8 FUN_10a316bdc(undefined8 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = (int)param_1;
  if (iVar1 < 0x80e1) {
    if (iVar1 < 0x1908) {
      if (iVar1 == 0x1902) {
        return 0x14;
      }
      if (iVar1 == 0x1903) {
        return 6;
      }
      if (iVar1 == 0x1907) {
        return 3;
      }
    }
    else {
      if (iVar1 == 0x1908) {
        return 1;
      }
      if (iVar1 == 0x1909) {
        return 7;
      }
      if (iVar1 == 0x190a) {
        return 2;
      }
    }
  }
  else if (iVar1 < 0x84f9) {
    if (iVar1 == 0x80e1) {
      return 5;
    }
    if (iVar1 == 0x8227) {
      return 9;
    }
    if (iVar1 == 0x8228) {
      return 0x13;
    }
  }
  else {
    if (iVar1 == 0x84f9) {
      return 0xd;
    }
    if (iVar1 == 0x8d99) {
      return 0xe;
    }
    if (iVar1 == 0x8d94) {
      return 0x12;
    }
  }
  func_0x00010925651c();
  FUN_10ae030a0(0,param_1);
  ppuVar2 = &PTR_PTR_1133014d0;
  FUN_10ae079a0();
  FUN_10ae030d8();
  FUN_10ae07cd4(ppuVar2,&PTR_PTR_1133014d0);
  return 0xffffffff;
}



/* Entry: 10a316e18; end: 10a316e3b;  */

undefined4 FUN_10a316e18(int param_1)

{
  if (param_1 - 1U < 0x36) {
    return *(undefined4 *)(&UNK_10e4ac540 + (ulong)(param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 10a316e3c; end: 10a316edf;  */

long * FUN_10a316e3c(undefined8 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                    undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined **ppuVar3;
  long *plVar4;
  int iVar5;
  undefined8 extraout_x8;
  undefined4 extraout_w9;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int iStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  ppuVar3 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  uStack_48 = &UNK_10f64dd51;
  uStack_40 = 0x39;
  if ((long *)*ppuVar3 != (long *)0x0) {
    uStack_20 = 0x500000004;
    uStack_28 = 0x300000002;
    uStack_18 = 0;
    uStack_38 = 0;
    if (1 < param_3) {
      uStack_38 = 2;
    }
    uStack_48 = (undefined *)CONCAT44(param_2,extraout_w9);
    uStack_40 = CONCAT44(param_9,param_3);
    uStack_30 = 1;
    plVar4 = (long *)**(undefined8 **)(*(long *)*ppuVar3 + 8);
    uStack_34 = param_8;
    uStack_2c = param_4;
    func_0x00010924d934(plVar4,&uStack_48,param_5,param_6,param_7);
    return plVar4;
  }
  uVar1 = SUB84(&uStack_48,0);
  FUN_10a0edfc4();
  ppuVar3 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  uStack_e8 = &UNK_10f64dd51;
  uStack_e0 = 0x39;
  if ((long *)*ppuVar3 != (long *)0x0) {
    puVar7 = *(undefined8 **)(*(long *)*ppuVar3 + 8);
    iVar2 = (int)param_5;
    FUN_10a317000();
    iVar5 = 0x39;
    if (iVar2 == 0) {
      iVar5 = 0x35;
    }
    iVar6 = 8;
    if (iVar2 == 0) {
      iVar6 = 0x14;
    }
    if ((int)param_6 != 0x8d41) {
      iVar6 = iVar5;
    }
    uStack_c0 = 0x500000004;
    uStack_c8 = 0x300000002;
    uStack_b8 = 0;
    iStack_d8 = (int)param_6;
    FUN_10a31702c();
    iStack_d4 = iVar6;
    if ((int)param_7 != 0) {
      iStack_d4 = (int)param_7;
    }
    uStack_d0 = 1;
    uStack_e8 = (undefined *)CONCAT44(param_2,uVar1);
    uStack_e0 = CONCAT44(param_4,param_3);
    iStack_cc = (int)param_5;
    func_0x00010a316da4();
    plVar4 = (long *)*puVar7;
    (**(code **)(*plVar4 + 0x78))(extraout_x8,plVar4,&uStack_e8);
    return plVar4;
  }
  iVar5 = (int)&uStack_e8;
  FUN_10a0edfc4();
  return (long *)(ulong)((iVar5 - 0x81a5U < 3 || iVar5 - 0x8cacU < 2) || iVar5 == 0x88f0);
}



/* Entry: 10a316ee0; end: 10a316fff;  */

long * FUN_10a316ee0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  undefined **ppuVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  uStack_98 = &UNK_10f64dd51;
  uStack_90 = 0x39;
  if ((long *)*ppuVar2 != (long *)0x0) {
    puVar6 = *(undefined8 **)(*(long *)*ppuVar2 + 8);
    iVar1 = param_6;
    FUN_10a317000();
    iVar4 = 0x39;
    if (iVar1 == 0) {
      iVar4 = 0x35;
    }
    iVar5 = 8;
    if (iVar1 == 0) {
      iVar5 = 0x14;
    }
    if (param_7 != 0x8d41) {
      iVar5 = iVar4;
    }
    uStack_70 = 0x500000004;
    uStack_78 = 0x300000002;
    uStack_68 = 0;
    iStack_88 = param_7;
    FUN_10a31702c();
    iStack_84 = iVar5;
    if (param_8 != 0) {
      iStack_84 = param_8;
    }
    uStack_80 = 1;
    uStack_98 = (undefined *)CONCAT44(param_3,param_2);
    uStack_90 = CONCAT44(param_5,param_4);
    iStack_7c = param_6;
    func_0x00010a316da4();
    plVar3 = (long *)*puVar6;
    (**(code **)(*plVar3 + 0x78))(param_1,plVar3,&uStack_98);
    return plVar3;
  }
  iVar4 = (int)&uStack_98;
  FUN_10a0edfc4();
  return (long *)(ulong)((iVar4 - 0x81a5U < 3 || iVar4 - 0x8cacU < 2) || iVar4 == 0x88f0);
}



/* Entry: 10a317000; end: 10a31702b;  */

bool FUN_10a317000(int param_1)

{
  return (param_1 - 0x81a5U < 3 || param_1 - 0x8cacU < 2) || param_1 == 0x88f0;
}



/* Entry: 10a31702c; end: 10a3170bb;  */

undefined4 FUN_10a31702c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = (undefined4 *)&UNK_10e4ab3ec;
  lVar3 = 0x68;
  do {
    if (puVar2[-1] == (int)param_1) {
      if (lVar3 != 0) {
        return *puVar2;
      }
      break;
    }
    puVar2 = puVar2 + 2;
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0);
  func_0x00010ae02f4c(0,param_1);
  ppuVar1 = &PTR_PTR_113301158;
  FUN_10ae079a0();
  func_0x00010ae02f5c();
  FUN_10ae07cd4(ppuVar1,&PTR_PTR_113301158);
  return 0;
}



/* Entry: 10a3170bc; end: 10a3171df;  */

undefined8 *
FUN_10a3170bc(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5,int param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9
             ,int param_10)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uVar5;
  
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  puVar9 = param_3;
  uVar5 = param_4;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  uVar4 = (undefined1)uVar5;
  uStack_98 = &UNK_10f64dd51;
  uStack_90 = 0x39;
  if ((long *)*ppuVar2 != (long *)0x0) {
    puVar9 = *(undefined8 **)(*(long *)*ppuVar2 + 8);
    iVar1 = param_6;
    FUN_10a317000();
    iVar6 = 0x39;
    if (iVar1 == 0) {
      iVar6 = 0x35;
    }
    iVar8 = 8;
    if (iVar1 == 0) {
      iVar8 = 0x14;
    }
    if ((int)param_8 != 0x8d41) {
      iVar8 = iVar6;
    }
    uStack_70 = 0x500000004;
    uStack_78 = 0x300000002;
    uStack_68 = 0;
    uVar7 = param_8;
    FUN_10a31702c();
    iStack_84 = iVar8;
    if (param_10 != 0) {
      iStack_84 = param_10;
    }
    uStack_88 = (undefined4)uVar7;
    uStack_80 = 1;
    uStack_98 = (undefined *)CONCAT44((int)param_3,param_2);
    uStack_90 = CONCAT44(param_5,param_4);
    iStack_7c = param_6;
    func_0x00010a316da4();
    puVar9 = (undefined8 *)*puVar9;
    func_0x00010924d934(param_1,puVar9,&uStack_98,param_7,param_8,param_9);
    return puVar9;
  }
  puVar3 = &uStack_98;
  FUN_10a0edfc4();
  *puVar3 = 0;
  uVar7 = *puVar9;
  *puVar9 = 0;
  puVar3[1] = uVar7;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 10) = 0;
  *(undefined1 *)((long)puVar3 + 0x51) = uVar4;
  *(undefined1 *)((long)puVar3 + 0x52) = 0;
  FUN_10a3172a0();
  return puVar3;
}



/* Entry: 10a3171e0; end: 10a31729f;  */

undefined8 * FUN_10a3171e0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[1] = uVar1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x51) = param_3;
  *(undefined1 *)((long)param_1 + 0x52) = 0;
  FUN_10a3172a0();
  return param_1;
}



/* Entry: 10a3172a0; end: 10a318987;  */

/* WARNING: Removing unreachable block (ram,0x00010a31790c) */
/* WARNING: Removing unreachable block (ram,0x00010a31785c) */
/* WARNING: Removing unreachable block (ram,0x00010a31776c) */
/* WARNING: Removing unreachable block (ram,0x00010a317ca0) */
/* WARNING: Removing unreachable block (ram,0x00010a317444) */
/* WARNING: Removing unreachable block (ram,0x00010a3179b0) */
/* WARNING: Removing unreachable block (ram,0x00010a317718) */
/* WARNING: Removing unreachable block (ram,0x00010a3177c8) */
/* WARNING: Removing unreachable block (ram,0x00010a3178c4) */
/* WARNING: Removing unreachable block (ram,0x00010a317d90) */

void FUN_10a3172a0(int *param_1)

{
  ulong uVar1;
  undefined8 *****pppppuVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long **pplVar9;
  undefined8 *puVar10;
  long **pplVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  long lStack_290;
  ulong uStack_288;
  long lStack_280;
  long lStack_278;
  undefined4 uStack_270;
  undefined8 uStack_268;
  short sStack_260;
  undefined3 uStack_25e;
  undefined3 uStack_25b;
  char cStack_251;
  undefined8 ****ppppuStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 ****ppppuStack_238;
  ulong uStack_230;
  byte bStack_221;
  undefined8 ****ppppuStack_220;
  ulong uStack_218;
  ulong uStack_210;
  undefined8 ****ppppuStack_200;
  ulong uStack_1f8;
  byte bStack_1e9;
  undefined8 ****ppppuStack_1e8;
  ulong uStack_1e0;
  byte bStack_1d1;
  undefined8 ****ppppuStack_1d0;
  ulong uStack_1c8;
  byte bStack_1b9;
  undefined8 auStack_1b8 [3];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 auStack_188 [3];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long alStack_158 [3];
  undefined8 ****ppppuStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 auStack_128 [3];
  undefined8 ****ppppuStack_110;
  ulong uStack_108;
  ulong uStack_100;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  int iStack_88;
  undefined1 auStack_84 [4];
  byte bStack_80;
  int iStack_7c;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  undefined4 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1b15d8(&plStack_a0,*(undefined8 *)(param_1 + 2));
  pplVar11 = (long **)(param_1 + 6);
  if (pplVar11 == &plStack_a0) {
  }
  else {
    if (3 < (ulong)*(byte *)(param_1 + 10)) goto LAB_10a318900;
    (*(code *)(&PTR_FUN_110ba20c8)[*(byte *)(param_1 + 10)])(pplVar11);
    *(undefined1 *)(param_1 + 10) = 3;
    if ((byte)plStack_90 < 3) {
      *(long **)(param_1 + 8) = plStack_98;
      *pplVar11 = plStack_a0;
      plStack_a0 = (long *)0x0;
      plStack_98 = (long *)0x0;
    }
    *(byte *)(param_1 + 10) = (byte)plStack_90;
  }
  if (3 < (byte)plStack_90) goto LAB_10a318900;
  (*(code *)(&PTR_FUN_110ba20c8)[(uint)(byte)plStack_90])(&plStack_a0);
  func_0x00010a314188(&plStack_a0,pplVar11);
  plVar8 = *(long **)(param_1 + 4);
  *(long **)(param_1 + 4) = plStack_a0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  func_0x000107c2b054(&uStack_268,&UNK_10f641bbe);
  FUN_10a1b1a28(&plStack_a0,*(undefined8 *)(param_1 + 2));
  uStack_288 = uStack_70;
  lStack_290 = lStack_78;
  lStack_78 = 0;
  uStack_70 = 0;
  lStack_280 = lStack_68;
  lStack_278 = lStack_60;
  uStack_270 = uStack_58;
  if (lStack_60 != 0) {
    uVar17 = *(ulong *)(lStack_68 + 8);
    if ((uStack_288 & uStack_288 - 1) == 0) {
      uVar17 = uVar17 & uStack_288 - 1;
    }
    else if (uStack_288 <= uVar17) {
      uVar1 = 0;
      if (uStack_288 != 0) {
        uVar1 = uVar17 / uStack_288;
      }
      uVar17 = uVar17 - uVar1 * uStack_288;
    }
    *(long **)(lStack_290 + uVar17 * 8) = &lStack_280;
    lStack_68 = 0;
    lStack_60 = 0;
  }
  func_0x000104c4f944(&lStack_78);
  if (2 < (ulong)bStack_80) goto LAB_10a318900;
  (*(code *)(&PTR_FUN_110ba20e8)[bStack_80])(auStack_84);
  func_0x000107c2b054(&plStack_a0,&UNK_10f641bb3);
  plVar8 = &lStack_290;
  func_0x000104c5e210(plVar8,&plStack_a0);
  if (plVar8 != (long *)0x0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_268,plVar8 + 5)
    ;
  }
  if (cStack_251 < '\0') {
    lVar12 = CONCAT35(uStack_25b,CONCAT32(uStack_25e,sStack_260));
    if (lVar12 != 8) {
      if (lVar12 == 10) {
        if (*(long *)CONCAT35(uStack_268._5_3_,(undefined5)uStack_268) == 0x647261646e617453 &&
            (short)((long *)CONCAT35(uStack_268._5_3_,(undefined5)uStack_268))[1] == 0x4432)
        goto LAB_10a3175ac;
      }
      else if (lVar12 == 0xd) {
        plVar8 = (long *)CONCAT35(uStack_268._5_3_,(undefined5)uStack_268);
        if (*plVar8 == 0x44326d6f74737543 && *(long *)((long)plVar8 + 5) == 0x796172724144326d)
        goto LAB_10a31765c;
LAB_10a317510:
        if (*plVar8 == 0x75436d6f74737543 && *(long *)((long)plVar8 + 5) == 0x70616d656275436d) {
          iVar18 = 3;
          goto LAB_10a317660;
        }
      }
      goto LAB_10a317e5c;
    }
    lVar12 = *(long *)CONCAT35(uStack_268._5_3_,(undefined5)uStack_268);
LAB_10a31763c:
    if (lVar12 != 0x44336d6f74737543) {
LAB_10a317e5c:
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&plStack_f0,&UNK_10f64e1eb,&uStack_268);
      FUN_10a012db0(&lStack_d0,&plStack_f0,&UNK_10f64e206);
      lVar12 = *(long *)(param_1 + 2);
      if (*(char *)(lVar12 + 0x87) < '\0') {
        func_0x000107c3192c(&ppppuStack_110,*(undefined8 *)(lVar12 + 0x70),
                            *(undefined8 *)(lVar12 + 0x78));
      }
      else {
        uStack_108 = *(ulong *)(lVar12 + 0x78);
        ppppuStack_110 = *(undefined8 *****)(lVar12 + 0x70);
        uStack_100 = *(ulong *)(lVar12 + 0x80);
      }
      uVar17 = uStack_108;
      pppppuVar2 = (undefined8 *****)ppppuStack_110;
      if (-1 < (long)uStack_100) {
        uVar17 = uStack_100 >> 0x38;
        pppppuVar2 = &ppppuStack_110;
      }
      plVar8 = &lStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (plVar8,pppppuVar2,uVar17);
      plStack_98 = (long *)plVar8[1];
      plStack_a0 = (long *)*plVar8;
      plStack_90 = (long *)plVar8[2];
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = 0;
      FUN_10a0029c0(&plStack_a0);
      goto LAB_10a318900;
    }
    iVar18 = 2;
LAB_10a317660:
    *(undefined1 *)((long)param_1 + 0x51) = 0;
    FUN_10a1b1a28(&plStack_a0,*(undefined8 *)(param_1 + 2));
    uStack_c8 = uStack_70;
    lStack_d0 = lStack_78;
    lStack_78 = 0;
    uStack_70 = 0;
    lStack_c0 = lStack_68;
    lStack_b8 = lStack_60;
    uStack_b0 = uStack_58;
    if (lStack_60 != 0) {
      uVar17 = *(ulong *)(lStack_68 + 8);
      if ((uStack_c8 & uStack_c8 - 1) == 0) {
        uVar17 = uVar17 & uStack_c8 - 1;
      }
      else if (uStack_c8 <= uVar17) {
        uVar1 = 0;
        if (uStack_c8 != 0) {
          uVar1 = uVar17 / uStack_c8;
        }
        uVar17 = uVar17 - uVar1 * uStack_c8;
      }
      *(long **)(lStack_d0 + uVar17 * 8) = &lStack_c0;
      lStack_68 = 0;
      lStack_60 = 0;
    }
    func_0x000104c4f944(&lStack_78);
    if (2 < (ulong)bStack_80) goto LAB_10a318900;
    (*(code *)(&PTR_FUN_110ba20e8)[bStack_80])(auStack_84);
    func_0x000107c2b054(&plStack_a0,"width");
    plVar8 = &lStack_d0;
    func_0x000104c5e210(plVar8,&plStack_a0);
    if (plVar8 != (long *)0x0) {
      plVar8 = plVar8 + 5;
      __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(plVar8,0,10);
      iVar6 = (int)plVar8;
      param_1[0xe] = iVar6;
      if ((iVar6 == 0) || (0x800 < iVar6)) {
        __ZNSt3__19to_stringEi(auStack_128);
        FUN_109feb280(&ppppuStack_110,&UNK_10f64e3ce,auStack_128);
        FUN_10a012db0(&plStack_f0,&ppppuStack_110,&UNK_10f64e206);
        lVar12 = *(long *)(param_1 + 2);
        if (*(char *)(lVar12 + 0x87) < '\0') {
          func_0x000107c3192c(&ppppuStack_140,*(undefined8 *)(lVar12 + 0x70),
                              *(undefined8 *)(lVar12 + 0x78));
        }
        else {
          uStack_138 = *(ulong *)(lVar12 + 0x78);
          ppppuStack_140 = *(undefined8 *****)(lVar12 + 0x70);
          uStack_130 = *(ulong *)(lVar12 + 0x80);
        }
        uVar17 = uStack_138;
        pppppuVar2 = (undefined8 *****)ppppuStack_140;
        if (-1 < (long)uStack_130) {
          uVar17 = uStack_130 >> 0x38;
          pppppuVar2 = &ppppuStack_140;
        }
        pplVar11 = &plStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pplVar11,pppppuVar2,uVar17);
        plStack_98 = pplVar11[1];
        plStack_a0 = *pplVar11;
        plStack_90 = pplVar11[2];
        pplVar11[1] = (long *)0x0;
        pplVar11[2] = (long *)0x0;
        *pplVar11 = (long *)0x0;
        FUN_10a0029c0(&plStack_a0);
        goto LAB_10a318900;
      }
      func_0x000107c2b054(&plStack_a0,"height");
      plVar8 = &lStack_d0;
      func_0x000104c5e210(plVar8,&plStack_a0);
      if (plVar8 == (long *)0x0) {
        lVar12 = *(long *)(param_1 + 2);
        if (*(char *)(lVar12 + 0x87) < '\0') {
          func_0x000107c3192c(&plStack_f0,*(undefined8 *)(lVar12 + 0x70),
                              *(undefined8 *)(lVar12 + 0x78));
        }
        else {
          uStack_e8 = *(undefined8 *)(lVar12 + 0x78);
          plStack_f0 = *(long **)(lVar12 + 0x70);
          uStack_e0 = *(undefined8 *)(lVar12 + 0x80);
        }
        FUN_109feb280(&plStack_a0,&UNK_10f64e3dd,&plStack_f0);
        FUN_10a0029c0(&plStack_a0);
        goto LAB_10a318900;
      }
      plVar8 = plVar8 + 5;
      __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(plVar8,0,10);
      iVar6 = (int)plVar8;
      param_1[0xf] = iVar6;
      if ((iVar6 == 0) || (0x800 < iVar6)) {
        __ZNSt3__19to_stringEi(auStack_128);
        FUN_109feb280(&ppppuStack_110,&UNK_10f64e3fc,auStack_128);
        FUN_10a012db0(&plStack_f0,&ppppuStack_110,&UNK_10f64e206);
        lVar12 = *(long *)(param_1 + 2);
        if (*(char *)(lVar12 + 0x87) < '\0') {
          func_0x000107c3192c(&ppppuStack_140,*(undefined8 *)(lVar12 + 0x70),
                              *(undefined8 *)(lVar12 + 0x78));
        }
        else {
          uStack_138 = *(ulong *)(lVar12 + 0x78);
          ppppuStack_140 = *(undefined8 *****)(lVar12 + 0x70);
          uStack_130 = *(ulong *)(lVar12 + 0x80);
        }
        uVar17 = uStack_138;
        pppppuVar2 = (undefined8 *****)ppppuStack_140;
        if (-1 < (long)uStack_130) {
          uVar17 = uStack_130 >> 0x38;
          pppppuVar2 = &ppppuStack_140;
        }
        pplVar11 = &plStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pplVar11,pppppuVar2,uVar17);
        plStack_98 = pplVar11[1];
        plStack_a0 = *pplVar11;
        plStack_90 = pplVar11[2];
        pplVar11[1] = (long *)0x0;
        pplVar11[2] = (long *)0x0;
        *pplVar11 = (long *)0x0;
        FUN_10a0029c0(&plStack_a0);
        goto LAB_10a318900;
      }
      func_0x000107c2b054(&plStack_a0,&DAT_10f641bc9);
      plVar8 = &lStack_d0;
      func_0x000104c5e210(plVar8,&plStack_a0);
      if (plVar8 == (long *)0x0) {
LAB_10a317814:
        bVar5 = false;
      }
      else {
        plVar13 = plVar8 + 5;
        if (*(char *)((long)plVar8 + 0x3f) < '\0') {
          if (plVar8[6] != 4) goto LAB_10a317814;
          plVar13 = (long *)*plVar13;
        }
        else if (*(char *)((long)plVar8 + 0x3f) != '\x04') goto LAB_10a317814;
        bVar5 = *(int *)plVar13 == 0x65757274;
      }
      *(bool *)(param_1 + 0x14) = bVar5;
      func_0x000107c2b054(&plStack_a0,&UNK_10f641bd1);
      plVar8 = &lStack_d0;
      func_0x000104c5e210(plVar8,&plStack_a0);
      if (plVar8 == (long *)0x0) {
        iVar6 = 0;
      }
      else {
        plVar8 = plVar8 + 5;
        __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(plVar8,0,10)
        ;
        iVar6 = (int)plVar8;
      }
      param_1[0x13] = iVar6;
      pplVar9 = pplVar11;
      func_0x00010a1a51ec();
      param_1[0xc] = (int)pplVar9;
      func_0x00010a1a527c();
      param_1[0xd] = (int)pplVar11;
      *param_1 = iVar18;
      if (iVar18 == 1) {
        func_0x000107c2b054(&plStack_a0,&UNK_10f64e40c);
        plVar8 = &lStack_d0;
        func_0x000104c5e210(plVar8,&plStack_a0);
        if (plVar8 == (long *)0x0) {
          lVar12 = *(long *)(param_1 + 2);
          if (*(char *)(lVar12 + 0x87) < '\0') {
            func_0x000107c3192c(&plStack_f0,*(undefined8 *)(lVar12 + 0x70),
                                *(undefined8 *)(lVar12 + 0x78));
          }
          else {
            uStack_e8 = *(undefined8 *)(lVar12 + 0x78);
            plStack_f0 = *(long **)(lVar12 + 0x70);
            uStack_e0 = *(undefined8 *)(lVar12 + 0x80);
          }
          FUN_109feb280(&plStack_a0,&UNK_10f64e417,&plStack_f0);
          FUN_10a0029c0(&plStack_a0);
          goto LAB_10a318900;
        }
        plVar8 = plVar8 + 5;
        __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(plVar8,0,10)
        ;
        uVar7 = SUB84(plVar8,0);
        lVar12 = 0x40;
        lVar15 = 0x48;
      }
      else {
        if (iVar18 == 2) {
          func_0x000107c2b054(&plStack_a0,&DAT_10f2dd08d);
          plVar8 = &lStack_d0;
          func_0x000104c5e210(plVar8,&plStack_a0);
          if (plVar8 == (long *)0x0) {
            lVar12 = *(long *)(param_1 + 2);
            if (*(char *)(lVar12 + 0x87) < '\0') {
              func_0x000107c3192c(&plStack_f0,*(undefined8 *)(lVar12 + 0x70),
                                  *(undefined8 *)(lVar12 + 0x78));
            }
            else {
              uStack_e8 = *(undefined8 *)(lVar12 + 0x78);
              plStack_f0 = *(long **)(lVar12 + 0x70);
              uStack_e0 = *(undefined8 *)(lVar12 + 0x80);
            }
            FUN_109feb280(&plStack_a0,&UNK_10f64e43b,&plStack_f0);
            FUN_10a0029c0(&plStack_a0);
            goto LAB_10a318900;
          }
          plVar8 = plVar8 + 5;
          __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
                    (plVar8,0,10);
          uVar7 = SUB84(plVar8,0);
        }
        else {
          uVar7 = 1;
        }
        lVar12 = 0x48;
        lVar15 = 0x40;
      }
      *(undefined4 *)((long)param_1 + lVar15) = uVar7;
      *(undefined4 *)((long)param_1 + lVar12) = 1;
      goto LAB_10a317cbc;
    }
  }
  else {
    if (cStack_251 == '\b') {
      lVar12 = CONCAT35(uStack_268._5_3_,(undefined5)uStack_268);
      goto LAB_10a31763c;
    }
    if (cStack_251 != '\n') {
      if (cStack_251 != '\r') goto LAB_10a317e5c;
      if (CONCAT35(uStack_268._5_3_,(undefined5)uStack_268) != 0x44326d6f74737543 ||
          CONCAT35(uStack_25e,CONCAT23(sStack_260,uStack_268._5_3_)) != 0x796172724144326d) {
        plVar8 = &uStack_268;
        goto LAB_10a317510;
      }
LAB_10a31765c:
      iVar18 = 1;
      goto LAB_10a317660;
    }
    if (CONCAT35(uStack_268._5_3_,(undefined5)uStack_268) != 0x647261646e617453 ||
        sStack_260 != 0x4432) goto LAB_10a317e5c;
LAB_10a3175ac:
    *param_1 = 0;
    pplVar9 = pplVar11;
    func_0x00010a1a51ec();
    param_1[0xe] = (int)pplVar9;
    param_1[0xc] = (int)pplVar9;
    pplVar9 = pplVar11;
    func_0x00010a1a527c();
    param_1[0xd] = (int)pplVar9;
    param_1[0xf] = (int)pplVar9;
    param_1[0x10] = 1;
    param_1[0x12] = 1;
    FUN_10a1b1a28(&plStack_a0,*(undefined8 *)(param_1 + 2));
    uStack_c8 = uStack_70;
    lStack_d0 = lStack_78;
    lStack_78 = 0;
    uStack_70 = 0;
    lStack_c0 = lStack_68;
    lStack_b8 = lStack_60;
    uStack_b0 = uStack_58;
    if (lStack_60 != 0) {
      uVar17 = *(ulong *)(lStack_68 + 8);
      if ((uStack_c8 & uStack_c8 - 1) == 0) {
        uVar17 = uVar17 & uStack_c8 - 1;
      }
      else if (uStack_c8 <= uVar17) {
        uVar1 = 0;
        if (uStack_c8 != 0) {
          uVar1 = uVar17 / uStack_c8;
        }
        uVar17 = uVar17 - uVar1 * uStack_c8;
      }
      *(long **)(lStack_d0 + uVar17 * 8) = &lStack_c0;
      lStack_68 = 0;
      lStack_60 = 0;
    }
    func_0x000104c4f944(&lStack_78);
    if (2 < (ulong)bStack_80) goto LAB_10a318900;
    (*(code *)(&PTR_FUN_110ba20e8)[bStack_80])(auStack_84);
    func_0x000107c2b054(&plStack_a0,&DAT_10f641bc9);
    plVar8 = &lStack_d0;
    func_0x000104c5e210(plVar8,&plStack_a0);
    if (plVar8 == (long *)0x0) {
LAB_10a317a2c:
      *(undefined1 *)(param_1 + 0x14) = 0;
LAB_10a317a30:
      bVar5 = true;
    }
    else {
      plVar13 = plVar8 + 5;
      if (*(char *)((long)plVar8 + 0x3f) < '\0') {
        if (plVar8[6] != 4) goto LAB_10a317a2c;
        plVar13 = (long *)*plVar13;
      }
      else if (*(char *)((long)plVar8 + 0x3f) != '\x04') goto LAB_10a317a2c;
      iVar18 = *(int *)plVar13;
      *(bool *)(param_1 + 0x14) = iVar18 == 0x65757274;
      if (iVar18 != 0x65757274) goto LAB_10a317a30;
      bVar5 = false;
      param_1[0xf] = (param_1[0xf] << 1) / 3;
    }
    iVar18 = param_1[0xe];
    if ((0x800 < iVar18) || (0x800 < param_1[0xf])) {
      bVar3 = bVar5;
      if (((char)param_1[10] != '\0') && (bVar3 = false, (char)param_1[10] == '\x01')) {
        bVar3 = bVar5;
      }
      if (!bVar3) {
        __ZNSt3__19to_stringEi(&ppppuStack_1e8);
        FUN_109feb280(&ppppuStack_1d0,&UNK_10f64e213,&ppppuStack_1e8);
        FUN_10a012db0(auStack_1b8,&ppppuStack_1d0,"; ");
        __ZNSt3__19to_stringEi(&ppppuStack_200,param_1[0xf]);
        if (-1 < (char)bStack_1e9) {
          uStack_1f8 = (ulong)bStack_1e9;
          ppppuStack_200 = &ppppuStack_200;
        }
        puVar10 = auStack_1b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar10,ppppuStack_200,uStack_1f8);
        uStack_198 = puVar10[1];
        uStack_1a0 = *puVar10;
        uStack_190 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        FUN_10a012db0(auStack_188,&uStack_1a0,&UNK_10f64e24d);
        __ZNSt3__19to_stringEi(&ppppuStack_220,0x800);
        uVar17 = uStack_218;
        pppppuVar2 = (undefined8 *****)ppppuStack_220;
        if (-1 < (long)uStack_210) {
          uVar17 = uStack_210 >> 0x38;
          pppppuVar2 = &ppppuStack_220;
        }
        puVar10 = auStack_188;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar10,pppppuVar2,uVar17);
        uStack_168 = puVar10[1];
        uStack_170 = *puVar10;
        uStack_160 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        FUN_10a012db0(alStack_158,&uStack_170,"; ");
        __ZNSt3__19to_stringEi(&ppppuStack_238,0x800);
        if (-1 < (char)bStack_221) {
          uStack_230 = (ulong)bStack_221;
          ppppuStack_238 = &ppppuStack_238;
        }
        plVar8 = alStack_158;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar8,ppppuStack_238,uStack_230);
        uStack_138 = plVar8[1];
        ppppuStack_140 = (undefined8 ****)*plVar8;
        uStack_130 = plVar8[2];
        plVar8[1] = 0;
        plVar8[2] = 0;
        *plVar8 = 0;
        FUN_10a012db0(auStack_128,&ppppuStack_140,&UNK_10f64e264);
        FUN_10a012db0(&ppppuStack_110,auStack_128,&UNK_10f64e2be);
        FUN_10a012db0(&plStack_f0,&ppppuStack_110,&UNK_10f64e315);
        lVar12 = *(long *)(param_1 + 2);
        if (*(char *)(lVar12 + 0x87) < '\0') {
          func_0x000107c3192c(&ppppuStack_250,*(undefined8 *)(lVar12 + 0x70),
                              *(undefined8 *)(lVar12 + 0x78));
        }
        else {
          uStack_248 = *(ulong *)(lVar12 + 0x78);
          ppppuStack_250 = *(undefined8 *****)(lVar12 + 0x70);
          uStack_240 = *(ulong *)(lVar12 + 0x80);
        }
        uVar17 = uStack_248;
        pppppuVar2 = (undefined8 *****)ppppuStack_250;
        if (-1 < (long)uStack_240) {
          uVar17 = uStack_240 >> 0x38;
          pppppuVar2 = &ppppuStack_250;
        }
        pplVar11 = &plStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pplVar11,pppppuVar2,uVar17);
        plStack_98 = pplVar11[1];
        plStack_a0 = *pplVar11;
        plStack_90 = pplVar11[2];
        pplVar11[1] = (long *)0x0;
        pplVar11[2] = (long *)0x0;
        *pplVar11 = (long *)0x0;
        FUN_10a0029c0(&plStack_a0);
        goto LAB_10a318900;
      }
      if ((*(byte *)((long)param_1 + 0x51) & 1) == 0) {
        __ZNSt3__19to_stringEi(auStack_1b8);
        FUN_109feb280(&uStack_1a0,&UNK_10f64e33e,auStack_1b8);
        FUN_10a012db0(auStack_188,&uStack_1a0,"; ");
        __ZNSt3__19to_stringEi(&ppppuStack_1d0,param_1[0xf]);
        if (-1 < (char)bStack_1b9) {
          uStack_1c8 = (ulong)bStack_1b9;
          ppppuStack_1d0 = &ppppuStack_1d0;
        }
        puVar10 = auStack_188;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar10,ppppuStack_1d0,uStack_1c8);
        uStack_168 = puVar10[1];
        uStack_170 = *puVar10;
        uStack_160 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        FUN_10a012db0(alStack_158,&uStack_170,&UNK_10f64e24d);
        __ZNSt3__19to_stringEi(&ppppuStack_1e8,0x800);
        if (-1 < (char)bStack_1d1) {
          uStack_1e0 = (ulong)bStack_1d1;
          ppppuStack_1e8 = &ppppuStack_1e8;
        }
        plVar8 = alStack_158;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar8,ppppuStack_1e8,uStack_1e0);
        uStack_138 = plVar8[1];
        ppppuStack_140 = (undefined8 ****)*plVar8;
        uStack_130 = plVar8[2];
        plVar8[1] = 0;
        plVar8[2] = 0;
        *plVar8 = 0;
        FUN_10a012db0(auStack_128,&ppppuStack_140,"; ");
        __ZNSt3__19to_stringEi(&ppppuStack_200,0x800);
        if (-1 < (char)bStack_1e9) {
          uStack_1f8 = (ulong)bStack_1e9;
          ppppuStack_200 = &ppppuStack_200;
        }
        puVar10 = auStack_128;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar10,ppppuStack_200,uStack_1f8);
        uStack_108 = puVar10[1];
        ppppuStack_110 = (undefined8 ****)*puVar10;
        uStack_100 = puVar10[2];
        puVar10[1] = 0;
        puVar10[2] = 0;
        *puVar10 = 0;
        FUN_10a012db0(&plStack_f0,&ppppuStack_110,&UNK_10f64e35c);
        lVar12 = *(long *)(param_1 + 2);
        if (*(char *)(lVar12 + 0x87) < '\0') {
          func_0x000107c3192c(&ppppuStack_220,*(undefined8 *)(lVar12 + 0x70),
                              *(undefined8 *)(lVar12 + 0x78));
        }
        else {
          uStack_218 = *(ulong *)(lVar12 + 0x78);
          ppppuStack_220 = *(undefined8 *****)(lVar12 + 0x70);
          uStack_210 = *(ulong *)(lVar12 + 0x80);
        }
        uVar17 = uStack_218;
        pppppuVar2 = (undefined8 *****)ppppuStack_220;
        if (-1 < (long)uStack_210) {
          uVar17 = uStack_210 >> 0x38;
          pppppuVar2 = &ppppuStack_220;
        }
        pplVar11 = &plStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pplVar11,pppppuVar2,uVar17);
        plStack_98 = pplVar11[1];
        plStack_a0 = *pplVar11;
        plStack_90 = pplVar11[2];
        pplVar11[1] = (long *)0x0;
        pplVar11[2] = (long *)0x0;
        *pplVar11 = (long *)0x0;
        FUN_10a0029c0(&plStack_a0);
        goto LAB_10a318900;
      }
      iVar6 = param_1[0xf];
      if (iVar6 * 0x800 < iVar18 * 0x800) {
        iVar16 = 0x800;
        iVar14 = 0;
        if (iVar18 != 0) {
          iVar14 = (iVar6 * 0x800) / iVar18;
        }
      }
      else {
        iVar14 = 0x800;
        iVar16 = 0;
        if (iVar6 != 0) {
          iVar16 = (iVar18 << 0xb) / iVar6;
        }
      }
      param_1[0xe] = iVar16;
      param_1[0xf] = iVar14;
      param_1[0xc] = iVar16;
      param_1[0xd] = iVar14;
      plStack_a0 = (long *)&UNK_10f64e372;
      plStack_98 = (long *)0x1d;
      if (iVar16 < 0x801) {
        plStack_a0 = (long *)&UNK_10f64e390;
        plStack_98 = (long *)0x1f;
        if (iVar14 < 0x801) goto LAB_10a317ac8;
      }
      FUN_10a0edfc4(&plStack_a0);
      goto LAB_10a318900;
    }
LAB_10a317ac8:
    if (bVar5) {
      iVar18 = 0;
    }
    else {
      func_0x000107c2b054(&plStack_a0,&UNK_10f641bd1);
      plVar8 = &lStack_d0;
      func_0x000104c5e210(plVar8,&plStack_a0);
      if (plVar8 == (long *)0x0) {
        func_0x00010a1a530c(pplVar11,param_1[0xe],param_1[0xf]);
        iVar18 = (int)pplVar11;
      }
      else {
        plVar8 = plVar8 + 5;
        __ZNSt3__14stoiERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi(plVar8,0,10)
        ;
        iVar18 = (int)plVar8;
      }
    }
    param_1[0x13] = iVar18;
LAB_10a317cbc:
    func_0x000104c4f944(&lStack_d0);
    FUN_10a1b1a28(&plStack_a0,*(undefined8 *)(param_1 + 2));
    param_1[1] = iStack_88;
    func_0x000104c4f944(&lStack_78);
    if (2 < (ulong)bStack_80) goto LAB_10a318900;
    (*(code *)(&PTR_FUN_110ba20e8)[bStack_80])(auStack_84);
    FUN_10a1b1a28(&plStack_a0,*(undefined8 *)(param_1 + 2));
    func_0x000107c2b054(&lStack_d0,&DAT_10f4a6e88);
    plVar8 = &lStack_78;
    plStack_f0 = &lStack_d0;
    func_0x000104c5bc74(plVar8,&lStack_d0,&UNK_10dd5b8f9,&plStack_f0,&ppppuStack_110);
    plVar13 = plVar8 + 5;
    if (*(char *)((long)plVar8 + 0x3f) < '\0') {
      if (plVar8[6] == 4) {
        plVar13 = (long *)*plVar13;
        goto LAB_10a317d68;
      }
LAB_10a317d80:
      bVar5 = false;
    }
    else {
      if (*(char *)((long)plVar8 + 0x3f) != '\x04') goto LAB_10a317d80;
LAB_10a317d68:
      bVar5 = *(int *)plVar13 == 0x65757274;
    }
    *(bool *)((long)param_1 + 0x52) = bVar5;
    func_0x000104c4f944(&lStack_78);
    if (2 < (ulong)bStack_80) goto LAB_10a318900;
    (*(code *)(&PTR_FUN_110ba20e8)[bStack_80])(auStack_84);
    FUN_10a1b1a28(&plStack_a0,*(undefined8 *)(param_1 + 2));
    param_1[0x11] = iStack_7c;
    func_0x000104c4f944(&lStack_78);
    if (2 < (ulong)bStack_80) goto LAB_10a318900;
    (*(code *)(&PTR_FUN_110ba20e8)[bStack_80])(auStack_84);
    if ((param_1[1] == 8) && (*param_1 == 0)) {
      param_1[0x11] = param_1[0x11] | 4;
    }
    func_0x000104c4f944(&lStack_290);
    if (cStack_251 < '\0') {
      __ZdlPv(CONCAT35(uStack_268._5_3_,(undefined5)uStack_268));
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
  }
  lVar12 = *(long *)(param_1 + 2);
  if (*(char *)(lVar12 + 0x87) < '\0') {
    func_0x000107c3192c(&plStack_f0,*(undefined8 *)(lVar12 + 0x70),*(undefined8 *)(lVar12 + 0x78));
  }
  else {
    uStack_e8 = *(undefined8 *)(lVar12 + 0x78);
    plStack_f0 = *(long **)(lVar12 + 0x70);
    uStack_e0 = *(undefined8 *)(lVar12 + 0x80);
  }
  FUN_109feb280(&plStack_a0,&UNK_10f64e3b0,&plStack_f0);
  FUN_10a0029c0(&plStack_a0);
LAB_10a318900:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a318904);
  (*pcVar4)();
}



/* Entry: 10a318988; end: 10a318aa7;  */

/* WARNING: Possible PIC construction at 0x00010a318b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a318b38) */
/* WARNING: Removing unreachable block (ram,0x00010a318b50) */
/* WARNING: Type propagation algorithm not settling */

int * FUN_10a318988(int *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  long *plVar13;
  bool bVar14;
  code *pcVar15;
  undefined1 *puVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  int *piVar24;
  int iVar25;
  ushort uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  undefined **ppuVar31;
  int iVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  byte *pbVar36;
  int iVar37;
  byte *pbVar38;
  undefined8 unaff_x20;
  undefined8 *puVar39;
  long lVar40;
  undefined8 *******pppppppuVar41;
  float fVar42;
  byte bVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  undefined ***pppuStack_780;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  long lStack_750;
  long lStack_748;
  undefined8 uStack_740;
  long lStack_738;
  ulong uStack_730;
  long *plStack_728;
  long lStack_720;
  long lStack_718;
  undefined8 uStack_710;
  undefined4 uStack_708;
  long alStack_700 [2];
  ulong uStack_6f0;
  undefined4 uStack_6e8;
  code *pcStack_6e0;
  undefined **appuStack_6d8 [7];
  code *pcStack_6a0;
  undefined **appuStack_698 [7];
  undefined8 uStack_660;
  undefined8 uStack_658;
  long lStack_650;
  long lStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  float fStack_590;
  int iStack_58c;
  int iStack_588;
  int iStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined4 uStack_578;
  undefined4 uStack_574;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  long lStack_558;
  ulong uStack_550;
  long *plStack_548;
  long lStack_540;
  ulong uStack_538;
  code *pcStack_528;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  long lStack_510;
  undefined1 auStack_508 [72];
  undefined8 uStack_4c0;
  undefined **ppuStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_488;
  long lStack_480;
  undefined1 *puStack_478;
  undefined1 auStack_470 [24];
  code *pcStack_458;
  ulong uStack_450;
  undefined4 uStack_448;
  long lStack_440;
  undefined1 auStack_438 [72];
  undefined4 *puStack_3f0;
  float *pfStack_3e8;
  ulong uStack_3e0;
  code *pcStack_390;
  ulong uStack_388;
  undefined4 uStack_380;
  long lStack_378;
  undefined1 auStack_370 [72];
  code *pcStack_328;
  undefined **ppuStack_320;
  code *pcStack_2e8;
  undefined **ppuStack_2e0;
  long lStack_2a8;
  code *pcStack_238;
  undefined1 auStack_230 [8];
  undefined8 uStack_228;
  undefined4 uStack_220;
  undefined1 auStack_218 [104];
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  long lStack_148;
  undefined8 *******pppppppuStack_120;
  code *pcStack_118;
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [104];
  undefined8 uStack_90;
  undefined4 uStack_88;
  long lStack_28;
  
  puVar16 = auStack_110;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[10] == '\0') {
    uVar29 = *(uint *)(*(long *)(param_1 + 6) + 0x24);
    uVar28 = uVar29;
    if (*(char *)((long)param_1 + 0x52) == '\x01') {
      uVar8 = uVar29;
      if (uVar29 == 3) {
        uVar8 = 1;
      }
      uVar28 = 0xb;
      if (*param_1 != 3 || uVar29 != 1) {
        uVar28 = uVar8;
      }
    }
    piVar19 = (int *)(ulong)uVar28;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      if (uVar28 - 6 < 10) {
        return (int *)(ulong)*(uint *)(&UNK_10e502bd8 + (ulong)(uVar28 - 6) * 4);
      }
      return (int *)0x4;
    }
  }
  else if ((char)param_1[10] == '\x01') {
    FUN_10a314fa4(auStack_f8);
    uStack_108 = uStack_90;
    uStack_100 = uStack_88;
    uVar29 = (uint)&uStack_108;
    FUN_10a314d24();
    if ((*(byte *)((long)param_1 + 0x52) & uVar29 == 3) != 0) {
      uVar29 = 1;
    }
    piVar19 = (int *)(ulong)uVar29;
    FUN_10ab79c98();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return piVar19;
    }
  }
  else {
    uVar29 = *(uint *)(*(long *)(param_1 + 6) + 0x10);
    piVar19 = (int *)(ulong)uVar29;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) goto SUB_10ab79cbc;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_10a318aa8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuStack_120 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((char)piVar19[10] == '\0') {
    uVar29 = *(uint *)(*(long *)(piVar19 + 6) + 0x24);
    uVar28 = uVar29;
    if (*(char *)((long)piVar19 + 0x52) == '\x01') {
      uVar8 = uVar29;
      if (uVar29 == 3) {
        uVar8 = 1;
      }
      uVar28 = 0xb;
      if (*piVar19 != 3 || uVar29 != 1) {
        uVar28 = uVar8;
      }
    }
    piVar19 = (int *)(ulong)uVar28;
    uVar29 = 3;
    if ((uVar28 & 0xfffffffb) != 0xb) {
      uVar29 = 1;
    }
    piVar20 = (int *)(ulong)uVar29;
    FUN_10ad4b390();
    pppppppuVar41 = pppppppuStack_120;
    pcVar15 = pcStack_118;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) goto SUB_10ad4c21c;
  }
  else {
    if ((char)piVar19[10] == '\x01') {
      FUN_10a314fa4(auStack_218);
      uStack_228 = uStack_1b0;
      uStack_220 = uStack_1a8;
      uVar29 = (uint)&uStack_228;
      FUN_10a314d24();
      if ((*(byte *)((long)piVar19 + 0x52) & uVar29 == 3) != 0) {
        uVar29 = 1;
      }
      piVar19 = (int *)(ulong)uVar29;
      uVar28 = 3;
      if ((uVar29 & 0xfffffffb) != 0xb) {
        uVar28 = 1;
      }
      piVar20 = (int *)(ulong)uVar28;
      FUN_10ad4b390();
      puVar16 = auStack_230;
      param_1 = piVar19;
      pppppppuVar41 = &pppppppuStack_120;
      pcVar15 = (code *)0x10a318b38;
SUB_10ad4c21c:
      *(undefined8 *)(puVar16 + -0x20) = unaff_x20;
      *(int **)(puVar16 + -0x18) = param_1;
      *(undefined8 ********)(puVar16 + -0x10) = pppppppuVar41;
      *(code **)(puVar16 + -8) = pcVar15;
      piVar24 = piVar19;
      FUN_10ad4c000();
      if (piVar24 != (int *)0x0) {
        *(int *)(puVar16 + -0x28) = (int)piVar19;
        *(int *)(puVar16 + -0x24) = (int)piVar20;
        piVar24 = piVar24 + 0x110;
        FUN_10ad4d070(piVar24,puVar16 + -0x28);
        if (piVar24 != (int *)0x0) {
          return (int *)(ulong)(uint)piVar24[6];
        }
      }
      uVar29 = (int)piVar19 - 7;
      if (uVar29 < 0xb) {
        piVar19 = (int *)(ulong)*(uint *)(&UNK_10e50fed4 + (ulong)uVar29 * 4);
      }
      else {
        piVar19 = (int *)0x0;
      }
      return piVar19;
    }
    uVar29 = *(uint *)(*(long *)(piVar19 + 6) + 0x10);
    piVar20 = (int *)(ulong)uVar29;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
SUB_10ab79cbc:
      if (uVar29 < 0x17) {
        return (int *)(ulong)*(uint *)(&UNK_10e502c00 + (ulong)uVar29 * 4);
      }
      return (int *)0x4;
    }
  }
  ___stack_chk_fail();
  pcStack_238 = FUN_10a318c10;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar2 = piVar20[0xe];
  iVar3 = piVar20[0xf];
  iVar17 = (int)piVar20 + 0x18;
  func_0x00010a1a51ec();
  iVar37 = piVar20[0x14];
  iVar18 = (int)piVar20 + 0x18;
  func_0x00010a1a527c();
  if ((char)iVar37 == '\x01') {
    iVar18 = (iVar18 << 1) / 3;
  }
  if ((*(char *)((long)piVar20 + 0x52) == '\x01') && ((char)piVar20[10] == '\0')) {
    bVar7 = (*piVar20 != 3 || *(int *)(*(long *)(piVar20 + 6) + 0x24) != 1) &&
            *(int *)(*(long *)(piVar20 + 6) + 0x24) != 3;
  }
  else {
    bVar7 = true;
  }
  if (*(char *)((long)piVar20 + 0x51) == '\x01') {
    bVar14 = true;
    do {
      bVar11 = bVar14;
      iVar37 = iVar2;
      iVar32 = iVar17;
      if (!bVar11) {
        iVar37 = iVar3;
        iVar32 = iVar18;
      }
      if (iVar32 != iVar37) {
        if (iVar37 <= iVar32) {
          uVar21 = *(ulong *)(piVar20 + 2);
          FUN_10a1b181c(uVar21,piVar20 + 6);
          if ((uVar21 & 1) == 0) goto LAB_10a318ea0;
          goto LAB_10a318fbc;
        }
        break;
      }
      bVar14 = false;
    } while (bVar11);
    if (!bVar7) goto LAB_10a318d40;
LAB_10a318cdc:
    if ((param_3 != 0) && ((char)piVar20[10] != '\x01')) {
      if ((char)piVar20[10] == '\0') {
        lVar40 = *(long *)(piVar20 + 6);
        if (lVar40 != 0) {
          lVar35 = -0xa8;
          pcStack_2e8 = FUN_10a326ad0;
          ppuStack_2e0 = &PTR_DAT_110bc4520;
          FUN_10a1b1c04(lVar40,*(undefined8 *)(lVar40 + 0x10),*(undefined4 *)(lVar40 + 0x24),param_2
                        ,*(undefined8 *)(lVar40 + 0x18),&pcStack_2e8,0,0,0);
          ppuVar31 = ppuStack_2e0;
LAB_10a318dc4:
          (*(code *)*ppuVar31)(auStack_230 + lVar35 + -8);
        }
      }
      else {
        lVar40 = *(long *)(piVar20 + 6);
        if (lVar40 != 0) {
          uStack_4c0 = (code *)CONCAT44(uStack_4c0._4_4_,*(undefined4 *)(lVar40 + 0x10));
          lVar35 = -0xe8;
          pcStack_328 = FUN_10a326ad0;
          ppuStack_320 = &PTR_DAT_110bc4520;
          FUN_10a1b76e0(lVar40,*(undefined4 *)(lVar40 + 8),*(undefined4 *)(lVar40 + 0xc),&uStack_4c0
                        ,*(undefined8 *)(lVar40 + 0x60),param_2,&pcStack_328);
          ppuVar31 = ppuStack_320;
          goto LAB_10a318dc4;
        }
      }
    }
    bVar7 = false;
  }
  else {
    if (bVar7) goto LAB_10a318cdc;
LAB_10a318d40:
    bVar7 = true;
  }
  uVar21 = *(ulong *)(piVar20 + 2);
  FUN_10a1b181c(uVar21,piVar20 + 6);
  if ((uVar21 & 1) == 0) {
LAB_10a318ea0:
    piVar19 = (int *)0x0;
LAB_10a3199ac:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
      return piVar19;
    }
    ___stack_chk_fail(piVar19);
  }
  else {
    if (param_3 == 0) {
      bVar7 = true;
    }
    if ((bVar7) || ((char)piVar20[10] != '\x01')) {
LAB_10a318fbc:
      if ((*(char *)((long)piVar20 + 0x52) == '\x01') && ((char)piVar20[10] == '\0')) {
        lVar40 = *(long *)(piVar20 + 6);
        if ((*piVar20 == 3) && (*(int *)(lVar40 + 0x24) == 1)) {
          pppuStack_780 = appuStack_698;
          pcStack_6a0 = FUN_10a326ad0;
          appuStack_698[0] = &PTR_DAT_110bc4520;
          puVar39 = (undefined8 *)0x90;
          __Znwm();
          puVar39[2] = 0;
          puVar39[3] = 0;
          *(undefined1 *)(puVar39 + 1) = 0;
          *puVar39 = &PTR_FUN_110bab9a0;
          *(undefined1 *)(puVar39 + 0x11) = 0;
          puVar39[6] = 0;
          puVar39[7] = 0;
          puVar39[4] = 0xffffffff00000000;
          puVar39[5] = 0;
          puVar39[8] = 0;
          puVar39[9] = 0x109d138c8;
          puVar39[10] = &PTR_DAT_110b3e838;
          puVar39[0xb] = FUN_10a1b2664;
          uStack_4c0 = FUN_10a326ad0;
          ppuStack_4b8 = &PTR_DAT_110bc4520;
          FUN_10a1b1c04();
          (*(code *)*ppuStack_4b8)(&ppuStack_4b8);
          iVar37 = *(int *)(lVar40 + 0x14);
          if (0 < iVar37) {
            iVar32 = 0;
            lVar34 = puVar39[5];
            lVar35 = *(long *)(lVar40 + 0x28);
            iVar4 = *(int *)(puVar39 + 3);
            iVar5 = *(int *)(lVar40 + 0x18);
            iVar30 = *(int *)(lVar40 + 0x10);
            do {
              if (0 < iVar30) {
                uVar21 = 0;
                iVar25 = 0;
                do {
                  fVar42 = (float)NEON_ucvtf((uint)*(byte *)(lVar35 + (uVar21 | 3)));
                  fVar42 = 1.0 / fVar42;
                  fVar44 = (float)NEON_ucvtf((uint)*(byte *)(lVar35 + uVar21));
                  fVar44 = fVar42 * fVar44;
                  bVar43 = *(byte *)(lVar35 + (uVar21 | 2));
                  uVar28 = (uint)fVar44 >> 0x17;
                  uVar29 = (uint)fVar44 & 0x7fffff;
                  uVar8 = uVar28 - 0x70;
                  if (uVar28 < 0x70 || uVar8 == 0) {
                    if ((uint)fVar44 >> 0x18 < 0x33) {
                      uVar26 = 0;
                    }
                    else {
                      uVar29 = (uVar29 | 0x800000) >> (ulong)(0x71 - uVar28 & 0x1f);
                      uVar26 = (ushort)((uVar29 & 0x1000) * 2 + uVar29 >> 0xd);
                    }
                  }
                  else if (uVar8 == 0x8f) {
                    if (uVar29 == 0) {
LAB_10a3191d0:
                      uVar26 = 0x7c00;
                    }
                    else {
                      uVar26 = (ushort)(uVar29 < 0x2000) | (ushort)(uVar29 >> 0xd) | 0x7c00;
                    }
                  }
                  else {
                    uVar1 = uVar29 + 0x2000;
                    uVar10 = uVar8;
                    if (0x7fdfff < uVar29) {
                      uVar1 = 0;
                      uVar10 = uVar28 - 0x6f;
                    }
                    if (((uint)fVar44 & 0x1000) != 0) {
                      uVar29 = uVar1;
                      uVar8 = uVar10;
                    }
                    if (0x1e < uVar8) {
                      fStack_590 = 1e+10;
                      iVar27 = 10;
                      do {
                        fStack_590 = fStack_590 * fStack_590;
                        iVar27 = iVar27 + -1;
                      } while (iVar27 != 0);
                      goto LAB_10a3191d0;
                    }
                    uVar26 = (ushort)(uVar29 >> 0xd) | (ushort)(uVar8 << 10);
                  }
                  fVar44 = fVar42 * (float)*(byte *)(lVar35 + (uVar21 | 1));
                  *(ushort *)(lVar34 + uVar21 * 2) = uVar26;
                  uVar28 = (uint)fVar44 >> 0x17;
                  uVar29 = (uint)fVar44 & 0x7fffff;
                  uVar8 = uVar28 - 0x70;
                  if (uVar28 < 0x70 || uVar8 == 0) {
                    if ((uint)fVar44 >> 0x18 < 0x33) {
                      uVar26 = 0;
                    }
                    else {
                      uVar29 = (uVar29 | 0x800000) >> (ulong)(0x71 - uVar28 & 0x1f);
                      uVar26 = (ushort)((uVar29 & 0x1000) * 2 + uVar29 >> 0xd);
                    }
                  }
                  else if (uVar8 == 0x8f) {
                    if (uVar29 == 0) {
LAB_10a3192a0:
                      uVar26 = 0x7c00;
                    }
                    else {
                      uVar26 = (ushort)(uVar29 < 0x2000) | (ushort)(uVar29 >> 0xd) | 0x7c00;
                    }
                  }
                  else {
                    uVar1 = uVar29 + 0x2000;
                    uVar10 = uVar8;
                    if (0x7fdfff < uVar29) {
                      uVar1 = 0;
                      uVar10 = uVar28 - 0x6f;
                    }
                    if (((uint)fVar44 & 0x1000) != 0) {
                      uVar29 = uVar1;
                      uVar8 = uVar10;
                    }
                    if (0x1e < uVar8) {
                      fStack_590 = 1e+10;
                      iVar27 = 10;
                      do {
                        fStack_590 = fStack_590 * fStack_590;
                        iVar27 = iVar27 + -1;
                      } while (iVar27 != 0);
                      goto LAB_10a3192a0;
                    }
                    uVar26 = (ushort)(uVar29 >> 0xd) | (ushort)(uVar8 << 10);
                  }
                  fVar44 = (float)NEON_ucvtf((uint)bVar43);
                  fVar42 = fVar42 * fVar44;
                  *(ushort *)(lVar34 + (uVar21 | 1) * 2) = uVar26;
                  uVar28 = (uint)fVar42 >> 0x17;
                  uVar29 = (uint)fVar42 & 0x7fffff;
                  uVar8 = uVar28 - 0x70;
                  if (uVar28 < 0x70 || uVar8 == 0) {
                    uVar29 = (uVar29 | 0x800000) >> (ulong)(0x71 - uVar28 & 0x1f);
                    uVar26 = 0;
                    if (0x32 < (uint)fVar42 >> 0x18) {
                      uVar26 = (ushort)((uVar29 & 0x1000) * 2 + uVar29 >> 0xd);
                    }
                  }
                  else if (uVar8 == 0x8f) {
                    uVar26 = 0x7c00;
                    if (uVar29 != 0) {
                      uVar26 = (ushort)(uVar29 < 0x2000) | (ushort)(uVar29 >> 0xd) | 0x7c00;
                    }
                  }
                  else {
                    uVar1 = uVar29 + 0x2000;
                    uVar10 = uVar8;
                    if (0x7fdfff < uVar29) {
                      uVar1 = 0;
                      uVar10 = uVar28 - 0x6f;
                    }
                    if (((uint)fVar42 & 0x1000) != 0) {
                      uVar29 = uVar1;
                      uVar8 = uVar10;
                    }
                    if (uVar8 < 0x1f) {
                      uVar26 = (ushort)(uVar29 >> 0xd) | (ushort)(uVar8 << 10);
                    }
                    else {
                      fStack_590 = 1e+10;
                      iVar27 = 10;
                      do {
                        fStack_590 = fStack_590 * fStack_590;
                        iVar27 = iVar27 + -1;
                      } while (iVar27 != 0);
                      uVar26 = 0x7c00;
                    }
                  }
                  *(ushort *)(lVar34 + (uVar21 | 2) * 2) = uVar26;
                  *(undefined2 *)(lVar34 + (uVar21 | 3) * 2) = 0x3c00;
                  iVar25 = iVar25 + 1;
                  uVar21 = uVar21 + 4;
                } while (iVar25 != iVar30);
              }
              lVar35 = lVar35 + iVar5;
              lVar34 = lVar34 + iVar4;
              iVar32 = iVar32 + 1;
            } while (iVar32 != iVar37);
          }
          FUN_10a1b1ba8(piVar20 + 6,puVar39);
        }
        else {
          if (*(int *)(lVar40 + 0x24) != 3) goto LAB_10a319588;
          pppuStack_780 = appuStack_6d8;
          pcStack_6e0 = FUN_10a326ad0;
          appuStack_6d8[0] = &PTR_DAT_110bc4520;
          lVar35 = *(long *)(lVar40 + 0x28);
          iVar32 = *(int *)(lVar40 + 0x10);
          puVar39 = (undefined8 *)0x90;
          __Znwm();
          puVar39[2] = 0;
          puVar39[3] = 0;
          *(undefined1 *)(puVar39 + 1) = 0;
          *puVar39 = &PTR_FUN_110bab9a0;
          *(undefined1 *)(puVar39 + 0x11) = 0;
          puVar39[6] = 0;
          puVar39[7] = 0;
          puVar39[4] = 0xffffffff00000000;
          puVar39[5] = 0;
          puVar39[8] = 0;
          puVar39[9] = 0x109d138c8;
          puVar39[10] = &PTR_DAT_110b3e838;
          puVar39[0xb] = FUN_10a1b2664;
          uStack_4c0 = FUN_10a326ad0;
          ppuStack_4b8 = &PTR_DAT_110bc4520;
          FUN_10a1b1c04();
          (*(code *)*ppuStack_4b8)(&ppuStack_4b8);
          iVar37 = *(int *)(lVar40 + 0x14);
          if (0 < iVar37) {
            iVar30 = 0;
            lVar34 = puVar39[5];
            uVar21 = (ulong)*(uint *)(lVar40 + 0x10);
            pbVar36 = (byte *)(lVar35 + 2);
            do {
              if (0 < (int)uVar21) {
                lVar35 = 0;
                pbVar38 = pbVar36;
                do {
                  fVar44 = *(float *)(&UNK_10e4ab450 + (ulong)pbVar38[-2] * 4);
                  fVar47 = *(float *)(&UNK_10e4ab450 + (ulong)pbVar38[-1] * 4);
                  fVar48 = *(float *)(&UNK_10e4ab450 + (ulong)*pbVar38 * 4);
                  fVar42 = fVar48;
                  if (fVar48 <= fVar47) {
                    fVar42 = fVar47;
                  }
                  if (fVar42 <= fVar44) {
                    fVar42 = fVar44;
                  }
                  if (fVar42 <= 1.0) {
                    fVar42 = 1.0;
                  }
                  fVar42 = 255.0 / fVar42;
                  auVar45._0_4_ = fVar44 * fVar42 + 0.5;
                  auVar45._4_4_ = fVar47 * fVar42 + 0.5;
                  auVar45._8_4_ = fVar48 * fVar42 + 0.5;
                  auVar45._12_4_ = fVar42 + 0.5;
                  auVar46._8_4_ = 0x437f0000;
                  auVar46._0_8_ = 0x437f0000437f0000;
                  auVar46._12_4_ = 0x437f0000;
                  auVar46 = NEON_fminnm(auVar45,auVar46,4);
                  *(uint *)(lVar34 + lVar35 * 4) =
                       CONCAT13((char)(int)auVar46._12_4_,
                                CONCAT12((char)(int)auVar46._8_4_,
                                         CONCAT11((char)(int)auVar46._4_4_,(char)(int)auVar46._0_4_)
                                        ));
                  lVar35 = lVar35 + 1;
                  uVar21 = (ulong)*(int *)(lVar40 + 0x10);
                  pbVar38 = pbVar38 + 3;
                } while (lVar35 < (long)uVar21);
                iVar37 = *(int *)(lVar40 + 0x14);
              }
              lVar34 = lVar34 + (long)iVar32 * 4;
              iVar30 = iVar30 + 1;
              pbVar36 = pbVar36 + iVar32 * 3;
            } while (iVar30 < iVar37);
          }
          FUN_10a1b1ba8(piVar20 + 6,puVar39);
        }
        (*(code *)**pppuStack_780)();
      }
LAB_10a319588:
      if (*(char *)((long)piVar20 + 0x51) == '\x01') {
        bVar7 = true;
LAB_10a319598:
        iVar37 = iVar2;
        iVar32 = iVar17;
        if (!bVar7) {
          iVar37 = iVar3;
          iVar32 = iVar18;
        }
        if (iVar32 == iVar37) goto code_r0x00010a3195b0;
        if (iVar37 <= iVar32) {
          if ((char)piVar20[10] == '\x01') {
            lVar40 = *(long *)(piVar20 + 2);
            if (*(char *)(lVar40 + 0x87) < '\0') {
              func_0x000107c3192c(&fStack_590,*(undefined8 *)(lVar40 + 0x70),
                                  *(undefined8 *)(lVar40 + 0x78));
            }
            else {
              iStack_588 = (int)*(undefined8 *)(lVar40 + 0x78);
              iStack_584 = (int)((ulong)*(undefined8 *)(lVar40 + 0x78) >> 0x20);
              fStack_590 = (float)*(undefined8 *)(lVar40 + 0x70);
              iStack_58c = (int)((ulong)*(undefined8 *)(lVar40 + 0x70) >> 0x20);
              uStack_580 = (undefined4)*(undefined8 *)(lVar40 + 0x80);
              uStack_57c = (undefined4)((ulong)*(undefined8 *)(lVar40 + 0x80) >> 0x20);
            }
            FUN_109feb280(&uStack_4c0,&UNK_10f64e502,&fStack_590);
            FUN_10a0029c0(&uStack_4c0);
            goto LAB_10a319b3c;
          }
          lVar40 = 0;
          if (*(long *)(piVar20 + 6) != 0) {
            lVar40 = *(long *)(piVar20 + 6) + 0x10;
          }
          FUN_10a0f3910(&uStack_4c0,lVar40,0);
          fStack_590 = 127.5;
          iStack_584 = 0;
          uStack_580 = 0;
          iStack_58c = 0;
          iStack_588 = 0;
          uVar21 = (ulong)&fStack_590 | 8;
          uStack_574 = 0;
          uStack_570._0_4_ = 0;
          uStack_57c = 0;
          uStack_578 = 0;
          uStack_568._4_4_ = 0;
          uStack_570._4_4_ = 0;
          uStack_568._0_4_ = 0;
          uStack_570 = 0;
          lStack_558 = 0;
          uStack_560 = 0;
          uStack_55c = 0;
          uStack_538 = 0;
          lStack_540 = 0;
          iVar17 = (int)*(long *)(piVar20 + 0xe);
          iVar18 = piVar20[0xf];
          uStack_550 = uVar21;
          plStack_548 = &lStack_540;
          if (param_3 != 0) {
            uStack_660 = (long *)CONCAT44(2,(uint)uStack_4c0 & 0xfff | 0x42ff0000);
            puStack_620 = &uStack_658;
            uStack_658 = (undefined8 *)CONCAT44(iVar17,iVar18);
            uStack_638 = 0;
            uStack_640 = 0;
            uStack_628 = 0;
            uStack_630 = 0;
            puStack_618 = &uStack_610;
            uStack_610 = 0;
            uStack_608 = 0;
            lStack_648 = param_2;
            if ((param_2 == 0) && ((long)iVar18 * (long)iVar17 != 0)) {
              puVar23 = (undefined4 *)0x24;
              lStack_650 = param_2;
              func_0x000107c2ae8c();
              *puVar23 = 1;
              puStack_3f0 = puVar23 + 1;
              pfStack_3e8 = (float *)0x1c;
              *(undefined1 *)(puVar23 + 8) = 0;
              *(undefined8 *)(puVar23 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar23 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar23 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar23 + 4) = 0x61746164207c7c20;
              func_0x000109ac3188(0xffffff29,&puStack_3f0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
              goto LAB_10a319b3c;
            }
            uVar29 = (((uint)uStack_4c0 & 0xfff) >> 3) + 1 <<
                     (ulong)(0xfa50U >> (ulong)(((uint)uStack_4c0 & 7) << 1) & 3);
            uStack_538 = (ulong)uVar29;
            lStack_540 = (long)(int)uVar29 * (long)iVar17;
            fStack_590 = (float)((uint)uStack_4c0 & 0xfff | 0x42ff4000);
            iStack_58c = 2;
            uStack_580 = (undefined4)param_2;
            uStack_57c = (undefined4)((ulong)param_2 >> 0x20);
            uStack_570 = param_2 + lStack_540 * iVar18;
            iStack_588 = iVar18;
            iStack_584 = iVar17;
            uStack_578 = uStack_580;
            uStack_574 = uStack_57c;
          }
          lStack_558 = 0;
          uStack_55c = 0;
          uStack_560 = 0;
          uStack_660 = (long *)CONCAT44(uStack_660._4_4_,0x1010000);
          uStack_658 = &uStack_4c0;
          lStack_650 = 0;
          puStack_3f0 = (undefined4 *)CONCAT44(puStack_3f0._4_4_,0x2010000);
          uStack_3e0 = 0;
          alStack_700[0] = *(long *)(piVar20 + 0xe);
          uStack_580 = uStack_578;
          uStack_57c = uStack_574;
          pfStack_3e8 = &fStack_590;
          uStack_568 = uStack_570;
          func_0x000109b0f718(0,0,&uStack_660,&puStack_3f0,alStack_700,1);
          puVar39 = (undefined8 *)((ulong)&fStack_590 | 4);
          uStack_768 = CONCAT44(iStack_584,iStack_588);
          uStack_770 = CONCAT44(iStack_58c,fStack_590);
          uStack_758 = CONCAT44(uStack_574,uStack_578);
          uStack_760 = CONCAT44(uStack_57c,uStack_580);
          uStack_730 = (ulong)&uStack_770 | 8;
          lStack_748 = uStack_568;
          lStack_750 = uStack_570;
          uStack_740 = CONCAT44(uStack_55c,uStack_560);
          lStack_738 = lStack_558;
          lStack_720 = 0;
          lStack_718 = 0;
          if (iStack_58c < 3) {
            lStack_720 = *plStack_548;
            lStack_718 = plStack_548[1];
            plStack_728 = &lStack_720;
          }
          else {
            uStack_730 = uStack_550;
            plStack_728 = plStack_548;
            uStack_550 = uVar21;
            plStack_548 = &lStack_540;
          }
          fStack_590 = 127.5;
          puVar39[1] = 0;
          *puVar39 = 0;
          puVar39[3] = 0;
          puVar39[2] = 0;
          puVar39[5] = 0;
          puVar39[4] = 0;
          *(undefined8 *)((long)puVar39 + 0x34) = 0;
          *(undefined8 *)((long)puVar39 + 0x2c) = 0;
          FUN_10a0f3c50(&uStack_660,&uStack_770,0,0xffffffff);
          if (lStack_738 != 0) {
            piVar19 = (int *)(lStack_738 + 0x14);
            do {
              iVar17 = *piVar19;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar7) {
                *piVar19 = iVar17 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar17 + -1 == 0) {
              func_0x000109a848d4(&uStack_770);
            }
          }
          lStack_738 = 0;
          uStack_758 = 0;
          uStack_760 = 0;
          lStack_748 = 0;
          lStack_750 = 0;
          if (0 < uStack_770._4_4_) {
            lVar40 = 0;
            do {
              *(undefined4 *)(uStack_730 + lVar40 * 4) = 0;
              lVar40 = lVar40 + 1;
            } while (lVar40 < uStack_770._4_4_);
          }
          if (plStack_728 != &lStack_720 && plStack_728 != (long *)0x0) {
            _free(plStack_728[-1]);
          }
          uVar12 = uStack_660;
          uStack_660 = (long *)0x0;
          FUN_10a1b1ba8(piVar20 + 6,uVar12);
          plVar13 = uStack_660;
          uStack_660 = (long *)0x0;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 8))();
          }
          if (lStack_558 != 0) {
            piVar19 = (int *)(lStack_558 + 0x14);
            do {
              iVar17 = *piVar19;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar7) {
                *piVar19 = iVar17 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar17 + -1 == 0) {
              func_0x000109a848d4(&fStack_590);
            }
          }
          lStack_558 = 0;
          uStack_578 = 0;
          uStack_574 = 0;
          uStack_580 = 0;
          uStack_57c = 0;
          uStack_568._0_4_ = 0;
          uStack_568._4_4_ = 0;
          uStack_570._0_4_ = 0;
          uStack_570._4_4_ = 0;
          if (0 < iStack_58c) {
            lVar40 = 0;
            do {
              *(undefined4 *)(uStack_550 + lVar40 * 4) = 0;
              lVar40 = lVar40 + 1;
            } while (lVar40 < iStack_58c);
          }
          if (plStack_548 != &lStack_540 && plStack_548 != (long *)0x0) {
            _free(plStack_548[-1]);
          }
          if (lStack_488 != 0) {
            piVar19 = (int *)(lStack_488 + 0x14);
            do {
              iVar17 = *piVar19;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar7) {
                *piVar19 = iVar17 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar17 + -1 == 0) {
              func_0x000109a848d4(&uStack_4c0);
            }
          }
          lStack_488 = 0;
          uStack_4a8 = 0;
          uStack_4b0 = 0;
          uStack_498 = 0;
          uStack_4a0 = 0;
          if (0 < uStack_4c0._4_4_) {
            lVar40 = 0;
            do {
              *(undefined4 *)(lStack_480 + lVar40 * 4) = 0;
              lVar40 = lVar40 + 1;
            } while (lVar40 < uStack_4c0._4_4_);
          }
          if (puStack_478 != auStack_470 && puStack_478 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_478 + -8));
          }
        }
      }
LAB_10a319934:
      if ((param_3 != 0) && ((char)piVar20[10] != '\x01')) {
        if ((char)piVar20[10] == '\0') {
          lVar40 = *(long *)(piVar20 + 6);
          if (lVar40 != 0) {
            if (*(char *)(*(long *)(lVar40 + 0x50) + 8) == '\x01') {
              (**(code **)(lVar40 + 0x48))(*(undefined8 *)(lVar40 + 0x28));
            }
            *(undefined8 *)(lVar40 + 0x28) = 0;
          }
        }
        else {
          lVar40 = *(long *)(piVar20 + 6);
          if (lVar40 != 0) {
            if ((*(long *)(lVar40 + 0x58) != 0) &&
               (*(char *)(*(long *)(lVar40 + 0x20) + 8) == '\x01')) {
              (**(code **)(lVar40 + 0x18))();
            }
            *(undefined8 *)(lVar40 + 0x58) = 0;
          }
        }
      }
      piVar19 = (int *)0x1;
      goto LAB_10a3199ac;
    }
    puVar39 = *(undefined8 **)(piVar20 + 6);
    FUN_10a314fa4(&uStack_4c0,puVar39);
    pcVar15 = uStack_4c0;
    if (uStack_4c0 != (code *)0x0) {
      _memcpy(&puStack_3f0,&ppuStack_4b8,(long)uStack_4c0 << 5);
    }
    uStack_388 = uStack_450;
    pcStack_390 = pcStack_458;
    uStack_380 = uStack_448;
    lStack_378 = lStack_440;
    if (lStack_440 != 0) {
      _memcpy(auStack_370,auStack_438,lStack_440 * 0x18);
    }
    if (pcVar15 != (code *)0x1) {
      FUN_10a00946c(&UNK_10f64e459);
      goto LAB_10a319b3c;
    }
    uStack_4c0 = pcStack_390;
    ppuStack_4b8 = (undefined **)CONCAT44(ppuStack_4b8._4_4_,(undefined4)uStack_388);
    puVar22 = &uStack_4c0;
    func_0x0001096f1ebc();
    if ((int)puVar22 == 0) {
      uVar21 = -uStack_3e0;
      if (-1 < (long)uStack_3e0) {
        uVar21 = uStack_3e0;
      }
    }
    else {
      uVar21 = (uStack_388 >> 0x20) * ((ulong)puVar22 & 0xffffffff);
    }
    uVar33 = (ulong)*(uint *)(puVar39 + 2);
    if (*(uint *)(puVar39 + 2) != 0) {
      uVar9 = 0;
      if (uVar33 != 0) {
        uVar9 = param_3 / uVar33;
      }
      if (param_3 == uVar9 * uVar33) {
        if (uVar9 < uVar21) {
          uVar21 = *(ulong *)(piVar20 + 2);
          if (*(char *)(uVar21 + 0x87) < '\0') {
            func_0x000107c3192c(&fStack_590,*(undefined8 *)(uVar21 + 0x70),
                                *(undefined8 *)(uVar21 + 0x78));
          }
          else {
            iStack_588 = (int)*(undefined8 *)(uVar21 + 0x78);
            iStack_584 = (int)((ulong)*(undefined8 *)(uVar21 + 0x78) >> 0x20);
            fStack_590 = (float)*(undefined8 *)(uVar21 + 0x70);
            iStack_58c = (int)((ulong)*(undefined8 *)(uVar21 + 0x70) >> 0x20);
            uStack_580 = (undefined4)*(undefined8 *)(uVar21 + 0x80);
            uStack_57c = (undefined4)((ulong)*(undefined8 *)(uVar21 + 0x80) >> 0x20);
          }
          FUN_109feb280(&uStack_4c0,&UNK_10f64e4cd,&fStack_590);
          FUN_10a0029c0(&uStack_4c0);
          goto LAB_10a319b3c;
        }
        FUN_10a314fa4(&fStack_590,puVar39);
        uStack_710 = *puVar39;
        uStack_708 = *(undefined4 *)(puVar39 + 1);
        uStack_6e8 = SUB84(&uStack_710,0);
        func_0x0001096f1ebc();
        uStack_660 = (long *)*puVar39;
        uStack_658 = (undefined8 *)puVar39[1];
        lStack_650 = CONCAT44(lStack_650._4_4_,*(undefined4 *)(puVar39 + 2));
        lStack_648 = 0;
        alStack_700[0] = param_2;
        uStack_6f0 = uVar9;
        func_0x0001096f22ac(&uStack_4c0,alStack_700,1,&uStack_660);
        fStack_590 = SUB84(uStack_4c0,0);
        iStack_58c = (int)((ulong)uStack_4c0 >> 0x20);
        if (uStack_4c0 != (code *)0x0) {
          _memcpy(&iStack_588,&ppuStack_4b8,(long)uStack_4c0 << 5);
        }
        uStack_520 = (undefined4)uStack_450;
        uStack_51c = (undefined4)(uStack_450 >> 0x20);
        pcStack_528 = pcStack_458;
        uStack_518 = uStack_448;
        lStack_510 = lStack_440;
        if (lStack_440 != 0) {
          _memcpy(auStack_508,auStack_438,lStack_440 * 0x18);
        }
        FUN_10a314fa4(&uStack_660,puVar39);
        func_0x0001096f1c24(&fStack_590,&uStack_660);
        goto LAB_10a318fbc;
      }
    }
  }
  lVar40 = *(long *)(piVar20 + 2);
  if (*(char *)(lVar40 + 0x87) < '\0') {
    func_0x000107c3192c(&fStack_590,*(undefined8 *)(lVar40 + 0x70),*(undefined8 *)(lVar40 + 0x78));
  }
  else {
    iStack_588 = (int)*(undefined8 *)(lVar40 + 0x78);
    iStack_584 = (int)((ulong)*(undefined8 *)(lVar40 + 0x78) >> 0x20);
    fStack_590 = (float)*(undefined8 *)(lVar40 + 0x70);
    iStack_58c = (int)((ulong)*(undefined8 *)(lVar40 + 0x70) >> 0x20);
    uStack_580 = (undefined4)*(undefined8 *)(lVar40 + 0x80);
    uStack_57c = (undefined4)((ulong)*(undefined8 *)(lVar40 + 0x80) >> 0x20);
  }
  FUN_109feb280(&uStack_4c0,&UNK_10f64e495,&fStack_590);
  FUN_10a0029c0(&uStack_4c0);
LAB_10a319b3c:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10a319b40);
  (*pcVar15)();
code_r0x00010a3195b0:
  bVar14 = !bVar7;
  bVar7 = false;
  if (bVar14) goto LAB_10a319934;
  goto LAB_10a319598;
}



/* Entry: 10a318aa8; end: 10a318c0f;  */

/* WARNING: Possible PIC construction at 0x00010a318b34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a318b38) */
/* WARNING: Removing unreachable block (ram,0x00010a318b50) */

undefined4 FUN_10a318aa8(int *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  long *plVar15;
  bool bVar16;
  code *pcVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  int *piVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  ushort uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  undefined **ppuVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  byte *pbVar35;
  int iVar36;
  byte *pbVar37;
  ulong unaff_x19;
  ulong uVar38;
  undefined8 unaff_x20;
  undefined8 *puVar39;
  long lVar40;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  float fVar41;
  byte bVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  undefined ***pppuStack_670;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long lStack_640;
  long lStack_638;
  undefined8 uStack_630;
  long lStack_628;
  ulong uStack_620;
  long *plStack_618;
  long lStack_610;
  long lStack_608;
  undefined8 uStack_600;
  undefined4 uStack_5f8;
  long alStack_5f0 [2];
  ulong uStack_5e0;
  undefined4 uStack_5d8;
  code *pcStack_5d0;
  undefined **appuStack_5c8 [7];
  code *pcStack_590;
  undefined **appuStack_588 [7];
  undefined8 uStack_550;
  undefined8 uStack_548;
  long lStack_540;
  long lStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 *puStack_510;
  undefined8 *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  float fStack_480;
  int iStack_47c;
  int iStack_478;
  int iStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  long lStack_448;
  ulong uStack_440;
  long *plStack_438;
  long lStack_430;
  ulong uStack_428;
  code *pcStack_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  long lStack_400;
  undefined1 auStack_3f8 [72];
  undefined8 uStack_3b0;
  undefined **ppuStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_378;
  long lStack_370;
  undefined1 *puStack_368;
  undefined1 auStack_360 [24];
  code *pcStack_348;
  ulong uStack_340;
  undefined4 uStack_338;
  long lStack_330;
  undefined1 auStack_328 [72];
  undefined4 *puStack_2e0;
  float *pfStack_2d8;
  ulong uStack_2d0;
  code *pcStack_280;
  ulong uStack_278;
  undefined4 uStack_270;
  long lStack_268;
  undefined1 auStack_260 [72];
  code *pcStack_218;
  undefined **ppuStack_210;
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  long lStack_198;
  code *pcStack_128;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 auStack_108 [104];
  undefined8 uStack_a0;
  undefined4 uStack_98;
  long lStack_38;
  
  puVar2 = &stack0xfffffffffffffff0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((char)param_1[10] == '\0') {
    uVar28 = *(uint *)(*(long *)(param_1 + 6) + 0x24);
    uVar27 = uVar28;
    if (*(char *)((long)param_1 + 0x52) == '\x01') {
      uVar10 = uVar28;
      if (uVar28 == 3) {
        uVar10 = 1;
      }
      uVar27 = 0xb;
      if (*param_1 != 3 || uVar28 != 1) {
        uVar27 = uVar10;
      }
    }
    uVar38 = (ulong)uVar27;
    uVar28 = 3;
    if ((uVar27 & 0xfffffffb) != 0xb) {
      uVar28 = 1;
    }
    piVar21 = (int *)(ulong)uVar28;
    FUN_10ad4b390();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto SUB_10ad4c21c;
  }
  else {
    if ((char)param_1[10] == '\x01') {
      FUN_10a314fa4(auStack_108);
      uStack_118 = uStack_a0;
      uStack_110 = uStack_98;
      uVar28 = (uint)&uStack_118;
      FUN_10a314d24();
      if ((*(byte *)((long)param_1 + 0x52) & uVar28 == 3) != 0) {
        uVar28 = 1;
      }
      uVar38 = (ulong)uVar28;
      uVar27 = 3;
      if ((uVar28 & 0xfffffffb) != 0xb) {
        uVar27 = 1;
      }
      piVar21 = (int *)(ulong)uVar27;
      FUN_10ad4b390();
      unaff_x30 = 0x10a318b38;
      register0x00000008 = (BADSPACEBASE *)auStack_120;
      unaff_x19 = uVar38;
      unaff_x29 = puVar2;
SUB_10ad4c21c:
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar32 = uVar38;
      FUN_10ad4c000();
      if (uVar32 != 0) {
        *(int *)((long)register0x00000008 + -0x28) = (int)uVar38;
        *(int *)((long)register0x00000008 + -0x24) = (int)piVar21;
        lVar40 = uVar32 + 0x440;
        FUN_10ad4d070(lVar40,(undefined1 *)((long)register0x00000008 + -0x28));
        if (lVar40 != 0) {
          return *(undefined4 *)(lVar40 + 0x18);
        }
      }
      uVar28 = (int)uVar38 - 7;
      if (uVar28 < 0xb) {
        uVar20 = *(undefined4 *)(&UNK_10e50fed4 + (ulong)uVar28 * 4);
      }
      else {
        uVar20 = 0;
      }
      return uVar20;
    }
    piVar21 = (int *)(ulong)*(uint *)(*(long *)(param_1 + 6) + 0x10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      if (*(uint *)(*(long *)(param_1 + 6) + 0x10) < 0x17) {
        return *(undefined4 *)(&UNK_10e502c00 + (long)piVar21 * 4);
      }
      return 4;
    }
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_10a318c10;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar4 = piVar21[0xe];
  iVar5 = piVar21[0xf];
  iVar18 = (int)piVar21 + 0x18;
  func_0x00010a1a51ec();
  iVar36 = piVar21[0x14];
  iVar19 = (int)piVar21 + 0x18;
  func_0x00010a1a527c();
  if ((char)iVar36 == '\x01') {
    iVar19 = (iVar19 << 1) / 3;
  }
  if ((*(char *)((long)piVar21 + 0x52) == '\x01') && ((char)piVar21[10] == '\0')) {
    bVar9 = (*piVar21 != 3 || *(int *)(*(long *)(piVar21 + 6) + 0x24) != 1) &&
            *(int *)(*(long *)(piVar21 + 6) + 0x24) != 3;
  }
  else {
    bVar9 = true;
  }
  if (*(char *)((long)piVar21 + 0x51) == '\x01') {
    bVar16 = true;
    do {
      bVar13 = bVar16;
      iVar36 = iVar4;
      iVar31 = iVar18;
      if (!bVar13) {
        iVar36 = iVar5;
        iVar31 = iVar19;
      }
      if (iVar31 != iVar36) {
        if (iVar36 <= iVar31) {
          uVar38 = *(ulong *)(piVar21 + 2);
          FUN_10a1b181c(uVar38,piVar21 + 6);
          if ((uVar38 & 1) == 0) goto LAB_10a318ea0;
          goto LAB_10a318fbc;
        }
        break;
      }
      bVar16 = false;
    } while (bVar13);
    if (!bVar9) goto LAB_10a318d40;
LAB_10a318cdc:
    if ((param_3 != 0) && ((char)piVar21[10] != '\x01')) {
      if ((char)piVar21[10] == '\0') {
        lVar40 = *(long *)(piVar21 + 6);
        if (lVar40 != 0) {
          lVar34 = -0xa8;
          pcStack_1d8 = FUN_10a326ad0;
          ppuStack_1d0 = &PTR_DAT_110bc4520;
          FUN_10a1b1c04(lVar40,*(undefined8 *)(lVar40 + 0x10),*(undefined4 *)(lVar40 + 0x24),param_2
                        ,*(undefined8 *)(lVar40 + 0x18),&pcStack_1d8,0,0,0);
          ppuVar30 = ppuStack_1d0;
LAB_10a318dc4:
          (*(code *)*ppuVar30)(auStack_120 + lVar34 + -8);
        }
      }
      else {
        lVar40 = *(long *)(piVar21 + 6);
        if (lVar40 != 0) {
          uStack_3b0 = (code *)CONCAT44(uStack_3b0._4_4_,*(undefined4 *)(lVar40 + 0x10));
          lVar34 = -0xe8;
          pcStack_218 = FUN_10a326ad0;
          ppuStack_210 = &PTR_DAT_110bc4520;
          FUN_10a1b76e0(lVar40,*(undefined4 *)(lVar40 + 8),*(undefined4 *)(lVar40 + 0xc),&uStack_3b0
                        ,*(undefined8 *)(lVar40 + 0x60),param_2,&pcStack_218);
          ppuVar30 = ppuStack_210;
          goto LAB_10a318dc4;
        }
      }
    }
    bVar9 = false;
  }
  else {
    if (bVar9) goto LAB_10a318cdc;
LAB_10a318d40:
    bVar9 = true;
  }
  uVar38 = *(ulong *)(piVar21 + 2);
  FUN_10a1b181c(uVar38,piVar21 + 6);
  if ((uVar38 & 1) == 0) {
LAB_10a318ea0:
    uVar20 = 0;
LAB_10a3199ac:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
      return uVar20;
    }
    ___stack_chk_fail(uVar20);
  }
  else {
    if (param_3 == 0) {
      bVar9 = true;
    }
    if ((bVar9) || ((char)piVar21[10] != '\x01')) {
LAB_10a318fbc:
      if ((*(char *)((long)piVar21 + 0x52) == '\x01') && ((char)piVar21[10] == '\0')) {
        lVar40 = *(long *)(piVar21 + 6);
        if ((*piVar21 == 3) && (*(int *)(lVar40 + 0x24) == 1)) {
          pppuStack_670 = appuStack_588;
          pcStack_590 = FUN_10a326ad0;
          appuStack_588[0] = &PTR_DAT_110bc4520;
          puVar39 = (undefined8 *)0x90;
          __Znwm();
          puVar39[2] = 0;
          puVar39[3] = 0;
          *(undefined1 *)(puVar39 + 1) = 0;
          *puVar39 = &PTR_FUN_110bab9a0;
          *(undefined1 *)(puVar39 + 0x11) = 0;
          puVar39[6] = 0;
          puVar39[7] = 0;
          puVar39[4] = 0xffffffff00000000;
          puVar39[5] = 0;
          puVar39[8] = 0;
          puVar39[9] = 0x109d138c8;
          puVar39[10] = &PTR_DAT_110b3e838;
          puVar39[0xb] = FUN_10a1b2664;
          uStack_3b0 = FUN_10a326ad0;
          ppuStack_3a8 = &PTR_DAT_110bc4520;
          FUN_10a1b1c04();
          (*(code *)*ppuStack_3a8)(&ppuStack_3a8);
          iVar36 = *(int *)(lVar40 + 0x14);
          if (0 < iVar36) {
            iVar31 = 0;
            lVar33 = puVar39[5];
            lVar34 = *(long *)(lVar40 + 0x28);
            iVar6 = *(int *)(puVar39 + 3);
            iVar7 = *(int *)(lVar40 + 0x18);
            iVar29 = *(int *)(lVar40 + 0x10);
            do {
              if (0 < iVar29) {
                uVar38 = 0;
                iVar24 = 0;
                do {
                  fVar41 = (float)NEON_ucvtf((uint)*(byte *)(lVar34 + (uVar38 | 3)));
                  fVar41 = 1.0 / fVar41;
                  fVar43 = (float)NEON_ucvtf((uint)*(byte *)(lVar34 + uVar38));
                  fVar43 = fVar41 * fVar43;
                  bVar42 = *(byte *)(lVar34 + (uVar38 | 2));
                  uVar27 = (uint)fVar43 >> 0x17;
                  uVar28 = (uint)fVar43 & 0x7fffff;
                  uVar10 = uVar27 - 0x70;
                  if (uVar27 < 0x70 || uVar10 == 0) {
                    if ((uint)fVar43 >> 0x18 < 0x33) {
                      uVar25 = 0;
                    }
                    else {
                      uVar28 = (uVar28 | 0x800000) >> (ulong)(0x71 - uVar27 & 0x1f);
                      uVar25 = (ushort)((uVar28 & 0x1000) * 2 + uVar28 >> 0xd);
                    }
                  }
                  else if (uVar10 == 0x8f) {
                    if (uVar28 == 0) {
LAB_10a3191d0:
                      uVar25 = 0x7c00;
                    }
                    else {
                      uVar25 = (ushort)(uVar28 < 0x2000) | (ushort)(uVar28 >> 0xd) | 0x7c00;
                    }
                  }
                  else {
                    uVar1 = uVar28 + 0x2000;
                    uVar12 = uVar10;
                    if (0x7fdfff < uVar28) {
                      uVar1 = 0;
                      uVar12 = uVar27 - 0x6f;
                    }
                    if (((uint)fVar43 & 0x1000) != 0) {
                      uVar28 = uVar1;
                      uVar10 = uVar12;
                    }
                    if (0x1e < uVar10) {
                      fStack_480 = 1e+10;
                      iVar26 = 10;
                      do {
                        fStack_480 = fStack_480 * fStack_480;
                        iVar26 = iVar26 + -1;
                      } while (iVar26 != 0);
                      goto LAB_10a3191d0;
                    }
                    uVar25 = (ushort)(uVar28 >> 0xd) | (ushort)(uVar10 << 10);
                  }
                  fVar43 = fVar41 * (float)*(byte *)(lVar34 + (uVar38 | 1));
                  *(ushort *)(lVar33 + uVar38 * 2) = uVar25;
                  uVar27 = (uint)fVar43 >> 0x17;
                  uVar28 = (uint)fVar43 & 0x7fffff;
                  uVar10 = uVar27 - 0x70;
                  if (uVar27 < 0x70 || uVar10 == 0) {
                    if ((uint)fVar43 >> 0x18 < 0x33) {
                      uVar25 = 0;
                    }
                    else {
                      uVar28 = (uVar28 | 0x800000) >> (ulong)(0x71 - uVar27 & 0x1f);
                      uVar25 = (ushort)((uVar28 & 0x1000) * 2 + uVar28 >> 0xd);
                    }
                  }
                  else if (uVar10 == 0x8f) {
                    if (uVar28 == 0) {
LAB_10a3192a0:
                      uVar25 = 0x7c00;
                    }
                    else {
                      uVar25 = (ushort)(uVar28 < 0x2000) | (ushort)(uVar28 >> 0xd) | 0x7c00;
                    }
                  }
                  else {
                    uVar1 = uVar28 + 0x2000;
                    uVar12 = uVar10;
                    if (0x7fdfff < uVar28) {
                      uVar1 = 0;
                      uVar12 = uVar27 - 0x6f;
                    }
                    if (((uint)fVar43 & 0x1000) != 0) {
                      uVar28 = uVar1;
                      uVar10 = uVar12;
                    }
                    if (0x1e < uVar10) {
                      fStack_480 = 1e+10;
                      iVar26 = 10;
                      do {
                        fStack_480 = fStack_480 * fStack_480;
                        iVar26 = iVar26 + -1;
                      } while (iVar26 != 0);
                      goto LAB_10a3192a0;
                    }
                    uVar25 = (ushort)(uVar28 >> 0xd) | (ushort)(uVar10 << 10);
                  }
                  fVar43 = (float)NEON_ucvtf((uint)bVar42);
                  fVar41 = fVar41 * fVar43;
                  *(ushort *)(lVar33 + (uVar38 | 1) * 2) = uVar25;
                  uVar27 = (uint)fVar41 >> 0x17;
                  uVar28 = (uint)fVar41 & 0x7fffff;
                  uVar10 = uVar27 - 0x70;
                  if (uVar27 < 0x70 || uVar10 == 0) {
                    uVar28 = (uVar28 | 0x800000) >> (ulong)(0x71 - uVar27 & 0x1f);
                    uVar25 = 0;
                    if (0x32 < (uint)fVar41 >> 0x18) {
                      uVar25 = (ushort)((uVar28 & 0x1000) * 2 + uVar28 >> 0xd);
                    }
                  }
                  else if (uVar10 == 0x8f) {
                    uVar25 = 0x7c00;
                    if (uVar28 != 0) {
                      uVar25 = (ushort)(uVar28 < 0x2000) | (ushort)(uVar28 >> 0xd) | 0x7c00;
                    }
                  }
                  else {
                    uVar1 = uVar28 + 0x2000;
                    uVar12 = uVar10;
                    if (0x7fdfff < uVar28) {
                      uVar1 = 0;
                      uVar12 = uVar27 - 0x6f;
                    }
                    if (((uint)fVar41 & 0x1000) != 0) {
                      uVar28 = uVar1;
                      uVar10 = uVar12;
                    }
                    if (uVar10 < 0x1f) {
                      uVar25 = (ushort)(uVar28 >> 0xd) | (ushort)(uVar10 << 10);
                    }
                    else {
                      fStack_480 = 1e+10;
                      iVar26 = 10;
                      do {
                        fStack_480 = fStack_480 * fStack_480;
                        iVar26 = iVar26 + -1;
                      } while (iVar26 != 0);
                      uVar25 = 0x7c00;
                    }
                  }
                  *(ushort *)(lVar33 + (uVar38 | 2) * 2) = uVar25;
                  *(undefined2 *)(lVar33 + (uVar38 | 3) * 2) = 0x3c00;
                  iVar24 = iVar24 + 1;
                  uVar38 = uVar38 + 4;
                } while (iVar24 != iVar29);
              }
              lVar34 = lVar34 + iVar7;
              lVar33 = lVar33 + iVar6;
              iVar31 = iVar31 + 1;
            } while (iVar31 != iVar36);
          }
          FUN_10a1b1ba8(piVar21 + 6,puVar39);
        }
        else {
          if (*(int *)(lVar40 + 0x24) != 3) goto LAB_10a319588;
          pppuStack_670 = appuStack_5c8;
          pcStack_5d0 = FUN_10a326ad0;
          appuStack_5c8[0] = &PTR_DAT_110bc4520;
          lVar34 = *(long *)(lVar40 + 0x28);
          iVar31 = *(int *)(lVar40 + 0x10);
          puVar39 = (undefined8 *)0x90;
          __Znwm();
          puVar39[2] = 0;
          puVar39[3] = 0;
          *(undefined1 *)(puVar39 + 1) = 0;
          *puVar39 = &PTR_FUN_110bab9a0;
          *(undefined1 *)(puVar39 + 0x11) = 0;
          puVar39[6] = 0;
          puVar39[7] = 0;
          puVar39[4] = 0xffffffff00000000;
          puVar39[5] = 0;
          puVar39[8] = 0;
          puVar39[9] = 0x109d138c8;
          puVar39[10] = &PTR_DAT_110b3e838;
          puVar39[0xb] = FUN_10a1b2664;
          uStack_3b0 = FUN_10a326ad0;
          ppuStack_3a8 = &PTR_DAT_110bc4520;
          FUN_10a1b1c04();
          (*(code *)*ppuStack_3a8)(&ppuStack_3a8);
          iVar36 = *(int *)(lVar40 + 0x14);
          if (0 < iVar36) {
            iVar29 = 0;
            lVar33 = puVar39[5];
            uVar38 = (ulong)*(uint *)(lVar40 + 0x10);
            pbVar35 = (byte *)(lVar34 + 2);
            do {
              if (0 < (int)uVar38) {
                lVar34 = 0;
                pbVar37 = pbVar35;
                do {
                  fVar43 = *(float *)(&UNK_10e4ab450 + (ulong)pbVar37[-2] * 4);
                  fVar46 = *(float *)(&UNK_10e4ab450 + (ulong)pbVar37[-1] * 4);
                  fVar47 = *(float *)(&UNK_10e4ab450 + (ulong)*pbVar37 * 4);
                  fVar41 = fVar47;
                  if (fVar47 <= fVar46) {
                    fVar41 = fVar46;
                  }
                  if (fVar41 <= fVar43) {
                    fVar41 = fVar43;
                  }
                  if (fVar41 <= 1.0) {
                    fVar41 = 1.0;
                  }
                  fVar41 = 255.0 / fVar41;
                  auVar44._0_4_ = fVar43 * fVar41 + 0.5;
                  auVar44._4_4_ = fVar46 * fVar41 + 0.5;
                  auVar44._8_4_ = fVar47 * fVar41 + 0.5;
                  auVar44._12_4_ = fVar41 + 0.5;
                  auVar45._8_4_ = 0x437f0000;
                  auVar45._0_8_ = 0x437f0000437f0000;
                  auVar45._12_4_ = 0x437f0000;
                  auVar45 = NEON_fminnm(auVar44,auVar45,4);
                  *(uint *)(lVar33 + lVar34 * 4) =
                       CONCAT13((char)(int)auVar45._12_4_,
                                CONCAT12((char)(int)auVar45._8_4_,
                                         CONCAT11((char)(int)auVar45._4_4_,(char)(int)auVar45._0_4_)
                                        ));
                  lVar34 = lVar34 + 1;
                  uVar38 = (ulong)*(int *)(lVar40 + 0x10);
                  pbVar37 = pbVar37 + 3;
                } while (lVar34 < (long)uVar38);
                iVar36 = *(int *)(lVar40 + 0x14);
              }
              lVar33 = lVar33 + (long)iVar31 * 4;
              iVar29 = iVar29 + 1;
              pbVar35 = pbVar35 + iVar31 * 3;
            } while (iVar29 < iVar36);
          }
          FUN_10a1b1ba8(piVar21 + 6,puVar39);
        }
        (*(code *)**pppuStack_670)();
      }
LAB_10a319588:
      if (*(char *)((long)piVar21 + 0x51) == '\x01') {
        bVar9 = true;
LAB_10a319598:
        iVar36 = iVar4;
        iVar31 = iVar18;
        if (!bVar9) {
          iVar36 = iVar5;
          iVar31 = iVar19;
        }
        if (iVar31 == iVar36) goto code_r0x00010a3195b0;
        if (iVar36 <= iVar31) {
          if ((char)piVar21[10] == '\x01') {
            lVar40 = *(long *)(piVar21 + 2);
            if (*(char *)(lVar40 + 0x87) < '\0') {
              func_0x000107c3192c(&fStack_480,*(undefined8 *)(lVar40 + 0x70),
                                  *(undefined8 *)(lVar40 + 0x78));
            }
            else {
              iStack_478 = (int)*(undefined8 *)(lVar40 + 0x78);
              iStack_474 = (int)((ulong)*(undefined8 *)(lVar40 + 0x78) >> 0x20);
              fStack_480 = (float)*(undefined8 *)(lVar40 + 0x70);
              iStack_47c = (int)((ulong)*(undefined8 *)(lVar40 + 0x70) >> 0x20);
              uStack_470 = (undefined4)*(undefined8 *)(lVar40 + 0x80);
              uStack_46c = (undefined4)((ulong)*(undefined8 *)(lVar40 + 0x80) >> 0x20);
            }
            FUN_109feb280(&uStack_3b0,&UNK_10f64e502,&fStack_480);
            FUN_10a0029c0(&uStack_3b0);
            goto LAB_10a319b3c;
          }
          lVar40 = 0;
          if (*(long *)(piVar21 + 6) != 0) {
            lVar40 = *(long *)(piVar21 + 6) + 0x10;
          }
          FUN_10a0f3910(&uStack_3b0,lVar40,0);
          fStack_480 = 127.5;
          iStack_474 = 0;
          uStack_470 = 0;
          iStack_47c = 0;
          iStack_478 = 0;
          uVar38 = (ulong)&fStack_480 | 8;
          uStack_464 = 0;
          uStack_460._0_4_ = 0;
          uStack_46c = 0;
          uStack_468 = 0;
          uStack_458._4_4_ = 0;
          uStack_460._4_4_ = 0;
          uStack_458._0_4_ = 0;
          uStack_460 = 0;
          lStack_448 = 0;
          uStack_450 = 0;
          uStack_44c = 0;
          uStack_428 = 0;
          lStack_430 = 0;
          iVar18 = (int)*(long *)(piVar21 + 0xe);
          iVar19 = piVar21[0xf];
          uStack_440 = uVar38;
          plStack_438 = &lStack_430;
          if (param_3 != 0) {
            uStack_550 = (long *)CONCAT44(2,(uint)uStack_3b0 & 0xfff | 0x42ff0000);
            puStack_510 = &uStack_548;
            uStack_548 = (undefined8 *)CONCAT44(iVar18,iVar19);
            uStack_528 = 0;
            uStack_530 = 0;
            uStack_518 = 0;
            uStack_520 = 0;
            puStack_508 = &uStack_500;
            uStack_500 = 0;
            uStack_4f8 = 0;
            lStack_538 = param_2;
            if ((param_2 == 0) && ((long)iVar19 * (long)iVar18 != 0)) {
              puVar23 = (undefined4 *)0x24;
              lStack_540 = param_2;
              func_0x000107c2ae8c();
              *puVar23 = 1;
              puStack_2e0 = puVar23 + 1;
              pfStack_2d8 = (float *)0x1c;
              *(undefined1 *)(puVar23 + 8) = 0;
              *(undefined8 *)(puVar23 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar23 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar23 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar23 + 4) = 0x61746164207c7c20;
              func_0x000109ac3188(0xffffff29,&puStack_2e0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
              goto LAB_10a319b3c;
            }
            uVar28 = (((uint)uStack_3b0 & 0xfff) >> 3) + 1 <<
                     (ulong)(0xfa50U >> (ulong)(((uint)uStack_3b0 & 7) << 1) & 3);
            uStack_428 = (ulong)uVar28;
            lStack_430 = (long)(int)uVar28 * (long)iVar18;
            fStack_480 = (float)((uint)uStack_3b0 & 0xfff | 0x42ff4000);
            iStack_47c = 2;
            uStack_470 = (undefined4)param_2;
            uStack_46c = (undefined4)((ulong)param_2 >> 0x20);
            uStack_460 = param_2 + lStack_430 * iVar19;
            iStack_478 = iVar19;
            iStack_474 = iVar18;
            uStack_468 = uStack_470;
            uStack_464 = uStack_46c;
          }
          lStack_448 = 0;
          uStack_44c = 0;
          uStack_450 = 0;
          uStack_550 = (long *)CONCAT44(uStack_550._4_4_,0x1010000);
          uStack_548 = &uStack_3b0;
          lStack_540 = 0;
          puStack_2e0 = (undefined4 *)CONCAT44(puStack_2e0._4_4_,0x2010000);
          uStack_2d0 = 0;
          alStack_5f0[0] = *(long *)(piVar21 + 0xe);
          uStack_470 = uStack_468;
          uStack_46c = uStack_464;
          pfStack_2d8 = &fStack_480;
          uStack_458 = uStack_460;
          func_0x000109b0f718(0,0,&uStack_550,&puStack_2e0,alStack_5f0,1);
          puVar39 = (undefined8 *)((ulong)&fStack_480 | 4);
          uStack_658 = CONCAT44(iStack_474,iStack_478);
          uStack_660 = CONCAT44(iStack_47c,fStack_480);
          uStack_648 = CONCAT44(uStack_464,uStack_468);
          uStack_650 = CONCAT44(uStack_46c,uStack_470);
          uStack_620 = (ulong)&uStack_660 | 8;
          lStack_638 = uStack_458;
          lStack_640 = uStack_460;
          uStack_630 = CONCAT44(uStack_44c,uStack_450);
          lStack_628 = lStack_448;
          lStack_610 = 0;
          lStack_608 = 0;
          if (iStack_47c < 3) {
            lStack_610 = *plStack_438;
            lStack_608 = plStack_438[1];
            plStack_618 = &lStack_610;
          }
          else {
            uStack_620 = uStack_440;
            plStack_618 = plStack_438;
            uStack_440 = uVar38;
            plStack_438 = &lStack_430;
          }
          fStack_480 = 127.5;
          puVar39[1] = 0;
          *puVar39 = 0;
          puVar39[3] = 0;
          puVar39[2] = 0;
          puVar39[5] = 0;
          puVar39[4] = 0;
          *(undefined8 *)((long)puVar39 + 0x34) = 0;
          *(undefined8 *)((long)puVar39 + 0x2c) = 0;
          FUN_10a0f3c50(&uStack_550,&uStack_660,0,0xffffffff);
          if (lStack_628 != 0) {
            piVar3 = (int *)(lStack_628 + 0x14);
            do {
              iVar18 = *piVar3;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar9) {
                *piVar3 = iVar18 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(&uStack_660);
            }
          }
          lStack_628 = 0;
          uStack_648 = 0;
          uStack_650 = 0;
          lStack_638 = 0;
          lStack_640 = 0;
          if (0 < uStack_660._4_4_) {
            lVar40 = 0;
            do {
              *(undefined4 *)(uStack_620 + lVar40 * 4) = 0;
              lVar40 = lVar40 + 1;
            } while (lVar40 < uStack_660._4_4_);
          }
          if (plStack_618 != &lStack_610 && plStack_618 != (long *)0x0) {
            _free(plStack_618[-1]);
          }
          uVar14 = uStack_550;
          uStack_550 = (long *)0x0;
          FUN_10a1b1ba8(piVar21 + 6,uVar14);
          plVar15 = uStack_550;
          uStack_550 = (long *)0x0;
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 8))();
          }
          if (lStack_448 != 0) {
            piVar3 = (int *)(lStack_448 + 0x14);
            do {
              iVar18 = *piVar3;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar9) {
                *piVar3 = iVar18 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(&fStack_480);
            }
          }
          lStack_448 = 0;
          uStack_468 = 0;
          uStack_464 = 0;
          uStack_470 = 0;
          uStack_46c = 0;
          uStack_458._0_4_ = 0;
          uStack_458._4_4_ = 0;
          uStack_460._0_4_ = 0;
          uStack_460._4_4_ = 0;
          if (0 < iStack_47c) {
            lVar40 = 0;
            do {
              *(undefined4 *)(uStack_440 + lVar40 * 4) = 0;
              lVar40 = lVar40 + 1;
            } while (lVar40 < iStack_47c);
          }
          if (plStack_438 != &lStack_430 && plStack_438 != (long *)0x0) {
            _free(plStack_438[-1]);
          }
          if (lStack_378 != 0) {
            piVar3 = (int *)(lStack_378 + 0x14);
            do {
              iVar18 = *piVar3;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar9) {
                *piVar3 = iVar18 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(&uStack_3b0);
            }
          }
          lStack_378 = 0;
          uStack_398 = 0;
          uStack_3a0 = 0;
          uStack_388 = 0;
          uStack_390 = 0;
          if (0 < uStack_3b0._4_4_) {
            lVar40 = 0;
            do {
              *(undefined4 *)(lStack_370 + lVar40 * 4) = 0;
              lVar40 = lVar40 + 1;
            } while (lVar40 < uStack_3b0._4_4_);
          }
          if (puStack_368 != auStack_360 && puStack_368 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_368 + -8));
          }
        }
      }
LAB_10a319934:
      if ((param_3 != 0) && ((char)piVar21[10] != '\x01')) {
        if ((char)piVar21[10] == '\0') {
          lVar40 = *(long *)(piVar21 + 6);
          if (lVar40 != 0) {
            if (*(char *)(*(long *)(lVar40 + 0x50) + 8) == '\x01') {
              (**(code **)(lVar40 + 0x48))(*(undefined8 *)(lVar40 + 0x28));
            }
            *(undefined8 *)(lVar40 + 0x28) = 0;
          }
        }
        else {
          lVar40 = *(long *)(piVar21 + 6);
          if (lVar40 != 0) {
            if ((*(long *)(lVar40 + 0x58) != 0) &&
               (*(char *)(*(long *)(lVar40 + 0x20) + 8) == '\x01')) {
              (**(code **)(lVar40 + 0x18))();
            }
            *(undefined8 *)(lVar40 + 0x58) = 0;
          }
        }
      }
      uVar20 = 1;
      goto LAB_10a3199ac;
    }
    puVar39 = *(undefined8 **)(piVar21 + 6);
    FUN_10a314fa4(&uStack_3b0,puVar39);
    pcVar17 = uStack_3b0;
    if (uStack_3b0 != (code *)0x0) {
      _memcpy(&puStack_2e0,&ppuStack_3a8,(long)uStack_3b0 << 5);
    }
    uStack_278 = uStack_340;
    pcStack_280 = pcStack_348;
    uStack_270 = uStack_338;
    lStack_268 = lStack_330;
    if (lStack_330 != 0) {
      _memcpy(auStack_260,auStack_328,lStack_330 * 0x18);
    }
    if (pcVar17 != (code *)0x1) {
      FUN_10a00946c(&UNK_10f64e459);
      goto LAB_10a319b3c;
    }
    uStack_3b0 = pcStack_280;
    ppuStack_3a8 = (undefined **)CONCAT44(ppuStack_3a8._4_4_,(undefined4)uStack_278);
    puVar22 = &uStack_3b0;
    func_0x0001096f1ebc();
    if ((int)puVar22 == 0) {
      uVar38 = -uStack_2d0;
      if (-1 < (long)uStack_2d0) {
        uVar38 = uStack_2d0;
      }
    }
    else {
      uVar38 = (uStack_278 >> 0x20) * ((ulong)puVar22 & 0xffffffff);
    }
    uVar32 = (ulong)*(uint *)(puVar39 + 2);
    if (*(uint *)(puVar39 + 2) != 0) {
      uVar11 = 0;
      if (uVar32 != 0) {
        uVar11 = param_3 / uVar32;
      }
      if (param_3 == uVar11 * uVar32) {
        if (uVar11 < uVar38) {
          uVar38 = *(ulong *)(piVar21 + 2);
          if (*(char *)(uVar38 + 0x87) < '\0') {
            func_0x000107c3192c(&fStack_480,*(undefined8 *)(uVar38 + 0x70),
                                *(undefined8 *)(uVar38 + 0x78));
          }
          else {
            iStack_478 = (int)*(undefined8 *)(uVar38 + 0x78);
            iStack_474 = (int)((ulong)*(undefined8 *)(uVar38 + 0x78) >> 0x20);
            fStack_480 = (float)*(undefined8 *)(uVar38 + 0x70);
            iStack_47c = (int)((ulong)*(undefined8 *)(uVar38 + 0x70) >> 0x20);
            uStack_470 = (undefined4)*(undefined8 *)(uVar38 + 0x80);
            uStack_46c = (undefined4)((ulong)*(undefined8 *)(uVar38 + 0x80) >> 0x20);
          }
          FUN_109feb280(&uStack_3b0,&UNK_10f64e4cd,&fStack_480);
          FUN_10a0029c0(&uStack_3b0);
          goto LAB_10a319b3c;
        }
        FUN_10a314fa4(&fStack_480,puVar39);
        uStack_600 = *puVar39;
        uStack_5f8 = *(undefined4 *)(puVar39 + 1);
        uStack_5d8 = SUB84(&uStack_600,0);
        func_0x0001096f1ebc();
        uStack_550 = (long *)*puVar39;
        uStack_548 = (undefined8 *)puVar39[1];
        lStack_540 = CONCAT44(lStack_540._4_4_,*(undefined4 *)(puVar39 + 2));
        lStack_538 = 0;
        alStack_5f0[0] = param_2;
        uStack_5e0 = uVar11;
        func_0x0001096f22ac(&uStack_3b0,alStack_5f0,1,&uStack_550);
        fStack_480 = SUB84(uStack_3b0,0);
        iStack_47c = (int)((ulong)uStack_3b0 >> 0x20);
        if (uStack_3b0 != (code *)0x0) {
          _memcpy(&iStack_478,&ppuStack_3a8,(long)uStack_3b0 << 5);
        }
        uStack_410 = (undefined4)uStack_340;
        uStack_40c = (undefined4)(uStack_340 >> 0x20);
        pcStack_418 = pcStack_348;
        uStack_408 = uStack_338;
        lStack_400 = lStack_330;
        if (lStack_330 != 0) {
          _memcpy(auStack_3f8,auStack_328,lStack_330 * 0x18);
        }
        FUN_10a314fa4(&uStack_550,puVar39);
        func_0x0001096f1c24(&fStack_480,&uStack_550);
        goto LAB_10a318fbc;
      }
    }
  }
  lVar40 = *(long *)(piVar21 + 2);
  if (*(char *)(lVar40 + 0x87) < '\0') {
    func_0x000107c3192c(&fStack_480,*(undefined8 *)(lVar40 + 0x70),*(undefined8 *)(lVar40 + 0x78));
  }
  else {
    iStack_478 = (int)*(undefined8 *)(lVar40 + 0x78);
    iStack_474 = (int)((ulong)*(undefined8 *)(lVar40 + 0x78) >> 0x20);
    fStack_480 = (float)*(undefined8 *)(lVar40 + 0x70);
    iStack_47c = (int)((ulong)*(undefined8 *)(lVar40 + 0x70) >> 0x20);
    uStack_470 = (undefined4)*(undefined8 *)(lVar40 + 0x80);
    uStack_46c = (undefined4)((ulong)*(undefined8 *)(lVar40 + 0x80) >> 0x20);
  }
  FUN_109feb280(&uStack_3b0,&UNK_10f64e495,&fStack_480);
  FUN_10a0029c0(&uStack_3b0);
LAB_10a319b3c:
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x10a319b40);
  (*pcVar17)();
code_r0x00010a3195b0:
  bVar16 = !bVar9;
  bVar9 = false;
  if (bVar16) goto LAB_10a319934;
  goto LAB_10a319598;
}



/* Entry: 10a318c10; end: 10a319cb7;  */

void FUN_10a318c10(int *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  bool bVar14;
  long *plVar15;
  bool bVar16;
  code *pcVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined4 *puVar23;
  int iVar24;
  ushort uVar25;
  int iVar26;
  int iVar27;
  undefined **ppuVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  byte *pbVar33;
  int iVar34;
  byte *pbVar35;
  undefined8 *puVar36;
  long lVar37;
  float fVar38;
  byte bVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  undefined ***pppuStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_520;
  long lStack_518;
  undefined8 uStack_510;
  long lStack_508;
  ulong uStack_500;
  long *plStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4e0;
  undefined4 uStack_4d8;
  long alStack_4d0 [2];
  ulong uStack_4c0;
  undefined4 uStack_4b8;
  code *pcStack_4b0;
  undefined **appuStack_4a8 [7];
  code *pcStack_470;
  undefined **appuStack_468 [7];
  undefined8 uStack_430;
  undefined8 uStack_428;
  long lStack_420;
  long lStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  float fStack_360;
  int iStack_35c;
  int iStack_358;
  int iStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long lStack_328;
  ulong uStack_320;
  long *plStack_318;
  long lStack_310;
  ulong uStack_308;
  code *pcStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  long lStack_2e0;
  undefined1 auStack_2d8 [72];
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_258;
  long lStack_250;
  undefined1 *puStack_248;
  undefined1 auStack_240 [24];
  code *pcStack_228;
  ulong uStack_220;
  undefined4 uStack_218;
  long lStack_210;
  undefined1 auStack_208 [72];
  undefined4 *puStack_1c0;
  float *pfStack_1b8;
  ulong uStack_1b0;
  code *pcStack_160;
  ulong uStack_158;
  undefined4 uStack_150;
  long lStack_148;
  undefined1 auStack_140 [72];
  code *pcStack_f8;
  undefined **ppuStack_f0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar4 = param_1[0xe];
  iVar5 = param_1[0xf];
  iVar18 = (int)param_1 + 0x18;
  func_0x00010a1a51ec();
  iVar34 = param_1[0x14];
  iVar19 = (int)param_1 + 0x18;
  func_0x00010a1a527c();
  if ((char)iVar34 == '\x01') {
    iVar19 = (iVar19 << 1) / 3;
  }
  if ((*(char *)((long)param_1 + 0x52) == '\x01') && ((char)param_1[10] == '\0')) {
    bVar10 = (*param_1 != 3 || *(int *)(*(long *)(param_1 + 6) + 0x24) != 1) &&
             *(int *)(*(long *)(param_1 + 6) + 0x24) != 3;
  }
  else {
    bVar10 = true;
  }
  if (*(char *)((long)param_1 + 0x51) == '\x01') {
    bVar16 = true;
    do {
      bVar14 = bVar16;
      iVar34 = iVar4;
      iVar29 = iVar18;
      if (!bVar14) {
        iVar34 = iVar5;
        iVar29 = iVar19;
      }
      if (iVar29 != iVar34) {
        if (iVar34 <= iVar29) {
          uVar20 = *(ulong *)(param_1 + 2);
          FUN_10a1b181c(uVar20,param_1 + 6);
          if ((uVar20 & 1) != 0) goto LAB_10a318fbc;
          goto LAB_10a318ea0;
        }
        break;
      }
      bVar16 = false;
    } while (bVar14);
    if (bVar10) goto LAB_10a318cdc;
LAB_10a318d40:
    bVar10 = true;
  }
  else {
    if (!bVar10) goto LAB_10a318d40;
LAB_10a318cdc:
    if ((param_3 != 0) && ((char)param_1[10] != '\x01')) {
      if ((char)param_1[10] == '\0') {
        lVar37 = *(long *)(param_1 + 6);
        if (lVar37 != 0) {
          lVar32 = -0xa8;
          pcStack_b8 = FUN_10a326ad0;
          ppuStack_b0 = &PTR_DAT_110bc4520;
          FUN_10a1b1c04(lVar37,*(undefined8 *)(lVar37 + 0x10),*(undefined4 *)(lVar37 + 0x24),param_2
                        ,*(undefined8 *)(lVar37 + 0x18),&pcStack_b8,0,0,0);
          ppuVar28 = ppuStack_b0;
LAB_10a318dc4:
          (*(code *)*ppuVar28)(&stack0xfffffffffffffff8 + lVar32);
        }
      }
      else {
        lVar37 = *(long *)(param_1 + 6);
        if (lVar37 != 0) {
          uStack_290 = (code *)CONCAT44(uStack_290._4_4_,*(undefined4 *)(lVar37 + 0x10));
          lVar32 = -0xe8;
          pcStack_f8 = FUN_10a326ad0;
          ppuStack_f0 = &PTR_DAT_110bc4520;
          FUN_10a1b76e0(lVar37,*(undefined4 *)(lVar37 + 8),*(undefined4 *)(lVar37 + 0xc),&uStack_290
                        ,*(undefined8 *)(lVar37 + 0x60),param_2,&pcStack_f8);
          ppuVar28 = ppuStack_f0;
          goto LAB_10a318dc4;
        }
      }
    }
    bVar10 = false;
  }
  uVar20 = *(ulong *)(param_1 + 2);
  FUN_10a1b181c(uVar20,param_1 + 6);
  if ((uVar20 & 1) == 0) {
LAB_10a318ea0:
    uVar22 = 0;
LAB_10a3199ac:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail(uVar22);
  }
  else {
    if (param_3 == 0) {
      bVar10 = true;
    }
    if ((bVar10) || ((char)param_1[10] != '\x01')) {
LAB_10a318fbc:
      if ((*(char *)((long)param_1 + 0x52) == '\x01') && ((char)param_1[10] == '\0')) {
        lVar37 = *(long *)(param_1 + 6);
        if ((*param_1 == 3) && (*(int *)(lVar37 + 0x24) == 1)) {
          pppuStack_550 = appuStack_468;
          pcStack_470 = FUN_10a326ad0;
          appuStack_468[0] = &PTR_DAT_110bc4520;
          puVar36 = (undefined8 *)0x90;
          __Znwm();
          puVar36[2] = 0;
          puVar36[3] = 0;
          *(undefined1 *)(puVar36 + 1) = 0;
          *puVar36 = &PTR_FUN_110bab9a0;
          *(undefined1 *)(puVar36 + 0x11) = 0;
          puVar36[6] = 0;
          puVar36[7] = 0;
          puVar36[4] = 0xffffffff00000000;
          puVar36[5] = 0;
          puVar36[8] = 0;
          puVar36[9] = 0x109d138c8;
          puVar36[10] = &PTR_DAT_110b3e838;
          puVar36[0xb] = FUN_10a1b2664;
          uStack_290 = FUN_10a326ad0;
          ppuStack_288 = &PTR_DAT_110bc4520;
          FUN_10a1b1c04();
          (*(code *)*ppuStack_288)(&ppuStack_288);
          iVar34 = *(int *)(lVar37 + 0x14);
          if (0 < iVar34) {
            iVar29 = 0;
            lVar31 = puVar36[5];
            lVar32 = *(long *)(lVar37 + 0x28);
            iVar6 = *(int *)(puVar36 + 3);
            iVar7 = *(int *)(lVar37 + 0x18);
            iVar27 = *(int *)(lVar37 + 0x10);
            do {
              if (0 < iVar27) {
                uVar20 = 0;
                iVar24 = 0;
                do {
                  fVar38 = (float)NEON_ucvtf((uint)*(byte *)(lVar32 + (uVar20 | 3)));
                  fVar38 = 1.0 / fVar38;
                  fVar40 = (float)NEON_ucvtf((uint)*(byte *)(lVar32 + uVar20));
                  fVar40 = fVar38 * fVar40;
                  bVar39 = *(byte *)(lVar32 + (uVar20 | 2));
                  uVar8 = (uint)fVar40 >> 0x17;
                  uVar3 = (uint)fVar40 & 0x7fffff;
                  uVar11 = uVar8 - 0x70;
                  if (uVar8 < 0x70 || uVar11 == 0) {
                    if ((uint)fVar40 >> 0x18 < 0x33) {
                      uVar25 = 0;
                    }
                    else {
                      uVar3 = (uVar3 | 0x800000) >> (ulong)(0x71 - uVar8 & 0x1f);
                      uVar25 = (ushort)((uVar3 & 0x1000) * 2 + uVar3 >> 0xd);
                    }
                  }
                  else if (uVar11 == 0x8f) {
                    if (uVar3 == 0) {
LAB_10a3191d0:
                      uVar25 = 0x7c00;
                    }
                    else {
                      uVar25 = (ushort)(uVar3 < 0x2000) | (ushort)(uVar3 >> 0xd) | 0x7c00;
                    }
                  }
                  else {
                    uVar1 = uVar3 + 0x2000;
                    uVar13 = uVar11;
                    if (0x7fdfff < uVar3) {
                      uVar1 = 0;
                      uVar13 = uVar8 - 0x6f;
                    }
                    if (((uint)fVar40 & 0x1000) != 0) {
                      uVar3 = uVar1;
                      uVar11 = uVar13;
                    }
                    if (0x1e < uVar11) {
                      fStack_360 = 1e+10;
                      iVar26 = 10;
                      do {
                        fStack_360 = fStack_360 * fStack_360;
                        iVar26 = iVar26 + -1;
                      } while (iVar26 != 0);
                      goto LAB_10a3191d0;
                    }
                    uVar25 = (ushort)(uVar3 >> 0xd) | (ushort)(uVar11 << 10);
                  }
                  fVar40 = fVar38 * (float)*(byte *)(lVar32 + (uVar20 | 1));
                  *(ushort *)(lVar31 + uVar20 * 2) = uVar25;
                  uVar8 = (uint)fVar40 >> 0x17;
                  uVar3 = (uint)fVar40 & 0x7fffff;
                  uVar11 = uVar8 - 0x70;
                  if (uVar8 < 0x70 || uVar11 == 0) {
                    if ((uint)fVar40 >> 0x18 < 0x33) {
                      uVar25 = 0;
                    }
                    else {
                      uVar3 = (uVar3 | 0x800000) >> (ulong)(0x71 - uVar8 & 0x1f);
                      uVar25 = (ushort)((uVar3 & 0x1000) * 2 + uVar3 >> 0xd);
                    }
                  }
                  else if (uVar11 == 0x8f) {
                    if (uVar3 == 0) {
LAB_10a3192a0:
                      uVar25 = 0x7c00;
                    }
                    else {
                      uVar25 = (ushort)(uVar3 < 0x2000) | (ushort)(uVar3 >> 0xd) | 0x7c00;
                    }
                  }
                  else {
                    uVar1 = uVar3 + 0x2000;
                    uVar13 = uVar11;
                    if (0x7fdfff < uVar3) {
                      uVar1 = 0;
                      uVar13 = uVar8 - 0x6f;
                    }
                    if (((uint)fVar40 & 0x1000) != 0) {
                      uVar3 = uVar1;
                      uVar11 = uVar13;
                    }
                    if (0x1e < uVar11) {
                      fStack_360 = 1e+10;
                      iVar26 = 10;
                      do {
                        fStack_360 = fStack_360 * fStack_360;
                        iVar26 = iVar26 + -1;
                      } while (iVar26 != 0);
                      goto LAB_10a3192a0;
                    }
                    uVar25 = (ushort)(uVar3 >> 0xd) | (ushort)(uVar11 << 10);
                  }
                  fVar40 = (float)NEON_ucvtf((uint)bVar39);
                  fVar38 = fVar38 * fVar40;
                  *(ushort *)(lVar31 + (uVar20 | 1) * 2) = uVar25;
                  uVar8 = (uint)fVar38 >> 0x17;
                  uVar3 = (uint)fVar38 & 0x7fffff;
                  uVar11 = uVar8 - 0x70;
                  if (uVar8 < 0x70 || uVar11 == 0) {
                    uVar3 = (uVar3 | 0x800000) >> (ulong)(0x71 - uVar8 & 0x1f);
                    uVar25 = 0;
                    if (0x32 < (uint)fVar38 >> 0x18) {
                      uVar25 = (ushort)((uVar3 & 0x1000) * 2 + uVar3 >> 0xd);
                    }
                  }
                  else if (uVar11 == 0x8f) {
                    uVar25 = 0x7c00;
                    if (uVar3 != 0) {
                      uVar25 = (ushort)(uVar3 < 0x2000) | (ushort)(uVar3 >> 0xd) | 0x7c00;
                    }
                  }
                  else {
                    uVar1 = uVar3 + 0x2000;
                    uVar13 = uVar11;
                    if (0x7fdfff < uVar3) {
                      uVar1 = 0;
                      uVar13 = uVar8 - 0x6f;
                    }
                    if (((uint)fVar38 & 0x1000) != 0) {
                      uVar3 = uVar1;
                      uVar11 = uVar13;
                    }
                    if (uVar11 < 0x1f) {
                      uVar25 = (ushort)(uVar3 >> 0xd) | (ushort)(uVar11 << 10);
                    }
                    else {
                      fStack_360 = 1e+10;
                      iVar26 = 10;
                      do {
                        fStack_360 = fStack_360 * fStack_360;
                        iVar26 = iVar26 + -1;
                      } while (iVar26 != 0);
                      uVar25 = 0x7c00;
                    }
                  }
                  *(ushort *)(lVar31 + (uVar20 | 2) * 2) = uVar25;
                  *(undefined2 *)(lVar31 + (uVar20 | 3) * 2) = 0x3c00;
                  iVar24 = iVar24 + 1;
                  uVar20 = uVar20 + 4;
                } while (iVar24 != iVar27);
              }
              lVar32 = lVar32 + iVar7;
              lVar31 = lVar31 + iVar6;
              iVar29 = iVar29 + 1;
            } while (iVar29 != iVar34);
          }
          FUN_10a1b1ba8(param_1 + 6,puVar36);
        }
        else {
          if (*(int *)(lVar37 + 0x24) != 3) goto LAB_10a319588;
          pppuStack_550 = appuStack_4a8;
          pcStack_4b0 = FUN_10a326ad0;
          appuStack_4a8[0] = &PTR_DAT_110bc4520;
          lVar32 = *(long *)(lVar37 + 0x28);
          iVar29 = *(int *)(lVar37 + 0x10);
          puVar36 = (undefined8 *)0x90;
          __Znwm();
          puVar36[2] = 0;
          puVar36[3] = 0;
          *(undefined1 *)(puVar36 + 1) = 0;
          *puVar36 = &PTR_FUN_110bab9a0;
          *(undefined1 *)(puVar36 + 0x11) = 0;
          puVar36[6] = 0;
          puVar36[7] = 0;
          puVar36[4] = 0xffffffff00000000;
          puVar36[5] = 0;
          puVar36[8] = 0;
          puVar36[9] = 0x109d138c8;
          puVar36[10] = &PTR_DAT_110b3e838;
          puVar36[0xb] = FUN_10a1b2664;
          uStack_290 = FUN_10a326ad0;
          ppuStack_288 = &PTR_DAT_110bc4520;
          FUN_10a1b1c04();
          (*(code *)*ppuStack_288)(&ppuStack_288);
          iVar34 = *(int *)(lVar37 + 0x14);
          if (0 < iVar34) {
            iVar27 = 0;
            lVar31 = puVar36[5];
            uVar20 = (ulong)*(uint *)(lVar37 + 0x10);
            pbVar33 = (byte *)(lVar32 + 2);
            do {
              if (0 < (int)uVar20) {
                lVar32 = 0;
                pbVar35 = pbVar33;
                do {
                  fVar40 = *(float *)(&UNK_10e4ab450 + (ulong)pbVar35[-2] * 4);
                  fVar43 = *(float *)(&UNK_10e4ab450 + (ulong)pbVar35[-1] * 4);
                  fVar44 = *(float *)(&UNK_10e4ab450 + (ulong)*pbVar35 * 4);
                  fVar38 = fVar44;
                  if (fVar44 <= fVar43) {
                    fVar38 = fVar43;
                  }
                  if (fVar38 <= fVar40) {
                    fVar38 = fVar40;
                  }
                  if (fVar38 <= 1.0) {
                    fVar38 = 1.0;
                  }
                  fVar38 = 255.0 / fVar38;
                  auVar41._0_4_ = fVar40 * fVar38 + 0.5;
                  auVar41._4_4_ = fVar43 * fVar38 + 0.5;
                  auVar41._8_4_ = fVar44 * fVar38 + 0.5;
                  auVar41._12_4_ = fVar38 + 0.5;
                  auVar42._8_4_ = 0x437f0000;
                  auVar42._0_8_ = 0x437f0000437f0000;
                  auVar42._12_4_ = 0x437f0000;
                  auVar42 = NEON_fminnm(auVar41,auVar42,4);
                  *(uint *)(lVar31 + lVar32 * 4) =
                       CONCAT13((char)(int)auVar42._12_4_,
                                CONCAT12((char)(int)auVar42._8_4_,
                                         CONCAT11((char)(int)auVar42._4_4_,(char)(int)auVar42._0_4_)
                                        ));
                  lVar32 = lVar32 + 1;
                  uVar20 = (ulong)*(int *)(lVar37 + 0x10);
                  pbVar35 = pbVar35 + 3;
                } while (lVar32 < (long)uVar20);
                iVar34 = *(int *)(lVar37 + 0x14);
              }
              lVar31 = lVar31 + (long)iVar29 * 4;
              iVar27 = iVar27 + 1;
              pbVar33 = pbVar33 + iVar29 * 3;
            } while (iVar27 < iVar34);
          }
          FUN_10a1b1ba8(param_1 + 6,puVar36);
        }
        (*(code *)**pppuStack_550)();
      }
LAB_10a319588:
      if (*(char *)((long)param_1 + 0x51) == '\x01') {
        bVar10 = true;
LAB_10a319598:
        iVar34 = iVar4;
        iVar29 = iVar18;
        if (!bVar10) {
          iVar34 = iVar5;
          iVar29 = iVar19;
        }
        if (iVar29 == iVar34) goto code_r0x00010a3195b0;
        if (iVar34 <= iVar29) {
          if ((char)param_1[10] == '\x01') {
            lVar37 = *(long *)(param_1 + 2);
            if (*(char *)(lVar37 + 0x87) < '\0') {
              func_0x000107c3192c(&fStack_360,*(undefined8 *)(lVar37 + 0x70),
                                  *(undefined8 *)(lVar37 + 0x78));
            }
            else {
              iStack_358 = (int)*(undefined8 *)(lVar37 + 0x78);
              iStack_354 = (int)((ulong)*(undefined8 *)(lVar37 + 0x78) >> 0x20);
              fStack_360 = (float)*(undefined8 *)(lVar37 + 0x70);
              iStack_35c = (int)((ulong)*(undefined8 *)(lVar37 + 0x70) >> 0x20);
              uStack_350 = (undefined4)*(undefined8 *)(lVar37 + 0x80);
              uStack_34c = (undefined4)((ulong)*(undefined8 *)(lVar37 + 0x80) >> 0x20);
            }
            FUN_109feb280(&uStack_290,&UNK_10f64e502,&fStack_360);
            FUN_10a0029c0(&uStack_290);
            goto LAB_10a319b3c;
          }
          lVar37 = 0;
          if (*(long *)(param_1 + 6) != 0) {
            lVar37 = *(long *)(param_1 + 6) + 0x10;
          }
          FUN_10a0f3910(&uStack_290,lVar37,0);
          fStack_360 = 127.5;
          iStack_354 = 0;
          uStack_350 = 0;
          iStack_35c = 0;
          iStack_358 = 0;
          uVar20 = (ulong)&fStack_360 | 8;
          uStack_344 = 0;
          uStack_340._0_4_ = 0;
          uStack_34c = 0;
          uStack_348 = 0;
          uStack_338._4_4_ = 0;
          uStack_340._4_4_ = 0;
          uStack_338._0_4_ = 0;
          uStack_340 = 0;
          lStack_328 = 0;
          uStack_330 = 0;
          uStack_32c = 0;
          uStack_308 = 0;
          lStack_310 = 0;
          iVar18 = (int)*(long *)(param_1 + 0xe);
          iVar19 = param_1[0xf];
          uStack_320 = uVar20;
          plStack_318 = &lStack_310;
          if (param_3 != 0) {
            uStack_430 = (long *)CONCAT44(2,(uint)uStack_290 & 0xfff | 0x42ff0000);
            puStack_3f0 = &uStack_428;
            uStack_428 = (undefined8 *)CONCAT44(iVar18,iVar19);
            uStack_408 = 0;
            uStack_410 = 0;
            uStack_3f8 = 0;
            uStack_400 = 0;
            puStack_3e8 = &uStack_3e0;
            uStack_3e0 = 0;
            uStack_3d8 = 0;
            lStack_418 = param_2;
            if ((param_2 == 0) && ((long)iVar19 * (long)iVar18 != 0)) {
              puVar23 = (undefined4 *)0x24;
              lStack_420 = param_2;
              func_0x000107c2ae8c();
              *puVar23 = 1;
              puStack_1c0 = puVar23 + 1;
              pfStack_1b8 = (float *)0x1c;
              *(undefined1 *)(puVar23 + 8) = 0;
              *(undefined8 *)(puVar23 + 3) = 0x207c7c2030203d3d;
              *(undefined8 *)(puVar23 + 1) = 0x2029286c61746f74;
              *(undefined8 *)(puVar23 + 6) = 0x4c4c554e203d2120;
              *(undefined8 *)(puVar23 + 4) = 0x61746164207c7c20;
              func_0x000109ac3188(0xffffff29,&puStack_1c0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
              goto LAB_10a319b3c;
            }
            uVar3 = (((uint)uStack_290 & 0xfff) >> 3) + 1 <<
                    (ulong)(0xfa50U >> (ulong)(((uint)uStack_290 & 7) << 1) & 3);
            uStack_308 = (ulong)uVar3;
            lStack_310 = (long)(int)uVar3 * (long)iVar18;
            fStack_360 = (float)((uint)uStack_290 & 0xfff | 0x42ff4000);
            iStack_35c = 2;
            uStack_350 = (undefined4)param_2;
            uStack_34c = (undefined4)((ulong)param_2 >> 0x20);
            uStack_340 = param_2 + lStack_310 * iVar19;
            iStack_358 = iVar19;
            iStack_354 = iVar18;
            uStack_348 = uStack_350;
            uStack_344 = uStack_34c;
          }
          lStack_328 = 0;
          uStack_32c = 0;
          uStack_330 = 0;
          uStack_430 = (long *)CONCAT44(uStack_430._4_4_,0x1010000);
          uStack_428 = &uStack_290;
          lStack_420 = 0;
          puStack_1c0 = (undefined4 *)CONCAT44(puStack_1c0._4_4_,0x2010000);
          uStack_1b0 = 0;
          alStack_4d0[0] = *(long *)(param_1 + 0xe);
          uStack_350 = uStack_348;
          uStack_34c = uStack_344;
          pfStack_1b8 = &fStack_360;
          uStack_338 = uStack_340;
          func_0x000109b0f718(0,0,&uStack_430,&puStack_1c0,alStack_4d0,1);
          puVar36 = (undefined8 *)((ulong)&fStack_360 | 4);
          uStack_538 = CONCAT44(iStack_354,iStack_358);
          uStack_540 = CONCAT44(iStack_35c,fStack_360);
          uStack_528 = CONCAT44(uStack_344,uStack_348);
          uStack_530 = CONCAT44(uStack_34c,uStack_350);
          uStack_500 = (ulong)&uStack_540 | 8;
          lStack_518 = uStack_338;
          lStack_520 = uStack_340;
          uStack_510 = CONCAT44(uStack_32c,uStack_330);
          lStack_508 = lStack_328;
          lStack_4f0 = 0;
          lStack_4e8 = 0;
          if (iStack_35c < 3) {
            lStack_4f0 = *plStack_318;
            lStack_4e8 = plStack_318[1];
            plStack_4f8 = &lStack_4f0;
          }
          else {
            uStack_500 = uStack_320;
            plStack_4f8 = plStack_318;
            uStack_320 = uVar20;
            plStack_318 = &lStack_310;
          }
          fStack_360 = 127.5;
          puVar36[1] = 0;
          *puVar36 = 0;
          puVar36[3] = 0;
          puVar36[2] = 0;
          puVar36[5] = 0;
          puVar36[4] = 0;
          *(undefined8 *)((long)puVar36 + 0x34) = 0;
          *(undefined8 *)((long)puVar36 + 0x2c) = 0;
          FUN_10a0f3c50(&uStack_430,&uStack_540,0,0xffffffff);
          if (lStack_508 != 0) {
            piVar2 = (int *)(lStack_508 + 0x14);
            do {
              iVar18 = *piVar2;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar10) {
                *piVar2 = iVar18 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(&uStack_540);
            }
          }
          lStack_508 = 0;
          uStack_528 = 0;
          uStack_530 = 0;
          lStack_518 = 0;
          lStack_520 = 0;
          if (0 < uStack_540._4_4_) {
            lVar37 = 0;
            do {
              *(undefined4 *)(uStack_500 + lVar37 * 4) = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 < uStack_540._4_4_);
          }
          if (plStack_4f8 != &lStack_4f0 && plStack_4f8 != (long *)0x0) {
            _free(plStack_4f8[-1]);
          }
          uVar22 = uStack_430;
          uStack_430 = (long *)0x0;
          FUN_10a1b1ba8(param_1 + 6,uVar22);
          plVar15 = uStack_430;
          uStack_430 = (long *)0x0;
          if (plVar15 != (long *)0x0) {
            (**(code **)(*plVar15 + 8))();
          }
          if (lStack_328 != 0) {
            piVar2 = (int *)(lStack_328 + 0x14);
            do {
              iVar18 = *piVar2;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar10) {
                *piVar2 = iVar18 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(&fStack_360);
            }
          }
          lStack_328 = 0;
          uStack_348 = 0;
          uStack_344 = 0;
          uStack_350 = 0;
          uStack_34c = 0;
          uStack_338._0_4_ = 0;
          uStack_338._4_4_ = 0;
          uStack_340._0_4_ = 0;
          uStack_340._4_4_ = 0;
          if (0 < iStack_35c) {
            lVar37 = 0;
            do {
              *(undefined4 *)(uStack_320 + lVar37 * 4) = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 < iStack_35c);
          }
          if (plStack_318 != &lStack_310 && plStack_318 != (long *)0x0) {
            _free(plStack_318[-1]);
          }
          if (lStack_258 != 0) {
            piVar2 = (int *)(lStack_258 + 0x14);
            do {
              iVar18 = *piVar2;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar10) {
                *piVar2 = iVar18 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar18 + -1 == 0) {
              func_0x000109a848d4(&uStack_290);
            }
          }
          lStack_258 = 0;
          uStack_278 = 0;
          uStack_280 = 0;
          uStack_268 = 0;
          uStack_270 = 0;
          if (0 < uStack_290._4_4_) {
            lVar37 = 0;
            do {
              *(undefined4 *)(lStack_250 + lVar37 * 4) = 0;
              lVar37 = lVar37 + 1;
            } while (lVar37 < uStack_290._4_4_);
          }
          if (puStack_248 != auStack_240 && puStack_248 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_248 + -8));
          }
        }
      }
LAB_10a319934:
      if ((param_3 != 0) && ((char)param_1[10] != '\x01')) {
        if ((char)param_1[10] == '\0') {
          lVar37 = *(long *)(param_1 + 6);
          if (lVar37 != 0) {
            if (*(char *)(*(long *)(lVar37 + 0x50) + 8) == '\x01') {
              (**(code **)(lVar37 + 0x48))(*(undefined8 *)(lVar37 + 0x28));
            }
            *(undefined8 *)(lVar37 + 0x28) = 0;
          }
        }
        else {
          lVar37 = *(long *)(param_1 + 6);
          if (lVar37 != 0) {
            if ((*(long *)(lVar37 + 0x58) != 0) &&
               (*(char *)(*(long *)(lVar37 + 0x20) + 8) == '\x01')) {
              (**(code **)(lVar37 + 0x18))();
            }
            *(undefined8 *)(lVar37 + 0x58) = 0;
          }
        }
      }
      uVar22 = 1;
      goto LAB_10a3199ac;
    }
    puVar36 = *(undefined8 **)(param_1 + 6);
    FUN_10a314fa4(&uStack_290,puVar36);
    pcVar17 = uStack_290;
    if (uStack_290 != (code *)0x0) {
      _memcpy(&puStack_1c0,&ppuStack_288,(long)uStack_290 << 5);
    }
    uStack_158 = uStack_220;
    pcStack_160 = pcStack_228;
    uStack_150 = uStack_218;
    lStack_148 = lStack_210;
    if (lStack_210 != 0) {
      _memcpy(auStack_140,auStack_208,lStack_210 * 0x18);
    }
    if (pcVar17 != (code *)0x1) {
      FUN_10a00946c(&UNK_10f64e459);
      goto LAB_10a319b3c;
    }
    uStack_290 = pcStack_160;
    ppuStack_288 = (undefined **)CONCAT44(ppuStack_288._4_4_,(undefined4)uStack_158);
    puVar21 = &uStack_290;
    func_0x0001096f1ebc();
    if ((int)puVar21 == 0) {
      uVar20 = -uStack_1b0;
      if (-1 < (long)uStack_1b0) {
        uVar20 = uStack_1b0;
      }
    }
    else {
      uVar20 = (uStack_158 >> 0x20) * ((ulong)puVar21 & 0xffffffff);
    }
    uVar30 = (ulong)*(uint *)(puVar36 + 2);
    if (*(uint *)(puVar36 + 2) != 0) {
      uVar12 = 0;
      if (uVar30 != 0) {
        uVar12 = param_3 / uVar30;
      }
      if (param_3 == uVar12 * uVar30) {
        if (uVar12 < uVar20) {
          uVar20 = *(ulong *)(param_1 + 2);
          if (*(char *)(uVar20 + 0x87) < '\0') {
            func_0x000107c3192c(&fStack_360,*(undefined8 *)(uVar20 + 0x70),
                                *(undefined8 *)(uVar20 + 0x78));
          }
          else {
            iStack_358 = (int)*(undefined8 *)(uVar20 + 0x78);
            iStack_354 = (int)((ulong)*(undefined8 *)(uVar20 + 0x78) >> 0x20);
            fStack_360 = (float)*(undefined8 *)(uVar20 + 0x70);
            iStack_35c = (int)((ulong)*(undefined8 *)(uVar20 + 0x70) >> 0x20);
            uStack_350 = (undefined4)*(undefined8 *)(uVar20 + 0x80);
            uStack_34c = (undefined4)((ulong)*(undefined8 *)(uVar20 + 0x80) >> 0x20);
          }
          FUN_109feb280(&uStack_290,&UNK_10f64e4cd,&fStack_360);
          FUN_10a0029c0(&uStack_290);
          goto LAB_10a319b3c;
        }
        FUN_10a314fa4(&fStack_360,puVar36);
        uStack_4e0 = *puVar36;
        uStack_4d8 = *(undefined4 *)(puVar36 + 1);
        uStack_4b8 = SUB84(&uStack_4e0,0);
        func_0x0001096f1ebc();
        uStack_430 = (long *)*puVar36;
        uStack_428 = (undefined8 *)puVar36[1];
        lStack_420 = CONCAT44(lStack_420._4_4_,*(undefined4 *)(puVar36 + 2));
        lStack_418 = 0;
        alStack_4d0[0] = param_2;
        uStack_4c0 = uVar12;
        func_0x0001096f22ac(&uStack_290,alStack_4d0,1,&uStack_430);
        fStack_360 = SUB84(uStack_290,0);
        iStack_35c = (int)((ulong)uStack_290 >> 0x20);
        if (uStack_290 != (code *)0x0) {
          _memcpy(&iStack_358,&ppuStack_288,(long)uStack_290 << 5);
        }
        uStack_2f0 = (undefined4)uStack_220;
        uStack_2ec = (undefined4)(uStack_220 >> 0x20);
        pcStack_2f8 = pcStack_228;
        uStack_2e8 = uStack_218;
        lStack_2e0 = lStack_210;
        if (lStack_210 != 0) {
          _memcpy(auStack_2d8,auStack_208,lStack_210 * 0x18);
        }
        FUN_10a314fa4(&uStack_430,puVar36);
        func_0x0001096f1c24(&fStack_360,&uStack_430);
        goto LAB_10a318fbc;
      }
    }
  }
  lVar37 = *(long *)(param_1 + 2);
  if (*(char *)(lVar37 + 0x87) < '\0') {
    func_0x000107c3192c(&fStack_360,*(undefined8 *)(lVar37 + 0x70),*(undefined8 *)(lVar37 + 0x78));
  }
  else {
    iStack_358 = (int)*(undefined8 *)(lVar37 + 0x78);
    iStack_354 = (int)((ulong)*(undefined8 *)(lVar37 + 0x78) >> 0x20);
    fStack_360 = (float)*(undefined8 *)(lVar37 + 0x70);
    iStack_35c = (int)((ulong)*(undefined8 *)(lVar37 + 0x70) >> 0x20);
    uStack_350 = (undefined4)*(undefined8 *)(lVar37 + 0x80);
    uStack_34c = (undefined4)((ulong)*(undefined8 *)(lVar37 + 0x80) >> 0x20);
  }
  FUN_109feb280(&uStack_290,&UNK_10f64e495,&fStack_360);
  FUN_10a0029c0(&uStack_290);
LAB_10a319b3c:
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x10a319b40);
  (*pcVar17)();
code_r0x00010a3195b0:
  bVar16 = !bVar10;
  bVar10 = false;
  if (bVar16) goto LAB_10a319934;
  goto LAB_10a319598;
}



/* Entry: 10a319cb8; end: 10a31a25f;  */

void FUN_10a319cb8(long *param_1,long *param_2,long *param_3,long *param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  code *pcVar7;
  uint *puVar8;
  undefined1 *puVar9;
  long **pplVar10;
  long *plVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  long **pplStack_400;
  long *plStack_3f8;
  undefined8 uStack_3f0;
  uint uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined1 uStack_268;
  uint uStack_260;
  undefined4 uStack_25c;
  long *plStack_258;
  long *plStack_250;
  undefined1 uStack_138;
  long *aplStack_130 [3];
  long *aplStack_118 [10];
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long **pplStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long **pplStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = (uint *)*param_3;
  (**(code **)(*(long *)puVar8 + 0x30))();
  iVar14 = *(int *)((long)param_2 + 0xc);
  iVar17 = (int)param_2[2];
  if (*(int *)((long)param_2 + 0xc) < 1 || (int)param_2[2] < 1) {
    iVar13 = (int)(*(float *)(param_2 + 1) * (float)*(int *)(*param_3 + 0x18));
    iVar17 = (int)(*(float *)(param_2 + 1) * (float)*(int *)(*param_3 + 0x1c));
    iVar14 = iVar13;
    if ((*(uint *)((long)param_2 + 0x14) & 1) != 0) {
      iVar14 = iVar17;
      iVar17 = iVar13;
    }
  }
  plVar20 = *(long **)(puVar8 + 6);
  lVar21 = CONCAT44(iVar17,iVar14);
  pbVar16 = (byte *)*param_2;
  uStack_b8 = lVar21;
  if (pbVar16 == (byte *)0x0) {
    puVar9 = (undefined1 *)0x58;
    __Znwm();
    *puVar9 = 0;
    *(undefined8 *)(puVar9 + 8) = 0;
    *(undefined8 *)(puVar9 + 0x10) = 0;
    *(undefined8 *)(puVar9 + 0x28) = 0;
    *(undefined8 *)(puVar9 + 0x20) = 0;
    *(undefined8 *)(puVar9 + 0x38) = 0;
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(undefined8 *)(puVar9 + 0x48) = 0;
    *(undefined8 *)(puVar9 + 0x40) = 0;
    *(undefined8 *)(puVar9 + 0x50) = 0;
    *param_2 = (long)puVar9;
    puVar8 = (uint *)0x113834ef0;
    FUN_10a1c5e98();
    pbVar16 = (byte *)*param_2;
    *pbVar16 = (byte)(*puVar8 >> 0xf) & 1;
  }
  lVar18 = *(long *)(pbVar16 + 0x20);
  if (lVar18 == 0) {
LAB_10a319dd4:
    FUN_10a3ca004();
    uVar6 = *(int *)((long)plVar20 + 0x734) - 2;
    uVar15 = (uint)(0x2040404040203 >> (((ulong)uVar6 & 7) << 3));
    if (6 < uVar6) {
      uVar15 = 4;
    }
    lVar18 = *(long *)(puVar8 + ((ulong)uVar15 & 7) * 2 + 0xe);
    if (lVar18 == 0) {
      FUN_10a3ca05c();
      lVar18 = *(long *)(puVar8 + ((ulong)uVar15 & 7) * 2 + 0xe);
    }
    uStack_3e4 = 0;
    uStack_3e0 = 1;
    pplStack_400 = (long **)CONCAT44(iVar17,(int)uStack_b8);
    uStack_3f0 = 0x100000003;
    plStack_3f8 = (long *)0x400000001;
    uStack_3e8 = uStack_3e8 & 0xffffff00;
    FUN_10a048f04(&uStack_260,*(undefined8 *)(lVar18 + 0x1e0),&pplStack_400);
    pplVar10 = (long **)CONCAT44(uStack_25c,uStack_260);
    *(undefined1 *)((long)pplVar10 + 0x19) = 1;
    ___dynamic_cast(pplVar10,&PTR_DAT_110ba0e18,&PTR_DAT_110bc45d8,0xfffffffffffffffe);
    if (pplVar10 != (long **)0x0) {
      plStack_a8 = plStack_258;
      if (plStack_258 != (long *)0x0) {
        plVar11 = plStack_258 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar5) {
            *plVar11 = *plVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      pplStack_b0 = pplVar10;
      func_0x00010a099dfc(*param_2 + 0x20,&pplStack_b0);
      plVar11 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar2 = plStack_a8 + 1;
        do {
          lVar18 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      plVar11 = plStack_258;
      if (plStack_258 != (long *)0x0) {
        plVar2 = plStack_258 + 1;
        do {
          lVar18 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plStack_258 + 0x10))(plStack_258);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
        }
      }
      *(long **)(*param_2 + 0x50) = plVar20;
      goto LAB_10a319f20;
    }
  }
  else {
    iVar17 = uStack_b8._4_4_;
    if (((int)uStack_b8 != *(int *)(lVar18 + 0x18) || uStack_b8._4_4_ != *(int *)(lVar18 + 0x1c)) ||
       (iVar17 = *(int *)(lVar18 + 0x1c), *(long **)(pbVar16 + 0x50) != plVar20))
    goto LAB_10a319dd4;
LAB_10a319f20:
    plStack_3f8 = (long *)0x3f800000;
    pplStack_400 = (long **)0x0;
    uStack_3e8 = 0;
    uStack_3e4 = 0x3f800000;
    uStack_3f0 = 0x3f8000003f800000;
    uStack_260 = *(uint *)((long)param_2 + 0x14) & 0xc | -*(uint *)((long)param_2 + 0x14) & 3;
    FUN_10a19dc6c(&uStack_260,&pplStack_400,8);
    uStack_78 = CONCAT44(uStack_3e4,uStack_3e8);
    plStack_88 = plStack_3f8;
    pplStack_90 = pplStack_400;
    uStack_80 = uStack_3f0;
    plVar11 = plVar20;
    func_0x00010a08f1bc();
    if (*param_4 == 0) {
      lVar18 = *param_2;
      if ((*(long *)(lVar18 + 0x30) == 0) || (lVar21 != *(long *)(*(long *)(lVar18 + 0x30) + 0x10)))
      {
        uStack_260 = 1;
        FUN_10a326b40(&pplStack_400,&pplStack_b0,&uStack_b8,&uStack_260);
        FUN_10a16b1ec(*param_2 + 0x30,&pplStack_400);
        plVar2 = plStack_3f8;
        if (plStack_3f8 != (long *)0x0) {
          plVar3 = plStack_3f8 + 1;
          do {
            lVar21 = *plVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *plVar3 = lVar21 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar21 == 0) {
            (**(code **)(*plStack_3f8 + 0x10))(plStack_3f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
          }
        }
        lVar18 = *param_2;
      }
      FUN_10a31a260(param_4,lVar18 + 0x30);
      FUN_10a1b2a5c(*param_4 + 0x10,(int)param_2[3]);
    }
    plVar2 = *(long **)(*param_2 + 0x20);
    plVar3 = *(long **)(*param_2 + 0x28);
    if (plVar3 != (long *)0x0) {
      plVar1 = plVar3 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plStack_c8 = plVar2;
    plStack_c0 = plVar3;
    FUN_10a0e3e64(&uStack_260,plVar20);
    uStack_260 = 2;
    uStack_138 = param_5 == 1;
    if ((*(byte *)(*plVar11 + 0x440) & 1) == 0) goto LAB_10a31a204;
    lVar21 = *plVar11 + 0x128;
    func_0x00010a155a18(lVar21);
    if (plStack_250 == plStack_258) goto LAB_10a31a204;
    FUN_10a19ea9c(plStack_258,lVar21);
    iVar14 = *(int *)(*(long *)(*param_2 + 0x20) + 0x4c);
    lVar21 = param_2[3];
    func_0x00010a08f1bc();
    puVar12 = (undefined8 *)*plVar20;
    FUN_10a155834(puVar12,(int)lVar21 != iVar14);
    uVar19 = *puVar12;
    param_3 = (long *)*param_3;
    FUN_10a156fa0(&pplStack_400,&uStack_260);
    uStack_268 = 1;
    (**(code **)(*param_3 + 0x38))(param_3);
    plVar20 = plVar2;
    (**(code **)(*plVar2 + 0x38))(plVar2);
    plStack_a8 = plStack_88;
    pplStack_b0 = pplStack_90;
    uStack_98 = uStack_78;
    uStack_a0 = uStack_80;
    FUN_10a0e5058(uVar19,param_3,plVar20,&pplStack_b0,&pplStack_400);
    *(undefined4 *)(plVar2 + 10) = 5;
    FUN_10a09d158(&pplStack_400);
    (**(code **)(*plVar2 + 0x10))
              (plVar2,*(undefined8 *)(*param_4 + 0x28),*(undefined8 *)(*param_4 + 0x18),0,
               *(undefined4 *)((long)plVar2 + 0x1c));
    lVar21 = *param_4;
    param_1[1] = param_4[1];
    *param_1 = lVar21;
    *param_4 = 0;
    param_4[1] = 0;
    pplStack_400 = aplStack_118;
    FUN_10a09d1bc(&pplStack_400);
    pplStack_400 = aplStack_130;
    FUN_10a09d284(&pplStack_400);
    pplStack_400 = &plStack_258;
    func_0x00010a09d2f4(&pplStack_400);
    if (plVar3 != (long *)0x0) {
      plVar20 = plVar3 + 1;
      do {
        lVar21 = *plVar20;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar5) {
          *plVar20 = lVar21 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar21 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  pplStack_b0 = (long **)0x0;
  plStack_a8 = (long *)0x0;
  pplStack_400 = (long **)&UNK_10f64e54f;
  plStack_3f8 = (long *)0x5b;
  FUN_10a0edfc4(&pplStack_400);
LAB_10a31a204:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a31a208);
  (*pcVar7)();
}



/* Entry: 10a31a260; end: 10a31a30f;  */

undefined8 * FUN_10a31a260(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a31a310; end: 10a31a313;  */

undefined8 * FUN_10a31a310(undefined8 *param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  *param_1 = &PTR_FUN_110bc3a40;
  ppuVar2 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  puStack_30 = (undefined8 *)&UNK_10f635282;
  uStack_28 = 0x2b;
  if (*(long *)(*ppuVar2 + 0x10) != 0) {
    if (*(undefined8 **)(*(long *)(*ppuVar2 + 0x10) + 0xb8) == param_1) {
      func_0x00010a31a2dc();
    }
    FUN_10a3012a8(param_1);
    if (param_1[0x1a] != 0) {
      param_1[0x1b] = param_1[0x1a];
      __ZdlPv();
    }
    func_0x000107c27bf0(param_1 + 0x17,param_1[0x18]);
    puStack_30 = param_1 + 0x14;
    FUN_10a0426d8(&puStack_30);
    func_0x00010a321d0c(param_1 + 0x11,param_1[0x12]);
    func_0x00010a321cc4(param_1 + 0xe,param_1[0xf]);
    if (*(char *)((long)param_1 + 0x67) < '\0') {
      __ZdlPv(param_1[10]);
    }
    if (*(char *)((long)param_1 + 0x4f) < '\0') {
      __ZdlPv(param_1[7]);
    }
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      __ZdlPv(param_1[4]);
    }
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      __ZdlPv(param_1[1]);
    }
    return param_1;
  }
  FUN_10a0edfc4(&puStack_30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a301270);
  (*pcVar1)();
}



/* Entry: 10a31a314; end: 10a31a327;  */

void FUN_10a31a314(void)

{
  FUN_10a301168();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a31a328; end: 10a31a3c7;  */

void FUN_10a31a328(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0xd0);
  lVar2 = *(long *)(param_1 + 0xd8);
  if (lVar2 != lVar3) {
    uVar4 = 0;
    do {
      if (*(char *)(lVar3 + uVar4) != '\0') {
        _glDisableVertexAttribArray(uVar4);
        if ((ulong)(*(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0)) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a31a390);
          (*pcVar1)();
        }
        *(undefined1 *)(*(long *)(param_1 + 0xd0) + uVar4) = 0;
        lVar3 = *(long *)(param_1 + 0xd0);
        lVar2 = *(long *)(param_1 + 0xd8);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(lVar2 - lVar3));
  }
  return;
}



/* Entry: 10a31a3c8; end: 10a31a447;  */

void FUN_10a31a3c8(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 == 0xffffffff) {
    uVar1 = *(ushort *)(param_1 + 0x6c);
    uVar2 = (uint)uVar1;
    *(ushort *)(param_1 + 0x6c) = uVar1 + 1;
    *param_2 = (uint)uVar1;
  }
  _glActiveTexture(uVar2 + 0x84c0);
  _glBindTexture(0xde1,param_4);
  if ((int)param_3 != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glUniform1i_11034b830)(param_3,*param_2);
    return;
  }
  return;
}



/* Entry: 10a31a448; end: 10a31a477;  */

void FUN_10a31a448(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  lVar1 = *(long *)(param_1 + 0xd0);
  if ((ulong)(*(long *)(param_1 + 0xd8) - lVar1) <= (ulong)(long)iVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10a31a478);
    (*pcVar2)();
  }
  if (*(char *)(lVar1 + iVar3) != '\0') {
    return;
  }
  *(undefined1 *)(lVar1 + iVar3) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glEnableVertexAttribArray_11034b560)(param_2);
  return;
}



/* Entry: 10a31a478; end: 10a31a4bf;  */

void FUN_10a31a478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if ((int)param_2 != -1) {
    FUN_10a31a448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbed14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glVertexAttribPointer_11034b908)(param_2,2,0x1406,0,0,param_3);
    return;
  }
  return;
}



/* Entry: 10a31a4c0; end: 10a31ae67;  */

/* WARNING: Removing unreachable block (ram,0x00010a31a928) */
/* WARNING: Removing unreachable block (ram,0x00010a31a810) */
/* WARNING: Removing unreachable block (ram,0x00010a31a958) */

undefined8 ****** FUN_10a31a4c0(long param_1,undefined8 *param_2,ulong *param_3)

{
  undefined *puVar1;
  long *****ppppplVar2;
  undefined1 uVar3;
  byte bVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong *puVar8;
  long lVar9;
  undefined **ppuVar10;
  long ******pppppplVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long ******pppppplVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long ******pppppplVar19;
  undefined8 ******ppppppuVar20;
  long ******pppppplVar21;
  undefined8 *puVar22;
  long *plVar23;
  long *plVar24;
  long alStack_1e0 [2];
  char cStack_1c9;
  long alStack_1c8 [2];
  char cStack_1b1;
  undefined8 *****pppppuStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *****pppppuStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *****ppppplStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long *****ppppplStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long *****ppppplStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  long *****ppppplStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined7 uStack_80;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined1 uStack_61;
  ulong uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x50,param_3);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&ppppplStack_c0,*param_2,param_2[1]);
  }
  else {
    uStack_b8 = param_2[1];
    ppppplStack_c0 = (long *****)*param_2;
    uStack_b0 = param_2[2];
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&ppppplStack_e0,*param_3,param_3[1]);
  }
  else {
    uStack_d8 = param_3[1];
    ppppplStack_e0 = (long *****)*param_3;
    uStack_d0 = param_3[2];
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  plVar24 = *(long **)(param_1 + 0x88);
  plVar12 = (long *)(param_1 + 0x90);
  while (plVar24 != plVar12) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_a0,&UNK_10f6141c5,10);
    uVar16 = plVar24[8];
    plVar5 = (long *)plVar24[7];
    if (-1 < (char)*(byte *)((long)plVar24 + 0x4f)) {
      uVar16 = (ulong)*(byte *)((long)plVar24 + 0x4f);
      plVar5 = plVar24 + 7;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_a0,plVar5,uVar16);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&uStack_a0," ",1);
    uVar16 = plVar24[5];
    plVar5 = (long *)plVar24[4];
    if (-1 < (char)*(byte *)((long)plVar24 + 0x37)) {
      uVar16 = (ulong)*(byte *)((long)plVar24 + 0x37);
      plVar5 = plVar24 + 4;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_a0,plVar5,uVar16);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_a0,&UNK_10f480bab,2);
    plVar5 = (long *)plVar24[1];
    plVar23 = plVar24;
    if ((long *)plVar24[1] == (long *)0x0) {
      do {
        plVar24 = (long *)plVar23[2];
        bVar6 = (long *)*plVar24 != plVar23;
        plVar23 = plVar24;
      } while (bVar6);
    }
    else {
      do {
        plVar24 = plVar5;
        plVar5 = (long *)*plVar24;
      } while ((long *)*plVar24 != (long *)0x0);
    }
  }
  FUN_10a0b4df8(&uStack_70,&uStack_a0,&ppppplStack_c0);
  if ((long)uStack_b0 < 0) {
    __ZdlPv(ppppplStack_c0);
  }
  uStack_b8 = CONCAT17(uStack_61,uStack_68);
  ppppplStack_c0 = (long *****)CONCAT17(uStack_70._7_1_,(undefined7)uStack_70);
  uStack_b0 = uStack_60;
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  FUN_10a31ae68(param_1,&ppppplStack_c0);
  FUN_10a31b1f8(param_1,&ppppplStack_c0);
  func_0x000107c2b054(&uStack_a0,&UNK_10f64e5ab);
  uVar16 = uStack_b8;
  pppppplVar11 = (long ******)ppppplStack_c0;
  if (-1 < (long)uStack_b0) {
    uVar16 = uStack_b0 >> 0x38;
    pppppplVar11 = &ppppplStack_c0;
  }
  puVar8 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppppplVar11,uVar16);
  puVar22 = (undefined8 *)((ulong)&ppppplStack_c0 | 8);
  pppppplVar11 = (long ******)*puVar8;
  uStack_70._0_7_ = (undefined7)puVar8[1];
  uStack_70._7_1_ = (undefined1)*(undefined8 *)((long)puVar8 + 0xf);
  uStack_68 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0xf) >> 8);
  uVar3 = *(undefined1 *)((long)puVar8 + 0x17);
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if ((long)uStack_b0 < 0) {
    __ZdlPv(ppppplStack_c0);
  }
  *puVar22 = CONCAT17(uStack_70._7_1_,(undefined7)uStack_70);
  *(ulong *)((long)puVar22 + 7) = CONCAT71(uStack_68,uStack_70._7_1_);
  uStack_b0 = CONCAT17(uVar3,(undefined7)uStack_b0);
  ppppplStack_c0 = (long *****)pppppplVar11;
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  FUN_10a31b2e4(&ppppplStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppppplStack_c0,&UNK_10f64d48b,1);
  lVar9 = param_1;
  FUN_10a31ae68(param_1,&ppppplStack_e0);
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  FUN_10ad4ae18();
  if ((*(char *)(lVar9 + 0x16) == '\x01') && (FUN_10ad4ae18(), (*(byte *)(lVar9 + 0x15) & 1) == 0))
  {
    func_0x000107c2c4d8(&uStack_a0,&UNK_10f64e633,0xa9);
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_70,&UNK_10f64e6dd,&uStack_a0);
  uVar16 = uStack_d8;
  pppppplVar11 = (long ******)ppppplStack_e0;
  if (-1 < (long)uStack_d0) {
    uVar16 = uStack_d0 >> 0x38;
    pppppplVar11 = &ppppplStack_e0;
  }
  plVar24 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (plVar24,pppppplVar11,uVar16);
  puVar22 = (undefined8 *)((ulong)&ppppplStack_e0 | 8);
  pppppplVar11 = (long ******)*plVar24;
  uStack_88._0_7_ = (undefined7)plVar24[1];
  uStack_88._7_1_ = (undefined1)*(undefined8 *)((long)plVar24 + 0xf);
  uStack_80 = (undefined7)((ulong)*(undefined8 *)((long)plVar24 + 0xf) >> 8);
  bVar4 = *(byte *)((long)plVar24 + 0x17);
  plVar24[1] = 0;
  plVar24[2] = 0;
  *plVar24 = 0;
  if ((long)uStack_d0 < 0) {
    __ZdlPv(ppppplStack_e0);
  }
  *puVar22 = CONCAT17(uStack_88._7_1_,(undefined7)uStack_88);
  *(ulong *)((long)puVar22 + 7) = CONCAT71(uStack_80,uStack_88._7_1_);
  ppppplStack_e0 = (long *****)pppppplVar11;
  uStack_d0._7_1_ = bVar4;
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  FUN_10a31b1f8(param_1,&ppppplStack_e0);
  func_0x000107c2b054(&uStack_a0,&UNK_10f64e5d7);
  uVar16 = uStack_d8;
  pppppplVar11 = (long ******)ppppplStack_e0;
  if (-1 < (char)uStack_d0._7_1_) {
    uVar16 = (ulong)uStack_d0._7_1_;
    pppppplVar11 = &ppppplStack_e0;
  }
  puVar8 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar8,pppppplVar11,uVar16);
  ppppplVar2 = (long *****)*puVar8;
  uStack_70._0_7_ = (undefined7)puVar8[1];
  uStack_70._7_1_ = (undefined1)*(undefined8 *)((long)puVar8 + 0xf);
  uStack_68 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0xf) >> 8);
  uVar3 = *(undefined1 *)((long)puVar8 + 0x17);
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  if ((char)uStack_d0._7_1_ < '\0') {
    __ZdlPv(ppppplStack_e0);
  }
  *puVar22 = CONCAT17(uStack_70._7_1_,(undefined7)uStack_70);
  *(ulong *)((long)puVar22 + 7) = CONCAT71(uStack_68,uStack_70._7_1_);
  uStack_d0 = CONCAT17(uVar3,(undefined7)uStack_d0);
  ppppplStack_e0 = ppppplVar2;
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  plVar24 = *(long **)(param_1 + 0xb8);
  if (plVar24 != (long *)(param_1 + 0xc0)) {
    do {
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&uStack_88,&UNK_10f432dcc,plVar24 + 4);
      puVar22 = &uStack_88;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar22,&UNK_10f64e795,9);
      uStack_60 = puVar22[2];
      uStack_68 = (undefined7)puVar22[1];
      uStack_61 = (undefined1)((ulong)puVar22[1] >> 0x38);
      uStack_70._0_7_ = (undefined7)*puVar22;
      uStack_70._7_1_ = (undefined1)((ulong)*puVar22 >> 0x38);
      puVar22[1] = 0;
      puVar22[2] = 0;
      *puVar22 = 0;
      uVar16 = CONCAT17(uStack_61,uStack_68);
      puVar22 = (undefined8 *)CONCAT17(uStack_70._7_1_,(undefined7)uStack_70);
      if (-1 < (long)uStack_60) {
        uVar16 = uStack_60 >> 0x38;
        puVar22 = &uStack_70;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_a0,puVar22,uVar16);
      plVar5 = (long *)plVar24[1];
      plVar23 = plVar24;
      if ((long *)plVar24[1] == (long *)0x0) {
        do {
          plVar24 = (long *)plVar23[2];
          bVar6 = (long *)*plVar24 != plVar23;
          plVar23 = plVar24;
        } while (bVar6);
      }
      else {
        do {
          plVar24 = plVar5;
          plVar5 = (long *)*plVar24;
        } while ((long *)*plVar24 != (long *)0x0);
      }
    } while (plVar24 != (long *)(param_1 + 0xc0));
  }
  FUN_10a0b4df8(&uStack_70,&uStack_a0,&ppppplStack_e0);
  if ((long)uStack_d0 < 0) {
    __ZdlPv(ppppplStack_e0);
  }
  uStack_d8 = CONCAT17(uStack_61,uStack_68);
  ppppplStack_e0 = (long *****)CONCAT17(uStack_70._7_1_,(undefined7)uStack_70);
  uStack_d0 = uStack_60;
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  FUN_10a31b2e4(&ppppplStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&ppppplStack_e0,&UNK_10f64d48b,1);
  if ((long)uStack_b0 < 0) {
    func_0x000107c3192c(&ppppplStack_100,ppppplStack_c0,uStack_b8);
  }
  else {
    uStack_f8 = uStack_b8;
    ppppplStack_100 = ppppplStack_c0;
    uStack_f0 = uStack_b0;
  }
  if ((long)uStack_d0 < 0) {
    func_0x000107c3192c(&ppppplStack_120,ppppplStack_e0,uStack_d8);
  }
  else {
    uStack_118 = uStack_d8;
    ppppplStack_120 = ppppplStack_e0;
    uStack_110 = uStack_d0;
  }
  pppppplVar11 = (long ******)ppppplStack_100;
  if (-1 < (long)uStack_f0) {
    pppppplVar11 = &ppppplStack_100;
  }
  FUN_10a31ba0c(pppppplVar11,0x8b31);
  if ((int)pppppplVar11 == 0) {
    ppuVar10 = &PTR_PTR_1133015a8;
    ppuVar13 = &PTR_PTR_1133015e0;
    FUN_10ae079a0(0,&PTR_PTR_1133015e0);
    FUN_10ae07cd4(ppuVar13,&PTR_PTR_1133015e0);
    uVar16 = uStack_f8;
    pppppplVar11 = (long ******)ppppplStack_100;
    if (-1 < (long)uStack_f0) {
      uVar16 = uStack_f0 >> 0x38;
      pppppplVar11 = &ppppplStack_100;
    }
    FUN_10ae03140(0,pppppplVar11,uVar16);
    FUN_10ae079a0();
LAB_10a31abc4:
    ppuVar13 = &PTR_PTR_1133015a8;
    FUN_10ae0314c();
    FUN_10ae07cd4();
  }
  else {
    pppppplVar19 = (long ******)ppppplStack_120;
    if (-1 < (long)uStack_110) {
      pppppplVar19 = &ppppplStack_120;
    }
    FUN_10a31ba0c(pppppplVar19,0x8b30);
    if ((int)pppppplVar19 == 0) {
      ppuVar10 = &PTR_PTR_1133015a8;
      ppuVar13 = &PTR_PTR_113301610;
      FUN_10ae079a0(0,&PTR_PTR_113301610);
      FUN_10ae07cd4(ppuVar13,&PTR_PTR_113301610);
      uVar16 = uStack_118;
      pppppplVar11 = (long ******)ppppplStack_120;
      if (-1 < (long)uStack_110) {
        uVar16 = uStack_110 >> 0x38;
        pppppplVar11 = &ppppplStack_120;
      }
      FUN_10ae03140(0,pppppplVar11,uVar16);
      FUN_10ae079a0();
      goto LAB_10a31abc4;
    }
    ppuVar10 = (undefined **)pppppplVar19;
    _glCreateProgram();
    _glAttachShader();
    _glAttachShader(ppuVar10,pppppplVar19);
    _glLinkProgram(ppuVar10);
    _glDeleteShader(pppppplVar11);
    _glDeleteShader(pppppplVar19);
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    ppuVar13 = (undefined **)0x8b82;
    pppppplVar11 = (long ******)ppuVar10;
    _glGetProgramiv(ppuVar10,0x8b82,&uStack_a0);
    pppppplVar19 = (long ******)ppuVar10;
    if ((int)uStack_a0 != 0) goto LAB_10a31abe4;
    ppuVar13 = &PTR_PTR_1133015c0;
    ppuVar14 = ppuVar13;
    FUN_10ae079a0(0,&PTR_PTR_1133015c0);
    FUN_10ae07cd4(ppuVar14);
    func_0x00010a31b8e8();
  }
  pppppplVar19 = (long ******)0x0;
  pppppplVar11 = (long ******)ppuVar10;
LAB_10a31abe4:
  *(int *)(param_1 + 0x68) = (int)pppppplVar19;
  if ((long)uStack_110 < 0) {
    pppppplVar11 = (long ******)ppppplStack_120;
    __ZdlPv();
  }
  if ((long)uStack_f0 < 0) {
    pppppplVar11 = (long ******)ppppplStack_100;
    __ZdlPv();
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    ppppppuVar20 = (undefined8 ******)0x0;
  }
  else {
    plVar24 = *(long **)(param_1 + 0x70);
    while (plVar24 != (long *)(param_1 + 0x78)) {
      ppuVar13 = (undefined **)(plVar24 + 4);
      if (*(char *)((long)plVar24 + 0x37) < '\0') {
        ppuVar13 = (undefined **)*ppuVar13;
      }
      pppppplVar11 = (long ******)(ulong)*(uint *)(param_1 + 0x68);
      _glGetUniformLocation();
      *(int *)plVar24[0xd] = (int)pppppplVar11;
      plVar5 = (long *)plVar24[1];
      plVar23 = plVar24;
      if ((long *)plVar24[1] == (long *)0x0) {
        do {
          plVar24 = (long *)plVar23[2];
          bVar6 = (long *)*plVar24 != plVar23;
          plVar23 = plVar24;
        } while (bVar6);
      }
      else {
        do {
          plVar24 = plVar5;
          plVar5 = (long *)*plVar24;
        } while ((long *)*plVar24 != (long *)0x0);
      }
    }
    plVar24 = *(long **)(param_1 + 0x88);
    if (plVar24 != plVar12) {
      iVar18 = -1;
      do {
        ppuVar13 = (undefined **)(plVar24 + 4);
        if (*(char *)((long)plVar24 + 0x37) < '\0') {
          ppuVar13 = (undefined **)*ppuVar13;
        }
        pppppplVar11 = (long ******)(ulong)*(uint *)(param_1 + 0x68);
        _glGetAttribLocation();
        iVar7 = (int)pppppplVar11;
        *(int *)plVar24[10] = iVar7;
        if (iVar7 <= iVar18) {
          iVar7 = iVar18;
        }
        plVar5 = (long *)plVar24[1];
        plVar23 = plVar24;
        if ((long *)plVar24[1] == (long *)0x0) {
          do {
            plVar24 = (long *)plVar23[2];
            bVar6 = (long *)*plVar24 != plVar23;
            plVar23 = plVar24;
          } while (bVar6);
        }
        else {
          do {
            plVar24 = plVar5;
            plVar5 = (long *)*plVar24;
          } while ((long *)*plVar24 != (long *)0x0);
        }
        iVar18 = iVar7;
      } while (plVar24 != plVar12);
      if (-1 < iVar7) {
        pppppplVar11 = (long ******)(param_1 + 0xd0);
        uVar16 = (ulong)(iVar7 + 1);
        uVar17 = *(long *)(param_1 + 0xd8) - (long)*pppppplVar11;
        ppuVar13 = (undefined **)(uVar16 - uVar17);
        if (uVar16 < uVar17 || ppuVar13 == (undefined **)0x0) {
          if (uVar16 < uVar17) {
            *(undefined **)(param_1 + 0xd8) = (undefined *)((long)*pppppplVar11 + uVar16);
          }
        }
        else {
          func_0x0001080e0ff0();
        }
      }
    }
    ppppppuVar20 = (undefined8 ******)(ulong)(*(int *)(param_1 + 0x68) != 0);
  }
  *(undefined1 *)(param_1 + 0xe8) = 0;
  if ((long)uStack_d0 < 0) {
    pppppplVar11 = (long ******)ppppplStack_e0;
    __ZdlPv();
  }
  if ((long)uStack_b0 < 0) {
    pppppplVar11 = (long ******)ppppplStack_c0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppppppuVar20;
  }
  ___stack_chk_fail();
  if ((long)uStack_f0 < 0) {
    __ZdlPv(ppppplStack_100);
  }
  if ((long)uStack_d0 < 0) {
    __ZdlPv(ppppplStack_e0);
  }
  if ((long)uStack_b0 < 0) {
    __ZdlPv(ppppplStack_c0);
  }
  __Unwind_Resume();
  pppppuStack_198 = (undefined8 ******)0x0;
  uStack_190 = 0;
  lStack_188 = 0;
  pppppplVar19 = (long ******)pppppplVar11[0xe];
  if (pppppplVar19 != pppppplVar11 + 0xf) {
    do {
      if (*(char *)(pppppplVar19 + 0xf) == '\x01') {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (alStack_1c8,&UNK_10f64e607,pppppplVar19 + 10);
        plVar12 = alStack_1c8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar12,&UNK_10f64d48b,1);
        puStack_1a8 = (undefined *)plVar12[1];
        pppppuStack_1b0 = (undefined8 *****)*plVar12;
        puStack_1a0 = (undefined *)plVar12[2];
        plVar12[1] = 0;
        plVar12[2] = 0;
        *plVar12 = 0;
        puVar1 = puStack_1a8;
        ppppppuVar20 = (undefined8 ******)pppppuStack_1b0;
        if (-1 < (long)puStack_1a0) {
          puVar1 = (undefined *)((ulong)puStack_1a0 >> 0x38);
          ppppppuVar20 = &pppppuStack_1b0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppppuStack_198,ppppppuVar20,puVar1);
        if ((long)puStack_1a0 < 0) {
          __ZdlPv(pppppuStack_1b0);
        }
        if (cStack_1b1 < '\0') {
          __ZdlPv(alStack_1c8[0]);
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppppuStack_198,&DAT_10f493349,8);
      ppppplVar2 = pppppplVar19[8];
      pppppplVar15 = (long ******)pppppplVar19[7];
      if (-1 < (char)*(byte *)((long)pppppplVar19 + 0x4f)) {
        ppppplVar2 = (long *****)(ulong)*(byte *)((long)pppppplVar19 + 0x4f);
        pppppplVar15 = pppppplVar19 + 7;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppppuStack_198,pppppplVar15,ppppplVar2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppppuStack_198," ",1);
      ppppplVar2 = pppppplVar19[5];
      pppppplVar15 = (long ******)pppppplVar19[4];
      if (-1 < (char)*(byte *)((long)pppppplVar19 + 0x37)) {
        ppppplVar2 = (long *****)(ulong)*(byte *)((long)pppppplVar19 + 0x37);
        pppppplVar15 = pppppplVar19 + 4;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppppuStack_198,pppppplVar15,ppppplVar2);
      pppppplVar15 = pppppplVar19 + 10;
      if (*(char *)((long)pppppplVar19 + 0x67) < '\0') {
        if (pppppplVar19[0xb] == (long *****)0x1) {
          pppppplVar15 = (long ******)*pppppplVar15;
          goto LAB_10a31affc;
        }
LAB_10a31b020:
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (alStack_1e0,&DAT_10f62a9e8);
        plVar12 = alStack_1e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar12,&DAT_10f62a9ea,1);
        bVar6 = false;
        puStack_1a8 = (undefined *)plVar12[1];
        pppppuStack_1b0 = (undefined8 *****)*plVar12;
        puStack_1a0 = (undefined *)plVar12[2];
        plVar12[1] = 0;
        plVar12[2] = 0;
        *plVar12 = 0;
      }
      else {
        if (*(char *)((long)pppppplVar19 + 0x67) != '\x01') goto LAB_10a31b020;
LAB_10a31affc:
        if (*(char *)pppppplVar15 != '0') goto LAB_10a31b020;
        func_0x000107c2b054(&pppppuStack_1b0,"");
        bVar6 = true;
      }
      puVar1 = puStack_1a8;
      ppppppuVar20 = (undefined8 ******)pppppuStack_1b0;
      if (-1 < (long)puStack_1a0) {
        puVar1 = (undefined *)((ulong)puStack_1a0 >> 0x38);
        ppppppuVar20 = &pppppuStack_1b0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppppuStack_198,ppppppuVar20,puVar1);
      if ((long)puStack_1a0 < 0) {
        __ZdlPv(pppppuStack_1b0);
      }
      if ((!bVar6) && (cStack_1c9 < '\0')) {
        __ZdlPv(alStack_1e0[0]);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&pppppuStack_198,&UNK_10f480bab,2);
      if (*(char *)(pppppplVar19 + 0xf) == '\x01') {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppppuStack_198,&UNK_10f43366d,7);
      }
      pppppplVar15 = (long ******)pppppplVar19[1];
      pppppplVar21 = pppppplVar19;
      if ((long ******)pppppplVar19[1] == (long ******)0x0) {
        do {
          pppppplVar19 = (long ******)pppppplVar21[2];
          bVar6 = (long ******)*pppppplVar19 != pppppplVar21;
          pppppplVar21 = pppppplVar19;
        } while (bVar6);
      }
      else {
        do {
          pppppplVar19 = pppppplVar15;
          pppppplVar15 = (long ******)*pppppplVar19;
        } while ((long ******)*pppppplVar19 != (long ******)0x0);
      }
    } while (pppppplVar19 != pppppplVar11 + 0xf);
  }
  ppppppuVar20 = &pppppuStack_198;
  FUN_10a0b4df8(&pppppuStack_1b0,ppppppuVar20,ppuVar13);
  if (*(char *)((long)ppuVar13 + 0x17) < '\0') {
    ppppppuVar20 = (undefined8 ******)*ppuVar13;
    __ZdlPv(ppppppuVar20);
  }
  ppuVar13[1] = puStack_1a8;
  *ppuVar13 = (undefined *)pppppuStack_1b0;
  ppuVar13[2] = puStack_1a0;
  if (lStack_188 < 0) {
    __ZdlPv(pppppuStack_198);
    ppppppuVar20 = (undefined8 ******)pppppuStack_198;
  }
  return ppppppuVar20;
}



/* Entry: 10a31ae68; end: 10a31b1f7;  */

void FUN_10a31ae68(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long alStack_c0 [2];
  char cStack_a9;
  long alStack_a8 [2];
  char cStack_91;
  undefined8 *****pppppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  plVar5 = *(long **)(param_1 + 0x70);
  if (plVar5 != (long *)(param_1 + 0x78)) {
    do {
      if ((char)plVar5[0xf] == '\x01') {
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (alStack_a8,&UNK_10f64e607,plVar5 + 10);
        plVar4 = alStack_a8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar4,&UNK_10f64d48b,1);
        uStack_88 = plVar4[1];
        pppppuStack_90 = (undefined8 *****)*plVar4;
        uStack_80 = plVar4[2];
        plVar4[1] = 0;
        plVar4[2] = 0;
        *plVar4 = 0;
        uVar1 = uStack_88;
        ppppppuVar2 = (undefined8 ******)pppppuStack_90;
        if (-1 < (long)uStack_80) {
          uVar1 = uStack_80 >> 0x38;
          ppppppuVar2 = &pppppuStack_90;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,ppppppuVar2,uVar1);
        if ((long)uStack_80 < 0) {
          __ZdlPv(pppppuStack_90);
        }
        if (cStack_91 < '\0') {
          __ZdlPv(alStack_a8[0]);
        }
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_78,&DAT_10f493349,8);
      uVar1 = plVar5[8];
      plVar4 = (long *)plVar5[7];
      if (-1 < (char)*(byte *)((long)plVar5 + 0x4f)) {
        uVar1 = (ulong)*(byte *)((long)plVar5 + 0x4f);
        plVar4 = plVar5 + 7;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_78,plVar4,uVar1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&uStack_78," ",1)
      ;
      uVar1 = plVar5[5];
      plVar4 = (long *)plVar5[4];
      if (-1 < (char)*(byte *)((long)plVar5 + 0x37)) {
        uVar1 = (ulong)*(byte *)((long)plVar5 + 0x37);
        plVar4 = plVar5 + 4;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_78,plVar4,uVar1);
      plVar4 = plVar5 + 10;
      if (*(char *)((long)plVar5 + 0x67) < '\0') {
        if (plVar5[0xb] == 1) {
          plVar4 = (long *)*plVar4;
          goto LAB_10a31affc;
        }
LAB_10a31b020:
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (alStack_c0,&DAT_10f62a9e8);
        plVar4 = alStack_c0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (plVar4,&DAT_10f62a9ea,1);
        bVar3 = false;
        uStack_88 = plVar4[1];
        pppppuStack_90 = (undefined8 *****)*plVar4;
        uStack_80 = plVar4[2];
        plVar4[1] = 0;
        plVar4[2] = 0;
        *plVar4 = 0;
      }
      else {
        if (*(char *)((long)plVar5 + 0x67) != '\x01') goto LAB_10a31b020;
LAB_10a31affc:
        if (*(char *)plVar4 != '0') goto LAB_10a31b020;
        func_0x000107c2b054(&pppppuStack_90,"");
        bVar3 = true;
      }
      uVar1 = uStack_88;
      ppppppuVar2 = (undefined8 ******)pppppuStack_90;
      if (-1 < (long)uStack_80) {
        uVar1 = uStack_80 >> 0x38;
        ppppppuVar2 = &pppppuStack_90;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_78,ppppppuVar2,uVar1);
      if ((long)uStack_80 < 0) {
        __ZdlPv(pppppuStack_90);
      }
      if ((!bVar3) && (cStack_a9 < '\0')) {
        __ZdlPv(alStack_c0[0]);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_78,&UNK_10f480bab,2);
      if ((char)plVar5[0xf] == '\x01') {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&uStack_78,&UNK_10f43366d,7);
      }
      plVar4 = (long *)plVar5[1];
      plVar6 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar6[2];
          bVar3 = (long *)*plVar5 != plVar6;
          plVar6 = plVar5;
        } while (bVar3);
      }
      else {
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    } while (plVar5 != (long *)(param_1 + 0x78));
  }
  FUN_10a0b4df8(&pppppuStack_90,&uStack_78,param_2);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __ZdlPv(*param_2);
  }
  param_2[1] = uStack_88;
  *param_2 = (long)pppppuStack_90;
  param_2[2] = uStack_80;
  if (lStack_68 < 0) {
    __ZdlPv(uStack_78);
  }
  return;
}



/* Entry: 10a31b1f8; end: 10a31b2e3;  */

void FUN_10a31b1f8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  puVar3 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar3 != *(undefined8 **)(param_1 + 0xa8)) {
    do {
      uVar1 = puVar3[1];
      puVar2 = (undefined8 *)*puVar3;
      if (-1 < (char)*(byte *)((long)puVar3 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)puVar3 + 0x17);
        puVar2 = puVar3;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_48,puVar2,uVar1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_48,&UNK_10f64d48b,1);
      puVar3 = puVar3 + 3;
    } while (puVar3 != *(undefined8 **)(param_1 + 0xa8));
  }
  FUN_10a0b4df8(&uStack_60,&uStack_48,param_2);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __ZdlPv(*param_2);
  }
  param_2[1] = uStack_58;
  *param_2 = uStack_60;
  param_2[2] = uStack_50;
  if (lStack_38 < 0) {
    __ZdlPv(uStack_48);
  }
  return;
}



/* Entry: 10a31b2e4; end: 10a31b403;  */

/* WARNING: Removing unreachable block (ram,0x00010a31b700) */

void FUN_10a31b2e4(undefined8 *param_1)

{
  long *******ppppppplVar1;
  ulong uVar2;
  long ******pppppplVar3;
  undefined8 *******pppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined8 **ppuVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 *extraout_x8;
  ulong uVar16;
  ulong uVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  long *******ppppppplVar20;
  long lVar21;
  char *pcVar22;
  long *******ppppppplVar23;
  ulong uVar24;
  long ******pppppplStack_198;
  ulong uStack_190;
  ulong uStack_188;
  long ******pppppplStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_160 [48];
  byte bStack_130;
  undefined8 ******appppppuStack_128 [2];
  char cStack_111;
  undefined8 ******ppppppuStack_110;
  undefined8 *****pppppuStack_108;
  undefined8 *****pppppuStack_100;
  undefined8 ******ppppppuStack_f0;
  undefined8 *****pppppuStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined1 auStack_d1 [17];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long lStack_38;
  
  ppuVar9 = &puStack_60;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_50 = 0xd00000000000000;
  puStack_60 = (undefined8 *)0x6e6f697372657623;
  uStack_58 = 0xa30303120;
  puVar13 = (undefined8 *)*param_1;
  uVar14 = (uint)param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    puVar13 = param_1;
    uVar14 = (uint)*(byte *)((long)param_1 + 0x17);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(&puStack_60,puVar13);
  uVar6 = *ppuVar9;
  uStack_48 = SUB87(ppuVar9[1],0);
  uStack_41 = (undefined1)*(undefined8 *)((long)ppuVar9 + 0xf);
  uStack_40 = (undefined7)((ulong)*(undefined8 *)((long)ppuVar9 + 0xf) >> 8);
  uVar7 = *(undefined1 *)((long)ppuVar9 + 0x17);
  ppuVar9[1] = (undefined8 *)0x0;
  ppuVar9[2] = (undefined8 *)0x0;
  *ppuVar9 = (undefined8 *)0x0;
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    ppuVar9 = (undefined8 **)*param_1;
    __ZdlPv();
  }
  *param_1 = uVar6;
  param_1[1] = CONCAT17(uStack_41,uStack_48);
  *(ulong *)((long)param_1 + 0xf) = CONCAT71(uStack_40,uStack_41);
  *(undefined1 *)((long)param_1 + 0x17) = uVar7;
  if (lStack_50 < 0) {
    ppuVar9 = (undefined8 **)puStack_60;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_50 < 0) {
    __ZdlPv(puStack_60);
  }
  __Unwind_Resume();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  uVar15 = 2;
  if (uVar14 == 0) {
    uVar15 = 4;
  }
  FUN_10a0f1b8c(auStack_160,puVar13,uVar15);
  if (bStack_130 != 1) {
    FUN_10a31b86c(puVar13);
    FUN_10a1b9340("",0,puVar13,&UNK_10f64e60f);
LAB_10a31b764:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10a31b768);
    (*pcVar8)();
  }
LAB_10a31b47c:
  FUN_10a0f2178(&pppppplStack_180,auStack_160);
  uVar17 = uStack_170;
  uVar24 = (ulong)uStack_170._7_1_;
  if ((long)uVar24 < 0) {
    uVar16 = uStack_178;
    ppppppplVar23 = (long *******)pppppplStack_180;
    if (uStack_178 == 0) {
      __ZdlPv(pppppplStack_180);
      goto LAB_10a31b770;
    }
  }
  else {
    if (uStack_170._7_1_ == '\0') {
LAB_10a31b770:
      if (bStack_130 == 1) {
        FUN_10a0f1ea0(auStack_160);
      }
      return;
    }
    uVar16 = uVar24;
    ppppppplVar23 = &pppppplStack_180;
  }
  if (7 < (long)uVar16) {
    ppppppplVar1 = (long *******)((long)ppppppplVar23 + uVar16);
    ppppppplVar10 = ppppppplVar23;
    while (_memchr(ppppppplVar10,0x23,uVar16 - 7), ppppppplVar10 != (long *******)0x0) {
      if (*ppppppplVar10 == (long ******)0x6564756c636e6923) {
        if ((ppppppplVar10 != ppppppplVar1) &&
           (uVar16 = (long)ppppppplVar10 - (long)ppppppplVar23, uVar16 != 0xffffffffffffffff)) {
          uVar2 = uStack_178;
          ppppppplVar23 = (long *******)pppppplStack_180;
          if (-1 < (long)uVar17) {
            uVar2 = uVar24;
            ppppppplVar23 = &pppppplStack_180;
          }
          ppppppplVar1 = (long *******)((long)ppppppplVar23 + uVar2);
          uVar17 = uVar2;
          ppppppplVar11 = ppppppplVar23;
          goto joined_r0x00010a31b514;
        }
        break;
      }
      ppppppplVar10 = (long *******)((long)ppppppplVar10 + 1);
      uVar16 = (long)ppppppplVar1 - (long)ppppppplVar10;
      if ((long)uVar16 < 8) break;
    }
  }
  goto LAB_10a31b72c;
joined_r0x00010a31b514:
  if (((long)uVar17 < 2) ||
     (_memchr(ppppppplVar11,0x2f,uVar17 - 1), ppppppplVar10 = ppppppplVar11,
     ppppppplVar11 == (long *******)0x0)) goto LAB_10a31b568;
  if (*(short *)ppppppplVar11 != 0x2f2f) {
    ppppppplVar10 = (long *******)((long)ppppppplVar11 + 1);
    uVar17 = (long)ppppppplVar1 - (long)ppppppplVar10;
    ppppppplVar11 = ppppppplVar10;
    goto joined_r0x00010a31b514;
  }
  uVar17 = (long)ppppppplVar11 - (long)ppppppplVar23;
  if (ppppppplVar11 == ppppppplVar1) {
    uVar17 = 0xffffffffffffffff;
  }
  if (uVar17 != 0xffffffffffffffff && uVar17 <= uVar16) goto LAB_10a31b72c;
LAB_10a31b568:
  ppppppuStack_f0 = (undefined8 *******)0x0;
  pppppuStack_e8 = (undefined8 ******)0x0;
  pppppuStack_e0 = (undefined8 ******)0x0;
  ppppppplVar11 = ppppppplVar23;
  ppppppplVar19 = ppppppplVar23;
  uVar17 = uVar2;
  if (uVar2 == 0) {
    uVar17 = 0xffffffffffffffff;
  }
  else {
    do {
      ppppppplVar18 = ppppppplVar11;
      ppppppplVar20 = ppppppplVar19;
      if (*(char *)ppppppplVar19 == '\"') break;
      uVar17 = uVar17 - 1;
      ppppppplVar18 = ppppppplVar1;
      ppppppplVar11 = (long *******)((long)ppppppplVar11 + 1);
      ppppppplVar20 = ppppppplVar1;
      ppppppplVar19 = (long *******)((long)ppppppplVar19 + 1);
    } while (uVar17 != 0);
    uVar17 = (long)ppppppplVar18 - (long)ppppppplVar23;
    if (ppppppplVar20 == ppppppplVar1) {
      uVar17 = 0xffffffffffffffff;
    }
  }
  lVar21 = -uVar2;
  pcVar22 = (char *)((long)ppppppplVar23 + uVar2);
  do {
    pcVar22 = pcVar22 + -1;
    if (lVar21 == 0) goto LAB_10a31b620;
    lVar21 = lVar21 + 1;
  } while (*pcVar22 != '\"');
  if ((uVar17 <= (ulong)-lVar21 && -uVar17 != lVar21) && (lVar21 != 1)) {
    ppppppplVar10 = &ppppppuStack_110;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (ppppppplVar10,&pppppplStack_180,uVar17 + 1,~uVar17 - lVar21,appppppuStack_128);
    pppppuStack_e8 = pppppuStack_108;
    ppppppuStack_f0 = ppppppuStack_110;
    pppppuStack_e0 = pppppuStack_100;
  }
LAB_10a31b620:
  func_0x00010ad03330();
  pppppplVar3 = ppppppplVar10[1];
  if (-1 < (char)*(byte *)((long)ppppppplVar10 + 0x17)) {
    pppppplVar3 = (long ******)(ulong)*(byte *)((long)ppppppplVar10 + 0x17);
  }
  FUN_10a003c90(appppppuStack_128,(long)pppppplVar3 + 1,auStack_d1);
  pppppppuVar4 = (undefined8 *******)appppppuStack_128[0];
  if (-1 < cStack_111) {
    pppppppuVar4 = appppppuStack_128;
  }
  if (pppppplVar3 != (long ******)0x0) {
    ppppppplVar23 = (long *******)*ppppppplVar10;
    if (-1 < *(char *)((long)ppppppplVar10 + 0x17)) {
      ppppppplVar23 = ppppppplVar10;
    }
    _memmove(pppppppuVar4,ppppppplVar23,pppppplVar3);
  }
  *(undefined2 *)((long)pppppppuVar4 + (long)pppppplVar3) = 0x2f;
  ppppppuVar5 = (undefined8 ******)pppppuStack_e8;
  pppppppuVar4 = (undefined8 *******)ppppppuStack_f0;
  if (-1 < (long)pppppuStack_e0) {
    ppppppuVar5 = (undefined8 ******)((ulong)pppppuStack_e0 >> 0x38);
    pppppppuVar4 = &ppppppuStack_f0;
  }
  pppppppuVar12 = appppppuStack_128;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar12,pppppppuVar4,ppppppuVar5);
  pppppuStack_108 = pppppppuVar12[1];
  ppppppuStack_110 = *pppppppuVar12;
  pppppuStack_100 = pppppppuVar12[2];
  pppppppuVar12[1] = (undefined8 ******)0x0;
  pppppppuVar12[2] = (undefined8 ******)0x0;
  *pppppppuVar12 = (undefined8 ******)0x0;
  FUN_10a31b404(&pppppplStack_198,ppuVar9,&ppppppuStack_110,1);
  if ((long)pppppuStack_100 < 0) {
    __ZdlPv(ppppppuStack_110);
  }
  if (cStack_111 < '\0') {
    __ZdlPv(appppppuStack_128[0]);
  }
  if ((long)uStack_170 < 0) {
    __ZdlPv(pppppplStack_180);
  }
  uStack_170 = uStack_188;
  uStack_178 = uStack_190;
  pppppplStack_180 = pppppplStack_198;
  uVar24 = uStack_188 >> 0x38;
LAB_10a31b72c:
  uVar17 = uStack_178;
  ppppppplVar23 = (long *******)pppppplStack_180;
  if (-1 < (char)uVar24) {
    uVar17 = uVar24 & 0xff;
    ppppppplVar23 = &pppppplStack_180;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (extraout_x8,ppppppplVar23,uVar17);
  if ((long)uStack_170 < 0) {
    __ZdlPv(pppppplStack_180);
  }
  if ((bStack_130 & 1) == 0) goto LAB_10a31b764;
  goto LAB_10a31b47c;
}



/* Entry: 10a31b404; end: 10a31b86b;  */

/* WARNING: Removing unreachable block (ram,0x00010a31b700) */

void FUN_10a31b404(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long *******ppppppplVar1;
  ulong uVar2;
  long ******pppppplVar3;
  undefined8 *******pppppppuVar4;
  undefined8 ******ppppppuVar5;
  code *pcVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  undefined8 *******pppppppuVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  long lVar16;
  char *pcVar17;
  long *******ppppppplVar18;
  ulong uVar19;
  long ******pppppplStack_138;
  ulong uStack_130;
  ulong uStack_128;
  long ******pppppplStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_100 [48];
  byte bStack_d0;
  undefined8 ******appppppuStack_c8 [2];
  char cStack_b1;
  undefined8 ******ppppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 *****pppppuStack_a0;
  undefined8 ******ppppppuStack_90;
  undefined8 *****pppppuStack_88;
  undefined8 *****pppppuStack_80;
  undefined1 auStack_71 [17];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar10 = 2;
  if (param_4 == 0) {
    uVar10 = 4;
  }
  FUN_10a0f1b8c(auStack_100,param_3,uVar10);
  if (bStack_d0 != 1) {
    FUN_10a31b86c(param_3);
    FUN_10a1b9340("",0,param_3,&UNK_10f64e60f);
LAB_10a31b764:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a31b768);
    (*pcVar6)();
  }
LAB_10a31b47c:
  FUN_10a0f2178(&pppppplStack_120,auStack_100);
  uVar12 = uStack_110;
  uVar19 = (ulong)uStack_110._7_1_;
  if ((long)uVar19 < 0) {
    uVar11 = uStack_118;
    ppppppplVar18 = (long *******)pppppplStack_120;
    if (uStack_118 == 0) {
      __ZdlPv(pppppplStack_120);
      goto LAB_10a31b770;
    }
  }
  else {
    if (uStack_110._7_1_ == '\0') {
LAB_10a31b770:
      if (bStack_d0 == 1) {
        FUN_10a0f1ea0(auStack_100);
      }
      return;
    }
    uVar11 = uVar19;
    ppppppplVar18 = &pppppplStack_120;
  }
  if (7 < (long)uVar11) {
    ppppppplVar1 = (long *******)((long)ppppppplVar18 + uVar11);
    ppppppplVar7 = ppppppplVar18;
    while (_memchr(ppppppplVar7,0x23,uVar11 - 7), ppppppplVar7 != (long *******)0x0) {
      if (*ppppppplVar7 == (long ******)0x6564756c636e6923) {
        if ((ppppppplVar7 != ppppppplVar1) &&
           (uVar11 = (long)ppppppplVar7 - (long)ppppppplVar18, uVar11 != 0xffffffffffffffff)) {
          uVar2 = uStack_118;
          ppppppplVar18 = (long *******)pppppplStack_120;
          if (-1 < (long)uVar12) {
            uVar2 = uVar19;
            ppppppplVar18 = &pppppplStack_120;
          }
          ppppppplVar1 = (long *******)((long)ppppppplVar18 + uVar2);
          uVar12 = uVar2;
          ppppppplVar8 = ppppppplVar18;
          goto joined_r0x00010a31b514;
        }
        break;
      }
      ppppppplVar7 = (long *******)((long)ppppppplVar7 + 1);
      uVar11 = (long)ppppppplVar1 - (long)ppppppplVar7;
      if ((long)uVar11 < 8) break;
    }
  }
  goto LAB_10a31b72c;
joined_r0x00010a31b514:
  if (((long)uVar12 < 2) ||
     (_memchr(ppppppplVar8,0x2f,uVar12 - 1), ppppppplVar7 = ppppppplVar8,
     ppppppplVar8 == (long *******)0x0)) goto LAB_10a31b568;
  if (*(short *)ppppppplVar8 != 0x2f2f) {
    ppppppplVar7 = (long *******)((long)ppppppplVar8 + 1);
    uVar12 = (long)ppppppplVar1 - (long)ppppppplVar7;
    ppppppplVar8 = ppppppplVar7;
    goto joined_r0x00010a31b514;
  }
  uVar12 = (long)ppppppplVar8 - (long)ppppppplVar18;
  if (ppppppplVar8 == ppppppplVar1) {
    uVar12 = 0xffffffffffffffff;
  }
  if (uVar12 != 0xffffffffffffffff && uVar12 <= uVar11) goto LAB_10a31b72c;
LAB_10a31b568:
  ppppppuStack_90 = (undefined8 *******)0x0;
  pppppuStack_88 = (undefined8 ******)0x0;
  pppppuStack_80 = (undefined8 ******)0x0;
  ppppppplVar8 = ppppppplVar18;
  ppppppplVar14 = ppppppplVar18;
  uVar12 = uVar2;
  if (uVar2 == 0) {
    uVar12 = 0xffffffffffffffff;
  }
  else {
    do {
      ppppppplVar13 = ppppppplVar8;
      ppppppplVar15 = ppppppplVar14;
      if (*(char *)ppppppplVar14 == '\"') break;
      uVar12 = uVar12 - 1;
      ppppppplVar13 = ppppppplVar1;
      ppppppplVar8 = (long *******)((long)ppppppplVar8 + 1);
      ppppppplVar15 = ppppppplVar1;
      ppppppplVar14 = (long *******)((long)ppppppplVar14 + 1);
    } while (uVar12 != 0);
    uVar12 = (long)ppppppplVar13 - (long)ppppppplVar18;
    if (ppppppplVar15 == ppppppplVar1) {
      uVar12 = 0xffffffffffffffff;
    }
  }
  lVar16 = -uVar2;
  pcVar17 = (char *)((long)ppppppplVar18 + uVar2);
  do {
    pcVar17 = pcVar17 + -1;
    if (lVar16 == 0) goto LAB_10a31b620;
    lVar16 = lVar16 + 1;
  } while (*pcVar17 != '\"');
  if ((uVar12 <= (ulong)-lVar16 && -uVar12 != lVar16) && (lVar16 != 1)) {
    ppppppplVar7 = &ppppppuStack_b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (ppppppplVar7,&pppppplStack_120,uVar12 + 1,~uVar12 - lVar16,appppppuStack_c8);
    pppppuStack_88 = pppppuStack_a8;
    ppppppuStack_90 = ppppppuStack_b0;
    pppppuStack_80 = pppppuStack_a0;
  }
LAB_10a31b620:
  func_0x00010ad03330();
  pppppplVar3 = ppppppplVar7[1];
  if (-1 < (char)*(byte *)((long)ppppppplVar7 + 0x17)) {
    pppppplVar3 = (long ******)(ulong)*(byte *)((long)ppppppplVar7 + 0x17);
  }
  FUN_10a003c90(appppppuStack_c8,(long)pppppplVar3 + 1,auStack_71);
  pppppppuVar4 = (undefined8 *******)appppppuStack_c8[0];
  if (-1 < cStack_b1) {
    pppppppuVar4 = appppppuStack_c8;
  }
  if (pppppplVar3 != (long ******)0x0) {
    ppppppplVar18 = (long *******)*ppppppplVar7;
    if (-1 < *(char *)((long)ppppppplVar7 + 0x17)) {
      ppppppplVar18 = ppppppplVar7;
    }
    _memmove(pppppppuVar4,ppppppplVar18,pppppplVar3);
  }
  *(undefined2 *)((long)pppppppuVar4 + (long)pppppplVar3) = 0x2f;
  ppppppuVar5 = (undefined8 ******)pppppuStack_88;
  pppppppuVar4 = (undefined8 *******)ppppppuStack_90;
  if (-1 < (long)pppppuStack_80) {
    ppppppuVar5 = (undefined8 ******)((ulong)pppppuStack_80 >> 0x38);
    pppppppuVar4 = &ppppppuStack_90;
  }
  pppppppuVar9 = appppppuStack_c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar9,pppppppuVar4,ppppppuVar5);
  pppppuStack_a8 = pppppppuVar9[1];
  ppppppuStack_b0 = *pppppppuVar9;
  pppppuStack_a0 = pppppppuVar9[2];
  pppppppuVar9[1] = (undefined8 ******)0x0;
  pppppppuVar9[2] = (undefined8 ******)0x0;
  *pppppppuVar9 = (undefined8 ******)0x0;
  FUN_10a31b404(&pppppplStack_138,param_2,&ppppppuStack_b0,1);
  if ((long)pppppuStack_a0 < 0) {
    __ZdlPv(ppppppuStack_b0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appppppuStack_c8[0]);
  }
  if ((long)uStack_110 < 0) {
    __ZdlPv(pppppplStack_120);
  }
  uStack_110 = uStack_128;
  uStack_118 = uStack_130;
  pppppplStack_120 = pppppplStack_138;
  uVar19 = uStack_128 >> 0x38;
LAB_10a31b72c:
  uVar12 = uStack_118;
  ppppppplVar18 = (long *******)pppppplStack_120;
  if (-1 < (char)uVar19) {
    uVar12 = uVar19 & 0xff;
    ppppppplVar18 = &pppppplStack_120;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,ppppppplVar18,uVar12);
  if ((long)uStack_110 < 0) {
    __ZdlPv(pppppplStack_120);
  }
  if ((bStack_d0 & 1) == 0) goto LAB_10a31b764;
  goto LAB_10a31b47c;
}



/* Entry: 10a31b86c; end: 10a31ba0b;  */

undefined * FUN_10a31b86c(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [1024];
  long lStack_70;
  
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar1 = param_1;
  }
  FUN_10ae03140(0,puVar1,uVar3);
  ppuVar7 = &PTR_PTR_113301578;
  ppuVar6 = ppuVar7;
  FUN_10ae079a0();
  FUN_10ae0314c();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined *)0x0;
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar6[0x13],ppuVar6[0xf],
                  ppuVar6 + 0x14,0x400);
    puStack_918 = puStack_890;
    uStack_910 = uStack_888;
    puStack_900 = puStack_8a8;
    uStack_8f8 = uStack_8a0;
    uStack_908 = uStack_880;
    if (iStack_878 != 0) {
      puStack_918 = &UNK_10f6c352e;
      uStack_910 = 0x10;
      puStack_900 = &UNK_10f6c352e;
      uStack_8f8 = 0x10;
      uStack_908 = 0;
      uStack_898 = 0;
    }
    puVar9 = ppuVar6[0x12];
    puVar8 = ppuVar6[0xb];
    uVar2 = 0;
    _clock_gettime_nsec_np();
    uVar3 = uVar2;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar6 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar6 + 0xe);
    uStack_8c0 = uVar3 & 0xffffffff;
    ppuStack_8b0 = ppuVar6 + 0x10;
    puVar4 = *ppuVar6;
    ppuVar7 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar8;
    puStack_8d8 = puVar9;
    uStack_8d0 = (ulong)(puVar9 != (undefined *)0x0);
    uStack_8c8 = uVar2;
    FUN_10ae0784c(puVar4,ppuVar7,&puStack_900,&puStack_918);
  }
  iVar5 = (int)ppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar4);
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10a31ba0c; end: 10a31ba87;  */

undefined8 FUN_10a31ba0c(undefined8 param_1,undefined8 param_2)

{
  int iStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  _glCreateShader(param_2);
  _glShaderSource();
  _glCompileShader(param_2);
  iStack_2c = 0;
  _glGetShaderiv(param_2,0x8b81,&iStack_2c);
  if (iStack_2c == 0) {
    func_0x00010a31b8e8(param_2);
    _glDeleteShader(param_2);
    param_2 = 0;
  }
  return param_2;
}



/* Entry: 10a31ba88; end: 10a31baa3;  */

void FUN_10a31ba88(void)

{
  return;
}



/* Entry: 10a31baa4; end: 10a31baeb;  */

void FUN_10a31baa4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *param_2;
  (**(code **)*puVar1)(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010a31bae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x10))(puVar1,param_2 + 1);
  return;
}



/* Entry: 10a31baec; end: 10a31bafb;  */

undefined1 FUN_10a31baec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x69);
}



/* Entry: 10a31bafc; end: 10a31bb93;  */

undefined8 * FUN_10a31bafc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc38c0;
  func_0x00010a045fb4(param_1 + 10);
  *param_1 = &PTR_FUN_110bc3858;
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 10a31bb94; end: 10a31bbaf;  */

undefined1 FUN_10a31bb94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



/* Entry: 10a31bbb0; end: 10a31bbc3;  */

void FUN_10a31bbb0(void)

{
  func_0x00010a321bc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a31bbc4; end: 10a31bbe3;  */

undefined1 FUN_10a31bbc4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc0);
}



/* Entry: 10a31bbe4; end: 10a31bbf7;  */

void FUN_10a31bbe4(void)

{
  FUN_10a32180c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a31bbf8; end: 10a31bc67;  */

void FUN_10a31bbf8(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a0ca600(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a31bc68; end: 10a31bca3;  */

long FUN_10a31bc68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  __ZSt19uncaught_exceptionsv();
  FUN_10a31bf24((int)lVar1 == 0,param_1,*(undefined8 *)(param_1 + 0x10),
                *(undefined4 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 10a31bca4; end: 10a31bdc3;  */

void FUN_10a31bca4(uint param_1)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined **ppuVar5;
  
  uVar3 = param_1;
  FUN_10ad4bc5c();
  if (uVar3 != 0) {
    FUN_10a185264(&pppuStack_58,0x400);
    pcStack_68 = "";
    uStack_60 = 0;
    FUN_10a304b28(&pppuStack_58,&pcStack_68);
    ppppuVar1 = (undefined8 ****)pppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppppuVar1 = &pppuStack_58;
    }
    FUN_10ae03140(0,ppppuVar1,uStack_50);
    ppuVar5 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113300cb8);
    iVar4 = (int)ppuVar5;
    if ((param_1 != 0) && (__ZSt19uncaught_exceptionsv(), iVar4 == 0)) {
      if ((uVar3 >> 5 & 1) == 0) {
        FUN_10a0029c0(&pppuStack_58);
      }
      else {
        FUN_10a31bdc4(&pppuStack_58);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a31bda4);
      (*pcVar2)();
    }
    if ((char)bStack_41 < '\0') {
      __ZdlPv(pppuStack_58);
    }
  }
  return;
}



/* Entry: 10a31bdc4; end: 10a31be8f;  */

void FUN_10a31bdc4(undefined8 param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_258 [264];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [264];
  char cStack_38;
  
  FUN_10a31be94(auStack_150,param_1);
  func_0x00010a0ec6dc(auStack_258,1);
  if (cStack_38 == '\x01') {
    _memcpy(auStack_140,auStack_258,0x104);
  }
  else {
    _memcpy(auStack_140,auStack_258,0x108);
    cStack_38 = '\x01';
  }
  puVar2 = (undefined8 *)0x120;
  ___cxa_allocate_exception();
  puVar3 = puVar2;
  __ZNSt13runtime_errorC2ERKS_();
  *puVar3 = &PTR_FUN_110b99e98;
  _memcpy(puVar3 + 2,auStack_140,0x110);
  *puVar2 = &PTR_FUN_110bc4628;
  ___cxa_throw(puVar2,&PTR_DAT_110bc4600,FUN_10a31be90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a31be78);
  (*pcVar1)();
}



/* Entry: 10a31be90; end: 10a31be93;  */

void FUN_10a31be90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10a31be94; end: 10a31bf0f;  */

undefined8 * FUN_10a31be94(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f64e79f);
  FUN_10a1ba7f0(param_1,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = &PTR_FUN_110bc4628;
  return param_1;
}



/* Entry: 10a31bf10; end: 10a31bf23;  */

void FUN_10a31bf10(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a31bf24; end: 10a31c043;  */

void FUN_10a31bf24(uint param_1,undefined8 *param_2)

{
  undefined8 ****ppppuVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  undefined **ppuVar5;
  
  uVar3 = param_1;
  FUN_10ad4bc5c();
  if (uVar3 != 0) {
    FUN_10a185264(&pppuStack_58,0x400);
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    FUN_10a304b28(&pppuStack_58,&uStack_70);
    ppppuVar1 = (undefined8 ****)pppuStack_58;
    if (-1 < (char)bStack_41) {
      uStack_50 = (ulong)bStack_41;
      ppppuVar1 = &pppuStack_58;
    }
    FUN_10ae03140(0,ppppuVar1,uStack_50);
    ppuVar5 = &PTR_PTR_113300cb8;
    FUN_10ae079a0();
    FUN_10ae0314c();
    FUN_10ae07cd4(ppuVar5,&PTR_PTR_113300cb8);
    iVar4 = (int)ppuVar5;
    if ((param_1 != 0) && (__ZSt19uncaught_exceptionsv(), iVar4 == 0)) {
      if ((uVar3 >> 5 & 1) == 0) {
        FUN_10a0029c0(&pppuStack_58);
      }
      else {
        FUN_10a31bdc4(&pppuStack_58);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a31c024);
      (*pcVar2)();
    }
    if ((char)bStack_41 < '\0') {
      __ZdlPv(pppuStack_58);
    }
  }
  return;
}



/* Entry: 10a31c044; end: 10a31c0eb;  */

void FUN_10a31c044(undefined8 *param_1)

{
  long *plVar1;
  
  *(undefined8 *)((long)param_1 + 0xa4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x9c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x94) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x8c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x84) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x7c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x74) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x6c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  param_1[1] = 0xffffffffffffffff;
  *param_1 = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  param_1[5] = 0xffffffffffffffff;
  param_1[4] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x34) = 0xff000000ff;
  *(undefined8 *)((long)param_1 + 0x3c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x4c) = 0xff000000ff;
  *(undefined8 *)((long)param_1 + 100) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x54) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x7f7fffff;
  *(undefined8 *)((long)param_1 + 0xec) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x21) = 0x2020202;
  param_1[0x1f] = 0x202020202020202;
  param_1[0x20] = 0x202020202020202;
  *(undefined4 *)((long)param_1 + 0x13b) = 0x2020202;
  *(undefined4 *)(param_1 + 0x27) = 0x2020202;
  for (plVar1 = (long *)param_1[0x24]; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    *(undefined1 *)((long)plVar1 + 0x14) = 2;
  }
  return;
}



/* Entry: 10a31c0ec; end: 10a31c133;  */

long * FUN_10a31c0ec(long *param_1)

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



/* Entry: 10a31c134; end: 10a31c19b;  */

undefined4 FUN_10a31c134(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x506;
  if (param_1 != 0x40) {
    uVar3 = 0;
  }
  uVar2 = 0x505;
  if (param_1 != 0x20) {
    uVar2 = uVar3;
  }
  uVar3 = 0x504;
  if (param_1 != 0x10) {
    uVar3 = 0;
  }
  uVar1 = 0x503;
  if (param_1 != 8) {
    uVar1 = uVar3;
  }
  if (param_1 < 0x20) {
    uVar2 = uVar1;
  }
  uVar3 = 0x502;
  if (param_1 != 4) {
    uVar3 = 0;
  }
  uVar1 = 0x501;
  if (param_1 != 2) {
    uVar1 = uVar3;
  }
  uVar3 = 0x500;
  if (param_1 != 1) {
    uVar3 = uVar1;
  }
  if (param_1 < 8) {
    uVar2 = uVar3;
  }
  return uVar2;
}



/* Entry: 10a31c19c; end: 10a31c477;  */

void FUN_10a31c19c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lStack_68;
  
  if (*(char *)(param_1 + 0x60) != '\x04') {
    uVar2 = (ulong)*(char *)(param_1 + 0xaf);
    if ((long)uVar2 < 0) {
      plVar1 = *(long **)(param_1 + 0x98);
      uVar2 = *(ulong *)(param_1 + 0xa0);
    }
    else {
      plVar1 = (long *)(param_1 + 0x98);
    }
    uVar6 = (ulong)*(char *)(param_1 + 199);
    if ((long)uVar6 < 0) {
      plVar4 = *(long **)(param_1 + 0xb0);
      uVar6 = *(ulong *)(param_1 + 0xb8);
    }
    else {
      plVar4 = (long *)(param_1 + 0xb0);
    }
    uVar3 = uVar2 >> 3;
    if (((ulong)plVar1 & 7) == 0) {
      if (uVar2 < 8) goto LAB_10a31c294;
      uVar7 = 0;
      plVar5 = plVar1;
      do {
        uVar7 = uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) + *plVar5 ^ uVar7;
        uVar3 = uVar3 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar3 != 0);
    }
    else if (uVar2 < 8) {
LAB_10a31c294:
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      plVar5 = plVar1;
      do {
        uVar7 = uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) + *plVar5 ^ uVar7;
        uVar3 = uVar3 - 1;
        plVar5 = plVar5 + 1;
      } while (uVar3 != 0);
    }
    uVar8 = *(uint *)(param_1 + 0x148);
    lStack_68 = 0;
    if ((uVar2 & 7) == 0) {
      lVar9 = 0;
    }
    else {
      _memcpy(&lStack_68,(long)plVar1 + (uVar2 - (uVar2 & 7)));
      lVar9 = lStack_68;
    }
    uVar3 = uVar6 >> 3;
    if (((ulong)plVar4 & 7) == 0) {
      if (uVar6 < 8) goto LAB_10a31c3a4;
      uVar10 = 0;
      plVar1 = plVar4;
      do {
        uVar10 = uVar10 * 0x40 + 0x9e3779b9 + (uVar10 >> 2) + *plVar1 ^ uVar10;
        uVar3 = uVar3 - 1;
        plVar1 = plVar1 + 1;
      } while (uVar3 != 0);
    }
    else if (uVar6 < 8) {
LAB_10a31c3a4:
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      plVar1 = plVar4;
      do {
        uVar10 = uVar10 * 0x40 + 0x9e3779b9 + (uVar10 >> 2) + *plVar1 ^ uVar10;
        uVar3 = uVar3 - 1;
        plVar1 = plVar1 + 1;
      } while (uVar3 != 0);
    }
    lStack_68 = 0;
    if ((uVar6 & 7) == 0) {
      lStack_68 = 0;
    }
    else {
      _memcpy(&lStack_68,(long)plVar4 + (uVar6 - (uVar6 & 7)));
    }
    uVar7 = uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) + lVar9 ^ uVar7;
    uVar7 = uVar2 + 0x9e3779b9 + uVar7 * 0x40 + (uVar7 >> 2) ^ uVar7;
    uVar10 = uVar10 * 0x40 + 0x9e3779b9 + (uVar10 >> 2) + lStack_68 ^ uVar10;
    uVar7 = uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) +
            (uVar6 + 0x9e3779b9 + uVar10 * 0x40 + (uVar10 >> 2) ^ uVar10) ^ uVar7;
    uVar6 = uVar6 + uVar2;
    goto LAB_10a31c44c;
  }
  plVar1 = *(long **)(param_1 + 0x68);
  uVar6 = *(long *)(param_1 + 0x70) - (long)plVar1;
  uVar2 = uVar6 >> 3;
  if (((ulong)plVar1 & 7) == 0) {
    if (uVar6 < 8) goto LAB_10a31c230;
    uVar7 = 0;
    plVar4 = plVar1;
    do {
      uVar7 = uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) + *plVar4 ^ uVar7;
      uVar2 = uVar2 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar2 != 0);
  }
  else if (uVar6 < 8) {
LAB_10a31c230:
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    plVar4 = plVar1;
    do {
      uVar7 = uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) + *plVar4 ^ uVar7;
      uVar2 = uVar2 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar2 != 0);
  }
  uVar8 = *(uint *)(param_1 + 0x148);
  lStack_68 = 0;
  if ((uVar6 & 7) == 0) {
    lStack_68 = 0;
  }
  else {
    _memcpy(&lStack_68,(long)plVar1 + (uVar6 - (uVar6 & 7)));
  }
  uVar7 = uVar7 * 0x40 + 0x9e3779b9 + (uVar7 >> 2) + lStack_68 ^ uVar7;
  uVar7 = uVar6 + 0x9e3779b9 + uVar7 * 0x40 + (uVar7 >> 2) ^ uVar7;
LAB_10a31c44c:
  *(ulong *)(param_1 + 0x20) = uVar7;
  *(ulong *)(param_1 + 0x28) = uVar6;
  *(uint *)(param_1 + 0x30) = uVar8 & 0xfffffffe;
  return;
}



/* Entry: 10a31c478; end: 10a31c62b;  */

undefined ** FUN_10a31c478(undefined **param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_1 + 5;
  FUN_10a31cdcc();
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar7 = ppuVar3 + 5;
    plVar4 = (long *)0x28;
    __Znwm();
    lVar8 = *param_2;
    plVar4[3] = param_2[1];
    plVar4[2] = lVar8;
    plVar4[4] = param_2[2];
    ppuVar5 = param_1 + 2;
    puVar6 = *ppuVar5;
    *plVar4 = (long)puVar6;
    plVar4[1] = (long)ppuVar5;
    *(long **)(puVar6 + 8) = plVar4;
    *ppuVar5 = (undefined *)plVar4;
    param_1[4] = param_1[4] + 1;
    lStack_78 = 0x10a31ce8c;
    ppuStack_70 = &PTR_DAT_110bc3c98;
    ppuStack_68 = param_1;
    plStack_60 = plVar4;
    func_0x00010a108320(ppuVar3 + 7,&lStack_78);
    FUN_10a044790(&lStack_78);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
LAB_10a31c5ec:
      ppuVar3 = param_1;
      ___cxa_guard_acquire();
      if ((int)ppuVar3 != 0) {
        param_1[8] = (undefined *)0x0;
        ppuVar7 = param_1 + 7;
        *ppuVar7 = (undefined *)0x0;
        ___cxa_guard_release(param_1);
      }
LAB_10a31c5ac:
      param_1 = ppuStack_70;
      if (ppuStack_70 != (undefined **)0x0) {
        ppuVar3 = ppuStack_70 + 1;
        do {
          puVar6 = *ppuVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar2) {
            *ppuVar3 = puVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (puVar6 == (undefined *)0x0) {
          (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
        }
      }
    }
    return ppuVar7;
  }
  (**(code **)(*param_1 + 0x18))(&lStack_78,param_1,param_2);
  if (lStack_78 != 0) {
    FUN_10a31c62c(param_1,param_2,&lStack_78);
    ppuVar7 = param_1 + 5;
    goto LAB_10a31c5ac;
  }
  param_1 = (undefined **)0x1137eaed8;
  ppuVar7 = (undefined **)0x1137eaf10;
  if ((bRam00000001137eaed8 & 1) == 0) goto LAB_10a31c5ec;
  goto LAB_10a31c5ac;
}



/* Entry: 10a31c62c; end: 10a31cdcb;  */

long * FUN_10a31c62c(undefined *param_1,ulong *param_2,long *param_3)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long lStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = *param_3;
  if (lVar23 == 0) {
    FUN_10a00946c(&UNK_10f64048f);
LAB_10a31cd84:
    ___stack_chk_fail();
  }
  else {
    plVar20 = (long *)(param_1 + 0x28);
    FUN_10a31cdcc();
    if (plVar20 == (long *)0x0) {
      ppuStack_b0 = (undefined **)param_3[1];
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar5 = ppuStack_b0 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
          if (bVar3) {
            *ppuVar5 = *ppuVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_1053a6a3c;
      ppuStack_a0 = &PTR_DAT_110ae9180;
      plVar21 = (long *)*param_2;
      plVar7 = *(long **)(param_1 + 0x30);
      lStack_b8 = lVar23;
      if (plVar7 != (long *)0x0) {
        uVar8 = (long)plVar7 - 1;
        if (((ulong)plVar7 & uVar8) == 0) {
          param_3 = (long *)(uVar8 & (ulong)plVar21);
        }
        else {
          param_3 = plVar21;
          if (plVar7 <= plVar21) {
            uVar22 = 0;
            if (plVar7 != (long *)0x0) {
              uVar22 = (ulong)plVar21 / (ulong)plVar7;
            }
            param_3 = (long *)((long)plVar21 - uVar22 * (long)plVar7);
          }
        }
        puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x28) + (long)param_3 * 8);
        if ((puVar10 != (undefined8 *)0x0) && (plVar20 = (long *)*puVar10, plVar20 != (long *)0x0))
        {
          do {
            plVar13 = (long *)plVar20[1];
            if (plVar13 == plVar21) {
              if ((((long *)plVar20[2] == plVar21) && (plVar20[3] == param_2[1])) &&
                 ((int)plVar20[4] == (int)param_2[2])) goto LAB_10a31cae8;
            }
            else {
              if (((ulong)plVar7 & uVar8) == 0) {
                plVar13 = (long *)((ulong)plVar13 & uVar8);
              }
              else if (plVar7 <= plVar13) {
                uVar22 = 0;
                if (plVar7 != (long *)0x0) {
                  uVar22 = (ulong)plVar13 / (ulong)plVar7;
                }
                plVar13 = (long *)((long)plVar13 - uVar22 * (long)plVar7);
              }
              if (plVar13 != param_3) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
      plVar20 = (long *)0x78;
      __Znwm();
      ppuVar5 = ppuStack_b0;
      *plVar20 = 0;
      plVar20[1] = (long)plVar21;
      uVar8 = *param_2;
      plVar20[3] = param_2[1];
      plVar20[2] = uVar8;
      plVar20[4] = param_2[2];
      plVar20[5] = lVar23;
      lStack_b8 = 0;
      ppuStack_b0 = (undefined **)0x0;
      plVar20[6] = (long)ppuVar5;
      plVar20[7] = (long)&UNK_1053a6a3c;
      plVar20[8] = (long)&PTR_DAT_110ae9180;
      puStack_a8 = &UNK_1053a6a3c;
      ppuStack_a0 = &PTR_DAT_110ae9180;
      if ((plVar7 == (long *)0x0) ||
         (*(float *)(param_1 + 0x4c) * (float)plVar7 < (float)(*(long *)(param_1 + 0x40) + 1))) {
        uVar8 = 1;
        if ((long *)0x2 < plVar7) {
          uVar8 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
        }
        plVar13 = (long *)(uVar8 | (long)plVar7 << 1);
        plVar11 = (long *)(long)((float)(*(long *)(param_1 + 0x40) + 1) / *(float *)(param_1 + 0x4c)
                                );
        if (plVar13 <= plVar11) {
          plVar13 = plVar11;
        }
        if ((long)plVar13 - 1U == 0) {
          plVar13 = (long *)0x2;
        }
        else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar7 = *(long **)(param_1 + 0x30);
        }
        if (plVar7 < plVar13) {
LAB_10a31c8fc:
          if ((ulong)plVar13 >> 0x3d != 0) goto LAB_10a31cd94;
          lVar23 = (long)plVar13 << 3;
          __Znwm();
          lVar6 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar23;
          if (lVar6 != 0) {
            __ZdlPv();
          }
          plVar7 = (long *)0x0;
          *(long **)(param_1 + 0x30) = plVar13;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)plVar7 * 8) = 0;
            plVar7 = (long *)((long)plVar7 + 1);
          } while (plVar13 != plVar7);
          plVar11 = *(long **)(param_1 + 0x38);
          plVar7 = plVar13;
          if (plVar11 != (long *)0x0) {
            plVar12 = (long *)plVar11[1];
            uVar8 = (long)plVar13 - 1;
            if (((ulong)plVar13 & uVar8) == 0) {
              plVar12 = (long *)((ulong)plVar12 & uVar8);
            }
            else if (plVar13 <= plVar12) {
              uVar22 = 0;
              if (plVar13 != (long *)0x0) {
                uVar22 = (ulong)plVar12 / (ulong)plVar13;
              }
              plVar12 = (long *)((long)plVar12 - uVar22 * (long)plVar13);
            }
            *(undefined **)(*(long *)(param_1 + 0x28) + (long)plVar12 * 8) = param_1 + 0x38;
            plVar14 = (long *)*plVar11;
            while (plVar14 != (long *)0x0) {
              plVar16 = (long *)plVar14[1];
              if (((ulong)plVar13 & uVar8) == 0) {
                plVar16 = (long *)((ulong)plVar16 & uVar8);
              }
              else if (plVar13 <= plVar16) {
                uVar22 = 0;
                if (plVar13 != (long *)0x0) {
                  uVar22 = (ulong)plVar16 / (ulong)plVar13;
                }
                plVar16 = (long *)((long)plVar16 - uVar22 * (long)plVar13);
              }
              plVar15 = plVar14;
              if (plVar16 != plVar12) {
                lVar23 = *(long *)(param_1 + 0x28);
                if (*(long *)(lVar23 + (long)plVar16 * 8) == 0) {
                  *(long **)(lVar23 + (long)plVar16 * 8) = plVar11;
                  plVar12 = plVar16;
                }
                else {
                  *plVar11 = *plVar14;
                  *plVar14 = **(undefined8 **)(lVar23 + (long)plVar16 * 8);
                  **(long **)(lVar23 + (long)plVar16 * 8) = (long)plVar14;
                  plVar15 = plVar11;
                }
              }
              plVar11 = plVar15;
              plVar14 = (long *)*plVar15;
            }
          }
        }
        else if (plVar13 < plVar7) {
          plVar11 = (long *)(long)((float)*(ulong *)(param_1 + 0x40) / *(float *)(param_1 + 0x4c));
          if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar11) {
            plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 - 1) & 0x3fU));
          }
          if (plVar13 <= plVar11) {
            plVar13 = plVar11;
          }
          if (plVar13 < plVar7) {
            if (plVar13 != (long *)0x0) goto LAB_10a31c8fc;
            lVar23 = *(long *)(param_1 + 0x28);
            *(undefined8 *)(param_1 + 0x28) = 0;
            if (lVar23 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(param_1 + 0x30) = 0;
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = *(long **)(param_1 + 0x30);
          }
        }
        if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
          param_3 = (long *)((long)plVar7 - 1U & (ulong)plVar21);
        }
        else {
          param_3 = plVar21;
          if (plVar7 <= plVar21) {
            uVar8 = 0;
            if (plVar7 != (long *)0x0) {
              uVar8 = (ulong)plVar21 / (ulong)plVar7;
            }
            param_3 = (long *)((long)plVar21 - uVar8 * (long)plVar7);
          }
        }
      }
      lVar23 = *(long *)(param_1 + 0x28);
      plVar21 = *(long **)(lVar23 + (long)param_3 * 8);
      if (plVar21 == (long *)0x0) {
        plVar21 = (long *)(param_1 + 0x38);
        *plVar20 = *plVar21;
        *plVar21 = (long)plVar20;
        *(long **)(lVar23 + (long)param_3 * 8) = plVar21;
        if (*plVar20 != 0) {
          plVar21 = *(long **)(*plVar20 + 8);
          if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
            plVar21 = (long *)((ulong)plVar21 & (long)plVar7 - 1U);
          }
          else if (plVar7 <= plVar21) {
            uVar8 = 0;
            if (plVar7 != (long *)0x0) {
              uVar8 = (ulong)plVar21 / (ulong)plVar7;
            }
            plVar21 = (long *)((long)plVar21 - uVar8 * (long)plVar7);
          }
          *(long **)(*(long *)(param_1 + 0x28) + (long)plVar21 * 8) = plVar20;
        }
      }
      else {
        *plVar20 = *plVar21;
        *plVar21 = (long)plVar20;
      }
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
LAB_10a31cae8:
      FUN_10a044790(&puStack_a8);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      ppuVar5 = ppuStack_b0;
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar1 = ppuStack_b0 + 1;
        do {
          puVar9 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = puVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar9 == (undefined *)0x0) {
          (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
        }
      }
      ppuVar5 = (undefined **)0x28;
      __Znwm();
      plVar7 = (long *)(param_1 + 0x10);
      puVar9 = (undefined *)*param_2;
      ppuVar5[3] = (undefined *)param_2[1];
      ppuVar5[2] = puVar9;
      ppuVar5[4] = (undefined *)param_2[2];
      puVar9 = (undefined *)*plVar7;
      *ppuVar5 = puVar9;
      ppuVar5[1] = (undefined *)plVar7;
      *(undefined ***)(puVar9 + 8) = ppuVar5;
      *plVar7 = (long)ppuVar5;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      lStack_b8 = 0x10a31ce8c;
      ppuStack_b0 = &PTR_DAT_110bc3c98;
      puStack_a8 = param_1;
      ppuStack_a0 = ppuVar5;
      func_0x00010a108320(plVar20 + 7,&lStack_b8);
      FUN_10a044790(&lStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      uVar8 = *(ulong *)(param_1 + 0x20);
      uVar22 = (ulong)*(uint *)(param_1 + 8);
      if (uVar22 < uVar8) {
        do {
          plVar7 = (long *)(param_1 + 0x28);
          FUN_10a31cdcc(plVar7,*(long *)(param_1 + 0x18) + 0x10);
          if (plVar7 != (long *)0x0) {
            uVar22 = *(ulong *)(param_1 + 0x30);
            uVar8 = plVar7[1];
            uVar17 = uVar22 - 1;
            if ((uVar22 & uVar17) == 0) {
              uVar8 = uVar17 & uVar8;
            }
            else if (uVar22 <= uVar8) {
              uVar18 = 0;
              if (uVar22 != 0) {
                uVar18 = uVar8 / uVar22;
              }
              uVar8 = uVar8 - uVar18 * uVar22;
            }
            lVar23 = *plVar7;
            plVar21 = *(long **)(*(long *)(param_1 + 0x28) + uVar8 * 8);
            do {
              plVar13 = plVar21;
              plVar21 = (long *)*plVar13;
            } while ((long *)*plVar13 != plVar7);
            if (plVar13 == (long *)(param_1 + 0x38)) {
LAB_10a31cc5c:
              if (lVar23 == 0) {
LAB_10a31cc90:
                *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar8 * 8) = 0;
                lVar23 = *plVar7;
                goto LAB_10a31cc98;
              }
              uVar18 = *(ulong *)(lVar23 + 8);
              if ((uVar22 & uVar17) == 0) {
                uVar19 = uVar18 & uVar17;
              }
              else {
                uVar19 = uVar18;
                if (uVar22 <= uVar18) {
                  uVar19 = 0;
                  if (uVar22 != 0) {
                    uVar19 = uVar18 / uVar22;
                  }
                  uVar19 = uVar18 - uVar19 * uVar22;
                }
              }
              if (uVar19 != uVar8) goto LAB_10a31cc90;
LAB_10a31cca0:
              if ((uVar22 & uVar17) == 0) {
                uVar18 = uVar18 & uVar17;
              }
              else if (uVar22 <= uVar18) {
                uVar17 = 0;
                if (uVar22 != 0) {
                  uVar17 = uVar18 / uVar22;
                }
                uVar18 = uVar18 - uVar17 * uVar22;
              }
              if (uVar18 != uVar8) {
                *(long **)(*(long *)(param_1 + 0x28) + uVar18 * 8) = plVar13;
                lVar23 = *plVar7;
              }
            }
            else {
              uVar18 = plVar13[1];
              if ((uVar22 & uVar17) == 0) {
                uVar18 = uVar18 & uVar17;
              }
              else if (uVar22 <= uVar18) {
                uVar19 = 0;
                if (uVar22 != 0) {
                  uVar19 = uVar18 / uVar22;
                }
                uVar18 = uVar18 - uVar19 * uVar22;
              }
              if (uVar18 != uVar8) goto LAB_10a31cc5c;
LAB_10a31cc98:
              if (lVar23 != 0) {
                uVar18 = *(ulong *)(lVar23 + 8);
                goto LAB_10a31cca0;
              }
            }
            *plVar13 = lVar23;
            *plVar7 = 0;
            *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
            func_0x00010a31cf10(1);
            uVar8 = *(ulong *)(param_1 + 0x20);
            uVar22 = (ulong)*(uint *)(param_1 + 8);
          }
        } while (uVar22 < uVar8);
      }
LAB_10a31cd00:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return plVar20;
      }
      goto LAB_10a31cd84;
    }
    if (param_1[0x50] != '\x01') {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6404ef,&UNK_10f64e8ba,0x91,&UNK_10f64071c);
      }
      func_0x00010a306a20(plVar20 + 5,param_3);
      ppuVar5 = (undefined **)0x28;
      __Znwm();
      puVar9 = (undefined *)*param_2;
      ppuVar5[3] = (undefined *)param_2[1];
      ppuVar5[2] = puVar9;
      ppuVar5[4] = (undefined *)param_2[2];
      plVar7 = (long *)(param_1 + 0x10);
      puVar9 = (undefined *)*plVar7;
      *ppuVar5 = puVar9;
      ppuVar5[1] = (undefined *)plVar7;
      *(undefined ***)(puVar9 + 8) = ppuVar5;
      *plVar7 = (long)ppuVar5;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      lStack_b8 = 0x10a31ce8c;
      ppuStack_b0 = &PTR_DAT_110bc3c98;
      puStack_a8 = param_1;
      ppuStack_a0 = ppuVar5;
      func_0x00010a108320(plVar20 + 7,&lStack_b8);
      FUN_10a044790(&lStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      goto LAB_10a31cd00;
    }
  }
  FUN_10a00946c(&UNK_10f6404c1);
LAB_10a31cd94:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a31cd9c);
  (*pcVar4)();
}



/* Entry: 10a31cdcc; end: 10a31ced7;  */

long * FUN_10a31cdcc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar3) {
            if (((plVar6[2] == uVar3) && (plVar6[3] == param_2[1])) &&
               ((int)plVar6[4] == (int)param_2[2])) {
              return plVar6;
            }
          }
          else {
            if ((uVar2 & uVar4) == 0) {
              uVar7 = uVar7 & uVar4;
            }
            else if (uVar2 <= uVar7) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar7 / uVar2;
              }
              uVar7 = uVar7 - uVar1 * uVar2;
            }
            if (uVar7 != uVar5) {
              return (long *)0x0;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}



/* Entry: 10a31ced8; end: 10a31cf57;  */

long FUN_10a31ced8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a044790(param_1 + 0x10);
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
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



/* Entry: 10a31cf58; end: 10a31d10b;  */

undefined ** FUN_10a31cf58(undefined **param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = param_1 + 5;
  FUN_10a31d8ac();
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar7 = ppuVar3 + 5;
    plVar4 = (long *)0x28;
    __Znwm();
    lVar8 = *param_2;
    plVar4[3] = param_2[1];
    plVar4[2] = lVar8;
    plVar4[4] = param_2[2];
    ppuVar5 = param_1 + 2;
    puVar6 = *ppuVar5;
    *plVar4 = (long)puVar6;
    plVar4[1] = (long)ppuVar5;
    *(long **)(puVar6 + 8) = plVar4;
    *ppuVar5 = (undefined *)plVar4;
    param_1[4] = param_1[4] + 1;
    lStack_78 = 0x10a31d96c;
    ppuStack_70 = &PTR_DAT_110bc3cb0;
    ppuStack_68 = param_1;
    plStack_60 = plVar4;
    func_0x00010a108320(ppuVar3 + 7,&lStack_78);
    FUN_10a044790(&lStack_78);
    (*(code *)*ppuStack_70)(&ppuStack_70);
    while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
LAB_10a31d0cc:
      ppuVar3 = param_1;
      ___cxa_guard_acquire();
      if ((int)ppuVar3 != 0) {
        param_1[9] = (undefined *)0x0;
        ppuVar7 = param_1 + 8;
        *ppuVar7 = (undefined *)0x0;
        ___cxa_guard_release(param_1);
      }
LAB_10a31d08c:
      param_1 = ppuStack_70;
      if (ppuStack_70 != (undefined **)0x0) {
        ppuVar3 = ppuStack_70 + 1;
        do {
          puVar6 = *ppuVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
          if (bVar2) {
            *ppuVar3 = puVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (puVar6 == (undefined *)0x0) {
          (**(code **)(*ppuStack_70 + 0x10))(ppuStack_70);
          __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
        }
      }
    }
    return ppuVar7;
  }
  (**(code **)(*param_1 + 0x18))(&lStack_78,param_1,param_2);
  if (lStack_78 != 0) {
    FUN_10a31d10c(param_1,param_2,&lStack_78);
    ppuVar7 = param_1 + 5;
    goto LAB_10a31d08c;
  }
  param_1 = (undefined **)0x1137eaee0;
  ppuVar7 = (undefined **)0x1137eaf20;
  if ((bRam00000001137eaee0 & 1) == 0) goto LAB_10a31d0cc;
  goto LAB_10a31d08c;
}



/* Entry: 10a31d10c; end: 10a31d8ab;  */

long * FUN_10a31d10c(undefined *param_1,ulong *param_2,long *param_3)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long lStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = *param_3;
  if (lVar23 == 0) {
    FUN_10a00946c(&UNK_10f64048f);
LAB_10a31d864:
    ___stack_chk_fail();
  }
  else {
    plVar20 = (long *)(param_1 + 0x28);
    FUN_10a31d8ac();
    if (plVar20 == (long *)0x0) {
      ppuStack_b0 = (undefined **)param_3[1];
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar5 = ppuStack_b0 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
          if (bVar3) {
            *ppuVar5 = *ppuVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      puStack_a8 = &UNK_1053a6a3c;
      ppuStack_a0 = &PTR_DAT_110ae9180;
      plVar21 = (long *)*param_2;
      plVar7 = *(long **)(param_1 + 0x30);
      lStack_b8 = lVar23;
      if (plVar7 != (long *)0x0) {
        uVar8 = (long)plVar7 - 1;
        if (((ulong)plVar7 & uVar8) == 0) {
          param_3 = (long *)(uVar8 & (ulong)plVar21);
        }
        else {
          param_3 = plVar21;
          if (plVar7 <= plVar21) {
            uVar22 = 0;
            if (plVar7 != (long *)0x0) {
              uVar22 = (ulong)plVar21 / (ulong)plVar7;
            }
            param_3 = (long *)((long)plVar21 - uVar22 * (long)plVar7);
          }
        }
        puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x28) + (long)param_3 * 8);
        if ((puVar10 != (undefined8 *)0x0) && (plVar20 = (long *)*puVar10, plVar20 != (long *)0x0))
        {
          do {
            plVar13 = (long *)plVar20[1];
            if (plVar13 == plVar21) {
              if ((((long *)plVar20[2] == plVar21) && (plVar20[3] == param_2[1])) &&
                 ((int)plVar20[4] == (int)param_2[2])) goto LAB_10a31d5c8;
            }
            else {
              if (((ulong)plVar7 & uVar8) == 0) {
                plVar13 = (long *)((ulong)plVar13 & uVar8);
              }
              else if (plVar7 <= plVar13) {
                uVar22 = 0;
                if (plVar7 != (long *)0x0) {
                  uVar22 = (ulong)plVar13 / (ulong)plVar7;
                }
                plVar13 = (long *)((long)plVar13 - uVar22 * (long)plVar7);
              }
              if (plVar13 != param_3) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
      plVar20 = (long *)0x78;
      __Znwm();
      ppuVar5 = ppuStack_b0;
      *plVar20 = 0;
      plVar20[1] = (long)plVar21;
      uVar8 = *param_2;
      plVar20[3] = param_2[1];
      plVar20[2] = uVar8;
      plVar20[4] = param_2[2];
      plVar20[5] = lVar23;
      lStack_b8 = 0;
      ppuStack_b0 = (undefined **)0x0;
      plVar20[6] = (long)ppuVar5;
      plVar20[7] = (long)&UNK_1053a6a3c;
      plVar20[8] = (long)&PTR_DAT_110ae9180;
      puStack_a8 = &UNK_1053a6a3c;
      ppuStack_a0 = &PTR_DAT_110ae9180;
      if ((plVar7 == (long *)0x0) ||
         (*(float *)(param_1 + 0x4c) * (float)plVar7 < (float)(*(long *)(param_1 + 0x40) + 1))) {
        uVar8 = 1;
        if ((long *)0x2 < plVar7) {
          uVar8 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
        }
        plVar13 = (long *)(uVar8 | (long)plVar7 << 1);
        plVar11 = (long *)(long)((float)(*(long *)(param_1 + 0x40) + 1) / *(float *)(param_1 + 0x4c)
                                );
        if (plVar13 <= plVar11) {
          plVar13 = plVar11;
        }
        if ((long)plVar13 - 1U == 0) {
          plVar13 = (long *)0x2;
        }
        else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar7 = *(long **)(param_1 + 0x30);
        }
        if (plVar7 < plVar13) {
LAB_10a31d3dc:
          if ((ulong)plVar13 >> 0x3d != 0) goto LAB_10a31d874;
          lVar23 = (long)plVar13 << 3;
          __Znwm();
          lVar6 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar23;
          if (lVar6 != 0) {
            __ZdlPv();
          }
          plVar7 = (long *)0x0;
          *(long **)(param_1 + 0x30) = plVar13;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x28) + (long)plVar7 * 8) = 0;
            plVar7 = (long *)((long)plVar7 + 1);
          } while (plVar13 != plVar7);
          plVar11 = *(long **)(param_1 + 0x38);
          plVar7 = plVar13;
          if (plVar11 != (long *)0x0) {
            plVar12 = (long *)plVar11[1];
            uVar8 = (long)plVar13 - 1;
            if (((ulong)plVar13 & uVar8) == 0) {
              plVar12 = (long *)((ulong)plVar12 & uVar8);
            }
            else if (plVar13 <= plVar12) {
              uVar22 = 0;
              if (plVar13 != (long *)0x0) {
                uVar22 = (ulong)plVar12 / (ulong)plVar13;
              }
              plVar12 = (long *)((long)plVar12 - uVar22 * (long)plVar13);
            }
            *(undefined **)(*(long *)(param_1 + 0x28) + (long)plVar12 * 8) = param_1 + 0x38;
            plVar14 = (long *)*plVar11;
            while (plVar14 != (long *)0x0) {
              plVar16 = (long *)plVar14[1];
              if (((ulong)plVar13 & uVar8) == 0) {
                plVar16 = (long *)((ulong)plVar16 & uVar8);
              }
              else if (plVar13 <= plVar16) {
                uVar22 = 0;
                if (plVar13 != (long *)0x0) {
                  uVar22 = (ulong)plVar16 / (ulong)plVar13;
                }
                plVar16 = (long *)((long)plVar16 - uVar22 * (long)plVar13);
              }
              plVar15 = plVar14;
              if (plVar16 != plVar12) {
                lVar23 = *(long *)(param_1 + 0x28);
                if (*(long *)(lVar23 + (long)plVar16 * 8) == 0) {
                  *(long **)(lVar23 + (long)plVar16 * 8) = plVar11;
                  plVar12 = plVar16;
                }
                else {
                  *plVar11 = *plVar14;
                  *plVar14 = **(undefined8 **)(lVar23 + (long)plVar16 * 8);
                  **(long **)(lVar23 + (long)plVar16 * 8) = (long)plVar14;
                  plVar15 = plVar11;
                }
              }
              plVar11 = plVar15;
              plVar14 = (long *)*plVar15;
            }
          }
        }
        else if (plVar13 < plVar7) {
          plVar11 = (long *)(long)((float)*(ulong *)(param_1 + 0x40) / *(float *)(param_1 + 0x4c));
          if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar11) {
            plVar11 = (long *)(1L << (-LZCOUNT((long)plVar11 - 1) & 0x3fU));
          }
          if (plVar13 <= plVar11) {
            plVar13 = plVar11;
          }
          if (plVar13 < plVar7) {
            if (plVar13 != (long *)0x0) goto LAB_10a31d3dc;
            lVar23 = *(long *)(param_1 + 0x28);
            *(undefined8 *)(param_1 + 0x28) = 0;
            if (lVar23 != 0) {
              __ZdlPv();
            }
            *(undefined8 *)(param_1 + 0x30) = 0;
            plVar7 = (long *)0x0;
          }
          else {
            plVar7 = *(long **)(param_1 + 0x30);
          }
        }
        if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
          param_3 = (long *)((long)plVar7 - 1U & (ulong)plVar21);
        }
        else {
          param_3 = plVar21;
          if (plVar7 <= plVar21) {
            uVar8 = 0;
            if (plVar7 != (long *)0x0) {
              uVar8 = (ulong)plVar21 / (ulong)plVar7;
            }
            param_3 = (long *)((long)plVar21 - uVar8 * (long)plVar7);
          }
        }
      }
      lVar23 = *(long *)(param_1 + 0x28);
      plVar21 = *(long **)(lVar23 + (long)param_3 * 8);
      if (plVar21 == (long *)0x0) {
        plVar21 = (long *)(param_1 + 0x38);
        *plVar20 = *plVar21;
        *plVar21 = (long)plVar20;
        *(long **)(lVar23 + (long)param_3 * 8) = plVar21;
        if (*plVar20 != 0) {
          plVar21 = *(long **)(*plVar20 + 8);
          if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
            plVar21 = (long *)((ulong)plVar21 & (long)plVar7 - 1U);
          }
          else if (plVar7 <= plVar21) {
            uVar8 = 0;
            if (plVar7 != (long *)0x0) {
              uVar8 = (ulong)plVar21 / (ulong)plVar7;
            }
            plVar21 = (long *)((long)plVar21 - uVar8 * (long)plVar7);
          }
          *(long **)(*(long *)(param_1 + 0x28) + (long)plVar21 * 8) = plVar20;
        }
      }
      else {
        *plVar20 = *plVar21;
        *plVar21 = (long)plVar20;
      }
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
LAB_10a31d5c8:
      FUN_10a044790(&puStack_a8);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      ppuVar5 = ppuStack_b0;
      if (ppuStack_b0 != (undefined **)0x0) {
        ppuVar1 = ppuStack_b0 + 1;
        do {
          puVar9 = *ppuVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar3) {
            *ppuVar1 = puVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (puVar9 == (undefined *)0x0) {
          (**(code **)(*ppuStack_b0 + 0x10))(ppuStack_b0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar5);
        }
      }
      ppuVar5 = (undefined **)0x28;
      __Znwm();
      plVar7 = (long *)(param_1 + 0x10);
      puVar9 = (undefined *)*param_2;
      ppuVar5[3] = (undefined *)param_2[1];
      ppuVar5[2] = puVar9;
      ppuVar5[4] = (undefined *)param_2[2];
      puVar9 = (undefined *)*plVar7;
      *ppuVar5 = puVar9;
      ppuVar5[1] = (undefined *)plVar7;
      *(undefined ***)(puVar9 + 8) = ppuVar5;
      *plVar7 = (long)ppuVar5;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      lStack_b8 = 0x10a31d96c;
      ppuStack_b0 = &PTR_DAT_110bc3cb0;
      puStack_a8 = param_1;
      ppuStack_a0 = ppuVar5;
      func_0x00010a108320(plVar20 + 7,&lStack_b8);
      FUN_10a044790(&lStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      uVar8 = *(ulong *)(param_1 + 0x20);
      uVar22 = (ulong)*(uint *)(param_1 + 8);
      if (uVar22 < uVar8) {
        do {
          plVar7 = (long *)(param_1 + 0x28);
          FUN_10a31d8ac(plVar7,*(long *)(param_1 + 0x18) + 0x10);
          if (plVar7 != (long *)0x0) {
            uVar22 = *(ulong *)(param_1 + 0x30);
            uVar8 = plVar7[1];
            uVar17 = uVar22 - 1;
            if ((uVar22 & uVar17) == 0) {
              uVar8 = uVar17 & uVar8;
            }
            else if (uVar22 <= uVar8) {
              uVar18 = 0;
              if (uVar22 != 0) {
                uVar18 = uVar8 / uVar22;
              }
              uVar8 = uVar8 - uVar18 * uVar22;
            }
            lVar23 = *plVar7;
            plVar21 = *(long **)(*(long *)(param_1 + 0x28) + uVar8 * 8);
            do {
              plVar13 = plVar21;
              plVar21 = (long *)*plVar13;
            } while ((long *)*plVar13 != plVar7);
            if (plVar13 == (long *)(param_1 + 0x38)) {
LAB_10a31d73c:
              if (lVar23 == 0) {
LAB_10a31d770:
                *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar8 * 8) = 0;
                lVar23 = *plVar7;
                goto LAB_10a31d778;
              }
              uVar18 = *(ulong *)(lVar23 + 8);
              if ((uVar22 & uVar17) == 0) {
                uVar19 = uVar18 & uVar17;
              }
              else {
                uVar19 = uVar18;
                if (uVar22 <= uVar18) {
                  uVar19 = 0;
                  if (uVar22 != 0) {
                    uVar19 = uVar18 / uVar22;
                  }
                  uVar19 = uVar18 - uVar19 * uVar22;
                }
              }
              if (uVar19 != uVar8) goto LAB_10a31d770;
LAB_10a31d780:
              if ((uVar22 & uVar17) == 0) {
                uVar18 = uVar18 & uVar17;
              }
              else if (uVar22 <= uVar18) {
                uVar17 = 0;
                if (uVar22 != 0) {
                  uVar17 = uVar18 / uVar22;
                }
                uVar18 = uVar18 - uVar17 * uVar22;
              }
              if (uVar18 != uVar8) {
                *(long **)(*(long *)(param_1 + 0x28) + uVar18 * 8) = plVar13;
                lVar23 = *plVar7;
              }
            }
            else {
              uVar18 = plVar13[1];
              if ((uVar22 & uVar17) == 0) {
                uVar18 = uVar18 & uVar17;
              }
              else if (uVar22 <= uVar18) {
                uVar19 = 0;
                if (uVar22 != 0) {
                  uVar19 = uVar18 / uVar22;
                }
                uVar18 = uVar18 - uVar19 * uVar22;
              }
              if (uVar18 != uVar8) goto LAB_10a31d73c;
LAB_10a31d778:
              if (lVar23 != 0) {
                uVar18 = *(ulong *)(lVar23 + 8);
                goto LAB_10a31d780;
              }
            }
            *plVar13 = lVar23;
            *plVar7 = 0;
            *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
            func_0x00010a31d9f0(1);
            uVar8 = *(ulong *)(param_1 + 0x20);
            uVar22 = (ulong)*(uint *)(param_1 + 8);
          }
        } while (uVar22 < uVar8);
      }
LAB_10a31d7e0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return plVar20;
      }
      goto LAB_10a31d864;
    }
    if (param_1[0x50] != '\x01') {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f6404ef,&UNK_10f64ea1e,0x91,&UNK_10f64071c);
      }
      func_0x00010a3072b8(plVar20 + 5,param_3);
      ppuVar5 = (undefined **)0x28;
      __Znwm();
      puVar9 = (undefined *)*param_2;
      ppuVar5[3] = (undefined *)param_2[1];
      ppuVar5[2] = puVar9;
      ppuVar5[4] = (undefined *)param_2[2];
      plVar7 = (long *)(param_1 + 0x10);
      puVar9 = (undefined *)*plVar7;
      *ppuVar5 = puVar9;
      ppuVar5[1] = (undefined *)plVar7;
      *(undefined ***)(puVar9 + 8) = ppuVar5;
      *plVar7 = (long)ppuVar5;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      lStack_b8 = 0x10a31d96c;
      ppuStack_b0 = &PTR_DAT_110bc3cb0;
      puStack_a8 = param_1;
      ppuStack_a0 = ppuVar5;
      func_0x00010a108320(plVar20 + 7,&lStack_b8);
      FUN_10a044790(&lStack_b8);
      (*(code *)*ppuStack_b0)(&ppuStack_b0);
      goto LAB_10a31d7e0;
    }
  }
  FUN_10a00946c(&UNK_10f6404c1);
LAB_10a31d874:
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a31d87c);
  (*pcVar4)();
}



/* Entry: 10a31d8ac; end: 10a31d9b7;  */

long * FUN_10a31d8ac(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar3) {
            if (((plVar6[2] == uVar3) && (plVar6[3] == param_2[1])) &&
               ((int)plVar6[4] == (int)param_2[2])) {
              return plVar6;
            }
          }
          else {
            if ((uVar2 & uVar4) == 0) {
              uVar7 = uVar7 & uVar4;
            }
            else if (uVar2 <= uVar7) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar7 / uVar2;
              }
              uVar7 = uVar7 - uVar1 * uVar2;
            }
            if (uVar7 != uVar5) {
              return (long *)0x0;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}



/* Entry: 10a31d9b8; end: 10a31da37;  */

long FUN_10a31d9b8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10a044790(param_1 + 0x10);
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
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



/* Entry: 10a31da38; end: 10a31db2b;  */

undefined8 *
FUN_10a31da38(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  *param_1 = &PTR_DAT_110bc3cd8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = param_2;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[0xb] = param_3[2];
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  *(undefined8 *)((long)param_1 + 0x13a) = 0;
  *(undefined8 *)((long)param_1 + 0x132) = 0;
  *(int *)(param_1 + 0x29) = (int)param_4;
  lStack_50 = (long)*(char *)((long)param_1 + 0x5f);
  if (lStack_50 < 0) {
    puStack_58 = (undefined8 *)param_1[9];
    lStack_50 = param_1[10];
  }
  else {
    puStack_58 = param_1 + 9;
  }
  FUN_10a31db54(&uStack_48,&puStack_58,param_4);
  param_1[2] = uStack_40;
  param_1[1] = uStack_48;
  *(undefined4 *)(param_1 + 3) = uStack_38;
  return param_1;
}



/* Entry: 10a31db2c; end: 10a31db53;  */

void FUN_10a31db2c(long param_1)

{
  func_0x00010a189190(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10a31db54; end: 10a31dc6b;  */

ulong * FUN_10a31db54(ulong *param_1,ulong *param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  plVar1 = (long *)*param_2;
  uVar2 = param_2[1];
  uVar3 = uVar2 >> 3;
  if (((ulong)plVar1 & 7) == 0) {
    if (7 < uVar2) {
      uVar5 = 0;
      plVar4 = plVar1;
      do {
        uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) + *plVar4 ^ uVar5;
        uVar3 = uVar3 - 1;
        plVar4 = plVar4 + 1;
      } while (uVar3 != 0);
      goto LAB_10a31dbf8;
    }
  }
  else if (7 < uVar2) {
    uVar5 = 0;
    plVar4 = plVar1;
    do {
      uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) + *plVar4 ^ uVar5;
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
    } while (uVar3 != 0);
    goto LAB_10a31dbf8;
  }
  uVar5 = 0;
LAB_10a31dbf8:
  lStack_48 = 0;
  if ((uVar2 & 7) == 0) {
    lStack_48 = 0;
  }
  else {
    _memcpy(&lStack_48,(long)plVar1 + (uVar2 - (uVar2 & 7)));
  }
  uVar5 = uVar5 * 0x40 + 0x9e3779b9 + (uVar5 >> 2) + lStack_48 ^ uVar5;
  *param_1 = uVar5 ^ uVar2 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ 1;
  param_1[1] = uVar2;
  *(uint *)(param_1 + 2) = param_3 & 0xfffffffe;
  return param_1;
}



/* Entry: 10a31dc6c; end: 10a31dd5b;  */

ulong FUN_10a31dc6c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lStack_38;
  
  FUN_10a0ee5e8();
  uVar1 = param_2 >> 3;
  if (((ulong)param_1 & 7) == 0) {
    if (7 < param_2) {
      uVar3 = 0;
      plVar2 = param_1;
      do {
        uVar3 = uVar3 * 0x40 + 0x9e3779b9 + (uVar3 >> 2) + *plVar2 ^ uVar3;
        uVar1 = uVar1 - 1;
        plVar2 = plVar2 + 1;
      } while (uVar1 != 0);
      goto LAB_10a31dd00;
    }
  }
  else if (7 < param_2) {
    uVar3 = 0;
    plVar2 = param_1;
    do {
      uVar3 = uVar3 * 0x40 + 0x9e3779b9 + (uVar3 >> 2) + *plVar2 ^ uVar3;
      uVar1 = uVar1 - 1;
      plVar2 = plVar2 + 1;
    } while (uVar1 != 0);
    goto LAB_10a31dd00;
  }
  uVar3 = 0;
LAB_10a31dd00:
  lStack_38 = 0;
  if ((param_2 & 7) == 0) {
    lStack_38 = 0;
  }
  else {
    _memcpy(&lStack_38,(long)param_1 + (param_2 - (param_2 & 7)));
  }
  uVar3 = uVar3 * 0x40 + 0x9e3779b9 + (uVar3 >> 2) + lStack_38 ^ uVar3;
  return param_2 + 0x9e3779b9 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
}



/* Entry: 10a31dd5c; end: 10a31dd8b;  */

void FUN_10a31dd5c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x118);
  FUN_10a31dd8c();
                    /* WARNING: Could not recover jumptable at 0x00010a31dd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a31dd8c; end: 10a31e58f;  */

/* WARNING: Removing unreachable block (ram,0x00010a31e394) */
/* WARNING: Removing unreachable block (ram,0x00010a31e054) */
/* WARNING: Removing unreachable block (ram,0x00010a31e144) */
/* WARNING: Removing unreachable block (ram,0x00010a31df00) */
/* WARNING: Removing unreachable block (ram,0x00010a31df5c) */
/* WARNING: Removing unreachable block (ram,0x00010a31e0d4) */
/* WARNING: Removing unreachable block (ram,0x00010a31e328) */
/* WARNING: Removing unreachable block (ram,0x00010a31e3b8) */

void FUN_10a31dd8c(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined **ppuVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar13;
  long lVar14;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  byte bStack_69;
  
  if ((*(byte *)(param_1 + 0x21) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a31e44c);
    (*pcVar6)();
  }
  lVar14 = param_1[0x22];
  param_1[0x22] = 0;
  lStack_130 = lVar14;
  FUN_109f491c8(auStack_80,param_1,0xffffffff);
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    uVar1 = uStack_78;
    if (-1 < (char)bStack_69) {
      uVar1 = (ulong)bStack_69;
    }
    if ((*param_1 == param_1[1]) && (param_1[3] == param_1[4])) {
      bVar7 = param_1[6] == param_1[7];
    }
    else {
      bVar7 = false;
    }
    func_0x00010ae06f08(1,8,&UNK_10f64d498,&UNK_10f64eba8,0x4b3,&UNK_10f64ec4d,in_x6,in_x7,
                        param_1[0x1f],uVar1 == 0,bVar7,(char)param_1[0x1e],
                        (param_1[0x1c] - param_1[0x1b] >> 3) * -0x5555555555555555);
  }
  if (-1 < (char)bStack_69) {
    uStack_78 = (ulong)bStack_69;
  }
  if (uStack_78 == 0) {
    func_0x00010ae02f70(0,(param_1[0x1c] - param_1[0x1b] >> 3) * -0x5555555555555555);
    ppuVar12 = &PTR_PTR_113301040;
    FUN_10ae079a0();
    func_0x00010ae02f80();
    FUN_10ae07cd4(ppuVar12,&PTR_PTR_113301040);
  }
  else {
    puVar3 = (undefined8 *)param_1[0x1c];
    for (puVar2 = (undefined8 *)param_1[0x1b]; puVar2 != puVar3; puVar2 = puVar2 + 3) {
      uVar1 = puVar2[1];
      puVar9 = (undefined8 *)*puVar2;
      if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)puVar2 + 0x17);
        puVar9 = puVar2;
      }
      FUN_10a189258(&uStack_c0,puVar9,uVar1,&UNK_10f64e7d3,5);
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_90 = lStack_b0;
      uStack_b8 = 0;
      lStack_b0 = 0;
      uStack_c0 = 0;
      FUN_10a1775dc(auStack_80,&uStack_a0);
      if (lStack_b0 < 0) {
        __ZdlPv(uStack_c0);
      }
      uVar1 = puVar2[1];
      puVar9 = (undefined8 *)*puVar2;
      if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
        uVar1 = (ulong)*(byte *)((long)puVar2 + 0x17);
        puVar9 = puVar2;
      }
      FUN_10a189258(&uStack_a0,puVar9,uVar1,&UNK_10f64e7cd,5);
      iVar8 = (int)&uStack_a0;
      FUN_10ad01a04();
      if (iVar8 != 0) {
        FUN_10ad00b0c(&uStack_a0);
      }
      if (*(char *)((long)param_1 + 0xf1) == '\x01') {
        FUN_109ffe064(&uStack_a0,param_1[0x18],param_1[0x19] - param_1[0x18]);
        uVar1 = puVar2[1];
        puVar9 = (undefined8 *)*puVar2;
        if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)puVar2 + 0x17);
          puVar9 = puVar2;
        }
        FUN_10a189258(&uStack_d8,puVar9,uVar1,&UNK_10f64e7d9,4);
        uStack_b8 = uStack_d0;
        uStack_c0 = uStack_d8;
        lStack_b0 = lStack_c8;
        uStack_d0 = 0;
        lStack_c8 = 0;
        uStack_d8 = 0;
        puVar9 = &uStack_a0;
        FUN_10a1775dc(puVar9,&uStack_c0);
        if (lStack_b0 < 0) {
          __ZdlPv(uStack_c0);
        }
        if (lStack_c8 < 0) {
          __ZdlPv(uStack_d8);
        }
        if ((int)puVar9 != 0) {
          uStack_d8 = 0;
          uStack_d0 = 0;
          lStack_c8 = 0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          lStack_e0 = 0;
          FUN_10a31e874(&uStack_c0,&uStack_d8,&uStack_f0,&uStack_a0,1);
          uVar1 = puVar2[1];
          puVar9 = (undefined8 *)*puVar2;
          if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
            uVar1 = (ulong)*(byte *)((long)puVar2 + 0x17);
            puVar9 = puVar2;
          }
          FUN_10a189258(&uStack_128,puVar9,uVar1,&UNK_10f64e7cd,5);
          uStack_108 = uStack_120;
          uStack_110 = uStack_128;
          lStack_100 = lStack_118;
          uStack_120 = 0;
          lStack_118 = 0;
          uStack_128 = 0;
          FUN_10a1775dc(&uStack_c0,&uStack_110);
          if (lStack_100 < 0) {
            __ZdlPv(uStack_110);
          }
          if (lStack_118 < 0) {
            __ZdlPv(uStack_128);
          }
          uVar5 = uStack_f0;
          lVar13 = lStack_e0;
          if (lStack_b0 < 0) {
            __ZdlPv(uStack_c0);
            uVar5 = uStack_f0;
            lVar13 = lStack_e0;
          }
joined_r0x00010a31e304:
          if (lVar13 < 0) {
            __ZdlPv(uVar5);
          }
          if (lStack_c8 < 0) {
            __ZdlPv(uStack_d8);
          }
        }
      }
      else if (*(char *)((long)param_1 + 0xf2) == '\x01') {
        uVar1 = puVar2[1];
        puVar9 = (undefined8 *)*puVar2;
        if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)puVar2 + 0x17);
          puVar9 = puVar2;
        }
        FUN_10a189258(&uStack_c0,puVar9,uVar1,&UNK_10f64e7d9,4);
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        lStack_90 = lStack_b0;
        uStack_b8 = 0;
        lStack_b0 = 0;
        uStack_c0 = 0;
        plVar10 = param_1 + 0x15;
        FUN_10a1775dc(plVar10,&uStack_a0);
        if (lStack_b0 < 0) {
          __ZdlPv(uStack_c0);
        }
        if ((int)plVar10 != 0) {
          FUN_10a31e874(&uStack_a0,param_1 + 0xf,param_1 + 0x12,param_1 + 0x15,
                        *(undefined1 *)((long)param_1 + 0xf2));
          uVar1 = puVar2[1];
          puVar9 = (undefined8 *)*puVar2;
          if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
            uVar1 = (ulong)*(byte *)((long)puVar2 + 0x17);
            puVar9 = puVar2;
          }
          FUN_10a189258(&uStack_d8,puVar9,uVar1,&UNK_10f64e7cd,5);
          uStack_b8 = uStack_d0;
          uStack_c0 = uStack_d8;
          lStack_b0 = lStack_c8;
          uStack_d0 = 0;
          lStack_c8 = 0;
          uStack_d8 = 0;
          FUN_10a1775dc(&uStack_a0,&uStack_c0);
          uVar5 = uStack_c0;
          lVar13 = lStack_b0;
          goto joined_r0x00010a31e304;
        }
      }
      else if ((char)param_1[0x1e] == '\x01') {
        uVar1 = puVar2[1];
        puVar9 = (undefined8 *)*puVar2;
        if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)puVar2 + 0x17);
          puVar9 = puVar2;
        }
        FUN_10a189258(&uStack_c0,puVar9,uVar1,&UNK_10f64e7de,3);
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        lStack_90 = lStack_b0;
        uStack_b8 = 0;
        lStack_b0 = 0;
        uStack_c0 = 0;
        plVar10 = param_1 + 0xf;
        FUN_10a1775dc(plVar10,&uStack_a0);
        if (lStack_b0 < 0) {
          __ZdlPv(uStack_c0);
        }
        uVar1 = puVar2[1];
        puVar9 = (undefined8 *)*puVar2;
        if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
          uVar1 = (ulong)*(byte *)((long)puVar2 + 0x17);
          puVar9 = puVar2;
        }
        FUN_10a189258(&uStack_c0,puVar9,uVar1,&UNK_10f64e7e2,3);
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        lStack_90 = lStack_b0;
        uStack_b8 = 0;
        lStack_b0 = 0;
        uStack_c0 = 0;
        plVar11 = param_1 + 0x12;
        FUN_10a1775dc(plVar11,&uStack_a0);
        if (lStack_b0 < 0) {
          __ZdlPv(uStack_c0);
        }
        if (((uint)plVar10 & (uint)plVar11) == 1) {
          FUN_10a31e874(&uStack_a0,param_1 + 0xf,param_1 + 0x12,param_1 + 0x15,
                        *(undefined1 *)((long)param_1 + 0xf2));
          uVar1 = puVar2[1];
          puVar9 = (undefined8 *)*puVar2;
          if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
            uVar1 = (ulong)*(byte *)((long)puVar2 + 0x17);
            puVar9 = puVar2;
          }
          FUN_10a189258(&uStack_d8,puVar9,uVar1,&UNK_10f64e7cd,5);
          uStack_b8 = uStack_d0;
          uStack_c0 = uStack_d8;
          lStack_b0 = lStack_c8;
          uStack_d0 = 0;
          lStack_c8 = 0;
          uStack_d8 = 0;
          FUN_10a1775dc(&uStack_a0,&uStack_c0);
          uVar5 = uStack_c0;
          lVar13 = lStack_b0;
          goto joined_r0x00010a31e304;
        }
      }
    }
  }
  plVar10 = (long *)(lVar14 + 0x10);
  do {
    lVar13 = *plVar10;
    if (lVar13 == 0) {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = 2;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        FUN_109d1b4dc(lVar14 + 0x18);
        goto LAB_10a31e3dc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar13 >> 1 & 1) != 0) {
LAB_10a31e3dc:
      if ((char)param_1[0x21] == '\x01') {
        FUN_10a30a03c(param_1);
        *(undefined1 *)(param_1 + 0x21) = 0;
      }
      lStack_130 = 0;
      if ((lVar14 != 0) && (func_0x0001092b4274(&lStack_130,lVar14), lStack_130 != 0)) {
        func_0x0001092b4274(&lStack_130);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a31e590; end: 10a31e663;  */

undefined8 * FUN_10a31e590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc3d18;
  if (param_1[0x36] != 0) {
    func_0x0001092b4274(param_1 + 0x36);
  }
  if (*(char *)(param_1 + 0x35) == '\x01') {
    FUN_10a30a03c(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a31e664; end: 10a31e79f;  */

void FUN_10a31e664(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_1[0xb] = param_2[0xb];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xe] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uVar2 = param_2[0x10];
  uVar1 = param_2[0xf];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar2;
  param_1[0xf] = uVar1;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xf] = 0;
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x12] = 0;
  uVar2 = param_2[0x16];
  uVar1 = param_2[0x15];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar2;
  param_1[0x15] = uVar1;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  uVar1 = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar1;
  param_1[0x1a] = param_2[0x1a];
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  uVar1 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar1;
  param_1[0x1d] = param_2[0x1d];
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1b] = 0;
  uVar1 = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar1;
  *(undefined1 *)(param_1 + 0x21) = 1;
  return;
}



/* Entry: 10a31e7a0; end: 10a31e873;  */

undefined8 * FUN_10a31e7a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc3d50;
  if (param_1[0x36] != 0) {
    func_0x0001092b4274(param_1 + 0x36);
  }
  if (*(char *)(param_1 + 0x35) == '\x01') {
    FUN_10a30a03c(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}



/* Entry: 10a31e874; end: 10a31e9ab;  */

void FUN_10a31e874(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  int param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if (param_5 == 0) {
    puVar3 = &uStack_31;
    func_0x000107c2b05c(puVar3);
    puVar2 = &uStack_32;
    func_0x000107c2b05c(puVar2,param_3);
    puVar3 = puVar3 + 0x9e3779b9;
    goto LAB_10a31e984;
  }
  puVar2 = (undefined1 *)param_4[1];
  plVar1 = (long *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    puVar2 = (undefined1 *)(ulong)*(byte *)((long)param_4 + 0x17);
    plVar1 = param_4;
  }
  uVar4 = (ulong)puVar2 >> 3;
  if (((ulong)plVar1 & 7) == 0) {
    if (puVar2 < (undefined1 *)0x8) goto LAB_10a31e91c;
    uVar6 = 0;
    plVar5 = plVar1;
    do {
      uVar6 = uVar6 * 0x40 + 0x9e3779b9 + (uVar6 >> 2) + *plVar5 ^ uVar6;
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar4 != 0);
  }
  else if (puVar2 < (undefined1 *)0x8) {
LAB_10a31e91c:
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    plVar5 = plVar1;
    do {
      uVar6 = uVar6 * 0x40 + 0x9e3779b9 + (uVar6 >> 2) + *plVar5 ^ uVar6;
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar4 != 0);
  }
  lStack_40 = 0;
  if (((ulong)puVar2 & 7) != 0) {
    _memcpy(&lStack_40,(long)((long)plVar1 + (long)puVar2) - ((ulong)puVar2 & 7));
  }
  puVar3 = (undefined1 *)(uVar6 * 0x40 + 0x9e3779b9 + (uVar6 >> 2) + lStack_40 ^ uVar6);
LAB_10a31e984:
  __ZNSt3__19to_stringEy
            (param_1,(ulong)(puVar2 + ((ulong)puVar3 >> 2) + (long)puVar3 * 0x40 + 0x9e3779b9) ^
                     (ulong)puVar3);
  return;
}



/* Entry: 10a31e9ac; end: 10a31e9af;  */

void FUN_10a31e9ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a31e9b0; end: 10a31e9c3;  */

void FUN_10a31e9b0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a31e9c4; end: 10a31e9ff;  */

void FUN_10a31e9c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010a301cd0(lVar1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a31ea00; end: 10a31ea37;  */

undefined8 FUN_10a31ea00(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110bc3dc8);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10a31ea38; end: 10a31ea3b;  */

void FUN_10a31ea38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a31ea3c; end: 10a31ea6b;  */

void FUN_10a31ea3c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  FUN_10a31ea6c();
                    /* WARNING: Could not recover jumptable at 0x00010a31ea68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}



/* Entry: 10a31ea6c; end: 10a31eb8f;  */

void FUN_10a31ea6c(long *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a31eb64);
    (*pcVar3)();
  }
  lVar6 = param_1[3];
  param_1[3] = 0;
  plVar7 = (long *)(*param_1 + 8);
  lStack_38 = lVar6;
  if (*plVar7 != 0) {
    _glFlush();
    ppuVar4 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    *ppuVar4 = (undefined *)0x0;
    FUN_10a31ecd8(*plVar7);
    lVar5 = *plVar7;
    *plVar7 = 0;
    if (lVar5 != 0) {
      FUN_10a31ed38(plVar7);
    }
  }
  plVar7 = (long *)(lVar6 + 0x10);
  do {
    lVar5 = *plVar7;
    if (lVar5 == 0) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = 2;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        FUN_109d1b4dc(lVar6 + 0x18);
        goto LAB_10a31eb18;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)lVar5 >> 1 & 1) != 0) {
LAB_10a31eb18:
      if ((char)param_1[2] == '\x01') {
        *(undefined1 *)(param_1 + 2) = 0;
      }
      lStack_38 = 0;
      if ((lVar6 != 0) && (func_0x0001092b4274(&lStack_38,lVar6), lStack_38 != 0)) {
        func_0x0001092b4274(&lStack_38);
      }
      return;
    }
  } while( true );
}



/* Entry: 10a31eb90; end: 10a31ecd7;  */

undefined8 * FUN_10a31eb90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bc3de8;
  if (param_1[0x17] != 0) {
    func_0x0001092b4274();
  }
  *param_1 = &PTR_DAT_110ae8be8;
  __ZNSt13exception_ptrD1Ev(param_1 + 0x12);
  *param_1 = &PTR_DAT_110ae8c08;
  return param_1;
}


