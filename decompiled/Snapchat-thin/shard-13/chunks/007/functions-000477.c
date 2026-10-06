/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ab4cb54; end: 10ab4cc0b;  */

/* WARNING: Possible PIC construction at 0x00010ab4cc28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ab4cc2c) */
/* WARNING: Removing unreachable block (ram,0x00010ab4cc3c) */
/* WARNING: Removing unreachable block (ram,0x00010ab4cc44) */
/* WARNING: Removing unreachable block (ram,0x00010ab4cc4c) */
/* WARNING: Removing unreachable block (ram,0x00010ab4cc54) */
/* WARNING: Removing unreachable block (ram,0x00010ab4cc6c) */
/* WARNING: Removing unreachable block (ram,0x00010ab4cc70) */
/* WARNING: Removing unreachable block (ram,0x00010ab4cc78) */
/* WARNING: Removing unreachable block (ram,0x00010ab4cc80) */
/* WARNING: Removing unreachable block (ram,0x00010ab4cc88) */
/* WARNING: Removing unreachable block (ram,0x00010ab4cc90) */

long * FUN_10ab4cb54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long *param_5,long param_6,ulong param_7,long param_8,ulong param_9)

{
  uint *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *extraout_x8;
  ulong extraout_x8_00;
  undefined2 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *unaff_x19;
  undefined8 unaff_x20;
  long *plVar18;
  long lVar19;
  undefined8 unaff_x21;
  int iVar20;
  long lVar21;
  undefined8 unaff_x22;
  long *plVar22;
  long lVar23;
  undefined8 unaff_x23;
  uint *puVar24;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar25;
  undefined8 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 in_register_00005008;
  float fVar30;
  float fVar31;
  undefined8 in_register_00005028;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 in_register_00005048;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  long lStack_a8;
  
  if ((int)param_5[0x1d] == 2) {
    lVar21 = param_5[5];
    lVar23 = param_5[6];
    uVar14 = param_6 << 2;
LAB_10ab4cb84:
    uVar16 = lVar23 - lVar21;
    plVar4 = (long *)(uVar14 - uVar16);
    if (uVar14 < uVar16 || plVar4 == (long *)0x0) {
      if (uVar14 >= uVar16) {
        return param_5;
      }
      param_5[6] = lVar21 + uVar14;
      return param_5;
    }
    plVar12 = (long *)param_5[6];
    if ((long *)(param_5[7] - (long)plVar12) < plVar4) {
      plVar18 = (long *)param_5[5];
      lVar21 = (long)plVar12 - (long)plVar18;
      plVar5 = (long *)(lVar21 + (long)plVar4);
      if ((long)plVar5 < 0) {
        func_0x000104c591bc();
        *plVar4 = 0;
        if ((param_9 & 3) != 0) {
          return (long *)0x0;
        }
        if (param_7 < (param_9 >> 1) + (param_9 >> 2)) {
code_r0x000100651ecc:
          plVar4 = (long *)0x0;
        }
        else {
          if (param_9 == 0) {
            lVar21 = 0;
          }
          else {
            lVar21 = 0;
            uVar14 = 0;
            do {
              plVar5 = plVar12;
              func_0x0001004cc780(plVar12,&lStack_a8,param_8 + uVar14);
              if ((int)plVar5 == 0) {
                return plVar5;
              }
              if ((param_9 - 4 != uVar14) && (lStack_a8 != 3)) goto code_r0x000100651ecc;
              plVar12 = (long *)((long)plVar12 + lStack_a8);
              lVar21 = lStack_a8 + lVar21;
              uVar14 = uVar14 + 4;
            } while (uVar14 < param_9);
          }
          *plVar4 = lVar21;
          plVar4 = (long *)0x1;
        }
        return plVar4;
      }
      uVar14 = param_5[7] - (long)plVar18;
      plVar12 = (long *)(uVar14 * 2);
      if (plVar12 < plVar5 || (long)plVar12 - (long)plVar5 == 0) {
        plVar12 = plVar5;
      }
      if (0x3ffffffffffffffe < uVar14) {
        plVar12 = (long *)0x7fffffffffffffff;
      }
      if (plVar12 == (long *)0x0) {
        plVar22 = (long *)0x0;
      }
      else {
        plVar22 = plVar12;
        func_0x000107c60e20();
      }
      func_0x000107c60ee4((long)plVar22 + lVar21,plVar4);
      plVar5 = plVar22;
      func_0x000107c610b4(plVar22,plVar18,lVar21);
      param_5[5] = (long)plVar22;
      param_5[6] = (long)plVar22 + lVar21 + (long)plVar4;
      param_5[7] = (long)plVar22 + (long)plVar12;
      if (plVar18 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar18);
        return plVar18;
      }
    }
    else {
      plVar5 = plVar12;
      if (plVar4 != (long *)0x0) {
        plVar5 = (long *)((long)plVar12 + (long)plVar4);
        func_0x000107c60ee4(plVar12,plVar4);
      }
      param_5[6] = (long)plVar5;
    }
    return plVar5;
  }
  if ((int)param_5[0x1d] == 1) {
    lVar21 = param_5[5];
    lVar23 = param_5[6];
    uVar14 = param_6 << 1;
    goto LAB_10ab4cb84;
  }
  puVar25 = &stack0xfffffffffffffff0;
  puVar7 = &UNK_10f6929a7;
  uVar26 = 0x10ab4cbc0;
  FUN_10a00946c();
  puVar3 = &stack0xfffffffffffffff0;
  while (1 < *(int *)(puVar7 + 0xe8) - 1U) {
    if (*(int *)(puVar7 + 0xe8) == 0) {
      uVar8 = *(uint *)(puVar7 + 0xf0);
      if (uVar8 == 0) {
        return (long *)0x0;
      }
      plVar4 = (long *)0x0;
      if ((ulong)uVar8 != 0) {
        plVar4 = (long *)((ulong)(*(long *)(puVar7 + 0x18) - *(long *)(puVar7 + 0x10)) /
                         (ulong)uVar8);
      }
      return plVar4;
    }
    *(undefined1 **)(puVar3 + -0x10) = puVar25;
    *(undefined8 *)(puVar3 + -8) = uVar26;
    puVar7 = &UNK_10f6929fc;
    FUN_10a00946c();
    *(undefined8 *)(puVar3 + -0x30) = unaff_x20;
    *(undefined **)(puVar3 + -0x28) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
    *(code **)(puVar3 + -0x18) = FUN_10ab4cc0c;
    puVar25 = puVar3 + -0x20;
    if (5 < *(uint *)(puVar7 + 0xec)) {
      plVar4 = (long *)&UNK_10f692a2c;
      FUN_10a00946c();
      *(undefined8 *)(puVar3 + -0x60) = unaff_x22;
      *(undefined8 *)(puVar3 + -0x58) = unaff_x21;
      *(undefined8 *)(puVar3 + -0x50) = unaff_x20;
      *(undefined **)(puVar3 + -0x48) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x40) = puVar25;
      *(code **)(puVar3 + -0x38) = FUN_10ab4ccac;
      if ((int)plVar4[0x1d] == 0) {
        uVar8 = *(uint *)((long)plVar4 + 0xec);
        uVar14 = (ulong)uVar8;
        if (uVar8 == 2) {
          uVar8 = *(uint *)(plVar4 + 0x1e);
          if (uVar8 == 0) {
            uVar14 = 0xfffffffe;
          }
          else {
            iVar20 = 0;
            if ((ulong)uVar8 != 0) {
              iVar20 = (int)((ulong)(plVar4[3] - plVar4[2]) / (ulong)uVar8);
            }
            uVar14 = (ulong)(iVar20 - 2);
          }
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          extraout_x8[2] = uVar14;
          iVar20 = 2;
        }
        else if (uVar8 == 1) {
          uVar8 = *(uint *)(plVar4 + 0x1e);
          if (uVar8 == 0) {
            uVar14 = 0xfffffffe;
          }
          else {
            iVar20 = 0;
            if ((ulong)uVar8 != 0) {
              iVar20 = (int)((ulong)(plVar4[3] - plVar4[2]) / (ulong)uVar8);
            }
            uVar14 = (ulong)(iVar20 - 2);
          }
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          extraout_x8[2] = uVar14;
          iVar20 = 1;
        }
        else {
          if (uVar8 != 0) goto LAB_10ab4ce34;
          uVar8 = *(uint *)(plVar4 + 0x1e);
          if (uVar8 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            if ((ulong)uVar8 != 0) {
              uVar14 = (ulong)(plVar4[3] - plVar4[2]) / (ulong)uVar8;
            }
            uVar14 = (uVar14 & 0xffffffff) / 3;
          }
          iVar20 = 0;
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          extraout_x8[2] = uVar14;
        }
        *(undefined2 *)(extraout_x8 + 3) = 0;
      }
      else {
        lVar21 = plVar4[5];
        iVar20 = *(int *)((long)plVar4 + 0xec);
        plVar12 = plVar4;
        if (lVar21 == plVar4[6] || 2 < iVar20) {
          *extraout_x8 = 0;
          extraout_x8[1] = 0;
          extraout_x8[2] = 0;
          uVar10 = 0x200;
        }
        else {
          FUN_10ab4a5b4();
          uVar14 = ((ulong)plVar12 & 0xffffffff) / 3;
          if ((int)plVar4[0x1d] == 2) {
            iVar20 = *(int *)((long)plVar4 + 0xec);
            *extraout_x8 = lVar21;
            extraout_x8[1] = (long)(plVar4 + 0x1a);
            extraout_x8[2] = uVar14;
            uVar10 = 0x40c;
          }
          else {
            if ((int)plVar4[0x1d] != 1) {
              FUN_10a00946c(&UNK_10f692aa5);
              uVar14 = extraout_x8_00;
LAB_10ab4ce34:
              *(ulong *)(puVar3 + -0x80) = uVar14;
              FUN_10a0ee900(puVar3 + -0x78,&UNK_10f692a5c,0x48);
              FUN_10a0029c0(puVar3 + -0x78);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab4ce58);
              (*pcVar2)();
            }
            iVar20 = *(int *)((long)plVar4 + 0xec);
            *extraout_x8 = lVar21;
            extraout_x8[1] = (long)(plVar4 + 0x1a);
            extraout_x8[2] = uVar14;
            uVar10 = 0x206;
          }
        }
        *(undefined2 *)(extraout_x8 + 3) = uVar10;
        plVar4 = plVar12;
      }
      *(int *)((long)extraout_x8 + 0x1c) = iVar20;
      return plVar4;
    }
    uVar26 = 0x10ab4cc2c;
    puVar3 = puVar3 + -0x30;
    unaff_x19 = puVar7;
  }
  iVar20 = *(int *)(puVar7 + 0xe8);
  if (iVar20 - 1U < 2) {
    lVar21 = 1;
    if (iVar20 == 2) {
      lVar21 = 2;
    }
    return (long *)((ulong)(*(long *)(puVar7 + 0x30) - *(long *)(puVar7 + 0x28)) >> lVar21);
  }
  if (iVar20 == 0) {
    return (long *)0x0;
  }
  *(undefined1 **)(puVar3 + -0x10) = puVar25;
  *(undefined8 *)(puVar3 + -8) = uVar26;
  puVar7 = &UNK_10f6929cf;
  FUN_10a00946c();
  *(undefined8 *)(puVar3 + -0x90) = unaff_d11;
  *(undefined8 *)(puVar3 + -0x88) = unaff_d10;
  *(undefined8 *)(puVar3 + -0x80) = unaff_d9;
  *(undefined8 *)(puVar3 + -0x78) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x70) = unaff_x28;
  *(undefined8 *)(puVar3 + -0x68) = unaff_x27;
  *(undefined8 *)(puVar3 + -0x60) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x58) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x21;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x20;
  *(undefined **)(puVar3 + -0x28) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x20) = puVar3 + -0x10;
  *(code **)(puVar3 + -0x18) = FUN_10ab4a600;
  uVar8 = *(uint *)(puVar7 + 0x110);
  if (uVar8 != 0xffffffff) {
    uVar14 = (*(long *)(puVar7 + 0x100) - *(long *)(puVar7 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar8 <= uVar14 && uVar14 - uVar8 != 0) {
      lVar21 = *(long *)(puVar7 + 0xf8) + (ulong)uVar8 * 0x38;
      goto LAB_10ab4a670;
    }
LAB_10ab4ac48:
    FUN_10ab725fc();
LAB_10ab4ac4c:
    FUN_10a00946c(&UNK_10f6921f0);
    goto LAB_10ab4ac60;
  }
  lVar21 = 0;
LAB_10ab4a670:
  uVar8 = *(uint *)(puVar7 + 0x130);
  if (uVar8 == 0xffffffff) {
    lVar23 = 0;
    if (lVar21 == 0) goto LAB_10ab4a728;
LAB_10ab4a6ac:
    if (((*(int *)(lVar21 + 0x28) != 3 || lVar23 == 0) || (*(int *)(lVar23 + 0x28) != 4)) ||
       (1 < *(int *)(puVar7 + 0xe8) - 1U)) goto LAB_10ab4a728;
    FUN_10ab4c544(puVar3 + -0xa0,puVar7,lVar21);
    func_0x00010ab4c84c(puVar3 + -0xa8,puVar7,lVar23);
    plVar4 = *(long **)(puVar3 + -0xa0);
    if ((plVar4 != (long *)0x0) &&
       (*(long *)(puVar3 + -0x108) = *(long *)(puVar3 + -0xa8), *(long *)(puVar3 + -0xa8) != 0)) {
      uVar8 = *(uint *)(puVar7 + 0xf0);
      if (uVar8 == 0) {
        *(undefined8 *)(puVar3 + -0x118) = 0;
      }
      else {
        uVar14 = 0;
        if ((ulong)uVar8 != 0) {
          uVar14 = (ulong)(*(long *)(puVar7 + 0x18) - *(long *)(puVar7 + 0x10)) / (ulong)uVar8;
        }
        *(ulong *)(puVar3 + -0x118) = uVar14;
      }
      *(undefined8 *)(puVar3 + -0x128) = *(undefined8 *)(puVar7 + 0x28);
      *(undefined4 *)(puVar3 + -0x11c) = *(undefined4 *)(puVar7 + 0xe8);
      FUN_10ab4a274(puVar7 + 0x70,
                    (*(long *)(puVar7 + 0x60) - *(long *)(puVar7 + 0x58) >> 5) * -0x5555555555555555
                   );
      puVar9 = *(undefined8 **)(puVar7 + 0x70);
      if (0 < *(long *)(puVar7 + 0x78) - (long)puVar9) {
        uVar14 = (ulong)(*(long *)(puVar7 + 0x78) - (long)puVar9) / 0x18 + 1;
        in_register_00005008 = 0xff7fffff00000000;
        param_1 = 0;
        do {
          puVar9[1] = 0xff7fffff00000000;
          *puVar9 = 0;
          puVar9[2] = 0xff7fffffff7fffff;
          puVar9 = puVar9 + 3;
          uVar14 = uVar14 - 1;
        } while (1 < uVar14);
      }
      plVar12 = *(long **)(puVar7 + 0x88);
      plVar5 = *(long **)(puVar7 + 0x90);
      if (plVar12 != plVar5) {
        do {
          if (*plVar12 != plVar12[1]) {
            puVar24 = (uint *)plVar12[3];
            puVar1 = (uint *)plVar12[4];
            *(uint **)(puVar3 + -0x138) = puVar1;
            if (puVar24 != puVar1) {
              *(long **)(puVar3 + -0x140) = plVar5;
              do {
                uVar14 = (ulong)*puVar24;
                uVar8 = puVar24[1];
                lVar21 = *(long *)(puVar7 + 0xd0);
                if (lVar21 == *(long *)(puVar7 + 0xd8)) {
                  *(undefined4 *)(puVar3 + -0x10c) = 0;
                }
                else {
                  uVar16 = (ulong)puVar24[2];
                  uVar17 = (*(long *)(puVar7 + 0xd8) - lVar21 >> 3) * 0x4ec4ec4ec4ec4ec5;
                  if (uVar17 < uVar16 || uVar17 - uVar16 == 0) goto LAB_10ab4ac60;
                  *(undefined4 *)(puVar3 + -0x10c) = *(undefined4 *)(lVar21 + uVar16 * 0x68 + 8);
                }
                *(ulong *)(puVar3 + -0x130) = uVar8 + uVar14;
                uVar26 = param_2;
                uVar34 = param_3;
                uVar37 = param_4;
                if (uVar8 != 0) {
LAB_10ab4aa48:
                  if (*(int *)(puVar3 + -0x11c) == 1) {
                    uVar8 = (uint)*(ushort *)(*(long *)(puVar3 + -0x128) + uVar14 * 2);
                  }
                  else {
                    uVar8 = *(uint *)(*(long *)(puVar3 + -0x128) + uVar14 * 4);
                  }
                  uVar8 = uVar8 + *(int *)(puVar3 + -0x10c);
                  if (uVar8 < (uint)*(undefined8 *)(puVar3 + -0x118)) {
                    (**(code **)(*plVar4 + 0x10))(plVar4,uVar8);
                    *(undefined8 *)(puVar3 + -0xe8) = in_register_00005028;
                    *(undefined8 *)(puVar3 + -0xf0) = uVar26;
                    *(undefined8 *)(puVar3 + -0xd8) = in_register_00005008;
                    *(undefined8 *)(puVar3 + -0xe0) = param_1;
                    *(undefined8 *)(puVar3 + -0xf8) = in_register_00005048;
                    *(undefined8 *)(puVar3 + -0x100) = uVar34;
                    (**(code **)(**(long **)(puVar3 + -0x108) + 0x10))
                              (*(long **)(puVar3 + -0x108),uVar8);
                    iVar20 = 0;
                    param_2 = uVar26;
                    param_3 = uVar34;
                    param_4 = uVar37;
                    do {
                      if (iVar20 < 3) {
                        uVar28 = uVar26;
                        if ((iVar20 != 1) && (uVar28 = param_1, iVar20 == 2)) {
                          uVar28 = uVar34;
                        }
                      }
                      else {
                        uVar28 = uVar37;
                        if ((iVar20 != 3) && (uVar28 = param_1, iVar20 == 4)) goto LAB_10ab4abf8;
                      }
                      if ((ulong)(plVar12[1] - *plVar12 >> 2) <= (ulong)(long)(int)(float)uVar28) {
                        FUN_10a00946c(&UNK_10f6921f0);
                        goto LAB_10ab4ac60;
                      }
                      uVar17 = (ulong)*(uint *)(*plVar12 + (long)(int)(float)uVar28 * 4);
                      uVar16 = (*(long *)(puVar7 + 0x60) - *(long *)(puVar7 + 0x58) >> 5) *
                               -0x5555555555555555;
                      if (uVar16 < uVar17 || uVar16 - uVar17 == 0) {
                        FUN_10a00946c(&UNK_10f6921f0);
                        goto LAB_10ab4ac60;
                      }
                      lVar21 = *(long *)(puVar7 + 0x58) + uVar17 * 0x60;
                      fVar27 = *(float *)(lVar21 + 0x28);
                      fVar36 = (float)*(undefined8 *)(puVar3 + -0xe0);
                      fVar30 = *(float *)(lVar21 + 0x38);
                      fVar38 = (float)*(undefined8 *)(puVar3 + -0xf0);
                      fVar31 = *(float *)(lVar21 + 0x48);
                      fVar39 = (float)*(undefined8 *)(puVar3 + -0x100);
                      fVar32 = *(float *)(lVar21 + 0x58);
                      param_4 = *(undefined8 *)(lVar21 + 0x50);
                      fVar33 = (float)*(undefined8 *)(lVar21 + 0x40) * fVar39 + (float)param_4;
                      fVar35 = (float)((ulong)*(undefined8 *)(lVar21 + 0x40) >> 0x20) * fVar39 +
                               (float)((ulong)param_4 >> 0x20);
                      param_3 = CONCAT44(fVar35,fVar33);
                      in_register_00005048 = 0;
                      param_2 = CONCAT44((float)((ulong)*(undefined8 *)(lVar21 + 0x20) >> 0x20) *
                                         fVar36 + (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >>
                                                         0x20) * fVar38 + fVar35,
                                         (float)*(undefined8 *)(lVar21 + 0x20) * fVar36 +
                                         (float)*(undefined8 *)(lVar21 + 0x30) * fVar38 + fVar33);
                      in_register_00005028 = 0;
                      *(undefined8 *)(puVar3 + -0xb8) = param_2;
                      *(float *)(puVar3 + -0xb0) =
                           fVar36 * fVar27 + fVar38 * fVar30 + fVar39 * fVar31 + fVar32;
                      uVar16 = (*(long *)(puVar7 + 0x78) - *(long *)(puVar7 + 0x70) >> 3) *
                               -0x5555555555555555;
                      if (uVar16 < uVar17 || uVar16 - uVar17 == 0) goto LAB_10ab4ac60;
                      func_0x00010a01069c(puVar3 + -0xd0,*(long *)(puVar7 + 0x70) + uVar17 * 0x18,
                                          puVar3 + -0xb8);
                      uVar16 = (*(long *)(puVar7 + 0x78) - *(long *)(puVar7 + 0x70) >> 3) *
                               -0x5555555555555555;
                      if (uVar16 < uVar17 || uVar16 - uVar17 == 0) goto LAB_10ab4ac60;
                      uVar29 = *(undefined8 *)(puVar3 + -200);
                      uVar28 = *(undefined8 *)(puVar3 + -0xd0);
                      puVar9 = (undefined8 *)(*(long *)(puVar7 + 0x70) + uVar17 * 0x18);
                      puVar9[2] = *(undefined8 *)(puVar3 + -0xc0);
                      puVar9[1] = uVar29;
                      *puVar9 = uVar28;
                      iVar20 = iVar20 + 1;
                    } while( true );
                  }
                  goto LAB_10ab4ac4c;
                }
LAB_10ab4ac08:
                puVar24 = puVar24 + 3;
                plVar5 = *(long **)(puVar3 + -0x140);
              } while (puVar24 != *(uint **)(puVar3 + -0x138));
            }
          }
          plVar12 = plVar12 + 6;
        } while (plVar12 != plVar5);
      }
      goto LAB_10ab4a8dc;
    }
  }
  else {
    uVar14 = (*(long *)(puVar7 + 0x100) - *(long *)(puVar7 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
    if (uVar14 < uVar8 || uVar14 - uVar8 == 0) goto LAB_10ab4ac48;
    lVar23 = *(long *)(puVar7 + 0xf8) + (ulong)uVar8 * 0x38;
    if (lVar21 != 0) goto LAB_10ab4a6ac;
LAB_10ab4a728:
    plVar4 = (long *)0x0;
    *(undefined8 *)(puVar3 + -0xa8) = 0;
    *(undefined8 *)(puVar3 + -0xa0) = 0;
  }
  puVar6 = (undefined8 *)(puVar7 + 0x70);
  puVar9 = *(undefined8 **)(puVar7 + 0x78);
  if (((undefined8 *)*puVar6 == puVar9) &&
     (*(long *)(puVar7 + 0x60) - *(long *)(puVar7 + 0x58) != 0)) {
    lVar13 = *(long *)(puVar7 + 0x60) - *(long *)(puVar7 + 0x58) >> 5;
    uVar16 = lVar13 * -0x5555555555555555;
    lVar11 = *(long *)(puVar7 + 0x80) - (long)*puVar6 >> 3;
    uVar14 = lVar11 * -0x5555555555555555;
    if (uVar14 < uVar16) {
      if (0xaaaaaaaaaaaaaaa < uVar16) {
        FUN_10a559bb0();
LAB_10ab4ac60:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab4ac64);
        (*pcVar2)();
      }
      uVar17 = lVar11 * 0x5555555555555556;
      if (uVar17 < uVar16 || uVar17 + lVar13 * 0x5555555555555555 == 0) {
        uVar17 = uVar16;
      }
      if (0x555555555555554 < uVar14) {
        uVar17 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_10a559bc4();
      lVar11 = lVar13 * 8;
      puVar9 = puVar6;
      do {
        puVar9[1] = 0xff7fffff00000000;
        *puVar9 = 0;
        puVar9[2] = 0xff7fffffff7fffff;
        puVar9 = puVar9 + 3;
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != 0);
      lVar19 = (long)puVar6 - (*(long *)(puVar7 + 0x78) - *(long *)(puVar7 + 0x70));
      _memcpy(lVar19);
      lVar11 = *(long *)(puVar7 + 0x70);
      *(long *)(puVar7 + 0x70) = lVar19;
      *(undefined8 **)(puVar7 + 0x78) = puVar6 + lVar13;
      *(undefined8 **)(puVar7 + 0x80) = puVar6 + uVar17 * 3;
      if (lVar11 != 0) {
        __ZdlPv();
      }
    }
    else {
      puVar6 = puVar9 + lVar13;
      lVar13 = lVar13 * 8;
      do {
        puVar9[1] = 0xff7fffff00000000;
        *puVar9 = 0;
        puVar9[2] = 0xff7fffffff7fffff;
        puVar9 = puVar9 + 3;
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != 0);
      *(undefined8 **)(puVar7 + 0x78) = puVar6;
    }
  }
  if (((bRam00000001137ec498 & 1) == 0) &&
     (bRam00000001137ec498 = 1, (bRam000000011330a9e8 >> 1 & 1) != 0)) {
    lVar13 = *(long *)(puVar7 + 0x58);
    lVar11 = *(long *)(puVar7 + 0x60);
    if (lVar21 == 0) {
      uVar16 = 0;
      uVar14 = 0xffffffff;
    }
    else {
      uVar14 = (ulong)*(uint *)(lVar21 + 0x24);
      uVar16 = (ulong)*(uint *)(lVar21 + 0x28);
    }
    if (lVar23 == 0) {
      uVar15 = 0;
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = (ulong)*(uint *)(lVar23 + 0x24);
      uVar15 = (ulong)*(uint *)(lVar23 + 0x28);
    }
    uVar8 = *(uint *)(puVar7 + 0xe8);
    *(ulong *)(puVar3 + -0x150) = uVar17;
    *(ulong *)(puVar3 + -0x148) = (ulong)uVar8;
    *(ulong *)(puVar3 + -0x160) = uVar14;
    *(ulong *)(puVar3 + -0x158) = uVar15;
    *(long *)(puVar3 + -0x170) = (lVar11 - lVar13 >> 5) * -0x5555555555555555;
    *(ulong *)(puVar3 + -0x168) = uVar16;
    func_0x00010ae06f08(1,2,&UNK_10f692aff,&UNK_10f692b2b,0x4df,&UNK_10f692b65);
  }
LAB_10ab4a8dc:
  plVar12 = *(long **)(puVar3 + -0xa8);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 8))();
  }
  *(undefined8 *)(puVar3 + -0xa0) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
    plVar12 = plVar4;
  }
  return plVar12;
LAB_10ab4abf8:
  uVar14 = uVar14 + 1;
  uVar26 = param_2;
  uVar34 = param_3;
  uVar37 = param_4;
  if (uVar14 == *(ulong *)(puVar3 + -0x130)) goto LAB_10ab4ac08;
  goto LAB_10ab4aa48;
}



/* Entry: 10ab4cc0c; end: 10ab4ccab;  */

undefined * FUN_10ab4cc0c(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  undefined *puVar6;
  int iVar7;
  long *extraout_x8;
  undefined2 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 auStack_68 [24];
  
  if (*(uint *)(param_1 + 0xec) < 6) {
    uVar10 = param_1;
    func_0x00010ab4cbc0();
    iVar7 = *(int *)(param_1 + 0xec);
    puVar9 = (undefined *)(uVar10 & 0xffffffff);
    puVar6 = (undefined *)0x0;
    if (puVar9 != (undefined *)0x0) {
      puVar6 = puVar9 + -1;
    }
    puVar2 = (undefined *)0x0;
    if (iVar7 != 6) {
      puVar2 = puVar9;
    }
    if (iVar7 != 5) {
      puVar6 = puVar2;
    }
    puVar2 = (undefined *)((ulong)puVar9 >> 1);
    if (iVar7 != 4) {
      puVar2 = puVar6;
    }
    puVar6 = (undefined *)0x0;
    if ((undefined *)0x1 < puVar9) {
      puVar6 = puVar9 + -2;
    }
    puVar1 = (undefined *)0x0;
    if ((undefined *)0x1 < puVar9) {
      puVar1 = puVar9 + -2;
    }
    if (iVar7 != 2) {
      puVar1 = puVar9;
    }
    if (iVar7 != 1) {
      puVar6 = puVar1;
    }
    puVar9 = (undefined *)((ulong)puVar9 / 3);
    if (iVar7 != 0) {
      puVar9 = puVar6;
    }
    if (iVar7 < 4) {
      puVar2 = puVar9;
    }
    return puVar2;
  }
  puVar6 = &UNK_10f692a2c;
  FUN_10a00946c();
  if (*(int *)(puVar6 + 0xe8) == 0) {
    iVar7 = *(int *)(puVar6 + 0xec);
    if (iVar7 == 2) {
      uVar4 = *(uint *)(puVar6 + 0xf0);
      if (uVar4 == 0) {
        uVar10 = 0xfffffffe;
      }
      else {
        iVar7 = 0;
        if ((ulong)uVar4 != 0) {
          iVar7 = (int)((ulong)(*(long *)(puVar6 + 0x18) - *(long *)(puVar6 + 0x10)) / (ulong)uVar4)
          ;
        }
        uVar10 = (ulong)(iVar7 - 2);
      }
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = uVar10;
      iVar7 = 2;
    }
    else if (iVar7 == 1) {
      uVar4 = *(uint *)(puVar6 + 0xf0);
      if (uVar4 == 0) {
        uVar10 = 0xfffffffe;
      }
      else {
        iVar7 = 0;
        if ((ulong)uVar4 != 0) {
          iVar7 = (int)((ulong)(*(long *)(puVar6 + 0x18) - *(long *)(puVar6 + 0x10)) / (ulong)uVar4)
          ;
        }
        uVar10 = (ulong)(iVar7 - 2);
      }
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = uVar10;
      iVar7 = 1;
    }
    else {
      if (iVar7 != 0) goto LAB_10ab4ce34;
      uVar4 = *(uint *)(puVar6 + 0xf0);
      if (uVar4 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        if ((ulong)uVar4 != 0) {
          uVar10 = (ulong)(*(long *)(puVar6 + 0x18) - *(long *)(puVar6 + 0x10)) / (ulong)uVar4;
        }
        uVar10 = (uVar10 & 0xffffffff) / 3;
      }
      iVar7 = 0;
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = uVar10;
    }
    *(undefined2 *)(extraout_x8 + 3) = 0;
  }
  else {
    lVar3 = *(long *)(puVar6 + 0x28);
    iVar7 = *(int *)(puVar6 + 0xec);
    puVar9 = puVar6;
    if (lVar3 == *(long *)(puVar6 + 0x30) || 2 < iVar7) {
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      uVar8 = 0x200;
    }
    else {
      FUN_10ab4a5b4();
      uVar10 = ((ulong)puVar9 & 0xffffffff) / 3;
      if (*(int *)(puVar6 + 0xe8) == 2) {
        iVar7 = *(int *)(puVar6 + 0xec);
        *extraout_x8 = lVar3;
        extraout_x8[1] = (long)(puVar6 + 0xd0);
        extraout_x8[2] = uVar10;
        uVar8 = 0x40c;
      }
      else {
        if (*(int *)(puVar6 + 0xe8) != 1) {
          FUN_10a00946c(&UNK_10f692aa5);
LAB_10ab4ce34:
          FUN_10a0ee900(auStack_68,&UNK_10f692a5c,0x48);
          FUN_10a0029c0(auStack_68);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab4ce58);
          (*pcVar5)();
        }
        iVar7 = *(int *)(puVar6 + 0xec);
        *extraout_x8 = lVar3;
        extraout_x8[1] = (long)(puVar6 + 0xd0);
        extraout_x8[2] = uVar10;
        uVar8 = 0x206;
      }
    }
    *(undefined2 *)(extraout_x8 + 3) = uVar8;
    puVar6 = puVar9;
  }
  *(int *)((long)extraout_x8 + 0x1c) = iVar7;
  return puVar6;
}



/* Entry: 10ab4ccac; end: 10ab4ce73;  */

void FUN_10ab4ccac(long *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined2 uVar5;
  ulong uVar6;
  undefined1 auStack_48 [24];
  
  if (*(int *)(param_2 + 0xe8) == 0) {
    iVar4 = *(int *)(param_2 + 0xec);
    if (iVar4 == 2) {
      uVar2 = *(uint *)(param_2 + 0xf0);
      if (uVar2 == 0) {
        uVar6 = 0xfffffffe;
      }
      else {
        iVar4 = 0;
        if ((ulong)uVar2 != 0) {
          iVar4 = (int)((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) /
                       (ulong)uVar2);
        }
        uVar6 = (ulong)(iVar4 - 2);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = uVar6;
      iVar4 = 2;
    }
    else if (iVar4 == 1) {
      uVar2 = *(uint *)(param_2 + 0xf0);
      if (uVar2 == 0) {
        uVar6 = 0xfffffffe;
      }
      else {
        iVar4 = 0;
        if ((ulong)uVar2 != 0) {
          iVar4 = (int)((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) /
                       (ulong)uVar2);
        }
        uVar6 = (ulong)(iVar4 - 2);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = uVar6;
      iVar4 = 1;
    }
    else {
      if (iVar4 != 0) goto LAB_10ab4ce34;
      uVar2 = *(uint *)(param_2 + 0xf0);
      if (uVar2 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        if ((ulong)uVar2 != 0) {
          uVar6 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / (ulong)uVar2;
        }
        uVar6 = (uVar6 & 0xffffffff) / 3;
      }
      iVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = uVar6;
    }
    *(undefined2 *)(param_1 + 3) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x28);
    iVar4 = *(int *)(param_2 + 0xec);
    if (lVar1 == *(long *)(param_2 + 0x30) || 2 < iVar4) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      uVar5 = 0x200;
    }
    else {
      uVar6 = param_2;
      FUN_10ab4a5b4();
      uVar6 = (uVar6 & 0xffffffff) / 3;
      if (*(int *)(param_2 + 0xe8) == 2) {
        iVar4 = *(int *)(param_2 + 0xec);
        *param_1 = lVar1;
        param_1[1] = param_2 + 0xd0;
        param_1[2] = uVar6;
        uVar5 = 0x40c;
      }
      else {
        if (*(int *)(param_2 + 0xe8) != 1) {
          FUN_10a00946c(&UNK_10f692aa5);
LAB_10ab4ce34:
          FUN_10a0ee900(auStack_48,&UNK_10f692a5c,0x48);
          FUN_10a0029c0(auStack_48);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab4ce58);
          (*pcVar3)();
        }
        iVar4 = *(int *)(param_2 + 0xec);
        *param_1 = lVar1;
        param_1[1] = param_2 + 0xd0;
        param_1[2] = uVar6;
        uVar5 = 0x206;
      }
    }
    *(undefined2 *)(param_1 + 3) = uVar5;
  }
  *(int *)((long)param_1 + 0x1c) = iVar4;
  return;
}



/* Entry: 10ab4ce74; end: 10ab4d1c7;  */

/* WARNING: Possible PIC construction at 0x00010ab4d068: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ab4d06c) */
/* WARNING: Removing unreachable block (ram,0x00010ab4d074) */
/* WARNING: Removing unreachable block (ram,0x00010ab4d07c) */
/* WARNING: Removing unreachable block (ram,0x00010ab4d0a0) */
/* WARNING: Removing unreachable block (ram,0x00010ab4d0b0) */

void FUN_10ab4ce74(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined *param_6,long param_7)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long extraout_x8;
  long **extraout_x8_00;
  long **pplVar4;
  long *plVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  char cVar14;
  uint uVar15;
  long *plStack_48;
  
  lVar3 = *(long *)(param_6 + 0xf8);
  lVar10 = *(long *)(param_6 + 0x100);
  if (lVar3 == lVar10) goto LAB_10ab4cec8;
  do {
    if (*(long *)(lVar3 + 0x18) == *(long *)(param_7 + 0x18)) goto LAB_10ab4cec8;
    lVar3 = lVar3 + 0x38;
  } while (lVar3 != lVar10);
  do {
    FUN_10a00946c(&UNK_10f692ad3);
    lVar10 = extraout_x8;
LAB_10ab4cec8:
  } while (lVar3 == lVar10 || lVar3 == 0);
  if (*(int *)(lVar3 + 0x28) - 1U < 4) {
    FUN_10ab4a18c(param_6);
    uVar15 = *(uint *)(param_6 + 0xf0);
    if (uVar15 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      if ((ulong)uVar15 != 0) {
        uVar13 = (ulong)(*(long *)(param_6 + 0x18) - *(long *)(param_6 + 0x10)) / (ulong)uVar15;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    iVar12 = (int)uVar13;
    func_0x00010742a308(param_1,*(int *)(lVar3 + 0x28) * iVar12);
    iVar1 = *(int *)(lVar3 + 0x28);
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        pplVar4 = &plStack_48;
        goto FUN_10ab4d1c8;
      }
      if (iVar1 != 2) {
        return;
      }
      func_0x00010ab4d4d0(&plStack_48,param_6,lVar3);
      if (iVar12 != 0) {
        uVar11 = 0;
        uVar15 = 1;
        do {
          (**(code **)(*plStack_48 + 0x10))(plStack_48,uVar11);
          lVar3 = *param_1;
          uVar8 = param_1[1] - lVar3 >> 2;
          if ((uVar8 <= uVar15 - 1) ||
             (*(undefined4 *)(lVar3 + (ulong)(uVar15 - 1) * 4) = param_2, uVar8 <= uVar15)) {
LAB_10ab4d168:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab4d16c);
            (*pcVar2)();
          }
          *(undefined4 *)(lVar3 + (ulong)uVar15 * 4) = param_3;
          uVar11 = uVar11 + 1;
          uVar15 = uVar15 + 2;
        } while ((uVar13 & 0xffffffff) != uVar11);
        goto LAB_10ab4d140;
      }
    }
    else if (iVar1 == 3) {
      func_0x00010ab4d7d8(&plStack_48,param_6,lVar3);
      if (iVar12 != 0) {
        uVar11 = 0;
        uVar15 = 2;
        do {
          (**(code **)(*plStack_48 + 0x10))(plStack_48,uVar11);
          lVar3 = *param_1;
          uVar8 = param_1[1] - lVar3 >> 2;
          if (uVar8 <= uVar15 - 2) goto LAB_10ab4d168;
          *(undefined4 *)(lVar3 + (ulong)(uVar15 - 2) * 4) = param_2;
          if ((uVar8 <= uVar15 - 1) ||
             (*(undefined4 *)(lVar3 + (ulong)(uVar15 - 1) * 4) = param_3, uVar8 <= uVar15))
          goto LAB_10ab4d168;
          *(undefined4 *)(lVar3 + (ulong)uVar15 * 4) = param_4;
          uVar11 = uVar11 + 1;
          uVar15 = uVar15 + 3;
        } while ((uVar13 & 0xffffffff) != uVar11);
        goto LAB_10ab4d140;
      }
    }
    else {
      if (iVar1 != 4) {
        return;
      }
      func_0x00010ab4dae0(&plStack_48,param_6,lVar3);
      if (iVar12 != 0) {
        uVar11 = 0;
        uVar15 = 3;
        do {
          (**(code **)(*plStack_48 + 0x10))(plStack_48,uVar11);
          lVar3 = *param_1;
          uVar8 = param_1[1] - lVar3 >> 2;
          if (uVar8 <= uVar15 - 3) goto LAB_10ab4d168;
          *(undefined4 *)(lVar3 + (ulong)(uVar15 - 3) * 4) = param_2;
          if (uVar8 <= uVar15 - 2) goto LAB_10ab4d168;
          *(undefined4 *)(lVar3 + (ulong)(uVar15 - 2) * 4) = param_3;
          if ((uVar8 <= uVar15 - 1) ||
             (*(undefined4 *)(lVar3 + (ulong)(uVar15 - 1) * 4) = param_4, uVar8 <= uVar15))
          goto LAB_10ab4d168;
          *(undefined4 *)(lVar3 + (ulong)uVar15 * 4) = param_5;
          uVar11 = uVar11 + 1;
          uVar15 = uVar15 + 4;
        } while ((uVar13 & 0xffffffff) != uVar11);
        goto LAB_10ab4d140;
      }
    }
    if (plStack_48 == (long *)0x0) {
      return;
    }
LAB_10ab4d140:
    (**(code **)(*plStack_48 + 8))(plStack_48);
    return;
  }
  param_6 = &UNK_10f692aea;
  FUN_10a00946c();
  lVar3 = param_7;
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    lVar3 = param_7;
  }
  __Unwind_Resume();
  pplVar4 = extraout_x8_00;
FUN_10ab4d1c8:
  plVar5 = (long *)0x0;
  iVar1 = *(int *)(lVar3 + 0x24);
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      if (*(int *)(lVar3 + 0x28) == 1) {
        lVar10 = *(long *)(param_6 + 0x10) + (ulong)*(uint *)(lVar3 + 0x30);
        uVar13 = (ulong)*(uint *)(param_6 + 0xf0);
        if (*(uint *)(param_6 + 0xf0) == 0) goto LAB_10ab4d34c;
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = (ulong)(*(long *)(param_6 + 0x18) - *(long *)(param_6 + 0x10)) / uVar13;
        }
        uVar11 = uVar11 & 0xffffffff;
      }
      else {
        lVar10 = 0;
LAB_10ab4d34c:
        uVar11 = 0;
        uVar13 = 0;
      }
      cVar14 = *(char *)(lVar3 + 0x2c);
      plVar5 = (long *)0x28;
      __Znwm();
      plVar5[2] = uVar11;
      plVar5[3] = uVar13;
      puVar6 = &UNK_110c4c7b0;
      puVar9 = &UNK_110c4c738;
    }
    else if (iVar1 == 2) {
      if (*(int *)(lVar3 + 0x28) == 1) {
        lVar10 = *(long *)(param_6 + 0x10) + (ulong)*(uint *)(lVar3 + 0x30);
        uVar13 = (ulong)*(uint *)(param_6 + 0xf0);
        if (*(uint *)(param_6 + 0xf0) == 0) goto LAB_10ab4d3e8;
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = (ulong)(*(long *)(param_6 + 0x18) - *(long *)(param_6 + 0x10)) / uVar13;
        }
        uVar11 = uVar11 & 0xffffffff;
      }
      else {
        lVar10 = 0;
LAB_10ab4d3e8:
        uVar11 = 0;
        uVar13 = 0;
      }
      cVar14 = *(char *)(lVar3 + 0x2c);
      plVar5 = (long *)0x28;
      __Znwm();
      plVar5[2] = uVar11;
      plVar5[3] = uVar13;
      puVar6 = &UNK_110c4c8a0;
      puVar9 = &UNK_110c4c828;
    }
    else {
      if (iVar1 != 3) goto LAB_10ab4d428;
      if ((*(uint *)(lVar3 + 0x28) & 0x7fffffff) == 1) {
        lVar10 = *(long *)(param_6 + 0x10) + (ulong)*(uint *)(lVar3 + 0x30);
        uVar13 = (ulong)*(uint *)(param_6 + 0xf0);
        if (*(uint *)(param_6 + 0xf0) == 0) goto LAB_10ab4d3b4;
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = (ulong)(*(long *)(param_6 + 0x18) - *(long *)(param_6 + 0x10)) / uVar13;
        }
        uVar11 = uVar11 & 0xffffffff;
      }
      else {
        lVar10 = 0;
LAB_10ab4d3b4:
        uVar11 = 0;
        uVar13 = 0;
      }
      cVar14 = *(char *)(lVar3 + 0x2c);
      plVar5 = (long *)0x28;
      __Znwm();
      plVar5[2] = uVar11;
      plVar5[3] = uVar13;
      puVar6 = &UNK_110c4c990;
      puVar9 = &UNK_110c4c918;
    }
LAB_10ab4d414:
    plVar5[4] = 0;
    if (cVar14 == '\0') {
      puVar9 = puVar6;
    }
    ppuVar7 = (undefined **)(puVar9 + 0x10);
  }
  else {
    if (iVar1 == 4) {
      if ((*(uint *)(lVar3 + 0x28) & 0x7fffffff) == 1) {
        lVar10 = *(long *)(param_6 + 0x10) + (ulong)*(uint *)(lVar3 + 0x30);
        uVar13 = (ulong)*(uint *)(param_6 + 0xf0);
        if (*(uint *)(param_6 + 0xf0) == 0) goto LAB_10ab4d380;
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = (ulong)(*(long *)(param_6 + 0x18) - *(long *)(param_6 + 0x10)) / uVar13;
        }
        uVar11 = uVar11 & 0xffffffff;
      }
      else {
        lVar10 = 0;
LAB_10ab4d380:
        uVar11 = 0;
        uVar13 = 0;
      }
      cVar14 = *(char *)(lVar3 + 0x2c);
      plVar5 = (long *)0x28;
      __Znwm();
      plVar5[2] = uVar11;
      plVar5[3] = uVar13;
      puVar6 = &UNK_110c4ca80;
      puVar9 = &UNK_110c4ca08;
      goto LAB_10ab4d414;
    }
    if (iVar1 == 5) {
      if ((*(byte *)(lVar3 + 0x2c) & 1) != 0) {
LAB_10ab4d340:
        plVar5 = (long *)0x0;
        goto LAB_10ab4d428;
      }
      if ((*(uint *)(lVar3 + 0x28) & 0x3fffffff) == 1) {
        lVar10 = *(long *)(param_6 + 0x10) + (ulong)*(uint *)(lVar3 + 0x30);
        uVar13 = (ulong)*(uint *)(param_6 + 0xf0);
        if (*(uint *)(param_6 + 0xf0) == 0) goto LAB_10ab4d4a8;
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = (ulong)(*(long *)(param_6 + 0x18) - *(long *)(param_6 + 0x10)) / uVar13;
        }
        uVar11 = uVar11 & 0xffffffff;
      }
      else {
        lVar10 = 0;
LAB_10ab4d4a8:
        uVar11 = 0;
        uVar13 = 0;
      }
      plVar5 = (long *)0x28;
      __Znwm();
      plVar5[2] = uVar11;
      plVar5[3] = uVar13;
      plVar5[4] = 0;
      ppuVar7 = &PTR_DAT_110c4cb08;
    }
    else {
      if (iVar1 != 6) goto LAB_10ab4d428;
      if ((*(byte *)(lVar3 + 0x2c) & 1) != 0) goto LAB_10ab4d340;
      if ((*(uint *)(lVar3 + 0x28) & 0x7fffffff) == 1) {
        lVar10 = *(long *)(param_6 + 0x10) + (ulong)*(uint *)(lVar3 + 0x30);
        uVar13 = (ulong)*(uint *)(param_6 + 0xf0);
        if (*(uint *)(param_6 + 0xf0) == 0) goto LAB_10ab4d47c;
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = (ulong)(*(long *)(param_6 + 0x18) - *(long *)(param_6 + 0x10)) / uVar13;
        }
        uVar11 = uVar11 & 0xffffffff;
      }
      else {
        lVar10 = 0;
LAB_10ab4d47c:
        uVar11 = 0;
        uVar13 = 0;
      }
      plVar5 = (long *)0x28;
      __Znwm();
      plVar5[2] = uVar11;
      plVar5[3] = uVar13;
      plVar5[4] = 0;
      ppuVar7 = &PTR_DAT_110c4cb80;
    }
  }
  *plVar5 = (long)ppuVar7;
  plVar5[1] = lVar10;
LAB_10ab4d428:
  *pplVar4 = plVar5;
  return;
}



/* Entry: 10ab4d1c8; end: 10ab4dde7;  */

void FUN_10ab4d1c8(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char cVar9;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = *(int *)(param_3 + 0x24);
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      if (*(int *)(param_3 + 0x28) == 1) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab4d34c;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab4d34c:
        uVar8 = 0;
        uVar7 = 0;
      }
      cVar9 = *(char *)(param_3 + 0x2c);
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar3 = &UNK_110c4c7b0;
      puVar5 = &UNK_110c4c738;
    }
    else if (iVar1 == 2) {
      if (*(int *)(param_3 + 0x28) == 1) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab4d3e8;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab4d3e8:
        uVar8 = 0;
        uVar7 = 0;
      }
      cVar9 = *(char *)(param_3 + 0x2c);
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar3 = &UNK_110c4c8a0;
      puVar5 = &UNK_110c4c828;
    }
    else {
      if (iVar1 != 3) goto LAB_10ab4d428;
      if ((*(uint *)(param_3 + 0x28) & 0x7fffffff) == 1) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab4d3b4;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab4d3b4:
        uVar8 = 0;
        uVar7 = 0;
      }
      cVar9 = *(char *)(param_3 + 0x2c);
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar3 = &UNK_110c4c990;
      puVar5 = &UNK_110c4c918;
    }
LAB_10ab4d414:
    puVar2[4] = 0;
    if (cVar9 == '\0') {
      puVar5 = puVar3;
    }
    ppuVar4 = (undefined **)(puVar5 + 0x10);
  }
  else {
    if (iVar1 == 4) {
      if ((*(uint *)(param_3 + 0x28) & 0x7fffffff) == 1) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab4d380;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab4d380:
        uVar8 = 0;
        uVar7 = 0;
      }
      cVar9 = *(char *)(param_3 + 0x2c);
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar3 = &UNK_110c4ca80;
      puVar5 = &UNK_110c4ca08;
      goto LAB_10ab4d414;
    }
    if (iVar1 == 5) {
      if ((*(byte *)(param_3 + 0x2c) & 1) != 0) {
LAB_10ab4d340:
        puVar2 = (undefined8 *)0x0;
        goto LAB_10ab4d428;
      }
      if ((*(uint *)(param_3 + 0x28) & 0x3fffffff) == 1) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab4d4a8;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab4d4a8:
        uVar8 = 0;
        uVar7 = 0;
      }
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar2[4] = 0;
      ppuVar4 = &PTR_DAT_110c4cb08;
    }
    else {
      if (iVar1 != 6) goto LAB_10ab4d428;
      if ((*(byte *)(param_3 + 0x2c) & 1) != 0) goto LAB_10ab4d340;
      if ((*(uint *)(param_3 + 0x28) & 0x7fffffff) == 1) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab4d47c;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab4d47c:
        uVar8 = 0;
        uVar7 = 0;
      }
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar2[4] = 0;
      ppuVar4 = &PTR_DAT_110c4cb80;
    }
  }
  *puVar2 = ppuVar4;
  puVar2[1] = lVar6;
LAB_10ab4d428:
  *param_1 = puVar2;
  return;
}



/* Entry: 10ab4dde8; end: 10ab4e0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10ab4dde8(undefined8 param_1,undefined8 param_2,float param_3,long *param_4,uint param_5,
                    int param_6)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  uint *puVar3;
  long *plVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  ulong *puVar21;
  float *pfVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  long *unaff_x20;
  long lVar25;
  ulong uVar26;
  int iVar27;
  long *unaff_x22;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float extraout_s1;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float extraout_s3;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  ulong uVar44;
  undefined8 uVar45;
  uint uStack_168;
  int iStack_15c;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  long *plStack_f8;
  long *aplStack_f0 [2];
  long *in_stack_ffffffffffffff68;
  long *plStack_58;
  
  uVar14 = *(uint *)(param_4 + 0x22);
  if (uVar14 == 0xffffffff) {
    return param_4;
  }
  lVar12 = param_4[0x1f];
  auVar34._0_8_ = (param_4[0x20] - lVar12 >> 3) * 0x6db6db6db6db6db7;
  if (uVar14 <= auVar34._0_8_ && auVar34._0_8_ - uVar14 != 0) {
    if (lVar12 == 0) {
      return param_4;
    }
    pauVar1 = (undefined1 (*) [16])(param_4 + 0x27);
    lVar12 = lVar12 + (ulong)uVar14 * 0x38;
    uVar14 = param_6 + param_5;
    iVar27 = *(int *)(lVar12 + 0x28);
    if (*(int *)(lVar12 + 0x24) == 5) {
      if (iVar27 == 3) {
        if (uVar14 <= param_5) {
          return param_4;
        }
        uVar6 = *(uint *)(param_4 + 0x1e);
        fVar40 = *(float *)(param_4 + 0x29);
        fVar38 = *(float *)((long)param_4 + 0x14c);
        auVar34 = *pauVar1;
        lVar18 = (ulong)uVar14 - (ulong)param_5;
        pfVar22 = (float *)((ulong)*(uint *)(lVar12 + 0x30) + (ulong)uVar6 * (ulong)param_5 +
                            param_4[2] + 4);
        do {
          uVar45 = *(undefined8 *)*(undefined1 (*) [12])(pfVar22 + -1);
          fVar39 = (float)uVar45;
          fVar28 = pfVar22[1];
          auVar8 = *(undefined1 (*) [12])(pfVar22 + -1);
          fVar40 = (float)((uint)fVar40 ^
                          ((uint)fVar40 ^ (uint)*pfVar22) & -(uint)(*pfVar22 < fVar40));
          fVar38 = (float)((uint)fVar38 ^ ((uint)fVar38 ^ (uint)fVar28) & -(uint)(fVar28 < fVar38));
          *(float *)(param_4 + 0x29) = fVar40;
          *(float *)((long)param_4 + 0x14c) = fVar38;
          auVar42 = NEON_ext(auVar34,auVar34,8,1);
          auVar41._0_4_ = -(uint)(auVar34._0_4_ < fVar39);
          auVar41._4_4_ = -(uint)(auVar34._4_4_ < (float)((ulong)uVar45 >> 0x20));
          auVar41._8_4_ = -(uint)(auVar34._8_4_ < fVar28);
          auVar41._12_4_ = -(uint)(fVar39 < auVar42._4_4_);
          auVar42._12_4_ = fVar39;
          auVar42._0_12_ = auVar8;
          auVar34 = auVar34 ^ (auVar34 ^ auVar42) & auVar41;
          param_4[0x28] = auVar34._8_8_;
          *(long *)*pauVar1 = auVar34._0_8_;
          pfVar22 = (float *)((long)pfVar22 + (ulong)uVar6);
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        return param_4;
      }
      if (iVar27 != 2) {
        return param_4;
      }
      auVar33._0_8_ = *(ulong *)((long)param_4 + 0x144);
      auVar33._8_8_ = 0;
      auVar34._0_8_ = param_4[0x27];
      auVar34._8_8_ = 0;
      if (param_5 < uVar14) {
        lVar18 = (ulong)uVar14 - (ulong)param_5;
        puVar21 = (ulong *)(param_4[2] +
                           (ulong)*(uint *)(lVar12 + 0x30) +
                           (ulong)*(uint *)(param_4 + 0x1e) * (ulong)param_5);
        do {
          uVar26 = *puVar21;
          fVar40 = (float)(uVar26 >> 0x20);
          auVar33._0_8_ =
               auVar33._0_8_ ^
               (auVar33._0_8_ ^ uVar26) &
               CONCAT44(-(uint)(fVar40 < auVar33._4_4_),-(uint)((float)uVar26 < auVar33._0_4_));
          auVar34._0_8_ =
               auVar34._0_8_ ^
               (auVar34._0_8_ ^ uVar26) &
               CONCAT44(-(uint)(auVar34._4_4_ < fVar40),-(uint)(auVar34._0_4_ < (float)uVar26));
          puVar21 = (ulong *)((long)puVar21 + (ulong)*(uint *)(param_4 + 0x1e));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      *(ulong *)((long)param_4 + 0x144) = auVar33._0_8_;
      *(undefined4 *)((long)param_4 + 0x14c) = 0;
      param_4[0x27] = auVar34._0_8_;
      *(undefined4 *)(param_4 + 0x28) = 0;
      return param_4;
    }
    plVar11 = param_4;
    if (iVar27 == 3) {
      FUN_10ab4c544(&plStack_58,param_4);
      if (param_5 < uVar14) {
        auVar34._0_8_ = (ulong)param_5;
        do {
          uVar45 = (**(code **)(*plStack_58 + 0x10))(plStack_58,auVar34._0_8_);
          fVar38 = (float)((ulong)uVar45 >> 0x20);
          fVar40 = (float)uVar45;
          auVar33._0_8_ = param_4[0x29];
          param_4[0x29] =
               auVar33._0_8_ ^
               (auVar33._0_8_ ^ CONCAT44(param_3,fVar38)) &
               CONCAT44(-(uint)(param_3 < (float)(auVar33._0_8_ >> 0x20)),
                        -(uint)(fVar38 < (float)auVar33._0_8_));
          auVar42 = *pauVar1;
          auVar43._8_4_ = param_3;
          auVar43._0_8_ = uVar45;
          auVar35._0_8_ = CONCAT44(-(uint)(auVar42._4_4_ < fVar38),-(uint)(auVar42._0_4_ < fVar40));
          auVar35._8_4_ = -(uint)(auVar42._8_4_ < param_3);
          auVar35._12_4_ = -(uint)(fVar40 < auVar42._12_4_);
          auVar43._12_4_ = fVar40;
          auVar30._8_8_ = auVar35._8_8_;
          auVar30._0_8_ = auVar35._0_8_;
          auVar42 = auVar42 ^ (auVar42 ^ auVar43) & auVar30;
          param_4[0x28] = auVar42._8_8_;
          *(long *)*pauVar1 = auVar42._0_8_;
          auVar34._0_8_ = auVar34._0_8_ + 1;
          param_6 = param_6 + -1;
          plVar10 = plStack_58;
        } while (param_6 != 0);
        goto LAB_10ab4e054;
      }
    }
    else {
      if (iVar27 != 2) {
        return param_4;
      }
      func_0x00010ab50ad8(&plStack_58,param_4);
      auVar33._0_8_ = *(ulong *)((long)param_4 + 0x144);
      auVar34._0_8_ = param_4[0x27];
      if (param_5 < uVar14) {
        uVar26 = (ulong)param_5;
        do {
          plVar11 = plStack_58;
          uVar44 = (**(code **)(*plStack_58 + 0x10))(plStack_58,uVar26);
          fVar40 = (float)(uVar44 >> 0x20);
          auVar33._0_8_ =
               auVar33._0_8_ ^
               (auVar33._0_8_ ^ uVar44) &
               CONCAT44(-(uint)(fVar40 < (float)(auVar33._0_8_ >> 0x20)),
                        -(uint)((float)uVar44 < (float)auVar33._0_8_));
          auVar34._0_8_ =
               auVar34._0_8_ ^
               (auVar34._0_8_ ^ uVar44) &
               CONCAT44(-(uint)((float)(auVar34._0_8_ >> 0x20) < fVar40),
                        -(uint)((float)auVar34._0_8_ < (float)uVar44));
          uVar26 = uVar26 + 1;
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
      *(ulong *)((long)param_4 + 0x144) = auVar33._0_8_;
      *(undefined4 *)((long)param_4 + 0x14c) = 0;
      param_4[0x27] = auVar34._0_8_;
      *(undefined4 *)(param_4 + 0x28) = 0;
    }
    plVar10 = plStack_58;
    if (plStack_58 == (long *)0x0) {
      return plVar11;
    }
LAB_10ab4e054:
    (**(code **)(*plVar10 + 8))(plVar10);
                    /* WARNING: Read-only address (ram,0x00010dea65e0) is written */
    return plVar10;
  }
  FUN_10ab725fc();
  (**(code **)(*unaff_x22 + 8))();
  __Unwind_Resume();
  param_4[0x29] = 0x7f7fffff7f7fffff;
  param_4[0x28] = 0x7f7fffffff7fffff;
  param_4[0x27] = -0x80000000800001;
  uVar14 = *(uint *)(param_4 + 0x1e);
  if (uVar14 == 0) {
    auVar34._0_8_ = 0;
  }
  else {
    auVar34._0_8_ = 0;
    if ((ulong)uVar14 != 0) {
      auVar34._0_8_ = (ulong)(param_4[3] - param_4[2]) / (ulong)uVar14;
    }
  }
  plVar11 = param_4;
  FUN_10ab4dde8(param_4,0,auVar34._0_8_);
  auVar42 = _UNK_10dea65e0;
  uVar14 = *(uint *)(param_4 + 0x24);
  if (uVar14 != 0xffffffff) {
    lVar12 = param_4[0x1f];
    auVar34._0_8_ = (param_4[0x20] - lVar12 >> 3) * 0x6db6db6db6db6db7;
    if (auVar34._0_8_ < uVar14 || auVar34._0_8_ - uVar14 == 0) {
      FUN_10ab725fc();
      (**(code **)(*unaff_x20 + 8))();
      __Unwind_Resume();
      plVar10 = (long *)(((plVar11[3] + plVar11[6]) - (plVar11[2] + plVar11[5])) + 0x1b0);
      for (lVar12 = plVar11[8]; lVar12 != plVar11[9]; lVar12 = lVar12 + 0x48) {
        plVar10 = (long *)((long)plVar10 +
                          ((*(long **)(lVar12 + 0x38))[1] - **(long **)(lVar12 + 0x38)) + 4);
      }
      for (lVar12 = plVar11[0x14]; lVar12 != plVar11[0x15]; lVar12 = lVar12 + 0x58) {
        lVar18 = (long)*(char *)(lVar12 + 0x27);
        if (lVar18 < 0) {
          lVar18 = *(long *)(lVar12 + 0x18);
        }
        plVar10 = (long *)((long)plVar10 + lVar18 + 0x2c);
        for (lVar18 = *(long *)(lVar12 + 0x30); lVar18 != *(long *)(lVar12 + 0x38);
            lVar18 = lVar18 + 0x20) {
          plVar10 = (long *)((long)plVar10 + (*(long *)(lVar18 + 0x10) - *(long *)(lVar18 + 8)) + 4)
          ;
        }
      }
      return plVar10;
    }
    if (lVar12 != 0) {
      lVar12 = lVar12 + (ulong)uVar14 * 0x38;
      param_4[0x2b] = UNK_10dea65e0._8_8_;
      param_4[0x2a] = auVar42._0_8_;
      if (*(int *)(lVar12 + 0x28) == 2) {
        if (*(int *)(lVar12 + 0x24) == 5) {
          auVar34._0_8_ = (ulong)*(uint *)(param_4 + 0x1e);
          if (*(uint *)(param_4 + 0x1e) != 0) {
            auVar33._0_8_ = 0;
            if (auVar34._0_8_ != 0) {
              auVar33._0_8_ = (ulong)(param_4[3] - param_4[2]) / auVar34._0_8_;
            }
            auVar33._0_8_ = auVar33._0_8_ & 0xffffffff;
            if (auVar33._0_8_ != 0) {
              puVar15 = (undefined8 *)(param_4[2] + (ulong)*(uint *)(lVar12 + 0x30));
              do {
                uVar45 = *puVar15;
                param_3 = (float)uVar45;
                fVar40 = (float)((ulong)uVar45 >> 0x20);
                auVar41 = NEON_ext(auVar42,auVar42,8,1);
                auVar36._0_4_ = -(uint)(param_3 < auVar42._0_4_);
                auVar36._4_4_ = -(uint)(fVar40 < auVar42._4_4_);
                auVar36._8_4_ = -(uint)(auVar41._0_4_ < param_3);
                auVar36._12_4_ = -(uint)(auVar41._4_4_ < fVar40);
                auVar7._8_8_ = uVar45;
                auVar7._0_8_ = uVar45;
                auVar42 = auVar42 ^ (auVar42 ^ auVar7) & auVar36;
                param_4[0x2b] = auVar42._8_8_;
                param_4[0x2a] = auVar42._0_8_;
                puVar15 = (undefined8 *)((long)puVar15 + auVar34._0_8_);
                auVar33._0_8_ = auVar33._0_8_ - 1;
              } while (auVar33._0_8_ != 0);
            }
          }
        }
        else {
          plVar11 = param_4;
          func_0x00010ab50ad8(&stack0xffffffffffffff68,param_4);
          uVar14 = *(uint *)(param_4 + 0x1e);
          if (uVar14 == 0) {
LAB_10ab4e23c:
            if (in_stack_ffffffffffffff68 == (long *)0x0) goto LAB_10ab4e250;
          }
          else {
            auVar34._0_8_ = 0;
            if ((ulong)uVar14 != 0) {
              auVar34._0_8_ = (ulong)(param_4[3] - param_4[2]) / (ulong)uVar14;
            }
            if ((auVar34._0_8_ & 0xffffffff) == 0) goto LAB_10ab4e23c;
            auVar33._0_8_ = 0;
            do {
              uVar45 = (**(code **)(*in_stack_ffffffffffffff68 + 0x10))
                                 (in_stack_ffffffffffffff68,auVar33._0_8_);
              fVar40 = (float)((ulong)uVar45 >> 0x20);
              pauVar1 = (undefined1 (*) [16])(param_4 + 0x2a);
              param_3 = (float)*(undefined8 *)*pauVar1;
              auVar31._0_4_ = -(uint)((float)uVar45 < param_3);
              auVar31._4_4_ = -(uint)(fVar40 < (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20));
              auVar31._8_4_ = -(uint)(*(float *)(param_4 + 0x2b) < (float)uVar45);
              auVar31._12_4_ = -(uint)(*(float *)((long)param_4 + 0x15c) < fVar40);
              auVar37._8_8_ = uVar45;
              auVar37._0_8_ = uVar45;
              auVar42 = *pauVar1 ^ (*pauVar1 ^ auVar37) & auVar31;
              param_4[0x2b] = auVar42._8_8_;
              param_4[0x2a] = auVar42._0_8_;
              auVar33._0_8_ = auVar33._0_8_ + 1;
            } while ((auVar34._0_8_ & 0xffffffff) != auVar33._0_8_);
          }
          (**(code **)(*in_stack_ffffffffffffff68 + 8))(in_stack_ffffffffffffff68);
          plVar11 = in_stack_ffffffffffffff68;
        }
      }
    }
  }
LAB_10ab4e250:
  if (param_4[0xb] == param_4[0xc]) {
    return plVar11;
  }
  uVar14 = *(uint *)(param_4 + 0x22);
  if (uVar14 != 0xffffffff) {
    auVar34._0_8_ = (param_4[0x20] - param_4[0x1f] >> 3) * 0x6db6db6db6db6db7;
    if (uVar14 <= auVar34._0_8_ && auVar34._0_8_ - uVar14 != 0) {
      lVar12 = param_4[0x1f] + (ulong)uVar14 * 0x38;
      goto LAB_10ab4a670;
    }
LAB_10ab4ac48:
    FUN_10ab725fc();
LAB_10ab4ac4c:
    FUN_10a00946c(&UNK_10f6921f0);
    goto LAB_10ab4ac60;
  }
  lVar12 = 0;
LAB_10ab4a670:
  uVar14 = *(uint *)(param_4 + 0x26);
  if (uVar14 == 0xffffffff) {
    lVar18 = 0;
    if (lVar12 == 0) goto LAB_10ab4a728;
LAB_10ab4a6ac:
    if (((*(int *)(lVar12 + 0x28) != 3 || lVar18 == 0) || (*(int *)(lVar18 + 0x28) != 4)) ||
       (1 < (int)param_4[0x1d] - 1U)) goto LAB_10ab4a728;
    FUN_10ab4c544(aplStack_f0,param_4,lVar12);
    func_0x00010ab4c84c(&plStack_f8,param_4,lVar18);
    plVar10 = aplStack_f0[0];
    plVar11 = plStack_f8;
    if ((aplStack_f0[0] != (long *)0x0) && (plStack_f8 != (long *)0x0)) {
      uVar14 = *(uint *)(param_4 + 0x1e);
      if (uVar14 == 0) {
        uStack_168 = 0;
      }
      else {
        uStack_168 = 0;
        if ((ulong)uVar14 != 0) {
          uStack_168 = (uint)((ulong)(param_4[3] - param_4[2]) / (ulong)uVar14);
        }
      }
      lVar18 = param_4[5];
      lVar12 = param_4[0x1d];
      FUN_10ab4a274(param_4 + 0xe,(param_4[0xc] - param_4[0xb] >> 5) * -0x5555555555555555);
      puVar15 = (undefined8 *)param_4[0xe];
      if (0 < param_4[0xf] - (long)puVar15) {
        auVar34._0_8_ = (ulong)(param_4[0xf] - (long)puVar15) / 0x18 + 1;
        do {
          puVar15[1] = 0xff7fffff00000000;
          *puVar15 = 0;
          puVar15[2] = 0xff7fffffff7fffff;
          puVar15 = puVar15 + 3;
          auVar34._0_8_ = auVar34._0_8_ - 1;
        } while (1 < auVar34._0_8_);
      }
      plVar4 = (long *)param_4[0x12];
      for (plVar20 = (long *)param_4[0x11]; plVar20 != plVar4; plVar20 = plVar20 + 6) {
        if (*plVar20 != plVar20[1]) {
          puVar5 = (uint *)plVar20[4];
          for (puVar3 = (uint *)plVar20[3]; puVar3 != puVar5; puVar3 = puVar3 + 3) {
            auVar34._0_8_ = (ulong)*puVar3;
            lVar19 = param_4[0x1a];
            if (lVar19 == param_4[0x1b]) {
              iStack_15c = 0;
            }
            else {
              auVar33._0_8_ = (ulong)puVar3[2];
              uVar26 = (param_4[0x1b] - lVar19 >> 3) * 0x4ec4ec4ec4ec4ec5;
              if (uVar26 < auVar33._0_8_ || uVar26 - auVar33._0_8_ == 0) goto LAB_10ab4ac60;
              iStack_15c = *(int *)(lVar19 + auVar33._0_8_ * 0x68 + 8);
            }
            auVar33._0_8_ = puVar3[1] + auVar34._0_8_;
            fVar40 = param_3;
            if (puVar3[1] != 0) {
LAB_10ab4aa48:
              if ((int)lVar12 == 1) {
                uVar14 = (uint)*(ushort *)(lVar18 + auVar34._0_8_ * 2);
              }
              else {
                uVar14 = *(uint *)(lVar18 + auVar34._0_8_ * 4);
              }
              uVar14 = uVar14 + iStack_15c;
              if (uVar14 < uStack_168) {
                uVar45 = (**(code **)(*plVar10 + 0x10))(plVar10,uVar14);
                fVar32 = (float)((ulong)uVar45 >> 0x20);
                fVar39 = (float)uVar45;
                fVar38 = fVar40;
                fVar28 = (float)(**(code **)(*plVar11 + 0x10))(plVar11,uVar14);
                iVar27 = 0;
                param_3 = fVar38;
                do {
                  if (iVar27 < 3) {
                    fVar29 = extraout_s1;
                    if ((iVar27 != 1) && (fVar29 = fVar28, iVar27 == 2)) {
                      fVar29 = fVar38;
                    }
                  }
                  else {
                    fVar29 = extraout_s3;
                    if ((iVar27 != 3) && (fVar29 = fVar28, iVar27 == 4)) goto LAB_10ab4abf8;
                  }
                  if ((ulong)(plVar20[1] - *plVar20 >> 2) <= (ulong)(long)(int)fVar29) {
                    FUN_10a00946c(&UNK_10f6921f0);
                    goto LAB_10ab4ac60;
                  }
                  uVar44 = (ulong)*(uint *)(*plVar20 + (long)(int)fVar29 * 4);
                  uVar26 = (param_4[0xc] - param_4[0xb] >> 5) * -0x5555555555555555;
                  if (uVar26 < uVar44 || uVar26 - uVar44 == 0) {
                    FUN_10a00946c(&UNK_10f6921f0);
                    goto LAB_10ab4ac60;
                  }
                  lVar19 = param_4[0xb] + uVar44 * 0x60;
                  fStack_100 = fVar39 * *(float *)(lVar19 + 0x28) +
                               fVar32 * *(float *)(lVar19 + 0x38) +
                               fVar40 * *(float *)(lVar19 + 0x48) + *(float *)(lVar19 + 0x58);
                  param_3 = (float)*(undefined8 *)(lVar19 + 0x40) * fVar40 +
                            (float)*(undefined8 *)(lVar19 + 0x50);
                  uStack_108 = CONCAT44((float)((ulong)*(undefined8 *)(lVar19 + 0x20) >> 0x20) *
                                        fVar39 + (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >>
                                                        0x20) * fVar32 +
                                        (float)((ulong)*(undefined8 *)(lVar19 + 0x40) >> 0x20) *
                                        fVar40 + (float)((ulong)*(undefined8 *)(lVar19 + 0x50) >>
                                                        0x20),
                                        (float)*(undefined8 *)(lVar19 + 0x20) * fVar39 +
                                        (float)*(undefined8 *)(lVar19 + 0x30) * fVar32 + param_3);
                  uVar26 = (param_4[0xf] - param_4[0xe] >> 3) * -0x5555555555555555;
                  if (uVar26 < uVar44 || uVar26 - uVar44 == 0) goto LAB_10ab4ac60;
                  func_0x00010a01069c(&uStack_120,param_4[0xe] + uVar44 * 0x18,&uStack_108);
                  uVar26 = (param_4[0xf] - param_4[0xe] >> 3) * -0x5555555555555555;
                  if (uVar26 < uVar44 || uVar26 - uVar44 == 0) goto LAB_10ab4ac60;
                  puVar15 = (undefined8 *)(param_4[0xe] + uVar44 * 0x18);
                  puVar15[2] = uStack_110;
                  puVar15[1] = uStack_118;
                  *puVar15 = uStack_120;
                  iVar27 = iVar27 + 1;
                } while( true );
              }
              goto LAB_10ab4ac4c;
            }
LAB_10ab4ac08:
          }
        }
      }
      goto LAB_10ab4a8dc;
    }
  }
  else {
    auVar34._0_8_ = (param_4[0x20] - param_4[0x1f] >> 3) * 0x6db6db6db6db6db7;
    if (auVar34._0_8_ < uVar14 || auVar34._0_8_ - uVar14 == 0) goto LAB_10ab4ac48;
    lVar18 = param_4[0x1f] + (ulong)uVar14 * 0x38;
    if (lVar12 != 0) goto LAB_10ab4a6ac;
LAB_10ab4a728:
    plStack_f8 = (long *)0x0;
    aplStack_f0[0] = (long *)0x0;
  }
  plVar10 = aplStack_f0[0];
  plVar11 = param_4 + 0xe;
  puVar15 = (undefined8 *)param_4[0xf];
  if (((undefined8 *)*plVar11 == puVar15) && (param_4[0xc] - param_4[0xb] != 0)) {
    lVar19 = param_4[0xc] - param_4[0xb] >> 5;
    auVar33._0_8_ = lVar19 * -0x5555555555555555;
    lVar17 = param_4[0x10] - *plVar11 >> 3;
    auVar34._0_8_ = lVar17 * -0x5555555555555555;
    if (auVar34._0_8_ < auVar33._0_8_) {
      if (0xaaaaaaaaaaaaaaa < auVar33._0_8_) {
        FUN_10a559bb0();
LAB_10ab4ac60:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10ab4ac64);
        (*pcVar9)();
      }
      uVar26 = lVar17 * 0x5555555555555556;
      if (uVar26 < auVar33._0_8_ || uVar26 + lVar19 * 0x5555555555555555 == 0) {
        uVar26 = auVar33._0_8_;
      }
      if (0x555555555555554 < auVar34._0_8_) {
        uVar26 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_10a559bc4();
      lVar17 = lVar19 * 8;
      plVar20 = plVar11;
      do {
        plVar20[1] = -0x80000100000000;
        *plVar20 = 0;
        plVar20[2] = -0x80000000800001;
        plVar20 = plVar20 + 3;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != 0);
      lVar25 = (long)plVar11 - (param_4[0xf] - param_4[0xe]);
      _memcpy(lVar25);
      lVar17 = param_4[0xe];
      param_4[0xe] = lVar25;
      param_4[0xf] = (long)(plVar11 + lVar19);
      param_4[0x10] = (long)(plVar11 + uVar26 * 3);
      if (lVar17 != 0) {
        __ZdlPv();
      }
    }
    else {
      puVar2 = puVar15 + lVar19;
      lVar19 = lVar19 * 8;
      do {
        puVar15[1] = 0xff7fffff00000000;
        *puVar15 = 0;
        puVar15[2] = 0xff7fffffff7fffff;
        puVar15 = puVar15 + 3;
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != 0);
      param_4[0xf] = (long)puVar2;
    }
  }
  if (((bRam00000001137ec498 & 1) == 0) &&
     (bRam00000001137ec498 = 1, (bRam000000011330a9e8 >> 1 & 1) != 0)) {
    if (lVar12 == 0) {
      uVar13 = 0;
      uVar16 = 0xffffffff;
    }
    else {
      uVar16 = *(undefined4 *)(lVar12 + 0x24);
      uVar13 = *(undefined4 *)(lVar12 + 0x28);
    }
    if (lVar18 == 0) {
      uVar23 = 0;
      uVar24 = 0xffffffff;
    }
    else {
      uVar24 = *(undefined4 *)(lVar18 + 0x24);
      uVar23 = *(undefined4 *)(lVar18 + 0x28);
    }
    func_0x00010ae06f08(1,2,&UNK_10f692aff,&UNK_10f692b2b,0x4df,&UNK_10f692b65,in_x6,in_x7,
                        (param_4[0xc] - param_4[0xb] >> 5) * -0x5555555555555555,uVar13,uVar16,
                        uVar23,uVar24,(int)param_4[0x1d]);
  }
LAB_10ab4a8dc:
  plVar11 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    (**(code **)(*plStack_f8 + 8))();
  }
  aplStack_f0[0] = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))(plVar10);
    plVar11 = plVar10;
  }
  return plVar11;
LAB_10ab4abf8:
  auVar34._0_8_ = auVar34._0_8_ + 1;
  fVar40 = param_3;
  if (auVar34._0_8_ == auVar33._0_8_) goto LAB_10ab4ac08;
  goto LAB_10ab4aa48;
}



/* Entry: 10ab4e0a4; end: 10ab4e2a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10ab4e0a4(undefined8 param_1,float param_2,float param_3,long *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  uint *puVar3;
  long *plVar4;
  uint *puVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  long *unaff_x20;
  long lVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float extraout_s3;
  undefined1 auVar37 [16];
  uint uStack_108;
  int iStack_fc;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  long *plStack_98;
  long *aplStack_90 [2];
  long *in_stack_ffffffffffffffc8;
  
  param_4[0x29] = 0x7f7fffff7f7fffff;
  param_4[0x28] = 0x7f7fffffff7fffff;
  param_4[0x27] = -0x80000000800001;
  uVar14 = *(uint *)(param_4 + 0x1e);
  if (uVar14 == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = 0;
    if ((ulong)uVar14 != 0) {
      uVar22 = (ulong)(param_4[3] - param_4[2]) / (ulong)uVar14;
    }
  }
  plVar11 = param_4;
  FUN_10ab4dde8(param_4,0,uVar22);
  auVar32 = _UNK_10dea65e0;
  uVar14 = *(uint *)(param_4 + 0x24);
  if (uVar14 != 0xffffffff) {
    lVar12 = param_4[0x1f];
    uVar22 = (param_4[0x20] - lVar12 >> 3) * 0x6db6db6db6db6db7;
    if (uVar22 < uVar14 || uVar22 - uVar14 == 0) {
      FUN_10ab725fc();
      (**(code **)(*unaff_x20 + 8))();
      __Unwind_Resume();
      plVar10 = (long *)(((plVar11[3] + plVar11[6]) - (plVar11[2] + plVar11[5])) + 0x1b0);
      for (lVar12 = plVar11[8]; lVar12 != plVar11[9]; lVar12 = lVar12 + 0x48) {
        plVar10 = (long *)((long)plVar10 +
                          ((*(long **)(lVar12 + 0x38))[1] - **(long **)(lVar12 + 0x38)) + 4);
      }
      for (lVar12 = plVar11[0x14]; lVar12 != plVar11[0x15]; lVar12 = lVar12 + 0x58) {
        lVar28 = (long)*(char *)(lVar12 + 0x27);
        if (lVar28 < 0) {
          lVar28 = *(long *)(lVar12 + 0x18);
        }
        plVar10 = (long *)((long)plVar10 + lVar28 + 0x2c);
        for (lVar28 = *(long *)(lVar12 + 0x30); lVar28 != *(long *)(lVar12 + 0x38);
            lVar28 = lVar28 + 0x20) {
          plVar10 = (long *)((long)plVar10 + (*(long *)(lVar28 + 0x10) - *(long *)(lVar28 + 8)) + 4)
          ;
        }
      }
      return plVar10;
    }
    if (lVar12 != 0) {
      lVar12 = lVar12 + (ulong)uVar14 * 0x38;
      param_4[0x2b] = UNK_10dea65e0._8_8_;
      param_4[0x2a] = auVar32._0_8_;
      if (*(int *)(lVar12 + 0x28) == 2) {
        if (*(int *)(lVar12 + 0x24) == 5) {
          uVar22 = (ulong)*(uint *)(param_4 + 0x1e);
          if (*(uint *)(param_4 + 0x1e) != 0) {
            uVar18 = 0;
            if (uVar22 != 0) {
              uVar18 = (ulong)(param_4[3] - param_4[2]) / uVar22;
            }
            uVar18 = uVar18 & 0xffffffff;
            if (uVar18 != 0) {
              puVar15 = (undefined8 *)(param_4[2] + (ulong)*(uint *)(lVar12 + 0x30));
              do {
                uVar7 = *puVar15;
                param_3 = (float)uVar7;
                fVar34 = (float)((ulong)uVar7 >> 0x20);
                auVar37 = NEON_ext(auVar32,auVar32,8,1);
                param_2 = (float)-(uint)(param_3 < auVar32._0_4_);
                auVar8._8_8_ = uVar7;
                auVar8._0_8_ = uVar7;
                auVar6._4_4_ = -(uint)(fVar34 < auVar32._4_4_);
                auVar6._0_4_ = param_2;
                auVar6._8_4_ = -(uint)(auVar37._0_4_ < param_3);
                auVar6._12_4_ = -(uint)(auVar37._4_4_ < fVar34);
                auVar32 = auVar32 ^ (auVar32 ^ auVar8) & auVar6;
                param_4[0x2b] = auVar32._8_8_;
                param_4[0x2a] = auVar32._0_8_;
                puVar15 = (undefined8 *)((long)puVar15 + uVar22);
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
          }
        }
        else {
          plVar11 = param_4;
          func_0x00010ab50ad8(&stack0xffffffffffffffc8,param_4);
          uVar14 = *(uint *)(param_4 + 0x1e);
          if (uVar14 == 0) {
LAB_10ab4e23c:
            if (in_stack_ffffffffffffffc8 == (long *)0x0) goto LAB_10ab4e250;
          }
          else {
            uVar22 = 0;
            if ((ulong)uVar14 != 0) {
              uVar22 = (ulong)(param_4[3] - param_4[2]) / (ulong)uVar14;
            }
            if ((uVar22 & 0xffffffff) == 0) goto LAB_10ab4e23c;
            uVar18 = 0;
            fVar34 = param_2;
            do {
              param_2 = (float)(**(code **)(*in_stack_ffffffffffffffc8 + 0x10))
                                         (in_stack_ffffffffffffffc8,uVar18);
              pauVar1 = (undefined1 (*) [16])(param_4 + 0x2a);
              param_3 = (float)*(undefined8 *)*pauVar1;
              auVar37._0_4_ = -(uint)(param_2 < param_3);
              auVar37._4_4_ = -(uint)(fVar34 < (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20));
              auVar37._8_4_ = -(uint)(*(float *)(param_4 + 0x2b) < param_2);
              auVar37._12_4_ = -(uint)(*(float *)((long)param_4 + 0x15c) < fVar34);
              auVar32._4_4_ = fVar34;
              auVar32._0_4_ = param_2;
              auVar32._8_4_ = param_2;
              auVar32._12_4_ = fVar34;
              auVar32 = *pauVar1 ^ (*pauVar1 ^ auVar32) & auVar37;
              param_4[0x2b] = auVar32._8_8_;
              param_4[0x2a] = auVar32._0_8_;
              uVar18 = uVar18 + 1;
              fVar34 = param_2;
            } while ((uVar22 & 0xffffffff) != uVar18);
          }
          (**(code **)(*in_stack_ffffffffffffffc8 + 8))(in_stack_ffffffffffffffc8);
          plVar11 = in_stack_ffffffffffffffc8;
        }
      }
    }
  }
LAB_10ab4e250:
  if (param_4[0xb] == param_4[0xc]) {
    return plVar11;
  }
  uVar14 = *(uint *)(param_4 + 0x22);
  if (uVar14 != 0xffffffff) {
    uVar22 = (param_4[0x20] - param_4[0x1f] >> 3) * 0x6db6db6db6db6db7;
    if (uVar14 <= uVar22 && uVar22 - uVar14 != 0) {
      lVar12 = param_4[0x1f] + (ulong)uVar14 * 0x38;
      goto LAB_10ab4a670;
    }
LAB_10ab4ac48:
    FUN_10ab725fc();
LAB_10ab4ac4c:
    FUN_10a00946c(&UNK_10f6921f0);
    goto LAB_10ab4ac60;
  }
  lVar12 = 0;
LAB_10ab4a670:
  uVar14 = *(uint *)(param_4 + 0x26);
  if (uVar14 == 0xffffffff) {
    lVar28 = 0;
    if (lVar12 == 0) goto LAB_10ab4a728;
LAB_10ab4a6ac:
    if (((*(int *)(lVar12 + 0x28) != 3 || lVar28 == 0) || (*(int *)(lVar28 + 0x28) != 4)) ||
       (1 < (int)param_4[0x1d] - 1U)) goto LAB_10ab4a728;
    FUN_10ab4c544(aplStack_90,param_4,lVar12);
    func_0x00010ab4c84c(&plStack_98,param_4,lVar28);
    plVar10 = aplStack_90[0];
    plVar11 = plStack_98;
    if ((aplStack_90[0] != (long *)0x0) && (plStack_98 != (long *)0x0)) {
      uVar14 = *(uint *)(param_4 + 0x1e);
      if (uVar14 == 0) {
        uStack_108 = 0;
      }
      else {
        uStack_108 = 0;
        if ((ulong)uVar14 != 0) {
          uStack_108 = (uint)((ulong)(param_4[3] - param_4[2]) / (ulong)uVar14);
        }
      }
      lVar28 = param_4[5];
      lVar12 = param_4[0x1d];
      FUN_10ab4a274(param_4 + 0xe,(param_4[0xc] - param_4[0xb] >> 5) * -0x5555555555555555);
      puVar15 = (undefined8 *)param_4[0xe];
      if (0 < param_4[0xf] - (long)puVar15) {
        uVar22 = (ulong)(param_4[0xf] - (long)puVar15) / 0x18 + 1;
        do {
          puVar15[1] = 0xff7fffff00000000;
          *puVar15 = 0;
          puVar15[2] = 0xff7fffffff7fffff;
          puVar15 = puVar15 + 3;
          uVar22 = uVar22 - 1;
        } while (1 < uVar22);
      }
      plVar4 = (long *)param_4[0x12];
      for (plVar21 = (long *)param_4[0x11]; plVar21 != plVar4; plVar21 = plVar21 + 6) {
        if (*plVar21 != plVar21[1]) {
          puVar5 = (uint *)plVar21[4];
          for (puVar3 = (uint *)plVar21[3]; puVar3 != puVar5; puVar3 = puVar3 + 3) {
            uVar22 = (ulong)*puVar3;
            lVar19 = param_4[0x1a];
            if (lVar19 == param_4[0x1b]) {
              iStack_fc = 0;
            }
            else {
              uVar18 = (ulong)puVar3[2];
              uVar20 = (param_4[0x1b] - lVar19 >> 3) * 0x4ec4ec4ec4ec4ec5;
              if (uVar20 < uVar18 || uVar20 - uVar18 == 0) goto LAB_10ab4ac60;
              iStack_fc = *(int *)(lVar19 + uVar18 * 0x68 + 8);
            }
            uVar18 = puVar3[1] + uVar22;
            fVar34 = param_2;
            fVar35 = param_3;
            if (puVar3[1] != 0) {
LAB_10ab4aa48:
              if ((int)lVar12 == 1) {
                uVar14 = (uint)*(ushort *)(lVar28 + uVar22 * 2);
              }
              else {
                uVar14 = *(uint *)(lVar28 + uVar22 * 4);
              }
              uVar14 = uVar14 + iStack_fc;
              if (uVar14 < uStack_108) {
                fVar29 = (float)(**(code **)(*plVar10 + 0x10))(plVar10,uVar14);
                fVar33 = fVar34;
                fVar36 = fVar35;
                fVar30 = (float)(**(code **)(*plVar11 + 0x10))(plVar11,uVar14);
                iVar27 = 0;
                param_2 = fVar33;
                param_3 = fVar36;
                do {
                  if (iVar27 < 3) {
                    fVar31 = fVar33;
                    if ((iVar27 != 1) && (fVar31 = fVar30, iVar27 == 2)) {
                      fVar31 = fVar36;
                    }
                  }
                  else {
                    fVar31 = extraout_s3;
                    if ((iVar27 != 3) && (fVar31 = fVar30, iVar27 == 4)) goto LAB_10ab4abf8;
                  }
                  if ((ulong)(plVar21[1] - *plVar21 >> 2) <= (ulong)(long)(int)fVar31) {
                    FUN_10a00946c(&UNK_10f6921f0);
                    goto LAB_10ab4ac60;
                  }
                  uVar26 = (ulong)*(uint *)(*plVar21 + (long)(int)fVar31 * 4);
                  uVar20 = (param_4[0xc] - param_4[0xb] >> 5) * -0x5555555555555555;
                  if (uVar20 < uVar26 || uVar20 - uVar26 == 0) {
                    FUN_10a00946c(&UNK_10f6921f0);
                    goto LAB_10ab4ac60;
                  }
                  lVar19 = param_4[0xb] + uVar26 * 0x60;
                  fStack_a0 = fVar29 * *(float *)(lVar19 + 0x28) +
                              fVar34 * *(float *)(lVar19 + 0x38) +
                              fVar35 * *(float *)(lVar19 + 0x48) + *(float *)(lVar19 + 0x58);
                  param_3 = (float)*(undefined8 *)(lVar19 + 0x40) * fVar35 +
                            (float)*(undefined8 *)(lVar19 + 0x50);
                  param_2 = (float)*(undefined8 *)(lVar19 + 0x20) * fVar29 +
                            (float)*(undefined8 *)(lVar19 + 0x30) * fVar34 + param_3;
                  uStack_a8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar19 + 0x20) >> 0x20) *
                                       fVar29 + (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >>
                                                       0x20) * fVar34 +
                                       (float)((ulong)*(undefined8 *)(lVar19 + 0x40) >> 0x20) *
                                       fVar35 + (float)((ulong)*(undefined8 *)(lVar19 + 0x50) >>
                                                       0x20),param_2);
                  uVar20 = (param_4[0xf] - param_4[0xe] >> 3) * -0x5555555555555555;
                  if (uVar20 < uVar26 || uVar20 - uVar26 == 0) goto LAB_10ab4ac60;
                  func_0x00010a01069c(&uStack_c0,param_4[0xe] + uVar26 * 0x18,&uStack_a8);
                  uVar20 = (param_4[0xf] - param_4[0xe] >> 3) * -0x5555555555555555;
                  if (uVar20 < uVar26 || uVar20 - uVar26 == 0) goto LAB_10ab4ac60;
                  puVar15 = (undefined8 *)(param_4[0xe] + uVar26 * 0x18);
                  puVar15[2] = uStack_b0;
                  puVar15[1] = uStack_b8;
                  *puVar15 = uStack_c0;
                  iVar27 = iVar27 + 1;
                } while( true );
              }
              goto LAB_10ab4ac4c;
            }
LAB_10ab4ac08:
          }
        }
      }
      goto LAB_10ab4a8dc;
    }
  }
  else {
    uVar22 = (param_4[0x20] - param_4[0x1f] >> 3) * 0x6db6db6db6db6db7;
    if (uVar22 < uVar14 || uVar22 - uVar14 == 0) goto LAB_10ab4ac48;
    lVar28 = param_4[0x1f] + (ulong)uVar14 * 0x38;
    if (lVar12 != 0) goto LAB_10ab4a6ac;
LAB_10ab4a728:
    plStack_98 = (long *)0x0;
    aplStack_90[0] = (long *)0x0;
  }
  plVar10 = aplStack_90[0];
  plVar11 = param_4 + 0xe;
  puVar15 = (undefined8 *)param_4[0xf];
  if (((undefined8 *)*plVar11 == puVar15) && (param_4[0xc] - param_4[0xb] != 0)) {
    lVar19 = param_4[0xc] - param_4[0xb] >> 5;
    uVar18 = lVar19 * -0x5555555555555555;
    lVar17 = param_4[0x10] - *plVar11 >> 3;
    uVar22 = lVar17 * -0x5555555555555555;
    if (uVar22 < uVar18) {
      if (0xaaaaaaaaaaaaaaa < uVar18) {
        FUN_10a559bb0();
LAB_10ab4ac60:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10ab4ac64);
        (*pcVar9)();
      }
      uVar20 = lVar17 * 0x5555555555555556;
      if (uVar20 < uVar18 || uVar20 + lVar19 * 0x5555555555555555 == 0) {
        uVar20 = uVar18;
      }
      if (0x555555555555554 < uVar22) {
        uVar20 = 0xaaaaaaaaaaaaaaa;
      }
      FUN_10a559bc4();
      lVar17 = lVar19 * 8;
      plVar21 = plVar11;
      do {
        plVar21[1] = -0x80000100000000;
        *plVar21 = 0;
        plVar21[2] = -0x80000000800001;
        plVar21 = plVar21 + 3;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != 0);
      lVar25 = (long)plVar11 - (param_4[0xf] - param_4[0xe]);
      _memcpy(lVar25);
      lVar17 = param_4[0xe];
      param_4[0xe] = lVar25;
      param_4[0xf] = (long)(plVar11 + lVar19);
      param_4[0x10] = (long)(plVar11 + uVar20 * 3);
      if (lVar17 != 0) {
        __ZdlPv();
      }
    }
    else {
      puVar2 = puVar15 + lVar19;
      lVar19 = lVar19 * 8;
      do {
        puVar15[1] = 0xff7fffff00000000;
        *puVar15 = 0;
        puVar15[2] = 0xff7fffffff7fffff;
        puVar15 = puVar15 + 3;
        lVar19 = lVar19 + -0x18;
      } while (lVar19 != 0);
      param_4[0xf] = (long)puVar2;
    }
  }
  if (((bRam00000001137ec498 & 1) == 0) &&
     (bRam00000001137ec498 = 1, (bRam000000011330a9e8 >> 1 & 1) != 0)) {
    if (lVar12 == 0) {
      uVar13 = 0;
      uVar16 = 0xffffffff;
    }
    else {
      uVar16 = *(undefined4 *)(lVar12 + 0x24);
      uVar13 = *(undefined4 *)(lVar12 + 0x28);
    }
    if (lVar28 == 0) {
      uVar23 = 0;
      uVar24 = 0xffffffff;
    }
    else {
      uVar24 = *(undefined4 *)(lVar28 + 0x24);
      uVar23 = *(undefined4 *)(lVar28 + 0x28);
    }
    func_0x00010ae06f08(1,2,&UNK_10f692aff,&UNK_10f692b2b,0x4df,&UNK_10f692b65,in_x6,in_x7,
                        (param_4[0xc] - param_4[0xb] >> 5) * -0x5555555555555555,uVar13,uVar16,
                        uVar23,uVar24,(int)param_4[0x1d]);
  }
LAB_10ab4a8dc:
  plVar11 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    (**(code **)(*plStack_98 + 8))();
  }
  aplStack_90[0] = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))(plVar10);
    plVar11 = plVar10;
  }
  return plVar11;
LAB_10ab4abf8:
  uVar22 = uVar22 + 1;
  fVar34 = param_2;
  fVar35 = param_3;
  if (uVar22 == uVar18) goto LAB_10ab4ac08;
  goto LAB_10ab4aa48;
}



/* Entry: 10ab4e2a8; end: 10ab4e33b;  */

long FUN_10ab4e2a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = ((*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x30)) -
          (*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28))) + 0x1b0;
  for (lVar2 = *(long *)(param_1 + 0x40); lVar2 != *(long *)(param_1 + 0x48); lVar2 = lVar2 + 0x48)
  {
    lVar1 = ((lVar1 + (*(long **)(lVar2 + 0x38))[1]) - **(long **)(lVar2 + 0x38)) + 4;
  }
  for (lVar2 = *(long *)(param_1 + 0xa0); lVar2 != *(long *)(param_1 + 0xa8); lVar2 = lVar2 + 0x58)
  {
    lVar3 = (long)*(char *)(lVar2 + 0x27);
    if (lVar3 < 0) {
      lVar3 = *(long *)(lVar2 + 0x18);
    }
    lVar1 = lVar1 + 0x2c + lVar3;
    for (lVar3 = *(long *)(lVar2 + 0x30); lVar3 != *(long *)(lVar2 + 0x38); lVar3 = lVar3 + 0x20) {
      lVar1 = ((lVar1 + *(long *)(lVar3 + 0x10)) - *(long *)(lVar3 + 8)) + 4;
    }
  }
  return lVar1;
}



/* Entry: 10ab4e33c; end: 10ab4e70f;  */

void FUN_10ab4e33c(undefined1 *param_1,long *param_2,ulong param_3,undefined8 param_4,int param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *extraout_x8;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  long *plVar11;
  undefined1 unaff_w20;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s8;
  float unaff_s9;
  undefined8 unaff_d10;
  undefined1 *puStack_e0;
  int iStack_d8;
  float afStack_d0 [6];
  undefined8 uStack_b8;
  char cStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_a4;
  undefined1 auStack_a0 [16];
  ulong uStack_90;
  
  if (((param_2[9] == param_2[8]) && (param_2[0x15] == param_2[0x14])) &&
     (param_2[0xc] == param_2[0xb])) {
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar16 = *(uint *)(param_2 + 0x22);
    if (uVar16 == 0xffffffff) {
      lVar6 = 0;
LAB_10ab4e3e8:
      uVar16 = *(int *)(lVar6 + 0x24) - 1;
      if (uVar16 < 7) {
        iVar8 = *(int *)(&UNK_10e4fda1c + (ulong)uVar16 * 4);
      }
      else {
        iVar8 = 0;
      }
      if (*(int *)(lVar6 + 0x28) * iVar8 == 0xc) {
        lVar6 = param_2[2] + (ulong)*(uint *)(lVar6 + 0x30);
        uVar16 = *(uint *)(param_2 + 0x1e);
      }
      else {
        lVar6 = 0;
        uVar16 = 0;
      }
      FUN_10ab4ccac(auStack_a0);
      if (uStack_90 == 0) {
        unaff_w20 = 0;
        unaff_s8 = 0.0;
        unaff_s9 = 3.4028235e+38;
      }
      else {
        iStack_d8 = 0;
        uVar9 = 0;
        unaff_w20 = 0;
        unaff_d10 = 0;
        unaff_s8 = 0.0;
        unaff_s9 = 3.4028235e+38;
        do {
          uVar7 = uVar9;
          FUN_10ab4e710(&uStack_b8,auStack_a0);
          if (uStack_b8 == (uint *)0x0) {
            if (uStack_ac == 2) {
LAB_10ab4e4cc:
              uVar12 = 0;
            }
            else {
              uVar12 = uStack_a8;
              if (uStack_ac != 1) {
                puStack_e0 = param_1;
                if (uStack_ac != 0) goto LAB_10ab4e6e4;
                uVar12 = uStack_a8 * 3;
              }
            }
          }
          else if (cStack_b0 == '\x02') {
            uVar12 = iStack_a4 + (uint)(ushort)*uStack_b8;
          }
          else {
            if (cStack_b0 != '\x04') goto LAB_10ab4e4cc;
            uVar12 = *uStack_b8 + iStack_a4;
          }
          FUN_10ab4e710(afStack_d0,auStack_a0,uVar9);
          FUN_10ab4e794(&uStack_b8,afStack_d0,1);
          uVar4 = uStack_ac;
          if (uStack_b8 != (uint *)0x0) {
            if (cStack_b0 == '\x02') {
              uVar4 = (uint)(ushort)*uStack_b8;
            }
            else {
              if (cStack_b0 != '\x04') {
                uVar4 = 0;
                goto LAB_10ab4e544;
              }
              uVar4 = *uStack_b8;
            }
            uVar4 = uStack_a8 + uVar4;
          }
LAB_10ab4e544:
          FUN_10ab4e710(afStack_d0,auStack_a0,uVar9);
          FUN_10ab4e794(&uStack_b8,afStack_d0,2);
          if (uStack_b8 == (uint *)0x0) {
            uVar7 = (ulong)uStack_ac;
          }
          else {
            if (cStack_b0 == '\x02') {
              uVar5 = (uint)(ushort)*uStack_b8;
            }
            else {
              if (cStack_b0 != '\x04') {
                uVar7 = 0;
                goto LAB_10ab4e5a4;
              }
              uVar5 = *uStack_b8;
            }
            uVar7 = (ulong)(uStack_a8 + uVar5);
          }
LAB_10ab4e5a4:
          pfVar14 = (float *)(lVar6 + (ulong)uVar16 * (ulong)uVar12);
          pfVar13 = (float *)(lVar6 + (ulong)uVar16 * (ulong)uVar4);
          uStack_b8 = (uint *)0x0;
          afStack_d0[0] = 0.0;
          pfVar15 = (float *)(lVar6 + uVar16 * uVar7);
          uVar7 = param_3;
          func_0x0001093e9534(param_3,param_4,pfVar14,pfVar13,pfVar15,&uStack_b8,afStack_d0);
          iVar8 = (int)uVar9;
          if ((int)uVar7 != 0) {
            fVar19 = (1.0 - (float)uStack_b8) - uStack_b8._4_4_;
            fVar18 = *pfVar14 * fVar19 + (float)uStack_b8 * *pfVar13 + uStack_b8._4_4_ * *pfVar15;
            fVar17 = (float)*(undefined8 *)(pfVar14 + 1) * fVar19 +
                     (float)*(undefined8 *)(pfVar13 + 1) * (float)uStack_b8 +
                     (float)*(undefined8 *)(pfVar15 + 1) * uStack_b8._4_4_;
            fVar19 = (float)((ulong)*(undefined8 *)(pfVar14 + 1) >> 0x20) * fVar19 +
                     (float)((ulong)*(undefined8 *)(pfVar13 + 1) >> 0x20) * (float)uStack_b8 +
                     (float)((ulong)*(undefined8 *)(pfVar15 + 1) >> 0x20) * uStack_b8._4_4_;
            if (param_5 == 0) {
              *param_1 = 1;
              *(float *)(param_1 + 0x10) = afStack_d0[0];
              *(float *)(param_1 + 4) = fVar18;
              *(ulong *)(param_1 + 8) = CONCAT44(fVar19,fVar17);
              *(int *)(param_1 + 0x14) = iVar8;
              return;
            }
            unaff_w20 = 1;
            if (afStack_d0[0] < unaff_s9) {
              unaff_d10 = CONCAT44(fVar19,fVar17);
              iStack_d8 = iVar8;
              unaff_s9 = afStack_d0[0];
              unaff_s8 = fVar18;
            }
          }
          uVar9 = (ulong)(iVar8 + 1);
        } while (uVar9 < uStack_90);
        *(undefined8 *)(param_1 + 8) = unaff_d10;
        *(int *)(param_1 + 0x14) = iStack_d8;
      }
      *param_1 = unaff_w20;
      *(float *)(param_1 + 0x10) = unaff_s9;
      *(float *)(param_1 + 4) = unaff_s8;
      return;
    }
    uVar9 = (param_2[0x20] - param_2[0x1f] >> 3) * 0x6db6db6db6db6db7;
    uVar7 = param_3;
    if (uVar16 <= uVar9 && uVar9 - uVar16 != 0) {
      lVar6 = param_2[0x1f] + (ulong)uVar16 * 0x38;
      goto LAB_10ab4e3e8;
    }
  }
  else {
    FUN_10a00946c(&UNK_10f692c02);
    uVar7 = param_3;
LAB_10ab4e6e4:
    *(undefined8 *)(puStack_e0 + 8) = unaff_d10;
    *(int *)(puStack_e0 + 0x14) = iStack_d8;
    *puStack_e0 = unaff_w20;
    *(float *)(puStack_e0 + 0x10) = unaff_s9;
    *(float *)(puStack_e0 + 4) = unaff_s8;
    param_2 = (long *)&UNK_10f692f3f;
    FUN_10a00946c();
  }
  iVar8 = (int)uVar7;
  FUN_10ab725fc();
  uVar16 = iVar8 * (uint)*(byte *)(param_2 + 3);
  plVar11 = (long *)param_2[1];
  if (plVar11 != (long *)0x0) {
    puVar10 = (uint *)*plVar11;
    puVar1 = (uint *)plVar11[1];
    if (puVar10 == puVar1) {
LAB_10ab4e75c:
      if (puVar10 != puVar1) {
        uVar12 = puVar10[2];
        goto LAB_10ab4e770;
      }
    }
    else {
      do {
        if ((*puVar10 <= uVar16) &&
           (uVar16 < *puVar10 + puVar10[1] * (uint)*(byte *)((long)param_2 + 0x19)))
        goto LAB_10ab4e75c;
        puVar10 = puVar10 + 0x1a;
      } while (puVar10 != puVar1);
    }
  }
  uVar12 = 0;
LAB_10ab4e770:
  uVar3 = *(undefined *)((long)param_2 + 0x19);
  uVar2 = *(undefined4 *)((long)param_2 + 0x1c);
  *extraout_x8 = *param_2 + (ulong)uVar16;
  *(undefined1 *)(extraout_x8 + 1) = uVar3;
  *(undefined4 *)((long)extraout_x8 + 0xc) = uVar2;
  *(int *)(extraout_x8 + 2) = iVar8;
  *(uint *)((long)extraout_x8 + 0x14) = uVar12;
  return;
}



/* Entry: 10ab4e710; end: 10ab4e793;  */

void FUN_10ab4e710(long *param_1,long *param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  long *plVar7;
  
  uVar4 = param_3 * (uint)*(byte *)(param_2 + 3);
  plVar7 = (long *)param_2[1];
  if (plVar7 != (long *)0x0) {
    puVar6 = (uint *)*plVar7;
    puVar1 = (uint *)plVar7[1];
    if (puVar6 == puVar1) {
LAB_10ab4e75c:
      if (puVar6 != puVar1) {
        uVar5 = puVar6[2];
        goto LAB_10ab4e770;
      }
    }
    else {
      do {
        if ((*puVar6 <= uVar4) &&
           (uVar4 < *puVar6 + puVar6[1] * (uint)*(byte *)((long)param_2 + 0x19)))
        goto LAB_10ab4e75c;
        puVar6 = puVar6 + 0x1a;
      } while (puVar6 != puVar1);
    }
  }
  uVar5 = 0;
LAB_10ab4e770:
  uVar3 = *(undefined1 *)((long)param_2 + 0x19);
  uVar2 = *(undefined4 *)((long)param_2 + 0x1c);
  *param_1 = *param_2 + (ulong)uVar4;
  *(undefined1 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((long)param_1 + 0xc) = uVar2;
  *(int *)(param_1 + 2) = param_3;
  *(uint *)((long)param_1 + 0x14) = uVar5;
  return;
}



/* Entry: 10ab4e794; end: 10ab4e8b3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10ab4e794(long *param_1,long *param_2,uint *******param_3)

{
  uint *******pppppppuVar1;
  uint *******pppppppuVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint *******pppppppuVar8;
  uint *******pppppppuVar9;
  uint *******pppppppuVar10;
  undefined8 ******ppppppuVar11;
  uint *******pppppppuVar12;
  uint *******pppppppuVar13;
  uint *******pppppppuVar14;
  uint *******pppppppuVar15;
  uint *******pppppppuVar16;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar17;
  undefined8 *******pppppppuVar18;
  int iVar19;
  undefined4 uVar20;
  uint *****pppppuVar21;
  undefined8 *******pppppppuVar22;
  uint *******pppppppuVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  uint ******ppppppuVar27;
  ulong uVar28;
  uint ******ppppppuVar29;
  undefined8 *******pppppppuVar30;
  ulong uVar31;
  uint ******ppppppuVar32;
  uint *******pppppppuVar33;
  ulong uStack_168;
  uint *******pppppppuStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  byte bStack_149;
  uint *******pppppppuStack_148;
  uint *******pppppppuStack_140;
  undefined8 uStack_138;
  undefined8 *******pppppppuStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  undefined8 uStack_108;
  uint ******ppppppuStack_100;
  uint ******ppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined1 auStack_e0 [16];
  ulong uStack_d0;
  undefined8 *******pppppppuStack_c0;
  undefined8 *******pppppppuStack_b8;
  ulong uStack_b0;
  uint ******ppppppuStack_a8;
  uint *puStack_a0;
  uint *******pppppppuStack_98;
  int *piStack_90;
  uint ******ppppppuStack_88;
  int iStack_80;
  uint auStack_7c [3];
  
  if (*param_2 != 0) {
    bVar4 = *(byte *)(param_2 + 1);
    uVar20 = *(undefined4 *)((long)param_2 + 0x14);
    *param_1 = *param_2 + (ulong)bVar4 * ((ulong)param_3 & 0xffffffff);
    *(byte *)(param_1 + 1) = bVar4;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 2) = uVar20;
    return;
  }
  iVar3 = *(int *)((long)param_2 + 0xc);
  iVar19 = (int)param_3;
  if (iVar3 == 2) {
    if (iVar19 == 2) {
      uVar20 = *(undefined4 *)((long)param_2 + 0x14);
      iVar19 = (int)param_2[2] + 2;
    }
    else {
      if (iVar19 != 1) {
        if (iVar19 == 0) {
          uVar20 = *(undefined4 *)((long)param_2 + 0x14);
          *param_1 = 0;
          *(undefined1 *)(param_1 + 1) = 0;
          *(undefined4 *)((long)param_1 + 0xc) = 0;
          *(undefined4 *)(param_1 + 2) = uVar20;
          return;
        }
        goto LAB_10ab4e8a8;
      }
      uVar20 = *(undefined4 *)((long)param_2 + 0x14);
      iVar19 = (int)param_2[2] + 1;
    }
LAB_10ab4e87c:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(int *)((long)param_1 + 0xc) = iVar19;
    *(undefined4 *)(param_1 + 2) = uVar20;
    return;
  }
  if (iVar3 != 1) {
    if (iVar3 != 0) {
      FUN_10a00946c(&UNK_10f692f3f);
LAB_10ab4e8a8:
      pppppppuVar8 = (uint *******)&UNK_10f692f1f;
      FUN_10a00946c();
      if (*(int *)(pppppppuVar8 + 0x1d) != 0) {
        pppppppuVar9 = pppppppuVar8;
        __ZNSt3__16chrono12steady_clock3nowEv();
        auStack_7c[0] = *(uint *)(pppppppuVar8 + 0x1e);
        if (auStack_7c[0] == 0) {
          uStack_168 = 0;
        }
        else {
          uStack_168 = 0;
          if ((ulong)auStack_7c[0] != 0) {
            uStack_168 = (ulong)((long)pppppppuVar8[3] - (long)pppppppuVar8[2]) /
                         (ulong)auStack_7c[0];
          }
        }
        pppppppuVar10 = pppppppuVar8;
        FUN_10ab4e2a8();
        iStack_80 = 0x18;
        pppppppuVar14 = pppppppuVar8 + 2;
        ppppppuStack_88 = *pppppppuVar14;
        ppppppuStack_a8 = (uint ******)&ppppppuStack_88;
        uStack_b0 = 0;
        puStack_a0 = auStack_7c;
        piStack_90 = &iStack_80;
        pppppppuStack_b8 = (undefined8 *******)0x0;
        pppppppuStack_c0 = &pppppppuStack_b8;
        pppppppuStack_98 = pppppppuVar8;
        FUN_10ab4ccac(auStack_e0,pppppppuVar8);
        if (uStack_d0 != 0) {
          uVar25 = 0;
          do {
            iVar19 = 0;
            do {
              FUN_10ab4e710(&pppppppuStack_118,auStack_e0,uVar25);
              FUN_10ab4e794(&ppppppuStack_100,&pppppppuStack_118,iVar19);
              pppppppuVar18 = pppppppuStack_b8;
              if (ppppppuStack_100 == (uint ******)0x0) {
                uVar28 = (ulong)ppppppuStack_f8 >> 0x20;
                if (-1 < (long)ppppppuStack_f8) goto LAB_10ab4e9e4;
LAB_10ab4f138:
                __ZNSt3__19to_stringEi(&pppppppuStack_148,uVar28);
                FUN_109feb280(&pppppppuStack_130,&UNK_10f692c49,&pppppppuStack_148);
                FUN_10a012db0(&pppppppuStack_118,&pppppppuStack_130,&UNK_10f692c60);
                __ZNSt3__19to_stringEi(&pppppppuStack_160,uStack_168);
                uVar25 = CONCAT71(uStack_157,uStack_158);
                pppppppuVar8 = pppppppuStack_160;
                if (-1 < (char)bStack_149) {
                  uVar25 = (ulong)bStack_149;
                  pppppppuVar8 = (uint *******)&pppppppuStack_160;
                }
                pppppppuVar18 = &pppppppuStack_118;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (pppppppuVar18,pppppppuVar8,uVar25);
                ppppppuStack_f8 = (uint ******)pppppppuVar18[1];
                ppppppuStack_100 = (uint ******)*pppppppuVar18;
                ppppppuStack_f0 = pppppppuVar18[2];
                pppppppuVar18[1] = (undefined8 ******)0x0;
                pppppppuVar18[2] = (undefined8 ******)0x0;
                *pppppppuVar18 = (undefined8 ******)0x0;
                FUN_10a0029c0(&ppppppuStack_100);
                goto LAB_10ab4f1c4;
              }
              if ((char)ppppppuStack_f8 == '\x02') {
                uVar17 = (uint)*(ushort *)ppppppuStack_100;
              }
              else {
                if ((char)ppppppuStack_f8 != '\x04') {
                  uVar28 = 0;
                  goto LAB_10ab4e9e4;
                }
                uVar17 = *(uint *)ppppppuStack_100;
              }
              uVar28 = (ulong)((int)ppppppuStack_f0 + uVar17);
              if ((int)((int)ppppppuStack_f0 + uVar17) < 0) goto LAB_10ab4f138;
LAB_10ab4e9e4:
              if ((int)uStack_168 <= (int)uVar28) goto LAB_10ab4f138;
              pppppppuVar22 = &pppppppuStack_b8;
              pppppppuVar30 = pppppppuStack_b8;
              if (pppppppuStack_b8 == (undefined8 *******)0x0) {
                uVar31 = uStack_b0 & 0xffffffff;
                pppppppuVar30 = &pppppppuStack_b8;
LAB_10ab4eaac:
                ppppppuVar11 = (undefined8 ******)0x28;
                __Znwm();
                *(ulong *)((long)ppppppuVar11 + 0x1c) = uVar28 | uVar31 << 0x20;
                *ppppppuVar11 = (undefined8 *****)0x0;
                ppppppuVar11[1] = (undefined8 *****)0x0;
                ppppppuVar11[2] = pppppppuVar22;
                *pppppppuVar30 = ppppppuVar11;
                if ((undefined8 *******)*pppppppuStack_c0 != (undefined8 *******)0x0) {
                  ppppppuVar11 = *pppppppuVar30;
                  pppppppuStack_c0 = (undefined8 *******)*pppppppuStack_c0;
                }
                func_0x000107c2b058(pppppppuStack_b8,ppppppuVar11);
                uStack_b0 = uStack_b0 + 1;
              }
              else {
                do {
                  ppppppuVar27 = (uint ******)&ppppppuStack_a8;
                  func_0x00010ab6276c(ppppppuVar27,*(undefined4 *)((long)pppppppuVar30 + 0x1c),
                                      uVar28);
                  lVar24 = 8;
                  if ((int)ppppppuVar27 == 0) {
                    lVar24 = 0;
                    pppppppuVar22 = pppppppuVar30;
                  }
                  pppppppuVar30 = *(undefined8 ********)((long)pppppppuVar30 + lVar24);
                } while (pppppppuVar30 != (undefined8 *******)0x0);
                if ((undefined8 ********)pppppppuVar22 == &pppppppuStack_b8) {
LAB_10ab4ea40:
                  uVar31 = uStack_b0 & 0xffffffff;
                  do {
                    while( true ) {
                      pppppppuVar22 = pppppppuVar18;
                      uVar20 = *(undefined4 *)((long)pppppppuVar22 + 0x1c);
                      ppppppuVar27 = (uint ******)&ppppppuStack_a8;
                      func_0x00010ab626b0(ppppppuVar27,uVar28,uVar20);
                      if ((int)ppppppuVar27 == 0) break;
                      pppppppuVar30 = pppppppuVar22;
                      pppppppuVar18 = (undefined8 *******)*pppppppuVar22;
                      if ((undefined8 *******)*pppppppuVar22 == (undefined8 *******)0x0)
                      goto LAB_10ab4eaac;
                    }
                    ppppppuVar27 = (uint ******)&ppppppuStack_a8;
                    func_0x00010ab6276c(ppppppuVar27,uVar20,uVar28);
                    if ((int)ppppppuVar27 == 0) goto LAB_10ab4eaf8;
                    pppppppuVar18 = (undefined8 *******)pppppppuVar22[1];
                  } while ((undefined8 *******)pppppppuVar22[1] != (undefined8 *******)0x0);
                  pppppppuVar30 = pppppppuVar22 + 1;
                  goto LAB_10ab4eaac;
                }
                ppppppuVar27 = (uint ******)&ppppppuStack_a8;
                func_0x00010ab626b0(ppppppuVar27,uVar28,*(undefined4 *)((long)pppppppuVar22 + 0x1c))
                ;
                if ((int)ppppppuVar27 != 0) goto LAB_10ab4ea40;
                uVar31 = (ulong)*(uint *)(pppppppuVar22 + 4);
              }
LAB_10ab4eaf8:
              FUN_10ab4e710(&pppppppuStack_118,auStack_e0,uVar25);
              FUN_10ab4e794(&ppppppuStack_100,&pppppppuStack_118,iVar19);
              FUN_10a557ab0(&ppppppuStack_100,uVar31);
              iVar19 = iVar19 + 1;
            } while (iVar19 != 3);
            uVar25 = (ulong)((int)uVar25 + 1);
          } while (uVar25 < uStack_d0);
        }
        FUN_10a0dc020(&ppppppuStack_100,uStack_b0 * (long)(int)auStack_7c[0]);
        pppppppuVar15 = pppppppuVar8 + 8;
        ppppppuVar27 = *pppppppuVar15;
        pppppppuStack_118 = (undefined8 *******)0x0;
        pppppppuStack_110 = (undefined8 *******)0x0;
        uStack_108 = 0;
        ppppppuVar29 = pppppppuVar8[9];
        pppppppuStack_130 = &pppppppuStack_118;
        uStack_128 = 0;
        lVar24 = (long)ppppppuVar29 - (long)ppppppuVar27;
        ppppppuVar32 = ppppppuVar27;
        if (lVar24 != 0) {
          FUN_10a3aa5f8(&pppppppuStack_118,(lVar24 >> 3) * -0x71c71c71c71c71c7);
          pppppppuVar18 = &pppppppuStack_118;
          FUN_10a3aa644(pppppppuVar18,ppppppuVar27,ppppppuVar29,pppppppuStack_110);
          ppppppuVar27 = pppppppuVar8[9];
          ppppppuVar32 = pppppppuVar8[8];
          pppppppuStack_110 = pppppppuVar18;
        }
        FUN_10a0dc020(&pppppppuStack_148,uStack_b0 * (long)iStack_80);
        FUN_10a3aa840(&pppppppuStack_130,
                      ((long)ppppppuVar27 - (long)ppppppuVar32 >> 3) * -0x71c71c71c71c71c7,
                      &pppppppuStack_148);
        pppppppuVar13 = pppppppuStack_148;
        if (pppppppuStack_148 != (uint *******)0x0) {
          pppppppuStack_140 = pppppppuStack_148;
          __ZdlPv();
          pppppppuVar13 = pppppppuStack_148;
        }
        pppppppuVar16 = pppppppuVar8 + 0x14;
        ppppppuVar27 = *pppppppuVar16;
        pppppppuStack_148 = (uint *******)0x0;
        pppppppuStack_140 = (uint *******)0x0;
        uStack_138 = 0;
        ppppppuVar32 = pppppppuVar8[0x15];
        pppppppuStack_160 = (uint *******)&pppppppuStack_148;
        uStack_158 = 0;
        lVar24 = (long)ppppppuVar32 - (long)ppppppuVar27;
        if (lVar24 != 0) {
          FUN_10a5591e8(&pppppppuStack_148,(lVar24 >> 3) * 0x2e8ba2e8ba2e8ba3);
          pppppppuVar12 = (uint *******)&pppppppuStack_148;
          FUN_10a559234(pppppppuVar12,ppppppuVar27,ppppppuVar32,pppppppuStack_140);
          pppppppuVar13 = pppppppuVar12;
          pppppppuStack_140 = pppppppuVar12;
          for (pppppppuVar23 = pppppppuStack_148; pppppppuVar23 != pppppppuVar12;
              pppppppuVar23 = pppppppuVar23 + 0xb) {
            pppppppuVar2 = (uint *******)pppppppuVar23[7];
            if ((uint *******)pppppppuVar23[6] != pppppppuVar2) {
              iVar19 = *(int *)(pppppppuVar23 + 1);
              pppppppuVar33 = (uint *******)(pppppppuVar23[6] + 1);
              do {
                uVar25 = uStack_b0 * (long)(iVar19 << 2);
                uVar28 = (long)pppppppuVar33[1] - (long)*pppppppuVar33;
                if (uVar25 < uVar28 || uVar25 - uVar28 == 0) {
                  if (uVar25 < uVar28) {
                    pppppppuVar33[1] = (uint ******)((long)*pppppppuVar33 + uVar25);
                  }
                }
                else {
                  pppppppuVar13 = pppppppuVar33;
                  func_0x000107c27d58(pppppppuVar33,uVar25 - uVar28);
                }
                pppppppuVar1 = pppppppuVar33 + 3;
                pppppppuVar33 = pppppppuVar33 + 4;
              } while (pppppppuVar1 != pppppppuVar2);
            }
          }
        }
        pppppppuVar18 = pppppppuStack_c0;
        if (param_3 != (uint *******)0x0) {
          pppppppuVar13 = param_3;
          func_0x0001074287b0(param_3,uStack_b0);
          pppppppuVar18 = pppppppuStack_c0;
        }
        while ((undefined8 ********)pppppppuVar18 != &pppppppuStack_b8) {
          iVar19 = *(int *)((long)pppppppuVar18 + 0x1c);
          iVar3 = *(int *)(pppppppuVar18 + 4);
          pppppppuVar13 =
               (uint *******)((long)ppppppuStack_100 + (long)(int)auStack_7c[0] * (long)iVar3);
          _memcpy(pppppppuVar13,
                  (uint ******)((long)pppppppuVar8[2] + (long)(int)auStack_7c[0] * (long)iVar19));
          ppppppuVar27 = pppppppuVar8[8];
          if (pppppppuVar8[9] != ppppppuVar27) {
            lVar24 = 0;
            uVar25 = 0;
            lVar26 = 0x38;
            do {
              uVar28 = (CONCAT71(uStack_127,uStack_128) - (long)pppppppuStack_130 >> 3) *
                       -0x5555555555555555;
              if (uVar28 < uVar25 || uVar28 - uVar25 == 0) goto LAB_10ab4f1c4;
              pppppppuVar13 =
                   (uint *******)
                   (*(long *)((long)pppppppuStack_130 + lVar24) + (long)(iStack_80 * iVar3));
              _memcpy(pppppppuVar13,
                      **(long **)((long)ppppppuVar27 + lVar26) + (long)(iStack_80 * iVar19));
              uVar25 = uVar25 + 1;
              ppppppuVar27 = pppppppuVar8[8];
              uVar28 = ((long)pppppppuVar8[9] - (long)ppppppuVar27 >> 3) * -0x71c71c71c71c71c7;
              lVar24 = lVar24 + 0x18;
              lVar26 = lVar26 + 0x48;
            } while (uVar25 <= uVar28 && uVar28 - uVar25 != 0);
          }
          ppppppuVar27 = pppppppuVar8[0x14];
          ppppppuVar32 = pppppppuVar8[0x15];
          if (ppppppuVar32 != ppppppuVar27) {
            uVar25 = 0;
            do {
              uVar28 = ((long)ppppppuVar32 - (long)ppppppuVar27 >> 3) * 0x2e8ba2e8ba2e8ba3;
              if (uVar28 < uVar25 || uVar28 - uVar25 == 0) goto LAB_10ab4f1c4;
              pppppuVar21 = ppppppuVar27[uVar25 * 0xb + 6];
              if (ppppppuVar27[uVar25 * 0xb + 7] != pppppuVar21) {
                uVar31 = 0;
                iVar5 = *(int *)(ppppppuVar27 + uVar25 * 0xb + 1) << 2;
                lVar24 = 8;
                do {
                  uVar28 = ((long)pppppppuStack_140 - (long)pppppppuStack_148 >> 3) *
                           0x2e8ba2e8ba2e8ba3;
                  if ((uVar28 < uVar25 || uVar28 - uVar25 == 0) ||
                     ((ulong)((long)pppppppuStack_148[uVar25 * 0xb + 7] -
                              (long)pppppppuStack_148[uVar25 * 0xb + 6] >> 5) <= uVar31))
                  goto LAB_10ab4f1c4;
                  pppppppuVar13 =
                       (uint *******)
                       (*(long *)((long)pppppppuStack_148[uVar25 * 0xb + 6] + lVar24) +
                       (long)iVar3 * (long)iVar5);
                  _memcpy(pppppppuVar13,
                          *(long *)((long)pppppuVar21 + lVar24) + (long)iVar19 * (long)iVar5,
                          (long)iVar5);
                  ppppppuVar27 = pppppppuVar8[0x14];
                  ppppppuVar32 = pppppppuVar8[0x15];
                  uVar28 = ((long)ppppppuVar32 - (long)ppppppuVar27 >> 3) * 0x2e8ba2e8ba2e8ba3;
                  if (uVar28 < uVar25 || uVar28 - uVar25 == 0) goto LAB_10ab4f1c4;
                  uVar31 = uVar31 + 1;
                  pppppuVar21 = ppppppuVar27[uVar25 * 0xb + 6];
                  lVar24 = lVar24 + 0x20;
                } while (uVar31 < (ulong)((long)ppppppuVar27[uVar25 * 0xb + 7] - (long)pppppuVar21
                                         >> 5));
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar28);
          }
          if (param_3 != (uint *******)0x0) {
            if ((ulong)((long)param_3[1] - (long)*param_3 >> 2) <= (ulong)(long)iVar3) {
              FUN_10a3aab70();
              goto LAB_10ab4f1c4;
            }
            *(int *)((long)*param_3 + (long)iVar3 * 4) = iVar19;
          }
          pppppppuVar22 = (undefined8 *******)pppppppuVar18[1];
          pppppppuVar30 = pppppppuVar18;
          if ((undefined8 *******)pppppppuVar18[1] == (undefined8 *******)0x0) {
            do {
              pppppppuVar18 = (undefined8 *******)pppppppuVar30[2];
              bVar7 = (undefined8 *******)*pppppppuVar18 != pppppppuVar30;
              pppppppuVar30 = pppppppuVar18;
            } while (bVar7);
          }
          else {
            do {
              pppppppuVar18 = pppppppuVar22;
              pppppppuVar22 = (undefined8 *******)*pppppppuVar18;
            } while ((undefined8 *******)*pppppppuVar18 != (undefined8 *******)0x0);
          }
        }
        if (pppppppuStack_110 != pppppppuStack_118) {
          lVar26 = 0;
          lVar24 = 0;
          uVar25 = 0;
          do {
            uVar28 = (CONCAT71(uStack_127,uStack_128) - (long)pppppppuStack_130 >> 3) *
                     -0x5555555555555555;
            if (uVar28 < uVar25 || uVar28 - uVar25 == 0) {
LAB_10ab4f1c4:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab4f1c8);
              (*pcVar6)();
            }
            pppppppuVar13 = (uint *******)((long)pppppppuStack_118 + lVar24);
            FUN_10a0d3194(pppppppuVar13,(long)pppppppuStack_130 + lVar26);
            uVar25 = uVar25 + 1;
            lVar24 = lVar24 + 0x48;
            lVar26 = lVar26 + 0x18;
          } while (uVar25 < (ulong)(((long)pppppppuStack_110 - (long)pppppppuStack_118 >> 3) *
                                   -0x71c71c71c71c71c7));
        }
        if (pppppppuVar14 != &ppppppuStack_100) {
          FUN_10a0cf2cc();
          pppppppuVar13 = pppppppuVar14;
        }
        if ((undefined8 ********)pppppppuVar15 != &pppppppuStack_118) {
          FUN_10a3aa41c();
          pppppppuVar13 = pppppppuVar15;
        }
        if ((uint ********)pppppppuVar16 != &pppppppuStack_148) {
          FUN_10a55900c();
          pppppppuVar13 = pppppppuVar16;
        }
        if (*(int *)(pppppppuVar8 + 0x1d) == 2) {
          pppppppuVar13 = pppppppuVar8;
          FUN_10ab4f304();
        }
        uVar17 = *(uint *)(pppppppuVar8 + 0x1e);
        if (uVar17 == 0) {
          uVar25 = 0;
        }
        else {
          uVar25 = 0;
          if ((ulong)uVar17 != 0) {
            uVar25 = (ulong)((long)pppppppuVar8[3] - (long)pppppppuVar8[2]) / (ulong)uVar17;
          }
        }
        __ZNSt3__16chrono12steady_clock3nowEv();
        FUN_10ab4e2a8();
        if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
          func_0x00010ae06f08(1,8,&UNK_10f692aff,&UNK_10f692c69,0x68a,&UNK_10f692cb1,in_x6,in_x7,
                              uStack_168,uVar25,
                              (double)((float)(((long)pppppppuVar13 - (long)pppppppuVar9) / 1000) /
                                      1000.0),pppppppuVar10,pppppppuVar8,
                              (long)pppppppuVar10 - (long)pppppppuVar8);
        }
        pppppppuStack_160 = (uint *******)&pppppppuStack_148;
        FUN_10ab550c4(&pppppppuStack_160);
        pppppppuStack_148 = (uint *******)&pppppppuStack_130;
        func_0x00010a131c58(&pppppppuStack_148);
        pppppppuStack_130 = &pppppppuStack_118;
        func_0x00010ab551a4(&pppppppuStack_130);
        if (ppppppuStack_100 != (uint ******)0x0) {
          ppppppuStack_f8 = ppppppuStack_100;
          __ZdlPv();
        }
        FUN_10ab62678(pppppppuStack_b8);
      }
      return;
    }
    uVar20 = *(undefined4 *)((long)param_2 + 0x14);
    iVar19 = (int)param_2[2] * 3 + iVar19;
    goto LAB_10ab4e87c;
  }
  if (iVar19 == 2) {
    uVar17 = *(uint *)(param_2 + 2);
    uVar20 = *(undefined4 *)((long)param_2 + 0x14);
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    if ((uVar17 & 1) != 0) {
      uVar17 = uVar17 + 1;
      goto LAB_10ab4e890;
    }
  }
  else {
    if (iVar19 != 1) {
      if (iVar19 == 0) {
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 0;
        *(long *)((long)param_1 + 0xc) = param_2[2];
        return;
      }
      goto LAB_10ab4e8a8;
    }
    uVar17 = *(uint *)(param_2 + 2);
    uVar20 = *(undefined4 *)((long)param_2 + 0x14);
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    if ((uVar17 & 1) == 0) {
      uVar17 = uVar17 | 1;
      goto LAB_10ab4e890;
    }
  }
  uVar17 = uVar17 + 2;
LAB_10ab4e890:
  *(uint *)((long)param_1 + 0xc) = uVar17;
  *(undefined4 *)(param_1 + 2) = uVar20;
  return;
}



/* Entry: 10ab4e8b4; end: 10ab4f303;  */

void FUN_10ab4e8b4(uint *****param_1,uint *****param_2)

{
  uint *****pppppuVar1;
  int iVar2;
  uint *****pppppuVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint *****pppppuVar8;
  uint *****pppppuVar9;
  undefined8 ****ppppuVar10;
  uint *****pppppuVar11;
  uint *****pppppuVar12;
  uint *****pppppuVar13;
  uint *****pppppuVar14;
  uint *****pppppuVar15;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar16;
  undefined8 *****pppppuVar17;
  uint ***pppuVar18;
  undefined8 *****pppppuVar19;
  uint *****pppppuVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  uint ****ppppuVar25;
  ulong uVar26;
  uint ****ppppuVar27;
  undefined8 *****pppppuVar28;
  ulong uVar29;
  uint ****ppppuVar30;
  uint *****pppppuVar31;
  ulong uStack_158;
  uint ****ppppuStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  byte bStack_139;
  uint ****ppppuStack_138;
  uint ****ppppuStack_130;
  undefined8 uStack_128;
  undefined8 ****ppppuStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined8 ****ppppuStack_108;
  undefined8 ****ppppuStack_100;
  undefined8 uStack_f8;
  uint ***pppuStack_f0;
  uint ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  undefined1 auStack_d0 [16];
  ulong uStack_c0;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  ulong uStack_a0;
  uint ***pppuStack_98;
  uint *puStack_90;
  uint ****ppppuStack_88;
  int *piStack_80;
  uint ***pppuStack_78;
  int iStack_70;
  uint auStack_6c [3];
  
  if (*(int *)(param_1 + 0x1d) != 0) {
    pppppuVar8 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    auStack_6c[0] = *(uint *)(param_1 + 0x1e);
    if (auStack_6c[0] == 0) {
      uStack_158 = 0;
    }
    else {
      uStack_158 = 0;
      if ((ulong)auStack_6c[0] != 0) {
        uStack_158 = (ulong)((long)param_1[3] - (long)param_1[2]) / (ulong)auStack_6c[0];
      }
    }
    pppppuVar9 = param_1;
    FUN_10ab4e2a8();
    iStack_70 = 0x18;
    pppppuVar13 = param_1 + 2;
    pppuStack_78 = (uint ***)*pppppuVar13;
    pppuStack_98 = (uint ***)&pppuStack_78;
    uStack_a0 = 0;
    puStack_90 = auStack_6c;
    piStack_80 = &iStack_70;
    ppppuStack_a8 = (undefined8 *****)0x0;
    ppppuStack_b0 = &ppppuStack_a8;
    ppppuStack_88 = (uint ****)param_1;
    FUN_10ab4ccac(auStack_d0,param_1);
    if (uStack_c0 != 0) {
      uVar22 = 0;
      do {
        iVar24 = 0;
        do {
          FUN_10ab4e710(&ppppuStack_108,auStack_d0,uVar22);
          FUN_10ab4e794(&pppuStack_f0,&ppppuStack_108,iVar24);
          pppppuVar17 = (undefined8 *****)ppppuStack_a8;
          if ((uint ****)pppuStack_f0 == (uint ****)0x0) {
            uVar26 = (ulong)pppuStack_e8 >> 0x20;
            if (-1 < (long)pppuStack_e8) goto LAB_10ab4e9e4;
LAB_10ab4f138:
            __ZNSt3__19to_stringEi(&ppppuStack_138,uVar26);
            FUN_109feb280(&ppppuStack_120,&UNK_10f692c49,&ppppuStack_138);
            FUN_10a012db0(&ppppuStack_108,&ppppuStack_120,&UNK_10f692c60);
            __ZNSt3__19to_stringEi(&ppppuStack_150,uStack_158);
            uVar22 = CONCAT71(uStack_147,uStack_148);
            pppppuVar8 = (uint *****)ppppuStack_150;
            if (-1 < (char)bStack_139) {
              uVar22 = (ulong)bStack_139;
              pppppuVar8 = &ppppuStack_150;
            }
            pppppuVar17 = &ppppuStack_108;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppuVar17,pppppuVar8,uVar22);
            pppuStack_e8 = (uint ***)pppppuVar17[1];
            pppuStack_f0 = (uint ***)*pppppuVar17;
            pppuStack_e0 = pppppuVar17[2];
            pppppuVar17[1] = (undefined8 ****)0x0;
            pppppuVar17[2] = (undefined8 ****)0x0;
            *pppppuVar17 = (undefined8 ****)0x0;
            FUN_10a0029c0(&pppuStack_f0);
            goto LAB_10ab4f1c4;
          }
          if ((char)pppuStack_e8 == '\x02') {
            uVar16 = (uint)*(ushort *)pppuStack_f0;
          }
          else {
            if ((char)pppuStack_e8 != '\x04') {
              uVar26 = 0;
              goto LAB_10ab4e9e4;
            }
            uVar16 = *(uint *)pppuStack_f0;
          }
          uVar26 = (ulong)((int)pppuStack_e0 + uVar16);
          if ((int)((int)pppuStack_e0 + uVar16) < 0) goto LAB_10ab4f138;
LAB_10ab4e9e4:
          if ((int)uStack_158 <= (int)uVar26) goto LAB_10ab4f138;
          pppppuVar19 = &ppppuStack_a8;
          pppppuVar28 = (undefined8 *****)ppppuStack_a8;
          if ((undefined8 *****)ppppuStack_a8 == (undefined8 *****)0x0) {
            uVar29 = uStack_a0 & 0xffffffff;
            pppppuVar28 = &ppppuStack_a8;
LAB_10ab4eaac:
            ppppuVar10 = (undefined8 ****)0x28;
            __Znwm();
            *(ulong *)((long)ppppuVar10 + 0x1c) = uVar26 | uVar29 << 0x20;
            *ppppuVar10 = (undefined8 ***)0x0;
            ppppuVar10[1] = (undefined8 ***)0x0;
            ppppuVar10[2] = pppppuVar19;
            *pppppuVar28 = ppppuVar10;
            if ((undefined8 *****)*ppppuStack_b0 != (undefined8 *****)0x0) {
              ppppuVar10 = *pppppuVar28;
              ppppuStack_b0 = (undefined8 ****)*ppppuStack_b0;
            }
            func_0x000107c2b058(ppppuStack_a8,ppppuVar10);
            uStack_a0 = uStack_a0 + 1;
          }
          else {
            do {
              ppppuVar25 = &pppuStack_98;
              func_0x00010ab6276c(ppppuVar25,*(undefined4 *)((long)pppppuVar28 + 0x1c),uVar26);
              lVar21 = 8;
              if ((int)ppppuVar25 == 0) {
                lVar21 = 0;
                pppppuVar19 = pppppuVar28;
              }
              pppppuVar28 = *(undefined8 ******)((long)pppppuVar28 + lVar21);
            } while (pppppuVar28 != (undefined8 *****)0x0);
            if (pppppuVar19 == &ppppuStack_a8) {
LAB_10ab4ea40:
              uVar29 = uStack_a0 & 0xffffffff;
              do {
                while( true ) {
                  pppppuVar19 = pppppuVar17;
                  uVar4 = *(undefined4 *)((long)pppppuVar19 + 0x1c);
                  ppppuVar25 = &pppuStack_98;
                  func_0x00010ab626b0(ppppuVar25,uVar26,uVar4);
                  if ((int)ppppuVar25 == 0) break;
                  pppppuVar28 = pppppuVar19;
                  pppppuVar17 = (undefined8 *****)*pppppuVar19;
                  if ((undefined8 *****)*pppppuVar19 == (undefined8 *****)0x0) goto LAB_10ab4eaac;
                }
                ppppuVar25 = &pppuStack_98;
                func_0x00010ab6276c(ppppuVar25,uVar4,uVar26);
                if ((int)ppppuVar25 == 0) goto LAB_10ab4eaf8;
                pppppuVar17 = (undefined8 *****)pppppuVar19[1];
              } while ((undefined8 *****)pppppuVar19[1] != (undefined8 *****)0x0);
              pppppuVar28 = pppppuVar19 + 1;
              goto LAB_10ab4eaac;
            }
            ppppuVar25 = &pppuStack_98;
            func_0x00010ab626b0(ppppuVar25,uVar26,*(undefined4 *)((long)pppppuVar19 + 0x1c));
            if ((int)ppppuVar25 != 0) goto LAB_10ab4ea40;
            uVar29 = (ulong)*(uint *)(pppppuVar19 + 4);
          }
LAB_10ab4eaf8:
          FUN_10ab4e710(&ppppuStack_108,auStack_d0,uVar22);
          FUN_10ab4e794(&pppuStack_f0,&ppppuStack_108,iVar24);
          FUN_10a557ab0(&pppuStack_f0,uVar29);
          iVar24 = iVar24 + 1;
        } while (iVar24 != 3);
        uVar22 = (ulong)((int)uVar22 + 1);
      } while (uVar22 < uStack_c0);
    }
    FUN_10a0dc020(&pppuStack_f0,uStack_a0 * (long)(int)auStack_6c[0]);
    pppppuVar14 = param_1 + 8;
    ppppuVar25 = *pppppuVar14;
    ppppuStack_108 = (undefined8 *****)0x0;
    ppppuStack_100 = (undefined8 *****)0x0;
    uStack_f8 = 0;
    ppppuVar27 = param_1[9];
    ppppuStack_120 = &ppppuStack_108;
    uStack_118 = 0;
    lVar21 = (long)ppppuVar27 - (long)ppppuVar25;
    ppppuVar30 = ppppuVar25;
    if (lVar21 != 0) {
      FUN_10a3aa5f8(&ppppuStack_108,(lVar21 >> 3) * -0x71c71c71c71c71c7);
      pppppuVar17 = &ppppuStack_108;
      FUN_10a3aa644(pppppuVar17,ppppuVar25,ppppuVar27,ppppuStack_100);
      ppppuVar25 = param_1[9];
      ppppuVar30 = param_1[8];
      ppppuStack_100 = pppppuVar17;
    }
    FUN_10a0dc020(&ppppuStack_138,uStack_a0 * (long)iStack_70);
    FUN_10a3aa840(&ppppuStack_120,((long)ppppuVar25 - (long)ppppuVar30 >> 3) * -0x71c71c71c71c71c7,
                  &ppppuStack_138);
    pppppuVar12 = (uint *****)ppppuStack_138;
    if ((uint *****)ppppuStack_138 != (uint *****)0x0) {
      ppppuStack_130 = ppppuStack_138;
      __ZdlPv();
      pppppuVar12 = (uint *****)ppppuStack_138;
    }
    pppppuVar15 = param_1 + 0x14;
    ppppuVar25 = *pppppuVar15;
    ppppuStack_138 = (uint ****)0x0;
    ppppuStack_130 = (uint ****)0x0;
    uStack_128 = 0;
    ppppuVar30 = param_1[0x15];
    ppppuStack_150 = (uint ****)&ppppuStack_138;
    uStack_148 = 0;
    lVar21 = (long)ppppuVar30 - (long)ppppuVar25;
    if (lVar21 != 0) {
      FUN_10a5591e8(&ppppuStack_138,(lVar21 >> 3) * 0x2e8ba2e8ba2e8ba3);
      pppppuVar11 = &ppppuStack_138;
      FUN_10a559234(pppppuVar11,ppppuVar25,ppppuVar30,ppppuStack_130);
      pppppuVar12 = pppppuVar11;
      ppppuStack_130 = (uint ****)pppppuVar11;
      for (pppppuVar20 = (uint *****)ppppuStack_138; pppppuVar20 != pppppuVar11;
          pppppuVar20 = pppppuVar20 + 0xb) {
        pppppuVar3 = (uint *****)pppppuVar20[7];
        if ((uint *****)pppppuVar20[6] != pppppuVar3) {
          iVar24 = *(int *)(pppppuVar20 + 1);
          pppppuVar31 = (uint *****)(pppppuVar20[6] + 1);
          do {
            uVar22 = uStack_a0 * (long)(iVar24 << 2);
            uVar26 = (long)pppppuVar31[1] - (long)*pppppuVar31;
            if (uVar22 < uVar26 || uVar22 - uVar26 == 0) {
              if (uVar22 < uVar26) {
                pppppuVar31[1] = (uint ****)((long)*pppppuVar31 + uVar22);
              }
            }
            else {
              pppppuVar12 = pppppuVar31;
              func_0x000107c27d58(pppppuVar31,uVar22 - uVar26);
            }
            pppppuVar1 = pppppuVar31 + 3;
            pppppuVar31 = pppppuVar31 + 4;
          } while (pppppuVar1 != pppppuVar3);
        }
      }
    }
    pppppuVar17 = (undefined8 *****)ppppuStack_b0;
    if (param_2 != (uint *****)0x0) {
      pppppuVar12 = param_2;
      func_0x0001074287b0(param_2,uStack_a0);
      pppppuVar17 = (undefined8 *****)ppppuStack_b0;
    }
    while (pppppuVar17 != &ppppuStack_a8) {
      iVar24 = *(int *)((long)pppppuVar17 + 0x1c);
      iVar2 = *(int *)(pppppuVar17 + 4);
      pppppuVar12 = (uint *****)((long)pppuStack_f0 + (long)(int)auStack_6c[0] * (long)iVar2);
      _memcpy(pppppuVar12,(uint ****)((long)param_1[2] + (long)(int)auStack_6c[0] * (long)iVar24));
      ppppuVar25 = param_1[8];
      if (param_1[9] != ppppuVar25) {
        lVar21 = 0;
        uVar22 = 0;
        lVar23 = 0x38;
        do {
          uVar26 = (CONCAT71(uStack_117,uStack_118) - (long)ppppuStack_120 >> 3) *
                   -0x5555555555555555;
          if (uVar26 < uVar22 || uVar26 - uVar22 == 0) goto LAB_10ab4f1c4;
          pppppuVar12 = (uint *****)
                        (*(long *)((long)ppppuStack_120 + lVar21) + (long)(iStack_70 * iVar2));
          _memcpy(pppppuVar12,**(long **)((long)ppppuVar25 + lVar23) + (long)(iStack_70 * iVar24));
          uVar22 = uVar22 + 1;
          ppppuVar25 = param_1[8];
          uVar26 = ((long)param_1[9] - (long)ppppuVar25 >> 3) * -0x71c71c71c71c71c7;
          lVar21 = lVar21 + 0x18;
          lVar23 = lVar23 + 0x48;
        } while (uVar22 <= uVar26 && uVar26 - uVar22 != 0);
      }
      ppppuVar25 = param_1[0x14];
      ppppuVar30 = param_1[0x15];
      if (ppppuVar30 != ppppuVar25) {
        uVar22 = 0;
        do {
          uVar26 = ((long)ppppuVar30 - (long)ppppuVar25 >> 3) * 0x2e8ba2e8ba2e8ba3;
          if (uVar26 < uVar22 || uVar26 - uVar22 == 0) goto LAB_10ab4f1c4;
          pppuVar18 = ppppuVar25[uVar22 * 0xb + 6];
          if (ppppuVar25[uVar22 * 0xb + 7] != pppuVar18) {
            uVar29 = 0;
            iVar5 = *(int *)(ppppuVar25 + uVar22 * 0xb + 1) << 2;
            lVar21 = 8;
            do {
              uVar26 = ((long)ppppuStack_130 - (long)ppppuStack_138 >> 3) * 0x2e8ba2e8ba2e8ba3;
              if ((uVar26 < uVar22 || uVar26 - uVar22 == 0) ||
                 ((ulong)((long)ppppuStack_138[uVar22 * 0xb + 7] -
                          (long)ppppuStack_138[uVar22 * 0xb + 6] >> 5) <= uVar29))
              goto LAB_10ab4f1c4;
              pppppuVar12 = (uint *****)
                            (*(long *)((long)ppppuStack_138[uVar22 * 0xb + 6] + lVar21) +
                            (long)iVar2 * (long)iVar5);
              _memcpy(pppppuVar12,*(long *)((long)pppuVar18 + lVar21) + (long)iVar24 * (long)iVar5,
                      (long)iVar5);
              ppppuVar25 = param_1[0x14];
              ppppuVar30 = param_1[0x15];
              uVar26 = ((long)ppppuVar30 - (long)ppppuVar25 >> 3) * 0x2e8ba2e8ba2e8ba3;
              if (uVar26 < uVar22 || uVar26 - uVar22 == 0) goto LAB_10ab4f1c4;
              uVar29 = uVar29 + 1;
              pppuVar18 = ppppuVar25[uVar22 * 0xb + 6];
              lVar21 = lVar21 + 0x20;
            } while (uVar29 < (ulong)((long)ppppuVar25[uVar22 * 0xb + 7] - (long)pppuVar18 >> 5));
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar26);
      }
      if (param_2 != (uint *****)0x0) {
        if ((ulong)((long)param_2[1] - (long)*param_2 >> 2) <= (ulong)(long)iVar2) {
          FUN_10a3aab70();
          goto LAB_10ab4f1c4;
        }
        *(int *)((long)*param_2 + (long)iVar2 * 4) = iVar24;
      }
      pppppuVar19 = (undefined8 *****)pppppuVar17[1];
      pppppuVar28 = pppppuVar17;
      if ((undefined8 *****)pppppuVar17[1] == (undefined8 *****)0x0) {
        do {
          pppppuVar17 = (undefined8 *****)pppppuVar28[2];
          bVar7 = (undefined8 *****)*pppppuVar17 != pppppuVar28;
          pppppuVar28 = pppppuVar17;
        } while (bVar7);
      }
      else {
        do {
          pppppuVar17 = pppppuVar19;
          pppppuVar19 = (undefined8 *****)*pppppuVar17;
        } while ((undefined8 *****)*pppppuVar17 != (undefined8 *****)0x0);
      }
    }
    if (ppppuStack_100 != ppppuStack_108) {
      lVar23 = 0;
      lVar21 = 0;
      uVar22 = 0;
      do {
        uVar26 = (CONCAT71(uStack_117,uStack_118) - (long)ppppuStack_120 >> 3) * -0x5555555555555555
        ;
        if (uVar26 < uVar22 || uVar26 - uVar22 == 0) {
LAB_10ab4f1c4:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab4f1c8);
          (*pcVar6)();
        }
        pppppuVar12 = (uint *****)((long)ppppuStack_108 + lVar21);
        FUN_10a0d3194(pppppuVar12,(long)ppppuStack_120 + lVar23);
        uVar22 = uVar22 + 1;
        lVar21 = lVar21 + 0x48;
        lVar23 = lVar23 + 0x18;
      } while (uVar22 < (ulong)(((long)ppppuStack_100 - (long)ppppuStack_108 >> 3) *
                               -0x71c71c71c71c71c7));
    }
    if (pppppuVar13 != (uint *****)&pppuStack_f0) {
      FUN_10a0cf2cc();
      pppppuVar12 = pppppuVar13;
    }
    if (pppppuVar14 != (uint *****)&ppppuStack_108) {
      FUN_10a3aa41c();
      pppppuVar12 = pppppuVar14;
    }
    if (pppppuVar15 != &ppppuStack_138) {
      FUN_10a55900c();
      pppppuVar12 = pppppuVar15;
    }
    if (*(int *)(param_1 + 0x1d) == 2) {
      pppppuVar12 = param_1;
      FUN_10ab4f304();
    }
    uVar16 = *(uint *)(param_1 + 0x1e);
    if (uVar16 == 0) {
      uVar22 = 0;
    }
    else {
      uVar22 = 0;
      if ((ulong)uVar16 != 0) {
        uVar22 = (ulong)((long)param_1[3] - (long)param_1[2]) / (ulong)uVar16;
      }
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_10ab4e2a8();
    if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
      func_0x00010ae06f08(1,8,&UNK_10f692aff,&UNK_10f692c69,0x68a,&UNK_10f692cb1,in_x6,in_x7,
                          uStack_158,uVar22,
                          (double)((float)(((long)pppppuVar12 - (long)pppppuVar8) / 1000) / 1000.0),
                          pppppuVar9,param_1,(long)pppppuVar9 - (long)param_1);
    }
    ppppuStack_150 = (uint ****)&ppppuStack_138;
    FUN_10ab550c4(&ppppuStack_150);
    ppppuStack_138 = (uint ****)&ppppuStack_120;
    func_0x00010a131c58(&ppppuStack_138);
    ppppuStack_120 = &ppppuStack_108;
    func_0x00010ab551a4(&ppppuStack_120);
    if ((uint ****)pppuStack_f0 != (uint ****)0x0) {
      pppuStack_e8 = pppuStack_f0;
      __ZdlPv();
    }
    FUN_10ab62678(ppppuStack_a8);
  }
  return;
}



/* Entry: 10ab4f304; end: 10ab5039b;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10ab4f304(int *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  code *pcVar8;
  bool bVar9;
  long *******ppppppplVar10;
  uint *******pppppppuVar11;
  long lVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar13;
  ulong uVar14;
  uint ******ppppppuVar15;
  uint *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  long *plVar22;
  short *psVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  int *piVar26;
  long *******ppppppplVar27;
  long *plVar29;
  int iVar30;
  ulong uVar31;
  uint *******pppppppuVar32;
  uint *puVar33;
  uint *******pppppppuVar34;
  int iVar35;
  float fVar36;
  int *piVar37;
  int *piVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar43;
  undefined8 uVar42;
  float fVar44;
  float fVar45;
  int *piVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  int *piStack_220;
  long lStack_210;
  long lStack_1d8;
  long lStack_1d0;
  uint *******pppppppuStack_1c0;
  undefined8 uStack_1b8;
  uint *******pppppppuStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  int iStack_164;
  int *piStack_160;
  undefined8 uStack_158;
  int *piStack_150;
  undefined8 uStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  uint *******pppppppuStack_110;
  uint *******pppppppuStack_108;
  uint *******pppppppuStack_100;
  uint *******pppppppuStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long *******ppppppplVar28;
  
  if (param_1[0x3a] != 2) {
    return 1;
  }
  uVar13 = param_1[0x3c];
  if (uVar13 == 0) {
LAB_10ab5022c:
    FUN_10a00946c(&UNK_10f692d5b);
  }
  else {
    uVar14 = 0;
    if ((ulong)uVar13 != 0) {
      uVar14 = (ulong)(*(long *)(param_1 + 6) - *(long *)(param_1 + 4)) / (ulong)uVar13;
    }
    iVar30 = (int)uVar14;
    if (iVar30 == 0) goto LAB_10ab5022c;
    piVar26 = param_1;
    FUN_10ab4a5b4();
    if ((int)piVar26 != 0) {
      if (*(long *)(param_1 + 0x36) != *(long *)(param_1 + 0x34)) {
        uVar13 = param_1[0x3c];
        if (uVar13 == 0) {
LAB_10ab4f3b8:
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          if ((ulong)uVar13 != 0) {
            uVar18 = (uint)((ulong)(*(long *)(param_1 + 6) - *(long *)(param_1 + 4)) / (ulong)uVar13
                           );
          }
          if ((param_1[0x3a] == 1) && (0xffff < uVar18)) {
            FUN_10a00946c(&UNK_10f692d0d);
            goto LAB_10ab4f3b8;
          }
        }
        FUN_10ab6e728();
        lVar12 = *(long *)(param_1 + 0x3e);
        lVar21 = lVar12;
        for (; (lVar12 != *(long *)(param_1 + 0x40) &&
               (lVar21 = lVar12, *(long *)(lVar12 + 0x18) != lRam00000001138356d8));
            lVar12 = lVar12 + 0x38) {
          lVar21 = *(long *)(param_1 + 0x40);
        }
        FUN_10ab4c544(&ppppppplStack_180,param_1,lVar21);
        FUN_10ab6e9d8();
        lVar12 = *(long *)(param_1 + 0x3e);
        lVar21 = *(long *)(param_1 + 0x40);
        if (lVar12 == lVar21) {
LAB_10ab4f430:
          if ((lVar12 == lVar21) || (lVar12 == 0)) goto LAB_10ab4f44c;
          FUN_10ab4c544(&plStack_198,param_1);
        }
        else {
          do {
            if (*(long *)(lVar12 + 0x18) == lRam0000000113835758) goto LAB_10ab4f430;
            lVar12 = lVar12 + 0x38;
          } while (lVar12 != lVar21);
LAB_10ab4f44c:
          plStack_198 = (long *)0x0;
        }
        FUN_10ab6eb18();
        lVar12 = *(long *)(param_1 + 0x3e);
        lVar21 = *(long *)(param_1 + 0x40);
        if (lVar12 == lVar21) {
LAB_10ab4f488:
          pppppppuVar11 = (uint *******)0x0;
          if ((lVar12 != lVar21) && (lVar12 != 0)) {
            FUN_10ab4c544(&pppppppuStack_1c0,param_1);
            pppppppuVar11 = pppppppuStack_1c0;
          }
        }
        else {
          do {
            if (*(long *)(lVar12 + 0x18) == lRam0000000113835798) goto LAB_10ab4f488;
            lVar12 = lVar12 + 0x38;
          } while (lVar12 != lVar21);
          pppppppuVar11 = (uint *******)0x0;
        }
        ppppppplVar10 = ppppppplStack_180;
        plVar29 = plStack_198;
        lVar12 = *(long *)(param_1 + 0x34);
        if (*(long *)(param_1 + 0x36) - lVar12 != 0) {
          uVar31 = 0;
          uVar19 = (*(long *)(param_1 + 0x36) - lVar12 >> 3) * 0x4ec4ec4ec4ec4ec5;
          bVar9 = plStack_198 == (long *)0x0;
          piVar37 = (int *)NEON_fmov(0x3f800000,4);
          do {
            plVar22 = (long *)(lVar12 + uVar31 * 0x68);
            uStack_118 = (uint *******)plVar22[1];
            uStack_120 = (uint *******)*plVar22;
            pppppppuStack_108 = (uint *******)plVar22[3];
            pppppppuStack_110 = (uint *******)plVar22[2];
            pppppppuStack_f8 = (uint *******)plVar22[5];
            pppppppuStack_100 = (uint *******)plVar22[4];
            lStack_e8 = plVar22[7];
            uStack_f0 = plVar22[6];
            lStack_d8 = plVar22[9];
            lVar21 = plVar22[8];
            lStack_c8 = plVar22[0xb];
            piVar46 = (int *)plVar22[10];
            uStack_c0 = plVar22[0xc];
            uVar31 = uVar31 + 1;
            uVar13 = uVar18;
            uStack_e0 = lVar21;
            uStack_d0 = piVar46;
            if (uVar19 != uVar31) {
              if (uVar19 <= uVar31) goto LAB_10ab50248;
              uVar13 = *(uint *)(lVar12 + uVar31 * 0x68 + 8);
            }
            if (bVar9 && pppppppuVar11 == (uint *******)0x0) {
              lStack_210 = 0;
              fVar4 = 1.0;
              fVar7 = 0.0;
              fVar52 = 0.0;
              fVar53 = 0.0;
              fVar54 = 0.0;
              fVar55 = 0.0;
              fVar56 = 0.0;
              fVar49 = 1.0;
              uVar25 = 0;
              fVar50 = 0.0;
              fVar51 = 0.0;
              piVar38 = piVar37;
              piStack_220 = piVar37;
            }
            else {
              FUN_10a1716ec(&piStack_160,&pppppppuStack_f8);
              lVar21 = CONCAT44((int)((ulong)piStack_160 >> 0x20),(int)piStack_150);
              piVar46 = (int *)CONCAT44((int)((ulong)piStack_150 >> 0x20),(int)piStack_160);
              piVar38 = piStack_150;
              uVar25 = uStack_130;
              fVar55 = (float)uStack_158;
              fVar54 = uStack_158._4_4_;
              fVar53 = (float)uStack_148;
              fVar52 = uStack_148._4_4_;
              fVar56 = fStack_128;
              fVar49 = fStack_124;
              piStack_220 = piVar46;
              lStack_210 = lVar21;
              fVar50 = fStack_140;
              fVar51 = fStack_13c;
              fVar4 = fStack_138;
              fVar7 = fStack_134;
            }
            uVar6 = (uint)uStack_118;
            pppppppuVar32 = uStack_120;
            if (uVar13 < (uint)uStack_118) goto LAB_10ab50248;
            for (; uStack_120 = pppppppuVar32, uVar6 != uVar13; uVar6 = uVar6 + 1) {
              fVar45 = SUB84(piVar46,0);
              fVar39 = (float)lVar21;
              fVar36 = SUB84(piVar38,0);
              if (ppppppplVar10 != (long *******)0x0) {
                (*(code *)(*ppppppplVar10)[2])(ppppppplVar10,uVar6);
                fVar47 = fVar36 * uStack_f0._4_4_ + fVar39 * uStack_e0._4_4_ +
                         fVar45 * uStack_d0._4_4_ + uStack_c0._4_4_;
                fVar40 = (float)lStack_d8 * fVar45 + (float)lStack_c8;
                fVar43 = (float)((ulong)lStack_d8 >> 0x20) * fVar45 +
                         (float)((ulong)lStack_c8 >> 0x20);
                lVar21 = CONCAT44(fVar43,fVar40);
                piVar46 = (int *)CONCAT44(fVar47,fVar47);
                piVar38 = (int *)CONCAT44(((float)((ulong)pppppppuStack_f8 >> 0x20) * fVar36 +
                                           (float)((ulong)lStack_e8 >> 0x20) * fVar39 + fVar43) /
                                          fVar47,(SUB84(pppppppuStack_f8,0) * fVar36 +
                                                  (float)lStack_e8 * fVar39 + fVar40) / fVar47);
                uStack_158 = (long *******)
                             CONCAT44(uStack_158._4_4_,
                                      (fVar36 * (float)uStack_f0 + fVar39 * (float)uStack_e0 +
                                      fVar45 * (float)uStack_d0 + (float)uStack_c0) / fVar47);
                piStack_160 = piVar38;
                (*(code *)(*ppppppplVar10)[3])(ppppppplVar10,uVar6,&piStack_160);
              }
              fVar43 = SUB84(piVar46,0);
              fVar45 = (float)lVar21;
              fVar36 = SUB84(piVar38,0);
              fVar40 = (float)((ulong)uVar25 >> 0x20);
              fVar39 = (float)((ulong)lStack_210 >> 0x20);
              fVar47 = (float)((ulong)piStack_220 >> 0x20);
              if (plVar29 != (long *)0x0) {
                (**(code **)(*plVar29 + 0x10))(plVar29,uVar6);
                fVar48 = fVar54 * fVar36 + fVar52 * fVar45 + fVar49 + fVar7 * fVar43;
                uVar42 = NEON_rev64(CONCAT44(fVar36,fVar45),4);
                fVar41 = (float)uVar25 + fVar50 * fVar43;
                fVar44 = fVar40 + fVar51 * fVar43;
                lVar21 = CONCAT44(fVar44,fVar41);
                piVar46 = (int *)CONCAT44(fVar48,fVar48);
                piVar38 = (int *)CONCAT44((fVar39 * fVar36 + fVar47 * (float)((ulong)uVar42 >> 0x20)
                                          + fVar44) / fVar48,
                                          ((float)lStack_210 * fVar45 +
                                           SUB84(piStack_220,0) * (float)uVar42 + fVar41) / fVar48);
                uStack_158 = (long *******)
                             CONCAT44(uStack_158._4_4_,
                                      (fVar55 * fVar36 + fVar53 * fVar45 + fVar56 + fVar4 * fVar43)
                                      / fVar48);
                piStack_160 = piVar38;
                (**(code **)(*plVar29 + 0x18))(plVar29,uVar6,&piStack_160);
              }
              fVar43 = SUB84(piVar46,0);
              fVar45 = (float)lVar21;
              fVar36 = SUB84(piVar38,0);
              if (pppppppuVar11 != (uint *******)0x0) {
                (*(code *)(*pppppppuVar11)[2])(pppppppuVar11,uVar6);
                fVar44 = fVar54 * fVar36 + fVar52 * fVar45 + fVar49 + fVar7 * fVar43;
                uVar42 = NEON_rev64(CONCAT44(fVar36,fVar45),4);
                fVar41 = (float)uVar25 + fVar50 * fVar43;
                fVar40 = fVar40 + fVar51 * fVar43;
                lVar21 = CONCAT44(fVar40,fVar41);
                piVar46 = (int *)CONCAT44(fVar44,fVar44);
                piVar38 = (int *)CONCAT44((fVar39 * fVar36 + fVar47 * (float)((ulong)uVar42 >> 0x20)
                                          + fVar40) / fVar44,
                                          ((float)lStack_210 * fVar45 +
                                           SUB84(piStack_220,0) * (float)uVar42 + fVar41) / fVar44);
                uStack_158 = (long *******)
                             CONCAT44(uStack_158._4_4_,
                                      (fVar55 * fVar36 + fVar53 * fVar45 + fVar56 + fVar4 * fVar43)
                                      / fVar44);
                piStack_160 = piVar38;
                (*(code *)(*pppppppuVar11)[3])(pppppppuVar11,uVar6,&piStack_160);
              }
              pppppppuVar32 = uStack_120;
            }
            uStack_120._4_4_ = (uint)((ulong)pppppppuVar32 >> 0x20);
            if (param_1[0x3a] == 1) {
              uVar19 = (ulong)uStack_120._4_4_;
              if (uStack_120._4_4_ != 0) {
                psVar23 = (short *)(*(long *)(param_1 + 10) + ((ulong)pppppppuVar32 & 0xffffffff));
                do {
                  *psVar23 = *psVar23 + (short)uStack_118;
                  uVar19 = uVar19 - 1;
                  psVar23 = psVar23 + 1;
                } while (uVar19 != 0);
              }
            }
            else if ((param_1[0x3a] == 2) && (uStack_120._4_4_ != 0)) {
              uVar19 = 0;
              lVar12 = *(long *)(param_1 + 10) + ((ulong)pppppppuVar32 & 0xffffffff);
              do {
                *(uint *)(lVar12 + uVar19 * 4) = *(int *)(lVar12 + uVar19 * 4) + (uint)uStack_118;
                uVar19 = uVar19 + 1;
              } while (uVar19 < uStack_120._4_4_);
            }
            lVar12 = *(long *)(param_1 + 0x34);
            uVar19 = (*(long *)(param_1 + 0x36) - lVar12 >> 3) * 0x4ec4ec4ec4ec4ec5;
          } while (uVar31 <= uVar19 && uVar19 - uVar31 != 0);
        }
        *(long *)(param_1 + 0x36) = lVar12;
        if (pppppppuVar11 != (uint *******)0x0) {
          (*(code *)(*pppppppuVar11)[1])(pppppppuVar11);
        }
        if (plStack_198 != (long *)0x0) {
          (**(code **)(*plStack_198 + 8))();
        }
        piVar26 = (int *)((ulong)piVar26 & 0xffffffff);
        if (ppppppplStack_180 != (long *******)0x0) {
          (*(code *)(*ppppppplStack_180)[1])();
        }
      }
      uVar13 = 0;
      plVar29 = (long *)(param_1 + 10);
      puVar33 = (uint *)*plVar29;
      uVar19 = (ulong)piVar26 & 0xffffffff;
      puVar16 = puVar33;
      uVar31 = uVar19;
      do {
        if (uVar13 <= *puVar16) {
          uVar13 = *puVar16;
        }
        uVar31 = uVar31 - 1;
        puVar16 = puVar16 + 1;
      } while (uVar31 != 0);
      if (uVar13 < 0xffff) {
        FUN_10a0dc020(&uStack_120,uVar19 << 1);
        uVar14 = 0;
        do {
          *(ushort *)((long)uStack_120 + uVar14 * 2) = (ushort)puVar33[uVar14];
          uVar14 = uVar14 + 1;
        } while (uVar19 != uVar14);
        if (plVar29 == &uStack_120) {
          param_1[0x3a] = 1;
        }
        else {
          FUN_10a0cf2cc(plVar29,uStack_120,uStack_118,(long)uStack_118 - (long)uStack_120);
          param_1[0x3a] = 1;
          if (uStack_120 == (uint *******)0x0) {
            return 1;
          }
        }
        uStack_118 = uStack_120;
        __ZdlPv(uStack_120);
      }
      else {
        lVar12 = 0;
        iStack_164 = iVar30 + (int)((uVar14 & 0xffffffff) / 0xffff) * -0xffff;
        uStack_120 = (uint *******)&ppppppplStack_180;
        fVar4 = (float)param_1[0x3c];
        ppppppplStack_180 = (long *******)0x0;
        ppppppplStack_178 = (long *******)0x0;
        ppppppplStack_170 = (long *******)0x0;
        uStack_118 = (uint *******)((ulong)uStack_118 & 0xffffffffffffff00);
        if (0xfffe < iVar30 + 0xfffeU) {
          uVar31 = (ulong)(iVar30 + 0xfffeU) / 0xffff;
          ppppppplVar10 = (long *******)&ppppppplStack_180;
          uVar14 = uVar31;
          FUN_10a7bbfbc();
          ppppppplStack_170 = ppppppplVar10 + uVar14 * 3;
          lVar12 = uVar31 * 0x18 + -0x18;
          ppppppplStack_180 = ppppppplVar10;
          _bzero();
          ppppppplStack_178 =
               (long *******)
               ((long)ppppppplVar10 +
               (lVar12 - (ulong)((int)lVar12 + (uint)((ulong)(lVar12 * 0xaaaaaaab) >> 0x24) * -0x18)
               ) + 0x18);
          lVar12 = ((long)ppppppplStack_178 - (long)ppppppplStack_180 >> 3) * -0x5555555555555555;
        }
        uStack_120 = (uint *******)((ulong)uStack_120 & 0xffffffff00000000);
        FUN_10a7bf804(&plStack_198,lVar12,&uStack_120);
        if ((long)ppppppplStack_178 - (long)ppppppplStack_180 != 0) {
          iVar30 = 0;
          uVar19 = ((long)ppppppplStack_178 - (long)ppppppplStack_180 >> 3) * -0x5555555555555555;
          uVar14 = 0;
          uVar31 = 1;
          do {
            if ((ulong)((long)plStack_190 - (long)plStack_198 >> 2) <= uVar14) goto LAB_10ab50248;
            *(int *)((long)plStack_198 + uVar14 * 4) = iVar30;
            bVar9 = uVar31 <= uVar19;
            lVar12 = uVar19 - uVar31;
            iVar30 = iVar30 + 0xffff;
            uVar14 = uVar31;
            uVar31 = (ulong)((int)uVar31 + 1);
          } while (bVar9 && lVar12 != 0);
        }
        uStack_158 = (long *******)&ppppppplStack_180;
        piStack_150 = &iStack_164;
        uStack_148 = &plStack_198;
        fStack_13c = 9.18341e-41;
        ppppppuVar15 = *(uint *******)(param_1 + 0x22);
        piStack_160 = param_1;
        fStack_140 = fVar4;
        if (ppppppuVar15 == *(uint *******)(param_1 + 0x24)) {
          FUN_10ab4ccac(&uStack_120,param_1);
          pppppppuVar11 = pppppppuStack_110;
          if (pppppppuStack_110 != (uint *******)0x0) {
            pppppppuVar32 = (uint *******)0x0;
            do {
              lVar12 = 0;
              uStack_1a0 = 0;
              uStack_1a8 = 0;
              do {
                FUN_10ab4e710(&lStack_1d8,&uStack_120,pppppppuVar32);
                FUN_10ab4e794(&pppppppuStack_1c0,&lStack_1d8,lVar12);
                if (pppppppuStack_1c0 == (uint *******)0x0) {
                  iVar30 = uStack_1b8._4_4_;
                }
                else {
                  if ((char)uStack_1b8 == '\x02') {
                    uVar13 = (uint)*(ushort *)pppppppuStack_1c0;
                  }
                  else {
                    if ((char)uStack_1b8 != '\x04') {
                      iVar30 = 0;
                      goto LAB_10ab4ff78;
                    }
                    uVar13 = *(uint *)pppppppuStack_1c0;
                  }
                  iVar30 = (int)pppppppuStack_1b0 + uVar13;
                }
LAB_10ab4ff78:
                *(int *)((long)&uStack_1a8 + lVar12 * 4) = iVar30;
                lVar12 = lVar12 + 1;
              } while (lVar12 != 3);
              FUN_10ab5039c(&piStack_160,&uStack_1a8);
              pppppppuVar32 = (uint *******)(ulong)((int)pppppppuVar32 + 1);
            } while (pppppppuVar32 < pppppppuVar11);
          }
        }
        else {
          pppppppuStack_1c0 = (uint *******)0x0;
          uStack_1b8 = (uint *******)0x0;
          pppppppuStack_1b0 = (uint *******)0x0;
          uVar14 = ((long)*(uint *******)(param_1 + 0x24) - (long)ppppppuVar15 >> 4) *
                   -0x5555555555555555;
          if (0x555555555555555 < uVar14) goto LAB_10ab50244;
          pppppppuStack_100 = (uint *******)&pppppppuStack_1c0;
          pppppppuVar11 = (uint *******)&pppppppuStack_1c0;
          FUN_10a0d38c0();
          pppppppuVar32 =
               (uint *******)((long)pppppppuVar11 + ((long)pppppppuStack_1c0 - (long)uStack_1b8));
          uStack_120 = pppppppuVar11;
          uStack_118 = pppppppuVar11;
          pppppppuStack_110 = pppppppuVar11;
          pppppppuStack_108 = pppppppuVar11 + uVar14 * 6;
          func_0x00010a0d3904(&pppppppuStack_1c0,pppppppuStack_1c0,uStack_1b8,pppppppuVar32);
          pppppppuStack_110 = pppppppuStack_1c0;
          pppppppuStack_108 = pppppppuStack_1b0;
          uStack_120 = pppppppuStack_1c0;
          uStack_118 = pppppppuStack_1c0;
          pppppppuStack_1c0 = pppppppuVar32;
          uStack_1b8 = pppppppuVar11;
          pppppppuStack_1b0 = pppppppuVar11 + uVar14 * 6;
          func_0x00010a0d39d8(&uStack_120);
          uStack_120 = (uint *******)((ulong)uStack_120 & 0xffffffff00000000);
          FUN_10a7bf804(&lStack_1d8,
                        ((long)ppppppplStack_178 - (long)ppppppplStack_180 >> 3) *
                        -0x5555555555555555,&uStack_120);
          plVar22 = *(long **)(param_1 + 0x22);
          plVar2 = *(long **)(param_1 + 0x24);
          if (plVar22 != plVar2) {
            do {
              ppppppplVar10 = ppppppplStack_178;
              puVar16 = (uint *)plVar22[3];
              puVar20 = (uint *)plVar22[4];
              if (puVar16 == puVar20) {
                if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                  func_0x00010ae06f08(1,2,&UNK_10f692aff,&UNK_10f692dc0,0x735,&UNK_10f692dff);
                }
              }
              else {
                lStack_1d0 = lStack_1d8;
                ppppppplVar27 = ppppppplStack_180;
                if (ppppppplStack_180 != ppppppplStack_178) {
                  do {
                    ppppppplVar28 = ppppppplVar27 + 3;
                    uStack_120 = (uint *******)
                                 CONCAT44(uStack_120._4_4_,
                                          (int)((ulong)((long)ppppppplVar27[1] -
                                                       (long)*ppppppplVar27) >> 1));
                    FUN_10a1b210c(&lStack_1d8,&uStack_120);
                    ppppppplVar27 = ppppppplVar28;
                  } while (ppppppplVar28 != ppppppplVar10);
                  puVar16 = (uint *)plVar22[3];
                  puVar20 = (uint *)plVar22[4];
                }
                if (puVar20 == puVar16) goto LAB_10ab50248;
                uVar13 = *puVar16;
                uVar18 = puVar16[1];
                uVar6 = uVar18 % 3;
                if ((uVar6 != 0) && ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
                  func_0x00010ae06f08(1,2,&UNK_10f692aff,&UNK_10f692dc0,0x746,&UNK_10f692e40,in_x6,
                                      in_x7,uVar18,uVar6);
                }
                iVar30 = uVar18 + uVar13;
                for (; uVar13 < iVar30 - uVar6; uVar13 = uVar13 + 3) {
                  lVar12 = 0;
                  uStack_118 = (uint *******)((ulong)uStack_118 & 0xffffffff00000000);
                  uStack_120 = (uint *******)0x0;
                  uVar18 = uVar13;
                  do {
                    *(uint *)((long)&uStack_120 + lVar12) = puVar33[uVar18];
                    lVar12 = lVar12 + 4;
                    uVar18 = uVar18 + 1;
                  } while (lVar12 != 0xc);
                  FUN_10ab5039c(&piStack_160,&uStack_120);
                }
                uVar31 = ((long)ppppppplStack_178 - (long)ppppppplStack_180 >> 3) *
                         -0x5555555555555555;
                uVar14 = lStack_1d0 - lStack_1d8 >> 2;
                if (uVar14 <= uVar31 && uVar31 - uVar14 != 0) {
                  uStack_120 = (uint *******)((ulong)uStack_120 & 0xffffffff00000000);
                  func_0x000108a395f8(&lStack_1d8,uVar31,&uStack_120);
                }
                pppppppuStack_108 = (uint *******)0x0;
                pppppppuStack_110 = (uint *******)0x0;
                pppppppuStack_f8 = (uint *******)0x0;
                pppppppuStack_100 = (uint *******)0x0;
                uStack_118 = (uint *******)0x0;
                uStack_120 = (uint *******)0x0;
                if (&uStack_120 != plVar22) {
                  FUN_10a131e2c(&uStack_120,*plVar22,plVar22[1],plVar22[1] - *plVar22 >> 2);
                }
                ppppppplVar10 = ppppppplStack_178;
                if (ppppppplStack_180 != ppppppplStack_178) {
                  uVar14 = 0;
                  ppppppplVar27 = ppppppplStack_180;
                  do {
                    if ((ulong)(lStack_1d0 - lStack_1d8 >> 2) <= uVar14) goto LAB_10ab50248;
                    iVar30 = *(int *)(lStack_1d8 + uVar14 * 4);
                    iVar5 = (int)((ulong)((long)ppppppplVar27[1] - (long)*ppppppplVar27) >> 1) -
                            iVar30;
                    iVar35 = (int)uVar14;
                    if (pppppppuStack_100 < pppppppuStack_f8) {
                      *(int *)pppppppuStack_100 = iVar30;
                      *(int *)((long)pppppppuStack_100 + 4) = iVar5;
                      pppppppuVar11 = (uint *******)((long)pppppppuStack_100 + 0xc);
                      *(int *)(pppppppuStack_100 + 1) = iVar35;
                    }
                    else {
                      lVar12 = (long)pppppppuStack_100 - (long)pppppppuStack_108;
                      uVar14 = (lVar12 >> 2) * -0x5555555555555555 + 1;
                      if (0x1555555555555555 < uVar14) {
                        FUN_10a0d3be4();
                        goto LAB_10ab50248;
                      }
                      lVar21 = (long)pppppppuStack_f8 - (long)pppppppuStack_108 >> 2;
                      uVar31 = lVar21 * 0x5555555555555556;
                      if (uVar31 < uVar14 || uVar31 - uVar14 == 0) {
                        uVar31 = uVar14;
                      }
                      if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar21 * -0x5555555555555555)) {
                        uVar31 = 0x1555555555555555;
                      }
                      pppppppuVar32 = (uint *******)&pppppppuStack_108;
                      FUN_10a0d3bf8();
                      piVar26 = (int *)((long)pppppppuVar32 + lVar12);
                      pppppppuVar32 = (uint *******)((long)pppppppuVar32 + uVar31 * 0xc);
                      *piVar26 = iVar30;
                      piVar26[1] = iVar5;
                      piVar26[2] = iVar35;
                      pppppppuVar11 = (uint *******)(piVar26 + 3);
                      pppppppuVar34 =
                           (uint *******)
                           ((long)piVar26 - ((long)pppppppuStack_100 - (long)pppppppuStack_108));
                      _memcpy(pppppppuVar34);
                      bVar9 = pppppppuStack_108 != (uint *******)0x0;
                      pppppppuStack_108 = pppppppuVar34;
                      pppppppuStack_f8 = pppppppuVar32;
                      if (bVar9) {
                        pppppppuStack_100 = pppppppuVar11;
                        __ZdlPv();
                      }
                    }
                    uVar14 = (ulong)(iVar35 + 1);
                    ppppppplVar27 = ppppppplVar27 + 3;
                    pppppppuStack_100 = pppppppuVar11;
                  } while (ppppppplVar27 != ppppppplVar10);
                }
                FUN_10a39dee4(&pppppppuStack_1c0,&uStack_120);
                if (pppppppuStack_108 != (uint *******)0x0) {
                  pppppppuStack_100 = pppppppuStack_108;
                  __ZdlPv();
                }
                if (uStack_120 != (uint *******)0x0) {
                  uStack_118 = uStack_120;
                  __ZdlPv();
                }
              }
              plVar22 = plVar22 + 6;
            } while (plVar22 != plVar2);
          }
          if ((uint ********)(param_1 + 0x22) != &pppppppuStack_1c0) {
            FUN_10a4af00c();
          }
          if (lStack_1d8 != 0) {
            lStack_1d0 = lStack_1d8;
            __ZdlPv();
          }
          uStack_120 = (uint *******)&pppppppuStack_1c0;
          func_0x00010ab55134(&uStack_120);
        }
        if (ppppppplStack_180 == ppppppplStack_178) {
          lVar12 = 0;
        }
        else {
          uVar14 = 0;
          ppppppplVar10 = ppppppplStack_180;
          do {
            ppppppplVar27 = ppppppplVar10 + 3;
            uVar14 = (ulong)(uint)((int)uVar14 +
                                  (int)((ulong)((long)ppppppplVar10[1] - (long)*ppppppplVar10) >> 1)
                                  );
            ppppppplVar10 = ppppppplVar27;
          } while (ppppppplVar27 != ppppppplStack_178);
          lVar12 = uVar14 << 1;
        }
        FUN_10a0dc020(&pppppppuStack_1c0,lVar12);
        ppppppplVar10 = ppppppplStack_178;
        pppppppuVar11 = pppppppuStack_1c0;
        if (ppppppplStack_180 == ppppppplStack_178) {
          lVar12 = *(long *)(param_1 + 0x22);
          lVar21 = *(long *)(param_1 + 0x24);
        }
        else {
          iVar30 = 0;
          uVar14 = 0;
          ppppppplVar27 = ppppppplStack_180;
          do {
            pppppppuStack_110 = (uint *******)0x0;
            pppppppuStack_108 = (uint *******)0x0;
            pppppppuStack_100 = (uint *******)0x0;
            uStack_118 = (uint *******)((ulong)uStack_118 & 0xffffff0000000000);
            uStack_f0 = 0;
            pppppppuStack_f8 = (uint *******)0x3f800000;
            uStack_e0 = 0;
            lStack_e8 = 0x3f80000000000000;
            uStack_d0 = (int *)0x3f800000;
            lStack_d8 = 0;
            uStack_c0 = 0x3f80000000000000;
            lStack_c8 = 0;
            uStack_120 = (uint *******)
                         CONCAT44((int)((ulong)((long)ppppppplVar27[1] - (long)*ppppppplVar27) >> 1)
                                  ,iVar30 << 1);
            if ((ulong)((long)plStack_190 - (long)plStack_198 >> 2) <= uVar14) goto LAB_10ab50248;
            uVar31 = (ulong)uStack_118 >> 0x20;
            uStack_118 = (uint *******)
                         CONCAT44((int)uVar31,*(undefined4 *)((long)plStack_198 + uVar14 * 4));
            FUN_10a701cb0(param_1 + 0x34,&uStack_120);
            _memcpy((long)pppppppuVar11 + ((ulong)uStack_120 & 0xffffffff),*ppppppplVar27,
                    (long)ppppppplVar27[1] - (long)*ppppppplVar27);
            lVar21 = *(long *)(param_1 + 0x24);
            lVar12 = *(long *)(param_1 + 0x22);
            for (lVar1 = lVar12; lVar1 != lVar21; lVar1 = lVar1 + 0x30) {
              uVar31 = (*(long *)(lVar1 + 0x20) - *(long *)(lVar1 + 0x18) >> 2) *
                       -0x5555555555555555;
              if (uVar31 < uVar14 || uVar31 - uVar14 == 0) goto LAB_10ab50248;
              piVar26 = (int *)(*(long *)(lVar1 + 0x18) + uVar14 * 0xc);
              *piVar26 = *piVar26 + iVar30;
              piVar26[2] = (int)uVar14;
            }
            iVar30 = uStack_120._4_4_ + iVar30;
            uVar14 = (ulong)((int)uVar14 + 1);
            ppppppplVar27 = ppppppplVar27 + 3;
          } while (ppppppplVar27 != ppppppplVar10);
        }
        for (; lVar12 != lVar21; lVar12 = lVar12 + 0x30) {
          puVar17 = *(undefined8 **)(lVar12 + 0x18);
          puVar3 = *(undefined8 **)(lVar12 + 0x20);
          if (puVar17 == puVar3) {
            uVar14 = 0;
          }
          else {
            uVar31 = 0;
            do {
              uVar14 = uVar31;
              if (*(int *)((long)puVar17 + 4) != 0) {
                uVar14 = (*(long *)(lVar12 + 0x20) - *(long *)(lVar12 + 0x18) >> 2) *
                         -0x5555555555555555;
                if (uVar14 < uVar31 || uVar14 - uVar31 == 0) goto LAB_10ab50248;
                uVar14 = (ulong)((int)uVar31 + 1);
                uVar25 = *puVar17;
                puVar24 = (undefined8 *)(*(long *)(lVar12 + 0x18) + uVar31 * 0xc);
                *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar17 + 1);
                *puVar24 = uVar25;
              }
              puVar17 = (undefined8 *)((long)puVar17 + 0xc);
              uVar31 = uVar14;
            } while (puVar17 != puVar3);
          }
          FUN_10ab4a45c((long *)(lVar12 + 0x18),uVar14);
        }
        if (*plVar29 != 0) {
          *(long *)(param_1 + 0xc) = *plVar29;
          __ZdlPv();
          *plVar29 = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
        }
        *(uint ********)(param_1 + 0xc) = uStack_1b8;
        *(uint ********)(param_1 + 10) = pppppppuStack_1c0;
        *(uint ********)(param_1 + 0xe) = pppppppuStack_1b0;
        param_1[0x3a] = 1;
        if (plStack_198 != (long *)0x0) {
          plStack_190 = plStack_198;
          __ZdlPv();
        }
        uStack_120 = (uint *******)&ppppppplStack_180;
        FUN_10a7bc100(&uStack_120);
      }
      return 1;
    }
  }
  FUN_10a00946c(&UNK_10f692d8e);
LAB_10ab50244:
  FUN_10a0d38ac();
LAB_10ab50248:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10ab5024c);
  (*pcVar8)();
}



/* Entry: 10ab5039c; end: 10ab5064f;  */

ulong FUN_10ab5039c(long *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uStack_88;
  int iStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  lVar9 = 0;
  lVar18 = *param_1;
  iStack_80 = 0;
  uStack_88 = 0;
  uVar4 = *(uint *)((long)param_1 + 0x24);
  do {
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar5 = *(uint *)((long)param_2 + lVar9) / uVar4;
    }
    *(uint *)((long)&uStack_88 + lVar9) = uVar5;
    uVar12 = uStack_88;
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0xc);
  uVar16 = uStack_88 & 0xffffffff;
  if (((int)uStack_88 == uStack_88._4_4_) && ((int)uStack_88 == iStack_80)) {
    lVar9 = *(long *)param_1[1];
    uVar10 = (((long *)param_1[1])[1] - lVar9 >> 3) * -0x5555555555555555;
    if (uVar10 < uVar16 || uVar10 - uVar16 == 0) {
LAB_10ab50648:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab5064c);
      (*pcVar6)();
    }
    lVar18 = 0;
    uVar16 = lVar9 + uVar16 * 0x18;
    do {
      lStack_78 = CONCAT62(lStack_78._2_6_,
                           (short)*(undefined4 *)((long)param_2 + lVar18) -
                           (short)*(undefined4 *)((long)param_1 + 0x24) * (short)uVar12);
      uVar10 = uVar16;
      FUN_10a14f5d0(uVar16,&lStack_78);
      lVar18 = lVar18 + 4;
    } while (lVar18 != 0xc);
  }
  else {
    if (uVar4 < *(int *)param_1[2] + 3U) {
      plVar17 = (long *)param_1[1];
      puVar3 = (undefined8 *)plVar17[1];
      if (puVar3 < (undefined8 *)plVar17[2]) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar19 = puVar3 + 3;
        puVar3[2] = 0;
      }
      else {
        lVar9 = (long)puVar3 - *plVar17;
        uVar12 = (lVar9 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar12) {
          FUN_10a7bbfa8();
          uVar23 = NEON_rev64(*(undefined8 *)(param_2 + 1),4);
          fVar20 = (float)*(undefined8 *)(param_2 + 4);
          fVar22 = (float)uVar23 - fVar20;
          fVar21 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
          fVar24 = (float)((ulong)uVar23 >> 0x20) - fVar21;
          fVar25 = -fVar24 * fVar22 + (*param_2 - fVar20) * (param_2[3] - fVar21);
          if (ABS(fVar25) < 1.1920929e-07) {
            return 0;
          }
          iVar14 = 0;
          uVar23 = NEON_rev64(CONCAT44(param_2[3] - fVar21,*param_2 - fVar20),4);
          pfVar1 = param_3 + 1;
          fVar20 = (float)*param_1 - fVar20;
          fVar21 = (float)((ulong)*param_1 >> 0x20) - fVar21;
          uVar26 = NEON_rev64(CONCAT44(-fVar21,-fVar20),4);
          fVar20 = (fVar22 * (float)uVar26 + (float)uVar23 * fVar20) / fVar25;
          fVar25 = (fVar24 * (float)((ulong)uVar26 >> 0x20) +
                   (float)((ulong)uVar23 >> 0x20) * fVar21) / fVar25;
          *(ulong *)param_3 = CONCAT44(fVar25,fVar20);
          pfVar13 = param_3 + 2;
          *pfVar13 = (1.0 - fVar20) - fVar25;
          do {
            pfVar15 = param_3;
            if (iVar14 == 1) {
              pfVar15 = pfVar1;
            }
            pfVar2 = pfVar13;
            if (iVar14 != 2) {
              pfVar2 = pfVar15;
            }
            if (*pfVar2 < 0.0) {
              pfVar15 = pfVar13;
              if ((iVar14 != 2) && (pfVar15 = param_3, iVar14 == 1)) {
                pfVar15 = pfVar1;
              }
              *pfVar15 = *pfVar15 + 1.1920929e-07;
            }
            pfVar15 = param_3;
            if (iVar14 == 1) {
              pfVar15 = pfVar1;
            }
            pfVar2 = pfVar13;
            if (iVar14 != 2) {
              pfVar2 = pfVar15;
            }
            if (1.0 < *pfVar2) {
              pfVar15 = pfVar13;
              if ((iVar14 != 2) && (pfVar15 = param_3, iVar14 == 1)) {
                pfVar15 = pfVar1;
              }
              *pfVar15 = *pfVar15 + -1.1920929e-07;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 != 3);
          uVar12 = 0;
          if ((0.0 <= *param_3) && (*param_3 <= 1.0)) {
            uVar12 = 0;
            if ((0.0 <= *pfVar1) && (*pfVar1 <= 1.0)) {
              if (*pfVar13 < 0.0) {
                return 0;
              }
              uVar12 = (ulong)(*pfVar13 <= 1.0);
            }
          }
          return uVar12;
        }
        lVar11 = plVar17[2] - *plVar17 >> 3;
        uVar16 = lVar11 * 0x5555555555555556;
        if (uVar16 < uVar12 || uVar16 - uVar12 == 0) {
          uVar16 = uVar12;
        }
        if (0x555555555555554 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar16 = 0xaaaaaaaaaaaaaaa;
        }
        plVar7 = plVar17;
        plStack_58 = plVar17;
        FUN_10a7bbfbc();
        puVar3 = (undefined8 *)((long)plVar7 + lVar9);
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        puVar19 = puVar3 + 3;
        lVar9 = (long)puVar3 - (plVar17[1] - *plVar17);
        _memcpy(lVar9);
        lStack_78 = *plVar17;
        *plVar17 = lVar9;
        plVar17[1] = (long)puVar19;
        lStack_60 = plVar17[2];
        plVar17[2] = (long)(plVar7 + uVar16 * 3);
        lStack_70 = lStack_78;
        lStack_68 = lStack_78;
        FUN_109de72c8(&lStack_78);
      }
      plVar17[1] = (long)puVar19;
      uVar4 = *(uint *)(lVar18 + 0xf0);
      uVar8 = 0;
      if (uVar4 != 0) {
        uVar8 = 0;
        if ((ulong)uVar4 != 0) {
          uVar8 = (undefined4)
                  ((ulong)(*(long *)(lVar18 + 0x18) - *(long *)(lVar18 + 0x10)) / (ulong)uVar4);
        }
      }
      lStack_78 = CONCAT44(lStack_78._4_4_,uVar8);
      FUN_10a1b210c(param_1[3],&lStack_78);
      *(undefined4 *)param_1[2] = 0;
    }
    lVar9 = ((long *)param_1[1])[1];
    if (*(long *)param_1[1] == lVar9) goto LAB_10ab50648;
    uVar16 = lVar9 - 0x18;
    plVar17 = (long *)(lVar18 + 0x10);
    lVar9 = *plVar17;
    uVar10 = *(long *)(lVar18 + 0x18) - lVar9;
    uVar12 = (ulong)(uint)((int)param_1[4] * 3 + (int)uVar10);
    if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
      if (uVar12 < uVar10) {
        *(ulong *)(lVar18 + 0x18) = lVar9 + uVar12;
      }
    }
    else {
      func_0x000107c27d58(plVar17,uVar12 - uVar10);
      lVar9 = *plVar17;
    }
    lVar18 = 0;
    lVar9 = lVar9 + (uVar10 & 0xffffffff);
    do {
      _memcpy(lVar9,*plVar17 + (ulong)(uint)(*(int *)((long)param_2 + lVar18) * (int)param_1[4]));
      lVar9 = lVar9 + (ulong)*(uint *)(param_1 + 4);
      lStack_78 = CONCAT62(lStack_78._2_6_,(short)*(undefined4 *)param_1[2]);
      uVar10 = uVar16;
      FUN_10a14f5d0(uVar16,&lStack_78);
      *(int *)param_1[2] = *(int *)param_1[2] + 1;
      lVar18 = lVar18 + 4;
    } while (lVar18 != 0xc);
  }
  return uVar10;
}



/* Entry: 10ab50650; end: 10ab507cf;  */

bool FUN_10ab50650(undefined8 *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  
  uVar10 = NEON_rev64(*(undefined8 *)(param_2 + 1),4);
  fVar7 = (float)*(undefined8 *)(param_2 + 4);
  fVar9 = (float)uVar10 - fVar7;
  fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar11 = (float)((ulong)uVar10 >> 0x20) - fVar8;
  fVar12 = -fVar11 * fVar9 + (*param_2 - fVar7) * (param_2[3] - fVar8);
  if (ABS(fVar12) < 1.1920929e-07) {
    return false;
  }
  iVar5 = 0;
  uVar10 = NEON_rev64(CONCAT44(param_2[3] - fVar8,*param_2 - fVar7),4);
  pfVar1 = param_3 + 1;
  fVar7 = (float)*param_1 - fVar7;
  fVar8 = (float)((ulong)*param_1 >> 0x20) - fVar8;
  uVar13 = NEON_rev64(CONCAT44(-fVar8,-fVar7),4);
  fVar7 = (fVar9 * (float)uVar13 + (float)uVar10 * fVar7) / fVar12;
  fVar12 = (fVar11 * (float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar10 >> 0x20) * fVar8) /
           fVar12;
  *(ulong *)param_3 = CONCAT44(fVar12,fVar7);
  pfVar4 = param_3 + 2;
  *pfVar4 = (1.0 - fVar7) - fVar12;
  do {
    pfVar6 = param_3;
    if (iVar5 == 1) {
      pfVar6 = pfVar1;
    }
    pfVar2 = pfVar4;
    if (iVar5 != 2) {
      pfVar2 = pfVar6;
    }
    if (*pfVar2 < 0.0) {
      pfVar6 = pfVar4;
      if ((iVar5 != 2) && (pfVar6 = param_3, iVar5 == 1)) {
        pfVar6 = pfVar1;
      }
      *pfVar6 = *pfVar6 + 1.1920929e-07;
    }
    pfVar6 = param_3;
    if (iVar5 == 1) {
      pfVar6 = pfVar1;
    }
    pfVar2 = pfVar4;
    if (iVar5 != 2) {
      pfVar2 = pfVar6;
    }
    if (1.0 < *pfVar2) {
      pfVar6 = pfVar4;
      if ((iVar5 != 2) && (pfVar6 = param_3, iVar5 == 1)) {
        pfVar6 = pfVar1;
      }
      *pfVar6 = *pfVar6 + -1.1920929e-07;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  bVar3 = false;
  if ((0.0 <= *param_3) && (*param_3 <= 1.0)) {
    bVar3 = false;
    if ((0.0 <= *pfVar1) && (*pfVar1 <= 1.0)) {
      if (*pfVar4 < 0.0) {
        return false;
      }
      bVar3 = *pfVar4 <= 1.0;
    }
  }
  return bVar3;
}



/* Entry: 10ab507d0; end: 10ab50ddf;  */

void FUN_10ab507d0(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char cVar9;
  
  puVar2 = (undefined8 *)0x0;
  iVar1 = *(int *)(param_3 + 0x24);
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      if (*(int *)(param_3 + 0x28) == 1) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab50954;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab50954:
        uVar8 = 0;
        uVar7 = 0;
      }
      cVar9 = *(char *)(param_3 + 0x2c);
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar3 = &UNK_110c4b4c0;
      puVar5 = &UNK_110c4b438;
    }
    else if (iVar1 == 2) {
      if (*(int *)(param_3 + 0x28) == 1) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab509f0;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab509f0:
        uVar8 = 0;
        uVar7 = 0;
      }
      cVar9 = *(char *)(param_3 + 0x2c);
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar3 = &UNK_110c4b5b0;
      puVar5 = &UNK_110c4b538;
    }
    else {
      if (iVar1 != 3) goto LAB_10ab50a30;
      if ((*(uint *)(param_3 + 0x28) & 0x7fffffff) == 1) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab509bc;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab509bc:
        uVar8 = 0;
        uVar7 = 0;
      }
      cVar9 = *(char *)(param_3 + 0x2c);
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar3 = &UNK_110c4b6a0;
      puVar5 = &UNK_110c4b628;
    }
LAB_10ab50a1c:
    puVar2[4] = 0;
    if (cVar9 == '\0') {
      puVar5 = puVar3;
    }
    ppuVar4 = (undefined **)(puVar5 + 0x10);
  }
  else {
    if (iVar1 == 4) {
      if ((*(uint *)(param_3 + 0x28) & 0x7fffffff) == 1) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab50988;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab50988:
        uVar8 = 0;
        uVar7 = 0;
      }
      cVar9 = *(char *)(param_3 + 0x2c);
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar3 = &UNK_110c4b790;
      puVar5 = &UNK_110c4b718;
      goto LAB_10ab50a1c;
    }
    if (iVar1 == 5) {
      if ((*(byte *)(param_3 + 0x2c) & 1) != 0) {
LAB_10ab50948:
        puVar2 = (undefined8 *)0x0;
        goto LAB_10ab50a30;
      }
      if ((*(uint *)(param_3 + 0x28) & 0x3fffffff) == 1) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab50ab0;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab50ab0:
        uVar8 = 0;
        uVar7 = 0;
      }
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar2[4] = 0;
      ppuVar4 = &PTR_DAT_110c4b818;
    }
    else {
      if (iVar1 != 6) goto LAB_10ab50a30;
      if ((*(byte *)(param_3 + 0x2c) & 1) != 0) goto LAB_10ab50948;
      if ((*(uint *)(param_3 + 0x28) & 0x7fffffff) == 1) {
        lVar6 = *(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_3 + 0x30);
        uVar7 = (ulong)*(uint *)(param_2 + 0xf0);
        if (*(uint *)(param_2 + 0xf0) == 0) goto LAB_10ab50a84;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = (ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) / uVar7;
        }
        uVar8 = uVar8 & 0xffffffff;
      }
      else {
        lVar6 = 0;
LAB_10ab50a84:
        uVar8 = 0;
        uVar7 = 0;
      }
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar2[4] = 0;
      ppuVar4 = &PTR_DAT_110c4b890;
    }
  }
  *puVar2 = ppuVar4;
  puVar2[1] = lVar6;
LAB_10ab50a30:
  *param_1 = puVar2;
  return;
}



/* Entry: 10ab50de0; end: 10ab50ecb;  */

ulong FUN_10ab50de0(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  puVar1 = &uStack_31;
  FUN_10a054838(puVar1,&DAT_10f6933a2,0xe);
  puVar2 = &uStack_32;
  FUN_10a054838(puVar2,"hash",4);
  puVar3 = &uStack_33;
  FUN_10a054838(puVar3,"version",7);
  puVar4 = &uStack_34;
  FUN_10a054838(puVar4,&DAT_10f6933b1,0xc);
  puVar5 = &uStack_35;
  FUN_10a054838(puVar5,&DAT_10f56745e,6);
  puVar1 = puVar1 + 0x9e3779b9;
  uVar6 = (ulong)(puVar2 + (long)puVar1 * 0x40 + ((ulong)puVar1 >> 2) + 0x9e3779b9) ^ (ulong)puVar1;
  uVar6 = (ulong)(puVar3 + (uVar6 >> 2) + uVar6 * 0x40 + 0x9e3779b9) ^ uVar6;
  uVar6 = (ulong)(puVar4 + (uVar6 >> 2) + uVar6 * 0x40 + 0x9e3779b9) ^ uVar6;
  return (ulong)(puVar5 + (uVar6 >> 2) + uVar6 * 0x40 + 0x9e3779b9) ^ uVar6;
}



/* Entry: 10ab50ecc; end: 10ab50f97;  */

void FUN_10ab50ecc(long param_1,long *param_2)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x20)) {
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c4a530);
    FUN_10ab50de0();
    (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_hash_110c4aaf0,plVar1);
    (**(code **)(*param_2 + 0x50))(param_2,&PTR_s_version_110c4a550,*(undefined4 *)(param_1 + 0xc));
    (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c4a570,*(undefined1 *)(param_1 + 0x10));
    (**(code **)(*param_2 + 0x28))
              (param_2,&PTR_DAT_110c4a590,*(long *)(param_1 + 0x18),
               *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010ab50f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x20))(param_2);
    return;
  }
  return;
}



/* Entry: 10ab50f98; end: 10ab519ab;  */

void FUN_10ab50f98(ulong param_1,int param_2,int *param_3,long param_4,int param_5,ushort *param_6,
                  long param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  short sVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  char *pcVar11;
  int *piVar12;
  short *psVar13;
  byte bVar14;
  ushort uVar15;
  uint uVar16;
  ulong uVar17;
  
  cVar5 = (char)param_2;
  sVar6 = (short)param_2;
  if (param_5 == 1) {
    if (param_7 < 2) {
      if (param_7 == 0) {
        if (param_4 == 4) {
          if (param_1 != 0) {
            uVar10 = 0;
            uVar16 = 1;
            piVar12 = param_3 + 2;
            do {
              uVar9 = (uint)uVar10;
              piVar12[-2] = uVar9 + param_2 + (uVar9 & 1);
              piVar12[-1] = uVar9 + param_2 + uVar16;
              *piVar12 = param_2 + 2 + uVar9;
              uVar10 = uVar10 + 1;
              uVar16 = uVar16 ^ 1;
              piVar12 = piVar12 + 3;
            } while (param_1 != uVar10);
          }
        }
        else if (param_4 == 2) {
          if (param_1 != 0) {
            uVar8 = 0;
            uVar15 = 1;
            piVar12 = param_3 + 1;
            do {
              sVar6 = (short)param_2;
              *(ushort *)(piVar12 + -1) = sVar6 + uVar8;
              *(ushort *)((long)piVar12 + -2) = sVar6 + uVar15;
              param_2 = param_2 + 1;
              *(short *)piVar12 = sVar6 + 2;
              uVar15 = uVar15 ^ 1;
              uVar8 = uVar8 ^ 1;
              param_1 = param_1 - 1;
              piVar12 = (int *)((long)piVar12 + 6);
            } while (param_1 != 0);
          }
        }
        else if ((param_4 == 1) && (param_1 != 0)) {
          bVar7 = 0;
          bVar14 = 1;
          pcVar11 = (char *)((long)param_3 + 2);
          do {
            cVar5 = (char)param_2;
            pcVar11[-2] = cVar5 + bVar7;
            pcVar11[-1] = cVar5 + bVar14;
            param_2 = param_2 + 1;
            *pcVar11 = cVar5 + '\x02';
            bVar14 = bVar14 ^ 1;
            bVar7 = bVar7 ^ 1;
            param_1 = param_1 - 1;
            pcVar11 = pcVar11 + 3;
          } while (param_1 != 0);
        }
      }
      else if (param_7 == 1) {
        if (param_4 == 4) {
          if (param_1 != 0) {
            uVar10 = 0;
            uVar17 = 1;
            piVar12 = param_3 + 2;
            do {
              bVar14 = *(byte *)((long)param_6 + uVar10 + uVar17);
              bVar7 = *(byte *)((long)param_6 + uVar10 + 2);
              piVar12[-2] = param_2 + (uint)*(byte *)((long)param_6 + uVar10 + (uVar10 & 1));
              piVar12[-1] = param_2 + (uint)bVar14;
              *piVar12 = param_2 + (uint)bVar7;
              uVar10 = uVar10 + 1;
              uVar17 = (ulong)((uint)uVar17 ^ 1);
              piVar12 = piVar12 + 3;
            } while (param_1 != uVar10);
          }
        }
        else if (param_4 == 2) {
          if (param_1 != 0) {
            uVar10 = 0;
            uVar17 = 1;
            piVar12 = param_3 + 1;
            do {
              bVar14 = *(byte *)((long)param_6 + uVar10 + uVar17);
              bVar7 = *(byte *)((long)param_6 + uVar10 + 2);
              *(ushort *)(piVar12 + -1) =
                   sVar6 + (ushort)*(byte *)((long)param_6 + uVar10 + (uVar10 & 1));
              *(ushort *)((long)piVar12 + -2) = sVar6 + (ushort)bVar14;
              *(ushort *)piVar12 = sVar6 + (ushort)bVar7;
              uVar10 = uVar10 + 1;
              uVar17 = (ulong)((uint)uVar17 ^ 1);
              piVar12 = (int *)((long)piVar12 + 6);
            } while (param_1 != uVar10);
          }
        }
        else if ((param_4 == 1) && (param_1 != 0)) {
          uVar10 = 0;
          uVar17 = 1;
          pcVar11 = (char *)((long)param_3 + 2);
          do {
            bVar14 = *(byte *)((long)param_6 + uVar10 + uVar17);
            bVar7 = *(byte *)((long)param_6 + uVar10 + 2);
            pcVar11[-2] = *(byte *)((long)param_6 + uVar10 + (uVar10 & 1)) + cVar5;
            pcVar11[-1] = bVar14 + cVar5;
            *pcVar11 = bVar7 + cVar5;
            uVar10 = uVar10 + 1;
            uVar17 = (ulong)((uint)uVar17 ^ 1);
            pcVar11 = pcVar11 + 3;
          } while (param_1 != uVar10);
        }
      }
    }
    else if (param_7 == 2) {
      if (param_4 == 4) {
        if (param_1 != 0) {
          uVar10 = 0;
          uVar17 = 1;
          piVar12 = param_3 + 2;
          do {
            uVar15 = param_6[uVar17 + uVar10];
            uVar8 = param_6[uVar10 + 2];
            piVar12[-2] = param_2 + (uint)param_6[(uVar10 & 1) + uVar10];
            piVar12[-1] = param_2 + (uint)uVar15;
            *piVar12 = param_2 + (uint)uVar8;
            uVar10 = uVar10 + 1;
            uVar17 = (ulong)((uint)uVar17 ^ 1);
            piVar12 = piVar12 + 3;
          } while (param_1 != uVar10);
        }
      }
      else if (param_4 == 2) {
        if (param_1 != 0) {
          uVar10 = 0;
          psVar13 = (short *)((long)param_3 + 2);
          uVar17 = 1;
          do {
            uVar15 = param_6[uVar17 + uVar10];
            uVar8 = param_6[uVar10 + 2];
            psVar13[-1] = param_6[(uVar10 & 1) + uVar10] + sVar6;
            *psVar13 = uVar15 + sVar6;
            psVar13[1] = uVar8 + sVar6;
            uVar10 = uVar10 + 1;
            psVar13 = psVar13 + 3;
            uVar17 = (ulong)((uint)uVar17 ^ 1);
          } while (param_1 != uVar10);
        }
      }
      else if ((param_4 == 1) && (param_1 != 0)) {
        uVar10 = 0;
        uVar17 = 1;
        pcVar11 = (char *)((long)param_3 + 2);
        do {
          uVar15 = param_6[uVar17 + uVar10];
          uVar8 = param_6[uVar10 + 2];
          pcVar11[-2] = cVar5 + (char)param_6[(uVar10 & 1) + uVar10];
          pcVar11[-1] = cVar5 + (char)uVar15;
          *pcVar11 = cVar5 + (char)uVar8;
          uVar10 = uVar10 + 1;
          uVar17 = (ulong)((uint)uVar17 ^ 1);
          pcVar11 = pcVar11 + 3;
        } while (param_1 != uVar10);
      }
    }
    else if (param_7 == 4) {
      if (param_4 == 4) {
        if (param_1 != 0) {
          uVar10 = 0;
          param_3 = param_3 + 1;
          uVar17 = 1;
          do {
            iVar3 = *(int *)(param_6 + uVar17 * 2 + uVar10 * 2);
            iVar4 = *(int *)(param_6 + uVar10 * 2 + 4);
            param_3[-1] = *(int *)(param_6 + (uVar10 & 1) * 2 + uVar10 * 2) + param_2;
            *param_3 = iVar3 + param_2;
            param_3[1] = iVar4 + param_2;
            uVar10 = uVar10 + 1;
            param_3 = param_3 + 3;
            uVar17 = (ulong)((uint)uVar17 ^ 1);
          } while (param_1 != uVar10);
        }
      }
      else if (param_4 == 2) {
        if (param_1 != 0) {
          uVar10 = 0;
          uVar17 = 1;
          piVar12 = param_3 + 1;
          do {
            uVar1 = *(undefined4 *)(param_6 + uVar17 * 2 + uVar10 * 2);
            uVar2 = *(undefined4 *)(param_6 + uVar10 * 2 + 4);
            *(short *)(piVar12 + -1) =
                 (short)*(undefined4 *)(param_6 + (uVar10 & 1) * 2 + uVar10 * 2) + sVar6;
            *(short *)((long)piVar12 + -2) = (short)uVar1 + sVar6;
            *(short *)piVar12 = (short)uVar2 + sVar6;
            uVar10 = uVar10 + 1;
            uVar17 = (ulong)((uint)uVar17 ^ 1);
            piVar12 = (int *)((long)piVar12 + 6);
          } while (param_1 != uVar10);
        }
      }
      else if ((param_4 == 1) && (param_1 != 0)) {
        uVar10 = 0;
        uVar17 = 1;
        pcVar11 = (char *)((long)param_3 + 2);
        do {
          uVar1 = *(undefined4 *)(param_6 + uVar17 * 2 + uVar10 * 2);
          uVar2 = *(undefined4 *)(param_6 + uVar10 * 2 + 4);
          pcVar11[-2] = (char)*(undefined4 *)(param_6 + (uVar10 & 1) * 2 + uVar10 * 2) + cVar5;
          pcVar11[-1] = (char)uVar1 + cVar5;
          *pcVar11 = (char)uVar2 + cVar5;
          uVar10 = uVar10 + 1;
          uVar17 = (ulong)((uint)uVar17 ^ 1);
          pcVar11 = pcVar11 + 3;
        } while (param_1 != uVar10);
      }
    }
  }
  else if (param_5 == 0) {
    uVar10 = param_1 * 3;
    if (param_7 < 2) {
      if (param_7 == 0) {
        if (param_4 == 4) {
          while (param_1 != 0) {
            *param_3 = param_2;
            param_2 = param_2 + 1;
            uVar10 = uVar10 - 1;
            param_3 = param_3 + 1;
            param_1 = uVar10;
          }
        }
        else if (param_4 == 2) {
          while (param_1 != 0) {
            *(short *)param_3 = (short)param_2;
            param_2 = param_2 + 1;
            uVar10 = uVar10 - 1;
            param_3 = (int *)((long)param_3 + 2);
            param_1 = uVar10;
          }
        }
        else if (param_4 == 1) {
          while (param_1 != 0) {
            *(char *)param_3 = (char)param_2;
            param_2 = param_2 + 1;
            uVar10 = uVar10 - 1;
            param_3 = (int *)((long)param_3 + 1);
            param_1 = uVar10;
          }
        }
      }
      else if (param_7 == 1) {
        if (param_4 == 4) {
          while (param_1 != 0) {
            *param_3 = param_2 + (uint)(byte)*param_6;
            uVar10 = uVar10 - 1;
            param_6 = (ushort *)((long)param_6 + 1);
            param_3 = param_3 + 1;
            param_1 = uVar10;
          }
        }
        else if (param_4 == 2) {
          while (param_1 != 0) {
            *(ushort *)param_3 = sVar6 + (ushort)(byte)*param_6;
            uVar10 = uVar10 - 1;
            param_6 = (ushort *)((long)param_6 + 1);
            param_3 = (int *)((long)param_3 + 2);
            param_1 = uVar10;
          }
        }
        else if (param_4 == 1) {
          while (param_1 != 0) {
            *(byte *)param_3 = (byte)*param_6 + cVar5;
            uVar10 = uVar10 - 1;
            param_6 = (ushort *)((long)param_6 + 1);
            param_3 = (int *)((long)param_3 + 1);
            param_1 = uVar10;
          }
        }
      }
    }
    else if (param_7 == 2) {
      if (param_4 == 4) {
        while (param_1 != 0) {
          *param_3 = param_2 + (uint)*param_6;
          uVar10 = uVar10 - 1;
          param_6 = param_6 + 1;
          param_3 = param_3 + 1;
          param_1 = uVar10;
        }
      }
      else if (param_4 == 2) {
        while (param_1 != 0) {
          *(ushort *)param_3 = *param_6 + sVar6;
          uVar10 = uVar10 - 1;
          param_6 = param_6 + 1;
          param_3 = (int *)((long)param_3 + 2);
          param_1 = uVar10;
        }
      }
      else if (param_4 == 1) {
        while (param_1 != 0) {
          *(char *)param_3 = cVar5 + (char)*param_6;
          uVar10 = uVar10 - 1;
          param_6 = param_6 + 1;
          param_3 = (int *)((long)param_3 + 1);
          param_1 = uVar10;
        }
      }
    }
    else if (param_7 == 4) {
      if (param_4 == 4) {
        while (param_1 != 0) {
          *param_3 = *(int *)param_6 + param_2;
          uVar10 = uVar10 - 1;
          param_6 = param_6 + 2;
          param_3 = param_3 + 1;
          param_1 = uVar10;
        }
      }
      else if (param_4 == 2) {
        while (param_1 != 0) {
          *(short *)param_3 = (short)*(int *)param_6 + sVar6;
          uVar10 = uVar10 - 1;
          param_6 = param_6 + 2;
          param_3 = (int *)((long)param_3 + 2);
          param_1 = uVar10;
        }
      }
      else if (param_4 == 1) {
        while (param_1 != 0) {
          *(char *)param_3 = (char)*(int *)param_6 + cVar5;
          uVar10 = uVar10 - 1;
          param_6 = param_6 + 2;
          param_3 = (int *)((long)param_3 + 1);
          param_1 = uVar10;
        }
      }
    }
  }
  return;
}



/* Entry: 10ab519ac; end: 10ab51f1b;  */

void FUN_10ab519ac(float *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  float fVar16;
  undefined8 uStack_30;
  undefined8 uStack_28;
  float afStack_20 [4];
  
  param_4 = param_4 + (ulong)*(uint *)(param_6 + 0x30);
  cVar4 = *(char *)(param_6 + 0x2c);
  uStack_28 = 0xff7fffffff7fffff;
  uStack_30 = 0xff7fffffff7fffff;
  afStack_20[2] = 3.4028235e+38;
  afStack_20[3] = 3.4028235e+38;
  afStack_20[0] = 3.4028235e+38;
  afStack_20[1] = 3.4028235e+38;
  iVar1 = *(int *)(param_6 + 0x24);
  uVar2 = *(uint *)(param_6 + 0x28);
  uVar3 = (ulong)uVar2;
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      if (cVar4 == '\0') {
        if (param_3 != 0) {
          lVar10 = 0;
          do {
            if (uVar2 != 0) {
              uVar11 = 0;
              do {
                fVar16 = (float)(int)*(char *)(param_4 + uVar11);
                *(float *)(param_2 + uVar11 * 4) = fVar16;
                fVar7 = afStack_20[uVar11];
                uVar13 = SUB41(fVar16,0);
                uVar14 = (undefined1)((uint)fVar16 >> 8);
                uVar15 = (undefined2)((uint)fVar16 >> 0x10);
                if (fVar7 <= fVar16) {
                  uVar13 = SUB41(fVar7,0);
                  uVar14 = (undefined1)((uint)fVar7 >> 8);
                  uVar15 = (undefined2)((uint)fVar7 >> 0x10);
                }
                afStack_20[uVar11] = (float)CONCAT22(uVar15,CONCAT11(uVar14,uVar13));
                fVar7 = *(float *)((long)&uStack_30 + uVar11 * 4);
                if (fVar16 <= fVar7) {
                  fVar16 = fVar7;
                }
                *(float *)((long)&uStack_30 + uVar11 * 4) = fVar16;
                uVar11 = uVar11 + 1;
              } while (uVar3 != uVar11);
            }
            lVar10 = lVar10 + 1;
            param_4 = param_4 + param_5;
            param_2 = param_2 + uVar3 * 4;
          } while (lVar10 != param_3);
        }
      }
      else if (param_3 != 0) {
        lVar10 = 0;
        do {
          if (uVar2 != 0) {
            uVar11 = 0;
            do {
              fVar7 = (float)(int)*(char *)(param_4 + uVar11) * 0.007874016;
              *(float *)(param_2 + uVar11 * 4) = fVar7;
              fVar16 = fVar7;
              if (afStack_20[uVar11] <= fVar7) {
                fVar16 = afStack_20[uVar11];
              }
              afStack_20[uVar11] = fVar16;
              fVar16 = *(float *)((long)&uStack_30 + uVar11 * 4);
              uVar13 = SUB41(fVar7,0);
              uVar14 = (undefined1)((uint)fVar7 >> 8);
              uVar15 = (undefined2)((uint)fVar7 >> 0x10);
              if (fVar7 <= fVar16) {
                uVar13 = SUB41(fVar16,0);
                uVar14 = (undefined1)((uint)fVar16 >> 8);
                uVar15 = (undefined2)((uint)fVar16 >> 0x10);
              }
              *(uint *)((long)&uStack_30 + uVar11 * 4) = CONCAT22(uVar15,CONCAT11(uVar14,uVar13));
              uVar11 = uVar11 + 1;
            } while (uVar3 != uVar11);
          }
          lVar10 = lVar10 + 1;
          param_4 = param_4 + param_5;
          param_2 = param_2 + uVar3 * 4;
        } while (lVar10 != param_3);
      }
    }
    else if (iVar1 == 2) {
      if (cVar4 == '\0') {
        if (param_3 != 0) {
          lVar10 = 0;
          do {
            if (uVar2 != 0) {
              uVar11 = 0;
              do {
                fVar16 = (float)NEON_ucvtf((uint)*(byte *)(param_4 + uVar11));
                *(float *)(param_2 + uVar11 * 4) = fVar16;
                fVar7 = afStack_20[uVar11];
                uVar13 = SUB41(fVar16,0);
                uVar14 = (undefined1)((uint)fVar16 >> 8);
                uVar15 = (undefined2)((uint)fVar16 >> 0x10);
                if (fVar7 <= fVar16) {
                  uVar13 = SUB41(fVar7,0);
                  uVar14 = (undefined1)((uint)fVar7 >> 8);
                  uVar15 = (undefined2)((uint)fVar7 >> 0x10);
                }
                afStack_20[uVar11] = (float)CONCAT22(uVar15,CONCAT11(uVar14,uVar13));
                fVar7 = *(float *)((long)&uStack_30 + uVar11 * 4);
                if (fVar16 <= fVar7) {
                  fVar16 = fVar7;
                }
                *(float *)((long)&uStack_30 + uVar11 * 4) = fVar16;
                uVar11 = uVar11 + 1;
              } while (uVar3 != uVar11);
            }
            lVar10 = lVar10 + 1;
            param_4 = param_4 + param_5;
            param_2 = param_2 + uVar3 * 4;
          } while (lVar10 != param_3);
        }
      }
      else if (param_3 != 0) {
        lVar10 = 0;
        do {
          if (uVar2 != 0) {
            uVar11 = 0;
            do {
              fVar7 = (float)NEON_ucvtf((uint)*(byte *)(param_4 + uVar11));
              fVar7 = fVar7 * 0.003921569;
              *(float *)(param_2 + uVar11 * 4) = fVar7;
              fVar16 = fVar7;
              if (afStack_20[uVar11] <= fVar7) {
                fVar16 = afStack_20[uVar11];
              }
              afStack_20[uVar11] = fVar16;
              fVar16 = *(float *)((long)&uStack_30 + uVar11 * 4);
              uVar13 = SUB41(fVar7,0);
              uVar14 = (undefined1)((uint)fVar7 >> 8);
              uVar15 = (undefined2)((uint)fVar7 >> 0x10);
              if (fVar7 <= fVar16) {
                uVar13 = SUB41(fVar16,0);
                uVar14 = (undefined1)((uint)fVar16 >> 8);
                uVar15 = (undefined2)((uint)fVar16 >> 0x10);
              }
              *(uint *)((long)&uStack_30 + uVar11 * 4) = CONCAT22(uVar15,CONCAT11(uVar14,uVar13));
              uVar11 = uVar11 + 1;
            } while (uVar3 != uVar11);
          }
          lVar10 = lVar10 + 1;
          param_4 = param_4 + param_5;
          param_2 = param_2 + uVar3 * 4;
        } while (lVar10 != param_3);
      }
    }
    else if (iVar1 == 3) {
      if (cVar4 == '\0') {
        if (param_3 != 0) {
          lVar10 = 0;
          do {
            if (uVar2 != 0) {
              uVar11 = 0;
              do {
                fVar16 = (float)(int)*(short *)(param_4 + uVar11 * 2);
                *(float *)(param_2 + uVar11 * 4) = fVar16;
                fVar7 = afStack_20[uVar11];
                uVar13 = SUB41(fVar16,0);
                uVar14 = (undefined1)((uint)fVar16 >> 8);
                uVar15 = (undefined2)((uint)fVar16 >> 0x10);
                if (fVar7 <= fVar16) {
                  uVar13 = SUB41(fVar7,0);
                  uVar14 = (undefined1)((uint)fVar7 >> 8);
                  uVar15 = (undefined2)((uint)fVar7 >> 0x10);
                }
                afStack_20[uVar11] = (float)CONCAT22(uVar15,CONCAT11(uVar14,uVar13));
                fVar7 = *(float *)((long)&uStack_30 + uVar11 * 4);
                if (fVar16 <= fVar7) {
                  fVar16 = fVar7;
                }
                *(float *)((long)&uStack_30 + uVar11 * 4) = fVar16;
                uVar11 = uVar11 + 1;
              } while (uVar3 != uVar11);
            }
            lVar10 = lVar10 + 1;
            param_4 = param_4 + param_5;
            param_2 = param_2 + uVar3 * 4;
          } while (lVar10 != param_3);
        }
      }
      else if (param_3 != 0) {
        lVar10 = 0;
        do {
          if (uVar2 != 0) {
            uVar11 = 0;
            do {
              fVar7 = (float)(int)*(short *)(param_4 + uVar11 * 2) * 3.051851e-05;
              *(float *)(param_2 + uVar11 * 4) = fVar7;
              fVar16 = fVar7;
              if (afStack_20[uVar11] <= fVar7) {
                fVar16 = afStack_20[uVar11];
              }
              afStack_20[uVar11] = fVar16;
              fVar16 = *(float *)((long)&uStack_30 + uVar11 * 4);
              uVar13 = SUB41(fVar7,0);
              uVar14 = (undefined1)((uint)fVar7 >> 8);
              uVar15 = (undefined2)((uint)fVar7 >> 0x10);
              if (fVar7 <= fVar16) {
                uVar13 = SUB41(fVar16,0);
                uVar14 = (undefined1)((uint)fVar16 >> 8);
                uVar15 = (undefined2)((uint)fVar16 >> 0x10);
              }
              *(uint *)((long)&uStack_30 + uVar11 * 4) = CONCAT22(uVar15,CONCAT11(uVar14,uVar13));
              uVar11 = uVar11 + 1;
            } while (uVar3 != uVar11);
          }
          lVar10 = lVar10 + 1;
          param_4 = param_4 + param_5;
          param_2 = param_2 + uVar3 * 4;
        } while (lVar10 != param_3);
      }
    }
  }
  else if (iVar1 == 4) {
    if (cVar4 == '\0') {
      if (param_3 != 0) {
        lVar10 = 0;
        do {
          if (uVar2 != 0) {
            uVar11 = 0;
            do {
              fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_4 + uVar11 * 2));
              *(float *)(param_2 + uVar11 * 4) = fVar16;
              fVar7 = afStack_20[uVar11];
              uVar13 = SUB41(fVar16,0);
              uVar14 = (undefined1)((uint)fVar16 >> 8);
              uVar15 = (undefined2)((uint)fVar16 >> 0x10);
              if (fVar7 <= fVar16) {
                uVar13 = SUB41(fVar7,0);
                uVar14 = (undefined1)((uint)fVar7 >> 8);
                uVar15 = (undefined2)((uint)fVar7 >> 0x10);
              }
              afStack_20[uVar11] = (float)CONCAT22(uVar15,CONCAT11(uVar14,uVar13));
              fVar7 = *(float *)((long)&uStack_30 + uVar11 * 4);
              if (fVar16 <= fVar7) {
                fVar16 = fVar7;
              }
              *(float *)((long)&uStack_30 + uVar11 * 4) = fVar16;
              uVar11 = uVar11 + 1;
            } while (uVar3 != uVar11);
          }
          lVar10 = lVar10 + 1;
          param_4 = param_4 + param_5;
          param_2 = param_2 + uVar3 * 4;
        } while (lVar10 != param_3);
      }
    }
    else if (param_3 != 0) {
      lVar10 = 0;
      do {
        if (uVar2 != 0) {
          uVar11 = 0;
          do {
            fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(param_4 + uVar11 * 2));
            fVar7 = fVar7 * 1.5259022e-05;
            *(float *)(param_2 + uVar11 * 4) = fVar7;
            fVar16 = fVar7;
            if (afStack_20[uVar11] <= fVar7) {
              fVar16 = afStack_20[uVar11];
            }
            afStack_20[uVar11] = fVar16;
            fVar16 = *(float *)((long)&uStack_30 + uVar11 * 4);
            uVar13 = SUB41(fVar7,0);
            uVar14 = (undefined1)((uint)fVar7 >> 8);
            uVar15 = (undefined2)((uint)fVar7 >> 0x10);
            if (fVar7 <= fVar16) {
              uVar13 = SUB41(fVar16,0);
              uVar14 = (undefined1)((uint)fVar16 >> 8);
              uVar15 = (undefined2)((uint)fVar16 >> 0x10);
            }
            *(uint *)((long)&uStack_30 + uVar11 * 4) = CONCAT22(uVar15,CONCAT11(uVar14,uVar13));
            uVar11 = uVar11 + 1;
          } while (uVar3 != uVar11);
        }
        lVar10 = lVar10 + 1;
        param_4 = param_4 + param_5;
        param_2 = param_2 + uVar3 * 4;
      } while (lVar10 != param_3);
    }
  }
  else if (iVar1 == 5) {
    if (param_3 != 0) {
      lVar10 = 0;
      do {
        if (uVar2 != 0) {
          lVar12 = 0;
          do {
            fVar16 = *(float *)(param_4 + lVar12);
            *(float *)(param_2 + lVar12) = fVar16;
            fVar7 = *(float *)((long)afStack_20 + lVar12);
            uVar13 = SUB41(fVar16,0);
            uVar14 = (undefined1)((uint)fVar16 >> 8);
            uVar15 = (undefined2)((uint)fVar16 >> 0x10);
            if (fVar7 <= fVar16) {
              uVar13 = SUB41(fVar7,0);
              uVar14 = (undefined1)((uint)fVar7 >> 8);
              uVar15 = (undefined2)((uint)fVar7 >> 0x10);
            }
            *(uint *)((long)afStack_20 + lVar12) = CONCAT22(uVar15,CONCAT11(uVar14,uVar13));
            if (fVar16 <= *(float *)((long)&uStack_30 + lVar12)) {
              fVar16 = *(float *)((long)&uStack_30 + lVar12);
            }
            *(float *)((long)&uStack_30 + lVar12) = fVar16;
            lVar12 = lVar12 + 4;
          } while (uVar3 * 4 - lVar12 != 0);
        }
        lVar10 = lVar10 + 1;
        param_4 = param_4 + param_5;
        param_2 = param_2 + uVar3 * 4;
      } while (lVar10 != param_3);
    }
  }
  else if (iVar1 == 6 && param_3 != 0) {
    lVar10 = 0;
    do {
      if (uVar2 != 0) {
        uVar11 = 0;
        do {
          uVar5 = *(ushort *)(param_4 + uVar11 * 2);
          uVar6 = (uint)(uVar5 >> 0xf);
          uVar9 = uVar5 >> 10 & 0x1f;
          uVar8 = uVar5 & 0x3ff;
          if (uVar9 == 0x1f) {
            uVar8 = uVar6 << 0x1f | (uint)uVar5 << 0xd;
            if ((uVar5 & 0x3ff) == 0) {
              uVar8 = uVar6 << 0x1f;
            }
            fVar7 = (float)(uVar8 | 0x7f800000);
          }
          else {
            if ((uVar5 >> 10 & 0x1f) == 0) {
              if ((uVar5 & 0x3ff) == 0) {
                fVar7 = (float)(uVar6 << 0x1f);
                goto LAB_10ab51b1c;
              }
              uVar9 = 0x16 - (uint)LZCOUNT(uVar8);
              uVar8 = uVar8 << (ulong)(10 - ((uint)LZCOUNT(uVar8) ^ 0x1f) & 0x1f) & 0x1fffbfe;
            }
            fVar7 = (float)(uVar9 * 0x800000 + 0x38000000 | uVar6 << 0x1f | uVar8 << 0xd);
          }
LAB_10ab51b1c:
          *(float *)(param_2 + uVar11 * 4) = fVar7;
          fVar16 = afStack_20[uVar11];
          uVar13 = 0;
          uVar14 = (undefined1)((uint)fVar7 >> 8);
          uVar15 = (undefined2)((uint)fVar7 >> 0x10);
          if (fVar16 <= fVar7) {
            uVar13 = SUB41(fVar16,0);
            uVar14 = (undefined1)((uint)fVar16 >> 8);
            uVar15 = (undefined2)((uint)fVar16 >> 0x10);
          }
          afStack_20[uVar11] = (float)CONCAT22(uVar15,CONCAT11(uVar14,uVar13));
          fVar16 = *(float *)((long)&uStack_30 + uVar11 * 4);
          if (fVar7 <= fVar16) {
            fVar7 = fVar16;
          }
          *(float *)((long)&uStack_30 + uVar11 * 4) = fVar7;
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
      }
      lVar10 = lVar10 + 1;
      param_4 = param_4 + param_5;
      param_2 = param_2 + uVar3 * 4;
    } while (lVar10 != param_3);
  }
  *param_1 = afStack_20[0];
  *(undefined8 *)(param_1 + 3) = uStack_30;
  *(ulong *)(param_1 + 1) = CONCAT44(afStack_20[2],afStack_20[1]);
  param_1[5] = (float)uStack_28;
  return;
}



/* Entry: 10ab51f1c; end: 10ab51fab;  */

void FUN_10ab51f1c(float *param_1,float *param_2,long param_3)

{
  float *pfVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_3 == 0) {
    fVar4 = 3.4028235e+38;
    fVar5 = 3.4028235e+38;
    fVar3 = 3.4028235e+38;
    fVar6 = -3.4028235e+38;
    uVar2 = 0xff7fffffff7fffff;
  }
  else {
    fVar4 = *param_2;
    fVar5 = param_2[1];
    uVar2 = *(ulong *)(param_2 + 1);
    fVar3 = (float)(uVar2 >> 0x20);
    fVar6 = fVar4;
    if (param_3 * 0xc != 0xc) {
      pfVar1 = param_2 + 3;
      do {
        fVar7 = *pfVar1;
        fVar8 = (float)*(undefined8 *)(pfVar1 + 1);
        fVar9 = (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20);
        fVar4 = (float)((uint)fVar4 ^ ((uint)fVar4 ^ (uint)*pfVar1) & -(uint)(fVar7 < fVar4));
        fVar5 = (float)((uint)fVar5 ^ ((uint)fVar5 ^ (uint)pfVar1[1]) & -(uint)(fVar8 < fVar5));
        fVar3 = (float)((uint)fVar3 ^ ((uint)fVar3 ^ (uint)fVar9) & -(uint)(fVar9 < fVar3));
        fVar6 = (float)((uint)fVar6 ^ ((uint)fVar6 ^ (uint)fVar7) & -(uint)(fVar6 < fVar7));
        uVar2 = uVar2 ^ (uVar2 ^ CONCAT44(pfVar1[2],fVar8)) &
                        CONCAT44(-(uint)((float)(uVar2 >> 0x20) < pfVar1[2]),
                                 -(uint)((float)uVar2 < fVar8));
        pfVar1 = pfVar1 + 3;
      } while (pfVar1 != param_2 + param_3 * 3);
    }
  }
  param_1[2] = fVar3;
  param_1[3] = fVar6;
  *param_1 = fVar4;
  param_1[1] = fVar5;
  *(ulong *)(param_1 + 4) = uVar2;
  return;
}



/* Entry: 10ab51fac; end: 10ab5211f;  */

void FUN_10ab51fac(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_3 != 0) {
    lVar8 = 0;
    do {
      lVar7 = param_1 + 0x1f0;
      FUN_10a063240(lVar7,param_2 + lVar8 * 0x60);
      if ((lVar7 == 0) || (plVar6 = *(long **)(lVar7 + 0x38), plVar6 == (long *)0x0)) {
LAB_10ab520b8:
        puVar3 = (undefined4 *)(param_4 + lVar8 * 0x40);
        *puVar3 = 0x3f800000;
        *(undefined8 *)(puVar3 + 3) = 0;
        *(undefined8 *)(puVar3 + 1) = 0;
        puVar3[5] = 0x3f800000;
        *(undefined8 *)(puVar3 + 6) = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        puVar3[10] = 0x3f800000;
        *(undefined8 *)(puVar3 + 0xd) = 0;
        *(undefined8 *)(puVar3 + 0xb) = 0;
        puVar3[0xf] = 0x3f800000;
      }
      else {
        __ZNSt3__119__shared_weak_count4lockEv();
        if (plVar6 == (long *)0x0) goto LAB_10ab520b8;
        if (*(long *)(lVar7 + 0x30) == 0) {
          plVar1 = plVar6 + 1;
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
          goto LAB_10ab520b8;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x30) + 0x140);
        if ((*(byte *)(lVar7 + 0x2a) & 0x24) != 0) {
          FUN_10a3e8fd4(lVar7);
        }
        puVar2 = (undefined8 *)(param_4 + lVar8 * 0x40);
        uVar10 = *(undefined8 *)(lVar7 + 200);
        uVar9 = *(undefined8 *)(lVar7 + 0xc0);
        uVar12 = *(undefined8 *)(lVar7 + 0xd8);
        uVar11 = *(undefined8 *)(lVar7 + 0xd0);
        uVar13 = *(undefined8 *)(lVar7 + 0xe0);
        uVar15 = *(undefined8 *)(lVar7 + 0xf8);
        uVar14 = *(undefined8 *)(lVar7 + 0xf0);
        puVar2[5] = *(undefined8 *)(lVar7 + 0xe8);
        puVar2[4] = uVar13;
        puVar2[7] = uVar15;
        puVar2[6] = uVar14;
        puVar2[1] = uVar10;
        *puVar2 = uVar9;
        puVar2[3] = uVar12;
        puVar2[2] = uVar11;
        plVar1 = plVar6 + 1;
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != param_3);
  }
  return;
}



/* Entry: 10ab52120; end: 10ab5242b;  */

undefined8
FUN_10ab52120(long param_1,undefined8 param_2,long param_3,ulong param_4,float *param_5,
             float *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  float fVar20;
  ulong uVar19;
  ulong uVar21;
  undefined1 auStack_e0 [8];
  float fStack_d8;
  undefined8 uStack_d4;
  float fStack_cc;
  undefined1 auStack_c8 [72];
  
  if (*(long *)(param_1 + 0x70) != *(long *)(param_1 + 0x78)) {
    uVar4 = (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 3) * -0x5555555555555555;
    if (param_4 <= uVar4) {
      if (param_4 == 0) {
        fVar12 = 0.0;
        fVar14 = 0.0;
        uVar4 = 0xff7fffffff7fffff;
        fVar11 = 3.4028235e+38;
        fVar3 = -3.4028235e+38;
        uVar19 = 0xff7fffffff7fffff;
        fVar9 = 0.0;
        fVar8 = 0.0;
        fVar10 = fVar3;
        fVar18 = fVar11;
      }
      else {
        lVar6 = 0;
        uVar7 = 0;
        uVar4 = 0xff7fffffff7fffff;
        uVar13 = 0x7f7fffffff7fffff;
        uVar16 = 0xff7fffff7f7fffff;
        fVar3 = -3.4028235e+38;
        fVar11 = 3.4028235e+38;
        uVar19 = 0xff7fffffff7fffff;
        uVar17 = uVar13;
        uVar21 = uVar16;
        fVar9 = fVar3;
        fVar18 = fVar11;
        do {
          uVar5 = (*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 3) * -0x5555555555555555
          ;
          if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab5242c);
            (*pcVar2)();
          }
          lVar1 = *(long *)(param_1 + 0x70) + lVar6;
          fVar8 = *(float *)(param_3 + 0x38);
          fVar10 = fVar8;
          if (fVar11 <= fVar8) {
            fVar10 = fVar11;
          }
          fVar11 = fVar10;
          uVar5 = *(ulong *)(param_3 + 0x30);
          if (fVar8 <= fVar3) {
            fVar8 = fVar3;
          }
          fVar3 = fVar8;
          fVar10 = fVar9;
          if (0.0 <= *(float *)(lVar1 + 0xc)) {
            func_0x000109519fd0(auStack_c8,param_2,param_3);
            FUN_10a005448(auStack_e0,lVar1,auStack_c8);
            fVar10 = fStack_d8 - fStack_cc;
            if (fVar18 <= fStack_d8 - fStack_cc) {
              fVar10 = fVar18;
            }
            fVar18 = fVar10;
            fVar12 = auStack_e0._0_4_ - (float)uStack_d4;
            fVar8 = (float)((ulong)uStack_d4 >> 0x20);
            fVar14 = auStack_e0._4_4_ - fVar8;
            fVar10 = auStack_e0._0_4_ + (float)uStack_d4;
            fVar8 = auStack_e0._4_4_ + fVar8;
            fVar20 = (float)(uVar19 >> 0x20);
            fVar15 = (float)uVar19;
            uVar19 = uVar19 ^ (uVar19 ^ CONCAT44(fVar8,fVar10)) &
                              CONCAT44(-(uint)(fVar20 < fVar8),-(uint)(fVar15 < fVar10));
            uVar17 = uVar17 ^ (uVar17 ^ CONCAT44(fVar14,fVar10)) &
                              CONCAT44(-(uint)(fVar14 < (float)(uVar17 >> 0x20)),
                                       -(uint)(fVar15 < fVar10));
            uVar21 = uVar21 ^ (uVar21 ^ CONCAT44(fVar8,fVar12)) &
                              CONCAT44(-(uint)(fVar20 < fVar8),-(uint)(fVar12 < (float)uVar21));
            fVar10 = fStack_d8 + fStack_cc;
            if (fStack_d8 + fStack_cc <= fVar9) {
              fVar10 = fVar9;
            }
          }
          fVar9 = (float)uVar5;
          fVar8 = (float)(uVar4 >> 0x20);
          fVar12 = (float)(uVar5 >> 0x20);
          uVar13 = uVar13 ^ (uVar13 ^ uVar5) &
                            CONCAT44(-(uint)(fVar12 < (float)(uVar13 >> 0x20)),
                                     -(uint)((float)uVar4 < fVar9));
          uVar4 = uVar4 ^ (uVar4 ^ uVar5) &
                          CONCAT44(-(uint)(fVar8 < fVar12),-(uint)((float)uVar4 < fVar9));
          uVar16 = uVar16 ^ (uVar16 ^ uVar5) &
                            CONCAT44(-(uint)(fVar8 < fVar12),-(uint)(fVar9 < (float)uVar16));
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x18;
          param_3 = param_3 + 0x40;
          fVar9 = fVar10;
        } while (param_4 != uVar7);
        fVar12 = ((float)uVar16 + (float)uVar13) * 0.5;
        fVar14 = ((float)(uVar16 >> 0x20) + (float)(uVar13 >> 0x20)) * 0.5;
        fVar9 = ((float)uVar21 + (float)uVar17) * 0.5;
        fVar8 = ((float)(uVar21 >> 0x20) + (float)(uVar17 >> 0x20)) * 0.5;
      }
      fVar11 = (fVar3 + fVar11) * 0.5;
      *param_5 = fVar12;
      *(ulong *)(param_5 + 3) = CONCAT44((float)(uVar4 >> 0x20) - fVar14,(float)uVar4 - fVar12);
      *(ulong *)(param_5 + 1) = CONCAT44(fVar11,fVar14);
      param_5[5] = fVar3 - fVar11;
      fVar11 = (fVar10 + fVar18) * 0.5;
      *param_6 = fVar9;
      *(ulong *)(param_6 + 3) = CONCAT44((float)(uVar19 >> 0x20) - fVar8,(float)uVar19 - fVar9);
      *(ulong *)(param_6 + 1) = CONCAT44(fVar11,fVar8);
      param_6[5] = fVar10 - fVar11;
      return 1;
    }
    if (((bRam00000001137ec499 & 1) == 0) &&
       (bRam00000001137ec499 = 1, (bRam000000011330a9e8 >> 1 & 1) != 0)) {
      func_0x00010ae06f08(1,2,&UNK_10f692f87,&UNK_10f692fb7,0x91,&UNK_10f69303e,param_7,param_8,
                          uVar4,param_4);
    }
  }
  return 0;
}



/* Entry: 10ab5242c; end: 10ab52537;  */

undefined8 * FUN_10ab5242c(long param_1,long param_2,long param_3,int param_4,long param_5)

{
  ushort *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  uint uVar6;
  long *plVar7;
  int *piVar8;
  ushort uVar9;
  char cVar10;
  bool bVar11;
  code *pcVar12;
  ushort *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar17;
  int *piVar18;
  int *piVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  uint *puVar23;
  float *pfVar24;
  float *pfVar25;
  int iVar26;
  ulong uVar27;
  uint *puVar28;
  ulong uVar29;
  byte *pbVar30;
  uint *puVar31;
  long lVar32;
  long *plVar33;
  long lVar34;
  long lVar35;
  undefined8 uVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined2 uStack_13a;
  ushort *puStack_138;
  ushort *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plVar16;
  
  uVar20 = 2;
  if (*(int *)(param_1 + 0xe8) != 1) {
    uVar20 = 0;
  }
  uVar6 = 4;
  if (*(int *)(param_1 + 0xe8) != 2) {
    uVar6 = uVar20;
  }
  if ((param_2 == 0) || ((*(ushort *)(param_2 + 0x180) & 0x12) != 0)) {
LAB_10ab52464:
    iVar26 = 0;
    uVar21 = 0;
    uVar27 = 0;
  }
  else {
    uVar21 = 0;
    if (*(long *)(param_1 + 0x88) != *(long *)(param_1 + 0x90)) {
      if (*(long *)(param_1 + 0x60) != *(long *)(param_1 + 0x58)) {
        iVar26 = 0;
        uVar27 = uVar21;
        if (uVar6 == 0) goto LAB_10ab52468;
        uVar20 = *(uint *)(param_1 + 0x130);
        if (uVar20 != 0xffffffff) {
          lVar22 = *(long *)(param_1 + 0xf8);
          uVar21 = (*(long *)(param_1 + 0x100) - lVar22 >> 3) * 0x6db6db6db6db6db7;
          if (uVar21 < uVar20 || uVar21 - uVar20 == 0) {
            FUN_10ab725fc();
            FUN_10a187130(&puStack_f8,
                          (*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 5) *
                          -0x5555555555555555);
            puVar5 = puStack_f8;
            lVar22 = *(long *)(param_1 + 0x58);
            lVar14 = *(long *)(param_1 + 0x60) - lVar22;
            if (lVar14 != 0) {
              lVar32 = 0;
              do {
                lVar34 = lVar22 + lVar32 * 0x60;
                lVar35 = param_2 + 0x1f0;
                FUN_10a063240(lVar35,lVar34);
                if (((lVar35 == 0) ||
                    (puVar13 = *(ushort **)(lVar35 + 0x38), puVar13 == (ushort *)0x0)) ||
                   (__ZNSt3__119__shared_weak_count4lockEv(), puStack_130 = puVar13,
                   puVar13 == (ushort *)0x0)) {
LAB_10ab52698:
                  puVar17 = puVar5 + lVar32 * 8;
                  uVar36 = *(undefined8 *)(lVar34 + 0x28);
                  uVar62 = *(undefined8 *)(lVar34 + 0x20);
                  uVar39 = *(undefined8 *)(lVar34 + 0x38);
                  uVar38 = *(undefined8 *)(lVar34 + 0x30);
                  uVar42 = *(undefined8 *)(lVar34 + 0x40);
                  uVar45 = *(undefined8 *)(lVar34 + 0x58);
                  uVar44 = *(undefined8 *)(lVar34 + 0x50);
                  puVar17[5] = *(undefined8 *)(lVar34 + 0x48);
                  puVar17[4] = uVar42;
                  puVar17[7] = uVar45;
                  puVar17[6] = uVar44;
                  puVar17[1] = uVar36;
                  *puVar17 = uVar62;
                  puVar17[3] = uVar39;
                  puVar17[2] = uVar38;
                }
                else {
                  puStack_138 = *(ushort **)(lVar35 + 0x30);
                  if (puStack_138 == (ushort *)0x0) {
                    puVar1 = puVar13 + 4;
                    do {
                      lVar35 = *(long *)puVar1;
                      cVar10 = '\x01';
                      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar11) {
                        *(long *)puVar1 = lVar35 + -1;
                        cVar10 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar10 != '\0');
                    if (lVar35 == 0) {
                      (**(code **)(*(long *)puVar13 + 0x10))(puVar13);
                      __ZNSt3__119__shared_weak_count14__release_weakEv(puVar13);
                    }
                    goto LAB_10ab52698;
                  }
                  lVar35 = *(long *)(puStack_138 + 0xa0);
                  if ((*(byte *)(lVar35 + 0x2a) & 0x24) != 0) {
                    FUN_10a3e8fd4(lVar35);
                  }
                  func_0x000109519fd0(&puStack_e0,lVar35 + 0xc0,lVar34 + 0x20);
                  plVar33 = puVar5 + lVar32 * 8;
                  plVar33[5] = lStack_b8;
                  plVar33[4] = lStack_c0;
                  plVar33[7] = lStack_a8;
                  plVar33[6] = lStack_b0;
                  plVar33[1] = (long)puStack_d8;
                  *plVar33 = (long)puStack_e0;
                  plVar33[3] = lStack_c8;
                  plVar33[2] = lStack_d0;
                  puVar1 = puVar13 + 4;
                  do {
                    lVar35 = *(long *)puVar1;
                    cVar10 = '\x01';
                    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar11) {
                      *(long *)puVar1 = lVar35 + -1;
                      cVar10 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar10 != '\0');
                  if (lVar35 == 0) {
                    (**(code **)(*(long *)puVar13 + 0x10))(puVar13);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(puVar13);
                  }
                }
                lVar32 = lVar32 + 1;
              } while (lVar32 != (lVar14 >> 5) * -0x5555555555555555);
            }
            if (param_4 == 1) {
              lVar22 = *(long *)(param_2 + 0x178);
              if ((*(byte *)(lVar22 + 0x2a) >> 6 & 1) != 0) {
                func_0x00010a3e933c(lVar22);
              }
              puVar5 = puStack_f0;
              puStack_d8 = *(undefined8 **)(lVar22 + 0x108);
              puStack_e0 = *(undefined8 **)(lVar22 + 0x100);
              lStack_c8 = *(long *)(lVar22 + 0x118);
              lStack_d0 = *(long *)(lVar22 + 0x110);
              lStack_b8 = *(long *)(lVar22 + 0x128);
              lStack_c0 = *(long *)(lVar22 + 0x120);
              lStack_a8 = *(long *)(lVar22 + 0x138);
              lStack_b0 = *(long *)(lVar22 + 0x130);
              for (puVar17 = puStack_f8; puVar17 != puVar5; puVar17 = puVar17 + 8) {
                func_0x000109519fd0(&puStack_138,&puStack_e0,puVar17);
                puVar17[5] = uStack_110;
                puVar17[4] = uStack_118;
                puVar17[7] = uStack_100;
                puVar17[6] = uStack_108;
                puVar17[1] = puStack_130;
                *puVar17 = puStack_138;
                puVar17[3] = uStack_120;
                puVar17[2] = uStack_128;
              }
            }
            puVar5 = puStack_f8;
            plVar33 = *(long **)(param_1 + 0x88);
            plVar7 = *(long **)(param_1 + 0x90);
            if (plVar7 == plVar33) {
              puStack_e0 = (undefined8 *)0x0;
              puStack_d8 = (undefined8 *)0x0;
              lStack_d0 = 0;
            }
            else {
              lVar22 = 0;
              lVar14 = (long)puStack_f0 - (long)puStack_f8;
              plVar15 = plVar33;
              do {
                plVar16 = plVar15 + 6;
                lVar22 = lVar22 + (plVar15[1] - *plVar15 >> 2);
                plVar15 = plVar16;
              } while (plVar16 != plVar7);
              FUN_10a187130(&puStack_e0,lVar22);
              puVar17 = puStack_e0;
              do {
                puVar28 = (uint *)plVar33[1];
                puVar23 = (uint *)*plVar33;
                while (puVar23 != puVar28) {
                  if ((ulong)(lVar14 >> 6) <= (ulong)*puVar23) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x10ab52b78);
                    (*pcVar12)();
                  }
                  puVar2 = puVar5 + (ulong)*puVar23 * 8;
                  uVar36 = puVar2[1];
                  uVar62 = *puVar2;
                  uVar39 = puVar2[3];
                  uVar38 = puVar2[2];
                  uVar42 = puVar2[4];
                  uVar45 = puVar2[7];
                  uVar44 = puVar2[6];
                  puVar17[5] = puVar2[5];
                  puVar17[4] = uVar42;
                  puVar17[7] = uVar45;
                  puVar17[6] = uVar44;
                  puVar17[1] = uVar36;
                  *puVar17 = uVar62;
                  puVar17[3] = uVar39;
                  puVar17[2] = uVar38;
                  puVar17 = puVar17 + 8;
                  puVar23 = puVar23 + 1;
                }
                plVar33 = plVar33 + 6;
              } while (plVar33 != plVar7);
            }
            uVar20 = *(uint *)(param_1 + 0xf0);
            if (uVar20 == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
              if ((ulong)uVar20 != 0) {
                uVar21 = (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) /
                         (ulong)uVar20;
              }
              uVar21 = uVar21 & 0xffffffff;
            }
            uStack_13a = 0;
            FUN_10a7bbdc4(&puStack_138,uVar21,&uStack_13a);
            piVar8 = *(int **)(param_1 + 0x90);
            if (piVar8 != *(int **)(param_1 + 0x88)) {
              iVar26 = 0;
              cVar10 = *(char *)(param_3 + 4);
              lVar22 = *(long *)(param_1 + 0x28);
              piVar18 = *(int **)(param_1 + 0x88);
              do {
                puVar23 = *(uint **)(piVar18 + 8);
                for (puVar28 = *(uint **)(piVar18 + 6); puVar28 != puVar23; puVar28 = puVar28 + 3) {
                  uVar27 = (ulong)*puVar28;
                  uVar20 = puVar28[1];
                  uVar29 = (ulong)uVar20;
                  uVar9 = (ushort)iVar26;
                  if (cVar10 == '\x04') {
                    if (uVar20 != 0) {
                      lVar14 = uVar29 << 2;
                      puVar31 = (uint *)(lVar22 + uVar27 * 4);
                      do {
                        puStack_138[*puVar31] = uVar9;
                        lVar14 = lVar14 + -4;
                        puVar31 = puVar31 + 1;
                      } while (lVar14 != 0);
                    }
                  }
                  else if (cVar10 == '\x02') {
                    if (uVar20 != 0) {
                      lVar14 = uVar29 << 1;
                      puVar13 = (ushort *)(lVar22 + uVar27 * 2);
                      do {
                        puStack_138[*puVar13] = uVar9;
                        lVar14 = lVar14 + -2;
                        puVar13 = puVar13 + 1;
                      } while (lVar14 != 0);
                    }
                  }
                  else if ((cVar10 == '\x01') && (uVar20 != 0)) {
                    pbVar30 = (byte *)(lVar22 + uVar27);
                    do {
                      puStack_138[*pbVar30] = uVar9;
                      uVar29 = uVar29 - 1;
                      pbVar30 = pbVar30 + 1;
                    } while (uVar29 != 0);
                  }
                }
                piVar19 = piVar18 + 0xc;
                iVar26 = iVar26 + ((uint)(piVar18[2] - *piVar18) >> 2);
                piVar18 = piVar19;
              } while (piVar19 != piVar8);
            }
            if (uVar21 == 0) {
              if (puStack_138 == (ushort *)0x0) goto LAB_10ab52b2c;
            }
            else {
              uVar20 = *(uint *)(param_1 + 0xf0);
              pfVar25 = (float *)((ulong)*(ushort *)(param_3 + 2) + *(long *)(param_1 + 0x10) + 8);
              pfVar24 = (float *)(param_5 + 8);
              puVar13 = puStack_138;
              do {
                uVar9 = *puVar13;
                fVar43 = *pfVar24;
                fVar46 = pfVar25[-1];
                fVar40 = *pfVar25;
                fVar47 = pfVar25[1];
                fVar41 = fVar40 - (float)(int)fVar40;
                fVar37 = fVar47 - (float)(int)fVar47;
                pfVar3 = (float *)(puStack_e0 + (ulong)uVar9 * 8 + (long)(int)pfVar25[-2] * 8);
                fVar48 = pfVar3[2];
                fVar53 = pfVar3[6];
                fVar54 = pfVar3[10];
                fVar57 = pfVar3[0xe];
                pfVar4 = (float *)(puStack_e0 + (ulong)uVar9 * 8 + (long)(int)fVar46 * 8);
                fVar60 = pfVar4[2];
                fVar61 = pfVar4[6];
                fVar63 = pfVar4[10];
                fVar58 = pfVar4[0xe];
                puVar5 = puStack_e0 + (ulong)uVar9 * 8 + (long)(int)fVar40 * 8;
                fVar64 = *(float *)(puVar5 + 1);
                fVar65 = *(float *)(puVar5 + 3);
                fVar55 = *(float *)(puVar5 + 5);
                fVar49 = *(float *)(puVar5 + 7);
                puVar17 = puStack_e0 + (ulong)uVar9 * 8 + (long)(int)fVar47 * 8;
                fVar59 = *(float *)(puVar17 + 1);
                fVar56 = *(float *)(puVar17 + 3);
                fVar47 = *(float *)(puVar17 + 5);
                fVar50 = *(float *)(puVar17 + 7);
                fVar46 = fVar46 - (float)(int)fVar46;
                fVar51 = (float)*(undefined8 *)(pfVar24 + -2);
                fVar52 = (float)((ulong)*(undefined8 *)(pfVar24 + -2) >> 0x20);
                fVar40 = 1.0 - (fVar46 + fVar41 + fVar37);
                uVar62 = NEON_rev64(CONCAT44(fVar52 * pfVar3[4],fVar51 * pfVar4[1]),4);
                *(ulong *)(pfVar24 + -2) =
                     CONCAT44(fVar40 * (pfVar3[1] * fVar51 + pfVar3[5] * fVar52 +
                                       fVar43 * pfVar3[9] + pfVar3[0xd]) +
                              fVar46 * ((float)((ulong)uVar62 >> 0x20) + fVar52 * pfVar4[5] +
                                       pfVar4[9] * fVar43 + pfVar4[0xd]) +
                              ((float)((ulong)*puVar5 >> 0x20) * fVar51 +
                               (float)((ulong)puVar5[2] >> 0x20) * fVar52 +
                              (float)((ulong)puVar5[4] >> 0x20) * fVar43 +
                              (float)((ulong)puVar5[6] >> 0x20)) * fVar41 +
                              ((float)((ulong)*puVar17 >> 0x20) * fVar51 +
                               (float)((ulong)puVar17[2] >> 0x20) * fVar52 +
                              (float)((ulong)puVar17[4] >> 0x20) * fVar43 +
                              (float)((ulong)puVar17[6] >> 0x20)) * fVar37,
                              (*pfVar4 * fVar51 + pfVar4[4] * fVar52 +
                              fVar43 * pfVar4[8] + pfVar4[0xc]) * fVar46 +
                              fVar40 * ((float)uVar62 + fVar51 * *pfVar3 +
                                       pfVar3[8] * fVar43 + pfVar3[0xc]) +
                              ((float)*puVar5 * fVar51 + (float)puVar5[2] * fVar52 +
                              (float)puVar5[4] * fVar43 + (float)puVar5[6]) * fVar41 +
                              ((float)*puVar17 * fVar51 + (float)puVar17[2] * fVar52 +
                              (float)puVar17[4] * fVar43 + (float)puVar17[6]) * fVar37);
                *pfVar24 = fVar40 * (fVar48 * fVar51 + fVar53 * fVar52 + fVar43 * fVar54 + fVar57) +
                           fVar46 * (fVar60 * fVar51 + fVar61 * fVar52 + fVar43 * fVar63 + fVar58) +
                           fVar41 * (fVar64 * fVar51 + fVar65 * fVar52 + fVar43 * fVar55 + fVar49) +
                           fVar37 * (fVar59 * fVar51 + fVar56 * fVar52 + fVar43 * fVar47 + fVar50);
                pfVar25 = (float *)((long)pfVar25 + (ulong)uVar20);
                uVar21 = uVar21 - 1;
                pfVar24 = pfVar24 + 3;
                puVar13 = puVar13 + 1;
              } while (uVar21 != 0);
            }
            puStack_130 = puStack_138;
            __ZdlPv();
LAB_10ab52b2c:
            if (puStack_e0 != (undefined8 *)0x0) {
              puStack_d8 = puStack_e0;
              __ZdlPv(puStack_e0);
            }
            if (puStack_f8 != (undefined8 *)0x0) {
              puStack_f0 = puStack_f8;
              __ZdlPv();
            }
            return puStack_f8;
          }
          if (((lVar22 != 0) &&
              (lVar22 = lVar22 + (ulong)uVar20 * 0x38, *(int *)(lVar22 + 0x24) == 5)) &&
             (*(int *)(lVar22 + 0x28) == 4)) {
            uVar27 = (*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 5) *
                     -0x5555555555555555;
            iVar26 = *(int *)(lVar22 + 0x30);
            uVar21 = (ulong)uVar6;
            goto LAB_10ab52468;
          }
        }
        goto LAB_10ab52464;
      }
    }
    iVar26 = 0;
    uVar27 = 0;
  }
LAB_10ab52468:
  return (undefined8 *)((ulong)(uint)(iVar26 << 0x10) | uVar21 << 0x20 | uVar27 & 0xffff);
}



/* Entry: 10ab52538; end: 10ab52bc7;  */

void FUN_10ab52538(long param_1,long param_2,long param_3,int param_4,long param_5)

{
  ushort *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  uint uVar9;
  ushort uVar10;
  char cVar11;
  bool bVar12;
  code *pcVar13;
  ushort *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar18;
  int *piVar19;
  int *piVar20;
  uint *puVar21;
  int iVar22;
  float *pfVar23;
  float *pfVar24;
  uint *puVar25;
  ulong uVar26;
  byte *pbVar27;
  uint *puVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined2 uStack_12a;
  ushort *puStack_128;
  ushort *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plVar17;
  
  FUN_10a187130(&puStack_e8,
                (*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 5) * -0x5555555555555555);
  puVar5 = puStack_e8;
  lVar31 = *(long *)(param_1 + 0x58);
  lVar15 = *(long *)(param_1 + 0x60) - lVar31;
  if (lVar15 != 0) {
    lVar29 = 0;
    do {
      lVar33 = lVar31 + lVar29 * 0x60;
      lVar34 = param_2 + 0x1f0;
      FUN_10a063240(lVar34,lVar33);
      if (((lVar34 == 0) || (puVar14 = *(ushort **)(lVar34 + 0x38), puVar14 == (ushort *)0x0)) ||
         (__ZNSt3__119__shared_weak_count4lockEv(), puStack_120 = puVar14, puVar14 == (ushort *)0x0)
         ) {
LAB_10ab52698:
        puVar18 = puVar5 + lVar29 * 8;
        uVar35 = *(undefined8 *)(lVar33 + 0x28);
        uVar61 = *(undefined8 *)(lVar33 + 0x20);
        uVar38 = *(undefined8 *)(lVar33 + 0x38);
        uVar37 = *(undefined8 *)(lVar33 + 0x30);
        uVar41 = *(undefined8 *)(lVar33 + 0x40);
        uVar44 = *(undefined8 *)(lVar33 + 0x58);
        uVar43 = *(undefined8 *)(lVar33 + 0x50);
        puVar18[5] = *(undefined8 *)(lVar33 + 0x48);
        puVar18[4] = uVar41;
        puVar18[7] = uVar44;
        puVar18[6] = uVar43;
        puVar18[1] = uVar35;
        *puVar18 = uVar61;
        puVar18[3] = uVar38;
        puVar18[2] = uVar37;
      }
      else {
        puStack_128 = *(ushort **)(lVar34 + 0x30);
        if (puStack_128 == (ushort *)0x0) {
          puVar1 = puVar14 + 4;
          do {
            lVar34 = *(long *)puVar1;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar12) {
              *(long *)puVar1 = lVar34 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (lVar34 == 0) {
            (**(code **)(*(long *)puVar14 + 0x10))(puVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(puVar14);
          }
          goto LAB_10ab52698;
        }
        lVar34 = *(long *)(puStack_128 + 0xa0);
        if ((*(byte *)(lVar34 + 0x2a) & 0x24) != 0) {
          FUN_10a3e8fd4(lVar34);
        }
        func_0x000109519fd0(&puStack_d0,lVar34 + 0xc0,lVar33 + 0x20);
        plVar30 = puVar5 + lVar29 * 8;
        plVar30[5] = lStack_a8;
        plVar30[4] = lStack_b0;
        plVar30[7] = lStack_98;
        plVar30[6] = lStack_a0;
        plVar30[1] = (long)puStack_c8;
        *plVar30 = (long)puStack_d0;
        plVar30[3] = lStack_b8;
        plVar30[2] = lStack_c0;
        puVar1 = puVar14 + 4;
        do {
          lVar34 = *(long *)puVar1;
          cVar11 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar12) {
            *(long *)puVar1 = lVar34 + -1;
            cVar11 = ExclusiveMonitorsStatus();
          }
        } while (cVar11 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*(long *)puVar14 + 0x10))(puVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(puVar14);
        }
      }
      lVar29 = lVar29 + 1;
    } while (lVar29 != (lVar15 >> 5) * -0x5555555555555555);
  }
  if (param_4 == 1) {
    lVar31 = *(long *)(param_2 + 0x178);
    if ((*(byte *)(lVar31 + 0x2a) >> 6 & 1) != 0) {
      func_0x00010a3e933c(lVar31);
    }
    puVar5 = puStack_e0;
    puStack_c8 = *(undefined8 **)(lVar31 + 0x108);
    puStack_d0 = *(undefined8 **)(lVar31 + 0x100);
    lStack_b8 = *(long *)(lVar31 + 0x118);
    lStack_c0 = *(long *)(lVar31 + 0x110);
    lStack_a8 = *(long *)(lVar31 + 0x128);
    lStack_b0 = *(long *)(lVar31 + 0x120);
    lStack_98 = *(long *)(lVar31 + 0x138);
    lStack_a0 = *(long *)(lVar31 + 0x130);
    for (puVar18 = puStack_e8; puVar18 != puVar5; puVar18 = puVar18 + 8) {
      func_0x000109519fd0(&puStack_128,&puStack_d0,puVar18);
      puVar18[5] = uStack_100;
      puVar18[4] = uStack_108;
      puVar18[7] = uStack_f0;
      puVar18[6] = uStack_f8;
      puVar18[1] = puStack_120;
      *puVar18 = puStack_128;
      puVar18[3] = uStack_110;
      puVar18[2] = uStack_118;
    }
  }
  puVar5 = puStack_e8;
  plVar30 = *(long **)(param_1 + 0x88);
  plVar7 = *(long **)(param_1 + 0x90);
  if (plVar7 == plVar30) {
    puStack_d0 = (undefined8 *)0x0;
    puStack_c8 = (undefined8 *)0x0;
    lStack_c0 = 0;
  }
  else {
    lVar31 = 0;
    lVar15 = (long)puStack_e0 - (long)puStack_e8;
    plVar16 = plVar30;
    do {
      plVar17 = plVar16 + 6;
      lVar31 = lVar31 + (plVar16[1] - *plVar16 >> 2);
      plVar16 = plVar17;
    } while (plVar17 != plVar7);
    FUN_10a187130(&puStack_d0,lVar31);
    puVar18 = puStack_d0;
    do {
      puVar25 = (uint *)plVar30[1];
      puVar21 = (uint *)*plVar30;
      while (puVar21 != puVar25) {
        if ((ulong)(lVar15 >> 6) <= (ulong)*puVar21) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x10ab52b78);
          (*pcVar13)();
        }
        puVar2 = puVar5 + (ulong)*puVar21 * 8;
        uVar35 = puVar2[1];
        uVar61 = *puVar2;
        uVar38 = puVar2[3];
        uVar37 = puVar2[2];
        uVar41 = puVar2[4];
        uVar44 = puVar2[7];
        uVar43 = puVar2[6];
        puVar18[5] = puVar2[5];
        puVar18[4] = uVar41;
        puVar18[7] = uVar44;
        puVar18[6] = uVar43;
        puVar18[1] = uVar35;
        *puVar18 = uVar61;
        puVar18[3] = uVar38;
        puVar18[2] = uVar37;
        puVar18 = puVar18 + 8;
        puVar21 = puVar21 + 1;
      }
      plVar30 = plVar30 + 6;
    } while (plVar30 != plVar7);
  }
  uVar9 = *(uint *)(param_1 + 0xf0);
  if (uVar9 == 0) {
    uVar32 = 0;
  }
  else {
    uVar32 = 0;
    if ((ulong)uVar9 != 0) {
      uVar32 = (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) / (ulong)uVar9;
    }
    uVar32 = uVar32 & 0xffffffff;
  }
  uStack_12a = 0;
  FUN_10a7bbdc4(&puStack_128,uVar32,&uStack_12a);
  piVar8 = *(int **)(param_1 + 0x90);
  if (piVar8 != *(int **)(param_1 + 0x88)) {
    iVar22 = 0;
    cVar11 = *(char *)(param_3 + 4);
    lVar31 = *(long *)(param_1 + 0x28);
    piVar19 = *(int **)(param_1 + 0x88);
    do {
      puVar21 = *(uint **)(piVar19 + 8);
      for (puVar25 = *(uint **)(piVar19 + 6); puVar25 != puVar21; puVar25 = puVar25 + 3) {
        uVar6 = (ulong)*puVar25;
        uVar9 = puVar25[1];
        uVar26 = (ulong)uVar9;
        uVar10 = (ushort)iVar22;
        if (cVar11 == '\x04') {
          if (uVar9 != 0) {
            lVar15 = uVar26 << 2;
            puVar28 = (uint *)(lVar31 + uVar6 * 4);
            do {
              puStack_128[*puVar28] = uVar10;
              lVar15 = lVar15 + -4;
              puVar28 = puVar28 + 1;
            } while (lVar15 != 0);
          }
        }
        else if (cVar11 == '\x02') {
          if (uVar9 != 0) {
            lVar15 = uVar26 << 1;
            puVar14 = (ushort *)(lVar31 + uVar6 * 2);
            do {
              puStack_128[*puVar14] = uVar10;
              lVar15 = lVar15 + -2;
              puVar14 = puVar14 + 1;
            } while (lVar15 != 0);
          }
        }
        else if ((cVar11 == '\x01') && (uVar9 != 0)) {
          pbVar27 = (byte *)(lVar31 + uVar6);
          do {
            puStack_128[*pbVar27] = uVar10;
            uVar26 = uVar26 - 1;
            pbVar27 = pbVar27 + 1;
          } while (uVar26 != 0);
        }
      }
      piVar20 = piVar19 + 0xc;
      iVar22 = iVar22 + ((uint)(piVar19[2] - *piVar19) >> 2);
      piVar19 = piVar20;
    } while (piVar20 != piVar8);
  }
  if (uVar32 == 0) {
    if (puStack_128 == (ushort *)0x0) goto LAB_10ab52b2c;
  }
  else {
    uVar9 = *(uint *)(param_1 + 0xf0);
    pfVar24 = (float *)((ulong)*(ushort *)(param_3 + 2) + *(long *)(param_1 + 0x10) + 8);
    pfVar23 = (float *)(param_5 + 8);
    puVar14 = puStack_128;
    do {
      uVar10 = *puVar14;
      fVar42 = *pfVar23;
      fVar45 = pfVar24[-1];
      fVar39 = *pfVar24;
      fVar46 = pfVar24[1];
      fVar40 = fVar39 - (float)(int)fVar39;
      fVar36 = fVar46 - (float)(int)fVar46;
      pfVar3 = (float *)(puStack_d0 + (ulong)uVar10 * 8 + (long)(int)pfVar24[-2] * 8);
      fVar47 = pfVar3[2];
      fVar52 = pfVar3[6];
      fVar53 = pfVar3[10];
      fVar56 = pfVar3[0xe];
      pfVar4 = (float *)(puStack_d0 + (ulong)uVar10 * 8 + (long)(int)fVar45 * 8);
      fVar59 = pfVar4[2];
      fVar60 = pfVar4[6];
      fVar62 = pfVar4[10];
      fVar57 = pfVar4[0xe];
      puVar5 = puStack_d0 + (ulong)uVar10 * 8 + (long)(int)fVar39 * 8;
      fVar63 = *(float *)(puVar5 + 1);
      fVar64 = *(float *)(puVar5 + 3);
      fVar54 = *(float *)(puVar5 + 5);
      fVar48 = *(float *)(puVar5 + 7);
      puVar18 = puStack_d0 + (ulong)uVar10 * 8 + (long)(int)fVar46 * 8;
      fVar58 = *(float *)(puVar18 + 1);
      fVar55 = *(float *)(puVar18 + 3);
      fVar46 = *(float *)(puVar18 + 5);
      fVar49 = *(float *)(puVar18 + 7);
      fVar45 = fVar45 - (float)(int)fVar45;
      fVar50 = (float)*(undefined8 *)(pfVar23 + -2);
      fVar51 = (float)((ulong)*(undefined8 *)(pfVar23 + -2) >> 0x20);
      fVar39 = 1.0 - (fVar45 + fVar40 + fVar36);
      uVar61 = NEON_rev64(CONCAT44(fVar51 * pfVar3[4],fVar50 * pfVar4[1]),4);
      *(ulong *)(pfVar23 + -2) =
           CONCAT44(fVar39 * (pfVar3[1] * fVar50 + pfVar3[5] * fVar51 +
                             fVar42 * pfVar3[9] + pfVar3[0xd]) +
                    fVar45 * ((float)((ulong)uVar61 >> 0x20) + fVar51 * pfVar4[5] +
                             pfVar4[9] * fVar42 + pfVar4[0xd]) +
                    ((float)((ulong)*puVar5 >> 0x20) * fVar50 +
                     (float)((ulong)puVar5[2] >> 0x20) * fVar51 +
                    (float)((ulong)puVar5[4] >> 0x20) * fVar42 + (float)((ulong)puVar5[6] >> 0x20))
                    * fVar40 +
                    ((float)((ulong)*puVar18 >> 0x20) * fVar50 +
                     (float)((ulong)puVar18[2] >> 0x20) * fVar51 +
                    (float)((ulong)puVar18[4] >> 0x20) * fVar42 + (float)((ulong)puVar18[6] >> 0x20)
                    ) * fVar36,
                    (*pfVar4 * fVar50 + pfVar4[4] * fVar51 + fVar42 * pfVar4[8] + pfVar4[0xc]) *
                    fVar45 + fVar39 * ((float)uVar61 + fVar50 * *pfVar3 +
                                      pfVar3[8] * fVar42 + pfVar3[0xc]) +
                    ((float)*puVar5 * fVar50 + (float)puVar5[2] * fVar51 +
                    (float)puVar5[4] * fVar42 + (float)puVar5[6]) * fVar40 +
                    ((float)*puVar18 * fVar50 + (float)puVar18[2] * fVar51 +
                    (float)puVar18[4] * fVar42 + (float)puVar18[6]) * fVar36);
      *pfVar23 = fVar39 * (fVar47 * fVar50 + fVar52 * fVar51 + fVar42 * fVar53 + fVar56) +
                 fVar45 * (fVar59 * fVar50 + fVar60 * fVar51 + fVar42 * fVar62 + fVar57) +
                 fVar40 * (fVar63 * fVar50 + fVar64 * fVar51 + fVar42 * fVar54 + fVar48) +
                 fVar36 * (fVar58 * fVar50 + fVar55 * fVar51 + fVar42 * fVar46 + fVar49);
      pfVar24 = (float *)((long)pfVar24 + (ulong)uVar9);
      uVar32 = uVar32 - 1;
      pfVar23 = pfVar23 + 3;
      puVar14 = puVar14 + 1;
    } while (uVar32 != 0);
  }
  puStack_120 = puStack_128;
  __ZdlPv();
LAB_10ab52b2c:
  if (puStack_d0 != (undefined8 *)0x0) {
    puStack_c8 = puStack_d0;
    __ZdlPv(puStack_d0);
  }
  if (puStack_e8 != (undefined8 *)0x0) {
    puStack_e0 = puStack_e8;
    __ZdlPv();
  }
  return;
}



/* Entry: 10ab52bc8; end: 10ab52c1f;  */

void FUN_10ab52bc8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_160 [320];
  
  FUN_10a0f6d8c(auStack_160,param_2,0);
  FUN_10ab52c20(param_1,auStack_160);
  func_0x00010a0f618c(auStack_160);
  return;
}



/* Entry: 10ab52c20; end: 10ab53563;  */

void FUN_10ab52c20(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  bool bVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  float fVar23;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_100;
  long lStack_f8;
  byte bStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  
  FUN_10ab53564(&lStack_118,param_2,&PTR_DAT_110c4a5d0);
  if (0x5555555555555555 < (ulong)((lStack_110 - lStack_118 >> 1) * -0x5555555555555555)) {
    FUN_10a00946c(&UNK_10f6921f0);
LAB_10ab53480:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab53484);
    (*pcVar3)();
  }
  FUN_10ab53564(&lStack_130,param_2,&PTR_DAT_110c4a5f0);
  if ((((uint)(lStack_128 - lStack_130) >> 1 & 1) != 0) ||
     ((ulong)(lStack_110 - lStack_118 >> 1) / 3 != (ulong)(lStack_128 - lStack_130 >> 1) >> 1)) {
    FUN_10a00946c(&UNK_10f6921f0);
    goto LAB_10ab53480;
  }
  (**(code **)(*param_2 + 0x1d8))(&uStack_100,param_2,&PTR_DAT_110c4a610);
  if ((bStack_f0 & 1) == 0) {
    uStack_d8 = CONCAT17(9,(undefined7)uStack_d8);
    lStack_e8 = 0x65646e4974726170;
    lStack_e0 = CONCAT62(lStack_e0._2_6_,0x78);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&lStack_d0,&UNK_10f6854a8,&lStack_e8);
    FUN_10a012db0(&lStack_b0,&lStack_d0,&UNK_10f63cc0e);
    FUN_10a0029c0(&lStack_b0);
    goto LAB_10ab53480;
  }
  if (lStack_f8 == 0) {
    uVar7 = 0;
    lStack_148 = 0;
    lStack_140 = 0;
    uStack_138 = 0;
  }
  else {
    FUN_10a0dc020(&lStack_148);
    if ((bStack_f0 & 1) == 0) goto LAB_10ab53480;
    _memcpy(lStack_148,uStack_100,lStack_f8);
    uVar7 = lStack_140 - lStack_148;
  }
  if (uVar7 != (ulong)(lStack_110 - lStack_118 >> 1) / 3) {
    FUN_10a00946c(&UNK_10f6921f0);
    goto LAB_10ab53480;
  }
  lStack_d0 = 0;
  lStack_c8 = 0;
  lStack_c0 = 0;
  plVar18 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c4a630);
  if ((int)plVar18 == 0) {
    lStack_b0 = CONCAT62(lStack_b0._2_6_,1);
    FUN_10a7bb0d0(&lStack_d0,(ulong)(lStack_110 - lStack_118 >> 1) / 3,&lStack_b0);
  }
  else {
    FUN_10ab53564(&lStack_b0,param_2,&PTR_DAT_110c4a630);
    if (lStack_d0 != 0) {
      lStack_c8 = lStack_d0;
      __ZdlPv();
    }
    lStack_c8 = lStack_a8;
    lStack_d0 = lStack_b0;
    lStack_c0 = lStack_a0;
  }
  lStack_e8 = 0;
  lStack_e0 = 0;
  uStack_d8 = 0;
  plVar18 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c4a650);
  if ((int)plVar18 == 0) {
    lStack_b0 = CONCAT62(lStack_b0._2_6_,0xffff);
    FUN_10a7bb0d0(&lStack_e8,(ulong)(lStack_110 - lStack_118 >> 1) / 3,&lStack_b0);
  }
  else {
    FUN_10ab53564(&lStack_b0,param_2,&PTR_DAT_110c4a650);
    if (lStack_e8 != 0) {
      lStack_e0 = lStack_e8;
      __ZdlPv();
    }
    lStack_e8 = lStack_b0;
    uStack_d8 = lStack_a0;
    lStack_e0 = lStack_a8;
    if ((ulong)(lStack_110 - lStack_118 >> 1) / 3 != lStack_a8 - lStack_b0 >> 1) {
      FUN_10a00946c(&UNK_10f6921f0);
      goto LAB_10ab53480;
    }
  }
  plVar18 = (long *)(param_1 + 0x10);
  lVar9 = *plVar18;
  plVar20 = *(long **)(param_1 + 0x18);
  uVar8 = lStack_c8 - lStack_d0 >> 1;
  lVar12 = (long)plVar20 - lVar9 >> 3;
  bVar4 = (ulong)(lVar12 * -0x5555555555555555) <= uVar8;
  uVar7 = uVar8 + lVar12 * 0x5555555555555555;
  if (bVar4 && uVar7 != 0) {
    if ((ulong)((*(long *)(param_1 + 0x20) - (long)plVar20 >> 3) * -0x5555555555555555) < uVar7) {
      if (uVar8 < 0xaaaaaaaaaaaaaab) {
        lVar12 = *(long *)(param_1 + 0x20) - lVar9 >> 3;
        uVar13 = lVar12 * 0x5555555555555556;
        if (uVar13 < uVar8 || uVar13 - uVar8 == 0) {
          uVar13 = uVar8;
        }
        if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
          uVar13 = 0xaaaaaaaaaaaaaaa;
        }
        plVar21 = plVar18;
        plStack_90 = plVar18;
        FUN_10a7fe504();
        lVar9 = (long)plVar21 + ((long)plVar20 - lVar9);
        lVar19 = ((uVar7 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
        _bzero(lVar9,lVar19);
        lVar12 = lVar9 - (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
        _memcpy(lVar12);
        lStack_b0 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar12;
        *(long *)(param_1 + 0x18) = lVar9 + lVar19;
        uStack_98 = *(undefined8 *)(param_1 + 0x20);
        *(long **)(param_1 + 0x20) = plVar21 + uVar13 * 3;
        lStack_a8 = lStack_b0;
        lStack_a0 = lStack_b0;
        func_0x00010a7fe548(&lStack_b0);
        plVar20 = *(long **)(param_1 + 0x18);
        goto LAB_10ab53020;
      }
      FUN_10a7fe4f0();
      goto LAB_10ab53480;
    }
    uVar7 = (uVar7 * 0x18 - 0x18) / 0x18;
    _bzero(plVar20,uVar7 * 0x18 + 0x18);
    plVar20 = plVar20 + uVar7 * 3 + 3;
  }
  else {
    if (bVar4) goto LAB_10ab53020;
    plVar21 = (long *)(lVar9 + uVar8 * 0x18);
    while (plVar2 = plVar20, plVar20 = plVar21, plVar2 != plVar21) {
      plVar20 = plVar2 + -3;
      if (*plVar20 != 0) {
        plVar2[-2] = *plVar20;
        __ZdlPv();
      }
    }
  }
  *(long **)(param_1 + 0x18) = plVar20;
LAB_10ab53020:
  plVar18 = (long *)*plVar18;
  if (plVar20 != plVar18) {
    uVar8 = 0;
    uVar7 = 0;
    do {
      if ((ulong)(lStack_c8 - lStack_d0 >> 1) <= uVar8) goto LAB_10ab53480;
      uVar13 = (ulong)*(ushort *)(lStack_d0 + uVar8 * 2);
      if (((ulong)(lStack_110 - lStack_118 >> 1) / 3 < uVar7 + uVar13) ||
         ((ulong)(lStack_128 - lStack_130 >> 1) >> 1 < uVar7 + uVar13)) {
        FUN_10a00946c(&UNK_10f6921f0);
        goto LAB_10ab53480;
      }
      plVar18 = plVar18 + uVar8 * 3;
      lVar9 = *plVar18;
      puVar10 = (undefined8 *)plVar18[1];
      lVar19 = (long)puVar10 - lVar9;
      lVar12 = lVar19 >> 2;
      bVar4 = uVar13 < (ulong)(lVar12 * 0x6db6db6db6db6db7);
      uVar14 = uVar13 + lVar12 * -0x6db6db6db6db6db7;
      if (bVar4 || uVar14 == 0) {
        if (bVar4) {
          plVar18[1] = lVar9 + uVar13 * 0x1c;
        }
      }
      else if ((ulong)((plVar18[2] - (long)puVar10 >> 2) * 0x6db6db6db6db6db7) < uVar14) {
        lVar9 = plVar18[2] - lVar9 >> 2;
        uVar11 = lVar9 * -0x2492492492492492;
        if (uVar11 < uVar13 || uVar11 - uVar13 == 0) {
          uVar11 = uVar13;
        }
        if (0x492492492492491 < (ulong)(lVar9 * 0x6db6db6db6db6db7)) {
          uVar11 = 0x924924924924924;
        }
        plVar20 = plVar18;
        FUN_10a7fe4a8();
        lVar9 = 0;
        do {
          puVar10 = (undefined8 *)((long)plVar20 + lVar9 + lVar19);
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0xffffffffffff;
          *(undefined4 *)(puVar10 + 3) = 0x3f800000;
          lVar9 = lVar9 + 0x1c;
        } while (uVar13 * 0x1c + lVar12 * -4 != lVar9);
        lVar12 = (long)plVar20 + (lVar19 - (plVar18[1] - *plVar18));
        _memcpy(lVar12);
        lVar9 = *plVar18;
        *plVar18 = lVar12;
        plVar18[1] = (long)plVar20 + (uVar14 & 0xffffffff) * 0x1c + lVar19;
        plVar18[2] = (long)plVar20 + uVar11 * 0x1c;
        if (lVar9 != 0) {
          __ZdlPv();
        }
      }
      else {
        lVar19 = (long)puVar10 + (uVar14 & 0xffffffff) * 0x1c;
        lVar9 = uVar13 * 0x1c + lVar12 * -4;
        do {
          puVar10[1] = 0;
          puVar10[2] = 0;
          *puVar10 = 0xffffffffffff;
          *(undefined4 *)(puVar10 + 3) = 0x3f800000;
          puVar10 = (undefined8 *)((long)puVar10 + 0x1c);
          lVar9 = lVar9 + -0x1c;
        } while (lVar9 != 0);
        plVar18[1] = lVar19;
      }
      if ((ulong)(lStack_c8 - lStack_d0 >> 1) <= uVar8) goto LAB_10ab53480;
      uVar14 = lStack_e0 - lStack_e8 >> 1;
      uVar13 = 0;
      if (uVar7 <= (ulong)(lStack_140 - lStack_148)) {
        uVar13 = (lStack_140 - lStack_148) - uVar7;
      }
      uVar11 = 0;
      if (uVar7 <= uVar14) {
        uVar11 = uVar14 - uVar7;
      }
      plVar18 = *(long **)(param_1 + 0x10);
      uVar14 = (*(long *)(param_1 + 0x18) - (long)plVar18 >> 3) * -0x5555555555555555;
      if (*(short *)(lStack_d0 + uVar8 * 2) != 0) {
        if (uVar14 < uVar8 || uVar14 - uVar8 == 0) goto LAB_10ab53480;
        uVar15 = 0;
        lVar19 = plVar18[uVar8 * 3];
        lVar1 = (plVar18 + uVar8 * 3)[1];
        lVar12 = lStack_118 + uVar7 * 6;
        uVar5 = uVar7 * 3;
        lVar9 = lVar19;
        do {
          if (uVar15 == (lVar1 - lVar19 >> 2) * 0x6db6db6db6db6db7) goto LAB_10ab53480;
          lVar16 = 0;
          lVar6 = lVar19 + uVar15 * 0x1c;
          uVar22 = uVar5;
          do {
            if ((ulong)(lStack_110 - lStack_118 >> 1) <= uVar22) goto LAB_10ab53480;
            *(undefined2 *)(lVar9 + lVar16) = *(undefined2 *)(lVar12 + lVar16);
            lVar16 = lVar16 + 2;
            uVar22 = uVar22 + 1;
          } while (lVar16 != 6);
          uVar22 = 0;
          lVar16 = 8;
          bVar4 = true;
          do {
            bVar17 = bVar4;
            uVar22 = uVar22 | uVar7 << 1;
            if ((ulong)(lStack_128 - lStack_130 >> 1) <= uVar22) goto LAB_10ab53480;
            fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(lStack_130 + uVar22 * 2));
            *(float *)(lVar6 + lVar16) = fVar23 / 65535.0;
            lVar16 = 0xc;
            uVar22 = 1;
            bVar4 = false;
          } while (bVar17);
          *(float *)(lVar6 + 0x10) = (1.0 - *(float *)(lVar6 + 8)) - *(float *)(lVar6 + 0xc);
          if ((uVar15 == uVar13) ||
             (*(uint *)(lVar6 + 0x14) = (uint)*(byte *)(lStack_148 + uVar7), uVar15 == uVar11))
          goto LAB_10ab53480;
          fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(lStack_e8 + uVar7 * 2));
          *(float *)(lVar6 + 0x18) = fVar23 / 65535.0;
          uVar7 = uVar7 + 1;
          uVar15 = uVar15 + 1;
          lVar9 = lVar9 + 0x1c;
          lVar12 = lVar12 + 6;
          uVar5 = uVar5 + 3;
        } while (uVar15 < *(ushort *)(lStack_d0 + uVar8 * 2));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar14);
  }
  if (lStack_e8 != 0) {
    lStack_e0 = lStack_e8;
    __ZdlPv();
  }
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  if (lStack_118 != 0) {
    lStack_110 = lStack_118;
    __ZdlPv();
  }
  return;
}



/* Entry: 10ab53564; end: 10ab536bf;  */

void FUN_10ab53564(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uStack_80;
  ulong uStack_78;
  byte bStack_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (**(code **)(*param_2 + 0x1d8))(&uStack_80,param_2,param_3);
  if (bStack_70 == 1) {
    if ((uStack_78 & 1) == 0) {
      if (uStack_78 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      else {
        FUN_10a40944c(param_1,uStack_78 >> 1);
        if ((bStack_70 & 1) == 0) goto LAB_10ab53664;
        _memcpy(*param_1,uStack_80,uStack_78);
      }
      return;
    }
    FUN_109ffe064(auStack_68,*param_3,param_3[1]);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,auStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f6854b4);
    FUN_10a0029c0(auStack_38);
  }
  else {
    FUN_109ffe064(auStack_68,*param_3,param_3[1]);
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (auStack_50,&UNK_10f6854a8,auStack_68);
    FUN_10a012db0(auStack_38,auStack_50,&UNK_10f63cc0e);
    FUN_10a0029c0(auStack_38);
  }
LAB_10ab53664:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab53668);
  (*pcVar1)();
}



/* Entry: 10ab536c0; end: 10ab53a6b;  */

void FUN_10ab536c0(long param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined2 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_70;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  long lStack_58;
  undefined2 *puStack_48;
  undefined2 *puStack_40;
  
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_s_version_110c4a670,1);
  uStack_60 = 0;
  FUN_10a7bbdc4(&puStack_48,
                (*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3) * -0x5555555555555555,
                &uStack_60);
  lVar13 = 0;
  lVar6 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    lVar6 = (lVar6 >> 3) * -0x5555555555555555;
    lVar9 = (long)puStack_40 - (long)puStack_48 >> 1;
    plVar7 = (long *)(*(long *)(param_1 + 0x10) + 8);
    puVar8 = puStack_48;
    do {
      if (lVar9 == 0) {
LAB_10ab539ec:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab539f0);
        (*pcVar3)();
      }
      lVar11 = (*plVar7 - plVar7[-1] >> 2) * 0x6db6db6db6db6db7;
      *puVar8 = (short)lVar11;
      lVar13 = lVar11 + lVar13;
      plVar7 = plVar7 + 3;
      lVar9 = lVar9 + -1;
      lVar6 = lVar6 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar6 != 0);
  }
  FUN_10a40944c(&uStack_60,lVar13 * 3);
  FUN_10a40944c(&lStack_78,lVar13 << 1);
  FUN_10a0dc020(&lStack_90,lVar13);
  FUN_10a40944c(&lStack_a8,lVar13);
  plVar7 = *(long **)(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar7 != plVar1) {
    uVar10 = 0;
    do {
      lVar13 = *plVar7;
      lVar6 = plVar7[1];
      if (lVar13 != lVar6) {
        uVar12 = uVar10 * 3;
        lVar9 = uVar10 * 6;
        do {
          lVar11 = 0;
          uVar5 = uVar12;
          do {
            if ((ulong)(lStack_58 - CONCAT62(uStack_5e,uStack_60) >> 1) <= uVar5)
            goto LAB_10ab539ec;
            *(undefined2 *)(CONCAT62(uStack_5e,uStack_60) + lVar9 + lVar11) =
                 *(undefined2 *)(lVar13 + lVar11);
            lVar11 = lVar11 + 2;
            uVar5 = uVar5 + 1;
          } while (lVar11 != 6);
          uVar5 = 0;
          lVar11 = 8;
          bVar2 = true;
          do {
            bVar4 = bVar2;
            uVar5 = uVar5 | uVar10 << 1;
            if ((ulong)(lStack_70 - lStack_78 >> 1) <= uVar5) goto LAB_10ab539ec;
            fVar14 = 1.0;
            if (*(float *)(lVar13 + lVar11) <= 1.0) {
              fVar14 = *(float *)(lVar13 + lVar11);
            }
            fVar15 = 0.0;
            if (0.0 <= fVar14) {
              fVar15 = fVar14;
            }
            *(short *)(lStack_78 + uVar5 * 2) = (short)(int)(fVar15 * 65535.0);
            lVar11 = 0xc;
            uVar5 = 1;
            bVar2 = false;
          } while (bVar4);
          if (((ulong)(lStack_88 - lStack_90) <= uVar10) ||
             (*(char *)(lStack_90 + uVar10) = (char)*(undefined4 *)(lVar13 + 0x14),
             (ulong)(lStack_a0 - lStack_a8 >> 1) <= uVar10)) goto LAB_10ab539ec;
          fVar14 = 1.0;
          if (*(float *)(lVar13 + 0x18) <= 1.0) {
            fVar14 = *(float *)(lVar13 + 0x18);
          }
          fVar15 = 0.0;
          if (0.0 <= fVar14) {
            fVar15 = fVar14;
          }
          *(short *)(lStack_a8 + uVar10 * 2) = (short)(int)(fVar15 * 65535.0);
          uVar10 = uVar10 + 1;
          lVar13 = lVar13 + 0x1c;
          lVar9 = lVar9 + 6;
          uVar12 = uVar12 + 3;
        } while (lVar13 != lVar6);
      }
      plVar7 = plVar7 + 3;
    } while (plVar7 != plVar1);
  }
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110c4a5d0,CONCAT62(uStack_5e,uStack_60),
             lStack_58 - CONCAT62(uStack_5e,uStack_60));
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110c4a5f0,lStack_78,lStack_70 - lStack_78);
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110c4a610,lStack_90,lStack_88 - lStack_90);
  (**(code **)(*param_2 + 0x28))
            (param_2,&PTR_DAT_110c4a630,puStack_48,(long)puStack_40 - (long)puStack_48);
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110c4a650,lStack_a8,lStack_a0 - lStack_a8);
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  if (CONCAT62(uStack_5e,uStack_60) != 0) {
    lStack_58 = CONCAT62(uStack_5e,uStack_60);
    __ZdlPv();
  }
  if (puStack_48 != (undefined2 *)0x0) {
    puStack_40 = puStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10ab53a6c; end: 10ab53ac3;  */

void FUN_10ab53a6c(undefined8 *param_1)

{
  *(undefined1 *)((long)param_1 + 0x17) = 0x13;
  *(undefined4 *)((long)param_1 + 0xf) = 0x74657373;
  param_1[1] = 0x7341617461447269;
  *param_1 = 0x61482e7465737341;
  *(undefined1 *)((long)param_1 + 0x13) = 0;
  return;
}



/* Entry: 10ab53ac4; end: 10ab53b2b;  */

long FUN_10ab53ac4(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10ab53b2c; end: 10ab53b3b;  */

undefined8 * FUN_10ab53b2c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110b17898;
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



/* Entry: 10ab53b3c; end: 10ab53b6b;  */

void FUN_10ab53b3c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1 + -2);
  return;
}



/* Entry: 10ab53b6c; end: 10ab53b73;  */

undefined8 FUN_10ab53b6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10ab53b74; end: 10ab5434f;  */

undefined8 * FUN_10ab53b74(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10ab54350; end: 10ab54363;  */

long FUN_10ab54350(long param_1)

{
  return param_1 + 0x170;
}



/* Entry: 10ab54364; end: 10ab5451f;  */

undefined8 * FUN_10ab54364(undefined8 *param_1)

{
  FUN_10a190b28(param_1 + 0x43);
  param_1[0x1a] = &PTR_FUN_110bab1b0;
  param_1[0x2c] = &PTR_DAT_110bab1e0;
  FUN_10a1c0a9c(param_1 + 0x1a);
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10ab54520; end: 10ab54523;  */

void FUN_10ab54520(void)

{
  return;
}



/* Entry: 10ab54524; end: 10ab5462b;  */

undefined8 * FUN_10ab54524(undefined8 *param_1)

{
  FUN_10a190b28(param_1 + 0x17);
  param_1[-0x12] = &PTR_FUN_110bab1b0;
  *param_1 = &PTR_DAT_110bab1e0;
  FUN_10a1c0a9c();
  param_1[-0x2e] = &PTR_FUN_110c3ec18;
  param_1[-0x2c] = &PTR_DAT_110c3ecb8;
  param_1[-0x27] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + -0x14);
  if (param_1[-0x15] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + -0x1e);
  if (param_1[-0x1f] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + -0x101) < '\0') {
    __ZdlPv(param_1[-0x23]);
  }
  if (param_1[-0x28] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x2c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x2b);
  return param_1 + -0x2e;
}



/* Entry: 10ab5462c; end: 10ab5469b;  */

void FUN_10ab5462c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10ab5469c();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10ab5469c; end: 10ab5471b;  */

long FUN_10ab5469c(long param_1)

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



/* Entry: 10ab5471c; end: 10ab54777;  */

void FUN_10ab5471c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110c4a920;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  lVar4 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar4;
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
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar5;
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



/* Entry: 10ab54778; end: 10ab5484f;  */

long FUN_10ab54778(long param_1)

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



/* Entry: 10ab54850; end: 10ab548ab;  */

void FUN_10ab54850(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110c4a938;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  lVar4 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar4;
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
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar5;
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



/* Entry: 10ab548ac; end: 10ab5492b;  */

long FUN_10ab548ac(long param_1)

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



/* Entry: 10ab5492c; end: 10ab54987;  */

void FUN_10ab5492c(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_DAT_110c4a950;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  lVar4 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar4;
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
  lVar4 = *(long *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = uVar5;
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



/* Entry: 10ab54988; end: 10ab54bfb;  */

void FUN_10ab54988(undefined ******param_1,undefined ******param_2)

{
  undefined *****pppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined ****ppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined ******ppppppuVar9;
  undefined ****ppppuVar10;
  undefined *****pppppuVar11;
  undefined ******unaff_x21;
  undefined8 *puStack_130;
  undefined **ppuStack_128;
  int aiStack_120 [2];
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined ****ppppuStack_100;
  undefined ****ppppuStack_f8;
  undefined1 *puStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined ****ppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ****ppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ****ppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 == (undefined ******)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    ppppppuVar6 = param_1;
    ppppppuVar9 = param_2;
    if ((param_1 == (undefined ******)0x0) || (*(char *)(param_1 + 8) != '\x01'))
    goto LAB_10ab54b74;
    pppppuVar11 = *param_1;
    pppppuStack_78 = param_2[1];
    ppppuStack_80 = (undefined ****)*param_2;
    if (param_2[1] != (undefined *****)0x0) {
      pppppuVar1 = param_2[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppppuVar6 = (undefined ******)&ppppuStack_80;
    ppppppuVar9 = param_1;
    (*(code *)pppppuVar11)();
    if ((undefined ******)pppppuStack_78 == (undefined ******)0x0) goto LAB_10ab54b74;
    ppppppuVar7 = (undefined ******)(pppppuStack_78 + 1);
    do {
      pppppuVar11 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar8 = (undefined ******)pppppuStack_78;
    } while (cVar2 != '\0');
  }
  else {
    unaff_x21 = param_1;
    ppppppuVar7 = param_2;
    FUN_10a688b40();
    if (unaff_x21 != (undefined ******)0x0) {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      ppppppuVar6 = (undefined ******)*param_1;
      FUN_10ab54bfc();
      iVar4 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar4;
      ppppppuVar9 = param_2;
      if (iVar4 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
      goto LAB_10ab54b74;
    }
    ppppppuVar6 = (undefined ******)0x0;
    ppppppuVar9 = (undefined ******)0x0;
    if (ppppppuVar7 == (undefined ******)0x0) goto LAB_10ab54b74;
    ppppuStack_68 = (undefined ****)param_1[1];
    ppppuStack_70 = (undefined ****)*param_1;
    if (param_1[1] != (undefined *****)0x0) {
      pppppuVar11 = param_1[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar11,0x10);
        if (bVar3) {
          *pppppuVar11 = (undefined ****)((long)*pppppuVar11 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_90 = (undefined ****)*param_2;
    ppppppuVar7 = (undefined ******)param_2[1];
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppppuStack_80 = (undefined ****)FUN_10ab54e00;
    pppppuStack_78 = (undefined *****)&PTR_FUN_110c4a968;
    ppppuStack_a0 = (undefined ****)0x0;
    pppppuStack_98 = (undefined *****)0x0;
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar3) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    unaff_x21 = (undefined ******)&ppppuStack_80;
    ppppppuVar9 = (undefined ******)&ppppuStack_80;
    pppppuStack_88 = (undefined *****)ppppppuVar7;
    ppppuStack_60 = ppppuStack_90;
    pppppuStack_58 = (undefined *****)ppppppuVar7;
    FUN_10a4634ec();
    ppppppuVar6 = &pppppuStack_78;
    (*(code *)*pppppuStack_78)();
    if (ppppppuVar7 != (undefined ******)0x0) {
      ppppppuVar8 = ppppppuVar7 + 1;
      do {
        pppppuVar11 = *ppppppuVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar8,0x10);
        if (bVar3) {
          *ppppppuVar8 = (undefined *****)((long)pppppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppppuVar11 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar6 = ppppppuVar7;
      }
    }
    param_1 = (undefined ******)&ppppuStack_a0;
    if ((undefined ******)pppppuStack_98 == (undefined ******)0x0) goto LAB_10ab54b74;
    ppppppuVar7 = (undefined ******)(pppppuStack_98 + 1);
    do {
      pppppuVar11 = *ppppppuVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar3) {
        *ppppppuVar7 = (undefined *****)((long)pppppuVar11 + -1);
        cVar2 = ExclusiveMonitorsStatus();
      }
      ppppppuVar8 = (undefined ******)pppppuStack_98;
      param_1 = (undefined ******)&ppppuStack_a0;
    } while (cVar2 != '\0');
  }
  if (pppppuVar11 == (undefined *****)0x0) {
    (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    ppppppuVar6 = ppppppuVar8;
  }
LAB_10ab54b74:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*pppppuStack_78)(unaff_x21 + 1);
    FUN_10ab5469c(param_1 + 2);
    func_0x00010a004dac(&ppppuStack_a0);
    __Unwind_Resume();
    func_0x000109884c0c(&ppppuStack_100,ppppppuVar6 + 1,*ppppppuVar6);
    func_0x000109884820(&ppuStack_128,&ppppuStack_100,*ppppppuVar6);
    if (ppppuStack_100 != (undefined ****)0x0) {
      (*(code *)**ppppuStack_100)();
    }
    (*(code *)(**ppppppuVar6)[6])(&puStack_130);
    pppppuVar11 = *ppppppuVar6;
    ppppuStack_f8 = (undefined ****)ppppppuVar9[1];
    ppppuStack_100 = (undefined ****)*ppppppuVar9;
    if (ppppppuVar9[1] != (undefined *****)0x0) {
      pppppuVar1 = ppppppuVar9[1] + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuStack_e0 = &PTR_DAT_110c4a758;
    func_0x000109899de4(&puStack_110,pppppuVar11,&ppppuStack_100,&ppuStack_e0,0,0);
    ppppuVar5 = ppppuStack_f8;
    if ((undefined *****)ppppuStack_f8 != (undefined *****)0x0) {
      pppppuVar1 = (undefined *****)(ppppuStack_f8 + 1);
      do {
        ppppuVar10 = *pppppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
        if (bVar3) {
          *pppppuVar1 = (undefined ****)((long)ppppuVar10 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppuVar10 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_f8)[2])(ppppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar5);
      }
    }
    uStack_d8 = 1;
    ppuStack_e0 = &puStack_110;
    (*(code *)(*pppppuVar11)[0xb])(pppppuVar11);
    ppppuStack_100 = (undefined ****)&ppuStack_128;
    ppppuStack_f8 = (undefined ****)pppppuVar11;
    puStack_f0 = (undefined1 *)&puStack_130;
    pppuStack_e8 = &ppuStack_e0;
    func_0x0001098960c0(aiStack_120);
    if ((3 < aiStack_120[0]) && (puStack_118 != (undefined8 *)0x0)) {
      (**(code **)*puStack_118)();
    }
    if ((3 < (int)puStack_110) && (puStack_108 != (undefined8 *)0x0)) {
      (**(code **)*puStack_108)();
    }
    if (puStack_130 != (undefined8 *)0x0) {
      (**(code **)*puStack_130)();
    }
    if ((undefined ***)ppuStack_128 != (undefined ***)0x0) {
      (**(code **)*ppuStack_128)();
    }
    return;
  }
  return;
}



/* Entry: 10ab54bfc; end: 10ab54dff;  */

void FUN_10ab54bfc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar6 = (long *)*param_1;
  plStack_58 = (long *)param_2[1];
  ppuStack_60 = (undefined8 **)*param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c4a758;
  func_0x000109899de4(&puStack_70,plVar6,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar6 + 0x58))(plVar6);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar6;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10ab54e00; end: 10ab54e0f;  */

void FUN_10ab54e00(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined ***pppuStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar5 + 1,*puVar5);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar5);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar5 + 0x30))(&puStack_90);
  plVar7 = (long *)*puVar5;
  plStack_58 = *(long **)(param_1 + 0x28);
  ppuStack_60 = *(undefined8 ***)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_40 = &PTR_DAT_110c4a758;
  func_0x000109899de4(&puStack_70,plVar7,&ppuStack_60,&ppuStack_40,0,0);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar2 = plStack_58 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  uStack_38 = 1;
  ppuStack_40 = &puStack_70;
  (**(code **)(*plVar7 + 0x58))(plVar7);
  ppuStack_60 = &puStack_88;
  plStack_58 = plVar7;
  puStack_50 = (undefined1 *)&puStack_90;
  pppuStack_48 = &ppuStack_40;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < (int)puStack_70) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10ab54e10; end: 10ab54e37;  */

long FUN_10ab54e10(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_10ab5469c(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10ab54e38; end: 10ab54e87;  */

void FUN_10ab54e38(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110c4a968;
  uVar5 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar5;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  lVar4 = *(long *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar5;
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



/* Entry: 10ab54e88; end: 10ab54ea7;  */

void FUN_10ab54e88(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c4a990;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab54ea8; end: 10ab54eb7;  */

void FUN_10ab54ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab54eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ab54eb8; end: 10ab54f0f;  */

long FUN_10ab54eb8(long param_1)

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



/* Entry: 10ab54f10; end: 10ab54f23;  */

undefined * FUN_10ab54f10(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  FUN_109ffde64();
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



/* Entry: 10ab54f24; end: 10ab54fd3;  */

long FUN_10ab54f24(long param_1)

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



/* Entry: 10ab54fd4; end: 10ab54fe7;  */

undefined1  [16] FUN_10ab54fd4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x00010ab602c0();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 10ab54fe8; end: 10ab550c3;  */

undefined1  [16] FUN_10ab54fe8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x00010ab602c0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10ab550c4; end: 10ab55213;  */

void FUN_10ab550c4(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x58;
        FUN_10a559634(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10ab55214; end: 10ab5525f;  */

long FUN_10ab55214(ulong param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_2;
  uVar2 = param_2[1] - lVar1;
  if (param_1 < uVar2 || param_1 - uVar2 == 0) {
    if (param_1 < uVar2) {
      param_2[1] = lVar1 + param_1;
    }
  }
  else {
    func_0x000107c27d58(param_2,param_1 - uVar2);
    lVar1 = *param_2;
  }
  return lVar1;
}



/* Entry: 10ab55260; end: 10ab552d3;  */

undefined8 * FUN_10ab55260(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10a2e327c(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 10ab552d4; end: 10ab552e7;  */

undefined1  [16] FUN_10ab552d4(undefined8 param_1,ulong ***param_2,ulong param_3)

{
  ulong **ppuVar1;
  ulong ****ppppuVar2;
  ulong ****ppppuVar3;
  ulong ****ppppuVar4;
  ulong ***pppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong ***pppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong ***pppuVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  ulong *puStack_16c;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong *puStack_140;
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  ulong ***pppuStack_78;
  ulong **ppuStack_70;
  ulong **ppuStack_68;
  ulong ***pppuStack_60;
  ulong ***pppuStack_58;
  
  ppppuVar2 = (ulong ****)&DAT_10f62a4d8;
  FUN_109ffde64();
  ppppuVar4 = (ulong ****)ppppuVar2[1];
  if ((ulong ***)(((long)ppppuVar2[2] - (long)ppppuVar4 >> 4) * -0x5555555555555555) < param_2) {
    lVar13 = (long)ppppuVar4 - (long)*ppppuVar2;
    uVar10 = (long)param_2 + (lVar13 >> 4) * -0x5555555555555555;
    if (0x555555555555555 < uVar10) {
      FUN_10a0d38ac();
      func_0x00010a0d39d8(&pppuStack_78);
      __Unwind_Resume();
      pppuVar5 = ppppuVar2[1];
      if ((ulong ***)(((long)ppppuVar2[2] - (long)pppuVar5 >> 3) * 0x4ec4ec4ec4ec4ec5) < param_2) {
        lVar13 = (long)pppuVar5 - (long)*ppppuVar2;
        uVar10 = (long)param_2 + (lVar13 >> 3) * 0x4ec4ec4ec4ec4ec5;
        if (0x276276276276276 < uVar10) {
          FUN_10a18d150();
          puVar6 = &DAT_10f62a4d8;
          FUN_109ffde64();
          if ((undefined *)0x1c71c71c71c71c71 < puVar6) {
            func_0x000109ffded8();
            *(undefined ***)(puVar6 + 0x1b0) = &PTR_DAT_110c4a690;
            ppuVar1 = (ulong **)&UNK_10f692150;
            if (*param_2 != (ulong **)0x0) {
              ppuVar1 = *param_2;
            }
            func_0x000107c2c4dc(puVar6 + 0x1b8,ppuVar1);
            ppuStack_188 = (undefined **)*param_2;
            uStack_180 = 0;
            uStack_178 = 0;
            uStack_170 = (undefined4)param_3;
            puStack_16c = (ulong *)param_2[1];
            uStack_164 = *(undefined4 *)(param_2 + 2);
            uStack_158 = 0;
            uStack_160 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            puStack_140 = (ulong *)param_2[7];
            uStack_138 = *(undefined4 *)(param_2 + 8);
            uStack_130 = 0;
            uStack_128 = 0;
            func_0x00010a052690(puVar6 + 0x168,&ppuStack_188);
            puVar7 = puVar6;
            FUN_10a0051e8(puVar6,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                          *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
            if (((ulong)puVar7 & 1) == 0) {
              ppuStack_120 = &PTR_DAT_110c4a690;
              uStack_118 = 0;
              ppuStack_188 = &PTR_DAT_110c42c58;
              uStack_180 = 0;
              uStack_178 = CONCAT71(uStack_178._1_7_,1);
              func_0x0001098949cc(puVar6,*param_2,&ppuStack_120,&ppuStack_188);
            }
            auVar17._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
            auVar17._0_8_ = puVar6;
            return auVar17;
          }
          lVar13 = (long)puVar6 * 9;
          __Znwm(lVar13);
          auVar16._8_8_ = puVar6;
          auVar16._0_8_ = lVar13;
          return auVar16;
        }
        lVar8 = (long)ppppuVar2[2] - (long)*ppppuVar2 >> 3;
        uVar11 = lVar8 * -0x6276276276276276;
        if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
          uVar11 = uVar10;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar8 * 0x4ec4ec4ec4ec4ec5)) {
          uVar11 = 0x276276276276276;
        }
        if (uVar11 == 0) {
          ppppuVar4 = (ulong ****)0x0;
        }
        else {
          ppppuVar4 = ppppuVar2;
          FUN_10a18d164();
        }
        pppuVar9 = (ulong ***)((long)ppppuVar4 + lVar13);
        lVar13 = (long)param_2 * 0xd;
        pppuVar5 = pppuVar9;
        do {
          pppuVar5[4] = (ulong **)0x0;
          pppuVar5[1] = (ulong **)0x0;
          *pppuVar5 = (ulong **)0x0;
          pppuVar5[3] = (ulong **)0x0;
          pppuVar5[2] = (ulong **)0x0;
          pppuVar5[6] = (ulong **)0x0;
          pppuVar5[5] = (ulong **)0x3f800000;
          pppuVar5[8] = (ulong **)0x0;
          pppuVar5[7] = (ulong **)0x3f80000000000000;
          pppuVar5[10] = (ulong **)0x3f800000;
          pppuVar5[9] = (ulong **)0x0;
          pppuVar5[0xc] = (ulong **)0x3f80000000000000;
          pppuVar5[0xb] = (ulong **)0x0;
          pppuVar5 = pppuVar5 + 0xd;
        } while (pppuVar5 != pppuVar9 + lVar13);
        param_2 = *ppppuVar2;
        pppuVar12 = (ulong ***)((long)pppuVar9 - ((long)ppppuVar2[1] - (long)param_2));
        _memcpy(pppuVar12);
        pppuVar5 = *ppppuVar2;
        *ppppuVar2 = pppuVar12;
        ppppuVar2[1] = pppuVar9 + lVar13;
        ppppuVar2[2] = (ulong ***)(ppppuVar4 + uVar11 * 0xd);
        ppppuVar2 = (ulong ****)0x0;
        if (pppuVar5 != (ulong ***)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)();
          auVar18._8_8_ = param_2;
          auVar18._0_8_ = pppuVar5;
          return auVar18;
        }
      }
      else {
        pppuVar9 = pppuVar5;
        if (param_2 != (ulong ***)0x0) {
          pppuVar9 = pppuVar5 + (long)param_2 * 0xd;
          do {
            pppuVar5[4] = (ulong **)0x0;
            pppuVar5[1] = (ulong **)0x0;
            *pppuVar5 = (ulong **)0x0;
            pppuVar5[3] = (ulong **)0x0;
            pppuVar5[2] = (ulong **)0x0;
            pppuVar5[6] = (ulong **)0x0;
            pppuVar5[5] = (ulong **)0x3f800000;
            pppuVar5[8] = (ulong **)0x0;
            pppuVar5[7] = (ulong **)0x3f80000000000000;
            pppuVar5[10] = (ulong **)0x3f800000;
            pppuVar5[9] = (ulong **)0x0;
            pppuVar5[0xc] = (ulong **)0x3f80000000000000;
            pppuVar5[0xb] = (ulong **)0x0;
            pppuVar5 = pppuVar5 + 0xd;
          } while (pppuVar5 != pppuVar9);
        }
        ppppuVar2[1] = pppuVar9;
      }
      auVar15._8_8_ = param_2;
      auVar15._0_8_ = ppppuVar2;
      return auVar15;
    }
    lVar8 = (long)ppppuVar2[2] - (long)*ppppuVar2 >> 4;
    uVar11 = lVar8 * 0x5555555555555556;
    if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
      uVar11 = uVar10;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar11 = 0x555555555555555;
    }
    pppuStack_58 = (ulong ***)ppppuVar2;
    if (uVar11 == 0) {
      ppppuVar4 = (ulong ****)0x0;
    }
    else {
      ppppuVar4 = ppppuVar2;
      FUN_10a0d38c0();
    }
    puVar6 = (undefined *)((long)ppppuVar4 + lVar13);
    lVar8 = (((long)param_2 * 0x30 - 0x30U) / 0x30) * 0x30 + 0x30;
    pppuStack_78 = (ulong ***)ppppuVar4;
    ppuStack_70 = (ulong **)puVar6;
    pppuStack_60 = (ulong ***)(ppppuVar4 + uVar11 * 6);
    _bzero(puVar6,lVar8);
    pppuVar5 = *ppppuVar2;
    lVar13 = (long)pppuVar5 - (long)ppppuVar2[1];
    ppuStack_68 = (ulong **)(puVar6 + lVar8);
    func_0x00010a0d3904(ppppuVar2,pppuVar5,ppppuVar2[1],puVar6 + lVar13);
    pppuStack_78 = *ppppuVar2;
    *ppppuVar2 = (ulong ***)(puVar6 + lVar13);
    ppppuVar2[1] = (ulong ***)(puVar6 + lVar8);
    pppuStack_60 = ppppuVar2[2];
    ppppuVar2[2] = (ulong ***)(ppppuVar4 + uVar11 * 6);
    ppppuVar3 = &pppuStack_78;
    ppuStack_70 = (ulong **)pppuStack_78;
    ppuStack_68 = (ulong **)pppuStack_78;
    func_0x00010a0d39d8(ppppuVar3);
  }
  else {
    pppuVar5 = (ulong ***)0x0;
    ppppuVar3 = ppppuVar2;
    if (param_2 != (ulong ***)0x0) {
      uVar10 = ((long)param_2 * 0x30 - 0x30U) / 0x30;
      pppuVar5 = (ulong ***)(uVar10 * 0x30 + 0x30);
      ppppuVar3 = ppppuVar4;
      _bzero(ppppuVar4,pppuVar5);
      ppppuVar4 = ppppuVar4 + uVar10 * 6 + 6;
    }
    ppppuVar2[1] = (ulong ***)ppppuVar4;
  }
  auVar14._8_8_ = pppuVar5;
  auVar14._0_8_ = ppppuVar3;
  return auVar14;
}



/* Entry: 10ab552e8; end: 10ab5546f;  */

undefined1  [16] FUN_10ab552e8(ulong ****param_1,ulong ***param_2,ulong param_3)

{
  ulong **ppuVar1;
  ulong ****ppppuVar2;
  ulong ****ppppuVar3;
  ulong ***pppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong ***pppuVar8;
  ulong uVar9;
  ulong uVar10;
  ulong ***pppuVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  ulong *puStack_15c;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong *puStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  ulong ***pppuStack_68;
  ulong **ppuStack_60;
  ulong **ppuStack_58;
  ulong ***pppuStack_50;
  ulong ***pppuStack_48;
  
  ppppuVar3 = (ulong ****)param_1[1];
  if ((ulong ***)(((long)param_1[2] - (long)ppppuVar3 >> 4) * -0x5555555555555555) < param_2) {
    lVar12 = (long)ppppuVar3 - (long)*param_1;
    uVar9 = (long)param_2 + (lVar12 >> 4) * -0x5555555555555555;
    if (0x555555555555555 < uVar9) {
      FUN_10a0d38ac();
      func_0x00010a0d39d8(&pppuStack_68);
      __Unwind_Resume();
      pppuVar4 = param_1[1];
      if ((ulong ***)(((long)param_1[2] - (long)pppuVar4 >> 3) * 0x4ec4ec4ec4ec4ec5) < param_2) {
        lVar12 = (long)pppuVar4 - (long)*param_1;
        uVar9 = (long)param_2 + (lVar12 >> 3) * 0x4ec4ec4ec4ec4ec5;
        if (0x276276276276276 < uVar9) {
          FUN_10a18d150();
          puVar5 = &DAT_10f62a4d8;
          FUN_109ffde64();
          if ((undefined *)0x1c71c71c71c71c71 < puVar5) {
            func_0x000109ffded8();
            *(undefined ***)(puVar5 + 0x1b0) = &PTR_DAT_110c4a690;
            ppuVar1 = (ulong **)&UNK_10f692150;
            if (*param_2 != (ulong **)0x0) {
              ppuVar1 = *param_2;
            }
            func_0x000107c2c4dc(puVar5 + 0x1b8,ppuVar1);
            ppuStack_178 = (undefined **)*param_2;
            uStack_170 = 0;
            uStack_168 = 0;
            uStack_160 = (undefined4)param_3;
            puStack_15c = (ulong *)param_2[1];
            uStack_154 = *(undefined4 *)(param_2 + 2);
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            puStack_130 = (ulong *)param_2[7];
            uStack_128 = *(undefined4 *)(param_2 + 8);
            uStack_120 = 0;
            uStack_118 = 0;
            func_0x00010a052690(puVar5 + 0x168,&ppuStack_178);
            puVar6 = puVar5;
            FUN_10a0051e8(puVar5,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                          *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
            if (((ulong)puVar6 & 1) == 0) {
              ppuStack_110 = &PTR_DAT_110c4a690;
              uStack_108 = 0;
              ppuStack_178 = &PTR_DAT_110c42c58;
              uStack_170 = 0;
              uStack_168 = CONCAT71(uStack_168._1_7_,1);
              func_0x0001098949cc(puVar5,*param_2,&ppuStack_110,&ppuStack_178);
            }
            auVar16._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
            auVar16._0_8_ = puVar5;
            return auVar16;
          }
          lVar12 = (long)puVar5 * 9;
          __Znwm(lVar12);
          auVar15._8_8_ = puVar5;
          auVar15._0_8_ = lVar12;
          return auVar15;
        }
        lVar7 = (long)param_1[2] - (long)*param_1 >> 3;
        uVar10 = lVar7 * -0x6276276276276276;
        if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
          uVar10 = uVar9;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar7 * 0x4ec4ec4ec4ec4ec5)) {
          uVar10 = 0x276276276276276;
        }
        if (uVar10 == 0) {
          ppppuVar3 = (ulong ****)0x0;
        }
        else {
          ppppuVar3 = param_1;
          FUN_10a18d164();
        }
        pppuVar8 = (ulong ***)((long)ppppuVar3 + lVar12);
        lVar12 = (long)param_2 * 0xd;
        pppuVar4 = pppuVar8;
        do {
          pppuVar4[4] = (ulong **)0x0;
          pppuVar4[1] = (ulong **)0x0;
          *pppuVar4 = (ulong **)0x0;
          pppuVar4[3] = (ulong **)0x0;
          pppuVar4[2] = (ulong **)0x0;
          pppuVar4[6] = (ulong **)0x0;
          pppuVar4[5] = (ulong **)0x3f800000;
          pppuVar4[8] = (ulong **)0x0;
          pppuVar4[7] = (ulong **)0x3f80000000000000;
          pppuVar4[10] = (ulong **)0x3f800000;
          pppuVar4[9] = (ulong **)0x0;
          pppuVar4[0xc] = (ulong **)0x3f80000000000000;
          pppuVar4[0xb] = (ulong **)0x0;
          pppuVar4 = pppuVar4 + 0xd;
        } while (pppuVar4 != pppuVar8 + lVar12);
        param_2 = *param_1;
        pppuVar11 = (ulong ***)((long)pppuVar8 - ((long)param_1[1] - (long)param_2));
        _memcpy(pppuVar11);
        pppuVar4 = *param_1;
        *param_1 = pppuVar11;
        param_1[1] = pppuVar8 + lVar12;
        param_1[2] = (ulong ***)(ppppuVar3 + uVar10 * 0xd);
        param_1 = (ulong ****)0x0;
        if (pppuVar4 != (ulong ***)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)();
          auVar17._8_8_ = param_2;
          auVar17._0_8_ = pppuVar4;
          return auVar17;
        }
      }
      else {
        pppuVar8 = pppuVar4;
        if (param_2 != (ulong ***)0x0) {
          pppuVar8 = pppuVar4 + (long)param_2 * 0xd;
          do {
            pppuVar4[4] = (ulong **)0x0;
            pppuVar4[1] = (ulong **)0x0;
            *pppuVar4 = (ulong **)0x0;
            pppuVar4[3] = (ulong **)0x0;
            pppuVar4[2] = (ulong **)0x0;
            pppuVar4[6] = (ulong **)0x0;
            pppuVar4[5] = (ulong **)0x3f800000;
            pppuVar4[8] = (ulong **)0x0;
            pppuVar4[7] = (ulong **)0x3f80000000000000;
            pppuVar4[10] = (ulong **)0x3f800000;
            pppuVar4[9] = (ulong **)0x0;
            pppuVar4[0xc] = (ulong **)0x3f80000000000000;
            pppuVar4[0xb] = (ulong **)0x0;
            pppuVar4 = pppuVar4 + 0xd;
          } while (pppuVar4 != pppuVar8);
        }
        param_1[1] = pppuVar8;
      }
      auVar14._8_8_ = param_2;
      auVar14._0_8_ = param_1;
      return auVar14;
    }
    lVar7 = (long)param_1[2] - (long)*param_1 >> 4;
    uVar10 = lVar7 * 0x5555555555555556;
    if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
      uVar10 = uVar9;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar10 = 0x555555555555555;
    }
    pppuStack_48 = (ulong ***)param_1;
    if (uVar10 == 0) {
      ppppuVar3 = (ulong ****)0x0;
    }
    else {
      ppppuVar3 = param_1;
      FUN_10a0d38c0();
    }
    lVar12 = (long)ppppuVar3 + lVar12;
    lVar7 = (((long)param_2 * 0x30 - 0x30U) / 0x30) * 0x30 + 0x30;
    pppuStack_68 = (ulong ***)ppppuVar3;
    ppuStack_60 = (ulong **)lVar12;
    pppuStack_50 = (ulong ***)(ppppuVar3 + uVar10 * 6);
    _bzero(lVar12,lVar7);
    pppuVar8 = (ulong ***)(lVar12 + lVar7);
    pppuVar4 = *param_1;
    pppuVar11 = (ulong ***)((long)pppuVar4 + (lVar12 - (long)param_1[1]));
    ppuStack_58 = (ulong **)pppuVar8;
    func_0x00010a0d3904(param_1,pppuVar4,param_1[1],pppuVar11);
    pppuStack_68 = *param_1;
    *param_1 = pppuVar11;
    param_1[1] = pppuVar8;
    pppuStack_50 = param_1[2];
    param_1[2] = (ulong ***)(ppppuVar3 + uVar10 * 6);
    ppppuVar2 = &pppuStack_68;
    ppuStack_60 = (ulong **)pppuStack_68;
    ppuStack_58 = (ulong **)pppuStack_68;
    func_0x00010a0d39d8(ppppuVar2);
  }
  else {
    pppuVar4 = (ulong ***)0x0;
    ppppuVar2 = param_1;
    if (param_2 != (ulong ***)0x0) {
      uVar9 = ((long)param_2 * 0x30 - 0x30U) / 0x30;
      pppuVar4 = (ulong ***)(uVar9 * 0x30 + 0x30);
      ppppuVar2 = ppppuVar3;
      _bzero(ppppuVar3,pppuVar4);
      ppppuVar3 = ppppuVar3 + uVar9 * 6 + 6;
    }
    param_1[1] = (ulong ***)ppppuVar3;
  }
  auVar13._8_8_ = pppuVar4;
  auVar13._0_8_ = ppppuVar2;
  return auVar13;
}



/* Entry: 10ab55470; end: 10ab55603;  */

undefined1  [16] FUN_10ab55470(long *param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  
  puVar5 = (undefined8 *)param_1[1];
  if ((undefined8 *)((param_1[2] - (long)puVar5 >> 3) * 0x4ec4ec4ec4ec4ec5) < param_2) {
    lVar10 = (long)puVar5 - *param_1;
    uVar4 = (long)param_2 + (lVar10 >> 3) * 0x4ec4ec4ec4ec4ec5;
    if (0x276276276276276 < uVar4) {
      FUN_10a18d150();
      puVar2 = &DAT_10f62a4d8;
      FUN_109ffde64();
      if ((undefined *)0x1c71c71c71c71c71 < puVar2) {
        func_0x000109ffded8();
        *(undefined ***)(puVar2 + 0x1b0) = &PTR_DAT_110c4a690;
        puVar3 = &UNK_10f692150;
        if ((undefined *)*param_2 != (undefined *)0x0) {
          puVar3 = (undefined *)*param_2;
        }
        func_0x000107c2c4dc(puVar2 + 0x1b8,puVar3);
        ppuStack_108 = (undefined **)*param_2;
        uStack_100 = 0;
        uStack_f8 = 0;
        uStack_f0 = (undefined4)param_3;
        uStack_ec = param_2[1];
        uStack_e4 = *(undefined4 *)(param_2 + 2);
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_c0 = param_2[7];
        uStack_b8 = *(undefined4 *)(param_2 + 8);
        uStack_b0 = 0;
        uStack_a8 = 0;
        func_0x00010a052690(puVar2 + 0x168,&ppuStack_108);
        puVar3 = puVar2;
        FUN_10a0051e8(puVar2,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                      *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
        if (((ulong)puVar3 & 1) == 0) {
          ppuStack_a0 = &PTR_DAT_110c4a690;
          uStack_98 = 0;
          ppuStack_108 = &PTR_DAT_110c42c58;
          uStack_100 = 0;
          uStack_f8 = CONCAT71(uStack_f8._1_7_,1);
          func_0x0001098949cc(puVar2,*param_2,&ppuStack_a0,&ppuStack_108);
        }
        auVar13._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
        auVar13._0_8_ = puVar2;
        return auVar13;
      }
      lVar10 = (long)puVar2 * 9;
      __Znwm(lVar10);
      auVar12._8_8_ = puVar2;
      auVar12._0_8_ = lVar10;
      return auVar12;
    }
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar7 * -0x6276276276276276;
    if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
      uVar8 = uVar4;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar7 * 0x4ec4ec4ec4ec4ec5)) {
      uVar8 = 0x276276276276276;
    }
    if (uVar8 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_10a18d164();
    }
    puVar6 = (undefined8 *)((long)plVar1 + lVar10);
    lVar10 = (long)param_2 * 0xd;
    puVar5 = puVar6;
    do {
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[6] = 0;
      puVar5[5] = 0x3f800000;
      puVar5[8] = 0;
      puVar5[7] = 0x3f80000000000000;
      puVar5[10] = 0x3f800000;
      puVar5[9] = 0;
      puVar5[0xc] = 0x3f80000000000000;
      puVar5[0xb] = 0;
      puVar5 = puVar5 + 0xd;
    } while (puVar5 != puVar6 + lVar10);
    param_2 = (undefined8 *)*param_1;
    lVar9 = (long)puVar6 - (param_1[1] - (long)param_2);
    _memcpy(lVar9);
    lVar7 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)(puVar6 + lVar10);
    param_1[2] = (long)(plVar1 + uVar8 * 0xd);
    param_1 = (long *)0x0;
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      auVar14._8_8_ = param_2;
      auVar14._0_8_ = lVar7;
      return auVar14;
    }
  }
  else {
    puVar6 = puVar5;
    if (param_2 != (undefined8 *)0x0) {
      puVar6 = puVar5 + (long)param_2 * 0xd;
      do {
        puVar5[4] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[6] = 0;
        puVar5[5] = 0x3f800000;
        puVar5[8] = 0;
        puVar5[7] = 0x3f80000000000000;
        puVar5[10] = 0x3f800000;
        puVar5[9] = 0;
        puVar5[0xc] = 0x3f80000000000000;
        puVar5[0xb] = 0;
        puVar5 = puVar5 + 0xd;
      } while (puVar5 != puVar6);
    }
    param_1[1] = (long)puVar6;
  }
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 10ab55604; end: 10ab55617;  */

undefined1  [16] FUN_10ab55604(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1 < (undefined *)0x1c71c71c71c71c72) {
    lVar2 = (long)puVar1 * 9;
    __Znwm(lVar2);
    auVar4._8_8_ = puVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  *(undefined ***)(puVar1 + 0x1b0) = &PTR_DAT_110c4a690;
  puVar3 = &UNK_10f692150;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar3 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(puVar1 + 0x1b8,puVar3);
  ppuStack_d8 = (undefined **)*param_2;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = (undefined4)param_3;
  uStack_bc = param_2[1];
  uStack_b4 = *(undefined4 *)(param_2 + 2);
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = param_2[7];
  uStack_88 = *(undefined4 *)(param_2 + 8);
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x00010a052690(puVar1 + 0x168,&ppuStack_d8);
  puVar3 = puVar1;
  FUN_10a0051e8(puVar1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if (((ulong)puVar3 & 1) == 0) {
    ppuStack_70 = &PTR_DAT_110c4a690;
    uStack_68 = 0;
    ppuStack_d8 = &PTR_DAT_110c42c58;
    uStack_d0 = 0;
    uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
    func_0x0001098949cc(puVar1,*param_2,&ppuStack_70,&ppuStack_d8);
  }
  auVar5._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar5._0_8_ = puVar1;
  return auVar5;
}



/* Entry: 10ab55618; end: 10ab5565b;  */

undefined1  [16] FUN_10ab55618(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  
  if (param_1 < 0x1c71c71c71c71c72) {
    lVar2 = param_1 * 9;
    __Znwm(lVar2);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000109ffded8();
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a690;
  puVar1 = &UNK_10f692150;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_c8 = (undefined **)*param_2;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = (undefined4)param_3;
  uStack_ac = param_2[1];
  uStack_a4 = *(undefined4 *)(param_2 + 2);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = param_2[7];
  uStack_78 = *(undefined4 *)(param_2 + 8);
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_c8);
  uVar3 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar3 & 1) == 0) {
    ppuStack_60 = &PTR_DAT_110c4a690;
    uStack_58 = 0;
    ppuStack_c8 = &PTR_DAT_110c42c58;
    uStack_c0 = 0;
    uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_60,&ppuStack_c8);
  }
  auVar5._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10ab5565c; end: 10ab55757;  */

undefined1  [16] FUN_10ab5565c(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a690;
  puVar1 = &UNK_10f692150;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c4a690;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110c42c58;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ab55758; end: 10ab5586b;  */

void FUN_10ab55758(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f693087,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab55814);
  (*pcVar4)();
}



/* Entry: 10ab5586c; end: 10ab559cf;  */

void FUN_10ab5586c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  long *plStack_38;
  long *plStack_30;
  long *plStack_28;
  
  plVar3 = (long *)0x90;
  __Znwm();
  plVar4 = plVar3 + 1;
  *plVar4 = 0;
  *plVar3 = (long)&PTR_FUN_110b9fe30;
  lStack_40 = *param_2;
  plStack_30 = plVar3 + 3;
  plVar3[4] = param_2[1];
  *plStack_30 = lStack_40;
  plVar3[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0x32aaaba7;
  plVar3[9] = 0;
  plVar3[8] = 0;
  plVar3[0xb] = 0;
  plVar3[10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xc] = 0;
  plVar3[0xf] = 0;
  plVar3[0xe] = 0;
  plVar3[0x11] = 0;
  plVar3[0x10] = 0;
  *param_1 = lStack_40;
  param_1[1] = (long)plVar3;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = *plVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_38 = plVar3;
  plStack_28 = plVar3;
  func_0x00010a053e8c(plStack_30,&lStack_40);
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  if (*plStack_30 != 0) {
    func_0x00010a053ee8(*plStack_30,&plStack_30);
  }
  plVar3 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar4 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return;
}



/* Entry: 10ab559d0; end: 10ab55aef;  */

void FUN_10ab559d0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_2[1];
  if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == -1)) {
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



/* Entry: 10ab55af0; end: 10ab55b2f;  */

void FUN_10ab55af0(long param_1)

{
  FUN_10aa88d20(param_1 + 0x20,*(undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ab55b30; end: 10ab55b6b;  */

long FUN_10ab55b30(long param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c4ab80);
  param_1 = param_1 + 0x20;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ab55b6c; end: 10ab55b7f;  */

void FUN_10ab55b6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab55b80; end: 10ab55b9f;  */

void FUN_10ab55b80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c4aba0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab55ba0; end: 10ab55baf;  */

void FUN_10ab55ba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab55ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10ab55bb0; end: 10ab55cab;  */

undefined1  [16] FUN_10ab55bb0(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4a6c0;
  puVar1 = &UNK_10f692150;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110c4a6c0;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10ab55cac; end: 10ab55d03;  */

ulong FUN_10ab55cac(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a052828(param_1,*param_2,FUN_10ab55d04,FUN_10ab55e0c);
  }
  return param_1;
}



/* Entry: 10ab55d04; end: 10ab55e0b;  */

void FUN_10ab55d04(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar5 = &UNK_10f68f52e;
  }
  else {
    FUN_10a052c2c(param_2,plVar4);
    if ((param_2 != (long *)0x0) && (___dynamic_cast(), param_2 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      lVar6 = param_2[5];
      *param_1 = 3;
      *(double *)(param_1 + 2) = (double)(int)lVar6;
      plVar4 = plVar3 + 0x4b;
      lVar6 = plVar3[0x59];
      uVar7 = lVar6 - 1;
      plVar3[0x59] = uVar7;
      if (uVar7 < 8) {
        uVar7 = plVar4[lVar6 + 2];
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      else {
        uVar7 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar7) {
          return;
        }
      }
      lVar6 = *plVar4;
      lVar11 = plVar3[0x4c];
      lVar9 = lVar11 - lVar6;
      uVar13 = lVar9 >> 4;
      if (uVar13 < uVar7) {
        uVar14 = uVar7 - uVar13;
        lVar12 = plVar3[0x4d];
        if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
          if (uVar7 >> 0x3c == 0) {
            uVar8 = lVar12 - lVar6 >> 3;
            if (uVar8 <= uVar7) {
              uVar8 = uVar7;
            }
            if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
              uVar8 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar8 >> 0x3c == 0) {
              lVar2 = uVar8 << 4;
              __Znwm();
              lVar11 = lVar2 + lVar9;
              _bzero(lVar11,uVar14 * 0x10);
              lVar10 = lVar11 + uVar13 * -0x10;
              _memcpy(lVar10,lVar6,lVar9);
              *plVar4 = lVar10;
              plVar3[0x4c] = lVar11 + uVar14 * 0x10;
              plVar3[0x4d] = lVar2 + uVar8 * 0x10;
              lStack_88 = lVar6;
              lStack_80 = lVar6;
              lStack_78 = lVar6;
              lStack_70 = lVar12;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar11,uVar14 * 0x10);
        plVar3[0x4c] = lVar11 + uVar14 * 0x10;
      }
      else if (uVar7 < uVar13) {
        lVar6 = lVar6 + uVar7 * 0x10;
        while (lVar11 != lVar6) {
          lVar11 = lVar11 + -0x10;
          func_0x00010988c204(lVar11);
        }
        plVar3[0x4c] = lVar6;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar7;
      return;
    }
    puVar5 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab55df8);
  (*pcVar1)();
}



/* Entry: 10ab55e0c; end: 10ab55f17;  */

void FUN_10ab55e0c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar4 == (long *)0x0) {
    puVar6 = &UNK_10f68f52e;
  }
  else {
    plVar5 = param_2;
    FUN_10a053854(param_2,plVar4);
    if ((plVar5 != (long *)0x0) && (___dynamic_cast(), plVar5 != (long *)0x0)) {
      FUN_10a80be70(param_5);
      func_0x000109898518(param_2,param_4);
      *(int *)(plVar5 + 5) = (int)param_2;
      *param_1 = 0;
      plVar4 = plVar3 + 0x4b;
      lVar7 = plVar3[0x59];
      uVar8 = lVar7 - 1;
      plVar3[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar4[lVar7 + 2];
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar3[0x57] + -8);
        plVar3[0x57] = plVar3[0x57] + -8;
        if (plVar3[0x5a] == uVar8) {
          return;
        }
      }
      lVar7 = *plVar4;
      lVar12 = plVar3[0x4c];
      lVar10 = lVar12 - lVar7;
      uVar14 = lVar10 >> 4;
      if (uVar14 < uVar8) {
        uVar15 = uVar8 - uVar14;
        lVar13 = plVar3[0x4d];
        if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar13 - lVar7 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar4;
            if (uVar9 >> 0x3c == 0) {
              lVar2 = uVar9 << 4;
              __Znwm();
              lVar12 = lVar2 + lVar10;
              _bzero(lVar12,uVar15 * 0x10);
              lVar11 = lVar12 + uVar14 * -0x10;
              _memcpy(lVar11,lVar7,lVar10);
              *plVar4 = lVar11;
              plVar3[0x4c] = lVar12 + uVar15 * 0x10;
              plVar3[0x4d] = lVar2 + uVar9 * 0x10;
              lStack_88 = lVar7;
              lStack_80 = lVar7;
              lStack_78 = lVar7;
              lStack_70 = lVar13;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar1)();
        }
        _bzero(lVar12,uVar15 * 0x10);
        plVar3[0x4c] = lVar12 + uVar15 * 0x10;
      }
      else if (uVar8 < uVar14) {
        lVar7 = lVar7 + uVar8 * 0x10;
        while (lVar12 != lVar7) {
          lVar12 = lVar12 + -0x10;
          func_0x00010988c204(lVar12);
        }
        plVar3[0x4c] = lVar7;
      }
code_r0x00010988c138:
      plVar3[0x5a] = uVar8;
      return;
    }
    puVar6 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar6);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab55f04);
  (*pcVar1)();
}



/* Entry: 10ab55f18; end: 10ab55fd3;  */

void FUN_10ab55f18(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f69215a,0x1a);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab55fd4);
  (*pcVar4)();
}



/* Entry: 10ab55fd4; end: 10ab56107;  */

void FUN_10ab55fd4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **ppuStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a052e3c(param_5);
  plVar5 = (long *)0x48;
  __Znwm();
  *plVar5 = (long)&PTR_FUN_110bf2ea8;
  plVar5[1] = 0;
  plVar5[5] = 0;
  plVar5[4] = 0;
  plVar5[7] = 0;
  plVar5[6] = 0;
  plVar5[8] = 0;
  plStack_40 = plVar5 + 5;
  *plStack_40 = (long)&PTR_FUN_110c4da78;
  plVar5[2] = 0;
  plVar5[3] = (long)&PTR_FUN_110c4da20;
  ppuStack_48 = &PTR_DAT_110c4a6c0;
  plStack_38 = plVar5;
  func_0x000109899de4(param_1,param_2,&plStack_40,&ppuStack_48,0,0);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  func_0x00010988c170(plVar4 + 0x4b);
  return;
}



/* Entry: 10ab56108; end: 10ab56243;  */

void FUN_10ab56108(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10ab56244(param_2,param_3);
  FUN_10a052e3c(param_5);
  plVar7 = (long *)plVar7[0x1d];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
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
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar10 = plVar6[0x59];
  uVar8 = lVar10 - 1;
  plVar6[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar7[lVar10 + 2];
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar8) {
      return;
    }
  }
  lVar10 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar10;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar8) {
    uVar16 = uVar8 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar10 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar10,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar10;
          lStack_80 = lVar10;
          lStack_78 = lVar10;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar8 < uVar15) {
    lVar10 = lVar10 + uVar8 * 0x10;
    while (lVar13 != lVar10) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar10;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar8;
  return;
}



/* Entry: 10ab56244; end: 10ab562ab;  */

void FUN_10ab56244(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10ab56244(plVar4,param_2);
  FUN_10a052e3c(param_4);
  func_0x00010a80afe4(extraout_x8,plVar4,plVar6 + 0x1e);
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10ab562ac; end: 10ab56363;  */

void FUN_10ab562ac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10ab56244(param_2,param_3);
  FUN_10a052e3c(param_5);
  func_0x00010a80afe4(param_1,param_2,plVar4 + 0x1e);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10ab56364; end: 10ab5647f;  */

void FUN_10ab56364(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10ab56480(param_2,param_3);
  FUN_10a80b0d0(param_5);
  FUN_10a80b0f4(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10ab3cbcc(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10ab56480; end: 10ab564e7;  */

void FUN_10ab56480(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10ab56244(plVar4,param_2);
  FUN_10a052e3c(param_4);
  FUN_10a2f8144(extraout_x8,plVar4,plVar6 + 0x20);
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar8 = lVar7 - 1;
  plVar5[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar4 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar13;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar8;
  return;
}



/* Entry: 10ab564e8; end: 10ab5659f;  */

void FUN_10ab564e8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10ab56244(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a2f8144(param_1,param_2,plVar4 + 0x20);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10ab565a0; end: 10ab566bb;  */

void FUN_10ab565a0(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10ab56480(param_2,param_3);
  FUN_10a2f81c8(param_5);
  FUN_10a2f81ec(&stack0xffffffffffffffb0,param_2,param_4);
  FUN_10ab3cd60(plVar6,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffb8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
    }
  }
  *param_1 = 0;
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10ab566bc; end: 10ab56777;  */

void FUN_10ab566bc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10ab56244(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a052e5c(param_1,param_2,plVar4[0x1e] + 0xf8);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10ab56778; end: 10ab5682f;  */

void FUN_10ab56778(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ab56830(param_1,param_2,FUN_10ab3d724,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10ab56830; end: 10ab5690f;  */

void FUN_10ab56830(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  long *plStack_58;
  
  lVar4 = param_2;
  FUN_10ab56480(param_2,param_5);
  FUN_10a05395c(param_7);
  FUN_10a053980(auStack_60,param_2,param_6);
  plVar1 = (long *)(lVar4 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar1 + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(plVar1,auStack_60);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10ab56910; end: 10ab569fb;  */

void FUN_10ab56910(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10ab56244(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = plVar4[0x1e] + 0x118;
  FUN_10a814778(lVar5,&stack0xffffffffffffffb6,&UNK_10dd5b8f9,&stack0xffffffffffffffb8,
                &stack0xffffffffffffffb7);
  FUN_10a052e5c(param_1,param_2,lVar5 + 0x18);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10ab569fc; end: 10ab56ab3;  */

void FUN_10ab569fc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ab56830(param_1,param_2,0x10ab3d758,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10ab56ab4; end: 10ab56ba3;  */

void FUN_10ab56ab4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10ab56244(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = plVar4[0x1e] + 0x118;
  FUN_10a814778(lVar5,&stack0xffffffffffffffb6,&UNK_10dd5b8f9,&stack0xffffffffffffffb8,
                &stack0xffffffffffffffb7);
  FUN_10a052e5c(param_1,param_2,lVar5 + 0x18);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10ab56ba4; end: 10ab56c5b;  */

void FUN_10ab56ba4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10ab56830(param_1,param_2,0x10ab3d794,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10ab56c5c; end: 10ab56edb;  */

void FUN_10ab56c5c(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long in_stack_ffffffffffffffa0;
  long *in_stack_ffffffffffffffa8;
  long in_stack_ffffffffffffffb0;
  long *in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10ab56edc(param_5);
  if (*param_4 == 1) {
    in_stack_ffffffffffffffa8 = (long *)0x0;
  }
  else {
    plVar7 = param_2;
    func_0x000109898688(param_2,param_4);
    if (plVar7 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
LAB_10ab56eb0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ab56eb4);
      (*pcVar4)();
    }
    func_0x00010989879c(&stack0xffffffffffffffb0);
    if ((in_stack_ffffffffffffffb0 == 0) ||
       (___dynamic_cast(in_stack_ffffffffffffffb0,&PTR_DAT_110b178e0,&PTR_DAT_110c4a6c0,0x10),
       in_stack_ffffffffffffffb0 == 0)) {
      puVar10 = (undefined8 *)&stack0xffffffffffffffa0;
    }
    else {
      puVar10 = (undefined8 *)&stack0xffffffffffffffb0;
      in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffb0;
      in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffb8;
    }
    *puVar10 = 0;
    puVar10[1] = 0;
    if (in_stack_ffffffffffffffb8 != (long *)0x0) {
      plVar7 = in_stack_ffffffffffffffb8 + 1;
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
        (**(code **)(*in_stack_ffffffffffffffb8 + 0x10))(in_stack_ffffffffffffffb8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffb8);
      }
    }
    if (in_stack_ffffffffffffffa0 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10ab56eb0;
    }
  }
  ppuVar8 = &PTR___tlv_bootstrap_11340df48;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  (**(code **)(param_6 + 0x10))(&lStack_70,*ppuVar8,&stack0xffffffffffffffa0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffa8 + 1;
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
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10a052f68(param_1,param_2,&stack0xffffffffffffffb0);
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
  plVar7 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar12 = plVar6[0x59];
  uVar9 = lVar12 - 1;
  plVar6[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar7[lVar12 + 2];
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar9) {
      return;
    }
  }
  lVar12 = *plVar7;
  lVar15 = plVar6[0x4c];
  lVar13 = lVar15 - lVar12;
  uVar17 = lVar13 >> 4;
  if (uVar17 < uVar9) {
    uVar18 = uVar9 - uVar17;
    lVar16 = plVar6[0x4d];
    if ((ulong)(lVar16 - lVar15 >> 4) < uVar18) {
      if (uVar9 >> 0x3c == 0) {
        uVar11 = lVar16 - lVar12 >> 3;
        if (uVar11 <= uVar9) {
          uVar11 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar16 - lVar12)) {
          uVar11 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar11 >> 0x3c == 0) {
          lVar5 = uVar11 << 4;
          __Znwm();
          lVar15 = lVar5 + lVar13;
          _bzero(lVar15,uVar18 * 0x10);
          lVar14 = lVar15 + uVar17 * -0x10;
          _memcpy(lVar14,lVar12,lVar13);
          *plVar7 = lVar14;
          plVar6[0x4c] = lVar15 + uVar18 * 0x10;
          plVar6[0x4d] = lVar5 + uVar11 * 0x10;
          lStack_88 = lVar12;
          lStack_80 = lVar12;
          lStack_78 = lVar12;
          lStack_70 = lVar16;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar15,uVar18 * 0x10);
    plVar6[0x4c] = lVar15 + uVar18 * 0x10;
  }
  else if (uVar9 < uVar17) {
    lVar12 = lVar12 + uVar9 * 0x10;
    while (lVar15 != lVar12) {
      lVar15 = lVar15 + -0x10;
      func_0x00010988c204(lVar15);
    }
    plVar6[0x4c] = lVar12;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar9;
  return;
}



/* Entry: 10ab56edc; end: 10ab56eff;  */

void FUN_10ab56edc(undefined8 param_1)

{
  if ((int)param_1 == 1) {
    return;
  }
  FUN_10a052ee0(1,0,param_1);
  return;
}



/* Entry: 10ab56f00; end: 10ab56f1b;  */

void FUN_10ab56f00(void)

{
  return;
}



/* Entry: 10ab56f1c; end: 10ab56f73;  */

void FUN_10ab56f1c(long param_1)

{
  long lStack_28;
  
  func_0x00010a052434(param_1 + 0x60);
  func_0x000107c2826c(param_1 + 0x38);
  lStack_28 = param_1 + 0x20;
  FUN_10a042144(&lStack_28);
  FUN_10a80be94(param_1 + 0x10);
  FUN_10a57446c(param_1);
  __ZdlPv();
  return;
}



/* Entry: 10ab56f74; end: 10ab56ffb;  */

void FUN_10ab56f74(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = *param_1;
  plStack_28 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (lStack_30 != 0) {
    FUN_10ab3cd60(*(undefined8 *)(param_2 + 0x10),&lStack_30);
  }
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}


