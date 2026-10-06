/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1099f6b88; end: 1099f6bff;  */

long * FUN_1099f6b88(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1099f6c00; end: 1099f7267;  */

undefined8 * FUN_1099f6c00(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong unaff_x20;
  long lVar19;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b1f8d0;
  puVar4 = (undefined8 *)0x18;
  puVar8 = param_2;
  __Znwm();
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = puVar4;
  param_1[4] = param_2;
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
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  __ZNSt3__15mutex4lockEv(0x1132e81e0);
  uVar10 = uRam000000011374c5f0;
  uVar13 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
  uVar13 = ((ulong)param_1 >> 0x20 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
  uVar13 = (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
  if (uRam000000011374c5f0 != 0) {
    uVar9 = uRam000000011374c5f0 - 1;
    if ((uRam000000011374c5f0 & uVar9) == 0) {
      unaff_x20 = uVar9 & uVar13;
    }
    else {
      unaff_x20 = uVar13;
      if (uRam000000011374c5f0 <= uVar13) {
        uVar15 = 0;
        if (uRam000000011374c5f0 != 0) {
          uVar15 = uVar13 / uRam000000011374c5f0;
        }
        unaff_x20 = uVar13 - uVar15 * uRam000000011374c5f0;
      }
    }
    plVar14 = *(long **)(lRam000000011374c5e8 + unaff_x20 * 8);
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_1099f6de8;
          uVar15 = plVar14[1];
          if (uVar15 != uVar13) break;
          if ((undefined8 *)plVar14[2] == param_1) goto LAB_1099f708c;
        }
        if ((uRam000000011374c5f0 & uVar9) == 0) {
          uVar15 = uVar15 & uVar9;
        }
        else if (uRam000000011374c5f0 <= uVar15) {
          uVar11 = 0;
          if (uRam000000011374c5f0 != 0) {
            uVar11 = uVar15 / uRam000000011374c5f0;
          }
          uVar15 = uVar15 - uVar11 * uRam000000011374c5f0;
        }
      } while (uVar15 == unaff_x20);
    }
  }
LAB_1099f6de8:
  plVar14 = (long *)0x18;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = uVar13;
  plVar14[2] = (long)param_1;
  if ((uVar10 == 0) || (fRam000000011374c608 * (float)uVar10 < (float)(uRam000000011374c600 + 1))) {
    uVar9 = 1;
    if (2 < uVar10) {
      uVar9 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar9 = uVar9 | uVar10 << 1;
    uVar15 = (ulong)((float)(uRam000000011374c600 + 1) / fRam000000011374c608);
    if (uVar9 <= uVar15) {
      uVar9 = uVar15;
    }
    uVar15 = uVar10;
    if (uVar9 - 1 == 0) {
      uVar9 = 2;
    }
    else if ((uVar9 & uVar9 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar15 = uRam000000011374c5f0;
    }
    if (uVar15 < uVar9) {
LAB_1099f6e8c:
      if (uVar9 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1099f7188);
        (*pcVar3)();
      }
      lVar19 = uVar9 << 3;
      __Znwm();
      bVar1 = lRam000000011374c5e8 != 0;
      lRam000000011374c5e8 = lVar19;
      if (bVar1) {
        __ZdlPv();
      }
      uVar10 = 0;
      uRam000000011374c5f0 = uVar9;
      do {
        *(undefined8 *)(lRam000000011374c5e8 + uVar10 * 8) = 0;
        plVar12 = plRam000000011374c5f8;
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
      uVar10 = uVar9;
      if (plRam000000011374c5f8 != (long *)0x0) {
        uVar15 = plRam000000011374c5f8[1];
        uVar11 = uVar9 - 1;
        if ((uVar9 & uVar11) == 0) {
          uVar15 = uVar15 & uVar11;
        }
        else if (uVar9 <= uVar15) {
          uVar18 = 0;
          if (uVar9 != 0) {
            uVar18 = uVar15 / uVar9;
          }
          uVar15 = uVar15 - uVar18 * uVar9;
        }
        *(undefined8 *)(lRam000000011374c5e8 + uVar15 * 8) = 0x11374c5f8;
        plVar16 = (long *)*plVar12;
        lVar19 = lRam000000011374c5e8;
        while (lRam000000011374c5e8 = lVar19, plVar16 != (long *)0x0) {
          uVar18 = plVar16[1];
          if ((uVar9 & uVar11) == 0) {
            uVar18 = uVar18 & uVar11;
          }
          else if (uVar9 <= uVar18) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar18 / uVar9;
            }
            uVar18 = uVar18 - uVar2 * uVar9;
          }
          plVar17 = plVar16;
          if (uVar18 != uVar15) {
            if (*(long *)(lVar19 + uVar18 * 8) == 0) {
              *(long **)(lVar19 + uVar18 * 8) = plVar12;
              uVar15 = uVar18;
            }
            else {
              *plVar12 = *plVar16;
              *plVar16 = **(long **)(lVar19 + uVar18 * 8);
              **(undefined8 **)(lVar19 + uVar18 * 8) = plVar16;
              plVar17 = plVar12;
            }
          }
          lVar19 = lRam000000011374c5e8;
          plVar12 = plVar17;
          plVar16 = (long *)*plVar17;
        }
      }
    }
    else {
      uVar10 = uVar15;
      if (uVar9 < uVar15) {
        uVar10 = (ulong)((float)uRam000000011374c600 / fRam000000011374c608);
        if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar10) {
          uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
        }
        lVar19 = lRam000000011374c5e8;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        uVar10 = uRam000000011374c5f0;
        if (uVar9 < uVar15) {
          if (uVar9 != 0) goto LAB_1099f6e8c;
          lRam000000011374c5e8 = 0;
          if (lVar19 != 0) {
            __ZdlPv();
          }
          uRam000000011374c5f0 = 0;
          uVar10 = 0;
        }
      }
    }
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x20 = uVar10 - 1 & uVar13;
    }
    else {
      unaff_x20 = uVar13;
      if (uVar10 <= uVar13) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar13 / uVar10;
        }
        unaff_x20 = uVar13 - uVar9 * uVar10;
      }
    }
  }
  lVar19 = lRam000000011374c5e8;
  plVar12 = *(long **)(lRam000000011374c5e8 + unaff_x20 * 8);
  if (plVar12 == (long *)0x0) {
    *plVar14 = (long)plRam000000011374c5f8;
    plRam000000011374c5f8 = plVar14;
    *(undefined8 *)(lVar19 + unaff_x20 * 8) = 0x11374c5f8;
    if (*plVar14 == 0) goto LAB_1099f707c;
    uVar13 = *(ulong *)(*plVar14 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar13 = uVar13 & uVar10 - 1;
    }
    else if (uVar10 <= uVar13) {
      uVar9 = 0;
      if (uVar10 != 0) {
        uVar9 = uVar13 / uVar10;
      }
      uVar13 = uVar13 - uVar9 * uVar10;
    }
    plVar12 = (long *)(lRam000000011374c5e8 + uVar13 * 8);
  }
  else {
    *plVar14 = *plVar12;
  }
  *plVar12 = (long)plVar14;
LAB_1099f707c:
  uRam000000011374c600 = uRam000000011374c600 + 1;
LAB_1099f708c:
  __ZNSt3__15mutex6unlockEv(0x1132e81e0);
  uVar5 = *param_2;
  (*(code *)param_2[5])();
  puVar4 = (undefined8 *)param_1[3];
  _objc_retain();
  uVar6 = *puVar4;
  *puVar4 = uVar5;
  _objc_release(uVar6);
  lVar19 = param_1[3];
  _objc_retain(puVar8);
  uVar5 = *(undefined8 *)(lVar19 + 8);
  *(undefined8 **)(lVar19 + 8) = puVar8;
  _objc_release(uVar5);
  uVar7 = *(undefined8 *)param_1[3];
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bfda7c0();
  uVar5 = 0x10;
  if ((int)uVar6 == 0) {
    uVar5 = 0x20;
  }
  param_1[5] = uVar5;
  _objc_release(uVar7);
  return param_1;
}



/* Entry: 1099f7268; end: 1099f773b;  */

