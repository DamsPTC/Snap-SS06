/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073b069c; end: 1073b06d3;  */

long FUN_1073b069c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ab270);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073b06d4; end: 1073b06df;  */

undefined ** FUN_1073b06d4(void)

{
  return &PTR_DAT_1109ab270;
}



/* Entry: 1073b06e0; end: 1073b073f;  */

undefined8 * FUN_1073b06e0(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_FUN_1109ab210;
  func_0x000107283e34(param_1 + 1);
  func_0x00010724cbe8(param_1 + 4,param_2 + 0x18);
  return param_1;
}



/* Entry: 1073b0740; end: 1073b07bb;  */

undefined1 * FUN_1073b0740(long *param_1)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x0001073b09a4();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_1073b07bc(auStack_40);
  FUN_1073b0814(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001073b0908();
  func_0x0001073b096c(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001073b0a68();
  func_0x0001073b0908();
  func_0x0001073b098c();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_1073b07e4();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1073b07bc; end: 1073b07e3;  */

long FUN_1073b07bc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1073b07e4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1073b07e4; end: 1073b0813;  */

undefined8 * FUN_1073b07e4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x9a90e7d95bc60a) {
    puVar1 = (undefined8 *)(param_2 * 0x1a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109ab290;
  FUN_1073b0878(param_1 + 3);
  return param_1;
}



/* Entry: 1073b0814; end: 1073b084f;  */

undefined8 * FUN_1073b0814(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109ab290;
  FUN_1073b0878(param_1 + 3);
  return param_1;
}



/* Entry: 1073b0850; end: 1073b0853;  */

void FUN_1073b0850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ab290;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073b0854; end: 1073b0867;  */

void FUN_1073b0854(void)

{
  FUN_1073b08f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073b0868; end: 1073b0877;  */

void FUN_1073b0868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073b0870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1073b0878; end: 1073b08df;  */

undefined8 * FUN_1073b0878(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x00010002b838(auStack_38,&UNK_10f40ebb5);
  func_0x000107313ae4(param_1,1,0,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  *param_1 = &PTR_FUN_1109ab2e0;
  return param_1;
}



/* Entry: 1073b08e0; end: 1073b08e3;  */

undefined8 * FUN_1073b08e0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_DAT_11099f9b8;
  func_0x00010787c070();
  lVar1 = param_1[0x2d];
  for (lVar2 = param_1[0x2c]; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    __ZNSt3__16thread4joinEv(lVar2);
  }
  func_0x000107313fcc(param_1 + 0x2f);
  func_0x000107314018(param_1 + 0x2c);
  *param_1 = &PTR_DAT_1109e3f98;
  func_0x00010787c3c8(param_1 + 0x10);
  __ZNSt3__118condition_variableD1Ev(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 1073b08e4; end: 1073b08f7;  */

void FUN_1073b08e4(void)

{
  func_0x0001073140b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073b08f8; end: 1073b0917;  */

void FUN_1073b08f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ab290;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073b0918; end: 1073b093f;  */

long FUN_1073b0918(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073b0940; end: 1073b0a73;  */

void FUN_1073b0940(long param_1)

{
  undefined1 in_w8;
  ulong uVar1;
  long lVar2;
  long *unaff_x19;
  
  uVar1 = unaff_x19[2];
  lVar2 = *unaff_x19;
  *(undefined1 *)(lVar2 + param_1) = in_w8;
  *(undefined1 *)(lVar2 + (param_1 - 7U & uVar1) + (uVar1 & 7)) = in_w8;
  return;
}



/* Entry: 1073b0a74; end: 1073b0ad3;  */

undefined8 FUN_1073b0a74(void)

{
  int iVar1;
  
  if ((bRam0000000113822300 & 1) == 0) {
    iVar1 = 0x13822300;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ppuRam00000001138222e0 = &PTR_FUN_1109ab3d8;
      uRam00000001138222f8 = 0x1138222e0;
      ___cxa_guard_release(0x113822300);
    }
  }
  return 0x1138222e0;
}



/* Entry: 1073b0ad4; end: 1073b0c1b;  */

long FUN_1073b0ad4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8,
                  undefined4 param_9,undefined1 param_10,undefined4 *param_11,uint param_12,
                  undefined4 param_13,long param_14)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = param_3;
  func_0x000104c2fe00();
  func_0x000107263b58(lVar2 + 0x38,param_5);
  uVar4 = *param_6;
  *(undefined8 *)(param_3 + 0x80) = param_6[1];
  *(undefined8 *)(param_3 + 0x78) = uVar4;
  *param_6 = 0;
  param_6[1] = 0;
  uVar5 = param_8[1];
  uVar4 = *param_8;
  uVar7 = param_8[3];
  uVar6 = param_8[2];
  *(undefined8 *)(param_3 + 0xa8) = param_8[4];
  *(undefined8 *)(param_3 + 0x90) = uVar5;
  *(undefined8 *)(param_3 + 0x88) = uVar4;
  *(undefined8 *)(param_3 + 0xa0) = uVar7;
  *(undefined8 *)(param_3 + 0x98) = uVar6;
  func_0x0001072f1610();
  *(long *)(param_3 + 0xb0) = param_14;
  if (*(char *)(param_3 + 0xa0) == '\x01') {
    lVar2 = *(long *)(param_3 + 0x98);
  }
  else {
    lVar2 = 0;
  }
  *(long *)(param_3 + 0xb8) = lVar2 + param_14;
  if (*(char *)(param_3 + 0x90) == '\x01') {
    lVar3 = *(long *)(param_3 + 0x88);
  }
  else {
    lVar3 = 0;
  }
  *(long *)(param_3 + 0xc0) = lVar3 + lVar2 + param_14;
  *(uint *)(param_3 + 200) = param_12;
  uVar1 = 0;
  if (param_12 != 0) {
    uVar1 = 1000 / param_12;
  }
  *(ulong *)(param_3 + 0xd0) = (ulong)uVar1;
  *(undefined8 *)(param_3 + 0xd8) = param_1;
  *(undefined8 *)(param_3 + 0xe0) = param_2;
  FUN_1073b3988(param_3 + 0xe8,param_7);
  *(undefined4 *)(param_3 + 0x108) = param_9;
  *(undefined1 *)(param_3 + 0x10c) = param_10;
  *(undefined4 *)(param_3 + 0x110) = *param_11;
  *(undefined1 *)(param_3 + 0x114) = 0;
  *(undefined1 *)(param_3 + 0x118) = 0;
  *(undefined1 *)(param_3 + 0x120) = 0;
  *(undefined1 *)(param_3 + 0x140) = 0;
  return param_3;
}



/* Entry: 1073b0c1c; end: 1073b0c8b;  */

void FUN_1073b0c1c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x0001073b3d28();
  FUN_1073b0c8c();
  *param_1 = &PTR_FUN_1109ab340;
  param_1[0x1c] = unaff_x20;
  FUN_1073b2900(param_1 + 0x1d);
  *(undefined8 *)(unaff_x21 + 0x130) = 0x7fffffffffffffff;
  *(undefined8 *)(unaff_x21 + 0x140) = 0;
  *(undefined8 *)(unaff_x21 + 0x138) = 0;
  *(undefined8 *)(unaff_x21 + 0x150) = 0;
  *(undefined8 *)(unaff_x21 + 0x148) = 0;
  *(undefined8 *)(unaff_x21 + 0x160) = 0;
  *(undefined8 *)(unaff_x21 + 0x158) = 0;
  *(undefined8 *)(unaff_x21 + 0x168) = 0x32aaaba7;
  *(undefined8 *)(unaff_x21 + 0x178) = 0;
  *(undefined8 *)(unaff_x21 + 0x170) = 0;
  *(undefined8 *)(unaff_x21 + 0x188) = 0;
  *(undefined8 *)(unaff_x21 + 0x180) = 0;
  *(undefined8 *)(unaff_x21 + 0x198) = 0;
  *(undefined8 *)(unaff_x21 + 400) = 0;
  *(undefined8 *)(unaff_x21 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x21 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x21 + 0x1b0) = 0;
  return;
}



/* Entry: 1073b0c8c; end: 1073b0d23;  */

undefined8 * FUN_1073b0c8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ab458;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 1);
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  return param_1;
}



/* Entry: 1073b0d24; end: 1073b0d87;  */

undefined8 * FUN_1073b0d24(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_1109ab458;
  plVar2 = (long *)param_1[0x18];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x00010730b43c(lVar1);
    func_0x0001073b3dac();
  }
  lVar1 = param_1[0x16];
  param_1[0x16] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 1073b0d88; end: 1073b0d8b;  */

undefined8 * FUN_1073b0d88(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_1109ab340;
  FUN_1073b39e4(param_1 + 0x35);
  __ZNSt3__15mutexD1Ev(param_1 + 0x2d);
  FUN_1073b2988(param_1 + 0x2a);
  FUN_1073b2a30(param_1 + 0x27);
  func_0x0001072bcf50(param_1 + 0x1d);
  *param_1 = &PTR_FUN_1109ab458;
  plVar2 = (long *)param_1[0x18];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x00010730b43c(lVar1);
    func_0x0001073b3dac();
  }
  lVar1 = param_1[0x16];
  param_1[0x16] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 1073b0d8c; end: 1073b0d9f;  */

void FUN_1073b0d8c(void)

{
  func_0x0001073b0ccc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073b0da0; end: 1073b0df7;  */

void FUN_1073b0da0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x8;
  __Znwm();
  uVar2 = 1;
  __Znwm();
  *puVar1 = uVar2;
  uStack_28 = 0;
  FUN_1073b3a08(param_1 + 0x1a8,puVar1);
  FUN_1073b39e4(&uStack_28);
  return;
}



/* Entry: 1073b0df8; end: 1073b1027;  */

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_1073b0df8(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 *puStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined1 auStack_208 [24];
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  long lStack_1e0;
  undefined1 auStack_1c8 [56];
  undefined8 auStack_190 [3];
  undefined4 uStack_178;
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_148;
  undefined1 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar5 = param_3;
  func_0x0001073b3c94();
  uStack_38 = extraout_x8;
  func_0x0001073b3ee0();
  puVar6 = param_2;
  FUN_1073b2dc4(auStack_190);
  uStack_48 = SUB84(param_3,0);
  uStack_44 = (undefined1)((ulong)param_3 >> 0x20);
  uStack_40 = param_2[0x17];
  uVar1 = *(ulong *)(param_1 + 0x158);
  if (uVar1 < *(ulong *)(param_1 + 0x160)) {
    func_0x0001073b3ec0();
    lVar7 = uVar1 + 0x168;
    *(long *)(param_1 + 0x158) = lVar7;
  }
  else {
    func_0x0001073b3f10((long)(uVar1 - *(long *)(param_1 + 0x150)) / 0x168);
    func_0x0001073b3f38();
    FUN_1073b2c6c(&uStack_1f0);
    func_0x0001073b3ec0();
    lStack_1e0 = lStack_1e0 + 0x168;
    puVar6 = &uStack_1f0;
    FUN_1073b2b30(param_1 + 0x150);
    lVar7 = *(long *)(param_1 + 0x158);
    FUN_1073b2d78(&uStack_1f0);
  }
  *(long *)(param_1 + 0x158) = lVar7;
  puVar3 = (undefined4 *)auStack_190;
  func_0x00010730b16c();
  lVar7 = param_2[0x17];
  if (*(long *)(param_1 + 0x130) <= (long)param_2[0x17]) {
    lVar7 = *(long *)(param_1 + 0x130);
  }
  *(long *)(param_1 + 0x130) = lVar7;
  uVar2 = *(char *)(param_2 + 0xe) == '\x01';
  if ((bool)uVar2) {
    auStack_190[0]._0_4_ = 0x182;
    uStack_178 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    ppuStack_170 = &PTR_DAT_110996720;
    uStack_168 = 0;
    uStack_150 = 0x182;
    uStack_148 = 0;
    uStack_144 = 1;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_208,&UNK_10de63f60);
    param_2 = param_2 + 7;
    func_0x00010725ffc4(param_2);
    func_0x000104c2fe00(auStack_1c8,param_2);
    FUN_1073b1028(auStack_190,auStack_208,auStack_1c8);
    func_0x000104c2f714(auStack_1c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
    uStack_1f0._0_4_ = 1;
    uStack_1e8 = 0;
    uStack_218 = **(undefined8 **)(param_1 + 0xe0);
    uStack_210 = 3;
    puVar6 = auStack_190;
    puVar5 = (undefined4 *)&uStack_1f0;
    FUN_10743fa9c(*(undefined8 **)(param_1 + 0xe0),puVar6,puVar5,&uStack_218,7);
    puVar3 = (undefined4 *)auStack_190;
    func_0x000107262330();
  }
  func_0x0001073b3ddc();
  func_0x0001073b3c74(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar4 = (undefined4 *)auStack_190;
    func_0x000107262330();
    func_0x0001073b3ddc();
    func_0x0001073b3d50();
    pcStack_228 = FUN_1073b1028;
    uStack_258 = puVar6[1];
    uStack_260 = *puVar6;
    uStack_250 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    puStack_240 = puVar3;
    lStack_238 = param_1;
    puStack_230 = &stack0xfffffffffffffff0;
    func_0x000107264c5c(puVar5);
    func_0x00010729d62c(puVar4 + 8,&uStack_260,puVar5,puVar6);
    func_0x0001073b3ef4();
    *(undefined1 *)(puVar4 + 0x13) = 1;
    return puVar4;
  }
  return puVar3;
}



/* Entry: 1073b1028; end: 1073b109b;  */

long FUN_1073b1028(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x000107264c5c(param_3);
  func_0x00010729d62c(param_1 + 0x20,&uStack_40,param_3,param_2);
  func_0x0001073b3ef4();
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return param_1;
}



/* Entry: 1073b109c; end: 1073b11cf;  */

undefined1 * FUN_1073b109c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined1 *puVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  undefined8 uVar28;
  long *plVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puStack_560;
  uint uStack_558;
  long lStack_550;
  ulong uStack_548;
  ulong uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined4 uStack_518;
  undefined1 *puStack_510;
  long *plStack_508;
  long *plStack_500;
  long *plStack_4f8;
  undefined8 uStack_4f0;
  undefined4 uStack_4e8;
  undefined4 auStack_4e0 [2];
  undefined4 uStack_4d8;
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [32];
  undefined1 auStack_498 [32];
  undefined1 uStack_478;
  undefined1 *puStack_470;
  undefined1 *puStack_468;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined **ppuStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined4 uStack_430;
  undefined4 uStack_428;
  undefined1 uStack_424;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_320;
  char cStack_318;
  int aiStack_310 [2];
  undefined1 auStack_308 [56];
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2b8;
  undefined1 *puStack_2b0;
  long lStack_2a8;
  undefined8 uStack_278;
  long lStack_270;
  undefined1 *puStack_268;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  int iStack_1b0;
  undefined4 uStack_1a8;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  undefined1 auStack_b0 [56];
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  
  func_0x0001073b3c94();
  uStack_48 = extraout_x8;
  func_0x0001073b3ee0();
  func_0x000104c2fe00(auStack_b0,param_2);
  uStack_78 = param_3;
  func_0x000107313160(auStack_70,param_4);
  uVar27 = *(ulong *)(param_1 + 0x158);
  uVar7 = uVar27 == *(ulong *)(param_1 + 0x160);
  if (uVar27 < *(ulong *)(param_1 + 0x160)) {
    puVar13 = auStack_b0;
    FUN_1073b2e90();
    lVar22 = uVar27 + 0x168;
    *(long *)(param_1 + 0x158) = lVar22;
  }
  else {
    func_0x0001073b3f10((long)(uVar27 - *(long *)(param_1 + 0x150)) / 0x168);
    func_0x0001073b3f38();
    FUN_1073b2c6c(auStack_d8);
    FUN_1073b2e90(lStack_c8,auStack_b0);
    lStack_c8 = lStack_c8 + 0x168;
    puVar13 = auStack_d8;
    FUN_1073b2b30(param_1 + 0x150);
    lVar22 = *(long *)(param_1 + 0x158);
    FUN_1073b2d78(auStack_d8);
  }
  *(long *)(param_1 + 0x158) = lVar22;
  puVar9 = auStack_b0;
  func_0x0001073b2ed0();
  func_0x0001073b3ddc();
  func_0x0001073b3c74(uStack_48);
  if ((bool)uVar7) {
    return puVar9;
  }
  ___stack_chk_fail();
  FUN_1073b2d78(auStack_d8);
  puVar9 = auStack_b0;
  func_0x0001073b2ed0();
  func_0x0001073b3ddc();
  func_0x0001073b3d50();
  func_0x0001073b3c94();
  puStack_2b0 = (undefined1 *)0x0;
  puStack_2b8 = (undefined1 *)0x0;
  lStack_2a8 = 0;
  uStack_160 = extraout_x8_00;
  func_0x0001073b3ee0();
  puVar23 = *(undefined1 **)(puVar9 + 0x150);
  lStack_2a8 = *(long *)(puVar9 + 0x160);
  puVar30 = *(undefined1 **)(puVar9 + 0x158);
  puStack_2b8 = puVar23;
  *(undefined8 *)(puVar9 + 0x150) = 0;
  *(undefined8 *)(puVar9 + 0x158) = 0;
  puStack_2b0 = puVar30;
  *(undefined8 *)(puVar9 + 0x160) = 0;
  func_0x0001073b3ddc();
  plVar26 = (long *)(puVar9 + 0x138);
  for (; puVar23 != puVar30; puVar23 = puVar23 + 0x168) {
    if (*(int *)(puVar23 + 0x160) == 0) {
      FUN_1073b3388(plVar26,puVar23 + 8);
    }
    else {
      lVar14 = *(long *)(puVar9 + 0x140);
      for (lVar22 = *(long *)(puVar9 + 0x138) + 0x120; lVar10 = lVar22 + -0x120, lVar10 != lVar14;
          lVar22 = lVar22 + 0x158) {
        func_0x000104c32db4(lVar10,puVar23 + 8);
        if ((int)lVar10 != 0) {
          uVar2 = *(undefined4 *)(puVar23 + 0x40);
          func_0x000107313160(&puStack_470,puVar23 + 0x48);
          *(undefined4 *)(lVar22 + -0xc) = uVar2;
          *(undefined1 *)(lVar22 + -8) = 1;
          FUN_1073b333c(lVar22,&puStack_470);
          func_0x00010730b1b0(&puStack_470);
        }
      }
    }
  }
  FUN_1073b2988(&puStack_2b8);
  lVar22 = *(long *)(puVar9 + 0x138);
  lVar14 = *(long *)(puVar9 + 0x140);
  if (lVar22 == lVar14) {
    uVar27 = 0;
    uVar7 = 1;
    lVar14 = lVar22;
  }
  else {
    uVar7 = puVar13 == *(undefined1 **)(puVar9 + 0x130);
    if ((long)puVar13 < (long)*(undefined1 **)(puVar9 + 0x130)) {
      uVar27 = 0;
    }
    else {
      uStack_558 = 0;
      uStack_548 = 0;
      lStack_550 = 0;
      uStack_538 = 0;
      uStack_540 = 0;
      lStack_528 = 0;
      uStack_530 = 0;
      uStack_520 = 0;
      uStack_518 = 0x3f800000;
      puStack_510 = (undefined1 *)0x7fffffffffffffff;
      plStack_508 = (long *)0x0;
      plStack_500 = (long *)0x0;
      plStack_4f8 = (long *)0x0;
      puStack_560 = puVar13;
      for (; plVar11 = plStack_500, plVar25 = plStack_508, lVar22 != lVar14; lVar22 = lVar22 + 0x158
          ) {
        auStack_4b8[0] = 0;
        uStack_478 = 0;
        bVar8 = puVar9[0x128] == '\x01';
        iVar16 = 1;
        if (bVar8) {
          func_0x00010731f100(auStack_4b8,puVar9 + 0xe8);
          func_0x0001073b2ef8(auStack_498,puVar9 + 0x108);
        }
        uVar27 = *(long *)(lVar22 + 0x150) - (long)puStack_560;
        uStack_478 = bVar8;
        if (uVar27 == 0 || *(long *)(lVar22 + 0x150) < (long)puStack_560) {
          puVar18 = *(undefined8 **)(puVar9 + 0xe0);
          puVar30 = *(undefined1 **)(lVar22 + 0xd8);
          puVar23 = *(undefined1 **)(lVar22 + 0xe0);
          if ((*(int *)(lVar22 + 0x110) - 1U & 0xfffffffd) != 0) {
            puVar30 = *(undefined1 **)(lVar22 + 0xe0);
            puVar23 = *(undefined1 **)(lVar22 + 0xd8);
          }
          if ((long)puStack_560 < *(long *)(lVar22 + 0xc0)) {
            lVar10 = *(long *)(lVar22 + 0xb8);
            if ((long)puStack_560 < lVar10) {
              iVar16 = 0;
              puVar31 = puVar23;
            }
            else {
              puVar31 = (undefined1 *)
                        (double)((((float)((long)puStack_560 - lVar10) / 1e+09) * 1e+09) /
                                (float)(*(long *)(lVar22 + 0xc0) - lVar10));
              plVar11 = *(long **)(lVar22 + 0x100);
              puStack_470 = puVar23;
              puStack_468 = puVar30;
              puStack_2b8 = puVar31;
              if (plVar11 == (long *)0x0) {
                func_0x000104bfeb48();
                goto LAB_1073b1c14;
              }
              (**(code **)(*plVar11 + 0x30))(plVar11,&puStack_470,&puStack_2b8);
              if (*(char *)(lVar22 + 0x118) != '\0') {
                iVar16 = 2;
              }
            }
          }
          else {
            iVar16 = 3;
            puVar31 = puVar30;
          }
          if (((*(ulong *)(lVar22 + 0x114) >> 0x20 & 1) != 0) &&
             ((int)*(ulong *)(lVar22 + 0x114) != 1 || (iVar16 == 3 || iVar16 == 4))) {
            iVar16 = 4;
          }
          aiStack_310[0] = iVar16;
          func_0x000104c2fe00(auStack_308,lVar22);
          lStack_2c8 = *(long *)(lVar22 + 0x80);
          uStack_2d0 = *(undefined8 *)(lVar22 + 0x78);
          if (*(long *)(lVar22 + 0x80) != 0) {
            do {
              func_0x0001073b3d94();
            } while (extraout_w10 != 0);
          }
          puVar23 = puStack_560;
          uStack_558 = uStack_558 + 1;
          puStack_2c0 = puVar31;
          switch(aiStack_310[0]) {
          case 0:
            puVar23 = (undefined1 *)((*(long *)(lVar22 + 0xb8) - (long)puStack_560) / 1000000);
            if ((long)puStack_510 <= (long)puVar23) {
              puVar23 = puStack_510;
            }
            puStack_510 = puVar23;
            func_0x0001073b3ecc();
            func_0x0001073b3e44();
            break;
          case 1:
          case 2:
            puVar30 = *(undefined1 **)(lVar22 + 0xd0);
            if ((long)puStack_510 <= (long)*(undefined1 **)(lVar22 + 0xd0)) {
              puVar30 = puStack_510;
            }
            puStack_510 = puVar30;
            func_0x0001073b3ed8(&puStack_470);
            uVar27 = uStack_548;
            puStack_320 = puVar23 + *(long *)(lVar22 + 0xd0) * 1000000;
            if (uStack_548 < uStack_540) {
              FUN_1073b2ab8(uStack_548,&puStack_470);
              uVar27 = uVar27 + 0x158;
            }
            else {
              plVar11 = &lStack_550;
              FUN_1073b2fc0(&lStack_550,(long)(uStack_548 - lStack_550) / 0x158 + 1);
              FUN_1073b3504(&puStack_2b8,plVar11,(long)(uStack_548 - lStack_550) / 0x158,&uStack_540
                           );
              FUN_1073b2ab8(lStack_2a8,&puStack_470);
              lStack_2a8 = lStack_2a8 + 0x158;
              FUN_1073b345c(&lStack_550,&puStack_2b8);
              uVar27 = uStack_548;
              func_0x0001073b3550(&puStack_2b8);
            }
            uStack_548 = uVar27;
            func_0x00010730b16c(&puStack_470);
            func_0x0001073b3d7c(*(undefined8 *)(lVar22 + 0x148));
            func_0x0001073b3e44();
            break;
          case 3:
            if (*(int *)(lVar22 + 0x108) == 0) {
              puStack_470 = (undefined1 *)((ulong)puStack_470 & 0xffffffffffffff00);
              cStack_318 = '\0';
code_r0x0001073b1764:
              func_0x0001073b3d7c(*(undefined8 *)(lVar22 + 0x148));
              func_0x0001073b3ee8();
            }
            else {
              func_0x0001073b3ed8(&puStack_2b8);
              puStack_1f8 = puVar23 + (*(long *)(lVar22 + 0xc0) - *(long *)(lVar22 + 0xb8));
              puStack_200 = puVar23;
              if (iStack_1b0 != -1) {
                iStack_1b0 = iStack_1b0 + -1;
              }
              uVar3 = *(int *)(lVar22 + 0x110) - 1;
              if (uVar3 < 3) {
                uStack_1a8 = *(undefined4 *)(&UNK_10de64064 + (ulong)uVar3 * 4);
              }
              else {
                uStack_1a8 = 0;
              }
              puStack_168 = puVar23;
              FUN_1073b2ab8(&puStack_470,&puStack_2b8);
              cStack_318 = '\x01';
              func_0x00010730b16c(&puStack_2b8);
              if (cStack_318 != '\x01') goto code_r0x0001073b1764;
              func_0x0001073b3f60(*(undefined8 *)(lVar22 + 0xd0));
              FUN_1073b3388(&lStack_550,&puStack_470);
              uVar28 = *(undefined8 *)(lVar22 + 0x148);
              puStack_2b8 = (undefined1 *)CONCAT44(puStack_2b8._4_4_,1);
              func_0x000104c2fe00(&puStack_2b0,auStack_308);
              lStack_270 = lStack_2c8;
              uStack_278 = uStack_2d0;
              if (lStack_2c8 != 0) {
                do {
                  func_0x0001073b3d94();
                } while (extraout_w10_00 != 0);
              }
              puStack_268 = puStack_2c0;
              FUN_1073b1e88(uVar28,&puStack_2b8,&puStack_560);
              FUN_10731de40(&puStack_2b8);
            }
            func_0x0001073b38a0(&puStack_470);
            break;
          case 4:
            func_0x0001073b3d7c(*(undefined8 *)(lVar22 + 0x148));
            plVar11 = plStack_508;
            if (plStack_500 < plStack_4f8) {
              plVar24 = plStack_500 + 1;
              *plStack_500 = lVar22;
            }
            else {
              lVar10 = (long)plStack_500 - (long)plStack_508;
              uVar27 = (lVar10 >> 3) + 1;
              if (uVar27 >> 0x3d != 0) goto code_r0x0001073b1c00;
              uVar17 = (long)plStack_4f8 - (long)plStack_508 >> 2;
              if (uVar17 <= uVar27) {
                uVar17 = uVar27;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)plStack_4f8 - (long)plStack_508)) {
                uVar17 = 0x1fffffffffffffff;
              }
              if (uVar17 == 0) {
                lVar12 = 0;
              }
              else {
                if (uVar17 >> 0x3d != 0) {
                  func_0x000104bd35f4();
                  goto LAB_1073b1c14;
                }
                lVar12 = uVar17 << 3;
                __Znwm();
              }
              plVar25 = (long *)(lVar12 + lVar10);
              plVar1 = (long *)(lVar12 + uVar17 * 8);
              plVar29 = plVar25 + -(lVar10 >> 3);
              plVar24 = plVar25 + 1;
              *plVar25 = lVar22;
              _memcpy(plVar29,plVar11,lVar10);
              plStack_508 = plVar29;
              plStack_4f8 = plVar1;
              if (plVar11 != (long *)0x0) {
                plStack_500 = plVar24;
                __ZdlPv(plVar11);
              }
            }
            plStack_500 = plVar24;
            func_0x0001073b3ee8();
            if (*(char *)(lVar22 + 0x70) == '\x01') {
              puStack_470 = (undefined1 *)CONCAT44(puStack_470._4_4_,0x183);
              uStack_458 = 0;
              uStack_440 = 0;
              uStack_438 = 0;
              uStack_448 = 0;
              ppuStack_450 = &PTR_DAT_110996720;
              uStack_430 = 0x183;
              uStack_428 = 0;
              uStack_424 = 1;
              uStack_418 = 0;
              uStack_410 = 0;
              uStack_420 = 0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (auStack_4d0,&UNK_10de63f60);
              lVar10 = lVar22 + 0x38;
              func_0x00010725ffc4(lVar10);
              func_0x000104c2fe00(&puStack_2b8,lVar10);
              FUN_1073b1028(&puStack_470,auStack_4d0,&puStack_2b8);
              func_0x000104c2f714(&puStack_2b8);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4d0);
              auStack_4e0[0] = 1;
              uStack_4d8 = 0;
              uStack_4f0 = *puVar18;
              uStack_4e8 = 3;
              FUN_10743fa9c(puVar18,&puStack_470,auStack_4e0,&uStack_4f0,7);
              func_0x0001073b3de4();
            }
          }
          FUN_10731de40(aiStack_310);
        }
        else {
          func_0x0001073b3f60(uVar27 / 1000000);
          func_0x0001073b3ecc();
        }
        func_0x0001072bcf50(auStack_4b8);
      }
      for (; uVar27 = uStack_548, lVar22 = lStack_550, plVar25 != plVar11; plVar25 = plVar25 + 1) {
        if (*(char *)(*plVar25 + 0x140) == '\x01') {
          func_0x000104c003e8(*plVar25 + 0x120);
        }
      }
      if (plVar26 != &lStack_550) {
        uVar17 = uStack_548 - lStack_550;
        lVar14 = *(long *)(puVar9 + 0x138);
        uVar7 = (ulong)(*(long *)(puVar9 + 0x148) - lVar14) <= uVar17;
        if ((bool)uVar7 && uVar17 != *(long *)(puVar9 + 0x148) - lVar14) {
          lVar10 = (long)uVar17 / 0x158;
          if (lVar14 != 0) {
            FUN_1073b2a64(plVar26);
            __ZdlPv(*plVar26);
            *plVar26 = 0;
            *(undefined8 *)(puVar9 + 0x140) = 0;
            *(undefined8 *)(puVar9 + 0x148) = 0;
          }
          plVar11 = plVar26;
          FUN_1073b2fc0();
          func_0x0001073b3e90();
          if ((bool)uVar7) {
            func_0x0001073b3290();
            goto LAB_1073b1c14;
          }
          FUN_1073b329c();
          *(long **)(puVar9 + 0x138) = plVar11;
          *(long **)(puVar9 + 0x140) = plVar11;
          *(long **)(puVar9 + 0x148) = plVar11 + lVar10 * 0x2b;
        }
        else {
          if (uVar17 <= (ulong)(*(long *)(puVar9 + 0x140) - lVar14)) {
            FUN_1073b305c(lStack_550,uStack_548);
            FUN_1073b2a6c(plVar26,lVar22);
            goto LAB_1073b19a0;
          }
          lVar22 = lStack_550 + (*(long *)(puVar9 + 0x140) - lVar14);
          FUN_1073b305c(lStack_550,lVar22);
        }
        FUN_1073b2f3c(plVar26,lVar22,uVar27);
      }
