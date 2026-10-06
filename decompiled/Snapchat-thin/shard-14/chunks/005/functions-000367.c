/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4a5e14; end: 10b4a5e27;  */

void FUN_10b4a5e14(void)

{
  func_0x00010b4a5e30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a5e28; end: 10b4a5e3b;  */

void FUN_10b4a5e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b4a67e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b4a5e3c; end: 10b4a5e63;  */

long FUN_10b4a5e3c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b4a5e64; end: 10b4a5e7b;  */

void FUN_10b4a5e64(long *param_1,long param_2)

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



/* Entry: 10b4a5e7c; end: 10b4a5eab;  */

void FUN_10b4a5e7c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107c39670();
  if (unaff_x20 != 0) {
    func_0x000107c396d8();
    if ((bool)in_ZR) {
      func_0x000107c396cc();
    }
    func_0x000107c39684();
  }
  return;
}



/* Entry: 10b4a5eac; end: 10b4a5f2f;  */

void FUN_10b4a5eac(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  lStack_28 = (long)*(char *)((long)puVar1 + 0x5f);
  if (lStack_28 < 0) {
    puStack_30 = (undefined8 *)puVar1[9];
    lStack_28 = puVar1[10];
  }
  else {
    puStack_30 = puVar1 + 9;
  }
  lStack_20 = puVar1[0xc];
  lStack_18 = (puVar1[0xd] - lStack_20) / 0x30;
  FUN_10b4a25fc(*puVar1,puVar1[1],puVar1 + 2,puVar1 + 5,*(undefined4 *)(puVar1 + 8),&puStack_30,
                puVar1[0xf]);
  return;
}



/* Entry: 10b4a5f30; end: 10b4a5f33;  */

void FUN_10b4a5f30(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b4a5f34; end: 10b4a6297;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010b4a6044 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long * FUN_10b4a5f34(undefined8 param_1,long *param_2,int *param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long *plVar10;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *plVar11;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *plVar12;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x12;
  long *plVar13;
  long *unaff_x22;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  param_2[1] = 0;
  *param_2 = 0;
  plVar15 = param_2 + 2;
  param_2[3] = 0;
  *plVar15 = 0;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  piVar1 = param_3 + param_4;
  do {
    uVar6 = (long)param_3 - (long)piVar1 < 0;
    if (param_3 == piVar1) {
      return param_2;
    }
    iVar2 = *param_3;
    plVar16 = (long *)(long)iVar2;
    plVar17 = (long *)param_2[1];
    if (plVar17 != (long *)0x0) {
      uVar9 = (long)plVar17 - 1;
      if (((ulong)plVar17 & uVar9) == 0) {
        unaff_x22 = (long *)(uVar9 & (ulong)plVar16);
        uVar6 = false;
      }
      else {
        uVar6 = (long)plVar17 - (long)plVar16 < 0;
        unaff_x22 = plVar16;
        if (plVar17 <= plVar16) {
          uVar3 = 0;
          if (plVar17 != (long *)0x0) {
            uVar3 = (ulong)plVar16 / (ulong)plVar17;
          }
          unaff_x22 = (long *)((long)plVar16 - uVar3 * (long)plVar17);
        }
      }
      plVar10 = *(long **)(*param_2 + (long)unaff_x22 * 8);
      if (plVar10 != (long *)0x0) {
        do {
          while( true ) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_10b4a6014;
            plVar11 = (long *)plVar10[1];
            if (plVar11 != plVar16) break;
            uVar6 = *(int *)(plVar10 + 2) - iVar2 < 0;
            if (*(int *)(plVar10 + 2) == iVar2) goto LAB_10b4a6244;
          }
          if (((ulong)plVar17 & uVar9) == 0) {
            plVar11 = (long *)((ulong)plVar11 & uVar9);
          }
          else if (plVar17 <= plVar11) {
            uVar3 = 0;
            if (plVar17 != (long *)0x0) {
              uVar3 = (ulong)plVar11 / (ulong)plVar17;
            }
            plVar11 = (long *)((long)plVar11 - uVar3 * (long)plVar17);
          }
          uVar6 = (long)plVar11 - (long)unaff_x22 < 0;
        } while (plVar11 == unaff_x22);
      }
    }
LAB_10b4a6014:
    plVar11 = (long *)0x18;
    __Znwm();
    uStack_68 = 1;
    *plVar11 = 0;
    plVar11[1] = (long)plVar16;
    *(int *)(plVar11 + 2) = iVar2;
    plVar10 = plVar11;
    plStack_78 = plVar11;
    plStack_70 = plVar15;
    func_0x000107c396a8(param_2[3]);
    if ((plVar17 == (long *)0x0) ||
       (func_0x000107c396a4(param_1,(int)param_2[4],(float)plVar17), (bool)uVar6)) {
      func_0x00010b4a6ab0();
      bVar5 = (long *)0x2 < plVar17;
      bVar7 = plVar17 == (long *)0x3;
      func_0x000107c39664();
      plVar14 = extraout_x8;
      if (!bVar5 || bVar7) {
        plVar14 = extraout_x9;
      }
      if ((long)plVar14 - 1U == 0) {
        plVar14 = (long *)0x2;
      }
      else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
        func_0x00010b4a6a00();
        plVar17 = (long *)param_2[1];
        plVar14 = plVar10;
      }
      if (plVar17 < plVar14) {
LAB_10b4a608c:
        if ((ulong)plVar14 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10b4a6278);
          (*pcVar4)();
        }
        lVar8 = (long)plVar14 << 3;
        __Znwm(lVar8);
        FUN_10b4a6298(param_2,lVar8);
        plVar17 = (long *)0x0;
        param_2[1] = (long)plVar14;
        while (plVar14 != plVar17) {
          func_0x000107c396c8();
          plVar17 = extraout_x9_00;
        }
        plVar17 = plVar14;
        if (*plVar15 != 0) {
          func_0x00010b4a67f0();
          func_0x00010b4a6920();
          *(long **)(extraout_x8_00 + (long)extraout_x11 * 8) = plVar15;
          lVar8 = extraout_x8_00;
          uVar9 = extraout_x9_01;
          plVar10 = extraout_x10;
          plVar12 = extraout_x11;
          while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
            plVar13 = (long *)plVar10[1];
            if (((ulong)plVar14 & uVar9) == 0) {
              plVar13 = (long *)((ulong)plVar13 & uVar9);
            }
            else if (plVar14 <= plVar13) {
              uVar3 = 0;
              if (plVar14 != (long *)0x0) {
                uVar3 = (ulong)plVar13 / (ulong)plVar14;
              }
              plVar13 = (long *)((long)plVar13 - uVar3 * (long)plVar14);
            }
            if (plVar13 != plVar12) {
              if (*(long *)(lVar8 + (long)plVar13 * 8) == 0) {
                func_0x00010b4a6884();
                lVar8 = extraout_x8_02;
                uVar9 = extraout_x9_03;
                plVar10 = extraout_x12;
                plVar12 = extraout_x11_01;
              }
              else {
                func_0x00010b4a66d4();
                lVar8 = extraout_x8_01;
                uVar9 = extraout_x9_02;
                plVar10 = extraout_x10_00;
                plVar12 = extraout_x11_00;
              }
            }
          }
        }
      }
      else if (plVar14 < plVar17) {
        func_0x00010b4a685c(param_1,(int)param_2[4]);
        if ((plVar17 < (long *)0x3) || (((ulong)plVar17 & (long)plVar17 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x00010b4a675c();
          if ((long *)0x1 < plVar10) {
            plVar10 = (long *)(1L << (extraout_x8_03 & 0x3f));
          }
        }
        if (plVar14 <= plVar10) {
          plVar14 = plVar10;
        }
        if (plVar14 < plVar17) {
          if (plVar14 != (long *)0x0) goto LAB_10b4a608c;
          FUN_10b4a6298(param_2,0);
          param_2[1] = 0;
          plVar17 = (long *)0x0;
        }
        else {
          plVar17 = (long *)param_2[1];
        }
      }
      if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
        unaff_x22 = (long *)((long)plVar17 - 1U & (ulong)plVar16);
      }
      else {
        unaff_x22 = plVar16;
        if (plVar17 <= plVar16) {
          uVar9 = 0;
          if (plVar17 != (long *)0x0) {
            uVar9 = (ulong)plVar16 / (ulong)plVar17;
          }
          unaff_x22 = (long *)((long)plVar16 - uVar9 * (long)plVar17);
        }
      }
    }
    lVar8 = *param_2;
    if (*(long *)(lVar8 + (long)unaff_x22 * 8) == 0) {
      *plVar11 = *plVar15;
      *plVar15 = (long)plVar11;
      *(long **)(lVar8 + (long)unaff_x22 * 8) = plVar15;
      if (*plVar11 != 0) {
        plVar16 = *(long **)(*plVar11 + 8);
        if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
          plVar16 = (long *)((ulong)plVar16 & (long)plVar17 - 1U);
        }
        else if (plVar17 <= plVar16) {
          uVar9 = 0;
          if (plVar17 != (long *)0x0) {
            uVar9 = (ulong)plVar16 / (ulong)plVar17;
          }
          plVar16 = (long *)((long)plVar16 - uVar9 * (long)plVar17);
        }
        *(long **)(lVar8 + (long)plVar16 * 8) = plVar11;
      }
    }
    else {
      func_0x00010b4a6910();
    }
    plStack_78 = (long *)0x0;
    param_2[3] = param_2[3] + 1;
    FUN_10b4a62b0(&plStack_78);
