/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087b83ac; end: 1087b83f7;  */

undefined8 FUN_1087b83ac(undefined8 param_1,undefined8 param_2)

{
  func_0x0001087b9988(param_1,PTR_s_step_113268bf0);
  func_0x0001087b989c((uint)param_2 & 0x3f);
  func_0x0001087b9c78();
  func_0x0001087b9814();
  return param_2;
}



/* Entry: 1087b83f8; end: 1087b88eb;  */

void FUN_1087b83f8(long param_1,long param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_230 [40];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [40];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [40];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [24];
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  FUN_1087b9dac(auStack_168,param_2);
  if ((((*(long *)(param_2 + 0x8d8) == *(long *)(param_2 + 0x8e0)) &&
       (*(long *)(param_2 + 0x8f0) == *(long *)(param_2 + 0x8f8))) &&
      (*(long *)(param_2 + 0x908) == *(long *)(param_2 + 0x910))) &&
     (*(long *)(param_2 + 0x920) == *(long *)(param_2 + 0x928))) {
    bVar1 = *(long *)(param_2 + 0x938) != *(long *)(param_2 + 0x940);
  }
  else {
    bVar1 = true;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_FUN_110a609a8;
  uStack_88 = 0;
  uStack_70 = 0x192;
  func_0x0001087b990c();
  func_0x0001087b9c3c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1c0,auStack_168);
  func_0x000107c28820(&ppuStack_90,auStack_1a8,auStack_1c0);
  func_0x0001087b9918();
  func_0x000107c278b8(auStack_1d8);
  puVar2 = auStack_1f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar2,auStack_150);
  func_0x0001087b9c88();
  FUN_1087972f0();
  FUN_10879d02c();
  func_0x000107c278b8(auStack_208,&UNK_10f4bb2c3);
  func_0x000107c28818(puVar2,auStack_208,bVar1);
  func_0x000107c2884c(auStack_190,puVar2);
  func_0x0001087b9bbc();
  func_0x0001087b9b4c();
  func_0x0001087b9ad0();
  func_0x0001087b9960();
  func_0x0001087b99cc();
  func_0x0001087b9b64();
  plVar4 = *(long **)(param_1 + 8);
  func_0x000107c2884c(auStack_230,auStack_190);
  func_0x0001087b9bb4(*(undefined8 *)(*plVar4 + 0x50));
  func_0x000107c2882c(auStack_230);
  if (*(long *)(param_2 + 0x30) != *(long *)(param_2 + 0x38)) {
    uVar5 = param_2 + 0x18;
    FUN_1087b9e40();
    if (uVar5 >> 0x20 != 0) {
      uVar5 = (ulong)*(uint *)(param_2 + 0x13c);
      func_0x0001087b9950();
      uStack_98 = 0x24d;
      func_0x0001087b9918();
      func_0x000107c278b8(auStack_f8);
      FUN_1087b14f8(uVar5);
      func_0x000107c28824(&ppuStack_b8,auStack_f8,uVar5);
      FUN_1087b88ec();
      FUN_1087972f0();
      func_0x0001087b9c64();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
      func_0x0001087b9bf0();
      plVar4 = *(long **)(param_1 + 8);
      func_0x0001087b9cc4();
      func_0x0001087b9bb4(*(undefined8 *)(*plVar4 + 0x50));
      func_0x0001087b9bf0();
      func_0x0001087b9b64();
    }
    lVar3 = *(long *)(param_2 + 0x6d8);
    for (lVar6 = *(long *)(param_2 + 0x6d0); lVar6 != lVar3; lVar6 = lVar6 + 0x88) {
      func_0x0001088472cc(*(undefined4 *)(lVar6 + 0x30));
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      ppuStack_b8 = &PTR_FUN_110a609a8;
      uStack_98 = 0x24e;
      puVar2 = auStack_d0;
      func_0x000107c278b8(puVar2,"media_type");
      func_0x0001087b9af4();
      func_0x000107c28824(&ppuStack_b8,auStack_d0,puVar2);
      FUN_1087b88ec();
      FUN_1087972f0();
      func_0x0001087b9c64();
      func_0x0001087b9c54();
      func_0x0001087b9bf0();
      plVar4 = *(long **)(param_1 + 8);
      func_0x0001087b9cc4(auStack_f8);
      (**(code **)(*plVar4 + 0x50))(plVar4,auStack_f8);
      func_0x000107c2882c(auStack_f8);
      func_0x0001087b9b64();
    }
    lVar6 = *(long *)(param_2 + 0x90);
    lVar3 = *(long *)(param_2 + 0x98);
    func_0x0001087b9d0c();
    for (; lVar6 != lVar3; lVar6 = lVar6 + 0x58) {
      func_0x0001088472cc(*(undefined4 *)(lVar6 + 0x30));
      uStack_b0 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0x24e;
      puVar2 = auStack_110;
      ppuStack_b8 = (undefined **)(extraout_x8 + 0x10);
      func_0x000107c278b8(puVar2,"media_type");
      func_0x0001087b9af4();
      func_0x000107c28824(&ppuStack_b8,auStack_110,puVar2);
      FUN_1087b88ec();
      FUN_1087972f0();
      func_0x0001087b9c64();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
      func_0x0001087b9bf0();
      plVar4 = *(long **)(param_1 + 8);
      func_0x0001087b9cc4(auStack_138);
      (**(code **)(*plVar4 + 0x50))(plVar4,auStack_138);
      func_0x000107c2882c(auStack_138);
      func_0x0001087b9b64();
    }
  }
  func_0x000107c2882c(auStack_190);
  func_0x000107c27bbc(auStack_168);
  return;
}



/* Entry: 1087b88ec; end: 1087b8947;  */

void FUN_1087b88ec(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x0001087b9a04();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001087b987c();
  }
  else {
    func_0x0001087b9b24();
  }
  func_0x0001087b9988();
  func_0x0001087b9c0c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001087b989c();
  }
  else {
    func_0x0001087b9ab4();
  }
  func_0x0001087b9bdc();
  func_0x000107c28824();
  func_0x0001087b9814();
  return;
}



/* Entry: 1087b8948; end: 1087b8997;  */

undefined8 FUN_1087b8948(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x0001087b9988(param_1,PTR_DAT_113268d90);
  func_0x0001087b989c((uint)param_2 & 0x1ff);
  func_0x000107c28824(param_1,auStack_38);
  func_0x0001087b9814();
  return param_2;
}



/* Entry: 1087b8998; end: 1087b89b7;  */

int FUN_1087b8998(uint param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = 0x3b015d;
  if ((param_2 & param_1 < 0x2c) != 0) {
    iVar1 = param_1 + 0x3b015e;
  }
  return iVar1;
}



/* Entry: 1087b89b8; end: 1087b8c5b;  */

void FUN_1087b89b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [32];
  undefined4 uStack_a0;
  undefined1 auStack_70 [48];
  
  FUN_1087b9778(param_3,3);
  FUN_1087b9778(param_3,2);
  FUN_1087b9778(param_3,1);
  FUN_1087b9dac(auStack_70,param_2);
  func_0x0001087b99f4();
  uStack_a0 = 0x19f;
  func_0x0001087b990c();
  func_0x000107c278b8(auStack_d8);
  func_0x0001087b9a50(auStack_f0);
  func_0x000107c28820(auStack_c0,auStack_d8,auStack_f0);
  func_0x0001087b9ca8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  func_0x0001087b9990();
  func_0x0001087b98e0();
  func_0x0001087b9ce8(*(undefined8 *)(param_1 + 8));
  func_0x0001087b9b74();
  func_0x0001087b99f4();
  uStack_a0 = 0x19e;
  func_0x0001087b990c();
  func_0x000107c278b8(auStack_108);
  func_0x0001087b9a50(auStack_120);
  func_0x000107c28820(auStack_c0,auStack_108,auStack_120);
  func_0x0001087b9cb0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  func_0x0001087b98e0();
  func_0x0001087b9ce8(*(undefined8 *)(param_1 + 8));
  func_0x0001087b9b74();
  func_0x0001087b99f4();
  uStack_a0 = 0x1a0;
  func_0x0001087b990c();
  func_0x0001087b9cd4();
  func_0x0001087b9a50(auStack_150);
  func_0x0001087b9cb8(auStack_c0);
  func_0x0001087b9cb0();
  func_0x0001087b9aa4();
  func_0x0001087b9b04();
  func_0x0001087b98e0();
  func_0x0001087b9ce8(*(undefined8 *)(param_1 + 8));
  func_0x0001087b9b74();
  func_0x0001087b99f4();
  uStack_a0 = 0x19d;
  func_0x0001087b990c();
  func_0x000107c278b8(auStack_168);
  func_0x0001087b9a50(auStack_180);
  func_0x000107c28820(auStack_c0,auStack_168,auStack_180);
  func_0x0001087b9cb0();
  func_0x0001087b9b7c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
  func_0x0001087b98e0();
  func_0x0001087b9ce8(*(undefined8 *)(param_1 + 8));
  func_0x0001087b9b74();
  func_0x0001087b9ca0();
  func_0x0001087b9a30();
  return;
}



/* Entry: 1087b8c5c; end: 1087b9057;  */

void FUN_1087b8c5c(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [48];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [48];
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [32];
  undefined4 uStack_98;
  undefined1 auStack_90 [48];
  
  FUN_1087b9dac(auStack_130,param_1 + 0x38);
  func_0x000107c316c4();
  if (param_2 == 0x30011) {
    func_0x0001087b9950();
    uStack_98 = 0;
    func_0x0001087b990c();
    func_0x000107c278b8(auStack_148);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_160,auStack_130);
    puVar1 = auStack_b8;
    FUN_108791664(puVar1,auStack_148,auStack_160);
    func_0x0001087b9918();
    func_0x0001087b9c44();
    func_0x0001087b9aec(auStack_190);
    FUN_108791664(puVar1,auStack_178,auStack_190);
    FUN_1087b7e18();
    func_0x0001087b9c3c();
    func_0x0001087b9a94();
    func_0x0001087b9c90();
    func_0x0001087b9b6c();
    func_0x0001087b99cc();
    func_0x0001087b99d4();
    func_0x0001087b99dc();
    func_0x0001087b9b3c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
    func_0x0001087b9bf8();
    func_0x0001087b98f0();
    func_0x0001087b992c();
  }
  else {
    func_0x0001087b9950();
    uStack_98 = 1;
    func_0x0001087b9830();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_1d8,auStack_130);
    puVar1 = auStack_b8;
    FUN_108791664(puVar1,auStack_1c0,auStack_1d8);
    func_0x0001087b9918();
    func_0x000107c278b8(auStack_1f0);
    func_0x0001087b9aec(auStack_208);
    FUN_108791664(puVar1,auStack_1f0,auStack_208);
    FUN_1087b7e18();
    func_0x000107c278b8(auStack_220,&UNK_10f4bb1fa);
    func_0x0001087b9a94();
    func_0x0001087b9c90();
    func_0x0001087b9a70();
    func_0x0001087b9988();
    func_0x0001087b9a60();
    func_0x0001087b9c90();
    func_0x0001087b9b6c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_238);
    func_0x0001087b9c98();
    func_0x0001087b9bbc();
    func_0x0001087b9b4c();
    func_0x0001087b9ad0();
    func_0x0001087b9960();
    func_0x0001087b9bf8();
    func_0x0001087b98f0();
    func_0x0001087b992c();
  }
  FUN_108788618(auStack_90);
  if (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x70)) {
    if (param_2 == 0x30011) {
      func_0x0001087b9950();
      uStack_98 = 0x16;
      func_0x0001087b9918();
      func_0x000107c278b8(auStack_d0);
      func_0x0001087b9af4();
      func_0x0001087b9cdc();
      func_0x0001087b9bc4();
      func_0x0001087b9a94();
      func_0x0001087b9c78();
      func_0x0001087b9b6c();
      func_0x0001087b99bc();
      func_0x0001087b9c54();
      func_0x0001087b9bf8();
      func_0x0001087b98f0();
      func_0x0001087b992c();
    }
    else {
      func_0x0001087b9950();
      uStack_98 = 0x17;
      func_0x0001087b9918();
      puVar1 = auStack_d0;
      func_0x000107c278b8(puVar1);
      func_0x0001087b9af4();
      func_0x0001087b9cdc();
      func_0x0001087b9bc4();
      func_0x0001087b9a94();
      func_0x0001087b99e4();
      func_0x0001087b9a70();
      func_0x0001087b9a18();
      func_0x0001087b9a60();
      FUN_108791610(puVar1,auStack_100);
      func_0x0001087b9b6c();
      func_0x0001087b9924();
      func_0x0001087b99bc();
      func_0x0001087b9c54();
      func_0x0001087b9bf8();
      func_0x0001087b98f0();
      func_0x0001087b992c();
    }
    FUN_108788618(auStack_90);
  }
  func_0x000107c27bbc(auStack_130);
  return;
}



/* Entry: 1087b9058; end: 1087b917f;  */