LAB_1073b19a0:
      for (plVar26 = (long *)lStack_528; plVar26 != (long *)0x0; plVar26 = (long *)*plVar26) {
        uVar3 = *(uint *)(plVar26 + 2);
        uVar17 = (ulong)uVar3;
        puStack_470 = (undefined1 *)((ulong)puStack_470 & 0xffffffffffffff00);
        ppuStack_450 = (undefined **)((ulong)ppuStack_450 & 0xffffffffffffff00);
        uVar27 = (ulong)puStack_2b0 >> 8;
        puStack_2b0 = (undefined1 *)CONCAT71((int7)uVar27,1);
        puStack_2b8 = puVar9 + 8;
        func_0x00010724e404(puVar9 + 8);
        uVar27 = *(ulong *)(puVar9 + 0xb8);
        if ((uVar27 != 0) && (*(long *)(puVar9 + 200) != 0)) {
          uVar19 = uVar27 - 1;
          uVar15 = (uint)uVar27;
          if ((uVar27 & uVar19) == 0) {
            uVar20 = (ulong)(uVar15 - 1 & uVar3);
          }
          else {
            uVar20 = uVar17;
            if (uVar27 <= uVar17) {
              uVar4 = 0;
              if (uVar15 != 0) {
                uVar4 = uVar3 / uVar15;
              }
              uVar20 = (ulong)(uVar3 - uVar4 * uVar15);
            }
          }
          plVar11 = *(long **)(*(long *)(puVar9 + 0xb0) + uVar20 * 8);
          if (plVar11 != (long *)0x0) {
            do {
              while( true ) {
                plVar11 = (long *)*plVar11;
                if (plVar11 == (long *)0x0) goto LAB_1073b1a90;
                uVar21 = plVar11[1];
                if (uVar21 != uVar17) break;
                if (*(uint *)(plVar11 + 2) == uVar3) {
                  if ((char)ppuStack_450 == '\x01') {
                    FUN_1073b3a30(&puStack_470,plVar11 + 3);
                  }
                  else {
                    FUN_1073b3b60(&puStack_470,plVar11 + 3);
                    ppuStack_450 = (undefined **)CONCAT71(ppuStack_450._1_7_,1);
                  }
                  goto LAB_1073b1a90;
                }
              }
              if ((uVar27 & uVar19) == 0) {
                uVar21 = uVar21 & uVar19;
              }
              else if (uVar27 <= uVar21) {
                uVar5 = 0;
                if (uVar27 != 0) {
                  uVar5 = uVar21 / uVar27;
                }
                uVar21 = uVar21 - uVar5 * uVar27;
              }
            } while (uVar21 == uVar20);
          }
        }
LAB_1073b1a90:
        func_0x00010724e49c(&puStack_2b8);
        if ((char)ppuStack_450 == '\x01') {
          plVar11 = (long *)CONCAT44(uStack_454,uStack_458);
          if (plVar11 == (long *)0x0) {
            func_0x000104bfeb48();
            goto LAB_1073b1c14;
          }
          (**(code **)(*plVar11 + 0x30))(plVar11,plVar26 + 3);
        }
        FUN_1073b3ba4(&puStack_470);
      }
      puVar23 = puStack_510;
      if (puStack_510 != (undefined1 *)0x7fffffffffffffff) {
        puVar23 = puVar13 + (long)puStack_510 * 1000000;
      }
      *(undefined1 **)(puVar9 + 0x130) = puVar23;
      uVar3 = uStack_558;
      uVar27 = (ulong)uStack_558;
      *(ulong *)(puVar9 + 0x1b0) = *(long *)(puVar9 + 0x1b0) + uVar27;
      iVar16 = (int)((*(long *)(puVar9 + 0x140) - *(long *)(puVar9 + 0x138)) / 0x158);
      if (0 < iVar16) {
        puStack_470 = (undefined1 *)CONCAT44(puStack_470._4_4_,0x184);
        uStack_458 = 0;
        uStack_440 = 0;
        uStack_438 = 0;
        ppuStack_450 = &PTR_DAT_110996720;
        uStack_448 = 0;
        uStack_430 = 0x184;
        uStack_428 = 1;
        uStack_424 = 1;
        uStack_418 = 0;
        uStack_410 = 0;
        uStack_420 = 0;
        puStack_2b8 = (undefined1 *)CONCAT44(puStack_2b8._4_4_,iVar16);
        func_0x0001073b3ea8();
        func_0x0001073b3d64();
        func_0x0001073b3de4();
      }
      uVar7 = uVar3 == 1;
      if (0 < (int)uVar3) {
        puStack_470 = (undefined1 *)CONCAT44(puStack_470._4_4_,0x185);
        uStack_458 = 0;
        uStack_440 = 0;
        uStack_438 = 0;
        ppuStack_450 = &PTR_DAT_110996720;
        uStack_448 = 0;
        uStack_430 = 0x185;
        uStack_428 = 1;
        uStack_424 = 1;
        uStack_418 = 0;
        uStack_410 = 0;
        uStack_420 = 0;
        puStack_2b8 = (undefined1 *)CONCAT44(puStack_2b8._4_4_,uVar3);
        func_0x0001073b3ea8();
        func_0x0001073b3d64();
        func_0x0001073b3de4();
      }
      FUN_1073b32d4(&puStack_560);
      lVar22 = *(long *)(puVar9 + 0x138);
      lVar14 = *(long *)(puVar9 + 0x140);
    }
  }
  func_0x0001073b3c74(uStack_160);
  if ((bool)uVar7) {
    return (undefined1 *)(uVar27 | (lVar14 - lVar22) / 0x158 << 0x20);
  }
  ___stack_chk_fail();