LAB_10b4a6244:
    param_3 = param_3 + 1;
  } while( true );
}



/* Entry: 10b4a6298; end: 10b4a62af;  */

void FUN_10b4a6298(long *param_1,long param_2)

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



/* Entry: 10b4a62b0; end: 10b4a631b;  */

long * FUN_10b4a62b0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b4a631c; end: 10b4a6333;  */

void FUN_10b4a631c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long **pplVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined8 extraout_x8;
  long lVar11;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long *plVar12;
  ulong uVar13;
  int extraout_w10;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  byte unaff_w25;
  byte unaff_w26;
  long *plStack_b8;
  long lStack_b0;
  ulong uStack_90;
  ulong uStack_88;
  long *plStack_80;
  undefined1 uStack_78;
  ulong uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar12 = *(long **)(param_1 + 0x10);
  lVar1 = *plVar12;
  uVar2 = plVar12[1];
  plVar9 = (long *)plVar12[0xb];
  lVar7 = plVar12[0xc];
  plVar16 = plVar12 + 2;
  plVar12 = plVar12 + 5;
  lVar11 = lVar1;
  func_0x00010089124c();
  uVar5 = (uint)lVar11;
  uStack_58 = extraout_x8;
  func_0x00010060fc68();
  uVar4 = lVar7 == *(long *)(lVar1 + 0x220);
  if ((bool)uVar4) {
    func_0x000100896190();
    uVar5 = uVar5 ^ 1;
    if ((long)plVar9 < 1) {
      uVar5 = 1;
    }
    if ((uVar5 & 1) == 0) {
      lVar7 = lVar1;
      func_0x000107c300a4(lVar1,uVar2);
      *(long *)(lVar1 + 0x1f8) = lVar7 + (long)plVar9;
      *(ulong *)(lVar1 + 0x200) = uVar2;
    }
    lVar7 = lVar1 + 0xb0;
    func_0x000100896fc8();
    if (lVar7 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(ulong *)(lVar7 + 0x28);
      *(ulong *)(lVar7 + 0x28) = uVar2;
    }
    uVar4 = *(char *)(lVar1 + 0xac) == '\x01';
    if ((bool)uVar4) {
      lVar7 = lVar1 + 0xd8;
      func_0x0001008a465c(lVar7,plVar16);
      if (lVar7 != 0) {
        lVar11 = *(long *)(lVar1 + 0x228);
        uVar4 = *(long *)(lVar7 + 0x30) == lVar11;
        uVar14 = uVar2;
        if ((bool)uVar4) {
          uVar14 = *(ulong *)(lVar7 + 0x28);
        }
        uVar13 = uVar14 & 0xffffffffffffff00;
        *(ulong *)(lVar7 + 0x28) = uVar2;
        *(long *)(lVar7 + 0x30) = lVar11;
        uVar14 = uVar14 & 0xff;
        uVar3 = 1;
        if (uVar17 == 0) goto code_r0x000100895ce4;
        goto code_r0x000100895cfc;
      }
    }
    uVar14 = 0;
    uVar13 = 0;
    uVar3 = 0;
    if (uVar17 != 0) {
code_r0x000100895cfc:
      uStack_68 = uVar3;
      uStack_78 = 1;
      uStack_70 = uVar13 | uVar14;
      plVar15 = (long *)(lVar1 + 0x110);
      uStack_90 = uVar17;
      uStack_88 = uVar2;
      plStack_80 = plVar9;
      while (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0) {
        (**(code **)(*(long *)plVar15[3] + 0x28))((long *)plVar15[3],plVar12,&uStack_90);
      }
      uVar17 = 1000000;
      if ((long)(ulong)*(uint *)(lVar1 + 0x98) < (long)(uVar2 - *(long *)(lVar1 + 0x128)) / 1000000)
      {
        uStack_60 = 0x100000000;
        func_0x000107c30104(&plStack_b8,&uStack_60,2);
        func_0x000107c39718();
        pplVar8 = &plStack_b8;
        func_0x000107c30108();
        func_0x000107c60d9c();
        *(long ***)(lVar1 + 0x128) = pplVar8;
        func_0x000107c30084(&plStack_b8,lVar1);
        func_0x000107c39708();
        plVar9 = plStack_b8;
        (*extraout_x8_00)();
        func_0x000107c396dc();
        plVar15 = *(long **)(lVar1 + 0x230);
        unaff_w25 = plVar15 != (long *)0x0 && 0 < (long)plVar9;
        if (plVar15 == (long *)0x0 || 0 >= (long)plVar9) {
          plVar15 = (long *)0x0;
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,1);
        lVar7 = lVar1 + 0x100;
        func_0x000107c3010c(lVar7,&uStack_60);
        plVar12 = plVar15;
        if (lVar7 == 0) {
          unaff_w26 = false;
          plVar16 = (long *)0x0;
          plStack_b8 = (long *)0x0;
          lStack_b0 = 0;
        }
        else {
          plVar16 = *(long **)(lVar7 + 0x18);
          lStack_b0 = *(long *)(lVar7 + 0x20);
          plStack_b8 = plVar16;
          if (lStack_b0 != 0) {
            do {
              func_0x00010060f2ec();
            } while (extraout_w10 != 0);
          }
          if (plVar16 == (long *)0x0) {
            unaff_w26 = false;
            plVar16 = (long *)0x0;
          }
          else {
            func_0x000107c39708();
            (*extraout_x8_01)();
            plVar12 = *(long **)(lVar1 + 0x230);
            unaff_w26 = plVar12 != (long *)0x0 && 0 < (long)plVar16;
            if (plVar12 == (long *)0x0 || 0 >= (long)plVar16) {
              plVar12 = plVar15;
            }
          }
        }
        func_0x000107c300f8(&plStack_b8);
      }
      else {
        func_0x000100897478();
        plVar9 = (long *)0x0;
      }
      uVar4 = *(char *)(lVar1 + 0xad) == '\x01';
      if (!(bool)uVar4) goto code_r0x000100895ebc;
      if ((bRam00000001137f6588 & 1) == 0) goto code_r0x000100895f60;
      goto code_r0x000100895e74;
    }
  }
  else {
    uVar17 = 0;
  }