void FUN_1087b9058(undefined8 param_1,int param_2,ulong param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  uint uVar5;
  long extraout_x8;
  undefined1 auStack_c0 [40];
  long alStack_98 [4];
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  alStack_98[2] = 0;
  alStack_98[3] = 0;
  func_0x0001087b9d0c();
  alStack_98[0] = extraout_x8 + 0x10;
  alStack_98[1] = 0;
  uStack_78 = 0x19a;
  iVar1 = param_2 + 0x80037;
  if (2 < param_2 - 1U) {
    iVar1 = 0x80037;
  }
  plVar4 = alStack_98;
  FUN_10879755c(plVar4,iVar1);
  uVar5 = (uint)(param_3 >> 0x11) & 0x7fff;
  uVar2 = 0x45 < uVar5;
  uVar3 = uVar5 == 0x46;
  if (uVar5 < 0x47) {
    func_0x0001087b987c();
  }
  else {
    func_0x0001087b9b24();
  }
  func_0x000107c278b8(auStack_48);
  func_0x0001087b9c0c();
  if (!(bool)uVar2 || (bool)uVar3) {
    func_0x0001087b989c();
  }
  else {
    func_0x0001087b9ab4();
  }
  func_0x000107c28824(plVar4,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x000107c2884c(auStack_70,plVar4);
  func_0x000107c2882c(alStack_98);
  func_0x000107c2884c(auStack_c0,auStack_70);
  func_0x0001087b9c18();
  func_0x0001087b9890();
  func_0x0001087b9a20();
  func_0x000107c2882c(auStack_70);
  return;
}



/* Entry: 1087b9180; end: 1087b9273;  */

void FUN_1087b9180(undefined8 param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  uint uVar4;
  long extraout_x8;
  undefined1 auStack_b0 [40];
  long alStack_88 [4];
  undefined4 uStack_68;
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [24];
  
  alStack_88[2] = 0;
  alStack_88[3] = 0;
  func_0x0001087b9b30();
  alStack_88[0] = extraout_x8 + 0x10;
  alStack_88[1] = 0;
  uStack_68 = 9;
  uVar4 = (uint)(param_2 >> 0x11) & 0x7fff;
  uVar1 = 0x45 < uVar4;
  uVar2 = uVar4 == 0x46;
  if (uVar4 < 0x47) {
    func_0x0001087b987c();
  }
  else {
    func_0x0001087b9b24();
  }
  func_0x000107c278b8(auStack_38);
  func_0x0001087b9c0c();
  if (!(bool)uVar1 || (bool)uVar2) {
    func_0x0001087b989c();
  }
  else {
    func_0x0001087b9ab4();
  }
  plVar3 = alStack_88;
  FUN_108791610(plVar3,auStack_38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  FUN_108791a34(auStack_60,plVar3);
  FUN_108788618(alStack_88);
  FUN_108791a34(auStack_b0,auStack_60);
  func_0x0001087b9d00();
  func_0x0001087b9890();
  func_0x0001087b9a28();
  FUN_108788618(auStack_60);
  return;
}



/* Entry: 1087b9274; end: 1087b938b;  */

void FUN_1087b9274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  long alStack_80 [4];
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  func_0x0001087b9b30();
  alStack_80[2] = 0;
  alStack_80[3] = 0;
  alStack_80[0] = extraout_x8 + 0x10;
  alStack_80[1] = 0;
  uStack_60 = 0xc;
  func_0x0001087b9cd4();
  FUN_1087915bc(alStack_80,auStack_98,param_2);
  func_0x000107c278b8(auStack_b0,&UNK_10f4bb2fe);
  func_0x000107c28af4(param_3);
  func_0x0001087b99e4();
  FUN_108791a34(auStack_58,param_3);
  func_0x0001087b9aa4();
  func_0x0001087b9b04();
  FUN_108788618(alStack_80);
  FUN_108791a34(auStack_d8,auStack_58);
  func_0x0001087b9d00();
  func_0x0001087b9970();
  FUN_108788618(auStack_d8);
  FUN_108788618(auStack_58);
  return;
}



/* Entry: 1087b938c; end: 1087b959f;  */

void FUN_1087b938c(undefined8 param_1,long param_2,uint param_3,uint *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  long extraout_x8;
  undefined1 auStack_140 [40];
  undefined1 auStack_118 [24];
  ulong auStack_100 [4];
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  if ((param_3 - 0xb004c < 0x1c && (1 << (ulong)(param_3 - 0xb004c & 0x1f) & 0xc3fe2f3U) != 0) &&
     (((char)param_4[1] != '\x01' || ((*param_4 & 0xfffffffd) != 0)))) {
    func_0x000107c31338();
    auStack_100[1] = 0;
    auStack_100[0] = (ulong)param_3;
    func_0x000107c2793c(&UNK_10f4bb310);
    func_0x000107c3173c(&uStack_b8);
    uVar1 = 3;
    func_0x00010bd3f128(&uStack_d0);
    func_0x000107c316c4();
    uStack_80 = uStack_a8;
    auStack_a0[0] = 9;
    uStack_88 = uStack_b0;
    uStack_90 = uStack_b8;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_70 = uStack_c8;
    uStack_78 = uStack_d0;
    uStack_68 = uStack_c0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_58 = 0;
    uStack_98 = (ulong)param_3;
    uStack_60 = uVar1;
    func_0x00010bcc46f8(param_1,auStack_a0);
    func_0x00010786e114(auStack_a0);
    func_0x0001087b9a58();
    func_0x0001087b99c4();
  }
  func_0x0001087b9d0c();
  auStack_100[2] = 0;
  auStack_100[3] = 0;
  auStack_100[0] = extraout_x8 + 0x10;
  auStack_100[1] = 0;
  uStack_e0 = 0x1a6;
  func_0x0001087b990c();
  func_0x0001087b9c80();
  uVar2 = (ulong)*(uint *)(param_2 + 0x138);
  FUN_10879cf94(uVar2);
  puVar3 = auStack_100;
  func_0x000107c28824(puVar3,auStack_118,uVar2);
  FUN_1087b95a0();
  uVar2 = (ulong)*param_4;
  FUN_1087b8998(uVar2,(char)param_4[1]);
  FUN_1087b8948(puVar3,uVar2);
  FUN_10879d02c();
  func_0x000107c2884c(auStack_a0,puVar3);
  func_0x0001087b9980();
  func_0x0001087b9be8();
  func_0x000107c2884c(auStack_140,auStack_a0);
  func_0x0001087b9c18();
  func_0x0001087b9890();
  func_0x0001087b9a20();
  func_0x000107c2882c(auStack_a0);
  return;
}



/* Entry: 1087b95a0; end: 1087b95fb;  */

void FUN_1087b95a0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  
  func_0x0001087b9a04();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001087b987c();
  }
  else {
    func_0x0001087b9b24();
  }
  func_0x0001087b9988();
  func_0x0001087b9c0c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x0001087b989c();
  }
  else {
    func_0x0001087b9ab4();
  }
  func_0x0001087b9bdc();
  func_0x000107c28824();
  func_0x0001087b9814();
  return;
}



/* Entry: 1087b95fc; end: 1087b970f;  */

void FUN_1087b95fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  undefined1 auStack_a0 [24];
  long alStack_88 [4];
  undefined4 uStack_68;
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [24];
  
  func_0x0001087b9b30();
  alStack_88[2] = 0;
  alStack_88[3] = 0;
  alStack_88[0] = extraout_x8 + 0x10;
  alStack_88[1] = 0;
  uStack_68 = 2;
  func_0x0001087b990c();
  func_0x000107c278b8(auStack_a0);
  FUN_10879cf94(param_2);
  FUN_108791610(alStack_88,auStack_a0,param_2);
  if (8 < ((uint)((ulong)param_3 >> 0x10) & 0xffff)) {
    func_0x0001087b9b24();
  }
  func_0x000107c278b8(auStack_38);
  if (0x2a < ((uint)param_3 & 0xffff)) {
    func_0x0001087b9ab4();
  }
  func_0x0001087b9c78();
  func_0x0001087b9a7c();
  FUN_108791a34(auStack_60,param_3);
  func_0x0001087b9b7c();
  FUN_108788618(alStack_88);
  FUN_1086820f8(auStack_60);
  FUN_108788618(auStack_60);
  return;
}



/* Entry: 1087b9710; end: 1087b9723;  */

void FUN_1087b9710(long param_1,int param_2,int param_3)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a6f328;
  uStack_78 = 0;
  uStack_60 = 3;
  func_0x00010884394c((undefined8 *)(param_1 + 8),&UNK_10f4bdaf0);
  pppuVar1 = &ppuStack_80;
  FUN_108791610(pppuVar1,auStack_98,(&PTR_DAT_110a7a360)[param_2]);
  func_0x000108843930();
  FUN_108791610(pppuVar1,auStack_b0,(&PTR_DAT_110a7a360)[param_3]);
  FUN_108791a34(auStack_58,pppuVar1);
  func_0x00010884381c();
  func_0x000108843848();
  FUN_108788618(&ppuStack_80);
  plVar2 = *(long **)(param_1 + 8);
  FUN_108791a34(auStack_d8,auStack_58);
  func_0x00010884383c(*(undefined8 *)(*plVar2 + 0x60));
  FUN_108788618(auStack_d8);
  FUN_108788618(auStack_58);
  return;
}



/* Entry: 1087b9724; end: 1087b9737;  */

void FUN_1087b9724(void)

