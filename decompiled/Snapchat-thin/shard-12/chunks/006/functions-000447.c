/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1094f6b6c; end: 1094f6bb3;  */

void FUN_1094f6b6c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1094f66a0(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094f6bb4; end: 1094f6c0f;  */

long * FUN_1094f6bb4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1094f66a0(plVar1 + 3);
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



/* Entry: 1094f6c10; end: 1094f6c87;  */

undefined8 * FUN_1094f6c10(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (param_3 != 0) {
    param_3 = param_3 * 0x18;
    do {
      FUN_1094f6c88(param_1,param_2,param_2);
      param_2 = param_2 + 0x18;
      param_3 = param_3 + -0x18;
    } while (param_3 != 0);
  }
  return param_1;
}



/* Entry: 1094f6c88; end: 1094f707f;  */

undefined1  [16] FUN_1094f6c88(long *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x26;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  plVar8 = param_1;
  func_0x000107c2ac8c(param_1,*param_2,param_2[1]);
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x26 = (long *)(uVar16 & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar15 <= plVar8) {
        uVar1 = 0;
        if (plVar15 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar15;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar1 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if ((puVar6 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar6, plVar14 != (long *)0x0)) {
      uVar5 = *param_2;
      lVar4 = param_2[1];
      do {
        plVar7 = (long *)plVar14[1];
        if (plVar7 == plVar8) {
          if (plVar14[3] == lVar4) {
            lVar3 = plVar14[2];
            _memcmp(lVar3,uVar5,lVar4);
            if ((int)lVar3 == 0) {
              uVar5 = 0;
              goto LAB_1094f7000;
            }
          }
        }
        else {
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar16);
          }
          else if (plVar15 <= plVar7) {
            uVar1 = 0;
            if (plVar15 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar15);
          }
          if (plVar7 != unaff_x26) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  plVar14 = (long *)0x28;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = (long)plVar8;
  lVar4 = *param_3;
  plVar14[3] = param_3[1];
  plVar14[2] = lVar4;
  plVar14[4] = param_3[2];
  if ((plVar15 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar15 < (float)(param_1[3] + 1))) {
    uVar16 = 1;
    if ((long *)0x2 < plVar15) {
      uVar16 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    plVar7 = (long *)(uVar16 | (long)plVar15 << 1);
    plVar9 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar7 <= plVar9) {
      plVar7 = plVar9;
    }
    if ((long)plVar7 - 1U == 0) {
      plVar7 = (long *)0x2;
    }
    else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar15 = (long *)param_1[1];
    }
    if (plVar15 < plVar7) {
LAB_1094f6e10:
      if ((ulong)plVar7 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1094f706c);
        (*pcVar2)();
      }
      lVar4 = (long)plVar7 << 3;
      __Znwm();
      lVar3 = *param_1;
      *param_1 = lVar4;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      plVar15 = (long *)0x0;
      param_1[1] = (long)plVar7;
      do {
        *(undefined8 *)(*param_1 + (long)plVar15 * 8) = 0;
        plVar15 = (long *)((long)plVar15 + 1);
      } while (plVar7 != plVar15);
      plVar9 = (long *)param_1[2];
      plVar15 = plVar7;
      if (plVar9 != (long *)0x0) {
        plVar10 = (long *)plVar9[1];
        uVar16 = (long)plVar7 - 1;
        if (((ulong)plVar7 & uVar16) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar16);
        }
        else if (plVar7 <= plVar10) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar10 / (ulong)plVar7;
          }
          plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar7);
        }
        *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar9;
        while (plVar11 != (long *)0x0) {
          plVar13 = (long *)plVar11[1];
          if (((ulong)plVar7 & uVar16) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar16);
          }
          else if (plVar7 <= plVar13) {
            uVar1 = 0;
            if (plVar7 != (long *)0x0) {
              uVar1 = (ulong)plVar13 / (ulong)plVar7;
            }
            plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar7);
          }
          plVar12 = plVar11;
          if (plVar13 != plVar10) {
            lVar4 = *param_1;
            if (*(long *)(lVar4 + (long)plVar13 * 8) == 0) {
              *(long **)(lVar4 + (long)plVar13 * 8) = plVar9;
              plVar10 = plVar13;
            }
            else {
              *plVar9 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar4 + (long)plVar13 * 8);
              **(long **)(lVar4 + (long)plVar13 * 8) = (long)plVar11;
              plVar12 = plVar9;
            }
          }
          plVar9 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (plVar7 < plVar15) {
      plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar9) {
        plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
      }
      if (plVar7 <= plVar9) {
        plVar7 = plVar9;
      }
      if (plVar7 < plVar15) {
        if (plVar7 != (long *)0x0) goto LAB_1094f6e10;
        lVar4 = *param_1;
        *param_1 = 0;
        if (lVar4 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar15 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x26 = plVar8;
      if (plVar15 <= plVar8) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar8 / (ulong)plVar15;
        }
        unaff_x26 = (long *)((long)plVar8 - uVar16 * (long)plVar15);
      }
    }
  }
  lVar4 = *param_1;
  plVar8 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar14 = *plVar8;
    *plVar8 = (long)plVar14;
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar8;
    if (*plVar14 == 0) goto LAB_1094f6ff0;
    plVar8 = *(long **)(*plVar14 + 8);
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      plVar8 = (long *)((ulong)plVar8 & (long)plVar15 - 1U);
    }
    else if (plVar15 <= plVar8) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar8 / (ulong)plVar15;
      }
      plVar8 = (long *)((long)plVar8 - uVar16 * (long)plVar15);
    }
    plVar8 = (long *)(*param_1 + (long)plVar8 * 8);
  }
  else {
    *plVar14 = *plVar8;
  }
  *plVar8 = (long)plVar14;
LAB_1094f6ff0:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_1094f7000:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 1094f7080; end: 1094f70c7;  */

long * FUN_1094f7080(long *param_1)

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



/* Entry: 1094f70c8; end: 1094f71c3;  */

long * FUN_1094f70c8(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar4 = param_1;
  func_0x000107c2ac8c(param_1,*param_2,param_2[1]);
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)(uVar9 & (ulong)plVar4);
    }
    else {
      plVar10 = plVar4;
      if (plVar8 <= plVar4) {
        uVar3 = 0;
        if (plVar8 != (long *)0x0) {
          uVar3 = (ulong)plVar4 / (ulong)plVar8;
        }
        plVar10 = (long *)((long)plVar4 - uVar3 * (long)plVar8);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      uVar1 = *param_2;
      lVar2 = param_2[1];
      do {
        plVar7 = (long *)plVar6[1];
        if (plVar4 == plVar7) {
          if (plVar6[3] == lVar2) {
            lVar5 = plVar6[2];
            _memcmp(lVar5,uVar1,lVar2);
            if ((int)lVar5 == 0) {
              return plVar6;
            }
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar9);
          }
          else if (plVar8 <= plVar7) {
            uVar3 = 0;
            if (plVar8 != (long *)0x0) {
              uVar3 = (ulong)plVar7 / (ulong)plVar8;
            }
            plVar7 = (long *)((long)plVar7 - uVar3 * (long)plVar8);
          }
          if (plVar7 != plVar10) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1094f71c4; end: 1094f730b;  */

long * FUN_1094f71c4(long *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar6 = (ulong)*param_2;
    uVar7 = uVar4 - 1;
    uVar3 = (uint)uVar4;
    uVar5 = (uint)*param_2;
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar3 - 1 & uVar6;
    }
    else {
      uVar8 = uVar6;
      if (uVar4 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar5 / uVar3;
        }
        uVar8 = (ulong)(uVar5 - uVar1 * uVar3);
      }
    }
    plVar9 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)*plVar9;
      do {
        if (plVar9 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if (*(byte *)(plVar9 + 2) == uVar5) {
            return plVar9;
          }
        }
        else {
          if ((uVar4 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar4 <= uVar10) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar2 * uVar4;
          }
          if (uVar10 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar9 = (long *)*plVar9;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1094f730c; end: 1094f7727;  */

bool FUN_1094f730c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined7 uStack_b0;
  char cStack_a9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  
  FUN_1094f7728(param_1 + 0xb8);
  uVar9 = *param_2;
  func_0x000107c31940(auStack_78,&UNK_10f570bf5);
  FUN_1094b4850(uVar9,auStack_78,param_1 + 8);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  uVar9 = *param_2;
  func_0x000107c31940(auStack_78,&UNK_10f570c04);
  func_0x0001094b4944(uVar9,auStack_78,param_1 + 0x10);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  uVar9 = *param_2;
  func_0x000107c31940(&lStack_90,&UNK_10f56f729);
  uStack_a8 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  FUN_1094a6b30(auStack_78,uVar9,&lStack_90,&uStack_a8);
  if (lStack_98 < 0) {
    __ZdlPv(uStack_a8);
  }
  if (uStack_80 < 0) {
    __ZdlPv(lStack_90);
  }
  uVar7 = SUB84(auStack_78,0);
  FUN_10937e5e8();
  *(undefined4 *)(param_1 + 0x90) = uVar7;
  uVar9 = *param_2;
  func_0x000107c31940(&lStack_90,&UNK_10f570c17);
  FUN_1094e55d4(uVar9,&lStack_90,param_1 + 0x28);
  if (uStack_80 < 0) {
    __ZdlPv(lStack_90);
  }
  uVar9 = *param_2;
  func_0x000107c31940(&lStack_90,&UNK_10f570c22);
  func_0x0001094b4944(uVar9,&lStack_90,param_1 + 0x30);
  if (uStack_80 < 0) {
    __ZdlPv(lStack_90);
  }
  uVar9 = *param_2;
  func_0x000107c31940(&lStack_90,&DAT_10f56f6ff);
  func_0x0001094a86e8(uVar9,&lStack_90,param_1 + 0x48);
  if (uStack_80 < 0) {
    __ZdlPv(lStack_90);
  }
  uVar9 = *param_2;
  func_0x000107c31940(&lStack_90,&UNK_10f56f7e3);
  func_0x0001094a86e8(uVar9,&lStack_90,param_1 + 0x78);
  if (uStack_80 < 0) {
    __ZdlPv(lStack_90);
  }
  uVar9 = *param_2;
  func_0x000107c31940(&lStack_90,&UNK_10f570c35);
  func_0x0001094b4944(uVar9,&lStack_90,param_1 + 0x60);
  if (uStack_80 < 0) {
    __ZdlPv(lStack_90);
  }
  uVar9 = *param_2;
  func_0x000107c31940(&lStack_90,&UNK_10f570c46);
  FUN_1094b4850(uVar9,&lStack_90,param_1 + 0xb0);
  if (uStack_80._7_1_ < '\0') {
    __ZdlPv(lStack_90);
  }
  plVar10 = (long *)(param_1 + 0x98);
  *(long *)(param_1 + 0xa0) = *plVar10;
  lStack_90 = 0;
  lStack_88 = 0;
  uStack_80 = 0;
  uVar9 = *param_2;
  func_0x000107c31940(&plStack_c0,&UNK_10f56f802);
  func_0x0001094b4944(uVar9,&plStack_c0,&lStack_90);
  if (cStack_a9 < '\0') {
    __ZdlPv(plStack_c0);
  }
  if (lStack_90 == lStack_88) {
    if (*(int *)(param_1 + 0x90) != 0) {
      plStack_c0 = (long *)CONCAT44(plStack_c0._4_4_,2);
      func_0x0001094d25f0(plVar10,&plStack_c0);
    }
  }
  else {
    FUN_10937dae0(&plStack_c0,&lStack_90);
    if (*plVar10 != 0) {
      *(long *)(param_1 + 0xa0) = *plVar10;
      __ZdlPv();
      *plVar10 = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    *(undefined8 *)(param_1 + 0xa0) = uStack_b8;
    *(long **)(param_1 + 0x98) = plStack_c0;
    *(ulong *)(param_1 + 0xa8) = CONCAT17(cStack_a9,uStack_b0);
  }
  lVar8 = (long)*(char *)(param_1 + 0x5f);
  if (lVar8 < 0) {
    lVar8 = *(long *)(param_1 + 0x50);
  }
  lVar11 = (long)*(char *)(param_1 + 0x8f);
  if (lVar11 < 0) {
    lVar11 = *(long *)(param_1 + 0x80);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x30);
  lVar12 = *(long *)(param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x60);
  lVar6 = *(long *)(param_1 + 0x68);
  plStack_c0 = &lStack_90;
  func_0x000104c607c8(&plStack_c0);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  return ((((lVar1 != lVar4 && lVar5 != lVar12) && lVar8 != 0) && lVar11 != 0) && lVar3 != lVar6) &&
         lVar2 != 0;
}



/* Entry: 1094f7728; end: 1094f77a3;  */

undefined8 * FUN_1094f7728(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1094f77a4; end: 1094f77a7;  */

long FUN_1094f77a4(long param_1)

{
  long lStack_28;
  
  func_0x0001094d0850(param_1 + 0xb8);
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  lStack_28 = param_1 + 0x60;
  func_0x000104c607c8(&lStack_28);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  lStack_28 = param_1 + 0x30;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1 + 0x10;
  func_0x000104c607c8(&lStack_28);
  return param_1;
}



/* Entry: 1094f77a8; end: 1094f77bb;  */

void FUN_1094f77a8(void)

{
  FUN_1094f77bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094f77bc; end: 1094f784b;  */

long FUN_1094f77bc(long param_1)

{
  long lStack_28;
  
  func_0x0001094d0850(param_1 + 0xb8);
  if (*(long *)(param_1 + 0x98) != 0) {
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x98);
    __ZdlPv();
  }
  if (*(char *)(param_1 + 0x8f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x78));
  }
  lStack_28 = param_1 + 0x60;
  func_0x000104c607c8(&lStack_28);
  if (*(char *)(param_1 + 0x5f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x48));
  }
  lStack_28 = param_1 + 0x30;
  func_0x000104c607c8(&lStack_28);
  lStack_28 = param_1 + 0x10;
  func_0x000104c607c8(&lStack_28);
  return param_1;
}



/* Entry: 1094f784c; end: 1094f80e3;  */

/* WARNING: Removing unreachable block (ram,0x0001094f7ea0) */
/* WARNING: Removing unreachable block (ram,0x0001094f7dac) */
/* WARNING: Removing unreachable block (ram,0x0001094f7b88) */
/* WARNING: Removing unreachable block (ram,0x0001094f7b20) */
/* WARNING: Removing unreachable block (ram,0x0001094f7ab8) */
/* WARNING: Removing unreachable block (ram,0x0001094f7a50) */
/* WARNING: Removing unreachable block (ram,0x0001094f79e8) */
/* WARNING: Removing unreachable block (ram,0x0001094f7980) */
/* WARNING: Removing unreachable block (ram,0x0001094f7918) */
/* WARNING: Removing unreachable block (ram,0x0001094f78b0) */
/* WARNING: Removing unreachable block (ram,0x0001094f78e4) */
/* WARNING: Removing unreachable block (ram,0x0001094f794c) */
/* WARNING: Removing unreachable block (ram,0x0001094f79b4) */
/* WARNING: Removing unreachable block (ram,0x0001094f7a1c) */
/* WARNING: Removing unreachable block (ram,0x0001094f7a84) */
/* WARNING: Removing unreachable block (ram,0x0001094f7aec) */
/* WARNING: Removing unreachable block (ram,0x0001094f7b54) */
/* WARNING: Removing unreachable block (ram,0x0001094f7cf8) */
/* WARNING: Removing unreachable block (ram,0x0001094f7de0) */
/* WARNING: Removing unreachable block (ram,0x0001094f7eb0) */
/* WARNING: Removing unreachable block (ram,0x0001094f7d08) */

uint FUN_1094f784c(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  char **ppcVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  float fVar19;
  undefined8 auStack_140 [2];
  char cStack_129;
  int iStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  char *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  char *pcStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar9 = param_1;
  FUN_1094fbd58();
  iStack_124 = 1;
  if ((uint)lVar9 == 0) goto LAB_1094f7de8;
  lVar16 = *(long *)(param_1 + 0x10);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570c55);
  FUN_1094b4850(uVar13,&pcStack_a0,param_1 + 0x89);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570c85);
  func_0x0001094a86e8(uVar13,&pcStack_a0,param_1 + 0x90);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570caa);
  func_0x0001094a86e8(uVar13,&pcStack_a0,param_1 + 0xa8);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570ccd);
  func_0x0001094a6db0(uVar13,&pcStack_a0,param_1 + 0xc0);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570ce5);
  FUN_1094b4850(uVar13,&pcStack_a0,param_1 + 0xcc);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570cf9);
  FUN_1094b4850(uVar13,&pcStack_a0,param_1 + 0xcd);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570d0d);
  FUN_1094b4850(uVar13,&pcStack_a0,param_1 + 0xcf);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570d35);
  FUN_1094f80e4(uVar13,&pcStack_a0,&iStack_124);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570d55);
  FUN_1094b4850(uVar13,&pcStack_a0,param_1 + 0xce);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570d6f);
  FUN_1094b4850(uVar13,&pcStack_a0,param_1 + 0xd0);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570d7c);
  FUN_1094b4850(uVar13,&pcStack_a0,param_1 + 0xd1);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570d91);
  FUN_1094b4850(uVar13,&pcStack_a0,param_1 + 0xd2);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570da4);
  func_0x0001094b4944(uVar13,&pcStack_a0,param_1 + 0xd8);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570dc0);
  FUN_1094b4850(uVar13,&pcStack_a0,param_1 + 0xf0);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570dec);
  FUN_1094b4850(uVar13,&pcStack_a0,param_1 + 0xf1);
  puVar14 = *(undefined8 **)(lVar16 + 0xb8);
  func_0x000107c31940(auStack_140,&UNK_10f570e03);
  pcStack_a0 = (char *)*puVar14;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0x8000000000000000;
  cVar3 = *pcStack_a0;
  pcStack_f0 = pcStack_a0;
  if (cVar3 == '\x01') {
    uVar13 = *(undefined8 *)(pcStack_a0 + 8);
    FUN_1093793a4(uVar13,auStack_140);
    pcStack_a0 = (char *)*puVar14;
    cVar3 = *pcStack_a0;
    uStack_e8 = uVar13;
LAB_1094f7c08:
    lStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0x8000000000000000;
    if (cVar3 == '\x01') {
      lStack_98 = *(long *)(pcStack_a0 + 8) + 8;
    }
    else {
      if (cVar3 == '\x02') {
        lVar12 = *(long *)(pcStack_a0 + 8);
        goto LAB_1094f7c28;
      }
      uStack_88 = 1;
    }
  }
  else {
    if (cVar3 != '\x02') {
      uStack_d8 = 1;
      goto LAB_1094f7c08;
    }
    lVar12 = *(long *)(pcStack_a0 + 8);
    uStack_e0 = *(undefined8 *)(lVar12 + 8);
LAB_1094f7c28:
    uStack_88 = 0x8000000000000000;
    lStack_98 = 0;
    uStack_90 = *(undefined8 *)(lVar12 + 8);
  }
  ppcVar10 = &pcStack_f0;
  FUN_109379420(ppcVar10,&pcStack_a0);
  if (((ulong)ppcVar10 & 1) == 0) {
    ppcVar10 = &pcStack_f0;
    FUN_10937b950();
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_100 = 0x3f800000;
    if (*(char *)ppcVar10 != '\x01') {
      uVar13 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(ppcVar10);
      func_0x000107c31940(&uStack_d0,ppcVar10);
      FUN_10928a5e0(&pcStack_a0,&UNK_10f56746f,&uStack_d0);
      FUN_10937bbbc(uVar13,0x12e,&pcStack_a0);
      ___cxa_throw(uVar13,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1094f7fe0);
      (*pcVar5)();
    }
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0x3f800000;
    plVar15 = (long *)ppcVar10[1];
    plVar17 = (long *)*plVar15;
    while (plVar17 != plVar15 + 1) {
      FUN_10937c804(&uStack_68,plVar17 + 7);
      if (*(char *)((long)plVar17 + 0x37) < '\0') {
        func_0x000107c3192c(&pcStack_a0,plVar17[4],plVar17[5]);
      }
      else {
        lStack_98 = plVar17[5];
        pcStack_a0 = (char *)plVar17[4];
        uStack_90 = plVar17[6];
      }
      uStack_80 = uStack_60;
      uStack_88 = uStack_68;
      uStack_78 = uStack_58;
      FUN_1093ec574(&uStack_d0,&pcStack_a0,&pcStack_a0);
      plVar4 = (long *)plVar17[1];
      plVar18 = plVar17;
      if ((long *)plVar17[1] == (long *)0x0) {
        do {
          plVar17 = (long *)plVar18[2];
          bVar6 = (long *)*plVar17 != plVar18;
          plVar18 = plVar17;
        } while (bVar6);
      }
      else {
        do {
          plVar17 = plVar4;
          plVar4 = (long *)*plVar17;
        } while ((long *)*plVar17 != (long *)0x0);
      }
    }
    FUN_1094f977c(&uStack_120,&uStack_d0);
    func_0x000104c4f944(&uStack_d0);
    FUN_1094f977c(param_1 + 0xf8,&uStack_120);
    func_0x000104c4f944(&uStack_120);
  }
  if (cStack_129 < '\0') {
    __ZdlPv(auStack_140[0]);
  }
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570e19);
  func_0x0001094a86e8(uVar13,&pcStack_a0,param_1 + 0x138);
  uVar13 = *(undefined8 *)(lVar16 + 0xb8);
  func_0x000107c31940(&pcStack_a0,&UNK_10f570e29);
  FUN_1094a9268(uVar13,&pcStack_a0,param_1 + 0x150);
