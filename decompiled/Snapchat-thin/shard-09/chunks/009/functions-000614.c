/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107307638; end: 107307643;  */

undefined ** FUN_107307638(void)

{
  return &PTR_DAT_11099ebc0;
}



/* Entry: 107307644; end: 107307673;  */

undefined8 * FUN_107307644(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_SUB_11099eb60;
  param_1[1] = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 1);
  return param_1;
}



/* Entry: 107307674; end: 107307677;  */

void FUN_107307674(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099ebe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107307678; end: 10730768b;  */

void FUN_107307678(void)

{
  FUN_107307708();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730768c; end: 10730769f;  */

void FUN_10730768c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107307694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1073076a0; end: 1073076b3;  */

void FUN_1073076a0(void)

{
  FUN_1073076bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073076b4; end: 1073076bb;  */

void FUN_1073076b4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001073076f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  *plVar1 = (long)&PTR_FUN_11099ebe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073076bc; end: 1073076e7;  */

undefined8 * FUN_1073076bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11099ec30;
  func_0x00010729f864(param_1 + 1);
  return param_1;
}



/* Entry: 1073076e8; end: 107307707;  */

void FUN_1073076e8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001073076f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  *plVar1 = (long)&PTR_FUN_11099ebe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107307708; end: 107307717;  */

void FUN_107307708(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099ebe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107307718; end: 107307767;  */

long FUN_107307718(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107307768; end: 107307a23;  */

void FUN_107307768(void)

{
  return;
}



/* Entry: 107307a24; end: 107307c1f;  */

undefined8 *
FUN_107307a24(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 *puVar4;
  long lVar5;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  undefined ***pppuStack_60;
  long lStack_58;
  
  puVar2 = param_1;
  func_0x00010730c998();
  *puVar2 = &PTR_FUN_11099ecc0;
  puVar2[1] = param_5;
  puVar2[2] = 0;
  lStack_58 = extraout_x8;
  func_0x0001073af260();
  puVar1 = param_1 + 3;
  FUN_10725b034(puVar1);
  param_1[5] = param_1;
  puVar4 = (undefined8 *)param_1[3];
  uVar7 = *puVar4;
  param_1[7] = puVar4[1];
  param_1[6] = uVar7;
  if (puVar4[1] != 0) {
    do {
      func_0x00010730ca28();
    } while (extraout_w10 != 0);
  }
  param_1[8] = param_2;
  lVar5 = param_3[1];
  uVar7 = *param_3;
  param_1[10] = param_3[1];
  param_1[9] = uVar7;
  if (lVar5 != 0) {
    do {
      func_0x00010730ca28();
    } while (extraout_w10_00 != 0);
  }
  uVar6 = (undefined4)uVar7;
  param_1[0xb] = param_4;
  puVar4 = param_1 + 0xc;
  FUN_10724cbe8(puVar4,param_6);
  FUN_107307c20();
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  ppuStack_78 = &PTR_FUN_11099ed98;
  pppuStack_60 = &ppuStack_78;
  puStack_70 = param_1;
  func_0x00010730cbf4(*(undefined8 *)(*param_2 + 0x10));
  puVar3 = puVar4;
  func_0x00010730cbe4();
  *(int *)((long)param_1 + 0x84) = (int)puVar4;
  ppuStack_78 = &PTR_FUN_11099ee28;
  puStack_70 = param_1;
  pppuStack_60 = &ppuStack_78;
  func_0x00010730cbf4(*(undefined8 *)(*param_2 + 0x10));
  puVar4 = puVar3;
  func_0x00010730cbe4();
  *(int *)(param_1 + 0x11) = (int)puVar3;
  FUN_107307c20();
  *(undefined4 *)((long)param_1 + 0x8c) = uVar6;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  param_1[0x14] = 1;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  param_1[0x29] = puVar1;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  func_0x00010730c998();
  if (extraout_x8_00 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010730cbe4();
  func_0x0001006393ec(param_1 + 0xc);
  func_0x00010726eeb8(param_1 + 9);
  FUN_10724ae28(param_1 + 6);
  FUN_10724b54c(puVar1);
  func_0x000107306ba8(puVar2 + 2);
  __Unwind_Resume(puVar4);
  if ((bRam00000001136ca248 & 1) == 0) {
    puVar4 = (undefined8 *)0x1136ca248;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      lRam00000001136ca240 = (long)puVar4 / 1000000;
      puVar4 = (undefined8 *)0x1136ca248;
      ___cxa_guard_release(0x1136ca248);
    }
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  return puVar4;
}



/* Entry: 107307c20; end: 107307ca3;  */

float FUN_107307c20(long param_1)

{
  if ((bRam00000001136ca248 & 1) == 0) {
    param_1 = 0x1136ca248;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      lRam00000001136ca240 = param_1 / 1000000;
      param_1 = 0x1136ca248;
      ___cxa_guard_release(0x1136ca248);
    }
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  return (float)((double)(ulong)(param_1 / 1000000 - lRam00000001136ca240) / 1000.0);
}



/* Entry: 107307ca4; end: 107307ca7;  */

void FUN_107307ca4(void)

{
  return;
}



/* Entry: 107307ca8; end: 107308d5f;  */

/* WARNING: Possible PIC construction at 0x000107308b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107308b8c) */
/* WARNING: Removing unreachable block (ram,0x000107308bb4) */

undefined8 * FUN_107307ca8(undefined8 param_1,ulong param_2,long param_3,undefined8 *param_4)

{
  float fVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 **ppuVar11;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar12;
  bool bVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined8 **ppuVar16;
  long lVar17;
  undefined ***pppuVar18;
  undefined1 uVar19;
  undefined8 extraout_x8;
  long *plVar20;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  long extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  undefined8 extraout_x9;
  long *plVar21;
  ulong uVar22;
  ushort uVar23;
  int extraout_w11;
  int extraout_w11_00;
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long *unaff_x19;
  long lVar29;
  long *plVar30;
  ushort *puVar31;
  long lVar32;
  long *plVar33;
  undefined8 *puVar34;
  ulong uVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  undefined1 **ppuVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  undefined1 *puStack_280;
  undefined8 uStack_278;
  float fStack_270;
  uint uStack_26c;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  float fStack_238;
  float fStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  long lStack_1a8;
  uint uStack_1a0;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined1 uStack_180;
  undefined4 uStack_17f;
  undefined3 uStack_17b;
  undefined1 uStack_170;
  undefined1 uStack_16f;
  undefined1 uStack_16e;
  undefined1 uStack_16d;
  float fStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined ***pppuStack_c8;
  undefined8 uStack_b8;
  
  ppuVar11 = (undefined1 **)&fStack_270;
  lVar32 = param_3;
  puStack_248 = param_4;
  func_0x00010730c998();
  plStack_1b8 = (long *)0x0;
  puStack_1c0 = (undefined8 *)0x0;
  lStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_1a0 = 0x3f800000;
  uStack_b8 = extraout_x8;
  FUN_10730c3f4(&puStack_1c0,(long)(float)*(ulong *)(lVar32 + 0xc0));
  puVar37 = (undefined8 *)(param_3 + 0xe0);
  puStack_260 = puVar37;
LAB_107307d24:
  puVar37 = (undefined8 *)*puVar37;
  if (puVar37 != (undefined8 *)0x0) {
    lVar32 = puVar37[9];
    plVar21 = &lStack_1a8;
    func_0x000100102e7c(plVar21,lVar32 + 0x18);
    plVar33 = plStack_1b8;
    if (plStack_1b8 != (long *)0x0) {
      uVar35 = (long)plStack_1b8 - 1;
      if (((ulong)plStack_1b8 & uVar35) == 0) {
        unaff_x19 = (long *)(uVar35 & (ulong)plVar21);
        in_NG = false;
      }
      else {
        in_NG = (long)plVar21 - (long)plStack_1b8 < 0;
        unaff_x19 = plVar21;
        if (plStack_1b8 <= plVar21) {
          uVar22 = 0;
          if (plStack_1b8 != (long *)0x0) {
            uVar22 = (ulong)plVar21 / (ulong)plStack_1b8;
          }
          unaff_x19 = (long *)((long)plVar21 - uVar22 * (long)plStack_1b8);
        }
      }
      plVar30 = (long *)puStack_1c0[(long)unaff_x19];
      if (plVar30 != (long *)0x0) {
        do {
          while( true ) {
            plVar30 = (long *)*plVar30;
            if (plVar30 == (long *)0x0) goto LAB_107307dcc;
            plVar20 = (long *)plVar30[1];
            in_NG = (long)plVar20 - (long)plVar21 < 0;
            if (plVar20 != plVar21) break;
            plVar20 = plVar30 + 2;
            func_0x0001000e107c(plVar20,lVar32 + 0x18);
            if (((ulong)plVar20 & 1) != 0) goto LAB_107307ee4;
          }
          if (((ulong)plVar33 & uVar35) == 0) {
            plVar20 = (long *)((ulong)plVar20 & uVar35);
          }
          else if (plVar33 <= plVar20) {
            uVar22 = 0;
            if (plVar33 != (long *)0x0) {
              uVar22 = (ulong)plVar20 / (ulong)plVar33;
            }
            plVar20 = (long *)((long)plVar20 - uVar22 * (long)plVar33);
          }
          in_NG = (long)plVar20 - (long)unaff_x19 < 0;
        } while (plVar20 == unaff_x19);
      }
    }
LAB_107307dcc:
    puVar14 = (undefined8 *)0x30;
    __Znwm();
    uStack_170 = SUB81(puVar14,0);
    uStack_16f = (undefined1)((ulong)puVar14 >> 8);
    uStack_16e = (undefined1)((ulong)puVar14 >> 0x10);
    uStack_16d = (undefined1)((ulong)puVar14 >> 0x18);
    fStack_16c = (float)((ulong)puVar14 >> 0x20);
    uStack_160 = 0;
    *puVar14 = 0;
    puVar14[1] = plVar21;
    uStack_168 = &plStack_1b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (puVar14 + 2,lVar32 + 0x18);
    *(undefined1 *)(puVar14 + 5) = 1;
    uStack_160 = CONCAT71(uStack_160._1_7_,1);
    func_0x00010730cb88(lStack_1a8);
    param_2 = (ulong)uStack_1a0;
    if (plVar33 == (long *)0x0) {
LAB_107307e10:
      bVar12 = (long *)0x2 < plVar33;
      bVar13 = plVar33 == (long *)0x3;
      func_0x00010730c960((long)plVar33 << 1);
      uVar48 = extraout_x8_00;
      if (!bVar12 || bVar13) {
        uVar48 = extraout_x9;
      }
      FUN_10730c3f4(&puStack_1c0,uVar48);
      plVar33 = plStack_1b8;
      if (((ulong)plStack_1b8 & (long)plStack_1b8 - 1U) == 0) {
        unaff_x19 = (long *)((long)plStack_1b8 - 1U & (ulong)plVar21);
      }
      else {
        unaff_x19 = plVar21;
        if (plStack_1b8 <= plVar21) {
          uVar35 = 0;
          if (plStack_1b8 != (long *)0x0) {
            uVar35 = (ulong)plVar21 / (ulong)plStack_1b8;
          }
          unaff_x19 = (long *)((long)plVar21 - uVar35 * (long)plStack_1b8);
        }
      }
    }
    else {
      func_0x00010730cb7c();
      if ((bool)in_NG) goto LAB_107307e10;
    }
    plVar21 = (long *)puStack_1c0[(long)unaff_x19];
    plVar30 = (long *)CONCAT44(fStack_16c,
                               CONCAT13(uStack_16d,
                                        CONCAT12(uStack_16e,CONCAT11(uStack_16f,uStack_170))));
    if (plVar21 == (long *)0x0) {
      *plVar30 = (long)plStack_1b0;
      puStack_1c0[(long)unaff_x19] = &plStack_1b0;
      plStack_1b0 = plVar30;
      if (*plVar30 != 0) {
        plVar21 = *(long **)(*plVar30 + 8);
        if (((ulong)plVar33 & (long)plVar33 - 1U) == 0) {
          plVar21 = (long *)((ulong)plVar21 & (long)plVar33 - 1U);
        }
        else if (plVar33 <= plVar21) {
          uVar35 = 0;
          if (plVar33 != (long *)0x0) {
            uVar35 = (ulong)plVar21 / (ulong)plVar33;
          }
          plVar21 = (long *)((long)plVar21 - uVar35 * (long)plVar33);
        }
        puStack_1c0[(long)plVar21] = plVar30;
      }
    }
    else {
      *plVar30 = *plVar21;
      *plVar21 = (long)plVar30;
    }
    uStack_170 = 0;
    uStack_16f = 0;
    uStack_16e = 0;
    uStack_16d = 0;
    fStack_16c = 0.0;
    lStack_1a8 = lStack_1a8 + 1;
    FUN_10730c5cc(&uStack_170);
LAB_107307ee4:
    fVar43 = (float)param_2;
    unaff_x19 = (long *)puVar37[9];
    fVar39 = *(float *)((long)unaff_x19 + 0xd4);
    in_ZR = fVar39 == 0.0;
    in_NG = fVar39 < 0.0;
    if (0.0 < fVar39) goto code_r0x000107307ef8;
    goto LAB_107307f10;
  }
  for (plVar21 = plStack_1b0; plVar21 != (long *)0x0; plVar21 = (long *)*plVar21) {
    in_ZR = *(char *)(plVar21 + 5) == '\x01';
    if ((bool)in_ZR) {
      lVar32 = param_3 + 0xa8;
      FUN_10730bfc8(lVar32,plVar21 + 2);
      if ((lVar32 != 0) && ((*(byte *)(lVar32 + 0x38) & 1) == 0)) {
        *(undefined1 *)(lVar32 + 0x38) = 1;
        puVar37 = *(undefined8 **)(lVar32 + 0x28);
        puStack_188 = *(undefined8 **)(lVar32 + 0x30);
        puStack_190 = puVar37;
        if (puStack_188 != (undefined8 *)0x0) {
          do {
            func_0x00010730c988();
            puVar37 = extraout_x8_02;
          } while (extraout_w11 != 0);
        }
        puVar14 = puStack_188;
        puStack_1d0 = puVar37;
        puStack_1c8 = puStack_188;
        if (puStack_188 != (undefined8 *)0x0) {
          do {
            func_0x00010730c988();
            puVar37 = extraout_x8_03;
            puVar14 = puStack_1c8;
          } while (extraout_w11_00 != 0);
        }
        ppuStack_e0 = &PTR_SUB_11099f058;
        puStack_1d0 = (undefined8 *)0x0;
        puStack_1c8 = (undefined8 *)0x0;
        puStack_d8 = puVar37;
        puStack_d0 = puVar14;
        pppuStack_c8 = &ppuStack_e0;
        func_0x00010730cc74();
        (*extraout_x8_04)();
        func_0x0001006393ec(&ppuStack_e0);
        func_0x0001072ba140(&puStack_1d0);
        if (*(long *)(param_3 + 0x10) != 0) {
          lVar32 = *(long *)(param_3 + 0x10) + 0xe8;
          func_0x0001000e107c(lVar32,plVar21 + 2);
          if ((int)lVar32 != 0) {
            FUN_107306bcc(param_3 + 0x10,0);
            plVar33 = *(long **)(param_3 + 0x48);
            func_0x00010002b838(&uStack_200,&UNK_10f409f8d);
            func_0x00010724ae4c(&uStack_170,"");
            (**(code **)(*plVar33 + 0x30))(plVar33,&uStack_200,&uStack_170);
            func_0x000104c3323c(&uStack_170);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_200);
          }
        }
        func_0x0001072ba140(&puStack_190);
      }
    }
  }
  uStack_168._0_4_ = 0.0;
  uStack_168._4_4_ = 0.0;
  uStack_170 = 0;
  uStack_16f = 0;
  uStack_16e = 0;
  uStack_16d = 0;
  fStack_16c = 0.0;
  uStack_158 = 0;
  uStack_160 = 0;
  fStack_150 = 1.0;
  func_0x00010730c744(&uStack_170,*(undefined8 *)(param_3 + 0xc0));
  puVar37 = puStack_260;
  puVar14 = *(undefined8 **)(param_3 + 0xe0);
  while (puVar14 != (undefined8 *)0x0) {
    func_0x0001004c3c6c(&uStack_170,puVar14[9] + 0x18);
    fVar39 = *(float *)(puVar14[9] + 0xd4);
    in_ZR = fVar39 == 0.0;
    if (0.0 < fVar39) {
      FUN_107307c20();
      func_0x00010730cc98();
      in_ZR = fVar39 == (float)param_2;
      if (fVar39 <= (float)param_2) goto LAB_1073080c8;
      uVar22 = *(ulong *)(param_3 + 0xd8);
      uVar35 = puVar14[1];
      uVar24 = uVar22 - 1;
      if ((uVar22 & uVar24) == 0) {
        uVar35 = uVar24 & uVar35;
      }
      else if (uVar22 <= uVar35) {
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = uVar35 / uVar22;
        }
        uVar35 = uVar35 - uVar25 * uVar22;
      }
      puVar34 = (undefined8 *)*puVar14;
      lVar32 = *(long *)(param_3 + 0xd0);
      puVar27 = *(undefined8 **)(lVar32 + uVar35 * 8);
      do {
        puVar36 = puVar27;
        puVar27 = (undefined8 *)*puVar36;
      } while ((undefined8 *)*puVar36 != puVar14);
      in_ZR = true;
      puVar27 = puVar34;
      if (puVar36 == puVar37) {
LAB_107308128:
        if (puVar34 == (undefined8 *)0x0) {
LAB_107308160:
          *(undefined8 *)(lVar32 + uVar35 * 8) = 0;
          puVar27 = (undefined8 *)*puVar14;
          goto LAB_107308168;
        }
        uVar25 = puVar34[1];
        if ((uVar22 & uVar24) == 0) {
          uVar28 = uVar25 & uVar24;
        }
        else {
          uVar28 = uVar25;
          if (uVar22 <= uVar25) {
            uVar28 = 0;
            if (uVar22 != 0) {
              uVar28 = uVar25 / uVar22;
            }
            uVar28 = uVar25 - uVar28 * uVar22;
          }
        }
        in_ZR = uVar28 == uVar35;
        if (!(bool)in_ZR) goto LAB_107308160;
LAB_107308170:
        if ((uVar22 & uVar24) == 0) {
          uVar25 = uVar25 & uVar24;
        }
        else if (uVar22 <= uVar25) {
          uVar24 = 0;
          if (uVar22 != 0) {
            uVar24 = uVar25 / uVar22;
          }
          uVar25 = uVar25 - uVar24 * uVar22;
        }
        in_ZR = uVar25 == uVar35;
        if (!(bool)in_ZR) {
          *(undefined8 **)(lVar32 + uVar25 * 8) = puVar36;
          puVar27 = (undefined8 *)*puVar14;
        }
      }
      else {
        uVar25 = puVar36[1];
        if ((uVar22 & uVar24) == 0) {
          uVar25 = uVar25 & uVar24;
        }
        else if (uVar22 <= uVar25) {
          uVar28 = 0;
          if (uVar22 != 0) {
            uVar28 = uVar25 / uVar22;
          }
          uVar25 = uVar25 - uVar28 * uVar22;
        }
        in_ZR = uVar25 == uVar35;
        if (!(bool)in_ZR) goto LAB_107308128;
LAB_107308168:
        if (puVar27 != (undefined8 *)0x0) {
          uVar25 = puVar27[1];
          goto LAB_107308170;
        }
      }
      *puVar36 = puVar27;
      *puVar14 = 0;
      *(long *)(param_3 + 0xe8) = *(long *)(param_3 + 0xe8) + -1;
      puStack_1f8 = puVar37;
      uStack_1f0 = 1;
      uStack_200 = puVar14;
      FUN_10730c234(&uStack_200);
      puVar14 = puVar34;
    }
    else {
LAB_1073080c8:
      puVar14 = (undefined8 *)*puVar14;
    }
  }
  puVar27 = (undefined8 *)(param_3 + 0xb8);
  puVar14 = (undefined8 *)*puVar27;
  while (puVar14 != (undefined8 *)0x0) {
    puVar15 = &uStack_170;
    FUN_1072d2e68(puVar15,puVar14 + 2);
    if (((ulong)puVar15 & 1) == 0) {
      uVar22 = *(ulong *)(param_3 + 0xb0);
      uVar35 = puVar14[1];
      uVar24 = uVar22 - 1;
      if ((uVar22 & uVar24) == 0) {
        uVar35 = uVar24 & uVar35;
      }
      else if (uVar22 <= uVar35) {
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = uVar35 / uVar22;
        }
        uVar35 = uVar35 - uVar25 * uVar22;
      }
      puVar36 = (undefined8 *)*puVar14;
      lVar32 = *(long *)(param_3 + 0xa8);
      puVar34 = *(undefined8 **)(lVar32 + uVar35 * 8);
      do {
        puVar26 = puVar34;
        puVar34 = (undefined8 *)*puVar26;
      } while ((undefined8 *)*puVar26 != puVar14);
      in_ZR = true;
      puVar34 = puVar36;
      if (puVar26 == puVar27) {
LAB_107308280:
        if (puVar36 == (undefined8 *)0x0) {
LAB_1073082b8:
          *(undefined8 *)(lVar32 + uVar35 * 8) = 0;
          puVar34 = (undefined8 *)*puVar14;
          goto LAB_1073082c0;
        }
        uVar25 = puVar36[1];
        if ((uVar22 & uVar24) == 0) {
          uVar28 = uVar25 & uVar24;
        }
        else {
          uVar28 = uVar25;
          if (uVar22 <= uVar25) {
            uVar28 = 0;
            if (uVar22 != 0) {
              uVar28 = uVar25 / uVar22;
            }
            uVar28 = uVar25 - uVar28 * uVar22;
          }
        }
        in_ZR = uVar28 == uVar35;
        if (!(bool)in_ZR) goto LAB_1073082b8;
LAB_1073082c8:
        if ((uVar22 & uVar24) == 0) {
          uVar25 = uVar25 & uVar24;
        }
        else if (uVar22 <= uVar25) {
          uVar24 = 0;
          if (uVar22 != 0) {
            uVar24 = uVar25 / uVar22;
          }
          uVar25 = uVar25 - uVar24 * uVar22;
        }
        in_ZR = uVar25 == uVar35;
        if (!(bool)in_ZR) {
          *(undefined8 **)(lVar32 + uVar25 * 8) = puVar26;
          puVar34 = (undefined8 *)*puVar14;
        }
      }
      else {
        uVar25 = puVar26[1];
        if ((uVar22 & uVar24) == 0) {
          uVar25 = uVar25 & uVar24;
        }
        else if (uVar22 <= uVar25) {
          uVar28 = 0;
          if (uVar22 != 0) {
            uVar28 = uVar25 / uVar22;
          }
          uVar25 = uVar25 - uVar28 * uVar22;
        }
        in_ZR = uVar25 == uVar35;
        if (!(bool)in_ZR) goto LAB_107308280;
LAB_1073082c0:
        if (puVar34 != (undefined8 *)0x0) {
          uVar25 = puVar34[1];
          goto LAB_1073082c8;
        }
      }
      *puVar26 = puVar34;
      *puVar14 = 0;
      *(long *)(param_3 + 0xc0) = *(long *)(param_3 + 0xc0) + -1;
      uStack_1f0 = 1;
      uStack_200 = puVar14;
      puStack_1f8 = puVar27;
      FUN_10730c18c(&uStack_200);
      puVar14 = puVar36;
    }
    else {
      puVar14 = (undefined8 *)*puVar14;
    }
  }
  puStack_1f8 = (undefined8 *)0x0;
  uStack_200 = (undefined8 *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1e0 = 0x3f800000;
  puVar14 = puVar37;
  while (puVar27 = puStack_248, puVar14 = (undefined8 *)*puVar14, puVar14 != (undefined8 *)0x0) {
    func_0x0001004c3c6c(&uStack_200,*(long *)(puVar14[9] + 8) + 0x48);
  }
  puVar14 = *(undefined8 **)(param_3 + 0x1c0);
  while (puVar14 != (undefined8 *)0x0) {
    puVar34 = &uStack_200;
    FUN_1072d2e68(puVar34,puVar14 + 2);
    if (((ulong)puVar34 & 1) == 0) {
      uVar22 = *(ulong *)(param_3 + 0x1b8);
      uVar35 = puVar14[1];
      uVar24 = uVar22 - 1;
      if ((uVar22 & uVar24) == 0) {
        uVar35 = uVar24 & uVar35;
      }
      else if (uVar22 <= uVar35) {
        uVar25 = 0;
        if (uVar22 != 0) {
          uVar25 = uVar35 / uVar22;
        }
        uVar35 = uVar35 - uVar25 * uVar22;
      }
      puVar36 = (undefined8 *)*puVar14;
      lVar32 = *(long *)(param_3 + 0x1b0);
      puVar34 = *(undefined8 **)(lVar32 + uVar35 * 8);
      do {
        puVar26 = puVar34;
        puVar34 = (undefined8 *)*puVar26;
      } while ((undefined8 *)*puVar26 != puVar14);
      in_ZR = true;
      puVar34 = puVar36;
      if (puVar26 == (undefined8 *)(param_3 + 0x1c0)) {
LAB_107308410:
        if (puVar36 == (undefined8 *)0x0) {
LAB_107308448:
          *(undefined8 *)(lVar32 + uVar35 * 8) = 0;
          puVar34 = (undefined8 *)*puVar14;
          goto LAB_107308450;
        }
        uVar25 = puVar36[1];
        if ((uVar22 & uVar24) == 0) {
          uVar28 = uVar25 & uVar24;
        }
        else {
          uVar28 = uVar25;
          if (uVar22 <= uVar25) {
            uVar28 = 0;
            if (uVar22 != 0) {
              uVar28 = uVar25 / uVar22;
            }
            uVar28 = uVar25 - uVar28 * uVar22;
          }
        }
        in_ZR = uVar28 == uVar35;
        if (!(bool)in_ZR) goto LAB_107308448;
LAB_107308458:
        if ((uVar22 & uVar24) == 0) {
          uVar25 = uVar25 & uVar24;
        }
        else if (uVar22 <= uVar25) {
          uVar24 = 0;
          if (uVar22 != 0) {
            uVar24 = uVar25 / uVar22;
          }
          uVar25 = uVar25 - uVar24 * uVar22;
        }
        in_ZR = uVar25 == uVar35;
        if (!(bool)in_ZR) {
          *(undefined8 **)(lVar32 + uVar25 * 8) = puVar26;
          puVar34 = (undefined8 *)*puVar14;
        }
      }
      else {
        uVar25 = puVar26[1];
        if ((uVar22 & uVar24) == 0) {
          uVar25 = uVar25 & uVar24;
        }
        else if (uVar22 <= uVar25) {
          uVar28 = 0;
          if (uVar22 != 0) {
            uVar28 = uVar25 / uVar22;
          }
          uVar25 = uVar25 - uVar28 * uVar22;
        }
        in_ZR = uVar25 == uVar35;
        if (!(bool)in_ZR) goto LAB_107308410;
LAB_107308450:
        if (puVar34 != (undefined8 *)0x0) {
          uVar25 = puVar34[1];
          goto LAB_107308458;
        }
      }
      *puVar26 = puVar34;
      *puVar14 = 0;
      *(long *)(param_3 + 0x1c8) = *(long *)(param_3 + 0x1c8) + -1;
      uStack_180 = 1;
      uStack_17f = 0;
      uStack_17b = 0;
      puStack_190 = puVar14;
      puStack_188 = (undefined8 *)(param_3 + 0x1c0);
      FUN_10730be80(&puStack_190);
      puVar14 = puVar36;
    }
    else {
      puVar14 = (undefined8 *)*puVar14;
    }
  }
  func_0x0001005d0538(&uStack_200);
  func_0x0001005d0538(&uStack_170);
  ppuVar16 = &puStack_1c0;
  FUN_10730c360();
  if (*(long *)(param_3 + 0xe8) == 0) {
LAB_107308c34:
    puVar14 = (undefined8 *)0x0;
LAB_107308c38:
    func_0x00010730c93c(uStack_b8);
    if ((bool)in_ZR) {
      return puVar14;
    }
    ___stack_chk_fail();
    puVar37 = puStack_d8;
    puStack_d8 = (undefined8 *)0x0;
    if (puVar37 != (undefined8 *)0x0) {
      func_0x00010730c910();
    }
    func_0x00010730cba0();
    func_0x00010730c9b8();
    ppuVar11 = &puStack_280;
    ppuVar38 = &puStack_280;
    uStack_278 = 0x107308d60;
    puStack_280 = &stack0xfffffffffffffff0;
    FUN_10730b680();
    if (puVar37 != (undefined8 *)0x0) {
      return puVar37 + 5;
    }
    pppuVar18 = (undefined ***)&UNK_10f639994;
    uVar48 = 0x107308d88;
    func_0x000104c03f28(&UNK_10f639994);
SUB_107308d88:
    *(undefined1 ***)((long)ppuVar11 + -0x10) = ppuVar38;
    *(undefined8 *)((long)ppuVar11 + -8) = uVar48;
    puVar37 = (undefined8 *)((long)ppuVar11 + -0x11);
    FUN_10730b75c(puVar37,pppuVar18);
    return puVar37;
  }
  fVar39 = *(float *)(param_3 + 0x80);
  func_0x00010730c9d0();
  (**(code **)(extraout_x8_05 + 0x28))();
  puVar14 = (undefined8 *)0x0;
  *(float *)(param_3 + 0x90) =
       (float)((ulong)ppuVar16 & 0xffffffff) / (float)((ulong)ppuVar16 >> 0x20);
  uStack_26c = (uint)*(byte *)((long)puVar27 + 0xad) & (*(uint *)(puVar27 + 0x16) & 0x400) >> 10;
  in_ZR = uStack_26c == 0;
  uVar19 = 0x2e;
  if (!(bool)in_ZR) {
    uVar19 = 0x2f;
  }
  lVar32 = 0x1e8;
  if ((bool)in_ZR) {
    lVar32 = 0x1d8;
  }
  uStack_268 = 7;
LAB_107308544:
  do {
    fVar43 = 0.0;
    puVar37 = (undefined8 *)*puVar37;
    if (puVar37 == (undefined8 *)0x0) goto LAB_107308c38;
    puVar31 = *(ushort **)(puVar37[9] + 8);
    lVar29 = param_3 + 0x1b0;
    FUN_10730b680(lVar29,puVar31 + 0x24);
    puVar27 = puStack_248;
    if (lVar29 != 0) {
      uVar23 = *puVar31;
      if (999 < uVar23) {
        uVar23 = 1000;
      }
      fVar44 = *(float *)(puVar37[9] + 0xd0);
      fVar40 = *(float *)(puVar37[9] + 0xd4);
      fVar47 = fVar39 - fVar44;
      fVar1 = fVar43;
      if ((char)puVar31[0x4c] == '\0') {
        fVar1 = fVar40 - fVar44;
      }
      in_ZR = fVar40 == 0.0;
      if ((bool)in_ZR) {
        fVar1 = fVar43;
      }
      fVar44 = *(float *)(puVar31 + 0x48);
      if ((char)puVar31[0x4c] != '\0') {
        fVar45 = fVar47 / *(float *)(puVar31 + 0x4e);
        fVar41 = 1.0;
        if (fVar45 <= 1.0) {
          fVar41 = fVar45;
        }
        fVar46 = fVar43;
        if (0.0 <= fVar45) {
          fVar46 = fVar41;
        }
        fVar44 = fVar44 * fVar46;
        in_ZR = fVar40 == 0.0;
        if (!(bool)in_ZR) {
          fVar41 = 1.0 - (fVar39 - fVar40) / *(float *)(puVar31 + 0x4e);
          fVar40 = 1.0;
          if (fVar41 <= 1.0) {
            fVar40 = fVar41;
          }
          in_ZR = fVar41 == 0.0;
          if (0.0 <= fVar41) {
            fVar43 = fVar40;
          }
          fVar44 = fVar44 * fVar43;
        }
      }
      puStack_260 = (undefined8 *)(ulong)(uint)fVar44;
      uStack_258 = 0;
      uVar48 = *(undefined8 *)(puVar31 + 0x42);
      fVar43 = *(float *)(puVar31 + 0x46);
      uStack_16f = 0;
      uStack_16e = 0;
      uStack_16d = 0;
      uStack_168._0_4_ = 0.0;
      uStack_168._4_4_ = 0.0;
      uStack_160 = (ulong)*(uint *)(puStack_248 + 0xf) << 0x20;
      uVar35 = (ulong)uStack_158 >> 0x30;
      uVar2 = (uint)uStack_158;
      uStack_158._0_6_ = CONCAT24(0x501,uVar2 & 0xff000000);
      uStack_158 = CONCAT26((short)uVar35,(undefined6)uStack_158);
      uStack_144 = 0;
      fStack_140 = 0.0;
      fStack_14c = 0.0;
      fStack_148 = 0.0;
      fStack_150 = 1.4013e-45;
      uStack_13c = 0x1010101;
      fStack_138 = (float)CONCAT22(fStack_138._2_2_,0xf01);
      uStack_170 = uVar19;
      func_0x0001073ca29c(&puStack_1c0,puStack_248[0x12],param_3 + lVar32,&uStack_170);
      if (puStack_1c0 != (undefined8 *)0x0) {
        plVar21 = (long *)*puStack_1c0;
        (**(code **)(*plVar21 + 0x18))();
        in_ZR = (int)plVar21 == 2;
        if ((bool)in_ZR) {
          plVar21 = (long *)puVar27[3];
          uVar42 = 0;
          puVar14 = puVar27;
          func_0x0001074d5bec(puVar27,0,0);
          puStack_1f8 = (undefined8 *)CONCAT44(puStack_1f8._4_4_,uVar42);
          fStack_16c = (float)uStack_268;
          uStack_168._0_4_ = (float)((ulong)uStack_268 >> 0x20);
          uStack_168._4_4_ = 0.0;
          uStack_160 = CONCAT53(uStack_160._3_5_,0x10101);
          uStack_200 = puVar14;
          (**(code **)(*plVar21 + 0x80))(plVar21,&uStack_200,&uStack_170);
          uStack_16e = 1;
          uStack_170 = 0;
          uStack_16f = 1;
          (**(code **)(*(long *)puVar27[3] + 0x88))((long *)puVar27[3],&uStack_170);
          (**(code **)(*(long *)puVar27[3] + 0x40))((long *)puVar27[3],puStack_1c0);
          func_0x00010730c9d0();
          (**(code **)(extraout_x8_06 + 0x58))();
          func_0x00010730c9d0();
          func_0x00010730ca7c(*(undefined8 *)(extraout_x8_07 + 0x60));
          uVar9 = uStack_16d;
          uVar7 = uStack_16e;
          uVar5 = uStack_16f;
          uVar3 = uStack_170;
          fVar40 = (float)uVar23 / 1000.0;
          plVar21 = (long *)puVar27[3];
          uStack_170 = SUB41(fVar47,0);
          uVar4 = uStack_170;
          uStack_16f = (undefined1)((uint)fVar47 >> 8);
          uVar6 = uStack_16f;
          uStack_16e = (undefined1)((uint)fVar47 >> 0x10);
          uVar8 = uStack_16e;
          uStack_16d = (undefined1)((uint)fVar47 >> 0x18);
          uVar10 = uStack_16d;
          uStack_170 = uVar3;
          uStack_16f = uVar5;
          uStack_16e = uVar7;
          uStack_16d = uVar9;
          if ((uStack_26c & 1) == 0) {
            func_0x00010730cb94();
            func_0x00010730ca7c(*(undefined8 *)(*plVar21 + 0x70),plVar21);
            uStack_168._4_4_ = *(float *)(param_3 + 0x90);
            uVar42 = NEON_ucvtf(*(undefined4 *)(puVar31 + 0x1e));
            puStack_1f8 = *(undefined8 **)(puVar31 + 2);
            uStack_200 = (undefined8 *)CONCAT44(*(undefined4 *)(puVar37[9] + 0xd8),uVar42);
            puStack_d8 = *(undefined8 **)(puVar31 + 10);
            ppuStack_e0 = *(undefined ***)(puVar31 + 6);
            puStack_188 = *(undefined8 **)(puVar31 + 0x1a);
            puStack_190 = *(undefined8 **)(puVar31 + 0x16);
            puStack_1c8 = *(undefined8 **)(puVar31 + 0x32);
            puStack_1d0 = (undefined8 *)
                          CONCAT44(*(undefined4 *)(puVar31 + 0x30),*(undefined4 *)(puVar31 + 0x20));
            uStack_208 = *(undefined4 *)(puVar31 + 0x3a);
            uStack_210 = *(undefined8 *)(puVar31 + 0x36);
            uStack_218 = *(undefined4 *)(puVar31 + 0x40);
            uStack_214 = *(undefined4 *)(puVar31 + 0x4a);
            uStack_220 = *(undefined8 *)(puVar31 + 0x3c);
            uStack_228 = *(undefined8 *)(puVar31 + 0x12);
            uStack_230 = *(undefined8 *)(puVar31 + 0xe);
            fStack_234 = *(float *)(puVar31 + 0x48);
            fStack_238 = fStack_234 * *(float *)(puVar31 + 0x46);
            uStack_240 = CONCAT44(fStack_234 *
                                  (float)((ulong)*(undefined8 *)(puVar31 + 0x42) >> 0x20),
                                  (float)*(undefined8 *)(puVar31 + 0x42) * fStack_234);
            uStack_170 = uVar4;
            uStack_16f = uVar6;
            uStack_16e = uVar8;
            uStack_16d = uVar10;
            fStack_16c = fVar1;
            uStack_168._0_4_ = fVar40;
            func_0x00010730c950();
            func_0x00010730ca7c();
            func_0x00010730c950();
            (*extraout_x8_08)();
            func_0x00010730c950();
            (*extraout_x8_09)();
            func_0x00010730c950();
            (*extraout_x8_10)();
            func_0x00010730c950();
            (*extraout_x8_11)();
            func_0x00010730c9d0();
            (**(code **)(extraout_x8_12 + 0xb0))();
            func_0x00010730c950();
            (*extraout_x8_13)();
            func_0x00010730c950();
            (*extraout_x8_14)();
            func_0x00010730c950();
            (*extraout_x8_15)();
            uStack_170 = 4;
            fStack_16c = 0.0;
            func_0x00010730caf4(*(undefined8 *)(*(long *)puVar27[3] + 0x138),(long *)puVar27[3],
                                &uStack_170);
          }
          else {
            func_0x00010730cb94();
            func_0x00010730ca7c(*(undefined8 *)(*plVar21 + 0x70),plVar21);
            uStack_168._4_4_ = *(float *)(param_3 + 0x90);
            fStack_130 = *(float *)(puVar31 + 0x20);
            fVar44 = (float)NEON_ucvtf(*(undefined4 *)(puVar31 + 0x1e));
            uStack_160 = CONCAT44(*(float *)(puVar37[9] + 0xd8),fVar44);
            uStack_158 = *(undefined8 *)(puVar31 + 2);
            fStack_150 = *(float *)(puVar31 + 6);
            fStack_14c = *(float *)(puVar31 + 8);
            fStack_270 = *(float *)(puVar31 + 0x18);
            fStack_140 = (float)*(undefined8 *)(puVar31 + 0x16);
            uStack_13c = (undefined4)((ulong)*(undefined8 *)(puVar31 + 0x16) >> 0x20);
            fStack_148 = (float)*(undefined8 *)(puVar31 + 10);
            uStack_144 = (undefined4)((ulong)*(undefined8 *)(puVar31 + 10) >> 0x20);
            fStack_138 = *(float *)(puVar31 + 0x1a);
            fStack_134 = *(float *)(puVar31 + 0x1c);
            fStack_12c = *(float *)(puVar31 + 0x30);
            fStack_128 = *(float *)(puVar31 + 0x32);
            fStack_124 = *(float *)(puVar31 + 0x34);
            fStack_120 = *(float *)(puVar31 + 0x36);
            fStack_11c = *(float *)(puVar31 + 0x38);
            fStack_118 = *(float *)(puVar31 + 0x3a);
            uStack_114 = 0;
            fStack_110 = *(float *)(puVar31 + 0x3c);
            fStack_10c = *(float *)(puVar31 + 0x3e);
            uStack_100 = *(undefined8 *)(puVar31 + 0xe);
            uStack_108 = CONCAT44(*(float *)(puVar31 + 0x4a),*(float *)(puVar31 + 0x40));
            uStack_f8 = *(undefined8 *)(puVar31 + 0x12);
            fStack_e4 = SUB84(puStack_260,0);
            uStack_f0 = CONCAT44((float)((ulong)uVar48 >> 0x20) * fStack_e4,
                                 (float)uVar48 * fStack_e4);
            fStack_e8 = fVar43 * fStack_e4;
            lVar29 = puVar37[9];
            if (*(long *)(lVar29 + 0xc0) == 0) {
              uStack_170 = uVar4;
              uStack_16f = uVar6;
              uStack_16e = uVar8;
              uStack_16d = uVar10;
              fStack_16c = fVar1;
              uStack_168._0_4_ = fVar40;
              (**(code **)(*(long *)*puVar27 + 0xa8))(&puStack_190,(long *)*puVar27,0x90);
              ppuStack_e0 = (undefined **)0x90;
              puStack_d8 = puStack_190;
              pppuVar18 = &ppuStack_e0;
              uVar48 = 0x107308b8c;
              ppuVar38 = (undefined1 **)&stack0xfffffffffffffff0;
              goto SUB_107308d88;
            }
            in_ZR = *(float *)(lVar29 + 0x30) == fVar47;
            uStack_170 = uVar4;
            uStack_16f = uVar6;
            uStack_16e = uVar8;
            uStack_16d = uVar10;
            fStack_16c = fVar1;
            uStack_168._0_4_ = fVar40;
            if ((((((((bool)in_ZR) && (in_ZR = *(float *)(lVar29 + 0x34) == fVar1, (bool)in_ZR)) &&
                   (in_ZR = *(float *)(lVar29 + 0x38) == fVar40, (bool)in_ZR)) &&
                  ((in_ZR = *(float *)(lVar29 + 0x3c) == uStack_168._4_4_, (bool)in_ZR &&
                   (in_ZR = *(float *)(lVar29 + 0x40) == fVar44, (bool)in_ZR)))) &&
                 (in_ZR = *(float *)(lVar29 + 0x44) == *(float *)(puVar37[9] + 0xd8), (bool)in_ZR))
                && (((((in_ZR = *(float *)(lVar29 + 0x48) == *(float *)(puVar31 + 2), (bool)in_ZR &&
                       (in_ZR = *(float *)(lVar29 + 0x4c) == *(float *)(puVar31 + 4), (bool)in_ZR))
                      && ((in_ZR = *(float *)(lVar29 + 0x50) == fStack_150, (bool)in_ZR &&
                          (((in_ZR = *(float *)(lVar29 + 0x54) == fStack_14c, (bool)in_ZR &&
                            (in_ZR = *(float *)(lVar29 + 0x58) == fStack_148, (bool)in_ZR)) &&
                           (in_ZR = *(float *)(lVar29 + 0x5c) == *(float *)(puVar31 + 0xc),
                           (bool)in_ZR)))))) &&
                     ((in_ZR = *(float *)(lVar29 + 0x60) == fStack_140, (bool)in_ZR &&
                      (in_ZR = *(float *)(lVar29 + 100) == fStack_270, (bool)in_ZR)))) &&
                    (in_ZR = *(float *)(lVar29 + 0x68) == fStack_138, (bool)in_ZR)))) &&
               ((((in_ZR = *(float *)(lVar29 + 0x6c) == fStack_134, (bool)in_ZR &&
                  (in_ZR = *(float *)(lVar29 + 0x70) == fStack_130, (bool)in_ZR)) &&
                 ((in_ZR = *(float *)(lVar29 + 0x74) == fStack_12c, (bool)in_ZR &&
                  (((in_ZR = *(float *)(lVar29 + 0x78) == fStack_128, (bool)in_ZR &&
                    (in_ZR = *(float *)(lVar29 + 0x7c) == fStack_124, (bool)in_ZR)) &&
                   (in_ZR = *(float *)(lVar29 + 0x80) == fStack_120, (bool)in_ZR)))))) &&
                (((in_ZR = *(float *)(lVar29 + 0x84) == fStack_11c, (bool)in_ZR &&
                  (in_ZR = *(float *)(lVar29 + 0x88) == fStack_118, (bool)in_ZR)) &&
                 ((in_ZR = *(float *)(lVar29 + 0x8c) == 0.0, (bool)in_ZR &&
                  (((in_ZR = *(float *)(lVar29 + 0x90) == fStack_110, (bool)in_ZR &&
                    (in_ZR = *(float *)(lVar29 + 0x94) == fStack_10c, (bool)in_ZR)) &&
                   ((in_ZR = *(float *)(lVar29 + 0x98) == *(float *)(puVar31 + 0x40), (bool)in_ZR &&
                    (in_ZR = *(float *)(lVar29 + 0x9c) == *(float *)(puVar31 + 0x4a), (bool)in_ZR)))
                   ))))))))) {
              lVar17 = lVar29 + 0xa0;
              FUN_10730ae80(lVar17,&uStack_100);
              if ((int)lVar17 == 0) goto LAB_107308bb8;
              uVar35 = lVar29 + 0xb0;
              FUN_10730ae80(uVar35,&uStack_f0);
              if ((uVar35 & 1) == 0) goto LAB_107308bb8;
            }
            else {
LAB_107308bb8:
              _memcpy(puVar37[9] + 0x30,&uStack_170,0x90);
              plVar21 = (long *)(*(undefined8 **)(puVar37[9] + 0xc0))[1];
              (**(code **)(*plVar21 + 0x20))
                        (plVar21,&uStack_170,**(undefined8 **)(puVar37[9] + 0xc0));
            }
            func_0x00010730ca7c(*(undefined8 *)(*(long *)puVar27[3] + 0x90));
            uStack_200 = (undefined8 *)CONCAT71(uStack_200._1_7_,4);
            uStack_200 = (undefined8 *)((ulong)uStack_200 & 0xffffffff);
            func_0x00010730caf4(*(undefined8 *)(*(long *)puVar27[3] + 0x138),(long *)puVar27[3],
                                &uStack_200);
          }
          func_0x00010730cba0();
          puVar14 = (undefined8 *)0x1;
          goto LAB_107308544;
        }
      }
      func_0x00010730cba0();
      goto LAB_107308c34;
    }
  } while( true );
code_r0x000107307ef8:
  FUN_107307c20();
  func_0x00010730cc98();
  fVar43 = fVar43 + *(float *)(extraout_x8_01 + 0x10) * -2.0;
  param_2 = (ulong)(uint)fVar43;
  in_ZR = fVar39 == fVar43;
  in_NG = fVar39 < fVar43;
  if (fVar39 <= fVar43) {
LAB_107307f10:
    *(undefined1 *)(plVar30 + 5) = 0;
  }
  goto LAB_107307d24;
}



/* Entry: 107308d60; end: 107308dab;  */

undefined1 * FUN_107308d60(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  FUN_10730b680();
  if (param_1 != 0) {
    return (undefined1 *)(param_1 + 0x28);
  }
  puVar1 = &UNK_10f639994;
  func_0x000104c03f28(&UNK_10f639994);
  uStack_18 = 0x107308d88;
  puVar2 = &uStack_21;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10730b75c(puVar2,puVar1);
  return puVar2;
}



/* Entry: 107308dac; end: 107308e33;  */

undefined8 * FUN_107308dac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010730b284(&uStack_30);
  return param_1;
}



/* Entry: 107308e34; end: 107309707;  */

void FUN_107308e34(long param_1,long *param_2)

{
  long *plVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined5 uVar6;
  undefined3 uVar7;
  undefined **ppuVar8;
  code *pcVar9;
  bool bVar10;
  undefined1 uVar11;
  bool bVar12;
  uint *puVar13;
  undefined **ppuVar14;
  undefined ***pppuVar15;
  long lVar16;
  long *plVar17;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar18;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *plVar19;
  undefined *puVar20;
  ulong uVar21;
  long *extraout_x10;
  long *extraout_x10_00;
  undefined *puVar22;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long extraout_x12;
  long *extraout_x12_00;
  undefined *puVar23;
  long *plVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  undefined *puVar27;
  long *plVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  long *unaff_x24;
  long *plVar33;
  uint unaff_w25;
  long *plVar34;
  int iVar35;
  long *plVar36;
  undefined1 auStack_110 [5];
  undefined3 uStack_10b;
  undefined5 uStack_108;
  long lStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  long lStack_e0;
  uint *puStack_d8;
  uint *puStack_d0;
  byte bStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined4 uStack_a7;
  undefined3 uStack_a3;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  if ((*(char *)(param_1 + 0x188) != '\x01') || ((*(byte *)(param_1 + 0x1a8) & 1) == 0)) {
    lStack_e0 = 0;
    puStack_d8 = (uint *)0x0;
    puStack_d0 = (uint *)0x0;
    uStack_a0 = SUB85(&puStack_d0,0);
    uVar6 = uStack_a0;
    uStack_9b = (undefined3)((ulong)&puStack_d0 >> 0x28);
    uVar7 = uStack_9b;
    puVar13 = (uint *)0x3e8;
    plVar34 = param_2;
    FUN_10730b95c();
    lVar31 = (long)puVar13 - ((long)puStack_d8 - lStack_e0);
    lVar16 = lStack_e0;
    _memcpy(lVar31);
    lVar29 = lStack_e0;
    lStack_e0 = lVar31;
    puStack_d8 = puVar13;
    puStack_d0 = puVar13 + (long)plVar34 * 2;
    func_0x00010730cabc(lVar29);
    unaff_x24 = (long *)0x1fffffffffffffff;
    for (uVar30 = 0; uVar30 != 1000; uVar30 = uVar30 + 1) {
      for (iVar35 = 0; iVar35 != 4; iVar35 = iVar35 + 1) {
        unaff_w25 = iVar35 + (unaff_w25 & 0xffffff00);
        if (puStack_d8 < puStack_d0) {
          *puStack_d8 = unaff_w25;
          puStack_d8[1] = (uint)((float)uVar30 * 0.001);
          puVar13 = puStack_d8 + 2;
        }
        else {
          lVar29 = (long)puStack_d8 - lStack_e0;
          uVar32 = (lVar29 >> 3) + 1;
          if (uVar32 >> 0x3d != 0) {
            FUN_10730b950();
            goto LAB_10730964c;
          }
          uVar21 = (long)puStack_d0 - lStack_e0 >> 2;
          if (uVar21 <= uVar32) {
            uVar21 = uVar32;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)puStack_d0 - lStack_e0)) {
            uVar21 = 0x1fffffffffffffff;
          }
          uStack_a0 = uVar6;
          uStack_9b = uVar7;
          if (uVar21 == 0) {
            lVar16 = 0;
          }
          else {
            FUN_10730b95c();
          }
          puVar13 = (uint *)(uVar21 + lVar29);
          lVar31 = lVar16 * 8;
          *puVar13 = unaff_w25;
          puVar13[1] = (uint)((float)uVar30 * 0.001);
          puVar13 = puVar13 + 2;
          lVar16 = lStack_e0;
          func_0x00010730ca84();
          lVar5 = lStack_e0;
          lStack_e0 = lVar29;
          puStack_d8 = puVar13;
          puStack_d0 = (uint *)(uVar21 + lVar31);
          func_0x00010730cabc(lVar5);
        }
        puStack_d8 = puVar13;
      }
    }
    func_0x0001073da3e8(param_2,0xac,1);
    func_0x0001073da3e8(param_2,0xad,(long)puStack_d8 - lStack_e0);
    lVar29 = (long)puStack_d8 - lStack_e0;
    (**(code **)(*param_2 + 0x40))(&uStack_90,param_2,lStack_e0,lVar29,1);
    ppuStack_c0 = (undefined **)(lVar29 >> 3);
    ppuStack_b8 = (undefined **)CONCAT71(ppuStack_b8._1_7_,1);
    lStack_b0 = 8;
    uStack_a8 = 1;
    plStack_98 = uStack_90;
    FUN_107309708(param_1 + 0x158,&ppuStack_c0);
    plVar34 = plStack_98;
    plStack_98 = (long *)0x0;
    if (plVar34 != (long *)0x0) {
      func_0x00010730c910();
    }
    ppuStack_c0 = &PTR_FUN_11099ed40;
    ppuStack_b8 = (undefined **)0x0;
    lStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a7 = 0;
    uStack_a3 = 0;
    FUN_10730b9d0(&ppuStack_b8,6000);
    for (iVar35 = 0; iVar35 != 1000; iVar35 = iVar35 + 1) {
      uVar2 = (undefined2)(iVar35 << 2);
      uVar4 = (undefined2)(iVar35 << 2);
      uVar30 = iVar35 << 2 | 2;
      unaff_x24 = (long *)(ulong)uVar30;
      uVar3 = (undefined2)uVar30;
      uStack_90 = (long *)(CONCAT26(uStack_90._6_2_,CONCAT24(uVar3,CONCAT22(uVar4,uVar2))) | 0x10000
                          );
      func_0x00010730caac();
      uStack_90 = (long *)(CONCAT26(uStack_90._6_2_,CONCAT24(uVar3,CONCAT22(uVar2,uVar4))) | 0x30001
                          );
      func_0x00010730caac();
    }
    func_0x0001073da574(&uStack_90,param_2,&ppuStack_c0,1);
    FUN_107309778(param_1 + 400,&uStack_90);
    lVar29 = lStack_80;
    lStack_80 = 0;
    if (lVar29 != 0) {
      func_0x00010730c910();
    }
    func_0x00010730b05c(&ppuStack_b8);
    FUN_10730b0a0(&lStack_e0);
  }
  plVar34 = (long *)(param_1 + 0xe0);
  plVar1 = (long *)(param_1 + 0x1c0);
LAB_1073090f4:
  do {
    plVar34 = (long *)*plVar34;
    if (plVar34 == (long *)0x0) {
      return;
    }
    lVar29 = *(long *)(plVar34[9] + 8);
    if (*(char *)(lVar29 + 0x5f) < '\0') goto LAB_107309114;
  } while (*(char *)(lVar29 + 0x5f) == '\0');
  goto LAB_10730911c;
LAB_107309114:
  if (*(long *)(lVar29 + 0x50) == 0) goto LAB_1073090f4;
LAB_10730911c:
  lVar16 = param_1 + 0x1b0;
  FUN_10730b680(lVar16,lVar29 + 0x48);
  if (lVar16 != 0) goto LAB_1073090f4;
  FUN_107305270(&lStack_e0,*(undefined8 *)(param_1 + 0x10),lVar29 + 0x48);
  uVar11 = (int)(bStack_c8 - 1) < 0;
  if (bStack_c8 != 1) goto LAB_107309610;
  ppuVar14 = (undefined **)(param_1 + 0x120);
  FUN_10730bdb4(ppuVar14,&lStack_e0);
  if (ppuVar14 == (undefined **)0x0) goto LAB_107309610;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&ppuStack_f8,lVar29 + 0x48);
  ppuStack_c0 = (undefined **)((ulong)ppuStack_c0 & 0xffffff0000000000);
  func_0x0001073da708(auStack_110,param_2,ppuVar14 + 5,&ppuStack_c0,0);
  lStack_b0 = lStack_e8;
  plStack_98 = (long *)lStack_100;
  ppuStack_b8 = ppuStack_f0;
  ppuStack_c0 = ppuStack_f8;
  ppuStack_f8 = (undefined **)0x0;
  ppuStack_f0 = (undefined **)0x0;
  lStack_e8 = 0;
  uStack_a8 = auStack_110[0];
  uStack_a7 = auStack_110._1_4_;
  uStack_a3 = uStack_10b;
  uStack_a0 = uStack_108;
  lStack_100 = 0;
  plVar19 = (long *)(param_1 + 0x1c8);
  func_0x000100102e7c(plVar19,&ppuStack_c0);
  plVar28 = *(long **)(param_1 + 0x1b8);
  if (plVar28 != (long *)0x0) {
    uVar32 = (long)plVar28 - 1;
    if (((ulong)plVar28 & uVar32) == 0) {
      unaff_x24 = (long *)(uVar32 & (ulong)plVar19);
      uVar11 = false;
    }
    else {
      uVar11 = (long)plVar19 - (long)plVar28 < 0;
      unaff_x24 = plVar19;
      if (plVar28 <= plVar19) {
        uVar21 = 0;
        if (plVar28 != (long *)0x0) {
          uVar21 = (ulong)plVar19 / (ulong)plVar28;
        }
        unaff_x24 = (long *)((long)plVar19 - uVar21 * (long)plVar28);
      }
    }
    plVar36 = *(long **)(*(long *)(param_1 + 0x1b0) + (long)unaff_x24 * 8);
    if (plVar36 != (long *)0x0) {
      do {
        while( true ) {
          plVar36 = (long *)*plVar36;
          if (plVar36 == (long *)0x0) goto LAB_10730925c;
          plVar17 = (long *)plVar36[1];
          uVar11 = (long)plVar17 - (long)plVar19 < 0;
          if (plVar17 != plVar19) break;
          uVar21 = (ulong)(plVar36 + 2);
          func_0x0001000e107c(uVar21,&ppuStack_c0);
          if ((uVar21 & 1) != 0) goto LAB_1073094d4;
        }
        if (((ulong)plVar28 & uVar32) == 0) {
          plVar17 = (long *)((ulong)plVar17 & uVar32);
        }
        else if (plVar28 <= plVar17) {
          uVar21 = 0;
          if (plVar28 != (long *)0x0) {
            uVar21 = (ulong)plVar17 / (ulong)plVar28;
          }
          plVar17 = (long *)((long)plVar17 - uVar21 * (long)plVar28);
        }
        uVar11 = (long)plVar17 - (long)unaff_x24 < 0;
      } while (plVar17 == unaff_x24);
    }
  }
