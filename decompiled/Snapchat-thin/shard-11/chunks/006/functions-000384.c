/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086f3f10; end: 1086f3f47;  */

long FUN_1086f3f10(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_1086e777c();
  }
  else {
    FUN_1086e8f1c();
  }
  return param_1;
}



/* Entry: 1086f3f48; end: 1086f3fe7;  */

void FUN_1086f3f48(long param_1,int param_2)

{
  undefined1 in_ZR;
  
  func_0x00010086c74c();
  *(undefined4 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  func_0x00010086c7fc();
  while( true ) {
    func_0x00010086ca3c();
    func_0x00010086ca60();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    while( true ) {
      func_0x0001086f4754();
      in_ZR = param_2 == 1;
      if ((bool)in_ZR) break;
      func_0x00010086ca3c();
    }
    ___cxa_begin_catch(param_1);
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1086f3fe8; end: 1086f4113;  */

void FUN_1086f3fe8(long param_1,uint param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined1 auStack_b0 [24];
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  if (*(char *)(param_1 + 0x7c) == '\x01') {
    plVar2 = *(long **)(param_1 + 0x38);
    uStack_88 = 0;
    uStack_80 = 0;
    ppuStack_98 = &PTR_FUN_110a609a8;
    uStack_90 = 0;
    uStack_78 = 0x6b;
    func_0x0001086f4774();
    func_0x0001086f4744((long)*(int *)(param_1 + 0x20));
    pppuVar1 = &ppuStack_98;
    func_0x000107c28824(pppuVar1,auStack_b0);
    func_0x0001086f4734();
    FUN_1086f4400();
    func_0x000107c278b8(auStack_48,PTR_DAT_113268e80);
    func_0x0001086f47a4(param_2 & 0x1ff);
    func_0x000107c28824(pppuVar1,auStack_48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
    func_0x000107c2884c(auStack_70,pppuVar1);
    (**(code **)(*plVar2 + 0x50))(plVar2,auStack_70);
    func_0x0001086f4764();
    func_0x0001086f4784();
    func_0x0001086f476c();
  }
  return;
}



/* Entry: 1086f4114; end: 1086f43a3;  */

void FUN_1086f4114(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  long extraout_x8;
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [40];
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [32];
  long alStack_a0 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulong uStack_78;
  undefined1 auStack_70 [40];
  byte bStack_48;
  
  lVar1 = param_1;
  func_0x00010086d0b4(*(undefined4 *)(param_1 + 0x20));
  func_0x000107c29fbc(alStack_a0,*(undefined8 *)(lVar1 + 0x28));
  if ((bStack_48 & 1) == 0) {
    func_0x0001086f480c();
  }
  else {
    uStack_d0 = CONCAT44(uStack_7c,uStack_80);
    uStack_c8 = uStack_78;
    func_0x000107c279d4(auStack_c0,auStack_70);
  }
  func_0x000107c293b0(alStack_a0);
  if ((uStack_c8 & 1) == 0) {
    FUN_1086f43a4(param_1);
    func_0x0001086f47b4();
    alStack_a0[2] = 0;
    alStack_a0[3] = 0;
    alStack_a0[0] = extraout_x8 + 0x10;
    alStack_a0[1] = 0;
    uStack_80 = 0x6a;
    func_0x000107c278b8(auStack_110,&DAT_10f3811b7);
    func_0x0001086f4744((long)*(int *)(param_1 + 0x20));
    plVar3 = alStack_a0;
    func_0x000107c28824(plVar3,auStack_110);
    func_0x0001086f4794();
    func_0x0001086f4734();
    FUN_1086f4400();
    func_0x0001086f478c();
    func_0x000107c2884c(auStack_f8,plVar3);
    func_0x0001086f47e0(*(undefined8 *)(*param_2 + 0x50));
    func_0x000107c2882c(auStack_f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
    func_0x000107c2882c(alStack_a0);
  }
  else {
    func_0x000107c279d4();
    uVar2 = uStack_d0;
    func_0x0001086f7ea8(uStack_d0,alStack_a0,param_2,param_3);
    func_0x000107c279dc(alStack_a0);
    if ((int)uVar2 == 0) {
      uVar4 = 0x5901ec;
      if (*(char *)(param_1 + 0x50) == '\x01' && param_2 == *(long **)(param_1 + 0x48)) {
        uVar4 = 0x5901f0;
      }
      else {
        func_0x000107c279d4(auStack_150,param_3);
        func_0x0001086f47e8();
        func_0x000107c279dc(auStack_150);
        if ((*(byte *)(param_1 + 0x50) & (long)param_2 < *(long *)(param_1 + 0x48)) != 0) {
          uVar4 = 0x5901ed;
        }
      }
    }
    else {
      func_0x000107c279d4(auStack_130,auStack_c0);
      func_0x0001086f47e8();
      func_0x0001086f475c();
      uVar4 = 0x5901ee;
    }
    FUN_1086f3fe8(param_1,uVar4);
  }
  func_0x0001086f47f4();
  return;
}



/* Entry: 1086f43a4; end: 1086f43ff;  */

void FUN_1086f43a4(long param_1)

{
  undefined1 auStack_50 [8];
  undefined1 uStack_48;
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  func_0x00010086d0b4(*(undefined4 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  FUN_108866cfc();
  auStack_50[0] = 0;
  uStack_48 = 0;
  auStack_40[0] = 0;
  uStack_28 = 0;
  FUN_1086f45a4(param_1 + 0x48,auStack_50);
  func_0x000107c279dc(auStack_40);
  return;
}



/* Entry: 1086f4400; end: 1086f444b;  */

undefined8 FUN_1086f4400(undefined8 param_1,undefined8 param_2)

{
  func_0x0001086f47c4(param_1,PTR_DAT_113268e88);
  func_0x0001086f47a4((uint)param_2 & 499);
  func_0x0001086f47cc();
  func_0x0001086f4728();
  return param_2;
}



/* Entry: 1086f444c; end: 1086f4497;  */

undefined8 FUN_1086f444c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001086f47c4(param_1,PTR_DAT_113268e78);
  func_0x0001086f47a4((uint)param_2 & 0x1eb);
  func_0x0001086f47cc();
  func_0x0001086f4728();
  return param_2;
}



/* Entry: 1086f4498; end: 1086f45a3;  */

void FUN_1086f4498(long param_1,int param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  undefined **ppuStack_50;
  ulong uStack_48;
  ulong auStack_40 [2];
  undefined4 uStack_30;
  undefined1 uStack_28;
  
  if (param_2 == *(int *)(param_1 + 0x20)) {
    ppuStack_50 = (undefined **)((ulong)ppuStack_50 & 0xffffffffffffff00);
    uStack_48 = uStack_48 & 0xffffffffffffff00;
    auStack_40[0] = auStack_40[0] & 0xffffffffffffff00;
    uStack_28 = 0;
    FUN_1086f45a4(param_1 + 0x48,&ppuStack_50);
    func_0x000107c279dc(auStack_40);
    plVar2 = *(long **)(param_1 + 0x38);
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    ppuStack_50 = &PTR_FUN_110a609a8;
    uStack_48 = 0;
    uStack_30 = 0x6a;
    func_0x0001086f4774();
    func_0x0001086f4744((long)*(int *)(param_1 + 0x20));
    pppuVar1 = &ppuStack_50;
    func_0x000107c28824(pppuVar1,auStack_90);
    func_0x0001086f4734();
    FUN_1086f4400();
    func_0x0001086f478c();
    func_0x000107c2884c(auStack_78,pppuVar1);
    (**(code **)(*plVar2 + 0x50))(plVar2,auStack_78);
    func_0x0001086f476c();
    func_0x0001086f4784();
    func_0x0001086f4764();
  }
  return;
}



/* Entry: 1086f45a4; end: 1086f45d7;  */

undefined8 * FUN_1086f45a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  func_0x000107c28908(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1086f45d8; end: 1086f45df;  */

void FUN_1086f45d8(long param_1,int param_2)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [40];
  undefined **ppuStack_50;
  ulong uStack_48;
  ulong auStack_40 [2];
  undefined4 uStack_30;
  undefined1 uStack_28;
  
  if (param_2 == *(int *)(param_1 + 0x18)) {
    ppuStack_50 = (undefined **)((ulong)ppuStack_50 & 0xffffffffffffff00);
    uStack_48 = uStack_48 & 0xffffffffffffff00;
    auStack_40[0] = auStack_40[0] & 0xffffffffffffff00;
    uStack_28 = 0;
    FUN_1086f45a4(param_1 + 0x40,&ppuStack_50);
    func_0x000107c279dc(auStack_40);
    plVar2 = *(long **)(param_1 + 0x30);
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    ppuStack_50 = &PTR_FUN_110a609a8;
    uStack_48 = 0;
    uStack_30 = 0x6a;
    func_0x0001086f4774();
    func_0x0001086f4744((long)*(int *)(param_1 + 0x18));
    pppuVar1 = &ppuStack_50;
    func_0x000107c28824(pppuVar1,auStack_90);
    func_0x0001086f4734();
    FUN_1086f4400();
    func_0x0001086f478c();
    func_0x000107c2884c(auStack_78,pppuVar1);
    (**(code **)(*plVar2 + 0x50))(plVar2,auStack_78);
    func_0x0001086f476c();
    func_0x0001086f4784();
    func_0x0001086f4764();
  }
  return;
}



/* Entry: 1086f45e0; end: 1086f4657;  */

void FUN_1086f45e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 auStack_50 [32];
  
  func_0x00010086d0b4(*(undefined4 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  FUN_108865580();
  uStack_58 = 1;
  uStack_60 = param_2;
  func_0x000107c279d4(auStack_50,param_3);
  FUN_1086f45a4(param_1 + 0x48,&uStack_60);
  func_0x000107c279dc(auStack_50);
  return;
}



/* Entry: 1086f4658; end: 1086f465b;  */

undefined8 * FUN_1086f4658(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a66ee0;
  param_1[1] = &PTR_FUN_110a66f20;
  func_0x000107c279dc(param_1 + 0xb);
  func_0x000107c288a4(param_1 + 7);
  func_0x000107c28808(param_1 + 5);
  FUN_108687d5c(param_1 + 1);
  return param_1;
}



/* Entry: 1086f465c; end: 1086f466f;  */

void FUN_1086f465c(void)

{
  FUN_1086f4680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086f4670; end: 1086f467f;  */

undefined8 * FUN_1086f4670(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_110a66ee0;
  *param_1 = &PTR_FUN_110a66f20;
  func_0x000107c279dc(param_1 + 10);
  func_0x000107c288a4(param_1 + 6);
  func_0x000107c28808(param_1 + 4);
  FUN_108687d5c(param_1);
  return param_1 + -1;
}



/* Entry: 1086f4680; end: 1086f46e3;  */

undefined8 * FUN_1086f4680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a66ee0;
  param_1[1] = &PTR_FUN_110a66f20;
  func_0x000107c279dc(param_1 + 0xb);
  func_0x000107c288a4(param_1 + 7);
  func_0x000107c28808(param_1 + 5);
  FUN_108687d5c(param_1 + 1);
  return param_1;
}



/* Entry: 1086f46e4; end: 1086f481f;  */

void FUN_1086f46e4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR_DAT_110a66ea0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1086f4820; end: 1086f496f;  */

undefined8 * FUN_1086f4820(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [144];
  undefined1 auStack_f8 [24];
  undefined8 *puStack_e0;
  undefined8 auStack_d8 [2];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a0 [40];
  undefined8 uStack_78;
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  
  puVar4 = auStack_1a0;
  func_0x0001008695b0();
  uStack_48 = extraout_x8;
  func_0x000100869c64();
  FUN_1086f7a58(auStack_1a0,param_2);
  func_0x000100869efc(auStack_d8);
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_c8 = param_1;
  func_0x000100869f40();
  (**(code **)(*(long *)(param_3 + 8) + 0x10))(auStack_a0,(long *)(param_3 + 8));
  uStack_78 = *param_4;
  (**(code **)(param_4[1] + 0x10))(auStack_70,param_4 + 1);
  FUN_1086f4970(auStack_188,auStack_d8);
  puStack_e0 = (undefined8 *)0x0;
  puVar1 = (undefined8 *)0x98;
  __Znwm();
  *puVar1 = &PTR_FUN_110a67008;
  FUN_1086f4970(puVar1 + 1,auStack_188);
  puStack_e0 = puVar1;
  func_0x00010086a008();
  func_0x00010086ab74(auStack_f8);
  func_0x0001086f49d0(auStack_188);
  puVar2 = auStack_d8;
  func_0x0001086f49d0();
  func_0x0001086f5fb8();
  func_0x00010086ad78(uStack_48);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010086ab74(auStack_f8);
  func_0x0001086f49d0(auStack_188);
  puVar3 = auStack_d8;
  func_0x0001086f49d0();
  func_0x0001086f5fb8();
  func_0x0001086f5f4c();
  func_0x000107c32ab8();
  func_0x00010086a210();
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[2] = extraout_x8_00;
  puVar3[3] = 0;
  func_0x00010086b6d8();
  puVar3[6] = *(undefined8 *)(puVar4 + 0x30);
  (**(code **)(*(long *)(puVar4 + 0x38) + 0x10))(puVar3 + 7);
  puVar1[0xc] = puVar2[0xc];
  (**(code **)(puVar2[0xd] + 0x10))(puVar1 + 0xd,puVar2 + 0xd);
  return puVar1;
}



/* Entry: 1086f4970; end: 1086f4a07;  */

void FUN_1086f4970(long param_1,long param_2)

{
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32ab8();
  func_0x00010086a210();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x00010086b6d8();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  (**(code **)(*(long *)(param_2 + 0x38) + 0x10))(param_1 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x60) = *(undefined8 *)(unaff_x19 + 0x60);
  (**(code **)(*(long *)(unaff_x19 + 0x68) + 0x10))(unaff_x20 + 0x68,(long *)(unaff_x19 + 0x68));
  return;
}



/* Entry: 1086f4a08; end: 1086f4af3;  */

void FUN_1086f4a08(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 uStack_158;
  undefined1 auStack_150 [48];
  undefined8 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 auStack_100 [24];
  undefined8 auStack_e8 [12];
  undefined8 *puStack_88;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  func_0x0001008695b0();
  uStack_38 = extraout_x8;
  FUN_1086f4af4();
  FUN_1086f7aa0(auStack_100,param_2);
  func_0x000100869efc(auStack_80);
  func_0x0001086f5f70();
  puVar1 = auStack_e8;
  FUN_1086f4b6c(puVar1,auStack_80);
  puStack_88 = (undefined8 *)0x0;
  func_0x0001086f6020();
  *puVar1 = &PTR_FUN_110a671d8;
  FUN_1086f4b6c(puVar1 + 1,auStack_e8);
  puStack_88 = puVar1;
  func_0x00010086a008();
  func_0x0001086f6018();
  func_0x0001086f4b90(auStack_e8);
  puVar2 = auStack_80;
  func_0x0001086f4b90();
  func_0x0001086f5fb8();
  func_0x00010086ad78(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086f6018();
    func_0x0001086f4b90(auStack_e8);
    func_0x0001086f4b90(auStack_80);
    func_0x0001086f5fb8();
    func_0x0001086f5f4c();
    pcStack_108 = FUN_1086f4af4;
    puStack_120 = puVar1;
    puStack_118 = puVar2;
    puStack_110 = &stack0xfffffffffffffff0;
    func_0x000100869cf8();
    func_0x000100869d1c();
    FUN_1086f5a88(*puVar1,puVar1[1],auStack_150,0);
    func_0x000100869da8();
    func_0x000100869dbc();
    func_0x000100869dd4();
    func_0x000100868e3c(puVar2 + 0x58,uStack_158);
    func_0x000100869de0();
    func_0x000100869de8();
    func_0x000100869df0();
    return;
  }
  return;
}



/* Entry: 1086f4af4; end: 1086f4b6b;  */

void FUN_1086f4af4(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  func_0x000100869cf8();
  func_0x000100869d1c();
  FUN_1086f5a88(*unaff_x20,unaff_x20[1],auStack_50,0);
  func_0x000100869da8();
  func_0x000100869dbc();
  func_0x000100869dd4();
  func_0x000100868e3c(unaff_x19 + 0x58,uStack_58);
  func_0x000100869de0();
  func_0x000100869de8();
  func_0x000100869df0();
  return;
}



/* Entry: 1086f4b6c; end: 1086f4bb3;  */

undefined8 FUN_1086f4b6c(undefined8 param_1)

{
  func_0x00010086a210();
  func_0x0001086f5f8c();
  return param_1;
}



/* Entry: 1086f4bb4; end: 1086f4c9f;  */

void FUN_1086f4bb4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 uStack_158;
  undefined1 auStack_150 [48];
  undefined8 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined1 auStack_100 [24];
  undefined8 auStack_e8 [12];
  undefined8 *puStack_88;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  func_0x0001008695b0();
  uStack_38 = extraout_x8;
  FUN_1086f4ca0();
  FUN_1086f7b20(auStack_100,param_2);
  func_0x000100869efc(auStack_80);
  func_0x0001086f5f70();
  puVar1 = auStack_e8;
  FUN_1086f4d14(puVar1,auStack_80);
  puStack_88 = (undefined8 *)0x0;
  func_0x0001086f6020();
  *puVar1 = &PTR_FUN_110a67258;
  FUN_1086f4d14(puVar1 + 1,auStack_e8);
  puStack_88 = puVar1;
  func_0x00010086a008();
  func_0x0001086f6018();
  func_0x0001086f4d38(auStack_e8);
  puVar2 = auStack_80;
  func_0x0001086f4d38();
  func_0x0001086f5fb8();
  func_0x00010086ad78(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086f6018();
    func_0x0001086f4d38(auStack_e8);
    func_0x0001086f4d38(auStack_80);
    func_0x0001086f5fb8();
    func_0x0001086f5f4c();
    pcStack_108 = FUN_1086f4ca0;
    puStack_120 = puVar1;
    puStack_118 = puVar2;
    puStack_110 = &stack0xfffffffffffffff0;
    func_0x000100869cf8();
    func_0x000100869d1c();
    FUN_1086f5cb4(auStack_150,*puVar1,puVar1[1]);
    func_0x000100869da8();
    func_0x000100869dbc();
    func_0x000100869dd4();
    func_0x000100868e3c(puVar2 + 0x58,uStack_158);
    func_0x000100869de0();
    func_0x000100869de8();
    func_0x000100869df0();
    return;
  }
  return;
}



/* Entry: 1086f4ca0; end: 1086f4d13;  */

void FUN_1086f4ca0(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  func_0x000100869cf8();
  func_0x000100869d1c();
  FUN_1086f5cb4(auStack_50,*unaff_x20,unaff_x20[1]);
  func_0x000100869da8();
  func_0x000100869dbc();
  func_0x000100869dd4();
  func_0x000100868e3c(unaff_x19 + 0x58,uStack_58);
  func_0x000100869de0();
  func_0x000100869de8();
  func_0x000100869df0();
  return;
}



/* Entry: 1086f4d14; end: 1086f4d5b;  */

undefined8 FUN_1086f4d14(undefined8 param_1)

{
  func_0x00010086a210();
  func_0x0001086f5f8c();
  return param_1;
}



/* Entry: 1086f4d5c; end: 1086f4d63;  */

void FUN_1086f4d5c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32ab8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xa8;
    FUN_1088eba94();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086f4d64; end: 1086f4dcf;  */

void FUN_1086f4d64(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32ab8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xa8;
    FUN_1088eba94();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086f4dd0; end: 1086f4eeb;  */

void FUN_1086f4dd0(undefined8 *param_1,long *param_2,long *param_3)

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
    if (uVar8 == uVar3) goto LAB_1086f4e84;
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
    if (uVar8 == uVar3) goto LAB_1086f4e84;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_1086f4e84:
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



/* Entry: 1086f4eec; end: 1086f4f2b;  */

void FUN_1086f4eec(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000100864b68(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1086f4f2c; end: 1086f4f37;  */

void FUN_1086f4f2c(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_a0 [24];
  undefined1 uStack_88;
  long lStack_78;
  
  func_0x0001086f604c();
  func_0x0001086f5fe0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if ((long *)0x222222222222222 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010086a010();
      func_0x0001086f6094();
      for (; param_2 != unaff_x19; param_2 = param_2 + 0xf) {
        FUN_10868d098(param_4,param_2);
        param_4 = lStack_78 + 0x78;
        lStack_78 = param_4;
      }
      uStack_88 = 1;
      for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0xf) {
        FUN_1089058f8(unaff_x20);
      }
      FUN_1086f502c(auStack_a0);
      return;
    }
    lVar1 = (long)unaff_x20 * 0x78;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x78;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + (long)unaff_x20 * 0x78;
  return;
}



/* Entry: 1086f4f38; end: 1086f502b;  */

void FUN_1086f4f38(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 uStack_78;
  long lStack_68;
  
  func_0x0001086f5fe0();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_4;
  if (param_2 == (long *)0x0) {
    lVar1 = 0;
  }
  else {
    if ((long *)0x222222222222222 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010086a010();
      func_0x0001086f6094();
      for (; param_2 != unaff_x19; param_2 = param_2 + 0xf) {
        FUN_10868d098(param_4,param_2);
        param_4 = lStack_68 + 0x78;
        lStack_68 = param_4;
      }
      uStack_78 = 1;
      for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0xf) {
        FUN_1089058f8(unaff_x20);
      }
      FUN_1086f502c(auStack_90);
      return;
    }
    lVar1 = (long)unaff_x20 * 0x78;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x78;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + (long)unaff_x20 * 0x78;
  return;
}



/* Entry: 1086f502c; end: 1086f50b7;  */

long FUN_1086f502c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x78;
      FUN_1089058f8();
    }
  }
  return param_1;
}



/* Entry: 1086f50b8; end: 1086f514f;  */

void FUN_1086f50b8(long param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar1 = lVar3;
  for (uVar2 = param_2 + (lVar3 - param_4); uVar2 < param_3; uVar2 = uVar2 + 0x78) {
    FUN_10868d098(lVar1,uVar2);
    lVar1 = lVar1 + 0x78;
  }
  *(long *)(param_1 + 8) = lVar1;
  lVar1 = lVar3 + -0x78;
  param_2 = param_2 + (lVar1 - param_4);
  for (param_4 = param_4 - lVar3; param_4 != 0; param_4 = param_4 + 0x78) {
    FUN_10868d018(lVar1,param_2);
    param_2 = param_2 + -0x78;
    lVar1 = lVar1 + -0x78;
  }
  return;
}



/* Entry: 1086f5150; end: 1086f51bf;  */

void FUN_1086f5150(long param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined1 auStack_b0 [120];
  long lStack_38;
  
  for (param_3 = param_3 * 0x78; param_3 != 0; param_3 = param_3 + -0x78) {
    lStack_38 = param_1 + 0x10;
    FUN_10868cc20(auStack_b0,*param_2);
    FUN_10868d018(param_4,auStack_b0);
    FUN_1089058f8(auStack_b0);
    param_4 = param_4 + 0x78;
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 1086f51c0; end: 1086f51ef;  */

undefined8 * FUN_1086f51c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1086f51f0();
  param_1[1] = puVar1;
  param_1[1] = *puVar1;
  return param_1;
}



/* Entry: 1086f51f0; end: 1086f523b;  */

void FUN_1086f51f0(void)

{
  func_0x0001086f5208();
  return;
}



/* Entry: 1086f523c; end: 1086f5467;  */

undefined1  [16] FUN_1086f523c(long *param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  ulong unaff_x25;
  ulong uVar11;
  undefined1 auVar12 [16];
  long *aplStack_68 [3];
  
  uVar7 = param_2;
  FUN_108848654();
  uVar10 = param_1[1];
  if (uVar10 != 0) {
    uVar11 = uVar10 - 1;
    uVar9 = (uint)uVar10;
    if ((uVar10 & uVar11) == 0) {
      unaff_x25 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x25 = uVar7;
      if (uVar10 <= uVar7) {
        uVar1 = 0;
        if (uVar9 != 0) {
          uVar1 = (uint)uVar7 / uVar9;
        }
        unaff_x25 = (ulong)((uint)uVar7 - uVar1 * uVar9);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1086f5304;
          uVar4 = plVar8[1];
          if (uVar4 != uVar7) break;
          plVar6 = plVar8 + 2;
          func_0x000107c28078(plVar6,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            uVar3 = 0;
            goto LAB_1086f5438;
          }
        }
        if ((uVar10 & uVar11) == 0) {
          uVar4 = uVar4 & uVar11;
        }
        else if (uVar10 <= uVar4) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar4 / uVar10;
          }
          uVar4 = uVar4 - uVar2 * uVar10;
        }
      } while (uVar4 == unaff_x25);
    }
  }
LAB_1086f5304:
  FUN_1086f5468(aplStack_68,param_1,uVar7,param_3);
  if ((uVar10 == 0) || (*(float *)(param_1 + 4) * (float)uVar10 < (float)(param_1[3] + 1))) {
    uVar11 = 1;
    if (2 < uVar10) {
      uVar11 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar11 = uVar11 | uVar10 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    func_0x0001008649dc(param_1,uVar11);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = (int)uVar10 - 1 & uVar7;
    }
    else {
      unaff_x25 = uVar7;
      if (uVar10 <= uVar7) {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar7 / uVar10;
        }
        unaff_x25 = uVar7 - uVar11 * uVar10;
      }
    }
  }
  plVar8 = aplStack_68[0];
  lVar5 = *param_1;
  plVar6 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
    *(long **)(lVar5 + unaff_x25 * 8) = plVar6;
    if (*aplStack_68[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_68[0] + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar7 = uVar7 & uVar10 - 1;
      }
      else if (uVar10 <= uVar7) {
        uVar11 = 0;
        if (uVar10 != 0) {
          uVar11 = uVar7 / uVar10;
        }
        uVar7 = uVar7 - uVar11 * uVar10;
      }
      *(long **)(lVar5 + uVar7 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar6;
    *plVar6 = (long)aplStack_68[0];
  }
  aplStack_68[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10869a0ac(aplStack_68);
  uVar3 = 1;
LAB_1086f5438:
  auVar12._8_8_ = uVar3;
  auVar12._0_8_ = plVar8;
  return auVar12;
}



/* Entry: 1086f5468; end: 1086f54b7;  */

void FUN_1086f5468(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  func_0x00010086a010();
  puVar1 = param_1 + 2;
  func_0x000100869fec();
  *extraout_x8 = param_1;
  extraout_x8[1] = puVar1;
  extraout_x8[2] = 1;
  *param_1 = 0;
  param_1[1] = unaff_x20;
  uVar2 = *unaff_x19;
  param_1[3] = unaff_x19[1];
  param_1[2] = uVar2;
  param_1[4] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 1086f54b8; end: 1086f54bf;  */

void FUN_1086f54b8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32ab8(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x78;
    FUN_1089058f8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086f54c0; end: 1086f54f3;  */

void FUN_1086f54c0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c32ab8();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x78;
    FUN_1089058f8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086f54f4; end: 1086f551f;  */

void FUN_1086f54f4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  ppuVar1 = &PTR_PTR_113278360;
  if (*(undefined ***)(param_3 + 0x38) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_3 + 0x38);
  }
  ppuVar2 = &PTR_PTR_11326cb58;
  if ((undefined **)ppuVar1[3] != (undefined **)0x0) {
    ppuVar2 = (undefined **)ppuVar1[3];
  }
  lVar3 = (long)*(char *)(((ulong)ppuVar2[2] & 0xfffffffffffffffc) + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(((ulong)ppuVar2[2] & 0xfffffffffffffffc) + 8);
  }
  func_0x000100553394(lVar3);
  func_0x0001006963ec(&uStack_40,(ulong)ppuVar2[2] & 0xfffffffffffffffc);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000100100fec(&uStack_40);
  return;
}



/* Entry: 1086f5520; end: 1086f554b;  */

undefined8 * FUN_1086f5520(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67008;
  func_0x0001086f49d0(param_1 + 1);
  return param_1;
}



/* Entry: 1086f554c; end: 1086f555f;  */

void FUN_1086f554c(void)

{
  FUN_1086f5520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086f5560; end: 1086f5597;  */

undefined8 FUN_1086f5560(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x98;
  __Znwm(0x98);
  FUN_1086f560c();
  return uVar1;
}



/* Entry: 1086f5598; end: 1086f55d7;  */

void FUN_1086f5598(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_register_00005008;
  
  func_0x0001086f6038(param_3,param_2 + 8);
  func_0x0001086f6028(&PTR_FUN_110a67008);
  *(undefined8 *)(param_3 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_3 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x21 + 0x10);
  func_0x000100866ed4(unaff_x20 + 0x20,unaff_x21 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x21 + 0x30);
  func_0x000107c27cf8(unaff_x20 + 0x40,unaff_x21 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x21 + 0x60);
  func_0x000107c27cf8(unaff_x20 + 0x70,unaff_x21 + 0x68);
  return;
}



/* Entry: 1086f55d8; end: 1086f55ff;  */

void FUN_1086f55d8(undefined8 param_1)

{
  func_0x0001086f5fec();
  func_0x0001086f5fa8(param_1,&PTR_DAT_110a67068);
  func_0x0001086f5f54();
  return;
}



/* Entry: 1086f5600; end: 1086f560b;  */

undefined ** FUN_1086f5600(void)

{
  return &PTR_DAT_110a67068;
}



/* Entry: 1086f560c; end: 1086f56c7;  */

void FUN_1086f560c(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_register_00005008;
  
  func_0x0001086f6038();
  func_0x0001086f6028(&PTR_FUN_110a67008);
  *(undefined8 *)(param_2 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_2 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x21 + 0x10);
  func_0x000100866ed4(unaff_x20 + 0x20,unaff_x21 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x21 + 0x30);
  func_0x000107c27cf8(unaff_x20 + 0x40,unaff_x21 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x21 + 0x60);
  func_0x000107c27cf8(unaff_x20 + 0x70,unaff_x21 + 0x68);
  return;
}



/* Entry: 1086f56c8; end: 1086f5713;  */

void FUN_1086f56c8(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x186186186186187) {
    plVar1 = param_1 + 2;
    FUN_1086f5754();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x15);
  }
  else {
    FUN_1086f5748();
    plVar1 = param_1 + 2;
    func_0x0001086f57a8();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1086f5714; end: 1086f5747;  */

void FUN_1086f5714(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x0001086f57a8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1086f5748; end: 1086f5753;  */

void FUN_1086f5748(void)

{
  func_0x0001086f604c();
  FUN_1086f5778();
  return;
}



/* Entry: 1086f5754; end: 1086f5777;  */

void FUN_1086f5754(void)

{
  FUN_1086f5778();
  return;
}



/* Entry: 1086f5778; end: 1086f57bb;  */

void FUN_1086f5778(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x186186186186187) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xa8);
    return;
  }
  func_0x000104bd35f4();
  FUN_1086f57bc();
  return;
}



/* Entry: 1086f57bc; end: 1086f5843;  */

long FUN_1086f57bc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001086f6094();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0xa8) {
    FUN_1086f5844(param_4,param_2);
    param_4 = lStack_38 + 0xa8;
    lStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_1086f5850(auStack_60);
  return param_4;
}



/* Entry: 1086f5844; end: 1086f584f;  */

void FUN_1086f5844(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x0001088ef004(param_1,0,param_2);
  func_0x000107c34894(&PTR_FUN_110a8b638);
  if ((extraout_x8 & 1) != 0) {
    func_0x0001088eee38();
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  func_0x000107c296d0(unaff_x19 + 0x18);
  lVar2 = unaff_x20 + 0x30;
  func_0x000107c2809c();
  *(long *)(unaff_x19 + 0x30) = lVar2;
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001088ee94c();
  }
  *(undefined8 *)(unaff_x19 + 0x38) = uVar3;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001088ee9bc();
  }
  *(undefined8 *)(unaff_x19 + 0x40) = uVar3;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001088ee9f0();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = uVar3;
  if ((uVar1 >> 3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001088eea2c();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = uVar3;
  if ((uVar1 >> 4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x000107c2a378();
  }
  *(undefined8 *)(unaff_x19 + 0x58) = uVar3;
  if ((uVar1 >> 5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    func_0x0001088ef178();
  }
  *(undefined8 *)(unaff_x19 + 0x60) = uVar3;
  if ((uVar1 >> 6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001088eea60();
  }
  *(undefined8 *)(unaff_x19 + 0x68) = uVar3;
  if ((uVar1 >> 7 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = unaff_x21;
    func_0x0001088eea90();
  }
  *(undefined8 *)(unaff_x19 + 0x70) = uVar3;
  if ((uVar1 >> 8 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x0001088eeac4();
  }
  *(undefined8 *)(unaff_x19 + 0x78) = unaff_x21;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined4 *)(unaff_x19 + 0xa0) = *(undefined4 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x80) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x98) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x90) = uVar5;
  return;
}



/* Entry: 1086f5850; end: 1086f587f;  */

long FUN_1086f5850(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1086f5880(param_1);
  }
  return param_1;
}



/* Entry: 1086f5880; end: 1086f589f;  */

void FUN_1086f5880(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xa8;
    FUN_1088eba94();
  }
  return;
}



/* Entry: 1086f58a0; end: 1086f58cf;  */

void FUN_1086f58a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0xa8;
    FUN_1088eba94();
  }
  return;
}



/* Entry: 1086f58d0; end: 1086f58d3;  */

void FUN_1086f58d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67088;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086f58d4; end: 1086f58e7;  */

void FUN_1086f58d4(void)

{
  FUN_1086f58e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086f58e8; end: 1086f58f7;  */

void FUN_1086f58e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67088;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086f58f8; end: 1086f591b;  */

void FUN_1086f58f8(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  undefined8 in_register_00005008;
  
  lVar1 = param_2;
  func_0x000100869fec();
  param_2 = param_2 + 8;
  func_0x0001086f6028(&PTR_DAT_110a670d8);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10 != 0);
  }
  lVar2 = *(long *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086f591c; end: 1086f5933;  */

void FUN_1086f591c(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  undefined8 in_register_00005008;
  
  param_2 = param_2 + 8;
  func_0x0001086f6028(&PTR_DAT_110a670d8);
  *(undefined8 *)(param_3 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_3 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_3 + 0x18) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086f5934; end: 1086f595b;  */

void FUN_1086f5934(undefined8 param_1)

{
  func_0x0001086f5fec();
  func_0x0001086f5fa8(param_1,&PTR_DAT_110a67138);
  func_0x0001086f5f54();
  return;
}



/* Entry: 1086f595c; end: 1086f59bf;  */

undefined ** FUN_1086f595c(void)

{
  return &PTR_DAT_110a67138;
}



/* Entry: 1086f59c0; end: 1086f59e3;  */

void FUN_1086f59c0(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  undefined8 in_register_00005008;
  
  lVar1 = param_2;
  func_0x000100869fec();
  param_2 = param_2 + 8;
  func_0x0001086f6028(&PTR_DAT_110a67158);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10 != 0);
  }
  lVar2 = *(long *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086f59e4; end: 1086f59fb;  */

void FUN_1086f59e4(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  undefined8 in_register_00005008;
  
  param_2 = param_2 + 8;
  func_0x0001086f6028(&PTR_DAT_110a67158);
  *(undefined8 *)(param_3 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_3 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_3 + 0x18) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086f59fc; end: 1086f5a23;  */

void FUN_1086f59fc(undefined8 param_1)

{
  func_0x0001086f5fec();
  func_0x0001086f5fa8(param_1,&PTR_DAT_110a671b8);
  func_0x0001086f5f54();
  return;
}



/* Entry: 1086f5a24; end: 1086f5a87;  */

undefined ** FUN_1086f5a24(void)

{
  return &PTR_DAT_110a671b8;
}



/* Entry: 1086f5a88; end: 1086f5aeb;  */

undefined1  [16]
FUN_1086f5a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c32ab8();
  uStack_30 = param_3;
  uStack_28 = param_4;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x3d0) {
    func_0x000107c27994(auStack_48,unaff_x20);
    FUN_1086f51c0(&uStack_30,auStack_48);
    func_0x000107c27914(auStack_48);
  }
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 1086f5aec; end: 1086f5b17;  */

undefined8 * FUN_1086f5aec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a671d8;
  func_0x0001086f4b90(param_1 + 1);
  return param_1;
}



/* Entry: 1086f5b18; end: 1086f5b2b;  */

void FUN_1086f5b18(void)

{
  FUN_1086f5aec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086f5b2c; end: 1086f5b5f;  */

undefined8 FUN_1086f5b2c(undefined8 param_1)

{
  func_0x0001086f6020();
  FUN_1086f5bf8();
  return param_1;
}



/* Entry: 1086f5b60; end: 1086f5b83;  */

long FUN_1086f5b60(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  param_2 = param_2 + 8;
  lVar1 = param_3;
  func_0x0001086f6028(&PTR_FUN_110a671d8);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  func_0x0001086f607c();
  return param_3;
}



/* Entry: 1086f5b84; end: 1086f5bc3;  */

void FUN_1086f5b84(long param_1)

{
  func_0x0001086f5fe0();
  if (*(long *)(*(long *)(param_1 + 0x18) + 0x58) != 0) {
    func_0x0001008659a8();
  }
  func_0x0001086f6064();
  func_0x0001086f6088();
  func_0x0001086f5fd8();
  return;
}



/* Entry: 1086f5bc4; end: 1086f5beb;  */

void FUN_1086f5bc4(undefined8 param_1)

{
  func_0x0001086f5fec();
  func_0x0001086f5fa8(param_1,&PTR_DAT_110a67238);
  func_0x0001086f5f54();
  return;
}



/* Entry: 1086f5bec; end: 1086f5bf7;  */

undefined ** FUN_1086f5bec(void)

{
  return &PTR_DAT_110a67238;
}



/* Entry: 1086f5bf8; end: 1086f5c4b;  */

long FUN_1086f5bf8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  lVar1 = param_2;
  func_0x0001086f6028(&PTR_FUN_110a671d8);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x10);
  func_0x0001086f607c();
  return param_2;
}



/* Entry: 1086f5c4c; end: 1086f5c73;  */

undefined8 * FUN_1086f5c4c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c27cf8(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1086f5c74; end: 1086f5cb3;  */

void FUN_1086f5c74(undefined8 *param_1)

{
  code *pcVar1;
  undefined1 auStack_68 [72];
  
  pcVar1 = (code *)*param_1;
  func_0x00010086b6f4(auStack_68);
  (*pcVar1)(auStack_68,param_1);
  func_0x0001086f5fd8();
  return;
}



/* Entry: 1086f5cb4; end: 1086f5cef;  */

void FUN_1086f5cb4(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010086a010();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x18) {
    FUN_108699d34(param_1,unaff_x20);
  }
  return;
}



/* Entry: 1086f5cf0; end: 1086f5d1b;  */

undefined8 * FUN_1086f5cf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a67258;
  func_0x0001086f4d38(param_1 + 1);
  return param_1;
}



