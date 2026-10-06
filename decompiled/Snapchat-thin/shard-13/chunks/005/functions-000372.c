/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a818274; end: 10a8182b7;  */

void FUN_10a818274(void)

{
  FUN_10a818204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a8182b8; end: 10a8182bf;  */

undefined ** FUN_10a8182b8(long param_1,undefined **param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined8 uStack_38;
  ulong uStack_30;
  byte bStack_28;
  
  uVar3 = 0x3f800000;
  (**(code **)(*param_2 + 0x48))(param_2,&PTR_DAT_110c62030);
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  ppuVar2 = param_2;
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c62050,*(undefined4 *)(param_1 + 0x9c));
  *(int *)(param_1 + 0x9c) = (int)ppuVar2;
  ppuVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c62070);
  if ((int)ppuVar2 != 0) {
    FUN_10a4cd514(param_2,&PTR_DAT_110c62070,param_1 + 0xa0);
  }
  ppuVar2 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c62090);
  if ((int)ppuVar2 != 0) {
    ppuVar2 = &PTR_DAT_110c62090;
    (**(code **)(*param_2 + 0x1d8))(&uStack_38);
    if ((bStack_28 & 1) == 0) {
      FUN_10a108fd4(&PTR_DAT_110c62090);
    }
    else if ((uStack_30 & 7) == 0) {
      func_0x000108a851e4((undefined8 *)(param_1 + 0xb8),uStack_30 >> 3);
      if ((bStack_28 & 1) != 0) {
        ppuVar2 = *(undefined ***)(param_1 + 0xb8);
        _memcpy(ppuVar2,uStack_38,uStack_30);
        return ppuVar2;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10a4cd584);
      (*pcVar1)();
    }
    FUN_10a324f10();
    *ppuVar2 = (undefined *)&PTR_DAT_110be7a28;
    FUN_10a505720(ppuVar2 + 2);
    FUN_10a5056f8(ppuVar2 + 1);
    return ppuVar2;
  }
  return ppuVar2;
}



/* Entry: 10a8182c0; end: 10a818307;  */

void FUN_10a8182c0(long param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  
  func_0x0001072d306c(auStack_48,*param_2,param_2[1]);
  func_0x000107c283f0(param_1 + 0xf0,auStack_48);
  func_0x000107c2826c(auStack_48);
  return;
}



/* Entry: 10a818308; end: 10a818763;  */

void FUN_10a818308(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
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
  float fVar17;
  
  plVar1 = (long *)(param_1 + 0x118);
  plVar9 = plVar1;
  func_0x000107c2b05c();
  plVar15 = *(long **)(param_1 + 0x120);
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x26 = (long *)(uVar16 & (ulong)plVar9);
    }
    else {
      unaff_x26 = plVar9;
      if (plVar15 <= plVar9) {
        uVar2 = 0;
        if (plVar15 != (long *)0x0) {
          uVar2 = (ulong)plVar9 / (ulong)plVar15;
        }
        unaff_x26 = (long *)((long)plVar9 - uVar2 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*plVar1 + (long)unaff_x26 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar6; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        plVar7 = (long *)plVar14[1];
        if (plVar7 == plVar9) {
          plVar7 = plVar1;
          func_0x000107c2b068(plVar1,plVar14 + 2,param_2);
          if (((ulong)plVar7 & 1) != 0) goto LAB_10a8186ac;
        }
        else {
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar16);
          }
          else if (plVar15 <= plVar7) {
            uVar2 = 0;
            if (plVar15 != (long *)0x0) {
              uVar2 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar2 * (long)plVar15);
          }
          if (plVar7 != unaff_x26) break;
        }
      }
    }
  }
  plVar14 = (long *)0x50;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = (long)plVar9;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(plVar14 + 2,*param_2,param_2[1]);
  }
  else {
    lVar4 = *param_2;
    plVar14[3] = param_2[1];
    plVar14[2] = lVar4;
    plVar14[4] = param_2[2];
  }
  plVar14[8] = 0;
  plVar14[7] = 0;
  plVar14[6] = 0;
  plVar14[5] = 0;
  *(undefined4 *)(plVar14 + 9) = 0x3f800000;
  fVar17 = (float)(*(long *)(param_1 + 0x130) + 1);
  if ((plVar15 != (long *)0x0) && (fVar17 <= *(float *)(param_1 + 0x138) * (float)plVar15))
  goto LAB_10a818638;
  uVar16 = 1;
  if ((long *)0x2 < plVar15) {
    uVar16 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
  }
  plVar7 = (long *)(uVar16 | (long)plVar15 << 1);
  plVar15 = (long *)(long)(fVar17 / *(float *)(param_1 + 0x138));
  if (plVar7 <= plVar15) {
    plVar7 = plVar15;
  }
  if ((long)plVar7 - 1U == 0) {
    plVar7 = (long *)0x2;
  }
  else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = *(long **)(param_1 + 0x120);
  if (plVar15 < plVar7) {
LAB_10a8184c0:
    if ((ulong)plVar7 >> 0x3d != 0) {
      func_0x000109ffded8();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10a81874c);
      (*pcVar3)();
    }
    lVar4 = (long)plVar7 << 3;
    __Znwm();
    lVar5 = *plVar1;
    *plVar1 = lVar4;
    if (lVar5 != 0) {
      __ZdlPv();
    }
    plVar15 = (long *)0x0;
    *(long **)(param_1 + 0x120) = plVar7;
    do {
      *(undefined8 *)(*plVar1 + (long)plVar15 * 8) = 0;
      plVar15 = (long *)((long)plVar15 + 1);
    } while (plVar7 != plVar15);
    plVar8 = *(long **)(param_1 + 0x128);
    plVar15 = plVar7;
    if (plVar8 != (long *)0x0) {
      plVar10 = (long *)plVar8[1];
      uVar16 = (long)plVar7 - 1;
      if (((ulong)plVar7 & uVar16) == 0) {
        plVar10 = (long *)((ulong)plVar10 & uVar16);
      }
      else if (plVar7 <= plVar10) {
        uVar2 = 0;
        if (plVar7 != (long *)0x0) {
          uVar2 = (ulong)plVar10 / (ulong)plVar7;
        }
        plVar10 = (long *)((long)plVar10 - uVar2 * (long)plVar7);
      }
      *(long *)(*plVar1 + (long)plVar10 * 8) = param_1 + 0x128;
      plVar11 = (long *)*plVar8;
      while (plVar11 != (long *)0x0) {
        plVar13 = (long *)plVar11[1];
        if (((ulong)plVar7 & uVar16) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar16);
        }
        else if (plVar7 <= plVar13) {
          uVar2 = 0;
          if (plVar7 != (long *)0x0) {
            uVar2 = (ulong)plVar13 / (ulong)plVar7;
          }
          plVar13 = (long *)((long)plVar13 - uVar2 * (long)plVar7);
        }
        plVar12 = plVar11;
        if (plVar13 != plVar10) {
          lVar4 = *plVar1;
          if (*(long *)(lVar4 + (long)plVar13 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar13 * 8) = plVar8;
            plVar10 = plVar13;
          }
          else {
            *plVar8 = *plVar11;
            *plVar11 = **(undefined8 **)(lVar4 + (long)plVar13 * 8);
            **(long **)(lVar4 + (long)plVar13 * 8) = (long)plVar11;
            plVar12 = plVar8;
          }
        }
        plVar8 = plVar12;
        plVar11 = (long *)*plVar12;
      }
    }
  }
  else if (plVar7 < plVar15) {
    plVar8 = (long *)(long)((float)*(ulong *)(param_1 + 0x130) / *(float *)(param_1 + 0x138));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 + -1) & 0x3fU));
    }
    if (plVar7 <= plVar8) {
      plVar7 = plVar8;
    }
    if (plVar7 < plVar15) {
      if (plVar7 != (long *)0x0) goto LAB_10a8184c0;
      lVar4 = *plVar1;
      *plVar1 = 0;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      *(undefined8 *)(param_1 + 0x120) = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = *(long **)(param_1 + 0x120);
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x26 = (long *)((long)plVar15 - 1U & (ulong)plVar9);
  }
  else {
    unaff_x26 = plVar9;
    if (plVar15 <= plVar9) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar9 / (ulong)plVar15;
      }
      unaff_x26 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
    }
  }
LAB_10a818638:
  lVar4 = *plVar1;
  plVar9 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar14 = *(long *)(param_1 + 0x128);
    *(long **)(param_1 + 0x128) = plVar14;
    *(long *)(lVar4 + (long)unaff_x26 * 8) = param_1 + 0x128;
    if (*plVar14 != 0) {
      plVar9 = *(long **)(*plVar14 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar9) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar9 / (ulong)plVar15;
        }
        plVar9 = (long *)((long)plVar9 - uVar16 * (long)plVar15);
      }
      *(long **)(*plVar1 + (long)plVar9 * 8) = plVar14;
    }
  }
  else {
    *plVar14 = *plVar9;
    *plVar9 = (long)plVar14;
  }
  *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + 1;
LAB_10a8186ac:
  plVar1 = plVar14 + 5;
  if (plVar1 == param_3) {
    return;
  }
  *(int *)(plVar14 + 9) = (int)param_3[4];
  plVar9 = (long *)param_3[2];
  lVar4 = plVar14[6];
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      *(undefined8 *)(*plVar1 + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
    plVar7 = (long *)plVar14[7];
    plVar14[7] = 0;
    plVar14[8] = 0;
    plVar15 = plVar7;
    if (plVar7 != (long *)0x0 && plVar9 != (long *)0x0) {
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar15 + 2,plVar9 + 2);
        lVar4 = plVar9[6];
        plVar15[7] = plVar9[7];
        plVar15[6] = lVar4;
        lVar4 = plVar9[8];
        plVar15[9] = plVar9[9];
        plVar15[8] = lVar4;
        lVar4 = plVar9[10];
        plVar15[0xb] = plVar9[0xb];
        plVar15[10] = lVar4;
        plVar15[0xc] = plVar9[0xc];
        lVar4 = plVar9[0xe];
        plVar15[0xf] = plVar9[0xf];
        plVar15[0xe] = lVar4;
        lVar4 = plVar9[0x10];
        plVar15[0x11] = plVar9[0x11];
        plVar15[0x10] = lVar4;
        lVar4 = plVar9[0x12];
        plVar15[0x13] = plVar9[0x13];
        plVar15[0x12] = lVar4;
        lVar4 = plVar9[0x14];
        plVar15[0x15] = plVar9[0x15];
        plVar15[0x14] = lVar4;
        plVar15[0x16] = plVar9[0x16];
        plVar7 = (long *)*plVar15;
        FUN_10a528a14(plVar1,plVar15);
        plVar9 = (long *)*plVar9;
        if (plVar7 == (long *)0x0) break;
        plVar15 = plVar7;
      } while (plVar9 != (long *)0x0);
    }
    func_0x00010a22deb0(plVar1,plVar7);
  }
  for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    FUN_10a528ee8(plVar1,plVar9 + 2);
  }
  return;
}



/* Entry: 10a818764; end: 10a818a33;  */

void FUN_10a818764(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined8 auStack_248 [2];
  char cStack_231;
  undefined1 auStack_230 [40];
  undefined1 auStack_208 [40];
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b0;
  char cStack_199;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = 0;
  uStack_138 = 0;
  lStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  puStack_150 = (undefined8 *)0x0;
  uStack_118 = 0x3f800000;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0x3f800000;
  uStack_90 = 0x3f847ae147ae147b;
  lStack_e0 = 0;
  uStack_d8 = 0;
  lStack_e8 = 0;
  FUN_10a0cf024(&lStack_e8,&uStack_90,&uStack_88,1);
  lStack_c8 = 0;
  lStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3f800000;
  uStack_98 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (&puStack_150,param_1 + 0x140);
  FUN_10ac594e4(param_1,&puStack_150);
  uStack_98 = 1;
  if (&uStack_138 != (undefined8 *)(param_1 + 0xf0)) {
    uStack_118 = *(undefined4 *)(param_1 + 0x110);
    func_0x00010729c334(&uStack_138,*(undefined8 *)(param_1 + 0x100),0);
  }
  uVar2 = param_1 + 0x118;
  func_0x000107c2b05c(uVar2,param_1 + 0x140);
  uVar7 = *(ulong *)(param_1 + 0x120);
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      uVar9 = uVar8 & uVar2;
    }
    else {
      uVar9 = uVar2;
      if (uVar7 <= uVar2) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar2 / uVar7;
        }
        uVar9 = uVar2 - uVar9 * uVar7;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x118) + uVar9 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar2 == uVar6) {
          uVar6 = param_1 + 0x118;
          func_0x000107c2b068(uVar6,plVar5 + 2,param_1 + 0x140);
          if ((uVar6 & 1) != 0) {
            FUN_10a22d860(&uStack_90,plVar5 + 5);
            uVar10 = (undefined1)uStack_70;
            uVar11 = (undefined1)((uint)uStack_70 >> 8);
            uVar12 = (undefined1)((uint)uStack_70 >> 0x10);
            uVar13 = (undefined1)((uint)uStack_70 >> 0x18);
            goto LAB_10a818918;
          }
        }
        else {
          if ((uVar7 & uVar8) == 0) {
            uVar6 = uVar6 & uVar8;
          }
          else if (uVar7 <= uVar6) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar6 / uVar7;
            }
            uVar6 = uVar6 - uVar1 * uVar7;
          }
          if (uVar6 != uVar9) break;
        }
      }
    }
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0x3f800000;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0x80;
  uVar13 = 0x3f;
LAB_10a818918:
  uStack_f0 = CONCAT13(uVar13,CONCAT12(uVar12,CONCAT11(uVar11,uVar10)));
  FUN_10a5288d4(&uStack_110,uStack_80,0);
  func_0x00010a22de78(&uStack_90);
  FUN_10a818a34(param_2 + 0x118,&puStack_150);
  if (lStack_a8 < 0) {
    __ZdlPv(uStack_b8);
  }
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  if (lStack_e8 != 0) {
    lStack_e0 = lStack_e8;
    __ZdlPv();
  }
  func_0x00010a22de78(&uStack_110);
  puVar3 = &uStack_138;
  func_0x000107c2826c();
  if (lStack_140 < 0) {
    puVar3 = puStack_150;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_10a4caa2c(&puStack_150);
    puVar4 = puVar3;
    __Unwind_Resume();
    pcStack_158 = FUN_10a818a34;
    puStack_170 = &uStack_138;
    puStack_168 = puVar3;
    puStack_160 = &stack0xfffffffffffffff0;
    if ((*(byte *)(puVar4 + 3) & 1) == 0) {
      FUN_10a4ca960(auStack_188);
      func_0x00010a842750(puVar4,auStack_188);
      func_0x00010a22dfb0(auStack_188,uStack_180);
    }
    else {
      FUN_10a22d710(auStack_248);
      FUN_10a50424c(puVar4,auStack_248,auStack_248);
      if (cStack_199 < '\0') {
        __ZdlPv(uStack_1b0);
      }
      if (lStack_1c8 != 0) {
        lStack_1c0 = lStack_1c8;
        __ZdlPv();
      }
      if (lStack_1e0 != 0) {
        lStack_1d8 = lStack_1e0;
        __ZdlPv();
      }
      func_0x00010a22de78(auStack_208);
      func_0x000107c2826c(auStack_230);
      if (cStack_231 < '\0') {
        __ZdlPv(auStack_248[0]);
      }
    }
    return;
  }
  return;
}



/* Entry: 10a818a34; end: 10a818b17;  */

void FUN_10a818a34(long param_1)

{
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_60;
  char cStack_49;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a4ca960(auStack_38);
    func_0x00010a842750(param_1,auStack_38);
    func_0x00010a22dfb0(auStack_38,uStack_30);
  }
  else {
    FUN_10a22d710(auStack_f8);
    FUN_10a50424c(param_1,auStack_f8,auStack_f8);
    if (cStack_49 < '\0') {
      __ZdlPv(uStack_60);
    }
    if (lStack_78 != 0) {
      lStack_70 = lStack_78;
      __ZdlPv();
    }
    if (lStack_90 != 0) {
      lStack_88 = lStack_90;
      __ZdlPv();
    }
    func_0x00010a22de78(auStack_b8);
    func_0x000107c2826c(auStack_e0);
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
  }
  return;
}



/* Entry: 10a818b18; end: 10a818c4f;  */

undefined8 * FUN_10a818b18(long param_1,long param_2,int param_3)

{
  undefined8 ***pppuVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 ***pppuVar7;
  undefined8 *puVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  if (*(long *)(param_2 + 0xa0) == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    if (*(char *)(param_1 + 0x157) < '\0') {
      func_0x000107c3192c(&uStack_70,*(undefined8 *)(param_1 + 0x140),
                          *(undefined8 *)(param_1 + 0x148));
    }
    else {
      uStack_68 = *(undefined8 *)(param_1 + 0x148);
      uStack_70 = *(undefined8 *)(param_1 + 0x140);
      lStack_60 = *(long *)(param_1 + 0x150);
    }
    FUN_10ad03508(&ppuStack_58,&uStack_70);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    puVar8 = *(undefined8 **)(*(long *)(param_2 + 0xa0) + 0x30);
    puVar4 = *(undefined8 **)(*(long *)(param_2 + 0xa0) + 0x38);
    if (puVar8 != puVar4) {
      uVar6 = uStack_50;
      pppuVar1 = (undefined8 ***)ppuStack_58;
      if (-1 < (char)bStack_41) {
        uVar6 = (ulong)bStack_41;
        pppuVar1 = &ppuStack_58;
      }
      do {
        if (*(int *)(puVar8 + 3) == param_3) {
          bVar5 = *(byte *)((long)puVar8 + 0x17);
          uVar2 = puVar8[1];
          if (-1 < (char)bVar5) {
            uVar2 = (ulong)bVar5;
          }
          if (uVar6 == uVar2) {
            puVar3 = (undefined8 *)*puVar8;
            if (-1 < (char)bVar5) {
              puVar3 = puVar8;
            }
            pppuVar7 = pppuVar1;
            _memcmp(pppuVar1,puVar3,uVar6);
            if ((int)pppuVar7 == 0) goto LAB_10a818c0c;
          }
        }
        puVar8 = puVar8 + 0xc;
      } while (puVar8 != puVar4);
    }
    puVar8 = (undefined8 *)0x0;
LAB_10a818c0c:
    if ((char)bStack_41 < '\0') {
      __ZdlPv(ppuStack_58);
    }
  }
  return puVar8;
}



/* Entry: 10a818c50; end: 10a818c6f;  */

undefined1  [16] FUN_10a818c50(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x25;
  auVar1._0_8_ = &UNK_10f662423;
  return auVar1;
}



/* Entry: 10a818c70; end: 10a818cd7;  */

bool FUN_10a818c70(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x25) {
    iVar2 = 0xf662423;
    _memcmp(&UNK_10f662423,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a818cd8; end: 10a818cdf;  */

bool FUN_10a818cd8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x25) {
    iVar2 = 0xf662423;
    _memcmp(&UNK_10f662423,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a818ce0; end: 10a8190cb;  */

void FUN_10a818ce0(ulong param_1)

{
  long *plVar1;
  undefined *****pppppuVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *extraout_x8;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined *****pppppuVar14;
  ulong uVar15;
  ulong uVar16;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined ****ppppuStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined ****appppuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined ****ppppuStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000109887da8(appppuStack_c8,&UNK_10f662423,0x25);
  pppppuVar14 = (undefined *****)appppuStack_c8[0];
  if (-1 < cStack_b1) {
    pppppuVar14 = appppuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c21310;
  pppppuVar2 = (undefined *****)&UNK_10f67a8c5;
  if (pppppuVar14 != (undefined *****)0x0) {
    pppppuVar2 = pppppuVar14;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppppuVar2);
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  uStack_d8 = 0xffffffffffffffff;
  uStack_e0 = 0x100000064;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  puStack_68 = (undefined *)0x0;
  uStack_58 = 0xa5;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppppuStack_a0 = (undefined ****)pppppuVar14;
  func_0x00010a052690(param_1 + 0x168,&ppppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c21310;
    uStack_a8 = 0;
    ppppuStack_a0 = (undefined ****)&PTR_DAT_110bb37d0;
    ppuStack_98 = (undefined **)0x0;
    pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppppuVar14,&ppuStack_b0,&ppppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appppuStack_c8[0]);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f67a8c6,FUN_10a8427c8,FUN_10a8428e4);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f66e528,FUN_10a842ab4,0);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a05ef6c(param_1,&PTR_DAT_110b9a108,FUN_10a07c674);
    FUN_10a0605c4(param_1,&UNK_10f66e541,FUN_10a842c20,0);
  }
  uVar8 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f4151f9,FUN_10a842cd0,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar11 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) == lVar11) {
LAB_10a8190a0:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10a8190a4);
    (*pcVar7)();
  }
  ppuStack_98 = *(undefined ***)(lVar11 + -0x60);
  ppppuStack_a0 = *(undefined *****)(lVar11 + -0x68);
  puStack_78 = *(undefined **)(lVar11 + -0x40);
  uVar15 = *(ulong *)(lVar11 + -0x48);
  uVar16 = *(ulong *)(lVar11 + -0x50);
  pcStack_90 = *(code **)(lVar11 + -0x58);
  puStack_68 = *(undefined **)(lVar11 + -0x30);
  uStack_70 = *(undefined8 *)(lVar11 + -0x38);
  uStack_58 = *(undefined8 *)(lVar11 + -0x20);
  uStack_60 = *(undefined8 *)(lVar11 + -0x28);
  uStack_40 = *(undefined8 *)(lVar11 + -8);
  uStack_48 = *(undefined8 *)(lVar11 + -0x10);
  uStack_50 = *(ulong *)(lVar11 + -0x18);
  *(long *)(param_1 + 0x170) = lVar11 + -0x68;
  uStack_88._4_4_ = (undefined4)(uVar16 >> 0x20);
  uVar5 = uStack_88._4_4_;
  uStack_80._4_4_ = (undefined4)(uVar15 >> 0x20);
  uVar6 = uStack_80._4_4_;
  uVar8 = param_1;
  uStack_88 = uVar16;
  uStack_80 = uVar15;
  FUN_10a0051e8(param_1,uVar16 & 0xffffffff,uVar5,uStack_50 & 0xffffffff,uVar15 & 0xffffffff,uVar6);
  if ((uVar8 & 1) == 0) {
    func_0x000109894f40(param_1,0);
    FUN_10a054234(param_1,&ppppuStack_a0,param_1 + 0x1b8,&UNK_10f662423,0x25);
    FUN_10a05431c(param_1);
  }
  ppuStack_98 = (undefined **)0x0;
  pcStack_90 = (code *)0x0;
  ppppuStack_a0 = (undefined ****)&UNK_10f65505a;
  uStack_80 = uStack_d8;
  uStack_88 = uStack_e0;
  puStack_78 = &UNK_10f67a8c5;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_68 = &UNK_10f67a8c5;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x00010a004eb4(param_1,&ppppuStack_a0);
  uVar8 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar8 & 1) == 0) {
    ppppuStack_a0 = (undefined ****)FUN_10a842dec;
    ppuStack_98 = &PTR_FUN_110c22328;
    pcStack_90 = FUN_10a8190cc;
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10a8190a0;
    pppppuVar14 = &ppppuStack_a0;
    FUN_10a0544d8(param_1,&UNK_10f67a8e2,&ppppuStack_a0,0,*(long *)(param_1 + 0x18) + -8);
    (*(code *)*ppuStack_98)(&ppuStack_98);
  }
  func_0x00010a004064();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (cStack_b1 < '\0') {
    __ZdlPv(appppuStack_c8[0]);
  }
  uVar8 = param_1;
  __Unwind_Resume();
  ppuStack_110 = &PTR_DAT_110c21310;
  puStack_108 = &UNK_10f67a8c5;
  pcStack_e8 = FUN_10a8190cc;
  plVar9 = (long *)0x1e0;
  ppppuStack_100 = (undefined ****)pppppuVar14;
  uStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  __Znwm();
  plVar13 = plVar9 + 1;
  *plVar13 = 0;
  plVar9[2] = 0;
  plVar12 = plVar9 + 3;
  *plVar9 = (long)&PTR_DAT_110c22368;
  FUN_10a819630(plVar12,uVar8);
  lVar11 = plVar9[0xc];
  plStack_120 = plVar12;
  plStack_118 = plVar9;
  if (lVar11 == 0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar10 = plVar9 + 2;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar9[0xb] = (long)plVar12;
    plVar9[0xc] = (long)plVar9;
LAB_10a819188:
    do {
      lVar11 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 != 0) goto LAB_10a81919c;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    if (uVar8 != 0) goto LAB_10a8191a0;
LAB_10a8193ec:
    plVar13 = (long *)0x108;
    __Znwm();
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&PTR_FUN_110ba2088;
    plVar12 = plVar13 + 3;
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a347bd4(plVar12,0,&plStack_120);
    if (plVar9 != (long *)0x0) {
      plVar10 = plVar9 + 1;
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
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plStack_130 = plVar12;
    plStack_128 = plVar13;
    FUN_10a0cfb64(&plStack_130,plVar13 + 8,plVar12);
    FUN_10a0cf858(extraout_x8,&plStack_130);
    if (plStack_128 == (long *)0x0) goto LAB_10a8194d4;
    plVar13 = plStack_128 + 1;
    do {
      lVar11 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar12 = plStack_128;
    } while (cVar3 != '\0');
  }
  else {
    if (*(long *)(lVar11 + 8) == -1) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar10 = plVar9 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar9[0xb] = (long)plVar12;
      plVar9[0xc] = (long)plVar9;
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar11);
      goto LAB_10a819188;
    }
LAB_10a81919c:
    if (uVar8 == 0) goto LAB_10a8193ec;
LAB_10a8191a0:
    plVar13 = *(long **)(uVar8 + 0x858);
    plVar12 = *(long **)(uVar8 + 0x860);
    if (plVar12 != (long *)0x0) {
      plVar10 = plVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = (long *)0xf0;
    __Znwm();
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a347bd4(plVar10,uVar8,&plStack_120);
    plStack_140 = plVar10;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar10 = plStack_140;
    plStack_140 = (long *)0x0;
    FUN_10a0cfa2c(&plStack_140,0);
    plStack_140 = plVar13;
    plStack_138 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar12 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
    plStack_120 = plVar13;
    plStack_118 = plVar12;
    FUN_10a0cfac4(&plStack_130,plVar10,&plStack_120);
    FUN_10a0cf858(extraout_x8,&plStack_130);
    plVar10 = plStack_128;
    if (plStack_128 != (long *)0x0) {
      plVar1 = plStack_128 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_128 + 0x10))(plStack_128);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if (plStack_118 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar10 = plStack_138;
    if (plStack_138 != (long *)0x0) {
      plVar1 = plStack_138 + 1;
      do {
        lVar11 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_138 + 0x10))(plStack_138);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
      }
    }
    if ((plVar13 != (long *)0x0) && (plVar10 = (long *)*extraout_x8, plVar10 != (long *)0x0)) {
      plStack_128 = (long *)extraout_x8[1];
      if (plStack_128 != (long *)0x0) {
        plVar1 = plStack_128 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plStack_130 = plVar10;
      FUN_10aa88c30(plVar13,&plStack_130);
      plVar13 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        plVar10 = plStack_128 + 1;
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
          (**(code **)(*plStack_128 + 0x10))(plStack_128);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
    }
    if (plVar12 == (long *)0x0) goto LAB_10a8194d4;
    plVar13 = plVar12 + 1;
    do {
      lVar11 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (lVar11 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
  }
LAB_10a8194d4:
  if (plVar9 != (long *)0x0) {
    plVar12 = plVar9 + 1;
    do {
      lVar11 = *plVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  return;
}



/* Entry: 10a8190cc; end: 10a8195df;  */

void FUN_10a8190cc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = (long *)0x1e0;
  __Znwm();
  plVar8 = plVar4 + 1;
  *plVar8 = 0;
  plVar4[2] = 0;
  plVar7 = plVar4 + 3;
  *plVar4 = (long)&PTR_DAT_110c22368;
  FUN_10a819630(plVar7,param_2);
  lVar6 = plVar4[0xc];
  plStack_40 = plVar7;
  plStack_38 = plVar4;
  if (lVar6 == 0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5 = plVar4 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar4[0xb] = (long)plVar7;
    plVar4[0xc] = (long)plVar4;
LAB_10a819188:
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 != 0) goto LAB_10a81919c;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    if (param_2 != 0) goto LAB_10a8191a0;
LAB_10a8193ec:
    plVar8 = (long *)0x108;
    __Znwm();
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_110ba2088;
    plVar7 = plVar8 + 3;
    if (plVar4 != (long *)0x0) {
      plVar5 = plVar4 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a347bd4(plVar7,0,&plStack_40);
    if (plVar4 != (long *)0x0) {
      plVar5 = plVar4 + 1;
      do {
        lVar6 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plStack_50 = plVar7;
    plStack_48 = plVar8;
    FUN_10a0cfb64(&plStack_50,plVar8 + 8,plVar7);
    FUN_10a0cf858(param_1,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10a8194d4;
    plVar8 = plStack_48 + 1;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar7 = plStack_48;
    } while (cVar2 != '\0');
  }
  else {
    if (*(long *)(lVar6 + 8) == -1) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = *plVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = plVar4 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar4[0xb] = (long)plVar7;
      plVar4[0xc] = (long)plVar4;
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar6);
      goto LAB_10a819188;
    }
LAB_10a81919c:
    if (param_2 == 0) goto LAB_10a8193ec;
LAB_10a8191a0:
    plVar8 = *(long **)(param_2 + 0x858);
    plVar7 = *(long **)(param_2 + 0x860);
    if (plVar7 != (long *)0x0) {
      plVar5 = plVar7 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar5 = (long *)0xf0;
    __Znwm();
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
    FUN_10a347bd4(plVar5,param_2,&plStack_40);
    plStack_60 = plVar5;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    plVar5 = plStack_60;
    plStack_60 = (long *)0x0;
    FUN_10a0cfa2c(&plStack_60,0);
    plStack_60 = plVar8;
    plStack_58 = plVar7;
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
      plVar1 = plVar7 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    plStack_40 = plVar8;
    plStack_38 = plVar7;
    FUN_10a0cfac4(&plStack_50,plVar5,&plStack_40);
    FUN_10a0cf858(param_1,&plStack_50);
    plVar5 = plStack_48;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_38 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
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
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((plVar8 != (long *)0x0) && (plVar5 = (long *)*param_1, plVar5 != (long *)0x0)) {
      plStack_48 = (long *)param_1[1];
      if (plStack_48 != (long *)0x0) {
        plVar1 = plStack_48 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plStack_50 = plVar5;
      FUN_10aa88c30(plVar8,&plStack_50);
      plVar8 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar5 = plStack_48 + 1;
        do {
          lVar6 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    if (plVar7 == (long *)0x0) goto LAB_10a8194d4;
    plVar8 = plVar7 + 1;
    do {
      lVar6 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10a8194d4:
  if (plVar4 != (long *)0x0) {
    plVar7 = plVar4 + 1;
    do {
      lVar6 = *plVar7;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a8195e0; end: 10a81962f;  */

void FUN_10a8195e0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x118);
  uVar5 = *(undefined8 *)(param_2 + 0x110);
  param_1[1] = *(undefined8 *)(param_2 + 0x118);
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



/* Entry: 10a819630; end: 10a819b9f;  */

long * FUN_10a819630(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong *puVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *extraout_x8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  undefined4 auStack_120 [2];
  long lStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  long alStack_98 [2];
  long lStack_88;
  char cStack_81;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined4 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x35] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x38) = 0x100;
  plVar6 = param_1;
  FUN_10ac63ebc(param_1,&PTR_PTR_110c209b0,param_2);
  *plVar6 = (long)&PTR_DAT_110c207e8;
  plVar6[2] = (long)&PTR_FUN_110c208b8;
  plVar6[5] = (long)&PTR_FUN_110c208e8;
  plVar6[0x35] = (long)&PTR_FUN_110c20970;
  plVar11 = plVar6 + 0x1d;
  *plVar11 = 0;
  plVar6[0x20] = 0;
  plVar6[0x21] = 0;
  plVar6[0x1e] = 0;
  *(undefined4 *)(plVar6 + 0x1f) = 0;
  puVar7 = (undefined8 *)0x98;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110b9a070;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[0x12] = 0;
  puVar7[3] = &PTR_FUN_110b9a0c0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  puVar7[0xb] = FUN_10a004c4c;
  puVar7[0xc] = &PTR_DAT_110ae9180;
  param_1[0x22] = (long)(puVar7 + 3);
  param_1[0x23] = (long)puVar7;
  puVar7 = (undefined8 *)0x98;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110b9a070;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[0x12] = 0;
  puVar7[3] = &PTR_FUN_110b9a0c0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 10) = 0x3f800000;
  puVar7[0xb] = FUN_10a004c4c;
  puVar7[0xc] = &PTR_DAT_110ae9180;
  param_1[0x24] = (long)(puVar7 + 3);
  param_1[0x25] = (long)puVar7;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  if (*(char *)((long)param_1 + 0xba) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xba) = 1;
    func_0x00010ac6ece4(param_1);
  }
  if (*(char *)((long)param_1 + 0xb9) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xb9) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  FUN_10a0d0194(&lStack_d0,auStack_120);
  plVar8 = plVar11;
  func_0x00010a19b5ac(plVar11,&lStack_d0);
  plVar6 = plStack_c8;
  sVar3 = 0;
  if ((short)param_1[0x31] != -3) {
    sVar3 = (short)param_1[0x31] + 1;
  }
  *(short *)(param_1 + 0x31) = sVar3;
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar8 = plVar6;
    }
  }
  FUN_10ab6e728();
  if (*(char *)((long)plVar8 + 0x17) < '\0') {
    plVar6 = &lStack_d0;
    func_0x000107c3192c(plVar6,*plVar8,plVar8[1]);
  }
  else {
    plStack_c8 = (long *)plVar8[1];
    lStack_d0 = *plVar8;
    lStack_c0 = plVar8[2];
    plVar6 = plVar8;
  }
  lStack_b8 = plVar8[3];
  uStack_a0 = (undefined4)plVar8[6];
  lStack_a8 = plVar8[5];
  lStack_b0 = plVar8[4];
  FUN_10ab6e9d8();
  if (*(char *)((long)plVar6 + 0x17) < '\0') {
    func_0x000107c3192c(alStack_98,*plVar6,plVar6[1]);
  }
  else {
    lStack_88 = plVar6[2];
    alStack_98[1] = plVar6[1];
    alStack_98[0] = *plVar6;
  }
  lStack_80 = plVar6[3];
  lStack_70 = plVar6[5];
  lStack_78 = plVar6[4];
  uStack_68 = (undefined4)plVar6[6];
  FUN_10ab6f520(auStack_120,&lStack_d0,2);
  lVar9 = *plVar11;
  *(undefined4 *)(lVar9 + 0xf0) = auStack_120[0];
  if ((undefined4 *)(lVar9 + 0xf0) != auStack_120) {
    FUN_10a1903c4(lVar9 + 0xf8,lStack_118,lStack_110,
                  (lStack_110 - lStack_118 >> 3) * 0x6db6db6db6db6db7);
  }
  *(undefined8 *)(lVar9 + 0x118) = uStack_f8;
  *(undefined8 *)(lVar9 + 0x110) = uStack_100;
  *(undefined8 *)(lVar9 + 0x128) = uStack_e8;
  *(undefined8 *)(lVar9 + 0x120) = uStack_f0;
  *(undefined8 *)(lVar9 + 0x130) = uStack_e0;
  plStack_d8 = &lStack_118;
  func_0x00010a190844(&plStack_d8);
  lVar9 = 0;
  do {
    if ((&cStack_81)[lVar9] < '\0') {
      __ZdlPv(*(undefined8 *)((long)alStack_98 + lVar9));
    }
    lVar9 = lVar9 + -0x38;
  } while (lVar9 != -0x70);
  *(undefined8 *)(param_1[0x1d] + 0xe8) = 2;
  plVar6 = param_1;
  FUN_10ac645fc(param_1,plVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    plStack_d8 = &lStack_d0;
    func_0x00010a190844(&plStack_d8);
    lVar9 = -0x70;
    pcVar12 = &cStack_81;
    do {
      if (*pcVar12 < '\0') {
        __ZdlPv(*(undefined8 *)(pcVar12 + -0x17));
      }
      lVar9 = lVar9 + 0x38;
      pcVar12 = pcVar12 + -0x38;
    } while (lVar9 != 0);
    if (*(char *)((long)param_1 + 0x1a7) < '\0') {
      __ZdlPv(param_1[0x32]);
    }
    if (*(char *)((long)param_1 + 0x187) < '\0') {
      __ZdlPv(param_1[0x2e]);
    }
    if (((char)param_1[0x2d] == '\x01') && (plVar8 = (long *)param_1[0x2c], plVar8 != (long *)0x0))
    {
      puVar2 = (ulong *)(plVar8 + 1);
      do {
        uVar10 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar10 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar10 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    if (((char)param_1[0x2b] == '\x01') && (plVar8 = (long *)param_1[0x2a], plVar8 != (long *)0x0))
    {
      puVar2 = (ulong *)(plVar8 + 1);
      do {
        uVar10 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar10 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar10 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    if (((char)param_1[0x29] == '\x01') && (plVar8 = (long *)param_1[0x28], plVar8 != (long *)0x0))
    {
      puVar2 = (ulong *)(plVar8 + 1);
      do {
        uVar10 = *puVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar5) {
          *puVar2 = uVar10 - 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar10 - 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    func_0x00010a05248c(param_1 + 0x26);
    FUN_10a004cfc(param_1 + 0x24);
    FUN_10a004cfc(param_1 + 0x22);
    FUN_10a0772f0(param_1 + 0x20);
    FUN_10a0cfe2c(plVar11);
    FUN_10a7cca1c(param_1,&PTR_PTR_110c209b0);
    __Unwind_Resume();
    plVar11 = plVar6;
    while( true ) {
      if (plVar11 == (long *)0x0) {
        (**(code **)(*plVar6 + 0x90))();
        lVar9 = plVar6[1];
        lVar13 = *plVar6;
        extraout_x8[1] = plVar6[1];
        *extraout_x8 = lVar13;
        if (lVar9 != 0) {
          plVar11 = (long *)(lVar9 + 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar5) {
              *plVar11 = *plVar11 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        return plVar6;
      }
      plVar8 = plVar11;
      (**(code **)(*plVar11 + 0x80))();
      if ((int)plVar8 != 2) break;
      plVar11 = (long *)plVar11[0x13];
    }
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    return plVar8;
  }
  return param_1;
}



/* Entry: 10a819ba0; end: 10a819c2b;  */

void FUN_10a819ba0(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = param_2;
  while( true ) {
    if (plVar5 == (long *)0x0) {
      (**(code **)(*param_2 + 0x90))();
      lVar4 = param_2[1];
      lVar6 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar6;
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 8);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      return;
    }
    plVar3 = plVar5;
    (**(code **)(*plVar5 + 0x80))();
    if ((int)plVar3 != 2) break;
    plVar5 = (long *)plVar5[0x13];
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a819c2c; end: 10a819c93;  */

void FUN_10a819c2c(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = (long *)0x1;
  FUN_10a061940();
  if ((plVar1 == (long *)0x0) || (plVar1 = (long *)*plVar1, plVar1 == (long *)0x0)) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x80))(plVar1,*(undefined8 *)(param_1 + 0xe8),1,1);
    FUN_10ac645fc(param_1,(undefined8 *)(param_1 + 0xe8));
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0xf8) = uVar2;
  return;
}



/* Entry: 10a819c94; end: 10a819c9b;  */

undefined2 FUN_10a819c94(long param_1)

{
  return *(undefined2 *)(param_1 + 0x188);
}



/* Entry: 10a819c9c; end: 10a81a687;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10a819c9c(long param_1)

{
  ulong *puVar1;
  undefined8 ****ppppuVar2;
  short sVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *******pppppppuVar8;
  long lVar9;
  undefined8 ******ppppppuVar10;
  long *plVar11;
  undefined8 *****pppppuVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 ***pppuVar16;
  ulong uVar17;
  undefined8 ****ppppuVar18;
  long lVar19;
  undefined8 ******ppppppuStack_198;
  long *plStack_190;
  char cStack_181;
  byte bStack_168;
  undefined8 *****pppppuStack_160;
  undefined8 *****pppppuStack_158;
  undefined8 *****pppppuStack_150;
  long lStack_140;
  long *plStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 *******pppppppuStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  byte bStack_68;
  undefined8 ****ppppuStack_60;
  undefined8 ****ppppuStack_58;
  char cStack_50;
  undefined1 uStack_41;
  
  lVar19 = *(long *)(param_1 + 0x100);
  if (lVar19 != 0) {
    cVar4 = *(char *)(lVar19 + 0xe0);
    if (cVar4 != '\t') {
      if (cVar4 == '\x04') {
        uVar17 = *(ulong *)(*(long *)(param_1 + 0x90) + 0x960);
        if (*(char *)(lVar19 + 0xff) < '\0') {
          func_0x000107c3192c(&ppppuStack_130,*(undefined8 *)(lVar19 + 0xe8),
                              *(undefined8 *)(lVar19 + 0xf0));
        }
        else {
          uStack_128 = *(undefined8 *)(lVar19 + 0xf0);
          ppppuStack_130 = *(undefined8 *****)(lVar19 + 0xe8);
          lStack_120 = *(long *)(lVar19 + 0xf8);
        }
        ppppppuStack_198 = (undefined8 ******)&ppppuStack_130;
        ppppuStack_60 = (undefined8 ****)&UNK_10dd62ad6;
        lVar19 = uVar17 + 0x210;
        FUN_10a71c8d8(lVar19,&ppppuStack_130,&UNK_10dd5b8f9,&ppppppuStack_198,&ppppuStack_60);
        FUN_10a702f70(&pppppppuStack_110,lVar19 + 0x28);
        if (lStack_120 < 0) {
          __ZdlPv(ppppuStack_130);
        }
        if ((bStack_68 & 1) == 0) {
          func_0x00010a81a688(param_1);
          *(undefined4 *)(param_1 + 0xf8) = 2;
          goto LAB_10a81a01c;
        }
        if (*(int *)(param_1 + 0xf8) == 2) {
          if (-1 < (char)uStack_100._7_1_) {
            plStack_108 = (long *)(ulong)uStack_100._7_1_;
          }
          bVar5 = *(byte *)(param_1 + 0x187);
          uVar17 = *(ulong *)(param_1 + 0x178);
          uVar15 = uVar17;
          if (-1 < (char)bVar5) {
            uVar15 = (ulong)bVar5;
          }
          if (plStack_108 != (long *)uVar15) goto LAB_10a819de4;
          pppppppuVar8 = pppppppuStack_110;
          if (-1 < (char)uStack_100._7_1_) {
            pppppppuVar8 = &pppppppuStack_110;
          }
          lVar19 = *(long *)(param_1 + 0x170);
          if (-1 < (char)bVar5) {
            lVar19 = param_1 + 0x170;
          }
          _memcmp(pppppppuVar8,lVar19);
          if ((int)pppppppuVar8 != 0) goto LAB_10a819de4;
          if ((char)bVar5 < '\0') {
            if (uVar17 == 0) goto LAB_10a819de4;
          }
          else if (bVar5 == 0) goto LAB_10a819de4;
        }
        else {
LAB_10a819de4:
          if (*(char *)(param_1 + 0x168) == '\x01') {
            if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x160) + 0x10) >> 1 & 1) != 0) {
              if ((*(byte *)(param_1 + 0x168) & 1) == 0) goto LAB_10a81a470;
              func_0x0001092af8bc(param_1 + 0x160);
              lVar19 = *(long *)(param_1 + 0x160);
              if ((*(byte *)(lVar19 + 0xa8) & 1) == 0) goto LAB_10a81a470;
              lVar9 = *(long *)(lVar19 + 0x98);
              if ((lVar9 != 0) &&
                 (___dynamic_cast(lVar9,&PTR_DAT_110c42c58,&PTR_DAT_110bc7ea0,0), lVar9 != 0)) {
                plVar13 = *(long **)(lVar19 + 0xa0);
                if (plVar13 != (long *)0x0) {
                  plVar11 = plVar13 + 1;
                  do {
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar6) {
                      *plVar11 = *plVar11 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                lStack_140 = lVar9;
                plStack_138 = plVar13;
                FUN_10a349b54(&ppppppuStack_198);
                ppppppuVar10 = &ppppppuStack_198;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (ppppppuVar10,&UNK_10f67a915,0x13);
                pppppuStack_158 = ppppppuVar10[1];
                pppppuStack_160 = *ppppppuVar10;
                pppppuStack_150 = ppppppuVar10[2];
                ppppppuVar10[1] = (undefined8 *****)0x0;
                ppppppuVar10[2] = (undefined8 *****)0x0;
                *ppppppuVar10 = (undefined8 *****)0x0;
                if (cStack_181 < '\0') {
                  __ZdlPv(ppppppuStack_198);
                }
                FUN_10a3dda08(&ppppuStack_60,*(undefined8 *)(param_1 + 0x90));
                FUN_10a9dd660(&ppppppuStack_198,ppppuStack_60,&pppppuStack_160);
                if (cStack_50 == '\x01') {
                  __ZNSt3__15mutex6unlockEv(ppppuStack_58);
                }
                bVar5 = bStack_168;
                if (bStack_168 == 1) {
                  FUN_10a842f10(&ppppuStack_60,&uStack_41,&ppppppuStack_198);
                  uVar17 = param_1 + 0xe8;
                  func_0x00010a19b5ac(uVar17,&ppppuStack_60);
                  sVar3 = 0;
                  if (*(short *)(param_1 + 0x188) != -3) {
                    sVar3 = *(short *)(param_1 + 0x188) + 1;
                  }
                  *(short *)(param_1 + 0x188) = sVar3;
                  FUN_10a0cfe2c(&ppppuStack_60);
                  *(undefined1 *)(*(long *)(param_1 + 0xe8) + 8) = 1;
                  if (*(char *)(param_1 + 0x168) == '\x01') {
                    plVar11 = *(long **)(param_1 + 0x160);
                    if (plVar11 != (long *)0x0) {
                      puVar1 = (ulong *)(plVar11 + 1);
                      do {
                        uVar15 = *puVar1;
                        cVar4 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar6) {
                          *puVar1 = uVar15 - 4;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar4 != '\0');
                      if ((uVar15 & 0x1fffffffc) == 4) {
                        do {
                          uVar15 = *puVar1;
                          cVar4 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                          if (bVar6) {
                            *puVar1 = uVar15 - 1;
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        if (uVar15 - 1 == 0) {
                          (**(code **)(*plVar11 + 8))();
                        }
                      }
                    }
                    *(undefined1 *)(param_1 + 0x168) = 0;
                  }
                  *(undefined4 *)(param_1 + 0xf8) = 2;
                  if ((bStack_68 & 1) == 0) goto LAB_10a81a470;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (param_1 + 0x170,&pppppppuStack_110);
                  FUN_10a819c2c(param_1);
                  FUN_10a07e58c(*(undefined8 *)(param_1 + 0x110));
                  if ((bStack_168 & 1) != 0) {
                    FUN_10a0f1ea0(&ppppppuStack_198);
                  }
                }
                if ((long)pppppuStack_150 < 0) {
                  __ZdlPv(pppppuStack_160);
                }
                if (plVar13 != (long *)0x0) {
                  plVar11 = plVar13 + 1;
                  do {
                    lVar19 = *plVar11;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar6) {
                      *plVar11 = lVar19 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (lVar19 == 0) {
                    (**(code **)(*plVar13 + 0x10))(plVar13);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                  }
                }
                if ((bVar5 & 1) != 0) goto LAB_10a81a020;
              }
            }
          }
          else {
            plVar13 = plStack_f8;
            (**(code **)(*plStack_f8 + 0x38))(plStack_f8,0x41);
            if ((int)plVar13 == 0) {
              if ((bStack_68 & 1) == 0) goto LAB_10a81a470;
              uVar14 = 0x42;
            }
            else {
              if ((bStack_68 & 1) == 0) goto LAB_10a81a470;
              uVar14 = 0x41;
            }
            (**(code **)(*plStack_f8 + 0x40))(&ppppppuStack_198,plStack_f8,uVar14);
            func_0x00010a81a828(param_1 + 0x160,&ppppppuStack_198);
            *(undefined4 *)(param_1 + 0xf8) = 1;
            if (ppppppuStack_198 != (undefined8 ******)0x0) {
              pppppuVar12 = ppppppuStack_198 + 1;
              do {
                ppppuVar18 = *pppppuVar12;
                cVar4 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(pppppuVar12,0x10);
                if (bVar6) {
                  *pppppuVar12 = (undefined8 ****)((long)ppppuVar18 + -4);
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (((ulong)ppppuVar18 & 0x1fffffffc) == 4) {
                do {
                  ppppuVar18 = *pppppuVar12;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(pppppuVar12,0x10);
                  if (bVar6) {
                    *pppppuVar12 = (undefined8 ****)((long)ppppuVar18 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if ((undefined8 ****)((long)ppppuVar18 + -1) == (undefined8 ****)0x0) {
                  (*(code *)(*ppppppuStack_198)[1])();
                }
              }
            }
          }
        }
LAB_10a81a01c:
        uVar17 = param_1 + 0xe8;
LAB_10a81a020:
        func_0x00010a703078(&pppppppuStack_110);
        return uVar17;
      }
      if (cVar4 != '\x01') goto LAB_10a81a308;
    }
    if (*(int *)(param_1 + 0xf8) == 2) {
      cVar4 = *(char *)(param_1 + 0x1a7);
      uVar15 = (ulong)cVar4;
      uVar17 = uVar15;
      if ((long)uVar15 < 0) {
        uVar17 = *(ulong *)(param_1 + 0x198);
      }
      if (uVar17 != 0) {
        uVar17 = *(ulong *)(param_1 + 0x198);
        if (-1 < cVar4) {
          uVar17 = uVar15;
        }
        bVar5 = *(byte *)(lVar19 + 0xff);
        uVar15 = *(ulong *)(lVar19 + 0xf0);
        if (-1 < (char)bVar5) {
          uVar15 = (ulong)bVar5;
        }
        if (uVar17 == uVar15) {
          plVar13 = (long *)*(long *)(param_1 + 400);
          if (-1 < cVar4) {
            plVar13 = (long *)(param_1 + 400);
          }
          plVar11 = (long *)*(long *)(lVar19 + 0xe8);
          if (-1 < (char)bVar5) {
            plVar11 = (long *)(lVar19 + 0xe8);
          }
          _memcmp(plVar13,plVar11);
          if ((int)plVar13 == 0) goto LAB_10a81a310;
        }
      }
    }
    uVar17 = *(ulong *)(lVar19 + 0xf0);
    if (-1 < (char)*(byte *)(lVar19 + 0xff)) {
      uVar17 = (ulong)*(byte *)(lVar19 + 0xff);
    }
    if (uVar17 != 0) {
      if (*(char *)(param_1 + 0x148) == '\x01') {
        if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x140) + 0x10) >> 1 & 1) != 0) {
          if ((*(byte *)(param_1 + 0x148) & 1) != 0) {
            func_0x0001092af8bc(param_1 + 0x140);
            lVar19 = *(long *)(param_1 + 0x140);
            if ((*(byte *)(lVar19 + 0xb8) & 1) != 0) {
              ppppppuStack_198 = *(undefined8 *******)(lVar19 + 0x98);
              plStack_190 = *(long **)(lVar19 + 0xa0);
              if (plStack_190 != (long *)0x0) {
                plVar13 = plStack_190 + 1;
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar6) {
                    *plVar13 = *plVar13 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              plStack_f8 = *(long **)(lVar19 + 0xb0);
              uStack_100 = *(undefined8 *)(lVar19 + 0xa8);
              if (*(long *)(lVar19 + 0xb0) != 0) {
                plVar13 = (long *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar6) {
                    *plVar13 = *plVar13 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              if (plStack_190 != (long *)0x0) {
                plVar13 = plStack_190 + 1;
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar6) {
                    *plVar13 = *plVar13 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              pppppuVar12 = ppppppuStack_198[0x1c];
              pppppppuStack_110 = (undefined8 *******)ppppppuStack_198;
              plStack_108 = plStack_190;
              (*(code *)(*pppppuVar12)[0x12])();
              ppppuStack_58 = pppppuVar12[1];
              ppppuStack_60 = *pppppuVar12;
              if (pppppuVar12[1] != (undefined8 ****)0x0) {
                ppppuVar18 = pppppuVar12[1] + 1;
                do {
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppppuVar18,0x10);
                  if (bVar6) {
                    *ppppuVar18 = (undefined8 ***)((long)*ppppuVar18 + 1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              }
              func_0x00010a19b5ac(param_1 + 0xe8,&ppppuStack_60);
              ppppuVar18 = ppppuStack_58;
              sVar3 = 0;
              if (*(short *)(param_1 + 0x188) != -3) {
                sVar3 = *(short *)(param_1 + 0x188) + 1;
              }
              *(short *)(param_1 + 0x188) = sVar3;
              if (ppppuStack_58 != (undefined8 ****)0x0) {
                ppppuVar2 = ppppuStack_58 + 1;
                do {
                  pppuVar16 = *ppppuVar2;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(ppppuVar2,0x10);
                  if (bVar6) {
                    *ppppuVar2 = (undefined8 ***)((long)pppuVar16 + -1);
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (pppuVar16 == (undefined8 ***)0x0) {
                  (*(code *)(*ppppuStack_58)[2])(ppppuStack_58);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar18);
                }
              }
              func_0x00010a04a704(param_1 + 0x130,&uStack_100);
              if (*(char *)(param_1 + 0x148) == '\x01') {
                plVar13 = *(long **)(param_1 + 0x140);
                if (plVar13 != (long *)0x0) {
                  puVar1 = (ulong *)(plVar13 + 1);
                  do {
                    uVar17 = *puVar1;
                    cVar4 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = uVar17 - 4;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if ((uVar17 & 0x1fffffffc) == 4) {
                    do {
                      uVar17 = *puVar1;
                      cVar4 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar6) {
                        *puVar1 = uVar17 - 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (uVar17 - 1 == 0) {
                      (**(code **)(*plVar13 + 8))();
                    }
                  }
                }
                *(undefined1 *)(param_1 + 0x148) = 0;
              }
              *(undefined4 *)(param_1 + 0xf8) = 2;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (param_1 + 400,*(long *)(param_1 + 0x100) + 0xe8);
              FUN_10a819c2c(param_1);
              FUN_10a07e58c(*(undefined8 *)(param_1 + 0x110));
              plVar13 = plStack_190;
              if (plStack_190 != (long *)0x0) {
                plVar11 = plStack_190 + 1;
                do {
                  lVar19 = *plVar11;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar6) {
                    *plVar11 = lVar19 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar19 == 0) {
                  (**(code **)(*plStack_190 + 0x10))(plStack_190);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                }
              }
              plVar13 = plStack_f8;
              if (plStack_f8 != (long *)0x0) {
                plVar11 = plStack_f8 + 1;
                do {
                  lVar19 = *plVar11;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar6) {
                    *plVar11 = lVar19 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar19 == 0) {
                  (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                }
              }
              plVar13 = plStack_108;
              if (plStack_108 != (long *)0x0) {
                plVar11 = plStack_108 + 1;
                do {
                  lVar19 = *plVar11;
                  cVar4 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                  if (bVar6) {
                    *plVar11 = lVar19 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar19 == 0) {
                  (**(code **)(*plStack_108 + 0x10))(plStack_108);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
                }
              }
              goto LAB_10a81a310;
            }
          }
LAB_10a81a470:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10a81a474);
          (*pcVar7)();
        }
      }
      else {
        func_0x00010a81a7a4(param_1);
        FUN_10a6ebbf4(&pppppppuStack_110,*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x960),
                      param_1 + 0x100);
        if ((*(char *)(param_1 + 0x148) == '\x01') &&
           (plVar13 = *(long **)(param_1 + 0x140), plVar13 != (long *)0x0)) {
          puVar1 = (ulong *)(plVar13 + 1);
          do {
            uVar17 = *puVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = uVar17 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar17 & 0x1fffffffc) == 4) {
            do {
              uVar17 = *puVar1;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar6) {
                *puVar1 = uVar17 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar17 - 1 == 0) {
              (**(code **)(*plVar13 + 8))();
            }
          }
        }
        *(undefined8 ********)(param_1 + 0x140) = pppppppuStack_110;
        *(undefined1 *)(param_1 + 0x148) = 1;
        *(undefined4 *)(param_1 + 0xf8) = 1;
      }
      goto LAB_10a81a310;
    }
  }
LAB_10a81a308:
  func_0x00010a81a688(param_1);
LAB_10a81a310:
  return param_1 + 0xe8;
}



/* Entry: 10a81a688; end: 10a81a8cb;  */

void FUN_10a81a688(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  *(undefined4 *)(param_1 + 0xf8) = 0;
  func_0x00010a81a7a4();
  FUN_10a02d8cc(param_1 + 0x130);
  if (*(char *)(param_1 + 0x148) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x140);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    *(undefined1 *)(param_1 + 0x148) = 0;
  }
  if (*(char *)(param_1 + 0x168) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x160);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar6 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar6 & 0x1fffffffc) == 4) {
        do {
          uVar6 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar6 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar6 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    *(undefined1 *)(param_1 + 0x168) = 0;
  }
  if (*(char *)(param_1 + 0x187) < '\0') {
    *(undefined8 *)(param_1 + 0x178) = 0;
    puVar5 = *(undefined1 **)(param_1 + 0x170);
  }
  else {
    puVar5 = (undefined1 *)(param_1 + 0x170);
    *(undefined1 *)(param_1 + 0x187) = 0;
  }
  *puVar5 = 0;
  if (*(char *)(param_1 + 0x1a7) < '\0') {
    *(undefined8 *)(param_1 + 0x198) = 0;
    puVar5 = *(undefined1 **)(param_1 + 400);
  }
  else {
    puVar5 = (undefined1 *)(param_1 + 400);
    *(undefined1 *)(param_1 + 0x1a7) = 0;
  }
  *puVar5 = 0;
  return;
}



/* Entry: 10a81a8cc; end: 10a81aa13;  */

void FUN_10a81a8cc(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 uStack_40;
  long *plStack_38;
  
  lVar10 = *param_2;
  lVar9 = *(long *)(param_1 + 0x100);
  if (lVar10 == lVar9) {
    return;
  }
  if (lVar10 != 0) {
    uVar11 = (uint)*(byte *)(lVar10 + 0xe0);
    if ((lVar9 != 0) && (uVar11 == *(byte *)(lVar9 + 0xe0))) {
      bVar4 = *(byte *)(lVar10 + 0xff);
      uVar1 = *(ulong *)(lVar10 + 0xf0);
      if (-1 < (char)bVar4) {
        uVar1 = (ulong)bVar4;
      }
      bVar5 = *(byte *)(lVar9 + 0xff);
      uVar2 = *(ulong *)(lVar9 + 0xf0);
      if (-1 < (char)bVar5) {
        uVar2 = (ulong)bVar5;
      }
      if (uVar1 == uVar2) {
        plVar8 = (long *)*(long *)(lVar10 + 0xe8);
        if (-1 < (char)bVar4) {
          plVar8 = (long *)(lVar10 + 0xe8);
        }
        plVar3 = (long *)*(long *)(lVar9 + 0xe8);
        if (-1 < (char)bVar5) {
          plVar3 = (long *)(lVar9 + 0xe8);
        }
        _memcmp(plVar8,plVar3);
        if ((int)plVar8 == 0) {
          return;
        }
      }
    }
    if (9 < uVar11 || (1 << (ulong)(uVar11 & 0x1f) & 0x212U) == 0) {
      func_0x00010ae06f08(1,0x14,&UNK_10f67a8c5,&UNK_10f67a8c5,0xffffffff,&UNK_10f67a929);
      uStack_40 = 0;
      plStack_38 = (long *)0x0;
      FUN_10a6eef74(param_1 + 0x100,&uStack_40);
      plVar8 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar3 = plStack_38 + 1;
        do {
          lVar9 = *plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar9 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      goto LAB_10a81a988;
    }
  }
  FUN_10a6e467c(param_1 + 0x100,param_2);
LAB_10a81a988:
  FUN_10a81a688(param_1);
  return;
}



/* Entry: 10a81aa14; end: 10a81aac7;  */

void FUN_10a81aa14(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a842fb0;
  ppuStack_60 = &PTR_DAT_110c22340;
  ppuVar2 = &PTR_DAT_110c209e8;
  uStack_58 = param_1;
  FUN_10a03ce64(param_2,&PTR_DAT_110c209e8,&pcStack_68,0);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  puStack_a0 = &UNK_10f662423;
  uStack_98 = 0x25;
  (**(code **)(*ppuVar2 + 0x30))(ppuVar2,&PTR_DAT_110c21d00,&puStack_a0);
  FUN_10a6e4398(ppuVar2,&PTR_DAT_110c209e8,pppuVar1 + 0x20,&UNK_10f6345f0,0x13);
  return;
}



/* Entry: 10a81aac8; end: 10a81ab3b;  */

void FUN_10a81aac8(long param_1,long *param_2)

{
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &UNK_10f662423;
  uStack_28 = 0x25;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c21d00,&puStack_30);
  FUN_10a6e4398(param_2,&PTR_DAT_110c209e8,param_1 + 0x100,&UNK_10f6345f0,0x13);
  return;
}



/* Entry: 10a81ab3c; end: 10a81ad67;  */

/* WARNING: Removing unreachable block (ram,0x00010a81ac90) */

void FUN_10a81ab3c(undefined8 *param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 **ppuVar5;
  uint uVar6;
  ulong extraout_x9;
  ulong uVar7;
  long *plVar8;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  long lStack_98;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  char cStack_81;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  lStack_58 = -0x7fffffffffffffe0;
  uStack_60 = 0x1e;
  puVar3[1] = 0x624f7265646e6552;
  *puVar3 = 0x6e6f697461636f4c;
  *(undefined8 *)((long)puVar3 + 0x16) = 0x7b2072656469766f;
  *(undefined8 *)((long)puVar3 + 0xe) = 0x72507463656a624f;
  *(undefined1 *)((long)puVar3 + 0x1e) = 0;
  plVar8 = *(long **)(param_2 + 0x100);
  puStack_68 = puVar3;
  if (plVar8 == (long *)0x0) {
    uVar6 = 0;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    ppuStack_80 = (undefined8 **)((ulong)ppuStack_80 & 0xffffffffffffff00);
    uVar7 = extraout_x9;
  }
  else {
    cStack_81 = '\n';
    uStack_90 = 0x203a;
    lStack_98 = 0x6e6f697461636f6c;
    uStack_8e = 0;
    (**(code **)(*plVar8 + 0x60))(&puStack_b0,plVar8);
    ppuVar1 = (undefined1 **)puStack_b0;
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppuVar1 = &puStack_b0;
    }
    plVar4 = &lStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar4,ppuVar1,uStack_a8);
    uStack_78 = plVar4[1];
    ppuStack_80 = (undefined8 **)*plVar4;
    uStack_70 = plVar4[2];
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    uVar6 = (uint)uStack_70._7_1_;
    uVar7 = uStack_78;
  }
  pppuVar2 = (undefined8 ***)ppuStack_80;
  if (-1 < (char)uVar6) {
    uVar7 = (ulong)uVar6;
    pppuVar2 = &ppuStack_80;
  }
  ppuVar5 = &puStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,pppuVar2,uVar7);
  puStack_48 = ppuVar5[1];
  puStack_50 = *ppuVar5;
  puStack_40 = ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  ppuVar5 = &puStack_50;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,&DAT_10f2da10d,1);
  puVar3 = *ppuVar5;
  param_1[1] = ppuVar5[1];
  *param_1 = puVar3;
  param_1[2] = ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  if ((long)uStack_70 < 0) {
    __ZdlPv(ppuStack_80);
  }
  if (plVar8 != (long *)0x0) {
    if ((char)bStack_99 < '\0') {
      __ZdlPv(puStack_b0);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(lStack_98);
    }
  }
  if (lStack_58 < 0) {
    __ZdlPv(puStack_68);
  }
  return;
}



/* Entry: 10a81ad68; end: 10a81ad6f;  */

/* WARNING: Removing unreachable block (ram,0x00010a81ac90) */

void FUN_10a81ad68(undefined8 *param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 **ppuVar5;
  uint uVar6;
  ulong extraout_x9;
  ulong uVar7;
  long *plVar8;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  byte bStack_99;
  long lStack_98;
  undefined2 uStack_90;
  undefined1 uStack_8e;
  char cStack_81;
  undefined8 **ppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  lStack_58 = -0x7fffffffffffffe0;
  uStack_60 = 0x1e;
  puVar3[1] = 0x624f7265646e6552;
  *puVar3 = 0x6e6f697461636f4c;
  *(undefined8 *)((long)puVar3 + 0x16) = 0x7b2072656469766f;
  *(undefined8 *)((long)puVar3 + 0xe) = 0x72507463656a624f;
  *(undefined1 *)((long)puVar3 + 0x1e) = 0;
  plVar8 = *(long **)(param_2 + 0xd8);
  puStack_68 = puVar3;
  if (plVar8 == (long *)0x0) {
    uVar6 = 0;
    uStack_70 = uStack_70 & 0xffffffffffffff;
    ppuStack_80 = (undefined8 **)((ulong)ppuStack_80 & 0xffffffffffffff00);
    uVar7 = extraout_x9;
  }
  else {
    cStack_81 = '\n';
    uStack_90 = 0x203a;
    lStack_98 = 0x6e6f697461636f6c;
    uStack_8e = 0;
    (**(code **)(*plVar8 + 0x60))(&puStack_b0,plVar8);
    ppuVar1 = (undefined1 **)puStack_b0;
    if (-1 < (char)bStack_99) {
      uStack_a8 = (ulong)bStack_99;
      ppuVar1 = &puStack_b0;
    }
    plVar4 = &lStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (plVar4,ppuVar1,uStack_a8);
    uStack_78 = plVar4[1];
    ppuStack_80 = (undefined8 **)*plVar4;
    uStack_70 = plVar4[2];
    plVar4[1] = 0;
    plVar4[2] = 0;
    *plVar4 = 0;
    uVar6 = (uint)uStack_70._7_1_;
    uVar7 = uStack_78;
  }
  pppuVar2 = (undefined8 ***)ppuStack_80;
  if (-1 < (char)uVar6) {
    uVar7 = (ulong)uVar6;
    pppuVar2 = &ppuStack_80;
  }
  ppuVar5 = &puStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,pppuVar2,uVar7);
  puStack_48 = ppuVar5[1];
  puStack_50 = *ppuVar5;
  puStack_40 = ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  ppuVar5 = &puStack_50;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar5,&DAT_10f2da10d,1);
  puVar3 = *ppuVar5;
  param_1[1] = ppuVar5[1];
  *param_1 = puVar3;
  param_1[2] = ppuVar5[2];
  ppuVar5[1] = (undefined8 *)0x0;
  ppuVar5[2] = (undefined8 *)0x0;
  *ppuVar5 = (undefined8 *)0x0;
  if ((long)uStack_70 < 0) {
    __ZdlPv(ppuStack_80);
  }
  if (plVar8 != (long *)0x0) {
    if ((char)bStack_99 < '\0') {
      __ZdlPv(puStack_b0);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(lStack_98);
    }
  }
  if (lStack_58 < 0) {
    __ZdlPv(puStack_68);
  }
  return;
}



/* Entry: 10a81ad70; end: 10a81ad83;  */

undefined8 * FUN_10a81ad70(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined **ppuStack_178;
  long lStack_140;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined **ppuStack_b0;
  long lStack_78;
  
  puVar6 = &UNK_10f67a98b;
  FUN_10a00946c();
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = *(undefined8 *)(puVar6 + 8);
  puVar7 = (undefined8 *)0x100;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110c223b8;
  puVar12 = puVar7 + 3;
  *puVar12 = &PTR_FUN_110c20a18;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = uVar17;
  lVar13 = *param_2;
  puVar7[8] = param_2[1];
  puVar7[7] = lVar13;
  if (param_2[1] != 0) {
    plVar20 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = *plVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar7[9] = 0;
  puVar7[10] = 0;
  FUN_10a05a5d4(puVar7 + 0xb,&uStack_c0);
  plVar20 = puVar7 + 0xd;
  puVar7[0xe] = 0;
  *plVar20 = 0;
  puVar7[0x18] = 0;
  puVar7[0x17] = 0;
  puVar7[0x1a] = 0;
  puVar7[0x19] = 0;
  puVar7[0x14] = 0;
  puVar7[0x13] = 0;
  puVar7[0x16] = 0;
  puVar7[0x15] = 0;
  puVar7[0x10] = 0;
  puVar7[0xf] = 0;
  puVar7[0x12] = 0;
  puVar7[0x11] = 0;
  *(undefined4 *)(puVar7 + 0x1b) = 0x3f800000;
  puVar7[0x1d] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x1e] = 0;
  if (*(char *)(*param_2 + 0xe0) != '\x01') {
    FUN_10a00946c(&UNK_10f67a9db);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a81afb4);
    (*pcVar5)();
  }
  lVar13 = puVar7[6];
  uVar21 = *(undefined8 *)(lVar13 + 0x20);
  uVar17 = *(undefined8 *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x20) != 0) {
    plVar8 = (long *)(*(long *)(lVar13 + 0x20) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar13 = puVar7[10];
  puVar7[10] = uVar21;
  puVar7[9] = uVar17;
  if (lVar13 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a05a5d4(&uStack_c0,&uStack_c1);
  FUN_10a1eec44(puVar7 + 0xb,&uStack_c0);
  if (plStack_b8 != (long *)0x0) {
    plVar8 = plStack_b8 + 1;
    do {
      lVar13 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  uVar21 = *(undefined8 *)(*(long *)(puVar7[6] + 0x960) + 0x3a8);
  uVar17 = 0xb8;
  __Znwm();
  plStack_b8 = (long *)&UNK_1053a6a3c;
  ppuStack_b0 = &PTR_DAT_110ae9180;
  uStack_c0 = uVar21;
  func_0x000109d18d1c();
  func_0x0001092ba41c(&uStack_c0);
  plVar8 = (long *)puVar7[0x1f];
  puVar7[0x1f] = uVar17;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x10))();
  }
  puVar9 = puVar7;
  puVar19 = puVar12;
  FUN_10a8430b0(puVar7,puVar7 + 4);
  *extraout_x8 = puVar12;
  extraout_x8[1] = puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar9;
  }
  ___stack_chk_fail();
  plVar8 = (long *)puVar7[0x1f];
  puVar7[0x1f] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x10))();
  }
  FUN_10a84329c(puVar7 + 0x17);
  plVar8 = (long *)puVar7[0x16];
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar14 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar14 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar14 & 0x1fffffffc) == 4) {
      do {
        uVar14 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar14 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar14 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  func_0x00010a843244(puVar7 + 0x14);
  func_0x00010a8431ec(puVar7 + 0x12);
  func_0x00010a8431ec(puVar7 + 0x10);
  func_0x00010a843194(puVar7 + 0xe);
  puVar12 = (undefined8 *)*plVar20;
  if (puVar12 != (undefined8 *)0x0) {
    func_0x0001092b4274(plVar20);
  }
  func_0x00010a05a86c(puVar7 + 0xb);
  if (puVar7[10] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0772f0(puVar7 + 7);
  if (puVar7[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__119__shared_weak_countD2Ev(puVar7);
  __ZdlPv();
  __Unwind_Resume();
  lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = puVar9[1];
  puVar7 = (undefined8 *)0x100;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110c223b8;
  puVar9 = puVar7 + 3;
  *puVar9 = &PTR_FUN_110c20a18;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = lVar13;
  uVar17 = *puVar12;
  puVar7[8] = puVar12[1];
  puVar7[7] = uVar17;
  if (puVar12[1] != 0) {
    plVar20 = (long *)(puVar12[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = *plVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar7[9] = 0;
  puVar7[10] = 0;
  FUN_10a05a5d4(puVar7 + 0xb,&plStack_188);
  plVar8 = puVar7 + 0xd;
  *plVar8 = 0;
  uVar17 = *(undefined8 *)(*(long *)(lVar13 + 0x960) + 0x3a8);
  puVar10 = (undefined8 *)0xc8;
  __Znwm();
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_110c22458;
  puVar12 = puVar10 + 3;
  FUN_10a8434e0(puVar12,uVar17);
  FUN_10a844268(*puVar12,puVar19);
  FUN_10a8440d0(puVar12);
  puVar7[0x11] = 0;
  puVar7[0x10] = 0;
  puVar7[0x13] = 0;
  puVar7[0x12] = 0;
  puVar7[0x15] = 0;
  puVar7[0x14] = 0;
  puVar7[0x16] = 0;
  uVar17 = *(undefined8 *)(*(long *)(lVar13 + 0x960) + 0x3a8);
  plVar22 = puVar7 + 0x17;
  puVar7[0x18] = 0;
  *plVar22 = 0;
  puVar7[0xe] = puVar12;
  puVar7[0xf] = puVar10;
  plVar20 = (long *)puVar19[0x15];
  puVar7[0x1a] = 0;
  puVar7[0x19] = 0;
  *(undefined4 *)(puVar7 + 0x1b) = 0x3f800000;
  if (plVar20 != (long *)0x0) {
    plVar2 = puVar7 + 0x19;
    puVar12 = puVar9;
    do {
      plVar11 = (long *)0xc8;
      __Znwm();
      plVar11[1] = 0;
      plVar11[2] = 0;
      plVar18 = plVar11 + 3;
      *plVar11 = (long)&PTR_FUN_110c224a8;
      FUN_10a844704(plVar18,uVar17);
      FUN_10a837f90(*plVar18,plVar20 + 3);
      FUN_10a837d80(plVar18);
      puVar10 = (undefined8 *)(long)(int)plVar20[2];
      puVar19 = (undefined8 *)puVar7[0x18];
      plStack_198 = plVar18;
      plStack_190 = plVar11;
      if (puVar19 != (undefined8 *)0x0) {
        uVar14 = (long)puVar19 - 1;
        if (((ulong)puVar19 & uVar14) == 0) {
          puVar12 = (undefined8 *)(uVar14 & (ulong)puVar10);
        }
        else {
          puVar12 = puVar10;
          if (puVar19 <= puVar10) {
            uVar16 = 0;
            if (puVar19 != (undefined8 *)0x0) {
              uVar16 = (ulong)puVar10 / (ulong)puVar19;
            }
            puVar12 = (undefined8 *)((long)puVar10 - uVar16 * (long)puVar19);
          }
        }
        puVar15 = *(undefined8 **)(*plVar22 + (long)puVar12 * 8);
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar18 = (long *)*puVar15; plVar18 != (long *)0x0; plVar18 = (long *)*plVar18) {
            puVar15 = (undefined8 *)plVar18[1];
            if (puVar15 == puVar10) {
              if ((int)plVar18[2] == (int)plVar20[2]) goto LAB_10a81b400;
            }
            else {
              if (((ulong)puVar19 & uVar14) == 0) {
                puVar15 = (undefined8 *)((ulong)puVar15 & uVar14);
              }
              else if (puVar19 <= puVar15) {
                uVar16 = 0;
                if (puVar19 != (undefined8 *)0x0) {
                  uVar16 = (ulong)puVar15 / (ulong)puVar19;
                }
                puVar15 = (undefined8 *)((long)puVar15 - uVar16 * (long)puVar19);
              }
              if (puVar15 != puVar12) break;
            }
          }
        }
      }
      plVar18 = (long *)0x28;
      __Znwm();
      ppuStack_178 = (undefined **)0x1;
      *plVar18 = 0;
      plVar18[1] = (long)puVar10;
      *(int *)(plVar18 + 2) = (int)plVar20[2];
      plVar18[3] = 0;
      plVar18[4] = 0;
      plStack_188 = plVar18;
      plStack_180 = plVar22;
      if ((puVar19 == (undefined8 *)0x0) ||
         (*(float *)(puVar7 + 0x1b) * (float)puVar19 < (float)(puVar7[0x1a] + 1))) {
        uVar14 = 1;
        if ((undefined8 *)0x2 < puVar19) {
          uVar14 = (ulong)(((ulong)puVar19 & (long)puVar19 - 1U) != 0);
        }
        uVar14 = uVar14 | (long)puVar19 << 1;
        uVar16 = (ulong)((float)(puVar7[0x1a] + 1) / *(float *)(puVar7 + 0x1b));
        if (uVar14 <= uVar16) {
          uVar14 = uVar16;
        }
        FUN_10a844304(plVar22,uVar14);
        puVar19 = (undefined8 *)puVar7[0x18];
        if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
          puVar12 = (undefined8 *)((long)puVar19 - 1U & (ulong)puVar10);
        }
        else {
          puVar12 = puVar10;
          if (puVar19 <= puVar10) {
            uVar14 = 0;
            if (puVar19 != (undefined8 *)0x0) {
              uVar14 = (ulong)puVar10 / (ulong)puVar19;
            }
            puVar12 = (undefined8 *)((long)puVar10 - uVar14 * (long)puVar19);
          }
        }
      }
      lVar13 = *plVar22;
      plVar11 = *(long **)(lVar13 + (long)puVar12 * 8);
      if (plVar11 == (long *)0x0) {
        *plVar18 = *plVar2;
        *plVar2 = (long)plVar18;
        *(long **)(lVar13 + (long)puVar12 * 8) = plVar2;
        if (*plVar18 != 0) {
          puVar10 = *(undefined8 **)(*plVar18 + 8);
          if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
            puVar10 = (undefined8 *)((ulong)puVar10 & (long)puVar19 - 1U);
          }
          else if (puVar19 <= puVar10) {
            uVar14 = 0;
            if (puVar19 != (undefined8 *)0x0) {
              uVar14 = (ulong)puVar10 / (ulong)puVar19;
            }
            puVar10 = (undefined8 *)((long)puVar10 - uVar14 * (long)puVar19);
          }
          plVar11 = (long *)(*plVar22 + (long)puVar10 * 8);
          goto LAB_10a81b3f0;
        }
      }
      else {
        *plVar18 = *plVar11;
LAB_10a81b3f0:
        *plVar11 = (long)plVar18;
      }
      puVar7[0x1a] = puVar7[0x1a] + 1;
LAB_10a81b400:
      FUN_10a81b898(plVar18 + 3,&plStack_198);
      plVar18 = plStack_190;
      if (plStack_190 != (long *)0x0) {
        plVar11 = plStack_190 + 1;
        do {
          lVar13 = *plVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_190 + 0x10))(plStack_190);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar18);
        }
      }
      plVar20 = (long *)*plVar20;
    } while (plVar20 != (long *)0x0);
  }
  puVar7[0x1d] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x1e] = 0;
  lVar13 = puVar7[6];
  uVar21 = *(undefined8 *)(lVar13 + 0x20);
  uVar17 = *(undefined8 *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x20) != 0) {
    plVar20 = (long *)(*(long *)(lVar13 + 0x20) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = *plVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar13 = puVar7[10];
  puVar7[10] = uVar21;
  puVar7[9] = uVar17;
  if (lVar13 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a05a5d4(&plStack_188,&plStack_198);
  FUN_10a1eec44(puVar7 + 0xb,&plStack_188);
  plVar20 = plStack_180;
  if (plStack_180 != (long *)0x0) {
    plVar2 = plStack_180 + 1;
    do {
      lVar13 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_180 + 0x10))(plStack_180);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  plVar20 = *(long **)(*(long *)(puVar7[6] + 0x960) + 0x3a8);
  uVar17 = 0xb8;
  __Znwm();
  plStack_180 = (long *)&UNK_1053a6a3c;
  ppuStack_178 = &PTR_DAT_110ae9180;
  plStack_188 = plVar20;
  func_0x000109d18d1c();
  func_0x0001092ba41c(&plStack_188);
  plVar20 = (long *)puVar7[0x1f];
  puVar7[0x1f] = uVar17;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x10))();
  }
  puVar12 = puVar7;
  FUN_10a8430b0(puVar7,puVar7 + 4,puVar9);
  *extraout_x8_00 = puVar9;
  extraout_x8_00[1] = puVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_140) {
    ___stack_chk_fail();
    plVar20 = (long *)puVar7[0x1f];
    puVar7[0x1f] = 0;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 0x10))();
    }
    FUN_10a84329c(plVar22);
    plVar20 = (long *)puVar7[0x16];
    if (plVar20 != (long *)0x0) {
      puVar1 = (ulong *)(plVar20 + 1);
      do {
        uVar14 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar14 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar14 & 0x1fffffffc) == 4) {
        do {
          uVar14 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar14 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar14 - 1 == 0) {
          (**(code **)(*plVar20 + 8))();
        }
      }
    }
    func_0x00010a843244(puVar7 + 0x14);
    func_0x00010a8431ec(puVar7 + 0x12);
    func_0x00010a8431ec(puVar7 + 0x10);
    func_0x00010a843194(puVar7 + 0xe);
    if (*plVar8 != 0) {
      func_0x0001092b4274(plVar8);
    }
    func_0x00010a05a86c(puVar7 + 0xb);
    if (puVar7[10] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a0772f0(puVar7 + 7);
    if (puVar7[5] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    __ZNSt3__119__shared_weak_countD2Ev(puVar7);
    __ZdlPv();
    __Unwind_Resume();
    func_0x00010a70290c(puVar12 + 3);
    if (*(char *)((long)puVar12 + 0x17) < '\0') {
      __ZdlPv(*puVar12);
    }
    return puVar12;
  }
  return puVar12;
}



/* Entry: 10a81ad84; end: 10a81b09f;  */

undefined8 * FUN_10a81ad84(undefined8 *param_1,long param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x8;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined **ppuStack_168;
  long lStack_130;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined **ppuStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = *(undefined8 *)(param_2 + 8);
  puVar6 = (undefined8 *)0x100;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c223b8;
  puVar11 = puVar6 + 3;
  *puVar11 = &PTR_FUN_110c20a18;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = uVar16;
  lVar12 = *param_3;
  puVar6[8] = param_3[1];
  puVar6[7] = lVar12;
  if (param_3[1] != 0) {
    plVar19 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = *plVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6[9] = 0;
  puVar6[10] = 0;
  FUN_10a05a5d4(puVar6 + 0xb,&uStack_b0);
  plVar19 = puVar6 + 0xd;
  puVar6[0xe] = 0;
  *plVar19 = 0;
  puVar6[0x18] = 0;
  puVar6[0x17] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x19] = 0;
  puVar6[0x14] = 0;
  puVar6[0x13] = 0;
  puVar6[0x16] = 0;
  puVar6[0x15] = 0;
  puVar6[0x10] = 0;
  puVar6[0xf] = 0;
  puVar6[0x12] = 0;
  puVar6[0x11] = 0;
  *(undefined4 *)(puVar6 + 0x1b) = 0x3f800000;
  puVar6[0x1d] = 0;
  puVar6[0x1c] = 0;
  puVar6[0x1f] = 0;
  puVar6[0x1e] = 0;
  if (*(char *)(*param_3 + 0xe0) != '\x01') {
    FUN_10a00946c(&UNK_10f67a9db);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10a81afb4);
    (*pcVar5)();
  }
  lVar12 = puVar6[6];
  uVar20 = *(undefined8 *)(lVar12 + 0x20);
  uVar16 = *(undefined8 *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x20) != 0) {
    plVar7 = (long *)(*(long *)(lVar12 + 0x20) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar12 = puVar6[10];
  puVar6[10] = uVar20;
  puVar6[9] = uVar16;
  if (lVar12 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a05a5d4(&uStack_b0,&uStack_b1);
  FUN_10a1eec44(puVar6 + 0xb,&uStack_b0);
  if (plStack_a8 != (long *)0x0) {
    plVar7 = plStack_a8 + 1;
    do {
      lVar12 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a8);
    }
  }
  uVar20 = *(undefined8 *)(*(long *)(puVar6[6] + 0x960) + 0x3a8);
  uVar16 = 0xb8;
  __Znwm();
  plStack_a8 = (long *)&UNK_1053a6a3c;
  ppuStack_a0 = &PTR_DAT_110ae9180;
  uStack_b0 = uVar20;
  func_0x000109d18d1c();
  func_0x0001092ba41c(&uStack_b0);
  plVar7 = (long *)puVar6[0x1f];
  puVar6[0x1f] = uVar16;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))();
  }
  puVar8 = puVar6;
  puVar18 = puVar11;
  FUN_10a8430b0(puVar6,puVar6 + 4);
  *param_1 = puVar11;
  param_1[1] = puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  ___stack_chk_fail();
  plVar7 = (long *)puVar6[0x1f];
  puVar6[0x1f] = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))();
  }
  FUN_10a84329c(puVar6 + 0x17);
  plVar7 = (long *)puVar6[0x16];
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar13 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar13 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar13 & 0x1fffffffc) == 4) {
      do {
        uVar13 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar13 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar13 - 1 == 0) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  func_0x00010a843244(puVar6 + 0x14);
  func_0x00010a8431ec(puVar6 + 0x12);
  func_0x00010a8431ec(puVar6 + 0x10);
  func_0x00010a843194(puVar6 + 0xe);
  puVar11 = (undefined8 *)*plVar19;
  if (puVar11 != (undefined8 *)0x0) {
    func_0x0001092b4274(plVar19);
  }
  func_0x00010a05a86c(puVar6 + 0xb);
  if (puVar6[10] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0772f0(puVar6 + 7);
  if (puVar6[5] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__119__shared_weak_countD2Ev(puVar6);
  __ZdlPv();
  __Unwind_Resume();
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = puVar8[1];
  puVar6 = (undefined8 *)0x100;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c223b8;
  puVar8 = puVar6 + 3;
  *puVar8 = &PTR_FUN_110c20a18;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = lVar12;
  uVar16 = *puVar11;
  puVar6[8] = puVar11[1];
  puVar6[7] = uVar16;
  if (puVar11[1] != 0) {
    plVar19 = (long *)(puVar11[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = *plVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6[9] = 0;
  puVar6[10] = 0;
  FUN_10a05a5d4(puVar6 + 0xb,&plStack_178);
  plVar7 = puVar6 + 0xd;
  *plVar7 = 0;
  uVar16 = *(undefined8 *)(*(long *)(lVar12 + 0x960) + 0x3a8);
  puVar9 = (undefined8 *)0xc8;
  __Znwm();
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110c22458;
  puVar11 = puVar9 + 3;
  FUN_10a8434e0(puVar11,uVar16);
  FUN_10a844268(*puVar11,puVar18);
  FUN_10a8440d0(puVar11);
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x13] = 0;
  puVar6[0x12] = 0;
  puVar6[0x15] = 0;
  puVar6[0x14] = 0;
  puVar6[0x16] = 0;
  uVar16 = *(undefined8 *)(*(long *)(lVar12 + 0x960) + 0x3a8);
  plVar21 = puVar6 + 0x17;
  puVar6[0x18] = 0;
  *plVar21 = 0;
  puVar6[0xe] = puVar11;
  puVar6[0xf] = puVar9;
  plVar19 = (long *)puVar18[0x15];
  puVar6[0x1a] = 0;
  puVar6[0x19] = 0;
  *(undefined4 *)(puVar6 + 0x1b) = 0x3f800000;
  if (plVar19 != (long *)0x0) {
    plVar2 = puVar6 + 0x19;
    puVar11 = puVar8;
    do {
      plVar10 = (long *)0xc8;
      __Znwm();
      plVar10[1] = 0;
      plVar10[2] = 0;
      plVar17 = plVar10 + 3;
      *plVar10 = (long)&PTR_FUN_110c224a8;
      FUN_10a844704(plVar17,uVar16);
      FUN_10a837f90(*plVar17,plVar19 + 3);
      FUN_10a837d80(plVar17);
      puVar9 = (undefined8 *)(long)(int)plVar19[2];
      puVar18 = (undefined8 *)puVar6[0x18];
      plStack_188 = plVar17;
      plStack_180 = plVar10;
      if (puVar18 != (undefined8 *)0x0) {
        uVar13 = (long)puVar18 - 1;
        if (((ulong)puVar18 & uVar13) == 0) {
          puVar11 = (undefined8 *)(uVar13 & (ulong)puVar9);
        }
        else {
          puVar11 = puVar9;
          if (puVar18 <= puVar9) {
            uVar15 = 0;
            if (puVar18 != (undefined8 *)0x0) {
              uVar15 = (ulong)puVar9 / (ulong)puVar18;
            }
            puVar11 = (undefined8 *)((long)puVar9 - uVar15 * (long)puVar18);
          }
        }
        puVar14 = *(undefined8 **)(*plVar21 + (long)puVar11 * 8);
        if (puVar14 != (undefined8 *)0x0) {
          for (plVar17 = (long *)*puVar14; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
            puVar14 = (undefined8 *)plVar17[1];
            if (puVar14 == puVar9) {
              if ((int)plVar17[2] == (int)plVar19[2]) goto LAB_10a81b400;
            }
            else {
              if (((ulong)puVar18 & uVar13) == 0) {
                puVar14 = (undefined8 *)((ulong)puVar14 & uVar13);
              }
              else if (puVar18 <= puVar14) {
                uVar15 = 0;
                if (puVar18 != (undefined8 *)0x0) {
                  uVar15 = (ulong)puVar14 / (ulong)puVar18;
                }
                puVar14 = (undefined8 *)((long)puVar14 - uVar15 * (long)puVar18);
              }
              if (puVar14 != puVar11) break;
            }
          }
        }
      }
      plVar17 = (long *)0x28;
      __Znwm();
      ppuStack_168 = (undefined **)0x1;
      *plVar17 = 0;
      plVar17[1] = (long)puVar9;
      *(int *)(plVar17 + 2) = (int)plVar19[2];
      plVar17[3] = 0;
      plVar17[4] = 0;
      plStack_178 = plVar17;
      plStack_170 = plVar21;
      if ((puVar18 == (undefined8 *)0x0) ||
         (*(float *)(puVar6 + 0x1b) * (float)puVar18 < (float)(puVar6[0x1a] + 1))) {
        uVar13 = 1;
        if ((undefined8 *)0x2 < puVar18) {
          uVar13 = (ulong)(((ulong)puVar18 & (long)puVar18 - 1U) != 0);
        }
        uVar13 = uVar13 | (long)puVar18 << 1;
        uVar15 = (ulong)((float)(puVar6[0x1a] + 1) / *(float *)(puVar6 + 0x1b));
        if (uVar13 <= uVar15) {
          uVar13 = uVar15;
        }
        FUN_10a844304(plVar21,uVar13);
        puVar18 = (undefined8 *)puVar6[0x18];
        if (((ulong)puVar18 & (long)puVar18 - 1U) == 0) {
          puVar11 = (undefined8 *)((long)puVar18 - 1U & (ulong)puVar9);
        }
        else {
          puVar11 = puVar9;
          if (puVar18 <= puVar9) {
            uVar13 = 0;
            if (puVar18 != (undefined8 *)0x0) {
              uVar13 = (ulong)puVar9 / (ulong)puVar18;
            }
            puVar11 = (undefined8 *)((long)puVar9 - uVar13 * (long)puVar18);
          }
        }
      }
      lVar12 = *plVar21;
      plVar10 = *(long **)(lVar12 + (long)puVar11 * 8);
      if (plVar10 == (long *)0x0) {
        *plVar17 = *plVar2;
        *plVar2 = (long)plVar17;
        *(long **)(lVar12 + (long)puVar11 * 8) = plVar2;
        if (*plVar17 != 0) {
          puVar9 = *(undefined8 **)(*plVar17 + 8);
          if (((ulong)puVar18 & (long)puVar18 - 1U) == 0) {
            puVar9 = (undefined8 *)((ulong)puVar9 & (long)puVar18 - 1U);
          }
          else if (puVar18 <= puVar9) {
            uVar13 = 0;
            if (puVar18 != (undefined8 *)0x0) {
              uVar13 = (ulong)puVar9 / (ulong)puVar18;
            }
            puVar9 = (undefined8 *)((long)puVar9 - uVar13 * (long)puVar18);
          }
          plVar10 = (long *)(*plVar21 + (long)puVar9 * 8);
          goto LAB_10a81b3f0;
        }
      }
      else {
        *plVar17 = *plVar10;
LAB_10a81b3f0:
        *plVar10 = (long)plVar17;
      }
      puVar6[0x1a] = puVar6[0x1a] + 1;
LAB_10a81b400:
      FUN_10a81b898(plVar17 + 3,&plStack_188);
      plVar17 = plStack_180;
      if (plStack_180 != (long *)0x0) {
        plVar10 = plStack_180 + 1;
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
          (**(code **)(*plStack_180 + 0x10))(plStack_180);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      plVar19 = (long *)*plVar19;
    } while (plVar19 != (long *)0x0);
  }
  puVar6[0x1d] = 0;
  puVar6[0x1c] = 0;
  puVar6[0x1f] = 0;
  puVar6[0x1e] = 0;
  lVar12 = puVar6[6];
  uVar20 = *(undefined8 *)(lVar12 + 0x20);
  uVar16 = *(undefined8 *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x20) != 0) {
    plVar19 = (long *)(*(long *)(lVar12 + 0x20) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = *plVar19 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar12 = puVar6[10];
  puVar6[10] = uVar20;
  puVar6[9] = uVar16;
  if (lVar12 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a05a5d4(&plStack_178,&plStack_188);
  FUN_10a1eec44(puVar6 + 0xb,&plStack_178);
  plVar19 = plStack_170;
  if (plStack_170 != (long *)0x0) {
    plVar2 = plStack_170 + 1;
    do {
      lVar12 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_170 + 0x10))(plStack_170);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
    }
  }
  plVar19 = *(long **)(*(long *)(puVar6[6] + 0x960) + 0x3a8);
  uVar16 = 0xb8;
  __Znwm();
  plStack_170 = (long *)&UNK_1053a6a3c;
  ppuStack_168 = &PTR_DAT_110ae9180;
  plStack_178 = plVar19;
  func_0x000109d18d1c();
  func_0x0001092ba41c(&plStack_178);
  plVar19 = (long *)puVar6[0x1f];
  puVar6[0x1f] = uVar16;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x10))();
  }
  puVar11 = puVar6;
  FUN_10a8430b0(puVar6,puVar6 + 4,puVar8);
  *extraout_x8 = puVar8;
  extraout_x8[1] = puVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_130) {
    ___stack_chk_fail();
    plVar19 = (long *)puVar6[0x1f];
    puVar6[0x1f] = 0;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x10))();
    }
    FUN_10a84329c(plVar21);
    plVar19 = (long *)puVar6[0x16];
    if (plVar19 != (long *)0x0) {
      puVar1 = (ulong *)(plVar19 + 1);
      do {
        uVar13 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar13 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar13 & 0x1fffffffc) == 4) {
        do {
          uVar13 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar13 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar13 - 1 == 0) {
          (**(code **)(*plVar19 + 8))();
        }
      }
    }
    func_0x00010a843244(puVar6 + 0x14);
    func_0x00010a8431ec(puVar6 + 0x12);
    func_0x00010a8431ec(puVar6 + 0x10);
    func_0x00010a843194(puVar6 + 0xe);
    if (*plVar7 != 0) {
      func_0x0001092b4274(plVar7);
    }
    func_0x00010a05a86c(puVar6 + 0xb);
    if (puVar6[10] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a0772f0(puVar6 + 7);
    if (puVar6[5] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    __ZNSt3__119__shared_weak_countD2Ev(puVar6);
    __ZdlPv();
    __Unwind_Resume();
    func_0x00010a70290c(puVar11 + 3);
    if (*(char *)((long)puVar11 + 0x17) < '\0') {
      __ZdlPv(*puVar11);
    }
    return puVar11;
  }
  return puVar11;
}



/* Entry: 10a81b0a0; end: 10a81b6f3;  */

undefined8 * FUN_10a81b0a0(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined **ppuStack_a8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = *(long *)(param_2 + 8);
  puVar5 = (undefined8 *)0x100;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110c223b8;
  puVar17 = puVar5 + 3;
  *puVar17 = &PTR_FUN_110c20a18;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = lVar14;
  uVar11 = *param_3;
  puVar5[8] = param_3[1];
  puVar5[7] = uVar11;
  if (param_3[1] != 0) {
    plVar13 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar5[9] = 0;
  puVar5[10] = 0;
  FUN_10a05a5d4(puVar5 + 0xb,&plStack_b8);
  plVar16 = puVar5 + 0xd;
  *plVar16 = 0;
  uVar11 = *(undefined8 *)(*(long *)(lVar14 + 0x960) + 0x3a8);
  puVar6 = (undefined8 *)0xc8;
  __Znwm();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110c22458;
  puVar18 = puVar6 + 3;
  FUN_10a8434e0(puVar18,uVar11);
  FUN_10a844268(*puVar18,param_4);
  FUN_10a8440d0(puVar18);
  puVar5[0x11] = 0;
  puVar5[0x10] = 0;
  puVar5[0x13] = 0;
  puVar5[0x12] = 0;
  puVar5[0x15] = 0;
  puVar5[0x14] = 0;
  puVar5[0x16] = 0;
  uVar11 = *(undefined8 *)(*(long *)(lVar14 + 0x960) + 0x3a8);
  plVar19 = puVar5 + 0x17;
  puVar5[0x18] = 0;
  *plVar19 = 0;
  puVar5[0xe] = puVar18;
  puVar5[0xf] = puVar6;
  plVar13 = *(long **)(param_4 + 0xa8);
  puVar5[0x1a] = 0;
  puVar5[0x19] = 0;
  *(undefined4 *)(puVar5 + 0x1b) = 0x3f800000;
  if (plVar13 != (long *)0x0) {
    plVar1 = puVar5 + 0x19;
    puVar18 = puVar17;
    do {
      plVar7 = (long *)0xc8;
      __Znwm();
      plVar7[1] = 0;
      plVar7[2] = 0;
      plVar12 = plVar7 + 3;
      *plVar7 = (long)&PTR_FUN_110c224a8;
      FUN_10a844704(plVar12,uVar11);
      FUN_10a837f90(*plVar12,plVar13 + 3);
      FUN_10a837d80(plVar12);
      puVar15 = (undefined8 *)(long)(int)plVar13[2];
      puVar6 = (undefined8 *)puVar5[0x18];
      plStack_c8 = plVar12;
      plStack_c0 = plVar7;
      if (puVar6 != (undefined8 *)0x0) {
        uVar8 = (long)puVar6 - 1;
        if (((ulong)puVar6 & uVar8) == 0) {
          puVar18 = (undefined8 *)(uVar8 & (ulong)puVar15);
        }
        else {
          puVar18 = puVar15;
          if (puVar6 <= puVar15) {
            uVar10 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              uVar10 = (ulong)puVar15 / (ulong)puVar6;
            }
            puVar18 = (undefined8 *)((long)puVar15 - uVar10 * (long)puVar6);
          }
        }
        puVar9 = *(undefined8 **)(*plVar19 + (long)puVar18 * 8);
        if (puVar9 != (undefined8 *)0x0) {
          for (plVar12 = (long *)*puVar9; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
            puVar9 = (undefined8 *)plVar12[1];
            if (puVar9 == puVar15) {
              if ((int)plVar12[2] == (int)plVar13[2]) goto LAB_10a81b400;
            }
            else {
              if (((ulong)puVar6 & uVar8) == 0) {
                puVar9 = (undefined8 *)((ulong)puVar9 & uVar8);
              }
              else if (puVar6 <= puVar9) {
                uVar10 = 0;
                if (puVar6 != (undefined8 *)0x0) {
                  uVar10 = (ulong)puVar9 / (ulong)puVar6;
                }
                puVar9 = (undefined8 *)((long)puVar9 - uVar10 * (long)puVar6);
              }
              if (puVar9 != puVar18) break;
            }
          }
        }
      }
      plVar12 = (long *)0x28;
      __Znwm();
      ppuStack_a8 = (undefined **)0x1;
      *plVar12 = 0;
      plVar12[1] = (long)puVar15;
      *(int *)(plVar12 + 2) = (int)plVar13[2];
      plVar12[3] = 0;
      plVar12[4] = 0;
      plStack_b8 = plVar12;
      plStack_b0 = plVar19;
      if ((puVar6 == (undefined8 *)0x0) ||
         (*(float *)(puVar5 + 0x1b) * (float)puVar6 < (float)(puVar5[0x1a] + 1))) {
        uVar8 = 1;
        if ((undefined8 *)0x2 < puVar6) {
          uVar8 = (ulong)(((ulong)puVar6 & (long)puVar6 - 1U) != 0);
        }
        uVar8 = uVar8 | (long)puVar6 << 1;
        uVar10 = (ulong)((float)(puVar5[0x1a] + 1) / *(float *)(puVar5 + 0x1b));
        if (uVar8 <= uVar10) {
          uVar8 = uVar10;
        }
        FUN_10a844304(plVar19,uVar8);
        puVar6 = (undefined8 *)puVar5[0x18];
        if (((ulong)puVar6 & (long)puVar6 - 1U) == 0) {
          puVar18 = (undefined8 *)((long)puVar6 - 1U & (ulong)puVar15);
        }
        else {
          puVar18 = puVar15;
          if (puVar6 <= puVar15) {
            uVar8 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              uVar8 = (ulong)puVar15 / (ulong)puVar6;
            }
            puVar18 = (undefined8 *)((long)puVar15 - uVar8 * (long)puVar6);
          }
        }
      }
      lVar14 = *plVar19;
      plVar7 = *(long **)(lVar14 + (long)puVar18 * 8);
      if (plVar7 == (long *)0x0) {
        *plVar12 = *plVar1;
        *plVar1 = (long)plVar12;
        *(long **)(lVar14 + (long)puVar18 * 8) = plVar1;
        if (*plVar12 != 0) {
          puVar15 = *(undefined8 **)(*plVar12 + 8);
          if (((ulong)puVar6 & (long)puVar6 - 1U) == 0) {
            puVar15 = (undefined8 *)((ulong)puVar15 & (long)puVar6 - 1U);
          }
          else if (puVar6 <= puVar15) {
            uVar8 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              uVar8 = (ulong)puVar15 / (ulong)puVar6;
            }
            puVar15 = (undefined8 *)((long)puVar15 - uVar8 * (long)puVar6);
          }
          plVar7 = (long *)(*plVar19 + (long)puVar15 * 8);
          goto LAB_10a81b3f0;
        }
      }
      else {
        *plVar12 = *plVar7;
LAB_10a81b3f0:
        *plVar7 = (long)plVar12;
      }
      puVar5[0x1a] = puVar5[0x1a] + 1;
LAB_10a81b400:
      FUN_10a81b898(plVar12 + 3,&plStack_c8);
      plVar12 = plStack_c0;
      if (plStack_c0 != (long *)0x0) {
        plVar7 = plStack_c0 + 1;
        do {
          lVar14 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar14 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
        }
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  puVar5[0x1d] = 0;
  puVar5[0x1c] = 0;
  puVar5[0x1f] = 0;
  puVar5[0x1e] = 0;
  lVar14 = puVar5[6];
  uVar20 = *(undefined8 *)(lVar14 + 0x20);
  uVar11 = *(undefined8 *)(lVar14 + 0x18);
  if (*(long *)(lVar14 + 0x20) != 0) {
    plVar13 = (long *)(*(long *)(lVar14 + 0x20) + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar14 = puVar5[10];
  puVar5[10] = uVar20;
  puVar5[9] = uVar11;
  if (lVar14 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a05a5d4(&plStack_b8,&plStack_c8);
  FUN_10a1eec44(puVar5 + 0xb,&plStack_b8);
  plVar13 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar1 = plStack_b0 + 1;
    do {
      lVar14 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  plVar13 = *(long **)(*(long *)(puVar5[6] + 0x960) + 0x3a8);
  uVar11 = 0xb8;
  __Znwm();
  plStack_b0 = (long *)&UNK_1053a6a3c;
  ppuStack_a8 = &PTR_DAT_110ae9180;
  plStack_b8 = plVar13;
  func_0x000109d18d1c();
  func_0x0001092ba41c(&plStack_b8);
  plVar13 = (long *)puVar5[0x1f];
  puVar5[0x1f] = uVar11;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  puVar18 = puVar5;
  FUN_10a8430b0(puVar5,puVar5 + 4,puVar17);
  *param_1 = puVar17;
  param_1[1] = puVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    plVar13 = (long *)puVar5[0x1f];
    puVar5[0x1f] = 0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x10))();
    }
    FUN_10a84329c(plVar19);
    plVar13 = (long *)puVar5[0x16];
    if (plVar13 != (long *)0x0) {
      puVar2 = (ulong *)(plVar13 + 1);
      do {
        uVar8 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar8 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = uVar8 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar13 + 8))();
        }
      }
    }
    func_0x00010a843244(puVar5 + 0x14);
    func_0x00010a8431ec(puVar5 + 0x12);
    func_0x00010a8431ec(puVar5 + 0x10);
    func_0x00010a843194(puVar5 + 0xe);
    if (*plVar16 != 0) {
      func_0x0001092b4274(plVar16);
    }
    func_0x00010a05a86c(puVar5 + 0xb);
    if (puVar5[10] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    FUN_10a0772f0(puVar5 + 7);
    if (puVar5[5] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    __ZNSt3__119__shared_weak_countD2Ev(puVar5);
    __ZdlPv();
    __Unwind_Resume();
    func_0x00010a70290c(puVar18 + 3);
    if (*(char *)((long)puVar18 + 0x17) < '\0') {
      __ZdlPv(*puVar18);
    }
    return puVar18;
  }
  return puVar18;
}



/* Entry: 10a81b6f4; end: 10a81b72b;  */

undefined8 * FUN_10a81b6f4(undefined8 *param_1)

{
  func_0x00010a70290c(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a81b72c; end: 10a81b87f;  */

long FUN_10a81b72c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plStack_28;
  
  if (*(long **)(param_1 + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x38))(&plStack_28);
    FUN_109d1a244(&plStack_28);
    if (plStack_28 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_28 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plStack_28 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_10a84329c(param_1 + 0xa0);
  plVar4 = *(long **)(param_1 + 0x98);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x00010a843244(param_1 + 0x88);
  func_0x00010a8431ec(param_1 + 0x78);
  func_0x00010a8431ec(param_1 + 0x68);
  func_0x00010a843194(param_1 + 0x58);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x0001092b4274();
  }
  func_0x00010a05a86c(param_1 + 0x40);
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0772f0(param_1 + 0x20);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a81b880; end: 10a81b883;  */

long FUN_10a81b880(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plStack_28;
  
  if (*(long **)(param_1 + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x38))(&plStack_28);
    FUN_109d1a244(&plStack_28);
    if (plStack_28 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_28 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plStack_28 + 8))();
        }
      }
    }
    plVar4 = *(long **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_10a84329c(param_1 + 0xa0);
  plVar4 = *(long **)(param_1 + 0x98);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  func_0x00010a843244(param_1 + 0x88);
  func_0x00010a8431ec(param_1 + 0x78);
  func_0x00010a8431ec(param_1 + 0x68);
  func_0x00010a843194(param_1 + 0x58);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x0001092b4274();
  }
  func_0x00010a05a86c(param_1 + 0x40);
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  FUN_10a0772f0(param_1 + 0x20);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a81b884; end: 10a81b897;  */

void FUN_10a81b884(void)

{
  FUN_10a81b72c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a81b898; end: 10a81b94b;  */

undefined8 * FUN_10a81b898(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a81b94c; end: 10a81c30b;  */

/* WARNING: Removing unreachable block (ram,0x00010a81b9ec) */
/* WARNING: Removing unreachable block (ram,0x00010a81c0f4) */

void FUN_10a81b94c(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined ***pppuVar9;
  ulong uVar10;
  undefined8 in_x7;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined **ppuStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 **ppuStack_158;
  undefined **ppuStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [56];
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *(long *)(param_1 + 0x18);
  ppppuVar4 = (undefined8 ****)&ppuStack_c8;
  func_0x000107c2b054(ppppuVar4,&UNK_10f67aa72);
  lVar11 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar11 + 0xff) < '\0') {
    ppppuVar4 = &pppuStack_200;
    func_0x000107c3192c(ppppuVar4,*(undefined8 *)(lVar11 + 0xe8),*(undefined8 *)(lVar11 + 0xf0));
  }
  else {
    uStack_1f8 = *(undefined8 *)(lVar11 + 0xf0);
    pppuStack_200 = *(undefined8 ****)(lVar11 + 0xe8);
    lStack_1f0 = *(long *)(lVar11 + 0xf8);
  }
  if (lVar13 != 0) {
    ppppuVar4 = *(undefined8 *****)(lVar13 + 0x8d8);
    FUN_10a76bdb0(ppppuVar4,&ppuStack_c8,&pppuStack_200);
  }
  if (lStack_1f0 < 0) {
    ppppuVar4 = (undefined8 ****)pppuStack_200;
    __ZdlPv();
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(undefined8 *****)(param_1 + 200) = ppppuVar4;
  uVar14 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x960) + 0x3a8);
  puVar5 = (undefined8 *)0xc8;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar6 = puVar5 + 3;
  *puVar5 = &PTR_FUN_110c22458;
  FUN_10a8434e0(puVar6,uVar14);
  plVar15 = *(long **)(param_1 + 0x60);
  *(undefined8 **)(param_1 + 0x58) = puVar6;
  *(undefined8 **)(param_1 + 0x60) = puVar5;
  if (plVar15 != (long *)0x0) {
    plVar7 = plVar15 + 1;
    do {
      lVar11 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  ppuStack_220 = &PTR_FUN_110c78ce0;
  uStack_218 = 0;
  lStack_208 = 0;
  uStack_210 = 1;
  lVar11 = 0;
  FUN_10a701c0c();
  uVar10 = *(ulong *)(lVar11 + 8);
  if ((uVar10 & 1) != 0) {
    uVar10 = *(ulong *)(uVar10 & 0xfffffffffffffffe);
  }
  lStack_208 = lVar11;
  func_0x000107c30248(lVar11 + 0x10,*(long *)(param_1 + 0x20) + 0xe8,uVar10);
  *(undefined4 *)(lVar11 + 0x18) = 1;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x960) + 0x88) != 0) {
    FUN_10a00946c(&UNK_10f67c14f);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a81c0cc);
    (*pcVar3)();
  }
  plVar15 = (long *)0x58;
  __Znwm();
  plVar16 = plVar15 + 1;
  *plVar16 = 0;
  plVar15[2] = 0;
  *plVar15 = (long)&PTR_DAT_110c226b0;
  plVar18 = plVar15 + 3;
  *plVar18 = (long)&UNK_1053a6a3c;
  plVar15[6] = 0;
  plVar15[5] = 0;
  plVar15[8] = 0;
  plVar15[7] = 0;
  plVar15[10] = 0;
  plVar15[9] = 0;
  plVar15[4] = (long)&PTR_DAT_110950c70;
  plVar7 = (long *)0x20;
  __Znwm();
  plVar17 = plVar7 + 1;
  *plVar17 = 0;
  plVar7[2] = 0;
  *plVar7 = (long)&PTR_DAT_110b3f0e8;
  plVar12 = plVar7 + 3;
  *(undefined4 *)plVar12 = 0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar2) {
      *plVar16 = *plVar16 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar2) {
      *plVar17 = *plVar17 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar2) {
      *plVar16 = *plVar16 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar2) {
      *plVar17 = *plVar17 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_1a0 = *(undefined8 *)(param_1 + 200);
  lStack_1c8 = param_1;
  plStack_1c0 = plVar18;
  plStack_1b8 = plVar15;
  plStack_1b0 = plVar12;
  plStack_1a8 = plVar7;
  FUN_10a3bf5c8(&ppuStack_158,&ppuStack_220);
  lVar13 = *(long *)(*(long *)(param_1 + 0x18) + 0x100);
  FUN_10a81e0fc(&plStack_1e0,*(undefined8 *)(param_1 + 0x40),&lStack_1c8);
  plVar8 = (long *)0x138;
  __Znwm();
  ppuStack_c8 = ppuStack_158;
  plVar19 = plVar8 + 1;
  *plVar19 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_110b9f3b0;
  plVar16 = plVar8 + 3;
  ppuStack_158 = (undefined8 **)0x0;
  ppuStack_c0 = ppuStack_150;
  (*(code *)plStack_148[2])(auStack_b8,&plStack_148);
  uStack_80 = uStack_110;
  uVar10 = *(ulong *)(lVar13 + 0x210);
  lVar11 = *(long *)(lVar13 + 0x208);
  if (-1 < (char)*(byte *)(lVar13 + 0x21f)) {
    uVar10 = (ulong)*(byte *)(lVar13 + 0x21f);
    lVar11 = lVar13 + 0x208;
  }
  pcStack_108 = FUN_10a848384;
  ppuStack_100 = &PTR_FUN_110c22668;
  plStack_f8 = plStack_1e0;
  plStack_e8 = (long *)uStack_1d0;
  plStack_f0 = plStack_1d8;
  plStack_1d8 = (long *)0x0;
  uStack_1d0 = 0;
  FUN_10a23708c(plVar16,&UNK_10e4dd060,0x57,&UNK_10f647b49,4,&ppuStack_c8,6,in_x7,lVar11,uVar10,
                &pcStack_108);
  (*(code *)*ppuStack_100)(&ppuStack_100);
  FUN_10a042634(&ppuStack_c8);
  FUN_10a81e254(&plStack_1e0);
  FUN_10a042634(&ppuStack_158);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar2) {
      *plVar19 = *plVar19 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pcStack_198 = FUN_10a8487a8;
  ppuStack_190 = &PTR_FUN_110c22680;
  do {
    lVar11 = *plVar19;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar2) {
      *plVar19 = lVar11 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lStack_188 = param_1;
  plStack_180 = plVar16;
  plStack_178 = plVar8;
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
  }
  plVar16 = plStack_1a8;
  if (plStack_1a8 != (long *)0x0) {
    plVar8 = plStack_1a8 + 1;
    do {
      lVar11 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  plVar16 = plStack_1b8;
  if (plStack_1b8 != (long *)0x0) {
    plVar8 = plStack_1b8 + 1;
    do {
      lVar11 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
    }
  }
  do {
    lVar11 = *plVar17;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar2) {
      *plVar17 = lVar11 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar11 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 1;
    do {
      lVar11 = *plVar16;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  if (plVar7 == (long *)0x0) {
    plStack_1b0 = *(long **)(param_1 + 200);
    plStack_e8 = (long *)0x0;
  }
  else {
    plVar16 = plVar7 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = *plVar16 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = *plVar16 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_1b0 = *(long **)(param_1 + 200);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = *plVar16 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = *plVar16 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plStack_e8 = plVar7;
    } while (cVar1 != '\0');
  }
  ppuStack_100 = &PTR_FUN_110c22710;
  ppuStack_150 = &PTR_FUN_110c226f0;
  ppuStack_158 = (undefined8 **)FUN_10a8488fc;
  pcStack_108 = FUN_10a8489b4;
  plStack_1e0 = plVar12;
  plStack_1d8 = plVar7;
  lStack_1c8 = param_1;
  plStack_1c0 = plVar12;
  plStack_1b8 = plStack_e8;
  plStack_148 = plVar12;
  plStack_140 = plStack_e8;
  plStack_f8 = (long *)param_1;
  plStack_f0 = plVar12;
  uStack_e0 = plStack_1b0;
  FUN_10a81e2d4(&ppuStack_c8,&pcStack_198,&ppuStack_158,&pcStack_108);
  *plVar18 = (long)ppuStack_c8;
  plVar12 = plVar15 + 4;
  (**(code **)*plVar12)(plVar12);
  (*(code *)ppuStack_c0[2])(plVar12,&ppuStack_c0);
  (*(code *)*ppuStack_c0)(&ppuStack_c0);
  (*(code *)*ppuStack_100)(&ppuStack_100);
  (*(code *)*ppuStack_150)(&ppuStack_150);
  (*pcStack_198)(&pcStack_198);
  plVar12 = plStack_1b8;
  if (plStack_1b8 != (long *)0x0) {
    plVar16 = plStack_1b8 + 1;
    do {
      lVar11 = *plVar16;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  plVar12 = plStack_1d8;
  if (plStack_1d8 != (long *)0x0) {
    plVar16 = plStack_1d8 + 1;
    do {
      lVar11 = *plVar16;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar2) {
        *plVar16 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  (*(code *)*ppuStack_190)(&ppuStack_190);
  if (plVar7 != (long *)0x0) {
    plVar12 = plVar7 + 1;
    do {
      lVar11 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  if (plVar15 != (long *)0x0) {
    plVar7 = plVar15 + 1;
    do {
      lVar11 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
    }
  }
  pppuVar9 = &ppuStack_220;
  FUN_10ae0f1d0(pppuVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  do {
    __Unwind_Resume(pppuVar9);
  } while( true );
}



/* Entry: 10a81c30c; end: 10a81c63f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a81c30c(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long alStack_50 [2];
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  uVar10 = *(undefined8 *)(param_2 + 0xe0);
  puVar5 = (undefined8 *)0x70;
  __Znwm();
  *puVar5 = FUN_10a855440;
  puVar5[1] = FUN_10a85569c;
  FUN_10a835198(puVar5 + 2);
  lVar7 = puVar5[7];
  if (lVar7 != 0) {
    plVar6 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar7;
  puVar5[0xb] = param_2;
  puVar5[9] = uVar10;
  *(undefined1 *)(puVar5 + 10) = 0;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  alStack_50[0] = 0;
  FUN_109d18960(puVar5 + 2,uVar10,alStack_50);
  if (alStack_50[0] == 0) {
    puStack_40 = puVar5;
    if ((*(byte *)(puVar5 + 10) & 1) == 0) {
      puStack_38 = (undefined8 *)puVar5[9];
      alStack_50[1] = 0;
      (**(code **)*puStack_38)(puStack_38,alStack_50 + 1);
      __ZNSt13exception_ptrD1Ev(alStack_50);
      return;
    }
    __ZNSt13exception_ptrD1Ev(alStack_50);
    FUN_10a834b9c(puVar5 + 0xc,puVar5[0xb]);
    puVar5[9] = puVar5[0xc];
    plVar6 = (long *)(puVar5[0xc] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar5 + 0xd) = 1;
      lVar7 = puVar5[9];
      plVar6 = (long *)(lVar7 + 0x10);
      puStack_38 = (undefined8 *)puVar5[3];
      do {
        lVar9 = *plVar6;
        if (lVar9 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            alStack_50[1] = 0;
            func_0x000109d1b588(lVar7 + 0x18,alStack_50 + 1);
            *(undefined8 *)(lVar7 + 0x10) = 0;
            return;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar9 >> 1 & 1) == 0);
    }
    lVar7 = puVar5[9];
    if (((uint)*(undefined8 *)(puVar5[9] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar7 + 0xb8) & 1) != 0) {
        func_0x00010a834af0(puVar5 + 2,lVar7 + 0x98);
        plVar6 = (long *)puVar5[9];
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        plVar6 = (long *)puVar5[0xc];
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            uVar8 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar8 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar8 & 0x1fffffffc) == 4) {
            do {
              uVar8 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar8 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar8 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar5 + 2);
        __ZdlPv(puVar5);
        return;
      }
    }
    else {
      func_0x0001092af97c(lVar7 + 0x90);
    }
  }
  else {
    func_0x0001092af97c(alStack_50);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a81c560);
  (*pcVar4)();
}



/* Entry: 10a81c640; end: 10a81c85b;  */

void FUN_10a81c640(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  long *plVar2;
  undefined **ppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_188;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 *apuStack_108 [7];
  undefined8 uStack_d0;
  undefined8 *apuStack_c8 [8];
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a81c85c();
  uVar13 = *(undefined8 *)(param_1 + 0x88);
  FUN_10a81d2ec(&uStack_120,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  uStack_110 = *param_2;
  (**(code **)(param_2[1] + 0x18))(apuStack_108,param_2 + 1);
  uStack_d0 = *param_3;
  (**(code **)(param_3[1] + 0x18))(apuStack_c8,param_3 + 1);
  pcStack_88 = FUN_10a845364;
  ppuStack_80 = &PTR_FUN_110c224e8;
  puVar7 = (undefined8 *)0x90;
  __Znwm();
  puVar7[1] = lStack_118;
  *puVar7 = uStack_120;
  uStack_120 = 0;
  lStack_118 = 0;
  puVar7[2] = uStack_110;
  (*(code *)apuStack_108[0][3])(puVar7 + 3,apuStack_108);
  puVar7[10] = uStack_d0;
  (*(code *)apuStack_c8[0][3])(puVar7 + 0xb,apuStack_c8);
  puStack_78 = puVar7;
  FUN_10a81d0a4(uVar13,&pcStack_88);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  (*(code *)*apuStack_c8[0])(apuStack_c8);
  (*(code *)*apuStack_108[0])(apuStack_108);
  lVar14 = lStack_118;
  if (lStack_118 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_80)(&ppuStack_80);
  FUN_10a81d380(&uStack_120);
  __Unwind_Resume();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(lVar14 + 0x20) == 0) {
    uVar13 = 0x120;
    ___cxa_allocate_exception(0x120);
    FUN_10a2e1840();
    ___cxa_throw(uVar13,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10a81cdf8:
    ___stack_chk_fail();
  }
  else {
    if (*(long *)(lVar14 + 0x88) != 0) {
LAB_10a81c8a0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
        return;
      }
      goto LAB_10a81cdf8;
    }
    puVar15 = *(undefined **)(*(long *)(*(long *)(lVar14 + 0x18) + 0x960) + 0x3a8);
    puVar7 = (undefined8 *)0xc8;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[4] = 0;
    puVar7[3] = 0;
    *puVar7 = &PTR_DAT_110c22578;
    puVar7[9] = 0x32aaaba7;
    puVar7[6] = 0;
    puVar7[5] = 0;
    puVar7[8] = 0;
    puVar7[7] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0x32aaaba7;
    puVar7[0x13] = 0;
    puVar7[0x12] = 0;
    puVar7[0x15] = 0;
    puVar7[0x14] = 0;
    puVar7[0x17] = 0;
    puVar7[0x16] = 0;
    puVar7[0x18] = 0;
    puVar8 = (undefined8 *)0xb0;
    __Znwm();
    plVar10 = puVar8 + 1;
    puVar8[2] = 0;
    *plVar10 = 0x200000006;
    *(undefined2 *)(puVar8 + 3) = 4;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[0xd] = 0;
    puVar8[0xc] = 0;
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = puVar8 + 3;
    puVar8[0x12] = 0;
    *puVar8 = &PTR_FUN_110c225c8;
    *(undefined1 *)(puVar8 + 0x13) = 0;
    *(undefined1 *)(puVar8 + 0x15) = 0;
    puVar7[3] = puVar8;
    puVar7[4] = puVar8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    ppuVar9 = (undefined **)0x70;
    __Znwm();
    *ppuVar9 = FUN_10a854044;
    ppuVar9[1] = FUN_10a854330;
    FUN_10a846f10(ppuVar9 + 2);
    puVar16 = ppuVar9[7];
    if (puVar16 != (undefined *)0x0) {
      plVar10 = (long *)(puVar16 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppuVar9[0xb] = (undefined *)puVar8;
    ppuVar9[9] = puVar15;
    *(undefined1 *)(ppuVar9 + 10) = 0;
    *(undefined1 *)(ppuVar9 + 0xd) = 0;
    puStack_1e0 = (undefined8 *)0x0;
    FUN_109d18960(ppuVar9 + 2,puVar15,&puStack_1e0);
    if (puStack_1e0 == (undefined8 *)0x0) {
      if (((ulong)ppuVar9[10] & 1) == 0) {
        puStack_1b8 = (undefined8 *)ppuVar9[9];
        pcStack_1c8 = (code *)0x0;
        ppuStack_1c0 = ppuVar9;
        (**(code **)*puStack_1b8)(puStack_1b8,&pcStack_1c8);
        __ZNSt13exception_ptrD1Ev(&puStack_1e0);
      }
      else {
        __ZNSt13exception_ptrD1Ev(&puStack_1e0);
        FUN_10a846b08(ppuVar9 + 0xc,ppuVar9 + 0xb);
        ppuVar9[9] = ppuVar9[0xc];
        plVar10 = (long *)(ppuVar9[0xc] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(ppuVar9[9] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(ppuVar9 + 0xd) = 1;
          puVar15 = ppuVar9[9];
          plVar10 = (long *)(puVar15 + 0x10);
          puVar8 = (undefined8 *)ppuVar9[3];
          do {
            lVar12 = *plVar10;
            if (lVar12 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                pcStack_1c8 = (code *)0x0;
                ppuStack_1c0 = ppuVar9;
                puStack_1b8 = puVar8;
                func_0x000109d1b588(puVar15 + 0x18,&pcStack_1c8);
                *(undefined8 *)(puVar15 + 0x10) = 0;
                goto LAB_10a81cbf8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar12 >> 1 & 1) == 0);
        }
        puVar15 = ppuVar9[9];
        if (((uint)*(undefined8 *)(ppuVar9[9] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(puVar15 + 0x90);
          goto LAB_10a81ce10;
        }
        if ((puVar15[0xa8] & 1) == 0) goto LAB_10a81ce10;
        FUN_10a846a48(ppuVar9 + 2,puVar15 + 0x98);
        plVar10 = (long *)ppuVar9[9];
        if (plVar10 != (long *)0x0) {
          puVar1 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        plVar10 = (long *)ppuVar9[0xc];
        if (plVar10 != (long *)0x0) {
          puVar1 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        plVar10 = (long *)ppuVar9[0xb];
        if (plVar10 != (long *)0x0) {
          puVar1 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(ppuVar9 + 2);
        __ZdlPv(ppuVar9);
      }
LAB_10a81cbf8:
      plVar10 = (long *)puVar7[5];
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar11 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar11 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar11 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      puVar7[5] = puVar16;
      plVar10 = *(long **)(lVar14 + 0x90);
      *(undefined8 **)(lVar14 + 0x88) = puVar7 + 3;
      *(undefined8 **)(lVar14 + 0x90) = puVar7;
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 1;
        do {
          lVar12 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      lVar12 = lVar14 + 0xa0;
      func_0x00010a8462c8(lVar12,0);
      if (lVar12 == 0) {
        if (*(long *)(lVar14 + 0x58) == 0) {
          FUN_10a81b94c(lVar14);
          plVar10 = *(long **)(*(long *)(lVar14 + 0x58) + 0x10);
          if (plVar10 != (long *)0x0) {
            puVar1 = (ulong *)(plVar10 + 1);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 + 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              uVar11 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar11 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar11 & 0x1fffffffc) == 4) {
              do {
                uVar11 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar11 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar11 - 1 == 0) {
                (**(code **)(*plVar10 + 8))();
              }
            }
          }
        }
        uVar13 = *(undefined8 *)(lVar14 + 0x58);
        FUN_10a81d2ec(&puStack_1e0,*(undefined8 *)(lVar14 + 8),*(undefined8 *)(lVar14 + 0x10));
        pcStack_1c8 = FUN_10a847bfc;
        ppuStack_1c0 = &PTR_DAT_110c22648;
        uStack_1b0 = uStack_1d8;
        puStack_1b8 = puStack_1e0;
        FUN_10a81da3c(uVar13,&pcStack_1c8);
        (*(code *)*ppuStack_1c0)(&ppuStack_1c0);
      }
      else {
        puVar7 = *(undefined8 **)(lVar14 + 0x88);
        lVar14 = *(long *)(lVar12 + 0x18);
        func_0x0001092af8bc(lVar14 + 0x10);
        lVar14 = *(long *)(lVar14 + 0x10);
        if ((*(byte *)(lVar14 + 0xa8) & 1) == 0) goto LAB_10a81ce10;
        FUN_10a6f4d6c(&pcStack_1c8,*(undefined8 *)(lVar14 + 0x98));
        func_0x00010a847b48(*puVar7,&pcStack_1c8);
        FUN_10a845094(puVar7);
        ppuVar9 = ppuStack_1c0;
        if (ppuStack_1c0 != (undefined **)0x0) {
          ppuVar3 = ppuStack_1c0 + 1;
          do {
            puVar15 = *ppuVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
            if (bVar5) {
              *ppuVar3 = puVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (puVar15 == (undefined *)0x0) {
            (**(code **)(*ppuStack_1c0 + 0x10))(ppuStack_1c0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
          }
        }
      }
      goto LAB_10a81c8a0;
    }
  }
  func_0x0001092af97c(&puStack_1e0);
LAB_10a81ce10:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a81ce14);
  (*pcVar6)();
}



/* Entry: 10a81c85c; end: 10a81d0a3;  */

void FUN_10a81c85c(long param_1)

{
  ulong *puVar1;
  long *plVar2;
  undefined **ppuVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar13 = 0x120;
    ___cxa_allocate_exception(0x120);
    FUN_10a2e1840();
    ___cxa_throw(uVar13,&PTR_DAT_110b99e48,FUN_10a002a90);
LAB_10a81cdf8:
    ___stack_chk_fail();
  }
  else {
    if (*(long *)(param_1 + 0x88) != 0) {
LAB_10a81c8a0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      goto LAB_10a81cdf8;
    }
    puVar14 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x18) + 0x960) + 0x3a8);
    puVar7 = (undefined8 *)0xc8;
    __Znwm();
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[4] = 0;
    puVar7[3] = 0;
    *puVar7 = &PTR_DAT_110c22578;
    puVar7[9] = 0x32aaaba7;
    puVar7[6] = 0;
    puVar7[5] = 0;
    puVar7[8] = 0;
    puVar7[7] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0x32aaaba7;
    puVar7[0x13] = 0;
    puVar7[0x12] = 0;
    puVar7[0x15] = 0;
    puVar7[0x14] = 0;
    puVar7[0x17] = 0;
    puVar7[0x16] = 0;
    puVar7[0x18] = 0;
    puVar8 = (undefined8 *)0xb0;
    __Znwm();
    plVar10 = puVar8 + 1;
    puVar8[2] = 0;
    *plVar10 = 0x200000006;
    *(undefined2 *)(puVar8 + 3) = 4;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[9] = 0;
    puVar8[8] = 0;
    puVar8[0xb] = 0;
    puVar8[10] = 0;
    puVar8[0xd] = 0;
    puVar8[0xc] = 0;
    puVar8[0xf] = 0;
    puVar8[0xe] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = puVar8 + 3;
    puVar8[0x12] = 0;
    *puVar8 = &PTR_FUN_110c225c8;
    *(undefined1 *)(puVar8 + 0x13) = 0;
    *(undefined1 *)(puVar8 + 0x15) = 0;
    puVar7[3] = puVar8;
    puVar7[4] = puVar8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 4;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    ppuVar9 = (undefined **)0x70;
    __Znwm();
    *ppuVar9 = FUN_10a854044;
    ppuVar9[1] = FUN_10a854330;
    FUN_10a846f10(ppuVar9 + 2);
    puVar15 = ppuVar9[7];
    if (puVar15 != (undefined *)0x0) {
      plVar10 = (long *)(puVar15 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = *plVar10 + 4;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppuVar9[0xb] = (undefined *)puVar8;
    ppuVar9[9] = puVar14;
    *(undefined1 *)(ppuVar9 + 10) = 0;
    *(undefined1 *)(ppuVar9 + 0xd) = 0;
    puStack_c0 = (undefined8 *)0x0;
    FUN_109d18960(ppuVar9 + 2,puVar14,&puStack_c0);
    if (puStack_c0 == (undefined8 *)0x0) {
      if (((ulong)ppuVar9[10] & 1) == 0) {
        puStack_98 = (undefined8 *)ppuVar9[9];
        pcStack_a8 = (code *)0x0;
        ppuStack_a0 = ppuVar9;
        (**(code **)*puStack_98)(puStack_98,&pcStack_a8);
        __ZNSt13exception_ptrD1Ev(&puStack_c0);
      }
      else {
        __ZNSt13exception_ptrD1Ev(&puStack_c0);
        FUN_10a846b08(ppuVar9 + 0xc,ppuVar9 + 0xb);
        ppuVar9[9] = ppuVar9[0xc];
        plVar10 = (long *)(ppuVar9[0xc] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = *plVar10 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(ppuVar9[9] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(ppuVar9 + 0xd) = 1;
          puVar14 = ppuVar9[9];
          plVar10 = (long *)(puVar14 + 0x10);
          puVar8 = (undefined8 *)ppuVar9[3];
          do {
            lVar12 = *plVar10;
            if (lVar12 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar5) {
                *plVar10 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                pcStack_a8 = (code *)0x0;
                ppuStack_a0 = ppuVar9;
                puStack_98 = puVar8;
                func_0x000109d1b588(puVar14 + 0x18,&pcStack_a8);
                *(undefined8 *)(puVar14 + 0x10) = 0;
                goto LAB_10a81cbf8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar12 >> 1 & 1) == 0);
        }
        puVar14 = ppuVar9[9];
        if (((uint)*(undefined8 *)(ppuVar9[9] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(puVar14 + 0x90);
          goto LAB_10a81ce10;
        }
        if ((puVar14[0xa8] & 1) == 0) goto LAB_10a81ce10;
        FUN_10a846a48(ppuVar9 + 2,puVar14 + 0x98);
        plVar10 = (long *)ppuVar9[9];
        if (plVar10 != (long *)0x0) {
          puVar1 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        plVar10 = (long *)ppuVar9[0xc];
        if (plVar10 != (long *)0x0) {
          puVar1 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        plVar10 = (long *)ppuVar9[0xb];
        if (plVar10 != (long *)0x0) {
          puVar1 = (ulong *)(plVar10 + 1);
          do {
            uVar11 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar11 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar11 & 0x1fffffffc) == 4) {
            do {
              uVar11 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar11 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar11 - 1 == 0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(ppuVar9 + 2);
        __ZdlPv(ppuVar9);
      }
LAB_10a81cbf8:
      plVar10 = (long *)puVar7[5];
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar11 = *puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *puVar1 = uVar11 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar11 & 0x1fffffffc) == 4) {
          do {
            uVar11 = *puVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar11 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar11 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      puVar7[5] = puVar15;
      plVar10 = *(long **)(param_1 + 0x90);
      *(undefined8 **)(param_1 + 0x88) = puVar7 + 3;
      *(undefined8 **)(param_1 + 0x90) = puVar7;
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 1;
        do {
          lVar12 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      lVar12 = param_1 + 0xa0;
      func_0x00010a8462c8(lVar12,0);
      if (lVar12 == 0) {
        if (*(long *)(param_1 + 0x58) == 0) {
          FUN_10a81b94c(param_1);
          plVar10 = *(long **)(*(long *)(param_1 + 0x58) + 0x10);
          if (plVar10 != (long *)0x0) {
            puVar1 = (ulong *)(plVar10 + 1);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = *puVar1 + 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            do {
              uVar11 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar11 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar11 & 0x1fffffffc) == 4) {
              do {
                uVar11 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar11 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar11 - 1 == 0) {
                (**(code **)(*plVar10 + 8))();
              }
            }
          }
        }
        uVar13 = *(undefined8 *)(param_1 + 0x58);
        FUN_10a81d2ec(&puStack_c0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
        pcStack_a8 = FUN_10a847bfc;
        ppuStack_a0 = &PTR_DAT_110c22648;
        uStack_90 = uStack_b8;
        puStack_98 = puStack_c0;
        FUN_10a81da3c(uVar13,&pcStack_a8);
        (*(code *)*ppuStack_a0)(&ppuStack_a0);
      }
      else {
        puVar7 = *(undefined8 **)(param_1 + 0x88);
        lVar12 = *(long *)(lVar12 + 0x18);
        func_0x0001092af8bc(lVar12 + 0x10);
        lVar12 = *(long *)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0xa8) & 1) == 0) goto LAB_10a81ce10;
        FUN_10a6f4d6c(&pcStack_a8,*(undefined8 *)(lVar12 + 0x98));
        func_0x00010a847b48(*puVar7,&pcStack_a8);
        FUN_10a845094(puVar7);
        ppuVar9 = ppuStack_a0;
        if (ppuStack_a0 != (undefined **)0x0) {
          ppuVar3 = ppuStack_a0 + 1;
          do {
            puVar14 = *ppuVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
            if (bVar5) {
              *ppuVar3 = puVar14 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (puVar14 == (undefined *)0x0) {
            (**(code **)(*ppuStack_a0 + 0x10))(ppuStack_a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar9);
          }
        }
      }
      goto LAB_10a81c8a0;
    }
  }
  func_0x0001092af97c(&puStack_c0);
LAB_10a81ce10:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a81ce14);
  (*pcVar6)();
}



/* Entry: 10a81d0a4; end: 10a81d2eb;  */

long ******* FUN_10a81d0a4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *****ppppplVar5;
  long lVar6;
  code *pcVar7;
  long ****pppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  ulong uVar12;
  long lVar13;
  long *****ppppplVar14;
  ulong uVar15;
  long ****pppplVar16;
  long ******pppppplVar17;
  long *****ppppplVar18;
  undefined8 *puVar19;
  long *****ppppplStack_b0;
  long *****ppppplStack_a8;
  undefined8 uStack_a0;
  long ******pppppplStack_98;
  char cStack_90;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ****pppplStack_78;
  long ***ppplStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 < *(undefined8 **)(param_1 + 0x28)) {
    *puVar3 = *param_2;
    (**(code **)(param_2[1] + 0x18))(puVar3 + 1,param_2 + 1);
    pppplVar16 = (long ****)(puVar3 + 8);
    *(long *****)(param_1 + 0x20) = pppplVar16;
  }
  else {
    plVar1 = (long *)(param_1 + 0x18);
    lVar13 = (long)puVar3 - *plVar1;
    uVar2 = (lVar13 >> 6) + 1;
    if (uVar2 >> 0x3a != 0) {
      FUN_10a84522c();
LAB_10a81d298:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a81d29c);
      (*pcVar7)();
    }
    uVar12 = (long)*(undefined8 **)(param_1 + 0x28) - *plVar1;
    uVar15 = (long)uVar12 >> 5;
    if (uVar15 <= uVar2) {
      uVar15 = uVar2;
    }
    if (0x7fffffffffffffbf < uVar12) {
      uVar15 = 0x3ffffffffffffff;
    }
    plStack_68 = plVar1;
    if (uVar15 == 0) {
      pppplVar8 = (long ****)0x0;
    }
    else {
      if (uVar15 >> 0x3a != 0) {
        func_0x000109ffded8();
        goto LAB_10a81d298;
      }
      pppplVar8 = (long ****)(uVar15 << 6);
      __Znwm();
    }
    pppplVar16 = (long ****)((long)pppplVar8 + lVar13);
    *pppplVar16 = (long ***)*param_2;
    pppplStack_88 = pppplVar8;
    pppplStack_80 = pppplVar16;
    pppplStack_78 = pppplVar16;
    ppplStack_70 = (long ***)(pppplVar8 + uVar15 * 8);
    (**(code **)(param_2[1] + 0x18))(pppplVar16 + 1,param_2 + 1);
    ppppplVar18 = *(long ******)(param_1 + 0x18);
    ppppplVar5 = *(long ******)(param_1 + 0x20);
    puVar3 = (undefined8 *)((long)pppplVar16 + ((long)ppppplVar18 - (long)ppppplVar5));
    ppppplVar14 = ppppplVar18;
    puVar19 = puVar3;
    if (ppppplVar5 != ppppplVar18) {
      do {
        *puVar19 = *ppppplVar14;
        (*(code *)ppppplVar14[1][2])(puVar19 + 1,ppppplVar14 + 1);
        ppppplVar14 = ppppplVar14 + 8;
        puVar19 = puVar19 + 8;
      } while (ppppplVar14 != ppppplVar5);
      ppppplVar18 = ppppplVar18 + 1;
      do {
        ppppplVar14 = ppppplVar18 + 7;
        (*(code *)**ppppplVar18)(ppppplVar18);
        ppppplVar18 = ppppplVar18 + 8;
      } while (ppppplVar14 != ppppplVar5);
      ppppplVar18 = (long *****)*plVar1;
    }
    pppplVar16 = pppplVar16 + 8;
    *(undefined8 **)(param_1 + 0x18) = puVar3;
    *(long *****)(param_1 + 0x20) = pppplVar16;
    ppplStack_70 = *(long ****)(param_1 + 0x28);
    *(long *****)(param_1 + 0x28) = pppplVar8 + uVar15 * 8;
    pppplStack_88 = (long ****)ppppplVar18;
    pppplStack_80 = (long ****)ppppplVar18;
    pppplStack_78 = (long ****)ppppplVar18;
    FUN_10a845240(&pppplStack_88);
  }
  *(long *****)(param_1 + 0x20) = pppplVar16;
  ppppppplVar9 = (long *******)(param_1 + 0x30);
  __ZNSt3__15mutex6unlockEv(ppppppplVar9);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 8) + 0x10) >> 1 & 1) == 0) {
    return ppppppplVar9;
  }
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cStack_90 = '\0';
    ppppppplVar9 = &pppppplStack_98;
    pppppplStack_98 = (long ******)(param_1 + 0x70);
    func_0x00010a701888();
    ppppppplVar10 = ppppppplVar9;
    if (((ulong)ppppppplVar9 & 1) != 0) {
      ppppplStack_b0 = (long *****)0x0;
      ppppplStack_a8 = (long *****)0x0;
      uStack_a0 = 0;
      __ZNSt3__15mutex4lockEv(param_1 + 0x30);
      pppppplVar17 = *(long *******)(param_1 + 0x18);
      uStack_a0 = *(undefined8 *)(param_1 + 0x28);
      pppppplVar11 = *(long *******)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      ppppplStack_b0 = (long *****)pppppplVar17;
      ppppplStack_a8 = (long *****)pppppplVar11;
      __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
      for (; pppppplVar17 != pppppplVar11; pppppplVar17 = pppppplVar17 + 8) {
        pppplStack_88 = (long ****)*pppppplVar17;
        (*(code *)pppppplVar17[1][3])(&pppplStack_80,pppppplVar17 + 1);
        (*(code *)pppplStack_88)(param_1 + 8,&pppplStack_88);
        (*(code *)*pppplStack_80)(&pppplStack_80);
      }
      ppppppplVar10 = (long *******)&ppppplStack_b0;
      FUN_10a845294();
    }
    if (cStack_90 == '\x01') {
      ppppppplVar10 = (long *******)pppppplStack_98;
      __ZNSt3__15mutex6unlockEv();
    }
    if ((int)ppppppplVar9 == 0) break;
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(param_1 + 0x20);
    ppppppplVar10 = (long *******)(param_1 + 0x30);
    __ZNSt3__15mutex6unlockEv();
  } while (lVar6 != lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    FUN_10a845294(&ppppplStack_b0);
    if (cStack_90 == '\x01') {
      __ZNSt3__15mutex6unlockEv(pppppplStack_98);
    }
    __Unwind_Resume(ppppppplVar10);
    ppppppplVar9 = (long *******)&DAT_10f62a4d8;
    FUN_109ffde64();
    pppppplVar17 = ppppppplVar9[1];
    pppppplVar11 = ppppppplVar9[2];
    while (pppppplVar11 != pppppplVar17) {
      ppppplVar14 = pppppplVar11[-7];
      ppppppplVar9[2] = pppppplVar11 + -8;
      (*(code *)*ppppplVar14)();
      pppppplVar11 = ppppppplVar9[2];
    }
    if (*ppppppplVar9 != (long ******)0x0) {
      __ZdlPv();
    }
    return ppppppplVar9;
  }
  return ppppppplVar10;
}



/* Entry: 10a81d2ec; end: 10a81d37f;  */

long * FUN_10a81d2ec(long *param_1,long param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = param_1;
  if ((param_3 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plVar3 = (long *)0x0, param_3 == (long *)0x0)) {
    FUN_10a043ecc();
    (**(code **)plVar3[0xb])();
    (**(code **)plVar3[3])(plVar3 + 3);
    if (plVar3[1] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    return plVar3;
  }
  *param_1 = param_2;
  param_1[1] = (long)param_3;
  plVar3 = param_3 + 2;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = *plVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar3 = param_3 + 1;
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 != 0) {
    return param_3;
  }
  (**(code **)(*param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(param_3);
  return param_3;
}



/* Entry: 10a81d380; end: 10a81d41b;  */

long FUN_10a81d380(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x58))();
  (*(code *)**(undefined8 **)(param_1 + 0x18))((undefined8 *)(param_1 + 0x18));
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a81d41c; end: 10a81da3b;  */

void FUN_10a81d41c(long *param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *extraout_x8;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar12 = 0x120;
    ___cxa_allocate_exception(0x120);
    FUN_10a2e1840();
    ___cxa_throw(uVar12,&PTR_DAT_110b99e48,FUN_10a002a90);
  }
  else {
    puVar11 = *(undefined **)(param_2 + 0x98);
    if (puVar11 == (undefined *)0x0) {
      puVar8 = (undefined8 *)0xb0;
      __Znwm();
      puVar8[2] = 0;
      puVar8[1] = 0x200000006;
      *(undefined2 *)(puVar8 + 3) = 4;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[7] = 0;
      puVar8[6] = 0;
      puVar8[9] = 0;
      puVar8[8] = 0;
      puVar8[0xb] = 0;
      puVar8[10] = 0;
      puVar8[0xd] = 0;
      puVar8[0xc] = 0;
      puVar8[0xf] = 0;
      puVar8[0xe] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = puVar8 + 3;
      puVar8[0x12] = 0;
      *puVar8 = &PTR_FUN_110c21e60;
      *(undefined1 *)(puVar8 + 0x13) = 0;
      *(undefined1 *)(puVar8 + 0x15) = 0;
      *(undefined8 **)(param_2 + 0x98) = puVar8;
      if (*(long *)(param_2 + 0x50) != 0) {
        func_0x0001092b4274();
      }
      *(undefined8 **)(param_2 + 0x50) = puVar8;
      if (*(long *)(param_2 + 0x58) == 0) {
        FUN_10a81b94c(param_2);
        plVar6 = *(long **)(*(long *)(param_2 + 0x58) + 0x10);
        if (plVar6 != (long *)0x0) {
          puVar1 = (ulong *)(plVar6 + 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 + 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          do {
            uVar9 = *puVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = uVar9 - 4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar9 - 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
        }
      }
      uVar12 = *(undefined8 *)(param_2 + 0x58);
      FUN_10a81d2ec(&puStack_90,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
      pcStack_78 = FUN_10a8458f4;
      ppuStack_70 = &PTR_DAT_110c22528;
      uStack_60 = uStack_88;
      puStack_68 = puStack_90;
      FUN_10a81da3c(uVar12,&pcStack_78);
      (*(code *)*ppuStack_70)(&ppuStack_70);
      puVar11 = *(undefined **)(param_2 + 0x98);
      puVar13 = *(undefined **)(*(long *)(*(long *)(param_2 + 0x18) + 0x960) + 0x3a8);
      if (puVar11 != (undefined *)0x0) goto LAB_10a81d538;
    }
    else {
      puVar13 = *(undefined **)(*(long *)(*(long *)(param_2 + 0x18) + 0x960) + 0x3a8);
LAB_10a81d538:
      plVar6 = (long *)(puVar11 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppuVar5 = (undefined **)0x70;
    __Znwm();
    *ppuVar5 = FUN_10a854970;
    ppuVar5[1] = FUN_10a854c5c;
    FUN_10a8366f8(ppuVar5 + 2);
    puVar7 = ppuVar5[7];
    if (puVar7 != (undefined *)0x0) {
      plVar6 = (long *)(puVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *param_1 = (long)puVar7;
    ppuVar5[0xb] = puVar11;
    ppuVar5[9] = puVar13;
    *(undefined1 *)(ppuVar5 + 10) = 0;
    *(undefined1 *)(ppuVar5 + 0xd) = 0;
    puStack_90 = (undefined8 *)0x0;
    FUN_109d18960(ppuVar5 + 2,puVar13,&puStack_90);
    if (puStack_90 == (undefined8 *)0x0) {
      if (((ulong)ppuVar5[10] & 1) == 0) {
        puStack_68 = (undefined8 *)ppuVar5[9];
        pcStack_78 = (code *)0x0;
        ppuStack_70 = ppuVar5;
        (**(code **)*puStack_68)(puStack_68,&pcStack_78);
        __ZNSt13exception_ptrD1Ev(&puStack_90);
LAB_10a81d804:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
          return;
        }
        ___stack_chk_fail();
        puVar11 = extraout_x8;
      }
      else {
        __ZNSt13exception_ptrD1Ev(&puStack_90);
        FUN_10a836254(ppuVar5 + 0xc,ppuVar5 + 0xb);
        ppuVar5[9] = ppuVar5[0xc];
        plVar6 = (long *)(ppuVar5[0xc] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (((uint)*(undefined8 *)(ppuVar5[9] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(ppuVar5 + 0xd) = 1;
          puVar11 = ppuVar5[9];
          plVar6 = (long *)(puVar11 + 0x10);
          puVar8 = (undefined8 *)ppuVar5[3];
          do {
            lVar10 = *plVar6;
            if (lVar10 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                pcStack_78 = (code *)0x0;
                ppuStack_70 = ppuVar5;
                puStack_68 = puVar8;
                func_0x000109d1b588(puVar11 + 0x18,&pcStack_78);
                *(undefined8 *)(puVar11 + 0x10) = 0;
                goto LAB_10a81d804;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar10 >> 1 & 1) == 0);
        }
        puVar11 = ppuVar5[9];
        if (((uint)*(undefined8 *)(ppuVar5[9] + 0x10) >> 5 & 1) == 0) {
          if ((puVar11[0xb8] & 1) == 0) goto LAB_10a81d878;
          FUN_10a836180(ppuVar5 + 2,puVar11 + 0x98);
          plVar6 = (long *)ppuVar5[9];
          if (plVar6 != (long *)0x0) {
            puVar1 = (ulong *)(plVar6 + 1);
            do {
              uVar9 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar9 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar9 & 0x1fffffffc) == 4) {
              do {
                uVar9 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar9 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar9 - 1 == 0) {
                (**(code **)(*plVar6 + 8))();
              }
            }
          }
          plVar6 = (long *)ppuVar5[0xc];
          if (plVar6 != (long *)0x0) {
            puVar1 = (ulong *)(plVar6 + 1);
            do {
              uVar9 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar9 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar9 & 0x1fffffffc) == 4) {
              do {
                uVar9 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar9 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar9 - 1 == 0) {
                (**(code **)(*plVar6 + 8))();
              }
            }
          }
          plVar6 = (long *)ppuVar5[0xb];
          if (plVar6 != (long *)0x0) {
            puVar1 = (ulong *)(plVar6 + 1);
            do {
              uVar9 = *puVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = uVar9 - 4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((uVar9 & 0x1fffffffc) == 4) {
              do {
                uVar9 = *puVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = uVar9 - 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (uVar9 - 1 == 0) {
                (**(code **)(*plVar6 + 8))();
              }
            }
          }
          func_0x000109d1a1d0(ppuVar5 + 2);
          __ZdlPv(ppuVar5);
          goto LAB_10a81d804;
        }
      }
      func_0x0001092af97c(puVar11 + 0x90);
      goto LAB_10a81d878;
    }
  }
  func_0x0001092af97c(&puStack_90);
LAB_10a81d878:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a81d87c);
  (*pcVar4)();
}



/* Entry: 10a81da3c; end: 10a81dc83;  */

void FUN_10a81da3c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *****pppppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 ****ppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *****pppppuVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *****pppppuVar14;
  undefined8 ****ppppuVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined8 ******unaff_x21;
  undefined8 *puVar18;
  undefined8 *****pppppuVar19;
  undefined8 *puVar20;
  undefined8 ****ppppuStack_180;
  undefined8 ****ppppuStack_178;
  undefined8 ****ppppuStack_170;
  undefined8 ****ppppuStack_168;
  undefined8 ****ppppuStack_160;
  undefined8 ****ppppuStack_158;
  undefined8 ****ppppuStack_150;
  undefined8 ****ppppuStack_148;
  undefined8 ****ppppuStack_140;
  undefined8 ****ppppuStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 ****ppppuStack_128;
  undefined8 ****ppppuStack_120;
  undefined8 ****ppppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 ****ppppuStack_f0;
  undefined8 *****pppppuStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined8 uStack_b8;
  undefined8 *****pppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 uStack_a0;
  undefined8 *****pppppuStack_98;
  char cStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 ***pppuStack_70;
  long *plStack_68;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x30);
  puVar18 = *(undefined8 **)(param_1 + 0x20);
  if (puVar18 < *(undefined8 **)(param_1 + 0x28)) {
    *puVar18 = *param_2;
    pppppuVar10 = (undefined8 *****)(param_2 + 1);
    (*(code *)(*pppppuVar10)[3])(puVar18 + 1,pppppuVar10);
    ppppuVar15 = (undefined8 ****)(puVar18 + 8);
    *(undefined8 *****)(param_1 + 0x20) = ppppuVar15;
  }
  else {
    plVar1 = (long *)(param_1 + 0x18);
    lVar12 = (long)puVar18 - *plVar1;
    uVar16 = (lVar12 >> 6) + 1;
    if (uVar16 >> 0x3a != 0) {
      FUN_10a84588c();
LAB_10a81dc30:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a81dc34);
      (*pcVar5)();
    }
    uVar11 = (long)*(undefined8 **)(param_1 + 0x28) - *plVar1;
    uVar13 = (long)uVar11 >> 5;
    if (uVar13 <= uVar16) {
      uVar13 = uVar16;
    }
    if (0x7fffffffffffffbf < uVar11) {
      uVar13 = 0x3ffffffffffffff;
    }
    plStack_68 = plVar1;
    if (uVar13 == 0) {
      ppppuVar6 = (undefined8 ****)0x0;
    }
    else {
      if (uVar13 >> 0x3a != 0) {
        func_0x000109ffded8();
        goto LAB_10a81dc30;
      }
      ppppuVar6 = (undefined8 ****)(uVar13 << 6);
      __Znwm();
    }
    ppppuVar15 = (undefined8 ****)((long)ppppuVar6 + lVar12);
    *ppppuVar15 = (undefined8 ***)*param_2;
    pppppuVar10 = (undefined8 *****)(param_2 + 1);
    ppppuStack_88 = ppppuVar6;
    ppppuStack_80 = ppppuVar15;
    ppppuStack_78 = ppppuVar15;
    pppuStack_70 = ppppuVar6 + uVar13 * 8;
    (*(code *)(*pppppuVar10)[3])(ppppuVar15 + 1,pppppuVar10);
    pppppuVar19 = *(undefined8 ******)(param_1 + 0x18);
    pppppuVar2 = *(undefined8 ******)(param_1 + 0x20);
    puVar18 = (undefined8 *)((long)ppppuVar15 + ((long)pppppuVar19 - (long)pppppuVar2));
    pppppuVar14 = pppppuVar19;
    puVar20 = puVar18;
    if (pppppuVar2 != pppppuVar19) {
      do {
        *puVar20 = *pppppuVar14;
        pppppuVar10 = pppppuVar14 + 1;
        (*(code *)(*pppppuVar10)[2])(puVar20 + 1,pppppuVar10);
        pppppuVar14 = pppppuVar14 + 8;
        puVar20 = puVar20 + 8;
      } while (pppppuVar14 != pppppuVar2);
      pppppuVar19 = pppppuVar19 + 1;
      do {
        pppppuVar14 = pppppuVar19 + 7;
        (*(code *)**pppppuVar19)(pppppuVar19);
        pppppuVar19 = pppppuVar19 + 8;
      } while (pppppuVar14 != pppppuVar2);
      pppppuVar19 = (undefined8 *****)*plVar1;
    }
    ppppuVar15 = ppppuVar15 + 8;
    *(undefined8 **)(param_1 + 0x18) = puVar18;
    *(undefined8 *****)(param_1 + 0x20) = ppppuVar15;
    pppuStack_70 = *(undefined8 ****)(param_1 + 0x28);
    *(undefined8 *****)(param_1 + 0x28) = ppppuVar6 + uVar13 * 8;
    ppppuStack_88 = pppppuVar19;
    ppppuStack_80 = pppppuVar19;
    ppppuStack_78 = pppppuVar19;
    FUN_10a8458a0(&ppppuStack_88);
  }
  *(undefined8 *****)(param_1 + 0x20) = ppppuVar15;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
  if (((uint)*(undefined8 *)(*(long *)(param_1 + 8) + 0x10) >> 1 & 1) == 0) {
    return;
  }
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  do {
    cStack_90 = '\0';
    ppppppuVar7 = &pppppuStack_98;
    pppppuStack_98 = (undefined8 ******)(param_1 + 0x70);
    func_0x00010a701888();
    ppppppuVar8 = ppppppuVar7;
    if (((ulong)ppppppuVar7 & 1) != 0) {
      pppppuStack_b0 = (undefined8 *****)0x0;
      pppppuStack_a8 = (undefined8 *****)0x0;
      uStack_a0 = 0;
      __ZNSt3__15mutex4lockEv(param_1 + 0x30);
      unaff_x21 = *(undefined8 *******)(param_1 + 0x18);
      uStack_b8 = *(undefined8 *)(param_1 + 0x28);
      pppppuStack_c0 = *(undefined8 ******)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      pppppuStack_b0 = unaff_x21;
      pppppuStack_a8 = pppppuStack_c0;
      uStack_a0 = uStack_b8;
      __ZNSt3__15mutex6unlockEv(param_1 + 0x30);
      pppppuVar14 = pppppuStack_c0;
      for (; unaff_x21 != (undefined8 ******)pppppuVar14; unaff_x21 = unaff_x21 + 8) {
        ppppuStack_88 = *unaff_x21;
        (*(code *)unaff_x21[1][3])(&ppppuStack_80,unaff_x21 + 1);
        pppppuVar10 = &ppppuStack_88;
        (*(code *)ppppuStack_88)(param_1 + 8);
        (*(code *)*ppppuStack_80)(&ppppuStack_80);
      }
      ppppppuVar8 = &pppppuStack_b0;
      FUN_10a844058();
    }
    if (cStack_90 == '\x01') {
      ppppppuVar8 = (undefined8 ******)pppppuStack_98;
      __ZNSt3__15mutex6unlockEv();
    }
    if ((int)ppppppuVar7 == 0) break;
    __ZNSt3__15mutex4lockEv(param_1 + 0x30);
    unaff_x21 = *(undefined8 *******)(param_1 + 0x18);
    ppppppuVar7 = *(undefined8 *******)(param_1 + 0x20);
    ppppppuVar8 = (undefined8 ******)(param_1 + 0x30);
    __ZNSt3__15mutex6unlockEv();
  } while (ppppppuVar7 != unaff_x21);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a844058(&pppppuStack_b0);
  if (cStack_90 == '\x01') {
    __ZNSt3__15mutex6unlockEv(pppppuStack_98);
  }
  ppppppuVar9 = ppppppuVar8;
  __Unwind_Resume();
  pppppuStack_e0 = ppppppuVar7;
  pppppuStack_d8 = ppppppuVar8;
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_10a844268;
  ppppppuVar7 = ppppppuVar9 + 2;
  do {
    pppppuVar14 = *ppppppuVar7;
    if (pppppuVar14 == (undefined8 *****)0x0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
      if (bVar4) {
        *ppppppuVar7 = (undefined8 *****)0x1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        if (*(char *)(ppppppuVar9 + 0x37) == '\x01') {
          FUN_10a6fd048(ppppppuVar9 + 0x13);
          *(undefined1 *)(ppppppuVar9 + 0x37) = 0;
        }
        FUN_10a835fe8(ppppppuVar9 + 0x13,pppppuVar10);
        *(undefined1 *)(ppppppuVar9 + 0x37) = 1;
        ppppppuVar9[2] = (undefined8 *****)0x2;
        ppppuStack_f0 = &ppppuStack_88;
        pppppuStack_e8 = unaff_x21;
        ppppuStack_138 = ppppppuVar9[0xc];
        ppppuStack_140 = ppppppuVar9[0xb];
        ppppuStack_128 = ppppppuVar9[0xe];
        ppppuStack_130 = ppppppuVar9[0xd];
        ppppuStack_118 = ppppppuVar9[0x10];
        ppppuStack_120 = ppppppuVar9[0xf];
        ppppuStack_180 = ppppppuVar9[3];
        ppppuStack_178 = ppppppuVar9[4];
        ppppuStack_168 = ppppppuVar9[6];
        ppppuStack_170 = ppppppuVar9[5];
        ppppppuVar9[0x11] = ppppppuVar9 + 3;
        *(undefined1 *)((long)ppppppuVar9 + 0x19) = 0;
        ppppuStack_158 = ppppppuVar9[8];
        ppppuStack_160 = ppppppuVar9[7];
        ppppuStack_148 = ppppppuVar9[10];
        ppppuStack_150 = ppppppuVar9[9];
        pppppuVar14 = &ppppuStack_180;
        do {
          uVar16 = (ulong)*(byte *)((long)pppppuVar14 + 1);
          if (uVar16 != 0) {
            puVar18 = (undefined8 *)((long)pppppuVar14 + 0x20);
            do {
              uStack_108 = puVar18[-1];
              uStack_110 = puVar18[-2];
              uStack_100 = *puVar18;
              (*(code *)**(undefined8 **)*puVar18)((undefined8 *)*puVar18,&uStack_110);
              uVar16 = uVar16 - 1;
              puVar18 = puVar18 + 3;
            } while (uVar16 != 0);
          }
          puVar17 = *(undefined1 **)((long)pppppuVar14 + 8);
          if (pppppuVar14 != &ppppuStack_180) {
            _free(pppppuVar14);
          }
          pppppuVar14 = (undefined8 *****)puVar17;
        } while (puVar17 != (undefined1 *)0x0);
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    if (((uint)pppppuVar14 >> 1 & 1) != 0) {
      return;
    }
  } while( true );
}



/* Entry: 10a81dc84; end: 10a81dca3;  */

bool FUN_10a81dc84(long param_1)

{
  param_1 = param_1 + 0xa0;
  func_0x00010a8462c8(param_1);
  return param_1 != 0;
}



/* Entry: 10a81dca4; end: 10a81e00f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a81dca4(undefined8 *param_1,long param_2,undefined ********param_3)

{
  undefined ********ppppppppuVar1;
  undefined ******ppppppuVar2;
  char cVar3;
  bool bVar4;
  undefined ********ppppppppuVar5;
  undefined ********ppppppppuVar6;
  ulong uVar7;
  undefined *******pppppppuVar8;
  undefined ******ppppppuVar9;
  undefined *******pppppppuVar10;
  ulong uVar11;
  undefined *****pppppuVar12;
  int iVar13;
  undefined ********ppppppppuVar14;
  long lVar15;
  undefined ******ppppppuVar16;
  undefined *******pppppppuVar17;
  undefined *******pppppppuVar18;
  undefined *******unaff_x26;
  float fVar19;
  undefined *******pppppppuStack_c0;
  undefined *******pppppppuStack_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined ********ppppppppuStack_a8;
  undefined ********ppppppppuStack_98;
  undefined ********ppppppppuStack_90;
  undefined *******pppppppuStack_88;
  undefined *******pppppppuStack_80;
  undefined8 uStack_78;
  undefined ********ppppppppuStack_70;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppppuVar1 = (undefined ********)(param_2 + 0xa0);
  ppppppppuVar5 = ppppppppuVar1;
  ppppppppuVar6 = param_3;
  func_0x00010a8462c8();
  ppppppppuVar14 = ppppppppuVar5;
  if (ppppppppuVar5 != (undefined ********)0x0) goto LAB_10a81df34;
  FUN_10a846368(&pppppppuStack_c0,
                *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + 0x960) + 0x3a8));
  pppppppuVar8 = pppppppuStack_b8;
  iVar13 = (int)param_3;
  pppppppuVar18 = (undefined *******)(long)iVar13;
  pppppppuVar17 = *(undefined ********)(param_2 + 0xa8);
  if (pppppppuVar17 != (undefined *******)0x0) {
    uVar7 = (long)pppppppuVar17 - 1;
    if (((ulong)pppppppuVar17 & uVar7) == 0) {
      unaff_x26 = (undefined *******)(uVar7 & (ulong)pppppppuVar18);
    }
    else {
      unaff_x26 = pppppppuVar18;
      if (pppppppuVar17 <= pppppppuVar18) {
        uVar11 = 0;
        if (pppppppuVar17 != (undefined *******)0x0) {
          uVar11 = (ulong)pppppppuVar18 / (ulong)pppppppuVar17;
        }
        unaff_x26 = (undefined *******)((long)pppppppuVar18 - uVar11 * (long)pppppppuVar17);
      }
    }
    if ((*ppppppppuVar1)[(long)unaff_x26] != (undefined ******)0x0) {
      for (ppppppppuVar14 = (undefined ********)*(*ppppppppuVar1)[(long)unaff_x26];
          ppppppppuVar14 != (undefined ********)0x0;
          ppppppppuVar14 = (undefined ********)*ppppppppuVar14) {
        pppppppuVar10 = ppppppppuVar14[1];
        if (pppppppuVar10 == pppppppuVar18) {
          if (*(int *)(ppppppppuVar14 + 2) == iVar13) {
            if (pppppppuStack_b8 != (undefined *******)0x0) {
              pppppppuVar17 = pppppppuStack_b8 + 1;
              do {
                ppppppuVar9 = *pppppppuVar17;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
                if (bVar4) {
                  *pppppppuVar17 = (undefined ******)((long)ppppppuVar9 + -1);
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (ppppppuVar9 == (undefined ******)0x0) {
                (*(code *)(*pppppppuStack_b8)[2])(pppppppuStack_b8);
                __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppuVar8);
              }
            }
            goto LAB_10a81dec8;
          }
        }
        else {
          if (((ulong)pppppppuVar17 & uVar7) == 0) {
            pppppppuVar10 = (undefined *******)((ulong)pppppppuVar10 & uVar7);
          }
          else if (pppppppuVar17 <= pppppppuVar10) {
            uVar11 = 0;
            if (pppppppuVar17 != (undefined *******)0x0) {
              uVar11 = (ulong)pppppppuVar10 / (ulong)pppppppuVar17;
            }
            pppppppuVar10 = (undefined *******)((long)pppppppuVar10 - uVar11 * (long)pppppppuVar17);
          }
          if (pppppppuVar10 != unaff_x26) break;
        }
      }
    }
  }
  ppppppppuVar14 = (undefined ********)0x28;
  __Znwm();
  pppppppuStack_88 = (undefined *******)0x1;
  *ppppppppuVar14 = (undefined *******)0x0;
  ppppppppuVar14[1] = pppppppuVar18;
  *(int *)(ppppppppuVar14 + 2) = iVar13;
  ppppppppuVar14[4] = pppppppuStack_b8;
  ppppppppuVar14[3] = pppppppuStack_c0;
  pppppppuStack_c0 = (undefined *******)0x0;
  pppppppuStack_b8 = (undefined *******)0x0;
  fVar19 = (float)(*(long *)(param_2 + 0xb8) + 1);
  ppppppppuStack_98 = ppppppppuVar14;
  ppppppppuStack_90 = ppppppppuVar1;
  if ((pppppppuVar17 == (undefined *******)0x0) ||
     (*(float *)(param_2 + 0xc0) * (float)pppppppuVar17 < fVar19)) {
    uVar7 = 1;
    if ((undefined *******)0x2 < pppppppuVar17) {
      uVar7 = (ulong)(((ulong)pppppppuVar17 & (long)pppppppuVar17 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)pppppppuVar17 << 1;
    uVar11 = (ulong)(fVar19 / *(float *)(param_2 + 0xc0));
    if (uVar7 <= uVar11) {
      uVar7 = uVar11;
    }
    FUN_10a844304(ppppppppuVar1,uVar7);
    pppppppuVar17 = *(undefined ********)(param_2 + 0xa8);
    if (((ulong)pppppppuVar17 & (long)pppppppuVar17 - 1U) == 0) {
      unaff_x26 = (undefined *******)((long)pppppppuVar17 - 1U & (ulong)pppppppuVar18);
    }
    else {
      unaff_x26 = pppppppuVar18;
      if (pppppppuVar17 <= pppppppuVar18) {
        uVar7 = 0;
        if (pppppppuVar17 != (undefined *******)0x0) {
          uVar7 = (ulong)pppppppuVar18 / (ulong)pppppppuVar17;
        }
        unaff_x26 = (undefined *******)((long)pppppppuVar18 - uVar7 * (long)pppppppuVar17);
      }
    }
  }
  pppppppuVar18 = *ppppppppuVar1;
  pppppppuVar8 = (undefined *******)pppppppuVar18[(long)unaff_x26];
  if (pppppppuVar8 == (undefined *******)0x0) {
    ppppppuVar9 = (undefined ******)(param_2 + 0xb0);
    *ppppppppuVar14 = (undefined *******)*ppppppuVar9;
    *ppppppuVar9 = (undefined *****)ppppppppuVar14;
    pppppppuVar18[(long)unaff_x26] = ppppppuVar9;
    if (*ppppppppuVar14 != (undefined *******)0x0) {
      pppppppuVar8 = (undefined *******)(*ppppppppuVar14)[1];
      if (((ulong)pppppppuVar17 & (long)pppppppuVar17 - 1U) == 0) {
        pppppppuVar8 = (undefined *******)((ulong)pppppppuVar8 & (long)pppppppuVar17 - 1U);
      }
      else if (pppppppuVar17 <= pppppppuVar8) {
        uVar7 = 0;
        if (pppppppuVar17 != (undefined *******)0x0) {
          uVar7 = (ulong)pppppppuVar8 / (ulong)pppppppuVar17;
        }
        pppppppuVar8 = (undefined *******)((long)pppppppuVar8 - uVar7 * (long)pppppppuVar17);
      }
      pppppppuVar8 = *ppppppppuVar1 + (long)pppppppuVar8;
      goto LAB_10a81deb8;
    }
  }
  else {
    *ppppppppuVar14 = (undefined *******)*pppppppuVar8;
LAB_10a81deb8:
    *pppppppuVar8 = (undefined ******)ppppppppuVar14;
  }
  *(long *)(param_2 + 0xb8) = *(long *)(param_2 + 0xb8) + 1;
LAB_10a81dec8:
  lVar15 = *(long *)(param_2 + 0x58);
  if (lVar15 == 0) {
    FUN_10a81b94c(param_2);
    lVar15 = *(long *)(param_2 + 0x58);
  }
  FUN_10a81d2ec(&pppppppuStack_c0,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  pppppppuStack_80 = pppppppuStack_b8;
  pppppppuStack_88 = pppppppuStack_c0;
  ppppppppuStack_98 = (undefined ********)FUN_10a8463d0;
  ppppppppuStack_90 = (undefined ********)&PTR_FUN_110c22548;
  uStack_78 = CONCAT44(uStack_ac,iVar13);
  pppppppuStack_c0 = (undefined *******)0x0;
  pppppppuStack_b8 = (undefined *******)0x0;
  ppppppppuVar6 = (undefined ********)&ppppppppuStack_98;
  iStack_b0 = iVar13;
  ppppppppuStack_a8 = ppppppppuVar14;
  ppppppppuStack_70 = ppppppppuVar14;
  FUN_10a81da3c(lVar15);
  ppppppppuVar5 = (undefined ********)&ppppppppuStack_90;
  (*(code *)*ppppppppuStack_90)();
LAB_10a81df34:
  ppppppuVar9 = ppppppppuVar14[3][2];
  *param_1 = ppppppuVar9;
  if (ppppppuVar9 != (undefined ******)0x0) {
    ppppppuVar9 = ppppppuVar9 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar9,0x10);
      if (bVar4) {
        *ppppppuVar9 = (undefined *****)((long)*ppppppuVar9 + 4);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a8444d4(&ppppppppuStack_98);
  func_0x00010a8431ec(&pppppppuStack_c0);
  __Unwind_Resume();
  pppppppuVar8 = ppppppppuVar6[1];
  if ((pppppppuVar8 == (undefined *******)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), pppppppuVar8 == (undefined *******)0x0)) {
    *ppppppppuVar5 = (undefined *******)0x0;
    ppppppppuVar5[1] = (undefined *******)0x0;
  }
  else {
    pppppppuVar17 = *ppppppppuVar6;
    if (((pppppppuVar17 != (undefined *******)0x0) &&
        (ppppppuVar9 = pppppppuVar17[7], ppppppuVar9 != (undefined ******)0x0)) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), ppppppuVar9 != (undefined ******)0x0)) {
      ppppppuVar16 = pppppppuVar17[6];
      ppppppuVar2 = ppppppuVar9 + 1;
      do {
        pppppuVar12 = *ppppppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar2,0x10);
        if (bVar4) {
          *ppppppuVar2 = (undefined *****)((long)pppppuVar12 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppuVar12 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar9)[2])(ppppppuVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar9);
      }
      if (ppppppuVar16 != (undefined ******)0x0) {
        *ppppppppuVar5 = pppppppuVar17;
        ppppppppuVar5[1] = pppppppuVar8;
        return;
      }
    }
    *ppppppppuVar5 = (undefined *******)0x0;
    ppppppppuVar5[1] = (undefined *******)0x0;
    pppppppuVar17 = pppppppuVar8 + 1;
    do {
      ppppppuVar9 = *pppppppuVar17;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar17,0x10);
      if (bVar4) {
        *pppppppuVar17 = (undefined ******)((long)ppppppuVar9 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppppuVar9 == (undefined ******)0x0) {
      (*(code *)(*pppppppuVar8)[2])(pppppppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(pppppppuVar8);
      return;
    }
  }
  return;
}



/* Entry: 10a81e010; end: 10a81e0fb;  */

void FUN_10a81e010(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  plVar4 = (long *)param_2[1];
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar7 = *param_2;
    if (((lVar7 != 0) && (plVar5 = *(long **)(lVar7 + 0x38), plVar5 != (long *)0x0)) &&
       (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)) {
      lVar8 = *(long *)(lVar7 + 0x30);
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
      if (lVar8 != 0) {
        *param_1 = lVar7;
        param_1[1] = (long)plVar4;
        return;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
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



/* Entry: 10a81e0fc; end: 10a81e253;  */

undefined8 * FUN_10a81e0fc(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar11 = *param_3;
  lVar4 = param_3[1];
  lVar2 = param_3[2];
  lVar5 = param_3[3];
  param_3[1] = 0;
  param_3[2] = 0;
  lVar3 = param_3[4];
  lVar6 = param_3[5];
  param_3[3] = 0;
  param_3[4] = 0;
  ppuStack_a0 = &PTR_DAT_110c21e70;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  plVar9 = (long *)0x48;
  lStack_a8 = lVar6;
  lStack_98 = lVar11;
  lStack_90 = lVar4;
  lStack_88 = lVar2;
  lStack_80 = lVar5;
  lStack_78 = lVar3;
  lStack_70 = lVar6;
  __Znwm();
  plVar9[2] = (long)&PTR_DAT_110c21e70;
  plVar9[3] = lVar11;
  plVar9[4] = lVar4;
  plVar9[5] = lVar2;
  plVar9[6] = lVar5;
  plVar9[7] = lVar3;
  plVar9[8] = lVar6;
  puVar10 = (undefined8 *)param_2[0xb];
  lVar11 = param_2[0xc];
  *plVar9 = (long)(param_2 + 10);
  plVar9[1] = (long)puVar10;
  *puVar10 = plVar9;
  param_2[0xb] = plVar9;
  param_2[0xc] = lVar11 + 1;
  puVar10 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar13 = param_2[1];
  uVar12 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = *plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  *param_1 = plVar9;
  param_1[2] = uVar13;
  param_1[1] = uVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar10;
  }
  ___stack_chk_fail();
  func_0x00010a084504(&lStack_80);
  FUN_10a84832c(&lStack_90);
  func_0x00010a084504(&uStack_b8);
  FUN_10a84832c(&uStack_c8);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar9 = (long *)puVar10[2];
  if (plVar9 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar9 != (long *)0x0) {
      if (puVar10[1] != 0) {
        FUN_10a05c0fc(puVar10[1],*puVar10);
      }
      plVar1 = plVar9 + 1;
      do {
        lVar11 = *plVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar11 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (puVar10[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar10;
}



/* Entry: 10a81e254; end: 10a81e2d3;  */

undefined8 * FUN_10a81e254(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a81e2d4; end: 10a81e5c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a81e930) */
/* WARNING: Removing unreachable block (ram,0x00010a81eb7c) */

void FUN_10a81e2d4(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  ulong *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined8 ****ppppuVar7;
  code *pcVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  undefined8 ***pppuVar12;
  long *plVar13;
  long *plVar14;
  code **ppcVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  undefined8 ***pppuVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 ***unaff_x24;
  undefined8 ***pppuVar24;
  long *plStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  byte bStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  undefined8 ***pppuStack_410;
  undefined8 ***pppuStack_408;
  code **ppcStack_400;
  undefined8 ***pppuStack_3f8;
  long *plStack_3f0;
  long *plStack_3e8;
  undefined1 **ppuStack_3e0;
  code *pcStack_3d8;
  code *pcStack_3d0;
  code *pcStack_3c8;
  code *pcStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  code *pcStack_3a0;
  code *pcStack_398;
  code *pcStack_390;
  undefined8 ***pppuStack_380;
  undefined8 ***pppuStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined7 uStack_360;
  char cStack_359;
  undefined8 ***pppuStack_358;
  ulong uStack_350;
  byte bStack_341;
  code *pcStack_340;
  code *pcStack_338;
  code *pcStack_330;
  code *pcStack_320;
  undefined **ppuStack_318;
  code *pcStack_310;
  code *pcStack_308;
  code *pcStack_300;
  long lStack_2f8;
  long *plStack_2f0;
  code *pcStack_2e0;
  undefined **ppuStack_2d8;
  code *pcStack_2d0;
  code *pcStack_2c8;
  code *pcStack_2c0;
  undefined8 **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined8 *puStack_290;
  undefined8 **ppuStack_260;
  undefined8 *apuStack_258 [7];
  undefined8 **ppuStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *apuStack_200 [6];
  byte bStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined8 ***pppuStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  long *plStack_168;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 **ppuStack_130;
  undefined8 **ppuStack_128;
  undefined8 **ppuStack_120;
  undefined8 **ppuStack_118;
  undefined4 uStack_110;
  long lStack_108;
  undefined8 *apuStack_100 [7];
  undefined8 uStack_c8;
  undefined8 *apuStack_c0 [7];
  undefined8 uStack_88;
  code *apcStack_80 [7];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = (undefined8 **)0x20;
  plVar14 = param_3;
  __Znwm();
  ppuVar9[2] = (undefined8 *)0x0;
  *ppuVar9 = &PTR_DAT_110b3f0e8;
  ppuStack_130 = ppuVar9 + 3;
  *(undefined4 *)ppuStack_130 = 0;
  ppuVar11 = ppuVar9 + 1;
  *ppuVar11 = (undefined8 *)0x0;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
    if (bVar6) {
      *ppuVar11 = (undefined8 *)((long)*ppuVar11 + 1);
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  uStack_110 = 1;
  lStack_108 = *param_3;
  pppuVar12 = &ppuStack_120;
  ppuStack_128 = ppuVar9;
  ppuStack_120 = ppuStack_130;
  ppuStack_118 = ppuVar9;
  (**(code **)(param_3[1] + 0x18))(apuStack_100,param_3 + 1);
  uStack_c8 = *param_2;
  (**(code **)(param_2[1] + 0x18))(apuStack_c0,param_2 + 1);
  uStack_88 = *param_4;
  pppuVar21 = &ppuStack_120;
  (**(code **)(param_4[1] + 0x18))(apcStack_80,param_4 + 1);
  *param_1 = 0x10a837514;
  param_1[1] = &PTR_DAT_110c21e88;
  puVar10 = (undefined8 *)0xd8;
  __Znwm();
  puVar10[1] = ppuStack_118;
  *puVar10 = ppuStack_120;
  ppuStack_120 = (undefined8 **)0x0;
  ppuStack_118 = (undefined8 **)0x0;
  *(undefined4 *)(puVar10 + 2) = uStack_110;
  puVar10[3] = lStack_108;
  (*(code *)apuStack_100[0][3])(puVar10 + 4,apuStack_100);
  puVar10[0xb] = uStack_c8;
  (*(code *)apuStack_c0[0][3])(puVar10 + 0xc,apuStack_c0);
  puVar10[0x13] = uStack_88;
  ppcVar15 = apcStack_80;
  (**(code **)(apcStack_80[0] + 0x18))(puVar10 + 0x14);
  param_1[2] = puVar10;
  (**(code **)apcStack_80[0])(apcStack_80);
  (*(code *)*apuStack_c0[0])(apuStack_c0);
  ppuVar9 = apuStack_100;
  (*(code *)*apuStack_100[0])();
  ppuVar11 = ppuStack_118;
  if (ppuStack_118 != (undefined8 **)0x0) {
    ppuVar1 = ppuStack_118 + 1;
    do {
      puVar16 = *ppuVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar6) {
        *ppuVar1 = (undefined8 *)((long)puVar16 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar16 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_118)[2])(ppuStack_118);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar9 = ppuVar11;
    }
  }
  ppuVar11 = ppuStack_128;
  if (ppuStack_128 != (undefined8 **)0x0) {
    ppuVar1 = ppuStack_128 + 1;
    do {
      puVar16 = *ppuVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar6) {
        *ppuVar1 = (undefined8 *)((long)puVar16 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (puVar16 == (undefined8 *)0x0) {
      (*(code *)(*ppuStack_128)[2])(ppuStack_128);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppuVar9 = ppuVar11;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  (**(code **)puVar10[0x14])(puVar10 + 0x14);
  (**(code **)puVar10[0xc])(puVar10 + 0xc);
  (**(code **)puVar10[4])(puVar10 + 4);
  func_0x00010a084504(puVar10);
  __ZdlPv();
  FUN_10a8374c8(&ppuStack_120);
  func_0x00010a084504(&ppuStack_130);
  __Unwind_Resume();
  if (*plVar14 != 0) {
    return;
  }
  pcStack_138 = FUN_10a81e5c4;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_10a846368(&stack0xfffffffffffffe90,*(undefined8 *)(ppuVar9[3][300] + 0x3a8));
  FUN_10a81b898(plVar14,&stack0xfffffffffffffe90);
  if (plStack_168 != (long *)0x0) {
    plVar20 = plStack_168 + 1;
    do {
      lVar17 = *plVar20;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = lVar17 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plStack_168 + 0x10))(plStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_168);
    }
  }
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar5 = *(char *)(ppcVar15 + 6);
  if (cVar5 == '\x02') {
    if (*(char *)((long)ppcVar15 + 0x17) < '\0') {
      func_0x000107c3192c(&pcStack_340,*ppcVar15,ppcVar15[1]);
    }
    else {
LAB_10a81e6f4:
      pcStack_338 = ppcVar15[1];
      pcStack_340 = *ppcVar15;
      pcStack_330 = ppcVar15[2];
    }
LAB_10a81e704:
    if (*(long *)(ppuVar9[3][300] + 0x88) != 0) {
      FUN_10a00946c(&UNK_10f67c197);
      goto LAB_10a81ec6c;
    }
    FUN_10a6de3f8(&ppuStack_220);
    FUN_10a6de474(&pppuStack_358,ppuStack_220,0x20);
    plVar20 = plStack_218;
    if (plStack_218 != (long *)0x0) {
      plVar13 = plStack_218 + 1;
      do {
        lVar17 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_218 + 0x10))(plStack_218);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    ppppuVar7 = (undefined8 ****)pppuStack_358;
    if (-1 < (char)bStack_341) {
      uStack_350 = (ulong)bStack_341;
      ppppuVar7 = &pppuStack_358;
    }
    FUN_109ffe064(&plStack_370,ppppuVar7,uStack_350);
    lVar17 = *plVar14;
    plVar14 = (long *)plVar14[1];
    if (plVar14 != (long *)0x0) {
      plVar20 = plVar14 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = *plVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppuVar12 = (undefined8 ***)0x58;
    __Znwm();
    pppuVar24 = pppuVar12 + 1;
    *pppuVar24 = (undefined8 **)0x0;
    pppuVar12[2] = (undefined8 **)0x0;
    *pppuVar12 = (undefined8 **)&PTR_DAT_110c226b0;
    unaff_x24 = pppuVar12 + 3;
    *unaff_x24 = (undefined8 **)&UNK_1053a6a3c;
    pppuVar12[6] = (undefined8 **)0x0;
    pppuVar12[5] = (undefined8 **)0x0;
    pppuVar12[8] = (undefined8 **)0x0;
    pppuVar12[7] = (undefined8 **)0x0;
    pppuVar21 = pppuVar12 + 4;
    *pppuVar21 = (undefined8 **)&PTR_DAT_110950c70;
    pppuVar12[10] = (undefined8 **)0x0;
    pppuVar12[9] = (undefined8 **)0x0;
    pppuStack_380 = unaff_x24;
    pppuStack_378 = pppuVar12;
    ppuStack_220 = ppuVar9;
    if (cStack_359 < '\0') {
      func_0x000107c3192c(&plStack_218,plStack_370,uStack_368);
    }
    else {
      uStack_210 = uStack_368;
      plStack_218 = plStack_370;
      uStack_208 = CONCAT17(cStack_359,uStack_360);
    }
    bStack_1d0 = 3;
    ppuStack_260 = apuStack_200;
    FUN_10a700d30(&ppuStack_260,ppcVar15,*(undefined1 *)(ppcVar15 + 6));
    bStack_1d0 = *(byte *)(ppcVar15 + 6);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppuVar24,0x10);
      if (bVar6) {
        *pppuVar24 = (undefined8 **)((long)*pppuVar24 + 1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (plVar14 != (long *)0x0) {
      plVar20 = plVar14 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = *plVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppuStack_1c8 = unaff_x24;
    pppuStack_1c0 = pppuVar12;
    lStack_1b8 = lVar17;
    plStack_1b0 = plVar14;
    if ((long)pcStack_330 < 0) {
      func_0x000107c3192c(&pcStack_3a0,pcStack_340,pcStack_338);
      if (-1 < (long)pcStack_330) goto LAB_10a81e8bc;
      func_0x000107c3192c(&pcStack_3d0,pcStack_340,pcStack_338);
    }
    else {
      pcStack_398 = pcStack_338;
      pcStack_3a0 = pcStack_340;
      pcStack_390 = pcStack_330;
LAB_10a81e8bc:
      pcStack_3c8 = pcStack_338;
      pcStack_3d0 = pcStack_340;
      pcStack_3c0 = pcStack_330;
    }
    if (plVar14 != (long *)0x0) {
      plVar20 = plVar14 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = *plVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppuStack_2a0 = (undefined8 **)0x10a848b64;
    ppuStack_298 = &PTR_FUN_110c22730;
    puVar10 = (undefined8 *)0x78;
    lStack_3b8 = lVar17;
    plStack_3b0 = plVar14;
    __Znwm();
    *puVar10 = ppuStack_220;
    puVar10[2] = uStack_210;
    puVar10[1] = plStack_218;
    puVar10[3] = uStack_208;
    pcStack_2e0 = (code *)(puVar10 + 4);
    *(undefined1 *)(puVar10 + 10) = 3;
    FUN_10a700d30(&pcStack_2e0,apuStack_200,bStack_1d0);
    *(byte *)(puVar10 + 10) = bStack_1d0;
    puVar10[0xc] = pppuStack_1c0;
    puVar10[0xb] = pppuStack_1c8;
    if (pppuStack_1c0 != (undefined8 ***)0x0) {
      pppuVar12 = pppuStack_1c0 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
        if (bVar6) {
          *pppuVar12 = (undefined8 **)((long)*pppuVar12 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    puVar10[0xe] = plStack_1b0;
    puVar10[0xd] = lStack_1b8;
    if (plStack_1b0 != (long *)0x0) {
      plVar20 = plStack_1b0 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = *plVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    pppuVar12 = &ppuStack_2a0;
    ppcVar15 = &pcStack_2e0;
    pcStack_2e0 = FUN_10a848d18;
    ppuStack_2d8 = &PTR_FUN_110c22750;
    puStack_290 = puVar10;
    if ((long)pcStack_390 < 0) {
      func_0x000107c3192c(&pcStack_2d0,pcStack_3a0,pcStack_398);
    }
    else {
      pcStack_2c8 = pcStack_398;
      pcStack_2d0 = pcStack_3a0;
      pcStack_2c0 = pcStack_390;
    }
    pcStack_320 = FUN_10a848de8;
    ppuStack_318 = &PTR_FUN_110c22770;
    if ((long)pcStack_3c0 < 0) {
      func_0x000107c3192c(&pcStack_310,pcStack_3d0,pcStack_3c8);
    }
    else {
      pcStack_308 = pcStack_3c8;
      pcStack_310 = pcStack_3d0;
      pcStack_300 = pcStack_3c0;
    }
    plStack_2f0 = plStack_3b0;
    lStack_2f8 = lStack_3b8;
    if (plStack_3b0 != (long *)0x0) {
      plVar20 = plStack_3b0 + 2;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar6) {
          *plVar20 = *plVar20 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    FUN_10a81e2d4(&ppuStack_260,&ppuStack_2a0,&pcStack_2e0,&pcStack_320);
    *unaff_x24 = ppuStack_260;
    (*(code *)**pppuVar21)(pppuVar21);
    (*(code *)apuStack_258[0][2])(pppuVar21,apuStack_258);
    (*(code *)*apuStack_258[0])(apuStack_258);
    (*(code *)*ppuStack_318)(&ppuStack_318);
    (*(code *)*ppuStack_2d8)(&ppuStack_2d8);
    (*(code *)*ppuStack_298)(&ppuStack_298);
    FUN_10a81edcc(&ppuStack_220);
    if (plStack_3b0 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((long)pcStack_3c0 < 0) {
      __ZdlPv(pcStack_3d0);
    }
    if ((long)pcStack_390 < 0) {
      __ZdlPv(pcStack_3a0);
    }
    if (plStack_1b0 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppuVar21 = pppuStack_1c0;
    if (pppuStack_1c0 != (undefined8 ***)0x0) {
      pppuVar24 = pppuStack_1c0 + 1;
      do {
        ppuVar9 = *pppuVar24;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppuVar24,0x10);
        if (bVar6) {
          *pppuVar24 = (undefined8 **)((long)ppuVar9 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppuVar9 == (undefined8 **)0x0) {
        (*(code *)(*pppuStack_1c0)[2])(pppuStack_1c0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar21);
      }
    }
    if (3 < (ulong)bStack_1d0) {
LAB_10a81ec6c:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10a81ec70);
      (*pcVar8)();
    }
    (*(code *)(&PTR_FUN_110c14970)[bStack_1d0])(apuStack_200);
    pppuVar24 = pppuStack_378;
    if (pppuStack_378 != (undefined8 ***)0x0) {
      pppuVar2 = pppuStack_378 + 1;
      do {
        ppuVar9 = *pppuVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppuVar2,0x10);
        if (bVar6) {
          *pppuVar2 = (undefined8 **)((long)ppuVar9 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppuVar9 == (undefined8 **)0x0) {
        (*(code *)(*pppuStack_378)[2])(pppuStack_378);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar24);
      }
    }
    if (plVar14 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
    }
    if (cStack_359 < '\0') {
      __ZdlPv(plStack_370);
    }
    if ((char)bStack_341 < '\0') {
      __ZdlPv(pppuStack_358);
    }
    if ((long)pcStack_330 < 0) {
      __ZdlPv(pcStack_340);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (cVar5 == '\x01') {
      if (-1 < *(char *)((long)ppcVar15 + 0x17)) goto LAB_10a81e6f4;
      func_0x000107c3192c(&pcStack_340,*ppcVar15,ppcVar15[1]);
      goto LAB_10a81e704;
    }
    if (cVar5 == '\0') {
      if (*(char *)((long)ppcVar15 + 0x2f) < '\0') {
        func_0x000107c3192c(&pcStack_340,ppcVar15[3],ppcVar15[4]);
      }
      else {
        pcStack_338 = ppcVar15[4];
        pcStack_340 = ppcVar15[3];
        pcStack_330 = ppcVar15[5];
      }
      goto LAB_10a81e704;
    }
  }
  plVar20 = (long *)&UNK_10f6347d3;
  FUN_10a05bab8();
  if ((long)pcStack_390 < 0) {
    __ZdlPv(pcStack_3a0);
  }
  func_0x00010a81f3d0(&ppuStack_220);
  FUN_10a84832c(&pppuStack_380);
  if (plVar14 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
  }
  if (cStack_359 < '\0') {
    __ZdlPv(plStack_370);
  }
  if ((char)bStack_341 < '\0') {
    __ZdlPv(pppuStack_358);
  }
  if ((long)pcStack_330 < 0) {
    __ZdlPv(pcStack_340);
  }
  plVar13 = plVar20;
  __Unwind_Resume();
  pcStack_3d8 = FUN_10a81edcc;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar22 = *(undefined8 *)(*(long *)(*plVar13 + 0x18) + 0x888);
  uVar23 = *(undefined8 *)(*(long *)(*(long *)(*plVar13 + 0x18) + 0x960) + 0x3a8);
  pppuStack_410 = unaff_x24;
  pppuStack_408 = pppuVar12;
  ppcStack_400 = ppcVar15;
  pppuStack_3f8 = pppuVar21;
  plStack_3f0 = plVar20;
  plStack_3e8 = plVar14;
  ppuStack_3e0 = &puStack_140;
  if (*(char *)((long)plVar13 + 0x1f) < '\0') {
    func_0x000107c3192c(&plStack_490,plVar13[1],plVar13[2]);
  }
  else {
    lStack_488 = plVar13[2];
    plStack_490 = (long *)plVar13[1];
    lStack_480 = plVar13[3];
  }
  plVar14 = &lStack_478;
  bStack_448 = 3;
  plStack_4a8 = plVar14;
  FUN_10a700d30(&plStack_4a8,plVar13 + 4,(char)plVar13[10]);
  bStack_448 = *(byte *)(plVar13 + 10);
  plStack_430 = (long *)plVar13[0xc];
  lStack_438 = plVar13[0xb];
  if (plVar13[0xc] != 0) {
    plVar20 = (long *)(plVar13[0xc] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = *plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_420 = plVar13[0xe];
  lStack_428 = plVar13[0xd];
  if (plVar13[0xe] != 0) {
    plVar20 = (long *)(plVar13[0xe] + 0x10);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar6) {
        *plVar20 = *plVar20 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar10 = (undefined8 *)0xe0;
  uStack_440 = uVar22;
  __Znwm();
  *puVar10 = FUN_10a8537a0;
  puVar10[1] = FUN_10a853a68;
  func_0x0001092ba17c(puVar10 + 2);
  plVar20 = (long *)puVar10[7];
  if (plVar20 != (long *)0x0) {
    plVar13 = plVar20 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = *plVar13 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  puVar10[10] = lStack_488;
  puVar10[9] = plStack_490;
  puVar10[0xb] = lStack_480;
  lStack_488 = 0;
  lStack_480 = 0;
  plStack_490 = (long *)0x0;
  if (bStack_448 == 2) {
LAB_10a81ef24:
    puVar10[0xd] = uStack_470;
    puVar10[0xc] = lStack_478;
    puVar10[0xe] = uStack_468;
    uStack_470 = 0;
    uStack_468 = 0;
    lStack_478 = 0;
    puVar10[0x10] = uStack_458;
    puVar10[0xf] = lStack_460;
    puVar10[0x11] = uStack_450;
    plVar13 = &lStack_460;
LAB_10a81ef6c:
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[2] = 0;
  }
  else {
    if (bStack_448 == 1) {
      puVar10[0xd] = uStack_470;
      puVar10[0xc] = lStack_478;
      puVar10[0xe] = uStack_468;
      plVar13 = plVar14;
      goto LAB_10a81ef6c;
    }
    if (bStack_448 == 0) goto LAB_10a81ef24;
  }
  *(byte *)(puVar10 + 0x12) = bStack_448;
  puVar10[0x14] = lStack_438;
  puVar10[0x13] = uStack_440;
  puVar10[0x15] = plStack_430;
  lStack_438 = 0;
  plStack_430 = (long *)0x0;
  puVar10[0x17] = lStack_420;
  puVar10[0x16] = lStack_428;
  lStack_428 = 0;
  lStack_420 = 0;
  puVar10[0x18] = uVar23;
  *(undefined1 *)(puVar10 + 0x19) = 0;
  *(undefined1 *)(puVar10 + 0x1b) = 0;
  puVar16 = puVar10 + 0x18;
  func_0x0001092ba064(puVar16,puVar10);
  if (((ulong)puVar16 & 1) == 0) {
    FUN_10a83776c(puVar10 + 0x1a,puVar10 + 9);
    puVar10[0x18] = puVar10[0x1a];
    plVar13 = (long *)(puVar10[0x1a] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = *plVar13 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((uint)*(undefined8 *)(puVar10[0x18] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x1b) = 1;
      lVar17 = puVar10[0x18];
      plVar13 = (long *)(lVar17 + 0x10);
      uVar22 = puVar10[3];
      do {
        lVar19 = *plVar13;
        if (lVar19 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar6) {
            *plVar13 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plStack_4a8 = (long *)0x0;
            puStack_4a0 = puVar10;
            uStack_498 = uVar22;
            func_0x000109d1b588(lVar17 + 0x18,&plStack_4a8);
            *(undefined8 *)(lVar17 + 0x10) = 0;
            goto joined_r0x00010a81f1c0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar19 >> 1 & 1) == 0);
    }
    plVar13 = (long *)puVar10[0x18];
    if (((uint)*(undefined8 *)(puVar10[0x18] + 0x10) >> 5 & 1) == 0) {
      if (plVar13 != (long *)0x0) {
        puVar3 = (ulong *)(plVar13 + 1);
        do {
          uVar18 = *puVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar18 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar18 & 0x1fffffffc) == 4) {
          do {
            uVar18 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar18 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar18 - 1 == 0) {
            (**(code **)(*plVar13 + 8))();
          }
        }
      }
      plVar13 = (long *)puVar10[0x1a];
      if (plVar13 != (long *)0x0) {
        puVar3 = (ulong *)(plVar13 + 1);
        do {
          uVar18 = *puVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar18 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar18 & 0x1fffffffc) == 4) {
          do {
            uVar18 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar18 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar18 - 1 == 0) {
            (**(code **)(*plVar13 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar10 + 2);
      if (puVar10[0x17] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar13 = (long *)puVar10[0x15];
      if (plVar13 != (long *)0x0) {
        plVar4 = plVar13 + 1;
        do {
          lVar17 = *plVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar6) {
            *plVar4 = lVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        }
      }
      if (3 < (ulong)*(byte *)(puVar10 + 0x12)) goto LAB_10a81f274;
      (*(code *)(&PTR_FUN_110c14970)[*(byte *)(puVar10 + 0x12)])(puVar10 + 0xc);
      if (*(char *)((long)puVar10 + 0x5f) < '\0') {
        __ZdlPv(puVar10[9]);
      }
      func_0x000109d1a1d0(puVar10 + 2);
      __ZdlPv(puVar10);
      goto joined_r0x00010a81f1c0;
    }
  }
  else {
joined_r0x00010a81f1c0:
    if (plVar20 != (long *)0x0) {
      puVar3 = (ulong *)(plVar20 + 1);
      do {
        uVar18 = *puVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar6) {
          *puVar3 = uVar18 - 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((uVar18 & 0x1fffffffc) == 4) {
        do {
          uVar18 = *puVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar18 - 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (uVar18 - 1 == 0) {
          (**(code **)(*plVar20 + 8))(plVar20);
        }
      }
    }
    if (lStack_420 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar20 = plStack_430;
    if (plStack_430 != (long *)0x0) {
      plVar13 = plStack_430 + 1;
      do {
        lVar17 = *plVar13;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *plVar13 = lVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_430 + 0x10))(plStack_430);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    if (3 < (ulong)bStack_448) goto LAB_10a81f274;
    (*(code *)(&PTR_FUN_110c14970)[bStack_448])(plVar14);
    plVar13 = plVar14;
    if (lStack_480 < 0) {
      plVar13 = plStack_490;
      __ZdlPv(plStack_490);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar13 + 0x12);
LAB_10a81f274:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a81f278);
  (*pcVar8)();
}



/* Entry: 10a81e5c4; end: 10a81e667;  */

/* WARNING: Removing unreachable block (ram,0x00010a81e930) */
/* WARNING: Removing unreachable block (ram,0x00010a81eb7c) */

void FUN_10a81e5c4(long param_1,code **param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *unaff_x21;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *plStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  long *plStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  byte bStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 *puStack_2d8;
  code **ppcStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  code *pcStack_2a0;
  code *pcStack_298;
  code *pcStack_290;
  long lStack_288;
  long *plStack_280;
  code *pcStack_270;
  code *pcStack_268;
  code *pcStack_260;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long lStack_238;
  undefined7 uStack_230;
  char cStack_229;
  undefined8 **ppuStack_228;
  ulong uStack_220;
  byte bStack_211;
  code *pcStack_210;
  code *pcStack_208;
  code *pcStack_200;
  code *pcStack_1f0;
  undefined **ppuStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  code *pcStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  code *pcStack_1b0;
  undefined **ppuStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  long *plStack_160;
  undefined1 *puStack_130;
  undefined8 *apuStack_128 [7];
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [48];
  byte bStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  long *in_stack_ffffffffffffffc8;
  
  if (*param_3 != 0) {
    return;
  }
  FUN_10a846368(&stack0xffffffffffffffc0,
                *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + 0x960) + 0x3a8));
  FUN_10a81b898(param_3,&stack0xffffffffffffffc0);
  if (in_stack_ffffffffffffffc8 != (long *)0x0) {
    plVar7 = in_stack_ffffffffffffffc8 + 1;
    do {
      lVar11 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*in_stack_ffffffffffffffc8 + 0x10))(in_stack_ffffffffffffffc8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffc8);
    }
  }
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar3 = *(char *)(param_2 + 6);
  if (cVar3 == '\x02') {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&pcStack_210,*param_2,param_2[1]);
    }
    else {
LAB_10a81e6f4:
      pcStack_208 = param_2[1];
      pcStack_210 = *param_2;
      pcStack_200 = param_2[2];
    }
LAB_10a81e704:
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x960) + 0x88) != 0) {
      FUN_10a00946c(&UNK_10f67c197);
      goto LAB_10a81ec6c;
    }
    FUN_10a6de3f8(&lStack_f0);
    FUN_10a6de474(&ppuStack_228,lStack_f0,0x20);
    plVar7 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar14 = plStack_e8 + 1;
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
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    pppuVar5 = (undefined8 ***)ppuStack_228;
    if (-1 < (char)bStack_211) {
      uStack_220 = (ulong)bStack_211;
      pppuVar5 = &ppuStack_228;
    }
    FUN_109ffe064(&plStack_240,pppuVar5,uStack_220);
    lVar11 = *param_3;
    param_3 = (long *)param_3[1];
    if (param_3 != (long *)0x0) {
      plVar7 = param_3 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar7 = (long *)0x58;
    __Znwm();
    plVar10 = plVar7 + 1;
    *plVar10 = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_DAT_110c226b0;
    unaff_x24 = plVar7 + 3;
    *unaff_x24 = (long)&UNK_1053a6a3c;
    plVar7[6] = 0;
    plVar7[5] = 0;
    plVar7[8] = 0;
    plVar7[7] = 0;
    plVar14 = plVar7 + 4;
    *plVar14 = (long)&PTR_DAT_110950c70;
    plVar7[10] = 0;
    plVar7[9] = 0;
    plStack_250 = unaff_x24;
    plStack_248 = plVar7;
    lStack_f0 = param_1;
    if (cStack_229 < '\0') {
      func_0x000107c3192c(&plStack_e8,plStack_240,lStack_238);
    }
    else {
      lStack_e0 = lStack_238;
      plStack_e8 = plStack_240;
      lStack_d8 = CONCAT17(cStack_229,uStack_230);
    }
    bStack_a0 = 3;
    puStack_130 = auStack_d0;
    FUN_10a700d30(&puStack_130,param_2,*(undefined1 *)(param_2 + 6));
    bStack_a0 = *(byte *)(param_2 + 6);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (param_3 != (long *)0x0) {
      plVar10 = param_3 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_98 = unaff_x24;
    plStack_90 = plVar7;
    lStack_88 = lVar11;
    plStack_80 = param_3;
    if ((long)pcStack_200 < 0) {
      func_0x000107c3192c(&pcStack_270,pcStack_210,pcStack_208);
      if (-1 < (long)pcStack_200) goto LAB_10a81e8bc;
      func_0x000107c3192c(&pcStack_2a0,pcStack_210,pcStack_208);
    }
    else {
      pcStack_268 = pcStack_208;
      pcStack_270 = pcStack_210;
      pcStack_260 = pcStack_200;
LAB_10a81e8bc:
      pcStack_298 = pcStack_208;
      pcStack_2a0 = pcStack_210;
      pcStack_290 = pcStack_200;
    }
    if (param_3 != (long *)0x0) {
      plVar7 = param_3 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_170 = 0x10a848b64;
    ppuStack_168 = &PTR_FUN_110c22730;
    plVar7 = (long *)0x78;
    lStack_288 = lVar11;
    plStack_280 = param_3;
    __Znwm();
    *plVar7 = lStack_f0;
    plVar7[2] = lStack_e0;
    plVar7[1] = (long)plStack_e8;
    plVar7[3] = lStack_d8;
    pcStack_1b0 = (code *)(plVar7 + 4);
    *(undefined1 *)(plVar7 + 10) = 3;
    FUN_10a700d30(&pcStack_1b0,auStack_d0,bStack_a0);
    *(byte *)(plVar7 + 10) = bStack_a0;
    plVar7[0xc] = (long)plStack_90;
    plVar7[0xb] = (long)plStack_98;
    if (plStack_90 != (long *)0x0) {
      plVar10 = plStack_90 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar7[0xe] = (long)plStack_80;
    plVar7[0xd] = lStack_88;
    if (plStack_80 != (long *)0x0) {
      plVar10 = plStack_80 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    unaff_x23 = &uStack_170;
    param_2 = &pcStack_1b0;
    pcStack_1b0 = FUN_10a848d18;
    ppuStack_1a8 = &PTR_FUN_110c22750;
    plStack_160 = plVar7;
    if ((long)pcStack_260 < 0) {
      func_0x000107c3192c(&pcStack_1a0,pcStack_270,pcStack_268);
    }
    else {
      pcStack_198 = pcStack_268;
      pcStack_1a0 = pcStack_270;
      pcStack_190 = pcStack_260;
    }
    pcStack_1f0 = FUN_10a848de8;
    ppuStack_1e8 = &PTR_FUN_110c22770;
    if ((long)pcStack_290 < 0) {
      func_0x000107c3192c(&pcStack_1e0,pcStack_2a0,pcStack_298);
    }
    else {
      pcStack_1d8 = pcStack_298;
      pcStack_1e0 = pcStack_2a0;
      pcStack_1d0 = pcStack_290;
    }
    plStack_1c0 = plStack_280;
    lStack_1c8 = lStack_288;
    if (plStack_280 != (long *)0x0) {
      plVar7 = plStack_280 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a81e2d4(&puStack_130,&uStack_170,&pcStack_1b0,&pcStack_1f0);
    *unaff_x24 = (long)puStack_130;
    (**(code **)*plVar14)(plVar14);
    (*(code *)apuStack_128[0][2])(plVar14,apuStack_128);
    (*(code *)*apuStack_128[0])(apuStack_128);
    (*(code *)*ppuStack_1e8)(&ppuStack_1e8);
    (*(code *)*ppuStack_1a8)(&ppuStack_1a8);
    (*(code *)*ppuStack_168)(&ppuStack_168);
    FUN_10a81edcc(&lStack_f0);
    if (plStack_280 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((long)pcStack_290 < 0) {
      __ZdlPv(pcStack_2a0);
    }
    if ((long)pcStack_260 < 0) {
      __ZdlPv(pcStack_270);
    }
    if (plStack_80 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    unaff_x21 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      plVar7 = plStack_90 + 1;
      do {
        lVar11 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
    if (3 < (ulong)bStack_a0) {
LAB_10a81ec6c:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a81ec70);
      (*pcVar6)();
    }
    (*(code *)(&PTR_FUN_110c14970)[bStack_a0])(auStack_d0);
    plVar7 = plStack_248;
    if (plStack_248 != (long *)0x0) {
      plVar14 = plStack_248 + 1;
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
        (**(code **)(*plStack_248 + 0x10))(plStack_248);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_3 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
    }
    if (cStack_229 < '\0') {
      __ZdlPv(plStack_240);
    }
    if ((char)bStack_211 < '\0') {
      __ZdlPv(ppuStack_228);
    }
    if ((long)pcStack_200 < 0) {
      __ZdlPv(pcStack_210);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (cVar3 == '\x01') {
      if (-1 < *(char *)((long)param_2 + 0x17)) goto LAB_10a81e6f4;
      func_0x000107c3192c(&pcStack_210,*param_2,param_2[1]);
      goto LAB_10a81e704;
    }
    if (cVar3 == '\0') {
      if (*(char *)((long)param_2 + 0x2f) < '\0') {
        func_0x000107c3192c(&pcStack_210,param_2[3],param_2[4]);
      }
      else {
        pcStack_208 = param_2[4];
        pcStack_210 = param_2[3];
        pcStack_200 = param_2[5];
      }
      goto LAB_10a81e704;
    }
  }
  plVar7 = (long *)&UNK_10f6347d3;
  FUN_10a05bab8();
  if ((long)pcStack_260 < 0) {
    __ZdlPv(pcStack_270);
  }
  func_0x00010a81f3d0(&lStack_f0);
  FUN_10a84832c(&plStack_250);
  if (param_3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
  }
  if (cStack_229 < '\0') {
    __ZdlPv(plStack_240);
  }
  if ((char)bStack_211 < '\0') {
    __ZdlPv(ppuStack_228);
  }
  if ((long)pcStack_200 < 0) {
    __ZdlPv(pcStack_210);
  }
  plVar14 = plVar7;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10a81edcc;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *(undefined8 *)(*(long *)(*plVar14 + 0x18) + 0x888);
  uVar16 = *(undefined8 *)(*(long *)(*(long *)(*plVar14 + 0x18) + 0x960) + 0x3a8);
  plStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  ppcStack_2d0 = param_2;
  plStack_2c8 = unaff_x21;
  plStack_2c0 = plVar7;
  plStack_2b8 = param_3;
  puStack_2b0 = &stack0xfffffffffffffff0;
  if (*(char *)((long)plVar14 + 0x1f) < '\0') {
    func_0x000107c3192c(&plStack_360,plVar14[1],plVar14[2]);
  }
  else {
    lStack_358 = plVar14[2];
    plStack_360 = (long *)plVar14[1];
    lStack_350 = plVar14[3];
  }
  plVar7 = &lStack_348;
  bStack_318 = 3;
  plStack_378 = plVar7;
  FUN_10a700d30(&plStack_378,plVar14 + 4,(char)plVar14[10]);
  bStack_318 = *(byte *)(plVar14 + 10);
  plStack_300 = (long *)plVar14[0xc];
  lStack_308 = plVar14[0xb];
  if (plVar14[0xc] != 0) {
    plVar10 = (long *)(plVar14[0xc] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_2f0 = plVar14[0xe];
  lStack_2f8 = plVar14[0xd];
  if (plVar14[0xe] != 0) {
    plVar14 = (long *)(plVar14[0xe] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8 = (undefined8 *)0xe0;
  uStack_310 = uVar15;
  __Znwm();
  *puVar8 = FUN_10a8537a0;
  puVar8[1] = FUN_10a853a68;
  func_0x0001092ba17c(puVar8 + 2);
  plVar14 = (long *)puVar8[7];
  if (plVar14 != (long *)0x0) {
    plVar10 = plVar14 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8[10] = lStack_358;
  puVar8[9] = plStack_360;
  puVar8[0xb] = lStack_350;
  lStack_358 = 0;
  lStack_350 = 0;
  plStack_360 = (long *)0x0;
  if (bStack_318 == 2) {
LAB_10a81ef24:
    puVar8[0xd] = uStack_340;
    puVar8[0xc] = lStack_348;
    puVar8[0xe] = uStack_338;
    uStack_340 = 0;
    uStack_338 = 0;
    lStack_348 = 0;
    puVar8[0x10] = uStack_328;
    puVar8[0xf] = lStack_330;
    puVar8[0x11] = uStack_320;
    plVar10 = &lStack_330;
LAB_10a81ef6c:
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[2] = 0;
  }
  else {
    if (bStack_318 == 1) {
      puVar8[0xd] = uStack_340;
      puVar8[0xc] = lStack_348;
      puVar8[0xe] = uStack_338;
      plVar10 = plVar7;
      goto LAB_10a81ef6c;
    }
    if (bStack_318 == 0) goto LAB_10a81ef24;
  }
  *(byte *)(puVar8 + 0x12) = bStack_318;
  puVar8[0x14] = lStack_308;
  puVar8[0x13] = uStack_310;
  puVar8[0x15] = plStack_300;
  lStack_308 = 0;
  plStack_300 = (long *)0x0;
  puVar8[0x17] = lStack_2f0;
  puVar8[0x16] = lStack_2f8;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  puVar8[0x18] = uVar16;
  *(undefined1 *)(puVar8 + 0x19) = 0;
  *(undefined1 *)(puVar8 + 0x1b) = 0;
  puVar9 = puVar8 + 0x18;
  func_0x0001092ba064(puVar9,puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10a83776c(puVar8 + 0x1a,puVar8 + 9);
    puVar8[0x18] = puVar8[0x1a];
    plVar10 = (long *)(puVar8[0x1a] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x1b) = 1;
      lVar11 = puVar8[0x18];
      plVar10 = (long *)(lVar11 + 0x10);
      uVar15 = puVar8[3];
      do {
        lVar13 = *plVar10;
        if (lVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plStack_378 = (long *)0x0;
            puStack_370 = puVar8;
            uStack_368 = uVar15;
            func_0x000109d1b588(lVar11 + 0x18,&plStack_378);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            goto joined_r0x00010a81f1c0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
    plVar10 = (long *)puVar8[0x18];
    if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 5 & 1) == 0) {
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)puVar8[0x1a];
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar8 + 2);
      if (puVar8[0x17] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar10 = (long *)puVar8[0x15];
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 1;
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
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if (3 < (ulong)*(byte *)(puVar8 + 0x12)) goto LAB_10a81f274;
      (*(code *)(&PTR_FUN_110c14970)[*(byte *)(puVar8 + 0x12)])(puVar8 + 0xc);
      if (*(char *)((long)puVar8 + 0x5f) < '\0') {
        __ZdlPv(puVar8[9]);
      }
      func_0x000109d1a1d0(puVar8 + 2);
      __ZdlPv(puVar8);
      goto joined_r0x00010a81f1c0;
    }
  }
  else {
joined_r0x00010a81f1c0:
    if (plVar14 != (long *)0x0) {
      puVar1 = (ulong *)(plVar14 + 1);
      do {
        uVar12 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar12 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
    }
    if (lStack_2f0 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar14 = plStack_300;
    if (plStack_300 != (long *)0x0) {
      plVar10 = plStack_300 + 1;
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
        (**(code **)(*plStack_300 + 0x10))(plStack_300);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    if (3 < (ulong)bStack_318) goto LAB_10a81f274;
    (*(code *)(&PTR_FUN_110c14970)[bStack_318])(plVar7);
    plVar10 = plVar7;
    if (lStack_350 < 0) {
      plVar10 = plStack_360;
      __ZdlPv(plStack_360);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar10 + 0x12);
LAB_10a81f274:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a81f278);
  (*pcVar6)();
}



/* Entry: 10a81e668; end: 10a81edcb;  */

/* WARNING: Removing unreachable block (ram,0x00010a81e930) */
/* WARNING: Removing unreachable block (ram,0x00010a81eb7c) */

void FUN_10a81e668(long param_1,code **param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *unaff_x21;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *plStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  long *plStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  byte bStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 *puStack_2d8;
  code **ppcStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined1 *puStack_2b0;
  code *pcStack_2a8;
  code *pcStack_2a0;
  code *pcStack_298;
  code *pcStack_290;
  long lStack_288;
  long *plStack_280;
  code *pcStack_270;
  code *pcStack_268;
  code *pcStack_260;
  long *plStack_250;
  long *plStack_248;
  long *plStack_240;
  long lStack_238;
  undefined7 uStack_230;
  char cStack_229;
  undefined8 **ppuStack_228;
  ulong uStack_220;
  byte bStack_211;
  code *pcStack_210;
  code *pcStack_208;
  code *pcStack_200;
  code *pcStack_1f0;
  undefined **ppuStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  code *pcStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  code *pcStack_1b0;
  undefined **ppuStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  long *plStack_160;
  undefined1 *puStack_130;
  undefined8 *apuStack_128 [7];
  long lStack_f0;
  long *plStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [48];
  byte bStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  cVar3 = *(char *)(param_2 + 6);
  if (cVar3 == '\x02') {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&pcStack_210,*param_2,param_2[1]);
    }
    else {
LAB_10a81e6f4:
      pcStack_208 = param_2[1];
      pcStack_210 = *param_2;
      pcStack_200 = param_2[2];
    }
LAB_10a81e704:
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x960) + 0x88) != 0) {
      FUN_10a00946c(&UNK_10f67c197);
      goto LAB_10a81ec6c;
    }
    FUN_10a6de3f8(&lStack_f0);
    FUN_10a6de474(&ppuStack_228,lStack_f0,0x20);
    plVar7 = plStack_e8;
    if (plStack_e8 != (long *)0x0) {
      plVar14 = plStack_e8 + 1;
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
        (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    pppuVar5 = (undefined8 ***)ppuStack_228;
    if (-1 < (char)bStack_211) {
      uStack_220 = (ulong)bStack_211;
      pppuVar5 = &ppuStack_228;
    }
    FUN_109ffe064(&plStack_240,pppuVar5,uStack_220);
    lVar11 = *param_3;
    param_3 = (long *)param_3[1];
    if (param_3 != (long *)0x0) {
      plVar7 = param_3 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar7 = (long *)0x58;
    __Znwm();
    plVar10 = plVar7 + 1;
    *plVar10 = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_DAT_110c226b0;
    unaff_x24 = plVar7 + 3;
    *unaff_x24 = (long)&UNK_1053a6a3c;
    plVar7[6] = 0;
    plVar7[5] = 0;
    plVar7[8] = 0;
    plVar7[7] = 0;
    plVar14 = plVar7 + 4;
    *plVar14 = (long)&PTR_DAT_110950c70;
    plVar7[10] = 0;
    plVar7[9] = 0;
    plStack_250 = unaff_x24;
    plStack_248 = plVar7;
    lStack_f0 = param_1;
    if (cStack_229 < '\0') {
      func_0x000107c3192c(&plStack_e8,plStack_240,lStack_238);
    }
    else {
      lStack_e0 = lStack_238;
      plStack_e8 = plStack_240;
      lStack_d8 = CONCAT17(cStack_229,uStack_230);
    }
    bStack_a0 = 3;
    puStack_130 = auStack_d0;
    FUN_10a700d30(&puStack_130,param_2,*(undefined1 *)(param_2 + 6));
    bStack_a0 = *(byte *)(param_2 + 6);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (param_3 != (long *)0x0) {
      plVar10 = param_3 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_98 = unaff_x24;
    plStack_90 = plVar7;
    lStack_88 = lVar11;
    plStack_80 = param_3;
    if ((long)pcStack_200 < 0) {
      func_0x000107c3192c(&pcStack_270,pcStack_210,pcStack_208);
      if (-1 < (long)pcStack_200) goto LAB_10a81e8bc;
      func_0x000107c3192c(&pcStack_2a0,pcStack_210,pcStack_208);
    }
    else {
      pcStack_268 = pcStack_208;
      pcStack_270 = pcStack_210;
      pcStack_260 = pcStack_200;
LAB_10a81e8bc:
      pcStack_298 = pcStack_208;
      pcStack_2a0 = pcStack_210;
      pcStack_290 = pcStack_200;
    }
    if (param_3 != (long *)0x0) {
      plVar7 = param_3 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_170 = 0x10a848b64;
    ppuStack_168 = &PTR_FUN_110c22730;
    plVar7 = (long *)0x78;
    lStack_288 = lVar11;
    plStack_280 = param_3;
    __Znwm();
    *plVar7 = lStack_f0;
    plVar7[2] = lStack_e0;
    plVar7[1] = (long)plStack_e8;
    plVar7[3] = lStack_d8;
    pcStack_1b0 = (code *)(plVar7 + 4);
    *(undefined1 *)(plVar7 + 10) = 3;
    FUN_10a700d30(&pcStack_1b0,auStack_d0,bStack_a0);
    *(byte *)(plVar7 + 10) = bStack_a0;
    plVar7[0xc] = (long)plStack_90;
    plVar7[0xb] = (long)plStack_98;
    if (plStack_90 != (long *)0x0) {
      plVar10 = plStack_90 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar7[0xe] = (long)plStack_80;
    plVar7[0xd] = lStack_88;
    if (plStack_80 != (long *)0x0) {
      plVar10 = plStack_80 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = *plVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    unaff_x23 = &uStack_170;
    param_2 = &pcStack_1b0;
    pcStack_1b0 = FUN_10a848d18;
    ppuStack_1a8 = &PTR_FUN_110c22750;
    plStack_160 = plVar7;
    if ((long)pcStack_260 < 0) {
      func_0x000107c3192c(&pcStack_1a0,pcStack_270,pcStack_268);
    }
    else {
      pcStack_198 = pcStack_268;
      pcStack_1a0 = pcStack_270;
      pcStack_190 = pcStack_260;
    }
    pcStack_1f0 = FUN_10a848de8;
    ppuStack_1e8 = &PTR_FUN_110c22770;
    if ((long)pcStack_290 < 0) {
      func_0x000107c3192c(&pcStack_1e0,pcStack_2a0,pcStack_298);
    }
    else {
      pcStack_1d8 = pcStack_298;
      pcStack_1e0 = pcStack_2a0;
      pcStack_1d0 = pcStack_290;
    }
    plStack_1c0 = plStack_280;
    lStack_1c8 = lStack_288;
    if (plStack_280 != (long *)0x0) {
      plVar7 = plStack_280 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a81e2d4(&puStack_130,&uStack_170,&pcStack_1b0,&pcStack_1f0);
    *unaff_x24 = (long)puStack_130;
    (**(code **)*plVar14)(plVar14);
    (*(code *)apuStack_128[0][2])(plVar14,apuStack_128);
    (*(code *)*apuStack_128[0])(apuStack_128);
    (*(code *)*ppuStack_1e8)(&ppuStack_1e8);
    (*(code *)*ppuStack_1a8)(&ppuStack_1a8);
    (*(code *)*ppuStack_168)(&ppuStack_168);
    FUN_10a81edcc(&lStack_f0);
    if (plStack_280 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((long)pcStack_290 < 0) {
      __ZdlPv(pcStack_2a0);
    }
    if ((long)pcStack_260 < 0) {
      __ZdlPv(pcStack_270);
    }
    if (plStack_80 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    unaff_x21 = plStack_90;
    if (plStack_90 != (long *)0x0) {
      plVar7 = plStack_90 + 1;
      do {
        lVar11 = *plVar7;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = lVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_90 + 0x10))(plStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
    if (3 < (ulong)bStack_a0) {
LAB_10a81ec6c:
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a81ec70);
      (*pcVar6)();
    }
    (*(code *)(&PTR_FUN_110c14970)[bStack_a0])(auStack_d0);
    plVar7 = plStack_248;
    if (plStack_248 != (long *)0x0) {
      plVar14 = plStack_248 + 1;
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
        (**(code **)(*plStack_248 + 0x10))(plStack_248);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    if (param_3 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
    }
    if (cStack_229 < '\0') {
      __ZdlPv(plStack_240);
    }
    if ((char)bStack_211 < '\0') {
      __ZdlPv(ppuStack_228);
    }
    if ((long)pcStack_200 < 0) {
      __ZdlPv(pcStack_210);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (cVar3 == '\x01') {
      if (-1 < *(char *)((long)param_2 + 0x17)) goto LAB_10a81e6f4;
      func_0x000107c3192c(&pcStack_210,*param_2,param_2[1]);
      goto LAB_10a81e704;
    }
    if (cVar3 == '\0') {
      if (*(char *)((long)param_2 + 0x2f) < '\0') {
        func_0x000107c3192c(&pcStack_210,param_2[3],param_2[4]);
      }
      else {
        pcStack_208 = param_2[4];
        pcStack_210 = param_2[3];
        pcStack_200 = param_2[5];
      }
      goto LAB_10a81e704;
    }
  }
  plVar7 = (long *)&UNK_10f6347d3;
  FUN_10a05bab8();
  if ((long)pcStack_260 < 0) {
    __ZdlPv(pcStack_270);
  }
  func_0x00010a81f3d0(&lStack_f0);
  FUN_10a84832c(&plStack_250);
  if (param_3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_3);
  }
  if (cStack_229 < '\0') {
    __ZdlPv(plStack_240);
  }
  if ((char)bStack_211 < '\0') {
    __ZdlPv(ppuStack_228);
  }
  if ((long)pcStack_200 < 0) {
    __ZdlPv(pcStack_210);
  }
  plVar14 = plVar7;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10a81edcc;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *(undefined8 *)(*(long *)(*plVar14 + 0x18) + 0x888);
  uVar16 = *(undefined8 *)(*(long *)(*(long *)(*plVar14 + 0x18) + 0x960) + 0x3a8);
  plStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  ppcStack_2d0 = param_2;
  plStack_2c8 = unaff_x21;
  plStack_2c0 = plVar7;
  plStack_2b8 = param_3;
  puStack_2b0 = &stack0xfffffffffffffff0;
  if (*(char *)((long)plVar14 + 0x1f) < '\0') {
    func_0x000107c3192c(&plStack_360,plVar14[1],plVar14[2]);
  }
  else {
    lStack_358 = plVar14[2];
    plStack_360 = (long *)plVar14[1];
    lStack_350 = plVar14[3];
  }
  plVar7 = &lStack_348;
  bStack_318 = 3;
  plStack_378 = plVar7;
  FUN_10a700d30(&plStack_378,plVar14 + 4,(char)plVar14[10]);
  bStack_318 = *(byte *)(plVar14 + 10);
  plStack_300 = (long *)plVar14[0xc];
  lStack_308 = plVar14[0xb];
  if (plVar14[0xc] != 0) {
    plVar10 = (long *)(plVar14[0xc] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_2f0 = plVar14[0xe];
  lStack_2f8 = plVar14[0xd];
  if (plVar14[0xe] != 0) {
    plVar14 = (long *)(plVar14[0xe] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = *plVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8 = (undefined8 *)0xe0;
  uStack_310 = uVar15;
  __Znwm();
  *puVar8 = FUN_10a8537a0;
  puVar8[1] = FUN_10a853a68;
  func_0x0001092ba17c(puVar8 + 2);
  plVar14 = (long *)puVar8[7];
  if (plVar14 != (long *)0x0) {
    plVar10 = plVar14 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar8[10] = lStack_358;
  puVar8[9] = plStack_360;
  puVar8[0xb] = lStack_350;
  lStack_358 = 0;
  lStack_350 = 0;
  plStack_360 = (long *)0x0;
  if (bStack_318 == 2) {
LAB_10a81ef24:
    puVar8[0xd] = uStack_340;
    puVar8[0xc] = lStack_348;
    puVar8[0xe] = uStack_338;
    uStack_340 = 0;
    uStack_338 = 0;
    lStack_348 = 0;
    puVar8[0x10] = uStack_328;
    puVar8[0xf] = lStack_330;
    puVar8[0x11] = uStack_320;
    plVar10 = &lStack_330;
LAB_10a81ef6c:
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[2] = 0;
  }
  else {
    if (bStack_318 == 1) {
      puVar8[0xd] = uStack_340;
      puVar8[0xc] = lStack_348;
      puVar8[0xe] = uStack_338;
      plVar10 = plVar7;
      goto LAB_10a81ef6c;
    }
    if (bStack_318 == 0) goto LAB_10a81ef24;
  }
  *(byte *)(puVar8 + 0x12) = bStack_318;
  puVar8[0x14] = lStack_308;
  puVar8[0x13] = uStack_310;
  puVar8[0x15] = plStack_300;
  lStack_308 = 0;
  plStack_300 = (long *)0x0;
  puVar8[0x17] = lStack_2f0;
  puVar8[0x16] = lStack_2f8;
  lStack_2f8 = 0;
  lStack_2f0 = 0;
  puVar8[0x18] = uVar16;
  *(undefined1 *)(puVar8 + 0x19) = 0;
  *(undefined1 *)(puVar8 + 0x1b) = 0;
  puVar9 = puVar8 + 0x18;
  func_0x0001092ba064(puVar9,puVar8);
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10a83776c(puVar8 + 0x1a,puVar8 + 9);
    puVar8[0x18] = puVar8[0x1a];
    plVar10 = (long *)(puVar8[0x1a] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar8 + 0x1b) = 1;
      lVar11 = puVar8[0x18];
      plVar10 = (long *)(lVar11 + 0x10);
      uVar15 = puVar8[3];
      do {
        lVar13 = *plVar10;
        if (lVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *plVar10 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plStack_378 = (long *)0x0;
            puStack_370 = puVar8;
            uStack_368 = uVar15;
            func_0x000109d1b588(lVar11 + 0x18,&plStack_378);
            *(undefined8 *)(lVar11 + 0x10) = 0;
            goto joined_r0x00010a81f1c0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar13 >> 1 & 1) == 0);
    }
    plVar10 = (long *)puVar8[0x18];
    if (((uint)*(undefined8 *)(puVar8[0x18] + 0x10) >> 5 & 1) == 0) {
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      plVar10 = (long *)puVar8[0x1a];
      if (plVar10 != (long *)0x0) {
        puVar1 = (ulong *)(plVar10 + 1);
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar12 & 0x1fffffffc) == 4) {
          do {
            uVar12 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar12 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar12 - 1 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar8 + 2);
      if (puVar8[0x17] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar10 = (long *)puVar8[0x15];
      if (plVar10 != (long *)0x0) {
        plVar2 = plVar10 + 1;
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
          (**(code **)(*plVar10 + 0x10))(plVar10);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar10);
        }
      }
      if (3 < (ulong)*(byte *)(puVar8 + 0x12)) goto LAB_10a81f274;
      (*(code *)(&PTR_FUN_110c14970)[*(byte *)(puVar8 + 0x12)])(puVar8 + 0xc);
      if (*(char *)((long)puVar8 + 0x5f) < '\0') {
        __ZdlPv(puVar8[9]);
      }
      func_0x000109d1a1d0(puVar8 + 2);
      __ZdlPv(puVar8);
      goto joined_r0x00010a81f1c0;
    }
  }
  else {
joined_r0x00010a81f1c0:
    if (plVar14 != (long *)0x0) {
      puVar1 = (ulong *)(plVar14 + 1);
      do {
        uVar12 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar12 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar12 & 0x1fffffffc) == 4) {
        do {
          uVar12 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar12 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar12 - 1 == 0) {
          (**(code **)(*plVar14 + 8))(plVar14);
        }
      }
    }
    if (lStack_2f0 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar14 = plStack_300;
    if (plStack_300 != (long *)0x0) {
      plVar10 = plStack_300 + 1;
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
        (**(code **)(*plStack_300 + 0x10))(plStack_300);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    if (3 < (ulong)bStack_318) goto LAB_10a81f274;
    (*(code *)(&PTR_FUN_110c14970)[bStack_318])(plVar7);
    plVar10 = plVar7;
    if (lStack_350 < 0) {
      plVar10 = plStack_360;
      __ZdlPv(plStack_360);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar10 + 0x12);
LAB_10a81f274:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a81f278);
  (*pcVar6)();
}



/* Entry: 10a81edcc; end: 10a81f393;  */

void FUN_10a81edcc(long *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte bStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *(undefined8 *)(*(long *)(*param_1 + 0x18) + 0x888);
  uVar14 = *(undefined8 *)(*(long *)(*(long *)(*param_1 + 0x18) + 0x960) + 0x3a8);
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(&plStack_c0,param_1[1],param_1[2]);
  }
  else {
    lStack_b8 = param_1[2];
    plStack_c0 = (long *)param_1[1];
    lStack_b0 = param_1[3];
  }
  plVar9 = &lStack_a8;
  bStack_78 = 3;
  plStack_d8 = plVar9;
  FUN_10a700d30(&plStack_d8,param_1 + 4,(char)param_1[10]);
  bStack_78 = *(byte *)(param_1 + 10);
  plStack_60 = (long *)param_1[0xc];
  lStack_68 = param_1[0xb];
  if (param_1[0xc] != 0) {
    plVar12 = (long *)(param_1[0xc] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lStack_50 = param_1[0xe];
  lStack_58 = param_1[0xd];
  if (param_1[0xe] != 0) {
    plVar12 = (long *)(param_1[0xe] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = *plVar12 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6 = (undefined8 *)0xe0;
  uStack_70 = uVar13;
  __Znwm();
  *puVar6 = FUN_10a8537a0;
  puVar6[1] = FUN_10a853a68;
  func_0x0001092ba17c(puVar6 + 2);
  plVar12 = (long *)puVar6[7];
  if (plVar12 != (long *)0x0) {
    plVar8 = plVar12 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar6[10] = lStack_b8;
  puVar6[9] = plStack_c0;
  puVar6[0xb] = lStack_b0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  plStack_c0 = (long *)0x0;
  if (bStack_78 == 2) {
LAB_10a81ef24:
    puVar6[0xd] = uStack_a0;
    puVar6[0xc] = lStack_a8;
    puVar6[0xe] = uStack_98;
    uStack_a0 = 0;
    uStack_98 = 0;
    lStack_a8 = 0;
    puVar6[0x10] = uStack_88;
    puVar6[0xf] = lStack_90;
    puVar6[0x11] = uStack_80;
    plVar8 = &lStack_90;
LAB_10a81ef6c:
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = 0;
  }
  else {
    if (bStack_78 == 1) {
      puVar6[0xd] = uStack_a0;
      puVar6[0xc] = lStack_a8;
      puVar6[0xe] = uStack_98;
      plVar8 = plVar9;
      goto LAB_10a81ef6c;
    }
    if (bStack_78 == 0) goto LAB_10a81ef24;
  }
  *(byte *)(puVar6 + 0x12) = bStack_78;
  puVar6[0x14] = lStack_68;
  puVar6[0x13] = uStack_70;
  puVar6[0x15] = plStack_60;
  lStack_68 = 0;
  plStack_60 = (long *)0x0;
  puVar6[0x17] = lStack_50;
  puVar6[0x16] = lStack_58;
  lStack_58 = 0;
  lStack_50 = 0;
  puVar6[0x18] = uVar14;
  *(undefined1 *)(puVar6 + 0x19) = 0;
  *(undefined1 *)(puVar6 + 0x1b) = 0;
  puVar7 = puVar6 + 0x18;
  func_0x0001092ba064(puVar7,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10a83776c(puVar6 + 0x1a,puVar6 + 9);
    puVar6[0x18] = puVar6[0x1a];
    plVar8 = (long *)(puVar6[0x1a] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((uint)*(undefined8 *)(puVar6[0x18] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar6 + 0x1b) = 1;
      lVar15 = puVar6[0x18];
      plVar8 = (long *)(lVar15 + 0x10);
      uVar13 = puVar6[3];
      do {
        lVar11 = *plVar8;
        if (lVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plStack_d8 = (long *)0x0;
            puStack_d0 = puVar6;
            uStack_c8 = uVar13;
            func_0x000109d1b588(lVar15 + 0x18,&plStack_d8);
            *(undefined8 *)(lVar15 + 0x10) = 0;
            goto joined_r0x00010a81f1c0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar11 >> 1 & 1) == 0);
    }
    plVar8 = (long *)puVar6[0x18];
    if (((uint)*(undefined8 *)(puVar6[0x18] + 0x10) >> 5 & 1) == 0) {
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      plVar8 = (long *)puVar6[0x1a];
      if (plVar8 != (long *)0x0) {
        puVar1 = (ulong *)(plVar8 + 1);
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 4;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((uVar10 & 0x1fffffffc) == 4) {
          do {
            uVar10 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar10 - 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (uVar10 - 1 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      }
      func_0x0001092ba100(puVar6 + 2);
      if (puVar6[0x17] != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      plVar8 = (long *)puVar6[0x15];
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 1;
        do {
          lVar15 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
      if (3 < (ulong)*(byte *)(puVar6 + 0x12)) goto LAB_10a81f274;
      (*(code *)(&PTR_FUN_110c14970)[*(byte *)(puVar6 + 0x12)])(puVar6 + 0xc);
      if (*(char *)((long)puVar6 + 0x5f) < '\0') {
        __ZdlPv(puVar6[9]);
      }
      func_0x000109d1a1d0(puVar6 + 2);
      __ZdlPv(puVar6);
      goto joined_r0x00010a81f1c0;
    }
  }
  else {
joined_r0x00010a81f1c0:
    if (plVar12 != (long *)0x0) {
      puVar1 = (ulong *)(plVar12 + 1);
      do {
        uVar10 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar10 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar10 & 0x1fffffffc) == 4) {
        do {
          uVar10 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar10 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar10 - 1 == 0) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      }
    }
    if (lStack_50 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar12 = plStack_60;
    if (plStack_60 != (long *)0x0) {
      plVar8 = plStack_60 + 1;
      do {
        lVar15 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
      }
    }
    if (3 < (ulong)bStack_78) goto LAB_10a81f274;
    (*(code *)(&PTR_FUN_110c14970)[bStack_78])(plVar9);
    plVar8 = plVar9;
    if (lStack_b0 < 0) {
      plVar8 = plStack_c0;
      __ZdlPv(plStack_c0);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001092af97c(plVar8 + 0x12);
LAB_10a81f274:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a81f278);
  (*pcVar5)();
}



/* Entry: 10a81f394; end: 10a81f437;  */

undefined8 * FUN_10a81f394(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a81f438; end: 10a81f62b;  */

/* WARNING: Removing unreachable block (ram,0x00010a81f51c) */
/* WARNING: Removing unreachable block (ram,0x00010a81f4a0) */
/* WARNING: Removing unreachable block (ram,0x00010a81f5c4) */

void FUN_10a81f438(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *puVar4;
  long lVar5;
  undefined **appuStack_190 [36];
  undefined1 auStack_70 [8];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  
  lVar5 = *(long *)(param_1 + 0x18);
  ppuVar2 = &puStack_50;
  func_0x000107c2b054(ppuVar2,&UNK_10f67ab6e);
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (lVar5 != 0) {
    FUN_10a76bf18((double)((float)((long)ppuVar2 - *(long *)(param_1 + 0xd0)) / 1e+09),
                  *(undefined8 *)(lVar5 + 0x8d8),&puStack_50);
  }
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  uStack_58 = 0x8000000000000020;
  uStack_60 = 0x19;
  puVar3[1] = 0x6f6c6e776f642074;
  *puVar3 = 0x6f6e20646c756f63;
  *(undefined8 *)((long)puVar3 + 0x11) = 0x202d2070616d2064;
  *(undefined8 *)((long)puVar3 + 9) = 0x616f6c6e776f6420;
  *(undefined1 *)((long)puVar3 + 0x19) = 0;
  uVar1 = param_2[1];
  puVar4 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar4 = param_2;
  }
  ppuVar2 = &puStack_68;
  puStack_68 = puVar3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(ppuVar2,puVar4,uVar1)
  ;
  puStack_48 = ppuVar2[1];
  puStack_50 = *ppuVar2;
  puStack_40 = ppuVar2[2];
  ppuVar2[1] = (undefined8 *)0x0;
  ppuVar2[2] = (undefined8 *)0x0;
  *ppuVar2 = (undefined8 *)0x0;
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67ab9e,0x326,&UNK_10f67abfe,in_x6,in_x7,
                        &puStack_50);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x88);
  FUN_10a002a94(appuStack_190,&puStack_50);
  appuStack_190[0] = &PTR_FUN_110b99e70;
  FUN_10a05bde0(auStack_70,appuStack_190);
  func_0x000109d1b350(*puVar4,auStack_70);
  FUN_10a845094(puVar4);
  __ZNSt13exception_ptrD1Ev(auStack_70);
  __ZNSt13runtime_errorD2Ev(appuStack_190);
  return;
}



/* Entry: 10a81f62c; end: 10a81f803;  */

/* WARNING: Removing unreachable block (ram,0x00010a81f714) */
/* WARNING: Removing unreachable block (ram,0x00010a81f698) */
/* WARNING: Removing unreachable block (ram,0x00010a81f7b0) */

void FUN_10a81f62c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  undefined **appuStack_188 [36];
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  
  lVar5 = *(long *)(param_1 + 0x18);
  ppuVar3 = &puStack_50;
  func_0x000107c2b054(ppuVar3,&UNK_10f67ac0f);
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (lVar5 != 0) {
    FUN_10a76bf18((double)((float)((long)ppuVar3 - *(long *)(param_1 + 0xd8)) / 1e+09),
                  *(undefined8 *)(lVar5 + 0x8d8),&puStack_50);
  }
  puVar4 = (undefined8 *)0x20;
  __Znwm();
  uStack_58 = 0x8000000000000020;
  uStack_60 = 0x1a;
  puVar4[1] = 0x6f6c6e776f642074;
  *puVar4 = 0x6f6e20646c756f63;
  *(undefined8 *)((long)puVar4 + 0x12) = 0x202d206873656d20;
  *(undefined8 *)((long)puVar4 + 10) = 0x64616f6c6e776f64;
  *(undefined1 *)((long)puVar4 + 0x1a) = 0;
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  ppuVar3 = &puStack_68;
  puStack_68 = puVar4;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(ppuVar3,puVar2,uVar1)
  ;
  puStack_48 = ppuVar3[1];
  puStack_50 = *ppuVar3;
  puStack_40 = ppuVar3[2];
  ppuVar3[1] = (undefined8 *)0x0;
  ppuVar3[2] = (undefined8 *)0x0;
  *ppuVar3 = (undefined8 *)0x0;
  if ((bRam000000011330a9e8 & 1) != 0) {
    func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67ac41,0x32d,&UNK_10f67abfe,in_x6,in_x7,
                        &puStack_50);
  }
  FUN_10a002a94(appuStack_188,&puStack_50);
  appuStack_188[0] = &PTR_FUN_110b99e70;
  FUN_10a05bde0(&puStack_68,appuStack_188);
  func_0x000109d1b350(*(undefined8 *)(param_1 + 0x50),&puStack_68);
  __ZNSt13exception_ptrD1Ev(&puStack_68);
  __ZNSt13runtime_errorD2Ev(appuStack_188);
  return;
}



/* Entry: 10a81f804; end: 10a81f8b3;  */

undefined8 * FUN_10a81f804(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uStack_21;
  
  *param_1 = &PTR____cxa_pure_virtual_110c20a78;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10a05a5d4(param_1 + 4,&uStack_21);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = param_2;
  return param_1;
}



/* Entry: 10a81f8b4; end: 10a81f93f;  */

undefined8 * FUN_10a81f8b4(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  *param_1 = &PTR____cxa_pure_virtual_110c20a78;
  func_0x00010a081120(param_1 + 7);
  func_0x00010a05a86c(param_1 + 4);
  plVar4 = (long *)param_1[3];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a81f940; end: 10a820f33;  */

/* WARNING: Removing unreachable block (ram,0x00010a8202d4) */
/* WARNING: Removing unreachable block (ram,0x00010a820810) */

void FUN_10a81f940(long *param_1,long param_2,undefined8 param_3,undefined4 param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined1 uVar15;
  long lVar16;
  long lVar17;
  undefined **ppuVar18;
  code **ppcVar19;
  long extraout_x8;
  ulong uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  undefined8 uVar27;
  undefined **ppuStack_200;
  undefined1 uStack_1f8;
  code **ppcStack_1f0;
  undefined1 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_178;
  undefined **ppuStack_170;
  undefined4 uStack_168;
  undefined1 uStack_164;
  undefined2 uStack_163;
  uint uStack_161;
  undefined1 uStack_15d;
  undefined1 uStack_15c;
  undefined2 uStack_15b;
  char cStack_159;
  long *plStack_158;
  long lStack_150;
  undefined8 *apuStack_148 [7];
  code *pcStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = (undefined8 *)0x160;
  __Znwm();
  *puVar6 = FUN_10a855760;
  puVar6[1] = FUN_10a855c08;
  puVar6[0x2a] = param_2;
  FUN_10a7026e8(puVar6 + 2);
  lVar16 = puVar6[7];
  if (lVar16 != 0) {
    plVar8 = (long *)(lVar16 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = lVar16;
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110c226b0;
  puVar7[6] = 0;
  puVar7[5] = 0;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[3] = &UNK_1053a6a3c;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[4] = &PTR_DAT_110950c70;
  puVar6[0x1c] = puVar7 + 3;
  puVar6[0x1d] = puVar7;
  puVar7 = (undefined8 *)0x20;
  __Znwm();
  puVar7[2] = 0;
  *puVar7 = &PTR_DAT_110b3f0e8;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 3) = 0;
  puVar6[0x1e] = puVar7 + 3;
  puVar6[0x1f] = puVar7;
  puVar6[0x26] = 0;
  puVar7 = (undefined8 *)0xb8;
  __Znwm();
  plVar9 = puVar7 + 1;
  puVar7[2] = 0;
  *plVar9 = 0x200000006;
  *(undefined2 *)(puVar7 + 3) = 4;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xc] = 0;
  puVar7[0xf] = 0;
  puVar7[0xe] = 0;
  puVar7[0x10] = 0;
  puVar7[0x11] = puVar7 + 3;
  puVar7[0x12] = 0;
  *puVar7 = &PTR_FUN_110c14a98;
  *(undefined1 *)(puVar7 + 0x13) = 0;
  *(undefined1 *)(puVar7 + 0x16) = 0;
  plVar8 = *(long **)(param_2 + 0x18);
  if (plVar8 != (long *)0x0) {
    puVar1 = (ulong *)(plVar8 + 1);
    do {
      uVar20 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar20 - 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uVar20 & 0x1fffffffc) == 4) {
      do {
        uVar20 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar20 - 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (uVar20 - 1 == 0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  *(undefined8 **)(param_2 + 0x18) = puVar7;
  if (puVar6[0x26] != 0) {
    func_0x0001092b4274(puVar6 + 0x26);
  }
  puVar6[0x26] = puVar7;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = *plVar9 + 0x200000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar23 = puVar6 + 10;
  *puVar23 = &PTR_FUN_110c22790;
  puVar6[9] = FUN_10a849004;
  puVar6[0xb] = puVar7;
  *(undefined4 *)(puVar6 + 0xc) = param_4;
  if (param_5 == 0) {
    plVar8 = (long *)puVar6[0x1f];
    puVar6[0x20] = puVar6[0x1e];
    puVar6[0x21] = plVar8;
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f67aaab,&UNK_10f67aca2,0x36f,&UNK_10f67ada1);
    }
    if (*(long *)(param_2 + 0x38) == 0) {
      ppuVar10 = (undefined **)0x28;
      __Znwm();
      uStack_15d = 0;
      uStack_15c = 0;
      uStack_15b = 0;
      cStack_159 = -0x80;
      uStack_168 = 0x24;
      uStack_164 = 0;
      uStack_163 = 0;
      uStack_161 = 0x2800;
      *(undefined4 *)(ppuVar10 + 4) = 0x64306437;
      ppuVar10[1] = (undefined *)0x36342d363337322d;
      *ppuVar10 = (undefined *)0x6636386333376538;
      ppuVar10[3] = (undefined *)0x3536653035323038;
      ppuVar10[2] = (undefined *)0x2d356135392d3361;
      *(undefined1 *)((long)ppuVar10 + 0x24) = 0;
      uVar22 = *(undefined8 *)(param_2 + 0x30);
      ppuVar11 = (undefined **)0x168;
      ppuStack_170 = ppuVar10;
      __Znwm();
      ppuVar11[1] = (undefined *)0x0;
      ppuVar11[2] = (undefined *)0x0;
      *ppuVar11 = (undefined *)&PTR_FUN_110b9f278;
      ppuVar18 = ppuVar11 + 3;
      FUN_10a343ec8(ppuVar18,uVar22,&ppuStack_170,1);
      ppuStack_d0 = ppuVar18;
      ppuStack_c8 = ppuVar11;
      FUN_10a081db8(&ppuStack_d0,ppuVar11 + 8,ppuVar18);
      FUN_10a081b54(&ppuStack_1c0,&ppuStack_d0);
      ppuVar18 = ppuStack_c8;
      if (ppuStack_c8 != (undefined **)0x0) {
        ppuVar11 = ppuStack_c8 + 1;
        do {
          puVar21 = *ppuVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar4) {
            *ppuVar11 = puVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar21 == (undefined *)0x0) {
          (**(code **)(*ppuStack_c8 + 0x10))(ppuStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
        }
      }
      FUN_10a03d558((long *)(param_2 + 0x38),&ppuStack_1c0);
      ppuVar18 = ppuStack_1b8;
      if (ppuStack_1b8 != (undefined **)0x0) {
        ppuVar11 = ppuStack_1b8 + 1;
        do {
          puVar21 = *ppuVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
          if (bVar4) {
            *ppuVar11 = puVar21 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (puVar21 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1b8 + 0x10))(ppuStack_1b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
        }
      }
      if (cStack_159 < '\0') {
        __ZdlPv(ppuVar10);
      }
    }
    uStack_1b0 = CONCAT17(5,(undefined7)uStack_1b0);
    ppuStack_1c0 = (undefined **)CONCAT26(ppuStack_1c0._6_2_,0x7972657571);
    pcVar5 = (code *)0x28;
    __Znwm();
    uStack_100 = 0x8000000000000028;
    ppuStack_108 = (undefined **)0x24;
    *(undefined4 *)(pcVar5 + 0x20) = 0x34643833;
    *(undefined8 *)(pcVar5 + 8) = 0x30342d386239342d;
    *(undefined8 *)pcVar5 = 0x6463303264376665;
    *(undefined8 *)(pcVar5 + 0x18) = 0x3262323235323835;
    *(undefined8 *)(pcVar5 + 0x10) = 0x2d663138612d6439;
    pcVar5[0x24] = (code)0x0;
    plVar9 = (long *)0xb8;
    pcStack_110 = pcVar5;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    plVar24 = plVar9 + 3;
    *plVar24 = (long)&PTR_FUN_110c35450;
    *plVar9 = (long)&PTR_FUN_110b9f2c8;
    plVar14 = plVar9 + 0x10;
    plVar9[0x11] = 0;
    *plVar14 = 0;
    plVar9[9] = 0;
    plVar9[8] = 0;
    plVar9[0xb] = 0;
    plVar9[10] = 0;
    plVar9[0xd] = 0;
    plVar9[0xc] = 0;
    plVar9[0xf] = 0;
    plVar9[0xe] = 0;
    plVar9[0x13] = 0;
    plVar9[0x12] = 0;
    plVar9[5] = 0;
    plVar9[4] = 0;
    plVar13 = plVar9 + 6;
    plVar9[7] = 0;
    *plVar13 = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    *plVar13 = 0;
    *(undefined1 *)(plVar9 + 9) = 0;
    plVar9[0xe] = 0;
    *(undefined4 *)(plVar9 + 0xf) = 0x3f800000;
    plVar9[0x11] = 0;
    plVar9[0x12] = 0;
    *plVar14 = 0;
    *(undefined1 *)(plVar9 + 0x13) = 0;
    plVar9[0x14] = 0;
    plVar9[0x15] = 0;
    plVar9[0x16] = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    ppuStack_1e0 = (undefined **)0x0;
    uStack_1e8 = 3;
    ppuVar18 = &PTR_s_application_grpc_110c21ea8;
    FUN_10a26a62c();
    cStack_159 = '\f';
    uStack_168 = 0x65707954;
    ppuStack_170 = (undefined **)0x2d746e65746e6f43;
    uStack_164 = 0;
    puVar12 = &uStack_1d8;
    ppuStack_1e0 = ppuVar18;
    func_0x0001095b7584(puVar12,&ppuStack_170);
    uVar15 = *puVar12;
    *puVar12 = 3;
    ppuVar18 = *(undefined ***)(puVar12 + 8);
    uStack_1e8 = uVar15;
    *(undefined ***)(puVar12 + 8) = ppuStack_1e0;
    ppuStack_1e0 = ppuVar18;
    if (cStack_159 < '\0') {
      __ZdlPv(ppuStack_170);
      uVar15 = uStack_1e8;
    }
    func_0x000109380ffc(&ppuStack_1e0,uVar15);
    ppcStack_1f0 = (code **)0x0;
    uStack_1f8 = 3;
    ppcVar19 = &pcStack_110;
    func_0x00010938229c();
    cStack_159 = '\x13';
    uStack_168 = 0x73656d61;
    uStack_164 = 0x2d;
    uStack_163 = 0x7061;
    uStack_161 = 0x64692d70;
    ppuStack_170 = (undefined **)0x672d70616e732d78;
    uStack_15d = 0;
    puVar12 = &uStack_1d8;
    ppcStack_1f0 = ppcVar19;
    func_0x0001095b7584(puVar12,&ppuStack_170);
    uVar15 = *puVar12;
    *puVar12 = 3;
    ppcVar19 = *(code ***)(puVar12 + 8);
    uStack_1f8 = uVar15;
    *(code ***)(puVar12 + 8) = ppcStack_1f0;
    ppcStack_1f0 = ppcVar19;
    if (cStack_159 < '\0') {
      __ZdlPv(ppuStack_170);
      uVar15 = uStack_1f8;
    }
    func_0x000109380ffc(&ppcStack_1f0,uVar15);
    ppuStack_200 = (undefined **)0x0;
    ppuVar18 = &PTR_DAT_110c21eb8;
    FUN_10a26a62c();
    cStack_159 = '\x14';
    uStack_15d = 100;
    uStack_168 = 0x73656d61;
    uStack_164 = 0x2d;
    uStack_163 = 0x7375;
    uStack_161 = 0x692d7265;
    ppuStack_170 = (undefined **)0x672d70616e732d78;
    uStack_15c = 0;
    puVar12 = &uStack_1d8;
    ppuStack_200 = ppuVar18;
    func_0x0001095b7584(puVar12,&ppuStack_170);
    uVar15 = *puVar12;
    *puVar12 = 3;
    ppuVar18 = *(undefined ***)(puVar12 + 8);
    *(undefined ***)(puVar12 + 8) = ppuStack_200;
    ppuStack_200 = ppuVar18;
    if (cStack_159 < '\0') {
      __ZdlPv(ppuStack_170);
    }
    func_0x000109380ffc(&ppuStack_200,uVar15);
    FUN_10a050e1c(plVar24,&uStack_1d8);
    FUN_10a0f0fc8(&ppuStack_d0,param_3);
    uStack_168 = SUB84(ppuStack_c8,0);
    uStack_164 = (undefined1)((ulong)ppuStack_c8 >> 0x20);
    uStack_163 = (undefined2)((ulong)ppuStack_c8 >> 0x28);
    uStack_161._0_1_ = (byte)((ulong)ppuStack_c8 >> 0x38);
    ppuStack_170 = ppuStack_d0;
    uStack_161._1_3_ = (undefined3)uStack_c0;
    uStack_15d = (undefined1)((ulong)uStack_c0 >> 0x18);
    uStack_15c = (undefined1)((ulong)uStack_c0 >> 0x20);
    uStack_15b = (undefined2)((ulong)uStack_c0 >> 0x28);
    cStack_159 = (char)((ulong)uStack_c0 >> 0x38);
    ppuStack_c8 = (undefined **)0x0;
    uStack_c0 = 0;
    ppuStack_d0 = (undefined **)0x0;
    plStack_158 = (long *)CONCAT71(plStack_158._1_7_,1);
    FUN_10a269f70(plVar14,&ppuStack_170);
    if (3 < ((ulong)plStack_158 & 0xff)) goto LAB_10a820ad8;
    (*(code *)(&PTR_FUN_110bbab80)[(ulong)plStack_158 & 0xff])(&ppuStack_170);
    if (ppuStack_d0 != (undefined **)0x0) {
      ppuStack_c8 = ppuStack_d0;
      __ZdlPv();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar13,&ppuStack_1c0);
    func_0x000109380ffc(&uStack_1d0,uStack_1d8);
    if (uStack_1b0 < 0) {
      __ZdlPv(ppuStack_1c0);
    }
    uVar22 = puVar6[0x1d];
    ppuStack_170 = (undefined **)puVar6[0x1c];
    uStack_168 = (undefined4)uVar22;
    uStack_164 = (undefined1)((ulong)uVar22 >> 0x20);
    uStack_163 = (undefined2)((ulong)uVar22 >> 0x28);
    uStack_161._0_1_ = (byte)((ulong)uVar22 >> 0x38);
    if (puVar6[0x1d] != 0) {
      plVar13 = (long *)(puVar6[0x1d] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_158 = (long *)puVar6[0x21];
    uVar22 = puVar6[0x20];
    uStack_161._1_3_ = (undefined3)uVar22;
    uStack_15d = (undefined1)((ulong)uVar22 >> 0x18);
    uStack_15c = (undefined1)((ulong)uVar22 >> 0x20);
    uStack_15b = (undefined2)((ulong)uVar22 >> 0x28);
    cStack_159 = (char)((ulong)uVar22 >> 0x38);
    if (puVar6[0x21] != 0) {
      plVar13 = (long *)(puVar6[0x21] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = *plVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_150 = puVar6[9];
    (**(code **)(puVar6[10] + 0x18))(apuStack_148,puVar23);
    plVar13 = (long *)0x60;
    __Znwm();
    plVar26 = plVar13 + 1;
    *plVar26 = 0;
    plVar13[2] = 0;
    *plVar13 = (long)&PTR_FUN_110b9f318;
    plVar13[3] = (long)FUN_10a849e30;
    *(undefined1 *)(plVar13 + 0xb) = 3;
    plVar13[4] = (long)&PTR_FUN_110c22828;
    plVar14 = (long *)0x60;
    __Znwm();
    lVar16 = CONCAT17((byte)uStack_161,CONCAT25(uStack_163,CONCAT14(uStack_164,uStack_168)));
    plVar14[1] = CONCAT17((byte)uStack_161,CONCAT25(uStack_163,CONCAT14(uStack_164,uStack_168)));
    *plVar14 = (long)ppuStack_170;
    if (lVar16 != 0) {
      plVar2 = (long *)(lVar16 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar14[3] = (long)plStack_158;
    plVar14[2] = CONCAT17(cStack_159,
                          CONCAT25(uStack_15b,
                                   CONCAT14(uStack_15c,CONCAT13(uStack_15d,uStack_161._1_3_))));
    uStack_161 = (uint)(byte)uStack_161;
    uStack_15d = 0;
    uStack_15c = 0;
    uStack_15b = 0;
    cStack_159 = 0;
    plStack_158 = (long *)0x0;
    plVar14[4] = lStack_150;
    (*(code *)apuStack_148[0][3])(plVar14 + 5,apuStack_148);
    plVar13[5] = (long)plVar14;
    *(undefined1 *)(plVar13 + 0xb) = 1;
    (*(code *)*apuStack_148[0])(apuStack_148);
    plVar14 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar2 = plStack_158 + 1;
      do {
        lVar16 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    plVar14 = (long *)CONCAT17((byte)uStack_161,CONCAT25(uStack_163,CONCAT14(uStack_164,uStack_168))
                              );
    if (plVar14 != (long *)0x0) {
      plVar2 = plVar14 + 1;
      do {
        lVar16 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
      }
    }
    lVar16 = *(long *)(param_2 + 0x40);
    uVar27 = *(undefined8 *)(param_2 + 0x40);
    uVar22 = *(undefined8 *)(param_2 + 0x38);
    if (lVar16 != 0) {
      plVar14 = (long *)(lVar16 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = *plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = *plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (plVar9 != (long *)0x0) {
      plVar14 = plVar9 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = *plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar4) {
        *plVar26 = *plVar26 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar6[0x11] = FUN_10a84a278;
    puVar6[0x12] = &PTR_FUN_110c22848;
    puVar6[0x14] = uVar27;
    puVar6[0x13] = uVar22;
    puVar6[0x16] = plVar9;
    puVar6[0x15] = plVar24;
    puVar6[0x17] = plVar13 + 3;
    puVar6[0x18] = plVar13;
    if (lVar16 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    do {
      lVar16 = *plVar26;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar4) {
        *plVar26 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
    if (plVar9 != (long *)0x0) {
      plVar13 = plVar9 + 1;
      do {
        lVar16 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 1;
      do {
        lVar16 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_10a820584;
    }
  }
  else {
    plVar8 = (long *)puVar6[0x1f];
    puVar6[0x22] = puVar6[0x1e];
    puVar6[0x23] = plVar8;
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar16 = *(long *)(param_2 + 0x28);
    if (lVar16 != 0) {
      plVar9 = (long *)(lVar16 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f67aaab,&UNK_10f67adc9,0x3a3,&UNK_10f67aec5);
    }
    uVar22 = puVar6[0x1d];
    ppuStack_170 = (undefined **)puVar6[0x1c];
    uStack_168 = (undefined4)uVar22;
    uStack_164 = (undefined1)((ulong)uVar22 >> 0x20);
    uStack_163 = (undefined2)((ulong)uVar22 >> 0x28);
    uStack_161._0_1_ = (byte)((ulong)uVar22 >> 0x38);
    if (puVar6[0x1d] != 0) {
      plVar9 = (long *)(puVar6[0x1d] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plStack_158 = (long *)puVar6[0x23];
    uVar22 = puVar6[0x22];
    uStack_161._1_3_ = (undefined3)uVar22;
    uStack_15d = (undefined1)((ulong)uVar22 >> 0x18);
    uStack_15c = (undefined1)((ulong)uVar22 >> 0x20);
    uStack_15b = (undefined2)((ulong)uVar22 >> 0x28);
    cStack_159 = (char)((ulong)uVar22 >> 0x38);
    if (puVar6[0x23] != 0) {
      plVar9 = (long *)(puVar6[0x23] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_150 = puVar6[9];
    (**(code **)(puVar6[10] + 0x18))(apuStack_148,puVar23);
    FUN_10a3bf5c8(&ppuStack_1c0,param_3);
    lVar25 = *(long *)(*(long *)(param_2 + 0x30) + 0x100);
    FUN_10a82156c(&uStack_1d8,*(undefined8 *)(param_2 + 0x20),&ppuStack_170);
    plVar9 = (long *)0x138;
    __Znwm();
    ppuStack_d0 = ppuStack_1c0;
    plVar13 = plVar9 + 1;
    *plVar13 = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_FUN_110b9f3b0;
    ppuStack_1c0 = (undefined **)0x0;
    ppuStack_c8 = ppuStack_1b8;
    (**(code **)(uStack_1b0 + 0x10))(&uStack_c0,&uStack_1b0);
    uStack_88 = uStack_178;
    uVar20 = *(ulong *)(lVar25 + 0x210);
    lVar17 = *(long *)(lVar25 + 0x208);
    if (-1 < (char)*(byte *)(lVar25 + 0x21f)) {
      uVar20 = (ulong)*(byte *)(lVar25 + 0x21f);
      lVar17 = lVar25 + 0x208;
    }
    pcStack_110 = FUN_10a84a40c;
    ppuStack_108 = &PTR_FUN_110c22868;
    uStack_100 = CONCAT71(uStack_1d7,uStack_1d8);
    uStack_f0 = uStack_1c8;
    uStack_f8 = uStack_1d0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    FUN_10a23708c(plVar9 + 3,&UNK_10e4dd0b8,0x58,&UNK_10f647b49,4,&ppuStack_d0,6,param_8,lVar17,
                  uVar20,&pcStack_110);
    (*(code *)*ppuStack_108)(&ppuStack_108);
    FUN_10a042634(&ppuStack_d0);
    FUN_10a8217f8(&uStack_1d8);
    FUN_10a042634(&ppuStack_1c0);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar6[0x11] = FUN_10a84a6bc;
    puVar6[0x12] = &PTR_FUN_110c22880;
    puVar6[0x13] = param_2;
    puVar6[0x14] = plVar9 + 3;
    puVar6[0x15] = plVar9;
    do {
      lVar17 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
    (*(code *)*apuStack_148[0])(apuStack_148);
    plVar9 = plStack_158;
    if (plStack_158 != (long *)0x0) {
      plVar13 = plStack_158 + 1;
      do {
        lVar17 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plStack_158 + 0x10))(plStack_158);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    plVar9 = (long *)CONCAT17((byte)uStack_161,CONCAT25(uStack_163,CONCAT14(uStack_164,uStack_168)))
    ;
    if (plVar9 != (long *)0x0) {
      plVar13 = plVar9 + 1;
      do {
        lVar17 = *plVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar17 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    if (lVar16 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv(lVar16);
    }
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 1;
      do {
        lVar16 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_10a820584:
      if (lVar16 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
  }
  uVar22 = puVar6[0x1e];
  lVar16 = puVar6[0x1f];
  puVar6[0x24] = uVar22;
  puVar6[0x25] = lVar16;
  if (lVar16 != 0) {
    plVar8 = (long *)(lVar16 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar17 = puVar6[0x26];
  puVar6[0x19] = lVar17;
  if (lVar17 != 0) {
    plVar8 = (long *)(lVar17 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar22 = puVar6[0x1e];
    lVar16 = puVar6[0x1f];
  }
  puVar6[0x1a] = uVar22;
  puVar6[0x1b] = lVar16;
  if (lVar16 != 0) {
    plVar8 = (long *)(lVar16 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_d0 = (undefined **)FUN_10a84966c;
  ppuStack_c8 = &PTR_FUN_110c227b0;
  uStack_b8 = puVar6[0x25];
  uStack_c0 = puVar6[0x24];
  if (puVar6[0x25] != 0) {
    plVar8 = (long *)(puVar6[0x25] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  ppuStack_1c0 = (undefined **)FUN_10a84971c;
  ppuStack_1b8 = &PTR_FUN_110c227d0;
  uStack_1b0 = puVar6[0x19];
  if (uStack_1b0 != 0) {
    plVar8 = (long *)(uStack_1b0 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 0x200000000;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_1a0 = puVar6[0x1b];
  uStack_1a8 = puVar6[0x1a];
  if (puVar6[0x1b] != 0) {
    plVar8 = (long *)(puVar6[0x1b] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a81e2d4(&ppuStack_170,puVar6 + 0x11,&ppuStack_d0,&ppuStack_1c0);
  plVar8 = (long *)puVar6[0x1c];
  *plVar8 = (long)ppuStack_170;
  plVar8 = plVar8 + 1;
  (**(code **)*plVar8)(plVar8);
  (**(code **)(CONCAT17((byte)uStack_161,CONCAT25(uStack_163,CONCAT14(uStack_164,uStack_168))) +
              0x10))(plVar8,&uStack_168);
  (**(code **)CONCAT17((byte)uStack_161,CONCAT25(uStack_163,CONCAT14(uStack_164,uStack_168))))
            (&uStack_168);
  (*(code *)*ppuStack_1b8)(&ppuStack_1b8);
  (*(code *)*ppuStack_c8)(&ppuStack_c8);
  (*(code *)puVar6[0x11])(puVar6 + 0x11);
  puVar6[0x28] = 0;
  *(undefined1 *)(puVar6 + 0x2b) = 0;
  lVar16 = puVar6[6];
  if (lVar16 != 0) {
    plVar8 = (long *)(lVar16 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar8 = (long *)puVar6[0x28];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar20 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar20 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar20 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        do {
          uVar20 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar20 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar20 - 1 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
  }
  puVar6[0x27] = lVar16;
  puVar6[0x28] = lVar16;
  FUN_10a820f74(puVar6 + 0x29,puVar6 + 0x27,*(undefined8 *)(puVar6[0x2a] + 0x18));
  puVar6[0x28] = puVar6[0x29];
  plVar8 = (long *)(puVar6[0x29] + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar4) {
      *plVar8 = *plVar8 + 4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((uint)*(undefined8 *)(puVar6[0x28] + 0x10) >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x2b) = 1;
    lVar16 = puVar6[0x28];
    plVar8 = (long *)(lVar16 + 0x10);
    uVar22 = puVar6[3];
    do {
      lVar17 = *plVar8;
      if (lVar17 == 0) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          ppuStack_170 = (undefined **)0x0;
          uStack_168 = SUB84(puVar6,0);
          uStack_164 = (undefined1)((ulong)puVar6 >> 0x20);
          uStack_163 = (undefined2)((ulong)puVar6 >> 0x28);
          uStack_161._0_1_ = (byte)((ulong)puVar6 >> 0x38);
          uStack_161._1_3_ = (undefined3)uVar22;
          uStack_15d = (undefined1)((ulong)uVar22 >> 0x18);
          uStack_15c = (undefined1)((ulong)uVar22 >> 0x20);
          uStack_15b = (undefined2)((ulong)uVar22 >> 0x28);
          cStack_159 = (char)((ulong)uVar22 >> 0x38);
          func_0x000109d1b588(lVar16 + 0x18,&ppuStack_170);
          *(undefined8 *)(lVar16 + 0x10) = 0;
          goto LAB_10a820a94;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar17 >> 1 & 1) == 0);
  }
  lVar16 = puVar6[0x28];
  if (((uint)*(undefined8 *)(puVar6[0x28] + 0x10) >> 5 & 1) == 0) {
    if ((*(byte *)(lVar16 + 0xb0) & 1) == 0) goto LAB_10a820ad8;
    FUN_10a820f34(puVar6 + 2,lVar16 + 0x98);
    plVar8 = (long *)puVar6[0x28];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar20 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar20 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar20 & 0x1fffffffc) == 4) {
        do {
          uVar20 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar20 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar20 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = (long *)puVar6[0x29];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar20 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar20 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar20 & 0x1fffffffc) == 4) {
        do {
          uVar20 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar20 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar20 - 1 == 0) {
          (**(code **)(*plVar8 + 8))();
        }
      }
    }
    plVar8 = (long *)puVar6[0x27];
    if (plVar8 != (long *)0x0) {
      puVar1 = (ulong *)(plVar8 + 1);
      do {
        uVar20 = *puVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar20 - 4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uVar20 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        do {
          uVar20 = *puVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar20 - 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar20 - 1 == 0) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    plVar8 = (long *)puVar6[0x1b];
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 1;
      do {
        lVar16 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    if (puVar6[0x19] != 0) {
      func_0x0001092b4274(puVar6 + 0x19);
    }
    plVar8 = (long *)puVar6[0x25];
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 1;
      do {
        lVar16 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    (**(code **)puVar6[0x12])(puVar6 + 0x12);
    (**(code **)puVar6[10])(puVar23);
    if (puVar6[0x26] != 0) {
      func_0x0001092b4274(puVar6 + 0x26);
    }
    plVar8 = (long *)puVar6[0x1f];
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 1;
      do {
        lVar16 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    plVar8 = (long *)puVar6[0x1d];
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 1;
      do {
        lVar16 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    func_0x000109d1a1d0(puVar6 + 2);
    __ZdlPv(puVar6);
LAB_10a820a94:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
    lVar16 = extraout_x8;
  }
  func_0x0001092af97c(lVar16 + 0x90);
LAB_10a820ad8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a820adc);
  (*pcVar5)();
}



/* Entry: 10a820f34; end: 10a820f73;  */

void FUN_10a820f34(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_1 + 0x30);
  FUN_10a84952c(*plVar6);
  plVar4 = (long *)*plVar6;
  *plVar6 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  puVar1 = (ulong *)(plVar4 + 1);
  do {
    uVar5 = *puVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = uVar5 - 0x200000000;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (uVar5 >> 0x21 == 1) {
    FUN_109d1b3c4(plVar4,1,plVar6);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && (uVar5 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0001092b42e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4);
      return;
    }
  }
  return;
}



/* Entry: 10a820f74; end: 10a8214ff;  */

/* WARNING: Removing unreachable block (ram,0x00010a8210d4) */
/* WARNING: Removing unreachable block (ram,0x00010a8212e4) */
/* WARNING: Removing unreachable block (ram,0x00010a821094) */
/* WARNING: Removing unreachable block (ram,0x00010a821228) */

void FUN_10a820f74(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  code *pcStack_68;
  long *plStack_60;
  undefined **ppuStack_58;
  
  if (param_3 != 0) {
    plVar9 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar4 = (long *)0x120;
  __Znwm();
  plVar4[2] = 0;
  plVar4[1] = 0x200000006;
  *(undefined2 *)(plVar4 + 3) = 4;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0x10] = 0;
  plVar4[0x11] = (long)(plVar4 + 3);
  plVar4[0x12] = 0;
  *(undefined1 *)(plVar4 + 0x13) = 0;
  *(undefined1 *)(plVar4 + 0x16) = 0;
  *plVar4 = (long)&PTR_FUN_110c22800;
  plVar10 = plVar4 + 0x17;
  *plVar10 = param_3;
  plVar9 = (long *)(*param_2 + 8);
  plVar4[0x18] = *param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar4[0x1b] = 0;
  plVar4[0x1c] = 0x32aaaba7;
  plVar4[0x20] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x23] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x22] = 0;
  plVar4[0x21] = 0;
  lStack_78 = 0;
  plVar4[0x19] = (long)plVar4;
  plVar4[0x1a] = 0;
  plStack_70 = plVar10;
  if (((uint)*(undefined8 *)(plVar4[0x18] + 0x10) >> 1 & 1) == 0) {
    __ZNSt3__15mutex4lockEv(plVar4 + 0x1c);
    lVar8 = *plVar10;
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar6 = lVar8 + 0x18;
          pcStack_68 = FUN_10a8498ec;
          ppuStack_58 = &PTR_PTR_1132fed68;
          plStack_60 = plVar10;
          func_0x000109d1b588(lVar6,&pcStack_68);
          *(undefined8 *)(lVar8 + 0x10) = 0;
          plStack_70[3] = lVar6;
          lVar8 = plVar4[0x18];
          plVar9 = (long *)(lVar8 + 0x10);
          goto LAB_10a821214;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plStack_70[3] = 0;
    lVar8 = plVar4[0x19];
    plVar9 = (long *)(lVar8 + 0x10);
    do {
      lVar6 = *plVar9;
      if (lVar6 == 0) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          func_0x000109d1b4dc(lVar8 + 0x18);
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
    } while (((uint)lVar6 >> 1 & 1) == 0);
    plVar9 = (long *)plVar4[0x18];
    plVar4[0x18] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x19];
    plVar4[0x19] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x19);
    }
    *param_1 = *plVar10;
    *plVar10 = 0;
    plStack_80 = plVar4;
LAB_10a821454:
    __ZNSt3__15mutex6unlockEv(plVar4 + 0x1c);
  }
  else {
    lVar8 = plVar4[0x19];
    plVar9 = plVar4;
    FUN_109d1857c();
    func_0x000109d1b350(lVar8,plVar9);
    plVar9 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
    }
    plVar9 = (long *)plVar4[0x18];
    plVar4[0x18] = 0;
    if (plVar9 != (long *)0x0) {
      puVar1 = (ulong *)(plVar9 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
    lVar8 = plVar4[0x19];
    plVar4[0x19] = 0;
    if (lVar8 != 0) {
      func_0x0001092b4274(plVar4 + 0x19);
    }
    *param_1 = (long)plVar4;
    plStack_80 = (long *)0x0;
  }
  if (lStack_78 != 0) {
    func_0x0001092b4274(&lStack_78);
  }
  if (plStack_80 != (long *)0x0) {
    puVar1 = (ulong *)(plStack_80 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plStack_80 + 8))();
      }
    }
  }
  return;
LAB_10a821214:
  do {
    lVar7 = *plVar9;
    if (lVar7 == 0) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = lVar8 + 0x18;
        pcStack_68 = FUN_10a8499fc;
        ppuStack_58 = &PTR_PTR_1132fed68;
        plStack_60 = plVar10;
        func_0x000109d1b588(lVar6,&pcStack_68);
        *(undefined8 *)(lVar8 + 0x10) = 0;
        plStack_70[4] = lVar6;
        *param_1 = (long)plVar4;
        goto LAB_10a821450;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  } while (((uint)lVar7 >> 1 & 1) == 0);
  plStack_70[4] = 0;
  lVar8 = plVar4[0x19];
  FUN_109d1857c();
  func_0x000109d1b350(lVar8,lVar6);
  plVar9 = (long *)plVar4[0x18];
  plVar4[0x18] = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
    }
  }
  lVar6 = *plVar10;
  plVar9 = (long *)(lVar6 + 0x10);
  lVar8 = plStack_70[3];
  while (lVar7 = *plVar9, lVar7 != 0) {
    ClearExclusiveLocal();
LAB_10a8212f8:
    if (((uint)lVar7 >> 1 & 1) != 0) goto LAB_10a821448;
  }
  cVar2 = '\x01';
  bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar3) {
    *plVar9 = 1;
    cVar2 = ExclusiveMonitorsStatus();
  }
  if (cVar2 != '\0') goto LAB_10a8212f8;
  pcStack_68 = FUN_10a8498ec;
  ppuStack_58 = &PTR_PTR_1132fed68;
  plStack_60 = plVar10;
  FUN_109d1b624(lVar6 + 0x18,&pcStack_68,lVar8);
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plStack_70[3] = 0;
  plVar9 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar9 != (long *)0x0) {
    puVar1 = (ulong *)(plVar9 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
  }
  lVar8 = plVar4[0x19];
  plVar4[0x19] = 0;
  if (lVar8 != 0) {
    func_0x0001092b4274(plVar4 + 0x19);
  }
LAB_10a821448:
  *param_1 = (long)plVar4;
LAB_10a821450:
  plStack_80 = (long *)0x0;
  goto LAB_10a821454;
}



/* Entry: 10a821500; end: 10a82156b;  */

long * FUN_10a821500(long *param_1)

{
  func_0x00010a084504(param_1 + 1);
  if (*param_1 != 0) {
    func_0x0001092b4274(param_1);
  }
  return param_1;
}



/* Entry: 10a82156c; end: 10a8217f7;  */

undefined8 * FUN_10a82156c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *apuStack_b8 [7];
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  plStack_d8 = (long *)param_3[1];
  uStack_e0 = *param_3;
  if (param_3[1] != 0) {
    plVar5 = (long *)(param_3[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plStack_c8 = (long *)param_3[3];
  uStack_d0 = param_3[2];
  param_3[2] = 0;
  param_3[3] = 0;
  uStack_c0 = param_3[4];
  (**(code **)(param_3[5] + 0x18))(apuStack_b8,param_3 + 5);
  ppuStack_80 = &PTR_SUB_110c21ec8;
  puVar4 = (undefined8 *)0x60;
  __Znwm();
  puVar4[1] = plStack_d8;
  *puVar4 = uStack_e0;
  if (plStack_d8 != (long *)0x0) {
    plVar5 = plStack_d8 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[3] = plStack_c8;
  puVar4[2] = uStack_d0;
  uStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  puVar4[4] = uStack_c0;
  (*(code *)apuStack_b8[0][3])(puVar4 + 5,apuStack_b8);
  plVar5 = (long *)0x48;
  puStack_78 = puVar4;
  __Znwm();
  plVar5[2] = (long)&PTR_SUB_110c21ec8;
  plVar5[3] = (long)puVar4;
  puStack_78 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)param_2[0xb];
  lVar6 = param_2[0xc];
  *plVar5 = (long)(param_2 + 10);
  plVar5[1] = (long)puVar4;
  *puVar4 = plVar5;
  param_2[0xb] = plVar5;
  param_2[0xc] = lVar6 + 1;
  func_0x00010a838078(&ppuStack_80);
  (*(code *)*apuStack_b8[0])(apuStack_b8);
  plVar5 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
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
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = plStack_d8;
  if (plStack_d8 != (long *)0x0) {
    plVar1 = plStack_d8 + 1;
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
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  uVar7 = param_2[0xb];
  puVar4 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = uVar7;
  param_1[2] = uVar9;
  param_1[1] = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010a838078(&ppuStack_80);
  func_0x00010a838044(&uStack_e0);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  __Unwind_Resume();
  plVar5 = (long *)puVar4[2];
  if (plVar5 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar5 != (long *)0x0) {
      if (puVar4[1] != 0) {
        FUN_10a05c0fc(puVar4[1],*puVar4);
      }
      plVar1 = plVar5 + 1;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (puVar4[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return puVar4;
}



/* Entry: 10a8217f8; end: 10a8218ab;  */

undefined8 * FUN_10a8217f8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a8218ac; end: 10a821f37;  */

/* WARNING: Removing unreachable block (ram,0x00010a821aa8) */
/* WARNING: Removing unreachable block (ram,0x00010a821c58) */
/* WARNING: Removing unreachable block (ram,0x00010a821c5c) */
/* WARNING: Removing unreachable block (ram,0x00010a821c64) */
/* WARNING: Removing unreachable block (ram,0x00010a821c6c) */
/* WARNING: Removing unreachable block (ram,0x00010a821c78) */
/* WARNING: Removing unreachable block (ram,0x00010a821c80) */
/* WARNING: Removing unreachable block (ram,0x00010a821c88) */
/* WARNING: Removing unreachable block (ram,0x00010a821c8c) */
/* WARNING: Removing unreachable block (ram,0x00010a821c4c) */
/* WARNING: Removing unreachable block (ram,0x00010a821ca0) */
/* WARNING: Removing unreachable block (ram,0x00010a821ca4) */
/* WARNING: Removing unreachable block (ram,0x00010a821cac) */
/* WARNING: Removing unreachable block (ram,0x00010a821cb4) */
/* WARNING: Removing unreachable block (ram,0x00010a821cc0) */
/* WARNING: Removing unreachable block (ram,0x00010a821cc8) */
/* WARNING: Removing unreachable block (ram,0x00010a821cd0) */
/* WARNING: Removing unreachable block (ram,0x00010a821cd4) */

void FUN_10a8218ac(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long extraout_x8;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  plVar9 = *(long **)(param_2 + 0x10);
  if (plVar9 == (long *)0x0) {
LAB_10a821d94:
    FUN_10a043ecc();
    lVar13 = extraout_x8;
  }
  else {
    uVar16 = *(undefined8 *)(param_2 + 8);
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar9 == (long *)0x0) goto LAB_10a821d94;
    plVar12 = plVar9 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar1 = plVar9 + 1;
    do {
      lVar13 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
    FUN_10a6ec9e4(&plStack_70,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x960));
    FUN_10a6ec710(&plStack_78,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x960));
    plVar7 = plStack_70;
    plVar1 = plStack_78;
    uVar17 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 0x960) + 0x3a8);
    if (plStack_70 != (long *)0x0) {
      plVar2 = plStack_70 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (plStack_78 != (long *)0x0) {
      plVar2 = plStack_78 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *plVar2 = *plVar2 + 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar4 = *(undefined4 *)(param_2 + 0x48);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    puVar10 = (undefined8 *)0x98;
    __Znwm();
    *puVar10 = FUN_10a856524;
    puVar10[1] = FUN_10a856824;
    FUN_10a7026e8(puVar10 + 2);
    lVar13 = puVar10[7];
    if (lVar13 != 0) {
      plVar12 = (long *)(lVar13 + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = *plVar12 + 4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *param_1 = lVar13;
    puVar10[10] = plVar1;
    puVar10[9] = plVar7;
    *(undefined4 *)(puVar10 + 0xb) = uVar4;
    puVar10[0xc] = uVar16;
    puVar10[0xd] = plVar9;
    puVar10[0xe] = param_2;
    puVar10[0xf] = uVar17;
    *(undefined1 *)(puVar10 + 0x10) = 0;
    *(undefined1 *)(puVar10 + 0x12) = 0;
    puVar11 = puVar10 + 0xf;
    FUN_10a70212c(puVar11,puVar10);
    if (((ulong)puVar11 & 1) != 0) {
LAB_10a821c44:
      if (plStack_78 != (long *)0x0) {
        puVar3 = (ulong *)(plStack_78 + 1);
        do {
          uVar14 = *puVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar14 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar14 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plStack_78 + 8))();
          }
        }
      }
      if (plStack_70 != (long *)0x0) {
        puVar3 = (ulong *)(plStack_70 + 1);
        do {
          uVar14 = *puVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar6) {
            *puVar3 = uVar14 - 4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((uVar14 & 0x1fffffffc) == 4) {
          do {
            uVar14 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar14 - 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (uVar14 - 1 == 0) {
            (**(code **)(*plStack_70 + 8))();
          }
        }
      }
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      return;
    }
    FUN_10a8380dc(puVar10 + 0x11,puVar10 + 9);
    puVar10[0xf] = puVar10[0x11];
    plVar12 = (long *)(puVar10[0x11] + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = *plVar12 + 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((uint)*(undefined8 *)(puVar10[0xf] + 0x10) >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x12) = 1;
      lVar13 = puVar10[0xf];
      plVar12 = (long *)(lVar13 + 0x10);
      uVar16 = puVar10[3];
      do {
        lVar15 = *plVar12;
        if (lVar15 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            uStack_68 = 0;
            puStack_60 = puVar10;
            uStack_58 = uVar16;
            func_0x000109d1b588(lVar13 + 0x18,&uStack_68);
            *(undefined8 *)(lVar13 + 0x10) = 0;
            goto LAB_10a821c44;
          }
        }
        else {
          ClearExclusiveLocal();
        }
      } while (((uint)lVar15 >> 1 & 1) == 0);
    }
    lVar13 = puVar10[0xf];
    if (((uint)*(undefined8 *)(puVar10[0xf] + 0x10) >> 5 & 1) == 0) {
      if ((*(byte *)(lVar13 + 0xb0) & 1) != 0) {
        FUN_10a7021c8(puVar10 + 2,lVar13 + 0x98);
        plVar12 = (long *)puVar10[0xf];
        if (plVar12 != (long *)0x0) {
          puVar3 = (ulong *)(plVar12 + 1);
          do {
            uVar14 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar14 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar6) {
                *puVar3 = uVar14 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar12 + 8))();
            }
          }
        }
        plVar12 = (long *)puVar10[0x11];
        if (plVar12 != (long *)0x0) {
          puVar3 = (ulong *)(plVar12 + 1);
          do {
            uVar14 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar14 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar6) {
                *puVar3 = uVar14 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar12 + 8))();
            }
          }
        }
        if (puVar10[0xd] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar12 = (long *)puVar10[10];
        if (plVar12 != (long *)0x0) {
          puVar3 = (ulong *)(plVar12 + 1);
          do {
            uVar14 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar14 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar6) {
                *puVar3 = uVar14 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar12 + 8))();
            }
          }
        }
        plVar12 = (long *)puVar10[9];
        if (plVar12 != (long *)0x0) {
          puVar3 = (ulong *)(plVar12 + 1);
          do {
            uVar14 = *puVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar6) {
              *puVar3 = uVar14 - 4;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((uVar14 & 0x1fffffffc) == 4) {
            do {
              uVar14 = *puVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar6) {
                *puVar3 = uVar14 - 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (uVar14 - 1 == 0) {
              (**(code **)(*plVar12 + 8))();
            }
          }
        }
        func_0x000109d1a1d0(puVar10 + 2);
        __ZdlPv(puVar10);
        goto LAB_10a821c44;
      }
      goto LAB_10a821da0;
    }
  }
  func_0x0001092af97c(lVar13 + 0x90);
LAB_10a821da0:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a821da4);
  (*pcVar8)();
}



/* Entry: 10a821f38; end: 10a821ff3;  */

long * FUN_10a821f38(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  return param_1;
}



/* Entry: 10a821ff4; end: 10a8220a3;  */

void FUN_10a821ff4(undefined8 *param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  
  *param_1 = &PTR_FUN_110c78d30;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  FUN_10ae0f554();
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar1 = param_1[1];
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
  }
  func_0x00010a700ae4();
  param_1[0xb] = uVar1;
  *(undefined8 *)(uVar1 + 0x10) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(uVar1 + 0x18) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(uVar1 + 0x20) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(uVar1 + 0x28) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 10) = param_3;
  *(undefined4 *)((long)param_1 + 0x54) = 3;
  return;
}



/* Entry: 10a8220a4; end: 10a822447;  */

void FUN_10a8220a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_1c0;
  long *plStack_1b8;
  undefined8 *puStack_1b0;
  long *plStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  undefined8 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 *apuStack_120 [7];
  undefined8 uStack_e8;
  undefined8 *apuStack_e0 [7];
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  uStack_168 = param_3[1];
  uStack_170 = *param_3;
  lStack_160 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uStack_150 = param_3[4];
  uStack_158 = param_3[3];
  plStack_140 = (long *)param_3[6];
  uStack_148 = param_3[5];
  param_3[5] = 0;
  param_3[6] = 0;
  plStack_130 = (long *)param_3[8];
  uStack_138 = param_3[7];
  param_3[7] = 0;
  param_3[8] = 0;
  uStack_128 = param_3[9];
  (**(code **)(param_3[10] + 0x18))(apuStack_120);
  uStack_e8 = param_3[0x11];
  (**(code **)(param_3[0x12] + 0x18))(apuStack_e0);
  plStack_a0 = (long *)param_3[0x1a];
  uStack_a8 = param_3[0x19];
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  ppuStack_90 = &PTR_SUB_110c21ee0;
  puVar3 = (undefined8 *)0xd8;
  __Znwm();
  puVar3[1] = uStack_168;
  *puVar3 = uStack_170;
  puVar3[2] = lStack_160;
  uStack_168 = 0;
  lStack_160 = 0;
  uStack_170 = 0;
  puVar3[4] = uStack_150;
  puVar3[3] = uStack_158;
  puVar9 = puVar3 + 5;
  puVar3[6] = plStack_140;
  *puVar9 = uStack_148;
  uStack_148 = 0;
  plStack_140 = (long *)0x0;
  puVar3[9] = uStack_128;
  puVar3[8] = plStack_130;
  puVar3[7] = uStack_138;
  uStack_138 = 0;
  plStack_130 = (long *)0x0;
  (*(code *)apuStack_120[0][3])(puVar3 + 10,apuStack_120);
  puVar3[0x11] = uStack_e8;
  (*(code *)apuStack_e0[0][3])(puVar3 + 0x12,apuStack_e0);
  puVar3[0x1a] = plStack_a0;
  puVar3[0x19] = uStack_a8;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  plVar4 = (long *)0x48;
  puStack_88 = puVar3;
  __Znwm();
  plVar4[2] = (long)&PTR_SUB_110c21ee0;
  plVar4[3] = (long)puVar3;
  puStack_88 = (undefined8 *)0x0;
  puVar3 = (undefined8 *)param_2[0xb];
  lVar7 = param_2[0xc];
  *plVar4 = (long)(param_2 + 10);
  plVar4[1] = (long)puVar3;
  *puVar3 = plVar4;
  param_2[0xb] = plVar4;
  param_2[0xc] = lVar7 + 1;
  func_0x00010a838900(&ppuStack_90);
  plVar4 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar5 = plStack_a0 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  (*(code *)*apuStack_e0[0])(apuStack_e0);
  (*(code *)*apuStack_120[0])(apuStack_120);
  plVar4 = plStack_130;
  if (plStack_130 != (long *)0x0) {
    plVar5 = plStack_130 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_130 + 0x10))(plStack_130);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_140;
  if (plStack_140 != (long *)0x0) {
    plVar5 = plStack_140 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  uVar8 = param_2[0xb];
  plVar4 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar11 = param_2[1];
  uVar10 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  *param_1 = uVar8;
  param_1[2] = uVar11;
  param_1[1] = uVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a838900(&ppuStack_90);
  func_0x00010a838894(&uStack_170);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  plVar5 = plVar4;
  __Unwind_Resume();
  pcStack_178 = FUN_10a822448;
  puStack_1a0 = puVar9;
  uStack_198 = uVar8;
  plStack_190 = plVar4;
  puStack_188 = param_2;
  puStack_180 = &stack0xfffffffffffffff0;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    plVar4 = (long *)(plVar5[1] + 0x30);
    if (*(char *)(plVar5[1] + 0x47) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    func_0x00010ae06f08(1,4,&UNK_10f67aaab,&UNK_10f67c3fe,0x464,&UNK_10f67c52e,in_x6,in_x7,plVar4);
  }
  plVar4 = *(long **)(*(long *)(*plVar5 + 0x100) + 0x1c8);
  (**(code **)(*plVar4 + 0x60))();
  puStack_1b0 = (undefined8 *)0x0;
  plStack_1a8 = (long *)0x0;
  plVar6 = (long *)plVar4[1];
  if (plVar6 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_1a8 = plVar6;
    if (plVar6 != (long *)0x0) {
      puStack_1b0 = (undefined8 *)*plVar4;
      if (puStack_1b0 != (undefined8 *)0x0) {
        plStack_1b8 = (long *)plVar5[2];
        lStack_1c0 = plVar5[1];
        if (plVar5[2] != 0) {
          plVar4 = (long *)(plVar5[2] + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        (**(code **)*puStack_1b0)(puStack_1b0,&lStack_1c0);
        plVar4 = plStack_1b8;
        if (plStack_1b8 != (long *)0x0) {
          plVar5 = plStack_1b8 + 1;
          do {
            lVar7 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plStack_1b8 + 0x10))(plStack_1b8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        goto LAB_10a8225b0;
      }
    }
  }
  if ((bRam000000011330a9e8 & 1) != 0) {
    plVar4 = (long *)(plVar5[1] + 0x30);
    if (*(char *)(plVar5[1] + 0x47) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67c3fe,0x469,&UNK_10f67c556,in_x6,in_x7,plVar4);
  }
  (*(code *)plVar5[3])(plVar5 + 3);
LAB_10a8225b0:
  plVar4 = plStack_1a8;
  if (plStack_1a8 != (long *)0x0) {
    plVar5 = plStack_1a8 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a822448; end: 10a82261f;  */

void FUN_10a822448(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar4;
  long lVar5;
  long lStack_50;
  long *plStack_48;
  undefined8 *puStack_40;
  long *plStack_38;
  
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    plVar4 = (long *)(param_1[1] + 0x30);
    if (*(char *)(param_1[1] + 0x47) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    func_0x00010ae06f08(1,4,&UNK_10f67aaab,&UNK_10f67c3fe,0x464,&UNK_10f67c52e,in_x6,in_x7,plVar4);
  }
  plVar4 = *(long **)(*(long *)(*param_1 + 0x100) + 0x1c8);
  (**(code **)(*plVar4 + 0x60))();
  puStack_40 = (undefined8 *)0x0;
  plStack_38 = (long *)0x0;
  plVar3 = (long *)plVar4[1];
  if (plVar3 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    plStack_38 = plVar3;
    if (plVar3 != (long *)0x0) {
      puStack_40 = (undefined8 *)*plVar4;
      if (puStack_40 != (undefined8 *)0x0) {
        plStack_48 = (long *)param_1[2];
        lStack_50 = param_1[1];
        if (param_1[2] != 0) {
          plVar4 = (long *)(param_1[2] + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        (**(code **)*puStack_40)(puStack_40,&lStack_50);
        plVar4 = plStack_48;
        if (plStack_48 != (long *)0x0) {
          plVar3 = plStack_48 + 1;
          do {
            lVar5 = *plVar3;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = lVar5 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plStack_48 + 0x10))(plStack_48);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          }
        }
        goto LAB_10a8225b0;
      }
    }
  }
  if ((bRam000000011330a9e8 & 1) != 0) {
    plVar4 = (long *)(param_1[1] + 0x30);
    if (*(char *)(param_1[1] + 0x47) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    func_0x00010ae06f08(0,1,&UNK_10f67aaab,&UNK_10f67c3fe,0x469,&UNK_10f67c556,in_x6,in_x7,plVar4);
  }
  (*(code *)param_1[3])(param_1 + 3);
LAB_10a8225b0:
  plVar4 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar5 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a822620; end: 10a822787;  */

/* WARNING: Removing unreachable block (ram,0x00010a82264c) */

long FUN_10a822620(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x38))((undefined8 *)(param_1 + 0x38));
  func_0x00010a084504(param_1 + 8);
  return param_1;
}



/* Entry: 10a822788; end: 10a823003;  */

/* WARNING: Removing unreachable block (ram,0x00010a822d30) */
/* WARNING: Removing unreachable block (ram,0x00010a822ab4) */
/* WARNING: Removing unreachable block (ram,0x00010a822aec) */
/* WARNING: Removing unreachable block (ram,0x00010a822d40) */

void FUN_10a822788(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long *plStack_2d0;
  long *plStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long *plStack_298;
  long *plStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  code *pcStack_270;
  undefined **ppuStack_268;
  undefined8 *puStack_260;
  code *pcStack_230;
  undefined **ppuStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 *puStack_1e0;
  long lStack_1b0;
  undefined8 *apuStack_1a8 [7];
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *apuStack_148 [7];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  plStack_100 = (long *)*param_4;
  plVar9 = param_4 + 1;
  uStack_110 = param_1;
  uStack_108 = uVar3;
  (**(code **)(*plVar9 + 0x18))(&plStack_f8,plVar9);
  uStack_c0 = *param_3;
  (**(code **)(param_3[1] + 0x18))(&plStack_b8,param_3 + 1);
  FUN_10a823004(&lStack_288,param_5,&uStack_110);
  (*(code *)*plStack_b8)(&plStack_b8);
  (*(code *)*plStack_f8)(&plStack_f8);
  plVar4 = (long *)0x58;
  __Znwm();
  plVar5 = plVar4 + 1;
  *plVar5 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_DAT_110c226b0;
  plVar4[6] = 0;
  plVar4[5] = 0;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plStack_298 = plVar4 + 3;
  *plStack_298 = (long)&UNK_1053a6a3c;
  plVar4[4] = (long)&PTR_DAT_110950c70;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = *plVar5 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plStack_290 = plVar4;
  uStack_110 = param_1;
  uStack_108 = uVar3;
  plStack_100 = plStack_298;
  plStack_f8 = plVar4;
  FUN_10a823218(&lStack_2b0,param_5,&uStack_110);
  plVar4 = plStack_f8;
  if (plStack_f8 != (long *)0x0) {
    plVar5 = plStack_f8 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = (long *)0x30;
  __Znwm();
  plVar11 = plVar4 + 1;
  *plVar11 = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c22928;
  plVar12 = plVar4 + 3;
  *plVar12 = lStack_288;
  plVar4[5] = lStack_278;
  plVar4[4] = lStack_280;
  lStack_280 = 0;
  lStack_278 = 0;
  plVar5 = (long *)0x30;
  plStack_2c0 = plVar12;
  plStack_2b8 = plVar4;
  __Znwm();
  plVar10 = plVar5 + 1;
  *plVar10 = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_DAT_110c22978;
  plVar8 = plVar5 + 3;
  *plVar8 = lStack_2b0;
  plVar5[5] = lStack_2a0;
  plVar5[4] = lStack_2a8;
  lStack_2a8 = 0;
  lStack_2a0 = 0;
  plStack_2d0 = plVar8;
  plStack_2c8 = plVar5;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_110,*param_2,param_2[1]);
  }
  else {
    uStack_108 = param_2[1];
    uStack_110 = *param_2;
    plStack_100 = (long *)param_2[2];
  }
  plStack_f8 = (long *)param_2[3];
  uStack_f0 = (undefined4)param_2[4];
  uStack_e4 = *(undefined8 *)((long)param_2 + 0x2c);
  uStack_ec = (undefined4)*(undefined8 *)((long)param_2 + 0x24);
  uStack_e8 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x24) >> 0x20);
  if (*(char *)((long)param_2 + 0x4f) < '\0') {
    func_0x000107c3192c(&uStack_d8,param_2[7],param_2[8]);
  }
  else {
    uStack_d0 = param_2[8];
    uStack_d8 = param_2[7];
    uStack_c8 = param_2[9];
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar2) {
      *plVar11 = *plVar11 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = *plVar10 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uStack_c0 = param_1;
  plStack_b8 = plVar12;
  plStack_b0 = plVar4;
  plStack_a8 = plVar8;
  plStack_a0 = plVar5;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_2f0,*param_2,param_2[1]);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      func_0x000107c3192c(&uStack_170,*param_2,param_2[1]);
      goto LAB_10a822a58;
    }
  }
  else {
    uStack_2e8 = param_2[1];
    uStack_2f0 = *param_2;
    lStack_2e0 = param_2[2];
  }
  uStack_168 = param_2[1];
  uStack_170 = *param_2;
  lStack_160 = param_2[2];
LAB_10a822a58:
  uStack_150 = *param_4;
  uStack_158 = param_1;
  (**(code **)(param_4[1] + 0x18))(apuStack_148,plVar9);
  uStack_1f0 = 0x10a84b51c;
  ppuStack_1e8 = &PTR_FUN_110c229b8;
  puVar6 = (undefined8 *)0x78;
  __Znwm();
  puVar6[1] = uStack_108;
  *puVar6 = uStack_110;
  puVar6[2] = plStack_100;
  puVar6[4] = CONCAT44(uStack_ec,uStack_f0);
  puVar6[3] = plStack_f8;
  *(undefined8 *)((long)puVar6 + 0x2c) = uStack_e4;
  *(ulong *)((long)puVar6 + 0x24) = CONCAT44(uStack_e8,uStack_ec);
  puVar6[8] = uStack_d0;
  puVar6[7] = uStack_d8;
  puVar6[9] = uStack_c8;
  puVar6[0xb] = plStack_b8;
  puVar6[10] = uStack_c0;
  puVar6[0xc] = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar4 = plStack_b0 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar6[0xe] = plStack_a0;
  puVar6[0xd] = plStack_a8;
  if (plStack_a0 != (long *)0x0) {
    plVar4 = plStack_a0 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_230 = FUN_10a84b6b8;
  ppuStack_228 = &PTR_FUN_110c229d8;
  puStack_1e0 = puVar6;
  if (lStack_2e0 < 0) {
    func_0x000107c3192c(&uStack_220,uStack_2f0,uStack_2e8);
  }
  else {
    uStack_218 = uStack_2e8;
    uStack_220 = uStack_2f0;
    lStack_210 = lStack_2e0;
  }
  pcStack_270 = FUN_10a84b788;
  ppuStack_268 = &PTR_FUN_110c229f8;
  puVar6 = (undefined8 *)0x60;
  __Znwm();
  if (lStack_160 < 0) {
    func_0x000107c3192c(puVar6,uStack_170,uStack_168);
  }
  else {
    puVar6[1] = uStack_168;
    *puVar6 = uStack_170;
    puVar6[2] = lStack_160;
  }
  puVar6[3] = uStack_158;
  puVar6[4] = uStack_150;
  (*(code *)apuStack_148[0][3])(puVar6 + 5,apuStack_148);
  puStack_260 = puVar6;
  FUN_10a81e2d4(&lStack_1b0,&uStack_1f0,&pcStack_230,&pcStack_270);
  *plStack_298 = lStack_1b0;
  plVar4 = plStack_298 + 1;
  (**(code **)*plVar4)(plVar4);
  (*(code *)apuStack_1a8[0][2])(plVar4,apuStack_1a8);
  (*(code *)*apuStack_1a8[0])(apuStack_1a8);
  (*(code *)*ppuStack_268)(&ppuStack_268);
  (*(code *)*ppuStack_228)(&ppuStack_228);
  (*(code *)*ppuStack_1e8)(&ppuStack_1e8);
  FUN_10a823350(&uStack_110);
  (*(code *)*apuStack_148[0])(apuStack_148);
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  if (lStack_2e0 < 0) {
    __ZdlPv(uStack_2f0);
  }
  plVar4 = plStack_a0;
  if (plStack_a0 != (long *)0x0) {
    plVar5 = plStack_a0 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_b0;
  if (plStack_b0 != (long *)0x0) {
    plVar5 = plStack_b0 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_2c8;
  if (plStack_2c8 != (long *)0x0) {
    plVar5 = plStack_2c8 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_2c8 + 0x10))(plStack_2c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_2b8;
  if (plStack_2b8 != (long *)0x0) {
    plVar5 = plStack_2b8 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  func_0x00010a8235ec(&lStack_2b0);
  plVar4 = plStack_290;
  if (plStack_290 != (long *)0x0) {
    plVar5 = plStack_290 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_290 + 0x10))(plStack_290);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = &lStack_288;
  func_0x00010a82366c(plVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_2e0 < 0) {
    __ZdlPv(uStack_2f0);
  }
  func_0x00010a8234ec(&uStack_110);
  func_0x00010a82353c(&plStack_2d0);
  do {
    func_0x00010a823594(&plStack_2c0);
    func_0x00010a8235ec(&lStack_2b0);
    FUN_10a84832c(&plStack_298);
    func_0x00010a82366c(&lStack_288);
    __Unwind_Resume(plVar4);
  } while( true );
}



/* Entry: 10a823004; end: 10a823217;  */

void FUN_10a823004(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *apuStack_f8 [7];
  undefined8 uStack_c0;
  undefined8 *apuStack_b8 [7];
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  uVar8 = param_3[1];
  uVar7 = *param_3;
  uVar6 = param_3[2];
  (**(code **)(param_3[3] + 0x18))(apuStack_f8);
  uStack_c0 = param_3[10];
  (**(code **)(param_3[0xb] + 0x18))(apuStack_b8,param_3 + 0xb);
  ppuStack_80 = &PTR_FUN_110c21ef8;
  puVar4 = (undefined8 *)0x90;
  __Znwm();
  puVar4[1] = uVar8;
  *puVar4 = uVar7;
  puVar4[2] = uVar6;
  (*(code *)apuStack_f8[0][3])(puVar4 + 3,apuStack_f8);
  puVar4[10] = uStack_c0;
  (*(code *)apuStack_b8[0][3])(puVar4 + 0xb,apuStack_b8);
  plVar5 = (long *)0x48;
  puStack_78 = puVar4;
  __Znwm();
  plVar5[2] = (long)&PTR_FUN_110c21ef8;
  plVar5[3] = (long)puVar4;
  puStack_78 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)param_2[0xb];
  lVar1 = param_2[0xc];
  *plVar5 = (long)(param_2 + 10);
  plVar5[1] = (long)puVar4;
  *puVar4 = plVar5;
  param_2[0xb] = plVar5;
  param_2[0xc] = lVar1 + 1;
  FUN_10a838994(&ppuStack_80);
  (*(code *)*apuStack_b8[0])(apuStack_b8);
  (*(code *)*apuStack_f8[0])(apuStack_f8);
  uVar6 = param_2[0xb];
  puVar4 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv(puVar4);
  uVar8 = param_2[1];
  uVar7 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = uVar6;
  param_1[2] = uVar8;
  param_1[1] = uVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a838994(&ppuStack_80);
  (*(code *)*apuStack_b8[0])(apuStack_b8);
  do {
    (*(code *)*apuStack_f8[0])(apuStack_f8);
    __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
    __Unwind_Resume(puVar4);
  } while( true );
}



/* Entry: 10a823218; end: 10a82334f;  */

undefined *** FUN_10a823218(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined ***pppuVar9;
  undefined *puVar10;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined ***pppuVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  long lStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lStack_b8 = param_3[1];
  lStack_c0 = *param_3;
  lVar3 = param_3[2];
  lVar5 = param_3[3];
  param_3[2] = 0;
  param_3[3] = 0;
  uStack_a8 = 0;
  ppuStack_a0 = &PTR_DAT_110c21f10;
  uStack_b0 = 0;
  plVar8 = (long *)0x48;
  lStack_98 = lStack_c0;
  lStack_90 = lStack_b8;
  lStack_88 = lVar3;
  lStack_80 = lVar5;
  __Znwm();
  lVar12 = *param_3;
  plVar8[4] = param_3[1];
  plVar8[3] = lVar12;
  plVar8[5] = lVar3;
  plVar8[6] = lVar5;
  puVar4 = (undefined8 *)param_2[0xb];
  lVar3 = param_2[0xc];
  *plVar8 = (long)(param_2 + 10);
  plVar8[1] = (long)puVar4;
  plVar8[2] = (long)&PTR_DAT_110c21f10;
  *puVar4 = plVar8;
  param_2[0xb] = plVar8;
  param_2[0xc] = lVar3 + 1;
  pppuVar11 = (undefined ***)(param_2 + 2);
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar14 = param_2[1];
  uVar13 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  *param_1 = plVar8;
  param_1[2] = uVar14;
  param_1[1] = uVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar11;
  }
  ___stack_chk_fail();
  FUN_10a84832c(&lStack_88);
  FUN_10a84832c(&uStack_b0);
  __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
  pppuVar9 = pppuVar11;
  __Unwind_Resume();
  pcStack_c8 = FUN_10a823350;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_f0 = param_3;
  plStack_e8 = plVar8;
  puStack_e0 = param_2;
  pppuStack_d8 = pppuVar11;
  puStack_d0 = &stack0xfffffffffffffff0;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    pppuVar11 = pppuVar9;
    if (*(char *)((long)pppuVar9 + 0x17) < '\0') {
      pppuVar11 = (undefined ***)*pppuVar9;
    }
    func_0x00010ae06f08(1,4,&UNK_10f67aaab,&UNK_10f67c598,0x49e,&UNK_10f67c6d3,in_x6,in_x7,pppuVar11
                       );
  }
  puVar10 = pppuVar9[10][0x111];
  ppuStack_120 = pppuVar9[0xc];
  ppuStack_128 = pppuVar9[0xb];
  if (pppuVar9[0xc] != (undefined **)0x0) {
    ppuVar2 = pppuVar9[0xc] + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar7) {
        *ppuVar2 = *ppuVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  pcStack_138 = FUN_10a838a28;
  ppuStack_130 = &PTR_FUN_110c21f28;
  uStack_188 = 0;
  uStack_180 = 0;
  ppuStack_160 = pppuVar9[0xe];
  ppuStack_168 = pppuVar9[0xd];
  if (pppuVar9[0xe] != (undefined **)0x0) {
    ppuVar2 = pppuVar9[0xe] + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar7) {
        *ppuVar2 = *ppuVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  pcStack_178 = FUN_10a838d50;
  ppuStack_170 = &PTR_FUN_110c21f40;
  uStack_198 = 0;
  uStack_190 = 0;
  FUN_10a76e51c(puVar10,pppuVar9,2,&pcStack_138,&pcStack_178,pppuVar9 + 7);
  (*(code *)*ppuStack_170)(&ppuStack_170);
  pppuVar11 = &ppuStack_130;
  (*(code *)*ppuStack_130)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return pppuVar11;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_170)(&ppuStack_170);
  func_0x00010a82353c(&uStack_198);
  (*(code *)*ppuStack_130)(&ppuStack_130);
  func_0x00010a823594(&uStack_188);
  __Unwind_Resume();
  func_0x00010a82353c(pppuVar11 + 0xd);
  func_0x00010a823594(pppuVar11 + 0xb);
  if (*(char *)((long)pppuVar11 + 0x4f) < '\0') {
    __ZdlPv(pppuVar11[7]);
  }
  if (*(char *)((long)pppuVar11 + 0x17) < '\0') {
    __ZdlPv(*pppuVar11);
  }
  return pppuVar11;
}



/* Entry: 10a823350; end: 10a8234eb;  */

undefined *** FUN_10a823350(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  long *plVar5;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  long lStack_a0;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    plVar5 = param_1;
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      plVar5 = (long *)*param_1;
    }
    func_0x00010ae06f08(1,4,&UNK_10f67aaab,&UNK_10f67c598,0x49e,&UNK_10f67c6d3,in_x6,in_x7,plVar5);
  }
  uVar3 = *(undefined8 *)(param_1[10] + 0x888);
  lStack_60 = param_1[0xc];
  lStack_68 = param_1[0xb];
  if (param_1[0xc] != 0) {
    plVar5 = (long *)(param_1[0xc] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_78 = FUN_10a838a28;
  ppuStack_70 = &PTR_FUN_110c21f28;
  uStack_c8 = 0;
  uStack_c0 = 0;
  lStack_a0 = param_1[0xe];
  lStack_a8 = param_1[0xd];
  if (param_1[0xe] != 0) {
    plVar5 = (long *)(param_1[0xe] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_b8 = FUN_10a838d50;
  ppuStack_b0 = &PTR_FUN_110c21f40;
  uStack_d8 = 0;
  uStack_d0 = 0;
  FUN_10a76e51c(uVar3,param_1,2,&pcStack_78,&pcStack_b8,param_1 + 7);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  pppuVar4 = &ppuStack_70;
  (*(code *)*ppuStack_70)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  func_0x00010a82353c(&uStack_d8);
  (*(code *)*ppuStack_70)(&ppuStack_70);
  func_0x00010a823594(&uStack_c8);
  __Unwind_Resume();
  func_0x00010a82353c(pppuVar4 + 0xd);
  func_0x00010a823594(pppuVar4 + 0xb);
  if (*(char *)((long)pppuVar4 + 0x4f) < '\0') {
    __ZdlPv(pppuVar4[7]);
  }
  if (*(char *)((long)pppuVar4 + 0x17) < '\0') {
    __ZdlPv(*pppuVar4);
  }
  return pppuVar4;
}



/* Entry: 10a8234ec; end: 10a8236eb;  */

undefined8 * FUN_10a8234ec(undefined8 *param_1)

{
  func_0x00010a82353c(param_1 + 0xd);
  func_0x00010a823594(param_1 + 0xb);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10a8236ec; end: 10a82379b;  */

undefined1  [16] FUN_10a8236ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x20;
  auVar1._0_8_ = &UNK_10f67c95f;
  return auVar1;
}



/* Entry: 10a82379c; end: 10a823853;  */

undefined1 FUN_10a82379c(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_30;
  undefined1 *puStack_28;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x960);
  lVar2 = *(long *)(param_1 + 0x288);
  if (*(char *)(lVar2 + 0xff) < '\0') {
    func_0x000107c3192c(&uStack_50,*(undefined8 *)(lVar2 + 0xe8),*(undefined8 *)(lVar2 + 0xf0));
  }
  else {
    uStack_48 = *(undefined8 *)(lVar2 + 0xf0);
    uStack_50 = *(undefined8 *)(lVar2 + 0xe8);
    lStack_40 = *(long *)(lVar2 + 0xf8);
  }
  puStack_30 = &UNK_10dd62ad6;
  lVar3 = lVar3 + 0x210;
  puStack_28 = (undefined1 *)&uStack_50;
  FUN_10a71c8d8(lVar3,&uStack_50,&UNK_10dd5b8f9,&puStack_28,&puStack_30);
  uVar1 = *(undefined1 *)(lVar3 + 0xd0);
  if (lStack_40 < 0) {
    __ZdlPv(uStack_50);
  }
  return uVar1;
}



/* Entry: 10a823854; end: 10a823917;  */

long FUN_10a823854(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_30;
  undefined1 *puStack_28;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x960);
  lVar2 = *(long *)(param_1 + 0x288);
  if (*(char *)(lVar2 + 0xff) < '\0') {
    func_0x000107c3192c(&uStack_50,*(undefined8 *)(lVar2 + 0xe8),*(undefined8 *)(lVar2 + 0xf0));
  }
  else {
    uStack_48 = *(undefined8 *)(lVar2 + 0xf0);
    uStack_50 = *(undefined8 *)(lVar2 + 0xe8);
    lStack_40 = *(long *)(lVar2 + 0xf8);
  }
  puStack_30 = &UNK_10dd62ad6;
  lVar3 = lVar3 + 0x210;
  puStack_28 = (undefined1 *)&uStack_50;
  FUN_10a71c8d8(lVar3,&uStack_50,&UNK_10dd5b8f9,&puStack_28,&puStack_30);
  if ((*(byte *)(lVar3 + 0xd0) & 1) != 0) {
    if (lStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
    return lVar3 + 0x28;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a8238fc);
  (*pcVar1)();
}



/* Entry: 10a823918; end: 10a82392b;  */

bool FUN_10a823918(undefined8 param_1,long *param_2)

{
  return *(char *)(*param_2 + 0xe0) == '\x04';
}



/* Entry: 10a82392c; end: 10a82399f;  */

void FUN_10a82392c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x2f0) == '\x01') {
    plVar4 = *(long **)(param_1 + 0x2e8);
    if (plVar4 != (long *)0x0) {
      puVar1 = (ulong *)(plVar4 + 1);
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar5 & 0x1fffffffc) == 4) {
        do {
          uVar5 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar5 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar5 - 1 == 0) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2f0) = 0;
  }
  return;
}



/* Entry: 10a8239a0; end: 10a823c83;  */

/* WARNING: Removing unreachable block (ram,0x00010a823b9c) */

void FUN_10a8239a0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_e0 [8];
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  char cStack_b9;
  undefined8 uStack_b8;
  char cStack_a1;
  undefined8 auStack_98 [2];
  char cStack_81;
  byte bStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_40;
  long *plStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((*(byte *)(param_2 + 0x2f0) & 1) != 0) {
    plVar8 = (long *)(param_2 + 0x2e8);
    func_0x0001092af8bc(plVar8);
    lVar10 = *plVar8;
    if ((*(byte *)(lVar10 + 0xa8) & 1) != 0) {
      lVar6 = *(long *)(lVar10 + 0x98);
      if ((lVar6 != 0) &&
         (___dynamic_cast(lVar6,&PTR_DAT_110c42c58,&PTR_DAT_110bc7ea0,0), lVar6 != 0)) {
        plStack_38 = *(long **)(lVar10 + 0xa0);
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lStack_40 = lVar6;
        FUN_10a349b54(auStack_98);
        puVar7 = auStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar7,&UNK_10f67b031,0x12);
        uStack_58 = puVar7[1];
        uStack_60 = *puVar7;
        uStack_50 = puVar7[2];
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        if (cStack_81 < '\0') {
          __ZdlPv(auStack_98[0]);
        }
        FUN_10a3dda08(&uStack_d0,*(undefined8 *)(param_2 + 0x90));
        FUN_10a9dd660(auStack_98,uStack_d0,&uStack_60);
        if (cStack_c0 == '\x01') {
          __ZNSt3__15mutex6unlockEv(uStack_c8);
        }
        if (bStack_68 == 1) {
          FUN_10a0ff18c(&uStack_d0,&uStack_60,2);
          FUN_10ac5fb74(auStack_e0,*(undefined8 *)(param_2 + 0x90),&uStack_d0,0);
          FUN_10a823c84(param_1,auStack_e0);
          if (plStack_d8 != (long *)0x0) {
            plVar1 = plStack_d8 + 1;
            do {
              lVar10 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
            }
          }
          if (*(char *)(param_2 + 0x2f0) == '\x01') {
            plVar8 = (long *)*plVar8;
            if (plVar8 != (long *)0x0) {
              puVar2 = (ulong *)(plVar8 + 1);
              do {
                uVar9 = *puVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar4) {
                  *puVar2 = uVar9 - 4;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if ((uVar9 & 0x1fffffffc) == 4) {
                do {
                  uVar9 = *puVar2;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar4) {
                    *puVar2 = uVar9 - 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (uVar9 - 1 == 0) {
                  (**(code **)(*plVar8 + 8))();
                }
              }
            }
            *(undefined1 *)(param_2 + 0x2f0) = 0;
          }
          if (cStack_a1 < '\0') {
            __ZdlPv(uStack_b8);
          }
          if (cStack_b9 < '\0') {
            __ZdlPv(uStack_d0);
          }
          if ((bStack_68 & 1) != 0) {
            FUN_10a0f1ea0(auStack_98);
          }
        }
        plVar8 = plStack_38;
        if (plStack_38 != (long *)0x0) {
          plVar1 = plStack_38 + 1;
          do {
            lVar10 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plStack_38 + 0x10))(plStack_38);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
        }
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a823bf4);
  (*pcVar5)();
}



/* Entry: 10a823c84; end: 10a823ce7;  */

undefined8 * FUN_10a823c84(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a823ce8; end: 10a823ecf;  */

void FUN_10a823ce8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_f0 [24];
  long *plStack_d8;
  byte bStack_48;
  undefined *puStack_40;
  long *plStack_38;
  
  if ((*(byte *)(param_1 + 0x2f0) & 1) == 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x90) + 0x960);
    lVar7 = *(long *)(param_1 + 0x288);
    if (*(char *)(lVar7 + 0xff) < '\0') {
      func_0x000107c3192c(&lStack_110,*(undefined8 *)(lVar7 + 0xe8),*(undefined8 *)(lVar7 + 0xf0));
    }
    else {
      uStack_108 = *(undefined8 *)(lVar7 + 0xf0);
      lStack_110 = *(long *)(lVar7 + 0xe8);
      lStack_100 = *(long *)(lVar7 + 0xf8);
    }
    puStack_40 = &UNK_10dd62ad6;
    lVar9 = lVar9 + 0x210;
    plStack_38 = &lStack_110;
    FUN_10a71c8d8(lVar9,&lStack_110,&UNK_10dd5b8f9,&plStack_38,&puStack_40);
    FUN_10a702f70(auStack_f0,lVar9 + 0x28);
    if (lStack_100 < 0) {
      __ZdlPv(lStack_110);
    }
    if ((bStack_48 & 1) == 0) {
LAB_10a823e50:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a823e54);
      (*pcVar4)();
    }
    plVar5 = plStack_d8;
    (**(code **)(*plStack_d8 + 0x38))(plStack_d8,0x44);
    if ((int)plVar5 == 0) {
      if ((bStack_48 & 1) == 0) goto LAB_10a823e50;
      uVar6 = 0x42;
    }
    else {
      if ((bStack_48 & 1) == 0) goto LAB_10a823e50;
      uVar6 = 0x44;
    }
    (**(code **)(*plStack_d8 + 0x40))(&plStack_38,plStack_d8,uVar6);
    func_0x00010a81a828(param_1 + 0x2e8,&plStack_38);
    plVar5 = plStack_38;
    *(undefined4 *)(param_1 + 0x74) = 1;
    if (plStack_38 != (long *)0x0) {
      puVar1 = (ulong *)(plStack_38 + 1);
      do {
        uVar8 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar8 - 4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((uVar8 & 0x1fffffffc) == 4) {
        do {
          uVar8 = *puVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar8 - 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (uVar8 - 1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    func_0x00010a703078(auStack_f0);
  }
  return;
}



/* Entry: 10a823ed0; end: 10a823f83;  */

void FUN_10a823ed0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a84b9c8;
  ppuStack_60 = &PTR_DAT_110c22a18;
  ppuVar6 = &PTR_DAT_110c20ab8;
  uStack_58 = param_1;
  FUN_10a03ce64(param_2,&PTR_DAT_110c20ab8,&pcStack_68,0);
  pppuVar5 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  puStack_a0 = &UNK_10f67c95f;
  uStack_98 = 0x20;
  (**(code **)(*ppuVar6 + 0x30))(ppuVar6,&PTR_DAT_110c21d00,&puStack_a0);
  ppuVar8 = pppuVar5[0x51];
  if (ppuVar8 == (undefined **)0x0) {
    uStack_b0 = 0;
    plStack_a8 = (long *)0x0;
  }
  else {
    FUN_10a03d13c(&uStack_b0,ppuVar8);
  }
  puStack_a0 = &UNK_10f6345f0;
  uStack_98 = 0x13;
  (**(code **)(*ppuVar6 + 0x108))(ppuVar6,&PTR_DAT_110c20ab8,&uStack_b0,&puStack_a0);
  plVar4 = plStack_a8;
  if (ppuVar8 == (undefined **)0x0) {
    if (plStack_a8 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_a8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (plStack_a8 == (long *)0x0) {
      return;
    }
    plVar1 = plStack_a8 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10a823f84; end: 10a82408f;  */

void FUN_10a823f84(long param_1,long *param_2)

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
  
  puStack_30 = &UNK_10f67c95f;
  uStack_28 = 0x20;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c21d00,&puStack_30);
  lVar5 = *(long *)(param_1 + 0x288);
  if (lVar5 == 0) {
    uStack_40 = 0;
    plStack_38 = (long *)0x0;
  }
  else {
    FUN_10a03d13c(&uStack_40,lVar5);
  }
  puStack_30 = &UNK_10f6345f0;
  uStack_28 = 0x13;
  (**(code **)(*param_2 + 0x108))(param_2,&PTR_DAT_110c20ab8,&uStack_40,&puStack_30);
  plVar4 = plStack_38;
  if (lVar5 == 0) {
    if (plStack_38 == (long *)0x0) {
      return;
    }
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
  }
  else {
    if (plStack_38 == (long *)0x0) {
      return;
    }
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
  }
  if (lVar5 == 0) {
    (**(code **)(*plStack_38 + 0x10))(plStack_38);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  }
  return;
}



/* Entry: 10a824090; end: 10a8247c3;  */

/* WARNING: Removing unreachable block (ram,0x00010a824594) */
/* WARNING: Removing unreachable block (ram,0x00010a824598) */
/* WARNING: Removing unreachable block (ram,0x00010a8245a0) */
/* WARNING: Removing unreachable block (ram,0x00010a8245a8) */
/* WARNING: Removing unreachable block (ram,0x00010a8245ac) */

void FUN_10a824090(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  code *pcStack_d0;
  undefined **appuStack_c8 [8];
  undefined ***pppuStack_88;
  undefined ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = (undefined ***)0x330;
  __Znwm();
  pppuVar7 = pppuVar3 + 1;
  pppuVar3[2] = (undefined **)0x0;
  *pppuVar7 = (undefined **)0x0;
  pppuVar10 = pppuVar3 + 3;
  *pppuVar3 = &PTR_DAT_110c22a40;
  pppuVar3[0x62] = &PTR_FUN_110c383b8;
  *(undefined2 *)(pppuVar3 + 0x65) = 0x100;
  pppuVar3[100] = (undefined **)0x0;
  pppuVar3[99] = (undefined **)0x0;
  ppuVar9 = &PTR_PTR_110c230e8;
  FUN_10a080194(pppuVar10,&PTR_PTR_110c230e8,param_2);
  pppuVar3[3] = &PTR_FUN_110c22e60;
  pppuVar3[5] = &PTR_FUN_110c22fd0;
  pppuVar3[8] = &PTR_DAT_110c23000;
  pppuVar3[0x62] = &PTR_DAT_110c230a8;
  pppuVar3[0x18] = &PTR_DAT_110c23058;
  *(undefined1 *)(pppuVar3 + 0x60) = 0;
  *(undefined1 *)(pppuVar3 + 0x61) = 0;
  ppuVar8 = pppuVar3[0xc];
  pppuStack_110 = pppuVar10;
  pppuStack_108 = pppuVar3;
  if (ppuVar8 == (undefined **)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar2) {
        *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pppuVar6 = pppuVar3 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
      if (bVar2) {
        *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pppuVar3[0xb] = (undefined **)pppuVar10;
    pppuVar3[0xc] = (undefined **)pppuVar3;
LAB_10a8241b8:
    do {
      ppuVar8 = *pppuVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar2) {
        *pppuVar7 = (undefined **)((long)ppuVar8 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppuVar8 != (undefined **)0x0) goto LAB_10a8241cc;
    (*(code *)(*pppuVar3)[2])(pppuVar3);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar3);
    if (param_2 == 0) goto LAB_10a82440c;
LAB_10a8241d0:
    pppuVar10 = pppuStack_108;
    pppuVar3 = pppuStack_110;
    pppuStack_100 = *(undefined ****)(param_2 + 0x858);
    pppuStack_f8 = *(undefined ****)(param_2 + 0x860);
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar7 = pppuStack_f8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar2) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar4 = 0x2a8;
    __Znwm();
    pppuStack_d8 = pppuVar10;
    pppuStack_e0 = pppuVar3;
    if (pppuVar10 != (undefined ***)0x0) {
      pppuVar3 = pppuVar10 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
        if (bVar2) {
          *pppuVar3 = (undefined **)((long)*pppuVar3 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uVar5 = uVar4;
    func_0x00010a0fda30();
    FUN_10ab6a888(uVar4,param_2,&pppuStack_e0,uVar5,ppuVar9);
    if (pppuVar10 != (undefined ***)0x0) {
      pppuVar3 = pppuVar10 + 1;
      do {
        ppuVar9 = *pppuVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
        if (bVar2) {
          *pppuVar3 = (undefined **)((long)ppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppuVar9 == (undefined **)0x0) {
        (*(code *)(*pppuVar10)[2])(pppuVar10);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar10);
      }
    }
    pppuVar10 = pppuStack_f8;
    pppuVar3 = pppuStack_100;
    pppuStack_f0 = pppuStack_100;
    pppuStack_e8 = pppuStack_f8;
    if (pppuStack_f8 != (undefined ***)0x0) {
      pppuVar7 = pppuStack_f8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar2) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pppuVar7 = pppuStack_f8 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar2) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar2) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppuStack_f8);
    }
    pppuStack_e0 = pppuVar3;
    pppuStack_d8 = pppuVar10;
    FUN_10a05b208(&pppuStack_88,uVar4,&pppuStack_e0);
    FUN_10a05b04c(param_1);
    pppuVar3 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar10 = pppuStack_80 + 1;
      do {
        ppuVar9 = *pppuVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar2) {
          *pppuVar10 = (undefined **)((long)ppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppuVar9 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar3);
      }
    }
    if (pppuStack_d8 != (undefined ***)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppuVar3 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar10 = pppuStack_e8 + 1;
      do {
        ppuVar9 = *pppuVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar2) {
          *pppuVar10 = (undefined **)((long)ppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppuVar9 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar3);
      }
    }
    pppuVar3 = pppuStack_100;
    if ((pppuStack_100 != (undefined ***)0x0) &&
       (pppuVar10 = (undefined ***)*param_1, pppuVar10 != (undefined ***)0x0)) {
      pppuStack_80 = (undefined ***)param_1[1];
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar7 = pppuStack_80 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar2) {
            *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      pppuStack_88 = pppuVar10;
      FUN_10aa88c30(pppuStack_100,&pppuStack_88);
      pppuVar10 = pppuStack_80;
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar7 = pppuStack_80 + 1;
        do {
          ppuVar9 = *pppuVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
          if (bVar2) {
            *pppuVar7 = (undefined **)((long)ppuVar9 + -1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (ppuVar9 == (undefined **)0x0) {
          (*(code *)(*pppuStack_80)[2])(pppuStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppuVar3 = pppuVar10;
        }
      }
    }
    if (pppuStack_f8 == (undefined ***)0x0) goto LAB_10a824698;
    pppuVar10 = pppuStack_f8 + 1;
    do {
      ppuVar9 = *pppuVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar2) {
        *pppuVar10 = (undefined **)((long)ppuVar9 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
      pppuVar7 = pppuStack_f8;
    } while (cVar1 != '\0');
  }
  else {
    if (ppuVar8[1] == (undefined *)0xffffffffffffffff) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
        if (bVar2) {
          *pppuVar7 = (undefined **)((long)*pppuVar7 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pppuVar6 = pppuVar3 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar6,0x10);
        if (bVar2) {
          *pppuVar6 = (undefined **)((long)*pppuVar6 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pppuVar3[0xb] = (undefined **)pppuVar10;
      pppuVar3[0xc] = (undefined **)pppuVar3;
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      goto LAB_10a8241b8;
    }
LAB_10a8241cc:
    if (param_2 != 0) goto LAB_10a8241d0;
LAB_10a82440c:
    pppuVar7 = pppuStack_108;
    pppuVar10 = pppuStack_110;
    pppuVar6 = (undefined ***)0x2c0;
    __Znwm();
    pppuVar6[1] = (undefined **)0x0;
    pppuVar6[2] = (undefined **)0x0;
    *pppuVar6 = &PTR_DAT_110b9fda0;
    pppuVar3 = pppuVar6 + 3;
    pppuStack_d8 = pppuVar7;
    pppuStack_e0 = pppuVar10;
    if (pppuVar7 != (undefined ***)0x0) {
      pppuVar10 = pppuVar7 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar2) {
          *pppuVar10 = (undefined **)((long)*pppuVar10 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    pppuVar10 = pppuVar6;
    func_0x00010a0fda30();
    FUN_10ab6a888(pppuVar3,0,&pppuStack_e0,pppuVar10,ppuVar9);
    if (pppuVar7 != (undefined ***)0x0) {
      pppuVar10 = pppuVar7 + 1;
      do {
        ppuVar9 = *pppuVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar2) {
          *pppuVar10 = (undefined **)((long)ppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppuVar9 == (undefined **)0x0) {
        (*(code *)(*pppuVar7)[2])(pppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar7);
      }
    }
    pppuStack_88 = pppuVar3;
    pppuStack_80 = pppuVar6;
    FUN_10a05b2a8(&pppuStack_88,pppuVar6 + 8,pppuVar3);
    FUN_10a05b04c(&pppuStack_f0,&pppuStack_88);
    pppuVar3 = pppuStack_80;
    if (pppuStack_80 != (undefined ***)0x0) {
      pppuVar10 = pppuStack_80 + 1;
      do {
        ppuVar9 = *pppuVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar2) {
          *pppuVar10 = (undefined **)((long)ppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppuVar9 == (undefined **)0x0) {
        (*(code *)(*pppuStack_80)[2])(pppuStack_80);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar3);
      }
    }
    if (pppuStack_e8 == (undefined ***)0x0) {
      pppuStack_d8 = (undefined ***)0x0;
    }
    else {
      pppuVar3 = pppuStack_e8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
        if (bVar2) {
          *pppuVar3 = (undefined **)((long)*pppuVar3 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      pppuStack_d8 = pppuStack_e8;
      if (pppuStack_e8 != (undefined ***)0x0) {
        pppuVar3 = pppuStack_e8 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
          if (bVar2) {
            *pppuVar3 = (undefined **)((long)*pppuVar3 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    uStack_70 = 0;
    uStack_78 = 0;
    pppuStack_88 = (undefined ***)&UNK_1053a6a3c;
    appuStack_c8[0] = &PTR_DAT_110c22a80;
    pcStack_d0 = FUN_10a84bafc;
    pppuStack_e0 = pppuStack_f0;
    pppuStack_80 = (undefined ***)&PTR_DAT_110ae9180;
    FUN_10a044790(&pppuStack_88);
    (*(code *)*pppuStack_80)(&pppuStack_80);
    pppuVar3 = pppuStack_e8;
    if (pppuStack_e8 != (undefined ***)0x0) {
      pppuVar10 = pppuStack_e8 + 1;
      do {
        ppuVar9 = *pppuVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
        if (bVar2) {
          *pppuVar10 = (undefined **)((long)ppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (ppuVar9 == (undefined **)0x0) {
        (*(code *)(*pppuStack_e8)[2])(pppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar3);
      }
    }
    param_1[1] = pppuStack_d8;
    *param_1 = pppuStack_e0;
    if (pppuStack_d8 != (undefined ***)0x0) {
      pppuVar3 = pppuStack_d8 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppuVar3,0x10);
        if (bVar2) {
          *pppuVar3 = (undefined **)((long)*pppuVar3 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_10a044790(&pcStack_d0);
    pppuVar3 = appuStack_c8;
    (*(code *)*appuStack_c8[0])();
    if (pppuStack_d8 == (undefined ***)0x0) goto LAB_10a824698;
    pppuVar10 = pppuStack_d8 + 1;
    do {
      ppuVar9 = *pppuVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
      if (bVar2) {
        *pppuVar10 = (undefined **)((long)ppuVar9 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
      pppuVar7 = pppuStack_d8;
    } while (cVar1 != '\0');
  }
  if (ppuVar9 == (undefined **)0x0) {
    (*(code *)(*pppuVar7)[2])(pppuVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv();
    pppuVar3 = pppuVar7;
  }
LAB_10a824698:
  pppuVar10 = pppuStack_108;
  if (pppuStack_108 != (undefined ***)0x0) {
    pppuVar7 = pppuStack_108 + 1;
    do {
      ppuVar9 = *pppuVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppuVar7,0x10);
      if (bVar2) {
        *pppuVar7 = (undefined **)((long)ppuVar9 + -1);
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (ppuVar9 == (undefined **)0x0) {
      (*(code *)(*pppuStack_108)[2])(pppuStack_108);
      pppuVar3 = pppuVar10;
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&pppuStack_88);
  func_0x00010a05248c(pppuVar10);
  FUN_10a054c5c(&pppuStack_100);
  FUN_10a84baa4(&pppuStack_110);
  __Unwind_Resume(pppuVar3);
  pppuVar10 = pppuVar3;
  FUN_10a8248f0();
  FUN_10a84bc30();
  FUN_10a84bf58(pppuVar10);
  FUN_10a003e74(pppuVar3,&UNK_10f67b0ca,0x17);
  FUN_10a8249c8();
  func_0x00010a004064();
  return;
}



/* Entry: 10a8247c4; end: 10a8248ef;  */

void FUN_10a8247c4(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  pcStack_78 = (code *)0x0;
  uStack_70 = 0xffffffff00000001;
  uStack_68 = 0xffffffff;
  puStack_60 = &UNK_10f67b044;
  uStack_58 = 0x51;
  uStack_48 = 0;
  uStack_40 = 0;
  puStack_50 = &UNK_10f67a8c5;
  uStack_38 = 0xffffffff;
  uVar1 = param_1;
  FUN_10a8248f0(param_1,&pcStack_78);
  FUN_10a84bc30();
  FUN_10a84bf58(uVar1);
  FUN_10a003e74(param_1,&UNK_10f67b0ca,0x17);
  pcStack_78 = FUN_10a824090;
  FUN_10a8249c8();
  func_0x00010a004064();
  return;
}



/* Entry: 10a8248f0; end: 10a8249c7;  */

/* WARNING: Removing unreachable block (ram,0x00010a824988) */

undefined1  [16] FUN_10a8248f0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f67c95f,0x20);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a84bb34(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a8249c8; end: 10a824c23;  */

ulong FUN_10a8249c8(ulong param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x00010a84c014(param_1,*param_2,param_3);
  }
  return param_1;
}



/* Entry: 10a824c24; end: 10a825c4f;  */

/* WARNING: Removing unreachable block (ram,0x00010a825124) */

undefined ***
FUN_10a824c24(undefined ***param_1,undefined **param_2,undefined **param_3,long *param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  long *plVar8;
  long *plVar9;
  code *pcVar10;
  code **ppcVar11;
  code *pcVar12;
  undefined ***pppuVar13;
  ulong uVar14;
  undefined8 in_x7;
  long lVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  undefined *puVar18;
  long *plVar19;
  long *plVar20;
  undefined ***pppuVar21;
  undefined **ppuVar22;
  int iVar23;
  long *plVar24;
  code *pcVar25;
  undefined **ppuVar26;
  long *plVar27;
  undefined8 uVar28;
  undefined **ppuStack_4f0;
  long *plStack_4e8;
  undefined8 ****ppppuStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  code *pcStack_4c0;
  code *pcStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined **ppuStack_498;
  ulong uStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined4 uStack_478;
  undefined **ppuStack_470;
  long *plStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined8 ****ppppuStack_450;
  ulong uStack_448;
  ulong uStack_440;
  long lStack_438;
  long lStack_430;
  undefined **ppuStack_428;
  undefined ***pppuStack_420;
  code *pcStack_3f0;
  undefined **ppuStack_3e8;
  undefined ***pppuStack_3e0;
  code *pcStack_3b0;
  undefined **ppuStack_3a8;
  long *plStack_3a0;
  code *pcStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  long *plStack_358;
  undefined8 ****ppppuStack_350;
  ulong uStack_348;
  ulong uStack_340;
  undefined8 uStack_330;
  undefined **ppuStack_328;
  long *plStack_320;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  code *pcStack_2e0;
  code *pcStack_2d8;
  code *pcStack_2d0;
  code *pcStack_2c8;
  code *pcStack_2c0;
  undefined8 uStack_2a8;
  undefined8 auStack_290 [2];
  char cStack_279;
  undefined8 ****ppppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  long *plStack_250;
  code *pcStack_248;
  undefined8 *apuStack_240 [7];
  long lStack_208;
  undefined8 *apuStack_200 [7];
  long *plStack_1c8;
  long *plStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  long *plStack_1a8;
  undefined8 ****ppppuStack_1a0;
  ulong uStack_198;
  ulong auStack_190 [2];
  undefined8 *apuStack_180 [2];
  undefined8 uStack_170;
  char cStack_159;
  undefined **appuStack_148 [4];
  int aiStack_128 [30];
  code *pcStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_FUN_110c20ae8;
  param_1[1] = param_2;
  param_1[2] = param_3;
  lVar15 = param_4[1];
  ppuVar16 = (undefined **)*param_4;
  pppuVar17 = param_1 + 3;
  param_1[4] = (undefined **)param_4[1];
  *pppuVar17 = ppuVar16;
  if (lVar15 != 0) {
    plVar8 = (long *)(lVar15 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = *plVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[5] = (undefined **)0x0;
  param_1[6] = (undefined **)0xffffffff000003e8;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = (undefined **)0x0;
  FUN_10a05a5d4(param_1 + 0x15,&ppuStack_1b8);
  param_1[0x17] = (undefined **)0x0;
  pppuVar21 = param_1 + 0x1a;
  *pppuVar21 = (undefined **)0x0;
  param_1[0x1b] = (undefined **)0x0;
  param_1[0x18] = (undefined **)0x0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  FUN_10a6e46f8(&ppuStack_1b8,param_1[1][300],0);
  FUN_10a6e47d0(pppuVar21,&ppuStack_1b8);
  if (ppuStack_1b0 != (undefined **)0x0) {
    ppuVar16 = ppuStack_1b0 + 1;
    do {
      puVar18 = *ppuVar16;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar16,0x10);
      if (bVar4) {
        *ppuVar16 = puVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar18 == (undefined *)0x0) {
      (**(code **)(*ppuStack_1b0 + 0x10))(ppuStack_1b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuStack_1b0);
    }
  }
  ppuVar16 = param_1[1];
  pcStack_3f0 = FUN_10a84c350;
  ppuStack_3e8 = &PTR_FUN_110c22ad0;
  lStack_430 = 0x10a84c580;
  ppuStack_428 = &PTR_DAT_110c22af0;
  ppuVar22 = param_1[0x15];
  pppppuVar6 = (undefined8 *****)0x48;
  pppuStack_420 = param_1;
  pppuStack_3e0 = param_1;
  __Znwm();
  uStack_440 = 0x8000000000000048;
  uStack_448 = 0x40;
  pppppuVar6[1] = (undefined8 ****)0x72746e65632d7375;
  *pppppuVar6 = (undefined8 ****)0x2f2f3a7370747468;
  pppppuVar6[3] = (undefined8 ****)0x70616e732e697061;
  pppppuVar6[2] = (undefined8 ****)0x2e7063672d316c61;
  pppppuVar6[5] = (undefined8 ****)0x2d72656b72616d2f;
  pppppuVar6[4] = (undefined8 ****)0x6d6f632e74616863;
  pppppuVar6[7] = (undefined8 ****)0x7372656b72616d2f;
  pppppuVar6[6] = (undefined8 ****)0x617461646174656d;
  *(undefined1 *)(pppppuVar6 + 8) = 0;
  pppppuVar7 = pppppuVar6;
  ppppuStack_450 = pppppuVar6;
  __ZNSt3__16chrono12steady_clock3nowEv();
  plVar8 = (long *)0x58;
  __Znwm();
  plVar24 = plVar8 + 1;
  *plVar24 = 0;
  plVar8[2] = 0;
  plVar20 = plVar8 + 3;
  *plVar20 = (long)&UNK_1053a6a3c;
  *plVar8 = (long)&PTR_DAT_110c226b0;
  plVar8[6] = 0;
  plVar8[5] = 0;
  plVar8[8] = 0;
  plVar8[7] = 0;
  plVar8[10] = 0;
  plVar8[9] = 0;
  plVar19 = plVar8 + 4;
  *plVar19 = (long)&PTR_DAT_110950c70;
  plVar9 = (long *)0x20;
  plStack_460 = plVar20;
  plStack_458 = plVar8;
  __Znwm();
  plVar27 = plVar9 + 1;
  *plVar27 = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_DAT_110b3f0e8;
  ppuVar26 = (undefined **)(plVar9 + 3);
  *(undefined4 *)ppuVar26 = 0;
  ppuStack_470 = ppuVar26;
  plStack_468 = plVar9;
  func_0x000107c3192c(auStack_290,pppppuVar6,0x40);
  ppuStack_260 = param_1[4];
  ppuStack_268 = param_1[3];
  if (param_1[4] != (undefined **)0x0) {
    ppuVar1 = param_1[4] + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar4) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar4) {
      *plVar27 = *plVar27 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pcStack_248 = pcStack_3f0;
  ppppuStack_278 = pppppuVar7;
  ppuStack_270 = ppuVar16;
  ppuStack_258 = ppuVar26;
  plStack_250 = plVar9;
  (*(code *)ppuStack_3e8[3])(apuStack_240,&ppuStack_3e8);
  lStack_208 = lStack_430;
  (*(code *)ppuStack_428[3])(apuStack_200,&ppuStack_428);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar4) {
      *plVar24 = *plVar24 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  ppuStack_498 = &PTR_DAT_110b1a148;
  uStack_490 = 0;
  puStack_488 = &DAT_11383d918;
  puStack_480 = &DAT_11383d918;
  uStack_478 = 0;
  plStack_1c8 = plVar20;
  plStack_1c0 = plVar8;
  func_0x000107c30248(&puStack_488,*pppuVar17 + 0x1d,0);
  pcVar10 = (code *)0x0;
  _time();
  ppcVar11 = &pcStack_3b0;
  pcStack_3b0 = pcVar10;
  _localtime();
  ppuStack_2e8 = (undefined **)ppcVar11[1];
  ppuStack_2f0 = (undefined **)*ppcVar11;
  pcStack_2d8 = ppcVar11[3];
  pcStack_2e0 = ppcVar11[2];
  pcStack_2c8 = ppcVar11[5];
  pcStack_2d0 = ppcVar11[4];
  pcStack_2c0 = ppcVar11[6];
  FUN_109fed7e0(&ppuStack_1b8);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(&uStack_330,&ppuStack_1b8);
  if ((char)uStack_330 == '\x01') {
    __ZNKSt3__18ios_base6getlocEv
              (&pcStack_370,(undefined *)((long)&ppuStack_1b8 + (long)ppuStack_1b8[-3]));
    ppcVar11 = &pcStack_370;
    __ZNKSt3__16locale9use_facetERNS0_2idE
              (ppcVar11,
               PTR___ZNSt3__18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE2idE_110346908
              );
    __ZNSt3__16localeD1Ev(&pcStack_370);
    puVar18 = ppuStack_1b8[-3];
    uVar28 = *(undefined8 *)((long)auStack_190 + (long)puVar18);
    iVar23 = *(int *)((long)aiStack_128 + (long)puVar18);
    if (iVar23 == -1) {
      __ZNKSt3__18ios_base6getlocEv(&lStack_438,(undefined *)((long)&ppuStack_1b8 + (long)puVar18));
      plVar8 = &lStack_438;
      __ZNKSt3__16locale9use_facetERNS0_2idE(plVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar8 + 0x38))();
      iVar23 = (int)plVar8;
      __ZNSt3__16localeD1Ev(&lStack_438);
      *(int *)((long)aiStack_128 + (long)puVar18) = iVar23;
    }
    __ZNKSt3__18time_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE3putES4_RNS_8ios_baseEcPK2tmPKcSC_
              (ppcVar11,uVar28,(undefined *)((long)&ppuStack_1b8 + (long)puVar18),(int)(char)iVar23,
               &ppuStack_2f0,&UNK_10f67c3f6,&UNK_10f67c3fd);
    if (ppcVar11 == (code **)0x0) {
      __ZNSt3__18ios_base5clearEj
                ((undefined *)((long)&ppuStack_1b8 + (long)ppuStack_1b8[-3]),
                 *(uint *)((long)&uStack_198 + (long)ppuStack_1b8[-3]) | 1);
    }
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(&uStack_330);
  func_0x00010a002480(&pcStack_b0,&ppuStack_1b0,&uStack_330);
  appuStack_148[0] = &PTR_DAT_11088d708;
  ppuStack_1b8 = &PTR_DAT_11088d6e0;
  ppuStack_1b0 = &PTR_DAT_11088d7b0;
  if (cStack_159 < '\0') {
    __ZdlPv(uStack_170);
  }
  ppuStack_1b0 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(&plStack_1a8);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1b8,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_148);
  uVar14 = uStack_490;
  if ((uStack_490 & 1) != 0) {
    uVar14 = *(ulong *)(uStack_490 & 0xfffffffffffffffe);
  }
  func_0x000107c3024c(&puStack_480,&pcStack_b0,uVar14);
  FUN_10a8220a4(&uStack_4b0,ppuVar22,auStack_290);
  FUN_10a3bf4bc(&ppuStack_2f0,&ppuStack_498);
  puVar18 = ppuVar16[0x20];
  pcVar12 = (code *)0x138;
  __Znwm();
  ppuStack_1b8 = ppuStack_2f0;
  pcVar25 = pcVar12 + 8;
  *(long *)pcVar25 = 0;
  *(long *)(pcVar12 + 0x10) = 0;
  *(undefined ***)pcVar12 = &PTR_FUN_110b9f3b0;
  pcVar10 = pcVar12 + 0x18;
  uVar14 = uStack_448;
  pppppuVar7 = (undefined8 *****)ppppuStack_450;
  if (-1 < (long)uStack_440) {
    uVar14 = uStack_440 >> 0x38;
    pppppuVar7 = &ppppuStack_450;
  }
  ppuStack_2f0 = (undefined **)0x0;
  ppuStack_1b0 = ppuStack_2e8;
  (**(code **)(pcStack_2e0 + 0x10))(&plStack_1a8,&pcStack_2e0);
  uStack_170 = uStack_2a8;
  uVar2 = *(ulong *)(puVar18 + 0x210);
  puVar5 = *(undefined **)(puVar18 + 0x208);
  if (-1 < (char)puVar18[0x21f]) {
    uVar2 = (ulong)(byte)puVar18[0x21f];
    puVar5 = puVar18 + 0x208;
  }
  pcStack_b0 = FUN_10a84a828;
  ppuStack_a8 = &PTR_FUN_110c228a0;
  uStack_a0 = uStack_4b0;
  uStack_90 = uStack_4a0;
  uStack_98 = uStack_4a8;
  uStack_4a8 = 0;
  uStack_4a0 = 0;
  FUN_10a23708c(pcVar10,pppppuVar7,uVar14,"POST",4,&ppuStack_1b8,0,in_x7,puVar5,uVar2,&pcStack_b0);
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  FUN_10a042634(&ppuStack_1b8);
  pcStack_4c0 = pcVar10;
  pcStack_4b8 = pcVar12;
  FUN_10a042634(&ppuStack_2f0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar25,0x10);
    if (bVar4) {
      *(long *)pcVar25 = *(long *)pcVar25 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  pcStack_2d8 = (code *)lStack_430;
  ppuStack_2f0 = ppuVar16;
  ppuStack_2e8 = (undefined **)pcVar10;
  pcStack_2e0 = pcVar12;
  (*(code *)ppuStack_428[3])(&pcStack_2d0,&ppuStack_428);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar4) {
      *plVar27 = *plVar27 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  ppuStack_4f0 = ppuVar26;
  plStack_4e8 = plVar9;
  plStack_1a8 = plVar9;
  if ((long)uStack_440 < 0) {
    func_0x000107c3192c(&ppppuStack_4e0,ppppuStack_450,uStack_448);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar4) {
        *plVar27 = *plVar27 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((long)uStack_440 < 0) {
      ppuStack_1b8 = ppuVar16;
      ppuStack_1b0 = ppuVar26;
      func_0x000107c3192c(&ppppuStack_1a0,ppppuStack_450,uStack_448);
      goto LAB_10a825364;
    }
  }
  else {
    uStack_4d8 = uStack_448;
    ppppuStack_4e0 = ppppuStack_450;
    uStack_4d0 = uStack_440;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar4) {
        *plVar27 = *plVar27 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_198 = uStack_448;
  ppppuStack_1a0 = ppppuStack_450;
  auStack_190[0] = uStack_440;
  ppuStack_1b8 = ppuVar16;
  ppuStack_1b0 = ppuVar26;
LAB_10a825364:
  auStack_190[1] = lStack_430;
  (*(code *)ppuStack_428[3])(apuStack_180,&ppuStack_428);
  uStack_330 = 0x10a84afb8;
  ppuStack_328 = &PTR_FUN_110c228b8;
  plVar8 = (long *)0x58;
  __Znwm();
  plVar8[1] = (long)ppuStack_2e8;
  *plVar8 = (long)ppuStack_2f0;
  plVar8[2] = (long)pcStack_2e0;
  if (pcStack_2e0 != (code *)0x0) {
    pcVar10 = pcStack_2e0 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
      if (bVar4) {
        *(long *)pcVar10 = *(long *)pcVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar8[3] = (long)pcStack_2d8;
  (**(code **)(pcStack_2d0 + 0x18))(plVar8 + 4,&pcStack_2d0);
  pcStack_370 = FUN_10a84b0d4;
  ppuStack_368 = &PTR_FUN_110c228d8;
  plStack_358 = plStack_4e8;
  ppuStack_360 = ppuStack_4f0;
  if (plStack_4e8 != (long *)0x0) {
    plVar9 = plStack_4e8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plStack_320 = plVar8;
  if ((long)uStack_4d0 < 0) {
    func_0x000107c3192c(&ppppuStack_350,ppppuStack_4e0,uStack_4d8);
  }
  else {
    uStack_348 = uStack_4d8;
    ppppuStack_350 = ppppuStack_4e0;
    uStack_340 = uStack_4d0;
  }
  pcStack_3b0 = FUN_10a84b22c;
  ppuStack_3a8 = &PTR_FUN_110c228f8;
  plVar8 = (long *)0x70;
  __Znwm();
  *plVar8 = (long)ppuStack_1b8;
  plVar8[1] = (long)ppuStack_1b0;
  plVar8[2] = (long)plStack_1a8;
  if (plStack_1a8 != (long *)0x0) {
    plVar9 = plStack_1a8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if ((long)auStack_190[0] < 0) {
    func_0x000107c3192c(plVar8 + 3,ppppuStack_1a0,uStack_198);
  }
  else {
    plVar8[5] = auStack_190[0];
    plVar8[4] = uStack_198;
    plVar8[3] = (long)ppppuStack_1a0;
  }
  plVar8[6] = auStack_190[1];
  (*(code *)apuStack_180[0][3])(plVar8 + 7,apuStack_180);
  plStack_3a0 = plVar8;
  FUN_10a81e2d4(&pcStack_b0,&uStack_330,&pcStack_370,&pcStack_3b0);
  *plVar20 = (long)pcStack_b0;
  (**(code **)*plVar19)(plVar19);
  (*(code *)ppuStack_a8[2])(plVar19,&ppuStack_a8);
  (*(code *)*ppuStack_a8)(&ppuStack_a8);
  (*(code *)*ppuStack_3a8)(&ppuStack_3a8);
  (*(code *)*ppuStack_368)(&ppuStack_368);
  (*(code *)*ppuStack_328)(&ppuStack_328);
  FUN_10a822448(&ppuStack_2f0);
  (*(code *)*apuStack_180[0])(apuStack_180);
  if ((long)auStack_190[0] < 0) {
    __ZdlPv(ppppuStack_1a0);
  }
  plVar9 = plStack_1a8;
  if (plStack_1a8 != (long *)0x0) {
    plVar19 = plStack_1a8 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_1a8 + 0x10))(plStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if ((long)uStack_4d0 < 0) {
    __ZdlPv(ppppuStack_4e0);
  }
  plVar9 = plStack_4e8;
  if (plStack_4e8 != (long *)0x0) {
    plVar19 = plStack_4e8 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_4e8 + 0x10))(plStack_4e8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  (**(code **)pcStack_2d0)(&pcStack_2d0);
  pcVar10 = pcStack_2e0;
  if (pcStack_2e0 != (code *)0x0) {
    pcVar12 = pcStack_2e0 + 8;
    do {
      lVar15 = *(long *)pcVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
      if (bVar4) {
        *(long *)pcVar12 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*(long *)pcStack_2e0 + 0x10))(pcStack_2e0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar10);
    }
  }
  pcVar10 = pcStack_4b8;
  if (pcStack_4b8 != (code *)0x0) {
    pcVar12 = pcStack_4b8 + 8;
    do {
      lVar15 = *(long *)pcVar12;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar12,0x10);
      if (bVar4) {
        *(long *)pcVar12 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*(long *)pcStack_4b8 + 0x10))(pcStack_4b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar10);
    }
  }
  func_0x00010a82269c(&uStack_4b0);
  func_0x0001098d32c0(&ppuStack_498);
  plVar9 = plStack_1c0;
  if (plStack_1c0 != (long *)0x0) {
    plVar19 = plStack_1c0 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_1c0 + 0x10))(plStack_1c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  (*(code *)*apuStack_200[0])(apuStack_200);
  (*(code *)*apuStack_240[0])(apuStack_240);
  plVar9 = plStack_250;
  if (plStack_250 != (long *)0x0) {
    plVar19 = plStack_250 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_250 + 0x10))(plStack_250);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  ppuVar16 = ppuStack_260;
  if (ppuStack_260 != (undefined **)0x0) {
    ppuVar22 = ppuStack_260 + 1;
    do {
      puVar18 = *ppuVar22;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar22,0x10);
      if (bVar4) {
        *ppuVar22 = puVar18 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar18 == (undefined *)0x0) {
      (**(code **)(*ppuStack_260 + 0x10))(ppuStack_260);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar16);
    }
  }
  if (cStack_279 < '\0') {
    __ZdlPv(auStack_290[0]);
  }
  plVar9 = plStack_468;
  if (plStack_468 != (long *)0x0) {
    plVar19 = plStack_468 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_468 + 0x10))(plStack_468);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  plVar9 = plStack_458;
  if (plStack_458 != (long *)0x0) {
    plVar19 = plStack_458 + 1;
    do {
      lVar15 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = lVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*plStack_458 + 0x10))(plStack_458);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  if ((long)uStack_440 < 0) {
    __ZdlPv(ppppuStack_450);
  }
  (*(code *)*ppuStack_428)(&ppuStack_428);
  pppuVar13 = &ppuStack_3e8;
  (*(code *)*ppuStack_3e8)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010a084504(plVar8);
  func_0x00010a82266c(&ppuStack_4f0);
  (**(code **)pcStack_2d0)(&pcStack_2d0);
  FUN_10a05bd88((ulong)&ppuStack_2f0 | 8);
  FUN_10a05bd88(&pcStack_4c0);
  func_0x00010a82269c(&uStack_4b0);
  func_0x0001098d32c0(&ppuStack_498);
  func_0x00010a82271c(auStack_290);
  func_0x00010a084504(&ppuStack_470);
  FUN_10a84832c(&plStack_460);
  if ((long)uStack_440 < 0) {
    __ZdlPv(ppppuStack_450);
  }
  (*(code *)*ppuStack_428)(&ppuStack_428);
  (*(code *)*ppuStack_3e8)(&ppuStack_3e8);
  FUN_10a71426c(pppuVar21);
  func_0x00010a84c20c(param_1 + 0x17);
  func_0x00010a05a86c(param_1 + 0x15);
  ppuVar16 = param_1[0x13];
  param_1[0x13] = (undefined **)0x0;
  if (ppuVar16 != (undefined **)0x0) {
    func_0x00010a84c1d4();
  }
  if (*(char *)(param_1 + 0x12) == '\x01') {
    FUN_10a839194(param_1 + 0xd);
  }
  ppuVar16 = param_1[5];
  param_1[5] = (undefined **)0x0;
  if (ppuVar16 != (undefined **)0x0) {
    (**(code **)(*ppuVar16 + 8))();
  }
  FUN_10a0772f0(pppuVar17);
  __Unwind_Resume();
  *pppuVar13 = &PTR_FUN_110c20ae8;
  FUN_10a71426c(pppuVar13 + 0x1a);
  func_0x00010a84c20c(pppuVar13 + 0x17);
  func_0x00010a05a86c(pppuVar13 + 0x15);
  ppuVar16 = pppuVar13[0x13];
  pppuVar13[0x13] = (undefined **)0x0;
  if (ppuVar16 != (undefined **)0x0) {
    func_0x00010a84c1d4();
  }
  if (*(char *)(pppuVar13 + 0x12) == '\x01') {
    FUN_10a839194(pppuVar13 + 0xd);
  }
  ppuVar16 = pppuVar13[5];
  pppuVar13[5] = (undefined **)0x0;
  if (ppuVar16 != (undefined **)0x0) {
    (**(code **)(*ppuVar16 + 8))();
  }
  FUN_10a0772f0(pppuVar13 + 3);
  return pppuVar13;
}



/* Entry: 10a825c50; end: 10a825cd3;  */

undefined8 * FUN_10a825c50(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110c20ae8;
  FUN_10a71426c(param_1 + 0x1a);
  func_0x00010a84c20c(param_1 + 0x17);
  func_0x00010a05a86c(param_1 + 0x15);
  lVar1 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar1 != 0) {
    func_0x00010a84c1d4();
  }
  if (*(char *)(param_1 + 0x12) == '\x01') {
    FUN_10a839194(param_1 + 0xd);
  }
  plVar2 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a0772f0(param_1 + 3);
  return param_1;
}



/* Entry: 10a825cd4; end: 10a825cd7;  */

undefined8 * FUN_10a825cd4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110c20ae8;
  FUN_10a71426c(param_1 + 0x1a);
  func_0x00010a84c20c(param_1 + 0x17);
  func_0x00010a05a86c(param_1 + 0x15);
  lVar1 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar1 != 0) {
    func_0x00010a84c1d4();
  }
  if (*(char *)(param_1 + 0x12) == '\x01') {
    FUN_10a839194(param_1 + 0xd);
  }
  plVar2 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a0772f0(param_1 + 3);
  return param_1;
}



/* Entry: 10a825cd8; end: 10a825ceb;  */

void FUN_10a825cd8(void)

{
  FUN_10a825c50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a825cec; end: 10a825df7;  */

void FUN_10a825cec(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  uStack_40 = 0;
  plStack_38 = (long *)0x0;
  FUN_10a825df8(*(undefined8 *)(param_2 + 0x18),&uStack_40);
  lVar4 = 0xe0;
  __Znwm();
  FUN_10a824c24();
  if (*(long *)(param_2 + 0x28) != 0) {
    FUN_10a82603c(&uStack_48,*(long *)(param_2 + 0x28),param_3);
    plVar5 = *(long **)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = uStack_48;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = plStack_38;
  *param_1 = lVar4;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a825df8; end: 10a82603b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a825df8(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined8 ******ppppppuVar1;
  ulong *puVar2;
  long *plVar3;
  code ****ppppcVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined ***pppuVar8;
  undefined8 ******ppppppuVar9;
  code *******pppppppcVar10;
  code ***pppcVar11;
  code ******ppppppcVar12;
  code *******pppppppcVar13;
  code *******pppppppcVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *******pppppppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  code *****pppppcVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 *****pppppuVar23;
  code ******ppppppcVar24;
  ulong uVar25;
  code *******pppppppcVar26;
  code *******pppppppcVar27;
  long *plVar28;
  undefined **ppuVar29;
  undefined8 *******pppppppuVar30;
  code ******ppppppcStack_428;
  undefined8 uStack_420;
  undefined7 uStack_418;
  char cStack_411;
  code ******ppppppcStack_410;
  code ******ppppppcStack_408;
  char cStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  code ******ppppppcStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long *plStack_3a0;
  long *plStack_398;
  code ******ppppppcStack_390;
  code ******ppppppcStack_388;
  code ******ppppppcStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  code *******pppppppcStack_368;
  long *plStack_358;
  long *plStack_350;
  code ******ppppppcStack_348;
  undefined **ppuStack_340;
  long *plStack_338;
  long *plStack_330;
  code ******ppppppcStack_328;
  undefined8 uStack_320;
  long lStack_318;
  code ******ppppppcStack_308;
  undefined **ppuStack_300;
  undefined8 *puStack_2f8;
  long lStack_2c8;
  code *******pppppppcStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_248;
  code *******pppppppcStack_240;
  code ****ppppcStack_238;
  code *******pppppppcStack_230;
  code *******pppppppcStack_228;
  code *******pppppppcStack_220;
  long *plStack_218;
  char cStack_209;
  long lStack_208;
  undefined **ppuStack_200;
  code **ppcStack_1f8;
  code *******pppppppcStack_1f0;
  undefined8 *******pppppppuStack_1e8;
  undefined **ppuStack_1e0;
  code *******pppppppcStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined8 ******ppppppuStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  long lStack_1b0;
  code *******pppppppcStack_1a8;
  undefined8 uStack_1a0;
  code *******pppppppcStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  code *pcStack_178;
  undefined **ppuStack_170;
  long *plStack_168;
  long lStack_138;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 *******pppppppuStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 *******pppppppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuStack_d8 = (undefined8 *******)0x10a84c264;
  ppuStack_d0 = &PTR_FUN_110c22ab0;
  uStack_c8 = param_2;
  if (param_1 == 0) {
    pppppppuStack_98 = (undefined8 *******)0x0;
    pppppppuVar30 = &pppppppuStack_98;
    FUN_10a2e9e64(&pppppppuStack_d8);
  }
  else if (param_3 == (undefined **)0x0) {
    FUN_10a714448(&pppppppuStack_98,param_1);
    pppppppuVar30 = &pppppppuStack_98;
    FUN_10a7143bc(&pppppppuStack_d8);
    if (ppuStack_90 != (undefined **)0x0) {
      ppuVar18 = ppuStack_90 + 1;
      do {
        puVar21 = *ppuVar18;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
        if (bVar6) {
          *ppuVar18 = puVar21 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_10a825f88:
      ppuVar18 = ppuStack_90;
      if (puVar21 == (undefined *)0x0) {
        (**(code **)(*ppuStack_90 + 0x10))(ppuStack_90);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar18);
      }
    }
  }
  else {
    pppppppuVar17 = *(undefined8 ********)(param_1 + 0x40);
    ppuVar18 = *(undefined ***)(param_1 + 0x48);
    if (*(char *)(param_3 + 0x17) == '\x01') {
      pppppppuStack_98 = (undefined8 *******)0x10a84c264;
      ppuStack_90 = &PTR_FUN_110c22ab0;
      uStack_88 = param_2;
      FUN_10a069d9c(param_3,pppppppuVar17,ppuVar18,&pppppppuStack_98);
      pppppppuVar30 = pppppppuVar17;
      ppuVar29 = ppuVar18;
    }
    else {
      ppuVar29 = param_3 + 0x11;
      ppuVar19 = param_3;
      pppppppuStack_98 = pppppppuVar17;
      ppuStack_90 = ppuVar18;
      func_0x00010a35bf90(ppuVar29,&pppppppuStack_98);
      pppuVar8 = &ppuStack_90;
      pppppppuVar30 = &pppppppuStack_98;
      if (ppuVar29 != (undefined **)0x0) {
        pppuVar8 = (undefined ***)(ppuVar29 + 5);
        pppppppuVar30 = (undefined8 *******)(ppuVar29 + 4);
      }
      ppuVar29 = *pppuVar8;
      pppppppuVar30 = (undefined8 *******)*pppppppuVar30;
      if (pppppppuVar17 == pppppppuVar30 && ppuVar18 == ppuVar29) {
        FUN_10a714448(&pppppppuStack_98,param_1);
        pppppppuVar30 = &pppppppuStack_98;
        FUN_10a7143bc(&pppppppuStack_d8);
        param_3 = ppuVar19;
        if (ppuStack_90 != (undefined **)0x0) {
          ppuVar18 = ppuStack_90 + 1;
          do {
            puVar21 = *ppuVar18;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(ppuVar18,0x10);
            if (bVar6) {
              *ppuVar18 = puVar21 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto LAB_10a825f88;
        }
        goto LAB_10a825fa4;
      }
      pppppppuStack_98 = pppppppuStack_d8;
      (*(code *)ppuStack_d0[3])(&ppuStack_90,&ppuStack_d0);
      FUN_10a069d9c(param_3,pppppppuVar30,ppuVar29,&pppppppuStack_98);
    }
    (*(code *)*ppuStack_90)(&ppuStack_90);
    param_3 = ppuVar29;
  }
LAB_10a825fa4:
  pppuVar8 = &ppuStack_d0;
  (*(code *)*ppuStack_d0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a0772f0(&pppppppuStack_98);
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  __Unwind_Resume();
  puStack_f0 = &stack0xfffffffffffffff0;
  pcStack_e8 = FUN_10a82603c;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1b0 = 0;
  pppppppcStack_1a8 = (code *******)0x0;
  ppppppuStack_1c0 = (undefined8 ******)0x0;
  ppppppuStack_1b8 = (undefined8 ******)0x0;
  ppppppuVar9 = pppppppuVar30[3];
  if (ppppppuVar9 == (undefined8 ******)0x0) {
LAB_10a82615c:
    ppppppuVar9 = (undefined8 ******)0x0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    ppppppuStack_1b8 = ppppppuVar9;
    if (ppppppuVar9 == (undefined8 ******)0x0) goto LAB_10a82615c;
    ppppppuStack_1c0 = pppppppuVar30[2];
    pcStack_178 = FUN_10a84d814;
    ppuStack_170 = &PTR_FUN_110c22cb8;
    plStack_168 = &lStack_1b0;
    if (ppppppuStack_1c0 != (undefined8 ******)0x0) {
      FUN_10a82c75c(&uStack_1a0);
      plStack_188 = (long *)pppppppcStack_198;
      uStack_190 = uStack_1a0;
      uStack_1a0 = 0;
      pppppppcStack_198 = (code *******)0x0;
      (*pcStack_178)(&uStack_190,&pcStack_178);
      plVar28 = plStack_188;
      if (plStack_188 != (long *)0x0) {
        plVar15 = plStack_188 + 1;
        do {
          lVar22 = *plVar15;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *plVar15 = lVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plStack_188 + 0x10))(plStack_188);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
        }
      }
      pppppppcVar10 = pppppppcStack_198;
      ppppppuVar9 = ppppppuStack_1b8;
      if (pppppppcStack_198 != (code *******)0x0) {
        plVar28 = (long *)(pppppppcStack_198 + 1);
        do {
          lVar22 = *plVar28;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar6) {
            *plVar28 = lVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar22 == 0) {
          (**(code **)((long)*pppppppcStack_198 + 0x10))(pppppppcStack_198);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar10);
          ppppppuVar9 = ppppppuStack_1b8;
        }
      }
      goto LAB_10a826184;
    }
  }
  plStack_168 = &lStack_1b0;
  ppuStack_170 = &PTR_FUN_110c22cb8;
  pcStack_178 = FUN_10a84d814;
  uStack_190 = 0;
  FUN_10a2e9e64(&pcStack_178,&uStack_190);
LAB_10a826184:
  (*(code *)*ppuStack_170)(&ppuStack_170);
  if (ppppppuVar9 != (undefined8 ******)0x0) {
    ppppppuVar1 = ppppppuVar9 + 1;
    do {
      pppppuVar23 = *ppppppuVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
      if (bVar6) {
        *ppppppuVar1 = (undefined8 *****)((long)pppppuVar23 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (pppppuVar23 == (undefined8 *****)0x0) {
      (*(code *)(*ppppppuVar9)[2])(ppppppuVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar9);
    }
  }
  uStack_1a0 = 0;
  pppppppcStack_198 = (code *******)0x0;
  pcStack_178 = FUN_10a84d8f8;
  ppuStack_170 = &PTR_FUN_110c22cd8;
  plStack_168 = &uStack_1a0;
  if (*(long *)(lStack_1b0 + 0x228) == 0) {
    uStack_190 = 0;
    FUN_10a2e9e64(&pcStack_178,&uStack_190);
  }
  else {
    FUN_10a2f3aa8(&uStack_190);
    FUN_10a2f3a1c(&pcStack_178,&uStack_190);
    plVar28 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      plVar15 = plStack_188 + 1;
      do {
        lVar22 = *plVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *plVar15 = lVar22 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*plStack_188 + 0x10))(plStack_188);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
      }
    }
  }
  (*(code *)*ppuStack_170)(&ppuStack_170);
  pppppppcVar10 = (code *******)0x20;
  __Znwm();
  ppppppuVar9 = pppppppuVar30[1];
  pppppppcVar27 = pppppppcVar10;
  FUN_10a82c354();
  *pppuVar8 = (undefined **)pppppppcVar10;
  pppppppcVar26 = pppppppcStack_198;
  if (pppppppcStack_198 != (code *******)0x0) {
    pppppppcVar13 = pppppppcStack_198 + 1;
    do {
      ppppppcVar24 = *pppppppcVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar13,0x10);
      if (bVar6) {
        *pppppppcVar13 = (code ******)((long)ppppppcVar24 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppppcVar24 == (code ******)0x0) {
      (*(code *)(*pppppppcStack_198)[2])(pppppppcStack_198);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppcVar27 = pppppppcVar26;
    }
  }
  pppppppcVar26 = pppppppcStack_1a8;
  pppppppcStack_1d8 = pppppppcVar27;
  if (pppppppcStack_1a8 != (code *******)0x0) {
    pppppppcVar27 = pppppppcStack_1a8 + 1;
    do {
      ppppppcVar24 = *pppppppcVar27;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar27,0x10);
      if (bVar6) {
        *pppppppcVar27 = (code ******)((long)ppppppcVar24 + -1);
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (ppppppcVar24 == (code ******)0x0) {
      (*(code *)(*pppppppcStack_1a8)[2])(pppppppcStack_1a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppcStack_1d8 = pppppppcVar26;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a052384(&uStack_190);
  FUN_10a2f39c4(&uStack_1a0);
  (*(code *)*ppuStack_170)(pppppppcVar10);
  FUN_10a2f39c4(&ppppppuStack_1c0);
  FUN_10a2f39c4(&lStack_1b0);
  pppppppcVar27 = pppppppcStack_1d8;
  __Unwind_Resume();
  ppuStack_200 = &PTR_FUN_110c22cb8;
  pcStack_1c8 = FUN_10a8263c4;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcVar12 = (code ******)ppppppuVar9[1];
  ppppppcVar24 = (code ******)*ppppppuVar9;
  *(undefined1 *)(pppppppcVar27 + 9) = *(undefined1 *)(ppppppuVar9 + 2);
  pppppppcVar27[8] = ppppppcVar12;
  pppppppcVar27[7] = ppppppcVar24;
  pppppppcVar26 = pppppppcVar27;
  ppcStack_1f8 = &pcStack_178;
  pppppppcStack_1f0 = pppppppcVar10;
  pppppppuStack_1e8 = pppppppuVar30;
  ppuStack_1e0 = param_3;
  ppuStack_1d0 = &puStack_f0;
  FUN_10a826990();
  if ((*(char *)(pppppppcVar27 + 9) == '\x01') && (*(char *)(pppppppcVar27 + 0xc) == '\x01')) {
    pppppppcVar26 = pppppppcVar27 + 0x14;
    func_0x000109472d58(pppppppcVar26,pppppppcVar27 + 10,pppppppcVar27 + 7);
    *(int *)((long)pppppppcVar27 + 0x34) = (int)(double)ppppppcVar24;
    if (*(int *)(pppppppcVar27 + 6) < (int)(double)ppppppcVar24) {
      ppppppcVar24 = pppppppcVar27[1];
      pppppppcVar26 = (code *******)&pppppppcStack_220;
      func_0x000107c2b054(pppppppcVar26,&UNK_10f67b12a);
      if (ppppppcVar24 != (code ******)0x0) {
        pppppppcVar26 = (code *******)ppppppcVar24[0x11b];
        func_0x000107c2b054(&pppppppcStack_260,"true");
        FUN_10a76bdb0(pppppppcVar26,&pppppppcStack_220,&pppppppcStack_260);
        if (uStack_250 < 0) {
          pppppppcVar26 = pppppppcStack_260;
          __ZdlPv();
        }
      }
      if (cStack_209 < '\0') {
        pppppppcVar26 = pppppppcStack_220;
        __ZdlPv();
      }
    }
  }
  pppppppcVar13 = pppppppcVar27 + 0x17;
  if ((*pppppppcVar13 != (code ******)0x0) && (((uint)(**pppppppcVar13)[2] >> 1 & 1) != 0)) {
    ppppppcVar24 = *pppppppcVar13;
    func_0x0001092af8bc(ppppppcVar24);
    pppppcVar20 = *ppppppcVar24;
    if (((ulong)pppppcVar20[0x15] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10a8267bc);
      (*pcVar7)();
    }
    ppppcVar4 = pppppcVar20[0x13];
    pppppppcVar10 = (code *******)pppppcVar20[0x14];
    if (pppppppcVar10 != (code *******)0x0) {
      pppppppcVar26 = pppppppcVar10 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar26,0x10);
        if (bVar6) {
          *pppppppcVar26 = (code ******)((long)*pppppppcVar26 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    ppppcStack_238 = ppppcVar4;
    pppppppcStack_230 = pppppppcVar10;
    FUN_10a826f64(pppppppcVar13);
    pppcVar11 = ppppcVar4[0x1c];
    if ((pppcVar11 == (code ***)0x0) ||
       (___dynamic_cast(pppcVar11,&PTR_DAT_110c67cb0,&PTR_DAT_110c62f00,0),
       pppcVar11 == (code ***)0x0)) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f67b144,&UNK_10f67b18a,0xcd,&UNK_10f67b1f1);
      }
      func_0x00010a826fc0();
      pppppppcVar26 = pppppppcVar27;
    }
    else {
      FUN_10a84cd20(&pppppppcStack_220,pppppppcVar27[1],pppppppcVar27[3] + 0x1d);
      (*(code *)(*pppppppcStack_220)[0x13])(pppppppcStack_220,2);
      FUN_10a8271c4(&lStack_248,pppppppcVar27[1],&pppppppcStack_220);
      *(undefined1 *)(lStack_248 + 8) = 1;
      if (plStack_218 != (long *)0x0) {
        plVar28 = plStack_218 + 1;
        do {
          lVar22 = *plVar28;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar6) {
            *plVar28 = lVar22 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar22 == 0) {
          (**(code **)(*plStack_218 + 0x10))(plStack_218);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_218);
        }
      }
      ppppppcVar24 = pppppppcVar27[0x1a];
      FUN_10a08d2e0(&pppppppcStack_260,pppcVar11 + 0x1f);
      FUN_10a6e9fe4(ppppppcVar24,&pppppppcStack_260);
      if (uStack_250._7_1_ < '\0') {
        __ZdlPv(pppppppcStack_260);
      }
      plVar28 = *(long **)(lStack_248 + 0xe0);
      FUN_10a08d2e0(&pppppppcStack_220,pppcVar11 + 0x1f);
      pppppppcStack_260 = (code *******)0x0;
      uStack_258 = 0;
      uStack_250 = 0;
      FUN_10a102f04(&pppppppcStack_260,&pppppppcStack_220,&lStack_208,1);
      (**(code **)(*plVar28 + 0xa8))(plVar28,&pppppppcStack_260);
      pppppppcVar10 = (code *******)&pppppppcStack_228;
      pppppppcStack_228 = (code *******)&pppppppcStack_260;
      FUN_10a0426d8(pppppppcVar10);
      if (cStack_209 < '\0') {
        pppppppcVar10 = pppppppcStack_220;
        __ZdlPv(pppppppcStack_220);
      }
      func_0x0001095be5f4();
      (**(code **)(**(long **)(lStack_248 + 0xe0) + 0xa0))
                (*(long **)(lStack_248 + 0xe0),pppppppcVar10 + 1,pppppppcVar10 + 4);
      *(undefined1 *)((long)pppppppcVar27 + 0xc9) = 1;
      ppppppcVar24 = pppppppcVar27[5];
      pppppppcVar27[5] = (code ******)0x0;
      if (ppppppcVar24 != (code ******)0x0) {
        (*(code *)(*ppppppcVar24)[1])();
      }
      ppppppcVar24 = (code ******)0x20;
      __Znwm();
      FUN_10a82c354();
      ppppppcVar12 = pppppppcVar27[5];
      pppppppcVar27[5] = ppppppcVar24;
      if (ppppppcVar12 != (code ******)0x0) {
        (*(code *)(*ppppppcVar12)[1])();
      }
      pppppppcVar26 = (code *******)pppppppcVar27[0x1a];
      FUN_10a08d2e0(&pppppppcStack_260,pppcVar11 + 0x1f);
      FUN_10a6ea044(pppppppcVar26,&pppppppcStack_260);
      if (uStack_250 < 0) {
        pppppppcVar26 = pppppppcStack_260;
        __ZdlPv();
      }
      pppppppcVar10 = pppppppcStack_230;
      if (pppppppcStack_240 != (code *******)0x0) {
        pppppppcVar27 = pppppppcStack_240 + 1;
        do {
          ppppppcVar24 = *pppppppcVar27;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar27,0x10);
          if (bVar6) {
            *pppppppcVar27 = (code ******)((long)ppppppcVar24 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (ppppppcVar24 == (code ******)0x0) {
          (*(code *)(*pppppppcStack_240)[2])(pppppppcStack_240);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppppcVar26 = pppppppcStack_240;
          pppppppcVar10 = pppppppcStack_230;
        }
      }
    }
    if (pppppppcVar10 != (code *******)0x0) {
      pppppppcVar27 = pppppppcVar10 + 1;
      do {
        ppppppcVar24 = *pppppppcVar27;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(pppppppcVar27,0x10);
        if (bVar6) {
          *pppppppcVar27 = (code ******)((long)ppppppcVar24 + -1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (ppppppcVar24 == (code ******)0x0) {
        (*(code *)(*pppppppcVar10)[2])(pppppppcVar10);
        pppppppcVar26 = pppppppcVar10;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_208) {
    ___stack_chk_fail();
    if (uStack_250 < 0) {
      __ZdlPv(pppppppcStack_260);
    }
    if (cStack_209 < '\0') {
      __ZdlPv(pppppppcStack_220);
    }
    pppppppcVar13 = pppppppcVar26;
    __Unwind_Resume();
    lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppppcVar27 = pppppppcVar13;
    if ((*(char *)(pppppppcVar13 + 0x19) == '\x01') && (*(char *)(pppppppcVar13 + 9) == '\x01')) {
      pppppppcVar27 = (code *******)pppppppcVar13[0x13];
      pppppppcVar14 = pppppppcVar13;
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000109472f14(pppppppcVar27,pppppppcVar13 + 7,pppppppcVar14);
      if ((int)pppppppcVar27 != 0) {
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          func_0x00010ae06f08(1,4,&UNK_10f67b144,&UNK_10f67b282,0x110,&UNK_10f67b2ed);
        }
        func_0x0001094735c0(&ppppppcStack_428,pppppppcVar13[0x13] + 6);
        if (cStack_3d8 == '\x01') {
          pppppppcVar13[0xb] = ppppppcStack_408;
          pppppppcVar13[10] = ppppppcStack_410;
          if (((ulong)pppppppcVar13[0xc] & 1) == 0) {
            *(undefined1 *)(pppppppcVar13 + 0xc) = 1;
          }
          plVar28 = (long *)0x20;
          __Znwm();
          plVar28[1] = 0;
          plVar28[2] = 0;
          *plVar28 = (long)&PTR_DAT_110c22b20;
          plStack_358 = plVar28 + 3;
          *plStack_358 = 0;
          plVar15 = (long *)0x20;
          plStack_350 = plVar28;
          __Znwm();
          plVar15[1] = 0;
          plVar15[2] = 0;
          *plVar15 = (long)&PTR_FUN_110c22b70;
          plStack_3a0 = plVar15 + 3;
          *plStack_3a0 = 0;
          plStack_398 = plVar15;
          FUN_10a827088(pppppppcVar13 + 0x17,&plStack_3a0);
          plVar28 = plStack_398;
          if (plStack_398 != (long *)0x0) {
            plVar15 = plStack_398 + 1;
            do {
              lVar22 = *plVar15;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = lVar22 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_398 + 0x10))(plStack_398);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
            }
          }
          FUN_10a8270ec(&plStack_3a0);
          plVar28 = plStack_358;
          FUN_10a838ed0(pppppppcVar13[0x17],plStack_358,&plStack_3a0);
          if (plStack_398 != (long *)0x0) {
            func_0x0001092b4274(&plStack_398);
          }
          if (plStack_3a0 != (long *)0x0) {
            puVar2 = (ulong *)(plStack_3a0 + 1);
            do {
              uVar25 = *puVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar6) {
                *puVar2 = uVar25 - 4;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((uVar25 & 0x1fffffffc) == 4) {
              do {
                uVar25 = *puVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar6) {
                  *puVar2 = uVar25 - 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (uVar25 - 1 == 0) {
                (**(code **)(*plStack_3a0 + 8))();
              }
            }
          }
          plVar15 = plStack_350;
          plStack_3a0 = plVar28;
          plStack_398 = plStack_350;
          if (plStack_350 != (long *)0x0) {
            plVar3 = plStack_350 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *plVar3 = *plVar3 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          ppppppcStack_388 = pppppppcVar13[0x18];
          ppppppcStack_390 = pppppppcVar13[0x17];
          if (pppppppcVar13[0x18] != (code ******)0x0) {
            ppppppcVar24 = pppppppcVar13[0x18] + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar24,0x10);
              if (bVar6) {
                *ppppppcVar24 = (code *****)((long)*ppppppcVar24 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (cStack_411 < '\0') {
            func_0x000107c3192c(&ppppppcStack_380,ppppppcStack_428,uStack_420);
          }
          else {
            uStack_378 = uStack_420;
            ppppppcStack_380 = ppppppcStack_428;
            uStack_370 = CONCAT17(cStack_411,uStack_418);
          }
          plStack_3d0 = plVar28;
          plStack_3c8 = plVar15;
          if (plVar15 != (long *)0x0) {
            plVar15 = plVar15 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          pppppppcStack_368 = pppppppcVar13;
          if (cStack_411 < '\0') {
            func_0x000107c3192c(&ppppppcStack_3c0,ppppppcStack_428,uStack_420);
          }
          else {
            uStack_3b8 = uStack_420;
            ppppppcStack_3c0 = ppppppcStack_428;
            uStack_3b0 = CONCAT17(cStack_411,uStack_418);
          }
          ppppppcVar24 = pppppppcVar13[1];
          ppppppcStack_308 = (code ******)FUN_10a84c78c;
          ppuStack_300 = &PTR_DAT_110c22be8;
          puVar16 = (undefined8 *)0x40;
          __Znwm();
          puVar16[1] = plStack_398;
          *puVar16 = plStack_3a0;
          if (plStack_398 != (long *)0x0) {
            plVar28 = plStack_398 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar6) {
                *plVar28 = *plVar28 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          puVar16[3] = ppppppcStack_388;
          puVar16[2] = ppppppcStack_390;
          if (ppppppcStack_388 != (code ******)0x0) {
            ppppppcVar12 = ppppppcStack_388 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar12,0x10);
              if (bVar6) {
                *ppppppcVar12 = (code *****)((long)*ppppppcVar12 + 1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          if (uStack_370 < 0) {
            func_0x000107c3192c(puVar16 + 4,ppppppcStack_380,uStack_378);
          }
          else {
            puVar16[5] = uStack_378;
            puVar16[4] = ppppppcStack_380;
            puVar16[6] = uStack_370;
          }
          puVar16[7] = pppppppcStack_368;
          ppppppcStack_348 = (code ******)FUN_10a84caa8;
          ppuStack_340 = &PTR_FUN_110c22c08;
          plStack_330 = plStack_3c8;
          plStack_338 = plStack_3d0;
          if (plStack_3c8 != (long *)0x0) {
            plVar28 = plStack_3c8 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar6) {
                *plVar28 = *plVar28 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          pppppppcVar10 = &ppppppcStack_348;
          pppppppcVar26 = &ppppppcStack_308;
          puStack_2f8 = puVar16;
          if (uStack_3b0 < 0) {
            func_0x000107c3192c(&ppppppcStack_328,ppppppcStack_3c0,uStack_3b8);
          }
          else {
            uStack_320 = uStack_3b8;
            ppppppcStack_328 = ppppppcStack_3c0;
            lStack_318 = uStack_3b0;
          }
          FUN_10a822788(ppppppcVar24,&ppppppcStack_428,&ppppppcStack_308,&ppppppcStack_348,
                        pppppppcVar13[0x15]);
          (*(code *)*ppuStack_340)(&ppuStack_340);
          (*(code *)*ppuStack_300)(&ppuStack_300);
          if (uStack_3b0._7_1_ < '\0') {
            __ZdlPv(ppppppcStack_3c0);
          }
          plVar28 = plStack_3c8;
          if (plStack_3c8 != (long *)0x0) {
            plVar15 = plStack_3c8 + 1;
            do {
              lVar22 = *plVar15;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = lVar22 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_3c8 + 0x10))(plStack_3c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
            }
          }
          if (uStack_370._7_1_ < '\0') {
            __ZdlPv(ppppppcStack_380);
          }
          ppppppcVar24 = ppppppcStack_388;
          if (ppppppcStack_388 != (code ******)0x0) {
            ppppppcVar12 = ppppppcStack_388 + 1;
            do {
              pppppcVar20 = *ppppppcVar12;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar12,0x10);
              if (bVar6) {
                *ppppppcVar12 = (code *****)((long)pppppcVar20 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (pppppcVar20 == (code *****)0x0) {
              (*(code *)(*ppppppcStack_388)[2])(ppppppcStack_388);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar24);
            }
          }
          plVar28 = plStack_398;
          if (plStack_398 != (long *)0x0) {
            plVar15 = plStack_398 + 1;
            do {
              lVar22 = *plVar15;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = lVar22 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_398 + 0x10))(plStack_398);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
            }
          }
          plVar28 = plStack_350;
          if (plStack_350 != (long *)0x0) {
            plVar15 = plStack_350 + 1;
            do {
              lVar22 = *plVar15;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = lVar22 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar22 == 0) {
              (**(code **)(*plStack_350 + 0x10))(plStack_350);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar28);
            }
          }
        }
        pppppppcVar27 = &ppppppcStack_428;
        FUN_10a838e84();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
      ___stack_chk_fail();
      FUN_10a84c600(pppppppcVar10 + 2);
      (*(code *)*ppuStack_300)(pppppppcVar26 + 1);
      FUN_10a82715c(&plStack_3d0);
      func_0x00010a82718c(&plStack_3a0);
      FUN_10a84c600(&plStack_358);
      FUN_10a838e84(&ppppppcStack_428);
      __Unwind_Resume();
      ppppppcVar24 = pppppppcVar27[1];
      *pppppppcVar27 = (code ******)0x0;
      pppppppcVar27[1] = (code ******)0x0;
      if (ppppppcVar24 != (code ******)0x0) {
        ppppppcVar12 = ppppppcVar24 + 1;
        do {
          pppppcVar20 = *ppppppcVar12;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppppcVar12,0x10);
          if (bVar6) {
            *ppppppcVar12 = (code *****)((long)pppppcVar20 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (pppppcVar20 == (code *****)0x0) {
          (*(code *)(*ppppppcVar24)[2])(ppppppcVar24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppppppcVar24);
          return;
        }
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10a82603c; end: 10a8263c3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a82603c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  long *plVar2;
  code ****ppppcVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  code *******pppppppcVar8;
  code ***pppcVar9;
  code ******ppppppcVar10;
  code *******pppppppcVar11;
  code *******pppppppcVar12;
  long *plVar13;
  undefined8 *puVar14;
  code *****pppppcVar15;
  long lVar16;
  code ******ppppppcVar17;
  ulong uVar18;
  code *******pppppppcVar19;
  code *******pppppppcVar20;
  code ******ppppppcStack_348;
  undefined8 uStack_340;
  undefined7 uStack_338;
  char cStack_331;
  code ******ppppppcStack_330;
  code ******ppppppcStack_328;
  char cStack_2f8;
  long *plStack_2f0;
  long *plStack_2e8;
  code ******ppppppcStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long *plStack_2c0;
  long *plStack_2b8;
  code ******ppppppcStack_2b0;
  code ******ppppppcStack_2a8;
  code ******ppppppcStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  code *******pppppppcStack_288;
  long *plStack_278;
  long *plStack_270;
  code ******ppppppcStack_268;
  undefined **ppuStack_260;
  long *plStack_258;
  long *plStack_250;
  code ******ppppppcStack_248;
  undefined8 uStack_240;
  long lStack_238;
  code ******ppppppcStack_228;
  undefined **ppuStack_220;
  undefined8 *puStack_218;
  long lStack_1e8;
  code *******pppppppcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  code *******pppppppcStack_160;
  code ****ppppcStack_158;
  code *******pppppppcStack_150;
  code *******pppppppcStack_148;
  code *******pppppppcStack_140;
  long *plStack_138;
  char cStack_129;
  long lStack_128;
  undefined **ppuStack_120;
  code **ppcStack_118;
  code *******pppppppcStack_110;
  long lStack_108;
  undefined8 uStack_100;
  code *******pppppppcStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  code *******pppppppcStack_c8;
  undefined8 uStack_c0;
  code *******pppppppcStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  long *plStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_d0 = 0;
  pppppppcStack_c8 = (code *******)0x0;
  lStack_e0 = 0;
  plStack_d8 = (long *)0x0;
  plVar7 = *(long **)(param_2 + 0x18);
  if ((plVar7 == (long *)0x0) ||
     (__ZNSt3__119__shared_weak_count4lockEv(), plStack_d8 = plVar7, plVar7 == (long *)0x0)) {
    plVar7 = (long *)0x0;
  }
  else {
    lStack_e0 = *(long *)(param_2 + 0x10);
    pcStack_98 = FUN_10a84d814;
    ppuStack_90 = &PTR_FUN_110c22cb8;
    plStack_88 = &lStack_d0;
    if (lStack_e0 != 0) {
      FUN_10a82c75c(&uStack_c0);
      plStack_a8 = (long *)pppppppcStack_b8;
      uStack_b0 = uStack_c0;
      uStack_c0 = 0;
      pppppppcStack_b8 = (code *******)0x0;
      (*pcStack_98)(&uStack_b0,&pcStack_98);
      plVar7 = plStack_a8;
      if (plStack_a8 != (long *)0x0) {
        plVar13 = plStack_a8 + 1;
        do {
          lVar16 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      pppppppcVar8 = pppppppcStack_b8;
      plVar7 = plStack_d8;
      if (pppppppcStack_b8 != (code *******)0x0) {
        plVar13 = (long *)(pppppppcStack_b8 + 1);
        do {
          lVar16 = *plVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar5) {
            *plVar13 = lVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar16 == 0) {
          (**(code **)((long)*pppppppcStack_b8 + 0x10))(pppppppcStack_b8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppcVar8);
          plVar7 = plStack_d8;
        }
      }
      goto LAB_10a826184;
    }
  }
  plStack_88 = &lStack_d0;
  ppuStack_90 = &PTR_FUN_110c22cb8;
  pcStack_98 = FUN_10a84d814;
  uStack_b0 = 0;
  FUN_10a2e9e64(&pcStack_98,&uStack_b0);
LAB_10a826184:
  (*(code *)*ppuStack_90)(&ppuStack_90);
  if (plVar7 != (long *)0x0) {
    plVar13 = plVar7 + 1;
    do {
      lVar16 = *plVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  uStack_c0 = 0;
  pppppppcStack_b8 = (code *******)0x0;
  pcStack_98 = FUN_10a84d8f8;
  ppuStack_90 = &PTR_FUN_110c22cd8;
  plStack_88 = &uStack_c0;
  if (*(long *)(lStack_d0 + 0x228) == 0) {
    uStack_b0 = 0;
    FUN_10a2e9e64(&pcStack_98,&uStack_b0);
  }
  else {
    FUN_10a2f3aa8(&uStack_b0);
    FUN_10a2f3a1c(&pcStack_98,&uStack_b0);
    plVar7 = plStack_a8;
    if (plStack_a8 != (long *)0x0) {
      plVar13 = plStack_a8 + 1;
      do {
        lVar16 = *plVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
  }
  (*(code *)*ppuStack_90)(&ppuStack_90);
  pppppppcVar8 = (code *******)0x20;
  __Znwm();
  puVar14 = *(undefined8 **)(param_2 + 8);
  pppppppcVar20 = pppppppcVar8;
  FUN_10a82c354();
  pppppppcVar19 = pppppppcStack_b8;
  *param_1 = pppppppcVar8;
  if (pppppppcStack_b8 != (code *******)0x0) {
    pppppppcVar11 = pppppppcStack_b8 + 1;
    do {
      ppppppcVar17 = *pppppppcVar11;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar11,0x10);
      if (bVar5) {
        *pppppppcVar11 = (code ******)((long)ppppppcVar17 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppppcVar17 == (code ******)0x0) {
      (*(code *)(*pppppppcStack_b8)[2])(pppppppcStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppcVar20 = pppppppcVar19;
    }
  }
  pppppppcVar19 = pppppppcStack_c8;
  pppppppcStack_f8 = pppppppcVar20;
  if (pppppppcStack_c8 != (code *******)0x0) {
    pppppppcVar20 = pppppppcStack_c8 + 1;
    do {
      ppppppcVar17 = *pppppppcVar20;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
      if (bVar5) {
        *pppppppcVar20 = (code ******)((long)ppppppcVar17 + -1);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (ppppppcVar17 == (code ******)0x0) {
      (*(code *)(*pppppppcStack_c8)[2])(pppppppcStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppcStack_f8 = pppppppcVar19;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a052384(&uStack_b0);
  FUN_10a2f39c4(&uStack_c0);
  (*(code *)*ppuStack_90)(pppppppcVar8);
  FUN_10a2f39c4(&lStack_e0);
  FUN_10a2f39c4(&lStack_d0);
  pppppppcVar20 = pppppppcStack_f8;
  __Unwind_Resume();
  ppuStack_120 = &PTR_FUN_110c22cb8;
  pcStack_e8 = FUN_10a8263c4;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcVar10 = (code ******)puVar14[1];
  ppppppcVar17 = (code ******)*puVar14;
  *(undefined1 *)(pppppppcVar20 + 9) = *(undefined1 *)(puVar14 + 2);
  pppppppcVar20[8] = ppppppcVar10;
  pppppppcVar20[7] = ppppppcVar17;
  pppppppcVar19 = pppppppcVar20;
  ppcStack_118 = &pcStack_98;
  pppppppcStack_110 = pppppppcVar8;
  lStack_108 = param_2;
  uStack_100 = param_3;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_10a826990();
  if ((*(char *)(pppppppcVar20 + 9) == '\x01') && (*(char *)(pppppppcVar20 + 0xc) == '\x01')) {
    pppppppcVar19 = pppppppcVar20 + 0x14;
    func_0x000109472d58(pppppppcVar19,pppppppcVar20 + 10,pppppppcVar20 + 7);
    *(int *)((long)pppppppcVar20 + 0x34) = (int)(double)ppppppcVar17;
    if (*(int *)(pppppppcVar20 + 6) < (int)(double)ppppppcVar17) {
      ppppppcVar17 = pppppppcVar20[1];
      pppppppcVar19 = (code *******)&pppppppcStack_140;
      func_0x000107c2b054(pppppppcVar19,&UNK_10f67b12a);
      if (ppppppcVar17 != (code ******)0x0) {
        pppppppcVar19 = (code *******)ppppppcVar17[0x11b];
        func_0x000107c2b054(&pppppppcStack_180,"true");
        FUN_10a76bdb0(pppppppcVar19,&pppppppcStack_140,&pppppppcStack_180);
        if (uStack_170 < 0) {
          pppppppcVar19 = pppppppcStack_180;
          __ZdlPv();
        }
      }
      if (cStack_129 < '\0') {
        pppppppcVar19 = pppppppcStack_140;
        __ZdlPv();
      }
    }
  }
  pppppppcVar11 = pppppppcVar20 + 0x17;
  if ((*pppppppcVar11 != (code ******)0x0) && (((uint)(**pppppppcVar11)[2] >> 1 & 1) != 0)) {
    ppppppcVar17 = *pppppppcVar11;
    func_0x0001092af8bc(ppppppcVar17);
    pppppcVar15 = *ppppppcVar17;
    if (((ulong)pppppcVar15[0x15] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8267bc);
      (*pcVar6)();
    }
    ppppcVar3 = pppppcVar15[0x13];
    pppppppcVar8 = (code *******)pppppcVar15[0x14];
    if (pppppppcVar8 != (code *******)0x0) {
      pppppppcVar19 = pppppppcVar8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar19,0x10);
        if (bVar5) {
          *pppppppcVar19 = (code ******)((long)*pppppppcVar19 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppppcStack_158 = ppppcVar3;
    pppppppcStack_150 = pppppppcVar8;
    FUN_10a826f64(pppppppcVar11);
    pppcVar9 = ppppcVar3[0x1c];
    if ((pppcVar9 == (code ***)0x0) ||
       (___dynamic_cast(pppcVar9,&PTR_DAT_110c67cb0,&PTR_DAT_110c62f00,0), pppcVar9 == (code ***)0x0
       )) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f67b144,&UNK_10f67b18a,0xcd,&UNK_10f67b1f1);
      }
      func_0x00010a826fc0();
      pppppppcVar19 = pppppppcVar20;
    }
    else {
      FUN_10a84cd20(&pppppppcStack_140,pppppppcVar20[1],pppppppcVar20[3] + 0x1d);
      (*(code *)(*pppppppcStack_140)[0x13])(pppppppcStack_140,2);
      FUN_10a8271c4(&lStack_168,pppppppcVar20[1],&pppppppcStack_140);
      *(undefined1 *)(lStack_168 + 8) = 1;
      if (plStack_138 != (long *)0x0) {
        plVar7 = plStack_138 + 1;
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
          (**(code **)(*plStack_138 + 0x10))(plStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_138);
        }
      }
      ppppppcVar17 = pppppppcVar20[0x1a];
      FUN_10a08d2e0(&pppppppcStack_180,pppcVar9 + 0x1f);
      FUN_10a6e9fe4(ppppppcVar17,&pppppppcStack_180);
      if (uStack_170._7_1_ < '\0') {
        __ZdlPv(pppppppcStack_180);
      }
      plVar7 = *(long **)(lStack_168 + 0xe0);
      FUN_10a08d2e0(&pppppppcStack_140,pppcVar9 + 0x1f);
      pppppppcStack_180 = (code *******)0x0;
      uStack_178 = 0;
      uStack_170 = 0;
      FUN_10a102f04(&pppppppcStack_180,&pppppppcStack_140,&lStack_128,1);
      (**(code **)(*plVar7 + 0xa8))(plVar7,&pppppppcStack_180);
      pppppppcVar8 = (code *******)&pppppppcStack_148;
      pppppppcStack_148 = (code *******)&pppppppcStack_180;
      FUN_10a0426d8(pppppppcVar8);
      if (cStack_129 < '\0') {
        pppppppcVar8 = pppppppcStack_140;
        __ZdlPv(pppppppcStack_140);
      }
      func_0x0001095be5f4();
      (**(code **)(**(long **)(lStack_168 + 0xe0) + 0xa0))
                (*(long **)(lStack_168 + 0xe0),pppppppcVar8 + 1,pppppppcVar8 + 4);
      *(undefined1 *)((long)pppppppcVar20 + 0xc9) = 1;
      ppppppcVar17 = pppppppcVar20[5];
      pppppppcVar20[5] = (code ******)0x0;
      if (ppppppcVar17 != (code ******)0x0) {
        (*(code *)(*ppppppcVar17)[1])();
      }
      ppppppcVar17 = (code ******)0x20;
      __Znwm();
      FUN_10a82c354();
      ppppppcVar10 = pppppppcVar20[5];
      pppppppcVar20[5] = ppppppcVar17;
      if (ppppppcVar10 != (code ******)0x0) {
        (*(code *)(*ppppppcVar10)[1])();
      }
      pppppppcVar19 = (code *******)pppppppcVar20[0x1a];
      FUN_10a08d2e0(&pppppppcStack_180,pppcVar9 + 0x1f);
      FUN_10a6ea044(pppppppcVar19,&pppppppcStack_180);
      if (uStack_170 < 0) {
        pppppppcVar19 = pppppppcStack_180;
        __ZdlPv();
      }
      pppppppcVar8 = pppppppcStack_150;
      if (pppppppcStack_160 != (code *******)0x0) {
        pppppppcVar20 = pppppppcStack_160 + 1;
        do {
          ppppppcVar17 = *pppppppcVar20;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
          if (bVar5) {
            *pppppppcVar20 = (code ******)((long)ppppppcVar17 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppppppcVar17 == (code ******)0x0) {
          (*(code *)(*pppppppcStack_160)[2])(pppppppcStack_160);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppppcVar19 = pppppppcStack_160;
          pppppppcVar8 = pppppppcStack_150;
        }
      }
    }
    if (pppppppcVar8 != (code *******)0x0) {
      pppppppcVar20 = pppppppcVar8 + 1;
      do {
        ppppppcVar17 = *pppppppcVar20;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar20,0x10);
        if (bVar5) {
          *pppppppcVar20 = (code ******)((long)ppppppcVar17 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppppppcVar17 == (code ******)0x0) {
        (*(code *)(*pppppppcVar8)[2])(pppppppcVar8);
        pppppppcVar19 = pppppppcVar8;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
    ___stack_chk_fail();
    if (uStack_170 < 0) {
      __ZdlPv(pppppppcStack_180);
    }
    if (cStack_129 < '\0') {
      __ZdlPv(pppppppcStack_140);
    }
    pppppppcVar11 = pppppppcVar19;
    __Unwind_Resume();
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppppcVar20 = pppppppcVar11;
    if ((*(char *)(pppppppcVar11 + 0x19) == '\x01') && (*(char *)(pppppppcVar11 + 9) == '\x01')) {
      pppppppcVar20 = (code *******)pppppppcVar11[0x13];
      pppppppcVar12 = pppppppcVar11;
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000109472f14(pppppppcVar20,pppppppcVar11 + 7,pppppppcVar12);
      if ((int)pppppppcVar20 != 0) {
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          func_0x00010ae06f08(1,4,&UNK_10f67b144,&UNK_10f67b282,0x110,&UNK_10f67b2ed);
        }
        func_0x0001094735c0(&ppppppcStack_348,pppppppcVar11[0x13] + 6);
        if (cStack_2f8 == '\x01') {
          pppppppcVar11[0xb] = ppppppcStack_328;
          pppppppcVar11[10] = ppppppcStack_330;
          if (((ulong)pppppppcVar11[0xc] & 1) == 0) {
            *(undefined1 *)(pppppppcVar11 + 0xc) = 1;
          }
          plVar7 = (long *)0x20;
          __Znwm();
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = (long)&PTR_DAT_110c22b20;
          plStack_278 = plVar7 + 3;
          *plStack_278 = 0;
          plVar13 = (long *)0x20;
          plStack_270 = plVar7;
          __Znwm();
          plVar13[1] = 0;
          plVar13[2] = 0;
          *plVar13 = (long)&PTR_FUN_110c22b70;
          plStack_2c0 = plVar13 + 3;
          *plStack_2c0 = 0;
          plStack_2b8 = plVar13;
          FUN_10a827088(pppppppcVar11 + 0x17,&plStack_2c0);
          plVar7 = plStack_2b8;
          if (plStack_2b8 != (long *)0x0) {
            plVar13 = plStack_2b8 + 1;
            do {
              lVar16 = *plVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          FUN_10a8270ec(&plStack_2c0);
          plVar7 = plStack_278;
          FUN_10a838ed0(pppppppcVar11[0x17],plStack_278,&plStack_2c0);
          if (plStack_2b8 != (long *)0x0) {
            func_0x0001092b4274(&plStack_2b8);
          }
          if (plStack_2c0 != (long *)0x0) {
            puVar1 = (ulong *)(plStack_2c0 + 1);
            do {
              uVar18 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar18 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar18 & 0x1fffffffc) == 4) {
              do {
                uVar18 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar18 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar18 - 1 == 0) {
                (**(code **)(*plStack_2c0 + 8))();
              }
            }
          }
          plVar13 = plStack_270;
          plStack_2c0 = plVar7;
          plStack_2b8 = plStack_270;
          if (plStack_270 != (long *)0x0) {
            plVar2 = plStack_270 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          ppppppcStack_2a8 = pppppppcVar11[0x18];
          ppppppcStack_2b0 = pppppppcVar11[0x17];
          if (pppppppcVar11[0x18] != (code ******)0x0) {
            ppppppcVar17 = pppppppcVar11[0x18] + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppcVar17,0x10);
              if (bVar5) {
                *ppppppcVar17 = (code *****)((long)*ppppppcVar17 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (cStack_331 < '\0') {
            func_0x000107c3192c(&ppppppcStack_2a0,ppppppcStack_348,uStack_340);
          }
          else {
            uStack_298 = uStack_340;
            ppppppcStack_2a0 = ppppppcStack_348;
            uStack_290 = CONCAT17(cStack_331,uStack_338);
          }
          plStack_2f0 = plVar7;
          plStack_2e8 = plVar13;
          if (plVar13 != (long *)0x0) {
            plVar13 = plVar13 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = *plVar13 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          pppppppcStack_288 = pppppppcVar11;
          if (cStack_331 < '\0') {
            func_0x000107c3192c(&ppppppcStack_2e0,ppppppcStack_348,uStack_340);
          }
          else {
            uStack_2d8 = uStack_340;
            ppppppcStack_2e0 = ppppppcStack_348;
            uStack_2d0 = CONCAT17(cStack_331,uStack_338);
          }
          ppppppcVar17 = pppppppcVar11[1];
          ppppppcStack_228 = (code ******)FUN_10a84c78c;
          ppuStack_220 = &PTR_DAT_110c22be8;
          puVar14 = (undefined8 *)0x40;
          __Znwm();
          puVar14[1] = plStack_2b8;
          *puVar14 = plStack_2c0;
          if (plStack_2b8 != (long *)0x0) {
            plVar7 = plStack_2b8 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar5) {
                *plVar7 = *plVar7 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar14[3] = ppppppcStack_2a8;
          puVar14[2] = ppppppcStack_2b0;
          if (ppppppcStack_2a8 != (code ******)0x0) {
            ppppppcVar10 = ppppppcStack_2a8 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppcVar10,0x10);
              if (bVar5) {
                *ppppppcVar10 = (code *****)((long)*ppppppcVar10 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (uStack_290 < 0) {
            func_0x000107c3192c(puVar14 + 4,ppppppcStack_2a0,uStack_298);
          }
          else {
            puVar14[5] = uStack_298;
            puVar14[4] = ppppppcStack_2a0;
            puVar14[6] = uStack_290;
          }
          puVar14[7] = pppppppcStack_288;
          ppppppcStack_268 = (code ******)FUN_10a84caa8;
          ppuStack_260 = &PTR_FUN_110c22c08;
          plStack_250 = plStack_2e8;
          plStack_258 = plStack_2f0;
          if (plStack_2e8 != (long *)0x0) {
            plVar7 = plStack_2e8 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
              if (bVar5) {
                *plVar7 = *plVar7 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          pppppppcVar8 = &ppppppcStack_268;
          pppppppcVar19 = &ppppppcStack_228;
          puStack_218 = puVar14;
          if (uStack_2d0 < 0) {
            func_0x000107c3192c(&ppppppcStack_248,ppppppcStack_2e0,uStack_2d8);
          }
          else {
            uStack_240 = uStack_2d8;
            ppppppcStack_248 = ppppppcStack_2e0;
            lStack_238 = uStack_2d0;
          }
          FUN_10a822788(ppppppcVar17,&ppppppcStack_348,&ppppppcStack_228,&ppppppcStack_268,
                        pppppppcVar11[0x15]);
          (*(code *)*ppuStack_260)(&ppuStack_260);
          (*(code *)*ppuStack_220)(&ppuStack_220);
          if (uStack_2d0._7_1_ < '\0') {
            __ZdlPv(ppppppcStack_2e0);
          }
          plVar7 = plStack_2e8;
          if (plStack_2e8 != (long *)0x0) {
            plVar13 = plStack_2e8 + 1;
            do {
              lVar16 = *plVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_2e8 + 0x10))(plStack_2e8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          if (uStack_290._7_1_ < '\0') {
            __ZdlPv(ppppppcStack_2a0);
          }
          ppppppcVar17 = ppppppcStack_2a8;
          if (ppppppcStack_2a8 != (code ******)0x0) {
            ppppppcVar10 = ppppppcStack_2a8 + 1;
            do {
              pppppcVar15 = *ppppppcVar10;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppcVar10,0x10);
              if (bVar5) {
                *ppppppcVar10 = (code *****)((long)pppppcVar15 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (pppppcVar15 == (code *****)0x0) {
              (*(code *)(*ppppppcStack_2a8)[2])(ppppppcStack_2a8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar17);
            }
          }
          plVar7 = plStack_2b8;
          if (plStack_2b8 != (long *)0x0) {
            plVar13 = plStack_2b8 + 1;
            do {
              lVar16 = *plVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_2b8 + 0x10))(plStack_2b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
          plVar7 = plStack_270;
          if (plStack_270 != (long *)0x0) {
            plVar13 = plStack_270 + 1;
            do {
              lVar16 = *plVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar5) {
                *plVar13 = lVar16 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_270 + 0x10))(plStack_270);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
          }
        }
        pppppppcVar20 = &ppppppcStack_348;
        FUN_10a838e84();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
      ___stack_chk_fail();
      FUN_10a84c600(pppppppcVar8 + 2);
      (*(code *)*ppuStack_220)(pppppppcVar19 + 1);
      FUN_10a82715c(&plStack_2f0);
      func_0x00010a82718c(&plStack_2c0);
      FUN_10a84c600(&plStack_278);
      FUN_10a838e84(&ppppppcStack_348);
      __Unwind_Resume();
      ppppppcVar17 = pppppppcVar20[1];
      *pppppppcVar20 = (code ******)0x0;
      pppppppcVar20[1] = (code ******)0x0;
      if (ppppppcVar17 != (code ******)0x0) {
        ppppppcVar10 = ppppppcVar17 + 1;
        do {
          pppppcVar15 = *ppppppcVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppcVar10,0x10);
          if (bVar5) {
            *ppppppcVar10 = (code *****)((long)pppppcVar15 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppcVar15 == (code *****)0x0) {
          (*(code *)(*ppppppcVar17)[2])(ppppppcVar17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppppppcVar17);
          return;
        }
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10a8263c4; end: 10a82698f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10a8263c4(code *******param_1,undefined8 *param_2)

{
  ulong *puVar1;
  long *plVar2;
  code ****ppppcVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  code ***pppcVar7;
  code ******ppppppcVar8;
  code *******pppppppcVar9;
  code *******pppppppcVar10;
  long *plVar11;
  undefined8 *puVar12;
  code *****pppppcVar13;
  long lVar14;
  ulong uVar15;
  code ******ppppppcVar16;
  code *******pppppppcVar17;
  code *******pppppppcVar18;
  code *******unaff_x22;
  long *plVar19;
  code ******ppppppcStack_268;
  undefined8 uStack_260;
  undefined7 uStack_258;
  char cStack_251;
  code ******ppppppcStack_250;
  code ******ppppppcStack_248;
  char cStack_218;
  long *plStack_210;
  long *plStack_208;
  code ******ppppppcStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e0;
  long *plStack_1d8;
  code ******ppppppcStack_1d0;
  code ******ppppppcStack_1c8;
  code ******ppppppcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  code *******pppppppcStack_1a8;
  long *plStack_198;
  long *plStack_190;
  code ******ppppppcStack_188;
  undefined **ppuStack_180;
  long *plStack_178;
  long *plStack_170;
  code ******ppppppcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  code ******ppppppcStack_148;
  undefined **ppuStack_140;
  undefined8 *puStack_138;
  long lStack_108;
  code *******pppppppcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  code *******pppppppcStack_80;
  code ****ppppcStack_78;
  code *******pppppppcStack_70;
  code *******pppppppcStack_68;
  code *******pppppppcStack_60;
  long *plStack_58;
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcVar8 = (code ******)param_2[1];
  ppppppcVar16 = (code ******)*param_2;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 2);
  param_1[8] = ppppppcVar8;
  param_1[7] = ppppppcVar16;
  pppppppcVar17 = param_1;
  FUN_10a826990();
  if ((*(char *)(param_1 + 9) == '\x01') && (*(char *)(param_1 + 0xc) == '\x01')) {
    pppppppcVar17 = param_1 + 0x14;
    func_0x000109472d58(pppppppcVar17,param_1 + 10,param_1 + 7);
    *(int *)((long)param_1 + 0x34) = (int)(double)ppppppcVar16;
    if (*(int *)(param_1 + 6) < (int)(double)ppppppcVar16) {
      ppppppcVar16 = param_1[1];
      pppppppcVar17 = (code *******)&pppppppcStack_60;
      func_0x000107c2b054(pppppppcVar17,&UNK_10f67b12a);
      if (ppppppcVar16 != (code ******)0x0) {
        pppppppcVar17 = (code *******)ppppppcVar16[0x11b];
        func_0x000107c2b054(&pppppppcStack_a0,"true");
        FUN_10a76bdb0(pppppppcVar17,&pppppppcStack_60,&pppppppcStack_a0);
        if (uStack_90 < 0) {
          pppppppcVar17 = pppppppcStack_a0;
          __ZdlPv();
        }
      }
      if (cStack_49 < '\0') {
        pppppppcVar17 = pppppppcStack_60;
        __ZdlPv();
      }
    }
  }
  pppppppcVar18 = param_1 + 0x17;
  if ((*pppppppcVar18 != (code ******)0x0) && (((uint)(**pppppppcVar18)[2] >> 1 & 1) != 0)) {
    ppppppcVar16 = *pppppppcVar18;
    func_0x0001092af8bc(ppppppcVar16);
    pppppcVar13 = *ppppppcVar16;
    if (((ulong)pppppcVar13[0x15] & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10a8267bc);
      (*pcVar6)();
    }
    ppppcVar3 = pppppcVar13[0x13];
    unaff_x22 = (code *******)pppppcVar13[0x14];
    if (unaff_x22 != (code *******)0x0) {
      pppppppcVar17 = unaff_x22 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar17,0x10);
        if (bVar5) {
          *pppppppcVar17 = (code ******)((long)*pppppppcVar17 + 1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    ppppcStack_78 = ppppcVar3;
    pppppppcStack_70 = unaff_x22;
    FUN_10a826f64(pppppppcVar18);
    pppcVar7 = ppppcVar3[0x1c];
    if ((pppcVar7 == (code ***)0x0) ||
       (___dynamic_cast(pppcVar7,&PTR_DAT_110c67cb0,&PTR_DAT_110c62f00,0), pppcVar7 == (code ***)0x0
       )) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f67b144,&UNK_10f67b18a,0xcd,&UNK_10f67b1f1);
      }
      func_0x00010a826fc0();
    }
    else {
      FUN_10a84cd20(&pppppppcStack_60,param_1[1],param_1[3] + 0x1d);
      (*(code *)(*pppppppcStack_60)[0x13])(pppppppcStack_60,2);
      FUN_10a8271c4(&lStack_88,param_1[1],&pppppppcStack_60);
      *(undefined1 *)(lStack_88 + 8) = 1;
      if (plStack_58 != (long *)0x0) {
        plVar19 = plStack_58 + 1;
        do {
          lVar14 = *plVar19;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *plVar19 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
      ppppppcVar16 = param_1[0x1a];
      FUN_10a08d2e0(&pppppppcStack_a0,pppcVar7 + 0x1f);
      FUN_10a6e9fe4(ppppppcVar16,&pppppppcStack_a0);
      if (uStack_90._7_1_ < '\0') {
        __ZdlPv(pppppppcStack_a0);
      }
      plVar19 = *(long **)(lStack_88 + 0xe0);
      FUN_10a08d2e0(&pppppppcStack_60,pppcVar7 + 0x1f);
      pppppppcStack_a0 = (code *******)0x0;
      uStack_98 = 0;
      uStack_90 = 0;
      FUN_10a102f04(&pppppppcStack_a0,&pppppppcStack_60,&lStack_48,1);
      (**(code **)(*plVar19 + 0xa8))(plVar19,&pppppppcStack_a0);
      pppppppcVar17 = (code *******)&pppppppcStack_68;
      pppppppcStack_68 = (code *******)&pppppppcStack_a0;
      FUN_10a0426d8(pppppppcVar17);
      if (cStack_49 < '\0') {
        pppppppcVar17 = pppppppcStack_60;
        __ZdlPv(pppppppcStack_60);
      }
      func_0x0001095be5f4();
      (**(code **)(**(long **)(lStack_88 + 0xe0) + 0xa0))
                (*(long **)(lStack_88 + 0xe0),pppppppcVar17 + 1,pppppppcVar17 + 4);
      *(undefined1 *)((long)param_1 + 0xc9) = 1;
      ppppppcVar16 = param_1[5];
      param_1[5] = (code ******)0x0;
      if (ppppppcVar16 != (code ******)0x0) {
        (*(code *)(*ppppppcVar16)[1])();
      }
      ppppppcVar16 = (code ******)0x20;
      __Znwm();
      FUN_10a82c354();
      ppppppcVar8 = param_1[5];
      param_1[5] = ppppppcVar16;
      if (ppppppcVar8 != (code ******)0x0) {
        (*(code *)(*ppppppcVar8)[1])();
      }
      param_1 = (code *******)param_1[0x1a];
      FUN_10a08d2e0(&pppppppcStack_a0,pppcVar7 + 0x1f);
      FUN_10a6ea044(param_1,&pppppppcStack_a0);
      if (uStack_90 < 0) {
        param_1 = pppppppcStack_a0;
        __ZdlPv();
      }
      unaff_x22 = pppppppcStack_70;
      if (pppppppcStack_80 != (code *******)0x0) {
        pppppppcVar17 = pppppppcStack_80 + 1;
        do {
          ppppppcVar16 = *pppppppcVar17;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar17,0x10);
          if (bVar5) {
            *pppppppcVar17 = (code ******)((long)ppppppcVar16 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (ppppppcVar16 == (code ******)0x0) {
          (*(code *)(*pppppppcStack_80)[2])(pppppppcStack_80);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          param_1 = pppppppcStack_80;
          unaff_x22 = pppppppcStack_70;
        }
      }
    }
    pppppppcVar17 = param_1;
    if (unaff_x22 != (code *******)0x0) {
      pppppppcVar18 = unaff_x22 + 1;
      do {
        ppppppcVar16 = *pppppppcVar18;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppcVar18,0x10);
        if (bVar5) {
          *pppppppcVar18 = (code ******)((long)ppppppcVar16 + -1);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (ppppppcVar16 == (code ******)0x0) {
        (*(code *)(*unaff_x22)[2])(unaff_x22);
        pppppppcVar17 = unaff_x22;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (uStack_90 < 0) {
      __ZdlPv(pppppppcStack_a0);
    }
    if (cStack_49 < '\0') {
      __ZdlPv(pppppppcStack_60);
    }
    pppppppcVar9 = pppppppcVar17;
    __Unwind_Resume();
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppppcVar18 = pppppppcVar9;
    if ((*(char *)(pppppppcVar9 + 0x19) == '\x01') && (*(char *)(pppppppcVar9 + 9) == '\x01')) {
      pppppppcVar18 = (code *******)pppppppcVar9[0x13];
      pppppppcVar10 = pppppppcVar9;
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x000109472f14(pppppppcVar18,pppppppcVar9 + 7,pppppppcVar10);
      if ((int)pppppppcVar18 != 0) {
        if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
          func_0x00010ae06f08(1,4,&UNK_10f67b144,&UNK_10f67b282,0x110,&UNK_10f67b2ed);
        }
        func_0x0001094735c0(&ppppppcStack_268,pppppppcVar9[0x13] + 6);
        if (cStack_218 == '\x01') {
          pppppppcVar9[0xb] = ppppppcStack_248;
          pppppppcVar9[10] = ppppppcStack_250;
          if (((ulong)pppppppcVar9[0xc] & 1) == 0) {
            *(undefined1 *)(pppppppcVar9 + 0xc) = 1;
          }
          plVar19 = (long *)0x20;
          __Znwm();
          plVar19[1] = 0;
          plVar19[2] = 0;
          *plVar19 = (long)&PTR_DAT_110c22b20;
          plStack_198 = plVar19 + 3;
          *plStack_198 = 0;
          plVar11 = (long *)0x20;
          plStack_190 = plVar19;
          __Znwm();
          plVar11[1] = 0;
          plVar11[2] = 0;
          *plVar11 = (long)&PTR_FUN_110c22b70;
          plStack_1e0 = plVar11 + 3;
          *plStack_1e0 = 0;
          plStack_1d8 = plVar11;
          FUN_10a827088(pppppppcVar9 + 0x17,&plStack_1e0);
          plVar19 = plStack_1d8;
          if (plStack_1d8 != (long *)0x0) {
            plVar11 = plStack_1d8 + 1;
            do {
              lVar14 = *plVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
            }
          }
          FUN_10a8270ec(&plStack_1e0);
          plVar19 = plStack_198;
          FUN_10a838ed0(pppppppcVar9[0x17],plStack_198,&plStack_1e0);
          if (plStack_1d8 != (long *)0x0) {
            func_0x0001092b4274(&plStack_1d8);
          }
          if (plStack_1e0 != (long *)0x0) {
            puVar1 = (ulong *)(plStack_1e0 + 1);
            do {
              uVar15 = *puVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *puVar1 = uVar15 - 4;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if ((uVar15 & 0x1fffffffc) == 4) {
              do {
                uVar15 = *puVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *puVar1 = uVar15 - 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (uVar15 - 1 == 0) {
                (**(code **)(*plStack_1e0 + 8))();
              }
            }
          }
          plVar11 = plStack_190;
          plStack_1e0 = plVar19;
          plStack_1d8 = plStack_190;
          if (plStack_190 != (long *)0x0) {
            plVar2 = plStack_190 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *plVar2 = *plVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          ppppppcStack_1c8 = pppppppcVar9[0x18];
          ppppppcStack_1d0 = pppppppcVar9[0x17];
          if (pppppppcVar9[0x18] != (code ******)0x0) {
            ppppppcVar16 = pppppppcVar9[0x18] + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppcVar16,0x10);
              if (bVar5) {
                *ppppppcVar16 = (code *****)((long)*ppppppcVar16 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (cStack_251 < '\0') {
            func_0x000107c3192c(&ppppppcStack_1c0,ppppppcStack_268,uStack_260);
          }
          else {
            uStack_1b8 = uStack_260;
            ppppppcStack_1c0 = ppppppcStack_268;
            uStack_1b0 = CONCAT17(cStack_251,uStack_258);
          }
          pppppppcStack_1a8 = pppppppcVar9;
          plStack_210 = plVar19;
          plStack_208 = plVar11;
          if (plVar11 != (long *)0x0) {
            plVar11 = plVar11 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = *plVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (cStack_251 < '\0') {
            func_0x000107c3192c(&ppppppcStack_200,ppppppcStack_268,uStack_260);
          }
          else {
            uStack_1f8 = uStack_260;
            ppppppcStack_200 = ppppppcStack_268;
            uStack_1f0 = CONCAT17(cStack_251,uStack_258);
          }
          ppppppcVar16 = pppppppcVar9[1];
          ppppppcStack_148 = (code ******)FUN_10a84c78c;
          ppuStack_140 = &PTR_DAT_110c22be8;
          puVar12 = (undefined8 *)0x40;
          __Znwm();
          puVar12[1] = plStack_1d8;
          *puVar12 = plStack_1e0;
          if (plStack_1d8 != (long *)0x0) {
            plVar19 = plStack_1d8 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar5) {
                *plVar19 = *plVar19 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          puVar12[3] = ppppppcStack_1c8;
          puVar12[2] = ppppppcStack_1d0;
          if (ppppppcStack_1c8 != (code ******)0x0) {
            ppppppcVar8 = ppppppcStack_1c8 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppcVar8,0x10);
              if (bVar5) {
                *ppppppcVar8 = (code *****)((long)*ppppppcVar8 + 1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          if (uStack_1b0 < 0) {
            func_0x000107c3192c(puVar12 + 4,ppppppcStack_1c0,uStack_1b8);
          }
          else {
            puVar12[5] = uStack_1b8;
            puVar12[4] = ppppppcStack_1c0;
            puVar12[6] = uStack_1b0;
          }
          puVar12[7] = pppppppcStack_1a8;
          puStack_138 = puVar12;
          ppppppcStack_188 = (code ******)FUN_10a84caa8;
          ppuStack_180 = &PTR_FUN_110c22c08;
          plStack_170 = plStack_208;
          plStack_178 = plStack_210;
          if (plStack_208 != (long *)0x0) {
            plVar19 = plStack_208 + 1;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar5) {
                *plVar19 = *plVar19 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          unaff_x22 = &ppppppcStack_188;
          pppppppcVar17 = &ppppppcStack_148;
          if (uStack_1f0 < 0) {
            func_0x000107c3192c(&ppppppcStack_168,ppppppcStack_200,uStack_1f8);
          }
          else {
            uStack_160 = uStack_1f8;
            ppppppcStack_168 = ppppppcStack_200;
            lStack_158 = uStack_1f0;
          }
          FUN_10a822788(ppppppcVar16,&ppppppcStack_268,&ppppppcStack_148,&ppppppcStack_188,
                        pppppppcVar9[0x15]);
          (*(code *)*ppuStack_180)(&ppuStack_180);
          (*(code *)*ppuStack_140)(&ppuStack_140);
          if (uStack_1f0._7_1_ < '\0') {
            __ZdlPv(ppppppcStack_200);
          }
          plVar19 = plStack_208;
          if (plStack_208 != (long *)0x0) {
            plVar11 = plStack_208 + 1;
            do {
              lVar14 = *plVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_208 + 0x10))(plStack_208);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
            }
          }
          if (uStack_1b0._7_1_ < '\0') {
            __ZdlPv(ppppppcStack_1c0);
          }
          ppppppcVar16 = ppppppcStack_1c8;
          if (ppppppcStack_1c8 != (code ******)0x0) {
            ppppppcVar8 = ppppppcStack_1c8 + 1;
            do {
              pppppcVar13 = *ppppppcVar8;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppcVar8,0x10);
              if (bVar5) {
                *ppppppcVar8 = (code *****)((long)pppppcVar13 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (pppppcVar13 == (code *****)0x0) {
              (*(code *)(*ppppppcStack_1c8)[2])(ppppppcStack_1c8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppcVar16);
            }
          }
          plVar19 = plStack_1d8;
          if (plStack_1d8 != (long *)0x0) {
            plVar11 = plStack_1d8 + 1;
            do {
              lVar14 = *plVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_1d8 + 0x10))(plStack_1d8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
            }
          }
          plVar19 = plStack_190;
          if (plStack_190 != (long *)0x0) {
            plVar11 = plStack_190 + 1;
            do {
              lVar14 = *plVar11;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar5) {
                *plVar11 = lVar14 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar14 == 0) {
              (**(code **)(*plStack_190 + 0x10))(plStack_190);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
            }
          }
        }
        pppppppcVar18 = &ppppppcStack_268;
        FUN_10a838e84();
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      FUN_10a84c600(unaff_x22 + 2);
      (*(code *)*ppuStack_140)(pppppppcVar17 + 1);
      FUN_10a82715c(&plStack_210);
      func_0x00010a82718c(&plStack_1e0);
      FUN_10a84c600(&plStack_198);
      FUN_10a838e84(&ppppppcStack_268);
      __Unwind_Resume();
      ppppppcVar16 = pppppppcVar18[1];
      *pppppppcVar18 = (code ******)0x0;
      pppppppcVar18[1] = (code ******)0x0;
      if (ppppppcVar16 != (code ******)0x0) {
        ppppppcVar8 = ppppppcVar16 + 1;
        do {
          pppppcVar13 = *ppppppcVar8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppcVar8,0x10);
          if (bVar5) {
            *ppppppcVar8 = (code *****)((long)pppppcVar13 + -1);
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (pppppcVar13 == (code *****)0x0) {
          (*(code *)(*ppppppcVar16)[2])(ppppppcVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(ppppppcVar16);
          return;
        }
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10a826990; end: 10a826f63;  */

void FUN_10a826990(undefined8 *param_1)

{
  ulong *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code **unaff_x21;
  code **unaff_x22;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined7 uStack_1a8;
  char cStack_1a1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  char cStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  long *plStack_e8;
  long *plStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_1;
  if ((*(char *)(param_1 + 0x19) == '\x01') && (*(char *)(param_1 + 9) == '\x01')) {
    puVar10 = (undefined8 *)param_1[0x13];
    puVar5 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x000109472f14(puVar10,param_1 + 7,puVar5);
    if ((int)puVar10 != 0) {
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        func_0x00010ae06f08(1,4,&UNK_10f67b144,&UNK_10f67b282,0x110,&UNK_10f67b2ed);
      }
      func_0x0001094735c0(&uStack_1b8,param_1[0x13] + 0x30);
      if (cStack_168 == '\x01') {
        param_1[0xb] = uStack_198;
        param_1[10] = uStack_1a0;
        if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
          *(undefined1 *)(param_1 + 0xc) = 1;
        }
        plVar6 = (long *)0x20;
        __Znwm();
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = (long)&PTR_DAT_110c22b20;
        plStack_e8 = plVar6 + 3;
        *plStack_e8 = 0;
        plVar7 = (long *)0x20;
        plStack_e0 = plVar6;
        __Znwm();
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_FUN_110c22b70;
        plStack_130 = plVar7 + 3;
        *plStack_130 = 0;
        plStack_128 = plVar7;
        FUN_10a827088(param_1 + 0x17,&plStack_130);
        plVar6 = plStack_128;
        if (plStack_128 != (long *)0x0) {
          plVar7 = plStack_128 + 1;
          do {
            lVar8 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        FUN_10a8270ec(&plStack_130);
        plVar6 = plStack_e8;
        FUN_10a838ed0(param_1[0x17],plStack_e8,&plStack_130);
        if (plStack_128 != (long *)0x0) {
          func_0x0001092b4274(&plStack_128);
        }
        if (plStack_130 != (long *)0x0) {
          puVar1 = (ulong *)(plStack_130 + 1);
          do {
            uVar9 = *puVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar9 - 4;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if ((uVar9 & 0x1fffffffc) == 4) {
            do {
              uVar9 = *puVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar9 - 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (uVar9 - 1 == 0) {
              (**(code **)(*plStack_130 + 8))();
            }
          }
        }
        plVar7 = plStack_e0;
        plStack_130 = plVar6;
        plStack_128 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar2 = plStack_e0 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        plStack_118 = (long *)param_1[0x18];
        uStack_120 = param_1[0x17];
        if (param_1[0x18] != 0) {
          plVar2 = (long *)(param_1[0x18] + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *plVar2 = *plVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (cStack_1a1 < '\0') {
          func_0x000107c3192c(&uStack_110,uStack_1b8,uStack_1b0);
        }
        else {
          uStack_108 = uStack_1b0;
          uStack_110 = uStack_1b8;
          uStack_100 = CONCAT17(cStack_1a1,uStack_1a8);
        }
        plStack_160 = plVar6;
        plStack_158 = plVar7;
        if (plVar7 != (long *)0x0) {
          plVar7 = plVar7 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puStack_f8 = param_1;
        if (cStack_1a1 < '\0') {
          func_0x000107c3192c(&uStack_150,uStack_1b8,uStack_1b0);
        }
        else {
          uStack_148 = uStack_1b0;
          uStack_150 = uStack_1b8;
          uStack_140 = CONCAT17(cStack_1a1,uStack_1a8);
        }
        uVar11 = param_1[1];
        pcStack_98 = FUN_10a84c78c;
        ppuStack_90 = &PTR_DAT_110c22be8;
        puVar10 = (undefined8 *)0x40;
        __Znwm();
        puVar10[1] = plStack_128;
        *puVar10 = plStack_130;
        if (plStack_128 != (long *)0x0) {
          plVar6 = plStack_128 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = *plVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar10[3] = plStack_118;
        puVar10[2] = uStack_120;
        if (plStack_118 != (long *)0x0) {
          plVar6 = plStack_118 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = *plVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (uStack_100 < 0) {
          func_0x000107c3192c(puVar10 + 4,uStack_110,uStack_108);
        }
        else {
          puVar10[5] = uStack_108;
          puVar10[4] = uStack_110;
          puVar10[6] = uStack_100;
        }
        puVar10[7] = puStack_f8;
        pcStack_d8 = FUN_10a84caa8;
        ppuStack_d0 = &PTR_FUN_110c22c08;
        plStack_c0 = plStack_158;
        plStack_c8 = plStack_160;
        if (plStack_158 != (long *)0x0) {
          plVar6 = plStack_158 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar4) {
              *plVar6 = *plVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        unaff_x22 = &pcStack_d8;
        unaff_x21 = &pcStack_98;
        puStack_88 = puVar10;
        if (uStack_140 < 0) {
          func_0x000107c3192c(&uStack_b8,uStack_150,uStack_148);
        }
        else {
          uStack_b0 = uStack_148;
          uStack_b8 = uStack_150;
          lStack_a8 = uStack_140;
        }
        FUN_10a822788(uVar11,&uStack_1b8,&pcStack_98,&pcStack_d8,param_1[0x15]);
        (*(code *)*ppuStack_d0)(&ppuStack_d0);
        (*(code *)*ppuStack_90)(&ppuStack_90);
        if (uStack_140._7_1_ < '\0') {
          __ZdlPv(uStack_150);
        }
        plVar6 = plStack_158;
        if (plStack_158 != (long *)0x0) {
          plVar7 = plStack_158 + 1;
          do {
            lVar8 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_158 + 0x10))(plStack_158);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        if (uStack_100._7_1_ < '\0') {
          __ZdlPv(uStack_110);
        }
        plVar6 = plStack_118;
        if (plStack_118 != (long *)0x0) {
          plVar7 = plStack_118 + 1;
          do {
            lVar8 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_118 + 0x10))(plStack_118);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_128;
        if (plStack_128 != (long *)0x0) {
          plVar7 = plStack_128 + 1;
          do {
            lVar8 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_128 + 0x10))(plStack_128);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        plVar6 = plStack_e0;
        if (plStack_e0 != (long *)0x0) {
          plVar7 = plStack_e0 + 1;
          do {
            lVar8 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
      }
      puVar10 = &uStack_1b8;
      FUN_10a838e84();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a84c600(unaff_x22 + 2);
  (*(code *)*ppuStack_90)(unaff_x21 + 1);
  FUN_10a82715c(&plStack_160);
  func_0x00010a82718c(&plStack_130);
  FUN_10a84c600(&plStack_e8);
  FUN_10a838e84(&uStack_1b8);
  __Unwind_Resume();
  plVar6 = (long *)puVar10[1];
  *puVar10 = 0;
  puVar10[1] = 0;
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 1;
    do {
      lVar8 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
      return;
    }
  }
  return;
}



/* Entry: 10a826f64; end: 10a82702f;  */

void FUN_10a826f64(undefined8 *param_1)

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



/* Entry: 10a827030; end: 10a827087;  */

byte FUN_10a827030(long param_1,long param_2)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0xc9) == '\x01') {
    bVar1 = 0;
    if (*(byte **)(param_2 + 0xa0) != (byte *)0x0) {
      bVar1 = **(byte **)(param_2 + 0xa0);
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10a827088; end: 10a8270eb;  */

undefined8 * FUN_10a827088(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10a8270ec; end: 10a82715b;  */

void FUN_10a8270ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xb0;
  __Znwm();
  *(undefined2 *)(puVar1 + 3) = 4;
  puVar1[2] = 0;
  puVar1[1] = 0x200000006;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = puVar1 + 3;
  puVar1[0x12] = 0;
  *puVar1 = &PTR_FUN_110c22bc0;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  return;
}



/* Entry: 10a82715c; end: 10a8271c3;  */

long FUN_10a82715c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
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


