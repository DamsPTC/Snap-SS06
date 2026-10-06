/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a17058c; end: 10a17063b;  */

void FUN_10a17058c(undefined8 param_1,long param_2,int param_3,long param_4,undefined8 *param_5,
                  long param_6)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar4 = (*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3) * 0x4fbcda3ac10c9715;
  if ((ulong)(long)param_3 <= uVar4 && uVar4 - (long)param_3 != 0) {
    if ((*(int *)(param_4 + 0x34) != 0) && (*(uint *)(param_4 + 0x14) < 0xc)) {
      lVar5 = *(long *)(param_2 + 0x10) + (long)param_3 * 0x1e8 +
              (ulong)*(uint *)(param_4 + 0x14) * 0x28;
      uVar2 = *(uint *)(lVar5 + 0x1c);
      if (uVar2 != 0) {
        uVar1 = *(uint *)(param_4 + 0x2c);
        if ((ulong)*(uint *)(param_4 + 0x28) + param_6 * (ulong)uVar1 <= (ulong)uVar2) {
          if (1 < *(uint *)(param_2 + 0x70)) goto LAB_10a170638;
          if (param_6 != 0) {
            puVar6 = (undefined8 *)
                     (*(long *)(param_2 + (ulong)*(uint *)(param_2 + 0x70) * 0x20 + 0x30) +
                      (ulong)*(uint *)(param_4 + 0x28) + (ulong)*(uint *)(lVar5 + 0x20));
            do {
              uVar8 = param_5[1];
              uVar7 = *param_5;
              uVar10 = param_5[3];
              uVar9 = param_5[2];
              uVar11 = param_5[4];
              uVar13 = param_5[7];
              uVar12 = param_5[6];
              puVar6[5] = param_5[5];
              puVar6[4] = uVar11;
              puVar6[7] = uVar13;
              puVar6[6] = uVar12;
              puVar6[1] = uVar8;
              *puVar6 = uVar7;
              puVar6[3] = uVar10;
              puVar6[2] = uVar9;
              puVar6 = (undefined8 *)((long)puVar6 + (ulong)uVar1);
              param_5 = param_5 + 8;
              param_6 = param_6 + -1;
            } while (param_6 != 0);
          }
        }
      }
    }
    return;
  }
LAB_10a170638:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a17063c);
  (*pcVar3)();
}



/* Entry: 10a17063c; end: 10a170727;  */

void FUN_10a17063c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uStack_38;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  uStack_31 = (undefined1)param_4;
  uStack_32 = (undefined1)param_5;
  uStack_33 = (undefined1)param_6;
  if (*(long *)(param_1 + 0x1b8) == 0) {
    if (*(long *)(param_1 + 0x1a0) != 0) {
      func_0x00010a195d54(param_1,param_2,param_3,*(long *)(param_1 + 0x1a0),&uStack_31,1);
    }
    if (*(long *)(param_1 + 0x1a8) != 0) {
      func_0x00010a195d54(param_1,param_2,param_3,*(long *)(param_1 + 0x1a8),&uStack_32,1);
    }
    if (*(long *)(param_1 + 0x1b0) != 0) {
      func_0x00010a195d54(param_1,param_2,param_3,*(long *)(param_1 + 0x1b0),&uStack_33,1);
    }
  }
  else {
    uVar1 = 2;
    if (param_5 == 0) {
      uVar1 = 0;
    }
    uVar2 = 4;
    if (param_6 == 0) {
      uVar2 = 0;
    }
    uStack_38 = uVar1 | uVar2 | param_4;
    func_0x00010a196138(param_1,param_2,param_3,*(long *)(param_1 + 0x1b8),&uStack_38,1);
  }
  return;
}



/* Entry: 10a170728; end: 10a17081b;  */

void FUN_10a170728(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  for (puVar4 = *(undefined8 **)(param_2 + 0x10); puVar4 != puVar1; puVar4 = puVar4 + 8) {
    (*(code *)puVar4[3])(*puVar4,param_5 + puVar4[1],param_3,param_4);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  for (puVar4 = *(undefined8 **)(param_2 + 0x28); puVar4 != puVar1; puVar4 = puVar4 + 9) {
    (*(code *)puVar4[3])(*puVar4,param_5 + puVar4[1],param_3,param_4,puVar4[8]);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x48);
  for (puVar4 = *(undefined8 **)(param_2 + 0x40); puVar4 != puVar1; puVar4 = puVar4 + 8) {
    (*(code *)puVar4[3])(*puVar4,param_5 + puVar4[1],param_3,param_4,param_6);
  }
  lVar2 = *(long *)(param_2 + 0x60);
  for (lVar3 = *(long *)(param_2 + 0x58); lVar3 != lVar2; lVar3 = lVar3 + 0x30) {
    (**(code **)(lVar3 + 0x28))(lVar3,param_5,param_3,param_4);
  }
  return;
}



/* Entry: 10a17081c; end: 10a1709f3;  */

void FUN_10a17081c(undefined8 param_1,long param_2,uint param_3,long param_4,long param_5)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar1 = *(long *)(param_2 + 0x18);
  for (lVar4 = *(long *)(param_2 + 0x10); lVar4 != lVar1; lVar4 = lVar4 + 0x40) {
    _memcpy(param_4 + *(long *)(lVar4 + 0x28),param_5 + *(long *)(lVar4 + 8),
            *(undefined8 *)(lVar4 + 0x10));
  }
  lVar1 = *(long *)(param_2 + 0x30);
  for (lVar4 = *(long *)(param_2 + 0x28); lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
    lVar6 = *(long *)(lVar4 + 0x38);
    uVar11 = *(ulong *)(lVar4 + 0x30);
    if (*(ulong *)(lVar4 + 0x40) <= *(ulong *)(lVar4 + 0x30)) {
      uVar11 = *(ulong *)(lVar4 + 0x40);
    }
    if (uVar11 < 2) {
      uVar11 = 1;
    }
    lVar8 = param_4 + *(long *)(lVar4 + 0x28);
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar10 = param_5 + *(long *)(lVar4 + 8);
    if (lVar6 == lVar5) {
      _memcpy(lVar8,lVar10,uVar11 * lVar6);
    }
    else {
      do {
        _memcpy(lVar8,lVar10,lVar5);
        lVar10 = lVar10 + lVar5;
        lVar8 = lVar8 + lVar6;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  lVar4 = *(long *)(param_2 + 0x40);
  lVar1 = *(long *)(param_2 + 0x48);
  if (lVar4 != lVar1) {
    do {
      uVar11 = *(ulong *)(lVar4 + 0x30);
      if ((ulong)param_3 <= *(ulong *)(lVar4 + 0x30)) {
        uVar11 = (ulong)param_3;
      }
      if (uVar11 < 2) {
        uVar11 = 1;
      }
      lVar6 = param_4 + *(long *)(lVar4 + 0x28);
      lVar5 = *(long *)(lVar4 + 0x38);
      lVar10 = *(long *)(lVar4 + 0x10);
      lVar8 = param_5 + *(long *)(lVar4 + 8);
      if (lVar5 == lVar10) {
        _memcpy(lVar6,lVar8,uVar11 * lVar5);
      }
      else {
        do {
          _memcpy(lVar6,lVar8,lVar10);
          lVar8 = lVar8 + lVar10;
          lVar6 = lVar6 + lVar5;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      lVar4 = lVar4 + 0x40;
    } while (lVar4 != lVar1);
  }
  puVar2 = *(ulong **)(param_2 + 0x60);
  for (puVar7 = *(ulong **)(param_2 + 0x58); puVar7 != puVar2; puVar7 = puVar7 + 6) {
    uVar9 = *(ulong *)(param_5 + puVar7[1]);
    uVar11 = *puVar7;
    if (uVar9 <= *puVar7) {
      uVar11 = uVar9;
    }
    if (uVar11 != 0) {
      uVar11 = 0;
      do {
        uVar3 = puVar7[3];
        for (uVar12 = puVar7[2]; uVar12 != uVar3; uVar12 = uVar12 + 0x40) {
          _memcpy(param_4 + *(long *)(uVar12 + 0x28),param_5 + *(long *)(uVar12 + 8),
                  *(undefined8 *)(uVar12 + 0x10));
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar9);
    }
  }
  return;
}



/* Entry: 10a1709f4; end: 10a170a5b;  */

undefined8 FUN_10a1709f4(int param_1)

{
  if (param_1 < 0x1c) {
    if (param_1 == 0xd) {
      return 0xde1;
    }
    if (param_1 == 0x1a) {
      return 0x8c1a;
    }
    if (param_1 == 0x1b) {
      return 0x806f;
    }
  }
  else {
    if (param_1 - 0x1dU < 2) {
      return 0xde1;
    }
    if (param_1 == 0x1c) {
      return 0x8513;
    }
  }
  return 0;
}



/* Entry: 10a170a5c; end: 10a170fe7;  */

void FUN_10a170a5c(long param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  ulong unaff_x25;
  float fVar21;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  char cStack_59;
  long lStack_58;
  
  uVar17 = (ulong)param_2;
  uVar20 = *(ulong *)(param_1 + 0x1d8);
  if (uVar20 != 0) {
    uVar8 = uVar20 - 1;
    uVar19 = (uint)uVar20;
    if ((uVar20 & uVar8) == 0) {
      uVar11 = (ulong)(uVar19 - 1 & param_2);
    }
    else {
      uVar11 = uVar17;
      if (uVar20 <= uVar17) {
        uVar3 = 0;
        if (uVar19 != 0) {
          uVar3 = param_2 / uVar19;
        }
        uVar11 = (ulong)(param_2 - uVar3 * uVar19);
      }
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x1d0) + uVar11 * 8);
    if (plVar12 != (long *)0x0) {
      for (plVar12 = (long *)*plVar12; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        uVar13 = plVar12[1];
        if (uVar13 == uVar17) {
          if (*(uint *)(plVar12 + 2) == param_2) {
            return;
          }
        }
        else {
          if ((uVar20 & uVar8) == 0) {
            uVar13 = uVar13 & uVar8;
          }
          else if (uVar20 <= uVar13) {
            uVar16 = 0;
            if (uVar20 != 0) {
              uVar16 = uVar13 / uVar20;
            }
            uVar13 = uVar13 - uVar16 * uVar20;
          }
          if (uVar13 != uVar11) break;
        }
      }
    }
    if ((uVar20 & uVar8) == 0) {
      unaff_x25 = (ulong)(uVar19 - 1 & param_2);
    }
    else {
      unaff_x25 = uVar17;
      if (uVar20 <= uVar17) {
        uVar3 = 0;
        if (uVar19 != 0) {
          uVar3 = param_2 / uVar19;
        }
        unaff_x25 = (ulong)(param_2 - uVar3 * uVar19);
      }
    }
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x1d0) + unaff_x25 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar9; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        uVar11 = plVar12[1];
        if (uVar11 == uVar17) {
          if (*(uint *)(plVar12 + 2) == param_2) goto LAB_10a170e34;
        }
        else {
          if ((uVar20 & uVar8) == 0) {
            uVar11 = uVar11 & uVar8;
          }
          else if (uVar20 <= uVar11) {
            uVar13 = 0;
            if (uVar20 != 0) {
              uVar13 = uVar11 / uVar20;
            }
            uVar11 = uVar11 - uVar13 * uVar20;
          }
          if (uVar11 != unaff_x25) break;
        }
      }
    }
  }
  plVar12 = (long *)0x30;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar17;
  *(uint *)(plVar12 + 2) = param_2;
  plVar12[4] = 0;
  plVar12[5] = 0;
  plVar12[3] = 0;
  fVar21 = (float)(*(long *)(param_1 + 0x1e8) + 1);
  if ((uVar20 == 0) || (*(float *)(param_1 + 0x1f0) * (float)uVar20 < fVar21)) {
    uVar8 = 1;
    if (2 < uVar20) {
      uVar8 = (ulong)((uVar20 & uVar20 - 1) != 0);
    }
    uVar8 = uVar8 | uVar20 << 1;
    uVar11 = (ulong)(fVar21 / *(float *)(param_1 + 0x1f0));
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar20 = *(ulong *)(param_1 + 0x1d8);
    }
    if (uVar20 < uVar8) {
LAB_10a170c44:
      if (uVar8 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10a170fd0);
        (*pcVar5)();
      }
      lVar6 = uVar8 << 3;
      __Znwm();
      lVar7 = *(long *)(param_1 + 0x1d0);
      *(long *)(param_1 + 0x1d0) = lVar6;
      if (lVar7 != 0) {
        __ZdlPv();
      }
      uVar20 = 0;
      *(ulong *)(param_1 + 0x1d8) = uVar8;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x1d0) + uVar20 * 8) = 0;
        uVar20 = uVar20 + 1;
      } while (uVar8 != uVar20);
      plVar10 = *(long **)(param_1 + 0x1e0);
      uVar20 = uVar8;
      if (plVar10 != (long *)0x0) {
        uVar11 = plVar10[1];
        uVar13 = uVar8 - 1;
        if ((uVar8 & uVar13) == 0) {
          uVar11 = uVar11 & uVar13;
        }
        else if (uVar8 <= uVar11) {
          uVar16 = 0;
          if (uVar8 != 0) {
            uVar16 = uVar11 / uVar8;
          }
          uVar11 = uVar11 - uVar16 * uVar8;
        }
        *(long *)(*(long *)(param_1 + 0x1d0) + uVar11 * 8) = param_1 + 0x1e0;
        plVar14 = (long *)*plVar10;
        while (plVar14 != (long *)0x0) {
          uVar16 = plVar14[1];
          if ((uVar8 & uVar13) == 0) {
            uVar16 = uVar16 & uVar13;
          }
          else if (uVar8 <= uVar16) {
            uVar4 = 0;
            if (uVar8 != 0) {
              uVar4 = uVar16 / uVar8;
            }
            uVar16 = uVar16 - uVar4 * uVar8;
          }
          plVar15 = plVar14;
          if (uVar16 != uVar11) {
            lVar6 = *(long *)(param_1 + 0x1d0);
            if (*(long *)(lVar6 + uVar16 * 8) == 0) {
              *(long **)(lVar6 + uVar16 * 8) = plVar10;
              uVar11 = uVar16;
            }
            else {
              *plVar10 = *plVar14;
              *plVar14 = **(undefined8 **)(lVar6 + uVar16 * 8);
              **(long **)(lVar6 + uVar16 * 8) = (long)plVar14;
              plVar15 = plVar10;
            }
          }
          plVar10 = plVar15;
          plVar14 = (long *)*plVar15;
        }
      }
    }
    else if (uVar8 < uVar20) {
      uVar11 = (ulong)((float)*(ulong *)(param_1 + 0x1e8) / *(float *)(param_1 + 0x1f0));
      if ((uVar20 < 3) || ((uVar20 & uVar20 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar11) {
        uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
      }
      if (uVar8 <= uVar11) {
        uVar8 = uVar11;
      }
      if (uVar8 < uVar20) {
        if (uVar8 != 0) goto LAB_10a170c44;
        lVar6 = *(long *)(param_1 + 0x1d0);
        *(undefined8 *)(param_1 + 0x1d0) = 0;
        if (lVar6 != 0) {
          __ZdlPv();
        }
        *(undefined8 *)(param_1 + 0x1d8) = 0;
        uVar20 = 0;
      }
      else {
        uVar20 = *(ulong *)(param_1 + 0x1d8);
      }
    }
    if ((uVar20 & uVar20 - 1) == 0) {
      unaff_x25 = (ulong)((int)uVar20 - 1U & param_2);
    }
    else {
      unaff_x25 = uVar17;
      if (uVar20 <= uVar17) {
        uVar8 = 0;
        if (uVar20 != 0) {
          uVar8 = uVar17 / uVar20;
        }
        unaff_x25 = uVar17 - uVar8 * uVar20;
      }
    }
  }
  lVar6 = *(long *)(param_1 + 0x1d0);
  plVar10 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar12 = *(long *)(param_1 + 0x1e0);
    *(long **)(param_1 + 0x1e0) = plVar12;
    *(long *)(lVar6 + unaff_x25 * 8) = param_1 + 0x1e0;
    if (*plVar12 == 0) goto LAB_10a170e28;
    uVar17 = *(ulong *)(*plVar12 + 8);
    if ((uVar20 & uVar20 - 1) == 0) {
      uVar17 = uVar17 & uVar20 - 1;
    }
    else if (uVar20 <= uVar17) {
      uVar8 = 0;
      if (uVar20 != 0) {
        uVar8 = uVar17 / uVar20;
      }
      uVar17 = uVar17 - uVar8 * uVar20;
    }
    plVar10 = (long *)(*(long *)(param_1 + 0x1d0) + uVar17 * 8);
  }
  else {
    *plVar12 = *plVar10;
  }
  *plVar10 = (long)plVar12;
LAB_10a170e28:
  *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + 1;
LAB_10a170e34:
  plVar10 = *(long **)(param_1 + 0x18);
  if (*plVar10 == 0) {
    FUN_10a160944(plVar10);
    for (plVar10 = (long *)plVar10[8]; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      lVar6 = *(long *)(param_3 + 8);
      lVar7 = *(long *)(param_3 + 0x10);
      if (lVar6 == lVar7) {
LAB_10a170f18:
        if (lVar6 != lVar7 && lVar6 != 0) {
          uStack_70 = *(undefined4 *)(plVar10 + 8);
          uStack_6c = 0;
          uStack_64 = *(undefined4 *)(lVar6 + 0x30);
          uStack_68 = *(undefined4 *)(lVar6 + 0x24);
          uStack_60 = *(undefined4 *)(lVar6 + 0x28);
          uStack_5c = *(undefined1 *)(lVar6 + 0x2c);
          FUN_10a170fe8(plVar12 + 3,&uStack_70);
        }
      }
      else {
        do {
          if (*(long *)(lVar6 + 0x18) == plVar10[5]) goto LAB_10a170f18;
          lVar6 = lVar6 + 0x38;
        } while (lVar6 != lVar7);
      }
    }
  }
  else {
    FUN_10a1608ec();
    lVar7 = plVar10[1];
    for (lVar6 = *plVar10; lVar6 != lVar7; lVar6 = lVar6 + 0x20) {
      FUN_10a0d09b4(&uStack_70,lVar6);
      lVar2 = *(long *)(param_3 + 0x10);
      lVar1 = *(long *)(param_3 + 8);
      lVar18 = lVar1;
      for (; (lVar1 != lVar2 && (lVar18 = lVar1, *(long *)(lVar1 + 0x18) != lStack_58));
          lVar1 = lVar1 + 0x38) {
        lVar18 = lVar2;
      }
      if (cStack_59 < '\0') {
        __ZdlPv(CONCAT44(uStack_6c,uStack_70));
      }
      if (lVar18 != lVar2 && lVar18 != 0) {
        uStack_70 = *(undefined4 *)(lVar6 + 0x18);
        uStack_6c = 0;
        uStack_64 = *(undefined4 *)(lVar18 + 0x30);
        uStack_68 = *(undefined4 *)(lVar18 + 0x24);
        uStack_60 = *(undefined4 *)(lVar18 + 0x28);
        uStack_5c = *(undefined1 *)(lVar18 + 0x2c);
        FUN_10a170fe8(plVar12 + 3,&uStack_70);
      }
    }
  }
  return;
}



/* Entry: 10a170fe8; end: 10a1711c7;  */

long * FUN_10a170fe8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    puVar11[2] = param_2[2];
    puVar11[1] = uVar13;
    *puVar11 = uVar12;
    puVar11 = puVar11 + 3;
    plVar4 = param_1;
  }
  else {
    lVar10 = (long)puVar11 - *param_1;
    uVar8 = (lVar10 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar8) {
      FUN_10a1871f0();
      plVar4 = param_1;
      FUN_10a08fd8c();
      plVar6 = (long *)param_1[3];
      if ((((int)plVar4 == 0) || ((*(byte *)((long)plVar6 + 0x18b) & 1) == 0)) &&
         (*(char *)((long)plVar6 + 0x189) == '\x01')) {
        if (((*(byte *)(param_2 + 4) | 4) == 0xd) ||
           (((*plVar6 != 0 && (iVar2 = *(int *)(*plVar6 + 0x734), iVar2 == 7 || iVar2 == 2)) &&
            ((char)plVar6[0x46] == '\x01')))) {
          lVar7 = param_2[0x1e];
          for (lVar10 = param_2[0x1d]; lVar10 != lVar7; lVar10 = lVar10 + 0x68) {
            lVar3 = *(long *)(lVar10 + 0x30);
            if (*(long *)(lVar10 + 0x30) != 0) {
              do {
                lVar5 = lVar3;
                lVar3 = *(long *)(lVar5 + 0x98);
              } while (*(long *)(lVar5 + 0x98) != 0);
              ___dynamic_cast(lVar5,&PTR_DAT_110b9f6e8,&PTR_DAT_110bb2780,0);
              if (lVar5 != 0) goto LAB_10a1711c0;
            }
          }
          plVar4 = (long *)0x1;
        }
        else {
LAB_10a1711c0:
          plVar4 = (long *)0x0;
        }
      }
      else {
        plVar4 = (long *)(ulong)(param_1[0x2f] != 0);
      }
      return plVar4;
    }
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    plVar6 = param_1;
    FUN_10a187204();
    puVar1 = (undefined8 *)((long)plVar6 + lVar10);
    uVar13 = param_2[1];
    uVar12 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar13;
    *puVar1 = uVar12;
    puVar11 = puVar1 + 3;
    lVar10 = (long)puVar1 - (param_1[1] - *param_1);
    _memcpy(lVar10);
    plVar4 = (long *)*param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar11;
    param_1[2] = (long)(plVar6 + uVar9 * 3);
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar11;
  return plVar4;
}



/* Entry: 10a1711c8; end: 10a1716eb;  */

void FUN_10a1711c8(float *param_1,float *param_2,float *param_3,float *param_4,ulong param_5,
                  long param_6,float *param_7)

{
  undefined8 *puVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  undefined8 *extraout_x8;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
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
  float afStack_110 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_58;
  
  pfVar2 = afStack_110;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar3 = param_1;
  if (*(long *)(param_1 + 0x1e) != 0) {
    func_0x000109519fd0(afStack_110,param_3,param_2);
    FUN_10a1716ec(&uStack_d0);
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    lVar4 = param_6 + (param_5 & 0xffffffff) * 0x30;
    *(undefined8 *)(lVar4 + 0x208) = uStack_c8;
    *(undefined8 *)(lVar4 + 0x200) = uStack_d0;
    *(undefined8 *)(lVar4 + 0x218) = uStack_b8;
    *(undefined8 *)(lVar4 + 0x210) = uStack_c0;
    *(undefined8 *)(lVar4 + 0x228) = uStack_a8;
    *(undefined8 *)(lVar4 + 0x220) = uStack_b0;
    pfVar3 = pfVar2;
  }
  if ((*(long *)(param_1 + 0x1a) != 0) || (*(long *)(param_1 + 0x1c) != 0)) {
    func_0x000109519fd0(&uStack_d0,param_3,param_2);
    puVar1 = (undefined8 *)(param_6 + (param_5 & 0xffffffff) * 0x40);
    puVar1[1] = uStack_c8;
    *puVar1 = uStack_d0;
    puVar1[3] = uStack_b8;
    puVar1[2] = uStack_c0;
    puVar1[5] = uStack_a8;
    puVar1[4] = uStack_b0;
    puVar1[7] = uStack_98;
    puVar1[6] = uStack_a0;
    pfVar3 = param_3;
  }
  if ((*(long *)(param_1 + 0x16) != 0) || (*(long *)(param_1 + 0x18) != 0)) {
    func_0x000109519fd0(&uStack_d0,param_4,param_2);
    lVar4 = param_6 + (param_5 & 0xffffffff) * 0x40;
    *(undefined8 *)(lVar4 + 0x108) = uStack_c8;
    *(undefined8 *)(lVar4 + 0x100) = uStack_d0;
    *(undefined8 *)(lVar4 + 0x118) = uStack_b8;
    *(undefined8 *)(lVar4 + 0x110) = uStack_c0;
    *(undefined8 *)(lVar4 + 0x128) = uStack_a8;
    *(undefined8 *)(lVar4 + 0x120) = uStack_b0;
    *(undefined8 *)(lVar4 + 0x138) = uStack_98;
    *(undefined8 *)(lVar4 + 0x130) = uStack_a0;
    pfVar3 = param_4;
  }
  if ((*(long *)(param_1 + 0x24) != 0) || (*(long *)(param_1 + 0x26) != 0)) {
    fVar5 = *param_2;
    fVar8 = param_2[1];
    fVar11 = param_2[2];
    fVar13 = param_2[4];
    fVar16 = param_2[5];
    fVar17 = param_2[6];
    fVar18 = param_2[8];
    fVar19 = param_2[9];
    fVar20 = param_2[10];
    fVar22 = -(fVar8 * (-(fVar17 * fVar18) + fVar20 * fVar13)) +
             (-(fVar17 * fVar19) + fVar20 * fVar16) * fVar5 +
             (-(fVar16 * fVar18) + fVar19 * fVar13) * fVar11;
    param_7[0x20] = (-(fVar19 * fVar17) + fVar20 * fVar16) / fVar22;
    param_7[0x21] = (-(fVar13 * fVar20) - -(fVar18 * fVar17)) / fVar22;
    param_7[0x22] = (-(fVar18 * fVar16) + fVar19 * fVar13) / fVar22;
    param_7[0x23] = 0.0;
    param_7[0x24] = (-(fVar8 * fVar20) - -(fVar19 * fVar11)) / fVar22;
    param_7[0x25] = (-(fVar18 * fVar11) + fVar20 * fVar5) / fVar22;
    param_7[0x26] = (-(fVar5 * fVar19) - -(fVar18 * fVar8)) / fVar22;
    param_7[0x27] = 0.0;
    param_7[0x28] = (-(fVar16 * fVar11) + fVar17 * fVar8) / fVar22;
    param_7[0x29] = (-(fVar5 * fVar17) - -(fVar13 * fVar11)) / fVar22;
    param_7[0x2a] = (-(fVar13 * fVar8) + fVar16 * fVar5) / fVar22;
    param_7[0x2b] = 0.0;
  }
  if ((*(long *)(param_1 + 0x20) != 0) || (*(long *)(param_1 + 0x22) != 0)) {
    uVar7 = *(undefined8 *)(param_2 + 2);
    uVar6 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar9 = *(undefined8 *)(param_2 + 4);
    uVar12 = *(undefined8 *)(param_2 + 8);
    uVar15 = *(undefined8 *)(param_2 + 0xe);
    uVar14 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_7 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_7 + 8) = uVar12;
    *(undefined8 *)(param_7 + 0xe) = uVar15;
    *(undefined8 *)(param_7 + 0xc) = uVar14;
    *(undefined8 *)(param_7 + 2) = uVar7;
    *(undefined8 *)param_7 = uVar6;
    *(undefined8 *)(param_7 + 6) = uVar10;
    *(undefined8 *)(param_7 + 4) = uVar9;
  }
  if (*(long *)(param_1 + 0x1c) != 0) {
    pfVar2 = (float *)(param_6 + (param_5 & 0xffffffff) * 0x40);
    fVar5 = *pfVar2;
    fVar11 = pfVar2[1];
    fVar13 = pfVar2[2];
    fVar16 = pfVar2[4];
    fVar17 = pfVar2[5];
    fVar18 = pfVar2[6];
    fVar19 = pfVar2[8];
    fVar20 = pfVar2[9];
    fVar21 = pfVar2[10];
    fVar23 = -(fVar20 * fVar18) + fVar21 * fVar17;
    fVar24 = -(fVar20 * fVar13) + fVar21 * fVar11;
    fVar22 = -(fVar17 * fVar13) + fVar18 * fVar11;
    fVar8 = 1.0 / (-(fVar16 * fVar24) + fVar23 * fVar5 + fVar22 * fVar19);
    fVar23 = fVar23 * fVar8;
    fVar26 = -((-(fVar19 * fVar18) + fVar21 * fVar16) * fVar8);
    fVar28 = (-(fVar19 * fVar17) + fVar20 * fVar16) * fVar8;
    fVar24 = -(fVar24 * fVar8);
    fVar21 = (-(fVar19 * fVar13) + fVar21 * fVar5) * fVar8;
    fVar19 = -((-(fVar19 * fVar11) + fVar20 * fVar5) * fVar8);
    fVar22 = fVar22 * fVar8;
    fVar13 = -((-(fVar16 * fVar13) + fVar18 * fVar5) * fVar8);
    fVar8 = (-(fVar16 * fVar11) + fVar17 * fVar5) * fVar8;
    fVar5 = pfVar2[0xc];
    fVar11 = pfVar2[0xd];
    fVar16 = pfVar2[0xe];
    pfVar2[0x20] = fVar23;
    pfVar2[0x21] = fVar24;
    pfVar2[0x22] = fVar22;
    pfVar2[0x23] = 0.0;
    pfVar2[0x24] = fVar26;
    pfVar2[0x25] = fVar21;
    pfVar2[0x26] = fVar13;
    pfVar2[0x27] = 0.0;
    pfVar2[0x28] = fVar28;
    pfVar2[0x29] = fVar19;
    pfVar2[0x2a] = fVar8;
    pfVar2[0x2b] = 0.0;
    pfVar2[0x2c] = (-(fVar26 * fVar11) - fVar5 * fVar23) - fVar16 * fVar28;
    pfVar2[0x2d] = (-(fVar21 * fVar11) - fVar5 * fVar24) - fVar16 * fVar19;
    pfVar2[0x2e] = (-(fVar13 * fVar11) - fVar5 * fVar22) - fVar16 * fVar8;
    pfVar2[0x2f] = 1.0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    param_6 = param_6 + (param_5 & 0xffffffff) * 0x40;
    pfVar3 = (float *)(param_6 + 0x100);
    func_0x0001094f5708(&uStack_d0);
    *(undefined8 *)(param_6 + 0x188) = uStack_c8;
    *(undefined8 *)(param_6 + 0x180) = uStack_d0;
    *(undefined8 *)(param_6 + 0x198) = uStack_b8;
    *(undefined8 *)(param_6 + 400) = uStack_c0;
    *(undefined8 *)(param_6 + 0x1a8) = uStack_a8;
    *(undefined8 *)(param_6 + 0x1a0) = uStack_b0;
    *(undefined8 *)(param_6 + 0x1b8) = uStack_98;
    *(undefined8 *)(param_6 + 0x1b0) = uStack_a0;
  }
  if (*(long *)(param_1 + 0x26) != 0) {
    fVar5 = param_7[0x20];
    fVar8 = param_7[0x21];
    fVar11 = param_7[0x22];
    fVar13 = param_7[0x24];
    fVar16 = param_7[0x25];
    fVar17 = param_7[0x26];
    fVar18 = param_7[0x28];
    fVar19 = param_7[0x29];
    fVar20 = param_7[0x2a];
    fVar22 = -(fVar19 * fVar17) + fVar20 * fVar16;
    fVar21 = -(fVar19 * fVar11) + fVar20 * fVar8;
    fVar24 = -(fVar16 * fVar11) + fVar17 * fVar8;
    fVar23 = 1.0 / (-(fVar13 * fVar21) + fVar22 * fVar5 + fVar24 * fVar18);
    param_7[0x2c] = fVar22 * fVar23;
    param_7[0x2d] = -(fVar21 * fVar23);
    param_7[0x2e] = fVar24 * fVar23;
    param_7[0x2f] = 0.0;
    param_7[0x30] = -((-(fVar18 * fVar17) + fVar20 * fVar13) * fVar23);
    param_7[0x31] = (-(fVar18 * fVar11) + fVar20 * fVar5) * fVar23;
    param_7[0x32] = -((-(fVar13 * fVar11) + fVar17 * fVar5) * fVar23);
    param_7[0x33] = 0.0;
    param_7[0x34] = (-(fVar18 * fVar16) + fVar19 * fVar13) * fVar23;
    param_7[0x35] = -((-(fVar18 * fVar8) + fVar19 * fVar5) * fVar23);
    param_7[0x36] = (-(fVar13 * fVar8) + fVar16 * fVar5) * fVar23;
    param_7[0x37] = 0.0;
  }
  if (*(long *)(param_1 + 0x22) != 0) {
    fVar5 = *param_7;
    fVar11 = param_7[1];
    fVar13 = param_7[2];
    fVar16 = param_7[4];
    fVar17 = param_7[5];
    fVar18 = param_7[6];
    fVar19 = param_7[8];
    fVar20 = param_7[9];
    fVar21 = param_7[10];
    fVar23 = -(fVar20 * fVar18) + fVar21 * fVar17;
    fVar24 = -(fVar20 * fVar13) + fVar21 * fVar11;
    fVar22 = -(fVar17 * fVar13) + fVar18 * fVar11;
    fVar8 = 1.0 / (-(fVar16 * fVar24) + fVar23 * fVar5 + fVar22 * fVar19);
    fVar23 = fVar23 * fVar8;
    fVar26 = -((-(fVar19 * fVar18) + fVar21 * fVar16) * fVar8);
    fVar28 = (-(fVar19 * fVar17) + fVar20 * fVar16) * fVar8;
    fVar24 = -(fVar24 * fVar8);
    fVar21 = (-(fVar19 * fVar13) + fVar21 * fVar5) * fVar8;
    fVar19 = -((-(fVar19 * fVar11) + fVar20 * fVar5) * fVar8);
    fVar22 = fVar22 * fVar8;
    fVar13 = -((-(fVar16 * fVar13) + fVar18 * fVar5) * fVar8);
    fVar8 = (-(fVar16 * fVar11) + fVar17 * fVar5) * fVar8;
    fVar5 = param_7[0xc];
    fVar11 = param_7[0xd];
    fVar16 = param_7[0xe];
    param_7[0x10] = fVar23;
    param_7[0x11] = fVar24;
    param_7[0x12] = fVar22;
    param_7[0x13] = 0.0;
    param_7[0x14] = fVar26;
    param_7[0x15] = fVar21;
    param_7[0x16] = fVar13;
    param_7[0x17] = 0.0;
    param_7[0x18] = fVar28;
    param_7[0x19] = fVar19;
    param_7[0x1a] = fVar8;
    param_7[0x1b] = 0.0;
    param_7[0x1c] = (-(fVar26 * fVar11) - fVar5 * fVar23) - fVar16 * fVar28;
    param_7[0x1d] = (-(fVar21 * fVar11) - fVar5 * fVar24) - fVar16 * fVar19;
    param_7[0x1e] = (-(fVar13 * fVar11) - fVar5 * fVar22) - fVar16 * fVar8;
    param_7[0x1f] = 1.0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  fVar20 = pfVar3[0xe];
  fVar8 = pfVar3[0xf];
  fVar22 = pfVar3[10];
  fVar21 = pfVar3[0xb];
  fVar5 = -(fVar20 * fVar21) + fVar8 * fVar22;
  fVar26 = pfVar3[0xc];
  fVar24 = pfVar3[0xd];
  fVar29 = pfVar3[8];
  fVar27 = pfVar3[9];
  fVar13 = -(fVar24 * fVar21) + fVar8 * fVar27;
  fVar11 = -(fVar24 * fVar22) + fVar20 * fVar27;
  fVar19 = -(fVar26 * fVar21) + fVar8 * fVar29;
  fVar17 = -(fVar26 * fVar22) + fVar20 * fVar29;
  fVar18 = -(fVar26 * fVar27) + fVar24 * fVar29;
  fVar31 = pfVar3[6];
  fVar32 = pfVar3[7];
  fVar16 = -(fVar20 * fVar32) + fVar8 * fVar31;
  fVar36 = pfVar3[4];
  fVar35 = pfVar3[5];
  fVar34 = -(fVar24 * fVar32) + fVar8 * fVar35;
  fVar37 = -(fVar24 * fVar31) + fVar20 * fVar35;
  fVar38 = -(fVar26 * fVar32) + fVar8 * fVar36;
  fVar23 = -(fVar26 * fVar31) + fVar20 * fVar36;
  fVar28 = -(fVar26 * fVar35) + fVar24 * fVar36;
  fVar25 = -(fVar22 * fVar32) + fVar21 * fVar31;
  fVar39 = -(fVar27 * fVar32) + fVar21 * fVar35;
  fVar40 = -(fVar27 * fVar31) + fVar22 * fVar35;
  fVar26 = -(fVar29 * fVar32) + fVar21 * fVar36;
  fVar24 = -(fVar29 * fVar31) + fVar22 * fVar36;
  fVar29 = -(fVar29 * fVar35) + fVar27 * fVar36;
  fVar8 = -(fVar31 * fVar13) + fVar5 * fVar35 + fVar11 * fVar32;
  fVar30 = -(fVar31 * fVar19) + fVar5 * fVar36;
  fVar33 = -(fVar35 * fVar19) + fVar13 * fVar36 + fVar18 * fVar32;
  fVar35 = -(fVar35 * fVar17) + fVar11 * fVar36;
  fVar36 = pfVar3[2];
  fVar20 = pfVar3[3];
  fVar21 = *pfVar3;
  fVar22 = pfVar3[1];
  fVar27 = (-((fVar30 + fVar17 * fVar32) * fVar22) + fVar8 * fVar21 + fVar33 * fVar36) -
           (fVar35 + fVar18 * fVar31) * fVar20;
  extraout_x8[1] = CONCAT44((-(fVar31 * fVar18) - fVar35) / fVar27,fVar33 / fVar27);
  *extraout_x8 = CONCAT44((-(fVar32 * fVar17) - fVar30) / fVar27,fVar8 / fVar27);
  extraout_x8[3] =
       CONCAT44((-(fVar22 * fVar17) + fVar11 * fVar21 + fVar18 * fVar36) / fVar27,
                (-(fVar20 * fVar18) - (-(fVar22 * fVar19) + fVar13 * fVar21)) / fVar27);
  extraout_x8[2] =
       CONCAT44((-(fVar36 * fVar19) + fVar5 * fVar21 + fVar17 * fVar20) / fVar27,
                (-(fVar20 * fVar11) - (-(fVar36 * fVar13) + fVar5 * fVar22)) / fVar27);
  extraout_x8[5] =
       CONCAT44((-(fVar36 * fVar28) - (-(fVar22 * fVar23) + fVar37 * fVar21)) / fVar27,
                (-(fVar22 * fVar38) + fVar34 * fVar21 + fVar28 * fVar20) / fVar27);
  extraout_x8[4] =
       CONCAT44((-(fVar20 * fVar23) - (-(fVar36 * fVar38) + fVar16 * fVar21)) / fVar27,
                (-(fVar36 * fVar34) + fVar16 * fVar22 + fVar37 * fVar20) / fVar27);
  extraout_x8[7] =
       CONCAT44((-(fVar22 * fVar24) + fVar40 * fVar21 + fVar29 * fVar36) / fVar27,
                (-(fVar20 * fVar29) - (-(fVar22 * fVar26) + fVar39 * fVar21)) / fVar27);
  extraout_x8[6] =
       CONCAT44((-(fVar36 * fVar26) + fVar25 * fVar21 + fVar24 * fVar20) / fVar27,
                (-(fVar20 * fVar40) - (-(fVar36 * fVar39) + fVar25 * fVar22)) / fVar27);
  return;
}



