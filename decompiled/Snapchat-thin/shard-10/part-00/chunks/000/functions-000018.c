/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107357bfc; end: 107357c2f;  */

long FUN_107357bfc(void)

{
  long unaff_x19;
  
  func_0x000107360884();
  FUN_10735d588();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x28);
  func_0x00010726b264(unaff_x19 + 0x18);
  func_0x00010735fffc();
  func_0x00010735a274();
  return unaff_x19;
}



/* Entry: 107357c30; end: 107357d23;  */

undefined1 * FUN_107357c30(undefined1 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_a0;
  puVar3 = auStack_a0;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x120);
  if (lVar4 != 0) {
    FUN_10735d84c(auStack_a0,param_1 + 0x1c0);
    puVar1 = auStack_78;
    FUN_10735cc04(puVar1,param_2);
    puStack_40 = (undefined1 *)0x0;
    func_0x000107360a88();
    func_0x0001073607b8();
    func_0x00010735df30();
    FUN_10735cc04();
    puStack_40 = puVar1;
    func_0x000107292e94(lVar4,auStack_58);
    func_0x000107283e00(auStack_58);
    FUN_107357d24();
    param_1 = puVar2;
  }
  func_0x00010735fd20(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107283e00(auStack_58);
    FUN_107357d24();
    func_0x00010736001c();
    func_0x00010726e4c8(puVar3 + 0x28);
    plVar5 = *(long **)(puVar3 + 0x10);
    puVar2 = puVar3;
    while (plVar5 != (long *)0x0) {
      puVar2 = (undefined1 *)(plVar5 + 3);
      plVar5 = (long *)*plVar5;
      FUN_10731d79c();
      func_0x000107360134();
    }
    func_0x00010736058c();
    if (puVar2 != (undefined1 *)0x0) {
      __ZdlPv();
    }
    return puVar3;
  }
  return param_1;
}



/* Entry: 107357d24; end: 107357d4b;  */

long FUN_107357d24(long param_1)

{
  long lVar1;
  long *plVar2;
  
  func_0x00010726e4c8(param_1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x10);
  lVar1 = param_1;
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    FUN_10731d79c();
    func_0x000107360134();
  }
  func_0x00010736058c();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107357d4c; end: 107357fcf;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x000107357e98 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_107357d4c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong extraout_x8;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x26;
  undefined8 unaff_x30;
  
  func_0x000107360cb0();
  uVar7 = param_2 + 8;
  FUN_107357fd0();
  uVar5 = (int)(*(byte *)(param_4 + 0x70) - 1) < 0;
  uVar6 = *(byte *)(param_4 + 0x70) == 1;
  if ((bool)uVar6) {
    func_0x0001072ab574();
    if ((*(byte *)(param_4 + 0x70) & 1) == 0) {
      func_0x000104bdc2c8();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x107357fa4);
      (*pcVar4)();
    }
    uVar10 = (uint)uVar7;
    uVar14 = uVar7 & 0xffffffff;
    uVar13 = *(ulong *)(param_2 + 0x1c8);
    if (uVar13 != 0) {
      func_0x000107360b34();
      uVar12 = (uint)uVar13;
      if ((bool)uVar6) {
        unaff_x26 = uVar12 - 1 & uVar14;
      }
      else {
        uVar5 = (long)(uVar13 - uVar14) < 0;
        unaff_x26 = uVar14;
        if (uVar13 <= uVar14) {
          uVar2 = 0;
          if (uVar12 != 0) {
            uVar2 = uVar10 / uVar12;
          }
          unaff_x26 = (ulong)(uVar10 - uVar2 * uVar12);
        }
      }
      plVar11 = *(long **)(*(long *)(param_2 + 0x1c0) + unaff_x26 * 8);
      if (plVar11 != (long *)0x0) {
        do {
          while( true ) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_107357e2c;
            uVar9 = plVar11[1];
            if (uVar9 != uVar14) break;
            uVar5 = (int)(*(uint *)(plVar11 + 2) - uVar10) < 0;
            if (*(uint *)(plVar11 + 2) == uVar10) goto LAB_107357f64;
          }
          if ((uVar13 & extraout_x8) == 0) {
            uVar9 = uVar9 & extraout_x8;
          }
          else if (uVar13 <= uVar9) {
            uVar3 = 0;
            if (uVar13 != 0) {
              uVar3 = uVar9 / uVar13;
            }
            uVar9 = uVar9 - uVar3 * uVar13;
          }
          uVar5 = (long)(uVar9 - unaff_x26) < 0;
        } while (uVar9 == unaff_x26);
      }
    }
LAB_107357e2c:
    plVar11 = (long *)0x88;
    __Znwm();
    plVar1 = (long *)(param_2 + 0x1d0);
    *plVar11 = 0;
    plVar11[1] = uVar14;
    *(uint *)(plVar11 + 2) = uVar10;
    plVar11[4] = 0;
    plVar11[3] = 0;
    plVar11[6] = 0;
    plVar11[5] = 0;
    plVar11[8] = 0;
    plVar11[7] = 0;
    plVar11[10] = 0;
    plVar11[9] = 0;
    plVar11[0xc] = 0;
    plVar11[0xb] = 0;
    plVar11[0xe] = 0;
    plVar11[0xd] = 0;
    plVar11[0x10] = 0;
    plVar11[0xf] = 0;
    func_0x000104c2f64c(plVar11 + 3);
    func_0x000104c2f64c(plVar11 + 10);
    func_0x000107360378();
    func_0x000107360148(*(undefined8 *)(param_2 + 0x1d8));
    if ((uVar13 == 0) ||
       (func_0x00010736013c(param_1,*(undefined4 *)(param_2 + 0x1e0),(float)uVar13), (bool)uVar5)) {
      uVar5 = uVar13 == 3;
      func_0x00010735fd34(uVar13 << 1);
      FUN_10735da58(param_2 + 0x1c0);
      uVar13 = *(ulong *)(param_2 + 0x1c8);
      func_0x000107360b34();
      if ((bool)uVar5) {
        unaff_x26 = (int)uVar13 - 1 & uVar14;
      }
      else {
        unaff_x26 = uVar14;
        if (uVar13 <= uVar14) {
          uVar9 = 0;
          if (uVar13 != 0) {
            uVar9 = uVar14 / uVar13;
          }
          unaff_x26 = uVar14 - uVar9 * uVar13;
        }
      }
    }
    lVar8 = *(long *)(param_2 + 0x1c0);
    if (*(long *)(lVar8 + unaff_x26 * 8) == 0) {
      *plVar11 = *plVar1;
      *plVar1 = (long)plVar11;
      *(long **)(lVar8 + unaff_x26 * 8) = plVar1;
      if (*plVar11 != 0) {
        uVar14 = *(ulong *)(*plVar11 + 8);
        if ((uVar13 & uVar13 - 1) == 0) {
          uVar14 = uVar14 & uVar13 - 1;
        }
        else if (uVar13 <= uVar14) {
          uVar9 = 0;
          if (uVar13 != 0) {
            uVar9 = uVar14 / uVar13;
          }
          uVar14 = uVar14 - uVar9 * uVar13;
        }
        *(long **)(lVar8 + uVar14 * 8) = plVar11;
      }
    }
    else {
      func_0x0001073606e4();
    }
    *(long *)(param_2 + 0x1d8) = *(long *)(param_2 + 0x1d8) + 1;
    func_0x000107360a58();
LAB_107357f64:
    func_0x000107262f3c(plVar11 + 3,param_4);
    func_0x000107262f3c(plVar11 + 10,param_4 + 0x38);
    func_0x00010736097c();
  }
  func_0x000107360c80(uVar7,unaff_x30);
  return;
}



/* Entry: 107357fd0; end: 10735834f;  */

ulong FUN_107357fd0(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  ulong extraout_x8;
  long lVar7;
  long extraout_x8_00;
  ulong uVar8;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong unaff_x23;
  uint uVar16;
  ulong uVar17;
  
  plVar5 = (long *)(param_1 + 8);
  func_0x000107360160();
  func_0x000107279a5c();
  uVar1 = *(uint *)(param_1 + 0xd8);
  uVar14 = (ulong)uVar1;
  *(uint *)(param_1 + 0xd8) = uVar1 + 1;
  uVar17 = *(ulong *)(param_1 + 0xb8);
  if (uVar17 != 0) {
    uVar6 = uVar17 - 1;
    uVar16 = (uint)uVar17;
    if ((uVar17 & uVar6) == 0) {
      unaff_x23 = (ulong)(uVar16 - 1 & uVar1);
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar17 - uVar14) < 0;
      unaff_x23 = uVar14;
      if (uVar17 <= uVar14) {
        uVar2 = 0;
        if (uVar16 != 0) {
          uVar2 = uVar1 / uVar16;
        }
        unaff_x23 = (ulong)(uVar1 - uVar2 * uVar16);
      }
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0xb0) + unaff_x23 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_10735809c;
          uVar8 = plVar15[1];
          if (uVar8 != uVar14) break;
          in_NG = (int)(*(uint *)(plVar15 + 2) - uVar1) < 0;
          if (*(uint *)(plVar15 + 2) == uVar1) goto LAB_107358308;
        }
        if ((uVar17 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar17 <= uVar8) {
          uVar9 = 0;
          if (uVar17 != 0) {
            uVar9 = uVar8 / uVar17;
          }
          uVar8 = uVar8 - uVar9 * uVar17;
        }
        in_NG = (long)(uVar8 - unaff_x23) < 0;
      } while (uVar8 == unaff_x23);
    }
  }
