/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10746a16c; end: 10746a243;  */

void FUN_10746a16c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  long *plVar2;
  undefined1 auStack_68 [24];
  undefined8 auStack_50 [2];
  undefined1 auStack_40 [16];
  
  plVar2 = (long *)(param_3 + 0x10);
  while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010747b8f8(lVar1,plVar2 + 2);
    if (lVar1 != 0) {
      lVar1 = param_2 + 0x98;
      FUN_107469f90(lVar1,plVar2 + 2);
      if (lVar1 == 0) {
        func_0x00010747a248();
        auStack_50[0] = param_1;
        if (extraout_x8 != 0) {
          do {
            func_0x000107479b20();
          } while (extraout_w10 != 0);
        }
        func_0x0001074737c4(param_2 + 0x68);
        FUN_107469fbc(auStack_40);
        FUN_10746a0c0(auStack_68,param_2 + 0x98,plVar2 + 2,auStack_50);
        func_0x000107470508(auStack_50);
      }
      else {
        func_0x00010747a81c();
      }
    }
  }
  *(undefined1 *)(param_2 + 0x168) = 0;
  FUN_10746a068(param_2);
  return;
}



/* Entry: 10746a244; end: 10746a83b;  */

undefined **
FUN_10746a244(undefined *param_1,undefined **param_2,undefined *param_3,undefined *param_4,
             undefined *param_5,undefined *param_6,undefined8 param_7,undefined8 *param_8,
             long *param_9,undefined8 *param_10,undefined *param_11,undefined *param_12,
             undefined *param_13,undefined8 param_14)

{
  undefined **ppuVar1;
  undefined1 in_ZR;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined *puVar8;
  code *extraout_x8_01;
  long lVar9;
  undefined **ppuVar10;
  long extraout_x8_02;
  code *extraout_x8_03;
  undefined8 *puVar11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *in_register_00005008;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a0 [24];
  undefined ***pppuStack_88;
  undefined8 uStack_80;
  
  ppuVar3 = param_2;
  puVar8 = param_1;
  func_0x000107479adc();
  *ppuVar3 = (undefined *)&PTR_FUN_1109b29b0;
  uStack_80 = extraout_x8;
  FUN_1073af260();
  param_2[1] = (undefined *)ppuVar3;
  func_0x00010747a248();
  param_2[3] = in_register_00005008;
  param_2[2] = puVar8;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  ppuVar3 = param_2 + 4;
  *ppuVar3 = (undefined *)0x0;
  param_2[5] = param_6;
  func_0x000107473900(param_2 + 6,param_7);
  __ZNSt3__119__shared_mutex_baseC1Ev(param_2 + 0xb);
  param_2[0x21] = (undefined *)0x0;
  param_2[0x20] = (undefined *)0x0;
  param_2[0x23] = (undefined *)0x0;
  param_2[0x22] = (undefined *)0x0;
  *(undefined4 *)(param_2 + 0x24) = 0x3f800000;
  param_2[0x25] = param_3;
  puVar4 = (undefined *)0x80;
  __Znwm();
  puVar8 = puVar4;
  FUN_1074e2990();
  FUN_1074e29f0(puVar4,puVar8);
  param_2[0x26] = puVar4;
  param_2[0x27] = param_4;
  param_2[0x28] = param_5;
  param_2[0x29] = (undefined *)*param_8;
  puVar8 = (undefined *)param_8[1];
  param_2[0x2a] = puVar8;
  if (puVar8 != (undefined *)0x0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10_00 != 0);
  }
  FUN_10746a83c(&ppuStack_f0);
  param_2[0x2c] = (undefined *)ppuStack_e8;
  param_2[0x2b] = (undefined *)ppuStack_f0;
  ppuStack_f0 = (undefined **)0x0;
  ppuStack_e8 = (undefined **)0x0;
  FUN_10747090c(&ppuStack_f0);
  param_2[0x2d] = (undefined *)*param_10;
  puVar8 = (undefined *)param_10[1];
  param_2[0x2e] = puVar8;
  if (puVar8 != (undefined *)0x0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10_01 != 0);
  }
  __ZNSt3__119__shared_mutex_baseC1Ev(param_2 + 0x2f);
  param_2[0x45] = (undefined *)0x0;
  param_2[0x44] = (undefined *)0x0;
  param_2[0x47] = (undefined *)0x0;
  param_2[0x46] = (undefined *)0x0;
  *(undefined4 *)(param_2 + 0x48) = 0x3f800000;
  param_2[0x49] = param_11;
  param_2[0x4a] = param_12;
  puVar8 = *(undefined **)(param_13 + 0x18);
  if (puVar8 != (undefined *)0x0) {
    in_ZR = puVar8 == param_13;
    if ((bool)in_ZR) {
      param_2[0x4e] = (undefined *)(param_2 + 0x4b);
      func_0x00010747a370(*(undefined8 *)(param_13 + 0x18));
      func_0x00010747a80c();
      goto LAB_10746a3e4;
    }
    func_0x000107479e40();
    (*extraout_x8_01)();
  }
  param_2[0x4e] = puVar8;
LAB_10746a3e4:
  func_0x0001073b2ef8(param_2 + 0x4f,param_14);
  func_0x00010724b408(param_2 + 0x53);
  func_0x00010725b034(param_2 + 0x55,param_2[2]);
  param_2[0x57] = (undefined *)param_2;
  puVar11 = (undefined8 *)param_2[0x53];
  lVar9 = puVar11[1];
  puVar8 = (undefined *)*puVar11;
  param_2[0x59] = (undefined *)puVar11[1];
  param_2[0x58] = puVar8;
  if (lVar9 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10_02 != 0);
  }
  param_2[0x5a] = (undefined *)param_2;
  param_2[0x5b] = *(undefined **)param_2[0x55];
  puVar8 = *(undefined **)((long)param_2[0x55] + 8);
  param_2[0x5c] = puVar8;
  if (puVar8 != (undefined *)0x0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10_03 != 0);
  }
  param_2[0x5d] = (undefined *)0x32aaaba7;
  param_2[0x5f] = (undefined *)0x0;
  param_2[0x5e] = (undefined *)0x0;
  param_2[0x61] = (undefined *)0x0;
  param_2[0x60] = (undefined *)0x0;
  param_2[99] = (undefined *)0x0;
  param_2[0x62] = (undefined *)0x0;
  param_2[0x65] = (undefined *)0x0;
  param_2[100] = (undefined *)0x0;
  param_2[0x67] = (undefined *)0x0;
  param_2[0x66] = (undefined *)0x0;
  param_2[0x69] = (undefined *)0x0;
  param_2[0x68] = (undefined *)0x0;
  param_2[0x6a] = (undefined *)0x0;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_2 + 0x6b);
  *(undefined4 *)(param_2 + 0x82) = 0;
  param_2[0x81] = (undefined *)0x0;
  param_2[0x80] = (undefined *)0x0;
  param_2[0x83] = (undefined *)0x0;
  ppuStack_f0 = (undefined **)((ulong)ppuStack_f0 & 0xffffffffffffff00);
  ppuVar5 = (undefined **)(param_2[0x4a] + 0x6d0);
  func_0x00010724e2c8(ppuVar5,&ppuStack_f0);
  *(char *)(param_2 + 0x84) = (char)ppuVar5;
  func_0x00010726ed14(param_2 + 0x85);
  param_2[0x87] = (undefined *)param_2;
  ppuVar12 = (undefined **)param_2[0x53];
  ppuVar13 = (undefined **)param_2[0x54];
  ppuStack_120 = ppuVar12;
  ppuStack_118 = ppuVar13;
  if (ppuVar13 != (undefined **)0x0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10_04 != 0);
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  if (ppuVar13 != (undefined **)0x0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10_05 != 0);
  }
  ppuVar10 = (undefined **)param_2[1];
  pppuVar6 = &ppuStack_170;
  FUN_10746eb70(pppuVar6,param_2 + 0x85);
  ppuStack_158 = param_2;
  ppuStack_150 = ppuVar12;
  ppuStack_148 = ppuVar13;
  if (ppuVar13 != (undefined **)0x0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10_06 != 0);
  }
  uStack_130 = 0;
  ppuStack_140 = ppuVar10;
  ppuStack_138 = ppuVar5;
  func_0x00010747a33c();
  lStack_f8 = *param_9;
  pppuVar7 = pppuVar6;
  ppuVar5 = param_2;
  if ((lStack_f8 != 0) && (*(long *)(lStack_f8 + 0x10) != 0)) {
    do {
      func_0x000107479c1c();
      lStack_f8 = extraout_x8_02;
      ppuVar5 = ppuStack_158;
      ppuVar12 = ppuStack_150;
      ppuVar13 = ppuStack_148;
    } while (extraout_w11 != 0);
  }
  ppuVar1 = ppuStack_168;
  ppuVar10 = ppuStack_170;
  ppuStack_f0 = ppuStack_170;
  ppuStack_170 = (undefined **)0x0;
  ppuStack_168 = (undefined **)0x0;
  ppuStack_e8 = ppuVar1;
  ppuStack_e0 = ppuStack_160;
  ppuStack_150 = (undefined **)0x0;
  ppuStack_148 = (undefined **)0x0;
  ppuStack_b8 = ppuStack_138;
  ppuStack_c0 = ppuStack_140;
  uStack_b0 = uStack_130;
  pppuStack_88 = (undefined ***)0x0;
  pppuStack_d8 = (undefined ***)ppuVar5;
  ppuStack_d0 = ppuVar12;
  ppuStack_c8 = ppuVar13;
  func_0x00010747a520();
  *pppuVar7 = &PTR_SUB_1109b2f08;
  pppuVar7[1] = ppuVar10;
  ppuStack_f0 = (undefined **)0x0;
  ppuStack_e8 = (undefined **)0x0;
  pppuVar7[2] = ppuVar1;
  pppuVar7[3] = ppuStack_160;
  pppuVar7[4] = ppuVar5;
  pppuVar7[5] = ppuVar12;
  pppuVar7[6] = ppuVar13;
  ppuStack_d0 = (undefined **)0x0;
  ppuStack_c8 = (undefined **)0x0;
  pppuVar7[8] = ppuStack_138;
  pppuVar7[7] = ppuStack_140;
  *(undefined4 *)(pppuVar7 + 9) = uStack_130;
  puStack_108 = param_2[3];
  puStack_110 = param_2[2];
  pppuStack_88 = pppuVar7;
  if (param_2[3] != (undefined *)0x0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10_07 != 0);
  }
  func_0x0001078d3170(param_1,pppuVar6,&lStack_f8,auStack_a0,&puStack_110);
  func_0x00010724b8b8(&puStack_110);
  func_0x0001006393ec(auStack_a0);
  func_0x00010746a874(&ppuStack_f0);
  FUN_1074755f4(&lStack_f8);
  uStack_128 = 0;
  func_0x00010747527c(ppuVar3,pppuVar6);
  func_0x00010747525c(&uStack_128);
  func_0x00010746a874(&ppuStack_170);
  func_0x00010747a910();
  uVar2 = SUB84(param_2[0x28],0);
  ppuStack_f0 = &PTR_FUN_1109b2f88;
  ppuStack_e8 = param_2;
  pppuStack_d8 = &ppuStack_f0;
  func_0x000107479e40();
  (*extraout_x8_03)();
  *(undefined4 *)(param_2 + 10) = uVar2;
  func_0x00010730b43c(&ppuStack_f0);
  pppuVar6 = &ppuStack_120;
  func_0x0001074753bc(pppuVar6);
  func_0x000107479a9c(uStack_80);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    do {
      func_0x000107470998(param_2 + 0x2f);
      func_0x000107470a28(param_2 + 0x2d);
      func_0x000107410d14(param_2 + 0x2b);
      func_0x00010724bd50(param_2 + 0x29);
      FUN_107474fc0(param_2 + 0x26);
      FUN_107470a4c(param_2 + 0xb);
      func_0x00010747396c(param_2 + 6);
      func_0x00010747525c(ppuVar3);
      func_0x00010724b8b8(param_2 + 2);
      __Unwind_Resume(pppuVar6);
      func_0x000107470930(param_2 + 0x68);
      func_0x000107470964(param_2 + 0x65);
      __ZNSt3__15mutexD1Ev(param_2 + 0x5d);
      func_0x00010724ae28(param_2 + 0x5b);
      func_0x00010724ae28(param_2 + 0x58);
      func_0x00010724b54c(param_2 + 0x55);
      func_0x00010724b54c(param_2 + 0x53);
      func_0x00010724b884(param_2 + 0x4f);
      func_0x000107475358(param_2 + 0x4b);
    } while( true );
  }
  return param_2;
}



/* Entry: 10746a83c; end: 10746a897;  */

void FUN_10746a83c(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_107475094(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10747090c(&uStack_30);
  return;
}



/* Entry: 10746a898; end: 10746a9cf;  */

undefined8 * FUN_10746a898(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1109b29b0;
  func_0x0001073ada2c(param_1[0x53]);
  func_0x0001073ada2c(param_1[0x55]);
  plVar4 = (long *)param_1[0x69];
  for (plVar3 = (long *)param_1[0x68]; plVar3 != plVar4; plVar3 = plVar3 + 2) {
    lVar5 = *plVar3;
    if (*(long *)(lVar5 + 0x130) != 0) {
      func_0x0001072a8e5c(lVar5 + 0x118,*(undefined8 *)(lVar5 + 0x128));
      *(undefined8 *)(lVar5 + 0x128) = 0;
      lVar2 = *(long *)(lVar5 + 0x120);
      for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
        *(undefined8 *)(*(long *)(lVar5 + 0x118) + lVar1 * 8) = 0;
      }
      *(undefined8 *)(lVar5 + 0x130) = 0;
    }
  }
  func_0x00010747538c(param_1 + 0x85);
  func_0x000107276ba4(param_1 + 0x6b);
  func_0x000107470930(param_1 + 0x68);
  func_0x000107470964(param_1 + 0x65);
  __ZNSt3__15mutexD1Ev(param_1 + 0x5d);
  func_0x00010724ae28(param_1 + 0x5b);
  func_0x00010724ae28(param_1 + 0x58);
  func_0x00010724b54c(param_1 + 0x55);
  func_0x00010724b54c(param_1 + 0x53);
  func_0x00010724b884(param_1 + 0x4f);
  func_0x000107475358(param_1 + 0x4b);
  func_0x000107470998(param_1 + 0x2f);
  func_0x000107470a28(param_1 + 0x2d);
  func_0x000107410d14(param_1 + 0x2b);
  func_0x00010724bd50(param_1 + 0x29);
  FUN_107474fc0(param_1 + 0x26);
  FUN_107470a4c(param_1 + 0xb);
  func_0x00010747396c(param_1 + 6);
  FUN_10747525c(param_1 + 4);
  func_0x00010724b8b8(param_1 + 2);
  return param_1;
}



/* Entry: 10746a9d0; end: 10746a9d3;  */

undefined8 * FUN_10746a9d0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1109b29b0;
  func_0x0001073ada2c(param_1[0x53]);
  func_0x0001073ada2c(param_1[0x55]);
  plVar4 = (long *)param_1[0x69];
  for (plVar3 = (long *)param_1[0x68]; plVar3 != plVar4; plVar3 = plVar3 + 2) {
    lVar5 = *plVar3;
    if (*(long *)(lVar5 + 0x130) != 0) {
      func_0x0001072a8e5c(lVar5 + 0x118,*(undefined8 *)(lVar5 + 0x128));
      *(undefined8 *)(lVar5 + 0x128) = 0;
      lVar2 = *(long *)(lVar5 + 0x120);
      for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
        *(undefined8 *)(*(long *)(lVar5 + 0x118) + lVar1 * 8) = 0;
      }
      *(undefined8 *)(lVar5 + 0x130) = 0;
    }
  }
  func_0x00010747538c(param_1 + 0x85);
  func_0x000107276ba4(param_1 + 0x6b);
  func_0x000107470930(param_1 + 0x68);
  func_0x000107470964(param_1 + 0x65);
  __ZNSt3__15mutexD1Ev(param_1 + 0x5d);
  func_0x00010724ae28(param_1 + 0x5b);
  func_0x00010724ae28(param_1 + 0x58);
  func_0x00010724b54c(param_1 + 0x55);
  func_0x00010724b54c(param_1 + 0x53);
  func_0x00010724b884(param_1 + 0x4f);
  func_0x000107475358(param_1 + 0x4b);
  func_0x000107470998(param_1 + 0x2f);
  func_0x000107470a28(param_1 + 0x2d);
  func_0x000107410d14(param_1 + 0x2b);
  func_0x00010724bd50(param_1 + 0x29);
  FUN_107474fc0(param_1 + 0x26);
  FUN_107470a4c(param_1 + 0xb);
  func_0x00010747396c(param_1 + 6);
  FUN_10747525c(param_1 + 4);
  func_0x00010724b8b8(param_1 + 2);
  return param_1;
}



/* Entry: 10746a9d4; end: 10746a9e7;  */

void FUN_10746a9d4(void)

{
  FUN_10746a898();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10746a9e8; end: 10746aaab;  */

void FUN_10746a9e8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  code *extraout_x8_00;
  int extraout_w11;
  long unaff_x19;
  long *plVar4;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uStack_40;
  undefined8 uStack_38;
  
  func_0x000107479cac();
  func_0x000107479be0(param_1 + 0x358);
  func_0x000107279a5c();
  uVar5 = *(ulong *)(unaff_x19 + 0x158);
  uVar1 = *unaff_x20;
  if (unaff_x20[1] == 0) {
    uVar3 = 0;
    uStack_40 = uVar5;
  }
  else {
    do {
      func_0x000107479c1c();
    } while (extraout_w11 != 0);
    uVar3 = extraout_x8;
    uStack_40 = *(ulong *)(unaff_x19 + 0x158);
  }
  uStack_38 = *(undefined8 *)(unaff_x19 + 0x160);
  *(ulong *)(unaff_x19 + 0x158) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x160) = uVar3;
  func_0x000107410d14(&uStack_40);
  if (uVar5 != uVar1) {
    uStack_40 = uStack_40 & 0xffffffffffffff00;
    lVar2 = *(long *)(unaff_x19 + 0x250) + 0x330;
    func_0x00010724e2c8(lVar2,&uStack_40);
    if ((int)lVar2 != 0) {
      plVar4 = (long *)(*(long *)(unaff_x19 + 0x168) + 0x10);
      while (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0) {
        func_0x000107479e40(plVar4[5]);
        (*extraout_x8_00)();
      }
    }
  }
  func_0x000107479fcc();
  return;
}



/* Entry: 10746aaac; end: 10746b8fb;  */

