/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10742fc1c; end: 107430143;  */

void FUN_10742fc1c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 extraout_x8;
  long *plVar12;
  long *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *plVar13;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  ulong uVar14;
  long extraout_x12;
  long *plVar15;
  long *extraout_x12_00;
  long *plVar16;
  long *plVar17;
  long lVar18;
  int unaff_w21;
  long lVar19;
  long lVar20;
  long *unaff_x25;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_a8 [56];
  long lStack_70;
  undefined8 uStack_68;
  
  lVar19 = param_3;
  func_0x00010743bf90();
  func_0x00010743b2e8();
  uVar5 = (int)(*(byte *)(lVar19 + 0x80) - 1) < 0;
  uVar6 = *(byte *)(lVar19 + 0x80) == 1;
  uStack_68 = extraout_x8;
  if ((bool)uVar6) {
    iVar8 = (int)param_3 + 0x48;
    func_0x000107262f24();
    if (iVar8 != 0) goto LAB_10742fc70;
LAB_1074300e4:
    func_0x00010743b264(uStack_68);
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
LAB_10742fc70:
    func_0x000104c2d614();
    if (unaff_w21 != 0) {
      func_0x000107265974(param_3 + 0x48);
      plStack_e0 = (long *)0x0;
      plStack_d8 = (long *)0x0;
      func_0x000107433f40(param_3,&plStack_e0);
      func_0x0001073bca64(&plStack_e0);
      goto LAB_1074300e4;
    }
    func_0x0001072e89a4(param_5);
    func_0x00010725ffdc(param_3 + 0x48);
    plVar13 = (long *)(param_4 + 0x28);
    func_0x00010726364c();
    plVar24 = *(long **)(param_4 + 0x18);
    plVar9 = plVar13;
    if (plVar24 != (long *)0x0) {
      uVar23 = (long)plVar24 - 1;
      if (((ulong)plVar24 & uVar23) == 0) {
        unaff_x25 = (long *)(uVar23 & (ulong)plVar13);
        uVar5 = false;
      }
      else {
        uVar5 = (long)plVar13 - (long)plVar24 < 0;
        unaff_x25 = plVar13;
        if (plVar24 <= plVar13) {
          uVar14 = 0;
          if (plVar24 != (long *)0x0) {
            uVar14 = (ulong)plVar13 / (ulong)plVar24;
          }
          unaff_x25 = (long *)((long)plVar13 - uVar14 * (long)plVar24);
        }
      }
      plVar17 = *(long **)(*(long *)(param_4 + 0x10) + (long)unaff_x25 * 8);
      if (plVar17 != (long *)0x0) {
        do {
          while( true ) {
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) goto LAB_10742fd58;
            plVar12 = (long *)plVar17[1];
            uVar5 = (long)plVar12 - (long)plVar13 < 0;
            if (plVar12 != plVar13) break;
            plVar9 = plVar17 + 2;
            func_0x000104c32db4();
            if (((ulong)plVar9 & 1) != 0) goto LAB_10742ffb0;
          }
          if (((ulong)plVar24 & uVar23) == 0) {
            plVar12 = (long *)((ulong)plVar12 & uVar23);
          }
          else if (plVar24 <= plVar12) {
            uVar14 = 0;
            if (plVar24 != (long *)0x0) {
              uVar14 = (ulong)plVar12 / (ulong)plVar24;
            }
            plVar12 = (long *)((long)plVar12 - uVar14 * (long)plVar24);
          }
          uVar5 = (long)plVar12 - (long)unaff_x25 < 0;
        } while (plVar12 == unaff_x25);
      }
    }
LAB_10742fd58:
    plVar17 = (long *)(param_4 + 0x20);
    func_0x00010743ba58();
    uStack_d0 = 1;
    plVar12 = plVar9 + 2;
    *plVar9 = 0;
    plVar9[1] = (long)plVar13;
    plStack_e0 = plVar9;
    plStack_d8 = plVar17;
    func_0x000104c2fe00();
    plVar9[9] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    func_0x00010743baa8(*(undefined8 *)(param_4 + 0x28));
    if ((plVar24 == (long *)0x0) || (func_0x00010743ba9c(), (bool)uVar5)) {
      bVar4 = (long *)0x2 < plVar24;
      bVar7 = plVar24 == (long *)0x3;
      func_0x00010743b2c0((long)plVar24 << 1);
      plVar21 = extraout_x8_00;
      if (!bVar4 || bVar7) {
        plVar21 = extraout_x9;
      }
      if ((long)plVar21 - 1U == 0) {
        plVar21 = (long *)0x2;
      }
      else if (((ulong)plVar21 & (long)plVar21 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
        plVar12 = plVar21;
      }
      plVar24 = *(long **)(param_4 + 0x18);
      if (plVar24 < plVar21) {
LAB_10742fdf4:
        if ((ulong)plVar21 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_107430128;
        }
        lVar19 = (long)plVar21 << 3;
        __Znwm(lVar19);
        FUN_107433f7c(param_4 + 0x10,lVar19);
        plVar24 = (long *)0x0;
        *(long **)(param_4 + 0x18) = plVar21;
        while (bVar7 = plVar24 <= plVar21, plVar21 != plVar24) {
          func_0x00010743baf0();
          plVar24 = extraout_x9_00;
        }
        plVar24 = plVar21;
        if (*plVar17 != 0) {
          func_0x00010743c504();
          plVar12 = extraout_x11;
          if (bVar7) {
            plVar12 = (long *)((long)extraout_x11 - extraout_x12 * (long)plVar21);
          }
          if (((ulong)plVar21 & extraout_x9_01) == 0) {
            plVar12 = (long *)((ulong)extraout_x11 & extraout_x9_01);
          }
          *(long **)(extraout_x8_01 + (long)plVar12 * 8) = plVar17;
          lVar19 = extraout_x8_01;
          uVar23 = extraout_x9_01;
          plVar15 = extraout_x10;
          while (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0) {
            plVar16 = (long *)plVar15[1];
            if (((ulong)plVar21 & uVar23) == 0) {
              plVar16 = (long *)((ulong)plVar16 & uVar23);
            }
            else if (plVar21 <= plVar16) {
              uVar14 = 0;
              if (plVar21 != (long *)0x0) {
                uVar14 = (ulong)plVar16 / (ulong)plVar21;
              }
              plVar16 = (long *)((long)plVar16 - uVar14 * (long)plVar21);
            }
            if (plVar16 != plVar12) {
              if (*(long *)(lVar19 + (long)plVar16 * 8) == 0) {
                func_0x00010743bc98();
                lVar19 = extraout_x8_03;
                uVar23 = extraout_x9_03;
                plVar15 = extraout_x12_00;
                plVar12 = extraout_x11_01;
              }
              else {
                func_0x00010743b22c();
                lVar19 = extraout_x8_02;
                uVar23 = extraout_x9_02;
                plVar15 = extraout_x10_00;
                plVar12 = extraout_x11_00;
              }
            }
          }
        }
      }
      else if (plVar21 < plVar24) {
        func_0x00010743bafc((float)*(ulong *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x30));
        if ((plVar24 < (long *)0x3) || (((ulong)plVar24 & (long)plVar24 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x00010743b20c();
        }
        if (plVar21 <= plVar12) {
          plVar21 = plVar12;
        }
        if (plVar21 < plVar24) {
          if (plVar21 != (long *)0x0) goto LAB_10742fdf4;
          FUN_107433f7c(param_4 + 0x10,0);
          *(undefined8 *)(param_4 + 0x18) = 0;
          plVar24 = (long *)0x0;
        }
        else {
          plVar24 = *(long **)(param_4 + 0x18);
        }
      }
      if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
        unaff_x25 = (long *)((long)plVar24 - 1U & (ulong)plVar13);
      }
      else {
        unaff_x25 = plVar13;
        if (plVar24 <= plVar13) {
          uVar23 = 0;
          if (plVar24 != (long *)0x0) {
            uVar23 = (ulong)plVar13 / (ulong)plVar24;
          }
          unaff_x25 = (long *)((long)plVar13 - uVar23 * (long)plVar24);
        }
      }
    }
    lVar19 = *(long *)(param_4 + 0x10);
    plVar13 = *(long **)(lVar19 + (long)unaff_x25 * 8);
    if (plVar13 == (long *)0x0) {
      *plVar9 = *plVar17;
      *plVar17 = (long)plVar9;
      *(long **)(lVar19 + (long)unaff_x25 * 8) = plVar17;
      if (*plVar9 != 0) {
        plVar13 = *(long **)(*plVar9 + 8);
        if (((ulong)plVar24 & (long)plVar24 - 1U) == 0) {
          plVar13 = (long *)((ulong)plVar13 & (long)plVar24 - 1U);
        }
        else if (plVar24 <= plVar13) {
          uVar23 = 0;
          if (plVar24 != (long *)0x0) {
            uVar23 = (ulong)plVar13 / (ulong)plVar24;
          }
          plVar13 = (long *)((long)plVar13 - uVar23 * (long)plVar24);
        }
        *(long **)(lVar19 + (long)plVar13 * 8) = plVar9;
      }
    }
    else {
      *plVar9 = *plVar13;
      *plVar13 = (long)plVar9;
    }
    plStack_e0 = (long *)0x0;
    *(long *)(param_4 + 0x28) = *(long *)(param_4 + 0x28) + 1;
    FUN_107433f94(&plStack_e0);
    plVar17 = plVar9;
LAB_10742ffb0:
    func_0x00010743ba50(&plStack_e0);
    func_0x000104c2fe00(auStack_a8);
    uVar23 = plVar17[10];
    uVar14 = plVar17[0xb];
    uVar6 = uVar23 == uVar14;
    lStack_70 = param_3;
    if (uVar23 < uVar14) {
      FUN_107434054(uVar23,&plStack_e0);
      lVar19 = uVar23 + 0x78;
LAB_1074300d8:
      plVar17[10] = lVar19;
      func_0x000107432b30(&plStack_e0);
      goto LAB_1074300e4;
    }
    lVar19 = uVar23 - plVar17[9];
    uVar23 = lVar19 / 0x78 + 1;
    if (uVar23 < 0x222222222222223) {
      uVar2 = (long)(uVar14 - plVar17[9]) / 0x78;
      uVar14 = uVar2 * 2;
      if (uVar14 < uVar23 || uVar14 - uVar23 == 0) {
        uVar14 = uVar23;
      }
      if (0x111111111111110 < uVar2) {
        uVar14 = 0x222222222222222;
      }
      if (uVar14 == 0) {
        lVar18 = 0;
      }
      else {
        if (0x222222222222222 < uVar14) {
          func_0x000104bd35f4();
          goto LAB_107430128;
        }
        lVar18 = uVar14 * 0x78;
        __Znwm();
      }
      lVar19 = lVar18 + lVar19;
      FUN_107434054(lVar19,&plStack_e0);
      lVar20 = plVar17[9];
      lVar1 = plVar17[10];
      lVar22 = lVar19 + ((lVar1 - lVar20) / -0x78) * 0x78;
      lVar10 = lVar22;
      for (lVar11 = lVar20; lVar11 != lVar1; lVar11 = lVar11 + 0x78) {
        FUN_107434054(lVar10,lVar11);
        lVar10 = lVar10 + 0x78;
      }
      for (; uVar6 = lVar20 == lVar1, !(bool)uVar6; lVar20 = lVar20 + 0x78) {
        func_0x000107432b30(lVar20);
      }
      lVar19 = lVar19 + 0x78;
      lVar11 = plVar17[9];
      plVar17[9] = lVar22;
      plVar17[10] = lVar19;
      plVar17[0xb] = lVar18 + uVar14 * 0x78;
      if (lVar11 != 0) {
        __ZdlPv();
      }
      goto LAB_1074300d8;
    }
  }
  FUN_107434088();
LAB_107430128:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10743012c);
  (*pcVar3)();
}



/* Entry: 107430144; end: 1074301b3;  */

void FUN_107430144(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010743bf34(param_1 + 0x1e0);
  func_0x00010743bf34(param_1 + 0x1e8);
  func_0x00010743bf34(param_1 + 0x1f0);
  FUN_1074301cc(param_1 + 0x240);
  FUN_1074301cc(param_1 + 0x250);
  func_0x0001074397d0(param_1 + 0xb8);
  func_0x000107439840(param_1 + 0xe0);
  func_0x0001074398b0(param_1 + 0x158);
  func_0x000107439920(param_1 + 0x28);
  func_0x00010743998c(param_1 + 0x50);
  lVar1 = *(long *)(param_1 + 0x1f8);
  FUN_10743409c(lVar1 + 0x10);
  puVar2 = (undefined8 *)(lVar1 + 0x38);
  func_0x00010743b73c(puVar2,*puVar2);
  lVar1 = puVar2[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107435084();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1074301b4; end: 1074301cb;  */

void FUN_1074301b4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010730b0e8(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1074301cc; end: 1074301ef;  */

void FUN_1074301cc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010743c310();
  return;
}



/* Entry: 1074301f0; end: 107430217;  */

void FUN_1074301f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10743409c(param_1 + 0x10);
  puVar1 = (undefined8 *)(param_1 + 0x38);
  func_0x00010743b73c(puVar1,*puVar1);
  lVar2 = puVar1[1];
  while (lVar2 != unaff_x19) {
    lVar2 = lVar2 + -0x10;
    func_0x000107435084();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107430218; end: 10743052f;  */

void FUN_107430218(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long extraout_x8;
  long lVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined8 uVar4;
  undefined8 in_register_00005008;
  ulong uStack_70;
  undefined8 uStack_68;
  
  func_0x00010743c00c();
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010743b4a0();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = param_4;
  *(undefined8 *)(unaff_x19 + 0x18) = param_5;
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  *puVar1 = &PTR_FUN_1109af140;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 **)(unaff_x19 + 0x20) = puVar1;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined4 *)(unaff_x19 + 0x48) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined4 *)(unaff_x19 + 0x70) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined4 *)(unaff_x19 + 0x98) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 **)(unaff_x19 + 0xa0) = (undefined8 *)(unaff_x19 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xd0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  *(undefined4 *)(unaff_x19 + 0xd8) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0xe8) = 0;
  *(undefined8 *)(unaff_x19 + 0xe0) = 0;
  *(undefined8 *)(unaff_x19 + 0xf8) = 0;
  *(undefined8 *)(unaff_x19 + 0xf0) = 0;
  *(undefined4 *)(unaff_x19 + 0x100) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0x110) = 0;
  *(undefined8 *)(unaff_x19 + 0x108) = 0;
  *(undefined8 *)(unaff_x19 + 0x120) = 0;
  *(undefined8 *)(unaff_x19 + 0x118) = 0;
  *(undefined4 *)(unaff_x19 + 0x128) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0x138) = 0;
  *(undefined8 *)(unaff_x19 + 0x130) = 0;
  *(undefined8 *)(unaff_x19 + 0x148) = 0;
  *(undefined8 *)(unaff_x19 + 0x140) = 0;
  *(undefined4 *)(unaff_x19 + 0x150) = 0x3f800000;
  *(undefined8 *)(unaff_x19 + 0x160) = 0;
  *(undefined8 *)(unaff_x19 + 0x158) = 0;
  *(undefined8 *)(unaff_x19 + 0x170) = 0;
  *(undefined8 *)(unaff_x19 + 0x168) = 0;
  *(undefined4 *)(unaff_x19 + 0x178) = 0x3f800000;
  FUN_1073af260();
  func_0x00010725b034(unaff_x19 + 0x180);
  *(long *)(unaff_x19 + 400) = unaff_x19;
  *(undefined8 *)(unaff_x19 + 0x198) = **(undefined8 **)(unaff_x19 + 0x180);
  lVar2 = (*(undefined8 **)(unaff_x19 + 0x180))[1];
  *(long *)(unaff_x19 + 0x1a0) = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x00010743b4a0();
    } while (extraout_w10_00 != 0);
  }
  FUN_1073af27c(&uStack_70,0,0);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uStack_68;
  *(ulong *)(unaff_x19 + 0x1a8) = uStack_70;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x00010724b8b8(&uStack_70);
  puVar1 = *(undefined8 **)(unaff_x19 + 0x1a8);
  func_0x00010725b034(unaff_x19 + 0x1b8);
  *(long *)(unaff_x19 + 0x1c8) = unaff_x19;
  puVar3 = *(undefined8 **)(unaff_x19 + 0x1b8);
  lVar2 = puVar3[1];
  uVar4 = *puVar3;
  *(undefined8 *)(unaff_x19 + 0x1d8) = puVar3[1];
  *(undefined8 *)(unaff_x19 + 0x1d0) = uVar4;
  if (lVar2 != 0) {
    do {
      func_0x00010743b4a0();
    } while (extraout_w10_01 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x19 + 0x1e8) = 0;
  *(undefined8 *)(unaff_x19 + 0x1f0) = 0;
  func_0x00010743c1d4();
  *puVar1 = &PTR_FUN_1109afef0;
  puVar1[1] = unaff_x19;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 6) = 0x3f800000;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[7] = 0;
  *(undefined8 **)(unaff_x19 + 0x1f8) = puVar1;
  *(long *)(unaff_x19 + 0x200) = unaff_x19 + 0x180;
  *(undefined8 *)(unaff_x19 + 0x208) = 0;
  *(long *)(unaff_x19 + 0x210) = unaff_x19 + 0x1b8;
  *(undefined1 *)(unaff_x19 + 0x238) = 0;
  *(undefined8 *)(unaff_x19 + 0x220) = 0;
  *(undefined8 *)(unaff_x19 + 0x218) = 0;
  *(undefined8 *)(unaff_x19 + 0x230) = 0;
  *(undefined8 *)(unaff_x19 + 0x228) = 0;
  *(undefined8 *)(unaff_x19 + 0x248) = 0;
  *(undefined8 *)(unaff_x19 + 0x240) = 0;
  *(undefined8 *)(unaff_x19 + 600) = 0;
  *(undefined8 *)(unaff_x19 + 0x250) = 0;
  func_0x00010726ed14(unaff_x19 + 0x260);
  *(long *)(unaff_x19 + 0x270) = unaff_x19;
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  lVar2 = *(long *)(unaff_x19 + 0x18) + 0x800;
  func_0x00010724e2c8(lVar2,&uStack_70);
  *(char *)(unaff_x19 + 0x238) = (char)lVar2;
  return;
}



/* Entry: 107430530; end: 10743064f;  */

void FUN_107430530(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107308dac(param_1 + 0x240,&uStack_30);
  func_0x00010743c310();
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107308dac(param_1 + 0x250,&uStack_30);
  func_0x00010743c310();
  func_0x0001073ada2c(*(undefined8 *)(param_1 + 0x1b8));
  func_0x0001073ada2c(*(undefined8 *)(param_1 + 0x180));
  FUN_107439ff0(param_1 + 0x260);
  func_0x00010730b284(param_1 + 0x250);
  func_0x00010730b284(param_1 + 0x240);
  func_0x00010725b238(param_1 + 0x210);
  func_0x00010725b238(param_1 + 0x200);
  FUN_107439b8c(param_1 + 0x1f8);
  FUN_107439fd0(param_1 + 0x1f0);
  FUN_107439fd0(param_1 + 0x1e8);
  FUN_107439fd0(param_1 + 0x1e0);
  func_0x00010724ae28(param_1 + 0x1d0);
  func_0x00010724b54c(param_1 + 0x1b8);
  func_0x00010724b8b8(param_1 + 0x1a8);
  func_0x00010724ae28(param_1 + 0x198);
  func_0x00010724b54c(param_1 + 0x180);
  FUN_107439f74(param_1 + 0x158);
  FUN_107439ee8(param_1 + 0x130);
  FUN_107439e5c(param_1 + 0x108);
  FUN_107439e00(param_1 + 0xe0);
  func_0x000107439da4(param_1 + 0xb8);
  func_0x000107439d1c(param_1 + 0xa0);
  FUN_107439c94(param_1 + 0x78);
  FUN_107439c38(param_1 + 0x50);
  func_0x000107439bdc(param_1 + 0x28);
  func_0x000107439bb4(param_1 + 0x20);
  func_0x00010724bd50(param_1);
  return;
}



/* Entry: 107430650; end: 1074306bf;  */

void FUN_107430650(long param_1,long *param_2)

{
  undefined1 in_ZR;
  long *unaff_x19;
  long unaff_x20;
  long alStack_40 [2];
  
  func_0x00010743b73c();
  param_1 = param_1 + 0xb8;
  FUN_10743a040(param_1,*param_2 + 0xa8);
  if ((param_1 != 0) && (func_0x00010743c4a8(), (bool)in_ZR)) {
    FUN_1074306c0(alStack_40,param_1 + 0x48);
    func_0x0001073b4a44(alStack_40);
    if (alStack_40[0] != 0) {
      return;
    }
  }
  FUN_1074306fc(unaff_x20 + 0xb8,*unaff_x19 + 0xa8);
  FUN_10743072c();
  return;
}



/* Entry: 1074306c0; end: 1074306fb;  */

void FUN_1074306c0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 1074306fc; end: 10743072b;  */

