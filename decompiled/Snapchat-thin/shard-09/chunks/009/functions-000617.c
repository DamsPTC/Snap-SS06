/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107311b6c; end: 107311bb7;  */

undefined8 * FUN_107311b6c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_11099f738;
  lVar1 = param_1[7];
  param_1[7] = 0;
  if (lVar1 != 0) {
    FUN_107311bb8();
  }
  func_0x00010726eedc(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 107311bb8; end: 107311cb3;  */

void FUN_107311bb8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107311bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 107311cb4; end: 107311d1f;  */

void FUN_107311cb4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [24];
  undefined4 auStack_190 [2];
  undefined4 uStack_188;
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
  undefined1 auStack_120 [112];
  undefined1 auStack_58 [4];
  undefined1 uStack_54;
  undefined1 auStack_50 [32];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001073147b8();
  auStack_58[0] = 0;
  uStack_54 = 0;
  auStack_50[0] = 0;
  uStack_30 = 0;
  puVar5 = auStack_58;
  puVar6 = auStack_50;
  uStack_28 = extraout_x8;
  FUN_107311d20();
  func_0x000107312fb4();
  func_0x000107314784(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = auStack_50;
  func_0x000107312fb4(puVar2);
  func_0x0001073147c8();
  if (param_3 != 0) {
    auStack_190[0] = 0x169;
    uStack_178 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    ppuStack_170 = &PTR_FUN_110996720;
    uStack_168 = 0;
    uStack_150 = 0x169;
    uStack_148 = 0;
    uStack_144 = 1;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_140 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1a8,param_4);
    puVar3 = auStack_190;
    FUN_10726e300(puVar3,"result",auStack_1a8);
    FUN_10730f7b8();
    FUN_10726e6c0(auStack_120,puVar3);
    func_0x0001073148a0();
    FUN_107262330(auStack_190);
    if ((param_6 & 1) != 0) {
      func_0x000107311bc4(param_5);
      FUN_10730f81c(auStack_120,param_5);
    }
    if (puVar6[0x20] == '\x01') {
      plVar4 = *(long **)(puVar6 + 0x18);
      if (plVar4 == (long *)0x0) {
        func_0x000104bfeb48();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x107311e74);
        (*pcVar1)();
      }
      (**(code **)(*plVar4 + 0x30))(plVar4,puVar5,auStack_120);
    }
    auStack_190[0] = 1;
    uStack_188 = 0;
    func_0x000107314998();
    func_0x00010743fa9c(puVar2,auStack_120,auStack_190,auStack_1b8,7);
    FUN_107262330(auStack_120);
  }
  return;
}



/* Entry: 107311d20; end: 107311e9f;  */

void FUN_107311d20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,long param_8)

{
  code *pcVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [24];
  undefined4 auStack_130 [2];
  undefined4 uStack_128;
  undefined4 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c0 [112];
  
  if (param_3 != 0) {
    auStack_130[0] = 0x169;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    ppuStack_110 = &PTR_FUN_110996720;
    uStack_108 = 0;
    uStack_f0 = 0x169;
    uStack_e8 = 0;
    uStack_e4 = 1;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_148,param_4);
    puVar2 = auStack_130;
    FUN_10726e300(puVar2,"result",auStack_148);
    FUN_10730f7b8();
    FUN_10726e6c0(auStack_c0,puVar2);
    func_0x0001073148a0();
    FUN_107262330(auStack_130);
    if ((param_6 & 1) != 0) {
      func_0x000107311bc4(param_5);
      FUN_10730f81c(auStack_c0,param_5);
    }
    if (*(char *)(param_8 + 0x20) == '\x01') {
      plVar3 = *(long **)(param_8 + 0x18);
      if (plVar3 == (long *)0x0) {
        func_0x000104bfeb48();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x107311e74);
        (*pcVar1)();
      }
      (**(code **)(*plVar3 + 0x30))(plVar3,param_7,auStack_c0);
    }
    auStack_130[0] = 1;
    uStack_128 = 0;
    func_0x000107314998();
    func_0x00010743fa9c(param_1,auStack_c0,auStack_130,auStack_158,7);
    FUN_107262330(auStack_c0);
  }
  return;
}



/* Entry: 107311ea0; end: 107311f7f;  */

void FUN_107311ea0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 auStack_118 [6];
  undefined4 uStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [112];
  long lStack_38;
  
  lVar1 = param_1;
  __ZNSt3__16chrono12system_clock3nowEv();
  lStack_38 = lVar1 - param_2;
  auStack_118[0] = 0x16d;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  ppuStack_f8 = &PTR_FUN_110996720;
  uStack_f0 = 0;
  uStack_d8 = 0x16d;
  uStack_d0 = 0;
  uStack_cc = 1;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_c8 = 0;
  puVar2 = auStack_118;
  FUN_1072bbe40(puVar2,"result",param_3);
  FUN_10726e6c0(auStack_a8,puVar2);
  FUN_107262330(auStack_118);
  func_0x000107314998();
  func_0x00010743f9dc(param_1,auStack_a8,&lStack_38,auStack_118,7);
  FUN_107262330(auStack_a8);
  return;
}



/* Entry: 107311f80; end: 1073120af;  */