/* Entry: 1086f5d1c; end: 1086f5d2f;  */

void FUN_1086f5d1c(void)

{
  FUN_1086f5cf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086f5d30; end: 1086f5d63;  */

undefined8 FUN_1086f5d30(undefined8 param_1)

{
  func_0x0001086f6020();
  FUN_1086f5dfc();
  return param_1;
}



/* Entry: 1086f5d64; end: 1086f5d87;  */

long FUN_1086f5d64(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  param_2 = param_2 + 8;
  lVar1 = param_3;
  func_0x0001086f6028(&PTR_FUN_110a67258);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  func_0x0001086f607c();
  return param_3;
}



/* Entry: 1086f5d88; end: 1086f5dc7;  */

void FUN_1086f5d88(long param_1)

{
  func_0x0001086f5fe0();
  if (*(long *)(*(long *)(param_1 + 0x18) + 0x58) != 0) {
    func_0x0001008659a8();
  }
  func_0x0001086f6064();
  func_0x0001086f6088();
  func_0x0001086f5fd8();
  return;
}



/* Entry: 1086f5dc8; end: 1086f5def;  */

void FUN_1086f5dc8(undefined8 param_1)

{
  func_0x0001086f5fec();
  func_0x0001086f5fa8(param_1,&PTR_DAT_110a672b8);
  func_0x0001086f5f54();
  return;
}



/* Entry: 1086f5df0; end: 1086f5dfb;  */

undefined ** FUN_1086f5df0(void)

{
  return &PTR_DAT_110a672b8;
}



/* Entry: 1086f5dfc; end: 1086f5e4f;  */

long FUN_1086f5dfc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  int extraout_w10;
  undefined8 in_register_00005008;
  
  lVar1 = param_2;
  func_0x0001086f6028(&PTR_FUN_110a67258);
  *(undefined8 *)(lVar1 + 0x10) = in_register_00005008;
  *(undefined8 *)(lVar1 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x10);
  func_0x0001086f607c();
  return param_2;
}