long FUN_1074306fc(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10743a0dc(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x48;
}



/* Entry: 10743072c; end: 10743074f;  */

undefined8 FUN_10743072c(undefined8 param_1)

{
  FUN_107434140();
  return param_1;
}



/* Entry: 107430750; end: 107431fe3;  */

void FUN_107430750(long param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  long ***ppplVar3;
  long ***ppplVar4;
  long ***ppplVar5;
  undefined4 uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  long *******ppppppplVar21;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long *****ppppplVar22;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long *******extraout_x8_09;
  long *******ppppppplVar23;
  long ******pppppplVar24;
  long ******extraout_x8_10;
  long *******extraout_x9;
  long *******extraout_x9_00;
  long ******pppppplVar25;
  long ******extraout_x9_01;
  int extraout_w10;
  int extraout_w11;
  long ******pppppplVar26;
  ulong extraout_x12;
  long ******pppppplVar27;
  long ******pppppplVar28;
  long ******pppppplVar29;
  long lVar30;
  long lVar31;
  bool bVar32;
  long *******ppppppplVar33;
  long *plVar34;
  long *******ppppppplVar35;
  ulong uVar36;
  long *plVar37;
  long *******ppppppplVar38;
  long *******unaff_x23;
  long ******pppppplVar39;
  long lVar40;
  long *******ppppppplVar41;
  long ***ppplVar42;
  long ******pppppplVar43;
  long *****ppppplVar44;
  long lVar45;
  long ****pppplVar46;
  long *******ppppppplVar47;
  long lStack_210;
  long ******pppppplStack_1f0;
  long ******pppppplStack_1e8;
  long ******pppppplStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  ulong uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  char cStack_130;
  long ******pppppplStack_120;
  long lStack_118;
  long ******pppppplStack_110;
  undefined4 uStack_108;
  undefined1 uStack_104;
  long *****ppppplStack_100;
  long *****ppppplStack_f8;
  uint uStack_e8;
  uint uStack_e4;
  long ******pppppplStack_e0;
  long ******pppppplStack_d8;
  long ******pppppplStack_d0;
  long ******pppppplStack_c8;
  long ****pppplStack_c0;
  long ****pppplStack_b8;
  undefined1 uStack_b0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  long **pplStack_28;
  undefined8 uStack_18;
  
  func_0x00010743c598();
  lVar17 = param_1;
  func_0x00010743b2e8();
  uStack_18 = extraout_x8;
  if (*(long *)(lVar17 + 0x1e0) == 0) {
    pppppplStack_120 = (long ******)CONCAT44(pppppplStack_120._4_4_,0xffffffff);
    func_0x00010743b6f4();
    uStack_1c0 = CONCAT35(uStack_1c0._5_3_,0x1010303);
    func_0x00010743b5d4();
    func_0x00010743bbd4();
    uVar36 = uStack_198;
    uStack_198 = 0;
    lVar45 = lVar17 + 0x1e0;
    FUN_1074301b4(lVar45,uVar36);
    func_0x00010743c258();
    func_0x00010743be6c();
    if (lVar45 != 0) {
      func_0x00010743b2a4();
    }
    func_0x00010743be9c();
    param_1 = lVar17;
  }
  if (*(long *)(param_1 + 0x1e8) == 0) {
    pppppplStack_120 = (long ******)CONCAT44(pppppplStack_120._4_4_,0xff000000);
    func_0x00010743b6f4();
    uStack_1c0 = CONCAT35(uStack_1c0._5_3_,0x1010303);
    func_0x00010743b5d4();
    func_0x00010743bbd4();
    uVar36 = uStack_198;
    uStack_198 = 0;
    lVar45 = lVar17 + 0x1e8;
    FUN_1074301b4(lVar45,uVar36);
    func_0x00010743c258();
    func_0x00010743be6c();
    if (lVar45 != 0) {
      func_0x00010743b2a4();
    }
    func_0x00010743be9c();
    param_1 = lVar17;
  }
  if (*(long *)(param_1 + 0x1f0) == 0) {
    pppppplStack_120 = (long ******)CONCAT44(pppppplStack_120._4_4_,0xffff0000);
    func_0x00010743b6f4();
    uStack_1c0 = CONCAT35(uStack_1c0._5_3_,0x1010303);
    func_0x00010743b5d4();
    func_0x00010743bbd4();
    uVar36 = uStack_198;
    uStack_198 = 0;
    lVar45 = lVar17 + 0x1f0;
    FUN_1074301b4(lVar45,uVar36);
    func_0x00010743c258();
    func_0x00010743be6c();
    if (lVar45 != 0) {
      func_0x00010743b2a4();
    }
    func_0x00010743be9c();
    param_1 = lVar17;
  }
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3f800000;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  uStack_1c8 = 0;
  pppppplStack_1f0 = (long ******)0x0;
  pppppplStack_1e8 = (long ******)0x0;
  pppppplStack_1e0 = (long ******)0x0;
  lVar45 = *(long *)(param_1 + 0x18);
  cVar8 = *(char *)(param_1 + 0x238);
  pppppplStack_e0 = (long ******)((ulong)pppppplStack_e0 & 0xffffffffffffff00);
  pppppplVar43 = (long ******)(lVar45 + 0xab0);
  func_0x00010724e2c8(pppppplVar43,&pppppplStack_e0);
  iVar15 = (int)pppppplVar43;
  ppppppplVar33 = (long *******)0x0;
  ppppppplVar38 = *(long ********)(param_1 + 200);
  while (ppppppplVar38 != (long *******)0x0) {
    if (*(int *)(ppppppplVar38 + 0xb) == 1) {
      ppppppplVar47 = ppppppplVar38 + 9;
      FUN_1074306c0(&ppppplStack_100);
      if ((long ******)ppppplStack_100 == (long ******)0x0) {
        func_0x00010724ef84(&pppppplStack_e0,ppppppplVar38 + 2);
        func_0x0001000fecf4(&lStack_1d8,&pppppplStack_e0);
        ppppppplVar38 = &pppppplStack_e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x00010743c304();
      }
      else {
        if ((*ppppplStack_100 == ppppplStack_100[1]) && (ppppplStack_100[3] == ppppplStack_100[4]))
        {
          bVar32 = false;
        }
        else {
          lStack_118 = 0;
          pppppplStack_110 = (long ******)0x0;
          pppppplStack_120 = (long ******)0x0;
          lVar30 = (long)ppppplStack_100[1] - (long)*ppppplStack_100;
          if (lVar30 != 0) {
            ppppppplVar47 = &pppppplStack_120;
            FUN_107427ef4(ppppppplVar47,lVar30 / 0x88);
            FUN_107427f9c(&pppppplStack_e0,ppppppplVar47,
                          (lStack_118 - (long)pppppplStack_120) / 0x88,&pppppplStack_110);
            ppppppplVar47 = (long *******)((long)pppppplStack_d0 + lVar30);
            unaff_x23 = (long *******)pppppplStack_d0;
            for (; lVar30 != 0; lVar30 = lVar30 + -0x88) {
              FUN_107434458(unaff_x23);
              unaff_x23 = unaff_x23 + 0x11;
            }
            pppppplStack_d0 = (long ******)ppppppplVar47;
            FUN_107427f3c(&pppppplStack_120,&pppppplStack_e0);
            ppppppplVar47 = &pppppplStack_e0;
            func_0x000107428160();
          }
          lVar30 = 0;
          lVar31 = 0;
          for (uVar36 = 0; ppppplVar22 = (long *****)*ppppplStack_100,
              uVar36 < (ulong)(((long)ppppplStack_100[1] - (long)ppppplVar22) / 0x88);
              uVar36 = uVar36 + 1) {
            unaff_x23 = (long *******)((long)ppppplVar22 + lVar30);
            if (*(int *)(unaff_x23 + 8) == 0) {
              FUN_10743449c(unaff_x23);
              puVar1 = (uint *)((long)ppppplVar22 + lVar30);
              if ((char)puVar1[0x20] == '\x01') {
                FUN_107434274(unaff_x23);
              }
              lVar40 = (ulong)*puVar1 * (ulong)puVar1[1] * 4;
            }
            else {
              FUN_1074344d8(unaff_x23);
              if ((*(char *)((long)ppppplVar22 + lVar30 + 0x80) == '\x01') &&
                 (0xd < *(byte *)((long)ppppplVar22 + lVar30 + 8) - 3)) {
                *(undefined1 *)((long)ppppplVar22 + lVar30 + 0x18) = 1;
              }
              lVar40 = *(long *)((long)ppppplVar22 + lVar30 + 0x10);
            }
            lVar2 = (long)pppppplStack_120 + lVar30;
            FUN_10742a7d4(lVar2,unaff_x23);
            ppppppplVar47 = (long *******)(lVar2 + 0x48);
            func_0x000104c2f1f0(ppppppplVar47,(long)ppppplVar22 + lVar30 + 0x48);
            *(undefined1 *)(lVar2 + 0x80) = *(undefined1 *)((long)ppppplVar22 + lVar30 + 0x80);
            lVar31 = lVar40 + lVar31;
            lVar30 = lVar30 + 0x88;
          }
          lVar30 = 0x260;
          for (lVar40 = ((long)ppppplStack_100[0xd] - (long)ppppplStack_100[0xc]) / 0x288;
              lVar40 != 0; lVar40 = lVar40 + -1) {
            func_0x00010743b950();
            func_0x00010743ba60();
            func_0x00010743bea4();
            func_0x00010743b83c();
            if (((ulong)unaff_x23 & 1) == 0) {
              func_0x00010743b950();
              func_0x00010743ba60();
              func_0x00010743b830();
              uVar6 = *(undefined4 *)(extraout_x8_00 + lVar30 + -0x1c8);
              *(undefined1 *)((long)ppppppplVar47 + 4) =
                   *(undefined1 *)(extraout_x8_00 + lVar30 + -0x1c4);
              *(undefined4 *)ppppppplVar47 = uVar6;
              func_0x00010743ba40();
            }
            func_0x00010743b950();
            func_0x00010743ba60();
            func_0x00010743bea4();
            func_0x00010743b83c();
            if (((ulong)unaff_x23 & 1) == 0) {
              func_0x00010743b950();
              func_0x00010743ba60();
              func_0x00010743b830();
              uVar6 = *(undefined4 *)(extraout_x8_01 + lVar30 + -0x130);
              *(undefined1 *)((long)ppppppplVar47 + 4) =
                   *(undefined1 *)(extraout_x8_01 + lVar30 + -300);
              *(undefined4 *)ppppppplVar47 = uVar6;
              func_0x00010743ba40();
            }
            func_0x00010743b950();
            func_0x00010743ba60();
            func_0x00010743bea4();
            func_0x00010743b83c();
            if (((ulong)unaff_x23 & 1) == 0) {
              func_0x00010743b950();
              func_0x00010743ba60();
              func_0x00010743b830();
              uVar6 = *(undefined4 *)(extraout_x8_02 + lVar30 + -0x90);
              *(undefined1 *)((long)ppppppplVar47 + 4) =
                   *(undefined1 *)(extraout_x8_02 + lVar30 + -0x8c);
              *(undefined4 *)ppppppplVar47 = uVar6;
              func_0x00010743ba40();
            }
            func_0x00010743b950();
            func_0x00010743ba60();
            func_0x00010743bea4();
            func_0x00010743b83c();
            if (((ulong)unaff_x23 & 1) == 0) {
              func_0x00010743b950();
              func_0x00010743ba60();
              func_0x00010743b830();
              uVar6 = *(undefined4 *)(extraout_x8_03 + lVar30);
              *(undefined1 *)((long)ppppppplVar47 + 4) =
                   *(undefined1 *)((undefined4 *)(extraout_x8_03 + lVar30) + 1);
              *(undefined4 *)ppppppplVar47 = uVar6;
              func_0x00010743ba40();
            }
            lVar30 = lVar30 + 0x288;
          }
          pppppplStack_e0 = (long ******)((ulong)pppppplStack_e0 & 0xffffffffffffff00);
          unaff_x23 = (long *******)(lVar45 + 0xe0);
          func_0x00010724e2c8(unaff_x23,&pppppplStack_e0);
          lVar40 = 0;
          lVar30 = 0x260;
          for (uVar36 = 0; ppppplVar44 = ppppplStack_100,
              ppppplVar22 = (long *****)ppppplStack_100[3],
              uVar36 < (ulong)((long)ppppplStack_100[4] - (long)ppppplVar22 >> 5);
              uVar36 = uVar36 + 1) {
            if (*(char *)((long)ppppplVar22 + lVar40 + 4) == '\x01') {
              func_0x000107312278();
              func_0x00010743b5b0();
              func_0x00010743b708();
              func_0x00010743b668();
              func_0x00010743c454(extraout_x8_04 + -0x260);
              FUN_10742c2b4();
              func_0x00010743bbe0();
              ppppplVar22 = (long *****)ppppplStack_100[3];
            }
            if (*(char *)((long)ppppplVar22 + lVar40 + 0xc) == '\x01') {
              func_0x000107312278((long)ppppplVar22 + lVar40 + 8);
              func_0x00010743b5b0();
              func_0x00010743b708();
              func_0x00010743b668();
              func_0x00010743c454(extraout_x8_05 + -0x260);
              func_0x00010742c33c();
              func_0x00010743bbe0();
              ppppplVar22 = (long *****)ppppplStack_100[3];
            }
            if (*(char *)((long)ppppplVar22 + lVar40 + 0x14) == '\x01') {
              func_0x000107312278((long)ppppplVar22 + lVar40 + 0x10);
              func_0x00010743b5b0();
              func_0x00010743b708();
              func_0x00010743b668();
              func_0x00010743c454(extraout_x8_06 + -0x260);
              func_0x00010742c370();
              func_0x00010743bbe0();
              ppppplVar22 = (long *****)ppppplStack_100[3];
            }
            if (*(char *)((long)ppppplVar22 + lVar40 + 0x1c) == '\x01') {
              func_0x000107312278((long)ppppplVar22 + lVar40 + 0x18);
              func_0x00010743b5b0();
              FUN_10743429c(&pppppplStack_e0,param_2,ppppplVar44,extraout_x8_07 + lVar30,0);
              func_0x00010743b668();
              func_0x00010743c454(extraout_x8_08 + -0x260);
              func_0x00010742c3a4();
              func_0x00010743bbe0();
            }
            lVar30 = lVar30 + 0x288;
            lVar40 = lVar40 + 0x20;
          }
          ppppplStack_100[0x28] = (long ****)((long)ppppplStack_100[0x28] + lVar31);
          pppppplStack_c8 = (long ******)0x0;
          pppppplStack_d0 = (long ******)0x0;
          pppplStack_b8 = (long ****)0x0;
          pppplStack_c0 = (long ****)0x0;
          pppppplStack_d8 = (long ******)0x0;
          pppppplStack_e0 = (long ******)0x0;
          pppppplVar43 = (long ******)0x0;
          pppppplVar39 = (long ******)0x0;
          pppppplVar24 = (long ******)0x0;
          if ((long *****)*ppppplStack_100 != (long *****)0x0) {
            FUN_107425f00(ppppplStack_100);
            __ZdlPv(*ppppplVar44);
            *ppppplVar44 = (long ****)0x0;
            ppppplVar44[1] = (long ****)0x0;
            ppppplVar44[2] = (long ****)0x0;
            pppppplVar43 = pppppplStack_d0;
            pppppplVar39 = pppppplStack_e0;
            pppppplVar24 = pppppplStack_d8;
          }
          ppppplVar44[1] = (long ****)pppppplVar24;
          *ppppplVar44 = (long ****)pppppplVar39;
          ppppplVar44[2] = (long ****)pppppplVar43;
          pppppplStack_e0 = (long ******)0x0;
          pppppplStack_d8 = (long ******)0x0;
          pppppplStack_d0 = (long ******)0x0;
          if ((long *****)ppppplVar44[3] != (long *****)0x0) {
            ppppplVar44[4] = ppppplVar44[3];
            __ZdlPv();
            ppppplVar44[3] = (long ****)0x0;
            ppppplVar44[4] = (long ****)0x0;
            ppppplVar44[5] = (long ****)0x0;
          }
          ppppplVar44[4] = pppplStack_c0;
          ppppplVar44[3] = (long ****)pppppplStack_c8;
          ppppplVar44[5] = pppplStack_b8;
          pppppplStack_c8 = (long ******)0x0;
          pppplStack_c0 = (long ****)0x0;
          pppplStack_b8 = (long ****)0x0;
          func_0x000107425e44(&pppppplStack_e0);
          FUN_107425ea4(&pppppplStack_120);
          bVar32 = true;
        }
        if (iVar15 != 0) {
          ppppppplVar47 = (long *******)ppppplStack_100[0xd];
          for (unaff_x23 = (long *******)ppppplStack_100[0xc]; unaff_x23 != ppppppplVar47;
              unaff_x23 = unaff_x23 + 0x51) {
            if (unaff_x23[0x4f] == (long ******)0x0) {
              plVar37 = param_2;
              (**(code **)(*param_2 + 0x38))(param_2);
              FUN_10742c404(unaff_x23,plVar37);
            }
          }
        }
        ppppplVar44 = (long *****)ppppplStack_100[10];
        for (ppppplVar22 = (long *****)ppppplStack_100[9]; ppppplVar22 != ppppplVar44;
            ppppplVar22 = ppppplVar22 + 0x12) {
          ppppppplVar47 = (long *******)ppppplVar22[4];
          for (pppplVar46 = ppppplVar22[3] + 0x17; unaff_x23 = (long *******)(pppplVar46 + -0x17),
              unaff_x23 != ppppppplVar47; pppplVar46 = pppplVar46 + 0x3e) {
            if ((unaff_x23 != (long *******)0x0) && (*(int *)(pppplVar46 + 1) == 0)) {
              if (cVar8 != '\0') {
                ppppppplVar21 = (long *******)(pppplVar46 + 2);
                if (*(char *)(pppplVar46 + 0x12) == '\x01') {
                  uVar7 = *(uint *)(pppplVar46 + -0x13);
                  if (*(int *)(pppplVar46 + 6) != -1 || uVar7 != 0xffffffff) {
                    if (uVar7 == 0xffffffff) {
                      FUN_107425d60(ppppppplVar21);
                    }
                    else {
                      pppppplStack_e0 = (long ******)ppppppplVar21;
                      (*(code *)(&PTR_FUN_1109af5d0)[uVar7])
                                (&pppppplStack_e0,ppppppplVar21,unaff_x23);
                    }
                  }
                  FUN_107429b50(pppplVar46 + 7,pppplVar46 + -0x12);
                  cVar9 = *(char *)(pppplVar46 + 0xd);
                  if (cVar9 == *(char *)(pppplVar46 + -0xc)) {
                    if (cVar9 != '\0') {
                      FUN_107429654(pppplVar46 + 10);
                    }
                  }
                  else if (cVar9 == '\0') {
                    FUN_1074348f0(pppplVar46 + 10,pppplVar46 + -0xf);
                  }
                  else {
                    func_0x000107429cb4(pppplVar46 + 10);
                  }
                  cVar9 = *(char *)(pppplVar46 + 0x11);
                  if (cVar9 == *(char *)(pppplVar46 + -8)) {
                    if (cVar9 != '\0') {
                      FUN_10742986c(pppplVar46 + 0xe);
                    }
                  }
                  else if (cVar9 == '\0') {
                    FUN_10743498c(pppplVar46 + 0xe,pppplVar46 + -0xb);
                  }
                  else {
                    func_0x000107429cd8(pppplVar46 + 0xe);
                  }
                }
                else {
                  *(undefined1 *)(pppplVar46 + 2) = 0;
                  *(undefined4 *)(pppplVar46 + 6) = 0xffffffff;
                  FUN_107425d60(ppppppplVar21);
                  uVar7 = *(uint *)(pppplVar46 + -0x13);
                  if (uVar7 != 0xffffffff) {
                    pppppplStack_e0 = (long ******)ppppppplVar21;
                    (*(code *)(&PTR_FUN_1109af5e0)[uVar7])(&pppppplStack_e0,unaff_x23);
                    *(uint *)(pppplVar46 + 6) = uVar7;
                  }
                  pppppplStack_e0 = (long ******)(pppplVar46 + 7);
                  *pppppplStack_e0 = (long *****)0x0;
                  pppplVar46[8] = (long ***)0x0;
                  pppplVar46[9] = (long ***)0x0;
                  ppplVar3 = pppplVar46[-0x12];
                  pppppplStack_d8 = (long ******)((ulong)pppppplStack_d8 & 0xffffffffffffff00);
                  lVar30 = (long)pppplVar46[-0x11] - (long)ppplVar3;
                  if (lVar30 != 0) {
                    func_0x000107429c6c(pppppplStack_e0,lVar30 / 0x18);
                    ppplVar42 = pppplVar46[8];
                    _memmove(ppplVar42,ppplVar3,lVar30);
                    pppplVar46[8] = (long ***)((long)ppplVar42 + lVar30);
                  }
                  pppppplStack_d8 = (long ******)CONCAT71(pppppplStack_d8._1_7_,1);
                  FUN_107434a38(&pppppplStack_e0);
                  *(undefined1 *)(pppplVar46 + 10) = 0;
                  *(undefined1 *)(pppplVar46 + 0xd) = 0;
                  if (*(char *)(pppplVar46 + -0xc) == '\x01') {
                    FUN_1074348f0(pppplVar46 + 10,pppplVar46 + -0xf);
                  }
                  *(undefined1 *)(pppplVar46 + 0xe) = 0;
                  *(undefined1 *)(pppplVar46 + 0x11) = 0;
                  if (*(char *)(pppplVar46 + -8) == '\x01') {
                    FUN_10743498c(pppplVar46 + 0xe,pppplVar46 + -0xb);
                  }
                  *(undefined1 *)(pppplVar46 + 0x12) = 1;
                }
              }
              ppppppplVar21 = unaff_x23;
              FUN_10742c9d8();
              if ((((ulong)ppppppplVar21 & 1) == 0) && (*(int *)(pppplVar46 + 0x13) != 0)) {
                ppppppplVar21 = unaff_x23;
                FUN_10742c918();
                ppplVar3 = pppplVar46[-0x12];
                ppplVar42 = pppplVar46[-0x11];
                ppppppplVar41 = unaff_x23;
                func_0x00010742ca14(unaff_x23);
                FUN_1073da574(&pppppplStack_120,param_2,ppppppplVar41,1);
                func_0x00010743bc8c(param_2);
                FUN_1073da3e8(param_2,0xad,(long)pppplVar46[-0x11] - (long)pppplVar46[-0x12]);
                lVar30 = (long)pppplVar46[-0x11] - (long)pppplVar46[-0x12];
                (**(code **)(*param_2 + 0x40))(&uStack_e8,param_2,pppplVar46[-0x12],lVar30,1);
                cVar9 = *(char *)(pppplVar46 + -0xc);
                if (cVar9 != '\x01') {
                  uStack_160 = uStack_160 & 0xffffffffffffff00;
                }
                else {
                  func_0x00010743bc8c(param_2);
                  func_0x00010743c290();
                  ppplVar4 = pppplVar46[-0xf];
                  ppplVar5 = pppplVar46[-0xe];
                  func_0x00010743bd80();
                  uStack_138 = CONCAT44(uStack_e4,uStack_e8);
                  uStack_160 = (long)ppplVar5 - (long)ppplVar4 >> 3;
                  uStack_158 = CONCAT71(uStack_158._1_7_,1);
                  uStack_150 = 8;
                  uStack_148 = CONCAT71(uStack_148._1_7_,1);
                }
                cStack_130 = cVar9 == '\x01';
                cVar9 = *(char *)(pppplVar46 + -8);
                if (cVar9 != '\x01') {
                  uStack_198 = uStack_198 & 0xffffffffffffff00;
                }
                else {
                  func_0x00010743bc8c(param_2);
                  func_0x00010743c290();
                  ppplVar4 = pppplVar46[-0xb];
                  ppplVar5 = pppplVar46[-10];
                  func_0x00010743bd80();
                  uStack_198 = (long)ppplVar5 - (long)ppplVar4 >> 3;
                  uStack_170 = CONCAT44(uStack_e4,uStack_e8);
                  uStack_190 = CONCAT71(uStack_190._1_7_,1);
                  lStack_188 = 8;
                  uStack_180 = 1;
                }
                pppppplStack_d0 = pppppplStack_110;
                uVar13 = uStack_138;
                uVar12 = uStack_170;
                uStack_168 = cVar9 == '\x01';
                pppppplStack_e0 = pppppplStack_120;
                pppppplStack_d8 =
                     (long ******)CONCAT71(pppppplStack_d8._1_7_,(undefined1)lStack_118);
                pppppplStack_110 = (long ******)0x0;
                pppppplStack_c8 = (long ******)(lVar30 / 0x18);
                pppplStack_c0 = (long ****)CONCAT71(pppplStack_c0._1_7_,1);
                pppplStack_b8 = (long ****)0x18;
                uStack_b0 = 1;
                uStack_98 = uStack_98 & 0xffffffffffffff00;
                uStack_68 = cStack_130 != '\0';
                if ((bool)uStack_68) {
                  uStack_90 = uStack_158;
                  uStack_98 = uStack_160;
                  uStack_80 = uStack_148;
                  uStack_88 = uStack_150;
                  uStack_78 = (undefined4)uStack_140;
                  uStack_138 = 0;
                  uStack_70 = uVar13;
                }
                uStack_60 = uStack_60 & 0xffffffffffffff00;
                if ((bool)uStack_168) {
                  uStack_48 = CONCAT71(uStack_17f,uStack_180);
                  uStack_58 = uStack_190;
                  uStack_60 = uStack_198;
                  lStack_50 = lStack_188;
                  uStack_40 = uStack_178;
                  uStack_170 = 0;
                  uStack_38 = uVar12;
                }
                uStack_30 = uStack_168;
                func_0x00010730b13c(&uStack_198);
                func_0x00010730b13c(&uStack_160);
                if ((long *******)pppppplStack_110 != (long *******)0x0) {
                  func_0x00010743b2a4();
                }
                lVar30 = ((long)ppplVar42 - (long)ppplVar3) + (long)ppppppplVar21;
                if (*(char *)(pppplVar46 + -0xc) == '\x01') {
                  lVar30 = (long)pppplVar46[-0xe] + (lVar30 - (long)pppplVar46[-0xf]);
                }
                if (*(char *)(pppplVar46 + -8) == '\x01') {
                  lVar30 = (long)pppplVar46[-10] + (lVar30 - (long)pppplVar46[-0xb]);
                }
                if (*(int *)(pppplVar46 + 1) == 1) {
                  func_0x00010730afe0(unaff_x23,&pppppplStack_e0);
                  func_0x00010730af34(pppplVar46 + -0x14,&pppppplStack_c8);
                  FUN_107434a64(pppplVar46 + -0xe,&uStack_98);
                  FUN_107434a64(pppplVar46 + -7,&uStack_60);
                  *pppplVar46 = (long ***)pplStack_28;
                }
                else {
                  FUN_107425db4(unaff_x23);
                  FUN_107429f88(unaff_x23,&pppppplStack_e0);
                  *(undefined4 *)(pppplVar46 + 1) = 1;
                }
                ppppplStack_100[0x28] = (long ****)((long)ppppplStack_100[0x28] + lVar30);
                func_0x000107425e08(&pppppplStack_e0);
              }
              bVar32 = true;
            }
          }
        }
        if (bVar32) {
          if (pppppplStack_1e8 < pppppplStack_1e0) {
            pppppplStack_1e8[1] = ppppplStack_f8;
            *pppppplStack_1e8 = ppppplStack_100;
            ppppppplVar47 = (long *******)pppppplStack_1e8;
            if ((long ******)ppppplStack_f8 != (long ******)0x0) {
              do {
                func_0x00010743bfcc();
                ppppppplVar47 = extraout_x8_09;
              } while (extraout_w11 != 0);
            }
            pppppplStack_1e8 = (long ******)(ppppppplVar47 + 2);
          }
          else {
            ppppppplVar47 = &pppppplStack_1f0;
            FUN_1073b4a6c(ppppppplVar47,((long)pppppplStack_1e8 - (long)pppppplStack_1f0 >> 4) + 1);
            FUN_1073b4ac0(&pppppplStack_e0,ppppppplVar47,
                          (long)pppppplStack_1e8 - (long)pppppplStack_1f0 >> 4,&pppppplStack_1e0);
            pppppplStack_d0[1] = ppppplStack_f8;
            *pppppplStack_d0 = ppppplStack_100;
            if ((long ******)ppppplStack_f8 != (long ******)0x0) {
              do {
                func_0x00010743b4a0();
              } while (extraout_w10 != 0);
            }
            pppppplStack_d0 = pppppplStack_d0 + 2;
            unaff_x23 = (long *******)
                        ((long)pppppplStack_d8 - ((long)pppppplStack_1e8 - (long)pppppplStack_1f0));
            _memcpy(unaff_x23);
            pppppplVar39 = pppppplStack_d0;
            pppppplVar43 = pppppplStack_1e0;
            pppppplStack_1e0 = pppppplStack_c8;
            pppppplStack_1e8 = pppppplStack_d0;
            pppppplStack_d0 = pppppplStack_1f0;
            pppppplStack_c8 = pppppplVar43;
            pppppplStack_e0 = pppppplStack_1f0;
            pppppplStack_d8 = pppppplStack_1f0;
            pppppplStack_1f0 = (long ******)unaff_x23;
            FUN_1073b4b48(&pppppplStack_e0);
            pppppplStack_1e8 = pppppplVar39;
          }
        }
        ppppppplVar38 = (long *******)*ppppppplVar38;
        ppppppplVar33 = (long *******)((long)ppppplStack_100[0x28] + (long)ppppppplVar33);
        param_1 = lVar17;
      }
      pppppplVar43 = &ppppplStack_100;
      func_0x0001073b4a44();
    }
    else {
      ppppppplVar38 = (long *******)*ppppppplVar38;
    }
  }
  *(long ********)(param_1 + 0x220) = ppppppplVar33;
  lStack_210 = 0;
  plVar37 = *(long **)(param_1 + 0xf0);
LAB_107431450:
  do {
    if (plVar37 == (long *)0x0) {
      lVar45 = 0;
      *(long *)(param_1 + 0x228) = lStack_210;
      plVar37 = *(long **)(param_1 + 0x140);
      while (plVar37 != (long *)0x0) {
        if ((int)plVar37[0xb] == 1) {
          func_0x000107434d58(&uStack_198,plVar37 + 9);
          if (uStack_198 == 0) {
            plVar34 = (long *)(lVar17 + 0x130);
            func_0x000107434d94(plVar34,plVar37);
          }
          else {
            plVar34 = (long *)(uStack_198 + 0x10);
            while (plVar34 = (long *)*plVar34, plVar34 != (long *)0x0) {
              iVar15 = *(int *)(plVar34 + 0x13);
              if (iVar15 == 0) {
                if (*(int *)(plVar34 + 0x12) == 0) {
                  FUN_10743449c(plVar34 + 10);
                  uVar7 = *(uint *)(plVar34 + 10);
                  uVar11 = *(uint *)((long)plVar34 + 0x54);
                  lVar30 = (long)(plVar34 + 10);
                  FUN_107434274();
                  func_0x00010743c208();
                  if (lVar30 == 0) {
                    pppppplStack_120 = (long ******)((ulong)pppppplStack_120 & 0xffffff0000000000);
                  }
                  else {
                    func_0x00010743c3c8();
                  }
                  func_0x00010743c0f0();
                  FUN_107432024();
                  func_0x00010743bb44((ulong)uVar7 * (ulong)uVar11);
                }
                else {
                  lVar30 = (long)(plVar34 + 10);
                  FUN_1074344d8();
                  if (0xd < *(byte *)(plVar34 + 0xb) - 3) {
                    *(undefined1 *)(plVar34 + 0xd) = 1;
                  }
                  ppppppplVar38 = (long *******)plVar34[0xc];
                  func_0x00010743c208();
                  if (lVar30 == 0) {
                    pppppplStack_120 = (long ******)((ulong)pppppplStack_120 & 0xffffff0000000000);
                  }
                  else {
                    func_0x00010743c3c8();
                  }
                  func_0x00010743c0f0();
                  FUN_1073da708();
                  func_0x00010743bd9c();
                  pppppplStack_d0 = (long ******)extraout_x9_00;
                  pppppplStack_c8 = (long ******)ppppppplVar38;
                }
                lVar30 = (long)(plVar34 + 9);
                FUN_107434b0c(lVar30,&pppppplStack_e0);
                func_0x00010743c428();
                if (lVar30 != 0) {
                  func_0x00010743b2a4();
                }
                func_0x00010743be6c();
                if (lVar30 != 0) {
                  func_0x00010743b2a4();
                }
                iVar15 = *(int *)(plVar34 + 0x13);
              }
              if (iVar15 == 1) {
                lVar45 = plVar34[0xd] + lVar45;
              }
            }
            plVar34 = (long *)*plVar37;
            ppppppplVar33 = (long *******)0x0;
          }
          FUN_10742ac74(&uStack_198);
          plVar37 = plVar34;
        }
        else {
          plVar37 = (long *)*plVar37;
        }
      }
      *(long *)(lVar17 + 0x230) = lVar45;
      ppppppplVar38 = *(long ********)(lVar17 + 0x1f8);
      pppppplVar43 = ppppppplVar38[7];
      pppppplVar39 = ppppppplVar38[8];
      do {
        if (pppppplVar43 == pppppplVar39) {
          FUN_107434094(ppppppplVar38 + 7);
          if (pppppplStack_1f0 != pppppplStack_1e8) {
            func_0x00010743be8c();
            ppppppplVar38 = &pppppplStack_d8;
            ppppppplVar33 = (long *******)pppppplStack_e0;
            while (ppppppplVar33 != ppppppplVar38) {
              (*(code *)(*ppppppplVar33[4])[2])(ppppppplVar33[4],&pppppplStack_1f0);
              func_0x00010002c7d4();
            }
            FUN_107439d1c(&pppppplStack_e0);
          }
          uVar14 = lStack_1d8 == lStack_1d0;
          if (!(bool)uVar14) {
            func_0x00010743be8c();
            ppppppplVar33 = &pppppplStack_d8;
            ppppppplVar38 = (long *******)pppppplStack_e0;
            while (uVar14 = ppppppplVar38 == ppppppplVar33, !(bool)uVar14) {
              (*(code *)(*ppppppplVar38[4])[3])(ppppppplVar38[4],&lStack_1d8);
              func_0x00010002c7d4();
            }
            FUN_107439d1c(&pppppplStack_e0);
          }
          FUN_1073b4994(&pppppplStack_1f0);
          func_0x0001000e30f4(&lStack_1d8);
          FUN_107434fe8(&uStack_1c0);
          func_0x00010743b264(uStack_18);
          if ((bool)uVar14) {
            return;
          }
          ___stack_chk_fail();
          func_0x00010743bab4();
          func_0x000107434d24();
          func_0x000107435084(&ppppplStack_100);
          FUN_1073b4994(&pppppplStack_1f0);
          func_0x0001000e30f4(&lStack_1d8);
          FUN_107434fe8(&uStack_1c0);
          func_0x00010743b660();
          func_0x00010743c1b0();
          pppppplVar43 = (long ******)0x18;
          __Znwm();
          *pppppplVar43 = (long *****)*ppppppplVar38;
          *(undefined8 *)((long)pppppplVar43 + 5) = *(undefined8 *)((long)ppppppplVar38 + 5);
          pppppplVar39 = ppppppplVar38[2];
          ppppppplVar38[2] = (long ******)0x0;
          pppppplVar43[2] = (long *****)pppppplVar39;
          *ppppppplVar33 = pppppplVar43;
          return;
        }
        ppppppplVar33 = (long *******)*pppppplVar43;
        uStack_198 = 0;
        uStack_190 = 0;
        if (ppppppplVar33 != (long *******)0x0) {
          if (*(int *)(ppppppplVar33 + 10) == 1) {
            func_0x000107434780(&pppppplStack_e0,ppppppplVar33 + 1);
            func_0x000107433f40(&uStack_198,&pppppplStack_e0);
            func_0x00010743bbe0();
          }
          else if (*(int *)(ppppppplVar33 + 10) == 0) {
            if (*(int *)(ppppppplVar33 + 9) == 0) {
              FUN_10743449c(ppppppplVar33 + 1);
              func_0x00010743c3b4(param_2);
              func_0x00010743c538();
              FUN_107432024();
              func_0x00010743c2dc();
            }
            else {
              FUN_1074344d8(ppppppplVar33 + 1);
              func_0x00010743c3b4(param_2);
              func_0x00010743c538();
              FUN_1073da708();
              func_0x00010743c2dc();
            }
            func_0x000107433f40(&uStack_198,&uStack_160);
            puVar20 = &uStack_160;
            func_0x0001073bca64();
            func_0x00010743c428();
            if (puVar20 != (ulong *)0x0) {
              func_0x00010743b2a4();
            }
          }
          if (((uStack_198 != 0) &&
              (ppppppplVar47 = (long *******)ppppppplVar38[3], ppppppplVar47 != (long *******)0x0))
             && (ppppppplVar38[5] != (long ******)0x0)) {
            ppppplVar22 = *pppppplVar43;
            ppppppplVar21 = ppppppplVar38 + 5;
            func_0x00010726364c(ppppppplVar21,ppppplVar22 + 0xb);
            uVar36 = (long)ppppppplVar47 - 1;
            if (((ulong)ppppppplVar47 & uVar36) == 0) {
              ppppppplVar41 = (long *******)((ulong)ppppppplVar21 & uVar36);
            }
            else {
              ppppppplVar41 = ppppppplVar21;
              if (ppppppplVar47 <= ppppppplVar21) {
                uVar18 = 0;
                if (ppppppplVar47 != (long *******)0x0) {
                  uVar18 = (ulong)ppppppplVar21 / (ulong)ppppppplVar47;
                }
                ppppppplVar41 = (long *******)((long)ppppppplVar21 - uVar18 * (long)ppppppplVar47);
              }
            }
            ppppppplVar33 = (long *******)0x0;
            ppppppplVar35 = (long *******)ppppppplVar38[2][(long)ppppppplVar41];
            if ((long *******)ppppppplVar38[2][(long)ppppppplVar41] != (long *******)0x0) {
LAB_107431ac4:
              while (ppppppplVar33 = (long *******)*ppppppplVar35,
                    ppppppplVar33 != (long *******)0x0) {
                ppppppplVar23 = (long *******)ppppppplVar33[1];
                ppppppplVar35 = ppppppplVar33;
                if (ppppppplVar23 != ppppppplVar21) goto LAB_107431aec;
                ppppppplVar23 = ppppppplVar33 + 2;
                func_0x000104c32db4(ppppppplVar23,ppppplVar22 + 0xb);
                if ((int)ppppppplVar23 != 0) {
                  pppppplVar25 = ppppppplVar33[10];
                  for (pppppplVar24 = ppppppplVar33[9]; pppppplVar24 != pppppplVar25;
                      pppppplVar24 = pppppplVar24 + 0xf) {
                    if (*(char *)(pppppplVar24[0xe] + 0x10) == '\x01') {
                      ppppplVar22 = pppppplVar24[0xe] + 9;
                      func_0x000104c32db4(ppppplVar22,*pppppplVar43 + 0xb);
                      if ((int)ppppplVar22 != 0) {
                        func_0x00010742c2e8(pppppplVar24[0xe],&uStack_198);
                      }
                    }
                  }
                  pppppplVar25 = ppppppplVar38[3];
                  pppppplVar24 = ppppppplVar33[1];
                  uVar36 = (long)pppppplVar25 - 1;
                  if (((ulong)pppppplVar25 & uVar36) == 0) {
                    pppppplVar24 = (long ******)(uVar36 & (ulong)pppppplVar24);
                  }
                  else if (pppppplVar25 <= pppppplVar24) {
                    func_0x00010743c114();
                    pppppplVar24 = extraout_x8_10;
                    pppppplVar25 = extraout_x9_01;
                    uVar36 = extraout_x12;
                  }
                  pppppplVar26 = *ppppppplVar33;
                  pppppplVar27 = ppppppplVar38[2];
                  ppppppplVar47 = (long *******)pppppplVar27[(long)pppppplVar24];
                  do {
                    ppppppplVar21 = ppppppplVar47;
                    ppppppplVar47 = (long *******)*ppppppplVar21;
                  } while ((long *******)*ppppppplVar21 != ppppppplVar33);
                  if (ppppppplVar21 == ppppppplVar38 + 4) {
LAB_107431bd8:
                    if (pppppplVar26 == (long ******)0x0) {
LAB_107431c0c:
                      pppppplVar27[(long)pppppplVar24] = (long *****)0x0;
                      pppppplVar26 = *ppppppplVar33;
                      goto LAB_107431c14;
                    }
                    pppppplVar28 = (long ******)pppppplVar26[1];
                    if (((ulong)pppppplVar25 & uVar36) == 0) {
                      pppppplVar29 = (long ******)((ulong)pppppplVar28 & uVar36);
                    }
                    else {
                      pppppplVar29 = pppppplVar28;
                      if (pppppplVar25 <= pppppplVar28) {
                        uVar18 = 0;
                        if (pppppplVar25 != (long ******)0x0) {
                          uVar18 = (ulong)pppppplVar28 / (ulong)pppppplVar25;
                        }
                        pppppplVar29 = (long ******)
                                       ((long)pppppplVar28 - uVar18 * (long)pppppplVar25);
                      }
                    }
                    if (pppppplVar29 != pppppplVar24) goto LAB_107431c0c;
LAB_107431c1c:
                    if (((ulong)pppppplVar25 & uVar36) == 0) {
                      pppppplVar28 = (long ******)((ulong)pppppplVar28 & uVar36);
                    }
                    else if (pppppplVar25 <= pppppplVar28) {
                      uVar36 = 0;
                      if (pppppplVar25 != (long ******)0x0) {
                        uVar36 = (ulong)pppppplVar28 / (ulong)pppppplVar25;
                      }
                      pppppplVar28 = (long ******)((long)pppppplVar28 - uVar36 * (long)pppppplVar25)
                      ;
                    }
                    if (pppppplVar28 != pppppplVar24) {
                      pppppplVar27[(long)pppppplVar28] = (long *****)ppppppplVar21;
                      pppppplVar26 = *ppppppplVar33;
                    }
                  }
                  else {
                    pppppplVar28 = ppppppplVar21[1];
                    if (((ulong)pppppplVar25 & uVar36) == 0) {
                      pppppplVar28 = (long ******)((ulong)pppppplVar28 & uVar36);
                    }
                    else if (pppppplVar25 <= pppppplVar28) {
                      uVar18 = 0;
                      if (pppppplVar25 != (long ******)0x0) {
                        uVar18 = (ulong)pppppplVar28 / (ulong)pppppplVar25;
                      }
                      pppppplVar28 = (long ******)((long)pppppplVar28 - uVar18 * (long)pppppplVar25)
                      ;
                    }
                    if (pppppplVar28 != pppppplVar24) goto LAB_107431bd8;
LAB_107431c14:
                    if (pppppplVar26 != (long ******)0x0) {
                      pppppplVar28 = (long ******)pppppplVar26[1];
                      goto LAB_107431c1c;
                    }
                  }
                  *ppppppplVar21 = pppppplVar26;
                  *ppppppplVar33 = (long ******)0x0;
                  ppppppplVar38[5] = (long ******)((long)ppppppplVar38[5] + -1);
                  pppppplStack_d0 = (long ******)0x1;
                  pppppplStack_e0 = (long ******)ppppppplVar33;
                  pppppplStack_d8 = (long ******)(ppppppplVar38 + 4);
                  FUN_107433f94(&pppppplStack_e0);
                  break;
                }
              }
            }
          }
        }
LAB_107431c84:
        func_0x0001073bca64(&uStack_198);
        pppppplVar43 = pppppplVar43 + 2;
      } while( true );
    }
    func_0x00010743bb8c();
    if ((int)plVar37[0xb] == 1) {
      bVar10 = *(byte *)pppppplVar43;
      ppppppplVar33 = (long *******)(ulong)bVar10;
      FUN_107434ad0(&ppppplStack_100,plVar37 + 9);
      ppppplVar22 = ppppplStack_100;
      if ((long ******)ppppplStack_100 == (long ******)0x0) {
        plVar34 = (long *)(lVar17 + 0xe0);
        FUN_107434b3c(plVar34,plVar37);
        plVar37 = plVar34;
        goto LAB_10743163c;
      }
      if (*(int *)(ppppplStack_100 + 10) == 0) {
        if (*(int *)(ppppplStack_100 + 9) == 0) {
          FUN_10743449c(ppppplStack_100 + 1);
          uVar7 = *(uint *)(ppppplVar22 + 1);
          uVar11 = *(uint *)((long)ppppplVar22 + 0xc);
          FUN_107434274(ppppplVar22 + 1);
          if (bVar10 != 1) {
            func_0x00010743c09c();
            func_0x00010743be2c();
            func_0x00010743c084();
            FUN_107432024();
            func_0x00010743bb44((ulong)uVar7 * (ulong)uVar11);
            goto LAB_1074317ac;
          }
          uVar36 = (ulong)*(uint *)(ppppplVar22 + 1);
          uVar7 = *(uint *)((long)ppppplVar22 + 0xc);
          uVar18 = (ulong)uVar7;
          if (*(uint *)(ppppplVar22 + 1) == uVar7 * 6) {
            uStack_104 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_158 = 0;
            uStack_160 = 0;
            uStack_108 = 0x303;
            uStack_e8 = uVar7;
            uStack_e4 = uVar7;
            func_0x00010743c24c();
            uVar19 = uVar18;
            func_0x00010743c24c(uVar18);
            lVar45 = 0;
            ppppppplVar33 = (long *******)(uVar36 & 0xffffffff);
            do {
              *(undefined8 *)((long)&pppppplStack_e0 + lVar45) = 0;
              *(undefined8 *)((long)&pppppplStack_d8 + lVar45) = 0;
              *(undefined2 *)((long)&pppppplStack_d0 + lVar45) = 1;
              lVar45 = lVar45 + 0x18;
            } while (lVar45 != 0x90);
            uVar19 = uVar19 & 0xffffffff;
            uVar12 = CONCAT44(uStack_e4,uStack_e8);
            for (lVar45 = 0; lVar45 != 6; lVar45 = lVar45 + 1) {
              FUN_1073be070(&uStack_198,uVar12,0);
              FUN_10742a894(&pppppplStack_e0 + lVar45 * 3,&uStack_198);
              func_0x00010724e5f4(&uStack_198);
              ppppplVar44 = (long *****)
                            ((long)ppppplVar22[2] + *(uint *)(&UNK_10de6903c + lVar45 * 4) * uVar19)
              ;
              pppppplVar43 = (&pppppplStack_d8)[lVar45 * 3];
              uVar36 = uVar18;
              uVar11 = uVar7;
              while (uVar11 != 0) {
                _memcpy(pppppplVar43,ppppplVar44,uVar19);
                ppppplVar44 = (long *****)((long)ppppplVar44 + (long)ppppppplVar33);
                pppppplVar43 = (long ******)((long)pppppplVar43 + uVar19);
                uVar11 = (int)uVar36 - 1;
                uVar36 = (ulong)uVar11;
              }
              (&uStack_160)[lVar45] = (ulong)(&pppppplStack_d8)[lVar45 * 3];
            }
            func_0x00010743c0cc();
            FUN_1073daa34();
            func_0x00010743b978((ulong)*(uint *)(ppppplVar22 + 1) *
                                (ulong)*(uint *)((long)ppppplVar22 + 0xc) * 4);
            lVar45 = lStack_188;
            lStack_188 = 0;
            if (lVar45 != 0) {
              func_0x00010743b2a4();
            }
            func_0x000107434cf0(&pppppplStack_e0);
            goto LAB_107431490;
          }
        }
        else {
          FUN_1074344d8(ppppplStack_100 + 1);
          ppppppplVar38 = (long *******)ppppplVar22[3];
          *(undefined1 *)(ppppplVar22 + 4) = 1;
          if (bVar10 != 1) {
            func_0x00010743c09c();
            func_0x00010743be2c();
            func_0x00010743c084();
            FUN_1073da708();
            func_0x00010743bd9c();
            pppppplStack_d0 = (long ******)extraout_x9;
            pppppplStack_c8 = (long ******)ppppppplVar38;
LAB_1074317ac:
            pppppplVar43 = (long ******)ppppplStack_100;
            FUN_107434b0c(ppppplStack_100,&pppppplStack_e0);
            func_0x00010743c428();
            if (pppppplVar43 != (long ******)0x0) {
              func_0x00010743b2a4();
            }
            func_0x00010743be6c();
            if (pppppplVar43 != (long ******)0x0) {
              func_0x00010743b2a4();
            }
            goto LAB_107431490;
          }
          uVar7 = *(uint *)((long)ppppplVar22 + 0xc);
          uVar36 = (ulong)uVar7;
          if (*(int *)(ppppplVar22 + 1) == uVar7 * 6) {
            uStack_104 = 0;
            pppppplVar43 = (long ******)(ppppplVar22 + 1);
            uStack_108 = 0x303;
            FUN_1073c90e8(pppppplVar43);
            uVar18 = uVar36;
            uStack_e8 = uVar7;
            uStack_e4 = uVar7;
            func_0x0001073da298(uVar36,uVar36,pppppplVar43);
            uVar19 = (ulong)*(uint *)(ppppplVar22 + 1);
            func_0x00010743c240();
            func_0x00010743c240();
            ppppppplVar33 = (long *******)(uVar19 & 0xffffffff);
            if (((uVar36 & 0xffffffff) * 2 + (uVar36 & 0xffffffff)) * 2 - (long)ppppppplVar33 == 0)
            {
              lVar45 = 0;
              uVar19 = uVar36 & 0xffffffff;
              pppppplStack_c8 = (long ******)0x0;
              pppppplStack_d0 = (long ******)0x0;
              pppplStack_b8 = (long ****)0x0;
              pppplStack_c0 = (long ****)0x0;
              uVar11 = 0;
              uVar16 = (uint)uVar36;
              if (uVar16 != 0) {
                uVar11 = (uint)uVar18 / uVar16;
              }
              pppppplStack_d8 = (long ******)0x0;
              pppppplStack_e0 = (long ******)0x0;
              uStack_148 = 0;
              uStack_150 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              if (uVar16 != 0) {
                uVar7 = uVar11;
              }
              uStack_158 = 0;
              uStack_160 = 0;
              for (; lVar45 != 6; lVar45 = lVar45 + 1) {
                uVar36 = uVar18 & 0xffffffff;
                __Znam(uVar18 & 0xffffffff);
                _bzero();
                uStack_198 = 0;
                FUN_1073c8290(&pppppplStack_e0 + lVar45,uVar36);
                func_0x00010724e5b8(&uStack_198);
                lVar30 = (long)ppppplVar22[5] +
                         (long)(*(uint *)(&UNK_10de6903c + lVar45 * 4) * uVar19 +
                               (long)ppppplVar22[6][1]);
                pppppplVar43 = (&pppppplStack_e0)[lVar45];
                for (uVar11 = uVar7; uVar11 != 0; uVar11 = uVar11 - 1) {
                  _memcpy(pppppplVar43,lVar30,uVar19);
                  lVar30 = lVar30 + (long)ppppppplVar33;
                  pppppplVar43 = (long ******)((long)pppppplVar43 + uVar19);
                }
                (&uStack_160)[lVar45] = (ulong)(&pppppplStack_e0)[lVar45];
              }
              func_0x00010743c0cc();
              FUN_1073daa34();
              func_0x00010743b978(ppppplVar22[3]);
              lVar45 = lStack_188;
              lStack_188 = 0;
              if (lVar45 != 0) {
                func_0x00010743b2a4();
              }
              func_0x000107434d24(&pppppplStack_e0);
              goto LAB_107431490;
            }
          }
        }
      }
      else {
LAB_107431490:
        if (((long ******)ppppplStack_100 != (long ******)0x0) &&
           (*(int *)(ppppplStack_100 + 10) == 1)) {
          lStack_210 = (long)ppppplStack_100[4] + lStack_210;
        }
        plVar37 = (long *)*plVar37;
      }
LAB_10743163c:
      pppppplVar43 = &ppppplStack_100;
      func_0x000107435084();
      param_1 = lVar17;
      goto LAB_107431450;
    }
    plVar37 = (long *)*plVar37;
  } while( true );
LAB_107431aec:
  if (((ulong)ppppppplVar47 & uVar36) == 0) {
    ppppppplVar23 = (long *******)((ulong)ppppppplVar23 & uVar36);
  }
  else if (ppppppplVar47 <= ppppppplVar23) {
    uVar18 = 0;
    if (ppppppplVar47 != (long *******)0x0) {
      uVar18 = (ulong)ppppppplVar23 / (ulong)ppppppplVar47;
    }
    ppppppplVar23 = (long *******)((long)ppppppplVar23 - uVar18 * (long)ppppppplVar47);
  }
  if (ppppppplVar23 != ppppppplVar41) goto LAB_107431c84;
  goto LAB_107431ac4;
}



/* Entry: 107431fe4; end: 107432023;  */

void FUN_107431fe4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x00010743c1b0();
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = *unaff_x19;
  *(undefined8 *)((long)puVar1 + 5) = *(undefined8 *)((long)unaff_x19 + 5);
  uVar2 = unaff_x19[2];
  unaff_x19[2] = 0;
  puVar1[2] = uVar2;
  *unaff_x20 = (long)puVar1;
  return;
}