code_r0x000100895ce4:
  func_0x000100897478();
  while( true ) {
    func_0x00010068ef18();
    if ((int)uVar17 != 0) {
      if (plVar12 != (long *)0x0 && ((unaff_w25 ^ 0xff) & 1) == 0) {
        uStack_90 = uStack_90 & 0xffffffffffffff00;
        uStack_78 = 0;
        (**(code **)(*plVar12 + 0x18))(plVar12,&uStack_90,plVar9,1,uVar2,1);
        func_0x000107c396e8();
      }
      uVar4 = plVar12 == (long *)0x0;
      if (!(bool)uVar4 && ((unaff_w26 ^ 0xff) & 1) == 0) {
        (**(code **)(*plVar12 + 0x28))(plVar12,1,plVar16,uVar2);
      }
    }
    func_0x000100892a50(uStack_58);
    if ((bool)uVar4) break;
    func_0x000107c60e78();
code_r0x000100895f60:
    iVar6 = 0x137f6588;
    func_0x000107c60e48();
    if (iVar6 != 0) {
      ppuVar10 = &PTR_DAT_110cede50;
      func_0x0001003ba18c();
      ppuRam00000001137f6580 = ppuVar10;
      func_0x000100600444(0x1137f6588);
    }
code_r0x000100895e74:
    ppuVar10 = (undefined **)0x0;
    if (uVar17 != 0) {
      ppuVar10 = (undefined **)((long)(uVar2 - *(long *)(lVar1 + 0x130)) / (long)uVar17);
    }
    uVar4 = ppuVar10 == ppuRam00000001137f6580;
    if ((long)ppuRam00000001137f6580 < (long)ppuVar10) {
      uStack_60 = CONCAT44(uStack_60._4_4_,4);
      func_0x000107c30104(&plStack_b8,&uStack_60,1);
      func_0x000107c39718();
      pplVar8 = &plStack_b8;
      func_0x000107c30108();
      func_0x000107c60d9c();
      *(long ***)(lVar1 + 0x130) = pplVar8;
    }
code_r0x000100895ebc:
    uVar17 = 1;
  }
  return;
}



/* Entry: 10b4a6334; end: 10b4a6353;  */