{
  FUN_1087b9738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087b9738; end: 1087b9777;  */

undefined8 * FUN_1087b9738(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a70cd8;
  func_0x000107c28800(param_1 + 3);
  func_0x000107c288a4(param_1 + 1);
  return param_1;
}



/* Entry: 1087b9778; end: 1087b9d17;  */

long FUN_1087b9778(long *param_1,int param_2)

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
    uVar4 = (ulong)param_2;
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
        if (*(int *)(plVar2 + 2) == param_2) {
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



/* Entry: 1087b9d18; end: 1087b9d5b;  */

bool FUN_1087b9d18(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uStack_24;
  
  puVar1 = &UNK_10df571a8;
  uStack_24 = param_1;
  FUN_1087b9d5c(&UNK_10df571a8,&DAT_10df571b8,&uStack_24);
  return puVar1 != &DAT_10df571b8;
}



/* Entry: 1087b9d5c; end: 1087b9dab;  */

void FUN_1087b9d5c(void)

{
  FUN_1087b9ec0();
  return;
}



/* Entry: 1087b9dac; end: 1087b9e03;  */

void FUN_1087b9dac(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar1 = (ulong)*(uint *)(param_2 + 0x138);
  uVar2 = (ulong)*(uint *)(param_2 + 0x13c);
  FUN_10879cf94();
  FUN_1087b14f8();
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  FUN_1087b9ee4(param_1,&uStack_40);
  return;
}



/* Entry: 1087b9e04; end: 1087b9e3f;  */

undefined8 FUN_1087b9e04(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  switch(*(undefined4 *)(param_1 + 0x138)) {
  case 0:
  case 3:
  case 5:
  case 6:
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1087b9e40; end: 1087b9ebf;  */

undefined * FUN_1087b9e40(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  iVar3 = 0;
  uVar2 = 0;
  uVar4 = 0;
  lVar5 = *(long *)(param_1 + 0x18);
  lVar1 = *(long *)(param_1 + 0x20);
  while( true ) {
    if (lVar5 == lVar1) {
      return (undefined *)CONCAT44(iVar3,uVar4 | (uint)uVar2 & 0xff);
    }
    if (iVar3 != 0) break;
    uVar2 = (ulong)*(uint *)(lVar5 + 0x30);
    func_0x0001088472cc(uVar2);
    uVar4 = (uint)uVar2 & 0x5b0300;
    lVar5 = lVar5 + 0x58;
    iVar3 = 1;
  }
  return &UNK_1005b0200;
}



/* Entry: 1087b9ec0; end: 1087b9ee3;  */

void FUN_1087b9ec0(int *param_1,int *param_2,int *param_3)

{
  for (; (param_1 != param_2 && (*param_1 != *param_3)); param_1 = param_1 + 1) {
  }
  return;
}



/* Entry: 1087b9ee4; end: 1087b9f2f;  */

long FUN_1087b9ee4(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c278b8(param_1,*param_2);
  func_0x000107c278b8(lVar1 + 0x18,param_2[1]);
  return param_1;
}



/* Entry: 1087b9f30; end: 1087bb01f;  */

void FUN_1087b9f30(undefined8 param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined8 ****ppppuVar9;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long *unaff_x20;
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  undefined *puVar16;
  uint uVar17;
  undefined8 ****ppppuVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  uint uStack_f04;
  undefined1 auStack_ef8 [8];
  undefined1 auStack_ef0 [912];
  undefined1 auStack_b60 [128];
  undefined8 **ppuStack_ae0;
  undefined8 ***pppuStack_ad8;
  undefined1 uStack_ad0;
  long lStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined1 auStack_a98 [24];
  undefined1 auStack_a80 [68];
  int iStack_a3c;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 ***pppuStack_a20;
  ulong uStack_a18;
  ulong uStack_a10;
  undefined *puStack_a08;
  ulong uStack_a00;
  undefined8 uStack_9f8;
  int *piStack_9f0;
  undefined8 uStack_9e8;
  ulong uStack_9e0;
  undefined8 uStack_9d8;
  ulong uStack_9d0;
  undefined8 uStack_9c8;
  char cStack_878;
  undefined8 ***pppuStack_860;
  undefined *puStack_858;
  undefined8 ***pppuStack_850;
  undefined8 ***pppuStack_840;
  undefined *puStack_838;
  undefined8 ***pppuStack_830;
  undefined *puStack_828;
  undefined8 ***pppuStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined1 uStack_800;
  undefined7 uStack_7ff;
  undefined1 uStack_7f8;
  undefined8 uStack_7f7;
  char cStack_7e8;
  undefined1 auStack_380 [336];
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  char cStack_208;
  char cStack_88;
  undefined8 uStack_78;
  
  plVar21 = param_2;
  func_0x0001087bbcac();
  uStack_78 = extraout_x8;
  func_0x0001087ade30(&pppuStack_840,plVar21[1] + -0x18);
  ppppuVar18 = &pppuStack_840;
  func_0x000107c279a4();
  lVar8 = plVar21[1];
  uVar5 = 1;
  if (*(long *)(lVar8 + -0x18) == *(long *)(lVar8 + -0x10)) {
LAB_1087baac0:
    func_0x0001087bbc8c(uStack_78);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lStack_ac8 = 0;
    pppuStack_ad8 = (undefined8 ***)0x0;
    ppuStack_ae0 = (undefined8 ***)0x0;
    uStack_ad0 = 0;
    func_0x000107c28258();
    uStack_ad0 = 1;
    iStack_a3c = (int)param_2[0x2c];
    lVar8 = *param_2;
    lVar15 = param_2[1];
    if ((lVar8 == lVar15) || (*(long *)(lVar15 + -0x18) == *(long *)(lVar15 + -0x10))) {
      uStack_f04 = 7;
    }
    else {
      uStack_f04 = *(uint *)(*(long *)(lVar15 + -0x10) + -0x6c);
    }
    pppuStack_ad8 = ppppuVar18;
    if (((char)param_2[0xd0] == '\x01') && ((*(byte *)(param_2 + 0xd2) & 1) != 0)) {
      plVar12 = unaff_x20 + 7;
      uVar13 = *(undefined8 *)(*plVar12 + 0x18);
      func_0x000107c278b8(auStack_a98,&UNK_10f4bb3a6);
      func_0x000107c31420(auStack_a80,uVar13,auStack_a98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a98);
      lVar8 = param_2[0xcf];
      plVar21 = param_2 + 0xe1;
      while (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0) {
        FUN_10879301c(&pppuStack_a20,plVar21 + 2);
        pppuStack_840 = (undefined8 ***)((ulong)pppuStack_840 & 0xffffffffffffff00);
        cStack_7e8 = '\0';
        ppppuVar18 = (undefined8 ****)param_2[0xee];
        if ((ppppuVar18 != (undefined8 ****)0x0) && (param_2[0xf0] != 0)) {
          ppppuVar7 = &pppuStack_a20;
          FUN_108848654();
          uVar19 = (long)ppppuVar18 - 1;
          if (((ulong)ppppuVar18 & uVar19) == 0) {
            ppppuVar14 = (undefined8 ****)((ulong)ppppuVar7 & uVar19);
          }
          else {
            ppppuVar14 = ppppuVar7;
            if (ppppuVar18 <= ppppuVar7) {
              uVar1 = 0;
              uVar17 = (uint)ppppuVar18;
              if (uVar17 != 0) {
                uVar1 = (uint)ppppuVar7 / uVar17;
              }
              ppppuVar14 = (undefined8 ****)(ulong)((uint)ppppuVar7 - uVar1 * uVar17);
            }
          }
          plVar20 = *(long **)(param_2[0xed] + (long)ppppuVar14 * 8);
          if (plVar20 != (long *)0x0) {
            do {
              while( true ) {
                plVar20 = (long *)*plVar20;
                if (plVar20 == (long *)0x0) goto LAB_1087ba13c;
                ppppuVar9 = (undefined8 ****)plVar20[1];
                if (ppppuVar7 != ppppuVar9) break;
                lVar15 = (long)(plVar20 + 2);
                func_0x000107c28078(lVar15,&pppuStack_a20);
                if ((int)lVar15 != 0) {
                  if (cStack_7e8 == '\x01') {
                    func_0x000107c27cfc(&pppuStack_840,plVar20 + 5);
                    pppuStack_820 = (undefined8 ***)plVar20[9];
                    puStack_828 = (undefined *)plVar20[8];
                    uStack_810 = plVar20[0xb];
                    uStack_818 = plVar20[10];
                    uStack_808 = plVar20[0xc];
                    uStack_800 = (undefined1)plVar20[0xd];
                    uStack_7f7 = *(undefined8 *)((long)plVar20 + 0x71);
                    uStack_7ff = (undefined7)*(undefined8 *)((long)plVar20 + 0x69);
                    uStack_7f8 = (undefined1)((ulong)*(undefined8 *)((long)plVar20 + 0x69) >> 0x38);
                  }
                  else {
                    FUN_10871bf14(&pppuStack_840,plVar20 + 5);
                  }
                  goto LAB_1087ba13c;
                }
              }
              if (((ulong)ppppuVar18 & uVar19) == 0) {
                ppppuVar9 = (undefined8 ****)((ulong)ppppuVar9 & uVar19);
              }
              else if (ppppuVar18 <= ppppuVar9) {
                uVar2 = 0;
                if (ppppuVar18 != (undefined8 ****)0x0) {
                  uVar2 = (ulong)ppppuVar9 / (ulong)ppppuVar18;
                }
                ppppuVar9 = (undefined8 ****)((long)ppppuVar9 - uVar2 * (long)ppppuVar18);
              }
            } while (ppppuVar9 == ppppuVar14);
          }
        }
LAB_1087ba13c:
        FUN_1087bb870(param_2 + 0x104,&puStack_a08);
        func_0x0001087bb940(param_2 + 0x109,&puStack_a08);
        FUN_1087bb870(param_2 + 0x10e,&puStack_a08);
        func_0x0001087bb940(param_2 + 0x113,&puStack_a08);
        FUN_1087bb3c8();
        func_0x0001087bbc28();
        func_0x0001086a91dc(&pppuStack_a20);
      }
      lVar11 = param_2[0xe5];
      for (lVar15 = param_2[0xe4]; lVar15 != lVar11; lVar15 = lVar15 + 0x88) {
        FUN_108868f84(*plVar12,param_2[0xcf],lVar15);
      }
      lVar11 = param_2[0xe8];
      for (lVar15 = param_2[0xe7]; lVar15 != lVar11; lVar15 = lVar15 + 0x38) {
        FUN_1088690f4(*plVar12,lVar15,param_2[0xcf]);
      }
      lVar11 = param_2[0xeb];
      for (lVar15 = param_2[0xea]; lVar15 != lVar11; lVar15 = lVar15 + 0x20) {
        FUN_108869178(*plVar12,param_2[0xcf],lVar15 + 8);
      }
      lVar15 = *(long *)(param_2[1] + -0x10);
      if ((*(long *)(param_2[1] + -0x18) != lVar15) && (*(int *)(lVar15 + -0x6c) != 0)) {
        if (uStack_f04 == 0) {
          puStack_228 = (undefined *)0x0;
          puStack_230 = &UNK_10f4bb4f8;
          func_0x000107c2793c(&UNK_10f4bb4c6);
          func_0x000107c3173c(&pppuStack_a20);
          uVar19 = uStack_a18;
          ppppuVar18 = (undefined8 ****)pppuStack_a20;
          if (-1 < (long)uStack_a10) {
            uVar19 = uStack_a10 >> 0x38;
            ppppuVar18 = &pppuStack_a20;
          }
          func_0x00010bd3f434(&pppuStack_840,ppppuVar18,uVar19,&UNK_10f4bb51f);
          ppppuVar18 = (undefined8 ****)pppuStack_840;
          if (-1 < (long)pppuStack_830) {
            ppppuVar18 = &pppuStack_840;
          }
          func_0x00010bd3f4e0(ppppuVar18,"unknown",0x1b1);
          goto LAB_1087bab88;
        }
        if ((((param_2[0xe] - param_2[0xd] == 0x18) && (param_2[0x10] == param_2[0x11])) &&
            (param_2[0x13] == param_2[0x14])) && (param_2[0x16] == param_2[0x17])) {
          FUN_108862854(&pppuStack_a20,unaff_x20[7],param_2[0xd],param_2[0xd1],unaff_x20 + 2);
          func_0x000107c28998(&puStack_230,&pppuStack_a20);
          func_0x000107c28948(&pppuStack_a20);
          if (cStack_88 == '\x01') {
            if (cStack_208 == '\x01') {
              pppuStack_840 = (undefined8 ***)((ulong)pppuStack_840 & 0xffffffffffffff00);
              cStack_7e8 = '\0';
              uStack_a18 = 0;
              pppuStack_a20 = (undefined8 ****)0x0;
              uStack_a10 = 0;
              uStack_ab8 = 0;
              uStack_ac0 = 0;
              uStack_ab0 = 0;
              puStack_858 = (undefined *)0x0;
              pppuStack_860 = (undefined8 ****)0x0;
              pppuStack_850 = (undefined8 ****)0x0;
              uStack_a30 = 0;
              uStack_a38 = 0;
              uStack_a28 = 0;
              FUN_1087bb3c8();
              func_0x000104be1274(&uStack_a38);
              func_0x00010867b9fc(&pppuStack_860);
              func_0x0001087bbc40();
              func_0x00010867b9fc(&pppuStack_a20);
              func_0x0001087bbc28();
              uStack_f04 = 0;
            }
          }
          else {
            uStack_f04 = 7;
          }
          func_0x000107c288dc(&puStack_230);
        }
      }
      if (uStack_f04 - 4 < 4) {
        if ((uStack_f04 & 0xfffffffe) == 4) goto LAB_1087ba37c;
LAB_1087ba3d8:
        if ((uStack_f04 & 0xfffffffe) == 4) {
          if (uStack_f04 == 4) {
            iVar6 = (int)unaff_x20[0x19];
            func_0x0001087bbca0();
            (*extraout_x8_00)();
            if (iVar6 == 1) {
              uStack_f04 = 4;
              uVar5 = 1;
              uVar1 = uStack_f04;
              goto LAB_1087ba774;
            }
            iVar6 = (int)unaff_x20[0x19];
            func_0x0001087bbca0();
            (*extraout_x8_02)();
            uStack_f04 = 4;
            if (iVar6 != 1) {
              uStack_f04 = 5;
            }
          }
          else {
            uStack_f04 = 5;
          }
        }
        else if ((uStack_f04 < 8) && ((1 << (ulong)(uStack_f04 & 0x1f) & 0xc1U) != 0))
        goto LAB_1087ba430;
        plVar21 = unaff_x20;
        (**(code **)(*unaff_x20 + 0x18))();
        uVar5 = 1;
        uVar1 = 7;
        if ((int)plVar21 == 0) {
          uVar1 = uStack_f04;
        }
      }
      else {
        if (uStack_f04 == 0) {
LAB_1087ba37c:
          lVar15 = param_2[0x122];
          lVar11 = param_2[0x123];
          if (lVar15 != lVar11) {
            for (; lVar15 != lVar11; lVar15 = lVar15 + 0x18) {
              func_0x000107c28840(param_2 + 0x19,lVar15);
            }
            func_0x000107c279bc(param_2 + 0x122);
            if ((uStack_f04 < 8) && ((0xf1U >> (ulong)(uStack_f04 & 0x1f) & 1) != 0)) {
              uStack_f04 = *(uint *)(&UNK_10df572c8 + (ulong)uStack_f04 * 4);
            }
          }
          goto LAB_1087ba3d8;
        }
        if ((0x14 < iStack_a3c - 7U) || ((0x1c907dU >> (ulong)(iStack_a3c - 7U & 0x1f) & 1) == 0)) {
          if ((uStack_f04 & 0xfffffffe) == 6) goto LAB_1087ba3d8;
          goto LAB_1087ba37c;
        }
        uStack_f04 = 7;
LAB_1087ba430:
        lVar15 = param_2[0xcf];
        FUN_108869aa4(&pppuStack_a20,*plVar12,lVar15);
        uVar5 = cStack_878 != '\0';
        if (cStack_878 == '\x01') {
          plVar21 = plVar12;
          FUN_1086a55c8(plVar12,&pppuStack_a20);
          if (((ulong)plVar21 & 1) == 0) {
            (**(code **)(*(long *)unaff_x20[9] + 0x148))((long *)unaff_x20[9],&pppuStack_a20,lVar15)
            ;
          }
          FUN_108869c18(*plVar12,lVar15,&pppuStack_a20);
          lVar15 = *plVar12;
          puStack_230 = puStack_a08;
          FUN_1086afdec(&pppuStack_840,&puStack_230,1);
          FUN_10886488c(lVar15,&pppuStack_a20,&pppuStack_840);
          func_0x00010867bb84(&pppuStack_840);
          plVar21 = (long *)unaff_x20[0xf];
          puStack_228 = (undefined *)0x0;
          puStack_230 = (undefined *)0x0;
          uStack_220 = 0;
          func_0x000107c27994(&pppuStack_860,&pppuStack_a20);
          pppuStack_830 = pppuStack_850;
          puStack_838 = puStack_858;
          pppuStack_840 = pppuStack_860;
          pppuStack_850 = (undefined8 ****)0x0;
          puStack_858 = (undefined *)0x0;
          pppuStack_860 = (undefined8 ****)0x0;
          puStack_828 = puStack_a08;
          FUN_1086ce96c(&uStack_ac0,&pppuStack_840,1);
          (**(code **)(*plVar21 + 8))(plVar21,&pppuStack_a20,&puStack_230,&uStack_ac0);
          func_0x0001087bbc40();
          func_0x000107c27914(&pppuStack_840);
          func_0x000107c27914(&pppuStack_860);
          func_0x00010867b9fc(&puStack_230);
        }
        else {
          iVar6 = (int)param_2 + 0x50;
          func_0x0001087bb064();
          if (iVar6 != 0) {
            (**(code **)(*(long *)unaff_x20[9] + 0x148))
                      ((long *)unaff_x20[9],param_2[0xd],param_2[0xcf]);
          }
        }
        func_0x000107c288dc(&pppuStack_a20);
        if ((uStack_f04 == 0) && (cStack_878 != '\0')) {
          lVar15 = param_2[0xd];
          lVar11 = param_2[0xe];
          plVar21 = param_2 + 10;
          func_0x0001087bb064();
          uStack_9e0 = (ulong)(param_2[0x10] != param_2[0x11]);
          uVar5 = (ulong)param_2[0x14] <= (ulong)param_2[0x13];
          uStack_9d0 = (ulong)(param_2[0x13] != param_2[0x14]);
          uStack_a00 = (ulong)plVar21 & 0xffffffff;
          uStack_a18 = 0;
          pppuStack_a20 = (undefined8 ***)&UNK_10f4bb4b2;
          puStack_a08 = (undefined *)0x0;
          uStack_9f8 = 0;
          piStack_9f0 = &iStack_a3c;
          uStack_9e8 = 0x10872a734;
          uStack_9d8 = 0;
          uStack_9c8 = 0;
          uStack_a10 = (ulong)(lVar11 - lVar15 == 0x18);
          func_0x000107c2793c(&UNK_10f4bb3bd);
          func_0x000107c3173c(&puStack_230);
          func_0x000107c31338();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&pppuStack_860,&puStack_230);
          func_0x00010bd3f128(&uStack_a38,3);
          lVar15 = unaff_x20[5];
          func_0x0001087bbca0();
          (*extraout_x8_01)();
          uStack_808 = uStack_a28;
          pppuStack_840 = (undefined8 ***)CONCAT44(pppuStack_840._4_4_,0xc);
          puStack_828 = puStack_858;
          pppuStack_830 = pppuStack_860;
          puStack_838 = (undefined *)0x7324;
          pppuStack_820 = pppuStack_850;
          puStack_858 = (undefined *)0x0;
          pppuStack_860 = (undefined8 ****)0x0;
          pppuStack_850 = (undefined8 ****)0x0;
          uStack_810 = uStack_a30;
          uStack_818 = uStack_a38;
          uStack_a30 = 0;
          uStack_a38 = 0;
          uStack_a28 = 0;
          uStack_800 = (undefined1)lVar15;
          uStack_7ff = (undefined7)((ulong)lVar15 >> 8);
          uStack_7f8 = 0;
          func_0x0001087bbc54();
          func_0x0001087bbc18();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a38);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppuStack_860);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_230);
        }
        FUN_108869b70(*plVar12,lVar8);
        FUN_1088606d0(*plVar12,param_2 + 10);
        uVar1 = uStack_f04;
      }
LAB_1087ba774:
      uStack_f04 = uVar1;
      func_0x0001087bbc78(param_2[0xe]);
      if ((bool)uVar5) {
        FUN_1087ad068(&pppuStack_a20,param_2 + 0xd);
        FUN_1087a65e4(plVar12,unaff_x20 + 9,param_2 + 0x19,&pppuStack_a20);
        func_0x000104bee748(&pppuStack_a20);
      }
      plVar21 = unaff_x20 + 0x1f;
      func_0x000107c289e8();
      if ((char)*plVar21 == '\x01') {
        FUN_1087daecc(&puStack_230,unaff_x20[0x1d],param_2 + 10,uStack_f04);
        puVar3 = puStack_228;
        for (puVar16 = puStack_230; puVar16 != puVar3; puVar16 = puVar16 + 0x18) {
          FUN_108868f84(*plVar12,lVar8,puVar16);
        }
        func_0x000107c27a04(&puStack_230);
      }
      func_0x000107c31428(auStack_a80);
      func_0x000107c31424(auStack_a80);
      lVar8 = *param_2;
      lVar15 = param_2[1];
    }
    if (lVar8 == lVar15) {
      if (uStack_f04 != 7) goto LAB_1087ba868;
LAB_1087ba89c:
      lVar8 = *(long *)(lVar15 + -0x10);
LAB_1087ba8a0:
      if ((*(char *)(lVar8 + -0x24) != '\x01') || (*(int *)(lVar8 + -0x28) == 0x1b)) {
        lVar15 = param_2[0x19];
        lVar11 = param_2[0x1a];
        if (lVar15 != lVar11) {
          plVar21 = param_2 + 10;
          FUN_1087bb020();
          if ((long *)((lVar11 - lVar15) / 0x18) == plVar21) {
            lVar15 = param_2[0x19];
            lVar11 = param_2[0x1a];
            do {
              if (lVar15 == lVar11) {
                *(undefined4 *)(lVar8 + -0x28) = 2;
                *(undefined1 *)(lVar8 + -0x24) = 1;
                break;
              }
              plVar21 = (long *)unaff_x20[0x25];
              (**(code **)(*plVar21 + 0x18))(plVar21,lVar15);
              lVar15 = lVar15 + 0x18;
            } while (((ulong)plVar21 & 1) != 0);
          }
        }
      }
    }
    else {
      lVar11 = *(long *)(lVar15 + -0x10);
      if (*(long *)(lVar15 + -0x18) == lVar11) {
        if (uStack_f04 != 7) goto LAB_1087ba868;
      }
      else if (uStack_f04 != *(uint *)(lVar11 + -0x6c)) {
        *(uint *)(lVar11 + -0x6c) = uStack_f04;
LAB_1087ba868:
        func_0x0001087bbc48();
        (**(code **)(extraout_x8_03 + 0x78))();
        lVar8 = *param_2;
        lVar15 = param_2[1];
      }
      if (lVar8 == lVar15) goto LAB_1087ba89c;
      lVar8 = *(long *)(lVar15 + -0x10);
      if ((*(long *)(lVar15 + -0x18) == lVar8) || (*(int *)(lVar8 + -0x6c) == 7))
      goto LAB_1087ba8a0;
    }
    func_0x000107c28288(&ppuStack_ae0);
    FUN_1087a0ca8(&pppuStack_840,unaff_x20 + 5,unaff_x20 + 7,unaff_x20 + 0x13,unaff_x20 + 0x27,
                  unaff_x20 + 2,param_2 + 3,param_2[1] + -0x18);
    puStack_230 = (undefined *)CONCAT44(puStack_230._4_4_,0x16);
    ppppuVar18 = (undefined8 ****)&ppuStack_ae0;
    FUN_1087b023c();
    pppuStack_a20 = ppppuVar18;
    FUN_10863a5a8(auStack_380,&puStack_230,&pppuStack_a20);
    FUN_10879f370(&pppuStack_a20,param_2[1] + -0x18);
    FUN_1087a1b9c(unaff_x20 + 0x11,unaff_x20 + 0xf,param_2 + 3,&pppuStack_840,&pppuStack_a20);
    func_0x000108794638(&pppuStack_a20);
    func_0x0001087bbc20();
    lVar8 = param_2[1];
    if (*param_2 == lVar8) {
      lVar15 = *(long *)(lVar8 + -0x10);
LAB_1087ba9cc:
      uVar10 = 7;
    }
    else {
      lVar15 = *(long *)(lVar8 + -0x10);
      if (*(long *)(lVar8 + -0x18) == lVar15) goto LAB_1087ba9cc;
      uVar10 = *(undefined4 *)(lVar15 + -0x6c);
    }
    uStack_ac0 = *(undefined8 *)(lVar15 + -0x28);
    if (*(char *)((long)param_2 + 0x9a1) == '\x01') {
      func_0x0001087bbc48();
      func_0x0001087bbbf8(*(undefined8 *)(extraout_x8_04 + 0x30));
    }
    if (*(char *)((long)param_2 + 0x9a2) == '\x01') {
      func_0x0001087bbc48();
      func_0x0001087bbbf8(*(undefined8 *)(extraout_x8_05 + 0x38));
    }
    uVar5 = (char)param_2[0x141] == '\x01';
    if ((bool)uVar5) {
      func_0x0001087bbc48();
      func_0x0001087bbbf8(*(undefined8 *)(extraout_x8_06 + 0x40));
    }
    func_0x0001087bbc48();
    (**(code **)(extraout_x8_07 + 0x18))();
    plVar21 = (long *)unaff_x20[0xd];
    func_0x000107c27994(auStack_b60,param_2 + 6);
    func_0x0001087ad084(auStack_ef0,param_2 + 0x29);
    FUN_10864094c(&pppuStack_840,auStack_b60,0,auStack_ef0);
    (**(code **)(*plVar21 + 0x20))(plVar21,&pppuStack_840,uVar10);
    FUN_108798a4c(&pppuStack_840);
    func_0x00010863f788(auStack_ef0);
    func_0x000107c27914(auStack_b60);
    (**(code **)(*(long *)unaff_x20[0x1b] + 0x28))((long *)unaff_x20[0x1b],param_2 + 10,uVar10);
    if (lStack_ac8 == 0) {
      __ZNSt13exception_ptrD1Ev(&lStack_ac8);
      goto LAB_1087baac0;
    }
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_ef8,&lStack_ac8);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_ef8);
LAB_1087bab88:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1087bab8c);
  (*pcVar4)();
}