/* Entry: 107432024; end: 10743218f;  */

void FUN_107432024(undefined1 *param_1,long *param_2,uint *param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte bVar9;
  undefined8 uStack_80;
  long lStack_78;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  plVar4 = (long *)(ulong)*param_3;
  uVar1 = param_3[1];
  uVar7 = *(undefined8 *)param_3;
  bVar2 = *(byte *)((long)param_3 + 0x11) | 2;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x28))();
  puVar6 = *(undefined4 **)(param_3 + 2);
  uStack_68 = *param_4;
  uStack_6c = 0;
  uStack_64 = *(undefined1 *)(param_4 + 1);
  bVar9 = bVar2;
  if (plVar3 < plVar4 || plVar3 < (long *)(ulong)uVar1) {
    uStack_64 = 0;
    uStack_68 = 0;
    uVar7 = 0x100000001;
    puVar6 = &uStack_6c;
    bVar9 = 2;
  }
  (**(code **)(*param_2 + 0x60))(&lStack_78,param_2,uVar7,puVar6,&uStack_68,bVar9,param_5);
  if ((((char)param_2[3] == '\x01') &&
      (func_0x0001073da298(plVar4,(long *)(ulong)uVar1,bVar2), (int)plVar4 != 0)) &&
     (*(long *)(param_3 + 2) != 0)) {
    uVar8 = (ulong)plVar4 & 0xffffffff;
    uVar5 = uVar8;
    __Znam(uVar8);
    _bzero();
    uStack_80 = 0;
    FUN_1073c8290(lStack_78 + 8,uVar5);
    func_0x00010724e5b8(&uStack_80);
    _memcpy(*(undefined8 *)(lStack_78 + 8),*(undefined8 *)(param_3 + 2),uVar8);
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uVar7;
  param_1[0xc] = bVar9;
  *(long *)(param_1 + 0x10) = lStack_78;
  return;
}