code_r0x0001073b1c00:
  func_0x0001073b38c0();
LAB_1073b1c14:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1073b1c18);
  (*pcVar6)();
}



/* Entry: 1073b11d0; end: 1073b1d37;  */

ulong FUN_1073b11d0(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 uVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  undefined8 extraout_x8;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar19;
  ulong uVar20;
  double dVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  ulong uVar25;
  undefined8 uVar26;
  long *plVar27;
  double dVar28;
  double dVar29;
  long lStack_480;
  uint uStack_478;
  long lStack_470;
  ulong uStack_468;
  ulong uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  long lStack_448;
  undefined8 uStack_440;
  undefined4 uStack_438;
  long lStack_430;
  long *plStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined8 uStack_410;
  undefined4 uStack_408;
  undefined4 auStack_400 [2];
  undefined4 uStack_3f8;
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [32];
  undefined1 auStack_3b8 [32];
  undefined1 uStack_398;
  undefined8 uStack_390;
  double dStack_388;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined **ppuStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined4 uStack_348;
  undefined1 uStack_344;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_240;
  char cStack_238;
  int aiStack_230 [2];
  undefined1 auStack_228 [56];
  undefined8 uStack_1f0;
  long lStack_1e8;
  double dStack_1e0;
  undefined8 uStack_1d8;
  double dStack_1d0;
  long lStack_1c8;
  undefined8 uStack_198;
  long lStack_190;
  double dStack_188;
  long lStack_120;
  long lStack_118;
  int iStack_d0;
  undefined4 uStack_c8;
  long lStack_88;
  undefined8 uStack_80;
  
  func_0x0001073b3c94();
  dStack_1d0 = 0.0;
  uStack_1d8 = 0.0;
  lStack_1c8 = 0;
  uStack_80 = extraout_x8;
  func_0x0001073b3ee0();
  dVar21 = *(double *)(param_1 + 0x150);
  lStack_1c8 = *(long *)(param_1 + 0x160);
  dVar28 = *(double *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  uStack_1d8 = dVar21;
  dStack_1d0 = dVar28;
  func_0x0001073b3ddc();
  plVar24 = (long *)(param_1 + 0x138);
  for (; dVar21 != dVar28; dVar21 = (double)((long)dVar21 + 0x168)) {
    if (*(int *)((long)dVar21 + 0x160) == 0) {
      FUN_1073b3388(plVar24,(long)dVar21 + 8);
    }
    else {
      lVar13 = *(long *)(param_1 + 0x140);
      for (lVar12 = *(long *)(param_1 + 0x138) + 0x120; lVar9 = lVar12 + -0x120, lVar9 != lVar13;
          lVar12 = lVar12 + 0x158) {
        func_0x000104c32db4(lVar9,(long)dVar21 + 8);
        if ((int)lVar9 != 0) {
          uVar2 = *(undefined4 *)((long)dVar21 + 0x40);
          func_0x000107313160(&uStack_390,(long)dVar21 + 0x48);
          *(undefined4 *)(lVar12 + -0xc) = uVar2;
          *(undefined1 *)(lVar12 + -8) = 1;
          FUN_1073b333c(lVar12,&uStack_390);
          func_0x00010730b1b0(&uStack_390);
        }
      }
    }
  }
  FUN_1073b2988(&uStack_1d8);
  lVar12 = *(long *)(param_1 + 0x138);
  lVar13 = *(long *)(param_1 + 0x140);
  if (lVar12 == lVar13) {
    uVar25 = 0;
    uVar7 = 1;
    lVar13 = lVar12;
  }
  else {
    uVar7 = param_2 == *(long *)(param_1 + 0x130);
    if (param_2 < *(long *)(param_1 + 0x130)) {
      uVar25 = 0;
    }
    else {
      uStack_478 = 0;
      uStack_468 = 0;
      lStack_470 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      lStack_448 = 0;
      uStack_450 = 0;
      uStack_440 = 0;
      uStack_438 = 0x3f800000;
      lStack_430 = 0x7fffffffffffffff;
      plStack_428 = (long *)0x0;
      plStack_420 = (long *)0x0;
      plStack_418 = (long *)0x0;
      lStack_480 = param_2;
      for (; plVar10 = plStack_420, plVar23 = plStack_428, lVar12 != lVar13; lVar12 = lVar12 + 0x158
          ) {
        auStack_3d8[0] = 0;
        uStack_398 = 0;
        bVar8 = *(char *)(param_1 + 0x128) == '\x01';
        iVar15 = 1;
        if (bVar8) {
          func_0x00010731f100(auStack_3d8,param_1 + 0xe8);
          func_0x0001073b2ef8(auStack_3b8,param_1 + 0x108);
        }
        uVar25 = *(long *)(lVar12 + 0x150) - lStack_480;
        uStack_398 = bVar8;
        if (uVar25 == 0 || *(long *)(lVar12 + 0x150) < lStack_480) {
          puVar17 = *(undefined8 **)(param_1 + 0xe0);
          dVar28 = *(double *)(lVar12 + 0xd8);
          dVar21 = *(double *)(lVar12 + 0xe0);
          if ((*(int *)(lVar12 + 0x110) - 1U & 0xfffffffd) != 0) {
            dVar28 = *(double *)(lVar12 + 0xe0);
            dVar21 = *(double *)(lVar12 + 0xd8);
          }
          if (lStack_480 < *(long *)(lVar12 + 0xc0)) {
            lVar9 = *(long *)(lVar12 + 0xb8);
            if (lStack_480 < lVar9) {
              iVar15 = 0;
              dVar29 = dVar21;
            }
            else {
              dVar29 = (double)((((float)(lStack_480 - lVar9) / 1e+09) * 1e+09) /
                               (float)(*(long *)(lVar12 + 0xc0) - lVar9));
              plVar10 = *(long **)(lVar12 + 0x100);
              uStack_390 = dVar21;
              dStack_388 = dVar28;
              uStack_1d8 = dVar29;
              if (plVar10 == (long *)0x0) {
                func_0x000104bfeb48();
                goto LAB_1073b1c14;
              }
              (**(code **)(*plVar10 + 0x30))(plVar10,&uStack_390,&uStack_1d8);
              if (*(char *)(lVar12 + 0x118) != '\0') {
                iVar15 = 2;
              }
            }
          }
          else {
            iVar15 = 3;
            dVar29 = dVar28;
          }
          if (((*(ulong *)(lVar12 + 0x114) >> 0x20 & 1) != 0) &&
             ((int)*(ulong *)(lVar12 + 0x114) != 1 || (iVar15 == 3 || iVar15 == 4))) {
            iVar15 = 4;
          }
          aiStack_230[0] = iVar15;
          func_0x000104c2fe00(auStack_228,lVar12);
          lStack_1e8 = *(long *)(lVar12 + 0x80);
          uStack_1f0 = *(undefined8 *)(lVar12 + 0x78);
          if (*(long *)(lVar12 + 0x80) != 0) {
            do {
              func_0x0001073b3d94();
            } while (extraout_w10 != 0);
          }
          lVar9 = lStack_480;
          uStack_478 = uStack_478 + 1;
          dStack_1e0 = dVar29;
          switch(aiStack_230[0]) {
          case 0:
            lVar9 = (*(long *)(lVar12 + 0xb8) - lStack_480) / 1000000;
            if (lStack_430 <= lVar9) {
              lVar9 = lStack_430;
            }
            lStack_430 = lVar9;
            func_0x0001073b3ecc();
            func_0x0001073b3e44();
            break;
          case 1:
          case 2:
            lVar11 = *(long *)(lVar12 + 0xd0);
            if (lStack_430 <= *(long *)(lVar12 + 0xd0)) {
              lVar11 = lStack_430;
            }
            lStack_430 = lVar11;
            func_0x0001073b3ed8(&uStack_390);
            uVar25 = uStack_468;
            lStack_240 = lVar9 + *(long *)(lVar12 + 0xd0) * 1000000;
            if (uStack_468 < uStack_460) {
              FUN_1073b2ab8(uStack_468,&uStack_390);
              uVar25 = uVar25 + 0x158;
            }
            else {
              plVar10 = &lStack_470;
              FUN_1073b2fc0(&lStack_470,(long)(uStack_468 - lStack_470) / 0x158 + 1);
              FUN_1073b3504(&uStack_1d8,plVar10,(long)(uStack_468 - lStack_470) / 0x158,&uStack_460)
              ;
              FUN_1073b2ab8(lStack_1c8,&uStack_390);
              lStack_1c8 = lStack_1c8 + 0x158;
              FUN_1073b345c(&lStack_470,&uStack_1d8);
              uVar25 = uStack_468;
              func_0x0001073b3550(&uStack_1d8);
            }
            uStack_468 = uVar25;
            func_0x00010730b16c(&uStack_390);
            func_0x0001073b3d7c(*(undefined8 *)(lVar12 + 0x148));
            func_0x0001073b3e44();
            break;
          case 3:
            if (*(int *)(lVar12 + 0x108) == 0) {
              uStack_390 = (double)((ulong)uStack_390 & 0xffffffffffffff00);
              cStack_238 = '\0';
code_r0x0001073b1764:
              func_0x0001073b3d7c(*(undefined8 *)(lVar12 + 0x148));
              func_0x0001073b3ee8();
            }
            else {
              func_0x0001073b3ed8(&uStack_1d8);
              lStack_118 = (*(long *)(lVar12 + 0xc0) + lVar9) - *(long *)(lVar12 + 0xb8);
              lStack_120 = lVar9;
              if (iStack_d0 != -1) {
                iStack_d0 = iStack_d0 + -1;
              }
              uVar3 = *(int *)(lVar12 + 0x110) - 1;
              if (uVar3 < 3) {
                uStack_c8 = *(undefined4 *)(&UNK_10de64064 + (ulong)uVar3 * 4);
              }
              else {
                uStack_c8 = 0;
              }
              lStack_88 = lVar9;
              FUN_1073b2ab8(&uStack_390,&uStack_1d8);
              cStack_238 = '\x01';
              func_0x00010730b16c(&uStack_1d8);
              if (cStack_238 != '\x01') goto code_r0x0001073b1764;
              func_0x0001073b3f60(*(undefined8 *)(lVar12 + 0xd0));
              FUN_1073b3388(&lStack_470,&uStack_390);
              uVar26 = *(undefined8 *)(lVar12 + 0x148);
              uStack_1d8 = (double)CONCAT44(uStack_1d8._4_4_,1);
              func_0x000104c2fe00(&dStack_1d0,auStack_228);
              lStack_190 = lStack_1e8;
              uStack_198 = uStack_1f0;
              if (lStack_1e8 != 0) {
                do {
                  func_0x0001073b3d94();
                } while (extraout_w10_00 != 0);
              }
              dStack_188 = dStack_1e0;
              FUN_1073b1e88(uVar26,&uStack_1d8,&lStack_480);
              FUN_10731de40(&uStack_1d8);
            }
            func_0x0001073b38a0(&uStack_390);
            break;
          case 4:
            func_0x0001073b3d7c(*(undefined8 *)(lVar12 + 0x148));
            plVar10 = plStack_428;
            if (plStack_420 < plStack_418) {
              plVar22 = plStack_420 + 1;
              *plStack_420 = lVar12;
            }
            else {
              lVar9 = (long)plStack_420 - (long)plStack_428;
              uVar25 = (lVar9 >> 3) + 1;
              if (uVar25 >> 0x3d != 0) goto code_r0x0001073b1c00;
              uVar16 = (long)plStack_418 - (long)plStack_428 >> 2;
              if (uVar16 <= uVar25) {
                uVar16 = uVar25;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)plStack_418 - (long)plStack_428)) {
                uVar16 = 0x1fffffffffffffff;
              }
              if (uVar16 == 0) {
                lVar11 = 0;
              }
              else {
                if (uVar16 >> 0x3d != 0) {
                  func_0x000104bd35f4();
                  goto LAB_1073b1c14;
                }
                lVar11 = uVar16 << 3;
                __Znwm();
              }
              plVar23 = (long *)(lVar11 + lVar9);
              plVar1 = (long *)(lVar11 + uVar16 * 8);
              plVar27 = plVar23 + -(lVar9 >> 3);
              plVar22 = plVar23 + 1;
              *plVar23 = lVar12;
              _memcpy(plVar27,plVar10,lVar9);
              plStack_428 = plVar27;
              plStack_418 = plVar1;
              if (plVar10 != (long *)0x0) {
                plStack_420 = plVar22;
                __ZdlPv(plVar10);
              }
            }
            plStack_420 = plVar22;
            func_0x0001073b3ee8();
            if (*(char *)(lVar12 + 0x70) == '\x01') {
              uStack_390 = (double)CONCAT44(uStack_390._4_4_,0x183);
              uStack_378 = 0;
              uStack_360 = 0;
              uStack_358 = 0;
              uStack_368 = 0;
              ppuStack_370 = &PTR_DAT_110996720;
              uStack_350 = 0x183;
              uStack_348 = 0;
              uStack_344 = 1;
              uStack_338 = 0;
              uStack_330 = 0;
              uStack_340 = 0;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                        (auStack_3f0,&UNK_10de63f60);
              lVar9 = lVar12 + 0x38;
              func_0x00010725ffc4(lVar9);
              func_0x000104c2fe00(&uStack_1d8,lVar9);
              FUN_1073b1028(&uStack_390,auStack_3f0,&uStack_1d8);
              func_0x000104c2f714(&uStack_1d8);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3f0);
              auStack_400[0] = 1;
              uStack_3f8 = 0;
              uStack_410 = *puVar17;
              uStack_408 = 3;
              FUN_10743fa9c(puVar17,&uStack_390,auStack_400,&uStack_410,7);
              func_0x0001073b3de4();
            }
          }
          FUN_10731de40(aiStack_230);
        }
        else {
          func_0x0001073b3f60(uVar25 / 1000000);
          func_0x0001073b3ecc();
        }
        func_0x0001072bcf50(auStack_3d8);
      }
      for (; uVar25 = uStack_468, lVar12 = lStack_470, plVar23 != plVar10; plVar23 = plVar23 + 1) {
        if (*(char *)(*plVar23 + 0x140) == '\x01') {
          func_0x000104c003e8(*plVar23 + 0x120);
        }
      }
      if (plVar24 != &lStack_470) {
        uVar16 = uStack_468 - lStack_470;
        lVar13 = *(long *)(param_1 + 0x138);
        uVar18 = *(long *)(param_1 + 0x148) - lVar13;
        uVar7 = uVar18 <= uVar16;
        if ((bool)uVar7 && uVar16 != uVar18) {
          lVar9 = (long)uVar16 / 0x158;
          if (lVar13 != 0) {
            FUN_1073b2a64(plVar24);
            __ZdlPv(*plVar24);
            *plVar24 = 0;
            *(undefined8 *)(param_1 + 0x140) = 0;
            *(undefined8 *)(param_1 + 0x148) = 0;
          }
          plVar10 = plVar24;
          FUN_1073b2fc0();
          func_0x0001073b3e90();
          if ((bool)uVar7) {
            func_0x0001073b3290();
            goto LAB_1073b1c14;
          }
          FUN_1073b329c();
          *(long **)(param_1 + 0x138) = plVar10;
          *(long **)(param_1 + 0x140) = plVar10;
          *(long **)(param_1 + 0x148) = plVar10 + lVar9 * 0x2b;
        }
        else {
          uVar18 = *(long *)(param_1 + 0x140) - lVar13;
          if (uVar16 <= uVar18) {
            FUN_1073b305c(lStack_470,uStack_468);
            FUN_1073b2a6c(plVar24,lVar12);
            goto LAB_1073b19a0;
          }
          lVar12 = lStack_470 + uVar18;
          FUN_1073b305c(lStack_470,lVar12);
        }
        FUN_1073b2f3c(plVar24,lVar12,uVar25);
      }
LAB_1073b19a0:
      uVar3 = uStack_478;
      for (plVar24 = (long *)lStack_448; uStack_478 = uVar3, plVar24 != (long *)0x0;
          plVar24 = (long *)*plVar24) {
        uVar3 = *(uint *)(plVar24 + 2);
        uVar16 = (ulong)uVar3;
        uStack_390 = (double)((ulong)uStack_390 & 0xffffffffffffff00);
        ppuStack_370 = (undefined **)((ulong)ppuStack_370 & 0xffffffffffffff00);
        uVar25 = (ulong)dStack_1d0 >> 8;
        dStack_1d0 = (double)CONCAT71((int7)uVar25,1);
        uStack_1d8 = (double)(param_1 + 8);
        func_0x00010724e404(param_1 + 8);
        uVar25 = *(ulong *)(param_1 + 0xb8);
        if ((uVar25 != 0) && (*(long *)(param_1 + 200) != 0)) {
          uVar18 = uVar25 - 1;
          uVar14 = (uint)uVar25;
          if ((uVar25 & uVar18) == 0) {
            uVar19 = (ulong)(uVar14 - 1 & uVar3);
          }
          else {
            uVar19 = uVar16;
            if (uVar25 <= uVar16) {
              uVar4 = 0;
              if (uVar14 != 0) {
                uVar4 = uVar3 / uVar14;
              }
              uVar19 = (ulong)(uVar3 - uVar4 * uVar14);
            }
          }
          plVar10 = *(long **)(*(long *)(param_1 + 0xb0) + uVar19 * 8);
          if (plVar10 != (long *)0x0) {
            do {
              while( true ) {
                plVar10 = (long *)*plVar10;
                if (plVar10 == (long *)0x0) goto LAB_1073b1a90;
                uVar20 = plVar10[1];
                if (uVar20 != uVar16) break;
                if (*(uint *)(plVar10 + 2) == uVar3) {
                  if ((char)ppuStack_370 == '\x01') {
                    FUN_1073b3a30(&uStack_390,plVar10 + 3);
                  }
                  else {
                    FUN_1073b3b60(&uStack_390,plVar10 + 3);
                    ppuStack_370 = (undefined **)CONCAT71(ppuStack_370._1_7_,1);
                  }
                  goto LAB_1073b1a90;
                }
              }
              if ((uVar25 & uVar18) == 0) {
                uVar20 = uVar20 & uVar18;
              }
              else if (uVar25 <= uVar20) {
                uVar5 = 0;
                if (uVar25 != 0) {
                  uVar5 = uVar20 / uVar25;
                }
                uVar20 = uVar20 - uVar5 * uVar25;
              }
            } while (uVar20 == uVar19);
          }
        }
LAB_1073b1a90:
        func_0x00010724e49c(&uStack_1d8);
        if ((char)ppuStack_370 == '\x01') {
          plVar10 = (long *)CONCAT44(uStack_374,uStack_378);
          if (plVar10 == (long *)0x0) {
            func_0x000104bfeb48();
            goto LAB_1073b1c14;
          }
          (**(code **)(*plVar10 + 0x30))(plVar10,plVar24 + 3);
        }
        FUN_1073b3ba4(&uStack_390);
        uVar3 = uStack_478;
      }
      lVar12 = lStack_430;
      if (lStack_430 != 0x7fffffffffffffff) {
        lVar12 = param_2 + lStack_430 * 1000000;
      }
      *(long *)(param_1 + 0x130) = lVar12;
      uVar25 = (ulong)uVar3;
      *(ulong *)(param_1 + 0x1b0) = *(long *)(param_1 + 0x1b0) + uVar25;
      iVar15 = (int)((*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138)) / 0x158);
      if (0 < iVar15) {
        uStack_390._4_4_ = (undefined4)((ulong)uStack_390 >> 0x20);
        uStack_390 = (double)CONCAT44(uStack_390._4_4_,0x184);
        uStack_378 = 0;
        uStack_360 = 0;
        uStack_358 = 0;
        ppuStack_370 = &PTR_DAT_110996720;
        uStack_368 = 0;
        uStack_350 = 0x184;
        uStack_348 = 1;
        uStack_344 = 1;
        uStack_338 = 0;
        uStack_330 = 0;
        uStack_340 = 0;
        uStack_1d8._4_4_ = (undefined4)((ulong)uStack_1d8 >> 0x20);
        uStack_1d8 = (double)CONCAT44(uStack_1d8._4_4_,iVar15);
        func_0x0001073b3ea8();
        func_0x0001073b3d64();
        func_0x0001073b3de4();
      }
      uVar7 = uVar3 == 1;
      if (0 < (int)uVar3) {
        uStack_390 = (double)CONCAT44(uStack_390._4_4_,0x185);
        uStack_378 = 0;
        uStack_360 = 0;
        uStack_358 = 0;
        ppuStack_370 = &PTR_DAT_110996720;
        uStack_368 = 0;
        uStack_350 = 0x185;
        uStack_348 = 1;
        uStack_344 = 1;
        uStack_338 = 0;
        uStack_330 = 0;
        uStack_340 = 0;
        uStack_1d8 = (double)CONCAT44(uStack_1d8._4_4_,uVar3);
        func_0x0001073b3ea8();
        func_0x0001073b3d64();
        func_0x0001073b3de4();
      }
      FUN_1073b32d4(&lStack_480);
      lVar12 = *(long *)(param_1 + 0x138);
      lVar13 = *(long *)(param_1 + 0x140);
    }
  }
  func_0x0001073b3c74(uStack_80);
  if ((bool)uVar7) {
    return uVar25 | (lVar13 - lVar12) / 0x158 << 0x20;
  }
  ___stack_chk_fail();