/* Entry: 10a1716ec; end: 10a1718db;  */

void FUN_10a1716ec(undefined8 *param_1,float *param_2)

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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
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
  
  fVar9 = param_2[0xe];
  fVar2 = param_2[0xf];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  fVar1 = -(fVar9 * fVar12) + fVar2 * fVar11;
  fVar15 = param_2[0xc];
  fVar13 = param_2[0xd];
  fVar18 = param_2[8];
  fVar17 = param_2[9];
  fVar4 = -(fVar13 * fVar12) + fVar2 * fVar17;
  fVar3 = -(fVar13 * fVar11) + fVar9 * fVar17;
  fVar8 = -(fVar15 * fVar12) + fVar2 * fVar18;
  fVar6 = -(fVar15 * fVar11) + fVar9 * fVar18;
  fVar7 = -(fVar15 * fVar17) + fVar13 * fVar18;
  fVar20 = param_2[6];
  fVar21 = param_2[7];
  fVar5 = -(fVar9 * fVar21) + fVar2 * fVar20;
  fVar25 = param_2[4];
  fVar24 = param_2[5];
  fVar23 = -(fVar13 * fVar21) + fVar2 * fVar24;
  fVar26 = -(fVar13 * fVar20) + fVar9 * fVar24;
  fVar27 = -(fVar15 * fVar21) + fVar2 * fVar25;
  fVar10 = -(fVar15 * fVar20) + fVar9 * fVar25;
  fVar14 = -(fVar15 * fVar24) + fVar13 * fVar25;
  fVar16 = -(fVar11 * fVar21) + fVar12 * fVar20;
  fVar28 = -(fVar17 * fVar21) + fVar12 * fVar24;
  fVar29 = -(fVar17 * fVar20) + fVar11 * fVar24;
  fVar15 = -(fVar18 * fVar21) + fVar12 * fVar25;
  fVar13 = -(fVar18 * fVar20) + fVar11 * fVar25;
  fVar18 = -(fVar18 * fVar24) + fVar17 * fVar25;
  fVar2 = -(fVar20 * fVar4) + fVar1 * fVar24 + fVar3 * fVar21;
  fVar19 = -(fVar20 * fVar8) + fVar1 * fVar25;
  fVar22 = -(fVar24 * fVar8) + fVar4 * fVar25 + fVar7 * fVar21;
  fVar24 = -(fVar24 * fVar6) + fVar3 * fVar25;
  fVar25 = param_2[2];
  fVar9 = param_2[3];
  fVar12 = *param_2;
  fVar11 = param_2[1];
  fVar17 = (-((fVar19 + fVar6 * fVar21) * fVar11) + fVar2 * fVar12 + fVar22 * fVar25) -
           (fVar24 + fVar7 * fVar20) * fVar9;
  param_1[1] = CONCAT44((-(fVar20 * fVar7) - fVar24) / fVar17,fVar22 / fVar17);
  *param_1 = CONCAT44((-(fVar21 * fVar6) - fVar19) / fVar17,fVar2 / fVar17);
  param_1[3] = CONCAT44((-(fVar11 * fVar6) + fVar3 * fVar12 + fVar7 * fVar25) / fVar17,
                        (-(fVar9 * fVar7) - (-(fVar11 * fVar8) + fVar4 * fVar12)) / fVar17);
  param_1[2] = CONCAT44((-(fVar25 * fVar8) + fVar1 * fVar12 + fVar6 * fVar9) / fVar17,
                        (-(fVar9 * fVar3) - (-(fVar25 * fVar4) + fVar1 * fVar11)) / fVar17);
  param_1[5] = CONCAT44((-(fVar25 * fVar14) - (-(fVar11 * fVar10) + fVar26 * fVar12)) / fVar17,
                        (-(fVar11 * fVar27) + fVar23 * fVar12 + fVar14 * fVar9) / fVar17);
  param_1[4] = CONCAT44((-(fVar9 * fVar10) - (-(fVar25 * fVar27) + fVar5 * fVar12)) / fVar17,
                        (-(fVar25 * fVar23) + fVar5 * fVar11 + fVar26 * fVar9) / fVar17);
  param_1[7] = CONCAT44((-(fVar11 * fVar13) + fVar29 * fVar12 + fVar18 * fVar25) / fVar17,
                        (-(fVar9 * fVar18) - (-(fVar11 * fVar15) + fVar28 * fVar12)) / fVar17);
  param_1[6] = CONCAT44((-(fVar25 * fVar15) + fVar16 * fVar12 + fVar13 * fVar9) / fVar17,
                        (-(fVar9 * fVar29) - (-(fVar25 * fVar28) + fVar16 * fVar11)) / fVar17);
  return;
}



/* Entry: 10a1718dc; end: 10a171a03;  */

code * FUN_10a1718dc(int param_1,long param_2)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if (param_1 < 8) {
    if (param_1 < 6) {
      if (param_1 == 2) {
        pcVar1 = FUN_10a171a04;
      }
      else {
        if (param_1 != 3) {
LAB_10a1719c0:
          FUN_10a0ee900(auStack_38,&UNK_10f6401df,0x27);
          FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1719e8);
          (*pcVar1)();
        }
        pcVar1 = (code *)0x10a171a44;
      }
    }
    else if (param_1 == 6) {
      pcVar1 = (code *)0x10a171a24;
    }
    else {
      if (param_1 != 7) goto LAB_10a1719c0;
      pcVar1 = FUN_10a171a64;
      if (param_2 != 0x10) {
        pcVar1 = FUN_10a171aa4;
      }
    }
  }
  else if (param_1 < 10) {
    if (param_1 == 8) {
      pcVar1 = (code *)0x10a171ac4;
    }
    else {
      if (param_1 != 9) goto LAB_10a1719c0;
      pcVar1 = (code *)0x10a171ae4;
    }
  }
  else if (param_1 == 10) {
    pcVar1 = (code *)0x10a171b24;
  }
  else {
    if (param_1 != 0xb) goto LAB_10a1719c0;
    pcVar1 = (code *)0x10a171b04;
  }
  return pcVar1;
}



/* Entry: 10a171a04; end: 10a171a63;  */