/* Entry: 107432190; end: 1074321c7;  */

undefined8 * FUN_107432190(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109af410;
  FUN_10742d738(param_1[1],param_1);
  return param_1;
}



/* Entry: 1074321c8; end: 1074321ff;  */

undefined8 * FUN_1074321c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109af438;
  FUN_10742dcd0(param_1[1],param_1);
  return param_1;
}



/* Entry: 107432200; end: 107432237;  */

undefined8 * FUN_107432200(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109af460;
  FUN_10742e608(param_1[1],param_1);
  return param_1;
}



/* Entry: 107432238; end: 10743252f;  */

/* WARNING: Possible PIC construction at 0x0001074327bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074327d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074327c0) */
/* WARNING: Removing unreachable block (ram,0x0001074327d8) */
/* WARNING: Removing unreachable block (ram,0x0001074327e8) */
/* WARNING: Removing unreachable block (ram,0x0001074327f4) */
/* WARNING: Removing unreachable block (ram,0x000107434310) */
/* WARNING: Removing unreachable block (ram,0x000107434338) */
/* WARNING: Removing unreachable block (ram,0x000107434328) */
/* WARNING: Removing unreachable block (ram,0x000107434330) */
/* WARNING: Removing unreachable block (ram,0x00010743433c) */
/* WARNING: Removing unreachable block (ram,0x000107434344) */
/* WARNING: Removing unreachable block (ram,0x00010743434c) */
/* WARNING: Removing unreachable block (ram,0x000107434358) */
/* WARNING: Removing unreachable block (ram,0x000107434374) */
/* WARNING: Removing unreachable block (ram,0x000107434364) */
/* WARNING: Removing unreachable block (ram,0x00010743436c) */
/* WARNING: Removing unreachable block (ram,0x000107434378) */
/* WARNING: Removing unreachable block (ram,0x000107434380) */
/* WARNING: Removing unreachable block (ram,0x000107434384) */
/* WARNING: Removing unreachable block (ram,0x0001074343a0) */
/* WARNING: Removing unreachable block (ram,0x000107434390) */
/* WARNING: Removing unreachable block (ram,0x000107434398) */
/* WARNING: Removing unreachable block (ram,0x0001074343a4) */
/* WARNING: Removing unreachable block (ram,0x0001074343ac) */
/* WARNING: Removing unreachable block (ram,0x0001074343b4) */
/* WARNING: Removing unreachable block (ram,0x0001074343b8) */
/* WARNING: Removing unreachable block (ram,0x0001074343d8) */
/* WARNING: Removing unreachable block (ram,0x0001074343c4) */
/* WARNING: Removing unreachable block (ram,0x0001074343cc) */
/* WARNING: Removing unreachable block (ram,0x0001074343dc) */
/* WARNING: Removing unreachable block (ram,0x0001074343e4) */
/* WARNING: Removing unreachable block (ram,0x0001074343ec) */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_107432238(long *******param_1,long *******param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  bool bVar2;
  long ******pppppplVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *****ppppplVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  ulong extraout_x8_08;
  long ******extraout_x8_09;
  long ******extraout_x8_10;
  long ******extraout_x8_11;
  ulong extraout_x8_12;
  long ******extraout_x8_13;
  long ******extraout_x8_14;
  long ******extraout_x8_15;
  ulong extraout_x9;
  long ******extraout_x9_00;
  long ******extraout_x9_01;
  long ******extraout_x9_02;
  ulong extraout_x9_03;
  long ******extraout_x9_04;
  long ******extraout_x9_05;
  long ******extraout_x9_06;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined4 extraout_w10_06;
  undefined4 extraout_w10_07;
  undefined4 extraout_w10_08;
  undefined4 extraout_w10_09;
  undefined4 extraout_w10_10;
  undefined4 extraout_w10_11;
  undefined4 uVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 uVar9;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong extraout_x12_02;
  ulong extraout_x12_03;
  ulong extraout_x12_04;
  ulong uVar10;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long lVar11;
  long ******extraout_x14;
  long ******extraout_x14_00;
  long ******extraout_x14_01;
  long ******extraout_x14_02;
  long ******pppppplVar12;
  long ******pppppplVar13;
  long *******ppppppplVar14;
  long *******unaff_x21;
  long *******ppppppplVar15;
  long *unaff_x22;
  long *******ppppppplVar16;
  undefined8 *******pppppppuVar17;
  undefined8 uVar18;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 in_register_00005008;
  undefined1 in_register_00005009;
  undefined1 in_register_0000500a;
  undefined1 in_register_0000500b;
  undefined1 in_register_0000500c;
  undefined1 in_register_0000500d;
  undefined1 in_register_0000500e;
  undefined1 in_register_0000500f;
  long ******pppppplStack_400;
  long ******pppppplStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3b8;
  long *******ppppppplStack_398;
  long *******ppppppplStack_390;
  long *******ppppppplStack_388;
  undefined8 *******pppppppuStack_380;
  code *pcStack_378;
  undefined1 auStack_370 [8];
  long ******pppppplStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_320;
  long *******ppppppplStack_310;
  long *******ppppppplStack_308;
  undefined8 ******ppppppuStack_300;
  code *pcStack_2f8;
  long ******pppppplStack_2f0;
  long ******pppppplStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2a8;
  long *******ppppppplStack_288;
  long *******ppppppplStack_280;
  long *******ppppppplStack_278;
  undefined8 *****pppppuStack_270;
  code *pcStack_268;
  long *******ppppppplStack_260;
  long ******apppppplStack_258 [2];
  long ******apppppplStack_248 [8];
  long ******apppppplStack_208 [10];
  long *******ppppppplStack_1b8;
  undefined8 uStack_1b0;
  long *******ppppppplStack_1a8;
  undefined8 ***pppuStack_1a0;
  code *pcStack_198;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  undefined1 auStack_178 [24];
  long ******pppppplStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *aplStack_118 [2];
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  undefined8 uStack_f0;
  long ******pppppplStack_e8;
  undefined1 auStack_e0 [48];
  undefined1 uStack_b0;
  uint uStack_98;
  long ******apppppplStack_90 [7];
  undefined8 uStack_58;
  
  ppppppplVar16 = param_1;
  func_0x00010743b2e8();
  uStack_58 = extraout_x8;
  if (param_2[2] == (long ******)0x0) {
    if ((*(byte *)((long)param_2 + 0x19) & 1) == 0) {
      in_ZR = *(char *)(param_2 + 3) == '\x01';
      if (!(bool)in_ZR) {
        in_b0 = 0;
        in_register_00005001 = 0;
        in_register_00005002 = 0;
        in_register_00005003 = 0;
        in_register_00005004 = 0;
        in_register_00005005 = 0;
        in_register_00005006 = 0;
        in_register_00005007 = 0;
        in_register_00005008 = 0;
        in_register_00005009 = 0;
        in_register_0000500a = 0;
        in_register_0000500b = 0;
        in_register_0000500c = 0;
        in_register_0000500d = 0;
        in_register_0000500e = 0;
        in_register_0000500f = 0;
        uStack_120 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_158 = 0;
        pppppplStack_160 = (long ******)0x0;
        uStack_148 = 0;
        uStack_150 = 1;
        pppppplVar3 = param_2[4];
        ppppplVar7 = (long *****)(long)*(char *)((long)pppppplVar3 + 0x17);
        pppppplVar13 = pppppplVar3;
        if ((long)ppppplVar7 < 0) {
          pppppplVar13 = (long ******)*pppppplVar3;
          ppppplVar7 = pppppplVar3[1];
        }
        func_0x0001078ba1ec(auStack_178,pppppplVar13,ppppplVar7);
        FUN_10742a864(&pppppplStack_160,&pppppplStack_160,auStack_178);
        FUN_10742a9e8(&pppppplStack_e8);
        FUN_10742a730(&pppppplStack_e8,&pppppplStack_160);
        func_0x000107262f3c(apppppplStack_90,param_3);
        unaff_x21 = (long *******)0xa8;
        __Znwm();
        unaff_x21[1] = (long ******)0x0;
        unaff_x21[2] = (long ******)0x0;
        *unaff_x21 = (long ******)&PTR_FUN_1109aff70;
        ppppppplVar16 = unaff_x21 + 4;
        *(undefined1 *)ppppppplVar16 = 0;
        *(undefined4 *)(unaff_x21 + 0xd) = 0xffffffff;
        FUN_10742aa40(ppppppplVar16);
        in_ZR = uStack_98 == 0xffffffff;
        if (!(bool)in_ZR) {
          ppppppplStack_f8 = ppppppplVar16;
          (*(code *)(&PTR_DAT_1109affb0)[uStack_98])(&ppppppplStack_f8,auStack_e0);
          *(uint *)(unaff_x21 + 0xd) = uStack_98;
        }
        param_2 = apppppplStack_90;
        func_0x000104c318bc(unaff_x21 + 0xe);
        ppppppplVar16 = unaff_x21 + 3;
        ppppppplVar15 = param_1 + 0x33;
        ppppppplStack_188 = ppppppplVar16;
        ppppppplStack_180 = unaff_x21;
        func_0x00010724bb70(aplStack_118);
        if (aplStack_118[0] != (long *)0x0) {
          pppppplVar13 = param_1[0x32];
          ppppppplStack_188 = (long *******)0x0;
          ppppppplStack_180 = (long *******)0x0;
          ppppppplStack_108 = ppppppplVar16;
          ppppppplStack_100 = unaff_x21;
          func_0x00010743bee0();
          ppppppplStack_108 = (long *******)0x0;
          ppppppplStack_100 = (long *******)0x0;
          *ppppppplVar15 = (long ******)&PTR_DAT_1109affd0;
          ppppppplVar15[1] = pppppplVar13;
          ppppppplVar15[2] = (long ******)FUN_107432628;
          ppppppplVar15[3] = (long ******)0x0;
          ppppppplVar15[4] = (long ******)ppppppplVar16;
          ppppppplVar15[5] = (long ******)unaff_x21;
          ppppppplStack_f8 = (long *******)0x0;
          uStack_f0 = 0;
          func_0x000107435084(&ppppppplStack_f8);
          ppppppplStack_f8 = ppppppplVar15;
          func_0x000107435084(&ppppppplStack_108);
          param_2 = (long *******)&ppppppplStack_f8;
          FUN_1073ae140(aplStack_118[0]);
          ppppppplVar16 = ppppppplStack_f8;
          ppppppplStack_f8 = (long *******)0x0;
          if (ppppppplVar16 != (long *******)0x0) {
            func_0x00010743b2a4();
          }
        }
        func_0x00010724bcd8(aplStack_118);
        func_0x000107435084(&ppppppplStack_188);
        func_0x00010742ac14(&pppppplStack_e8);
        func_0x00010724e5f4(auStack_178);
        unaff_x22 = aplStack_118[0];
        goto LAB_107432424;
      }
      ppppppplVar16 = &pppppplStack_e8;
      func_0x00010743bac0(ppppppplVar16);
      uStack_b0 = 0;
      func_0x00010743bc54();
      goto LAB_10743227c;
    }
  }
  else {
    ppppppplVar16 = &pppppplStack_e8;
    func_0x00010743bac0(ppppppplVar16);
    uStack_b0 = 0;
    func_0x00010743bc54();
LAB_10743227c:
    func_0x00010743be4c();
  }
  while( true ) {
    func_0x00010743b264(uStack_58);
    if ((bool)in_ZR) {
      return ppppppplVar16;
    }
    ___stack_chk_fail();
    func_0x00010743bf90();
    ppppppplVar16 = ppppppplStack_f8;
    ppppppplStack_f8 = (long *******)0x0;
    if (ppppppplVar16 != (long *******)0x0) {
      func_0x00010743b2a4();
    }
    func_0x00010724bcd8(aplStack_118);
    func_0x000107435084(&ppppppplStack_188);
    func_0x00010742ac14(&pppppplStack_e8);
    func_0x00010724e5f4(auStack_178);
    in_ZR = (int)unaff_x22 == 1;
    if (!(bool)in_ZR) break;
    ___cxa_begin_catch(unaff_x21);
    func_0x00010743bac0(&pppppplStack_e8);
    uStack_b0 = 0;
    func_0x00010743bc54();
    func_0x00010743be4c();
    ___cxa_end_catch();
LAB_107432424:
    ppppppplVar16 = &pppppplStack_160;
    FUN_107425f68(ppppppplVar16);
  }
  FUN_107425f68(&pppppplStack_160);
  ppppppplVar15 = unaff_x21;
  __Unwind_Resume();
  pcStack_198 = FUN_107432530;
  ppppppplVar4 = ppppppplVar15;
  ppppppplVar16 = param_2;
  ppppppplStack_1b8 = unaff_x21;
  uStack_1b0 = param_3;
  ppppppplStack_1a8 = param_1;
  pppuStack_1a0 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x00010743b2d4();
  func_0x00010724bb70(apppppplStack_258,ppppppplVar4 + 1);
  ppppppplVar4 = param_2;
  if (apppppplStack_258[0] != (long ******)0x0) {
    ppppppplVar15 = (long *******)*ppppppplVar15;
    ppppppplVar4 = apppppplStack_248;
    FUN_107425674(ppppppplVar4,param_2);
    func_0x00010743ba58();
    FUN_107425674(apppppplStack_208,apppppplStack_248);
    *ppppppplVar4 = (long ******)&PTR_DAT_1109aff30;
    ppppppplVar4[1] = (long ******)ppppppplVar15;
    ppppppplVar4[2] = (long ******)FUN_107432628;
    ppppppplVar4[3] = (long ******)0x0;
    ppppppplVar16 = apppppplStack_208;
    FUN_107425674(ppppppplVar4 + 4);
    func_0x000104c2f714(apppppplStack_208);
    pppppplVar13 = (long ******)apppppplStack_248;
    ppppppplStack_260 = ppppppplVar4;
    func_0x000104c2f714();
    func_0x00010743bde0();
    FUN_1073ae140();
    func_0x00010743c18c();
    if (pppppplVar13 != (long ******)0x0) {
      func_0x00010743b2a4();
    }
  }
  ppppppplVar5 = apppppplStack_258;
  func_0x00010724bcd8();
  func_0x00010743b24c();
  if ((bool)in_ZR) {
    return ppppppplVar5;
  }
  ___stack_chk_fail();
  ppppppplVar6 = ppppppplVar5;
  func_0x00010743c18c();
  if (ppppppplVar6 != (long *******)0x0) {
    func_0x00010743b2a4();
  }
  ppppppplVar6 = apppppplStack_258;
  func_0x00010724bcd8();
  func_0x00010743b660();
  pcStack_268 = FUN_107432628;
  ppppppplStack_288 = ppppppplVar15;
  ppppppplStack_280 = ppppppplVar4;
  ppppppplStack_278 = ppppppplVar5;
  pppppuStack_270 = (undefined8 *****)&pppuStack_1a0;
  func_0x00010743b804();
  func_0x00010743b2d4();
  uVar1 = *(int *)(ppppppplVar16 + 9) == 1;
  if ((bool)uVar1) {
    func_0x0001074329c4(ppppppplVar4,ppppppplVar5 + 10);
    ppppppplVar6 = ppppppplVar5 + 0x1c;
    ppppppplVar16 = ppppppplVar4 + 1;
    FUN_107436130();
    if (ppppppplVar6 == (long *******)0x0) goto LAB_107432730;
    func_0x00010743b24c();
    ppppppplVar14 = ppppppplStack_278;
    if ((bool)uVar1) {
      ppppppplVar5 = ppppppplVar5 + 0x1c;
      func_0x00010743bc24();
      if ((bool)uVar1) {
        uVar1 = 1;
      }
      else {
        uVar1 = extraout_x8_08 == extraout_x9;
        if (extraout_x9 <= extraout_x8_08) {
          func_0x00010743c114();
        }
      }
      do {
        func_0x00010743bfdc();
      } while (!(bool)uVar1);
      pppppplVar13 = extraout_x8_09;
      pppppplVar3 = extraout_x9_00;
      uVar8 = extraout_w10_06;
      uVar9 = extraout_var;
      uVar10 = extraout_x12;
      lVar11 = extraout_x13;
      if ((long *******)CONCAT44(extraout_var,extraout_w10_06) == ppppppplVar5 + 2) {
LAB_107434bac:
        if (ppppppplVar14 == (long *******)0x0) {
LAB_107434bd8:
          *(undefined8 *)(lVar11 + (long)pppppplVar13 * 8) = 0;
          pppppplVar12 = *ppppppplVar6;
          goto LAB_107434be0;
        }
        if (((ulong)pppppplVar3 & uVar10) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = ppppppplVar14[1] == pppppplVar3;
          if (pppppplVar3 <= ppppppplVar14[1]) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        pppppplVar13 = extraout_x8_11;
        pppppplVar3 = extraout_x9_02;
        uVar8 = extraout_w10_08;
        uVar9 = extraout_var_01;
        uVar10 = extraout_x12_01;
        lVar11 = extraout_x13_01;
        pppppplVar12 = extraout_x14_00;
        if (!(bool)uVar1) goto LAB_107434bd8;
      }
      else {
        pppppplVar13 = *(long *******)(CONCAT44(extraout_var,extraout_w10_06) + 8);
        if (((ulong)extraout_x9_00 & extraout_x12) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = pppppplVar13 == extraout_x9_00;
          if (extraout_x9_00 <= pppppplVar13) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        pppppplVar13 = extraout_x8_10;
        pppppplVar3 = extraout_x9_01;
        uVar8 = extraout_w10_07;
        uVar9 = extraout_var_00;
        uVar10 = extraout_x12_00;
        lVar11 = extraout_x13_00;
        pppppplVar12 = extraout_x14;
        if (!(bool)uVar1) goto LAB_107434bac;
LAB_107434be0:
        if (pppppplVar12 == (long ******)0x0) goto LAB_107434c18;
      }
      pppppplVar12 = (long ******)pppppplVar12[1];
      if (((ulong)pppppplVar3 & uVar10) == 0) {
        pppppplVar12 = (long ******)((ulong)pppppplVar12 & uVar10);
      }
      else if (pppppplVar3 <= pppppplVar12) {
        uVar10 = 0;
        if (pppppplVar3 != (long ******)0x0) {
          uVar10 = (ulong)pppppplVar12 / (ulong)pppppplVar3;
        }
        pppppplVar12 = (long ******)((long)pppppplVar12 - uVar10 * (long)pppppplVar3);
      }
      if (pppppplVar12 != pppppplVar13) {
        *(ulong *)(lVar11 + (long)pppppplVar12 * 8) = CONCAT44(uVar9,uVar8);
      }
LAB_107434c18:
      func_0x00010743b4ec();
      func_0x000107434c2c();
      return ppppppplVar14;
    }
  }
  else {
    if (*(int *)(ppppppplVar16 + 9) == 0) {
      ppppppplVar15 = ppppppplVar5 + 0x1c;
      FUN_107435ef0(ppppppplVar15,ppppppplVar4[1] + 0xb);
      uVar1 = *(int *)(ppppppplVar15 + 2) == 1;
      if ((bool)uVar1) {
        func_0x00010743bdbc();
        if (extraout_x8_00 != 0) {
          do {
            func_0x00010743b4a0();
          } while (extraout_w10 != 0);
        }
        func_0x00010743c460();
        FUN_107434ccc();
      }
      else {
        FUN_107434c84(ppppppplVar15);
        func_0x00010743bdbc();
        ppppppplVar15[1] =
             (long ******)
             CONCAT17(in_register_0000500f,
                      CONCAT16(in_register_0000500e,
                               CONCAT15(in_register_0000500d,
                                        CONCAT14(in_register_0000500c,
                                                 CONCAT13(in_register_0000500b,
                                                          CONCAT12(in_register_0000500a,
                                                                   CONCAT11(in_register_00005009,
                                                                            in_register_00005008))))
                                       )));
        *ppppppplVar15 =
             (long ******)
             CONCAT17(in_register_00005007,
                      CONCAT16(in_register_00005006,
                               CONCAT15(in_register_00005005,
                                        CONCAT14(in_register_00005004,
                                                 CONCAT13(in_register_00005003,
                                                          CONCAT12(in_register_00005002,
                                                                   CONCAT11(in_register_00005001,
                                                                            in_b0)))))));
        if (extraout_x8_01 != 0) {
          do {
            func_0x00010743b4a0();
          } while (extraout_w10_00 != 0);
        }
        *(undefined4 *)(ppppppplVar15 + 2) = 1;
      }
      func_0x00010743bdbc();
      uStack_2e0 = CONCAT17(in_register_0000500f,
                            CONCAT16(in_register_0000500e,
                                     CONCAT15(in_register_0000500d,
                                              CONCAT14(in_register_0000500c,
                                                       CONCAT13(in_register_0000500b,
                                                                CONCAT12(in_register_0000500a,
                                                                         CONCAT11(
                                                  in_register_00005009,in_register_00005008)))))));
      pppppplStack_2e8 =
           (long ******)
           CONCAT17(in_register_00005007,
                    CONCAT16(in_register_00005006,
                             CONCAT15(in_register_00005005,
                                      CONCAT14(in_register_00005004,
                                               CONCAT13(in_register_00005003,
                                                        CONCAT12(in_register_00005002,
                                                                 CONCAT11(in_register_00005001,in_b0
                                                                         )))))));
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010743b4a0();
        } while (extraout_w10_01 != 0);
      }
      uStack_2a8 = 0;
      ppppppplVar16 = ppppppplVar5 + 10;
      func_0x0001074329c4(&pppppplStack_2f0);
      ppppppplVar6 = &pppppplStack_2e8;
      FUN_10743636c();
      ppppppplVar4 = &pppppplStack_2f0;
    }
LAB_107432730:
    func_0x00010743b24c();
    if ((bool)uVar1) {
      return ppppppplVar6;
    }
  }
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_10743636c();
  func_0x00010743b660();
  pppppplVar13 = (long ******)auStack_370;
  pcStack_2f8 = FUN_107432750;
  pppppppuVar17 = &ppppppuStack_300;
  ppppppplStack_310 = ppppppplVar4;
  ppppppplStack_308 = ppppppplVar5;
  ppppppuStack_300 = &pppppuStack_270;
  func_0x00010743b804();
  func_0x00010743b2e8();
  bVar2 = *(int *)(ppppppplVar16 + 9) == 1;
  ppppppplVar14 = ppppppplVar4;
  if (bVar2) {
    uVar18 = 0x1074327d8;
    goto FUN_10743295c;
  }
  if (*(int *)(ppppppplVar16 + 9) == 0) {
    FUN_1074306fc(ppppppplVar5 + 0x17,ppppppplVar4[1] + 0x15);
    FUN_10743072c();
    func_0x00010743bdbc();
    uStack_358 = CONCAT17(in_register_0000500f,
                          CONCAT16(in_register_0000500e,
                                   CONCAT15(in_register_0000500d,
                                            CONCAT14(in_register_0000500c,
                                                     CONCAT13(in_register_0000500b,
                                                              CONCAT12(in_register_0000500a,
                                                                       CONCAT11(in_register_00005009
                                                                                ,
                                                  in_register_00005008)))))));
    uStack_360 = CONCAT17(in_register_00005007,
                          CONCAT16(in_register_00005006,
                                   CONCAT15(in_register_00005005,
                                            CONCAT14(in_register_00005004,
                                                     CONCAT13(in_register_00005003,
                                                              CONCAT12(in_register_00005002,
                                                                       CONCAT11(in_register_00005001
                                                                                ,in_b0)))))));
    if (extraout_x8_04 != 0) {
      do {
        func_0x00010743b4a0();
      } while (extraout_w10_02 != 0);
    }
    uStack_320 = 0;
    uVar18 = 0x1074327c0;
    pppppplVar13 = (long ******)auStack_370;
    ppppppplVar4 = &pppppplStack_368;
    ppppppplVar14 = &pppppplStack_368;
    goto FUN_10743295c;
  }
  func_0x00010743b264(extraout_x8_03);
  if (bVar2) {
    return ppppppplVar6;
  }
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_1073f01e4();
  func_0x00010743b660();
  pppppplVar13 = (long ******)&pppppplStack_400;
  pcStack_378 = FUN_107432834;
  ppppppplStack_398 = ppppppplVar15;
  ppppppplStack_390 = ppppppplVar4;
  ppppppplStack_388 = ppppppplVar5;
  pppppppuStack_380 = pppppppuVar17;
  func_0x00010743b804();
  func_0x00010743b2d4();
  uVar1 = *(int *)(ppppppplVar16 + 9) == 1;
  if ((bool)uVar1) {
    func_0x000107432a2c(ppppppplVar4,ppppppplVar5 + 0xf);
    ppppppplVar6 = ppppppplVar5 + 0x26;
    FUN_10743746c(ppppppplVar6,ppppppplVar4 + 1);
    if (ppppppplVar6 == (long *******)0x0) goto LAB_10743293c;
    func_0x00010743b24c();
    ppppppplVar16 = ppppppplStack_388;
    if ((bool)uVar1) {
      ppppppplVar5 = ppppppplVar5 + 0x26;
      func_0x00010743bc24();
      if ((bool)uVar1) {
        uVar1 = 1;
      }
      else {
        uVar1 = extraout_x8_12 == extraout_x9_03;
        if (extraout_x9_03 <= extraout_x8_12) {
          func_0x00010743c114();
        }
      }
      do {
        func_0x00010743bfdc();
      } while (!(bool)uVar1);
      pppppplVar13 = extraout_x8_13;
      pppppplVar3 = extraout_x9_04;
      uVar8 = extraout_w10_09;
      uVar9 = extraout_var_02;
      uVar10 = extraout_x12_02;
      lVar11 = extraout_x13_02;
      if ((long *******)CONCAT44(extraout_var_02,extraout_w10_09) == ppppppplVar5 + 2) {
LAB_107434e04:
        if (ppppppplVar16 == (long *******)0x0) {
LAB_107434e30:
          *(undefined8 *)(lVar11 + (long)pppppplVar13 * 8) = 0;
          pppppplVar12 = *ppppppplVar6;
          goto LAB_107434e38;
        }
        if (((ulong)pppppplVar3 & uVar10) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = ppppppplVar16[1] == pppppplVar3;
          if (pppppplVar3 <= ppppppplVar16[1]) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        pppppplVar13 = extraout_x8_15;
        pppppplVar3 = extraout_x9_06;
        uVar8 = extraout_w10_11;
        uVar9 = extraout_var_04;
        uVar10 = extraout_x12_04;
        lVar11 = extraout_x13_04;
        pppppplVar12 = extraout_x14_02;
        if (!(bool)uVar1) goto LAB_107434e30;
      }
      else {
        pppppplVar13 = *(long *******)(CONCAT44(extraout_var_02,extraout_w10_09) + 8);
        if (((ulong)extraout_x9_04 & extraout_x12_02) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = pppppplVar13 == extraout_x9_04;
          if (extraout_x9_04 <= pppppplVar13) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        pppppplVar13 = extraout_x8_14;
        pppppplVar3 = extraout_x9_05;
        uVar8 = extraout_w10_10;
        uVar9 = extraout_var_03;
        uVar10 = extraout_x12_03;
        lVar11 = extraout_x13_03;
        pppppplVar12 = extraout_x14_01;
        if (!(bool)uVar1) goto LAB_107434e04;
LAB_107434e38:
        if (pppppplVar12 == (long ******)0x0) goto LAB_107434e70;
      }
      pppppplVar12 = (long ******)pppppplVar12[1];
      if (((ulong)pppppplVar3 & uVar10) == 0) {
        pppppplVar12 = (long ******)((ulong)pppppplVar12 & uVar10);
      }
      else if (pppppplVar3 <= pppppplVar12) {
        uVar10 = 0;
        if (pppppplVar3 != (long ******)0x0) {
          uVar10 = (ulong)pppppplVar12 / (ulong)pppppplVar3;
        }
        pppppplVar12 = (long ******)((long)pppppplVar12 - uVar10 * (long)pppppplVar3);
      }
      if (pppppplVar12 != pppppplVar13) {
        *(ulong *)(lVar11 + (long)pppppplVar12 * 8) = CONCAT44(uVar9,uVar8);
      }
LAB_107434e70:
      func_0x00010743b4ec();
      func_0x000107434e84();
      return ppppppplVar16;
    }
  }
  else {
    if (*(int *)(ppppppplVar16 + 9) == 0) {
      ppppppplVar15 = ppppppplVar5 + 0x26;
      FUN_10743722c(ppppppplVar15,ppppppplVar4[1] + 5);
      uVar1 = *(int *)(ppppppplVar15 + 2) == 1;
      if ((bool)uVar1) {
        func_0x00010743bdbc();
        if (extraout_x8_05 != 0) {
          do {
            func_0x00010743b4a0();
          } while (extraout_w10_03 != 0);
        }
        func_0x00010743c460();
        FUN_107434f24();
      }
      else {
        FUN_107434edc(ppppppplVar15);
        func_0x00010743bdbc();
        ppppppplVar15[1] =
             (long ******)
             CONCAT17(in_register_0000500f,
                      CONCAT16(in_register_0000500e,
                               CONCAT15(in_register_0000500d,
                                        CONCAT14(in_register_0000500c,
                                                 CONCAT13(in_register_0000500b,
                                                          CONCAT12(in_register_0000500a,
                                                                   CONCAT11(in_register_00005009,
                                                                            in_register_00005008))))
                                       )));
        *ppppppplVar15 =
             (long ******)
             CONCAT17(in_register_00005007,
                      CONCAT16(in_register_00005006,
                               CONCAT15(in_register_00005005,
                                        CONCAT14(in_register_00005004,
                                                 CONCAT13(in_register_00005003,
                                                          CONCAT12(in_register_00005002,
                                                                   CONCAT11(in_register_00005001,
                                                                            in_b0)))))));
        if (extraout_x8_06 != 0) {
          do {
            func_0x00010743b4a0();
          } while (extraout_w10_04 != 0);
        }
        *(undefined4 *)(ppppppplVar15 + 2) = 1;
      }
      func_0x00010743bdbc();
      uStack_3f0 = CONCAT17(in_register_0000500f,
                            CONCAT16(in_register_0000500e,
                                     CONCAT15(in_register_0000500d,
                                              CONCAT14(in_register_0000500c,
                                                       CONCAT13(in_register_0000500b,
                                                                CONCAT12(in_register_0000500a,
                                                                         CONCAT11(
                                                  in_register_00005009,in_register_00005008)))))));
      pppppplStack_3f8 =
           (long ******)
           CONCAT17(in_register_00005007,
                    CONCAT16(in_register_00005006,
                             CONCAT15(in_register_00005005,
                                      CONCAT14(in_register_00005004,
                                               CONCAT13(in_register_00005003,
                                                        CONCAT12(in_register_00005002,
                                                                 CONCAT11(in_register_00005001,in_b0
                                                                         )))))));
      if (extraout_x8_07 != 0) {
        do {
          func_0x00010743b4a0();
        } while (extraout_w10_05 != 0);
      }
      uStack_3b8 = 0;
      func_0x000107432a2c(&pppppplStack_400,ppppppplVar5 + 0xf);
      ppppppplVar6 = &pppppplStack_3f8;
      FUN_10742acc4();
      ppppppplVar4 = &pppppplStack_400;
    }
LAB_10743293c:
    func_0x00010743b24c();
    ppppppplVar14 = ppppppplVar4;
    if ((bool)uVar1) {
      return ppppppplVar6;
    }
  }
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_10742acc4();
  uVar18 = 0x10743295c;
  func_0x00010743b660();
  ppppppplVar4 = ppppppplVar6;
  pppppppuVar17 = &pppppppuStack_380;
FUN_10743295c:
  *(long **)((long)pppppplVar13 + -0x30) = unaff_x22;
  *(long ********)((long)pppppplVar13 + -0x28) = ppppppplVar15;
  *(long ********)((long)pppppplVar13 + -0x20) = ppppppplVar14;
  *(long ********)((long)pppppplVar13 + -0x18) = ppppppplVar5;
  *(undefined8 ********)((long)pppppplVar13 + -0x10) = pppppppuVar17;
  *(undefined8 *)((long)pppppplVar13 + -8) = uVar18;
  func_0x00010743c02c();
  do {
    ppppppplVar15 = (long *******)*ppppppplVar15;
    if (ppppppplVar15 == (long *******)0x0) {
      return ppppppplVar4;
    }
    ppppppplVar16 = ppppppplVar15 + 5;
LAB_10743297c:
    while (ppppppplVar16 = (long *******)*ppppppplVar16, ppppppplVar16 != (long *******)0x0) {
      if ((int)ppppppplVar14 == 0) goto LAB_1074329a0;
      if ((*(int *)(ppppppplVar5 + 9) == 1) && (func_0x00010743bb6c(), (int)ppppppplVar4 != 0))
      goto LAB_1074329b4;
    }
  } while( true );
LAB_1074329a0:
  ppppppplVar4 = ppppppplVar16 + 2;
  func_0x000104c32db4(ppppppplVar4,ppppppplVar5[1] + 0x15);
  if (((ulong)ppppppplVar4 & 1) != 0) {
LAB_1074329b4:
    func_0x00010743b6e0();
  }
  goto LAB_10743297c;
}



/* Entry: 107432530; end: 107432627;  */

/* WARNING: Possible PIC construction at 0x0001074327bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074327d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074327c0) */
/* WARNING: Removing unreachable block (ram,0x0001074327d8) */
/* WARNING: Removing unreachable block (ram,0x0001074327e8) */
/* WARNING: Removing unreachable block (ram,0x0001074327f4) */
/* WARNING: Removing unreachable block (ram,0x000107434310) */
/* WARNING: Removing unreachable block (ram,0x000107434338) */
/* WARNING: Removing unreachable block (ram,0x000107434328) */
/* WARNING: Removing unreachable block (ram,0x000107434330) */
/* WARNING: Removing unreachable block (ram,0x00010743433c) */
/* WARNING: Removing unreachable block (ram,0x000107434344) */
/* WARNING: Removing unreachable block (ram,0x00010743434c) */
/* WARNING: Removing unreachable block (ram,0x000107434358) */
/* WARNING: Removing unreachable block (ram,0x000107434374) */
/* WARNING: Removing unreachable block (ram,0x000107434364) */
/* WARNING: Removing unreachable block (ram,0x00010743436c) */
/* WARNING: Removing unreachable block (ram,0x000107434378) */
/* WARNING: Removing unreachable block (ram,0x000107434380) */
/* WARNING: Removing unreachable block (ram,0x000107434384) */
/* WARNING: Removing unreachable block (ram,0x0001074343a0) */
/* WARNING: Removing unreachable block (ram,0x000107434390) */
/* WARNING: Removing unreachable block (ram,0x000107434398) */
/* WARNING: Removing unreachable block (ram,0x0001074343a4) */
/* WARNING: Removing unreachable block (ram,0x0001074343ac) */
/* WARNING: Removing unreachable block (ram,0x0001074343b4) */
/* WARNING: Removing unreachable block (ram,0x0001074343b8) */
/* WARNING: Removing unreachable block (ram,0x0001074343d8) */
/* WARNING: Removing unreachable block (ram,0x0001074343c4) */
/* WARNING: Removing unreachable block (ram,0x0001074343cc) */
/* WARNING: Removing unreachable block (ram,0x0001074343dc) */
/* WARNING: Removing unreachable block (ram,0x0001074343e4) */
/* WARNING: Removing unreachable block (ram,0x0001074343ec) */

long * FUN_107432530(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong uVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined4 extraout_w10_06;
  undefined4 extraout_w10_07;
  undefined4 extraout_w10_08;
  undefined4 extraout_w10_09;
  undefined4 extraout_w10_10;
  undefined4 extraout_w10_11;
  undefined4 uVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 uVar9;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong extraout_x12_02;
  ulong extraout_x12_03;
  ulong extraout_x12_04;
  ulong uVar10;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long lVar11;
  long extraout_x14;
  long extraout_x14_00;
  long extraout_x14_01;
  long extraout_x14_02;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 unaff_x22;
  long *plVar16;
  undefined8 ******ppppppuVar17;
  undefined8 uVar18;
  long in_register_00005008;
  long lStack_270;
  long alStack_268 [8];
  undefined4 uStack_228;
  undefined8 *****pppppuStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1e0 [8];
  long lStack_1d8;
  long lStack_1d0;
  undefined4 uStack_190;
  long *plStack_180;
  long *plStack_178;
  undefined8 ****ppppuStack_170;
  code *pcStack_168;
  long lStack_160;
  long alStack_158 [8];
  undefined4 uStack_118;
  undefined8 ***pppuStack_e0;
  code *pcStack_d8;
  long *plStack_d0;
  long alStack_c8 [2];
  long alStack_b8 [8];
  long alStack_78 [9];
  
  plVar4 = param_2;
  plVar16 = param_3;
  func_0x00010743b2d4();
  func_0x00010724bb70(alStack_c8,plVar4 + 1);
  plVar4 = param_3;
  if (alStack_c8[0] != 0) {
    param_2 = (long *)*param_2;
    plVar4 = alStack_b8;
    FUN_107425674(plVar4,param_3);
    func_0x00010743ba58();
    FUN_107425674(alStack_78,alStack_b8);
    *plVar4 = (long)&PTR_DAT_1109aff30;
    plVar4[1] = (long)param_2;
    plVar4[2] = (long)FUN_107432628;
    plVar4[3] = 0;
    plVar16 = alStack_78;
    FUN_107425674(plVar4 + 4);
    func_0x000104c2f714(alStack_78);
    plVar5 = alStack_b8;
    plStack_d0 = plVar4;
    func_0x000104c2f714();
    func_0x00010743bde0();
    FUN_1073ae140();
    func_0x00010743c18c();
    if (plVar5 != (long *)0x0) {
      func_0x00010743b2a4();
    }
  }
  plVar5 = alStack_c8;
  func_0x00010724bcd8();
  func_0x00010743b24c();
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar6 = plVar5;
  func_0x00010743c18c();
  if (plVar6 != (long *)0x0) {
    func_0x00010743b2a4();
  }
  plVar6 = alStack_c8;
  func_0x00010724bcd8();
  func_0x00010743b660();
  pcStack_d8 = FUN_107432628;
  pppuStack_e0 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x00010743b804();
  func_0x00010743b2d4();
  uVar2 = (int)plVar16[9] == 1;
  if ((bool)uVar2) {
    func_0x0001074329c4(plVar4,plVar5 + 10);
    plVar6 = plVar5 + 0x1c;
    plVar16 = plVar4 + 1;
    FUN_107436130();
    if (plVar6 == (long *)0x0) goto LAB_107432730;
    func_0x00010743b24c();
    if ((bool)uVar2) {
      plVar16 = plVar5 + 0x1c;
      func_0x00010743bc24();
      if ((bool)uVar2) {
        uVar2 = 1;
      }
      else {
        uVar2 = extraout_x8_07 == extraout_x9;
        if (extraout_x9 <= extraout_x8_07) {
          func_0x00010743c114();
        }
      }
      do {
        func_0x00010743bfdc();
      } while (!(bool)uVar2);
      uVar13 = extraout_x8_08;
      uVar7 = extraout_x9_00;
      uVar8 = extraout_w10_06;
      uVar9 = extraout_var;
      uVar10 = extraout_x12;
      lVar11 = extraout_x13;
      if ((long *)CONCAT44(extraout_var,extraout_w10_06) == plVar16 + 2) {
LAB_107434bac:
        if (plVar5 == (long *)0x0) {
LAB_107434bd8:
          *(undefined8 *)(lVar11 + uVar13 * 8) = 0;
          lVar12 = *plVar6;
          goto LAB_107434be0;
        }
        if ((uVar7 & uVar10) == 0) {
          uVar2 = 1;
        }
        else {
          uVar2 = plVar5[1] == uVar7;
          if (uVar7 <= (ulong)plVar5[1]) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar13 = extraout_x8_10;
        uVar7 = extraout_x9_02;
        uVar8 = extraout_w10_08;
        uVar9 = extraout_var_01;
        uVar10 = extraout_x12_01;
        lVar11 = extraout_x13_01;
        lVar12 = extraout_x14_00;
        if (!(bool)uVar2) goto LAB_107434bd8;
      }
      else {
        uVar13 = *(ulong *)(CONCAT44(extraout_var,extraout_w10_06) + 8);
        if ((extraout_x9_00 & extraout_x12) == 0) {
          uVar2 = 1;
        }
        else {
          uVar2 = uVar13 == extraout_x9_00;
          if (extraout_x9_00 <= uVar13) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar13 = extraout_x8_09;
        uVar7 = extraout_x9_01;
        uVar8 = extraout_w10_07;
        uVar9 = extraout_var_00;
        uVar10 = extraout_x12_00;
        lVar11 = extraout_x13_00;
        lVar12 = extraout_x14;
        if (!(bool)uVar2) goto LAB_107434bac;
LAB_107434be0:
        if (lVar12 == 0) goto LAB_107434c18;
      }
      uVar14 = *(ulong *)(lVar12 + 8);
      if ((uVar7 & uVar10) == 0) {
        uVar14 = uVar14 & uVar10;
      }
      else if (uVar7 <= uVar14) {
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar10 = uVar14 / uVar7;
        }
        uVar14 = uVar14 - uVar10 * uVar7;
      }
      if (uVar14 != uVar13) {
        *(ulong *)(lVar11 + uVar14 * 8) = CONCAT44(uVar9,uVar8);
      }
LAB_107434c18:
      func_0x00010743b4ec();
      func_0x000107434c2c();
      return plVar5;
    }
  }
  else {
    if ((int)plVar16[9] == 0) {
      param_2 = plVar5 + 0x1c;
      FUN_107435ef0(param_2,plVar4[1] + 0x58);
      uVar2 = (int)param_2[2] == 1;
      if ((bool)uVar2) {
        func_0x00010743bdbc();
        if (extraout_x8 != 0) {
          do {
            func_0x00010743b4a0();
          } while (extraout_w10 != 0);
        }
        func_0x00010743c460();
        FUN_107434ccc();
      }
      else {
        FUN_107434c84(param_2);
        func_0x00010743bdbc();
        param_2[1] = in_register_00005008;
        *param_2 = param_1;
        if (extraout_x8_00 != 0) {
          do {
            func_0x00010743b4a0();
          } while (extraout_w10_00 != 0);
        }
        *(undefined4 *)(param_2 + 2) = 1;
      }
      func_0x00010743bdbc();
      alStack_158[0] = param_1;
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010743b4a0();
        } while (extraout_w10_01 != 0);
      }
      uStack_118 = 0;
      plVar16 = plVar5 + 10;
      func_0x0001074329c4(&lStack_160);
      plVar6 = alStack_158;
      FUN_10743636c();
      plVar4 = &lStack_160;
    }
LAB_107432730:
    func_0x00010743b24c();
    if ((bool)uVar2) {
      return plVar6;
    }
  }
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_10743636c();
  func_0x00010743b660();
  plVar1 = (long *)auStack_1e0;
  pcStack_168 = FUN_107432750;
  ppppppuVar17 = (undefined8 ******)&ppppuStack_170;
  plStack_180 = plVar4;
  plStack_178 = plVar5;
  ppppuStack_170 = &pppuStack_e0;
  func_0x00010743b804();
  func_0x00010743b2e8();
  bVar3 = (int)plVar16[9] == 1;
  plVar15 = plVar4;
  if (bVar3) {
    uVar18 = 0x1074327d8;
    goto FUN_10743295c;
  }
  if ((int)plVar16[9] == 0) {
    FUN_1074306fc(plVar5 + 0x17,plVar4[1] + 0xa8);
    FUN_10743072c();
    func_0x00010743bdbc();
    lStack_1d0 = param_1;
    if (extraout_x8_03 != 0) {
      do {
        func_0x00010743b4a0();
      } while (extraout_w10_02 != 0);
    }
    uStack_190 = 0;
    uVar18 = 0x1074327c0;
    plVar1 = (long *)auStack_1e0;
    plVar4 = &lStack_1d8;
    plVar15 = &lStack_1d8;
    goto FUN_10743295c;
  }
  func_0x00010743b264(extraout_x8_02);
  if (bVar3) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_1073f01e4();
  func_0x00010743b660();
  plVar1 = &lStack_270;
  pcStack_1e8 = FUN_107432834;
  pppppuStack_1f0 = ppppppuVar17;
  func_0x00010743b804();
  func_0x00010743b2d4();
  uVar2 = (int)plVar16[9] == 1;
  if ((bool)uVar2) {
    func_0x000107432a2c(plVar4,plVar5 + 0xf);
    plVar6 = plVar5 + 0x26;
    FUN_10743746c(plVar6,plVar4 + 1);
    if (plVar6 == (long *)0x0) goto LAB_10743293c;
    func_0x00010743b24c();
    if ((bool)uVar2) {
      plVar16 = plVar5 + 0x26;
      func_0x00010743bc24();
      if ((bool)uVar2) {
        uVar2 = 1;
      }
      else {
        uVar2 = extraout_x8_11 == extraout_x9_03;
        if (extraout_x9_03 <= extraout_x8_11) {
          func_0x00010743c114();
        }
      }
      do {
        func_0x00010743bfdc();
      } while (!(bool)uVar2);
      uVar13 = extraout_x8_12;
      uVar7 = extraout_x9_04;
      uVar8 = extraout_w10_09;
      uVar9 = extraout_var_02;
      uVar10 = extraout_x12_02;
      lVar11 = extraout_x13_02;
      if ((long *)CONCAT44(extraout_var_02,extraout_w10_09) == plVar16 + 2) {
LAB_107434e04:
        if (plVar5 == (long *)0x0) {
LAB_107434e30:
          *(undefined8 *)(lVar11 + uVar13 * 8) = 0;
          lVar12 = *plVar6;
          goto LAB_107434e38;
        }
        if ((uVar7 & uVar10) == 0) {
          uVar2 = 1;
        }
        else {
          uVar2 = plVar5[1] == uVar7;
          if (uVar7 <= (ulong)plVar5[1]) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar13 = extraout_x8_14;
        uVar7 = extraout_x9_06;
        uVar8 = extraout_w10_11;
        uVar9 = extraout_var_04;
        uVar10 = extraout_x12_04;
        lVar11 = extraout_x13_04;
        lVar12 = extraout_x14_02;
        if (!(bool)uVar2) goto LAB_107434e30;
      }
      else {
        uVar13 = *(ulong *)(CONCAT44(extraout_var_02,extraout_w10_09) + 8);
        if ((extraout_x9_04 & extraout_x12_02) == 0) {
          uVar2 = 1;
        }
        else {
          uVar2 = uVar13 == extraout_x9_04;
          if (extraout_x9_04 <= uVar13) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar13 = extraout_x8_13;
        uVar7 = extraout_x9_05;
        uVar8 = extraout_w10_10;
        uVar9 = extraout_var_03;
        uVar10 = extraout_x12_03;
        lVar11 = extraout_x13_03;
        lVar12 = extraout_x14_01;
        if (!(bool)uVar2) goto LAB_107434e04;
LAB_107434e38:
        if (lVar12 == 0) goto LAB_107434e70;
      }
      uVar14 = *(ulong *)(lVar12 + 8);
      if ((uVar7 & uVar10) == 0) {
        uVar14 = uVar14 & uVar10;
      }
      else if (uVar7 <= uVar14) {
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar10 = uVar14 / uVar7;
        }
        uVar14 = uVar14 - uVar10 * uVar7;
      }
      if (uVar14 != uVar13) {
        *(ulong *)(lVar11 + uVar14 * 8) = CONCAT44(uVar9,uVar8);
      }
LAB_107434e70:
      func_0x00010743b4ec();
      func_0x000107434e84();
      return plVar5;
    }
  }
  else {
    if ((int)plVar16[9] == 0) {
      param_2 = plVar5 + 0x26;
      FUN_10743722c(param_2,plVar4[1] + 0x28);
      uVar2 = (int)param_2[2] == 1;
      if ((bool)uVar2) {
        func_0x00010743bdbc();
        if (extraout_x8_04 != 0) {
          do {
            func_0x00010743b4a0();
          } while (extraout_w10_03 != 0);
        }
        func_0x00010743c460();
        FUN_107434f24();
      }
      else {
        FUN_107434edc(param_2);
        func_0x00010743bdbc();
        param_2[1] = in_register_00005008;
        *param_2 = param_1;
        if (extraout_x8_05 != 0) {
          do {
            func_0x00010743b4a0();
          } while (extraout_w10_04 != 0);
        }
        *(undefined4 *)(param_2 + 2) = 1;
      }
      func_0x00010743bdbc();
      alStack_268[0] = param_1;
      if (extraout_x8_06 != 0) {
        do {
          func_0x00010743b4a0();
        } while (extraout_w10_05 != 0);
      }
      uStack_228 = 0;
      func_0x000107432a2c(&lStack_270,plVar5 + 0xf);
      plVar6 = alStack_268;
      FUN_10742acc4();
      plVar4 = &lStack_270;
    }
LAB_10743293c:
    func_0x00010743b24c();
    plVar15 = plVar4;
    if ((bool)uVar2) {
      return plVar6;
    }
  }
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_10742acc4();
  uVar18 = 0x10743295c;
  func_0x00010743b660();
  plVar4 = plVar6;
  ppppppuVar17 = &pppppuStack_1f0;
FUN_10743295c:
  *(undefined8 *)((long)plVar1 + -0x30) = unaff_x22;
  *(long **)((long)plVar1 + -0x28) = param_2;
  *(long **)((long)plVar1 + -0x20) = plVar15;
  *(long **)((long)plVar1 + -0x18) = plVar5;
  *(undefined8 *******)((long)plVar1 + -0x10) = ppppppuVar17;
  *(undefined8 *)((long)plVar1 + -8) = uVar18;
  func_0x00010743c02c();
  do {
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) {
      return plVar4;
    }
    plVar16 = param_2 + 5;
LAB_10743297c:
    while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
      if ((int)plVar15 == 0) goto LAB_1074329a0;
      if (((int)plVar5[9] == 1) && (func_0x00010743bb6c(), (int)plVar4 != 0)) goto LAB_1074329b4;
    }
  } while( true );
LAB_1074329a0:
  plVar4 = plVar16 + 2;
  func_0x000104c32db4(plVar4,plVar5[1] + 0xa8);
  if (((ulong)plVar4 & 1) != 0) {
LAB_1074329b4:
    func_0x00010743b6e0();
  }
  goto LAB_10743297c;
}