LAB_10730925c:
  plVar17 = (long *)0x40;
  __Znwm();
  plVar36 = plStack_98;
  plVar17[4] = lStack_b0;
  plVar17[5] = CONCAT35(uStack_a3,CONCAT41(uStack_a7,uStack_a8));
  *(ulong *)((long)plVar17 + 0x2d) = CONCAT53(uStack_a0,uStack_a3);
  lStack_80 = 1;
  *plVar17 = 0;
  plVar17[1] = (long)plVar19;
  plVar17[3] = (long)ppuStack_b8;
  plVar17[2] = (long)ppuStack_c0;
  ppuStack_c0 = (undefined **)0x0;
  ppuStack_b8 = (undefined **)0x0;
  lStack_b0 = 0;
  plStack_98 = (long *)0x0;
  plVar17[7] = (long)plVar36;
  plVar36 = plVar17;
  uStack_90 = plVar17;
  plStack_88 = plVar1;
  func_0x00010730cb88(*(undefined8 *)(param_1 + 0x1c8));
  if ((plVar28 == (long *)0x0) || (func_0x00010730cb7c(), (bool)uVar11)) {
    bVar10 = (long *)0x2 < plVar28;
    bVar12 = plVar28 == (long *)0x3;
    func_0x00010730c960((long)plVar28 << 1);
    plVar33 = extraout_x8;
    if (!bVar10 || bVar12) {
      plVar33 = extraout_x9;
    }
    if ((long)plVar33 - 1U == 0) {
      plVar33 = (long *)0x2;
    }
    else if (((ulong)plVar33 & (long)plVar33 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
      plVar36 = plVar33;
    }
    plVar28 = *(long **)(param_1 + 0x1b8);
    if (plVar28 < plVar33) {
LAB_107309318:
      plVar28 = plVar33;
      if ((ulong)plVar28 >> 0x3d != 0) {
        func_0x000104bd35f4();
LAB_10730964c:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x107309650);
        (*pcVar9)();
      }
      lVar29 = (long)plVar28 << 3;
      __Znwm(lVar29);
      FUN_10730be68(param_1 + 0x1b0,lVar29);
      plVar36 = (long *)0x0;
      *(long **)(param_1 + 0x1b8) = plVar28;
      while (bVar12 = plVar36 <= plVar28, plVar28 != plVar36) {
        func_0x00010730cb34();
        plVar36 = extraout_x9_00;
      }
      if (*plVar1 != 0) {
        func_0x00010730cc60();
        plVar36 = extraout_x11;
        if (bVar12) {
          plVar36 = (long *)((long)extraout_x11 - extraout_x12 * (long)plVar28);
        }
        if (((ulong)plVar28 & extraout_x9_01) == 0) {
          plVar36 = (long *)((ulong)extraout_x11 & extraout_x9_01);
        }
        *(long **)(extraout_x8_00 + (long)plVar36 * 8) = plVar1;
        lVar29 = extraout_x8_00;
        uVar32 = extraout_x9_01;
        plVar33 = extraout_x10;
        while (plVar33 = (long *)*plVar33, plVar33 != (long *)0x0) {
          plVar24 = (long *)plVar33[1];
          if (((ulong)plVar28 & uVar32) == 0) {
            plVar24 = (long *)((ulong)plVar24 & uVar32);
          }
          else if (plVar28 <= plVar24) {
            uVar21 = 0;
            if (plVar28 != (long *)0x0) {
              uVar21 = (ulong)plVar24 / (ulong)plVar28;
            }
            plVar24 = (long *)((long)plVar24 - uVar21 * (long)plVar28);
          }
          if (plVar24 != plVar36) {
            if (*(long *)(lVar29 + (long)plVar24 * 8) == 0) {
              func_0x00010730cc54();
              lVar29 = extraout_x8_02;
              uVar32 = extraout_x9_03;
              plVar33 = extraout_x12_00;
              plVar36 = extraout_x11_01;
            }
            else {
              func_0x00010730c91c();
              lVar29 = extraout_x8_01;
              uVar32 = extraout_x9_02;
              plVar33 = extraout_x10_00;
              plVar36 = extraout_x11_00;
            }
          }
        }
      }
    }
    else if (plVar33 < plVar28) {
      func_0x00010730cb70((float)*(ulong *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1d0));
      if ((plVar28 < (long *)0x3) || (((ulong)plVar28 & (long)plVar28 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00010730c8f0();
      }
      if (plVar33 <= plVar36) {
        plVar33 = plVar36;
      }
      if (plVar33 < plVar28) {
        if (plVar33 != (long *)0x0) goto LAB_107309318;
        FUN_10730be68(param_1 + 0x1b0,0);
        plVar28 = (long *)0x0;
        *(undefined8 *)(param_1 + 0x1b8) = 0;
      }
      else {
        plVar28 = *(long **)(param_1 + 0x1b8);
      }
    }
    if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar28 - 1U & (ulong)plVar19);
    }
    else {
      unaff_x24 = plVar19;
      if (plVar28 <= plVar19) {
        uVar32 = 0;
        if (plVar28 != (long *)0x0) {
          uVar32 = (ulong)plVar19 / (ulong)plVar28;
        }
        unaff_x24 = (long *)((long)plVar19 - uVar32 * (long)plVar28);
      }
    }
  }
  lVar29 = *(long *)(param_1 + 0x1b0);
  plVar19 = *(long **)(lVar29 + (long)unaff_x24 * 8);
  if (plVar19 == (long *)0x0) {
    *plVar17 = *plVar1;
    *plVar1 = (long)plVar17;
    *(long **)(lVar29 + (long)unaff_x24 * 8) = plVar1;
    if (*plVar17 != 0) {
      plVar19 = *(long **)(*plVar17 + 8);
      if (((ulong)plVar28 & (long)plVar28 - 1U) == 0) {
        plVar19 = (long *)((ulong)plVar19 & (long)plVar28 - 1U);
      }
      else if (plVar28 <= plVar19) {
        uVar32 = 0;
        if (plVar28 != (long *)0x0) {
          uVar32 = (ulong)plVar19 / (ulong)plVar28;
        }
        plVar19 = (long *)((long)plVar19 - uVar32 * (long)plVar28);
      }
      *(long **)(lVar29 + (long)plVar19 * 8) = plVar17;
    }
  }
  else {
    *plVar17 = *plVar19;
    *plVar19 = (long)plVar17;
  }
  uStack_90 = (long *)0x0;
  *(long *)(param_1 + 0x1c8) = *(long *)(param_1 + 0x1c8) + 1;
  func_0x00010730be80(&uStack_90);
