/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107361fe8; end: 10736200b;  */

void FUN_107361fe8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1109a54c0;
  return;
}



/* Entry: 10736200c; end: 10736202f;  */

void FUN_10736200c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a54c0;
  return;
}



/* Entry: 107362030; end: 107362057;  */

void FUN_107362030(undefined8 param_1)

{
  func_0x00010736213c();
  func_0x000107362104(param_1,&PTR_DAT_1109a5520);
  func_0x0001073620cc();
  return;
}



/* Entry: 107362058; end: 107362063;  */

undefined ** FUN_107362058(void)

{
  return &PTR_DAT_1109a5520;
}



/* Entry: 107362064; end: 107362083;  */

void FUN_107362064(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    FUN_107327aec();
  }
  return;
}



/* Entry: 107362084; end: 107362173;  */

void FUN_107362084(void)

{
  return;
}



/* Entry: 107362174; end: 1073623bf;  */

undefined8 * FUN_107362174(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  int extraout_w10;
  long *plVar4;
  undefined1 auStack_e0 [24];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [32];
  undefined1 uStack_98;
  undefined8 auStack_90 [4];
  undefined1 uStack_70;
  undefined1 auStack_68 [24];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_e0;
  puVar1 = param_1;
  func_0x00010736a614();
  *puVar1 = &UNK_10e52b660;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1 = puVar1 + 4;
  __ZNSt3__119__shared_mutex_baseC1Ev();
  param_1[0x19] = &UNK_10e52b660;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  param_1[0x22] = &UNK_10e52b660;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = *param_2;
  lVar3 = param_2[1];
  param_1[0x28] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x00010736abc4();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = &UNK_10e52b660;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = &UNK_10e52b660;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = &UNK_10e52b660;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  func_0x00010726ed14(param_1 + 0x36);
  param_1[0x38] = param_1;
  func_0x00010785f1f4();
  auStack_e0[0] = 0;
  puVar1 = puVar1 + 0xd2;
  func_0x00010724e2c8(puVar1,auStack_e0);
  *(char *)(param_1 + 0x26) = (char)puVar1;
  func_0x00010785f1f4();
  auStack_e0[0] = 0;
  puVar1 = puVar1 + 0x12e;
  func_0x00010724e2c8(puVar1,auStack_e0);
  *(char *)(param_1 + 0x29) = (char)puVar1;
  if ((int)puVar1 != 0) {
    __ZNSt3__16chrono12system_clock3nowEv();
    plVar4 = (long *)param_1[0x27];
    func_0x00010736aef4();
    uStack_c0 = 1;
    puStack_50 = (undefined1 *)0x0;
    lStack_c8 = (long)puVar1 / 1000000;
    func_0x00010736ab74();
    func_0x00010736ad24(&PTR_FUN_1109a5990);
    lVar3 = lStack_c8;
    *(undefined8 *)(puVar2 + 0x28) = uStack_c0;
    *(long *)(puVar2 + 0x20) = lVar3;
    auStack_90[0]._0_1_ = 0;
    uStack_70 = 0;
    auStack_b8[0] = 0;
    uStack_98 = 0;
    puStack_50 = puVar2;
    func_0x00010736ab68(*(undefined8 *)(*plVar4 + 0x10),plVar4,auStack_68,auStack_90,auStack_b8,
                        &UNK_10f40ae5c);
    func_0x00010730e9d0(auStack_b8);
    puVar1 = auStack_90;
    func_0x00010730b1b0(puVar1);
    func_0x00010736acd4();
    func_0x00010736abfc();
  }
  func_0x00010736a534(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010730e9d0(auStack_b8);
  func_0x00010730b1b0(auStack_90);
  func_0x00010736acd4();
  func_0x00010736abfc();
  FUN_107366120(param_1 + 0x36);
  FUN_107364f24(param_1 + 0x32);
  FUN_107364f94(param_1 + 0x2e);
  FUN_1073324c4(param_1 + 0x2a);
  func_0x0001072ac970(param_1 + 0x27);
  FUN_107365020(param_1 + 0x22);
  func_0x000107366054(param_1 + 0x1d);
  FUN_107365150(param_1 + 0x19);
  func_0x000107276ba4(param_1 + 4);
  FUN_1073651dc(param_1);
  __Unwind_Resume(puVar1);
  FUN_107366120(puVar1 + 0x36);
  FUN_107364f24(puVar1 + 0x32);
  FUN_107364f94(puVar1 + 0x2e);
  FUN_1073324c4(puVar1 + 0x2a);
  func_0x0001072ac970(puVar1 + 0x27);
  FUN_107365020(puVar1 + 0x22);
  func_0x000107366054(puVar1 + 0x1d);
  FUN_107365150(puVar1 + 0x19);
  func_0x000107276ba4(puVar1 + 4);
  func_0x00010736ad70(puVar1);
  if (extraout_x8 != 0) {
    FUN_10736520c(param_1);
    func_0x00010736a814();
  }
  return param_1;
}



/* Entry: 1073623c0; end: 107362427;  */

undefined8 FUN_1073623c0(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  FUN_107366120(param_1 + 0x1b0);
  FUN_107364f24(param_1 + 400);
  FUN_107364f94(param_1 + 0x170);
  FUN_1073324c4(param_1 + 0x150);
  func_0x0001072ac970(param_1 + 0x138);
  FUN_107365020(param_1 + 0x110);
  func_0x000107366054(param_1 + 0xe8);
  FUN_107365150(param_1 + 200);
  func_0x000107276ba4(param_1 + 0x20);
  func_0x00010736ad70(param_1);
  if (extraout_x8 != 0) {
    FUN_10736520c(unaff_x19);
    func_0x00010736a814();
  }
  return unaff_x19;
}



/* Entry: 107362428; end: 107362517;  */

void FUN_107362428(long param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  long *plVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  long lStack_40;
  undefined1 uStack_38;
  
  func_0x00010736a934();
  lStack_40 = param_1 + 0x20;
  uStack_38 = 1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  FUN_107362518(unaff_x20 + 200);
  if (*(int *)(param_3 + 0x20) == 2) {
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x0001073663cc(auStack_58,param_3,&uStack_68);
    func_0x000107362534();
    FUN_1073264f4();
    func_0x00010736ac8c();
    func_0x00010725b6e0(&uStack_68);
  }
  func_0x000107362554(unaff_x20 + 200);
  FUN_107362574();
  plVar1 = (long *)(unaff_x20 + 0xf8);
  while (plVar1 = (long *)*plVar1, plVar1 != (long *)0x0) {
    FUN_1073625a4();
  }
  func_0x000104c305a0(&lStack_40);
  return;
}



/* Entry: 107362518; end: 107362573;  */

bool FUN_107362518(long param_1)

{
  func_0x000107366170();
  return param_1 != 0;
}



/* Entry: 107362574; end: 1073625a3;  */

void FUN_107362574(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x00010736a934();
  FUN_107365268();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x30) = uVar1;
  return;
}



/* Entry: 1073625a4; end: 107362657;  */

void FUN_1073625a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x00010736a9c0();
  param_1 = param_1 + 200;
  func_0x000107362554(param_1,param_3);
  if (*(int *)(param_1 + 0x20) != 2) {
    func_0x0001073663cc(auStack_48);
    if (*(int *)(param_1 + 0x20) == 0) {
      plVar2 = (long *)(unaff_x21 + 0x110);
      FUN_107364ee4();
      lVar1 = plVar2[1];
      for (lVar3 = *plVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x20) {
        auStack_58[0] = 0;
        uStack_50 = 0;
        func_0x00010736a468(lVar3,auStack_48,auStack_58);
      }
    }
    func_0x000107362534(unaff_x20 + 0x10);
    FUN_1073264f4();
    func_0x00010736ac8c();
  }
  return;
}



/* Entry: 107362658; end: 107362e17;  */

void FUN_107362658(long param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  undefined8 extraout_x8_00;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  int extraout_w10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x19;
  uint uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong unaff_x27;
  float fVar19;
  long lVar20;
  float fVar21;
  undefined1 auStack_2f0 [24];
  undefined4 uStack_2cc;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [24];
  undefined1 *puStack_278;
  undefined1 auStack_270 [32];
  undefined1 uStack_250;
  undefined **appuStack_248 [3];
  undefined ***pppuStack_230;
  char cStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [24];
  undefined **ppuStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined ***pppuStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [40];
  long lStack_160;
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [40];
  long *plStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [40];
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [40];
  undefined1 auStack_28 [24];
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  func_0x00010736aff4();
  puVar5 = auStack_2f0;
  func_0x00010736a6ac();
  lStack_1a0 = param_1 + 0x20;
  puStack_198 = (undefined *)CONCAT71(puStack_198._1_7_,1);
  uStack_8 = extraout_x8;
  __ZNSt3__119__shared_mutex_base4lockEv();
  uVar18 = *(ulong *)(unaff_x19 + 0xf0);
  uVar16 = param_2 & 0xffffffff;
  uVar13 = (uint)param_2;
  if (uVar18 != 0) {
    uVar7 = uVar18 - 1;
    uVar17 = (uint)uVar18;
    if ((uVar18 & uVar7) == 0) {
      unaff_x27 = uVar17 - 1 & uVar16;
    }
    else {
      unaff_x27 = uVar16;
      if (uVar18 <= uVar16) {
        uVar2 = 0;
        if (uVar17 != 0) {
          uVar2 = uVar13 / uVar17;
        }
        unaff_x27 = (ulong)(uVar13 - uVar2 * uVar17);
      }
    }
    plVar15 = *(long **)(*(long *)(unaff_x19 + 0xe8) + unaff_x27 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_107362730;
          uVar8 = plVar15[1];
          if (uVar8 != uVar16) break;
          if (*(uint *)(plVar15 + 2) == uVar13) {
            uVar4 = 1;
            goto LAB_1073629f8;
          }
        }
        if ((uVar18 & uVar7) == 0) {
          uVar8 = uVar8 & uVar7;
        }
        else if (uVar18 <= uVar8) {
          uVar9 = 0;
          if (uVar18 != 0) {
            uVar9 = uVar8 / uVar18;
          }
          uVar8 = uVar8 - uVar9 * uVar18;
        }
      } while (uVar8 == unaff_x27);
    }
  }
