/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108777660; end: 10877766b;  */

undefined ** FUN_108777660(void)

{
  return &PTR_DAT_110a6d5c8;
}



/* Entry: 10877766c; end: 1087776c7;  */

long FUN_10877766c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(**(long **)(param_2 + 0x18) + 0x18))(*(long **)(param_2 + 0x18),param_1);
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1087776c8; end: 108777717;  */

long FUN_1087776c8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108777718; end: 1087777c3;  */

void FUN_108777718(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1087777c4; end: 10877780f;  */

void FUN_1087777c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1a0;
  __Znwm();
  _bzero();
  func_0x000108777998(uVar1);
  *param_1 = uVar1;
  return;
}



/* Entry: 108777810; end: 108777943;  */

void FUN_108777810(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined ***pppuVar2;
  long *plVar3;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  plVar3 = (long *)**(undefined8 **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    uStack_70 = 0;
    uStack_68 = 0;
    ppuStack_80 = &PTR_FUN_110a609a8;
    uStack_78 = 0;
    uStack_60 = 0x2c9;
    func_0x000107c278b8(auStack_98,&UNK_10f4ba438);
    uVar1 = (ulong)*(uint *)(*(long *)(param_1 + 0x58) + 0xfc);
    func_0x00010084fd68(uVar1);
    pppuVar2 = &ppuStack_80;
    func_0x000107c28824(pppuVar2,auStack_98,uVar1);
    func_0x000107c278b8(auStack_b0,&UNK_10f4ba441);
    func_0x0001087777a0(param_2);
    func_0x000107c28824(pppuVar2,auStack_b0,param_2);
    func_0x000107c2884c(auStack_58,pppuVar2);
    (**(code **)(*plVar3 + 0x50))(plVar3,auStack_58);
    func_0x000107c2882c(auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    func_0x000107c2882c(&ppuStack_80);
  }
  return;
}



/* Entry: 108777944; end: 108777a0f;  */

void FUN_108777944(long *param_1)

{
  ulong uVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  if ((int)param_1[0xc] == 1) {
    plVar4 = *(long **)param_1[0xb];
    if (plVar4 != (long *)0x0) {
      uStack_70 = 0;
      uStack_68 = 0;
      ppuStack_80 = &PTR_FUN_110a609a8;
      uStack_78 = 0;
      uStack_60 = 0x2c9;
      func_0x000107c278b8(auStack_98,&UNK_10f4ba438);
      uVar1 = (ulong)*(uint *)(param_1[0xb] + 0xfc);
      func_0x00010084fd68(uVar1);
      pppuVar2 = &ppuStack_80;
      func_0x000107c28824(pppuVar2,auStack_98,uVar1);
      func_0x000107c278b8(auStack_b0,&UNK_10f4ba441);
      uVar3 = 1;
      func_0x0001087777a0(1);
      func_0x000107c28824(pppuVar2,auStack_b0,uVar3);
      func_0x000107c2884c(auStack_58,pppuVar2);
      (**(code **)(*plVar4 + 0x50))(plVar4,auStack_58);
      func_0x000107c2882c(auStack_58);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
      func_0x000107c2882c(&ppuStack_80);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108777964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,0xb);
  return;
}



/* Entry: 108777a10; end: 108777b8f;  */

undefined8 * FUN_108777a10(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [256];
  
  *param_1 = &PTR_FUN_110a6d700;
  if (param_1[4] != 0) {
    func_0x000105680760(auStack_158);
    func_0x00010549023c(auStack_148,&DAT_10f62a9e8);
    lVar1 = param_1[3];
    for (lVar2 = param_1[4] * 0x28; lVar2 != 0; lVar2 = lVar2 + -0x28) {
      func_0x00010549023c(auStack_148," ");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_170,*(long *)(lVar1 + 0x18) + 0x18);
      func_0x000107c28084(auStack_148,auStack_170);
      func_0x00010877e1e0();
      lVar1 = lVar1 + 0x28;
    }
    func_0x00010549023c(auStack_148);
    func_0x000105491b64(auStack_170,auStack_140);
    func_0x000105673d7c(auStack_158);
    func_0x000107c27e5c();
    func_0x000107c2793c(&UNK_10f4ba448);
    func_0x000107c3173c(auStack_158);
    func_0x00010877e1e0();
    func_0x00010877e424();
  }
  func_0x000107c2917c(param_1 + 0xf);
  func_0x000107c297b8(param_1 + 0xd);
  func_0x000107c288e4(param_1 + 0xb);
  func_0x000107c27f98(param_1 + 10);
  func_0x000107c27f9c(param_1 + 9);
  func_0x000107c297b0(param_1 + 6);
  FUN_10877bc0c(param_1 + 3);
  func_0x000107c29298(param_1 + 1);
  return param_1;
}



/* Entry: 108777b90; end: 108777b93;  */

undefined8 * FUN_108777b90(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [256];
  
  *param_1 = &PTR_FUN_110a6d700;
  if (param_1[4] != 0) {
    func_0x000105680760(auStack_158);
    func_0x00010549023c(auStack_148,&DAT_10f62a9e8);
    lVar1 = param_1[3];
    for (lVar2 = param_1[4] * 0x28; lVar2 != 0; lVar2 = lVar2 + -0x28) {
      func_0x00010549023c(auStack_148," ");
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_170,*(long *)(lVar1 + 0x18) + 0x18);
      func_0x000107c28084(auStack_148,auStack_170);
      func_0x00010877e1e0();
      lVar1 = lVar1 + 0x28;
    }
    func_0x00010549023c(auStack_148);
    func_0x000105491b64(auStack_170,auStack_140);
    func_0x000105673d7c(auStack_158);
    func_0x000107c27e5c();
    func_0x000107c2793c(&UNK_10f4ba448);
    func_0x000107c3173c(auStack_158);
    func_0x00010877e1e0();
    func_0x00010877e424();
  }
  func_0x000107c2917c(param_1 + 0xf);
  func_0x000107c297b8(param_1 + 0xd);
  func_0x000107c288e4(param_1 + 0xb);
  func_0x000107c27f98(param_1 + 10);
  func_0x000107c27f9c(param_1 + 9);
  func_0x000107c297b0(param_1 + 6);
  FUN_10877bc0c(param_1 + 3);
  func_0x000107c29298(param_1 + 1);
  return param_1;
}



/* Entry: 108777b94; end: 108777ba7;  */

void FUN_108777b94(void)

{
  FUN_108777a10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108777ba8; end: 108777ddb;  */

void FUN_108777ba8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  
  func_0x000107c33434();
  func_0x000107c333f4();
  lVar4 = 0x198;
  __Znwm();
  *(undefined8 *)(lVar4 + 8) = 0;
  func_0x000107c333d8(&PTR_DAT_110a6d970);
  func_0x000107c33430();
  func_0x000107c33414();
  func_0x000107c333a4(*(undefined4 *)((long)param_2 + 0x3c));
  func_0x000107c33410();
  func_0x000107c333bc();
  func_0x000107c333f8();
  func_0x000107c333c8();
  func_0x000107c33378();
  puVar7 = (undefined8 *)(lVar4 + 0xe8);
  *puVar7 = &PTR_FUN_110a8b4a8;
  *(undefined ***)(lVar4 + 0x18) = &PTR_FUN_110a6cfd8;
  *(undefined8 *)(lVar4 + 0xf0) = 0;
  *(undefined8 *)(lVar4 + 0xf8) = 0;
  *(undefined **)(lVar4 + 0x100) = &DAT_11383d918;
  *(undefined8 *)(lVar4 + 0x110) = 0;
  *(undefined8 *)(lVar4 + 0x108) = 0;
  *(undefined8 *)(lVar4 + 0x120) = 0;
  *(undefined8 *)(lVar4 + 0x118) = 0;
  uVar2 = puVar7 == param_2;
  if (!(bool)uVar2) {
    uVar5 = param_2[1];
    if ((uVar5 & 1) != 0) {
      uVar5 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    if (uVar5 == 0) {
      FUN_1088eb418(puVar7,param_2);
    }
    else {
      FUN_1088eb3e8(puVar7,param_2);
    }
  }
  *(undefined8 *)(lVar4 + 0x128) = param_3;
  func_0x000107c279d4(lVar4 + 0x130,param_4);
  lVar6 = param_7[1];
  uVar8 = *param_7;
  *(undefined8 *)(lVar4 + 0x158) = param_7[1];
  *(undefined8 *)(lVar4 + 0x150) = uVar8;
  if (lVar6 != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10 != 0);
  }
  *(undefined1 *)(lVar4 + 0x160) = param_5;
  lVar6 = lVar4 + 0x168;
  func_0x000107c295d0(lVar6,param_8);
  func_0x000107c33374();
  in_stack_00000020 = param_6;
  in_stack_00000028 = lVar4;
  uVar8 = param_6;
  lVar1 = lVar4;
  if ((*(long *)(lVar4 + 0x28) == 0) || (func_0x00010877e1b8(), uVar8 = param_6, (bool)uVar2)) {
    do {
      in_stack_00000058 = lVar1;
      in_stack_00000050 = uVar8;
      func_0x000107c333ac();
      uVar8 = in_stack_00000050;
      lVar1 = in_stack_00000058;
    } while (extraout_w9 != 0);
    func_0x000107c33330();
    func_0x000107c333b4();
  }
  func_0x000107c33384();
  in_stack_00000050 = param_6;
  in_stack_00000058 = lVar4;
  do {
    func_0x000107c333ac();
    iVar3 = (int)lVar6;
  } while (extraout_w9_00 != 0);
  func_0x000107c333e8();
  func_0x000107c3339c();
  func_0x000107c333b4();
  if (iVar3 != 0) {
    func_0x000107c333cc();
  }
  FUN_10877bef8(&stack0x00000020);
  return;
}



/* Entry: 108777ddc; end: 108777fe7;  */

undefined8 *
FUN_108777ddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  long *plVar3;
  undefined1 auStack_310 [40];
  undefined1 auStack_2e8 [40];
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [464];
  undefined1 auStack_e8 [56];
  undefined1 auStack_b0 [96];
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  code *pcStack_38;
  undefined **ppuStack_30;
  undefined8 *puStack_28;
  undefined8 uStack_8;
  
  func_0x000107c33438();
  uVar2 = param_3;
  func_0x000107c3333c();
  uStack_2c0 = param_2;
  uStack_8 = extraout_x8;
  func_0x000107c28fb8(auStack_2b8,uVar2);
  FUN_1086e76d4(auStack_e8,param_6);
  FUN_10866e480(auStack_b0,param_5);
  func_0x000107c29838(&uStack_50,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  plVar3 = *(long **)(param_1 + 0x68);
  pcStack_38 = FUN_10877bf1c;
  ppuStack_30 = &PTR_FUN_110a6da00;
  puVar1 = (undefined8 *)0x288;
  lStack_40 = param_1;
  __Znwm();
  *puVar1 = uStack_2c0;
  func_0x000107c28fb8(puVar1 + 1,auStack_2b8);
  FUN_1086e76d4(puVar1 + 0x3b,auStack_e8);
  FUN_10866e480(puVar1 + 0x42,auStack_b0);
  puVar1[0x4f] = lStack_48;
  puVar1[0x4e] = uStack_50;
  if (lStack_48 != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10 != 0);
  }
  puVar1[0x50] = lStack_40;
  puStack_28 = puVar1;
  FUN_108762a58(auStack_2e8,plVar3,param_3,param_4,&pcStack_38);
  func_0x00010877e364();
  func_0x00010877df90();
  func_0x00010877df54();
  plVar3 = *(long **)(*plVar3 + 0xf0);
  func_0x000107c2884c(auStack_310,auStack_2e8);
  (**(code **)(*plVar3 + 0x50))(plVar3,auStack_310);
  func_0x00010877e05c();
  func_0x000107c2882c(auStack_2e8);
  puVar1 = &uStack_2c0;
  FUN_108777fe8(puVar1);
  func_0x000107c33320(uStack_8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010877e00c();
    func_0x000107c2882c(auStack_2e8);
    puVar1 = &uStack_2c0;
    FUN_108777fe8(puVar1);
    func_0x00010877df4c();
    func_0x000107c288e8(puVar1 + 0x4e);
    func_0x00010866e4e8(puVar1 + 0x42);
    func_0x00010086ab34(puVar1 + 0x3b);
    func_0x000107c287e4(puVar1 + 1);
    return puVar1;
  }
  return puVar1;
}



/* Entry: 108777fe8; end: 108778023;  */

long FUN_108777fe8(long param_1)

{
  func_0x000107c288e8(param_1 + 0x270);
  func_0x00010866e4e8(param_1 + 0x210);
  func_0x00010086ab34(param_1 + 0x1d8);
  func_0x000107c287e4(param_1 + 8);
  return param_1;
}



/* Entry: 108778024; end: 1087782d3;  */

void FUN_108778024(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_stack_00000060;
  long *in_stack_00000068;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  long lStack_1a8;
  long lStack_1a0;
  undefined1 auStack_198 [48];
  undefined1 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [24];
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined1 auStack_20 [32];
  
  func_0x000107c33438();
  func_0x00010877de68();
  lStack_e8 = CONCAT44(lStack_e8._4_4_,7);
  func_0x000107c29518(&uStack_1c0,*param_1 + 0xf0,&lStack_e8);
  func_0x00010877dfd0(uStack_1c0);
  uStack_d8 = 0;
  uStack_d0 = 0;
  lStack_e8 = extraout_x8 + 0x10;
  lStack_e0 = 0;
  uStack_c8 = 0xbe;
  func_0x000107c28b10();
  func_0x000107c2882c();
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x000107c3341c();
  lVar2 = 0x268;
  __Znwm(0x268);
  func_0x00010877e554();
  FUN_10877c1a4(auStack_20,param_3);
  FUN_108656428(&lStack_e8,param_4);
  FUN_10867be90(auStack_100,param_6);
  func_0x000107c279d4(auStack_120,param_8);
  func_0x000107c28bf4(auStack_150,in_stack_00000060);
  lStack_160 = *in_stack_00000068;
  *in_stack_00000068 = 0;
  uStack_158 = uStack_1c0;
  auStack_198[0] = 0;
  uStack_168 = 0;
  uStack_1c0 = 0;
  FUN_10875eff4(lVar2 + 0x18,auStack_1b8,param_2,auStack_20,&lStack_e8,param_5,auStack_100);
  func_0x00010086ab34(auStack_198);
  if (lStack_160 != 0) {
    func_0x00010877de90();
  }
  func_0x000107c29578(&uStack_158);
  func_0x000107c27a1c(auStack_150);
  func_0x000107c279dc(auStack_120);
  func_0x000104bee630(auStack_100);
  func_0x000107c2a500(&lStack_e8);
  func_0x00010877e324();
  plVar3 = &lStack_1a8;
  FUN_10877c12c(plVar3,lVar2 + 0x18,lVar2);
  func_0x000107c333d0();
  iVar1 = (int)plVar3;
  lStack_e8 = lStack_1a8;
  lStack_e0 = lStack_1a0;
  if (lStack_1a0 != 0) {
    do {
      func_0x000107c3332c();
      iVar1 = (int)plVar3;
    } while (extraout_w10 != 0);
  }
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x000107c297a4(&lStack_e8);
  if (iVar1 != 0) {
    func_0x00010877e1f0();
  }
  FUN_10877c344(&lStack_1a8);
  func_0x000107c3338c();
  return;
}



