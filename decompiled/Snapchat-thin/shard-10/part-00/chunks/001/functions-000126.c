/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10750da6c; end: 10750db07;  */

long FUN_10750da6c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  plVar1 = param_1;
  func_0x000104c31a9c(param_1,(param_1[1] - *param_1 >> 4) + 1);
  func_0x000104c31af0(auStack_48,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar3 = *param_2;
  puStack_38[1] = param_2[1];
  *puStack_38 = uVar3;
  puStack_38 = puStack_38 + 2;
  func_0x000104c31ac4(param_1,auStack_48);
  lVar2 = param_1[1];
  func_0x000104c31b5c(auStack_48);
  return lVar2;
}



/* Entry: 10750db08; end: 10750db53;  */

long FUN_10750db08(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10750db54; end: 10750db6b;  */

void FUN_10750db54(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10750c9cc(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10750db6c; end: 10750db87;  */

void FUN_10750db6c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_10750c9cc(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10750db88; end: 10750db8b;  */

void FUN_10750db88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b8708;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10750db8c; end: 10750db9f;  */

void FUN_10750db8c(void)

{
  func_0x00010750dbac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10750dba0; end: 10750dc47;  */

undefined8 * FUN_10750dba0(long param_1)

{
  func_0x00010730b10c(param_1 + 0x170);
  func_0x00010730b13c(param_1 + 0x138);
  FUN_1073eb118(param_1 + 0x120);
  FUN_1073eb118(param_1 + 0x108);
  func_0x00010730b05c(param_1 + 0xf0);
  FUN_107456be8(param_1 + 0xd0);
  FUN_1074571e4(param_1 + 0xb8);
  FUN_107440dd8(param_1 + 0x98);
  func_0x00010725b590(param_1 + 0x50);
  FUN_107456e48(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10750dc48; end: 10750dcbb;  */

undefined8 * FUN_10750dc48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10750ee48(param_1,&uStack_30);
  FUN_1074f7454(&uStack_30);
  func_0x0001074fffc4(&uStack_40);
  *param_1 = &PTR_DAT_1109b8758;
  return param_1;
}



/* Entry: 10750dcbc; end: 10750dcc7;  */

long FUN_10750dcbc(long param_1)

{
  return *(long *)(param_1 + 8) + 0x80;
}



/* Entry: 10750dcc8; end: 10750df17;  */

void FUN_10750dcc8(undefined8 **param_1,undefined8 *param_2,long param_3,undefined8 **param_4,
                  undefined8 param_5,undefined4 param_6,ulong param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 **ppuVar1;
  undefined2 uVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  long alStack_2e0 [3];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [40];
  undefined1 auStack_288 [24];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long *plStack_250;
  undefined8 *puStack_248;
  undefined4 auStack_238 [6];
  undefined4 uStack_220;
  undefined **ppuStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f0;
  undefined1 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [56];
  undefined8 uStack_180;
  long lStack_170;
  long lStack_168;
  undefined8 **ppuStack_160;
  undefined8 **ppuStack_158;
  undefined8 **ppuStack_150;
  ulong uStack_148;
  undefined8 **ppuStack_140;
  undefined8 **ppuStack_138;
  undefined8 **ppuStack_130;
  undefined8 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined1 *puStack_100;
  undefined8 **ppuStack_f8;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  short sStack_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 **ppuStack_98;
  undefined1 auStack_90 [24];
  undefined8 *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = param_2[1];
  uVar2 = *(undefined2 *)(lVar16 + 0xf8);
  ppuVar13 = (undefined8 **)(ulong)*(ushort *)(param_3 + 0x18);
  uStack_d8 = *(undefined8 *)(param_3 + 0x48);
  puStack_e0 = *(undefined8 **)(param_3 + 0x40);
  uStack_c8 = *(undefined8 *)(param_3 + 0x58);
  uStack_d0 = *(undefined8 *)(param_3 + 0x50);
  uStack_b8 = *(undefined8 *)(param_3 + 0x68);
  uStack_c0 = *(undefined8 *)(param_3 + 0x60);
  puVar10 = param_2;
  uStack_ec = param_6;
  uStack_e8 = param_8;
  func_0x00010750e2fc();
  *puVar10 = &PTR_FUN_1109b8890;
  puVar10[1] = param_7;
  puVar10[2] = param_3;
  puVar10[3] = param_2;
  puVar10[4] = param_9;
  puStack_100 = auStack_90;
  ppuVar14 = &puStack_e0;
  ppuVar7 = param_4;
  ppuStack_110 = ppuVar13;
  ppuStack_108 = ppuVar14;
  ppuStack_f8 = param_1;
  puStack_78 = puVar10;
  FUN_107513908(param_1,param_2 + 0x12,param_4,param_5,uStack_ec,param_7,lVar16,uStack_e8,uVar2);
  func_0x00010750bd60(auStack_90);
  uStack_d8 = 0;
  uStack_d0 = 0;
  ppuVar1 = (undefined8 **)(param_2 + 0x29);
  ppuVar12 = (undefined8 **)param_2[0x28];
  puStack_e0 = &uStack_d8;
  while( true ) {
    if (ppuVar12 == ppuVar1) break;
    if (*(char *)(ppuVar12[6] + 0xf) == '\x01') {
      sStack_a8 = (short)ppuVar12;
      uStack_a6 = (undefined2)((ulong)ppuVar12 >> 0x10);
      uStack_a4 = (undefined4)((ulong)ppuVar12 >> 0x20);
      FUN_10750e2bc(&sStack_a8,1);
      uVar15 = 0;
      ppuVar14 = (undefined8 **)CONCAT44(uStack_a4,CONCAT22(uStack_a6,sStack_a8));
      param_4 = (undefined8 **)((ulong)param_4 & 0xffffff00);
      sStack_a8 = *(short *)(ppuVar12 + 4) + 1;
      uStack_a4 = SUB84(param_4,0);
      uStack_a0 = 0;
      uStack_9c = 0;
      ppuVar7 = ppuVar14;
      while (ppuVar13 = ppuVar14, ppuVar7 != ppuVar1) {
        uVar15 = uVar15 + 1;
        func_0x00010002c7d4();
      }
      while (uVar11 = uVar15, uVar11 != 0) {
        param_7 = uVar11 >> 1;
        ppuStack_98 = ppuVar13;
        FUN_10750e2bc(&ppuStack_98,param_7);
        param_1 = ppuStack_98;
        ppuVar7 = ppuStack_98 + 4;
        FUN_1074d0418(ppuVar7,&sStack_a8);
        uVar15 = param_7;
        if (((uint)ppuVar7 >> 7 & 1) != 0) {
          ppuVar13 = param_1;
          func_0x00010002c7d4();
          param_7 = uVar11 + ~param_7;
          uVar15 = param_7;
        }
      }
      func_0x000107457208(&puStack_e0,uStack_d8);
      uStack_d8 = 0;
      uStack_d0 = 0;
      puStack_e0 = &uStack_d8;
      FUN_10750e100((long)ppuVar12 + 0x24,ppuVar12 + 4,ppuVar14,ppuVar13,&puStack_e0);
      ppuVar7 = &puStack_e0;
      (**(code **)(*ppuVar12[6] + 0x48))();
      param_3 = 0;
    }
    func_0x00010002c7d4();
  }
  ppuVar12 = &puStack_e0;
  func_0x0001074571e4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010750bd60(auStack_90);
  ppuVar8 = ppuVar12;
  __Unwind_Resume();
  pcStack_118 = FUN_10750df18;
  ppuVar9 = ppuVar8;
  lStack_170 = lVar16;
  lStack_168 = param_3;
  ppuStack_160 = param_4;
  ppuStack_158 = ppuVar1;
  ppuStack_150 = param_1;
  uStack_148 = param_7;
  ppuStack_140 = ppuVar13;
  ppuStack_138 = ppuVar14;
  ppuStack_130 = ppuVar12;
  puStack_128 = &uStack_d8;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x0001075103ac();
  auStack_238[0] = 0x3f;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  ppuStack_218 = &PTR_DAT_110996720;
  uStack_210 = 0;
  uStack_1f8 = 0x3f;
  uStack_1f0 = 0;
  uStack_1ec = 1;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1e8 = 0;
  uStack_180 = extraout_x8;
  func_0x000104c2fe00(auStack_1b8,ppuVar9[1] + 2);
  FUN_107371bc4(auStack_238,"source",auStack_1b8);
  func_0x000104c2f714(auStack_1b8);
  puStack_2f0 = (undefined8 *)CONCAT44(puStack_2f0._4_4_,*(undefined4 *)(ppuVar8 + 0x35));
  puStack_2e8 = (undefined8 *)CONCAT44(puStack_2e8._4_4_,1);
  uStack_270 = *ppuVar8[0x10];
  uStack_268 = CONCAT44(uStack_268._4_4_,3);
  FUN_10743fa44(ppuVar8[0x10],auStack_238,&puStack_2f0,&uStack_270,7);
  *(float *)((long)ppuVar8 + 0x1a4) = (float)(double)(*ppuVar7)[0x3e];
  puStack_2f0 = (undefined8 *)0x0;
  puStack_2e8 = (undefined8 *)0x0;
  FUN_107486e5c(ppuVar8 + 0x30,&puStack_2f0);
  func_0x0001073ad4a0(&puStack_2f0);
  puStack_2f0 = (undefined8 *)0x0;
  puStack_2e8 = (undefined8 *)0x0;
  FUN_107486e5c(ppuVar8 + 0x32,&puStack_2f0);
  func_0x0001073ad4a0(&puStack_2f0);
  FUN_10750e548(&plStack_250);
  plVar4 = plStack_250;
  puVar10 = ppuVar8[0x2a];
  if ((undefined8 *)((plStack_250[2] - *plStack_250) / 0x238) < puVar10) {
    if ((undefined8 *)0x73615a240e6c2b < puVar10) goto LAB_10750e9ac;
    FUN_10750f1cc(&puStack_2f0,puVar10,(plStack_250[1] - *plStack_250) / 0x238);
    FUN_10750f0ec(plVar4,&puStack_2f0);
    FUN_10750f248(&puStack_2f0);
  }
  ppuVar14 = (undefined8 **)ppuVar8[0x28];
  while (plVar4 = plStack_250, uVar6 = ppuVar14 == ppuVar8 + 0x29, !(bool)uVar6) {
    if ((ulong)plStack_250[1] < (ulong)plStack_250[2]) {
      func_0x000107510290();
      lVar16 = extraout_x8_00 + 0x238;
    }
    else {
      uVar15 = (plStack_250[1] - *plStack_250) / 0x238 + 1;
      if (0x73615a240e6c2b < uVar15) {
        FUN_10750f0d8();
        goto LAB_10750e9b0;
      }
      uVar3 = (plStack_250[2] - *plStack_250) / 0x238;
      uVar11 = uVar3 * 2;
      if (uVar11 < uVar15 || uVar11 - uVar15 == 0) {
        uVar11 = uVar15;
      }
      if (0x39b0ad12073614 < uVar3) {
        uVar11 = 0x73615a240e6c2b;
      }
      FUN_10750f1cc(&puStack_2f0,uVar11);
      func_0x000107510290(alStack_2e0[0]);
      alStack_2e0[0] = extraout_x8_01 + 0x238;
      FUN_10750f0ec(plVar4,&puStack_2f0);
      lVar16 = plVar4[1];
      FUN_10750f248(&puStack_2f0);
    }
    plVar4[1] = lVar16;
    FUN_107502034(plStack_250[1] + -0x238,ppuVar7);
    func_0x00010002c7d4();
  }
  FUN_10750a194(&uStack_270,ppuVar8[0x11]);
  FUN_10750a49c(auStack_288,ppuVar8[0x11]);
  puStack_2f0 = ppuVar7[4];
  puStack_2e8 = (undefined8 *)auStack_288;
  func_0x0001074f5878(alStack_2e0,&uStack_270);
  func_0x0001074f5878(auStack_2c8,ppuVar7[3]);
  FUN_1074f5904(auStack_2b0,ppuVar7[5]);
  FUN_107515cc4(ppuVar8 + 0x12,&puStack_2f0);
  func_0x00010750f290(alStack_2e0);
  puVar10 = puStack_248;
  plVar4 = plStack_250;
  plStack_250 = (long *)0x0;
  puStack_248 = (undefined8 *)0x0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  puStack_2e8 = ppuVar8[0x2f];
  puStack_2f0 = ppuVar8[0x2e];
  ppuVar8[0x2f] = puVar10;
  ppuVar8[0x2e] = plVar4;
  func_0x00010750f0b0(&puStack_2f0);
  func_0x00010750f0b0(&uStack_1c8);
  uStack_d0 = uStack_268;
  uStack_d8 = uStack_270;
  uStack_270 = 0;
  uStack_268 = 0;
  uStack_c8 = uStack_260;
  FUN_1073e0338(auStack_288);
  FUN_10745f898(&uStack_270);
  func_0x00010750f088(&plStack_250);
  func_0x000107262330(auStack_238);
  func_0x000107510364(uStack_180);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_10750e9ac:
  FUN_10750f0d8();
LAB_10750e9b0:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10750e9b4);
  (*pcVar5)();
}



/* Entry: 10750df18; end: 10750df3f;  */

void FUN_10750df18(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  undefined8 *unaff_x19;
  long lVar8;
  long lVar9;
  long lStack_1e0;
  undefined1 *puStack_1d8;
  long alStack_1d0 [3];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [40];
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_140;
  undefined8 uStack_138;
  undefined4 auStack_128 [6];
  undefined4 uStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  
  lVar8 = param_1;
  func_0x0001075103ac();
  auStack_128[0] = 0x3f;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  ppuStack_108 = &PTR_DAT_110996720;
  uStack_100 = 0;
  uStack_e8 = 0x3f;
  uStack_e0 = 0;
  uStack_dc = 1;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  uStack_70 = extraout_x8;
  func_0x000104c2fe00(auStack_a8,*(long *)(lVar8 + 8) + 0x10);
  FUN_107371bc4(auStack_128,"source",auStack_a8);
  func_0x000104c2f714(auStack_a8);
  lStack_1e0 = CONCAT44(lStack_1e0._4_4_,*(undefined4 *)(param_1 + 0x1a8));
  puStack_1d8 = (undefined1 *)CONCAT44(puStack_1d8._4_4_,1);
  uStack_160 = **(undefined8 **)(param_1 + 0x80);
  uStack_158 = CONCAT44(uStack_158._4_4_,3);
  FUN_10743fa44(*(undefined8 **)(param_1 + 0x80),auStack_128,&lStack_1e0,&uStack_160,7);
  *(float *)(param_1 + 0x1a4) = (float)*(double *)(*param_2 + 0x1f0);
  lStack_1e0 = 0;
  puStack_1d8 = (undefined1 *)0x0;
  FUN_107486e5c(param_1 + 0x180,&lStack_1e0);
  func_0x0001073ad4a0(&lStack_1e0);
  lStack_1e0 = 0;
  puStack_1d8 = (undefined1 *)0x0;
  FUN_107486e5c(param_1 + 400,&lStack_1e0);
  func_0x0001073ad4a0(&lStack_1e0);
  FUN_10750e548(&plStack_140);
  plVar2 = plStack_140;
  uVar6 = *(ulong *)(param_1 + 0x150);
  if ((ulong)((plStack_140[2] - *plStack_140) / 0x238) < uVar6) {
    if (0x73615a240e6c2b < uVar6) goto LAB_10750e9ac;
    FUN_10750f1cc(&lStack_1e0,uVar6,(plStack_140[1] - *plStack_140) / 0x238);
    FUN_10750f0ec(plVar2,&lStack_1e0);
    FUN_10750f248(&lStack_1e0);
  }
  lVar8 = *(long *)(param_1 + 0x140);
  while (plVar2 = plStack_140, uVar5 = lVar8 == param_1 + 0x148, !(bool)uVar5) {
    if ((ulong)plStack_140[1] < (ulong)plStack_140[2]) {
      func_0x000107510290();
      lVar9 = extraout_x8_00 + 0x238;
    }
    else {
      uVar6 = (plStack_140[1] - *plStack_140) / 0x238 + 1;
      if (0x73615a240e6c2b < uVar6) {
        FUN_10750f0d8();
        goto LAB_10750e9b0;
      }
      uVar1 = (plStack_140[2] - *plStack_140) / 0x238;
      uVar7 = uVar1 * 2;
      if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
        uVar7 = uVar6;
      }
      if (0x39b0ad12073614 < uVar1) {
        uVar7 = 0x73615a240e6c2b;
      }
      FUN_10750f1cc(&lStack_1e0,uVar7);
      func_0x000107510290(alStack_1d0[0]);
      alStack_1d0[0] = extraout_x8_01 + 0x238;
      FUN_10750f0ec(plVar2,&lStack_1e0);
      lVar9 = plVar2[1];
      FUN_10750f248(&lStack_1e0);
    }
    plVar2[1] = lVar9;
    FUN_107502034(plStack_140[1] + -0x238,param_2);
    func_0x00010002c7d4();
  }
  FUN_10750a194(&uStack_160,*(undefined8 *)(param_1 + 0x88));
  FUN_10750a49c(auStack_178,*(undefined8 *)(param_1 + 0x88));
  lStack_1e0 = param_2[4];
  puStack_1d8 = auStack_178;
  func_0x0001074f5878(alStack_1d0,&uStack_160);
  func_0x0001074f5878(auStack_1b8,param_2[3]);
  FUN_1074f5904(auStack_1a0,param_2[5]);
  FUN_107515cc4(param_1 + 0x90,&lStack_1e0);
  func_0x00010750f290(alStack_1d0);
  uVar3 = uStack_138;
  plVar2 = plStack_140;
  plStack_140 = (long *)0x0;
  uStack_138 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  puStack_1d8 = *(undefined1 **)(param_1 + 0x178);
  lStack_1e0 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x178) = uVar3;
  *(long **)(param_1 + 0x170) = plVar2;
  func_0x00010750f0b0(&lStack_1e0);
  func_0x00010750f0b0(&uStack_b8);
  unaff_x19[1] = uStack_158;
  *unaff_x19 = uStack_160;
  uStack_160 = 0;
  uStack_158 = 0;
  unaff_x19[2] = uStack_150;
  FUN_1073e0338(auStack_178);
  FUN_10745f898(&uStack_160);
  func_0x00010750f088(&plStack_140);
  func_0x000107262330(auStack_128);
  func_0x000107510364(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_10750e9ac:
  FUN_10750f0d8();
LAB_10750e9b0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10750e9b4);
  (*pcVar4)();
}



/* Entry: 10750df40; end: 10750df53;  */

void FUN_10750df40(void)

{
  FUN_10750eea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10750df54; end: 10750df5b;  */

void FUN_10750df54(void)

{
  return;
}



/* Entry: 10750df5c; end: 10750df97;  */

void FUN_10750df5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x00010750e2fc();
  *puVar1 = &PTR_FUN_1109b8890;
  uVar2 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar2;
  uVar2 = param_1[3];
  puVar1[4] = param_1[4];
  puVar1[3] = uVar2;
  return;
}



/* Entry: 10750df98; end: 10750dfcf;  */

void FUN_10750df98(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = &PTR_FUN_1109b8890;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10750dfd0; end: 10750e0b7;  */

void FUN_10750dfd0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [120];
  
  uStack_d8 = param_4[1];
  uStack_e0 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  func_0x00010750edb0(auStack_c8,*(undefined8 *)(param_2 + 0x18),&uStack_e0);
  uVar1 = 0x3e0;
  __Znwm();
  func_0x0001078481cc();
  FUN_10750bcd8(auStack_c8);
  func_0x00010750bd38(&uStack_e0);
  func_0x00010750bd38(&uStack_f0);
  *param_1 = uVar1;
  return;
}



/* Entry: 10750e0b8; end: 10750e0f3;  */

long FUN_10750e0b8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b88f0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10750e0f4; end: 10750e0ff;  */

undefined ** FUN_10750e0f4(void)

{
  return &PTR_DAT_1109b88f0;
}



/* Entry: 10750e100; end: 10750e2bb;  */

void FUN_10750e100(byte *param_1,short *param_2,byte *param_3,byte *param_4,long *param_5)

{
  int iVar1;
  short *psVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  short sStack_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined8 uStack_90;
  short sStack_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  short sStack_78;
  ulong uStack_74;
  int iStack_6c;
  short sStack_68;
  ulong uStack_64;
  uint uStack_5c;
  undefined8 uStack_58;
  
  pbVar3 = param_1;
  do {
    if (param_3 == param_4) {
      iVar1 = (uint)*(byte *)(param_2 + 2) - (uint)*param_1;
      func_0x00010750e2fc();
      sStack_98 = (short)pbVar3;
      uStack_96 = (undefined2)((ulong)pbVar3 >> 0x10);
      uStack_94 = (undefined4)((ulong)pbVar3 >> 0x20);
      sStack_88 = 1;
      uStack_86 = 0;
      uStack_84 = 0;
      pbVar3[0x1c] = (byte)iVar1;
      uVar6 = NEON_ushl(*(undefined8 *)(param_1 + 4),CONCAT44(iVar1,iVar1) & 0xff000000ff,4);
      *(ulong *)(pbVar3 + 0x20) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20) - (int)((ulong)uVar6 >> 0x20)
                    ,(int)*(undefined8 *)(param_2 + 4) - (int)uVar6);
      plVar4 = param_5;
      uStack_90 = param_5 + 1;
      FUN_1074570d4(param_5,&uStack_58);
      if (*plVar4 == 0) {
        FUN_107457084(param_5,uStack_58,plVar4,pbVar3);
        sStack_98 = 0;
        uStack_96 = 0;
        uStack_94 = 0;
      }
      FUN_1074571a8(&sStack_98);
      return;
    }
    if (*(char *)(*(long *)(param_3 + 0x30) + 0x78) == '\x01') {
      psVar2 = param_2;
      FUN_1074b07f0(param_2,param_3 + 0x20);
      if (((ulong)psVar2 & 1) != 0) {
        return;
      }
      if (*(short *)(param_3 + 0x20) == *param_2) {
        pbVar3 = param_3 + 0x24;
        FUN_1074980c0(pbVar3,param_2 + 2);
        if ((int)pbVar3 != 0) {
          sStack_98 = *param_2;
          uStack_74 = (ulong)(*(byte *)(param_2 + 2) + 1) & 0xff;
          uStack_94 = (undefined4)uStack_74;
          uStack_90._0_4_ = (undefined4)(((ulong)*(uint *)(param_2 + 4) << 0x21) >> 0x20);
          uStack_7c = *(int *)(param_2 + 6) << 1 | 1;
          uStack_90._4_4_ = *(int *)(param_2 + 6) << 1;
          uStack_74 = uStack_74 | (ulong)(*(uint *)(param_2 + 4) << 1 | 1) << 0x20;
          sStack_88 = sStack_98;
          uStack_84 = uStack_94;
          uStack_80 = (undefined4)uStack_90;
          sStack_78 = sStack_98;
          iStack_6c = uStack_90._4_4_;
          sStack_68 = sStack_98;
          uStack_64 = uStack_74;
          uStack_5c = uStack_7c;
          for (lVar5 = 0; lVar5 != 0x40; lVar5 = lVar5 + 0x10) {
            FUN_10750e100(param_1,(long)&sStack_98 + lVar5,param_3,param_4,param_5);
          }
          return;
        }
      }
    }
    func_0x00010002c7d4();
    pbVar3 = param_3;
  } while( true );
}



/* Entry: 10750e2bc; end: 10750e2f3;  */

void FUN_10750e2bc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  while (0 < param_2) {
    uVar1 = *param_1;
    func_0x00010002c7d4();
    *param_1 = uVar1;
    param_2 = param_2 + -1;
  }
  return;
}