void FUN_10746aaac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  long lVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long *plVar11;
  ulong *puVar12;
  long **pplVar13;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  byte *pbVar14;
  ulong *extraout_x8_01;
  ulong *extraout_x8_02;
  ulong *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 *puVar15;
  code *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong uVar16;
  ulong extraout_x9_02;
  undefined8 *puVar17;
  ulong *puVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar19;
  long *plVar20;
  long *extraout_x10;
  ulong *extraout_x11;
  long unaff_x19;
  undefined8 unaff_x21;
  long *plVar21;
  ulong *puVar22;
  long *plVar23;
  long **pplVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong *puVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  undefined1 uStack_608;
  undefined7 uStack_607;
  undefined1 uStack_600;
  undefined8 uStack_5f8;
  undefined8 *puStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  undefined1 auStack_5d8 [24];
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  long lStack_5b0;
  undefined1 uStack_5a8;
  undefined7 uStack_5a7;
  int iStack_5a0;
  long *plStack_590;
  long **pplStack_588;
  long lStack_580;
  undefined8 uStack_578;
  char cStack_570;
  ulong uStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  undefined1 auStack_548 [8];
  byte bStack_540;
  undefined7 uStack_53f;
  undefined1 auStack_530 [8];
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined1 uStack_4e8;
  long *plStack_4e0;
  long **pplStack_4d8;
  undefined8 *puStack_4d0;
  long lStack_4c8;
  undefined1 uStack_4c0;
  undefined8 *apuStack_4b8 [3];
  undefined1 auStack_4a0 [56];
  undefined4 uStack_468;
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  long lStack_430;
  long lStack_428;
  undefined1 auStack_420 [16];
  long lStack_410;
  undefined1 uStack_408;
  undefined1 auStack_400 [128];
  undefined1 auStack_380 [40];
  undefined1 auStack_358 [56];
  undefined1 auStack_320 [56];
  undefined1 auStack_2e8 [56];
  long lStack_2b0;
  undefined8 uStack_2a8;
  int iStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [16];
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int iStack_180;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 auStack_d0 [56];
  undefined8 uStack_98;
  
  func_0x00010747a364();
  func_0x000107479adc();
  puStack_5c0 = (undefined8 *)0x0;
  puStack_5b8 = (undefined8 *)0x0;
  uStack_560 = param_1 + 0x358;
  puStack_558 = (undefined8 *)CONCAT71(puStack_558._1_7_,1);
  uStack_98 = extraout_x8_00;
  func_0x00010724e404();
  lVar8 = *(long *)(unaff_x19 + 0x158);
  FUN_107475f28();
  if (lVar8 == 0) {
    func_0x00010747a440();
  }
  else {
    FUN_10746b8fc(&puStack_5c0,lVar8 + 0x28);
  }
  func_0x00010724e49c(&uStack_560);
  if (lVar8 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_5d8,puStack_5c0);
    lVar8 = *(long *)(unaff_x19 + 0x168);
    func_0x000107475fc8(lVar8,auStack_5d8);
    lStack_5e0 = lVar8;
    if (lVar8 == 0) {
      func_0x00010747a440();
    }
    else {
      uVar25 = *(undefined8 *)(unaff_x19 + 0x28);
      func_0x000104c2f64c(auStack_358);
      func_0x000104c2f64c(auStack_320);
      func_0x000104c2f64c(auStack_2e8);
      uStack_2a8 = 0;
      lStack_2b0 = 0;
      iStack_1c0 = 0;
      uStack_1b0 = 0;
      uStack_1b8 = 0;
      func_0x00010726acf0(auStack_1a0);
      func_0x0001077522e8(&lStack_5b0,param_3 + 0x2f);
      if (iStack_5a0 == 0) {
        if (iStack_1c0 == 0) {
          func_0x000107470af8(&lStack_2b0,&lStack_5b0);
        }
        else {
          FUN_10746fd04(&lStack_2b0);
          uStack_2a8 = CONCAT71(uStack_5a7,uStack_5a8);
          lStack_2b0 = lStack_5b0;
          if (CONCAT71(uStack_5a7,uStack_5a8) != 0) {
            do {
              func_0x000107479b20();
            } while (extraout_w10 != 0);
          }
          iStack_1c0 = 0;
        }
      }
      else {
        func_0x0001077516f0(&lStack_110,param_3);
        func_0x000107262398(auStack_d0,&lStack_110,0x1138369c0);
        func_0x000107751714(&uStack_190,param_3);
        func_0x000107262398(&plStack_150,&uStack_190,0x1138369c0);
        if (lStack_5b0 != 0) {
          func_0x000107297fc8(&uStack_560);
          func_0x00010729c0b0(auStack_530,lStack_5b0 + 0x30);
          func_0x00010729c07c(&uStack_560,lStack_5b0);
          func_0x000107262f3c(&uStack_4f0,auStack_d0);
          pplVar13 = &plStack_150;
          func_0x000107262f3c(apuStack_4b8);
          plVar23 = (long *)(lStack_5b0 + 0x20);
          pplVar24 = *(long ***)(*plVar23 + 0x18);
          if (*(long ***)(CONCAT71(uStack_53f,bStack_540) + 0x10) < pplVar24) {
            func_0x0001072684ec(&bStack_540);
            func_0x000104c32780(CONCAT71(uStack_53f,bStack_540));
            pplVar13 = pplVar24;
          }
          func_0x000104c2db28();
          plStack_590 = plVar23;
          pplStack_588 = pplVar13;
          while (plStack_590 != (long *)0x0) {
            FUN_1073654b8(&lStack_580,&bStack_540,pplStack_588,pplStack_588 + 7);
            func_0x000104c2de10(&plStack_590);
          }
          if (iStack_1c0 == 1) {
            func_0x0001072f9968(&lStack_2b0,&uStack_560);
          }
          else {
            FUN_10746fd04(&lStack_2b0);
            func_0x0001072f9a20(&lStack_2b0,&uStack_560);
            iStack_1c0 = 1;
          }
          func_0x000107269e60(&uStack_560);
        }
        func_0x000104c2f714(&plStack_150);
        func_0x00010724b3d8(&uStack_190);
        func_0x00010747a828();
        func_0x00010747a84c();
      }
      func_0x000107267df4(&lStack_5b0);
      func_0x00010747ab38();
      func_0x000107751674();
      if ((char)uStack_520 == '\x01') {
        func_0x0001072692b0(&uStack_190,&uStack_560);
      }
      else {
        uStack_190 = 4;
      }
      func_0x00010726236c(&lStack_110,&uStack_190);
      func_0x000107262398(auStack_d0,&lStack_110,0x1138369c0);
      func_0x000104c2f1f0(auStack_358,auStack_d0);
      func_0x00010747a828();
      func_0x00010747a84c();
      func_0x000104c319e0(&uStack_190);
      func_0x00010737c444(&uStack_560);
      func_0x00010747ab38();
      func_0x0001077516f0();
      func_0x00010747a410();
      func_0x000104c2f1f0(auStack_320,&lStack_110);
      func_0x00010747a408();
      func_0x00010724b3d8(&uStack_560);
      func_0x00010747ab38();
      func_0x000107751714();
      func_0x00010747a410();
      func_0x000104c2f1f0(auStack_2e8,&lStack_110);
      func_0x00010747a408();
      func_0x00010724b3d8(&uStack_560);
      if ((long *)param_3[0x20] == (long *)0x0) {
        lVar8 = 0;
        uVar30 = 0;
      }
      else {
        (**(code **)(*(long *)param_3[0x20] + 0x20))(&lStack_110);
        lVar8 = lStack_110;
        uVar30 = uStack_108;
      }
      lStack_110 = 0;
      uStack_108 = 0;
      puStack_558 = (undefined8 *)uStack_1b0;
      uStack_560 = uStack_1b8;
      puVar18 = &uStack_560;
      uStack_1b8 = lVar8;
      uStack_1b0 = uVar30;
      FUN_10746fd90(&uStack_560);
      FUN_10746fd90(&lStack_110);
      uStack_1a8 = uVar25;
      func_0x000107295f10(auStack_1a0,param_3 + 0x21);
      plVar23 = *(long **)(lStack_5e0 + 0x28);
      uStack_560 = *(ulong *)(unaff_x19 + 0x20);
      puStack_550 = puStack_5b8;
      puStack_558 = puStack_5c0;
      if (puStack_5b8 != (undefined8 *)0x0) {
        do {
          func_0x000107479b20();
        } while (extraout_w10_00 != 0);
      }
      FUN_10746fbd8(auStack_548,auStack_358);
      func_0x000107473900(auStack_380,unaff_x19 + 0x30);
      (**(code **)(*plVar23 + 0x18))(&plStack_590,plVar23,&uStack_560);
      func_0x000107470b30(&uStack_560);
      FUN_107469964(&puStack_5f0,plStack_590,param_3[0x1d],param_3[0x1e]);
      func_0x0001077522e8(&uStack_190,param_3 + 0x2f);
      if (iStack_180 == 0) {
        plVar23 = (long *)CONCAT44(uStack_18c,uStack_190);
        if ((plVar23 == (long *)0x0) || (puVar18 = (ulong *)param_3[0x1f], puVar18 == (ulong *)0x0))
        {
          uStack_560 = uStack_560 & 0xffffffffffffff00;
          bStack_540 = 0;
        }
        else {
          plVar21 = plVar23;
          (**(code **)(*plVar23 + 0x48))(plVar23);
          func_0x000107833d7c(&lStack_110,plVar23,puVar18,plVar21);
          func_0x000107470b64(&uStack_560,&lStack_110);
          func_0x000104c3365c(&lStack_110);
        }
      }
      else {
        func_0x000107470b80(&uStack_560,CONCAT44(uStack_18c,uStack_190));
      }
      uVar6 = (int)(bStack_540 - 1) < 0;
      if (bStack_540 == 1) {
        uVar6 = (int)uStack_560 + -7 < 0;
        if ((int)uStack_560 != 7) {
          uVar6 = (int)uStack_560 + -6 < 0;
          if ((int)uStack_560 == 6) {
            func_0x00010747a7a0(puStack_550,puStack_558,&lStack_110);
            goto LAB_10746b028;
          }
          puVar9 = puStack_558;
          puVar15 = puStack_550;
          if ((int)uStack_560 != 5) {
            puVar17 = puStack_558;
            if ((int)uStack_560 != 4) {
              if ((int)uStack_560 == 3) goto LAB_10746b3b4;
              if ((int)uStack_560 != 2) {
                uVar6 = (int)uStack_560 + -1 < 0;
                if (((int)uStack_560 != 1) ||
                   (uVar6 = (long)puStack_558 - (long)puStack_550 < 0, puStack_558 == puStack_550))
                goto LAB_10746af5c;
                puVar15 = (undefined8 *)puStack_558[1];
                puVar17 = (undefined8 *)*puStack_558;
              }
            }
            uVar6 = (long)puVar17 - (long)puVar15 < 0;
            if (puVar17 == puVar15) goto LAB_10746af5c;
            puVar9 = (undefined8 *)*puVar17;
            puVar15 = (undefined8 *)puVar17[1];
          }
LAB_10746b3b4:
          uVar6 = (long)puVar9 - (long)puVar15 < 0;
          if (puVar9 != puVar15) {
            func_0x00010747a7a0(puVar9[1],*puVar9,&lStack_580);
            goto LAB_10746b030;
          }
        }
LAB_10746af5c:
        cStack_570 = '\0';
        lStack_580 = (ulong)lStack_580._1_7_ << 8;
      }
      else {
        pbVar14 = (byte *)param_3[0x1f];
        if (pbVar14 == (byte *)0x0) {
          lStack_580 = (ulong)lStack_580._1_7_ << 8;
          cStack_570 = '\0';
        }
        else {
          dVar31 = (double)(uint)(0x2000 << (ulong)(*pbVar14 & 0x1f));
          dVar28 = (double)NEON_ucvtf((ulong)*(uint *)(pbVar14 + 4));
          dVar29 = (double)NEON_ucvtf((ulong)*(uint *)(pbVar14 + 8));
          dVar29 = ((180.0 - ((dVar29 * 8192.0 + 4096.0) * 360.0) / dVar31) * 3.141592653589793) /
                   180.0;
          _exp(dVar29);
          _atan();
          func_0x00010747a7a0(dVar29 * 114.59155902616465 + -90.0,
                              ((dVar28 * 8192.0 + 4096.0) * 360.0) / dVar31 + -180.0,&lStack_110);
LAB_10746b028:
          uStack_578 = uStack_108;
          lStack_580 = lStack_110;
LAB_10746b030:
          cStack_570 = '\x01';
        }
      }
      func_0x000107470b9c(&uStack_560);
      func_0x000107267df4(&uStack_190);
      uStack_5f8 = *param_3;
      uStack_608 = 0;
      uStack_600 = 0;
      puVar9 = puStack_5f0;
      func_0x0001077805c4(&lStack_110);
      func_0x00010747a33c();
      *puVar9 = &PTR_FUN_1109b3098;
      puVar9[1] = unaff_x21;
      puVar9[2] = &puStack_5f0;
      puVar9[3] = &lStack_580;
      puVar9[4] = &uStack_5f8;
      puVar9[5] = &lStack_5e0;
      puVar9[6] = &plStack_590;
      func_0x00010747a2c4();
      *puVar9 = &PTR_FUN_1109b3128;
      puVar9[1] = &uStack_608;
      lStack_5b0 = unaff_x19 + 0x178;
      puVar9[2] = &lStack_580;
      puVar9[3] = &uStack_5f8;
      uStack_5a8 = 1;
      func_0x000107279a5c();
      plVar23 = (long *)(unaff_x19 + 0x220);
      plVar21 = plVar23;
      func_0x000107476068(plVar23,&lStack_110);
      if (plVar21 == (long *)0x0) {
        func_0x00010747ab38();
        (*extraout_x9)();
        puVar1 = (ulong *)(unaff_x19 + 0x238);
        puVar10 = puVar1;
        func_0x00010726364c(puVar1,&lStack_110);
        puVar22 = *(ulong **)(unaff_x19 + 0x228);
        if (puVar22 != (ulong *)0x0) {
          uVar26 = (long)puVar22 - 1;
          uVar6 = (long)((ulong)puVar22 & uVar26) < 0;
          uVar7 = ((ulong)puVar22 & uVar26) == 0;
          bVar4 = false;
          if ((bool)uVar7) {
            puVar18 = (ulong *)(uVar26 & (ulong)puVar10);
          }
          else {
            func_0x00010747a5a8();
            if (bVar4) {
              func_0x00010747a3b4();
            }
          }
          plVar21 = *(long **)(*plVar23 + (long)puVar18 * 8);
          if (plVar21 != (long *)0x0) {
            do {
              while( true ) {
                plVar21 = (long *)*plVar21;
                if (plVar21 == (long *)0x0) goto LAB_10746b1c4;
                func_0x00010747a678();
                if (!(bool)uVar7) break;
                plVar11 = plVar21 + 2;
                func_0x000104c32db4(plVar11,&lStack_110);
                if (((ulong)plVar11 & 1) != 0) goto LAB_10746b4c4;
              }
              if (((ulong)puVar22 & uVar26) == 0) {
                puVar27 = (ulong *)((ulong)extraout_x8_01 & uVar26);
              }
              else {
                puVar27 = extraout_x8_01;
                if (puVar22 <= extraout_x8_01) {
                  func_0x00010747a39c();
                  puVar27 = extraout_x8_02;
                }
              }
              uVar6 = (long)puVar27 - (long)puVar18 < 0;
              uVar7 = 1;
            } while (puVar27 == puVar18);
          }
        }
LAB_10746b1c4:
        plVar21 = (long *)0x1b8;
        __Znwm();
        plVar11 = (long *)(unaff_x19 + 0x230);
        uStack_140 = 0;
        *plVar21 = 0;
        plVar21[1] = (long)puVar10;
        plStack_150 = plVar21;
        plStack_148 = plVar11;
        func_0x000104c2fe00(plVar21 + 2,&lStack_110);
        __ZNSt3__119__shared_mutex_baseC1Ev(plVar21 + 9);
        plVar21[0x1e] = 0;
        plVar21[0x1f] = 0;
        plVar21[0x20] = 0;
        func_0x000104c2f64c(plVar21 + 0x21);
        *(undefined8 *)((long)plVar21 + 0x199) = 0;
        *(undefined8 *)((long)plVar21 + 0x191) = 0;
        plVar21[0x30] = 0;
        plVar21[0x2f] = 0;
        plVar21[0x32] = 0;
        plVar21[0x31] = 0;
        plVar21[0x2c] = 0;
        plVar21[0x2b] = 0;
        plVar21[0x2e] = 0;
        plVar21[0x2d] = 0;
        plVar21[0x2a] = 0;
        plVar21[0x29] = 0;
        func_0x000107473514(plVar21 + 0x35);
        uStack_140 = CONCAT71(uStack_140._1_7_,1);
        func_0x00010747a138(*(undefined8 *)(unaff_x19 + 0x238));
        if ((puVar22 == (ulong *)0x0) || (func_0x00010747a1a8(), puVar27 = puVar18, (bool)uVar6)) {
          func_0x00010747a6d8();
          bVar5 = (ulong *)0x2 < puVar22;
          bVar4 = puVar22 == (ulong *)0x3;
          func_0x000107479aec();
          puVar27 = extraout_x8_03;
          if (!bVar5 || bVar4) {
            puVar27 = extraout_x9_00;
          }
          if ((long)puVar27 - 1U == 0) {
            puVar27 = (ulong *)0x2;
          }
          else if (((ulong)puVar27 & (long)puVar27 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
          }
          puVar22 = *(ulong **)(unaff_x19 + 0x228);
          if (puVar22 < puVar27) {
LAB_10746b29c:
            puVar22 = puVar27;
            if ((ulong)puVar22 >> 0x3d != 0) goto LAB_10746b6bc;
            lVar8 = (long)puVar22 << 3;
            __Znwm(lVar8);
            FUN_107476108(plVar23,lVar8);
            puVar27 = (ulong *)0x0;
            *(ulong **)(unaff_x19 + 0x228) = puVar22;
            lVar8 = *(long *)(unaff_x19 + 0x220);
            while (puVar22 != puVar27) {
              func_0x00010747a6cc();
              lVar8 = extraout_x8_04;
              puVar27 = extraout_x9_01;
            }
            plVar19 = (long *)*plVar11;
            if (plVar19 != (long *)0x0) {
              puVar27 = (ulong *)plVar19[1];
              uVar16 = (long)puVar22 - 1;
              uVar26 = 0;
              if (puVar22 != (ulong *)0x0) {
                uVar26 = (ulong)puVar27 / (ulong)puVar22;
              }
              puVar12 = puVar27;
              if (puVar22 <= puVar27) {
                puVar12 = (ulong *)((long)puVar27 - uVar26 * (long)puVar22);
              }
              if (((ulong)puVar22 & uVar16) == 0) {
                puVar12 = (ulong *)((ulong)puVar27 & uVar16);
              }
              *(long **)(lVar8 + (long)puVar12 * 8) = plVar11;
              while (plVar20 = plVar19, plVar19 = (long *)*plVar20, plVar19 != (long *)0x0) {
                puVar27 = (ulong *)plVar19[1];
                if (((ulong)puVar22 & uVar16) == 0) {
                  puVar27 = (ulong *)((ulong)puVar27 & uVar16);
                }
                else if (puVar22 <= puVar27) {
                  uVar26 = 0;
                  if (puVar22 != (ulong *)0x0) {
                    uVar26 = (ulong)puVar27 / (ulong)puVar22;
                  }
                  puVar27 = (ulong *)((long)puVar27 - uVar26 * (long)puVar22);
                }
                if (puVar27 != puVar12) {
                  if (*(long *)(lVar8 + (long)puVar27 * 8) == 0) {
                    *(long **)(lVar8 + (long)puVar27 * 8) = plVar20;
                    puVar12 = puVar27;
                  }
                  else {
                    *plVar20 = *plVar19;
                    func_0x000107479ba4();
                    lVar8 = extraout_x8_05;
                    uVar16 = extraout_x9_02;
                    plVar19 = extraout_x10;
                    puVar12 = extraout_x11;
                  }
                }
              }
            }
          }
          else if (puVar27 < puVar22) {
            puVar12 = (ulong *)(long)((float)*(ulong *)(unaff_x19 + 0x238) /
                                     *(float *)(unaff_x19 + 0x240));
            if ((puVar22 < (ulong *)0x3) || (((ulong)puVar22 & (long)puVar22 - 1U) != 0)) {
              __ZNSt3__112__next_primeEm();
            }
            else {
              func_0x000107479ab0();
            }
            if (puVar27 <= puVar12) {
              puVar27 = puVar12;
            }
            if (puVar27 < puVar22) {
              if (puVar27 != (ulong *)0x0) goto LAB_10746b29c;
              FUN_107476108(plVar23,0);
              puVar22 = (ulong *)0x0;
              *(undefined8 *)(unaff_x19 + 0x228) = 0;
            }
            else {
              puVar22 = *(ulong **)(unaff_x19 + 0x228);
            }
          }
          if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
            puVar27 = (ulong *)((long)puVar22 - 1U & (ulong)puVar10);
          }
          else {
            puVar27 = puVar10;
            if (puVar22 <= puVar10) {
              func_0x00010747a3b4();
              puVar27 = puVar18;
            }
          }
        }
        lVar8 = *plVar23;
        if (*(long *)(lVar8 + (long)puVar27 * 8) == 0) {
          *plVar21 = *plVar11;
          *plVar11 = (long)plVar21;
          *(long **)(lVar8 + (long)puVar27 * 8) = plVar11;
          if (*plVar21 != 0) {
            puVar18 = *(ulong **)(*plVar21 + 8);
            if (((ulong)puVar22 & (long)puVar22 - 1U) == 0) {
              puVar18 = (ulong *)((ulong)puVar18 & (long)puVar22 - 1U);
            }
            else if (puVar22 <= puVar18) {
              uVar26 = 0;
              if (puVar22 != (ulong *)0x0) {
                uVar26 = (ulong)puVar18 / (ulong)puVar22;
              }
              puVar18 = (ulong *)((long)puVar18 - uVar26 * (long)puVar22);
            }
            *(long **)(lVar8 + (long)puVar18 * 8) = plVar21;
          }
        }
        else {
          func_0x00010747a5e4();
        }
        plStack_150 = (long *)0x0;
        *puVar1 = *puVar1 + 1;
        FUN_107476120(&plStack_150);
LAB_10746b4c4:
        func_0x000100066230(plVar21 + 0x1e,apuStack_4b8);
        func_0x000104c2f1f0(plVar21 + 0x21,auStack_4a0);
        *(undefined4 *)(plVar21 + 0x28) = uStack_468;
        func_0x0001074714a8(plVar21 + 0x29,auStack_460);
        func_0x0001074714f0(plVar21 + 0x2c,auStack_448);
        lVar2 = lStack_428;
        lVar8 = lStack_430;
        lStack_430 = 0;
        lStack_428 = 0;
        plStack_148 = (long *)plVar21[0x30];
        plStack_150 = (long *)plVar21[0x2f];
        plVar21[0x30] = lVar2;
        plVar21[0x2f] = lVar8;
        func_0x00010747377c(&plStack_150);
        func_0x000107471484(plVar21 + 0x31,auStack_420);
        plVar21[0x33] = lStack_410;
        *(undefined1 *)(plVar21 + 0x34) = uStack_408;
        func_0x000107476154(plVar21 + 0x35,auStack_400);
        FUN_107472fbc(&uStack_560);
      }
      else {
        func_0x000107476190(puVar9,plVar21 + 9);
      }
      func_0x000107279ee0(&lStack_5b0);
      FUN_1074766a0(auStack_d0);
      func_0x0001074764b8(&uStack_190);
      func_0x00010747a408();
      func_0x0001072ab574(unaff_x19 + 0x2e8);
      puVar9 = puStack_5f0;
      func_0x0001077805c4(&uStack_560);
      uStack_524 = *(undefined4 *)(puStack_5f0 + 0x10);
      uStack_528 = 0;
      if (cStack_570 == '\x01') {
        uStack_108 = uStack_578;
        lStack_110 = lStack_580;
        puVar9 = &uStack_520;
        FUN_10740eff4(puVar9,&lStack_110,1);
      }
      else {
        uStack_520 = 0;
        uStack_518 = 0;
        uStack_510 = 0;
      }
      in_ZR = uStack_5f8._4_1_ == '\x01';
      if ((bool)in_ZR) {
        uStack_190 = (undefined4)uStack_5f8;
        puVar9 = &uStack_508;
        func_0x0001072f8f08(puVar9,&uStack_190,1);
      }
      else {
        uStack_508 = 0;
        uStack_500 = 0;
        uStack_4f8 = 0;
      }
      uStack_4f0 = CONCAT71(uStack_607,uStack_608);
      uStack_4e8 = uStack_600;
      pplStack_4d8 = pplStack_588;
      plStack_4e0 = plStack_590;
      if (pplStack_588 != (long **)0x0) {
        do {
          func_0x000107479b20();
        } while (extraout_w10_01 != 0);
      }
      lStack_4c8 = lStack_5e8;
      puStack_4d0 = puStack_5f0;
      if (lStack_5e8 != 0) {
        do {
          func_0x000107479b20();
        } while (extraout_w10_02 != 0);
      }
      uStack_4c0 = 1;
      __ZNSt3__16chrono12steady_clock3nowEv();
      apuStack_4b8[0] = puVar9;
      FUN_10746b934(*(undefined8 *)(unaff_x19 + 0x248),&uStack_560);
      FUN_107470bbc(unaff_x19 + 0x328,&uStack_560);
      func_0x0001077805c4(extraout_x8,puStack_5f0);
      func_0x00010747a4e4();
      func_0x00010747a310();
      func_0x0001074734f0(&puStack_5f0);
      func_0x0001074737a0(&plStack_590);
      func_0x00010746fdb4(auStack_358);
    }
    func_0x00010747a2e0();
  }
  func_0x000107473948(&puStack_5c0);
  func_0x000107479a9c(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10746b6bc:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10746b6c4);
  (*pcVar3)();
}



/* Entry: 10746b8fc; end: 10746b933;  */