LAB_1094f7de8:
  pcStack_a0 = (char *)CONCAT44(pcStack_a0._4_4_,0xffffffff);
  FUN_1094f81d8(param_1 + 0x120,
                (*(long *)(*(long *)(param_1 + 0x10) + 0x18) -
                 *(long *)(*(long *)(param_1 + 0x10) + 0x10) >> 3) * -0x5555555555555555,&pcStack_a0
               );
  for (plVar17 = *(long **)(param_1 + 0x108); plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
    func_0x000104c4fc34(&pcStack_a0,plVar17 + 2);
    lVar16 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    FUN_1094dc248(lVar16,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),&pcStack_a0,&uStack_d0);
    lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    FUN_1094dc248(lVar12,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),&uStack_88,&uStack_d0);
    lVar11 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    *(int *)(*(long *)(param_1 + 0x120) +
            ((long)(((ulong)(lVar16 - lVar11) >> 3) * -0x5555555500000000) >> 0x1e)) =
         (int)((ulong)(lVar12 - lVar11) >> 3) * -0x55555555;
  }
  iVar1 = (uint)*(byte *)(param_1 + 0xd2) + *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x18) +
          (*(int *)(param_1 + 0x18) + -1) *
          ((uint)*(byte *)(param_1 + 0xd1) | (uint)*(byte *)(param_1 + 0xd0) << 1) +
          iStack_124 * ((uint)*(byte *)(param_1 + 0xf0) + (uint)*(byte *)(param_1 + 0xcf)) +
          (int)((ulong)(*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8)) >> 3);
  *(int *)(param_1 + 0xc4) = iVar1;
  iVar2 = *(int *)(*(long *)(param_1 + 0x10) + 0x28);
  *(uint *)(param_1 + 200) = iVar1 * (iVar2 + (iVar2 + -1) * (uint)*(byte *)(param_1 + 0xf1));
  lVar16 = (long)*(char *)(param_1 + 0xa7);
  if (lVar16 < 0) {
    lVar16 = *(long *)(param_1 + 0x98);
  }
  lVar12 = (long)*(char *)(param_1 + 0xbf);
  if (lVar12 < 0) {
    lVar12 = *(long *)(param_1 + 0xb0);
  }
  fVar19 = *(float *)(param_1 + 0xc0);
  bVar6 = false;
  bVar7 = true;
  bVar8 = false;
  if (lVar12 != 0 && lVar16 != 0) {
    bVar6 = false;
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar19)) {
      bVar6 = fVar19 < 0.0;
      bVar7 = fVar19 == 0.0;
      bVar8 = false;
    }
  }
  return (uint)lVar9 & (uint)(!bVar7 && bVar6 == bVar8);
}



/* Entry: 1094f80e4; end: 1094f81d7;  */

void FUN_1094f80e4(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcStack_60 = (char *)*param_1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x8000000000000000;
  cVar1 = *pcStack_60;
  pcStack_40 = pcStack_60;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_60 + 8);
    FUN_1093793a4();
    pcStack_60 = (char *)*param_1;
    cVar1 = *pcStack_60;
    uStack_38 = uVar2;
LAB_1094f815c:
    lStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_58 = *(long *)(pcStack_60 + 8) + 8;
      goto LAB_1094f81a0;
    }
    if (cVar1 != '\x02') {
      uStack_48 = 1;
      goto LAB_1094f81a0;
    }
    uStack_50 = *(undefined8 *)(*(long *)(pcStack_60 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_28 = 1;
      goto LAB_1094f815c;
    }
    uStack_50 = *(undefined8 *)(*(long *)(pcStack_60 + 8) + 8);
    uStack_30 = uStack_50;
  }
  uStack_48 = 0x8000000000000000;
  lStack_58 = 0;
LAB_1094f81a0:
  ppcVar3 = &pcStack_40;
  FUN_109379420(ppcVar3,&pcStack_60);
  if (((ulong)ppcVar3 & 1) == 0) {
    FUN_10937b950(&pcStack_40);
    FUN_109407a04();
    *param_3 = pcStack_60._0_4_;
  }
  return;
}



/* Entry: 1094f81d8; end: 1094f8207;  */

long * FUN_1094f81d8(long *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar6 = param_1[1] - *param_1 >> 2;
  if (param_2 <= uVar6) {
    if (param_2 < uVar6) {
      param_1[1] = *param_1 + param_2 * 4;
    }
    return param_1;
  }
  param_2 = param_2 - uVar6;
  puVar4 = (undefined4 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar4 >> 2) < param_2) {
    lVar9 = (long)puVar4 - *param_1;
    uVar6 = param_2 + (lVar9 >> 2);
    if (uVar6 >> 0x3e != 0) {
      FUN_10923f788();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_1094f9480();
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      FUN_10939e580(param_1 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                    *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      FUN_1092cc0dc(param_1 + 6,*(long *)(param_2 + 0x30),*(long *)(param_2 + 0x38),
                    *(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 2);
      lVar9 = *(long *)(param_2 + 0x48);
      param_1[10] = 0;
      param_1[9] = lVar9;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      FUN_1094f95a0();
      return param_1;
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 1;
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    if (0x7ffffffffffffffb < uVar7) {
      uVar8 = 0x3fffffffffffffff;
    }
    if (uVar8 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10923f79c();
    }
    puVar4 = (undefined4 *)((long)plVar2 + lVar9);
    lVar9 = param_2 * 4;
    uVar1 = *param_3;
    puVar5 = puVar4;
    do {
      *puVar5 = uVar1;
      lVar9 = lVar9 + -4;
      puVar5 = puVar5 + 1;
    } while (lVar9 != 0);
    lVar9 = (long)puVar4 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    plVar3 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = (long)(puVar4 + param_2);
    param_1[2] = (long)plVar2 + uVar8 * 4;
    param_1 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar3;
    }
  }
  else {
    puVar5 = puVar4;
    if (param_2 != 0) {
      uVar1 = *param_3;
      lVar9 = param_2 * 4;
      puVar5 = puVar4 + param_2;
      do {
        *puVar4 = uVar1;
        lVar9 = lVar9 + -4;
        puVar4 = puVar4 + 1;
      } while (lVar9 != 0);
    }
    param_1[1] = (long)puVar5;
  }
  return param_1;
}



/* Entry: 1094f8208; end: 1094f8ae7;  */

void FUN_1094f8208(long param_1,long param_2,long *param_3,long param_4,undefined8 param_5)

{
  float *pfVar1;
  long *plVar2;
  int iVar3;
  float ****ppppfVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  code *pcVar13;
  float *****pppppfVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  float ****ppppfVar18;
  float ****ppppfVar19;
  float *pfVar20;
  long lVar21;
  float *pfVar22;
  float ****ppppfVar23;
  float ****ppppfVar24;
  float ****ppppfVar25;
  float ****ppppfVar26;
  float ****ppppfVar27;
  float ****ppppfVar28;
  long lVar29;
  ulong uVar30;
  int iVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  undefined1 auStack_220 [40];
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [32];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  float ***pppfStack_190;
  float ***pppfStack_188;
  float ***pppfStack_180;
  float *pfStack_170;
  float *pfStack_168;
  long lStack_158;
  long lStack_150;
  long lStack_138;
  long lStack_130;
  float ***pppfStack_120;
  float ***pppfStack_118;
  float ***pppfStack_110;
  float ****ppppfStack_108;
  float ****ppppfStack_100;
  float ****ppppfStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  float fStack_d8;
  undefined1 uStack_d4;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  
  FUN_1094cf9dc(auStack_b8,param_2 + 0x40);
  uVar32 = NEON_ucvtf(*(undefined4 *)(param_4 + 0x14));
  uVar35 = NEON_ucvtf(*(undefined4 *)(param_4 + 0x10));
  FUN_1094f8ae8(auStack_90,uVar32,uVar35,param_1,auStack_b8,param_2,param_5);
  func_0x0001094cffd4(auStack_b8);
  uStack_d4 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  lStack_d0 = 0;
  pppfStack_118 = (float ***)0x0;
  pppfStack_120 = (float ***)0x0;
  ppppfStack_108 = (float ****)0x0;
  pppfStack_110 = (float ***)0x0;
  ppppfStack_f8 = (float ****)0x0;
  ppppfStack_100 = (float ****)0x0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  uStack_df = 0;
  fStack_d8 = (float)((uint)fStack_d8 & 0xffffff00);
  uStack_e7 = 0;
  uStack_e0 = 0;
  FUN_1094fb92c(&pppfStack_190,param_1,auStack_90);
  pppfStack_118 = pppfStack_188;
  pppfStack_120 = pppfStack_190;
  pppfStack_110 = pppfStack_180;
  if (((*(byte *)(param_1 + 0xd0) & 1) != 0) || (*(char *)(param_1 + 0xd1) == '\x01')) {
    ppppfStack_100 = (float ****)0x0;
    FUN_1093f458c(&ppppfStack_108,
                  (*(long *)(*(long *)(param_1 + 0x10) + 0x18) -
                   *(long *)(*(long *)(param_1 + 0x10) + 0x10) >> 3) * -0x5555555555555555 + -1);
    if (pppfStack_118 != pppfStack_120) {
      lVar29 = 0;
      uVar30 = 0;
      ppppfVar18 = (float ****)pppfStack_118;
      ppppfVar19 = (float ****)pppfStack_120;
      do {
        iVar9 = *(int *)(*(long *)(param_1 + 0x120) + uVar30 * 4);
        if (iVar9 != -1) {
          uVar37 = *(undefined8 *)((long)ppppfVar19 + (long)iVar9 * 0x14);
          pppfStack_190 =
               (float ***)
               CONCAT44((float)((ulong)*(undefined8 *)((long)ppppfVar19 + lVar29) >> 0x20) -
                        (float)((ulong)uVar37 >> 0x20),
                        (float)*(undefined8 *)((long)ppppfVar19 + lVar29) - (float)uVar37);
          if (ppppfStack_100 < ppppfStack_f8) {
            *ppppfStack_100 = pppfStack_190;
            ppppfStack_100 = ppppfStack_100 + 1;
          }
          else {
            pppppfVar14 = &ppppfStack_108;
            FUN_1092de294(pppppfVar14,&pppfStack_190);
            ppppfVar18 = (float ****)pppfStack_118;
            ppppfVar19 = (float ****)pppfStack_120;
            ppppfStack_100 = (float ****)pppppfVar14;
          }
        }
        uVar30 = uVar30 + 1;
        lVar29 = lVar29 + 0x14;
      } while (uVar30 < (ulong)(((long)ppppfVar18 - (long)ppppfVar19 >> 2) * -0x3333333333333333));
    }
  }
  if (*(char *)(param_1 + 0xd1) == '\x01') {
    pppfStack_190 = (float ***)0x0;
    pppfStack_188 = (float ***)0x0;
    pppfStack_180 = (float ***)0x0;
    func_0x0001073b504c(&pppfStack_190,(long)ppppfStack_100 - (long)ppppfStack_108 >> 3);
    ppppfVar18 = ppppfStack_100;
    for (pppppfVar14 = (float *****)ppppfStack_108; pppppfVar14 != (float *****)ppppfVar18;
        pppppfVar14 = pppppfVar14 + 1) {
      ppuStack_1f8 = (undefined **)
                     CONCAT44(ppuStack_1f8._4_4_,
                              SQRT(*(float *)((long)pppppfVar14 + 4) *
                                   *(float *)((long)pppppfVar14 + 4) +
                                   *(float *)pppppfVar14 * *(float *)pppppfVar14));
      FUN_10939f5b4(&pppfStack_190,&ppuStack_1f8);
    }
    FUN_10942bf40(&lStack_f0,pppfStack_190,pppfStack_188,
                  (long)pppfStack_188 - (long)pppfStack_190 >> 2);
    if ((float ****)pppfStack_190 != (float ****)0x0) {
      pppfStack_188 = pppfStack_190;
      __ZdlPv();
    }
  }
  if (*(char *)(param_1 + 0xd2) == '\x01') {
    ppppfVar19 = (float ****)pppfStack_120;
    ppppfVar23 = (float ****)pppfStack_120;
    ppppfVar18 = (float ****)pppfStack_120;
    ppppfVar26 = (float ****)pppfStack_120;
    if ((pppfStack_120 != pppfStack_118) &&
       (ppppfVar27 = (float ****)((long)pppfStack_120 + 0x14),
       ppppfVar27 != (float ****)pppfStack_118)) {
      fVar33 = *(float *)((long)pppfStack_120 + 0x14);
      fVar36 = *(float *)pppfStack_120;
      ppppfVar23 = ppppfVar27;
      if (fVar36 <= fVar33) {
        ppppfVar19 = ppppfVar27;
        ppppfVar23 = (float ****)pppfStack_120;
      }
      ppppfVar18 = (float ****)(pppfStack_120 + 5);
      ppppfVar26 = ppppfVar27;
      if (ppppfVar18 == (float ****)pppfStack_118) {
        ppppfVar18 = (float ****)pppfStack_120;
        if (*(float *)((long)pppfStack_120 + 4) <= *(float *)(pppfStack_120 + 3)) {
          ppppfVar18 = ppppfVar27;
          ppppfVar26 = (float ****)pppfStack_120;
        }
      }
      else {
        ppppfVar28 = (float ****)pppfStack_120;
        ppppfVar25 = ppppfVar18;
        if (fVar36 <= fVar33) {
          fVar33 = fVar36;
        }
        do {
          ppppfVar24 = ppppfVar25;
          if ((float ****)((long)ppppfVar25 + 0x14) == (float ****)pppfStack_118) {
            if ((*(float *)ppppfVar23 <= *(float *)ppppfVar25) &&
               (ppppfVar24 = ppppfVar23, *(float *)ppppfVar19 <= *(float *)ppppfVar25)) {
              ppppfVar19 = ppppfVar25;
            }
            break;
          }
          fVar36 = *(float *)((long)ppppfVar25 + 0x14);
          fVar38 = *(float *)ppppfVar25;
          if (fVar38 <= fVar36) {
            fVar34 = fVar38;
            if (fVar33 <= fVar38) {
              ppppfVar24 = ppppfVar23;
              fVar34 = fVar33;
            }
            if (*(float *)ppppfVar19 <= fVar36) {
              ppppfVar19 = (float ****)((long)ppppfVar28 + 0x3c);
            }
          }
          else {
            ppppfVar24 = (float ****)((long)ppppfVar25 + 0x14);
            fVar34 = fVar36;
            if (*(float *)ppppfVar23 <= fVar36) {
              ppppfVar24 = ppppfVar23;
              fVar34 = *(float *)ppppfVar23;
            }
            if (*(float *)ppppfVar19 <= fVar38) {
              ppppfVar19 = ppppfVar25;
            }
          }
          ppppfVar4 = ppppfVar25 + 5;
          ppppfVar23 = ppppfVar24;
          ppppfVar28 = ppppfVar25;
          ppppfVar25 = ppppfVar4;
          fVar33 = fVar34;
        } while (ppppfVar4 != (float ****)pppfStack_118);
        ppppfVar25 = (float ****)pppfStack_120;
        ppppfVar28 = (float ****)pppfStack_120;
        if (*(float *)((long)pppfStack_120 + 4) <= *(float *)(pppfStack_120 + 3)) {
          ppppfVar26 = (float ****)pppfStack_120;
          ppppfVar28 = ppppfVar27;
        }
        do {
          ppppfVar27 = ppppfVar18;
          ppppfVar23 = ppppfVar24;
          if ((float ****)((long)ppppfVar18 + 0x14) == (float ****)pppfStack_118) {
            if ((*(float *)((long)ppppfVar26 + 4) <= *(float *)((long)ppppfVar18 + 4)) &&
               (ppppfVar27 = ppppfVar26,
               *(float *)((long)ppppfVar28 + 4) <= *(float *)((long)ppppfVar18 + 4)))
            goto LAB_1094f85b8;
            break;
          }
          fVar33 = *(float *)(ppppfVar18 + 3);
          fVar36 = *(float *)((long)ppppfVar18 + 4);
          if (*(float *)((long)ppppfVar26 + 4) <= fVar36) {
            ppppfVar27 = ppppfVar26;
          }
          ppppfVar4 = ppppfVar28;
          if (*(float *)((long)ppppfVar28 + 4) <= fVar33) {
            ppppfVar4 = (float ****)((long)ppppfVar25 + 0x3c);
          }
          ppppfVar25 = (float ****)((long)ppppfVar18 + 0x14);
          if (*(float *)((long)ppppfVar26 + 4) <= fVar33) {
            ppppfVar25 = ppppfVar26;
          }
          ppppfVar26 = ppppfVar28;
          if (*(float *)((long)ppppfVar28 + 4) <= fVar36) {
            ppppfVar26 = ppppfVar18;
          }
          ppppfVar28 = ppppfVar4;
          if (fVar33 < fVar36) {
            ppppfVar28 = ppppfVar26;
            ppppfVar27 = ppppfVar25;
          }
          ppppfVar4 = ppppfVar18 + 5;
          ppppfVar25 = ppppfVar18;
          ppppfVar18 = ppppfVar4;
          ppppfVar26 = ppppfVar27;
        } while (ppppfVar4 != (float ****)pppfStack_118);
        ppppfVar18 = ppppfVar28;
        ppppfVar26 = ppppfVar27;
      }
    }
LAB_1094f85b8:
    fStack_d8 = (*(float *)ppppfVar19 - *(float *)ppppfVar23) *
                (*(float *)((long)ppppfVar18 + 4) - *(float *)((long)ppppfVar26 + 4));
    uStack_d4 = 1;
  }
  FUN_10940fe7c(&lStack_d0,
                (*(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 3) * -0x5555555555555555);
  lVar29 = *(long *)(param_1 + 0xd8);
  lVar17 = *(long *)(param_1 + 0xe0);
  do {
    if (lVar29 == lVar17) {
      pppfStack_190 = *(float ****)(param_4 + 8);
      FUN_1094f9370(&pppfStack_188,&pppfStack_120);
      FUN_1094f8ea4(param_3 + 3,&pppfStack_190);
      if (lStack_138 != 0) {
        lStack_130 = lStack_138;
        __ZdlPv();
      }
      if (lStack_158 != 0) {
        lStack_150 = lStack_158;
        __ZdlPv();
      }
      if (pfStack_170 != (float *)0x0) {
        pfStack_168 = pfStack_170;
        __ZdlPv();
      }
      if ((float ****)pppfStack_188 != (float ****)0x0) {
        pppfStack_180 = pppfStack_188;
        __ZdlPv();
      }
      while (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) < (ulong)param_3[8]) {
        func_0x0001094f8fa4(param_3 + 3);
      }
      uStack_198 = *(undefined4 *)(param_1 + 200);
      uStack_194 = 1;
      uStack_1a8 = 1;
      uStack_1a0 = 0x100000001;
      func_0x000109cdb584(&pppfStack_190,*(undefined8 *)(param_1 + 8),&uStack_1a0,&uStack_1a8);
      iVar9 = *(int *)(*(long *)(param_1 + 0x10) + 0x28);
      iVar6 = *(int *)(param_1 + 0x150);
      iVar31 = (iVar9 + -1) * iVar6;
      pfVar20 = pfStack_170;
      if (-1 < iVar31) {
        iVar11 = 0;
        if (iVar6 != 0) {
          iVar11 = ((int)param_3[8] + -1) / iVar6;
        }
        do {
          iVar3 = iVar11 * iVar6;
          if (iVar31 <= iVar11 * iVar6) {
            iVar3 = iVar31;
          }
          lVar29 = *(long *)(param_3[4] + ((ulong)(param_3[7] + (long)iVar3) / 0x24) * 8) +
                   ((ulong)(param_3[7] + (long)iVar3) % 0x24) * 0x70;
          pfVar5 = *(float **)(lVar29 + 0x10);
          pfVar22 = pfVar20;
          if (*(float **)(lVar29 + 8) != pfVar5) {
            cVar8 = *(char *)(*(long *)(param_1 + 0x10) + 8);
            pfVar20 = *(float **)(lVar29 + 8) + 2;
            do {
              *pfVar22 = pfVar20[-2];
              pfVar22[1] = pfVar20[-1];
              if (cVar8 == '\0') {
                pfVar22 = pfVar22 + 2;
              }
              else {
                pfVar22[2] = *pfVar20;
                pfVar22 = pfVar22 + 3;
              }
              pfVar1 = pfVar20 + 3;
              pfVar20 = pfVar20 + 5;
            } while (pfVar1 != pfVar5);
          }
          if ((*(byte *)(param_1 + 0xcf) & 1) != 0) {
            pfVar5 = (float *)param_3[1];
            for (pfVar20 = (float *)*param_3; pfVar20 != pfVar5; pfVar20 = pfVar20 + 1) {
              *pfVar22 = *pfVar20;
              pfVar22 = pfVar22 + 1;
            }
          }
          if (*(char *)(param_1 + 0xd0) == '\x01') {
            pfVar5 = *(float **)(lVar29 + 0x28);
            for (pfVar20 = *(float **)(lVar29 + 0x20); pfVar20 != pfVar5; pfVar20 = pfVar20 + 2) {
              *pfVar22 = *pfVar20;
              pfVar22[1] = pfVar20[1];
              pfVar22 = pfVar22 + 2;
            }
          }
          if (*(char *)(param_1 + 0xd1) == '\x01') {
            lVar17 = *(long *)(lVar29 + 0x38);
            lVar15 = *(long *)(lVar29 + 0x40) - lVar17;
            lVar21 = lVar17;
            if (lVar15 != 0) {
              _memmove(pfVar22,lVar17,lVar15);
              lVar17 = *(long *)(lVar29 + 0x38);
              lVar21 = *(long *)(lVar29 + 0x40);
            }
            pfVar22 = (float *)((long)pfVar22 + (lVar21 - lVar17));
          }
          pfVar20 = pfVar22;
          if (*(char *)(param_1 + 0xd2) == '\x01') {
            pfVar20 = pfVar22 + 1;
            *pfVar22 = *(float *)(lVar29 + 0x50);
          }
          pfVar5 = *(float **)(lVar29 + 0x60);
          for (pfVar22 = *(float **)(lVar29 + 0x58); pfVar22 != pfVar5; pfVar22 = pfVar22 + 3) {
            *pfVar20 = *pfVar22;
            pfVar20[1] = pfVar22[1];
            pfVar20[2] = pfVar22[2];
            pfVar20 = pfVar20 + 3;
          }
          if ((*(byte *)(param_1 + 0xf0) & 1) != 0) {
            pfVar5 = (float *)param_3[1];
            for (pfVar22 = (float *)*param_3; pfVar22 != pfVar5; pfVar22 = pfVar22 + 1) {
              fVar33 = *pfVar22;
              _logf();
              *pfVar20 = fVar33;
              pfVar20 = pfVar20 + 1;
            }
          }
          iVar31 = iVar31 - *(int *)(param_1 + 0x150);
        } while (-1 < iVar31);
      }
      if ((*(byte *)(param_1 + 0xf1) & 1) != 0) {
        uVar7 = *(uint *)(param_1 + 0xc4);
        uVar10 = uVar7 * iVar9;
        if (uVar7 != uVar10) {
          lVar29 = (ulong)uVar10 * 4 + (ulong)uVar7 * -4;
          do {
            *pfVar20 = pfStack_170[uVar7] - *pfStack_170;
            lVar29 = lVar29 + -4;
            pfVar20 = pfVar20 + 1;
            pfStack_170 = pfStack_170 + 1;
          } while (lVar29 != 0);
        }
      }
      func_0x000109cdb2c4(auStack_220,*(undefined8 *)(param_1 + 8),&pppfStack_190,1);
      puVar16 = auStack_220;
      FUN_10938e710(puVar16,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60));
      if (puVar16 != (undefined1 *)0x0) {
        ppuStack_1f8 = &PTR_DAT_1108a5c28;
        uStack_1e8 = *(undefined8 *)(puVar16 + 0x38);
        uStack_1f0 = *(undefined8 *)(puVar16 + 0x30);
        uStack_1e0 = *(undefined8 *)(puVar16 + 0x40);
        uStack_1d0 = *(undefined8 *)(puVar16 + 0x50);
        uStack_1d8 = *(undefined8 *)(puVar16 + 0x48);
        if (*(long *)(puVar16 + 0x50) != 0) {
          plVar2 = (long *)(*(long *)(puVar16 + 0x50) + 8);
          do {
            cVar8 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar12) {
              *plVar2 = *plVar2 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        FUN_109407928(auStack_1c8,puVar16 + 0x58);
        func_0x000109379fe8(auStack_220);
        FUN_1094f9014(param_1,&ppuStack_1f8,param_2);
        func_0x000105675c90(&ppuStack_1f8);
        func_0x000105675c90(&pppfStack_190);
        if (lStack_d0 != 0) {
          lStack_c8 = lStack_d0;
          __ZdlPv();
        }
        if (lStack_f0 != 0) {
          uStack_e8 = (undefined1)lStack_f0;
          uStack_e7 = (undefined7)((ulong)lStack_f0 >> 8);
          __ZdlPv();
        }
        if ((float *****)ppppfStack_108 != (float *****)0x0) {
          ppppfStack_100 = ppppfStack_108;
          __ZdlPv();
        }
        if ((float ****)pppfStack_120 != (float ****)0x0) {
          pppfStack_118 = pppfStack_120;
          __ZdlPv();
        }
        func_0x0001094cffd4(auStack_90);
        return;
      }
      FUN_109262df8(&UNK_10f639994);
LAB_1094f8a34:
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1094f8a38);
      (*pcVar13)();
    }
    lVar15 = param_2 + 0xb8;
    func_0x0001094e1e48(lVar15,lVar29);
    if (lVar15 == 0) {
      FUN_109262df8(&UNK_10f639994);
      goto LAB_1094f8a34;
    }
    FUN_109410cf8(&lStack_d0,lVar15 + 0x28);
    lVar29 = lVar29 + 0x18;
  } while( true );
}



/* Entry: 1094f8ae8; end: 1094f8ea3;  */

void FUN_1094f8ae8(undefined8 param_1,float param_2,float param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  float *******pppppppfVar1;
  float *******pppppppfVar2;
  float *******pppppppfVar3;
  float *******pppppppfVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  float *******pppppppfVar8;
  long *plVar9;
  ulong uVar10;
  float *******pppppppfVar11;
  ushort uVar12;
  byte bVar13;
  long *plVar14;
  ulong uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  float ******ppppppfStack_78;
  float ******ppppppfStack_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_4 + 0xcc) == '\x01') {
    if (*(char *)(param_6 + 0x214) == '\x01') {
      uVar12 = 0;
      if ((*(ushort *)(param_6 + 0x210) & 0x100) != 0) {
        uVar12 = *(ushort *)(param_6 + 0x210) ^ 1;
      }
      goto LAB_1094f8b50;
    }
    func_0x000105688514(&UNK_10f570e36);
  }
  else {
    uVar12 = 0;
LAB_1094f8b50:
    bVar13 = *(byte *)(param_4 + 0xce);
    if ((param_7 == 0) && ((bVar13 & 1) != 0)) {
      FUN_10937e740(&ppppppfStack_78,&UNK_10f570f03);
      FUN_109388c6c(2,&UNK_10f570e67,&UNK_10f570ef0,0x83,&ppppppfStack_78);
      if (uStack_68._7_1_ < '\0') {
        __ZdlPv(ppppppfStack_78);
      }
      bVar13 = 0;
    }
    ppppppfStack_78 = (float ******)0x0;
    ppppppfStack_70 = (float ******)0x0;
    uStack_68 = (float *******)0x0;
    if (((bVar13 & 1) != 0) || ((*(byte *)(param_4 + 0xcd) & 1) != 0)) {
      FUN_1093f458c(&ppppppfStack_78,*(undefined8 *)(param_5 + 0x18));
      for (plVar14 = *(long **)(param_5 + 0x10); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14)
      {
        fVar16 = param_2 * *(float *)(plVar14 + 5);
        fVar18 = param_3 * *(float *)((long)plVar14 + 0x2c);
        *(float *)(plVar14 + 5) = fVar16;
        *(float *)((long)plVar14 + 0x2c) = fVar18;
        if ((bVar13 & 1) != 0) {
          if (ppppppfStack_70 < uStack_68) {
            *(float *)ppppppfStack_70 = fVar16;
            *(float *)((long)ppppppfStack_70 + 4) = fVar18;
            ppppppfStack_70 = ppppppfStack_70 + 1;
          }
          else {
            pppppppfVar8 = &ppppppfStack_78;
            FUN_1092cbf20();
            ppppppfStack_70 = (float ******)pppppppfVar8;
          }
        }
      }
      uVar10 = (long)uStack_68 - (long)ppppppfStack_78;
      uVar15 = (long)ppppppfStack_70 - (long)ppppppfStack_78;
      if (uVar15 < uVar10) {
        if (ppppppfStack_70 == ppppppfStack_78) {
          pppppppfVar8 = (float *******)0x0;
          uVar7 = 0;
        }
        else {
          uVar7 = (long)uVar15 >> 3;
          pppppppfVar8 = &ppppppfStack_78;
          FUN_1092cc0a8();
          uVar10 = (long)uStack_68 - (long)ppppppfStack_78;
        }
        pppppppfVar2 = pppppppfVar8;
        pppppppfVar1 = (float *******)ppppppfStack_78;
        pppppppfVar4 = (float *******)ppppppfStack_70;
        if (uVar7 < (ulong)((long)uVar10 >> 3)) {
          pppppppfVar1 = (float *******)
                         ((long)((long)pppppppfVar8 + uVar15) +
                         ((long)ppppppfStack_78 - (long)ppppppfStack_70));
          pppppppfVar3 = pppppppfVar1;
          for (pppppppfVar11 = (float *******)ppppppfStack_78;
              pppppppfVar2 = (float *******)ppppppfStack_78,
              pppppppfVar4 = (float *******)((long)pppppppfVar8 + uVar15),
              uStack_68 = pppppppfVar8 + uVar7, (float *******)ppppppfStack_70 != pppppppfVar11;
              pppppppfVar11 = pppppppfVar11 + 1) {
            *pppppppfVar3 = *pppppppfVar11;
            pppppppfVar3 = pppppppfVar3 + 1;
          }
        }
        ppppppfStack_70 = (float ******)pppppppfVar4;
        ppppppfStack_78 = (float ******)pppppppfVar1;
        if (pppppppfVar2 != (float *******)0x0) {
          __ZdlPv(pppppppfVar2);
        }
      }
    }
    if ((bVar13 & 1) != 0) {
      plStack_90 = (long *)0x0;
      plStack_88 = (long *)0x0;
      uStack_80 = 0;
      FUN_1093f458c(&plStack_90,(long)ppppppfStack_70 - (long)ppppppfStack_78 >> 3);
      FUN_1094f91b4(param_7,&ppppppfStack_78,&plStack_90);
      plVar9 = *(long **)(param_5 + 0x10);
      plVar14 = plStack_90;
      if (plVar9 == (long *)0x0) {
        if (plStack_90 == (long *)0x0) goto LAB_1094f8d0c;
      }
      else {
        do {
          plVar9[5] = *plVar14;
          plVar9 = (long *)*plVar9;
          plVar14 = plVar14 + 1;
        } while (plVar9 != (long *)0x0);
      }
      plStack_88 = plStack_90;
      __ZdlPv();
    }
LAB_1094f8d0c:
    if ((uVar12 & 1) != 0) {
      for (plVar14 = *(long **)(param_5 + 0x10); plVar14 != (long *)0x0; plVar14 = (long *)*plVar14)
      {
        if ((bVar13 & 1) == 0) {
          fVar16 = 1.0 - *(float *)(plVar14 + 5);
          if (*(char *)(param_4 + 0xcd) == '\x01') {
            fVar16 = param_2 - *(float *)(plVar14 + 5);
          }
        }
        else {
          fVar16 = -*(float *)(plVar14 + 5);
        }
        *(float *)(plVar14 + 5) = fVar16;
      }
    }
    if (*(char *)(param_4 + 0x89) != '\x01') {
LAB_1094f8dd8:
      FUN_1094e1794(param_1,param_5);
      if ((float *******)ppppppfStack_78 != (float *******)0x0) {
        ppppppfStack_70 = ppppppfStack_78;
        __ZdlPv();
      }
      return;
    }
    lVar6 = param_5;
    FUN_1094e1d64(param_5,param_4 + 0x90);
    if (lVar6 != 0) {
      uVar17 = *(undefined8 *)(lVar6 + 0x28);
      lVar6 = param_5;
      FUN_1094e1d64(param_5,param_4 + 0xa8);
      if (lVar6 != 0) {
        plVar14 = *(long **)(param_5 + 0x10);
        if (plVar14 != (long *)0x0) {
          fVar19 = (float)uVar17;
          fVar16 = *(float *)(lVar6 + 0x28) - fVar19;
          fVar20 = (float)((ulong)uVar17 >> 0x20);
          fVar18 = *(float *)(lVar6 + 0x2c) - fVar20;
          fVar16 = 1.0 / (*(float *)(param_4 + 0xc0) * SQRT(fVar16 * fVar16 + fVar18 * fVar18));
          do {
            plVar14[5] = CONCAT44(((float)((ulong)plVar14[5] >> 0x20) - fVar20) * fVar16,
                                  ((float)plVar14[5] - fVar19) * fVar16);
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        goto LAB_1094f8dd8;
      }
      FUN_109262df8(&UNK_10f639994);
      goto LAB_1094f8e3c;
    }
  }
  FUN_109262df8(&UNK_10f639994);
LAB_1094f8e3c:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1094f8e40);
  (*pcVar5)();
}