void FUN_107311f80(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107314970();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  *(undefined8 *)(param_1 + 0x28) = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  lVar4 = param_4[1];
  uVar5 = *param_4;
  *(undefined8 *)(param_1 + 0x40) = param_4[1];
  *(undefined8 *)(param_1 + 0x38) = uVar5;
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
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  func_0x0001073af27c(&uStack_50,0,0);
  *(undefined8 *)(unaff_x19 + 0x58) = uStack_48;
  *(undefined8 *)(unaff_x19 + 0x50) = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010724b8b8(&uStack_50);
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  *(undefined1 *)(unaff_x19 + 0x90) = 0;
  *(undefined1 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  FUN_10726ed14(unaff_x19 + 0xa0);
  *(long *)(unaff_x19 + 0xb0) = unaff_x19;
  return;
}



/* Entry: 1073120b0; end: 107312277;  */

void FUN_1073120b0(long param_1,undefined1 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [24];
  undefined1 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1d0 [32];
  undefined1 uStack_1b0;
  undefined1 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_178;
  undefined1 uStack_170;
  undefined1 uStack_138;
  undefined1 uStack_130;
  undefined1 uStack_12c;
  undefined1 auStack_128 [24];
  undefined8 *puStack_110;
  undefined1 auStack_108 [208];
  undefined8 uStack_38;
  
  lVar1 = param_1;
  func_0x0001073147b8();
  *(undefined4 *)(lVar1 + 8) = 1;
  plVar5 = *(long **)(lVar1 + 0x38);
  uStack_38 = extraout_x8;
  func_0x00010002b838(auStack_200,PTR_DAT_1131adab0);
  (**(code **)(*plVar5 + 0x48))(plVar5,auStack_200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_200);
  if ((((ulong)plVar5 >> 0x20 & 1) != 0) && ((int)plVar5 != 0)) {
    *(int *)(param_1 + 0xc) = (int)plVar5;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  FUN_10730fa54(auStack_200,param_1 + 0xa0);
  plVar5 = *(long **)(param_1 + 0x50);
  uStack_1e8 = param_2;
  lStack_1e0 = param_1;
  lStack_1d8 = param_1;
  FUN_107312290(&uStack_230,auStack_200);
  puStack_110 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = &PTR_SUB_11099f7d0;
  puVar2[2] = uStack_228;
  puVar2[1] = uStack_230;
  uStack_230 = 0;
  uStack_228 = 0;
  puVar2[3] = uStack_220;
  puVar2[5] = uStack_210;
  puVar2[4] = uStack_218;
  puVar2[6] = uStack_208;
  puStack_110 = puVar2;
  FUN_107313018(auStack_1d0,&UNK_10f40a050);
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  FUN_107273dcc(auStack_108,auStack_128,auStack_1d0);
  puVar4 = auStack_108;
  (**(code **)(*plVar5 + 0x18))(plVar5);
  FUN_107273efc(auStack_108);
  func_0x000107273f24(auStack_1d0);
  func_0x0001006393ec(auStack_128);
  func_0x00010731486c();
  func_0x00010725b1d4();
  func_0x000107314784(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_107273efc(auStack_108);
  func_0x000107273f24(auStack_1d0);
  func_0x0001006393ec(auStack_128);
  func_0x00010731486c();
  puVar3 = auStack_200;
  func_0x00010725b1d4();
  func_0x0001073147c8();
  if ((puVar3[4] & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  FUN_10730fc30();
  uVar7 = *(undefined8 *)(puVar4 + 0x20);
  uVar6 = *(undefined8 *)(puVar4 + 0x18);
  *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(puVar4 + 0x28);
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  return;
}



/* Entry: 107312278; end: 10731228f;  */

void FUN_107312278(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  FUN_10730fc30();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 107312290; end: 1073122bb;  */

void FUN_107312290(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10730fc30();
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 1073122bc; end: 107312487;  */

void FUN_1073122bc(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined **ppuStack_68;
  int iStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined1 uStack_32;
  
  FUN_107312488();
  iStack_60 = *(int *)(param_2 + 8);
  uVar4 = iStack_60 == 2;
  if ((bool)uVar4) {
    func_0x000107314798();
    func_0x00010731480c();
    if (!(bool)uVar4) {
      piVar1 = (int *)(*(long *)(extraout_x8 + -8) + 0x24);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000107314778();
    lVar5 = *(long *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0;
    if (lVar5 != 0) {
      func_0x0001073147d0();
    }
    uVar6 = 0x1b0;
    __Znwm();
    uStack_58 = 0x1010001;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 2;
    uStack_40 = 0x100;
    uStack_3e = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0x101;
    uStack_32 = 1;
    uStack_44 = uStack_58;
    FUN_1073141e4();
    lVar5 = *(long *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = uVar6;
    if (lVar5 != 0) {
      func_0x0001073147d0();
    }
    func_0x0001073147a4(*(undefined8 *)(param_2 + 0x30),&DAT_10f3f415b,5,&UNK_10de3a958);
    *param_1 = 0;
  }
  else {
    ppuStack_68 = &PTR_FUN_11099f6f8;
    FUN_10730f6d0(param_1,&ppuStack_68);
    __ZNSt9exceptionD2Ev(&ppuStack_68);
  }
  return;
}



/* Entry: 107312488; end: 107312557;  */

byte * FUN_107312488(byte *param_1,ulong param_2)

{
  uint *puVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  byte *pbStack_38;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if (param_1[0x10] == 1) {
    pbVar3 = param_1;
    if ((param_1[0x98] & 1) == 0) {
      puVar1 = (uint *)(param_1 + 0xc);
      FUN_107312278();
      uVar2 = (ulong)*puVar1;
      FUN_107312c40(uVar2);
      pbVar3 = param_1 + 0x88;
      func_0x00010ae7dd64(pbVar3,uVar2,param_2 & 0xffffffff);
      uStack_40 = CONCAT71(uStack_40._1_7_,(char)pbVar3) ^ 1;
      pbVar3 = param_1 + 0xc;
      FUN_107312278();
      uStack_40 = CONCAT44(*(undefined4 *)pbVar3,(undefined4)uStack_40);
      if (lRam00000001138220d8 != -1) {
        ppuStack_30 = &puStack_28;
        pbVar3 = (byte *)0x1138220d8;
        pbStack_38 = param_1;
        puStack_28 = (undefined1 *)&uStack_40;
        __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1138220d8,&ppuStack_30,FUN_107314674);
      }
      param_1[0x98] = 1;
    }
    return pbVar3;
  }
  pbVar3 = param_1 + 0x88;
  puStack_28 = *(undefined1 **)PTR____stack_chk_guard_11034bdc0;
  if (((ulong)*(undefined1 **)(param_1 + 0x90) & 1) == 0) {
    pbStack_38 = &UNK_10ae7de18;
    puStack_48 = &UNK_10ae7dd58;
    uStack_40 = 0;
    ppuStack_30 = (undefined1 **)(param_1 + 0x90);
    func_0x00010bdb2a8c(pbVar3,&UNK_10e52c178,&puStack_48,0);
    func_0x000107c2b9fc();
  }
  if (*(undefined1 **)PTR____stack_chk_guard_11034bdc0 == puStack_28) {
    return pbVar3;
  }
  ___stack_chk_fail();
  return (byte *)(ulong)(*pbVar3 & 1);
}



/* Entry: 107312558; end: 10731256b;  */

void FUN_107312558(undefined1 *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4,
                  ulong param_5,ulong param_6,ulong param_7)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *unaff_x20;
  long *plVar15;
  undefined1 *unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  undefined1 *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  uVar9 = 0;
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    uVar6 = param_3;
    puVar5 = param_2;
    puVar2 = param_1;
    *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
    *(undefined1 **)(puVar1 + -0x50) = unaff_x26;
    *(ulong *)(puVar1 + -0x48) = unaff_x25;
    *(undefined1 **)(puVar1 + -0x40) = unaff_x24;
    *(undefined1 **)(puVar1 + -0x38) = unaff_x23;
    *(ulong *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    puVar3 = puVar2;
    uVar7 = uVar6;
    puVar8 = param_4;
    func_0x0001073147b8();
    *(undefined8 *)(puVar1 + -0x68) = extraout_x8;
    *(undefined1 **)(puVar1 + -0x4b8) = puVar3;
    *(ulong *)(puVar1 + -0x4b0) = param_5;
    *(ulong *)(puVar1 + -0x4a8) = param_6;
    if (((uVar9 & 1) == 0) && (*(long *)(puVar2 + 0x70) != 0)) {
      uVar11 = param_5;
      uVar12 = param_6;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar4 = *(undefined8 *)(puVar2 + 0x70);
      func_0x00010787c2e8();
      *(undefined1 **)(puVar1 + -0x1f0) = puVar3;
      *(ulong *)(puVar1 + -0x1e8) = param_5;
      *(ulong *)(puVar1 + -0x1e0) = param_6;
      *(undefined8 *)(puVar1 + -0x1d8) = uVar4;
      *(undefined1 **)(puVar1 + -0x1d0) = puVar2;
      *(undefined1 **)(puVar1 + -0x1c8) = puVar2;
      *(undefined8 *)(puVar1 + -0x1b8) = *(undefined8 *)(puVar1 + -0x4b0);
      *(undefined8 *)(puVar1 + -0x1c0) = *(undefined8 *)(puVar1 + -0x4b8);
      *(undefined8 *)(puVar1 + -0x1b0) = *(undefined8 *)(puVar1 + -0x4a8);
      unaff_x24 = puVar1 + -0x1f0;
      FUN_10731435c(puVar1 + -0x1a8,puVar5);
      FUN_1073131c8(puVar1 + -0x188,uVar6);
      FUN_10730fb90(puVar1 + -0x160,param_4);
      FUN_10730fa54(puVar1 + -0x138,puVar2 + 0xa0);
      FUN_1073130bc(puVar1 + -0x120,puVar1 + -0x1f0);
      FUN_107312b38(puVar1 + -0x1f0);
      plVar15 = *(long **)(puVar2 + 0x70);
      if ((param_7 >> 0x20 & 1) == 0) {
        func_0x000107312b6c(puVar1 + -0x4a0,puVar1 + -0x138);
        FUN_107312bd0(puVar1 + -0x3d0,puVar1 + -0x4a0);
        puVar14 = puVar1 + -0x3d0;
        param_2 = puVar1 + -0x3d0;
        (**(code **)(*plVar15 + 0x10))(plVar15);
        unaff_x20 = puVar1 + -0x4a0;
        param_7 = uVar7;
        uVar10 = uVar9;
      }
      else {
        func_0x000107312b6c(puVar1 + -0x3b0,puVar1 + -0x138);
        FUN_107312bd0(puVar1 + -0x2e0,puVar1 + -0x3b0);
        FUN_107313224(puVar1 + -0x2c0,puVar1 + -0x2e0);
        param_2 = puVar1 + -0x2c0;
        (**(code **)(*plVar15 + 0x18))(plVar15);
        FUN_107273efc(puVar1 + -0x2c0);
        unaff_x20 = puVar1 + -0x3b0;
        puVar14 = puVar1 + -0x2e0;
        uVar10 = uVar9;
      }
      func_0x0001006393ec(puVar14);
      FUN_107312c18(unaff_x20);
      unaff_x19 = puVar1 + -0x138;
      FUN_107312c18();
      unaff_x25 = param_5;
      unaff_x26 = puVar3;
    }
    else {
      param_2 = puVar2;
      FUN_107312810(puVar1 + -0x138);
      *(undefined8 *)(puVar1 + -0x4c0) = 0;
      lVar13 = *(long *)(puVar1 + -0x138);
      func_0x000107314820();
      if (lVar13 == 0) {
        param_2 = puVar5;
        param_7 = uVar6;
        puVar8 = param_4;
        FUN_107312878(puVar1 + -0x4b8);
        uVar10 = uVar9;
        uVar11 = param_5;
        uVar12 = param_6;
      }
      else {
        in_ZR = param_4[0x20] == '\x01';
        param_7 = uVar7;
        uVar10 = uVar9;
        uVar11 = param_5;
        uVar12 = param_6;
        if ((bool)in_ZR) {
          FUN_10730f6b4(param_4);
          param_2 = puVar1 + -0x138;
          FUN_10730fa34();
          param_7 = uVar7;
          uVar10 = uVar9;
          uVar11 = param_5;
          uVar12 = param_6;
        }
      }
      unaff_x19 = puVar1 + -0x138;
      __ZNSt13exception_ptrD1Ev();
      unaff_x20 = param_4;
    }
    param_4 = puVar8;
    func_0x000107314784(*(undefined8 *)(puVar1 + -0x68));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    FUN_107273efc(puVar1 + -0x2c0);
    func_0x0001006393ec(puVar1 + -0x2e0);
    FUN_107312c18(puVar1 + -0x3b0);
    param_1 = puVar1 + -0x138;
    FUN_107312c18();
    unaff_x30 = FUN_1073127fc;
    func_0x0001073147c8();
    uVar9 = 1;
    puVar1 = puVar1 + -0x4c0;
    param_3 = param_7;
    param_5 = uVar10;
    param_6 = uVar11;
    param_7 = uVar12;
    unaff_x21 = puVar2;
    unaff_x22 = uVar6;
    unaff_x23 = puVar5;
  }
  return;
}



/* Entry: 10731256c; end: 1073127fb;  */

void FUN_10731256c(undefined1 *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4,
                  ulong param_5,ulong param_6,ulong param_7,ulong param_8)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *unaff_x20;
  long *plVar13;
  undefined1 *unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  undefined1 *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar5 = param_3;
    puVar4 = param_2;
    puVar1 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar2 = puVar1;
    uVar6 = uVar5;
    puVar7 = param_4;
    func_0x0001073147b8();
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x8;
    *(undefined1 **)((long)register0x00000008 + -0x4b8) = puVar2;
    *(ulong *)((long)register0x00000008 + -0x4b0) = param_6;
    *(ulong *)((long)register0x00000008 + -0x4a8) = param_7;
    if (((param_5 & 1) == 0) && (*(long *)(puVar1 + 0x70) != 0)) {
      uVar9 = param_6;
      uVar10 = param_7;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar3 = *(undefined8 *)(puVar1 + 0x70);
      func_0x00010787c2e8();
      *(undefined1 **)((long)register0x00000008 + -0x1f0) = puVar2;
      *(ulong *)((long)register0x00000008 + -0x1e8) = param_6;
      *(ulong *)((long)register0x00000008 + -0x1e0) = param_7;
      *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar3;
      *(undefined1 **)((long)register0x00000008 + -0x1d0) = puVar1;
      *(undefined1 **)((long)register0x00000008 + -0x1c8) = puVar1;
      *(undefined8 *)((long)register0x00000008 + -0x1b8) =
           *(undefined8 *)((long)register0x00000008 + -0x4b0);
      *(undefined8 *)((long)register0x00000008 + -0x1c0) =
           *(undefined8 *)((long)register0x00000008 + -0x4b8);
      *(undefined8 *)((long)register0x00000008 + -0x1b0) =
           *(undefined8 *)((long)register0x00000008 + -0x4a8);
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x1f0);
      FUN_10731435c((undefined1 *)((long)register0x00000008 + -0x1a8),puVar4);
      FUN_1073131c8((undefined1 *)((long)register0x00000008 + -0x188),uVar5);
      FUN_10730fb90((undefined1 *)((long)register0x00000008 + -0x160),param_4);
      FUN_10730fa54((undefined1 *)((long)register0x00000008 + -0x138),puVar1 + 0xa0);
      FUN_1073130bc((undefined1 *)((long)register0x00000008 + -0x120),
                    (undefined1 *)((long)register0x00000008 + -0x1f0));
      FUN_107312b38((undefined1 *)((long)register0x00000008 + -0x1f0));
      plVar13 = *(long **)(puVar1 + 0x70);
      if ((param_8 >> 0x20 & 1) == 0) {
        func_0x000107312b6c((undefined1 *)((long)register0x00000008 + -0x4a0),
                            (undefined1 *)((long)register0x00000008 + -0x138));
        FUN_107312bd0((undefined1 *)((long)register0x00000008 + -0x3d0),
                      (undefined1 *)((long)register0x00000008 + -0x4a0));
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x3d0);
        param_2 = (undefined1 *)((long)register0x00000008 + -0x3d0);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x4a0);
        param_8 = uVar6;
        uVar8 = param_5;
      }
      else {
        func_0x000107312b6c((undefined1 *)((long)register0x00000008 + -0x3b0),
                            (undefined1 *)((long)register0x00000008 + -0x138));
        FUN_107312bd0((undefined1 *)((long)register0x00000008 + -0x2e0),
                      (undefined1 *)((long)register0x00000008 + -0x3b0));
        FUN_107313224((undefined1 *)((long)register0x00000008 + -0x2c0),
                      (undefined1 *)((long)register0x00000008 + -0x2e0));
        param_2 = (undefined1 *)((long)register0x00000008 + -0x2c0);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        FUN_107273efc((undefined1 *)((long)register0x00000008 + -0x2c0));
        unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x3b0);
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x2e0);
        uVar8 = param_5;
      }
      func_0x0001006393ec(puVar12);
      FUN_107312c18(unaff_x20);
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x138);
      FUN_107312c18();
      unaff_x25 = param_6;
      unaff_x26 = puVar2;
    }
    else {
      param_2 = puVar1;
      FUN_107312810((undefined1 *)((long)register0x00000008 + -0x138));
      *(undefined8 *)((long)register0x00000008 + -0x4c0) = 0;
      lVar11 = *(long *)((long)register0x00000008 + -0x138);
      func_0x000107314820();
      if (lVar11 == 0) {
        param_2 = puVar4;
        param_8 = uVar5;
        puVar7 = param_4;
        FUN_107312878((undefined1 *)((long)register0x00000008 + -0x4b8));
        uVar8 = param_5;
        uVar9 = param_6;
        uVar10 = param_7;
      }
      else {
        in_ZR = param_4[0x20] == '\x01';
        param_8 = uVar6;
        uVar8 = param_5;
        uVar9 = param_6;
        uVar10 = param_7;
        if ((bool)in_ZR) {
          FUN_10730f6b4(param_4);
          param_2 = (undefined1 *)((long)register0x00000008 + -0x138);
          FUN_10730fa34();
          param_8 = uVar6;
          uVar8 = param_5;
          uVar9 = param_6;
          uVar10 = param_7;
        }
      }
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x138);
      __ZNSt13exception_ptrD1Ev();
      unaff_x20 = param_4;
    }
    param_4 = puVar7;
    func_0x000107314784(*(undefined8 *)((long)register0x00000008 + -0x68));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    FUN_107273efc((undefined1 *)((long)register0x00000008 + -0x2c0));
    func_0x0001006393ec((undefined1 *)((long)register0x00000008 + -0x2e0));
    FUN_107312c18((undefined1 *)((long)register0x00000008 + -0x3b0));
    param_1 = (undefined1 *)((long)register0x00000008 + -0x138);
    FUN_107312c18();
    unaff_x30 = FUN_1073127fc;
    func_0x0001073147c8();
    param_5 = 1;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x4c0);
    param_3 = param_8;
    param_6 = uVar8;
    param_7 = uVar9;
    param_8 = uVar10;
    unaff_x21 = puVar1;
    unaff_x22 = uVar5;
    unaff_x23 = puVar4;
  }
  return;
}