void FUN_10746b8fc(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x000107479e30();
  if (extraout_x8 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  func_0x00010747a0f8();
  func_0x000107473948();
  return;
}



/* Entry: 10746b934; end: 10746ba6f;  */

void FUN_10746b934(void)

{
  int iVar1;
  long unaff_x20;
  undefined1 auStack_c0 [24];
  undefined4 auStack_a8 [6];
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  func_0x000107479cac();
  func_0x00010002b838(auStack_38,"");
  iVar1 = *(int *)(unaff_x20 + 0x38);
  if (iVar1 != 2) {
    if (iVar1 != 1) {
      if (iVar1 != 0) goto LAB_10746b99c;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
              (auStack_38,&UNK_10f4158b0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
            (auStack_38,&UNK_10f4158bc);
LAB_10746b99c:
  auStack_a8[0] = 0xe0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x000107479cb8();
  uStack_80 = 0;
  uStack_60 = 0;
  uStack_5c = 1;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c0,auStack_38);
  func_0x00010726e300(auStack_a8,&DAT_10f6389e8,auStack_c0);
  func_0x00010747a0e8();
  func_0x00010747a334();
  func_0x000107262330(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return;
}



/* Entry: 10746ba70; end: 10746bb6b;  */

void FUN_10746ba70(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lStack_58;
  undefined1 uStack_50;
  ulong auStack_40 [2];
  
  auStack_40[0] = 0;
  auStack_40[1] = 0;
  lStack_58 = param_2 + 0x358;
  uStack_50 = 1;
  func_0x00010724e404();
  lVar1 = *(long *)(param_2 + 0x158);
  FUN_107475f28(lVar1,param_3);
  if (lVar1 == 0) {
    func_0x00010747a430();
  }
  else {
    FUN_10746b8fc(auStack_40,lVar1 + 0x28);
  }
  func_0x00010724e49c(&lStack_58);
  if (lVar1 == 0) goto LAB_10746bb30;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&lStack_58,auStack_40[0])
  ;
  lVar1 = *(long *)(param_2 + 0x168);
  func_0x000107475fc8(lVar1,&lStack_58);
  if (lVar1 == 0) {
LAB_10746bb28:
    func_0x00010747a430();
  }
  else {
    uVar2 = auStack_40[0];
    func_0x000107780b4c();
    if (((uVar2 & 1) == 0) && (uVar3 = param_4, func_0x0001077515a0(), (int)uVar3 == 0))
    goto LAB_10746bb28;
    func_0x00010778021c(param_1,auStack_40[0],param_4);
  }
  func_0x000107479f38();
LAB_10746bb30:
  func_0x000107473948(auStack_40);
  return;
}



/* Entry: 10746bb6c; end: 10746bbb7;  */

void FUN_10746bb6c(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  func_0x000107479be0();
  __ZNSt3__119__shared_mutex_base11lock_sharedEv();
  lVar1 = *(long *)(param_2 + 0x148);
  uVar2 = *(undefined8 *)(param_2 + 0x140);
  param_1[1] = *(undefined8 *)(param_2 + 0x148);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  func_0x000100100f40(auStack_30);
  return;
}



/* Entry: 10746bbb8; end: 10746bbbf;  */

undefined1  [16] FUN_10746bbb8(long *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = ((undefined8 *)*param_1)[1];
  uStack_20 = *(undefined8 *)*param_1;
  func_0x000107262208(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10746bbc0; end: 10746bc67;  */

void FUN_10746bbc0(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_60;
  func_0x000107479cac();
  func_0x000107479adc();
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  uStack_28 = extraout_x8;
  FUN_10745f79c(auStack_60,puVar1,param_2 + 8);
  func_0x00010747a2c4();
  *puVar1 = &PTR_FUN_1109b31a8;
  puVar1[1] = auStack_60;
  puVar1[2] = unaff_x19;
  puVar1[3] = unaff_x20;
  puStack_30 = puVar1;
  FUN_10746bc68(unaff_x19 + 0x178,auStack_48);
  FUN_107476d38(auStack_48);
  func_0x00010726b264();
  func_0x000107479a9c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_107476d38(auStack_48);
  func_0x00010726b264(auStack_60);
  func_0x000107479c68();
  func_0x000107479ce4();
  func_0x000107479be0();
  func_0x000107279a5c();
  FUN_1074766d4(*(undefined8 *)(unaff_x20 + 0xb8),0,puVar2);
  func_0x000107479fcc();
  return;
}



/* Entry: 10746bc68; end: 10746bcab;  */

void FUN_10746bc68(void)

{
  long unaff_x20;
  
  func_0x000107479ce4();
  func_0x000107479be0();
  func_0x000107279a5c();
  FUN_1074766d4(*(undefined8 *)(unaff_x20 + 0xb8),0);
  func_0x000107479fcc();
  return;
}



/* Entry: 10746bcac; end: 10746bd17;  */

void FUN_10746bcac(undefined1 *param_1,long param_2,undefined8 param_3)

{
  func_0x000107479be0();
  func_0x00010724e404();
  param_2 = param_2 + 0xa8;
  FUN_107475624(param_2,param_3);
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[0x170] = 0;
  }
  else {
    FUN_1074756c8(param_1,param_2 + 0x48);
  }
  func_0x000107479f20();
  return;
}



/* Entry: 10746bd18; end: 10746e3ff;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10746bd18(undefined *******param_1,ulong param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined ********ppppppppuVar5;
  undefined ***pppuVar6;
  float fVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  long lVar14;
  undefined *******pppppppuVar15;
  undefined *****pppppuVar16;
  int *piVar17;
  undefined *******pppppppuVar18;
  long lVar19;
  undefined ********ppppppppuVar20;
  undefined *******pppppppuVar21;
  undefined4 extraout_w8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined ******ppppppuVar22;
  code *extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x8_07;
  undefined ********ppppppppuVar23;
  undefined ********extraout_x8_08;
  undefined ******ppppppuVar24;
  undefined ******extraout_x8_09;
  undefined *****extraout_x8_10;
  undefined ********extraout_x8_11;
  code *extraout_x8_12;
  undefined ******extraout_x8_13;
  undefined8 *extraout_x8_14;
  undefined ********ppppppppuVar25;
  undefined ***extraout_x9;
  undefined8 *puVar26;
  ulong uVar27;
  undefined *******extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  ulong uVar28;
  undefined ****ppppuVar29;
  undefined ***pppuVar30;
  ulong uVar31;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined ********ppppppppuVar32;
  undefined8 *puVar33;
  undefined ****extraout_x12;
  undefined *******pppppppuVar34;
  undefined *****pppppuVar35;
  undefined ********ppppppppuVar36;
  undefined ******ppppppuVar37;
  long lVar38;
  undefined ********ppppppppuVar39;
  uint uVar40;
  undefined *******pppppppuVar41;
  long *plVar42;
  undefined *******pppppppuVar43;
  undefined *******pppppppuVar44;
  undefined ***pppuVar45;
  long lVar46;
  ulong uVar47;
  float fVar48;
  undefined ******ppppppuVar49;
  undefined *******pppppppuVar50;
  undefined *****pppppuVar51;
  undefined ********ppppppppuVar52;
  undefined ******ppppppuVar53;
  undefined ******ppppppuVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined *******apppppppuStack_f58 [2];
  undefined1 auStack_f48 [24];
  long lStack_f30;
  ulong uStack_f28;
  ulong uStack_f20;
  undefined4 uStack_f14;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined4 uStack_ef0;
  undefined4 uStack_ee4;
  undefined *******pppppppuStack_ee0;
  undefined *******pppppppuStack_ed8;
  undefined8 uStack_ed0;
  undefined1 auStack_ec2 [2];
  undefined ******ppppppuStack_ec0;
  undefined ******ppppppuStack_eb8;
  undefined8 auStack_ea8 [5];
  undefined ********ppppppppuStack_e80;
  undefined ********ppppppppuStack_e78;
  undefined ********ppppppppuStack_e70;
  undefined ********ppppppppuStack_e60;
  undefined *****pppppuStack_e58;
  undefined1 uStack_e50;
  undefined *******pppppppuStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined4 uStack_e20;
  long lStack_e18;
  long lStack_e10;
  undefined1 auStack_e00 [8];
  undefined ******ppppppuStack_df8;
  undefined ******ppppppuStack_df0;
  undefined ******ppppppuStack_de8;
  undefined ********ppppppppuStack_de0;
  undefined *****pppppuStack_dd8;
  undefined *******pppppppuStack_dd0;
  ulong uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined *******pppppppuStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined *puStack_d90;
  long lStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  long lStack_d58;
  undefined4 uStack_d50;
  long lStack_d40;
  undefined ********ppppppppuStack_d38;
  undefined ********ppppppppuStack_d30;
  long lStack_d28;
  undefined4 uStack_d20;
  long lStack_d10;
  undefined ******ppppppuStack_d08;
  undefined *******pppppppuStack_d00;
  undefined *****pppppuStack_cf8;
  undefined4 uStack_cf0;
  undefined ****ppppuStack_ce0;
  undefined ****ppppuStack_cd8;
  undefined ****ppppuStack_cd0;
  undefined ******ppppppuStack_cc0;
  undefined ******ppppppuStack_cb8;
  undefined ********ppppppppuStack_cb0;
  undefined ********ppppppppuStack_ca8;
  undefined ********ppppppppuStack_ca0;
  undefined ********ppppppppuStack_c98;
  undefined1 uStack_c90;
  undefined *****pppppuStack_c88;
  undefined *****pppppuStack_c80;
  undefined *****pppppuStack_c78;
  undefined ****ppppuStack_c70;
  undefined8 uStack_c68;
  undefined *******pppppppuStack_b70;
  undefined *******pppppppuStack_b68;
  undefined *******pppppppuStack_b60;
  undefined1 auStack_ac8 [176];
  char cStack_a18;
  byte bStack_a00;
  undefined *******pppppppuStack_9f8;
  long *plStack_9f0;
  undefined *******pppppppuStack_9e8;
  undefined1 auStack_9e0 [368];
  uint uStack_870;
  undefined1 uStack_86c;
  undefined1 auStack_868 [168];
  undefined *******pppppppuStack_7c0;
  undefined ********ppppppppuStack_7b8;
  undefined ***pppuStack_7b0;
  undefined ***pppuStack_7a8;
  undefined ***pppuStack_7a0;
  undefined ***pppuStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined4 uStack_778;
  undefined1 uStack_774;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined ***pppuStack_620;
  undefined1 auStack_618 [168];
  undefined1 auStack_570 [24];
  undefined ****ppppuStack_558;
  undefined *******pppppppuStack_550;
  undefined *******pppppppuStack_548;
  undefined *******pppppppuStack_540;
  undefined *******pppppppuStack_538;
  undefined1 auStack_530 [24];
  undefined1 uStack_518;
  undefined1 auStack_510 [24];
  undefined1 uStack_4f8;
  undefined1 uStack_4f0;
  undefined1 uStack_4b8;
  undefined4 uStack_4b0;
  undefined1 uStack_4ac;
  undefined1 auStack_4a8 [56];
  undefined ********ppppppppuStack_470;
  undefined *****pppppuStack_468;
  undefined ****ppppuStack_458;
  undefined ********ppppppppuStack_430;
  undefined *****pppppuStack_428;
  undefined *****pppppuStack_420;
  undefined1 uStack_418;
  undefined8 uStack_408;
  undefined ********ppppppppuStack_3e0;
  undefined ********ppppppppuStack_3d8;
  undefined ********ppppppppuStack_3d0;
  undefined ********ppppppppuStack_3c8;
  undefined ********ppppppppuStack_3c0;
  undefined *****pppppuStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_398;
  undefined1 uStack_394;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined ********ppppppppuStack_1b8;
  undefined ***pppuStack_1b0;
  undefined ***pppuStack_1a8;
  undefined ***pppuStack_1a0;
  undefined ***pppuStack_198;
  undefined4 uStack_190;
  undefined1 auStack_188 [56];
  undefined1 auStack_150 [168];
  undefined8 uStack_a8;
  
  func_0x00010747a738();
  pppppppuVar43 = param_1;
  func_0x000107479adc();
  pppuStack_7a8 = (undefined ***)0x0;
  pppuStack_7b0 = (undefined ***)0x0;
  ppppppppuStack_7b8 = (undefined ********)0x0;
  pppppppuStack_7c0 = (undefined *******)0x0;
  ppppppppuStack_3c8 = (undefined ********)&ppppppppuStack_3e0;
  pppuStack_7a0 = (undefined ***)CONCAT44(pppuStack_7a0._4_4_,0x3f800000);
  pppppppuStack_550 = (undefined *******)0x0;
  ppppppppuStack_3d8 = &pppppppuStack_550;
  ppppppppuStack_3e0 = (undefined ********)&PTR_FUN_1109b3250;
  ppppppppuStack_3d0 = &pppppppuStack_7c0;
  pppppppuVar43 = pppppppuVar43 + 0x2f;
  plStack_9f0 = (long *)CONCAT71(plStack_9f0._1_7_,1);
  pppppppuStack_9f8 = pppppppuVar43;
  uStack_a8 = extraout_x8;
  func_0x00010724e404();
  pppppppuVar34 = param_1 + 0x46;
  while (pppppppuVar34 = (undefined *******)*pppppppuVar34, pppppppuVar34 != (undefined *******)0x0)
  {
    if (ppppppppuStack_3c8 == (undefined ********)0x0) {
      func_0x000104bfeb48();
      goto LAB_10746ddb0;
    }
    func_0x00010747a260();
    (*extraout_x8_00)();
  }
  func_0x00010724e49c(&pppppppuStack_9f8);
  func_0x000107477480(&ppppppppuStack_3e0);
  ppppppuVar37 = param_1[0x49];
  ppppppppuStack_3e0 = (undefined ********)CONCAT44(ppppppppuStack_3e0._4_4_,0xdb);
  ppppppppuStack_3c8 = (undefined ********)((ulong)ppppppppuStack_3c8 & 0xffffffff00000000);
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  pppppuStack_3b8 = (undefined *****)0x0;
  ppppppppuStack_3c0 = (undefined ********)&PTR_DAT_110996720;
  uStack_3a0 = 0xdb;
  uStack_398 = 1;
  uStack_394 = 1;
  func_0x00010747a024();
  pppppppuStack_9f8 = pppppppuStack_550;
  plStack_9f0 = (long *)CONCAT44(plStack_9f0._4_4_,3);
  pppppppuStack_b70 = (undefined *******)*ppppppuVar37;
  pppppppuStack_b68 = (undefined *******)CONCAT44(pppppppuStack_b68._4_4_,3);
  func_0x000107479c90();
  func_0x000107479db8();
  pppuVar45 = (undefined ***)&pppuStack_7b0;
  while (pppuVar45 = (undefined ***)*pppuVar45, pppuVar45 != (undefined ***)0x0) {
    ppppppppuStack_3e0 = (undefined ********)CONCAT44(ppppppppuStack_3e0._4_4_,0xdc);
    ppppppppuStack_3c8 = (undefined ********)((ulong)ppppppppuStack_3c8 & 0xffffffff00000000);
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    pppppuStack_3b8 = (undefined *****)0x0;
    ppppppppuStack_3c0 = (undefined ********)&PTR_DAT_110996720;
    uStack_3a0 = 0xdc;
    uStack_398 = 1;
    uStack_394 = 1;
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_390 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&pppppppuStack_9f8,pppuVar45 + 2);
    func_0x00010726e300(&ppppppppuStack_3e0,&DAT_10f6389e8,&pppppppuStack_9f8);
    pppppppuStack_b70 = (undefined *******)pppuVar45[5];
    pppppppuStack_b68 = (undefined *******)CONCAT44(pppppppuStack_b68._4_4_,3);
    pppppuStack_c78 = *ppppppuVar37;
    ppppuStack_c70 = (undefined ****)CONCAT44(ppppuStack_c70._4_4_,3);
    func_0x000107479c90();
    func_0x00010747a3d8();
    func_0x000107479db8();
  }
  FUN_1074597cc(&pppppppuStack_7c0);
  pppppppuStack_ee0 = (undefined *******)0x0;
  pppppppuStack_ed8 = (undefined *******)0x0;
  uStack_ed0 = 0;
  func_0x0001072ab574(param_1 + 0x5d);
  pppppppuVar44 = (undefined *******)0x0;
  pppppppuVar41 = (undefined *******)0x0;
  ppppppuVar37 = (undefined ******)0x0;
  ppppppuVar53 = param_1[0x80];
  ppppppuVar54 = param_1[0x81];
  fVar55 = *(float *)(param_1 + 0x82);
  pppppppuVar34 = param_1 + 0x65;
  pppppppuStack_b68 = (undefined *******)0x0;
  pppppppuStack_b70 = (undefined *******)0x0;
  pppppppuStack_b60 = (undefined *******)0x0;
  pppppppuVar21 = (undefined *******)0x0;
  while( true ) {
    puVar4 = PTR___ZSt7nothrow_1103469d8;
    ppppppuVar22 = param_1[0x65];
    if ((undefined ******)(((long)param_1[0x66] - (long)ppppppuVar22) / 0xb0) <= ppppppuVar37)
    break;
    pppppuVar16 = ppppppuVar22[(long)ppppppuVar37 * 0x16 + 8];
    ppppppuVar49 = (undefined ******)0x7fefffffffffffff;
    while (ppppppuVar24 = ppppppuVar49, pppppuVar16 != ppppppuVar22[(long)ppppppuVar37 * 0x16 + 9])
    {
      pppppuVar51 = pppppuVar16 + 2;
      ppppppuVar49 = (undefined ******)
                     (((double)ppppppuVar54 - (double)pppppuVar16[1]) *
                      ((double)ppppppuVar54 - (double)pppppuVar16[1]) +
                     ((double)ppppppuVar53 - (double)*pppppuVar16) *
                     ((double)ppppppuVar53 - (double)*pppppuVar16));
      pppppuVar16 = pppppuVar51;
      if ((double)ppppppuVar24 <= (double)ppppppuVar49) {
        ppppppuVar49 = ppppppuVar24;
      }
    }
    pppppuVar16 = ppppppuVar22[(long)ppppppuVar37 * 0x16 + 0xb];
    fVar7 = INFINITY;
    while (fVar56 = fVar7, pppppuVar16 != ppppppuVar22[(long)ppppppuVar37 * 0x16 + 0xc]) {
      pppppuVar51 = (undefined *****)((long)pppppuVar16 + 4);
      fVar48 = *(float *)pppppuVar16;
      pppppuVar16 = pppppuVar51;
      fVar7 = ABS(fVar55 - fVar48);
      if (fVar56 <= ABS(fVar55 - fVar48)) {
        fVar7 = fVar56;
      }
    }
    uVar1 = *(undefined4 *)((long)ppppppuVar22 + (long)ppppppuVar37 * 0xb0 + 0x3c);
    ppppppuVar22 = (undefined ******)ppppppuVar22[(long)ppppppuVar37 * 0x16 + 0x15];
    if (pppppppuVar41 < pppppppuVar44) {
      *pppppppuVar41 = ppppppuVar37;
      *(undefined4 *)(pppppppuVar41 + 1) = uVar1;
      pppppppuVar41[2] = ppppppuVar24;
      *(float *)(pppppppuVar41 + 3) = fVar56;
      pppppppuVar41[4] = ppppppuVar22;
      pppppppuVar18 = pppppppuVar21;
    }
    else {
      lVar38 = (long)pppppppuVar41 - (long)pppppppuVar21;
      uVar47 = lVar38 / 0x28 + 1;
      if (0x666666666666666 < uVar47) {
        func_0x00010747a604();
        FUN_107473284();
        goto LAB_10746ddb0;
      }
      uVar31 = ((long)pppppppuVar44 - (long)pppppppuVar21) / 0x28;
      uVar28 = uVar31 * 2;
      if (uVar28 < uVar47 || uVar28 - uVar47 == 0) {
        uVar28 = uVar47;
      }
      if (0x333333333333332 < uVar31) {
        uVar28 = 0x666666666666666;
      }
      if (0x666666666666666 < uVar28) {
        func_0x00010747a604();
        func_0x000104bd35f4();
        goto LAB_10746ddb0;
      }
      lVar14 = uVar28 * 0x28;
      __Znwm();
      pppppppuVar41 = (undefined *******)(lVar14 + lVar38);
      pppppppuVar44 = (undefined *******)(lVar14 + uVar28 * 0x28);
      *pppppppuVar41 = ppppppuVar37;
      *(undefined4 *)(pppppppuVar41 + 1) = uVar1;
      pppppppuVar41[2] = ppppppuVar24;
      *(float *)(pppppppuVar41 + 3) = fVar56;
      pppppppuVar41[4] = ppppppuVar22;
      pppppppuVar18 = pppppppuVar41 + (lVar38 / -0x28) * 5;
      _memcpy(pppppppuVar18,pppppppuVar21,lVar38);
      if (pppppppuVar21 != (undefined *******)0x0) {
        func_0x00010747a4b4();
      }
    }
    pppppppuVar41 = pppppppuVar41 + 5;
    ppppppuVar37 = (undefined ******)((long)ppppppuVar37 + 1);
    pppppppuVar21 = pppppppuVar18;
  }
  ppppppppuStack_3d8 = (undefined ********)0x0;
  ppppppppuStack_3e0 = (undefined ********)0x0;
  ppppppppuVar25 = (undefined ********)(((long)pppppppuVar41 - (long)pppppppuVar21) / 0x28);
  ppppppppuVar39 = ppppppppuVar25;
  pppppppuStack_b70 = pppppppuVar21;
  pppppppuStack_b68 = pppppppuVar41;
  pppppppuStack_b60 = pppppppuVar44;
  if ((long)pppppppuVar41 - (long)pppppppuVar21 < 0x1401) {
    ppppppppuVar39 = (undefined ********)0x0;
  }
  else {
    for (; ppppppppuVar39 != (undefined ********)0x0;
        ppppppppuVar39 = (undefined ********)((ulong)ppppppppuVar39 >> 1)) {
      lVar38 = (long)ppppppppuVar39 * 0x28;
      __ZnwmRKSt9nothrow_t(lVar38,puVar4);
      if (lVar38 != 0) goto LAB_10746c104;
    }
    lVar38 = 0;
LAB_10746c104:
    pppppppuStack_7c0 = (undefined *******)0x0;
    ppppppppuStack_7b8 = ppppppppuVar39;
    FUN_107479248(&ppppppppuStack_3e0,lVar38);
    ppppppppuStack_3d8 = ppppppppuVar39;
    func_0x000107478ff0(&pppppppuStack_7c0);
  }
  FUN_107479010(pppppppuVar21,pppppppuVar41,ppppppppuVar25,ppppppppuStack_3e0,ppppppppuVar39);
  func_0x000107478ff0(&ppppppppuStack_3e0);
  pppuStack_7a8 = (undefined ***)0x0;
  pppuStack_7b0 = (undefined ***)0x0;
  ppppppppuStack_7b8 = (undefined ********)0x0;
  pppppppuStack_7c0 = (undefined *******)0x0;
  pppuStack_7a0 = (undefined ***)CONCAT44(pppuStack_7a0._4_4_,0x3f800000);
  uStack_c68 = 0;
  ppppuStack_c70 = (undefined ****)0x0;
  pppppppuStack_540 = (undefined *******)0x0;
  pppppppuStack_550 = (undefined *******)0x0;
  pppppppuStack_548 = (undefined *******)0x0;
  pppppuStack_c78 = &ppppuStack_c70;
  for (; pppppppuVar21 != pppppppuVar41; pppppppuVar21 = pppppppuVar21 + 5) {
    ppppppuVar37 = *pppppppuVar34 + (long)*pppppppuVar21 * 0x16;
    func_0x00010724ef84(&pppppppuStack_9f8,ppppppuVar37);
    pppppuVar16 = &ppppuStack_c70;
    pppppuVar51 = &ppppuStack_c70;
    if (*(int *)(ppppppuVar37 + 7) - 1U < 2) {
      pppppppuVar44 = (undefined *******)&pppppppuStack_7c0;
      func_0x0001072d2e68(pppppppuVar44,&pppppppuStack_9f8);
      if (((ulong)pppppppuVar44 & 1) != 0) goto LAB_10746c228;
      func_0x0001004c3c6c(&pppppppuStack_7c0,&pppppppuStack_9f8);
      pppppppuVar18 = pppppppuStack_548;
      pppppppuVar44 = pppppppuStack_550;
      func_0x00010747a7f8();
      ppppppppuStack_3c8 = (undefined ********)(((long)pppppppuVar18 - (long)pppppppuVar44) / 0xb0);
      func_0x00010747a974();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppppuStack_3e0);
      func_0x00010747a968();
    }
    else {
LAB_10746c228:
      while (pppppuVar35 = (undefined *****)*pppppuVar16, pppppuVar35 != (undefined *****)0x0) {
        pppppuVar16 = pppppuVar35 + 4;
        func_0x000100125af4(pppppuVar16,&pppppppuStack_9f8);
        bVar9 = -1 < (char)pppppuVar16;
        lVar38 = 8;
        if (bVar9) {
          lVar38 = 0;
        }
        pppppuVar16 = (undefined *****)((long)pppppuVar35 + lVar38);
        if (bVar9) {
          pppppuVar51 = pppppuVar35;
        }
      }
      if (&ppppuStack_c70 != pppppuVar51) {
        pppppppuVar44 = (undefined *******)&pppppppuStack_9f8;
        func_0x000100125af4(pppppppuVar44,pppppuVar51 + 4);
        pppppppuVar18 = pppppppuStack_550;
        if (((uint)pppppppuVar44 >> 7 & 1) == 0) {
          pppppuVar16 = ppppppuVar37[8];
          pppppuVar35 = ppppppuVar37[9];
          lVar38 = (long)pppppuVar35 - (long)pppppuVar16;
          if (0 < lVar38 >> 4) {
            ppppuVar29 = pppppuVar51[7];
            pppppppuVar44 = pppppppuStack_550 + (long)ppppuVar29 * 0x16 + 8;
            ppppppuVar37 = pppppppuStack_550[(long)ppppuVar29 * 0x16 + 9];
            pppppppuVar50 = pppppppuStack_550 + (long)ppppuVar29 * 0x16 + 10;
            if ((long)*pppppppuVar50 - (long)ppppppuVar37 < lVar38) {
              pppppppuVar15 = pppppppuVar44;
              func_0x00010725aeb4(pppppppuVar44,
                                  (lVar38 >> 4) + ((long)ppppppuVar37 - (long)*pppppppuVar44 >> 4));
              func_0x00010725ad0c(&ppppppppuStack_3e0,pppppppuVar15,
                                  (long)ppppppuVar37 - (long)*pppppppuVar44 >> 4,pppppppuVar50);
              lVar14 = (long)ppppppppuStack_3d0 + lVar38;
              for (; lVar38 != 0; lVar38 = lVar38 + -0x10) {
                pppppppuVar50 = (undefined *******)*pppppuVar16;
                ppppppppuStack_3d0[1] = (undefined *******)pppppuVar16[1];
                *ppppppppuStack_3d0 = pppppppuVar50;
                pppppuVar16 = pppppuVar16 + 2;
                ppppppppuStack_3d0 = ppppppppuStack_3d0 + 2;
              }
              ppppppppuStack_3d0 = (undefined ********)lVar14;
              _memcpy(lVar14,ppppppuVar37,
                      (long)pppppppuVar18[(long)ppppuVar29 * 0x16 + 9] - (long)ppppppuVar37);
              ppppppppuStack_3d0 =
                   (undefined ********)
                   ((long)pppppppuVar18[(long)ppppuVar29 * 0x16 + 9] +
                   ((long)ppppppppuStack_3d0 - (long)ppppppuVar37));
              pppppppuVar18[(long)ppppuVar29 * 0x16 + 9] = ppppppuVar37;
              ppppppuVar37 = (undefined ******)
                             ((long)ppppppppuStack_3d8 - ((long)ppppppuVar37 - (long)*pppppppuVar44)
                             );
              _memcpy(ppppppuVar37);
              ppppppppuStack_3e0 = (undefined ********)*pppppppuVar44;
              *pppppppuVar44 = ppppppuVar37;
              pppppppuVar18[(long)ppppuVar29 * 0x16 + 9] = (undefined ******)ppppppppuStack_3d0;
              ppppppppuVar25 = (undefined ********)pppppppuVar18[(long)ppppuVar29 * 0x16 + 10];
              pppppppuVar18[(long)ppppuVar29 * 0x16 + 10] = (undefined ******)ppppppppuStack_3c8;
              ppppppppuStack_3d8 = ppppppppuStack_3e0;
              ppppppppuStack_3d0 = ppppppppuStack_3e0;
              ppppppppuStack_3c8 = ppppppppuVar25;
              func_0x00010725ad94(&ppppppppuStack_3e0);
            }
            else {
              for (; pppppuVar16 != pppppuVar35; pppppuVar16 = pppppuVar16 + 2) {
                pppppuVar51 = (undefined *****)*pppppuVar16;
                ppppppuVar37[1] = (undefined *****)pppppuVar16[1];
                *ppppppuVar37 = pppppuVar51;
                ppppppuVar37 = ppppppuVar37 + 2;
              }
              pppppppuStack_550[(long)ppppuVar29 * 0x16 + 9] = ppppppuVar37;
            }
          }
          goto LAB_10746c380;
        }
      }
      pppppppuVar18 = pppppppuStack_548;
      pppppppuVar44 = pppppppuStack_550;
      func_0x00010747a7f8();
      ppppppppuStack_3c8 = (undefined ********)(((long)pppppppuVar18 - (long)pppppppuVar44) / 0xb0);
      func_0x00010747a974();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppppuStack_3e0);
      func_0x00010747a968();
    }
LAB_10746c380:
    func_0x00010747a3d8();
  }
  FUN_107479a04(ppppuStack_c70);
  func_0x0001005d0538(&pppppppuStack_7c0);
  FUN_10746f420(&pppppppuStack_b70);
  if (pppppppuStack_ee0 != (undefined *******)0x0) {
    FUN_10746e400(&pppppppuStack_ee0);
    __ZdlPv(pppppppuStack_ee0);
  }
  pppppppuStack_ed8 = pppppppuStack_548;
  pppppppuStack_ee0 = pppppppuStack_550;
  uStack_ed0 = pppppppuStack_540;
  pppppppuStack_540 = (undefined *******)0x0;
  pppppppuStack_548 = (undefined *******)0x0;
  pppppppuStack_550 = (undefined *******)0x0;
  func_0x000107470964(&pppppppuStack_550);
  FUN_10746e400(pppppppuVar34);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x5d);
  ppppppuVar53 = param_1[0x69];
  for (ppppppuVar37 = param_1[0x68]; ppppppuVar37 != ppppppuVar53; ppppppuVar37 = ppppppuVar37 + 2)
  {
    iVar13 = (int)*ppppppuVar37;
    FUN_107469de8();
    ppppppuVar54 = ppppppuVar37;
    if (iVar13 != 0) goto LAB_10746c434;
  }
LAB_10746c480:
  if (pppppppuStack_ee0 == pppppppuStack_ed8) {
    lVar38 = 0;
    lVar14 = (long)param_1[0x69] - (long)param_1[0x68];
    uVar10 = 1;
    goto LAB_10746dd2c;
  }
  pppppppuStack_7c0 = (undefined *******)CONCAT44(pppppppuStack_7c0._4_4_,0xd6);
  pppuStack_7a8 = (undefined ***)((ulong)pppuStack_7a8 & 0xffffffff00000000);
  uStack_788 = 0;
  uStack_790 = 0;
  func_0x000107479cb8();
  pppuStack_798 = (undefined ***)0x0;
  uStack_778 = 1;
  uStack_774 = 1;
  uStack_760 = 0;
  uStack_770 = 0;
  uStack_768 = 0;
  pppuStack_7a0 = extraout_x9;
  FUN_10743cc34(&ppppppppuStack_3e0,&pppppppuStack_7c0,7);
  FUN_10743d7bc(&pppppuStack_c78,&ppppppppuStack_3e0);
  func_0x000107288cd8(&ppppppppuStack_3e0);
  func_0x000107262330(&pppppppuStack_7c0);
  uStack_ee4 = 0;
  uVar28 = ((long)pppppppuStack_ed8 - (long)pppppppuStack_ee0) / 0xb0;
  uStack_f08 = 0;
  uStack_f10 = 0;
  uStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_ef0 = 0x3f800000;
  uVar47 = uVar28;
  if ((param_2 & 0x100000000) != 0) {
    uVar47 = param_2;
  }
  uStack_f14 = (undefined4)uVar47;
  lStack_f30 = 0;
  uStack_f28 = 0;
  uStack_f20 = 0;
  FUN_10745f750(auStack_f48,param_1[5]);
  ppppppppuVar25 = apppppppuStack_f58;
  FUN_1073dd510(ppppppppuVar25,param_1[0x25] + 0xe);
  pppppppuVar41 = pppppppuStack_ed8;
  puVar26 = (undefined8 *)((ulong)&ppppppppuStack_3e0 | 8);
  for (pppppppuVar21 = pppppppuStack_ee0; uVar1 = uStack_ee4, pppppppuVar21 != pppppppuVar41;
      pppppppuVar21 = pppppppuVar21 + 0x16) {
    auStack_ec2 = (undefined1  [2])0x0;
    func_0x00010747a33c();
    *ppppppppuVar25 = (undefined *******)&PTR_FUN_1109b2a90;
    ppppppppuVar25[1] = (undefined *******)&uStack_ee4;
    ppppppppuVar25[2] = (undefined *******)&uStack_f14;
    ppppppppuVar25[3] = (undefined *******)auStack_ec2;
    ppppppppuVar25[4] = param_1;
    ppppppppuVar25[5] = pppppppuVar21;
    ppppppppuVar25[6] = (undefined *******)(auStack_ec2 + 1);
    ppppppppuStack_3c8 = ppppppppuVar25;
    FUN_10746e9d4(&pppppppuStack_b70,pppppppuVar43,pppppppuVar21,&ppppppppuStack_3e0);
    FUN_1074766a0(&ppppppppuStack_3e0);
    uVar47 = uStack_f28;
    if (auStack_ec2[0] == '\x01') {
      if (uStack_f28 < uStack_f20) {
        FUN_107471200(uStack_f28,pppppppuVar21);
        uStack_f28 = uVar47 + 0xb0;
      }
      else {
        plVar42 = &lStack_f30;
        FUN_107470cc4(plVar42,(long)(uStack_f28 - lStack_f30) / 0xb0 + 1);
        FUN_107470d74(&ppppppppuStack_3e0,plVar42,(long)(uStack_f28 - lStack_f30) / 0xb0,&uStack_f20
                     );
        FUN_107471200(ppppppppuStack_3d0,pppppppuVar21);
        ppppppppuStack_3d0 = ppppppppuStack_3d0 + 0x16;
        FUN_107470d24(&lStack_f30,&ppppppppuStack_3e0);
        uVar47 = uStack_f28;
        func_0x00010747a3d0();
        uStack_f28 = uVar47;
      }
    }
    else if ((((ushort)auStack_ec2 & 0x100) == 0) && ((bStack_a00 & 1) != 0)) {
      *(int *)(param_1 + 0x83) = *(int *)(param_1 + 0x83) + 1;
      piVar17 = (int *)&uStack_f10;
      func_0x000100168428(piVar17,auStack_ac8);
      *piVar17 = *piVar17 + 1;
      if ((bStack_a00 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_10746ddb0;
      }
      ppppppuVar37 = pppppppuVar21[0xe];
      ppppppuVar53 = pppppppuVar21[0xf];
      if (*(char *)(pppppppuVar21 + 0x14) == '\x01') {
        ppppppuStack_de8 = pppppppuVar21[0x13];
        ppppppuStack_df0 = pppppppuVar21[0x12];
        if (pppppppuVar21[0x13] != (undefined ******)0x0) {
          do {
            func_0x000107479b20();
          } while (extraout_w10 != 0);
        }
      }
      else {
        FUN_10746bb6c(&ppppppppuStack_3e0,&pppppppuStack_b70);
        FUN_107469964(&ppppppuStack_df0,ppppppppuStack_3e0,auStack_f48,apppppppuStack_f58);
        func_0x0001074737a0(&ppppppppuStack_3e0);
      }
      func_0x0001077805c4(auStack_4a8);
      ppppppuVar54 = param_1[0x25];
      FUN_10747b8dc(ppppppuVar54,auStack_4a8);
      ppppppuStack_df8 = ppppppuVar54;
      if (cStack_a18 == '\x01') {
        uVar40 = 0;
LAB_10746c7dc:
        __ZNSt3__16chrono12steady_clock3nowEv();
        func_0x000107479dc0(pppppppuVar21[0x15]);
        ppppppuVar37 = param_1[0x49];
        FUN_10746bb6c(&pppppppuStack_550,&pppppppuStack_b70);
        FUN_10746ea64(&ppppppppuStack_3e0,0xda,pppppppuStack_550[2],auStack_ac8);
        ppppppppuStack_430 = (undefined ********)*param_1[0x49];
        pppppuStack_428 = (undefined *****)CONCAT44(pppppuStack_428._4_4_,3);
        func_0x00010747a0f0(ppppppuVar37,&ppppppppuStack_3e0,auStack_e00,&ppppppppuStack_430);
        func_0x000107479db8();
        func_0x0001074737a0(&pppppppuStack_550);
        plVar42 = &lStack_e18;
        FUN_10746eb20(plVar42,&pppppppuStack_b70);
        __ZNSt3__16chrono12steady_clock3nowEv();
        uStack_e38 = 0;
        pppppppuStack_e40 = (undefined *******)0x0;
        uStack_e28 = 0;
        uStack_e30 = 0;
        uStack_e20 = 0x3f800000;
        ppppppppuStack_3d8 = (undefined ********)CONCAT71(ppppppppuStack_3d8._1_7_,1);
        ppppppppuStack_3e0 = (undefined ********)pppppppuVar43;
        func_0x00010724e404();
        ppppppuVar37 = param_1[0x47];
        func_0x00010724e49c(&ppppppppuStack_3e0);
        FUN_107372aa4(&pppppppuStack_e40,ppppppuVar37);
        ppppppppuStack_3e0 = (undefined ********)&PTR_FUN_1109b3360;
        ppppppppuStack_3d8 = &pppppppuStack_e40;
        ppppppppuStack_3c8 = (undefined ********)&ppppppppuStack_3e0;
        FUN_10746bc68(pppppppuVar43,&ppppppppuStack_3e0);
        FUN_107476d38(&ppppppppuStack_3e0);
        FUN_1073a471c(&pppppppuStack_550,&UNK_10f41588f);
        FUN_1073ae3fc(auStack_530,pppppppuVar21 + 0xb);
        uStack_518 = 1;
        FUN_1073658bc(auStack_510,pppppppuVar21 + 8);
        uStack_4f8 = 1;
        uStack_4f0 = 0;
        uStack_4b8 = 0;
        uStack_4b0 = *(undefined4 *)((long)pppppppuVar21 + 0x3c);
        uStack_4ac = 1;
        FUN_10746eb70(&ppppppppuStack_e80,param_1 + 0x85);
        ppppppuVar37 = param_1[0x25];
        ppppppuVar53 = param_1[0x26];
        ppppppppuVar25 = (undefined ********)param_1[0x49];
        func_0x0001072638b4(auStack_ea8,&pppppppuStack_e40);
        ppppppuStack_eb8 = param_1[3];
        ppppppuStack_ec0 = param_1[2];
        if (param_1[3] != (undefined ******)0x0) {
          do {
            func_0x000107479b20();
          } while (extraout_w10_00 != 0);
        }
        pppppppuStack_9f8 = (undefined *******)((ulong)pppppppuStack_9f8 & 0xffffffff00000000);
        plStack_9f0 = plVar42;
        pppppppuStack_9e8 = param_1;
        FUN_107472e90(auStack_9e0,&pppppppuStack_b70);
        uStack_86c = 1;
        uStack_870 = uVar40;
        FUN_1073ae318(auStack_868,&pppppppuStack_550);
        FUN_10746eb70(&pppppppuStack_7c0,param_1 + 0x85);
        FUN_107472e48(&pppuStack_7a8,&pppppppuStack_9f8);
        ppppuVar29 = (undefined ****)0x258;
        __Znwm();
        *ppppuVar29 = (undefined ***)&PTR_FUN_1109b33e0;
        ppppuVar29[2] = (undefined ***)ppppppppuStack_7b8;
        ppppuVar29[1] = (undefined ***)pppppppuStack_7c0;
        pppppppuStack_7c0 = (undefined *******)0x0;
        ppppppppuStack_7b8 = (undefined ********)0x0;
        ppppuVar29[3] = pppuStack_7b0;
        ppppuVar29[5] = pppuStack_7a0;
        ppppuVar29[4] = pppuStack_7a8;
        ppppuVar29[6] = pppuStack_798;
        FUN_107472e90(ppppuVar29 + 7,&uStack_790);
        ppppuVar29[0x35] = pppuStack_620;
        func_0x000107273e00(ppppuVar29 + 0x36,auStack_618);
        ppppuStack_cd8 = (undefined ****)0x0;
        ppppuStack_ce0 = (undefined ****)0x0;
        ppppuStack_cd0 = (undefined ****)0x0;
        ppppppuStack_d08 = (undefined ******)0x0;
        lStack_d10 = 0;
        pppppuStack_cf8 = (undefined *****)0x0;
        pppppppuStack_d00 = (undefined *******)0x0;
        uStack_cf0 = 0x3f800000;
        ppppppppuStack_d38 = (undefined ********)0x0;
        lStack_d40 = 0;
        lStack_d28 = 0;
        ppppppppuStack_d30 = (undefined ********)0x0;
        uStack_d20 = 0x3f800000;
        ppppuStack_558 = ppppuVar29;
        FUN_1073de554(&lStack_d40,(long)(float)(ulong)((lStack_e10 - lStack_e18) / 0x88));
        ppppppppuVar20 = (undefined ********)0x0;
        ppppppppuVar52 = (undefined ********)0x0;
        uStack_d68 = 0;
        uStack_d70 = 0;
        lStack_d58 = 0;
        uStack_d60 = 0;
        uStack_d50 = 0x3f800000;
        func_0x000107479ff0();
        FUN_107372aa4(&uStack_d70);
        puStack_d90 = &UNK_10e52b660;
        uStack_d80 = 0;
        uStack_d78 = 0;
        lStack_d88 = 0;
        func_0x000107479ff0();
        FUN_107471580(&puStack_d90);
        uStack_da8 = 0;
        pppppppuStack_db0 = (undefined *******)0x0;
        uStack_da0 = 0;
        func_0x000107479ff0();
        FUN_1074715d4(&pppppppuStack_db0);
        pppppppuStack_dd0 = (undefined *******)&UNK_10e52b660;
        uStack_dc0 = 0;
        uStack_db8 = 0;
        uStack_dc8 = 0;
        func_0x000107479ff0();
        ppppppppuVar39 = &pppppppuStack_dd0;
        FUN_107471640();
        lVar14 = lStack_e10;
        for (lVar38 = lStack_e18; ppppppuVar54 = (undefined ******)&ppppppuStack_ec0,
            lVar38 != lVar14; lVar38 = lVar38 + 0x88) {
          iVar13 = *(int *)(lVar38 + 0x80);
          if (iVar13 == 2) {
            ppppppuVar22 = ppppppuVar53;
            FUN_1074e2b44(&ppppppppuStack_cb0,ppppppuVar53,lVar38 + 8);
            if ((char)ppppppppuStack_ca0 == '\x01') {
              Hint_Prefetch(pppppppuStack_dd0,0,2,0);
              func_0x00010747aa34(pppppppuStack_dd0);
              func_0x00010747a1dc();
              do {
                func_0x000107479df8();
                uVar47 = uStack_dc8;
                while (uStack_dc8 = uVar47, ppppppuVar54 != (undefined ******)0x0) {
                  func_0x00010747a580();
                  if ((uVar47 & 1) != 0) goto LAB_10746cd48;
                  func_0x00010747aba8();
                  uVar47 = uStack_dc8;
                }
                func_0x00010747a614();
              } while ((extraout_x8_05 & 1) == 0);
              pppppppuVar44 = (undefined *******)&pppppppuStack_dd0;
              func_0x000107471c90(pppppppuVar44,ppppppuVar22);
              lVar19 = uStack_dc8 + (long)pppppppuVar44 * 0x48;
              func_0x00010747a588();
              *(undefined *********)(lVar19 + 0x40) = ppppppppuStack_ca8;
              *(undefined *********)(lVar19 + 0x38) = ppppppppuStack_cb0;
              ppppppppuVar20 = ppppppppuStack_cb0;
              ppppppppuVar52 = ppppppppuStack_ca8;
              if (ppppppppuStack_ca8 != (undefined ********)0x0) {
                do {
                  func_0x000107479b20();
                } while (extraout_w10_04 != 0);
              }
            }
            else {
              func_0x00010747a26c();
              func_0x00010724aea8();
              func_0x00010747a9c8();
              func_0x00010724b374(&ppppppppuStack_3e0);
              func_0x00010747a528();
              func_0x00010747a578();
            }
LAB_10746cd48:
            ppppppppuVar39 = (undefined ********)&ppppppppuStack_cb0;
            FUN_107471d84();
          }
          else {
            uVar10 = iVar13 + -1 < 0;
            if (iVar13 == 1) {
              func_0x00010747a1f0();
              if (ppppppppuVar39 == (undefined ********)0x0) {
                func_0x00010747a26c();
                func_0x00010724aea8();
                func_0x00010747a9c8();
                func_0x00010724b374(&ppppppppuStack_3e0);
                func_0x00010747a528();
                func_0x00010747a578();
                func_0x00010028af84(&ppppppppuStack_3e0,lVar38 + 0x40);
                func_0x00010028af84(&ppppppppuStack_3c0,lVar38 + 0x60);
                ppppppuVar22 = &pppppuStack_cf8;
                func_0x00010726364c(ppppppuVar22,lVar38 + 8);
                ppppppuVar49 = ppppppuStack_d08;
                if (ppppppuStack_d08 != (undefined ******)0x0) {
                  uVar47 = (long)ppppppuStack_d08 - 1;
                  if (((ulong)ppppppuStack_d08 & uVar47) == 0) {
                    ppppppuVar54 = (undefined ******)(uVar47 & (ulong)ppppppuVar22);
                    uVar10 = false;
                  }
                  else {
                    uVar10 = (long)ppppppuVar22 - (long)ppppppuStack_d08 < 0;
                    ppppppuVar54 = ppppppuVar22;
                    if (ppppppuStack_d08 <= ppppppuVar22) {
                      uVar31 = 0;
                      if (ppppppuStack_d08 != (undefined ******)0x0) {
                        uVar31 = (ulong)ppppppuVar22 / (ulong)ppppppuStack_d08;
                      }
                      ppppppuVar54 = (undefined ******)
                                     ((long)ppppppuVar22 - uVar31 * (long)ppppppuStack_d08);
                    }
                  }
                  pppppppuVar44 = *(undefined ********)(lStack_d10 + (long)ppppppuVar54 * 8);
                  if (pppppppuVar44 != (undefined *******)0x0) {
                    do {
                      while( true ) {
                        pppppppuVar44 = (undefined *******)*pppppppuVar44;
                        if (pppppppuVar44 == (undefined *******)0x0) goto LAB_10746cfb4;
                        ppppppuVar24 = pppppppuVar44[1];
                        uVar10 = (long)ppppppuVar24 - (long)ppppppuVar22 < 0;
                        if (ppppppuVar24 != ppppppuVar22) break;
                        pppppppuVar18 = pppppppuVar44 + 2;
                        func_0x00010747a580();
                        if (((ulong)pppppppuVar18 & 1) != 0) goto LAB_10746d0f8;
                      }
                      if (((ulong)ppppppuVar49 & uVar47) == 0) {
                        ppppppuVar24 = (undefined ******)((ulong)ppppppuVar24 & uVar47);
                      }
                      else if (ppppppuVar49 <= ppppppuVar24) {
                        func_0x00010747ab90();
                        ppppppuVar24 = extraout_x8_09;
                      }
                      uVar10 = (long)ppppppuVar24 - (long)ppppppuVar54 < 0;
                    } while (ppppppuVar24 == ppppppuVar54);
                  }
                }
LAB_10746cfb4:
                pppppppuVar44 = (undefined *******)0x88;
                __Znwm();
                ppppppppuStack_ca0 = (undefined ********)0x1;
                *pppppppuVar44 = (undefined ******)0x0;
                pppppppuVar44[1] = ppppppuVar22;
                ppppppppuStack_cb0 = (undefined ********)pppppppuVar44;
                ppppppppuStack_ca8 = &pppppppuStack_d00;
                func_0x00010747a588(pppppppuVar44 + 2);
                ppppppppuVar20 = (undefined ********)0x0;
                ppppppppuVar52 = (undefined ********)0x0;
                pppppppuVar44[0x10] = (undefined ******)0x0;
                pppppppuVar44[0xf] = (undefined ******)0x0;
                pppppppuVar44[0xe] = (undefined ******)0x0;
                pppppppuVar44[0xd] = (undefined ******)0x0;
                pppppppuVar44[0xc] = (undefined ******)0x0;
                pppppppuVar44[0xb] = (undefined ******)0x0;
                pppppppuVar44[10] = (undefined ******)0x0;
                pppppppuVar44[9] = (undefined ******)0x0;
                func_0x00010747a138(pppppuStack_cf8);
                if ((ppppppuVar49 == (undefined ******)0x0) || (func_0x00010747a1a8(), (bool)uVar10)
                   ) {
                  func_0x00010747ab7c();
                  func_0x000100168528();
                  FUN_107471acc(&lStack_d10);
                  ppppppuVar49 = ppppppuStack_d08;
                  if (((ulong)ppppppuStack_d08 & (long)ppppppuStack_d08 - 1U) == 0) {
                    ppppppuVar54 = (undefined ******)
                                   ((long)ppppppuStack_d08 - 1U & (ulong)ppppppuVar22);
                  }
                  else {
                    ppppppuVar54 = ppppppuVar22;
                    if (ppppppuStack_d08 <= ppppppuVar22) {
                      uVar47 = 0;
                      if (ppppppuStack_d08 != (undefined ******)0x0) {
                        uVar47 = (ulong)ppppppuVar22 / (ulong)ppppppuStack_d08;
                      }
                      ppppppuVar54 = (undefined ******)
                                     ((long)ppppppuVar22 - uVar47 * (long)ppppppuStack_d08);
                    }
                  }
                }
                plVar42 = *(long **)(lStack_d10 + (long)ppppppuVar54 * 8);
                if (plVar42 == (long *)0x0) {
                  *pppppppuVar44 = (undefined ******)pppppppuStack_d00;
                  *(undefined *********)(lStack_d10 + (long)ppppppuVar54 * 8) = &pppppppuStack_d00;
                  pppppppuStack_d00 = pppppppuVar44;
                  if (*pppppppuVar44 != (undefined ******)0x0) {
                    ppppppuVar54 = (undefined ******)(*pppppppuVar44)[1];
                    if (((ulong)ppppppuVar49 & (long)ppppppuVar49 - 1U) == 0) {
                      ppppppuVar54 = (undefined ******)
                                     ((ulong)ppppppuVar54 & (long)ppppppuVar49 - 1U);
                    }
                    else if (ppppppuVar49 <= ppppppuVar54) {
                      uVar47 = 0;
                      if (ppppppuVar49 != (undefined ******)0x0) {
                        uVar47 = (ulong)ppppppuVar54 / (ulong)ppppppuVar49;
                      }
                      ppppppuVar54 = (undefined ******)
                                     ((long)ppppppuVar54 - uVar47 * (long)ppppppuVar49);
                    }
                    *(undefined ********)(lStack_d10 + (long)ppppppuVar54 * 8) = pppppppuVar44;
                  }
                }
                else {
                  *pppppppuVar44 = (undefined ******)*plVar42;
                  *plVar42 = (long)pppppppuVar44;
                }
                ppppppppuStack_cb0 = (undefined ********)0x0;
                pppppuStack_cf8 = (undefined *****)((long)pppppuStack_cf8 + 1);
                FUN_107471c38(&ppppppppuStack_cb0);
LAB_10746d0f8:
                func_0x0001002a8208(pppppppuVar44 + 9,&ppppppppuStack_3e0);
                func_0x0001002a8208(pppppppuVar44 + 0xd,&ppppppppuStack_3c0);
                ppppppppuVar39 = (undefined ********)&ppppppppuStack_3e0;
                FUN_1074704ac();
              }
              else {
                func_0x00010747aa44(&ppppppppuStack_c98);
                func_0x00010747a248();
                ppppppppuStack_3e0 = ppppppppuVar20;
                ppppppppuStack_3d8 = ppppppppuVar52;
                if (extraout_x8_04 != 0) {
                  do {
                    func_0x000107479b20();
                  } while (extraout_w10_02 != 0);
                }
                func_0x00010747a7e8();
                func_0x00010747aa3c();
                FUN_10746a0c0(&ppppppppuStack_cb0,&puStack_d90,lVar38 + 8,&ppppppppuStack_3e0);
                func_0x000107470508(&ppppppppuStack_3e0);
                func_0x000107470530(&pppppppuStack_db0,ppppppppuVar39);
                ppppppppuVar39 = (undefined ********)&ppppppppuStack_c98;
                func_0x000107270b00();
              }
            }
            else if (iVar13 == 0) {
              func_0x00010747a1f0();
              if (ppppppppuVar39 == (undefined ********)0x0) {
                func_0x00010747a520();
                ppppppppuStack_3d0 = (undefined ********)0x1;
                ppppppppuVar32 = ppppppppuVar39 + 2;
                ppppppppuStack_3e0 = ppppppppuVar39;
                ppppppppuStack_3d8 = (undefined ********)&ppppppppuStack_d30;
                *ppppppppuVar39 = (undefined *******)0x0;
                ppppppppuVar39[1] = (undefined *******)0x0;
                func_0x00010747a588();
                *(undefined1 *)(ppppppppuVar39 + 9) = 0;
                func_0x00010747a7b4();
                ppppppppuVar39[1] = (undefined *******)ppppppppuVar32;
                func_0x00010747a7b4();
                ppppppppuVar39[1] = (undefined *******)ppppppppuVar32;
                ppppppppuVar5 = ppppppppuStack_d38;
                if (ppppppppuStack_d38 != (undefined ********)0x0) {
                  uVar47 = (long)ppppppppuStack_d38 - 1;
                  if (((ulong)ppppppppuStack_d38 & uVar47) == 0) {
                    ppppppppuVar36 = (undefined ********)(uVar47 & (ulong)ppppppppuVar32);
                    uVar10 = false;
                  }
                  else {
                    uVar10 = (long)ppppppppuVar32 - (long)ppppppppuStack_d38 < 0;
                    ppppppppuVar36 = ppppppppuVar32;
                    if (ppppppppuStack_d38 <= ppppppppuVar32) {
                      uVar31 = 0;
                      if (ppppppppuStack_d38 != (undefined ********)0x0) {
                        uVar31 = (ulong)ppppppppuVar32 / (ulong)ppppppppuStack_d38;
                      }
                      ppppppppuVar36 =
                           (undefined ********)
                           ((long)ppppppppuVar32 - uVar31 * (long)ppppppppuStack_d38);
                    }
                  }
                  plVar42 = *(long **)(lStack_d40 + (long)ppppppppuVar36 * 8);
                  if (plVar42 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar42 = (long *)*plVar42;
                        if (plVar42 == (long *)0x0) goto LAB_10746cea0;
                        ppppppppuVar23 = (undefined ********)plVar42[1];
                        uVar10 = (long)ppppppppuVar23 - (long)ppppppppuVar32 < 0;
                        if (ppppppppuVar23 != ppppppppuVar32) break;
                        uVar31 = (ulong)(plVar42 + 2);
                        func_0x000104c32db4(uVar31,ppppppppuVar39 + 2);
                        if ((uVar31 & 1) != 0) goto LAB_10746d0cc;
                      }
                      if (((ulong)ppppppppuVar5 & uVar47) == 0) {
                        ppppppppuVar23 = (undefined ********)((ulong)ppppppppuVar23 & uVar47);
                      }
                      else if (ppppppppuVar5 <= ppppppppuVar23) {
                        func_0x00010747ab90();
                        ppppppppuVar23 = extraout_x8_08;
                      }
                      uVar10 = (long)ppppppppuVar23 - (long)ppppppppuVar36 < 0;
                    } while (ppppppppuVar23 == ppppppppuVar36);
                  }
                }
LAB_10746cea0:
                func_0x00010747a138(lStack_d28);
                if ((ppppppppuVar5 == (undefined ********)0x0) ||
                   (func_0x00010747a1a8(), (bool)uVar10)) {
                  func_0x00010747ab7c();
                  func_0x000100168528();
                  FUN_1073de554(&lStack_d40);
                }
                ppppppppuVar5 = ppppppppuStack_d38;
                lVar19 = lStack_d40;
                ppppppppuVar32 = (undefined ********)ppppppppuVar39[1];
                uVar47 = (long)ppppppppuStack_d38 - 1;
                if (((ulong)ppppppppuStack_d38 & uVar47) == 0) {
                  ppppppppuVar32 = (undefined ********)(uVar47 & (ulong)ppppppppuVar32);
                }
                else if (ppppppppuStack_d38 <= ppppppppuVar32) {
                  uVar31 = 0;
                  if (ppppppppuStack_d38 != (undefined ********)0x0) {
                    uVar31 = (ulong)ppppppppuVar32 / (ulong)ppppppppuStack_d38;
                  }
                  ppppppppuVar32 =
                       (undefined ********)
                       ((long)ppppppppuVar32 - uVar31 * (long)ppppppppuStack_d38);
                }
                puVar33 = *(undefined8 **)(lStack_d40 + (long)ppppppppuVar32 * 8);
                if (puVar33 == (undefined8 *)0x0) {
                  *ppppppppuVar39 = (undefined *******)ppppppppuStack_d30;
                  ppppppppuStack_d30 = ppppppppuVar39;
                  *(undefined **********)(lVar19 + (long)ppppppppuVar32 * 8) = &ppppppppuStack_d30;
                  if (*ppppppppuVar39 != (undefined *******)0x0) {
                    ppppppppuVar32 = (undefined ********)(*ppppppppuVar39)[1];
                    if (((ulong)ppppppppuVar5 & uVar47) == 0) {
                      ppppppppuVar32 = (undefined ********)((ulong)ppppppppuVar32 & uVar47);
                    }
                    else if (ppppppppuVar5 <= ppppppppuVar32) {
                      uVar47 = 0;
                      if (ppppppppuVar5 != (undefined ********)0x0) {
                        uVar47 = (ulong)ppppppppuVar32 / (ulong)ppppppppuVar5;
                      }
                      ppppppppuVar32 =
                           (undefined ********)((long)ppppppppuVar32 - uVar47 * (long)ppppppppuVar5)
                      ;
                    }
                    *(undefined *********)(lVar19 + (long)ppppppppuVar32 * 8) = ppppppppuVar39;
                  }
                }
                else {
                  *ppppppppuVar39 = (undefined *******)*puVar33;
                  *puVar33 = ppppppppuVar39;
                }
                lStack_d28 = lStack_d28 + 1;
                ppppppppuStack_3e0 = (undefined ********)0x0;
LAB_10746d0cc:
                ppppppppuVar39 = (undefined ********)&ppppppppuStack_3e0;
                FUN_1073de74c();
              }
              else {
                ppppppppuVar39 = (undefined ********)&ppppppppuStack_430;
                func_0x00010747aa44();
                func_0x00010747a248();
                ppppppppuStack_3e0 = ppppppppuVar20;
                ppppppppuStack_3d8 = ppppppppuVar52;
                if (extraout_x8_02 != 0) {
                  do {
                    func_0x000107479b20();
                  } while (extraout_w10_01 != 0);
                }
                func_0x00010747a7e8();
                func_0x00010747aa3c();
                Hint_Prefetch(puStack_d90,0,2,0);
                func_0x00010747aa34(puStack_d90);
                func_0x00010747a1dc();
                do {
                  func_0x000107479df8();
                  while (ppppppuVar54 != (undefined ******)0x0) {
                    func_0x00010747a37c();
                    func_0x00010747a580();
                    if (((ulong)ppppppppuVar39 & 1) != 0) goto LAB_10746d158;
                    func_0x00010747aba8();
                  }
                  func_0x00010747a614();
                } while ((extraout_x8_03 & 1) == 0);
                func_0x00010747a758();
LAB_10746d128:
                lVar19 = lStack_d88 + (long)ppppppppuVar39 * 0x58;
                func_0x00010747a588();
                ppppppppuVar52 = ppppppppuStack_3c8;
                ppppppppuVar20 = ppppppppuStack_3d0;
                *(undefined *********)(lVar19 + 0x40) = ppppppppuStack_3d8;
                *(undefined *********)(lVar19 + 0x38) = ppppppppuStack_3e0;
                ppppppppuStack_3d8 = (undefined ********)0x0;
                ppppppppuStack_3e0 = (undefined ********)0x0;
                *(undefined *********)(lVar19 + 0x50) = ppppppppuStack_3c8;
                *(undefined *********)(lVar19 + 0x48) = ppppppppuStack_3d0;
                ppppppppuStack_3d0 = (undefined ********)0x0;
                ppppppppuStack_3c8 = (undefined ********)0x0;
LAB_10746d158:
                func_0x000107470508(&ppppppppuStack_3e0);
                ppppppppuVar39 = (undefined ********)&ppppppppuStack_430;
                func_0x000107270b00();
              }
            }
            else {
              puVar33 = auStack_ea8;
              func_0x0001072ee150(puVar33,lVar38 + 8);
              if (((ulong)puVar33 & 1) == 0) {
                puVar33 = &uStack_d70;
                func_0x0001072e89a4(puVar33,lVar38 + 8);
              }
              func_0x00010747a1f0();
              ppppppppuVar39 = (undefined ********)0x0;
              if (puVar33 != (undefined8 *)0x0) {
                ppppppppuVar39 = (undefined ********)&ppppppppuStack_430;
                func_0x00010747aa44();
                func_0x00010747a248();
                ppppppppuStack_3e0 = ppppppppuVar20;
                ppppppppuStack_3d8 = ppppppppuVar52;
                if (extraout_x8_06 != 0) {
                  do {
                    func_0x000107479b20();
                  } while (extraout_w10_03 != 0);
                }
                func_0x00010747a7e8();
                func_0x00010747aa3c();
                Hint_Prefetch(puStack_d90,0,2,0);
                func_0x00010747aa34(puStack_d90);
                func_0x00010747a1dc();
                do {
                  func_0x000107479df8();
                  while (ppppppuVar54 != (undefined ******)0x0) {
                    func_0x00010747a37c();
                    func_0x00010747a580();
                    if (((ulong)ppppppppuVar39 & 1) != 0) goto LAB_10746d158;
                    func_0x00010747aba8();
                  }
                  func_0x00010747a614();
                } while ((extraout_x8_07 & 1) == 0);
                func_0x00010747a758();
                goto LAB_10746d128;
              }
            }
          }
        }
        bVar9 = ppppuStack_ce0 == ppppuStack_cd8;
        bVar11 = lStack_d28 == 0;
        bVar12 = lStack_d58 == 0;
        if ((bVar9 && bVar11) && bVar12) {
          FUN_107471da4(&ppppppppuStack_3e0,&puStack_d90);
          func_0x000107471f3c(&ppppppppuStack_3c0,&pppppppuStack_db0);
          FUN_1074720fc(&uStack_3a8,&pppppppuStack_dd0);
          func_0x00010747a260(ppppuVar29);
          (*extraout_x8_12)();
          func_0x00010747a804();
          ppppppppuStack_e60 = (undefined ********)((ulong)ppppppppuStack_e60 & 0xffffffffffffff00);
          uStack_e50 = 0;
        }
        else {
          FUN_10746fe48(&ppppppppuStack_3e0,&puStack_d90);
          pppppuStack_3b8 = (undefined *****)uStack_da8;
          ppppppppuStack_3c0 = (undefined ********)pppppppuStack_db0;
          uStack_3b0 = uStack_da0;
          uStack_da0 = 0;
          uStack_da8 = 0;
          pppppppuStack_db0 = (undefined *******)0x0;
          FUN_10746fe48(&uStack_3a8,&pppppppuStack_dd0);
          pppppuVar16 = (undefined *****)0x1c0;
          __Znwm();
          ppppppppuVar20 = ppppppppuStack_e78;
          ppppppppuVar39 = ppppppppuStack_e80;
          pppppuVar51 = pppppuVar16 + 1;
          *pppppuVar51 = (undefined ****)0x0;
          pppppuVar16[2] = (undefined ****)0x0;
          *pppppuVar16 = (undefined ****)&PTR_FUN_1109b2b60;
          ppppppppuStack_cb0 = ppppppppuStack_e80;
          ppppppppuStack_ca8 = ppppppppuStack_e78;
          if (ppppppppuStack_e78 != (undefined ********)0x0) {
            do {
              func_0x000107479b20();
            } while (extraout_w10_05 != 0);
          }
          ppppppppuVar5 = ppppppppuStack_e70;
          ppppppppuVar52 = (undefined ********)(pppppuVar16 + 3);
          ppppppppuStack_ca0 = ppppppppuStack_e70;
          ppppppuStack_cb8 = ppppppuStack_eb8;
          ppppppuStack_cc0 = ppppppuStack_ec0;
          ppppppuStack_ec0 = (undefined ******)0x0;
          ppppppuStack_eb8 = (undefined ******)0x0;
          FUN_10747c890(ppppppppuVar52,ppppppuVar37);
          pppppuVar16[0xe] = (undefined ****)0x0;
          pppppuVar16[0xf] = (undefined ****)0x0;
          ppppppppuVar32 = (undefined ********)(pppppuVar16 + 0x10);
          *ppppppppuVar32 = (undefined *******)ppppppppuVar39;
          pppppuVar16[3] = (undefined ****)&PTR_DAT_1109b2988;
          ppppppppuStack_ca8 = (undefined ********)0x0;
          ppppppppuStack_cb0 = (undefined ********)0x0;
          pppppuVar16[0x11] = (undefined ****)ppppppppuVar20;
          pppppuVar16[0x12] = (undefined ****)ppppppppuVar5;
          pppppuVar16[0x14] = ppppuStack_cd8;
          pppppuVar16[0x13] = ppppuStack_ce0;
          pppppuVar16[0x15] = ppppuStack_cd0;
          ppppuStack_ce0 = (undefined ****)0x0;
          ppppuStack_cd8 = (undefined ****)0x0;
          ppppuStack_cd0 = (undefined ****)0x0;
          func_0x00010746fdfc(pppppuVar16 + 0x16,&ppppppppuStack_3e0);
          pppppuVar35 = pppppuVar16 + 0x21;
          func_0x0001072638b4(pppppuVar35,&uStack_d70);
          pppppuVar16[0x27] = (undefined ****)0x0;
          pppppuVar16[0x26] = (undefined ****)0x0;
          pppppuVar16[0x29] = (undefined ****)0x0;
          pppppuVar16[0x28] = (undefined ****)0x0;
          *(undefined4 *)(pppppuVar16 + 0x2a) = 0x3f800000;
          pppppuVar16[0x2c] = (undefined ****)0x0;
          pppppuVar16[0x2b] = (undefined ****)0x0;
          pppppuVar16[0x2e] = (undefined ****)0x0;
          pppppuVar16[0x2d] = (undefined ****)0x0;
          *(undefined4 *)(pppppuVar16 + 0x2f) = 0x3f800000;
          *(undefined1 *)(pppppuVar16 + 0x30) = 0;
          ppppppppuStack_c98 = (undefined ********)(pppppuVar16 + 0x31);
          ppppuStack_558 = (undefined ****)0x0;
          pppppuVar16[0x32] = (undefined ****)0x0;
          pppppuVar16[0x33] = (undefined ****)0x0;
          pppppuVar16[0x31] = (undefined ****)0x0;
          uStack_c90 = 0;
          ppppuStack_458 = ppppuVar29;
          func_0x00010747a2c4();
          ppppppppuStack_430 = (undefined ********)(pppppuVar16 + 0x33);
          pppppuVar16[0x31] = (undefined ****)pppppuVar35;
          pppppuVar16[0x32] = (undefined ****)pppppuVar35;
          pppppuVar16[0x33] = (undefined ****)(pppppuVar35 + 4);
          pppppuStack_428 = (undefined *****)&pppppuStack_c88;
          pppppuStack_420 = (undefined *****)&pppppuStack_c80;
          uStack_418 = 0;
          pppppuStack_c88 = pppppuVar35;
          pppppuStack_c80 = pppppuVar35;
          (*(code *)(*ppppuVar29)[2])();
          pppppuVar35[3] = ppppuVar29;
          pppppuVar35 = pppppuStack_c80 + 4;
          uStack_418 = 1;
          pppppuStack_c80 = pppppuVar35;
          FUN_10746fe50(&ppppppppuStack_430);
          pppppuVar16[0x32] = (undefined ****)pppppuVar35;
          uStack_c90 = 1;
          func_0x00010746fe88(&ppppppppuStack_c98);
          FUN_107473b1c(&ppppppppuStack_470);
          pppppuVar16[0x35] = (undefined ****)ppppppuVar53;
          pppppuVar16[0x37] = (undefined ****)ppppppuStack_cb8;
          pppppuVar16[0x36] = (undefined ****)ppppppuStack_cc0;
          ppppppuStack_cc0 = (undefined ******)0x0;
          ppppppuStack_cb8 = (undefined ******)0x0;
          ppppppppuVar39 = ppppppppuVar32;
          FUN_107469c74(&ppppppppuStack_470);
          func_0x000107469cd8();
          if (((int)ppppppppuVar32 != 0) && (lStack_d28 != 0)) {
            *(undefined1 *)(pppppuVar16 + 0x30) = 1;
            FUN_10746fee4(&ppppppppuStack_430,&lStack_d40);
            uStack_408 = 0;
            ppppppppuVar39 = ppppppppuVar52;
            FUN_10747bc9c(ppppppuVar37,ppppppppuVar52,&ppppppppuStack_430);
            func_0x0001074701f4(&ppppppppuStack_430);
          }
          func_0x000107270b00(&ppppppppuStack_470);
          func_0x00010724b8b8(&ppppppuStack_cc0);
          func_0x00010725b1d4(&ppppppppuStack_cb0);
          ppppppppuStack_de0 = ppppppppuVar52;
          pppppuStack_dd8 = pppppuVar16;
          if ((pppppuVar16[0xf] == (undefined ****)0x0) ||
             (pppppuVar16[0xf][1] == (undefined ***)0xffffffffffffffff)) {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(pppppuVar51,0x10);
              if (bVar3) {
                *pppppuVar51 = (undefined ****)((long)*pppppuVar51 + 1);
                cVar2 = ExclusiveMonitorsStatus();
              }
              ppppppppuStack_470 = ppppppppuVar52;
              pppppuStack_468 = pppppuVar16;
            } while (cVar2 != '\0');
            do {
              func_0x000107479c1c();
            } while (extraout_w11 != 0);
            ppppppppuStack_430 = (undefined ********)pppppuVar16[0xe];
            pppppuVar16[0xe] = extraout_x12;
            pppppuVar16[0xf] = (undefined ****)pppppuVar16;
            pppppuStack_428 = extraout_x8_10;
            FUN_1074722a8(&ppppppppuStack_430);
            FUN_1074738dc(&ppppppppuStack_470);
          }
          func_0x00010747a804();
          ppppppppuStack_ca0 = (undefined ********)0x0;
          ppppppppuStack_cb0 = (undefined ********)0x0;
          ppppppppuStack_ca8 = (undefined ********)0x0;
          pppppppuVar44 = ppppppppuStack_de0[0x10];
          pppppppuVar18 = ppppppppuStack_de0[0x11];
          ppppppppuStack_430 = (undefined ********)&ppppppppuStack_cb0;
          pppppuStack_428 = (undefined *****)((ulong)pppppuStack_428 & 0xffffffffffffff00);
          lVar38 = (long)pppppppuVar18 - (long)pppppppuVar44;
          if (lVar38 != 0) {
            ppppppppuVar20 = (undefined ********)(lVar38 / 0x1f8);
            func_0x00010747a5c4(0x2083);
            if (extraout_x8_11 <= ppppppppuVar20) {
              FUN_107471a48();
LAB_10746ddb0:
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10746ddb4);
              (*pcVar8)();
            }
            FUN_107471a54();
            ppppppppuStack_ca0 = ppppppppuVar20 + (long)ppppppppuVar39 * 0x3f;
            ppppppppuStack_3d8 = (undefined ********)&ppppppppuStack_c98;
            ppppppppuStack_3d0 = (undefined ********)&ppppppppuStack_470;
            ppppppppuStack_3c8 =
                 (undefined ********)((ulong)ppppppppuStack_3c8 & 0xffffffffffffff00);
            ppppppppuStack_cb0 = ppppppppuVar20;
            ppppppppuStack_ca8 = ppppppppuVar20;
            ppppppppuStack_c98 = ppppppppuVar20;
            ppppppppuStack_3e0 = (undefined ********)&ppppppppuStack_ca0;
            for (; ppppppppuStack_470 = ppppppppuVar20, pppppppuVar44 != pppppppuVar18;
                pppppppuVar44 = pppppppuVar44 + 0x3f) {
              func_0x00010747a6b4();
              func_0x0001072d488c();
              ppppppppuVar20 = ppppppppuStack_470 + 0x3f;
            }
            ppppppppuStack_3c8 = (undefined ********)CONCAT71(ppppppppuStack_3c8._1_7_,1);
            func_0x000107471a94(&ppppppppuStack_3e0);
            ppppppppuStack_ca8 = ppppppppuVar20;
          }
          pppppuStack_428 = (undefined *****)CONCAT71(pppppuStack_428._1_7_,1);
          ppppppppuVar39 = (undefined ********)&ppppppppuStack_430;
          func_0x0001074722cc();
          ppppppppuVar52 = ppppppppuStack_ca8;
          for (ppppppppuVar20 = ppppppppuStack_cb0; ppppppppuVar20 != ppppppppuVar52;
              ppppppppuVar20 = ppppppppuVar20 + 0x3f) {
            __ZNSt3__16chrono12steady_clock3nowEv();
            func_0x000104c2fe00(&ppppppppuStack_430,ppppppppuVar20 + 1);
            ppppppuVar37 = param_1[0x29];
            ppppppppuStack_3d0 = ppppppppuStack_e78;
            ppppppppuStack_3d8 = ppppppppuStack_e80;
            ppppppppuStack_3e0 = ppppppppuVar25;
            if (ppppppppuStack_e78 != (undefined ********)0x0) {
              do {
                func_0x000107479b20();
              } while (extraout_w10_06 != 0);
            }
            ppppppppuStack_3c8 = ppppppppuStack_e70;
            pppppuStack_3b8 = pppppuStack_dd8;
            ppppppppuStack_3c0 = ppppppppuStack_de0;
            if (pppppuStack_dd8 != (undefined *****)0x0) {
              do {
                func_0x000107479b20();
              } while (extraout_w10_07 != 0);
            }
            func_0x0001072d488c(&uStack_3b0,ppppppppuVar20);
            ppppppppuStack_1b8 = ppppppppuVar39;
            FUN_107472340(&pppuStack_1b0,&lStack_d10);
            func_0x000104c2fe00(auStack_188,&ppppppppuStack_430);
            FUN_1073ae318(auStack_150,&pppppppuStack_550);
            ppppuStack_458 = (undefined ****)0x0;
            ppppuVar29 = (undefined ****)0x340;
            __Znwm();
            *ppppuVar29 = (undefined ***)&PTR_FUN_1109b2bb0;
            ppppuVar29[2] = (undefined ***)ppppppppuStack_3d8;
            ppppuVar29[1] = (undefined ***)ppppppppuStack_3e0;
            ppppuVar29[3] = (undefined ***)ppppppppuStack_3d0;
            *puVar26 = 0;
            puVar26[1] = 0;
            ppppuVar29[5] = (undefined ***)ppppppppuStack_3c0;
            ppppuVar29[4] = (undefined ***)ppppppppuStack_3c8;
            ppppuVar29[6] = (undefined ***)pppppuStack_3b8;
            ppppppppuStack_3c0 = (undefined ********)0x0;
            pppppuStack_3b8 = (undefined *****)0x0;
            func_0x0001072d488c(ppppuVar29 + 7,&uStack_3b0);
            pppuVar6 = pppuStack_1a8;
            pppuVar45 = pppuStack_1b0;
            ppppuVar29[0x46] = (undefined ***)ppppppppuStack_1b8;
            pppuStack_1a8 = (undefined ***)0x0;
            pppuStack_1b0 = (undefined ***)0x0;
            ppppuVar29[0x47] = pppuVar45;
            ppppuVar29[0x48] = pppuVar6;
            ppppuVar29[0x49] = pppuStack_1a0;
            ppppuVar29[0x4a] = pppuStack_198;
            *(undefined4 *)(ppppuVar29 + 0x4b) = uStack_190;
            if (pppuStack_198 != (undefined ***)0x0) {
              pppuVar30 = (undefined ***)pppuStack_1a0[1];
              if (((ulong)pppuVar6 & (long)pppuVar6 - 1U) == 0) {
                pppuVar30 = (undefined ***)((ulong)pppuVar30 & (long)pppuVar6 - 1U);
              }
              else {
                uVar47 = 0;
                if (pppuVar6 != (undefined ***)0x0) {
                  uVar47 = (ulong)pppuVar30 / (ulong)pppuVar6;
                }
                if (pppuVar6 <= pppuVar30) {
                  pppuVar30 = (undefined ***)((long)pppuVar30 - uVar47 * (long)pppuVar6);
                }
              }
              pppuVar45[(long)pppuVar30] = (undefined **)(ppppuVar29 + 0x49);
              pppuStack_1a0 = (undefined ***)0x0;
              pppuStack_198 = (undefined ***)0x0;
            }
            func_0x000104c318bc(ppppuVar29 + 0x4c,auStack_188);
            FUN_1073ae318(ppppuVar29 + 0x53,auStack_150);
            ppppuStack_458 = ppppuVar29;
            (*(code *)(*ppppppuVar37)[2])
                      (&ppppppppuStack_c98,ppppppuVar37,ppppppppuVar20,&ppppppppuStack_470);
            func_0x0001072ad0c8(&ppppppppuStack_470);
            func_0x0001074722f8(&ppppppppuStack_3e0);
            ppppppppuVar5 = ppppppppuStack_c98;
            ppppppppuStack_c98 = (undefined ********)0x0;
            ppppppppuVar39 = ppppppppuStack_de0 + 0x23;
            func_0x0001072ad0fc(ppppppppuVar39,&ppppppppuStack_430);
            pppppppuVar44 = *ppppppppuVar39;
            *ppppppppuVar39 = (undefined *******)ppppppppuVar5;
            if (pppppppuVar44 != (undefined *******)0x0) {
              func_0x000107479c84();
            }
            ppppppppuVar39 = ppppppppuStack_c98;
            ppppppppuStack_c98 = (undefined ********)0x0;
            if (ppppppppuVar39 != (undefined ********)0x0) {
              func_0x000107479c84();
            }
            ppppppppuVar39 = (undefined ********)&ppppppppuStack_430;
            func_0x000104c2f714();
          }
          pppppuStack_e58 = pppppuStack_dd8;
          ppppppppuStack_e60 = ppppppppuStack_de0;
          pppppuStack_dd8 = (undefined *****)0x0;
          ppppppppuStack_de0 = (undefined ********)0x0;
          uStack_e50 = 1;
          FUN_1074703ec(&ppppppppuStack_cb0);
          FUN_1074738dc(&ppppppppuStack_de0);
        }
        FUN_107470298(&pppppppuStack_dd0);
        func_0x00010747030c(&pppppppuStack_db0);
        FUN_10747039c(&puStack_d90);
        func_0x00010726ea70(&uStack_d70);
        func_0x0001074701f4(&lStack_d40);
        FUN_107472568(&lStack_d10);
        FUN_1074703ec(&ppppuStack_ce0);
        FUN_107473b1c(auStack_570);
        FUN_10746ebc4(&pppppppuStack_7c0);
        func_0x00010746ebe4(&pppppppuStack_9f8);
        func_0x00010724b8b8(&ppppppuStack_ec0);
        func_0x00010726ea70(auStack_ea8);
        func_0x00010725b1d4(&ppppppppuStack_e80);
        pppppuVar16 = pppppuStack_e58;
        ppppppppuVar25 = ppppppppuStack_e60;
        if ((!bVar9 || !bVar11) || !bVar12) {
          ppppppuVar37 = param_1[0x69];
          if (ppppppuVar37 < param_1[0x6a]) {
            *ppppppuVar37 = (undefined *****)ppppppppuStack_e60;
            ppppppuVar37[1] = pppppuStack_e58;
            if (pppppuStack_e58 != (undefined *****)0x0) {
              do {
                func_0x000107479c1c();
                ppppppuVar37 = extraout_x8_13;
              } while (extraout_w11_00 != 0);
            }
            ppppppuVar37 = ppppppuVar37 + 2;
          }
          else {
            ppppppuVar53 = param_1[0x68];
            lVar38 = (long)ppppppuVar37 - (long)ppppppuVar53 >> 4;
            uVar47 = lVar38 + 1;
            if (uVar47 >> 0x3c != 0) {
              func_0x000107473030();
              goto LAB_10746ddb0;
            }
            uVar27 = (long)param_1[0x6a] - (long)ppppppuVar53;
            uVar31 = (long)uVar27 >> 3;
            if (uVar31 <= uVar47) {
              uVar31 = uVar47;
            }
            if (0x7fffffffffffffef < uVar27) {
              uVar31 = 0xfffffffffffffff;
            }
            if (uVar31 >> 0x3c != 0) {
              func_0x000104bd35f4();
              goto LAB_10746ddb0;
            }
            lVar14 = uVar31 << 4;
            __Znwm();
            puVar33 = (undefined8 *)(lVar14 + ((long)ppppppuVar37 - (long)ppppppuVar53));
            *puVar33 = ppppppppuVar25;
            puVar33[1] = pppppuVar16;
            if (pppppuVar16 != (undefined *****)0x0) {
              do {
                func_0x000107479c1c();
              } while (extraout_w11_01 != 0);
              ppppppuVar53 = param_1[0x68];
              lVar38 = (long)param_1[0x69] - (long)ppppppuVar53 >> 4;
              puVar33 = extraout_x8_14;
            }
            ppppppuVar37 = (undefined ******)(puVar33 + 2);
            func_0x00010747a6b4();
            _memcpy();
            param_1[0x68] = (undefined ******)(puVar33 + lVar38 * -2);
            param_1[0x69] = ppppppuVar37;
            param_1[0x6a] = (undefined ******)(lVar14 + uVar31 * 0x10);
            if (ppppppuVar53 != (undefined ******)0x0) {
              func_0x000107479f40();
            }
          }
          param_1[0x69] = ppppppuVar37;
        }
        func_0x00010747303c(&ppppppppuStack_e60);
        func_0x000107273f24(&pppppppuStack_550);
        func_0x00010726ea70(&pppppppuStack_e40);
        FUN_10747305c(&lStack_e18);
      }
      else {
        if (*(int *)(pppppppuVar21 + 7) == 2) {
          uVar40 = 2;
          goto LAB_10746c7dc;
        }
        func_0x000107479cc8(ppppppuStack_df0);
        (*extraout_x8_01)();
        uVar40 = (uint)ppppppuVar53 ^ 1;
        if ((uVar40 & 1) != 0 || (ppppppuVar54 != ppppppuVar37) != 0) {
          uVar40 = uVar40 & 1 | (uint)(ppppppuVar54 != ppppppuVar37);
          goto LAB_10746c7dc;
        }
        pppppppuStack_550 = (undefined *******)&PTR_FUN_1109b32e0;
        pppppppuStack_548 = &ppppppuStack_df8;
        pppppppuStack_540 = param_1;
        pppppppuStack_538 = (undefined *******)&pppppppuStack_550;
        FUN_10746e9d4(&ppppppppuStack_3e0,pppppppuVar43,auStack_4a8,&pppppppuStack_550);
        func_0x000107470f48(&ppppppppuStack_3e0);
        FUN_1074766a0(&pppppppuStack_550);
      }
      func_0x000104c2f714(auStack_4a8);
      func_0x0001074734f0(&ppppppuStack_df0);
    }
    ppppppppuVar25 = &pppppppuStack_b70;
    func_0x000107470f48();
  }
  ppppppuVar37 = param_1[0x49];
  func_0x00010747a034(0xd7);
  func_0x00010747aae4();
  uStack_394 = 1;
  func_0x00010747a024();
  ppppppppuStack_7b8._0_4_ = 1;
  pppppppuStack_9f8 = (undefined *******)*ppppppuVar37;
  plStack_9f0._0_4_ = 3;
  pppppppuStack_7c0._0_4_ = (int)uVar28;
  func_0x00010747a5b4();
  func_0x000107479c90();
  func_0x000107479db8();
  func_0x00010747a034(0xd9);
  func_0x00010747aae4();
  uStack_394 = 1;
  func_0x00010747a024();
  pppppppuStack_7c0 = (undefined *******)CONCAT44(pppppppuStack_7c0._4_4_,uVar1);
  ppppppppuStack_7b8 = (undefined ********)CONCAT44(ppppppppuStack_7b8._4_4_,1);
  pppppppuStack_9f8 = (undefined *******)*ppppppuVar37;
  plStack_9f0 = (long *)CONCAT44(plStack_9f0._4_4_,3);
  func_0x00010747a5b4();
  func_0x000107479c90();
  func_0x000107479db8();
  puVar26 = &uStack_f00;
  while (puVar26 = (undefined8 *)*puVar26, puVar26 != (undefined8 *)0x0) {
    ppppppppuStack_3e0 = (undefined ********)CONCAT44(ppppppppuStack_3e0._4_4_,0xd8);
    ppppppppuStack_3c8 = (undefined ********)((ulong)ppppppppuStack_3c8 & 0xffffffff00000000);
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    pppppuStack_3b8 = (undefined *****)0x0;
    ppppppppuStack_3c0 = (undefined ********)&PTR_DAT_110996720;
    uStack_3a0 = 0xd8;
    uStack_398 = 0;
    uStack_394 = 1;
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_390 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&pppppppuStack_7c0,puVar26 + 2);
    func_0x00010726e300(&ppppppppuStack_3e0,&DAT_10f6389e8,&pppppppuStack_7c0);
    pppppppuStack_9f8 =
         (undefined *******)CONCAT44(pppppppuStack_9f8._4_4_,*(undefined4 *)(puVar26 + 5));
    plStack_9f0 = (long *)CONCAT44(plStack_9f0._4_4_,1);
    pppppppuStack_b70 = (undefined *******)*ppppppuVar37;
    pppppppuStack_b68 = (undefined *******)CONCAT44(pppppppuStack_b68._4_4_,3);
    func_0x000107479c90();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppppppuStack_7c0);
    func_0x000107479db8();
  }
  func_0x0001072ab574(param_1 + 0x5d);
  uVar47 = uStack_f28;
  lVar38 = lStack_f30;
  lVar14 = uStack_f28 - lStack_f30;
  uVar10 = lVar14 == 1;
  if (0 < lVar14) {
    ppppppuVar37 = *pppppppuVar34;
    ppppppppuVar25 = (undefined ********)(param_1 + 0x67);
    pppppppuVar43 = (undefined *******)param_1[0x66];
    lVar19 = lVar14 / 0xb0;
    uVar10 = lVar14 == (long)param_1[0x67] - (long)pppppppuVar43;
    if ((long)param_1[0x67] - (long)pppppppuVar43 < lVar14) {
      pppppppuVar21 = pppppppuVar34;
      FUN_107470cc4(pppppppuVar34,((long)pppppppuVar43 - (long)ppppppuVar37) / 0xb0 + lVar19);
      FUN_107470d74(&ppppppppuStack_3e0,pppppppuVar21,
                    ((long)ppppppuVar37 - (long)*pppppppuVar34) / 0xb0,ppppppppuVar25);
      ppppppppuVar52 = ppppppppuStack_3d0;
      ppppppppuVar20 = ppppppppuStack_3d8;
      ppppppppuVar39 = ppppppppuStack_3d0;
      for (lVar19 = lVar14; ppppppppuStack_3d8 = ppppppppuVar20, lVar19 != 0;
          lVar19 = lVar19 + -0xb0) {
        FUN_107471200(ppppppppuVar39,lVar38);
        ppppppppuVar39 = ppppppppuVar39 + 0x16;
        lVar38 = lVar38 + 0xb0;
        ppppppppuVar20 = ppppppppuStack_3d8;
      }
      func_0x00010747a6b4();
      func_0x000107470de4();
      ppppppuVar54 = param_1[0x66];
      param_1[0x66] = ppppppuVar37;
      ppppppuVar53 = param_1[0x65];
      func_0x000107470de4(ppppppppuVar25,ppppppuVar53,ppppppuVar37,
                          ppppppppuVar20 +
                          (((long)ppppppuVar37 - (long)ppppppuVar53) / -0xb0) * 0x16);
      ppppppppuStack_3e0 = (undefined ********)param_1[0x65];
      param_1[0x65] =
           (undefined ******)
           (ppppppppuVar20 + (((long)ppppppuVar37 - (long)ppppppuVar53) / -0xb0) * 0x16);
      param_1[0x66] =
           (undefined ******)
           ((long)ppppppppuVar52 + (long)ppppppuVar54 + (lVar14 - (long)ppppppuVar37));
      ppppppppuVar25 = (undefined ********)param_1[0x67];
      param_1[0x67] = (undefined ******)ppppppppuStack_3c8;
      ppppppppuStack_3d8 = ppppppppuStack_3e0;
      ppppppppuStack_3d0 = ppppppppuStack_3e0;
      ppppppppuStack_3c8 = ppppppppuVar25;
      func_0x00010747a3d0();
    }
    else {
      lVar46 = (long)pppppppuVar43 - (long)ppppppuVar37;
      lVar14 = lVar46 / 0xb0;
      uVar10 = lVar19 == lVar14;
      if (lVar14 < lVar19) {
        ppppppppuStack_3d8 = &pppppppuStack_9f8;
        ppppppppuStack_3d0 = &pppppppuStack_7c0;
        ppppppppuStack_3c8 = (undefined ********)((ulong)ppppppppuStack_3c8 & 0xffffffffffffff00);
        pppppppuStack_9f8 = pppppppuVar43;
        ppppppppuStack_3e0 = ppppppppuVar25;
        for (uVar28 = lStack_f30 + lVar46; pppppppuStack_7c0 = pppppppuVar43, uVar28 != uVar47;
            uVar28 = uVar28 + 0xb0) {
          FUN_107471200(pppppppuVar43,uVar28);
          pppppppuVar43 = pppppppuStack_7c0 + 0x16;
        }
        ppppppppuStack_3c8 = (undefined ********)CONCAT71(ppppppppuStack_3c8._1_7_,1);
        FUN_107470e68(&ppppppppuStack_3e0);
        param_1[0x66] = (undefined ******)pppppppuVar43;
        uVar10 = lVar46 == 1;
        lVar19 = lVar14;
        if (lVar46 < 1) goto LAB_10746dc78;
      }
      func_0x00010747a290();
      FUN_1074712c0();
      FUN_107471348(pppppppuVar34,lVar38,lVar19,ppppppuVar37);
    }
  }
LAB_10746dc78:
  ppppppuVar54 = param_1[0x66];
  ppppppuVar22 = param_1[0x65];
  ppppppuVar53 = param_1[0x69];
  ppppppuVar49 = param_1[0x68];
  func_0x00010747a93c();
  ppppppuVar37 = param_1[0x49];
  func_0x00010747a034(0xdd);
  func_0x000107479cb8();
  pppppuStack_3b8 = (undefined *****)0x0;
  uStack_398 = 1;
  uStack_394 = 1;
  ppppppppuStack_3c0 = (undefined ********)extraout_x9_00;
  uStack_3a0 = extraout_w8;
  func_0x00010747a024();
  pppppppuStack_7c0 = (undefined *******)((long)param_1[0x69] - (long)param_1[0x68] >> 4);
  ppppppppuStack_7b8 = (undefined ********)CONCAT44(ppppppppuStack_7b8._4_4_,3);
  pppppppuStack_9f8 = (undefined *******)*ppppppuVar37;
  plStack_9f0 = (long *)CONCAT44(plStack_9f0._4_4_,3);
  func_0x00010747a5b4();
  FUN_10743fa44();
  lVar14 = (long)ppppppuVar53 - (long)ppppppuVar49;
  lVar38 = ((long)ppppppuVar54 - (long)ppppppuVar22) / 0xb0;
  func_0x000107479db8();
  FUN_1073e0028(apppppppuStack_f58);
  func_0x00010726b264(auStack_f48);
  func_0x000107470964(&lStack_f30);
  func_0x00010726e3b0(&uStack_f10);
  FUN_10743d7e4(&pppppuStack_c78);
LAB_10746dd2c:
  func_0x000107470964(&pppppppuStack_ee0);
  func_0x000107479a9c(uStack_a8);
  if ((bool)uVar10) {
    auVar57._8_8_ = lVar14 >> 4;
    auVar57._0_8_ = lVar38;
    return auVar57;
  }
  ___stack_chk_fail();
  func_0x000107470fd0(lVar38);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10746ddc4);
  (*pcVar8)();
LAB_10746c434:
  while (ppppppuVar37 = ppppppuVar37 + 2, ppppppuVar37 != ppppppuVar53) {
    pppppuVar16 = *ppppppuVar37;
    FUN_107469de8();
    if (((ulong)pppppuVar16 & 1) == 0) {
      func_0x000107470fd0(ppppppuVar54,ppppppuVar37);
      ppppppuVar54 = ppppppuVar54 + 2;
    }
  }
  if (ppppppuVar54 != param_1[0x69]) {
    func_0x000107470f9c(param_1 + 0x68,ppppppuVar54);
  }
  goto LAB_10746c480;
}



/* Entry: 10746e400; end: 10746e407;  */

void FUN_10746e400(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479ce4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xb0;
    func_0x000107470ee8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10746e408; end: 10746e4db;  */

byte FUN_10746e408(long param_1)

{
  long lVar1;
  byte bVar2;
  long alStack_50 [2];
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010747a684();
  lStack_40 = 0;
  uStack_38 = 0;
  func_0x000107479be0(param_1 + 0x358);
  func_0x00010724e404();
  lVar1 = *(long *)(param_1 + 0x158);
  FUN_107475f28();
  if (lVar1 == 0) {
    func_0x000107479f20(0);
    bVar2 = 0;
  }
  else {
    func_0x00010747a8cc();
    func_0x000107479f20();
    if (cRam0000000113822cb8 == '\x01') {
      bVar2 = *(byte *)(lStack_40 + 0x90) ^ 1;
    }
    else {
      func_0x000107780600(alStack_50,lStack_40);
      bVar2 = *(byte *)(alStack_50[0] + 0x58) ^ 1;
      func_0x0001074734f0(alStack_50);
    }
  }
  func_0x00010747a460();
  return bVar2 & 1;
}



/* Entry: 10746e4dc; end: 10746e5cb;  */

void FUN_10746e4dc(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined1 auStack_1f8 [16];
  long *plStack_1e8;
  long lStack_1e0;
  long *plStack_80;
  long lStack_78;
  byte bStack_40;
  undefined8 uStack_38;
  
  func_0x000107479adc();
  uStack_38 = extraout_x8;
  func_0x000104c2fe00(&plStack_1e8);
  func_0x00010747a450();
  func_0x00010747a400();
  uVar2 = bStack_40 == 1;
  if ((bool)uVar2) {
    plStack_1e8 = plStack_80;
    lStack_1e0 = lStack_78;
    if (lStack_78 != 0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10 != 0);
      if ((bStack_40 & 1) == 0) goto LAB_10746e598;
    }
    func_0x00010747a180();
    puVar3 = auStack_1f8;
    (**(code **)(*plStack_80 + 0x20))();
    *param_1 = plStack_80;
    param_1[1] = puVar3;
    *(undefined1 *)(param_1 + 2) = 1;
    func_0x000107479fd4();
    FUN_10747377c(&plStack_1e8);
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  func_0x00010747a548();
  func_0x000107479a9c(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_10746e598:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10746e5a0);
  (*pcVar1)();
}



/* Entry: 10746e5cc; end: 10746e7d7;  */

void FUN_10746e5cc(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long alStack_290 [3];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [48];
  long alStack_218 [2];
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined1 uStack_1f0;
  byte bStack_88;
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  lVar2 = param_2;
  func_0x000107479adc();
  uStack_208 = 0;
  uStack_200 = 0;
  lStack_1f8 = lVar2 + 0x358;
  uStack_1f0 = 1;
  uStack_48 = extraout_x8;
  func_0x00010724e404();
  lVar2 = *(long *)(param_2 + 0x158);
  FUN_107475f28(lVar2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[0x30] = 0;
  }
  else {
    FUN_10746b8fc(&uStack_208,lVar2 + 0x28);
  }
  func_0x00010724e49c(&lStack_1f8);
  if (lVar2 != 0) {
    func_0x00010778021c(auStack_80,uStack_208,param_4);
    FUN_10746bcac(&lStack_1f8,param_2 + 0x178,auStack_80);
    in_ZR = bStack_88 == 1;
    if ((bool)in_ZR) {
      FUN_10746bb6c(alStack_290,&lStack_1f8);
      FUN_1073ebbdc(auStack_260,alStack_290[0] + 0x2f0);
      if ((bStack_88 & 1) == 0) goto LAB_10746e75c;
      FUN_10746bb6c(alStack_218,&lStack_1f8);
      FUN_1073ebbdc(auStack_248,alStack_218[0] + 0x308);
      FUN_107471538(param_1,auStack_260);
      FUN_1073ebecc(auStack_260);
      func_0x0001074737a0(alStack_218);
      func_0x000107479f28();
    }
    else {
      func_0x000107780974(auStack_260,uStack_208,param_4);
      FUN_1073ebf60(alStack_290,auStack_260);
      FUN_1073ebf60(auStack_278,auStack_248);
      func_0x00010747a254();
      FUN_107471538();
      FUN_1073ebecc(alStack_290);
      func_0x0001073ebef4(auStack_260);
    }
    func_0x000107470f48(&lStack_1f8);
    func_0x000104c2f714(auStack_80);
  }
  func_0x000107473948(&uStack_208);
  func_0x000107479a9c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10746e75c:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10746e764);
  (*pcVar1)();
}



/* Entry: 10746e7d8; end: 10746e8df;  */

void FUN_10746e7d8(undefined1 *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long lStack_1f8;
  undefined1 auStack_1e8 [16];
  undefined4 uStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined4 uStack_1c0;
  byte bStack_40;
  undefined8 uStack_38;
  
  func_0x000107479adc();
  uStack_38 = extraout_x8;
  func_0x000107262e9c(auStack_1e8);
  func_0x00010747a450();
  func_0x00010747a400();
  uVar2 = bStack_40 == 1;
  if ((bool)uVar2) {
    uStack_1d8 = 0;
    uStack_1c0 = 0;
    func_0x00010747a180();
    FUN_107476d6c(auStack_1e8,lStack_1f8 + 0x2c0);
    func_0x000107479fd4();
    if ((bStack_40 & 1) == 0) goto LAB_10746e89c;
    func_0x00010747a180();
    FUN_107476d6c(auStack_1d0,lStack_1f8 + 0x2d8);
    func_0x000107479fd4();
    FUN_107471538(param_1,auStack_1e8);
    FUN_1073ebecc(auStack_1e8);
  }
  else {
    *param_1 = 0;
    param_1[0x30] = 0;
  }
  func_0x00010747a548();
  func_0x000107479a9c(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_10746e89c:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10746e8a4);
  (*pcVar1)();
}



/* Entry: 10746e8e0; end: 10746e93f;  */

void FUN_10746e8e0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010746e910(param_1 + 0x178);
  FUN_10746e400(param_1 + 0x328);
  puVar1 = (undefined8 *)(param_1 + 0x340);
  func_0x000107479ce4(puVar1,*puVar1);
  lVar2 = puVar1[1];
  while (lVar2 != unaff_x19) {
    lVar2 = lVar2 + -0x10;
    FUN_1074738dc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10746e940; end: 10746e947;  */

void FUN_10746e940(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479ce4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    FUN_1074738dc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10746e948; end: 10746e9d3;  */

undefined8 FUN_10746e948(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107479ce4();
  func_0x000107479be0(param_1 + 0x358);
  func_0x00010724e404();
  lVar1 = *(long *)(unaff_x20 + 0x158);
  FUN_107475f28();
  if (lVar1 == 0) {
    func_0x000107479f20(0);
    uVar2 = 1;
  }
  else {
    func_0x00010747a8cc();
    func_0x000107479f20();
    uVar2 = 0;
    func_0x000107780b4c(0);
  }
  func_0x00010747a460();
  return uVar2;
}



/* Entry: 10746e9d4; end: 10746ea63;  */

void FUN_10746e9d4(undefined1 *param_1,long param_2,undefined8 param_3,long param_4)

{
  func_0x000107279a5c(param_2);
  param_2 = param_2 + 0xa8;
  func_0x000107476068(param_2,param_3);
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    func_0x000107476190(*(undefined8 *)(param_4 + 0x18),param_2 + 0x48);
    FUN_107472e90(param_1,param_2 + 0x48);
  }
  param_1[0x170] = param_2 != 0;
  func_0x000107479fcc();
  return;
}



/* Entry: 10746ea64; end: 10746eb1f;  */

void FUN_10746ea64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x19;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x00010747a1fc();
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_48,param_3);
  func_0x00010726e300();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_60,param_4);
  func_0x00010726e300(unaff_x19,&UNK_10f4158de,auStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 10746eb20; end: 10746eb6f;  */

void FUN_10746eb20(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_30 [16];
  
  plVar1 = *(long **)(param_2 + 0x130);
  func_0x00010747a900(auStack_30);
  (**(code **)(*plVar1 + 0x28))(param_1,plVar1,auStack_30);
  func_0x000107479f28();
  return;
}



/* Entry: 10746eb70; end: 10746ebc3;  */

void FUN_10746eb70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar1;
  func_0x00010725b1d4(&uStack_20);
  func_0x00010725b1d4(&uStack_30);
  return;
}



/* Entry: 10746ebc4; end: 10746ec0b;  */

long FUN_10746ebc4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010016825c();
  func_0x00010746ebe4();
  lVar1 = unaff_x19;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10746ec0c; end: 10746ed27;  */

void FUN_10746ec0c(void)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined *puVar11;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  undefined **unaff_x20;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long *plVar16;
  char cStack_841;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined **ppuStack_828;
  undefined *puStack_820;
  undefined *puStack_818;
  undefined *puStack_810;
  undefined *puStack_808;
  undefined4 uStack_7fc;
  long alStack_7f8 [3];
  undefined8 uStack_7e0;
  undefined1 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  long lStack_7c0;
  undefined1 auStack_7b8 [24];
  undefined8 *puStack_7a0;
  undefined1 auStack_710 [24];
  undefined1 auStack_6f8 [176];
  byte bStack_648;
  undefined1 auStack_640 [32];
  undefined1 auStack_620 [56];
  long alStack_5e8 [3];
  undefined ***pppuStack_5d0;
  undefined **ppuStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined ***pppuStack_590;
  undefined8 uStack_460;
  undefined4 uStack_458;
  undefined8 uStack_428;
  undefined **appuStack_3c0 [3];
  undefined1 *puStack_3a8;
  undefined1 auStack_3a0 [376];
  undefined8 uStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined1 auStack_1f8 [24];
  undefined **appuStack_1e0 [3];
  undefined ***pppuStack_1c8;
  undefined1 auStack_1c0 [376];
  undefined8 uStack_48;
  
  func_0x000107479ce4();
  func_0x000107479adc();
  uStack_48 = extraout_x8;
  func_0x00010747a900(appuStack_1e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_1f8,appuStack_1e0[0][2]);
  func_0x0001074737a0(appuStack_1e0);
  appuStack_1e0[0] = &PTR_FUN_1109b34f0;
  pppuStack_1c8 = appuStack_1e0;
  FUN_10746e9d4(auStack_1c0,unaff_x20 + 0x2f,unaff_x19 + 0xc0,appuStack_1e0);
  func_0x00010747a844();
  FUN_1074766a0(appuStack_1e0);
  ppuVar4 = (undefined **)unaff_x20[0x27];
  ppuVar9 = (undefined **)(unaff_x19 + 0xc0);
  FUN_1074db800();
  puVar14 = (undefined8 *)unaff_x20[0x69];
  for (puVar12 = (undefined8 *)unaff_x20[0x68]; uVar3 = puVar12 == puVar14, !(bool)uVar3;
      puVar12 = puVar12 + 2) {
    unaff_x20 = (undefined **)*puVar12;
    if (unaff_x20[0x21] != (undefined *)0x0) {
      ppuVar4 = unaff_x20 + 0x1e;
      func_0x0001072eb65c(ppuVar4,unaff_x19 + 0xc0);
      ppuVar9 = ppuVar4;
      if (ppuVar4 != (undefined **)0x0) {
        func_0x0001072eb6f8(unaff_x20 + 0x1e);
        ppuVar4 = unaff_x20;
        FUN_10746a068();
      }
    }
  }
  func_0x000107479f38();
  func_0x000107479a9c(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  ppuVar5 = ppuVar4;
  func_0x000107479f38();
  func_0x000107479c68();
  puStack_3a8 = (undefined1 *)appuStack_3c0;
  pppuVar10 = appuStack_3c0;
  pppuVar6 = appuStack_3c0;
  pcStack_208 = FUN_10746ed28;
  uStack_228 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  appuStack_3c0[0] = &PTR_DAT_1109b3570;
  ppuVar5 = ppuVar5 + 0x2f;
  ppuVar9 = ppuVar9 + 0x18;
  ppuStack_220 = unaff_x20;
  ppuStack_218 = ppuVar4;
  puStack_210 = &stack0xfffffffffffffff0;
  FUN_10746e9d4(auStack_3a0);
  func_0x000107470f48(auStack_3a0);
  FUN_1074766a0();
  func_0x000107479a9c(uStack_228);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107479dac();
  FUN_1074766a0();
  func_0x000107479c68();
  func_0x000107479cac();
  func_0x000107479adc();
  uStack_428 = extraout_x8_00;
  *(int *)((long)pppuVar6 + 0x41c) = *(int *)((long)pppuVar6 + 0x41c) + 1;
  lVar7 = *(long *)((long)pppuVar6 + 0x128);
  FUN_10747b8dc(lVar7,*ppuVar5);
  puVar15 = ppuVar4[0x25];
  puVar11 = *unaff_x20;
  if (lVar7 == 0) {
    puStack_818 = unaff_x20[1];
    puStack_820 = puVar11;
    if (puStack_818 != (undefined *)0x0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10_00 != 0);
    }
    uVar1 = *(undefined4 *)((long)pppuVar10 + 0xf8);
    puVar12 = &uStack_840;
    FUN_10746eb70(puVar12,ppuVar4 + 0x85);
    puStack_7a0 = (undefined8 *)0x0;
    ppuStack_828 = ppuVar4;
    func_0x00010747a070();
    *puVar12 = &PTR_SUB_1109b36b0;
    puVar12[2] = uStack_838;
    puVar12[1] = uStack_840;
    uStack_840 = 0;
    uStack_838 = 0;
    puVar12[3] = uStack_830;
    puVar12[4] = ppuVar4;
    puStack_7a0 = puVar12;
    FUN_10747b0e0(puVar15,&puStack_820,1,uVar1,auStack_7b8);
    func_0x00010724b884(auStack_7b8);
    func_0x00010725b1d4(&uStack_840);
    func_0x00010725af58(&puStack_820);
  }
  else {
    puStack_808 = unaff_x20[1];
    puStack_810 = puVar11;
    if (puStack_808 != (undefined *)0x0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10 != 0);
    }
    FUN_10747b570(puVar15,&puStack_810,1);
    func_0x00010725af58(&puStack_810);
    FUN_1074db800(ppuVar4[0x27],*unaff_x20);
  }
  FUN_10746f318(ppuVar4[0x4e],&UNK_10de725be);
  cStack_841 = '\0';
  pppuVar6 = &ppuStack_5a8;
  func_0x000104c2fe00(pppuVar6,*unaff_x20);
  func_0x00010747a070();
  *pppuVar6 = &PTR_FUN_1109b3740;
  pppuVar6[1] = (undefined **)&cStack_841;
  pppuVar6[2] = ppuVar4;
  pppuVar6[3] = ppuVar9;
  pppuVar6[4] = unaff_x20;
  pppuStack_5d0 = pppuVar6;
  FUN_10746e9d4(auStack_7b8,ppuVar4 + 0x2f,&ppuStack_5a8,alStack_5e8);
  plVar13 = alStack_5e8;
  FUN_1074766a0();
  func_0x00010747a880();
  if (cStack_841 == '\x01') {
    if ((bStack_648 & 1) == 0) goto LAB_10746f208;
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x00010747a7dc();
    lStack_7c0 = ((long)plVar13 - (long)ppuStack_5a8[0x65]) / 1000;
    func_0x0001074737a0(&ppuStack_5a8);
    puVar11 = ppuVar4[0x49];
    FUN_10746bb6c(alStack_5e8,auStack_7b8);
    FUN_10746ea64(&ppuStack_5a8,0xd2,*(undefined8 *)(alStack_5e8[0] + 0x10),auStack_710);
    uStack_460 = *(undefined8 *)ppuVar4[0x49];
    uStack_458 = 3;
    func_0x00010747a0f0(puVar11,&ppuStack_5a8,&lStack_7c0,&uStack_460);
    func_0x000107262330(&ppuStack_5a8);
    func_0x0001074737a0(alStack_5e8);
    func_0x000104c2fe00(&uStack_460,auStack_6f8);
    func_0x00010747a7dc();
    puVar11 = ppuStack_5a8[2];
    func_0x0001074737a0(&ppuStack_5a8);
    if (puVar11[0xb1] == '\x01') {
      plVar13 = (long *)ppuVar4[0x28];
      func_0x000107262e9c(auStack_620,auStack_710);
      func_0x0001072627ac(alStack_5e8,auStack_620);
      uStack_7d0 = 0;
      uStack_7c8 = 0;
      func_0x0001073b3fc8(auStack_640);
      alStack_7f8[0] = *(long *)(puVar11 + 0xa0) * 1000000;
      alStack_7f8[2] = *(long *)(puVar11 + 0xa8) * 1000000;
      alStack_7f8[1] = 1;
      uStack_7e0 = 1;
      uStack_7d8 = 1;
      uVar1 = *(undefined4 *)(puVar11 + 0x9c);
      uStack_7fc = 0;
      uVar3 = puVar11[0x98];
      FUN_1073b0a74();
      FUN_1073b0ad4(0,0x3ff0000000000000,&ppuStack_5a8,&uStack_460,alStack_5e8,&uStack_7d0,
                    auStack_640,alStack_7f8,uVar1,1,&uStack_7fc,uVar3);
      (**(code **)(*plVar13 + 0x28))
                (plVar13,&ppuStack_5a8,(ulong)*(uint *)(ppuVar4 + 10) | 0x100000000);
      func_0x00010730b16c(&ppuStack_5a8);
      func_0x00010730b248(auStack_640);
      func_0x00010747a178();
      func_0x00010724b3d8(alStack_5e8);
      func_0x000104c2f714(auStack_620);
    }
    func_0x00010724b810(ppuVar4 + 0x4f,&uStack_460);
    func_0x000104c2f714(&uStack_460);
  }
  func_0x0001072ab574(ppuVar4 + 0x5d);
  ppuStack_5a8 = &PTR_DAT_1109b37c0;
  pppuStack_590 = &ppuStack_5a8;
  ppuStack_5a0 = unaff_x20;
  ppuStack_598 = ppuVar4;
  FUN_10746bc68(ppuVar4 + 0x2f,&ppuStack_5a8);
  FUN_107476d38(&ppuStack_5a8);
  plVar16 = (long *)ppuVar4[0x69];
  for (plVar13 = (long *)ppuVar4[0x68]; uVar3 = plVar13 == plVar16, !(bool)uVar3;
      plVar13 = plVar13 + 2) {
    lVar7 = *plVar13;
    if (*(long *)(lVar7 + 0x108) != 0) {
      lVar8 = lVar7 + 0xf0;
      func_0x0001072eb65c(lVar8,*unaff_x20);
      if (lVar8 != 0) {
        func_0x0001072eb6f8(lVar7 + 0xf0);
        lVar8 = lVar7 + 0x98;
        FUN_107469f90(lVar8,*unaff_x20);
        if (lVar8 == 0) {
          ppuVar4 = (undefined **)*unaff_x20;
          ppuStack_5a0 = (undefined **)unaff_x20[1];
          ppuStack_5a8 = ppuVar4;
          if (ppuStack_5a0 != (undefined **)0x0) {
            do {
              func_0x000107479b20();
            } while (extraout_w10_01 != 0);
          }
          func_0x0001074737c4(lVar7 + 0x68);
          FUN_107469fbc(&ppuStack_598);
          FUN_10746a0c0(alStack_5e8,lVar7 + 0x98,ppuVar4,&ppuStack_5a8);
          func_0x000107470508(&ppuStack_5a8);
        }
        else {
          func_0x00010747a81c();
        }
        FUN_10746a068(lVar7);
      }
    }
  }
  func_0x00010747a310();
  func_0x000107470f48(auStack_7b8);
  func_0x000107479a9c(uStack_428);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_10746f208:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10746f210);
  (*pcVar2)();
}