/* Entry: 1087bb020; end: 1087bb08f;  */

long FUN_1087bb020(long param_1)

{
  return (*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90)) / 0x58 +
         (*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78)) / 0x18 +
         (*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8)) / 0x18 +
         (*(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0) >> 2);
}



/* Entry: 1087bb090; end: 1087bb3bf;  */

void FUN_1087bb090(long param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  long *param_6)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint uVar11;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar5 = param_3;
    plVar7 = param_4;
    plVar8 = param_5;
    plVar9 = param_6;
    func_0x0001087bbcac();
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    plVar4 = plVar7;
    FUN_1088699e4(*(undefined8 *)(param_1 + 0x38));
    bVar2 = 0x17 < (ulong)(param_5[1] - *param_5);
    uVar3 = param_5[1] - *param_5 == 0x18;
    unaff_x21 = param_5;
    unaff_x22 = param_4;
    unaff_x23 = param_6;
    unaff_x24 = param_2;
    if ((bool)uVar3) {
      func_0x0001087bbc78(param_3[4]);
      if (bVar2) {
        plVar4 = unaff_x20 + 2;
        plVar8 = param_3;
        plVar9 = param_4;
        FUN_1087a20f8((undefined1 *)((long)register0x00000008 + -0x3c8),param_2,unaff_x20[7],
                      unaff_x20[0x17]);
        func_0x000107c288dc((undefined1 *)((long)register0x00000008 + -0x3c8));
      }
      FUN_108869aa4((undefined1 *)((long)register0x00000008 + -0x578),unaff_x20[7],param_3[0xc5]);
      bVar1 = *(byte *)((long)register0x00000008 + -0x3d0);
      unaff_x24 = (long *)(ulong)bVar1;
      if ((bVar1 & 1) == 0) {
        uVar11 = 0x5e020a;
        if (((ulong)param_6 & 0x100000000) != 0) {
          uVar11 = (uint)param_6;
        }
        unaff_x22 = (long *)unaff_x20[0x13];
        *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
        *(undefined ***)((long)register0x00000008 + -0x200) = &PTR_FUN_110a609a8;
        *(undefined4 *)((long)register0x00000008 + -0x1e0) = 0x1c0;
        if (uVar11 >> 0x11 < 0x47) {
          puVar6 = (&PTR_DAT_113268bb8)[uVar11 >> 0x10];
        }
        else {
          puVar6 = &UNK_10f3158b1;
        }
        func_0x000107c278b8((undefined1 *)((long)register0x00000008 + -0x218),puVar6);
        uVar11 = uVar11 & 0xffff;
        uVar3 = uVar11 == 0x2b7;
        if (uVar11 < 0x2b8) {
          puVar6 = (&PTR_s_success_113269028)[uVar11];
        }
        else {
          puVar6 = &UNK_10f3158c2;
        }
        unaff_x23 = (long *)((long)register0x00000008 + -0x200);
        func_0x000107c28824(unaff_x23,(undefined1 *)((long)register0x00000008 + -0x218),puVar6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                  ((undefined1 *)((long)register0x00000008 + -0x218));
        func_0x000107c2884c((undefined1 *)((long)register0x00000008 + -0x5a0),unaff_x23);
        (**(code **)(*unaff_x22 + 0x50))
                  (unaff_x22,(undefined1 *)((long)register0x00000008 + -0x5a0));
        func_0x000107c2882c((undefined1 *)((long)register0x00000008 + -0x5a0));
        func_0x000107c2882c((undefined1 *)((long)register0x00000008 + -0x200));
        plVar7 = (long *)param_3[0xc5];
        (**(code **)(*(long *)unaff_x20[9] + 0x148))((long *)unaff_x20[9],*param_5);
        FUN_108869b70(unaff_x20[7],param_3[0xc5]);
        FUN_1088606d0(unaff_x20[7]);
        plVar5 = param_3;
      }
      else {
        unaff_x21 = (long *)unaff_x20[0xf];
        func_0x000107c28a9c((undefined1 *)((long)register0x00000008 + -0x200),
                            (undefined1 *)((long)register0x00000008 + -0x578));
        FUN_1086cc028((undefined1 *)((long)register0x00000008 + -0x218),
                      (undefined1 *)((long)register0x00000008 + -0x200),1);
        *(undefined8 *)((long)register0x00000008 + -0x5b8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x5b0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x5a8) = 0;
        plVar5 = (long *)((long)register0x00000008 + -0x578);
        plVar7 = (long *)((long)register0x00000008 + -0x218);
        plVar4 = (long *)((long)register0x00000008 + -0x5b8);
        (**(code **)(*unaff_x21 + 8))(unaff_x21);
        func_0x000104be1274((undefined1 *)((long)register0x00000008 + -0x5b8));
        func_0x00010867b9fc((undefined1 *)((long)register0x00000008 + -0x218));
        func_0x000107c288e0((undefined1 *)((long)register0x00000008 + -0x200));
        if ((int)param_4 == 0) {
          unaff_x20 = (long *)unaff_x20[9];
          unaff_x21 = (long *)param_3[0xc5];
          plVar4 = param_3 + 0x1f;
          FUN_1088464c0();
          lVar10 = 0x50;
        }
        else {
          uVar3 = (int)param_4 == 3;
          if (!(bool)uVar3) goto LAB_1087bb300;
          unaff_x20 = (long *)unaff_x20[9];
          unaff_x21 = (long *)param_3[0xc5];
          plVar4 = param_3 + 0x1f;
          FUN_1088464c0();
          lVar10 = 0x58;
        }
        plVar9 = (long *)(param_3[0xc4] * 1000);
        plVar5 = (long *)((long)register0x00000008 + -0x578);
        plVar8 = (long *)0x2;
        plVar7 = unaff_x21;
        (**(code **)(*unaff_x20 + lVar10))(unaff_x20);
      }
LAB_1087bb300:
      func_0x000107c288dc((undefined1 *)((long)register0x00000008 + -0x578));
      if ((bVar1 & 1) != 0) goto LAB_1087bb30c;
      unaff_x19 = 1;
      param_2 = plVar5;
      param_3 = plVar7;
      param_4 = plVar4;
      param_5 = plVar8;
      param_6 = plVar9;
    }
    else {
LAB_1087bb30c:
      unaff_x19 = 0;
      param_2 = plVar5;
      param_3 = plVar7;
      param_4 = plVar4;
      param_5 = plVar8;
      param_6 = plVar9;
    }
    func_0x0001087bbc8c(*(undefined8 *)((long)register0x00000008 + -0x58));
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107c2882c((undefined1 *)((long)register0x00000008 + -0x5a0));
    func_0x000107c2882c((undefined1 *)((long)register0x00000008 + -0x200));
    func_0x000107c288dc((undefined1 *)((long)register0x00000008 + -0x578));
    unaff_x30 = FUN_1087bb3c0;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x5c0);
  } while( true );
}