/* Entry: 1087782d4; end: 108778693;  */

void FUN_1087782d4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *extraout_x8;
  long extraout_x8_00;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar5;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [16];
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long *plStack_168;
  undefined8 uStack_160;
  undefined8 auStack_158 [6];
  undefined8 auStack_128 [4];
  undefined1 auStack_108 [24];
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_20 [32];
  
  func_0x000107c33438();
  plVar2 = param_1;
  func_0x000107c33328();
  lStack_f0 = CONCAT44(lStack_f0._4_4_,7);
  func_0x000107c29518(&uStack_1c8,*plVar2 + 0xf0,&lStack_f0);
  func_0x00010877dfd0(uStack_1c8);
  uStack_e0 = 0;
  uStack_d8 = 0;
  lStack_f0 = extraout_x8_00 + 0x10;
  lStack_e8 = 0;
  uStack_d0 = 0xbe;
  func_0x000107c28b10();
  plVar2 = &lStack_f0;
  func_0x000107c2882c();
  func_0x00010877e1d8();
  *plVar2 = (long)&PTR_SUB_110a6da78;
  plVar5 = plVar2 + 1;
  *plVar5 = 0;
  lStack_f0 = 0;
  func_0x000107c27f9c(&lStack_f0);
  plVar2[2] = 0;
  lStack_f0 = 0;
  func_0x000107c27f98(&lStack_f0);
  FUN_10877c400(&lStack_f0);
  uStack_198 = lStack_e8;
  lStack_1a0 = lStack_f0;
  auStack_158[0] = 0;
  lStack_f0 = 0;
  lStack_e8 = 0;
  auStack_128[0] = 0;
  func_0x000107c27f98(auStack_128);
  func_0x000107c27f9c(auStack_158);
  func_0x000107c27fec(&lStack_f0);
  func_0x000107c288b0(plVar5,&lStack_1a0);
  func_0x000107c2887c(plVar2 + 2,(ulong)&lStack_1a0 | 8);
  func_0x000107c27f98((ulong)&lStack_1a0 | 8);
  func_0x000107c27f9c();
  lVar4 = *plVar5;
  *extraout_x8 = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x000107c33340();
    } while (extraout_w10 != 0);
  }
  func_0x00010877e384();
  func_0x00010877e1f8();
  func_0x000107c29838(auStack_1c0,param_1[1],param_1[2]);
  lVar4 = 0x268;
  __Znwm(0x268);
  func_0x00010877e554();
  FUN_10877c1a4(auStack_20,param_3);
  FUN_108656428(&lStack_f0,param_4);
  FUN_10867be90(auStack_108,param_6);
  func_0x000107c279d4(auStack_128,param_8);
  func_0x000107c28bf4(auStack_158,in_stack_00000060);
  uStack_160 = uStack_1c8;
  uStack_1c8 = 0;
  plStack_168 = plVar2;
  FUN_1086e76d4(&lStack_1a0,in_stack_00000068);
  FUN_10875eff4(lVar4 + 0x18,auStack_1c0,param_2,auStack_20,&lStack_f0,param_5,auStack_108);
  func_0x00010086ab34(&lStack_1a0);
  if (plStack_168 != (long *)0x0) {
    func_0x00010877de90();
  }
  func_0x000107c29578(&uStack_160);
  func_0x000107c27a1c(auStack_158);
  func_0x000107c279dc(auStack_128);
  func_0x000104bee630(auStack_108);
  func_0x000107c2a500(&lStack_f0);
  func_0x00010877e324();
  FUN_10877c12c(&lStack_1b0,lVar4 + 0x18,lVar4);
  func_0x00010877c338(0);
  puVar3 = auStack_1c0;
  func_0x000107c288e8();
  iVar1 = (int)puVar3;
  lStack_f0 = lStack_1b0;
  lStack_e8 = lStack_1a8;
  if (lStack_1a8 != 0) {
    do {
      func_0x000107c3332c();
      iVar1 = (int)puVar3;
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c333e8();
  func_0x000107c3339c();
  func_0x000107c297a4(&lStack_f0);
  if (iVar1 != 0) {
    func_0x000107c29830(lStack_1b0);
  }
  FUN_10877c344(&lStack_1b0);
  func_0x000107c29578(&uStack_1c8);
  return;
}



/* Entry: 108778694; end: 10877889f;  */

void FUN_108778694(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 in_ZR;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined1 uVar15;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  long unaff_x24;
  ulong uVar16;
  undefined8 uVar17;
  long in_stack_00000018;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000088;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [16];
  ulong uStack_220;
  long lStack_218;
  ulong uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined1 uStack_198;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 auStack_150 [2];
  long lStack_140;
  long *plStack_138;
  undefined8 auStack_d8 [3];
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  
  func_0x00010877e5a8();
  plVar14 = param_5;
  func_0x00010877e0e4();
  func_0x000107c3333c();
  in_stack_00000088 = extraout_x8;
  func_0x000107c33328();
  in_stack_00000058 = CONCAT44(in_stack_00000058._4_4_,0xb);
  func_0x000107c29518(&stack0x00000018,*param_1 + 0xf0,&stack0x00000058);
  func_0x00010877dfd0(in_stack_00000018);
  in_stack_00000068 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = extraout_x8_00 + 0x10;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0xf2;
  func_0x000107c28b10();
  func_0x000107c2882c(&stack0x00000058);
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877e4d8();
  func_0x000107c29838(&stack0x00000020);
  lVar5 = 0x148;
  __Znwm();
  lVar6 = lVar5;
  func_0x00010877e1a0();
  func_0x000107c333d8(&PTR_DAT_110a6db08);
  in_stack_00000050 = in_stack_00000018;
  lVar10 = lVar6 + 0x18;
  in_stack_00000018 = 0;
  in_stack_00000058 = *param_5;
  func_0x00010877e238();
  in_stack_00000048 = *(undefined8 *)(unaff_x19 + 0x60);
  in_stack_00000040 = *(undefined8 *)(unaff_x19 + 0x58);
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10 != 0);
  }
  func_0x00010877e534();
  FUN_108765fb0();
  func_0x000107c288e4(&stack0x00000040);
  func_0x00010877dff4(in_stack_00000060);
  func_0x00010877e168();
  in_stack_00000030 = lVar10;
  in_stack_00000038 = lVar5;
  lVar2 = lVar10;
  lVar3 = lVar5;
  if ((*(long *)(lVar5 + 0x28) == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      in_stack_00000060 = lVar3;
      in_stack_00000058 = lVar2;
      func_0x00010877dec4();
      lVar2 = in_stack_00000058;
      lVar3 = in_stack_00000060;
    } while (extraout_w9 != 0);
    func_0x00010877e044(lVar5 + 0x20,lVar10);
    func_0x00010877e41c();
  }
  puVar7 = &stack0x00000020;
  func_0x000107c288e8();
  in_stack_00000058 = lVar10;
  in_stack_00000060 = lVar5;
  do {
    func_0x00010877dec4();
    iVar4 = (int)puVar7;
  } while (extraout_w9_00 != 0);
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x00010877e41c();
  if (iVar4 != 0) {
    func_0x00010877e31c();
  }
  FUN_10877c5bc(&stack0x00000030);
  puVar8 = &stack0x00000018;
  func_0x000107c29578();
  func_0x000107c33320(in_stack_00000088);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10877c5bc(&stack0x00000030);
    plVar9 = &stack0x00000018;
    func_0x000107c29578();
    func_0x00010877df4c();
    plVar12 = plVar14;
    lStack_60 = unaff_x24 + 0x270;
    puStack_58 = &stack0x00000058;
    func_0x00010877e0e4();
    func_0x000107c3333c();
    uStack_68 = extraout_x8_01;
    func_0x000107c33328();
    lStack_98 = CONCAT44(lStack_98._4_4_,0xe);
    func_0x000107c29518(auStack_d8,*plVar9 + 0xf0,&lStack_98);
    func_0x00010877dfd0(auStack_d8[0]);
    uStack_88 = 0;
    uStack_80 = 0;
    lStack_98 = extraout_x8_02 + 0x10;
    lStack_90 = 0;
    uStack_78 = 0xfc;
    func_0x000107c28b10();
    func_0x000107c2882c(&lStack_98);
    func_0x00010877df90();
    func_0x00010877df54();
    func_0x00010877e4d8();
    func_0x000107c333f4();
    lVar5 = 0x370;
    __Znwm();
    lVar10 = lVar5;
    func_0x00010877e1a0();
    func_0x000107c333d8(&PTR_FUN_110a6db58);
    uStack_a0 = auStack_d8[0];
    lVar10 = lVar10 + 0x18;
    auStack_d8[0] = 0;
    lStack_98 = *plVar14;
    func_0x00010877e238();
    uVar17 = puVar8[0xc];
    uVar16 = puVar8[0xb];
    uStack_b0 = uVar16;
    uStack_a8 = uVar17;
    if (puVar8[0xc] != 0) {
      do {
        func_0x000107c3332c();
      } while (extraout_w10_00 != 0);
    }
    puVar8 = &uStack_a0;
    func_0x00010877e534();
    FUN_10877e5c4();
    puVar11 = &uStack_b0;
    func_0x000107c288e4();
    func_0x00010877dff4(lStack_90);
    func_0x000107c3338c();
    lStack_c0 = lVar10;
    lStack_b8 = lVar5;
    lVar2 = lVar10;
    lVar3 = lVar5;
    if ((*(long *)(lVar5 + 0x28) == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
      do {
        lStack_90 = lVar3;
        lStack_98 = lVar2;
        func_0x00010877dec4();
        lVar2 = lStack_98;
        lVar3 = lStack_90;
      } while (extraout_w9_01 != 0);
      puVar11 = (ulong *)(lVar5 + 0x20);
      func_0x00010877e044(puVar11,lVar10);
      func_0x00010877e488();
    }
    func_0x000107c33384();
    lStack_98 = lVar10;
    lStack_90 = lVar5;
    do {
      func_0x00010877dec4();
      uVar15 = SUB81(plVar12,0);
      iVar4 = (int)puVar11;
    } while (extraout_w9_02 != 0);
    func_0x00010877e024();
    plVar14 = &lStack_98;
    func_0x00010877dfc8();
    func_0x00010877e488();
    if (iVar4 != 0) {
      func_0x00010877e31c();
    }
    plVar9 = &lStack_c0;
    FUN_10877c60c();
    func_0x00010877e278();
    func_0x000107c33320(uStack_68);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      plVar12 = &lStack_c0;
      FUN_10877c60c();
      func_0x00010877e278();
      func_0x00010877df4c();
      lStack_140 = lVar6 + 0x288;
      plStack_138 = &lStack_98;
      func_0x00010877de68();
      uStack_210 = CONCAT44(uStack_210._4_4_,4);
      func_0x000107c29518(&uStack_238,*plVar12 + 0xf0,&uStack_210);
      uVar1 = uStack_238;
      func_0x00010877dfd0();
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_210 = extraout_x8_03 + 0x10;
      lStack_208 = 0;
      uStack_1f0 = 0x90;
      puVar11 = &uStack_210;
      func_0x00010086aac8(puVar11,plVar14);
      func_0x000107c28b10(uVar1,puVar11);
      func_0x000107c2882c(&uStack_210);
      if (((uint)((ulong)plVar14 >> 0x11) & 0x7fff) < 0x47) {
        func_0x00010877e158((ulong)plVar14 >> 0x10 & 0xffff);
      }
      else {
        func_0x00010877e51c();
      }
      uVar1 = uStack_238;
      func_0x000107c278b8(&uStack_210);
      if (((uint)plVar14 & 0xffff) < 0x2b8) {
        func_0x00010877e140();
      }
      else {
        func_0x00010877e510();
      }
      func_0x000107c278b8(&uStack_180);
      func_0x000107c28b34(uVar1,&uStack_210,&uStack_180);
      func_0x00010877e2e4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_210);
      if ((uint)plVar14 == 0x1200b0) {
        FUN_108681a30(uStack_238,7);
      }
      func_0x00010877df90();
      func_0x00010877df54();
      func_0x00010877e2d0();
      uStack_210 = uVar16;
      lStack_208 = uVar17;
      if (extraout_x8_04 != 0) {
        do {
          func_0x000107c3332c();
        } while (extraout_w10_01 != 0);
      }
      FUN_108778e08(&lStack_240,&uStack_210);
      puVar11 = &uStack_210;
      func_0x000107c297b0(puVar11);
      func_0x00010877df90();
      func_0x00010877df54();
      func_0x00010877dee4();
      (*extraout_x8_05)();
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      FUN_1086cf200();
      func_0x00010877df90();
      func_0x00010877df54();
      func_0x000107c29838(auStack_230,plVar9[1],plVar9[2]);
      puVar13 = (undefined8 *)0x220;
      __Znwm();
      lStack_188 = lStack_240;
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = &PTR_FUN_110a6dba8;
      uStack_178 = uStack_268;
      uStack_180 = uStack_270;
      uStack_170 = uStack_260;
      uStack_270 = 0;
      uStack_268 = 0;
      uStack_260 = 0;
      uStack_160 = uStack_250;
      uStack_168 = uStack_258;
      uStack_158 = uStack_248;
      auStack_150[0] = uStack_238;
      lStack_240 = 0;
      uStack_238 = 0;
      uStack_210 = uStack_210 & 0xffffffffffffff00;
      uStack_198 = 0;
      FUN_108781190(puVar13 + 3,auStack_230,param_4,puVar11,puVar8,auStack_150,param_3,plVar14,
                    &uStack_180,&lStack_188,uVar15);
      func_0x000107c28d04(&uStack_210);
      if (lStack_188 != 0) {
        func_0x00010877de90();
      }
      func_0x00010877e2dc();
      func_0x00010877e2c8();
      puVar11 = &uStack_220;
      FUN_10877c630(puVar11,puVar13 + 3,puVar13);
      func_0x00010877e280();
      iVar4 = (int)puVar11;
      uStack_210 = uStack_220;
      lStack_208 = lStack_218;
      if (lStack_218 != 0) {
        do {
          func_0x000107c3332c();
          iVar4 = (int)puVar11;
        } while (extraout_w10_02 != 0);
      }
      func_0x00010877e024();
      func_0x00010877dfc8();
      func_0x000107c297a4(&uStack_210);
      if (iVar4 != 0) {
        func_0x00010877e1f0();
      }
      FUN_10877c6b4(&uStack_220);
      func_0x0001086cf230(&uStack_270);
      func_0x00010877e2fc();
      return;
    }
    return;
  }
  return;
}



/* Entry: 1087788a0; end: 108778a9f;  */