void FUN_10b4a6334(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b4a3c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b4a6354; end: 10b4a6373;  */

void FUN_10b4a6354(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b4a6374; end: 10b4a6393;  */

void FUN_10b4a6374(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b4a3c2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b4a6394; end: 10b4a6397;  */

void FUN_10b4a6394(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b4a6398; end: 10b4a6447;  */

long FUN_10b4a6398(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  ulong uVar2;
  ulong extraout_x8;
  ulong unaff_x20;
  long *plVar3;
  ulong uVar4;
  ulong unaff_x23;
  ulong uVar5;
  
  uVar4 = param_1[1];
  if ((uVar4 != 0) && (plVar1 = param_1 + 3, *plVar1 != 0)) {
    func_0x000107c39720();
    func_0x000107c39700();
    if ((bool)in_ZR) {
      uVar5 = unaff_x20 & unaff_x23;
    }
    else {
      uVar5 = unaff_x20;
      if (uVar4 <= unaff_x20) {
        uVar5 = 0;
        if (uVar4 != 0) {
          uVar5 = unaff_x20 / uVar4;
        }
        uVar5 = unaff_x20 - uVar5 * uVar4;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar2 = plVar3[1];
        if (uVar2 != unaff_x20) break;
        func_0x000107c396b0();
        if ((int)plVar1 != 0) {
          return (long)plVar3;
        }
      }
      if ((uVar4 & unaff_x23) == 0) {
        uVar2 = uVar2 & unaff_x23;
      }
      else if (uVar4 <= uVar2) {
        func_0x00010b4a6aa4();
        uVar2 = extraout_x8;
      }
    } while (uVar2 == uVar5);
  }
  return 0;
}



/* Entry: 10b4a6448; end: 10b4a64fb;  */

long FUN_10b4a6448(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 10b4a64fc; end: 10b4a652f;  */

void FUN_10b4a64fc(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107c39670();
  if (unaff_x20 != 0) {
    func_0x000107c396d8();
    if ((bool)in_ZR) {
      func_0x00010b4a5cbc(unaff_x20 + 0x10);
    }
    func_0x000107c39684();
  }
  return;
}



/* Entry: 10b4a6530; end: 10b4a6547;  */

void FUN_10b4a6530(long *param_1,long param_2)

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



/* Entry: 10b4a6548; end: 10b4a65a7;  */

void FUN_10b4a6548(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107c39670();
  if (unaff_x20 != 0) {
    func_0x000107c396d8();
    if ((bool)in_ZR) {
      func_0x00010b4a5d7c(unaff_x20 + 0x10);
    }
    func_0x000107c39684();
  }
  return;
}



/* Entry: 10b4a65a8; end: 10b4a65bf;  */

void FUN_10b4a65a8(long *param_1,long param_2)

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



/* Entry: 10b4a65c0; end: 10b4a65f3;  */

void FUN_10b4a65c0(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107c39670();
  if (unaff_x20 != 0) {
    func_0x000107c396d8();
    if ((bool)in_ZR) {
      FUN_10b4a5dec(unaff_x20 + 0x10);
    }
    func_0x000107c39684();
  }
  return;
}



/* Entry: 10b4a65f4; end: 10b4a6637;  */

long FUN_10b4a65f4(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  
  lVar2 = param_1;
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != 0) {
    func_0x00010b4a6828();
    func_0x000107c39684();
    lVar1 = unaff_x21;
  }
  func_0x00010b4a68b0();
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b4a6638; end: 10b4a664f;  */

void FUN_10b4a6638(long *param_1,long param_2)

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



/* Entry: 10b4a6650; end: 10b4a667f;  */

void FUN_10b4a6650(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x000107c39670();
  if (unaff_x20 != 0) {
    func_0x000107c396d8();
    if ((bool)in_ZR) {
      func_0x000107c396cc();
    }
    func_0x000107c39684();
  }
  return;
}



/* Entry: 10b4a6680; end: 10b4a6683;  */

void FUN_10b4a6680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cee138;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4a6684; end: 10b4a6697;  */

void FUN_10b4a6684(void)

{
  func_0x00010b4a66a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a6698; end: 10b4a66ab;  */

void FUN_10b4a6698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b4a67e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b4a66ac; end: 10b4a66d3;  */

long FUN_10b4a66ac(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b4a66d4; end: 10b4a6ad7;  */

void FUN_10b4a66d4(long param_1)

{
  undefined8 *in_x10;
  undefined8 *in_x12;
  long in_x13;
  
  *in_x10 = *in_x12;
  *in_x12 = **(undefined8 **)(param_1 + in_x13 * 8);
  **(undefined8 **)(param_1 + in_x13 * 8) = in_x12;
  return;
}



/* Entry: 10b4a6ad8; end: 10b4a6b33;  */

void FUN_10b4a6ad8(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = param_3[1];
  *param_1 = 0;
  param_1[1] = lVar1;
  lVar1 = param_3[2];
  *(char *)(param_1 + 2) = (char)lVar1;
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_3 + 0x14);
  if ((char)lVar1 == '\x01') {
    __ZNSt3__16chrono12steady_clock3nowEv();
    *param_1 = (param_2 - *param_3) / 1000000;
  }
  return;
}



/* Entry: 10b4a6b34; end: 10b4a6b43;  */

void FUN_10b4a6b34(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107377794((long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    lVar2 = *(long *)(param_1 + 0x20);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar1 * 8) = 0;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10b4a6b44; end: 10b4a6bd3;  */

void FUN_10b4a6b44(void)

{
  long lStack_40;
  undefined1 auStack_38 [20];
  undefined4 uStack_24;
  
  uStack_24 = 0;
  func_0x000107c39780();
  if (*(char *)(lStack_40 + 0x10) == '\x01') {
    FUN_10b4a6ad8(auStack_38);
    FUN_10b4a6b34(lStack_40);
    func_0x000107c3977c();
    func_0x000107c30128();
    func_0x00010b4a72d8();
    FUN_10b4a6bd4();
    func_0x00010b4a72c4();
    func_0x00010b4a72bc();
    func_0x00010b4a72ac();
  }
  else {
    func_0x000107c3977c();
  }
  return;
}



/* Entry: 10b4a6bd4; end: 10b4a6c9f;  */

void FUN_10b4a6bd4(long *param_1,ulong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  
  puVar2 = param_2;
  FUN_10b4a6d20();
  FUN_10b4a6d4c(param_1);
  lVar3 = *param_1;
  *(ulong *)(lVar3 + 0x58) = *param_2 / 1000;
  *(undefined1 *)(lVar3 + 0x60) = 1;
  lVar3 = *param_1;
  *(ulong *)(lVar3 + 0x68) = param_2[1] / 1000;
  *(undefined1 *)(lVar3 + 0x70) = 1;
  lVar3 = *param_1;
  *(ulong *)(lVar3 + 0x48) = (ulong)puVar2 & ((long)puVar2 >> 0x3f ^ 0xffffffffffffffffU);
  *(undefined1 *)(lVar3 + 0x50) = 1;
  lVar3 = *param_1;
  iVar1 = *(int *)((long)param_2 + 0x14);
  if (3 < iVar1 - 1U) {
    iVar1 = 0;
  }
  *(int *)(lVar3 + 0x14) = iVar1;
  *(undefined1 *)(lVar3 + 0x18) = 1;
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0x1c) = param_4;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  func_0x000107c27b98(*param_1 + 0x28,param_3);
  return;
}



/* Entry: 10b4a6ca0; end: 10b4a6cd3;  */

long FUN_10b4a6ca0(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_10b4a6f4c(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 10b4a6cd4; end: 10b4a6d1f;  */

void FUN_10b4a6cd4(undefined1 *param_1)

{
  bool bVar1;
  long lStack_28;
  
  func_0x000107c3975c();
  bVar1 = (*(byte *)(lStack_28 + 0x10) & 1) == 0;
  if (bVar1) {
    *param_1 = 0;
  }
  else {
    FUN_10b4a6ad8(param_1);
  }
  param_1[0x18] = !bVar1;
  func_0x000107c39764();
  return;
}



/* Entry: 10b4a6d20; end: 10b4a6d4b;  */

ulong FUN_10b4a6d20(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (((char)param_1[2] == '\x01') && (uVar2 = *param_1, uVar2 != 0)) {
    uVar1 = 0;
    if (uVar2 != 0) {
      uVar1 = (param_1[1] << 3) / uVar2;
    }
    return uVar1;
  }
  return 0xffffffffffffffff;
}



/* Entry: 10b4a6d4c; end: 10b4a6d6b;  */

void FUN_10b4a6d4c(void)

{
  undefined1 uStack_11;
  
  FUN_10b4a6d6c(&uStack_11);
  return;
}



/* Entry: 10b4a6d6c; end: 10b4a6deb;  */

undefined1 * FUN_10b4a6d6c(long *param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_10b4a6dec(auStack_40);
  FUN_10b4a6e44(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010b4a6f14();
  func_0x000107c3978c(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b4a6f14();
  func_0x00010b4a72a4();
  *(undefined8 *)(puVar3 + 8) = uVar4;
  puVar2 = puVar3;
  FUN_10b4a6e14();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10b4a6dec; end: 10b4a6e13;  */

long FUN_10b4a6dec(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b4a6e14();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b4a6e14; end: 10b4a6e43;  */

undefined8 * FUN_10b4a6e14(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x1c71c71c71c71c8) {
    puVar1 = (undefined8 *)(param_2 * 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cee188;
  func_0x00010b4a6e9c(param_1 + 3);
  return param_1;
}



/* Entry: 10b4a6e44; end: 10b4a6e73;  */

undefined8 * FUN_10b4a6e44(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cee188;
  func_0x00010b4a6e9c(param_1 + 3);
  return param_1;
}



/* Entry: 10b4a6e74; end: 10b4a6e77;  */

void FUN_10b4a6e74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cee188;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4a6e78; end: 10b4a6e8b;  */

void FUN_10b4a6e78(void)

{
  func_0x00010b4a6f04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a6e8c; end: 10b4a6f23;  */

void FUN_10b4a6e8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b4a6e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10b4a6f24; end: 10b4a6f4b;  */

long FUN_10b4a6f24(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b4a6f4c; end: 10b4a7153;  */

undefined1  [16]
FUN_10b4a6f4c(float param_1,float param_2,long *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 *param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  plVar5 = param_3 + 3;
  func_0x000107c278c4();
  plVar7 = (long *)param_3[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x25 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar7 <= plVar5) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar1 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_3 + (long)unaff_x25 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10b4a7010;
          plVar3 = (long *)plVar6[1];
          if (plVar3 != plVar5) break;
          plVar3 = plVar6 + 2;
          func_0x000107c278d0(plVar3,param_4);
          if (((ulong)plVar3 & 1) != 0) {
            uVar2 = 0;
            goto LAB_10b4a7138;
          }
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar3 = (long *)((ulong)plVar3 & uVar8);
        }
        else if (plVar7 <= plVar3) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar3 / (ulong)plVar7;
          }
          plVar3 = (long *)((long)plVar3 - uVar1 * (long)plVar7);
        }
      } while (plVar3 == unaff_x25);
    }
  }
LAB_10b4a7010:
  uVar2 = *param_6;
  plVar3 = param_3 + 2;
  plVar6 = (long *)0x30;
  __Znwm();
  *plVar6 = 0;
  plVar6[1] = (long)plVar5;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar6 + 2,uVar2);
  plVar6[5] = 0;
  func_0x000107c39788();
  if ((plVar7 == (long *)0x0) || (param_2 * (float)plVar7 < param_1)) {
    func_0x000107c39754((long)plVar7 << 1);
    func_0x00010737395c(param_3);
    plVar7 = (long *)param_3[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  lVar4 = *param_3;
  plVar5 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    *plVar6 = *plVar3;
    *plVar3 = (long)plVar6;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar3;
    if (*plVar6 != 0) {
      plVar5 = *(long **)(*plVar6 + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
      *(long **)(lVar4 + (long)plVar5 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar5;
    *plVar5 = (long)plVar6;
  }
  param_3[3] = param_3[3] + 1;
  func_0x00010b4a72d0();
  uVar2 = 1;
LAB_10b4a7138:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 10b4a7154; end: 10b4a7187;  */

undefined8 FUN_10b4a7154(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10b4a7188(auStack_38);
  func_0x00010b4a72d0();
  return uVar1;
}



/* Entry: 10b4a7188; end: 10b4a72eb;  */

void FUN_10b4a7188(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b4a723c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b4a723c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10b4a723c:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10b4a72ec; end: 10b4a73f7;  */

void FUN_10b4a72ec(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined1 auStack_1d8 [40];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [112];
  undefined1 auStack_128 [40];
  long *plStack_100;
  undefined8 uStack_f8;
  long lStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *param_3;
  if (lVar7 != 0) {
    plVar4 = *(long **)(param_2 + 0x10);
    lStack_90 = param_3[1];
    if (lStack_90 != 0) {
      plVar1 = (long *)(lStack_90 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    pcStack_88 = FUN_10b4a73f8;
    ppuStack_80 = &PTR_FUN_110cee278;
    if (lStack_90 != 0) {
      plVar1 = (long *)(lStack_90 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lStack_98 = lVar7;
    lStack_78 = param_2;
    lStack_70 = lVar7;
    lStack_68 = lStack_90;
    (**(code **)(*plVar4 + 0x10))(plVar4,&pcStack_88);
    (*(code *)*ppuStack_80)(&ppuStack_80);
    func_0x000105979594();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  plVar4 = &lStack_98;
  func_0x000105979594();
  func_0x00010b4a7728();
  lVar7 = plVar4[2];
  plStack_100 = (long *)0x0;
  uStack_f8 = 0;
  __ZNSt3__15mutex4lockEv(lVar7 + 0x20);
  func_0x000107c3012c(&plStack_100,lVar7);
  __ZNSt3__15mutex6unlockEv(lVar7 + 0x20);
  if (plStack_100 != (long *)0x0) {
    puVar5 = (undefined8 *)(plVar4[3] + 8);
    (**(code **)*puVar5)(auStack_128);
    func_0x00010b4a771c();
    (**(code **)(extraout_x8 + 0x28))();
    if ((uint)puVar5 < 5) {
      uVar8 = *(undefined4 *)(&UNK_10e5b3d70 + ((ulong)puVar5 & 0xffffffff) * 4);
    }
    else {
      uVar8 = 3;
    }
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_00 + 0x30))();
    puVar6 = puVar5;
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_01 + 0x20))(auStack_1b0);
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_02 + 8))();
    func_0x000107c27bc0(auStack_1d8,auStack_128);
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_03 + 0x38))();
    uVar9 = param_1;
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_04 + 0x40))();
    uVar10 = uVar9;
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_05 + 0x48))();
    func_0x000106af5b68(param_1,uVar9,uVar10,auStack_198,puVar5,auStack_1b0,puVar6,auStack_1d8,uVar8
                       );
    func_0x000107c278e0(auStack_1d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
    plVar1 = plStack_100;
    lVar7 = plVar4[4];
    lVar12 = plVar4[4];
    lVar11 = plVar4[3];
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_110cee238;
    puVar5[1] = 0;
    puStack_1e8 = puVar5 + 3;
    *puStack_1e8 = &PTR_FUN_110cee2a0;
    puVar5[5] = lVar12;
    puVar5[4] = lVar11;
    if (lVar7 != 0) {
      plVar4 = (long *)(lVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = *plVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    puStack_1e0 = puVar5;
    (**(code **)(*plVar1 + 0x10))(plVar1,auStack_198,&puStack_1e8);
    func_0x000106af61cc(&puStack_1e8);
    FUN_10b4a7688(&uStack_1f8);
    func_0x00010b4a76b0(auStack_198);
    func_0x000107c278e0(auStack_128);
  }
  func_0x000107c28368(&plStack_100);
  return;
}



/* Entry: 10b4a73f8; end: 10b4a764f;  */

void FUN_10b4a73f8(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_138 [40];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [112];
  undefined1 auStack_88 [40];
  long *plStack_60;
  undefined8 uStack_58;
  
  lVar8 = *(long *)(param_2 + 0x10);
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  __ZNSt3__15mutex4lockEv(lVar8 + 0x20);
  func_0x000107c3012c(&plStack_60,lVar8);
  __ZNSt3__15mutex6unlockEv(lVar8 + 0x20);
  if (plStack_60 != (long *)0x0) {
    puVar5 = (undefined8 *)(*(long *)(param_2 + 0x18) + 8);
    (**(code **)*puVar5)(auStack_88);
    func_0x00010b4a771c();
    (**(code **)(extraout_x8 + 0x28))();
    if ((uint)puVar5 < 5) {
      uVar7 = *(undefined4 *)(&UNK_10e5b3d70 + ((ulong)puVar5 & 0xffffffff) * 4);
    }
    else {
      uVar7 = 3;
    }
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_00 + 0x30))();
    puVar6 = puVar5;
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_01 + 0x20))(auStack_110);
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_02 + 8))();
    func_0x000107c27bc0(auStack_138,auStack_88);
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_03 + 0x38))();
    uVar9 = param_1;
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_04 + 0x40))();
    uVar10 = uVar9;
    func_0x00010b4a771c();
    (**(code **)(extraout_x8_05 + 0x48))();
    func_0x000106af5b68(param_1,uVar9,uVar10,auStack_f8,puVar5,auStack_110,puVar6,auStack_138,uVar7)
    ;
    func_0x000107c278e0(auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
    plVar4 = plStack_60;
    lVar8 = *(long *)(param_2 + 0x20);
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_110cee238;
    puVar5[1] = 0;
    puStack_148 = puVar5 + 3;
    *puStack_148 = &PTR_FUN_110cee2a0;
    puVar5[5] = uVar10;
    puVar5[4] = uVar9;
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_140 = puVar5;
    (**(code **)(*plVar4 + 0x10))(plVar4,auStack_f8,&puStack_148);
    func_0x000106af61cc(&puStack_148);
    FUN_10b4a7688(&uStack_158);
    func_0x00010b4a76b0(auStack_f8);
    func_0x000107c278e0(auStack_88);
  }
  func_0x000107c28368(&plStack_60);
  return;
}



/* Entry: 10b4a7650; end: 10b4a7653;  */

void FUN_10b4a7650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cee238;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4a7654; end: 10b4a7667;  */

void FUN_10b4a7654(void)

{
  func_0x00010b4a7678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a7668; end: 10b4a7687;  */

void FUN_10b4a7668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b4a7670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b4a7688; end: 10b4a76db;  */

long FUN_10b4a7688(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b4a76dc; end: 10b4a772f;  */

long FUN_10b4a76dc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x10;
}



/* Entry: 10b4a7730; end: 10b4a7787;  */

void FUN_10b4a7730(long param_1)

{
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  
  auStack_50[0] = 0;
  uStack_28 = 0;
  (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),auStack_50);
  func_0x00010b4a77a0(auStack_50);
  return;
}



/* Entry: 10b4a7788; end: 10b4a778b;  */

undefined8 * FUN_10b4a7788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cee2a0;
  func_0x000105979594(param_1 + 1);
  return param_1;
}



/* Entry: 10b4a778c; end: 10b4a77bf;  */

void FUN_10b4a778c(void)

{
  FUN_10b4a77c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a77c0; end: 10b4a77ef;  */

undefined8 * FUN_10b4a77c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cee2a0;
  func_0x000105979594(param_1 + 1);
  return param_1;
}



/* Entry: 10b4a77f0; end: 10b4a7853;  */

undefined8 * FUN_10b4a77f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000107c27fdc(param_1,0x2000);
  puVar1[3] = &PTR_DAT_110cf0f60;
  puVar1[4] = *puVar1;
  puVar1[6] = 0;
  puVar1[5] = 0x200000002000;
  FUN_10b4a7b24(puVar1 + 7);
  return param_1;
}