/* Entry: 10746ed28; end: 10746edb3;  */

void FUN_10746ed28(long param_1,long param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined ***pppuVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined8 extraout_x8;
  undefined *puVar10;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined **unaff_x19;
  undefined **unaff_x20;
  long *plVar11;
  undefined *puVar12;
  long *plVar13;
  char cStack_641;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined *puStack_610;
  undefined *puStack_608;
  undefined4 uStack_5fc;
  long alStack_5f8 [3];
  undefined8 uStack_5e0;
  undefined1 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  long lStack_5c0;
  undefined1 auStack_5b8 [24];
  undefined8 *puStack_5a0;
  undefined1 auStack_510 [24];
  undefined1 auStack_4f8 [176];
  byte bStack_448;
  undefined1 auStack_440 [32];
  undefined1 auStack_420 [56];
  long alStack_3e8 [3];
  undefined ***pppuStack_3d0;
  undefined **ppuStack_3a8;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined8 uStack_228;
  undefined **appuStack_1c0 [3];
  undefined1 *puStack_1a8;
  undefined1 auStack_1a0 [376];
  undefined8 uStack_28;
  
  puStack_1a8 = (undefined1 *)appuStack_1c0;
  pppuVar9 = appuStack_1c0;
  pppuVar4 = appuStack_1c0;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  appuStack_1c0[0] = &PTR_DAT_1109b3570;
  puVar6 = (undefined8 *)(param_1 + 0x178);
  ppuVar8 = (undefined **)(param_2 + 0xc0);
  FUN_10746e9d4(auStack_1a0);
  func_0x000107470f48(auStack_1a0);
  FUN_1074766a0();
  FUN_107479a9c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107479dac();
  FUN_1074766a0();
  func_0x000107479c68();
  func_0x000107479cac();
  func_0x000107479adc();
  uStack_228 = extraout_x8;
  *(int *)((long)pppuVar4 + 0x41c) = *(int *)((long)pppuVar4 + 0x41c) + 1;
  lVar5 = *(long *)((long)pppuVar4 + 0x128);
  FUN_10747b8dc(lVar5,*puVar6);
  puVar12 = unaff_x19[0x25];
  puVar10 = *unaff_x20;
  if (lVar5 == 0) {
    puStack_618 = unaff_x20[1];
    puStack_620 = puVar10;
    if (puStack_618 != (undefined *)0x0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10_00 != 0);
    }
    uVar1 = *(undefined4 *)((long)pppuVar9 + 0xf8);
    puVar6 = &uStack_640;
    FUN_10746eb70(puVar6,unaff_x19 + 0x85);
    puStack_5a0 = (undefined8 *)0x0;
    func_0x00010747a070();
    *puVar6 = &PTR_SUB_1109b36b0;
    puVar6[2] = uStack_638;
    puVar6[1] = uStack_640;
    uStack_640 = 0;
    uStack_638 = 0;
    puVar6[3] = uStack_630;
    puVar6[4] = unaff_x19;
    puStack_5a0 = puVar6;
    FUN_10747b0e0(puVar12,&puStack_620,1,uVar1,auStack_5b8);
    func_0x00010724b884(auStack_5b8);
    func_0x00010725b1d4(&uStack_640);
    func_0x00010725af58(&puStack_620);
  }
  else {
    puStack_608 = unaff_x20[1];
    puStack_610 = puVar10;
    if (puStack_608 != (undefined *)0x0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10 != 0);
    }
    FUN_10747b570(puVar12,&puStack_610,1);
    func_0x00010725af58(&puStack_610);
    FUN_1074db800(unaff_x19[0x27],*unaff_x20);
  }
  FUN_10746f318(unaff_x19[0x4e],&UNK_10de725be);
  cStack_641 = '\0';
  pppuVar4 = &ppuStack_3a8;
  func_0x000104c2fe00(pppuVar4,*unaff_x20);
  func_0x00010747a070();
  *pppuVar4 = &PTR_FUN_1109b3740;
  pppuVar4[1] = (undefined **)&cStack_641;
  pppuVar4[2] = unaff_x19;
  pppuVar4[3] = ppuVar8;
  pppuVar4[4] = unaff_x20;
  pppuStack_3d0 = pppuVar4;
  FUN_10746e9d4(auStack_5b8,unaff_x19 + 0x2f,&ppuStack_3a8,alStack_3e8);
  plVar11 = alStack_3e8;
  FUN_1074766a0();
  func_0x00010747a880();
  if (cStack_641 == '\x01') {
    if ((bStack_448 & 1) == 0) goto LAB_10746f208;
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x00010747a7dc();
    lStack_5c0 = ((long)plVar11 - (long)ppuStack_3a8[0x65]) / 1000;
    func_0x0001074737a0(&ppuStack_3a8);
    puVar10 = unaff_x19[0x49];
    FUN_10746bb6c(alStack_3e8,auStack_5b8);
    FUN_10746ea64(&ppuStack_3a8,0xd2,*(undefined8 *)(alStack_3e8[0] + 0x10),auStack_510);
    uStack_260 = *(undefined8 *)unaff_x19[0x49];
    uStack_258 = 3;
    func_0x00010747a0f0(puVar10,&ppuStack_3a8,&lStack_5c0,&uStack_260);
    func_0x000107262330(&ppuStack_3a8);
    func_0x0001074737a0(alStack_3e8);
    func_0x000104c2fe00(&uStack_260,auStack_4f8);
    func_0x00010747a7dc();
    puVar10 = ppuStack_3a8[2];
    func_0x0001074737a0(&ppuStack_3a8);
    if (puVar10[0xb1] == '\x01') {
      plVar11 = (long *)unaff_x19[0x28];
      func_0x000107262e9c(auStack_420,auStack_510);
      func_0x0001072627ac(alStack_3e8,auStack_420);
      uStack_5d0 = 0;
      uStack_5c8 = 0;
      func_0x0001073b3fc8(auStack_440);
      alStack_5f8[0] = *(long *)(puVar10 + 0xa0) * 1000000;
      alStack_5f8[2] = *(long *)(puVar10 + 0xa8) * 1000000;
      alStack_5f8[1] = 1;
      uStack_5e0 = 1;
      uStack_5d8 = 1;
      uVar1 = *(undefined4 *)(puVar10 + 0x9c);
      uStack_5fc = 0;
      uVar3 = puVar10[0x98];
      FUN_1073b0a74();
      FUN_1073b0ad4(0,0x3ff0000000000000,&ppuStack_3a8,&uStack_260,alStack_3e8,&uStack_5d0,
                    auStack_440,alStack_5f8,uVar1,1,&uStack_5fc,uVar3);
      (**(code **)(*plVar11 + 0x28))
                (plVar11,&ppuStack_3a8,(ulong)*(uint *)(unaff_x19 + 10) | 0x100000000);
      func_0x00010730b16c(&ppuStack_3a8);
      func_0x00010730b248(auStack_440);
      func_0x00010747a178();
      func_0x00010724b3d8(alStack_3e8);
      func_0x000104c2f714(auStack_420);
    }
    func_0x00010724b810(unaff_x19 + 0x4f,&uStack_260);
    func_0x000104c2f714(&uStack_260);
  }
  func_0x0001072ab574(unaff_x19 + 0x5d);
  ppuStack_3a8 = &PTR_DAT_1109b37c0;
  FUN_10746bc68(unaff_x19 + 0x2f,&ppuStack_3a8);
  FUN_107476d38(&ppuStack_3a8);
  plVar13 = (long *)unaff_x19[0x69];
  for (plVar11 = (long *)unaff_x19[0x68]; uVar3 = plVar11 == plVar13, !(bool)uVar3;
      plVar11 = plVar11 + 2) {
    lVar5 = *plVar11;
    if (*(long *)(lVar5 + 0x108) != 0) {
      lVar7 = lVar5 + 0xf0;
      func_0x0001072eb65c(lVar7,*unaff_x20);
      if (lVar7 != 0) {
        func_0x0001072eb6f8(lVar5 + 0xf0);
        lVar7 = lVar5 + 0x98;
        FUN_107469f90(lVar7,*unaff_x20);
        if (lVar7 == 0) {
          ppuVar8 = (undefined **)*unaff_x20;
          ppuStack_3a8 = ppuVar8;
          if (unaff_x20[1] != (undefined *)0x0) {
            do {
              func_0x000107479b20();
            } while (extraout_w10_01 != 0);
          }
          func_0x0001074737c4(lVar5 + 0x68);
          FUN_107469fbc(&stack0xfffffffffffffc68);
          FUN_10746a0c0(alStack_3e8,lVar5 + 0x98,ppuVar8,&ppuStack_3a8);
          func_0x000107470508(&ppuStack_3a8);
        }
        else {
          func_0x00010747a81c();
        }
        FUN_10746a068(lVar5);
      }
    }
  }
  func_0x00010747a310();
  func_0x000107470f48(auStack_5b8);
  FUN_107479a9c(uStack_228);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_10746f208:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10746f210);
  (*pcVar2)();
}