/* Entry: 1073127fc; end: 10731280f;  */

void FUN_1073127fc(undefined1 *param_1,undefined1 *param_2,ulong param_3,undefined1 *param_4,
                  ulong param_5,ulong param_6,ulong param_7)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *unaff_x19;
  long *plVar13;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  undefined1 *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    uVar6 = param_3;
    puVar4 = param_2;
    puVar3 = param_1;
    uVar8 = 1;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar1 = puVar3;
    uVar5 = uVar6;
    puVar7 = param_4;
    uVar9 = param_5;
    uVar10 = param_6;
    param_3 = param_7;
    func_0x0001073147b8();
    *(undefined8 *)((long)register0x00000008 + -0x68) = extraout_x8;
    *(undefined1 **)((long)register0x00000008 + -0x4b8) = puVar1;
    *(ulong *)((long)register0x00000008 + -0x4b0) = uVar9;
    *(ulong *)((long)register0x00000008 + -0x4a8) = uVar10;
    if (((uVar8 & 1) == 0) && (*(long *)(puVar3 + 0x70) != 0)) {
      param_6 = uVar9;
      param_7 = uVar10;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uVar2 = *(undefined8 *)(puVar3 + 0x70);
      func_0x00010787c2e8();
      *(undefined1 **)((long)register0x00000008 + -0x1f0) = puVar1;
      *(ulong *)((long)register0x00000008 + -0x1e8) = uVar9;
      *(ulong *)((long)register0x00000008 + -0x1e0) = uVar10;
      *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar2;
      *(undefined1 **)((long)register0x00000008 + -0x1d0) = puVar3;
      *(undefined1 **)((long)register0x00000008 + -0x1c8) = puVar3;
      *(undefined8 *)((long)register0x00000008 + -0x1b8) =
           *(undefined8 *)((long)register0x00000008 + -0x4b0);
      *(undefined8 *)((long)register0x00000008 + -0x1c0) =
           *(undefined8 *)((long)register0x00000008 + -0x4b8);
      *(undefined8 *)((long)register0x00000008 + -0x1b0) =
           *(undefined8 *)((long)register0x00000008 + -0x4a8);
      unaff_x24 = (undefined1 *)((long)register0x00000008 + -0x1f0);
      FUN_10731435c((undefined1 *)((long)register0x00000008 + -0x1a8),puVar4);
      FUN_1073131c8((undefined1 *)((long)register0x00000008 + -0x188),uVar6);
      FUN_10730fb90((undefined1 *)((long)register0x00000008 + -0x160),param_4);
      FUN_10730fa54((undefined1 *)((long)register0x00000008 + -0x138),puVar3 + 0xa0);
      FUN_1073130bc((undefined1 *)((long)register0x00000008 + -0x120),
                    (undefined1 *)((long)register0x00000008 + -0x1f0));
      FUN_107312b38((undefined1 *)((long)register0x00000008 + -0x1f0));
      plVar13 = *(long **)(puVar3 + 0x70);
      if ((param_3 >> 0x20 & 1) == 0) {
        func_0x000107312b6c((undefined1 *)((long)register0x00000008 + -0x4a0),
                            (undefined1 *)((long)register0x00000008 + -0x138));
        FUN_107312bd0((undefined1 *)((long)register0x00000008 + -0x3d0),
                      (undefined1 *)((long)register0x00000008 + -0x4a0));
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x3d0);
        param_2 = (undefined1 *)((long)register0x00000008 + -0x3d0);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x4a0);
        param_3 = uVar5;
        param_5 = uVar8;
      }
      else {
        func_0x000107312b6c((undefined1 *)((long)register0x00000008 + -0x3b0),
                            (undefined1 *)((long)register0x00000008 + -0x138));
        FUN_107312bd0((undefined1 *)((long)register0x00000008 + -0x2e0),
                      (undefined1 *)((long)register0x00000008 + -0x3b0));
        FUN_107313224((undefined1 *)((long)register0x00000008 + -0x2c0),
                      (undefined1 *)((long)register0x00000008 + -0x2e0));
        param_2 = (undefined1 *)((long)register0x00000008 + -0x2c0);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        FUN_107273efc((undefined1 *)((long)register0x00000008 + -0x2c0));
        unaff_x20 = (undefined1 *)((long)register0x00000008 + -0x3b0);
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x2e0);
        param_5 = uVar8;
      }
      func_0x0001006393ec(puVar12);
      FUN_107312c18(unaff_x20);
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x138);
      FUN_107312c18();
      unaff_x25 = uVar9;
      unaff_x26 = puVar1;
    }
    else {
      param_2 = puVar3;
      FUN_107312810((undefined1 *)((long)register0x00000008 + -0x138));
      *(undefined8 *)((long)register0x00000008 + -0x4c0) = 0;
      lVar11 = *(long *)((long)register0x00000008 + -0x138);
      func_0x000107314820();
      if (lVar11 == 0) {
        param_2 = puVar4;
        param_3 = uVar6;
        puVar7 = param_4;
        FUN_107312878((undefined1 *)((long)register0x00000008 + -0x4b8));
        param_5 = uVar8;
        param_6 = uVar9;
        param_7 = uVar10;
      }
      else {
        in_ZR = param_4[0x20] == '\x01';
        param_3 = uVar5;
        param_5 = uVar8;
        param_6 = uVar9;
        param_7 = uVar10;
        if ((bool)in_ZR) {
          FUN_10730f6b4(param_4);
          param_2 = (undefined1 *)((long)register0x00000008 + -0x138);
          FUN_10730fa34();
          param_3 = uVar5;
          param_5 = uVar8;
          param_6 = uVar9;
          param_7 = uVar10;
        }
      }
      unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x138);
      __ZNSt13exception_ptrD1Ev();
      unaff_x20 = param_4;
    }
    param_4 = puVar7;
    func_0x000107314784(*(undefined8 *)((long)register0x00000008 + -0x68));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    FUN_107273efc((undefined1 *)((long)register0x00000008 + -0x2c0));
    func_0x0001006393ec((undefined1 *)((long)register0x00000008 + -0x2e0));
    FUN_107312c18((undefined1 *)((long)register0x00000008 + -0x3b0));
    param_1 = (undefined1 *)((long)register0x00000008 + -0x138);
    FUN_107312c18();
    unaff_x30 = FUN_1073127fc;
    func_0x0001073147c8();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x4c0);
    unaff_x21 = puVar3;
    unaff_x22 = uVar6;
    unaff_x23 = puVar4;
  }
  return;
}



/* Entry: 107312810; end: 107312877;  */

void FUN_107312810(undefined8 *param_1,long param_2)