undefined8 * FUN_1099f7268(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  
  *param_1 = &PTR_FUN_110b1f8d0;
  if (param_1[0x2b] != 0) {
    plVar6 = (long *)param_1[0x2a];
    while (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      __ZdlPv();
    }
    param_1[0x2a] = 0;
    lVar8 = param_1[0x29];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(param_1[0x28] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    param_1[0x2b] = 0;
  }
  if (param_1[0x26] != 0) {
    plVar6 = (long *)param_1[0x25];
    while (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      __ZdlPv();
    }
    param_1[0x25] = 0;
    lVar8 = param_1[0x24];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(param_1[0x23] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    param_1[0x26] = 0;
  }
  param_1[10] = param_1[9];
  param_1[0xd] = param_1[0xc];
  if (param_1[0x35] != 0) {
    plVar6 = (long *)param_1[0x34];
    while (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      __ZdlPv();
    }
    param_1[0x34] = 0;
    lVar8 = param_1[0x33];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(param_1[0x32] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    param_1[0x35] = 0;
  }
  if (param_1[0x30] != 0) {
    for (plVar6 = (long *)param_1[0x2f]; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      _objc_release(plVar6[3]);
    }
    func_0x000109a00ab8(param_1 + 0x2d);
  }
  if (param_1[0x1c] != 0) {
    for (plVar6 = (long *)param_1[0x1b]; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      _objc_release(plVar6[3]);
    }
    func_0x000109a00ab8(param_1 + 0x19);
  }
  if (param_1[0x21] != 0) {
    plVar6 = (long *)param_1[0x20];
    if (plVar6 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      do {
        lVar8 = plVar6[3];
        plVar1 = (long *)plVar6[4];
        if (plVar1 == (long *)0x0) {
          _objc_release(*(undefined8 *)(lVar8 + 0x20));
        }
        else {
          plVar15 = plVar1 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar3) {
              *plVar15 = *plVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          _objc_release(*(undefined8 *)(lVar8 + 0x20));
          do {
            lVar8 = *plVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar3) {
              *plVar15 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
      if (param_1[0x21] == 0) goto LAB_1099f7474;
      uVar7 = param_1[0x20];
    }
    func_0x000109a009a4(uVar7);
    param_1[0x20] = 0;
    lVar8 = param_1[0x1f];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(param_1[0x1e] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    param_1[0x21] = 0;
  }
LAB_1099f7474:
  uVar7 = *(undefined8 *)param_1[3];
  *(undefined8 *)param_1[3] = 0;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1[3] + 8);
  *(undefined8 *)(param_1[3] + 8) = 0;
  _objc_release(uVar7);
  __ZNSt3__15mutex4lockEv(0x1132e81e0);
  uVar5 = uRam000000011374c5f0;
  if (uRam000000011374c5f0 != 0) {
    uVar10 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar10 = ((ulong)param_1 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
    uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
    uVar11 = uRam000000011374c5f0 - 1;
    if ((uRam000000011374c5f0 & uVar11) == 0) {
      uVar12 = uVar11 & uVar10;
    }
    else {
      uVar12 = uVar10;
      if (uRam000000011374c5f0 <= uVar10) {
        uVar12 = 0;
        if (uRam000000011374c5f0 != 0) {
          uVar12 = uVar10 / uRam000000011374c5f0;
        }
        uVar12 = uVar10 - uVar12 * uRam000000011374c5f0;
      }
    }
    puVar13 = *(undefined8 **)(lRam000000011374c5e8 + uVar12 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar6 = (long *)*puVar13; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar14 = plVar6[1];
        if (uVar14 == uVar10) {
          if ((undefined8 *)plVar6[2] == param_1) {
            lVar8 = *plVar6;
            if ((uRam000000011374c5f0 & uVar11) == 0) {
              uVar10 = uVar10 & uVar11;
            }
            else if (uRam000000011374c5f0 <= uVar10) {
              uVar12 = 0;
              if (uRam000000011374c5f0 != 0) {
                uVar12 = uVar10 / uRam000000011374c5f0;
              }
              uVar10 = uVar10 - uVar12 * uRam000000011374c5f0;
            }
            plVar1 = *(long **)(lRam000000011374c5e8 + uVar10 * 8);
            do {
              plVar15 = plVar1;
              plVar1 = (long *)*plVar15;
            } while ((long *)*plVar15 != plVar6);
            if (plVar15 == (long *)0x11374c5f8) {
LAB_1099f75e8:
              if (lVar8 == 0) {
LAB_1099f761c:
                *(undefined8 *)(lRam000000011374c5e8 + uVar10 * 8) = 0;
                lVar8 = *plVar6;
                goto LAB_1099f7624;
              }
              uVar12 = *(ulong *)(lVar8 + 8);
              if ((uRam000000011374c5f0 & uVar11) == 0) {
                uVar14 = uVar12 & uVar11;
              }
              else {
                uVar14 = uVar12;
                if (uRam000000011374c5f0 <= uVar12) {
                  uVar14 = 0;
                  if (uRam000000011374c5f0 != 0) {
                    uVar14 = uVar12 / uRam000000011374c5f0;
                  }
                  uVar14 = uVar12 - uVar14 * uRam000000011374c5f0;
                }
              }
              if (uVar14 != uVar10) goto LAB_1099f761c;
LAB_1099f762c:
              if ((uVar5 & uVar11) == 0) {
                uVar12 = uVar12 & uVar11;
              }
              else if (uVar5 <= uVar12) {
                uVar11 = 0;
                if (uVar5 != 0) {
                  uVar11 = uVar12 / uVar5;
                }
                uVar12 = uVar12 - uVar11 * uVar5;
              }
              if (uVar12 != uVar10) {
                *(long **)(lRam000000011374c5e8 + uVar12 * 8) = plVar15;
                lVar8 = *plVar6;
              }
            }
            else {
              uVar12 = plVar15[1];
              if ((uRam000000011374c5f0 & uVar11) == 0) {
                uVar12 = uVar12 & uVar11;
              }
              else if (uRam000000011374c5f0 <= uVar12) {
                uVar14 = 0;
                if (uRam000000011374c5f0 != 0) {
                  uVar14 = uVar12 / uRam000000011374c5f0;
                }
                uVar12 = uVar12 - uVar14 * uRam000000011374c5f0;
              }
              if (uVar12 != uVar10) goto LAB_1099f75e8;
LAB_1099f7624:
              if (lVar8 != 0) {
                uVar12 = *(ulong *)(lVar8 + 8);
                goto LAB_1099f762c;
              }
            }
            *plVar15 = lVar8;
            *plVar6 = 0;
            lRam000000011374c600 = lRam000000011374c600 + -1;
            __ZdlPv();
            break;
          }
        }
        else {
          if ((uRam000000011374c5f0 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uRam000000011374c5f0 <= uVar14) {
            uVar4 = 0;
            if (uRam000000011374c5f0 != 0) {
              uVar4 = uVar14 / uRam000000011374c5f0;
            }
            uVar14 = uVar14 - uVar4 * uRam000000011374c5f0;
          }
          if (uVar14 != uVar12) break;
        }
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(0x1132e81e0);
  if (param_1[0x37] != 0) {
    param_1[0x38] = param_1[0x37];
    __ZdlPv();
  }
  func_0x000109a00a70(param_1 + 0x32);
  func_0x000109a00924(param_1 + 0x2d);
  func_0x000109a00a28(param_1 + 0x28);
  func_0x000109a009e0(param_1 + 0x23);
  func_0x000109a0096c(param_1 + 0x1e);
  func_0x000109a00924(param_1 + 0x19);
  func_0x000109a008dc(param_1 + 0x14);
  func_0x000109a00894(param_1 + 0xf);
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  lVar8 = param_1[3];
  param_1[3] = 0;
  if (lVar8 != 0) {
    func_0x000109a0085c();
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099f773c; end: 1099f773f;  */

undefined8 * FUN_1099f773c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  
  *param_1 = &PTR_FUN_110b1f8d0;
  if (param_1[0x2b] != 0) {
    plVar6 = (long *)param_1[0x2a];
    while (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      __ZdlPv();
    }
    param_1[0x2a] = 0;
    lVar8 = param_1[0x29];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(param_1[0x28] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    param_1[0x2b] = 0;
  }
  if (param_1[0x26] != 0) {
    plVar6 = (long *)param_1[0x25];
    while (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      __ZdlPv();
    }
    param_1[0x25] = 0;
    lVar8 = param_1[0x24];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(param_1[0x23] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    param_1[0x26] = 0;
  }
  param_1[10] = param_1[9];
  param_1[0xd] = param_1[0xc];
  if (param_1[0x35] != 0) {
    plVar6 = (long *)param_1[0x34];
    while (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      __ZdlPv();
    }
    param_1[0x34] = 0;
    lVar8 = param_1[0x33];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(param_1[0x32] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    param_1[0x35] = 0;
  }
  if (param_1[0x30] != 0) {
    for (plVar6 = (long *)param_1[0x2f]; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      _objc_release(plVar6[3]);
    }
    func_0x000109a00ab8(param_1 + 0x2d);
  }
  if (param_1[0x1c] != 0) {
    for (plVar6 = (long *)param_1[0x1b]; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      _objc_release(plVar6[3]);
    }
    func_0x000109a00ab8(param_1 + 0x19);
  }
  if (param_1[0x21] != 0) {
    plVar6 = (long *)param_1[0x20];
    if (plVar6 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      do {
        lVar8 = plVar6[3];
        plVar1 = (long *)plVar6[4];
        if (plVar1 == (long *)0x0) {
          _objc_release(*(undefined8 *)(lVar8 + 0x20));
        }
        else {
          plVar15 = plVar1 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar3) {
              *plVar15 = *plVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          _objc_release(*(undefined8 *)(lVar8 + 0x20));
          do {
            lVar8 = *plVar15;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar3) {
              *plVar15 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
      if (param_1[0x21] == 0) goto LAB_1099f7474;
      uVar7 = param_1[0x20];
    }
    func_0x000109a009a4(uVar7);
    param_1[0x20] = 0;
    lVar8 = param_1[0x1f];
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(param_1[0x1e] + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    param_1[0x21] = 0;
  }
LAB_1099f7474:
  uVar7 = *(undefined8 *)param_1[3];
  *(undefined8 *)param_1[3] = 0;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_1[3] + 8);
  *(undefined8 *)(param_1[3] + 8) = 0;
  _objc_release(uVar7);
  __ZNSt3__15mutex4lockEv(0x1132e81e0);
  uVar5 = uRam000000011374c5f0;
  if (uRam000000011374c5f0 != 0) {
    uVar10 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar10 = ((ulong)param_1 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
    uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
    uVar11 = uRam000000011374c5f0 - 1;
    if ((uRam000000011374c5f0 & uVar11) == 0) {
      uVar12 = uVar11 & uVar10;
    }
    else {
      uVar12 = uVar10;
      if (uRam000000011374c5f0 <= uVar10) {
        uVar12 = 0;
        if (uRam000000011374c5f0 != 0) {
          uVar12 = uVar10 / uRam000000011374c5f0;
        }
        uVar12 = uVar10 - uVar12 * uRam000000011374c5f0;
      }
    }
    puVar13 = *(undefined8 **)(lRam000000011374c5e8 + uVar12 * 8);
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar6 = (long *)*puVar13; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        uVar14 = plVar6[1];
        if (uVar14 == uVar10) {
          if ((undefined8 *)plVar6[2] == param_1) {
            lVar8 = *plVar6;
            if ((uRam000000011374c5f0 & uVar11) == 0) {
              uVar10 = uVar10 & uVar11;
            }
            else if (uRam000000011374c5f0 <= uVar10) {
              uVar12 = 0;
              if (uRam000000011374c5f0 != 0) {
                uVar12 = uVar10 / uRam000000011374c5f0;
              }
              uVar10 = uVar10 - uVar12 * uRam000000011374c5f0;
            }
            plVar1 = *(long **)(lRam000000011374c5e8 + uVar10 * 8);
            do {
              plVar15 = plVar1;
              plVar1 = (long *)*plVar15;
            } while ((long *)*plVar15 != plVar6);
            if (plVar15 == (long *)0x11374c5f8) {
LAB_1099f75e8:
              if (lVar8 == 0) {
LAB_1099f761c:
                *(undefined8 *)(lRam000000011374c5e8 + uVar10 * 8) = 0;
                lVar8 = *plVar6;
                goto LAB_1099f7624;
              }
              uVar12 = *(ulong *)(lVar8 + 8);
              if ((uRam000000011374c5f0 & uVar11) == 0) {
                uVar14 = uVar12 & uVar11;
              }
              else {
                uVar14 = uVar12;
                if (uRam000000011374c5f0 <= uVar12) {
                  uVar14 = 0;
                  if (uRam000000011374c5f0 != 0) {
                    uVar14 = uVar12 / uRam000000011374c5f0;
                  }
                  uVar14 = uVar12 - uVar14 * uRam000000011374c5f0;
                }
              }
              if (uVar14 != uVar10) goto LAB_1099f761c;
LAB_1099f762c:
              if ((uVar5 & uVar11) == 0) {
                uVar12 = uVar12 & uVar11;
              }
              else if (uVar5 <= uVar12) {
                uVar11 = 0;
                if (uVar5 != 0) {
                  uVar11 = uVar12 / uVar5;
                }
                uVar12 = uVar12 - uVar11 * uVar5;
              }
              if (uVar12 != uVar10) {
                *(long **)(lRam000000011374c5e8 + uVar12 * 8) = plVar15;
                lVar8 = *plVar6;
              }
            }
            else {
              uVar12 = plVar15[1];
              if ((uRam000000011374c5f0 & uVar11) == 0) {
                uVar12 = uVar12 & uVar11;
              }
              else if (uRam000000011374c5f0 <= uVar12) {
                uVar14 = 0;
                if (uRam000000011374c5f0 != 0) {
                  uVar14 = uVar12 / uRam000000011374c5f0;
                }
                uVar12 = uVar12 - uVar14 * uRam000000011374c5f0;
              }
              if (uVar12 != uVar10) goto LAB_1099f75e8;
LAB_1099f7624:
              if (lVar8 != 0) {
                uVar12 = *(ulong *)(lVar8 + 8);
                goto LAB_1099f762c;
              }
            }
            *plVar15 = lVar8;
            *plVar6 = 0;
            lRam000000011374c600 = lRam000000011374c600 + -1;
            __ZdlPv();
            break;
          }
        }
        else {
          if ((uRam000000011374c5f0 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uRam000000011374c5f0 <= uVar14) {
            uVar4 = 0;
            if (uRam000000011374c5f0 != 0) {
              uVar4 = uVar14 / uRam000000011374c5f0;
            }
            uVar14 = uVar14 - uVar4 * uRam000000011374c5f0;
          }
          if (uVar14 != uVar12) break;
        }
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(0x1132e81e0);
  if (param_1[0x37] != 0) {
    param_1[0x38] = param_1[0x37];
    __ZdlPv();
  }
  func_0x000109a00a70(param_1 + 0x32);
  func_0x000109a00924(param_1 + 0x2d);
  func_0x000109a00a28(param_1 + 0x28);
  func_0x000109a009e0(param_1 + 0x23);
  func_0x000109a0096c(param_1 + 0x1e);
  func_0x000109a00924(param_1 + 0x19);
  func_0x000109a008dc(param_1 + 0x14);
  func_0x000109a00894(param_1 + 0xf);
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  lVar8 = param_1[3];
  param_1[3] = 0;
  if (lVar8 != 0) {
    func_0x000109a0085c();
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099f7740; end: 1099f7753;  */

void FUN_1099f7740(void)

{
  FUN_1099f7268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099f7754; end: 1099f7783;  */

undefined8 FUN_1099f7754(void)

{
  return 0x400;
}



/* Entry: 1099f7784; end: 1099f77b7;  */

undefined8 * FUN_1099f7784(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1f968;
  param_1[1] = &PTR_FUN_110b1f990;
  func_0x000109a00b74(param_1 + 2);
  return param_1;
}



/* Entry: 1099f77b8; end: 1099f77cf;  */

undefined8 * FUN_1099f77b8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  param_1[-1] = &PTR_FUN_110b1f968;
  *param_1 = &PTR_FUN_110b1f990;
  plVar5 = (long *)param_1[2];
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
  return param_1 + 1;
}



/* Entry: 1099f77d0; end: 1099f783b;  */

void FUN_1099f77d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1f968;
  param_1[1] = &PTR_FUN_110b1f990;
  func_0x000109a00b74(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1099f783c; end: 1099f786b;  */

undefined8 FUN_1099f783c(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_2 = 2;
  *param_3 = 0;
  *param_4 = 0;
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1099f786c; end: 1099f7f8f;  */

void FUN_1099f786c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  float fVar21;
  undefined8 uVar22;
  char acStack_7e [6];
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  lVar9 = 0;
  acStack_7e[0] = (char)param_3;
  acStack_7e[1] = (char)((ulong)param_3 >> 8);
  acStack_7e[2] = (char)((ulong)param_3 >> 0x10);
  acStack_7e[3] = (char)param_4;
  acStack_7e[4] = (char)((ulong)param_4 >> 8);
  acStack_7e[5] = (char)((ulong)param_4 >> 0x10);
  puVar19 = (undefined8 *)0xcbf29ce484222325;
  do {
    puVar19 = (undefined8 *)(((ulong)puVar19 ^ (long)acStack_7e[lVar9]) * 0x100000001b3);
    lVar9 = lVar9 + 1;
  } while (lVar9 != 6);
  plVar1 = (long *)(param_2 + 0xf0);
  puVar10 = *(undefined8 **)(param_2 + 0xf8);
  if (puVar10 != (undefined8 *)0x0) {
    uVar11 = (long)puVar10 - 1;
    if (((ulong)puVar10 & uVar11) == 0) {
      puVar14 = (undefined8 *)(uVar11 & (ulong)puVar19);
    }
    else {
      puVar14 = puVar19;
      if (puVar10 <= puVar19) {
        uVar4 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          uVar4 = (ulong)puVar19 / (ulong)puVar10;
        }
        puVar14 = (undefined8 *)((long)puVar19 - uVar4 * (long)puVar10);
      }
    }
    plVar15 = *(long **)(*plVar1 + (long)puVar14 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_1099f7988;
          puVar18 = (undefined8 *)plVar15[1];
          if (puVar18 != puVar19) break;
          if ((undefined8 *)plVar15[2] == puVar19) {
            lVar9 = plVar15[4];
            uVar22 = plVar15[3];
            param_1[1] = plVar15[4];
            *param_1 = uVar22;
            if (lVar9 != 0) {
              plVar1 = (long *)(lVar9 + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = *plVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            return;
          }
        }
        if (((ulong)puVar10 & uVar11) == 0) {
          puVar18 = (undefined8 *)((ulong)puVar18 & uVar11);
        }
        else if (puVar10 <= puVar18) {
          uVar4 = 0;
          if (puVar10 != (undefined8 *)0x0) {
            uVar4 = (ulong)puVar18 / (ulong)puVar10;
          }
          puVar18 = (undefined8 *)((long)puVar18 - uVar4 * (long)puVar10);
        }
      } while (puVar18 == puVar14);
    }
  }
LAB_1099f7988:
  puVar6 = PTR__OBJC_CLASS___MTLSamplerDescriptor_1126d94f8;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLSamplerDescriptor_1126d94f8);
  func_0x00010c1ef0e0();
  func_0x00010c211280(puVar6);
  func_0x00010c1e6de0(puVar6);
  func_0x00010c1c7b80(puVar6);
  func_0x00010c1c1600(puVar6);
  func_0x00010c1c8560(puVar6);
  func_0x00010c173280(puVar6);
  lVar9 = **(long **)(param_2 + 0x18);
  func_0x00010c0d8f60();
  if (lVar9 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_1099f7ec0;
  }
  plVar15 = *(long **)(param_2 + 8);
  plVar13 = *(long **)(param_2 + 0x10);
  plStack_78 = plVar15;
  if ((plVar13 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_70 = plVar13, plVar13 == (long *)0x0)) {
    FUN_1092315e8();
    goto LAB_1099f7f34;
  }
  _objc_retain(lVar9);
  plVar7 = (long *)0x40;
  __Znwm();
  plVar7[1] = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_FUN_110b203b8;
  plVar20 = plVar7 + 3;
  *plVar20 = (long)&PTR_FUN_110b1f968;
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  plVar7[4] = (long)&PTR_FUN_110b1f990;
  plVar7[5] = (long)plVar15;
  plVar15 = plVar13 + 1;
  plVar7[6] = (long)plVar13;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar3) {
      *plVar15 = *plVar15 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar7[7] = lVar9;
  do {
    lVar12 = *plVar15;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar3) {
      *plVar15 = lVar12 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*plVar13 + 0x10))(plVar13);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
  }
  plVar15 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    plVar13 = plStack_70 + 1;
    do {
      lVar12 = *plVar13;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
    if (plVar20 == (long *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 1;
        do {
          lVar12 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      goto LAB_1099f7ec0;
    }
  }
  puVar14 = *(undefined8 **)(param_2 + 0xf8);
  puVar10 = param_1;
  if (puVar14 != (undefined8 *)0x0) {
    uVar11 = (long)puVar14 - 1;
    if (((ulong)puVar14 & uVar11) == 0) {
      puVar10 = (undefined8 *)(uVar11 & (ulong)puVar19);
    }
    else {
      puVar10 = puVar19;
      if (puVar14 <= puVar19) {
        uVar4 = 0;
        if (puVar14 != (undefined8 *)0x0) {
          uVar4 = (ulong)puVar19 / (ulong)puVar14;
        }
        puVar10 = (undefined8 *)((long)puVar19 - uVar4 * (long)puVar14);
      }
    }
    plVar15 = *(long **)(*plVar1 + (long)puVar10 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_1099f7bc8;
          puVar18 = (undefined8 *)plVar15[1];
          if (puVar18 != puVar19) break;
          if ((undefined8 *)plVar15[2] == puVar19) goto LAB_1099f7eb8;
        }
        if (((ulong)puVar14 & uVar11) == 0) {
          puVar18 = (undefined8 *)((ulong)puVar18 & uVar11);
        }
        else if (puVar14 <= puVar18) {
          uVar4 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            uVar4 = (ulong)puVar18 / (ulong)puVar14;
          }
          puVar18 = (undefined8 *)((long)puVar18 - uVar4 * (long)puVar14);
        }
      } while (puVar18 == puVar10);
    }
  }
LAB_1099f7bc8:
  plVar15 = (long *)0x28;
  __Znwm();
  uStack_68 = 1;
  *plVar15 = 0;
  plVar15[1] = (long)puVar19;
  plVar15[2] = (long)puVar19;
  plVar15[3] = (long)plVar20;
  plVar15[4] = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  fVar21 = (float)(*(long *)(param_2 + 0x108) + 1);
  plStack_78 = plVar15;
  plStack_70 = plVar1;
  if ((puVar14 == (undefined8 *)0x0) || (*(float *)(param_2 + 0x110) * (float)puVar14 < fVar21)) {
    uVar11 = 1;
    if ((undefined8 *)0x2 < puVar14) {
      uVar11 = (ulong)(((ulong)puVar14 & (long)puVar14 - 1U) != 0);
    }
    puVar10 = (undefined8 *)(uVar11 | (long)puVar14 << 1);
    puVar14 = (undefined8 *)(long)(fVar21 / *(float *)(param_2 + 0x110));
    if (puVar10 <= puVar14) {
      puVar10 = puVar14;
    }
    if ((long)puVar10 - 1U == 0) {
      puVar10 = (undefined8 *)0x2;
    }
    else if (((ulong)puVar10 & (long)puVar10 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    puVar14 = *(undefined8 **)(param_2 + 0xf8);
    if (puVar14 < puVar10) {
LAB_1099f7c88:
      puVar14 = puVar10;
      if ((ulong)puVar14 >> 0x3d != 0) {
        func_0x000104c4f740();
LAB_1099f7f34:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1099f7f38);
        (*pcVar5)();
      }
      lVar12 = (long)puVar14 << 3;
      __Znwm();
      lVar8 = *plVar1;
      *plVar1 = lVar12;
      if (lVar8 != 0) {
        __ZdlPv();
      }
      puVar10 = (undefined8 *)0x0;
      *(undefined8 **)(param_2 + 0xf8) = puVar14;
      do {
        *(undefined8 *)(*plVar1 + (long)puVar10 * 8) = 0;
        puVar10 = (undefined8 *)((long)puVar10 + 1);
      } while (puVar14 != puVar10);
      plVar13 = *(long **)(param_2 + 0x100);
      if (plVar13 != (long *)0x0) {
        puVar10 = (undefined8 *)plVar13[1];
        uVar11 = (long)puVar14 - 1;
        if (((ulong)puVar14 & uVar11) == 0) {
          puVar10 = (undefined8 *)((ulong)puVar10 & uVar11);
        }
        else if (puVar14 <= puVar10) {
          uVar4 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            uVar4 = (ulong)puVar10 / (ulong)puVar14;
          }
          puVar10 = (undefined8 *)((long)puVar10 - uVar4 * (long)puVar14);
        }
        *(long *)(*plVar1 + (long)puVar10 * 8) = param_2 + 0x100;
        plVar16 = (long *)*plVar13;
        while (plVar16 != (long *)0x0) {
          puVar18 = (undefined8 *)plVar16[1];
          if (((ulong)puVar14 & uVar11) == 0) {
            puVar18 = (undefined8 *)((ulong)puVar18 & uVar11);
          }
          else if (puVar14 <= puVar18) {
            uVar4 = 0;
            if (puVar14 != (undefined8 *)0x0) {
              uVar4 = (ulong)puVar18 / (ulong)puVar14;
            }
            puVar18 = (undefined8 *)((long)puVar18 - uVar4 * (long)puVar14);
          }
          plVar17 = plVar16;
          if (puVar18 != puVar10) {
            lVar12 = *plVar1;
            if (*(long *)(lVar12 + (long)puVar18 * 8) == 0) {
              *(long **)(lVar12 + (long)puVar18 * 8) = plVar13;
              puVar10 = puVar18;
            }
            else {
              *plVar13 = *plVar16;
              *plVar16 = **(undefined8 **)(lVar12 + (long)puVar18 * 8);
              **(long **)(lVar12 + (long)puVar18 * 8) = (long)plVar16;
              plVar17 = plVar13;
            }
          }
          plVar13 = plVar17;
          plVar16 = (long *)*plVar17;
        }
      }
    }
    else if (puVar10 < puVar14) {
      puVar18 = (undefined8 *)
                (long)((float)*(ulong *)(param_2 + 0x108) / *(float *)(param_2 + 0x110));
      if ((puVar14 < (undefined8 *)0x3) || (((ulong)puVar14 & (long)puVar14 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((undefined8 *)0x1 < puVar18) {
        puVar18 = (undefined8 *)(1L << (-LZCOUNT((long)puVar18 + -1) & 0x3fU));
      }
      if (puVar10 <= puVar18) {
        puVar10 = puVar18;
      }
      if (puVar10 < puVar14) {
        if (puVar10 != (undefined8 *)0x0) goto LAB_1099f7c88;
        lVar12 = *plVar1;
        *plVar1 = 0;
        if (lVar12 != 0) {
          __ZdlPv();
        }
        puVar14 = (undefined8 *)0x0;
        *(undefined8 *)(param_2 + 0xf8) = 0;
      }
      else {
        puVar14 = *(undefined8 **)(param_2 + 0xf8);
      }
    }
    if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
      puVar10 = (undefined8 *)((long)puVar14 - 1U & (ulong)puVar19);
    }
    else {
      puVar10 = puVar19;
      if (puVar14 <= puVar19) {
        uVar11 = 0;
        if (puVar14 != (undefined8 *)0x0) {
          uVar11 = (ulong)puVar19 / (ulong)puVar14;
        }
        puVar10 = (undefined8 *)((long)puVar19 - uVar11 * (long)puVar14);
      }
    }
  }
  lVar12 = *plVar1;
  plVar13 = *(long **)(lVar12 + (long)puVar10 * 8);
  if (plVar13 == (long *)0x0) {
    *plVar15 = *(long *)(param_2 + 0x100);
    *(long **)(param_2 + 0x100) = plVar15;
    *(long *)(lVar12 + (long)puVar10 * 8) = param_2 + 0x100;
    if (*plVar15 != 0) {
      puVar19 = *(undefined8 **)(*plVar15 + 8);
      if (((ulong)puVar14 & (long)puVar14 - 1U) == 0) {
        puVar19 = (undefined8 *)((ulong)puVar19 & (long)puVar14 - 1U);
      }
      else if (puVar14 <= puVar19) {
        uVar11 = 0;
        if (puVar14 != (undefined8 *)0x0) {
          uVar11 = (ulong)puVar19 / (ulong)puVar14;
        }
        puVar19 = (undefined8 *)((long)puVar19 - uVar11 * (long)puVar14);
      }
      plVar13 = (long *)(*plVar1 + (long)puVar19 * 8);
      goto LAB_1099f7ea8;
    }
  }
  else {
    *plVar15 = *plVar13;
LAB_1099f7ea8:
    *plVar13 = (long)plVar15;
  }
  *(long *)(param_2 + 0x108) = *(long *)(param_2 + 0x108) + 1;
LAB_1099f7eb8:
  *param_1 = plVar20;
  param_1[1] = plVar7;
LAB_1099f7ec0:
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1099f7f90; end: 1099f80ab;  */

undefined8 * FUN_1099f7f90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_110b1f9b8;
  lVar6 = param_1[3];
  if ((*(byte *)(param_1 + 0xb) >> 4 & 1) != 0) {
    puVar2 = *(undefined8 **)(lVar6 + 0x1c0);
    for (puVar1 = *(undefined8 **)(lVar6 + 0x1b8); puVar2 != puVar1; puVar1 = puVar1 + 2) {
      if ((undefined8 *)*puVar1 == param_1) goto joined_r0x0001099f7ff4;
    }
  }
LAB_1099f8014:
  puVar1 = *(undefined8 **)(lVar6 + 0x48);
  puVar2 = *(undefined8 **)(lVar6 + 0x50);
  puVar5 = puVar1;
  puVar4 = puVar1;
  while ((puVar4 != puVar2 && (puVar5 = puVar1, (undefined8 *)*puVar4 != param_1))) {
    puVar1 = puVar1 + 1;
    puVar5 = puVar2;
    puVar4 = puVar4 + 1;
  }
  if (puVar2 != puVar5) {
    lVar3 = (long)puVar2 - (long)(puVar5 + 1);
    if (lVar3 != 0) {
      _memmove(puVar5,puVar5 + 1,lVar3);
    }
    *(long *)(lVar6 + 0x50) = (long)puVar5 + lVar3;
    _objc_release(param_1[8]);
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  func_0x000109a00b74(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
joined_r0x0001099f7ff4:
  while (puVar5 = puVar1 + 2, puVar5 != puVar2) {
    puVar5[-2] = *puVar5;
    puVar5[-1] = puVar5[1];
    puVar1 = puVar5;
  }
  *(undefined8 **)(lVar6 + 0x1c0) = puVar1;
  goto LAB_1099f8014;
}



/* Entry: 1099f80ac; end: 1099f80af;  */

undefined8 * FUN_1099f80ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_110b1f9b8;
  lVar6 = param_1[3];
  if ((*(byte *)(param_1 + 0xb) >> 4 & 1) != 0) {
    puVar2 = *(undefined8 **)(lVar6 + 0x1c0);
    for (puVar1 = *(undefined8 **)(lVar6 + 0x1b8); puVar2 != puVar1; puVar1 = puVar1 + 2) {
      if ((undefined8 *)*puVar1 == param_1) goto joined_r0x0001099f7ff4;
    }
  }
LAB_1099f8014:
  puVar1 = *(undefined8 **)(lVar6 + 0x48);
  puVar2 = *(undefined8 **)(lVar6 + 0x50);
  puVar5 = puVar1;
  puVar4 = puVar1;
  while ((puVar4 != puVar2 && (puVar5 = puVar1, (undefined8 *)*puVar4 != param_1))) {
    puVar1 = puVar1 + 1;
    puVar5 = puVar2;
    puVar4 = puVar4 + 1;
  }
  if (puVar2 != puVar5) {
    lVar3 = (long)puVar2 - (long)(puVar5 + 1);
    if (lVar3 != 0) {
      _memmove(puVar5,puVar5 + 1,lVar3);
    }
    *(long *)(lVar6 + 0x50) = (long)puVar5 + lVar3;
    _objc_release(param_1[8]);
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  func_0x000109a00b74(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
joined_r0x0001099f7ff4:
  while (puVar5 = puVar1 + 2, puVar5 != puVar2) {
    puVar5[-2] = *puVar5;
    puVar5[-1] = puVar5[1];
    puVar1 = puVar5;
  }
  *(undefined8 **)(lVar6 + 0x1c0) = puVar1;
  goto LAB_1099f8014;
}



/* Entry: 1099f80b0; end: 1099f80c3;  */

void FUN_1099f80b0(void)

{
  FUN_1099f7f90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099f80c4; end: 1099f823f;  */

undefined8 *
FUN_1099f80c4(undefined8 *param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  *param_1 = &PTR_FUN_110b1faa0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &PTR_DAT_110b1fb00;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  param_1[9] = param_2;
  param_1[10] = param_3;
  lVar12 = param_2;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar12 = param_1[9];
  }
  param_1[0xb] = param_4;
  param_1[0xc] = param_5;
  uVar2 = *(ulong *)(param_2 + 0x50);
  if (param_5 <= *(ulong *)(param_2 + 0x50)) {
    uVar2 = param_5;
  }
  param_1[0xc] = uVar2;
  if (lVar12 != 0) {
    puVar3 = *(undefined8 **)(lVar12 + 0x30);
    if (puVar3 < *(undefined8 **)(lVar12 + 0x38)) {
      puVar13 = puVar3 + 1;
      *puVar3 = param_1;
    }
    else {
      lVar10 = *(long *)(lVar12 + 0x28);
      lVar11 = (long)puVar3 - lVar10;
      uVar2 = (lVar11 >> 3) + 1;
      if (uVar2 >> 0x3d != 0) {
        func_0x000109a00554();
LAB_1099f8214:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1099f8218);
        (*pcVar6)();
      }
      uVar8 = (long)*(undefined8 **)(lVar12 + 0x38) - lVar10;
      uVar9 = (long)uVar8 >> 2;
      if (uVar9 <= uVar2) {
        uVar9 = uVar2;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar9 = 0x1fffffffffffffff;
      }
      if (uVar9 >> 0x3d != 0) {
        func_0x000104c4f740();
        goto LAB_1099f8214;
      }
      lVar7 = uVar9 << 3;
      __Znwm();
      puVar3 = (undefined8 *)(lVar7 + lVar11);
      puVar13 = puVar3 + 1;
      *puVar3 = param_1;
      _memcpy(puVar3 + -(lVar11 >> 3),lVar10,lVar11);
      *(undefined8 **)(lVar12 + 0x28) = puVar3 + -(lVar11 >> 3);
      *(undefined8 **)(lVar12 + 0x30) = puVar13;
      *(ulong *)(lVar12 + 0x38) = lVar7 + uVar9 * 8;
      if (lVar10 != 0) {
        __ZdlPv(lVar10);
      }
    }
    *(undefined8 **)(lVar12 + 0x30) = puVar13;
  }
  return param_1;
}



/* Entry: 1099f8240; end: 1099f853f;  */

void FUN_1099f8240(long *param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  plVar8 = &lStack_90;
  uVar7 = *(long *)(param_2 + 0x50) - param_3;
  if (param_4 <= uVar7) {
    uVar7 = param_4;
  }
  lVar9 = *(long *)(param_2 + 8);
  plVar4 = *(long **)(param_2 + 0x10);
  lVar6 = param_3;
  lStack_90 = lVar9;
  if ((plVar4 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_88 = plVar4, plVar4 == (long *)0x0)) {
    lVar9 = 0;
    FUN_1092315e8();
    func_0x000109a00c54(&lStack_60);
    func_0x000109a00cac(&lStack_70);
    __ZNSt3__119__shared_weak_countD2Ev();
    __ZdlPv();
    func_0x000109a00cac(&lStack_80);
    func_0x000109a00c54(&lStack_90);
    __Unwind_Resume();
    *(long *)(lVar9 + 0x40) = lVar6;
    func_0x00010c08fa60();
    *(long *)(lVar9 + 0x50) = lVar6;
    return;
  }
  if ((lVar9 == 0) || (___dynamic_cast(lVar9,&PTR_DAT_110b1fdc0,&PTR_DAT_110b1fdf8,0), lVar9 == 0))
  {
    plVar8 = &lStack_80;
    lVar9 = lStack_80;
    plVar4 = plStack_78;
  }
  plStack_78 = plVar4;
  lStack_80 = lVar9;
  *plVar8 = 0;
  plVar8[1] = 0;
  plVar5 = (long *)0x80;
  __Znwm();
  plVar4 = plStack_78;
  lStack_60 = lStack_80;
  plVar10 = plVar5 + 1;
  *plVar10 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110b20408;
  plVar8 = plVar5 + 3;
  lStack_70 = lStack_80;
  plStack_68 = plStack_78;
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  plStack_58 = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1099f80c4(plVar8,lStack_60,plVar4,param_3,uVar7);
  if (plVar4 == (long *)0x0) {
    plVar5[3] = (long)&PTR_DAT_110b1f9e8;
    plVar5[6] = (long)&PTR_FUN_110b1fa48;
  }
  else {
    plVar1 = plVar4 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
    plVar5[3] = (long)&PTR_DAT_110b1f9e8;
    plVar5[6] = (long)&PTR_FUN_110b1fa48;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (plVar5[5] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5[4] = (long)plVar8;
    plVar5[5] = (long)plVar5;
  }
  else {
    if (*(long *)(plVar5[5] + 8) != -1) goto LAB_1099f8450;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4 = plVar5 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5[4] = (long)plVar8;
    plVar5[5] = (long)plVar5;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar9 = *plVar10;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
LAB_1099f8450:
  plVar4 = plStack_78;
  *param_1 = (long)plVar8;
  param_1[1] = (long)plVar5;
  param_1[2] = uVar7;
  if (plStack_78 != (long *)0x0) {
    plVar8 = plStack_78 + 1;
    do {
      lVar9 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar8 = plStack_88;
  if (plStack_88 != (long *)0x0) {
    plVar4 = plStack_88 + 1;
    do {
      lVar9 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
      return;
    }
  }
  return;
}



/* Entry: 1099f8540; end: 1099f856b;  */

void FUN_1099f8540(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  func_0x00010c08fa60();
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}



/* Entry: 1099f856c; end: 1099f883f;  */

void FUN_1099f856c(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  ulong param_6,uint param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  if (param_6 == 0) {
    plVar6 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2,param_3);
    uVar10 = (long)plVar6 + param_4 + -1 & -(long)plVar6;
LAB_1099f8618:
    lVar5 = *(long *)param_2[3];
    func_0x00010c0d85c0();
  }
  else {
    uVar10 = param_6;
    if (param_7 == 0) goto LAB_1099f8618;
    lVar5 = *(long *)param_2[3];
    func_0x00010c0d85a0(lVar5,param_2,param_5,param_6,0);
  }
  if (lVar5 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_1099f87a8;
  }
  lStack_80 = param_2[1];
  plVar6 = (long *)param_2[2];
  if ((plVar6 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_78 = plVar6, plVar6 == (long *)0x0)) {
    FUN_1092315e8();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1099f87d4);
    (*pcVar4)();
  }
  FUN_109a00d44(&lStack_70,&lStack_80);
  plVar6 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  if (lStack_70 != 0) {
    _objc_retain(lVar5);
    *(long *)(lStack_70 + 0x40) = lVar5;
    *(int *)(lStack_70 + 0x58) = (int)param_3;
    *(ulong *)(lStack_70 + 0x50) = uVar10;
    if (param_7 != 0) {
      lVar9 = lVar5;
      _objc_retainAutorelease();
      func_0x00010bf4df40();
      *(long *)(lStack_70 + 0x48) = lVar9;
    }
    FUN_1099f8840(param_2 + 9,lStack_70);
    if (((param_7 & 1) == 0) && (param_6 != 0)) {
      lVar9 = *(long *)param_2[3];
      func_0x00010c0d85a0();
      if (lVar9 == 0) goto LAB_1099f876c;
      uVar7 = *(undefined8 *)(param_2[3] + 8);
      func_0x00010bf41ae0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf1cca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51fa0();
      func_0x00010bf94840(uVar8);
      func_0x00010bf42760(uVar7);
      func_0x00010c2a14a0(uVar7);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(lVar9);
    }
    *param_1 = lStack_70;
    param_1[1] = (long)plStack_68;
    param_1 = &lStack_70;
  }
LAB_1099f876c:
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
LAB_1099f87a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1099f8840; end: 1099f8913;  */

void FUN_1099f8840(long *param_1,long param_2,int param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long *plStack_a8;
  
  plVar8 = (long *)param_1[1];
  if (plVar8 < (long *)param_1[2]) {
    plVar13 = plVar8 + 1;
    *plVar8 = param_2;
LAB_1099f88f0:
    param_1[1] = (long)plVar13;
    return;
  }
  lVar11 = *param_1;
  lVar12 = (long)plVar8 - lVar11;
  uVar1 = (lVar12 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar9 = param_1[2] - lVar11;
    uVar10 = (long)uVar9 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 >> 0x3d == 0) {
      lVar6 = uVar10 << 3;
      __Znwm();
      plVar8 = (long *)(lVar6 + lVar12);
      plVar13 = plVar8 + 1;
      *plVar8 = param_2;
      _memcpy(plVar8 + -(lVar12 >> 3),lVar11,lVar12);
      *param_1 = (long)(plVar8 + -(lVar12 >> 3));
      param_1[1] = (long)plVar13;
      param_1[2] = lVar6 + uVar10 * 8;
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
      }
      goto LAB_1099f88f0;
    }
  }
  else {
    func_0x000109a0052c();
  }
  func_0x000104c4f740();
  if (param_3 == 0) {
    _objc_retain(param_2);
    plVar8 = (long *)param_1[9];
    do {
      if (plVar8 == (long *)param_1[10]) {
        lStack_c0 = param_1[1];
        plVar8 = (long *)param_1[2];
        if ((plVar8 != (long *)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar8, plVar8 != (long *)0x0)) {
          FUN_109a00d44(&lStack_b0,&lStack_c0);
          plVar8 = plStack_b8;
          if (plStack_b8 != (long *)0x0) {
            plVar13 = plStack_b8 + 1;
            do {
              lVar11 = *plVar13;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar11 == 0) {
              (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          if (lStack_b0 == 0) {
            *extraout_x8 = 0;
            extraout_x8[1] = 0;
            if (plStack_a8 != (long *)0x0) {
              plVar8 = plStack_a8 + 1;
              do {
                lVar11 = *plVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *plVar8 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
              }
            }
          }
          else {
            lVar11 = param_2;
            func_0x00010c2571e0();
            if (lVar11 != 2) {
              lVar11 = param_2;
              _objc_retainAutorelease();
              func_0x00010bf4df40();
              *(long *)(lStack_b0 + 0x48) = lVar11;
            }
            _objc_retain(param_2);
            *(long *)(lStack_b0 + 0x40) = param_2;
            lVar11 = param_2;
            func_0x00010bf00ea0();
            *(long *)(lStack_b0 + 0x50) = lVar11;
            FUN_1099f8840(param_1 + 9,lStack_b0);
            *extraout_x8 = lStack_b0;
            extraout_x8[1] = (long)plStack_a8;
          }
          goto LAB_1099f8c58;
        }
        goto LAB_1099f8cac;
      }
      lVar11 = *plVar8;
      plVar8 = plVar8 + 1;
    } while (*(long *)(lVar11 + 0x40) != param_2);
    lVar12 = *(long *)(lVar11 + 0x10);
    if (lVar12 != 0) {
      lVar11 = *(long *)(lVar11 + 8);
      __ZNSt3__119__shared_weak_count4lockEv();
      if (lVar12 != 0) {
        *extraout_x8 = lVar11;
        extraout_x8[1] = lVar12;
LAB_1099f8c58:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_2);
        return;
      }
    }
    FUN_1092315e8();
LAB_1099f8cb8:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1099f8cbc);
    (*pcVar5)();
  }
  lVar11 = param_1[1];
  plVar8 = (long *)param_1[2];
  lStack_c0 = lVar11;
  if ((plVar8 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar8, plVar8 == (long *)0x0)) {
    FUN_1092315e8();
LAB_1099f8cac:
    FUN_1092315e8();
    goto LAB_1099f8cb8;
  }
  plVar7 = (long *)0x78;
  __Znwm();
  plVar14 = plVar7 + 1;
  *plVar14 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_DAT_110b204a8;
  plVar13 = plVar7 + 3;
  plVar2 = plVar8 + 1;
  lStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar7[3] = (long)&PTR_FUN_110b1f9b8;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = lVar11;
  plVar7[7] = (long)plVar8;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(undefined4 *)(plVar7 + 0xe) = 0;
  plVar7[0xb] = 0;
  plVar7[10] = 0;
  plVar7[0xd] = 0;
  plVar7[0xc] = 0;
  plVar7[9] = 0;
  plVar7[8] = 0;
  do {
    lVar12 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lStack_b0 = lVar11;
  plStack_a8 = plVar8;
  if (lVar12 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  plVar7[3] = (long)&PTR_FUN_110b1fa70;
  plVar7[0xb] = param_2;
  func_0x00010c08fa60();
  plVar7[0xd] = param_2;
  do {
    lVar11 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  if (plVar7[5] == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar8 = plVar7 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7[4] = (long)plVar13;
    plVar7[5] = (long)plVar7;
  }
  else {
    if (*(long *)(plVar7[5] + 8) != -1) goto LAB_1099f8ae0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar8 = plVar7 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7[4] = (long)plVar13;
    plVar7[5] = (long)plVar7;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar11 = *plVar14;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *plVar14 = lVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_1099f8ae0:
  plVar8 = plStack_b8;
  *extraout_x8 = (long)plVar13;
  extraout_x8[1] = (long)plVar7;
  if (plStack_b8 != (long *)0x0) {
    plVar13 = plStack_b8 + 1;
    do {
      lVar11 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar8);
      return;
    }
  }
  return;
}



/* Entry: 1099f8914; end: 1099f8d2b;  */

void FUN_1099f8914(long *param_1,long param_2,long param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  
  if (param_4 == 0) {
    _objc_retain(param_3);
    plVar7 = *(long **)(param_2 + 0x48);
    do {
      if (plVar7 == *(long **)(param_2 + 0x50)) {
        lStack_70 = *(long *)(param_2 + 8);
        plVar7 = *(long **)(param_2 + 0x10);
        if ((plVar7 != (long *)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), plStack_68 = plVar7, plVar7 != (long *)0x0)) {
          FUN_109a00d44(&lStack_60,&lStack_70);
          plVar7 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            plVar1 = plStack_68 + 1;
            do {
              lVar9 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_68 + 0x10))(plStack_68);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          if (lStack_60 == 0) {
            *param_1 = 0;
            param_1[1] = 0;
            if (plStack_58 != (long *)0x0) {
              plVar7 = plStack_58 + 1;
              do {
                lVar9 = *plVar7;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar4) {
                  *plVar7 = lVar9 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plStack_58 + 0x10))(plStack_58);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
              }
            }
          }
          else {
            lVar9 = param_3;
            func_0x00010c2571e0();
            if (lVar9 != 2) {
              lVar9 = param_3;
              _objc_retainAutorelease();
              func_0x00010bf4df40();
              *(long *)(lStack_60 + 0x48) = lVar9;
            }
            _objc_retain(param_3);
            *(long *)(lStack_60 + 0x40) = param_3;
            lVar9 = param_3;
            func_0x00010bf00ea0();
            *(long *)(lStack_60 + 0x50) = lVar9;
            FUN_1099f8840((long *)(param_2 + 0x48),lStack_60);
            *param_1 = lStack_60;
            param_1[1] = (long)plStack_58;
          }
          goto LAB_1099f8c58;
        }
        goto LAB_1099f8cac;
      }
      lVar9 = *plVar7;
      plVar7 = plVar7 + 1;
    } while (*(long *)(lVar9 + 0x40) != param_3);
    lVar8 = *(long *)(lVar9 + 0x10);
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 8);
      __ZNSt3__119__shared_weak_count4lockEv();
      if (lVar8 != 0) {
        *param_1 = lVar9;
        param_1[1] = lVar8;
LAB_1099f8c58:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(param_3);
        return;
      }
    }
    FUN_1092315e8();
LAB_1099f8cb8:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1099f8cbc);
    (*pcVar5)();
  }
  lVar9 = *(long *)(param_2 + 8);
  plVar7 = *(long **)(param_2 + 0x10);
  lStack_70 = lVar9;
  if ((plVar7 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_68 = plVar7, plVar7 == (long *)0x0)) {
    FUN_1092315e8();
LAB_1099f8cac:
    FUN_1092315e8();
    goto LAB_1099f8cb8;
  }
  plVar6 = (long *)0x78;
  __Znwm();
  plVar10 = plVar6 + 1;
  *plVar10 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_DAT_110b204a8;
  plVar1 = plVar6 + 3;
  plVar2 = plVar7 + 1;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar6[3] = (long)&PTR_FUN_110b1f9b8;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = lVar9;
  plVar6[7] = (long)plVar7;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(undefined4 *)(plVar6 + 0xe) = 0;
  plVar6[0xb] = 0;
  plVar6[10] = 0;
  plVar6[0xd] = 0;
  plVar6[0xc] = 0;
  plVar6[9] = 0;
  plVar6[8] = 0;
  do {
    lVar8 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lStack_60 = lVar9;
  plStack_58 = plVar7;
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  plVar6[3] = (long)&PTR_FUN_110b1fa70;
  plVar6[0xb] = param_3;
  func_0x00010c08fa60();
  plVar6[0xd] = param_3;
  do {
    lVar9 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  if (plVar6[5] == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6[4] = (long)plVar1;
    plVar6[5] = (long)plVar6;
  }
  else {
    if (*(long *)(plVar6[5] + 8) != -1) goto LAB_1099f8ae0;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6[4] = (long)plVar1;
    plVar6[5] = (long)plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar9 = *plVar10;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_1099f8ae0:
  plVar7 = plStack_68;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
      return;
    }
  }
  return;
}



/* Entry: 1099f8d2c; end: 1099f8d6b;  */

/* WARNING: Removing unreachable block (ram,0x0001099f86ac) */
/* WARNING: Removing unreachable block (ram,0x0001099f85ac) */
/* WARNING: Removing unreachable block (ram,0x0001099f85a8) */
/* WARNING: Removing unreachable block (ram,0x0001099f8610) */
/* WARNING: Removing unreachable block (ram,0x0001099f86d0) */
/* WARNING: Removing unreachable block (ram,0x0001099f86f0) */

void FUN_1099f8d2c(long *param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x28))(param_2,param_3);
  lVar6 = *(long *)param_2[3];
  func_0x00010c0d85c0();
  if (lVar6 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lStack_80 = param_2[1];
    plVar7 = (long *)param_2[2];
    if ((plVar7 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_78 = plVar7, plVar7 == (long *)0x0)) {
      FUN_1092315e8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1099f87d4);
      (*pcVar4)();
    }
    FUN_109a00d44(&lStack_70,&lStack_80);
    plVar7 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (lStack_70 != 0) {
      _objc_retain(lVar6);
      *(long *)(lStack_70 + 0x40) = lVar6;
      *(int *)(lStack_70 + 0x58) = (int)param_3;
      *(long *)(lStack_70 + 0x50) = (long)plVar5 + param_4 + -1 & -(long)plVar5;
      FUN_1099f8840(param_2 + 9,lStack_70);
      *param_1 = lStack_70;
      param_1[1] = (long)plStack_68;
      param_1 = &lStack_70;
    }
    *param_1 = 0;
    param_1[1] = 0;
    if (plStack_68 != (long *)0x0) {
      plVar5 = plStack_68 + 1;
      do {
        lVar8 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 1099f8d6c; end: 1099f8eb7;  */

void FUN_1099f8d6c(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  plVar7 = param_2;
  (**(code **)(*param_2 + 0x28))(param_2,0x10);
  FUN_1099f856c(param_1,param_2,0x10,((long)plVar7 + param_3 + -1 & -(long)plVar7) << 2,0,0,1);
  lVar11 = *param_1;
  if (lVar11 != 0) {
    uVar3 = param_2[0x3a];
    plVar7 = (long *)param_2[0x38];
    if (plVar7 < (long *)param_2[0x39]) {
      *plVar7 = lVar11;
      plVar7[1] = uVar3 & 3;
      plVar7 = plVar7 + 2;
    }
    else {
      lVar9 = param_2[0x37];
      lVar10 = (long)plVar7 - lVar9;
      uVar1 = (lVar10 >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
        func_0x000109a00540();
LAB_1099f8ea0:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1099f8ea4);
        (*pcVar4)();
      }
      uVar6 = param_2[0x39] - lVar9;
      uVar8 = (long)uVar6 >> 3;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7fffffffffffffef < uVar6) {
        uVar8 = 0xfffffffffffffff;
      }
      if (uVar8 >> 0x3c != 0) {
        func_0x000104c4f740();
        goto LAB_1099f8ea0;
      }
      lVar5 = uVar8 << 4;
      __Znwm();
      plVar2 = (long *)(lVar5 + lVar10);
      *plVar2 = lVar11;
      plVar2[1] = uVar3 & 3;
      plVar7 = plVar2 + 2;
      _memcpy(plVar2 + (lVar10 >> 4) * -2,lVar9,lVar10);
      param_2[0x37] = (long)(plVar2 + (lVar10 >> 4) * -2);
      param_2[0x38] = (long)plVar7;
      param_2[0x39] = lVar5 + uVar8 * 0x10;
      if (lVar9 != 0) {
        __ZdlPv(lVar9);
      }
    }
    param_2[0x38] = (long)plVar7;
  }
  return;
}



/* Entry: 1099f8eb8; end: 1099f910f;  */

long * FUN_1099f8eb8(long *param_1,long param_2,long param_3,ulong param_4,undefined8 *param_5)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  plVar5 = *(long **)(param_2 + 0x18);
  (**(code **)(*plVar5 + 0x28))(plVar5,*(undefined4 *)(param_2 + 0x58));
  uVar14 = *(ulong *)(param_2 + 0x50);
  uVar2 = uVar14;
  if (param_4 <= uVar14) {
    uVar2 = param_4;
  }
  uVar8 = *(undefined8 *)(param_2 + 8);
  plVar7 = *(long **)(param_2 + 0x10);
  uStack_80 = uVar8;
  if ((plVar7 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_78 = plVar7, plVar7 == (long *)0x0)) {
    uVar8 = 0;
    FUN_1092315e8();
    func_0x000109a00c54(&uStack_70);
    __ZNSt3__119__shared_weak_countD2Ev(plVar5);
    __ZdlPv();
    func_0x000109a00c54(&uStack_80);
    __Unwind_Resume(uVar8);
    lVar9 = 0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC1EPKc();
    lVar12 = lVar9;
    puVar11 = (undefined4 *)PTR___ZTISt13runtime_error_110346a40;
    plVar5 = (long *)PTR___ZNSt13runtime_errorD1Ev_1103461d8;
    ___cxa_throw();
    ___cxa_free_exception(lVar9);
    __Unwind_Resume();
    *puVar11 = 0;
    *plVar5 = *(long *)(lVar12 + 0x58);
    *param_5 = *(undefined8 *)(lVar12 + 0x60);
    lVar12 = *(long *)(lVar12 + 0x48);
    if ((*(byte *)(lVar12 + 0x58) >> 4 & 1) != 0) {
      *plVar5 = *plVar5 + (*(ulong *)(*(long *)(lVar12 + 0x18) + 0x1d0) & 3) *
                          (*(ulong *)(lVar12 + 0x50) >> 2);
    }
    return *(long **)(lVar12 + 0x40);
  }
  plVar6 = (long *)0x80;
  __Znwm();
  plVar13 = plVar6 + 1;
  *plVar13 = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_110b204f8;
  plVar1 = plVar6 + 3;
  uStack_80 = 0;
  plStack_78 = (long *)0x0;
  uStack_70 = uVar8;
  plStack_68 = plVar7;
  FUN_1099f80c4(plVar1,uVar8,plVar7,param_3,uVar2);
  plVar10 = plVar7 + 1;
  do {
    lVar12 = *plVar10;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  plVar7 = (long *)plVar6[5];
  if (plVar7 == (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar10 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6[4] = (long)plVar1;
    plVar6[5] = (long)plVar6;
  }
  else {
    if (plVar7[1] != -1) goto LAB_1099f903c;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar10 = plVar6 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar6[4] = (long)plVar1;
    plVar6[5] = (long)plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar12 = *plVar13;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    plVar7 = plVar6;
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
  }
LAB_1099f903c:
  plVar10 = plStack_78;
  uVar2 = ((long)plVar5 + (uVar2 - 1) & -(long)plVar5) + param_3;
  if (uVar14 <= uVar2 && param_4 < uVar14) {
    uVar2 = 0;
  }
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar6;
  param_1[2] = uVar2;
  if (plStack_78 != (long *)0x0) {
    plVar5 = plStack_78 + 1;
    do {
      lVar12 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar10);
      return plVar10;
    }
  }
  return plVar7;
}



/* Entry: 1099f9110; end: 1099f915f;  */

undefined8 FUN_1099f9110(void)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 *in_x3;
  long lVar4;
  
  lVar1 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  lVar4 = lVar1;
  puVar2 = (undefined4 *)PTR___ZTISt13runtime_error_110346a40;
  plVar3 = (long *)PTR___ZNSt13runtime_errorD1Ev_1103461d8;
  ___cxa_throw();
  ___cxa_free_exception(lVar1);
  __Unwind_Resume();
  *puVar2 = 0;
  *plVar3 = *(long *)(lVar4 + 0x58);
  *in_x3 = *(undefined8 *)(lVar4 + 0x60);
  lVar4 = *(long *)(lVar4 + 0x48);
  if ((*(byte *)(lVar4 + 0x58) >> 4 & 1) != 0) {
    *plVar3 = *plVar3 + (*(ulong *)(*(long *)(lVar4 + 0x18) + 0x1d0) & 3) *
                        (*(ulong *)(lVar4 + 0x50) >> 2);
  }
  return *(undefined8 *)(lVar4 + 0x40);
}



/* Entry: 1099f9160; end: 1099f9207;  */

undefined8 FUN_1099f9160(long param_1,undefined4 *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  
  *param_2 = 0;
  *param_3 = *(long *)(param_1 + 0x58);
  *param_4 = *(undefined8 *)(param_1 + 0x60);
  lVar1 = *(long *)(param_1 + 0x48);
  if ((*(byte *)(lVar1 + 0x58) >> 4 & 1) != 0) {
    *param_3 = *param_3 +
               (*(ulong *)(*(long *)(lVar1 + 0x18) + 0x1d0) & 3) * (*(ulong *)(lVar1 + 0x50) >> 2);
  }
  return *(undefined8 *)(lVar1 + 0x40);
}



/* Entry: 1099f9208; end: 1099f92bf;  */

undefined8 * FUN_1099f9208(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_110b1faa0;
  param_1[3] = &PTR_DAT_110b1fb00;
  lVar6 = param_1[9];
  if (lVar6 != 0) {
    puVar1 = *(undefined8 **)(lVar6 + 0x28);
    puVar2 = *(undefined8 **)(lVar6 + 0x30);
    puVar5 = puVar1;
    puVar4 = puVar1;
    while ((puVar4 != puVar2 && (puVar5 = puVar1, (undefined8 *)*puVar4 != param_1))) {
      puVar1 = puVar1 + 1;
      puVar5 = puVar2;
      puVar4 = puVar4 + 1;
    }
    lVar3 = (long)puVar2 - (long)(puVar5 + 1);
    if (lVar3 != 0) {
      _memmove(puVar5,puVar5 + 1,lVar3);
    }
    *(long *)(lVar6 + 0x30) = (long)puVar5 + lVar3;
  }
  func_0x000109a00c54(param_1 + 9);
  func_0x000109a01040(param_1 + 4);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099f92c0; end: 1099f92cb;  */

undefined8 * FUN_1099f92c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_110b1faa0;
  param_1[3] = &PTR_DAT_110b1fb00;
  lVar6 = param_1[9];
  if (lVar6 != 0) {
    puVar1 = *(undefined8 **)(lVar6 + 0x28);
    puVar2 = *(undefined8 **)(lVar6 + 0x30);
    puVar5 = puVar1;
    puVar4 = puVar1;
    while ((puVar4 != puVar2 && (puVar5 = puVar1, (undefined8 *)*puVar4 != param_1))) {
      puVar1 = puVar1 + 1;
      puVar5 = puVar2;
      puVar4 = puVar4 + 1;
    }
    lVar3 = (long)puVar2 - (long)(puVar5 + 1);
    if (lVar3 != 0) {
      _memmove(puVar5,puVar5 + 1,lVar3);
    }
    *(long *)(lVar6 + 0x30) = (long)puVar5 + lVar3;
  }
  func_0x000109a00c54(param_1 + 9);
  func_0x000109a01040(param_1 + 4);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099f92cc; end: 1099f92f7;  */

void FUN_1099f92cc(void)

{
  FUN_1099f9208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099f92f8; end: 1099f9473;  */

undefined8 * FUN_1099f92f8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  *param_1 = &PTR_FUN_110b1fb28;
  param_1[1] = &PTR_DAT_110b1fb50;
  lVar10 = param_1[4];
  if (lVar10 == 0) goto LAB_1099f9444;
  plVar2 = (long *)(lVar10 + 0x20);
  FUN_109a01088(plVar2,*(undefined4 *)(param_1 + 7));
  if (plVar2 == (long *)0x0) goto LAB_1099f9444;
  uVar5 = *(ulong *)(lVar10 + 0x28);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(lVar10 + 0x20) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(lVar10 + 0x30)) {
LAB_1099f93b4:
    if (lVar3 == 0) {
LAB_1099f93e8:
      *(undefined8 *)(*(long *)(lVar10 + 0x20) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1099f93f0;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_1099f93e8;
LAB_1099f93f8:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(lVar10 + 0x20) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_1099f93b4;
LAB_1099f93f0:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_1099f93f8;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(lVar10 + 0x38) = *(long *)(lVar10 + 0x38) + -1;
  __ZdlPv();
LAB_1099f9444:
  _objc_release(param_1[6]);
  FUN_109a00fe8(param_1 + 4);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099f9474; end: 1099f947f;  */

undefined8 * FUN_1099f9474(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  *param_1 = &PTR_FUN_110b1fb28;
  param_1[1] = &PTR_DAT_110b1fb50;
  lVar10 = param_1[4];
  if (lVar10 == 0) goto LAB_1099f9444;
  plVar2 = (long *)(lVar10 + 0x20);
  FUN_109a01088(plVar2,*(undefined4 *)(param_1 + 7));
  if (plVar2 == (long *)0x0) goto LAB_1099f9444;
  uVar5 = *(ulong *)(lVar10 + 0x28);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(lVar10 + 0x20) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(lVar10 + 0x30)) {
LAB_1099f93b4:
    if (lVar3 == 0) {
LAB_1099f93e8:
      *(undefined8 *)(*(long *)(lVar10 + 0x20) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1099f93f0;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_1099f93e8;
LAB_1099f93f8:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(lVar10 + 0x20) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_1099f93b4;
LAB_1099f93f0:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_1099f93f8;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(lVar10 + 0x38) = *(long *)(lVar10 + 0x38) + -1;
  __ZdlPv();
LAB_1099f9444:
  _objc_release(param_1[6]);
  FUN_109a00fe8(param_1 + 4);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099f9480; end: 1099f94ab;  */

void FUN_1099f9480(void)

{
  FUN_1099f92f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099f94ac; end: 1099f94db;  */

undefined8 FUN_1099f94ac(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_2 = 1;
  *param_3 = 0;
  *param_4 = 0;
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1099f94dc; end: 1099f9bb3;  */

void FUN_1099f94dc(undefined8 *param_1,long param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  lVar6 = param_2 + 0x20;
  FUN_109a01088();
  if (lVar6 != 0) {
    lVar7 = *(long *)(*(long *)(lVar6 + 0x18) + 0x18);
    if (lVar7 != 0) {
      uVar19 = *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x10);
      __ZNSt3__119__shared_weak_count4lockEv();
      if (lVar7 != 0) {
        *param_1 = uVar19;
        param_1[1] = lVar7;
        return;
      }
    }
    FUN_1092315e8();
    goto LAB_1099f9b3c;
  }
  lVar7 = *(long *)(*(long *)(param_2 + 0x48) + 0x40);
  _objc_retain(lVar7);
  puVar8 = PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220;
  func_0x00010c13b3e0(lVar7);
  func_0x00010c26ce60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c0d91e0();
  if (lVar6 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_1099f9ac4;
  }
  func_0x000109a01180(&lStack_90,param_2 + 8);
  plVar1 = plStack_88;
  lVar12 = lStack_90;
  lStack_80 = lStack_90;
  plStack_78 = plStack_88;
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  _objc_retain(lVar6);
  plVar9 = (long *)0x58;
  __Znwm();
  plVar20 = plVar9 + 1;
  *plVar20 = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_110b20548;
  plStack_70 = plVar9 + 3;
  *plStack_70 = (long)&PTR_FUN_110b1fb28;
  lStack_80 = 0;
  plStack_78 = (long *)0x0;
  plVar9[4] = (long)&PTR_DAT_110b1fb50;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = lVar12;
  plVar9[8] = (long)plVar1;
  if (plVar1 == (long *)0x0) {
    plVar9[9] = lVar6;
    *(int *)(plVar9 + 10) = param_3;
  }
  else {
    plVar21 = plVar1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = *plVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar9[9] = lVar6;
    *(int *)(plVar9 + 10) = param_3;
    do {
      lVar12 = *plVar21;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plStack_68 = plVar9;
  if (plVar9[6] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar9 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar9[5] = (long)plStack_70;
    plVar9[6] = (long)plVar9;
LAB_1099f9700:
    do {
      lVar12 = *plVar20;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  else if (*(long *)(plVar9[6] + 8) == -1) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar1 = plVar9 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar9[5] = (long)plStack_70;
    plVar9[6] = (long)plVar9;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_1099f9700;
  }
  plVar1 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar9 = plStack_78 + 1;
    do {
      lVar12 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_88;
  plVar9 = (long *)(long)param_3;
  if (plStack_88 != (long *)0x0) {
    plVar21 = plStack_88 + 1;
    do {
      lVar12 = *plVar21;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *plVar21 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  plVar1 = plStack_70;
  plVar21 = *(long **)(param_2 + 0x28);
  if (plVar21 != (long *)0x0) {
    uVar11 = (long)plVar21 - 1;
    if (((ulong)plVar21 & uVar11) == 0) {
      plVar20 = (long *)(uVar11 & (ulong)plVar9);
    }
    else {
      plVar20 = plVar9;
      if (plVar21 <= plVar9) {
        uVar4 = 0;
        if (plVar21 != (long *)0x0) {
          uVar4 = (ulong)plVar9 / (ulong)plVar21;
        }
        plVar20 = (long *)((long)plVar9 - uVar4 * (long)plVar21);
      }
    }
    plVar13 = *(long **)(*(long *)(param_2 + 0x20) + (long)plVar20 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_1099f9830;
          plVar14 = (long *)plVar13[1];
          if (plVar14 != plVar9) break;
          if (*(int *)(plVar13 + 2) == param_3) goto LAB_1099f9ab8;
        }
        if (((ulong)plVar21 & uVar11) == 0) {
          plVar14 = (long *)((ulong)plVar14 & uVar11);
        }
        else if (plVar21 <= plVar14) {
          uVar4 = 0;
          if (plVar21 != (long *)0x0) {
            uVar4 = (ulong)plVar14 / (ulong)plVar21;
          }
          plVar14 = (long *)((long)plVar14 - uVar4 * (long)plVar21);
        }
      } while (plVar14 == plVar20);
    }
  }
LAB_1099f9830:
  plVar13 = (long *)0x20;
  __Znwm();
  *plVar13 = 0;
  plVar13[1] = (long)plVar9;
  *(int *)(plVar13 + 2) = param_3;
  plVar13[3] = (long)plVar1;
  fVar22 = (float)(*(long *)(param_2 + 0x38) + 1);
  if ((plVar21 == (long *)0x0) || (*(float *)(param_2 + 0x40) * (float)plVar21 < fVar22)) {
    uVar11 = 1;
    if ((long *)0x2 < plVar21) {
      uVar11 = (ulong)(((ulong)plVar21 & (long)plVar21 - 1U) != 0);
    }
    plVar20 = (long *)(uVar11 | (long)plVar21 << 1);
    plVar14 = (long *)(long)(fVar22 / *(float *)(param_2 + 0x40));
    if (plVar20 <= plVar14) {
      plVar20 = plVar14;
    }
    if ((long)plVar20 - 1U == 0) {
      plVar20 = (long *)0x2;
    }
    else if (((ulong)plVar20 & (long)plVar20 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar21 = *(long **)(param_2 + 0x28);
    }
    if (plVar21 < plVar20) {
LAB_1099f98cc:
      if ((ulong)plVar20 >> 0x3d != 0) {
LAB_1099f9b3c:
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1099f9b44);
        (*pcVar5)();
      }
      lVar12 = (long)plVar20 << 3;
      __Znwm();
      lVar10 = *(long *)(param_2 + 0x20);
      *(long *)(param_2 + 0x20) = lVar12;
      if (lVar10 != 0) {
        __ZdlPv();
      }
      plVar21 = (long *)0x0;
      *(long **)(param_2 + 0x28) = plVar20;
      do {
        *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)plVar21 * 8) = 0;
        plVar21 = (long *)((long)plVar21 + 1);
      } while (plVar20 != plVar21);
      plVar14 = *(long **)(param_2 + 0x30);
      plVar21 = plVar20;
      if (plVar14 != (long *)0x0) {
        plVar15 = (long *)plVar14[1];
        uVar11 = (long)plVar20 - 1;
        if (((ulong)plVar20 & uVar11) == 0) {
          plVar15 = (long *)((ulong)plVar15 & uVar11);
        }
        else if (plVar20 <= plVar15) {
          uVar4 = 0;
          if (plVar20 != (long *)0x0) {
            uVar4 = (ulong)plVar15 / (ulong)plVar20;
          }
          plVar15 = (long *)((long)plVar15 - uVar4 * (long)plVar20);
        }
        *(undefined8 **)(*(long *)(param_2 + 0x20) + (long)plVar15 * 8) =
             (undefined8 *)(param_2 + 0x30);
        plVar16 = (long *)*plVar14;
        while (plVar16 != (long *)0x0) {
          plVar18 = (long *)plVar16[1];
          if (((ulong)plVar20 & uVar11) == 0) {
            plVar18 = (long *)((ulong)plVar18 & uVar11);
          }
          else if (plVar20 <= plVar18) {
            uVar4 = 0;
            if (plVar20 != (long *)0x0) {
              uVar4 = (ulong)plVar18 / (ulong)plVar20;
            }
            plVar18 = (long *)((long)plVar18 - uVar4 * (long)plVar20);
          }
          plVar17 = plVar16;
          if (plVar18 != plVar15) {
            lVar12 = *(long *)(param_2 + 0x20);
            if (*(long *)(lVar12 + (long)plVar18 * 8) == 0) {
              *(long **)(lVar12 + (long)plVar18 * 8) = plVar14;
              plVar15 = plVar18;
            }
            else {
              *plVar14 = *plVar16;
              *plVar16 = **(undefined8 **)(lVar12 + (long)plVar18 * 8);
              **(long **)(lVar12 + (long)plVar18 * 8) = (long)plVar16;
              plVar17 = plVar14;
            }
          }
          plVar14 = plVar17;
          plVar16 = (long *)*plVar17;
        }
      }
    }
    else if (plVar20 < plVar21) {
      plVar14 = (long *)(long)((float)*(ulong *)(param_2 + 0x38) / *(float *)(param_2 + 0x40));
      if ((plVar21 < (long *)0x3) || (((ulong)plVar21 & (long)plVar21 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar14) {
        plVar14 = (long *)(1L << (-LZCOUNT((long)plVar14 + -1) & 0x3fU));
      }
      if (plVar20 <= plVar14) {
        plVar20 = plVar14;
      }
      if (plVar20 < plVar21) {
        if (plVar20 != (long *)0x0) goto LAB_1099f98cc;
        lVar12 = *(long *)(param_2 + 0x20);
        *(undefined8 *)(param_2 + 0x20) = 0;
        if (lVar12 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_2 + 0x28) = 0;
        plVar21 = (long *)0x0;
      }
      else {
        plVar21 = *(long **)(param_2 + 0x28);
      }
    }
    if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
      plVar20 = (long *)((long)plVar21 - 1U & (ulong)plVar9);
    }
    else {
      plVar20 = plVar9;
      if (plVar21 <= plVar9) {
        uVar11 = 0;
        if (plVar21 != (long *)0x0) {
          uVar11 = (ulong)plVar9 / (ulong)plVar21;
        }
        plVar20 = (long *)((long)plVar9 - uVar11 * (long)plVar21);
      }
    }
  }
  lVar12 = *(long *)(param_2 + 0x20);
  plVar9 = *(long **)(lVar12 + (long)plVar20 * 8);
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)(param_2 + 0x30);
    *plVar13 = *plVar9;
    *plVar9 = (long)plVar13;
    *(long **)(lVar12 + (long)plVar20 * 8) = plVar9;
    if (*plVar13 != 0) {
      plVar20 = *(long **)(*plVar13 + 8);
      if (((ulong)plVar21 & (long)plVar21 - 1U) == 0) {
        plVar20 = (long *)((ulong)plVar20 & (long)plVar21 - 1U);
      }
      else if (plVar21 <= plVar20) {
        uVar11 = 0;
        if (plVar21 != (long *)0x0) {
          uVar11 = (ulong)plVar20 / (ulong)plVar21;
        }
        plVar20 = (long *)((long)plVar20 - uVar11 * (long)plVar21);
      }
      plVar9 = (long *)(*(long *)(param_2 + 0x20) + (long)plVar20 * 8);
      goto LAB_1099f9aa8;
    }
  }
  else {
    *plVar13 = *plVar9;
LAB_1099f9aa8:
    *plVar9 = (long)plVar13;
  }
  *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
LAB_1099f9ab8:
  *param_1 = plVar1;
  param_1[1] = plStack_68;
LAB_1099f9ac4:
  _objc_release(lVar6);
  _objc_release(puVar8);
  _objc_release(lVar7);
  return;
}



/* Entry: 1099f9bb4; end: 1099f9e67;  */

undefined8 * FUN_1099f9bb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uStack_50;
  long *plStack_48;
  
  *param_1 = &PTR_FUN_110b1fb78;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  FUN_1099f9e68(param_1 + 10,&uStack_50);
  plVar16 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar8 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar16 = param_1 + 3;
  lVar18 = *plVar16;
  lVar9 = *(long *)(lVar18 + 0x90);
  if (lVar9 == 0) goto LAB_1099f9d50;
  plVar8 = (long *)(lVar18 + 0x78);
  FUN_109a01258(plVar8,param_1[0xc]);
  if (plVar8 == (long *)0x0) goto LAB_1099f9d50;
  uVar11 = *(ulong *)(lVar18 + 0x80);
  lVar7 = *plVar8;
  uVar10 = plVar8[1];
  uVar12 = uVar11 - 1;
  if ((uVar11 & uVar12) == 0) {
    uVar10 = uVar12 & uVar10;
  }
  else if (uVar11 <= uVar10) {
    uVar14 = 0;
    if (uVar11 != 0) {
      uVar14 = uVar10 / uVar11;
    }
    uVar10 = uVar10 - uVar14 * uVar11;
  }
  plVar6 = *(long **)(*(long *)(lVar18 + 0x78) + uVar10 * 8);
  do {
    plVar13 = plVar6;
    plVar6 = (long *)*plVar13;
  } while ((long *)*plVar13 != plVar8);
  if (plVar13 == (long *)(lVar18 + 0x88)) {
LAB_1099f9cc4:
    if (lVar7 == 0) {
LAB_1099f9cf8:
      *(undefined8 *)(*(long *)(lVar18 + 0x78) + uVar10 * 8) = 0;
      lVar7 = *plVar8;
      goto LAB_1099f9d00;
    }
    uVar14 = *(ulong *)(lVar7 + 8);
    if ((uVar11 & uVar12) == 0) {
      uVar15 = uVar14 & uVar12;
    }
    else {
      uVar15 = uVar14;
      if (uVar11 <= uVar14) {
        uVar15 = 0;
        if (uVar11 != 0) {
          uVar15 = uVar14 / uVar11;
        }
        uVar15 = uVar14 - uVar15 * uVar11;
      }
    }
    if (uVar15 != uVar10) goto LAB_1099f9cf8;
LAB_1099f9d08:
    if ((uVar11 & uVar12) == 0) {
      uVar14 = uVar14 & uVar12;
    }
    else if (uVar11 <= uVar14) {
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = uVar14 / uVar11;
      }
      uVar14 = uVar14 - uVar12 * uVar11;
    }
    if (uVar14 != uVar10) {
      *(long **)(*(long *)(lVar18 + 0x78) + uVar14 * 8) = plVar13;
      lVar7 = *plVar8;
    }
  }
  else {
    uVar14 = plVar13[1];
    if ((uVar11 & uVar12) == 0) {
      uVar14 = uVar14 & uVar12;
    }
    else if (uVar11 <= uVar14) {
      uVar15 = 0;
      if (uVar11 != 0) {
        uVar15 = uVar14 / uVar11;
      }
      uVar14 = uVar14 - uVar15 * uVar11;
    }
    if (uVar14 != uVar10) goto LAB_1099f9cc4;
LAB_1099f9d00:
    if (lVar7 != 0) {
      uVar14 = *(ulong *)(lVar7 + 8);
      goto LAB_1099f9d08;
    }
  }
  *plVar13 = lVar7;
  *(long *)(lVar18 + 0x90) = lVar9 + -1;
  __ZdlPv();
  lVar18 = *plVar16;
LAB_1099f9d50:
  puVar1 = *(undefined8 **)(lVar18 + 0x60);
  puVar2 = *(undefined8 **)(lVar18 + 0x68);
  puVar17 = puVar1;
  puVar5 = puVar1;
  while ((puVar5 != puVar2 && (puVar17 = puVar1, (undefined8 *)*puVar5 != param_1))) {
    puVar1 = puVar1 + 1;
    puVar17 = puVar2;
    puVar5 = puVar5 + 1;
  }
  if (puVar2 != puVar17) {
    lVar9 = (long)puVar2 - (long)(puVar17 + 1);
    if (lVar9 != 0) {
      _memmove(puVar17,puVar17 + 1,lVar9);
    }
    *(long *)(lVar18 + 0x68) = (long)puVar17 + lVar9;
  }
  if (param_1[8] != 0) {
    plVar6 = (long *)param_1[7];
    plVar8 = plVar6;
    if (plVar6 != (long *)0x0) {
      do {
        *(undefined8 *)(plVar8[3] + 0x30) = 0;
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
      do {
        plVar6 = (long *)*plVar6;
        __ZdlPv();
      } while (plVar6 != (long *)0x0);
    }
    param_1[7] = 0;
    lVar9 = param_1[6];
    if (lVar9 != 0) {
      lVar18 = 0;
      do {
        *(undefined8 *)(param_1[5] + lVar18 * 8) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar9 != lVar18);
    }
    param_1[8] = 0;
  }
  _objc_release(param_1[0xc]);
  FUN_109a01200(param_1 + 10);
  plVar8 = (long *)param_1[7];
  while (plVar8 != (long *)0x0) {
    plVar8 = (long *)*plVar8;
    __ZdlPv();
  }
  lVar9 = param_1[5];
  param_1[5] = 0;
  if (lVar9 != 0) {
    __ZdlPv();
  }
  func_0x000109a00b74(plVar16);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099f9e68; end: 1099f9ecb;  */

undefined8 * FUN_1099f9e68(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
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



/* Entry: 1099f9ecc; end: 1099f9ecf;  */

undefined8 * FUN_1099f9ecc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uStack_50;
  long *plStack_48;
  
  *param_1 = &PTR_FUN_110b1fb78;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  FUN_1099f9e68(param_1 + 10,&uStack_50);
  plVar16 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar8 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar16 = param_1 + 3;
  lVar18 = *plVar16;
  lVar9 = *(long *)(lVar18 + 0x90);
  if (lVar9 == 0) goto LAB_1099f9d50;
  plVar8 = (long *)(lVar18 + 0x78);
  FUN_109a01258(plVar8,param_1[0xc]);
  if (plVar8 == (long *)0x0) goto LAB_1099f9d50;
  uVar11 = *(ulong *)(lVar18 + 0x80);
  lVar7 = *plVar8;
  uVar10 = plVar8[1];
  uVar12 = uVar11 - 1;
  if ((uVar11 & uVar12) == 0) {
    uVar10 = uVar12 & uVar10;
  }
  else if (uVar11 <= uVar10) {
    uVar14 = 0;
    if (uVar11 != 0) {
      uVar14 = uVar10 / uVar11;
    }
    uVar10 = uVar10 - uVar14 * uVar11;
  }
  plVar6 = *(long **)(*(long *)(lVar18 + 0x78) + uVar10 * 8);
  do {
    plVar13 = plVar6;
    plVar6 = (long *)*plVar13;
  } while ((long *)*plVar13 != plVar8);
  if (plVar13 == (long *)(lVar18 + 0x88)) {
LAB_1099f9cc4:
    if (lVar7 == 0) {
LAB_1099f9cf8:
      *(undefined8 *)(*(long *)(lVar18 + 0x78) + uVar10 * 8) = 0;
      lVar7 = *plVar8;
      goto LAB_1099f9d00;
    }
    uVar14 = *(ulong *)(lVar7 + 8);
    if ((uVar11 & uVar12) == 0) {
      uVar15 = uVar14 & uVar12;
    }
    else {
      uVar15 = uVar14;
      if (uVar11 <= uVar14) {
        uVar15 = 0;
        if (uVar11 != 0) {
          uVar15 = uVar14 / uVar11;
        }
        uVar15 = uVar14 - uVar15 * uVar11;
      }
    }
    if (uVar15 != uVar10) goto LAB_1099f9cf8;
LAB_1099f9d08:
    if ((uVar11 & uVar12) == 0) {
      uVar14 = uVar14 & uVar12;
    }
    else if (uVar11 <= uVar14) {
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = uVar14 / uVar11;
      }
      uVar14 = uVar14 - uVar12 * uVar11;
    }
    if (uVar14 != uVar10) {
      *(long **)(*(long *)(lVar18 + 0x78) + uVar14 * 8) = plVar13;
      lVar7 = *plVar8;
    }
  }
  else {
    uVar14 = plVar13[1];
    if ((uVar11 & uVar12) == 0) {
      uVar14 = uVar14 & uVar12;
    }
    else if (uVar11 <= uVar14) {
      uVar15 = 0;
      if (uVar11 != 0) {
        uVar15 = uVar14 / uVar11;
      }
      uVar14 = uVar14 - uVar15 * uVar11;
    }
    if (uVar14 != uVar10) goto LAB_1099f9cc4;
LAB_1099f9d00:
    if (lVar7 != 0) {
      uVar14 = *(ulong *)(lVar7 + 8);
      goto LAB_1099f9d08;
    }
  }
  *plVar13 = lVar7;
  *(long *)(lVar18 + 0x90) = lVar9 + -1;
  __ZdlPv();
  lVar18 = *plVar16;
LAB_1099f9d50:
  puVar1 = *(undefined8 **)(lVar18 + 0x60);
  puVar2 = *(undefined8 **)(lVar18 + 0x68);
  puVar17 = puVar1;
  puVar5 = puVar1;
  while ((puVar5 != puVar2 && (puVar17 = puVar1, (undefined8 *)*puVar5 != param_1))) {
    puVar1 = puVar1 + 1;
    puVar17 = puVar2;
    puVar5 = puVar5 + 1;
  }
  if (puVar2 != puVar17) {
    lVar9 = (long)puVar2 - (long)(puVar17 + 1);
    if (lVar9 != 0) {
      _memmove(puVar17,puVar17 + 1,lVar9);
    }
    *(long *)(lVar18 + 0x68) = (long)puVar17 + lVar9;
  }
  if (param_1[8] != 0) {
    plVar6 = (long *)param_1[7];
    plVar8 = plVar6;
    if (plVar6 != (long *)0x0) {
      do {
        *(undefined8 *)(plVar8[3] + 0x30) = 0;
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
      do {
        plVar6 = (long *)*plVar6;
        __ZdlPv();
      } while (plVar6 != (long *)0x0);
    }
    param_1[7] = 0;
    lVar9 = param_1[6];
    if (lVar9 != 0) {
      lVar18 = 0;
      do {
        *(undefined8 *)(param_1[5] + lVar18 * 8) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar9 != lVar18);
    }
    param_1[8] = 0;
  }
  _objc_release(param_1[0xc]);
  FUN_109a01200(param_1 + 10);
  plVar8 = (long *)param_1[7];
  while (plVar8 != (long *)0x0) {
    plVar8 = (long *)*plVar8;
    __ZdlPv();
  }
  lVar9 = param_1[5];
  param_1[5] = 0;
  if (lVar9 != 0) {
    __ZdlPv();
  }
  func_0x000109a00b74(plVar16);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099f9ed0; end: 1099f9ee3;  */

void FUN_1099f9ed0(void)

{
  FUN_1099f9bb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099f9ee4; end: 1099fa4bb;  */

void FUN_1099f9ee4(undefined8 *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong unaff_x25;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  lVar15 = param_2 + 0x78;
  FUN_109a01258(lVar15,param_3);
  if (lVar15 != 0) {
    lVar5 = *(long *)(*(long *)(lVar15 + 0x18) + 0x10);
    if (lVar5 != 0) {
      uVar14 = *(undefined8 *)(*(long *)(lVar15 + 0x18) + 8);
      __ZNSt3__119__shared_weak_count4lockEv();
      if (lVar5 != 0) {
        *param_1 = uVar14;
        param_1[1] = lVar5;
        goto LAB_1099f9f44;
      }
    }
    FUN_1092315e8();
    goto LAB_1099fa464;
  }
  lVar15 = 0;
  do {
    lVar16 = *(long *)(&UNK_10e029988 + lVar15 * 8);
    lVar5 = param_3;
    func_0x00010c0fca60();
    if (lVar16 == lVar5) goto LAB_1099f9f9c;
    lVar15 = lVar15 + 1;
  } while (lVar15 != 0x12);
  lVar15 = 0xffffffff;
LAB_1099f9f9c:
  uStack_80 = *(undefined8 *)(param_2 + 8);
  plVar8 = *(long **)(param_2 + 0x10);
  if ((plVar8 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_78 = plVar8, plVar8 == (long *)0x0)) {
    FUN_1092315e8();
    goto LAB_1099fa464;
  }
  FUN_109a01384(&plStack_70,&uStack_80);
  plVar8 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar9 = plStack_78 + 1;
    do {
      lVar5 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
  if (plStack_70 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_3);
    plStack_70[0xc] = param_3;
    FUN_1099fa4bc(param_2 + 0x60,plStack_70);
    uVar18 = plStack_70[0xc];
    uVar7 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) * -0x622015f714c7d297;
    uVar7 = (uVar18 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
    uVar17 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = *(ulong *)(param_2 + 0x80);
    if (uVar7 != 0) {
      uVar6 = uVar7 - 1;
      if ((uVar7 & uVar6) == 0) {
        unaff_x25 = uVar17 & uVar6;
      }
      else {
        unaff_x25 = uVar17;
        if (uVar7 <= uVar17) {
          uVar10 = 0;
          if (uVar7 != 0) {
            uVar10 = uVar17 / uVar7;
          }
          unaff_x25 = uVar17 - uVar10 * uVar7;
        }
      }
      plVar8 = *(long **)(*(long *)(param_2 + 0x78) + unaff_x25 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_1099fa0e8;
            uVar10 = plVar8[1];
            if (uVar10 != uVar17) break;
            if (plVar8[2] == uVar18) goto LAB_1099fa36c;
          }
          if ((uVar7 & uVar6) == 0) {
            uVar10 = uVar10 & uVar6;
          }
          else if (uVar7 <= uVar10) {
            uVar13 = 0;
            if (uVar7 != 0) {
              uVar13 = uVar10 / uVar7;
            }
            uVar10 = uVar10 - uVar13 * uVar7;
          }
        } while (uVar10 == unaff_x25);
      }
    }
LAB_1099fa0e8:
    plVar8 = (long *)0x20;
    __Znwm();
    *plVar8 = 0;
    plVar8[1] = uVar17;
    plVar8[2] = uVar18;
    plVar8[3] = (long)plStack_70;
    fVar19 = (float)(*(long *)(param_2 + 0x90) + 1);
    if ((uVar7 == 0) || (*(float *)(param_2 + 0x98) * (float)uVar7 < fVar19)) {
      uVar18 = 1;
      if (2 < uVar7) {
        uVar18 = (ulong)((uVar7 & uVar7 - 1) != 0);
      }
      uVar18 = uVar18 | uVar7 << 1;
      uVar6 = (ulong)(fVar19 / *(float *)(param_2 + 0x98));
      if (uVar18 <= uVar6) {
        uVar18 = uVar6;
      }
      if (uVar18 - 1 == 0) {
        uVar18 = 2;
      }
      else if ((uVar18 & uVar18 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar7 = *(ulong *)(param_2 + 0x80);
      }
      if (uVar7 < uVar18) {
LAB_1099fa180:
        if (uVar18 >> 0x3d != 0) {
          func_0x000104c4f740();
LAB_1099fa464:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1099fa468);
          (*pcVar4)();
        }
        lVar5 = uVar18 << 3;
        __Znwm();
        lVar16 = *(long *)(param_2 + 0x78);
        *(long *)(param_2 + 0x78) = lVar5;
        if (lVar16 != 0) {
          __ZdlPv();
        }
        uVar7 = 0;
        *(ulong *)(param_2 + 0x80) = uVar18;
        do {
          *(undefined8 *)(*(long *)(param_2 + 0x78) + uVar7 * 8) = 0;
          uVar7 = uVar7 + 1;
        } while (uVar18 != uVar7);
        plVar9 = *(long **)(param_2 + 0x88);
        uVar7 = uVar18;
        if (plVar9 != (long *)0x0) {
          uVar6 = plVar9[1];
          uVar10 = uVar18 - 1;
          if ((uVar18 & uVar10) == 0) {
            uVar6 = uVar6 & uVar10;
          }
          else if (uVar18 <= uVar6) {
            uVar13 = 0;
            if (uVar18 != 0) {
              uVar13 = uVar6 / uVar18;
            }
            uVar6 = uVar6 - uVar13 * uVar18;
          }
          *(undefined8 **)(*(long *)(param_2 + 0x78) + uVar6 * 8) = (undefined8 *)(param_2 + 0x88);
          plVar11 = (long *)*plVar9;
          while (plVar11 != (long *)0x0) {
            uVar13 = plVar11[1];
            if ((uVar18 & uVar10) == 0) {
              uVar13 = uVar13 & uVar10;
            }
            else if (uVar18 <= uVar13) {
              uVar3 = 0;
              if (uVar18 != 0) {
                uVar3 = uVar13 / uVar18;
              }
              uVar13 = uVar13 - uVar3 * uVar18;
            }
            plVar12 = plVar11;
            if (uVar13 != uVar6) {
              lVar5 = *(long *)(param_2 + 0x78);
              if (*(long *)(lVar5 + uVar13 * 8) == 0) {
                *(long **)(lVar5 + uVar13 * 8) = plVar9;
                uVar6 = uVar13;
              }
              else {
                *plVar9 = *plVar11;
                *plVar11 = **(undefined8 **)(lVar5 + uVar13 * 8);
                **(long **)(lVar5 + uVar13 * 8) = (long)plVar11;
                plVar12 = plVar9;
              }
            }
            plVar9 = plVar12;
            plVar11 = (long *)*plVar12;
          }
        }
      }
      else if (uVar18 < uVar7) {
        uVar6 = (ulong)((float)*(ulong *)(param_2 + 0x90) / *(float *)(param_2 + 0x98));
        if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar6) {
          uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
        }
        if (uVar18 <= uVar6) {
          uVar18 = uVar6;
        }
        if (uVar18 < uVar7) {
          if (uVar18 != 0) goto LAB_1099fa180;
          lVar5 = *(long *)(param_2 + 0x78);
          *(undefined8 *)(param_2 + 0x78) = 0;
          if (lVar5 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(param_2 + 0x80) = 0;
          uVar7 = 0;
        }
        else {
          uVar7 = *(ulong *)(param_2 + 0x80);
        }
      }
      if ((uVar7 & uVar7 - 1) == 0) {
        unaff_x25 = uVar7 - 1 & uVar17;
      }
      else {
        unaff_x25 = uVar17;
        if (uVar7 <= uVar17) {
          uVar18 = 0;
          if (uVar7 != 0) {
            uVar18 = uVar17 / uVar7;
          }
          unaff_x25 = uVar17 - uVar18 * uVar7;
        }
      }
    }
    lVar5 = *(long *)(param_2 + 0x78);
    plVar9 = *(long **)(lVar5 + unaff_x25 * 8);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)(param_2 + 0x88);
      *plVar8 = *plVar9;
      *plVar9 = (long)plVar8;
      *(long **)(lVar5 + unaff_x25 * 8) = plVar9;
      if (*plVar8 != 0) {
        uVar17 = *(ulong *)(*plVar8 + 8);
        if ((uVar7 & uVar7 - 1) == 0) {
          uVar17 = uVar17 & uVar7 - 1;
        }
        else if (uVar7 <= uVar17) {
          uVar18 = 0;
          if (uVar7 != 0) {
            uVar18 = uVar17 / uVar7;
          }
          uVar17 = uVar17 - uVar18 * uVar7;
        }
        plVar9 = (long *)(*(long *)(param_2 + 0x78) + uVar17 * 8);
        goto LAB_1099fa35c;
      }
    }
    else {
      *plVar8 = *plVar9;
LAB_1099fa35c:
      *plVar9 = (long)plVar8;
    }
    *(long *)(param_2 + 0x90) = *(long *)(param_2 + 0x90) + 1;
LAB_1099fa36c:
    (**(code **)(*plStack_70 + 0x10))(&uStack_80,plStack_70,lVar15,0,0x100000000,0x300000002);
    plVar8 = plStack_78;
    *param_1 = plStack_70;
    param_1[1] = plStack_68;
    plStack_70 = (long *)0x0;
    plStack_68 = (long *)0x0;
    if (plStack_78 != (long *)0x0) {
      plVar9 = plStack_78 + 1;
      do {
        lVar15 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  plVar8 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar9 = plStack_68 + 1;
    do {
      lVar15 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar15 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
    }
  }
LAB_1099f9f44:
  _objc_release(param_3);
  return;
}



/* Entry: 1099fa4bc; end: 1099fa58f;  */

void FUN_1099fa4bc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    puVar14 = puVar3 + 1;
    *puVar3 = param_2;
LAB_1099fa56c:
    param_1[1] = (long)puVar14;
    return;
  }
  lVar12 = *param_1;
  lVar13 = (long)puVar3 - lVar12;
  uVar1 = (lVar13 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar10 = param_1[2] - lVar12;
    uVar11 = (long)uVar10 >> 2;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar11 = 0x1fffffffffffffff;
    }
    if (uVar11 >> 0x3d == 0) {
      lVar7 = uVar11 << 3;
      __Znwm();
      puVar3 = (undefined8 *)(lVar7 + lVar13);
      puVar14 = puVar3 + 1;
      *puVar3 = param_2;
      _memcpy(puVar3 + -(lVar13 >> 3),lVar12,lVar13);
      *param_1 = (long)(puVar3 + -(lVar13 >> 3));
      param_1[1] = (long)puVar14;
      param_1[2] = lVar7 + uVar11 * 8;
      if (lVar12 != 0) {
        __ZdlPv(lVar12);
      }
      goto LAB_1099fa56c;
    }
  }
  else {
    func_0x000109a00568();
  }
  func_0x000104c4f740();
  puVar8 = PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220);
  func_0x00010c213a20();
  func_0x00010c1dc0a0(puVar8);
  func_0x00010c2256c0(puVar8);
  func_0x00010c1a7d00(puVar8);
  func_0x00010c18bde0(puVar8);
  func_0x00010c21d540(puVar8);
  func_0x00010c20c0c0(puVar8);
  lVar12 = *(long *)param_1[3];
  func_0x00010c0d91c0();
  if (lVar12 == 0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  else {
    lStack_c0 = param_1[1];
    plVar9 = (long *)param_1[2];
    if ((plVar9 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_b8 = plVar9, plVar9 == (long *)0x0)) {
      FUN_1092315e8();
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1099fa7d4);
      (*pcVar6)();
    }
    FUN_109a01384(&plStack_b0,&lStack_c0);
    plVar9 = plStack_b8;
    if (plStack_b8 != (long *)0x0) {
      plVar2 = plStack_b8 + 1;
      do {
        lVar13 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (plStack_b0 == (long *)0x0) {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
    }
    else {
      _objc_retain(lVar12);
      plStack_b0[0xc] = lVar12;
      FUN_1099fa4bc(param_1 + 0xc,plStack_b0);
      (**(code **)(*plStack_b0 + 0x10))(&lStack_c0,plStack_b0,param_4,0,0x100000000,0x300000002);
      plVar9 = plStack_b8;
      *extraout_x8 = plStack_b0;
      extraout_x8[1] = plStack_a8;
      plStack_b0 = (long *)0x0;
      plStack_a8 = (long *)0x0;
      if (plStack_b8 != (long *)0x0) {
        plVar2 = plStack_b8 + 1;
        do {
          lVar13 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
    }
    plVar9 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar2 = plStack_a8 + 1;
      do {
        lVar13 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  _objc_release(lVar12);
  _objc_release(puVar8);
  return;
}



/* Entry: 1099fa590; end: 1099fa81f;  */

void FUN_1099fa590(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  
  puVar5 = PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLTextureDescriptor_1126d4220);
  func_0x00010c213a20();
  func_0x00010c1dc0a0(puVar5);
  func_0x00010c2256c0(puVar5);
  func_0x00010c1a7d00(puVar5);
  func_0x00010c18bde0(puVar5);
  func_0x00010c21d540(puVar5);
  func_0x00010c20c0c0(puVar5);
  lVar6 = **(long **)(param_2 + 0x18);
  func_0x00010c0d91c0();
  if (lVar6 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uStack_70 = *(undefined8 *)(param_2 + 8);
    plVar7 = *(long **)(param_2 + 0x10);
    if ((plVar7 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_68 = plVar7, plVar7 == (long *)0x0)) {
      FUN_1092315e8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1099fa7d4);
      (*pcVar4)();
    }
    FUN_109a01384(&plStack_60,&uStack_70);
    plVar7 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (plStack_60 == (long *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      _objc_retain(lVar6);
      plStack_60[0xc] = lVar6;
      FUN_1099fa4bc(param_2 + 0x60,plStack_60);
      (**(code **)(*plStack_60 + 0x10))(&uStack_70,plStack_60,param_5,0,0x100000000,0x300000002);
      plVar7 = plStack_68;
      *param_1 = plStack_60;
      param_1[1] = plStack_58;
      plStack_60 = (long *)0x0;
      plStack_58 = (long *)0x0;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
    }
    plVar7 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar8 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  _objc_release(lVar6);
  _objc_release(puVar5);
  return;
}



/* Entry: 1099fa820; end: 1099faad3;  */

undefined8 * FUN_1099fa820(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  *param_1 = &PTR_FUN_110b1fba0;
  param_1[1] = &PTR_DAT_110b1fbc8;
  lVar10 = param_1[4];
  plVar2 = (long *)(lVar10 + 0xa0);
  func_0x000109a01560(plVar2,param_1[7]);
  if (plVar2 != (long *)0x0) {
    uVar5 = *(ulong *)(lVar10 + 0xa8);
    lVar3 = *plVar2;
    uVar4 = plVar2[1];
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar4 = uVar6 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar7 * uVar5;
    }
    plVar1 = *(long **)(*(long *)(lVar10 + 0xa0) + uVar4 * 8);
    do {
      plVar8 = plVar1;
      plVar1 = (long *)*plVar8;
    } while ((long *)*plVar8 != plVar2);
    if (plVar8 == (long *)(lVar10 + 0xb0)) {
LAB_1099fa8d8:
      if (lVar3 == 0) {
LAB_1099fa90c:
        *(undefined8 *)(*(long *)(lVar10 + 0xa0) + uVar4 * 8) = 0;
        lVar3 = *plVar2;
        goto LAB_1099fa914;
      }
      uVar7 = *(ulong *)(lVar3 + 8);
      if ((uVar5 & uVar6) == 0) {
        uVar9 = uVar7 & uVar6;
      }
      else {
        uVar9 = uVar7;
        if (uVar5 <= uVar7) {
          uVar9 = 0;
          if (uVar5 != 0) {
            uVar9 = uVar7 / uVar5;
          }
          uVar9 = uVar7 - uVar9 * uVar5;
        }
      }
      if (uVar9 != uVar4) goto LAB_1099fa90c;
LAB_1099fa91c:
      if ((uVar5 & uVar6) == 0) {
        uVar7 = uVar7 & uVar6;
      }
      else if (uVar5 <= uVar7) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar7 / uVar5;
        }
        uVar7 = uVar7 - uVar6 * uVar5;
      }
      if (uVar7 != uVar4) {
        *(long **)(*(long *)(lVar10 + 0xa0) + uVar7 * 8) = plVar8;
        lVar3 = *plVar2;
      }
    }
    else {
      uVar7 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar7 = uVar7 & uVar6;
      }
      else if (uVar5 <= uVar7) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar7 / uVar5;
        }
        uVar7 = uVar7 - uVar9 * uVar5;
      }
      if (uVar7 != uVar4) goto LAB_1099fa8d8;
LAB_1099fa914:
      if (lVar3 != 0) {
        uVar7 = *(ulong *)(lVar3 + 8);
        goto LAB_1099fa91c;
      }
    }
    *plVar8 = lVar3;
    *plVar2 = 0;
    *(long *)(lVar10 + 0xb8) = *(long *)(lVar10 + 0xb8) + -1;
    __ZdlPv();
  }
  lVar10 = param_1[6];
  if (lVar10 == 0) {
    lVar3 = param_1[7];
  }
  else {
    plVar2 = (long *)(lVar10 + 0x28);
    func_0x000109a01634(plVar2,param_1[8]);
    if (plVar2 != (long *)0x0) {
      uVar5 = *(ulong *)(lVar10 + 0x30);
      lVar3 = *plVar2;
      uVar4 = plVar2[1];
      uVar6 = uVar5 - 1;
      if ((uVar5 & uVar6) == 0) {
        uVar4 = uVar6 & uVar4;
      }
      else if (uVar5 <= uVar4) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar4 / uVar5;
        }
        uVar4 = uVar4 - uVar7 * uVar5;
      }
      plVar1 = *(long **)(*(long *)(lVar10 + 0x28) + uVar4 * 8);
      do {
        plVar8 = plVar1;
        plVar1 = (long *)*plVar8;
      } while ((long *)*plVar8 != plVar2);
      if (plVar8 == (long *)(lVar10 + 0x38)) {
LAB_1099faa04:
        if (lVar3 == 0) {
LAB_1099faa38:
          *(undefined8 *)(*(long *)(lVar10 + 0x28) + uVar4 * 8) = 0;
          lVar3 = *plVar2;
          goto LAB_1099faa40;
        }
        uVar7 = *(ulong *)(lVar3 + 8);
        if ((uVar5 & uVar6) == 0) {
          uVar9 = uVar7 & uVar6;
        }
        else {
          uVar9 = uVar7;
          if (uVar5 <= uVar7) {
            uVar9 = 0;
            if (uVar5 != 0) {
              uVar9 = uVar7 / uVar5;
            }
            uVar9 = uVar7 - uVar9 * uVar5;
          }
        }
        if (uVar9 != uVar4) goto LAB_1099faa38;
LAB_1099faa48:
        if ((uVar5 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (uVar5 <= uVar7) {
          uVar6 = 0;
          if (uVar5 != 0) {
            uVar6 = uVar7 / uVar5;
          }
          uVar7 = uVar7 - uVar6 * uVar5;
        }
        if (uVar7 != uVar4) {
          *(long **)(*(long *)(lVar10 + 0x28) + uVar7 * 8) = plVar8;
          lVar3 = *plVar2;
        }
      }
      else {
        uVar7 = plVar8[1];
        if ((uVar5 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (uVar5 <= uVar7) {
          uVar9 = 0;
          if (uVar5 != 0) {
            uVar9 = uVar7 / uVar5;
          }
          uVar7 = uVar7 - uVar9 * uVar5;
        }
        if (uVar7 != uVar4) goto LAB_1099faa04;
LAB_1099faa40:
        if (lVar3 != 0) {
          uVar7 = *(ulong *)(lVar3 + 8);
          goto LAB_1099faa48;
        }
      }
      *plVar8 = lVar3;
      *plVar2 = 0;
      *(long *)(lVar10 + 0x40) = *(long *)(lVar10 + 0x40) + -1;
      __ZdlPv();
      lVar10 = param_1[6];
    }
    lVar3 = param_1[7];
    if (lVar3 == *(long *)(lVar10 + 0x60)) goto LAB_1099faaac;
  }
  _objc_release(lVar3);
LAB_1099faaac:
  func_0x000109a00b74(param_1 + 4);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099faad4; end: 1099faadf;  */

undefined8 * FUN_1099faad4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  *param_1 = &PTR_FUN_110b1fba0;
  param_1[1] = &PTR_DAT_110b1fbc8;
  lVar10 = param_1[4];
  plVar2 = (long *)(lVar10 + 0xa0);
  func_0x000109a01560(plVar2,param_1[7]);
  if (plVar2 != (long *)0x0) {
    uVar5 = *(ulong *)(lVar10 + 0xa8);
    lVar3 = *plVar2;
    uVar4 = plVar2[1];
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar4 = uVar6 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar7 * uVar5;
    }
    plVar1 = *(long **)(*(long *)(lVar10 + 0xa0) + uVar4 * 8);
    do {
      plVar8 = plVar1;
      plVar1 = (long *)*plVar8;
    } while ((long *)*plVar8 != plVar2);
    if (plVar8 == (long *)(lVar10 + 0xb0)) {
LAB_1099fa8d8:
      if (lVar3 == 0) {
LAB_1099fa90c:
        *(undefined8 *)(*(long *)(lVar10 + 0xa0) + uVar4 * 8) = 0;
        lVar3 = *plVar2;
        goto LAB_1099fa914;
      }
      uVar7 = *(ulong *)(lVar3 + 8);
      if ((uVar5 & uVar6) == 0) {
        uVar9 = uVar7 & uVar6;
      }
      else {
        uVar9 = uVar7;
        if (uVar5 <= uVar7) {
          uVar9 = 0;
          if (uVar5 != 0) {
            uVar9 = uVar7 / uVar5;
          }
          uVar9 = uVar7 - uVar9 * uVar5;
        }
      }
      if (uVar9 != uVar4) goto LAB_1099fa90c;
LAB_1099fa91c:
      if ((uVar5 & uVar6) == 0) {
        uVar7 = uVar7 & uVar6;
      }
      else if (uVar5 <= uVar7) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar7 / uVar5;
        }
        uVar7 = uVar7 - uVar6 * uVar5;
      }
      if (uVar7 != uVar4) {
        *(long **)(*(long *)(lVar10 + 0xa0) + uVar7 * 8) = plVar8;
        lVar3 = *plVar2;
      }
    }
    else {
      uVar7 = plVar8[1];
      if ((uVar5 & uVar6) == 0) {
        uVar7 = uVar7 & uVar6;
      }
      else if (uVar5 <= uVar7) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar7 / uVar5;
        }
        uVar7 = uVar7 - uVar9 * uVar5;
      }
      if (uVar7 != uVar4) goto LAB_1099fa8d8;
LAB_1099fa914:
      if (lVar3 != 0) {
        uVar7 = *(ulong *)(lVar3 + 8);
        goto LAB_1099fa91c;
      }
    }
    *plVar8 = lVar3;
    *plVar2 = 0;
    *(long *)(lVar10 + 0xb8) = *(long *)(lVar10 + 0xb8) + -1;
    __ZdlPv();
  }
  lVar10 = param_1[6];
  if (lVar10 == 0) {
    lVar3 = param_1[7];
  }
  else {
    plVar2 = (long *)(lVar10 + 0x28);
    func_0x000109a01634(plVar2,param_1[8]);
    if (plVar2 != (long *)0x0) {
      uVar5 = *(ulong *)(lVar10 + 0x30);
      lVar3 = *plVar2;
      uVar4 = plVar2[1];
      uVar6 = uVar5 - 1;
      if ((uVar5 & uVar6) == 0) {
        uVar4 = uVar6 & uVar4;
      }
      else if (uVar5 <= uVar4) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar4 / uVar5;
        }
        uVar4 = uVar4 - uVar7 * uVar5;
      }
      plVar1 = *(long **)(*(long *)(lVar10 + 0x28) + uVar4 * 8);
      do {
        plVar8 = plVar1;
        plVar1 = (long *)*plVar8;
      } while ((long *)*plVar8 != plVar2);
      if (plVar8 == (long *)(lVar10 + 0x38)) {
LAB_1099faa04:
        if (lVar3 == 0) {
LAB_1099faa38:
          *(undefined8 *)(*(long *)(lVar10 + 0x28) + uVar4 * 8) = 0;
          lVar3 = *plVar2;
          goto LAB_1099faa40;
        }
        uVar7 = *(ulong *)(lVar3 + 8);
        if ((uVar5 & uVar6) == 0) {
          uVar9 = uVar7 & uVar6;
        }
        else {
          uVar9 = uVar7;
          if (uVar5 <= uVar7) {
            uVar9 = 0;
            if (uVar5 != 0) {
              uVar9 = uVar7 / uVar5;
            }
            uVar9 = uVar7 - uVar9 * uVar5;
          }
        }
        if (uVar9 != uVar4) goto LAB_1099faa38;
LAB_1099faa48:
        if ((uVar5 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (uVar5 <= uVar7) {
          uVar6 = 0;
          if (uVar5 != 0) {
            uVar6 = uVar7 / uVar5;
          }
          uVar7 = uVar7 - uVar6 * uVar5;
        }
        if (uVar7 != uVar4) {
          *(long **)(*(long *)(lVar10 + 0x28) + uVar7 * 8) = plVar8;
          lVar3 = *plVar2;
        }
      }
      else {
        uVar7 = plVar8[1];
        if ((uVar5 & uVar6) == 0) {
          uVar7 = uVar7 & uVar6;
        }
        else if (uVar5 <= uVar7) {
          uVar9 = 0;
          if (uVar5 != 0) {
            uVar9 = uVar7 / uVar5;
          }
          uVar7 = uVar7 - uVar9 * uVar5;
        }
        if (uVar7 != uVar4) goto LAB_1099faa04;
LAB_1099faa40:
        if (lVar3 != 0) {
          uVar7 = *(ulong *)(lVar3 + 8);
          goto LAB_1099faa48;
        }
      }
      *plVar8 = lVar3;
      *plVar2 = 0;
      *(long *)(lVar10 + 0x40) = *(long *)(lVar10 + 0x40) + -1;
      __ZdlPv();
      lVar10 = param_1[6];
    }
    lVar3 = param_1[7];
    if (lVar3 == *(long *)(lVar10 + 0x60)) goto LAB_1099faaac;
  }
  _objc_release(lVar3);
LAB_1099faaac:
  func_0x000109a00b74(param_1 + 4);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099faae0; end: 1099fab0b;  */

void FUN_1099faae0(void)

{
  FUN_1099fa820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099fab0c; end: 1099fab3b;  */

undefined8 FUN_1099fab0c(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_2 = 1;
  *param_3 = 0;
  *param_4 = 0;
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1099fab3c; end: 1099fb0af;  */

/* WARNING: Removing unreachable block (ram,0x0001099fac70) */
/* WARNING: Removing unreachable block (ram,0x0001099fac74) */
/* WARNING: Removing unreachable block (ram,0x0001099fac7c) */
/* WARNING: Removing unreachable block (ram,0x0001099fac84) */
/* WARNING: Removing unreachable block (ram,0x0001099fac88) */

void FUN_1099fab3c(undefined8 *param_1,long param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  
  _objc_retain(param_3);
  lVar7 = param_2 + 0xa0;
  func_0x000109a01560(lVar7,param_3);
  if (lVar7 != 0) {
    lVar5 = *(long *)(*(long *)(lVar7 + 0x18) + 0x18);
    if (lVar5 != 0) {
      uVar15 = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x10);
      __ZNSt3__119__shared_weak_count4lockEv();
      if (lVar5 != 0) {
        *param_1 = uVar15;
        param_1[1] = lVar5;
        goto LAB_1099faff4;
      }
    }
    FUN_1092315e8();
    goto LAB_1099fb064;
  }
  uVar15 = *(undefined8 *)(param_2 + 8);
  plVar9 = *(long **)(param_2 + 0x10);
  if ((plVar9 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 == (long *)0x0))
  {
    FUN_1092315e8();
    goto LAB_1099fb064;
  }
  _objc_retain(param_3);
  puVar6 = (undefined8 *)0x60;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar17 = puVar6 + 3;
  *puVar17 = &PTR_FUN_110b1fba0;
  *puVar6 = &PTR_DAT_110b205e8;
  puVar6[5] = 0;
  puVar6[4] = &PTR_DAT_110b1fbc8;
  puVar6[6] = 0;
  puVar6[7] = uVar15;
  plVar10 = plVar9 + 1;
  puVar6[8] = plVar9;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = *plVar10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar6[9] = 0;
  puVar6[10] = param_3;
  puVar6[0xb] = 0xffffffffffffffff;
  do {
    lVar7 = *plVar10;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar7 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
  FUN_109a01710(puVar6,puVar6 + 5,puVar17);
  uVar8 = ((ulong)(uint)((int)param_3 << 3) + 8 ^ param_3 >> 0x20) * -0x622015f714c7d297;
  uVar8 = (param_3 >> 0x20 ^ uVar8 >> 0x2f ^ uVar8) * -0x622015f714c7d297;
  puVar18 = (undefined8 *)((uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297);
  puVar19 = *(undefined8 **)(param_2 + 0xa8);
  puVar16 = puVar6;
  if (puVar19 != (undefined8 *)0x0) {
    uVar8 = (long)puVar19 - 1;
    if (((ulong)puVar19 & uVar8) == 0) {
      puVar16 = (undefined8 *)(uVar8 & (ulong)puVar18);
    }
    else {
      puVar16 = puVar18;
      if (puVar19 <= puVar18) {
        uVar3 = 0;
        if (puVar19 != (undefined8 *)0x0) {
          uVar3 = (ulong)puVar18 / (ulong)puVar19;
        }
        puVar16 = (undefined8 *)((long)puVar18 - uVar3 * (long)puVar19);
      }
    }
    plVar9 = *(long **)(*(long *)(param_2 + 0xa0) + (long)puVar16 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_1099fad68;
          puVar11 = (undefined8 *)plVar9[1];
          if (puVar11 != puVar18) break;
          if (plVar9[2] == param_3) goto LAB_1099fafec;
        }
        if (((ulong)puVar19 & uVar8) == 0) {
          puVar11 = (undefined8 *)((ulong)puVar11 & uVar8);
        }
        else if (puVar19 <= puVar11) {
          uVar3 = 0;
          if (puVar19 != (undefined8 *)0x0) {
            uVar3 = (ulong)puVar11 / (ulong)puVar19;
          }
          puVar11 = (undefined8 *)((long)puVar11 - uVar3 * (long)puVar19);
        }
      } while (puVar11 == puVar16);
    }
  }
LAB_1099fad68:
  plVar9 = (long *)0x20;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = (long)puVar18;
  plVar9[2] = param_3;
  plVar9[3] = (long)puVar17;
  fVar20 = (float)(*(long *)(param_2 + 0xb8) + 1);
  if ((puVar19 == (undefined8 *)0x0) || (*(float *)(param_2 + 0xc0) * (float)puVar19 < fVar20)) {
    uVar8 = 1;
    if ((undefined8 *)0x2 < puVar19) {
      uVar8 = (ulong)(((ulong)puVar19 & (long)puVar19 - 1U) != 0);
    }
    puVar16 = (undefined8 *)(uVar8 | (long)puVar19 << 1);
    puVar11 = (undefined8 *)(long)(fVar20 / *(float *)(param_2 + 0xc0));
    if (puVar16 <= puVar11) {
      puVar16 = puVar11;
    }
    if ((long)puVar16 - 1U == 0) {
      puVar16 = (undefined8 *)0x2;
    }
    else if (((ulong)puVar16 & (long)puVar16 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      puVar19 = *(undefined8 **)(param_2 + 0xa8);
    }
    if (puVar19 < puVar16) {
LAB_1099fae00:
      if ((ulong)puVar16 >> 0x3d != 0) {
        func_0x000104c4f740();
LAB_1099fb064:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1099fb068);
        (*pcVar4)();
      }
      lVar7 = (long)puVar16 << 3;
      __Znwm();
      lVar5 = *(long *)(param_2 + 0xa0);
      *(long *)(param_2 + 0xa0) = lVar7;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      puVar19 = (undefined8 *)0x0;
      *(undefined8 **)(param_2 + 0xa8) = puVar16;
      do {
        *(undefined8 *)(*(long *)(param_2 + 0xa0) + (long)puVar19 * 8) = 0;
        puVar19 = (undefined8 *)((long)puVar19 + 1);
      } while (puVar16 != puVar19);
      plVar10 = *(long **)(param_2 + 0xb0);
      puVar19 = puVar16;
      if (plVar10 != (long *)0x0) {
        puVar11 = (undefined8 *)plVar10[1];
        uVar8 = (long)puVar16 - 1;
        if (((ulong)puVar16 & uVar8) == 0) {
          puVar11 = (undefined8 *)((ulong)puVar11 & uVar8);
        }
        else if (puVar16 <= puVar11) {
          uVar3 = 0;
          if (puVar16 != (undefined8 *)0x0) {
            uVar3 = (ulong)puVar11 / (ulong)puVar16;
          }
          puVar11 = (undefined8 *)((long)puVar11 - uVar3 * (long)puVar16);
        }
        *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)puVar11 * 8) =
             (undefined8 *)(param_2 + 0xb0);
        plVar12 = (long *)*plVar10;
        while (plVar12 != (long *)0x0) {
          puVar14 = (undefined8 *)plVar12[1];
          if (((ulong)puVar16 & uVar8) == 0) {
            puVar14 = (undefined8 *)((ulong)puVar14 & uVar8);
          }
          else if (puVar16 <= puVar14) {
            uVar3 = 0;
            if (puVar16 != (undefined8 *)0x0) {
              uVar3 = (ulong)puVar14 / (ulong)puVar16;
            }
            puVar14 = (undefined8 *)((long)puVar14 - uVar3 * (long)puVar16);
          }
          plVar13 = plVar12;
          if (puVar14 != puVar11) {
            lVar7 = *(long *)(param_2 + 0xa0);
            if (*(long *)(lVar7 + (long)puVar14 * 8) == 0) {
              *(long **)(lVar7 + (long)puVar14 * 8) = plVar10;
              puVar11 = puVar14;
            }
            else {
              *plVar10 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar7 + (long)puVar14 * 8);
              **(long **)(lVar7 + (long)puVar14 * 8) = (long)plVar12;
              plVar13 = plVar10;
            }
          }
          plVar10 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (puVar16 < puVar19) {
      puVar11 = (undefined8 *)(long)((float)*(ulong *)(param_2 + 0xb8) / *(float *)(param_2 + 0xc0))
      ;
      if ((puVar19 < (undefined8 *)0x3) || (((ulong)puVar19 & (long)puVar19 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((undefined8 *)0x1 < puVar11) {
        puVar11 = (undefined8 *)(1L << (-LZCOUNT((long)puVar11 + -1) & 0x3fU));
      }
      if (puVar16 <= puVar11) {
        puVar16 = puVar11;
      }
      if (puVar16 < puVar19) {
        if (puVar16 != (undefined8 *)0x0) goto LAB_1099fae00;
        lVar7 = *(long *)(param_2 + 0xa0);
        *(undefined8 *)(param_2 + 0xa0) = 0;
        if (lVar7 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_2 + 0xa8) = 0;
        puVar19 = (undefined8 *)0x0;
      }
      else {
        puVar19 = *(undefined8 **)(param_2 + 0xa8);
      }
    }
    if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
      puVar16 = (undefined8 *)((long)puVar19 - 1U & (ulong)puVar18);
    }
    else {
      puVar16 = puVar18;
      if (puVar19 <= puVar18) {
        uVar8 = 0;
        if (puVar19 != (undefined8 *)0x0) {
          uVar8 = (ulong)puVar18 / (ulong)puVar19;
        }
        puVar16 = (undefined8 *)((long)puVar18 - uVar8 * (long)puVar19);
      }
    }
  }
  lVar7 = *(long *)(param_2 + 0xa0);
  plVar10 = *(long **)(lVar7 + (long)puVar16 * 8);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)(param_2 + 0xb0);
    *plVar9 = *plVar10;
    *plVar10 = (long)plVar9;
    *(long **)(lVar7 + (long)puVar16 * 8) = plVar10;
    if (*plVar9 != 0) {
      puVar16 = *(undefined8 **)(*plVar9 + 8);
      if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
        puVar16 = (undefined8 *)((ulong)puVar16 & (long)puVar19 - 1U);
      }
      else if (puVar19 <= puVar16) {
        uVar8 = 0;
        if (puVar19 != (undefined8 *)0x0) {
          uVar8 = (ulong)puVar16 / (ulong)puVar19;
        }
        puVar16 = (undefined8 *)((long)puVar16 - uVar8 * (long)puVar19);
      }
      plVar10 = (long *)(*(long *)(param_2 + 0xa0) + (long)puVar16 * 8);
      goto LAB_1099fafdc;
    }
  }
  else {
    *plVar9 = *plVar10;
LAB_1099fafdc:
    *plVar10 = (long)plVar9;
  }
  *(long *)(param_2 + 0xb8) = *(long *)(param_2 + 0xb8) + 1;
LAB_1099fafec:
  *param_1 = puVar17;
  param_1[1] = puVar6;
LAB_1099faff4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1099fb0b0; end: 1099fb497;  */

long FUN_1099fb0b0(long *param_1,long param_2,undefined4 param_3,byte *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  uint7 uVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  long *plVar16;
  byte bVar17;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  long *plStack_90;
  long *plStack_88;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = 0;
  uVar15 = (ulong)param_4 >> 0x20;
  uStack_7c = param_3;
  uStack_78 = (int)param_4;
  uStack_74 = (int)((ulong)param_4 >> 0x20);
  uStack_70 = param_5;
  uStack_68 = param_6;
  pcVar14 = (char *)0xcbf29ce484222325;
  do {
    pcVar14 = (char *)(((ulong)pcVar14 ^ (long)*(char *)((long)&uStack_7c + lVar12)) * 0x100000001b3
                      );
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x1c);
  lVar12 = param_2 + 0x28;
  pcVar11 = pcVar14;
  func_0x000109a01634();
  if (lVar12 == 0) {
    if (*(long *)(param_2 + 0x50) == 0) {
      plVar16 = *(long **)(param_2 + 0x20);
      lVar6 = *(long *)(param_2 + 0x20);
      lVar12 = *(long *)(param_2 + 0x18);
      plVar8 = (long *)0x60;
      __Znwm();
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = (long)&PTR_DAT_110b205e8;
      plStack_90 = plVar8 + 3;
      if (plVar16 != (long *)0x0) {
        plVar1 = plVar16 + 1;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar13 = *(long *)(param_2 + 0x60);
      plVar8[5] = 0;
      plVar8[6] = 0;
      plVar8[3] = (long)&PTR_FUN_110b1fba0;
      plVar8[4] = (long)&PTR_DAT_110b1fbc8;
      plVar8[8] = lVar6;
      plVar8[7] = lVar12;
      if (plVar16 == (long *)0x0) {
        plVar8[9] = param_2;
        plVar8[10] = lVar13;
        plVar8[0xb] = (long)pcVar14;
      }
      else {
        plVar1 = plVar16 + 1;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar8[9] = param_2;
        plVar8[10] = lVar13;
        plVar8[0xb] = (long)pcVar14;
        do {
          lVar12 = *plVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      plStack_88 = plVar8;
      FUN_109a01710(plVar8,plVar8 + 5,plStack_90);
      FUN_1099f9e68((long *)(param_2 + 0x50),&plStack_90);
      plVar8 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar16 = plStack_88 + 1;
        do {
          lVar12 = *plVar16;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar5) {
            *plVar16 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      lVar12 = param_2 + 0x28;
      FUN_109a017b8(lVar12,pcVar14,pcVar14,*(undefined8 *)(param_2 + 0x50));
      lVar13 = *(long *)(param_2 + 0x58);
      lVar6 = *(long *)(param_2 + 0x50);
      param_1[1] = *(long *)(param_2 + 0x58);
      *param_1 = lVar6;
      if (lVar13 != 0) {
        plVar8 = (long *)(lVar13 + 8);
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return lVar12;
    }
    lVar12 = *(long *)(param_2 + 0x60);
    _objc_retain(lVar12);
    if (uVar15 == 0) {
      func_0x00010bf0a040(lVar12);
    }
    func_0x00010c26cf40(lVar12);
    func_0x00010c0ce900(lVar12);
    lVar6 = lVar12;
    func_0x00010c0d9180();
    if (lVar6 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      _objc_retain(lVar6);
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      plVar16 = *(long **)(param_2 + 0x20);
      puVar7 = (undefined8 *)0x60;
      __Znwm();
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = &PTR_DAT_110b205e8;
      plVar8 = puVar7 + 3;
      if (plVar16 == (long *)0x0) {
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[3] = &PTR_FUN_110b1fba0;
        puVar7[4] = &PTR_DAT_110b1fbc8;
        puVar7[7] = uVar2;
        puVar7[8] = 0;
        puVar7[9] = param_2;
        puVar7[10] = lVar6;
        puVar7[0xb] = pcVar14;
      }
      else {
        plVar1 = plVar16 + 1;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[3] = &PTR_FUN_110b1fba0;
        puVar7[4] = &PTR_DAT_110b1fbc8;
        puVar7[7] = uVar2;
        puVar7[8] = plVar16;
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar7[9] = param_2;
        puVar7[10] = lVar6;
        puVar7[0xb] = pcVar14;
        do {
          lVar13 = *plVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      plStack_90 = plVar8;
      plStack_88 = puVar7;
      FUN_109a01710(puVar7,puVar7 + 5,plVar8);
      FUN_109a017b8(param_2 + 0x28,pcVar14,pcVar14,plVar8);
      *param_1 = (long)plVar8;
      param_1[1] = (long)puVar7;
    }
    _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar12);
    return lVar12;
  }
  lVar6 = *(long *)(*(long *)(lVar12 + 0x18) + 0x18);
  if (lVar6 != 0) {
    lVar12 = *(long *)(*(long *)(lVar12 + 0x18) + 0x10);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (lVar6 != 0) {
      *param_1 = lVar12;
      param_1[1] = lVar6;
      return lVar6;
    }
  }
  lVar6 = 0;
  FUN_1092315e8();
  _objc_release();
  __Unwind_Resume();
  lVar12 = 0;
  *param_4 = 0;
  uStack_128 = *(undefined8 *)(pcVar11 + 0x18);
  uStack_130 = *(undefined8 *)(pcVar11 + 0x10);
  uStack_118 = (undefined4)*(undefined8 *)(pcVar11 + 0x28);
  uStack_138 = *(undefined8 *)(pcVar11 + 8);
  uStack_140 = *(undefined8 *)pcVar11;
  uStack_10c = *(undefined8 *)(pcVar11 + 0x34);
  uStack_114 = (undefined4)*(undefined8 *)(pcVar11 + 0x2c);
  uStack_110 = (undefined4)((ulong)*(undefined8 *)(pcVar11 + 0x2c) >> 0x20);
  uStack_120 = *(ulong *)(pcVar11 + 0x20) & 0xffffffff00000000;
  uStack_104 = 0;
  uVar15 = 0xcbf29ce484222325;
  do {
    uVar15 = (uVar15 ^ (long)*(char *)((long)&uStack_140 + lVar12)) * 0x100000001b3;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x40);
  if (*pcVar11 == '\x01') {
    uVar4 = CONCAT16(-((int)((ulong)*(undefined8 *)(pcVar11 + 0x10) >> 0x20) == 0),
                     (uint6)CONCAT14(-((int)*(undefined8 *)(pcVar11 + 0x10) == 0),
                                     (uint)CONCAT12(-((int)((ulong)*(undefined8 *)(pcVar11 + 8) >>
                                                           0x20) == 0),
                                                    (ushort)(byte)-((int)*(undefined8 *)
                                                                          (pcVar11 + 8) == 0)))) &
            CONCAT16(-((int)((ulong)*(undefined8 *)(pcVar11 + 0x30) >> 0x20) == 0),
                     (uint6)CONCAT14(-((int)*(undefined8 *)(pcVar11 + 0x30) == 0),
                                     (uint)CONCAT12(-((int)((ulong)*(undefined8 *)(pcVar11 + 0x28)
                                                           >> 0x20) == 0),
                                                    (ushort)(byte)-((int)*(undefined8 *)
                                                                          (pcVar11 + 0x28) == 0))));
    bVar17 = NEON_uminv(CONCAT17(-((char)(((int)((ulong)*(undefined8 *)(pcVar11 + 0x20) >> 0x20) ==
                                          0) * -0x80) < '\0'),
                                 CONCAT16(-((char)(((int)*(undefined8 *)(pcVar11 + 0x20) == 0) *
                                                  -0x80) < '\0'),
                                          CONCAT15(-((char)(((int)((ulong)*(undefined8 *)
                                                                           (pcVar11 + 0x18) >> 0x20)
                                                            == 0) * -0x80) < '\0'),
                                                   CONCAT14(-((char)(((int)*(undefined8 *)
                                                                            (pcVar11 + 0x18) == 0) *
                                                                    -0x80) < '\0'),
                                                            CONCAT13(-((char)((char)(uVar4 >> 0x30)
                                                                             << 7) < '\0'),
                                                                     CONCAT12(-((char)((char)(uVar4 
                                                  >> 0x20) << 7) < '\0'),
                                                  CONCAT11(-((char)((char)(uVar4 >> 0x10) << 7) <
                                                            '\0'),-((char)((char)uVar4 << 7) < '\0')
                                                          ))))))),1);
    bVar5 = true;
    if (((bVar17 & 1) != 0) && (*(int *)(pcVar11 + 0x38) == 0)) {
      bVar5 = *(int *)(pcVar11 + 0x3c) != 0;
    }
    *param_4 = bVar5;
  }
  lVar12 = lVar6 + 200;
  FUN_109a01bc4(lVar12,uVar15);
  if (lVar12 == 0) {
    puVar9 = PTR__OBJC_CLASS___MTLDepthStencilDescriptor_1126d94e8;
    _objc_alloc_init(PTR__OBJC_CLASS___MTLDepthStencilDescriptor_1126d94e8);
    func_0x00010c18be40(puVar9);
    func_0x00010c18bfc0(puVar9);
    if ((*pcVar11 == '\x01') && ((*param_4 & 1) != 0)) {
      puVar10 = PTR__OBJC_CLASS___MTLStencilDescriptor_1126d94e0;
      _objc_alloc_init(PTR__OBJC_CLASS___MTLStencilDescriptor_1126d94e0);
      func_0x00010c16e280(puVar9);
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bf139c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a5c0();
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bf139c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bf40();
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bf139c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bec0();
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bf139c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a5a0();
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bf139c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e7e80();
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bf139c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227420();
      _objc_release(puVar10);
      puVar10 = PTR__OBJC_CLASS___MTLStencilDescriptor_1126d94e0;
      _objc_alloc_init(PTR__OBJC_CLASS___MTLStencilDescriptor_1126d94e0);
      func_0x00010c1a12a0(puVar9);
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bfbb260(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a5c0();
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bfbb260(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bf40();
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bfbb260(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bec0();
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bfbb260(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a5a0();
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bfbb260(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e7e80();
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010bfbb260(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227420();
      _objc_release(puVar10);
    }
    lVar12 = **(long **)(lVar6 + 0x18);
    func_0x00010c0d8880(lVar12);
    _objc_retain();
    FUN_109a01c60(lVar6 + 200,uVar15,uVar15,lVar12);
    _objc_release(puVar9);
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x18);
    _objc_retain(lVar12);
  }
  _objc_release(lVar12);
  return lVar12;
}



/* Entry: 1099fb498; end: 1099fb91f;  */

undefined8 FUN_1099fb498(long param_1,char *param_2,byte *param_3)

{
  uint7 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  
  lVar5 = 0;
  *param_3 = 0;
  uStack_88 = *(undefined8 *)(param_2 + 0x18);
  uStack_90 = *(undefined8 *)(param_2 + 0x10);
  uStack_78 = (undefined4)*(undefined8 *)(param_2 + 0x28);
  uStack_98 = *(undefined8 *)(param_2 + 8);
  uStack_a0 = *(undefined8 *)param_2;
  uStack_6c = *(undefined8 *)(param_2 + 0x34);
  uStack_74 = (undefined4)*(undefined8 *)(param_2 + 0x2c);
  uStack_70 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
  uStack_80 = *(ulong *)(param_2 + 0x20) & 0xffffffff00000000;
  uStack_64 = 0;
  uVar6 = 0xcbf29ce484222325;
  do {
    uVar6 = (uVar6 ^ (long)*(char *)((long)&uStack_a0 + lVar5)) * 0x100000001b3;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x40);
  if (*param_2 == '\x01') {
    uVar1 = CONCAT16(-((int)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) == 0),
                     (uint6)CONCAT14(-((int)*(undefined8 *)(param_2 + 0x10) == 0),
                                     (uint)CONCAT12(-((int)((ulong)*(undefined8 *)(param_2 + 8) >>
                                                           0x20) == 0),
                                                    (ushort)(byte)-((int)*(undefined8 *)
                                                                          (param_2 + 8) == 0)))) &
            CONCAT16(-((int)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) == 0),
                     (uint6)CONCAT14(-((int)*(undefined8 *)(param_2 + 0x30) == 0),
                                     (uint)CONCAT12(-((int)((ulong)*(undefined8 *)(param_2 + 0x28)
                                                           >> 0x20) == 0),
                                                    (ushort)(byte)-((int)*(undefined8 *)
                                                                          (param_2 + 0x28) == 0))));
    bVar8 = NEON_uminv(CONCAT17(-((char)(((int)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) == 0
                                         ) * -0x80) < '\0'),
                                CONCAT16(-((char)(((int)*(undefined8 *)(param_2 + 0x20) == 0) *
                                                 -0x80) < '\0'),
                                         CONCAT15(-((char)(((int)((ulong)*(undefined8 *)
                                                                          (param_2 + 0x18) >> 0x20)
                                                           == 0) * -0x80) < '\0'),
                                                  CONCAT14(-((char)(((int)*(undefined8 *)
                                                                           (param_2 + 0x18) == 0) *
                                                                   -0x80) < '\0'),
                                                           CONCAT13(-((char)((char)(uVar1 >> 0x30)
                                                                            << 7) < '\0'),
                                                                    CONCAT12(-((char)((char)(uVar1 
                                                  >> 0x20) << 7) < '\0'),
                                                  CONCAT11(-((char)((char)(uVar1 >> 0x10) << 7) <
                                                            '\0'),-((char)((char)uVar1 << 7) < '\0')
                                                          ))))))),1);
    bVar2 = true;
    if (((bVar8 & 1) != 0) && (*(int *)(param_2 + 0x38) == 0)) {
      bVar2 = *(int *)(param_2 + 0x3c) != 0;
    }
    *param_3 = bVar2;
  }
  lVar5 = param_1 + 200;
  FUN_109a01bc4(lVar5,uVar6);
  if (lVar5 == 0) {
    puVar3 = PTR__OBJC_CLASS___MTLDepthStencilDescriptor_1126d94e8;
    _objc_alloc_init(PTR__OBJC_CLASS___MTLDepthStencilDescriptor_1126d94e8);
    func_0x00010c18be40(puVar3);
    func_0x00010c18bfc0(puVar3);
    if ((*param_2 == '\x01') && ((*param_3 & 1) != 0)) {
      puVar4 = PTR__OBJC_CLASS___MTLStencilDescriptor_1126d94e0;
      _objc_alloc_init(PTR__OBJC_CLASS___MTLStencilDescriptor_1126d94e0);
      func_0x00010c16e280(puVar3);
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bf139c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a5c0();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bf139c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bf40();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bf139c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bec0();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bf139c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a5a0();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bf139c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e7e80();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bf139c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227420();
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___MTLStencilDescriptor_1126d94e0;
      _objc_alloc_init(PTR__OBJC_CLASS___MTLStencilDescriptor_1126d94e0);
      func_0x00010c1a12a0(puVar3);
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bfbb260(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a5c0();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bfbb260(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bf40();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bfbb260(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18bec0();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bfbb260(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a5a0();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bfbb260(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e7e80();
      _objc_release(puVar4);
      puVar4 = puVar3;
      func_0x00010bfbb260(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c227420();
      _objc_release(puVar4);
    }
    uVar7 = **(undefined8 **)(param_1 + 0x18);
    func_0x00010c0d8880(uVar7);
    _objc_retain();
    FUN_109a01c60(param_1 + 200,uVar6,uVar6,uVar7);
    _objc_release(puVar3);
  }
  else {
    uVar7 = *(undefined8 *)(lVar5 + 0x18);
    _objc_retain(uVar7);
  }
  _objc_release(uVar7);
  return uVar7;
}



/* Entry: 1099fb920; end: 1099fba97;  */

undefined8 * FUN_1099fb920(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  *param_1 = &PTR_FUN_110b1fbf0;
  lVar10 = *(long *)(*(long *)(param_1[3] + 0x18) + 0x18);
  plVar2 = (long *)(lVar10 + 0x118);
  FUN_109a02060(plVar2,param_1[0xf]);
  uVar5 = *(ulong *)(lVar10 + 0x120);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(lVar10 + 0x118) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(lVar10 + 0x128)) {
LAB_1099fb9d8:
    if (lVar3 == 0) {
LAB_1099fba0c:
      *(undefined8 *)(*(long *)(lVar10 + 0x118) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1099fba14;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_1099fba0c;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_1099fb9d8;
LAB_1099fba14:
    if (lVar3 == 0) goto LAB_1099fba50;
    uVar8 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*(long *)(lVar10 + 0x118) + uVar8 * 8) = plVar7;
    lVar3 = *plVar2;
  }
LAB_1099fba50:
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(lVar10 + 0x130) = *(long *)(lVar10 + 0x130) + -1;
  __ZdlPv();
  _objc_release(param_1[0xd]);
  FUN_109a02008(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099fba98; end: 1099fba9b;  */

undefined8 * FUN_1099fba98(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  *param_1 = &PTR_FUN_110b1fbf0;
  lVar10 = *(long *)(*(long *)(param_1[3] + 0x18) + 0x18);
  plVar2 = (long *)(lVar10 + 0x118);
  FUN_109a02060(plVar2,param_1[0xf]);
  uVar5 = *(ulong *)(lVar10 + 0x120);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(lVar10 + 0x118) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(lVar10 + 0x128)) {
LAB_1099fb9d8:
    if (lVar3 == 0) {
LAB_1099fba0c:
      *(undefined8 *)(*(long *)(lVar10 + 0x118) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1099fba14;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_1099fba0c;
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_1099fb9d8;
LAB_1099fba14:
    if (lVar3 == 0) goto LAB_1099fba50;
    uVar8 = *(ulong *)(lVar3 + 8);
  }
  if ((uVar5 & uVar6) == 0) {
    uVar8 = uVar8 & uVar6;
  }
  else if (uVar5 <= uVar8) {
    uVar6 = 0;
    if (uVar5 != 0) {
      uVar6 = uVar8 / uVar5;
    }
    uVar8 = uVar8 - uVar6 * uVar5;
  }
  if (uVar8 != uVar4) {
    *(long **)(*(long *)(lVar10 + 0x118) + uVar8 * 8) = plVar7;
    lVar3 = *plVar2;
  }
LAB_1099fba50:
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(lVar10 + 0x130) = *(long *)(lVar10 + 0x130) + -1;
  __ZdlPv();
  _objc_release(param_1[0xd]);
  FUN_109a02008(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099fba9c; end: 1099fbaaf;  */

void FUN_1099fba9c(void)

{
  FUN_1099fb920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099fbab0; end: 1099fbc97;  */

undefined8 * FUN_1099fbab0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puStack_40;
  char cStack_38;
  
  *param_1 = &PTR_FUN_110b1fc10;
  lVar10 = *(long *)(*(long *)(param_1[3] + 0x18) + 0x18);
  plVar2 = (long *)(lVar10 + 0x140);
  func_0x000109a020fc(plVar2,param_1[8]);
  uVar5 = *(ulong *)(lVar10 + 0x148);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(lVar10 + 0x140) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(lVar10 + 0x150)) {
LAB_1099fbb6c:
    if (lVar3 == 0) {
LAB_1099fbba0:
      *(undefined8 *)(*(long *)(lVar10 + 0x140) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1099fbba8;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_1099fbba0;
LAB_1099fbbb0:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(lVar10 + 0x140) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_1099fbb6c;
LAB_1099fbba8:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_1099fbbb0;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(lVar10 + 0x158) = *(long *)(lVar10 + 0x158) + -1;
  __ZdlPv();
  lVar3 = param_1[5];
  if (lVar3 == 0) {
    puVar11 = param_1 + 9;
    cStack_38 = '\x01';
    puStack_40 = puVar11;
    __ZNSt3__15mutex4lockEv(puVar11);
    if (param_1[5] == 0) {
      do {
        __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE
                  (param_1 + 0x11,&puStack_40);
        lVar3 = param_1[5];
      } while (lVar3 == 0);
      puVar11 = puStack_40;
      if (cStack_38 != '\x01') goto LAB_1099fbc54;
    }
    __ZNSt3__15mutex6unlockEv(puVar11);
    lVar3 = param_1[5];
  }
LAB_1099fbc54:
  _objc_release(lVar3);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x11);
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  FUN_109a02008(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099fbc98; end: 1099fbc9b;  */

undefined8 * FUN_1099fbc98(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puStack_40;
  char cStack_38;
  
  *param_1 = &PTR_FUN_110b1fc10;
  lVar10 = *(long *)(*(long *)(param_1[3] + 0x18) + 0x18);
  plVar2 = (long *)(lVar10 + 0x140);
  func_0x000109a020fc(plVar2,param_1[8]);
  uVar5 = *(ulong *)(lVar10 + 0x148);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(lVar10 + 0x140) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(lVar10 + 0x150)) {
LAB_1099fbb6c:
    if (lVar3 == 0) {
LAB_1099fbba0:
      *(undefined8 *)(*(long *)(lVar10 + 0x140) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1099fbba8;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_1099fbba0;
LAB_1099fbbb0:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(lVar10 + 0x140) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_1099fbb6c;
LAB_1099fbba8:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_1099fbbb0;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(lVar10 + 0x158) = *(long *)(lVar10 + 0x158) + -1;
  __ZdlPv();
  lVar3 = param_1[5];
  if (lVar3 == 0) {
    puVar11 = param_1 + 9;
    cStack_38 = '\x01';
    puStack_40 = puVar11;
    __ZNSt3__15mutex4lockEv(puVar11);
    if (param_1[5] == 0) {
      do {
        __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE
                  (param_1 + 0x11,&puStack_40);
        lVar3 = param_1[5];
      } while (lVar3 == 0);
      puVar11 = puStack_40;
      if (cStack_38 != '\x01') goto LAB_1099fbc54;
    }
    __ZNSt3__15mutex6unlockEv(puVar11);
    lVar3 = param_1[5];
  }
LAB_1099fbc54:
  _objc_release(lVar3);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x11);
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  FUN_109a02008(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099fbc9c; end: 1099fbcaf;  */

void FUN_1099fbc9c(void)

{
  FUN_1099fbab0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099fbcb0; end: 1099fcb0f;  */

/* WARNING: Removing unreachable block (ram,0x0001099fc530) */
/* WARNING: Removing unreachable block (ram,0x0001099fc534) */
/* WARNING: Removing unreachable block (ram,0x0001099fc53c) */
/* WARNING: Removing unreachable block (ram,0x0001099fc544) */
/* WARNING: Removing unreachable block (ram,0x0001099fc548) */

void FUN_1099fbcb0(undefined8 *param_1,long param_2,long *param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,long *param_9,
                  long *param_10)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *extraout_x8;
  undefined8 *extraout_x8_00;
  long *plVar14;
  long lVar15;
  long extraout_x10;
  long extraout_x10_00;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  undefined8 uVar25;
  long *plVar26;
  long *plVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_61;
  
  plVar24 = *(long **)(*(long *)(param_2 + 0x18) + 0x18);
  plVar6 = param_3;
  FUN_109a035f8(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  lVar15 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  uVar18 = *(ulong *)(lVar15 + 8);
  uVar19 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) * -0x622015f714c7d297;
  uVar20 = (uVar18 >> 0x20 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
  uVar18 = *(ulong *)(lVar15 + 0x40);
  uVar19 = ((ulong)(uint)((int)uVar18 << 3) + 8 ^ uVar18 >> 0x20) * -0x622015f714c7d297;
  uVar18 = (uVar18 >> 0x20 ^ uVar19 >> 0x2f ^ uVar19) * -0x622015f714c7d297;
  plVar27 = (long *)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297 +
                    ((long)plVar6 * 0xb + (uVar20 ^ uVar20 >> 0x2f) * -0x622015f714c7d297) * 0xb);
  plVar6 = plVar24 + 0x23;
  FUN_109a02060(plVar6,plVar27);
  if (plVar6 == (long *)0x0) {
    plVar6 = plVar24;
    FUN_1099fb498(plVar24,param_9,&uStack_61);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined8 *)PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_1126d4240;
    _objc_alloc_init();
    puVar8 = (undefined8 *)PTR__OBJC_CLASS___MTLVertexDescriptor_1126d4248;
    func_0x00010c298da0();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(param_4 + 8) != 0) {
      uVar18 = 0;
      do {
        puVar9 = puVar8;
        func_0x00010c08d240(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar28 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a740();
        _objc_release(puVar28);
        _objc_release(puVar9);
        puVar9 = puVar8;
        func_0x00010c08d240(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar28 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a6e0();
        _objc_release(puVar28);
        _objc_release(puVar9);
        puVar9 = puVar8;
        func_0x00010c08d240(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar28 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20e740();
        _objc_release(puVar28);
        _objc_release(puVar9);
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(ulong *)(param_4 + 8));
    }
    if (*(long *)(param_5 + 8) != 0) {
      uVar18 = 0;
      do {
        puVar9 = puVar8;
        func_0x00010bf0e700(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar28 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19ec40();
        _objc_release(puVar28);
        _objc_release(puVar9);
        puVar9 = puVar8;
        func_0x00010bf0e700(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar28 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0bc0();
        _objc_release(puVar28);
        _objc_release(puVar9);
        puVar9 = puVar8;
        func_0x00010bf0e700(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar28 = puVar9;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1741c0();
        _objc_release(puVar28);
        _objc_release(puVar9);
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(ulong *)(param_5 + 8));
    }
    func_0x00010c220f60(puVar7);
    _objc_release();
    if (param_10[1] != 0) {
      lVar15 = 0;
      uVar18 = 0;
      do {
        if (*(char *)(*param_10 + lVar15) == '\x01') {
          puVar8 = puVar7;
          func_0x00010bf40cc0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1719c0();
          _objc_release(puVar9);
          _objc_release(puVar8);
          puVar8 = puVar7;
          func_0x00010bf40cc0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c206fe0();
          _objc_release(puVar9);
          _objc_release(puVar8);
          puVar8 = puVar7;
          func_0x00010bf40cc0(puVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c206c60();
          _objc_release(puVar9);
          _objc_release(puVar8);
        }
        puVar8 = puVar7;
        func_0x00010bf40cc0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c227420();
        _objc_release(puVar9);
        _objc_release();
        uVar18 = uVar18 + 1;
        lVar15 = lVar15 + 8;
      } while (uVar18 < (ulong)param_10[1]);
    }
    FUN_1099fcb10();
    puVar9 = (undefined8 *)*param_3;
    uVar18 = param_3[1];
    lVar15 = uVar18 * 0xc;
    lVar11 = puVar8[2];
    puVar28 = (undefined8 *)*puVar8;
    if ((ulong)((lVar11 - (long)puVar28 >> 2) * -0x5555555555555555) < uVar18) {
      if (puVar28 != (undefined8 *)0x0) {
        puVar8[1] = puVar28;
        __ZdlPv(puVar28);
        lVar11 = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
      }
      if (0x1555555555555555 < uVar18) {
        FUN_109a00728();
        goto LAB_1099fc9b0;
      }
      uVar19 = (lVar11 >> 2) * 0x5555555555555556;
      if (uVar19 < uVar18 || uVar19 - uVar18 == 0) {
        uVar19 = uVar18;
      }
      if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar11 >> 2) * -0x5555555555555555)) {
        uVar19 = 0x1555555555555555;
      }
      FUN_109a006e0(puVar8,uVar19);
      puVar28 = (undefined8 *)puVar8[1];
      do {
        uVar25 = *puVar9;
        *(undefined4 *)(puVar28 + 1) = *(undefined4 *)(puVar9 + 1);
        puVar12 = (undefined8 *)((long)puVar28 + 0xc);
        *puVar28 = uVar25;
        puVar9 = (undefined8 *)((long)puVar9 + 0xc);
        lVar15 = lVar15 + -0xc;
        puVar28 = puVar12;
      } while (lVar15 != 0);
    }
    else {
      puVar13 = (undefined8 *)puVar8[1];
      if ((ulong)(((long)puVar13 - (long)puVar28 >> 2) * -0x5555555555555555) < uVar18) {
        puVar2 = (undefined8 *)(((long)puVar13 - (long)puVar28) + (long)puVar9);
        puVar12 = puVar13;
        if (puVar13 != puVar28) {
          _memmove(puVar28,puVar9);
          puVar13 = (undefined8 *)puVar8[1];
          puVar12 = puVar13;
        }
        for (; puVar2 != (undefined8 *)((long)puVar9 + uVar18 * 0xc);
            puVar2 = (undefined8 *)((long)puVar2 + 0xc)) {
          uVar25 = *puVar2;
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar2 + 1);
          *puVar13 = uVar25;
          puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          puVar12 = (undefined8 *)((long)puVar12 + 0xc);
        }
      }
      else {
        if (uVar18 != 0) {
          _memmove(puVar28,puVar9,lVar15);
        }
        puVar12 = (undefined8 *)((long)puVar28 + lVar15);
      }
    }
    puVar8[1] = puVar12;
    FUN_1099fcb10();
    plVar26 = plVar24;
    FUN_109a02d8c();
    FUN_1099fcb10(*(undefined8 *)plVar24[3]);
    plStack_78 = (long *)*plVar26;
    plStack_70 = (long *)((plVar26[1] - (long)plStack_78 >> 2) * -0x5555555555555555);
    plVar26 = extraout_x8;
    FUN_1099fcc40(extraout_x8,extraout_x10 + 8,extraout_x10 + 0x18,0,param_2,&plStack_78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220f80(puVar7);
    _objc_release();
    FUN_1099fcb10(*(undefined8 *)plVar24[3]);
    plStack_78 = (long *)*plVar26;
    plStack_70 = (long *)((plVar26[1] - (long)plStack_78 >> 2) * -0x5555555555555555);
    puVar8 = extraout_x8_00;
    FUN_1099fcc40(extraout_x8_00,extraout_x10_00 + 0x40,extraout_x10_00 + 0x50,1,param_2,&plStack_78
                 );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f060(puVar7);
    _objc_release();
    FUN_1099fcb10();
    puVar8[1] = *puVar8;
    lVar15 = *(long *)(param_2 + 8);
    plVar26 = *(long **)(param_2 + 0x10);
    if ((plVar26 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar26 != (long *)0x0)) {
      plVar10 = (long *)0xa8;
      __Znwm();
      plVar14 = plVar10 + 1;
      *plVar14 = 0;
      plVar10[2] = 0;
      *plVar10 = (long)&PTR_FUN_110b20638;
      plVar16 = plVar10 + 3;
      *plVar16 = (long)&PTR_FUN_110b1fbf0;
      plVar10[4] = 0;
      plVar10[5] = 0;
      plVar1 = plVar26 + 1;
      plVar10[6] = lVar15;
      plVar10[7] = (long)plVar26;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        lVar15 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
      }
      plStack_78 = plVar16;
      plStack_70 = plVar10;
      if (plVar10[5] == 0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = *plVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar1 = plVar10 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar10[4] = (long)plVar16;
        plVar10[5] = (long)plVar10;
LAB_1099fc4f4:
        do {
          lVar15 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      else if (*(long *)(plVar10[5] + 8) == -1) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = *plVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar1 = plVar10 + 2;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        plVar10[4] = (long)plVar16;
        plVar10[5] = (long)plVar10;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        goto LAB_1099fc4f4;
      }
      plVar10 = plStack_70;
      plVar1 = plStack_78;
      if (plStack_78 == (long *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        if (plStack_70 != (long *)0x0) {
          plVar24 = plStack_70 + 1;
          do {
            lVar15 = *plVar24;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar4) {
              *plVar24 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_70 + 0x10))(plStack_70);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
          }
        }
        goto LAB_1099fc92c;
      }
      plStack_78[0xf] = (long)plVar27;
      _objc_retain(puVar7);
      plVar1[0xd] = (long)puVar7;
      plVar1[0xe] = (long)plVar6;
      lVar11 = param_9[1];
      lVar15 = *param_9;
      lVar29 = param_9[2];
      lVar31 = param_9[5];
      lVar30 = param_9[4];
      lVar33 = param_9[7];
      lVar32 = param_9[6];
      plVar1[8] = param_9[3];
      plVar1[7] = lVar29;
      plVar1[6] = lVar11;
      plVar1[5] = lVar15;
      uVar25 = *(undefined8 *)(&UNK_10e029b70 + (long)(int)param_7 * 8);
      plVar1[0xc] = lVar33;
      plVar1[0xb] = lVar32;
      *(int *)(plVar1 + 0x10) = (int)uVar25;
      uVar25 = *(undefined8 *)(&UNK_10e029b90 + (long)(int)param_8 * 8);
      plVar1[10] = lVar31;
      plVar1[9] = lVar30;
      *(int *)((long)plVar1 + 0x84) = (int)uVar25;
      *(char *)(plVar1 + 0x11) = (char)param_6;
      *(undefined1 *)((long)plVar1 + 0x89) = uStack_61;
      plVar10 = (long *)plVar24[0x24];
      if (plVar10 != (long *)0x0) {
        uVar18 = (long)plVar10 - 1;
        if (((ulong)plVar10 & uVar18) == 0) {
          plVar26 = (long *)(uVar18 & (ulong)plVar27);
        }
        else {
          plVar26 = plVar27;
          if (plVar10 <= plVar27) {
            uVar19 = 0;
            if (plVar10 != (long *)0x0) {
              uVar19 = (ulong)plVar27 / (ulong)plVar10;
            }
            plVar26 = (long *)((long)plVar27 - uVar19 * (long)plVar10);
          }
        }
        plVar14 = *(long **)(plVar24[0x23] + (long)plVar26 * 8);
        if (plVar14 != (long *)0x0) {
          do {
            while( true ) {
              plVar14 = (long *)*plVar14;
              if (plVar14 == (long *)0x0) goto LAB_1099fc69c;
              plVar16 = (long *)plVar14[1];
              if (plVar16 != plVar27) break;
              if ((long *)plVar14[2] == plVar27) goto LAB_1099fc920;
            }
            if (((ulong)plVar10 & uVar18) == 0) {
              plVar16 = (long *)((ulong)plVar16 & uVar18);
            }
            else if (plVar10 <= plVar16) {
              uVar19 = 0;
              if (plVar10 != (long *)0x0) {
                uVar19 = (ulong)plVar16 / (ulong)plVar10;
              }
              plVar16 = (long *)((long)plVar16 - uVar19 * (long)plVar10);
            }
          } while (plVar16 == plVar26);
        }
      }
LAB_1099fc69c:
      plVar14 = (long *)0x20;
      __Znwm();
      *plVar14 = 0;
      plVar14[1] = (long)plVar27;
      plVar14[2] = (long)plVar27;
      plVar14[3] = (long)plVar1;
      if ((plVar10 == (long *)0x0) ||
         (*(float *)(plVar24 + 0x27) * (float)plVar10 < (float)(plVar24[0x26] + 1))) {
        uVar18 = 1;
        if ((long *)0x2 < plVar10) {
          uVar18 = (ulong)(((ulong)plVar10 & (long)plVar10 - 1U) != 0);
        }
        plVar26 = (long *)(uVar18 | (long)plVar10 << 1);
        plVar16 = (long *)(long)((float)(plVar24[0x26] + 1) / *(float *)(plVar24 + 0x27));
        if (plVar26 <= plVar16) {
          plVar26 = plVar16;
        }
        if ((long)plVar26 - 1U == 0) {
          plVar26 = (long *)0x2;
        }
        else if (((ulong)plVar26 & (long)plVar26 - 1U) != 0) {
          __ZNSt3__112__next_primeEm();
          plVar10 = (long *)plVar24[0x24];
        }
        if (plVar10 < plVar26) {
LAB_1099fc734:
          if ((ulong)plVar26 >> 0x3d != 0) {
            func_0x000104c4f740();
            goto LAB_1099fc9b0;
          }
          lVar15 = (long)plVar26 << 3;
          __Znwm();
          lVar11 = plVar24[0x23];
          plVar24[0x23] = lVar15;
          if (lVar11 != 0) {
            __ZdlPv();
          }
          plVar10 = (long *)0x0;
          plVar24[0x24] = (long)plVar26;
          do {
            *(undefined8 *)(plVar24[0x23] + (long)plVar10 * 8) = 0;
            plVar10 = (long *)((long)plVar10 + 1);
          } while (plVar26 != plVar10);
          plVar16 = (long *)plVar24[0x25];
          plVar10 = plVar26;
          if (plVar16 != (long *)0x0) {
            plVar17 = (long *)plVar16[1];
            uVar18 = (long)plVar26 - 1;
            if (((ulong)plVar26 & uVar18) == 0) {
              plVar17 = (long *)((ulong)plVar17 & uVar18);
            }
            else if (plVar26 <= plVar17) {
              uVar19 = 0;
              if (plVar26 != (long *)0x0) {
                uVar19 = (ulong)plVar17 / (ulong)plVar26;
              }
              plVar17 = (long *)((long)plVar17 - uVar19 * (long)plVar26);
            }
            *(long **)(plVar24[0x23] + (long)plVar17 * 8) = plVar24 + 0x25;
            plVar21 = (long *)*plVar16;
            while (plVar21 != (long *)0x0) {
              plVar23 = (long *)plVar21[1];
              if (((ulong)plVar26 & uVar18) == 0) {
                plVar23 = (long *)((ulong)plVar23 & uVar18);
              }
              else if (plVar26 <= plVar23) {
                uVar19 = 0;
                if (plVar26 != (long *)0x0) {
                  uVar19 = (ulong)plVar23 / (ulong)plVar26;
                }
                plVar23 = (long *)((long)plVar23 - uVar19 * (long)plVar26);
              }
              plVar22 = plVar21;
              if (plVar23 != plVar17) {
                lVar15 = plVar24[0x23];
                if (*(long *)(lVar15 + (long)plVar23 * 8) == 0) {
                  *(long **)(lVar15 + (long)plVar23 * 8) = plVar16;
                  plVar17 = plVar23;
                }
                else {
                  *plVar16 = *plVar21;
                  *plVar21 = **(undefined8 **)(lVar15 + (long)plVar23 * 8);
                  **(long **)(lVar15 + (long)plVar23 * 8) = (long)plVar21;
                  plVar22 = plVar16;
                }
              }
              plVar16 = plVar22;
              plVar21 = (long *)*plVar22;
            }
          }
        }
        else if (plVar26 < plVar10) {
          plVar16 = (long *)(long)((float)(ulong)plVar24[0x26] / *(float *)(plVar24 + 0x27));
          if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((long *)0x1 < plVar16) {
            plVar16 = (long *)(1L << (-LZCOUNT((long)plVar16 - 1) & 0x3fU));
          }
          if (plVar26 <= plVar16) {
            plVar26 = plVar16;
          }
          if (plVar26 < plVar10) {
            if (plVar26 != (long *)0x0) goto LAB_1099fc734;
            lVar15 = plVar24[0x23];
            plVar24[0x23] = 0;
            if (lVar15 != 0) {
              __ZdlPv();
            }
            plVar24[0x24] = 0;
            plVar10 = (long *)0x0;
          }
          else {
            plVar10 = (long *)plVar24[0x24];
          }
        }
        if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
          plVar26 = (long *)((long)plVar10 - 1U & (ulong)plVar27);
        }
        else {
          plVar26 = plVar27;
          if (plVar10 <= plVar27) {
            uVar18 = 0;
            if (plVar10 != (long *)0x0) {
              uVar18 = (ulong)plVar27 / (ulong)plVar10;
            }
            plVar26 = (long *)((long)plVar27 - uVar18 * (long)plVar10);
          }
        }
      }
      lVar15 = plVar24[0x23];
      plVar27 = *(long **)(lVar15 + (long)plVar26 * 8);
      if (plVar27 == (long *)0x0) {
        *plVar14 = plVar24[0x25];
        plVar24[0x25] = (long)plVar14;
        *(long **)(lVar15 + (long)plVar26 * 8) = plVar24 + 0x25;
        if (*plVar14 != 0) {
          plVar27 = *(long **)(*plVar14 + 8);
          if (((ulong)plVar10 & (long)plVar10 - 1U) == 0) {
            plVar27 = (long *)((ulong)plVar27 & (long)plVar10 - 1U);
          }
          else if (plVar10 <= plVar27) {
            uVar18 = 0;
            if (plVar10 != (long *)0x0) {
              uVar18 = (ulong)plVar27 / (ulong)plVar10;
            }
            plVar27 = (long *)((long)plVar27 - uVar18 * (long)plVar10);
          }
          plVar27 = (long *)(plVar24[0x23] + (long)plVar27 * 8);
          goto LAB_1099fc910;
        }
      }
      else {
        *plVar14 = *plVar27;
LAB_1099fc910:
        *plVar27 = (long)plVar14;
      }
      plVar24[0x26] = plVar24[0x26] + 1;
LAB_1099fc920:
      *param_1 = plVar1;
      param_1[1] = plStack_70;
LAB_1099fc92c:
      _objc_release(puVar7);
      _objc_release(plVar6);
      return;
    }
  }
  else {
    lVar15 = *(long *)(plVar6[3] + 0x10);
    if (lVar15 != 0) {
      uVar25 = *(undefined8 *)(plVar6[3] + 8);
      __ZNSt3__119__shared_weak_count4lockEv();
      if (lVar15 != 0) {
        *param_1 = uVar25;
        param_1[1] = lVar15;
        return;
      }
    }
    FUN_1092315e8();
  }
  FUN_1092315e8();
LAB_1099fc9b0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1099fc9b4);
  (*pcVar5)();
}



/* Entry: 1099fcb10; end: 1099fcc3f;  */

void FUN_1099fcb10(void)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  code *extraout_x9;
  undefined1 *extraout_x15;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340dd50;
  (*(code *)PTR___tlv_bootstrap_11340dd50)();
  ppuVar3 = &PTR___tlv_bootstrap_11340d6a8;
  if (*(char *)ppuVar1 == '\0') {
    puVar2 = extraout_x15;
    (*extraout_x9)();
    *puVar2 = 1;
    _objc_autoreleasePoolPush();
    (*(code *)PTR___tlv_bootstrap_11340d6a8)(&PTR___tlv_bootstrap_11340d6a8);
    __tlv_atexit(FUN_1099f6b88,ppuVar3,0x100000000);
    _objc_autoreleasePoolPop(puVar2);
  }
  (*(code *)PTR___tlv_bootstrap_11340d6a8)(&PTR___tlv_bootstrap_11340d6a8);
  return;
}



/* Entry: 1099fcc40; end: 1099fcf5b;  */

/* WARNING: Removing unreachable block (ram,0x0001099fce04) */

void FUN_1099fcc40(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
                  long param_5,long *param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined *puStack_68;
  
  _objc_retain();
  uVar2 = *param_2;
  _dispatch_data_create(uVar2,param_2[1],PTR___dispatch_main_q_11034be20,0);
  puStack_68 = (undefined *)0x0;
  uVar3 = param_1;
  func_0x00010c0d8b80();
  puVar8 = puStack_68;
  _objc_retain(puStack_68);
  if (puVar8 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___MTLFunctionConstantValues_1126ddfd0;
    _objc_opt_new(PTR__OBJC_CLASS___MTLFunctionConstantValues_1126ddfd0);
    if ((param_5 != 0) && (param_6[1] != 0)) {
      plVar11 = *(long **)(*(long *)(param_5 + 0x18) + 0x28);
      lVar6 = plVar11[6];
      uVar1 = *(uint *)(param_5 + 0x30);
      lVar10 = param_6[1] * 0xc;
      lVar7 = *param_6 + 4;
      do {
        if (((*(uint *)(*(long *)(lVar6 + (ulong)uVar1 * 0x48 + 0x18) +
                       (ulong)*(uint *)(lVar7 + -4) * 4) & 1 << (ulong)(param_4 & 0x1f)) != 0) &&
           (*(uint *)(*plVar11 + (ulong)*(uint *)(lVar7 + -4) * 4) < 3)) {
          func_0x00010c181160(puVar4);
        }
        lVar7 = lVar7 + 0xc;
        lVar10 = lVar10 + -0xc;
      } while (lVar10 != 0);
    }
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000104c54c8c(auStack_80,*param_3,param_3[1]);
    func_0x00010c25da80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
    }
    uVar9 = uVar3;
    func_0x00010c0d8940(uVar3);
    puVar8 = (undefined *)0x0;
    _objc_retain(0);
    _objc_retain(uVar9);
    _objc_release(uVar9);
    _objc_release(puVar5);
  }
  else {
    puVar4 = puVar8;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    _printf(&UNK_10f593eef);
    uVar9 = 0;
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar8);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 1099fcf5c; end: 1099fdbe7;  */

void FUN_1099fcf5c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  uint *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  uint *puVar24;
  undefined8 uVar25;
  long lVar26;
  long *plVar27;
  undefined8 uVar28;
  long *plVar29;
  float fVar30;
  uint *puStack_118;
  uint *puStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined **ppuStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined ***pppuStack_d8;
  undefined **appuStack_d0 [3];
  undefined ***pppuStack_b8;
  undefined *puStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **appuStack_90 [3];
  undefined ***pppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar26 = *(long *)(*(long *)(param_2 + 0x18) + 0x18);
  puVar6 = param_3;
  FUN_109a03530();
  uVar14 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x28) + 8) + 8);
  uVar15 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) * -0x622015f714c7d297;
  uVar14 = (uVar14 >> 0x20 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
  plVar27 = (long *)((long)puVar6 * 0xb + (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297);
  lVar16 = lVar26 + 0x140;
  func_0x000109a020fc(lVar16,plVar27);
  if (lVar16 == 0) {
    puVar10 = *(undefined **)(param_2 + 8);
    plVar29 = *(long **)(param_2 + 0x10);
    puStack_b0 = puVar10;
    if ((plVar29 == (long *)0x0) ||
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_a8 = plVar29, plVar29 == (long *)0x0))
    goto LAB_1099fda70;
    plVar7 = (long *)0xd0;
    __Znwm();
    plVar17 = plVar7 + 1;
    *plVar17 = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110b20688;
    plStack_100 = plVar7 + 3;
    *plStack_100 = (long)&PTR_FUN_110b1fc10;
    puStack_b0 = (undefined *)0x0;
    plStack_a8 = (long *)0x0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar1 = plVar29 + 1;
    plVar7[6] = (long)puVar10;
    plVar7[7] = (long)plVar29;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar7[8] = 0;
    plVar7[9] = 0;
    *(undefined4 *)(plVar7 + 10) = 0;
    plVar7[0xb] = (long)plVar27;
    plVar7[0xc] = 0x32aaaba7;
    plVar7[0xe] = 0;
    plVar7[0xd] = 0;
    plVar7[0x10] = 0;
    plVar7[0xf] = 0;
    plVar7[0x12] = 0;
    plVar7[0x11] = 0;
    plVar7[0x13] = 0;
    plVar7[0x14] = 0x3cb0b1bb;
    plVar7[0x16] = 0;
    plVar7[0x15] = 0;
    plVar7[0x18] = 0;
    plVar7[0x17] = 0;
    plVar7[0x19] = 0;
    do {
      lVar16 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar29);
    }
    plStack_f8 = plVar7;
    if (plVar7[5] == 0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = *plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7[4] = (long)plStack_100;
      plVar7[5] = (long)plVar7;
LAB_1099fd1a4:
      do {
        lVar16 = *plVar17;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    else if (*(long *)(plVar7[5] + 8) == -1) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *plVar17 = *plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7[4] = (long)plStack_100;
      plVar7[5] = (long)plVar7;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      goto LAB_1099fd1a4;
    }
    plVar1 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar7 = plStack_a8 + 1;
      do {
        lVar16 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    plVar1 = plStack_100;
    plVar7 = *(long **)(lVar26 + 0x148);
    if (plVar7 != (long *)0x0) {
      uVar14 = (long)plVar7 - 1;
      if (((ulong)plVar7 & uVar14) == 0) {
        plVar29 = (long *)(uVar14 & (ulong)plVar27);
      }
      else {
        plVar29 = plVar27;
        if (plVar7 <= plVar27) {
          uVar15 = 0;
          if (plVar7 != (long *)0x0) {
            uVar15 = (ulong)plVar27 / (ulong)plVar7;
          }
          plVar29 = (long *)((long)plVar27 - uVar15 * (long)plVar7);
        }
      }
      plVar17 = *(long **)(*(long *)(lVar26 + 0x140) + (long)plVar29 * 8);
      if (plVar17 != (long *)0x0) {
        do {
          while( true ) {
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) goto LAB_1099fd298;
            plVar19 = (long *)plVar17[1];
            if (plVar19 != plVar27) break;
            if ((long *)plVar17[2] == plVar27) goto LAB_1099fd51c;
          }
          if (((ulong)plVar7 & uVar14) == 0) {
            plVar19 = (long *)((ulong)plVar19 & uVar14);
          }
          else if (plVar7 <= plVar19) {
            uVar15 = 0;
            if (plVar7 != (long *)0x0) {
              uVar15 = (ulong)plVar19 / (ulong)plVar7;
            }
            plVar19 = (long *)((long)plVar19 - uVar15 * (long)plVar7);
          }
        } while (plVar19 == plVar29);
      }
    }
LAB_1099fd298:
    plVar17 = (long *)0x20;
    __Znwm();
    *plVar17 = 0;
    plVar17[1] = (long)plVar27;
    plVar17[2] = (long)plVar27;
    plVar17[3] = (long)plVar1;
    fVar30 = (float)(*(long *)(lVar26 + 0x158) + 1);
    if ((plVar7 == (long *)0x0) || (*(float *)(lVar26 + 0x160) * (float)plVar7 < fVar30)) {
      uVar14 = 1;
      if ((long *)0x2 < plVar7) {
        uVar14 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
      }
      plVar29 = (long *)(uVar14 | (long)plVar7 << 1);
      plVar19 = (long *)(long)(fVar30 / *(float *)(lVar26 + 0x160));
      if (plVar29 <= plVar19) {
        plVar29 = plVar19;
      }
      if ((long)plVar29 - 1U == 0) {
        plVar29 = (long *)0x2;
      }
      else if (((ulong)plVar29 & (long)plVar29 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        plVar7 = *(long **)(lVar26 + 0x148);
      }
      if (plVar7 < plVar29) {
LAB_1099fd330:
        if ((ulong)plVar29 >> 0x3d != 0) goto LAB_1099fda78;
        lVar16 = (long)plVar29 << 3;
        __Znwm();
        lVar13 = *(long *)(lVar26 + 0x140);
        *(long *)(lVar26 + 0x140) = lVar16;
        if (lVar13 != 0) {
          __ZdlPv();
        }
        plVar7 = (long *)0x0;
        *(long **)(lVar26 + 0x148) = plVar29;
        do {
          *(undefined8 *)(*(long *)(lVar26 + 0x140) + (long)plVar7 * 8) = 0;
          plVar7 = (long *)((long)plVar7 + 1);
        } while (plVar29 != plVar7);
        plVar19 = *(long **)(lVar26 + 0x150);
        plVar7 = plVar29;
        if (plVar19 != (long *)0x0) {
          plVar20 = (long *)plVar19[1];
          uVar14 = (long)plVar29 - 1;
          if (((ulong)plVar29 & uVar14) == 0) {
            plVar20 = (long *)((ulong)plVar20 & uVar14);
          }
          else if (plVar29 <= plVar20) {
            uVar15 = 0;
            if (plVar29 != (long *)0x0) {
              uVar15 = (ulong)plVar20 / (ulong)plVar29;
            }
            plVar20 = (long *)((long)plVar20 - uVar15 * (long)plVar29);
          }
          *(long *)(*(long *)(lVar26 + 0x140) + (long)plVar20 * 8) = lVar26 + 0x150;
          plVar21 = (long *)*plVar19;
          while (plVar21 != (long *)0x0) {
            plVar23 = (long *)plVar21[1];
            if (((ulong)plVar29 & uVar14) == 0) {
              plVar23 = (long *)((ulong)plVar23 & uVar14);
            }
            else if (plVar29 <= plVar23) {
              uVar15 = 0;
              if (plVar29 != (long *)0x0) {
                uVar15 = (ulong)plVar23 / (ulong)plVar29;
              }
              plVar23 = (long *)((long)plVar23 - uVar15 * (long)plVar29);
            }
            plVar22 = plVar21;
            if (plVar23 != plVar20) {
              lVar16 = *(long *)(lVar26 + 0x140);
              if (*(long *)(lVar16 + (long)plVar23 * 8) == 0) {
                *(long **)(lVar16 + (long)plVar23 * 8) = plVar19;
                plVar20 = plVar23;
              }
              else {
                *plVar19 = *plVar21;
                *plVar21 = **(undefined8 **)(lVar16 + (long)plVar23 * 8);
                **(long **)(lVar16 + (long)plVar23 * 8) = (long)plVar21;
                plVar22 = plVar19;
              }
            }
            plVar19 = plVar22;
            plVar21 = (long *)*plVar22;
          }
        }
      }
      else if (plVar29 < plVar7) {
        plVar19 = (long *)(long)((float)*(ulong *)(lVar26 + 0x158) / *(float *)(lVar26 + 0x160));
        if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((long *)0x1 < plVar19) {
          plVar19 = (long *)(1L << (-LZCOUNT((long)plVar19 - 1) & 0x3fU));
        }
        if (plVar29 <= plVar19) {
          plVar29 = plVar19;
        }
        if (plVar29 < plVar7) {
          if (plVar29 != (long *)0x0) goto LAB_1099fd330;
          lVar16 = *(long *)(lVar26 + 0x140);
          *(undefined8 *)(lVar26 + 0x140) = 0;
          if (lVar16 != 0) {
            __ZdlPv();
          }
          *(undefined8 *)(lVar26 + 0x148) = 0;
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = *(long **)(lVar26 + 0x148);
        }
      }
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar29 = (long *)((long)plVar7 - 1U & (ulong)plVar27);
      }
      else {
        plVar29 = plVar27;
        if (plVar7 <= plVar27) {
          uVar14 = 0;
          if (plVar7 != (long *)0x0) {
            uVar14 = (ulong)plVar27 / (ulong)plVar7;
          }
          plVar29 = (long *)((long)plVar27 - uVar14 * (long)plVar7);
        }
      }
    }
    lVar16 = *(long *)(lVar26 + 0x140);
    plVar27 = *(long **)(lVar16 + (long)plVar29 * 8);
    if (plVar27 == (long *)0x0) {
      *plVar17 = *(long *)(lVar26 + 0x150);
      *(long **)(lVar26 + 0x150) = plVar17;
      *(long *)(lVar16 + (long)plVar29 * 8) = lVar26 + 0x150;
      if (*plVar17 != 0) {
        plVar27 = *(long **)(*plVar17 + 8);
        if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
          plVar27 = (long *)((ulong)plVar27 & (long)plVar7 - 1U);
        }
        else if (plVar7 <= plVar27) {
          uVar14 = 0;
          if (plVar7 != (long *)0x0) {
            uVar14 = (ulong)plVar27 / (ulong)plVar7;
          }
          plVar27 = (long *)((long)plVar27 - uVar14 * (long)plVar7);
        }
        plVar27 = (long *)(*(long *)(lVar26 + 0x140) + (long)plVar27 * 8);
        goto LAB_1099fd50c;
      }
    }
    else {
      *plVar17 = *plVar27;
LAB_1099fd50c:
      *plVar27 = (long)plVar17;
    }
    *(long *)(lVar26 + 0x158) = *(long *)(lVar26 + 0x158) + 1;
LAB_1099fd51c:
    puVar6 = (undefined8 *)*param_3;
    lVar16 = param_3[1];
    puStack_110 = (uint *)0x0;
    uStack_108 = 0;
    puStack_118 = (uint *)0x0;
    if (lVar16 != 0) {
      FUN_109a006e0(&puStack_118,lVar16);
      lVar16 = lVar16 * 0xc;
      puVar18 = puStack_110;
      do {
        uVar25 = *puVar6;
        puVar18[2] = *(uint *)(puVar6 + 1);
        puStack_110 = puVar18 + 3;
        *(undefined8 *)puVar18 = uVar25;
        puVar6 = (undefined8 *)((long)puVar6 + 0xc);
        lVar16 = lVar16 + -0xc;
        puVar18 = puStack_110;
      } while (lVar16 != 0);
    }
    FUN_109a02d8c(lVar26,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28),&puStack_118);
    uVar28 = **(undefined8 **)(lVar26 + 0x18);
    lVar16 = *(long *)(*(long *)(param_2 + 0x28) + 8);
    uVar25 = *(undefined8 *)(lVar16 + 8);
    uVar8 = *(undefined8 *)(lVar16 + 0x10);
    _objc_retain(uVar28);
    _dispatch_data_create(uVar25,uVar8,PTR___dispatch_main_q_11034be20,0);
    puStack_b0 = (undefined *)0x0;
    uVar8 = uVar28;
    func_0x00010c0d8b80(uVar28);
    _objc_release(uVar28);
    puVar10 = puStack_b0;
    _objc_retain(puStack_b0);
    if (puVar10 != (undefined *)0x0) {
      puVar9 = puVar10;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      _printf(&UNK_10f593e02);
      _objc_release(puVar9);
    }
    _objc_release(puVar10);
    _objc_release(uVar25);
    plVar27 = plStack_f8;
    puVar18 = puStack_118;
    if (plStack_f8 == (long *)0x0) {
      lVar16 = *(long *)(*(long *)(param_2 + 0x28) + 8);
    }
    else {
      plVar29 = plStack_f8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar4) {
          *plVar29 = *plVar29 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar16 = *(long *)(*(long *)(param_2 + 0x28) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar4) {
          *plVar29 = *plVar29 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar26 = (long)puStack_110 - (long)puStack_118;
    ppuStack_f0 = &PTR_FUN_110b206d8;
    plStack_e8 = plVar1;
    pppuStack_d8 = &ppuStack_f0;
    plStack_e0 = plStack_f8;
    _objc_retain(uVar8);
    puVar10 = PTR__OBJC_CLASS___MTLFunctionConstantValues_1126ddfd0;
    _objc_opt_new(PTR__OBJC_CLASS___MTLFunctionConstantValues_1126ddfd0);
    if (lVar26 != 0) {
      plVar29 = *(long **)(*(long *)(param_2 + 0x18) + 0x28);
      lVar13 = plVar29[6];
      uVar2 = *(uint *)(param_2 + 0x30);
      puVar18 = puVar18 + 1;
      do {
        if (((*(uint *)(*(long *)(lVar13 + (ulong)uVar2 * 0x48 + 0x18) + (ulong)puVar18[-1] * 4) >>
              2 & 1) != 0) && (*(uint *)(*plVar29 + (ulong)puVar18[-1] * 4) < 3)) {
          func_0x00010c181160(puVar10);
        }
        puVar18 = puVar18 + 3;
        lVar26 = lVar26 + -0xc;
      } while (lVar26 != 0);
    }
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000104c54c8c(&puStack_b0,*(undefined8 *)(lVar16 + 0x18),*(undefined8 *)(lVar16 + 0x20));
    func_0x00010c25da80(puVar9);
    _objc_retainAutoreleasedReturnValue();
    if (uStack_a0._7_1_ < '\0') {
      __ZdlPv(puStack_b0);
    }
    if (pppuStack_d8 == (undefined ***)0x0) {
      pppuStack_b8 = (undefined ***)0x0;
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      plStack_a8 = (long *)0xc6000000;
      uStack_a0 = FUN_109a0057c;
      puStack_98 = &UNK_110b20378;
      pppuVar11 = pppuStack_d8;
    }
    else {
      if (pppuStack_d8 == &ppuStack_f0) {
        pppuStack_b8 = appuStack_d0;
        (*(code *)(*pppuStack_d8)[3])(pppuStack_d8,appuStack_d0);
      }
      else {
        pppuVar11 = pppuStack_d8;
        (*(code *)(*pppuStack_d8)[2])();
        pppuStack_b8 = pppuVar11;
      }
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      plStack_a8 = (long *)0xc6000000;
      uStack_a0 = FUN_109a0057c;
      puStack_98 = &UNK_110b20378;
      pppuStack_78 = appuStack_90;
      pppuVar11 = pppuStack_b8;
      if (pppuStack_b8 != (undefined ***)0x0) {
        if (pppuStack_b8 == appuStack_d0) {
          (*(code *)(*pppuStack_b8)[3])();
          pppuVar11 = pppuStack_78;
        }
        else {
          pppuVar11 = pppuStack_b8;
          (*(code *)(*pppuStack_b8)[2])();
        }
      }
    }
    pppuStack_78 = pppuVar11;
    ppuVar12 = &puStack_b0;
    _objc_retainBlock(ppuVar12);
    if (pppuStack_78 == appuStack_90) {
      lVar16 = 0x20;
LAB_1099fd85c:
      (**(code **)((long)*pppuStack_78 + lVar16))();
    }
    else if (pppuStack_78 != (undefined ***)0x0) {
      lVar16 = 0x28;
      goto LAB_1099fd85c;
    }
    func_0x00010c0d8920(uVar8);
    _objc_release(ppuVar12);
    if (pppuStack_b8 == appuStack_d0) {
      lVar16 = 0x20;
LAB_1099fd8a4:
      (**(code **)((long)*pppuStack_b8 + lVar16))();
    }
    else if (pppuStack_b8 != (undefined ***)0x0) {
      lVar16 = 0x28;
      goto LAB_1099fd8a4;
    }
    _objc_release(puVar9);
    _objc_release(puVar10);
    _objc_release(uVar8);
    if (pppuStack_d8 == &ppuStack_f0) {
      lVar16 = 0x20;
LAB_1099fd8e8:
      (**(code **)((long)*pppuStack_d8 + lVar16))();
    }
    else if (pppuStack_d8 != (undefined ***)0x0) {
      lVar16 = 0x28;
      goto LAB_1099fd8e8;
    }
    lVar16 = 0;
    lVar26 = *(long *)(*(long *)(param_2 + 0x28) + 8);
    puStack_b0 = *(undefined **)(lVar26 + 0x28);
    plStack_a8 = (long *)CONCAT44(plStack_a8._4_4_,*(undefined4 *)(lVar26 + 0x30));
    do {
      uVar2 = *(uint *)((long)&puStack_b0 + lVar16 * 4);
      puVar18 = puStack_118;
      puVar24 = puStack_118;
      if ((int)uVar2 < 0) {
        for (; (puVar18 != puStack_110 && (puVar24 = puVar18, (*puVar18 ^ uVar2) != 0xffffffff));
            puVar18 = puVar18 + 3) {
          puVar24 = puStack_110;
        }
        if (puVar24[2] != 1) {
          FUN_1092612e0();
          goto LAB_1099fda7c;
        }
        *(uint *)((long)&puStack_b0 + lVar16 * 4) = puVar24[1];
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 3);
    plStack_100[6] = (long)puStack_b0;
    *(undefined4 *)(plStack_100 + 7) = plStack_a8._0_4_;
    *param_1 = plStack_100;
    param_1[1] = plVar27;
    plStack_100 = (long *)0x0;
    plStack_f8 = (long *)0x0;
    if (plVar27 != (long *)0x0) {
      plVar29 = plVar27 + 1;
      do {
        lVar16 = *plVar29;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar4) {
          *plVar29 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
      }
    }
    _objc_release(uVar8);
    if (puStack_118 != (uint *)0x0) {
      puStack_110 = puStack_118;
      __ZdlPv();
    }
    plVar27 = plStack_f8;
    if (plStack_f8 != (long *)0x0) {
      plVar29 = plStack_f8 + 1;
      do {
        lVar16 = *plVar29;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar4) {
          *plVar29 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar27);
      }
    }
LAB_1099fd020:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else {
    lVar26 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10);
    if (lVar26 != 0) {
      uVar25 = *(undefined8 *)(*(long *)(lVar16 + 0x18) + 8);
      __ZNSt3__119__shared_weak_count4lockEv();
      if (lVar26 != 0) {
        *param_1 = uVar25;
        param_1[1] = lVar26;
        goto LAB_1099fd020;
      }
    }
LAB_1099fda70:
    FUN_1092315e8();
  }
  ___stack_chk_fail();
LAB_1099fda78:
  func_0x000104c4f740();
LAB_1099fda7c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1099fda80);
  (*pcVar5)();
}



/* Entry: 1099fdbe8; end: 1099fdca3;  */

undefined8 * FUN_1099fdbe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1fc30;
  func_0x000109a00780(param_1 + 3);
  FUN_109a02008(param_1 + 1);
  return param_1;
}



/* Entry: 1099fdca4; end: 1099fdca7;  */

undefined8 * FUN_1099fdca4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b1fc50;
  func_0x000109a02740(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099fdca8; end: 1099fdcbb;  */

void FUN_1099fdca8(void)

{
  func_0x0001099fdc68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099fdcbc; end: 1099fe00f;  */

/* WARNING: Removing unreachable block (ram,0x0001099fdd8c) */
/* WARNING: Removing unreachable block (ram,0x0001099fdd90) */
/* WARNING: Removing unreachable block (ram,0x0001099fdd98) */
/* WARNING: Removing unreachable block (ram,0x0001099fdda0) */
/* WARNING: Removing unreachable block (ram,0x0001099fdda4) */

void FUN_1099fdcbc(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  plVar6 = *(long **)(param_2 + 0x10);
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    puVar7 = (undefined8 *)0x48;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = &PTR_FUN_110b1fc30;
    *puVar7 = &PTR_FUN_110b20798;
    plVar10 = plVar6 + 1;
    puVar7[4] = uVar2;
    puVar7[5] = plVar6;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    do {
      lVar11 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    if (param_4 == 0) goto LAB_1099fdfb0;
    lVar11 = puVar7[6];
    lVar15 = puVar7[7];
    lVar13 = lVar15 - lVar11;
    uVar17 = lVar13 >> 4;
    if (uVar17 < param_4) {
      uVar18 = param_4 - uVar17;
      if ((ulong)(puVar7[8] - lVar15 >> 4) < uVar18) {
        if (param_4 >> 0x3c != 0) goto LAB_1099fdfdc;
        uVar9 = puVar7[8] - lVar11;
        uVar12 = (long)uVar9 >> 3;
        if (uVar12 <= param_4) {
          uVar12 = param_4;
        }
        if (0x7fffffffffffffef < uVar9) {
          uVar12 = 0xfffffffffffffff;
        }
        if (uVar12 >> 0x3c != 0) {
          func_0x000104c4f740();
          goto LAB_1099fdfe8;
        }
        lVar8 = uVar12 << 4;
        __Znwm();
        lVar15 = lVar8 + lVar13;
        _bzero(lVar15,uVar18 * 0x10);
        lVar14 = lVar15 + uVar17 * -0x10;
        _memcpy(lVar14,lVar11,lVar13);
        puVar7[6] = lVar14;
        puVar7[7] = lVar15 + uVar18 * 0x10;
        puVar7[8] = lVar8 + uVar12 * 0x10;
        if (lVar11 != 0) {
          __ZdlPv(lVar11);
        }
      }
      else {
        _bzero(lVar15,uVar18 * 0x10);
        puVar7[7] = lVar15 + uVar18 * 0x10;
      }
    }
    else if (param_4 < uVar17) {
      lVar11 = lVar11 + param_4 * 0x10;
      while (lVar15 != lVar11) {
        lVar15 = lVar15 + -0x10;
        FUN_109a026e8(lVar15);
      }
      puVar7[7] = lVar11;
    }
    uVar17 = 0;
    do {
      plVar6 = (long *)(param_3 + uVar17 * 0x10);
      lVar11 = *plVar6;
      plVar6 = (long *)plVar6[1];
      if (plVar6 != (long *)0x0) {
        plVar10 = plVar6 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = *plVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if ((lVar11 == 0) ||
         (___dynamic_cast(lVar11,&PTR_DAT_110b1fe68,&PTR_DAT_110b1feb0,0),
         plVar6 == (long *)0x0 || lVar11 == 0)) {
        plVar10 = (long *)0x0;
      }
      else {
        plVar1 = plVar6 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          plVar10 = plVar6;
        } while (cVar3 != '\0');
      }
      plVar1 = (long *)(puVar7[6] + uVar17 * 0x10);
      plVar16 = (long *)plVar1[1];
      *plVar1 = lVar11;
      plVar1[1] = (long)plVar10;
      if (plVar16 != (long *)0x0) {
        plVar10 = plVar16 + 1;
        do {
          lVar11 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      if (plVar6 != (long *)0x0) {
        plVar10 = plVar6 + 1;
        do {
          lVar11 = *plVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != param_4);
LAB_1099fdfb0:
    *param_1 = puVar7 + 3;
    param_1[1] = puVar7;
    return;
  }
  FUN_1092315e8();
LAB_1099fdfdc:
  FUN_109a007dc();
LAB_1099fdfe8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1099fdfec);
  (*pcVar5)();
}



/* Entry: 1099fe010; end: 1099fe183;  */

undefined8 * FUN_1099fe010(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  *param_1 = &PTR_FUN_110b1fc88;
  lVar10 = param_1[3];
  plVar2 = (long *)(lVar10 + 400);
  FUN_109a028c0(plVar2,param_1[5]);
  if (plVar2 == (long *)0x0) goto LAB_1099fe154;
  uVar5 = *(ulong *)(lVar10 + 0x198);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(lVar10 + 400) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(lVar10 + 0x1a0)) {
LAB_1099fe0c4:
    if (lVar3 == 0) {
LAB_1099fe0f8:
      *(undefined8 *)(*(long *)(lVar10 + 400) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1099fe100;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_1099fe0f8;
LAB_1099fe108:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(lVar10 + 400) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_1099fe0c4;
LAB_1099fe100:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_1099fe108;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(lVar10 + 0x1a8) = *(long *)(lVar10 + 0x1a8) + -1;
  __ZdlPv();
LAB_1099fe154:
  FUN_109a02830(param_1 + 6);
  func_0x000109a00b74(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099fe184; end: 1099fe187;  */

undefined8 * FUN_1099fe184(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  *param_1 = &PTR_FUN_110b1fc88;
  lVar10 = param_1[3];
  plVar2 = (long *)(lVar10 + 400);
  FUN_109a028c0(plVar2,param_1[5]);
  if (plVar2 == (long *)0x0) goto LAB_1099fe154;
  uVar5 = *(ulong *)(lVar10 + 0x198);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar6 = uVar5 - 1;
  if ((uVar5 & uVar6) == 0) {
    uVar4 = uVar6 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar8 = 0;
    if (uVar5 != 0) {
      uVar8 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar8 * uVar5;
  }
  plVar1 = *(long **)(*(long *)(lVar10 + 400) + uVar4 * 8);
  do {
    plVar7 = plVar1;
    plVar1 = (long *)*plVar7;
  } while ((long *)*plVar7 != plVar2);
  if (plVar7 == (long *)(lVar10 + 0x1a0)) {
LAB_1099fe0c4:
    if (lVar3 == 0) {
LAB_1099fe0f8:
      *(undefined8 *)(*(long *)(lVar10 + 400) + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_1099fe100;
    }
    uVar8 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar6) == 0) {
      uVar9 = uVar8 & uVar6;
    }
    else {
      uVar9 = uVar8;
      if (uVar5 <= uVar8) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar8 / uVar5;
        }
        uVar9 = uVar8 - uVar9 * uVar5;
      }
    }
    if (uVar9 != uVar4) goto LAB_1099fe0f8;
LAB_1099fe108:
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar6 * uVar5;
    }
    if (uVar8 != uVar4) {
      *(long **)(*(long *)(lVar10 + 400) + uVar8 * 8) = plVar7;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar8 = plVar7[1];
    if ((uVar5 & uVar6) == 0) {
      uVar8 = uVar8 & uVar6;
    }
    else if (uVar5 <= uVar8) {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar8 / uVar5;
      }
      uVar8 = uVar8 - uVar9 * uVar5;
    }
    if (uVar8 != uVar4) goto LAB_1099fe0c4;
LAB_1099fe100:
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 8);
      goto LAB_1099fe108;
    }
  }
  *plVar7 = lVar3;
  *plVar2 = 0;
  *(long *)(lVar10 + 0x1a8) = *(long *)(lVar10 + 0x1a8) + -1;
  __ZdlPv();
LAB_1099fe154:
  FUN_109a02830(param_1 + 6);
  func_0x000109a00b74(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099fe188; end: 1099fe19b;  */

void FUN_1099fe188(void)

{
  FUN_1099fe010();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099fe19c; end: 1099fe4e3;  */

/* WARNING: Removing unreachable block (ram,0x0001099fe43c) */
/* WARNING: Removing unreachable block (ram,0x0001099fe440) */
/* WARNING: Removing unreachable block (ram,0x0001099fe448) */
/* WARNING: Removing unreachable block (ram,0x0001099fe450) */
/* WARNING: Removing unreachable block (ram,0x0001099fe454) */

void FUN_1099fe19c(undefined8 *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  
  uVar6 = *(ulong *)(param_2 + 0x18);
  FUN_109a02b78(uVar6,*(undefined8 *)(param_2 + 0x28));
  uVar9 = *(ulong *)(param_2 + 0x38);
  if (uVar9 == 0) {
LAB_1099fe274:
    plVar13 = (long *)0x0;
  }
  else {
    uVar6 = *(ulong *)(*(long *)(param_2 + 0x28) + 0x50) & param_3 | uVar6;
    uVar11 = uVar9 - 1;
    if ((uVar9 & uVar11) == 0) {
      uVar12 = uVar11 & uVar6;
    }
    else {
      uVar12 = uVar6;
      if (uVar9 <= uVar6) {
        uVar12 = 0;
        if (uVar9 != 0) {
          uVar12 = uVar6 / uVar9;
        }
        uVar12 = uVar6 - uVar12 * uVar9;
      }
    }
    plVar13 = *(long **)(*(long *)(param_2 + 0x30) + uVar12 * 8);
    if (plVar13 == (long *)0x0) goto LAB_1099fe274;
    for (plVar13 = (long *)*plVar13; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      uVar14 = plVar13[1];
      if (uVar14 == uVar6) {
        if (plVar13[2] == uVar6) break;
      }
      else {
        if ((uVar9 & uVar11) == 0) {
          uVar14 = uVar14 & uVar11;
        }
        else if (uVar9 <= uVar14) {
          uVar4 = 0;
          if (uVar9 != 0) {
            uVar4 = uVar14 / uVar9;
          }
          uVar14 = uVar14 - uVar4 * uVar9;
        }
        if (uVar14 != uVar12) goto LAB_1099fe274;
      }
    }
  }
  plVar7 = *(long **)((long)plVar13 + 0x28);
  if (plVar7 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    plVar15 = plVar7;
    if ((plVar7 != (long *)0x0) &&
       (plVar16 = *(long **)((long)plVar13 + 0x20), plVar16 != (long *)0x0)) goto LAB_1099fe498;
  }
  lVar10 = *(long *)(param_2 + 8);
  plVar8 = *(long **)(param_2 + 0x10);
  if ((plVar8 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar8 == (long *)0x0))
  {
    FUN_1092315e8();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1099fe4c0);
    (*pcVar5)();
  }
  plVar7 = (long *)0x50;
  __Znwm();
  plVar17 = plVar7 + 1;
  *plVar17 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_DAT_110b207e8;
  plVar16 = plVar7 + 3;
  *plVar16 = (long)&PTR_FUN_110b1fc50;
  uVar6 = *(ulong *)((long)plVar13 + 0x18);
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = lVar10;
  plVar7[7] = (long)plVar8;
  plVar1 = plVar8 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar7[8] = *(long *)(*(long *)(lVar10 + 0x28) + 0x30) + (uVar6 & 0xffffffff) * 0x48;
  *(int *)(plVar7 + 9) = (int)uVar6;
  do {
    lVar10 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  if (plVar7[5] == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *plVar17 = *plVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar8 = plVar7 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7[4] = (long)plVar16;
    plVar7[5] = (long)plVar7;
LAB_1099fe3d0:
    do {
      lVar10 = *plVar17;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *plVar17 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  else if (*(long *)(plVar7[5] + 8) == -1) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar3) {
        *plVar17 = *plVar17 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar8 = plVar7 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7[4] = (long)plVar16;
    plVar7[5] = (long)plVar7;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    goto LAB_1099fe3d0;
  }
  if (plVar15 != (long *)0x0) {
    plVar8 = plVar15 + 1;
    do {
      lVar10 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  if (plVar7 != (long *)0x0) {
    plVar15 = plVar7 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = *plVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar10 = *(long *)((long)plVar13 + 0x28);
  *(long **)((long)plVar13 + 0x20) = plVar16;
  *(long **)((long)plVar13 + 0x28) = plVar7;
  if (lVar10 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
LAB_1099fe498:
  *param_1 = plVar16;
  param_1[1] = plVar7;
  return;
}



/* Entry: 1099fe4e4; end: 1099fee9f;  */

/* WARNING: Removing unreachable block (ram,0x0001099fea5c) */
/* WARNING: Removing unreachable block (ram,0x0001099fea60) */
/* WARNING: Removing unreachable block (ram,0x0001099fea68) */
/* WARNING: Removing unreachable block (ram,0x0001099fea70) */
/* WARNING: Removing unreachable block (ram,0x0001099fea74) */

void FUN_1099fe4e4(undefined8 *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  float fVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  
  lVar25 = param_2 + 400;
  FUN_109a028c0();
  if (lVar25 == 0) {
    lVar25 = *(long *)(param_2 + 8);
    plVar13 = *(long **)(param_2 + 0x10);
    if ((plVar13 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar13 != (long *)0x0)) {
      plVar8 = (long *)0x70;
      __Znwm();
      plVar19 = plVar8 + 1;
      *plVar19 = 0;
      plVar8[2] = 0;
      plVar10 = plVar8 + 3;
      *plVar10 = (long)&PTR_FUN_110b1fc88;
      *plVar8 = (long)&PTR_DAT_110b20838;
      plVar8[4] = 0;
      plVar8[5] = 0;
      plVar8[6] = lVar25;
      plVar14 = plVar13 + 1;
      plVar8[7] = (long)plVar13;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = *plVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar20 = plVar8 + 9;
      plVar8[10] = 0;
      *plVar20 = 0;
      plVar8[8] = param_3;
      plVar8[0xc] = 0;
      plVar8[0xb] = 0;
      *(undefined4 *)(plVar8 + 0xd) = 0x3f800000;
      uVar23 = param_2;
      if (*(long *)(param_3 + 0x38) != 0) {
        uVar22 = 0;
        uVar26 = 0;
        lVar25 = 0;
        uVar24 = 0;
        plVar1 = plVar8 + 0xb;
        uVar9 = param_3;
        do {
          uVar27 = *(ulong *)(*(long *)(uVar9 + 0x30) + uVar24 * 0x48);
          if (uVar26 != 0) {
            uVar11 = uVar26 - 1;
            if ((uVar26 & uVar11) == 0) {
              uVar23 = uVar27 & uVar11;
            }
            else {
              uVar23 = uVar27;
              if (uVar26 <= uVar27) {
                uVar23 = 0;
                if (uVar26 != 0) {
                  uVar23 = uVar27 / uVar26;
                }
                uVar23 = uVar27 - uVar23 * uVar26;
              }
            }
            plVar15 = *(long **)(*plVar20 + uVar23 * 8);
            if (plVar15 != (long *)0x0) {
              do {
                while( true ) {
                  plVar15 = (long *)*plVar15;
                  if (plVar15 == (long *)0x0) goto LAB_1099fe69c;
                  uVar16 = plVar15[1];
                  if (uVar16 != uVar27) break;
                  if (plVar15[2] == uVar27) goto LAB_1099fe930;
                }
                if ((uVar26 & uVar11) == 0) {
                  uVar16 = uVar16 & uVar11;
                }
                else if (uVar26 <= uVar16) {
                  uVar4 = 0;
                  if (uVar26 != 0) {
                    uVar4 = uVar16 / uVar26;
                  }
                  uVar16 = uVar16 - uVar4 * uVar26;
                }
              } while (uVar16 == uVar23);
            }
          }
LAB_1099fe69c:
          plVar15 = (long *)0x30;
          __Znwm();
          *plVar15 = 0;
          plVar15[1] = uVar27;
          plVar15[2] = uVar27;
          plVar15[3] = lVar25;
          plVar15[4] = 0;
          plVar15[5] = 0;
          if ((uVar26 == 0) || (*(float *)(plVar8 + 0xd) * (float)uVar26 < (float)(lVar25 + 1))) {
            uVar23 = 1;
            if (2 < uVar26) {
              uVar23 = (ulong)((uVar26 & uVar26 - 1) != 0);
            }
            uVar23 = uVar23 | uVar26 << 1;
            uVar9 = (ulong)((float)(lVar25 + 1) / *(float *)(plVar8 + 0xd));
            if (uVar23 <= uVar9) {
              uVar23 = uVar9;
            }
            if (uVar23 - 1 == 0) {
              uVar23 = 2;
            }
            else if ((uVar23 & uVar23 - 1) != 0) {
              __ZNSt3__112__next_primeEm();
              uVar22 = plVar8[10];
            }
            if (uVar22 < uVar23) {
LAB_1099fe734:
              uVar22 = uVar23;
              if (uVar22 >> 0x3d != 0) {
                func_0x000104c4f740();
                goto LAB_1099fee18;
              }
              lVar25 = uVar22 << 3;
              __Znwm();
              lVar7 = *plVar20;
              *plVar20 = lVar25;
              if (lVar7 != 0) {
                __ZdlPv();
              }
              uVar23 = 0;
              plVar8[10] = uVar22;
              do {
                *(undefined8 *)(*plVar20 + uVar23 * 8) = 0;
                uVar23 = uVar23 + 1;
              } while (uVar22 != uVar23);
              plVar12 = (long *)*plVar1;
              if (plVar12 != (long *)0x0) {
                uVar23 = plVar12[1];
                uVar9 = uVar22 - 1;
                if ((uVar22 & uVar9) == 0) {
                  uVar23 = uVar23 & uVar9;
                }
                else if (uVar22 <= uVar23) {
                  uVar26 = 0;
                  if (uVar22 != 0) {
                    uVar26 = uVar23 / uVar22;
                  }
                  uVar23 = uVar23 - uVar26 * uVar22;
                }
                *(long **)(*plVar20 + uVar23 * 8) = plVar1;
                plVar17 = (long *)*plVar12;
                while (plVar17 != (long *)0x0) {
                  uVar26 = plVar17[1];
                  if ((uVar22 & uVar9) == 0) {
                    uVar26 = uVar26 & uVar9;
                  }
                  else if (uVar22 <= uVar26) {
                    uVar11 = 0;
                    if (uVar22 != 0) {
                      uVar11 = uVar26 / uVar22;
                    }
                    uVar26 = uVar26 - uVar11 * uVar22;
                  }
                  plVar18 = plVar17;
                  if (uVar26 != uVar23) {
                    lVar25 = *plVar20;
                    if (*(long *)(lVar25 + uVar26 * 8) == 0) {
                      *(long **)(lVar25 + uVar26 * 8) = plVar12;
                      uVar23 = uVar26;
                    }
                    else {
                      *plVar12 = *plVar17;
                      *plVar17 = **(undefined8 **)(lVar25 + uVar26 * 8);
                      **(long **)(lVar25 + uVar26 * 8) = (long)plVar17;
                      plVar18 = plVar12;
                    }
                  }
                  plVar12 = plVar18;
                  plVar17 = (long *)*plVar18;
                }
              }
            }
            else if (uVar23 < uVar22) {
              uVar9 = (ulong)((float)(ulong)plVar8[0xc] / *(float *)(plVar8 + 0xd));
              if ((uVar22 < 3) || ((uVar22 & uVar22 - 1) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if (1 < uVar9) {
                uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
              }
              if (uVar23 <= uVar9) {
                uVar23 = uVar9;
              }
              if (uVar23 < uVar22) {
                if (uVar23 != 0) goto LAB_1099fe734;
                lVar25 = *plVar20;
                *plVar20 = 0;
                if (lVar25 != 0) {
                  __ZdlPv();
                }
                uVar22 = 0;
                plVar8[10] = 0;
              }
              else {
                uVar22 = plVar8[10];
              }
            }
            uVar26 = uVar22;
            if ((uVar22 & uVar22 - 1) == 0) {
              uVar23 = uVar22 - 1 & uVar27;
            }
            else {
              uVar23 = uVar27;
              if (uVar22 <= uVar27) {
                uVar23 = 0;
                if (uVar22 != 0) {
                  uVar23 = uVar27 / uVar22;
                }
                uVar23 = uVar27 - uVar23 * uVar22;
              }
            }
          }
          lVar25 = *plVar20;
          plVar12 = *(long **)(lVar25 + uVar23 * 8);
          if (plVar12 == (long *)0x0) {
            *plVar15 = *plVar1;
            *plVar1 = (long)plVar15;
            *(long **)(lVar25 + uVar23 * 8) = plVar1;
            if (*plVar15 != 0) {
              uVar9 = *(ulong *)(*plVar15 + 8);
              if ((uVar26 & uVar26 - 1) == 0) {
                uVar9 = uVar9 & uVar26 - 1;
              }
              else if (uVar26 <= uVar9) {
                uVar27 = 0;
                if (uVar26 != 0) {
                  uVar27 = uVar9 / uVar26;
                }
                uVar9 = uVar9 - uVar27 * uVar26;
              }
              plVar12 = (long *)(*plVar20 + uVar9 * 8);
              goto LAB_1099fe91c;
            }
          }
          else {
            *plVar15 = *plVar12;
LAB_1099fe91c:
            *plVar12 = (long)plVar15;
          }
          lVar25 = plVar8[0xc] + 1;
          plVar8[0xc] = lVar25;
          uVar9 = plVar8[8];
LAB_1099fe930:
          uVar24 = uVar24 + 1;
        } while (uVar24 < *(ulong *)(uVar9 + 0x38));
      }
      do {
        lVar25 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar25 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
      if (plVar8[5] == 0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *plVar19 = *plVar19 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar13 = plVar8 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar8[4] = (long)plVar10;
        plVar8[5] = (long)plVar8;
LAB_1099fea28:
        do {
          lVar25 = *plVar19;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *plVar19 = lVar25 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      else if (*(long *)(plVar8[5] + 8) == -1) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *plVar19 = *plVar19 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar13 = plVar8 + 2;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar3) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar8[4] = (long)plVar10;
        plVar8[5] = (long)plVar8;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        goto LAB_1099fea28;
      }
      uVar24 = *(ulong *)(param_2 + 0x198);
      if (uVar24 != 0) {
        uVar9 = uVar24 - 1;
        if ((uVar24 & uVar9) == 0) {
          uVar23 = uVar9 & param_3;
        }
        else {
          uVar23 = param_3;
          if (uVar24 <= param_3) {
            uVar23 = 0;
            if (uVar24 != 0) {
              uVar23 = param_3 / uVar24;
            }
            uVar23 = param_3 - uVar23 * uVar24;
          }
        }
        plVar13 = *(long **)(*(long *)(param_2 + 400) + uVar23 * 8);
        if (plVar13 != (long *)0x0) {
          do {
            while( true ) {
              plVar13 = (long *)*plVar13;
              if (plVar13 == (long *)0x0) goto LAB_1099feb1c;
              uVar26 = plVar13[1];
              if (uVar26 != param_3) break;
              if (plVar13[2] == param_3) goto LAB_1099feda0;
            }
            if ((uVar24 & uVar9) == 0) {
              uVar26 = uVar26 & uVar9;
            }
            else if (uVar24 <= uVar26) {
              uVar22 = 0;
              if (uVar24 != 0) {
                uVar22 = uVar26 / uVar24;
              }
              uVar26 = uVar26 - uVar22 * uVar24;
            }
          } while (uVar26 == uVar23);
        }
      }
LAB_1099feb1c:
      plVar13 = (long *)0x20;
      __Znwm();
      *plVar13 = 0;
      plVar13[1] = param_3;
      plVar13[2] = param_3;
      plVar13[3] = (long)plVar10;
      fVar5 = (float)(*(long *)(param_2 + 0x1a8) + 1);
      if ((uVar24 == 0) || (*(float *)(param_2 + 0x1b0) * (float)uVar24 < fVar5)) {
        uVar23 = 1;
        if (2 < uVar24) {
          uVar23 = (ulong)((uVar24 & uVar24 - 1) != 0);
        }
        uVar23 = uVar23 | uVar24 << 1;
        uVar9 = (ulong)(fVar5 / *(float *)(param_2 + 0x1b0));
        if (uVar23 <= uVar9) {
          uVar23 = uVar9;
        }
        if (uVar23 - 1 == 0) {
          uVar23 = 2;
        }
        else if ((uVar23 & uVar23 - 1) != 0) {
          __ZNSt3__112__next_primeEm();
          uVar24 = *(ulong *)(param_2 + 0x198);
        }
        if (uVar24 < uVar23) {
LAB_1099febb4:
          uVar24 = uVar23;
          if (uVar24 >> 0x3d != 0) goto LAB_1099fee14;
          lVar25 = uVar24 << 3;
          __Znwm();
          lVar7 = *(long *)(param_2 + 400);
          *(long *)(param_2 + 400) = lVar25;
          if (lVar7 != 0) {
            __ZdlPv();
          }
          uVar23 = 0;
          *(ulong *)(param_2 + 0x198) = uVar24;
          do {
            *(undefined8 *)(*(long *)(param_2 + 400) + uVar23 * 8) = 0;
            uVar23 = uVar23 + 1;
          } while (uVar24 != uVar23);
          plVar14 = *(long **)(param_2 + 0x1a0);
          if (plVar14 != (long *)0x0) {
            uVar23 = plVar14[1];
            uVar9 = uVar24 - 1;
            if ((uVar24 & uVar9) == 0) {
              uVar23 = uVar23 & uVar9;
            }
            else if (uVar24 <= uVar23) {
              uVar26 = 0;
              if (uVar24 != 0) {
                uVar26 = uVar23 / uVar24;
              }
              uVar23 = uVar23 - uVar26 * uVar24;
            }
            *(ulong *)(*(long *)(param_2 + 400) + uVar23 * 8) = param_2 + 0x1a0;
            plVar19 = (long *)*plVar14;
            while (plVar19 != (long *)0x0) {
              uVar26 = plVar19[1];
              if ((uVar24 & uVar9) == 0) {
                uVar26 = uVar26 & uVar9;
              }
              else if (uVar24 <= uVar26) {
                uVar22 = 0;
                if (uVar24 != 0) {
                  uVar22 = uVar26 / uVar24;
                }
                uVar26 = uVar26 - uVar22 * uVar24;
              }
              plVar20 = plVar19;
              if (uVar26 != uVar23) {
                lVar25 = *(long *)(param_2 + 400);
                if (*(long *)(lVar25 + uVar26 * 8) == 0) {
                  *(long **)(lVar25 + uVar26 * 8) = plVar14;
                  uVar23 = uVar26;
                }
                else {
                  *plVar14 = *plVar19;
                  *plVar19 = **(undefined8 **)(lVar25 + uVar26 * 8);
                  **(long **)(lVar25 + uVar26 * 8) = (long)plVar19;
                  plVar20 = plVar14;
                }
              }
              plVar14 = plVar20;
              plVar19 = (long *)*plVar20;
            }
          }
        }
        else if (uVar23 < uVar24) {
          uVar9 = (ulong)((float)*(ulong *)(param_2 + 0x1a8) / *(float *)(param_2 + 0x1b0));
          if ((uVar24 < 3) || ((uVar24 & uVar24 - 1) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if (1 < uVar9) {
            uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
          }
          if (uVar23 <= uVar9) {
            uVar23 = uVar9;
          }
          if (uVar23 < uVar24) {
            if (uVar23 != 0) goto LAB_1099febb4;
            lVar25 = *(long *)(param_2 + 400);
            *(undefined8 *)(param_2 + 400) = 0;
            if (lVar25 != 0) {
              __ZdlPv();
            }
            uVar24 = 0;
            *(undefined8 *)(param_2 + 0x198) = 0;
          }
          else {
            uVar24 = *(ulong *)(param_2 + 0x198);
          }
        }
        if ((uVar24 & uVar24 - 1) == 0) {
          uVar23 = uVar24 - 1 & param_3;
        }
        else {
          uVar23 = param_3;
          if (uVar24 <= param_3) {
            uVar23 = 0;
            if (uVar24 != 0) {
              uVar23 = param_3 / uVar24;
            }
            uVar23 = param_3 - uVar23 * uVar24;
          }
        }
      }
      lVar25 = *(long *)(param_2 + 400);
      plVar14 = *(long **)(lVar25 + uVar23 * 8);
      if (plVar14 == (long *)0x0) {
        *plVar13 = *(long *)(param_2 + 0x1a0);
        *(long **)(param_2 + 0x1a0) = plVar13;
        *(ulong *)(lVar25 + uVar23 * 8) = param_2 + 0x1a0;
        if (*plVar13 == 0) goto LAB_1099fed94;
        uVar23 = *(ulong *)(*plVar13 + 8);
        if ((uVar24 & uVar24 - 1) == 0) {
          uVar23 = uVar23 & uVar24 - 1;
        }
        else if (uVar24 <= uVar23) {
          uVar9 = 0;
          if (uVar24 != 0) {
            uVar9 = uVar23 / uVar24;
          }
          uVar23 = uVar23 - uVar9 * uVar24;
        }
        plVar14 = (long *)(*(long *)(param_2 + 400) + uVar23 * 8);
      }
      else {
        *plVar13 = *plVar14;
      }
      *plVar14 = (long)plVar13;
LAB_1099fed94:
      *(long *)(param_2 + 0x1a8) = *(long *)(param_2 + 0x1a8) + 1;
LAB_1099feda0:
      *param_1 = plVar10;
      param_1[1] = plVar8;
      return;
    }
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar25 + 0x18) + 0x10);
    if (lVar7 != 0) {
      uVar21 = *(undefined8 *)(*(long *)(lVar25 + 0x18) + 8);
      __ZNSt3__119__shared_weak_count4lockEv();
      if (lVar7 != 0) {
        *param_1 = uVar21;
        param_1[1] = lVar7;
        return;
      }
    }
  }
  FUN_1092315e8();
LAB_1099fee14:
  func_0x000104c4f740();
LAB_1099fee18:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1099fee1c);
  (*pcVar6)();
}



/* Entry: 1099feea0; end: 1099feeaf;  */

void FUN_1099feea0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001099feeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))(param_1,0xffffffffffffffff);
  return;
}



/* Entry: 1099feeb0; end: 1099ff1eb;  */

/* WARNING: Removing unreachable block (ram,0x0001099ff018) */
/* WARNING: Removing unreachable block (ram,0x0001099ff01c) */
/* WARNING: Removing unreachable block (ram,0x0001099ff024) */
/* WARNING: Removing unreachable block (ram,0x0001099ff02c) */
/* WARNING: Removing unreachable block (ram,0x0001099ff030) */

void FUN_1099feeb0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  puStack_80 = (undefined8 *)0x0;
  puStack_78 = (undefined8 *)0x0;
  puVar13 = *(undefined8 **)(param_2 + 0x20);
  uVar7 = *puVar13;
  (*(code *)puVar13[7])();
  *(undefined8 *)(param_2 + 0x1d0) = uVar7;
  plVar9 = *(long **)(param_2 + 0x1b8);
  plVar2 = *(long **)(param_2 + 0x1c0);
  if (plVar2 != plVar9) {
    do {
      lVar14 = 0;
      lVar1 = *plVar9;
      lVar3 = plVar9[1];
      uVar12 = *(ulong *)(lVar1 + 0x50) >> 2;
      lVar11 = 4;
      do {
        lVar10 = *(long *)(lVar1 + 0x48);
        _memcpy(lVar10 + lVar14,lVar10 + lVar3 * uVar12,uVar12);
        lVar14 = lVar14 + uVar12;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar2);
    *(undefined8 *)(param_2 + 0x1c0) = *(undefined8 *)(param_2 + 0x1b8);
  }
  if (param_3 == -1) {
    uVar7 = *(undefined8 *)(param_2 + 8);
    plVar9 = *(long **)(param_2 + 0x10);
    uStack_70 = uVar7;
    if ((plVar9 != (long *)0x0) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plStack_68 = plVar9, plVar9 != (long *)0x0)) {
      puVar8 = (undefined8 *)0xb8;
      __Znwm();
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_110b20888;
      puVar13 = puVar8 + 3;
      uStack_70 = 0;
      plStack_68 = (long *)0x0;
      uStack_a8 = uVar7;
      plStack_a0 = plVar9;
      FUN_1099ff1ec(puVar13,uVar7,plVar9,0);
      plVar2 = plVar9 + 1;
      do {
        lVar14 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      FUN_109a02a74(puVar8,puVar8 + 5,puVar13);
      plVar9 = plStack_68;
      puStack_80 = puVar13;
      puStack_78 = puVar8;
      if (plStack_68 != (long *)0x0) {
        plVar2 = plStack_68 + 1;
        do {
          lVar14 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      goto LAB_1099ff140;
    }
    FUN_1092315e8();
  }
  else {
    (*(code *)puVar13[6])(&uStack_a8,*puVar13,param_3);
    uVar7 = *(undefined8 *)(param_2 + 8);
    plVar9 = *(long **)(param_2 + 0x10);
    if ((plVar9 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0)
       ) {
      puVar8 = (undefined8 *)0xb8;
      __Znwm();
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_FUN_110b20888;
      puVar13 = puVar8 + 3;
      uStack_70 = uVar7;
      plStack_68 = plVar9;
      FUN_1099ff1ec(puVar13,uVar7,plVar9,uStack_a8);
      plVar2 = plVar9 + 1;
      do {
        lVar14 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
      FUN_109a02a74(puVar8,puVar8 + 5,puVar13);
      puStack_80 = puVar13;
      puStack_78 = puVar8;
      if (plStack_a0 != (long *)0x0) {
        puVar8[10] = plStack_a0;
        puVar8[0x10] = uStack_98;
        puVar8[0xf] = uStack_88;
        puVar8[0xe] = uStack_90;
      }
LAB_1099ff140:
      param_1[1] = (long)puStack_78;
      *param_1 = (long)puStack_80;
      return;
    }
    FUN_1092315e8();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1099ff178);
  (*pcVar6)();
}



/* Entry: 1099ff1ec; end: 1099ff397;  */

undefined8 * FUN_1099ff1ec(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_110b1fcb0;
  param_1[1] = &PTR_DAT_110b1fd60;
  param_1[4] = param_2;
  param_1[5] = param_3;
  if (param_3 != 0) {
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[6] = param_4;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_4 == 0) {
    uVar7 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 8);
    func_0x00010bf41ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10);
    *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10) = uVar7;
    _objc_release(uVar9);
    param_1[6] = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  if (puVar3 < *(undefined8 **)(param_2 + 0x40)) {
    puVar14 = puVar3 + 1;
    *puVar3 = param_1;
LAB_1099ff330:
    *(undefined8 **)(param_2 + 0x38) = puVar14;
    return param_1;
  }
  lVar12 = *(long *)(param_2 + 0x30);
  lVar13 = (long)puVar3 - lVar12;
  uVar2 = (lVar13 >> 3) + 1;
  if (uVar2 >> 0x3d == 0) {
    uVar10 = (long)*(undefined8 **)(param_2 + 0x40) - lVar12;
    uVar11 = (long)uVar10 >> 2;
    if (uVar11 <= uVar2) {
      uVar11 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar11 = 0x1fffffffffffffff;
    }
    if (uVar11 >> 0x3d == 0) {
      lVar8 = uVar11 << 3;
      __Znwm();
      puVar3 = (undefined8 *)(lVar8 + lVar13);
      puVar14 = puVar3 + 1;
      *puVar3 = param_1;
      _memcpy(puVar3 + -(lVar13 >> 3),lVar12,lVar13);
      *(undefined8 **)(param_2 + 0x30) = puVar3 + -(lVar13 >> 3);
      *(undefined8 **)(param_2 + 0x38) = puVar14;
      *(ulong *)(param_2 + 0x40) = lVar8 + uVar11 * 8;
      if (lVar12 != 0) {
        __ZdlPv(lVar12);
      }
      goto LAB_1099ff330;
    }
    func_0x000104c4f740();
  }
  else {
    func_0x000109a007f0();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1099ff364);
  (*pcVar6)();
}



/* Entry: 1099ff398; end: 1099ff4ab;  */

undefined8 * FUN_1099ff398(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_110b1fcb0;
  param_1[1] = &PTR_DAT_110b1fd60;
  lVar6 = param_1[8];
  if (lVar6 != 0) {
    func_0x00010bf94840(lVar6);
    _objc_release(lVar6);
  }
  plVar7 = param_1 + 4;
  lVar6 = *plVar7;
  if (param_1[6] == *(long *)(*(long *)(lVar6 + 0x18) + 0x10)) {
    func_0x00010bf42760();
    func_0x00010c2a14a0(*(undefined8 *)(*(long *)(*plVar7 + 0x18) + 0x10));
    uVar5 = *(undefined8 *)(*(long *)(*plVar7 + 0x18) + 0x10);
    *(undefined8 *)(*(long *)(*plVar7 + 0x18) + 0x10) = 0;
    _objc_release(uVar5);
    lVar6 = *plVar7;
  }
  puVar1 = *(undefined8 **)(lVar6 + 0x30);
  puVar2 = *(undefined8 **)(lVar6 + 0x38);
  puVar8 = puVar1;
  puVar4 = puVar1;
  while ((puVar4 != puVar2 && (puVar8 = puVar1, (undefined8 *)*puVar4 != param_1))) {
    puVar1 = puVar1 + 1;
    puVar8 = puVar2;
    puVar4 = puVar4 + 1;
  }
  lVar3 = (long)puVar2 - (long)(puVar8 + 1);
  if (lVar3 != 0) {
    _memmove(puVar8,puVar8 + 1,lVar3);
  }
  *(long *)(lVar6 + 0x38) = (long)puVar8 + lVar3;
  FUN_109a00804(param_1 + 0xe);
  func_0x000109a02b20(param_1 + 9);
  func_0x000109a00b74(plVar7);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099ff4ac; end: 1099ff4af;  */

undefined8 * FUN_1099ff4ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_110b1fcb0;
  param_1[1] = &PTR_DAT_110b1fd60;
  lVar6 = param_1[8];
  if (lVar6 != 0) {
    func_0x00010bf94840(lVar6);
    _objc_release(lVar6);
  }
  plVar7 = param_1 + 4;
  lVar6 = *plVar7;
  if (param_1[6] == *(long *)(*(long *)(lVar6 + 0x18) + 0x10)) {
    func_0x00010bf42760();
    func_0x00010c2a14a0(*(undefined8 *)(*(long *)(*plVar7 + 0x18) + 0x10));
    uVar5 = *(undefined8 *)(*(long *)(*plVar7 + 0x18) + 0x10);
    *(undefined8 *)(*(long *)(*plVar7 + 0x18) + 0x10) = 0;
    _objc_release(uVar5);
    lVar6 = *plVar7;
  }
  puVar1 = *(undefined8 **)(lVar6 + 0x30);
  puVar2 = *(undefined8 **)(lVar6 + 0x38);
  puVar8 = puVar1;
  puVar4 = puVar1;
  while ((puVar4 != puVar2 && (puVar8 = puVar1, (undefined8 *)*puVar4 != param_1))) {
    puVar1 = puVar1 + 1;
    puVar8 = puVar2;
    puVar4 = puVar4 + 1;
  }
  lVar3 = (long)puVar2 - (long)(puVar8 + 1);
  if (lVar3 != 0) {
    _memmove(puVar8,puVar8 + 1,lVar3);
  }
  *(long *)(lVar6 + 0x38) = (long)puVar8 + lVar3;
  FUN_109a00804(param_1 + 0xe);
  func_0x000109a02b20(param_1 + 9);
  func_0x000109a00b74(plVar7);
  if (param_1[3] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 1099ff4b0; end: 1099ff4c3;  */

void FUN_1099ff4b0(void)

{
  FUN_1099ff398();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1099ff4c4; end: 1099ff77f;  */

void FUN_1099ff4c4(long param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [12];
  int iStack_64;
  
  lVar5 = *param_2;
  lVar8 = *(long *)(lVar5 + 0x18);
  lVar7 = *(long *)(lVar5 + 0x20);
  lVar6 = lVar7 - lVar8 >> 4;
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar4);
    if (lVar7 != lVar8) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        if ((*(int *)(*(long *)(*(long *)(*(long *)(lVar5 + 8) + 0x28) + 0x38) + lVar8 * 4) != -1)
           && (plVar2 = *(long **)(*(long *)(lVar5 + 0x18) + lVar7), plVar2 != (long *)0x0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2,&iStack_64,auStack_70,auStack_78);
          if (iStack_64 == 0) {
            _objc_retain(plVar2);
            func_0x00010c1741a0(uVar4);
          }
          else if (iStack_64 == 1) {
            _objc_retain(plVar2);
            func_0x00010c213a00(uVar4);
          }
          else {
            if (iStack_64 != 2) goto LAB_1099ff70c;
            _objc_retain(plVar2);
            func_0x00010c1f5400(uVar4);
          }
          _objc_release(plVar2);
        }
LAB_1099ff70c:
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar6 != lVar8);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    if (lVar7 != lVar8) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        lVar3 = *(long *)(*(long *)(lVar5 + 8) + 0x28);
        if ((*(int *)(*(long *)(lVar3 + 0x38) + lVar8 * 4) != -1) &&
           (plVar2 = *(long **)(*(long *)(lVar5 + 0x18) + lVar7), plVar2 != (long *)0x0)) {
          uVar1 = *(uint *)(*(long *)(lVar3 + 0x28) + lVar8 * 4);
          (**(code **)(*plVar2 + 0x10))(plVar2,&iStack_64,auStack_70,auStack_78);
          if (iStack_64 == 0) {
            _objc_retain(plVar2);
            if ((uVar1 & 1) != 0) {
              func_0x00010c220f00(uVar4);
            }
            if ((uVar1 >> 1 & 1) != 0) {
              func_0x00010c19f000(uVar4);
            }
          }
          else if (iStack_64 == 1) {
            _objc_retain(plVar2);
            if ((uVar1 & 1) != 0) {
              func_0x00010c220fc0(uVar4);
            }
            if ((uVar1 >> 1 & 1) != 0) {
              func_0x00010c19f0c0(uVar4);
            }
          }
          else {
            if (iStack_64 != 2) goto LAB_1099ff628;
            _objc_retain(plVar2);
            if ((uVar1 & 1) != 0) {
              func_0x00010c220fa0(uVar4);
            }
            if ((uVar1 >> 1 & 1) != 0) {
              func_0x00010c19f0a0(uVar4);
            }
          }
          _objc_release(plVar2);
        }
LAB_1099ff628:
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar6 != lVar8);
    }
  }
  _objc_release(uVar4);
  return;
}



/* Entry: 1099ff780; end: 1099ffc13;  */

void FUN_1099ff780(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long lStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar10 = (long *)(param_1 + 0x48);
  lStack_b8 = *param_2;
  if (lStack_b8 == *plVar10) {
    return;
  }
  plStack_b0 = (long *)param_2[1];
  if (plStack_b0 != (long *)0x0) {
    plVar1 = plStack_b0 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_1099ffc14(plVar10,&lStack_b8);
  plVar1 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar2 = plStack_b0 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar9 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar9);
    lVar8 = 0;
    lVar14 = *(long *)(param_1 + 0x48);
    uStack_78 = *(undefined8 *)(param_1 + 0x60);
    uStack_80 = *(undefined8 *)(param_1 + 0x58);
    uStack_70 = *(undefined8 *)(lVar14 + 0x78);
    uVar12 = 0xcbf29ce484222325;
    do {
      uVar12 = (uVar12 ^ (long)*(char *)((long)&uStack_80 + lVar8)) * 0x100000001b3;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x18);
    lVar8 = *(long *)(param_1 + 0x20) + 0x168;
    FUN_109a01bc4(lVar8,uVar12);
    if (lVar8 == 0) {
      uVar11 = *(undefined8 *)(lVar14 + 0x68);
      _objc_retain(uVar11);
      bVar4 = true;
      do {
        bVar7 = bVar4;
        uVar15 = uVar11;
        func_0x00010bf40cc0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar15;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1dc0a0();
        _objc_release(uVar6);
        _objc_release(uVar15);
        bVar4 = false;
      } while (bVar7);
      func_0x00010c18be00(uVar11);
      func_0x00010c20a580(uVar11);
      lVar8 = **(long **)(*(long *)(param_1 + 0x20) + 0x18);
      lStack_88 = 0;
      func_0x00010c0d8ec0(lVar8);
      lVar5 = lStack_88;
      _objc_retain(lStack_88);
      if (lVar5 != 0) {
        lVar13 = lVar5;
        func_0x00010c09e4e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        _printf(&UNK_10f593e36);
        _objc_release(lVar13);
      }
      lVar13 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar8);
      FUN_109a01c60(lVar13 + 0x168,uVar12,uVar12,lVar8);
      _objc_release(lVar5);
      _objc_release(uVar11);
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x18);
      _objc_retain(lVar8);
    }
    func_0x00010c1ea880(lVar9);
    uVar11 = *(undefined8 *)(lVar14 + 0x70);
    _objc_retain(uVar11);
    func_0x00010c18bf80(lVar9);
    if (*(char *)(lVar14 + 0x89) == '\x01') {
      func_0x00010c20a5e0(lVar9);
    }
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar14 + 0x40);
    uVar15 = *(undefined8 *)(lVar14 + 0x44);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar14 + 0x5c);
    *(undefined8 *)(param_1 + 0x88) = uVar15;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(lVar14 + 100);
    func_0x00010c1a1300(lVar9);
    func_0x00010c186960(lVar9);
    lStack_b8 = 0;
    plStack_b0 = (long *)0x0;
    auVar16._0_8_ = *(ulong *)(param_1 + 0x68) & 0xffffffff;
    auVar16._8_8_ = *(ulong *)(param_1 + 0x68) >> 0x20;
    auVar16 = NEON_ucvtf(auVar16,8);
    uStack_a0 = auVar16._8_8_;
    uStack_a8 = auVar16._0_8_;
    uStack_90 = 0x3ff0000000000000;
    uStack_98 = 0;
    func_0x00010c2232a0(lVar9);
    if ((*(byte *)(lVar14 + 0x88) & 1) == 0) {
      lStack_b8 = 0;
      plStack_b0 = (long *)0x0;
      uStack_a8 = *(ulong *)(param_1 + 0x68) & 0xffffffff;
      uStack_a0 = *(ulong *)(param_1 + 0x68) >> 0x20;
      func_0x00010c1f69a0(lVar9);
    }
    _objc_release(uVar11);
    goto LAB_1099ffb4c;
  }
  lVar8 = *plVar10;
  lVar9 = *(long *)(lVar8 + 0x28);
  if (lVar9 == 0) {
    lVar14 = lVar8 + 0x48;
    plStack_b0 = (long *)CONCAT71(plStack_b0._1_7_,1);
    lStack_b8 = lVar14;
    __ZNSt3__15mutex4lockEv(lVar14);
    if (*(long *)(lVar8 + 0x28) == 0) {
      do {
        __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(lVar8 + 0x88,&lStack_b8);
        lVar9 = *(long *)(lVar8 + 0x28);
      } while (lVar9 == 0);
      lVar14 = lStack_b8;
      if ((char)plStack_b0 != '\x01') goto LAB_1099ff900;
    }
    __ZNSt3__15mutex6unlockEv(lVar14);
    lVar9 = *(long *)(lVar8 + 0x28);
  }
LAB_1099ff900:
  _objc_retain(lVar9);
  lVar8 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar8);
  if (lVar8 == 0) {
    lVar14 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar14);
    lVar8 = lVar14;
    func_0x00010bf45840();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    *(long *)(param_1 + 0x40) = lVar8;
    _objc_release(lVar14);
  }
  func_0x00010c1806a0(lVar8);
LAB_1099ffb4c:
  _objc_release(lVar8);
  _objc_release(lVar9);
  return;
}



/* Entry: 1099ffc14; end: 1099ffc77;  */

undefined8 * FUN_1099ffc14(undefined8 *param_1,undefined8 *param_2)

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
  *param_2 = 0;
  param_2[1] = 0;
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



/* Entry: 1099ffc78; end: 1099ffd6f;  */

void FUN_1099ffc78(float param_1,float param_2,float param_3,float param_4,long param_5,
                  undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar7 = *(undefined8 *)(param_5 + 0x38);
  _objc_retain(uVar7);
  uStack_50 = (ulong)*(uint *)(param_5 + 0x68);
  uStack_48 = (ulong)*(uint *)(param_5 + 0x6c);
  uVar1 = (uint)(param_1 * (float)uStack_50);
  uVar2 = (uint)(param_2 * (float)uStack_48);
  uVar3 = (uint)(param_3 * (float)uStack_50);
  uVar4 = (uint)(param_4 * (float)uStack_48);
  uVar5 = uStack_50 - uVar1;
  if ((ulong)uVar1 + (ulong)uVar3 <= uStack_50) {
    uVar5 = (ulong)uVar3;
  }
  uVar6 = uStack_48 - uVar2;
  if ((ulong)uVar2 + (ulong)uVar4 <= uStack_48) {
    uVar6 = (ulong)uVar4;
  }
  if (uVar5 != uVar3 || uVar6 != uVar4) {
    _printf(&UNK_10f593e53);
    uStack_50 = (ulong)*(uint *)(param_5 + 0x68);
    uStack_48 = (ulong)*(uint *)(param_5 + 0x6c);
  }
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x00010c1f69a0(uVar7,param_6,&uStack_60);
  _objc_release(uVar7);
  return;
}



/* Entry: 1099ffd70; end: 1099ffef3;  */

void FUN_1099ffd70(long param_1,uint param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  iVar4 = (int)param_3;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  iVar5 = (int)((ulong)param_3 >> 0x20);
  if ((param_2 & 1) == 0) {
    bVar6 = false;
    bVar1 = false;
  }
  else {
    if ((*(int *)(param_1 + 0x84) == iVar4) && (*(int *)(param_1 + 0x88) == iVar5)) {
      bVar1 = false;
    }
    else {
      *(int *)(param_1 + 0x84) = iVar4;
      *(int *)(param_1 + 0x88) = iVar5;
      bVar1 = true;
    }
    if (*(int *)(param_1 + 0x8c) == param_4) {
      bVar6 = false;
    }
    else {
      *(int *)(param_1 + 0x8c) = param_4;
      bVar6 = true;
    }
  }
  lVar2 = *(long *)(param_1 + 0x48);
  if ((param_2 >> 1 & 1) == 0) {
LAB_1099ffe08:
    if (bVar1) {
      iVar4 = *(int *)(param_1 + 0x90);
      iVar5 = *(int *)(param_1 + 0x94);
LAB_1099ffe5c:
      uStack_90 = *(undefined8 *)(lVar2 + 0x38);
      uStack_98 = *(undefined8 *)(lVar2 + 0x30);
      uStack_a0 = *(undefined8 *)(lVar2 + 0x28);
      uStack_78 = *(undefined8 *)(lVar2 + 0x50);
      uStack_80 = *(undefined8 *)(lVar2 + 0x48);
      uStack_88 = *(undefined8 *)(param_1 + 0x84);
      uStack_70 = CONCAT44(iVar4,(int)*(undefined8 *)(lVar2 + 0x58));
      uStack_68 = CONCAT44((int)((ulong)*(undefined8 *)(lVar2 + 0x60) >> 0x20),iVar5);
      FUN_1099fb498(*(undefined8 *)(param_1 + 0x20),&uStack_a0,&uStack_51);
      func_0x00010c18bf80(uVar3);
    }
    if (!bVar6) goto LAB_1099ffeb8;
  }
  else {
    if ((*(int *)(param_1 + 0x90) != iVar4) || (*(int *)(param_1 + 0x94) != iVar5)) {
      *(int *)(param_1 + 0x90) = iVar4;
      *(int *)(param_1 + 0x94) = iVar5;
      if (*(int *)(param_1 + 0x98) != param_4) {
        *(int *)(param_1 + 0x98) = param_4;
LAB_1099ffe58:
        bVar6 = true;
      }
      goto LAB_1099ffe5c;
    }
    if (*(int *)(param_1 + 0x98) == param_4) goto LAB_1099ffe08;
    *(int *)(param_1 + 0x98) = param_4;
    if (bVar1) goto LAB_1099ffe58;
  }
  func_0x00010c20a5e0(uVar3);
LAB_1099ffeb8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1099ffef4; end: 1099fff9b;  */

void FUN_1099ffef4(long param_1,undefined8 param_2,undefined4 param_3)

{
  func_0x0001099fff20(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 1099fff9c; end: 109a0003b;  */

void FUN_1099fff9c(long param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = *(undefined8 *)(*(long *)(*param_2 + 0x48) + 0x40);
    _objc_retain(uVar2);
    func_0x00010c220f00(uVar1);
    _objc_release(uVar2);
    param_2 = param_2 + 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109a0003c; end: 109a0015f;  */

void FUN_109a0003c(long param_1,long *param_2,long *param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar2 = *(undefined8 *)(*(long *)(*param_2 + 0x48) + 0x40);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(*(long *)(*param_3 + 0x48) + 0x40);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar1 = uVar4;
  func_0x00010bf1cca0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    lVar5 = param_4 + param_5 * 0x18;
    do {
      func_0x00010bf51fa0(uVar1);
      param_4 = param_4 + 0x18;
    } while (param_4 != lVar5);
  }
  func_0x00010bf94840(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 109a00160; end: 109a001af;  */

void FUN_109a00160(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong in_x3;
  ulong in_x4;
  
  lVar1 = 0x10;
  ___cxa_allocate_exception();
  __ZNSt13runtime_errorC1EPKc();
  lVar2 = lVar1;
  puVar3 = PTR___ZTISt13runtime_error_110346a40;
  puVar4 = PTR___ZNSt13runtime_errorD1Ev_1103461d8;
  ___cxa_throw(lVar1,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  ___cxa_free_exception(lVar1);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bf89b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar2 + 0x38),PTR_s_drawPrimitives_vertexStart_verte_1125c0078,3,
             in_x3 & 0xffffffff,(ulong)puVar3 & 0xffffffff,(ulong)puVar4 & 0xffffffff,
             in_x4 & 0xffffffff);
  return;
}



/* Entry: 109a001b0; end: 109a001cf;  */

void FUN_109a001b0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_drawPrimitives_vertexStart_verte_1125c0078,3,
             param_4,param_2,param_3,param_5);
  return;
}



/* Entry: 109a001d0; end: 109a00293;  */

void FUN_109a001d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010bf899c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109a00294; end: 109a002fb;  */

void FUN_109a00294(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  func_0x00010bf89ae0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109a002fc; end: 109a003ab;  */

void FUN_109a002fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x40);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x00010bf899e0(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109a003ac; end: 109a003ff;  */

void FUN_109a003ac(long param_1,ulong *param_2)

{
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  
  uStack_20 = (ulong)(uint)param_2[1];
  uStack_30 = *param_2 & 0xffffffff;
  uStack_28 = *param_2 >> 0x20;
  uStack_40 = (ulong)*(uint *)(*(long *)(param_1 + 0x48) + 0x38);
  uStack_48 = *(ulong *)(*(long *)(param_1 + 0x48) + 0x30);
  uStack_50 = uStack_48 & 0xffffffff;
  uStack_48 = uStack_48 >> 0x20;
  func_0x00010bf85260(*(undefined8 *)(param_1 + 0x40),param_2,&uStack_30,&uStack_50);
  return;
}



/* Entry: 109a00400; end: 109a00487;  */

void FUN_109a00400(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
  func_0x00010bf85280(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 109a00488; end: 109a0048b;  */

undefined8 * FUN_109a00488(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_110b1f9b8;
  lVar6 = param_1[3];
  if ((*(byte *)(param_1 + 0xb) >> 4 & 1) != 0) {
    puVar2 = *(undefined8 **)(lVar6 + 0x1c0);
    for (puVar1 = *(undefined8 **)(lVar6 + 0x1b8); puVar2 != puVar1; puVar1 = puVar1 + 2) {
      if ((undefined8 *)*puVar1 == param_1) goto joined_r0x0001099f7ff4;
    }
  }
LAB_1099f8014:
  puVar1 = *(undefined8 **)(lVar6 + 0x48);
  puVar2 = *(undefined8 **)(lVar6 + 0x50);
  puVar5 = puVar1;
  puVar4 = puVar1;
  while ((puVar4 != puVar2 && (puVar5 = puVar1, (undefined8 *)*puVar4 != param_1))) {
    puVar1 = puVar1 + 1;
    puVar5 = puVar2;
    puVar4 = puVar4 + 1;
  }
  if (puVar2 != puVar5) {
    lVar3 = (long)puVar2 - (long)(puVar5 + 1);
    if (lVar3 != 0) {
      _memmove(puVar5,puVar5 + 1,lVar3);
    }
    *(long *)(lVar6 + 0x50) = (long)puVar5 + lVar3;
    _objc_release(param_1[8]);
  }
  if (param_1[5] != 0) {
    param_1[6] = param_1[5];
    __ZdlPv();
  }
  func_0x000109a00b74(param_1 + 3);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
joined_r0x0001099f7ff4:
  while (puVar5 = puVar1 + 2, puVar5 != puVar2) {
    puVar5[-2] = *puVar5;
    puVar5[-1] = puVar5[1];
    puVar1 = puVar5;
  }
  *(undefined8 **)(lVar6 + 0x1c0) = puVar1;
  goto LAB_1099f8014;
}



/* Entry: 109a0048c; end: 109a0049f;  */

void FUN_109a0048c(void)

{
  FUN_1099f7f90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a004a0; end: 109a004f7;  */

void FUN_109a004a0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  param_1[1] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 109a004f8; end: 109a0050b;  */

void FUN_109a004f8(void)

{
  FUN_1099f9208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a0050c; end: 109a00513;  */

undefined8 * FUN_109a0050c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar5 = param_1 + -3;
  *puVar5 = &PTR_FUN_110b1faa0;
  *param_1 = &PTR_DAT_110b1fb00;
  lVar7 = param_1[6];
  if (lVar7 != 0) {
    puVar1 = *(undefined8 **)(lVar7 + 0x28);
    puVar2 = *(undefined8 **)(lVar7 + 0x30);
    puVar6 = puVar1;
    puVar4 = puVar1;
    while ((puVar4 != puVar2 && (puVar6 = puVar1, (undefined8 *)*puVar4 != puVar5))) {
      puVar1 = puVar1 + 1;
      puVar6 = puVar2;
      puVar4 = puVar4 + 1;
    }
    lVar3 = (long)puVar2 - (long)(puVar6 + 1);
    if (lVar3 != 0) {
      _memmove(puVar6,puVar6 + 1,lVar3);
    }
    *(long *)(lVar7 + 0x30) = (long)puVar6 + lVar3;
  }
  func_0x000109a00c54(param_1 + 6);
  func_0x000109a01040(param_1 + 1);
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar5;
}



/* Entry: 109a00514; end: 109a0057b;  */

void FUN_109a00514(long param_1)

{
  FUN_1099f9208(param_1 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109a0057c; end: 109a006a3;  */

void FUN_109a0057c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_retain(param_2);
    plVar3 = *(long **)(param_1 + 0x38);
    lStack_38 = param_2;
    if (plVar3 == (long *)0x0) {
      func_0x000104c501e4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109a00658);
      (*pcVar1)();
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,&lStack_38);
    lVar2 = lStack_38;
  }
  else {
    lVar2 = param_3;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc3520();
    _printf(&UNK_10f593ebc);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 109a006a4; end: 109a006df;  */

long FUN_109a006a4(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = param_1 + 0x20;
  plVar2 = *(long **)(param_2 + 0x38);
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else if (plVar2 == (long *)(param_2 + 0x20)) {
    *(long *)(param_1 + 0x38) = lVar1;
    (**(code **)(**(long **)(param_2 + 0x38) + 0x18))(*(long **)(param_2 + 0x38),lVar1);
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    *(long **)(param_1 + 0x38) = plVar2;
  }
  return lVar1;
}



/* Entry: 109a006e0; end: 109a00727;  */

void FUN_109a006e0(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 < 0x1555555555555556) {
    plVar1 = param_1;
    FUN_109a0073c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 0xc;
    return;
  }
  FUN_109a00728();
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x1555555555555556) {
    __Znwm(param_2 * 0xc);
    return;
  }
  func_0x000104c4f740();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_109a026e8();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 109a00728; end: 109a0073b;  */

void FUN_109a00728(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x1555555555555556) {
    __Znwm(param_2 * 0xc);
    return;
  }
  func_0x000104c4f740();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_109a026e8();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 109a0073c; end: 109a007db;  */

void FUN_109a0073c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 < 0x1555555555555556) {
    __Znwm(param_2 * 0xc);
    return;
  }
  func_0x000104c4f740();
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_109a026e8();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 109a007dc; end: 109a00803;  */

undefined * FUN_109a007dc(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  puVar4 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 109a00804; end: 109a00bcb;  */

long FUN_109a00804(long param_1)

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