LAB_10735809c:
  func_0x000107360490();
  plVar15 = (long *)(param_1 + 0xc0);
  *plVar5 = 0;
  plVar5[1] = uVar14;
  *(uint *)(plVar5 + 2) = uVar1;
  plVar5[6] = 0;
  func_0x000107360148(*(undefined8 *)(param_1 + 200));
  if ((uVar17 != 0) && (func_0x00010736013c(), !(bool)in_NG)) goto LAB_10735829c;
  bVar3 = 2 < uVar17;
  bVar4 = uVar17 == 3;
  func_0x00010735fd64(uVar17 << 1);
  uVar6 = extraout_x8;
  if (!bVar3 || bVar4) {
    uVar6 = extraout_x9;
  }
  if (uVar6 - 1 == 0) {
    uVar6 = 2;
  }
  else if ((uVar6 & uVar6 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar17 = *(ulong *)(param_1 + 0xb8);
  }
  if (uVar17 < uVar6) {
LAB_107358130:
    uVar17 = uVar6;
    FUN_10735e53c(uVar6);
    FUN_10735e524(param_1 + 0xb0,uVar17);
    uVar17 = 0;
    *(ulong *)(param_1 + 0xb8) = uVar6;
    lVar7 = *(long *)(param_1 + 0xb0);
    while (uVar6 != uVar17) {
      func_0x000107360234();
      lVar7 = extraout_x8_00;
      uVar17 = extraout_x9_00;
    }
    plVar10 = (long *)*plVar15;
    uVar17 = uVar6;
    if (plVar10 != (long *)0x0) {
      uVar12 = plVar10[1];
      uVar9 = uVar6 - 1;
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar12 / uVar6;
      }
      uVar13 = uVar12;
      if (uVar6 <= uVar12) {
        uVar13 = uVar12 - uVar8 * uVar6;
      }
      if ((uVar6 & uVar9) == 0) {
        uVar13 = uVar12 & uVar9;
      }
      *(long **)(lVar7 + uVar13 * 8) = plVar15;
      while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
        uVar8 = plVar10[1];
        if ((uVar6 & uVar9) == 0) {
          uVar8 = uVar8 & uVar9;
        }
        else if (uVar6 <= uVar8) {
          uVar12 = 0;
          if (uVar6 != 0) {
            uVar12 = uVar8 / uVar6;
          }
          uVar8 = uVar8 - uVar12 * uVar6;
        }
        if (uVar8 != uVar13) {
          if (*(long *)(lVar7 + uVar8 * 8) == 0) {
            *(long **)(lVar7 + uVar8 * 8) = plVar11;
            uVar13 = uVar8;
          }
          else {
            *plVar11 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar7 + uVar8 * 8);
            **(long **)(lVar7 + uVar8 * 8) = (long)plVar10;
            plVar10 = plVar11;
          }
        }
      }
    }
  }
  else if (uVar6 < uVar17) {
    uVar8 = (ulong)((float)*(ulong *)(param_1 + 200) / *(float *)(param_1 + 0xd0));
    if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010735fce0();
    }
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if (uVar6 < uVar17) {
      if (uVar6 != 0) goto LAB_107358130;
      FUN_10735e524(param_1 + 0xb0,0);
      *(undefined8 *)(param_1 + 0xb8) = 0;
      uVar17 = 0;
    }
    else {
      uVar17 = *(ulong *)(param_1 + 0xb8);
    }
  }
  if ((uVar17 & uVar17 - 1) == 0) {
    unaff_x23 = (ulong)((int)uVar17 - 1U & uVar1);
  }
  else {
    unaff_x23 = uVar14;
    if (uVar17 <= uVar14) {
      uVar6 = 0;
      if (uVar17 != 0) {
        uVar6 = uVar14 / uVar17;
      }
      unaff_x23 = uVar14 - uVar6 * uVar17;
    }
  }
LAB_10735829c:
  lVar7 = *(long *)(param_1 + 0xb0);
  if (*(long *)(lVar7 + unaff_x23 * 8) == 0) {
    *plVar5 = *plVar15;
    *plVar15 = (long)plVar5;
    *(long **)(lVar7 + unaff_x23 * 8) = plVar15;
    if (*plVar5 != 0) {
      uVar6 = *(ulong *)(*plVar5 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar6 = uVar6 & uVar17 - 1;
      }
      else if (uVar17 <= uVar6) {
        uVar8 = 0;
        if (uVar17 != 0) {
          uVar8 = uVar6 / uVar17;
        }
        uVar6 = uVar6 - uVar8 * uVar17;
      }
      *(long **)(lVar7 + uVar6 * 8) = plVar5;
    }
  }
  else {
    func_0x0001073606e4();
  }
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  func_0x000107360a50();
  plVar15 = plVar5;
LAB_107358308:
  FUN_10735e394(plVar15 + 3,param_2);
  func_0x000107360974();
  return uVar14;
}



/* Entry: 107358350; end: 1073586b3;  */

void FUN_107358350(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  func_0x0001073584b0(param_1 + 8);
  func_0x000107360160(param_1 + 0x180);
  func_0x0001072ab574();
  plVar2 = (long *)(param_1 + 0x1c0);
  func_0x00010735fc40(plVar2,param_2);
  if (plVar2 == (long *)0x0) goto LAB_1073584a4;
  uVar5 = *(ulong *)(param_1 + 0x1c8);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *(long *)(param_1 + 0x1c0);
  plVar1 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar1;
    plVar1 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar2);
  if (plVar6 == (long *)(param_1 + 0x1d0)) {
LAB_107358408:
    if (lVar3 == 0) {
LAB_10735843c:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_107358444;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar10 = uVar9 - uVar10 * uVar5;
      }
    }
    if (uVar10 != uVar4) goto LAB_10735843c;
LAB_10735844c:
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar4) {
      *(long **)(lVar8 + uVar9 * 8) = plVar6;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar10 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_107358408;
LAB_107358444:
    if (lVar3 != 0) {
      uVar9 = *(ulong *)(lVar3 + 8);
      goto LAB_10735844c;
    }
  }
  *plVar6 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x1d8) = *(long *)(param_1 + 0x1d8) + -1;
  func_0x000107360378();
  func_0x000107360a58();
LAB_1073584a4:
  func_0x00010736097c();
  return;
}



/* Entry: 1073586b4; end: 1073586bf;  */

void FUN_1073586b4(void)

{
  uint extraout_w8;
  
  func_0x00010735fe88();
  func_0x000107360444();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001073586e8();
  }
  return;
}



/* Entry: 1073586c0; end: 107358713;  */

void FUN_1073586c0(void)

{
  uint extraout_w8;
  
  func_0x000107360444();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001073586e8();
  }
  return;
}



/* Entry: 107358714; end: 10735871b;  */