void FUN_1087788a0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 in_ZR;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long unaff_x19;
  long unaff_x24;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [16];
  ulong uStack_220;
  long lStack_218;
  ulong uStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined1 uStack_198;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 auStack_150 [2];
  long lStack_140;
  long *plStack_138;
  undefined8 auStack_d8 [3];
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  
  plVar11 = param_5;
  func_0x00010877e0e4();
  func_0x000107c3333c();
  uStack_68 = extraout_x8;
  func_0x000107c33328();
  lStack_98 = CONCAT44(lStack_98._4_4_,0xe);
  func_0x000107c29518(auStack_d8,*param_1 + 0xf0,&lStack_98);
  func_0x00010877dfd0(auStack_d8[0]);
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_98 = extraout_x8_00 + 0x10;
  lStack_90 = 0;
  uStack_78 = 0xfc;
  func_0x000107c28b10();
  func_0x000107c2882c(&lStack_98);
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877e4d8();
  func_0x000107c333f4();
  lVar5 = 0x370;
  __Znwm();
  lVar6 = lVar5;
  func_0x00010877e1a0();
  func_0x000107c333d8(&PTR_FUN_110a6db58);
  uStack_a0 = auStack_d8[0];
  lVar6 = lVar6 + 0x18;
  auStack_d8[0] = 0;
  lStack_98 = *param_5;
  func_0x00010877e238();
  uVar15 = *(undefined8 *)(unaff_x19 + 0x60);
  uVar14 = *(ulong *)(unaff_x19 + 0x58);
  uStack_b0 = uVar14;
  uStack_a8 = uVar15;
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10 != 0);
  }
  puVar13 = &uStack_a0;
  func_0x00010877e534();
  FUN_10877e5c4();
  puVar7 = &uStack_b0;
  func_0x000107c288e4();
  func_0x00010877dff4(lStack_90);
  func_0x000107c3338c();
  lStack_c0 = lVar6;
  lStack_b8 = lVar5;
  lVar2 = lVar6;
  lVar3 = lVar5;
  if ((*(long *)(lVar5 + 0x28) == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      lStack_90 = lVar3;
      lStack_98 = lVar2;
      func_0x00010877dec4();
      lVar2 = lStack_98;
      lVar3 = lStack_90;
    } while (extraout_w9 != 0);
    puVar7 = (ulong *)(lVar5 + 0x20);
    func_0x00010877e044(puVar7,lVar6);
    func_0x00010877e488();
  }
  func_0x000107c33384();
  lStack_98 = lVar6;
  lStack_90 = lVar5;
  do {
    func_0x00010877dec4();
    uVar12 = SUB81(plVar11,0);
    iVar4 = (int)puVar7;
  } while (extraout_w9_00 != 0);
  func_0x00010877e024();
  plVar11 = &lStack_98;
  func_0x00010877dfc8();
  func_0x00010877e488();
  if (iVar4 != 0) {
    func_0x00010877e31c();
  }
  plVar8 = &lStack_c0;
  FUN_10877c60c();
  func_0x00010877e278();
  func_0x000107c33320(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar9 = &lStack_c0;
    FUN_10877c60c();
    func_0x00010877e278();
    func_0x00010877df4c();
    lStack_140 = unaff_x24 + 0x270;
    plStack_138 = &lStack_98;
    func_0x00010877de68();
    uStack_210 = CONCAT44(uStack_210._4_4_,4);
    func_0x000107c29518(&uStack_238,*plVar9 + 0xf0,&uStack_210);
    uVar1 = uStack_238;
    func_0x00010877dfd0();
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_210 = extraout_x8_01 + 0x10;
    lStack_208 = 0;
    uStack_1f0 = 0x90;
    puVar7 = &uStack_210;
    func_0x00010086aac8(puVar7,plVar11);
    func_0x000107c28b10(uVar1,puVar7);
    func_0x000107c2882c(&uStack_210);
    if (((uint)((ulong)plVar11 >> 0x11) & 0x7fff) < 0x47) {
      func_0x00010877e158((ulong)plVar11 >> 0x10 & 0xffff);
    }
    else {
      func_0x00010877e51c();
    }
    uVar1 = uStack_238;
    func_0x000107c278b8(&uStack_210);
    if (((uint)plVar11 & 0xffff) < 0x2b8) {
      func_0x00010877e140();
    }
    else {
      func_0x00010877e510();
    }
    func_0x000107c278b8(&uStack_180);
    func_0x000107c28b34(uVar1,&uStack_210,&uStack_180);
    func_0x00010877e2e4();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_210);
    if ((uint)plVar11 == 0x1200b0) {
      FUN_108681a30(uStack_238,7);
    }
    func_0x00010877df90();
    func_0x00010877df54();
    func_0x00010877e2d0();
    uStack_210 = uVar14;
    lStack_208 = uVar15;
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c3332c();
      } while (extraout_w10_00 != 0);
    }
    FUN_108778e08(&lStack_240,&uStack_210);
    puVar7 = &uStack_210;
    func_0x000107c297b0(puVar7);
    func_0x00010877df90();
    func_0x00010877df54();
    func_0x00010877dee4();
    (*extraout_x8_03)();
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_268 = 0;
    uStack_270 = 0;
    FUN_1086cf200();
    func_0x00010877df90();
    func_0x00010877df54();
    func_0x000107c29838(auStack_230,plVar8[1],plVar8[2]);
    puVar10 = (undefined8 *)0x220;
    __Znwm();
    lStack_188 = lStack_240;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_FUN_110a6dba8;
    uStack_178 = uStack_268;
    uStack_180 = uStack_270;
    uStack_170 = uStack_260;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_160 = uStack_250;
    uStack_168 = uStack_258;
    uStack_158 = uStack_248;
    auStack_150[0] = uStack_238;
    lStack_240 = 0;
    uStack_238 = 0;
    uStack_210 = uStack_210 & 0xffffffffffffff00;
    uStack_198 = 0;
    FUN_108781190(puVar10 + 3,auStack_230,param_4,puVar7,puVar13,auStack_150,param_3,plVar11,
                  &uStack_180,&lStack_188,uVar12);
    func_0x000107c28d04(&uStack_210);
    if (lStack_188 != 0) {
      func_0x00010877de90();
    }
    func_0x00010877e2dc();
    func_0x00010877e2c8();
    puVar7 = &uStack_220;
    FUN_10877c630(puVar7,puVar10 + 3,puVar10);
    func_0x00010877e280();
    iVar4 = (int)puVar7;
    uStack_210 = uStack_220;
    lStack_208 = lStack_218;
    if (lStack_218 != 0) {
      do {
        func_0x000107c3332c();
        iVar4 = (int)puVar7;
      } while (extraout_w10_01 != 0);
    }
    func_0x00010877e024();
    func_0x00010877dfc8();
    func_0x000107c297a4(&uStack_210);
    if (iVar4 != 0) {
      func_0x00010877e1f0();
    }
    FUN_10877c6b4(&uStack_220);
    func_0x0001086cf230(&uStack_270);
    func_0x00010877e2fc();
    return;
  }
  return;
}



/* Entry: 108778aa0; end: 108778e07;  */

void FUN_108778aa0(ulong param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  ulong uStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined1 uStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x00010877de68();
  uStack_130 = CONCAT44(uStack_130._4_4_,4);
  func_0x000107c29518(&uStack_158,*param_2 + 0xf0,&uStack_130);
  uVar1 = uStack_158;
  func_0x00010877dfd0();
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = extraout_x8 + 0x10;
  lStack_128 = 0;
  uStack_110 = 0x90;
  puVar3 = &uStack_130;
  func_0x00010086aac8(puVar3,param_3);
  func_0x000107c28b10(uVar1,puVar3);
  func_0x000107c2882c(&uStack_130);
  if (((uint)(param_3 >> 0x11) & 0x7fff) < 0x47) {
    func_0x00010877e158(param_3 >> 0x10 & 0xffff);
  }
  else {
    func_0x00010877e51c();
  }
  uVar1 = uStack_158;
  func_0x000107c278b8(&uStack_130);
  if (((uint)param_3 & 0xffff) < 0x2b8) {
    func_0x00010877e140();
  }
  else {
    func_0x00010877e510();
  }
  func_0x000107c278b8(&uStack_a0);
  func_0x000107c28b34(uVar1,&uStack_130,&uStack_a0);
  func_0x00010877e2e4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_130);
  if ((uint)param_3 == 0x1200b0) {
    FUN_108681a30(uStack_158,7);
  }
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877e2d0();
  uStack_130 = param_1;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10 != 0);
  }
  FUN_108778e08(&lStack_160,&uStack_130);
  puVar3 = &uStack_130;
  func_0x000107c297b0(puVar3);
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877dee4();
  (*extraout_x8_01)();
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  FUN_1086cf200();
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x000107c29838(auStack_150,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
  puVar4 = (undefined8 *)0x220;
  __Znwm();
  lStack_a8 = lStack_160;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a6dba8;
  uStack_98 = uStack_188;
  uStack_a0 = uStack_190;
  uStack_90 = uStack_180;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_80 = uStack_170;
  uStack_88 = uStack_178;
  uStack_78 = uStack_168;
  auStack_70[0] = uStack_158;
  lStack_160 = 0;
  uStack_158 = 0;
  uStack_130 = uStack_130 & 0xffffffffffffff00;
  uStack_b8 = 0;
  FUN_108781190(puVar4 + 3,auStack_150,param_5,puVar3,param_7,auStack_70,param_4,param_3,&uStack_a0,
                &lStack_a8,param_6);
  func_0x000107c28d04(&uStack_130);
  if (lStack_a8 != 0) {
    func_0x00010877de90();
  }
  func_0x00010877e2dc();
  func_0x00010877e2c8();
  puVar3 = &uStack_140;
  FUN_10877c630(puVar3,puVar4 + 3,puVar4);
  func_0x00010877e280();
  iVar2 = (int)puVar3;
  uStack_130 = uStack_140;
  lStack_128 = lStack_138;
  if (lStack_138 != 0) {
    do {
      func_0x000107c3332c();
      iVar2 = (int)puVar3;
    } while (extraout_w10_00 != 0);
  }
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x000107c297a4(&uStack_130);
  if (iVar2 != 0) {
    func_0x00010877e1f0();
  }
  FUN_10877c6b4(&uStack_140);
  func_0x0001086cf230(&uStack_190);
  func_0x00010877e2fc();
  return;
}



/* Entry: 108778e08; end: 108778e4f;  */

void FUN_108778e08(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  
  func_0x00010877e24c();
  uVar1 = 0x120;
  __Znwm();
  func_0x000107c29840();
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 108778e50; end: 10877914f;  */

void FUN_108778e50(undefined8 *param_1,long *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  long unaff_x19;
  undefined8 *in_register_00005008;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined8 in_stack_00000068;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  
  func_0x00010877e5a8();
  func_0x00010877de68();
  in_stack_00000040 = (undefined8 *)CONCAT44(in_stack_00000040._4_4_,5);
  func_0x000107c29518(&stack0x00000068,*param_2 + 0xf0,&stack0x00000040);
  uVar2 = in_stack_00000068;
  func_0x00010877dfd0();
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000040 = (undefined8 *)(extraout_x8 + 0x10);
  in_stack_00000048 = (undefined8 *)0x0;
  in_stack_00000060 = 0xaa;
  puVar7 = &stack0x00000040;
  func_0x00010086aac8(puVar7,param_3);
  func_0x000107c28b10(uVar2,puVar7);
  func_0x00010877e2ec();
  if (((uint)(param_3 >> 0x11) & 0x7fff) < 0x47) {
    func_0x00010877e158(param_3 >> 0x10 & 0xffff);
  }
  else {
    func_0x00010877e51c();
  }
  uVar2 = in_stack_00000068;
  func_0x000107c278b8(&stack0x00000040);
  uVar1 = (uint)param_3 & 0xffff;
  uVar5 = uVar1 == 0x2b7;
  if (uVar1 < 0x2b8) {
    func_0x00010877e140();
  }
  else {
    func_0x00010877e510();
  }
  func_0x000107c278b8(&stack0x00000028);
  func_0x000107c28b34(uVar2,&stack0x00000040,&stack0x00000028);
  func_0x00010877e424();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000040);
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877e2d0();
  in_stack_00000040 = param_1;
  in_stack_00000048 = in_register_00005008;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10 != 0);
  }
  FUN_108778e08(&stack0x00000020,&stack0x00000040);
  puVar7 = &stack0x00000040;
  func_0x000107c297b0();
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877dee4();
  (*extraout_x8_01)();
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x000107c29838(&stack0x00000070,*(undefined8 *)(unaff_x19 + 8),
                      *(undefined8 *)(unaff_x19 + 0x10));
  puVar8 = (undefined8 *)0x208;
  __Znwm();
  puVar9 = puVar8;
  func_0x00010877e1a0();
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_110a6dbf8;
  func_0x000107c279ac(&stack0x00000040,param_4);
  in_stack_00000088 = in_stack_00000068;
  in_stack_00000080 = in_stack_00000020;
  puVar9 = puVar8 + 3;
  in_stack_00000068 = 0;
  in_stack_00000020 = 0;
  FUN_10875abc0(puVar9,&stack0x00000070,&stack0x00000040,puVar7,param_3,param_5,&stack0x00000088,
                &stack0x00000080);
  if (in_stack_00000080 != 0) {
    func_0x00010877de90();
  }
  func_0x000107c33378();
  puVar7 = &stack0x00000040;
  func_0x000107c27a04();
  in_stack_00000028 = puVar9;
  in_stack_00000030 = puVar8;
  puVar3 = puVar9;
  puVar4 = puVar8;
  if ((puVar8[5] == 0) || (func_0x00010877e1b8(), (bool)uVar5)) {
    do {
      in_stack_00000048 = puVar4;
      in_stack_00000040 = puVar3;
      func_0x00010877dec4();
      puVar3 = in_stack_00000040;
      puVar4 = in_stack_00000048;
    } while (extraout_w9 != 0);
    func_0x00010877e258();
    func_0x00010877e138();
  }
  func_0x00010877e280();
  in_stack_00000040 = puVar9;
  in_stack_00000048 = puVar8;
  do {
    func_0x00010877dec4();
    iVar6 = (int)puVar7;
  } while (extraout_w9_00 != 0);
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x00010877e138();
  if (iVar6 != 0) {
    func_0x000107c29830(puVar9);
  }
  FUN_10877c704(&stack0x00000028);
  func_0x00010877e2fc();
  return;
}



/* Entry: 108779150; end: 1087793fb;  */