/* Entry: 10b4a7854; end: 10b4a78b3;  */

void FUN_10b4a7854(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 + 0x38;
  FUN_10b4a78b4();
  if (iVar1 == 0) {
    func_0x000105340004(param_1,*param_2,param_2[1]);
    param_2 = param_2 + 7;
    func_0x00010b4a78e0(param_2);
    func_0x000107c2823c(param_1,(long)(int)param_2);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10b4a78b4; end: 10b4a7963;  */

undefined1 FUN_10b4a78b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010b4d4e30(param_1,*(undefined8 *)(param_1 + 0x40));
  *(long *)(param_1 + 0x40) = lVar1;
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 10b4a7964; end: 10b4a799b;  */

void FUN_10b4a7964(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x00010b4a7bf0(1);
  puVar1 = (undefined8 *)(param_2 + 0x38);
  func_0x00010b4a7bfc();
  *puVar1 = param_1;
  *(undefined8 **)(unaff_x20 + 0x40) = puVar1 + 1;
  return;
}



/* Entry: 10b4a799c; end: 10b4a7a93;  */

void FUN_10b4a799c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010b4a7bfc();
  *param_1 = param_2;
  *(undefined8 **)(unaff_x20 + 0x40) = param_1 + 1;
  return;
}



/* Entry: 10b4a7a94; end: 10b4a7aaf;  */

void FUN_10b4a7a94(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  iVar1 = (int)param_2[1];
  plVar2 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    iVar1 = (int)*(char *)((long)param_2 + 0x17);
    plVar2 = param_2;
  }
  lVar3 = param_1;
  func_0x0001053930c4(param_1,plVar2,iVar1,*(undefined8 *)(param_1 + 0x40));
  *(long *)(param_1 + 0x40) = lVar3;
  return;
}