void FUN_107358714(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    FUN_107358cf0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10735871c; end: 1073587d3;  */

void FUN_10735871c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    FUN_107358cf0();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073587d4; end: 1073587df;  */

void FUN_1073587d4(void)

{
  uint extraout_w8;
  
  func_0x00010735fe88();
  func_0x000107360444();
  if ((extraout_w8 & 1) == 0) {
    func_0x000107358808();
  }
  return;
}



/* Entry: 1073587e0; end: 107358833;  */

void FUN_1073587e0(void)

{
  uint extraout_w8;
  
  func_0x000107360444();
  if ((extraout_w8 & 1) == 0) {
    func_0x000107358808();
  }
  return;
}



/* Entry: 107358834; end: 10735883b;  */

void FUN_107358834(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    FUN_107359298();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10735883c; end: 1073588c3;  */

void FUN_10735883c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    FUN_107359298();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073588c4; end: 1073588eb;  */

void FUN_1073588c4(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 3; lVar3 != 0; lVar3 = lVar3 + -8) {
    *puVar1 = *param_3;
    puVar1 = puVar1 + 1;
  }
  *(undefined8 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 1073588ec; end: 107358943;  */

void FUN_1073588ec(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010736005c();
  func_0x00010735891c();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  func_0x0001073607e8();
  return;
}



/* Entry: 107358944; end: 107358967;  */

long FUN_107358944(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return lVar1;
}



/* Entry: 107358968; end: 10735899b;  */

void FUN_107358968(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = (long)(param_1 + 4);
    param_1 = (long *)*param_1;
    FUN_1073589cc(lVar1);
    func_0x0001073601a8();
  }
  return;
}



/* Entry: 10735899c; end: 1073589b3;  */

void FUN_10735899c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073589b4; end: 1073589cb;  */

void FUN_1073589b4(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010735fffc();
  func_0x0001073589f0();
  return;
}



/* Entry: 1073589cc; end: 107358a1b;  */

void FUN_1073589cc(void)

{
  func_0x00010735fffc();
  func_0x0001073589f0();
  return;
}



/* Entry: 107358a1c; end: 107358a23;  */

void FUN_107358a1c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107358a58();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107358a24; end: 107358a7b;  */

void FUN_107358a24(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107358a58();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107358a7c; end: 107358adb;  */

void FUN_107358a7c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x0001073601c8();
  lVar1 = *param_2;
  lVar2 = param_2[1];
  func_0x00010736086c();
  if (lVar2 != lVar1) {
    FUN_107358adc();
    func_0x0001073602a8();
    FUN_107358b10();
  }
  func_0x000107360088();
  FUN_107358b98();
  return;
}



/* Entry: 107358adc; end: 107358b0f;  */

void FUN_107358adc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  long lVar2;
  int extraout_w11;
  long *unaff_x19;
  undefined8 uVar3;
  
  if ((ulong)param_2 >> 0x3c != 0) {
    FUN_107358b50();
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar2 = param_2[1];
      uVar3 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar3;
      if (lVar2 != 0) {
        do {
          func_0x0001073606c4();
          puVar1 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      puVar1 = puVar1 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
    return;
  }
  func_0x000107360c00();
  FUN_107358b5c();
  *unaff_x19 = param_1;
  unaff_x19[1] = param_1;
  unaff_x19[2] = param_1 + (long)param_2 * 0x10;
  return;
}



/* Entry: 107358b10; end: 107358b4f;  */

void FUN_107358b10(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  long lVar2;
  int extraout_w11;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    lVar2 = param_2[1];
    uVar3 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x0001073606c4();
        puVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 107358b50; end: 107358b5b;  */

void FUN_107358b50(void)

{
  func_0x00010735fe88();
  FUN_107358b7c();
  return;
}



/* Entry: 107358b5c; end: 107358b7b;  */

void FUN_107358b5c(void)

{
  FUN_107358b7c();
  return;
}



/* Entry: 107358b7c; end: 107358b97;  */

void FUN_107358b7c(undefined8 param_1,ulong param_2)

{
  ulong extraout_x8;
  
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107360444();
  if ((extraout_x8 & 1) == 0) {
    func_0x0001073589f0();
  }
  return;
}



/* Entry: 107358b98; end: 107358bf3;  */

void FUN_107358b98(void)

{
  uint extraout_w8;
  
  func_0x000107360444();
  if ((extraout_w8 & 1) == 0) {
    func_0x0001073589f0();
  }
  return;
}



/* Entry: 107358bf4; end: 107358cef;  */

void FUN_107358bf4(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  long unaff_x20;
  
  func_0x00010736060c();
  if ((bool)in_ZR) {
    unaff_x19 = 2;
  }
  else {
    func_0x000107360624();
    if (!(bool)in_ZR) {
      func_0x0001073603a8();
      unaff_x19 = param_1;
    }
  }
  func_0x000107360640();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x00010735fd8c();
    if (((bool)in_CY) && (func_0x0001073603cc(), extraout_x8_01 == 0)) {
      func_0x00010735fce0();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107360068();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == 0) {
      func_0x0001073604c4();
      FUN_10735899c();
      *(undefined8 *)(unaff_x20 + 8) = 0;
      return;
    }
  }
  FUN_1073589b4(unaff_x19);
  func_0x0001073603d8();
  FUN_10735899c();
  func_0x00010735ff44();
  uVar3 = extraout_x9;
  while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
    func_0x000107360234();
    uVar3 = extraout_x9_00;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x00010735fdf0();
    func_0x00010735fddc();
    plVar4 = extraout_x9_01;
    while (*plVar4 != 0) {
      func_0x0001073603c0();
      lVar2 = extraout_x8;
      plVar4 = extraout_x12;
      uVar3 = extraout_x11;
      if ((bool)uVar1) {
        uVar5 = extraout_x13 & extraout_x10;
      }
      else {
        uVar5 = extraout_x13;
        if (unaff_x19 <= extraout_x13) {
          func_0x000107360420();
          lVar2 = extraout_x8_00;
          uVar3 = extraout_x11_00;
          plVar4 = extraout_x12_00;
          uVar5 = extraout_x13_00;
        }
      }
      uVar1 = uVar5 == uVar3;
      if (!(bool)uVar1) {
        if (*(long *)(lVar2 + uVar5 * 8) == 0) {
          func_0x000107360414();
          plVar4 = extraout_x12_01;
        }
        else {
          func_0x00010735fd00();
          plVar4 = extraout_x9_02;
        }
      }
    }
  }
  return;
}



/* Entry: 107358cf0; end: 107358d1b;  */

void FUN_107358cf0(long param_1)

{
  func_0x000107360c0c();
  FUN_107358968();
  func_0x00010736058c();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107358d1c; end: 107358d3f;  */

long FUN_107358d1c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
    *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
  }
  lVar1 = param_1[2];
  param_1[2] = 0;
  param_1[3] = 0;
  return lVar1;
}



/* Entry: 107358d40; end: 1073590a3;  */

void FUN_107358d40(long param_1,long param_2)

{
  byte bVar1;
  undefined1 in_NG;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  ulong extraout_x8;
  long extraout_x8_00;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong extraout_x8_01;
  ulong extraout_x9;
  ulong uVar10;
  ulong extraout_x9_00;
  undefined8 extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar11;
  long *unaff_x19;
  long *unaff_x20;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  
  func_0x000107360c98();
  func_0x0001009eba74();
  uVar5 = param_1 + 0x18;
  func_0x00010726364c(uVar5,param_2 + 0x10);
  unaff_x20[1] = uVar5;
  uVar13 = unaff_x19[1];
  uVar10 = uVar5;
  func_0x00010735fe38();
  if ((uVar13 != 0) && (func_0x00010736013c(), !(bool)in_NG)) goto LAB_107358f0c;
  func_0x00010735fe64();
  bVar2 = 2 < uVar13;
  bVar3 = uVar13 == 3;
  func_0x00010735fd64();
  uVar12 = extraout_x8;
  if (!bVar2 || bVar3) {
    uVar12 = extraout_x9;
  }
  if (uVar12 - 1 == 0) {
    uVar12 = 2;
  }
  else if ((uVar12 & uVar12 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar13 = unaff_x19[1];
    uVar10 = uVar12;
  }
  if (uVar13 < uVar12) {
LAB_107358dc8:
    FUN_1073590f0(uVar12);
    func_0x0001073607d0();
    FUN_1073590d8();
    uVar10 = 0;
    unaff_x19[1] = uVar12;
    while (bVar3 = uVar12 == uVar10, !bVar3) {
      func_0x000107360234();
      uVar10 = extraout_x9_00;
    }
    plVar14 = (long *)unaff_x19[2];
    if (plVar14 != (long *)0x0) {
      uVar10 = plVar14[1];
      func_0x000107360c4c();
      if (bVar3) {
        uVar10 = uVar10 & uVar13;
      }
      else if (uVar12 <= uVar10) {
        uVar17 = 0;
        if (uVar12 != 0) {
          uVar17 = uVar10 / uVar12;
        }
        uVar10 = uVar10 - uVar17 * uVar12;
      }
      *(undefined8 *)(extraout_x8_00 + uVar10 * 8) = extraout_x9_01;
      lVar9 = extraout_x8_00;
      while (plVar16 = plVar14, plVar14 = (long *)*plVar16, plVar14 != (long *)0x0) {
        uVar17 = plVar14[1];
        if ((uVar12 & uVar13) == 0) {
          uVar17 = uVar17 & uVar13;
        }
        else if (uVar12 <= uVar17) {
          uVar11 = 0;
          if (uVar12 != 0) {
            uVar11 = uVar17 / uVar12;
          }
          uVar17 = uVar17 - uVar11 * uVar12;
        }
        if (uVar17 != uVar10) {
          plVar8 = plVar14;
          if (*(long *)(lVar9 + uVar17 * 8) == 0) {
            *(long **)(lVar9 + uVar17 * 8) = plVar16;
            uVar10 = uVar17;
          }
          else {
            do {
              plVar7 = plVar8;
              plVar8 = (long *)0x0;
              if (*plVar7 == 0) break;
              plVar6 = plVar14 + 2;
              func_0x000104c32db4(plVar6,*plVar7 + 0x10);
              plVar8 = (long *)*plVar7;
            } while (((ulong)plVar6 & 1) != 0);
            *plVar16 = (long)plVar8;
            lVar9 = *unaff_x19;
            *plVar7 = **(long **)(lVar9 + uVar17 * 8);
            **(undefined8 **)(lVar9 + uVar17 * 8) = plVar14;
            plVar14 = plVar16;
          }
        }
      }
    }
  }
  else if (uVar12 < uVar13) {
    func_0x00010735ff7c();
    if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010735fce0();
    }
    if (uVar12 <= uVar10) {
      uVar12 = uVar10;
    }
    if (uVar12 < uVar13) {
      if (uVar12 != 0) goto LAB_107358dc8;
      FUN_1073590d8();
      unaff_x19[1] = 0;
    }
  }
  uVar13 = unaff_x19[1];
LAB_107358f0c:
  uVar10 = uVar13 - 1;
  if ((uVar13 & uVar10) == 0) {
    uVar12 = uVar10 & uVar5;
  }
  else {
    uVar12 = uVar5;
    if (uVar13 <= uVar5) {
      uVar12 = 0;
      if (uVar13 != 0) {
        uVar12 = uVar5 / uVar13;
      }
      uVar12 = uVar5 - uVar12 * uVar13;
    }
  }
  plVar14 = *(long **)(*unaff_x19 + uVar12 * 8);
  if (plVar14 != (long *)0x0) {
    uVar15 = 0;
    bVar1 = 0;
    for (; lVar9 = *plVar14, lVar9 != 0; plVar14 = (long *)*plVar14) {
      uVar17 = *(ulong *)(lVar9 + 8);
      if ((uVar13 & uVar10) == 0) {
        uVar11 = uVar17 & uVar10;
      }
      else {
        uVar11 = uVar17;
        if (uVar13 <= uVar17) {
          uVar11 = 0;
          if (uVar13 != 0) {
            uVar11 = uVar17 / uVar13;
          }
          uVar11 = uVar17 - uVar11 * uVar13;
        }
      }
      if (uVar11 != uVar12) break;
      if (uVar17 == uVar5) {
        lVar9 = lVar9 + 0x10;
        func_0x000104c32db4(lVar9,unaff_x20 + 2);
        uVar4 = (uint)lVar9;
      }
      else {
        uVar4 = 0;
      }
      bVar3 = uVar4 != uVar15;
      if ((bool)(bVar1 & bVar3)) break;
      uVar15 = uVar15 | bVar3;
      bVar1 = bVar1 | bVar3;
    }
    uVar13 = unaff_x19[1];
  }
  uVar5 = (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                        POPCOUNT((char)(uVar13 >> 0x10)) + POPCOUNT((char)(uVar13 >> 0x18)) +
                        POPCOUNT((char)(uVar13 >> 0x20)) + POPCOUNT((char)(uVar13 >> 0x28)) +
                        POPCOUNT((char)(uVar13 >> 0x30)) + POPCOUNT((char)(uVar13 >> 0x38)));
  uVar10 = unaff_x20[1];
  if (uVar5 < 2) {
    uVar10 = uVar13 - 1 & uVar10;
  }
  else if (uVar13 <= uVar10) {
    func_0x000107360b60();
    uVar5 = extraout_x8_01;
    uVar10 = extraout_x9_02;
  }
  if (plVar14 == (long *)0x0) {
    plVar14 = unaff_x19 + 2;
    *unaff_x20 = *plVar14;
    *plVar14 = (long)unaff_x20;
    lVar9 = *unaff_x19;
    *(long **)(lVar9 + uVar10 * 8) = plVar14;
    if (*unaff_x20 != 0) {
      uVar10 = *(ulong *)(*unaff_x20 + 8);
      if (uVar5 < 2) {
        uVar10 = uVar10 & uVar13 - 1;
      }
      else if (uVar13 <= uVar10) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar10 / uVar13;
        }
        uVar10 = uVar10 - uVar5 * uVar13;
      }
      *(long **)(lVar9 + uVar10 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *plVar14;
    *plVar14 = (long)unaff_x20;
    if (*unaff_x20 != 0) {
      uVar12 = *(ulong *)(*unaff_x20 + 8);
      if (uVar5 < 2) {
        uVar12 = uVar12 & uVar13 - 1;
      }
      else if (uVar13 <= uVar12) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar12 / uVar13;
        }
        uVar12 = uVar12 - uVar5 * uVar13;
      }
      if (uVar12 != uVar10) {
        *(long **)(*unaff_x19 + uVar12 * 8) = unaff_x20;
      }
    }
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  return;
}