/* Entry: 10750e2f4; end: 10750e303;  */

void FUN_10750e2f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10750e304; end: 10750e38b;  */

void FUN_10750e304(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(long **)(param_1 + 8))[1];
  for (lVar2 = **(long **)(param_1 + 8); lVar2 != lVar1; lVar2 = lVar2 + 0x238) {
    FUN_107501fec(lVar2,param_2);
  }
  return;
}



/* Entry: 10750e38c; end: 10750e4ff;  */

long * FUN_10750e38c(long *param_1,undefined8 *param_2,long param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1074ffe30(param_1,&uStack_50,param_3,param_5);
  FUN_1074f7454(&uStack_50);
  *param_1 = (long)&PTR_DAT_1109b8910;
  FUN_10750e500(param_1 + 0x11);
  lVar4 = param_1[1];
  uStack_58 = *(undefined8 *)(param_3 + 0x38);
  uStack_60 = *(undefined8 *)(param_3 + 0x30);
  if (*(long *)(param_3 + 0x38) != 0) {
    plVar1 = (long *)(*(long *)(param_3 + 0x38) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_107513794(param_1 + 0x12,lVar4 + 0x10,param_5,&uStack_60);
  FUN_1074f9d98(&uStack_60);
  FUN_10750e548(&uStack_70);
  param_1[0x2f] = lStack_68;
  param_1[0x2e] = CONCAT71(uStack_6f,uStack_70);
  func_0x000107510338();
  *(undefined8 *)((long)param_1 + 0x1a4) = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x2b] = (long)param_1;
  uStack_70 = 0;
  param_4 = param_4 + 0x3b0;
  func_0x00010724e2c8(param_4,&uStack_70);
  if ((int)param_4 != 0) {
    (**(code **)(*param_1 + 0xf8))(param_1,1);
  }
  return param_1;
}



/* Entry: 10750e500; end: 10750e547;  */

void FUN_10750e500(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd8;
  __Znwm();
  _bzero();
  FUN_1074f9368(uVar1);
  *param_1 = uVar1;
  return;
}



/* Entry: 10750e548; end: 10750e5d7;  */

void FUN_10750e548(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010750ffd8(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  func_0x000107510338();
  return;
}



/* Entry: 10750e5d8; end: 10750e5df;  */

bool FUN_10750e5d8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  while (((lVar1 != param_1 + 0xe8 && (*(char *)(*(long *)(lVar1 + 0x30) + 0x8a) == '\x01')) &&
         ((*(byte *)(*(long *)(lVar1 + 0x30) + 0x89) & 1) == 0))) {
    func_0x00010002c7d4();
  }
  return lVar1 == param_1 + 0xe8;
}



/* Entry: 10750e5e0; end: 10750e663;  */

void FUN_10750e5e0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int extraout_w10;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_2 + 8);
  lVar3 = *(long *)(param_2 + 0x178);
  uVar5 = *(undefined8 *)(param_2 + 0x178);
  uVar4 = *(undefined8 *)(param_2 + 0x170);
  puVar1 = (undefined8 *)0x50;
  __Znwm();
  if (lVar3 != 0) {
    do {
      func_0x0001075102f8();
    } while (extraout_w10 != 0);
  }
  *puVar1 = &PTR_FUN_1109b8b40;
  puVar1[2] = uVar5;
  puVar1[1] = uVar4;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000104c2fe00(puVar1 + 3,lVar2 + 0x10);
  func_0x00010750f0b0(&uStack_40);
  *param_1 = puVar1;
  return;
}