LAB_107362730:
  plVar15 = (long *)0x68;
  __Znwm();
  plVar1 = (long *)(unaff_x19 + 0xf8);
  uStack_e0 = 1;
  *plVar15 = 0;
  plVar15[1] = uVar16;
  *(uint *)(plVar15 + 2) = uVar13;
  plVar15[3] = 0;
  plVar15[4] = 0;
  plVar15[5] = (long)&UNK_10e52b660;
  plVar15[6] = 0;
  plVar15[7] = 0;
  plVar15[8] = 0;
  plVar15[9] = (long)&UNK_10e52b660;
  plVar15[10] = 0;
  plVar15[0xb] = 0;
  plVar15[0xc] = 0;
  fVar19 = (float)(*(long *)(unaff_x19 + 0x100) + 1);
  plStack_f0 = plVar15;
  plStack_e8 = plVar1;
  if ((uVar18 == 0) ||
     (fVar21 = *(float *)(unaff_x19 + 0x108) * (float)uVar18, uVar4 = fVar21 == fVar19,
     fVar21 < fVar19)) {
    uVar7 = 1;
    if (2 < uVar18) {
      uVar7 = (ulong)((uVar18 & uVar18 - 1) != 0);
    }
    uVar7 = uVar7 | uVar18 << 1;
    uVar8 = (ulong)(fVar19 / *(float *)(unaff_x19 + 0x108));
    if (uVar7 <= uVar8) {
      uVar7 = uVar8;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar18 = *(ulong *)(unaff_x19 + 0xf0);
    }
    if (uVar18 < uVar7) {
LAB_1073627f4:
      if (uVar7 >> 0x3d != 0) goto LAB_107362d40;
      lVar14 = uVar7 << 3;
      __Znwm(lVar14);
      FUN_107366630(unaff_x19 + 0xe8,lVar14);
      *(ulong *)(unaff_x19 + 0xf0) = uVar7;
      lVar14 = *(long *)(unaff_x19 + 0xe8);
      for (uVar18 = 0; uVar7 != uVar18; uVar18 = uVar18 + 1) {
        *(undefined8 *)(lVar14 + uVar18 * 8) = 0;
      }
      plVar15 = (long *)*plVar1;
      uVar18 = uVar7;
      if (plVar15 != (long *)0x0) {
        uVar11 = plVar15[1];
        uVar9 = uVar7 - 1;
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar11 / uVar7;
        }
        uVar12 = uVar11;
        if (uVar7 <= uVar11) {
          uVar12 = uVar11 - uVar8 * uVar7;
        }
        if ((uVar7 & uVar9) == 0) {
          uVar12 = uVar11 & uVar9;
        }
        *(long **)(lVar14 + uVar12 * 8) = plVar1;
        while (plVar10 = plVar15, plVar15 = (long *)*plVar10, plVar15 != (long *)0x0) {
          uVar8 = plVar15[1];
          if ((uVar7 & uVar9) == 0) {
            uVar8 = uVar8 & uVar9;
          }
          else if (uVar7 <= uVar8) {
            uVar11 = 0;
            if (uVar7 != 0) {
              uVar11 = uVar8 / uVar7;
            }
            uVar8 = uVar8 - uVar11 * uVar7;
          }
          if (uVar8 != uVar12) {
            if (*(long *)(lVar14 + uVar8 * 8) == 0) {
              *(long **)(lVar14 + uVar8 * 8) = plVar10;
              uVar12 = uVar8;
            }
            else {
              *plVar10 = *plVar15;
              *plVar15 = **(undefined8 **)(lVar14 + uVar8 * 8);
              **(long **)(lVar14 + uVar8 * 8) = (long)plVar15;
              plVar15 = plVar10;
            }
          }
        }
      }
    }
    else if (uVar7 < uVar18) {
      uVar8 = (ulong)((float)*(ulong *)(unaff_x19 + 0x100) / *(float *)(unaff_x19 + 0x108));
      if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar8) {
        uVar8 = 1L << (-LZCOUNT(uVar8 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar8) {
        uVar7 = uVar8;
      }
      if (uVar7 < uVar18) {
        if (uVar7 != 0) goto LAB_1073627f4;
        FUN_107366630(unaff_x19 + 0xe8,0);
        *(undefined8 *)(unaff_x19 + 0xf0) = 0;
        uVar18 = 0;
      }
      else {
        uVar18 = *(ulong *)(unaff_x19 + 0xf0);
      }
    }
    if ((uVar18 & uVar18 - 1) == 0) {
      unaff_x27 = (int)uVar18 - 1 & uVar16;
      uVar4 = true;
    }
    else {
      uVar4 = uVar18 == uVar16;
      unaff_x27 = uVar16;
      if (uVar18 <= uVar16) {
        uVar7 = 0;
        if (uVar18 != 0) {
          uVar7 = uVar16 / uVar18;
        }
        unaff_x27 = uVar16 - uVar7 * uVar18;
      }
    }
  }
  plVar15 = plStack_f0;
  lVar14 = *(long *)(unaff_x19 + 0xe8);
  plVar10 = *(long **)(lVar14 + unaff_x27 * 8);
  if (plVar10 == (long *)0x0) {
    *plStack_f0 = *plVar1;
    *plVar1 = (long)plStack_f0;
    *(long **)(lVar14 + unaff_x27 * 8) = plVar1;
    if (*plStack_f0 != 0) {
      uVar16 = *(ulong *)(*plStack_f0 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar16 = uVar16 & uVar18 - 1;
        uVar4 = true;
      }
      else {
        uVar4 = uVar16 == uVar18;
        if (uVar18 <= uVar16) {
          uVar7 = 0;
          if (uVar18 != 0) {
            uVar7 = uVar16 / uVar18;
          }
          uVar16 = uVar16 - uVar7 * uVar18;
        }
      }
      *(long **)(lVar14 + uVar16 * 8) = plStack_f0;
    }
  }
  else {
    *plStack_f0 = *plVar10;
    *plVar10 = (long)plStack_f0;
  }
  plStack_f0 = (long *)0x0;
  *(long *)(unaff_x19 + 0x100) = *(long *)(unaff_x19 + 0x100) + 1;
  FUN_107366648(&plStack_f0);
LAB_1073629f8:
  lVar20 = param_3[1];
  lVar14 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x00010736abc4();
    } while (extraout_w10 != 0);
  }
  plStack_e8 = (long *)plVar15[4];
  plStack_f0 = (long *)plVar15[3];
  plVar15[4] = lVar20;
  plVar15[3] = lVar14;
  func_0x00010725b6e0(&plStack_f0);
  plStack_e8 = *(long **)(unaff_x19 + 0xd0);
  plStack_f0 = *(long **)(unaff_x19 + 200);
  FUN_1073666c8(&plStack_f0);
  plVar15 = plStack_e8;
  plStack_220 = plStack_f0;
  while (plStack_218 = plVar15, plStack_220 != (long *)0x0) {
    FUN_1073625a4();
    plStack_220 = (long *)((long)plStack_220 + 1);
    plStack_218 = plVar15 + 0xe;
    FUN_1073666c8(&plStack_220);
    plVar15 = plStack_218;
  }
  func_0x000104c305a0(&lStack_1a0);
  if ((*(byte *)(unaff_x19 + 0x148) & 1) != 0) {
    func_0x00010736aef4();
    func_0x00010736ab74();
    func_0x00010736ad24(&PTR_FUN_1109a56b0);
    *(ulong *)(puVar5 + 0x28) = CONCAT44(uStack_2cc,uVar13);
    *(long *)(puVar5 + 0x20) = unaff_x19;
    puStack_2c8 = &UNK_10e52b660;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    puStack_278 = puVar5;
    __ZNSt3__16chrono12system_clock3nowEv();
    lStack_1b8 = (long)puVar5 / 1000000;
    lVar14 = *(long *)(unaff_x19 + 0x138);
    ppuStack_1c0 = &PTR_FUN_1109a6110;
    pppuStack_1a8 = &ppuStack_1c0;
    uStack_1b0 = 1;
    FUN_1073659cc(&plStack_220,&puStack_2c8);
    FUN_107368bac(auStack_200,auStack_290);
    puVar6 = (undefined8 *)0x48;
    __Znwm();
    func_0x00010736adcc();
    *puVar6 = extraout_x8_00;
    func_0x00010736a0f0(puVar6 + 1,&plStack_220);
    FUN_107368bac(unaff_x19 + 0x28,auStack_200);
    pppuStack_230 = appuStack_248;
    appuStack_248[0] = &PTR_FUN_1109a55f0;
    cStack_228 = '\x01';
    auStack_270[0] = 0;
    uStack_250 = 0;
    lVar14 = *(long *)(lVar14 + 0x38);
    puStack_2a0 = &UNK_10f40ae68;
    uStack_298 = 0xb;
    plVar15 = *(long **)(lVar14 + 0x60);
    lStack_2a8 = lVar14;
    if (plVar15 == (long *)0x0) {
      FUN_107368bf0(&plStack_f0,lVar14);
      plVar15 = plStack_f0;
      lStack_1a0 = 0;
      __ZNSt13exception_ptrD1Ev(&lStack_1a0);
      if (plVar15 == (long *)0x0) {
        FUN_107368c54(&lStack_2a8,&ppuStack_1c0,auStack_1e0,appuStack_248,auStack_270);
      }
      else {
        uVar4 = cStack_228 == '\x01';
        if ((bool)uVar4) {
          func_0x00010730fa34(appuStack_248,&plStack_f0);
        }
      }
      __ZNSt13exception_ptrD1Ev(&plStack_f0);
    }
    else {
      puStack_198 = &UNK_10f40ae68;
      uStack_190 = 0xb;
      lStack_1a0 = lVar14;
      FUN_107369354(auStack_188,auStack_270);
      lStack_160 = lVar14;
      FUN_1073693a8(auStack_158,&ppuStack_1c0);
      FUN_1073693ec(auStack_138,auStack_1e0);
      func_0x00010730fb90(auStack_118,appuStack_248);
      func_0x00010730fa54(&plStack_f0,lVar14 + 0xa0);
      FUN_107369258(&uStack_d8,&lStack_1a0);
      puStack_10 = (undefined8 *)0x0;
      puVar6 = (undefined8 *)0xd0;
      __Znwm();
      *puVar6 = &PTR_FUN_1109a6090;
      puVar6[2] = plStack_e8;
      puVar6[1] = plStack_f0;
      plStack_f0 = (long *)0x0;
      plStack_e8 = (long *)0x0;
      puVar6[3] = uStack_e0;
      puVar6[5] = uStack_d0;
      puVar6[4] = uStack_d8;
      puVar6[6] = uStack_c8;
      FUN_107369354(puVar6 + 7,auStack_c0);
      puVar6[0xc] = uStack_98;
      FUN_1073693a8(puVar6 + 0xd,auStack_90);
      FUN_1073693ec(puVar6 + 0x11,auStack_70);
      func_0x00010730fb90(puVar6 + 0x15,auStack_50);
      puStack_10 = puVar6;
      (**(code **)(*plVar15 + 0x10))(plVar15,auStack_28);
      func_0x0001006393ec(auStack_28);
      FUN_1073695fc(&plStack_f0);
      func_0x00010736961c(&lStack_1a0);
    }
    FUN_107365cbc(auStack_270);
    func_0x00010730e9d0(appuStack_248);
    FUN_10736a204(auStack_1e0);
    FUN_107364e7c(&plStack_220);
    FUN_107369e14(&ppuStack_1c0);
    FUN_107365374(&puStack_2c8);
    func_0x000107366bf4(auStack_290);
    func_0x00010736abfc();
  }
  func_0x00010736a534(uStack_8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_107362d40:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x107362d48);
  (*pcVar3)();
}



/* Entry: 107362e18; end: 107362e6f;  */

void FUN_107362e18(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 auStack_38 [20];
  undefined4 uStack_24;
  
  uStack_24 = param_2;
  func_0x00010736ac04();
  lVar1 = param_1 + 0xe8;
  FUN_107366c28(lVar1,&uStack_24);
  if (lVar1 != 0) {
    FUN_107366cc8(param_1 + 0xe8);
  }
  func_0x000104c305a0(auStack_38);
  return;
}



/* Entry: 107362e70; end: 10736304f;  */

void FUN_107362e70(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 auStack_268 [24];
  byte bStack_250;
  undefined1 auStack_238 [176];
  undefined1 auStack_188 [24];
  undefined8 *puStack_170;
  undefined1 auStack_128 [112];
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  func_0x00010736a4fc();
  func_0x00010736a84c();
  func_0x00010736aedc();
  func_0x00010736a5f0(auStack_268);
  func_0x00010736ab60();
  if ((bStack_250 & 1) == 0) {
    func_0x00010736af60();
    if (!(bool)in_ZR) goto LAB_107362f88;
    func_0x00010736aebc();
    func_0x00010736aa04(auStack_b8);
    func_0x00010736aaf0();
    func_0x00010736aaa0();
    func_0x00010736a964();
    func_0x00010736aae8();
    func_0x00010736acb0();
    func_0x00010736aec4();
    func_0x00010736abec();
    func_0x00010736a5f0(&stack0xfffffffffffffe98);
    FUN_107326484(auStack_268,&stack0xfffffffffffffe98);
    func_0x0001072b9760(&stack0xfffffffffffffe98);
    func_0x00010736a9d0();
    in_ZR = bStack_250 == 1;
    if (!(bool)in_ZR) goto LAB_107362f88;
  }
  func_0x00010736a984();
  func_0x00010726933c(auStack_128);
  FUN_10736327c(auStack_238,&stack0xfffffffffffffe98);
  puStack_170 = (undefined8 *)0x0;
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  *puVar1 = &PTR_SUB_1109a57c0;
  FUN_10736327c(puVar1 + 1,auStack_238);
  puStack_170 = puVar1;
  func_0x00010736a744();
  FUN_1073671cc(auStack_188);
  FUN_1073632b0(auStack_238);
  FUN_1073632b0(&stack0xfffffffffffffe98);
LAB_107362f88:
  func_0x00010736aae0();
  func_0x00010736ab14();
  func_0x00010736a534(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072b9760(&stack0xfffffffffffffe98);
  func_0x00010736a9d0();
  func_0x00010736aae0();
  do {
    func_0x00010736ab14();
    func_0x00010736a888();
    func_0x00010736ab60();
  } while( true );
}



/* Entry: 107363050; end: 1073630eb;  */

void FUN_107363050(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *unaff_x19;
  long unaff_x21;
  undefined4 uStack_34;
  
  uStack_34 = param_2;
  func_0x00010736aa20();
  func_0x000107364ea4();
  if (param_1 != 0) {
    func_0x0001072bef58();
    unaff_x19[0x18] = 1;
    return;
  }
  lVar1 = unaff_x21 + 0xe8;
  FUN_107366c28(lVar1,&uStack_34);
  if (lVar1 == 0) {
LAB_1073630dc:
    *unaff_x19 = 0;
    unaff_x19[0x18] = 0;
  }
  else {
    lVar2 = lVar1 + 0x28;
    func_0x000107364ec4(lVar2,param_3);
    if (lVar2 == 0) {
      lVar1 = lVar1 + 0x48;
      func_0x000107364ec4(lVar1,param_3);
      if (lVar1 == 0) goto LAB_1073630dc;
    }
    func_0x000107365d20();
  }
  return;
}



/* Entry: 1073630ec; end: 107363123;  */

void FUN_1073630ec(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x00010736ae0c();
    __ZNSt3__119__shared_mutex_base13unlock_sharedEv();
    *(undefined1 *)(unaff_x19 + 8) = 0;
    return;
  }
  lVar1 = 1;
  __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f40ae74);
  func_0x00010736a934();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  func_0x00010736ac84();
  func_0x00010736ad9c();
  func_0x00010736aa04();
  *(long *)(unaff_x20 + 0x18) = lVar1;
  return;
}