/* Entry: 107432628; end: 10743274f;  */

/* WARNING: Possible PIC construction at 0x0001074327bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001074327d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074327c0) */
/* WARNING: Removing unreachable block (ram,0x0001074327d8) */
/* WARNING: Removing unreachable block (ram,0x0001074327e8) */
/* WARNING: Removing unreachable block (ram,0x0001074327f4) */
/* WARNING: Removing unreachable block (ram,0x000107434310) */
/* WARNING: Removing unreachable block (ram,0x000107434338) */
/* WARNING: Removing unreachable block (ram,0x000107434328) */
/* WARNING: Removing unreachable block (ram,0x000107434330) */
/* WARNING: Removing unreachable block (ram,0x00010743433c) */
/* WARNING: Removing unreachable block (ram,0x000107434344) */
/* WARNING: Removing unreachable block (ram,0x00010743434c) */
/* WARNING: Removing unreachable block (ram,0x000107434358) */
/* WARNING: Removing unreachable block (ram,0x000107434374) */
/* WARNING: Removing unreachable block (ram,0x000107434364) */
/* WARNING: Removing unreachable block (ram,0x00010743436c) */
/* WARNING: Removing unreachable block (ram,0x000107434378) */
/* WARNING: Removing unreachable block (ram,0x000107434380) */
/* WARNING: Removing unreachable block (ram,0x000107434384) */
/* WARNING: Removing unreachable block (ram,0x0001074343a0) */
/* WARNING: Removing unreachable block (ram,0x000107434390) */
/* WARNING: Removing unreachable block (ram,0x000107434398) */
/* WARNING: Removing unreachable block (ram,0x0001074343a4) */
/* WARNING: Removing unreachable block (ram,0x0001074343ac) */
/* WARNING: Removing unreachable block (ram,0x0001074343b4) */
/* WARNING: Removing unreachable block (ram,0x0001074343b8) */
/* WARNING: Removing unreachable block (ram,0x0001074343d8) */
/* WARNING: Removing unreachable block (ram,0x0001074343c4) */
/* WARNING: Removing unreachable block (ram,0x0001074343cc) */
/* WARNING: Removing unreachable block (ram,0x0001074343dc) */
/* WARNING: Removing unreachable block (ram,0x0001074343e4) */
/* WARNING: Removing unreachable block (ram,0x0001074343ec) */