/* Entry: 1087bb3c0; end: 1087bb3c7;  */

void FUN_1087bb3c0(long param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  long *param_6)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  long lVar10;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint uVar11;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    param_1 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x27;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar5 = param_3;
    plVar7 = param_4;
    plVar8 = param_5;
    plVar9 = param_6;
    func_0x0001087bbcac();
    *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
    plVar4 = plVar7;
    FUN_1088699e4(*(undefined8 *)(param_1 + 0x38));
    bVar2 = 0x17 < (ulong)(param_5[1] - *param_5);
    uVar3 = param_5[1] - *param_5 == 0x18;
    unaff_x21 = param_5;
    unaff_x22 = param_4;
    unaff_x23 = param_6;
    unaff_x24 = param_2;
    if ((bool)uVar3) {
      func_0x0001087bbc78(param_3[4]);
      if (bVar2) {
        plVar4 = unaff_x20 + 2;
        plVar8 = param_3;
        plVar9 = param_4;
        FUN_1087a20f8((undefined1 *)((long)register0x00000008 + -0x3c8),param_2,unaff_x20[7],
                      unaff_x20[0x17]);
        func_0x000107c288dc((undefined1 *)((long)register0x00000008 + -0x3c8));
      }
      FUN_108869aa4((undefined1 *)((long)register0x00000008 + -0x578),unaff_x20[7],param_3[0xc5]);
      bVar1 = *(byte *)((long)register0x00000008 + -0x3d0);
      unaff_x24 = (long *)(ulong)bVar1;
      if ((bVar1 & 1) == 0) {
        uVar11 = 0x5e020a;
        if (((ulong)param_6 & 0x100000000) != 0) {
          uVar11 = (uint)param_6;
        }
        unaff_x22 = (long *)unaff_x20[0x13];
        *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
        *(undefined ***)((long)register0x00000008 + -0x200) = &PTR_FUN_110a609a8;
        *(undefined4 *)((long)register0x00000008 + -0x1e0) = 0x1c0;
        if (uVar11 >> 0x11 < 0x47) {
          puVar6 = (&PTR_DAT_113268bb8)[uVar11 >> 0x10];
        }
        else {
          puVar6 = &UNK_10f3158b1;
        }
        func_0x000107c278b8((undefined1 *)((long)register0x00000008 + -0x218),puVar6);
        uVar11 = uVar11 & 0xffff;
        uVar3 = uVar11 == 0x2b7;
        if (uVar11 < 0x2b8) {
          puVar6 = (&PTR_s_success_113269028)[uVar11];
        }
        else {
          puVar6 = &UNK_10f3158c2;
        }
        unaff_x23 = (long *)((long)register0x00000008 + -0x200);
        func_0x000107c28824(unaff_x23,(undefined1 *)((long)register0x00000008 + -0x218),puVar6);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                  ((undefined1 *)((long)register0x00000008 + -0x218));
        func_0x000107c2884c((undefined1 *)((long)register0x00000008 + -0x5a0),unaff_x23);
        (**(code **)(*unaff_x22 + 0x50))
                  (unaff_x22,(undefined1 *)((long)register0x00000008 + -0x5a0));
        func_0x000107c2882c((undefined1 *)((long)register0x00000008 + -0x5a0));
        func_0x000107c2882c((undefined1 *)((long)register0x00000008 + -0x200));
        plVar7 = (long *)param_3[0xc5];
        (**(code **)(*(long *)unaff_x20[9] + 0x148))((long *)unaff_x20[9],*param_5);
        FUN_108869b70(unaff_x20[7],param_3[0xc5]);
        FUN_1088606d0(unaff_x20[7]);
        plVar5 = param_3;
      }
      else {
        unaff_x21 = (long *)unaff_x20[0xf];
        func_0x000107c28a9c((undefined1 *)((long)register0x00000008 + -0x200),
                            (undefined1 *)((long)register0x00000008 + -0x578));
        FUN_1086cc028((undefined1 *)((long)register0x00000008 + -0x218),
                      (undefined1 *)((long)register0x00000008 + -0x200),1);
        *(undefined8 *)((long)register0x00000008 + -0x5b8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x5b0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x5a8) = 0;
        plVar5 = (long *)((long)register0x00000008 + -0x578);
        plVar7 = (long *)((long)register0x00000008 + -0x218);
        plVar4 = (long *)((long)register0x00000008 + -0x5b8);
        (**(code **)(*unaff_x21 + 8))(unaff_x21);
        func_0x000104be1274((undefined1 *)((long)register0x00000008 + -0x5b8));
        func_0x00010867b9fc((undefined1 *)((long)register0x00000008 + -0x218));
        func_0x000107c288e0((undefined1 *)((long)register0x00000008 + -0x200));
        if ((int)param_4 == 0) {
          unaff_x20 = (long *)unaff_x20[9];
          unaff_x21 = (long *)param_3[0xc5];
          plVar4 = param_3 + 0x1f;
          FUN_1088464c0();
          lVar10 = 0x50;
        }
        else {
          uVar3 = (int)param_4 == 3;
          if (!(bool)uVar3) goto LAB_1087bb300;
          unaff_x20 = (long *)unaff_x20[9];
          unaff_x21 = (long *)param_3[0xc5];
          plVar4 = param_3 + 0x1f;
          FUN_1088464c0();
          lVar10 = 0x58;
        }
        plVar9 = (long *)(param_3[0xc4] * 1000);
        plVar5 = (long *)((long)register0x00000008 + -0x578);
        plVar8 = (long *)0x2;
        plVar7 = unaff_x21;
        (**(code **)(*unaff_x20 + lVar10))(unaff_x20);
      }
LAB_1087bb300:
      func_0x000107c288dc((undefined1 *)((long)register0x00000008 + -0x578));
      if ((bVar1 & 1) != 0) goto LAB_1087bb30c;
      unaff_x19 = 1;
      param_2 = plVar5;
      param_3 = plVar7;
      param_4 = plVar4;
      param_5 = plVar8;
      param_6 = plVar9;
    }
    else {
LAB_1087bb30c:
      unaff_x19 = 0;
      param_2 = plVar5;
      param_3 = plVar7;
      param_4 = plVar4;
      param_5 = plVar8;
      param_6 = plVar9;
    }
    func_0x0001087bbc8c(*(undefined8 *)((long)register0x00000008 + -0x58));
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107c2882c((undefined1 *)((long)register0x00000008 + -0x5a0));
    func_0x000107c2882c((undefined1 *)((long)register0x00000008 + -0x200));
    func_0x000107c288dc((undefined1 *)((long)register0x00000008 + -0x578));
    unaff_x30 = FUN_1087bb3c0;
    param_1 = unaff_x19;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x5c0);
  } while( true );
}



/* Entry: 1087bb3c8; end: 1087bb677;  */

void FUN_1087bb3c8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                  long *param_6,long *param_7,long *param_8)

{
  undefined1 *puVar1;
  undefined ***pppuVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined1 auStack_260 [40];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [448];
  
  func_0x000107c29f60(auStack_238,*(undefined8 *)(param_1 + 0x38),param_2,0);
  plVar5 = *(long **)(param_1 + 0x98);
  uStack_278 = 0;
  uStack_270 = 0;
  ppuStack_288 = &PTR_FUN_110a609a8;
  uStack_280 = 0;
  uStack_268 = 0xa1;
  puVar1 = auStack_220;
  func_0x000107c29e74(puVar1);
  pppuVar2 = &ppuStack_288;
  func_0x000107c29054(pppuVar2,(int)puVar1 + 0x41019f);
  FUN_1086b7f30();
  func_0x000107c2884c(auStack_260,pppuVar2);
  (**(code **)(*plVar5 + 0x50))(plVar5,auStack_260);
  func_0x000107c2882c(auStack_260);
  func_0x000107c2882c(&ppuStack_288);
  *(undefined1 *)(param_2 + 0x178) = 1;
  plVar5 = *(long **)(param_1 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = param_2 + 0x50;
  func_0x000107c29e78(lVar3);
  (**(code **)(*plVar5 + 0x60))
            (plVar5,param_2,param_3,uVar6,lVar3,1,*(long *)(param_2 + 0xe0) * 1000,param_4);
  FUN_108869c18(*(undefined8 *)(param_1 + 0x38),param_3,param_2);
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  FUN_10886449c(*(undefined8 *)(param_1 + 0x38),param_2);
  ppuStack_288 = (undefined **)0x0;
  uStack_280 = 0;
  uStack_278 = 0;
  FUN_10867d03c(&ppuStack_288,(param_5[1] - *param_5) / 0x1a8 + (param_7[1] - *param_7) / 0x1a8 + 1)
  ;
  uVar4 = param_2;
  func_0x000107c28e64();
  if ((uVar4 & 1) == 0) {
    func_0x0001086aa5b8(&ppuStack_288,param_2);
  }
  func_0x0001086c07a8(&ppuStack_288,uStack_280,*param_5,param_5[1]);
  func_0x0001086c07a8(&ppuStack_288,uStack_280,*param_7,param_7[1]);
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_290 = 0;
  func_0x000104be7444(&uStack_2a0,(param_8[1] - *param_8 >> 5) + (param_6[1] - *param_6 >> 5));
  FUN_1087bb678(&uStack_2a0,uStack_298,*param_6,param_6[1]);
  FUN_1087bb678(&uStack_2a0,uStack_298,*param_8,param_8[1]);
  (**(code **)**(undefined8 **)(param_1 + 0x78))
            (*(undefined8 **)(param_1 + 0x78),auStack_238,auStack_238,0,&ppuStack_288,&uStack_2a0);
  func_0x000104be1274(&uStack_2a0);
  func_0x00010867b9fc(&ppuStack_288);
  func_0x000107c287e4(auStack_238);
  return;
}



/* Entry: 1087bb678; end: 1087bb847;  */

void FUN_1087bb678(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  lVar5 = param_4 - param_3;
  lVar4 = lVar5 >> 5;
  if (0 < lVar4) {
    plVar2 = param_1 + 2;
    lVar3 = param_1[1];
    if (lVar5 <= *plVar2 - lVar3) {
      lVar5 = lVar3 - param_2 >> 5;
      if (lVar5 < lVar4) {
        FUN_1086cea28(plVar2,param_3 + (lVar3 - param_2),param_4,lVar3);
        param_1[1] = (long)plVar2;
        if (lVar5 < 1) {
          return;
        }
        func_0x0001087bbc04();
        lVar4 = lVar5;
      }
      else {
        func_0x0001087bbc04();
      }
      for (lVar4 = lVar4 << 5; lVar4 != 0; lVar4 = lVar4 + -0x20) {
        func_0x000107c28b80(auStack_58,param_3);
        func_0x00010869df80(param_2,auStack_58);
        func_0x000107c27914(auStack_58);
        param_2 = param_2 + 0x20;
        param_3 = param_3 + 0x20;
      }
      return;
    }
    plVar1 = param_1;
    func_0x000104be77f0(param_1,lVar4 + (lVar3 - *param_1 >> 5));
    func_0x000104be74ec(&lStack_78,plVar1,param_2 - *param_1 >> 5,plVar2);
    lVar4 = lStack_68 + lVar5;
    for (; lVar5 != 0; lVar5 = lVar5 + -0x20) {
      func_0x000107c28b80(lStack_68,param_3);
      lStack_68 = lStack_68 + 0x20;
      param_3 = param_3 + 0x20;
    }
    lStack_68 = lVar4;
    func_0x000104be7574(plVar2,param_2,param_1[1],lVar4);
    lStack_68 = lStack_68 + (param_1[1] - param_2);
    param_1[1] = param_2;
    lVar4 = lStack_70 + (*param_1 - param_2);
    func_0x000104be7574(plVar2,*param_1,param_2,lVar4);
    lStack_78 = *param_1;
    *param_1 = lVar4;
    lVar4 = param_1[2];
    param_1[2] = lStack_60;
    param_1[1] = lStack_68;
    lStack_70 = lStack_78;
    lStack_68 = lStack_78;
    lStack_60 = lVar4;
    func_0x000104be769c(&lStack_78);
  }
  return;
}



/* Entry: 1087bb848; end: 1087bb84b;  */

undefined8 * FUN_1087bb848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70dd8;
  param_1[1] = &PTR_FUN_110a70e08;
  func_0x000107c27914(param_1 + 0x29);
  func_0x000107c29778(param_1 + 0x27);
  func_0x000107c297ac(param_1 + 0x25);
  func_0x000107c289f8(param_1 + 0x1f);
  func_0x000107c2999c(param_1 + 0x1d);
  func_0x000107c29954(param_1 + 0x1b);
  func_0x000107c28858(param_1 + 0x19);
  func_0x000107c29194(param_1 + 0x17);
  func_0x000107c27c20(param_1 + 0x15);
  func_0x000107c288a4(param_1 + 0x13);
  func_0x000107c29948(param_1 + 0x11);
  func_0x000107c28ab8(param_1 + 0xf);
  func_0x000107c29958(param_1 + 0xd);
  func_0x000107c2814c(param_1 + 0xb);
  func_0x000107c28ab4(param_1 + 9);
  func_0x000107c28808(param_1 + 7);
  func_0x000107c28800(param_1 + 5);
  func_0x000107c27914(param_1 + 2);
  return param_1;
}



/* Entry: 1087bb84c; end: 1087bb85f;  */

void FUN_1087bb84c(void)