/* Entry: 107363124; end: 10736315b;  */

void FUN_107363124(long param_1)

{
  long unaff_x20;
  
  func_0x00010736a934();
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x00010736ac84();
  func_0x00010736ad9c();
  func_0x00010736aa04();
  *(long *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 10736315c; end: 1073631af;  */

/* WARNING: Possible PIC construction at 0x000107363258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107363220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010736325c) */
/* WARNING: Removing unreachable block (ram,0x000107363224) */

void FUN_10736315c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long extraout_x8;
  ulong uVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 ***pppuVar10;
  code *pcVar11;
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  undefined8 **ppuStack_30;
  code *pcStack_28;
  
  func_0x00010736ae0c();
  if (param_1 == 0) {
    __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f40ae94);
  }
  else if (*(char *)(unaff_x19 + 8) != '\x01') {
    __ZNSt3__119__shared_mutex_base11lock_sharedEv();
    *(undefined1 *)(unaff_x19 + 8) = 1;
    return;
  }
  puVar6 = &UNK_10f40aebd;
  lVar3 = 0xb;
  __ZNSt3__120__throw_system_errorEiPKc(0xb,&UNK_10f40aebd);
  puVar2 = auStack_60;
  puVar8 = auStack_60;
  pcStack_28 = FUN_1073631b0;
  pppuVar10 = &ppuStack_30;
  lVar4 = lVar3 + 200;
  lVar7 = param_3;
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  FUN_107364f04();
  if (lVar4 == 0) {
    auStack_60[0] = 0;
    uStack_58 = 0;
    pcVar11 = (code *)0x107363224;
    unaff_x19 = param_4;
  }
  else if (*(int *)(lVar7 + 0x58) == 0) {
    plVar5 = (long *)(lVar3 + 0xf8);
    do {
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        FUN_107364ee4(lVar3 + 0x110,param_3);
        FUN_107365d3c();
        return;
      }
      lVar4 = (long)(plVar5 + 5);
      lVar7 = param_3;
      func_0x000107364ea4(lVar4,param_3);
    } while (lVar4 == 0);
    auStack_60[0] = 0;
    uStack_58 = 0;
    puVar6 = (undefined *)(lVar7 + 0x38);
    pcVar11 = (code *)0x10736325c;
    puVar2 = auStack_60;
    puVar8 = auStack_60;
    unaff_x19 = param_4;
  }
  else {
    puVar2 = &stack0xffffffffffffffe0;
    puVar8 = (undefined1 *)(lVar7 + 0x60);
    param_3 = unaff_x20;
    pppuVar10 = (undefined8 ***)ppuStack_30;
    pcVar11 = pcStack_28;
  }
  plVar5 = *(long **)(param_4 + 0x18);
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010736ae64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x30))();
    return;
  }
  *(undefined8 ****)(puVar2 + -0x10) = pppuVar10;
  *(code **)(puVar2 + -8) = pcVar11;
  func_0x000104bfeb48(0,puVar6,puVar8);
  *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + 1;
  *(ulong *)(extraout_x8 + -8) =
       *(long *)(extraout_x8 + -8) - (ulong)(*(char *)(extraout_x8 + (long)plVar5) == -0x80);
  bVar1 = (byte)param_3 & 0x7f;
  uVar9 = *(ulong *)(unaff_x19 + 0x10);
  *(byte *)(extraout_x8 + (long)plVar5) = bVar1;
  *(byte *)(extraout_x8 + (uVar9 & (long)plVar5 - 7U) + (uVar9 & 7)) = bVar1;
  return;
}



/* Entry: 1073631b0; end: 10736327b;  */

/* WARNING: Possible PIC construction at 0x000107363258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107363220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010736325c) */
/* WARNING: Removing unreachable block (ram,0x000107363224) */

void FUN_1073631b0(long param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  long extraout_x8;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined1 *puVar8;
  undefined8 unaff_x30;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  puVar2 = auStack_40;
  puVar6 = auStack_40;
  puVar8 = &stack0xfffffffffffffff0;
  lVar3 = param_1 + 200;
  lVar5 = param_3;
  FUN_107364f04();
  if (lVar3 == 0) {
    auStack_40[0] = 0;
    uStack_38 = 0;
    unaff_x30 = 0x107363224;
    unaff_x19 = param_4;
  }
  else if (*(int *)(lVar5 + 0x58) == 0) {
    plVar4 = (long *)(param_1 + 0xf8);
    do {
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        FUN_107364ee4(param_1 + 0x110,param_3);
        FUN_107365d3c();
        return;
      }
      lVar3 = (long)(plVar4 + 5);
      param_2 = param_3;
      func_0x000107364ea4(lVar3,param_3);
    } while (lVar3 == 0);
    auStack_40[0] = 0;
    uStack_38 = 0;
    param_2 = param_2 + 0x38;
    unaff_x30 = 0x10736325c;
    puVar2 = auStack_40;
    puVar6 = auStack_40;
    unaff_x19 = param_4;
  }
  else {
    puVar2 = (undefined1 *)register0x00000008;
    puVar6 = (undefined1 *)(lVar5 + 0x60);
    param_3 = unaff_x20;
    puVar8 = unaff_x29;
  }
  plVar4 = *(long **)(param_4 + 0x18);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010736ae64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x30))();
    return;
  }
  *(undefined1 **)(puVar2 + -0x10) = puVar8;
  *(undefined8 *)(puVar2 + -8) = unaff_x30;
  func_0x000104bfeb48(0,param_2,puVar6);
  *(long *)(unaff_x19 + 0x18) = *(long *)(unaff_x19 + 0x18) + 1;
  *(ulong *)(extraout_x8 + -8) =
       *(long *)(extraout_x8 + -8) - (ulong)(*(char *)(extraout_x8 + (long)plVar4) == -0x80);
  bVar1 = (byte)param_3 & 0x7f;
  uVar7 = *(ulong *)(unaff_x19 + 0x10);
  *(byte *)(extraout_x8 + (long)plVar4) = bVar1;
  *(byte *)(extraout_x8 + (uVar7 & (long)plVar4 - 7U) + (uVar7 & 7)) = bVar1;
  return;
}



/* Entry: 10736327c; end: 1073632af;  */

void FUN_10736327c(void)

{
  func_0x00010736a68c();
  func_0x00010736ac18();
  func_0x00010726933c();
  return;
}



/* Entry: 1073632b0; end: 1073632d3;  */

void FUN_1073632b0(void)

{
  func_0x00010736ae3c();
  func_0x000107269394();
  func_0x00010736aa7c();
  return;
}



/* Entry: 1073632d4; end: 10736337f;  */

long ** FUN_1073632d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long **pplVar4;
  long lVar5;
  undefined8 *puVar6;
  long **pplVar7;
  code *pcVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined1 uStack_334;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [24];
  ulong uStack_300;
  undefined1 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [24];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long *plStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_228;
  undefined **appuStack_218 [3];
  undefined ***pppuStack_200;
  undefined1 uStack_1f8;
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [16];
  undefined1 auStack_190 [192];
  undefined8 uStack_d0;
  undefined8 auStack_b8 [2];
  long *aplStack_a8 [7];
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_38;
  
  func_0x00010736a6c0();
  uStack_38 = extraout_x8;
  func_0x00010726933c(aplStack_a8,param_3);
  pplVar7 = aplStack_a8;
  func_0x0001072c00d0(auStack_b8,pplVar7,1);
  puVar6 = auStack_b8;
  func_0x00010736ac18();
  plVar10 = param_4;
  FUN_107363380();
  func_0x00010726dd08(auStack_b8);
  pplVar4 = aplStack_a8;
  func_0x000107269394(pplVar4);
  func_0x00010736a534(uStack_38);
  if ((bool)in_ZR) {
    return pplVar4;
  }
  ___stack_chk_fail();
  func_0x00010736aa38();
  func_0x00010726dd08();
  pplVar4 = aplStack_a8;
  func_0x000107269394();
  func_0x00010736a888();
  pcVar8 = FUN_107363380;
  func_0x00010736aff4();
  puStack_70 = &stack0xfffffffffffffff0;
  pcStack_68 = pcVar8;
  func_0x00010736a6ac();
  uStack_d0 = extraout_x8_00;
  __ZNSt3__16chrono12system_clock3nowEv();
  if (((char)plVar10[1] == '\x01') && (FUN_107363798(plVar10), 0 < *plVar10)) {
    FUN_107363798(plVar10);
    uVar9 = (long)pplVar4 / 1000000 + (*plVar10 / 60000000) * 0x3c;
    uVar12 = uVar9 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xff;
    uStack_334 = 1;
  }
  else {
    uStack_334 = 0;
    uVar9 = 0;
    uVar12 = 0;
  }
  plVar10 = param_4 + 0x2a;
  pplVar4 = pplVar7;
  func_0x0001073653e8();
  if ((plVar10 == (long *)0x0) || (pplVar4[7] == pplVar4[8])) {
    plStack_260 = (long *)((ulong)plStack_260 & 0xffffffffffffff00);
    uStack_250 = 0;
    plVar10 = (long *)*puVar6;
  }
  else {
    FUN_107330040(&plStack_240);
    FUN_107354910(&plStack_240,(((long *)*puVar6)[1] - *(long *)*puVar6) / 0x70);
    lVar1 = ((long *)*puVar6)[1];
    for (lVar11 = *(long *)*puVar6; plVar10 = plStack_240, lVar11 != lVar1; lVar11 = lVar11 + 0x70)
    {
      func_0x000107298030(auStack_1c0);
      func_0x00010729c07c(auStack_1c0,lVar11);
      func_0x00010729c0b0(auStack_190,lVar11 + 0x30);
      plVar2 = pplVar4[8];
      for (plVar10 = pplVar4[7]; plVar10 != plVar2; plVar10 = plVar10 + 7) {
        lVar5 = lVar11 + 0x20;
        func_0x000107297a3c(lVar5,plVar10);
        if (lVar5 != 0) {
          FUN_1073654b8(appuStack_218,auStack_1a0);
        }
      }
      func_0x00010735c8bc(&plStack_240,auStack_1c0);
      func_0x000107269394(auStack_1c0);
    }
    uStack_258 = uStack_238;
    plStack_260 = plStack_240;
    plStack_240 = (long *)0x0;
    uStack_238 = 0;
    uStack_250 = 1;
    func_0x00010726dd08(&plStack_240);
  }
  uStack_270 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lVar1 = plVar10[1];
  for (lVar11 = *plVar10; uVar3 = lVar11 == lVar1, !(bool)uVar3; lVar11 = lVar11 + 0x70) {
    func_0x0001072692d4(auStack_1c0,lVar11);
    func_0x0001072d7368(appuStack_218,auStack_1c0);
    func_0x000107269e60(auStack_1c0);
    func_0x0001072ba220(&uStack_280,appuStack_218);
    func_0x000107932ce0(appuStack_218);
  }
  func_0x00010724ef84(auStack_298,pplVar7);
  plVar10 = (long *)param_4[0x27];
  uStack_328 = uStack_278;
  uStack_330 = uStack_280;
  uStack_320 = uStack_270;
  uStack_280 = 0;
  uStack_278 = 0;
  uStack_270 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_318,auStack_298);
  uStack_300 = uVar12 | uVar9;
  uStack_2f8 = uStack_334;
  func_0x00010736aef4(&uStack_2f0);
  puVar6 = &uStack_2d8;
  FUN_1073655b8(puVar6,&uStack_330);
  puStack_228 = (undefined8 *)0x0;
  func_0x00010736ad10();
  puVar6[2] = uStack_2e8;
  puVar6[1] = uStack_2f0;
  puVar6[4] = uStack_2d8;
  puVar6[3] = uStack_2e0;
  puVar6[6] = uStack_2c8;
  puVar6[5] = uStack_2d0;
  *puVar6 = &PTR_SUB_1109a5850;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2d8 = 0;
  puVar6[8] = uStack_2b8;
  puVar6[7] = uStack_2c0;
  puVar6[9] = uStack_2b0;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2c0 = 0;
  puVar6[0xb] = uStack_2a0;
  puVar6[10] = uStack_2a8;
  auStack_1c0[0] = 0;
  auStack_1a0[0] = 0;
  pppuStack_200 = appuStack_218;
  appuStack_218[0] = &PTR_FUN_1109a5570;
  uStack_1f8 = 1;
  puStack_228 = puVar6;
  func_0x00010736ab68(*(undefined8 *)(*plVar10 + 0x10),plVar10,&plStack_240,auStack_1c0,
                      appuStack_218,&UNK_10f40ae44);
  func_0x00010730e9d0(appuStack_218);
  func_0x00010730b1b0(auStack_1c0);
  func_0x00010730ea24(&plStack_240);
  FUN_1073637b0(&uStack_2f0);
  func_0x0001073637d0(&uStack_330);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_298);
  func_0x0001072ba554(&uStack_280);
  pplVar7 = &plStack_260;
  FUN_1073657c4();
  func_0x00010736a534(uStack_d0);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    pplVar4 = &plStack_240;
    func_0x00010726dd08();
    func_0x00010736a888();
    if (((ulong)pplVar4[1] & 1) == 0) {
      func_0x000104bdc2c8();
      func_0x00010736ae18();
      func_0x0001073637d0();
      pplVar4 = pplVar7;
      func_0x00010725c0a0();
      if (pplVar4 != (long **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      return pplVar7;
    }
    return pplVar4;
  }
  return pplVar7;
}