/* Entry: 10b4a7ab0; end: 10b4a7ad7;  */

void FUN_10b4a7ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  FUN_10b4a7be0();
  lVar1 = unaff_x20 + 0x38;
  func_0x00010b4a7bfc();
  *(long *)(unaff_x20 + 0x40) = lVar1;
  func_0x000107c280a8(param_3,lVar1);
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  return;
}



/* Entry: 10b4a7ad8; end: 10b4a7b23;  */

void FUN_10b4a7ad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010b4a7bf0(2);
  func_0x00010b4a7a64(param_1 + 0x38,param_4);
  lVar1 = param_1 + 0x38;
  func_0x0001053930c4(lVar1,param_3,param_4,*(undefined8 *)(param_1 + 0x78));
  *(long *)(param_1 + 0x78) = lVar1;
  return;
}



/* Entry: 10b4a7b24; end: 10b4a7bdf;  */

long * FUN_10b4a7b24(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar3 = uRam000000011383d940;
  plVar1 = param_1 + 2;
  *param_1 = (long)plVar1;
  param_1[1] = (long)plVar1;
  param_1[6] = param_2;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3a) = uVar3;
  *(undefined1 *)((long)param_1 + 0x3b) = 0;
  iVar2 = *(int *)(param_2 + 0x18);
  param_1[8] = (long)plVar1;
  param_1[9] = (long)iVar2;
  func_0x00010b4a7b74();
  return param_1;
}



/* Entry: 10b4a7be0; end: 10b4a7c67;  */

void FUN_10b4a7be0(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(uint)(param_2 << 3);
  lVar1 = param_1 + 0x38;
  func_0x00010b4a7bfc();
  *(long *)(param_1 + 0x40) = lVar1;
  func_0x000107c280a8(uVar2,lVar1);
  *(ulong *)(param_1 + 0x40) = uVar2;
  return;
}



/* Entry: 10b4a7c68; end: 10b4a7e87;  */

void FUN_10b4a7c68(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x90) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x88);
    func_0x0001072833b8();
    __ZNSt3__19to_stringEx(&uStack_60,*puVar1);
    puVar2 = (undefined8 *)0x40;
    __Znwm();
    puStack_40 = param_1 + 2;
    uStack_38 = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puStack_48 = puVar2;
    func_0x000107c278b8(puVar2 + 2,&DAT_10f770c70);
    puVar2[6] = uStack_58;
    puVar2[5] = uStack_60;
    puVar2[7] = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_38 = CONCAT71(uStack_38._1_7_,1);
    puVar1 = param_1 + 3;
    func_0x000107c278c4(puVar1,puVar2 + 2);
    puVar2[1] = puVar1;
    func_0x000105971280(param_1);
    if (((ulong)puVar2 & 1) != 0) {
      puStack_48 = (undefined8 *)0x0;
    }
    func_0x000107c278dc(&puStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar3 = param_2 + 0x10;
    func_0x00010549026c(lVar3);
    FUN_10b4a7e88(param_1,&DAT_10f2f4961,lVar3);
  }
  if (*(char *)(param_2 + 0x78) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x70);
    func_0x0001072833b8();
    func_0x00010b4a8730(*puVar1);
    func_0x00010b4a7ea0(param_1,&DAT_10f770c81,&puStack_48);
    func_0x00010b4a8744();
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    lVar3 = param_2 + 0x30;
    func_0x00010549026c(lVar3);
    func_0x00010b4a7eb8(param_1,"media_context_type",lVar3);
  }
  if (*(char *)(param_2 + 0x68) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x60);
    func_0x0001072833b8();
    func_0x00010b4a8730(*puVar1);
    func_0x00010b4a7ed0(param_1,&DAT_10f770c96,&puStack_48);
    func_0x00010b4a8744();
  }
  if (*(char *)(param_2 + 0x58) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x50);
    func_0x0001072833b8();
    func_0x00010b4a8730(*puVar1);
    func_0x00010b4a7ee8(param_1,&DAT_10f770ca4,&puStack_48);
    func_0x00010b4a8744();
  }
  return;
}



/* Entry: 10b4a7e88; end: 10b4a7eff;  */

void FUN_10b4a7e88(void)

{
  FUN_10b4a829c();
  return;
}



/* Entry: 10b4a7f00; end: 10b4a7f07;  */

void FUN_10b4a7f00(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x88) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x80);
    func_0x0001072833b8();
    __ZNSt3__19to_stringEx(&uStack_60,*puVar1);
    puVar2 = (undefined8 *)0x40;
    __Znwm();
    puStack_40 = param_1 + 2;
    uStack_38 = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puStack_48 = puVar2;
    func_0x000107c278b8(puVar2 + 2,&DAT_10f770c70);
    puVar2[6] = uStack_58;
    puVar2[5] = uStack_60;
    puVar2[7] = uStack_50;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_38 = CONCAT71(uStack_38._1_7_,1);
    puVar1 = param_1 + 3;
    func_0x000107c278c4(puVar1,puVar2 + 2);
    puVar2[1] = puVar1;
    func_0x000105971280(param_1);
    if (((ulong)puVar2 & 1) != 0) {
      puStack_48 = (undefined8 *)0x0;
    }
    func_0x000107c278dc(&puStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    lVar3 = param_2 + 8;
    func_0x00010549026c(lVar3);
    FUN_10b4a7e88(param_1,&DAT_10f2f4961,lVar3);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x68);
    func_0x0001072833b8();
    func_0x00010b4a8730(*puVar1);
    func_0x00010b4a7ea0(param_1,&DAT_10f770c81,&puStack_48);
    func_0x00010b4a8744();
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    lVar3 = param_2 + 0x28;
    func_0x00010549026c(lVar3);
    func_0x00010b4a7eb8(param_1,"media_context_type",lVar3);
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x58);
    func_0x0001072833b8();
    func_0x00010b4a8730(*puVar1);
    func_0x00010b4a7ed0(param_1,&DAT_10f770c96,&puStack_48);
    func_0x00010b4a8744();
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x48);
    func_0x0001072833b8();
    func_0x00010b4a8730(*puVar1);
    func_0x00010b4a7ee8(param_1,&DAT_10f770ca4,&puStack_48);
    func_0x00010b4a8744();
  }
  return;
}