{
  undefined **ppuStack_30;
  int iStack_28;
  
  FUN_107312488(param_2);
  iStack_28 = *(int *)(param_2 + 8);
  if (iStack_28 == 2) {
    *param_1 = 0;
  }
  else {
    ppuStack_30 = &PTR_FUN_11099f6f8;
    FUN_10730f6d0(param_1,&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
  }
  return;
}



/* Entry: 107312878; end: 107312b37;  */

undefined1 * FUN_107312878(long *param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 auStack_a0 [3];
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_58;
  
  plVar6 = param_1;
  func_0x0001073147b8();
  puVar11 = (undefined1 *)*plVar6;
  pcStack_88 = FUN_107313034;
  ppuStack_80 = &PTR_FUN_11099f7a8;
  auStack_a0[0] = param_2;
  puStack_78 = (undefined1 *)auStack_a0;
  uStack_58 = extraout_x8;
  func_0x00010bccc554(*(undefined8 *)(puVar11 + 0x48),&pcStack_88,plVar6[1],param_1[2]);
  func_0x000107314890();
  func_0x000107314798();
  func_0x00010731480c();
  if (!(bool)in_ZR) {
    piVar1 = (int *)(*(long *)(extraout_x8_00 + -8) + 0x28);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  func_0x000107314778();
  puVar7 = *(undefined1 **)(puVar11 + 0x30);
  puVar10 = (undefined8 *)param_1[1];
  func_0x0001073147a4(puVar7,puVar10,param_1[2],&UNK_10de3a958);
  uVar5 = param_3[0x20] == '\x01';
  if ((bool)uVar5) {
    func_0x000104c003e8();
    puVar7 = param_3;
  }
  do {
    iVar9 = (int)puVar10;
    func_0x000107314784(uStack_58);
    if ((bool)uVar5) {
      return puVar7;
    }
    ___stack_chk_fail();
    if (iVar9 == 0) {
      __Unwind_Resume(puVar7);
      func_0x000104bd46a0(puVar7);
      FUN_10730e9d0(puVar7 + 0x90);
      FUN_10730b1b0(puVar7 + 0x68);
      func_0x00010730ea24(puVar7 + 0x48);
      return puVar7;
    }
    if (iVar9 == 3) {
      ___cxa_begin_catch();
      puVar12 = *(undefined1 **)(puVar11 + 0x30);
      puVar10 = (undefined8 *)param_1[1];
      lVar2 = param_1[2];
      puVar8 = puVar7;
      func_0x0001073147dc();
      func_0x00010002b838(auStack_a0,puVar8);
      FUN_107311cb4(puVar12,puVar10,lVar2,auStack_a0,*(undefined8 *)(puVar7 + 0x48),puVar7[0x50]);
      func_0x0001073147e8();
      if (*(char *)(param_4 + 0x20) == '\x01') {
        func_0x000107314930();
        func_0x000107314938();
        func_0x000107314944();
        func_0x000107314820();
      }
      uVar5 = puVar7[8] == '\n';
      if ((bool)uVar5) {
        puVar12 = puVar11;
        FUN_107312c5c(puVar11,puVar7,param_1[1],param_1[2]);
        puVar10 = (undefined8 *)puVar7;
      }
    }
    else {
      ___cxa_begin_catch();
      puVar11 = *(undefined1 **)(puVar11 + 0x30);
      puVar10 = (undefined8 *)param_1[1];
      param_1 = (long *)param_1[2];
      puVar12 = puVar11;
      if (iVar9 == 2) {
        func_0x0001073147dc();
        func_0x00010002b838(auStack_a0,puVar7);
        func_0x0001073147a4(puVar11,puVar10,param_1,auStack_a0);
        func_0x0001073147e8();
        uVar5 = *(char *)(param_4 + 0x20) == '\x01';
        if ((bool)uVar5) {
          func_0x000107314930();
          func_0x000107314938();
          func_0x000107314944();
LAB_107312aa4:
          func_0x000107314820();
        }
      }
      else {
        func_0x0001073147a4(puVar11,puVar10,param_1,&UNK_10de3a970);
        uVar5 = *(char *)(param_4 + 0x20) == '\x01';
        if ((bool)uVar5) {
          func_0x000107314930();
          auStack_a0[0] = 0;
          puVar10 = auStack_a0;
          FUN_10730fa34();
          goto LAB_107312aa4;
        }
      }
    }
    ___cxa_end_catch();
    puVar7 = puVar12;
  } while( true );
}



/* Entry: 107312b38; end: 107312bcf;  */

long FUN_107312b38(long param_1)

{
  FUN_10730e9d0(param_1 + 0x90);
  FUN_10730b1b0(param_1 + 0x68);
  func_0x00010730ea24(param_1 + 0x48);
  return param_1;
}



/* Entry: 107312bd0; end: 107312c17;  */

void FUN_107312bd0(long param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107314884();
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar1 = (undefined8 *)0xd8;
  __Znwm();
  *puVar1 = &PTR_FUN_11099f8e8;
  func_0x000107312b6c(puVar1 + 1);
  *(undefined8 **)(unaff_x20 + 0x18) = puVar1;
  return;
}



/* Entry: 107312c18; end: 107312c3f;  */

undefined8 FUN_107312c18(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_107312b38(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107312c40; end: 107312c5b;  */

void FUN_107312c40(undefined4 param_1)

{
  FUN_1072bbf20(param_1);
  return;
}



/* Entry: 107312c5c; end: 107312f2b;  */

void FUN_107312c5c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  uint *puVar3;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  long *plStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined **ppuStack_270;
  undefined1 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [504];
  undefined8 uStack_58;
  
  func_0x000107314884();
  func_0x0001073147b8();
  puStack_268 = auStack_250;
  ppuStack_270 = &PTR_DAT_11099bc38;
  uStack_258 = 500;
  uStack_260 = 0;
  uStack_58 = extraout_x8;
  __ZNSt3__16chrono12system_clock3nowEv();
  uStack_2c8 = 0;
  plStack_2d0 = (long *)(param_1 / 1000);
  func_0x0001003a91d4(&UNK_10f40a05e);
  func_0x00010731475c();
  func_0x0001073147f8();
  plStack_2d0 = (long *)(ulong)*(uint *)(unaff_x19 + 1);
  uStack_2c8 = 0;
  func_0x0001003a91d4(&UNK_10f40a068);
  func_0x00010731475c();
  func_0x0001073147f8();
  uStack_2c8 = 0;
  plStack_2d0 = param_3;
  func_0x0001003a91d4(&UNK_10f40a074);
  func_0x00010731475c();
  func_0x0001073147f8();
  if (((ulong)unaff_x19[8] >> 0x20 & 1) != 0) {
    plStack_2d0 = (long *)(unaff_x19[8] & 0xffffffff);
    uStack_2c8 = 0;
    func_0x0001003a91d4(&UNK_10f40a087);
    func_0x00010731475c();
    func_0x0001073147f8();
  }
  if ((*(uint *)(unaff_x19 + 10) & 1) != 0) {
    plStack_2d0 = (long *)unaff_x19[9];
    uStack_2c8 = 0;
    func_0x0001003a91d4(&UNK_10f40a094);
    func_0x00010731475c();
    func_0x0001073147f8();
  }
  func_0x000107314798();
  puVar1 = puRam00000001138220c8;
  for (puVar4 = puRam00000001138220c0; uVar2 = puVar4 == puVar1, !(bool)uVar2; puVar4 = puVar4 + 1)
  {
    puVar3 = (uint *)*puVar4;
    if ((char)puVar3[6] == '\x01') {
      lStack_2b0 = *(long *)(puVar3 + 4) / 1000;
    }
    else {
      lStack_2b0 = 0;
    }
    plStack_2d0 = (long *)(ulong)*puVar3;
    uStack_290 = (ulong)puVar3[9];
    uStack_280 = (ulong)puVar3[10];
    uStack_2a0 = (ulong)(byte)puVar3[8];
    uStack_2c8 = 0;
    lStack_2c0 = *(long *)(puVar3 + 2) / 1000;
    uStack_2b8 = 0;
    uStack_2a8 = 0;
    uStack_298 = 0;
    uStack_288 = 0;
    uStack_278 = 0;
    func_0x0001003a91d4(&UNK_10f40a0c1);
    func_0x00010731475c();
    func_0x0001073147f8();
  }
  func_0x000107314778();
  FUN_107312f2c(&ppuStack_270,unaff_x20 + 0x18);
  func_0x000107314828();
  func_0x000107314860();
  func_0x0001073147e8();
  func_0x000107314828();
  func_0x000107314860();
  func_0x0001073147e8();
  func_0x000107314828();
  func_0x000107314860();
  func_0x0001073147e8();
  if (((ulong)(param_1 / 1000) & 1) == 0) {
    (**(code **)(*unaff_x19 + 0x10))();
    uStack_2c8 = 0;
    plStack_2d0 = unaff_x19;
    func_0x0001003a91d4(&UNK_10f40a0b7);
    func_0x00010731475c();
    func_0x0001073147f8();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
            (&plStack_2d0,puStack_268,uStack_260);
  func_0x00010786df04(5,&plStack_2d0,0,1);
  func_0x0001073147e8();
  func_0x0001003ac644();
  func_0x000107314784(uStack_58);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001073147e8();
    func_0x0001003ac644(&ppuStack_270);
    func_0x0001073147c8();
    func_0x000107314884();
    func_0x000107875cd4();
    func_0x0001003a91d4(&UNK_10f40a128);
    func_0x0001073147f8();
    return;
  }
  return;
}



/* Entry: 107312f2c; end: 107312f9b;  */

void FUN_107312f2c(void)

{
  func_0x000107314884();
  func_0x000107875cd4();
  func_0x0001003a91d4(&UNK_10f40a128);
  func_0x0001073147f8();
  return;
}



/* Entry: 107312f9c; end: 107312f9f;  */

void FUN_107312f9c(undefined8 param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  long *plVar2;
  
  func_0x000107314970();
  func_0x000107314798();
  func_0x00010731480c();
  if (!(bool)in_ZR) {
    __ZNSt3__16chrono12system_clock3nowEv();
    lVar1 = *(long *)(lRam00000001138220c8 + -8);
    if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
      *(undefined1 *)(lVar1 + 0x18) = 1;
    }
    *(undefined8 *)(lVar1 + 0x10) = param_1;
  }
  func_0x000107314778();
  plVar2 = (long *)(unaff_x19 + 0xa0);
  if (*plVar2 != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(plVar2);
  FUN_1072508cc(plVar2);
  func_0x00010ae7dc90(unaff_x19 + 0x88);
  func_0x000107313354(unaff_x19 + 0x70);
  func_0x00010724b8b8(unaff_x19 + 0x60);
  func_0x00010724b8b8(unaff_x19 + 0x50);
  func_0x00010731332c(unaff_x19 + 0x48);
  func_0x00010726eedc(unaff_x19 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x18);
  return;
}



/* Entry: 107312fa0; end: 107312fd3;  */

void FUN_107312fa0(void)

{
  FUN_107313280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107312fd4; end: 107313017;  */

long * FUN_107312fd4(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 107313018; end: 107313033;  */

void FUN_107313018(long param_1)

{
  func_0x00010002b838();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 107313034; end: 10731309f;  */

void FUN_107313034(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0x10);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = *(long **)(*plVar5 + 0x18);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x30))();
    func_0x0001073148d4();
    return;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x107313094);
  (*pcVar4)();
}



/* Entry: 1073130a0; end: 1073130bb;  */

void FUN_1073130a0(void)

{
  return;
}



/* Entry: 1073130bc; end: 10731315f;  */

void FUN_1073130bc(void)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107314800();
  _memcpy();
  lVar1 = *(long *)(unaff_x21 + 0x60);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
  }
  else if (lVar1 == unaff_x21 + 0x48) {
    *(long *)(unaff_x20 + 0x60) = unaff_x20 + 0x48;
    (**(code **)(**(long **)(unaff_x21 + 0x60) + 0x18))
              (*(long **)(unaff_x21 + 0x60),unaff_x20 + 0x48);
  }
  else {
    func_0x0001073147dc();
    *(long *)(unaff_x20 + 0x60) = lVar1;
  }
  FUN_107313160(unaff_x20 + 0x68,unaff_x21 + 0x68);
  FUN_10730faec(unaff_x20 + 0x90,unaff_x21 + 0x90);
  return;
}



/* Entry: 107313160; end: 107313197;  */

undefined1 * FUN_107313160(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_107313198();
  return param_1;
}



/* Entry: 107313198; end: 1073131ab;  */