code_r0x0001073b1c00:
  func_0x0001073b38c0();
LAB_1073b1c14:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1073b1c18);
  (*pcVar6)();
}



/* Entry: 1073b1d38; end: 1073b1e87;  */

undefined1 * FUN_1073b1d38(undefined1 *param_1,long param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar9;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long lVar10;
  ulong uVar11;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *extraout_x10;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong extraout_x11;
  long extraout_x11_00;
  ulong uVar18;
  uint *unaff_x20;
  uint uVar19;
  ulong uVar20;
  ulong unaff_x25;
  long *plStack_218;
  uint *puStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [88];
  undefined8 uStack_1a8;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [56];
  uint auStack_e0 [2];
  undefined1 auStack_d8 [104];
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  func_0x0001073b3c94();
  uVar5 = 0;
  uStack_38 = extraout_x8;
  if ((*(char *)(param_2 + 0x10c) == '\x01') && (uVar5 = param_1[0x40] == '\x01', (bool)uVar5)) {
    func_0x0001078696e8(auStack_130);
    FUN_1073b35b0(auStack_70,&UNK_10f40ebbf,0xc,param_2);
    func_0x00010002b838(auStack_148,(&PTR_DAT_1109ab478)[*param_3]);
    func_0x0001072625b4(auStack_118,auStack_148);
    unaff_x20 = auStack_e0;
    func_0x000107277488(auStack_e0,auStack_118);
    param_3 = auStack_e0;
    func_0x000107869848(auStack_130,auStack_70);
    func_0x00010726af18(auStack_d8);
    func_0x000104c2f714(auStack_118);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
    func_0x000104c2f714(auStack_70);
    FUN_1073b3598(param_1);
    FUN_10731f9c8(param_1,auStack_130);
    param_1 = auStack_130;
    func_0x00010726b264();
  }
  func_0x0001073b3c74(uStack_38);
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x20 + 2);
  func_0x000104c2f714(auStack_118);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
  func_0x000104c2f714(auStack_70);
  puVar7 = auStack_130;
  func_0x00010726b264();
  func_0x0001073b3ce0();
  func_0x0001073b3c94();
  uStack_1a8 = extraout_x8_00;
  if (((ulong)puVar7 >> 0x20 & 1) != 0) {
    uVar9 = *(ulong *)(param_3 + 0xc);
    uVar20 = (ulong)puVar7 & 0xffffffff;
    uVar19 = (uint)puVar7;
    if ((uVar9 != 0) && (*(long *)(param_3 + 0x10) != 0)) {
      uVar11 = uVar9 - 1;
      uVar8 = (uint)uVar9;
      if ((uVar9 & uVar11) == 0) {
        uVar13 = uVar8 - 1 & uVar20;
      }
      else {
        uVar13 = uVar20;
        if (uVar9 <= uVar20) {
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar19 / uVar8;
          }
          uVar13 = (ulong)(uVar19 - uVar2 * uVar8);
        }
      }
      plVar15 = *(long **)(*(long *)(param_3 + 10) + uVar13 * 8);
      if (plVar15 != (long *)0x0) {
        do {
          while( true ) {
            plVar15 = (long *)*plVar15;
            if (plVar15 == (long *)0x0) goto LAB_1073b1f50;
            uVar18 = plVar15[1];
            if (uVar18 != uVar20) break;
            bVar6 = *(uint *)(plVar15 + 2) == uVar19;
            if (bVar6) {
              func_0x0001073b3c74(extraout_x8_00);
              if (bVar6) {
                lVar10 = extraout_x11_00 + 0x18;
                uVar9 = *(ulong *)(extraout_x11_00 + 0x20);
                if (uVar9 < *(ulong *)(extraout_x11_00 + 0x28)) {
                  func_0x00010731dea8();
                  lVar10 = uVar9 + 0x58;
                }
                else {
                  FUN_10731ded0();
                }
                *(long *)(extraout_x11_00 + 0x20) = lVar10;
                return (undefined1 *)(lVar10 + -0x58);
              }
              goto LAB_1073b22d0;
            }
          }
          if ((uVar9 & uVar11) == 0) {
            uVar18 = uVar18 & uVar11;
          }
          else if (uVar9 <= uVar18) {
            uVar16 = 0;
            if (uVar9 != 0) {
              uVar16 = uVar18 / uVar9;
            }
            uVar18 = uVar18 - uVar16 * uVar9;
          }
        } while (uVar18 == uVar13);
      }
    }
LAB_1073b1f50:
    func_0x00010731d8c8(auStack_200);
    uVar9 = *(ulong *)(param_3 + 0xc);
    if (uVar9 != 0) {
      uVar11 = uVar9 - 1;
      uVar8 = (uint)uVar9;
      if ((uVar9 & uVar11) == 0) {
        unaff_x25 = uVar8 - 1 & uVar20;
      }
      else {
        unaff_x25 = uVar20;
        if (uVar9 <= uVar20) {
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar19 / uVar8;
          }
          unaff_x25 = (ulong)(uVar19 - uVar2 * uVar8);
        }
      }
      plVar15 = *(long **)(*(long *)(param_3 + 10) + unaff_x25 * 8);
      if (plVar15 != (long *)0x0) {
        do {
          while( true ) {
            plVar15 = (long *)*plVar15;
            if (plVar15 == (long *)0x0) goto LAB_1073b1fe8;
            uVar13 = plVar15[1];
            if (uVar13 != uVar20) break;
            if (*(uint *)(plVar15 + 2) == uVar19) {
              uVar5 = 1;
              goto LAB_1073b2290;
            }
          }
          if ((uVar9 & uVar11) == 0) {
            uVar13 = uVar13 & uVar11;
          }
          else if (uVar9 <= uVar13) {
            uVar18 = 0;
            if (uVar9 != 0) {
              uVar18 = uVar13 / uVar9;
            }
            uVar13 = uVar13 - uVar18 * uVar9;
          }
        } while (uVar13 == unaff_x25);
      }
    }
LAB_1073b1fe8:
    plVar15 = (long *)0x30;
    __Znwm();
    puVar1 = param_3 + 0xe;
    uStack_208 = 1;
    *plVar15 = 0;
    plVar15[1] = uVar20;
    *(uint *)(plVar15 + 2) = uVar19;
    plVar15[4] = 0;
    plVar15[5] = 0;
    plVar15[3] = 0;
    puStack_210 = puVar1;
    if ((uVar9 == 0) ||
       (uVar5 = (float)param_3[0x12] * (float)uVar9 == (float)(*(long *)(param_3 + 0x10) + 1),
       (float)param_3[0x12] * (float)uVar9 < (float)(*(long *)(param_3 + 0x10) + 1))) {
      bVar4 = 2 < uVar9;
      bVar6 = uVar9 == 3;
      plStack_218 = plVar15;
      func_0x0001073b3f74(uVar9 << 1);
      uVar11 = extraout_x8_01;
      if (!bVar4 || bVar6) {
        uVar11 = extraout_x9;
      }
      if (uVar11 - 1 == 0) {
        uVar11 = 2;
      }
      else if ((uVar11 & uVar11 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar9 = *(ulong *)(param_3 + 0xc);
      }
      if (uVar9 < uVar11) {
LAB_1073b2094:
        if (uVar11 >> 0x3d != 0) goto LAB_1073b22d4;
        lVar10 = uVar11 << 3;
        __Znwm(lVar10);
        FUN_1073b3bc4(param_3 + 10,lVar10);
        *(ulong *)(param_3 + 0xc) = uVar11;
        lVar10 = *(long *)(param_3 + 10);
        for (uVar9 = 0; uVar11 != uVar9; uVar9 = uVar9 + 1) {
          *(undefined8 *)(lVar10 + uVar9 * 8) = 0;
        }
        plVar12 = *(long **)puVar1;
        uVar9 = uVar11;
        if (plVar12 != (long *)0x0) {
          uVar16 = plVar12[1];
          uVar18 = uVar11 - 1;
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = uVar16 / uVar11;
          }
          uVar17 = uVar16;
          if (uVar11 <= uVar16) {
            uVar17 = uVar16 - uVar13 * uVar11;
          }
          if ((uVar11 & uVar18) == 0) {
            uVar17 = uVar16 & uVar18;
          }
          *(uint **)(lVar10 + uVar17 * 8) = puVar1;
          while (plVar14 = plVar12, plVar12 = (long *)*plVar14, plVar12 != (long *)0x0) {
            uVar13 = plVar12[1];
            if ((uVar11 & uVar18) == 0) {
              uVar13 = uVar13 & uVar18;
            }
            else if (uVar11 <= uVar13) {
              uVar16 = 0;
              if (uVar11 != 0) {
                uVar16 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar16 * uVar11;
            }
            if (uVar13 != uVar17) {
              if (*(long *)(lVar10 + uVar13 * 8) == 0) {
                *(long **)(lVar10 + uVar13 * 8) = plVar14;
                uVar17 = uVar13;
              }
              else {
                func_0x0001073b3e0c();
                lVar10 = extraout_x8_02;
                uVar18 = extraout_x9_00;
                plVar12 = extraout_x10;
                uVar17 = extraout_x11;
              }
            }
          }
        }
      }
      else if (uVar11 < uVar9) {
        uVar13 = (ulong)((float)*(ulong *)(param_3 + 0x10) / (float)param_3[0x12]);
        if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x0001073b3dec();
        }
        if (uVar11 <= uVar13) {
          uVar11 = uVar13;
        }
        if (uVar11 < uVar9) {
          if (uVar11 != 0) goto LAB_1073b2094;
          FUN_1073b3bc4(param_3 + 10,0);
          param_3[0xc] = 0;
          param_3[0xd] = 0;
          uVar9 = 0;
        }
        else {
          uVar9 = *(ulong *)(param_3 + 0xc);
        }
      }
      if ((uVar9 & uVar9 - 1) == 0) {
        unaff_x25 = (int)uVar9 - 1 & uVar20;
        uVar5 = true;
      }
      else {
        uVar5 = uVar9 == uVar20;
        unaff_x25 = uVar20;
        if (uVar9 <= uVar20) {
          uVar11 = 0;
          if (uVar9 != 0) {
            uVar11 = uVar20 / uVar9;
          }
          unaff_x25 = uVar20 - uVar11 * uVar9;
        }
      }
    }
    lVar10 = *(long *)(param_3 + 10);
    plVar12 = *(long **)(lVar10 + unaff_x25 * 8);
    if (plVar12 == (long *)0x0) {
      *plVar15 = *(long *)puVar1;
      *(long **)puVar1 = plVar15;
      *(uint **)(lVar10 + unaff_x25 * 8) = puVar1;
      if (*plVar15 != 0) {
        uVar20 = *(ulong *)(*plVar15 + 8);
        if ((uVar9 & uVar9 - 1) == 0) {
          uVar20 = uVar20 & uVar9 - 1;
          uVar5 = true;
        }
        else {
          uVar5 = uVar20 == uVar9;
          if (uVar9 <= uVar20) {
            uVar11 = 0;
            if (uVar9 != 0) {
              uVar11 = uVar20 / uVar9;
            }
            uVar20 = uVar20 - uVar11 * uVar9;
          }
        }
        *(long **)(lVar10 + uVar20 * 8) = plVar15;
      }
    }
    else {
      *plVar15 = *plVar12;
      *plVar12 = (long)plVar15;
    }
    plStack_218 = (long *)0x0;
    *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + 1;
    FUN_1073b3bdc(&plStack_218);