/* Entry: 10b4a7f08; end: 10b4a821f;  */

undefined8 * FUN_10b4a7f08(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 auStack_d0 [17];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_d0;
  FUN_10b4a77f0();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    bVar1 = *(long *)(param_3 + 0x18) == 0;
    if ((*(byte *)(param_2 + 0x90) & 1) == 0) goto LAB_10b4a7fbc;
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_10b4a7f90;
    func_0x00010b4a8664();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a7f94;
    }
    if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a7fe0;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a8018:
    if ((*(byte *)(param_2 + 0x78) & 1) == 0) goto LAB_10b4a8070;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a8050:
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 0x20;
      func_0x00010b4a86ec();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,4,uVar4);
      goto LAB_10b4a8070;
    }
LAB_10b4a803c:
    func_0x00010b4a8664();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a8050;
    }
    if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a8094;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a80cc:
    if ((*(byte *)(param_2 + 0x68) & 1) == 0) goto LAB_10b4a8124;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a8104:
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 8;
      func_0x00010b4a86ec();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,6,uVar4);
      goto LAB_10b4a8124;
    }
LAB_10b4a80f0:
    func_0x00010b4a8664();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a8104;
    }
    if ((*(byte *)(param_2 + 0x58) & 1) == 0) goto LAB_10b4a8164;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a8134:
    func_0x00010b4a8664();
    if (puVar2 == (undefined8 *)0x0) goto LAB_10b4a8164;
  }
  else {
    if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
      bVar1 = true;
    }
    else {
LAB_10b4a7f90:
      bVar1 = true;
LAB_10b4a7f94:
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 0x80;
      func_0x00010b4a86ec();
      uVar4 = *puVar2;
      puVar2 = auStack_d0;
      func_0x00010b4a79c0(puVar2,2,uVar4);
    }
LAB_10b4a7fbc:
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) goto LAB_10b4a8018;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a7ff4:
      lVar3 = param_2 + 0x10;
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 0x40;
      func_0x00010549026c(lVar3);
      puVar2 = auStack_d0;
      func_0x00010b4a7a18(puVar2,3,lVar3);
      goto LAB_10b4a8018;
    }
LAB_10b4a7fe0:
    func_0x00010b4a8664();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a7ff4;
    }
    if ((*(byte *)(param_2 + 0x78) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a803c;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a8070:
    if ((*(byte *)(param_2 + 0x48) & 1) == 0) goto LAB_10b4a80cc;
    if (bVar1) {
      bVar1 = true;
LAB_10b4a80a8:
      lVar3 = param_2 + 0x30;
      *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 0x10;
      func_0x00010549026c(lVar3);
      puVar2 = auStack_d0;
      func_0x00010b4a7a18(puVar2,5,lVar3);
      goto LAB_10b4a80cc;
    }
LAB_10b4a8094:
    func_0x00010b4a8664();
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = false;
      goto LAB_10b4a80a8;
    }
    if ((*(byte *)(param_2 + 0x68) & 1) != 0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_10b4a80f0;
    }
    bVar1 = false;
    puVar2 = (undefined8 *)0x0;
LAB_10b4a8124:
    if ((*(byte *)(param_2 + 0x58) & 1) == 0) goto LAB_10b4a8164;
    if (!bVar1) goto LAB_10b4a8134;
  }
  *(byte *)(param_2 + 0x80) = *(byte *)(param_2 + 0x80) | 4;
  func_0x00010b4a86ec();
  func_0x00010b4a79c0(auStack_d0,7,*puVar2);
LAB_10b4a8164:
  FUN_10b4a7ad8(auStack_d0,1,param_2 + 0x80,1);
  FUN_10b4a7854(param_1,auStack_d0);
  puVar2 = auStack_d0;
  FUN_10b4a8238();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar2 = auStack_d0;
    FUN_10b4a8238();
    func_0x00010b4a86b8();
    *puVar2 = &PTR____cxa_pure_virtual_110cc65b0;
    puVar2[1] = &PTR____cxa_pure_virtual_110cc6610;
    func_0x000107c279a4(puVar2 + 6);
    func_0x000107c279a4(puVar2 + 2);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b4a8220; end: 10b4a8223;  */

undefined8 * FUN_10b4a8220(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110cc65b0;
  param_1[1] = &PTR____cxa_pure_virtual_110cc6610;
  func_0x000107c279a4(param_1 + 6);
  func_0x000107c279a4(param_1 + 2);
  return param_1;
}



/* Entry: 10b4a8224; end: 10b4a8237;  */

void FUN_10b4a8224(void)