void FUN_107313198(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_10724cbe8();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 1073131ac; end: 1073131c7;  */

void FUN_1073131ac(long param_1)

{
  FUN_10724cbe8();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1073131c8; end: 1073131f3;  */

undefined1 * FUN_1073131c8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  FUN_1073131f4();
  return param_1;
}



/* Entry: 1073131f4; end: 107313207;  */

void FUN_1073131f4(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x000105302f48();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  return;
}



/* Entry: 107313208; end: 107313223;  */

void FUN_107313208(long param_1)

{
  func_0x000105302f48();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 107313224; end: 107313253;  */

long FUN_107313224(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000105302f48();
  *(undefined4 *)(lVar1 + 0x20) = param_3;
  FUN_107313254(lVar1 + 0x28);
  return param_1;
}



/* Entry: 107313254; end: 10731327f;  */

void FUN_107313254(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  param_1[0x20] = 0;
  param_1[0x38] = 0;
  param_1[0x40] = 0;
  param_1[0x58] = 0;
  param_1[0x60] = 0;
  param_1[0x98] = 0;
  param_1[0xa0] = 0;
  param_1[0xa4] = 0;
  return;
}



/* Entry: 107313280; end: 10731332b;  */

void FUN_107313280(undefined8 param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  long *plVar2;
  
  func_0x000107314970();
  func_0x000107314798();
  func_0x00010731480c();
  if (!(bool)in_ZR) {
    __ZNSt3__16chrono12system_clock3nowEv();
    lVar1 = *(long *)(lRam00000001138220c8 + -8);
    if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
      *(undefined1 *)(lVar1 + 0x18) = 1;
    }
    *(undefined8 *)(lVar1 + 0x10) = param_1;
  }
  func_0x000107314778();
  plVar2 = (long *)(unaff_x19 + 0xa0);
  if (*plVar2 != 0) {
    func_0x000107250860();
  }
  FUN_1072508a0(plVar2);
  FUN_1072508cc(plVar2);
  func_0x00010ae7dc90(unaff_x19 + 0x88);
  func_0x000107313354(unaff_x19 + 0x70);
  func_0x00010724b8b8(unaff_x19 + 0x60);
  func_0x00010724b8b8(unaff_x19 + 0x50);
  func_0x00010731332c(unaff_x19 + 0x48);
  func_0x00010726eedc(unaff_x19 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x18);
  return;
}



/* Entry: 10731332c; end: 10731339b;  */

void FUN_10731332c(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107314964();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x0001073147d0();
  }
  return;
}



/* Entry: 10731339c; end: 1073133af;  */

void FUN_10731339c(void)

{
  func_0x00010731337c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073133b0; end: 1073133d7;  */

undefined8 FUN_1073133b0(void)

{
  undefined8 unaff_x19;
  
  __Znwm(0x38);
  func_0x000107314984();
  FUN_107312290();
  return unaff_x19;
}



/* Entry: 1073133d8; end: 1073133fb;  */

void FUN_1073133d8(long param_1,undefined8 param_2)

{
  func_0x000107314984(param_2,param_1 + 8);
  FUN_107312290();
  return;
}



/* Entry: 1073133fc; end: 107313997;  */

void FUN_1073133fc(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined1 in_ZR;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  undefined8 **ppuVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 extraout_x8;
  ulong uVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_c8;
  undefined2 uStack_c0;
  undefined8 uStack_bc;
  undefined2 uStack_b4;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined2 uStack_b0;
  undefined1 uStack_ae;
  undefined8 uStack_ac;
  undefined2 uStack_a4;
  undefined1 uStack_a2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  func_0x0001073147b8();
  uStack_68 = extraout_x8;
  func_0x0001073148e8();
  iVar10 = (int)param_1 + 8;
  FUN_10730fcbc();
  if (iVar10 == 0) {
LAB_1073137d8:
    func_0x0001073148a8();
    func_0x000107314784(uStack_68);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar5 = *(long *)(param_1 + 0x28);
    lVar6 = *(long *)(param_1 + 0x30);
    func_0x000107314798();
    puVar12 = (undefined8 *)0x30;
    __Znwm();
    puVar12[3] = 0;
    puVar12[2] = 0;
    puVar12[5] = 0;
    puVar12[4] = 0;
    puVar12[1] = 0;
    *puVar12 = 0;
    *(undefined4 *)puVar12 = 1;
    puVar8 = puRam00000001138220c0;
    if (puRam00000001138220c8 < puRam00000001138220d0) {
      puStack_c8 = (undefined8 *)0x0;
      puVar23 = puRam00000001138220c8 + 1;
      *puRam00000001138220c8 = puVar12;
LAB_10731351c:
      ppuVar14 = &puStack_c8;
      puRam00000001138220c8 = puVar23;
      FUN_107313a44();
      __ZNSt3__16chrono12system_clock3nowEv();
      puVar22 = (undefined4 *)puVar23[-1];
      *(undefined8 ***)(puVar22 + 2) = ppuVar14;
      *(undefined1 *)(puVar22 + 8) = *(undefined1 *)(param_1 + 0x20);
      ppuVar15 = ppuVar14;
      func_0x000107314778();
      func_0x000100061078();
      uStack_c0 = 0x100;
      uStack_b4 = 1;
      uStack_b0 = 0x100;
      uStack_ae = 0;
      uStack_ac = 0;
      uStack_a4 = 0x101;
      uStack_a2 = 1;
      puStack_c8 = (undefined8 *)0x1010001;
      uStack_bc = 0;
      plVar20 = *(long **)(lVar5 + 0x38);
      func_0x000107314858();
      func_0x00010731490c(*(undefined8 *)(*plVar20 + 0x28));
      in_ZR = (((uint)ppuVar15 ^ 0xffffffff) & 0x101) == 0;
      bVar1 = !(bool)in_ZR;
      func_0x0001073147f0();
      uStack_b2 = 1;
      plVar20 = *(long **)(lVar5 + 0x38);
      uStack_b1 = bVar1;
      func_0x000107314858();
      func_0x00010731490c(*(undefined8 *)(*plVar20 + 0x28));
      uVar11 = (uint)ppuVar15;
      func_0x0001073147f0();
      if (((uVar11 ^ 0xffffffff) & 0x101) == 0) {
        plVar20 = *(long **)(lVar5 + 0x38);
        func_0x000107314858();
        func_0x000107314918(*(undefined8 *)(*plVar20 + 0x48));
        ppuVar16 = ppuVar15;
        func_0x0001073147f0();
        plVar20 = *(long **)(lVar5 + 0x38);
        func_0x000107314858();
        func_0x000107314918(*(undefined8 *)(*plVar20 + 0x48));
        func_0x0001073147f0();
        uVar2 = 4;
        if (((ulong)ppuVar15 & 0x100000000) != 0) {
          uVar2 = (ulong)ppuVar15 & 0xffffffff;
        }
        func_0x0001073af4d0(&uStack_80,uVar2,0x100000000);
        uStack_98 = uStack_78;
        uStack_a0 = uStack_80;
        uStack_80 = 0;
        uStack_78 = 0;
        func_0x0001073139fc(lVar5 + 0x60,&uStack_a0);
        func_0x00010724b8b8(&uStack_a0);
        func_0x00010724b8b8(&uStack_80);
        plVar20 = *(long **)(lVar5 + 0x38);
        func_0x000107314858();
        (**(code **)(*plVar20 + 0x28))(plVar20,&uStack_a0);
        *(bool *)(lVar5 + 0x80) = (((uint)plVar20 ^ 0xffffffff) & 0x101) == 0;
        func_0x0001073147f0();
        bVar7 = *(byte *)(lVar5 + 0x80);
        func_0x000107313a6c(&uStack_80,1);
        puVar8 = puStack_70;
        puStack_70[2] = 0;
        *puStack_70 = &PTR_FUN_11099f968;
        puStack_70[1] = 0;
        func_0x000107314858();
        in_ZR = ((ulong)ppuVar16 & 0x100000000) == 0;
        uVar11 = (uint)ppuVar16;
        if ((bool)in_ZR) {
          uVar11 = 1;
        }
        FUN_107313ae4(puVar8 + 3,uVar11 & 0xff,(ulong)bVar7 | (ulong)bVar7 << 0x20,&uStack_a0);
        func_0x0001073147f0();
        puStack_d8 = puStack_70;
        puStack_70 = (undefined8 *)0x0;
        puStack_e0 = puStack_d8 + 3;
        func_0x0001073141d4(&uStack_80);
        puVar12 = puStack_d8;
        puVar8 = puStack_e0;
        puStack_e0 = (undefined8 *)0x0;
        puStack_d8 = (undefined8 *)0x0;
        uStack_98 = *(undefined8 *)(lVar5 + 0x78);
        uStack_a0 = *(undefined8 *)(lVar5 + 0x70);
        *(undefined8 **)(lVar5 + 0x78) = puVar12;
        *(undefined8 **)(lVar5 + 0x70) = puVar8;
        func_0x000107313354(&uStack_a0);
        func_0x000107313354(&puStack_e0);
      }
      uVar17 = 0x1b0;
      __Znwm();
      FUN_1073141e4();
      lVar18 = *(long *)(lVar5 + 0x48);
      *(undefined8 *)(lVar5 + 0x48) = uVar17;
      if (lVar18 != 0) {
        func_0x0001073147d0();
      }
      *(undefined4 *)(lVar5 + 8) = 2;
      func_0x000107314798();
      *puVar22 = 2;
      func_0x000107314778();
      func_0x0001073147a4(*(undefined8 *)(lVar5 + 0x30),"init",4,&UNK_10de3a958);
      FUN_107311ea0(*(undefined8 *)(lVar5 + 0x30),ppuVar14,1);
      func_0x00010ae7dc58(lVar6 + 0x88);
      goto LAB_1073137d8;
    }
    lVar18 = (long)puRam00000001138220c8 - (long)puRam00000001138220c0;
    uVar2 = (lVar18 >> 3) + 1;
    puStack_c8 = puVar12;
    if (uVar2 >> 0x3d == 0) {
      uVar19 = (long)puRam00000001138220d0 - (long)puRam00000001138220c0 >> 2;
      if (uVar19 <= uVar2) {
        uVar19 = uVar2;
      }
      if (0x7ffffffffffffff7 < (ulong)((long)puRam00000001138220d0 - (long)puRam00000001138220c0)) {
        uVar19 = 0x1fffffffffffffff;
      }
      if (uVar19 == 0) {
        lVar13 = 0;
      }
      else {
        if (uVar19 >> 0x3d != 0) {
          func_0x000104bd35f4();
          goto LAB_107313950;
        }
        lVar13 = uVar19 << 3;
        __Znwm();
      }
      puVar3 = (undefined8 *)(lVar13 + lVar18);
      puVar4 = (undefined8 *)(lVar13 + uVar19 * 8);
      puStack_c8 = (undefined8 *)0x0;
      puVar21 = puVar3 + -(lVar18 >> 3);
      puVar23 = puVar3 + 1;
      *puVar3 = puVar12;
      _memcpy(puVar21,puVar8,lVar18);
      puRam00000001138220c0 = puVar21;
      puRam00000001138220d0 = puVar4;
      if (puVar8 != (undefined8 *)0x0) {
        puRam00000001138220c8 = puVar23;
        __ZdlPv(puVar8);
      }
      goto LAB_10731351c;
    }
  }
  FUN_107313a38();
LAB_107313950:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x107313954);
  (*pcVar9)();
}



/* Entry: 107313998; end: 1073139cf;  */