LAB_1073094d4:
  func_0x00010730b0cc(&ppuStack_c0);
  puVar22 = *(undefined **)(param_1 + 0x128);
  puVar18 = *ppuVar14;
  puVar20 = ppuVar14[1];
  puVar23 = puVar22 + -1;
  if (((ulong)puVar22 & (ulong)puVar23) == 0) {
    puVar20 = (undefined *)((ulong)puVar23 & (ulong)puVar20);
  }
  else if (puVar22 <= puVar20) {
    uVar32 = 0;
    if (puVar22 != (undefined *)0x0) {
      uVar32 = (ulong)puVar20 / (ulong)puVar22;
    }
    puVar20 = puVar20 + -(uVar32 * (long)puVar22);
  }
  lVar29 = *(long *)(param_1 + 0x120);
  ppuVar8 = *(undefined ***)(lVar29 + (long)puVar20 * 8);
  do {
    ppuVar25 = ppuVar8;
    ppuVar8 = (undefined **)*ppuVar25;
  } while ((undefined **)*ppuVar25 != ppuVar14);
  if (ppuVar25 == (undefined **)(param_1 + 0x130)) {
LAB_107309558:
    if (puVar18 == (undefined *)0x0) {
LAB_10730958c:
      *(undefined8 *)(lVar29 + (long)puVar20 * 8) = 0;
      puVar18 = *ppuVar14;
      goto LAB_107309594;
    }
    puVar26 = *(undefined **)(puVar18 + 8);
    if (((ulong)puVar22 & (ulong)puVar23) == 0) {
      puVar27 = (undefined *)((ulong)puVar26 & (ulong)puVar23);
    }
    else {
      puVar27 = puVar26;
      if (puVar22 <= puVar26) {
        uVar32 = 0;
        if (puVar22 != (undefined *)0x0) {
          uVar32 = (ulong)puVar26 / (ulong)puVar22;
        }
        puVar27 = puVar26 + -(uVar32 * (long)puVar22);
      }
    }
    if (puVar27 != puVar20) goto LAB_10730958c;
LAB_10730959c:
    if (((ulong)puVar22 & (ulong)puVar23) == 0) {
      puVar26 = (undefined *)((ulong)puVar26 & (ulong)puVar23);
    }
    else if (puVar22 <= puVar26) {
      uVar32 = 0;
      if (puVar22 != (undefined *)0x0) {
        uVar32 = (ulong)puVar26 / (ulong)puVar22;
      }
      puVar26 = puVar26 + -(uVar32 * (long)puVar22);
    }
    if (puVar26 != puVar20) {
      *(undefined ***)(lVar29 + (long)puVar26 * 8) = ppuVar25;
      puVar18 = *ppuVar14;
    }
  }
  else {
    puVar26 = ppuVar25[1];
    if (((ulong)puVar22 & (ulong)puVar23) == 0) {
      puVar26 = (undefined *)((ulong)puVar26 & (ulong)puVar23);
    }
    else if (puVar22 <= puVar26) {
      uVar32 = 0;
      if (puVar22 != (undefined *)0x0) {
        uVar32 = (ulong)puVar26 / (ulong)puVar22;
      }
      puVar26 = puVar26 + -(uVar32 * (long)puVar22);
    }
    if (puVar26 != puVar20) goto LAB_107309558;
LAB_107309594:
    if (puVar18 != (undefined *)0x0) {
      puVar26 = *(undefined **)(puVar18 + 8);
      goto LAB_10730959c;
    }
  }
  *ppuVar25 = puVar18;
  *ppuVar14 = (undefined *)0x0;
  *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + -1;
  lStack_b0 = 1;
  pppuVar15 = &ppuStack_c0;
  ppuStack_c0 = ppuVar14;
  ppuStack_b8 = (undefined **)(param_1 + 0x130);
  func_0x00010730beb4();
  func_0x00010730ccac();
  if (pppuVar15 != (undefined ***)0x0) {
    func_0x00010730c910();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_f8);