/* Entry: 10750e664; end: 10750ea43;  */

void FUN_10750e664(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar7;
  undefined8 *unaff_x19;
  long lVar8;
  long lVar9;
  long lStack_1e0;
  undefined1 *puStack_1d8;
  long alStack_1d0 [3];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [40];
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_140;
  undefined8 uStack_138;
  undefined4 auStack_128 [6];
  undefined4 uStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  
  lVar8 = param_1;
  func_0x0001075103ac();
  auStack_128[0] = 0x3f;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  ppuStack_108 = &PTR_DAT_110996720;
  uStack_100 = 0;
  uStack_e8 = 0x3f;
  uStack_e0 = 0;
  uStack_dc = 1;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  uStack_70 = extraout_x8;
  func_0x000104c2fe00(auStack_a8,*(long *)(lVar8 + 8) + 0x10);
  FUN_107371bc4(auStack_128,"source",auStack_a8);
  func_0x000104c2f714(auStack_a8);
  lStack_1e0 = CONCAT44(lStack_1e0._4_4_,*(undefined4 *)(param_1 + 0x1a8));
  puStack_1d8 = (undefined1 *)CONCAT44(puStack_1d8._4_4_,1);
  uStack_160 = **(undefined8 **)(param_1 + 0x80);
  uStack_158 = CONCAT44(uStack_158._4_4_,3);
  FUN_10743fa44(*(undefined8 **)(param_1 + 0x80),auStack_128,&lStack_1e0,&uStack_160,7);
  *(float *)(param_1 + 0x1a4) = (float)*(double *)(*param_2 + 0x1f0);
  lStack_1e0 = 0;
  puStack_1d8 = (undefined1 *)0x0;
  FUN_107486e5c(param_1 + 0x180,&lStack_1e0);
  func_0x0001073ad4a0(&lStack_1e0);
  lStack_1e0 = 0;
  puStack_1d8 = (undefined1 *)0x0;
  FUN_107486e5c(param_1 + 400,&lStack_1e0);
  func_0x0001073ad4a0(&lStack_1e0);
  FUN_10750e548(&plStack_140);
  plVar2 = plStack_140;
  uVar6 = *(ulong *)(param_1 + 0x150);
  if ((ulong)((plStack_140[2] - *plStack_140) / 0x238) < uVar6) {
    if (0x73615a240e6c2b < uVar6) goto LAB_10750e9ac;
    FUN_10750f1cc(&lStack_1e0,uVar6,(plStack_140[1] - *plStack_140) / 0x238);
    FUN_10750f0ec(plVar2,&lStack_1e0);
    FUN_10750f248(&lStack_1e0);
  }
  lVar8 = *(long *)(param_1 + 0x140);
  while (plVar2 = plStack_140, uVar5 = lVar8 == param_1 + 0x148, !(bool)uVar5) {
    if ((ulong)plStack_140[1] < (ulong)plStack_140[2]) {
      func_0x000107510290();
      lVar9 = extraout_x8_00 + 0x238;
    }
    else {
      uVar6 = (plStack_140[1] - *plStack_140) / 0x238 + 1;
      if (0x73615a240e6c2b < uVar6) {
        FUN_10750f0d8();
        goto LAB_10750e9b0;
      }
      uVar1 = (plStack_140[2] - *plStack_140) / 0x238;
      uVar7 = uVar1 * 2;
      if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
        uVar7 = uVar6;
      }
      if (0x39b0ad12073614 < uVar1) {
        uVar7 = 0x73615a240e6c2b;
      }
      FUN_10750f1cc(&lStack_1e0,uVar7);
      func_0x000107510290(alStack_1d0[0]);
      alStack_1d0[0] = extraout_x8_01 + 0x238;
      FUN_10750f0ec(plVar2,&lStack_1e0);
      lVar9 = plVar2[1];
      FUN_10750f248(&lStack_1e0);
    }
    plVar2[1] = lVar9;
    FUN_107502034(plStack_140[1] + -0x238,param_2);
    func_0x00010002c7d4();
  }
  FUN_10750a194(&uStack_160,*(undefined8 *)(param_1 + 0x88));
  FUN_10750a49c(auStack_178,*(undefined8 *)(param_1 + 0x88));
  lStack_1e0 = param_2[4];
  puStack_1d8 = auStack_178;
  func_0x0001074f5878(alStack_1d0,&uStack_160);
  func_0x0001074f5878(auStack_1b8,param_2[3]);
  FUN_1074f5904(auStack_1a0,param_2[5]);
  FUN_107515cc4(param_1 + 0x90,&lStack_1e0);
  func_0x00010750f290(alStack_1d0);
  uVar3 = uStack_138;
  plVar2 = plStack_140;
  plStack_140 = (long *)0x0;
  uStack_138 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  puStack_1d8 = *(undefined1 **)(param_1 + 0x178);
  lStack_1e0 = *(long *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x178) = uVar3;
  *(long **)(param_1 + 0x170) = plVar2;
  func_0x00010750f0b0(&lStack_1e0);
  func_0x00010750f0b0(&uStack_b8);
  unaff_x19[1] = uStack_158;
  *unaff_x19 = uStack_160;
  uStack_160 = 0;
  uStack_158 = 0;
  unaff_x19[2] = uStack_150;
  FUN_1073e0338(auStack_178);
  FUN_10745f898(&uStack_160);
  func_0x00010750f088(&plStack_140);
  func_0x000107262330(auStack_128);
  func_0x000107510364(uStack_70);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
LAB_10750e9ac:
  FUN_10750f0d8();
LAB_10750e9b0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10750e9b4);
  (*pcVar4)();
}



/* Entry: 10750ea44; end: 10750ea53;  */

void FUN_10750ea44(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x164) = 0;
  plVar2 = *(long **)(param_1 + 0x140);
  while (plVar2 != (long *)(param_1 + 0x148)) {
    plVar2 = (long *)plVar2[6];
    func_0x00010751810c();
    if ((int)plVar1 != 0) {
      *(undefined1 *)(param_1 + 0x164) = 1;
      (**(code **)(*plVar2 + 0x90))();
      plVar1 = plVar2;
    }
    func_0x00010751812c();
    plVar2 = plVar1;
  }
  return;
}



/* Entry: 10750ea54; end: 10750eab7;  */

void FUN_10750ea54(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 + 0x90;
  FUN_107515c44();
  if (iVar1 == 1) {
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
  }
  return;
}



/* Entry: 10750eab8; end: 10750eb77;  */

void FUN_10750eab8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  undefined8 auStack_50 [2];
  
  lVar2 = *(long *)(param_2 + 0x180);
  if (lVar2 == 0) {
    FUN_107510144(auStack_50);
    lVar3 = (*(long **)(param_2 + 0x170))[1];
    for (lVar2 = **(long **)(param_2 + 0x170); lVar2 != lVar3; lVar2 = lVar2 + 0x238) {
      plVar1 = *(long **)(lVar2 + 0x218);
      (**(code **)(*plVar1 + 0x78))();
      if (((ulong)plVar1 & 1) == 0) {
        FUN_107498108(auStack_50[0],lVar2);
      }
    }
    FUN_10750eb78(param_2 + 0x180,auStack_50);
    FUN_1075101b8(auStack_50);
    lVar2 = *(long *)(param_2 + 0x180);
  }
  lVar3 = *(long *)(param_2 + 0x188);
  *param_1 = lVar2;
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x0001075102f8();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10750eb78; end: 10750eb9b;  */