long FUN_107313998(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_11099f8c8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073139d0; end: 1073139db;  */

undefined ** FUN_1073139d0(void)

{
  return &PTR_DAT_11099f8c8;
}



/* Entry: 1073139dc; end: 107313a37;  */

void FUN_1073139dc(void)

{
  func_0x000107314984();
  FUN_107312290();
  return;
}



/* Entry: 107313a38; end: 107313a43;  */

void FUN_107313a38(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107314924();
  func_0x000107314964();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107313a44; end: 107313a93;  */

void FUN_107313a44(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107314964();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107313a94; end: 107313ac3;  */

void FUN_107313a94(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x9a90e7d95bc60a) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x1a8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_11099f968;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107313ac4; end: 107313ac7;  */

void FUN_107313ac4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099f968;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107313ac8; end: 107313adb;  */

void FUN_107313ac8(void)

{
  FUN_1073141c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107313adc; end: 107313ae3;  */

void FUN_107313adc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073148fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107313ae4; end: 107313c17;  */

undefined8 * FUN_107313ae4(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_48,param_4);
  func_0x00010787bf64(param_1,param_3,auStack_48);
  func_0x0001073148cc();
  *param_1 = &PTR_FUN_11099f9b8;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  FUN_10726ed14(param_1 + 0x2f);
  param_1[0x31] = param_1;
  func_0x0001073af058(param_1);
  for (uVar1 = 0; (param_2 & 0xffffffff) != uVar1; uVar1 = uVar1 + 1) {
    func_0x0001002a82b4(auStack_70,param_4);
    func_0x00010787c09c(auStack_50,param_1,uVar1,auStack_70);
    FUN_107313c38(param_1 + 0x2c,auStack_50);
    __ZNSt3__16threadD1Ev(auStack_50);
    func_0x0001001148fc(auStack_70);
  }
  return param_1;
}



/* Entry: 107313c18; end: 107313c1b;  */

undefined8 * FUN_107313c18(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_11099f9b8;
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



/* Entry: 107313c1c; end: 107313c2f;  */

void FUN_107313c1c(void)

{
  FUN_1073140b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107313c30; end: 107313c37;  */

void FUN_107313c30(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_2 + 0x180);
  uStack_30 = *(undefined8 *)(param_2 + 0x178);
  if (*(long *)(param_2 + 0x180) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x180) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_107314188(param_1,&uStack_30,*(undefined8 *)(param_2 + 0x188));
  func_0x00010731486c();
  return;
}



/* Entry: 107313c38; end: 107313c7f;  */

undefined8 * FUN_107313c38(undefined8 *param_1,undefined8 *param_2)

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
    FUN_107313c80();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 107313c80; end: 107313d2f;  */

long FUN_107313c80(long *param_1,undefined8 *param_2)

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
  FUN_107313d30(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    FUN_107313df0();
  }
  puStack_50 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar3));
  plStack_40 = plStack_58 + (long)plVar2;
  puStack_48 = puStack_50 + 1;
  *puStack_50 = *param_2;
  *param_2 = 0;
  FUN_107313d70(param_1,&plStack_58);
  lVar3 = param_1[1];
  func_0x000107313f64(&plStack_58);
  return lVar3;
}



/* Entry: 107313d30; end: 107313d6f;  */

long * FUN_107313d30(long *param_1,long *param_2)

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
  FUN_107313de4();
  func_0x000107314884();
  plVar3 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_107313e30(plVar3,*param_1,param_1[1],lVar1);
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



/* Entry: 107313d70; end: 107313de3;  */

void FUN_107313d70(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107314884();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_107313e30(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 107313de4; end: 107313def;  */

void FUN_107313de4(void)

{
  func_0x000107314924();
  FUN_107313e14();
  return;
}



/* Entry: 107313df0; end: 107313e13;  */

void FUN_107313df0(void)

{
  FUN_107313e14();
  return;
}



/* Entry: 107313e14; end: 107313e2f;  */

void FUN_107313e14(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_107313eb4();
  FUN_107313ee4(&uStack_60);
  return;
}



/* Entry: 107313e30; end: 107313eb3;  */

void FUN_107313e30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_107313eb4();
  FUN_107313ee4(&uStack_50);
  return;
}



/* Entry: 107313eb4; end: 107313ee3;  */

void FUN_107313eb4(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 8) {
    __ZNSt3__16threadD1Ev();
  }
  return;
}



/* Entry: 107313ee4; end: 107313f13;  */

long FUN_107313ee4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_107313f14(param_1);
  }
  return param_1;
}



/* Entry: 107313f14; end: 107313f33;  */

void FUN_107313f14(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    __ZNSt3__16threadD1Ev();
  }
  return;
}



/* Entry: 107313f34; end: 107313f8f;  */

void FUN_107313f34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -8;
    __ZNSt3__16threadD1Ev();
  }
  return;
}



/* Entry: 107313f90; end: 107313f97;  */

void FUN_107313f90(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107314884(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    __ZNSt3__16threadD1Ev();
  }
  return;
}



/* Entry: 107313f98; end: 10731407b;  */

void FUN_107313f98(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107314884();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    __ZNSt3__16threadD1Ev();
  }
  return;
}



/* Entry: 10731407c; end: 107314083;  */

void FUN_10731407c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107314884(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    __ZNSt3__16threadD1Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107314084; end: 1073140b7;  */

void FUN_107314084(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107314884();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    __ZNSt3__16threadD1Ev();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073140b8; end: 107314127;  */

undefined8 * FUN_1073140b8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_11099f9b8;
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



/* Entry: 107314128; end: 107314187;  */

void FUN_107314128(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_107314188(param_1,&uStack_30,param_2[2]);
  func_0x00010731486c();
  return;
}



/* Entry: 107314188; end: 1073141bf;  */

undefined8 * FUN_107314188(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[2] = param_3;
  func_0x00010731486c();
  return param_1;
}



/* Entry: 1073141c0; end: 1073141e3;  */

void FUN_1073141c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099f968;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073141e4; end: 107314273;  */

undefined8 *
FUN_1073141e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_78 [56];
  
  func_0x0001073a5b38(auStack_78);
  func_0x00010bccbe58(param_1,param_2,auStack_78,param_3,param_4,param_5);
  func_0x00010054d304(auStack_78);
  *param_1 = &PTR_FUN_11099f840;
  return param_1;
}



/* Entry: 107314274; end: 107314277;  */

void FUN_107314274(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  undefined1 **ppuVar7;
  undefined1 *puStack_50;
  ulong uStack_48;
  byte bStack_39;
  
  ppuVar7 = &puStack_50;
  *param_1 = &PTR_DAT_110d99f88;
  plVar6 = (long *)param_1[0x14];
  uStack_48 = param_1[0x35];
  puStack_50 = (undefined1 *)param_1[0x34];
  if (param_1[0x35] != 0) {
    plVar1 = (long *)(param_1[0x35] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (**(code **)(*plVar6 + 0x28))(plVar6,&puStack_50);
  func_0x00010b5ef3cc();
  if (param_1[0x2c] != 0) {
    func_0x000107c313b8();
    func_0x00010bccc9ac(*(undefined8 *)param_1[0x2c]);
    uVar2 = uStack_48;
    ppuVar5 = (undefined1 **)puStack_50;
    if (-1 < (char)bStack_39) {
      uVar2 = (ulong)bStack_39;
      ppuVar5 = &puStack_50;
    }
    (**(code **)((long)*ppuVar7 + 0x18))(ppuVar7,0,ppuVar5,uVar2,param_1[0x2d]);
    func_0x00010bccc9b8();
  }
  func_0x00010bccc870(param_1 + 0x34);
  func_0x00010563b5e4(param_1 + 0x2c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x24);
  func_0x00010bccc638(param_1 + 0x21);
  __ZNSt3__15mutexD1Ev(param_1 + 0x19);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x16);
  func_0x000105276418(param_1 + 0x14);
  func_0x00010563d08c(param_1 + 0x13);
  func_0x00010bcc7c14(param_1);
  return;
}



/* Entry: 107314278; end: 10731428b;  */

void FUN_107314278(void)

{
  func_0x00010bccc224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731428c; end: 10731432b;  */

void FUN_10731428c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010bccc390();
  uVar4 = *(undefined8 *)*param_1;
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = puVar1 + 3;
  *puVar1 = &PTR_FUN_11099f888;
  func_0x0001073a5c90(puVar2,uVar4);
  lVar3 = *param_1;
  uStack_38 = *(undefined8 *)(lVar3 + 0x10);
  uStack_40 = *(undefined8 *)(lVar3 + 8);
  *(undefined8 **)(lVar3 + 8) = puVar2;
  *(undefined8 **)(lVar3 + 0x10) = puVar1;
  func_0x0001000df524(&uStack_40);
  func_0x0001073148d4();
  return;
}



/* Entry: 10731432c; end: 10731432f;  */

void FUN_10731432c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099f888;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107314330; end: 107314343;  */

void FUN_107314330(void)

{
  func_0x00010731434c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107314344; end: 10731435b;  */

void FUN_107314344(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073148fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10731435c; end: 1073143b7;  */

long FUN_10731435c(long param_1,long param_2)

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



/* Entry: 1073143b8; end: 1073143e3;  */

undefined8 * FUN_1073143b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099f8e8;
  FUN_107312c18(param_1 + 1);
  return param_1;
}



/* Entry: 1073143e4; end: 1073143f7;  */

void FUN_1073143e4(void)

{
  FUN_1073143b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073143f8; end: 107314437;  */

undefined8 FUN_1073143f8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd8;
  __Znwm(0xd8);
  FUN_10731461c();
  return uVar1;
}



/* Entry: 107314438; end: 10731445b;  */

undefined8 * FUN_107314438(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_11099f8e8;
  FUN_10730fc30(param_2 + 1);
  FUN_1073130bc(param_2 + 4,param_1 + 0x20);
  return param_2;
}



/* Entry: 10731445c; end: 1073145d7;  */

void FUN_10731445c(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 auStack_b0 [14];
  long lStack_40;
  long lStack_38;
  
  func_0x0001073148e8();
  iVar2 = (int)param_1 + 8;
  FUN_10730fcbc();
  if (iVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    FUN_107312810(&lStack_38,*(undefined8 *)(param_1 + 0x48));
    auStack_b0[0] = 0;
    puVar3 = auStack_b0;
    __ZNSt13exception_ptrD1Ev();
    if (lStack_38 == 0) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      lStack_40 = ((long)puVar3 - *(long *)(param_1 + 0x20)) / 1000;
      ppuStack_100 = &PTR_FUN_110996720;
      uStack_f8 = 0;
      uStack_120 = CONCAT44(uStack_120._4_4_,0x16a);
      uStack_108 = 0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      func_0x0001073148b0();
      puVar3 = &uStack_120;
      FUN_10730f7b8(puVar3,"action");
      FUN_1072a0318();
      FUN_10726e6c0(auStack_b0,puVar3);
      FUN_107262330(&uStack_120);
      puVar3 = *(undefined8 **)(lVar1 + 0x30);
      uStack_120 = *puVar3;
      uStack_118 = 3;
      func_0x00010743f9dc(puVar3,auStack_b0,&lStack_40,&uStack_120,7);
      FUN_107312878(param_1 + 0x50,param_1 + 0x68,param_1 + 0x88,param_1 + 0xb0);
      FUN_107262330(auStack_b0);
    }
    else if (*(char *)(param_1 + 0xd0) == '\x01') {
      FUN_10730f778(param_1 + 0xb0);
      FUN_10730fa34();
    }
    __ZNSt13exception_ptrD1Ev(&lStack_38);
  }
  func_0x0001073148a8();
  return;
}



/* Entry: 1073145d8; end: 10731460f;  */

long FUN_1073145d8(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_11099f948);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107314610; end: 10731461b;  */

undefined ** FUN_107314610(void)

{
  return &PTR_DAT_11099f948;
}



/* Entry: 10731461c; end: 107314673;  */

undefined8 * FUN_10731461c(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_FUN_11099f8e8;
  FUN_10730fc30(param_1 + 1);
  FUN_1073130bc(param_1 + 4,param_2 + 0x18);
  return param_1;
}



/* Entry: 107314674; end: 10731475b;  */

void FUN_107314674(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 auStack_110 [2];
  undefined4 uStack_108;
  undefined4 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_a0 [112];
  
  puVar4 = *(undefined1 **)*param_1;
  lVar3 = *(long *)(puVar4 + 8);
  auStack_110[0] = 0x16c;
  uStack_f8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  ppuStack_f0 = &PTR_FUN_110996720;
  uStack_e8 = 0;
  func_0x0001073148b0();
  puVar1 = auStack_110;
  FUN_1072bbe40(puVar1,&DAT_10f40a13d,*puVar4);
  FUN_1072a0318();
  FUN_10726e6c0(auStack_a0,puVar1);
  FUN_107262330(auStack_110);
  puVar2 = *(undefined8 **)(lVar3 + 0x30);
  auStack_110[0] = 1;
  uStack_108 = 0;
  uStack_120 = *puVar2;
  uStack_118 = 3;
  func_0x00010743fa9c(puVar2,auStack_a0,auStack_110,&uStack_120,7);
  FUN_107262330(auStack_a0);
  return;
}



/* Entry: 10731475c; end: 1073149ab;  */

undefined1 * FUN_10731475c(void)

{
  return &stack0x00000060;
}



/* Entry: 1073149ac; end: 107314c97;  */

undefined8 *
FUN_1073149ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 auStack_f8 [2];
  undefined4 uStack_f0;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = param_5;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_11099fa18;
  func_0x0001073af27c(&uStack_d0,0,0);
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  func_0x00010724b8b8(&uStack_d0);
  uVar7 = *param_3;
  param_1[9] = param_3[1];
  param_1[8] = uVar7;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 0x14);
  param_1[0x1c] = param_1 + 0x1c;
  param_1[0x1d] = param_1 + 0x1c;
  param_1[0x1e] = 0;
  puVar4 = param_1 + 0x1f;
  __ZNSt3__115recursive_mutexC1Ev();
  param_1[0x27] = param_1 + 0x27;
  param_1[0x28] = param_1 + 0x27;
  param_1[0x29] = 0;
  plVar6 = (long *)*param_4;
  func_0x00010731d2c4();
  func_0x00010731cd24(*(undefined8 *)(*plVar6 + 0x28));
  func_0x00010731d08c();
  *(undefined1 *)(param_1 + 10) = extraout_w8;
  func_0x00010731d008();
  plVar6 = (long *)*param_4;
  func_0x00010731d2c4();
  func_0x00010731cd24(*(undefined8 *)(*plVar6 + 0x28));
  func_0x00010731d08c();
  *(undefined1 *)((long)param_1 + 0x51) = extraout_w8_00;
  func_0x00010731d008();
  plVar6 = (long *)*param_4;
  func_0x00010731d2c4();
  func_0x00010731cd24(*(undefined8 *)(*plVar6 + 0x28));
  func_0x00010731d08c();
  *(undefined1 *)((long)param_1 + 0x53) = extraout_w8_01;
  func_0x00010731d008();
  _sqlite3_libversion_number();
  uStack_d0 = CONCAT44(uStack_d0._4_4_,0x16b);
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  ppuStack_b0 = &PTR_FUN_110996720;
  uStack_a8 = 0;
  uStack_90 = 0x16b;
  uStack_88 = 0;
  uStack_84 = 1;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  FUN_1072a0318(&uStack_d0,"version",puVar4);
  auStack_f8[0] = 1;
  uStack_f0 = 0;
  uStack_e0 = *param_2;
  uStack_d8 = 3;
  func_0x00010743fa9c(param_2,&uStack_d0,auStack_f8,&uStack_e0,7);
  plVar6 = (long *)*param_4;
  func_0x00010731d284();
  (**(code **)(*plVar6 + 0x28))(plVar6,auStack_f8);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if ((((uint)plVar6 ^ 0xffffffff) & 0x101) == 0) {
    iVar5 = (int)puVar4;
    bVar3 = SBORROW4(iVar5,0x2e247f);
    bVar1 = iVar5 + -0x2e247f < 0;
    bVar2 = iVar5 == 0x2e247f;
  }
  *(bool *)((long)param_1 + 0x52) = !bVar2 && bVar1 == bVar3;
  func_0x00010731c9bc();
  FUN_107262330(&uStack_d0);
  return param_1;
}