/* Entry: 1073590a4; end: 1073590d7;  */

void FUN_1073590a4(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = (long)(param_1 + 2);
    param_1 = (long *)*param_1;
    FUN_107359108(lVar1);
    func_0x0001073601a8();
  }
  return;
}



/* Entry: 1073590d8; end: 1073590ef;  */

void FUN_1073590d8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073590f0; end: 107359107;  */

void FUN_1073590f0(ulong param_1)

{
  if (param_1 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_1 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107360c2c();
  func_0x00010726ea70();
  func_0x000104c2f714();
  return;
}



/* Entry: 107359108; end: 10735912f;  */

void FUN_107359108(void)

{
  func_0x000107360c2c();
  func_0x00010726ea70();
  func_0x000104c2f714();
  return;
}



/* Entry: 107359130; end: 107359167;  */

void FUN_107359130(long param_1)

{
  long unaff_x20;
  
  func_0x0001009eba74();
  func_0x000104c2fe00();
  func_0x000107270b5c(param_1 + 0x38,unaff_x20 + 0x38);
  return;
}



/* Entry: 107359168; end: 10735919b;  */

void FUN_107359168(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107360098();
  if (unaff_x20 != 0) {
    func_0x000107360658();
    if ((bool)in_ZR) {
      FUN_107359108(unaff_x20 + 0x10);
    }
    func_0x000107360134();
  }
  return;
}



/* Entry: 10735919c; end: 107359297;  */

void FUN_10735919c(ulong param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  ulong unaff_x19;
  long unaff_x20;
  
  func_0x00010736060c();
  if ((bool)in_ZR) {
    unaff_x19 = 2;
  }
  else {
    func_0x000107360624();
    if (!(bool)in_ZR) {
      func_0x0001073603a8();
      unaff_x19 = param_1;
    }
  }
  func_0x000107360640();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x00010735fd8c();
    if (((bool)in_CY) && (func_0x0001073603cc(), extraout_x8_01 == 0)) {
      func_0x00010735fce0();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107360068();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == 0) {
      func_0x0001073604c4();
      FUN_1073590d8();
      *(undefined8 *)(unaff_x20 + 8) = 0;
      return;
    }
  }
  FUN_1073590f0(unaff_x19);
  func_0x0001073603d8();
  FUN_1073590d8();
  func_0x00010735ff44();
  uVar3 = extraout_x9;
  while (uVar1 = unaff_x19 == uVar3, !(bool)uVar1) {
    func_0x000107360234();
    uVar3 = extraout_x9_00;
  }
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x00010735fdf0();
    func_0x00010735fddc();
    plVar4 = extraout_x9_01;
    while (*plVar4 != 0) {
      func_0x0001073603c0();
      lVar2 = extraout_x8;
      plVar4 = extraout_x12;
      uVar3 = extraout_x11;
      if ((bool)uVar1) {
        uVar5 = extraout_x13 & extraout_x10;
      }
      else {
        uVar5 = extraout_x13;
        if (unaff_x19 <= extraout_x13) {
          func_0x000107360420();
          lVar2 = extraout_x8_00;
          uVar3 = extraout_x11_00;
          plVar4 = extraout_x12_00;
          uVar5 = extraout_x13_00;
        }
      }
      uVar1 = uVar5 == uVar3;
      if (!(bool)uVar1) {
        if (*(long *)(lVar2 + uVar5 * 8) == 0) {
          func_0x000107360414();
          plVar4 = extraout_x12_01;
        }
        else {
          func_0x00010735fd00();
          plVar4 = extraout_x9_02;
        }
      }
    }
  }
  return;
}



/* Entry: 107359298; end: 1073592c3;  */

void FUN_107359298(long param_1)

{
  func_0x000107360c0c();
  FUN_1073590a4();
  func_0x00010736058c();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1073592c4; end: 10735938f;  */

undefined8 FUN_1073592c4(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong extraout_x8;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x0001000df39c(plVar2,*param_2);
    func_0x0001073607ac();
    if ((bool)in_ZR) {
      plVar3 = (long *)((ulong)plVar2 & extraout_x8);
    }
    else {
      plVar3 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar3 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar4 = *(long **)(*param_1 + (long)plVar3 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            return 0;
          }
          plVar5 = (long *)plVar4[1];
          if (plVar2 != plVar5) break;
          if (plVar4[2] == *param_2) {
            return 1;
          }
        }
        if (((ulong)plVar6 & extraout_x8) == 0) {
          plVar5 = (long *)((ulong)plVar5 & extraout_x8);
        }
        else if (plVar6 <= plVar5) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)plVar6;
          }
          plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar6);
        }
      } while (plVar5 == plVar3);
    }
  }
  return 0;
}