void FUN_10750eb78(void)

{
  func_0x0001075102d8();
  func_0x0001073ad4a0();
  return;
}



/* Entry: 10750eb9c; end: 10750eca7;  */

void FUN_10750eb9c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int extraout_w10;
  undefined4 uVar3;
  long *aplStack_68 [2];
  undefined4 uStack_54;
  
  lVar1 = *(long *)(param_2 + 400);
  if (lVar1 == 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x1a4);
    FUN_107510144(aplStack_68);
    FUN_107498044(aplStack_68[0],
                  ((*(long **)(param_2 + 0x170))[1] - **(long **)(param_2 + 0x170)) / 0x238);
    lVar2 = (*(long **)(param_2 + 0x170))[1];
    for (lVar1 = **(long **)(param_2 + 0x170); lVar1 != lVar2; lVar1 = lVar1 + 0x238) {
      FUN_107498108(aplStack_68[0],lVar1);
    }
    lVar1 = *aplStack_68[0];
    lVar2 = aplStack_68[0][1];
    uStack_54 = uVar3;
    if (lVar1 != lVar2) {
      FUN_10750f2c0(lVar1,lVar2,&uStack_54,LZCOUNT(lVar2 - lVar1 >> 3) << 1 ^ 0x7e,1);
    }
    FUN_10750eb78(param_2 + 400,aplStack_68);
    FUN_1075101b8(aplStack_68);
    lVar1 = *(long *)(param_2 + 400);
  }
  lVar2 = *(long *)(param_2 + 0x198);
  *param_1 = lVar1;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x0001075102f8();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10750eca8; end: 10750ecd3;  */

undefined8 FUN_10750eca8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x140;
  func_0x0001075170bc();
  if (param_1 + 0x148 == lVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
  }
  return uVar2;
}



/* Entry: 10750ecd4; end: 10750ed3b;  */

void FUN_10750ecd4(long param_1,undefined1 *param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10750a49c(&uStack_50,*(undefined8 *)(param_1 + 0x88));
  if ((undefined8 *)param_2 != &uStack_50) {
    uStack_28 = uStack_48;
    uStack_30 = uStack_50;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10750fc94(param_2,&uStack_30);
    FUN_1073e03d4(&uStack_30);
  }
  *(undefined8 *)(param_2 + 0x10) = uStack_40;
  FUN_1073e0338(&uStack_50);
  return;
}



/* Entry: 10750ed3c; end: 10750ed43;  */

void FUN_10750ed3c(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 *unaff_x25;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [96];
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 *apuStack_170 [7];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [104];
  long alStack_c8 [3];
  undefined8 *puStack_b0;
  long alStack_90 [7];
  undefined8 uStack_58;
  
  lVar8 = *(long *)(param_2 + 0x88);
  lVar6 = lVar8;
  lVar2 = param_5;
  func_0x00010750b448();
  uStack_58 = extraout_x8;
  func_0x00010750b584(lVar6 + 0x30);
  func_0x000107279a5c();
  func_0x000104c2f64c(alStack_c8);
  plVar9 = alStack_c8;
  func_0x0001072d78b4(alStack_90,param_3);
  plVar3 = alStack_c8;
  func_0x000104c2f714();
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(char *)(param_4 + 0x38) == '\x01';
  apuStack_170[0] = param_1;
  if ((bool)uVar1) {
    uVar1 = *(char *)(param_5 + 0x38) == '\x01';
    if ((bool)uVar1) {
      func_0x00010750b5ec();
      func_0x00010786a204();
      if (((ulong)plVar9 & 1) != 0) {
        lVar6 = param_4;
        func_0x00010725ffc4(param_4);
        unaff_x25 = auStack_138;
        func_0x0001072786d8(auStack_130,plVar3 + 1);
        lVar2 = param_5;
        func_0x00010725ffc4(param_5);
        FUN_10750a408(apuStack_170,lVar6,auStack_138,lVar2);
        func_0x00010726af18(auStack_130);
        plVar9 = alStack_90;
        lVar2 = param_5;
        func_0x00010786a52c(lVar8 + 0x18,plVar9,param_4,param_5);
        func_0x00010750b5ec();
        func_0x000107869fd8();
      }
      goto LAB_10750a37c;
    }
    func_0x00010750b554();
    *plVar3 = (long)&PTR_DAT_1109b7df0;
    plVar3[1] = param_4;
    plVar3[2] = (long)apuStack_170;
    plVar3[3] = lVar8;
    plVar3[4] = (long)alStack_90;
    puStack_b0 = plVar3;
    func_0x00010750b574(&PTR_DAT_1109b7ef0);
    func_0x00010750b520();
  }
  else {
    plVar3 = (long *)0x20;
    __Znwm();
    *plVar3 = (long)&PTR_DAT_1109b7f70;
    plVar3[1] = (long)apuStack_170;
    plVar3[2] = lVar8;
    plVar3[3] = (long)alStack_90;
    puStack_b0 = plVar3;
    func_0x00010750b574(&PTR_FUN_1109b80f0);
    func_0x00010750b520();
  }
  func_0x00010750b55c();
  FUN_10750ad00(alStack_c8);
LAB_10750a37c:
  plVar3 = alStack_90;
  func_0x000104c2f714();
  func_0x00010750b53c();
  func_0x00010750b428(uStack_58);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x25 + 8);
  FUN_1074f8690(param_1);
  plVar4 = alStack_90;
  func_0x000104c2f714();
  func_0x00010750b53c();
  func_0x00010750b5ac();
  pcStack_178 = FUN_10750a408;
  plVar5 = plVar4;
  lStack_1a0 = param_5;
  lStack_198 = param_4;
  plStack_190 = plVar3;
  puStack_188 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  func_0x00010750b448();
  uStack_1a8 = extraout_x8_00;
  FUN_10750a570(*plVar5);
  func_0x00010786981c();
  lVar6 = *plVar4;
  FUN_10750a570(lVar6,plVar9);
  uStack_1b0 = 0;
  func_0x000107869848(lVar6 + 0x18,lVar2,auStack_218);
  func_0x00010726af18();
  func_0x00010750b428(uStack_1a8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = auStack_210;
  func_0x00010726af18(puVar7);
  func_0x00010750b494();
  func_0x00010750b468();
  FUN_10750a938(extraout_x8_01,puVar7);
  func_0x00010750b4fc();
  return;
}



/* Entry: 10750ed44; end: 10750ed97;  */

void FUN_10750ed44(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  FUN_10750a49c(auStack_38,*(undefined8 *)(param_1 + 0x88));
  FUN_107515d94(param_1 + 0x90,param_2,auStack_38);
  FUN_1073e0338(auStack_38);
  return;
}



/* Entry: 10750ed98; end: 10750ee47;  */

undefined1  [16] FUN_10750ed98(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 in_ZR;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined8 extraout_x8;
  undefined1 auVar8 [16];
  undefined1 uStack_13f;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 auStack_118 [2];
  undefined4 uStack_110;
  undefined1 auStack_108 [24];
  undefined4 auStack_f0 [6];
  undefined4 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  lVar4 = param_1 + 0x90;
  func_0x000107517f5c();
  puVar2 = *(undefined8 **)(lVar4 + 0x38);
  uVar1 = **(undefined4 **)(lVar4 + 0x40);
  auStack_f0[0] = 0xb9;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  ppuStack_d0 = &PTR_DAT_110996720;
  uStack_c8 = 0;
  uStack_b0 = 0xb9;
  uStack_a8 = 0;
  uStack_a4 = 1;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  uStack_48 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_108);
  puVar5 = auStack_f0;
  func_0x00010726e300(puVar5,&UNK_10f415ff2,auStack_108);
  func_0x000104c2fe00(auStack_80,param_1 + 0x90);
  FUN_107371bc4(puVar5,&UNK_10f415feb,auStack_80);
  uStack_110 = 1;
  uStack_128 = *puVar2;
  uStack_120 = 3;
  auStack_118[0] = uVar1;
  func_0x00010751805c(puVar2,puVar5,auStack_118,&uStack_128);
  func_0x000104c2f714(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  puVar6 = auStack_f0;
  func_0x000107262330(puVar6);
  func_0x000107517f18(uStack_48);
  if ((bool)in_ZR) {
    auVar8._8_8_ = puVar5;
    auVar8._0_8_ = puVar6;
    return auVar8;
  }
  ___stack_chk_fail();
  uVar7 = SUB82(puVar5,0);
  func_0x000104c2f714(auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  puVar5 = auStack_f0;
  func_0x000107262330();
  func_0x000107518018();
  auVar3[1] = uStack_13f;
  auVar3[0] = *(undefined1 *)puVar5;
  auVar3._2_2_ = uVar7;
  auVar3._4_8_ = *(undefined8 *)(puVar5 + 1);
  auVar3._12_4_ = puVar5[3];
  return auVar3;
}



/* Entry: 10750ee48; end: 10750eea7;  */

undefined8 * FUN_10750ee48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_10750e38c(param_1,&uStack_30);
  FUN_1074f7454(&uStack_30);
  *param_1 = &PTR_DAT_1109b8a20;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  return param_1;
}



/* Entry: 10750eea8; end: 10750eedb;  */

undefined8 * FUN_10750eea8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109b8a20;
  FUN_10750fcb8(param_1 + 0x36);
  *param_1 = &PTR_DAT_1109b8910;
  func_0x0001073ad4a0(param_1 + 0x32);
  func_0x0001073ad4a0(param_1 + 0x30);
  func_0x00010750f0b0(param_1 + 0x2e);
  FUN_107513834(param_1 + 0x12);
  func_0x00010750ff80(param_1 + 0x11);
  *param_1 = &PTR_DAT_1109b7210;
  FUN_1074f5794(param_1 + 4);
  FUN_1074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 10750eedc; end: 10750eef7;  */

undefined1 FUN_10750eedc(long param_1)

{
  if (*(char *)(param_1 + 0x220) == '\x01') {
    return *(undefined1 *)(param_1 + 0x1c9);
  }
  return 0xf;
}



/* Entry: 10750eef8; end: 10750f05f;  */

void FUN_10750eef8(undefined1 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  FUN_10750b84c(param_2 + 1);
  *(char *)(param_2 + 0xf) = (char)param_5;
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x108))();
  bVar1 = *(byte *)(plVar3 + 0xe);
  if (((bVar1 & 1) != 0) || (*(int *)(param_7 + 0x20) != 0)) {
    bVar2 = *(byte *)(param_2 + 0x44);
    if (bVar2 == bVar1 && bVar2 != 0) {
      plVar4 = param_2 + 0x36;
      FUN_10750fd00(plVar4,plVar3);
      if ((int)plVar4 == 0) goto LAB_10750f004;
      bVar2 = *(byte *)(param_2 + 0x44);
      bVar1 = *(byte *)(plVar3 + 0xe);
    }
    else if (bVar2 == bVar1) goto LAB_10750f004;
    if (bVar2 == bVar1) {
      if (bVar2 != 0) {
        func_0x000107299810(param_2 + 0x36,plVar3);
        *(short *)(param_2 + 0x39) = (short)plVar3[3];
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (param_2 + 0x3a,plVar3 + 4);
        lVar6 = plVar3[10];
        lVar5 = plVar3[9];
        lVar8 = plVar3[0xc];
        lVar7 = plVar3[0xb];
        lVar10 = plVar3[8];
        lVar9 = plVar3[7];
        *(char *)(param_2 + 0x43) = (char)plVar3[0xd];
        param_2[0x40] = lVar6;
        param_2[0x3f] = lVar5;
        param_2[0x42] = lVar8;
        param_2[0x41] = lVar7;
        param_2[0x3e] = lVar10;
        param_2[0x3d] = lVar9;
      }
    }
    else if (bVar2 == 0) {
      FUN_10750febc(param_2 + 0x36,plVar3);
    }
    else {
      FUN_10750fcd8();
      *(undefined1 *)(param_2 + 0x44) = 0;
    }
    func_0x000107515b1c(param_2 + 0x12);
  }