/* Entry: 1094f8ea4; end: 1094f9013;  */

void FUN_1094f8ea4(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  if (uVar2 == 0) {
    FUN_1094f9870(param_1);
    uVar2 = *(ulong *)(param_1 + 0x20);
  }
  plVar1 = (long *)(*(long *)(param_1 + 8) + (uVar2 / 0x24) * 8);
  lVar4 = *plVar1;
  lVar3 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar3 = lVar4 + (uVar2 % 0x24) * 0x70;
  }
  if (lVar3 == lVar4) {
    lVar3 = plVar1[-1] + 0xfc0;
  }
  FUN_1094f9fe8(lVar3 + -0x70,param_2);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  return;
}



/* Entry: 1094f9014; end: 1094f9153;  */

void FUN_1094f9014(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 uStack_69;
  long lStack_68;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    lVar5 = *(long *)(param_2 + 0x20);
    do {
      uVar6 = *(undefined4 *)(lVar5 + uVar4 * 4);
      lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x30) + lVar3;
      lVar2 = param_3 + 0x40;
      lStack_68 = lVar1;
      FUN_1094e1a28(lVar2,lVar1,&UNK_10dd5b8f9,&lStack_68,&uStack_69);
      uVar7 = *(undefined8 *)(lVar2 + 0x28);
      lVar2 = param_3 + 0x68;
      lStack_68 = lVar1;
      FUN_1094edafc(lVar2,lVar1,&UNK_10dd5b8f9,&lStack_68,&uStack_69);
      *(undefined8 *)(lVar2 + 0x28) = uVar7;
      *(undefined4 *)(lVar2 + 0x30) = uVar6;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *(ulong *)(param_1 + 0x20));
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  lVar3 = param_1 + 0x90;
  FUN_1094dc248(lVar5,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38),lVar3,&lStack_68);
  if (lVar5 == *(long *)(*(long *)(param_1 + 0x10) + 0x38)) {
    lVar5 = param_3 + 0x40;
    lStack_68 = lVar3;
    FUN_1094e1a28(lVar5,lVar3,&UNK_10dd5b8f9,&lStack_68,&uStack_69);
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    param_3 = param_3 + 0x68;
    lStack_68 = lVar3;
    FUN_1094edafc(param_3,lVar3,&UNK_10dd5b8f9,&lStack_68,&uStack_69);
    *(undefined8 *)(param_3 + 0x28) = uVar7;
    *(undefined4 *)(param_3 + 0x30) = 0;
  }
  return;
}



/* Entry: 1094f9154; end: 1094f91b3;  */

long * FUN_1094f9154(long *param_1)

{
  if (param_1[10] != 0) {
    param_1[0xb] = param_1[10];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1094f91b4; end: 1094f924f;  */

void FUN_1094f91b4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  undefined8 *puVar4;
  
  FUN_1092e3d84(param_3,param_2[1] - *param_2 >> 3);
  puVar1 = (undefined8 *)param_2[1];
  if ((undefined8 *)*param_2 != puVar1) {
    puVar2 = (undefined8 *)*param_3;
    puVar3 = (undefined8 *)*param_2;
    do {
      puVar4 = puVar3 + 1;
      dStack_40 = (double)param_1[6] * ((double)(float)*puVar3 - (double)param_1[8]);
      dStack_38 = (double)param_1[7] *
                  ((double)(float)((ulong)*puVar3 >> 0x20) - (double)param_1[9]);
      (**(code **)(*(long *)*param_1 + 0x20))(&dStack_50,(long *)*param_1,&dStack_40);
      *puVar2 = CONCAT44((float)dStack_48,(float)dStack_50);
      puVar2 = puVar2 + 1;
      puVar3 = puVar4;
    } while (puVar4 != puVar1);
  }
  return;
}



/* Entry: 1094f9250; end: 1094f9253;  */

undefined8 * FUN_1094f9250(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_28;
  
  if (*(char *)((long)param_1 + 0x14f) < '\0') {
    __ZdlPv(param_1[0x27]);
  }
  if (param_1[0x24] != 0) {
    param_1[0x25] = param_1[0x24];
    __ZdlPv();
  }
  func_0x000104c4f944(param_1 + 0x1f);
  puStack_28 = param_1 + 0x1b;
  func_0x000104c607c8(&puStack_28);
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  *param_1 = &PTR_FUN_110af9430;
  if (param_1[0xc] != 0) {
    piVar1 = (int *)(param_1[0xc] + 0x14);
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
      func_0x000109a848d4(param_1 + 5);
    }
  }
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar5 = 0;
    lVar7 = param_1[0xd];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2c));
  }
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  *param_1 = &PTR_FUN_110af93d0;
  FUN_1094f9754(param_1 + 2,0);
  FUN_10938cda4(param_1 + 1,0);
  return param_1;
}



/* Entry: 1094f9254; end: 1094f9267;  */

void FUN_1094f9254(void)

{
  FUN_1094f9620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094f9268; end: 1094f936f;  */

long * FUN_1094f9268(long *param_1,ulong param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  puVar5 = (undefined4 *)param_1[1];
  if ((ulong)(param_1[2] - (long)puVar5 >> 2) < param_2) {
    lVar9 = (long)puVar5 - *param_1;
    uVar1 = param_2 + (lVar9 >> 2);
    if (uVar1 >> 0x3e != 0) {
      FUN_10923f788();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      FUN_1094f9480();
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      FUN_10939e580(param_1 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                    *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      FUN_1092cc0dc(param_1 + 6,*(long *)(param_2 + 0x30),*(long *)(param_2 + 0x38),
                    *(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 2);
      lVar9 = *(long *)(param_2 + 0x48);
      param_1[10] = 0;
      param_1[9] = lVar9;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      FUN_1094f95a0();
      return param_1;
    }
    uVar7 = param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 1;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffffb < uVar7) {
      uVar8 = 0x3fffffffffffffff;
    }
    if (uVar8 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10923f79c();
    }
    puVar5 = (undefined4 *)((long)plVar3 + lVar9);
    lVar9 = param_2 << 2;
    uVar2 = *param_3;
    puVar6 = puVar5;
    do {
      *puVar6 = uVar2;
      lVar9 = lVar9 + -4;
      puVar6 = puVar6 + 1;
    } while (lVar9 != 0);
    lVar9 = (long)puVar5 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    plVar4 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = (long)(puVar5 + param_2);
    param_1[2] = (long)plVar3 + uVar8 * 4;
    param_1 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar4;
    }
  }
  else {
    puVar6 = puVar5;
    if (param_2 != 0) {
      uVar2 = *param_3;
      lVar9 = param_2 << 2;
      puVar6 = puVar5 + param_2;
      do {
        *puVar5 = uVar2;
        lVar9 = lVar9 + -4;
        puVar5 = puVar5 + 1;
      } while (lVar9 != 0);
    }
    param_1[1] = (long)puVar6;
  }
  return param_1;
}



/* Entry: 1094f9370; end: 1094f947f;  */

undefined8 * FUN_1094f9370(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1094f9480();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_10939e580(param_1 + 3,*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x20),
                *(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 3);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1092cc0dc(param_1 + 6,*(long *)(param_2 + 0x30),*(long *)(param_2 + 0x38),
                *(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30) >> 2);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = 0;
  param_1[9] = uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_1094f95a0();
  return param_1;
}



/* Entry: 1094f9480; end: 1094f9507;  */

void FUN_1094f9480(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    FUN_1094f9508(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0x14)) {
      *puVar1 = *param_2;
      uVar2 = param_2[1];
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
      puVar1[1] = uVar2;
      puVar1 = (undefined8 *)((long)puVar1 + 0x14);
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1094f9508; end: 1094f954b;  */

void FUN_1094f9508(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  if (param_2 < (undefined8 *)0xccccccccccccccd) {
    plVar1 = param_1;
    FUN_1094f9560();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + (long)param_2 * 0x14;
    return;
  }
  FUN_1094f954c();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < (undefined8 *)0xccccccccccccccd) {
    __Znwm((long)param_2 * 0x14);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_109410624();
    puVar3 = *(undefined8 **)(puVar2 + 8);
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      *puVar3 = *param_2;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
      puVar3 = (undefined8 *)((long)puVar3 + 0xc);
    }
    *(undefined8 **)(puVar2 + 8) = puVar3;
  }
  return;
}



/* Entry: 1094f954c; end: 1094f955f;  */

void FUN_1094f954c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < (undefined8 *)0xccccccccccccccd) {
    __Znwm((long)param_2 * 0x14);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_109410624();
    puVar2 = *(undefined8 **)(puVar1 + 8);
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      *puVar2 = *param_2;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 1);
      puVar2 = (undefined8 *)((long)puVar2 + 0xc);
    }
    *(undefined8 **)(puVar1 + 8) = puVar2;
  }
  return;
}



/* Entry: 1094f9560; end: 1094f959f;  */

void FUN_1094f9560(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_2 < (undefined8 *)0xccccccccccccccd) {
    __Znwm((long)param_2 * 0x14);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_109410624();
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      *puVar1 = *param_2;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
      puVar1 = (undefined8 *)((long)puVar1 + 0xc);
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1094f95a0; end: 1094f961f;  */

void FUN_1094f95a0(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_109410624(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      *puVar1 = *param_2;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
      puVar1 = (undefined8 *)((long)puVar1 + 0xc);
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 1094f9620; end: 1094f9753;  */

undefined8 * FUN_1094f9620(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puStack_28;
  
  if (*(char *)((long)param_1 + 0x14f) < '\0') {
    __ZdlPv(param_1[0x27]);
  }
  if (param_1[0x24] != 0) {
    param_1[0x25] = param_1[0x24];
    __ZdlPv();
  }
  func_0x000104c4f944(param_1 + 0x1f);
  puStack_28 = param_1 + 0x1b;
  func_0x000104c607c8(&puStack_28);
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    __ZdlPv(param_1[0x15]);
  }
  if (*(char *)((long)param_1 + 0xa7) < '\0') {
    __ZdlPv(param_1[0x12]);
  }
  *param_1 = &PTR_FUN_110af9430;
  if (param_1[0xc] != 0) {
    piVar1 = (int *)(param_1[0xc] + 0x14);
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
      func_0x000109a848d4(param_1 + 5);
    }
  }
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar5 = 0;
    lVar7 = param_1[0xd];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2c));
  }
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  *param_1 = &PTR_FUN_110af93d0;
  FUN_1094f9754(param_1 + 2,0);
  FUN_10938cda4(param_1 + 1,0);
  return param_1;
}



/* Entry: 1094f9754; end: 1094f977b;  */

void FUN_1094f9754(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1094f77bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1094f977c; end: 1094f986f;  */

void FUN_1094f977c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x0001094f981c();
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  lVar2 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = lVar2;
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 1094f9870; end: 1094f9a97;  */

void FUN_1094f9870(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  long *plStack_30;
  
  lVar4 = param_1[1];
  lVar1 = param_1[2];
  lVar5 = 0;
  if (lVar1 != lVar4) {
    lVar5 = (lVar1 - lVar4 >> 3) * 0x24 + -1;
  }
  if ((ulong)(lVar5 - (param_1[5] + param_1[4])) < 0x24) {
    lVar5 = *param_1;
    uVar8 = param_1[3] - lVar5;
    if ((ulong)(lVar1 - lVar4) < uVar8) {
      lVar1 = 0xfc0;
      if (lVar4 == lVar5) {
        __Znwm();
        lStack_50 = lVar1;
        FUN_1094f9ca8(param_1,&lStack_50);
        lStack_50 = *(long *)(param_1[2] + -8);
        param_1[2] = param_1[2] + -8;
        FUN_1094f9a98(param_1,&lStack_50);
      }
      else {
        __Znwm();
        lStack_50 = lVar1;
        func_0x0001094f9ba0(param_1,&lStack_50);
      }
      if (param_1[2] - param_1[1] == 8) {
        lVar5 = 0x12;
      }
      else {
        lVar5 = param_1[4] + 0x24;
      }
      param_1[4] = lVar5;
    }
    else {
      lVar4 = (long)uVar8 >> 2;
      if (param_1[3] == lVar5) {
        lVar4 = 1;
      }
      plVar2 = param_1;
      plStack_30 = param_1;
      FUN_1094f9fb4();
      plStack_38 = plVar2 + lVar4;
      uVar3 = 0xfc0;
      lStack_50 = (long)plVar2;
      plStack_48 = plVar2;
      plStack_40 = plVar2;
      __Znwm();
      uStack_58 = uVar3;
      func_0x0001094f9dac(&lStack_50,&uStack_58);
      lVar5 = param_1[1];
      lVar4 = param_1[2];
      if (lVar5 != lVar4) {
        do {
          func_0x0001094f9eb0(&lStack_50,lVar5);
          lVar5 = lVar5 + 8;
          lVar4 = param_1[2];
        } while (lVar5 != lVar4);
        lVar5 = param_1[1];
      }
      lVar1 = *param_1;
      lVar7 = param_1[3];
      param_1[1] = (long)plStack_48;
      *param_1 = lStack_50;
      param_1[3] = (long)plStack_38;
      param_1[2] = (long)plStack_40;
      if ((long)plStack_40 - (long)plStack_48 == 8) {
        lVar6 = 0x12;
      }
      else {
        lVar6 = param_1[4] + 0x24;
      }
      param_1[4] = lVar6;
      plStack_40 = (long *)lVar4;
      if (lVar4 != lVar5) {
        plStack_40 = (long *)(lVar4 + ((lVar5 - lVar4) + 7U & 0xfffffffffffffff8));
      }
      if (lVar1 != 0) {
        lStack_50 = lVar1;
        plStack_48 = (long *)lVar5;
        plStack_38 = (long *)lVar7;
        __ZdlPv();
      }
    }
  }
  else {
    param_1[4] = param_1[4] + 0x24;
    lStack_50 = *(long *)(lVar1 + -8);
    param_1[2] = lVar1 + -8;
    FUN_1094f9a98(param_1,&lStack_50);
  }
  return;
}



/* Entry: 1094f9a98; end: 1094f9ca7;  */

void FUN_1094f9a98(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 == (undefined8 *)*param_1) {
    uVar3 = param_1[2];
    uVar1 = param_1[3];
    if (uVar3 < uVar1) {
      lVar9 = (((long)(uVar1 - uVar3) >> 3) + 1) / 2;
      puVar5 = puVar8 + lVar9;
      if (uVar3 - (long)puVar8 != 0) {
        _memmove(puVar5,puVar8,uVar3 - (long)puVar8);
        uVar3 = param_1[2];
      }
      param_1[1] = (long)puVar5;
      param_1[2] = uVar3 + lVar9 * 8;
      puVar8 = puVar5;
    }
    else {
      lVar9 = (long)(uVar1 - (long)puVar8) >> 2;
      if (uVar1 - (long)puVar8 == 0) {
        lVar9 = 1;
      }
      lVar7 = lVar9 * 2;
      plVar2 = param_1;
      FUN_1094f9fb4();
      puVar8 = (undefined8 *)((long)plVar2 + (lVar7 + 6U & 0xfffffffffffffff8));
      lVar7 = param_1[2] - param_1[1];
      puVar5 = puVar8;
      if (lVar7 != 0) {
        puVar5 = (undefined8 *)((long)puVar8 + lVar7);
        puVar4 = (undefined8 *)param_1[1];
        puVar6 = puVar8;
        do {
          *puVar6 = *puVar4;
          lVar7 = lVar7 + -8;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        } while (lVar7 != 0);
      }
      lVar7 = *param_1;
      *param_1 = (long)plVar2;
      param_1[1] = (long)puVar8;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)(plVar2 + lVar9);
      if (lVar7 != 0) {
        __ZdlPv(lVar7);
        puVar8 = (undefined8 *)param_1[1];
      }
    }
  }
  puVar8[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}