{
  FUN_1087bbb18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087bb860; end: 1087bb86f;  */

undefined8 * FUN_1087bb860(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_110a70dd8;
  *param_1 = &PTR_FUN_110a70e08;
  func_0x000107c27914(param_1 + 0x28);
  func_0x000107c29778(param_1 + 0x26);
  func_0x000107c297ac(param_1 + 0x24);
  func_0x000107c289f8(param_1 + 0x1e);
  func_0x000107c2999c(param_1 + 0x1c);
  func_0x000107c29954(param_1 + 0x1a);
  func_0x000107c28858(param_1 + 0x18);
  func_0x000107c29194(param_1 + 0x16);
  func_0x000107c27c20(param_1 + 0x14);
  func_0x000107c288a4(param_1 + 0x12);
  func_0x000107c29948(param_1 + 0x10);
  func_0x000107c28ab8(param_1 + 0xe);
  func_0x000107c29958(param_1 + 0xc);
  func_0x000107c2814c(param_1 + 10);
  func_0x000107c28ab4(param_1 + 8);
  func_0x000107c28808(param_1 + 6);
  func_0x000107c28800(param_1 + 4);
  func_0x000107c27914(param_1 + 1);
  return param_1 + -1;
}



/* Entry: 1087bb870; end: 1087bbaa7;  */

undefined * FUN_1087bb870(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  plVar8 = (long *)param_1[1];
  if ((plVar8 != (long *)0x0) && (param_1[3] != 0)) {
    plVar3 = param_1;
    func_0x0001087bbc60();
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      plVar10 = (long *)((ulong)plVar3 & uVar9);
    }
    else {
      plVar10 = plVar3;
      if (plVar8 <= plVar3) {
        uVar1 = 0;
        uVar7 = (uint)plVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)plVar3 / uVar7;
        }
        plVar10 = (long *)(ulong)((uint)plVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)plVar10 * 8);
    plVar4 = plVar3;
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1087bb924;
          plVar5 = (long *)plVar6[1];
          if (plVar3 != plVar5) break;
          func_0x0001087bbc6c();
          if ((int)plVar4 != 0) goto LAB_1087bb924;
        }
        if (((ulong)plVar8 & uVar9) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar9);
        }
        else if (plVar8 <= plVar5) {
          uVar2 = 0;
          if (plVar8 != (long *)0x0) {
            uVar2 = (ulong)plVar5 / (ulong)plVar8;
          }
          plVar5 = (long *)((long)plVar5 - uVar2 * (long)plVar8);
        }
      } while (plVar5 == plVar10);
      plVar6 = (long *)0x0;
LAB_1087bb924:
      if (plVar6 != (long *)0x0) {
        return (undefined *)((long)plVar6 + 0x28);
      }
    }
  }
  return &UNK_10df57298;
}



/* Entry: 1087bbaa8; end: 1087bbb17;  */

void FUN_1087bbaa8(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_58 [32];
  long lStack_38;
  
  for (param_3 = param_3 << 5; param_3 != 0; param_3 = param_3 + -0x20) {
    lStack_38 = param_1 + 0x10;
    func_0x000107c28b80(auStack_58,param_2);
    func_0x00010869df80(param_4,auStack_58);
    func_0x000107c27914(auStack_58);
    param_4 = param_4 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



/* Entry: 1087bbb18; end: 1087bbbd3;  */

undefined8 * FUN_1087bbb18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70dd8;
  param_1[1] = &PTR_FUN_110a70e08;
  func_0x000107c27914(param_1 + 0x29);
  func_0x000107c29778(param_1 + 0x27);
  func_0x000107c297ac(param_1 + 0x25);
  func_0x000107c289f8(param_1 + 0x1f);
  func_0x000107c2999c(param_1 + 0x1d);
  func_0x000107c29954(param_1 + 0x1b);
  func_0x000107c28858(param_1 + 0x19);
  func_0x000107c29194(param_1 + 0x17);
  func_0x000107c27c20(param_1 + 0x15);
  func_0x000107c288a4(param_1 + 0x13);
  func_0x000107c29948(param_1 + 0x11);
  func_0x000107c28ab8(param_1 + 0xf);
  func_0x000107c29958(param_1 + 0xd);
  func_0x000107c2814c(param_1 + 0xb);
  func_0x000107c28ab4(param_1 + 9);
  func_0x000107c28808(param_1 + 7);
  func_0x000107c28800(param_1 + 5);
  func_0x000107c27914(param_1 + 2);
  return param_1;
}



/* Entry: 1087bbbd4; end: 1087bbcbf;  */

void FUN_1087bbbd4(void)

{
  return;
}



/* Entry: 1087bbcc0; end: 1087bbd7b;  */

void FUN_1087bbcc0(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auStack_658 [24];
  undefined1 auStack_640 [1552];
  
  if (*param_3 != param_3[1]) {
    FUN_1087a0ca8(auStack_640,param_1 + 0x48,param_1 + 0x58,param_1 + 0x38,param_1 + 0x68,
                  param_1 + 0x78,param_2,param_3);
    FUN_10879f370(auStack_658,param_3);
    FUN_1087a1b9c(param_1 + 0x28,param_1 + 0x18,param_2,auStack_640,auStack_658);
    func_0x000108794638(auStack_658);
    func_0x000108686860(auStack_640);
  }
  return;
}



/* Entry: 1087bbd7c; end: 1087bbd7f;  */

undefined8 * FUN_1087bbd7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70e88;
  func_0x000107c27914(param_1 + 0xf);
  func_0x000107c29778(param_1 + 0xd);
  func_0x000107c28808(param_1 + 0xb);
  func_0x000107c28800(param_1 + 9);
  func_0x000107c288a4(param_1 + 7);
  func_0x000107c29948(param_1 + 5);
  func_0x000107c28ab8(param_1 + 3);
  func_0x000107c27c20(param_1 + 1);
  return param_1;
}



/* Entry: 1087bbd80; end: 1087bbd93;  */

void FUN_1087bbd80(void)

{
  FUN_1087bbd94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087bbd94; end: 1087bbe03;  */

undefined8 * FUN_1087bbd94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70e88;
  func_0x000107c27914(param_1 + 0xf);
  func_0x000107c29778(param_1 + 0xd);
  func_0x000107c28808(param_1 + 0xb);
  func_0x000107c28800(param_1 + 9);
  func_0x000107c288a4(param_1 + 7);
  func_0x000107c29948(param_1 + 5);
  func_0x000107c28ab8(param_1 + 3);
  func_0x000107c27c20(param_1 + 1);
  return param_1;
}



/* Entry: 1087bbe04; end: 1087bbeab;  */

void FUN_1087bbe04(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + 1) = 3;
  *param_1 = &PTR_FUN_110a70ed8;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar5;
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
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[5] = param_3[1];
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
  lVar4 = param_4[1];
  uVar5 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar5;
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
  lVar4 = param_5[1];
  uVar5 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar5;
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



/* Entry: 1087bbeac; end: 1087bc057;  */

undefined8 * FUN_1087bbeac(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 auStack_e8 [3];
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_68;
  undefined1 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001087a93b4(auStack_e8);
  FUN_1087a9334(param_1,auStack_e8);
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  uVar1 = *(ulong *)(param_3 + 0xa0);
  for (uVar5 = *(ulong *)(param_3 + 0x98); lVar3 = lStack_c8, lVar2 = lStack_d0, uVar5 != uVar1;
      uVar5 = uVar5 + 0x18) {
    uVar7 = uVar5;
    (**(code **)(**(long **)(param_2 + 0x30) + 0x18))();
    if ((uVar7 & 1) != 0) {
      func_0x000107c28840(&lStack_d0,uVar5);
    }
  }
  if (lStack_d0 != lStack_c8) {
    uVar5 = param_3 + 0x20;
    FUN_1087bb020();
    lVar4 = lStack_c8;
    lVar9 = lStack_d0;
    if (uVar5 <= (ulong)((lVar3 - lVar2) / 0x18)) {
      uStack_b4 = 3;
      goto LAB_1087bbf9c;
    }
    for (; lVar9 != lVar4; lVar9 = lVar9 + 0x18) {
      FUN_10879cf30(param_3 + 0x20,lVar9,0);
      func_0x000107c28840(param_3 + 0x8e0,lVar9);
    }
  }
  uStack_b4 = 0;
LAB_1087bbf9c:
  uStack_b8 = 3;
  uStack_b0 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  puVar8 = &uStack_b8;
  func_0x0001087a9380(auStack_e8);
  func_0x0001087a3420(&uStack_b8);
  func_0x000107c27a04(&lStack_d0);
  while( true ) {
    puVar6 = auStack_e8;
    func_0x000107c27fb8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return puVar6;
    }
    ___stack_chk_fail();
    if ((int)puVar8 == 0) break;
    func_0x000107c27a04(&lStack_d0);
    ___cxa_begin_catch(puVar6);
    func_0x0001053360b0(auStack_e8);
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  *puVar6 = &PTR_FUN_110a70ed8;
  func_0x000107c288a4(puVar6 + 8);
  func_0x000107c2979c(puVar6 + 6);
  func_0x000107c28800(puVar6 + 4);
  func_0x000107c28808(puVar6 + 2);
  return puVar6;
}



/* Entry: 1087bc058; end: 1087bc05b;  */

undefined8 * FUN_1087bc058(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70ed8;
  func_0x000107c288a4(param_1 + 8);
  func_0x000107c2979c(param_1 + 6);
  func_0x000107c28800(param_1 + 4);
  func_0x000107c28808(param_1 + 2);
  return param_1;
}



/* Entry: 1087bc05c; end: 1087bc06f;  */

void FUN_1087bc05c(void)

{
  FUN_1087bc070();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087bc070; end: 1087bc0bf;  */

undefined8 * FUN_1087bc070(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70ed8;
  func_0x000107c288a4(param_1 + 8);
  func_0x000107c2979c(param_1 + 6);
  func_0x000107c28800(param_1 + 4);
  func_0x000107c28808(param_1 + 2);
  return param_1;
}



/* Entry: 1087bc0c0; end: 1087bc1b7;  */

undefined8 *
FUN_1087bc0c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = 4;
  *param_1 = &PTR_FUN_110a70f18;
  uVar1 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  uVar1 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  *param_4 = 0;
  param_4[1] = 0;
  uVar1 = *param_5;
  param_1[9] = param_5[1];
  param_1[8] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_6;
  param_1[0xb] = param_6[1];
  param_1[10] = uVar1;
  *param_6 = 0;
  param_6[1] = 0;
  uVar1 = *param_7;
  param_1[0xd] = param_7[1];
  param_1[0xc] = uVar1;
  *param_7 = 0;
  param_7[1] = 0;
  FUN_1087bc1b8(param_1 + 0xe,param_9);
  return param_1;
}



/* Entry: 1087bc1b8; end: 1087bc1c3;  */

undefined8 * FUN_1087bc1b8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110d120c8;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  func_0x0001004a6864(param_1,param_2);
  return param_1;
}



/* Entry: 1087bc1c4; end: 1087bc633;  */