LAB_10750f004:
  if ((*(byte *)(param_2 + 0x44) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010750f04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x100))
              (param_1,param_2,param_2 + 0x36,param_4,param_5,param_6,param_7,param_8,
               param_2[1] + 0x10);
    return;
  }
  *param_1 = 0;
  param_1[0x58] = 0;
  return;
}



/* Entry: 10750f060; end: 10750f063;  */

undefined8 * FUN_10750f060(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b8b40;
  func_0x000104c2f714(param_1 + 3);
  func_0x00010750f0b0(param_1 + 1);
  return param_1;
}



/* Entry: 10750f064; end: 10750f077;  */

void FUN_10750f064(void)

{
  FUN_10750ff44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10750f078; end: 10750f087;  */

undefined8 FUN_10750f078(void)

{
  return 0;
}



/* Entry: 10750f088; end: 10750f0d7;  */

long FUN_10750f088(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10750f0d8; end: 10750f0eb;  */

void FUN_10750f0d8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar4 = *plVar2;
  lVar1 = plVar2[1];
  lVar6 = param_2[1] + ((lVar1 - lVar4) / -0x238) * 0x238;
  lVar5 = lVar6;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x238) {
    _memcpy(lVar5,lVar3,0x210);
    uVar7 = *(undefined8 *)(lVar3 + 0x210);
    *(undefined8 *)(lVar3 + 0x210) = 0;
    *(undefined8 *)(lVar5 + 0x218) = *(undefined8 *)(lVar3 + 0x218);
    *(undefined8 *)(lVar5 + 0x210) = uVar7;
    uVar7 = *(undefined8 *)(lVar3 + 0x220);
    *(undefined8 *)(lVar5 + 0x228) = *(undefined8 *)(lVar3 + 0x228);
    *(undefined8 *)(lVar5 + 0x220) = uVar7;
    *(undefined8 *)(lVar3 + 0x228) = 0;
    *(undefined8 *)(lVar3 + 0x220) = 0;
    *(undefined1 *)(lVar5 + 0x230) = *(undefined1 *)(lVar3 + 0x230);
    lVar5 = lVar5 + 0x238;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x238) {
    FUN_107501d8c(lVar4);
  }
  param_2[1] = lVar6;
  lVar3 = *plVar2;
  *plVar2 = lVar6;
  plVar2[1] = lVar3;
  param_2[1] = lVar3;
  lVar3 = plVar2[1];
  plVar2[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = plVar2[2];
  plVar2[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10750f0ec; end: 10750f1cb;  */

void FUN_10750f0ec(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar5 = param_2[1] + ((lVar1 - lVar3) / -0x238) * 0x238;
  lVar4 = lVar5;
  for (lVar2 = lVar3; lVar2 != lVar1; lVar2 = lVar2 + 0x238) {
    _memcpy(lVar4,lVar2,0x210);
    uVar6 = *(undefined8 *)(lVar2 + 0x210);
    *(undefined8 *)(lVar2 + 0x210) = 0;
    *(undefined8 *)(lVar4 + 0x218) = *(undefined8 *)(lVar2 + 0x218);
    *(undefined8 *)(lVar4 + 0x210) = uVar6;
    uVar6 = *(undefined8 *)(lVar2 + 0x220);
    *(undefined8 *)(lVar4 + 0x228) = *(undefined8 *)(lVar2 + 0x228);
    *(undefined8 *)(lVar4 + 0x220) = uVar6;
    *(undefined8 *)(lVar2 + 0x228) = 0;
    *(undefined8 *)(lVar2 + 0x220) = 0;
    *(undefined1 *)(lVar4 + 0x230) = *(undefined1 *)(lVar2 + 0x230);
    lVar4 = lVar4 + 0x238;
  }
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x238) {
    FUN_107501d8c(lVar3);
  }
  param_2[1] = lVar5;
  lVar2 = *param_1;
  *param_1 = lVar5;
  param_1[1] = lVar2;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10750f1cc; end: 10750f247;  */

long * FUN_10750f1cc(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x73615a240e6c2b < param_2) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x238;
        FUN_107501d8c();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = param_2 * 0x238;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x238;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x238;
  return param_1;
}



/* Entry: 10750f248; end: 10750f2bf;  */

long * FUN_10750f248(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x238;
    FUN_107501d8c();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10750f2c0; end: 10750f8eb;  */

/* WARNING: Possible PIC construction at 0x00010750faa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010750fa54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010750faac) */
/* WARNING: Removing unreachable block (ram,0x00010750fabc) */
/* WARNING: Removing unreachable block (ram,0x00010750fadc) */
/* WARNING: Removing unreachable block (ram,0x00010750fae4) */
/* WARNING: Removing unreachable block (ram,0x00010750faec) */
/* WARNING: Removing unreachable block (ram,0x00010750faf0) */
/* WARNING: Removing unreachable block (ram,0x00010750fa58) */
/* WARNING: Removing unreachable block (ram,0x00010750fa68) */
/* WARNING: Removing unreachable block (ram,0x00010750fa70) */
/* WARNING: Removing unreachable block (ram,0x00010750fa78) */
/* WARNING: Removing unreachable block (ram,0x00010750fa7c) */

void FUN_10750f2c0(long *param_1,long *param_2,long *param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  long **pplVar2;
  long **pplVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *unaff_x24;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long *plStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [16];
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  pplVar3 = &plStack_80;
  pplVar2 = &plStack_80;
  plVar12 = param_1;
LAB_10750f2f4:
  plStack_68 = param_2 + -1;
  plStack_70 = param_2 + -2;
  plStack_78 = param_2 + -3;
LAB_10750f30c:
  iVar4 = (int)param_1;
  uVar18 = (long)param_2 - (long)plVar12 >> 3;
  plVar13 = plVar12;
  switch(uVar18) {
  case 0:
  case 1:
    goto LAB_10750f8d8;
  case 2:
    func_0x000107510214();
    if (iVar4 != 0) {
      lVar9 = *plVar12;
      *plVar12 = param_2[-1];
      param_2[-1] = lVar9;
    }
    goto LAB_10750f8d8;
  case 3:
    plVar16 = plVar12 + 1;
    plVar6 = plStack_68;
    plVar5 = param_3;
    func_0x000107510308();
    goto FUN_10750f984;
  case 4:
    plVar16 = plVar12 + 1;
    plVar6 = plVar12 + 2;
    plVar7 = param_3;
    func_0x000107510308();
    break;
  case 5:
    plVar16 = plVar12 + 1;
    plVar6 = plVar12 + 2;
    plVar5 = plStack_68;
    plVar8 = param_3;
    func_0x000107510308();
    pplVar3 = &plStack_c0;
    unaff_x29 = auStack_90;
    plVar7 = plVar8;
    plStack_c0 = unaff_x24;
    lStack_b8 = param_4;
    uStack_b0 = param_5;
    plStack_a8 = plVar12;
    plStack_a0 = unaff_x20;
    plStack_98 = param_3;
    func_0x0001075103c0();
    unaff_x30 = 0x10750faac;
    plVar12 = plVar8;
    unaff_x24 = plVar5;
    break;
  default:
    if ((long)uVar18 < 0x18) {
      if ((param_5 & 1) == 0) {
        if (plVar12 != param_2) {
          while( true ) {
            plVar13 = plVar13 + 1;
            plVar12 = plVar12 + 1;
            if (plVar12 == param_2) break;
            func_0x000107510214();
            if ((int)param_1 != 0) {
              lVar9 = *plVar12;
              plVar16 = plVar13;
              do {
                plVar6 = plVar16 + -1;
                *plVar16 = *plVar6;
                func_0x00010751032c();
                plVar16 = plVar6;
              } while (((ulong)param_1 & 1) != 0);
              *plVar6 = lVar9;
            }
          }
        }
        goto LAB_10750f8d8;
      }
      if (plVar12 == param_2) goto LAB_10750f8d8;
      lVar9 = 0;
      goto LAB_10750f61c;
    }
    if (param_4 == 0) {
      if (plVar12 == param_2) goto LAB_10750f8d8;
      plVar16 = (long *)(uVar18 - 2 >> 1);
      plVar13 = plVar16;
      plStack_80 = param_2;
      goto LAB_10750f698;
    }
    param_1 = plVar12 + (uVar18 >> 1);
    if (uVar18 < 0x81) {
      func_0x0001075102c8(param_1,plVar12,plStack_68);
    }
    else {
      func_0x0001075103a0();
      func_0x0001075102c8();
      plVar13 = param_1 + -1;
      func_0x0001075102c8(plVar12 + 1,plVar13,plStack_70);
      func_0x0001075102c8(plVar12 + 2,param_1 + 1,plStack_78);
      func_0x0001075102c8(plVar13,param_1,param_1 + 1);
      lVar9 = *plVar12;
      *plVar12 = *param_1;
      *param_1 = lVar9;
      param_1 = plVar13;
    }
    param_4 = param_4 + -1;
    plVar13 = param_1;
    if (((param_5 & 1) == 0) &&
       (func_0x000107510214(), plVar13 = param_1, ((ulong)param_1 & 1) == 0)) goto LAB_10750f49c;
    lVar9 = 0;
    lVar19 = *plVar12;
    do {
      func_0x0001075101ec();
      lVar9 = lVar9 + 8;
    } while (((ulong)plVar13 & 1) != 0);
    plVar16 = (long *)((long)plVar12 + lVar9);
    plVar6 = param_2;
    plVar5 = plVar16;
    if (lVar9 == 8) {
      do {
        unaff_x24 = plVar6;
        if (plVar6 <= plVar16) break;
        plVar6 = plVar6 + -1;
        func_0x0001075101ec();
        unaff_x24 = plVar6;
      } while (((ulong)plVar13 & 1) == 0);
    }
    else {
      do {
        plVar6 = plVar6 + -1;
        func_0x0001075101ec();
        unaff_x24 = plVar6;
      } while ((int)plVar13 == 0);
    }
    while (plVar5 < plVar6) {
      func_0x0001075103d4();
      do {
        plVar5 = plVar5 + 1;
        func_0x0001075101ec();
      } while (((ulong)plVar13 & 1) != 0);
      do {
        plVar6 = plVar6 + -1;
        func_0x0001075101ec();
      } while (((ulong)plVar13 & 1) == 0);
    }
    unaff_x20 = plVar5 + -1;
    if (plVar12 != unaff_x20) {
      *plVar12 = *unaff_x20;
    }
    *unaff_x20 = lVar19;
    param_1 = plVar13;
    if (unaff_x24 <= plVar16) {
      func_0x0001075103a0();
      FUN_10750faf8();
      param_1 = plVar5;
      FUN_10750faf8(plVar5,param_2,param_3);
      if ((int)param_1 != 0) goto LAB_10750f548;
      plVar12 = plVar5;
      if (((ulong)plVar13 & 1) != 0) goto LAB_10750f30c;
    }
    func_0x0001075103a0();
    FUN_10750f2c0();
    param_5 = 0;
    plVar12 = plVar5;
    goto LAB_10750f30c;
  }
  pplVar2 = (long **)((long)pplVar3 + -0x40);
  *(long **)((long)pplVar3 + -0x40) = unaff_x24;
  *(long *)((long)pplVar3 + -0x38) = param_4;
  *(ulong *)((long)pplVar3 + -0x30) = param_5;
  *(long **)((long)pplVar3 + -0x28) = plVar12;
  *(long **)((long)pplVar3 + -0x20) = unaff_x20;
  *(long **)((long)pplVar3 + -0x18) = param_3;
  *(undefined1 **)((long)pplVar3 + -0x10) = unaff_x29;
  *(undefined8 *)((long)pplVar3 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)pplVar3 + -0x10);
  plVar5 = plVar7;
  func_0x0001075103c0();
  unaff_x30 = 0x10750fa58;
  plVar12 = plVar7;
FUN_10750f984:
  *(long **)((long)pplVar2 + -0x40) = unaff_x24;
  *(long *)((long)pplVar2 + -0x38) = param_4;
  *(ulong *)((long)pplVar2 + -0x30) = param_5;
  *(long **)((long)pplVar2 + -0x28) = plVar12;
  *(long **)((long)pplVar2 + -0x20) = unaff_x20;
  *(long **)((long)pplVar2 + -0x18) = param_3;
  *(undefined1 **)((long)pplVar2 + -0x10) = unaff_x29;
  *(undefined8 *)((long)pplVar2 + -8) = unaff_x30;
  FUN_10750f8ec(plVar5,*plVar16,*plVar13);
  iVar4 = (int)plVar5;
  func_0x00010751035c();
  if (((ulong)plVar5 & 1) == 0) {
    if (iVar4 != 0) {
      func_0x000107510378();
      func_0x00010751035c();
      if (iVar4 != 0) {
        lVar9 = *plVar13;
        *plVar13 = *plVar16;
        *plVar16 = lVar9;
      }
    }
  }
  else {
    lVar9 = *plVar13;
    if (iVar4 == 0) {
      *plVar13 = *plVar16;
      *plVar16 = lVar9;
      func_0x00010751035c();
      if (iVar4 != 0) {
        func_0x000107510378();
      }
    }
    else {
      *plVar13 = *plVar6;
      *plVar6 = lVar9;
    }
  }
  return;
LAB_10750f61c:
  plVar13 = plVar13 + 1;
  if (plVar13 == param_2) goto LAB_10750f8d8;
  func_0x000107510214();
  if ((int)param_1 != 0) {
    lVar11 = *plVar13;
    lVar19 = lVar9;
    do {
      lVar15 = lVar19;
      ((undefined8 *)((long)plVar12 + lVar15))[1] = *(undefined8 *)((long)plVar12 + lVar15);
      plVar16 = plVar12;
      if (lVar15 == 0) goto LAB_10750f66c;
      func_0x00010751032c();
      lVar19 = lVar15 + -8;
    } while (((ulong)param_1 & 1) != 0);
    plVar16 = (long *)((long)plVar12 + lVar15);
LAB_10750f66c:
    *plVar16 = lVar11;
  }
  lVar9 = lVar9 + 8;
  goto LAB_10750f61c;
LAB_10750f49c:
  lVar9 = *plVar12;
  func_0x0001075101e0();
  plVar13 = plVar12;
  if (((ulong)param_1 & 1) == 0) {
    do {
      plVar13 = plVar13 + 1;
      if (param_2 <= plVar13) break;
      func_0x0001075101e0();
    } while ((int)param_1 == 0);
  }
  else {
    do {
      plVar13 = plVar13 + 1;
      func_0x0001075101e0();
    } while (((ulong)param_1 & 1) == 0);
  }
  unaff_x20 = param_2;
  if (plVar13 < param_2) {
    do {
      unaff_x20 = unaff_x20 + -1;
      func_0x0001075101e0();
    } while (((ulong)param_1 & 1) != 0);
  }
  while (plVar13 < unaff_x20) {
    func_0x0001075103d4();
    do {
      plVar13 = plVar13 + 1;
      func_0x0001075101e0();
    } while ((int)param_1 == 0);
    do {
      unaff_x20 = unaff_x20 + -1;
      func_0x0001075101e0();
    } while (((ulong)param_1 & 1) != 0);
  }
  plVar16 = plVar13 + -1;
  if (plVar12 != plVar16) {
    *plVar12 = *plVar16;
  }
  param_5 = 0;
  *plVar16 = lVar9;
  plVar12 = plVar13;
  goto LAB_10750f30c;
LAB_10750f548:
  param_2 = unaff_x20;
  if (((ulong)plVar13 & 1) != 0) goto LAB_10750f8d8;
  goto LAB_10750f2f4;
LAB_10750f698:
  do {
    if ((long)plVar13 <= (long)plVar16) {
      uVar1 = ((ulong)plVar13 & 0x3fffffffffffffff) << 1 | 1;
      plVar6 = plVar12 + uVar1;
      uVar14 = (long)plVar13 * 2 + 2;
      plVar5 = plVar6;
      uVar17 = uVar1;
      if ((long)uVar14 < (long)uVar18) {
        func_0x000107510214();
        plVar5 = plVar6 + 1;
        uVar17 = uVar14;
        if ((int)param_1 == 0) {
          plVar5 = plVar6;
          uVar17 = uVar1;
        }
      }
      func_0x000107510214();
      if (((ulong)param_1 & 1) == 0) {
        lVar9 = plVar12[(long)plVar13];
        plVar6 = plVar12 + (long)plVar13;
        plStack_68 = plVar13;
        do {
          plVar13 = plVar5;
          iVar4 = (int)param_1;
          *plVar6 = *plVar13;
          if ((long)plVar16 < (long)uVar17) break;
          uVar1 = uVar17 << 1 | 1;
          plVar6 = plVar12 + uVar1;
          uVar14 = uVar17 * 2 + 2;
          plVar5 = plVar6;
          uVar17 = uVar1;
          if ((long)uVar14 < (long)uVar18) {
            func_0x000107510214();
            plVar5 = plVar6 + 1;
            uVar17 = uVar14;
            if (iVar4 == 0) {
              plVar5 = plVar6;
              uVar17 = uVar1;
            }
          }
          param_1 = param_3;
          FUN_10750f8ec(param_3,*plVar5,lVar9);
          plVar6 = plVar13;
        } while ((int)param_1 == 0);
        *plVar13 = lVar9;
        plVar13 = plStack_68;
      }
    }
    plVar13 = (long *)((long)plVar13 + -1);
    plVar6 = plStack_80;
  } while (-1 < (long)plVar13);
  for (; 1 < (long)uVar18; uVar18 = uVar18 - 1) {
    plStack_68 = (long *)*plVar12;
    uVar14 = 0;
    plVar13 = plVar12;
    do {
      uVar17 = uVar14 << 1 | 1;
      uVar1 = uVar14 * 2 + 2;
      uVar10 = uVar17;
      plVar16 = plVar13 + uVar14 + 1;
      if ((long)uVar1 < (long)uVar18) {
        func_0x000107510214();
        uVar10 = uVar1;
        plVar16 = plVar13 + uVar14 + 2;
        if ((int)param_1 == 0) {
          uVar10 = uVar17;
          plVar16 = plVar13 + uVar14 + 1;
        }
      }
      *plVar13 = *plVar16;
      uVar14 = uVar10;
      plVar13 = plVar16;
    } while ((long)uVar10 <= (long)(uVar18 - 2 >> 1));
    plVar6 = plVar6 + -1;
    if (plVar16 == plVar6) {
      *plVar16 = (long)plStack_68;
    }
    else {
      *plVar16 = *plVar6;
      *plVar6 = (long)plStack_68;
      lVar9 = (long)plVar16 + (8 - (long)plVar12) >> 3;
      if (1 < lVar9) {
        uVar14 = lVar9 - 2U >> 1;
        func_0x000107510214();
        if ((int)param_1 != 0) {
          lVar9 = *plVar16;
          plVar13 = plVar12 + uVar14;
          do {
            plVar5 = plVar13;
            *plVar16 = *plVar5;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            param_1 = param_3;
            FUN_10750f8ec(param_3,plVar12[uVar14],lVar9);
            plVar16 = plVar5;
            plVar13 = plVar12 + uVar14;
          } while (((ulong)param_1 & 1) != 0);
          *plVar5 = lVar9;
        }
      }
    }
  }
LAB_10750f8d8:
  func_0x000107510308(unaff_x30);
  return;
}



/* Entry: 10750f8ec; end: 10750f983;  */

bool FUN_10750f8ec(float *param_1,long param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar7 = NEON_ucvtf(*(undefined8 *)(param_2 + 8),4);
  uStack_50 = NEON_ucvtf(*(undefined8 *)(param_3 + 8),4);
  fVar3 = *param_1;
  uStack_48 = uVar7;
  FUN_107501ee0(&uStack_48);
  fVar5 = (float)uVar7;
  fVar4 = *param_1;
  fVar6 = fVar5;
  FUN_107501ee0(&uStack_50);
  bVar2 = fVar5 < fVar6;
  if (fVar5 == fVar6) {
    bVar2 = fVar3 < fVar4;
  }
  bVar1 = *(byte *)(param_3 + 4) < *(byte *)(param_2 + 4);
  if (*(byte *)(param_3 + 4) == *(byte *)(param_2 + 4)) {
    bVar1 = bVar2;
  }
  return bVar1;
}



/* Entry: 10750f984; end: 10750faf7;  */

void FUN_10750f984(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_10750f8ec(param_4,*param_2,*param_1);
  iVar1 = (int)param_4;
  func_0x00010751035c();
  if ((param_4 & 1) == 0) {
    if (iVar1 != 0) {
      func_0x000107510378();
      func_0x00010751035c();
      if (iVar1 != 0) {
        uVar2 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar2;
      }
    }
  }
  else {
    uVar2 = *param_1;
    if (iVar1 == 0) {
      *param_1 = *param_2;
      *param_2 = uVar2;
      func_0x00010751035c();
      if (iVar1 != 0) {
        func_0x000107510378();
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar2;
    }
  }
  return;
}



/* Entry: 10750faf8; end: 10750fc93;  */

bool FUN_10750faf8(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    FUN_10750f8ec(param_3,param_2[-1],*param_1);
    if ((int)param_3 != 0) {
      uVar6 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar6;
    }
    break;
  case 3:
    FUN_10750f984(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    func_0x00010750fa34(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    func_0x00010750fa84(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_10750f984(param_1,param_1 + 1,param_1 + 2,param_3);
    lVar7 = 0;
    iVar8 = 0;
    puVar4 = param_1 + 3;
    puVar5 = param_1 + 2;
    while (puVar3 = puVar4, puVar3 != param_2) {
      uVar2 = param_3;
      FUN_10750f8ec(param_3,*puVar3,*puVar5);
      if ((int)uVar2 != 0) {
        uVar6 = *puVar3;
        lVar1 = lVar7;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x10);
          puVar4 = param_1;
          if (lVar9 == -0x10) goto LAB_10750fc30;
          uVar2 = param_3;
          FUN_10750f8ec(param_3,uVar6,*(undefined8 *)((long)param_1 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while ((uVar2 & 1) != 0);
        puVar4 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_10750fc30:
        *puVar4 = uVar6;
        iVar8 = iVar8 + 1;
        if (iVar8 == 8) {
          return puVar3 + 1 == param_2;
        }
      }
      lVar7 = lVar7 + 8;
      puVar5 = puVar3;
      puVar4 = puVar3 + 1;
    }
  }
  return true;
}



/* Entry: 10750fc94; end: 10750fcb7;  */

void FUN_10750fc94(void)

{
  func_0x0001075102d8();
  FUN_1073e03d4();
  return;
}



/* Entry: 10750fcb8; end: 10750fcd7;  */

void FUN_10750fcb8(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_10750fcd8();
  }
  return;
}



/* Entry: 10750fcd8; end: 10750fcff;  */

undefined8 FUN_10750fcd8(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
  func_0x0001072745e4(param_1);
  func_0x00010726e008();
  return unaff_x19;
}



/* Entry: 10750fd00; end: 10750fd9b;  */

uint FUN_10750fd00(uint param_1)

{
  func_0x00010750fd18();
  return param_1 ^ 1;
}



/* Entry: 10750fd9c; end: 10750fe07;  */

void FUN_10750fd9c(int param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107510280();
  func_0x00010750fdcc();
  if (param_1 != 0) {
    FUN_10750fe08(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x19 + 0x20));
  }
  return;
}



/* Entry: 10750fe08; end: 10750fe2b;  */

bool FUN_10750fe08(double *param_1,double *param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 5);
  if (cVar1 != *(char *)(param_2 + 5) || cVar1 == '\0') {
    return cVar1 == *(char *)(param_2 + 5);
  }
  if (((*(byte *)(param_1 + 4) & 1) == 0) && (*(char *)(param_2 + 4) == '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    if ((*(byte *)(param_1 + 4) != 0) && (*(char *)(param_2 + 4) != '\0')) {
      bVar2 = false;
      if ((*param_1 == *param_2) && (bVar2 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
        bVar2 = param_1[1] == param_2[1];
      }
      if (bVar2) {
        bVar2 = param_1[3] == param_2[3] && param_1[2] == param_2[2];
      }
      else {
        bVar2 = false;
      }
    }
  }
  return bVar2;
}



/* Entry: 10750fe2c; end: 10750feaf;  */

void FUN_10750fe2c(int param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107510280();
  func_0x00010750fe5c();
  if (param_1 != 0) {
    func_0x0001000e107c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x19 + 0x10));
  }
  return;
}



/* Entry: 10750feb0; end: 10750febb;  */

long FUN_10750feb0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)*param_2;
  if (((long *)*param_2)[1] - lVar1 == ((long *)*param_3)[1] - *(long *)*param_3) {
    func_0x0001072ed9e8();
    return lVar1;
  }
  return 0;
}