void FUN_108779150(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  code *extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  long unaff_x24;
  undefined8 *in_register_00005008;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined4 uStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_70;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  
  func_0x00010877de68();
  puStack_b0 = (undefined8 *)CONCAT44(puStack_b0._4_4_,4);
  func_0x000107c33354(&puStack_70);
  if (((uint)(param_3 >> 0x11) & 0x7fff) < 0x47) {
    func_0x00010877e158(param_3 >> 0x10 & 0xffff);
  }
  else {
    func_0x00010877e51c();
  }
  puVar8 = puStack_70;
  func_0x000107c278b8(&puStack_b0);
  uVar1 = (uint)param_3 & 0xffff;
  uVar4 = uVar1 == 0x2b7;
  if (uVar1 < 0x2b8) {
    func_0x00010877e140();
  }
  else {
    func_0x00010877e510();
  }
  func_0x000107c33414();
  func_0x000107c28b34(puVar8,&puStack_b0,&puStack_88);
  func_0x000107c333c8();
  func_0x00010877e1e0();
  func_0x000107c33338(puStack_70);
  uStack_90 = 0x90;
  func_0x000107c333e4();
  func_0x000107c33364();
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877e2d0();
  puStack_b0 = param_1;
  puStack_a8 = in_register_00005008;
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10 != 0);
  }
  FUN_108778e08(&puStack_b8,&puStack_b0);
  ppuVar6 = &puStack_b0;
  func_0x000107c297b0(ppuVar6);
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877dee4();
  (*extraout_x8_00)();
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877e4d8();
  func_0x000107c29838(auStack_68);
  puVar7 = (undefined8 *)0x158;
  __Znwm();
  puVar8 = puVar7;
  func_0x00010877e1a0();
  puStack_b0 = puStack_70;
  puStack_58 = puStack_b8;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110a6dc48;
  puVar8 = puVar8 + 3;
  puStack_70 = (undefined8 *)0x0;
  puStack_b8 = (undefined8 *)0x0;
  FUN_10875bf3c(puVar8,auStack_68,param_4,ppuVar6,param_3,param_5,&puStack_b0,&puStack_58,
                unaff_x24 + 0x270);
  puVar9 = puStack_58;
  if (puStack_58 != (undefined8 *)0x0) {
    func_0x00010877de90();
  }
  func_0x000107c33388();
  puVar2 = puVar8;
  puVar3 = puVar7;
  puStack_88 = puVar8;
  puStack_80 = puVar7;
  if ((puVar7[5] == 0) || (func_0x00010877e1b8(), (bool)uVar4)) {
    do {
      puStack_a8 = puVar3;
      puStack_b0 = puVar2;
      func_0x00010877dec4();
      puVar2 = puStack_b0;
      puVar3 = puStack_a8;
    } while (extraout_w9 != 0);
    puVar9 = puVar7 + 4;
    func_0x000107c29834(puVar9,puVar8,puVar7);
    func_0x000107c33368();
  }
  func_0x00010877e2f4();
  puStack_b0 = puVar8;
  puStack_a8 = puVar7;
  do {
    func_0x00010877dec4();
    iVar5 = (int)puVar9;
  } while (extraout_w9_00 != 0);
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x000107c33368();
  if (iVar5 != 0) {
    func_0x00010877e31c();
  }
  FUN_10877c754(&puStack_88);
  func_0x00010877e168();
  return;
}



/* Entry: 1087793fc; end: 1087797eb;  */

void FUN_1087793fc(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lStack_1e0;
  long lStack_1d8;
  undefined4 uStack_1c0;
  undefined1 auStack_1b0 [16];
  long lStack_1a0;
  long lStack_198;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  
  func_0x00010877e24c();
  func_0x000107c3333c();
  uStack_70 = extraout_x8;
  func_0x000107c33328();
  puStack_a0 = (undefined8 *)CONCAT44(puStack_a0._4_4_,0xf);
  func_0x000107c29518(&uStack_108,*param_1 + 0xf0,&puStack_a0);
  uVar1 = uStack_108;
  func_0x000107c278b8(&puStack_a0,PTR_DAT_113268c48);
  func_0x000107c278b8(auStack_b8,PTR_DAT_113269570);
  func_0x000107c28b34(uVar1,&puStack_a0,auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  func_0x00010877e2e4();
  func_0x00010877dfd0(uStack_108);
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  puStack_a0 = (undefined8 *)(extraout_x8_00 + 0x10);
  puStack_98 = (undefined8 *)0x0;
  uStack_80 = 0x108;
  func_0x000107c28b10();
  func_0x000107c2882c(&puStack_a0);
  puVar13 = (undefined8 *)param_4[1];
  puVar12 = (undefined8 *)*param_4;
  puStack_120 = puVar12;
  puStack_118 = puVar13;
  if (param_4[1] != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10 != 0);
  }
  lStack_110 = (param_3[1] - *param_3) / 0x18;
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877e2d0();
  puStack_a0 = puVar12;
  puStack_98 = puVar13;
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10_00 != 0);
  }
  FUN_108778e08(&lStack_128,&puStack_a0);
  ppuVar5 = &puStack_a0;
  func_0x000107c297b0();
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877dee4();
  (*extraout_x8_02)();
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x000107c29838(auStack_100,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
  puVar6 = (undefined8 *)0x248;
  __Znwm();
  puVar12 = puVar6;
  func_0x00010877e548();
  puVar12[2] = 0;
  *puVar12 = &PTR_FUN_110a6dc98;
  func_0x000107c279ac(auStack_b8,param_3);
  lVar10 = lStack_110;
  puVar13 = puStack_118;
  puVar12 = puStack_120;
  puStack_d0 = puStack_120;
  puStack_c8 = puStack_118;
  puStack_120 = (undefined8 *)0x0;
  puStack_118 = (undefined8 *)0x0;
  lStack_c0 = lStack_110;
  puStack_88 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)0x20;
  __Znwm();
  uStack_d8 = uStack_108;
  lStack_e0 = lStack_128;
  *puVar7 = &PTR_FUN_110a6dce8;
  puVar7[1] = puVar12;
  puVar12 = puVar6 + 3;
  puStack_d0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  puVar7[2] = puVar13;
  puVar7[3] = lVar10;
  uStack_108 = 0;
  lStack_128 = 0;
  puStack_88 = puVar7;
  FUN_10875cc88(puVar12,auStack_100,auStack_b8,ppuVar5,0x1200a9,&puStack_a0,&uStack_d8,&lStack_e0);
  if (lStack_e0 != 0) {
    func_0x00010877de90();
  }
  func_0x000107c29578(&uStack_d8);
  FUN_1086e8d68(&puStack_a0);
  func_0x000104be3970(&puStack_d0);
  func_0x000107c27a04(auStack_b8);
  puStack_f0 = puVar12;
  puStack_e8 = puVar6;
  puVar13 = puVar12;
  puVar7 = puVar6;
  if ((puVar6[5] == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      puStack_98 = puVar7;
      puStack_a0 = puVar13;
      func_0x00010877df2c();
      puVar13 = puStack_a0;
      puVar7 = puStack_98;
    } while (extraout_w9 != 0);
    func_0x000107c29834(puVar6 + 4,puVar12,puVar6);
    func_0x00010877e40c();
  }
  func_0x00010877c940(0);
  puVar8 = auStack_100;
  func_0x000107c288e8();
  puStack_a0 = puVar12;
  puStack_98 = puVar6;
  do {
    func_0x00010877df2c();
    iVar4 = (int)puVar8;
  } while (extraout_w9_00 != 0);
  func_0x00010877e024();
  ppuVar5 = &puStack_a0;
  func_0x00010877dfc8();
  func_0x00010877e40c();
  if (iVar4 != 0) {
    func_0x00010877e470();
  }
  FUN_10877c94c(&puStack_f0);
  func_0x000104be3970(&puStack_120);
  func_0x000107c29578();
  func_0x000107c33320(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10877c94c(&puStack_f0);
  if (lStack_128 != 0) {
    func_0x00010877de90();
  }
  func_0x000104be3970(&puStack_120);
  func_0x000107c29578();
  func_0x00010877df4c();
  func_0x00010877de68();
  func_0x00010877df5c(0xd);
  func_0x00010877dfac();
  uStack_1c0 = 0xe8;
  func_0x00010877e490();
  func_0x00010877e05c();
  func_0x00010877e3e0();
  lVar9 = 0x90;
  __Znwm();
  *(undefined8 *)(lVar9 + 8) = 0;
  lVar10 = lVar9;
  func_0x000107c333d8(&PTR_FUN_110a6dd68);
  lVar10 = lVar10 + 0x18;
  func_0x00010877e374();
  lVar11 = lVar10;
  FUN_10876b340(lVar10,auStack_1b0,ppuVar5,&lStack_1e0);
  func_0x00010877e170();
  lVar2 = lVar10;
  lVar3 = lVar9;
  lStack_1a0 = lVar10;
  lStack_198 = lVar9;
  if ((*(long *)(lVar9 + 0x28) == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      lStack_1d8 = lVar3;
      lStack_1e0 = lVar2;
      func_0x00010877df9c();
      lVar2 = lStack_1e0;
      lVar3 = lStack_1d8;
    } while (extraout_w9_01 != 0);
    lVar11 = lVar9 + 0x20;
    func_0x00010877e044(lVar11,lVar10);
    func_0x000100850084();
  }
  func_0x00010877e0f8();
  lStack_1e0 = lVar10;
  lStack_1d8 = lVar9;
  do {
    func_0x00010877df9c();
    iVar4 = (int)lVar11;
  } while (extraout_w9_02 != 0);
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x000100850084();
  if (iVar4 != 0) {
    func_0x00010877e1f0();
  }
  FUN_10877c99c(&lStack_1a0);
  func_0x00010877e150();
  return;
}



/* Entry: 1087797ec; end: 108779943;  */

void FUN_1087797ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int extraout_w9;
  int extraout_w9_00;
  long lStack_90;
  long lStack_88;
  undefined4 uStack_70;
  undefined1 auStack_60 [16];
  long lStack_50;
  long lStack_48;
  
  func_0x00010877de68();
  func_0x00010877df5c(0xd);
  func_0x00010877dfac();
  uStack_70 = 0xe8;
  func_0x00010877e490();
  func_0x00010877e05c();
  func_0x00010877e3e0();
  lVar4 = 0x90;
  __Znwm();
  *(undefined8 *)(lVar4 + 8) = 0;
  lVar5 = lVar4;
  func_0x000107c333d8(&PTR_FUN_110a6dd68);
  lVar5 = lVar5 + 0x18;
  func_0x00010877e374();
  lVar6 = lVar5;
  FUN_10876b340(lVar5,auStack_60,param_2,&lStack_90);
  func_0x00010877e170();
  lVar1 = lVar5;
  lVar2 = lVar4;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  if ((*(long *)(lVar4 + 0x28) == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      lStack_88 = lVar2;
      lStack_90 = lVar1;
      func_0x00010877df9c();
      lVar1 = lStack_90;
      lVar2 = lStack_88;
    } while (extraout_w9 != 0);
    lVar6 = lVar4 + 0x20;
    func_0x00010877e044(lVar6,lVar5);
    func_0x000100850084();
  }
  func_0x00010877e0f8();
  lStack_90 = lVar5;
  lStack_88 = lVar4;
  do {
    func_0x00010877df9c();
    iVar3 = (int)lVar6;
  } while (extraout_w9_00 != 0);
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x000100850084();
  if (iVar3 != 0) {
    func_0x00010877e1f0();
  }
  FUN_10877c99c(&lStack_50);
  func_0x00010877e150();
  return;
}



/* Entry: 108779944; end: 108779aa7;  */

void FUN_108779944(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int extraout_w9;
  int extraout_w9_00;
  long lVar6;
  long lStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x00010877de68();
  lStack_60 = CONCAT44(lStack_60._4_4_,10);
  func_0x00010877e4a0(&lStack_88);
  func_0x00010877df90();
  func_0x00010877df54();
  lVar6 = *param_1;
  func_0x000107c333f4();
  lVar3 = 0xf8;
  __Znwm();
  lVar4 = lVar3;
  func_0x00010877e548();
  func_0x000107c333d8(&PTR_FUN_110a6ddb8);
  lStack_60 = lStack_88;
  lVar4 = lVar4 + 0x18;
  lStack_88 = 0;
  lVar5 = lVar4;
  FUN_108780100(lVar4,auStack_80,param_2,param_3,param_4,&lStack_60,lVar6 + 0x270);
  func_0x000107c33374();
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  lVar6 = lVar4;
  lVar1 = lVar3;
  if ((*(long *)(lVar3 + 0x28) == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      lStack_58 = lVar1;
      lStack_60 = lVar6;
      func_0x00010877df2c();
      lVar6 = lStack_60;
      lVar1 = lStack_58;
    } while (extraout_w9 != 0);
    lVar5 = lVar3 + 0x20;
    func_0x000107c29834(lVar5,lVar4,lVar3);
    func_0x00010877e080();
  }
  func_0x000107c33384();
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  do {
    func_0x00010877df2c();
    iVar2 = (int)lVar5;
  } while (extraout_w9_00 != 0);
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x00010877e080();
  if (iVar2 != 0) {
    func_0x00010877e1f0();
  }
  FUN_10877c9ec(&lStack_70);
  func_0x00010877e278();
  return;
}



/* Entry: 108779aa8; end: 108779dd3;  */

void FUN_108779aa8(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [16];
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined1 auStack_e0 [48];
  undefined1 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [48];
  undefined8 auStack_70 [2];
  
  func_0x00010877de68();
  lStack_160 = CONCAT44(lStack_160._4_4_,4);
  func_0x000107c29518(&uStack_188,*param_2 + 0xf0,&lStack_160);
  if (((uint)(param_6 >> 0x11) & 0x7fff) < 0x47) {
    func_0x00010877e158(param_6 >> 0x10 & 0xffff);
  }
  else {
    func_0x00010877e51c();
  }
  uVar1 = uStack_188;
  func_0x000107c278b8(&lStack_160);
  if (((uint)param_6 & 0xffff) < 0x2b8) {
    func_0x00010877e140();
  }
  else {
    func_0x00010877e510();
  }
  func_0x000107c278b8(auStack_e0);
  func_0x000107c28b34(uVar1,&lStack_160,auStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_160);
  func_0x00010877dfd0(uStack_188);
  uStack_150 = 0;
  uStack_148 = 0;
  lStack_160 = extraout_x8 + 0x10;
  lStack_158 = 0;
  uStack_140 = 0x90;
  func_0x000107c28b10();
  func_0x000107c2882c(&lStack_160);
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877e2d0();
  lStack_160 = param_1;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10 != 0);
  }
  FUN_108778e08(&lStack_190,&lStack_160);
  plVar3 = &lStack_160;
  func_0x000107c297b0();
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877dee4();
  (*extraout_x8_01)();
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877e414();
  puVar4 = (undefined8 *)0x220;
  __Znwm();
  auStack_70[0] = uStack_188;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a6dba8;
  uStack_188 = 0;
  func_0x0001086d0520(auStack_a0,param_5);
  lStack_a8 = lStack_190;
  lStack_190 = 0;
  auStack_e0[0] = 0;
  uStack_b0 = 0;
  func_0x000107c28d6c(&lStack_160,param_4);
  FUN_108781190(puVar4 + 3,auStack_180,param_3,plVar3,param_7,auStack_70,1,param_6,auStack_a0,
                &lStack_a8,1);
  func_0x000107c28d04(&lStack_160);
  func_0x00010086ab34(auStack_e0);
  if (lStack_a8 != 0) {
    func_0x00010877de90();
  }
  func_0x00010877e2dc();
  func_0x00010877e2c8();
  plVar3 = &lStack_170;
  FUN_10877c630(plVar3,puVar4 + 3,puVar4);
  func_0x00010877e130();
  iVar2 = (int)plVar3;
  lStack_160 = lStack_170;
  lStack_158 = lStack_168;
  if (lStack_168 != 0) {
    do {
      func_0x000107c3332c();
      iVar2 = (int)plVar3;
    } while (extraout_w10_00 != 0);
  }
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x000107c297a4(&lStack_160);
  if (iVar2 != 0) {
    func_0x00010877e1f0();
  }
  FUN_10877c6b4(&lStack_170);
  func_0x00010877e054();
  return;
}