/* Entry: 107359390; end: 1073593a3;  */

void FUN_107359390(long *param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar5;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long *plVar6;
  long *unaff_x19;
  long unaff_x20;
  
  lVar3 = (long)((float)param_2 / *(float *)(param_1 + 4));
  func_0x00010736060c();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107360624();
    if (!(bool)in_ZR) {
      func_0x0001073603a8();
      unaff_x19 = param_1;
    }
  }
  func_0x000107360640();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x00010735fd8c();
    if (((bool)in_CY) && (func_0x0001073603cc(), extraout_x8_01 == 0)) {
      func_0x00010735fce0();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107360068();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x0001073604c4();
      FUN_1073594a8();
      *(undefined8 *)(unaff_x20 + 8) = 0;
      return;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x0001073605c8();
    func_0x0001073603d8();
    FUN_1073594a8();
    func_0x00010735ff44();
    plVar4 = extraout_x9;
    while (uVar1 = unaff_x19 == plVar4, !(bool)uVar1) {
      func_0x000107360234();
      plVar4 = extraout_x9_00;
    }
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      func_0x00010735fdf0();
      func_0x00010735fddc();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x0001073603c0();
        lVar3 = extraout_x8;
        plVar4 = extraout_x12;
        plVar5 = extraout_x11;
        if ((bool)uVar1) {
          plVar6 = (long *)((ulong)extraout_x13 & extraout_x10);
        }
        else {
          plVar6 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107360420();
            lVar3 = extraout_x8_00;
            plVar5 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            plVar6 = extraout_x13_00;
          }
        }
        uVar1 = plVar6 == plVar5;
        if (!(bool)uVar1) {
          if (*(long *)(lVar3 + (long)plVar6 * 8) == 0) {
            func_0x000107360414();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x00010735fd00();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073593a4; end: 1073594a7;  */

void FUN_1073593a4(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *plVar3;
  long *extraout_x9_02;
  ulong extraout_x10;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar4;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long *plVar5;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x00010736060c();
  if ((bool)in_ZR) {
    unaff_x19 = (long *)0x2;
  }
  else {
    func_0x000107360624();
    if (!(bool)in_ZR) {
      func_0x0001073603a8();
      unaff_x19 = param_1;
    }
  }
  func_0x000107360640();
  if (!(bool)in_CY || (bool)in_ZR) {
    if ((bool)in_CY) {
      return;
    }
    func_0x00010735fd8c();
    if (((bool)in_CY) && (func_0x0001073603cc(), extraout_x8_01 == 0)) {
      func_0x00010735fce0();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x000107360068();
    if ((bool)in_CY) {
      return;
    }
    if (unaff_x19 == (long *)0x0) {
      func_0x0001073604c4();
      FUN_1073594a8();
      *(undefined8 *)(unaff_x20 + 8) = 0;
      return;
    }
  }
  if ((ulong)unaff_x19 >> 0x3d == 0) {
    func_0x0001073605c8();
    func_0x0001073603d8();
    FUN_1073594a8();
    func_0x00010735ff44();
    plVar3 = extraout_x9;
    while (uVar1 = unaff_x19 == plVar3, !(bool)uVar1) {
      func_0x000107360234();
      plVar3 = extraout_x9_00;
    }
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      func_0x00010735fdf0();
      func_0x00010735fddc();
      plVar3 = extraout_x9_01;
      while (*plVar3 != 0) {
        func_0x0001073603c0();
        lVar2 = extraout_x8;
        plVar3 = extraout_x12;
        plVar4 = extraout_x11;
        if ((bool)uVar1) {
          plVar5 = (long *)((ulong)extraout_x13 & extraout_x10);
        }
        else {
          plVar5 = extraout_x13;
          if (unaff_x19 <= extraout_x13) {
            func_0x000107360420();
            lVar2 = extraout_x8_00;
            plVar4 = extraout_x11_00;
            plVar3 = extraout_x12_00;
            plVar5 = extraout_x13_00;
          }
        }
        uVar1 = plVar5 == plVar4;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + (long)plVar5 * 8) == 0) {
            func_0x000107360414();
            plVar3 = extraout_x12_01;
          }
          else {
            func_0x00010735fd00();
            plVar3 = extraout_x9_02;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *param_1;
  *param_1 = param_2;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073594a8; end: 1073594bf;  */

void FUN_1073594a8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073594c0; end: 107359663;  */

void FUN_1073594c0(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
  ulong extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar6;
  long *plVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar8;
  ulong extraout_x10;
  long *unaff_x19;
  ulong uVar9;
  ulong unaff_x24;
  
  func_0x000107360cc8();
  func_0x00010736067c();
  func_0x0001000df39c();
  uVar9 = unaff_x19[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x24 = uVar4 & param_3;
      in_ZR = true;
      in_NG = false;
    }
    else {
      in_NG = (long)(param_3 - uVar9) < 0;
      in_ZR = param_3 == uVar9;
      unaff_x24 = param_3;
      if (uVar9 <= param_3) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = param_3 / uVar9;
        }
        unaff_x24 = param_3 - uVar8 * uVar9;
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_107359570;
          uVar8 = plVar6[1];
          if (uVar8 != param_3) break;
          in_NG = plVar6[2] - param_4 < 0;
          in_ZR = false;
          if (plVar6[2] == param_4) {
            return;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar8 = uVar8 & uVar4;
        }
        else if (uVar9 <= uVar8) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar8 / uVar9;
          }
          uVar8 = uVar8 - uVar1 * uVar9;
        }
        in_NG = (long)(uVar8 - unaff_x24) < 0;
        in_ZR = uVar8 == unaff_x24;
      } while ((bool)in_ZR);
    }
  }
LAB_107359570:
  plVar6 = unaff_x19 + 2;
  plVar3 = (long *)0x18;
  __Znwm();
  plVar7 = plVar3;
  func_0x0001073606f4();
  *plVar7 = 0;
  plVar7[1] = param_3;
  plVar7[2] = param_4;
  func_0x00010735fe38();
  if ((uVar9 == 0) || (func_0x00010736013c(param_1,param_2,(float)uVar9), (bool)in_NG)) {
    func_0x00010735fe64();
    uVar2 = uVar9 == 3;
    func_0x00010735fd34();
    FUN_1073593a4();
    func_0x000107360704();
    if ((bool)uVar2) {
      in_ZR = 1;
      unaff_x24 = extraout_x8 & param_3;
    }
    else {
      in_ZR = param_3 == uVar9;
      unaff_x24 = param_3;
      if (uVar9 <= param_3) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = param_3 / uVar9;
        }
        unaff_x24 = param_3 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *unaff_x19;
  plVar7 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar3 = *plVar6;
    *plVar6 = (long)plVar3;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar6;
    if (*plVar3 != 0) {
      func_0x0001073606d4();
      lVar5 = extraout_x8_00;
      if ((bool)in_ZR) {
        uVar4 = extraout_x9 & extraout_x10;
      }
      else {
        uVar4 = extraout_x9;
        if (uVar9 <= extraout_x9) {
          func_0x000107360b60();
          lVar5 = extraout_x8_01;
          uVar4 = extraout_x9_00;
        }
      }
      *(long **)(lVar5 + uVar4 * 8) = plVar3;
    }
  }
  else {
    *plVar3 = *plVar7;
    *plVar7 = (long)plVar3;
  }
  func_0x000107360180();
  FUN_107359664();
  return;
}



/* Entry: 107359664; end: 1073596c7;  */

void FUN_107359664(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001073601f8();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1073596c8; end: 1073596ef;  */

undefined8 * FUN_1073596c8(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined1 in_CY;
  undefined8 *extraout_x8;
  undefined8 *extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 >> 0x3c != 0) {
    FUN_107358b50();
    func_0x000107360170();
    for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 2) {
      uVar3 = unaff_x21[1];
      uVar2 = *unaff_x21;
      if (unaff_x21[1] != 0) {
        do {
          func_0x00010736000c();
        } while (extraout_w10 != 0);
      }
      uStack_48 = unaff_x19[1];
      uStack_50 = *unaff_x19;
      unaff_x19[1] = uVar3;
      *unaff_x19 = uVar2;
      func_0x000107358a58(&uStack_50);
      unaff_x19 = unaff_x19 + 2;
    }
    return unaff_x19;
  }
  func_0x000107360c58();
  puVar1 = extraout_x9;
  if ((bool)in_CY) {
    puVar1 = extraout_x8;
  }
  return puVar1;
}



/* Entry: 1073596f0; end: 10735974f;  */

undefined8 * FUN_1073596f0(void)