/* Entry: 10750febc; end: 10750fed7;  */

void FUN_10750febc(long param_1)

{
  FUN_10750fed8();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 10750fed8; end: 10750ff43;  */

long FUN_10750fed8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1;
  func_0x00010726fe1c();
  *(undefined2 *)(lVar1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x20,param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar7 = *(undefined8 *)(param_2 + 0x60);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  return param_1;
}



/* Entry: 10750ff44; end: 10750ffa3;  */

undefined8 * FUN_10750ff44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b8b40;
  func_0x000104c2f714(param_1 + 3);
  func_0x00010750f0b0(param_1 + 1);
  return param_1;
}



/* Entry: 10750ffa4; end: 10750ffbb;  */

void FUN_10750ffa4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1074f93b8(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10750ffbc; end: 10750fff7;  */

void FUN_10750ffbc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1074f93b8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10750fff8; end: 107510067;  */

undefined1 * FUN_10750fff8(void)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x0001075103ac();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_107510068(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_FUN_1109b8be0;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  puStack_30 = (undefined8 *)0x0;
  *unaff_x19 = (long)(puVar1 + 3);
  unaff_x19[1] = (long)puVar1;
  func_0x000107510134();
  func_0x000107510364(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_107510090();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 107510068; end: 10751008f;  */

long FUN_107510068(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_107510090();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 107510090; end: 1075100bb;  */

void FUN_107510090(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109b8be0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1075100bc; end: 1075100bf;  */

void FUN_1075100bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b8be0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1075100c0; end: 1075100d3;  */

void FUN_1075100c0(void)

{
  FUN_107510120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075100d4; end: 10751011f;  */

void FUN_1075100d4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x238;
      FUN_107501d8c();
    }
    *(long *)(param_1 + 0x20) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}



/* Entry: 107510120; end: 107510143;  */

void FUN_107510120(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107510144; end: 107510183;  */

void FUN_107510144(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1109b8c30;
  puVar1[4] = 0;
  puVar1[5] = 0;
  param_1[1] = puVar1;
  puVar1[3] = 0;
  *param_1 = puVar1 + 3;
  return;
}



/* Entry: 107510184; end: 107510187;  */

void FUN_107510184(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b8c30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107510188; end: 10751019b;  */

void FUN_107510188(void)

{
  func_0x0001075101a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10751019c; end: 1075101b7;  */

void FUN_10751019c(long param_1)

{
  func_0x000107499b0c(param_1 + 0x18);
  FUN_1074983c0();
  return;
}



/* Entry: 1075101b8; end: 1075101df;  */

long FUN_1075101b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1075101e0; end: 1075103e7;  */

bool FUN_1075101e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  float *unaff_x19;
  long unaff_x28;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar7 = NEON_ucvtf(*(undefined8 *)(unaff_x28 + 8),4);
  uStack_50 = NEON_ucvtf(*(undefined8 *)(param_3 + 8),4);
  fVar3 = *unaff_x19;
  uStack_48 = uVar7;
  FUN_107501ee0(&uStack_48);
  fVar5 = (float)uVar7;
  fVar4 = *unaff_x19;
  fVar6 = fVar5;
  FUN_107501ee0(&uStack_50);
  bVar2 = fVar5 < fVar6;
  if (fVar5 == fVar6) {
    bVar2 = fVar3 < fVar4;
  }
  bVar1 = *(byte *)(param_3 + 4) < *(byte *)(unaff_x28 + 4);
  if (*(byte *)(param_3 + 4) == *(byte *)(unaff_x28 + 4)) {
    bVar1 = bVar2;
  }
  return bVar1;
}



/* Entry: 1075103e8; end: 10751046b;  */

undefined8 * FUN_1075103e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10750e38c(param_1,&uStack_30);
  FUN_1074f7454(&uStack_30);
  func_0x000107500054(&uStack_40);
  *param_1 = &PTR_FUN_1109b8c98;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return param_1;
}



/* Entry: 10751046c; end: 107510493;  */

undefined8 * FUN_10751046c(undefined8 *param_1)

{
  func_0x00010751096c(param_1 + 0x36);
  *param_1 = &PTR_DAT_1109b8910;
  func_0x0001073ad4a0(param_1 + 0x32);
  func_0x0001073ad4a0(param_1 + 0x30);
  func_0x00010750f0b0(param_1 + 0x2e);
  FUN_107513834(param_1 + 0x12);
  func_0x00010750ff80(param_1 + 0x11);
  *param_1 = &PTR_DAT_1109b7210;
  FUN_1074f5794(param_1 + 4);
  FUN_1074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 107510494; end: 107510497;  */

undefined8 * FUN_107510494(undefined8 *param_1)

{
  func_0x00010751096c(param_1 + 0x36);
  *param_1 = &PTR_DAT_1109b8910;
  func_0x0001073ad4a0(param_1 + 0x32);
  func_0x0001073ad4a0(param_1 + 0x30);
  func_0x00010750f0b0(param_1 + 0x2e);
  FUN_107513834(param_1 + 0x12);
  func_0x00010750ff80(param_1 + 0x11);
  *param_1 = &PTR_DAT_1109b7210;
  FUN_1074f5794(param_1 + 4);
  FUN_1074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 107510498; end: 1075104ab;  */

void FUN_107510498(void)

{
  FUN_10751046c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075104ac; end: 10751092b;  */

void FUN_1075104ac(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  long *extraout_x8;
  undefined2 uVar12;
  long lVar13;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar14;
  byte *pbVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 extraout_var;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined8 *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10750b84c(param_2 + 8);
  *(char *)(param_2 + 0x78) = (char)param_5;
  lVar13 = *(long *)(param_2 + 8);
  lStack_c0 = *(long *)(lVar13 + 0x90);
  uStack_b8 = *(undefined8 *)(lVar13 + 0x98);
  if (*(long *)(lVar13 + 0x98) != 0) {
    do {
      func_0x000107510c04();
    } while (extraout_w10 != 0);
  }
  FUN_10751092c(&lStack_d0,&lStack_c0);
  func_0x00010751096c(&lStack_c0);
  FUN_10751092c(&lStack_c0,param_2 + 0x1b0);
  lVar4 = lStack_c0;
  lVar13 = lStack_d0;
  func_0x000107510994(&lStack_c0);
  if (lVar4 != lVar13) {
    uVar18 = 0;
    lVar13 = lStack_d0;
    if (lStack_c8 != 0) {
      do {
        lVar13 = func_0x000107510c04();
        uVar18 = extraout_var;
      } while (extraout_w10_00 != 0);
    }
    uStack_b8 = *(undefined8 *)(param_2 + 0x1b8);
    lStack_c0 = *(long *)(param_2 + 0x1b0);
    *(undefined8 *)(param_2 + 0x1b8) = uVar18;
    *(long *)(param_2 + 0x1b0) = lVar13;
    func_0x00010751096c(&lStack_c0);
    if (*(int *)(param_7 + 0x20) != 0) {
      func_0x000107515b1c(param_2 + 0x90);
    }
  }
  if (((param_6 & 1) == 0) && (lStack_d0 == 0)) {
    *param_1 = 0;
    param_1[0x58] = 0;
    goto LAB_1075105b0;
  }
  lVar13 = *(long *)(param_7 + 8);
  pbVar15 = *(byte **)(*(long *)(param_2 + 8) + 0x80);
  dVar16 = (double)_log2(*(undefined8 *)(lVar13 + 0x78));
  uVar11 = (uint)dVar16;
  if ((int)(uint)pbVar15[1] <= (int)uVar11) {
    uVar11 = (uint)pbVar15[1];
  }
  uVar1 = (uint)*pbVar15;
  if ((int)(uint)*pbVar15 <= (int)uVar11) {
    uVar1 = uVar11;
  }
  bVar2 = pbVar15[2];
  dVar16 = (double)FUN_1074163dc(lVar13);
  _log2(*(undefined8 *)(lVar13 + 0x78));
  dVar17 = (double)_exp2();
  uVar18 = NEON_ucvtf((ulong)*(uint *)(lVar13 + 0x4c));
  uVar23 = NEON_ucvtf((ulong)*(uint *)(lVar13 + 0x50));
  dVar19 = (double)_hypot(uVar18);
  dVar17 = (dVar19 + dVar19) / (dVar17 * 512.0);
  if (dVar17 < 0.7) {
    uVar23 = 0x403e000000000000;
    uVar11 = (uint)pbVar15[3];
    if (dVar16 * 57.29577951308232 <= 30.0) {
      uVar11 = 0;
    }
    uVar11 = uVar1 - (uVar11 + bVar2);
    if ((int)uVar1 <= (int)uVar11) {
      uVar11 = uVar1;
    }
    uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
    iVar3 = -uVar11;
    while( true ) {
      uVar14 = (ulong)uVar11;
      if ((int)uVar11 < 1) break;
      dVar16 = (double)_ldexp(0x3ff0000000000000,iVar3);
      if (dVar17 <= dVar16 + dVar16) goto LAB_1075106e0;
      iVar3 = iVar3 + 1;
      uVar11 = uVar11 - 1;
    }
  }
  uVar14 = 0;
LAB_1075106e0:
  lStack_c0 = func_0x00010741657c(lVar13,0);
  uStack_b8 = uVar23;
  dVar16 = (double)func_0x00010726b794(&lStack_c0,uVar14);
  dVar19 = (double)(uint)(1 << (ulong)((uint)uVar14 & 0x1f));
  uVar18 = _nextafter(dVar19,0);
  lVar4 = lStack_c8;
  lVar13 = lStack_d0;
  dVar17 = (double)NEON_fminnm(uVar18,uVar23);
  if (dVar17 <= 0.0) {
    dVar17 = 0.0;
  }
  if ((*(byte *)(param_2 + 0x1d0) == 1 && uVar1 == *(byte *)(param_2 + 0x1c0)) &&
      (uint)uVar14 == (uint)*(byte *)(param_2 + 0x1c4)) {
    dVar24 = (double)NEON_ucvtf((ulong)*(uint *)(param_2 + 0x1c8));
    dVar24 = dVar16 - (dVar24 + dVar19 * (double)(int)*(short *)(param_2 + 0x1c2));
    dVar25 = (double)NEON_ucvtf((ulong)*(uint *)(param_2 + 0x1cc));
    dVar25 = dVar17 - dVar25;
    bVar6 = false;
    bVar7 = true;
    if (-0.125 <= dVar24) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(dVar24)) {
        bVar6 = dVar24 == 1.125;
        bVar7 = 1.125 <= dVar24;
      }
    }
    bVar5 = true;
    bVar8 = false;
    if (!bVar7 || bVar6) {
      bVar5 = false;
      bVar8 = true;
      if (!NAN(dVar25)) {
        bVar5 = dVar25 < -0.125;
        bVar8 = false;
      }
    }
    bVar6 = false;
    bVar7 = true;
    if (bVar5 == bVar8) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(dVar25)) {
        bVar6 = dVar25 == 1.125;
        bVar7 = 1.125 <= dVar25;
      }
    }
    if (bVar7 && !bVar6) goto LAB_107510784;
    auVar21 = *(undefined1 (*) [16])(param_2 + 0x1c0);
  }
  else {
LAB_107510784:
    dVar24 = (double)NEON_fminnm(uVar18,dVar16 - dVar19 * (double)(int)(dVar16 / dVar19));
    if (dVar24 <= 0.0) {
      dVar24 = 0.0;
    }
    uVar12 = (undefined2)(int)(dVar16 / dVar19);
    auVar22._1_3_ = (int3)(CONCAT22(uVar12,uVar12) >> 8);
    auVar22[0] = (char)uVar1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar14 | (ulong)(uint)(int)dVar24 << 0x20;
    auVar21 = NEON_ext(auVar20,auVar20,0xc,1);
    auVar22._4_12_ = auVar21._4_12_;
    auVar21._0_12_ = auVar22._0_12_;
    auVar21._12_4_ = (int)dVar17;
  }
  uStack_d8 = auVar21._8_8_;
  uStack_e0 = auVar21._0_8_;
  *(undefined8 *)(param_2 + 0x1c8) = uStack_d8;
  *(undefined8 *)(param_2 + 0x1c0) = uStack_e0;
  if ((*(byte *)(param_2 + 0x1d0) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x1d0) = 1;
  }
  uVar18 = *(undefined8 *)(param_2 + 8);
  lStack_100 = lStack_d0;
  lStack_f8 = lStack_c8;
  if (lStack_c8 != 0) {
    do {
      func_0x000107510c04();
    } while (extraout_w10_01 != 0);
  }
  puStack_98 = (undefined8 *)0x0;
  puVar10 = (undefined8 *)0x28;
  lStack_f0 = param_2;
  lStack_e8 = param_7;
  __Znwm();
  *puVar10 = &PTR_SUB_1109b8dc0;
  puVar10[1] = lVar13;
  puVar10[2] = lVar4;
  lStack_100 = 0;
  lStack_f8 = 0;
  puVar10[4] = lStack_e8;
  puVar10[3] = lStack_f0;
  puStack_98 = puVar10;
  FUN_107514eb4(param_1,param_2 + 0x90,param_4,param_5,param_6,param_7,uVar18,&uStack_e0,auStack_b0)
  ;
  func_0x00010750bd60(auStack_b0);
  func_0x000107510994(&lStack_100);
  if ((lStack_d0 != 0) && (*(int *)(param_7 + 0x20) == 0)) {
    lVar13 = *(long *)(param_2 + 0xe0);
    while (lVar13 != param_2 + 0xe8) {
      if (*(long *)(*(long *)(lVar13 + 0x30) + 0x368) != lStack_d0) {
        lStack_110 = lStack_d0;
        lStack_108 = lStack_c8;
        if (lStack_c8 != 0) {
          do {
            func_0x000107510c04();
          } while (extraout_w10_02 != 0);
        }
        func_0x00010784dab0();
        func_0x000107510994(&lStack_110);
      }
      func_0x00010002c7d4();
    }
  }
LAB_1075105b0:
  plVar9 = &lStack_d0;
  func_0x000107510994();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107510994(&lStack_d0);
  __Unwind_Resume();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  lVar13 = plVar9[1];
  if (lVar13 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    extraout_x8[1] = lVar13;
    if (lVar13 != 0) {
      *extraout_x8 = *plVar9;
    }
  }
  return;
}



/* Entry: 10751092c; end: 1075109e7;  */

void FUN_10751092c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1075109e8; end: 1075109fb;  */

void FUN_1075109e8(void)

{
  func_0x0001075109bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075109fc; end: 107510a23;  */

void FUN_1075109fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_SUB_1109b8dc0;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = *puVar2;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107510c04();
    } while (extraout_w10 != 0);
  }
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  return;
}



/* Entry: 107510a24; end: 107510a4f;  */

void FUN_107510a24(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_1109b8dc0;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107510c04();
    } while (extraout_w10 != 0);
  }
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  return;
}