/* Entry: 108779dd4; end: 10877a0a3;  */

undefined ****
FUN_108779dd4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined ****ppppuVar3;
  undefined ****ppppuVar4;
  undefined8 uVar5;
  undefined ****ppppuVar6;
  long lVar7;
  long lVar8;
  undefined ****ppppuVar9;
  undefined ****ppppuVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined ****ppppuVar11;
  undefined ****ppppuVar12;
  undefined ***pppuVar13;
  undefined ***pppuStack_1c0;
  undefined ***pppuStack_1b8;
  long lStack_1b0;
  long alStack_1a8 [5];
  undefined ***pppuStack_180;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined ***pppuStack_130;
  undefined ***pppuStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined ****ppppuStack_110;
  undefined8 *puStack_108;
  undefined ***pppuStack_100;
  long *plStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined **appuStack_d0 [2];
  undefined ***pppuStack_c0;
  undefined ***pppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_98;
  undefined8 uStack_90;
  undefined ****ppppuStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  
  func_0x000107c3333c();
  uStack_70 = extraout_x8;
  func_0x000107c33328();
  pppuStack_a0 = (undefined ***)CONCAT44(pppuStack_a0._4_4_,0x17);
  func_0x000107c29518(&ppuStack_d8,*param_2 + 0xf0,&pppuStack_a0);
  func_0x00010877dfd0(ppuStack_d8);
  uStack_90 = 0;
  ppppuStack_88 = (undefined ****)0x0;
  pppuStack_a0 = (undefined ***)(extraout_x8_00 + 0x10);
  pppuStack_98 = (undefined ***)0x0;
  uStack_80 = 0x157;
  func_0x000107c28b10();
  func_0x000107c2882c(&pppuStack_a0);
  FUN_1087759d0(&pppuStack_a0);
  pppuVar13 = pppuStack_98;
  pppuStack_e8 = pppuStack_a0;
  pppuStack_a0 = (undefined ***)0x0;
  pppuStack_98 = (undefined ***)0x0;
  pppuStack_c0 = (undefined ***)0x0;
  appuStack_d0[0] = (undefined **)0x0;
  func_0x000107c27f98(appuStack_d0);
  func_0x000107c27f9c(&pppuStack_c0);
  ppppuVar3 = &pppuStack_a0;
  func_0x000107c27fec();
  pppuStack_f0 = pppuVar13;
  uStack_e0 = 0;
  func_0x00010877e384();
  func_0x00010877e1f8();
  pppuVar13 = *ppppuVar3;
  func_0x00010877e414();
  ppppuVar4 = (undefined ****)0x118;
  plStack_f8 = param_1;
  __Znwm();
  ppuStack_b0 = ppuStack_d8;
  pppuStack_98 = pppuStack_f0;
  ppppuVar4[1] = (undefined ***)0x0;
  pppuStack_100 = pppuVar13 + 0x4e;
  ppppuVar4[2] = (undefined ***)0x0;
  *ppppuVar4 = (undefined ***)&PTR_FUN_110a6de08;
  ppppuVar3 = ppppuVar4 + 3;
  pppuStack_f0 = (undefined ***)0x0;
  pppuStack_a0 = (undefined ***)&PTR_FUN_110a6de58;
  ppppuStack_110 = &pppuStack_a0;
  ppuStack_d8 = (undefined **)0x0;
  uStack_a8 = 0;
  puStack_108 = &ppuStack_b0;
  ppppuStack_88 = ppppuStack_110;
  FUN_108776a28(ppppuVar3,appuStack_d0,param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c29578(&ppuStack_b0);
  func_0x00010877752c(&pppuStack_a0);
  func_0x00010877e42c();
  pppuStack_c0 = (undefined ***)ppppuVar3;
  pppuStack_b8 = (undefined ***)ppppuVar4;
  ppppuVar6 = ppppuVar3;
  ppppuVar9 = ppppuVar4;
  if ((ppppuVar4[5] == (undefined ***)0x0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      pppuStack_98 = (undefined ***)ppppuVar9;
      pppuStack_a0 = (undefined ***)ppppuVar6;
      func_0x00010877e178();
      ppppuVar6 = (undefined ****)pppuStack_a0;
      ppppuVar9 = (undefined ****)pppuStack_98;
    } while (extraout_w9 != 0);
    func_0x000107c29834(ppppuVar4 + 4,ppppuVar3,ppppuVar4);
    func_0x00010877e3e8();
  }
  uVar5 = 0;
  func_0x00010877cc0c();
  func_0x00010877e130();
  pppuStack_a0 = (undefined ***)ppppuVar3;
  pppuStack_98 = (undefined ***)ppppuVar4;
  do {
    func_0x00010877e178();
    iVar2 = (int)uVar5;
  } while (extraout_w9_00 != 0);
  func_0x000107c333e8();
  func_0x000107c3339c();
  func_0x00010877e3e8();
  plVar1 = plStack_f8;
  if (iVar2 != 0) {
    func_0x000107c29830(ppppuVar3);
  }
  FUN_10877cc18(&pppuStack_c0);
  func_0x00010877e21c();
  *plVar1 = (long)pppuStack_e8;
  if (pppuStack_e8 != (undefined ***)0x0) {
    do {
      func_0x000107c33340();
    } while (extraout_w10 != 0);
  }
  ppppuVar3 = &pppuStack_e8;
  func_0x00010877bc64();
  func_0x00010877e054();
  func_0x000107c33320(uStack_70);
  if ((bool)in_ZR) {
    return ppppuVar3;
  }
  ___stack_chk_fail();
  FUN_10877cc18(&pppuStack_c0);
  func_0x00010877e21c();
  ppppuVar6 = &pppuStack_e8;
  func_0x00010877bc64();
  func_0x00010877e054();
  func_0x00010877dfdc();
  ppppuVar9 = &pppuStack_1c0;
  ppppuVar10 = &pppuStack_1c0;
  plStack_138 = plVar1;
  pcStack_118 = FUN_10877a0a4;
  uStack_160 = param_4;
  uStack_158 = param_5;
  uStack_150 = param_6;
  uStack_148 = param_7;
  uStack_140 = param_8;
  pppuStack_130 = (undefined ***)ppppuVar3;
  pppuStack_128 = (undefined ***)ppppuVar4;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x000107c3340c();
  func_0x000107c3333c();
  pppuStack_178 = (undefined ***)0x1;
  uStack_168 = extraout_x8_01;
  func_0x00010877e480();
  pppuStack_170 = (undefined ***)ppppuVar6;
  ppppuVar6[1] = (undefined ***)0x0;
  ppppuVar6[2] = (undefined ***)0x0;
  *ppppuVar6 = (undefined ***)&PTR_FUN_110a6def8;
  ppppuVar12 = ppppuVar6 + 3;
  *ppppuVar12 = (undefined ***)&PTR_DAT_110a6dfc0;
  ppppuVar11 = ppppuVar6 + 5;
  *ppppuVar11 = (undefined ***)0x0;
  ppppuVar6[4] = (undefined ***)0x0;
  alStack_1a8[3] = 0;
  func_0x00010877e3d8();
  *ppppuVar11 = (undefined ***)0x0;
  func_0x00010877e464();
  lVar7 = 0xd8;
  __Znwm();
  lVar8 = lVar7;
  func_0x000107c33348();
  func_0x000107c333d4(&PTR_FUN_110a6dff0);
  *(undefined1 *)(lVar8 + 0xd0) = 0;
  alStack_1a8[3] = 0;
  lStack_1b0 = 0;
  func_0x000107c27f98(&lStack_1b0);
  func_0x00010877e3d8();
  alStack_1a8[3] = 0;
  alStack_1a8[4] = 0;
  alStack_1a8[1] = 0;
  alStack_1a8[2] = 0;
  lStack_1b0 = lVar7;
  alStack_1a8[0] = lVar7;
  func_0x00010877e21c();
  func_0x000107c27f9c(alStack_1a8 + 2);
  func_0x000107c27fec(alStack_1a8 + 3);
  func_0x000107c288b0(ppppuVar6 + 4,&lStack_1b0);
  func_0x000107c2887c(ppppuVar11,alStack_1a8);
  func_0x00010877e434();
  func_0x000107c333f0();
  ppppuVar6[3] = (undefined ***)&PTR_FUN_110a6df48;
  pppuStack_170 = (undefined ***)0x0;
  pppuStack_1c0 = (undefined ***)ppppuVar12;
  pppuStack_1b8 = (undefined ***)ppppuVar6;
  func_0x00010877cc3c(&pppuStack_180);
  pppuVar13 = ppppuVar6[4];
  *ppppuVar4 = pppuVar13;
  pppuStack_180 = (undefined ***)ppppuVar12;
  if (pppuVar13 != (undefined ***)0x0) {
    do {
      func_0x000107c33340();
    } while (extraout_w10_00 != 0);
    pppuStack_178 = pppuStack_1b8;
    pppuStack_180 = pppuStack_1c0;
    ppppuVar6 = (undefined ****)pppuStack_178;
    if ((undefined ****)pppuStack_1b8 == (undefined ****)0x0) goto LAB_10877a1f0;
  }
  do {
    pppuStack_178 = (undefined ***)ppppuVar6;
    func_0x000107c3332c();
    ppppuVar6 = (undefined ****)pppuStack_178;
  } while (extraout_w10_01 != 0);
LAB_10877a1f0:
  (*(code *)(*ppppuVar3)[7])(ppppuVar3,&pppuStack_180);
  func_0x0001086d5a48(&pppuStack_180);
  FUN_10877a268();
  func_0x000107c33320(uStack_168);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d5a48(&pppuStack_180);
    func_0x00010877e214();
    FUN_10877a268();
    func_0x00010877dfdc();
    func_0x00010877e454();
    func_0x000107c3335c();
    if (ppppuVar10 != (undefined ****)0x0) {
      func_0x000107c278a0();
    }
    return ppppuVar4;
  }
  return ppppuVar9;
}



/* Entry: 10877a0a4; end: 10877a267;  */

void FUN_10877a0a4(undefined8 *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 **ppuVar2;
  undefined8 extraout_x8;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long alStack_98 [5];
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_b0;
  func_0x000107c3340c();
  func_0x000107c3333c();
  puStack_68 = (undefined8 *)0x1;
  uStack_58 = extraout_x8;
  func_0x00010877e480();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a6def8;
  puVar5 = param_1 + 3;
  *puVar5 = &PTR_DAT_110a6dfc0;
  puVar4 = param_1 + 5;
  *puVar4 = 0;
  param_1[4] = 0;
  alStack_98[3] = 0;
  puStack_60 = param_1;
  func_0x00010877e3d8();
  *puVar4 = 0;
  func_0x00010877e464();
  lVar1 = 0xd8;
  __Znwm();
  lVar3 = lVar1;
  func_0x000107c33348();
  func_0x000107c333d4(&PTR_FUN_110a6dff0);
  *(undefined1 *)(lVar3 + 0xd0) = 0;
  alStack_98[3] = 0;
  lStack_a0 = 0;
  func_0x000107c27f98(&lStack_a0);
  func_0x00010877e3d8();
  alStack_98[3] = 0;
  alStack_98[4] = 0;
  alStack_98[1] = 0;
  alStack_98[2] = 0;
  lStack_a0 = lVar1;
  alStack_98[0] = lVar1;
  func_0x00010877e21c();
  func_0x000107c27f9c(alStack_98 + 2);
  func_0x000107c27fec(alStack_98 + 3);
  func_0x000107c288b0(param_1 + 4,&lStack_a0);
  func_0x000107c2887c(puVar4,alStack_98);
  func_0x00010877e434();
  func_0x000107c333f0();
  param_1[3] = &PTR_FUN_110a6df48;
  puStack_60 = (undefined8 *)0x0;
  puStack_b0 = puVar5;
  puStack_a8 = param_1;
  func_0x00010877cc3c(&puStack_70);
  lVar3 = param_1[4];
  *unaff_x19 = lVar3;
  puStack_70 = puVar5;
  puVar4 = param_1;
  if (lVar3 != 0) {
    do {
      func_0x000107c33340();
    } while (extraout_w10 != 0);
    puStack_68 = puStack_a8;
    puStack_70 = puStack_b0;
    puVar4 = puStack_68;
    if (puStack_a8 == (undefined8 *)0x0) goto LAB_10877a1f0;
  }
  do {
    puStack_68 = puVar4;
    func_0x000107c3332c();
    puVar4 = puStack_68;
  } while (extraout_w10_00 != 0);
LAB_10877a1f0:
  (**(code **)(*unaff_x20 + 0x38))();
  func_0x0001086d5a48(&puStack_70);
  FUN_10877a268();
  func_0x000107c33320(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086d5a48(&puStack_70);
    func_0x00010877e214();
    FUN_10877a268();
    func_0x00010877dfdc();
    func_0x00010877e454();
    func_0x000107c3335c();
    if (ppuVar2 != (undefined8 **)0x0) {
      func_0x000107c278a0();
    }
    return;
  }
  return;
}



/* Entry: 10877a268; end: 10877a28b;  */