void FUN_10a171a04(long param_1,undefined4 *param_2,long param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  lVar4 = 1;
  uVar5 = (*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) * 0x4fbcda3ac10c9715;
  if (uVar5 < (ulong)(long)param_4 || uVar5 - (long)param_4 == 0) {
LAB_10a1962f8:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1962fc);
    (*pcVar3)();
  }
  if ((*(int *)(param_1 + 0x34) != 0) && (*(uint *)(param_1 + 0x14) < 0xc)) {
    lVar6 = *(long *)(param_3 + 0x10) + (long)param_4 * 0x1e8 +
            (ulong)*(uint *)(param_1 + 0x14) * 0x28;
    uVar2 = *(uint *)(lVar6 + 0x1c);
    if (uVar2 != 0) {
      uVar1 = *(uint *)(param_1 + 0x2c);
      if ((ulong)*(uint *)(param_1 + 0x28) + (ulong)uVar1 <= (ulong)uVar2) {
        if (1 < *(uint *)(param_3 + 0x70)) goto LAB_10a1962f8;
        puVar7 = (undefined4 *)
                 (*(long *)(param_3 + (ulong)*(uint *)(param_3 + 0x70) * 0x20 + 0x30) +
                  (ulong)*(uint *)(param_1 + 0x28) + (ulong)*(uint *)(lVar6 + 0x20));
        do {
          *puVar7 = *param_2;
          puVar7 = (undefined4 *)((long)puVar7 + (ulong)uVar1);
          lVar4 = lVar4 + -1;
          param_2 = param_2 + 1;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}



/* Entry: 10a171a64; end: 10a171aa3;  */

void FUN_10a171a64(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  func_0x00010a196444(param_3,param_4,param_1,&uStack_18,1);
  return;
}



/* Entry: 10a171aa4; end: 10a171b43;  */

void FUN_10a171aa4(long param_1,undefined8 *param_2,long param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar4 = 1;
  uVar5 = (*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) * 0x4fbcda3ac10c9715;
  if (uVar5 < (ulong)(long)param_4 || uVar5 - (long)param_4 == 0) {
LAB_10a1964e4:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1964e8);
    (*pcVar3)();
  }
  if ((*(int *)(param_1 + 0x34) != 0) && (*(uint *)(param_1 + 0x14) < 0xc)) {
    lVar6 = *(long *)(param_3 + 0x10) + (long)param_4 * 0x1e8 +
            (ulong)*(uint *)(param_1 + 0x14) * 0x28;
    uVar2 = *(uint *)(lVar6 + 0x1c);
    if (uVar2 != 0) {
      uVar1 = *(uint *)(param_1 + 0x2c);
      if ((ulong)*(uint *)(param_1 + 0x28) + (ulong)uVar1 <= (ulong)uVar2) {
        if (1 < *(uint *)(param_3 + 0x70)) goto LAB_10a1964e4;
        puVar7 = (undefined8 *)
                 (*(long *)(param_3 + (ulong)*(uint *)(param_3 + 0x70) * 0x20 + 0x30) +
                  (ulong)*(uint *)(param_1 + 0x28) + (ulong)*(uint *)(lVar6 + 0x20));
        do {
          *puVar7 = *param_2;
          puVar7 = (undefined8 *)((long)puVar7 + (ulong)uVar1);
          lVar4 = lVar4 + -1;
          param_2 = param_2 + 1;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}



/* Entry: 10a171b44; end: 10a171bcf;  */

undefined * FUN_10a171b44(int param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auStack_38 [24];
  
  uVar1 = param_1 - 2;
  if ((uVar1 < 10) && ((0x3f3U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    return (&PTR_FUN_110bab330)[(ulong)uVar1 & 0xffff];
  }
  FUN_10a0ee900(auStack_38,&UNK_10f640207,0x26);
  FUN_10a0029c0(auStack_38);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a171bb4);
  (*pcVar2)();
}



/* Entry: 10a171bd0; end: 10a171d4f;  */

void FUN_10a171bd0(long param_1,undefined4 *param_2,long param_3,int param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  if (uVar2 == 0xffffffff) {
    uVar2 = 1;
  }
  uVar4 = (ulong)uVar2;
  if (param_5 <= uVar2) {
    uVar4 = param_5;
  }
  uVar5 = (*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3) * 0x4fbcda3ac10c9715;
  if ((ulong)(long)param_4 <= uVar5 && uVar5 - (long)param_4 != 0) {
    if ((*(int *)(param_1 + 0x34) != 0) && (*(uint *)(param_1 + 0x14) < 0xc)) {
      lVar6 = *(long *)(param_3 + 0x10) + (long)param_4 * 0x1e8 +
              (ulong)*(uint *)(param_1 + 0x14) * 0x28;
      uVar2 = *(uint *)(lVar6 + 0x1c);
      if (uVar2 != 0) {
        uVar1 = *(uint *)(param_1 + 0x2c);
        if ((ulong)*(uint *)(param_1 + 0x28) + uVar4 * uVar1 <= (ulong)uVar2) {
          if (1 < *(uint *)(param_3 + 0x70)) goto LAB_10a1962f8;
          if (uVar4 != 0) {
            puVar7 = (undefined4 *)
                     (*(long *)(param_3 + (ulong)*(uint *)(param_3 + 0x70) * 0x20 + 0x30) +
                      (ulong)*(uint *)(param_1 + 0x28) + (ulong)*(uint *)(lVar6 + 0x20));
            do {
              *puVar7 = *param_2;
              puVar7 = (undefined4 *)((long)puVar7 + (ulong)uVar1);
              uVar4 = uVar4 - 1;
              param_2 = param_2 + 1;
            } while (uVar4 != 0);
          }
        }
      }
    }
    return;
  }
LAB_10a1962f8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1962fc);
  (*pcVar3)();
}



/* Entry: 10a171d50; end: 10a1724a3;  */

/* WARNING: Removing unreachable block (ram,0x00010a171e98) */

void FUN_10a171d50(long param_1,ulong *param_2,ulong *param_3,undefined1 *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  if (param_2 != param_3) {
    plVar1 = (long *)(param_4 + 0x58);
    do {
      uStack_e8 = param_2[1];
      uStack_f0 = *param_2;
      uStack_d8 = param_2[3];
      uStack_e0 = param_2[2];
      uStack_c8 = param_2[5];
      uStack_d0 = param_2[4];
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c0 = 0;
      FUN_10a1872f8(&uStack_c0,param_2[6],param_2[7],
                    ((long)(param_2[7] - param_2[6]) >> 4) * -0x5555555555555555);
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      FUN_10a18758c(&uStack_a8,param_2[9],param_2[10],
                    ((long)(param_2[10] - param_2[9]) >> 5) * -0x5555555555555555);
      if ((int)uStack_d8 == 3) {
        uVar12 = *(ulong *)(param_4 + 0x60);
        if (uVar12 < *(ulong *)(param_4 + 0x68)) {
          FUN_10a172578(uVar12,param_4,&uStack_f0,param_1);
          puVar23 = (undefined8 *)(uVar12 + 0x30);
          *(undefined8 **)(param_4 + 0x60) = puVar23;
        }
        else {
          lVar18 = uVar12 - *plVar1;
          uVar12 = (lVar18 >> 4) * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar12) {
            FUN_10a187248();
            goto LAB_10a172440;
          }
          lVar9 = (long)(*(ulong *)(param_4 + 0x68) - *plVar1) >> 4;
          uVar16 = lVar9 * 0x5555555555555556;
          if (uVar16 < uVar12 || uVar16 - uVar12 == 0) {
            uVar16 = uVar12;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
            uVar16 = 0x555555555555555;
          }
          plStack_70 = plVar1;
          if (uVar16 == 0) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            if (0x555555555555555 < uVar16) goto LAB_10a17241c;
            puVar7 = (undefined8 *)(uVar16 * 0x30);
            __Znwm();
          }
          lVar18 = (long)puVar7 + lVar18;
          puStack_90 = puVar7;
          puStack_88 = (undefined8 *)lVar18;
          puStack_80 = (undefined8 *)lVar18;
          puStack_78 = puVar7 + uVar16 * 6;
          FUN_10a172578(lVar18,param_4,&uStack_f0,param_1);
          puStack_80 = (undefined8 *)(lVar18 + 0x30);
          puVar19 = *(undefined8 **)(param_4 + 0x58);
          puVar4 = *(undefined8 **)(param_4 + 0x60);
          puVar2 = (undefined8 *)(lVar18 + ((long)puVar19 - (long)puVar4));
          puVar10 = puVar19;
          puVar14 = puVar2;
          puVar23 = puStack_80;
          puVar7 = puVar7 + uVar16 * 6;
          if ((long)puVar19 - (long)puVar4 != 0) {
            do {
              uVar25 = *puVar10;
              puVar14[1] = puVar10[1];
              *puVar14 = uVar25;
              puVar14[3] = 0;
              puVar14[4] = 0;
              puVar14[2] = 0;
              uVar25 = puVar10[2];
              puVar14[3] = puVar10[3];
              puVar14[2] = uVar25;
              puVar14[4] = puVar10[4];
              puVar10[2] = 0;
              puVar10[3] = 0;
              puVar10[4] = 0;
              puVar14[5] = puVar10[5];
              puVar10 = puVar10 + 6;
              puVar14 = puVar14 + 6;
            } while (puVar10 != puVar4);
            do {
              if (puVar19[2] != 0) {
                puVar19[3] = puVar19[2];
                __ZdlPv();
              }
              puVar19 = puVar19 + 6;
            } while (puVar19 != puVar4);
            puVar19 = (undefined8 *)*plVar1;
            puVar23 = puStack_80;
            puVar7 = puStack_78;
          }
          *(undefined8 **)(param_4 + 0x58) = puVar2;
          *(undefined8 **)(param_4 + 0x60) = puVar23;
          puStack_78 = *(undefined8 **)(param_4 + 0x68);
          *(undefined8 **)(param_4 + 0x68) = puVar7;
          puStack_90 = puVar19;
          puStack_88 = puVar19;
          puStack_80 = puVar19;
          FUN_10a18725c(&puStack_90);
        }
        *(undefined8 **)(param_4 + 0x60) = puVar23;
      }
      else {
        lVar18 = *(long *)(param_1 + 0x18);
        if (uStack_f0._4_4_ == 0xd8) {
          if (0xd7 < (uint)uStack_f0) goto LAB_10a172440;
          func_0x000107c2b074(&puStack_90,&PTR_DAT_110c50c00 + (uStack_f0 & 0xffffffff) * 5);
          FUN_10a1605fc(lVar18);
          lVar9 = lVar18 + 0x58;
          FUN_10a194fac(lVar9,&puStack_90);
          lVar18 = 0;
          if (lVar9 != 0) {
            lVar18 = lVar9 + 0x30;
          }
        }
        else {
          FUN_10a16f000(lVar18,uStack_f0 & 0xffffffff);
        }
        if (lVar18 != 0) {
          if (*(int *)(param_4 + 4) == -1) {
            *(undefined8 *)(param_4 + 4) = *(undefined8 *)(lVar18 + 0x1c);
          }
          else if ((*(int *)(param_4 + 8) != *(int *)(lVar18 + 0x20)) ||
                  (*(int *)(param_4 + 4) != *(int *)(lVar18 + 0x1c))) {
            *param_4 = 0;
          }
          uVar12 = (ulong)*(uint *)(lVar18 + 0x28);
          uVar16 = (ulong)*(uint *)(lVar18 + 0x2c);
          uVar5 = *(uint *)(lVar18 + 0xc);
          if (uVar5 == 0xffffffff) {
            uVar5 = 1;
          }
          uVar13 = (ulong)uVar5;
          uVar21 = (ulong)*(uint *)(lVar18 + 0x30);
          if ((int)uStack_d8 == 2) {
            lVar9 = (long)*(short *)(lVar18 + 8);
            FUN_10a171b44();
            plVar20 = *(long **)(param_4 + 0x48);
            if (plVar20 < *(long **)(param_4 + 0x50)) {
              *plVar20 = lVar18;
              plVar20[1] = uStack_e8;
              plVar20[2] = uStack_e0;
              plVar20[3] = lVar9;
              plVar20[4] = uVar16;
              plVar20[5] = uVar12;
              plVar20[6] = uVar13;
              plVar20[7] = uVar21;
              plVar20 = plVar20 + 8;
            }
            else {
              lVar24 = *(long *)(param_4 + 0x40);
              lVar22 = (long)plVar20 - lVar24 >> 6;
              uVar11 = lVar22 + 1;
              if (uVar11 >> 0x3a != 0) {
                func_0x00010a1872e4();
                goto LAB_10a172440;
              }
              uVar15 = (long)*(long **)(param_4 + 0x50) - lVar24;
              uVar17 = (long)uVar15 >> 5;
              if (uVar17 <= uVar11) {
                uVar17 = uVar11;
              }
              if (0x7fffffffffffffbf < uVar15) {
                uVar17 = 0x3ffffffffffffff;
              }
              if (uVar17 >> 0x3a != 0) {
LAB_10a17241c:
                func_0x000109ffded8();
LAB_10a172440:
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10a172444);
                (*pcVar6)();
              }
              lVar8 = uVar17 << 6;
              __Znwm();
              plVar3 = (long *)(lVar8 + ((long)plVar20 - lVar24));
              *plVar3 = lVar18;
              plVar3[2] = uStack_e0;
              plVar3[1] = uStack_e8;
              plVar3[3] = lVar9;
              plVar3[4] = uVar16;
              plVar3[5] = uVar12;
              plVar3[6] = uVar13;
              plVar3[7] = uVar21;
              plVar20 = plVar3 + 8;
              _memcpy(plVar3 + lVar22 * -8,lVar24);
              *(long **)(param_4 + 0x40) = plVar3 + lVar22 * -8;
              *(long **)(param_4 + 0x48) = plVar20;
              *(ulong *)(param_4 + 0x50) = lVar8 + uVar17 * 0x40;
              if (lVar24 != 0) {
                __ZdlPv(lVar24);
              }
            }
            *(long **)(param_4 + 0x48) = plVar20;
          }
          else if ((int)uStack_d8 == 1) {
            lVar9 = (long)*(short *)(lVar18 + 8);
            FUN_10a171b44();
            plVar20 = *(long **)(param_4 + 0x30);
            if (plVar20 < *(long **)(param_4 + 0x38)) {
              *plVar20 = lVar18;
              plVar20[1] = uStack_e8;
              plVar20[2] = uStack_e0;
              plVar20[3] = lVar9;
              plVar20[4] = uVar16;
              plVar20[5] = uVar12;
              plVar20[6] = uVar13;
              plVar20[7] = uVar21;
              plVar20[8] = uStack_d0;
              plVar20 = plVar20 + 9;
            }
            else {
              lVar22 = *(long *)(param_4 + 0x28);
              uVar11 = ((long)plVar20 - lVar22 >> 3) * -0x71c71c71c71c71c7 + 1;
              if (0x38e38e38e38e38e < uVar11) {
                func_0x00010a1872d0();
                goto LAB_10a172440;
              }
              lVar24 = (long)*(long **)(param_4 + 0x38) - lVar22 >> 3;
              uVar17 = lVar24 * 0x1c71c71c71c71c72;
              if (uVar17 < uVar11 || uVar17 - uVar11 == 0) {
                uVar17 = uVar11;
              }
              if (0x1c71c71c71c71c6 < (ulong)(lVar24 * -0x71c71c71c71c71c7)) {
                uVar17 = 0x38e38e38e38e38e;
              }
              if (0x38e38e38e38e38e < uVar17) goto LAB_10a17241c;
              lVar24 = uVar17 * 0x48;
              __Znwm();
              plVar20 = (long *)(lVar24 + ((long)plVar20 - lVar22));
              *plVar20 = lVar18;
              plVar20[2] = uStack_e0;
              plVar20[1] = uStack_e8;
              plVar20[3] = lVar9;
              plVar20[4] = uVar16;
              plVar20[5] = uVar12;
              plVar20[6] = uVar13;
              plVar20[7] = uVar21;
              plVar20[8] = uStack_d0;
              plVar20 = plVar20 + 9;
              _memcpy();
              *(long *)(param_4 + 0x28) = lVar24;
              *(long **)(param_4 + 0x30) = plVar20;
              *(ulong *)(param_4 + 0x38) = lVar24 + uVar17 * 0x48;
              if (lVar22 != 0) {
                __ZdlPv(lVar22);
              }
            }
            *(long **)(param_4 + 0x30) = plVar20;
          }
          else if ((int)uStack_d8 == 0) {
            lVar9 = (long)*(short *)(lVar18 + 8);
            FUN_10a1718dc(lVar9,uStack_e0);
            plVar20 = *(long **)(param_4 + 0x18);
            if (plVar20 < *(long **)(param_4 + 0x20)) {
              *plVar20 = lVar18;
              plVar20[1] = uStack_e8;
              plVar20[2] = uStack_e0;
              plVar20[3] = lVar9;
              plVar20[4] = uVar16;
              plVar20[5] = uVar12;
              plVar20[6] = uVar13;
              plVar20[7] = uVar21;
              plVar20 = plVar20 + 8;
            }
            else {
              lVar24 = *(long *)(param_4 + 0x10);
              lVar22 = (long)plVar20 - lVar24;
              uVar11 = (lVar22 >> 6) + 1;
              if (uVar11 >> 0x3a != 0) {
                FUN_10a1872bc();
                goto LAB_10a172440;
              }
              uVar15 = (long)*(long **)(param_4 + 0x20) - lVar24;
              uVar17 = (long)uVar15 >> 5;
              if (uVar17 <= uVar11) {
                uVar17 = uVar11;
              }
              if (0x7fffffffffffffbf < uVar15) {
                uVar17 = 0x3ffffffffffffff;
              }
              if (uVar17 >> 0x3a != 0) goto LAB_10a17241c;
              lVar8 = uVar17 << 6;
              __Znwm();
              plVar3 = (long *)(lVar8 + lVar22);
              *plVar3 = lVar18;
              plVar3[2] = uStack_e0;
              plVar3[1] = uStack_e8;
              plVar3[3] = lVar9;
              plVar3[4] = uVar16;
              plVar3[5] = uVar12;
              plVar3[6] = uVar13;
              plVar3[7] = uVar21;
              plVar20 = plVar3 + 8;
              _memcpy(plVar3 + (lVar22 >> 6) * -8,lVar24,lVar22);
              *(long **)(param_4 + 0x10) = plVar3 + (lVar22 >> 6) * -8;
              *(long **)(param_4 + 0x18) = plVar20;
              *(ulong *)(param_4 + 0x20) = lVar8 + uVar17 * 0x40;
              if (lVar24 != 0) {
                __ZdlPv(lVar24);
              }
            }
            *(long **)(param_4 + 0x18) = plVar20;
          }
        }
      }
      puStack_90 = &uStack_a8;
      FUN_10a187808(&puStack_90);
      puStack_90 = &uStack_c0;
      func_0x00010a187500(&puStack_90);
      param_2 = param_2 + 0xc;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 10a1724a4; end: 10a1724eb;  */

long FUN_10a1724a4(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x48;
  FUN_10a187808(&lStack_28);
  lStack_28 = param_1 + 0x30;
  func_0x00010a187500(&lStack_28);
  return param_1;
}



/* Entry: 10a1724ec; end: 10a172577;  */

void FUN_10a1724ec(ulong *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ulong *)(param_2 + param_1[1]);
  uVar3 = *param_1;
  if (uVar2 <= *param_1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    uVar3 = 0;
    do {
      puVar1 = (undefined8 *)param_1[3];
      for (puVar4 = (undefined8 *)param_1[2]; puVar4 != puVar1; puVar4 = puVar4 + 8) {
        (*(code *)puVar4[3])(*puVar4,param_2 + puVar4[1],param_3,param_4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



/* Entry: 10a172578; end: 10a172aaf;  */

/* WARNING: Removing unreachable block (ram,0x00010a17274c) */
/* WARNING: Removing unreachable block (ram,0x00010a172954) */
/* WARNING: Removing unreachable block (ram,0x00010a17275c) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_10a172578(long *param_1,undefined1 *param_2,uint *param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *******pppppppuVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lStack_158;
  undefined8 *******pppppppuStack_150;
  ulong uStack_148;
  byte bStack_139;
  undefined8 *******pppppppuStack_138;
  ulong uStack_130;
  byte bStack_121;
  undefined8 uStack_120;
  undefined8 uStack_118;
  byte bStack_109;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lStack_158 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = *(long *)(param_3 + 10);
  param_1[5] = (long)FUN_10a1724ec;
  do {
    puVar17 = *(undefined8 **)(param_3 + 0xc);
    puVar5 = *(undefined8 **)(param_3 + 0xe);
    if (puVar17 == puVar5) {
      return param_1;
    }
    iVar16 = 0;
    do {
      if (0xd7 < *param_3) goto LAB_10a1729a8;
      func_0x000107c2b074(&uStack_120,&PTR_DAT_110c50c00 + (ulong)*param_3 * 5);
      if ((char)bStack_109 < '\0') {
        func_0x000107c3192c(&uStack_100,uStack_120,uStack_118);
      }
      else {
        uStack_f8 = uStack_118;
        uStack_100 = uStack_120;
        lStack_f0 = (ulong)bStack_109 << 0x38;
      }
      puVar12 = &uStack_100;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar12,&DAT_10f62a9e8,1);
      uStack_d8 = puVar12[1];
      uStack_e0 = *puVar12;
      lStack_d0 = puVar12[2];
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
      __ZNSt3__19to_stringEi(&pppppppuStack_138,lStack_158);
      uVar1 = uStack_130;
      pppppppuVar8 = pppppppuStack_138;
      if (-1 < (char)bStack_121) {
        uVar1 = (ulong)bStack_121;
        pppppppuVar8 = &pppppppuStack_138;
      }
      puVar12 = &uStack_e0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar12,pppppppuVar8,uVar1);
      uStack_b8 = puVar12[1];
      uStack_c0 = *puVar12;
      uStack_b0 = puVar12[2];
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
      puVar12 = &uStack_c0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar12,&UNK_10f63ff44,2);
      uStack_98 = puVar12[1];
      uStack_a0 = *puVar12;
      uStack_90 = puVar12[2];
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
      puVar12 = puVar17;
      if (*(char *)((long)puVar17 + 0x17) < '\0') {
        puVar12 = (undefined8 *)*puVar17;
      }
      func_0x000107c2b054(&pppppppuStack_150,puVar12);
      uVar1 = uStack_148;
      pppppppuVar8 = pppppppuStack_150;
      if (-1 < (char)bStack_139) {
        uVar1 = (ulong)bStack_139;
        pppppppuVar8 = &pppppppuStack_150;
      }
      puVar12 = &uStack_a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar12,pppppppuVar8,uVar1);
      uStack_78 = puVar12[1];
      uStack_80 = *puVar12;
      uStack_70 = puVar12[2];
      puVar12[1] = 0;
      puVar12[2] = 0;
      *puVar12 = 0;
      if ((char)bStack_139 < '\0') {
        __ZdlPv(pppppppuStack_150);
      }
      if ((char)bStack_121 < '\0') {
        __ZdlPv(pppppppuStack_138);
      }
      if (lStack_d0 < 0) {
        __ZdlPv(uStack_e0);
      }
      if (lStack_f0 < 0) {
        __ZdlPv(uStack_100);
      }
      if ((char)bStack_109 < '\0') {
        __ZdlPv(uStack_120);
      }
      FUN_10a0d09b4(&uStack_120,&uStack_80);
      lVar19 = *(long *)(param_4 + 0x18);
      FUN_10a1605fc(lVar19);
      lVar19 = lVar19 + 0x58;
      FUN_10a194fac(lVar19,&uStack_120);
      if ((char)bStack_109 < '\0') {
        __ZdlPv(uStack_120);
      }
      if (lVar19 != 0) {
        *param_1 = lStack_158 + 1;
        if (*(int *)(param_2 + 4) == -1) {
          *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar19 + 0x4c);
        }
        else if ((*(int *)(param_2 + 8) != *(int *)(lVar19 + 0x50)) ||
                (*(int *)(param_2 + 4) != *(int *)(lVar19 + 0x4c))) {
          *param_2 = 0;
        }
        uVar3 = *(uint *)(lVar19 + 0x58);
        uVar4 = *(uint *)(lVar19 + 0x5c);
        uVar6 = *(uint *)(lVar19 + 0x3c);
        if (uVar6 == 0xffffffff) {
          uVar6 = 1;
        }
        uVar7 = *(uint *)(lVar19 + 0x60);
        lVar18 = *(long *)(param_3 + 2);
        lVar21 = *(long *)(param_3 + 4);
        lVar10 = (long)*(short *)(lVar19 + 0x38);
        lVar20 = puVar17[4];
        FUN_10a1718dc(lVar10,puVar17[5]);
        lVar18 = lVar18 + lVar20 + lVar21 * lStack_158;
        plVar15 = (long *)param_1[3];
        if (plVar15 < (long *)param_1[4]) {
          *plVar15 = lVar19 + 0x30;
          plVar15[1] = lVar18;
          plVar15[2] = puVar17[5];
          plVar15[3] = lVar10;
          plVar15[4] = (ulong)uVar4;
          plVar15[5] = (ulong)uVar3;
          plVar15[6] = (ulong)uVar6;
          plVar15[7] = (ulong)uVar7;
          plVar15 = plVar15 + 8;
        }
        else {
          lVar20 = param_1[2];
          lVar21 = (long)plVar15 - lVar20;
          uVar1 = (lVar21 >> 6) + 1;
          if (uVar1 >> 0x3a != 0) {
            FUN_10a1878b8();
LAB_10a1729a8:
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10a1729ac);
            (*pcVar9)();
          }
          uVar13 = param_1[4] - lVar20;
          uVar14 = (long)uVar13 >> 5;
          if (uVar14 <= uVar1) {
            uVar14 = uVar1;
          }
          if (0x7fffffffffffffbf < uVar13) {
            uVar14 = 0x3ffffffffffffff;
          }
          if (uVar14 >> 0x3a != 0) {
            func_0x000109ffded8();
            goto LAB_10a1729a8;
          }
          lVar11 = uVar14 << 6;
          __Znwm();
          plVar2 = (long *)(lVar11 + lVar21);
          *plVar2 = lVar19 + 0x30;
          plVar2[1] = lVar18;
          plVar2[2] = puVar17[5];
          plVar2[3] = lVar10;
          plVar2[4] = (ulong)uVar4;
          plVar2[5] = (ulong)uVar3;
          plVar2[6] = (ulong)uVar6;
          plVar2[7] = (ulong)uVar7;
          plVar15 = plVar2 + 8;
          _memcpy(plVar2 + (lVar21 >> 6) * -8,lVar20,lVar21);
          param_1[2] = (long)(plVar2 + (lVar21 >> 6) * -8);
          param_1[3] = (long)plVar15;
          param_1[4] = lVar11 + uVar14 * 0x40;
          if (lVar20 != 0) {
            __ZdlPv(lVar20);
          }
        }
        iVar16 = iVar16 + 1;
        param_1[3] = (long)plVar15;
      }
      puVar17 = puVar17 + 6;
    } while (puVar17 != puVar5);
    lStack_158 = lStack_158 + 1;
    if (iVar16 == 0) {
      return param_1;
    }
  } while( true );
}



/* Entry: 10a172ab0; end: 10a1734ff;  */

void FUN_10a172ab0(long *param_1,long param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong unaff_x28;
  float fVar23;
  long lVar24;
  long lVar25;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_90;
  long *plStack_88;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if (3 < param_3) goto LAB_10a173490;
  uVar21 = (ulong)param_3;
  lVar20 = param_2 + uVar21 * 0x68;
  puVar1 = (undefined4 *)(lVar20 + 0x4f8);
  lVar17 = *(long *)(lVar20 + 0x550);
  if ((lVar17 != 0) && (puVar7 = puVar1, FUN_10a173500(puVar1,param_4), (int)puVar7 != 0)) {
    lVar20 = *(long *)(lVar20 + 0x558);
    *param_1 = lVar17;
    param_1[1] = lVar20;
    if (lVar20 == 0) {
      return;
    }
    plVar9 = (long *)(lVar20 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return;
  }
  lVar17 = param_2 + uVar21 * 0x10;
  puVar10 = (undefined8 *)(lVar17 + 0x418);
  if (*(long *)(lVar17 + 0x418) == 0) {
    plVar9 = *(long **)(param_2 + 0x18);
    lVar8 = *plVar9;
    lVar17 = plVar9[uVar21 * 2 + 0x92];
    lVar25 = plVar9[uVar21 * 2 + 0x92];
    lVar24 = plVar9[uVar21 * 2 + 0x91];
    plVar9 = (long *)0x100;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_110ba2358;
    plStack_78 = plVar9 + 3;
    *plStack_78 = 0;
    plVar9[4] = 0;
    plVar9[5] = lVar8;
    plVar9[6] = 0x32aaaba7;
    plVar9[0x10] = 0;
    plVar9[0x11] = 0;
    plVar9[0xf] = 0;
    plVar9[8] = 0;
    plVar9[7] = 0;
    plVar9[10] = 0;
    plVar9[9] = 0;
    plVar9[0xc] = 0;
    plVar9[0xb] = 0;
    *(undefined8 *)((long)plVar9 + 0x6c) = 0;
    *(undefined8 *)((long)plVar9 + 100) = 0;
    plVar9[0x13] = lVar25;
    plVar9[0x12] = lVar24;
    if (lVar17 != 0) {
      plVar18 = (long *)(lVar17 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = *plVar18 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar9[0x1d] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x1f] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x19] = 0;
    plVar9[0x18] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x15] = 0;
    plVar9[0x14] = 0;
    plVar9[0x17] = 0;
    plVar9[0x16] = 0;
    plStack_70 = plVar9;
    func_0x00010a0ec2c0(&plStack_78,plStack_78,plStack_78);
    func_0x00010a0e6614(puVar10,&plStack_78);
    plVar9 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar18 = plStack_70 + 1;
      do {
        lVar17 = *plVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
  }
  if (((*(byte *)((long)param_4 + 2) & (*(byte *)(param_4 + 1) ^ 0xff) & 1) != 0) ||
     ((*(byte *)((long)param_4 + 3) & 1) != 0)) {
    uVar2 = *param_4;
    *(undefined1 *)(lVar20 + 0x4fc) = *(undefined1 *)(param_4 + 1);
    *puVar1 = uVar2;
    if (puVar1 != param_4) {
      FUN_10a1879c4(lVar20 + 0x500,*(long *)(param_4 + 2),*(long *)(param_4 + 4),
                    (*(long *)(param_4 + 4) - *(long *)(param_4 + 2) >> 5) * -0x5555555555555555);
      FUN_10a187bbc(lVar20 + 0x518,*(long *)(param_4 + 8),*(long *)(param_4 + 10),
                    *(long *)(param_4 + 10) - *(long *)(param_4 + 8) >> 4);
      FUN_10a187d1c(lVar20 + 0x530,*(long *)(param_4 + 0xe),*(long *)(param_4 + 0x10),
                    *(long *)(param_4 + 0x10) - *(long *)(param_4 + 0xe) >> 3);
    }
    *(undefined8 *)(lVar20 + 0x548) = *(undefined8 *)(param_4 + 0x14);
    func_0x00010928ea98(&plStack_78,*puVar10);
    func_0x00010a173660(lVar20 + 0x550,&plStack_78);
    plVar9 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar18 = plStack_70 + 1;
      do {
        lVar17 = *plVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar4) {
          *plVar18 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    (**(code **)(**(long **)(lVar20 + 0x550) + 0x68))
              (*(long **)(lVar20 + 0x550),*(long *)(param_4 + 2),
               (*(long *)(param_4 + 4) - *(long *)(param_4 + 2) >> 5) * -0x5555555555555555);
    lVar17 = *(long *)(lVar20 + 0x558);
    lVar8 = *(long *)(lVar20 + 0x550);
    param_1[1] = *(long *)(lVar20 + 0x558);
    *param_1 = lVar8;
    if (lVar17 == 0) {
      return;
    }
    plVar9 = (long *)(lVar17 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return;
  }
  param_2 = param_2 + uVar21 * 0x28;
  plVar9 = (long *)(param_2 + 0x458);
  plVar18 = plVar9;
  FUN_10a19679c(plVar9,param_4);
  if (plVar18 != (long *)0x0) {
    lVar17 = plVar18[0xe];
    plVar18[0xf] = plVar18[0xf] + 1;
    lVar20 = plVar18[0xd];
    param_1[1] = plVar18[0xe];
    *param_1 = lVar20;
    if (lVar17 == 0) {
      return;
    }
    plVar9 = (long *)(lVar17 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return;
  }
  func_0x00010928ea98(&plStack_90,*puVar10);
  (**(code **)(*plStack_90 + 0x68))
            (plStack_90,*(long *)(param_4 + 2),
             (*(long *)(param_4 + 4) - *(long *)(param_4 + 2) >> 5) * -0x5555555555555555);
  uVar2 = *param_4;
  *(undefined1 *)(lVar20 + 0x4fc) = *(undefined1 *)(param_4 + 1);
  *puVar1 = uVar2;
  if (puVar1 != param_4) {
    FUN_10a1879c4(lVar20 + 0x500,*(long *)(param_4 + 2),*(long *)(param_4 + 4),
                  (*(long *)(param_4 + 4) - *(long *)(param_4 + 2) >> 5) * -0x5555555555555555);
    FUN_10a187bbc(lVar20 + 0x518,*(long *)(param_4 + 8),*(long *)(param_4 + 10),
                  *(long *)(param_4 + 10) - *(long *)(param_4 + 8) >> 4);
    FUN_10a187d1c(lVar20 + 0x530,*(long *)(param_4 + 0xe),*(long *)(param_4 + 0x10),
                  *(long *)(param_4 + 0x10) - *(long *)(param_4 + 0xe) >> 3);
  }
  *(undefined8 *)(lVar20 + 0x548) = *(undefined8 *)(param_4 + 0x14);
  FUN_10a1735ec(lVar20 + 0x550,plStack_90,plStack_88);
  plStack_a8 = plStack_88;
  plStack_b0 = plStack_90;
  if (plStack_88 != (long *)0x0) {
    plVar18 = plStack_88 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = *plVar18 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_a0 = 1;
  uVar22 = *(ulong *)(param_4 + 0x14);
  uVar21 = *(ulong *)(param_2 + 0x460);
  if (uVar21 != 0) {
    uVar19 = uVar21 - 1;
    if ((uVar21 & uVar19) == 0) {
      unaff_x28 = uVar19 & uVar22;
    }
    else {
      unaff_x28 = uVar22;
      if (uVar21 <= uVar22) {
        uVar11 = 0;
        if (uVar21 != 0) {
          uVar11 = uVar22 / uVar21;
        }
        unaff_x28 = uVar22 - uVar11 * uVar21;
      }
    }
    puVar10 = *(undefined8 **)(*plVar9 + unaff_x28 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar18 = (long *)*puVar10; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
        uVar11 = plVar18[1];
        if (uVar11 == uVar22) {
          plVar13 = plVar18 + 2;
          FUN_10a173500(plVar13,param_4);
          if (((ulong)plVar13 & 1) != 0) goto LAB_10a173238;
        }
        else {
          if ((uVar21 & uVar19) == 0) {
            uVar11 = uVar11 & uVar19;
          }
          else if (uVar21 <= uVar11) {
            uVar12 = 0;
            if (uVar21 != 0) {
              uVar12 = uVar11 / uVar21;
            }
            uVar11 = uVar11 - uVar12 * uVar21;
          }
          if (uVar11 != unaff_x28) break;
        }
      }
    }
  }
  plVar18 = (long *)0x80;
  __Znwm();
  uStack_68 = 0;
  *plVar18 = 0;
  plVar18[1] = uVar22;
  *(undefined4 *)(plVar18 + 2) = *param_4;
  *(undefined1 *)((long)plVar18 + 0x14) = *(undefined1 *)(param_4 + 1);
  plVar18[3] = 0;
  plVar18[4] = 0;
  plVar18[5] = 0;
  plStack_78 = plVar18;
  plStack_70 = plVar9;
  FUN_10a19686c(plVar18 + 3,*(long *)(param_4 + 2),*(long *)(param_4 + 4),
                (*(long *)(param_4 + 4) - *(long *)(param_4 + 2) >> 5) * -0x5555555555555555);
  plVar18[6] = 0;
  plVar18[7] = 0;
  plVar18[8] = 0;
  FUN_10a1968e4(plVar18 + 6,*(long *)(param_4 + 8),*(long *)(param_4 + 10),
                *(long *)(param_4 + 10) - *(long *)(param_4 + 8) >> 4);
  plVar18[9] = 0;
  plVar18[10] = 0;
  plVar18[0xb] = 0;
  FUN_10a19695c();
  plVar18[0xc] = *(long *)(param_4 + 0x14);
  plVar18[0xd] = 0;
  plVar18[0xe] = 0;
  plVar18[0xf] = 0;
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  fVar23 = (float)(*(long *)(param_2 + 0x470) + 1);
  if ((uVar21 != 0) && (fVar23 <= *(float *)(param_2 + 0x478) * (float)uVar21)) goto LAB_10a1731c4;
  uVar19 = 1;
  if (2 < uVar21) {
    uVar19 = (ulong)((uVar21 & uVar21 - 1) != 0);
  }
  uVar19 = uVar19 | uVar21 << 1;
  uVar21 = (ulong)(fVar23 / *(float *)(param_2 + 0x478));
  if (uVar19 <= uVar21) {
    uVar19 = uVar21;
  }
  if (uVar19 - 1 == 0) {
    uVar19 = 2;
  }
  else if ((uVar19 & uVar19 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar21 = *(ulong *)(param_2 + 0x460);
  if (uVar21 < uVar19) {
LAB_10a17304c:
    if (uVar19 >> 0x3d != 0) {
      func_0x000109ffded8();
LAB_10a173490:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a173494);
      (*pcVar6)();
    }
    lVar17 = uVar19 << 3;
    __Znwm();
    lVar8 = *plVar9;
    *plVar9 = lVar17;
    if (lVar8 != 0) {
      __ZdlPv();
    }
    uVar21 = 0;
    *(ulong *)(param_2 + 0x460) = uVar19;
    do {
      *(undefined8 *)(*plVar9 + uVar21 * 8) = 0;
      uVar21 = uVar21 + 1;
    } while (uVar19 != uVar21);
    plVar13 = *(long **)(param_2 + 0x468);
    uVar21 = uVar19;
    if (plVar13 != (long *)0x0) {
      uVar11 = plVar13[1];
      uVar12 = uVar19 - 1;
      if ((uVar19 & uVar12) == 0) {
        uVar11 = uVar11 & uVar12;
      }
      else if (uVar19 <= uVar11) {
        uVar16 = 0;
        if (uVar19 != 0) {
          uVar16 = uVar11 / uVar19;
        }
        uVar11 = uVar11 - uVar16 * uVar19;
      }
      *(undefined8 **)(*plVar9 + uVar11 * 8) = (undefined8 *)(param_2 + 0x468);
      plVar14 = (long *)*plVar13;
      while (plVar14 != (long *)0x0) {
        uVar16 = plVar14[1];
        if ((uVar19 & uVar12) == 0) {
          uVar16 = uVar16 & uVar12;
        }
        else if (uVar19 <= uVar16) {
          uVar5 = 0;
          if (uVar19 != 0) {
            uVar5 = uVar16 / uVar19;
          }
          uVar16 = uVar16 - uVar5 * uVar19;
        }
        plVar15 = plVar14;
        if (uVar16 != uVar11) {
          lVar17 = *plVar9;
          if (*(long *)(lVar17 + uVar16 * 8) == 0) {
            *(long **)(lVar17 + uVar16 * 8) = plVar13;
            uVar11 = uVar16;
          }
          else {
            *plVar13 = *plVar14;
            *plVar14 = **(undefined8 **)(lVar17 + uVar16 * 8);
            **(long **)(lVar17 + uVar16 * 8) = (long)plVar14;
            plVar15 = plVar13;
          }
        }
        plVar13 = plVar15;
        plVar14 = (long *)*plVar15;
      }
    }
  }
  else if (uVar19 < uVar21) {
    uVar11 = (ulong)((float)*(ulong *)(param_2 + 0x470) / *(float *)(param_2 + 0x478));
    if ((uVar21 < 3) || ((uVar21 & uVar21 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar11) {
      uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
    }
    if (uVar19 <= uVar11) {
      uVar19 = uVar11;
    }
    if (uVar19 < uVar21) {
      if (uVar19 != 0) goto LAB_10a17304c;
      lVar17 = *plVar9;
      *plVar9 = 0;
      if (lVar17 != 0) {
        __ZdlPv();
      }
      *(undefined8 *)(param_2 + 0x460) = 0;
      uVar21 = 0;
    }
    else {
      uVar21 = *(ulong *)(param_2 + 0x460);
    }
  }
  if ((uVar21 & uVar21 - 1) == 0) {
    unaff_x28 = uVar21 - 1 & uVar22;
  }
  else {
    unaff_x28 = uVar22;
    if (uVar21 <= uVar22) {
      uVar19 = 0;
      if (uVar21 != 0) {
        uVar19 = uVar22 / uVar21;
      }
      unaff_x28 = uVar22 - uVar19 * uVar21;
    }
  }
LAB_10a1731c4:
  lVar17 = *plVar9;
  plVar13 = *(long **)(lVar17 + unaff_x28 * 8);
  if (plVar13 == (long *)0x0) {
    plVar13 = (long *)(param_2 + 0x468);
    *plVar18 = *plVar13;
    *plVar13 = (long)plVar18;
    *(long **)(lVar17 + unaff_x28 * 8) = plVar13;
    if (*plVar18 != 0) {
      uVar22 = *(ulong *)(*plVar18 + 8);
      if ((uVar21 & uVar21 - 1) == 0) {
        uVar22 = uVar22 & uVar21 - 1;
      }
      else if (uVar21 <= uVar22) {
        uVar19 = 0;
        if (uVar21 != 0) {
          uVar19 = uVar22 / uVar21;
        }
        uVar22 = uVar22 - uVar19 * uVar21;
      }
      *(long **)(*plVar9 + uVar22 * 8) = plVar18;
    }
  }
  else {
    *plVar18 = *plVar13;
    *plVar13 = (long)plVar18;
  }
  *(long *)(param_2 + 0x470) = *(long *)(param_2 + 0x470) + 1;
LAB_10a173238:
  func_0x00010a173660(plVar18 + 0xd,&plStack_b0);
  plVar13 = plStack_a8;
  plVar18[0xf] = lStack_a0;
  if (plStack_a8 != (long *)0x0) {
    plVar18 = plStack_a8 + 1;
    do {
      lVar17 = *plVar18;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar4) {
        *plVar18 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  uVar21 = *(ulong *)(param_2 + 0x470);
  if (0x10 < uVar21) {
    plVar18 = *(long **)(param_2 + 0x468);
    if (plVar18 != (long *)0x0) {
      uVar22 = 0xffffffffffffffff;
      plVar13 = plVar18;
      do {
        uVar19 = plVar13[0xf];
        if (uVar22 <= (ulong)plVar13[0xf]) {
          uVar19 = uVar22;
        }
        plVar13 = (long *)*plVar13;
        uVar22 = uVar19;
      } while (plVar13 != (long *)0x0);
      do {
        if (uVar19 == plVar18[0xf]) {
          plVar13 = plVar9;
          FUN_10a19679c(plVar9,plVar18 + 2);
          if (plVar13 != (long *)0x0) {
            uVar19 = *(ulong *)(param_2 + 0x460);
            lVar17 = *plVar13;
            uVar22 = plVar13[1];
            uVar11 = uVar19 - 1;
            if ((uVar19 & uVar11) == 0) {
              uVar22 = uVar11 & uVar22;
            }
            else if (uVar19 <= uVar22) {
              uVar12 = 0;
              if (uVar19 != 0) {
                uVar12 = uVar22 / uVar19;
              }
              uVar22 = uVar22 - uVar12 * uVar19;
            }
            plVar18 = *(long **)(*plVar9 + uVar22 * 8);
            do {
              plVar14 = plVar18;
              plVar18 = (long *)*plVar14;
            } while ((long *)*plVar14 != plVar13);
            if (plVar14 == (long *)(param_2 + 0x468)) {
LAB_10a173394:
              if (lVar17 == 0) {
LAB_10a1733c8:
                *(undefined8 *)(*plVar9 + uVar22 * 8) = 0;
                lVar17 = *plVar13;
                goto LAB_10a1733d0;
              }
              uVar12 = *(ulong *)(lVar17 + 8);
              if ((uVar19 & uVar11) == 0) {
                uVar16 = uVar12 & uVar11;
              }
              else {
                uVar16 = uVar12;
                if (uVar19 <= uVar12) {
                  uVar16 = 0;
                  if (uVar19 != 0) {
                    uVar16 = uVar12 / uVar19;
                  }
                  uVar16 = uVar12 - uVar16 * uVar19;
                }
              }
              if (uVar16 != uVar22) goto LAB_10a1733c8;
LAB_10a1733d8:
              if ((uVar19 & uVar11) == 0) {
                uVar12 = uVar12 & uVar11;
              }
              else if (uVar19 <= uVar12) {
                uVar11 = 0;
                if (uVar19 != 0) {
                  uVar11 = uVar12 / uVar19;
                }
                uVar12 = uVar12 - uVar11 * uVar19;
              }
              if (uVar12 != uVar22) {
                *(long **)(*plVar9 + uVar12 * 8) = plVar14;
                lVar17 = *plVar13;
              }
            }
            else {
              uVar12 = plVar14[1];
              if ((uVar19 & uVar11) == 0) {
                uVar12 = uVar12 & uVar11;
              }
              else if (uVar19 <= uVar12) {
                uVar16 = 0;
                if (uVar19 != 0) {
                  uVar16 = uVar12 / uVar19;
                }
                uVar12 = uVar12 - uVar16 * uVar19;
              }
              if (uVar12 != uVar22) goto LAB_10a173394;
LAB_10a1733d0:
              if (lVar17 != 0) {
                uVar12 = *(ulong *)(lVar17 + 8);
                goto LAB_10a1733d8;
              }
            }
            *plVar14 = lVar17;
            *plVar13 = 0;
            *(ulong *)(param_2 + 0x470) = uVar21 - 1;
            FUN_10a186fd0(plVar13 + 2);
            __ZdlPv(plVar13);
          }
          break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
  lVar17 = *(long *)(lVar20 + 0x558);
  lVar8 = *(long *)(lVar20 + 0x550);
  param_1[1] = *(long *)(lVar20 + 0x558);
  *param_1 = lVar8;
  if (lVar17 != 0) {
    plVar9 = (long *)(lVar17 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (plStack_88 != (long *)0x0) {
    plVar9 = plStack_88 + 1;
    do {
      lVar17 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_88 + 0x10))(plStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_88);
    }
  }
  return;
}



/* Entry: 10a173500; end: 10a1735eb;  */

undefined8 FUN_10a173500(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  uVar9 = *(ulong *)(param_1 + 8);
  lVar6 = *(ulong *)(param_1 + 0x10) - uVar9;
  lVar10 = *(long *)(param_2 + 8);
  if (lVar6 == *(long *)(param_2 + 0x10) - lVar10) {
    lVar1 = *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0x28);
    lVar11 = lVar3 - lVar1;
    lVar2 = *(long *)(param_2 + 0x20);
    if (lVar11 == *(long *)(param_2 + 0x28) - lVar2) {
      if (*(ulong *)(param_1 + 0x10) != uVar9) {
        lVar6 = (lVar6 >> 5) * -0x5555555555555555;
        do {
          if (lVar6 == 0) goto LAB_10a1735e8;
          uVar5 = uVar9;
          FUN_10a1878cc(uVar9,lVar10);
          if ((uVar5 & 1) == 0) {
            return 0;
          }
          uVar9 = uVar9 + 0x60;
          lVar10 = lVar10 + 0x60;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (lVar3 != lVar1) {
        lVar11 = lVar11 >> 4;
        plVar7 = (long *)(lVar2 + 8);
        plVar8 = (long *)(lVar1 + 8);
        do {
          if (lVar11 == 0) {
LAB_10a1735e8:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1735ec);
            (*pcVar4)();
          }
          if (plVar8[-1] != plVar7[-1]) {
            return 0;
          }
          if (*plVar8 != *plVar7) {
            return 0;
          }
          lVar11 = lVar11 + -1;
          plVar7 = plVar7 + 2;
          plVar8 = plVar8 + 2;
        } while (lVar11 != 0);
      }
      return 1;
    }
  }
  return 0;
}



/* Entry: 10a1735ec; end: 10a1736c3;  */

undefined8 * FUN_10a1735ec(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10a1736c4; end: 10a1738b7;  */

void FUN_10a1736c4(undefined8 *param_1,long param_2,long param_3,ulong param_4,int param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  ulong auStack_40 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_5 == 0) || (*(int *)(param_2 + 0x734) != 1)) {
    FUN_10a1738b8(&lStack_68,param_2,param_4);
    FUN_10a0e65b0(param_1,&lStack_68);
    param_1[2] = uStack_58;
    if (plStack_60 != (long *)0x0) {
      plVar4 = plStack_60 + 1;
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
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_60);
      }
    }
    (**(code **)(*(long *)*param_1 + 0x30))((long *)*param_1,2,*(undefined4 *)(param_1 + 2),0);
    _memcpy();
    (**(code **)(*(long *)*param_1 + 0x38))();
  }
  else {
    plVar4 = (long *)0x20;
    lStack_68 = param_3;
    __Znwm();
    *plVar4 = (long)&PTR_FUN_110ba9ec8;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = param_3;
    auStack_40[0] = param_4 & 0xffffffff;
    auStack_40[1] = 0x600000040;
    plStack_60 = plVar4;
    func_0x00010928b768(auStack_50,param_2,auStack_40,&lStack_68);
    FUN_10a0e65b0(param_1,auStack_50);
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
    plVar4 = plStack_60;
    *(undefined4 *)(param_1 + 2) = 0;
    *(int *)((long)param_1 + 0x14) = (int)auStack_40[0];
    if (plStack_60 != (long *)0x0) {
      plVar1 = plStack_60 + 1;
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
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  return;
}



/* Entry: 10a1738b8; end: 10a173973;  */

void FUN_10a1738b8(undefined8 *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long *plStack_48;
  ulong auStack_40 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  auStack_40[1] = 0x600000040;
  auStack_40[0] = (ulong)param_3;
  (**(code **)(*param_2 + 0x70))(auStack_50,param_2,auStack_40);
  FUN_10a0e65b0(param_1,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)((long)param_1 + 0x14) = param_3;
  return;
}



/* Entry: 10a173974; end: 10a173a5f;  */

ulong FUN_10a173974(long param_1,ulong param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  uint auStack_24 [3];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_24[0] = (uint)param_2;
  ppuVar1 = &PTR_DAT_110ae4700 + (param_2 & 0xffffffff) * 4;
  if (0x56 < auStack_24[0]) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  if ((*(byte *)((long)ppuVar1 + 0x14) >> 1 & 1) == 0) {
    lVar3 = 0;
    auStack_24[1] = 0x2d;
    auStack_24[2] = 0x2c;
    do {
      uVar2 = (ulong)*(uint *)((long)auStack_24 + lVar3);
      if ((*(uint *)((long)auStack_24 + lVar3) < 0x57) &&
         ((*(byte *)(param_1 + 0x164 + uVar2 * 0x10) >> 4 & 1) != 0)) goto LAB_10a173a38;
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0xc);
  }
  else {
    lVar3 = 0;
    auStack_24[1] = 0x2f;
    auStack_24[2] = 0x2e;
    do {
      uVar2 = (ulong)*(uint *)((long)auStack_24 + lVar3);
      if ((*(uint *)((long)auStack_24 + lVar3) < 0x57) &&
         ((*(byte *)(param_1 + 0x164 + uVar2 * 0x10) >> 4 & 1) != 0)) goto LAB_10a173a38;
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0xc);
  }
  uVar2 = 0;
LAB_10a173a38:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    if ((param_2 == 0) && (param_2 = uVar2, FUN_10a173ab0(), param_2 == 0)) {
      uVar2 = 0;
    }
    else {
      FUN_10a173b18(param_2,uVar2);
      uVar2 = (ulong)((param_2 & 0x14) != 0);
    }
    return uVar2;
  }
  return uVar2;
}



/* Entry: 10a173a60; end: 10a173aaf;  */

bool FUN_10a173a60(ulong param_1,ulong param_2)

{
  bool bVar1;
  
  if ((param_2 == 0) && (param_2 = param_1, FUN_10a173ab0(), param_2 == 0)) {
    bVar1 = false;
  }
  else {
    FUN_10a173b18(param_2,param_1);
    bVar1 = (param_2 & 0x14) != 0;
  }
  return bVar1;
}



/* Entry: 10a173ab0; end: 10a173b17;  */

void FUN_10a173ab0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = 0;
  FUN_10a2421c8();
  plVar2 = *(long **)(lVar1 + 0x228);
  (**(code **)(*plVar2 + 0x50))();
  if (plVar2 == (long *)0x0) {
    (*(code *)PTR___tlv_bootstrap_11340de10)();
  }
  return;
}



/* Entry: 10a173b18; end: 10a173ba3;  */

uint FUN_10a173b18(long param_1,ulong param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar7 = param_2 & 0xffffffff;
  uVar6 = (uint)param_2;
  ppuVar1 = &PTR_DAT_110ae4700 + uVar7 * 4;
  if (0x56 < uVar6) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  uVar2 = *(uint *)((long)ppuVar1 + 0x14);
  if ((uVar2 & 1) != 0) {
    uVar5 = param_1 + 0x30;
    FUN_10a173974(uVar5,param_2);
    if ((int)uVar5 != 0) {
      uVar7 = uVar5 & 0xffffffff;
      goto LAB_10a173b70;
    }
  }
  if (0x56 < uVar6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10a173ba4);
    (*pcVar4)();
  }
LAB_10a173b70:
  uVar3 = *(uint *)(param_1 + uVar7 * 0x10 + 0x194);
  if ((uVar2 & 3) != 0) {
    uVar3 = uVar3 & 0xfffffffc;
  }
  uVar2 = uVar3 | 4;
  if (uVar6 != 0x26) {
    uVar2 = uVar3;
  }
  return uVar2;
}



/* Entry: 10a173ba4; end: 10a173bef;  */

bool FUN_10a173ba4(ulong param_1,ulong param_2)

{
  bool bVar1;
  
  if ((param_2 == 0) && (param_2 = param_1, FUN_10a173ab0(), param_2 == 0)) {
    bVar1 = false;
  }
  else {
    FUN_10a173b18(param_2,param_1);
    bVar1 = (param_2 & 3) != 0;
  }
  return bVar1;
}



/* Entry: 10a173bf0; end: 10a173c3f;  */

bool FUN_10a173bf0(long param_1,long param_2)

{
  bool bVar1;
  
  if ((param_2 == 0) && (param_2 = param_1, FUN_10a173ab0(), param_2 == 0)) {
    bVar1 = false;
  }
  else {
    FUN_10a173b18(param_2,param_1);
    bVar1 = (((uint)param_2 ^ 0xffffffff) & 7) == 0;
  }
  return bVar1;
}



/* Entry: 10a173c40; end: 10a173d03;  */

void FUN_10a173c40(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  FUN_10a15d66c();
  lVar6 = 0;
  bVar3 = true;
  do {
    bVar7 = bVar3;
    *(undefined4 *)(param_1 + lVar6 * 4 + 6 + 3) = 0x100000;
    uVar5 = 0x100000;
    __Znam(0x100000);
    FUN_10a196a6c(auStack_50,uVar5);
    FUN_10a173d04(param_1 + lVar6 * 4 + 6,auStack_50);
    plVar4 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    lVar6 = 1;
    bVar3 = false;
  } while (bVar7);
  *(int *)(param_1 + 5) = (int)*(undefined8 *)(*param_1 + 0x148);
  return;
}



/* Entry: 10a173d04; end: 10a173d67;  */

undefined8 * FUN_10a173d04(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a173d68; end: 10a17403b;  */

void FUN_10a173d68(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_b0;
  long *plStack_a8;
  long lStack_a0;
  undefined4 uStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
    return;
  }
  func_0x00010a08f1bc();
  if ((*(byte *)(*plVar8 + 0x440) & 1) != 0) {
    puVar9 = (undefined8 *)(*plVar8 + 0x248);
    func_0x00010a155704();
    uVar3 = *(uint *)(param_1 + 0xe);
    if (uVar3 < 2) {
      *(int *)((long)param_1 + (ulong)uVar3 * 0x20 + 0x44) = (int)param_1[(ulong)uVar3 * 4 + 8];
      iVar4 = *(int *)(*param_1 + 0x734);
      lStack_80 = 0;
      plStack_78 = (long *)0x0;
      lVar11 = param_1[2];
      lVar2 = param_1[3];
      if (lVar11 != lVar2) {
        uVar14 = 0;
        do {
          if (*(int *)(lVar11 + 0x1e0) != 0) {
            uVar13 = 0;
            do {
              if (uVar13 == 0xc) goto LAB_10a17400c;
              lVar12 = lVar11 + uVar13 * 0x28;
              if (*(int *)(lVar12 + 0x1c) != 0) {
                if ((iVar4 == 1) && ((*(byte *)(lVar12 + 8) & 1) == 0)) {
                  if (lStack_80 == 0) {
                    plStack_a8 = (long *)0x600000004;
                    uStack_b0 = (ulong)*(uint *)(param_1 + (ulong)uVar3 * 4 + 9);
                    func_0x00010928b768(&lStack_90,*param_1,&uStack_b0,
                                        param_1 + (ulong)uVar3 * 4 + 6);
                    plVar8 = plStack_78;
                    plStack_78 = plStack_88;
                    lStack_80 = lStack_90;
                    lStack_90 = 0;
                    plStack_88 = (long *)0x0;
                    if (plVar8 != (long *)0x0) {
                      plVar1 = plVar8 + 1;
                      do {
                        lVar10 = *plVar1;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar6) {
                          *plVar1 = lVar10 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (lVar10 == 0) {
                        (**(code **)(*plVar8 + 0x10))(plVar8);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                      }
                    }
                    plVar8 = plStack_88;
                    if (plStack_88 != (long *)0x0) {
                      plVar1 = plStack_88 + 1;
                      do {
                        lVar10 = *plVar1;
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                        if (bVar6) {
                          *plVar1 = lVar10 + -1;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (lVar10 == 0) {
                        (**(code **)(*plStack_88 + 0x10))(plStack_88);
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                      }
                    }
                  }
                  *(long *)(lVar12 + 0x10) = lStack_80;
                  *(undefined4 *)(lVar12 + 0x18) = *(undefined4 *)(lVar12 + 0x20);
                }
                else {
                  FUN_10abfe8c8(&uStack_b0,*puVar9);
                  if (uVar14 != uStack_b0) {
                    FUN_10a097928(param_2,&uStack_b0);
                    uVar14 = uStack_b0;
                  }
                  *(ulong *)(lVar12 + 0x10) = uStack_b0;
                  *(undefined4 *)(lVar12 + 0x18) = uStack_98;
                  if (lStack_a0 != 0) {
                    _memcpy(lStack_a0,
                            param_1[(ulong)uVar3 * 4 + 6] + (ulong)*(uint *)(lVar12 + 0x20),
                            *(undefined4 *)(lVar12 + 0x1c));
                  }
                  plVar8 = plStack_a8;
                  if (plStack_a8 != (long *)0x0) {
                    plVar1 = plStack_a8 + 1;
                    do {
                      lVar12 = *plVar1;
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar6) {
                        *plVar1 = lVar12 + -1;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar5 != '\0');
                    if (lVar12 == 0) {
                      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                    }
                  }
                }
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(uint *)(lVar11 + 0x1e0));
          }
          lVar11 = lVar11 + 0x1e8;
        } while (lVar11 != lVar2);
      }
      FUN_10abff71c(*puVar9,0);
      if (lStack_80 != 0) {
        FUN_10a097928(param_2,&lStack_80);
      }
      plVar8 = plStack_78;
      if (plStack_78 == (long *)0x0) {
        return;
      }
      plVar1 = plStack_78 + 1;
      do {
        lVar11 = *plVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar11 != 0) {
        return;
      }
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      return;
    }
  }
LAB_10a17400c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10a174010);
  (*pcVar7)();
}



/* Entry: 10a17403c; end: 10a17409f;  */

void FUN_10a17403c(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  
  uVar4 = *(uint *)(param_1 + 0x70);
  uVar2 = uVar4 + 1 & 1;
  uVar3 = -uVar2;
  if (-2 < (int)uVar4) {
    uVar3 = uVar2;
  }
  if (-1 < (int)uVar3) {
    lVar1 = param_1 + 0x30 + (ulong)uVar3 * 0x20;
    lVar6 = *(long *)(lVar1 + 8);
    if ((lVar6 == 0) || (*(long *)(lVar6 + 8) != 0)) {
      if (1 < uVar4) goto LAB_10a17409c;
    }
    else {
      if (1 < uVar4) goto LAB_10a17409c;
      lVar6 = param_1 + 0x30 + (ulong)uVar4 * 0x20;
      if (*(int *)(lVar6 + 0x14) == *(int *)(lVar6 + 0x10)) {
        *(undefined8 *)(lVar1 + 0x10) = 0xffffffff00000000;
        *(uint *)(param_1 + 0x70) = uVar3;
        return;
      }
    }
    return;
  }
LAB_10a17409c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1740a0);
  (*pcVar5)();
}



/* Entry: 10a1740a0; end: 10a17418b;  */

void FUN_10a1740a0(long param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_30;
  long *plStack_28;
  
  if (1 < *(uint *)(param_1 + 0x70)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a17418c);
    (*pcVar6)();
  }
  param_1 = param_1 + (ulong)*(uint *)(param_1 + 0x70) * 0x20;
  uVar8 = (ulong)*(uint *)(param_1 + 0x40) + (param_2 & 0xffffffff);
  uVar2 = uVar8;
  if (0xfffffffe < uVar8) {
    uVar2 = 0xffffffff;
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  if (uVar3 < (uint)uVar2) {
    if (uVar3 < 0x100001) {
      uVar3 = 0x100000;
    }
    uVar9 = (ulong)uVar3;
    if (0x100000 < uVar8) {
      do {
        uVar8 = uVar9 << 1;
        uVar9 = uVar8;
        if (0xfffffffe < uVar8) {
          uVar9 = 0xffffffff;
        }
      } while (uVar8 < uVar2);
    }
    uVar8 = uVar9 & 0xffffffff;
    __Znam(uVar8);
    FUN_10a196a6c(&uStack_30,uVar8);
    _memcpy(uStack_30,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40));
    *(int *)(param_1 + 0x48) = (int)uVar9;
    FUN_10a173d04(param_1 + 0x30,&uStack_30);
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return;
}



/* Entry: 10a17418c; end: 10a1741fb;  */

undefined4 FUN_10a17418c(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  if (1 < uVar2) {
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = (((int)param_2 + uVar2) - 1) / uVar2;
    }
    param_2 = (ulong)(uVar4 * uVar2);
  }
  if (*(uint *)(param_1 + 0x70) < 2) {
    lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x70) * 0x20;
    uVar3 = *(undefined4 *)(lVar1 + 0x40);
    FUN_10a1740a0(param_1,param_2);
    *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + (int)param_2;
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a1741fc);
  (*pcVar5)();
}



/* Entry: 10a1741fc; end: 10a17455f;  */

undefined **
FUN_10a1741fc(undefined **param_1,undefined8 *param_2,undefined *param_3,undefined **param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *unaff_x23;
  undefined8 *puVar20;
  ulong uVar21;
  uint *puVar22;
  long lVar23;
  undefined *apuStack_4b8 [3];
  uint uStack_49c;
  uint auStack_498 [112];
  uint uStack_2d8;
  uint *puStack_2d0;
  uint *puStack_2c8;
  ulong uStack_2c0;
  undefined8 *puStack_2b8;
  long lStack_2b0;
  undefined *puStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  undefined1 *puStack_278;
  uint *puStack_270;
  undefined **ppuStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  undefined1 auStack_244 [4];
  undefined4 auStack_240 [112];
  uint uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  if (*param_1 == (undefined *)0x0) {
    param_4 = (undefined **)0xffffffff;
  }
  else {
    puVar11 = (uint *)*param_2;
    puVar22 = (uint *)param_2[1];
    ppuVar14 = param_1;
    puVar8 = param_2;
    if (puVar11 != puVar22) {
      puVar20 = (undefined8 *)0x0;
      do {
        puVar18 = *(undefined8 **)(puVar11 + 4);
        for (unaff_x23 = *(undefined8 **)(puVar11 + 2); unaff_x23 != puVar18;
            unaff_x23 = unaff_x23 + 8) {
          if ((int)param_3 == 0) {
LAB_10a174270:
            uVar9 = *(int *)((long)unaff_x23 + 0x1c) + 0xfU & 0xfffffff0;
            uVar1 = *(uint *)(param_1 + 5);
            if (1 < uVar1) {
              uVar4 = 0;
              if (uVar1 != 0) {
                uVar4 = ((uVar9 + uVar1) - 1) / uVar1;
              }
              uVar9 = uVar4 * uVar1;
            }
            puVar20 = (undefined8 *)((long)puVar20 + (ulong)uVar9);
          }
          else {
            ppuVar14 = (undefined **)*param_4;
            puVar8 = (undefined8 *)param_4[1];
            FUN_10a187ebc(ppuVar14,puVar8,unaff_x23,&uStack_260);
            if (ppuVar14 == (undefined **)param_4[1]) goto LAB_10a174270;
          }
        }
        puVar11 = puVar11 + 0x20;
      } while (puVar11 != puVar22);
      if (puVar20 != (undefined8 *)0x0) {
        FUN_10a17403c(param_1);
        if ((undefined8 *)0xfffffffe < puVar20) {
          puVar20 = (undefined8 *)0xffffffff;
        }
        ppuVar14 = param_1;
        FUN_10a1740a0();
        puVar8 = puVar20;
      }
    }
    lVar19 = 0;
    do {
      *(undefined8 *)((long)&uStack_260 + lVar19) = 0xffffffffffffffff;
      auStack_258[lVar19] = 1;
      *(undefined8 *)((long)&uStack_250 + lVar19) = 0;
      *(undefined8 *)(&stack0xfffffffffffffdb8 + lVar19) = 0;
      lVar10 = lVar19 + 0x28;
      *(undefined4 *)((long)auStack_240 + lVar19) = 0;
      lVar19 = lVar10;
    } while (lVar10 != 0x1e0);
    uStack_80 = 0;
    lVar19 = 0;
    do {
      *(undefined8 *)((long)&uStack_260 + lVar19) = 0xffffffffffffffff;
      auStack_258[lVar19] = 1;
      *(undefined8 *)((long)&uStack_250 + lVar19) = 0;
      *(undefined8 *)(&stack0xfffffffffffffdb8 + lVar19) = 0;
      lVar10 = lVar19 + 0x28;
      *(undefined4 *)((long)auStack_240 + lVar19) = 0;
      lVar19 = lVar10;
    } while (lVar10 != 0x1e0);
    puVar11 = (uint *)*param_2;
    puStack_270 = (uint *)param_2[1];
    uVar21 = (ulong)uStack_80;
    if (puVar11 != puStack_270) {
      ppuStack_268 = param_1 + 6;
      puStack_278 = auStack_244;
      do {
        lVar19 = *(long *)(puVar11 + 2);
        lVar10 = *(long *)(puVar11 + 4);
        if (lVar19 != lVar10) {
          uVar9 = (uint)uVar21;
          if (uVar9 < 0xd) {
            uVar9 = 0xc;
          }
          puVar22 = (uint *)(puStack_278 + uVar21 * 0x28);
          lVar23 = uVar9 - uVar21;
          do {
            puStack_78 = &UNK_10f640232;
            uStack_70 = 0x34;
            if (lVar23 == 0) {
              ppuVar14 = &puStack_78;
              FUN_10a0edfc4();
              goto LAB_10a17455c;
            }
            puVar22[-7] = *puVar11;
            puVar22[-6] = *(uint *)(lVar19 + 0x18);
            *(char *)(puVar22 + -5) = (char)param_3;
            if ((int)param_3 == 0) {
LAB_10a1743d4:
              uVar9 = *(int *)(lVar19 + 0x1c) + 0xfU & 0xfffffff0;
              unaff_x23 = (undefined8 *)(ulong)uVar9;
              *puVar22 = uVar9;
              ppuVar14 = param_1;
              FUN_10a17418c(param_1,unaff_x23);
              puVar22[1] = (uint)ppuVar14;
              if (1 < *(uint *)(param_1 + 0xe)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10a174554);
                (*pcVar5)();
              }
              ppuVar14 = (undefined **)
                         (ppuStack_268[(ulong)*(uint *)(param_1 + 0xe) * 4] +
                         ((ulong)ppuVar14 & 0xffffffff));
              puVar8 = unaff_x23;
              _bzero();
            }
            else {
              ppuVar14 = (undefined **)*param_4;
              puVar8 = (undefined8 *)param_4[1];
              FUN_10a187ebc(ppuVar14,puVar8,lVar19,&puStack_78);
              if (ppuVar14 == (undefined **)param_4[1]) goto LAB_10a1743d4;
              *puVar22 = 0;
            }
            lVar19 = lVar19 + 0x40;
            puVar22 = puVar22 + 10;
            lVar23 = lVar23 + -1;
            uVar21 = (ulong)((int)uVar21 + 1);
          } while (lVar19 != lVar10);
        }
        puVar11 = puVar11 + 0x20;
      } while (puVar11 != puStack_270);
    }
    uStack_80 = (uint)uVar21;
    param_3 = param_1[3];
    lVar19 = (long)param_3 - (long)param_1[2];
    param_4 = (undefined **)((lVar19 >> 3) * 0x4fbcda3ac10c9715);
    if (param_3 < param_1[4]) {
      _memcpy(param_3,&uStack_260,0x1e8);
      param_3 = param_3 + 0x1e8;
    }
    else {
      uVar13 = (long)param_4 + 1;
      if (0x864b8a7de6d1d6 < uVar13) {
LAB_10a17455c:
        FUN_10a187f4c();
        puStack_2d0 = puVar22;
        puStack_2c8 = puVar11;
        uStack_2c0 = uVar21;
        puStack_2b8 = unaff_x23;
        lStack_2b0 = lVar19;
        puStack_2a8 = param_3;
        ppuStack_2a0 = param_4;
        ppuStack_298 = param_1;
        puStack_290 = &stack0xfffffffffffffff0;
        pcStack_288 = FUN_10a174560;
        if (*ppuVar14 == (undefined *)0x0) {
          ppuVar15 = (undefined **)0xffffffff;
        }
        else {
          puVar16 = ppuVar14[2];
          puVar6 = ppuVar14[3];
          if (puVar16 == puVar6) {
LAB_10a174784:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10a174788);
            (*pcVar5)();
          }
          puVar8 = (undefined8 *)(puVar6 + -0x1e8);
          ppuVar7 = apuStack_4b8;
          _memcpy(ppuVar7,puVar8,0x1e8);
          uVar21 = (ulong)uStack_2d8;
          if (uStack_2d8 != 0) {
            if (uStack_2d8 - 0xd < 0xfffffff4) goto LAB_10a174784;
            puVar20 = (undefined8 *)0x0;
            puVar11 = &uStack_49c;
            uVar13 = uVar21;
            do {
              uVar9 = *puVar11;
              if (uVar9 != 0) {
                uVar1 = *(uint *)(ppuVar14 + 5);
                if (1 < uVar1) {
                  uVar4 = 0;
                  if (uVar1 != 0) {
                    uVar4 = ((uVar9 + uVar1) - 1) / uVar1;
                  }
                  uVar9 = uVar4 * uVar1;
                }
                puVar20 = (undefined8 *)((long)puVar20 + (ulong)uVar9);
              }
              uVar13 = uVar13 - 1;
              puVar11 = puVar11 + 10;
            } while (uVar13 != 0);
            if (puVar20 != (undefined8 *)0x0) {
              FUN_10a17403c(ppuVar14);
              if ((undefined8 *)0xfffffffe < puVar20) {
                puVar20 = (undefined8 *)0xffffffff;
              }
              ppuVar7 = ppuVar14;
              FUN_10a1740a0();
              puVar8 = puVar20;
            }
            puVar11 = auStack_498;
            lVar19 = 0xc;
            do {
              if (lVar19 == 0) goto LAB_10a174784;
              uVar9 = puVar11[-1];
              if (uVar9 != 0) {
                uVar1 = *puVar11;
                ppuVar15 = ppuVar14;
                FUN_10a17418c(ppuVar14,uVar9);
                *puVar11 = (uint)ppuVar15;
                if (1 < *(uint *)(ppuVar14 + 0xe)) goto LAB_10a174784;
                ppuVar7 = (undefined **)
                          (ppuVar14[(ulong)*(uint *)(ppuVar14 + 0xe) * 4 + 6] +
                          ((ulong)ppuVar15 & 0xffffffff));
                puVar8 = (undefined8 *)(ppuVar14[(ulong)*(uint *)(ppuVar14 + 0xe) * 4 + 6] + uVar1);
                _memcpy(ppuVar7,puVar8,uVar9);
              }
              puVar11 = puVar11 + 10;
              lVar19 = lVar19 + -1;
              uVar21 = uVar21 - 1;
            } while (uVar21 != 0);
            puVar16 = ppuVar14[2];
            puVar6 = ppuVar14[3];
          }
          ppuVar15 = (undefined **)(((long)puVar6 - (long)puVar16 >> 3) * 0x4fbcda3ac10c9715);
          if (puVar6 < ppuVar14[4]) {
            _memcpy(puVar6,apuStack_4b8,0x1e8);
            puVar6 = puVar6 + 0x1e8;
          }
          else {
            uVar21 = (long)ppuVar15 + 1;
            if (0x864b8a7de6d1d6 < uVar21) {
              FUN_10a187f4c();
              puVar20 = (undefined8 *)ppuVar7[1];
              if (puVar20 < ppuVar7[2]) {
                puVar18 = puVar20 + 1;
                *puVar20 = *puVar8;
                ppuVar15 = ppuVar7;
              }
              else {
                lVar19 = (long)puVar20 - (long)*ppuVar7;
                uVar21 = (lVar19 >> 3) + 1;
                if (uVar21 >> 0x3d != 0) {
                  FUN_10a107b70();
                  ppuVar14 = (undefined **)ppuVar7[1];
                  *ppuVar7 = (undefined *)0x0;
                  ppuVar7[1] = (undefined *)0x0;
                  if (ppuVar14 != (undefined **)0x0) {
                    ppuVar15 = ppuVar14 + 1;
                    do {
                      puVar6 = *ppuVar15;
                      cVar2 = '\x01';
                      bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
                      if (bVar3) {
                        *ppuVar15 = puVar6 + -1;
                        cVar2 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar2 != '\0');
                    if (puVar6 == (undefined *)0x0) {
                      (**(code **)(*ppuVar14 + 0x10))(ppuVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)
                                (ppuVar14);
                      return ppuVar14;
                    }
                  }
                  return ppuVar7;
                }
                uVar12 = (long)ppuVar7[2] - (long)*ppuVar7;
                uVar13 = (long)uVar12 >> 2;
                if (uVar13 <= uVar21) {
                  uVar13 = uVar21;
                }
                if (0x7ffffffffffffff7 < uVar12) {
                  uVar13 = 0x1fffffffffffffff;
                }
                ppuVar14 = ppuVar7;
                func_0x00010a0433c0();
                puVar6 = *ppuVar7;
                puVar20 = (undefined8 *)((long)ppuVar14 + lVar19);
                puVar16 = (undefined *)((long)puVar20 - ((long)ppuVar7[1] - (long)puVar6));
                puVar18 = puVar20 + 1;
                *puVar20 = *puVar8;
                _memcpy(puVar16,puVar6);
                ppuVar15 = (undefined **)*ppuVar7;
                *ppuVar7 = puVar16;
                ppuVar7[1] = (undefined *)puVar18;
                ppuVar7[2] = (undefined *)(ppuVar14 + uVar13);
                if (ppuVar15 != (undefined **)0x0) {
                  __ZdlPv();
                }
              }
              ppuVar7[1] = (undefined *)puVar18;
              return ppuVar15;
            }
            lVar19 = (long)ppuVar14[4] - (long)puVar16 >> 3;
            uVar13 = lVar19 * -0x60864b8a7de6d1d6;
            if (uVar13 < uVar21 || uVar13 - uVar21 == 0) {
              uVar13 = uVar21;
            }
            if (0x4325c53ef368ea < (ulong)(lVar19 * 0x4fbcda3ac10c9715)) {
              uVar13 = 0x864b8a7de6d1d6;
            }
            FUN_10a187f60();
            lVar19 = uVar13 + ((long)puVar6 - (long)puVar16);
            _memcpy(lVar19,apuStack_4b8,0x1e8);
            puVar6 = (undefined *)(lVar19 + 0x1e8);
            puVar17 = (undefined *)(lVar19 - ((long)ppuVar14[3] - (long)ppuVar14[2]));
            _memcpy(puVar17);
            puVar16 = ppuVar14[2];
            ppuVar14[2] = puVar17;
            ppuVar14[3] = puVar6;
            ppuVar14[4] = (undefined *)(uVar13 + (long)puVar8 * 0x1e8);
            if (puVar16 != (undefined *)0x0) {
              __ZdlPv();
            }
          }
          ppuVar14[3] = puVar6;
        }
        return ppuVar15;
      }
      lVar10 = (long)param_1[4] - (long)param_1[2] >> 3;
      uVar21 = lVar10 * -0x60864b8a7de6d1d6;
      if (uVar21 < uVar13 || uVar21 - uVar13 == 0) {
        uVar21 = uVar13;
      }
      if (0x4325c53ef368ea < (ulong)(lVar10 * 0x4fbcda3ac10c9715)) {
        uVar21 = 0x864b8a7de6d1d6;
      }
      FUN_10a187f60();
      lVar19 = uVar21 + lVar19;
      _memcpy(lVar19,&uStack_260,0x1e8);
      param_3 = (undefined *)(lVar19 + 0x1e8);
      puVar16 = (undefined *)(lVar19 - ((long)param_1[3] - (long)param_1[2]));
      _memcpy(puVar16);
      puVar6 = param_1[2];
      param_1[2] = puVar16;
      param_1[3] = param_3;
      param_1[4] = (undefined *)(uVar21 + (long)puVar8 * 0x1e8);
      if (puVar6 != (undefined *)0x0) {
        __ZdlPv();
      }
    }
    param_1[3] = param_3;
  }
  return param_4;
}



/* Entry: 10a174560; end: 10a17478b;  */

long * FUN_10a174560(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  long alStack_238 [3];
  uint uStack_21c;
  uint auStack_218 [112];
  uint uStack_58;
  
  if (*param_1 == 0) {
    plVar16 = (long *)0xffffffff;
  }
  else {
    uVar11 = param_1[2];
    uVar12 = param_1[3];
    if (uVar11 == uVar12) {
LAB_10a174784:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a174788);
      (*pcVar5)();
    }
    puVar9 = (undefined8 *)(uVar12 - 0x1e8);
    plVar6 = alStack_238;
    _memcpy(plVar6,puVar9,0x1e8);
    uVar19 = (ulong)uStack_58;
    if (uStack_58 != 0) {
      if (uStack_58 - 0xd < 0xfffffff4) goto LAB_10a174784;
      puVar15 = (undefined8 *)0x0;
      puVar10 = &uStack_21c;
      uVar11 = uVar19;
      do {
        uVar13 = *puVar10;
        if (uVar13 != 0) {
          uVar1 = *(uint *)(param_1 + 5);
          if (1 < uVar1) {
            uVar4 = 0;
            if (uVar1 != 0) {
              uVar4 = ((uVar13 + uVar1) - 1) / uVar1;
            }
            uVar13 = uVar4 * uVar1;
          }
          puVar15 = (undefined8 *)((long)puVar15 + (ulong)uVar13);
        }
        uVar11 = uVar11 - 1;
        puVar10 = puVar10 + 10;
      } while (uVar11 != 0);
      if (puVar15 != (undefined8 *)0x0) {
        FUN_10a17403c(param_1);
        if ((undefined8 *)0xfffffffe < puVar15) {
          puVar15 = (undefined8 *)0xffffffff;
        }
        plVar6 = param_1;
        FUN_10a1740a0();
        puVar9 = puVar15;
      }
      puVar10 = auStack_218;
      lVar20 = 0xc;
      do {
        if (lVar20 == 0) goto LAB_10a174784;
        uVar13 = puVar10[-1];
        if (uVar13 != 0) {
          uVar1 = *puVar10;
          plVar16 = param_1;
          FUN_10a17418c(param_1,uVar13);
          *puVar10 = (uint)plVar16;
          if (1 < *(uint *)(param_1 + 0xe)) goto LAB_10a174784;
          plVar6 = (long *)(param_1[(ulong)*(uint *)(param_1 + 0xe) * 4 + 6] +
                           ((ulong)plVar16 & 0xffffffff));
          puVar9 = (undefined8 *)(param_1[(ulong)*(uint *)(param_1 + 0xe) * 4 + 6] + (ulong)uVar1);
          _memcpy(plVar6,puVar9,uVar13);
        }
        puVar10 = puVar10 + 10;
        lVar20 = lVar20 + -1;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      uVar11 = param_1[2];
      uVar12 = param_1[3];
    }
    plVar16 = (long *)(((long)(uVar12 - uVar11) >> 3) * 0x4fbcda3ac10c9715);
    if (uVar12 < (ulong)param_1[4]) {
      _memcpy(uVar12,alStack_238,0x1e8);
      lVar20 = uVar12 + 0x1e8;
    }
    else {
      uVar19 = (long)plVar16 + 1;
      if (0x864b8a7de6d1d6 < uVar19) {
        FUN_10a187f4c();
        puVar15 = (undefined8 *)plVar6[1];
        if (puVar15 < (undefined8 *)plVar6[2]) {
          puVar18 = puVar15 + 1;
          *puVar15 = *puVar9;
          plVar8 = plVar6;
        }
        else {
          lVar20 = (long)puVar15 - *plVar6;
          uVar11 = (lVar20 >> 3) + 1;
          if (uVar11 >> 0x3d != 0) {
            FUN_10a107b70();
            plVar16 = (long *)plVar6[1];
            *plVar6 = 0;
            plVar6[1] = 0;
            if (plVar16 != (long *)0x0) {
              plVar8 = plVar16 + 1;
              do {
                lVar20 = *plVar8;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar3) {
                  *plVar8 = lVar20 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar16);
                return plVar16;
              }
            }
            return plVar6;
          }
          uVar19 = plVar6[2] - *plVar6;
          uVar12 = (long)uVar19 >> 2;
          if (uVar12 <= uVar11) {
            uVar12 = uVar11;
          }
          if (0x7ffffffffffffff7 < uVar19) {
            uVar12 = 0x1fffffffffffffff;
          }
          plVar16 = plVar6;
          func_0x00010a0433c0();
          lVar17 = *plVar6;
          puVar15 = (undefined8 *)((long)plVar16 + lVar20);
          lVar20 = (long)puVar15 - (plVar6[1] - lVar17);
          puVar18 = puVar15 + 1;
          *puVar15 = *puVar9;
          _memcpy(lVar20,lVar17);
          plVar8 = (long *)*plVar6;
          *plVar6 = lVar20;
          plVar6[1] = (long)puVar18;
          plVar6[2] = (long)(plVar16 + uVar12);
          if (plVar8 != (long *)0x0) {
            __ZdlPv();
          }
        }
        plVar6[1] = (long)puVar18;
        return plVar8;
      }
      lVar20 = (long)(param_1[4] - uVar11) >> 3;
      uVar14 = lVar20 * -0x60864b8a7de6d1d6;
      if (uVar14 < uVar19 || uVar14 - uVar19 == 0) {
        uVar14 = uVar19;
      }
      if (0x4325c53ef368ea < (ulong)(lVar20 * 0x4fbcda3ac10c9715)) {
        uVar14 = 0x864b8a7de6d1d6;
      }
      FUN_10a187f60();
      lVar17 = uVar14 + (uVar12 - uVar11);
      _memcpy(lVar17,alStack_238,0x1e8);
      lVar20 = lVar17 + 0x1e8;
      lVar17 = lVar17 - (param_1[3] - param_1[2]);
      _memcpy(lVar17);
      lVar7 = param_1[2];
      param_1[2] = lVar17;
      param_1[3] = lVar20;
      param_1[4] = uVar14 + (long)puVar9 * 0x1e8;
      if (lVar7 != 0) {
        __ZdlPv();
      }
    }
    param_1[3] = lVar20;
  }
  return plVar16;
}



/* Entry: 10a17478c; end: 10a17484f;  */

void FUN_10a17478c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 < (undefined8 *)param_1[2]) {
    puVar12 = puVar3 + 1;
    *puVar3 = *param_2;
  }
  else {
    lVar11 = (long)puVar3 - *param_1;
    uVar1 = (lVar11 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a107b70();
      plVar9 = (long *)param_1[1];
      *param_1 = 0;
      param_1[1] = 0;
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 1;
        do {
          lVar11 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar9);
          return;
        }
      }
      return;
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    plVar9 = param_1;
    func_0x00010a0433c0();
    lVar4 = *param_1;
    puVar3 = (undefined8 *)((long)plVar9 + lVar11);
    lVar10 = (long)puVar3 - (param_1[1] - lVar4);
    puVar12 = puVar3 + 1;
    *puVar3 = *param_2;
    _memcpy(lVar10,lVar4);
    lVar11 = *param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar12;
    param_1[2] = (long)(plVar9 + uVar8);
    if (lVar11 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar12;
  return;
}



/* Entry: 10a174850; end: 10a17496b;  */

void FUN_10a174850(undefined8 *param_1)

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



/* Entry: 10a17496c; end: 10a174bb7;  */

bool FUN_10a17496c(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  bool bVar2;
  long *plVar3;
  ulong **ppuVar4;
  ulong **ppuVar5;
  long *plVar6;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong *apuStack_68 [6];
  byte bStack_38;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&lStack_80,*param_2,param_2[1]);
  }
  else {
    lStack_78 = param_2[1];
    lStack_80 = *param_2;
    lStack_70 = param_2[2];
  }
  FUN_10a0f1b8c(apuStack_68,&lStack_80,0);
  if (lStack_70 < 0) {
    __ZdlPv(lStack_80);
  }
  if ((bStack_38 & 1) == 0) {
    return false;
  }
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  plVar3 = (long *)*apuStack_68[0];
  (**(code **)(*plVar3 + 0x18))();
  plVar6 = (long *)(lStack_78 - lStack_80);
  if (plVar3 < plVar6 || (long)plVar3 - (long)plVar6 == 0) {
    if (plVar3 < plVar6) {
      lStack_78 = lStack_80 + (long)plVar3;
    }
  }
  else {
    FUN_10a105930(&lStack_80,(long)plVar3 - (long)plVar6);
  }
  if ((bStack_38 & 1) != 0) {
    ppuVar4 = apuStack_68;
    FUN_10a0f2024(ppuVar4,&lStack_80);
    if ((bStack_38 & 1) != 0) {
      ppuVar5 = (ulong **)*apuStack_68[0];
      (*(code *)(*ppuVar5)[3])();
      bVar2 = ppuVar4 == ppuVar5;
      if (bVar2) {
        FUN_109ffe064(&uStack_98,lStack_80,ppuVar4);
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          __ZdlPv(*param_1);
        }
        param_1[1] = uStack_90;
        *param_1 = uStack_98;
        param_1[2] = uStack_88;
      }
      if (lStack_80 != 0) {
        lStack_78 = lStack_80;
        _free(*(undefined8 *)(lStack_80 + -8));
      }
      if ((bStack_38 & 1) == 0) {
        return bVar2;
      }
      FUN_10a0f1ea0(apuStack_68);
      return bVar2;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a174ab8);
  (*pcVar1)();
}



/* Entry: 10a174bb8; end: 10a174beb;  */

undefined8 *
FUN_10a174bb8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_6 & 7) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe90c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glGetProgramBinary_11034b658)(param_2,param_3,param_4,param_5,param_6);
    return param_2;
  }
  puVar1 = (undefined8 *)&UNK_10f640aba;
  FUN_10a00946c();
  if (*(char *)(puVar1 + 3) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar1);
  }
  else {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(puVar1,*param_2,param_2[1]);
    }
    else {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      puVar1[2] = param_2[2];
      puVar1[1] = uVar3;
      *puVar1 = uVar2;
    }
    *(undefined1 *)(puVar1 + 3) = 1;
  }
  return puVar1;
}



/* Entry: 10a174bec; end: 10a174c57;  */

undefined8 * FUN_10a174bec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1);
  }
  else {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(param_1,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar2;
      *param_1 = uVar1;
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 10a174c58; end: 10a174d2b;  */

undefined8 * FUN_10a174c58(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[0x10] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5ba0;
  param_1[0x16] = 0;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_1108a5a60;
  *param_1 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108a5b78;
  __ZNSt3__18ios_base4initEPv(param_1 + 0x10,param_1 + 3);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *param_1 = &PTR_SUB_1108a5a38;
  param_1[0x10] = &PTR_DAT_1108a5a88;
  param_1[2] = &PTR_DAT_1108a5a60;
  FUN_10a197298(param_1 + 3,param_2,param_3);
  return param_1;
}



/* Entry: 10a174d2c; end: 10a174d9f;  */

void FUN_10a174d2c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10a197410(&uStack_30);
  plVar5 = (long *)param_1[1];
  uVar7 = param_1[1];
  uVar6 = *param_1;
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
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
      uStack_30 = uVar6;
      uStack_28 = uVar7;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a174da0; end: 10a174ef7;  */

long * FUN_10a174da0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  byte *pbVar7;
  undefined **ppuVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined *puStack_90;
  undefined *puStack_88;
  long *plStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined **ppuStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  ppuVar6 = &PTR___tlv_bootstrap_11340de28;
  (*(code *)PTR___tlv_bootstrap_11340de28)();
  puStack_20 = &UNK_10f63b699;
  uStack_18 = 0x28;
  if (*ppuVar6 != (undefined *)0x0) {
    plStack_30 = (long *)(*ppuVar6 + 0x10);
    if ((*plStack_30 != 0) && (lRam0000000113300470 != -1)) {
      ppuStack_28 = &puStack_20;
      puStack_20 = (undefined *)&plStack_30;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113300470,&ppuStack_28,FUN_10a18b7e4);
    }
    return (long *)(ulong)uRam0000000113300468;
  }
  FUN_10a0edfc4(&puStack_20);
  uStack_38 = 0x10a174e3c;
  pbVar7 = (byte *)0x113834838;
  puStack_40 = &stack0xfffffffffffffff0;
  FUN_10a08f69c();
  if ((*pbVar7 & 1) == 0) {
    ppuVar6 = &PTR___tlv_bootstrap_11340de28;
    (*(code *)PTR___tlv_bootstrap_11340de28)();
    puStack_50 = &UNK_10f63b699;
    uStack_48 = 0x28;
    if (*ppuVar6 == (undefined *)0x0) {
      ppuVar6 = &puStack_50;
      FUN_10a0edfc4();
      ppuVar8 = &puStack_90;
      FUN_10a1978b0(&puStack_90);
      puVar4 = puStack_90;
      plVar11 = (long *)ppuVar6[1];
      puStack_90 = *ppuVar6;
      puVar5 = ppuVar6[1];
      ppuVar6[1] = puStack_88;
      puStack_88 = puVar5;
      *ppuVar6 = puVar4;
      if (plVar11 != (long *)0x0) {
        plVar1 = plVar11 + 1;
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
          (**(code **)(*plVar11 + 0x10))(plVar11);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
          ppuVar8 = (undefined **)plVar11;
        }
      }
      return (long *)ppuVar8;
    }
    plStack_60 = (long *)(*ppuVar6 + 0x10);
    if ((*plStack_60 != 0) && (lRam0000000113300480 != -1)) {
      ppuStack_58 = &puStack_50;
      puStack_50 = (undefined *)&plStack_60;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x113300480,&ppuStack_58,FUN_10a18b89c);
    }
    uVar9 = (uint)bRam0000000113300478;
  }
  else {
    uVar9 = 1;
  }
  return (long *)(ulong)(uVar9 & 1);
}



/* Entry: 10a174ef8; end: 10a17502f;  */

void FUN_10a174ef8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10a1978b0(&uStack_30);
  plVar5 = (long *)param_1[1];
  uVar7 = param_1[1];
  uVar6 = *param_1;
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
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
      uStack_30 = uVar6;
      uStack_28 = uVar7;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a175030; end: 10a1750f3;  */

/* WARNING: Removing unreachable block (ram,0x00010a17520c) */
/* WARNING: Removing unreachable block (ram,0x00010a175304) */

float * FUN_10a175030(float *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte bVar12;
  long lVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  byte abStack_39 [9];
  
  puVar2 = *(undefined8 **)(param_1 + 2);
  if (puVar2 < *(undefined8 **)(param_1 + 4)) {
    puVar14 = puVar2 + 1;
    *puVar2 = *param_2;
    pfVar5 = param_1;
LAB_10a1750dc:
    *(undefined8 **)(param_1 + 2) = puVar14;
    return pfVar5;
  }
  lVar13 = (long)puVar2 - *(long *)param_1;
  uVar1 = (lVar13 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    uVar7 = (long)*(undefined8 **)(param_1 + 4) - *(long *)param_1;
    uVar10 = (long)uVar7 >> 2;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar10 = 0x1fffffffffffffff;
    }
    pfVar4 = param_1;
    FUN_10a18cc48();
    puVar2 = (undefined8 *)((long)pfVar4 + lVar13);
    puVar14 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar13 = (long)puVar2 - (*(long *)(param_1 + 2) - *(long *)param_1);
    _memcpy(lVar13);
    pfVar5 = *(float **)param_1;
    *(long *)param_1 = lVar13;
    *(undefined8 **)(param_1 + 2) = puVar14;
    *(float **)(param_1 + 4) = pfVar4 + uVar10 * 2;
    if (pfVar5 != (float *)0x0) {
      __ZdlPv();
    }
    goto LAB_10a1750dc;
  }
  FUN_10a18cc34();
  iVar8 = 0;
  fVar15 = *param_1;
  fVar16 = param_1[1];
  fVar17 = param_1[2];
  fVar21 = param_1[3];
  fVar18 = fVar15;
  if (fVar15 < 0.0) {
    fVar18 = -fVar15;
  }
  fVar19 = fVar16;
  if (fVar16 < 0.0) {
    fVar19 = -fVar16;
  }
  fVar20 = fVar17;
  if (fVar17 < 0.0) {
    fVar20 = -fVar17;
  }
  abStack_39[2] = 1;
  abStack_39[1] = 1;
  abStack_39[0] = 1;
  bVar3 = ABS(fVar21) < 1e-06;
  do {
    if (iVar8 == 1) {
      pbVar11 = abStack_39 + 1;
      fVar22 = fVar19;
    }
    else if (iVar8 == 2) {
      pbVar11 = abStack_39;
      fVar22 = fVar20;
    }
    else {
      if (iVar8 == 3) goto LAB_10a1751a0;
      pbVar11 = abStack_39 + 2;
      fVar22 = fVar18;
    }
    *pbVar11 = fVar22 < 1e-06;
    iVar8 = iVar8 + 1;
  } while (iVar8 != 4);
  bVar3 = true;
LAB_10a1751a0:
  iVar8 = 0;
  while (((bVar12 = abStack_39[1], iVar8 == 1 || (bVar12 = abStack_39[0], iVar8 == 2)) ||
         (bVar12 = abStack_39[2], iVar8 != 3))) {
    while (iVar8 = iVar8 + 1, (bVar12 & 1) == 0) {
      if (iVar8 == 3) goto LAB_10a175210;
      bVar12 = 0;
    }
  }
  if (!bVar3) {
LAB_10a175210:
    iVar8 = 0;
    abStack_39[5] = 1;
    abStack_39[4] = 1;
    abStack_39[3] = 1;
    uVar6 = (uint)(ABS(fVar21 + -1.0) < 1e-06);
    do {
      if (iVar8 == 1) {
        pbVar11 = abStack_39 + 4;
        fVar21 = fVar19;
      }
      else if (iVar8 == 2) {
        pbVar11 = abStack_39 + 3;
        fVar21 = fVar20;
      }
      else {
        uVar9 = uVar6;
        if (iVar8 == 3) goto LAB_10a175294;
        pbVar11 = abStack_39 + 5;
        fVar21 = fVar18;
      }
      *pbVar11 = fVar21 < 1e-06;
      iVar8 = iVar8 + 1;
    } while (iVar8 != 4);
    uVar9 = 1;
LAB_10a175294:
    iVar8 = 0;
    while (((bVar12 = abStack_39[4], iVar8 == 1 || (bVar12 = abStack_39[3], iVar8 == 2)) ||
           (bVar12 = abStack_39[5], iVar8 != 3))) {
      while (iVar8 = iVar8 + 1, (bVar12 & 1) == 0) {
        if (iVar8 == 3) goto LAB_10a175308;
        bVar12 = 0;
      }
    }
    if (uVar9 == 0) {
LAB_10a175308:
      iVar8 = 0;
      abStack_39[8] = 1;
      abStack_39[7] = 1;
      abStack_39[6] = 1;
      fVar15 = fVar15 + -1.0;
      fVar16 = fVar16 + -1.0;
      fVar17 = fVar17 + -1.0;
      if (fVar15 < 0.0) {
        fVar15 = -fVar15;
      }
      if (fVar16 < 0.0) {
        fVar16 = -fVar16;
      }
      if (fVar17 < 0.0) {
        fVar17 = -fVar17;
      }
      do {
        if (iVar8 == 1) {
          pbVar11 = abStack_39 + 7;
          fVar18 = fVar16;
        }
        else if (iVar8 == 2) {
          pbVar11 = abStack_39 + 6;
          fVar18 = fVar17;
        }
        else {
          if (iVar8 == 3) goto LAB_10a1753a4;
          pbVar11 = abStack_39 + 8;
          fVar18 = fVar15;
        }
        *pbVar11 = fVar18 < 1e-06;
        iVar8 = iVar8 + 1;
      } while (iVar8 != 4);
      uVar6 = 1;
LAB_10a1753a4:
      uVar9 = 0;
      if ((abStack_39[7] & 1) != 0) {
        uVar9 = abStack_39[6] & uVar6;
      }
      uVar6 = 0;
      if ((abStack_39[8] & 1) != 0) {
        uVar6 = uVar9;
      }
      goto LAB_10a1753c4;
    }
  }
  uVar6 = 1;
LAB_10a1753c4:
  return (float *)(ulong)uVar6;
}



/* Entry: 10a1750f4; end: 10a1753cf;  */

/* WARNING: Removing unreachable block (ram,0x00010a17520c) */
/* WARNING: Removing unreachable block (ram,0x00010a175304) */

byte FUN_10a1750f4(float *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  byte abStack_9 [9];
  
  iVar3 = 0;
  fVar6 = *param_1;
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar12 = param_1[3];
  fVar9 = fVar6;
  if (fVar6 < 0.0) {
    fVar9 = -fVar6;
  }
  fVar10 = fVar7;
  if (fVar7 < 0.0) {
    fVar10 = -fVar7;
  }
  fVar11 = fVar8;
  if (fVar8 < 0.0) {
    fVar11 = -fVar8;
  }
  abStack_9[2] = 1;
  abStack_9[1] = 1;
  abStack_9[0] = 1;
  bVar2 = ABS(fVar12) < 1e-06;
  do {
    if (iVar3 == 1) {
      pbVar4 = abStack_9 + 1;
      fVar13 = fVar10;
    }
    else if (iVar3 == 2) {
      pbVar4 = abStack_9;
      fVar13 = fVar11;
    }
    else {
      if (iVar3 == 3) goto LAB_10a1751a0;
      pbVar4 = abStack_9 + 2;
      fVar13 = fVar9;
    }
    *pbVar4 = fVar13 < 1e-06;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  bVar2 = true;
LAB_10a1751a0:
  iVar3 = 0;
  while (((bVar5 = abStack_9[1], iVar3 == 1 || (bVar5 = abStack_9[0], iVar3 == 2)) ||
         (bVar5 = abStack_9[2], iVar3 != 3))) {
    while (iVar3 = iVar3 + 1, (bVar5 & 1) == 0) {
      if (iVar3 == 3) goto LAB_10a175210;
      bVar5 = 0;
    }
  }
  if (!bVar2) {
LAB_10a175210:
    iVar3 = 0;
    abStack_9[5] = 1;
    abStack_9[4] = 1;
    abStack_9[3] = 1;
    bVar2 = ABS(fVar12 + -1.0) < 1e-06;
    do {
      if (iVar3 == 1) {
        pbVar4 = abStack_9 + 4;
        fVar12 = fVar10;
      }
      else if (iVar3 == 2) {
        pbVar4 = abStack_9 + 3;
        fVar12 = fVar11;
      }
      else {
        bVar1 = bVar2;
        if (iVar3 == 3) goto LAB_10a175294;
        pbVar4 = abStack_9 + 5;
        fVar12 = fVar9;
      }
      *pbVar4 = fVar12 < 1e-06;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    bVar1 = true;
LAB_10a175294:
    iVar3 = 0;
    while (((bVar5 = abStack_9[4], iVar3 == 1 || (bVar5 = abStack_9[3], iVar3 == 2)) ||
           (bVar5 = abStack_9[5], iVar3 != 3))) {
      while (iVar3 = iVar3 + 1, (bVar5 & 1) == 0) {
        if (iVar3 == 3) goto LAB_10a175308;
        bVar5 = 0;
      }
    }
    if (!bVar1) {
LAB_10a175308:
      iVar3 = 0;
      abStack_9[8] = 1;
      abStack_9[7] = 1;
      abStack_9[6] = 1;
      fVar6 = fVar6 + -1.0;
      fVar7 = fVar7 + -1.0;
      fVar8 = fVar8 + -1.0;
      if (fVar6 < 0.0) {
        fVar6 = -fVar6;
      }
      if (fVar7 < 0.0) {
        fVar7 = -fVar7;
      }
      if (fVar8 < 0.0) {
        fVar8 = -fVar8;
      }
      do {
        if (iVar3 == 1) {
          pbVar4 = abStack_9 + 7;
          fVar9 = fVar7;
        }
        else if (iVar3 == 2) {
          pbVar4 = abStack_9 + 6;
          fVar9 = fVar8;
        }
        else {
          if (iVar3 == 3) goto LAB_10a1753a4;
          pbVar4 = abStack_9 + 8;
          fVar9 = fVar6;
        }
        *pbVar4 = fVar9 < 1e-06;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
      bVar2 = true;
LAB_10a1753a4:
      bVar5 = 0;
      if ((abStack_9[7] & 1) != 0) {
        bVar5 = abStack_9[6] & bVar2;
      }
      if ((abStack_9[8] & 1) == 0) {
        return 0;
      }
      return bVar5;
    }
  }
  return 1;
}



/* Entry: 10a1753d0; end: 10a17540b;  */

void FUN_10a1753d0(long param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  
  if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) <= (ulong)(long)param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a17540c);
    (*pcVar1)();
  }
  lVar2 = *(long *)(*(long *)(param_1 + 8) + (long)param_2 * 8);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____dynamic_cast_110346c00)(lVar2,&PTR_DAT_110baa1c8,&PTR_DAT_110c54558,0);
    return;
  }
  return;
}



/* Entry: 10a17540c; end: 10a175493;  */

long * FUN_10a17540c(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lStack_b8;
  undefined1 uStack_a9;
  long *plStack_a8;
  
  if (*(byte *)((long)param_2 + 1) < 0xf) {
    *(uint *)((long)param_1 + 4) = (uint)*(byte *)((long)param_2 + 1);
    if (*(byte *)((long)param_2 + 2) < 0xf) {
      *(uint *)(param_1 + 1) = (uint)*(byte *)((long)param_2 + 2);
      if (*(byte *)((long)param_2 + 3) < 0xf) {
        *(uint *)(param_1 + 2) = (uint)*(byte *)((long)param_2 + 3);
        if (*(byte *)((long)param_2 + 4) < 0xf) {
          *(uint *)((long)param_1 + 0x14) = (uint)*(byte *)((long)param_2 + 4);
          if (*(byte *)((long)param_2 + 5) < 5) {
            *(uint *)((long)param_1 + 0xc) = (uint)*(byte *)((long)param_2 + 5);
            if (*(byte *)((long)param_2 + 6) < 5) {
              *(uint *)(param_1 + 3) = (uint)*(byte *)((long)param_2 + 6);
              return param_1;
            }
          }
          goto LAB_10a175488;
        }
      }
    }
  }
  FUN_10a0ee06c(&UNK_10f68e8f2);
LAB_10a175488:
  plVar3 = (long *)&UNK_10f640b36;
  FUN_10a0ee06c();
  plVar4 = (long *)plVar3[1];
  if (plVar4 < (long *)plVar3[2]) {
    plVar10 = plVar4 + 1;
    *plVar4 = *param_2;
    plVar4 = plVar3;
  }
  else {
    lVar9 = (long)plVar4 - *plVar3;
    uVar1 = (lVar9 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a18ce1c();
      if ((int)param_2 != 0xffff) {
        plVar4 = plVar3 + 4;
        FUN_10a021e20();
        if ((*(byte *)(plVar4 + 3) & 1) == 0) {
          return param_2;
        }
      }
      lVar9 = plVar3[0x139];
      plVar4 = plVar3 + 4;
      plVar8 = plVar4;
      FUN_10a5dfef8();
      if ((int)plVar8 == 0xffff) {
        uVar1 = *(long *)(lVar9 + 0x230) - *(long *)(lVar9 + 0x228);
        if (uVar1 == 0) {
          plVar8 = (long *)0xffff;
        }
        else {
          uVar5 = plVar3[0xcb];
          FUN_10a5dff54(plVar4,(long)uVar1 >> 4);
          plStack_a8 = &lStack_b8;
          plVar8 = plVar3 + 0xcc;
          lStack_b8 = lVar9;
          FUN_10a5e90bc(plVar8,&lStack_b8,&UNK_10dd5b8f9,&plStack_a8,&uStack_a9);
          lVar11 = 0;
          uVar6 = 0;
          *(short *)(plVar8 + 3) = (short)plVar4;
          lVar12 = uVar5 * 0x178;
          do {
            uVar7 = (plVar3[0xc9] - plVar3[200] >> 3) * 0x51b3bea3677d46cf;
            if ((uVar7 < uVar5 + uVar6 || uVar7 - (uVar5 + uVar6) == 0) ||
               ((ulong)(*(long *)(lVar9 + 0x230) - *(long *)(lVar9 + 0x228) >> 4) <= uVar6))
            goto LAB_10a5dfef4;
            FUN_10a5e001c(plVar3[200] + lVar12,lVar9,
                          *(undefined8 *)(*(long *)(lVar9 + 0x228) + lVar11));
            uVar6 = uVar6 + 1;
            lVar11 = lVar11 + 0x10;
            lVar12 = lVar12 + 0x178;
          } while ((long)uVar1 >> 4 != uVar6);
          uVar6 = (plVar3[0xc9] - plVar3[200] >> 3) * 0x51b3bea3677d46cf;
          if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
LAB_10a5dfef4:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5dfef8);
            (*pcVar2)();
          }
          *(char *)(plVar3[200] + uVar5 * 0x178 + 0x1a) = (char)(uVar1 >> 4);
          plVar8 = plVar4;
        }
      }
      return plVar8;
    }
    uVar5 = plVar3[2] - *plVar3;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    plVar8 = plVar3;
    FUN_10a18ce30();
    plVar4 = (long *)((long)plVar8 + lVar9);
    plVar10 = plVar4 + 1;
    *plVar4 = *param_2;
    lVar9 = (long)plVar4 - (plVar3[1] - *plVar3);
    _memcpy(lVar9);
    plVar4 = (long *)*plVar3;
    *plVar3 = lVar9;
    plVar3[1] = (long)plVar10;
    plVar3[2] = (long)(plVar8 + uVar6);
    if (plVar4 != (long *)0x0) {
      __ZdlPv();
    }
  }
  plVar3[1] = (long)plVar10;
  return plVar4;
}