LAB_107309610:
  func_0x0001001148fc(&lStack_e0);
  goto LAB_1073090f4;
}



/* Entry: 107309708; end: 10730975f;  */

undefined8 * FUN_107309708(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 6) == '\x01') {
    func_0x00010730af34(param_1);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    uVar1 = param_2[5];
    param_2[5] = 0;
    param_1[5] = uVar1;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return param_1;
}



/* Entry: 107309760; end: 107309777;  */

long * FUN_107309760(long param_1,undefined2 *param_2,long param_3)

{
  long lVar1;
  undefined2 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined2 *extraout_x8;
  undefined2 *extraout_x8_00;
  long lVar7;
  undefined1 auStack_78 [16];
  undefined2 *puStack_68;
  
  plVar5 = *(long **)(param_1 + 0x10);
  plVar4 = (long *)(param_1 + 8);
  lVar6 = (long)(param_2 + param_3) - (long)param_2 >> 1;
  if (0 < lVar6) {
    lVar7 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x18) - lVar7 >> 1 < lVar6) {
      plVar3 = plVar4;
      FUN_10730bcd0(plVar4,lVar6 + (lVar7 - *plVar4 >> 1));
      FUN_10730babc(auStack_78,plVar3,(long)plVar5 - *plVar4 >> 1,(long *)(param_1 + 0x18));
      puVar2 = puStack_68;
      for (lVar7 = lVar6 << 1; lVar7 != 0; lVar7 = lVar7 + -2) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
      puStack_68 = puStack_68 + lVar6;
      FUN_10730bd08(plVar4,auStack_78,plVar5);
      func_0x00010730cbec();
      plVar5 = plVar4;
    }
    else {
      lVar7 = lVar7 - (long)plVar5;
      lVar1 = lVar7 >> 1;
      if (lVar1 < lVar6) {
        func_0x000100b56b4c(plVar4,(long)param_2 + lVar7,param_2 + param_3,lVar6 - lVar1);
        if (0 < lVar1) {
          FUN_10730ccd4();
          puVar2 = extraout_x8;
          for (; lVar7 != 0; lVar7 = lVar7 + -2) {
            *puVar2 = *param_2;
            puVar2 = puVar2 + 1;
            param_2 = param_2 + 1;
          }
        }
      }
      else {
        FUN_10730ccd4();
        puVar2 = extraout_x8_00;
        for (lVar6 = lVar6 << 1; lVar6 != 0; lVar6 = lVar6 + -2) {
          *puVar2 = *param_2;
          puVar2 = puVar2 + 1;
          param_2 = param_2 + 1;
        }
      }
    }
  }
  return plVar5;
}



/* Entry: 107309778; end: 1073097cf;  */

undefined8 * FUN_107309778(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    FUN_10730afe0(param_1);
  }
  else {
    uVar1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    *param_1 = uVar1;
    uVar1 = param_2[2];
    param_2[2] = 0;
    param_1[2] = uVar1;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 1073097d0; end: 1073097d3;  */

undefined4 FUN_1073097d0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  func_0x00010785f1f4();
  uStack_21 = 1;
  lVar1 = param_1 + 0x4a0;
  FUN_10724e2c8(lVar1,&uStack_21);
  uStack_22 = 0;
  param_1 = param_1 + 0x7a0;
  FUN_10724e2c8(param_1,&uStack_22);
  uVar2 = 2;
  if ((int)param_1 == 0) {
    uVar2 = (undefined4)lVar1;
  }
  return uVar2;
}