{
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107360170();
  for (; unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 2) {
    uVar2 = unaff_x21[1];
    uVar1 = *unaff_x21;
    if (unaff_x21[1] != 0) {
      do {
        func_0x00010736000c();
      } while (extraout_w10 != 0);
    }
    uStack_38 = unaff_x19[1];
    uStack_40 = *unaff_x19;
    unaff_x19[1] = uVar2;
    *unaff_x19 = uVar1;
    func_0x000107358a58(&uStack_40);
    unaff_x19 = unaff_x19 + 2;
  }
  return unaff_x19;
}



/* Entry: 107359750; end: 1073597fb;  */

void FUN_107359750(void)

{
  long unaff_x19;
  
  func_0x000107360c2c();
  func_0x00010048b0a4();
  func_0x0001073588a0(unaff_x19 + 0x20);
  func_0x000107358780(unaff_x19 + 8);
  return;
}



/* Entry: 1073597fc; end: 107359827;  */

void FUN_1073597fc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107360688();
  func_0x00010726933c();
  *(long *)(unaff_x19 + 8) = unaff_x20 + 0x70;
  return;
}



/* Entry: 107359828; end: 1073598ab;  */

undefined8 FUN_107359828(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001009eba74();
  func_0x0001009ebaf4();
  func_0x00010726d83c();
  func_0x0001009ebb00();
  func_0x00010726d8e4(auStack_58);
  func_0x00010726933c(lStack_48);
  lStack_48 = lStack_48 + 0x70;
  func_0x0001009ebb10();
  func_0x00010726d894();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010726da98(auStack_58);
  return uVar1;
}



/* Entry: 1073598ac; end: 1073598d7;  */

long FUN_1073598ac(long param_1)

{
  func_0x000104c2fe00(param_1 + 8);
  *(undefined4 *)(param_1 + 0x40) = 1;
  return param_1;
}



/* Entry: 1073598d8; end: 107359937;  */

uint ****** FUN_1073598d8(uint ******param_1,uint ******param_2)

{
  uint *****pppppuVar1;
  uint uVar2;
  ulong uVar3;
  uint *****pppppuVar4;
  long lVar5;
  uint ******ppppppuVar6;
  long unaff_x19;
  long *unaff_x20;
  uint *****pppppuVar7;
  uint *****pppppuVar8;
  uint *****pppppuVar9;
  uint *****pppppuStack_78;
  
  if (param_2 < (uint ******)0x38e38e38e38e38f) {
    uVar3 = ((long)param_1[2] - (long)*param_1) / 0x48;
    ppppppuVar6 = (uint ******)(uVar3 * 2);
    if (ppppppuVar6 < param_2 || (long)ppppppuVar6 - (long)param_2 == 0) {
      ppppppuVar6 = param_2;
    }
    if (0x1c71c71c71c71c6 < uVar3) {
      ppppppuVar6 = (uint ******)0x38e38e38e38e38e;
    }
    return ppppppuVar6;
  }
  FUN_107359a28();
  func_0x00010736005c();
  pppppuVar7 = *param_1;
  pppppuVar1 = param_1[1];
  pppppuVar4 = param_2[1] + (((long)pppppuVar1 - (long)pppppuVar7) / -0x48) * 9;
  pppppuVar8 = pppppuVar4 + 8;
  for (pppppuVar9 = pppppuVar7; pppppuVar9 != pppppuVar1; pppppuVar9 = pppppuVar9 + 9) {
    ppppppuVar6 = (uint ******)(pppppuVar8 + -7);
    *(undefined1 *)ppppppuVar6 = 0;
    *(uint *)pppppuVar8 = 0xffffffff;
    param_1 = ppppppuVar6;
    FUN_107359a98(ppppppuVar6);
    uVar2 = *(uint *)(pppppuVar9 + 8);
    if (uVar2 != 0xffffffff) {
      param_1 = &pppppuStack_78;
      pppppuStack_78 = (uint *****)ppppppuVar6;
      (*(code *)(&PTR_DAT_1109a4b08)[uVar2])(param_1,pppppuVar9 + 1);
      *(uint *)pppppuVar8 = uVar2;
    }
    pppppuVar8 = pppppuVar8 + 9;
  }
  for (; pppppuVar7 != pppppuVar1; pppppuVar7 = pppppuVar7 + 9) {
    param_1 = (uint ******)(pppppuVar7 + 1);
    FUN_107359a98(param_1);
  }
  *(uint ******)(unaff_x19 + 8) = pppppuVar4;
  lVar5 = *unaff_x20;
  *unaff_x20 = (long)pppppuVar4;
  unaff_x20[1] = lVar5;
  func_0x00010014b2d8();
  return param_1;
}



/* Entry: 107359938; end: 107359a27;  */

void FUN_107359938(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  uint *puVar5;
  long lVar6;
  uint *puVar7;
  uint *puStack_68;
  
  func_0x00010736005c();
  lVar6 = *param_1;
  lVar1 = param_1[1];
  lVar3 = *(long *)(param_2 + 8) + ((lVar1 - lVar6) / -0x48) * 0x48;
  puVar7 = (uint *)(lVar3 + 0x40);
  for (lVar4 = lVar6; lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
    puVar5 = puVar7 + -0xe;
    *(undefined1 *)puVar5 = 0;
    *puVar7 = 0xffffffff;
    FUN_107359a98(puVar5);
    uVar2 = *(uint *)(lVar4 + 0x40);
    if (uVar2 != 0xffffffff) {
      puStack_68 = puVar5;
      (*(code *)(&PTR_DAT_1109a4b08)[uVar2])(&puStack_68,lVar4 + 8);
      *puVar7 = uVar2;
    }
    puVar7 = puVar7 + 0x12;
  }
  for (; lVar6 != lVar1; lVar6 = lVar6 + 0x48) {
    FUN_107359a98(lVar6 + 8);
  }
  *(long *)(unaff_x19 + 8) = lVar3;
  lVar4 = *unaff_x20;
  *unaff_x20 = lVar3;
  unaff_x20[1] = lVar4;
  func_0x00010014b2d8();
  return;
}



/* Entry: 107359a28; end: 107359a33;  */

void FUN_107359a28(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong extraout_x8;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  undefined1 uStack_61;
  
  func_0x00010735fe88();
  func_0x0001009eba74();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107360aa4();
    if (extraout_x8 <= unaff_x20) {
      func_0x000104bd35f4();
      if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
        func_0x000107360204((&PTR_FUN_1109a4af8)[*(uint *)(param_1 + 0x38)],&uStack_61);
      }
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      return;
    }
    lVar1 = unaff_x20 * 0x48;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x48;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x48;
  return;
}



/* Entry: 107359a34; end: 107359a97;  */

void FUN_107359a34(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong extraout_x8;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  undefined1 uStack_51;
  
  func_0x0001009eba74();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x000107360aa4();
    if (extraout_x8 <= unaff_x20) {
      func_0x000104bd35f4();
      if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
        func_0x000107360204((&PTR_FUN_1109a4af8)[*(uint *)(param_1 + 0x38)],&uStack_51);
      }
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      return;
    }
    lVar1 = unaff_x20 * 0x48;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x48;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x48;
  return;
}



/* Entry: 107359a98; end: 107359adf;  */

void FUN_107359a98(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    func_0x000107360204((&PTR_FUN_1109a4af8)[*(uint *)(param_1 + 0x38)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 107359ae0; end: 107359b0b;  */

void FUN_107359ae0(undefined8 param_1,long param_2)

{
  func_0x0001009eba28();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107359b0c; end: 107359b53;  */

void FUN_107359b0c(void)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  func_0x000107360688();
  while (lVar1 = unaff_x19[2], unaff_x20 != lVar1) {
    unaff_x19[2] = lVar1 + -0x48;
    FUN_107359a98(lVar1 + -0x40);
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107359b54; end: 107359c8f;  */

void FUN_107359b54(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [24];
  undefined4 uStack_b0;
  undefined4 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_DAT_110996720;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_64 = 1;
  uVar1 = param_3;
  uStack_b0 = param_2;
  uStack_70 = param_2;
  func_0x000107360bac();
  func_0x00010724ef84(auStack_c8,uVar1);
  func_0x0001073606a4();
  func_0x0001073600c8();
  func_0x000107360ae0();
  func_0x000107360acc();
  FUN_10743fa44();
  func_0x000107360480();
  func_0x0001073604a0();
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_DAT_110996720;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_64 = 1;
  uStack_b0 = param_2;
  uStack_70 = param_2;
  func_0x000107360bac();
  func_0x00010724ef84(auStack_c8,param_3);
  func_0x0001073606a4();
  func_0x0001073600c8();
  func_0x000107360ae0();
  func_0x000107360acc();
  FUN_10743fa9c();
  func_0x000107360480();
  func_0x0001073604a0();
  return;
}



/* Entry: 107359c90; end: 107359caf;  */

void FUN_107359c90(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_107359cb0(&uStack_18);
  return;
}



/* Entry: 107359cb0; end: 107359cb7;  */

void FUN_107359cb0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_2;
  func_0x000107360450(param_1,uVar1,param_2);
  if ((uVar1 & 1) != 0) {
    func_0x0001073603f0();
  }
  func_0x0001073604d0();
  return;
}



/* Entry: 107359cb8; end: 107359cdf;  */

void FUN_107359cb8(undefined8 param_1,uint param_2)

{
  func_0x000107360450();
  if ((param_2 & 1) != 0) {
    func_0x0001073603f0();
  }
  func_0x0001073604d0();
  return;
}



/* Entry: 107359ce0; end: 107359d6f;  */

undefined1  [16] FUN_107359ce0(ulong param_1)

{
  undefined8 uVar1;
  ulong extraout_x8;
  ulong unaff_x22;
  ulong unaff_x28;
  undefined1 auVar2 [16];
  
  func_0x0001009eba74();
  func_0x000107360078();
  FUN_10731e624();
  func_0x00010735fef4();
  do {
    func_0x0001073601b0();
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 - 1 & unaff_x28) {
      func_0x0001073604f0();
      func_0x00010726b840();
      if ((param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_107359d50;
      }
    }
    func_0x0001073603b0();
  } while ((extraout_x8 & 1) == 0);
  func_0x00010736042c();
  FUN_107359d70();
  uVar1 = 1;
  unaff_x22 = param_1;
LAB_107359d50:
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = unaff_x22;
  return auVar2;
}



/* Entry: 107359d70; end: 107359dd7;  */

void FUN_107359d70(long param_1)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x0001009eba74();
  func_0x000100061de0();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + param_1) != -2)) {
    FUN_107359dd8();
    func_0x0001073602a8();
    func_0x000100061de0();
    lVar1 = *unaff_x19;
  }
  func_0x0001073606b4(lVar1);
  func_0x00010735ff1c();
  return;
}