/* Entry: 10a175494; end: 10a175557;  */

long * FUN_10a175494(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lStack_a8;
  undefined1 uStack_99;
  long *plStack_98;
  
  plVar3 = (long *)param_1[1];
  if (plVar3 < (long *)param_1[2]) {
    plVar9 = plVar3 + 1;
    *plVar3 = *param_2;
    plVar3 = param_1;
  }
  else {
    lVar8 = (long)plVar3 - *param_1;
    uVar1 = (lVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10a18ce1c();
      if ((int)param_2 != 0xffff) {
        plVar3 = param_1 + 4;
        FUN_10a021e20();
        if ((*(byte *)(plVar3 + 3) & 1) == 0) {
          return param_2;
        }
      }
      lVar8 = param_1[0x139];
      plVar3 = param_1 + 4;
      plVar7 = plVar3;
      FUN_10a5dfef8();
      if ((int)plVar7 == 0xffff) {
        uVar1 = *(long *)(lVar8 + 0x230) - *(long *)(lVar8 + 0x228);
        if (uVar1 == 0) {
          plVar7 = (long *)0xffff;
        }
        else {
          uVar4 = param_1[0xcb];
          FUN_10a5dff54(plVar3,(long)uVar1 >> 4);
          plStack_98 = &lStack_a8;
          plVar7 = param_1 + 0xcc;
          lStack_a8 = lVar8;
          FUN_10a5e90bc(plVar7,&lStack_a8,&UNK_10dd5b8f9,&plStack_98,&uStack_99);
          lVar10 = 0;
          uVar5 = 0;
          *(short *)(plVar7 + 3) = (short)plVar3;
          lVar11 = uVar4 * 0x178;
          do {
            uVar6 = (param_1[0xc9] - param_1[200] >> 3) * 0x51b3bea3677d46cf;
            if ((uVar6 < uVar4 + uVar5 || uVar6 - (uVar4 + uVar5) == 0) ||
               ((ulong)(*(long *)(lVar8 + 0x230) - *(long *)(lVar8 + 0x228) >> 4) <= uVar5))
            goto LAB_10a5dfef4;
            FUN_10a5e001c(param_1[200] + lVar11,lVar8,
                          *(undefined8 *)(*(long *)(lVar8 + 0x228) + lVar10));
            uVar5 = uVar5 + 1;
            lVar10 = lVar10 + 0x10;
            lVar11 = lVar11 + 0x178;
          } while ((long)uVar1 >> 4 != uVar5);
          uVar5 = (param_1[0xc9] - param_1[200] >> 3) * 0x51b3bea3677d46cf;
          if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
LAB_10a5dfef4:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5dfef8);
            (*pcVar2)();
          }
          *(char *)(param_1[200] + uVar4 * 0x178 + 0x1a) = (char)(uVar1 >> 4);
          plVar7 = plVar3;
        }
      }
      return plVar7;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    plVar7 = param_1;
    FUN_10a18ce30();
    plVar3 = (long *)((long)plVar7 + lVar8);
    plVar9 = plVar3 + 1;
    *plVar3 = *param_2;
    lVar8 = (long)plVar3 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plVar3 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)plVar9;
    param_1[2] = (long)(plVar7 + uVar5);
    if (plVar3 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar9;
  return plVar3;
}