/* Entry: 107363380; end: 107363797;  */

long ** FUN_107363380(long param_1,long param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long **pplVar7;
  long **pplVar8;
  long lVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  long unaff_x19;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined1 uStack_274;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [24];
  ulong uStack_240;
  undefined1 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [24];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_168;
  undefined **appuStack_158 [3];
  undefined ***pppuStack_140;
  undefined1 uStack_138;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [192];
  undefined8 uStack_10;
  
  func_0x00010736aff4();
  func_0x00010736a6ac();
  uStack_10 = extraout_x8;
  __ZNSt3__16chrono12system_clock3nowEv();
  if (((char)param_4[1] == '\x01') && (FUN_107363798(param_4), 0 < *param_4)) {
    FUN_107363798(param_4);
    uVar10 = param_1 / 1000000 + (*param_4 / 60000000) * 0x3c;
    uVar13 = uVar10 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xff;
    uStack_274 = 1;
  }
  else {
    uStack_274 = 0;
    uVar10 = 0;
    uVar13 = 0;
  }
  lVar4 = unaff_x19 + 0x150;
  lVar9 = param_2;
  func_0x0001073653e8();
  if ((lVar4 == 0) || (*(long *)(lVar9 + 0x38) == *(long *)(lVar9 + 0x40))) {
    plStack_1a0 = (long *)((ulong)plStack_1a0 & 0xffffffffffffff00);
    uStack_190 = 0;
    plVar11 = (long *)*param_3;
  }
  else {
    FUN_107330040(&plStack_180);
    FUN_107354910(&plStack_180,(((long *)*param_3)[1] - *(long *)*param_3) / 0x70);
    lVar1 = ((long *)*param_3)[1];
    for (lVar4 = *(long *)*param_3; plVar11 = plStack_180, lVar4 != lVar1; lVar4 = lVar4 + 0x70) {
      func_0x000107298030(auStack_100);
      func_0x00010729c07c(auStack_100,lVar4);
      func_0x00010729c0b0(auStack_d0,lVar4 + 0x30);
      lVar2 = *(long *)(lVar9 + 0x40);
      for (lVar12 = *(long *)(lVar9 + 0x38); lVar12 != lVar2; lVar12 = lVar12 + 0x38) {
        lVar5 = lVar4 + 0x20;
        func_0x000107297a3c(lVar5,lVar12);
        if (lVar5 != 0) {
          FUN_1073654b8(appuStack_158,auStack_e0);
        }
      }
      func_0x00010735c8bc(&plStack_180,auStack_100);
      func_0x000107269394(auStack_100);
    }
    uStack_198 = uStack_178;
    plStack_1a0 = plStack_180;
    plStack_180 = (long *)0x0;
    uStack_178 = 0;
    uStack_190 = 1;
    func_0x00010726dd08(&plStack_180);
  }
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lVar9 = plVar11[1];
  for (lVar4 = *plVar11; uVar3 = lVar4 == lVar9, !(bool)uVar3; lVar4 = lVar4 + 0x70) {
    func_0x0001072692d4(auStack_100,lVar4);
    func_0x0001072d7368(appuStack_158,auStack_100);
    func_0x000107269e60(auStack_100);
    func_0x0001072ba220(&uStack_1c0,appuStack_158);
    func_0x000107932ce0(appuStack_158);
  }
  func_0x00010724ef84(auStack_1d8,param_2);
  plVar11 = *(long **)(unaff_x19 + 0x138);
  uStack_268 = uStack_1b8;
  uStack_270 = uStack_1c0;
  uStack_260 = uStack_1b0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_258,auStack_1d8);
  uStack_240 = uVar13 | uVar10;
  uStack_238 = uStack_274;
  func_0x00010736aef4(&uStack_230);
  puVar6 = &uStack_218;
  FUN_1073655b8(puVar6,&uStack_270);
  puStack_168 = (undefined8 *)0x0;
  func_0x00010736ad10();
  puVar6[2] = uStack_228;
  puVar6[1] = uStack_230;
  puVar6[4] = uStack_218;
  puVar6[3] = uStack_220;
  puVar6[6] = uStack_208;
  puVar6[5] = uStack_210;
  *puVar6 = &PTR_SUB_1109a5850;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_218 = 0;
  puVar6[8] = uStack_1f8;
  puVar6[7] = uStack_200;
  puVar6[9] = uStack_1f0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_200 = 0;
  puVar6[0xb] = uStack_1e0;
  puVar6[10] = uStack_1e8;
  auStack_100[0] = 0;
  auStack_e0[0] = 0;
  pppuStack_140 = appuStack_158;
  appuStack_158[0] = &PTR_FUN_1109a5570;
  uStack_138 = 1;
  puStack_168 = puVar6;
  func_0x00010736ab68(*(undefined8 *)(*plVar11 + 0x10),plVar11,&plStack_180,auStack_100,
                      appuStack_158,&UNK_10f40ae44);
  func_0x00010730e9d0(appuStack_158);
  func_0x00010730b1b0(auStack_100);
  func_0x00010730ea24(&plStack_180);
  FUN_1073637b0(&uStack_230);
  func_0x0001073637d0(&uStack_270);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d8);
  func_0x0001072ba554(&uStack_1c0);
  pplVar7 = &plStack_1a0;
  FUN_1073657c4();
  func_0x00010736a534(uStack_10);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    pplVar8 = &plStack_180;
    func_0x00010726dd08();
    func_0x00010736a888();
    if (((ulong)pplVar8[1] & 1) == 0) {
      func_0x000104bdc2c8();
      func_0x00010736ae18();
      func_0x0001073637d0();
      pplVar8 = pplVar7;
      func_0x00010725c0a0();
      if (pplVar8 != (long **)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      return pplVar7;
    }
    return pplVar8;
  }
  return pplVar7;
}



/* Entry: 107363798; end: 1073637af;  */

long FUN_107363798(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    return param_1;
  }
  func_0x000104bdc2c8();
  func_0x00010736ae18();
  func_0x0001073637d0();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1073637b0; end: 1073637f3;  */

long FUN_1073637b0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010736ae18();
  func_0x0001073637d0();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1073637f4; end: 10736398f;  */