{
  func_0x00010b4a8260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4a8238; end: 10b4a829b;  */

long FUN_10b4a8238(long param_1)

{
  long lStack_28;
  
  FUN_10b4d51a4(param_1 + 0x38);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 10b4a829c; end: 10b4a82b3;  */

void FUN_10b4a829c(void)

{
  FUN_10b4a82b4();
  return;
}



/* Entry: 10b4a82b4; end: 10b4a82f7;  */

void FUN_10b4a82b4(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4a8700();
  FUN_10b4a82f8();
  func_0x00010b4a86c8(param_1,uStack_38);
  func_0x00010b4a86f4();
  func_0x00010b4a86a8();
  func_0x00010b4a870c();
  return;
}



/* Entry: 10b4a82f8; end: 10b4a8333;  */

void FUN_10b4a82f8(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a8624();
  func_0x00010b4a8670();
  func_0x00010b4a8718();
  FUN_10b4a8334();
  func_0x00010b4a8640();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a8334; end: 10b4a835b;  */

void FUN_10b4a8334(void)

{
  func_0x00010b4a874c();
  func_0x00010b4a8738();
  return;
}



/* Entry: 10b4a835c; end: 10b4a8373;  */

void FUN_10b4a835c(void)

{
  FUN_10b4a8374();
  return;
}



/* Entry: 10b4a8374; end: 10b4a83b7;  */

void FUN_10b4a8374(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4a8700();
  FUN_10b4a83b8();
  func_0x00010b4a86c8(param_1,uStack_38);
  func_0x00010b4a86f4();
  func_0x00010b4a86a8();
  func_0x00010b4a870c();
  return;
}



/* Entry: 10b4a83b8; end: 10b4a83f3;  */

void FUN_10b4a83b8(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a8624();
  func_0x00010b4a8670();
  func_0x00010b4a8718();
  FUN_10b4a83f4();
  func_0x00010b4a8640();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a83f4; end: 10b4a8413;  */

void FUN_10b4a83f4(void)

{
  func_0x000107c278b8();
  func_0x00010b4a86d0();
  return;
}



/* Entry: 10b4a8414; end: 10b4a842b;  */

void FUN_10b4a8414(void)

{
  FUN_10b4a842c();
  return;
}



/* Entry: 10b4a842c; end: 10b4a846f;  */

void FUN_10b4a842c(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4a8700();
  FUN_10b4a8470();
  func_0x00010b4a86c8(param_1,uStack_38);
  func_0x00010b4a86f4();
  func_0x00010b4a86a8();
  func_0x00010b4a870c();
  return;
}



/* Entry: 10b4a8470; end: 10b4a84ab;  */

void FUN_10b4a8470(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a8624();
  func_0x00010b4a8670();
  func_0x00010b4a8718();
  FUN_10b4a84ac();
  func_0x00010b4a8640();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a84ac; end: 10b4a84d3;  */

void FUN_10b4a84ac(void)

{
  func_0x00010b4a874c();
  func_0x00010b4a8738();
  return;
}



/* Entry: 10b4a84d4; end: 10b4a84eb;  */

void FUN_10b4a84d4(void)

{
  FUN_10b4a84ec();
  return;
}



/* Entry: 10b4a84ec; end: 10b4a852f;  */

void FUN_10b4a84ec(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4a8700();
  FUN_10b4a8530();
  func_0x00010b4a86c8(param_1,uStack_38);
  func_0x00010b4a86f4();
  func_0x00010b4a86a8();
  func_0x00010b4a870c();
  return;
}



/* Entry: 10b4a8530; end: 10b4a856b;  */

void FUN_10b4a8530(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a8624();
  func_0x00010b4a8670();
  func_0x00010b4a8718();
  FUN_10b4a856c();
  func_0x00010b4a8640();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a856c; end: 10b4a858b;  */

void FUN_10b4a856c(void)

{
  func_0x000107c278b8();
  func_0x00010b4a86d0();
  return;
}



/* Entry: 10b4a858c; end: 10b4a85a3;  */

void FUN_10b4a858c(void)

{
  FUN_10b4a85a4();
  return;
}



/* Entry: 10b4a85a4; end: 10b4a85e7;  */

void FUN_10b4a85a4(undefined8 param_1)

{
  undefined8 uStack_38;
  
  func_0x00010b4a8700();
  FUN_10b4a85e8();
  func_0x00010b4a86c8(param_1,uStack_38);
  func_0x00010b4a86f4();
  func_0x00010b4a86a8();
  func_0x00010b4a870c();
  return;
}



/* Entry: 10b4a85e8; end: 10b4a8623;  */

void FUN_10b4a85e8(undefined8 param_1)

{
  long unaff_x21;
  
  FUN_10b4a8624();
  func_0x00010b4a8670();
  func_0x00010b4a8718();
  func_0x0001089928c8();
  func_0x00010b4a8640();
  *(undefined8 *)(unaff_x21 + 8) = param_1;
  return;
}



/* Entry: 10b4a8624; end: 10b4a8797;  */

void FUN_10b4a8624(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x40);
  return;
}



/* Entry: 10b4a8798; end: 10b4a89c7;  */

void FUN_10b4a8798(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [24];
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x90) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x88);
    func_0x0001072833b8();
    func_0x00010b4a9224(*puVar1);
    func_0x00010b4a9234();
    FUN_10b4a89c8();
    func_0x00010b4a9204();
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar2 = param_2 + 0x10;
    func_0x00010549026c(lVar2);
    FUN_10b4a7e88(param_1,&DAT_10f2f4961,lVar2);
  }
  if (*(char *)(param_2 + 0x78) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x70);
    func_0x0001072833b8();
    func_0x00010b4a9224(*puVar1);
    func_0x00010b4a9234();
    func_0x00010b4a7ea0();
    func_0x00010b4a9204();
  }
  if (*(char *)(param_2 + 0x48) == '\x01') {
    lVar2 = param_2 + 0x30;
    func_0x00010549026c(lVar2);
    func_0x00010b4a7eb8(param_1,"media_context_type",lVar2);
  }
  if (*(char *)(param_2 + 0x68) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x60);
    func_0x0001072833b8();
    func_0x00010b4a9224(*puVar1);
    func_0x00010b4a9234();
    func_0x00010b4a7ed0();
    func_0x00010b4a9204();
  }
  if (*(char *)(param_2 + 0x58) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x50);
    func_0x0001072833b8();
    func_0x00010b4a9224(*puVar1);
    func_0x00010b4a9234();
    func_0x00010b4a7ee8();
    func_0x00010b4a9204();
  }
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x98);
    func_0x0001072833b8();
    func_0x00010b4a9224(*puVar1);
    func_0x00010b4a9234();
    func_0x00010b4a89e0();
    func_0x00010b4a9204();
  }
  if (*(char *)(param_2 + 0xa9) == '\x01') {
    puVar3 = (undefined1 *)(param_2 + 0xa8);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(auStack_38,*puVar3);
    func_0x00010b4a9234();
    func_0x00010b4a89f8();
    func_0x00010b4a9204();
  }
  if (*(char *)(param_2 + 0xab) == '\x01') {
    puVar3 = (undefined1 *)(param_2 + 0xaa);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(auStack_38,*puVar3);
    func_0x00010b4a9234();
    func_0x00010b4a8a10();
    func_0x00010b4a9204();
  }
  return;
}



/* Entry: 10b4a89c8; end: 10b4a8a27;  */

void FUN_10b4a89c8(void)

{
  func_0x00010b4a8e94();
  return;
}



/* Entry: 10b4a8a28; end: 10b4a8a2f;  */

void FUN_10b4a8a28(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [24];
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*(char *)(param_2 + 0x88) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x80);
    func_0x0001072833b8();
    func_0x00010b4a9224(*puVar1);
    func_0x00010b4a9234();
    FUN_10b4a89c8();
    func_0x00010b4a9204();
  }
  if (*(char *)(param_2 + 0x20) == '\x01') {
    lVar2 = param_2 + 8;
    func_0x00010549026c(lVar2);
    FUN_10b4a7e88(param_1,&DAT_10f2f4961,lVar2);
  }
  if (*(char *)(param_2 + 0x70) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x68);
    func_0x0001072833b8();
    func_0x00010b4a9224(*puVar1);
    func_0x00010b4a9234();
    func_0x00010b4a7ea0();
    func_0x00010b4a9204();
  }
  if (*(char *)(param_2 + 0x40) == '\x01') {
    lVar2 = param_2 + 0x28;
    func_0x00010549026c(lVar2);
    func_0x00010b4a7eb8(param_1,"media_context_type",lVar2);
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x58);
    func_0x0001072833b8();
    func_0x00010b4a9224(*puVar1);
    func_0x00010b4a9234();
    func_0x00010b4a7ed0();
    func_0x00010b4a9204();
  }
  if (*(char *)(param_2 + 0x50) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x48);
    func_0x0001072833b8();
    func_0x00010b4a9224(*puVar1);
    func_0x00010b4a9234();
    func_0x00010b4a7ee8();
    func_0x00010b4a9204();
  }
  if (*(char *)(param_2 + 0x98) == '\x01') {
    puVar1 = (undefined8 *)(param_2 + 0x90);
    func_0x0001072833b8();
    func_0x00010b4a9224(*puVar1);
    func_0x00010b4a9234();
    func_0x00010b4a89e0();
    func_0x00010b4a9204();
  }
  if (*(char *)(param_2 + 0xa1) == '\x01') {
    puVar3 = (undefined1 *)(param_2 + 0xa0);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(auStack_38,*puVar3);
    func_0x00010b4a9234();
    func_0x00010b4a89f8();
    func_0x00010b4a9204();
  }
  if (*(char *)(param_2 + 0xa3) == '\x01') {
    puVar3 = (undefined1 *)(param_2 + 0xa2);
    func_0x000107c29334();
    __ZNSt3__19to_stringEi(auStack_38,*puVar3);
    func_0x00010b4a9234();
    func_0x00010b4a8a10();
    func_0x00010b4a9204();
  }
  return;
}