/* Entry: 10a175558; end: 10a175673;  */

long FUN_10a175558(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lStack_78;
  undefined1 uStack_69;
  long *plStack_68;
  
  if ((int)param_2 != 0xffff) {
    lVar3 = param_1 + 0x20;
    FUN_10a021e20();
    if ((*(byte *)(lVar3 + 0x18) & 1) == 0) {
      return param_2;
    }
  }
  lVar4 = *(long *)(param_1 + 0x9c8);
  lVar3 = param_1 + 0x20;
  lVar9 = lVar3;
  FUN_10a5dfef8();
  if ((int)lVar9 == 0xffff) {
    uVar1 = *(long *)(lVar4 + 0x230) - *(long *)(lVar4 + 0x228);
    if (uVar1 == 0) {
      lVar9 = 0xffff;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x658);
      FUN_10a5dff54(lVar3,(long)uVar1 >> 4);
      plStack_68 = &lStack_78;
      lVar9 = param_1 + 0x660;
      lStack_78 = lVar4;
      FUN_10a5e90bc(lVar9,&lStack_78,&UNK_10dd5b8f9,&plStack_68,&uStack_69);
      lVar7 = 0;
      uVar8 = 0;
      *(short *)(lVar9 + 0x18) = (short)lVar3;
      lVar9 = uVar6 * 0x178;
      do {
        uVar5 = (*(long *)(param_1 + 0x648) - *(long *)(param_1 + 0x640) >> 3) * 0x51b3bea3677d46cf;
        if ((uVar5 < uVar6 + uVar8 || uVar5 - (uVar6 + uVar8) == 0) ||
           ((ulong)(*(long *)(lVar4 + 0x230) - *(long *)(lVar4 + 0x228) >> 4) <= uVar8))
        goto LAB_10a5dfef4;
        FUN_10a5e001c(*(long *)(param_1 + 0x640) + lVar9,lVar4,
                      *(undefined8 *)(*(long *)(lVar4 + 0x228) + lVar7));
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x10;
        lVar9 = lVar9 + 0x178;
      } while ((long)uVar1 >> 4 != uVar8);
      uVar8 = (*(long *)(param_1 + 0x648) - *(long *)(param_1 + 0x640) >> 3) * 0x51b3bea3677d46cf;
      if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
LAB_10a5dfef4:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a5dfef8);
        (*pcVar2)();
      }
      *(char *)(*(long *)(param_1 + 0x640) + uVar6 * 0x178 + 0x1a) = (char)(uVar1 >> 4);
      lVar9 = lVar3;
    }
  }
  return lVar9;
}



/* Entry: 10a175674; end: 10a1756fb;  */

undefined1  [16] FUN_10a175674(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  FUN_10a198410(param_1,param_2,param_2,param_3);
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x47) < '\0') {
      __ZdlPv(*(undefined8 *)(param_1 + 0x30));
    }
    uVar2 = param_3[1];
    uVar1 = *param_3;
    *(undefined8 *)(param_1 + 0x40) = param_3[2];
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    *(undefined1 *)param_3 = 0;
    *(undefined8 *)(param_1 + 0x48) = param_3[3];
    FUN_10a0e65b0(param_1 + 0x50,param_3 + 4);
    *(undefined8 *)(param_1 + 0x60) = param_3[6];
  }
  auVar3._8_8_ = param_2 & 0xff;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a1756fc; end: 10a1757af;  */

undefined8 * FUN_10a1756fc(undefined8 *param_1)

{
  func_0x00010a045fb4(param_1 + 4);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a1757b0; end: 10a175893;  */

uint FUN_10a1757b0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  FUN_10a775b40();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(byte *)(param_1 + 0x20) ^ 1;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    FUN_10a18d1ac(&puStack_60,param_3,&uStack_48);
    FUN_10a775bec(param_1,param_2,puStack_60,
                  ((long)puStack_58 - (long)puStack_60 >> 3) * -0x3333333333333333);
    uVar2 = (uint)param_1;
    if (puStack_60 != (undefined8 *)0x0) {
      puStack_58 = puStack_60;
      __ZdlPv();
    }
    puStack_60 = &uStack_48;
    func_0x00010a18d7e8(&puStack_60);
  }
  return uVar2 & 1;
}



/* Entry: 10a175894; end: 10a175b13;  */