/* Entry: 1094f9ca8; end: 1094f9fb3;  */

void FUN_1094f9ca8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  
  puVar7 = (ulong *)param_1[2];
  if (puVar7 == (ulong *)param_1[3]) {
    uVar5 = *param_1;
    uVar4 = param_1[1];
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      uVar4 = (long)((long)puVar7 - uVar5) >> 2;
      if ((long)puVar7 - uVar5 == 0) {
        uVar4 = 1;
      }
      puVar3 = param_1;
      uVar5 = uVar4;
      FUN_1094f9fb4();
      puVar1 = puVar3 + (uVar4 >> 2);
      lVar8 = param_1[2] - (long)param_1[1];
      puVar7 = puVar1;
      if (lVar8 != 0) {
        puVar7 = (ulong *)((long)puVar1 + lVar8);
        puVar6 = (ulong *)param_1[1];
        puVar9 = puVar1;
        do {
          *puVar9 = *puVar6;
          lVar8 = lVar8 + -8;
          puVar6 = puVar6 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar8 != 0);
      }
      uVar4 = *param_1;
      *param_1 = (ulong)puVar3;
      param_1[1] = (ulong)puVar1;
      param_1[2] = (ulong)puVar7;
      param_1[3] = (ulong)(puVar3 + uVar5);
      if (uVar4 != 0) {
        __ZdlPv(uVar4);
        puVar7 = (ulong *)param_1[2];
      }
    }
    else {
      lVar8 = (((long)(uVar4 - uVar5) >> 3) + 1) / 2;
      lVar10 = uVar4 + lVar8 * -8;
      lVar2 = (long)puVar7 - uVar4;
      if (lVar2 != 0) {
        _memmove(lVar10,uVar4,lVar2);
        uVar4 = param_1[1];
      }
      puVar7 = (ulong *)(lVar10 + lVar2);
      param_1[1] = uVar4 + lVar8 * -8;
      param_1[2] = (ulong)puVar7;
    }
  }
  *puVar7 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 1094f9fb4; end: 1094f9fe7;  */

void FUN_1094f9fb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  uVar1 = param_2[10];
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = uVar1;
  param_1[0xb] = 0;
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  param_1[0xd] = param_2[0xd];
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



/* Entry: 1094f9fe8; end: 1094fa073;  */

void FUN_1094f9fe8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  uVar1 = param_2[10];
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = uVar1;
  param_1[0xb] = 0;
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  param_1[0xd] = param_2[0xd];
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  return;
}



/* Entry: 1094fa074; end: 1094fa14b;  */

uint FUN_1094fa074(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  if (lVar3 != *(long *)(param_1 + 8)) {
    lVar2 = (lVar3 - *(long *)(param_1 + 8) >> 3) * 0x24 + -1;
  }
  uVar4 = lVar2 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  if (uVar4 < 0x24) {
    param_2 = 1;
  }
  uVar1 = 0;
  if (uVar4 < 0x48) {
    uVar1 = param_2;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(*(undefined8 *)(lVar3 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  return uVar1 ^ 1;
}



/* Entry: 1094fa14c; end: 1094fa2eb;  */

undefined8 * FUN_1094fa14c(undefined8 *param_1)

{
  int iVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined ***apppuStack_60 [2];
  char cStack_49;
  undefined **ppuStack_48;
  code *pcStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x000107c31940(apppuStack_60,&UNK_10f638bb4);
  puVar3 = param_1;
  FUN_1094fa4b4(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af91f8;
  pcStack_40 = (code *)0x1094fa434;
  pppuStack_30 = &ppuStack_48;
  FUN_1094fa9a8(&ppuStack_48,puVar3 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar4 = 0x20;
LAB_1094fa1e8:
    (**(code **)((long)*pppuStack_30 + lVar4))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar4 = 0x28;
    goto LAB_1094fa1e8;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f570f7f);
  puVar3 = param_1;
  FUN_1094fa4b4(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af92a8;
  pcStack_40 = FUN_1094fab14;
  pppuStack_30 = &ppuStack_48;
  FUN_1094fa9a8(&ppuStack_48,puVar3 + 5);
  pppuVar2 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar4 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_1094fa278;
    lVar4 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar4))();
LAB_1094fa278:
  if (cStack_49 < '\0') {
    pppuVar2 = apppuStack_60[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  FUN_1094fa378(param_1);
  __Unwind_Resume(pppuVar2);
  if ((bRam0000000113829ec0 & 1) == 0) {
    iVar1 = 0x13829ec0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar3 = (undefined8 *)0x28;
      __Znwm();
      FUN_1094fa14c();
      puRam0000000113829eb8 = puVar3;
      ___cxa_guard_release(0x113829ec0);
    }
  }
  return puRam0000000113829eb8;
}



/* Entry: 1094fa2ec; end: 1094fa377;  */

undefined8 FUN_1094fa2ec(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((bRam0000000113829ec0 & 1) == 0) {
    iVar1 = 0x13829ec0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uVar2 = 0x28;
      __Znwm();
      FUN_1094fa14c();
      uRam0000000113829eb8 = uVar2;
      ___cxa_guard_release(0x113829ec0);
    }
  }
  return uRam0000000113829eb8;
}



/* Entry: 1094fa378; end: 1094fa3d3;  */

long * FUN_1094fa378(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1094fa3d4(plVar1 + 2);
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



/* Entry: 1094fa3d4; end: 1094fa4b3;  */

void FUN_1094fa3d4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 3) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1094fa410;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1094fa410:
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 1094fa4b4; end: 1094fa8b7;  */

long * FUN_1094fa4b4(long *param_1,undefined8 param_2,long *param_3)

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
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
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
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[8] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1094fa7c8;
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
LAB_1094fa650:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094fa8a0);
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
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
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
      plVar10 = (long *)*plVar7;
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
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_1094fa650;
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
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_1094fa7c8:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1094fa8b8; end: 1094fa8ff;  */

void FUN_1094fa8b8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1094fa3d4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1094fa900; end: 1094fa907;  */

void FUN_1094fa900(void)

{
  return;
}



/* Entry: 1094fa908; end: 1094fa93b;  */

void FUN_1094fa908(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110af91f8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1094fa93c; end: 1094fa95f;  */

void FUN_1094fa93c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110af91f8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1094fa960; end: 1094fa99b;  */

long FUN_1094fa960(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af9278);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1094fa99c; end: 1094fa9a7;  */

undefined ** FUN_1094fa99c(void)

{
  return &PTR_DAT_110af9278;
}



/* Entry: 1094fa9a8; end: 1094fab13;  */

void FUN_1094fa9a8(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *extraout_x8;
  long alStack_40 [3];
  long lStack_28;
  
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
        (**(code **)(alStack_40[0] + 0x20))(alStack_40);
      }
      else {
        (**(code **)(*plVar1 + 0x18))();
        (**(code **)(*(long *)param_1[3] + 0x20))();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
    }
    else if (plVar5 == param_2) {
      plVar4 = param_1;
      (**(code **)(*plVar5 + 0x18))(plVar5);
      (**(code **)(*(long *)param_2[3] + 0x20))();
      param_2[3] = param_1[3];
      param_1[3] = (long)param_1;
    }
    else {
      param_1[3] = (long)plVar5;
      param_2[3] = (long)plVar1;
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
  puVar2 = (undefined8 *)0x158;
  __Znwm();
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  puVar2[0x19] = 0;
  puVar2[0x18] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x21] = 0;
  puVar2[0x20] = 0;
  puVar2[0x23] = 0;
  puVar2[0x22] = 0;
  puVar2[0x25] = 0;
  puVar2[0x24] = 0;
  puVar2[0x27] = 0;
  puVar2[0x26] = 0;
  puVar2[0x29] = 0;
  puVar2[0x28] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[0x2a] = 0;
  *(undefined4 *)(puVar2 + 5) = 0x42ff0000;
  *(undefined8 *)((long)puVar2 + 0x34) = 0;
  *(undefined8 *)((long)puVar2 + 0x2c) = 0;
  *(undefined8 *)((long)puVar2 + 0x44) = 0;
  *(undefined8 *)((long)puVar2 + 0x3c) = 0;
  *(undefined8 *)((long)puVar2 + 0x54) = 0;
  *(undefined8 *)((long)puVar2 + 0x4c) = 0;
  puVar2[0xc] = 0;
  puVar2[0xb] = 0;
  puVar2[0xf] = 0;
  puVar2[0xd] = puVar2 + 6;
  puVar2[0xe] = puVar2 + 0xf;
  puVar2[0x10] = 0;
  *(undefined2 *)(puVar2 + 0x11) = 0x100;
  *puVar2 = &PTR_FUN_110af9198;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  *(undefined4 *)(puVar2 + 0x18) = 0x41200000;
  *(undefined8 *)((long)puVar2 + 0xc4) = 0;
  *(undefined2 *)((long)puVar2 + 0xcc) = 0;
  *(undefined1 *)((long)puVar2 + 0xce) = 1;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1b] = 0;
  *(undefined2 *)(puVar2 + 0x1e) = 0;
  *(undefined4 *)(puVar2 + 0x23) = 0x3f800000;
  puVar2[0x25] = 0;
  puVar2[0x24] = 0;
  puVar2[0x27] = 0;
  puVar2[0x26] = 0;
  puVar2[0x29] = 0;
  puVar2[0x28] = 0;
  *(undefined4 *)(puVar2 + 0x2a) = 1;
  *extraout_x8 = puVar2;
  puVar2[0x20] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x22] = 0;
  puVar2[0x21] = 0;
  return;
}



/* Entry: 1094fab14; end: 1094fabfb;  */

void FUN_1094fab14(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x158;
  __Znwm();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
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
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[0x2a] = 0;
  *(undefined4 *)(puVar1 + 5) = 0x42ff0000;
  *(undefined8 *)((long)puVar1 + 0x34) = 0;
  *(undefined8 *)((long)puVar1 + 0x2c) = 0;
  *(undefined8 *)((long)puVar1 + 0x44) = 0;
  *(undefined8 *)((long)puVar1 + 0x3c) = 0;
  *(undefined8 *)((long)puVar1 + 0x54) = 0;
  *(undefined8 *)((long)puVar1 + 0x4c) = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xf] = 0;
  puVar1[0xd] = puVar1 + 6;
  puVar1[0xe] = puVar1 + 0xf;
  puVar1[0x10] = 0;
  *(undefined2 *)(puVar1 + 0x11) = 0x100;
  *puVar1 = &PTR_FUN_110af9198;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0x41200000;
  *(undefined8 *)((long)puVar1 + 0xc4) = 0;
  *(undefined2 *)((long)puVar1 + 0xcc) = 0;
  *(undefined1 *)((long)puVar1 + 0xce) = 1;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1b] = 0;
  *(undefined2 *)(puVar1 + 0x1e) = 0;
  *(undefined4 *)(puVar1 + 0x23) = 0x3f800000;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  *(undefined4 *)(puVar1 + 0x2a) = 1;
  *param_1 = puVar1;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  return;
}



/* Entry: 1094fabfc; end: 1094fac03;  */

void FUN_1094fabfc(void)

{
  return;
}



/* Entry: 1094fac04; end: 1094fac37;  */