/* Entry: 10746edb4; end: 10746f317;  */

void FUN_10746edb4(long param_1,undefined8 *param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined *puVar9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined **unaff_x19;
  undefined **unaff_x20;
  long *plVar10;
  undefined *puVar11;
  long *plVar12;
  char cStack_481;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined4 uStack_43c;
  long alStack_438 [3];
  undefined8 uStack_420;
  undefined1 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined1 auStack_3f8 [24];
  undefined8 *puStack_3e0;
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [176];
  byte bStack_288;
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [56];
  long alStack_228 [3];
  undefined ***pppuStack_210;
  undefined **ppuStack_1e8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_68;
  
  func_0x000107479cac();
  func_0x000107479adc();
  *(int *)(param_1 + 0x41c) = *(int *)(param_1 + 0x41c) + 1;
  lVar5 = *(long *)(param_1 + 0x128);
  uStack_68 = extraout_x8;
  FUN_10747b8dc(lVar5,*param_2);
  puVar11 = unaff_x19[0x25];
  puVar9 = *unaff_x20;
  if (lVar5 == 0) {
    puStack_458 = unaff_x20[1];
    puStack_460 = puVar9;
    if (puStack_458 != (undefined *)0x0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10_00 != 0);
    }
    uVar2 = *(undefined4 *)(param_4 + 0xf8);
    puVar6 = &uStack_480;
    FUN_10746eb70(puVar6,unaff_x19 + 0x85);
    puStack_3e0 = (undefined8 *)0x0;
    func_0x00010747a070();
    *puVar6 = &PTR_SUB_1109b36b0;
    puVar6[2] = uStack_478;
    puVar6[1] = uStack_480;
    uStack_480 = 0;
    uStack_478 = 0;
    puVar6[3] = uStack_470;
    puVar6[4] = unaff_x19;
    puStack_3e0 = puVar6;
    FUN_10747b0e0(puVar11,&puStack_460,1,uVar2,auStack_3f8);
    func_0x00010724b884(auStack_3f8);
    func_0x00010725b1d4(&uStack_480);
    func_0x00010725af58(&puStack_460);
  }
  else {
    puStack_448 = unaff_x20[1];
    puStack_450 = puVar9;
    if (puStack_448 != (undefined *)0x0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10 != 0);
    }
    FUN_10747b570(puVar11,&puStack_450,1);
    func_0x00010725af58(&puStack_450);
    FUN_1074db800(unaff_x19[0x27],*unaff_x20);
  }
  FUN_10746f318(unaff_x19[0x4e],&UNK_10de725be);
  cStack_481 = '\0';
  pppuVar7 = &ppuStack_1e8;
  func_0x000104c2fe00(pppuVar7,*unaff_x20);
  func_0x00010747a070();
  *pppuVar7 = &PTR_FUN_1109b3740;
  pppuVar7[1] = (undefined **)&cStack_481;
  pppuVar7[2] = unaff_x19;
  pppuVar7[3] = param_3;
  pppuVar7[4] = unaff_x20;
  pppuStack_210 = pppuVar7;
  FUN_10746e9d4(auStack_3f8,unaff_x19 + 0x2f,&ppuStack_1e8,alStack_228);
  plVar10 = alStack_228;
  FUN_1074766a0();
  func_0x00010747a880();
  if (cStack_481 == '\x01') {
    if ((bStack_288 & 1) == 0) goto LAB_10746f208;
    __ZNSt3__16chrono12steady_clock3nowEv();
    func_0x00010747a7dc();
    lStack_400 = ((long)plVar10 - (long)ppuStack_1e8[0x65]) / 1000;
    func_0x0001074737a0(&ppuStack_1e8);
    puVar9 = unaff_x19[0x49];
    FUN_10746bb6c(alStack_228,auStack_3f8);
    FUN_10746ea64(&ppuStack_1e8,0xd2,*(undefined8 *)(alStack_228[0] + 0x10),auStack_350);
    uStack_a0 = *(undefined8 *)unaff_x19[0x49];
    uStack_98 = 3;
    func_0x00010747a0f0(puVar9,&ppuStack_1e8,&lStack_400,&uStack_a0);
    func_0x000107262330(&ppuStack_1e8);
    func_0x0001074737a0(alStack_228);
    func_0x000104c2fe00(&uStack_a0,auStack_338);
    func_0x00010747a7dc();
    puVar9 = ppuStack_1e8[2];
    func_0x0001074737a0(&ppuStack_1e8);
    if (puVar9[0xb1] == '\x01') {
      plVar10 = (long *)unaff_x19[0x28];
      func_0x000107262e9c(auStack_260,auStack_350);
      func_0x0001072627ac(alStack_228,auStack_260);
      uStack_410 = 0;
      uStack_408 = 0;
      func_0x0001073b3fc8(auStack_280);
      alStack_438[0] = *(long *)(puVar9 + 0xa0) * 1000000;
      alStack_438[2] = *(long *)(puVar9 + 0xa8) * 1000000;
      alStack_438[1] = 1;
      uStack_420 = 1;
      uStack_418 = 1;
      uVar2 = *(undefined4 *)(puVar9 + 0x9c);
      uStack_43c = 0;
      uVar4 = puVar9[0x98];
      FUN_1073b0a74();
      FUN_1073b0ad4(0,0x3ff0000000000000,&ppuStack_1e8,&uStack_a0,alStack_228,&uStack_410,
                    auStack_280,alStack_438,uVar2,1,&uStack_43c,uVar4);
      (**(code **)(*plVar10 + 0x28))
                (plVar10,&ppuStack_1e8,(ulong)*(uint *)(unaff_x19 + 10) | 0x100000000);
      func_0x00010730b16c(&ppuStack_1e8);
      func_0x00010730b248(auStack_280);
      func_0x00010747a178();
      func_0x00010724b3d8(alStack_228);
      func_0x000104c2f714(auStack_260);
    }
    func_0x00010724b810(unaff_x19 + 0x4f,&uStack_a0);
    func_0x000104c2f714(&uStack_a0);
  }
  func_0x0001072ab574(unaff_x19 + 0x5d);
  ppuStack_1e8 = &PTR_DAT_1109b37c0;
  FUN_10746bc68(unaff_x19 + 0x2f,&ppuStack_1e8);
  FUN_107476d38(&ppuStack_1e8);
  plVar12 = (long *)unaff_x19[0x69];
  for (plVar10 = (long *)unaff_x19[0x68]; uVar4 = plVar10 == plVar12, !(bool)uVar4;
      plVar10 = plVar10 + 2) {
    lVar5 = *plVar10;
    if (*(long *)(lVar5 + 0x108) != 0) {
      lVar8 = lVar5 + 0xf0;
      func_0x0001072eb65c(lVar8,*unaff_x20);
      if (lVar8 != 0) {
        func_0x0001072eb6f8(lVar5 + 0xf0);
        lVar8 = lVar5 + 0x98;
        FUN_107469f90(lVar8,*unaff_x20);
        if (lVar8 == 0) {
          ppuVar1 = (undefined **)*unaff_x20;
          ppuStack_1e8 = ppuVar1;
          if (unaff_x20[1] != (undefined *)0x0) {
            do {
              func_0x000107479b20();
            } while (extraout_w10_01 != 0);
          }
          func_0x0001074737c4(lVar5 + 0x68);
          FUN_107469fbc(&stack0xfffffffffffffe28);
          FUN_10746a0c0(alStack_228,lVar5 + 0x98,ppuVar1,&ppuStack_1e8);
          func_0x000107470508(&ppuStack_1e8);
        }
        else {
          func_0x00010747a81c();
        }
        FUN_10746a068(lVar5);
      }
    }
  }
  func_0x00010747a310();
  func_0x000107470f48(auStack_3f8);
  func_0x000107479a9c(uStack_68);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_10746f208:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10746f210);
  (*pcVar3)();
}