/* Entry: 1073097d4; end: 1073098df;  */

void FUN_1073097d4(long param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long alStack_70 [2];
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined8 *puStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  
  FUN_10724bb70(alStack_70,param_1 + 0x30);
  if (alStack_70[0] != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *param_2;
    *param_2 = 0;
    puVar1 = (undefined8 *)0x30;
    uStack_60 = uVar2;
    uStack_58 = param_3;
    uStack_57 = param_4;
    __Znwm();
    uStack_60 = 0;
    *puVar1 = &PTR_FUN_11099eea8;
    puVar1[1] = uVar3;
    puVar1[2] = FUN_1073098e0;
    puVar1[3] = 0;
    puStack_50 = (undefined8 *)0x0;
    puVar1[4] = uVar2;
    *(undefined1 *)(puVar1 + 5) = param_3;
    *(undefined1 *)((long)puVar1 + 0x29) = param_4;
    uStack_48 = param_3;
    uStack_47 = param_4;
    func_0x000107306ba8(&puStack_50);
    puStack_50 = puVar1;
    func_0x000107306ba8(&uStack_60);
    func_0x0001073ae140(alStack_70[0],&puStack_50);
    func_0x00010730ccac();
    if (alStack_70[0] != 0) {
      func_0x00010730c910();
    }
  }
  func_0x00010724bcd8(alStack_70);
  return;
}



/* Entry: 1073098e0; end: 10730a5ff;  */