void FUN_1094fac04(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110af92a8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1094fac38; end: 1094fac5b;  */

void FUN_1094fac38(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110af92a8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1094fac5c; end: 1094fac97;  */

long FUN_1094fac5c(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af9318);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1094fac98; end: 1094faca3;  */

undefined ** FUN_1094fac98(void)

{
  return &PTR_DAT_110af9318;
}



/* Entry: 1094faca4; end: 1094fb103;  */

void FUN_1094faca4(ulong *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plStack_70;
  undefined8 *puStack_68;
  char cStack_59;
  long *plStack_58;
  
  plVar5 = (long *)(param_2 + 0x80);
  __ZNSt3__15mutex4lockEv();
  puVar15 = *(ulong **)(param_2 + 0x60);
  puVar1 = *(ulong **)(param_2 + 0x68);
  if (puVar15 != puVar1) {
    puVar14 = puVar15;
    if ((*(byte *)(param_2 + 0x78) & 1) != 0) {
      uVar12 = puVar15[1];
      uVar13 = *puVar15;
      param_1[1] = puVar15[1];
      *param_1 = uVar13;
      if (uVar12 != 0) {
LAB_1094fae98:
        plVar5 = (long *)(uVar12 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = *plVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_1094faeac;
    }
    do {
      uVar12 = puVar14[1];
      if (uVar12 == 0) {
        *param_1 = *puVar14;
        param_1[1] = 0;
        goto LAB_1094faeac;
      }
      if (*(long *)(uVar12 + 8) < 1) {
        *param_1 = *puVar14;
        param_1[1] = uVar12;
        goto LAB_1094fae98;
      }
      puVar14 = puVar14 + 2;
    } while (puVar14 != puVar1);
  }
  if (*(int *)(param_2 + 0x58) <= (int)((ulong)((long)puVar1 - (long)puVar15) >> 4)) {
    FUN_1093e9920(&plStack_70,&UNK_10f57107f);
    plVar5 = (long *)0x2;
    FUN_109388c6c(2,&UNK_10f570f84,&UNK_10f571071,0x25,&plStack_70);
    if (cStack_59 < '\0') {
      plVar5 = plStack_70;
      __ZdlPv();
    }
  }
  FUN_1094fa2ec();
  plVar6 = plVar5;
  func_0x000107c31944();
  plVar16 = (long *)plVar5[1];
  if (plVar16 != (long *)0x0) {
    uVar12 = (long)plVar16 - 1;
    if (((ulong)plVar16 & uVar12) == 0) {
      plVar19 = (long *)(uVar12 & (ulong)plVar6);
    }
    else {
      plVar19 = plVar6;
      if (plVar16 <= plVar6) {
        uVar13 = 0;
        if (plVar16 != (long *)0x0) {
          uVar13 = (ulong)plVar6 / (ulong)plVar16;
        }
        plVar19 = (long *)((long)plVar6 - uVar13 * (long)plVar16);
      }
    }
    plVar9 = *(long **)(*plVar5 + (long)plVar19 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        plVar10 = (long *)plVar9[1];
        if (plVar6 == plVar10) {
          plVar10 = plVar5;
          func_0x000104c4fbc4(plVar5,plVar9 + 2,param_2);
          if (((ulong)plVar10 & 1) != 0) {
            if ((long *)plVar9[8] == (long *)0x0) {
              func_0x000104c501e4();
              goto LAB_1094fb068;
            }
            (**(code **)(*(long *)plVar9[8] + 0x30))(&plStack_58);
            if (plStack_58 == (long *)0x0) goto LAB_1094fae24;
            plVar6 = plStack_58;
            (**(code **)(*plStack_58 + 0x10))(plStack_58,param_2 + 0x48,param_2 + 0x18);
            plVar5 = plStack_58;
            if (((ulong)plVar6 & 1) == 0) {
              FUN_10937e740(&plStack_70,&UNK_10f571049);
              FUN_109388c6c(1,&UNK_10f570f84,&UNK_10f57100d,0xe,&plStack_70);
              if (cStack_59 < '\0') {
                __ZdlPv(plStack_70);
              }
              plVar5 = plStack_58;
              plStack_58 = (long *)0x0;
              if (plVar5 == (long *)0x0) goto LAB_1094fae7c;
              (**(code **)(*plVar5 + 8))();
              goto LAB_1094fae64;
            }
            if (plStack_58 == (long *)0x0) goto LAB_1094fae7c;
            plStack_70 = plStack_58;
            puVar7 = (undefined8 *)0x20;
            __Znwm();
            *puVar7 = &PTR_FUN_110af9348;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = plVar5;
            puVar15 = *(ulong **)(param_2 + 0x68);
            puStack_68 = puVar7;
            if (puVar15 < *(ulong **)(param_2 + 0x70)) {
              *puVar15 = (ulong)plVar5;
              puVar15[1] = (ulong)puVar7;
              puVar15 = puVar15 + 2;
            }
            else {
              lVar17 = *(long *)(param_2 + 0x60);
              lVar18 = (long)puVar15 - lVar17;
              uVar12 = (lVar18 >> 4) + 1;
              if (uVar12 >> 0x3c != 0) {
                FUN_1094fb104();
LAB_1094fb068:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1094fb06c);
                (*pcVar4)();
              }
              uVar11 = (long)*(ulong **)(param_2 + 0x70) - lVar17;
              uVar13 = (long)uVar11 >> 3;
              if (uVar13 <= uVar12) {
                uVar13 = uVar12;
              }
              if (0x7fffffffffffffef < uVar11) {
                uVar13 = 0xfffffffffffffff;
              }
              if (uVar13 >> 0x3c != 0) {
                func_0x000104c4f740();
                goto LAB_1094fb068;
              }
              lVar8 = uVar13 << 4;
              __Znwm();
              puVar1 = (ulong *)(lVar8 + lVar18);
              *puVar1 = (ulong)plVar5;
              puVar1[1] = (ulong)puVar7;
              puVar15 = puVar1 + 2;
              _memcpy(puVar1 + (lVar18 >> 4) * -2,lVar17,lVar18);
              *(ulong **)(param_2 + 0x60) = puVar1 + (lVar18 >> 4) * -2;
              *(ulong **)(param_2 + 0x68) = puVar15;
              *(ulong *)(param_2 + 0x70) = lVar8 + uVar13 * 0x10;
              if (lVar17 != 0) {
                __ZdlPv(lVar17);
              }
            }
            *(ulong **)(param_2 + 0x68) = puVar15;
            uVar12 = puVar15[-1];
            uVar13 = puVar15[-2];
            param_1[1] = puVar15[-1];
            *param_1 = uVar13;
            if (uVar12 != 0) {
              plVar5 = (long *)(uVar12 + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar3) {
                  *plVar5 = *plVar5 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            goto LAB_1094faeac;
          }
        }
        else {
          if (((ulong)plVar16 & uVar12) == 0) {
            plVar10 = (long *)((ulong)plVar10 & uVar12);
          }
          else if (plVar16 <= plVar10) {
            uVar13 = 0;
            if (plVar16 != (long *)0x0) {
              uVar13 = (ulong)plVar10 / (ulong)plVar16;
            }
            plVar10 = (long *)((long)plVar10 - uVar13 * (long)plVar16);
          }
          if (plVar10 != plVar19) break;
        }
      }
    }
  }
  plStack_58 = (long *)0x0;
LAB_1094fae24:
  FUN_10937e740(&plStack_70,&UNK_10f57101d);
  FUN_109388c6c(1,&UNK_10f570f84,&UNK_10f57100d,9,&plStack_70);
  if (cStack_59 < '\0') {
    __ZdlPv(plStack_70);
  }
LAB_1094fae64:
  plVar5 = plStack_58;
  plStack_58 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
LAB_1094fae7c:
  *param_1 = 0;
  param_1[1] = 0;
LAB_1094faeac:
  __ZNSt3__15mutex6unlockEv(param_2 + 0x80);
  return;
}



/* Entry: 1094fb104; end: 1094fb117;  */

undefined * FUN_1094fb104(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
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



/* Entry: 1094fb118; end: 1094fb16f;  */

long FUN_1094fb118(long param_1)

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



/* Entry: 1094fb170; end: 1094fb173;  */

void FUN_1094fb170(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1094fb174; end: 1094fb187;  */

void FUN_1094fb174(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094fb188; end: 1094fb19f;  */

void FUN_1094fb188(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001094fb198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1094fb1a0; end: 1094fb1d7;  */

undefined8 FUN_1094fb1a0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110af9388);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1094fb1d8; end: 1094fb1db;  */

void FUN_1094fb1d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1094fb1dc; end: 1094fb82b;  */

/* WARNING: Removing unreachable block (ram,0x0001094fb574) */

long * FUN_1094fb1dc(long *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  long **pplVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long **pplStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined2 uStack_24c;
  undefined1 uStack_24a;
  char cStack_249;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined2 uStack_230;
  undefined4 uStack_22e;
  undefined1 uStack_22a;
  undefined2 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined2 uStack_21c;
  undefined1 uStack_21a;
  undefined4 uStack_218;
  undefined2 uStack_214;
  undefined4 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined4 uStack_1fc;
  undefined1 uStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long *aplStack_1d0 [3];
  long *aplStack_1b8 [3];
  undefined8 uStack_1a0;
  char cStack_189;
  long *plStack_188;
  long *plStack_180;
  long **pplStack_178;
  long *plStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  undefined1 uStack_14a;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined2 uStack_130;
  undefined4 uStack_12e;
  undefined1 uStack_12a;
  undefined2 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined2 uStack_11c;
  undefined1 uStack_11a;
  undefined4 uStack_118;
  undefined2 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte bStack_d8;
  undefined2 uStack_d0;
  undefined1 uStack_ce;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ___dynamic_cast(param_3,&PTR_DAT_110af9398,&PTR_DAT_110af93a8,0);
  if (param_3 == 0) {
    ___cxa_bad_cast();
  }
  else {
    plVar7 = param_1;
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
    if ((int)plVar7 != 0) {
      lVar12 = param_1[2];
      lStack_168 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0x3f800000;
      uStack_140 = 0;
      lStack_138 = 0;
      uStack_148 = 0;
      uStack_130 = 0x200;
      uStack_12e = 0;
      uStack_12a = 0;
      uStack_128 = 1;
      uStack_124 = 0;
      uStack_120 = 0x10000;
      uStack_11c = 0x100;
      uStack_11a = 1;
      uStack_118 = 0x1000000;
      uStack_114 = 1;
      uStack_110 = 0x100;
      uStack_108 = 100000;
      uStack_100 = 0;
      uStack_fc = 1;
      uStack_f8 = 0;
      uStack_14c = 0;
      uStack_14a = *(int *)(lVar12 + 0x90) == 1;
      (**(code **)(*(long *)*param_2 + 0x10))(&pplStack_268,(long *)*param_2,lVar12 + 0x48);
      pplStack_178 = pplStack_268;
      if (pplStack_268 == (long **)0x0) {
        plVar8 = (long *)0x0;
      }
      else {
        plVar8 = (long *)0x20;
        __Znwm();
        *plVar8 = (long)&PTR_FUN_110af7448;
        plVar8[1] = 0;
        plVar8[2] = 0;
        plVar8[3] = (long)pplStack_268;
      }
      puVar2 = *(uint **)(param_1[2] + 0xa0);
      puVar10 = *(uint **)(param_1[2] + 0x98);
      plStack_170 = plVar8;
      do {
        if (puVar10 == puVar2) {
          uVar9 = 1;
          break;
        }
        uVar9 = *puVar10;
        func_0x000109cd2af4();
        puVar10 = puVar10 + 1;
      } while ((uVar9 & (*(uint *)(plVar8 + 8) ^ 0xffffffff)) != 0);
      puVar11 = *(undefined8 **)(**(long **)(param_3 + 0x20) + 0x48);
      if (*(char *)(lVar12 + 0x8f) < '\0') {
        func_0x000107c3192c(&uStack_c0,*(undefined8 *)(lVar12 + 0x78),*(undefined8 *)(lVar12 + 0x80)
                           );
      }
      else {
        uStack_b8 = *(undefined8 *)(lVar12 + 0x80);
        uStack_c0 = *(undefined8 *)(lVar12 + 0x78);
        uStack_b0 = *(undefined8 *)(lVar12 + 0x88);
      }
      plStack_1e8 = (long *)0x0;
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      func_0x000107c2ac94(&plStack_1e8,&uStack_c0,auStack_a8,1);
      FUN_10941f750(aplStack_1d0,&plStack_1e8,lVar12 + 0x60);
      (*(code *)(*pplStack_268)[4])(&plStack_1f0,pplStack_268);
      func_0x000109d0a228(&uStack_f0,&plStack_1f0);
      pplStack_268 = (long **)0x0;
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_250 = 0x3f800000;
      uStack_24c = 0;
      uStack_24a = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_248 = 0;
      uStack_230 = 0x200;
      uStack_22e = 0;
      uStack_22a = 0;
      uStack_228 = 1;
      uStack_224 = 0;
      uStack_220 = 0x10000;
      uStack_21c = 0x100;
      uStack_21a = 1;
      uStack_218 = 0x1000000;
      uStack_214 = 1;
      uStack_210 = 0x100;
      uStack_208 = 100000;
      uStack_200 = 0;
      uStack_1fc = 1;
      uStack_1f8 = 0;
      plVar8 = (long *)0x120;
      __Znwm();
      plVar8[1] = 0;
      plVar8[2] = 0;
      *plVar8 = (long)&PTR_FUN_110af4c20;
      plStack_188 = plVar8 + 3;
      if (bStack_d8 == 2) {
        uStack_98 = uStack_e8;
        uStack_a0 = uStack_f0;
        uStack_f0 = 0;
        uStack_e8 = 0;
      }
      else if (bStack_d8 == 1) {
        uStack_98 = uStack_e8;
        uStack_a0 = uStack_f0;
        uStack_90 = uStack_e0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f0 = 0;
      }
      bStack_88 = bStack_d8;
      uStack_80 = uStack_d0;
      uStack_7e = uStack_ce;
      func_0x000109d03828(plStack_188,aplStack_1d0,1,&uStack_a0,&pplStack_268,uVar9,1);
      (*(code *)(&PTR_FUN_110af4bf0)[bStack_88])(&uStack_a0);
      plStack_180 = plVar8;
      (*(code *)(&PTR_FUN_110af4bf0)[bStack_d8])(&uStack_f0);
      plVar8 = plStack_1f0;
      plStack_1f0 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      if (cStack_189 < '\0') {
        __ZdlPv(uStack_1a0);
      }
      pplStack_268 = aplStack_1b8;
      FUN_109378cec(&pplStack_268);
      pplStack_268 = aplStack_1d0;
      FUN_109378cec(&pplStack_268);
      pplStack_268 = &plStack_1e8;
      func_0x000104c607c8(&pplStack_268);
      func_0x000109d03fe8(aplStack_1d0,*puVar11,&plStack_188,0);
      FUN_10938ab98(&pplStack_268,aplStack_1d0);
      if (aplStack_1d0[0] != (long *)0x0) {
        plVar8 = aplStack_1d0[0] + 1;
        do {
          lVar12 = *plVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*aplStack_1d0[0] + 0x10))();
        }
      }
      if (pplStack_268 == (long **)0x0) goto LAB_1094fb6d0;
      pplStack_268 = (long **)0x0;
      FUN_10938cda4(param_1 + 1);
      if (cStack_249 < '\0') {
        __ZdlPv(uStack_260);
      }
      pplVar5 = pplStack_268;
      pplStack_268 = (long **)0x0;
      if (pplVar5 != (long **)0x0) {
        func_0x000109cda590();
        __ZdlPv();
      }
      plVar8 = plStack_180;
      if (plStack_180 != (long *)0x0) {
        plVar1 = plStack_180 + 1;
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
          (**(code **)(*plStack_180 + 0x10))(plStack_180);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      plVar8 = plStack_170;
      if (plStack_170 != (long *)0x0) {
        plVar1 = plStack_170 + 1;
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
          (**(code **)(*plStack_170 + 0x10))(plStack_170);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (lStack_138 < 0) {
        __ZdlPv(uStack_148);
      }
      if (lStack_168 != 0) {
        __ZdlPv();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return plVar7;
    }
  }
  ___stack_chk_fail();
LAB_1094fb6d0:
  func_0x000105688514(&UNK_10f571115);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1094fb6e0);
  (*pcVar6)();
}



/* Entry: 1094fb82c; end: 1094fb92b;  */

undefined8 FUN_1094fb82c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_30;
  long *plStack_28;
  
  puVar5 = (undefined8 *)0xc8;
  __Znwm();
  puVar5[0x15] = 0;
  puVar5[0x14] = 0;
  puVar5[0x17] = 0;
  puVar5[0x16] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0x13] = 0;
  puVar5[0x12] = 0;
  *puVar5 = &PTR_FUN_110af9158;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  *(undefined4 *)(puVar5 + 0x12) = 0;
  *(undefined1 *)(puVar5 + 0x16) = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  FUN_1094f9754(param_1 + 0x10,puVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  plStack_28 = *(long **)(param_3 + 0x10);
  uStack_30 = *(undefined8 *)(param_3 + 8);
  if (*(long *)(param_3 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_3 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_1094f730c(uVar6,&uStack_30,*(undefined4 *)(param_3 + 0x18));
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return uVar6;
}



/* Entry: 1094fb92c; end: 1094fb9eb;  */

void FUN_1094fb92c(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1094fb9ec(param_1,(*(long *)(*(long *)(param_2 + 0x10) + 0x18) -
                         *(long *)(*(long *)(param_2 + 0x10) + 0x10) >> 3) * -0x5555555555555555);
  lVar4 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x18);
  while( true ) {
    if (lVar4 == lVar1) {
      return;
    }
    lVar3 = param_3;
    FUN_1094e1944(param_3,lVar4);
    if (lVar3 == 0) break;
    FUN_1094fbb0c(param_1,lVar3 + 0x28);
    lVar4 = lVar4 + 0x18;
  }
  FUN_109262df8(&UNK_10f571131);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1094fb9c8);
  (*pcVar2)();
}



/* Entry: 1094fb9ec; end: 1094fbb0b;  */

void FUN_1094fb9ec(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  lVar3 = *param_1;
  if ((undefined8 *)((param_1[2] - lVar3 >> 2) * -0x3333333333333333) < param_2) {
    if ((undefined8 *)0xccccccccccccccc < param_2) {
      FUN_1094f954c();
      if (lStack_38 - lStack_40 != 0) {
        lStack_38 = lStack_38 + (((lStack_38 - lStack_40) - 0x14U) / 0x14) * -0x14 + -0x14;
      }
      if (plStack_48 != (long *)0x0) {
        __ZdlPv();
      }
      __Unwind_Resume();
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        *puVar1 = *param_2;
        uVar5 = param_2[1];
        *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
        puVar1[1] = uVar5;
        plVar2 = (long *)((long)puVar1 + 0x14);
      }
      else {
        plVar2 = param_1;
        FUN_1094fbbe8();
      }
      param_1[1] = (long)plVar2;
      return;
    }
    lVar4 = param_1[1];
    plVar2 = param_1;
    plStack_28 = param_1;
    FUN_1094f9560();
    lStack_40 = (long)plVar2 + (lVar4 - lVar3);
    lStack_30 = (long)plVar2 + (long)param_2 * 0x14;
    plStack_48 = plVar2;
    lStack_38 = lStack_40;
    func_0x0001094fbb68(param_1,&plStack_48);
    if (lStack_38 - lStack_40 != 0) {
      lStack_38 = lStack_38 + (((lStack_38 - lStack_40) - 0x14U) / 0x14) * -0x14 + -0x14;
    }
    if (plStack_48 != (long *)0x0) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1094fbb0c; end: 1094fbb5f;  */

void FUN_1094fbb0c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    *puVar1 = *param_2;
    uVar3 = param_2[1];
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
    puVar1[1] = uVar3;
    lVar2 = (long)puVar1 + 0x14;
  }
  else {
    lVar2 = param_1;
    FUN_1094fbbe8();
  }
  *(long *)(param_1 + 8) = lVar2;
  return;
}



/* Entry: 1094fbb60; end: 1094fbbe7;  */

void FUN_1094fbb60(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1094fbb64);
  (*pcVar1)();
}



/* Entry: 1094fbbe8; end: 1094fbd57;  */

long * FUN_1094fbbe8(float param_1,float param_2,long *param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *extraout_x8;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  long alStack_140 [4];
  undefined4 uStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long lStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  long alStack_d0 [3];
  undefined4 uStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar15 = param_3[1] - *param_3;
  uVar12 = (lVar15 >> 2) * -0x3333333333333333 + 1;
  if (uVar12 < 0xccccccccccccccd) {
    lVar9 = param_3[2] - *param_3 >> 2;
    uVar13 = lVar9 * -0x6666666666666666;
    if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
      uVar13 = uVar12;
    }
    if (0x666666666666665 < (ulong)(lVar9 * -0x3333333333333333)) {
      uVar13 = 0xccccccccccccccc;
    }
    plVar14 = param_3;
    plStack_38 = param_3;
    FUN_1094f9560();
    plStack_50 = (long *)((long)plVar14 + lVar15);
    lStack_40 = (long)plVar14 + uVar13 * 0x14;
    *plStack_50 = *param_4;
    lVar15 = param_4[2];
    plStack_50[1] = param_4[1];
    *(int *)(plStack_50 + 2) = (int)lVar15;
    lStack_48 = (long)plStack_50 + 0x14;
    plStack_58 = plVar14;
    func_0x0001094fbb68(param_3,&plStack_58);
    plVar14 = (long *)param_3[1];
    if (lStack_48 - (long)plStack_50 != 0) {
      lStack_48 = lStack_48 + (((lStack_48 - (long)plStack_50) - 0x14U) / 0x14) * -0x14 + -0x14;
    }
    if (plStack_58 != (long *)0x0) {
      __ZdlPv();
    }
    return plVar14;
  }
  FUN_1094f954c();
  if (lStack_48 - (long)plStack_50 != 0) {
    lStack_48 = lStack_48 + (((lStack_48 - (long)plStack_50) - 0x14U) / 0x14) * -0x14 + -0x14;
  }
  if (plStack_58 != (long *)0x0) {
    __ZdlPv();
  }
  __Unwind_Resume();
  plVar8 = alStack_140;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar14 = param_3;
  FUN_1094fb82c();
  if ((int)plVar14 != 0) {
    lVar15 = param_3[2];
    *(undefined1 *)(param_3 + 0x11) = *(undefined1 *)(lVar15 + 0xb0);
    iVar2 = (int)((ulong)(*(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10)) >> 3) * -0x55555555;
    iStack_b4 = 2;
    if (*(char *)(lVar15 + 8) != '\0') {
      iStack_b4 = 3;
    }
    *(int *)(param_3 + 3) = iVar2;
    *(int *)((long)param_3 + 0x1c) = iStack_b4;
    uVar6 = *(undefined8 *)(lVar15 + 0x28);
    param_3[4] = (*(long *)(lVar15 + 0x38) - *(long *)(lVar15 + 0x30) >> 3) * -0x5555555555555555;
    iStack_b4 = iStack_b4 * iVar2;
    uStack_b8 = 1;
    uStack_b0 = (undefined4)uVar6;
    uStack_ac = 1;
    alStack_140[1] = 0;
    alStack_140[0] = 0;
    alStack_140[3] = 0;
    alStack_140[2] = 0;
    uStack_120 = 0x42ff0000;
    uStack_e0 = (ulong)&uStack_120 | 8;
    uStack_114 = 0;
    uStack_110 = 0;
    iStack_11c = 0;
    uStack_118 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_f4 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    lStack_e8 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    alStack_d0[0] = 0;
    alStack_d0[1] = 0;
    plStack_d8 = alStack_d0;
    FUN_109a83fd0(&uStack_120,4,&uStack_b8,5);
    FUN_109a48880(&uStack_120);
    if (param_3[0xc] != 0) {
      piVar1 = (int *)(param_3[0xc] + 0x14);
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
        func_0x000109a848d4(param_3 + 5);
      }
    }
    param_3[0xc] = 0;
    param_3[8] = 0;
    param_3[7] = 0;
    param_3[10] = 0;
    param_3[9] = 0;
    if (0 < *(int *)((long)param_3 + 0x2c)) {
      lVar15 = 0;
      lVar9 = param_3[0xd];
      do {
        *(undefined4 *)(lVar9 + lVar15 * 4) = 0;
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)((long)param_3 + 0x2c));
    }
    param_3[6] = CONCAT44(uStack_114,uStack_118);
    param_3[5] = CONCAT44(iStack_11c,uStack_120);
    lVar15 = CONCAT44(uStack_fc,uStack_100);
    param_3[8] = CONCAT44(uStack_104,uStack_108);
    param_3[7] = CONCAT44(uStack_10c,uStack_110);
    param_3[10] = CONCAT44(uStack_f4,uStack_f8);
    param_3[9] = lVar15;
    lVar9 = CONCAT44(uStack_ec,uStack_f0);
    param_3[0xc] = lStack_e8;
    param_3[0xb] = lVar9;
    plVar10 = (long *)param_3[0xe];
    plVar14 = param_3 + 0xf;
    param_4 = plVar8;
    if (plVar10 != plVar14) {
      if (plVar10 != (long *)0x0) {
        _free(plVar10[-1]);
      }
      param_3[0xd] = (long)(param_3 + 6);
      param_3[0xe] = (long)plVar14;
      param_4 = plVar8;
      plVar10 = plVar14;
    }
    param_1 = (float)lVar9;
    param_2 = (float)lVar15;
    if (iStack_11c < 3) {
      puVar7 = (undefined8 *)((ulong)&uStack_120 | 4);
      *plVar10 = *plStack_d8;
      plVar10[1] = plStack_d8[1];
      uStack_120 = 0x42ff0000;
      param_1 = 0.0;
      puVar7[1] = 0;
      *puVar7 = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      *(undefined8 *)((long)puVar7 + 0x34) = 0;
      *(undefined8 *)((long)puVar7 + 0x2c) = 0;
      if (plStack_d8 != alStack_d0) {
        param_1 = 0.0;
        _free(plStack_d8[-1]);
      }
    }
    else {
      param_3[0xd] = uStack_e0;
      param_3[0xe] = (long)plStack_d8;
    }
    lVar15 = param_3[2];
    plVar14 = (long *)(ulong)((0 < (int)param_3[3] && param_3[4] != 0) &&
                             ((*(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10) >> 3) *
                              -0x5555555555555555 | *(ulong *)(lVar15 + 0x28)) >> 0x1f == 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return plVar14;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_120);
  __Unwind_Resume();
  plVar8 = (long *)param_4[2];
  if (plVar8 != (long *)0x0) {
    lVar15 = plVar14[0x11];
    uVar6 = NEON_fmov(0xbf800000,4);
    do {
      fVar16 = param_1 * (float)plVar8[5];
      fVar17 = param_2 * (float)((ulong)plVar8[5] >> 0x20);
      fVar16 = fVar16 + fVar16;
      fVar17 = fVar17 + fVar17;
      if ((char)lVar15 == '\0') {
        fVar16 = fVar16 / param_1 + (float)uVar6;
        fVar17 = fVar17 / param_1 - param_2 / param_1;
      }
      else {
        fVar16 = fVar16 / param_2 - param_1 / param_2;
        fVar17 = fVar17 / param_2 + (float)((ulong)uVar6 >> 0x20);
      }
      plVar8[5] = CONCAT44(fVar17,fVar16);
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  lVar15 = *param_4;
  *param_4 = 0;
  *extraout_x8 = lVar15;
  lVar11 = param_4[2];
  lVar9 = param_4[1];
  extraout_x8[2] = param_4[2];
  extraout_x8[1] = lVar9;
  param_4[1] = 0;
  lVar9 = param_4[3];
  extraout_x8[3] = lVar9;
  *(int *)(extraout_x8 + 4) = (int)param_4[4];
  if (lVar9 != 0) {
    uVar12 = *(ulong *)(lVar11 + 8);
    uVar13 = extraout_x8[1];
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar12 = uVar13 - 1 & uVar12;
    }
    else if (uVar13 <= uVar12) {
      uVar5 = 0;
      if (uVar13 != 0) {
        uVar5 = uVar12 / uVar13;
      }
      uVar12 = uVar12 - uVar5 * uVar13;
    }
    *(long **)(lVar15 + uVar12 * 8) = extraout_x8 + 2;
    param_4[2] = 0;
    param_4[3] = 0;
  }
  return extraout_x8;
}



/* Entry: 1094fbd58; end: 1094fbfdb;  */

void FUN_1094fbd58(float param_1,float param_2,ulong param_3,long *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *extraout_x8;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  long alStack_e0 [4];
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  
  plVar10 = alStack_e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_3;
  FUN_1094fb82c();
  if ((int)uVar6 != 0) {
    lVar7 = *(long *)(param_3 + 0x10);
    *(undefined1 *)(param_3 + 0x88) = *(undefined1 *)(lVar7 + 0xb0);
    iVar2 = (int)((ulong)(*(long *)(lVar7 + 0x18) - *(long *)(lVar7 + 0x10)) >> 3) * -0x55555555;
    iStack_54 = 2;
    if (*(char *)(lVar7 + 8) != '\0') {
      iStack_54 = 3;
    }
    *(int *)(param_3 + 0x18) = iVar2;
    *(int *)(param_3 + 0x1c) = iStack_54;
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    *(long *)(param_3 + 0x20) =
         (*(long *)(lVar7 + 0x38) - *(long *)(lVar7 + 0x30) >> 3) * -0x5555555555555555;
    iStack_54 = iStack_54 * iVar2;
    uStack_58 = 1;
    uStack_50 = (undefined4)uVar8;
    uStack_4c = 1;
    alStack_e0[1] = 0;
    alStack_e0[0] = 0;
    alStack_e0[3] = 0;
    alStack_e0[2] = 0;
    uStack_c0 = 0x42ff0000;
    uStack_80 = (ulong)&uStack_c0 | 8;
    uStack_b4 = 0;
    uStack_b0 = 0;
    iStack_bc = 0;
    uStack_b8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_94 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    puStack_78 = &uStack_70;
    FUN_109a83fd0(&uStack_c0,4,&uStack_58,5);
    FUN_109a48880(&uStack_c0);
    if (*(long *)(param_3 + 0x60) != 0) {
      piVar1 = (int *)(*(long *)(param_3 + 0x60) + 0x14);
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
        func_0x000109a848d4(param_3 + 0x28);
      }
    }
    *(undefined8 *)(param_3 + 0x60) = 0;
    *(undefined8 *)(param_3 + 0x40) = 0;
    *(undefined8 *)(param_3 + 0x38) = 0;
    *(undefined8 *)(param_3 + 0x50) = 0;
    *(undefined8 *)(param_3 + 0x48) = 0;
    if (0 < *(int *)(param_3 + 0x2c)) {
      lVar7 = 0;
      lVar11 = *(long *)(param_3 + 0x68);
      do {
        *(undefined4 *)(lVar11 + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(param_3 + 0x2c));
    }
    *(ulong *)(param_3 + 0x30) = CONCAT44(uStack_b4,uStack_b8);
    *(ulong *)(param_3 + 0x28) = CONCAT44(iStack_bc,uStack_c0);
    uVar8 = CONCAT44(uStack_9c,uStack_a0);
    *(ulong *)(param_3 + 0x40) = CONCAT44(uStack_a4,uStack_a8);
    *(ulong *)(param_3 + 0x38) = CONCAT44(uStack_ac,uStack_b0);
    *(ulong *)(param_3 + 0x50) = CONCAT44(uStack_94,uStack_98);
    *(undefined8 *)(param_3 + 0x48) = uVar8;
    uVar15 = CONCAT44(uStack_8c,uStack_90);
    *(undefined8 *)(param_3 + 0x60) = uStack_88;
    *(undefined8 *)(param_3 + 0x58) = uVar15;
    puVar12 = *(undefined8 **)(param_3 + 0x70);
    puVar9 = (undefined8 *)(param_3 + 0x78);
    param_4 = plVar10;
    if (puVar12 != puVar9) {
      if (puVar12 != (undefined8 *)0x0) {
        _free(puVar12[-1]);
      }
      *(ulong *)(param_3 + 0x68) = param_3 + 0x30;
      *(undefined8 **)(param_3 + 0x70) = puVar9;
      param_4 = plVar10;
      puVar12 = puVar9;
    }
    param_1 = (float)uVar15;
    param_2 = (float)uVar8;
    if (iStack_bc < 3) {
      puVar9 = (undefined8 *)((ulong)&uStack_c0 | 4);
      *puVar12 = *puStack_78;
      puVar12[1] = puStack_78[1];
      uStack_c0 = 0x42ff0000;
      param_1 = 0.0;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
      puVar9[2] = 0;
      puVar9[5] = 0;
      puVar9[4] = 0;
      *(undefined8 *)((long)puVar9 + 0x34) = 0;
      *(undefined8 *)((long)puVar9 + 0x2c) = 0;
      if (puStack_78 != &uStack_70) {
        param_1 = 0.0;
        _free(puStack_78[-1]);
      }
    }
    else {
      *(ulong *)(param_3 + 0x68) = uStack_80;
      *(undefined8 **)(param_3 + 0x70) = puStack_78;
    }
    lVar7 = *(long *)(param_3 + 0x10);
    uVar6 = (ulong)((0 < *(int *)(param_3 + 0x18) && *(long *)(param_3 + 0x20) != 0) &&
                   ((*(long *)(lVar7 + 0x18) - *(long *)(lVar7 + 0x10) >> 3) * -0x5555555555555555 |
                   *(ulong *)(lVar7 + 0x28)) >> 0x1f == 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010567aa40(&uStack_c0);
  __Unwind_Resume();
  plVar10 = (long *)param_4[2];
  if (plVar10 != (long *)0x0) {
    cVar3 = *(char *)(uVar6 + 0x88);
    uVar8 = NEON_fmov(0xbf800000,4);
    do {
      fVar16 = param_1 * (float)plVar10[5];
      fVar17 = param_2 * (float)((ulong)plVar10[5] >> 0x20);
      fVar16 = fVar16 + fVar16;
      fVar17 = fVar17 + fVar17;
      if (cVar3 == '\0') {
        fVar16 = fVar16 / param_1 + (float)uVar8;
        fVar17 = fVar17 / param_1 - param_2 / param_1;
      }
      else {
        fVar16 = fVar16 / param_2 - param_1 / param_2;
        fVar17 = fVar17 / param_2 + (float)((ulong)uVar8 >> 0x20);
      }
      plVar10[5] = CONCAT44(fVar17,fVar16);
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  lVar7 = *param_4;
  *param_4 = 0;
  *extraout_x8 = lVar7;
  lVar13 = param_4[2];
  lVar11 = param_4[1];
  extraout_x8[2] = param_4[2];
  extraout_x8[1] = lVar11;
  param_4[1] = 0;
  lVar11 = param_4[3];
  extraout_x8[3] = lVar11;
  *(int *)(extraout_x8 + 4) = (int)param_4[4];
  if (lVar11 != 0) {
    uVar6 = *(ulong *)(lVar13 + 8);
    uVar14 = extraout_x8[1];
    if ((uVar14 & uVar14 - 1) == 0) {
      uVar6 = uVar14 - 1 & uVar6;
    }
    else if (uVar14 <= uVar6) {
      uVar5 = 0;
      if (uVar14 != 0) {
        uVar5 = uVar6 / uVar14;
      }
      uVar6 = uVar6 - uVar5 * uVar14;
    }
    *(long **)(lVar7 + uVar6 * 8) = extraout_x8 + 2;
    param_4[2] = 0;
    param_4[3] = 0;
  }
  return;
}



/* Entry: 1094fbfdc; end: 1094fc057;  */

void FUN_1094fbfdc(long *param_1,float param_2,float param_3,long param_4,long *param_5)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  plVar4 = (long *)param_5[2];
  if (plVar4 != (long *)0x0) {
    cVar1 = *(char *)(param_4 + 0x88);
    uVar9 = NEON_fmov(0xbf800000,4);
    do {
      fVar10 = param_2 * (float)plVar4[5];
      fVar11 = param_3 * (float)((ulong)plVar4[5] >> 0x20);
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      if (cVar1 == '\0') {
        fVar10 = fVar10 / param_2 + (float)uVar9;
        fVar11 = fVar11 / param_2 - param_3 / param_2;
      }
      else {
        fVar10 = fVar10 / param_3 - param_2 / param_3;
        fVar11 = fVar11 / param_3 + (float)((ulong)uVar9 >> 0x20);
      }
      plVar4[5] = CONCAT44(fVar11,fVar10);
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  lVar3 = *param_5;
  *param_5 = 0;
  *param_1 = lVar3;
  lVar6 = param_5[2];
  lVar5 = param_5[1];
  param_1[2] = param_5[2];
  param_1[1] = lVar5;
  param_5[1] = 0;
  lVar5 = param_5[3];
  param_1[3] = lVar5;
  *(int *)(param_1 + 4) = (int)param_5[4];
  if (lVar5 != 0) {
    uVar7 = *(ulong *)(lVar6 + 8);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar7 = uVar8 - 1 & uVar7;
    }
    else if (uVar8 <= uVar7) {
      uVar2 = 0;
      if (uVar8 != 0) {
        uVar2 = uVar7 / uVar8;
      }
      uVar7 = uVar7 - uVar2 * uVar8;
    }
    *(long **)(lVar3 + uVar7 * 8) = param_1 + 2;
    param_5[2] = 0;
    param_5[3] = 0;
  }
  return;
}



/* Entry: 1094fc058; end: 1094fc16b;  */

void FUN_1094fc058(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long alStack_d0 [3];
  long alStack_b8 [6];
  undefined1 uStack_81;
  
  lVar1 = 0;
  puVar3 = *(undefined4 **)(param_2 + 0x20);
  lVar2 = 1;
  alStack_d0[1] = 1;
  alStack_d0[2] = *(long *)(param_1 + 0x20);
  alStack_b8[0] = 3;
  alStack_b8[4] = 1;
  do {
    lVar2 = *(long *)((long)alStack_b8 + lVar1) * lVar2;
    *(long *)((long)alStack_b8 + lVar1 + 0x18) = lVar2;
    lVar1 = lVar1 + -8;
  } while (lVar1 != -0x18);
  if (alStack_d0[2] != 0) {
    lVar1 = 0;
    uVar4 = 0;
    do {
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      alStack_d0[0] = *(long *)(*(long *)(param_1 + 0x10) + 0x30) + lVar1;
      lVar2 = param_3 + 0x68;
      FUN_1094edafc(lVar2,alStack_d0[0],&UNK_10dd5b8f9,alStack_d0,&uStack_81);
      *(undefined4 *)(lVar2 + 0x28) = uVar5;
      *(undefined4 *)(lVar2 + 0x2c) = uVar6;
      *(undefined4 *)(lVar2 + 0x30) = uVar7;
      uVar4 = uVar4 + 1;
      lVar1 = lVar1 + 0x18;
      puVar3 = puVar3 + alStack_b8[3];
    } while (uVar4 < *(ulong *)(param_1 + 0x20));
  }
  return;
}



/* Entry: 1094fc16c; end: 1094fc60b;  */

void FUN_1094fc16c(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  code *pcVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  undefined4 *puVar20;
  long *plVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  undefined4 *puVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_220 [40];
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [32];
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  int iStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long lStack_170;
  long lStack_168;
  long lStack_158;
  long lStack_150;
  long lStack_138;
  long lStack_130;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined1 uStack_d4;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  
  FUN_1094cf9dc(auStack_b8,param_2 + 0x40);
  uVar28 = NEON_ucvtf(*(undefined4 *)(param_4 + 0x14));
  uVar29 = NEON_ucvtf(*(undefined4 *)(param_4 + 0x10));
  (**(code **)(*param_1 + 0x28))(auStack_90,uVar28,uVar29,param_1,auStack_b8,param_2,param_5);
  func_0x0001094cffd4(auStack_b8);
  uStack_d4 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  lStack_d0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  lStack_100 = 0;
  uStack_e8 = 0;
  lStack_f0 = 0;
  uStack_df = 0;
  uStack_e7 = 0;
  uStack_e0 = 0;
  FUN_1094fb92c(&uStack_190,param_1,auStack_90);
  if (uStack_120 != 0) {
    uStack_118 = uStack_120;
    __ZdlPv();
  }
  uStack_118 = uStack_188;
  uStack_120 = uStack_190;
  uStack_110 = uStack_180;
  uStack_190 = *(ulong *)(param_4 + 8);
  FUN_1094f9370(&uStack_188,&uStack_120);
  FUN_1094f8ea4(param_3 + 0x18,&uStack_190);
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  if (lStack_158 != 0) {
    lStack_150 = lStack_158;
    __ZdlPv();
  }
  if (lStack_170 != 0) {
    lStack_168 = lStack_170;
    __ZdlPv();
  }
  if (uStack_188 != 0) {
    uStack_180 = uStack_188;
    __ZdlPv();
  }
  while( true ) {
    lVar13 = param_1[2];
    uVar12 = *(ulong *)(lVar13 + 0x28);
    if (*(ulong *)(param_3 + 0x40) <= uVar12) break;
    func_0x0001094f8fa4(param_3 + 0x18);
  }
  iStack_19c = (int)uVar12;
  if (iStack_19c < 1) {
    uVar18 = *(uint *)(param_1 + 3);
  }
  else {
    uVar15 = 0;
    iVar7 = (int)*(ulong *)(param_3 + 0x40) + -1;
    lVar16 = *(long *)(param_3 + 0x38);
    lVar17 = *(long *)(param_3 + 0x20);
    uVar18 = *(uint *)(param_1 + 3);
    do {
      if (0 < (int)uVar18) {
        uVar10 = 0;
        iVar14 = (int)uVar15;
        iVar1 = iVar7;
        if (iVar14 <= iVar7) {
          iVar1 = iVar14;
        }
        uVar19 = lVar16 + iVar1;
        uStack_188 = (ulong)(uint)~(iVar14 - iStack_19c);
        lVar11 = *(long *)(*(long *)(lVar17 + (uVar19 / 0x24) * 8) + (uVar19 % 0x24) * 0x70 + 8);
        uVar2 = *(uint *)((long)param_1 + 0x2c);
        uVar19 = (ulong)uVar2;
        puVar20 = (undefined4 *)param_1[7];
        bVar4 = *(byte *)(lVar13 + 8);
        uVar3 = *(uint *)((long)param_1 + 0x1c);
        do {
          puVar22 = (undefined4 *)(lVar11 + uVar10 * 0x14);
          uVar24 = ((ulong)uVar3 << 0x20) * uVar10;
          uStack_190 = uVar24;
          puVar23 = puVar20;
          if ((int)uVar2 < 1) {
            *puVar20 = *puVar22;
            *puVar20 = puVar22[1];
            if (bVar4 != 0) {
              uVar28 = puVar22[2];
              goto LAB_1094fc408;
            }
          }
          else {
            uVar26 = 0;
            plVar21 = (long *)param_1[0xe];
            puVar27 = puVar20;
            do {
              puVar27 = (undefined4 *)
                        ((long)puVar27 +
                        plVar21[uVar26] * (long)*(int *)((long)&uStack_190 + uVar26 * 4));
              uVar26 = uVar26 + 1;
            } while (uVar19 != uVar26);
            uVar26 = 0;
            *puVar27 = *puVar22;
            uStack_190 = uVar24 + 0x100000000;
            puVar27 = puVar20;
            do {
              puVar27 = (undefined4 *)
                        ((long)puVar27 +
                        plVar21[uVar26] * (long)*(int *)((long)&uStack_190 + uVar26 * 4));
              uVar26 = uVar26 + 1;
            } while (uVar19 != uVar26);
            *puVar27 = puVar22[1];
            if ((bVar4 & 1) != 0) {
              uVar28 = puVar22[2];
              uStack_190 = uVar24 + 0x200000000;
              puVar25 = &uStack_190;
              uVar24 = uVar19;
              do {
                puVar23 = (undefined4 *)((long)puVar23 + *plVar21 * (long)(int)*puVar25);
                uVar24 = uVar24 - 1;
                plVar21 = plVar21 + 1;
                puVar25 = (ulong *)((long)puVar25 + 4);
              } while (uVar24 != 0);
LAB_1094fc408:
              *puVar23 = uVar28;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar18);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != (uVar12 & 0x7fffffff));
  }
  iStack_198 = *(int *)((long)param_1 + 0x1c) * uVar18;
  uStack_1a0 = 1;
  uStack_194 = 1;
  uStack_1a8 = 1;
  func_0x000109d0f600(&uStack_190,&uStack_1a0,&uStack_1a8,param_1[7]);
  func_0x000109cdb2c4(auStack_220,param_1[1],&uStack_190,1);
  puVar9 = auStack_220;
  FUN_10938e710(puVar9,*(undefined8 *)(param_1[2] + 0x60));
  if (puVar9 == (undefined1 *)0x0) {
    FUN_109262df8(&UNK_10f639994);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1094fc588);
    (*pcVar8)();
  }
  ppuStack_1f8 = &PTR_DAT_1108a5c28;
  uStack_1e8 = *(undefined8 *)(puVar9 + 0x38);
  uStack_1f0 = *(undefined8 *)(puVar9 + 0x30);
  uStack_1e0 = *(undefined8 *)(puVar9 + 0x40);
  uStack_1d0 = *(undefined8 *)(puVar9 + 0x50);
  uStack_1d8 = *(undefined8 *)(puVar9 + 0x48);
  if (*(long *)(puVar9 + 0x50) != 0) {
    plVar21 = (long *)(*(long *)(puVar9 + 0x50) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar6) {
        *plVar21 = *plVar21 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_109407928(auStack_1c8,puVar9 + 0x58);
  func_0x000109379fe8(auStack_220);
  (**(code **)(*param_1 + 0x30))(param_1,&ppuStack_1f8,param_2);
  func_0x000105675c90(&ppuStack_1f8);
  func_0x000105675c90(&uStack_190);
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  if (lStack_f0 != 0) {
    uStack_e8 = (undefined1)lStack_f0;
    uStack_e7 = (undefined7)((ulong)lStack_f0 >> 8);
    __ZdlPv();
  }
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  if (uStack_120 != 0) {
    uStack_118 = uStack_120;
    __ZdlPv();
  }
  func_0x0001094cffd4(auStack_90);
  return;
}



/* Entry: 1094fc60c; end: 1094fc6df;  */

undefined8 * FUN_1094fc60c(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110af9430;
  if (param_1[0xc] != 0) {
    piVar1 = (int *)(param_1[0xc] + 0x14);
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
      func_0x000109a848d4(param_1 + 5);
    }
  }
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar5 = 0;
    lVar7 = param_1[0xd];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2c));
  }
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  *param_1 = &PTR_FUN_110af93d0;
  FUN_1094f9754(param_1 + 2,0);
  FUN_10938cda4(param_1 + 1,0);
  return param_1;
}



/* Entry: 1094fc6e0; end: 1094fc7b3;  */

void FUN_1094fc6e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110af9430;
  if (param_1[0xc] != 0) {
    piVar1 = (int *)(param_1[0xc] + 0x14);
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
      func_0x000109a848d4(param_1 + 5);
    }
  }
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar5 = 0;
    lVar7 = param_1[0xd];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x2c));
  }
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar6 != param_1 + 0xf && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  *param_1 = &PTR_FUN_110af93d0;
  FUN_1094f9754(param_1 + 2,0);
  FUN_10938cda4(param_1 + 1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1094fc7b4; end: 1094fd32f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1094fc7b4(ulong param_1,float param_2,float param_3,float *******param_4,int param_5)

{
  uint *puVar1;
  float *pfVar2;
  float ******ppppppfVar3;
  int *piVar4;
  code *pcVar5;
  bool bVar6;
  float *******pppppppfVar7;
  float *******pppppppfVar8;
  float *******pppppppfVar9;
  undefined8 *******pppppppuVar10;
  float *******pppppppfVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  float ******ppppppfVar18;
  ulong uVar19;
  ulong uVar20;
  float *******pppppppfVar21;
  float *******pppppppfVar22;
  float *******pppppppfVar23;
  int iVar24;
  float *******pppppppfVar25;
  undefined4 uVar26;
  float *******pppppppfVar27;
  undefined8 *******pppppppuVar28;
  float *******pppppppfVar29;
  undefined8 *******pppppppuVar30;
  float *******pppppppfVar31;
  int *piVar32;
  ulong uVar33;
  float fVar34;
  uint uVar35;
  float fVar37;
  float fVar38;
  float *******pppppppfStack_110;
  float *******pppppppfStack_108;
  float *******pppppppfStack_100;
  int *piStack_f8;
  int *piStack_f0;
  undefined8 uStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  float *******pppppppfStack_a8;
  float *******pppppppfStack_a0;
  float *******pppppppfStack_98;
  float *******pppppppfStack_90;
  float *******pppppppfStack_88;
  ulong uVar36;
  
  lStack_c8 = 0;
  lStack_c0 = 0;
  uStack_b8 = 0;
  uVar36 = param_1;
  func_0x0001073b504c(&lStack_c8,(long)param_4[1] - (long)*param_4 >> 7);
  ppppppfVar3 = param_4[1];
  for (ppppppfVar18 = *param_4; ppppppfVar18 != ppppppfVar3; ppppppfVar18 = ppppppfVar18 + 0x10) {
    FUN_1092c9a40(&lStack_c8,ppppppfVar18 + 5);
  }
  pppppppfStack_a8 = (float *******)0x0;
  pppppppfStack_a0 = (float *******)0x0;
  pppppppfStack_98 = (float *******)0x0;
  if (lStack_c0 == lStack_c8) {
    pppppppfVar27 = (float *******)0x0;
  }
  else {
    pppppppfVar27 = (float *******)0x0;
    uVar33 = 0;
    lVar12 = lStack_c0;
    lVar14 = lStack_c8;
    do {
      fVar34 = *(float *)(lVar14 + uVar33 * 4);
      uVar36 = (ulong)(uint)fVar34;
      if ((float)param_1 < fVar34) {
        if (pppppppfVar27 < pppppppfStack_98) {
          *(float *)pppppppfVar27 = fVar34;
          *(uint *)((long)pppppppfVar27 + 4) = (uint)uVar33;
          pppppppfVar27 = pppppppfVar27 + 1;
        }
        else {
          lVar12 = (long)pppppppfVar27 - (long)pppppppfStack_a8;
          uVar36 = (lVar12 >> 3) + 1;
          if (uVar36 >> 0x3d != 0) {
            FUN_10940c468();
            goto LAB_1094fd260;
          }
          uVar17 = (long)pppppppfStack_98 - (long)pppppppfStack_a8 >> 2;
          if (uVar17 <= uVar36) {
            uVar17 = uVar36;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)pppppppfStack_98 - (long)pppppppfStack_a8)) {
            uVar17 = 0x1fffffffffffffff;
          }
          pppppppfVar7 = (float *******)&pppppppfStack_a8;
          FUN_10940c47c();
          pppppppfVar29 = pppppppfStack_a8;
          lVar13 = (long)pppppppfStack_a0 - (long)pppppppfStack_a8;
          uVar35 = *(uint *)(lVar14 + uVar33 * 4);
          uVar36 = (ulong)uVar35;
          puVar1 = (uint *)((long)pppppppfVar7 + lVar12);
          *puVar1 = uVar35;
          puVar1[1] = (uint)uVar33;
          pppppppfVar27 = (float *******)(puVar1 + 2);
          pppppppfVar31 = (float *******)((long)puVar1 - lVar13);
          _memcpy(pppppppfVar31,pppppppfVar29);
          pppppppfVar29 = pppppppfStack_a8;
          pppppppfStack_a8 = pppppppfVar31;
          pppppppfStack_98 = pppppppfVar7 + uVar17;
          if (pppppppfVar29 != (float *******)0x0) {
            pppppppfStack_a0 = pppppppfVar27;
            __ZdlPv();
          }
        }
        pppppppfStack_a0 = pppppppfVar27;
        lVar12 = lStack_c0;
        lVar14 = lStack_c8;
      }
      uVar33 = uVar33 + 1;
    } while (uVar33 < (ulong)(lVar12 - lVar14 >> 2));
  }
  pppppppfVar7 = pppppppfStack_a8;
  uVar33 = (long)pppppppfVar27 - (long)pppppppfStack_a8;
  iVar16 = (int)(uVar33 >> 3);
  iVar24 = iVar16;
  if (param_5 <= iVar16) {
    iVar24 = param_5;
  }
  if (-1 < param_5) {
    iVar16 = iVar24;
  }
  uVar17 = (ulong)iVar16;
  pppppppfVar29 = pppppppfStack_a8 + iVar16;
  pppppppfVar31 = pppppppfStack_a8;
  pppppppfVar22 = pppppppfVar27;
  if (pppppppfVar29 != pppppppfVar27) {
LAB_1094fc9e8:
    uVar19 = (long)pppppppfVar22 - (long)pppppppfVar31 >> 3;
    if (1 < uVar19) {
      if (uVar19 == 3) {
        fVar37 = *(float *)(pppppppfVar31 + 1);
        fVar34 = *(float *)pppppppfVar31;
        uVar36 = (ulong)(uint)fVar34;
        fVar38 = *(float *)(pppppppfVar22 + -1);
        if (fVar37 <= fVar34) {
          if (fVar37 < fVar38) {
            *(float *)(pppppppfVar31 + 1) = fVar38;
            *(float *)(pppppppfVar22 + -1) = fVar37;
            uVar26 = *(undefined4 *)((long)pppppppfVar31 + 0xc);
            *(undefined4 *)((long)pppppppfVar31 + 0xc) = *(undefined4 *)((long)pppppppfVar22 - 4);
            *(undefined4 *)((long)pppppppfVar22 - 4) = uVar26;
            fVar34 = *(float *)(pppppppfVar31 + 1);
            uVar36 = (ulong)(uint)fVar34;
            fVar37 = *(float *)pppppppfVar31;
            if (fVar37 < fVar34) {
              *(float *)pppppppfVar31 = fVar34;
              *(float *)(pppppppfVar31 + 1) = fVar37;
              uVar26 = *(undefined4 *)((long)pppppppfVar31 + 4);
              *(undefined4 *)((long)pppppppfVar31 + 4) = *(undefined4 *)((long)pppppppfVar31 + 0xc);
              *(undefined4 *)((long)pppppppfVar31 + 0xc) = uVar26;
            }
          }
        }
        else {
          if (fVar37 < fVar38) {
            *(float *)pppppppfVar31 = fVar38;
            *(float *)(pppppppfVar22 + -1) = fVar34;
            goto LAB_1094fd128;
          }
          *(float *)pppppppfVar31 = fVar37;
          *(float *)(pppppppfVar31 + 1) = fVar34;
          uVar26 = *(undefined4 *)((long)pppppppfVar31 + 4);
          *(undefined4 *)((long)pppppppfVar31 + 4) = *(undefined4 *)((long)pppppppfVar31 + 0xc);
          *(undefined4 *)((long)pppppppfVar31 + 0xc) = uVar26;
          if (fVar34 < *(float *)(pppppppfVar22 + -1)) {
            *(float *)(pppppppfVar31 + 1) = *(float *)(pppppppfVar22 + -1);
            *(float *)(pppppppfVar22 + -1) = fVar34;
            *(undefined4 *)((long)pppppppfVar31 + 0xc) = *(undefined4 *)((long)pppppppfVar22 - 4);
LAB_1094fd134:
            *(undefined4 *)((long)pppppppfVar22 - 4) = uVar26;
          }
        }
      }
      else if (uVar19 == 2) {
        fVar34 = *(float *)(pppppppfVar22 + -1);
        uVar36 = (ulong)(uint)fVar34;
        fVar37 = *(float *)pppppppfVar31;
        if (fVar37 < fVar34) {
          *(float *)pppppppfVar31 = fVar34;
          *(float *)(pppppppfVar22 + -1) = fVar37;
LAB_1094fd128:
          uVar26 = *(undefined4 *)((long)pppppppfVar31 + 4);
          *(undefined4 *)((long)pppppppfVar31 + 4) = *(undefined4 *)((long)pppppppfVar22 - 4);
          goto LAB_1094fd134;
        }
      }
      else if ((long)uVar19 < 8) {
        while (pppppppfVar29 = pppppppfVar31, pppppppfVar22 + -1 != pppppppfVar29) {
          pppppppfVar31 = pppppppfVar29 + 1;
          if ((pppppppfVar22 != pppppppfVar29) && (pppppppfVar31 != pppppppfVar22)) {
            uVar35 = *(uint *)pppppppfVar29;
            uVar36 = (ulong)uVar35;
            pppppppfVar25 = pppppppfVar29;
            pppppppfVar8 = pppppppfVar31;
            uVar19 = uVar36;
            do {
              pppppppfVar23 = pppppppfVar8 + 1;
              pppppppfVar21 = pppppppfVar8;
              uVar20 = (ulong)(uint)*(float *)pppppppfVar8;
              if (*(float *)pppppppfVar8 <= (float)uVar19) {
                pppppppfVar21 = pppppppfVar25;
                uVar20 = uVar19;
              }
              uVar19 = uVar20;
              pppppppfVar25 = pppppppfVar21;
              pppppppfVar8 = pppppppfVar23;
            } while (pppppppfVar23 != pppppppfVar22);
            if (pppppppfVar21 != pppppppfVar29) {
              *(undefined4 *)pppppppfVar29 = *(undefined4 *)pppppppfVar21;
              *(uint *)pppppppfVar21 = uVar35;
              uVar26 = *(undefined4 *)((long)pppppppfVar29 + 4);
              *(undefined4 *)((long)pppppppfVar29 + 4) = *(undefined4 *)((long)pppppppfVar21 + 4);
              *(undefined4 *)((long)pppppppfVar21 + 4) = uVar26;
            }
          }
        }
      }
      else {
        pppppppfVar25 = pppppppfVar31 + ((ulong)((long)pppppppfVar22 - (long)pppppppfVar31) >> 4);
        pppppppfVar8 = pppppppfVar22 + -1;
        fVar37 = *(float *)pppppppfVar8;
        fVar38 = *(float *)pppppppfVar25;
        fVar34 = *(float *)pppppppfVar31;
        if (fVar38 <= fVar34) {
          if (fVar38 < fVar37) {
            *(float *)pppppppfVar25 = fVar37;
            *(float *)(pppppppfVar22 + -1) = fVar38;
            uVar26 = *(undefined4 *)((long)pppppppfVar25 + 4);
            *(undefined4 *)((long)pppppppfVar25 + 4) = *(undefined4 *)((long)pppppppfVar22 - 4);
            *(undefined4 *)((long)pppppppfVar22 - 4) = uVar26;
            fVar34 = *(float *)pppppppfVar31;
            if (fVar34 < *(float *)pppppppfVar25) {
              *(float *)pppppppfVar31 = *(float *)pppppppfVar25;
              *(float *)pppppppfVar25 = fVar34;
              uVar26 = *(undefined4 *)((long)pppppppfVar31 + 4);
              *(undefined4 *)((long)pppppppfVar31 + 4) = *(undefined4 *)((long)pppppppfVar25 + 4);
              *(undefined4 *)((long)pppppppfVar25 + 4) = uVar26;
            }
            goto LAB_1094fcad4;
          }
          iVar24 = 0;
        }
        else {
          if (fVar37 <= fVar38) {
            *(float *)pppppppfVar31 = fVar38;
            *(float *)pppppppfVar25 = fVar34;
            uVar26 = *(undefined4 *)((long)pppppppfVar31 + 4);
            *(undefined4 *)((long)pppppppfVar31 + 4) = *(undefined4 *)((long)pppppppfVar25 + 4);
            *(undefined4 *)((long)pppppppfVar25 + 4) = uVar26;
            if (*(float *)pppppppfVar8 <= fVar34) goto LAB_1094fcad4;
            *(float *)pppppppfVar25 = *(float *)pppppppfVar8;
            *(float *)(pppppppfVar22 + -1) = fVar34;
            *(undefined4 *)((long)pppppppfVar25 + 4) = *(undefined4 *)((long)pppppppfVar22 - 4);
          }
          else {
            *(float *)pppppppfVar31 = fVar37;
            *(float *)(pppppppfVar22 + -1) = fVar34;
            uVar26 = *(undefined4 *)((long)pppppppfVar31 + 4);
            *(undefined4 *)((long)pppppppfVar31 + 4) = *(undefined4 *)((long)pppppppfVar22 - 4);
          }
          *(undefined4 *)((long)pppppppfVar22 - 4) = uVar26;
LAB_1094fcad4:
          iVar24 = 1;
        }
        fVar34 = *(float *)pppppppfVar31;
        uVar36 = (ulong)(uint)fVar34;
        pppppppfVar21 = pppppppfVar8;
        if (fVar34 <= *(float *)pppppppfVar25) {
          do {
            pppppppfVar23 = pppppppfVar21;
            pppppppfVar21 = pppppppfVar23 + -1;
            if (pppppppfVar21 == pppppppfVar31) {
              pppppppfVar25 = pppppppfVar31 + 1;
              if (*(float *)pppppppfVar8 < fVar34) goto LAB_1094fcc80;
              goto LAB_1094fcc24;
            }
          } while (*(float *)pppppppfVar21 <= *(float *)pppppppfVar25);
          *(float *)pppppppfVar31 = *(float *)pppppppfVar21;
          *(float *)pppppppfVar21 = fVar34;
          uVar26 = *(undefined4 *)((long)pppppppfVar31 + 4);
          *(undefined4 *)((long)pppppppfVar31 + 4) = *(undefined4 *)((long)pppppppfVar23 - 4);
          *(undefined4 *)((long)pppppppfVar23 - 4) = uVar26;
          bVar6 = iVar24 != 0;
          iVar24 = 1;
          pppppppfVar8 = pppppppfVar21;
          if (bVar6) {
            iVar24 = 2;
          }
        }
        pppppppfVar21 = pppppppfVar31 + 1;
        pppppppfVar11 = pppppppfVar21;
        pppppppfVar9 = pppppppfVar25;
        pppppppfVar23 = pppppppfVar21;
        if (pppppppfVar21 < pppppppfVar8) {
          while( true ) {
            pppppppfVar25 = pppppppfVar9;
            do {
              pppppppfVar23 = pppppppfVar11;
              pppppppfVar11 = pppppppfVar23 + 1;
              fVar34 = *(float *)pppppppfVar23;
              uVar36 = (ulong)(uint)fVar34;
            } while (*(float *)pppppppfVar25 < fVar34);
            do {
              pppppppfVar9 = pppppppfVar8;
              pppppppfVar8 = pppppppfVar9 + -1;
            } while (*(float *)pppppppfVar8 <= *(float *)pppppppfVar25);
            if (pppppppfVar8 <= pppppppfVar23) break;
            *(float *)pppppppfVar23 = *(float *)pppppppfVar8;
            *(float *)pppppppfVar8 = fVar34;
            uVar26 = *(undefined4 *)((long)pppppppfVar23 + 4);
            *(undefined4 *)((long)pppppppfVar23 + 4) = *(undefined4 *)((long)pppppppfVar9 + -4);
            *(undefined4 *)((long)pppppppfVar9 + -4) = uVar26;
            iVar24 = iVar24 + 1;
            pppppppfVar9 = pppppppfVar8;
            if (pppppppfVar23 != pppppppfVar25) {
              pppppppfVar9 = pppppppfVar25;
            }
          }
        }
        if (pppppppfVar23 != pppppppfVar25) {
          fVar34 = *(float *)pppppppfVar25;
          uVar36 = (ulong)(uint)fVar34;
          fVar37 = *(float *)pppppppfVar23;
          if (fVar37 < fVar34) {
            *(float *)pppppppfVar23 = fVar34;
            *(float *)pppppppfVar25 = fVar37;
            uVar26 = *(undefined4 *)((long)pppppppfVar23 + 4);
            *(undefined4 *)((long)pppppppfVar23 + 4) = *(undefined4 *)((long)pppppppfVar25 + 4);
            *(undefined4 *)((long)pppppppfVar25 + 4) = uVar26;
            iVar24 = iVar24 + 1;
          }
        }
        if (pppppppfVar23 != pppppppfVar29) {
          if (iVar24 == 0) {
            pppppppfVar25 = pppppppfVar23;
            if (pppppppfVar29 < pppppppfVar23) {
              do {
                if (pppppppfVar21 == pppppppfVar23) goto LAB_1094fc944;
                fVar34 = *(float *)pppppppfVar21;
                uVar36 = (ulong)(uint)fVar34;
                pppppppfVar25 = pppppppfVar21 + -1;
                pppppppfVar21 = pppppppfVar21 + 1;
              } while (fVar34 <= *(float *)pppppppfVar25);
            }
            else {
              do {
                pppppppfVar8 = pppppppfVar25 + 1;
                if (pppppppfVar8 == pppppppfVar22) goto LAB_1094fc944;
                uVar36 = (ulong)(uint)*(float *)pppppppfVar8;
                fVar34 = *(float *)pppppppfVar25;
                pppppppfVar25 = pppppppfVar8;
              } while (*(float *)pppppppfVar8 <= fVar34);
            }
          }
          pppppppfVar21 = pppppppfVar31;
          if (pppppppfVar23 <= pppppppfVar29) {
            pppppppfVar21 = pppppppfVar23 + 1;
            pppppppfVar23 = pppppppfVar22;
          }
          goto LAB_1094fccd8;
        }
      }
    }
  }
LAB_1094fc944:
  uVar19 = (long)uVar33 >> 3;
  if (uVar19 < uVar17) {
    uVar19 = uVar17 - uVar19;
    if ((ulong)((long)pppppppfStack_98 - (long)pppppppfVar27 >> 3) < uVar19) {
      if (iVar16 < 0) {
        FUN_10940c468();
LAB_1094fd260:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1094fd264);
        (*pcVar5)();
      }
      uVar15 = (long)pppppppfStack_98 - (long)pppppppfVar7;
      uVar20 = (long)uVar15 >> 2;
      if (uVar20 <= uVar17) {
        uVar20 = uVar17;
      }
      if (0x7ffffffffffffff7 < uVar15) {
        uVar20 = 0x1fffffffffffffff;
      }
      pppppppfVar7 = (float *******)&pppppppfStack_a8;
      FUN_10940c47c();
      lVar12 = (long)pppppppfVar7 + uVar33;
      _bzero(lVar12,uVar19 * 8);
      pppppppfVar27 = (float *******)(lVar12 + uVar19 * 8);
      pppppppfVar29 = (float *******)(lVar12 - ((long)pppppppfStack_a0 - (long)pppppppfStack_a8));
      _memcpy(pppppppfVar29);
      bVar6 = pppppppfStack_a8 != (float *******)0x0;
      pppppppfStack_a8 = pppppppfVar29;
      pppppppfStack_a0 = pppppppfVar27;
      pppppppfStack_98 = pppppppfVar7 + uVar20;
      if (bVar6) {
        __ZdlPv();
        pppppppfVar27 = pppppppfStack_a0;
      }
    }
    else {
      _bzero(pppppppfVar27,uVar19 * 8);
      pppppppfVar27 = pppppppfVar27 + uVar19;
      pppppppfStack_a0 = pppppppfVar27;
    }
  }
  else if (uVar17 < uVar19) {
    pppppppfVar27 = pppppppfVar7 + uVar17;
    pppppppfStack_a0 = pppppppfVar27;
  }
  ppppppuStack_d8 = (undefined8 ******)0x0;
  lStack_d0 = 0;
  pppppppuStack_e0 = &ppppppuStack_d8;
  for (pppppppfVar7 = pppppppfStack_a8; pppppppfVar7 != pppppppfVar27;
      pppppppfVar7 = pppppppfVar7 + 1) {
    uVar36 = (ulong)*(uint *)pppppppfVar7;
    FUN_1094fd3d8(&pppppppuStack_e0,&ppppppuStack_d8,*pppppppfVar7);
  }
  if (pppppppfStack_a8 != (float *******)0x0) {
    pppppppfStack_a0 = pppppppfStack_a8;
    __ZdlPv(pppppppfStack_a8);
  }
  piStack_f8 = (int *)0x0;
  piStack_f0 = (int *)0x0;
  uStack_e8 = 0;
  if (lStack_d0 == 0) {
    lVar12 = 0;
  }
  else {
    do {
      pppppppuVar30 = pppppppuStack_e0;
      pppppppfStack_110 =
           (float *******)CONCAT44(pppppppfStack_110._4_4_,*(undefined4 *)(pppppppuStack_e0 + 4));
      func_0x0001094fd368(&pppppppuStack_e0,pppppppuStack_e0);
      __ZdlPv(pppppppuVar30);
      FUN_10923b3a0(&piStack_f8,&pppppppfStack_110);
      pppppppfStack_a8 = (float *******)0x0;
      pppppppfStack_a0 = (float *******)0x0;
      pppppppfStack_98 = (float *******)0x0;
      pppppppfVar27 = pppppppfStack_a0;
      pppppppuVar30 = pppppppuStack_e0;
      while (pppppppfStack_a0 = pppppppfVar27, pppppppuVar30 != &ppppppuStack_d8) {
        fVar34 = *(float *)(pppppppuVar30 + 4);
        func_0x0001094cf7e0(*param_4 + (long)(int)pppppppfStack_110 * 0x10,
                            *param_4 + (long)(int)fVar34 * 0x10);
        fVar37 = (float)uVar36;
        if (0.0 <= param_2) {
          if (param_3 < fVar37) goto LAB_1094fcebc;
          pppppppuVar10 = (undefined8 *******)pppppppuVar30[1];
          pppppppuVar28 = pppppppuVar30;
          pppppppfVar27 = pppppppfStack_a0;
          if ((undefined8 *******)pppppppuVar30[1] == (undefined8 *******)0x0) {
            do {
              pppppppuVar30 = (undefined8 *******)pppppppuVar28[2];
              bVar6 = (undefined8 *******)*pppppppuVar30 != pppppppuVar28;
              pppppppuVar28 = pppppppuVar30;
            } while (bVar6);
          }
          else {
            do {
              pppppppuVar30 = pppppppuVar10;
              pppppppuVar10 = (undefined8 *******)*pppppppuVar30;
            } while ((undefined8 *******)*pppppppuVar30 != (undefined8 *******)0x0);
          }
        }
        else {
          fVar38 = *(float *)((long)pppppppuVar30 + 0x1c);
          uVar36 = (ulong)(uint)(-(fVar37 * fVar37) / -param_2);
          _expf();
          fVar38 = (float)uVar36 * fVar38;
          if (param_3 < fVar38) {
            if (pppppppfStack_a0 < pppppppfStack_98) {
              *(float *)pppppppfStack_a0 = fVar38;
              *(float *)((long)pppppppfStack_a0 + 4) = fVar34;
              pppppppfStack_a0 = pppppppfStack_a0 + 1;
            }
            else {
              lVar12 = (long)pppppppfStack_a0 - (long)pppppppfStack_a8;
              uVar33 = (lVar12 >> 3) + 1;
              if (uVar33 >> 0x3d != 0) {
                FUN_10940c468();
                goto LAB_1094fd260;
              }
              uVar17 = (long)pppppppfStack_98 - (long)pppppppfStack_a8 >> 2;
              if (uVar17 <= uVar33) {
                uVar17 = uVar33;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)pppppppfStack_98 - (long)pppppppfStack_a8)) {
                uVar17 = 0x1fffffffffffffff;
              }
              pppppppfVar27 = (float *******)&pppppppfStack_a8;
              FUN_10940c47c();
              pppppppfVar29 = pppppppfStack_a8;
              lVar14 = (long)pppppppfStack_a0 - (long)pppppppfStack_a8;
              pfVar2 = (float *)((long)pppppppfVar27 + lVar12);
              *pfVar2 = fVar38;
              pfVar2[1] = fVar34;
              pppppppfVar7 = (float *******)(pfVar2 + 2);
              pppppppfVar31 = (float *******)((long)pfVar2 - lVar14);
              _memcpy(pppppppfVar31,pppppppfVar29);
              bVar6 = pppppppfStack_a8 != (float *******)0x0;
              pppppppfStack_a8 = pppppppfVar31;
              pppppppfStack_a0 = pppppppfVar7;
              pppppppfStack_98 = pppppppfVar27 + uVar17;
              if (bVar6) {
                __ZdlPv();
                pppppppfStack_a0 = pppppppfVar7;
              }
            }
          }
LAB_1094fcebc:
          pppppppuVar10 = &pppppppuStack_e0;
          func_0x0001094fd368(pppppppuVar10,pppppppuVar30);
          __ZdlPv(pppppppuVar30);
          pppppppfVar27 = pppppppfStack_a0;
          pppppppuVar30 = pppppppuVar10;
        }
      }
      pppppppfVar7 = pppppppfStack_a8;
      if (param_2 < 0.0) {
        for (; pppppppfVar7 != pppppppfVar27; pppppppfVar7 = pppppppfVar7 + 1) {
          uVar36 = (ulong)*(uint *)pppppppfVar7;
          FUN_1094fd3d8(&pppppppuStack_e0,&ppppppuStack_d8,*pppppppfVar7);
        }
      }
      if (pppppppfStack_a8 != (float *******)0x0) {
        pppppppfStack_a0 = pppppppfStack_a8;
        __ZdlPv(pppppppfStack_a8);
      }
    } while (lStack_d0 != 0);
    lVar12 = (long)piStack_f0 - (long)piStack_f8 >> 2;
  }
  pppppppfStack_110 = (float *******)0x0;
  pppppppfStack_108 = (float *******)0x0;
  pppppppfStack_100 = (float *******)0x0;
  FUN_1094db160(&pppppppfStack_110,lVar12);
  piVar4 = piStack_f0;
  if (piStack_f8 != piStack_f0) {
    piVar32 = piStack_f8;
    do {
      pppppppfVar27 = pppppppfStack_108;
      iVar24 = *piVar32;
      ppppppfVar18 = *param_4;
      if (pppppppfStack_108 < pppppppfStack_100) {
        FUN_1094d8370(pppppppfStack_108,ppppppfVar18 + (long)iVar24 * 0x10);
        pppppppfVar27 = pppppppfVar27 + 0x10;
      }
      else {
        lVar12 = (long)pppppppfStack_108 - (long)pppppppfStack_110;
        uVar36 = (lVar12 >> 7) + 1;
        if (uVar36 >> 0x39 != 0) {
          FUN_1094d7860();
          goto LAB_1094fd260;
        }
        uVar33 = (long)pppppppfStack_100 - (long)pppppppfStack_110 >> 6;
        if (uVar33 <= uVar36) {
          uVar33 = uVar36;
        }
        if (0x7fffffffffffff7f < (ulong)((long)pppppppfStack_100 - (long)pppppppfStack_110)) {
          uVar33 = 0x1ffffffffffffff;
        }
        pppppppfStack_88 = (float *******)&pppppppfStack_110;
        if (uVar33 == 0) {
          pppppppfVar27 = (float *******)0x0;
        }
        else {
          pppppppfVar27 = (float *******)&pppppppfStack_110;
          FUN_1094d7874();
        }
        lVar12 = (long)pppppppfVar27 + lVar12;
        pppppppfStack_90 = pppppppfVar27 + uVar33 * 0x10;
        pppppppfStack_a8 = pppppppfVar27;
        pppppppfStack_a0 = (float *******)lVar12;
        pppppppfStack_98 = (float *******)lVar12;
        FUN_1094d8370(lVar12,ppppppfVar18 + (long)iVar24 * 0x10);
        pppppppfStack_98 = (float *******)(lVar12 + 0x80);
        pppppppfVar7 = (float *******)((long)pppppppfStack_110 + (lVar12 - (long)pppppppfStack_108))
        ;
        FUN_1094d78a8(&pppppppfStack_110,pppppppfStack_110,pppppppfStack_108,pppppppfVar7);
        pppppppfVar27 = pppppppfStack_98;
        pppppppfVar29 = pppppppfStack_100;
        pppppppfStack_100 = pppppppfStack_90;
        pppppppfStack_108 = pppppppfStack_98;
        pppppppfStack_98 = pppppppfStack_110;
        pppppppfStack_90 = pppppppfVar29;
        pppppppfStack_a8 = pppppppfStack_110;
        pppppppfStack_a0 = pppppppfStack_110;
        pppppppfStack_110 = pppppppfVar7;
        func_0x0001094d80cc(&pppppppfStack_a8);
      }
      piVar32 = piVar32 + 1;
      pppppppfStack_108 = pppppppfVar27;
    } while (piVar32 != piVar4);
  }
  if (&pppppppfStack_110 != (float ********)param_4) {
    FUN_1094d8118(param_4,pppppppfStack_110,pppppppfStack_108,
                  (long)pppppppfStack_108 - (long)pppppppfStack_110 >> 7);
  }
  pppppppfStack_a8 = (float *******)&pppppppfStack_110;
  FUN_1094d8bdc(&pppppppfStack_a8);
  if (piStack_f8 != (int *)0x0) {
    piStack_f0 = piStack_f8;
    __ZdlPv();
  }
  func_0x0001094fd330(ppppppuStack_d8);
  if (lStack_c8 != 0) {
    lStack_c0 = lStack_c8;
    __ZdlPv();
  }
  return 1;