void FUN_10877a268(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877a28c; end: 10877a58f;  */

void FUN_10877a28c(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  long extraout_x8;
  long lVar8;
  undefined8 extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  long *unaff_x26;
  undefined8 ***pppuVar9;
  undefined8 uVar10;
  undefined8 ***pppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 auStack_88 [2];
  undefined8 ***pppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  
  plVar2 = param_2;
  func_0x000107c33328();
  pppuStack_c0 = (undefined8 ***)CONCAT44(pppuStack_c0._4_4_,9);
  func_0x000107c29518(&uStack_90,*plVar2 + 0xf0,&pppuStack_c0);
  func_0x00010877dfd0(uStack_90);
  uStack_b0 = 0;
  uStack_a8 = 0;
  pppuStack_c0 = (undefined8 ***)(extraout_x8 + 0x10);
  puStack_b8 = (undefined8 *)0x0;
  uStack_a0 = 0xd2;
  func_0x000107c28b10();
  ppppuVar3 = &pppuStack_c0;
  func_0x000107c2882c();
  func_0x00010877e1d8();
  *ppppuVar3 = (undefined8 ***)&PTR_FUN_110a6e030;
  func_0x00010877e1a0();
  pppuStack_c0 = (undefined8 ***)0x0;
  func_0x000107c27f9c(&pppuStack_c0);
  ppppuVar3[2] = (undefined8 ***)0x0;
  pppuStack_c0 = (undefined8 ***)0x0;
  func_0x00010877e21c();
  pppuVar4 = (undefined8 ***)0xf8;
  __Znwm();
  pppuVar9 = pppuVar4;
  func_0x000107c33348();
  func_0x000107c333d4(&PTR_FUN_110a6e088);
  *(undefined1 *)(pppuVar9 + 0x1e) = 0;
  pppuStack_c0 = (undefined8 ***)0x0;
  pppuStack_78 = (undefined8 ***)0x0;
  func_0x00010877e42c();
  func_0x000107c27f9c(&pppuStack_c0);
  pppuStack_c0 = (undefined8 ***)0x0;
  puStack_b8 = (undefined8 **)0x0;
  auStack_88[0] = 0;
  uStack_68 = 0;
  pppuStack_78 = pppuVar4;
  ppuStack_70 = pppuVar4;
  func_0x000107c27f98(&uStack_68);
  func_0x000107c27f9c(auStack_88);
  func_0x000107c27fec(&pppuStack_c0);
  func_0x000107c288b0();
  func_0x000107c2887c(ppppuVar3 + 2,&ppuStack_70);
  func_0x000107c27f98(&ppuStack_70);
  ppppuVar5 = &pppuStack_78;
  func_0x000107c27f9c();
  lVar8 = *unaff_x26;
  *param_1 = lVar8;
  if (lVar8 != 0) {
    do {
      func_0x000107c33340();
    } while (extraout_w10 != 0);
  }
  uVar10 = *(undefined8 *)(param_4 + 0x28);
  func_0x00010877e384();
  func_0x00010877e1f8();
  pppuVar9 = *ppppuVar5;
  func_0x000107c29838(auStack_88,param_2[1],param_2[2]);
  ppuVar6 = (undefined8 **)0x1d8;
  __Znwm();
  ppuVar7 = ppuVar6;
  func_0x00010877e1a0(pppuVar9 + 0x4e);
  uStack_68 = uStack_90;
  ppuVar7[2] = (undefined8 *)0x0;
  *ppuVar7 = &PTR_DAT_110a6e0d8;
  ppppuVar5 = (undefined8 ****)(ppuVar7 + 3);
  uStack_90 = 0;
  pppuStack_c0 = ppppuVar3;
  FUN_10878bf54(ppppuVar5,auStack_88,uVar10,param_3,param_4,param_5,&pppuStack_c0,&uStack_68,param_6
                ,extraout_x8_00);
  func_0x000107c33378();
  if ((undefined8 ****)pppuStack_c0 != (undefined8 ****)0x0) {
    func_0x00010877de90();
  }
  ppppuVar3 = ppppuVar5;
  ppuVar7 = ppuVar6;
  pppuStack_78 = ppppuVar5;
  ppuStack_70 = ppuVar6;
  if ((ppuVar6[5] == (undefined8 *)0x0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      puStack_b8 = ppuVar7;
      pppuStack_c0 = ppppuVar3;
      func_0x00010877dec4();
      ppppuVar3 = (undefined8 ****)pppuStack_c0;
      ppuVar7 = (undefined8 **)puStack_b8;
    } while (extraout_w9 != 0);
    func_0x000107c29834(ppuVar6 + 4,ppppuVar5,ppuVar6);
    func_0x00010877e498();
  }
  uVar10 = 0;
  func_0x00010877d028();
  func_0x00010877e2f4();
  pppuStack_c0 = ppppuVar5;
  puStack_b8 = ppuVar6;
  do {
    func_0x00010877dec4();
    iVar1 = (int)uVar10;
  } while (extraout_w9_00 != 0);
  func_0x000107c333e8();
  func_0x000107c3339c();
  func_0x00010877e498();
  if (iVar1 != 0) {
    func_0x000107c29830(ppppuVar5);
  }
  FUN_10877d034(&pppuStack_78);
  func_0x00010877e168();
  return;
}



/* Entry: 10877a590; end: 10877a8cb;  */

/* WARNING: Possible PIC construction at 0x00010877a8f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010877a8fc) */
/* WARNING: Removing unreachable block (ram,0x00010877e4ac) */

code ** FUN_10877a590(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                     undefined8 param_5,undefined8 *param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  code **ppcVar3;
  long lVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  long unaff_x19;
  long *plVar5;
  undefined8 uVar6;
  code **ppcStack_208;
  undefined1 auStack_1b0 [40];
  long *plStack_188;
  undefined1 auStack_180 [40];
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined4 uStack_138;
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [56];
  undefined8 uStack_a0;
  long lStack_98;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_58;
  
  lVar4 = param_4;
  func_0x000107c333ec();
  func_0x000107c3333c();
  uVar1 = *(int *)(lVar4 + 0x48) == 0x19;
  uStack_58 = extraout_x8;
  if ((bool)uVar1) {
    func_0x000107c27994(&pcStack_158);
    func_0x000107c27994(&pcStack_140,param_3);
    func_0x00010869fbb8(auStack_128,param_4);
    FUN_1086e76d4(auStack_d8,param_5);
    puVar2 = &uStack_a0;
    func_0x000107c29838(puVar2,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
    uVar6 = *(undefined8 *)(unaff_x19 + 0x68);
    plStack_188 = (long *)*param_6;
    *param_6 = 0;
    pcStack_88 = FUN_10877d0a8;
    ppuStack_80 = &PTR_FUN_110a6e168;
    func_0x00010877e3fc();
    func_0x000107c27994();
    func_0x000107c27994(puVar2 + 3,&pcStack_140);
    func_0x00010869fbb8(puVar2 + 6,auStack_128);
    FUN_1086e76d4(puVar2 + 0x10,auStack_d8);
    puVar2[0x18] = lStack_98;
    puVar2[0x17] = uStack_a0;
    if (lStack_98 != 0) {
      do {
        func_0x000107c3332c();
      } while (extraout_w10 != 0);
    }
    puVar2[0x19] = unaff_x19;
    puStack_78 = puVar2;
    FUN_108762d94(auStack_180,uVar6);
    func_0x00010877e288();
    plVar5 = plStack_188;
    plStack_188 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      func_0x00010877def8();
    }
    func_0x00010877df90();
    func_0x00010877df54();
    plVar5 = *(long **)(*plVar5 + 0xf0);
    func_0x000107c2884c(auStack_1b0,auStack_180);
    (**(code **)(*plVar5 + 0x50))(plVar5,auStack_1b0);
    func_0x000107c33364();
    func_0x00010877e2ec();
    ppcVar3 = &pcStack_158;
    FUN_10877a8cc(ppcVar3);
  }
  else {
    func_0x00010877df90();
    func_0x00010877df54();
    pcStack_158 = (code *)CONCAT44(pcStack_158._4_4_,3);
    func_0x000107c29518(&pcStack_88,*param_1 + 0xf0,&pcStack_158);
    func_0x00010877dfd0(pcStack_88);
    uStack_148 = 0;
    pcStack_140 = (code *)0x0;
    pcStack_158 = (code *)(extraout_x8_00 + 0x10);
    uStack_150 = 0;
    uStack_138 = 0x86;
    func_0x000107c28b10();
    func_0x000107c2882c();
    func_0x00010877df90();
    func_0x00010877df54();
    FUN_10877a908();
    ppcVar3 = &pcStack_88;
    func_0x000107c29578(ppcVar3);
  }
  func_0x000107c33320(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010877df7c();
    func_0x00010877e2ec();
    ppcVar3 = &pcStack_158;
    FUN_10877a8cc();
    func_0x00010877df4c();
    func_0x000107c288e8(ppcVar3 + 0x17);
    func_0x00010086ab34(ppcVar3 + 0x10);
    FUN_1088f9cb4(ppcVar3 + 6);
    ppcStack_208 = ppcVar3 + 3;
    func_0x000100100fd4(&ppcStack_208);
    return ppcVar3 + 3;
  }
  return ppcVar3;
}



/* Entry: 10877a8cc; end: 10877a907;  */

/* WARNING: Possible PIC construction at 0x00010877a8f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010877a8fc) */
/* WARNING: Removing unreachable block (ram,0x00010877e4ac) */

long FUN_10877a8cc(long param_1)

{
  long lStack_48;
  
  func_0x000107c288e8(param_1 + 0xb8);
  func_0x00010086ab34(param_1 + 0x80);
  FUN_1088f9cb4(param_1 + 0x30);
  lStack_48 = param_1 + 0x18;
  func_0x000100100fd4(&lStack_48);
  return param_1 + 0x18;
}



/* Entry: 10877a908; end: 10877aa8f;  */

void FUN_10877a908(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 auStack_98 [16];
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  func_0x000107c29838(auStack_98,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  puVar5 = (undefined8 *)0x188;
  __Znwm();
  plVar6 = puVar5 + 1;
  *plVar6 = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110a6e128;
  puVar1 = puVar5 + 3;
  puStack_70 = (undefined8 *)*param_6;
  *param_6 = 0;
  uStack_78 = *param_7;
  *param_7 = 0;
  FUN_10878b20c(puVar1,auStack_98,param_2,param_3,param_4,param_5,&puStack_70,&uStack_78,param_8,
                param_9);
  func_0x00010877e054();
  if (puStack_70 != (undefined8 *)0x0) {
    func_0x00010877def8();
  }
  puStack_80 = puVar5;
  puStack_88 = puVar1;
  if ((puVar5[5] == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_70 = puVar1;
    puStack_68 = puVar5;
    func_0x000107c33330();
    func_0x00010877e138();
  }
  iVar4 = (int)auStack_98;
  func_0x000107c288e8();
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_70 = puVar1;
  puStack_68 = puVar5;
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x00010877e138();
  if (iVar4 != 0) {
    func_0x000107c333cc();
  }
  FUN_10877d084(&puStack_88);
  return;
}



/* Entry: 10877aa90; end: 10877abd3;  */

void FUN_10877aa90(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  long *unaff_x26;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = param_2;
  func_0x00010877e1d8();
  *puVar1 = &PTR____cxa_pure_virtual_110a6e208;
  func_0x00010877e1a0();
  uStack_70 = 0;
  func_0x00010877e3d8();
  puVar1[2] = 0;
  func_0x00010877e464();
  FUN_10877d2a4(&uStack_70);
  uStack_88 = uStack_68;
  uStack_90 = uStack_70;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  func_0x00010877e21c();
  func_0x000107c27f9c(&uStack_78);
  func_0x000107c27fec(&uStack_70);
  func_0x000107c288b0();
  func_0x000107c2887c(puVar1 + 2,(ulong)&uStack_90 | 8);
  func_0x000107c27f98((ulong)&uStack_90 | 8);
  func_0x000107c333f0();
  *puVar1 = &PTR_FUN_110a6e190;
  lVar2 = *unaff_x26;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c33340();
    } while (extraout_w10 != 0);
  }
  puStack_98 = puVar1;
  FUN_10877a590(param_2,param_3,param_4,param_5,param_6,&puStack_98);
  if (puStack_98 != (undefined8 *)0x0) {
    func_0x00010877def8();
  }
  return;
}



/* Entry: 10877abd4; end: 10877adef;  */

void FUN_10877abd4(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined ***pppuVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *extraout_x8;
  long lVar4;
  undefined *puVar5;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [32];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined4 uStack_48;
  
  ppuStack_90 = &PTR_FUN_110a8ea18;
  uStack_88 = 0;
  uStack_48 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_5f = 0;
  uStack_67 = 0;
  uStack_60 = 0;
  pppuVar1 = &ppuStack_90;
  func_0x0001086d0f30();
  func_0x00010877e478(*(undefined8 *)(*param_2 + 0x108));
  func_0x000107c29ee4(auStack_b0,*pppuVar1 + 3);
  FUN_1086c77e0(&ppuStack_90);
  func_0x000107c287d0();
  func_0x00010877e404();
  func_0x000107c29ee4(auStack_b0,param_3);
  pppuVar1 = &ppuStack_90;
  FUN_1086c1e2c();
  func_0x000107c287d0();
  func_0x00010877e404();
  func_0x00010877e478(*(undefined8 *)(*param_2 + 0x108));
  func_0x00010877dee4();
  (*extraout_x8)();
  uStack_68 = SUB81(pppuVar1,0);
  uStack_67 = (undefined7)((ulong)pppuVar1 >> 8);
  func_0x00010877e478(*(undefined8 *)(*param_2 + 0x108));
  ppuVar6 = *pppuVar1;
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  plVar3 = puVar2 + 1;
  *puVar2 = &PTR____cxa_pure_virtual_110a6e208;
  func_0x000108673220();
  *puVar2 = &PTR_FUN_110a6fb58;
  lVar4 = param_2[0x10];
  lVar7 = param_2[0xf];
  puVar2[4] = param_2[0x10];
  puVar2[3] = lVar7;
  if (lVar4 != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10 != 0);
  }
  puVar5 = ppuVar6[0x4b];
  puVar8 = ppuVar6[0x4a];
  puVar2[6] = ppuVar6[0x4b];
  puVar2[5] = puVar8;
  if (puVar5 != (undefined *)0x0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10_00 != 0);
  }
  lVar4 = *plVar3;
  *param_1 = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x000107c33340();
    } while (extraout_w10_01 != 0);
  }
  FUN_108848684(auStack_b0);
  puStack_b8 = puVar2;
  FUN_10877a590(param_2,param_3,auStack_b0,&ppuStack_90,param_4,&puStack_b8);
  if (puStack_b8 != (undefined8 *)0x0) {
    func_0x00010877def8();
  }
  func_0x000107c27914(auStack_b0);
  FUN_1088f9cb4(&ppuStack_90);
  return;
}



/* Entry: 10877adf0; end: 10877b093;  */