/* Entry: 107510a50; end: 107510b83;  */

void FUN_107510a50(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int extraout_w10;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [120];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *param_4;
  uVar6 = param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  if (*(long *)(param_2 + 8) == 0) {
    *param_1 = 0;
    uStack_f8 = uVar2;
    uStack_f0 = uVar6;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x18);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    lVar4 = *(long *)(lVar3 + 8);
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = uVar2;
    uStack_e0 = uVar6;
    func_0x00010750edb0(auStack_d8,lVar3,&uStack_e8);
    lVar3 = *(long *)(lVar3 + 8);
    lVar5 = *(long *)(param_2 + 0x10);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar2 = 0x390;
    __Znwm();
    uStack_60 = uVar6;
    uStack_58 = uVar7;
    if (lVar5 != 0) {
      do {
        func_0x000107510c04();
      } while (extraout_w10 != 0);
    }
    func_0x00010784d9fc(uVar2,param_3,lVar4 + 0x10,uVar1,&uStack_60,auStack_d8,lVar3 + 0x68);
    func_0x000107510994(&uStack_60);
    *param_1 = uVar2;
    FUN_10750bcd8(auStack_d8);
    func_0x00010750bd38(&uStack_e8);
  }
  func_0x00010750bd38(&uStack_f8);
  return;
}