void FUN_1073098e0(long param_1,long *param_2,int param_3,int param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  code *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  code *extraout_x8_03;
  long *plVar7;
  long *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  undefined8 extraout_x8_12;
  undefined8 extraout_x8_13;
  undefined8 extraout_x8_14;
  code *extraout_x8_15;
  ulong *puVar10;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong *extraout_x9_04;
  ulong *extraout_x9_05;
  ulong uVar11;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  ulong *puVar12;
  int extraout_w10;
  int extraout_w10_00;
  ushort *puVar13;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  long lVar14;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  ulong *extraout_x11_02;
  ulong *extraout_x11_03;
  long extraout_x12;
  long *plVar15;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *unaff_x21;
  ulong *puVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  ulong *unaff_x26;
  ulong *puVar24;
  ulong uVar25;
  byte bVar26;
  undefined4 uVar27;
  float fVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auStack_398 [24];
  ulong uStack_380;
  long lStack_378;
  undefined1 uStack_370;
  undefined4 uStack_368;
  undefined **ppuStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined4 uStack_338;
  undefined1 uStack_334;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_310 [24];
  long *plStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined **ppuStack_290;
  long *plStack_288;
  long *plStack_280;
  undefined ***pppuStack_278;
  undefined1 auStack_270 [56];
  undefined1 uStack_238;
  undefined1 auStack_230 [32];
  ulong uStack_210;
  undefined4 uStack_208;
  undefined1 uStack_1d8;
  long *plStack_1d0;
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_178 [8];
  long alStack_170 [2];
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_108;
  long lStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_b8;
  
  func_0x00010730c998();
  lVar17 = *param_2;
  if (lVar17 != 0) {
    puVar5 = *(undefined8 **)(lVar17 + 0xd0);
LAB_107309924:
    in_ZR = puVar5 == *(undefined8 **)(lVar17 + 0xd8);
    if (!(bool)in_ZR) {
      puVar13 = (ushort *)*puVar5;
      lVar14 = (long)*(char *)((long)puVar13 + 0x5f);
      if (lVar14 < 0) {
        lVar14 = *(long *)(puVar13 + 0x28);
      }
      if (lVar14 != 0) goto code_r0x000107309940;
      goto LAB_107309994;
    }
    if (param_3 != 0) {
      lVar14 = param_1 + 0xf8;
      func_0x00010596ff94(lVar14,lVar17 + 0x108);
      if (lVar14 != 0) {
        lVar17 = *param_2;
        goto LAB_107309994;
      }
      func_0x0001004c3c6c(param_1 + 0xf8,lVar17 + 0x108);
      lVar17 = *param_2;
    }
    puVar10 = (ulong *)(param_1 + 0xe8);
    uVar6 = *puVar10;
    uVar2 = (long)(uVar6 - 7) < 0;
    in_ZR = uVar6 == 7;
    if (uVar6 < 7) {
      lVar14 = param_1 + 0xa8;
      FUN_10730bfc8(lVar14,lVar17 + 0xe8);
      if ((lVar14 == 0) || ((*(byte *)(lVar14 + 0x38) & 1) != 0)) goto LAB_107309ac4;
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_107309a44;
      lVar17 = *(long *)(param_1 + 0x10) + 0xe8;
      func_0x0001000e107c(lVar17,*param_2 + 0xe8);
      if ((int)lVar17 == 0) {
LAB_107309a44:
        *(undefined1 *)(lVar14 + 0x38) = 1;
        plStack_288 = *(long **)(lVar14 + 0x28);
        plStack_1c8 = *(long **)(lVar14 + 0x30);
        plStack_1d0 = plStack_288;
        if (plStack_1c8 != (long *)0x0) {
          do {
            func_0x00010730c988();
            plStack_288 = extraout_x8_01;
          } while (extraout_w11 != 0);
        }
        plStack_280 = plStack_1c8;
        plStack_2f8 = plStack_288;
        plStack_2f0 = plStack_1c8;
        if (plStack_1c8 != (long *)0x0) {
          do {
            func_0x00010730c988();
            plStack_288 = extraout_x8_02;
            plStack_280 = plStack_2f0;
          } while (extraout_w11_00 != 0);
        }
        ppuStack_290 = &PTR_FUN_11099ef28;
        plStack_2f8 = (long *)0x0;
        plStack_2f0 = (long *)0x0;
        pppuStack_278 = &ppuStack_290;
        func_0x00010730cc74();
        (*extraout_x8_03)();
        func_0x0001006393ec(&ppuStack_290);
        func_0x0001072ba140(&plStack_2f8);
        func_0x0001072ba140(&plStack_1d0);
LAB_107309ac4:
        FUN_10730a7c0(param_1,param_4);
        lVar17 = *param_2;
        *param_2 = 0;
        FUN_107306bcc(param_1 + 0x10,lVar17);
        plVar18 = *(long **)(param_1 + 0x48);
        func_0x00010002b838(&uStack_380,&UNK_10f409f8d);
        func_0x00010730cbbc(*(undefined8 *)(param_1 + 0x10),auStack_310);
        FUN_107268798(&plStack_1d0,auStack_310);
        (**(code **)(*plVar18 + 0x30))(plVar18,&uStack_380,&plStack_1d0);
        func_0x000104c3323c(&plStack_1d0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_310);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_380);
        lVar17 = *(long *)(param_1 + 0x10);
        uStack_380 = *(ulong *)(lVar17 + 0x128);
        lStack_378 = *(long *)(lVar17 + 0x130);
        if (lStack_378 != 0) {
          do {
            func_0x00010730ca28();
          } while (extraout_w10 != 0);
        }
        uStack_370 = 0;
        plVar18 = (long *)(param_1 + 0xc0);
        func_0x000100102e7c(plVar18,lVar17 + 0xe8);
        plVar23 = *(long **)(param_1 + 0xb0);
        if (plVar23 == (long *)0x0) {
LAB_107309c08:
          plVar20 = (long *)0x40;
          __Znwm();
          plVar7 = (long *)(param_1 + 0xb8);
          uStack_1c0 = 0;
          plVar4 = plVar20 + 2;
          *plVar20 = 0;
          plVar20[1] = (long)plVar18;
          plStack_1d0 = plVar20;
          plStack_1c8 = plVar7;
          func_0x00010730cbbc(lVar17);
          plVar20[5] = 0;
          plVar20[6] = 0;
          plVar20[7] = 0;
          uStack_1c0 = CONCAT71(uStack_1c0._1_7_,1);
          func_0x00010730cb88(*(undefined8 *)(param_1 + 0xc0));
          if ((plVar23 == (long *)0x0) || (func_0x00010730cb7c(), (bool)uVar2)) {
            bVar1 = (long *)0x2 < plVar23;
            bVar3 = plVar23 == (long *)0x3;
            func_0x00010730c960((long)plVar23 << 1);
            plVar22 = extraout_x8_04;
            if (!bVar1 || bVar3) {
              plVar22 = extraout_x9;
            }
            if ((long)plVar22 - 1U == 0) {
              plVar22 = (long *)0x2;
            }
            else if (((ulong)plVar22 & (long)plVar22 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
              plVar4 = plVar22;
            }
            plVar23 = *(long **)(param_1 + 0xb0);
            if (plVar23 < plVar22) {
LAB_107309cb0:
              if ((ulong)plVar22 >> 0x3d != 0) {
                func_0x000104bd35f4();
                goto LAB_10730a4d8;
              }
              lVar14 = (long)plVar22 << 3;
              __Znwm(lVar14);
              func_0x00010730c174(param_1 + 0xa8,lVar14);
              plVar23 = (long *)0x0;
              *(long **)(param_1 + 0xb0) = plVar22;
              while (bVar3 = plVar23 <= plVar22, plVar22 != plVar23) {
                func_0x00010730cb34();
                plVar23 = extraout_x9_00;
              }
              plVar23 = plVar22;
              if (*plVar7 != 0) {
                func_0x00010730cc60();
                plVar4 = extraout_x11;
                if (bVar3) {
                  plVar4 = (long *)((long)extraout_x11 - extraout_x12 * (long)plVar22);
                }
                if (((ulong)plVar22 & extraout_x9_01) == 0) {
                  plVar4 = (long *)((ulong)extraout_x11 & extraout_x9_01);
                }
                *(long **)(extraout_x8_05 + (long)plVar4 * 8) = plVar7;
                lVar14 = extraout_x8_05;
                uVar6 = extraout_x9_01;
                plVar15 = extraout_x10;
                while (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0) {
                  plVar16 = (long *)plVar15[1];
                  if (((ulong)plVar22 & uVar6) == 0) {
                    plVar16 = (long *)((ulong)plVar16 & uVar6);
                  }
                  else if (plVar22 <= plVar16) {
                    uVar25 = 0;
                    if (plVar22 != (long *)0x0) {
                      uVar25 = (ulong)plVar16 / (ulong)plVar22;
                    }
                    plVar16 = (long *)((long)plVar16 - uVar25 * (long)plVar22);
                  }
                  if (plVar16 != plVar4) {
                    if (*(long *)(lVar14 + (long)plVar16 * 8) == 0) {
                      func_0x00010730cc54();
                      lVar14 = extraout_x8_07;
                      uVar6 = extraout_x9_03;
                      plVar15 = extraout_x12_00;
                      plVar4 = extraout_x11_01;
                    }
                    else {
                      func_0x00010730c91c();
                      lVar14 = extraout_x8_06;
                      uVar6 = extraout_x9_02;
                      plVar15 = extraout_x10_00;
                      plVar4 = extraout_x11_00;
                    }
                  }
                }
              }
            }
            else if (plVar22 < plVar23) {
              func_0x00010730cb70((float)*(ulong *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
              if ((plVar23 < (long *)0x3) || (((ulong)plVar23 & (long)plVar23 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else {
                func_0x00010730c8f0();
              }
              if (plVar22 <= plVar4) {
                plVar22 = plVar4;
              }
              if (plVar22 < plVar23) {
                if (plVar22 != (long *)0x0) goto LAB_107309cb0;
                func_0x00010730c174(param_1 + 0xa8,0);
                *(undefined8 *)(param_1 + 0xb0) = 0;
                plVar23 = (long *)0x0;
              }
              else {
                plVar23 = *(long **)(param_1 + 0xb0);
              }
            }
            if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
              unaff_x21 = (long *)((long)plVar23 - 1U & (ulong)plVar18);
            }
            else {
              unaff_x21 = plVar18;
              if (plVar23 <= plVar18) {
                uVar6 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar6 = (ulong)plVar18 / (ulong)plVar23;
                }
                unaff_x21 = (long *)((long)plVar18 - uVar6 * (long)plVar23);
              }
            }
          }
          lVar14 = *(long *)(param_1 + 0xa8);
          plVar18 = *(long **)(lVar14 + (long)unaff_x21 * 8);
          if (plVar18 == (long *)0x0) {
            *plVar20 = *plVar7;
            *plVar7 = (long)plVar20;
            *(long **)(lVar14 + (long)unaff_x21 * 8) = plVar7;
            if (*plVar20 != 0) {
              plVar18 = *(long **)(*plVar20 + 8);
              if (((ulong)plVar23 & (long)plVar23 - 1U) == 0) {
                plVar18 = (long *)((ulong)plVar18 & (long)plVar23 - 1U);
              }
              else if (plVar23 <= plVar18) {
                uVar6 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar6 = (ulong)plVar18 / (ulong)plVar23;
                }
                plVar18 = (long *)((long)plVar18 - uVar6 * (long)plVar23);
              }
              *(long **)(lVar14 + (long)plVar18 * 8) = plVar20;
            }
          }
          else {
            *plVar20 = *plVar18;
            *plVar18 = (long)plVar20;
          }
          plStack_1d0 = (long *)0x0;
          *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
          FUN_10730c18c(&plStack_1d0);
        }
        else {
          uVar6 = (long)plVar23 - 1;
          if (((ulong)plVar23 & uVar6) == 0) {
            unaff_x21 = (long *)(uVar6 & (ulong)plVar18);
            uVar2 = false;
          }
          else {
            uVar2 = (long)plVar18 - (long)plVar23 < 0;
            unaff_x21 = plVar18;
            if (plVar23 <= plVar18) {
              uVar25 = 0;
              if (plVar23 != (long *)0x0) {
                uVar25 = (ulong)plVar18 / (ulong)plVar23;
              }
              unaff_x21 = (long *)((long)plVar18 - uVar25 * (long)plVar23);
            }
          }
          plVar20 = *(long **)(*(long *)(param_1 + 0xa8) + (long)unaff_x21 * 8);
          if (plVar20 == (long *)0x0) goto LAB_107309c08;
          do {
            while( true ) {
              plVar20 = (long *)*plVar20;
              if (plVar20 == (long *)0x0) goto LAB_107309c08;
              plVar7 = (long *)plVar20[1];
              uVar2 = (long)plVar7 - (long)plVar18 < 0;
              if (plVar7 == plVar18) break;
              if (((ulong)plVar23 & uVar6) == 0) {
                plVar7 = (long *)((ulong)plVar7 & uVar6);
              }
              else if (plVar23 <= plVar7) {
                uVar25 = 0;
                if (plVar23 != (long *)0x0) {
                  uVar25 = (ulong)plVar7 / (ulong)plVar23;
                }
                plVar7 = (long *)((long)plVar7 - uVar25 * (long)plVar23);
              }
              uVar2 = (long)plVar7 - (long)unaff_x21 < 0;
              if (plVar7 != unaff_x21) goto LAB_107309c08;
            }
            plVar7 = plVar20 + 2;
            func_0x0001000e107c(plVar7,lVar17 + 0xe8);
          } while (((ulong)plVar7 & 1) == 0);
        }
        lVar14 = lStack_378;
        uVar6 = uStack_380;
        uStack_380 = 0;
        lStack_378 = 0;
        plStack_1c8 = (long *)plVar20[6];
        plStack_1d0 = (long *)plVar20[5];
        plVar20[6] = lVar14;
        plVar20[5] = uVar6;
        func_0x0001072ba140(&plStack_1d0);
        *(undefined1 *)(plVar20 + 7) = uStack_370;
        func_0x0001072ba140(&uStack_380);
        uStack_380 = CONCAT44(uStack_380._4_4_,0x12a);
        uStack_368 = 0;
        uStack_350 = 0;
        uStack_348 = 0;
        ppuStack_360 = &PTR_FUN_110996720;
        uStack_358 = 0;
        uStack_340 = 0x12a;
        uStack_338 = 0;
        uStack_334 = 1;
        uStack_328 = 0;
        uStack_320 = 0;
        uStack_330 = 0;
        func_0x00010730cbbc(*(undefined8 *)(param_1 + 0x10),auStack_398);
        FUN_10726e300(&uStack_380,&UNK_10f409fa8,auStack_398);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_398);
        plStack_1d0 = (long *)CONCAT44(plStack_1d0._4_4_,1);
        plStack_1c8 = (long *)((ulong)plStack_1c8 & 0xffffffff00000000);
        uStack_210 = **(ulong **)(param_1 + 0x58);
        uStack_208 = 3;
        func_0x00010743fa9c(*(ulong **)(param_1 + 0x58),&uStack_380,&plStack_1d0,&uStack_210,7);
        bVar26 = 0;
        plVar23 = (long *)(param_1 + 0xd0);
        lVar14 = *(long *)(param_1 + 0x10);
        plVar18 = (long *)(param_1 + 0xe0);
        puVar5 = *(undefined8 **)(lVar14 + 0xd8);
        while( true ) {
          uVar27 = (undefined4)uVar6;
          puVar8 = *(undefined8 **)(lVar14 + 0xd0);
          uVar2 = (long)puVar5 - (long)puVar8 < 0;
          if (puVar5 == puVar8) break;
          puVar8 = (undefined8 *)0xe0;
          __Znwm();
          *puVar8 = &PTR_FUN_11099efa8;
          _bzero(puVar8 + 1,200);
          FUN_107307c20();
          *(undefined4 *)(puVar8 + 0x1a) = uVar27;
          *(undefined4 *)((long)puVar8 + 0xd4) = 0;
          *(undefined4 *)(puVar8 + 0x1b) = 0;
          uVar30 = puVar5[-1];
          uVar29 = puVar5[-2];
          if (puVar5[-1] != 0) {
            do {
              func_0x00010730ca28();
            } while (extraout_w10_00 != 0);
          }
          plStack_1c8 = (long *)puVar8[2];
          plStack_1d0 = (long *)puVar8[1];
          puVar8[2] = uVar30;
          puVar8[1] = uVar29;
          func_0x0001073027f8(&plStack_1d0);
          uVar27 = (undefined4)uVar29;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (puVar8 + 3,lVar17 + 0xe8);
          if (param_4 == 0) {
            uVar27 = *(undefined4 *)(param_1 + 0x8c);
          }
          else {
            FUN_107307c20();
          }
          *(undefined4 *)(puVar8 + 0x1a) = uVar27;
          uVar6 = (ulong)(uint)((float)bVar26 * 0.16);
          *(float *)(puVar8 + 0x1b) = (float)bVar26 * 0.16;
          lVar21 = puVar8[1];
          puVar12 = puVar10;
          FUN_10726364c(puVar10,lVar21 + 0xa0);
          puVar19 = *(ulong **)(param_1 + 0xd8);
          if (puVar19 != (ulong *)0x0) {
            uVar25 = (long)puVar19 - 1;
            if (((ulong)puVar19 & uVar25) == 0) {
              unaff_x26 = (ulong *)(uVar25 & (ulong)puVar12);
              uVar2 = false;
            }
            else {
              uVar2 = (long)puVar12 - (long)puVar19 < 0;
              unaff_x26 = puVar12;
              if (puVar19 <= puVar12) {
                uVar11 = 0;
                if (puVar19 != (ulong *)0x0) {
                  uVar11 = (ulong)puVar12 / (ulong)puVar19;
                }
                unaff_x26 = (ulong *)((long)puVar12 - uVar11 * (long)puVar19);
              }
            }
            plVar20 = *(long **)(*plVar23 + (long)unaff_x26 * 8);
            if (plVar20 != (long *)0x0) {
              do {
                while( true ) {
                  plVar20 = (long *)*plVar20;
                  if (plVar20 == (long *)0x0) goto LAB_10730a0a8;
                  puVar9 = (ulong *)plVar20[1];
                  uVar2 = (long)puVar9 - (long)puVar12 < 0;
                  if (puVar9 != puVar12) break;
                  plVar7 = plVar20 + 2;
                  func_0x000104c32db4(plVar7,lVar21 + 0xa0);
                  if (((ulong)plVar7 & 1) != 0) goto LAB_10730a314;
                }
                if (((ulong)puVar19 & uVar25) == 0) {
                  puVar9 = (ulong *)((ulong)puVar9 & uVar25);
                }
                else if (puVar19 <= puVar9) {
                  uVar11 = 0;
                  if (puVar19 != (ulong *)0x0) {
                    uVar11 = (ulong)puVar9 / (ulong)puVar19;
                  }
                  puVar9 = (ulong *)((long)puVar9 - uVar11 * (long)puVar19);
                }
                uVar2 = (long)puVar9 - (long)unaff_x26 < 0;
              } while (puVar9 == unaff_x26);
            }
          }
LAB_10730a0a8:
          plVar20 = (long *)0x50;
          __Znwm();
          uStack_1c0 = 1;
          puVar9 = (ulong *)(plVar20 + 2);
          *plVar20 = 0;
          plVar20[1] = (long)puVar12;
          plStack_1d0 = plVar20;
          plStack_1c8 = plVar18;
          func_0x000104c2fe00(puVar9,lVar21 + 0xa0);
          plVar20[9] = 0;
          func_0x00010730cb88(*(undefined8 *)(param_1 + 0xe8));
          if ((puVar19 == (ulong *)0x0) || (func_0x00010730cb7c(), (bool)uVar2)) {
            bVar1 = (ulong *)0x2 < puVar19;
            bVar3 = puVar19 == (ulong *)0x3;
            func_0x00010730c960((long)puVar19 << 1);
            puVar24 = extraout_x8_08;
            if (!bVar1 || bVar3) {
              puVar24 = extraout_x9_04;
            }
            if ((long)puVar24 - 1U == 0) {
              puVar24 = (ulong *)0x2;
            }
            else if (((ulong)puVar24 & (long)puVar24 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
              puVar9 = puVar24;
            }
            puVar19 = *(ulong **)(param_1 + 0xd8);
            if (puVar24 <= puVar19) {
              if (puVar24 < puVar19) {
                uVar6 = (ulong)(uint)(float)*(ulong *)(param_1 + 0xe8);
                func_0x00010730cb70(uVar6,*(undefined4 *)(param_1 + 0xf0));
                if ((puVar19 < (ulong *)0x3) || (((ulong)puVar19 & (long)puVar19 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else {
                  func_0x00010730c8f0();
                }
                if (puVar24 <= puVar9) {
                  puVar24 = puVar9;
                }
                if (puVar24 < puVar19) {
                  if (puVar24 != (ulong *)0x0) goto LAB_10730a144;
                  FUN_10730c21c(plVar23,0);
                  puVar19 = (ulong *)0x0;
                  *(undefined8 *)(param_1 + 0xd8) = 0;
                }
                else {
                  puVar19 = *(ulong **)(param_1 + 0xd8);
                }
              }
LAB_10730a268:
              if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
                unaff_x26 = (ulong *)((long)puVar19 - 1U & (ulong)puVar12);
              }
              else {
                unaff_x26 = puVar12;
                if (puVar19 <= puVar12) {
                  uVar25 = 0;
                  if (puVar19 != (ulong *)0x0) {
                    uVar25 = (ulong)puVar12 / (ulong)puVar19;
                  }
                  unaff_x26 = (ulong *)((long)puVar12 - uVar25 * (long)puVar19);
                }
              }
              goto LAB_10730a294;
            }
LAB_10730a144:
            puVar19 = puVar24;
            if ((ulong)puVar19 >> 0x3d == 0) {
              lVar21 = (long)puVar19 << 3;
              __Znwm(lVar21);
              FUN_10730c21c(plVar23,lVar21);
              puVar9 = (ulong *)0x0;
              *(ulong **)(param_1 + 0xd8) = puVar19;
              lVar21 = *(long *)(param_1 + 0xd0);
              while (puVar19 != puVar9) {
                func_0x00010730cb34();
                lVar21 = extraout_x8_09;
                puVar9 = extraout_x9_05;
              }
              plVar7 = (long *)*plVar18;
              if (plVar7 != (long *)0x0) {
                puVar9 = (ulong *)plVar7[1];
                uVar11 = (long)puVar19 - 1;
                uVar25 = 0;
                if (puVar19 != (ulong *)0x0) {
                  uVar25 = (ulong)puVar9 / (ulong)puVar19;
                }
                puVar24 = puVar9;
                if (puVar19 <= puVar9) {
                  puVar24 = (ulong *)((long)puVar9 - uVar25 * (long)puVar19);
                }
                if (((ulong)puVar19 & uVar11) == 0) {
                  puVar24 = (ulong *)((ulong)puVar9 & uVar11);
                }
                *(long **)(lVar21 + (long)puVar24 * 8) = plVar18;
                while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
                  puVar9 = (ulong *)plVar7[1];
                  if (((ulong)puVar19 & uVar11) == 0) {
                    puVar9 = (ulong *)((ulong)puVar9 & uVar11);
                  }
                  else if (puVar19 <= puVar9) {
                    uVar25 = 0;
                    if (puVar19 != (ulong *)0x0) {
                      uVar25 = (ulong)puVar9 / (ulong)puVar19;
                    }
                    puVar9 = (ulong *)((long)puVar9 - uVar25 * (long)puVar19);
                  }
                  if (puVar9 != puVar24) {
                    if (*(long *)(lVar21 + (long)puVar9 * 8) == 0) {
                      func_0x00010730cc54();
                      lVar21 = extraout_x8_11;
                      uVar11 = extraout_x9_07;
                      plVar7 = extraout_x12_01;
                      puVar24 = extraout_x11_03;
                    }
                    else {
                      func_0x00010730c91c();
                      lVar21 = extraout_x8_10;
                      uVar11 = extraout_x9_06;
                      plVar7 = extraout_x10_01;
                      puVar24 = extraout_x11_02;
                    }
                  }
                }
              }
              goto LAB_10730a268;
            }
            goto LAB_10730a4cc;
          }
LAB_10730a294:
          lVar21 = *plVar23;
          plVar7 = *(long **)(lVar21 + (long)unaff_x26 * 8);
          if (plVar7 == (long *)0x0) {
            *plVar20 = *plVar18;
            *plVar18 = (long)plVar20;
            *(long **)(lVar21 + (long)unaff_x26 * 8) = plVar18;
            if (*plVar20 != 0) {
              puVar12 = *(ulong **)(*plVar20 + 8);
              if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
                puVar12 = (ulong *)((ulong)puVar12 & (long)puVar19 - 1U);
              }
              else if (puVar19 <= puVar12) {
                uVar25 = 0;
                if (puVar19 != (ulong *)0x0) {
                  uVar25 = (ulong)puVar12 / (ulong)puVar19;
                }
                puVar12 = (ulong *)((long)puVar12 - uVar25 * (long)puVar19);
              }
              *(long **)(lVar21 + (long)puVar12 * 8) = plVar20;
            }
          }
          else {
            *plVar20 = *plVar7;
            *plVar7 = (long)plVar20;
          }
          plStack_1d0 = (long *)0x0;
          *puVar10 = *puVar10 + 1;
          FUN_10730c234(&plStack_1d0);
LAB_10730a314:
          lVar21 = plVar20[9];
          plVar20[9] = (long)puVar8;
          if (lVar21 != 0) {
            func_0x00010730c910();
          }
          bVar26 = bVar26 + 1;
          puVar5 = puVar5 + -2;
        }
        lVar21 = *(long *)(param_1 + 0x10);
        lVar14 = *(long *)(lVar21 + 0xd8);
        for (lVar17 = *(long *)(lVar21 + 0xd0); in_ZR = lVar17 == lVar14, !(bool)in_ZR;
            lVar17 = lVar17 + 0x10) {
          uStack_210 = uStack_210 & 0xffffffffffffff00;
          uStack_1d8 = 0;
          uStack_2a0 = 0;
          uStack_298 = 0;
          func_0x0001073b3fc8(auStack_230);
          uStack_2c8 = 1;
          lStack_2d0 = 10000000000;
          uStack_2b8 = 1;
          uStack_2c0 = 0;
          func_0x00010730cacc();
          func_0x00010730cc40();
          func_0x0001073b0ad4(0,0x3ff0000000000000);
          func_0x00010730ca9c(*(undefined4 *)(param_1 + 0x88));
          func_0x00010730cadc();
          func_0x00010730ca94();
          func_0x00010730b220(&uStack_2a0);
          func_0x00010724b3d8(&uStack_210);
          auStack_270[0] = 0;
          uStack_238 = 0;
          uStack_2e8 = 0;
          uStack_2e0 = 0;
          func_0x0001073b3fc8(auStack_230);
          lStack_2d0 = (long)(*(float *)(lVar21 + 0x100) * 1000.0) * 1000000;
          uStack_2c0 = 0;
          uStack_2c8 = 1;
          uStack_2b8 = 1;
          func_0x00010730cacc();
          func_0x00010730cc40();
          func_0x0001073b0ad4(0,0);
          func_0x00010730ca9c(*(undefined4 *)(param_1 + 0x84));
          func_0x00010730cadc();
          func_0x00010730ca94();
          func_0x00010730b220(&uStack_2e8);
          func_0x00010724b3d8(auStack_270);
        }
        FUN_107262330(&uStack_380);
LAB_10730a4a4:
        func_0x00010730c93c(extraout_x8);
        if ((bool)in_ZR) {
          func_0x00010730ccb8();
          return;
        }
        goto LAB_10730a4c8;
      }
      if (*(long **)(*param_2 + 0x128) == (long *)0x0) goto LAB_10730a4a4;
      UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(*param_2 + 0x128) + 0x10);
      func_0x00010730c93c(extraout_x8);
      if ((bool)in_ZR) {
        func_0x00010730ccb8();
                    /* WARNING: Could not recover jumptable at 0x000107309a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      goto LAB_10730a4c8;
    }
    goto LAB_107309994;
  }
LAB_1073099a8:
  func_0x00010730c93c(extraout_x8);
  if ((bool)in_ZR) {
    func_0x00010730ccb8();
    puVar8 = &uStack_120;
    puVar5 = &uStack_120;
    func_0x00010730c998();
    uStack_b8 = extraout_x8_12;
    if (param_4 == 0) {
      plVar18 = (long *)(param_1 + 0xb8);
      while (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0) {
        if ((*(byte *)(plVar18 + 7) & 1) == 0) {
          *(undefined1 *)(plVar18 + 7) = 1;
          uVar29 = plVar18[5];
          lStack_118 = plVar18[6];
          uStack_120 = uVar29;
          if (lStack_118 != 0) {
            do {
              func_0x00010730c988();
              uVar29 = extraout_x8_13;
            } while (extraout_w11_01 != 0);
          }
          lVar17 = lStack_118;
          uStack_108 = uVar29;
          lStack_100 = lStack_118;
          if (lStack_118 != 0) {
            do {
              func_0x00010730c988();
              uVar29 = extraout_x8_14;
              lVar17 = lStack_100;
            } while (extraout_w11_02 != 0);
          }
          ppuStack_f8 = &PTR_SUB_11099efd8;
          uStack_108 = 0;
          lStack_100 = 0;
          uStack_f0 = uVar29;
          lStack_e8 = lVar17;
          pppuStack_e0 = &ppuStack_f8;
          func_0x00010730cc74();
          (*extraout_x8_15)();
          func_0x0001006393ec(&ppuStack_f8);
          func_0x0001072ba140(&uStack_108);
          func_0x0001072ba140(&uStack_120);
        }
      }
      FUN_10730b884(param_1 + 0xd0);
      if (*(long *)(param_1 + 0xc0) != 0) {
        FUN_10730b530(*(undefined8 *)(param_1 + 0xb8));
        *(undefined8 *)(param_1 + 0xb8) = 0;
        lVar14 = *(long *)(param_1 + 0xb0);
        for (lVar17 = 0; in_ZR = lVar14 == lVar17, !(bool)in_ZR; lVar17 = lVar17 + 1) {
          *(undefined8 *)(*(long *)(param_1 + 0xa8) + lVar17 * 8) = 0;
        }
        *(undefined8 *)(param_1 + 0xc0) = 0;
      }
      func_0x00010730b8c8(param_1 + 0x1b0);
      func_0x00010730b90c(param_1 + 0x120);
    }
    else {
      plVar18 = (long *)(param_1 + 0xe0);
      while (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0) {
        fVar28 = *(float *)(plVar18[9] + 0xd4);
        in_ZR = fVar28 == 0.0;
        if ((bool)in_ZR) {
          FUN_107307c20();
          *(float *)(plVar18[9] + 0xd4) = fVar28;
        }
      }
    }
    FUN_107306bcc(param_1 + 0x10,0);
    plVar18 = *(long **)(param_1 + 0x48);
    func_0x00010002b838(&uStack_120,&UNK_10f409f8d);
    func_0x00010724ae4c(&ppuStack_f8,"");
    (**(code **)(*plVar18 + 0x30))(plVar18,&uStack_120,&ppuStack_f8);
    func_0x000104c3323c(&ppuStack_f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010730c93c(uStack_b8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x000104c3323c(&ppuStack_f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010730c9b8();
    FUN_10724bb70(alStack_170,(undefined1 *)((long)puVar5 + 0x30));
    if (alStack_170[0] != 0) {
      FUN_10730c758(auStack_178,*(undefined8 *)((long)puVar5 + 0x28),FUN_10730aa80,0,puVar8);
      func_0x0001073ae140(alStack_170[0],auStack_178);
      func_0x00010730cc8c();
      if (alStack_170[0] != 0) {
        func_0x00010730c910();
      }
    }
    func_0x00010730caec();
    return;
  }
LAB_10730a4c8:
  ___stack_chk_fail();
LAB_10730a4cc:
  func_0x000104bd35f4();
LAB_10730a4d8:
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10730a4dc);
  (*UNRECOVERED_JUMPTABLE)();
code_r0x000107309940:
  puVar5 = puVar5 + 2;
  in_ZR = *puVar13 == 0x3e9;
  if (1000 < *puVar13) goto LAB_107309994;
  goto LAB_107309924;
LAB_107309994:
  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x128) != 0)) {
    func_0x00010730cc74();
    (*extraout_x8_00)();
  }
  goto LAB_1073099a8;
}



/* Entry: 10730a600; end: 10730a6fb;  */

undefined8 * FUN_10730a600(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_11099ecc0;
  (**(code **)(*(long *)param_1[8] + 0x18))
            ((long *)param_1[8],*(undefined4 *)((long)param_1 + 0x84));
  (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],*(undefined4 *)(param_1 + 0x11));
  func_0x00010730b634(param_1[0x38]);
  lVar1 = param_1[0x36];
  param_1[0x36] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010730b10c(param_1 + 0x32);
  func_0x00010730b13c(param_1 + 0x2b);
  FUN_10725b238(param_1 + 0x29);
  func_0x00010730b5e8(param_1[0x26]);
  lVar1 = param_1[0x24];
  param_1[0x24] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x0001005d0538(param_1 + 0x1f);
  func_0x00010730b584(param_1[0x1c]);
  lVar1 = param_1[0x1a];
  param_1[0x1a] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010730b530(param_1[0x17]);
  lVar1 = param_1[0x15];
  param_1[0x15] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x0001006393ec(param_1 + 0xc);
  func_0x00010726eeb8(param_1 + 9);
  FUN_10724ae28(param_1 + 6);
  FUN_10724b54c(param_1 + 3);
  func_0x000107306ba8(param_1 + 2);
  return param_1;
}



/* Entry: 10730a6fc; end: 10730a6ff;  */

undefined8 * FUN_10730a6fc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_11099ecc0;
  (**(code **)(*(long *)param_1[8] + 0x18))
            ((long *)param_1[8],*(undefined4 *)((long)param_1 + 0x84));
  (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],*(undefined4 *)(param_1 + 0x11));
  func_0x00010730b634(param_1[0x38]);
  lVar1 = param_1[0x36];
  param_1[0x36] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010730b10c(param_1 + 0x32);
  func_0x00010730b13c(param_1 + 0x2b);
  FUN_10725b238(param_1 + 0x29);
  func_0x00010730b5e8(param_1[0x26]);
  lVar1 = param_1[0x24];
  param_1[0x24] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x0001005d0538(param_1 + 0x1f);
  func_0x00010730b584(param_1[0x1c]);
  lVar1 = param_1[0x1a];
  param_1[0x1a] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x00010730b530(param_1[0x17]);
  lVar1 = param_1[0x15];
  param_1[0x15] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x0001006393ec(param_1 + 0xc);
  func_0x00010726eeb8(param_1 + 9);
  FUN_10724ae28(param_1 + 6);
  FUN_10724b54c(param_1 + 3);
  func_0x000107306ba8(param_1 + 2);
  return param_1;
}



/* Entry: 10730a700; end: 10730a713;  */

void FUN_10730a700(void)

{
  FUN_10730a600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730a714; end: 10730a7bf;  */

void FUN_10730a714(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puStack_48;
  long alStack_40 [2];
  
  FUN_10724bb70(alStack_40,param_1 + 0x30);
  if (alStack_40[0] != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = (undefined8 *)0x28;
    __Znwm();
    *puVar1 = &PTR_FUN_11099eee8;
    puVar1[1] = uVar2;
    puVar1[2] = FUN_10730a7c0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = param_2;
    puStack_48 = puVar1;
    func_0x0001073ae140(alStack_40[0],&puStack_48);
    func_0x00010730cc8c();
    if (alStack_40[0] != 0) {
      func_0x00010730c910();
    }
  }
  func_0x00010730caec();
  return;
}



/* Entry: 10730a7c0; end: 10730a9bf;  */

void FUN_10730a7c0(long param_1,int param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar3;
  code *extraout_x8_02;
  long lVar4;
  long lVar5;
  int extraout_w11;
  int extraout_w11_00;
  long *plVar6;
  float fVar7;
  undefined1 auStack_108 [8];
  long alStack_100 [2];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_98;
  long lStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined ***pppuStack_70;
  undefined8 uStack_48;
  
  puVar2 = &uStack_b0;
  puVar1 = &uStack_b0;
  func_0x00010730c998();
  uStack_48 = extraout_x8;
  if (param_2 == 0) {
    plVar6 = (long *)(param_1 + 0xb8);
    while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
      if ((*(byte *)(plVar6 + 7) & 1) == 0) {
        *(undefined1 *)(plVar6 + 7) = 1;
        uVar3 = plVar6[5];
        lStack_a8 = plVar6[6];
        uStack_b0 = uVar3;
        if (lStack_a8 != 0) {
          do {
            func_0x00010730c988();
            uVar3 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        lVar4 = lStack_a8;
        uStack_98 = uVar3;
        lStack_90 = lStack_a8;
        if (lStack_a8 != 0) {
          do {
            func_0x00010730c988();
            uVar3 = extraout_x8_01;
            lVar4 = lStack_90;
          } while (extraout_w11_00 != 0);
        }
        ppuStack_88 = &PTR_SUB_11099efd8;
        uStack_98 = 0;
        lStack_90 = 0;
        uStack_80 = uVar3;
        lStack_78 = lVar4;
        pppuStack_70 = &ppuStack_88;
        func_0x00010730cc74();
        (*extraout_x8_02)();
        func_0x0001006393ec(&ppuStack_88);
        func_0x0001072ba140(&uStack_98);
        func_0x0001072ba140(&uStack_b0);
      }
    }
    FUN_10730b884(param_1 + 0xd0);
    if (*(long *)(param_1 + 0xc0) != 0) {
      FUN_10730b530(*(undefined8 *)(param_1 + 0xb8));
      *(undefined8 *)(param_1 + 0xb8) = 0;
      lVar5 = *(long *)(param_1 + 0xb0);
      for (lVar4 = 0; in_ZR = lVar5 == lVar4, !(bool)in_ZR; lVar4 = lVar4 + 1) {
        *(undefined8 *)(*(long *)(param_1 + 0xa8) + lVar4 * 8) = 0;
      }
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    func_0x00010730b8c8(param_1 + 0x1b0);
    func_0x00010730b90c(param_1 + 0x120);
  }
  else {
    plVar6 = (long *)(param_1 + 0xe0);
    while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
      fVar7 = *(float *)(plVar6[9] + 0xd4);
      in_ZR = fVar7 == 0.0;
      if ((bool)in_ZR) {
        FUN_107307c20();
        *(float *)(plVar6[9] + 0xd4) = fVar7;
      }
    }
  }
  FUN_107306bcc(param_1 + 0x10,0);
  plVar6 = *(long **)(param_1 + 0x48);
  func_0x00010002b838(&uStack_b0,&UNK_10f409f8d);
  func_0x00010724ae4c(&ppuStack_88,"");
  (**(code **)(*plVar6 + 0x30))(plVar6,&uStack_b0,&ppuStack_88);
  func_0x000104c3323c(&ppuStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010730c93c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c3323c(&ppuStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010730c9b8();
  FUN_10724bb70(alStack_100,(undefined1 *)((long)puVar1 + 0x30));
  if (alStack_100[0] != 0) {
    FUN_10730c758(auStack_108,*(undefined8 *)((long)puVar1 + 0x28),FUN_10730aa80,0,puVar2);
    func_0x0001073ae140(alStack_100[0],auStack_108);
    func_0x00010730cc8c();
    if (alStack_100[0] != 0) {
      func_0x00010730c910();
    }
  }
  func_0x00010730caec();
  return;
}



/* Entry: 10730a9c0; end: 10730a9d7;  */

void FUN_10730a9c0(long param_1,undefined8 param_2)

{
  undefined1 auStack_58 [8];
  long alStack_50 [2];
  
  FUN_10724bb70(alStack_50,param_1 + 0x30);
  if (alStack_50[0] != 0) {
    FUN_10730c758(auStack_58,*(undefined8 *)(param_1 + 0x28),FUN_10730aa80,0,param_2);
    func_0x0001073ae140(alStack_50[0],auStack_58);
    func_0x00010730cc8c();
    if (alStack_50[0] != 0) {
      func_0x00010730c910();
    }
  }
  func_0x00010730caec();
  return;
}



/* Entry: 10730a9d8; end: 10730aa7f;  */

void FUN_10730a9d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [8];
  long alStack_50 [2];
  
  FUN_10724bb70(alStack_50,param_1 + 1);
  if (alStack_50[0] != 0) {
    FUN_10730c758(auStack_58,*param_1,param_2,param_3,param_4);
    func_0x0001073ae140(alStack_50[0],auStack_58);
    func_0x00010730cc8c();
    if (alStack_50[0] != 0) {
      func_0x00010730c910();
    }
  }
  func_0x00010730caec();
  return;
}



/* Entry: 10730aa80; end: 10730ae5b;  */

void FUN_10730aa80(long param_1,long param_2)

{
  code *pcVar1;
  undefined1 in_NG;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong uVar7;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long *plVar8;
  long *extraout_x10;
  long *plVar9;
  long *plVar10;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x12;
  ulong uVar11;
  long *unaff_x22;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [88];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  lVar5 = param_1 + 0x120;
  FUN_10730bdb4(lVar5,param_2 + 0x40);
  if (lVar5 != 0) {
    if (lVar5 + 0x28 != param_2) {
      FUN_10725b5b0();
      func_0x0001073c8e34();
    }
    return;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&lStack_d8,param_2 + 0x40);
  FUN_10730b1d0(auStack_c0,param_2);
  plVar8 = (long *)(param_1 + 0x138);
  func_0x000100102e7c(plVar8,&lStack_d8);
  plVar14 = *(long **)(param_1 + 0x128);
  if (plVar14 != (long *)0x0) {
    uVar11 = (long)plVar14 - 1;
    if (((ulong)plVar14 & uVar11) == 0) {
      unaff_x22 = (long *)(uVar11 & (ulong)plVar8);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar8 - (long)plVar14 < 0;
      unaff_x22 = plVar8;
      if (plVar14 <= plVar8) {
        uVar7 = 0;
        if (plVar14 != (long *)0x0) {
          uVar7 = (ulong)plVar8 / (ulong)plVar14;
        }
        unaff_x22 = (long *)((long)plVar8 - uVar7 * (long)plVar14);
      }
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0x120) + (long)unaff_x22 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_10730ab94;
          plVar6 = (long *)plVar13[1];
          in_NG = (long)plVar6 - (long)plVar8 < 0;
          if (plVar6 != plVar8) break;
          uVar7 = (ulong)(plVar13 + 2);
          func_0x0001000e107c(uVar7,&lStack_d8);
          if ((uVar7 & 1) != 0) goto LAB_10730ae10;
        }
        if (((ulong)plVar14 & uVar11) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar11);
        }
        else if (plVar14 <= plVar6) {
          uVar7 = 0;
          if (plVar14 != (long *)0x0) {
            uVar7 = (ulong)plVar6 / (ulong)plVar14;
          }
          plVar6 = (long *)((long)plVar6 - uVar7 * (long)plVar14);
        }
        in_NG = (long)plVar6 - (long)unaff_x22 < 0;
      } while (plVar6 == unaff_x22);
    }
  }
LAB_10730ab94:
  plVar4 = (long *)0x80;
  __Znwm();
  plVar13 = (long *)(param_1 + 0x130);
  uStack_58 = 1;
  *plVar4 = 0;
  plVar4[1] = (long)plVar8;
  plVar4[3] = lStack_d0;
  plVar4[2] = lStack_d8;
  plVar4[4] = lStack_c8;
  lStack_d8 = 0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  plVar6 = plVar4 + 5;
  plStack_68 = plVar4;
  plStack_60 = plVar13;
  FUN_10730b1d0(plVar6,auStack_c0);
  func_0x00010730cb88(*(undefined8 *)(param_1 + 0x138));
  if ((plVar14 != (long *)0x0) && (func_0x00010730cb7c(), !(bool)in_NG)) goto LAB_10730ad98;
  bVar2 = (long *)0x2 < plVar14;
  bVar3 = plVar14 == (long *)0x3;
  func_0x00010730c960((long)plVar14 << 1);
  plVar12 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar12 = extraout_x9;
  }
  if ((long)plVar12 - 1U == 0) {
    plVar12 = (long *)0x2;
  }
  else if (((ulong)plVar12 & (long)plVar12 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar6 = plVar12;
  }
  plVar14 = *(long **)(param_1 + 0x128);
  if (plVar14 < plVar12) {
LAB_10730ac48:
    if ((ulong)plVar12 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10730ae3c);
      (*pcVar1)();
    }
    lVar5 = (long)plVar12 << 3;
    __Znwm(lVar5);
    func_0x00010730c8d8(param_1 + 0x120,lVar5);
    plVar14 = (long *)0x0;
    *(long **)(param_1 + 0x128) = plVar12;
    lVar5 = *(long *)(param_1 + 0x120);
    while (plVar12 != plVar14) {
      func_0x00010730cb34();
      lVar5 = extraout_x8_00;
      plVar14 = extraout_x9_00;
    }
    plVar6 = (long *)*plVar13;
    plVar14 = plVar12;
    if (plVar6 != (long *)0x0) {
      plVar9 = (long *)plVar6[1];
      uVar7 = (long)plVar12 - 1;
      uVar11 = 0;
      if (plVar12 != (long *)0x0) {
        uVar11 = (ulong)plVar9 / (ulong)plVar12;
      }
      plVar10 = plVar9;
      if (plVar12 <= plVar9) {
        plVar10 = (long *)((long)plVar9 - uVar11 * (long)plVar12);
      }
      if (((ulong)plVar12 & uVar7) == 0) {
        plVar10 = (long *)((ulong)plVar9 & uVar7);
      }
      *(long **)(lVar5 + (long)plVar10 * 8) = plVar13;
      while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
        plVar9 = (long *)plVar6[1];
        if (((ulong)plVar12 & uVar7) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar7);
        }
        else if (plVar12 <= plVar9) {
          uVar11 = 0;
          if (plVar12 != (long *)0x0) {
            uVar11 = (ulong)plVar9 / (ulong)plVar12;
          }
          plVar9 = (long *)((long)plVar9 - uVar11 * (long)plVar12);
        }
        if (plVar9 != plVar10) {
          if (*(long *)(lVar5 + (long)plVar9 * 8) == 0) {
            func_0x00010730cc54();
            lVar5 = extraout_x8_02;
            uVar7 = extraout_x9_02;
            plVar6 = extraout_x12;
            plVar10 = extraout_x11_00;
          }
          else {
            func_0x00010730c91c();
            lVar5 = extraout_x8_01;
            uVar7 = extraout_x9_01;
            plVar6 = extraout_x10;
            plVar10 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar12 < plVar14) {
    func_0x00010730cb70((float)*(ulong *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x140));
    if ((plVar14 < (long *)0x3) || (((ulong)plVar14 & (long)plVar14 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010730c8f0();
    }
    if (plVar12 <= plVar6) {
      plVar12 = plVar6;
    }
    if (plVar12 < plVar14) {
      if (plVar12 != (long *)0x0) goto LAB_10730ac48;
      func_0x00010730c8d8(param_1 + 0x120,0);
      *(undefined8 *)(param_1 + 0x128) = 0;
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = *(long **)(param_1 + 0x128);
    }
  }
  if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
    unaff_x22 = (long *)((long)plVar14 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x22 = plVar8;
    if (plVar14 <= plVar8) {
      uVar11 = 0;
      if (plVar14 != (long *)0x0) {
        uVar11 = (ulong)plVar8 / (ulong)plVar14;
      }
      unaff_x22 = (long *)((long)plVar8 - uVar11 * (long)plVar14);
    }
  }
LAB_10730ad98:
  lVar5 = *(long *)(param_1 + 0x120);
  plVar8 = *(long **)(lVar5 + (long)unaff_x22 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar4 = *plVar13;
    *plVar13 = (long)plVar4;
    *(long **)(lVar5 + (long)unaff_x22 * 8) = plVar13;
    if (*plVar4 != 0) {
      plVar8 = *(long **)(*plVar4 + 8);
      if (((ulong)plVar14 & (long)plVar14 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar14 - 1U);
      }
      else if (plVar14 <= plVar8) {
        uVar11 = 0;
        if (plVar14 != (long *)0x0) {
          uVar11 = (ulong)plVar8 / (ulong)plVar14;
        }
        plVar8 = (long *)((long)plVar8 - uVar11 * (long)plVar14);
      }
      *(long **)(lVar5 + (long)plVar8 * 8) = plVar4;
    }
  }
  else {
    *plVar4 = *plVar8;
    *plVar8 = (long)plVar4;
  }
  plStack_68 = (long *)0x0;
  *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
  func_0x00010730beb4(&plStack_68);
LAB_10730ae10:
  func_0x00010730b204(&lStack_d8);
  return;
}



/* Entry: 10730ae5c; end: 10730ae7f;  */

void FUN_10730ae5c(long param_1)

{
  func_0x00010730ca44();
  if (param_1 != 0) {
    func_0x00010730c910();
  }
  return;
}



/* Entry: 10730ae80; end: 10730aecb;  */

bool FUN_10730ae80(float *param_1,float *param_2)

{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return param_1[3] == param_2[3];
  }
  return false;
}



/* Entry: 10730aecc; end: 10730afb3;  */

void FUN_10730aecc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010730b038(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10730afb4; end: 10730afdf;  */

long FUN_10730afb4(long param_1)

{
  return *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 1;
}



/* Entry: 10730afe0; end: 10730b087;  */

undefined8 * FUN_10730afe0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  func_0x00010730b014(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10730b088; end: 10730b09f;  */

void FUN_10730b088(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10730b0a0; end: 10730b1af;  */

long * FUN_10730b0a0(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10730b1b0; end: 10730b1cf;  */

void FUN_10730b1b0(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001006393ec();
  }
  return;
}



/* Entry: 10730b1d0; end: 10730b2ab;  */

void FUN_10730b1d0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001073c8e34();
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  return;
}



/* Entry: 10730b2ac; end: 10730b2b3;  */

void FUN_10730b2ac(void)

{
  return;
}



/* Entry: 10730b2b4; end: 10730b2db;  */

void FUN_10730b2b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010730cc2c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_11099ed98;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10730b2dc; end: 10730b2ff;  */

void FUN_10730b2dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_11099ed98;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10730b300; end: 10730b407;  */

void FUN_10730b300(undefined4 param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  
  lVar6 = *(long *)(param_2 + 8);
  piVar7 = (int *)*param_3;
  piVar1 = (int *)param_3[1];
  do {
    if (piVar7 == piVar1) {
      return;
    }
    if (((*piVar7 == 3) && (uVar8 = *(ulong *)(lVar6 + 0xd8), uVar8 != 0)) &&
       (*(long *)(lVar6 + 0xe8) != 0)) {
      uVar3 = lVar6 + 0xe8;
      FUN_10726364c(uVar3,piVar7 + 2);
      uVar9 = uVar8 - 1;
      if ((uVar8 & uVar9) == 0) {
        uVar10 = uVar3 & uVar9;
      }
      else {
        uVar10 = uVar3;
        if (uVar8 <= uVar3) {
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = uVar3 / uVar8;
          }
          uVar10 = uVar3 - uVar10 * uVar8;
        }
      }
      plVar11 = *(long **)(*(long *)(lVar6 + 0xd0) + uVar10 * 8);
      if (plVar11 != (long *)0x0) {
        do {
          while( true ) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_10730b3e8;
            uVar5 = plVar11[1];
            if (uVar5 != uVar3) break;
            lVar4 = (long)(plVar11 + 2);
            func_0x000104c32db4(lVar4,piVar7 + 2);
            if ((int)lVar4 != 0) {
              FUN_107307c20();
              *(undefined4 *)(plVar11[9] + 0xd4) = param_1;
              goto LAB_10730b3e8;
            }
          }
          if ((uVar8 & uVar9) == 0) {
            uVar5 = uVar5 & uVar9;
          }
          else if (uVar8 <= uVar5) {
            uVar2 = 0;
            if (uVar8 != 0) {
              uVar2 = uVar5 / uVar8;
            }
            uVar5 = uVar5 - uVar2 * uVar8;
          }
        } while (uVar5 == uVar10);
      }
    }
LAB_10730b3e8:
    piVar7 = piVar7 + 0x16;
  } while( true );
}



/* Entry: 10730b408; end: 10730b42f;  */

void FUN_10730b408(undefined8 param_1)

{
  func_0x00010730cb4c();
  func_0x00010730ca74(param_1,&PTR_DAT_11099ee08);
  func_0x00010730c9c0();
  return;
}



/* Entry: 10730b430; end: 10730b43b;  */

undefined ** FUN_10730b430(void)

{
  return &PTR_DAT_11099ee08;
}



/* Entry: 10730b43c; end: 10730b477;  */

long FUN_10730b43c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010730cc00(uVar1);
  return param_1;
}



/* Entry: 10730b478; end: 10730b47f;  */

void FUN_10730b478(void)

{
  return;
}



/* Entry: 10730b480; end: 10730b4a7;  */

void FUN_10730b480(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010730cc2c();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_11099ee28;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10730b4a8; end: 10730b4cb;  */

void FUN_10730b4a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_11099ee28;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10730b4cc; end: 10730b523;  */

void FUN_10730b4cc(undefined4 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  if (*(long *)(lVar1 + 0xe8) != 0) {
    func_0x000104c003e8(lVar1 + 0x60);
    FUN_107307c20();
    *(undefined4 *)(lVar1 + 0x80) = param_1;
  }
  return;
}



/* Entry: 10730b524; end: 10730b52f;  */

undefined ** FUN_10730b524(void)

{
  return &PTR_DAT_11099ee88;
}



/* Entry: 10730b530; end: 10730b67f;  */

void FUN_10730b530(long param_1)

{
  long unaff_x20;
  
  while (param_1 != 0) {
    func_0x00010730cb40();
    func_0x00010730b560();
    func_0x00010730ca6c();
    param_1 = unaff_x20;
  }
  return;
}



/* Entry: 10730b680; end: 10730b733;  */

long FUN_10730b680(long *param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong uVar3;
  ulong unaff_x20;
  long *plVar4;
  ulong uVar5;
  ulong unaff_x23;
  ulong uVar6;
  
  uVar5 = param_1[1];
  if ((uVar5 != 0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010730cc38();
    func_0x00010730cb04();
    if ((bool)in_ZR) {
      uVar6 = unaff_x20 & unaff_x23;
    }
    else {
      uVar6 = unaff_x20;
      if (uVar5 <= unaff_x20) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = unaff_x20 / uVar5;
        }
        uVar6 = unaff_x20 - uVar6 * uVar5;
      }
    }
    plVar4 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar3 = plVar4[1];
        if (uVar3 != unaff_x20) break;
        func_0x00010730c9f8();
        if ((int)plVar2 != 0) {
          return (long)plVar4;
        }
      }
      if ((uVar5 & unaff_x23) == 0) {
        uVar3 = uVar3 & unaff_x23;
      }
      else if (uVar5 <= uVar3) {
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = uVar3 / uVar5;
        }
        uVar3 = uVar3 - uVar1 * uVar5;
      }
    } while (uVar3 == uVar6);
  }
  return 0;
}