void FUN_10877adf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 in_ZR;
  int iVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  long unaff_x19;
  undefined8 *in_register_00005008;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000088;
  
  func_0x00010877e5a8();
  func_0x00010877de68();
  in_stack_00000030 = (undefined8 *)CONCAT44(in_stack_00000030._4_4_,0x11);
  func_0x00010877e4a0(&stack0x00000070);
  uVar2 = in_stack_00000070;
  func_0x000107c278b8(&stack0x00000030,&DAT_10f4b05df);
  func_0x000107c278b8(&stack0x00000058,(&PTR_s_Unknown_110a6d860)[param_6]);
  func_0x000107c28b34(uVar2,&stack0x00000030,&stack0x00000058);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000058);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000030);
  func_0x00010877dfd0(in_stack_00000070);
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000030 = (undefined8 *)(extraout_x8 + 0x10);
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000050 = 0x159;
  func_0x000107c28b10();
  func_0x000107c2882c(&stack0x00000030);
  func_0x00010877df90();
  func_0x00010877df54();
  func_0x00010877e2d0();
  in_stack_00000030 = (undefined8 *)param_1;
  in_stack_00000038 = in_register_00005008;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10 != 0);
  }
  FUN_108778e08(&stack0x00000028,&stack0x00000030);
  func_0x000107c297b0(&stack0x00000030);
  func_0x000107c29838(&stack0x00000078,*(undefined8 *)(unaff_x19 + 8),
                      *(undefined8 *)(unaff_x19 + 0x10));
  puVar6 = (undefined8 *)0x420;
  __Znwm();
  in_stack_00000088 = in_stack_00000070;
  in_stack_00000030 = in_stack_00000028;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110a6e328;
  puVar1 = puVar6 + 3;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000070 = 0;
  FUN_10876805c(puVar1,&stack0x00000078,param_3,param_4,param_5,param_9,&stack0x00000030,
                &stack0x00000088);
  func_0x000107c33378();
  if (in_stack_00000030 != (undefined8 *)0x0) {
    func_0x00010877de90();
  }
  puVar3 = puVar1;
  puVar4 = puVar6;
  in_stack_00000058 = puVar1;
  in_stack_00000060 = puVar6;
  if ((puVar6[5] == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      in_stack_00000038 = puVar4;
      in_stack_00000030 = puVar3;
      func_0x00010877e178();
      puVar3 = in_stack_00000030;
      puVar4 = in_stack_00000038;
    } while (extraout_w9 != 0);
    func_0x000107c29834(puVar6 + 4,puVar1,puVar6);
    func_0x00010877e080();
  }
  puVar7 = &stack0x00000078;
  func_0x000107c288e8();
  in_stack_00000030 = puVar1;
  in_stack_00000038 = puVar6;
  do {
    func_0x00010877e178();
    iVar5 = (int)puVar7;
  } while (extraout_w9_00 != 0);
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x00010877e080();
  if (iVar5 != 0) {
    func_0x000107c29830(puVar1);
  }
  FUN_10877d5b8(&stack0x00000058);
  func_0x000107c29578(&stack0x00000070);
  return;
}



/* Entry: 10877b094; end: 10877b20f;  */

void FUN_10877b094(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int extraout_w9;
  int extraout_w9_00;
  long lVar6;
  long lStack_b0;
  long lStack_a8;
  undefined4 uStack_90;
  undefined1 auStack_80 [16];
  long lStack_70;
  long lStack_68;
  
  func_0x00010877de68();
  func_0x00010877df5c(0x12);
  func_0x00010877dfac();
  uStack_90 = 0x124;
  func_0x00010877e490();
  func_0x00010877e05c();
  func_0x00010877df90();
  func_0x00010877df54();
  lVar6 = *param_1;
  func_0x00010877e3e0();
  lVar3 = 0x128;
  __Znwm();
  lVar4 = lVar3;
  func_0x00010877e1a0();
  func_0x000107c333d8(&PTR_FUN_110a6e378);
  lVar4 = lVar4 + 0x18;
  func_0x00010877e374();
  lVar5 = lVar4;
  FUN_10876dec4(lVar4,auStack_80,&lStack_b0,param_5,param_2,param_3,param_4,lVar6 + 0x270);
  func_0x00010877e170();
  lVar6 = lVar4;
  lVar1 = lVar3;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  if ((*(long *)(lVar3 + 0x28) == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      lStack_a8 = lVar1;
      lStack_b0 = lVar6;
      func_0x00010877dec4();
      lVar6 = lStack_b0;
      lVar1 = lStack_a8;
    } while (extraout_w9 != 0);
    lVar5 = lVar3 + 0x20;
    func_0x000107c29834(lVar5,lVar4,lVar3);
    func_0x000100850084();
  }
  func_0x00010877e0f8();
  lStack_b0 = lVar4;
  lStack_a8 = lVar3;
  do {
    func_0x00010877dec4();
    iVar2 = (int)lVar5;
  } while (extraout_w9_00 != 0);
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x000100850084();
  if (iVar2 != 0) {
    func_0x00010877e31c();
  }
  FUN_10877d608(&lStack_70);
  func_0x00010877e150();
  return;
}



/* Entry: 10877b210; end: 10877b38b;  */

void FUN_10877b210(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 in_ZR;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int extraout_w9;
  int extraout_w9_00;
  long lVar6;
  long lStack_a0;
  long lStack_98;
  undefined4 uStack_80;
  undefined1 auStack_70 [16];
  long lStack_60;
  long lStack_58;
  
  func_0x00010877de68();
  func_0x00010877df5c(0x13);
  func_0x00010877dfac();
  uStack_80 = 0x12e;
  func_0x00010877e490();
  func_0x00010877e05c();
  func_0x00010877df90();
  func_0x00010877df54();
  lVar6 = *param_1;
  func_0x00010877e3e0();
  lVar3 = 0x118;
  __Znwm();
  lVar4 = lVar3;
  func_0x00010877e548();
  func_0x000107c333d8(&PTR_FUN_110a6e3c8);
  lVar4 = lVar4 + 0x18;
  func_0x00010877e374();
  lVar5 = lVar4;
  FUN_10876ef34(lVar4,auStack_70,&lStack_a0,param_4,param_2,param_3,lVar6 + 0x270);
  func_0x00010877e170();
  lVar6 = lVar4;
  lVar1 = lVar3;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  if ((*(long *)(lVar3 + 0x28) == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      lStack_98 = lVar1;
      lStack_a0 = lVar6;
      func_0x00010877df2c();
      lVar6 = lStack_a0;
      lVar1 = lStack_98;
    } while (extraout_w9 != 0);
    func_0x00010877e258();
    func_0x000100850084();
  }
  func_0x00010877e0f8();
  lStack_a0 = lVar4;
  lStack_98 = lVar3;
  do {
    func_0x00010877df2c();
    iVar2 = (int)lVar5;
  } while (extraout_w9_00 != 0);
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x000100850084();
  if (iVar2 != 0) {
    func_0x000107c29830(lVar4);
  }
  FUN_10877d658(&lStack_60);
  func_0x00010877e150();
  return;
}



/* Entry: 10877b38c; end: 10877b533;  */

void FUN_10877b38c(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar2;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w10;
  long *unaff_x19;
  long unaff_x22;
  long alStack_b0 [2];
  long alStack_70 [3];
  
  func_0x000107c3340c();
  func_0x000107c33328();
  func_0x000107c33354(alStack_70);
  func_0x000107c33338();
  func_0x000107c333e4();
  func_0x000107c33364();
  func_0x00010877e3fc();
  func_0x000107c33348();
  func_0x000107c333d4(&PTR_FUN_110a6e418);
  *(undefined1 *)(alStack_70[0] + 200) = 0;
  func_0x000107c33400();
  func_0x000107c333f0();
  func_0x000107c333a8();
  func_0x000107c27f9c(&stack0xffffffffffffffa8);
  func_0x000107c27fec(&stack0xffffffffffffff60);
  func_0x000107c3341c();
  uVar2 = 0x88;
  __Znwm();
  func_0x000107c33424();
  func_0x000107c33408(&PTR_FUN_110a6e458);
  func_0x000107c3342c();
  FUN_10876d33c();
  func_0x000107c333fc();
  func_0x000107c33388();
  if ((*(long *)(unaff_x22 + 0x28) == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      func_0x000107c333b8();
    } while (extraout_w9 != 0);
    func_0x000107c33330();
    func_0x000107c33368();
  }
  func_0x000107c333d0();
  do {
    func_0x000107c333b8();
    iVar1 = (int)uVar2;
  } while (extraout_w9_00 != 0);
  func_0x000107c333e8();
  func_0x000107c3339c();
  func_0x000107c33368();
  if (iVar1 != 0) {
    func_0x000107c333cc();
  }
  FUN_10877d6ec(&stack0xffffffffffffffa8);
  *unaff_x19 = alStack_b0[0];
  if (alStack_b0[0] != 0) {
    do {
      func_0x000107c33340();
    } while (extraout_w10 != 0);
  }
  func_0x00010877bc80(alStack_b0);
  func_0x000107c3338c();
  return;
}



/* Entry: 10877b534; end: 10877b727;  */

/* WARNING: Removing unreachable block (ram,0x00010877b720) */