/* Entry: 10746f318; end: 10746f343;  */

long FUN_10746f318(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  if (param_1 != 0) {
    func_0x00010747a260();
    (*extraout_x8)();
    return param_1;
  }
  func_0x000104bfeb48();
  if (*(char *)(param_1 + 0x158) == '\x02') {
    lVar2 = 0;
    if ((char)param_2[2] != '\x01') goto LAB_10746f3f8;
  }
  else {
    if (*(char *)(param_1 + 0x158) != '\x01') {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x150) = param_3;
    lVar2 = 1;
    if ((*(byte *)(param_2 + 2) & 1) == 0) goto LAB_10746f3f8;
  }
  plVar1 = (long *)(param_1 + 0x160);
  if (plVar1 != param_2) {
    lStack_58 = param_2[1];
    lStack_60 = *param_2;
    if (param_2[1] != 0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10 != 0);
    }
    if (*plVar1 != 0) {
      do {
        func_0x00010747a1cc();
      } while (extraout_w10_00 != 0);
    }
    FUN_107473260(plVar1,&lStack_60);
    FUN_1073c5fb4(&lStack_60);
    if (*plVar1 != 0) {
      do {
        func_0x00010747a1cc();
      } while (extraout_w10_01 != 0);
    }
  }
LAB_10746f3f8:
  *(undefined1 *)(param_1 + 0x158) = 3;
  return lVar2;
}