LAB_1094fcc24:
  if (pppppppfVar25 == pppppppfVar8) goto LAB_1094fc944;
  fVar37 = *(float *)pppppppfVar25;
  if (fVar37 < fVar34) goto LAB_1094fcc64;
  pppppppfVar25 = pppppppfVar25 + 1;
  goto LAB_1094fcc24;
LAB_1094fcc64:
  *(float *)pppppppfVar25 = *(float *)pppppppfVar8;
  *(float *)(pppppppfVar22 + -1) = fVar37;
  uVar26 = *(undefined4 *)((long)pppppppfVar25 + 4);
  *(undefined4 *)((long)pppppppfVar25 + 4) = *(undefined4 *)((long)pppppppfVar22 - 4);
  *(undefined4 *)((long)pppppppfVar22 - 4) = uVar26;
  pppppppfVar25 = pppppppfVar25 + 1;
LAB_1094fcc80:
  if (pppppppfVar25 == pppppppfVar8) goto LAB_1094fc944;
  while( true ) {
    do {
      pppppppfVar21 = pppppppfVar25;
      pppppppfVar25 = pppppppfVar21 + 1;
      fVar34 = *(float *)pppppppfVar21;
      uVar36 = (ulong)(uint)fVar34;
    } while (*(float *)pppppppfVar31 <= fVar34);
    do {
      pppppppfVar23 = pppppppfVar8;
      pppppppfVar8 = pppppppfVar23 + -1;
    } while (*(float *)pppppppfVar8 < *(float *)pppppppfVar31);
    if (pppppppfVar8 <= pppppppfVar21) break;
    *(float *)pppppppfVar21 = *(float *)pppppppfVar8;
    *(float *)pppppppfVar8 = fVar34;
    uVar26 = *(undefined4 *)((long)pppppppfVar21 + 4);
    *(undefined4 *)((long)pppppppfVar21 + 4) = *(undefined4 *)((long)pppppppfVar23 - 4);
    *(undefined4 *)((long)pppppppfVar23 - 4) = uVar26;
  }
  pppppppfVar23 = pppppppfVar22;
  if (pppppppfVar29 < pppppppfVar21) goto LAB_1094fc944;