/* Entry: 10730b734; end: 10730b75b;  */

long FUN_10730b734(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10730b75c; end: 10730b7e7;  */

undefined1 * FUN_10730b75c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar3 = auStack_40;
  func_0x00010730c998();
  uVar5 = 1;
  uStack_28 = extraout_x8;
  FUN_10730b7e8(auStack_40);
  puVar2 = puStack_30;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_11099f118;
  puStack_30[1] = 0;
  uVar1 = param_3[1];
  param_3[1] = 0;
  puStack_30[3] = *param_3;
  puStack_30[4] = uVar1;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar2 + 3);
  param_1[1] = (long)puVar2;
  func_0x00010730b874();
  func_0x00010730c93c(uStack_28);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar3 + 8) = uVar5;
  puVar4 = puVar3;
  FUN_10730b810();
  *(undefined1 **)(puVar3 + 0x10) = puVar4;
  return puVar3;
}



/* Entry: 10730b7e8; end: 10730b80f;  */

long FUN_10730b7e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10730b810();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10730b810; end: 10730b83b;  */

void FUN_10730b810(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_11099f118;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10730b83c; end: 10730b83f;  */

void FUN_10730b83c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099f118;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10730b840; end: 10730b853;  */

void FUN_10730b840(void)

{
  func_0x00010730b860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730b854; end: 10730b883;  */

void FUN_10730b854(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x00010730ca44();
  if (param_1 != 0) {
    func_0x00010730c910();
  }
  return;
}



/* Entry: 10730b884; end: 10730b94f;  */

void FUN_10730b884(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010730b584(*(undefined8 *)(param_1 + 0x10));
    func_0x00010730cb24();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (lVar2 != lVar1) {
      func_0x00010730cb14();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10730b950; end: 10730b95b;  */

undefined1  [16] FUN_10730b950(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  func_0x00010730cba8();
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10730b95c; end: 10730b9cf;  */

undefined1  [16] FUN_10730b95c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -8;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10730b9d0; end: 10730ba43;  */

void FUN_10730b9d0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 unaff_x21;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)(param_1[2] - *param_1 >> 1) < param_2) {
    if ((long)param_2 < 0) {
      FUN_10730ba44();
      func_0x00010730cbec();
      func_0x00010730c9b8();
      func_0x00010730cba8();
      func_0x00010730ca84(param_2[1]);
      param_2[1] = unaff_x21;
      lVar1 = *param_1;
      param_1[1] = lVar1;
      *param_1 = param_2[1];
      param_2[1] = lVar1;
      lVar1 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar1;
      lVar1 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar1;
      *param_2 = param_2[1];
      return;
    }
    FUN_10730babc(auStack_48,param_2,param_1[1] - *param_1 >> 1);
    FUN_10730ba50(param_1,auStack_48);
    func_0x00010730cbec();
  }
  return;
}



/* Entry: 10730ba44; end: 10730ba4f;  */

void FUN_10730ba44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x21;
  
  func_0x00010730cba8();
  func_0x00010730ca84(param_2[1]);
  param_2[1] = unaff_x21;
  uVar1 = *param_1;
  param_1[1] = uVar1;
  *param_1 = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10730ba50; end: 10730babb;  */

void FUN_10730ba50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x21;
  
  func_0x00010730ca84(param_2[1],param_1,*param_1);
  param_2[1] = unaff_x21;
  uVar1 = *param_1;
  param_1[1] = uVar1;
  *param_1 = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10730babc; end: 10730bb2f;  */

long * FUN_10730babc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000100b56ae0();
  }
  lVar1 = param_4 + param_3 * 2;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 2;
  return param_1;
}