LAB_1073b2290:
    func_0x00010731d8a0(plVar15 + 3,auStack_200,1);
    puVar7 = auStack_200;
    func_0x00010731de40(puVar7);
  }
  func_0x0001073b3c74(uStack_1a8);
  if ((bool)uVar5) {
    return puVar7;
  }
LAB_1073b22d0:
  ___stack_chk_fail();
LAB_1073b22d4:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1073b22dc);
  (*pcVar3)();
}



/* Entry: 1073b1e88; end: 1073b22fb;  */

undefined1 * FUN_1073b1e88(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  ulong uVar9;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *extraout_x10;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ulong extraout_x11;
  long extraout_x11_00;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong unaff_x25;
  float fVar19;
  float fVar20;
  long *plStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [88];
  undefined8 uStack_58;
  
  func_0x0001073b3c94();
  uStack_58 = extraout_x8;
  if (((ulong)param_1 >> 0x20 & 1) != 0) {
    uVar7 = *(ulong *)(param_3 + 0x30);
    uVar18 = (ulong)param_1 & 0xffffffff;
    uVar17 = (uint)param_1;
    if ((uVar7 != 0) && (*(long *)(param_3 + 0x40) != 0)) {
      uVar9 = uVar7 - 1;
      uVar6 = (uint)uVar7;
      if ((uVar7 & uVar9) == 0) {
        uVar11 = uVar6 - 1 & uVar18;
      }
      else {
        uVar11 = uVar18;
        if (uVar7 <= uVar18) {
          uVar2 = 0;
          if (uVar6 != 0) {
            uVar2 = uVar17 / uVar6;
          }
          uVar11 = (ulong)(uVar17 - uVar2 * uVar6);
        }
      }
      plVar13 = *(long **)(*(long *)(param_3 + 0x28) + uVar11 * 8);
      if (plVar13 != (long *)0x0) {
        do {
          while( true ) {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_1073b1f50;
            uVar16 = plVar13[1];
            if (uVar16 != uVar18) break;
            bVar5 = *(uint *)(plVar13 + 2) == uVar17;
            if (bVar5) {
              func_0x0001073b3c74(extraout_x8);
              if (bVar5) {
                lVar8 = extraout_x11_00 + 0x18;
                uVar7 = *(ulong *)(extraout_x11_00 + 0x20);
                if (uVar7 < *(ulong *)(extraout_x11_00 + 0x28)) {
                  func_0x00010731dea8();
                  lVar8 = uVar7 + 0x58;
                }
                else {
                  FUN_10731ded0();
                }
                *(long *)(extraout_x11_00 + 0x20) = lVar8;
                return (undefined1 *)(lVar8 + -0x58);
              }
              goto LAB_1073b22d0;
            }
          }
          if ((uVar7 & uVar9) == 0) {
            uVar16 = uVar16 & uVar9;
          }
          else if (uVar7 <= uVar16) {
            uVar14 = 0;
            if (uVar7 != 0) {
              uVar14 = uVar16 / uVar7;
            }
            uVar16 = uVar16 - uVar14 * uVar7;
          }
        } while (uVar16 == uVar11);
      }
    }
LAB_1073b1f50:
    func_0x00010731d8c8(auStack_b0);
    uVar7 = *(ulong *)(param_3 + 0x30);
    if (uVar7 != 0) {
      uVar9 = uVar7 - 1;
      uVar6 = (uint)uVar7;
      if ((uVar7 & uVar9) == 0) {
        unaff_x25 = uVar6 - 1 & uVar18;
      }
      else {
        unaff_x25 = uVar18;
        if (uVar7 <= uVar18) {
          uVar2 = 0;
          if (uVar6 != 0) {
            uVar2 = uVar17 / uVar6;
          }
          unaff_x25 = (ulong)(uVar17 - uVar2 * uVar6);
        }
      }
      plVar13 = *(long **)(*(long *)(param_3 + 0x28) + unaff_x25 * 8);
      if (plVar13 != (long *)0x0) {
        do {
          while( true ) {
            plVar13 = (long *)*plVar13;
            if (plVar13 == (long *)0x0) goto LAB_1073b1fe8;
            uVar11 = plVar13[1];
            if (uVar11 != uVar18) break;
            if (*(uint *)(plVar13 + 2) == uVar17) {
              in_ZR = 1;
              goto LAB_1073b2290;
            }
          }
          if ((uVar7 & uVar9) == 0) {
            uVar11 = uVar11 & uVar9;
          }
          else if (uVar7 <= uVar11) {
            uVar16 = 0;
            if (uVar7 != 0) {
              uVar16 = uVar11 / uVar7;
            }
            uVar11 = uVar11 - uVar16 * uVar7;
          }
        } while (uVar11 == unaff_x25);
      }
    }
LAB_1073b1fe8:
    plVar13 = (long *)0x30;
    __Znwm();
    plVar1 = (long *)(param_3 + 0x38);
    uStack_b8 = 1;
    *plVar13 = 0;
    plVar13[1] = uVar18;
    *(uint *)(plVar13 + 2) = uVar17;
    plVar13[4] = 0;
    plVar13[5] = 0;
    plVar13[3] = 0;
    fVar19 = (float)(*(long *)(param_3 + 0x40) + 1);
    plStack_c0 = plVar1;
    if ((uVar7 == 0) ||
       (fVar20 = *(float *)(param_3 + 0x48) * (float)uVar7, in_ZR = fVar20 == fVar19,
       fVar20 < fVar19)) {
      bVar4 = 2 < uVar7;
      bVar5 = uVar7 == 3;
      plStack_c8 = plVar13;
      func_0x0001073b3f74(uVar7 << 1);
      uVar9 = extraout_x8_00;
      if (!bVar4 || bVar5) {
        uVar9 = extraout_x9;
      }
      if (uVar9 - 1 == 0) {
        uVar9 = 2;
      }
      else if ((uVar9 & uVar9 - 1) != 0) {
        __ZNSt3__112__next_primeEm();
        uVar7 = *(ulong *)(param_3 + 0x30);
      }
      if (uVar7 < uVar9) {
LAB_1073b2094:
        if (uVar9 >> 0x3d != 0) goto LAB_1073b22d4;
        lVar8 = uVar9 << 3;
        __Znwm(lVar8);
        FUN_1073b3bc4(param_3 + 0x28,lVar8);
        *(ulong *)(param_3 + 0x30) = uVar9;
        lVar8 = *(long *)(param_3 + 0x28);
        for (uVar7 = 0; uVar9 != uVar7; uVar7 = uVar7 + 1) {
          *(undefined8 *)(lVar8 + uVar7 * 8) = 0;
        }
        plVar10 = (long *)*plVar1;
        uVar7 = uVar9;
        if (plVar10 != (long *)0x0) {
          uVar14 = plVar10[1];
          uVar16 = uVar9 - 1;
          uVar11 = 0;
          if (uVar9 != 0) {
            uVar11 = uVar14 / uVar9;
          }
          uVar15 = uVar14;
          if (uVar9 <= uVar14) {
            uVar15 = uVar14 - uVar11 * uVar9;
          }
          if ((uVar9 & uVar16) == 0) {
            uVar15 = uVar14 & uVar16;
          }
          *(long **)(lVar8 + uVar15 * 8) = plVar1;
          while (plVar12 = plVar10, plVar10 = (long *)*plVar12, plVar10 != (long *)0x0) {
            uVar11 = plVar10[1];
            if ((uVar9 & uVar16) == 0) {
              uVar11 = uVar11 & uVar16;
            }
            else if (uVar9 <= uVar11) {
              uVar14 = 0;
              if (uVar9 != 0) {
                uVar14 = uVar11 / uVar9;
              }
              uVar11 = uVar11 - uVar14 * uVar9;
            }
            if (uVar11 != uVar15) {
              if (*(long *)(lVar8 + uVar11 * 8) == 0) {
                *(long **)(lVar8 + uVar11 * 8) = plVar12;
                uVar15 = uVar11;
              }
              else {
                func_0x0001073b3e0c();
                lVar8 = extraout_x8_01;
                uVar16 = extraout_x9_00;
                plVar10 = extraout_x10;
                uVar15 = extraout_x11;
              }
            }
          }
        }
      }
      else if (uVar9 < uVar7) {
        uVar11 = (ulong)((float)*(ulong *)(param_3 + 0x40) / *(float *)(param_3 + 0x48));
        if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x0001073b3dec();
        }
        if (uVar9 <= uVar11) {
          uVar9 = uVar11;
        }
        if (uVar9 < uVar7) {
          if (uVar9 != 0) goto LAB_1073b2094;
          FUN_1073b3bc4(param_3 + 0x28,0);
          *(undefined8 *)(param_3 + 0x30) = 0;
          uVar7 = 0;
        }
        else {
          uVar7 = *(ulong *)(param_3 + 0x30);
        }
      }
      if ((uVar7 & uVar7 - 1) == 0) {
        unaff_x25 = (int)uVar7 - 1 & uVar18;
        in_ZR = true;
      }
      else {
        in_ZR = uVar7 == uVar18;
        unaff_x25 = uVar18;
        if (uVar7 <= uVar18) {
          uVar9 = 0;
          if (uVar7 != 0) {
            uVar9 = uVar18 / uVar7;
          }
          unaff_x25 = uVar18 - uVar9 * uVar7;
        }
      }
    }
    lVar8 = *(long *)(param_3 + 0x28);
    plVar10 = *(long **)(lVar8 + unaff_x25 * 8);
    if (plVar10 == (long *)0x0) {
      *plVar13 = *plVar1;
      *plVar1 = (long)plVar13;
      *(long **)(lVar8 + unaff_x25 * 8) = plVar1;
      if (*plVar13 != 0) {
        uVar18 = *(ulong *)(*plVar13 + 8);
        if ((uVar7 & uVar7 - 1) == 0) {
          uVar18 = uVar18 & uVar7 - 1;
          in_ZR = true;
        }
        else {
          in_ZR = uVar18 == uVar7;
          if (uVar7 <= uVar18) {
            uVar9 = 0;
            if (uVar7 != 0) {
              uVar9 = uVar18 / uVar7;
            }
            uVar18 = uVar18 - uVar9 * uVar7;
          }
        }
        *(long **)(lVar8 + uVar18 * 8) = plVar13;
      }
    }
    else {
      *plVar13 = *plVar10;
      *plVar10 = (long)plVar13;
    }
    plStack_c8 = (long *)0x0;
    *(long *)(param_3 + 0x40) = *(long *)(param_3 + 0x40) + 1;
    FUN_1073b3bdc(&plStack_c8);
LAB_1073b2290:
    func_0x00010731d8a0(plVar13 + 3,auStack_b0,1);
    param_1 = auStack_b0;
    func_0x00010731de40(param_1);
  }
  func_0x0001073b3c74(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
LAB_1073b22d0:
  ___stack_chk_fail();
LAB_1073b22d4:
  func_0x000104bd35f4();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1073b22dc);
  (*pcVar3)();
}



/* Entry: 1073b22fc; end: 1073b239f;  */

undefined1 * FUN_1073b22fc(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 extraout_x8;
  undefined1 *puVar11;
  undefined1 *extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar12;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  long *plVar13;
  long *plVar14;
  long *extraout_x10;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *extraout_x11;
  undefined1 *puVar17;
  long *plVar18;
  undefined1 *unaff_x23;
  uint uVar19;
  undefined1 *puVar20;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar20 = auStack_60;
  puVar17 = auStack_60;
  puVar9 = auStack_60;
  func_0x0001073b3c94();
  uVar7 = 0;
  uStack_28 = extraout_x8;
  if ((param_2[0x10c] == '\x01') && (uVar7 = param_1[0x40] == '\x01', (bool)uVar7)) {
    FUN_1073b3598(param_1);
    FUN_1073b35b0(auStack_60,&UNK_10f40ebbf,0xc,param_2);
    func_0x00010724b810(param_1 + 0x20,auStack_60);
    func_0x000104c2f714();
    param_1 = puVar17;
    param_2 = puVar20;
  }
  func_0x0001073b3c74(uStack_28);
  if ((bool)uVar7) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000104c2f714();
  func_0x0001073b3ce0();
  func_0x0001073b3dc8();
  uVar2 = *(uint *)(puVar9 + 0xd8);
  puVar17 = (undefined1 *)(ulong)uVar2;
  *(uint *)(puVar9 + 0xd8) = uVar2 + 1;
  puVar20 = *(undefined1 **)(puVar9 + 0xb8);
  if (puVar20 != (undefined1 *)0x0) {
    puVar11 = puVar20 + -1;
    uVar19 = (uint)puVar20;
    if (((ulong)puVar20 & (ulong)puVar11) == 0) {
      unaff_x23 = (undefined1 *)(ulong)(uVar19 - 1 & uVar2);
    }
    else {
      unaff_x23 = puVar17;
      if (puVar20 <= puVar17) {
        uVar3 = 0;
        if (uVar19 != 0) {
          uVar3 = uVar2 / uVar19;
        }
        unaff_x23 = (undefined1 *)(ulong)(uVar2 - uVar3 * uVar19);
      }
    }
    plVar18 = *(long **)(*(long *)(puVar9 + 0xb0) + (long)unaff_x23 * 8);
    if (plVar18 != (long *)0x0) {
      do {
        while( true ) {
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) goto LAB_1073b2464;
          puVar12 = (undefined1 *)plVar18[1];
          if (puVar12 != puVar17) break;
          if (*(uint *)(plVar18 + 2) == uVar2) goto LAB_1073b26d8;
        }
        if (((ulong)puVar20 & (ulong)puVar11) == 0) {
          puVar12 = (undefined1 *)((ulong)puVar12 & (ulong)puVar11);
        }
        else if (puVar20 <= puVar12) {
          uVar4 = 0;
          if (puVar20 != (undefined1 *)0x0) {
            uVar4 = (ulong)puVar12 / (ulong)puVar20;
          }
          puVar12 = puVar12 + -(uVar4 * (long)puVar20);
        }
      } while (puVar12 == unaff_x23);
    }
  }