void FUN_1087bc1c4(undefined8 param_1,long param_2,long param_3,long *param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint extraout_w8;
  int extraout_w8_00;
  undefined8 extraout_x8;
  long lVar10;
  long *plVar11;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar12;
  long *plVar13;
  long lVar14;
  undefined1 auStack_e0 [8];
  undefined4 auStack_d8 [2];
  undefined8 auStack_d0 [3];
  undefined1 uStack_b8;
  undefined1 uStack_b4;
  undefined8 uStack_68;
  
  func_0x0001087be130();
  puVar7 = (undefined8 *)0x140;
  uStack_68 = extraout_x8;
  __Znwm();
  *puVar7 = FUN_1087bdf14;
  puVar7[1] = FUN_1087be040;
  puVar7[0x24] = param_2;
  puVar7[0x25] = param_3;
  func_0x0001087a93b4(puVar7 + 2);
  FUN_1087a9334(param_1,puVar7 + 2);
  plVar13 = puVar7 + 0x19;
  *plVar13 = 0;
  puVar7[0x1a] = 0;
  puVar7[0x1b] = 0;
  lVar10 = *(long *)(param_3 + 0x98);
  lVar14 = *(long *)(param_3 + 0xa0);
  do {
    if (lVar10 == lVar14) break;
    FUN_10885edd8(auStack_d8,*(undefined8 *)(param_2 + 0x30),lVar10);
    FUN_108663a10(puVar7 + 0xc,auStack_d8);
    FUN_108656820(auStack_d8);
    bVar2 = *(byte *)(puVar7 + 0x12);
    if ((bVar2 & 1) == 0) {
      auStack_d8[0] = 7;
      func_0x000107c27994(auStack_d0,lVar10);
      uStack_b8 = 0;
      uStack_b4 = 0;
      FUN_1087bc67c(auStack_e0,auStack_d8);
      FUN_1087bc634(plVar13,auStack_e0);
      func_0x000107c27f9c(auStack_e0);
      puVar8 = auStack_d0;
LAB_1087bc308:
      func_0x000107c27914(puVar8);
    }
    else if ((*(char *)((long)puVar7 + 0x8c) == '\x01') && (*(int *)(puVar7 + 0x11) == 0)) {
      func_0x000108656b70(puVar7 + 0x13,puVar7 + 0xc);
      FUN_1087bc6dc(auStack_d8,param_2,puVar7 + 0x13,param_3);
      FUN_1087bc634(plVar13,auStack_d8);
      func_0x0001087be1bc();
      puVar8 = puVar7 + 0x13;
      goto LAB_1087bc308;
    }
    FUN_1086569a0(puVar7 + 0xc);
    lVar10 = lVar10 + 0x18;
  } while ((bVar2 & 1) != 0);
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  *(undefined1 *)(puVar7 + 0x26) = 0;
  *(undefined1 *)((long)puVar7 + 0x134) = 0;
  puVar8 = (undefined8 *)puVar7[0x1a];
  uVar4 = puVar8 <= (undefined8 *)puVar7[0x19];
  uVar6 = (undefined8 *)puVar7[0x19] == puVar8;
  if (!(bool)uVar6) {
    FUN_1087bcc74(puVar7 + 0x1f);
    puVar7[0x22] = puVar7[0x1f];
    if (puVar7[0x1f] != 0) {
      do {
        func_0x0001087be084();
      } while (extraout_w10 != 0);
    }
    lVar10 = *param_4;
    puVar7[0x23] = lVar10;
    if (lVar10 != 0) {
      do {
        func_0x0001087be084();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107c278b8(puVar7 + 0x1c,&UNK_10f4bb582);
    plVar9 = puVar7 + 0x22;
    puVar8 = puVar7 + 0x23;
    FUN_1087ae498(puVar7 + 0x21,plVar9,puVar8,puVar7 + 0x1c);
    puVar7[0x20] = puVar7[0x21];
    do {
      func_0x0001087be084();
    } while (extraout_w10_01 != 0);
    func_0x0001087be31c(puVar7[0x20]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar7 + 0x27) = 0;
      lVar10 = puVar7[0x20];
      func_0x0001087be27c();
      lVar14 = *plVar9;
      if (lVar14 == 0) {
        func_0x000107c3a5c0();
        lVar14 = *plVar9;
      }
      plVar11 = (long *)(lVar10 + 0x10);
      do {
        if (*plVar11 == 0) {
          func_0x0001087be140();
          plVar11 = extraout_x8_01;
          uVar3 = extraout_w10_03;
          uVar12 = extraout_w11_00;
        }
        else {
          func_0x0001087be310();
          plVar11 = extraout_x8_00;
          uVar3 = extraout_w10_02;
          uVar12 = extraout_w11;
        }
        if ((uVar12 & 1) != 0) {
          plVar13 = *(long **)(lVar10 + 0x90);
          func_0x0001087be108();
          if ((bool)uVar6) {
            func_0x0001087be0f8();
            iVar1 = extraout_w8_00;
            if ((bool)uVar4) {
              iVar1 = extraout_w9;
            }
            plVar9 = (long *)(ulong)(iVar1 * 0x18 + 0x10);
            _malloc();
            *(char *)plVar9 = (char)iVar1;
            *(undefined1 *)((long)plVar9 + 1) = 0;
            plVar9[1] = 0;
            plVar13[1] = (long)plVar9;
            *(long **)(lVar10 + 0x90) = plVar9;
            plVar13 = plVar9;
          }
          func_0x0001087be1ac();
          *(long *)(extraout_x8_02 + 0x20) = lVar14;
          func_0x0001087be19c(*(undefined8 *)(lVar10 + 0x90));
          *(undefined8 *)(lVar10 + 0x10) = 0;
          goto LAB_1087bc4f4;
        }
      } while ((uVar3 >> 1 & 1) == 0);
    }
    func_0x000107c28834(puVar7 + 0x20);
    func_0x0001087be264();
    func_0x0001087be1e8();
    func_0x0001087be200();
    func_0x0001087be1e0();
    func_0x0001087be1f8();
    puVar8 = puVar7 + 0xc;
    plVar9 = plVar13;
    FUN_10879cb7c(plVar13,puVar8,puVar7 + 0x26);
    bVar5 = 6 < (uint)plVar9;
    uVar6 = (uint)plVar9 == 7;
    if (((bool)uVar6) && (func_0x0001087be248(), !bVar5)) {
      func_0x0001087be118(*(undefined8 *)(puVar7[0x24] + 0x30));
      *(undefined1 *)((long)puVar7 + 0x134) = 0;
    }
    func_0x0001087be220();
  }
  func_0x0001087be29c();
  FUN_1087a986c();
  func_0x0001087be2c4();
  func_0x0001087a3420(auStack_d8);
  func_0x0001087a33a8(puVar7 + 4);
  func_0x0001087be210();
  plVar9 = plVar13;
  func_0x0001087bd248(plVar13);
  while( true ) {
    func_0x0001087be0e8();
    func_0x0001087be150();
LAB_1087bc4f4:
    func_0x0001087be0bc(uStack_68);
    if ((bool)uVar6) break;
    ___stack_chk_fail();
    while ((int)puVar8 == 0) {
      __Unwind_Resume(plVar9);
      func_0x000104bd46a0();
    }
    func_0x0001087be220();
    func_0x0001087be210();
    func_0x0001087bd248(plVar13);
    ___cxa_begin_catch();
    func_0x0001087be238();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087bc634; end: 1087bc67b;  */

undefined8 * FUN_1087bc634(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar2 = puVar1 + 1;
    *puVar1 = *param_2;
    *param_2 = 0;
  }
  else {
    puVar2 = param_1;
    FUN_1087bcef4();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 1087bc67c; end: 1087bc6db;  */

void FUN_1087bc67c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_1087bd34c(&uStack_40);
  FUN_1087bd39c(uStack_38,&uStack_38,param_2);
  *param_1 = uStack_40;
  uStack_40 = 0;
  func_0x000107c27fec(&uStack_40);
  return;
}



/* Entry: 1087bc6dc; end: 1087bcc73;  */

void FUN_1087bc6dc(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  long *plVar10;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long lStack_70;
  undefined ***pppuStack_68;
  undefined8 uStack_58;
  
  func_0x0001087be130();
  puVar5 = (undefined8 *)0x358;
  uStack_58 = extraout_x8;
  __Znwm();
  *puVar5 = FUN_1087bdc54;
  puVar5[1] = FUN_1087bdeac;
  puVar5[0x68] = param_2;
  plVar12 = puVar5 + 0x59;
  lVar13 = *param_3;
  puVar5[0x5a] = param_3[1];
  *plVar12 = lVar13;
  puVar5[0x5b] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  lVar13 = param_3[3];
  puVar5[0x5d] = param_3[4];
  puVar5[0x5c] = lVar13;
  *(undefined8 *)((long)puVar5 + 0x2ed) = *(undefined8 *)((long)param_3 + 0x25);
  func_0x0001087bdacc(puVar5 + 2);
  FUN_1087bcd54(param_1,puVar5 + 2);
  uVar14 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x18);
  func_0x000107c278b8(puVar5 + 0x5f,&UNK_10f4bb5a4);
  func_0x000107c31420(puVar5 + 0x4a,uVar14,puVar5 + 0x5f);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar5 + 0x5f);
  func_0x000107c28ee4(puVar5 + 4,*(undefined8 *)(param_2 + 0x30),plVar12);
  plVar6 = *(long **)(param_2 + 0x40);
  (**(code **)(*plVar6 + 0x10))();
  puVar5[0x69] = plVar6;
  puVar5[0x5c] = plVar6;
  *(undefined1 *)(puVar5 + 0x5d) = 1;
  puVar5[0x3b] = plVar6;
  *(undefined1 *)(puVar5 + 0x3c) = 1;
  FUN_10885fef4(*(undefined8 *)(param_2 + 0x30),plVar12);
  FUN_10885ff98(*(undefined8 *)(param_2 + 0x30),puVar5 + 4);
  FUN_10886a7dc(*(undefined8 *)(param_2 + 0x30),puVar5 + 4);
  func_0x000107c31428(puVar5 + 0x4a);
  *(undefined1 *)(puVar5 + 0x52) = 0;
  *(undefined1 *)(puVar5 + 0x58) = 0;
  FUN_1087bcd9c(puVar5 + 0x52,*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x9c),
                *(undefined4 *)(param_4 + 0xa10));
  lVar13 = *(long *)(param_2 + 0x28);
  uVar16 = *(undefined8 *)(param_2 + 0x28);
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  puVar7 = (undefined8 *)0x58;
  __Znwm();
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110a70f98;
  if (lVar13 != 0) {
    plVar6 = (long *)(lVar13 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_90 = uVar14;
  uStack_88 = uVar16;
  func_0x000107c27994(&ppuStack_80,plVar12);
  puVar7[3] = &PTR_DAT_1107e85d8;
  FUN_1087bd5d8(puVar7 + 4);
  uVar16 = uStack_88;
  uVar14 = uStack_90;
  puVar7[3] = &PTR_FUN_110a70fe8;
  puVar1 = puVar5 + 0x67;
  uStack_90 = 0;
  uStack_88 = 0;
  puVar7[7] = uVar16;
  puVar7[6] = uVar14;
  puVar7[9] = lStack_78;
  puVar7[8] = ppuStack_80;
  puVar7[10] = lStack_70;
  ppuStack_80 = (undefined **)0x0;
  lStack_78 = 0;
  lStack_70 = 0;
  func_0x000107c27914(&ppuStack_80);
  func_0x000107c28800(&uStack_90);
  puVar5[0x62] = puVar7 + 3;
  puVar5[99] = puVar7;
  plVar8 = *(long **)(param_2 + 0x50);
  puVar7 = puVar5 + 4;
  (**(code **)(*plVar8 + 0x10))(puVar1,plVar8,puVar7,0x2d0124);
  plVar6 = puVar5 + 100;
  puVar9 = puVar5 + 0x66;
  *puVar9 = *puVar1;
  do {
    func_0x0001087be084();
  } while (extraout_w10 != 0);
  func_0x0001087be31c(*puVar9);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x6a) = 0;
    plVar15 = (long *)puVar5[0x66];
    func_0x0001087be2dc();
    lVar13 = *plVar8;
    if (lVar13 == 0) {
      func_0x000107c3a5c0();
      lVar13 = *plVar8;
    }
    plVar10 = plVar15 + 2;
    do {
      if (*plVar10 == 0) {
        func_0x0001087be140();
        plVar10 = extraout_x8_01;
        uVar4 = extraout_w10_01;
        uVar11 = extraout_x11_00;
      }
      else {
        func_0x0001087be310();
        plVar10 = extraout_x8_00;
        uVar4 = extraout_w10_00;
        uVar11 = extraout_x11;
      }
      if ((uVar11 & 1) != 0) {
        plVar12 = (long *)plVar15[0x12];
        func_0x0001087be108();
        if ((bool)in_ZR) {
          func_0x0001087be0f8();
          func_0x0001087be0d8();
          func_0x0001087be0a0();
          plVar15[0x12] = (long)plVar8;
        }
        func_0x0001087be1ac();
        *(long *)(extraout_x8_04 + 0x20) = lVar13;
        func_0x0001087be19c(plVar15[0x12]);
        goto LAB_1087bcb20;
      }
    } while ((uVar4 >> 1 & 1) == 0);
  }
  puVar7 = puVar9;
  FUN_10866b034(puVar9);
  FUN_10866e480(puVar5 + 0x3e,puVar7);
  lVar13 = puVar5[0x68];
  func_0x0001087be294();
  func_0x0001087be0f0();
  plVar8 = *(long **)(lVar13 + 0x10);
  lVar13 = puVar5[0x62];
  lStack_70 = puVar5[99];
  if (lStack_70 != 0) {
    plVar15 = (long *)(lStack_70 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar3) {
        *plVar15 = *plVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7 = (undefined8 *)puVar5[0x69];
  ppuStack_80 = &PTR_SUB_110a71060;
  *plVar6 = 0;
  puVar5[0x65] = 0;
  pppuStack_68 = &ppuStack_80;
  lStack_78 = lVar13;
  func_0x0001087be2b8(*(undefined8 *)(*plVar8 + 0x30),plVar8,puVar7,puVar5 + 4,&ppuStack_80);
  func_0x00010865f8f8(&ppuStack_80);
  plVar8 = plVar6;
  func_0x0001087bdaa4();
  *puVar1 = *(undefined8 *)(lVar13 + 8);
  do {
    func_0x0001087be084();
  } while (extraout_w10_02 != 0);
  *puVar9 = *puVar1;
  do {
    func_0x0001087be084();
  } while (extraout_w10_03 != 0);
  func_0x0001087be31c(*puVar9);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x6a) = 1;
    plVar6 = (long *)puVar5[0x66];
    func_0x0001087be2dc();
    lVar13 = *plVar8;
    if (lVar13 == 0) {
      func_0x000107c3a5c0();
      lVar13 = *plVar8;
    }
    plVar15 = plVar6 + 2;
    do {
      if (*plVar15 == 0) {
        func_0x0001087be140();
        plVar15 = extraout_x8_03;
        uVar4 = extraout_w10_05;
        uVar11 = extraout_x11_02;
      }
      else {
        func_0x0001087be310();
        plVar15 = extraout_x8_02;
        uVar4 = extraout_w10_04;
        uVar11 = extraout_x11_01;
      }
      if ((uVar11 & 1) != 0) {
        plVar12 = (long *)plVar6[0x12];
        func_0x0001087be108();
        if ((bool)in_ZR) {
          func_0x0001087be0f8();
          func_0x0001087be0d8();
          func_0x0001087be0a0();
          plVar6[0x12] = (long)plVar8;
        }
        func_0x0001087be1ac();
        *(long *)(extraout_x8_05 + 0x20) = lVar13;
        func_0x0001087be19c(plVar6[0x12]);
        plVar15 = plVar6;
LAB_1087bcb20:
        plVar15[2] = 0;
        puVar9 = puVar7;
        goto LAB_1087bcb24;
      }
    } while ((uVar4 >> 1 & 1) == 0);
  }
  FUN_1087bce84();
  FUN_1087bce50(puVar5 + 2);
  func_0x0001087be294();
  func_0x0001087be0f0();
  func_0x0001087be1d8();
  func_0x0001087be228();
  func_0x0001087be208();
  func_0x0001087be218();
  func_0x0001087be230();
  while( true ) {
    func_0x0001087be0e8();
    plVar8 = plVar12;
    func_0x000107c27914();
    func_0x0001087be150();
LAB_1087bcb24:
    func_0x0001087be0bc(uStack_58);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)puVar9 != 0) goto LAB_1087bcb64;
    do {
      __Unwind_Resume(plVar8);
LAB_1087bcb64:
      func_0x000104bd46a0();
    } while ((int)puVar9 == 0);
    func_0x00010865f8f8(&ppuStack_80);
    func_0x0001087bdaa4(plVar6);
    func_0x0001087be1d8();
    func_0x0001087be228();
    func_0x0001087be208();
    func_0x0001087be218();
    func_0x0001087be230();
    ___cxa_begin_catch(plVar8);
    func_0x0001087be238();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087bcc74; end: 1087bcd53;  */