/* Entry: 1086f5e50; end: 1086f5e87;  */

undefined8 FUN_1086f5e50(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm(0x58);
  FUN_1086f5ed4();
  return uVar1;
}



/* Entry: 1086f5e88; end: 1086f5e9f;  */

void FUN_1086f5e88(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 in_register_00005008;
  undefined8 uVar2;
  
  func_0x0001086f5fe0(param_3,param_2 + 8);
  func_0x0001086f6028(&PTR_DAT_110a672d8);
  *(undefined8 *)(param_3 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_3 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1086e7f0c(unaff_x19 + 0x20,unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  return;
}



/* Entry: 1086f5ea0; end: 1086f5ec7;  */

void FUN_1086f5ea0(undefined8 param_1)

{
  func_0x0001086f5fec();
  func_0x0001086f5fa8(param_1,&PTR_DAT_110a67338);
  func_0x0001086f5f54();
  return;
}



/* Entry: 1086f5ec8; end: 1086f5ed3;  */

undefined ** FUN_1086f5ec8(void)

{
  return &PTR_DAT_110a67338;
}



/* Entry: 1086f5ed4; end: 1086f5f4b;  */

void FUN_1086f5ed4(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 in_register_00005008;
  undefined8 uVar2;
  
  func_0x0001086f5fe0();
  func_0x0001086f6028(&PTR_DAT_110a672d8);
  *(undefined8 *)(param_2 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_2 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x0001008692ac();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1086e7f0c(unaff_x19 + 0x20,unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  return;
}



/* Entry: 1086f5f4c; end: 1086f60b3;  */

void FUN_1086f5f4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1086f60b4; end: 1086f627f;  */

void FUN_1086f60b4(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  long *plVar3;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  
  plVar3 = *(long **)(param_1 + 0x88);
  uStack_c0 = 0;
  uStack_b8 = 0;
  ppuStack_d0 = &PTR_FUN_110a609a8;
  uStack_c8 = 0;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0x1d0);
  func_0x000107c278b8(auStack_58,PTR_DAT_113268c40);
  lVar1 = (ulong)(param_2 - 2) + 0x8c;
  if (6 < param_2 - 2) {
    lVar1 = 0x8b;
  }
  pppuVar2 = &ppuStack_d0;
  func_0x000107c28824(pppuVar2,auStack_58,(&PTR_s_success_113269028)[lVar1]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x000107c2884c(auStack_80,pppuVar2);
  (**(code **)(*plVar3 + 0x50))(plVar3,auStack_80);
  func_0x000107c2882c(auStack_80);
  pppuVar2 = &ppuStack_d0;
  func_0x000107c2882c(pppuVar2);
  func_0x000107c31338();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_e8,param_3);
  func_0x00010bd3f128(&uStack_100,3);
  plVar3 = *(long **)(param_1 + 8);
  (**(code **)(*plVar3 + 0x10))();
  uStack_98 = uStack_f0;
  ppuStack_d0 = (undefined **)CONCAT44(ppuStack_d0._4_4_,4);
  uStack_c8 = (ulong)param_2;
  uStack_b8 = uStack_e0;
  uStack_c0 = uStack_e8;
  uStack_b0 = uStack_d8;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_a0 = uStack_f8;
  uStack_a8 = uStack_100;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_88 = 0;
  plStack_90 = plVar3;
  func_0x00010bcc46f8(pppuVar2,&ppuStack_d0);
  func_0x00010786e114(&ppuStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e8);
  return;
}



/* Entry: 1086f6280; end: 1086f635b;  */

void FUN_1086f6280(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  func_0x000107c29470(param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001086f62b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10df48f80)[param_4 - 1] * 4 + 0x1086f62bc))();
  return;
}



/* Entry: 1086f635c; end: 1086f638b;  */

undefined8 FUN_1086f635c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27914(param_1 + 0x28);
  func_0x000107c29484(param_1 + 0x10);
  func_0x000100554364();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1086f638c; end: 1086f63a7;  */

uint FUN_1086f638c(long param_1)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return 0;
  }
  uVar1 = (int)param_1 + 0xe8;
  if (*(char *)(param_1 + 0x100) == '\x01') {
    func_0x0001006760a8();
    return uVar1 ^ 1;
  }
  return 1;
}