long * FUN_1073637f4(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long *plVar3;
  long unaff_x20;
  undefined1 auStack_170 [32];
  undefined1 uStack_150;
  undefined1 auStack_148 [32];
  undefined1 uStack_128;
  long alStack_120 [7];
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010736a600();
  plVar3 = *(long **)(param_1 + 0x138);
  uStack_48 = extraout_x8;
  func_0x000104c2fe00(alStack_120);
  func_0x00010736ae8c(auStack_e8);
  FUN_107365324(&uStack_d0,unaff_x20 + 0x1b0);
  FUN_1073657e4(auStack_b8,alStack_120);
  puStack_50 = (undefined8 *)0x0;
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  *puVar1 = &PTR_FUN_1109a58d0;
  puVar1[2] = uStack_c8;
  puVar1[1] = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar1[3] = uStack_c0;
  func_0x000104c2fe00(puVar1 + 4,auStack_b8);
  func_0x00010726fe1c(puVar1 + 0xb,auStack_80);
  auStack_148[0] = 0;
  uStack_128 = 0;
  auStack_170[0] = 0;
  uStack_150 = 0;
  puStack_50 = puVar1;
  func_0x00010736ab68(*(undefined8 *)(*plVar3 + 0x10),plVar3,auStack_68,auStack_148,auStack_170,
                      &UNK_10f40ae50);
  func_0x00010730e9d0(auStack_170);
  func_0x00010730b1b0(auStack_148);
  func_0x00010736acd4();
  FUN_107363990(&uStack_d0);
  plVar2 = alStack_120;
  func_0x0001073639b0(plVar2);
  func_0x00010736a534(uStack_48);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x00010736a9e0();
  func_0x00010730e9d0();
  func_0x00010730b1b0(auStack_148);
  func_0x00010736acd4();
  FUN_107363990(&uStack_d0);
  func_0x0001073639b0(alStack_120);
  func_0x00010736a888();
  func_0x00010736ae18();
  func_0x0001073639b0();
  plVar2 = plVar3;
  func_0x00010725c0a0();
  if (plVar2 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return plVar3;
}



/* Entry: 107363990; end: 1073639d3;  */

long FUN_107363990(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010736ae18();
  func_0x0001073639b0();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1073639d4; end: 107363a1b;  */

void FUN_1073639d4(void)

{
  long unaff_x21;
  
  func_0x00010736a79c();
  FUN_107363a1c(unaff_x21 + 0x150);
  func_0x0001072e8af4();
  func_0x00010736ab84();
  return;
}



/* Entry: 107363a1c; end: 107363a3b;  */

void FUN_107363a1c(void)

{
  undefined1 auStack_28 [24];
  
  FUN_107367590(auStack_28);
  func_0x00010736ad18();
  return;
}



/* Entry: 107363a3c; end: 107363a9b;  */

void FUN_107363a3c(void)

{
  undefined1 in_ZR;
  long unaff_x21;
  
  func_0x00010736a79c();
  func_0x00010736af3c();
  if ((bool)in_ZR) {
    FUN_107363a9c(unaff_x21 + 0x170);
    FUN_107363abc();
  }
  else {
    func_0x000107363ae4(unaff_x21 + 0x170);
  }
  func_0x00010736ab84();
  return;
}



/* Entry: 107363a9c; end: 107363abb;  */

void FUN_107363a9c(void)

{
  undefined1 auStack_28 [24];
  
  FUN_1073675ec(auStack_28);
  func_0x00010736ad18();
  return;
}



/* Entry: 107363abc; end: 107363b1b;  */

undefined4 * FUN_107363abc(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x0001072e8af4(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 107363b1c; end: 107363b83;  */

void FUN_107363b1c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *unaff_x19;
  long unaff_x21;
  undefined1 auStack_40 [16];
  
  func_0x00010736aa20();
  func_0x00010736a820();
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  lVar1 = unaff_x21 + 0x170;
  FUN_107363b84(lVar1,param_2);
  if (lVar1 == 0) {
    *unaff_x19 = 0;
    unaff_x19[0x20] = 0;
  }
  else {
    FUN_10736581c();
  }
  func_0x000100100f40(auStack_40);
  return;
}



/* Entry: 107363b84; end: 107363ba3;  */

void FUN_107363b84(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x27;
  
  func_0x00010736a51c();
  func_0x00010736a7d4();
  func_0x00010736a900();
  func_0x00010736a58c();
  while( true ) {
    func_0x00010736a7e4();
    while (unaff_x27 != 0) {
      func_0x00010736a7b8();
      if ((int)param_1 != 0) {
        func_0x00010736af48();
        return;
      }
      func_0x00010736addc();
    }
    func_0x00010736a78c();
    if ((extraout_x8 & 1) != 0) break;
    func_0x00010736af54();
  }
  return;
}



/* Entry: 107363ba4; end: 107363be7;  */

void FUN_107363ba4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  long unaff_x21;
  
  func_0x00010736a79c();
  puVar1 = (undefined1 *)(unaff_x21 + 400);
  FUN_107363be8();
  *puVar1 = param_3;
  func_0x00010736ab84();
  return;
}



/* Entry: 107363be8; end: 107363c07;  */

void FUN_107363be8(void)

{
  undefined1 auStack_28 [24];
  
  FUN_10736789c(auStack_28);
  func_0x00010736ad18();
  return;
}



/* Entry: 107363c08; end: 107363c5f;  */

byte FUN_107363c08(void)

{
  long lVar1;
  byte bVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x00010736a934();
  func_0x00010736a820();
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  lVar1 = unaff_x20 + 400;
  FUN_107363c60();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(unaff_x19 + 0x38);
  }
  func_0x000100100f40(auStack_30);
  return bVar2 & 1;
}



/* Entry: 107363c60; end: 107363c7f;  */

long FUN_107363c60(void)

{
  long lVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 unaff_d8;
  undefined8 uVar5;
  
  func_0x00010736a51c();
  func_0x00010736a7d4();
  func_0x00010736a900();
  func_0x00010736a58c();
  uVar2 = extraout_x8;
  while( true ) {
    uVar2 = uVar2 & unaff_x22;
    uVar5 = *(undefined8 *)(unaff_x23 + uVar2);
    for (uVar3 = CONCAT17(-((char)((ulong)uVar5 >> 0x38) == (char)((ulong)unaff_d8 >> 0x38)),
                          CONCAT16(-((char)((ulong)uVar5 >> 0x30) == (char)((ulong)unaff_d8 >> 0x30)
                                    ),CONCAT15(-((char)((ulong)uVar5 >> 0x28) ==
                                                (char)((ulong)unaff_d8 >> 0x28)),
                                               CONCAT14(-((char)((ulong)uVar5 >> 0x20) ==
                                                         (char)((ulong)unaff_d8 >> 0x20)),
                                                        CONCAT13(-((char)((ulong)uVar5 >> 0x18) ==
                                                                  (char)((ulong)unaff_d8 >> 0x18)),
                                                                 CONCAT12(-((char)((ulong)uVar5 >>
                                                                                  0x10) ==
                                                                           (char)((ulong)unaff_d8 >>
                                                                                 0x10)),
                                                                          CONCAT11(-((char)((ulong)
                                                  uVar5 >> 8) == (char)((ulong)unaff_d8 >> 8)),
                                                  -((char)uVar5 == (char)unaff_d8)))))))) &
                 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar4 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar2 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & unaff_x22;
      lVar1 = unaff_x24 + uVar4 * 0x40;
      func_0x000104c32db4(lVar1,unaff_x20);
      if ((int)lVar1 != 0) {
        return *unaff_x19 + uVar4;
      }
    }
    func_0x00010736a78c();
    if ((extraout_x8_00 & 1) != 0) break;
    unaff_x21 = unaff_x21 + 8;
    uVar2 = unaff_x21 + uVar2;
  }
  return 0;
}



/* Entry: 107363c80; end: 107363e5b;  */

undefined1 * FUN_107363c80(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 auStack_1a8 [24];
  byte bStack_190;
  undefined1 auStack_178 [80];
  undefined1 auStack_128 [24];
  undefined8 *puStack_110;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  func_0x00010736a4fc();
  func_0x00010736a84c();
  func_0x00010736aedc();
  func_0x00010736a5f0(auStack_1a8);
  func_0x00010736ab60();
  if ((bStack_190 & 1) == 0) {
    func_0x00010736af60();
    if (!(bool)in_ZR) goto LAB_107363d98;
    func_0x00010736aebc();
    func_0x00010736aa04(auStack_b8);
    func_0x00010736aaf0();
    func_0x00010736aaa0();
    func_0x00010736a964();
    func_0x00010736aae8();
    func_0x00010736acb0();
    func_0x00010736aec4();
    func_0x00010736abec();
    func_0x00010736a5f0(&stack0xfffffffffffffef8);
    FUN_107326484(auStack_1a8,&stack0xfffffffffffffef8);
    param_1 = &stack0xfffffffffffffef8;
    func_0x0001072b9760();
    func_0x00010736a9d0();
    in_ZR = bStack_190 == 1;
    if (!(bool)in_ZR) goto LAB_107363d98;
  }
  func_0x00010736a984();
  func_0x0001072c0298(auStack_c8);
  FUN_107363e5c(auStack_178,&stack0xfffffffffffffef8);
  puStack_110 = (undefined8 *)0x0;
  puVar1 = (undefined8 *)0x58;
  __Znwm();
  *puVar1 = &PTR_SUB_1109a5a10;
  FUN_107363e5c(puVar1 + 1,auStack_178);
  puStack_110 = puVar1;
  func_0x00010736a744();
  FUN_1073671cc(auStack_128);
  FUN_107363e84(auStack_178);
  param_1 = &stack0xfffffffffffffef8;
  FUN_107363e84();
LAB_107363d98:
  func_0x00010736aae0();
  func_0x00010736ab14();
  func_0x00010736a534(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001072b9760(&stack0xfffffffffffffef8);
  func_0x00010736a9d0();
  func_0x00010736aae0();
  func_0x00010736ab14();
  func_0x00010736a888();
  func_0x00010736a68c();
  func_0x00010736ac18();
  FUN_10731e7b8();
  return param_1;
}



/* Entry: 107363e5c; end: 107363e83;  */

void FUN_107363e5c(void)

{
  func_0x00010736a68c();
  func_0x00010736ac18();
  FUN_10731e7b8();
  return;
}



/* Entry: 107363e84; end: 107363ea7;  */

void FUN_107363e84(void)

{
  func_0x00010736ae3c();
  func_0x00010726dd08();
  func_0x00010736aa7c();
  return;
}



/* Entry: 107363ea8; end: 107364063;  */

void FUN_107363ea8(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_1f8 [24];
  byte bStack_1e0;
  undefined1 auStack_1c8 [120];
  undefined1 auStack_150 [24];
  undefined1 *puStack_138;
  undefined1 auStack_130 [120];
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  func_0x00010736a4fc();
  func_0x00010736a84c();
  func_0x00010736aedc();
  func_0x00010736a5f0(auStack_1f8);
  func_0x00010736ab60();
  if ((bStack_1e0 & 1) == 0) {
    func_0x00010736af60();
    if (!(bool)in_ZR) goto LAB_107363fa8;
    func_0x00010736aebc();
    func_0x00010736aa04(auStack_b8);
    func_0x00010736aaf0();
    func_0x00010736aaa0();
    func_0x00010736a964();
    func_0x00010736aae8();
    func_0x00010736acb0();
    func_0x00010736aec4();
    func_0x00010736abec();
    func_0x00010736a5f0(auStack_130);
    FUN_107326484(auStack_1f8,auStack_130);
    func_0x0001072b9760(auStack_130);
    func_0x00010736a9d0();
    in_ZR = bStack_1e0 == 1;
    if (!(bool)in_ZR) goto LAB_107363fa8;
  }
  FUN_107325f14(auStack_130);
  puVar1 = auStack_1c8;
  FUN_107325f14(puVar1,auStack_130);
  puStack_138 = (undefined1 *)0x0;
  func_0x00010736ad68();
  func_0x00010736adbc();
  FUN_107325f14();
  puStack_138 = puVar1;
  func_0x00010736a744();
  FUN_1073671cc(auStack_150);
  FUN_107327aec(auStack_1c8);
  FUN_107327aec(auStack_130);
LAB_107363fa8:
  func_0x00010736aae0();
  func_0x00010736ab14();
  func_0x00010736a534(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072b9760(auStack_130);
  func_0x00010736a9d0();
  func_0x00010736aae0();
  do {
    func_0x00010736ab14();
    func_0x00010736a888();
    func_0x00010736ab60();
  } while( true );
}



/* Entry: 107364064; end: 107364183;  */

undefined1 * FUN_107364064(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_188 [24];
  byte bStack_170;
  undefined8 auStack_158 [15];
  undefined1 auStack_e0 [24];
  undefined8 *puStack_c8;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x00010736a4fc();
  uStack_48 = extraout_x8;
  func_0x00010736a6f0();
  func_0x00010736ab7c();
  func_0x00010736a5f0(auStack_188);
  func_0x00010736a99c();
  if ((bStack_170 & 1) != 0) {
    func_0x00010736a984();
    func_0x000104c2fe00(auStack_80);
    puVar1 = auStack_158;
    FUN_107364184(puVar1,&stack0xffffffffffffff40);
    puStack_c8 = (undefined8 *)0x0;
    func_0x00010736ad68();
    *puVar1 = &PTR_SUB_1109a5b10;
    FUN_107364184(puVar1 + 1,auStack_158);
    puStack_c8 = puVar1;
    func_0x00010736a744();
    FUN_1073671cc(auStack_e0);
    FUN_1073641ac(auStack_158);
    param_1 = &stack0xffffffffffffff40;
    FUN_1073641ac();
  }
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010736a534(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1073671cc(auStack_e0);
  FUN_1073641ac(auStack_158);
  FUN_1073641ac(&stack0xffffffffffffff40);
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010736a888();
  func_0x00010736a68c();
  func_0x00010736ac18();
  func_0x000104c2fe00();
  return param_1;
}



/* Entry: 107364184; end: 1073641ab;  */

void FUN_107364184(void)

{
  func_0x00010736a68c();
  func_0x00010736ac18();
  func_0x000104c2fe00();
  return;
}



/* Entry: 1073641ac; end: 1073641cf;  */

void FUN_1073641ac(void)

{
  func_0x00010736ae3c();
  func_0x000104c2f714();
  func_0x00010736aa7c();
  return;
}



/* Entry: 1073641d0; end: 10736430b;  */

undefined1 * FUN_1073641d0(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_148 [24];
  byte bStack_130;
  undefined8 auStack_118 [11];
  undefined1 auStack_c0 [24];
  undefined8 *puStack_a8;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  func_0x00010736a4fc();
  uStack_48 = extraout_x8;
  func_0x00010736a6f0();
  func_0x00010736ab7c();
  func_0x00010736a5f0(auStack_148);
  func_0x00010736a99c();
  if ((bStack_130 & 1) != 0) {
    func_0x00010736a984();
    func_0x00010736ae8c(auStack_60);
    puVar1 = auStack_118;
    FUN_10736430c(puVar1,&stack0xffffffffffffff60);
    puStack_a8 = (undefined8 *)0x0;
    func_0x00010736ad10();
    *puVar1 = &PTR_SUB_1109a5b90;
    FUN_10736430c(puVar1 + 1,auStack_118);
    puStack_a8 = puVar1;
    func_0x00010736a744();
    FUN_1073671cc(auStack_c0);
    FUN_107364340(auStack_118);
    param_1 = &stack0xffffffffffffff60;
    FUN_107364340();
  }
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010736a534(uStack_48);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1073671cc(auStack_c0);
  FUN_107364340(auStack_118);
  FUN_107364340(&stack0xffffffffffffff60);
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010736a888();
  func_0x00010736a68c();
  func_0x00010736ac18();
  func_0x00010726fe1c();
  return param_1;
}



/* Entry: 10736430c; end: 10736433f;  */

void FUN_10736430c(void)

{
  func_0x00010736a68c();
  func_0x00010736ac18();
  func_0x00010726fe1c();
  return;
}



/* Entry: 107364340; end: 107364363;  */

void FUN_107364340(void)

{
  func_0x00010736ae3c();
  func_0x00010726e078();
  func_0x00010736aa7c();
  return;
}



/* Entry: 107364364; end: 10736449f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_107364364(long param_1,undefined8 *****param_2,undefined8 param_3,undefined ***param_4,
             undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 *******pppppppuVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *******pppppppuVar4;
  undefined ***pppuVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 *unaff_x19;
  undefined8 *******unaff_x21;
  undefined8 auStack_2d0 [5];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [16];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  byte bStack_250;
  undefined8 *******pppppppuStack_248;
  undefined1 uStack_240;
  undefined1 auStack_238 [24];
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 ****appppuStack_1b8 [3];
  byte bStack_1a0;
  undefined1 *puStack_198;
  undefined1 uStack_190;
  undefined **ppuStack_188;
  undefined8 *******pppppppuStack_180;
  undefined ***pppuStack_170;
  undefined8 uStack_168;
  undefined ***pppuStack_160;
  undefined1 auStack_110 [24];
  byte bStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined **ppuStack_e0;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined ***pppuStack_c8;
  undefined8 ******appppppuStack_c0 [14];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  pppuVar5 = param_4;
  func_0x00010736aa20();
  func_0x00010736a614();
  appppppuStack_c0[0]._0_1_ = 0;
  uStack_50 = 0;
  lStack_f0 = param_1 + 0x20;
  uStack_e8 = 1;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  func_0x00010736abec();
  FUN_107363050(auStack_110);
  func_0x00010736a9d0();
  if ((bStack_f8 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[0x70] = 0;
  }
  else {
    puStack_d8 = (undefined1 *)appppppuStack_c0;
    ppuStack_e0 = &PTR_FUN_1109a5c10;
    pppuStack_c8 = &ppuStack_e0;
    pppuVar5 = &ppuStack_e0;
    pppuStack_d0 = param_4;
    func_0x00010736aeb0();
    FUN_1073671cc(&ppuStack_e0);
    param_2 = appppppuStack_c0;
    FUN_107365860();
  }
  func_0x0001072b9760(auStack_110);
  func_0x000100100f40(&lStack_f0);
  pppppppuVar1 = appppppuStack_c0;
  func_0x0001072ba200();
  func_0x00010736a534(uStack_48);
  if ((bool)in_ZR) {
    return pppppppuVar1;
  }
  ___stack_chk_fail();
  FUN_1073671cc(&ppuStack_e0);
  func_0x0001072b9760(auStack_110);
  func_0x000100100f40(&lStack_f0);
  puVar2 = (undefined1 *)appppppuStack_c0;
  func_0x0001072ba200();
  func_0x00010736a888();
  pppuStack_160 = param_4;
  func_0x00010736aa20();
  func_0x00010736a6c0();
  uStack_168 = extraout_x8;
  *pppppppuVar1 = (undefined8 ******)0x0;
  pppppppuVar1[1] = (undefined8 ******)0x0;
  pppppppuVar1[2] = (undefined8 ******)0x0;
  puStack_198 = puVar2 + 0x20;
  uStack_190 = 1;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  func_0x00010736ab7c();
  FUN_107363050(appppuStack_1b8);
  func_0x00010736a99c();
  if ((bStack_1a0 & 1) != 0) {
    ppuStack_188 = &PTR_DAT_1109a5c90;
    pppuStack_170 = &ppuStack_188;
    param_2 = appppuStack_1b8;
    pppuVar5 = &ppuStack_188;
    pppppppuStack_180 = pppppppuVar1;
    func_0x00010736aeb0();
    func_0x00010736ab94();
  }
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010736a534(uStack_168);
  if ((bool)in_ZR) {
    return unaff_x21;
  }
  ___stack_chk_fail();
  func_0x00010736ab94();
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010726e43c();
  func_0x00010736a89c();
  puVar3 = auStack_2d0;
  func_0x00010736a600();
  pppppppuStack_248 = pppppppuVar1 + 4;
  uStack_240 = 1;
  uStack_218 = extraout_x8_00;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  func_0x00010002b838(auStack_280,&UNK_10f40ad98);
  func_0x00010736a92c(auStack_268,unaff_x21,param_2);
  func_0x00010736acdc();
  if ((bStack_250 & 1) != 0) {
    func_0x00010726fe1c(auStack_2a8,pppuVar5);
    func_0x0001072c0298(auStack_290,param_5);
    FUN_107364718(auStack_2d0,auStack_2a8);
    puStack_220 = (undefined8 *)0x0;
    func_0x00010736ab74();
    *puVar3 = &PTR_FUN_1109a5d10;
    FUN_107364718(puVar3 + 1,auStack_2d0);
    puStack_220 = puVar3;
    func_0x00010736a744();
    FUN_1073671cc(auStack_238);
    func_0x000107364744(auStack_2d0);
    func_0x000107364744(auStack_2a8);
  }
  func_0x0001072b9760(auStack_268);
  pppppppuVar1 = &pppppppuStack_248;
  func_0x000100100f40();
  func_0x00010736a534(uStack_218);
  if ((bool)in_ZR) {
    return pppppppuVar1;
  }
  ___stack_chk_fail();
  FUN_1073671cc(auStack_238);
  func_0x000107364744(auStack_2d0);
  func_0x000107364744(auStack_2a8);
  func_0x0001072b9760(auStack_268);
  pppppppuVar4 = &pppppppuStack_248;
  func_0x000100100f40(pppppppuVar4);
  func_0x00010736a888();
  func_0x00010736a934();
  func_0x00010726fe1c();
  FUN_10731e7b8(pppppppuVar4 + 3,pppppppuVar1 + 3);
  return unaff_x21;
}



/* Entry: 1073644a0; end: 10736458b;  */

undefined8 **
FUN_1073644a0(long param_1,undefined1 *param_2,undefined8 param_3,undefined ***param_4,
             undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *unaff_x19;
  undefined8 **unaff_x21;
  undefined8 auStack_1a0 [5];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  byte bStack_120;
  undefined8 *puStack_118;
  undefined1 uStack_110;
  undefined1 auStack_108 [24];
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_88 [24];
  byte bStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined **ppuStack_58;
  
  func_0x00010736aa20();
  func_0x00010736a6c0();
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  lStack_68 = param_1 + 0x20;
  uStack_60 = 1;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  func_0x00010736ab7c();
  FUN_107363050(auStack_88);
  func_0x00010736a99c();
  if ((bStack_70 & 1) != 0) {
    ppuStack_58 = &PTR_DAT_1109a5c90;
    param_2 = auStack_88;
    param_4 = &ppuStack_58;
    func_0x00010736aeb0();
    func_0x00010736ab94();
  }
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010736a534(extraout_x8);
  if ((bool)in_ZR) {
    return unaff_x21;
  }
  ___stack_chk_fail();
  func_0x00010736ab94();
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010726e43c();
  func_0x00010736a89c();
  puVar1 = auStack_1a0;
  func_0x00010736a600();
  puStack_118 = unaff_x19 + 4;
  uStack_110 = 1;
  uStack_e8 = extraout_x8_00;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  func_0x00010002b838(auStack_150,&UNK_10f40ad98);
  func_0x00010736a92c(auStack_138,unaff_x21,param_2);
  func_0x00010736acdc();
  if ((bStack_120 & 1) != 0) {
    func_0x00010726fe1c(auStack_178,param_4);
    func_0x0001072c0298(auStack_160,param_5);
    FUN_107364718(auStack_1a0,auStack_178);
    puStack_f0 = (undefined8 *)0x0;
    func_0x00010736ab74();
    *puVar1 = &PTR_FUN_1109a5d10;
    FUN_107364718(puVar1 + 1,auStack_1a0);
    puStack_f0 = puVar1;
    func_0x00010736a744();
    FUN_1073671cc(auStack_108);
    func_0x000107364744(auStack_1a0);
    func_0x000107364744(auStack_178);
  }
  func_0x0001072b9760(auStack_138);
  ppuVar2 = &puStack_118;
  func_0x000100100f40();
  func_0x00010736a534(uStack_e8);
  if ((bool)in_ZR) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  FUN_1073671cc(auStack_108);
  func_0x000107364744(auStack_1a0);
  func_0x000107364744(auStack_178);
  func_0x0001072b9760(auStack_138);
  ppuVar3 = &puStack_118;
  func_0x000100100f40(ppuVar3);
  func_0x00010736a888();
  func_0x00010736a934();
  func_0x00010726fe1c();
  FUN_10731e7b8(ppuVar3 + 3,ppuVar2 + 3);
  return unaff_x21;
}



/* Entry: 10736458c; end: 107364717;  */

void FUN_10736458c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 auStack_100 [5];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  byte bStack_80;
  long lStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = auStack_100;
  func_0x00010736a600();
  lStack_78 = param_1 + 0x20;
  uStack_70 = 1;
  uStack_48 = extraout_x8;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  func_0x00010002b838(auStack_b0,&UNK_10f40ad98);
  func_0x00010736a92c(auStack_98);
  func_0x00010736acdc();
  if ((bStack_80 & 1) != 0) {
    func_0x00010726fe1c(auStack_d8,param_4);
    func_0x0001072c0298(auStack_c0,param_5);
    FUN_107364718(auStack_100,auStack_d8);
    puStack_50 = (undefined8 *)0x0;
    func_0x00010736ab74();
    *puVar1 = &PTR_FUN_1109a5d10;
    FUN_107364718(puVar1 + 1,auStack_100);
    puStack_50 = puVar1;
    func_0x00010736a744();
    FUN_1073671cc(auStack_68);
    func_0x000107364744(auStack_100);
    func_0x000107364744(auStack_d8);
  }
  func_0x0001072b9760(auStack_98);
  plVar2 = &lStack_78;
  func_0x000100100f40();
  func_0x00010736a534(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1073671cc(auStack_68);
  func_0x000107364744(auStack_100);
  func_0x000107364744(auStack_d8);
  func_0x0001072b9760(auStack_98);
  plVar3 = &lStack_78;
  func_0x000100100f40(plVar3);
  func_0x00010736a888();
  func_0x00010736a934();
  func_0x00010726fe1c();
  FUN_10731e7b8(plVar3 + 3,plVar2 + 3);
  return;
}



/* Entry: 107364718; end: 107364767;  */

void FUN_107364718(long param_1)

{
  long unaff_x19;
  
  func_0x00010736a934();
  func_0x00010726fe1c();
  FUN_10731e7b8(param_1 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 107364768; end: 107364873;  */

void FUN_107364768(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long unaff_x20;
  undefined1 *unaff_x21;
  long lStack_440;
  undefined1 uStack_438;
  undefined1 auStack_3e8 [24];
  byte bStack_3d0;
  undefined **appuStack_3b8 [3];
  undefined ***pppuStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_348 [24];
  byte bStack_330;
  undefined **appuStack_318 [3];
  undefined ***pppuStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [48];
  undefined1 auStack_278 [24];
  byte bStack_260;
  undefined1 *puStack_230;
  undefined8 uStack_228;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  byte bStack_190;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined1 auStack_108 [24];
  byte bStack_f0;
  undefined1 auStack_d8 [56];
  undefined1 auStack_a0 [24];
  undefined1 *puStack_88;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x00010736a4fc();
  uStack_48 = extraout_x8;
  func_0x00010736a6f0();
  func_0x00010736ab7c();
  func_0x00010736a5f0(auStack_108);
  func_0x00010736a99c();
  if ((bStack_f0 & 1) != 0) {
    func_0x000104c2fe00(auStack_80);
    unaff_x21 = auStack_d8;
    func_0x000104c2fe00(unaff_x21,auStack_80);
    puStack_88 = (undefined1 *)0x0;
    func_0x00010736ac84();
    func_0x00010736adac();
    func_0x000104c2fe00();
    puStack_88 = unaff_x21;
    func_0x00010736a744();
    FUN_1073671cc(auStack_a0);
    func_0x000104c2f714(auStack_d8);
    func_0x000104c2f714();
  }
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010736a534(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1073671cc(auStack_a0);
  func_0x000104c2f714(auStack_d8);
  func_0x000104c2f714(auStack_80);
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010736a888();
  puVar1 = auStack_1f0;
  func_0x00010736a4fc();
  func_0x00010736aa64();
  func_0x00010002b838(auStack_1c0,&UNK_10f40adbe);
  func_0x00010736a5f0(auStack_1a8);
  func_0x00010736ac58();
  if ((bStack_190 & 1) != 0) {
    func_0x00010736ae8c(auStack_1d8);
    func_0x00010726fe1c(auStack_1f0,auStack_1d8);
    puStack_160 = (undefined1 *)0x0;
    func_0x00010736aa8c();
    func_0x00010736ad8c();
    func_0x00010726fe1c();
    puStack_160 = puVar1;
    func_0x00010736a744();
    func_0x00010736ac7c();
    func_0x00010726e078(auStack_1f0);
    func_0x00010726e078();
    unaff_x21 = puVar1;
  }
  func_0x00010736ad48();
  func_0x00010736accc();
  func_0x00010736a534(uStack_158);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010736ac7c();
    func_0x00010726e078(auStack_1f0);
    func_0x00010726e078(auStack_1d8);
    func_0x00010736ad48();
    func_0x00010736accc();
    func_0x00010736a888();
    puVar1 = auStack_2c0;
    func_0x00010736a4fc();
    func_0x00010736aa64();
    puVar2 = &UNK_10f40add7;
    func_0x00010002b838();
    func_0x00010736a5f0(auStack_278);
    func_0x00010736ac58();
    if ((bStack_260 & 1) != 0) {
      FUN_1073658bc(auStack_2a8,unaff_x21);
      FUN_1073658bc(auStack_2c0,auStack_2a8);
      puStack_230 = (undefined1 *)0x0;
      func_0x00010736aa8c();
      func_0x00010736ad7c();
      FUN_1073658bc();
      puVar2 = auStack_278;
      puStack_230 = puVar1;
      func_0x00010736a744();
      func_0x00010736ac7c();
      func_0x00010725aef4(auStack_2c0);
      func_0x00010725aef4();
    }
    func_0x00010736ad48();
    func_0x00010736accc();
    func_0x00010736a534(uStack_228);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010736ac7c();
      func_0x00010725aef4(auStack_2c0);
      func_0x00010725aef4(auStack_2a8);
      func_0x00010736ad48();
      func_0x00010736accc();
      func_0x00010736a888();
      func_0x00010736a600();
      uStack_2f8 = extraout_x8_00;
      func_0x00010736a6f0();
      func_0x00010736ab7c();
      func_0x00010736a92c(auStack_348);
      func_0x00010736a99c();
      if ((bStack_330 & 1) != 0) {
        pppuStack_300 = appuStack_318;
        appuStack_318[0] = &PTR_FUN_1109a5f10;
        puVar2 = auStack_348;
        func_0x00010736a744();
        func_0x00010736ab94();
      }
      func_0x00010736a954();
      func_0x00010736a95c();
      func_0x00010736a534(uStack_2f8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010736ab94();
        func_0x00010736a954();
        func_0x00010736a95c();
        func_0x00010736a888();
        func_0x00010736a600();
        uStack_398 = extraout_x8_01;
        func_0x00010736a6f0();
        func_0x00010736ab7c();
        func_0x00010736a92c(auStack_3e8);
        func_0x00010736a99c();
        if ((bStack_3d0 & 1) != 0) {
          pppuStack_3a0 = appuStack_3b8;
          appuStack_3b8[0] = &PTR_DAT_1109a5f90;
          puVar2 = auStack_3e8;
          func_0x00010736a744();
          func_0x00010736ab94();
        }
        func_0x00010736a954();
        func_0x00010736a95c();
        func_0x00010736a534(uStack_398);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010736ab94();
          func_0x00010736a954();
          func_0x00010736a95c();
          func_0x00010736a888();
          lStack_440 = unaff_x20 + 0x20;
          uStack_438 = 1;
          __ZNSt3__119__shared_mutex_base11lock_sharedEv();
          func_0x00010736abec();
          func_0x00010736a92c(extraout_x8_02,unaff_x20,puVar2);
          func_0x00010736a9d0();
          func_0x000100100f40(&lStack_440);
          return;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 107364874; end: 10736497b;  */

void FUN_107364874(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x20;
  undefined1 *unaff_x21;
  long lStack_320;
  undefined1 uStack_318;
  undefined1 auStack_2c8 [24];
  byte bStack_2b0;
  undefined **appuStack_298 [3];
  undefined ***pppuStack_280;
  undefined8 uStack_278;
  undefined1 auStack_228 [24];
  byte bStack_210;
  undefined **appuStack_1f8 [3];
  undefined ***pppuStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [48];
  undefined1 auStack_158 [24];
  byte bStack_140;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  byte bStack_70;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_d0;
  func_0x00010736a4fc();
  func_0x00010736aa64();
  func_0x00010002b838(auStack_a0,&UNK_10f40adbe);
  func_0x00010736a5f0(auStack_88);
  func_0x00010736ac58();
  if ((bStack_70 & 1) != 0) {
    func_0x00010736ae8c(auStack_b8);
    func_0x00010726fe1c(auStack_d0,auStack_b8);
    puStack_40 = (undefined1 *)0x0;
    func_0x00010736aa8c();
    func_0x00010736ad8c();
    func_0x00010726fe1c();
    puStack_40 = puVar1;
    func_0x00010736a744();
    func_0x00010736ac7c();
    func_0x00010726e078(auStack_d0);
    func_0x00010726e078();
    unaff_x21 = puVar1;
  }
  func_0x00010736ad48();
  func_0x00010736accc();
  func_0x00010736a534(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010736ac7c();
    func_0x00010726e078(auStack_d0);
    func_0x00010726e078(auStack_b8);
    func_0x00010736ad48();
    func_0x00010736accc();
    func_0x00010736a888();
    puVar1 = auStack_1a0;
    func_0x00010736a4fc();
    func_0x00010736aa64();
    puVar2 = &UNK_10f40add7;
    func_0x00010002b838();
    func_0x00010736a5f0(auStack_158);
    func_0x00010736ac58();
    if ((bStack_140 & 1) != 0) {
      FUN_1073658bc(auStack_188,unaff_x21);
      FUN_1073658bc(auStack_1a0,auStack_188);
      puStack_110 = (undefined1 *)0x0;
      func_0x00010736aa8c();
      func_0x00010736ad7c();
      FUN_1073658bc();
      puVar2 = auStack_158;
      puStack_110 = puVar1;
      func_0x00010736a744();
      func_0x00010736ac7c();
      func_0x00010725aef4(auStack_1a0);
      func_0x00010725aef4();
    }
    func_0x00010736ad48();
    func_0x00010736accc();
    func_0x00010736a534(uStack_108);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010736ac7c();
      func_0x00010725aef4(auStack_1a0);
      func_0x00010725aef4(auStack_188);
      func_0x00010736ad48();
      func_0x00010736accc();
      func_0x00010736a888();
      func_0x00010736a600();
      uStack_1d8 = extraout_x8;
      func_0x00010736a6f0();
      func_0x00010736ab7c();
      func_0x00010736a92c(auStack_228);
      func_0x00010736a99c();
      if ((bStack_210 & 1) != 0) {
        pppuStack_1e0 = appuStack_1f8;
        appuStack_1f8[0] = &PTR_FUN_1109a5f10;
        puVar2 = auStack_228;
        func_0x00010736a744();
        func_0x00010736ab94();
      }
      func_0x00010736a954();
      func_0x00010736a95c();
      func_0x00010736a534(uStack_1d8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010736ab94();
        func_0x00010736a954();
        func_0x00010736a95c();
        func_0x00010736a888();
        func_0x00010736a600();
        uStack_278 = extraout_x8_00;
        func_0x00010736a6f0();
        func_0x00010736ab7c();
        func_0x00010736a92c(auStack_2c8);
        func_0x00010736a99c();
        if ((bStack_2b0 & 1) != 0) {
          pppuStack_280 = appuStack_298;
          appuStack_298[0] = &PTR_DAT_1109a5f90;
          puVar2 = auStack_2c8;
          func_0x00010736a744();
          func_0x00010736ab94();
        }
        func_0x00010736a954();
        func_0x00010736a95c();
        func_0x00010736a534(uStack_278);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010736ab94();
          func_0x00010736a954();
          func_0x00010736a95c();
          func_0x00010736a888();
          lStack_320 = unaff_x20 + 0x20;
          uStack_318 = 1;
          __ZNSt3__119__shared_mutex_base11lock_sharedEv();
          func_0x00010736abec();
          func_0x00010736a92c(extraout_x8_01,unaff_x20,puVar2);
          func_0x00010736a9d0();
          func_0x000100100f40(&lStack_320);
          return;
        }
      }
      return;
    }
  }
  return;
}



/* Entry: 10736497c; end: 107364a87;  */

void FUN_10736497c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x20;
  long lStack_250;
  undefined1 uStack_248;
  undefined1 auStack_1f8 [24];
  byte bStack_1e0;
  undefined **appuStack_1c8 [3];
  undefined ***pppuStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_158 [24];
  byte bStack_140;
  undefined **appuStack_128 [3];
  undefined ***pppuStack_110;
  undefined8 uStack_108;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [24];
  byte bStack_70;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_d0;
  func_0x00010736a4fc();
  func_0x00010736aa64();
  puVar2 = &UNK_10f40add7;
  func_0x00010002b838();
  func_0x00010736a5f0(auStack_88);
  func_0x00010736ac58();
  if ((bStack_70 & 1) != 0) {
    FUN_1073658bc(auStack_b8);
    FUN_1073658bc(auStack_d0,auStack_b8);
    puStack_40 = (undefined1 *)0x0;
    func_0x00010736aa8c();
    func_0x00010736ad7c();
    FUN_1073658bc();
    puVar2 = auStack_88;
    puStack_40 = puVar1;
    func_0x00010736a744();
    func_0x00010736ac7c();
    func_0x00010725aef4(auStack_d0);
    func_0x00010725aef4();
  }
  func_0x00010736ad48();
  func_0x00010736accc();
  func_0x00010736a534(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010736ac7c();
  func_0x00010725aef4(auStack_d0);
  func_0x00010725aef4(auStack_b8);
  func_0x00010736ad48();
  func_0x00010736accc();
  func_0x00010736a888();
  func_0x00010736a600();
  uStack_108 = extraout_x8;
  func_0x00010736a6f0();
  func_0x00010736ab7c();
  func_0x00010736a92c(auStack_158);
  func_0x00010736a99c();
  if ((bStack_140 & 1) != 0) {
    pppuStack_110 = appuStack_128;
    appuStack_128[0] = &PTR_FUN_1109a5f10;
    puVar2 = auStack_158;
    func_0x00010736a744();
    func_0x00010736ab94();
  }
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010736a534(uStack_108);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010736ab94();
    func_0x00010736a954();
    func_0x00010736a95c();
    func_0x00010736a888();
    func_0x00010736a600();
    uStack_1a8 = extraout_x8_00;
    func_0x00010736a6f0();
    func_0x00010736ab7c();
    func_0x00010736a92c(auStack_1f8);
    func_0x00010736a99c();
    if ((bStack_1e0 & 1) != 0) {
      pppuStack_1b0 = appuStack_1c8;
      appuStack_1c8[0] = &PTR_DAT_1109a5f90;
      puVar2 = auStack_1f8;
      func_0x00010736a744();
      func_0x00010736ab94();
    }
    func_0x00010736a954();
    func_0x00010736a95c();
    func_0x00010736a534(uStack_1a8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010736ab94();
      func_0x00010736a954();
      func_0x00010736a95c();
      func_0x00010736a888();
      lStack_250 = unaff_x20 + 0x20;
      uStack_248 = 1;
      __ZNSt3__119__shared_mutex_base11lock_sharedEv();
      func_0x00010736abec();
      func_0x00010736a92c(extraout_x8_01,unaff_x20,puVar2);
      func_0x00010736a9d0();
      func_0x000100100f40(&lStack_250);
      return;
    }
  }
  return;
}



/* Entry: 107364a88; end: 107364b3f;  */

void FUN_107364a88(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x20;
  long lStack_180;
  undefined1 uStack_178;
  undefined1 auStack_128 [24];
  byte bStack_110;
  undefined **appuStack_f8 [3];
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_88 [24];
  byte bStack_70;
  undefined **appuStack_58 [3];
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  func_0x00010736a600();
  uStack_38 = extraout_x8;
  func_0x00010736a6f0();
  func_0x00010736ab7c();
  func_0x00010736a92c(auStack_88);
  func_0x00010736a99c();
  if ((bStack_70 & 1) != 0) {
    pppuStack_40 = appuStack_58;
    appuStack_58[0] = &PTR_FUN_1109a5f10;
    param_2 = auStack_88;
    func_0x00010736a744();
    func_0x00010736ab94();
  }
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010736a534(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010736ab94();
    func_0x00010736a954();
    func_0x00010736a95c();
    func_0x00010736a888();
    func_0x00010736a600();
    uStack_d8 = extraout_x8_00;
    func_0x00010736a6f0();
    func_0x00010736ab7c();
    func_0x00010736a92c(auStack_128);
    func_0x00010736a99c();
    if ((bStack_110 & 1) != 0) {
      pppuStack_e0 = appuStack_f8;
      appuStack_f8[0] = &PTR_DAT_1109a5f90;
      param_2 = auStack_128;
      func_0x00010736a744();
      func_0x00010736ab94();
    }
    func_0x00010736a954();
    func_0x00010736a95c();
    func_0x00010736a534(uStack_d8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010736ab94();
      func_0x00010736a954();
      func_0x00010736a95c();
      func_0x00010736a888();
      lStack_180 = unaff_x20 + 0x20;
      uStack_178 = 1;
      __ZNSt3__119__shared_mutex_base11lock_sharedEv();
      func_0x00010736abec();
      func_0x00010736a92c(extraout_x8_01,unaff_x20,param_2);
      func_0x00010736a9d0();
      func_0x000100100f40(&lStack_180);
      return;
    }
  }
  return;
}



/* Entry: 107364b40; end: 107364bf7;  */

void FUN_107364b40(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  long lStack_e0;
  undefined1 uStack_d8;
  undefined1 auStack_88 [24];
  byte bStack_70;
  undefined **appuStack_58 [3];
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  func_0x00010736a600();
  uStack_38 = extraout_x8;
  func_0x00010736a6f0();
  func_0x00010736ab7c();
  func_0x00010736a92c(auStack_88);
  func_0x00010736a99c();
  if ((bStack_70 & 1) != 0) {
    pppuStack_40 = appuStack_58;
    appuStack_58[0] = &PTR_DAT_1109a5f90;
    param_2 = auStack_88;
    func_0x00010736a744();
    func_0x00010736ab94();
  }
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010736a534(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010736ab94();
  func_0x00010736a954();
  func_0x00010736a95c();
  func_0x00010736a888();
  lStack_e0 = unaff_x20 + 0x20;
  uStack_d8 = 1;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  func_0x00010736abec();
  func_0x00010736a92c(extraout_x8_00,unaff_x20,param_2);
  func_0x00010736a9d0();
  func_0x000100100f40(&lStack_e0);
  return;
}



/* Entry: 107364bf8; end: 107364c7b;  */

void FUN_107364bf8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lStack_40;
  undefined1 uStack_38;
  
  lStack_40 = param_2 + 0x20;
  uStack_38 = 1;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  func_0x00010736abec();
  func_0x00010736a92c(param_1,param_2,param_3);
  func_0x00010736a9d0();
  func_0x000100100f40(&lStack_40);
  return;
}



/* Entry: 107364c7c; end: 107364d67;  */

void FUN_107364c7c(long *param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plStack_38;
  undefined1 uStack_30;
  undefined4 uStack_24;
  
  plStack_38 = param_1 + 4;
  uStack_30 = 1;
  uStack_24 = param_2;
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  lVar1 = *param_1;
  lVar2 = param_1[1];
  FUN_107364d68();
  while (lVar1 != 0) {
    func_0x00010736aefc(*(undefined8 *)(param_3 + 0x18),lVar2);
    func_0x00010736ae94();
  }
  param_1 = param_1 + 0x1d;
  FUN_107366c28(param_1,&uStack_24);
  if (param_1 != (long *)0x0) {
    lVar1 = param_1[5];
    lVar2 = param_1[6];
    FUN_107364d68();
    while (lVar1 != 0) {
      func_0x00010736aefc(*(undefined8 *)(param_3 + 0x18),lVar2);
      func_0x00010736ae94();
    }
    lVar1 = param_1[9];
    lVar2 = param_1[10];
    FUN_107364d68();
    while (lVar1 != 0) {
      func_0x00010736aefc(*(undefined8 *)(param_3 + 0x18),lVar2);
      func_0x00010736ae94();
    }
  }
  func_0x000100100f40(&plStack_38);
  return;
}



/* Entry: 107364d68; end: 107364d8f;  */

undefined1  [16] FUN_107364d68(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x000107368a0c(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 107364d90; end: 107364dc3;  */

long * FUN_107364d90(long *param_1)

{
  param_1[1] = param_1[1] + 0x50;
  *param_1 = *param_1 + 1;
  func_0x000107368a0c();
  return param_1;
}



/* Entry: 107364dc4; end: 107364e5f;  */

void FUN_107364dc4(long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auStack_48 [20];
  undefined4 uStack_34;
  
  uStack_34 = param_2;
  func_0x00010736ac04();
  uVar1 = param_1 + 200;
  FUN_107362518(uVar1,param_3);
  if ((uVar1 & 1) == 0) {
    param_1 = param_1 + 0xe8;
    FUN_107366c28(param_1,&uStack_34);
    if (param_1 != 0) {
      uVar1 = param_1 + 0x48;
      FUN_107364e60(uVar1,param_3);
      if ((uVar1 & 1) == 0) {
        func_0x000107362534(param_1 + 0x48,param_3);
        FUN_1073264f4();
      }
    }
  }
  func_0x000104c305a0(auStack_48);
  return;
}



/* Entry: 107364e60; end: 107364e7b;  */

bool FUN_107364e60(long param_1)

{
  func_0x000107364ec4();
  return param_1 != 0;
}



/* Entry: 107364e7c; end: 107364ee3;  */

undefined8 * FUN_107364e7c(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107366bf4(param_1 + 4);
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        FUN_1073653c4(lVar2);
      }
      lVar2 = lVar2 + 0x50;
      pcVar1 = pcVar1 + 1;
    }
    func_0x00010736a814();
  }
  return param_1;
}



/* Entry: 107364ee4; end: 107364f03;  */

void FUN_107364ee4(void)

{
  undefined1 auStack_28 [24];
  
  FUN_10736a298(auStack_28);
  func_0x00010736ad18();
  return;
}



/* Entry: 107364f04; end: 107364f23;  */

void FUN_107364f04(undefined8 param_1)

{
  ulong extraout_x8;
  long unaff_x27;
  
  func_0x00010736a51c();
  func_0x00010736a7d4();
  func_0x00010736a900();
  func_0x00010736a58c();
  while( true ) {
    func_0x00010736a7e4();
    while (unaff_x27 != 0) {
      func_0x00010736a7b8();
      if ((int)param_1 != 0) {
        func_0x00010736af48();
        return;
      }
      func_0x00010736addc();
    }
    func_0x00010736a78c();
    if ((extraout_x8 & 1) != 0) break;
    func_0x00010736af54();
  }
  return;
}



/* Entry: 107364f24; end: 107364f53;  */

void FUN_107364f24(void)

{
  long extraout_x8;
  
  func_0x00010736ad70();
  if (extraout_x8 != 0) {
    FUN_107364f54();
    func_0x00010736a814();
  }
  return;
}



/* Entry: 107364f54; end: 107364f93;  */

void FUN_107364f54(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_1;
  for (lVar1 = param_1[2]; lVar1 != 0; lVar1 = lVar1 + -1) {
    if (-1 < *pcVar2) {
      func_0x00010736a9f4();
    }
    pcVar2 = pcVar2 + 1;
  }
  return;
}



/* Entry: 107364f94; end: 107364fc3;  */

void FUN_107364f94(void)

{
  long extraout_x8;
  
  func_0x00010736ad70();
  if (extraout_x8 != 0) {
    FUN_107364fc4();
    func_0x00010736a814();
  }
  return;
}



/* Entry: 107364fc4; end: 10736501f;  */

void FUN_107364fc4(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x00010736afa4();
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    if (-1 < *unaff_x20) {
      func_0x000107364ffc();
    }
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 107365020; end: 10736504f;  */

void FUN_107365020(void)

{
  long extraout_x8;
  
  func_0x00010736ad70();
  if (extraout_x8 != 0) {
    FUN_107365050();
    func_0x00010736a814();
  }
  return;
}



/* Entry: 107365050; end: 107365113;  */

void FUN_107365050(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x00010736afa4();
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    if (-1 < *unaff_x20) {
      func_0x000107365088();
    }
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 107365114; end: 10736511b;  */

void FUN_107365114(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736a934(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    FUN_1073671cc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10736511c; end: 10736514f;  */

void FUN_10736511c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736a934();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    FUN_1073671cc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107365150; end: 10736517f;  */

void FUN_107365150(void)

{
  long extraout_x8;
  
  func_0x00010736ad70();
  if (extraout_x8 != 0) {
    FUN_107365180();
    func_0x00010736a814();
  }
  return;
}



/* Entry: 107365180; end: 1073651db;  */

void FUN_107365180(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x00010736afa4();
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    if (-1 < *unaff_x20) {
      func_0x0001073651b8();
    }
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 1073651dc; end: 10736520b;  */

void FUN_1073651dc(void)

{
  long extraout_x8;
  
  func_0x00010736ad70();
  if (extraout_x8 != 0) {
    FUN_10736520c();
    func_0x00010736a814();
  }
  return;
}



/* Entry: 10736520c; end: 107365267;  */

void FUN_10736520c(void)

{
  long unaff_x19;
  char *unaff_x20;
  
  func_0x00010736afa4();
  for (; unaff_x19 != 0; unaff_x19 = unaff_x19 + -1) {
    if (-1 < *unaff_x20) {
      func_0x000107365244();
    }
    unaff_x20 = unaff_x20 + 1;
  }
  return;
}



/* Entry: 107365268; end: 10736528b;  */

undefined8 FUN_107365268(undefined8 param_1)

{
  FUN_10736528c();
  return param_1;
}



/* Entry: 10736528c; end: 107365323;  */

void FUN_10736528c(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010736a8c4();
  func_0x0001073652e4();
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  else if (lVar1 == unaff_x20) {
    *(long *)(unaff_x19 + 0x18) = unaff_x19;
    func_0x00010736aa2c(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x00010736aa44();
  }
  else {
    *(long *)(unaff_x19 + 0x18) = lVar1;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
  }
  return;
}



/* Entry: 107365324; end: 107365373;  */

void FUN_107365324(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010736abc4();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  param_1[1] = uVar3;
  *param_1 = uVar2;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar1;
  func_0x00010725b1d4(&uStack_20);
  func_0x00010736abfc();
  return;
}



/* Entry: 107365374; end: 1073653c3;  */

undefined8 * FUN_107365374(undefined8 *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    pcVar1 = (char *)*param_1;
    lVar2 = param_1[1];
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      if (-1 < *pcVar1) {
        FUN_1073653c4(lVar2);
      }
      lVar2 = lVar2 + 0x50;
      pcVar1 = pcVar1 + 1;
    }
    func_0x00010736a814();
  }
  return param_1;
}



/* Entry: 1073653c4; end: 107365407;  */

void FUN_1073653c4(void)

{
  func_0x00010736ae48();
  func_0x0001072ba554();
  func_0x00010736a9f4();
  return;
}



/* Entry: 107365408; end: 1073654b7;  */

void FUN_107365408(void)

{
  ulong uVar1;
  int iVar2;
  ulong extraout_x8;
  ulong unaff_x22;
  long unaff_x24;
  long unaff_x26;
  ulong unaff_x27;
  
  func_0x00010736a58c();
  while( true ) {
    func_0x00010736a7e4();
    while (unaff_x27 != 0) {
      uVar1 = (unaff_x27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x27 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      iVar2 = (int)&stack0xffffffffffffff70;
      FUN_10732524c(&stack0xffffffffffffff70,
                    unaff_x24 +
                    (unaff_x26 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & unaff_x22) *
                    0x50);
      if (iVar2 != 0) {
        func_0x00010736af48();
        return;
      }
      func_0x00010736addc();
    }
    func_0x00010736a78c();
    if ((extraout_x8 & 1) != 0) break;
    func_0x00010736af54();
  }
  return;
}



/* Entry: 1073654b8; end: 1073654f3;  */

void FUN_1073654b8(void)

{
  undefined8 extraout_x8;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010736a9c0();
  func_0x0001072684ec();
  func_0x00010736aa20(extraout_x8,*unaff_x21);
  func_0x000104c32bd8();
  func_0x00010736acb8();
  if ((unaff_x20 & 1) == 0) {
    func_0x0001072d80fc(unaff_x21[1] + unaff_x22 * 0x78 + 0x38);
  }
  else {
    FUN_107365564(unaff_x21,unaff_x22);
  }
  func_0x00010736ac94();
  func_0x00010736a8d0();
  return;
}



/* Entry: 1073654f4; end: 107365563;  */

void FUN_1073654f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010736aa20();
  func_0x000104c32bd8();
  func_0x00010736acb8();
  if ((unaff_x20 & 1) == 0) {
    func_0x0001072d80fc(*(long *)(unaff_x21 + 8) + unaff_x22 * 0x78 + 0x38,param_3);
  }
  else {
    FUN_107365564();
  }
  func_0x00010736ac94();
  func_0x00010736a8d0();
  return;
}



/* Entry: 107365564; end: 10736557b;  */

long FUN_107365564(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8) + param_2 * 0x78;
  lVar2 = lVar1;
  func_0x000104c2fe00(lVar1,param_3);
  func_0x000107268350(lVar2 + 0x38,param_4);
  return lVar1;
}



/* Entry: 10736557c; end: 1073655b7;  */

long FUN_10736557c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c2fe00();
  func_0x000107268350(lVar1 + 0x38,param_3);
  return param_1;
}



/* Entry: 1073655b8; end: 1073655f7;  */

void FUN_1073655b8(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010736a8c4();
  FUN_1073655f8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x18,unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  return;
}



/* Entry: 1073655f8; end: 10736571b;  */

undefined8 * FUN_1073655f8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = *param_2;
  lVar1 = param_2[1];
  uStack_78 = 0;
  lVar2 = lVar1 - lVar6;
  puStack_80 = param_1;
  if (lVar2 != 0) {
    uVar5 = lVar2 / 0x58;
    if (0x2e8ba2e8ba2e8ba < uVar5) {
      func_0x0001072ba368();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1073656f8);
      (*pcVar3)();
    }
    puVar4 = param_1 + 2;
    func_0x0001072ba3a8();
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + uVar5 * 0xb;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    uStack_58 = 0;
    puStack_70 = param_1 + 2;
    puStack_50 = puVar4;
    for (; puStack_48 = puVar4, lVar6 != lVar1; lVar6 = lVar6 + 0x58) {
      func_0x000107293594(puVar4,lVar6);
      puVar4 = puStack_48 + 0xb;
    }
    uStack_58 = 1;
    func_0x0001072ba488(&puStack_70);
    param_1[1] = puVar4;
  }
  func_0x00010736aa94();
  FUN_10736571c(&puStack_80);
  return param_1;
}



/* Entry: 10736571c; end: 107365747;  */

long FUN_10736571c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001072ba578(param_1);
  }
  return param_1;
}



/* Entry: 107365748; end: 10736574f;  */

void FUN_107365748(void)

{
  return;
}



/* Entry: 107365750; end: 10736576f;  */

void FUN_107365750(undefined8 *param_1)

{
  func_0x00010736abe4();
  *param_1 = &PTR_FUN_1109a5570;
  return;
}



/* Entry: 107365770; end: 10736578f;  */

void FUN_107365770(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109a5570;
  return;
}



/* Entry: 107365790; end: 1073657b7;  */

void FUN_107365790(undefined8 param_1)

{
  func_0x00010736a920();
  func_0x00010736a8bc(param_1,&PTR_DAT_1109a55d0);
  func_0x00010736a6d0();
  return;
}



/* Entry: 1073657b8; end: 1073657c3;  */

undefined ** FUN_1073657b8(void)

{
  return &PTR_DAT_1109a55d0;
}



/* Entry: 1073657c4; end: 1073657e3;  */

void FUN_1073657c4(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x00010726dd08();
  }
  return;
}



/* Entry: 1073657e4; end: 10736581b;  */

void FUN_1073657e4(long param_1)

{
  long unaff_x20;
  
  func_0x00010736a8c4();
  func_0x000104c2fe00();
  func_0x00010726fe1c(param_1 + 0x38,unaff_x20 + 0x38);
  return;
}



/* Entry: 10736581c; end: 107365837;  */

void FUN_10736581c(long param_1)

{
  FUN_107365838();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}