/* Entry: 107359dd8; end: 107359e07;  */

long * FUN_107359dd8(long *param_1)

{
  long lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 extraout_x8;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 uStack_51;
  
  uVar9 = param_1[2];
  if ((8 < uVar9) &&
     (uVar4 = uVar9 * 0x19 + param_1[3] * -0x20 == 0, (ulong)(param_1[3] * 0x20) <= uVar9 * 0x19)) {
    func_0x00010735fda8();
    puVar7 = &UNK_1109a5278;
    func_0x00010ae6c914();
    func_0x00010735fd20(extraout_x8);
    if ((bool)uVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    puVar6 = &uStack_51;
    func_0x00010784b234(puVar6,puVar7);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = puVar6 + 0x110c8acd8;
    return (long *)(SUB168(auVar3 * ZEXT816(0x9ddfea08eb382d69),8) ^
                   (long)(puVar6 + 0x110c8acd8) * -0x622015f714c7d297);
  }
  lVar1 = *param_1;
  puVar12 = (undefined8 *)param_1[1];
  lVar13 = param_1[2];
  param_1[2] = uVar9 << 1 | 1;
  plVar5 = param_1;
  FUN_10731e4fc();
  lVar15 = param_1[1];
  for (lVar14 = 0; lVar13 != lVar14; lVar14 = lVar14 + 1) {
    if (-1 < *(char *)(lVar1 + lVar14)) {
      puVar8 = puVar12;
      FUN_10731e624();
      plVar5 = param_1;
      func_0x000100061de0(param_1,puVar8);
      bVar2 = (byte)puVar8 & 0x7f;
      uVar9 = param_1[2];
      lVar11 = *param_1;
      *(byte *)(lVar11 + (long)plVar5) = bVar2;
      *(byte *)(lVar11 + ((long)plVar5 - 7U & uVar9) + (uVar9 & 7)) = bVar2;
      puVar8 = (undefined8 *)(lVar15 + (long)plVar5 * 0xc);
      uVar10 = *puVar12;
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar12 + 1);
      *puVar8 = uVar10;
    }
    puVar12 = (undefined8 *)((long)puVar12 + 0xc);
  }
  if (lVar13 != 0) {
    plVar5 = (long *)(lVar1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar5);
    return plVar5;
  }
  return plVar5;
}



/* Entry: 107359e08; end: 107359e43;  */

ulong FUN_107359e08(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  
  func_0x00010735fda8();
  puVar3 = &UNK_1109a5278;
  func_0x00010ae6c914();
  func_0x00010735fd20(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_51;
  func_0x00010784b234(puVar2,puVar3);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = puVar2 + 0x110c8acd8;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         (long)(puVar2 + 0x110c8acd8) * -0x622015f714c7d297;
}



/* Entry: 107359e44; end: 107359ebb;  */

ulong FUN_107359e44(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined1 uStack_21;
  
  puVar2 = &uStack_21;
  func_0x00010784b234(puVar2,param_2);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = puVar2 + 0x110c8acd8;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         (long)(puVar2 + 0x110c8acd8) * -0x622015f714c7d297;
}



/* Entry: 107359ebc; end: 107359ec7;  */

void FUN_107359ebc(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010735fe88();
  func_0x00010014b284();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010014b2d8();
  return;
}



/* Entry: 107359ec8; end: 107359efb;  */

void FUN_107359ec8(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x00010014b284();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010014b2d8();
  return;
}



/* Entry: 107359efc; end: 107359f4b;  */

void FUN_107359efc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010014b1ec();
  if (param_2 != 0) {
    func_0x000107359f2c(param_4);
  }
  func_0x00010736083c();
  return;
}



/* Entry: 107359f4c; end: 107359f67;  */

long * FUN_107359f4c(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_107359f94();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107359f68; end: 107359f93;  */

long * FUN_107359f68(long *param_1)

{
  FUN_107359f94();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107359f94; end: 107359f9b;  */

void FUN_107359f94(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00010735ce54();
  }
  return;
}



/* Entry: 107359f9c; end: 107359fcf;  */

void FUN_107359f9c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00010735ce54();
  }
  return;
}



/* Entry: 107359fd0; end: 10735a077;  */

void FUN_107359fd0(long param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x0001009eba74();
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    uVar3 = *unaff_x20;
    puVar2 = puVar1 + 2;
    puVar1[1] = unaff_x20[1];
    *puVar1 = uVar3;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
  }
  else {
    FUN_10735a078();
    func_0x0001009ebb00();
    FUN_107359efc(auStack_58);
    uVar3 = *unaff_x20;
    puStack_48[1] = unaff_x20[1];
    *puStack_48 = uVar3;
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    puStack_48 = puStack_48 + 2;
    func_0x0001009ebb10();
    FUN_107359ec8();
    puVar2 = *(undefined8 **)(unaff_x19 + 8);
    FUN_107359f68(auStack_58);
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar2;
  return;
}



/* Entry: 10735a078; end: 10735a09f;  */

undefined8 FUN_10735a078(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  undefined8 unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    func_0x000107360c58();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    return uVar1;
  }
  FUN_107359ebc();
  func_0x00010735fffc();
  func_0x00010735a0c4();
  return unaff_x19;
}



/* Entry: 10735a0a0; end: 10735a0ef;  */

void FUN_10735a0a0(void)

{
  func_0x00010735fffc();
  func_0x00010735a0c4();
  return;
}



/* Entry: 10735a0f0; end: 10735a0f7;  */