/* Entry: 107510b84; end: 107510bbb;  */

long FUN_107510b84(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b8e20);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107510bbc; end: 107510c1b;  */

undefined ** FUN_107510bbc(void)

{
  return &PTR_DAT_1109b8e20;
}



/* Entry: 107510c1c; end: 107510c8f;  */

undefined8 * FUN_107510c1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10750ee48(param_1,&uStack_30);
  FUN_1074f7454(&uStack_30);
  FUN_1074fffa0(&uStack_40);
  *param_1 = &PTR_FUN_1109b8e40;
  return param_1;
}



/* Entry: 107510c90; end: 107510c9b;  */

long FUN_107510c90(long param_1)

{
  return *(long *)(param_1 + 8) + 0x80;
}



/* Entry: 107510c9c; end: 107510dab;  */

undefined8 *
FUN_107510c9c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_88 [3];
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined2 *)(param_3 + 0x18);
  uStack_b8 = *(undefined8 *)(param_3 + 0x48);
  uStack_c0 = *(undefined8 *)(param_3 + 0x40);
  uStack_a8 = *(undefined8 *)(param_3 + 0x58);
  uStack_b0 = *(undefined8 *)(param_3 + 0x50);
  uStack_98 = *(undefined8 *)(param_3 + 0x68);
  uStack_a0 = *(undefined8 *)(param_3 + 0x60);
  puVar2 = (undefined8 *)0x20;
  __Znwm();
  *puVar2 = &PTR_FUN_1109b8f78;
  puVar2[1] = param_2;
  puVar2[2] = param_7;
  puVar2[3] = param_3;
  puStack_70 = puVar2;
  FUN_107513908(param_1,param_2 + 0x90,param_4,param_5,param_6,param_7,uVar3,param_8,0x200,uVar1,
                &uStack_c0,auStack_88);
  puVar2 = auStack_88;
  func_0x00010750bd60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = auStack_88;
  func_0x00010750bd60();
  func_0x000107510f78();
  *puVar2 = &PTR_DAT_1109b8a20;
  FUN_10750fcb8(puVar2 + 0x36);
  *puVar2 = &PTR_DAT_1109b8910;
  func_0x0001073ad4a0(puVar2 + 0x32);
  func_0x0001073ad4a0(puVar2 + 0x30);
  func_0x00010750f0b0(puVar2 + 0x2e);
  FUN_107513834(puVar2 + 0x12);
  func_0x00010750ff80(puVar2 + 0x11);
  *puVar2 = &PTR_DAT_1109b7210;
  FUN_1074f5794(puVar2 + 4);
  FUN_1074f7454(puVar2 + 1);
  return puVar2;
}



/* Entry: 107510dac; end: 107510daf;  */

undefined8 * FUN_107510dac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109b8a20;
  FUN_10750fcb8(param_1 + 0x36);
  *param_1 = &PTR_DAT_1109b8910;
  func_0x0001073ad4a0(param_1 + 0x32);
  func_0x0001073ad4a0(param_1 + 0x30);
  func_0x00010750f0b0(param_1 + 0x2e);
  FUN_107513834(param_1 + 0x12);
  func_0x00010750ff80(param_1 + 0x11);
  *param_1 = &PTR_DAT_1109b7210;
  FUN_1074f5794(param_1 + 4);
  FUN_1074f7454(param_1 + 1);
  return param_1;
}



/* Entry: 107510db0; end: 107510dc3;  */

void FUN_107510db0(void)

{
  FUN_10750eea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107510dc4; end: 107510dcb;  */

void FUN_107510dc4(void)

{
  return;
}



/* Entry: 107510dcc; end: 107510e0b;  */

void FUN_107510dcc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_FUN_1109b8f78;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 107510e0c; end: 107510e43;  */

void FUN_107510e0c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109b8f78;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}