/* Entry: 1086f63a8; end: 1086f640f;  */

void FUN_1086f63a8(void)

{
  FUN_1086f72b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086f6410; end: 1086f68bb;  */

void FUN_1086f6410(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar3;
  char cVar4;
  char cVar5;
  ulong uVar6;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long lVar7;
  long extraout_x9_02;
  long lVar8;
  long lVar9;
  long extraout_x10;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x24;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong uVar10;
  ulong unaff_x28;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [304];
  long lStack_88;
  
  func_0x000107c32b00();
  do {
    func_0x0001086f77ac();
    uVar6 = unaff_x28;
LAB_1086f6444:
    while( true ) {
      func_0x0001086f79e0();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001086f666c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10df48f84)[unaff_x26] * 4 + 0x1086f6670))();
        return;
      }
      bVar3 = 0xfbe < extraout_x8;
      cVar4 = SBORROW8(extraout_x8,0xfbf);
      cVar5 = (long)(extraout_x8 - 0xfbf) < 0;
      if ((long)extraout_x8 < 0xfc0) {
        if ((param_4 & 1) == 0) {
          if (unaff_x20 == unaff_x19) {
            return;
          }
          while( true ) {
            uVar6 = unaff_x20;
            unaff_x20 = uVar6 + 0xa8;
            cVar4 = SBORROW8(unaff_x20,unaff_x19);
            cVar5 = (long)(unaff_x20 - unaff_x19) < 0;
            if (unaff_x20 == unaff_x19) break;
            func_0x0001086f7540(*(undefined8 *)(uVar6 + 0x130));
            if (cVar5 != cVar4) {
              func_0x0001086f74ac();
              do {
                func_0x0001086f76b8(uVar6 + 0xa8);
                func_0x0001086f7764();
              } while (cVar5 != cVar4);
              func_0x0001086f7658(extraout_x8_06 + 0xa8);
              func_0x0001086f74f0();
            }
          }
          return;
        }
        if (unaff_x20 == unaff_x19) {
          return;
        }
        lVar7 = 0;
        goto LAB_1086f66c0;
      }
      if (param_3 == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        func_0x0001086f7a1c();
        goto LAB_1086f6728;
      }
      func_0x0001086f79cc();
      if (bVar3) {
        func_0x0001086f78b4();
        func_0x0001086f79b8();
        FUN_1086f68bc();
        FUN_1086f68bc(unaff_x20 + 0x150,unaff_x26 + 0xa8,uStack_1c8);
        FUN_1086f68bc(unaff_x27,unaff_x26,unaff_x26 + 0xa8);
        unaff_x28 = unaff_x20;
        func_0x0001086f76b0();
      }
      else {
        unaff_x28 = unaff_x26;
        func_0x0001086f78b4();
      }
      param_3 = param_3 + -1;
      if (((param_4 & 1) != 0) ||
         (func_0x0001086f75c8(*(undefined8 *)(unaff_x20 - 0x20)), cVar5 != cVar4)) break;
      func_0x0001086f74ac();
      lVar7 = *(long *)(unaff_x19 - 0x20);
      cVar4 = SBORROW8(lStack_88,lVar7);
      cVar5 = lStack_88 - lVar7 < 0;
      uVar10 = unaff_x20;
      if (lStack_88 < lVar7) {
        do {
          func_0x0001086f79a4();
        } while (cVar5 == cVar4);
      }
      else {
        do {
          unaff_x26 = uVar10 + 0xa8;
          if (unaff_x19 <= unaff_x26) break;
          plVar1 = (long *)(uVar10 + 0x130);
          uVar10 = unaff_x26;
        } while (*plVar1 <= lStack_88);
      }
      cVar4 = SBORROW8(unaff_x26,unaff_x19);
      cVar5 = (long)(unaff_x26 - unaff_x19) < 0;
      uVar10 = unaff_x19;
      if (unaff_x26 < unaff_x19) {
        do {
          func_0x0001086f78fc();
        } while (cVar5 != cVar4);
      }
      while (unaff_x26 < uVar10) {
        func_0x0001086f786c();
        do {
          func_0x0001086f793c();
        } while (extraout_x9_02 <= extraout_x8_01);
        do {
          plVar1 = (long *)(uVar10 - 0x20);
          uVar10 = uVar10 - 0xa8;
        } while (extraout_x8_01 < *plVar1);
      }
      in_CY = unaff_x26 - 0xa8 <= unaff_x20;
      in_ZR = unaff_x20 == unaff_x26 - 0xa8;
      if (!(bool)in_ZR) {
        func_0x0001086f7860();
      }
      func_0x0001086f7818();
      func_0x0001086f74f0();
      param_4 = 0;
    }
    func_0x0001086f74ac();
    do {
      func_0x0001086f797c();
    } while (cVar5 != cVar4);
    unaff_x26 = unaff_x20 + extraout_x9;
    cVar4 = SBORROW8(extraout_x9,0xa8);
    cVar5 = extraout_x9 + -0xa8 < 0;
    uVar6 = unaff_x19;
    if (extraout_x9 == 0xa8) {
      do {
        cVar4 = SBORROW8(unaff_x26,uVar6);
        cVar5 = (long)(unaff_x26 - uVar6) < 0;
        uVar10 = uVar6;
        uVar2 = uVar6;
        if (uVar6 <= unaff_x26) break;
        func_0x0001086f7948();
        uVar6 = extraout_x9_00;
        uVar10 = unaff_x24;
        uVar2 = unaff_x24;
      } while (cVar5 == cVar4);
    }
    else {
      do {
        func_0x0001086f795c();
        uVar10 = unaff_x24;
        uVar2 = unaff_x24;
      } while (cVar5 == cVar4);
    }
    while (unaff_x24 = uVar2, unaff_x26 < uVar10) {
      func_0x0001086f7878();
      do {
        func_0x0001086f793c();
      } while (extraout_x9_01 < extraout_x8_00);
      do {
        plVar1 = (long *)(uVar10 - 0x20);
        uVar10 = uVar10 - 0xa8;
        uVar2 = unaff_x24;
      } while (extraout_x8_00 <= *plVar1);
    }
    unaff_x27 = unaff_x26 - 0xa8;
    if (unaff_x20 != unaff_x27) {
      func_0x0001086f768c();
      func_0x0001086ad2d8();
    }
    func_0x0001086f780c();
    func_0x0001086f74f0();
    in_CY = unaff_x24 <= unaff_x26;
    in_ZR = unaff_x26 == unaff_x24;
    uVar6 = unaff_x26;
    if (!(bool)in_CY) goto LAB_1086f6588;
    func_0x0001086f768c();
    FUN_1086f69e8();
    FUN_1086f69e8(unaff_x26,unaff_x19);
    if ((int)uVar6 == 0) goto code_r0x0001086f6584;
    unaff_x19 = unaff_x27;
    if ((unaff_x28 & 1) != 0) {
      return;
    }
  } while( true );