/* Entry: 107314c98; end: 107315273;  */

undefined1  [16] FUN_107314c98(long param_1,undefined ***param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long unaff_x19;
  undefined1 *unaff_x20;
  long lVar8;
  double dVar9;
  undefined **ppuVar10;
  undefined1 auVar11 [16];
  undefined1 uStack_9c1;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined ***pppuStack_990;
  undefined *puStack_988;
  undefined8 uStack_980;
  undefined1 auStack_978 [32];
  undefined1 uStack_958;
  undefined1 uStack_940;
  undefined1 uStack_938;
  undefined1 uStack_920;
  undefined1 uStack_918;
  undefined1 uStack_8e0;
  undefined1 uStack_8d8;
  undefined1 uStack_8d4;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined1 uStack_8c0;
  undefined1 auStack_8b8 [128];
  undefined1 auStack_838 [656];
  undefined1 auStack_5a8 [24];
  undefined8 *puStack_590;
  undefined **appuStack_588 [26];
  long alStack_4b8 [2];
  undefined1 auStack_4a8 [504];
  undefined1 auStack_2b0 [128];
  undefined **appuStack_230 [3];
  undefined ***pppuStack_218;
  undefined1 uStack_210;
  undefined **ppuStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined ***pppuStack_1f0;
  char cStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined ***pppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined ***pppuStack_1a8;
  undefined ***pppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [40];
  undefined ***pppuStack_160;
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [40];
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_98;
  undefined **appuStack_70 [12];
  undefined8 *puStack_10;
  undefined8 uStack_8;
  
  func_0x00010731d120();
  func_0x00010054bdbc();
  uStack_8 = extraout_x8;
  if (*(long *)(param_3 + 0x10) != 0) goto LAB_1073150e4;
  func_0x00010731cb28();
  func_0x00010731874c(alStack_4b8,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  FUN_1072d488c(auStack_4a8);
  func_0x0001075281c8(auStack_2b0,param_3);
  if (*(char *)(unaff_x19 + 0x51) == '\x01') {
    uVar2 = *unaff_x20;
    plVar5 = *(long **)(unaff_x19 + 0x30);
    func_0x00010731874c(&uStack_8d0,*(undefined8 *)(unaff_x19 + 0x20),
                        *(undefined8 *)(unaff_x19 + 0x28));
    uStack_8c0 = uVar2;
    func_0x0001075281c8(auStack_8b8,param_3);
    FUN_107315274(auStack_838,alStack_4b8);
    puStack_590 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)0x328;
    __Znwm();
    *puVar3 = &PTR_SUB_1109a0288;
    puVar3[2] = uStack_8c8;
    puVar3[1] = uStack_8d0;
    uStack_8d0 = 0;
    uStack_8c8 = 0;
    *(undefined1 *)(puVar3 + 3) = uStack_8c0;
    func_0x0001075281c8(puVar3 + 4,auStack_8b8);
    FUN_107315274(puVar3 + 0x14,auStack_838);
    puStack_590 = puVar3;
    FUN_1073176c8(auStack_978,&UNK_10f40a152);
    uStack_958 = 0;
    uStack_940 = 0;
    uStack_938 = 0;
    uStack_920 = 0;
    uStack_918 = 0;
    uStack_8e0 = 0;
    uStack_8d8 = 0;
    uStack_8d4 = 0;
    FUN_107273dcc(appuStack_588,auStack_5a8,auStack_978);
    param_2 = appuStack_588;
    (**(code **)(*plVar5 + 0x18))(plVar5);
    FUN_107273efc(appuStack_588);
    func_0x000107273f24(auStack_978);
    func_0x0001006393ec(auStack_5a8);
    FUN_1073152d4(&uStack_8d0);
  }
  else {
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    ppuStack_f0 = (undefined **)0x1;
    param_2 = &ppuStack_f0;
    FUN_107315300(alStack_4b8);
    func_0x0001001148fc((ulong)&ppuStack_f0 | 8);
  }
  in_ZR = *(char *)(unaff_x19 + 0x50) == '\x01';
  if ((bool)in_ZR) {
    uStack_9c1 = 0;
    puVar1 = (undefined1 *)(unaff_x19 + 0x80);
    param_2 = (undefined ***)&uStack_9c1;
    puVar4 = puVar1;
    FUN_107315604(puVar1,param_2,1,5);
    if ((int)puVar4 != 0) {
      in_ZR = *(char *)(unaff_x19 + 0x78) == '\x01';
      if (((bool)in_ZR) && (*(long *)(unaff_x19 + 0x58) != 0)) {
        dVar9 = (double)NEON_ucvtf(*(undefined8 *)(unaff_x19 + 8));
        uVar7 = (ulong)(uint)(int)(dVar9 + (double)*(uint *)(unaff_x19 + 0x84) * 1.1);
        in_ZR = *(ulong *)(unaff_x19 + 0x18) == uVar7;
        if (uVar7 <= *(ulong *)(unaff_x19 + 0x18)) {
          *puVar1 = 0;
          goto LAB_1073150dc;
        }
      }
      lVar8 = *(long *)(unaff_x19 + 0x40);
      func_0x00010731874c(&uStack_9a0,*(undefined8 *)(unaff_x19 + 0x20),
                          *(undefined8 *)(unaff_x19 + 0x28));
      ppuStack_1c0 = &PTR_SUB_1109a0388;
      uStack_1b0 = uStack_998;
      uStack_1b8 = uStack_9a0;
      uStack_9a0 = 0;
      uStack_998 = 0;
      pppuStack_1a8 = &ppuStack_1c0;
      func_0x00010731d2ac();
      ppuStack_1e0 = &PTR_SUB_1109a0418;
      uStack_1d0 = uStack_9a8;
      uStack_1d8 = uStack_9b0;
      uStack_9b0 = 0;
      uStack_9a8 = 0;
      pppuStack_1c8 = &ppuStack_1e0;
      func_0x00010731ce30();
      uStack_1f8 = uStack_9b8;
      uStack_200 = uStack_9c0;
      uStack_9c0 = 0;
      uStack_9b8 = 0;
      ppuStack_208 = &PTR_FUN_11099fd58;
      ppuStack_f0 = (undefined **)0x0;
      uStack_e8 = 0;
      pppuStack_1f0 = &ppuStack_208;
      func_0x0001072aefa0(&ppuStack_f0);
      cStack_1e8 = '\x01';
      appuStack_230[0] = &PTR_DAT_11099fdd8;
      pppuStack_218 = appuStack_230;
      uStack_210 = 1;
      param_2 = *(undefined ****)(lVar8 + 0x38);
      puStack_988 = &UNK_10f40a1b5;
      uStack_980 = 0xe;
      pppuStack_990 = param_2;
      if (param_2[0xc] == (undefined **)0x0) {
        FUN_107318c20(&ppuStack_f0);
        ppuVar10 = ppuStack_f0;
        pppuStack_1a0 = (undefined ***)0x0;
        __ZNSt13exception_ptrD1Ev(&pppuStack_1a0);
        if (ppuVar10 == (undefined **)0x0) {
          param_2 = &ppuStack_1c0;
          FUN_107318c54(&pppuStack_990,param_2,&ppuStack_1e0,&ppuStack_208,appuStack_230);
        }
        else {
          in_ZR = cStack_1e8 == '\x01';
          if ((bool)in_ZR) {
            param_2 = &ppuStack_f0;
            FUN_10730fa34(&ppuStack_208);
          }
        }
        __ZNSt13exception_ptrD1Ev(&ppuStack_f0);
      }
      else {
        puStack_198 = &UNK_10f40a1b5;
        uStack_190 = 0xe;
        pppuStack_1a0 = param_2;
        FUN_107319184(auStack_188,appuStack_230);
        pppuStack_160 = param_2;
        FUN_1073191d4(auStack_158,&ppuStack_1c0);
        FUN_107319218(auStack_138,&ppuStack_1e0);
        FUN_10730fb90(auStack_118,&ppuStack_208);
        func_0x00010731d28c(&ppuStack_f0);
        puVar3 = &uStack_d8;
        FUN_1073190c0(puVar3,&pppuStack_1a0);
        puStack_10 = (undefined8 *)0x0;
        func_0x00010731ccd4();
        *puVar3 = &PTR_FUN_1109a0308;
        puVar3[2] = uStack_e8;
        puVar3[1] = ppuStack_f0;
        ppuStack_f0 = (undefined **)0x0;
        uStack_e8 = 0;
        func_0x00010731ccb8(uStack_e0);
        func_0x00010731d07c();
        FUN_107319184();
        func_0x00010731d06c(uStack_98);
        FUN_1073191d4();
        param_2 = appuStack_70;
        FUN_107319218(puVar3 + 0x11);
        func_0x00010731cc80();
        puStack_10 = puVar3;
        func_0x00010731d138();
        func_0x00010731d260();
        func_0x00010731cf6c();
        FUN_1073193e4(&ppuStack_f0);
        func_0x000107319408(&pppuStack_1a0);
      }
      FUN_107317ce0(appuStack_230);
      FUN_10730e9d0(&ppuStack_208);
      func_0x00010731cb0c();
      FUN_107319c90(&ppuStack_1e0);
      func_0x00010731cd38();
      FUN_10731962c(&ppuStack_1c0);
      func_0x0001072aefa0(&uStack_9a0);
    }
  }
LAB_1073150dc:
  FUN_10731560c();
LAB_1073150e4:
  func_0x00010054c318(uStack_8);
  if ((bool)in_ZR) {
    return ZEXT816(0);
  }
  ___stack_chk_fail();
  __ZNSt13exception_ptrD1Ev(&ppuStack_f0);
  FUN_107317ce0(appuStack_230);
  FUN_10730e9d0(&ppuStack_208);
  func_0x00010731cb0c();
  FUN_107319c90(&ppuStack_1e0);
  func_0x00010731cd38();
  FUN_10731962c(&ppuStack_1c0);
  func_0x0001072aefa0(&uStack_9a0);
  plVar5 = alStack_4b8;
  FUN_10731560c();
  func_0x00010731c938();
  ppuVar10 = *param_2;
  plVar5[1] = (long)param_2[1];
  *plVar5 = (long)ppuVar10;
  pppuVar6 = param_2 + 2;
  *param_2 = (undefined **)0x0;
  param_2[1] = (undefined **)0x0;
  FUN_1072d488c(plVar5 + 2,pppuVar6);
  func_0x00010731d1fc(plVar5 + 0x41);
  auVar11._8_8_ = pppuVar6;
  auVar11._0_8_ = plVar5;
  return auVar11;
}