void FUN_1087bcc74(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  if (param_2 == param_3) {
    func_0x00010bcd3464(param_1);
  }
  else {
    lVar2 = param_3 - param_2 >> 3;
    FUN_10865b428(&uStack_58);
    FUN_10865b464(&uStack_60,lVar2);
    uVar1 = uStack_60;
    uStack_60 = 0;
    FUN_10865b56c(lStack_48 + 0x18,uVar1);
    func_0x00010865b5d0(&uStack_60);
    *(long *)(lStack_48 + 8) = lVar2;
    func_0x000107c2887c(lStack_48,auStack_50);
    lVar2 = 0;
    for (; param_2 != param_3; param_2 = param_2 + 8) {
      FUN_10865b4a4(lStack_48,lVar2,param_2);
      lVar2 = lVar2 + 1;
    }
    *param_1 = uStack_58;
    uStack_58 = 0;
    FUN_10865b628(&uStack_58);
  }
  return;
}



/* Entry: 1087bcd54; end: 1087bcd9b;  */

void FUN_1087bcd54(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  func_0x0001087be1bc();
  return;
}



/* Entry: 1087bcd9c; end: 1087bce4f;  */

void FUN_1087bcd9c(ulong *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  double dVar2;
  undefined1 auStack_70 [8];
  undefined1 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  
  if (param_2 != 0) {
    if ((param_1[6] & 1) == 0) {
      auStack_70[0] = 0;
      uStack_68 = 0;
      auStack_60[0] = 0;
      uStack_48 = 0;
      FUN_1087bd548(param_1,auStack_70);
      func_0x000107c279a4(auStack_60);
    }
    uVar1 = param_2;
    if (param_3 != 0) {
      if (7 < param_4) {
        param_4 = 8;
      }
      dVar2 = (double)param_4;
      _exp2();
      uVar1 = param_3;
      if (param_2 * (int)dVar2 <= param_3) {
        uVar1 = param_2 * (int)dVar2;
      }
    }
    if ((param_1[1] & 1) == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    *param_1 = (ulong)uVar1;
  }
  return;
}



/* Entry: 1087bce50; end: 1087bce83;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087bce50(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_1087bd9cc(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087bce84; end: 1087bcedb;  */

long FUN_1087bce84(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087bcecc);
  (*pcVar1)();
}



/* Entry: 1087bcedc; end: 1087bcedf;  */

undefined8 * FUN_1087bcedc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70f18;
  func_0x000107c30608(param_1 + 0xe);
  func_0x000107c288a4(param_1 + 0xc);
  func_0x000107c29118(param_1 + 10);
  func_0x000107c29194(param_1 + 8);
  func_0x000107c28808(param_1 + 6);
  func_0x000107c28800(param_1 + 4);
  func_0x000107c288e8(param_1 + 2);
  return param_1;
}



/* Entry: 1087bcee0; end: 1087bcef3;  */

void FUN_1087bcee0(void)

{
  func_0x0001087bd2e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087bcef4; end: 1087bcfa3;  */

long FUN_1087bcef4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  FUN_1087bcfa4(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_1087bd074();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  *param_2 = 0;
  FUN_1087bcfe4(param_1,&plStack_58);
  lVar3 = param_1[1];
  func_0x0001087bd1e0(&plStack_58);
  return lVar3;
}



/* Entry: 1087bcfa4; end: 1087bcfe3;  */

long * FUN_1087bcfa4(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar3 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar3 <= param_2) {
      plVar3 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar3 = (long *)0x1fffffffffffffff;
    }
    return plVar3;
  }
  FUN_1087bd060();
  func_0x0001087be178();
  plVar3 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_1087bd0b4(plVar3,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 1087bcfe4; end: 1087bd05f;  */

void FUN_1087bcfe4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001087be178();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_1087bd0b4(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1087bd060; end: 1087bd073;  */

void FUN_1087bd060(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_1087bd098();
  return;
}



/* Entry: 1087bd074; end: 1087bd097;  */

void FUN_1087bd074(void)

{
  FUN_1087bd098();
  return;
}



/* Entry: 1087bd098; end: 1087bd0b3;  */

void FUN_1087bd098(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if ((ulong)param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puStack_38 = *param_2;
    *param_2 = 0;
    puStack_38 = puStack_38 + 1;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  FUN_1087bd130();
  FUN_1087bd160(&uStack_60);
  return;
}



/* Entry: 1087bd0b4; end: 1087bd12f;  */

void FUN_1087bd0b4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puStack_28 = *param_2;
    *param_2 = 0;
    puStack_28 = puStack_28 + 1;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_1087bd130();
  FUN_1087bd160(&uStack_50);
  return;
}



/* Entry: 1087bd130; end: 1087bd15f;  */

void FUN_1087bd130(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    func_0x000107c27f9c();
  }
  return;
}



/* Entry: 1087bd160; end: 1087bd18f;  */

long FUN_1087bd160(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1087bd190(param_1);
  }
  return param_1;
}



/* Entry: 1087bd190; end: 1087bd1af;  */

void FUN_1087bd190(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x000107c27f9c();
  }
  return;
}



/* Entry: 1087bd1b0; end: 1087bd20b;  */

void FUN_1087bd1b0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -8;
    func_0x000107c27f9c();
  }
  return;
}



/* Entry: 1087bd20c; end: 1087bd213;  */

void FUN_1087bd20c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087be178(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x000107c27f9c();
  }
  return;
}



/* Entry: 1087bd214; end: 1087bd2ab;  */

void FUN_1087bd214(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087be178();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x000107c27f9c();
  }
  return;
}



/* Entry: 1087bd2ac; end: 1087bd2b3;  */

void FUN_1087bd2ac(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087be178(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x000107c27f9c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087bd2b4; end: 1087bd34b;  */

void FUN_1087bd2b4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087be178();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x000107c27f9c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087bd34c; end: 1087bd39b;  */

void FUN_1087bd34c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 200;
  __Znwm();
  FUN_1087bd3f0();
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x0001087be1bc();
  return;
}



/* Entry: 1087bd39c; end: 1087bd3ef;  */

undefined8 FUN_1087bd39c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  uint uStack_38;
  
  func_0x0001087be178();
  do {
    func_0x0001087be160();
    if ((int)param_1 != 0) {
      func_0x0001087bd498(unaff_x20 + 0x98,param_3);
      func_0x0001087be184();
      return param_1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return param_1;
}



/* Entry: 1087bd3f0; end: 1087bd41b;  */

void FUN_1087bd3f0(undefined8 *param_1)

{
  func_0x000107c31510();
  *param_1 = &PTR_FUN_110a70f58;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1087bd41c; end: 1087bd41f;  */

undefined8 * FUN_1087bd41c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70f58;
  func_0x0001087bd468(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087bd420; end: 1087bd433;  */

void FUN_1087bd420(void)

{
  FUN_1087bd434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087bd434; end: 1087bd4f7;  */

undefined8 * FUN_1087bd434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70f58;
  func_0x0001087bd468(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087bd4f8; end: 1087bd513;  */

void FUN_1087bd4f8(long param_1)

{
  FUN_1087bd514();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 1087bd514; end: 1087bd547;  */

void FUN_1087bd514(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  return;
}



/* Entry: 1087bd548; end: 1087bd5af;  */

long FUN_1087bd548(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x0001087bd57c();
  }
  else {
    FUN_10875fc1c();
  }
  return param_1;
}



/* Entry: 1087bd5b0; end: 1087bd5b3;  */

void FUN_1087bd5b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70f98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087bd5b4; end: 1087bd5c7;  */

void FUN_1087bd5b4(void)

{
  FUN_1087bda94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087bd5c8; end: 1087bd5d7;  */

void FUN_1087bd5c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087bd5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1087bd5d8; end: 1087bd62f;  */

long FUN_1087bd5d8(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  undefined1 auStack_30 [16];
  
  lVar1 = param_1;
  func_0x0001087bd8b0();
  func_0x0001087bd8dc(lVar1 + 8);
  func_0x0001087bd85c(auStack_30);
  lStack_40 = param_1;
  lStack_38 = lVar1 + 8;
  func_0x0001087bd90c(&lStack_40,auStack_30);
  func_0x0001087bd938(auStack_30);
  return param_1;
}



/* Entry: 1087bd630; end: 1087bd633;  */

undefined8 * FUN_1087bd630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70fe8;
  func_0x000107c27914(param_1 + 5);
  func_0x000107c28800(param_1 + 3);
  func_0x0001087bd99c(param_1 + 1);
  return param_1;
}



/* Entry: 1087bd634; end: 1087bd647;  */

void FUN_1087bd634(void)

{
  func_0x0001087bd958();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087bd648; end: 1087bd693;  */

void FUN_1087bd648(long param_1)

{
  undefined4 auStack_48 [8];
  undefined1 uStack_28;
  undefined1 uStack_24;
  
  auStack_48[0] = 0;
  func_0x0001087be2d0();
  uStack_28 = 0;
  uStack_24 = 0;
  FUN_1087bd9bc(param_1 + 0x10,auStack_48);
  func_0x0001087be240();
  return;
}



/* Entry: 1087bd694; end: 1087bd85b;  */

void FUN_1087bd694(long param_1,uint param_2)

{
  long lVar1;
  uint *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 auStack_e0 [8];
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  uint *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long *plStack_40;
  undefined1 uStack_38;
  
  uStack_b4 = CONCAT31(uStack_b4._1_3_,1);
  uStack_b8 = param_2;
  if (((CONCAT44(uStack_b4,param_2) & 0x1ffffffff) != 0x100000001) &&
     (5 < param_2 || (1 << (ulong)(param_2 & 0x1f) & 0x2cU) == 0)) {
    lVar1 = param_1;
    func_0x000107c31338();
    if (param_2 < 0xd) {
      uVar4 = *(undefined8 *)(&UNK_10df57700 + ((ulong)param_2 & 0xf) * 8);
    }
    else {
      uVar4 = 2;
    }
    puVar2 = &uStack_b8;
    FUN_108843ae8();
    uStack_a8 = 0;
    puStack_b0 = puVar2;
    func_0x000107c2793c(&UNK_10f4bb536);
    func_0x000107c3173c(&uStack_98);
    func_0x00010bd3f128(&puStack_b0,3);
    plVar3 = *(long **)(param_1 + 0x18);
    (**(code **)(*plVar3 + 0x10))();
    uStack_48 = uStack_a0;
    auStack_80[0] = 10;
    uStack_68 = uStack_90;
    uStack_70 = uStack_98;
    uStack_60 = uStack_88;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_50 = uStack_a8;
    puStack_58 = puStack_b0;
    puStack_b0 = (uint *)0x0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_38 = 0;
    uStack_78 = uVar4;
    plStack_40 = plVar3;
    func_0x00010bcc46f8(lVar1,auStack_80);
    func_0x00010786e114(auStack_80);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_98);
  }
  uVar4 = 0x100000002;
  if (param_2 != 1) {
    uVar4 = 0;
  }
  if (param_2 < 0xd) {
    auStack_e0[0] = *(undefined4 *)(&UNK_10df57768 + (ulong)param_2 * 4);
  }
  else {
    auStack_e0[0] = 7;
  }
  func_0x0001087be2d0();
  uStack_bc = (undefined1)((ulong)uVar4 >> 0x20);
  uStack_c0 = (undefined4)uVar4;
  FUN_1087bd9bc(param_1 + 0x10,auStack_e0);
  func_0x0001087be240();
  return;
}



/* Entry: 1087bd85c; end: 1087bd9bb;  */

void FUN_1087bd85c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1087bd34c(&uStack_30);
  uVar2 = uStack_28;
  uVar1 = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_40 = 0;
  func_0x000107c27f98(&uStack_40);
  func_0x0001087be1bc();
  func_0x000107c27fec(&uStack_30);
  return;
}



/* Entry: 1087bd9bc; end: 1087bd9cb;  */

undefined8 FUN_1087bd9bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  uint uStack_38;
  
  uVar1 = *param_1;
  func_0x0001087be178(uVar1,param_1);
  do {
    func_0x0001087be160();
    if ((int)uVar1 != 0) {
      FUN_1087bda1c(unaff_x20 + 0x98,param_2);
      func_0x0001087be184();
      return uVar1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return uVar1;
}



/* Entry: 1087bd9cc; end: 1087bda1b;  */

undefined8 FUN_1087bd9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  uint uStack_38;
  
  func_0x0001087be178();
  do {
    func_0x0001087be160();
    if ((int)param_1 != 0) {
      FUN_1087bda1c(unaff_x20 + 0x98,param_3);
      func_0x0001087be184();
      return param_1;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return param_1;
}



/* Entry: 1087bda1c; end: 1087bda47;  */

void FUN_1087bda1c(void)

{
  func_0x0001087be178();
  func_0x0001087bd4c4();
  FUN_1087bda48();
  return;
}



/* Entry: 1087bda48; end: 1087bda63;  */

void FUN_1087bda48(long param_1)

{
  FUN_1087bda64();
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 1087bda64; end: 1087bda93;  */

void FUN_1087bda64(undefined4 *param_1,undefined4 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001087be178();
  *param_1 = *param_2;
  func_0x000107c27994(param_1 + 2,param_2 + 2);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
  return;
}



/* Entry: 1087bda94; end: 1087bdaa3;  */

void FUN_1087bda94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a70f98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087bdaa4; end: 1087bdb33;  */

long FUN_1087bdaa4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1087bdb34; end: 1087bdb47;  */

void FUN_1087bdb34(void)

{
  func_0x0001087bdb08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