long * FUN_107432628(long param_1,long *param_2,long *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x8_12;
  ulong extraout_x8_13;
  ulong extraout_x8_14;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong uVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  undefined4 extraout_w10_06;
  undefined4 extraout_w10_07;
  undefined4 extraout_w10_08;
  undefined4 extraout_w10_09;
  undefined4 extraout_w10_10;
  undefined4 extraout_w10_11;
  undefined4 uVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 uVar5;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong extraout_x12_02;
  ulong extraout_x12_03;
  ulong extraout_x12_04;
  ulong uVar6;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long lVar7;
  long extraout_x14;
  long extraout_x14_00;
  long extraout_x14_01;
  long extraout_x14_02;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *plVar11;
  long *unaff_x21;
  undefined8 unaff_x22;
  long *plVar12;
  undefined8 ******ppppppuVar13;
  undefined8 uVar14;
  long in_register_00005008;
  long lStack_1a0;
  long alStack_198 [8];
  undefined4 uStack_158;
  undefined8 *****pppppuStack_120;
  code *pcStack_118;
  undefined1 auStack_110 [8];
  long lStack_108;
  long lStack_100;
  undefined4 uStack_c0;
  long *plStack_b0;
  undefined8 ****ppppuStack_a0;
  code *pcStack_98;
  long lStack_90;
  long alStack_88 [8];
  undefined4 uStack_48;
  
  func_0x00010743b804();
  func_0x00010743b2d4();
  uVar1 = (int)param_3[9] == 1;
  if ((bool)uVar1) {
    func_0x0001074329c4();
    param_2 = unaff_x19 + 0x1c;
    param_3 = unaff_x20 + 1;
    FUN_107436130();
    if (param_2 == (long *)0x0) goto LAB_107432730;
    func_0x00010743b24c();
    if ((bool)uVar1) {
      plVar12 = unaff_x19 + 0x1c;
      func_0x00010743bc24();
      if ((bool)uVar1) {
        uVar1 = 1;
      }
      else {
        uVar1 = extraout_x8_07 == extraout_x9;
        if (extraout_x9 <= extraout_x8_07) {
          func_0x00010743c114();
        }
      }
      do {
        func_0x00010743bfdc();
      } while (!(bool)uVar1);
      uVar9 = extraout_x8_08;
      uVar3 = extraout_x9_00;
      uVar4 = extraout_w10_06;
      uVar5 = extraout_var;
      uVar6 = extraout_x12;
      lVar7 = extraout_x13;
      if ((long *)CONCAT44(extraout_var,extraout_w10_06) == plVar12 + 2) {
LAB_107434bac:
        if (unaff_x19 == (long *)0x0) {
LAB_107434bd8:
          *(undefined8 *)(lVar7 + uVar9 * 8) = 0;
          lVar8 = *param_2;
          goto LAB_107434be0;
        }
        if ((uVar3 & uVar6) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = unaff_x19[1] == uVar3;
          if (uVar3 <= (ulong)unaff_x19[1]) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar9 = extraout_x8_10;
        uVar3 = extraout_x9_02;
        uVar4 = extraout_w10_08;
        uVar5 = extraout_var_01;
        uVar6 = extraout_x12_01;
        lVar7 = extraout_x13_01;
        lVar8 = extraout_x14_00;
        if (!(bool)uVar1) goto LAB_107434bd8;
      }
      else {
        uVar9 = *(ulong *)(CONCAT44(extraout_var,extraout_w10_06) + 8);
        if ((extraout_x9_00 & extraout_x12) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = uVar9 == extraout_x9_00;
          if (extraout_x9_00 <= uVar9) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar9 = extraout_x8_09;
        uVar3 = extraout_x9_01;
        uVar4 = extraout_w10_07;
        uVar5 = extraout_var_00;
        uVar6 = extraout_x12_00;
        lVar7 = extraout_x13_00;
        lVar8 = extraout_x14;
        if (!(bool)uVar1) goto LAB_107434bac;
LAB_107434be0:
        if (lVar8 == 0) goto LAB_107434c18;
      }
      uVar10 = *(ulong *)(lVar8 + 8);
      if ((uVar3 & uVar6) == 0) {
        uVar10 = uVar10 & uVar6;
      }
      else if (uVar3 <= uVar10) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar10 / uVar3;
        }
        uVar10 = uVar10 - uVar6 * uVar3;
      }
      if (uVar10 != uVar9) {
        *(ulong *)(lVar7 + uVar10 * 8) = CONCAT44(uVar5,uVar4);
      }
LAB_107434c18:
      func_0x00010743b4ec();
      func_0x000107434c2c();
      return unaff_x19;
    }
  }
  else {
    if ((int)param_3[9] == 0) {
      unaff_x21 = unaff_x19 + 0x1c;
      FUN_107435ef0(unaff_x21,unaff_x20[1] + 0x58);
      uVar1 = (int)unaff_x21[2] == 1;
      if ((bool)uVar1) {
        func_0x00010743bdbc();
        if (extraout_x8 != 0) {
          do {
            func_0x00010743b4a0();
          } while (extraout_w10 != 0);
        }
        func_0x00010743c460();
        FUN_107434ccc();
      }
      else {
        FUN_107434c84(unaff_x21);
        func_0x00010743bdbc();
        unaff_x21[1] = in_register_00005008;
        *unaff_x21 = param_1;
        if (extraout_x8_00 != 0) {
          do {
            func_0x00010743b4a0();
          } while (extraout_w10_00 != 0);
        }
        *(undefined4 *)(unaff_x21 + 2) = 1;
      }
      func_0x00010743bdbc();
      alStack_88[0] = param_1;
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010743b4a0();
        } while (extraout_w10_01 != 0);
      }
      uStack_48 = 0;
      param_3 = unaff_x19 + 10;
      func_0x0001074329c4(&lStack_90);
      param_2 = alStack_88;
      FUN_10743636c();
      unaff_x20 = &lStack_90;
    }