void FUN_10877b534(long *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long unaff_x23;
  long unaff_x24;
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_68;
  
  func_0x000107c3340c();
  func_0x000107c3333c();
  uStack_68 = extraout_x8;
  func_0x00010877e1d8();
  plVar2 = param_1;
  func_0x00010877e188(&PTR_DAT_110a6e520);
  func_0x00010877e200();
  func_0x00010877e3fc();
  func_0x000107c33348();
  func_0x000107c333d4(&PTR_FUN_110a6e550);
  *(undefined1 *)(plVar2 + 0x19) = 0;
  func_0x00010877e1c4();
  func_0x000107c27f9c(auStack_d0);
  func_0x00010877e118();
  func_0x000107c27f9c(auStack_f8);
  func_0x000107c27fec(auStack_d0);
  func_0x00010877e3f0();
  func_0x00010877e43c();
  func_0x00010877e434();
  func_0x000107c27f9c(&pcStack_98);
  *param_1 = (long)&PTR_DAT_110a6e4a8;
  lVar1 = param_1[1];
  *unaff_x19 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c33340();
    } while (extraout_w10 != 0);
  }
  func_0x00010877e298();
  func_0x000107c29838(unaff_x23 + 0x18,*(undefined8 *)(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  pcStack_98 = FUN_10877d860;
  ppuStack_90 = &PTR_FUN_110a6e5d0;
  func_0x00010877e480();
  func_0x00010877e3b4();
  *(long *)(unaff_x24 + 0x20) = lStack_b0;
  *(undefined8 *)(unaff_x24 + 0x18) = uStack_b8;
  if (lStack_b0 != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010877e4e4();
  func_0x00010877e390();
  FUN_108763460();
  func_0x00010877df3c();
  if (param_1 != (long *)0x0) {
    func_0x00010877de90();
  }
  func_0x00010877e384();
  func_0x00010877e1f8();
  plVar2 = *(long **)(*param_1 + 0xf0);
  func_0x00010877e3c0();
  func_0x00010877e3a8(*(undefined8 *)(*plVar2 + 0x50));
  func_0x00010877e04c();
  func_0x00010877e30c();
  FUN_10877b728();
  func_0x000107c33320(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010877e04c();
  func_0x00010877e30c();
  FUN_10877b728(auStack_d0);
  func_0x00010877e214();
  func_0x00010877dfdc();
  func_0x00010877e4cc();
  func_0x000100100fd4(&stack0xfffffffffffffea8);
  return;
}



/* Entry: 10877b728; end: 10877b743;  */

void FUN_10877b728(void)

{
  func_0x00010877e4cc();
  func_0x000100100fd4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 10877b744; end: 10877b93b;  */

/* WARNING: Removing unreachable block (ram,0x00010877b934) */

void FUN_10877b744(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long *unaff_x19;
  long unaff_x20;
  long *plVar2;
  long unaff_x23;
  long unaff_x24;
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_68;
  
  func_0x000107c3340c();
  func_0x000107c3333c();
  uStack_68 = extraout_x8;
  func_0x00010877e1d8();
  func_0x00010877e188(&PTR_DAT_110a6e670);
  func_0x00010877e200();
  lVar1 = 0xc0;
  __Znwm();
  func_0x000107c33348();
  func_0x000107c333d4(&PTR_FUN_110a6e6a0);
  *(undefined1 *)(lVar1 + 0xb8) = 0;
  func_0x00010877e1c4();
  func_0x000107c27f9c(auStack_d0);
  func_0x00010877e118();
  func_0x000107c27f9c(auStack_f8);
  func_0x000107c27fec(auStack_d0);
  func_0x00010877e3f0();
  func_0x00010877e43c();
  func_0x00010877e434();
  func_0x000107c27f9c(&pcStack_98);
  *param_1 = (long)&PTR_FUN_110a6e5f8;
  lVar1 = param_1[1];
  *unaff_x19 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c33340();
    } while (extraout_w10 != 0);
  }
  func_0x00010877e298();
  func_0x000107c29838(unaff_x23 + 0x18,*(undefined8 *)(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  pcStack_98 = FUN_10877dc00;
  ppuStack_90 = &PTR_FUN_110a6e720;
  func_0x00010877e480();
  func_0x00010877e3b4();
  *(long *)(unaff_x24 + 0x20) = lStack_b0;
  *(undefined8 *)(unaff_x24 + 0x18) = uStack_b8;
  if (lStack_b0 != 0) {
    do {
      func_0x000107c3332c();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010877e4e4();
  func_0x00010877e390();
  FUN_108762ff8();
  func_0x00010877df3c();
  if (param_1 != (long *)0x0) {
    func_0x00010877de90();
  }
  func_0x00010877e384();
  func_0x00010877e1f8();
  plVar2 = *(long **)(*param_1 + 0xf0);
  func_0x00010877e3c0();
  func_0x00010877e3a8(*(undefined8 *)(*plVar2 + 0x50));
  func_0x00010877e04c();
  func_0x00010877e30c();
  FUN_10877b93c();
  func_0x000107c33320(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010877e04c();
  func_0x00010877e30c();
  FUN_10877b93c(auStack_d0);
  func_0x00010877e214();
  func_0x00010877dfdc();
  func_0x00010877e4cc();
  func_0x000100100fd4(&stack0xfffffffffffffea8);
  return;
}



/* Entry: 10877b93c; end: 10877b957;  */

void FUN_10877b93c(void)

{
  func_0x00010877e4cc();
  func_0x000100100fd4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 10877b958; end: 10877b9db;  */

void FUN_10877b958(long *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  long *plStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  *(undefined1 *)(param_2 + 0x40) = 1;
  func_0x000107c289cc(auStack_40);
  plStack_50 = (long *)(param_2 + 0x48);
  lStack_48 = param_2 + 0x50;
  func_0x000107c289d8(&plStack_50,auStack_40);
  func_0x000107c289dc(auStack_40);
  if (*(long *)(param_2 + 0x20) == 0) {
    func_0x000107c28850(param_2 + 0x50);
  }
  lVar1 = *(long *)(param_2 + 0x48);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c33340();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10877b9dc; end: 10877ba0b;  */

void FUN_10877b9dc(long param_1)

{
  func_0x000107c29828((undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x18),
                      *(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  func_0x000107c297b0(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10877ba0c; end: 10877ba33;  */

void FUN_10877ba0c(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c297b0(&uStack_20);
  return;
}



/* Entry: 10877ba34; end: 10877bc0b;  */

void FUN_10877ba34(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  
  puStack_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  puStack_80 = (undefined8 *)0x0;
  uVar2 = *(ulong *)(param_1 + 0x20);
  if (uVar2 == 0) {
    lVar3 = 0;
  }
  else {
    if (uVar2 >> 0x3c != 0) {
      FUN_10877bc9c();
LAB_10877bbf0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10877bbf4);
      (*pcVar1)();
    }
    FUN_10877bcb0(&puStack_78,uVar2,0,&puStack_80);
    puVar8 = (undefined8 *)((long)puStack_70 - ((long)puStack_88 - (long)puStack_90));
    _memcpy(puVar8);
    puVar4 = puStack_80;
    puStack_80 = puStack_60;
    puStack_88 = puStack_68;
    puStack_68 = puStack_90;
    puStack_60 = puVar4;
    puStack_78 = puStack_90;
    puStack_70 = puStack_90;
    puStack_90 = puVar8;
    FUN_10877bd10(&puStack_78);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  lVar9 = *(long *)(param_1 + 0x18);
  lVar3 = lVar9 + lVar3 * 0x28;
  do {
    puVar4 = puStack_88;
    puVar8 = puStack_90;
    if (lVar9 == lVar3) {
      for (; puVar8 != puVar4; puVar8 = puVar8 + 2) {
        FUN_108777944(*puVar8);
      }
      func_0x00010877bd58(&puStack_90);
      return;
    }
    if (puStack_88 < puStack_80) {
      lVar5 = *(long *)(lVar9 + 0x20);
      uVar10 = *(undefined8 *)(lVar9 + 0x18);
      puStack_88[1] = *(undefined8 *)(lVar9 + 0x20);
      *puStack_88 = uVar10;
      if (lVar5 != 0) {
        do {
          func_0x000107c333c4();
          puVar4 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      puVar4 = puVar4 + 2;
    }
    else {
      lVar5 = (long)puStack_88 - (long)puStack_90 >> 4;
      uVar2 = lVar5 + 1;
      if (uVar2 >> 0x3c != 0) {
        FUN_10877bc9c();
        goto LAB_10877bbf0;
      }
      uVar6 = (long)puStack_80 - (long)puStack_90 >> 3;
      if (uVar6 <= uVar2) {
        uVar6 = uVar2;
      }
      if (0x7fffffffffffffef < (ulong)((long)puStack_80 - (long)puStack_90)) {
        uVar6 = 0xfffffffffffffff;
      }
      FUN_10877bcb0(&puStack_78,uVar6,lVar5,&puStack_80);
      lVar5 = *(long *)(lVar9 + 0x20);
      uVar10 = *(undefined8 *)(lVar9 + 0x18);
      puStack_68[1] = *(undefined8 *)(lVar9 + 0x20);
      *puStack_68 = uVar10;
      puVar4 = puStack_68;
      if (lVar5 != 0) {
        do {
          func_0x000107c333c4();
          puVar4 = extraout_x8_00;
        } while (extraout_w11_00 != 0);
      }
      puVar4 = puVar4 + 2;
      puVar7 = (undefined8 *)((long)puStack_70 - ((long)puStack_88 - (long)puStack_90));
      _memcpy(puVar7);
      puVar8 = puStack_80;
      puStack_80 = puStack_60;
      puStack_78 = puStack_90;
      puStack_68 = puStack_90;
      puStack_60 = puVar8;
      puStack_70 = puStack_90;
      puStack_90 = puVar7;
      puStack_88 = puVar4;
      FUN_10877bd10(&puStack_78);
    }
    lVar9 = lVar9 + 0x28;
    puStack_88 = puVar4;
  } while( true );
}



/* Entry: 10877bc0c; end: 10877bc37;  */

undefined8 * FUN_10877bc0c(undefined8 *param_1)

{
  func_0x000107c29828(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10877bc38; end: 10877bc9b;  */

undefined8 * FUN_10877bc38(undefined8 *param_1)

{
  if (param_1[2] != 0) {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10877bc9c; end: 10877bcaf;  */

long * FUN_10877bc9c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  ulong unaff_x20;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000107c333ec();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar3 = plVar2[1];
      while (lVar3 != plVar2[2]) {
        plVar2[2] = plVar2[2] + -0x10;
        func_0x000107c297a4();
      }
      if (*plVar2 != 0) {
        __ZdlPv();
      }
      return plVar2;
    }
    lVar3 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar3 + param_3 * 0x10;
  *unaff_x19 = lVar3;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar3 + unaff_x20 * 0x10;
  return unaff_x19;
}



/* Entry: 10877bcb0; end: 10877bd0f;  */

long * FUN_10877bcb0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x000107c333ec();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3c != 0) {
      func_0x000104bd35f4();
      lVar2 = param_1[1];
      while (lVar2 != param_1[2]) {
        param_1[2] = param_1[2] + -0x10;
        func_0x000107c297a4();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar2 = unaff_x20 << 4;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x10;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x10;
  return unaff_x19;
}



/* Entry: 10877bd10; end: 10877bd9f;  */

long * FUN_10877bd10(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x10;
    func_0x000107c297a4();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10877bda0; end: 10877bda3;  */

void FUN_10877bda0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d8d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877bda4; end: 10877bdb7;  */

void FUN_10877bda4(void)

{
  FUN_10877be98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877bdb8; end: 10877be97;  */

undefined8 FUN_10877bdb8(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x21;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  while (lVar1 != 0) {
    func_0x00010877e528();
    func_0x0001087650b0();
    func_0x00010877e1e8();
    lVar1 = unaff_x21;
  }
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x98);
  while (lVar1 != 0) {
    func_0x00010877e528();
    func_0x000108764c48();
    func_0x00010877e1e8();
    lVar1 = unaff_x21;
  }
  lVar1 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x70);
  while (lVar1 != 0) {
    func_0x00010877e528();
    func_0x0001087641cc();
    func_0x00010877e1e8();
    lVar1 = unaff_x21;
  }
  lVar1 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  lVar1 = *(long *)(param_1 + 0x48);
  while (lVar1 != 0) {
    func_0x00010877e528();
    func_0x0001087645bc();
    func_0x00010877e1e8();
    lVar1 = unaff_x21;
  }
  lVar1 = *(long *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107c288a4(param_1 + 0x28);
  param_1 = param_1 + 0x18;
  func_0x000100563fa8();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 10877be98; end: 10877beab;  */

void FUN_10877be98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877beac; end: 10877bebf;  */

void FUN_10877beac(void)

{
  FUN_10877bec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877bec0; end: 10877becf;  */

void FUN_10877bec0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a6d920;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877bed0; end: 10877bee3;  */

void FUN_10877bed0(void)

{
  func_0x00010877beec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877bee4; end: 10877bef7;  */

void FUN_10877bee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877bef8; end: 10877bf1b;  */

void FUN_10877bef8(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877bf1c; end: 10877c0b7;  */

void FUN_10877bf1c(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  int extraout_w9;
  int extraout_w9_00;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plStack_a0;
  undefined8 *puStack_98;
  undefined4 uStack_80;
  long *plStack_78;
  undefined1 auStack_70 [16];
  long *plStack_60;
  undefined8 *puStack_58;
  
  puVar9 = *(undefined8 **)(param_2 + 0x10);
  func_0x00010877df90();
  func_0x00010877df54();
  plStack_a0 = (long *)CONCAT44(plStack_a0._4_4_,6);
  func_0x000107c33354(&plStack_78);
  plVar3 = plStack_78;
  func_0x000107c33338();
  uStack_80 = 0xb4;
  func_0x000107c333e4();
  func_0x000107c33364();
  func_0x00010877df90();
  func_0x00010877df54();
  lVar7 = *plVar3;
  func_0x00010877e414();
  uVar8 = *puVar9;
  puVar4 = (undefined8 *)0x330;
  __Znwm();
  puVar5 = puVar4;
  func_0x00010877e548(lVar7 + 0x270);
  plStack_a0 = plStack_78;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110a6d9c0;
  plVar3 = puVar5 + 3;
  plStack_78 = (long *)0x0;
  plVar6 = plVar3;
  FUN_108760598(plVar3,auStack_70,uVar8,puVar9 + 1,param_1,&plStack_a0,puVar9 + 0x42,puVar9 + 0x3b,
                extraout_x8);
  func_0x000107c33388();
  plVar1 = plVar3;
  puVar5 = puVar4;
  plStack_60 = plVar3;
  puStack_58 = puVar4;
  if ((puVar4[5] == 0) || (func_0x00010877e1b8(), (bool)in_ZR)) {
    do {
      puStack_98 = puVar5;
      plStack_a0 = plVar1;
      func_0x00010877df2c();
      plVar1 = plStack_a0;
      puVar5 = puStack_98;
    } while (extraout_w9 != 0);
    func_0x000107c33330();
    func_0x000107c33368();
  }
  func_0x00010877e130();
  plStack_a0 = plVar3;
  puStack_98 = puVar4;
  do {
    func_0x00010877df2c();
    iVar2 = (int)plVar6;
  } while (extraout_w9_00 != 0);
  func_0x00010877e024();
  func_0x00010877dfc8();
  func_0x000107c33368();
  if (iVar2 != 0) {
    func_0x000107c333cc();
  }
  FUN_10877c0e4(&plStack_60);
  func_0x00010877e054();
  return;
}



/* Entry: 10877c0b8; end: 10877c0bb;  */

void FUN_10877c0b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6d9c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877c0bc; end: 10877c0cf;  */

void FUN_10877c0bc(void)

{
  func_0x00010877c0d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877c0d0; end: 10877c0e3;  */

void FUN_10877c0d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877c0e4; end: 10877c107;  */

void FUN_10877c0e4(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877c108; end: 10877c127;  */

void FUN_10877c108(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108777fe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10877c128; end: 10877c12b;  */

void FUN_10877c128(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10877c12c; end: 10877c183;  */

void FUN_10877c12c(long *param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  int extraout_w10;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != 0) && ((*(long *)(param_2 + 0x10) == 0 || (func_0x00010877e1b8(), (bool)in_ZR))))
  {
    if (param_3 != 0) {
      do {
        func_0x000107c3332c();
      } while (extraout_w10 != 0);
    }
    func_0x000107c29834(param_2 + 8);
    func_0x000100850084();
    return;
  }
  return;
}



/* Entry: 10877c184; end: 10877c187;  */

void FUN_10877c184(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6da28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877c188; end: 10877c19b;  */

void FUN_10877c188(void)

{
  FUN_10877c32c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877c19c; end: 10877c1a3;  */

void FUN_10877c19c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877c1a4; end: 10877c1df;  */

undefined8 * FUN_10877c1a4(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10877c1e0(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x30);
  return param_1;
}



/* Entry: 10877c1e0; end: 10877c24f;  */

void FUN_10877c1e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001086cf310(param_1,param_4);
    FUN_10877c250(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x0001086cf414(&uStack_40);
  return;
}



/* Entry: 10877c250; end: 10877c283;  */

void FUN_10877c250(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10877c284();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10877c284; end: 10877c297;  */

void FUN_10877c284(void)

{
  FUN_10877c298();
  return;
}



/* Entry: 10877c298; end: 10877c32b;  */

long FUN_10877c298(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x30) {
    func_0x0001086c1dd8(param_4,param_2);
    param_4 = lStack_38 + 0x30;
  }
  uStack_48 = 1;
  FUN_1086cf3ac(&uStack_60);
  return param_4;
}



/* Entry: 10877c32c; end: 10877c343;  */

void FUN_10877c32c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6da28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877c344; end: 10877c397;  */

void FUN_10877c344(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877c398; end: 10877c3ab;  */

void FUN_10877c398(void)

{
  func_0x00010877c368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877c3ac; end: 10877c3ff;  */

void FUN_10877c3ac(undefined8 param_1)

{
  long unaff_x19;
  long lVar1;
  uint uStack_38;
  
  func_0x00010877e24c();
  lVar1 = *(long *)(unaff_x19 + 0x10);
  do {
    func_0x00010877de78();
    if ((int)param_1 != 0) {
      func_0x00010877c4dc(lVar1 + 0x98);
      func_0x00010877e504();
      FUN_10877c50c();
      *(undefined1 *)(lVar1 + 0xd8) = 1;
      func_0x00010877de50();
      return;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 10877c400; end: 10877c43b;  */

void FUN_10877c400(void)

{
  undefined1 auStack_28 [8];
  
  func_0x000107c33418();
  FUN_10877c43c();
  func_0x00010877e32c();
  func_0x000107c27f9c(auStack_28);
  return;
}



/* Entry: 10877c43c; end: 10877c463;  */

void FUN_10877c43c(long param_1)

{
  func_0x000107c31510();
  func_0x000107c333d4(&PTR_FUN_110a6dab8);
  *(undefined1 *)(param_1 + 0xd8) = 0;
  return;
}



/* Entry: 10877c464; end: 10877c467;  */

undefined8 * FUN_10877c464(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6dab8;
  func_0x00010877c4ac(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877c468; end: 10877c47b;  */

void FUN_10877c468(void)

{
  FUN_10877c47c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877c47c; end: 10877c50b;  */

undefined8 * FUN_10877c47c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6dab8;
  func_0x00010877c4ac(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 10877c50c; end: 10877c53b;  */

void FUN_10877c50c(void)

{
  func_0x00010877e57c();
  FUN_10877c53c();
  return;
}



/* Entry: 10877c53c; end: 10877c57f;  */

void FUN_10877c53c(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c333ec();
  FUN_10875fdbc();
  iVar1 = *(int *)(unaff_x20 + 0x38);
  if (iVar1 != -1) {
    func_0x00010877e2a8(&PTR_FUN_110a6dae8);
    *(int *)(unaff_x19 + 0x38) = iVar1;
  }
  return;
}



/* Entry: 10877c580; end: 10877c593;  */

void FUN_10877c580(undefined8 *param_1,undefined4 *param_2)

{
  *(undefined4 *)*param_1 = *param_2;
  return;
}



/* Entry: 10877c594; end: 10877c5a7;  */

void FUN_10877c594(void)

{
  func_0x00010877c5b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877c5a8; end: 10877c5bb;  */

void FUN_10877c5a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877c5bc; end: 10877c5df;  */

void FUN_10877c5bc(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877c5e0; end: 10877c5e3;  */

void FUN_10877c5e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6db58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877c5e4; end: 10877c5f7;  */

void FUN_10877c5e4(void)

{
  func_0x00010877c600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877c5f8; end: 10877c60b;  */

void FUN_10877c5f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877c60c; end: 10877c62f;  */

void FUN_10877c60c(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10877c630; end: 10877c687;  */

void FUN_10877c630(long *param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  int extraout_w10;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != 0) && ((*(long *)(param_2 + 0x10) == 0 || (func_0x00010877e1b8(), (bool)in_ZR))))
  {
    if (param_3 != 0) {
      do {
        func_0x000107c3332c();
      } while (extraout_w10 != 0);
    }
    func_0x000107c29834(param_2 + 8);
    func_0x000100850084();
    return;
  }
  return;
}



/* Entry: 10877c688; end: 10877c68b;  */

void FUN_10877c688(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6dba8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10877c68c; end: 10877c69f;  */

void FUN_10877c68c(void)

{
  func_0x00010877c6a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10877c6a0; end: 10877c6b3;  */

void FUN_10877c6a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008510ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10877c6b4; end: 10877c6d7;  */

void FUN_10877c6b4(long param_1)

{
  func_0x000107c3335c();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}