void FUN_10735a0f0(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010736005c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x80;
    FUN_10735a134(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10735a0f8; end: 10735a133;  */

void FUN_10735a0f8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x00010736005c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x80;
    FUN_10735a134(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10735a134; end: 10735a17b;  */

void FUN_10735a134(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x78) != 0xffffffff) {
    func_0x000107360204((&PTR_FUN_1109a4b18)[*(uint *)(param_1 + 0x78)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  return;
}



/* Entry: 10735a17c; end: 10735a18b;  */

void FUN_10735a17c(undefined8 param_1,long param_2)

{
  func_0x0001009eba28();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10735a18c; end: 10735a207;  */

long FUN_10735a18c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107360884();
  func_0x000104c2f714();
  func_0x00010735a1b8(unaff_x19 + 0x28);
  lVar1 = unaff_x19;
  func_0x0001009eba28();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10735a208; end: 10735a20f;  */

void FUN_10735a208(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c(param_1,*param_1);
  for (lVar1 = param_1[1]; lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    func_0x000107358a58(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10735a210; end: 10735a24f;  */

void FUN_10735a210(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x20) {
    func_0x000107358a58(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10735a250; end: 10735a29f;  */

void FUN_10735a250(void)

{
  func_0x00010735fffc();
  func_0x00010735a274();
  return;
}



/* Entry: 10735a2a0; end: 10735a2a7;  */

void FUN_10735a2a0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010735ce54();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10735a2a8; end: 10735a2db;  */

void FUN_10735a2a8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736005c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010735ce54();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10735a2dc; end: 10735a353;  */

void FUN_10735a2dc(void)

{
  undefined8 *in_x3;
  undefined8 in_x4;
  undefined8 unaff_x19;
  long unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107360170();
  uVar2 = in_x3[1];
  uVar1 = *in_x3;
  *in_x3 = 0;
  in_x3[1] = 0;
  FUN_10732f758(auStack_60,in_x4);
  func_0x00010736057c();
  *(undefined8 *)(unaff_x21 + 0x38) = unaff_x19;
  *(undefined8 *)(unaff_x21 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x21 + 0x40) = uVar1;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10732f758(unaff_x21 + 0x50,auStack_60);
  func_0x000107261dac(auStack_60);
  func_0x00010726dd08(&uStack_40);
  return;
}



/* Entry: 10735a354; end: 10735a3e3;  */

void FUN_10735a354(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int extraout_w10;
  long lStack_30;
  long lStack_28;
  
  if (param_1 != param_2) {
    lStack_28 = param_2[1];
    lStack_30 = *param_2;
    if (param_2[1] != 0) {
      do {
        func_0x00010736000c();
      } while (extraout_w10 != 0);
    }
    if (*param_1 != 0) {
      piVar1 = (int *)(*param_1 + 0x18);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000107360788();
    func_0x0001072c5d5c();
    func_0x0001072c6dc4(&lStack_30);
    if (*param_1 != 0) {
      piVar1 = (int *)(*param_1 + 0x18);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}



/* Entry: 10735a3e4; end: 10735a48b;  */

void FUN_10735a3e4(void)

{
  undefined8 *in_x3;
  undefined8 in_x4;
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107360170();
  uStack_38 = in_x3[1];
  uStack_40 = *in_x3;
  *in_x3 = 0;
  in_x3[1] = 0;
  FUN_10732f758(auStack_60,in_x4);
  func_0x00010735a440();
  func_0x000107360464();
  func_0x0001073608d0();
  return;
}



/* Entry: 10735a48c; end: 10735a4c3;  */

void FUN_10735a48c(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int *piVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar3;
  int *extraout_x9;
  int *extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  int *extraout_x11;
  int *extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  int *extraout_x13;
  int *extraout_x13_00;
  int *piVar5;
  int *piVar6;
  
  piVar6 = param_1 + 2;
  if (*param_1 == 0) {
    return;
  }
  func_0x000107360a04();
  func_0x000107360338();
  func_0x00010735ffac();
  func_0x000107360154();
  ___cxa_free_exception();
  func_0x00010736003c();
  piVar5 = piVar6;
  piVar2 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (int *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    piVar5 = param_2;
  }
  piVar6 = *(int **)(piVar6 + 2);
  if (piVar6 < param_2) {
LAB_10735a50c:
    func_0x0001073602a8();
    if (piVar2 == (int *)0x0) {
      FUN_10735a60c(piVar5);
      piVar5[2] = 0;
      piVar5[3] = 0;
    }
    else {
      FUN_10735a624(piVar5 + 2);
      func_0x0001073603d8();
      FUN_10735a60c();
      func_0x00010735ff44();
      piVar6 = extraout_x9;
      while (uVar1 = piVar2 == piVar6, !(bool)uVar1) {
        func_0x000107360234();
        piVar6 = extraout_x9_00;
      }
      if (*(long *)(piVar5 + 4) != 0) {
        func_0x00010735fdf0();
        func_0x00010735fddc();
        plVar4 = extraout_x9_01;
        while (*plVar4 != 0) {
          func_0x0001073603c0();
          lVar3 = extraout_x8_00;
          plVar4 = extraout_x12;
          piVar6 = extraout_x11;
          if ((bool)uVar1) {
            piVar5 = (int *)((ulong)extraout_x13 & extraout_x10);
          }
          else {
            piVar5 = extraout_x13;
            if (piVar2 <= extraout_x13) {
              func_0x000107360420();
              lVar3 = extraout_x8_01;
              piVar6 = extraout_x11_00;
              plVar4 = extraout_x12_00;
              piVar5 = extraout_x13_00;
            }
          }
          uVar1 = piVar5 == piVar6;
          if (!(bool)uVar1) {
            if (*(long *)(lVar3 + (long)piVar5 * 8) == 0) {
              func_0x000107360414();
              plVar4 = extraout_x12_01;
            }
            else {
              func_0x00010735fd00();
              plVar4 = extraout_x9_02;
            }
          }
        }
      }
    }
    return;
  }
  if (param_2 < piVar6) {
    func_0x00010735ff7c();
    if ((piVar6 < (int *)0x3) || (func_0x0001073603cc(), extraout_x8 != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010735fce0();
    }
    if (param_2 <= piVar5) {
      param_2 = piVar5;
    }
    if (param_2 < piVar6) goto LAB_10735a50c;
  }
  return;
}



/* Entry: 10735a4c4; end: 10735a55b;  */

void FUN_10735a4c4(ulong param_1,ulong param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar5;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar6;
  
  uVar2 = param_1;
  uVar3 = param_2;
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar2 = param_2;
  }
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 < param_2) {
LAB_10735a50c:
    func_0x0001073602a8();
    if (uVar3 == 0) {
      FUN_10735a60c(uVar2);
      *(undefined8 *)(uVar2 + 8) = 0;
    }
    else {
      FUN_10735a624(uVar2 + 8);
      func_0x0001073603d8();
      FUN_10735a60c();
      func_0x00010735ff44();
      uVar6 = extraout_x9;
      while (uVar1 = uVar3 == uVar6, !(bool)uVar1) {
        func_0x000107360234();
        uVar6 = extraout_x9_00;
      }
      if (*(long *)(uVar2 + 0x10) != 0) {
        func_0x00010735fdf0();
        func_0x00010735fddc();
        plVar5 = extraout_x9_01;
        while (*plVar5 != 0) {
          func_0x0001073603c0();
          lVar4 = extraout_x8_00;
          plVar5 = extraout_x12;
          uVar2 = extraout_x11;
          if ((bool)uVar1) {
            uVar6 = extraout_x13 & extraout_x10;
          }
          else {
            uVar6 = extraout_x13;
            if (uVar3 <= extraout_x13) {
              func_0x000107360420();
              lVar4 = extraout_x8_01;
              uVar2 = extraout_x11_00;
              plVar5 = extraout_x12_00;
              uVar6 = extraout_x13_00;
            }
          }
          uVar1 = uVar6 == uVar2;
          if (!(bool)uVar1) {
            if (*(long *)(lVar4 + uVar6 * 8) == 0) {
              func_0x000107360414();
              plVar5 = extraout_x12_01;
            }
            else {
              func_0x00010735fd00();
              plVar5 = extraout_x9_02;
            }
          }
        }
      }
    }
    return;
  }
  if (param_2 < uVar6) {
    func_0x00010735ff7c();
    if ((uVar6 < 3) || (func_0x0001073603cc(), extraout_x8 != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010735fce0();
    }
    if (param_2 <= uVar2) {
      param_2 = uVar2;
    }
    if (param_2 < uVar6) goto LAB_10735a50c;
  }
  return;
}



/* Entry: 10735a55c; end: 10735a60b;  */

void FUN_10735a55c(long param_1,ulong param_2)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar5;
  
  if (param_2 == 0) {
    FUN_10735a60c(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    FUN_10735a624(param_1 + 8);
    func_0x0001073603d8();
    FUN_10735a60c();
    func_0x00010735ff44();
    uVar3 = extraout_x9;
    while (uVar1 = param_2 == uVar3, !(bool)uVar1) {
      func_0x000107360234();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010735fdf0();
      func_0x00010735fddc();
      plVar4 = extraout_x9_01;
      while (*plVar4 != 0) {
        func_0x0001073603c0();
        lVar2 = extraout_x8;
        plVar4 = extraout_x12;
        uVar3 = extraout_x11;
        if ((bool)uVar1) {
          uVar5 = extraout_x13 & extraout_x10;
        }
        else {
          uVar5 = extraout_x13;
          if (param_2 <= extraout_x13) {
            func_0x000107360420();
            lVar2 = extraout_x8_00;
            uVar3 = extraout_x11_00;
            plVar4 = extraout_x12_00;
            uVar5 = extraout_x13_00;
          }
        }
        uVar1 = uVar5 == uVar3;
        if (!(bool)uVar1) {
          if (*(long *)(lVar2 + uVar5 * 8) == 0) {
            func_0x000107360414();
            plVar4 = extraout_x12_01;
          }
          else {
            func_0x00010735fd00();
            plVar4 = extraout_x9_02;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10735a60c; end: 10735a623;  */

void FUN_10735a60c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10735a624; end: 10735a63f;  */

void FUN_10735a624(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107360438();
  FUN_10735a660();
  return;
}



/* Entry: 10735a640; end: 10735a65f;  */

void FUN_10735a640(void)

{
  func_0x000107360438();
  FUN_10735a660();
  return;
}



/* Entry: 10735a660; end: 10735a677;  */

void FUN_10735a660(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000104c2f714(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}