LAB_1086f66c0:
  if (unaff_x20 + 0xa8 == unaff_x19) {
    return;
  }
  lVar8 = *(long *)(unaff_x20 + 0x130);
  lVar9 = *(long *)(unaff_x20 + 0x88);
  cVar4 = SBORROW8(lVar8,lVar9);
  cVar5 = lVar8 - lVar9 < 0;
  if (lVar8 < lVar9) {
    func_0x0001086f74f8();
    do {
      func_0x0001086f7724();
      if (lVar7 == 0) break;
      func_0x0001086f7990();
    } while (cVar5 != cVar4);
    func_0x0001086f7658();
    func_0x0001086f74f0();
  }
  lVar7 = lVar7 + 0xa8;
  unaff_x20 = unaff_x20 + 0xa8;
  goto LAB_1086f66c0;
LAB_1086f6728:
  do {
    cVar4 = SBORROW8(0xa8,param_4);
    cVar5 = (long)(0xa8 - param_4) < 0;
    uVar10 = uVar6;
    if ((long)param_4 < 0xa9) {
      func_0x0001086f76e8();
      if (cVar5 != cVar4) {
        lVar7 = *(long *)(unaff_x27 + 0x88);
        lVar9 = *(long *)(unaff_x27 + 0x130);
        cVar4 = SBORROW8(lVar7,lVar9);
        cVar5 = lVar7 - lVar9 < 0;
        uVar10 = unaff_x24;
        if (lVar9 <= lVar7) {
          uVar10 = 0;
        }
        unaff_x27 = unaff_x27 + uVar10;
        uVar10 = extraout_x8_02;
        if (lVar9 <= lVar7) {
          uVar10 = uVar6;
        }
      }
      func_0x0001086f76dc(*(undefined8 *)(unaff_x27 + 0x88));
      if (cVar5 == cVar4) {
        func_0x0001086f7890();
        do {
          func_0x0001086f7638();
          cVar4 = SBORROW8(0xa8,uVar10);
          cVar5 = (long)(0xa8 - uVar10) < 0;
          if (0xa8 < (long)uVar10) break;
          func_0x0001086f76c0();
          if (cVar5 != cVar4) {
            lVar7 = *(long *)(unaff_x27 + 0x88);
            lVar9 = *(long *)(unaff_x27 + 0x130);
            cVar4 = SBORROW8(lVar7,lVar9);
            cVar5 = lVar7 - lVar9 < 0;
            uVar6 = unaff_x24;
            if (lVar9 <= lVar7) {
              uVar6 = 0;
            }
            unaff_x27 = unaff_x27 + uVar6;
          }
          func_0x0001086f7794();
        } while (cVar5 == cVar4);
        func_0x0001086f7698();
        func_0x0001086f74f0();
      }
    }
    param_4 = param_4 - 1;
    uVar6 = uVar10;
  } while (-1 < (long)param_4);
  do {
    cVar4 = SBORROW8(unaff_x26,2);
    uVar6 = unaff_x26 - 2;
    cVar5 = (long)uVar6 < 0;
    if ((long)unaff_x26 < 2) {
      return;
    }
    func_0x0001086f789c();
    uVar10 = uVar6 >> 1;
    do {
      func_0x0001086f7610();
      lVar7 = extraout_x8_03;
      if ((cVar5 != cVar4) && (func_0x0001086f777c(), lVar7 = extraout_x10, cVar5 == cVar4)) {
        lVar7 = extraout_x8_04;
      }
      func_0x0001086f76b8();
      cVar4 = SBORROW8(lVar7,uVar10);
      cVar5 = (long)(lVar7 - uVar10) < 0;
    } while (lVar7 <= (long)uVar10);
    unaff_x19 = unaff_x19 - 0xa8;
    if (uVar6 == unaff_x19) {
      func_0x0001086f7698(uVar6,auStack_1b8);
    }
    else {
      func_0x0001086f7884();
      func_0x0001086f7848();
      uVar10 = (uVar6 - unaff_x20) + 0xa8;
      cVar4 = SBORROW8(uVar10,0xa9);
      cVar5 = (long)((uVar6 - unaff_x20) + -1) < 0;
      if (0xa8 < (long)uVar10) {
        func_0x0001086f7574(uVar10 / 0xa8 - 2);
        func_0x0001086f7540();
        if (cVar5 != cVar4) {
          func_0x0001086f74f8();
          do {
            func_0x0001086f7660();
            if (lVar7 == 0) break;
            func_0x0001086f7574(lVar7 + -1);
          } while (extraout_x8_05 < lStack_88);
          func_0x0001086f7824();
          func_0x0001086f74f0();
        }
      }
    }
    func_0x0001086a9714(auStack_1b8);
    unaff_x26 = unaff_x26 - 1;
  } while( true );
code_r0x0001086f6584:
  uVar6 = unaff_x28;
  if ((unaff_x28 & 1) == 0) {
LAB_1086f6588:
    func_0x0001086f768c();
    FUN_1086f6410();
    param_4 = 0;
  }
  goto LAB_1086f6444;
}