LAB_107432730:
    func_0x00010743b24c();
    if ((bool)uVar1) {
      return param_2;
    }
  }
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_10743636c();
  func_0x00010743b660();
  plVar12 = (long *)auStack_110;
  pcStack_98 = FUN_107432750;
  ppppppuVar13 = (undefined8 ******)&ppppuStack_a0;
  plStack_b0 = unaff_x20;
  ppppuStack_a0 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x00010743b804();
  func_0x00010743b2e8();
  bVar2 = (int)param_3[9] == 1;
  plVar11 = unaff_x20;
  if (bVar2) {
    uVar14 = 0x1074327d8;
    goto FUN_10743295c;
  }
  if ((int)param_3[9] == 0) {
    FUN_1074306fc(unaff_x19 + 0x17,unaff_x20[1] + 0xa8);
    FUN_10743072c();
    func_0x00010743bdbc();
    lStack_100 = param_1;
    if (extraout_x8_03 != 0) {
      do {
        func_0x00010743b4a0();
      } while (extraout_w10_02 != 0);
    }
    uStack_c0 = 0;
    uVar14 = 0x1074327c0;
    plVar12 = (long *)auStack_110;
    unaff_x20 = &lStack_108;
    plVar11 = &lStack_108;
    goto FUN_10743295c;
  }
  func_0x00010743b264(extraout_x8_02);
  if (bVar2) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_1073f01e4();
  func_0x00010743b660();
  plVar12 = &lStack_1a0;
  pcStack_118 = FUN_107432834;
  pppppuStack_120 = ppppppuVar13;
  func_0x00010743b804();
  func_0x00010743b2d4();
  uVar1 = (int)param_3[9] == 1;
  if ((bool)uVar1) {
    func_0x000107432a2c(unaff_x20,unaff_x19 + 0xf);
    param_2 = unaff_x19 + 0x26;
    FUN_10743746c(param_2,unaff_x20 + 1);
    if (param_2 == (long *)0x0) goto LAB_10743293c;
    func_0x00010743b24c();
    if ((bool)uVar1) {
      plVar12 = unaff_x19 + 0x26;
      func_0x00010743bc24();
      if ((bool)uVar1) {
        uVar1 = 1;
      }
      else {
        uVar1 = extraout_x8_11 == extraout_x9_03;
        if (extraout_x9_03 <= extraout_x8_11) {
          func_0x00010743c114();
        }
      }
      do {
        func_0x00010743bfdc();
      } while (!(bool)uVar1);
      uVar9 = extraout_x8_12;
      uVar3 = extraout_x9_04;
      uVar4 = extraout_w10_09;
      uVar5 = extraout_var_02;
      uVar6 = extraout_x12_02;
      lVar7 = extraout_x13_02;
      if ((long *)CONCAT44(extraout_var_02,extraout_w10_09) == plVar12 + 2) {
LAB_107434e04:
        if (unaff_x19 == (long *)0x0) {
LAB_107434e30:
          *(undefined8 *)(lVar7 + uVar9 * 8) = 0;
          lVar8 = *param_2;
          goto LAB_107434e38;
        }
        if ((uVar3 & uVar6) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = unaff_x19[1] == uVar3;
          if (uVar3 <= (ulong)unaff_x19[1]) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar9 = extraout_x8_14;
        uVar3 = extraout_x9_06;
        uVar4 = extraout_w10_11;
        uVar5 = extraout_var_04;
        uVar6 = extraout_x12_04;
        lVar7 = extraout_x13_04;
        lVar8 = extraout_x14_02;
        if (!(bool)uVar1) goto LAB_107434e30;
      }
      else {
        uVar9 = *(ulong *)(CONCAT44(extraout_var_02,extraout_w10_09) + 8);
        if ((extraout_x9_04 & extraout_x12_02) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = uVar9 == extraout_x9_04;
          if (extraout_x9_04 <= uVar9) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar9 = extraout_x8_13;
        uVar3 = extraout_x9_05;
        uVar4 = extraout_w10_10;
        uVar5 = extraout_var_03;
        uVar6 = extraout_x12_03;
        lVar7 = extraout_x13_03;
        lVar8 = extraout_x14_01;
        if (!(bool)uVar1) goto LAB_107434e04;
LAB_107434e38:
        if (lVar8 == 0) goto LAB_107434e70;
      }
      uVar10 = *(ulong *)(lVar8 + 8);
      if ((uVar3 & uVar6) == 0) {
        uVar10 = uVar10 & uVar6;
      }
      else if (uVar3 <= uVar10) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar10 / uVar3;
        }
        uVar10 = uVar10 - uVar6 * uVar3;
      }
      if (uVar10 != uVar9) {
        *(ulong *)(lVar7 + uVar10 * 8) = CONCAT44(uVar5,uVar4);
      }
LAB_107434e70:
      func_0x00010743b4ec();
      func_0x000107434e84();
      return unaff_x19;
    }
  }
  else {
    if ((int)param_3[9] == 0) {
      unaff_x21 = unaff_x19 + 0x26;
      FUN_10743722c(unaff_x21,unaff_x20[1] + 0x28);
      uVar1 = (int)unaff_x21[2] == 1;
      if ((bool)uVar1) {
        func_0x00010743bdbc();
        if (extraout_x8_04 != 0) {
          do {
            func_0x00010743b4a0();
          } while (extraout_w10_03 != 0);
        }
        func_0x00010743c460();
        FUN_107434f24();
      }
      else {
        FUN_107434edc(unaff_x21);
        func_0x00010743bdbc();
        unaff_x21[1] = in_register_00005008;
        *unaff_x21 = param_1;
        if (extraout_x8_05 != 0) {
          do {
            func_0x00010743b4a0();
          } while (extraout_w10_04 != 0);
        }
        *(undefined4 *)(unaff_x21 + 2) = 1;
      }
      func_0x00010743bdbc();
      alStack_198[0] = param_1;
      if (extraout_x8_06 != 0) {
        do {
          func_0x00010743b4a0();
        } while (extraout_w10_05 != 0);
      }
      uStack_158 = 0;
      func_0x000107432a2c(&lStack_1a0,unaff_x19 + 0xf);
      param_2 = alStack_198;
      FUN_10742acc4();
      unaff_x20 = &lStack_1a0;
    }
LAB_10743293c:
    func_0x00010743b24c();
    plVar11 = unaff_x20;
    if ((bool)uVar1) {
      return param_2;
    }
  }
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_10742acc4();
  uVar14 = 0x10743295c;
  func_0x00010743b660();
  unaff_x20 = param_2;
  ppppppuVar13 = &pppppuStack_120;
FUN_10743295c:
  *(undefined8 *)((long)plVar12 + -0x30) = unaff_x22;
  *(long **)((long)plVar12 + -0x28) = unaff_x21;
  *(long **)((long)plVar12 + -0x20) = plVar11;
  *(long **)((long)plVar12 + -0x18) = unaff_x19;
  *(undefined8 *******)((long)plVar12 + -0x10) = ppppppuVar13;
  *(undefined8 *)((long)plVar12 + -8) = uVar14;
  func_0x00010743c02c();
  do {
    unaff_x21 = (long *)*unaff_x21;
    if (unaff_x21 == (long *)0x0) {
      return unaff_x20;
    }
    plVar12 = unaff_x21 + 5;
LAB_10743297c:
    while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
      if ((int)plVar11 == 0) goto LAB_1074329a0;
      if (((int)unaff_x19[9] == 1) && (func_0x00010743bb6c(), (int)unaff_x20 != 0))
      goto LAB_1074329b4;
    }
  } while( true );
LAB_1074329a0:
  unaff_x20 = plVar12 + 2;
  func_0x000104c32db4(unaff_x20,unaff_x19[1] + 0xa8);
  if (((ulong)unaff_x20 & 1) != 0) {
LAB_1074329b4:
    func_0x00010743b6e0();
  }
  goto LAB_10743297c;
}



/* Entry: 107432750; end: 107432833;  */

long * FUN_107432750(long param_1,long *param_2,long *param_3)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x8_10;
  ulong extraout_x8_11;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong uVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined4 extraout_w10_03;
  undefined4 extraout_w10_04;
  undefined4 extraout_w10_05;
  undefined4 extraout_w10_06;
  undefined4 extraout_w10_07;
  undefined4 extraout_w10_08;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 uVar4;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong extraout_x12_02;
  ulong extraout_x12_03;
  ulong extraout_x12_04;
  ulong uVar5;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  long extraout_x13_03;
  long extraout_x13_04;
  long lVar6;
  long extraout_x14;
  long extraout_x14_00;
  long extraout_x14_01;
  long extraout_x14_02;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long *plVar10;
  long in_register_00005008;
  undefined1 auStack_110 [8];
  long alStack_108 [8];
  undefined4 uStack_c8;
  undefined1 auStack_78 [8];
  long alStack_70 [8];
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010743b804();
  func_0x00010743b2e8();
  uVar1 = (int)param_3[9] == 1;
  uStack_28 = extraout_x8;
  if ((bool)uVar1) {
    FUN_10743295c();
    param_2 = unaff_x19 + 0x17;
    param_3 = (long *)(unaff_x20 + 8);
    FUN_10743a040();
    if (param_2 == (long *)0x0) goto LAB_10743280c;
    func_0x00010743b264(uStack_28);
    if ((bool)uVar1) {
      plVar10 = unaff_x19 + 0x17;
      func_0x00010743bc24();
      if ((bool)uVar1) {
        uVar1 = 1;
      }
      else {
        uVar1 = extraout_x8_04 == extraout_x9;
        if (extraout_x9 <= extraout_x8_04) {
          func_0x00010743c114();
        }
      }
      do {
        func_0x00010743bfdc();
      } while (!(bool)uVar1);
      uVar8 = extraout_x8_05;
      uVar2 = extraout_x9_00;
      uVar3 = extraout_w10_03;
      uVar4 = extraout_var;
      uVar5 = extraout_x12;
      lVar6 = extraout_x13;
      if ((long *)CONCAT44(extraout_var,extraout_w10_03) == plVar10 + 2) {
LAB_107434380:
        if (unaff_x19 == (long *)0x0) {
LAB_1074343ac:
          *(undefined8 *)(lVar6 + uVar8 * 8) = 0;
          lVar7 = *param_2;
          goto LAB_1074343b4;
        }
        if ((uVar2 & uVar5) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = unaff_x19[1] == uVar2;
          if (uVar2 <= (ulong)unaff_x19[1]) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar8 = extraout_x8_07;
        uVar2 = extraout_x9_02;
        uVar3 = extraout_w10_05;
        uVar4 = extraout_var_01;
        uVar5 = extraout_x12_01;
        lVar6 = extraout_x13_01;
        lVar7 = extraout_x14_00;
        if (!(bool)uVar1) goto LAB_1074343ac;
      }
      else {
        uVar8 = *(ulong *)(CONCAT44(extraout_var,extraout_w10_03) + 8);
        if ((extraout_x9_00 & extraout_x12) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = uVar8 == extraout_x9_00;
          if (extraout_x9_00 <= uVar8) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar8 = extraout_x8_06;
        uVar2 = extraout_x9_01;
        uVar3 = extraout_w10_04;
        uVar4 = extraout_var_00;
        uVar5 = extraout_x12_00;
        lVar6 = extraout_x13_00;
        lVar7 = extraout_x14;
        if (!(bool)uVar1) goto LAB_107434380;
LAB_1074343b4:
        if (lVar7 == 0) goto LAB_1074343ec;
      }
      uVar9 = *(ulong *)(lVar7 + 8);
      if ((uVar2 & uVar5) == 0) {
        uVar9 = uVar9 & uVar5;
      }
      else if (uVar2 <= uVar9) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar9 / uVar2;
        }
        uVar9 = uVar9 - uVar5 * uVar2;
      }
      if (uVar9 != uVar8) {
        *(ulong *)(lVar6 + uVar9 * 8) = CONCAT44(uVar4,uVar3);
      }
LAB_1074343ec:
      func_0x00010743b4ec();
      func_0x000107434400();
      return unaff_x19;
    }
  }
  else {
    if ((int)param_3[9] == 0) {
      FUN_1074306fc(unaff_x19 + 0x17,*(long *)(unaff_x20 + 8) + 0xa8);
      FUN_10743072c();
      func_0x00010743bdbc();
      alStack_70[0] = param_1;
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010743b4a0();
        } while (extraout_w10 != 0);
      }
      unaff_x20 = auStack_78;
      uStack_30 = 0;
      param_3 = unaff_x19 + 5;
      FUN_10743295c(auStack_78);
      param_2 = alStack_70;
      FUN_1073f01e4();
    }
LAB_10743280c:
    func_0x00010743b264(uStack_28);
    if ((bool)uVar1) {
      return param_2;
    }
  }
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_1073f01e4();
  func_0x00010743b660();
  func_0x00010743b804();
  func_0x00010743b2d4();
  uVar1 = (int)param_3[9] == 1;
  if ((bool)uVar1) {
    func_0x000107432a2c(unaff_x20,unaff_x19 + 0xf);
    param_2 = unaff_x19 + 0x26;
    FUN_10743746c(param_2,unaff_x20 + 8);
    if (param_2 != (long *)0x0) {
      func_0x00010743b24c();
      if (!(bool)uVar1) goto LAB_10743294c;
      plVar10 = unaff_x19 + 0x26;
      func_0x00010743bc24();
      if ((bool)uVar1) {
        uVar1 = 1;
      }
      else {
        uVar1 = extraout_x8_08 == extraout_x9_03;
        if (extraout_x9_03 <= extraout_x8_08) {
          func_0x00010743c114();
        }
      }
      do {
        func_0x00010743bfdc();
      } while (!(bool)uVar1);
      uVar8 = extraout_x8_09;
      uVar2 = extraout_x9_04;
      uVar3 = extraout_w10_06;
      uVar4 = extraout_var_02;
      uVar5 = extraout_x12_02;
      lVar6 = extraout_x13_02;
      if ((long *)CONCAT44(extraout_var_02,extraout_w10_06) == plVar10 + 2) {
LAB_107434e04:
        if (unaff_x19 == (long *)0x0) {
LAB_107434e30:
          *(undefined8 *)(lVar6 + uVar8 * 8) = 0;
          lVar7 = *param_2;
          goto LAB_107434e38;
        }
        if ((uVar2 & uVar5) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = unaff_x19[1] == uVar2;
          if (uVar2 <= (ulong)unaff_x19[1]) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar8 = extraout_x8_11;
        uVar2 = extraout_x9_06;
        uVar3 = extraout_w10_08;
        uVar4 = extraout_var_04;
        uVar5 = extraout_x12_04;
        lVar6 = extraout_x13_04;
        lVar7 = extraout_x14_02;
        if (!(bool)uVar1) goto LAB_107434e30;
      }
      else {
        uVar8 = *(ulong *)(CONCAT44(extraout_var_02,extraout_w10_06) + 8);
        if ((extraout_x9_04 & extraout_x12_02) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = uVar8 == extraout_x9_04;
          if (extraout_x9_04 <= uVar8) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar8 = extraout_x8_10;
        uVar2 = extraout_x9_05;
        uVar3 = extraout_w10_07;
        uVar4 = extraout_var_03;
        uVar5 = extraout_x12_03;
        lVar6 = extraout_x13_03;
        lVar7 = extraout_x14_01;
        if (!(bool)uVar1) goto LAB_107434e04;
LAB_107434e38:
        if (lVar7 == 0) goto LAB_107434e70;
      }
      uVar9 = *(ulong *)(lVar7 + 8);
      if ((uVar2 & uVar5) == 0) {
        uVar9 = uVar9 & uVar5;
      }
      else if (uVar2 <= uVar9) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar9 / uVar2;
        }
        uVar9 = uVar9 - uVar5 * uVar2;
      }
      if (uVar9 != uVar8) {
        *(ulong *)(lVar6 + uVar9 * 8) = CONCAT44(uVar4,uVar3);
      }
LAB_107434e70:
      func_0x00010743b4ec();
      func_0x000107434e84();
      return unaff_x19;
    }
  }
  else if ((int)param_3[9] == 0) {
    unaff_x21 = unaff_x19 + 0x26;
    FUN_10743722c(unaff_x21,*(long *)(unaff_x20 + 8) + 0x28);
    uVar1 = (int)unaff_x21[2] == 1;
    if ((bool)uVar1) {
      func_0x00010743bdbc();
      if (extraout_x8_01 != 0) {
        do {
          func_0x00010743b4a0();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010743c460();
      FUN_107434f24();
    }
    else {
      FUN_107434edc(unaff_x21);
      func_0x00010743bdbc();
      unaff_x21[1] = in_register_00005008;
      *unaff_x21 = param_1;
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010743b4a0();
        } while (extraout_w10_01 != 0);
      }
      *(undefined4 *)(unaff_x21 + 2) = 1;
    }
    func_0x00010743bdbc();
    alStack_108[0] = param_1;
    if (extraout_x8_03 != 0) {
      do {
        func_0x00010743b4a0();
      } while (extraout_w10_02 != 0);
    }
    uStack_c8 = 0;
    func_0x000107432a2c(auStack_110,unaff_x19 + 0xf);
    param_2 = alStack_108;
    FUN_10742acc4();
    unaff_x20 = auStack_110;
  }
  func_0x00010743b24c();
  if ((bool)uVar1) {
    return param_2;
  }
LAB_10743294c:
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_10742acc4();
  func_0x00010743b660();
  func_0x00010743c02c();
  do {
    unaff_x21 = (long *)*unaff_x21;
    if (unaff_x21 == (long *)0x0) {
      return param_2;
    }
    plVar10 = unaff_x21 + 5;
LAB_10743297c:
    while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
      if ((int)unaff_x20 == 0) goto LAB_1074329a0;
      if (((int)unaff_x19[9] == 1) && (func_0x00010743bb6c(), (int)param_2 != 0))
      goto LAB_1074329b4;
    }
  } while( true );
LAB_1074329a0:
  param_2 = plVar10 + 2;
  func_0x000104c32db4(param_2,unaff_x19[1] + 0xa8);
  if (((ulong)param_2 & 1) != 0) {
LAB_1074329b4:
    func_0x00010743b6e0();
  }
  goto LAB_10743297c;
}



/* Entry: 107432834; end: 10743295b;  */