/* Entry: 107315274; end: 1073152d3;  */

undefined8 * FUN_107315274(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1072d488c(param_1 + 2,param_2 + 2);
  func_0x00010731d1fc(param_1 + 0x41);
  return param_1;
}



/* Entry: 1073152d4; end: 1073152ff;  */

undefined8 FUN_1073152d4(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10731560c(param_1 + 0x98);
  func_0x00010724b340(param_1 + 0x18);
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 107315300; end: 107315603;  */

undefined8 * FUN_107315300(long *param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char cVar10;
  int iVar11;
  char cVar12;
  undefined8 extraout_x8;
  long lVar13;
  bool bVar14;
  int extraout_w11;
  long *plVar15;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined **ppuStack_330;
  undefined8 uStack_328;
  undefined ***pppuStack_318;
  undefined1 uStack_310;
  undefined **appuStack_308 [3];
  undefined ***pppuStack_2f0;
  undefined1 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [504];
  undefined1 auStack_d8 [128];
  undefined1 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  char cStack_38;
  char acStack_30 [24];
  undefined8 *puStack_18;
  undefined8 uStack_10;
  
  func_0x00010731d120();
  plVar6 = param_1;
  func_0x00010054bdbc();
  lVar13 = *plVar6;
  uStack_10 = extraout_x8;
  if (*(char *)(lVar13 + 0x53) == '\x01') {
    do {
      func_0x00010731d03c();
    } while (extraout_w11 != 0);
    lVar13 = *param_1;
  }
  plVar15 = *(long **)(lVar13 + 0x40);
  func_0x00010731874c(&uStack_2e0,*(undefined8 *)(lVar13 + 0x20),*(undefined8 *)(lVar13 + 0x28));
  FUN_1072d488c(auStack_2d0,plVar6 + 2);
  func_0x00010731d1fc(auStack_d8);
  uStack_58 = *param_2;
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  cStack_38 = param_2[0x20] == '\x01';
  if ((bool)cStack_38) {
    uStack_48 = *(undefined8 *)(param_2 + 0x10);
    uStack_50 = *(ulong *)(param_2 + 8);
    uStack_40 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  puStack_18 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)0x2b8;
  __Znwm();
  *puVar7 = &PTR_SUB_11099fbc8;
  puVar7[2] = uStack_2d8;
  puVar7[1] = uStack_2e0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  FUN_1072d488c(puVar7 + 3,auStack_2d0);
  func_0x0001075281c8(puVar7 + 0x42,auStack_d8);
  *(undefined1 *)(puVar7 + 0x52) = uStack_58;
  *(undefined1 *)(puVar7 + 0x53) = 0;
  *(undefined1 *)(puVar7 + 0x56) = 0;
  uVar5 = cStack_38 == '\x01';
  if ((bool)uVar5) {
    puVar7[0x54] = uStack_48;
    puVar7[0x53] = uStack_50;
    puVar7[0x55] = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    *(undefined1 *)(puVar7 + 0x56) = 1;
  }
  puStack_18 = puVar7;
  func_0x00010731d2ac();
  appuStack_308[0] = &PTR_FUN_11099fc48;
  ppuStack_330 = (undefined **)0x0;
  uStack_328 = 0;
  pppuStack_2f0 = appuStack_308;
  func_0x0001072aefa0(&ppuStack_330);
  uStack_2e8 = 1;
  func_0x00010731ce30();
  uStack_338 = 0;
  ppuStack_330 = &PTR_FUN_11099fcc8;
  uStack_340 = 0;
  pppuStack_318 = &ppuStack_330;
  func_0x0001072aefa0(&uStack_340);
  uStack_310 = 1;
  pcVar9 = acStack_30;
  cVar10 = (char)appuStack_308;
  iVar11 = (int)&ppuStack_330;
  (**(code **)(*plVar15 + 0x10))(plVar15);
  FUN_10730e9d0(&ppuStack_330);
  func_0x00010731cb0c();
  func_0x00010731cfb4();
  func_0x00010731cd38();
  func_0x00010731cfa4();
  puVar7 = &uStack_2e0;
  FUN_1073176e4(puVar7);
  func_0x00010054c318(uStack_10);
  if ((bool)uVar5) {
    return puVar7;
  }
  ___stack_chk_fail();
  FUN_10730e9d0(&ppuStack_330);
  func_0x00010731cb0c();
  func_0x00010731cfb4();
  func_0x00010731cd38();
  func_0x00010731cfa4();
  pcVar8 = (char *)&uStack_2e0;
  FUN_1073176e4();
  func_0x00010731c998();
  iVar1 = 2;
  if (iVar11 != 4) {
    iVar1 = iVar11;
  }
  iVar2 = 0;
  if (iVar11 != 3) {
    iVar2 = iVar1;
  }
  switch(iVar11) {
  case 1:
  case 2:
    if (iVar2 - 1U < 2) {
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  case 3:
    if (iVar2 - 1U < 2) {
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  case 4:
    if (iVar2 - 1U < 2) {
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  case 5:
    if (iVar2 - 1U < 2) {
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  default:
    if (iVar2 - 1U < 2) {
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      if (iVar2 != 5) {
        cVar3 = *pcVar9;
        do {
          cVar12 = *pcVar8;
          if (cVar12 != cVar3) {
            bVar14 = false;
            ClearExclusiveLocal();
            goto LAB_107318bd8;
          }
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
          if (bVar14) {
            *pcVar8 = cVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar14 = true;
        goto LAB_107318bd8;
      }
      cVar3 = *pcVar9;
      do {
        cVar12 = *pcVar8;
        if (cVar12 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
        if (bVar14) {
          *pcVar8 = cVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  bVar14 = true;
LAB_107318bd8:
  if (bVar14) {
    return (undefined8 *)0x1;
  }
  *pcVar9 = cVar12;
  return (undefined8 *)0x0;
LAB_107318bd0:
  bVar14 = false;
  ClearExclusiveLocal();
  goto LAB_107318bd8;
}



/* Entry: 107315604; end: 10731560b;  */

undefined8 FUN_107315604(char *param_1,char *param_2,char param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  
  iVar1 = 2;
  if (param_4 != 4) {
    iVar1 = param_4;
  }
  iVar2 = 0;
  if (param_4 != 3) {
    iVar2 = iVar1;
  }
  switch(param_4) {
  case 1:
  case 2:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  case 3:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  case 4:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  case 5:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else if (iVar2 == 5) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    break;
  default:
    if (iVar2 - 1U < 2) {
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    else {
      if (iVar2 != 5) {
        cVar3 = *param_2;
        do {
          cVar5 = *param_1;
          if (cVar5 != cVar3) {
            bVar6 = false;
            ClearExclusiveLocal();
            goto LAB_107318bd8;
          }
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar6) {
            *param_1 = param_3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        bVar6 = true;
        goto LAB_107318bd8;
      }
      cVar3 = *param_2;
      do {
        cVar5 = *param_1;
        if (cVar5 != cVar3) goto LAB_107318bd0;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar6) {
          *param_1 = param_3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  bVar6 = true;
LAB_107318bd8:
  if (!bVar6) {
    *param_2 = cVar5;
    return 0;
  }
  return 1;
LAB_107318bd0:
  bVar6 = false;
  ClearExclusiveLocal();
  goto LAB_107318bd8;
}