/* Entry: 10730bb30; end: 10730bb5f;  */

void FUN_10730bb30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -2;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10730bb60; end: 10730bc8f;  */

long * FUN_10730bb60(long *param_1,long *param_2,undefined2 *param_3,undefined8 param_4,long param_5
                    )

{
  long lVar1;
  undefined2 *puVar2;
  long *plVar3;
  undefined2 *extraout_x8;
  undefined2 *extraout_x8_00;
  long lVar4;
  undefined1 auStack_78 [16];
  undefined2 *puStack_68;
  
  if (0 < param_5) {
    lVar4 = param_1[1];
    if (param_1[2] - lVar4 >> 1 < param_5) {
      plVar3 = param_1;
      FUN_10730bcd0(param_1,param_5 + (lVar4 - *param_1 >> 1));
      FUN_10730babc(auStack_78,plVar3,(long)param_2 - *param_1 >> 1,param_1 + 2);
      puVar2 = puStack_68;
      for (lVar4 = param_5 << 1; lVar4 != 0; lVar4 = lVar4 + -2) {
        *puVar2 = *param_3;
        param_3 = param_3 + 1;
        puVar2 = puVar2 + 1;
      }
      puStack_68 = puStack_68 + param_5;
      FUN_10730bd08(param_1,auStack_78,param_2);
      func_0x00010730cbec();
      param_2 = param_1;
    }
    else {
      lVar4 = lVar4 - (long)param_2;
      lVar1 = lVar4 >> 1;
      if (lVar1 < param_5) {
        func_0x000100b56b4c(param_1,(long)param_3 + lVar4,param_4,param_5 - lVar1);
        if (0 < lVar1) {
          FUN_10730ccd4();
          puVar2 = extraout_x8;
          for (; lVar4 != 0; lVar4 = lVar4 + -2) {
            *puVar2 = *param_3;
            puVar2 = puVar2 + 1;
            param_3 = param_3 + 1;
          }
        }
      }
      else {
        FUN_10730ccd4();
        puVar2 = extraout_x8_00;
        for (param_5 = param_5 << 1; param_5 != 0; param_5 = param_5 + -2) {
          *puVar2 = *param_3;
          puVar2 = puVar2 + 1;
          param_3 = param_3 + 1;
        }
      }
    }
  }
  return param_2;
}



/* Entry: 10730bc90; end: 10730bccf;  */

void FUN_10730bc90(long param_1,long param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar1 = *(undefined2 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined2 *)(param_2 + ((long)puVar1 - (long)param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 **)(param_1 + 8) = puVar3;
  if (puVar1 != param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)((long)puVar1 - ((long)puVar1 - (long)param_4));
    return;
  }
  return;
}



/* Entry: 10730bcd0; end: 10730bd07;  */

undefined8 * FUN_10730bcd0(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (-1 < (long)param_2) {
    puVar2 = (undefined8 *)(param_1[2] - *param_1);
    puVar1 = puVar2;
    if (puVar2 <= param_2) {
      puVar1 = param_2;
    }
    if ((undefined8 *)0x7ffffffffffffffd < puVar2) {
      puVar1 = (undefined8 *)0x7fffffffffffffff;
    }
    return puVar1;
  }
  FUN_10730ba44();
  puVar1 = (undefined8 *)param_2[1];
  _memcpy(param_2[2],param_3,param_1[1] - param_3);
  lVar3 = *param_1;
  lVar4 = param_2[1];
  param_2[2] = param_2[2] + (param_1[1] - param_3);
  param_1[1] = param_3;
  lVar4 = lVar4 - (param_3 - lVar3);
  _memcpy(lVar4);
  param_2[1] = lVar4;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return puVar1;
}



/* Entry: 10730bd08; end: 10730bdb3;  */

undefined8 FUN_10730bd08(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  _memcpy(param_2[2],param_3,param_1[1] - param_3);
  lVar2 = *param_1;
  lVar3 = param_2[1];
  param_2[2] = param_2[2] + (param_1[1] - param_3);
  param_1[1] = param_3;
  lVar3 = lVar3 - (param_3 - lVar2);
  _memcpy(lVar3);
  param_2[1] = lVar3;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return uVar1;
}



/* Entry: 10730bdb4; end: 10730be67;  */

long FUN_10730bdb4(long *param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong uVar3;
  ulong unaff_x20;
  long *plVar4;
  ulong uVar5;
  ulong unaff_x23;
  ulong uVar6;
  
  uVar5 = param_1[1];
  if ((uVar5 != 0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010730cc38();
    func_0x00010730cb04();
    if ((bool)in_ZR) {
      uVar6 = unaff_x20 & unaff_x23;
    }
    else {
      uVar6 = unaff_x20;
      if (uVar5 <= unaff_x20) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = unaff_x20 / uVar5;
        }
        uVar6 = unaff_x20 - uVar6 * uVar5;
      }
    }
    plVar4 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar3 = plVar4[1];
        if (uVar3 != unaff_x20) break;
        func_0x00010730c9f8();
        if ((int)plVar2 != 0) {
          return (long)plVar4;
        }
      }
      if ((uVar5 & unaff_x23) == 0) {
        uVar3 = uVar3 & unaff_x23;
      }
      else if (uVar5 <= uVar3) {
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = uVar3 / uVar5;
        }
        uVar3 = uVar3 - uVar1 * uVar5;
      }
    } while (uVar3 == uVar6);
  }
  return 0;
}



/* Entry: 10730be68; end: 10730be7f;  */

void FUN_10730be68(long *param_1,long param_2)

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



/* Entry: 10730be80; end: 10730bee7;  */

void FUN_10730be80(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010730ca54();
  if (unaff_x20 != 0) {
    func_0x00010730cc80();
    if ((bool)in_ZR) {
      func_0x00010730b664(unaff_x20 + 0x10);
    }
    func_0x00010730cae4();
  }
  return;
}



/* Entry: 10730bee8; end: 10730beeb;  */

undefined8 * FUN_10730bee8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099eea8;
  func_0x000107306ba8(param_1 + 4);
  return param_1;
}



/* Entry: 10730beec; end: 10730beff;  */

void FUN_10730beec(void)

{
  FUN_10730bf70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730bf00; end: 10730bf6f;  */

void FUN_10730bf00(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uStack_28;
  
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar1 = (long *)(*(long *)(param_1 + 8) + ((long)*(ulong *)(param_1 + 0x18) >> 1));
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  (*pcVar2)(plVar1,&uStack_28,*(undefined1 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x29));
  func_0x000107306ba8(&uStack_28);
  return;
}



/* Entry: 10730bf70; end: 10730bf9b;  */

undefined8 * FUN_10730bf70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099eea8;
  func_0x000107306ba8(param_1 + 4);
  return param_1;
}



/* Entry: 10730bf9c; end: 10730bfc7;  */

void FUN_10730bf9c(void)

{
  return;
}



/* Entry: 10730bfc8; end: 10730c07b;  */

long FUN_10730bfc8(long *param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong uVar3;
  ulong unaff_x20;
  long *plVar4;
  ulong uVar5;
  ulong unaff_x23;
  ulong uVar6;
  
  uVar5 = param_1[1];
  if ((uVar5 != 0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010730cc38();
    func_0x00010730cb04();
    if ((bool)in_ZR) {
      uVar6 = unaff_x20 & unaff_x23;
    }
    else {
      uVar6 = unaff_x20;
      if (uVar5 <= unaff_x20) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = unaff_x20 / uVar5;
        }
        uVar6 = unaff_x20 - uVar6 * uVar5;
      }
    }
    plVar4 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar4 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        uVar3 = plVar4[1];
        if (uVar3 != unaff_x20) break;
        func_0x00010730c9f8();
        if ((int)plVar2 != 0) {
          return (long)plVar4;
        }
      }
      if ((uVar5 & unaff_x23) == 0) {
        uVar3 = uVar3 & unaff_x23;
      }
      else if (uVar5 <= uVar3) {
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = uVar3 / uVar5;
        }
        uVar3 = uVar3 - uVar1 * uVar5;
      }
    } while (uVar3 == uVar6);
  }
  return 0;
}



/* Entry: 10730c07c; end: 10730c0a3;  */

undefined8 FUN_10730c07c(undefined8 param_1)

{
  func_0x00010730cbb4(&PTR_FUN_11099ef28);
  return param_1;
}



/* Entry: 10730c0a4; end: 10730c0b7;  */

void FUN_10730c0a4(void)

{
  FUN_10730c07c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730c0b8; end: 10730c0eb;  */

void FUN_10730c0b8(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010730ca38();
  func_0x00010730c9e4(&PTR_FUN_11099ef28);
  if (extraout_x8 != 0) {
    do {
      func_0x00010730ca28();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10730c0ec; end: 10730c13f;  */

void FUN_10730c0ec(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_11099ef28;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010730ca28(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10730c140; end: 10730c167;  */

void FUN_10730c140(undefined8 param_1)

{
  func_0x00010730cb4c();
  func_0x00010730ca74(param_1,&PTR_DAT_11099ef88);
  func_0x00010730c9c0();
  return;
}



/* Entry: 10730c168; end: 10730c18b;  */

undefined ** FUN_10730c168(void)

{
  return &PTR_DAT_11099ef88;
}



/* Entry: 10730c18c; end: 10730c1bf;  */

void FUN_10730c18c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010730ca54();
  if (unaff_x20 != 0) {
    func_0x00010730cc80();
    if ((bool)in_ZR) {
      func_0x00010730b560(unaff_x20 + 0x10);
    }
    func_0x00010730cae4();
  }
  return;
}



/* Entry: 10730c1c0; end: 10730c1c3;  */

undefined8 * FUN_10730c1c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099efa8;
  func_0x00010730b284(param_1 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
  func_0x0001073027f8(param_1 + 1);
  return param_1;
}



/* Entry: 10730c1c4; end: 10730c1d7;  */

void FUN_10730c1c4(void)

{
  FUN_10730c1d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730c1d8; end: 10730c21b;  */

undefined8 * FUN_10730c1d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099efa8;
  func_0x00010730b284(param_1 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
  func_0x0001073027f8(param_1 + 1);
  return param_1;
}



/* Entry: 10730c21c; end: 10730c233;  */

void FUN_10730c21c(long *param_1,long param_2)

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



/* Entry: 10730c234; end: 10730c28f;  */

void FUN_10730c234(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010730ca54();
  if (unaff_x20 != 0) {
    func_0x00010730cc80();
    if ((bool)in_ZR) {
      func_0x00010730b5b4(unaff_x20 + 0x10);
    }
    func_0x00010730cae4();
  }
  return;
}



/* Entry: 10730c290; end: 10730c2a3;  */

void FUN_10730c290(void)

{
  func_0x00010730c268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10730c2a4; end: 10730c2d7;  */

void FUN_10730c2a4(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010730ca38();
  func_0x00010730c9e4(&PTR_SUB_11099efd8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010730ca28();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10730c2d8; end: 10730c32b;  */

void FUN_10730c2d8(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_11099efd8;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010730ca28(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10730c32c; end: 10730c353;  */

void FUN_10730c32c(undefined8 param_1)

{
  func_0x00010730cb4c();
  func_0x00010730ca74(param_1,&PTR_DAT_11099f038);
  func_0x00010730c9c0();
  return;
}