long * FUN_107432834(long param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined4 extraout_w10_02;
  undefined4 extraout_w10_03;
  undefined4 extraout_w10_04;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar4;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong uVar5;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long lVar6;
  long extraout_x14;
  long extraout_x14_00;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x19;
  undefined1 *unaff_x20;
  long *unaff_x21;
  long *plVar10;
  long in_register_00005008;
  undefined1 auStack_90 [8];
  long alStack_88 [8];
  undefined4 uStack_48;
  
  func_0x00010743b804();
  func_0x00010743b2d4();
  uVar1 = *(int *)(param_3 + 0x48) == 1;
  if ((bool)uVar1) {
    func_0x000107432a2c();
    param_2 = unaff_x19 + 0x26;
    FUN_10743746c(param_2,unaff_x20 + 8);
    if (param_2 != (long *)0x0) {
      func_0x00010743b24c();
      if (!(bool)uVar1) goto LAB_10743294c;
      plVar10 = unaff_x19 + 0x26;
      func_0x00010743bc24();
      if ((bool)uVar1) {
        uVar1 = 1;
      }
      else {
        uVar1 = extraout_x8_02 == extraout_x9;
        if (extraout_x9 <= extraout_x8_02) {
          func_0x00010743c114();
        }
      }
      do {
        func_0x00010743bfdc();
      } while (!(bool)uVar1);
      uVar8 = extraout_x8_03;
      uVar2 = extraout_x9_00;
      uVar3 = extraout_w10_02;
      uVar4 = extraout_var;
      uVar5 = extraout_x12;
      lVar6 = extraout_x13;
      if ((long *)CONCAT44(extraout_var,extraout_w10_02) == plVar10 + 2) {
LAB_107434e04:
        if (unaff_x19 == (long *)0x0) {
LAB_107434e30:
          *(undefined8 *)(lVar6 + uVar8 * 8) = 0;
          lVar7 = *param_2;
          goto LAB_107434e38;
        }
        if ((uVar2 & uVar5) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = unaff_x19[1] == uVar2;
          if (uVar2 <= (ulong)unaff_x19[1]) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar8 = extraout_x8_05;
        uVar2 = extraout_x9_02;
        uVar3 = extraout_w10_04;
        uVar4 = extraout_var_01;
        uVar5 = extraout_x12_01;
        lVar6 = extraout_x13_01;
        lVar7 = extraout_x14_00;
        if (!(bool)uVar1) goto LAB_107434e30;
      }
      else {
        uVar8 = *(ulong *)(CONCAT44(extraout_var,extraout_w10_02) + 8);
        if ((extraout_x9_00 & extraout_x12) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = uVar8 == extraout_x9_00;
          if (extraout_x9_00 <= uVar8) {
            func_0x00010743bef4();
          }
        }
        func_0x00010743bee8();
        uVar8 = extraout_x8_04;
        uVar2 = extraout_x9_01;
        uVar3 = extraout_w10_03;
        uVar4 = extraout_var_00;
        uVar5 = extraout_x12_00;
        lVar6 = extraout_x13_00;
        lVar7 = extraout_x14;
        if (!(bool)uVar1) goto LAB_107434e04;
LAB_107434e38:
        if (lVar7 == 0) goto LAB_107434e70;
      }
      uVar9 = *(ulong *)(lVar7 + 8);
      if ((uVar2 & uVar5) == 0) {
        uVar9 = uVar9 & uVar5;
      }
      else if (uVar2 <= uVar9) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar9 / uVar2;
        }
        uVar9 = uVar9 - uVar5 * uVar2;
      }
      if (uVar9 != uVar8) {
        *(ulong *)(lVar6 + uVar9 * 8) = CONCAT44(uVar4,uVar3);
      }
LAB_107434e70:
      func_0x00010743b4ec();
      func_0x000107434e84();
      return unaff_x19;
    }
  }
  else if (*(int *)(param_3 + 0x48) == 0) {
    unaff_x21 = unaff_x19 + 0x26;
    FUN_10743722c(unaff_x21,*(long *)(unaff_x20 + 8) + 0x28);
    uVar1 = (int)unaff_x21[2] == 1;
    if ((bool)uVar1) {
      func_0x00010743bdbc();
      if (extraout_x8 != 0) {
        do {
          func_0x00010743b4a0();
        } while (extraout_w10 != 0);
      }
      func_0x00010743c460();
      FUN_107434f24();
    }
    else {
      FUN_107434edc(unaff_x21);
      func_0x00010743bdbc();
      unaff_x21[1] = in_register_00005008;
      *unaff_x21 = param_1;
      if (extraout_x8_00 != 0) {
        do {
          func_0x00010743b4a0();
        } while (extraout_w10_00 != 0);
      }
      *(undefined4 *)(unaff_x21 + 2) = 1;
    }
    func_0x00010743bdbc();
    alStack_88[0] = param_1;
    if (extraout_x8_01 != 0) {
      do {
        func_0x00010743b4a0();
      } while (extraout_w10_01 != 0);
    }
    uStack_48 = 0;
    func_0x000107432a2c(auStack_90,unaff_x19 + 0xf);
    param_2 = alStack_88;
    FUN_10742acc4();
    unaff_x20 = auStack_90;
  }
  func_0x00010743b24c();
  if ((bool)uVar1) {
    return param_2;
  }
LAB_10743294c:
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_10742acc4();
  func_0x00010743b660();
  func_0x00010743c02c();
  do {
    unaff_x21 = (long *)*unaff_x21;
    if (unaff_x21 == (long *)0x0) {
      return param_2;
    }
    plVar10 = unaff_x21 + 5;
LAB_10743297c:
    while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
      if ((int)unaff_x20 == 0) goto LAB_1074329a0;
      if (((int)unaff_x19[9] == 1) && (func_0x00010743bb6c(), (int)param_2 != 0))
      goto LAB_1074329b4;
    }
  } while( true );
LAB_1074329a0:
  param_2 = plVar10 + 2;
  func_0x000104c32db4(param_2,unaff_x19[1] + 0xa8);
  if (((ulong)param_2 & 1) != 0) {
LAB_1074329b4:
    func_0x00010743b6e0();
  }
  goto LAB_10743297c;
}



/* Entry: 10743295c; end: 107432a93;  */

void FUN_10743295c(ulong param_1)

{
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *plVar1;
  
  func_0x00010743c02c();
  do {
    unaff_x21 = (long *)*unaff_x21;
    if (unaff_x21 == (long *)0x0) {
      return;
    }
    plVar1 = unaff_x21 + 5;
LAB_10743297c:
    while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
      if (unaff_w20 == 0) goto LAB_1074329a0;
      if ((*(int *)(unaff_x19 + 0x48) == 1) && (func_0x00010743bb6c(), (int)param_1 != 0))
      goto LAB_1074329b4;
    }
  } while( true );
LAB_1074329a0:
  param_1 = (ulong)(plVar1 + 2);
  func_0x000104c32db4(param_1,*(long *)(unaff_x19 + 8) + 0xa8);
  if ((param_1 & 1) != 0) {
LAB_1074329b4:
    func_0x00010743b6e0();
  }
  goto LAB_10743297c;
}



/* Entry: 107432a94; end: 107432afb;  */

void FUN_107432a94(void)

{
  FUN_10743b128();
  return;
}



/* Entry: 107432afc; end: 107432c8b;  */

void FUN_107432afc(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010743b73c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x78;
    func_0x000107432b30();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107432c8c; end: 107432caf;  */

void FUN_107432c8c(void)

{
  func_0x00010743b51c();
  FUN_107432cb0();
  return;
}



/* Entry: 107432cb0; end: 107432cc3;  */

void FUN_107432cb0(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_107432cdc();
    func_0x00010743bdc8();
    return;
  }
  return;
}



/* Entry: 107432cc4; end: 107432cdb;  */

void FUN_107432cc4(void)

{
  FUN_107432cdc();
  func_0x00010743bdc8();
  return;
}



/* Entry: 107432cdc; end: 107432d03;  */

void FUN_107432cdc(void)

{
  func_0x00010743c54c();
  FUN_107432d04();
  return;
}



/* Entry: 107432d04; end: 107432d2f;  */

void FUN_107432d04(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  func_0x00010743c1b0();
  uVar1 = 0x68;
  __Znwm();
  func_0x000107432c64();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 107432d30; end: 107432d57;  */

void FUN_107432d30(long param_1)

{
  undefined4 extraout_w8;
  
  FUN_10743b574();
  *(undefined4 *)(param_1 + 0x40) = extraout_w8;
  FUN_107432d58();
  return;
}



/* Entry: 107432d58; end: 107432d97;  */

void FUN_107432d58(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x00010743b804();
  FUN_107432d98();
  func_0x00010743c0b4();
  if (!(bool)in_ZR) {
    func_0x00010743b310(&PTR_DAT_1109af4c0);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 107432d98; end: 107432ddb;  */

void FUN_107432d98(long param_1)

{
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    func_0x00010743b5c8((&PTR_FUN_1109af4a8)[*(uint *)(param_1 + 0x40)]);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 107432ddc; end: 107432dff;  */

void FUN_107432ddc(void)

{
  return;
}



/* Entry: 107432e00; end: 107432e5f;  */

void FUN_107432e00(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010727da70();
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 107432e60; end: 107432e83;  */

void FUN_107432e60(void)

{
  func_0x00010743b51c();
  FUN_107432e84();
  return;
}



/* Entry: 107432e84; end: 107432e97;  */

void FUN_107432e84(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_107432eb0();
    func_0x00010743bdc8();
    return;
  }
  return;
}



/* Entry: 107432e98; end: 107432eaf;  */

void FUN_107432e98(void)

{
  FUN_107432eb0();
  func_0x00010743bdc8();
  return;
}



/* Entry: 107432eb0; end: 107432ed7;  */

void FUN_107432eb0(void)

{
  func_0x00010743c54c();
  FUN_107432ed8();
  return;
}



/* Entry: 107432ed8; end: 107432f2b;  */

void FUN_107432ed8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  func_0x00010743c1b0();
  uVar1 = 0x98;
  __Znwm();
  func_0x000107432e2c();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 107432f2c; end: 107432f4f;  */

void FUN_107432f2c(void)

{
  func_0x00010743b51c();
  FUN_107432f50();
  return;
}



/* Entry: 107432f50; end: 107432f63;  */

void FUN_107432f50(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_107432f7c();
    func_0x00010743bdc8();
    return;
  }
  return;
}



/* Entry: 107432f64; end: 107432f7b;  */

void FUN_107432f64(void)

{
  FUN_107432f7c();
  func_0x00010743bdc8();
  return;
}



/* Entry: 107432f7c; end: 107432fa3;  */

void FUN_107432f7c(void)

{
  func_0x00010743c54c();
  FUN_107432fa4();
  return;
}



/* Entry: 107432fa4; end: 107432ff3;  */

void FUN_107432fa4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010743c1b0();
  func_0x00010743c1e4();
  func_0x000107432f04();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 107432ff4; end: 107433017;  */

void FUN_107432ff4(void)

{
  func_0x00010743b51c();
  FUN_107433018();
  return;
}



/* Entry: 107433018; end: 10743302b;  */

void FUN_107433018(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    FUN_107433044();
    func_0x00010743bdc8();
    return;
  }
  return;
}



/* Entry: 10743302c; end: 107433043;  */

void FUN_10743302c(void)

{
  FUN_107433044();
  func_0x00010743bdc8();
  return;
}



/* Entry: 107433044; end: 10743306b;  */

void FUN_107433044(void)

{
  func_0x00010743c54c();
  FUN_10743306c();
  return;
}



/* Entry: 10743306c; end: 107433093;  */

void FUN_10743306c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010743c1b0();
  func_0x00010743ba58();
  func_0x000107432fcc();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 107433094; end: 1074330bb;  */

void FUN_107433094(long param_1)

{
  undefined4 extraout_w8;
  
  FUN_10743b574();
  *(undefined4 *)(param_1 + 0x38) = extraout_w8;
  FUN_1074330bc();
  return;
}



/* Entry: 1074330bc; end: 1074330fb;  */

void FUN_1074330bc(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x00010743b804();
  FUN_1073e64d8();
  func_0x00010743c41c();
  if (!(bool)in_ZR) {
    func_0x00010743b310(&PTR_FUN_1109af4d8);
    *(undefined4 *)(unaff_x19 + 0x38) = unaff_w21;
  }
  return;
}



/* Entry: 1074330fc; end: 10743310f;  */

void FUN_1074330fc(void)

{
  return;
}



/* Entry: 107433110; end: 107433133;  */

void FUN_107433110(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x00010727da70();
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 107433134; end: 10743315b;  */

void FUN_107433134(long param_1)

{
  undefined4 extraout_w8;
  
  FUN_10743b574();
  *(undefined4 *)(param_1 + 0x40) = extraout_w8;
  FUN_10743315c();
  return;
}



/* Entry: 10743315c; end: 10743319b;  */

void FUN_10743315c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x00010743b804();
  FUN_1073debc4();
  func_0x00010743c0b4();
  if (!(bool)in_ZR) {
    func_0x00010743b310(&PTR_FUN_1109af4f0);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 10743319c; end: 1074331ab;  */

void FUN_10743319c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  return;
}



/* Entry: 1074331ac; end: 1074331d3;  */

void FUN_1074331ac(long param_1)

{
  undefined4 extraout_w8;
  
  FUN_10743b574();
  *(undefined4 *)(param_1 + 0x38) = extraout_w8;
  FUN_1074331d4();
  return;
}



/* Entry: 1074331d4; end: 107433213;  */

void FUN_1074331d4(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x00010743b804();
  FUN_107433214();
  func_0x00010743c41c();
  if (!(bool)in_ZR) {
    func_0x00010743b310(&PTR_DAT_1109af510);
    *(undefined4 *)(unaff_x19 + 0x38) = unaff_w21;
  }
  return;
}



/* Entry: 107433214; end: 107433257;  */

void FUN_107433214(long param_1)

{
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    func_0x00010743b5c8((&PTR_FUN_1109af500)[*(uint *)(param_1 + 0x38)]);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 107433258; end: 107433273;  */

void FUN_107433258(void)

{
  return;
}



/* Entry: 107433274; end: 1074332fb;  */

void FUN_107433274(void)

{
  func_0x00010743bf84();
  func_0x000107433298();
  func_0x00010743bbf4();
  return;
}



/* Entry: 1074332fc; end: 10743331b;  */

void FUN_1074332fc(long param_1)

{
  if (*(char *)(param_1 + 400) == '\x01') {
    func_0x000107267da8();
  }
  return;
}



/* Entry: 10743331c; end: 10743337f;  */

void FUN_10743331c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 auStack_1c0 [400];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010743b2b0(param_1);
  uStack_28 = extraout_x9;
  if (*(int *)(param_2 + 0x70) == 0) {
    *(undefined4 *)(extraout_x8 + 0x10) = 1;
  }
  else {
    auStack_1c0[0] = 0;
    uStack_30 = 0;
    func_0x0001077b1090(param_2 + 8,auStack_1c0);
    FUN_1074332fc(auStack_1c0);
  }
  func_0x00010743b264(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001000d03a8(extraout_x8_00,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 107433380; end: 107433383;  */

void FUN_107433380(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 107433384; end: 1074333eb;  */

void FUN_107433384(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 auStack_1c0 [400];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010743b2e8();
  uStack_28 = extraout_x8;
  if (*(int *)(param_2 + 0x30) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    auStack_1c0[0] = 0;
    uStack_30 = 0;
    func_0x0001077b1090(param_1,param_2,auStack_1c0);
    FUN_1074332fc(auStack_1c0);
  }
  func_0x00010743b264(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001000d03a8(extraout_x8_00,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1074333ec; end: 1074333ef;  */

void FUN_1074333ec(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 1074333f0; end: 1074334f7;  */

void FUN_1074333f0(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010743c00c();
  if (extraout_x8 != 0) {
    do {
      func_0x00010743b4a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010743c570();
  func_0x000107433428();
  return;
}



/* Entry: 1074334f8; end: 10743351b;  */

undefined8 FUN_1074334f8(undefined8 param_1)

{
  FUN_10743351c();
  return param_1;
}



/* Entry: 10743351c; end: 10743354f;  */

void FUN_10743351c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
    }
    return;
  }
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      FUN_107433574();
      *(undefined1 *)(param_1 + 1) = 0;
    }
    return;
  }
  FUN_107432cdc();
  func_0x00010743bdc8();
  return;
}



/* Entry: 107433550; end: 107433573;  */

void FUN_107433550(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107433574();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 107433574; end: 107433593;  */

void FUN_107433574(void)

{
  func_0x00010743ba18();
  FUN_107433594();
  return;
}



/* Entry: 107433594; end: 1074335ab;  */

void FUN_107433594(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1074335c8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074335ac; end: 1074335c7;  */

void FUN_1074335ac(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1074335c8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074335c8; end: 1074335ef;  */

void FUN_1074335c8(long param_1)

{
  FUN_107432d98(param_1 + 0x20);
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107433574();
  }
  return;
}



/* Entry: 1074335f0; end: 10743360f;  */

void FUN_1074335f0(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107433574();
  }
  return;
}



/* Entry: 107433610; end: 107433633;  */

undefined8 FUN_107433610(undefined8 param_1)

{
  FUN_107433634();
  return param_1;
}



/* Entry: 107433634; end: 107433687;  */

void FUN_107433634(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x40) != -1 || *(int *)(param_2 + 0x40) != -1) {
    if (*(int *)(param_2 + 0x40) == -1) {
      if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
        func_0x00010743b5c8((&PTR_FUN_1109af4a8)[*(uint *)(param_1 + 0x40)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      return;
    }
    func_0x00010743bc18();
  }
  return;
}



/* Entry: 107433688; end: 10743369b;  */

void FUN_107433688(long *param_1)

{
  if (*(int *)(*param_1 + 0x40) != 0) {
    func_0x00010743bcc0();
    FUN_1074336c4();
  }
  return;
}



/* Entry: 10743369c; end: 1074336c3;  */

void FUN_10743369c(long param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x00010743bcc0();
    FUN_1074336c4();
  }
  return;
}



/* Entry: 1074336c4; end: 1074336e7;  */

void FUN_1074336c4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_107432d98(lVar1);
  *(undefined4 *)(lVar1 + 0x40) = 0;
  return;
}



/* Entry: 1074336e8; end: 1074336ef;  */

void FUN_1074336e8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(*param_1 + 0x40) == 1) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    return;
  }
  func_0x00010743bcc0();
  FUN_10743371c();
  return;
}



/* Entry: 1074336f0; end: 10743371b;  */

void FUN_1074336f0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x40) == 1) {
    uVar1 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    return;
  }
  func_0x00010743bcc0();
  FUN_10743371c();
  return;
}



/* Entry: 10743371c; end: 107433727;  */

void FUN_10743371c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010743b73c(*param_1,param_1[1]);
  FUN_107432d98();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *(undefined4 *)(unaff_x20 + 8) = 1;
  return;
}



/* Entry: 107433728; end: 107433757;  */

void FUN_107433728(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010743b73c();
  FUN_107432d98();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *(undefined4 *)(unaff_x20 + 8) = 1;
  return;
}



/* Entry: 107433758; end: 10743375f;  */

void FUN_107433758(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  if (*(int *)(*param_1 + 0x40) == 2) {
    func_0x00010743b73c(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
    *(undefined1 *)(unaff_x20 + 0x38) = uVar1;
    return;
  }
  func_0x00010743bcc0();
  FUN_1074337bc();
  return;
}



/* Entry: 107433760; end: 10743378b;  */

void FUN_107433760(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x40) == 2) {
    func_0x00010743b73c(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
    *(undefined1 *)(unaff_x20 + 0x38) = uVar1;
    return;
  }
  func_0x00010743bcc0();
  FUN_1074337bc();
  return;
}



/* Entry: 10743378c; end: 1074337bb;  */

void FUN_10743378c(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010743b73c();
  func_0x00010727e15c();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x38) = uVar1;
  return;
}



/* Entry: 1074337bc; end: 1074337c7;  */

void FUN_1074337bc(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010743b73c(*param_1,param_1[1]);
  FUN_107432d98();
  func_0x00010743bdd4();
  FUN_107432e00();
  *(undefined4 *)(unaff_x20 + 0x40) = 2;
  return;
}



/* Entry: 1074337c8; end: 1074337f3;  */

void FUN_1074337c8(void)

{
  long unaff_x20;
  
  func_0x00010743b73c();
  FUN_107432d98();
  func_0x00010743bdd4();
  FUN_107432e00();
  *(undefined4 *)(unaff_x20 + 0x40) = 2;
  return;
}



/* Entry: 1074337f4; end: 107433817;  */

undefined8 FUN_1074337f4(undefined8 param_1)

{
  FUN_107433818();
  return param_1;
}



/* Entry: 107433818; end: 10743384b;  */

void FUN_107433818(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
    }
    return;
  }
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      FUN_107433870();
      *(undefined1 *)(param_1 + 1) = 0;
    }
    return;
  }
  FUN_107432eb0();
  func_0x00010743bdc8();
  return;
}



/* Entry: 10743384c; end: 10743386f;  */

void FUN_10743384c(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107433870();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 107433870; end: 10743388f;  */

void FUN_107433870(void)

{
  func_0x00010743ba18();
  FUN_107433890();
  return;
}



/* Entry: 107433890; end: 1074338a7;  */

void FUN_107433890(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1074338c4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074338a8; end: 1074338c3;  */

void FUN_1074338a8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1074338c4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074338c4; end: 1074338eb;  */

void FUN_1074338c4(long param_1)

{
  FUN_10732442c(param_1 + 0x28);
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107433870();
  }
  return;
}



/* Entry: 1074338ec; end: 10743390b;  */

void FUN_1074338ec(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107433870();
  }
  return;
}



/* Entry: 10743390c; end: 10743392f;  */

undefined8 FUN_10743390c(undefined8 param_1)

{
  FUN_107433930();
  return param_1;
}



/* Entry: 107433930; end: 107433963;  */

void FUN_107433930(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
    }
    return;
  }
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      FUN_107410c74();
      *(undefined1 *)(param_1 + 1) = 0;
    }
    return;
  }
  FUN_107432f7c();
  func_0x00010743bdc8();
  return;
}