LAB_1073b2464:
  plVar18 = (long *)0x38;
  __Znwm();
  plVar1 = (long *)(puVar9 + 0xc0);
  *plVar18 = 0;
  plVar18[1] = (long)puVar17;
  *(uint *)(plVar18 + 2) = uVar2;
  plVar18[6] = 0;
  if ((puVar20 != (undefined1 *)0x0) &&
     ((float)(*(long *)(puVar9 + 200) + 1) <= *(float *)(puVar9 + 0xd0) * (float)puVar20))
  goto LAB_1073b2664;
  bVar6 = (undefined1 *)0x2 < puVar20;
  bVar8 = puVar20 == (undefined1 *)0x3;
  func_0x0001073b3f74((long)puVar20 << 1);
  puVar11 = extraout_x8_00;
  if (!bVar6 || bVar8) {
    puVar11 = extraout_x9;
  }
  if (puVar11 + -1 == (undefined1 *)0x0) {
    puVar11 = (undefined1 *)0x2;
  }
  else if (((ulong)puVar11 & (ulong)(puVar11 + -1)) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar20 = *(undefined1 **)(puVar9 + 0xb8);
  }
  if (puVar20 < puVar11) {
LAB_1073b2504:
    if ((ulong)puVar11 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1073b2710);
      (*pcVar5)();
    }
    lVar10 = (long)puVar11 << 3;
    __Znwm(lVar10);
    FUN_1073b3c1c(puVar9 + 0xb0,lVar10);
    *(undefined1 **)(puVar9 + 0xb8) = puVar11;
    lVar10 = *(long *)(puVar9 + 0xb0);
    for (puVar20 = (undefined1 *)0x0; puVar11 != puVar20; puVar20 = puVar20 + 1) {
      *(undefined8 *)(lVar10 + (long)puVar20 * 8) = 0;
    }
    plVar13 = (long *)*plVar1;
    puVar20 = puVar11;
    if (plVar13 != (long *)0x0) {
      puVar15 = (undefined1 *)plVar13[1];
      puVar12 = puVar11 + -1;
      uVar4 = 0;
      if (puVar11 != (undefined1 *)0x0) {
        uVar4 = (ulong)puVar15 / (ulong)puVar11;
      }
      puVar16 = puVar15;
      if (puVar11 <= puVar15) {
        puVar16 = puVar15 + -(uVar4 * (long)puVar11);
      }
      if (((ulong)puVar11 & (ulong)puVar12) == 0) {
        puVar16 = (undefined1 *)((ulong)puVar15 & (ulong)puVar12);
      }
      *(long **)(lVar10 + (long)puVar16 * 8) = plVar1;
      while (plVar14 = plVar13, plVar13 = (long *)*plVar14, plVar13 != (long *)0x0) {
        puVar15 = (undefined1 *)plVar13[1];
        if (((ulong)puVar11 & (ulong)puVar12) == 0) {
          puVar15 = (undefined1 *)((ulong)puVar15 & (ulong)puVar12);
        }
        else if (puVar11 <= puVar15) {
          uVar4 = 0;
          if (puVar11 != (undefined1 *)0x0) {
            uVar4 = (ulong)puVar15 / (ulong)puVar11;
          }
          puVar15 = puVar15 + -(uVar4 * (long)puVar11);
        }
        if (puVar15 != puVar16) {
          if (*(long *)(lVar10 + (long)puVar15 * 8) == 0) {
            *(long **)(lVar10 + (long)puVar15 * 8) = plVar14;
            puVar16 = puVar15;
          }
          else {
            func_0x0001073b3e0c();
            lVar10 = extraout_x8_01;
            puVar12 = extraout_x9_00;
            plVar13 = extraout_x10;
            puVar16 = extraout_x11;
          }
        }
      }
    }
  }
  else if (puVar11 < puVar20) {
    puVar12 = (undefined1 *)(long)((float)*(ulong *)(puVar9 + 200) / *(float *)(puVar9 + 0xd0));
    if ((puVar20 < (undefined1 *)0x3) || (((ulong)puVar20 & (ulong)(puVar20 + -1)) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001073b3dec();
    }
    if (puVar11 <= puVar12) {
      puVar11 = puVar12;
    }
    if (puVar11 < puVar20) {
      if (puVar11 != (undefined1 *)0x0) goto LAB_1073b2504;
      FUN_1073b3c1c(puVar9 + 0xb0,0);
      *(undefined8 *)(puVar9 + 0xb8) = 0;
      puVar20 = (undefined1 *)0x0;
    }
    else {
      puVar20 = *(undefined1 **)(puVar9 + 0xb8);
    }
  }
  if (((ulong)puVar20 & (ulong)(puVar20 + -1)) == 0) {
    unaff_x23 = (undefined1 *)(ulong)((int)puVar20 - 1U & uVar2);
  }
  else {
    unaff_x23 = puVar17;
    if (puVar20 <= puVar17) {
      uVar4 = 0;
      if (puVar20 != (undefined1 *)0x0) {
        uVar4 = (ulong)puVar17 / (ulong)puVar20;
      }
      unaff_x23 = puVar17 + -(uVar4 * (long)puVar20);
    }
  }
LAB_1073b2664:
  lVar10 = *(long *)(puVar9 + 0xb0);
  plVar13 = *(long **)(lVar10 + (long)unaff_x23 * 8);
  if (plVar13 == (long *)0x0) {
    *plVar18 = *plVar1;
    *plVar1 = (long)plVar18;
    *(long **)(lVar10 + (long)unaff_x23 * 8) = plVar1;
    if (*plVar18 != 0) {
      puVar11 = *(undefined1 **)(*plVar18 + 8);
      if (((ulong)puVar20 & (ulong)(puVar20 + -1)) == 0) {
        puVar11 = (undefined1 *)((ulong)puVar11 & (ulong)(puVar20 + -1));
      }
      else if (puVar20 <= puVar11) {
        uVar4 = 0;
        if (puVar20 != (undefined1 *)0x0) {
          uVar4 = (ulong)puVar11 / (ulong)puVar20;
        }
        puVar11 = puVar11 + -(uVar4 * (long)puVar20);
      }
      *(long **)(lVar10 + (long)puVar11 * 8) = plVar18;
    }
  }
  else {
    *plVar18 = *plVar13;
    *plVar13 = (long)plVar18;
  }
  *(long *)(puVar9 + 200) = *(long *)(puVar9 + 200) + 1;
  func_0x0001073b3f24();
LAB_1073b26d8:
  FUN_1073b3a30(plVar18 + 3,param_2);
  func_0x0001073b3f08();
  return puVar17;
}



/* Entry: 1073b23a0; end: 1073b2727;  */

ulong FUN_1073b23a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong uVar9;
  ulong extraout_x9;
  ulong uVar10;
  ulong extraout_x9_00;
  long *plVar11;
  long *plVar12;
  long *extraout_x10;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_x11;
  ulong uVar15;
  long *plVar16;
  ulong unaff_x23;
  uint uVar17;
  ulong uVar18;
  
  func_0x0001073b3dc8();
  uVar2 = *(uint *)(param_1 + 0xd8);
  uVar15 = (ulong)uVar2;
  *(uint *)(param_1 + 0xd8) = uVar2 + 1;
  uVar18 = *(ulong *)(param_1 + 0xb8);
  if (uVar18 != 0) {
    uVar8 = uVar18 - 1;
    uVar17 = (uint)uVar18;
    if ((uVar18 & uVar8) == 0) {
      unaff_x23 = (ulong)(uVar17 - 1 & uVar2);
    }
    else {
      unaff_x23 = uVar15;
      if (uVar18 <= uVar15) {
        uVar3 = 0;
        if (uVar17 != 0) {
          uVar3 = uVar2 / uVar17;
        }
        unaff_x23 = (ulong)(uVar2 - uVar3 * uVar17);
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0xb0) + unaff_x23 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) goto LAB_1073b2464;
          uVar9 = plVar16[1];
          if (uVar9 != uVar15) break;
          if (*(uint *)(plVar16 + 2) == uVar2) goto LAB_1073b26d8;
        }
        if ((uVar18 & uVar8) == 0) {
          uVar9 = uVar9 & uVar8;
        }
        else if (uVar18 <= uVar9) {
          uVar10 = 0;
          if (uVar18 != 0) {
            uVar10 = uVar9 / uVar18;
          }
          uVar9 = uVar9 - uVar10 * uVar18;
        }
      } while (uVar9 == unaff_x23);
    }
  }
LAB_1073b2464:
  plVar16 = (long *)0x38;
  __Znwm();
  plVar1 = (long *)(param_1 + 0xc0);
  *plVar16 = 0;
  plVar16[1] = uVar15;
  *(uint *)(plVar16 + 2) = uVar2;
  plVar16[6] = 0;
  if ((uVar18 != 0) &&
     ((float)(*(long *)(param_1 + 200) + 1) <= *(float *)(param_1 + 0xd0) * (float)uVar18))
  goto LAB_1073b2664;
  bVar5 = 2 < uVar18;
  bVar6 = uVar18 == 3;
  func_0x0001073b3f74(uVar18 << 1);
  uVar8 = extraout_x8;
  if (!bVar5 || bVar6) {
    uVar8 = extraout_x9;
  }
  if (uVar8 - 1 == 0) {
    uVar8 = 2;
  }
  else if ((uVar8 & uVar8 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar18 = *(ulong *)(param_1 + 0xb8);
  }
  if (uVar18 < uVar8) {
LAB_1073b2504:
    if (uVar8 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1073b2710);
      (*pcVar4)();
    }
    lVar7 = uVar8 << 3;
    __Znwm(lVar7);
    FUN_1073b3c1c(param_1 + 0xb0,lVar7);
    *(ulong *)(param_1 + 0xb8) = uVar8;
    lVar7 = *(long *)(param_1 + 0xb0);
    for (uVar18 = 0; uVar8 != uVar18; uVar18 = uVar18 + 1) {
      *(undefined8 *)(lVar7 + uVar18 * 8) = 0;
    }
    plVar11 = (long *)*plVar1;
    uVar18 = uVar8;
    if (plVar11 != (long *)0x0) {
      uVar13 = plVar11[1];
      uVar10 = uVar8 - 1;
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar13 / uVar8;
      }
      uVar14 = uVar13;
      if (uVar8 <= uVar13) {
        uVar14 = uVar13 - uVar9 * uVar8;
      }
      if ((uVar8 & uVar10) == 0) {
        uVar14 = uVar13 & uVar10;
      }
      *(long **)(lVar7 + uVar14 * 8) = plVar1;
      while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
        uVar9 = plVar11[1];
        if ((uVar8 & uVar10) == 0) {
          uVar9 = uVar9 & uVar10;
        }
        else if (uVar8 <= uVar9) {
          uVar13 = 0;
          if (uVar8 != 0) {
            uVar13 = uVar9 / uVar8;
          }
          uVar9 = uVar9 - uVar13 * uVar8;
        }
        if (uVar9 != uVar14) {
          if (*(long *)(lVar7 + uVar9 * 8) == 0) {
            *(long **)(lVar7 + uVar9 * 8) = plVar12;
            uVar14 = uVar9;
          }
          else {
            func_0x0001073b3e0c();
            lVar7 = extraout_x8_00;
            uVar10 = extraout_x9_00;
            plVar11 = extraout_x10;
            uVar14 = extraout_x11;
          }
        }
      }
    }
  }
  else if (uVar8 < uVar18) {
    uVar9 = (ulong)((float)*(ulong *)(param_1 + 200) / *(float *)(param_1 + 0xd0));
    if ((uVar18 < 3) || ((uVar18 & uVar18 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001073b3dec();
    }
    if (uVar8 <= uVar9) {
      uVar8 = uVar9;
    }
    if (uVar8 < uVar18) {
      if (uVar8 != 0) goto LAB_1073b2504;
      FUN_1073b3c1c(param_1 + 0xb0,0);
      *(undefined8 *)(param_1 + 0xb8) = 0;
      uVar18 = 0;
    }
    else {
      uVar18 = *(ulong *)(param_1 + 0xb8);
    }
  }
  if ((uVar18 & uVar18 - 1) == 0) {
    unaff_x23 = (ulong)((int)uVar18 - 1U & uVar2);
  }
  else {
    unaff_x23 = uVar15;
    if (uVar18 <= uVar15) {
      uVar8 = 0;
      if (uVar18 != 0) {
        uVar8 = uVar15 / uVar18;
      }
      unaff_x23 = uVar15 - uVar8 * uVar18;
    }
  }
LAB_1073b2664:
  lVar7 = *(long *)(param_1 + 0xb0);
  plVar11 = *(long **)(lVar7 + unaff_x23 * 8);
  if (plVar11 == (long *)0x0) {
    *plVar16 = *plVar1;
    *plVar1 = (long)plVar16;
    *(long **)(lVar7 + unaff_x23 * 8) = plVar1;
    if (*plVar16 != 0) {
      uVar8 = *(ulong *)(*plVar16 + 8);
      if ((uVar18 & uVar18 - 1) == 0) {
        uVar8 = uVar8 & uVar18 - 1;
      }
      else if (uVar18 <= uVar8) {
        uVar9 = 0;
        if (uVar18 != 0) {
          uVar9 = uVar8 / uVar18;
        }
        uVar8 = uVar8 - uVar9 * uVar18;
      }
      *(long **)(lVar7 + uVar8 * 8) = plVar16;
    }
  }
  else {
    *plVar16 = *plVar11;
    *plVar11 = (long)plVar16;
  }
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  func_0x0001073b3f24();
LAB_1073b26d8:
  FUN_1073b3a30(plVar16 + 3,param_2);
  func_0x0001073b3f08();
  return uVar15;
}



/* Entry: 1073b2728; end: 1073b28ff;  */

void FUN_1073b2728(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  
  func_0x0001073b3dc8();
  uVar7 = *(ulong *)(param_1 + 0xb8);
  if ((uVar7 != 0) && (lVar4 = *(long *)(param_1 + 200), lVar4 != 0)) {
    uVar5 = (ulong)param_2;
    uVar9 = uVar7 - 1;
    uVar6 = (uint)uVar7;
    if ((uVar7 & uVar9) == 0) {
      uVar11 = (ulong)(uVar6 - 1 & param_2);
    }
    else {
      uVar11 = uVar5;
      if (uVar7 <= uVar5) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = param_2 / uVar6;
        }
        uVar11 = (ulong)(param_2 - uVar1 * uVar6);
      }
    }
    lVar10 = *(long *)(param_1 + 0xb0);
    plVar8 = *(long **)(lVar10 + uVar11 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1073b28ec;
          uVar13 = plVar8[1];
          if (uVar13 != uVar5) break;
          if (*(uint *)(plVar8 + 2) == param_2) {
            lVar12 = *plVar8;
            if ((uVar7 & uVar9) == 0) {
              uVar5 = uVar9 & uVar5;
            }
            else if (uVar7 <= uVar5) {
              uVar11 = 0;
              if (uVar7 != 0) {
                uVar11 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar11 * uVar7;
            }
            plVar3 = *(long **)(lVar10 + uVar5 * 8);
            do {
              plVar14 = plVar3;
              plVar3 = (long *)*plVar14;
            } while ((long *)*plVar14 != plVar8);
            if (plVar14 == (long *)(param_1 + 0xc0)) {
LAB_1073b2850:
              if (lVar12 == 0) {
LAB_1073b2884:
                *(undefined8 *)(lVar10 + uVar5 * 8) = 0;
                lVar12 = *plVar8;
                goto LAB_1073b288c;
              }
              uVar11 = *(ulong *)(lVar12 + 8);
              if ((uVar7 & uVar9) == 0) {
                uVar13 = uVar11 & uVar9;
              }
              else {
                uVar13 = uVar11;
                if (uVar7 <= uVar11) {
                  uVar13 = 0;
                  if (uVar7 != 0) {
                    uVar13 = uVar11 / uVar7;
                  }
                  uVar13 = uVar11 - uVar13 * uVar7;
                }
              }
              if (uVar13 != uVar5) goto LAB_1073b2884;
LAB_1073b2894:
              if ((uVar7 & uVar9) == 0) {
                uVar11 = uVar11 & uVar9;
              }
              else if (uVar7 <= uVar11) {
                uVar9 = 0;
                if (uVar7 != 0) {
                  uVar9 = uVar11 / uVar7;
                }
                uVar11 = uVar11 - uVar9 * uVar7;
              }
              if (uVar11 != uVar5) {
                *(long **)(lVar10 + uVar11 * 8) = plVar14;
                lVar12 = *plVar8;
              }
            }
            else {
              uVar11 = plVar14[1];
              if ((uVar7 & uVar9) == 0) {
                uVar11 = uVar11 & uVar9;
              }
              else if (uVar7 <= uVar11) {
                uVar13 = 0;
                if (uVar7 != 0) {
                  uVar13 = uVar11 / uVar7;
                }
                uVar11 = uVar11 - uVar13 * uVar7;
              }
              if (uVar11 != uVar5) goto LAB_1073b2850;
LAB_1073b288c:
              if (lVar12 != 0) {
                uVar11 = *(ulong *)(lVar12 + 8);
                goto LAB_1073b2894;
              }
            }
            *plVar14 = lVar12;
            *plVar8 = 0;
            *(long *)(param_1 + 200) = lVar4 + -1;
            func_0x0001073b3f24();
            goto LAB_1073b28ec;
          }
        }
        if ((uVar7 & uVar9) == 0) {
          uVar13 = uVar13 & uVar9;
        }
        else if (uVar7 <= uVar13) {
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = uVar13 / uVar7;
          }
          uVar13 = uVar13 - uVar2 * uVar7;
        }
      } while (uVar13 == uVar11);
    }
  }