/* Entry: 10746f344; end: 10746f41f;  */

undefined8 FUN_10746f344(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  if (*(char *)(param_1 + 0x158) == '\x02') {
    uVar2 = 0;
    if ((char)param_2[2] != '\x01') goto LAB_10746f3f8;
  }
  else {
    if (*(char *)(param_1 + 0x158) != '\x01') {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x150) = param_3;
    uVar2 = 1;
    if ((*(byte *)(param_2 + 2) & 1) == 0) goto LAB_10746f3f8;
  }
  plVar1 = (long *)(param_1 + 0x160);
  if (plVar1 != param_2) {
    lStack_38 = param_2[1];
    lStack_40 = *param_2;
    if (param_2[1] != 0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10 != 0);
    }
    if (*plVar1 != 0) {
      do {
        func_0x00010747a1cc();
      } while (extraout_w10_00 != 0);
    }
    FUN_107473260(plVar1,&lStack_40);
    FUN_1073c5fb4(&lStack_40);
    if (*plVar1 != 0) {
      do {
        func_0x00010747a1cc();
      } while (extraout_w10_01 != 0);
    }
  }
LAB_10746f3f8:
  *(undefined1 *)(param_1 + 0x158) = 3;
  return uVar2;
}



/* Entry: 10746f420; end: 10746f443;  */

void FUN_10746f420(long param_1)

{
  func_0x000107479eb4();
  if (param_1 != 0) {
    func_0x00010747a7d4();
  }
  return;
}



/* Entry: 10746f444; end: 10746fb2f;  */

