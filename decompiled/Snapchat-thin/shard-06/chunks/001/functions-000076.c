/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104482dac; end: 104482dbf;  */

undefined1  [16] FUN_104482dac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x104482dbc;
  return auVar1;
}



/* Entry: 104482dc0; end: 104482dd3;  */

void FUN_104482dc0(void)

{
  FUN_104482aa0();
  return;
}



/* Entry: 104482dd4; end: 104482e23;  */

void FUN_104482dd4(void)

{
  FUN_104482b74();
  return;
}



/* Entry: 104482e24; end: 104482e27;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_104482e24(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 104482e28; end: 104482e5f;  */

uint FUN_104482e28(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000104489928();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 104482e60; end: 104482edf;  */

uint FUN_104482e60(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_28 = param_1[0x13];
  uStack_30 = param_1[0x12];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_f8 = unaff_x20[0xd];
  uStack_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  uStack_c8 = unaff_x20[0x13];
  uStack_d0 = unaff_x20[0x12];
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  uStack_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  FUN_104486dac(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 104482ee0; end: 104482f7f;  */

void FUN_104482ee0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam000000011307dbb8 != -1) {
    _swift_once(0x11307dbb8,FUN_104482a58);
  }
  uVar5 = uRam00000001138137c0;
  uVar4 = uRam00000001138137b8;
  uVar3 = uRam00000001138137b0;
  uVar2 = uRam00000001138137a8;
  uVar1 = uRam00000001138137a0;
  *param_1 = uRam0000000113813798;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104482f80; end: 104482fbb;  */

void FUN_104482f80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x11307dce0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x11307dce0,&UNK_10dd07668);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104482fbc; end: 1044830f7;  */

void FUN_104482fbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_38 = unaff_x20[0x13];
  uStack_40 = unaff_x20[0x12];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_118,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_118,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044830f8; end: 104483177;  */

uint FUN_1044830f8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_c8 = param_1[0x13];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_28 = param_2[0x13];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_104486dac(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 104483178; end: 1044831bf;  */

void FUN_104483178(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10458e1d8(&uStack_40,&UNK_10dd07710,0x10,2);
  uRam00000001138137d0 = uStack_38;
  uRam00000001138137c8 = uStack_40;
  uRam00000001138137e0 = uStack_28;
  uRam00000001138137d8 = uStack_30;
  uRam00000001138137f0 = uStack_18;
  uRam00000001138137e8 = uStack_20;
  return;
}



/* Entry: 1044831c0; end: 104483293;  */

/* WARNING: Removing unreachable block (ram,0x000104483290) */

void FUN_1044831c0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        (**(code **)(param_3 + 0x150))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_104489a5c();
        (*pcVar4)(unaff_x20 + 0x20,&UNK_1107786c0,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 104483294; end: 10448331f;  */

void FUN_104483294(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_104483320(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 104483320; end: 1044833ab;  */

void FUN_104483320(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x28);
  if (uStack_58 >> 0x3c < 0xf) {
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_104489a5c();
    (*pcVar1)(&uStack_60,2,&UNK_1107786c0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1044833ac; end: 1044833f3;  */

void FUN_1044833ac(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0xf000000000000000;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 1044833f4; end: 104483423;  */

undefined1  [16] FUN_1044833f4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 104483424; end: 104483457;  */

void FUN_104483424(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 104483458; end: 10448346b;  */

undefined1  [16] FUN_104483458(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x104483468;
  return auVar1;
}



/* Entry: 10448346c; end: 10448347f;  */

void FUN_10448346c(void)

{
  FUN_1044831c0();
  return;
}



/* Entry: 104483480; end: 1044834b7;  */

void FUN_104483480(void)

{
  FUN_104483294();
  return;
}



/* Entry: 1044834b8; end: 1044834bb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1044834b8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1044834bc; end: 1044834f3;  */

uint FUN_1044834bc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001044898e8();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1044834f4; end: 10448353b;  */

uint FUN_1044834f4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_104486a90(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10448353c; end: 1044835db;  */

void FUN_10448353c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam000000011307dbc8 != -1) {
    _swift_once(0x11307dbc8,FUN_104483178);
  }
  uVar5 = uRam00000001138137f0;
  uVar4 = uRam00000001138137e8;
  uVar3 = uRam00000001138137e0;
  uVar2 = uRam00000001138137d8;
  uVar1 = uRam00000001138137d0;
  *param_1 = uRam00000001138137c8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1044835dc; end: 104483617;  */

void FUN_1044835dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x11307dcd0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x11307dcd0,&UNK_10dd07660);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104483618; end: 10448371b;  */

void FUN_104483618(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  __ss6HasherV5_seedABSi_tcfC(auStack_b8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_b8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10448371c; end: 1044837ab;  */

uint FUN_10448371c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_104486a90(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1044837ac; end: 104483873;  */

/* WARNING: Removing unreachable block (ram,0x000104483844) */

void FUN_1044837ac(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 3) {
      FUN_104483ac0(param_1);
    }
    else if (lVar1 == 2) {
      FUN_104483874();
    }
    else if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 104483874; end: 104483abf;  */

/* WARNING: Removing unreachable block (ram,0x000104483a38) */

void FUN_104483874(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x21;
  code *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auStack_170 [64];
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uVar12 = param_1[5];
  puVar7 = param_1;
  if ((uVar12 >> 0x3d & 1) == 0) {
    uVar8 = param_1[8];
    uVar3 = param_1[9];
    uVar1 = param_1[6];
    uVar4 = param_1[7];
    lVar2 = param_1[3];
    uVar5 = param_1[4];
    uVar11 = param_1[2];
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_f0 = uVar11;
    lStack_e8 = lVar2;
    uStack_e0 = uVar5;
    uStack_d8 = uVar12;
    uStack_d0 = uVar1;
    uStack_c8 = uVar4;
    uStack_c0 = uVar8;
    uStack_b8 = uVar3;
    func_0x00010448242c(&uStack_f0,auStack_170);
    puVar7 = &uStack_130;
    FUN_104489a1c(puVar7,0x11307dd08,&UNK_10dd076e0);
    uStack_b0 = uVar11;
    lStack_a8 = lVar2;
    uStack_a0 = uVar5;
    uStack_98 = uVar12;
    uStack_90 = uVar1;
    uStack_88 = uVar4;
    uStack_80 = uVar8;
    uStack_78 = uVar3;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  FUN_104487a34();
  (*pcVar10)(&uStack_b0,&UNK_110778218,puVar7,param_3,param_4);
  uVar11 = uStack_78;
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  uVar3 = uStack_90;
  uVar6 = uStack_98;
  uVar1 = uStack_a0;
  lVar2 = lStack_a8;
  uVar8 = uStack_b0;
  if (unaff_x21 == 0) {
    lStack_e8 = lStack_a8;
    uStack_f0 = uStack_b0;
    uStack_d8 = uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    if (lStack_a8 != 0) {
      if ((uVar12 & 0x3000000000000000) == 0x3000000000000000) {
        lStack_128 = lStack_a8;
        uStack_130 = uStack_b0;
        uStack_118 = uStack_98;
        uStack_120 = uStack_a0;
        uStack_108 = uStack_88;
        uStack_110 = uStack_90;
        uStack_f8 = uStack_78;
        uStack_100 = uStack_80;
        func_0x000104486a5c(&uStack_130,auStack_170);
      }
      else {
        pcVar10 = *(code **)(param_4 + 8);
        lStack_128 = lStack_a8;
        uStack_130 = uStack_b0;
        uStack_118 = uStack_98;
        uStack_120 = uStack_a0;
        uStack_108 = uStack_88;
        uStack_110 = uStack_90;
        uStack_f8 = uStack_78;
        uStack_100 = uStack_80;
        func_0x000104486a5c(&uStack_130,auStack_170);
        (*pcVar10)(param_3,param_4);
      }
      FUN_104489a1c(&uStack_b0,0x11307dd08,&UNK_10dd076e0);
      lStack_128 = param_1[3];
      uStack_130 = param_1[2];
      uStack_118 = param_1[5];
      uStack_120 = param_1[4];
      uStack_108 = param_1[7];
      uStack_110 = param_1[6];
      uStack_f8 = param_1[9];
      uStack_100 = param_1[8];
      param_1[2] = uVar8;
      param_1[3] = lVar2;
      param_1[4] = uVar1;
      param_1[5] = uVar6 & 0xcfffffffffffffff;
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      param_1[9] = uVar11;
      param_1[8] = uVar5;
      uVar8 = 0x11307daf0;
      puVar9 = &UNK_10dd06e20;
      puVar7 = &uStack_130;
      goto LAB_104483978;
    }
  }
  uVar8 = 0x11307dd08;
  puVar9 = &UNK_10dd076e0;
  puVar7 = &uStack_b0;
LAB_104483978:
  FUN_104489a1c(puVar7,uVar8,puVar9);
  return;
}



/* Entry: 104483ac0; end: 104483c7b;  */

void FUN_104483ac0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  ulong uVar3;
  undefined1 auStack_160 [64];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 uStack_58;
  
  uStack_60 = 0;
  uStack_58 = 0x100;
  pcVar2 = *(code **)(param_4 + 0x188);
  func_0x0001044899dc();
  (*pcVar2)(&uStack_60,&UNK_1107783d0,param_1,param_3,param_4);
  uVar1 = uStack_60;
  if ((unaff_x21 == 0) && (uStack_58._1_1_ != '\x01')) {
    uVar3 = (ulong)(byte)uStack_58;
    uStack_98 = *(undefined8 *)(param_2 + 0x18);
    uStack_a0 = *(undefined8 *)(param_2 + 0x10);
    uStack_108 = *(ulong *)(param_2 + 0x28);
    uStack_90 = *(undefined8 *)(param_2 + 0x20);
    uStack_78 = *(undefined8 *)(param_2 + 0x38);
    uStack_80 = *(undefined8 *)(param_2 + 0x30);
    uStack_68 = *(undefined8 *)(param_2 + 0x48);
    uStack_70 = *(undefined8 *)(param_2 + 0x40);
    uStack_88 = uStack_108;
    if (((uStack_108 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      uStack_118 = *(undefined8 *)(param_2 + 0x18);
      uStack_120 = *(undefined8 *)(param_2 + 0x10);
      uStack_110 = *(undefined8 *)(param_2 + 0x20);
      uStack_f8 = *(undefined8 *)(param_2 + 0x38);
      uStack_100 = *(undefined8 *)(param_2 + 0x30);
      uStack_e8 = *(undefined8 *)(param_2 + 0x48);
      uStack_f0 = *(undefined8 *)(param_2 + 0x40);
      FUN_104486a14(&uStack_a0,auStack_160,0x11307daf0,&UNK_10dd06e20);
      FUN_104489a1c(&uStack_120,0x11307daf0,&UNK_10dd06e20);
    }
    else {
      uStack_118 = *(undefined8 *)(param_2 + 0x18);
      uStack_120 = *(undefined8 *)(param_2 + 0x10);
      uStack_110 = *(undefined8 *)(param_2 + 0x20);
      uStack_f8 = *(undefined8 *)(param_2 + 0x38);
      uStack_100 = *(undefined8 *)(param_2 + 0x30);
      uStack_e8 = *(undefined8 *)(param_2 + 0x48);
      uStack_f0 = *(undefined8 *)(param_2 + 0x40);
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0x3000000000000000;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      FUN_104486a14(&uStack_a0,auStack_160,0x11307daf0,&UNK_10dd06e20);
      FUN_104489a1c(&uStack_120,0x11307dcf0,&UNK_10dd07670);
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    uStack_118 = *(undefined8 *)(param_2 + 0x18);
    uStack_120 = *(undefined8 *)(param_2 + 0x10);
    uStack_108 = *(undefined8 *)(param_2 + 0x28);
    uStack_110 = *(undefined8 *)(param_2 + 0x20);
    uStack_f8 = *(undefined8 *)(param_2 + 0x38);
    uStack_100 = *(undefined8 *)(param_2 + 0x30);
    uStack_e8 = *(undefined8 *)(param_2 + 0x48);
    uStack_f0 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x10) = uVar1;
    *(ulong *)(param_2 + 0x18) = uVar3;
    *(undefined8 *)(param_2 + 0x28) = 0x2000000000000000;
    FUN_104489a1c(&uStack_120,0x11307daf0,&UNK_10dd06e20);
  }
  return;
}



/* Entry: 104483c7c; end: 104483d2b;  */

void FUN_104483c7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    if (((unaff_x20[5] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      if ((unaff_x20[5] >> 0x3d & 1) == 0) {
        FUN_104483d2c();
      }
      else {
        FUN_104483dbc();
      }
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[10],unaff_x20[0xb],param_2,param_3);
  }
  return;
}



/* Entry: 104483d2c; end: 104483dbb;  */

void FUN_104483d2c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(ulong *)(param_1 + 0x28);
  if ((uStack_68 >> 0x3d & 1) == 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_104487a34();
    (*pcVar1)(&uStack_80,2,&UNK_110778218,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104483dbc);
  (*pcVar1)();
}



/* Entry: 104483dbc; end: 104483e53;  */

void FUN_104483dbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  if (((*(ulong *)(param_1 + 0x28) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (*(ulong *)(param_1 + 0x28) & 0x2000000000000000) != 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0x10);
    uStack_48 = (undefined1)*(undefined8 *)(param_1 + 0x18);
    pcVar1 = *(code **)(param_4 + 0x80);
    func_0x0001044899dc();
    (*pcVar1)(&uStack_50,3,&UNK_1107783d0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104483e54);
  (*pcVar1)();
}



/* Entry: 104483e54; end: 104483e9f;  */

void FUN_104483e54(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3000000000000000;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xc000000000000000;
  return;
}



/* Entry: 104483ea0; end: 104483ecf;  */

undefined1  [16] FUN_104483ea0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Entry: 104483ed0; end: 104483f03;  */

void FUN_104483ed0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 104483f04; end: 104483f17;  */

undefined1  [16] FUN_104483f04(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0x104483f14;
  return auVar1;
}



/* Entry: 104483f18; end: 104483f2b;  */

void FUN_104483f18(void)

{
  FUN_1044837ac();
  return;
}



/* Entry: 104483f2c; end: 104483f6b;  */

void FUN_104483f2c(void)

{
  FUN_104483c7c();
  return;
}



/* Entry: 104483f6c; end: 104483f6f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_104483f6c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 104483f70; end: 104483fa7;  */

uint FUN_104483f70(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x0001044898a8();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 104483fa8; end: 104483fff;  */

uint FUN_104483fa8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_104487144(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 104484000; end: 10448409f;  */

void FUN_104484000(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam000000011307dbd8 != -1) {
    _swift_once(0x11307dbd8,0x104483764);
  }
  uVar5 = uRam0000000113813820;
  uVar4 = uRam0000000113813818;
  uVar3 = uRam0000000113813810;
  uVar2 = uRam0000000113813808;
  uVar1 = uRam0000000113813800;
  *param_1 = uRam00000001138137f8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1044840a0; end: 1044840db;  */

void FUN_1044840a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x11307dcc0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x11307dcc0,&UNK_10dd07658);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1044840dc; end: 1044841f7;  */

void FUN_1044840dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_d8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_d8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1044841f8; end: 104484297;  */

uint FUN_1044841f8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_104487144(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 104484298; end: 104484337;  */

void FUN_104484298(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam000000011307dbe8 != -1) {
    _swift_once(0x11307dbe8,0x104484250);
  }
  uVar5 = uRam0000000113813850;
  uVar4 = uRam0000000113813848;
  uVar3 = uRam0000000113813840;
  uVar2 = uRam0000000113813838;
  uVar1 = uRam0000000113813830;
  *param_1 = uRam0000000113813828;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104484338; end: 10448437f;  */

void FUN_104484338(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10458e1d8(&uStack_40,&UNK_10dd07690,0x1a,2);
  uRam0000000113813860 = uStack_38;
  uRam0000000113813858 = uStack_40;
  uRam0000000113813870 = uStack_28;
  uRam0000000113813868 = uStack_30;
  uRam0000000113813880 = uStack_18;
  uRam0000000113813878 = uStack_20;
  return;
}



/* Entry: 104484380; end: 104484453;  */

/* WARNING: Removing unreachable block (ram,0x000104484450) */

void FUN_104484380(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        (**(code **)(param_3 + 0x160))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_10448999c();
        (*pcVar4)(unaff_x20 + 0x18,&UNK_1107789c8,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 104484454; end: 1044844d3;  */

void FUN_104484454(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (((*(long *)(*unaff_x20 + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x100))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_1044844d4(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1044844d4; end: 1044845a7;  */

void FUN_1044844d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = *(undefined8 *)(param_1 + 0x60);
  uStack_80 = *(undefined8 *)(param_1 + 0x58);
  uStack_68 = *(undefined8 *)(param_1 + 0x70);
  uStack_70 = *(undefined8 *)(param_1 + 0x68);
  uStack_58 = *(undefined8 *)(param_1 + 0x80);
  uStack_60 = *(undefined8 *)(param_1 + 0x78);
  uStack_48 = *(undefined8 *)(param_1 + 0x90);
  uStack_50 = *(undefined8 *)(param_1 + 0x88);
  uStack_b8 = *(undefined8 *)(param_1 + 0x20);
  uStack_c0 = *(undefined8 *)(param_1 + 0x18);
  uStack_a8 = *(undefined8 *)(param_1 + 0x30);
  uStack_b0 = *(undefined8 *)(param_1 + 0x28);
  uStack_98 = *(undefined8 *)(param_1 + 0x40);
  uStack_a0 = *(undefined8 *)(param_1 + 0x38);
  uStack_88 = *(undefined8 *)(param_1 + 0x50);
  uStack_90 = *(undefined8 *)(param_1 + 0x48);
  puVar1 = &uStack_c0;
  func_0x000104482834();
  if ((int)puVar1 != 1) {
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    uStack_c8 = uStack_48;
    uStack_d0 = uStack_50;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_10448999c();
    (*pcVar2)(&uStack_140,2,&UNK_1107789c8,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1044845a8; end: 10448461b;  */

void FUN_1044845a8(undefined8 *param_1)

{
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1044824a4(&uStack_a0);
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[0xc] = uStack_58;
  param_1[0xb] = uStack_60;
  param_1[0xe] = uStack_48;
  param_1[0xd] = uStack_50;
  param_1[0x10] = uStack_38;
  param_1[0xf] = uStack_40;
  param_1[0x12] = uStack_28;
  param_1[0x11] = uStack_30;
  param_1[4] = uStack_98;
  param_1[3] = uStack_a0;
  param_1[6] = uStack_88;
  param_1[5] = uStack_90;
  param_1[8] = uStack_78;
  param_1[7] = uStack_80;
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[10] = uStack_68;
  param_1[9] = uStack_70;
  return;
}



/* Entry: 10448461c; end: 10448463f;  */

undefined1  [16] FUN_10448461c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f201f30;
  auVar1._0_8_ = 0xd000000000000043;
  return auVar1;
}



/* Entry: 104484640; end: 10448466f;  */

undefined1  [16] FUN_104484640(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 104484670; end: 1044846a3;  */

void FUN_104484670(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1044846a4; end: 1044846b7;  */

undefined1  [16] FUN_1044846a4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1044846b4;
  return auVar1;
}



/* Entry: 1044846b8; end: 1044846cb;  */

void FUN_1044846b8(void)

{
  FUN_104484380();
  return;
}



/* Entry: 1044846cc; end: 104484723;  */

void FUN_1044846cc(void)

{
  FUN_104484454();
  return;
}



/* Entry: 104484724; end: 104484727;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_104484724(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 104484728; end: 10448475f;  */

uint FUN_104484728(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000104489868();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 104484760; end: 1044847ef;  */

uint FUN_104484760(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_48 = param_1[0xf];
  uStack_50 = param_1[0xe];
  uStack_38 = param_1[0x11];
  uStack_40 = param_1[0x10];
  uStack_30 = param_1[0x12];
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uStack_f8 = unaff_x20[0xd];
  uStack_100 = unaff_x20[0xc];
  uStack_e8 = unaff_x20[0xf];
  uStack_f0 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[0x11];
  uStack_e0 = unaff_x20[0x10];
  uStack_d0 = unaff_x20[0x12];
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_118 = unaff_x20[9];
  uStack_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  FUN_1044873c0(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 1044847f0; end: 10448488f;  */

void FUN_1044847f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam000000011307dbf0 != -1) {
    _swift_once(0x11307dbf0,FUN_104484338);
  }
  uVar5 = uRam0000000113813880;
  uVar4 = uRam0000000113813878;
  uVar3 = uRam0000000113813870;
  uVar2 = uRam0000000113813868;
  uVar1 = uRam0000000113813860;
  *param_1 = uRam0000000113813858;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104484890; end: 1044848cb;  */

void FUN_104484890(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x11307dcb0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x11307dcb0,&UNK_10dd07650);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1044848cc; end: 104484a17;  */

void FUN_1044848cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_118 [72];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[0xd];
  uStack_70 = unaff_x20[0xc];
  uStack_58 = unaff_x20[0xf];
  uStack_60 = unaff_x20[0xe];
  uStack_48 = unaff_x20[0x11];
  uStack_50 = unaff_x20[0x10];
  uStack_40 = unaff_x20[0x12];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_118,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_118,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104484a18; end: 104484aa7;  */

uint FUN_104484a18(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  uStack_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  uStack_e0 = param_1[0x10];
  uStack_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  uStack_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  uStack_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  uStack_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  uStack_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  uStack_40 = param_2[0x10];
  uStack_30 = param_2[0x12];
  uStack_98 = param_2[5];
  uStack_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  uStack_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_1044873c0(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 104484aa8; end: 104484aef;  */

void FUN_104484aa8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10458e1d8(&uStack_40,&UNK_10dd07678,0xc,2);
  uRam0000000113813890 = uStack_38;
  uRam0000000113813888 = uStack_40;
  uRam00000001138138a0 = uStack_28;
  uRam0000000113813898 = uStack_30;
  uRam00000001138138b0 = uStack_18;
  uRam00000001138138a8 = uStack_20;
  return;
}



/* Entry: 104484af0; end: 104484ba3;  */

/* WARNING: Removing unreachable block (ram,0x000104484ba0) */

void FUN_104484af0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_1044823b8();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 104484ba4; end: 104484c3f;  */

void FUN_104484ba4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    FUN_1044823b8();
    (*pcVar2)(param_2,1,&UNK_1107782a0,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 104484c40; end: 104484c7f;  */

void FUN_104484c40(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 104484c80; end: 104484caf;  */

undefined1  [16] FUN_104484c80(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 104484cb0; end: 104484ce3;  */

void FUN_104484cb0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 104484ce4; end: 104484cf7;  */

undefined1  [16] FUN_104484ce4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x104484cf4;
  return auVar1;
}



/* Entry: 104484cf8; end: 104484d2f;  */

void FUN_104484cf8(void)

{
  FUN_104484af0();
  return;
}



/* Entry: 104484d30; end: 104484d33;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_104484d30(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 104484d34; end: 104484d6b;  */

uint FUN_104484d34(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_104489828();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 104484d6c; end: 104484e73;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_104484d6c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  byte *pbVar23;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  
  lVar22 = param_1[1];
  uVar25 = param_1[2];
  uVar18 = *unaff_x20;
  pbVar9 = (byte *)unaff_x20[1];
  pbVar23 = (byte *)unaff_x20[2];
  FUN_104485018(uVar18,*param_1);
  if ((uVar18 & 1) == 0) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar16 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar25 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar25 >> 0x3e < 3)) || ((uVar18 = 0, lVar22 != 0 || (uVar25 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar16 == 0) {
        uVar18 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar17 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar17,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar18 = (ulong)(iVar17 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar19 == 0) {
        uVar20 = uVar25 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar17 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar17,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar17 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar16 == 2) {
        uVar18 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar18 = 0;
      if (uVar19 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar19 == 2) {
        uVar20 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar18 != uVar20) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar18 < 1) goto code_r0x000100e26128;
        if (uVar16 < 2) {
          if (uVar16 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar16 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar23;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,
                            uVar25);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar25;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar18 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar22 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar15 = *(byte **)(pbVar12 + 0x10);
        lVar22 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 == pbVar14) && (pbVar23 == pbVar15)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        lVar22 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar22 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar22);
          func_0x000107c61174();
          pbVar9 = pbVar21;
          func_0x000107c60118();
          func_0x000107c61170(pbVar21);
          func_0x000107c61170(lVar22);
          pbVar21 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar13,pbVar14,pbVar15,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) &&
           (pbVar11 = pbVar23, pbVar13 = pbVar21, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar15 = *(byte **)(pbVar12 + 0x18),
           pbVar23 == *(byte **)(pbVar12 + 0x10) && pbVar21 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar15 = *(byte **)(pbVar12 + 0x10);
      lVar22 = *(long *)(pbVar12 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar15 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar15 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 != pbVar14) || (pbVar23 != pbVar15)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar12 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar12 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar26 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar12 + 0x20);
        lVar22 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar22;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar24;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar42[1] = bVar27;
        auVar42[0] = bVar26;
        auVar42[2] = bVar28;
        auVar42[3] = bVar29;
        auVar42[4] = bVar30;
        auVar42[5] = bVar31;
        auVar42[6] = bVar32;
        auVar42[7] = bVar33;
        auVar42[8] = bVar34;
        auVar42[9] = bVar35;
        auVar42[10] = bVar36;
        auVar42[0xb] = bVar37;
        auVar42[0xc] = bVar38;
        auVar42[0xd] = bVar39;
        auVar42[0xe] = bVar40;
        auVar42[0xf] = bVar41;
        auVar3[1] = bVar27;
        auVar3[0] = bVar26;
        auVar3[2] = bVar28;
        auVar3[3] = bVar29;
        auVar3[4] = bVar30;
        auVar3[5] = bVar31;
        auVar3[6] = bVar32;
        auVar3[7] = bVar33;
        auVar3[8] = bVar34;
        auVar3[9] = bVar35;
        auVar3[10] = bVar36;
        auVar3[0xb] = bVar37;
        auVar3[0xc] = bVar38;
        auVar3[0xd] = bVar39;
        auVar3[0xe] = bVar40;
        auVar3[0xf] = bVar41;
        auVar42 = NEON_ext(auVar42,auVar3,8,1);
        if (CONCAT17(bVar33 | auVar42[7],
                     CONCAT16(bVar32 | auVar42[6],
                              CONCAT15(bVar31 | auVar42[5],
                                       CONCAT14(bVar30 | auVar42[4],
                                                CONCAT13(bVar29 | auVar42[3],
                                                         CONCAT12(bVar28 | auVar42[2],
                                                                  CONCAT11(bVar27 | auVar42[1],
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar12 + 0x20);
      lVar22 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar22;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar24;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar27;
      auVar1[0] = bVar26;
      auVar1[2] = bVar28;
      auVar1[3] = bVar29;
      auVar1[4] = bVar30;
      auVar1[5] = bVar31;
      auVar1[6] = bVar32;
      auVar1[7] = bVar33;
      auVar1[8] = bVar34;
      auVar1[9] = bVar35;
      auVar1[10] = bVar36;
      auVar1[0xb] = bVar37;
      auVar1[0xc] = bVar38;
      auVar1[0xd] = bVar39;
      auVar1[0xe] = bVar40;
      auVar1[0xf] = bVar41;
      auVar2[1] = bVar27;
      auVar2[0] = bVar26;
      auVar2[2] = bVar28;
      auVar2[3] = bVar29;
      auVar2[4] = bVar30;
      auVar2[5] = bVar31;
      auVar2[6] = bVar32;
      auVar2[7] = bVar33;
      auVar2[8] = bVar34;
      auVar2[9] = bVar35;
      auVar2[10] = bVar36;
      auVar2[0xb] = bVar37;
      auVar2[0xc] = bVar38;
      auVar2[0xd] = bVar39;
      auVar2[0xe] = bVar40;
      auVar2[0xf] = bVar41;
      auVar42 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar33 | auVar42[7],
                        CONCAT16(bVar32 | auVar42[6],
                                 CONCAT15(bVar31 | auVar42[5],
                                          CONCAT14(bVar30 | auVar42[4],
                                                   CONCAT13(bVar29 | auVar42[3],
                                                            CONCAT12(bVar28 | auVar42[2],
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar12 + 8);
    uVar25 = *(ulong *)(pbVar12 + 0x10);
    lVar24 = *(long *)pbVar12;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 104484e74; end: 104484eaf;  */

void FUN_104484e74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x11307dca0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x11307dca0,&UNK_10dd07648);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104484eb0; end: 104485017;  */

void FUN_104484eb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = unaff_x20[2];
  uStack_40 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_90,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_90,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104485018; end: 104486a13;  */

undefined8 * FUN_104485018(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  byte *pbVar32;
  byte *pbVar33;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b7;
  undefined1 uStack_2b6;
  undefined1 uStack_2b5;
  undefined1 uStack_2b4;
  undefined1 uStack_2b3;
  undefined2 uStack_2b2;
  long lStack_2b0;
  byte *pbStack_2a8;
  undefined8 *puStack_2a0;
  ulong uStack_298;
  long lStack_290;
  byte *pbStack_288;
  ulong uStack_280;
  ulong uStack_278;
  long lStack_270;
  byte *pbStack_268;
  undefined8 *puStack_260;
  ulong uStack_258;
  long lStack_250;
  byte *pbStack_248;
  byte abStack_240 [14];
  undefined2 uStack_232;
  long lStack_230;
  byte *pbStack_228;
  undefined8 *puStack_220;
  ulong uStack_218;
  long lStack_210;
  byte *pbStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  long lStack_1f0;
  byte *pbStack_1e8;
  undefined8 *puStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  byte *pbStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined1 uStack_1b6;
  undefined1 uStack_1b5;
  undefined1 uStack_1b4;
  undefined1 uStack_1b3;
  undefined2 uStack_1b2;
  long lStack_1b0;
  byte *pbStack_1a8;
  undefined8 *puStack_1a0;
  ulong uStack_198;
  long lStack_190;
  byte *pbStack_188;
  ulong uStack_180;
  ulong uStack_178;
  long lStack_170;
  byte *pbStack_168;
  undefined8 *puStack_160;
  ulong uStack_158;
  long lStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  ulong uStack_130;
  ulong uStack_128;
  long lStack_120;
  byte *pbStack_118;
  undefined8 *puStack_110;
  ulong uStack_108;
  long lStack_100;
  byte *pbStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  byte *pbStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar20 = *(long *)(param_1 + 0x10);
  if (lVar20 == *(long *)(param_2 + 0x10)) {
    if ((lVar20 != 0) && (param_1 != param_2)) {
      param_1 = param_1 + 0x20;
      pbVar32 = param_2 + 0x20;
      do {
        lVar20 = lVar20 + -1;
        pbStack_118 = *(byte **)(param_1 + 0x28);
        lStack_120 = *(long *)(param_1 + 0x20);
        uStack_108 = *(ulong *)(param_1 + 0x38);
        puStack_110 = *(undefined8 **)(param_1 + 0x30);
        pbStack_f8 = *(byte **)(param_1 + 0x48);
        lStack_100 = *(long *)(param_1 + 0x40);
        uStack_e8 = *(ulong *)(param_1 + 0x58);
        lStack_f0 = *(long *)(param_1 + 0x50);
        param_2 = *(byte **)(param_1 + 8);
        pbVar33 = *(byte **)param_1;
        uStack_128 = *(ulong *)(param_1 + 0x18);
        uStack_130 = *(ulong *)(param_1 + 0x10);
        pbStack_b8 = *(byte **)(pbVar32 + 0x28);
        lStack_c0 = *(long *)(pbVar32 + 0x20);
        uStack_a8 = *(ulong *)(pbVar32 + 0x38);
        puStack_b0 = *(undefined8 **)(pbVar32 + 0x30);
        pbStack_98 = *(byte **)(pbVar32 + 0x48);
        lStack_a0 = *(long *)(pbVar32 + 0x40);
        pbStack_88 = *(byte **)(pbVar32 + 0x58);
        pbStack_90 = *(byte **)(pbVar32 + 0x50);
        param_4 = *(byte **)(pbVar32 + 8);
        param_3 = *(byte **)pbVar32;
        uStack_c8 = *(ulong *)(pbVar32 + 0x18);
        uStack_d0 = *(ulong *)(pbVar32 + 0x10);
        pbStack_140 = pbVar33;
        pbStack_138 = param_2;
        pbStack_e0 = param_3;
        pbStack_d8 = param_4;
        if (((pbVar33 != param_3) || (param_2 != param_4)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), ((ulong)pbVar33 & 1) == 0)) goto LAB_10448644c;
        pbVar17 = pbStack_98;
        lVar16 = lStack_a0;
        uVar28 = uStack_a8;
        puVar9 = puStack_b0;
        pbVar18 = pbStack_b8;
        lVar3 = lStack_c0;
        pbVar33 = pbStack_f8;
        lVar29 = lStack_100;
        uVar27 = uStack_108;
        puVar11 = puStack_110;
        pbVar12 = pbStack_118;
        lVar31 = lStack_120;
        uStack_1b8 = (undefined1)uStack_128;
        uStack_1b7 = (undefined1)(uStack_128 >> 8);
        uStack_1b6 = (undefined1)(uStack_128 >> 0x10);
        uStack_1b5 = (undefined1)(uStack_128 >> 0x18);
        uStack_1b4 = (undefined1)(uStack_128 >> 0x20);
        uStack_1b3 = (undefined1)(uStack_128 >> 0x28);
        uStack_1b2 = (undefined2)(uStack_128 >> 0x30);
        uStack_1c0._0_1_ = (byte)uStack_130;
        uStack_1c0._1_1_ = (undefined1)(uStack_130 >> 8);
        uStack_1c0._2_1_ = (undefined1)(uStack_130 >> 0x10);
        uStack_1c0._3_1_ = (undefined1)(uStack_130 >> 0x18);
        uStack_1c0._4_1_ = (undefined1)(uStack_130 >> 0x20);
        uStack_1c0._5_1_ = (undefined1)(uStack_130 >> 0x28);
        uStack_1c0._6_1_ = (undefined1)(uStack_130 >> 0x30);
        uStack_1c0._7_1_ = (undefined1)(uStack_130 >> 0x38);
        pbStack_1a8 = pbStack_118;
        lStack_1b0 = lStack_120;
        uStack_198 = uStack_108;
        puStack_1a0 = puStack_110;
        pbStack_188 = pbStack_f8;
        lStack_190 = lStack_100;
        uStack_178 = uStack_c8;
        uStack_180 = uStack_d0;
        pbStack_168 = pbStack_b8;
        lStack_170 = lStack_c0;
        uStack_158 = uStack_a8;
        puStack_160 = puStack_b0;
        pbStack_148 = pbStack_98;
        lStack_150 = lStack_a0;
        if ((((ulong)pbStack_118 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
          if ((((ulong)pbStack_b8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0)
          goto LAB_104486490;
          uStack_278 = uStack_c8;
          uStack_280 = uStack_d0;
          pbStack_268 = pbStack_b8;
          lStack_270 = lStack_c0;
          uStack_258 = uStack_a8;
          puStack_260 = puStack_b0;
          pbStack_248 = pbStack_98;
          lStack_250 = lStack_a0;
          if (((ulong)pbStack_118 >> 0x3d & 1) != 0) {
            if (((ulong)pbStack_b8 >> 0x3d & 1) == 0) {
              FUN_104489968(&pbStack_140,abStack_240);
              FUN_104489968(&pbStack_e0,abStack_240);
              pbVar33 = &UNK_10dd06e20;
              FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
              FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
              FUN_104489a1c(&uStack_280,0x11307daf0,&UNK_10dd06e20);
              goto LAB_104486974;
            }
            if ((uStack_c8 & 0xff) != 1) {
              if (uStack_130 == uStack_d0) goto LAB_1044852f4;
              goto LAB_1044865cc;
            }
            if ((long)uStack_d0 < 2) {
              if (uStack_d0 == 0) {
                if (uStack_130 == 0) {
LAB_1044852f4:
                  pbStack_2a8 = pbStack_118;
                  lStack_2b0 = lStack_120;
                  uStack_298 = uStack_108;
                  puStack_2a0 = puStack_110;
                  pbStack_288 = pbStack_f8;
                  lStack_290 = lStack_100;
                  uStack_2c0._0_1_ = (byte)uStack_1c0;
                  uStack_2c0._1_1_ = uStack_1c0._1_1_;
                  uStack_2c0._2_1_ = uStack_1c0._2_1_;
                  uStack_2c0._3_1_ = uStack_1c0._3_1_;
                  uStack_2c0._4_1_ = uStack_1c0._4_1_;
                  uStack_2c0._5_1_ = uStack_1c0._5_1_;
                  uStack_2c0._6_1_ = uStack_1c0._6_1_;
                  uStack_2c0._7_1_ = uStack_1c0._7_1_;
                  uStack_2b8 = uStack_1b8;
                  uStack_2b7 = uStack_1b7;
                  uStack_2b6 = uStack_1b6;
                  uStack_2b5 = uStack_1b5;
                  uStack_2b4 = uStack_1b4;
                  uStack_2b3 = uStack_1b3;
                  uStack_2b2 = uStack_1b2;
                  FUN_104489968(&pbStack_140,abStack_240);
                  FUN_104489968(&pbStack_e0,abStack_240);
                  pbVar33 = &UNK_10dd06e20;
                  FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
                  FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
                  puVar10 = &uStack_2c0;
                  goto LAB_104485ec8;
                }
              }
              else if (uStack_130 == 1) goto LAB_1044852f4;
            }
            else if (uStack_d0 == 2) {
              if (uStack_130 == 2) goto LAB_1044852f4;
            }
            else if (uStack_130 == 3) goto LAB_1044852f4;
LAB_1044865cc:
            pbStack_228 = pbStack_118;
            lStack_230 = lStack_120;
            uStack_218 = uStack_108;
            puStack_220 = puStack_110;
            pbStack_208 = pbStack_f8;
            lStack_210 = lStack_100;
            param_2 = (byte *)0x11307daf0;
            pbVar12 = &UNK_10dd06e20;
            abStack_240[0] = (byte)uStack_1c0;
            abStack_240[1] = uStack_1c0._1_1_;
            abStack_240[2] = uStack_1c0._2_1_;
            abStack_240[3] = uStack_1c0._3_1_;
            abStack_240[4] = uStack_1c0._4_1_;
            abStack_240[5] = uStack_1c0._5_1_;
            abStack_240[6] = uStack_1c0._6_1_;
            abStack_240[7] = uStack_1c0._7_1_;
            abStack_240[8] = uStack_1b8;
            abStack_240[9] = uStack_1b7;
            abStack_240[10] = uStack_1b6;
            abStack_240[0xb] = uStack_1b5;
            abStack_240[0xc] = uStack_1b4;
            abStack_240[0xd] = uStack_1b3;
            uStack_232 = uStack_1b2;
            FUN_104486a14(&uStack_130,&uStack_2c0,0x11307daf0,&UNK_10dd06e20);
            pbVar33 = pbVar12;
            FUN_104486a14(&uStack_d0,&uStack_2c0,0x11307daf0,&UNK_10dd06e20);
            goto LAB_1044864fc;
          }
          if (((ulong)pbStack_b8 >> 0x3d & 1) == 0) {
            if (((uStack_130 != uStack_d0) || (uStack_128 != uStack_c8)) &&
               (uVar22 = uStack_130,
               __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                         (), (uVar22 & 1) == 0)) {
              FUN_104489968(&pbStack_140,abStack_240);
              FUN_104489968(&pbStack_e0,abStack_240);
              pbVar33 = &UNK_10dd06e20;
              FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
              FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
              FUN_104489a1c(&uStack_280,0x11307daf0,&UNK_10dd06e20);
              goto LAB_104486974;
            }
            if (uVar27 >> 0x3c < 0xf) {
              if (0xe < uVar28 >> 0x3c) goto LAB_104486624;
              uVar1 = (uint)(uVar27 >> 0x20);
              uVar19 = uVar1 >> 0x1e;
              iVar21 = (int)puVar11;
              iVar24 = (int)((ulong)puVar11 >> 0x20);
              if (uVar27 >> 0x3e != 3) {
                if (uVar1 >> 0x1e < 2) {
                  if (uVar19 == 0) {
                    uVar22 = uVar27 >> 0x30 & 0xff;
                  }
                  else {
                    if (SBORROW4(iVar24,iVar21)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869e0);
                      (*pcVar4)();
                    }
                    uVar22 = (ulong)(iVar24 - iVar21);
                  }
                }
                else if (uVar19 == 2) {
                  uVar22 = puVar11[3] - puVar11[2];
                  if (SBORROW8(puVar11[3],puVar11[2])) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869dc);
                    (*pcVar4)();
                  }
                }
                else {
                  uVar22 = 0;
                }
LAB_10448549c:
                uVar1 = (uint)(uVar28 >> 0x20);
                uVar23 = uVar1 >> 0x1e;
                puVar5 = puVar9;
                if (uVar1 >> 0x1e < 2) {
                  if (uVar23 == 0) {
                    uVar26 = uVar28 >> 0x30 & 0xff;
                  }
                  else {
                    iVar24 = (int)((ulong)puVar9 >> 0x20);
                    if (SBORROW4(iVar24,(int)puVar9)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869c8);
                      (*pcVar4)();
                    }
                    uVar26 = (ulong)(iVar24 - (int)puVar9);
                  }
LAB_1044854e4:
                  if (uVar22 == uVar26) {
                    if ((long)uVar22 < 1) {
LAB_104485618:
                      FUN_104489968(&pbStack_140,abStack_240);
                      FUN_104489968(&pbStack_e0,abStack_240);
                      FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
                      FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
                      func_0x000104482468(puVar11,uVar27,lVar29,pbVar33);
                      uVar22 = uVar28;
                      goto LAB_1044856a0;
                    }
                    if (uVar19 < 2) {
                      if (uVar19 == 0) {
                        uStack_2c0._0_1_ = (byte)puVar11;
                        uStack_2c0._1_1_ = (undefined1)((ulong)puVar11 >> 8);
                        uStack_2c0._2_1_ = (undefined1)((ulong)puVar11 >> 0x10);
                        uStack_2c0._3_1_ = (undefined1)((ulong)puVar11 >> 0x18);
                        uStack_2c0._4_1_ = (undefined1)((ulong)puVar11 >> 0x20);
                        uStack_2c0._5_1_ = (undefined1)((ulong)puVar11 >> 0x28);
                        uStack_2c0._6_1_ = (undefined1)((ulong)puVar11 >> 0x30);
                        uStack_2c0._7_1_ = (undefined1)((ulong)puVar11 >> 0x38);
                        uStack_2b8 = (undefined1)uVar27;
                        uStack_2b7 = (undefined1)(uVar27 >> 8);
                        uStack_2b6 = (undefined1)(uVar27 >> 0x10);
                        uStack_2b5 = (undefined1)(uVar27 >> 0x18);
                        uStack_2b4 = (undefined1)(uVar27 >> 0x20);
                        uStack_2b3 = (undefined1)(uVar27 >> 0x28);
                        puVar13 = (undefined8 *)((long)&uStack_2c0 + (uVar27 >> 0x30 & 0xff));
                        FUN_104489968(&pbStack_140,abStack_240);
                        FUN_104489968(&pbStack_e0,abStack_240);
                        FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
                        FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
                        func_0x000104482468(puVar11,uVar27,lVar29,pbVar33);
                        func_0x000104482468(puVar9,uVar28,lVar16,pbVar17);
LAB_104485908:
                        puVar5 = &uStack_2c0;
                      }
                      else {
                        lVar30 = (long)iVar21;
                        puVar6 = (undefined8 *)(((long)puVar11 >> 0x20) - lVar30);
                        if ((long)puVar11 >> 0x20 < lVar30) {
                    /* WARNING: Does not return */
                          pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869f4);
                          (*pcVar4)();
                        }
                        FUN_104489968(&pbStack_140,abStack_240);
                        FUN_104489968(&pbStack_e0,abStack_240);
                        FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
                        FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
                        func_0x000104482468(puVar11,uVar27,lVar29,pbVar33);
                        func_0x000104482468(puVar9,uVar28,lVar16,pbVar17);
                        __s10Foundation13__DataStorageC6_bytesSvSgvg();
                        if (puVar5 == (undefined8 *)0x0) {
                          __s10Foundation13__DataStorageC7_lengthSivg();
                          puVar5 = (undefined8 *)0x0;
                          puVar13 = (undefined8 *)0x0;
                        }
                        else {
                          puVar13 = puVar5;
                          __s10Foundation13__DataStorageC7_offsetSivg();
                          if (SBORROW8(lVar30,(long)puVar13)) {
                    /* WARNING: Does not return */
                            pcVar4 = (code *)SoftwareBreakpoint(1,0x104486a08);
                            (*pcVar4)();
                          }
                          puVar5 = (undefined8 *)((long)puVar5 + (lVar30 - (long)puVar13));
                          __s10Foundation13__DataStorageC7_lengthSivg();
                          if (puVar5 == (undefined8 *)0x0) {
                            puVar13 = (undefined8 *)0x0;
                          }
                          else {
                            if ((long)puVar6 <= (long)puVar13) {
                              puVar13 = puVar6;
                            }
                            puVar13 = (undefined8 *)((long)puVar13 + (long)puVar5);
                          }
                        }
                      }
                      func_0x000100e25bdc(abStack_240,puVar5,puVar13,puVar9,uVar28);
                    }
                    else {
                      if (uVar19 != 2) {
                        uStack_2b8 = 0;
                        uStack_2b7 = 0;
                        uStack_2b6 = 0;
                        uStack_2b5 = 0;
                        uStack_2b4 = 0;
                        uStack_2b3 = 0;
                        uStack_2c0._0_1_ = 0;
                        uStack_2c0._1_1_ = 0;
                        uStack_2c0._2_1_ = 0;
                        uStack_2c0._3_1_ = 0;
                        uStack_2c0._4_1_ = 0;
                        uStack_2c0._5_1_ = 0;
                        uStack_2c0._6_1_ = 0;
                        uStack_2c0._7_1_ = 0;
                        FUN_104489968(&pbStack_140,abStack_240);
                        FUN_104489968(&pbStack_e0,abStack_240);
                        FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
                        FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
                        func_0x000104482468(puVar11,uVar27,lVar29,pbVar33);
                        func_0x000104482468(puVar9,uVar28,lVar16,pbVar17);
                        puVar13 = &uStack_2c0;
                        goto LAB_104485908;
                      }
                      lVar30 = puVar11[2];
                      lVar15 = puVar11[3];
                      FUN_104489968(&pbStack_140,abStack_240);
                      FUN_104489968(&pbStack_e0,abStack_240);
                      FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
                      FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
                      func_0x000104482468(puVar11,uVar27,lVar29,pbVar33);
                      func_0x000104482468(puVar9,uVar28,lVar16,pbVar17);
                      __s10Foundation13__DataStorageC6_bytesSvSgvg();
                      puVar13 = puVar5;
                      if (puVar5 != (undefined8 *)0x0) {
                        __s10Foundation13__DataStorageC7_offsetSivg();
                        if (SBORROW8(lVar30,(long)puVar13)) {
                    /* WARNING: Does not return */
                          pcVar4 = (code *)SoftwareBreakpoint(1,0x104486a04);
                          (*pcVar4)();
                        }
                        puVar5 = (undefined8 *)((long)puVar5 + (lVar30 - (long)puVar13));
                      }
                      puVar6 = (undefined8 *)(lVar15 - lVar30);
                      if (SBORROW8(lVar15,lVar30)) {
                    /* WARNING: Does not return */
                        pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869f8);
                        (*pcVar4)();
                      }
                      __s10Foundation13__DataStorageC7_lengthSivg();
                      if (puVar5 == (undefined8 *)0x0) {
                        lVar30 = 0;
                      }
                      else {
                        if ((long)puVar6 <= (long)puVar13) {
                          puVar13 = puVar6;
                        }
                        lVar30 = (long)puVar13 + (long)puVar5;
                      }
                      func_0x000100e25bdc(abStack_240,puVar5,lVar30,puVar9,uVar28);
                    }
                    if ((abStack_240[0] & 1) == 0) {
                      FUN_10448284c(puVar9,uVar28,lVar16,pbVar17);
                      FUN_104489a1c(&uStack_280,0x11307daf0,&UNK_10dd06e20);
                      goto LAB_10448695c;
                    }
                    goto LAB_10448598c;
                  }
                  FUN_104489968(&pbStack_140,abStack_240);
                  FUN_104489968(&pbStack_e0,abStack_240);
                  FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
                  FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
                  func_0x000104482468(puVar11,uVar27,lVar29,pbVar33);
                  func_0x000104482468(puVar9,uVar28,lVar16,pbVar17);
                  FUN_104489a1c(&uStack_280,0x11307daf0,&UNK_10dd06e20);
                }
                else {
                  if (uVar23 == 2) {
                    uVar26 = puVar9[3] - puVar9[2];
                    if (SBORROW8(puVar9[3],puVar9[2])) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869c4);
                      (*pcVar4)();
                    }
                    goto LAB_1044854e4;
                  }
                  if (uVar22 == 0) goto LAB_104485618;
                  FUN_104489968(&pbStack_140,abStack_240);
                  FUN_104489968(&pbStack_e0,abStack_240);
                  FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
                  FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
                  func_0x000104482468(puVar11,uVar27,lVar29,pbVar33);
                  func_0x000104482468(puVar9,uVar28,lVar16,pbVar17);
                  FUN_104489a1c(&uStack_280,0x11307daf0,&UNK_10dd06e20);
                }
                FUN_10448284c(puVar9,uVar28,lVar16,pbVar17);
                goto LAB_10448695c;
              }
              uVar22 = 0;
              if (((puVar11 != (undefined8 *)0x0) || (uVar27 != 0xc000000000000000)) ||
                 ((uVar28 >> 0x3e < 3 ||
                  ((uVar22 = 0, puVar9 != (undefined8 *)0x0 || (uVar28 != 0xc000000000000000))))))
              goto LAB_10448549c;
              FUN_104489968(&pbStack_140,abStack_240);
              FUN_104489968(&pbStack_e0,abStack_240);
              FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
              FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
              func_0x000104482468(0,0xc000000000000000,lVar29,pbVar33);
              puVar5 = (undefined8 *)0x0;
              uVar22 = 0xc000000000000000;
LAB_1044856a0:
              func_0x000104482468(puVar5,uVar22,lVar16,pbVar17);
LAB_10448598c:
              uVar1 = (uint)((ulong)pbVar33 >> 0x20);
              uVar19 = uVar1 >> 0x1e;
              iVar21 = (int)lVar29;
              iVar24 = (int)((ulong)lVar29 >> 0x20);
              if ((ulong)pbVar33 >> 0x3e == 3) {
                uVar22 = 0;
                if ((((lVar29 != 0) || (pbVar33 != (byte *)0xc000000000000000)) ||
                    ((ulong)pbVar17 >> 0x3e < 3)) ||
                   ((uVar22 = 0, lVar16 != 0 || (pbVar17 != (byte *)0xc000000000000000))))
                goto LAB_104485a28;
                lVar16 = 0;
                pbVar17 = (byte *)0xc000000000000000;
LAB_104485b18:
                FUN_10448284c(puVar9,uVar28,lVar16,pbVar17);
                goto LAB_104485cfc;
              }
              if (uVar1 >> 0x1e < 2) {
                if (uVar19 == 0) {
                  uVar22 = (ulong)pbVar33 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar24,iVar21)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869e4);
                    (*pcVar4)();
                  }
                  uVar22 = (ulong)(iVar24 - iVar21);
                }
              }
              else if (uVar19 == 2) {
                uVar22 = *(long *)(lVar29 + 0x18) - *(long *)(lVar29 + 0x10);
                if (SBORROW8(*(long *)(lVar29 + 0x18),*(long *)(lVar29 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869e8);
                  (*pcVar4)();
                }
              }
              else {
                uVar22 = 0;
              }
LAB_104485a28:
              uVar1 = (uint)((ulong)pbVar17 >> 0x20);
              uVar23 = uVar1 >> 0x1e;
              if (uVar1 >> 0x1e < 2) {
                if (uVar23 == 0) {
                  uVar26 = (ulong)pbVar17 >> 0x30 & 0xff;
                }
                else {
                  iVar24 = (int)((ulong)lVar16 >> 0x20);
                  if (SBORROW4(iVar24,(int)lVar16)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869cc);
                    (*pcVar4)();
                  }
                  uVar26 = (ulong)(iVar24 - (int)lVar16);
                }
LAB_104485a6c:
                if (uVar22 == uVar26) {
                  if ((long)uVar22 < 1) goto LAB_104485b18;
                  if (uVar19 < 2) {
                    if (uVar19 == 0) {
                      abStack_240[0] = (byte)lVar29;
                      abStack_240[1] = (byte)((ulong)lVar29 >> 8);
                      abStack_240[2] = (byte)((ulong)lVar29 >> 0x10);
                      abStack_240[3] = (byte)((ulong)lVar29 >> 0x18);
                      abStack_240[4] = (byte)((ulong)lVar29 >> 0x20);
                      abStack_240[5] = (byte)((ulong)lVar29 >> 0x28);
                      abStack_240[6] = (byte)((ulong)lVar29 >> 0x30);
                      abStack_240[7] = (byte)((ulong)lVar29 >> 0x38);
                      abStack_240[8] = (byte)pbVar33;
                      abStack_240[9] = (byte)((ulong)pbVar33 >> 8);
                      abStack_240[10] = (byte)((ulong)pbVar33 >> 0x10);
                      abStack_240[0xb] = (byte)((ulong)pbVar33 >> 0x18);
                      abStack_240[0xc] = (byte)((ulong)pbVar33 >> 0x20);
                      abStack_240[0xd] = (byte)((ulong)pbVar33 >> 0x28);
                      pbVar14 = abStack_240 + ((ulong)pbVar33 >> 0x30 & 0xff);
LAB_104485c0c:
                      func_0x000100e25bdc(&uStack_2c0,abStack_240,pbVar14,lVar16,pbVar17);
                      FUN_10448284c(puVar9,uVar28,lVar16,pbVar17);
                      bVar2 = (byte)uStack_2c0;
                    }
                    else {
                      lVar30 = (long)iVar21;
                      puVar13 = (undefined8 *)((lVar29 >> 0x20) - lVar30);
                      if (lVar29 >> 0x20 < lVar30) {
                    /* WARNING: Does not return */
                        pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869fc);
                        (*pcVar4)();
                      }
                      __s10Foundation13__DataStorageC6_bytesSvSgvg();
                      if (puVar5 == (undefined8 *)0x0) {
                        __s10Foundation13__DataStorageC7_lengthSivg();
                        lVar30 = 0;
                        lVar15 = 0;
                      }
                      else {
                        puVar6 = puVar5;
                        __s10Foundation13__DataStorageC7_offsetSivg();
                        if (SBORROW8(lVar30,(long)puVar6)) {
                    /* WARNING: Does not return */
                          pcVar4 = (code *)SoftwareBreakpoint(1,0x104486a10);
                          (*pcVar4)();
                        }
                        lVar30 = (long)puVar5 + (lVar30 - (long)puVar6);
                        __s10Foundation13__DataStorageC7_lengthSivg();
                        if (lVar30 == 0) {
                          lVar15 = 0;
                        }
                        else {
                          if ((long)puVar13 <= (long)puVar6) {
                            puVar6 = puVar13;
                          }
                          lVar15 = (long)puVar6 + lVar30;
                        }
                      }
                      func_0x000100e25bdc(abStack_240,lVar30,lVar15,lVar16,pbVar17);
                      FUN_10448284c(puVar9,uVar28,lVar16,pbVar17);
                      bVar2 = abStack_240[0];
                    }
                  }
                  else {
                    if (uVar19 != 2) {
                      abStack_240[8] = 0;
                      abStack_240[9] = 0;
                      abStack_240[10] = 0;
                      abStack_240[0xb] = 0;
                      abStack_240[0xc] = 0;
                      abStack_240[0xd] = 0;
                      abStack_240[0] = 0;
                      abStack_240[1] = 0;
                      abStack_240[2] = 0;
                      abStack_240[3] = 0;
                      abStack_240[4] = 0;
                      abStack_240[5] = 0;
                      abStack_240[6] = 0;
                      abStack_240[7] = 0;
                      pbVar14 = abStack_240;
                      goto LAB_104485c0c;
                    }
                    lVar30 = *(long *)(lVar29 + 0x10);
                    lVar15 = *(long *)(lVar29 + 0x18);
                    __s10Foundation13__DataStorageC6_bytesSvSgvg();
                    puVar13 = puVar5;
                    if (puVar5 != (undefined8 *)0x0) {
                      __s10Foundation13__DataStorageC7_offsetSivg();
                      if (SBORROW8(lVar30,(long)puVar13)) {
                    /* WARNING: Does not return */
                        pcVar4 = (code *)SoftwareBreakpoint(1,0x104486a0c);
                        (*pcVar4)();
                      }
                      puVar5 = (undefined8 *)((long)puVar5 + (lVar30 - (long)puVar13));
                    }
                    puVar6 = (undefined8 *)(lVar15 - lVar30);
                    if (SBORROW8(lVar15,lVar30)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x104486a00);
                      (*pcVar4)();
                    }
                    __s10Foundation13__DataStorageC7_lengthSivg(pbVar33);
                    if (puVar5 == (undefined8 *)0x0) {
                      lVar30 = 0;
                    }
                    else {
                      if ((long)puVar6 <= (long)puVar13) {
                        puVar13 = puVar6;
                      }
                      lVar30 = (long)puVar13 + (long)puVar5;
                    }
                    func_0x000100e25bdc(abStack_240,puVar5,lVar30,lVar16,pbVar17);
                    FUN_10448284c(puVar9,uVar28,lVar16,pbVar17);
                    bVar2 = abStack_240[0];
                  }
                  if ((bVar2 & 1) != 0) goto LAB_104485cfc;
                  FUN_104489a1c(&uStack_280,0x11307daf0,&UNK_10dd06e20);
                  goto LAB_10448695c;
                }
              }
              else {
                if (uVar23 == 2) {
                  uVar26 = *(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10);
                  if (SBORROW8(*(long *)(lVar16 + 0x18),*(long *)(lVar16 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869d0);
                    (*pcVar4)();
                  }
                  goto LAB_104485a6c;
                }
                if (uVar22 == 0) goto LAB_104485b18;
              }
              FUN_104489a1c(&uStack_280,0x11307daf0,&UNK_10dd06e20);
              FUN_10448284c(puVar9,uVar28,lVar16,pbVar17);
LAB_10448695c:
              FUN_10448284c(puVar11,uVar27,lVar29,pbVar33);
              goto LAB_104486974;
            }
            if (uVar28 >> 0x3c < 0xf) {
LAB_104486624:
              FUN_104489968(&pbStack_140,abStack_240);
              FUN_104489968(&pbStack_e0,abStack_240);
              FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
              FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
              func_0x000104482468(puVar11,uVar27,lVar29,pbVar33);
              func_0x000104482468(puVar9,uVar28,lVar16,pbVar17);
              FUN_104489a1c(&uStack_280,0x11307daf0,&UNK_10dd06e20);
              FUN_10448284c(puVar11,uVar27,lVar29,pbVar33);
              puVar11 = puVar9;
              uVar27 = uVar28;
              lVar29 = lVar16;
              pbVar33 = pbVar17;
              goto LAB_10448695c;
            }
            FUN_104489968(&pbStack_140,abStack_240);
            FUN_104489968(&pbStack_e0,abStack_240);
            FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
            FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
            func_0x000104482468(puVar11,uVar27,lVar29,pbVar33);
            func_0x000104482468(puVar9,uVar28,lVar16,pbVar17);
LAB_104485cfc:
            FUN_10448284c(puVar11,uVar27,lVar29,pbVar33);
            uVar1 = (uint)((ulong)pbVar12 >> 0x20);
            uVar23 = uVar1 >> 0x1e;
            uVar19 = (uint)((ulong)pbVar18 >> 0x20);
            uVar25 = uVar19 >> 0x1e;
            iVar24 = (int)lVar31;
            if ((ulong)pbVar12 >> 0x3e == 3) {
              uVar27 = 0;
              if (((pbVar12 != (byte *)0xc000000000000000) || (lVar31 != 0)) ||
                 (((ulong)pbVar18 >> 0x3e < 3 ||
                  ((uVar27 = 0, lVar3 != 0 || (pbVar18 != (byte *)0xc000000000000000))))))
              goto joined_r0x000104485de0;
LAB_104485ea4:
              FUN_104489a1c(&uStack_280,0x11307daf0,&UNK_10dd06e20);
              puVar10 = &uStack_1c0;
              goto LAB_104485ec8;
            }
            if (uVar1 >> 0x1e < 2) {
              if (uVar23 == 0) {
                uVar27 = (ulong)pbVar12 >> 0x30 & 0xff;
              }
              else {
                iVar21 = (int)((ulong)lVar31 >> 0x20);
                if (SBORROW4(iVar21,iVar24)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869c0);
                  (*pcVar4)();
                }
                uVar27 = (ulong)(iVar21 - iVar24);
              }
joined_r0x000104485de0:
              if (uVar19 >> 0x1e < 2) goto LAB_104485de4;
LAB_104485d88:
              if (uVar25 == 2) {
                uVar28 = *(long *)(lVar3 + 0x18) - *(long *)(lVar3 + 0x10);
                if (SBORROW8(*(long *)(lVar3 + 0x18),*(long *)(lVar3 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869b8);
                  (*pcVar4)();
                }
                goto LAB_104485e04;
              }
              if (uVar27 == 0) goto LAB_104485ea4;
LAB_1044866ec:
              FUN_104489a1c(&uStack_280,0x11307daf0,&UNK_10dd06e20);
              goto LAB_104486974;
            }
            if (uVar23 == 2) {
              uVar27 = *(long *)(lVar31 + 0x18) - *(long *)(lVar31 + 0x10);
              if (SBORROW8(*(long *)(lVar31 + 0x18),*(long *)(lVar31 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869bc);
                (*pcVar4)();
              }
              goto joined_r0x000104485de0;
            }
            uVar27 = 0;
            if (1 < uVar25) goto LAB_104485d88;
LAB_104485de4:
            if (uVar25 == 0) {
              uVar28 = (ulong)pbVar18 >> 0x30 & 0xff;
            }
            else {
              iVar21 = (int)((ulong)lVar3 >> 0x20);
              if (SBORROW4(iVar21,(int)lVar3)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869b4);
                (*pcVar4)();
              }
              uVar28 = (ulong)(iVar21 - (int)lVar3);
            }
LAB_104485e04:
            if (uVar27 != uVar28) goto LAB_1044866ec;
            if ((long)uVar27 < 1) goto LAB_104485ea4;
            if (uVar23 < 2) {
              if (uVar23 == 0) {
                abStack_240[0] = (byte)lVar31;
                abStack_240[1] = (byte)((ulong)lVar31 >> 8);
                abStack_240[2] = (byte)((ulong)lVar31 >> 0x10);
                abStack_240[3] = (byte)((ulong)lVar31 >> 0x18);
                abStack_240[4] = (byte)((ulong)lVar31 >> 0x20);
                abStack_240[5] = (byte)((ulong)lVar31 >> 0x28);
                abStack_240[6] = (byte)((ulong)lVar31 >> 0x30);
                abStack_240[7] = (byte)((ulong)lVar31 >> 0x38);
                abStack_240[8] = (byte)pbVar12;
                abStack_240[9] = (byte)((ulong)pbVar12 >> 8);
                abStack_240[10] = (byte)((ulong)pbVar12 >> 0x10);
                abStack_240[0xb] = (byte)((ulong)pbVar12 >> 0x18);
                abStack_240[0xc] = (byte)((ulong)pbVar12 >> 0x20);
                abStack_240[0xd] = (byte)((ulong)pbVar12 >> 0x28);
                pbVar33 = abStack_240 + ((ulong)pbVar12 >> 0x30 & 0xff);
LAB_10448632c:
                func_0x000100e25bdc(&uStack_2c0,abStack_240,pbVar33,lVar3,pbVar18);
                param_2 = (byte *)0x11307daf0;
                pbVar12 = &UNK_10dd06e20;
                FUN_104489a1c(&uStack_280,0x11307daf0,&UNK_10dd06e20);
                bVar2 = (byte)uStack_2c0;
                puVar10 = &uStack_1c0;
                FUN_104489a1c(puVar10,0x11307daf0);
                pbVar33 = pbVar18;
              }
              else {
                lVar29 = (long)iVar24;
                puVar9 = (undefined8 *)((lVar31 >> 0x20) - lVar29);
                if (lVar31 >> 0x20 < lVar29) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869d4);
                  (*pcVar4)();
                }
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (puVar11 == (undefined8 *)0x0) {
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  lVar31 = 0;
                  lVar29 = 0;
                }
                else {
                  puVar5 = puVar11;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar29,(long)puVar5)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869f0);
                    (*pcVar4)();
                  }
                  lVar31 = (long)puVar11 + (lVar29 - (long)puVar5);
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  if (lVar31 == 0) {
                    lVar29 = 0;
                  }
                  else {
                    if ((long)puVar9 <= (long)puVar5) {
                      puVar5 = puVar9;
                    }
                    lVar29 = (long)puVar5 + lVar31;
                  }
                }
                func_0x000100e25bdc(abStack_240,lVar31,lVar29,lVar3,pbVar18);
                param_2 = (byte *)0x11307daf0;
                pbVar12 = &UNK_10dd06e20;
                FUN_104489a1c(&uStack_280,0x11307daf0,&UNK_10dd06e20);
                bVar2 = abStack_240[0];
                puVar10 = &uStack_1c0;
                FUN_104489a1c(puVar10,0x11307daf0);
                pbVar33 = pbVar18;
              }
            }
            else {
              if (uVar23 != 2) {
                abStack_240[8] = 0;
                abStack_240[9] = 0;
                abStack_240[10] = 0;
                abStack_240[0xb] = 0;
                abStack_240[0xc] = 0;
                abStack_240[0xd] = 0;
                abStack_240[0] = 0;
                abStack_240[1] = 0;
                abStack_240[2] = 0;
                abStack_240[3] = 0;
                abStack_240[4] = 0;
                abStack_240[5] = 0;
                abStack_240[6] = 0;
                abStack_240[7] = 0;
                pbVar33 = abStack_240;
                goto LAB_10448632c;
              }
              lVar29 = *(long *)(lVar31 + 0x10);
              lVar31 = *(long *)(lVar31 + 0x18);
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              puVar9 = puVar11;
              if (puVar11 != (undefined8 *)0x0) {
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar29,(long)puVar9)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869ec);
                  (*pcVar4)();
                }
                puVar11 = (undefined8 *)((long)puVar11 + (lVar29 - (long)puVar9));
              }
              puVar5 = (undefined8 *)(lVar31 - lVar29);
              if (SBORROW8(lVar31,lVar29)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869d8);
                (*pcVar4)();
              }
              __s10Foundation13__DataStorageC7_lengthSivg();
              if (puVar11 == (undefined8 *)0x0) {
                lVar31 = 0;
              }
              else {
                if ((long)puVar5 <= (long)puVar9) {
                  puVar9 = puVar5;
                }
                lVar31 = (long)puVar9 + (long)puVar11;
              }
              func_0x000100e25bdc(abStack_240,puVar11,lVar31,lVar3,pbVar18);
              param_2 = (byte *)0x11307daf0;
              pbVar12 = &UNK_10dd06e20;
              FUN_104489a1c(&uStack_280,0x11307daf0,&UNK_10dd06e20);
              bVar2 = abStack_240[0];
              puVar10 = &uStack_1c0;
              FUN_104489a1c(puVar10,0x11307daf0);
              pbVar33 = pbVar18;
            }
            if ((bVar2 & 1) != 0) goto LAB_104485ed4;
          }
          else {
            FUN_104489968(&pbStack_140,abStack_240);
            FUN_104489968(&pbStack_e0,abStack_240);
            pbVar33 = &UNK_10dd06e20;
            FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
            FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
LAB_104486974:
            pbVar12 = &UNK_10dd06e20;
            param_2 = (byte *)0x11307daf0;
            FUN_104489a1c(&uStack_1c0,0x11307daf0);
          }
LAB_104486978:
          FUN_1044823f8(&pbStack_e0);
          FUN_1044823f8(&pbStack_140);
          puVar11 = (undefined8 *)0x0;
          goto LAB_104486458;
        }
        if ((((ulong)pbStack_b8 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
LAB_104486490:
          uStack_1f8 = uStack_c8;
          uStack_200 = uStack_d0;
          pbStack_1e8 = pbStack_b8;
          lStack_1f0 = lStack_c0;
          uStack_1d8 = uStack_a8;
          puStack_1e0 = puStack_b0;
          pbStack_1c8 = pbStack_98;
          lStack_1d0 = lStack_a0;
          pbStack_228 = pbStack_118;
          lStack_230 = lStack_120;
          uStack_218 = uStack_108;
          puStack_220 = puStack_110;
          pbStack_208 = pbStack_f8;
          lStack_210 = lStack_100;
          pbVar33 = &UNK_10dd06e20;
          abStack_240[0] = (byte)uStack_1c0;
          abStack_240[1] = uStack_1c0._1_1_;
          abStack_240[2] = uStack_1c0._2_1_;
          abStack_240[3] = uStack_1c0._3_1_;
          abStack_240[4] = uStack_1c0._4_1_;
          abStack_240[5] = uStack_1c0._5_1_;
          abStack_240[6] = uStack_1c0._6_1_;
          abStack_240[7] = uStack_1c0._7_1_;
          abStack_240[8] = uStack_1b8;
          abStack_240[9] = uStack_1b7;
          abStack_240[10] = uStack_1b6;
          abStack_240[0xb] = uStack_1b5;
          abStack_240[0xc] = uStack_1b4;
          abStack_240[0xd] = uStack_1b3;
          uStack_232 = uStack_1b2;
          FUN_104486a14(&uStack_130,&uStack_280,0x11307daf0,&UNK_10dd06e20);
          FUN_104486a14(&uStack_d0,&uStack_280,0x11307daf0,&UNK_10dd06e20);
          param_2 = (byte *)0x11307dcf0;
          pbVar12 = &UNK_10dd07670;
LAB_1044864fc:
          FUN_104489a1c(abStack_240,param_2);
          puVar11 = (undefined8 *)0x0;
          goto LAB_104486458;
        }
        uStack_278 = uStack_128;
        uStack_280 = uStack_130;
        pbStack_268 = pbStack_118;
        lStack_270 = lStack_120;
        uStack_258 = uStack_108;
        puStack_260 = puStack_110;
        pbStack_248 = pbStack_f8;
        lStack_250 = lStack_100;
        FUN_104489968(&pbStack_140,abStack_240);
        FUN_104489968(&pbStack_e0,abStack_240);
        pbVar33 = &UNK_10dd06e20;
        FUN_104486a14(&uStack_130,abStack_240,0x11307daf0,&UNK_10dd06e20);
        FUN_104486a14(&uStack_d0,abStack_240,0x11307daf0,&UNK_10dd06e20);
        puVar10 = &uStack_280;
LAB_104485ec8:
        pbVar12 = &UNK_10dd06e20;
        param_2 = (byte *)0x11307daf0;
        FUN_104489a1c(puVar10,0x11307daf0);
LAB_104485ed4:
        param_4 = pbStack_88;
        param_3 = pbStack_90;
        uVar1 = (uint)(uStack_e8 >> 0x20);
        uVar23 = uVar1 >> 0x1e;
        uVar19 = (uint)((ulong)pbStack_88 >> 0x20);
        uVar25 = uVar19 >> 0x1e;
        iVar24 = (int)lStack_f0;
        if (uStack_e8 >> 0x3e == 3) {
          uVar27 = 0;
          if ((((lStack_f0 != 0) || (uStack_e8 != 0xc000000000000000)) ||
              ((ulong)pbStack_88 >> 0x3e < 3)) ||
             ((uVar27 = 0, pbStack_90 != (byte *)0x0 || (pbStack_88 != (byte *)0xc000000000000000)))
             ) goto joined_r0x0001044860b0;
LAB_104486028:
          FUN_1044823f8(&pbStack_e0);
          FUN_1044823f8(&pbStack_140);
          param_3 = pbVar12;
          param_4 = pbVar33;
        }
        else {
          if (uVar1 >> 0x1e < 2) {
            if (uVar23 == 0) {
              uVar27 = uStack_e8 >> 0x30 & 0xff;
            }
            else {
              iVar21 = (int)((ulong)lStack_f0 >> 0x20);
              if (SBORROW4(iVar21,iVar24)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869a0);
                (*pcVar4)();
              }
              uVar27 = (ulong)(iVar21 - iVar24);
            }
joined_r0x0001044860b0:
            if (1 < uVar19 >> 0x1e) goto LAB_104485f38;
LAB_104485f6c:
            if (uVar25 == 0) {
              uVar28 = (ulong)pbStack_88 >> 0x30 & 0xff;
            }
            else {
              iVar21 = (int)((ulong)pbStack_90 >> 0x20);
              if (SBORROW4(iVar21,(int)pbStack_90)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x104486998);
                (*pcVar4)();
              }
              uVar28 = (ulong)(iVar21 - (int)pbStack_90);
            }
          }
          else {
            if (uVar23 == 2) {
              uVar27 = *(long *)(lStack_f0 + 0x18) - *(long *)(lStack_f0 + 0x10);
              if (SBORROW8(*(long *)(lStack_f0 + 0x18),*(long *)(lStack_f0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10448699c);
                (*pcVar4)();
              }
              goto joined_r0x0001044860b0;
            }
            uVar27 = 0;
            if (uVar25 < 2) goto LAB_104485f6c;
LAB_104485f38:
            if (uVar25 != 2) {
              if (uVar27 != 0) goto LAB_104486978;
              goto LAB_104486028;
            }
            uVar28 = *(long *)(pbStack_90 + 0x18) - *(long *)(pbStack_90 + 0x10);
            if (SBORROW8(*(long *)(pbStack_90 + 0x18),*(long *)(pbStack_90 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x104486994);
              (*pcVar4)();
            }
          }
          if (uVar27 != uVar28) goto LAB_104486978;
          if ((long)uVar27 < 1) goto LAB_104486028;
          if (uVar23 < 2) {
            if (uVar23 != 0) {
              lVar31 = (long)iVar24;
              puVar7 = (ulong *)((lStack_f0 >> 0x20) - lVar31);
              if (lStack_f0 >> 0x20 < lVar31) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869a4);
                (*pcVar4)();
              }
              __s10Foundation13__DataStorageC6_bytesSvSgvg();
              if (puVar10 == (ulong *)0x0) {
                __s10Foundation13__DataStorageC7_lengthSivg();
                lVar31 = 0;
                param_2 = (byte *)0x0;
              }
              else {
                puVar8 = puVar10;
                __s10Foundation13__DataStorageC7_offsetSivg();
                if (SBORROW8(lVar31,(long)puVar8)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869b0);
                  (*pcVar4)();
                }
                lVar31 = (lVar31 - (long)puVar8) + (long)puVar10;
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (lVar31 == 0) {
                  param_2 = (byte *)0x0;
                }
                else {
                  if ((long)puVar7 <= (long)puVar8) {
                    puVar8 = puVar7;
                  }
                  param_2 = (byte *)((long)puVar8 + lVar31);
                }
              }
              func_0x000100e25bdc(&uStack_1c0,lVar31,param_2,param_3,param_4);
              FUN_1044823f8(&pbStack_e0);
              FUN_1044823f8(&pbStack_140);
              if (((byte)uStack_1c0 & 1) != 0) goto LAB_10448628c;
              goto LAB_10448644c;
            }
            uStack_1c0._0_1_ = (byte)lStack_f0;
            uStack_1c0._1_1_ = (undefined1)((ulong)lStack_f0 >> 8);
            uStack_1c0._2_1_ = (undefined1)((ulong)lStack_f0 >> 0x10);
            uStack_1c0._3_1_ = (undefined1)((ulong)lStack_f0 >> 0x18);
            uStack_1c0._4_1_ = (undefined1)((ulong)lStack_f0 >> 0x20);
            uStack_1c0._5_1_ = (undefined1)((ulong)lStack_f0 >> 0x28);
            uStack_1c0._6_1_ = (undefined1)((ulong)lStack_f0 >> 0x30);
            uStack_1c0._7_1_ = (undefined1)((ulong)lStack_f0 >> 0x38);
            uStack_1b8 = (undefined1)uStack_e8;
            uStack_1b7 = (undefined1)(uStack_e8 >> 8);
            uStack_1b6 = (undefined1)(uStack_e8 >> 0x10);
            uStack_1b5 = (undefined1)(uStack_e8 >> 0x18);
            uStack_1b4 = (undefined1)(uStack_e8 >> 0x20);
            uStack_1b3 = (undefined1)(uStack_e8 >> 0x28);
            param_2 = (byte *)((long)&uStack_1c0 + (uStack_e8 >> 0x30 & 0xff));
LAB_104486140:
            func_0x000100e25bdc(abStack_240,&uStack_1c0,param_2,pbStack_90,pbStack_88);
            FUN_1044823f8(&pbStack_e0);
            FUN_1044823f8(&pbStack_140);
            bVar2 = abStack_240[0];
          }
          else {
            if (uVar23 != 2) {
              uStack_1b8 = 0;
              uStack_1b7 = 0;
              uStack_1b6 = 0;
              uStack_1b5 = 0;
              uStack_1b4 = 0;
              uStack_1b3 = 0;
              uStack_1c0._0_1_ = 0;
              uStack_1c0._1_1_ = 0;
              uStack_1c0._2_1_ = 0;
              uStack_1c0._3_1_ = 0;
              uStack_1c0._4_1_ = 0;
              uStack_1c0._5_1_ = 0;
              uStack_1c0._6_1_ = 0;
              uStack_1c0._7_1_ = 0;
              param_2 = (byte *)&uStack_1c0;
              goto LAB_104486140;
            }
            lVar31 = *(long *)(lStack_f0 + 0x10);
            lVar29 = *(long *)(lStack_f0 + 0x18);
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            puVar7 = puVar10;
            if (puVar10 != (ulong *)0x0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar31,(long)puVar7)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869ac);
                (*pcVar4)();
              }
              puVar10 = (ulong *)((lVar31 - (long)puVar7) + (long)puVar10);
            }
            puVar8 = (ulong *)(lVar29 - lVar31);
            if (SBORROW8(lVar29,lVar31)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1044869a8);
              (*pcVar4)();
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (puVar10 == (ulong *)0x0) {
              param_2 = (byte *)0x0;
            }
            else {
              if ((long)puVar8 <= (long)puVar7) {
                puVar7 = puVar8;
              }
              param_2 = (byte *)((long)puVar7 + (long)puVar10);
            }
            func_0x000100e25bdc(&uStack_1c0,puVar10,param_2,param_3,param_4);
            FUN_1044823f8(&pbStack_e0);
            FUN_1044823f8(&pbStack_140);
            bVar2 = (byte)uStack_1c0;
          }
          if ((bVar2 & 1) == 0) goto LAB_10448644c;
        }
LAB_10448628c:
        if (lVar20 == 0) break;
        param_1 = param_1 + 0x60;
        pbVar32 = pbVar32 + 0x60;
      } while( true );
    }
    puVar11 = (undefined8 *)0x1;
    pbVar12 = param_3;
    pbVar33 = param_4;
  }
  else {
LAB_10448644c:
    puVar11 = (undefined8 *)0x0;
    pbVar12 = param_3;
    pbVar33 = param_4;
  }
LAB_104486458:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar11;
  }
  ___stack_chk_fail(puVar11);
  func_0x0001000285a8(pbVar12,pbVar33);
  (**(code **)(*(long *)(pbVar12 + -8) + 0x10))(param_2,puVar11,pbVar12);
  return (undefined8 *)param_2;
}



/* Entry: 104486a14; end: 104486a8f;  */

undefined8 FUN_104486a14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104486a90; end: 104486cbb;  */

uint FUN_104486a90(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if (uVar2 != *param_2 || param_1[1] != param_2[1]) {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar1 = 0;
    if ((uVar2 & 1) == 0) goto LAB_104486c98;
  }
  uVar5 = param_1[5];
  uVar2 = param_1[4];
  uVar9 = param_1[7];
  uVar7 = param_1[6];
  uVar6 = param_2[5];
  uVar4 = param_2[4];
  uVar10 = param_2[7];
  uVar8 = param_2[6];
  uStack_a0 = uVar4;
  uStack_98 = uVar6;
  uStack_90 = uVar8;
  uStack_88 = uVar10;
  uStack_80 = uVar2;
  uStack_78 = uVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_104486b84;
    FUN_104486a14(&uStack_80,auStack_c0,0x11307db40,&UNK_10dd06f10);
    FUN_104486a14(&uStack_a0,auStack_c0,0x11307db40,&UNK_10dd06f10);
    uVar3 = uVar2;
    func_0x000100e25fcc(uVar2,uVar5,uVar4,uVar6);
    if ((uVar3 & 1) == 0) {
      FUN_10448284c(uVar4,uVar6,uVar8,uVar10);
    }
    else {
      uVar3 = uVar7;
      func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
      FUN_10448284c(uVar4,uVar6,uVar8,uVar10);
      if ((uVar3 & 1) != 0) goto LAB_104486b54;
    }
  }
  else {
    if (0xe < uVar6 >> 0x3c) {
      FUN_104486a14(&uStack_80,auStack_c0,0x11307db40,&UNK_10dd06f10);
      FUN_104486a14(&uStack_a0,auStack_c0,0x11307db40,&UNK_10dd06f10);
LAB_104486b54:
      FUN_10448284c(uVar2,uVar5,uVar7,uVar9);
      uVar2 = param_1[2];
      func_0x000100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar2;
      goto LAB_104486c98;
    }
LAB_104486b84:
    FUN_104486a14(&uStack_80,auStack_c0,0x11307db40,&UNK_10dd06f10);
    FUN_104486a14(&uStack_a0,auStack_c0,0x11307db40,&UNK_10dd06f10);
    FUN_10448284c(uVar2,uVar5,uVar7,uVar9);
    uVar2 = uVar4;
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar9 = uVar10;
  }
  FUN_10448284c(uVar2,uVar5,uVar7,uVar9);
  uVar1 = 0;
LAB_104486c98:
  return uVar1 & 1;
}



/* Entry: 104486cbc; end: 104486d9f;  */

uint FUN_104486cbc(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar3;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  ulong uStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  long *plVar2;
  
  lStack_50 = *param_1;
  uStack_38 = param_1[3];
  if ((uStack_38 >> 0x3d & 1) == 0) {
    lStack_48 = param_1[1];
    lStack_40 = param_1[2];
    lStack_28 = param_1[5];
    lStack_30 = param_1[4];
    lStack_18 = param_1[7];
    lStack_20 = param_1[6];
    uStack_78 = param_2[3];
    if ((uStack_78 >> 0x3d & 1) == 0) {
      lStack_80 = param_2[2];
      lStack_88 = param_2[1];
      lStack_90 = *param_2;
      lStack_68 = param_2[5];
      lStack_70 = param_2[4];
      lStack_58 = param_2[7];
      lStack_60 = param_2[6];
      plVar2 = &lStack_50;
      FUN_104486a90(plVar2,&lStack_90);
      uVar1 = (uint)plVar2;
    }
    else {
      uVar1 = 0;
    }
    return uVar1 & 1;
  }
  if ((*(byte *)((long)param_2 + 0x1f) >> 5 & 1) != 0) {
    lVar3 = *param_2;
    if ((char)param_2[1] == '\x01') {
      if (lVar3 < 2) {
        if (lVar3 == 0) {
          if (lStack_50 == 0) {
            return 1;
          }
        }
        else if (lStack_50 == 1) {
          return 1;
        }
      }
      else if (lVar3 == 2) {
        if (lStack_50 == 2) {
          return 1;
        }
      }
      else if (lStack_50 == 3) {
        return 1;
      }
    }
    else if (lStack_50 == lVar3) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104486da0; end: 104486dab;  */

void FUN_104486da0(void)

{
  return;
}



/* Entry: 104486dac; end: 1044870c3;  */

uint FUN_104486dac(ulong *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined1 auStack_540 [128];
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  if ((uVar3 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar3 & 1) != 0)) {
    uStack_278 = param_1[0xd];
    uStack_280 = param_1[0xc];
    uStack_e8 = param_1[0xf];
    uStack_f0 = param_1[0xe];
    uStack_288 = param_1[0xb];
    uStack_290 = param_1[10];
    uStack_f8 = param_1[0xd];
    uStack_100 = param_1[0xc];
    uStack_268 = param_1[0xf];
    uStack_270 = param_1[0xe];
    uStack_d8 = param_1[0x11];
    uStack_e0 = param_1[0x10];
    uStack_258 = param_1[0x11];
    uStack_260 = param_1[0x10];
    uStack_c8 = param_1[0x13];
    uStack_d0 = param_1[0x12];
    uStack_138 = param_1[5];
    uStack_140 = param_1[4];
    uStack_128 = param_1[7];
    uStack_130 = param_1[6];
    uStack_118 = param_1[9];
    uStack_120 = param_1[8];
    uStack_108 = param_1[0xb];
    uStack_110 = param_1[10];
    uStack_2b8 = param_1[5];
    uStack_2c0 = param_1[4];
    uStack_2a8 = param_1[7];
    uStack_2b0 = param_1[6];
    uStack_298 = param_1[9];
    uStack_2a0 = param_1[8];
    uStack_1b8 = param_2[5];
    uStack_1c0 = param_2[4];
    uStack_228 = param_2[7];
    uStack_230 = param_2[6];
    uStack_198 = param_2[9];
    uStack_1a0 = param_2[8];
    uStack_188 = param_2[0xb];
    uStack_190 = param_2[10];
    uStack_1a8 = param_2[7];
    uStack_1b0 = param_2[6];
    uStack_218 = param_2[9];
    uStack_220 = param_2[8];
    uStack_238 = param_2[5];
    uStack_240 = param_2[4];
    uStack_1e8 = param_2[0xf];
    uStack_1f0 = param_2[0xe];
    uStack_158 = param_2[0x11];
    uStack_160 = param_2[0x10];
    uStack_1d8 = param_2[0x11];
    uStack_1e0 = param_2[0x10];
    uStack_148 = param_2[0x13];
    uStack_150 = param_2[0x12];
    uStack_208 = param_2[0xb];
    uStack_210 = param_2[10];
    uStack_178 = param_2[0xd];
    uStack_180 = param_2[0xc];
    uStack_1f8 = param_2[0xd];
    uStack_200 = param_2[0xc];
    uStack_168 = param_2[0xf];
    uStack_170 = param_2[0xe];
    uStack_248 = param_1[0x13];
    uStack_250 = param_1[0x12];
    uStack_1c8 = param_2[0x13];
    uStack_1d0 = param_2[0x12];
    iVar1 = (int)&uStack_2c0;
    func_0x000104482834();
    if (iVar1 == 1) {
      iVar1 = (int)&uStack_240;
      func_0x000104482834();
      if (iVar1 == 1) {
        uStack_378 = uStack_278;
        uStack_380 = uStack_280;
        uStack_368 = uStack_268;
        uStack_370 = uStack_270;
        uStack_358 = uStack_258;
        uStack_360 = uStack_260;
        uStack_348 = uStack_248;
        uStack_350 = uStack_250;
        uStack_3b8 = uStack_2b8;
        uStack_3c0 = uStack_2c0;
        uStack_3a8 = uStack_2a8;
        uStack_3b0 = uStack_2b0;
        uStack_398 = uStack_298;
        uStack_3a0 = uStack_2a0;
        uStack_388 = uStack_288;
        uStack_390 = uStack_290;
        FUN_104486a14(&uStack_140,&uStack_c0,0x11307daf8,&UNK_10dd06f00);
        FUN_104486a14(&uStack_1c0,&uStack_c0,0x11307daf8,&UNK_10dd06f00);
        FUN_104489a1c(&uStack_3c0,0x11307daf8,&UNK_10dd06f00);
LAB_10448709c:
        uVar3 = param_1[2];
        func_0x000100e25fcc(uVar3,param_1[3],param_2[2],param_2[3]);
        uVar2 = (uint)uVar3;
        goto LAB_1044870a8;
      }
    }
    else {
      uStack_3f8 = uStack_278;
      uStack_400 = uStack_280;
      uStack_3e8 = uStack_268;
      uStack_3f0 = uStack_270;
      uStack_3d8 = uStack_258;
      uStack_3e0 = uStack_260;
      uStack_3c8 = uStack_248;
      uStack_3d0 = uStack_250;
      uStack_438 = uStack_2b8;
      uStack_440 = uStack_2c0;
      uStack_428 = uStack_2a8;
      uStack_430 = uStack_2b0;
      uStack_418 = uStack_298;
      uStack_420 = uStack_2a0;
      uStack_408 = uStack_288;
      uStack_410 = uStack_290;
      iVar1 = (int)&uStack_240;
      func_0x000104482834();
      if (iVar1 != 1) {
        uStack_478 = uStack_1f8;
        uStack_480 = uStack_200;
        uStack_468 = uStack_1e8;
        uStack_470 = uStack_1f0;
        uStack_458 = uStack_1d8;
        uStack_460 = uStack_1e0;
        uStack_448 = uStack_1c8;
        uStack_450 = uStack_1d0;
        uStack_4b8 = uStack_238;
        uStack_4c0 = uStack_240;
        uStack_4a8 = uStack_228;
        uStack_4b0 = uStack_230;
        uStack_498 = uStack_218;
        uStack_4a0 = uStack_220;
        uStack_488 = uStack_208;
        uStack_490 = uStack_210;
        uStack_358 = uStack_1d8;
        uStack_360 = uStack_1e0;
        uStack_348 = uStack_1c8;
        uStack_350 = uStack_1d0;
        uStack_378 = uStack_1f8;
        uStack_380 = uStack_200;
        uStack_368 = uStack_1e8;
        uStack_370 = uStack_1f0;
        uStack_398 = uStack_218;
        uStack_3a0 = uStack_220;
        uStack_388 = uStack_208;
        uStack_390 = uStack_210;
        uStack_3b8 = uStack_238;
        uStack_3c0 = uStack_240;
        uStack_3a8 = uStack_228;
        uStack_3b0 = uStack_230;
        uStack_78 = uStack_3f8;
        uStack_80 = uStack_400;
        uStack_68 = uStack_3e8;
        uStack_70 = uStack_3f0;
        uStack_58 = uStack_3d8;
        uStack_60 = uStack_3e0;
        uStack_48 = uStack_3c8;
        uStack_50 = uStack_3d0;
        uStack_b8 = uStack_438;
        uStack_c0 = uStack_440;
        uStack_a8 = uStack_428;
        uStack_b0 = uStack_430;
        uStack_98 = uStack_418;
        uStack_a0 = uStack_420;
        uStack_88 = uStack_408;
        uStack_90 = uStack_410;
        FUN_104486a14(&uStack_140,auStack_540,0x11307daf8,&UNK_10dd06f00);
        FUN_104486a14(&uStack_1c0,auStack_540,0x11307daf8,&UNK_10dd06f00);
        puVar4 = &uStack_c0;
        FUN_10448b638(puVar4,&uStack_3c0);
        FUN_104489a1c(&uStack_4c0,0x11307daf8,&UNK_10dd06f00);
        FUN_104489a1c(&uStack_2c0,0x11307daf8,&UNK_10dd06f00);
        if (((ulong)puVar4 & 1) != 0) goto LAB_10448709c;
        goto LAB_104486fd8;
      }
    }
    uStack_2f8 = uStack_1f8;
    uStack_300 = uStack_200;
    uStack_2e8 = uStack_1e8;
    uStack_2f0 = uStack_1f0;
    uStack_2d8 = uStack_1d8;
    uStack_2e0 = uStack_1e0;
    uStack_2c8 = uStack_1c8;
    uStack_2d0 = uStack_1d0;
    uStack_338 = uStack_238;
    uStack_340 = uStack_240;
    uStack_328 = uStack_228;
    uStack_330 = uStack_230;
    uStack_318 = uStack_218;
    uStack_320 = uStack_220;
    uStack_308 = uStack_208;
    uStack_310 = uStack_210;
    uStack_378 = uStack_278;
    uStack_380 = uStack_280;
    uStack_368 = uStack_268;
    uStack_370 = uStack_270;
    uStack_358 = uStack_258;
    uStack_360 = uStack_260;
    uStack_348 = uStack_248;
    uStack_350 = uStack_250;
    uStack_3b8 = uStack_2b8;
    uStack_3c0 = uStack_2c0;
    uStack_3a8 = uStack_2a8;
    uStack_3b0 = uStack_2b0;
    uStack_398 = uStack_298;
    uStack_3a0 = uStack_2a0;
    uStack_388 = uStack_288;
    uStack_390 = uStack_290;
    FUN_104486a14(&uStack_140,&uStack_c0,0x11307daf8,&UNK_10dd06f00);
    FUN_104486a14(&uStack_1c0,&uStack_c0,0x11307daf8,&UNK_10dd06f00);
    FUN_104489a1c(&uStack_3c0,0x11307db38,&UNK_10dd06f08);
  }
LAB_104486fd8:
  uVar2 = 0;
LAB_1044870a8:
  return uVar2 & 1;
}



/* Entry: 1044870c4; end: 104487143;  */

void FUN_1044870c4(void)

{
  undefined *puVar1;
  
  if (puRam000000011307dbc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd070c0;
  _swift_getWitnessTable(&UNK_10dd070c0,&UNK_110778190);
  puRam000000011307dbc0 = puVar1;
  return;
}



/* Entry: 104487144; end: 10448737f;  */

uint FUN_104487144(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 auStack_280 [64];
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uStack_b8 = param_1[3];
    uStack_c0 = param_1[2];
    uStack_a8 = param_1[5];
    uStack_b0 = param_1[4];
    uStack_98 = param_1[7];
    uStack_a0 = param_1[6];
    uStack_88 = param_1[9];
    uStack_90 = param_1[8];
    uStack_178 = param_1[3];
    uStack_180 = param_1[2];
    uStack_168 = param_1[5];
    uStack_170 = param_1[4];
    uStack_f8 = param_2[3];
    uStack_100 = param_2[2];
    uStack_e8 = param_2[5];
    uStack_f0 = param_2[4];
    uStack_d8 = param_2[7];
    uStack_e0 = param_2[6];
    uStack_c8 = param_2[9];
    uStack_d0 = param_2[8];
    uStack_1b8 = param_2[3];
    uStack_1c0 = param_2[2];
    uStack_1a8 = param_2[5];
    uStack_1b0 = param_2[4];
    uStack_158 = param_1[7];
    uStack_160 = param_1[6];
    uStack_148 = param_1[9];
    uStack_150 = param_1[8];
    uStack_198 = param_2[7];
    uStack_1a0 = param_2[6];
    uStack_188 = param_2[9];
    uStack_190 = param_2[8];
    uStack_140 = uStack_1c0;
    uStack_138 = uStack_1b8;
    uStack_130 = uStack_1b0;
    uStack_128 = uStack_1a8;
    uStack_120 = uStack_1a0;
    uStack_118 = uStack_198;
    uStack_110 = uStack_190;
    uStack_108 = uStack_188;
    if (((uStack_168 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      if ((uStack_1a8 & 0x3000000000000000) == 0x3000000000000000) {
        uStack_1f8 = param_1[3];
        uStack_200 = param_1[2];
        uStack_1e8 = param_1[5];
        uStack_1f0 = param_1[4];
        uStack_1d8 = param_1[7];
        uStack_1e0 = param_1[6];
        uStack_1c8 = param_1[9];
        uStack_1d0 = param_1[8];
        FUN_104486a14(&uStack_c0,&uStack_80,0x11307daf0,&UNK_10dd06e20);
        FUN_104486a14(&uStack_100,&uStack_80,0x11307daf0,&UNK_10dd06e20);
        FUN_104489a1c(&uStack_200,0x11307daf0,&UNK_10dd06e20);
LAB_104487358:
        uVar2 = param_1[10];
        func_0x000100e25fcc(uVar2,param_1[0xb],param_2[10],param_2[0xb]);
        uVar1 = (uint)uVar2;
        goto LAB_104487364;
      }
    }
    else if ((uStack_1a8 & 0x3000000000000000) != 0x3000000000000000) {
      uStack_238 = param_2[3];
      uStack_240 = param_2[2];
      uStack_228 = param_2[5];
      uStack_230 = param_2[4];
      uStack_218 = param_2[7];
      uStack_220 = param_2[6];
      uStack_208 = param_2[9];
      uStack_210 = param_2[8];
      uStack_78 = param_1[3];
      uStack_80 = param_1[2];
      uStack_68 = param_1[5];
      uStack_70 = param_1[4];
      uStack_58 = param_1[7];
      uStack_60 = param_1[6];
      uStack_48 = param_1[9];
      uStack_50 = param_1[8];
      uStack_200 = uStack_240;
      uStack_1f8 = uStack_238;
      uStack_1f0 = uStack_230;
      uStack_1e8 = uStack_228;
      uStack_1e0 = uStack_220;
      uStack_1d8 = uStack_218;
      uStack_1d0 = uStack_210;
      uStack_1c8 = uStack_208;
      FUN_104486a14(&uStack_c0,auStack_280,0x11307daf0,&UNK_10dd06e20);
      FUN_104486a14(&uStack_100,auStack_280,0x11307daf0,&UNK_10dd06e20);
      puVar3 = &uStack_80;
      FUN_104486cbc(puVar3,&uStack_200);
      FUN_104489a1c(&uStack_240,0x11307daf0,&UNK_10dd06e20);
      FUN_104489a1c(&uStack_180,0x11307daf0,&UNK_10dd06e20);
      if (((ulong)puVar3 & 1) != 0) goto LAB_104487358;
      goto LAB_1044872bc;
    }
    uStack_200 = uStack_180;
    uStack_1f8 = uStack_178;
    uStack_1f0 = uStack_170;
    uStack_1e8 = uStack_168;
    uStack_1e0 = uStack_160;
    uStack_1d8 = uStack_158;
    uStack_1d0 = uStack_150;
    uStack_1c8 = uStack_148;
    FUN_104486a14(&uStack_c0,&uStack_80,0x11307daf0,&UNK_10dd06e20);
    FUN_104486a14(&uStack_100,&uStack_80,0x11307daf0,&UNK_10dd06e20);
    FUN_104489a1c(&uStack_200,0x11307dcf0,&UNK_10dd07670);
  }
LAB_1044872bc:
  uVar1 = 0;
LAB_104487364:
  return uVar1 & 1;
}



/* Entry: 104487380; end: 1044873bf;  */

void FUN_104487380(void)

{
  undefined *puVar1;
  
  if (puRam000000011307dbe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd07270;
  _swift_getWitnessTable(&UNK_10dd07270,&UNK_1107782a0);
  puRam000000011307dbe0 = puVar1;
  return;
}



/* Entry: 1044873c0; end: 104487753;  */

uint FUN_1044873c0(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_540 [128];
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (lVar7 == *(long *)(lVar6 + 0x10)) {
    if (lVar7 != 0 && lVar5 != lVar6) {
      plVar4 = (long *)(lVar6 + 0x28);
      plVar8 = (long *)(lVar5 + 0x28);
      do {
        uVar3 = plVar8[-1];
        if ((uVar3 != plVar4[-1] || *plVar8 != *plVar4) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar3 & 1) == 0)) goto LAB_104487734;
        plVar4 = plVar4 + 2;
        plVar8 = plVar8 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    lStack_f8 = param_1[0xc];
    lStack_100 = param_1[0xb];
    lStack_e8 = param_1[0xe];
    lStack_f0 = param_1[0xd];
    lStack_d8 = param_1[0x10];
    lStack_e0 = param_1[0xf];
    lStack_c8 = param_1[0x12];
    lStack_d0 = param_1[0x11];
    lStack_138 = param_1[4];
    lStack_140 = param_1[3];
    lStack_128 = param_1[6];
    lStack_130 = param_1[5];
    lStack_118 = param_1[8];
    lStack_120 = param_1[7];
    lStack_108 = param_1[10];
    lStack_110 = param_1[9];
    lStack_1b8 = param_2[4];
    lStack_1c0 = param_2[3];
    lStack_1a8 = param_2[6];
    lStack_1b0 = param_2[5];
    lStack_198 = param_2[8];
    lStack_1a0 = param_2[7];
    lStack_188 = param_2[10];
    lStack_190 = param_2[9];
    lStack_178 = param_2[0xc];
    lStack_180 = param_2[0xb];
    lStack_168 = param_2[0xe];
    lStack_170 = param_2[0xd];
    lStack_158 = param_2[0x10];
    lStack_160 = param_2[0xf];
    lStack_148 = param_2[0x12];
    lStack_150 = param_2[0x11];
    lStack_278 = param_1[0xc];
    lStack_280 = param_1[0xb];
    lStack_268 = param_1[0xe];
    lStack_270 = param_1[0xd];
    lStack_258 = param_1[0x10];
    lStack_260 = param_1[0xf];
    lStack_248 = param_1[0x12];
    lStack_250 = param_1[0x11];
    lStack_2b8 = param_1[4];
    lStack_2c0 = param_1[3];
    lStack_2a8 = param_1[6];
    lStack_2b0 = param_1[5];
    lStack_298 = param_1[8];
    lStack_2a0 = param_1[7];
    lStack_288 = param_1[10];
    lStack_290 = param_1[9];
    lStack_238 = param_2[4];
    lStack_240 = param_2[3];
    lStack_228 = param_2[6];
    lStack_230 = param_2[5];
    lStack_218 = param_2[8];
    lStack_220 = param_2[7];
    lStack_208 = param_2[10];
    lStack_210 = param_2[9];
    lStack_1f8 = param_2[0xc];
    lStack_200 = param_2[0xb];
    lStack_1e8 = param_2[0xe];
    lStack_1f0 = param_2[0xd];
    lStack_1d8 = param_2[0x10];
    lStack_1e0 = param_2[0xf];
    lStack_1c8 = param_2[0x12];
    lStack_1d0 = param_2[0x11];
    iVar1 = (int)&lStack_2c0;
    func_0x000104482834();
    if (iVar1 == 1) {
      iVar1 = (int)&lStack_240;
      func_0x000104482834();
      if (iVar1 != 1) {
LAB_104487594:
        lStack_2f8 = lStack_1f8;
        lStack_300 = lStack_200;
        lStack_2e8 = lStack_1e8;
        lStack_2f0 = lStack_1f0;
        lStack_2d8 = lStack_1d8;
        lStack_2e0 = lStack_1e0;
        lStack_2c8 = lStack_1c8;
        lStack_2d0 = lStack_1d0;
        lStack_338 = lStack_238;
        lStack_340 = lStack_240;
        lStack_328 = lStack_228;
        lStack_330 = lStack_230;
        lStack_318 = lStack_218;
        lStack_320 = lStack_220;
        lStack_308 = lStack_208;
        lStack_310 = lStack_210;
        lStack_378 = lStack_278;
        lStack_380 = lStack_280;
        lStack_368 = lStack_268;
        lStack_370 = lStack_270;
        lStack_358 = lStack_258;
        lStack_360 = lStack_260;
        lStack_348 = lStack_248;
        lStack_350 = lStack_250;
        lStack_3b8 = lStack_2b8;
        lStack_3c0 = lStack_2c0;
        lStack_3a8 = lStack_2a8;
        lStack_3b0 = lStack_2b0;
        lStack_398 = lStack_298;
        lStack_3a0 = lStack_2a0;
        lStack_388 = lStack_288;
        lStack_390 = lStack_290;
        FUN_104486a14(&lStack_140,&lStack_c0,0x11307daf8,&UNK_10dd06f00);
        FUN_104486a14(&lStack_1c0,&lStack_c0,0x11307daf8,&UNK_10dd06f00);
        FUN_104489a1c(&lStack_3c0,0x11307db38,&UNK_10dd06f08);
        goto LAB_104487734;
      }
      lStack_378 = lStack_278;
      lStack_380 = lStack_280;
      lStack_368 = lStack_268;
      lStack_370 = lStack_270;
      lStack_358 = lStack_258;
      lStack_360 = lStack_260;
      lStack_348 = lStack_248;
      lStack_350 = lStack_250;
      lStack_3b8 = lStack_2b8;
      lStack_3c0 = lStack_2c0;
      lStack_3a8 = lStack_2a8;
      lStack_3b0 = lStack_2b0;
      lStack_398 = lStack_298;
      lStack_3a0 = lStack_2a0;
      lStack_388 = lStack_288;
      lStack_390 = lStack_290;
      FUN_104486a14(&lStack_140,&lStack_c0,0x11307daf8,&UNK_10dd06f00);
      FUN_104486a14(&lStack_1c0,&lStack_c0,0x11307daf8,&UNK_10dd06f00);
      FUN_104489a1c(&lStack_3c0,0x11307daf8,&UNK_10dd06f00);
    }
    else {
      lStack_3f8 = lStack_278;
      lStack_400 = lStack_280;
      lStack_3e8 = lStack_268;
      lStack_3f0 = lStack_270;
      lStack_3d8 = lStack_258;
      lStack_3e0 = lStack_260;
      lStack_3c8 = lStack_248;
      lStack_3d0 = lStack_250;
      lStack_438 = lStack_2b8;
      lStack_440 = lStack_2c0;
      lStack_428 = lStack_2a8;
      lStack_430 = lStack_2b0;
      lStack_418 = lStack_298;
      lStack_420 = lStack_2a0;
      lStack_408 = lStack_288;
      lStack_410 = lStack_290;
      iVar1 = (int)&lStack_240;
      func_0x000104482834();
      if (iVar1 == 1) goto LAB_104487594;
      lStack_478 = lStack_1f8;
      lStack_480 = lStack_200;
      lStack_468 = lStack_1e8;
      lStack_470 = lStack_1f0;
      lStack_458 = lStack_1d8;
      lStack_460 = lStack_1e0;
      lStack_448 = lStack_1c8;
      lStack_450 = lStack_1d0;
      lStack_4b8 = lStack_238;
      lStack_4c0 = lStack_240;
      lStack_4a8 = lStack_228;
      lStack_4b0 = lStack_230;
      lStack_498 = lStack_218;
      lStack_4a0 = lStack_220;
      lStack_488 = lStack_208;
      lStack_490 = lStack_210;
      lStack_358 = lStack_1d8;
      lStack_360 = lStack_1e0;
      lStack_348 = lStack_1c8;
      lStack_350 = lStack_1d0;
      lStack_378 = lStack_1f8;
      lStack_380 = lStack_200;
      lStack_368 = lStack_1e8;
      lStack_370 = lStack_1f0;
      lStack_398 = lStack_218;
      lStack_3a0 = lStack_220;
      lStack_388 = lStack_208;
      lStack_390 = lStack_210;
      lStack_3b8 = lStack_238;
      lStack_3c0 = lStack_240;
      lStack_3a8 = lStack_228;
      lStack_3b0 = lStack_230;
      lStack_78 = lStack_3f8;
      lStack_80 = lStack_400;
      lStack_68 = lStack_3e8;
      lStack_70 = lStack_3f0;
      lStack_58 = lStack_3d8;
      lStack_60 = lStack_3e0;
      lStack_48 = lStack_3c8;
      lStack_50 = lStack_3d0;
      lStack_b8 = lStack_438;
      lStack_c0 = lStack_440;
      lStack_a8 = lStack_428;
      lStack_b0 = lStack_430;
      lStack_98 = lStack_418;
      lStack_a0 = lStack_420;
      lStack_88 = lStack_408;
      lStack_90 = lStack_410;
      FUN_104486a14(&lStack_140,auStack_540,0x11307daf8,&UNK_10dd06f00);
      FUN_104486a14(&lStack_1c0,auStack_540,0x11307daf8,&UNK_10dd06f00);
      plVar4 = &lStack_c0;
      FUN_10448b638(plVar4,&lStack_3c0);
      FUN_104489a1c(&lStack_4c0,0x11307daf8,&UNK_10dd06f00);
      FUN_104489a1c(&lStack_2c0,0x11307daf8,&UNK_10dd06f00);
      if (((ulong)plVar4 & 1) == 0) goto LAB_104487734;
    }
    lVar7 = param_1[1];
    func_0x000100e25fcc(lVar7,param_1[2],param_2[1],param_2[2]);
    uVar2 = (uint)lVar7;
  }
  else {
LAB_104487734:
    uVar2 = 0;
  }
  return uVar2 & 1;
}



/* Entry: 104487754; end: 1044877d3;  */

void FUN_104487754(void)

{
  undefined *puVar1;
  
  if (puRam000000011307dbf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd07358;
  _swift_getWitnessTable(&UNK_10dd07358,&UNK_110778448);
  puRam000000011307dbf8 = puVar1;
  return;
}



/* Entry: 1044877d4; end: 1044877e7;  */

void FUN_1044877d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1044877e8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x104487828)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1044877e8; end: 104487867;  */

void FUN_1044877e8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307dc10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd06fe8;
  _swift_getWitnessTable(&UNK_10dd06fe8,&UNK_1107783d0);
  puRam000000011307dc10 = puVar1;
  return;
}



/* Entry: 104487868; end: 10448786b;  */

void FUN_104487868(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011307dc20 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11307dc28;
  func_0x00010002969c(0x11307dc28,&UNK_10dd06f70);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011307dc20 = puVar2;
  return;
}



/* Entry: 10448786c; end: 1044878bb;  */

void FUN_10448786c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011307dc20 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11307dc28;
  func_0x00010002969c(0x11307dc28,&UNK_10dd06f70);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011307dc20 = puVar2;
  return;
}



/* Entry: 1044878bc; end: 1044878bf;  */

void FUN_1044878bc(void)

{
  undefined *puVar1;
  
  if (puRam000000011307dc30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd07028;
  _swift_getWitnessTable(&UNK_10dd07028,&UNK_1107783d0);
  puRam000000011307dc30 = puVar1;
  return;
}



/* Entry: 1044878c0; end: 1044878ff;  */

void FUN_1044878c0(void)

{
  undefined *puVar1;
  
  if (puRam000000011307dc30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd07028;
  _swift_getWitnessTable(&UNK_10dd07028,&UNK_1107783d0);
  puRam000000011307dc30 = puVar1;
  return;
}



/* Entry: 104487900; end: 104487923;  */

void FUN_104487900(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_104487924();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 104487924; end: 104487963;  */

void FUN_104487924(void)

{
  undefined *puVar1;
  
  if (puRam000000011307dc38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd07098;
  _swift_getWitnessTable(&UNK_10dd07098,&UNK_110778190);
  puRam000000011307dc38 = puVar1;
  return;
}



/* Entry: 104487964; end: 10448797b;  */

void FUN_104487964(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1044870c4();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10448253c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10448797c; end: 1044879bb;  */

void FUN_10448797c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307dc40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd07100;
  _swift_getWitnessTable(&UNK_10dd07100,&UNK_110778190);
  puRam000000011307dc40 = puVar1;
  return;
}



/* Entry: 1044879bc; end: 1044879df;  */

void FUN_1044879bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1044879e0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}