LAB_1073b28ec:
  func_0x0001073b3f08();
  return;
}



/* Entry: 1073b2900; end: 1073b292b;  */

undefined1 * FUN_1073b2900(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  FUN_1073b292c();
  return param_1;
}



/* Entry: 1073b292c; end: 1073b293f;  */

void FUN_1073b292c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1073b295c();
    *(undefined1 *)(param_1 + 0x40) = 1;
    return;
  }
  return;
}



/* Entry: 1073b2940; end: 1073b295b;  */

void FUN_1073b2940(long param_1)

{
  FUN_1073b295c();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1073b295c; end: 1073b2987;  */

void FUN_1073b295c(long param_1)

{
  long unaff_x19;
  
  func_0x0001073b3e5c();
  FUN_10731f90c();
  func_0x00010724b830(param_1 + 0x20,unaff_x19 + 0x20);
  return;
}



/* Entry: 1073b2988; end: 1073b29d7;  */

long * FUN_1073b2988(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x168) {
      FUN_1073b29d8(lVar2 + -0x160);
    }
    param_1[1] = lVar1;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1073b29d8; end: 1073b2a1f;  */

void FUN_1073b29d8(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x158) != 0xffffffff) {
    func_0x0001073b3da4((&PTR_FUN_1109ab3a8)[*(uint *)(param_1 + 0x158)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  return;
}



/* Entry: 1073b2a20; end: 1073b2a2f;  */

long FUN_1073b2a20(undefined8 param_1,long param_2)

{
  func_0x00010730b1b0(param_2 + 0x120);
  func_0x00010730b248(param_2 + 0xe8);
  func_0x00010730b220(param_2 + 0x78);
  func_0x00010724b3d8(param_2 + 0x38);
  func_0x000104c2f714(param_2);
  return param_2;
}



/* Entry: 1073b2a30; end: 1073b2a63;  */

long * FUN_1073b2a30(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1073b2a64(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1073b2a64; end: 1073b2a6b;  */

void FUN_1073b2a64(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073b3e5c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x158;
    func_0x00010730b16c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073b2a6c; end: 1073b2a9f;  */

void FUN_1073b2a6c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073b3e5c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x158;
    func_0x00010730b16c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073b2aa0; end: 1073b2ab7;  */

void FUN_1073b2aa0(long param_1)

{
  FUN_1073b2ab8();
  *(undefined4 *)(param_1 + 0x158) = 0;
  return;
}



/* Entry: 1073b2ab8; end: 1073b2ad7;  */

void FUN_1073b2ab8(void)

{
  FUN_1073b2dc4();
  func_0x0001073b3f4c();
  return;
}



/* Entry: 1073b2ad8; end: 1073b2b2f;  */

long ** FUN_1073b2ad8(long *param_1,long **param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long **pplVar4;
  long unaff_x19;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  undefined1 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  
  if (param_2 < (long **)0xb60b60b60b60b7) {
    uVar3 = (param_1[2] - *param_1) / 0x168;
    pplVar4 = (long **)(uVar3 * 2);
    if (pplVar4 < param_2 || (long)pplVar4 - (long)param_2 == 0) {
      pplVar4 = param_2;
    }
    if (0x5b05b05b05b05a < uVar3) {
      pplVar4 = (long **)0xb60b60b60b60b6;
    }
    return pplVar4;
  }
  FUN_1073b2c60();
  func_0x0001073b3e5c();
  lVar6 = *param_1;
  lVar1 = param_1[1];
  plVar8 = param_2[1] + ((lVar1 - lVar6) / -0x168) * 0x2d;
  plStack_a8 = param_1 + 2;
  pplStack_a0 = &plStack_88;
  pplStack_98 = &plStack_80;
  uStack_90 = 0;
  plVar9 = plVar8;
  plStack_88 = plVar8;
  for (lVar7 = lVar6; plStack_80 = plVar9, lVar7 != lVar1; lVar7 = lVar7 + 0x168) {
    plVar5 = plVar9 + 1;
    *(undefined1 *)plVar5 = 0;
    *(undefined4 *)(plVar9 + 0x2c) = 0xffffffff;
    FUN_1073b29d8(plVar5);
    uVar2 = *(uint *)(lVar7 + 0x160);
    if (uVar2 != 0xffffffff) {
      plStack_78 = plVar5;
      (*(code *)(&PTR_FUN_1109ab3b8)[uVar2])(&plStack_78,lVar7 + 8);
      *(uint *)(plVar9 + 0x2c) = uVar2;
    }
    plVar9 = plStack_80 + 0x2d;
  }
  uStack_90 = 1;
  for (; lVar6 != lVar1; lVar6 = lVar6 + 0x168) {
    FUN_1073b29d8(lVar6 + 8);
  }
  pplVar4 = &plStack_a8;
  FUN_1073b2d2c(pplVar4);
  *(long **)(unaff_x19 + 8) = plVar8;
  func_0x0001073b3ce8();
  return pplVar4;
}



/* Entry: 1073b2b30; end: 1073b2c5f;  */

void FUN_1073b2b30(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long unaff_x19;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  
  func_0x0001073b3e5c();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar6 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x168) * 0x168;
  plStack_98 = param_1 + 2;
  plStack_90 = &lStack_78;
  plStack_88 = &lStack_70;
  uStack_80 = 0;
  lVar7 = lVar6;
  lStack_78 = lVar6;
  for (lVar5 = lVar4; lStack_70 = lVar7, lVar5 != lVar1; lVar5 = lVar5 + 0x168) {
    puVar3 = (undefined1 *)(lVar7 + 8);
    *puVar3 = 0;
    *(undefined4 *)(lVar7 + 0x160) = 0xffffffff;
    FUN_1073b29d8(puVar3);
    uVar2 = *(uint *)(lVar5 + 0x160);
    if (uVar2 != 0xffffffff) {
      puStack_68 = puVar3;
      (*(code *)(&PTR_FUN_1109ab3b8)[uVar2])(&puStack_68,lVar5 + 8);
      *(uint *)(lVar7 + 0x160) = uVar2;
    }
    lVar7 = lStack_70 + 0x168;
  }
  uStack_80 = 1;
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x168) {
    FUN_1073b29d8(lVar4 + 8);
  }
  FUN_1073b2d2c(&plStack_98);
  *(long *)(unaff_x19 + 8) = lVar6;
  func_0x0001073b3ce8();
  return;
}



/* Entry: 1073b2c60; end: 1073b2c6b;  */

long * FUN_1073b2c60(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x0001073b3d58();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0xb60b60b60b60b6 < param_2) {
      func_0x000104bd35f4();
      param_1 = (long *)*param_1;
      FUN_1073b2dc4(param_1);
      func_0x0001073b3f4c();
      return param_1;
    }
    lVar1 = param_2 * 0x168;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x168;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x168;
  return param_1;
}



/* Entry: 1073b2c6c; end: 1073b2cdf;  */

long * FUN_1073b2c6c(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0xb60b60b60b60b6 < param_2) {
      func_0x000104bd35f4();
      param_1 = (long *)*param_1;
      FUN_1073b2dc4(param_1);
      func_0x0001073b3f4c();
      return param_1;
    }
    lVar1 = param_2 * 0x168;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x168;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x168;
  return param_1;
}



/* Entry: 1073b2ce0; end: 1073b2ce7;  */

void FUN_1073b2ce0(undefined8 *param_1)

{
  FUN_1073b2dc4(*param_1);
  func_0x0001073b3f4c();
  return;
}



/* Entry: 1073b2ce8; end: 1073b2d2b;  */

void FUN_1073b2ce8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000104c2fe00(lVar1);
  *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  func_0x000107313160(lVar1 + 0x40,param_2 + 0x40);
  return;
}



/* Entry: 1073b2d2c; end: 1073b2d77;  */

long FUN_1073b2d2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = **(long **)(param_1 + 8);
    for (lVar2 = **(long **)(param_1 + 0x10); lVar2 != lVar1; lVar2 = lVar2 + -0x168) {
      FUN_1073b29d8(lVar2 + -0x160);
    }
  }
  return param_1;
}



/* Entry: 1073b2d78; end: 1073b2dc3;  */

long * FUN_1073b2d78(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  while (lVar1 = param_1[2], lVar2 != lVar1) {
    param_1[2] = lVar1 + -0x168;
    FUN_1073b29d8(lVar1 + -0x160);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073b2dc4; end: 1073b2e8f;  */

long FUN_1073b2dc4(long param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000104c2fe00();
  func_0x000107263b58(lVar1 + 0x38,param_2 + 0x38);
  lVar1 = *(long *)(param_2 + 0x80);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001073b3d94();
    } while (extraout_w10 != 0);
  }
  _memcpy(param_1 + 0x88,param_2 + 0x88,0x60);
  FUN_1073b3988(param_1 + 0xe8,param_2 + 0xe8);
  uVar3 = *(undefined8 *)(param_2 + 0x110);
  uVar2 = *(undefined8 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = uVar3;
  *(undefined8 *)(param_1 + 0x108) = uVar2;
  func_0x000107313160(param_1 + 0x120,param_2 + 0x120);
  return param_1;
}



/* Entry: 1073b2e90; end: 1073b2f3b;  */

void FUN_1073b2e90(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073b3e5c();
  func_0x000104c318bc(param_1 + 8);
  *(undefined4 *)(unaff_x20 + 0x40) = *(undefined4 *)(unaff_x19 + 0x38);
  func_0x0001073131c8(unaff_x20 + 0x48,unaff_x19 + 0x40);
  *(undefined4 *)(unaff_x20 + 0x160) = 1;
  return;
}



/* Entry: 1073b2f3c; end: 1073b2fbf;  */

void FUN_1073b2f3c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x0001073b3e74();
  for (; param_2 != param_3; param_2 = param_2 + 0x158) {
    FUN_1073b38cc(lVar1,param_2);
    lVar1 = lVar1 + 0x158;
  }
  func_0x0001073b3e54();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1073b2fc0; end: 1073b3017;  */

long * FUN_1073b2fc0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  if ((long *)0xbe82fa0be82fa0 < param_2) {
    func_0x0001073b3290();
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
      lVar4 = *(long *)param_1[1];
      lVar2 = *(long *)param_1[2];
      while (lVar2 != lVar4) {
        lVar2 = lVar2 + -0x158;
        func_0x00010730b16c();
      }
    }
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x158;
  plVar3 = (long *)(uVar1 * 2);
  if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
    plVar3 = param_2;
  }
  if (0x5f417d05f417cf < uVar1) {
    plVar3 = (long *)0xbe82fa0be82fa0;
  }
  return plVar3;
}



/* Entry: 1073b3018; end: 1073b305b;  */

long FUN_1073b3018(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x158;
      func_0x00010730b16c();
    }
  }
  return param_1;
}



/* Entry: 1073b305c; end: 1073b326b;  */

undefined1 * FUN_1073b305c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 extraout_x8;
  undefined1 *puVar7;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [24];
  undefined1 *puStack_78;
  long alStack_70 [3];
  undefined8 uStack_58;
  
  func_0x0001073b3d28();
  lVar8 = 0;
  func_0x0001073b3c94();
  uStack_58 = extraout_x8;
  while( true ) {
    iVar6 = (int)param_2;
    lVar2 = unaff_x21 + lVar8;
    bVar5 = lVar2 == unaff_x20;
    if (bVar5) break;
    func_0x000107262f3c(unaff_x19 + lVar8,lVar2);
    lVar3 = unaff_x19 + lVar8;
    func_0x00010726594c(lVar3 + 0x38,lVar2 + 0x38);
    func_0x00010731dd8c(lVar3 + 0x78,lVar2 + 0x78);
    _memcpy(lVar3 + 0x88,lVar2 + 0x88,0x60);
    param_2 = (undefined1 *)(lVar2 + 0xe8);
    FUN_1073b3988(auStack_90);
    puVar1 = (undefined1 *)(lVar3 + 0xe8);
    if (puVar1 != auStack_90) {
      lVar3 = unaff_x19 + lVar8;
      puVar7 = *(undefined1 **)(lVar3 + 0x100);
      if (puStack_78 == auStack_90) {
        param_2 = puVar1;
        if (puVar1 == puVar7) {
          func_0x0001073b3d44();
          (*extraout_x8_01)();
          func_0x0001073b3c88(puStack_78);
          puStack_78 = (undefined1 *)0x0;
          func_0x0001073b3d44(*(undefined8 *)(lVar3 + 0x100));
          (*extraout_x8_02)();
          func_0x0001073b3c88(*(undefined8 *)(lVar3 + 0x100));
          *(undefined8 *)(lVar3 + 0x100) = 0;
          puStack_78 = auStack_90;
          (**(code **)(alStack_70[0] + 0x18))(alStack_70);
          func_0x0001073b3e34();
        }
        else {
          func_0x0001073b3d44();
          (*extraout_x8_00)();
          func_0x0001073b3c88(puStack_78);
          puStack_78 = *(undefined1 **)(lVar3 + 0x100);
        }
        *(undefined1 **)(lVar3 + 0x100) = puVar1;
      }
      else if (puVar1 == puVar7) {
        func_0x0001073b3efc();
        func_0x0001073b3c88(*(undefined8 *)(lVar3 + 0x100));
        *(undefined1 **)(lVar3 + 0x100) = puStack_78;
        puStack_78 = auStack_90;
      }
      else {
        *(undefined1 **)(lVar3 + 0x100) = puStack_78;
        puStack_78 = puVar7;
      }
    }
    param_1 = auStack_90;
    func_0x00010730b248();
    lVar3 = unaff_x19 + lVar8;
    uVar10 = *(undefined8 *)(lVar2 + 0x110);
    uVar9 = *(undefined8 *)(lVar2 + 0x108);
    *(undefined1 *)(lVar3 + 0x118) = *(undefined1 *)(lVar2 + 0x118);
    *(undefined8 *)(lVar3 + 0x110) = uVar10;
    *(undefined8 *)(lVar3 + 0x108) = uVar9;
    cVar4 = *(char *)(lVar3 + 0x140);
    if (cVar4 == *(char *)(lVar2 + 0x140)) {
      if (cVar4 != '\0') {
        param_1 = (undefined1 *)(lVar3 + 0x120);
        param_2 = (undefined1 *)(unaff_x21 + lVar8 + 0x120);
        func_0x000107282d64();
      }
    }
    else if (cVar4 == '\0') {
      param_1 = (undefined1 *)(lVar3 + 0x120);
      param_2 = (undefined1 *)(unaff_x21 + lVar8 + 0x120);
      func_0x0001073131ac();
    }
    else {
      param_1 = (undefined1 *)(lVar3 + 0x120);
      FUN_1073b326c();
    }
    uVar9 = *(undefined8 *)(lVar2 + 0x148);
    *(undefined8 *)(unaff_x19 + lVar8 + 0x150) = *(undefined8 *)(lVar2 + 0x150);
    *(undefined8 *)(unaff_x19 + lVar8 + 0x148) = uVar9;
    lVar8 = lVar8 + 0x158;
  }
  func_0x0001073b3c74(uStack_58);
  if (bVar5) {
    return (undefined1 *)(unaff_x19 + lVar8);
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  if (param_1[0x20] == '\x01') {
    func_0x0001006393ec();
    param_1[0x20] = 0;
  }
  return param_1;
}



/* Entry: 1073b326c; end: 1073b329b;  */

void FUN_1073b326c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001006393ec();
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 1073b329c; end: 1073b32d3;  */

undefined1  [16] FUN_1073b329c(long param_1,undefined8 param_2)

{
  undefined1 in_CY;
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x0001073b3e90();
  if ((bool)in_CY) {
    func_0x000104bd35f4();
    if (*(long *)(param_1 + 0x58) != 0) {
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
      __ZdlPv();
    }
    plVar2 = *(long **)(param_1 + 0x38);
    while (plVar2 != (long *)0x0) {
      lVar1 = (long)(plVar2 + 3);
      plVar2 = (long *)*plVar2;
      func_0x00010731d918(lVar1);
      func_0x0001073b3dac();
    }
    lVar1 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    FUN_1073b2a30(param_1 + 0x10);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  lVar1 = param_1 * 0x158;
  __Znwm(lVar1);
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 1073b32d4; end: 1073b333b;  */

long FUN_1073b32d4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    __ZdlPv();
  }
  plVar2 = *(long **)(param_1 + 0x38);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x00010731d918(lVar1);
    func_0x0001073b3dac();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  FUN_1073b2a30(param_1 + 0x10);
  return param_1;
}