undefined * FUN_10a175894(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  
  FUN_10ae030a0(0,*param_1);
  ppuVar6 = &PTR_PTR_113300680;
  ppuVar5 = ppuVar6;
  FUN_10ae079a0();
  FUN_10ae030d8();
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined *)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar5[0x13],ppuVar5[0xf],
                  ppuVar5 + 0x14,0x400);
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
    puVar8 = ppuVar5[0x12];
    puVar7 = ppuVar5[0xb];
    uVar1 = 0;
    _clock_gettime_nsec_np();
    uVar2 = uVar1;
    _pthread_self();
    _pthread_mach_thread_np();
    ppuStack_8e8 = ppuVar5 + 1;
    uStack_8b8 = *(undefined4 *)(ppuVar5 + 0xe);
    uStack_8c0 = uVar2 & 0xffffffff;
    ppuStack_8b0 = ppuVar5 + 0x10;
    puVar3 = *ppuVar5;
    ppuVar6 = (undefined **)&ppuStack_8e8;
    uStack_8f0 = uStack_898;
    puStack_8e0 = puVar7;
    puStack_8d8 = puVar8;
    uStack_8d0 = (ulong)(puVar8 != (undefined *)0x0);
    uStack_8c8 = uVar1;
    FUN_10ae0784c(puVar3,ppuVar6,&puStack_900,&puStack_918);
  }
  iVar4 = (int)ppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (iVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    func_0x00010ae087bc();
    FUN_10ae07e54(puVar3);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10a175b14; end: 10a175b8f;  */

undefined1  [16] FUN_10a175b14(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (*(ulong *)(param_1 + 0x120) < 0x12) {
    uVar8 = *param_2;
    puVar3 = (undefined8 *)(param_1 + *(ulong *)(param_1 + 0x120) * 0x10);
    puVar3[1] = param_2[1];
    *puVar3 = uVar8;
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 1;
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = param_1;
    return auVar9;
  }
  plVar4 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_109ffdeb4();
  plVar5 = plVar4;
  puVar7 = PTR___ZTISt12length_error_110352238;
  ___cxa_throw(plVar4,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  uVar6 = (uint)puVar7;
  ___cxa_free_exception(plVar4);
  __Unwind_Resume();
  plVar4 = plVar5;
  (**(code **)(*plVar5 + 0x28))();
  uVar1 = (uint)plVar4 >> (ulong)(uVar6 & 0x1f);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  plVar4 = plVar5;
  (**(code **)(*plVar5 + 0x30))();
  uVar2 = (uint)plVar4 >> (ulong)(uVar6 & 0x1f);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  (**(code **)(*plVar5 + 0x38))();
  uVar6 = (uint)plVar5 >> (ulong)(uVar6 & 0x1f);
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  auVar10._4_4_ = uVar2;
  auVar10._0_4_ = uVar1;
  auVar10._8_4_ = uVar6;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 10a175b90; end: 10a175c0b;  */

undefined1  [16] FUN_10a175b90(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x28))();
  uVar1 = (uint)plVar4 >> (ulong)(param_2 & 0x1f);
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  plVar4 = param_1;
  (**(code **)(*param_1 + 0x30))();
  uVar2 = (uint)plVar4 >> (ulong)(param_2 & 0x1f);
  if (uVar2 < 2) {
    uVar2 = 1;
  }
  (**(code **)(*param_1 + 0x38))();
  uVar3 = (uint)param_1 >> (ulong)(param_2 & 0x1f);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  auVar5._4_4_ = uVar2;
  auVar5._0_4_ = uVar1;
  auVar5._8_4_ = uVar3;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 10a175c0c; end: 10a175cfb;  */

void FUN_10a175c0c(long *param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  long lVar7;
  uint uVar8;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  ppuVar6 = &puStack_60;
  plVar4 = (long *)*param_2;
  puStack_60 = &UNK_10f640b4e;
  if (plVar4 != (long *)0x0) {
    puStack_60 = &UNK_10f640b66;
    uStack_58 = 0x17;
    if (*param_4 != 0) {
      (**(code **)(*plVar4 + 0x48))();
      plVar5 = (long *)*param_4;
      (**(code **)(*plVar5 + 0x48))();
      uVar1 = (uint)plVar5;
      if ((uint)plVar4 <= (uint)plVar5) {
        uVar1 = (uint)plVar4;
      }
      if (uVar1 != 0) {
        uVar8 = 0;
        do {
          (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3,uVar8,param_4,param_5,uVar8);
          uVar8 = uVar8 + 1;
        } while (uVar1 != uVar8);
      }
      *(undefined1 *)(*param_4 + 0x19) = 0;
      return;
    }
  }
  uStack_58 = 0x17;
  FUN_10a0edfc4();
  plVar4 = (long *)ppuVar6[1];
  *ppuVar6 = (undefined *)0x0;
  ppuVar6[1] = (undefined *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a175cfc; end: 10a175d57;  */

void FUN_10a175cfc(undefined8 *param_1)

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



/* Entry: 10a175d58; end: 10a175ebf;  */

/* WARNING: Removing unreachable block (ram,0x00010a175fd8) */
/* WARNING: Removing unreachable block (ram,0x00010a1760d0) */

float *******
FUN_10a175d58(undefined8 *param_1,long param_2,float *******param_3,float *******param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float *******pppppppfVar4;
  float *******pppppppfVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar9;
  ulong uVar10;
  undefined8 uVar11;
  float ******ppppppfVar12;
  float ******ppppppfVar13;
  float *****pppppfVar14;
  float *****pppppfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  byte abStack_89 [9];
  float ******ppppppfStack_80;
  float ******ppppppfStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  pppppppfVar4 = param_4;
  FUN_10a198a74();
  ppppppfVar12 = *param_4;
  ppppppfVar13 = ppppppfVar12;
  if (param_2 != 0) {
    param_2 = param_2 * 0x18;
    ppppppfStack_80 = (float ******)param_4;
    do {
      uVar10 = param_1[1];
      if (0x7ffffffffffffff7 < uVar10) {
        func_0x000109ffde50();
        if ((long)uStack_68 < 0) {
          __ZdlPv(ppppppfStack_78);
        }
        __Unwind_Resume();
        iVar7 = 0;
        fVar16 = *(float *)pppppppfVar4;
        fVar17 = *(float *)((long)pppppppfVar4 + 4);
        fVar18 = *(float *)(pppppppfVar4 + 1);
        fVar22 = *(float *)((long)pppppppfVar4 + 0xc);
        fVar19 = fVar16;
        if (fVar16 < 0.0) {
          fVar19 = -fVar16;
        }
        fVar20 = fVar17;
        if (fVar17 < 0.0) {
          fVar20 = -fVar17;
        }
        fVar21 = fVar18;
        if (fVar18 < 0.0) {
          fVar21 = -fVar18;
        }
        abStack_89[2] = 1;
        abStack_89[1] = 1;
        abStack_89[0] = 1;
        bVar3 = ABS(fVar22) < 1e-06;
        goto LAB_10a175f18;
      }
      uVar11 = *param_1;
      if (uVar10 < 0x17) {
        uStack_68 = CONCAT17((char)uVar10,(undefined7)uStack_68);
        pppppppfVar5 = &ppppppfStack_78;
        if (uVar10 != 0) goto LAB_10a175dfc;
      }
      else {
        pppppppfVar4 = (float *******)0x19;
        if ((uVar10 | 7) != 0x17) {
          pppppppfVar4 = (float *******)((uVar10 | 7) + 1);
        }
        pppppppfVar5 = pppppppfVar4;
        __Znwm();
        uStack_68 = (ulong)pppppppfVar4 | 0x8000000000000000;
        ppppppfStack_78 = (float ******)pppppppfVar5;
        uStack_70 = uVar10;
LAB_10a175dfc:
        _memmove(pppppppfVar5,uVar11,uVar10);
      }
      *(undefined1 *)((long)pppppppfVar5 + uVar10) = 0;
      pppppppfVar5 = param_3;
      FUN_10a198c0c(param_3,&ppppppfStack_78);
      pppppppfVar4 = pppppppfVar5;
      if ((long)uStack_68 < 0) {
        pppppppfVar4 = (float *******)ppppppfStack_78;
        __ZdlPv();
      }
      ppppppfVar13 = ppppppfVar12;
      if (param_3 + 1 != pppppppfVar5) {
        pppppfVar15 = (float *****)param_1[1];
        pppppfVar14 = (float *****)*param_1;
        ppppppfVar12[2] = (float *****)param_1[2];
        ppppppfVar13 = ppppppfVar12 + 3;
        ppppppfVar12[1] = pppppfVar15;
        *ppppppfVar12 = pppppfVar14;
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -0x18;
      ppppppfVar12 = ppppppfVar13;
    } while (param_2 != 0);
    ppppppfVar12 = (float ******)*ppppppfStack_80;
    param_4 = (float *******)ppppppfStack_80;
  }
  FUN_10a198a74(param_4,((long)ppppppfVar13 - (long)ppppppfVar12 >> 3) * -0x5555555555555555);
  return param_4;
LAB_10a175f18:
  do {
    if (iVar7 == 1) {
      pbVar8 = abStack_89 + 1;
      fVar23 = fVar20;
    }
    else if (iVar7 == 2) {
      pbVar8 = abStack_89;
      fVar23 = fVar21;
    }
    else {
      if (iVar7 == 3) goto LAB_10a175f6c;
      pbVar8 = abStack_89 + 2;
      fVar23 = fVar19;
    }
    *pbVar8 = fVar23 < 1e-06;
    iVar7 = iVar7 + 1;
  } while (iVar7 != 4);
  bVar3 = true;
LAB_10a175f6c:
  iVar7 = 0;
  while (((bVar9 = abStack_89[1], iVar7 == 1 || (bVar9 = abStack_89[0], iVar7 == 2)) ||
         (bVar9 = abStack_89[2], iVar7 != 3))) {
    while (iVar7 = iVar7 + 1, (bVar9 & 1) == 0) {
      if (iVar7 == 3) goto LAB_10a175fdc;
      bVar9 = 0;
    }
  }
  if (!bVar3) {
LAB_10a175fdc:
    iVar7 = 0;
    abStack_89[5] = 1;
    abStack_89[4] = 1;
    abStack_89[3] = 1;
    bVar3 = ABS(fVar22 + -1.0) < 1e-06;
    do {
      if (iVar7 == 1) {
        pbVar8 = abStack_89 + 4;
        fVar22 = fVar20;
      }
      else if (iVar7 == 2) {
        pbVar8 = abStack_89 + 3;
        fVar22 = fVar21;
      }
      else {
        bVar2 = bVar3;
        if (iVar7 == 3) goto LAB_10a176060;
        pbVar8 = abStack_89 + 5;
        fVar22 = fVar19;
      }
      *pbVar8 = fVar22 < 1e-06;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 4);
    bVar2 = true;
LAB_10a176060:
    iVar7 = 0;
    while (((bVar9 = abStack_89[4], iVar7 == 1 || (bVar9 = abStack_89[3], iVar7 == 2)) ||
           (bVar9 = abStack_89[5], iVar7 != 3))) {
      while (iVar7 = iVar7 + 1, (bVar9 & 1) == 0) {
        if (iVar7 == 3) goto LAB_10a1760d4;
        bVar9 = 0;
      }
    }
    if (bVar2) {
      return (float *******)0x1;
    }
LAB_10a1760d4:
    iVar7 = 0;
    abStack_89[8] = 1;
    abStack_89[7] = 1;
    abStack_89[6] = 1;
    fVar16 = fVar16 + -1.0;
    fVar17 = fVar17 + -1.0;
    fVar18 = fVar18 + -1.0;
    if (fVar16 < 0.0) {
      fVar16 = -fVar16;
    }
    if (fVar17 < 0.0) {
      fVar17 = -fVar17;
    }
    if (fVar18 < 0.0) {
      fVar18 = -fVar18;
    }
    do {
      if (iVar7 == 1) {
        pbVar8 = abStack_89 + 7;
        fVar19 = fVar17;
      }
      else if (iVar7 == 2) {
        pbVar8 = abStack_89 + 6;
        fVar19 = fVar18;
      }
      else {
        if (iVar7 == 3) goto LAB_10a176170;
        pbVar8 = abStack_89 + 8;
        fVar19 = fVar16;
      }
      *pbVar8 = fVar19 < 1e-06;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 4);
    bVar3 = true;
LAB_10a176170:
    if ((abStack_89[8] & 1) != 0) {
      uVar6 = 2;
      if ((abStack_89[6] & bVar3) == 0) {
        uVar6 = 0;
      }
      uVar1 = 0;
      if ((abStack_89[7] & 1) != 0) {
        uVar1 = uVar6;
      }
      return (float *******)(ulong)uVar1;
    }
  }
  return (float *******)0x0;
}



/* Entry: 10a175ec0; end: 10a1761a7;  */

/* WARNING: Removing unreachable block (ram,0x00010a175fd8) */
/* WARNING: Removing unreachable block (ram,0x00010a1760d0) */

undefined4 FUN_10a175ec0(float *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  byte abStack_9 [9];
  
  iVar4 = 0;
  fVar7 = *param_1;
  fVar8 = param_1[1];
  fVar9 = param_1[2];
  fVar13 = param_1[3];
  fVar10 = fVar7;
  if (fVar7 < 0.0) {
    fVar10 = -fVar7;
  }
  fVar11 = fVar8;
  if (fVar8 < 0.0) {
    fVar11 = -fVar8;
  }
  fVar12 = fVar9;
  if (fVar9 < 0.0) {
    fVar12 = -fVar9;
  }
  abStack_9[2] = 1;
  abStack_9[1] = 1;
  abStack_9[0] = 1;
  bVar2 = ABS(fVar13) < 1e-06;
  do {
    if (iVar4 == 1) {
      pbVar5 = abStack_9 + 1;
      fVar14 = fVar11;
    }
    else if (iVar4 == 2) {
      pbVar5 = abStack_9;
      fVar14 = fVar12;
    }
    else {
      if (iVar4 == 3) goto LAB_10a175f6c;
      pbVar5 = abStack_9 + 2;
      fVar14 = fVar10;
    }
    *pbVar5 = fVar14 < 1e-06;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  bVar2 = true;
LAB_10a175f6c:
  iVar4 = 0;
  while (((bVar6 = abStack_9[1], iVar4 == 1 || (bVar6 = abStack_9[0], iVar4 == 2)) ||
         (bVar6 = abStack_9[2], iVar4 != 3))) {
    while (iVar4 = iVar4 + 1, (bVar6 & 1) == 0) {
      if (iVar4 == 3) goto LAB_10a175fdc;
      bVar6 = 0;
    }
  }
  if (!bVar2) {
LAB_10a175fdc:
    iVar4 = 0;
    abStack_9[5] = 1;
    abStack_9[4] = 1;
    abStack_9[3] = 1;
    bVar2 = ABS(fVar13 + -1.0) < 1e-06;
    do {
      if (iVar4 == 1) {
        pbVar5 = abStack_9 + 4;
        fVar13 = fVar11;
      }
      else if (iVar4 == 2) {
        pbVar5 = abStack_9 + 3;
        fVar13 = fVar12;
      }
      else {
        bVar1 = bVar2;
        if (iVar4 == 3) goto LAB_10a176060;
        pbVar5 = abStack_9 + 5;
        fVar13 = fVar10;
      }
      *pbVar5 = fVar13 < 1e-06;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    bVar1 = true;
LAB_10a176060:
    iVar4 = 0;
    while (((bVar6 = abStack_9[4], iVar4 == 1 || (bVar6 = abStack_9[3], iVar4 == 2)) ||
           (bVar6 = abStack_9[5], iVar4 != 3))) {
      while (iVar4 = iVar4 + 1, (bVar6 & 1) == 0) {
        if (iVar4 == 3) goto LAB_10a1760d4;
        bVar6 = 0;
      }
    }
    if (bVar1) {
      return 1;
    }
LAB_10a1760d4:
    iVar4 = 0;
    abStack_9[8] = 1;
    abStack_9[7] = 1;
    abStack_9[6] = 1;
    fVar7 = fVar7 + -1.0;
    fVar8 = fVar8 + -1.0;
    fVar9 = fVar9 + -1.0;
    if (fVar7 < 0.0) {
      fVar7 = -fVar7;
    }
    if (fVar8 < 0.0) {
      fVar8 = -fVar8;
    }
    if (fVar9 < 0.0) {
      fVar9 = -fVar9;
    }
    do {
      if (iVar4 == 1) {
        pbVar5 = abStack_9 + 7;
        fVar10 = fVar8;
      }
      else if (iVar4 == 2) {
        pbVar5 = abStack_9 + 6;
        fVar10 = fVar9;
      }
      else {
        if (iVar4 == 3) goto LAB_10a176170;
        pbVar5 = abStack_9 + 8;
        fVar10 = fVar7;
      }
      *pbVar5 = fVar10 < 1e-06;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
    bVar2 = true;
LAB_10a176170:
    if ((abStack_9[8] & 1) != 0) {
      uVar3 = 2;
      if ((abStack_9[6] & bVar2) == 0) {
        uVar3 = 0;
      }
      if ((abStack_9[7] & 1) == 0) {
        return 0;
      }
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 10a1761a8; end: 10a17620b;  */

undefined8 * FUN_10a1761a8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a17620c; end: 10a1763a3;  */

/* WARNING: Possible PIC construction at 0x00010a176260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a176264) */
/* WARNING: Removing unreachable block (ram,0x00010a176384) */

ulong * FUN_10a17620c(ulong *param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  puVar7 = param_1 + 1;
  uVar2 = *puVar7;
  puVar4 = (undefined8 *)param_1[2];
  uVar5 = ((long)((long)puVar4 - uVar2) >> 3) * -0x5555555555555555;
  uVar6 = *param_1;
  if (uVar6 <= uVar5 && uVar5 - uVar6 != 0) {
    puVar7 = (ulong *)(uVar2 + uVar6 * 0x18);
    *param_1 = uVar6 + 1;
SUB_10a176358:
    for (uVar5 = puVar7[1]; uVar5 != *puVar7; uVar5 = uVar5 - 0x28) {
    }
    puVar7[1] = *puVar7;
    return puVar7;
  }
  if (puVar4 < (undefined8 *)param_1[3]) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar8 = puVar4 + 3;
    puVar4[2] = 0;
  }
  else {
    uVar5 = uVar5 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar5) {
      FUN_10a18fd24();
      goto SUB_10a176358;
    }
    lVar3 = (long)((long)param_1[3] - uVar2) >> 3;
    uVar6 = lVar3 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    puStack_38 = puVar7;
    FUN_10a18fd38();
    puVar4 = (undefined8 *)((long)puVar7 + ((long)puVar4 - uVar2));
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar8 = puVar4 + 3;
    uVar5 = (long)puVar4 - (param_1[2] - param_1[1]);
    _memcpy(uVar5);
    uStack_58 = param_1[1];
    param_1[1] = uVar5;
    param_1[2] = (ulong)puVar8;
    uStack_40 = param_1[3];
    param_1[3] = (ulong)(puVar7 + uVar6 * 3);
    uStack_50 = uStack_58;
    uStack_48 = uStack_58;
    func_0x00010a18fd7c(&uStack_58);
  }
  param_1[2] = (ulong)puVar8;
  *param_1 = *param_1 + 1;
  if ((undefined8 *)param_1[1] == puVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a176354);
    (*pcVar1)();
  }
  return puVar8 + -3;
}



/* Entry: 10a1763a4; end: 10a17647b;  */

/* WARNING: Removing unreachable block (ram,0x00010a176590) */
/* WARNING: Removing unreachable block (ram,0x00010a176594) */
/* WARNING: Removing unreachable block (ram,0x00010a17659c) */
/* WARNING: Removing unreachable block (ram,0x00010a1765a4) */
/* WARNING: Removing unreachable block (ram,0x00010a1765a8) */

void FUN_10a1763a4(long *param_1,ulong param_2)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined ***pppuVar6;
  long lVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  undefined ***pppuStack_d8;
  undefined1 uStack_c9;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_88;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = *param_1;
  if ((ulong)((param_1[2] - lVar7 >> 3) * -0x3333333333333333) < param_2) {
    if (0x666666666666666 < param_2) {
      FUN_10a18fdfc();
      func_0x00010a18ff8c(&plStack_58);
      __Unwind_Resume(param_1);
      lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
      FUN_10a1991e0(&puStack_c8,&uStack_c9,&uStack_e1,param_1,param_2);
      FUN_10a05b04c(&uStack_e0,&puStack_c8);
      if (ppuStack_c0 != (undefined **)0x0) {
        ppuVar10 = ppuStack_c0 + 1;
        do {
          puVar9 = *ppuVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
          if (bVar4) {
            *ppuVar10 = puVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar9 == (undefined *)0x0) {
          (**(code **)(*ppuStack_c0 + 0x10))(ppuStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_c0);
        }
      }
      if (pppuStack_d8 == (undefined ***)0x0) {
        *extraout_x8 = uStack_e0;
        extraout_x8[1] = 0;
      }
      else {
        pppuVar6 = pppuStack_d8 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
          if (bVar4) {
            *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *extraout_x8 = uStack_e0;
        extraout_x8[1] = pppuStack_d8;
        if (pppuStack_d8 != (undefined ***)0x0) {
          pppuVar6 = pppuStack_d8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
            if (bVar4) {
              *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      pppuVar6 = &ppuStack_c0;
      extraout_x8[2] = FUN_10a199350;
      extraout_x8[3] = &PTR_DAT_110bab2c8;
      extraout_x8[4] = uStack_e0;
      extraout_x8[5] = pppuStack_d8;
      uStack_b0 = 0;
      uStack_b8 = 0;
      puStack_c8 = &UNK_1053a6a3c;
      ppuStack_c0 = &PTR_DAT_110ae9180;
      FUN_10a044790(&puStack_c8);
      (*(code *)*ppuStack_c0)();
      if (pppuStack_d8 != (undefined ***)0x0) {
        pppuVar1 = pppuStack_d8 + 1;
        do {
          ppuVar10 = *pppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
          if (bVar4) {
            *pppuVar1 = (undefined **)((long)ppuVar10 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (ppuVar10 == (undefined **)0x0) {
          (*(code *)(*pppuStack_d8)[2])(pppuStack_d8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar6 = pppuStack_d8;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010a05248c(&puStack_c8);
      __Unwind_Resume();
      ppuVar10 = pppuVar6[1];
      *pppuVar6 = (undefined **)0x0;
      pppuVar6[1] = (undefined **)0x0;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar2 = ppuVar10 + 1;
        do {
          puVar9 = *ppuVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
          if (bVar4) {
            *ppuVar2 = puVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar9 == (undefined *)0x0) {
          (**(code **)(*ppuVar10 + 0x10))(ppuVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppuVar10);
          return;
        }
      }
      return;
    }
    lVar8 = param_1[1];
    plVar5 = param_1;
    plStack_38 = param_1;
    FUN_10a18fe10();
    lVar7 = (long)plVar5 + (lVar8 - lVar7);
    lVar8 = lVar7 + (*param_1 - param_1[1]);
    plStack_58 = plVar5;
    plStack_50 = (long *)lVar7;
    plStack_48 = (long *)lVar7;
    plStack_40 = plVar5 + param_2 * 5;
    func_0x00010a18fe54(param_1,*param_1,param_1[1],lVar8);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = lVar7;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar5 + param_2 * 5);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010a18ff8c(&plStack_58);
  }
  return;
}



/* Entry: 10a17647c; end: 10a176663;  */

/* WARNING: Removing unreachable block (ram,0x00010a176590) */
/* WARNING: Removing unreachable block (ram,0x00010a176594) */
/* WARNING: Removing unreachable block (ram,0x00010a17659c) */
/* WARNING: Removing unreachable block (ram,0x00010a1765a4) */
/* WARNING: Removing unreachable block (ram,0x00010a1765a8) */

void FUN_10a17647c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined ***pppuStack_78;
  undefined1 uStack_69;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a1991e0(&puStack_68,&uStack_69,&uStack_81,param_2,param_3);
  FUN_10a05b04c(&uStack_80,&puStack_68);
  if (ppuStack_60 != (undefined **)0x0) {
    ppuVar7 = ppuStack_60 + 1;
    do {
      puVar6 = *ppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar4) {
        *ppuVar7 = puVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuStack_60 + 0x10))(ppuStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_60);
    }
  }
  if (pppuStack_78 == (undefined ***)0x0) {
    *param_1 = uStack_80;
    param_1[1] = 0;
  }
  else {
    pppuVar5 = pppuStack_78 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar4) {
        *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *param_1 = uStack_80;
    param_1[1] = pppuStack_78;
    if (pppuStack_78 != (undefined ***)0x0) {
      pppuVar5 = pppuStack_78 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar4) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  pppuVar5 = &ppuStack_60;
  param_1[2] = FUN_10a199350;
  param_1[3] = &PTR_DAT_110bab2c8;
  param_1[4] = uStack_80;
  param_1[5] = pppuStack_78;
  uStack_50 = 0;
  uStack_58 = 0;
  puStack_68 = &UNK_1053a6a3c;
  ppuStack_60 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_68);
  (*(code *)*ppuStack_60)();
  if (pppuStack_78 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_78 + 1;
    do {
      ppuVar7 = *pppuVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar4) {
        *pppuVar1 = (undefined **)((long)ppuVar7 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar7 == (undefined **)0x0) {
      (*(code *)(*pppuStack_78)[2])(pppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar5 = pppuStack_78;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&puStack_68);
  __Unwind_Resume();
  ppuVar7 = pppuVar5[1];
  *pppuVar5 = (undefined **)0x0;
  pppuVar5[1] = (undefined **)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar2 = ppuVar7 + 1;
    do {
      puVar6 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = puVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuVar7 + 0x10))(ppuVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppuVar7);
      return;
    }
  }
  return;
}



/* Entry: 10a176664; end: 10a1766bf;  */

void FUN_10a176664(undefined8 *param_1)

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



/* Entry: 10a1766c0; end: 10a1768e7;  */

/* WARNING: Removing unreachable block (ram,0x00010a176b78) */
/* WARNING: Removing unreachable block (ram,0x00010a176b7c) */
/* WARNING: Removing unreachable block (ram,0x00010a176b84) */
/* WARNING: Removing unreachable block (ram,0x00010a176b8c) */
/* WARNING: Removing unreachable block (ram,0x00010a176b90) */

undefined *** FUN_10a1766c0(undefined ***param_1)

{
  undefined8 **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ****ppppuVar8;
  undefined ****ppppuVar9;
  long *plVar10;
  long lVar11;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined1 uStack_1c1;
  undefined8 uStack_1c0;
  undefined ***pppuStack_1b8;
  undefined1 uStack_1a9;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_168;
  undefined ****ppppuStack_160;
  undefined ***pppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  long *plStack_130;
  undefined8 uStack_128;
  undefined1 uStack_119;
  undefined ***pppuStack_118;
  undefined ***pppuStack_110;
  undefined1 auStack_108 [8];
  undefined **appuStack_100 [7];
  long lStack_c8;
  undefined8 **ppuStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  char cStack_89;
  undefined1 auStack_88 [8];
  undefined8 **ppuStack_80;
  undefined1 auStack_78 [8];
  undefined8 *apuStack_70 [7];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = param_1 + 2;
  param_1[3] = (undefined **)0x0;
  *pppuVar5 = (undefined **)0x0;
  param_1[4] = (undefined **)0x0;
  param_1[1] = (undefined **)0x0;
  *param_1 = (undefined **)0x0;
  ppuVar15 = (undefined **)NEON_fmov(0x3f800000,4);
  param_1[5] = ppuVar15;
  param_1[7] = (undefined **)0x0;
  param_1[6] = (undefined **)0x0;
  param_1[9] = (undefined **)0x0;
  param_1[8] = (undefined **)0x0;
  param_1[0xb] = (undefined **)0x0;
  param_1[10] = (undefined **)0x0;
  param_1[0xd] = (undefined **)0x0;
  param_1[0xc] = (undefined **)0x0;
  param_1[0xe] = (undefined **)0x0;
  cStack_89 = '\x11';
  uStack_98 = 0x736c672e656c626d;
  uStack_a0 = 0x6573736174786574;
  uStack_90 = 0x6c;
  FUN_10ab451f4(auStack_88,0,&UNK_10f640267,0x1f,&UNK_10f640287,0x1b,&uStack_a0,0x11,1);
  if (cStack_89 < '\0') {
    __ZdlPv(uStack_a0);
  }
  func_0x00010a015c50(pppuVar5,auStack_88);
  plVar10 = (long *)(*pppuVar5)[0x45];
  if (plVar10 == (long *)(*pppuVar5)[0x46]) {
    lVar14 = 0;
  }
  else {
    lVar14 = *plVar10;
  }
  func_0x00010a3326b8(lVar14 + 0x218,1);
  func_0x00010a332748(lVar14 + 0x219,0);
  lVar11 = *(long *)(lVar14 + 600);
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined8 *)(lVar11 + 0x28) = 0;
  *(undefined8 *)(lVar11 + 0x40) = 7;
  *(undefined8 *)(lVar11 + 0x38) = 0x607060100000000;
  *(undefined8 *)(lVar11 + 0x50) = 0;
  *(undefined8 *)(lVar11 + 0x48) = 0;
  *(undefined4 *)(lVar14 + 0x21e) = 0x1010101;
  ppppuVar8 = (undefined ****)0x0;
  func_0x00010a3325d0(lVar14);
  FUN_10a044790(auStack_78);
  ppuVar4 = apuStack_70;
  (*(code *)*apuStack_70[0])();
  if (ppuStack_80 != (undefined8 **)0x0) {
    ppuVar1 = ppuStack_80 + 1;
    do {
      puVar12 = *ppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = (undefined8 *)((long)puVar12 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar12 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_80)[2])(ppuStack_80);
      ppuVar4 = ppuStack_80;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_89 < '\0') {
    __ZdlPv(uStack_a0);
  }
  if (param_1[0xc] != (undefined **)0x0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (param_1[9] != (undefined **)0x0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  ppuVar15 = param_1[6];
  if (ppuVar15 != (undefined **)0x0) {
    param_1[7] = ppuVar15;
    __ZdlPv();
  }
  FUN_10a0617bc(ppuStack_80);
  func_0x00010a05248c(param_1);
  __Unwind_Resume();
  ppuStack_c0 = ppuStack_80;
  pcStack_a8 = FUN_10a1768e8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (*ppuVar4 == (undefined8 *)0x0) {
    uStack_128 = 0;
    uStack_140 = 0;
    FUN_10a199388(auStack_138,&uStack_119,&uStack_140,ppppuVar8);
    FUN_10a176a64(&pppuStack_118,&uStack_128,auStack_138);
    if (plStack_130 != (long *)0x0) {
      plVar10 = plStack_130 + 1;
      do {
        lVar14 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_130);
      }
    }
    ppppuVar8 = &pppuStack_118;
    ppppuVar9 = &pppuStack_118;
    func_0x00010a015bec(ppuVar4,ppppuVar9);
    FUN_10a044790(auStack_108);
    pppuVar5 = appuStack_100;
    (*(code *)*appuStack_100[0])();
    if (pppuStack_110 == (undefined ***)0x0) goto LAB_10a176a10;
    pppuVar7 = pppuStack_110 + 1;
    do {
      ppuVar15 = *pppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar3) {
        *pppuVar7 = (undefined **)((long)ppuVar15 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppuStack_118 = pppuVar5;
      pppuVar6 = pppuStack_110;
    } while (cVar2 != '\0');
  }
  else {
    FUN_10a176c4c(&pppuStack_118);
    ppppuVar9 = ppppuVar8;
    FUN_10a1db4cc(pppuStack_118,ppppuVar8);
    pppuVar5 = pppuStack_118;
    if (pppuStack_110 == (undefined ***)0x0) goto LAB_10a176a10;
    pppuVar5 = pppuStack_110 + 1;
    do {
      ppuVar15 = *pppuVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)ppuVar15 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      pppuVar6 = pppuStack_110;
    } while (cVar2 != '\0');
  }
  pppuVar5 = pppuStack_118;
  if (ppuVar15 == (undefined **)0x0) {
    (*(code *)(*pppuVar6)[2])(pppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppuVar5 = pppuVar6;
  }
LAB_10a176a10:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  func_0x00010a061678(auStack_138);
  pppuVar7 = pppuVar5;
  __Unwind_Resume(pppuVar5);
  pcStack_148 = FUN_10a176a64;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_160 = ppppuVar8;
  pppuStack_158 = pppuVar5;
  ppuStack_150 = &puStack_b0;
  FUN_10a19943c(&puStack_1a8,&uStack_1a9,&uStack_1c1,pppuVar7,ppppuVar9);
  FUN_10a05b04c(&uStack_1c0,&puStack_1a8);
  if (ppuStack_1a0 != (undefined **)0x0) {
    ppuVar15 = ppuStack_1a0 + 1;
    do {
      puVar13 = *ppuVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
      if (bVar3) {
        *ppuVar15 = puVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar13 == (undefined *)0x0) {
      (**(code **)(*ppuStack_1a0 + 0x10))(ppuStack_1a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_1a0);
    }
  }
  if (pppuStack_1b8 == (undefined ***)0x0) {
    *extraout_x8 = uStack_1c0;
    extraout_x8[1] = 0;
  }
  else {
    pppuVar5 = pppuStack_1b8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
      if (bVar3) {
        *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *extraout_x8 = uStack_1c0;
    extraout_x8[1] = pppuStack_1b8;
    if (pppuStack_1b8 != (undefined ***)0x0) {
      pppuVar5 = pppuStack_1b8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar3) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  pppuVar5 = &ppuStack_1a0;
  extraout_x8[2] = FUN_10a199598;
  extraout_x8[3] = &PTR_DAT_110ba9f60;
  extraout_x8[4] = uStack_1c0;
  extraout_x8[5] = pppuStack_1b8;
  uStack_190 = 0;
  uStack_198 = 0;
  puStack_1a8 = &UNK_1053a6a3c;
  ppuStack_1a0 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_1a8);
  (*(code *)*ppuStack_1a0)();
  if (pppuStack_1b8 != (undefined ***)0x0) {
    pppuVar7 = pppuStack_1b8 + 1;
    do {
      ppuVar15 = *pppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar3) {
        *pppuVar7 = (undefined **)((long)ppuVar15 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar15 == (undefined **)0x0) {
      (*(code *)(*pppuStack_1b8)[2])(pppuStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar5 = pppuStack_1b8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&puStack_1a8);
  __Unwind_Resume();
  pppuVar7 = (undefined ***)pppuVar5[0x4d];
  if ((pppuVar7 == (undefined ***)0x0) ||
     (___dynamic_cast(pppuVar7,&PTR_DAT_110bb3788,&PTR_DAT_110bb2d18,0),
     pppuVar7 == (undefined ***)0x0)) {
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
  }
  else {
    ppuVar15 = pppuVar5[0x4e];
    *extraout_x8_00 = pppuVar7;
    extraout_x8_00[1] = ppuVar15;
    if (ppuVar15 != (undefined **)0x0) {
      ppuVar15 = ppuVar15 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
        if (bVar3) {
          *ppuVar15 = *ppuVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return pppuVar7;
}



/* Entry: 10a1768e8; end: 10a176a63;  */

/* WARNING: Removing unreachable block (ram,0x00010a176b78) */
/* WARNING: Removing unreachable block (ram,0x00010a176b7c) */
/* WARNING: Removing unreachable block (ram,0x00010a176b84) */
/* WARNING: Removing unreachable block (ram,0x00010a176b8c) */
/* WARNING: Removing unreachable block (ram,0x00010a176b90) */

void FUN_10a1768e8(long *param_1,undefined8 ***param_2)

{
  long *plVar1;
  undefined ***pppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined **ppuVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined1 uStack_121;
  undefined8 uStack_120;
  undefined ***pppuStack_118;
  undefined1 uStack_109;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  long *plStack_90;
  undefined8 uStack_88;
  undefined1 uStack_79;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 auStack_68 [8];
  undefined8 *apuStack_60 [7];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*param_1 == 0) {
    uStack_88 = 0;
    uStack_a0 = 0;
    FUN_10a199388(auStack_98,&uStack_79,&uStack_a0,param_2);
    FUN_10a176a64(&ppuStack_78,&uStack_88,auStack_98);
    if (plStack_90 != (long *)0x0) {
      plVar1 = plStack_90 + 1;
      do {
        lVar12 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
      }
    }
    param_2 = &ppuStack_78;
    pppuVar9 = &ppuStack_78;
    FUN_10a015bec(param_1,pppuVar9);
    FUN_10a044790(auStack_68);
    ppuVar5 = apuStack_60;
    (*(code *)*apuStack_60[0])();
    if (ppuStack_70 == (undefined8 **)0x0) goto LAB_10a176a10;
    ppuVar7 = ppuStack_70 + 1;
    do {
      puVar11 = *ppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar4) {
        *ppuVar7 = (undefined8 *)((long)puVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuStack_78 = ppuVar5;
      ppuVar6 = ppuStack_70;
    } while (cVar3 != '\0');
  }
  else {
    FUN_10a176c4c(&ppuStack_78);
    pppuVar9 = param_2;
    FUN_10a1db4cc(ppuStack_78,param_2);
    ppuVar5 = ppuStack_78;
    if (ppuStack_70 == (undefined8 **)0x0) goto LAB_10a176a10;
    ppuVar5 = ppuStack_70 + 1;
    do {
      puVar11 = *ppuVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
      if (bVar4) {
        *ppuVar5 = (undefined8 *)((long)puVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
      ppuVar6 = ppuStack_70;
    } while (cVar3 != '\0');
  }
  ppuVar5 = ppuStack_78;
  if (puVar11 == (undefined8 *)0x0) {
    (*(code *)(*ppuVar6)[2])(ppuVar6);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppuVar5 = ppuVar6;
  }
LAB_10a176a10:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a061678(auStack_98);
  ppuVar7 = ppuVar5;
  __Unwind_Resume(ppuVar5);
  pcStack_a8 = FUN_10a176a64;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_c0 = param_2;
  ppuStack_b8 = ppuVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  FUN_10a19943c(&puStack_108,&uStack_109,&uStack_121,ppuVar7,pppuVar9);
  FUN_10a05b04c(&uStack_120,&puStack_108);
  if (ppuStack_100 != (undefined **)0x0) {
    ppuVar14 = ppuStack_100 + 1;
    do {
      puVar13 = *ppuVar14;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar4) {
        *ppuVar14 = puVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar13 == (undefined *)0x0) {
      (**(code **)(*ppuStack_100 + 0x10))(ppuStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_100);
    }
  }
  if (pppuStack_118 == (undefined ***)0x0) {
    *extraout_x8 = uStack_120;
    extraout_x8[1] = 0;
  }
  else {
    pppuVar8 = pppuStack_118 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
      if (bVar4) {
        *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *extraout_x8 = uStack_120;
    extraout_x8[1] = pppuStack_118;
    if (pppuStack_118 != (undefined ***)0x0) {
      pppuVar8 = pppuStack_118 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
        if (bVar4) {
          *pppuVar8 = (undefined **)((long)*pppuVar8 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  pppuVar8 = &ppuStack_100;
  extraout_x8[2] = FUN_10a199598;
  extraout_x8[3] = &PTR_DAT_110ba9f60;
  extraout_x8[4] = uStack_120;
  extraout_x8[5] = pppuStack_118;
  uStack_f0 = 0;
  uStack_f8 = 0;
  puStack_108 = &UNK_1053a6a3c;
  ppuStack_100 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_108);
  (*(code *)*ppuStack_100)();
  if (pppuStack_118 != (undefined ***)0x0) {
    pppuVar2 = pppuStack_118 + 1;
    do {
      ppuVar14 = *pppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
      if (bVar4) {
        *pppuVar2 = (undefined **)((long)ppuVar14 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppuVar14 == (undefined **)0x0) {
      (*(code *)(*pppuStack_118)[2])(pppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar8 = pppuStack_118;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&puStack_108);
  __Unwind_Resume();
  ppuVar14 = pppuVar8[0x4d];
  if ((ppuVar14 == (undefined **)0x0) ||
     (___dynamic_cast(ppuVar14,&PTR_DAT_110bb3788,&PTR_DAT_110bb2d18,0),
     ppuVar14 == (undefined **)0x0)) {
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
  }
  else {
    ppuVar10 = pppuVar8[0x4e];
    *extraout_x8_00 = ppuVar14;
    extraout_x8_00[1] = ppuVar10;
    if (ppuVar10 != (undefined **)0x0) {
      ppuVar10 = ppuVar10 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar10,0x10);
        if (bVar4) {
          *ppuVar10 = *ppuVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return;
}



/* Entry: 10a176a64; end: 10a176c4b;  */

/* WARNING: Removing unreachable block (ram,0x00010a176b78) */
/* WARNING: Removing unreachable block (ram,0x00010a176b7c) */
/* WARNING: Removing unreachable block (ram,0x00010a176b84) */
/* WARNING: Removing unreachable block (ram,0x00010a176b8c) */
/* WARNING: Removing unreachable block (ram,0x00010a176b90) */

void FUN_10a176a64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined8 *extraout_x8;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined ***pppuStack_78;
  undefined1 uStack_69;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a19943c(&puStack_68,&uStack_69,&uStack_81,param_2,param_3);
  FUN_10a05b04c(&uStack_80,&puStack_68);
  if (ppuStack_60 != (undefined **)0x0) {
    ppuVar7 = ppuStack_60 + 1;
    do {
      puVar6 = *ppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar7,0x10);
      if (bVar3) {
        *ppuVar7 = puVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(*ppuStack_60 + 0x10))(ppuStack_60);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_60);
    }
  }
  if (pppuStack_78 == (undefined ***)0x0) {
    *param_1 = uStack_80;
    param_1[1] = 0;
  }
  else {
    pppuVar4 = pppuStack_78 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
      if (bVar3) {
        *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *param_1 = uStack_80;
    param_1[1] = pppuStack_78;
    if (pppuStack_78 != (undefined ***)0x0) {
      pppuVar4 = pppuStack_78 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar4,0x10);
        if (bVar3) {
          *pppuVar4 = (undefined **)((long)*pppuVar4 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  pppuVar4 = &ppuStack_60;
  param_1[2] = FUN_10a199598;
  param_1[3] = &PTR_DAT_110ba9f60;
  param_1[4] = uStack_80;
  param_1[5] = pppuStack_78;
  uStack_50 = 0;
  uStack_58 = 0;
  puStack_68 = &UNK_1053a6a3c;
  ppuStack_60 = &PTR_DAT_110ae9180;
  FUN_10a044790(&puStack_68);
  (*(code *)*ppuStack_60)();
  if (pppuStack_78 != (undefined ***)0x0) {
    pppuVar1 = pppuStack_78 + 1;
    do {
      ppuVar7 = *pppuVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
      if (bVar3) {
        *pppuVar1 = (undefined **)((long)ppuVar7 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (ppuVar7 == (undefined **)0x0) {
      (*(code *)(*pppuStack_78)[2])(pppuStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppuVar4 = pppuStack_78;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a05248c(&puStack_68);
  __Unwind_Resume();
  ppuVar7 = pppuVar4[0x4d];
  if ((ppuVar7 == (undefined **)0x0) ||
     (___dynamic_cast(ppuVar7,&PTR_DAT_110bb3788,&PTR_DAT_110bb2d18,0), ppuVar7 == (undefined **)0x0
     )) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
  }
  else {
    ppuVar5 = pppuVar4[0x4e];
    *extraout_x8 = ppuVar7;
    extraout_x8[1] = ppuVar5;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar5 = ppuVar5 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppuVar5,0x10);
        if (bVar3) {
          *ppuVar5 = *ppuVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}



/* Entry: 10a176c4c; end: 10a176cb7;  */

void FUN_10a176c4c(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_2 + 0x268);
  if ((lVar4 == 0) || (___dynamic_cast(lVar4,&PTR_DAT_110bb3788,&PTR_DAT_110bb2d18,0), lVar4 == 0))
  {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x270);
    *param_1 = lVar4;
    param_1[1] = lVar5;
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
    }
  }
  return;
}



/* Entry: 10a176cb8; end: 10a177033;  */

void FUN_10a176cb8(long param_1,undefined8 *param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar15;
  undefined8 uVar14;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar20;
  short sStack_7a;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uVar19;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = (long *)(param_1 + 0x30);
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  uVar11 = (long)puVar2 - *plVar4;
  sStack_7a = (short)(uVar11 >> 3);
  uVar18 = NEON_rev64(*(undefined8 *)((long)param_2 + 4),4);
  fVar13 = (float)*(undefined8 *)(param_1 + 0x28);
  fVar16 = (float)uVar18 / fVar13;
  fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  fVar20 = (float)((ulong)uVar18 >> 0x20) / fVar15;
  uVar18 = NEON_fmov(0xbf800000,4);
  fVar17 = fVar16 + fVar16 + (float)uVar18;
  fVar16 = (float)((ulong)uVar18 >> 0x20);
  fVar20 = fVar20 + fVar20 + fVar16;
  uVar19 = CONCAT44(fVar20,fVar17);
  fVar13 = (float)*param_2 / fVar13;
  fVar15 = *(float *)((long)param_2 + 0xc) / fVar15;
  fVar13 = fVar13 + fVar13 + (float)uVar18;
  fVar16 = fVar15 + fVar15 + fVar16;
  uVar14 = CONCAT44(fVar16,fVar13);
  uVar18 = CONCAT44(fVar20,fVar13);
  uVar12 = CONCAT44(fVar16,fVar17);
  if (*(long *)(param_1 + 0x40) - (long)puVar2 < 0x20) {
    uVar8 = ((long)uVar11 >> 3) + 4;
    if (uVar8 >> 0x3d == 0) {
      uVar6 = *(long *)(param_1 + 0x40) - *plVar4;
      uVar7 = (long)uVar6 >> 2;
      if (uVar7 <= uVar8) {
        uVar7 = uVar8;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar7 = 0x1fffffffffffffff;
      }
      if (uVar7 == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        FUN_10a05083c();
      }
      puVar1 = (undefined8 *)((long)plVar4 + uVar11);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar1[2] = uVar12;
      puVar1[3] = uVar14;
      _memcpy(puVar1 + 4,puVar2,*(long *)(param_1 + 0x38) - (long)puVar2);
      lVar9 = *(long *)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = puVar2;
      lVar10 = (long)puVar1 - ((long)puVar2 - *(long *)(param_1 + 0x30));
      _memcpy(lVar10);
      lVar5 = *(long *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar10;
      *(long *)(param_1 + 0x38) = (long)(puVar1 + 4) + (lVar9 - (long)puVar2);
      *(long **)(param_1 + 0x40) = plVar4 + uVar7;
      if (lVar5 != 0) {
        __ZdlPv();
      }
      goto LAB_10a176e24;
    }
  }
  else {
    *puVar2 = uVar18;
    puVar2[1] = uVar19;
    puVar2[2] = uVar12;
    puVar2[3] = uVar14;
    *(undefined8 **)(param_1 + 0x38) = puVar2 + 4;
LAB_10a176e24:
    FUN_10a14f474(param_1 + 0x60,&sStack_7a);
    uStack_78._0_2_ = sStack_7a + 1;
    FUN_10a14f5d0(param_1 + 0x60,&uStack_78);
    uStack_78._0_2_ = sStack_7a + 2;
    FUN_10a14f5d0(param_1 + 0x60,&uStack_78);
    FUN_10a14f474(param_1 + 0x60,&sStack_7a);
    uStack_78._0_2_ = sStack_7a + 2;
    FUN_10a14f5d0(param_1 + 0x60,&uStack_78);
    uStack_78 = CONCAT62(uStack_78._2_6_,sStack_7a + 3);
    FUN_10a14f5d0(param_1 + 0x60,&uStack_78);
    fVar13 = (float)*param_4 / *(float *)(param_1 + 0x20);
    fVar15 = (float)param_4[3] / *(float *)(param_1 + 0x24);
    fVar16 = (float)param_4[2] / *(float *)(param_1 + 0x20);
    uStack_70 = CONCAT44(fVar15,fVar16);
    uVar18 = CONCAT44(fVar15,fVar13);
    fVar15 = (float)param_4[1] / *(float *)(param_1 + 0x24);
    uStack_60 = CONCAT44(fVar15,fVar13);
    uVar12 = CONCAT44(fVar15,fVar16);
    uStack_78 = uVar18;
    uStack_68 = uVar12;
    if (*param_3 == 1) {
      uStack_68 = uStack_70;
      uStack_78 = uStack_60;
      uStack_70 = uVar18;
      uStack_60 = uVar12;
    }
    plVar4 = (long *)(param_1 + 0x48);
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    if (*(long *)(param_1 + 0x58) - (long)puVar2 < 0x20) {
      lVar9 = (long)puVar2 - *plVar4;
      uVar11 = (lVar9 >> 3) + 4;
      if (uVar11 >> 0x3d != 0) goto LAB_10a177028;
      uVar7 = *(long *)(param_1 + 0x58) - *plVar4;
      uVar8 = (long)uVar7 >> 2;
      if (uVar8 <= uVar11) {
        uVar8 = uVar11;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        FUN_10a05083c();
      }
      puVar1 = (undefined8 *)((long)plVar4 + lVar9);
      puVar1[1] = uStack_70;
      *puVar1 = uStack_78;
      puVar1[3] = uStack_60;
      puVar1[2] = uStack_68;
      _memcpy(puVar1 + 4,puVar2,*(long *)(param_1 + 0x50) - (long)puVar2);
      lVar9 = *(long *)(param_1 + 0x50);
      *(undefined8 **)(param_1 + 0x50) = puVar2;
      lVar10 = (long)puVar1 - ((long)puVar2 - *(long *)(param_1 + 0x48));
      _memcpy(lVar10);
      lVar5 = *(long *)(param_1 + 0x48);
      *(long *)(param_1 + 0x48) = lVar10;
      *(long *)(param_1 + 0x50) = (long)(puVar1 + 4) + (lVar9 - (long)puVar2);
      *(long **)(param_1 + 0x58) = plVar4 + uVar8;
      if (lVar5 != 0) {
        __ZdlPv();
      }
    }
    else {
      puVar2[1] = uStack_70;
      *puVar2 = uStack_78;
      puVar2[3] = uStack_60;
      puVar2[2] = uStack_68;
      *(undefined8 **)(param_1 + 0x50) = puVar2 + 4;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a050828();
LAB_10a177028:
  FUN_10a050828();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a177030);
  (*pcVar3)();
}



/* Entry: 10a177034; end: 10a17756f;  */

void FUN_10a177034(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  long *plStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long **pplStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [2];
  undefined8 uStack_78;
  char cStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x30)) {
LAB_10a177488:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    puVar9 = &uStack_c0;
    FUN_10a0d0194(&lStack_d8);
    FUN_10ab6e898();
    if (*(char *)((long)puVar9 + 0x17) < '\0') {
      puVar14 = &uStack_c0;
      func_0x000107c3192c(puVar14,*puVar9,puVar9[1]);
    }
    else {
      uStack_b8 = puVar9[1];
      uStack_c0 = *puVar9;
      uStack_b0 = puVar9[2];
      puVar14 = puVar9;
    }
    uStack_a8 = puVar9[3];
    uStack_98 = puVar9[5];
    uStack_a0 = puVar9[4];
    uStack_90 = CONCAT44(uStack_90._4_4_,*(undefined4 *)(puVar9 + 6));
    FUN_10ab6f020();
    if (*(char *)((long)puVar14 + 0x17) < '\0') {
      func_0x000107c3192c(auStack_88,*puVar14,puVar14[1]);
    }
    else {
      uStack_78 = puVar14[2];
      auStack_88[1] = puVar14[1];
      auStack_88[0] = *puVar14;
    }
    uStack_70 = puVar14[3];
    uStack_60 = puVar14[5];
    uStack_68 = puVar14[4];
    uStack_58 = *(undefined4 *)(puVar14 + 6);
    FUN_10ab6f520(&uStack_120,&uStack_c0,2);
    lVar17 = lStack_d8;
    *(undefined4 *)(lStack_d8 + 0xf0) = uStack_120;
    if ((undefined4 *)(lStack_d8 + 0xf0) != &uStack_120) {
      FUN_10a1903c4(lStack_d8 + 0xf8,plStack_118,lStack_110,
                    (lStack_110 - (long)plStack_118 >> 3) * 0x6db6db6db6db6db7);
    }
    *(undefined8 *)(lVar17 + 0x118) = uStack_f8;
    *(undefined8 *)(lVar17 + 0x110) = uStack_100;
    *(undefined8 *)(lVar17 + 0x128) = uStack_e8;
    *(undefined8 *)(lVar17 + 0x120) = uStack_f0;
    *(undefined8 *)(lVar17 + 0x130) = uStack_e0;
    pplStack_c8 = &plStack_118;
    func_0x00010a190844(&pplStack_c8);
    lVar17 = 0;
    do {
      if ((&cStack_71)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_88 + lVar17));
      }
      lVar17 = lVar17 + -0x38;
    } while (lVar17 != -0x70);
    *(undefined8 *)(lStack_d8 + 0xe8) = 1;
    uStack_c0 = 0;
    FUN_10a1995d0(&uStack_120,&pplStack_c8,&uStack_c0,&lStack_d8);
    plVar7 = (long *)CONCAT44(uStack_11c,uStack_120);
    if (*(char *)((long)plVar7 + 0xb9) != '\x01') {
      *(undefined1 *)((long)plVar7 + 0xb9) = 1;
      (**(code **)(*plVar7 + 0xa0))();
      plVar7 = (long *)CONCAT44(uStack_11c,uStack_120);
    }
    if (*(char *)((long)plVar7 + 0xba) != '\x01') {
      *(undefined1 *)((long)plVar7 + 0xba) = 1;
      (**(code **)(*plVar7 + 0xa0))();
    }
    FUN_10ab4a154(lStack_d8,*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30) >> 3);
    FUN_10ab4cb54(lStack_d8,*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 1);
    uVar3 = *(uint *)(lStack_d8 + 0x110);
    if (uVar3 == 0xffffffff) {
      lVar17 = 0;
LAB_10a177288:
      uVar3 = *(uint *)(lStack_d8 + 0x120);
      if (uVar3 == 0xffffffff) {
        lVar13 = 0;
      }
      else {
        uVar12 = (*(long *)(lStack_d8 + 0x100) - *(long *)(lStack_d8 + 0xf8) >> 3) *
                 0x6db6db6db6db6db7;
        if (uVar12 < uVar3 || uVar12 - uVar3 == 0) {
          FUN_10ab725fc();
          goto LAB_10a1774c8;
        }
        lVar13 = *(long *)(lStack_d8 + 0xf8) + (ulong)uVar3 * 0x38;
      }
      uVar3 = *(int *)(lVar17 + 0x24) - 1;
      if (uVar3 < 7) {
        iVar11 = *(int *)(&UNK_10e49b01c + (ulong)uVar3 * 4);
      }
      else {
        iVar11 = 0;
      }
      if (*(int *)(lVar17 + 0x28) * iVar11 == 8) {
        puVar9 = (undefined8 *)(*(long *)(lStack_d8 + 0x10) + (ulong)*(uint *)(lVar17 + 0x30));
        uVar12 = (ulong)*(uint *)(lStack_d8 + 0xf0);
      }
      else {
        puVar9 = (undefined8 *)0x0;
        uVar12 = 0;
      }
      uVar3 = *(int *)(lVar13 + 0x24) - 1;
      if (uVar3 < 7) {
        iVar11 = *(int *)(&UNK_10e49b01c + (ulong)uVar3 * 4);
      }
      else {
        iVar11 = 0;
      }
      if (*(int *)(lVar13 + 0x28) * iVar11 == 8) {
        puVar14 = (undefined8 *)(*(long *)(lStack_d8 + 0x10) + (ulong)*(uint *)(lVar13 + 0x30));
        uVar15 = (ulong)*(uint *)(lStack_d8 + 0xf0);
      }
      else {
        puVar14 = (undefined8 *)0x0;
        uVar15 = 0;
      }
      puVar8 = *(undefined2 **)(lStack_d8 + 0x28);
      puVar1 = *(undefined8 **)(param_1 + 0x38);
      for (puVar16 = *(undefined8 **)(param_1 + 0x30); puVar16 != puVar1; puVar16 = puVar16 + 1) {
        *puVar9 = *puVar16;
        puVar9 = (undefined8 *)((long)puVar9 + uVar12);
      }
      puVar16 = *(undefined8 **)(param_1 + 0x50);
      for (puVar9 = *(undefined8 **)(param_1 + 0x48); puVar9 != puVar16; puVar9 = puVar9 + 1) {
        *puVar14 = *puVar9;
        puVar14 = (undefined8 *)((long)puVar14 + uVar15);
      }
      puVar2 = *(undefined2 **)(param_1 + 0x68);
      for (puVar10 = *(undefined2 **)(param_1 + 0x60); puVar10 != puVar2; puVar10 = puVar10 + 1) {
        *puVar8 = *puVar10;
        puVar8 = puVar8 + 1;
      }
      FUN_10ac645fc(CONCAT44(uStack_11c,uStack_120),&lStack_d8);
      plVar7 = param_2 + 4;
      FUN_10a5dfd94(plVar7,*(undefined8 *)(param_1 + 0x10));
      uStack_b8 = 0;
      uStack_c0 = 0x3f800000;
      uStack_a8 = 0;
      uStack_b0 = 0x3f80000000000000;
      uStack_98 = 0x3f800000;
      uStack_a0 = 0;
      auStack_88[0] = 0x3f80000000000000;
      uStack_90 = 0;
      (**(code **)(*param_2 + 0x58))(param_2,CONCAT44(uStack_11c,uStack_120),plVar7,&uStack_c0,3);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
      if (plStack_118 != (long *)0x0) {
        plVar7 = plStack_118 + 1;
        do {
          lVar17 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_118 + 0x10))(plStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_118);
        }
      }
      if (plStack_d0 != (long *)0x0) {
        plVar7 = plStack_d0 + 1;
        do {
          lVar17 = *plVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar5) {
            *plVar7 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d0);
        }
      }
      goto LAB_10a177488;
    }
    uVar12 = (*(long *)(lStack_d8 + 0x100) - *(long *)(lStack_d8 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar3 <= uVar12 && uVar12 - uVar3 != 0) {
      lVar17 = *(long *)(lStack_d8 + 0xf8) + (ulong)uVar3 * 0x38;
      goto LAB_10a177288;
    }
  }
  FUN_10ab725fc();
LAB_10a1774c8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1774cc);
  (*pcVar6)();
}



/* Entry: 10a177570; end: 10a1775db;  */

undefined4 * FUN_10a177570(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    FUN_10a1903c4(param_1 + 2,*(long *)(param_2 + 2),*(long *)(param_2 + 4),
                  (*(long *)(param_2 + 4) - *(long *)(param_2 + 2) >> 3) * 0x6db6db6db6db6db7);
  }
  uVar2 = *(undefined8 *)(param_2 + 10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0xe);
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  return param_1;
}



/* Entry: 10a1775dc; end: 10a177b83;  */

/* WARNING: Removing unreachable block (ram,0x00010a17775c) */
/* WARNING: Removing unreachable block (ram,0x00010a1776c8) */
/* WARNING: Removing unreachable block (ram,0x00010a1776dc) */
/* WARNING: Removing unreachable block (ram,0x00010a17790c) */

long **** FUN_10a1775dc(long ****param_1,long ****param_2)

{
  char cVar1;
  code *pcVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  int iVar5;
  long ****pppplVar6;
  undefined8 *extraout_x8;
  long ****extraout_x8_00;
  long ****pppplVar7;
  long ***ppplVar8;
  long ***ppplStack_1a8;
  long ***ppplStack_1a0;
  undefined8 uStack_198;
  long **pplStack_148;
  long ***ppplStack_140;
  undefined1 uStack_131;
  long ***ppplStack_130;
  long ***ppplStack_128;
  undefined8 uStack_120;
  long ***ppplStack_110;
  long ***ppplStack_108;
  undefined8 uStack_100;
  long ***ppplStack_f0;
  long **pplStack_e8;
  long **pplStack_e0;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  undefined **ppuStack_c0;
  int aiStack_b8 [2];
  long ***ppplStack_b0;
  long **pplStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppplVar8 = param_1[1];
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    ppplVar8 = (long ***)(ulong)*(byte *)((long)param_1 + 0x17);
  }
  if (ppplVar8 == (long ***)0x0) {
    pppplVar7 = (long ****)0x0;
    pppplVar4 = param_1;
    pppplVar6 = param_2;
    goto LAB_10a177914;
  }
  pppplVar6 = param_2;
  __ZNKSt3__14__fs10filesystem4path13__parent_pathEv(param_2);
  if (pppplVar6 == (long ****)0x0) {
    pplStack_a8 = (long **)0x0;
    uStack_a0 = 0;
    uStack_98 = 0;
    pppplVar7 = (long ****)&pplStack_a8;
    FUN_10a09cc04(pppplVar7,&DAT_10f62a9de,&UNK_10f62a9df);
  }
  else {
    pppplVar7 = param_2;
    FUN_10a177b84(&pplStack_a8);
  }
  aiStack_b8[0] = 0;
  __ZNSt3__115system_categoryEv();
  pppplVar4 = (long ****)&pplStack_a8;
  pppplVar6 = (long ****)aiStack_b8;
  ppplStack_b0 = (long ***)pppplVar7;
  __ZNSt3__14__fs10filesystem20__create_directoriesERKNS1_4pathEPNS_10error_codeE();
  if (aiStack_b8[0] == 0) {
    ppplStack_f0 = (long ***)0x0;
    pplStack_e8 = (long **)0x0;
    pplStack_e0 = (long **)0x0;
    FUN_10a177c38(&ppplStack_90,&pplStack_a8,&ppplStack_f0);
    ppplStack_c8 = ppplStack_88;
    ppplStack_d0 = ppplStack_90;
    ppuStack_c0 = ppuStack_80;
    if ((long)pplStack_e0 < 0) {
      __ZdlPv(ppplStack_f0);
    }
    FUN_10a177ca8(&ppplStack_110,param_2);
    if ((long)uStack_100 < 0) {
      func_0x000107c3192c(&ppplStack_90,ppplStack_110,ppplStack_108);
    }
    else {
      ppplStack_88 = ppplStack_108;
      ppplStack_90 = ppplStack_110;
      ppuStack_80 = uStack_100;
    }
    pppplVar6 = &ppplStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppplVar6,&UNK_10f601c89,6);
    pplStack_e8 = (long **)pppplVar6[1];
    ppplStack_f0 = *pppplVar6;
    pplStack_e0 = (long **)pppplVar6[2];
    pppplVar6[1] = (long ***)0x0;
    pppplVar6[2] = (long ***)0x0;
    *pppplVar6 = (long ***)0x0;
    if (uStack_100._7_1_ < '\0') {
      __ZdlPv(ppplStack_110);
    }
    func_0x000107c2b054(&ppplStack_130,&DAT_10f5893b4);
    FUN_10ad0173c(&ppplStack_90,&ppplStack_d0,&ppplStack_f0,&ppplStack_130);
    ppplStack_108 = ppplStack_88;
    ppplStack_110 = ppplStack_90;
    uStack_100 = ppuStack_80;
    ppplStack_88 = (long ***)0x0;
    ppuStack_80 = (undefined **)0x0;
    ppplStack_90 = (long ***)0x0;
    if ((long)uStack_120 < 0) {
      __ZdlPv(ppplStack_130);
    }
    uStack_131 = 0;
    pplStack_148 = (long **)&uStack_131;
    ppplStack_140 = (long ***)&ppplStack_110;
    if ((long)uStack_100 < 0) {
      func_0x000107c3192c(&ppplStack_130,ppplStack_110,ppplStack_108);
    }
    else {
      ppplStack_128 = ppplStack_108;
      ppplStack_130 = ppplStack_110;
      uStack_120 = uStack_100;
    }
    if ((long)uStack_120._7_1_ < 0) {
      pppplVar6 = (long ****)ppplStack_130;
      pppplVar4 = (long ****)ppplStack_128;
      if ((long)ppplStack_128 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a17794c);
        (*pcVar2)();
      }
    }
    else {
      pppplVar6 = &ppplStack_130;
      pppplVar4 = (long ****)(long)uStack_120._7_1_;
    }
    func_0x00010b0adfa4(pppplVar6,pppplVar4,5);
    ppplStack_88 = (long ***)&UNK_1092bf448;
    ppuStack_80 = &PTR_DAT_110ae93c0;
    puStack_78 = PTR__fclose_11034c270;
    ppplStack_90 = (long ***)pppplVar6;
    if ((long)uStack_120 < 0) {
      __ZdlPv(ppplStack_130);
    }
    cVar1 = *(char *)((long)param_1 + 0x17);
    pppplVar6 = (long ****)*param_1;
    if (-1 < (long)cVar1) {
      pppplVar6 = param_1;
    }
    ppplVar8 = param_1[1];
    if (-1 < cVar1) {
      ppplVar8 = (long ***)(long)cVar1;
    }
    pppplVar3 = &ppplStack_90;
    func_0x00010b0ae0b0(pppplVar3,pppplVar6,ppplVar8);
    pppplVar4 = (long ****)param_1[1];
    if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
      pppplVar4 = (long ****)(ulong)*(byte *)((long)param_1 + 0x17);
    }
    FUN_10a09a0e4(&ppplStack_90);
    if (pppplVar4 == pppplVar3) {
      ppplStack_90 = (long ***)((ulong)ppplStack_90 & 0xffffffff00000000);
      ppplStack_88 = (long ***)pppplVar7;
      __ZNSt3__14__fs10filesystem8__renameERKNS1_4pathES4_PNS_10error_codeE
                (&ppplStack_110,param_2,&ppplStack_90);
      pppplVar7 = (long ****)(ulong)((int)ppplStack_90 == 0);
      pppplVar6 = param_2;
      if ((int)ppplStack_90 == 0) {
        uStack_131 = 1;
      }
    }
    else {
      pppplVar7 = (long ****)0x0;
    }
    pppplVar4 = (long ****)&pplStack_148;
    FUN_10a177d5c();
    if ((long)uStack_100 < 0) {
      pppplVar4 = (long ****)ppplStack_110;
      __ZdlPv();
    }
    if ((long)pplStack_e0 < 0) {
      pppplVar4 = (long ****)ppplStack_f0;
      __ZdlPv();
    }
    if (-1 < (long)ppuStack_c0) goto LAB_10a177914;
    pppplVar4 = (long ****)ppplStack_d0;
    __ZdlPv();
    goto LAB_10a177914;
  }
  while( true ) {
    pppplVar7 = (long ****)0x0;
LAB_10a177914:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return pppplVar7;
    }
    ___stack_chk_fail();
    iVar5 = (int)pppplVar6;
    if (iVar5 == 0) break;
    FUN_10a177d5c(&pplStack_148);
    if ((long)uStack_100 < 0) {
      __ZdlPv(ppplStack_110);
    }
    if ((long)pplStack_e0 < 0) {
      __ZdlPv(ppplStack_f0);
    }
    if ((long)ppuStack_c0 < 0) {
      __ZdlPv(ppplStack_d0);
    }
    if (iVar5 == 3) {
      ___cxa_begin_catch();
      if ((bRam000000011330a9e8 & 1) != 0) {
        (*(code *)(*pppplVar4)[2])();
        pppplVar4 = (long ****)0x0;
        pppplVar6 = (long ****)0x1;
        func_0x00010ae06f08(0,1,&UNK_10f6402a3,&UNK_10f640351,0x58,"%s");
      }
      ___cxa_end_catch();
    }
    else {
      ___cxa_begin_catch();
      if (iVar5 == 2) {
        if ((bRam000000011330a9e8 & 1) != 0) {
          (*(code *)(*pppplVar4)[2])();
          pppplVar4 = (long ****)0x0;
          pppplVar6 = (long ****)0x1;
          func_0x00010ae06f08(0,1,&UNK_10f6402a3,&UNK_10f640351,0x5a,"%s");
        }
        ___cxa_end_catch();
      }
      else {
        ___cxa_end_catch();
      }
    }
  }
  __Unwind_Resume();
  __ZNKSt3__14__fs10filesystem4path13__parent_pathEv();
  if ((long ****)0x7ffffffffffffff7 < pppplVar6) {
    func_0x000109ffde50();
    if (*(char *)((long)pppplVar4 + 0x17) < '\0') {
      func_0x000107c3192c(extraout_x8_00,*pppplVar4,pppplVar4[1]);
    }
    else {
      ppplVar8 = *pppplVar4;
      extraout_x8_00[1] = pppplVar4[1];
      *extraout_x8_00 = ppplVar8;
      extraout_x8_00[2] = pppplVar4[2];
    }
    pppplVar4 = extraout_x8_00;
    FUN_10a096fb0(extraout_x8_00,pppplVar6);
    return pppplVar4;
  }
  if (pppplVar6 < (long ****)0x17) {
    uStack_198 = CONCAT17((char)pppplVar6,(undefined7)uStack_198);
    pppplVar3 = &ppplStack_1a8;
    if (pppplVar6 == (long ****)0x0) goto LAB_10a177c08;
  }
  else {
    pppplVar7 = (long ****)0x19;
    if (((ulong)pppplVar6 | 7) != 0x17) {
      pppplVar7 = (long ****)(((ulong)pppplVar6 | 7) + 1);
    }
    pppplVar3 = pppplVar7;
    __Znwm();
    uStack_198 = (ulong)pppplVar7 | 0x8000000000000000;
    ppplStack_1a8 = (long ***)pppplVar3;
    ppplStack_1a0 = (long ***)pppplVar6;
  }
  pppplVar7 = pppplVar3;
  _memmove(pppplVar3,pppplVar4,pppplVar6);
  pppplVar4 = pppplVar7;
LAB_10a177c08:
  *(undefined1 *)((long)pppplVar3 + (long)pppplVar6) = 0;
  extraout_x8[1] = ppplStack_1a0;
  *extraout_x8 = ppplStack_1a8;
  extraout_x8[2] = uStack_198;
  return pppplVar4;
}



/* Entry: 10a177b84; end: 10a177c37;  */

void FUN_10a177b84(ulong *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 *extraout_x8;
  undefined8 uVar3;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  __ZNKSt3__14__fs10filesystem4path13__parent_pathEv();
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(extraout_x8,*param_2,param_2[1]);
    }
    else {
      uVar3 = *param_2;
      extraout_x8[1] = param_2[1];
      *extraout_x8 = uVar3;
      extraout_x8[2] = param_2[2];
    }
    FUN_10a096fb0(extraout_x8,param_3);
    return;
  }
  if (param_3 < 0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    pppuVar2 = &ppuStack_58;
    if (param_3 == 0) goto LAB_10a177c08;
  }
  else {
    pppuVar1 = (undefined8 ***)0x19;
    if ((param_3 | 7) != 0x17) {
      pppuVar1 = (undefined8 ***)((param_3 | 7) + 1);
    }
    pppuVar2 = pppuVar1;
    __Znwm();
    uStack_48 = (ulong)pppuVar1 | 0x8000000000000000;
    ppuStack_58 = pppuVar2;
    uStack_50 = param_3;
  }
  _memmove(pppuVar2,param_2,param_3);
LAB_10a177c08:
  *(undefined1 *)((long)pppuVar2 + param_3) = 0;
  param_1[1] = uStack_50;
  *param_1 = (ulong)ppuStack_58;
  param_1[2] = uStack_48;
  return;
}



/* Entry: 10a177c38; end: 10a177ca7;  */

void FUN_10a177c38(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
  }
  FUN_10a096fb0(param_1,param_3);
  return;
}



/* Entry: 10a177ca8; end: 10a177d5b;  */

undefined8 **** FUN_10a177ca8(ulong *param_1,undefined8 ****param_2,ulong param_3)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***pppuVar3;
  undefined4 auStack_90 [2];
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  __ZNKSt3__14__fs10filesystem4path10__filenameEv();
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
    if (((ulong)**param_2 & 1) == 0) {
      pppuVar3 = param_2[1];
      if (*(char *)((long)pppuVar3 + 0x17) < '\0') {
        if (pppuVar3[1] == (undefined8 **)0x0) {
          return param_2;
        }
      }
      else if (*(char *)((long)pppuVar3 + 0x17) == '\0') {
        return param_2;
      }
      auStack_90[0] = 0;
      ppppuVar2 = param_2;
      __ZNSt3__115system_categoryEv();
      pppuStack_88 = ppppuVar2;
      __ZNSt3__14__fs10filesystem8__removeERKNS1_4pathEPNS_10error_codeE(pppuVar3,auStack_90);
    }
    return param_2;
  }
  if (param_3 < 0x17) {
    uStack_48 = CONCAT17((char)param_3,(undefined7)uStack_48);
    ppppuVar1 = &pppuStack_58;
    if (param_3 == 0) goto LAB_10a177d2c;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((param_3 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((param_3 | 7) + 1);
    }
    ppppuVar1 = ppppuVar2;
    __Znwm();
    uStack_48 = (ulong)ppppuVar2 | 0x8000000000000000;
    pppuStack_58 = ppppuVar1;
    uStack_50 = param_3;
  }
  ppppuVar2 = ppppuVar1;
  _memmove(ppppuVar1,param_2,param_3);
  param_2 = ppppuVar2;
LAB_10a177d2c:
  *(undefined1 *)((long)ppppuVar1 + param_3) = 0;
  param_1[1] = uStack_50;
  *param_1 = (ulong)pppuStack_58;
  param_1[2] = uStack_48;
  return param_2;
}



/* Entry: 10a177d5c; end: 10a177dc7;  */

undefined8 * FUN_10a177d5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 auStack_30 [2];
  undefined8 *puStack_28;
  
  if ((*(byte *)*param_1 & 1) == 0) {
    lVar2 = param_1[1];
    if (*(char *)(lVar2 + 0x17) < '\0') {
      if (*(long *)(lVar2 + 8) == 0) {
        return param_1;
      }
    }
    else if (*(char *)(lVar2 + 0x17) == '\0') {
      return param_1;
    }
    auStack_30[0] = 0;
    puVar1 = param_1;
    __ZNSt3__115system_categoryEv();
    puStack_28 = puVar1;
    __ZNSt3__14__fs10filesystem8__removeERKNS1_4pathEPNS_10error_codeE(lVar2,auStack_30);
  }
  return param_1;
}



/* Entry: 10a177dc8; end: 10a177ddb;  */

int FUN_10a177dc8(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 - 1U & 0xf8) == 0) {
    iVar1 = (param_1 - 1U & 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 10a177ddc; end: 10a177f2f;  */

undefined8 * FUN_10a177ddc(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long lVar9;
  long unaff_x23;
  long unaff_x24;
  undefined8 *puVar10;
  undefined8 *unaff_x25;
  byte *pbVar11;
  ulong unaff_x26;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  byte bStack_61;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (uint)param_3;
  if (uVar5 - 0x41 < 0xffffffc0 || (uVar5 + 0x7f & uVar5) != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar7 = param_2;
    param_2 = unaff_x21;
  }
  else {
    uStack_60 = uStack_60 & 0xffffffffffffff00;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    param_3 = (byte *)&uStack_60;
    puVar7 = param_1;
    FUN_10a190884(param_1,param_3,(long)&uStack_60 + 1,1);
    if (param_2 != (undefined8 *)0x0) {
      unaff_x23 = 0;
      uStack_60 = 0x807060504030201;
      unaff_x24 = (long)param_2 + 0x7a4;
      unaff_x25 = &uStack_60;
      do {
        bStack_61 = *(byte *)((long)unaff_x25 + unaff_x23);
        unaff_x22 = (undefined8 *)(ulong)bStack_61;
        FUN_10a177dc8();
        uVar2 = *(uint *)(param_2 + 3);
        unaff_x26 = (ulong)uVar2;
        puVar7 = unaff_x22;
        func_0x00010922e6d8();
        if (((int)unaff_x22 == 0 || ((uint)puVar7 & uVar2) == (uint)puVar7) &&
           ((uVar5 == 1 ||
            ((*(uint *)(unaff_x24 + ((ulong)unaff_x22 & 0xffffffff) * 4) & uVar5) != 0)))) {
          param_3 = &bStack_61;
          puVar7 = param_1;
          FUN_10a177f30();
        }
        unaff_x23 = unaff_x23 + 1;
      } while (unaff_x23 != 8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar3 = puVar7;
  __Unwind_Resume();
  pcStack_78 = FUN_10a177f30;
  ppuStack_d0 = &puStack_80;
  pbVar1 = (byte *)puVar3[1];
  if (pbVar1 < (byte *)puVar3[2]) {
    pbVar11 = pbVar1 + 1;
    *pbVar1 = *param_3;
    puVar4 = puVar3;
  }
  else {
    puVar8 = (undefined8 *)*puVar3;
    lVar9 = (long)pbVar1 - (long)puVar8;
    puVar10 = (undefined8 *)(lVar9 + 1);
    uStack_c0 = unaff_x26;
    puStack_b8 = unaff_x25;
    lStack_b0 = unaff_x24;
    lStack_a8 = unaff_x23;
    puStack_a0 = unaff_x22;
    puStack_98 = param_2;
    puStack_90 = puVar7;
    puStack_88 = param_1;
    puStack_80 = &stack0xfffffffffffffff0;
    if ((long)puVar10 < 0) {
      puVar7 = puVar3;
      FUN_10a190930();
      pcStack_c8 = FUN_10a178004;
      puVar7[1] = 0xff7fffff00000000;
      *puVar7 = 0;
      puVar7[2] = 0xff7fffffff7fffff;
      puStack_e0 = puVar8;
      puStack_d8 = puVar3;
      FUN_10ab46d7c(puVar7 + 3);
      if ((byte *)(puVar7 + 5) != param_3 + 0x10) {
        FUN_10a0cf2cc();
      }
      FUN_10a177570(puVar7 + 0x21,param_3 + 0xf0);
      FUN_10a1780b0(&uStack_f8,0,0x3f800000);
      puVar7[1] = uStack_f0;
      *puVar7 = uStack_f8;
      puVar7[2] = uStack_e8;
      return puVar7;
    }
    uVar6 = (long)puVar3[2] - (long)puVar8;
    puVar7 = (undefined8 *)(uVar6 * 2);
    if (puVar7 < puVar10 || (long)puVar7 - (long)puVar10 == 0) {
      puVar7 = puVar10;
    }
    if (0x3ffffffffffffffe < uVar6) {
      puVar7 = (undefined8 *)0x7fffffffffffffff;
    }
    if (puVar7 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar10 = puVar7;
      __Znwm();
    }
    pbVar11 = (byte *)((long)puVar10 + lVar9) + 1;
    *(byte *)((long)puVar10 + lVar9) = *param_3;
    puVar4 = puVar10;
    _memcpy(puVar10,puVar8,lVar9);
    *puVar3 = puVar10;
    puVar3[1] = pbVar11;
    puVar3[2] = (long)puVar10 + (long)puVar7;
    if (puVar8 != (undefined8 *)0x0) {
      __ZdlPv(puVar8);
      puVar4 = puVar8;
    }
  }
  puVar3[1] = pbVar11;
  return puVar4;
}



/* Entry: 10a177f30; end: 10a178003;  */

undefined8 * FUN_10a177f30(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar1 = (undefined1 *)param_1[1];
  if (puVar1 < (undefined1 *)param_1[2]) {
    puVar8 = puVar1 + 1;
    *puVar1 = *param_2;
    puVar2 = param_1;
  }
  else {
    puVar5 = (undefined8 *)*param_1;
    lVar6 = (long)puVar1 - (long)puVar5;
    puVar7 = (undefined8 *)(lVar6 + 1);
    if ((long)puVar7 < 0) {
      puVar7 = param_1;
      FUN_10a190930();
      pcStack_58 = FUN_10a178004;
      puVar7[1] = 0xff7fffff00000000;
      *puVar7 = 0;
      puVar7[2] = 0xff7fffffff7fffff;
      puStack_70 = puVar5;
      puStack_68 = param_1;
      puStack_60 = &stack0xfffffffffffffff0;
      FUN_10ab46d7c(puVar7 + 3);
      if (puVar7 + 5 != (undefined8 *)(param_2 + 0x10)) {
        FUN_10a0cf2cc();
      }
      FUN_10a177570(puVar7 + 0x21,param_2 + 0xf0);
      FUN_10a1780b0(&uStack_88,0,0x3f800000);
      puVar7[1] = uStack_80;
      *puVar7 = uStack_88;
      puVar7[2] = uStack_78;
      return puVar7;
    }
    uVar3 = (long)param_1[2] - (long)puVar5;
    puVar4 = (undefined8 *)(uVar3 * 2);
    if (puVar4 < puVar7 || (long)puVar4 - (long)puVar7 == 0) {
      puVar4 = puVar7;
    }
    if (0x3ffffffffffffffe < uVar3) {
      puVar4 = (undefined8 *)0x7fffffffffffffff;
    }
    if (puVar4 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = puVar4;
      __Znwm();
    }
    puVar8 = (undefined1 *)((long)puVar7 + lVar6) + 1;
    *(undefined1 *)((long)puVar7 + lVar6) = *param_2;
    puVar2 = puVar7;
    _memcpy(puVar7,puVar5,lVar6);
    *param_1 = puVar7;
    param_1[1] = puVar8;
    param_1[2] = (long)puVar7 + (long)puVar4;
    if (puVar5 != (undefined8 *)0x0) {
      __ZdlPv(puVar5);
      puVar2 = puVar5;
    }
  }
  param_1[1] = puVar8;
  return puVar2;
}



/* Entry: 10a178004; end: 10a1780af;  */

undefined8 * FUN_10a178004(undefined8 *param_1,long param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  param_1[1] = 0xff7fffff00000000;
  *param_1 = 0;
  param_1[2] = 0xff7fffffff7fffff;
  FUN_10ab46d7c(param_1 + 3);
  if (param_1 + 5 != (undefined8 *)(param_2 + 0x10)) {
    FUN_10a0cf2cc();
  }
  FUN_10a177570(param_1 + 0x21,param_2 + 0xf0);
  FUN_10a1780b0(&uStack_38,0,0x3f800000);
  param_1[1] = uStack_30;
  *param_1 = uStack_38;
  param_1[2] = uStack_28;
  return param_1;
}



/* Entry: 10a1780b0; end: 10a1781cf;  */

void FUN_10a1780b0(float *param_1,float param_2,float param_3,undefined8 param_4,long param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  bool bVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  lVar11 = *(long *)(param_5 + 0xa0);
  if (*(long *)(param_5 + 0xa8) != lVar11) {
    lVar13 = 0;
    uVar14 = 0;
    do {
      FUN_10ab6e728();
      pfVar8 = (float *)(lVar11 + lVar13);
      if (*(long *)(pfVar8 + 10) == lRam00000001138356d8) {
        fVar17 = 0.0;
        if (0.0 <= param_2) {
          fVar17 = param_2;
        }
        fVar18 = pfVar8[1] - *pfVar8;
        if (fVar17 <= pfVar8[1] - *pfVar8) {
          fVar18 = fVar17;
        }
        uVar14 = *(ulong *)(pfVar8 + 0x12);
        puVar7 = (undefined4 *)&stack0xffffffffffffffdc;
        FUN_10a11b78c(fVar18);
        if (-1 < (int)uVar14) {
          lVar11 = *(long *)(param_5 + 0xb8);
          uVar12 = (*(long *)(param_5 + 0xc0) - lVar11 >> 2) * 0x6db6db6db6db6db7;
          if ((((uVar14 & 0x7fffffff) < uVar12) && (-1 < (long)uVar14)) && (uVar14 >> 0x20 < uVar12)
             ) {
            lVar13 = lVar11 + (uVar14 & 0x7fffffff) * 0x1c;
            lVar11 = lVar11 + (uVar14 >> 0x20) * 0x1c;
            fVar19 = 1.0 - param_3;
            fVar22 = param_3 * (*(float *)(lVar13 + 0x18) * 1.0 + *(float *)(lVar11 + 0x18) * 0.0) +
                     fVar19 * *(float *)(param_5 + 0x140);
            fVar17 = ((float)*(undefined8 *)(lVar13 + 0x10) * 1.0 +
                     (float)*(undefined8 *)(lVar11 + 0x10) * 0.0) * param_3 +
                     (float)*(undefined8 *)(param_5 + 0x138) * fVar19;
            fVar18 = ((float)((ulong)*(undefined8 *)(lVar13 + 0x10) >> 0x20) * 1.0 +
                     (float)((ulong)*(undefined8 *)(lVar11 + 0x10) >> 0x20) * 0.0) * param_3 +
                     (float)((ulong)*(undefined8 *)(param_5 + 0x138) >> 0x20) * fVar19;
            fVar20 = (((float)*(undefined8 *)(lVar13 + 4) * 1.0 +
                      (float)*(undefined8 *)(lVar11 + 4) * 0.0) * param_3 +
                      (float)*(undefined8 *)(param_5 + 0x144) * fVar19 + fVar17) * 0.5;
            fVar21 = (((float)((ulong)*(undefined8 *)(lVar13 + 4) >> 0x20) * 1.0 +
                      (float)((ulong)*(undefined8 *)(lVar11 + 4) >> 0x20) * 0.0) * param_3 +
                      (float)((ulong)*(undefined8 *)(param_5 + 0x144) >> 0x20) * fVar19 + fVar18) *
                     0.5;
            fVar19 = (param_3 * (*(float *)(lVar13 + 0xc) * 1.0 + *(float *)(lVar11 + 0xc) * 0.0) +
                      fVar19 * *(float *)(param_5 + 0x14c) + fVar22) * 0.5;
            *param_1 = fVar20;
            *(ulong *)(param_1 + 3) = CONCAT44(fVar18 - fVar21,fVar17 - fVar20);
            *(ulong *)(param_1 + 1) = CONCAT44(fVar19,fVar21);
            param_1[5] = fVar22 - fVar19;
            return;
          }
        }
        puVar4 = &UNK_10f63b8ac;
        FUN_10a00946c();
        if (pfVar8 == (float *)0x0) {
          return;
        }
        puVar1 = puVar7 + (long)pfVar8;
        goto LAB_10a178a1c;
      }
      uVar14 = uVar14 + 1;
      lVar11 = *(long *)(param_5 + 0xa0);
      lVar13 = lVar13 + 0x58;
    } while (uVar14 < (ulong)((*(long *)(param_5 + 0xa8) - lVar11 >> 3) * 0x2e8ba2e8ba2e8ba3));
  }
  fVar18 = *(float *)(param_5 + 0x140);
  fVar21 = (float)*(undefined8 *)(param_5 + 0x138);
  fVar22 = (float)((ulong)*(undefined8 *)(param_5 + 0x138) >> 0x20);
  fVar19 = ((float)*(undefined8 *)(param_5 + 0x144) + fVar21) * 0.5;
  fVar20 = ((float)((ulong)*(undefined8 *)(param_5 + 0x144) >> 0x20) + fVar22) * 0.5;
  fVar17 = (*(float *)(param_5 + 0x14c) + fVar18) * 0.5;
  *param_1 = fVar19;
  *(ulong *)(param_1 + 3) = CONCAT44(fVar22 - fVar20,fVar21 - fVar19);
  *(ulong *)(param_1 + 1) = CONCAT44(fVar17,fVar20);
  param_1[5] = fVar18 - fVar17;
  return;
LAB_10a178a1c:
  uVar2 = *puVar7;
  puVar5 = puVar4;
  func_0x00010a01e9ec(puVar4,uVar2);
  puVar6 = puVar4;
  FUN_10a190e68(puVar4,uVar2);
  lVar11 = *(long *)(puVar6 + 0xa8);
  if (lVar11 != 0) {
    plVar16 = *(long **)(puVar5 + 0x1a8);
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x188))(plVar16);
      FUN_10a190edc(plVar16,puVar6);
    }
    plVar16 = (long *)0x1;
    FUN_10a061940();
    if (plVar16 == (long *)0x0) {
      lVar13 = 0;
    }
    else {
      lVar13 = *plVar16;
    }
    if ((int)lVar11 == 2) {
      lVar11 = *(long *)(puVar6 + 0xb0);
      uVar3 = *(uint *)(puVar5 + 0x18);
      if (((uVar3 >> 5 & 1) == 0) || (lVar11 == 0)) {
        puVar6[0x8c] = 0;
        if ((uVar3 >> 3 & 1) != 0) goto LAB_10a178b2c;
LAB_10a178b54:
        *(undefined8 *)(puVar6 + 0x90) = 0;
        *(undefined8 *)(puVar6 + 0x98) = 0;
        *(undefined8 *)(puVar6 + 0xa0) = 0;
      }
      else {
        func_0x0001094f5708(&uStack_d0,puVar5 + 0x6c);
        FUN_10aba20a0(&uStack_e8,lVar11,&uStack_d0,puVar5 + 0x188);
        iVar9 = 0;
        bVar10 = false;
        *(undefined8 *)(puVar6 + 0x7c) = uStack_e0;
        *(undefined8 *)(puVar6 + 0x74) = uStack_e8;
        *(undefined8 *)(puVar6 + 0x84) = uStack_d8;
        do {
          if (bVar10) {
            bVar10 = true;
          }
          else {
            fVar17 = *(float *)(puVar6 + 0x80);
            if (iVar9 == 1) {
              fVar17 = *(float *)(puVar6 + 0x84);
            }
            fVar18 = *(float *)(puVar6 + 0x88);
            if (iVar9 != 2) {
              fVar18 = fVar17;
            }
            bVar10 = fVar18 < 0.0;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 != 3);
        puVar6[0x8c] = bVar10 ^ 1;
        if ((*(uint *)(puVar5 + 0x18) >> 3 & 1) == 0) goto LAB_10a178b54;
LAB_10a178b2c:
        if (lVar11 == 0) goto LAB_10a178b54;
        FUN_10a5e334c(lVar11,*(long *)(puVar5 + 0x170),
                      (*(long *)(puVar5 + 0x178) - *(long *)(puVar5 + 0x170) >> 3) *
                      -0x5555555555555555,puVar6 + 0x90,puVar6 + 0x9c);
      }
      if (((((byte)puVar5[0x18] >> 6 & 1) != 0) && (lVar11 != 0)) &&
         (puVar15 = *(undefined8 **)(lVar13 + 0xf0), puVar15 != (undefined8 *)0x0)) {
        FUN_10a1780b0(&uStack_d0,*(undefined4 *)(puVar5 + 0x120),*(undefined4 *)(puVar5 + 0x124));
        puVar15[1] = uStack_c8;
        *puVar15 = uStack_d0;
        puVar15[2] = uStack_c0;
      }
    }
  }
  puVar7 = puVar7 + 1;
  if (puVar7 == puVar1) {
    return;
  }
  goto LAB_10a178a1c;
}



/* Entry: 10a1781d0; end: 10a1782a3;  */

void FUN_10a1781d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  undefined *puVar6;
  uint *puVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  float *pfVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  lVar10 = *(long *)(param_4 + 0xa0);
  if (lVar10 != *(long *)(param_4 + 0xa8)) {
    lVar14 = 0;
    uVar15 = 0;
    lVar8 = param_4;
    uVar18 = param_1;
    uVar21 = param_2;
    do {
      fVar19 = (float)uVar21;
      fVar22 = (float)uVar18;
      pfVar9 = (float *)(lVar10 + lVar14);
      if (pfVar9[2] == 5.60519e-45) {
        lVar8 = param_4;
        uVar18 = param_1;
        uVar21 = param_2;
        FUN_10a178590(param_3);
      }
      else {
        if (pfVar9[2] != 4.2039e-45) {
          puVar6 = &UNK_10f6403c5;
          FUN_10a00946c();
          lVar10 = *(long *)(lVar8 + 0xf8);
          lVar14 = *(long *)(lVar8 + 0x100);
          uStack_b0 = param_1;
          uStack_a8 = param_2;
          if (lVar10 == lVar14) goto LAB_10a17830c;
          do {
            if (*(long *)(lVar10 + 0x18) == *(long *)(pfVar9 + 10)) goto LAB_10a17830c;
            lVar10 = lVar10 + 0x38;
          } while (lVar10 != lVar14);
          do {
            do {
              FUN_10a00946c(&UNK_10f63b8ac);
              lVar14 = extraout_x8;
LAB_10a17830c:
            } while (lVar10 == lVar14 || lVar10 == 0);
            puVar1 = (uint *)(puVar6 + 0x108);
            puVar7 = puVar1;
            func_0x00010ab6f72c(puVar1,lVar10);
          } while (((ulong)puVar7 & 1) == 0);
          FUN_10ab4c544(&plStack_b8,puVar6 + 0x18,lVar10);
          func_0x00010ab4d7d8(&plStack_c0,lVar8,lVar10);
          if ((plStack_b8 == (long *)0x0) || (plStack_c0 == (long *)0x0)) {
            FUN_10a00946c(&UNK_10f63b8ac);
          }
          else {
            fStack_c4 = 0.0;
            fVar20 = 0.0;
            if (0.0 <= fVar22) {
              fVar20 = fVar22;
            }
            fVar22 = pfVar9[1] - *pfVar9;
            if (fVar20 <= pfVar9[1] - *pfVar9) {
              fVar22 = fVar20;
            }
            lVar14 = *(long *)(pfVar9 + 0x12);
            FUN_10a11b78c(fVar22,lVar14,&fStack_c4);
            lVar10 = *(long *)(pfVar9 + 0xc);
            uVar15 = *(long *)(pfVar9 + 0xe) - lVar10 >> 5;
            if (((ulong)(long)(int)lVar14 < uVar15) && ((ulong)(lVar14 >> 0x20) < uVar15)) {
              lVar11 = (long)(int)pfVar9[2];
              uVar16 = lVar11 * 4;
              lVar2 = lVar10 + (long)(int)lVar14 * 0x20;
              lVar3 = *(long *)(lVar2 + 8);
              uVar12 = *(long *)(lVar2 + 0x10) - lVar3;
              uVar4 = *(uint *)(lVar8 + 0xf0);
              uVar15 = 0;
              if (uVar16 != 0) {
                uVar15 = uVar12 / uVar16;
              }
              if (uVar4 == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar13 = (ulong)(*(long *)(lVar8 + 0x18) - *(long *)(lVar8 + 0x10)) / (ulong)uVar4
                  ;
                }
                uVar13 = uVar13 & 0xffffffff;
              }
              if (uVar15 <= uVar13) {
                uVar4 = *puVar1;
                if (uVar4 == 0) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar13 = (ulong)(*(long *)(puVar6 + 0x30) - *(long *)(puVar6 + 0x28)) /
                             (ulong)uVar4;
                  }
                  uVar13 = uVar13 & 0xffffffff;
                }
                if (uVar15 <= uVar13) {
                  lVar10 = lVar10 + (lVar14 >> 0x20) * 0x20;
                  lVar14 = *(long *)(lVar10 + 8);
                  uVar13 = 0;
                  if (uVar16 != 0) {
                    uVar13 = (ulong)(*(long *)(lVar10 + 0x10) - lVar14) / uVar16;
                  }
                  if (uVar15 <= uVar13) {
                    if (uVar16 < uVar12 || uVar16 - uVar12 == 0) {
                      uVar12 = 0;
                      pfVar9 = (float *)(lVar14 + 8);
                      pfVar17 = (float *)(lVar3 + 8);
                      do {
                        fVar22 = 1.0 - fStack_c4;
                        fStack_c8 = fVar22 * *pfVar17 + fStack_c4 * *pfVar9;
                        fVar23 = (float)*(undefined8 *)(pfVar17 + -2) * fVar22;
                        uStack_d0._0_4_ = fVar23 + (float)*(undefined8 *)(pfVar9 + -2) * fStack_c4;
                        uStack_d0._4_4_ =
                             (float)((ulong)*(undefined8 *)(pfVar17 + -2) >> 0x20) * fVar22 +
                             (float)((ulong)*(undefined8 *)(pfVar9 + -2) >> 0x20) * fStack_c4;
                        fVar22 = fStack_c8;
                        fVar20 = (float)uStack_d0;
                        (**(code **)(*plStack_c0 + 0x10))(plStack_c0,uVar12);
                        fStack_c8 = fVar23 + fVar19 * fStack_c8;
                        uStack_d0 = CONCAT44(fVar22 + uStack_d0._4_4_ * fVar19,
                                             fVar20 + (float)uStack_d0 * fVar19);
                        (**(code **)(*plStack_b8 + 0x18))(plStack_b8,uVar12,&uStack_d0);
                        pfVar9 = pfVar9 + lVar11;
                        pfVar17 = pfVar17 + lVar11;
                        uVar12 = uVar12 + 1;
                      } while (uVar12 < uVar15);
                    }
                    (**(code **)(*plStack_c0 + 8))(plStack_c0);
                    (**(code **)(*plStack_b8 + 8))(plStack_b8);
                    return;
                  }
                }
              }
              FUN_10a00946c(&UNK_10f63b8ac);
            }
          }
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a178540);
          (*pcVar5)();
        }
        lVar8 = param_4;
        uVar18 = param_1;
        uVar21 = param_2;
        FUN_10a1782a4(param_3);
      }
      uVar15 = uVar15 + 1;
      lVar10 = *(long *)(param_4 + 0xa0);
      lVar14 = lVar14 + 0x58;
    } while (uVar15 < (ulong)((*(long *)(param_4 + 0xa8) - lVar10 >> 3) * 0x2e8ba2e8ba2e8ba3));
  }
  return;
}



/* Entry: 10a1782a4; end: 10a17858f;  */

void FUN_10a1782a4(float param_1,float param_2,long param_3,long param_4,float *param_5)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  uint *puVar6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  long *plStack_70;
  long *plStack_68;
  
  lVar12 = *(long *)(param_4 + 0xf8);
  lVar7 = *(long *)(param_4 + 0x100);
  if (lVar12 == lVar7) goto LAB_10a17830c;
  do {
    if (*(long *)(lVar12 + 0x18) == *(long *)(param_5 + 10)) goto LAB_10a17830c;
    lVar12 = lVar12 + 0x38;
  } while (lVar12 != lVar7);
  do {
    do {
      FUN_10a00946c(&UNK_10f63b8ac);
      lVar7 = extraout_x8;
LAB_10a17830c:
    } while (lVar12 == lVar7 || lVar12 == 0);
    puVar1 = (uint *)(param_3 + 0x108);
    puVar6 = puVar1;
    func_0x00010ab6f72c(puVar1,lVar12);
  } while (((ulong)puVar6 & 1) == 0);
  FUN_10ab4c544(&plStack_68,param_3 + 0x18,lVar12);
  func_0x00010ab4d7d8(&plStack_70,param_4,lVar12);
  if ((plStack_68 == (long *)0x0) || (plStack_70 == (long *)0x0)) {
    FUN_10a00946c(&UNK_10f63b8ac);
  }
  else {
    fStack_74 = 0.0;
    fVar16 = 0.0;
    if (0.0 <= param_1) {
      fVar16 = param_1;
    }
    fVar17 = param_5[1] - *param_5;
    if (fVar16 <= param_5[1] - *param_5) {
      fVar17 = fVar16;
    }
    lVar7 = *(long *)(param_5 + 0x12);
    FUN_10a11b78c(fVar17,lVar7,&fStack_74);
    lVar12 = *(long *)(param_5 + 0xc);
    uVar8 = *(long *)(param_5 + 0xe) - lVar12 >> 5;
    if (((ulong)(long)(int)lVar7 < uVar8) && ((ulong)(lVar7 >> 0x20) < uVar8)) {
      lVar9 = (long)(int)param_5[2];
      uVar14 = lVar9 * 4;
      lVar2 = lVar12 + (long)(int)lVar7 * 0x20;
      lVar3 = *(long *)(lVar2 + 8);
      uVar10 = *(long *)(lVar2 + 0x10) - lVar3;
      uVar4 = *(uint *)(param_4 + 0xf0);
      uVar8 = 0;
      if (uVar14 != 0) {
        uVar8 = uVar10 / uVar14;
      }
      if (uVar4 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        if ((ulong)uVar4 != 0) {
          uVar11 = (ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) / (ulong)uVar4;
        }
        uVar11 = uVar11 & 0xffffffff;
      }
      if (uVar8 <= uVar11) {
        uVar4 = *puVar1;
        if (uVar4 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((ulong)uVar4 != 0) {
            uVar11 = (ulong)(*(long *)(param_3 + 0x30) - *(long *)(param_3 + 0x28)) / (ulong)uVar4;
          }
          uVar11 = uVar11 & 0xffffffff;
        }
        if (uVar8 <= uVar11) {
          lVar12 = lVar12 + (lVar7 >> 0x20) * 0x20;
          lVar7 = *(long *)(lVar12 + 8);
          uVar11 = 0;
          if (uVar14 != 0) {
            uVar11 = (ulong)(*(long *)(lVar12 + 0x10) - lVar7) / uVar14;
          }
          if (uVar8 <= uVar11) {
            if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
              uVar10 = 0;
              pfVar13 = (float *)(lVar7 + 8);
              pfVar15 = (float *)(lVar3 + 8);
              do {
                fVar18 = 1.0 - fStack_74;
                fVar17 = fVar18 * *pfVar15 + fStack_74 * *pfVar13;
                fVar19 = (float)*(undefined8 *)(pfVar15 + -2) * fVar18;
                fVar16 = fVar19 + (float)*(undefined8 *)(pfVar13 + -2) * fStack_74;
                uStack_80._4_4_ =
                     (float)((ulong)*(undefined8 *)(pfVar15 + -2) >> 0x20) * fVar18 +
                     (float)((ulong)*(undefined8 *)(pfVar13 + -2) >> 0x20) * fStack_74;
                fStack_78 = fVar17;
                uStack_80._0_4_ = fVar16;
                (**(code **)(*plStack_70 + 0x10))(plStack_70,uVar10);
                fStack_78 = fVar19 + param_2 * fStack_78;
                uStack_80 = CONCAT44(fVar17 + uStack_80._4_4_ * param_2,
                                     fVar16 + (float)uStack_80 * param_2);
                (**(code **)(*plStack_68 + 0x18))(plStack_68,uVar10,&uStack_80);
                pfVar13 = pfVar13 + lVar9;
                pfVar15 = pfVar15 + lVar9;
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar8);
            }
            (**(code **)(*plStack_70 + 8))(plStack_70);
            (**(code **)(*plStack_68 + 8))(plStack_68);
            return;
          }
        }
      }
      FUN_10a00946c(&UNK_10f63b8ac);
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a178540);
  (*pcVar5)();
}



/* Entry: 10a178590; end: 10a178857;  */

void FUN_10a178590(float param_1,float param_2,long param_3,long param_4,float *param_5)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  uint *puVar5;
  long lVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  float fStack_74;
  long *plStack_70;
  long *plStack_68;
  
  lVar10 = *(long *)(param_4 + 0xf8);
  lVar6 = *(long *)(param_4 + 0x100);
  if (lVar10 == lVar6) goto LAB_10a1785f8;
  do {
    if (*(long *)(lVar10 + 0x18) == *(long *)(param_5 + 10)) goto LAB_10a1785f8;
    lVar10 = lVar10 + 0x38;
  } while (lVar10 != lVar6);
  do {
    do {
      FUN_10a00946c(&UNK_10f63b8ac);
      lVar6 = extraout_x8;
LAB_10a1785f8:
    } while (lVar10 == lVar6 || lVar10 == 0);
    puVar1 = (uint *)(param_3 + 0x108);
    puVar5 = puVar1;
    func_0x00010ab6f72c(puVar1,lVar10);
  } while (((ulong)puVar5 & 1) == 0);
  func_0x00010ab4c84c(&plStack_68,param_3 + 0x18,lVar10);
  func_0x00010ab4dae0(&plStack_70,param_4,lVar10);
  if ((plStack_68 == (long *)0x0) || (plStack_70 == (long *)0x0)) {
    FUN_10a00946c(&UNK_10f63b8ac);
  }
  else {
    fStack_74 = 0.0;
    fVar14 = 0.0;
    if (0.0 <= param_1) {
      fVar14 = param_1;
    }
    fVar15 = param_5[1] - *param_5;
    if (fVar14 <= param_5[1] - *param_5) {
      fVar15 = fVar14;
    }
    lVar6 = *(long *)(param_5 + 0x12);
    FUN_10a11b78c(fVar15,lVar6,&fStack_74);
    lVar10 = *(long *)(param_5 + 0xc);
    uVar7 = *(long *)(param_5 + 0xe) - lVar10 >> 5;
    if (((ulong)(long)(int)lVar6 < uVar7) && ((ulong)(lVar6 >> 0x20) < uVar7)) {
      uVar12 = (long)(int)param_5[2] * 4;
      lVar2 = lVar10 + (long)(int)lVar6 * 0x20;
      puVar13 = *(undefined8 **)(lVar2 + 8);
      uVar8 = *(long *)(lVar2 + 0x10) - (long)puVar13;
      uVar3 = *(uint *)(param_4 + 0xf0);
      uVar7 = 0;
      if (uVar12 != 0) {
        uVar7 = uVar8 / uVar12;
      }
      if (uVar3 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        if ((ulong)uVar3 != 0) {
          uVar9 = (ulong)(*(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10)) / (ulong)uVar3;
        }
        uVar9 = uVar9 & 0xffffffff;
      }
      if (uVar7 <= uVar9) {
        uVar3 = *puVar1;
        if (uVar3 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          if ((ulong)uVar3 != 0) {
            uVar9 = (ulong)(*(long *)(param_3 + 0x30) - *(long *)(param_3 + 0x28)) / (ulong)uVar3;
          }
          uVar9 = uVar9 & 0xffffffff;
        }
        if (uVar7 <= uVar9) {
          lVar10 = lVar10 + (lVar6 >> 0x20) * 0x20;
          puVar11 = *(undefined8 **)(lVar10 + 8);
          uVar9 = 0;
          if (uVar12 != 0) {
            uVar9 = (ulong)(*(long *)(lVar10 + 0x10) - (long)puVar11) / uVar12;
          }
          if (uVar7 <= uVar9) {
            if (uVar12 < uVar8 || uVar12 - uVar8 == 0) {
              uVar8 = 0;
              do {
                fVar15 = 1.0 - fStack_74;
                fVar16 = (float)*puVar13 * fVar15;
                uVar17 = *puVar11;
                fVar14 = fVar16 + (float)uVar17 * fStack_74;
                fStack_8c = (float)((ulong)*puVar13 >> 0x20) * fVar15 +
                            (float)((ulong)uVar17 >> 0x20) * fStack_74;
                uStack_88 = CONCAT44((float)((ulong)puVar13[1] >> 0x20) * fVar15 +
                                     (float)((ulong)puVar11[1] >> 0x20) * fStack_74,
                                     (float)puVar13[1] * fVar15 + (float)puVar11[1] * fStack_74);
                fStack_90 = fVar14;
                (**(code **)(*plStack_70 + 0x10))(plStack_70,uVar8);
                _fStack_90 = CONCAT44(fVar16 + param_2 * fStack_8c,fVar14 + param_2 * fStack_90);
                uStack_88 = CONCAT44(*(undefined4 *)((long)puVar13 + 0xc),
                                     (float)uVar17 + param_2 * (float)uStack_88);
                (**(code **)(*plStack_68 + 0x18))(plStack_68,uVar8,&fStack_90);
                puVar11 = (undefined8 *)((long)puVar11 + uVar12);
                uVar8 = uVar8 + 1;
                puVar13 = (undefined8 *)((long)puVar13 + uVar12);
              } while (uVar8 < uVar7);
            }
            (**(code **)(*plStack_70 + 8))(plStack_70);
            (**(code **)(*plStack_68 + 8))(plStack_68);
            return;
          }
        }
      }
      FUN_10a00946c(&UNK_10f63b8ac);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a178808);
  (*pcVar4)();
}



/* Entry: 10a178858; end: 10a1789e7;  */

void FUN_10a178858(float *param_1,float param_2,float param_3,undefined8 param_4,long param_5,
                  float *param_6)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float *pfVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_24;
  
  fStack_24 = 0.0;
  fVar14 = 0.0;
  if (0.0 <= param_2) {
    fVar14 = param_2;
  }
  fVar15 = param_6[1] - *param_6;
  if (fVar14 <= param_6[1] - *param_6) {
    fVar15 = fVar14;
  }
  uVar2 = *(ulong *)(param_6 + 0x12);
  pfVar6 = &fStack_24;
  FUN_10a11b78c(fVar15);
  if (-1 < (int)uVar2) {
    lVar10 = *(long *)(param_5 + 0xb8);
    uVar11 = (*(long *)(param_5 + 0xc0) - lVar10 >> 2) * 0x6db6db6db6db6db7;
    if ((((uVar2 & 0x7fffffff) < uVar11) && (-1 < (long)uVar2)) && (uVar2 >> 0x20 < uVar11)) {
      lVar8 = lVar10 + (uVar2 & 0x7fffffff) * 0x1c;
      lVar10 = lVar10 + (uVar2 >> 0x20) * 0x1c;
      fVar19 = 1.0 - fStack_24;
      fVar16 = 1.0 - param_3;
      fVar20 = param_3 * (fVar19 * *(float *)(lVar8 + 0x18) + fStack_24 * *(float *)(lVar10 + 0x18))
               + fVar16 * *(float *)(param_5 + 0x140);
      fVar14 = ((float)*(undefined8 *)(lVar8 + 0x10) * fVar19 +
               (float)*(undefined8 *)(lVar10 + 0x10) * fStack_24) * param_3 +
               (float)*(undefined8 *)(param_5 + 0x138) * fVar16;
      fVar15 = ((float)((ulong)*(undefined8 *)(lVar8 + 0x10) >> 0x20) * fVar19 +
               (float)((ulong)*(undefined8 *)(lVar10 + 0x10) >> 0x20) * fStack_24) * param_3 +
               (float)((ulong)*(undefined8 *)(param_5 + 0x138) >> 0x20) * fVar16;
      fVar17 = (((float)*(undefined8 *)(lVar8 + 4) * fVar19 +
                (float)*(undefined8 *)(lVar10 + 4) * fStack_24) * param_3 +
                (float)*(undefined8 *)(param_5 + 0x144) * fVar16 + fVar14) * 0.5;
      fVar18 = (((float)((ulong)*(undefined8 *)(lVar8 + 4) >> 0x20) * fVar19 +
                (float)((ulong)*(undefined8 *)(lVar10 + 4) >> 0x20) * fStack_24) * param_3 +
                (float)((ulong)*(undefined8 *)(param_5 + 0x144) >> 0x20) * fVar16 + fVar15) * 0.5;
      fVar16 = (param_3 * (fVar19 * *(float *)(lVar8 + 0xc) + fStack_24 * *(float *)(lVar10 + 0xc))
                + fVar16 * *(float *)(param_5 + 0x14c) + fVar20) * 0.5;
      *param_1 = fVar17;
      *(ulong *)(param_1 + 3) = CONCAT44(fVar15 - fVar18,fVar14 - fVar17);
      *(ulong *)(param_1 + 1) = CONCAT44(fVar16,fVar18);
      param_1[5] = fVar20 - fVar16;
      return;
    }
  }
  puVar3 = &UNK_10f63b8ac;
  FUN_10a00946c();
  if (param_6 != (float *)0x0) {
    param_6 = pfVar6 + (long)param_6;
    do {
      fVar14 = *pfVar6;
      puVar4 = puVar3;
      func_0x00010a01e9ec(puVar3,fVar14);
      puVar5 = puVar3;
      FUN_10a190e68(puVar3,fVar14);
      lVar10 = *(long *)(puVar5 + 0xa8);
      if (lVar10 != 0) {
        plVar13 = *(long **)(puVar4 + 0x1a8);
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x188))(plVar13);
          FUN_10a190edc(plVar13,puVar5);
        }
        plVar13 = (long *)0x1;
        FUN_10a061940();
        if (plVar13 == (long *)0x0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar13;
        }
        if ((int)lVar10 == 2) {
          lVar10 = *(long *)(puVar5 + 0xb0);
          uVar1 = *(uint *)(puVar4 + 0x18);
          if (((uVar1 >> 5 & 1) == 0) || (lVar10 == 0)) {
            puVar5[0x8c] = 0;
            if ((uVar1 >> 3 & 1) != 0) goto LAB_10a178b2c;
LAB_10a178b54:
            *(undefined8 *)(puVar5 + 0x90) = 0;
            *(undefined8 *)(puVar5 + 0x98) = 0;
            *(undefined8 *)(puVar5 + 0xa0) = 0;
          }
          else {
            func_0x0001094f5708(&uStack_d0,puVar4 + 0x6c);
            FUN_10aba20a0(&uStack_e8,lVar10,&uStack_d0,puVar4 + 0x188);
            iVar7 = 0;
            bVar9 = false;
            *(undefined8 *)(puVar5 + 0x7c) = uStack_e0;
            *(undefined8 *)(puVar5 + 0x74) = uStack_e8;
            *(undefined8 *)(puVar5 + 0x84) = uStack_d8;
            do {
              if (bVar9) {
                bVar9 = true;
              }
              else {
                fVar14 = *(float *)(puVar5 + 0x80);
                if (iVar7 == 1) {
                  fVar14 = *(float *)(puVar5 + 0x84);
                }
                fVar15 = *(float *)(puVar5 + 0x88);
                if (iVar7 != 2) {
                  fVar15 = fVar14;
                }
                bVar9 = fVar15 < 0.0;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 != 3);
            puVar5[0x8c] = bVar9 ^ 1;
            if ((*(uint *)(puVar4 + 0x18) >> 3 & 1) == 0) goto LAB_10a178b54;
LAB_10a178b2c:
            if (lVar10 == 0) goto LAB_10a178b54;
            FUN_10a5e334c(lVar10,*(long *)(puVar4 + 0x170),
                          (*(long *)(puVar4 + 0x178) - *(long *)(puVar4 + 0x170) >> 3) *
                          -0x5555555555555555,puVar5 + 0x90,puVar5 + 0x9c);
          }
          if (((((byte)puVar4[0x18] >> 6 & 1) != 0) && (lVar10 != 0)) &&
             (puVar12 = *(undefined8 **)(lVar8 + 0xf0), puVar12 != (undefined8 *)0x0)) {
            FUN_10a1780b0(&uStack_d0,*(undefined4 *)(puVar4 + 0x120),*(undefined4 *)(puVar4 + 0x124)
                         );
            puVar12[1] = uStack_c8;
            *puVar12 = uStack_d0;
            puVar12[2] = uStack_c0;
          }
        }
      }
      pfVar6 = pfVar6 + 1;
    } while (pfVar6 != param_6);
  }
  return;
}



/* Entry: 10a1789e8; end: 10a178ccf;  */

void FUN_10a1789e8(long param_1,undefined4 *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (param_3 != 0) {
    puVar1 = param_2 + param_3;
    do {
      uVar2 = *param_2;
      lVar4 = param_1;
      func_0x00010a01e9ec(param_1,uVar2);
      lVar5 = param_1;
      FUN_10a190e68(param_1,uVar2);
      lVar9 = *(long *)(lVar5 + 0xa8);
      if (lVar9 != 0) {
        plVar10 = *(long **)(lVar4 + 0x1a8);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x188))(plVar10);
          FUN_10a190edc(plVar10,lVar5);
        }
        plVar10 = (long *)0x1;
        FUN_10a061940();
        if (plVar10 == (long *)0x0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *plVar10;
        }
        if ((int)lVar9 == 2) {
          lVar9 = *(long *)(lVar5 + 0xb0);
          uVar3 = *(uint *)(lVar4 + 0x18);
          if (((uVar3 >> 5 & 1) == 0) || (lVar9 == 0)) {
            *(undefined1 *)(lVar5 + 0x8c) = 0;
            if ((uVar3 >> 3 & 1) != 0) goto LAB_10a178b2c;
LAB_10a178b54:
            *(undefined8 *)(lVar5 + 0x90) = 0;
            *(undefined8 *)(lVar5 + 0x98) = 0;
            *(undefined8 *)(lVar5 + 0xa0) = 0;
          }
          else {
            func_0x0001094f5708(&uStack_90,lVar4 + 0x6c);
            FUN_10aba20a0(&uStack_a8,lVar9,&uStack_90,lVar4 + 0x188);
            iVar6 = 0;
            bVar7 = false;
            *(undefined8 *)(lVar5 + 0x7c) = uStack_a0;
            *(undefined8 *)(lVar5 + 0x74) = uStack_a8;
            *(undefined8 *)(lVar5 + 0x84) = uStack_98;
            do {
              if (bVar7) {
                bVar7 = true;
              }
              else {
                fVar12 = *(float *)(lVar5 + 0x80);
                if (iVar6 == 1) {
                  fVar12 = *(float *)(lVar5 + 0x84);
                }
                fVar13 = *(float *)(lVar5 + 0x88);
                if (iVar6 != 2) {
                  fVar13 = fVar12;
                }
                bVar7 = fVar13 < 0.0;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 != 3);
            *(byte *)(lVar5 + 0x8c) = bVar7 ^ 1;
            if ((*(uint *)(lVar4 + 0x18) >> 3 & 1) == 0) goto LAB_10a178b54;
LAB_10a178b2c:
            if (lVar9 == 0) goto LAB_10a178b54;
            FUN_10a5e334c(lVar9,*(long *)(lVar4 + 0x170),
                          (*(long *)(lVar4 + 0x178) - *(long *)(lVar4 + 0x170) >> 3) *
                          -0x5555555555555555,lVar5 + 0x90,lVar5 + 0x9c);
          }
          if ((((*(byte *)(lVar4 + 0x18) >> 6 & 1) != 0) && (lVar9 != 0)) &&
             (puVar8 = *(undefined8 **)(lVar11 + 0xf0), puVar8 != (undefined8 *)0x0)) {
            FUN_10a1780b0(&uStack_90,*(undefined4 *)(lVar4 + 0x120),*(undefined4 *)(lVar4 + 0x124));
            puVar8[1] = uStack_88;
            *puVar8 = uStack_90;
            puVar8[2] = uStack_80;
          }
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 != puVar1);
  }
  return;
}



/* Entry: 10a178cd0; end: 10a178d6f;  */

void FUN_10a178cd0(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      FUN_10a191cec(param_4,param_1,*param_2,2);
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a178d70; end: 10a178deb;  */

void FUN_10a178d70(long param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      uVar1 = *param_2;
      lVar3 = param_1;
      func_0x00010a01e9ec(param_1,uVar1);
      lVar3 = *(long *)(lVar3 + 0x1a8);
      if (lVar3 != 0) {
        FUN_10a42775c(lVar3);
        lVar2 = param_1;
        FUN_10a190e68(param_1,uVar1);
        FUN_10a190edc(lVar3,lVar2);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a178dec; end: 10a178e07;  */

long ** FUN_10a178dec(long param_1,undefined4 *param_2,long param_3,long **param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long **pplVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long **pplVar12;
  long *plVar13;
  float fVar14;
  long *plStack_a0;
  long *plStack_98;
  long **pplStack_90;
  long *plStack_88;
  long *plStack_80;
  
  pplVar7 = param_4;
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      uVar1 = *param_2;
      lVar5 = param_1;
      func_0x00010a01e9ec(param_1,uVar1);
      FUN_10a015150(param_1,uVar1);
      fVar14 = *(float *)(param_4 + 3) -
               (*(float *)((long)param_4 + 0xc) * *(float *)(lVar5 + 0x60) +
                *(float *)(param_4 + 2) * *(float *)(lVar5 + 100) +
               *(float *)((long)param_4 + 0x14) * *(float *)(lVar5 + 0x68));
      uVar2 = *(uint *)(lVar5 + 0x18);
      plVar13 = *param_4;
      uVar3 = uVar2 >> 1 & 1;
      pplVar7 = (long **)plVar13[1];
      if (pplVar7 < (long **)plVar13[2]) {
        func_0x00010ac08a9c(fVar14,pplVar7,uVar1,0xffff,*(undefined4 *)(lVar5 + 0x40),
                            *(undefined4 *)(lVar5 + 0x44),uVar3,*(undefined2 *)(param_4 + 1),2,
                            *(undefined1 *)(lVar5 + 1));
        pplVar12 = pplVar7 + 0x21;
        plVar13[1] = (long)pplVar12;
      }
      else {
        lVar11 = (long)pplVar7 - *plVar13;
        uVar9 = (lVar11 >> 3) * 0xf83e0f83e0f83e1 + 1;
        if (0xf83e0f83e0f83e < uVar9) {
          FUN_10a193c14();
          func_0x00010a193e00(&plStack_a0);
          __Unwind_Resume();
          if (pplVar7[6] != (long *)0x0) {
            pplVar7[7] = pplVar7[6];
            __ZdlPv();
          }
          if (pplVar7[3] != (long *)0x0) {
            pplVar7[4] = pplVar7[3];
            __ZdlPv();
          }
          if (*pplVar7 != (long *)0x0) {
            pplVar7[1] = *pplVar7;
            __ZdlPv();
          }
          return pplVar7;
        }
        lVar8 = plVar13[2] - *plVar13 >> 3;
        uVar10 = lVar8 * 0x1f07c1f07c1f07c2;
        if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
          uVar10 = uVar9;
        }
        if (0x7c1f07c1f07c1e < (ulong)(lVar8 * 0xf83e0f83e0f83e1)) {
          uVar10 = 0xf83e0f83e0f83e;
        }
        plStack_80 = plVar13;
        if (uVar10 == 0) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = plVar13;
          FUN_10a193c28();
        }
        lVar11 = (long)plVar6 + lVar11;
        plStack_a0 = plVar6;
        plStack_98 = (long *)lVar11;
        plStack_88 = plVar6 + uVar10 * 0x21;
        func_0x00010ac08a9c(fVar14,lVar11,uVar1,0xffff,*(undefined4 *)(lVar5 + 0x40),
                            *(undefined4 *)(lVar5 + 0x44),uVar3,*(undefined2 *)(param_4 + 1),2,
                            *(undefined1 *)(lVar5 + 1));
        pplVar12 = (long **)(lVar11 + 0x108);
        lVar11 = lVar11 + (*plVar13 - plVar13[1]);
        pplStack_90 = pplVar12;
        func_0x00010a193c70(plVar13,*plVar13,plVar13[1],lVar11);
        plStack_a0 = (long *)*plVar13;
        *plVar13 = lVar11;
        plVar13[1] = (long)pplVar12;
        plStack_88 = (long *)plVar13[2];
        plVar13[2] = (long)(plVar6 + uVar10 * 0x21);
        pplVar7 = &plStack_a0;
        plStack_98 = plStack_a0;
        pplStack_90 = (long **)plStack_a0;
        func_0x00010a193e00(pplVar7);
      }
      plVar13[1] = (long)pplVar12;
      lVar5 = (*param_4)[1];
      if (**param_4 == lVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10abfd554);
        (*pcVar4)();
      }
      *(ushort *)(lVar5 + -0xa8) =
           (ushort)((uVar2 >> 5 & 1) << 9) | *(ushort *)(lVar5 + -0xa8) & 0xfdcf;
      *(undefined4 *)(lVar5 + -0xa4) = 2;
      *(undefined2 *)(lVar5 + -0xa0) = 0xffff;
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
    } while (param_3 != 0);
  }
  return pplVar7;
}



/* Entry: 10a178e08; end: 10a178f0b;  */

void FUN_10a178e08(long param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      uVar1 = *param_2;
      lVar3 = param_1;
      func_0x00010a01e9ec(param_1,uVar1);
      lVar3 = *(long *)(lVar3 + 0x1a8);
      if (lVar3 != 0) {
        FUN_10a00ff8c(lVar3);
        lVar2 = param_1;
        FUN_10a190e68(param_1,uVar1);
        FUN_10a190edc(lVar3,lVar2);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -4;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a178f0c; end: 10a178fab;  */

void FUN_10a178f0c(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    do {
      FUN_10a191cec(param_4,param_1,*param_2,9);
      param_3 = param_3 + -4;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10a178fac; end: 10a178fcb;  */

void FUN_10a178fac(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Entry: 10a178fcc; end: 10a1790ef;  */

void FUN_10a178fcc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1 == param_2) {
    return;
  }
  lVar2 = *param_2;
  lVar4 = param_2[1];
  uVar5 = lVar4 - lVar2;
  uVar3 = param_1[2];
  plVar6 = (long *)*param_1;
  if (uVar3 - (long)plVar6 < uVar5) {
    plVar7 = (long *)((long)uVar5 >> 3);
    plVar8 = param_1;
    if (plVar6 != (long *)0x0) {
      param_1[1] = (long)plVar6;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      plVar8 = plVar6;
    }
    if ((ulong)plVar7 >> 0x3d != 0) {
LAB_10a1790ec:
      FUN_10a199a28();
      if (plVar8 == (long *)0x0) {
        return;
      }
      if (*plVar8 != 0) {
        plVar8[1] = *plVar8;
        __ZdlPv();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(plVar8);
      return;
    }
    plVar8 = (long *)((long)uVar3 >> 2);
    if ((long *)((long)uVar3 >> 2) <= plVar7) {
      plVar8 = plVar7;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      plVar8 = (long *)0x1fffffffffffffff;
    }
    if ((ulong)plVar8 >> 0x3d != 0) goto LAB_10a1790ec;
    FUN_10a199a3c();
    *param_1 = (long)plVar8;
    param_1[1] = (long)plVar8;
    param_1[2] = (long)(plVar8 + (long)param_2);
    plVar6 = plVar8;
  }
  else {
    plVar8 = (long *)param_1[1];
    if ((ulong)((long)plVar8 - (long)plVar6) < uVar5) {
      lVar1 = lVar2 + ((long)plVar8 - (long)plVar6);
      if (plVar8 != plVar6) {
        _memmove(plVar6,lVar2);
        plVar8 = (long *)param_1[1];
      }
      lVar4 = lVar4 - lVar1;
      if (lVar4 != 0) {
        _memmove(plVar8,lVar1,lVar4);
      }
      lVar4 = (long)plVar8 + lVar4;
      goto LAB_10a1790d4;
    }
  }
  if (lVar4 != lVar2) {
    _memmove(plVar6,lVar2,uVar5);
  }
  lVar4 = (long)plVar6 + uVar5;
LAB_10a1790d4:
  param_1[1] = lVar4;
  return;
}



/* Entry: 10a1790f0; end: 10a179127;  */

void FUN_10a1790f0(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      param_1[1] = *param_1;
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10a179128; end: 10a1792ef;  */

undefined8 * FUN_10a179128(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_31;
  
  puVar5 = (undefined8 *)0x10;
  __Znwm();
  *puVar5 = 0;
  puVar5[1] = 0;
  puStack_40 = puVar5;
  FUN_10a199aa4(&plStack_50,auStack_60);
  if (*(int *)((long)plStack_50 + 0x1fc) != 1) {
    if (*(int *)((long)plStack_50 + 0x1fc) < 1) {
      puVar6 = &UNK_10f660f7a;
      goto LAB_10a1792c0;
    }
    *(undefined4 *)((long)plStack_50 + 0x1fc) = 1;
    *(undefined1 *)((long)plStack_50 + 0x1ec) = 1;
  }
  if ((int)plStack_50[0x3f] != 1) {
    if ((int)plStack_50[0x3f] < 1) {
      puVar6 = &UNK_10f660f58;
LAB_10a1792c0:
      FUN_10a00946c(puVar6);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a1792c8);
      (*pcVar3)();
    }
    *(undefined4 *)(plStack_50 + 0x3f) = 1;
    *(undefined1 *)((long)plStack_50 + 0x1ec) = 1;
  }
  bVar4 = false;
  if ((*(float *)(plStack_50 + 0x41) == 2.0) &&
     (bVar4 = false, !NAN(*(float *)((long)plStack_50 + 0x20c)))) {
    bVar4 = *(float *)((long)plStack_50 + 0x20c) == 2.0;
  }
  if (bVar4) {
    if (*(char *)((long)plStack_50 + 0x1ec) != '\x01') goto LAB_10a1791ec;
  }
  else {
    plStack_50[0x41] = 0x4000000040000000;
    *(undefined1 *)((long)plStack_50 + 0x1ec) = 1;
  }
  (**(code **)(*plStack_50 + 0x40))(plStack_50);
  *(undefined1 *)((long)plStack_50 + 0x1ec) = 0;
LAB_10a1791ec:
  uStack_68 = param_1;
  FUN_10a199b74(auStack_60,&uStack_31,&uStack_68,&plStack_50);
  func_0x00010a193034(puVar5,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  puVar5 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
    if (puStack_40 != (undefined8 *)0x0) {
      func_0x00010a193298();
      __ZdlPv();
    }
  }
  return puVar5;
}



/* Entry: 10a1792f0; end: 10a17930b;  */

void FUN_10a1792f0(long param_1)

{
  if (param_1 != 0) {
    func_0x00010a193298();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