LAB_1094fccd8:
  pppppppfVar31 = pppppppfVar21;
  pppppppfVar22 = pppppppfVar23;
  if (pppppppfVar23 == pppppppfVar29) goto LAB_1094fc944;
  goto LAB_1094fc9e8;
}



/* Entry: 1094fd330; end: 1094fd3d7;  */

void FUN_1094fd330(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1094fd330(*param_1);
    FUN_1094fd330(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1094fd3d8; end: 1094fd5bb;  */

void FUN_1094fd3d8(float param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar1 = param_2 + 1;
  plVar8 = param_3;
  if ((plVar1 == param_3) || (*(float *)((long)param_3 + 0x1c) < param_1)) {
    plVar4 = (long *)*param_3;
    plVar5 = param_3;
    if ((long *)*param_2 != param_3) {
      plVar7 = param_3;
      plVar6 = plVar4;
      if (plVar4 == (long *)0x0) {
        do {
          plVar5 = (long *)plVar7[2];
          bVar2 = (long *)*plVar5 == plVar7;
          plVar7 = plVar5;
        } while (bVar2);
      }
      else {
        do {
          plVar5 = plVar6;
          plVar6 = (long *)plVar5[1];
        } while ((long *)plVar5[1] != (long *)0x0);
      }
      if (*(float *)((long)plVar5 + 0x1c) <= param_1) {
        plVar5 = (long *)*plVar1;
        plVar8 = plVar1;
        while (param_3 = plVar8, plVar5 != (long *)0x0) {
          while (plVar8 = plVar5, param_1 <= *(float *)((long)plVar8 + 0x1c)) {
            if (*(float *)((long)plVar8 + 0x1c) <= param_1) {
              return;
            }
            plVar5 = (long *)plVar8[1];
            if ((long *)plVar8[1] == (long *)0x0) goto LAB_1094fd4ec;
          }
          plVar5 = (long *)*plVar8;
        }
        goto LAB_1094fd564;
      }
    }
    if (plVar4 != (long *)0x0) {
      param_3 = plVar5 + 1;
      plVar8 = plVar5;
    }
    if (*param_3 != 0) {
      return;
    }
  }
  else {
    if (*(float *)((long)param_3 + 0x1c) <= param_1) {
      return;
    }
    plVar4 = (long *)param_3[1];
    plVar5 = param_3;
    if (plVar4 == (long *)0x0) {
      do {
        plVar6 = (long *)plVar5[2];
        bVar2 = (long *)*plVar6 != plVar5;
        plVar5 = plVar6;
        plVar7 = param_3 + 1;
      } while (bVar2);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
        plVar8 = plVar6;
        plVar7 = plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    param_3 = plVar7;
    if ((plVar6 != plVar1) && (param_1 <= *(float *)((long)plVar6 + 0x1c))) {
      plVar5 = (long *)*plVar1;
      plVar8 = plVar1;
      while (param_3 = plVar8, plVar5 != (long *)0x0) {
        while (plVar8 = plVar5, param_1 <= *(float *)((long)plVar8 + 0x1c)) {
          if (*(float *)((long)plVar8 + 0x1c) <= param_1) {
            return;
          }
          plVar5 = (long *)plVar8[1];
          if ((long *)plVar8[1] == (long *)0x0) goto LAB_1094fd4ec;
        }
        plVar5 = (long *)*plVar8;
      }
    }
  }
LAB_1094fd564:
  puVar3 = (undefined8 *)0x28;
  __Znwm();
  *(undefined8 *)((long)puVar3 + 0x1c) = param_4;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = plVar8;
  *param_3 = (long)puVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    puVar3 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_2[1],puVar3);
  param_2[2] = param_2[2] + 1;
  return;
LAB_1094fd4ec:
  param_3 = plVar8 + 1;
  goto LAB_1094fd564;
}



/* Entry: 1094fd5bc; end: 1094fd687;  */

undefined8 * FUN_1094fd5bc(double param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *extraout_x8;
  int iVar8;
  long *plVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_89;
  long *plStack_88;
  
  uVar7 = *(ulong *)(param_2 + 0x18);
  if (uVar7 == *(ulong *)(param_3 + 0x18)) {
    if (uVar7 == 0) {
      puVar4 = (undefined8 *)0x1;
    }
    else {
      plVar9 = *(long **)(param_2 + 0x10);
      if (plVar9 == (long *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = 0;
        do {
          plVar6 = plVar9 + 2;
          lVar3 = param_3;
          FUN_1094e1944();
          if (lVar3 == 0) {
            puVar5 = &UNK_10f571152;
            FUN_109262df8(&UNK_10f571152);
            extraout_x8[1] = 0;
            *extraout_x8 = 0;
            extraout_x8[3] = 0;
            extraout_x8[2] = 0;
            *(undefined4 *)(extraout_x8 + 4) = 0x3f800000;
            puVar4 = extraout_x8;
            FUN_1094dfd00(extraout_x8,(long)(float)(ulong)plVar6[3]);
            for (plVar9 = (long *)plVar6[2]; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
              FUN_1094cf978(&uStack_98,puVar5,plVar9 + 5);
              uVar2 = uStack_90;
              uVar1 = uStack_98;
              plStack_88 = plVar9 + 2;
              puVar4 = extraout_x8;
              FUN_1094edafc(extraout_x8,plStack_88,&UNK_10dd5b8f9,&plStack_88,&uStack_89);
              puVar4[5] = uVar1;
              *(undefined4 *)(puVar4 + 6) = uVar2;
            }
            return puVar4;
          }
          dVar10 = (double)(*(float *)(lVar3 + 0x28) - *(float *)(plVar9 + 5));
          dVar11 = (double)(*(float *)(lVar3 + 0x2c) - *(float *)((long)plVar9 + 0x2c));
          if (SQRT(dVar11 * dVar11 + dVar10 * dVar10) < param_1) {
            iVar8 = iVar8 + 1;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
        uVar7 = *(ulong *)(param_2 + 0x18);
      }
      puVar4 = (undefined8 *)(ulong)((int)(uVar7 >> 1) < iVar8);
    }
  }
  else {
    puVar4 = (undefined8 *)0x0;
  }
  return puVar4;
}



/* Entry: 1094fd688; end: 1094fd753;  */

void FUN_1094fd688(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_49;
  long *plStack_48;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_1094dfd00(param_1,(long)(float)*(ulong *)(param_3 + 0x18));
  for (plVar4 = *(long **)(param_3 + 0x10); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    FUN_1094cf978(&uStack_58,param_2,plVar4 + 5);
    uVar2 = uStack_50;
    uVar1 = uStack_58;
    plStack_48 = plVar4 + 2;
    puVar3 = param_1;
    FUN_1094edafc(param_1,plStack_48,&UNK_10dd5b8f9,&plStack_48,&uStack_49);
    puVar3[5] = uVar1;
    *(undefined4 *)(puVar3 + 6) = uVar2;
  }
  return;
}



/* Entry: 1094fd754; end: 1094fd83b;  */

void FUN_1094fd754(int *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  do {
    iVar4 = iRam0000000113829ec8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x113829ec8,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      iRam0000000113829ec8 = iRam0000000113829ec8 + 1;
    }
  } while (cVar2 != '\0');
  *param_1 = iVar4;
  param_1[1] = 0x3f000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = -0x40800000;
  param_1[0xe] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0x3f800000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0x3f800000;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x36] = 0x3f800000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0x3f800000;
  param_1[0x42] = 0x42ff0000;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(int **)(param_1 + 0x52) = param_1 + 0x44;
  *(int **)(param_1 + 0x54) = param_1 + 0x56;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0x42ff0000;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  piVar1 = param_1 + 0x6e;
  *(int **)(param_1 + 0x6a) = param_1 + 0x5c;
  *(int **)(param_1 + 0x6c) = piVar1;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  piVar1[0] = 0;
  piVar1[1] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x79] = 0x3f800000;
  param_1[0x7a] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = 0x3f800000;
  param_1[0x90] = 0;
  return;
}



/* Entry: 1094fd83c; end: 1094fd8eb;  */

void FUN_1094fd83c(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 8,param_2 + 2);
  if ((undefined8 *)(param_1 + 0xb8) != param_2 + 7) {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xb);
    FUN_1094d8514((undefined8 *)(param_1 + 0xb8),param_2[9],0);
  }
  uVar2 = *param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  if ((*(byte *)(param_1 + 0x214) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x20c) = 0;
    *(undefined8 *)(param_1 + 500) = 0;
    *(undefined8 *)(param_1 + 0x1ec) = 0;
    *(undefined8 *)(param_1 + 0x204) = 0;
    *(undefined8 *)(param_1 + 0x1fc) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0x3f2666663eb33333;
    *(undefined1 *)(param_1 + 0x209) = 1;
    *(undefined4 *)(param_1 + 0x20c) = 0x3f000000;
    *(undefined1 *)(param_1 + 0x214) = 1;
  }
  uVar1 = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x1fc) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x1f8) = uVar1;
  return;
}