/* Entry: 1073b333c; end: 1073b335f;  */

undefined8 FUN_1073b333c(undefined8 param_1)

{
  FUN_1073b3360();
  return param_1;
}



/* Entry: 1073b3360; end: 1073b3387;  */

long FUN_1073b3360(long param_1,long param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        func_0x0001006393ec();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return param_1;
    }
    func_0x000105302f48();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    func_0x0001006392d8();
    return param_1;
  }
  return param_1;
}



/* Entry: 1073b3388; end: 1073b345b;  */

void FUN_1073b3388(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  uVar3 = param_1[1];
  if (uVar3 < (ulong)param_1[2]) {
    FUN_1073b38cc(uVar3,param_2);
    lVar2 = uVar3 + 0x158;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    FUN_1073b2fc0(param_1,(long)(uVar3 - *param_1) / 0x158 + 1);
    FUN_1073b3504(auStack_58,plVar1,(param_1[1] - *param_1) / 0x158,param_1 + 2);
    FUN_1073b38cc(lStack_48,param_2);
    lStack_48 = lStack_48 + 0x158;
    FUN_1073b345c(param_1,auStack_58);
    lVar2 = param_1[1];
    func_0x0001073b3550(auStack_58);
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1073b345c; end: 1073b3503;  */

void FUN_1073b345c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x0001073b3e5c();
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar3) / -0x158) * 0x158;
  func_0x0001073b3e74();
  lVar2 = lVar5;
  for (lVar4 = lVar3; lVar4 != lVar1; lVar4 = lVar4 + 0x158) {
    func_0x0001073b3ed8(lVar2);
    lVar2 = lVar2 + 0x158;
  }
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x158) {
    func_0x00010730b16c(lVar3);
  }
  func_0x0001073b3e54();
  *(long *)(unaff_x19 + 8) = lVar5;
  func_0x0001073b3ce8();
  return;
}



/* Entry: 1073b3504; end: 1073b3597;  */

long * FUN_1073b3504(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = param_2;
    FUN_1073b329c();
    lVar1 = param_2;
    param_2 = lVar2;
  }
  lVar2 = lVar1 + param_3 * 0x158;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x158;
  return param_1;
}



/* Entry: 1073b3598; end: 1073b35af;  */

void FUN_1073b3598(long param_1)

{
  undefined8 extraout_x8;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x0001073b3d28();
  FUN_1073b3604();
  FUN_1073b36b0(extraout_x8);
  return;
}



/* Entry: 1073b35b0; end: 1073b3603;  */

void FUN_1073b35b0(void)

{
  undefined8 extraout_x8;
  
  func_0x0001073b3d28();
  FUN_1073b3604();
  FUN_1073b36b0(extraout_x8);
  return;
}



/* Entry: 1073b3604; end: 1073b36af;  */

undefined8 * FUN_1073b3604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  ulong unaff_x19;
  undefined1 auStack_1d0 [3];
  undefined5 uStack_1cd;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined1 *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [256];
  long lStack_40;
  long lStack_38;
  
  puVar5 = &uStack_170;
  func_0x0001073b3e5c();
  func_0x0001073b3c94();
  lStack_38 = extraout_x8;
  func_0x0001072bb3b4();
  puStack_158 = auStack_140;
  uStack_148 = 0x100;
  lStack_150 = 0;
  ppuStack_160 = &PTR_DAT_1109965d0;
  lStack_40 = 0;
  puVar8 = (undefined8 *)0xd;
  uStack_170 = param_3;
  uStack_168 = param_2;
  func_0x0001003a9984(&ppuStack_160);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined8 *)(lStack_150 + lStack_40);
  }
  ___stack_chk_fail();
  puVar3 = (undefined8 *)auStack_1d0;
  puVar6 = (undefined8 *)auStack_1d0;
  puVar4 = (undefined8 *)auStack_1d0;
  uVar7 = unaff_x19;
  func_0x0001073b3c94();
  uVar2 = uVar7 == 0x25;
  uStack_1a8 = extraout_x8_01;
  if (uVar7 < 0x26) {
    auStack_1d0[2] = 0;
    puVar6 = (undefined8 *)(auStack_1d0 + 2);
    *(undefined1 *)((long)puVar6 + unaff_x19) = 0;
    uVar7 = 0x26;
    auStack_1d0._0_2_ = (short)unaff_x19;
    FUN_1073b37e4();
    extraout_x8_00[1] = lStack_1c8;
    *extraout_x8_00 = CONCAT53(uStack_1cd,CONCAT12(auStack_1d0[2],auStack_1d0._0_2_));
    extraout_x8_00[3] = uStack_1b8;
    extraout_x8_00[2] = uStack_1c0;
    extraout_x8_00[4] = uStack_1b0;
    *(undefined4 *)(extraout_x8_00 + 5) = 1;
    extraout_x8_00[6] = 0xffffffffffffffff;
    puVar3 = puVar8;
  }
  else {
    uVar2 = unaff_x19 == 0x51;
    if (unaff_x19 < 0x52) {
      func_0x000104c302d8(auStack_1d0,0,0);
      puVar1 = (undefined2 *)CONCAT53(uStack_1cd,CONCAT12(auStack_1d0[2],auStack_1d0._0_2_));
      *puVar1 = (short)unaff_x19;
      *(undefined1 *)((long)puVar1 + unaff_x19 + 2) = 0;
      puVar6 = (undefined8 *)(CONCAT53(uStack_1cd,CONCAT12(auStack_1d0[2],auStack_1d0._0_2_)) + 2);
      uVar7 = 0x52;
      FUN_1073b37e4(puVar8);
      extraout_x8_00[1] = lStack_1c8;
      *extraout_x8_00 = CONCAT53(uStack_1cd,CONCAT12(auStack_1d0[2],auStack_1d0._0_2_));
      if (lStack_1c8 != 0) {
        do {
          func_0x0001073b3d94();
        } while (extraout_w10 != 0);
      }
      *(undefined4 *)(extraout_x8_00 + 5) = 2;
      extraout_x8_00[6] = 0xffffffffffffffff;
      func_0x000104c2f784();
    }
    else {
      func_0x0001073b3814(auStack_1d0,puVar5);
      puVar3 = extraout_x8_00;
      func_0x0001072625b4();
      func_0x0001073b3ef4();
    }
  }
  func_0x0001073b3c74(uStack_1a8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x000104c2f784();
    func_0x0001073b3ce0();
    puVar5 = puVar6;
    FUN_1073b3850(puVar6,uVar7,*puVar4,puVar4[1]);
    *(undefined1 *)((long)puVar6 + uVar7) = 0;
    return puVar5;
  }
  return puVar3;
}



/* Entry: 1073b36b0; end: 1073b37e3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1073b36b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = (undefined2 *)&uStack_60;
  puVar2 = &uStack_60;
  uVar4 = param_4;
  func_0x0001073b3c94();
  uVar1 = uVar4 == 0x25;
  uStack_38 = extraout_x8;
  if (uVar4 < 0x26) {
    uStack_60._2_1_ = 0;
    puVar3 = (undefined2 *)((long)&uStack_60 + 2);
    *(undefined1 *)((long)puVar3 + param_4) = 0;
    uVar4 = 0x26;
    uStack_60._0_2_ = (short)param_4;
    FUN_1073b37e4();
    param_1[1] = lStack_58;
    *param_1 = CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[4] = uStack_40;
    *(undefined4 *)(param_1 + 5) = 1;
    param_1[6] = 0xffffffffffffffff;
  }
  else {
    uVar1 = param_4 == 0x51;
    if (param_4 < 0x52) {
      func_0x000104c302d8(&uStack_60,0,0);
      puVar3 = (undefined2 *)
               CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
      *puVar3 = (short)param_4;
      *(undefined1 *)((long)puVar3 + param_4 + 2) = 0;
      puVar3 = (undefined2 *)
               (CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60)) + 2);
      uVar4 = 0x52;
      FUN_1073b37e4(param_5);
      param_1[1] = lStack_58;
      *param_1 = CONCAT53(uStack_60._3_5_,CONCAT12(uStack_60._2_1_,(undefined2)uStack_60));
      if (lStack_58 != 0) {
        do {
          func_0x0001073b3d94();
        } while (extraout_w10 != 0);
      }
      *(undefined4 *)(param_1 + 5) = 2;
      param_1[6] = 0xffffffffffffffff;
      func_0x000104c2f784();
    }
    else {
      func_0x0001073b3814(&uStack_60,param_6);
      func_0x0001072625b4();
      func_0x0001073b3ef4();
    }
  }
  func_0x0001073b3c74(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000104c2f784();
    func_0x0001073b3ce0();
    FUN_1073b3850(puVar3,uVar4,*puVar2,puVar2[1]);
    *(undefined1 *)((long)puVar3 + uVar4) = 0;
    return;
  }
  return;
}



/* Entry: 1073b37e4; end: 1073b384f;  */

void FUN_1073b37e4(undefined8 *param_1,long param_2,long param_3)

{
  FUN_1073b3850(param_2,param_3,*param_1,param_1[1]);
  *(undefined1 *)(param_2 + param_3) = 0;
  return;
}



/* Entry: 1073b3850; end: 1073b389f;  */

void FUN_1073b3850(void)

{
  func_0x0001073b3d28();
  func_0x0001072bb3b4();
  func_0x000107268a34();
  return;
}



/* Entry: 1073b38a0; end: 1073b38cb;  */

void FUN_1073b38a0(long param_1)

{
  if (*(char *)(param_1 + 0x158) == '\x01') {
    func_0x00010730b16c();
  }
  return;
}



/* Entry: 1073b38cc; end: 1073b38eb;  */

void FUN_1073b38cc(void)

{
  FUN_1073b2dc4();
  func_0x0001073b3f4c();
  return;
}



/* Entry: 1073b38ec; end: 1073b38f3;  */

void FUN_1073b38ec(void)

{
  return;
}



/* Entry: 1073b38f4; end: 1073b3917;  */

void FUN_1073b38f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1109ab3d8;
  return;
}



/* Entry: 1073b3918; end: 1073b3943;  */

void FUN_1073b3918(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_1109ab3d8;
  return;
}



/* Entry: 1073b3944; end: 1073b397b;  */

long FUN_1073b3944(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ab438);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073b397c; end: 1073b3987;  */

undefined ** FUN_1073b397c(void)

{
  return &PTR_DAT_1109ab438;
}



/* Entry: 1073b3988; end: 1073b39cb;  */

long FUN_1073b3988(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001073b3cb0();
  }
  else {
    func_0x0001073b3d38();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 1073b39cc; end: 1073b39cf;  */

undefined8 * FUN_1073b39cc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_1109ab458;
  plVar2 = (long *)param_1[0x18];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x00010730b43c(lVar1);
    func_0x0001073b3dac();
  }
  lVar1 = param_1[0x16];
  param_1[0x16] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 1073b39d0; end: 1073b39e3;  */

void FUN_1073b39d0(void)

{
  FUN_1073b0d24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073b39e4; end: 1073b3a07;  */

undefined8 FUN_1073b39e4(undefined8 param_1)

{
  FUN_1073b3a08(param_1,0);
  return param_1;
}



/* Entry: 1073b3a08; end: 1073b3a2f;  */

void FUN_1073b3a08(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1073b3f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073b3a30; end: 1073b3b5f;  */

undefined1 * FUN_1073b3a30(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 *puVar4;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined1 auStack_60 [24];
  undefined1 *puStack_48;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  puVar3 = auStack_60;
  puVar2 = auStack_60;
  func_0x0001073b3c94();
  uStack_28 = extraout_x8;
  FUN_1073b3b60(auStack_60);
  uVar1 = param_1 == auStack_60;
  if (!(bool)uVar1) {
    puVar4 = *(undefined1 **)(param_1 + 0x18);
    if (puStack_48 == auStack_60) {
      uVar1 = puVar4 == param_1;
      if ((bool)uVar1) {
        func_0x0001073b3d44();
        (*extraout_x8_00)();
        func_0x0001073b3c88(puStack_48);
        puStack_48 = (undefined1 *)0x0;
        func_0x0001073b3d44(*(undefined8 *)(param_1 + 0x18));
        (*extraout_x8_01)();
        func_0x0001073b3c88(*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(param_1 + 0x18) = 0;
        puStack_48 = auStack_60;
        func_0x0001073b3da4(*(undefined8 *)(alStack_40[0] + 0x18),alStack_40);
        func_0x0001073b3e34();
        param_2 = puVar3;
      }
      else {
        func_0x0001073b3d44();
        func_0x0001073b3da4();
        func_0x0001073b3c88(puStack_48);
        puStack_48 = *(undefined1 **)(param_1 + 0x18);
      }
      *(undefined1 **)(param_1 + 0x18) = param_1;
    }
    else {
      uVar1 = puVar4 == param_1;
      if ((bool)uVar1) {
        func_0x0001073b3efc();
        func_0x0001073b3c88(*(undefined8 *)(param_1 + 0x18));
        *(undefined1 **)(param_1 + 0x18) = puStack_48;
        puStack_48 = auStack_60;
      }
      else {
        *(undefined1 **)(param_1 + 0x18) = puStack_48;
        puStack_48 = puVar4;
      }
    }
  }
  func_0x00010730b43c();
  func_0x0001073b3c74(uStack_28);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  puVar3 = *(undefined1 **)(param_2 + 0x18);
  if (puVar3 == (undefined1 *)0x0) {
    *(undefined8 *)(puVar2 + 0x18) = 0;
  }
  else if (puVar3 == param_2) {
    func_0x0001073b3cb0();
  }
  else {
    func_0x0001073b3d38();
    *(undefined1 **)(puVar2 + 0x18) = puVar3;
  }
  return puVar2;
}



/* Entry: 1073b3b60; end: 1073b3ba3;  */

long FUN_1073b3b60(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001073b3cb0();
  }
  else {
    func_0x0001073b3d38();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 1073b3ba4; end: 1073b3bc3;  */

void FUN_1073b3ba4(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010730b43c();
  }
  return;
}



/* Entry: 1073b3bc4; end: 1073b3bdb;  */

void FUN_1073b3bc4(long *param_1,long param_2)

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



/* Entry: 1073b3bdc; end: 1073b3c1b;  */

long * FUN_1073b3bdc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010731d918(lVar1 + 0x18);
    }
    func_0x0001073b3dac();
  }
  return param_1;
}



/* Entry: 1073b3c1c; end: 1073b3c33;  */

void FUN_1073b3c1c(long *param_1,long param_2)

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



/* Entry: 1073b3c34; end: 1073b3c73;  */

long * FUN_1073b3c34(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010730b43c(lVar1 + 0x18);
    }
    func_0x0001073b3dac();
  }
  return param_1;
}



/* Entry: 1073b3c74; end: 1073b3f87;  */

void FUN_1073b3c74(void)

{
  return;
}



/* Entry: 1073b3f88; end: 1073b3faf;  */

undefined8 FUN_1073b3f88(undefined8 param_1)

{
  FUN_1073b3fb0(param_1,0);
  return param_1;
}



/* Entry: 1073b3fb0; end: 1073b3fdb;  */

void FUN_1073b3fb0(long *param_1,long param_2)

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



/* Entry: 1073b3fdc; end: 1073b4037;  */

void FUN_1073b3fdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_DAT_1109ab540;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1[4] = param_5;
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  return;
}



/* Entry: 1073b4038; end: 1073b405f;  */

void FUN_1073b4038(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_DAT_1109ab540;
  puVar1[1] = 0x3fd5c28f5c28f5c3;
  puVar1[2] = 0x3ff8f5c28f5c28f6;
  puVar1[3] = 0x3fe47ae147ae147b;
  puVar1[4] = 0x3ff0000000000000;
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  return;
}



/* Entry: 1073b4060; end: 1073b4083;  */

void FUN_1073b4060(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_1109ab4b0;
  return;
}



/* Entry: 1073b4084; end: 1073b40a3;  */

void FUN_1073b4084(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_1109ab4b0;
  return;
}



/* Entry: 1073b40a4; end: 1073b4123;  */

double FUN_1073b40a4(undefined8 param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *param_3;
  dVar1 = 0.0;
  if ((dVar2 != 0.0) && (dVar1 = 1.0, dVar2 != 1.0)) {
    dVar1 = dVar2 * -10.0;
    _exp2(dVar1);
    dVar2 = (dVar2 * 10.0 + -0.75) * 2.0943951023931953;
    _sin(dVar2);
    dVar1 = dVar2 * dVar1 + 1.0;
  }
  return *param_2 + (param_2[1] - *param_2) * dVar1;
}