void FUN_10746f444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long **pplVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long **pplVar12;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar13;
  ulong extraout_x9_01;
  ulong uVar14;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar15;
  long *plVar16;
  long *extraout_x10;
  ulong uVar17;
  ulong uVar18;
  ulong extraout_x11;
  long unaff_x19;
  long *plVar19;
  ulong unaff_x26;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined8 in_register_00005008;
  undefined1 auStack_310 [24];
  char cStack_2f8;
  undefined1 auStack_2f0 [24];
  char cStack_2d8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  long **pplStack_270;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [56];
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_b0;
  long lStack_a8;
  byte bStack_a0;
  undefined8 uStack_70;
  
  uVar23 = (undefined4)((ulong)param_1 >> 0x20);
  fVar22 = (float)param_1;
  func_0x00010747a364();
  func_0x000107479adc();
  bVar2 = *(byte *)(param_6 + 0x20);
  uVar6 = (int)(bVar2 - 1) < 0;
  uStack_70 = extraout_x8;
  if (bVar2 == 1) {
    lStack_a8 = unaff_x19 + 0x58;
    bStack_a0 = bVar2;
    func_0x000107279a5c();
    uVar14 = unaff_x19 + 0x118;
    func_0x000100102e7c();
    uVar21 = *(ulong *)(unaff_x19 + 0x108);
    if (uVar21 != 0) {
      uVar20 = uVar21 - 1;
      if ((uVar21 & uVar20) == 0) {
        unaff_x26 = uVar20 & uVar14;
        uVar6 = false;
      }
      else {
        uVar6 = (long)(uVar14 - uVar21) < 0;
        unaff_x26 = uVar14;
        if (uVar21 <= uVar14) {
          uVar11 = 0;
          if (uVar21 != 0) {
            uVar11 = uVar14 / uVar21;
          }
          unaff_x26 = uVar14 - uVar11 * uVar21;
        }
      }
      plVar19 = *(long **)(*(long *)(unaff_x19 + 0x100) + unaff_x26 * 8);
      if (plVar19 != (long *)0x0) {
        do {
          while( true ) {
            plVar19 = (long *)*plVar19;
            if (plVar19 == (long *)0x0) goto LAB_10746f538;
            uVar11 = plVar19[1];
            uVar6 = (long)(uVar11 - uVar14) < 0;
            if (uVar11 != uVar14) break;
            plVar8 = plVar19 + 2;
            func_0x0001000e107c();
            if (((ulong)plVar8 & 1) != 0) goto LAB_10746f7b0;
          }
          if ((uVar21 & uVar20) == 0) {
            uVar11 = uVar11 & uVar20;
          }
          else if (uVar21 <= uVar11) {
            uVar13 = 0;
            if (uVar21 != 0) {
              uVar13 = uVar11 / uVar21;
            }
            uVar11 = uVar11 - uVar13 * uVar21;
          }
          uVar6 = (long)(uVar11 - unaff_x26) < 0;
        } while (uVar11 == unaff_x26);
      }
    }
LAB_10746f538:
    plVar19 = (long *)0x48;
    __Znwm();
    plVar8 = (long *)(unaff_x19 + 0x110);
    uStack_278 = 0;
    *plVar19 = 0;
    plVar19[1] = uVar14;
    plStack_288 = plVar19;
    plStack_280 = plVar8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar19 + 2);
    plVar19[8] = 0;
    uStack_278 = CONCAT71(uStack_278._1_7_,1);
    func_0x00010747a138(*(undefined8 *)(unaff_x19 + 0x118));
    if ((uVar21 == 0) || (func_0x00010747a1a8(), (bool)uVar6)) {
      bVar5 = 2 < uVar21;
      bVar7 = uVar21 == 3;
      func_0x000107479aec(uVar21 << 1);
      uVar20 = extraout_x8_00;
      if (!bVar5 || bVar7) {
        uVar20 = extraout_x9;
      }
      if (uVar20 - 1 == 0) {
        uVar20 = 2;
      }
      else if ((uVar20 & uVar20 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      uVar21 = *(ulong *)(unaff_x19 + 0x108);
      if (uVar21 < uVar20) {
LAB_10746f5d8:
        if (uVar20 >> 0x3d != 0) goto LAB_10746fa5c;
        lVar9 = uVar20 << 3;
        __Znwm(lVar9);
        FUN_107479a3c(unaff_x19 + 0x100,lVar9);
        uVar21 = 0;
        *(ulong *)(unaff_x19 + 0x108) = uVar20;
        lVar9 = *(long *)(unaff_x19 + 0x100);
        while (uVar20 != uVar21) {
          func_0x00010747a6cc();
          lVar9 = extraout_x8_01;
          uVar21 = extraout_x9_00;
        }
        plVar15 = (long *)*plVar8;
        uVar21 = uVar20;
        if (plVar15 != (long *)0x0) {
          uVar17 = plVar15[1];
          uVar13 = uVar20 - 1;
          uVar11 = 0;
          if (uVar20 != 0) {
            uVar11 = uVar17 / uVar20;
          }
          uVar18 = uVar17;
          if (uVar20 <= uVar17) {
            uVar18 = uVar17 - uVar11 * uVar20;
          }
          if ((uVar20 & uVar13) == 0) {
            uVar18 = uVar17 & uVar13;
          }
          *(long **)(lVar9 + uVar18 * 8) = plVar8;
          while (plVar16 = plVar15, plVar15 = (long *)*plVar16, plVar15 != (long *)0x0) {
            uVar11 = plVar15[1];
            if ((uVar20 & uVar13) == 0) {
              uVar11 = uVar11 & uVar13;
            }
            else if (uVar20 <= uVar11) {
              uVar17 = 0;
              if (uVar20 != 0) {
                uVar17 = uVar11 / uVar20;
              }
              uVar11 = uVar11 - uVar17 * uVar20;
            }
            if (uVar11 != uVar18) {
              if (*(long *)(lVar9 + uVar11 * 8) == 0) {
                *(long **)(lVar9 + uVar11 * 8) = plVar16;
                uVar18 = uVar11;
              }
              else {
                *plVar16 = *plVar15;
                func_0x000107479ba4();
                lVar9 = extraout_x8_02;
                uVar13 = extraout_x9_01;
                plVar15 = extraout_x10;
                uVar18 = extraout_x11;
              }
            }
          }
        }
      }
      else if (uVar20 < uVar21) {
        fVar22 = (float)*(ulong *)(unaff_x19 + 0x118) / *(float *)(unaff_x19 + 0x120);
        uVar23 = 0;
        in_register_00005008 = 0;
        uVar11 = (ulong)fVar22;
        if ((uVar21 < 3) || ((uVar21 & uVar21 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x000107479ab0();
        }
        if (uVar20 <= uVar11) {
          uVar20 = uVar11;
        }
        if (uVar20 < uVar21) {
          if (uVar20 != 0) goto LAB_10746f5d8;
          FUN_107479a3c(unaff_x19 + 0x100,0);
          *(undefined8 *)(unaff_x19 + 0x108) = 0;
          uVar21 = 0;
        }
        else {
          uVar21 = *(ulong *)(unaff_x19 + 0x108);
        }
      }
      if ((uVar21 & uVar21 - 1) == 0) {
        unaff_x26 = uVar21 - 1 & uVar14;
      }
      else {
        unaff_x26 = uVar14;
        if (uVar21 <= uVar14) {
          uVar20 = 0;
          if (uVar21 != 0) {
            uVar20 = uVar14 / uVar21;
          }
          unaff_x26 = uVar14 - uVar20 * uVar21;
        }
      }
    }
    lVar9 = *(long *)(unaff_x19 + 0x100);
    plVar15 = *(long **)(lVar9 + unaff_x26 * 8);
    if (plVar15 == (long *)0x0) {
      *plVar19 = *plVar8;
      *plVar8 = (long)plVar19;
      *(long **)(lVar9 + unaff_x26 * 8) = plVar8;
      if (*plVar19 != 0) {
        uVar14 = *(ulong *)(*plVar19 + 8);
        if ((uVar21 & uVar21 - 1) == 0) {
          uVar14 = uVar14 & uVar21 - 1;
        }
        else if (uVar21 <= uVar14) {
          uVar20 = 0;
          if (uVar21 != 0) {
            uVar20 = uVar14 / uVar21;
          }
          uVar14 = uVar14 - uVar20 * uVar21;
        }
        *(long **)(lVar9 + uVar14 * 8) = plVar19;
      }
    }
    else {
      *plVar19 = *plVar15;
      *plVar15 = (long)plVar19;
    }
    plStack_288 = (long *)0x0;
    *(long *)(unaff_x19 + 0x118) = *(long *)(unaff_x19 + 0x118) + 1;
    FUN_107475e20(&plStack_288);
LAB_10746f7b0:
    FUN_107479a54(&plStack_288,param_6);
    pplVar1 = (long **)(plVar19 + 5);
    if (pplVar1 != &plStack_288) {
      pplVar12 = (long **)plVar19[8];
      if (pplStack_270 == &plStack_288) {
        if (pplVar12 == pplVar1) {
          func_0x00010747a370();
          (*extraout_x8_04)();
          func_0x000107479d1c(pplStack_270);
          pplStack_270 = (long **)0x0;
          func_0x00010747a370(plVar19[8]);
          (*extraout_x8_05)();
          func_0x000107479d1c(plVar19[8]);
          plVar19[8] = 0;
          pplStack_270 = &plStack_288;
          (**(code **)(CONCAT71(uStack_e7,uStack_e8) + 0x18))(&uStack_e8,pplVar1);
          (**(code **)(CONCAT71(uStack_e7,uStack_e8) + 0x20))(&uStack_e8);
        }
        else {
          func_0x00010747a370();
          (*extraout_x8_03)();
          func_0x000107479d1c(pplStack_270);
          pplStack_270 = (long **)plVar19[8];
        }
        plVar19[8] = (long)pplVar1;
      }
      else if (pplVar12 == pplVar1) {
        (*(code *)(*pplVar12)[3])(pplVar12,&plStack_288);
        func_0x000107479d1c(plVar19[8]);
        plVar19[8] = (long)pplStack_270;
        pplStack_270 = &plStack_288;
      }
      else {
        plVar19[8] = (long)pplStack_270;
        pplStack_270 = pplVar12;
      }
    }
    func_0x000107470ac4(&plStack_288);
    func_0x000107279ee0(&lStack_a8);
  }
  lVar9 = *(long *)(unaff_x19 + 0x158);
  FUN_107475f28();
  if (lVar9 == 0) {
    func_0x00010028af84(auStack_2f0,param_4);
    func_0x00010747a944();
    uVar6 = cStack_2d8 == '\x01';
    if ((bool)uVar6) {
      func_0x000107262e9c(auStack_120,auStack_2f0);
      func_0x00010747a950();
    }
    else {
      uStack_e8 = 0;
      uStack_b0 = 0;
    }
    func_0x00010747a248();
    uStack_2a0 = CONCAT44(uVar23,fVar22);
    uStack_298 = in_register_00005008;
    if (extraout_x8_07 != 0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001073b3fc8(auStack_140);
    func_0x00010747a150();
    func_0x00010747a69c();
    func_0x00010747a000();
    func_0x00010747a484();
    func_0x00010747a178();
    func_0x00010747a49c();
    if (cStack_2d8 != '\0') {
      func_0x00010747a3c0();
    }
    func_0x00010747a494();
    func_0x00010747a4a4(*(undefined4 *)(unaff_x19 + 0x50));
    func_0x00010747a48c();
    puVar10 = auStack_2f0;
  }
  else {
    cVar3 = *(char *)(*(long *)(lVar9 + 0x28) + 0x98);
    func_0x00010028af84(auStack_310,param_4);
    func_0x00010747a944();
    if (cStack_2f8 == '\x01') {
      func_0x000107262e9c(auStack_120,auStack_310);
      func_0x00010747a950();
    }
    else {
      uStack_e8 = 0;
      uStack_b0 = 0;
    }
    func_0x00010747a248();
    uStack_2a0 = CONCAT44(uVar23,fVar22);
    uStack_298 = in_register_00005008;
    if (extraout_x8_06 != 0) {
      do {
        func_0x000107479b20();
      } while (extraout_w10 != 0);
    }
    func_0x0001073b3fc8(auStack_140);
    func_0x00010747a150();
    uVar6 = cVar3 == '\0';
    func_0x00010747a69c();
    func_0x00010747a000();
    func_0x00010747a484();
    func_0x00010747a178();
    func_0x00010747a49c();
    if (cStack_2f8 != '\0') {
      func_0x00010747a3c0();
    }
    func_0x00010747a494();
    func_0x00010747a4a4(*(undefined4 *)(unaff_x19 + 0x50));
    func_0x00010747a48c();
    puVar10 = auStack_310;
  }
  func_0x0001001148fc(puVar10);
  func_0x000107479a9c(uStack_70);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
LAB_10746fa5c:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10746fa64);
  (*pcVar4)();
}



/* Entry: 10746fb30; end: 10746fbb3;  */

void FUN_10746fb30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *plVar1;
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  func_0x000107479adc();
  plVar1 = *(long **)(param_1 + 0x140);
  uStack_38 = extraout_x8;
  func_0x000107313160(auStack_60,param_4);
  (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3,auStack_60);
  func_0x00010730b1b0(auStack_60);
  func_0x000107479a9c(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107479dac();
  func_0x00010730b1b0();
  func_0x000107479c68();
  return;
}



/* Entry: 10746fbb4; end: 10746fbbb;  */

void FUN_10746fbb4(void)

{
  return;
}



/* Entry: 10746fbbc; end: 10746fbcf;  */

void FUN_10746fbbc(void)

{
  func_0x000107473478();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10746fbd0; end: 10746fbd7;  */

void FUN_10746fbd0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10746fbd4);
  (*pcVar1)();
}



/* Entry: 10746fbd8; end: 10746fc7f;  */

void FUN_10746fbd8(long param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107479cac();
  func_0x000104c2fe00();
  func_0x000104c2fe00(param_1 + 0x38,unaff_x20 + 0x38);
  func_0x000104c2fe00(unaff_x19 + 0x70,unaff_x20 + 0x70);
  FUN_10746fc80(unaff_x19 + 0xa8,unaff_x20 + 0xa8);
  lVar1 = *(long *)(unaff_x20 + 0x1a8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1a0);
  *(undefined8 *)(unaff_x19 + 0x1a8) = *(undefined8 *)(unaff_x20 + 0x1a8);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x1b0) = *(undefined8 *)(unaff_x20 + 0x1b0);
  func_0x000107277f30(unaff_x19 + 0x1b8,unaff_x20 + 0x1b8);
  return;
}



/* Entry: 10746fc80; end: 10746fcb7;  */

undefined1 * FUN_10746fc80(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  FUN_10746fcb8();
  return param_1;
}



/* Entry: 10746fcb8; end: 10746fd03;  */

void FUN_10746fcb8(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479cac();
  FUN_10746fd04();
  uVar1 = *(uint *)(unaff_x20 + 0xf0);
  if (uVar1 != 0xffffffff) {
    func_0x00010747a80c((&PTR_DAT_1109b2a70)[uVar1],&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0xf0) = uVar1;
  }
  return;
}



/* Entry: 10746fd04; end: 10746fd4b;  */

void FUN_10746fd04(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0xf0) != 0xffffffff) {
    func_0x00010747a0e0((&PTR_FUN_1109b2a60)[*(uint *)(param_1 + 0xf0)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  return;
}



/* Entry: 10746fd4c; end: 10746fd8f;  */

void FUN_10746fd4c(undefined8 param_1,long param_2)

{
  func_0x000107274970();
  if (param_2 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10746fd90; end: 10746fe47;  */

void FUN_10746fd90(long param_1)

{
  func_0x000107479fe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10746fe48; end: 10746fe4f;  */

void FUN_10746fe48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  *param_2 = &UNK_10e52b660;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10746fe50; end: 10746fee3;  */

void FUN_10746fe50(long param_1)

{
  uint extraout_w8;
  long unaff_x20;
  
  func_0x00010747ac08();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010747a5d4();
    while (param_1 != unaff_x20) {
      param_1 = param_1 + -0x20;
      FUN_107473b1c();
    }
  }
  return;
}



/* Entry: 10746fee4; end: 10746ff23;  */

void FUN_10746fee4(void)

{
  func_0x000107479cac();
  func_0x00010747a708();
  FUN_1073de554();
  FUN_10746ff24();
  return;
}



/* Entry: 10746ff24; end: 10746ff5f;  */

void FUN_10746ff24(undefined8 param_1)

{
  long unaff_x19;
  long *unaff_x20;
  
  func_0x00010747a684();
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    FUN_10746ff98(param_1,unaff_x20 + 2);
  }
  return;
}



/* Entry: 10746ff60; end: 10746ff7f;  */

void FUN_10746ff60(void)

{
  func_0x00010747a3a8();
  FUN_10746ff80();
  return;
}



/* Entry: 10746ff80; end: 10746ff97;  */

void FUN_10746ff80(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10746ff98; end: 10746ffcb;  */

void FUN_10746ff98(void)

{
  func_0x00010746ffb0();
  return;
}



/* Entry: 10746ffcc; end: 107470183;  */

undefined1  [16]
FUN_10746ffcc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined1 in_NG;
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_68 [3];
  
  func_0x00010016825c();
  func_0x00010726364c();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x25 = uVar8 & param_3;
      uVar1 = 1;
      in_NG = 0;
    }
    else {
      in_NG = (long)(param_3 - uVar7) < 0;
      uVar1 = param_3 == uVar7;
      unaff_x25 = param_3;
      if (uVar7 <= param_3) {
        func_0x00010747ab44();
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_107470084;
          func_0x00010747a678();
          if (!(bool)uVar1) break;
          plVar2 = plVar6 + 2;
          func_0x000104c32db4(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            aplStack_68[0] = plVar6;
            goto LAB_10747016c;
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar4 = extraout_x8 & uVar8;
        }
        else {
          uVar4 = extraout_x8;
          if (uVar7 <= extraout_x8) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = extraout_x8 / uVar7;
            }
            uVar4 = extraout_x8 - uVar4 * uVar7;
          }
        }
        in_NG = (long)(uVar4 - unaff_x25) < 0;
        uVar1 = 1;
      } while (uVar4 == unaff_x25);
    }
  }
LAB_107470084:
  func_0x00010747a290(aplStack_68);
  FUN_107470184();
  func_0x0001001684fc();
  if ((uVar7 == 0) ||
     (func_0x00010747a1a8(param_1,param_2,(float)uVar7), uVar8 = unaff_x25, (bool)in_NG)) {
    func_0x000100168510();
    func_0x000100168528();
    FUN_1073de554();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar7 - 1 & param_3;
    }
    else {
      uVar8 = param_3;
      if (uVar7 <= param_3) {
        func_0x00010747ab44();
        uVar8 = unaff_x25;
      }
    }
  }
  lVar5 = *unaff_x19;
  plVar6 = *(long **)(lVar5 + uVar8 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = unaff_x19 + 2;
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
    *(long **)(lVar5 + uVar8 * 8) = plVar6;
    if (*aplStack_68[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_68[0] + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar4 * uVar7;
      }
      *(long **)(lVar5 + uVar8 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
  }
  func_0x000100168700();
  FUN_1073de74c();
  uVar3 = 1;
LAB_10747016c:
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = aplStack_68[0];
  return auVar9;
}



/* Entry: 107470184; end: 1074701cf;  */

void FUN_107470184(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010747a684();
  puVar1 = param_1 + 2;
  func_0x00010747a520();
  *extraout_x8 = param_1;
  extraout_x8[1] = puVar1;
  extraout_x8[2] = 1;
  puVar1 = param_1 + 2;
  *param_1 = 0;
  param_1[1] = unaff_x20;
  func_0x000104c2fe00();
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)(unaff_x19 + 0x38);
  return;
}



/* Entry: 1074701d0; end: 107470297;  */

void FUN_1074701d0(long param_1,long param_2)

{
  func_0x000104c2fe00();
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  return;
}



/* Entry: 107470298; end: 1074702e7;  */

undefined8 * FUN_107470298(undefined8 *param_1)

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
        FUN_1074702e8(lVar2);
      }
      lVar2 = lVar2 + 0x48;
      pcVar1 = pcVar1 + 1;
    }
    func_0x00010747a0d4();
  }
  return param_1;
}



/* Entry: 1074702e8; end: 10747035f;  */

void FUN_1074702e8(void)

{
  func_0x00010747a59c();
  func_0x000104c33970();
  func_0x000107479d54();
  return;
}



/* Entry: 107470360; end: 107470367;  */

void FUN_107470360(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479ce4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010725af58();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107470368; end: 10747039b;  */

void FUN_107470368(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479ce4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010725af58();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10747039c; end: 1074703eb;  */

undefined8 * FUN_10747039c(undefined8 *param_1)

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
        FUN_1074704e4(lVar2);
      }
      lVar2 = lVar2 + 0x58;
      pcVar1 = pcVar1 + 1;
    }
    func_0x00010747a0d4();
  }
  return param_1;
}



/* Entry: 1074703ec; end: 107470473;  */

void FUN_1074703ec(void)

{
  func_0x000107479e10();
  func_0x000107470410();
  return;
}



/* Entry: 107470474; end: 1074704ab;  */

void FUN_107470474(long param_1)

{
  long unaff_x20;
  
  func_0x000107479cac();
  func_0x00010028af84();
  func_0x00010028af84(param_1 + 0x20,unaff_x20 + 0x20);
  return;
}



/* Entry: 1074704ac; end: 1074704d3;  */

/* WARNING: Possible PIC construction at 0x0001074704c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074704c4) */

void FUN_1074704ac(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 1074704d4; end: 1074704e3;  */

void FUN_1074704d4(void)

{
  func_0x00010747ac20();
  return;
}



/* Entry: 1074704e4; end: 10747056b;  */

void FUN_1074704e4(void)

{
  func_0x00010747a59c();
  func_0x000107470508();
  func_0x000107479d54();
  return;
}



/* Entry: 10747056c; end: 10747059f;  */

void FUN_10747056c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  long lVar2;
  int extraout_w11;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar2 = param_2[1];
  uVar3 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107479c1c();
      puVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(undefined8 **)(param_1 + 8) = puVar1 + 2;
  return;
}



/* Entry: 1074705a0; end: 107470637;  */

long FUN_1074705a0(undefined8 param_1)

{
  long lVar1;
  int extraout_w10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  func_0x000107479cac();
  FUN_107470638();
  FUN_1074706bc(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 4,unaff_x19 + 2);
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107479b20();
    } while (extraout_w10 != 0);
  }
  puStack_38 = puStack_38 + 2;
  func_0x00010747a9bc();
  lVar1 = unaff_x19[1];
  func_0x000107470858(auStack_48);
  return lVar1;
}



/* Entry: 107470638; end: 107470677;  */

long * FUN_107470638(long *param_1,long *param_2)

{
  long *plVar1;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0xfffffffffffffff;
    }
    return plVar1;
  }
  FUN_1074706b0();
  func_0x000107479ce4();
  plVar1 = param_1 + 2;
  FUN_107470744(plVar1,*param_1,param_1[1],param_2[1] + (*param_1 - param_1[1]));
  func_0x000107479d68();
  return plVar1;
}



/* Entry: 107470678; end: 1074706af;  */

void FUN_107470678(long *param_1,long param_2)

{
  func_0x000107479ce4();
  FUN_107470744(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x000107479d68();
  return;
}



/* Entry: 1074706b0; end: 1074706bb;  */

long * FUN_1074706b0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x000107479c78();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107470704();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1074706bc; end: 107470727;  */

long * FUN_1074706bc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107470704();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 107470728; end: 107470743;  */

void FUN_107470728(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 **ppuStack_50;
  undefined8 *puStack_38;
  
  if ((ulong)param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010747aad0();
  ppuStack_50 = &puStack_38;
  for (; puVar1 = param_4 + 2, param_2 != param_3; param_2 = param_2 + 2) {
    uVar2 = *param_2;
    param_4[1] = param_2[1];
    *param_4 = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    param_4 = puVar1;
    puStack_38 = puVar1;
  }
  func_0x0001001684f0();
  FUN_1074707ac();
  FUN_1074707dc(auStack_60);
  return;
}



/* Entry: 107470744; end: 1074707ab;  */

void FUN_107470744(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  undefined8 **ppuStack_40;
  undefined8 *puStack_28;
  
  func_0x00010747aad0();
  ppuStack_40 = &puStack_28;
  for (; puVar1 = param_4 + 2, param_2 != param_3; param_2 = param_2 + 2) {
    uVar2 = *param_2;
    param_4[1] = param_2[1];
    *param_4 = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    param_4 = puVar1;
    puStack_28 = puVar1;
  }
  func_0x0001001684f0();
  FUN_1074707ac();
  FUN_1074707dc(auStack_50);
  return;
}



/* Entry: 1074707ac; end: 1074707db;  */

void FUN_1074707ac(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    func_0x00010725af58();
  }
  return;
}



/* Entry: 1074707dc; end: 107470807;  */

void FUN_1074707dc(void)

{
  uint extraout_w8;
  
  func_0x00010747ac08();
  if ((extraout_w8 & 1) == 0) {
    FUN_107470808();
  }
  return;
}



/* Entry: 107470808; end: 107470827;  */

void FUN_107470808(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x10;
    func_0x00010725af58();
  }
  return;
}



/* Entry: 107470828; end: 107470883;  */

void FUN_107470828(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x10;
    func_0x00010725af58();
  }
  return;
}



/* Entry: 107470884; end: 10747088b;  */

void FUN_107470884(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479ce4(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00010725af58();
  }
  return;
}



/* Entry: 10747088c; end: 1074708f7;  */

void FUN_10747088c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479ce4();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x00010725af58();
  }
  return;
}



/* Entry: 1074708f8; end: 10747090b;  */

void FUN_1074708f8(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010747a9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000107479fe4();
  if (param_1 != (long *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10747090c; end: 107470a4b;  */

void FUN_10747090c(long param_1)

{
  func_0x000107479fe4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107470a4c; end: 107470aa3;  */

void FUN_107470a4c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_107470aa4(lVar1);
    func_0x000107479f40();
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 107470aa4; end: 107470b63;  */

void FUN_107470aa4(void)

{
  func_0x00010016825c();
  func_0x000107470ac4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 107470b64; end: 107470bbb;  */

void FUN_107470b64(long param_1)

{
  func_0x00010726928c();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 107470bbc; end: 107470c27;  */

void FUN_107470bbc(long param_1)

{
  ulong uVar1;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000107479cac();
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_107470c28();
    unaff_x20 = uVar1 + 0xb0;
  }
  else {
    func_0x00010747a29c(uVar1 - *unaff_x19);
    func_0x000107479f78();
    FUN_107470c28(uStack_48);
    func_0x00010747a2cc();
    func_0x00010747a764();
  }
  unaff_x19[1] = unaff_x20;
  return;
}



/* Entry: 107470c28; end: 107470cc3;  */

void FUN_107470c28(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x00010747a85c();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(unaff_x19 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(unaff_x19 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  if (*(char *)(unaff_x19 + 0xa0) == '\x01') {
    uVar1 = *(undefined8 *)(unaff_x19 + 0x90);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(unaff_x19 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    *(undefined8 *)(unaff_x19 + 0x90) = 0;
    *(undefined8 *)(unaff_x19 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(unaff_x19 + 0xa8);
  return;
}



/* Entry: 107470cc4; end: 107470d23;  */

long * FUN_107470cc4(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x1745d1745d1745e) {
    uVar1 = (param_1[2] - *param_1) / 0xb0;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xba2e8ba2e8ba2d < uVar1) {
      plVar2 = (long *)0x1745d1745d1745d;
    }
    return plVar2;
  }
  FUN_107470d68();
  func_0x000107479ce4();
  plVar2 = param_1 + 2;
  func_0x000107470de4(plVar2,*param_1,param_1[1],
                      param_2[1] + ((param_1[1] - *param_1) / -0xb0) * 0xb0);
  func_0x000107479d68();
  return plVar2;
}



/* Entry: 107470d24; end: 107470d67;  */

void FUN_107470d24(long *param_1,long param_2)

{
  func_0x000107479ce4();
  func_0x000107470de4(param_1 + 2,*param_1,param_1[1],
                      *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0xb0) * 0xb0);
  func_0x000107479d68();
  return;
}



/* Entry: 107470d68; end: 107470d73;  */

void FUN_107470d68(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long lStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_80;
  long lStack_78;
  
  func_0x000107479c78();
  func_0x000107479cac();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if ((long *)0x1745d1745d1745d < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010747a684();
      plStack_98 = &lStack_80;
      plStack_90 = &lStack_78;
      lStack_a0 = param_1;
      lStack_80 = param_4;
      for (; lStack_78 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x16) {
        FUN_107470c28(param_4,param_2);
        param_4 = lStack_78 + 0xb0;
      }
      func_0x0001001684f0();
      for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x16) {
        func_0x000107470ee8(unaff_x20);
      }
      func_0x000107470e68(&lStack_a0);
      return;
    }
    lVar1 = (long)unaff_x20 * 0xb0;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0xb0;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + (long)unaff_x20 * 0xb0;
  return;
}



/* Entry: 107470d74; end: 107470e67;  */

void FUN_107470d74(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_70;
  long lStack_68;
  
  func_0x000107479cac();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if ((long *)0x1745d1745d1745d < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010747a684();
      plStack_88 = &lStack_70;
      plStack_80 = &lStack_68;
      lStack_90 = param_1;
      lStack_70 = param_4;
      for (; lStack_68 = param_4, param_2 != unaff_x19; param_2 = param_2 + 0x16) {
        FUN_107470c28(param_4,param_2);
        param_4 = lStack_68 + 0xb0;
      }
      func_0x0001001684f0();
      for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x16) {
        func_0x000107470ee8(unaff_x20);
      }
      func_0x000107470e68(&lStack_90);
      return;
    }
    lVar1 = (long)unaff_x20 * 0xb0;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0xb0;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + (long)unaff_x20 * 0xb0;
  return;
}



/* Entry: 107470e68; end: 107470f27;  */

void FUN_107470e68(long param_1)

{
  uint extraout_w8;
  long unaff_x20;
  
  func_0x00010747ac08();
  if ((extraout_w8 & 1) == 0) {
    func_0x00010747a5d4();
    while (param_1 != unaff_x20) {
      param_1 = param_1 + -0xb0;
      func_0x000107470ee8();
    }
  }
  return;
}



/* Entry: 107470f28; end: 107470f67;  */

void FUN_107470f28(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001074734f0();
  }
  return;
}



/* Entry: 107470f68; end: 107470ff3;  */

void FUN_107470f68(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107479ce4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xb0;
    func_0x000107470ee8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107470ff4; end: 107470ffb;  */

void FUN_107470ff4(void)

{
  return;
}



/* Entry: 107470ffc; end: 107471027;  */

void FUN_107470ffc(void)

{
  func_0x00010747a33c();
  func_0x000107479c38(&PTR_FUN_1109b2a90);
  func_0x00010747aab0();
  return;
}



/* Entry: 107471028; end: 10747105b;  */

void FUN_107471028(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_FUN_1109b2a90;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  param_2[6] = *(undefined8 *)(param_1 + 0x30);
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10747105c; end: 107471177;  */

void FUN_10747105c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  
  uVar1 = **(uint **)(param_1 + 8);
  if (uVar1 < **(uint **)(param_1 + 0x10)) {
    lVar2 = *(long *)(param_1 + 0x20);
    **(uint **)(param_1 + 8) = uVar1 + 1;
    switch(*(undefined1 *)(param_2 + 0x158)) {
    case 1:
    case 2:
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x38) - 1U < 2) goto LAB_1074710c8;
      puVar3 = *(undefined1 **)(param_1 + 0x30);
      goto code_r0x0001074710cc;
    case 3:
      *(undefined1 *)(param_2 + 0x158) = 2;
      if (*(long *)(*(long *)(param_1 + 0x28) + 0x80) != 0) {
        if (*(long *)(*(long *)(param_1 + 0x28) + 0x88) != 0) {
          do {
            func_0x000107479b20();
          } while (extraout_w10_00 != 0);
        }
        func_0x00010747a254();
        FUN_1074711ac();
        func_0x000107479f28();
      }
      break;
    case 4:
      if ((*(char *)(lVar2 + 0x420) == '\x01') && (*(long *)(*(long *)(param_1 + 0x28) + 0x80) != 0)
         ) {
        if (*(long *)(*(long *)(param_1 + 0x28) + 0x88) != 0) {
          do {
            func_0x000107479b20();
          } while (extraout_w10 != 0);
        }
        func_0x00010747a254();
        FUN_1074711ac();
        func_0x000107479f28();
      }
    case 0:
      *(undefined1 *)(param_2 + 0x158) = 1;
    }
  }
  else {
LAB_1074710c8:
    puVar3 = *(undefined1 **)(param_1 + 0x18);
code_r0x0001074710cc:
    *puVar3 = 1;
  }
  return;
}



/* Entry: 107471178; end: 10747119f;  */

void FUN_107471178(undefined8 param_1)

{
  func_0x000107479cd8();
  func_0x000107479ca4(param_1,&PTR_DAT_1109b2b00);
  func_0x000107479b00();
  return;
}