/* Entry: 1094fd8ec; end: 1094fd9f3;  */

void FUN_1094fd8ec(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *(undefined1 *)(param_1 + 6) = 0;
  puVar3 = param_1 + 7;
  param_1[8] = 0;
  *puVar3 = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x240);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 2,param_2 + 8);
  if (puVar3 != (undefined8 *)(param_2 + 0xb8)) {
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xd8);
    FUN_1094d8514(puVar3,*(undefined8 *)(param_2 + 200),0);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar5;
  if (*(char *)(param_2 + 0x214) != '\x01') {
    uVar1 = 0;
    uVar4 = 0;
    goto LAB_1094fd9c8;
  }
  if ((*(byte *)(param_2 + 500) & 1) == 0) {
    if (*(char *)(param_2 + 0x1fc) == '\x01') {
      lVar2 = 0xc;
      goto LAB_1094fd9b4;
    }
    uVar4 = 0x3f000000;
  }
  else {
    lVar2 = 4;
LAB_1094fd9b4:
    uVar4 = *(undefined4 *)(param_2 + 0x1ec + lVar2);
  }
  uVar1 = 1;
LAB_1094fd9c8:
  *(undefined4 *)((long)param_1 + 0x2c) = uVar4;
  *(undefined1 *)(param_1 + 6) = uVar1;
  return;
}



/* Entry: 1094fd9f4; end: 1094fdd27;  */

void FUN_1094fd9f4(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)((long)param_2 + 0x17c);
  if (*(char *)((long)param_2 + 100) == '\x01') {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0xc);
  }
  uVar10 = *param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  if (*(char *)(param_2 + 0x2e) == '\x01') {
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)((long)param_2 + 0x16c);
  }
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    uVar10 = param_2[0x2b];
    *(undefined8 *)(param_1 + 0x1e0) = param_2[0x2c];
    *(undefined8 *)(param_1 + 0x1d8) = uVar10;
  }
  if ((undefined8 *)(param_1 + 0x40) != param_2 + 2) {
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 6);
    FUN_1094e2010((undefined8 *)(param_1 + 0x40),param_2[4],0);
  }
  if ((undefined8 *)(param_1 + 0xb8) != param_2 + 7) {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xb);
    FUN_1094d8514((undefined8 *)(param_1 + 0xb8),param_2[9],0);
  }
  puVar7 = param_2 + 0xd;
  puVar9 = (undefined8 *)(param_1 + 0x108);
  if (puVar9 != puVar7) {
    if (param_2[0x14] != 0) {
      piVar1 = (int *)(param_2[0x14] + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (*(long *)(param_1 + 0x140) != 0) {
      piVar1 = (int *)(*(long *)(param_1 + 0x140) + 0x14);
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
        func_0x000109a848d4(puVar9);
      }
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (*(int *)(param_1 + 0x10c) < 1) {
      *(undefined4 *)puVar9 = *(undefined4 *)puVar7;
LAB_1094fdb54:
      if (2 < *(int *)((long)param_2 + 0x6c)) goto LAB_1094fdb88;
      *(int *)(param_1 + 0x10c) = *(int *)((long)param_2 + 0x6c);
      *(undefined8 *)(param_1 + 0x110) = param_2[0xe];
      puVar7 = (undefined8 *)param_2[0x16];
      puVar9 = *(undefined8 **)(param_1 + 0x150);
      *puVar9 = *puVar7;
      puVar9[1] = puVar7[1];
    }
    else {
      lVar6 = 0;
      lVar8 = *(long *)(param_1 + 0x148);
      do {
        *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0x10c));
      *(undefined4 *)puVar9 = *(undefined4 *)puVar7;
      if (*(int *)(param_1 + 0x10c) < 3) goto LAB_1094fdb54;
LAB_1094fdb88:
      func_0x000109a84868(puVar9,puVar7);
    }
    uVar10 = param_2[0xf];
    *(undefined8 *)(param_1 + 0x120) = param_2[0x10];
    *(undefined8 *)(param_1 + 0x118) = uVar10;
    uVar10 = param_2[0x11];
    *(undefined8 *)(param_1 + 0x130) = param_2[0x12];
    *(undefined8 *)(param_1 + 0x128) = uVar10;
    uVar10 = param_2[0x13];
    *(undefined8 *)(param_1 + 0x140) = param_2[0x14];
    *(undefined8 *)(param_1 + 0x138) = uVar10;
  }
  puVar7 = param_2 + 0x19;
  puVar9 = (undefined8 *)(param_1 + 0x168);
  if (puVar9 == puVar7) goto LAB_1094fdca8;
  if (param_2[0x20] != 0) {
    piVar1 = (int *)(param_2[0x20] + 0x14);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x1a0) + 0x14);
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
      func_0x000109a848d4(puVar9);
    }
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x16c) < 1) {
    *(undefined4 *)puVar9 = *(undefined4 *)puVar7;
LAB_1094fdc50:
    if (2 < *(int *)((long)param_2 + 0xcc)) goto LAB_1094fdc84;
    *(int *)(param_1 + 0x16c) = *(int *)((long)param_2 + 0xcc);
    *(undefined8 *)(param_1 + 0x170) = param_2[0x1a];
    puVar7 = (undefined8 *)param_2[0x22];
    puVar9 = *(undefined8 **)(param_1 + 0x1b0);
    *puVar9 = *puVar7;
    puVar9[1] = puVar7[1];
  }
  else {
    lVar6 = 0;
    lVar8 = *(long *)(param_1 + 0x1a8);
    do {
      *(undefined4 *)(lVar8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x16c));
    *(undefined4 *)puVar9 = *(undefined4 *)puVar7;
    if (*(int *)(param_1 + 0x16c) < 3) goto LAB_1094fdc50;
LAB_1094fdc84:
    func_0x000109a84868(puVar9,puVar7);
  }
  uVar10 = param_2[0x1b];
  *(undefined8 *)(param_1 + 0x180) = param_2[0x1c];
  *(undefined8 *)(param_1 + 0x178) = uVar10;
  uVar10 = param_2[0x1d];
  *(undefined8 *)(param_1 + 400) = param_2[0x1e];
  *(undefined8 *)(param_1 + 0x188) = uVar10;
  uVar10 = param_2[0x1f];
  *(undefined8 *)(param_1 + 0x1a0) = param_2[0x20];
  *(undefined8 *)(param_1 + 0x198) = uVar10;
LAB_1094fdca8:
  if ((undefined8 *)(param_1 + 0xe0) != param_2 + 0x26) {
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x2a);
    FUN_1094de568((undefined8 *)(param_1 + 0xe0),param_2[0x28],0);
  }
  if ((*(byte *)(param_1 + 0x214) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x20c) = 0;
    *(undefined8 *)(param_1 + 500) = 0;
    *(undefined8 *)(param_1 + 0x1ec) = 0;
    *(undefined8 *)(param_1 + 0x204) = 0;
    *(undefined8 *)(param_1 + 0x1fc) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0x3f2666663eb33333;
    *(undefined1 *)(param_1 + 0x209) = 1;
    *(undefined4 *)(param_1 + 0x20c) = 0x3f000000;
    *(undefined1 *)(param_1 + 0x214) = 1;
  }
  uVar3 = *(undefined4 *)(param_2 + 0x25);
  *(undefined1 *)(param_1 + 500) = *(undefined1 *)((long)param_2 + 300);
  *(undefined4 *)(param_1 + 0x1f0) = uVar3;
  return;
}



/* Entry: 1094fdd28; end: 1094fdd6b;  */

undefined8 FUN_1094fdd28(undefined8 param_1)

{
  FUN_1094fd754();
  FUN_1094fd83c();
  return param_1;
}



/* Entry: 1094fdd6c; end: 1094fdd83;  */

bool FUN_1094fdd6c(long param_1,long param_2)

{
  return *(float *)(param_2 + 8) * *(float *)(param_2 + 0xc) < *(float *)(param_1 + 8);
}



/* Entry: 1094fdd84; end: 1094fde07;  */

bool FUN_1094fdd84(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  uVar1 = *param_2;
  func_0x000107c31940(auStack_38,&UNK_10f571173);
  func_0x0001094a6db0(uVar1,auStack_38,(float *)(param_1 + 8));
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return 0.0 < *(float *)(param_1 + 8);
}



/* Entry: 1094fde08; end: 1094fde23;  */

void FUN_1094fde08(void)

{
  return;
}



/* Entry: 1094fde24; end: 1094fdea7;  */

bool FUN_1094fde24(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  uVar1 = *param_2;
  func_0x000107c31940(auStack_38,&UNK_10f41ce05);
  func_0x0001094a6db0(uVar1,auStack_38,(float *)(param_1 + 8));
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return 0.0 < *(float *)(param_1 + 8);
}



/* Entry: 1094fdea8; end: 1094fdeaf;  */

void FUN_1094fdea8(void)

{
  return;
}



/* Entry: 1094fdeb0; end: 1094fe0db;  */

undefined8 * FUN_1094fdeb0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined ***apppuStack_60 [2];
  char cStack_49;
  undefined **ppuStack_48;
  code *pcStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  func_0x000107c31940(apppuStack_60,&UNK_10f57117c);
  puVar2 = param_1;
  FUN_1094fe264(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af9530;
  pcStack_40 = (code *)0x1094fe22c;
  pppuStack_30 = &ppuStack_48;
  FUN_1094fe758(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar4 = 0x20;
LAB_1094fdf4c:
    (**(code **)((long)*pppuStack_30 + lVar4))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar4 = 0x28;
    goto LAB_1094fdf4c;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f571173);
  puVar2 = param_1;
  FUN_1094fe264(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af95e0;
  pcStack_40 = FUN_1094fe8c4;
  pppuStack_30 = &ppuStack_48;
  FUN_1094fe758(&ppuStack_48,puVar2 + 5);
  if (pppuStack_30 == &ppuStack_48) {
    lVar4 = 0x20;
LAB_1094fdfd0:
    (**(code **)((long)*pppuStack_30 + lVar4))();
  }
  else if (pppuStack_30 != (undefined ***)0x0) {
    lVar4 = 0x28;
    goto LAB_1094fdfd0;
  }
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  func_0x000107c31940(apppuStack_60,&UNK_10f41ce05);
  puVar2 = param_1;
  FUN_1094fe264(param_1,apppuStack_60,apppuStack_60);
  ppuStack_48 = &PTR_FUN_110af9680;
  pcStack_40 = FUN_1094fe9a0;
  pppuStack_30 = &ppuStack_48;
  FUN_1094fe758(&ppuStack_48,puVar2 + 5);
  pppuVar3 = pppuStack_30;
  if (pppuStack_30 == &ppuStack_48) {
    lVar4 = 0x20;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_1094fe060;
    lVar4 = 0x28;
  }
  (**(code **)((long)*pppuStack_30 + lVar4))();
LAB_1094fe060:
  if (cStack_49 < '\0') {
    pppuVar3 = apppuStack_60[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  if (cStack_49 < '\0') {
    __ZdlPv(apppuStack_60[0]);
  }
  FUN_1094fe170(param_1);
  __Unwind_Resume(pppuVar3);
  if ((bRam0000000113829ef8 & 1) == 0) {
    iVar1 = 0x13829ef8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1094fdeb0(0x113829ed0);
      ___cxa_atexit(FUN_1094fe16c,0x113829ed0,0x100000000);
      ___cxa_guard_release(0x113829ef8);
    }
  }
  return (undefined8 *)0x113829ed0;
}



/* Entry: 1094fe0dc; end: 1094fe16b;  */

undefined8 FUN_1094fe0dc(void)

{
  int iVar1;
  
  if ((bRam0000000113829ef8 & 1) == 0) {
    iVar1 = 0x13829ef8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1094fdeb0(0x113829ed0);
      ___cxa_atexit(FUN_1094fe16c,0x113829ed0,0x100000000);
      ___cxa_guard_release(0x113829ef8);
    }
  }
  return 0x113829ed0;
}



/* Entry: 1094fe16c; end: 1094fe16f;  */

long * FUN_1094fe16c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1094fe1cc(plVar1 + 2);
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



/* Entry: 1094fe170; end: 1094fe1cb;  */

long * FUN_1094fe170(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1094fe1cc(plVar1 + 2);
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



/* Entry: 1094fe1cc; end: 1094fe263;  */

void FUN_1094fe1cc(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 3) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_1094fe208;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1094fe208:
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 1094fe264; end: 1094fe667;  */

long * FUN_1094fe264(long *param_1,undefined8 param_2,long *param_3)

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
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
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
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[8] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_1094fe578;
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
LAB_1094fe400:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1094fe650);
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
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
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
      plVar10 = (long *)*plVar7;
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
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_1094fe400;
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
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_1094fe578:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 1094fe668; end: 1094fe6af;  */

void FUN_1094fe668(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_1094fe1cc(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}


