/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c9d33c; end: 103c9d55f;  */

void FUN_103c9d33c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar6;
  ulong uStack_50;
  undefined1 uStack_48;
  
  puVar3 = &uStack_50;
  puVar4 = &uStack_50;
  uVar1 = unaff_x20[1];
  uVar5 = *unaff_x20 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar5 = uVar1 >> 0x38 & 0xf;
  }
  if (((uVar5 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar1,1,param_2,param_3), unaff_x21 == 0)) &&
     (puVar2 = unaff_x20, FUN_103ca05e4(), unaff_x21 == 0)) {
    if (unaff_x20[2] != 0) {
      uStack_48 = (undefined1)unaff_x20[3];
      pcVar6 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[2];
      func_0x000103cb72bc();
      (*pcVar6)(&uStack_50,3,&UNK_11072f668,puVar2,param_2,param_3);
      puVar2 = puVar3;
    }
    if (unaff_x20[4] != 0) {
      uStack_48 = (undefined1)unaff_x20[5];
      pcVar6 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[4];
      func_0x000103cb6ffc();
      (*pcVar6)(&uStack_50,4,&UNK_11072f788,puVar2,param_2,param_3);
      puVar2 = puVar4;
    }
    if (unaff_x20[6] != 0) {
      uStack_48 = (undefined1)unaff_x20[7];
      pcVar6 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[6];
      func_0x000103cb71fc();
      (*pcVar6)(&uStack_50,5,&UNK_11072f6f8,puVar2,param_2,param_3);
    }
    if (unaff_x20[8] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[8],6,param_2,param_3);
    }
    uVar5 = unaff_x20[9];
    if (uVar5 != 0) {
      (**(code **)(param_3 + 0x20))(uVar5,7,param_2,param_3);
    }
    if (unaff_x20[10] != 0) {
      uStack_48 = (undefined1)unaff_x20[0xb];
      pcVar6 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[10];
      func_0x000103cb79bc();
      (*pcVar6)(&uStack_50,8,&UNK_1106f6d50,uVar5,param_2,param_3);
    }
    if (*(int *)((long)unaff_x20 + 0x5c) != 0) {
      (**(code **)(param_3 + 0x18))(*(int *)((long)unaff_x20 + 0x5c),9,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[0xc],unaff_x20[0xd],param_2,param_3);
  }
  return;
}



/* Entry: 103c9d560; end: 103c9d5d7;  */

void FUN_103c9d560(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((long)param_1 + 0x5c) = 0;
  param_1[0xd] = 0xc000000000000000;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0xf000000000000000;
  return;
}



/* Entry: 103c9d5d8; end: 103c9d607;  */

undefined1  [16] FUN_103c9d5d8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x60);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  return auVar1;
}



/* Entry: 103c9d608; end: 103c9d63b;  */

void FUN_103c9d608(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 103c9d63c; end: 103c9d64f;  */

undefined1  [16] FUN_103c9d63c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = 0x103c9d64c;
  return auVar1;
}



/* Entry: 103c9d650; end: 103c9d663;  */

void FUN_103c9d650(void)

{
  FUN_103c9d168();
  return;
}



/* Entry: 103c9d664; end: 103c9d6bb;  */

void FUN_103c9d664(void)

{
  FUN_103c9d33c();
  return;
}



/* Entry: 103c9d6bc; end: 103c9d6f3;  */

uint FUN_103c9d6bc(long param_1,long param_2)

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
  func_0x000103ccbad0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 103c9d6f4; end: 103c9d783;  */

uint FUN_103c9d6f4(undefined8 *param_1)

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
  FUN_103cb4f9c(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 103c9d784; end: 103c9d823;  */

/* WARNING: Possible PIC construction at 0x000103c9d7d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9d7e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9d7d4) */
/* WARNING: Removing unreachable block (ram,0x000103c9d7e4) */

void FUN_103c9d784(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff0b0 != -1) {
    func_0x000107c61568(0x112fff0b0,FUN_103c9d120);
  }
  uVar5 = uRam000000011380df38;
  uVar4 = uRam000000011380df30;
  uVar3 = uRam000000011380df28;
  uVar2 = uRam000000011380df20;
  uVar1 = uRam000000011380df18;
  *param_1 = uRam000000011380df10;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103c9d824; end: 103c9d837;  */

void FUN_103c9d824(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000470;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000470,&UNK_10dc75018);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c9d838; end: 103c9d983;  */

void FUN_103c9d838(undefined8 param_1,undefined8 param_2)

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
  func_0x000107c6068c(auStack_118,0);
  func_0x000107c5fa50(auStack_118,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c9d984; end: 103c9da13;  */

uint FUN_103c9d984(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103cb4f9c(&uStack_160,&uStack_c0);
  return uVar1 & 1;
}



/* Entry: 103c9da14; end: 103c9da5b;  */

void FUN_103c9da14(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc75d0d,0xd,2);
  uRam000000011380df48 = uStack_38;
  uRam000000011380df40 = uStack_40;
  uRam000000011380df58 = uStack_28;
  uRam000000011380df50 = uStack_30;
  uRam000000011380df68 = uStack_18;
  uRam000000011380df60 = uStack_20;
  return;
}



/* Entry: 103c9da5c; end: 103c9da93;  */

undefined1  [16] FUN_103c9da5c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b3140;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 103c9da94; end: 103c9dacb;  */

uint FUN_103c9da94(long param_1,long param_2)

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
  func_0x000103ccba90();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 103c9dacc; end: 103c9db6b;  */

/* WARNING: Possible PIC construction at 0x000103c9db18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9db28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9db1c) */
/* WARNING: Removing unreachable block (ram,0x000103c9db2c) */

void FUN_103c9dacc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff0c8 != -1) {
    func_0x000107c61568(0x112fff0c8,FUN_103c9da14);
  }
  uVar5 = uRam000000011380df68;
  uVar4 = uRam000000011380df60;
  uVar3 = uRam000000011380df58;
  uVar2 = uRam000000011380df50;
  uVar1 = uRam000000011380df48;
  *param_1 = uRam000000011380df40;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103c9db6c; end: 103c9db7f;  */

void FUN_103c9db6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000460;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000460,&UNK_10dc75010);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c9db80; end: 103c9dbb7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c9db80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103cbc26c();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103c9dbb8; end: 103c9dbff;  */

void FUN_103c9dbb8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc75cf0,0x1c,2);
  uRam000000011380df78 = uStack_38;
  uRam000000011380df70 = uStack_40;
  uRam000000011380df88 = uStack_28;
  uRam000000011380df80 = uStack_30;
  uRam000000011380df98 = uStack_18;
  uRam000000011380df90 = uStack_20;
  return;
}



/* Entry: 103c9dc00; end: 103c9dd07;  */

/* WARNING: Removing unreachable block (ram,0x000103c9dd04) */

void FUN_103c9dc00(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        (**(code **)(param_3 + 0x150))(unaff_x20 + 0x20,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103cb7abc();
        }
        else {
          if (lVar1 != 1) goto LAB_103c9dc88;
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103cb7a7c();
        }
        (*pcVar4)();
      }
LAB_103c9dc88:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103c9dd08; end: 103c9de1b;  */

void FUN_103c9dd08(undefined1 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar5;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar4 = &lStack_50;
  puVar3 = param_1;
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar5 = *(code **)(param_3 + 0x80);
    lStack_50 = *unaff_x20;
    func_0x000103cb7a7c();
    (*pcVar5)(&lStack_50,1,&UNK_1106f8888,puVar3,param_2,param_3);
    puVar3 = (undefined1 *)plVar4;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_48 = (undefined1)unaff_x20[3];
    pcVar5 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[2];
    func_0x000103cb7abc();
    (*pcVar5)(&lStack_50,2,&UNK_1106f8918,puVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[5];
  uVar1 = unaff_x20[4] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  }
  return;
}



/* Entry: 103c9de1c; end: 103c9de7f;  */

void FUN_103c9de1c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 103c9de80; end: 103c9dea7;  */

void FUN_103c9de80(void)

{
  FUN_103c9dc00();
  return;
}



/* Entry: 103c9dea8; end: 103c9dedf;  */

uint FUN_103c9dea8(long param_1,long param_2)

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
  func_0x000103ccba50();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 103c9dee0; end: 103c9df27;  */

uint FUN_103c9dee0(undefined8 *param_1)

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
  func_0x000103cb3808(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103c9df28; end: 103c9dfc7;  */

/* WARNING: Possible PIC construction at 0x000103c9df74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9df84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9df78) */
/* WARNING: Removing unreachable block (ram,0x000103c9df88) */

void FUN_103c9df28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff0d8 != -1) {
    func_0x000107c61568(0x112fff0d8,FUN_103c9dbb8);
  }
  uVar5 = uRam000000011380df98;
  uVar4 = uRam000000011380df90;
  uVar3 = uRam000000011380df88;
  uVar2 = uRam000000011380df80;
  uVar1 = uRam000000011380df78;
  *param_1 = uRam000000011380df70;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103c9dfc8; end: 103c9dfdb;  */

void FUN_103c9dfc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000450;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000450,&UNK_10dc75008);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c9dfdc; end: 103c9e0df;  */

void FUN_103c9dfdc(undefined8 param_1,undefined8 param_2)

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
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c9e0e0; end: 103c9e16f;  */

uint FUN_103c9e0e0(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000103cb3808(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103c9e170; end: 103c9e20f;  */

/* WARNING: Possible PIC construction at 0x000103c9e1bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9e1cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9e1c0) */
/* WARNING: Removing unreachable block (ram,0x000103c9e1d0) */

void FUN_103c9e170(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff0f8 != -1) {
    func_0x000107c61568(0x112fff0f8,0x103c9e128);
  }
  uVar5 = uRam000000011380dfc8;
  uVar4 = uRam000000011380dfc0;
  uVar3 = uRam000000011380dfb8;
  uVar2 = uRam000000011380dfb0;
  uVar1 = uRam000000011380dfa8;
  *param_1 = uRam000000011380dfa0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103c9e210; end: 103c9e257;  */

void FUN_103c9e210(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc75bb0,0x2a,2);
  uRam000000011380dfd8 = uStack_38;
  uRam000000011380dfd0 = uStack_40;
  uRam000000011380dfe8 = uStack_28;
  uRam000000011380dfe0 = uStack_30;
  uRam000000011380dff8 = uStack_18;
  uRam000000011380dff0 = uStack_20;
  return;
}



/* Entry: 103c9e258; end: 103c9e2f7;  */

/* WARNING: Possible PIC construction at 0x000103c9e2a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9e2b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9e2a8) */
/* WARNING: Removing unreachable block (ram,0x000103c9e2b8) */

void FUN_103c9e258(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff100 != -1) {
    func_0x000107c61568(0x112fff100,FUN_103c9e210);
  }
  uVar5 = uRam000000011380dff8;
  uVar4 = uRam000000011380dff0;
  uVar3 = uRam000000011380dfe8;
  uVar2 = uRam000000011380dfe0;
  uVar1 = uRam000000011380dfd8;
  *param_1 = uRam000000011380dfd0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103c9e2f8; end: 103c9e33f;  */

void FUN_103c9e2f8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc75b70,0x36,2);
  uRam000000011380e008 = uStack_38;
  uRam000000011380e000 = uStack_40;
  uRam000000011380e018 = uStack_28;
  uRam000000011380e010 = uStack_30;
  uRam000000011380e028 = uStack_18;
  uRam000000011380e020 = uStack_20;
  return;
}



/* Entry: 103c9e340; end: 103c9e447;  */

/* WARNING: Removing unreachable block (ram,0x000103c9e444) */

void FUN_103c9e340(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_103ccc74c();
LAB_103c9e430:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x150))(unaff_x20 + 0x10,param_2,param_3);
      }
      else if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103cb72bc();
        goto LAB_103c9e430;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103c9e448; end: 103c9e52b;  */

void FUN_103c9e448(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000103cb72bc();
    (*pcVar4)(&lStack_50,1,&UNK_11072f668,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_103c9e52c(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 103c9e52c; end: 103c9e5bb;  */

void FUN_103c9e52c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_68 = *(long *)(param_1 + 0x48);
  if (lStack_68 != 1) {
    uStack_78 = *(undefined8 *)(param_1 + 0x38);
    uStack_80 = *(undefined8 *)(param_1 + 0x30);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103ccc74c();
    (*pcVar1)(&uStack_80,3,&UNK_11070cbc8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103c9e5bc; end: 103c9e613;  */

void FUN_103c9e5bc(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 1;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return;
}



/* Entry: 103c9e614; end: 103c9e643;  */

undefined1  [16] FUN_103c9e614(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 103c9e644; end: 103c9e677;  */

void FUN_103c9e644(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 103c9e678; end: 103c9e68b;  */

undefined1  [16] FUN_103c9e678(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x103c9e688;
  return auVar1;
}



/* Entry: 103c9e68c; end: 103c9e69f;  */

void FUN_103c9e68c(void)

{
  FUN_103c9e340();
  return;
}



/* Entry: 103c9e6a0; end: 103c9e6e7;  */

void FUN_103c9e6a0(void)

{
  FUN_103c9e448();
  return;
}



/* Entry: 103c9e6e8; end: 103c9e6eb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c9e6e8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103c9e6ec; end: 103c9e723;  */

uint FUN_103c9e6ec(long param_1,long param_2)

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
  func_0x000103ccba10();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 103c9e724; end: 103c9e78b;  */

uint FUN_103c9e724(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_103cb32d4(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103c9e78c; end: 103c9e82b;  */

/* WARNING: Possible PIC construction at 0x000103c9e7d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9e7e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9e7dc) */
/* WARNING: Removing unreachable block (ram,0x000103c9e7ec) */

void FUN_103c9e78c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff108 != -1) {
    func_0x000107c61568(0x112fff108,FUN_103c9e2f8);
  }
  uVar5 = uRam000000011380e028;
  uVar4 = uRam000000011380e020;
  uVar3 = uRam000000011380e018;
  uVar2 = uRam000000011380e010;
  uVar1 = uRam000000011380e008;
  *param_1 = uRam000000011380e000;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103c9e82c; end: 103c9e867;  */

void FUN_103c9e82c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000440;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000440,&UNK_10dc75000);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c9e868; end: 103c9e993;  */

void FUN_103c9e868(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c9e994; end: 103c9ea3f;  */

uint FUN_103c9e994(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_103cb32d4(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103c9ea40; end: 103c9eb13;  */

/* WARNING: Removing unreachable block (ram,0x000103c9eb10) */

void FUN_103c9ea40(undefined8 param_1,long param_2,long param_3)

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
        (**(code **)(param_3 + 0x150))(unaff_x20 + 0x10,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103cb723c();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103c9eb14; end: 103c9ebdf;  */

void FUN_103c9eb14(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  uVar3 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar1 = uVar3 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || ((**(code **)(param_3 + 0x70))(uVar3,uVar2,1,param_2,param_3), unaff_x21 == 0)
     ) {
    if (*unaff_x20 != 0) {
      uStack_48 = (undefined1)unaff_x20[1];
      pcVar4 = *(code **)(param_3 + 0x80);
      lStack_50 = *unaff_x20;
      func_0x000103cb723c();
      (*pcVar4)(&lStack_50,2,&UNK_11072f818,uVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 103c9ebe0; end: 103c9ec17;  */

undefined1  [16] FUN_103c9ebe0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b31d0;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 103c9ec18; end: 103c9ec3f;  */

void FUN_103c9ec18(void)

{
  FUN_103c9ea40();
  return;
}



/* Entry: 103c9ec40; end: 103c9ec77;  */

uint FUN_103c9ec40(long param_1,long param_2)

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
  func_0x000103ccb9d0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 103c9ec78; end: 103c9ecbf;  */

uint FUN_103c9ec78(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  func_0x000103cb3658(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103c9ecc0; end: 103c9ed5f;  */

/* WARNING: Possible PIC construction at 0x000103c9ed0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9ed1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9ed10) */
/* WARNING: Removing unreachable block (ram,0x000103c9ed20) */

void FUN_103c9ecc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff118 != -1) {
    func_0x000107c61568(0x112fff118,0x103c9e9f8);
  }
  uVar5 = uRam000000011380e058;
  uVar4 = uRam000000011380e050;
  uVar3 = uRam000000011380e048;
  uVar2 = uRam000000011380e040;
  uVar1 = uRam000000011380e038;
  *param_1 = uRam000000011380e030;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103c9ed60; end: 103c9ed73;  */

void FUN_103c9ed60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000430;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000430,&UNK_10dc74ff8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c9ed74; end: 103c9edab;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c9ed74(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103cbc560();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103c9edac; end: 103c9ee37;  */

uint FUN_103c9edac(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  func_0x000103cb3658(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103c9ee38; end: 103c9ee6f;  */

undefined1  [16] FUN_103c9ee38(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b3200;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 103c9ee70; end: 103c9eea7;  */

uint FUN_103c9ee70(long param_1,long param_2)

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
  func_0x000103ccb990();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 103c9eea8; end: 103c9ef47;  */

/* WARNING: Possible PIC construction at 0x000103c9eef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9ef04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9eef8) */
/* WARNING: Removing unreachable block (ram,0x000103c9ef08) */

void FUN_103c9eea8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff128 != -1) {
    func_0x000107c61568(0x112fff128,0x103c9edf0);
  }
  uVar5 = uRam000000011380e088;
  uVar4 = uRam000000011380e080;
  uVar3 = uRam000000011380e078;
  uVar2 = uRam000000011380e070;
  uVar1 = uRam000000011380e068;
  *param_1 = uRam000000011380e060;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103c9ef48; end: 103c9ef5b;  */

void FUN_103c9ef48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000420;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000420,&UNK_10dc74ff0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c9ef5c; end: 103c9ef93;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c9ef5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103cbc65c();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103c9ef94; end: 103c9efdb;  */

void FUN_103c9ef94(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc75193,9,2);
  uRam000000011380e098 = uStack_38;
  uRam000000011380e090 = uStack_40;
  uRam000000011380e0a8 = uStack_28;
  uRam000000011380e0a0 = uStack_30;
  uRam000000011380e0b8 = uStack_18;
  uRam000000011380e0b0 = uStack_20;
  return;
}



/* Entry: 103c9efdc; end: 103c9f013;  */

undefined1  [16] FUN_103c9efdc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b3230;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 103c9f014; end: 103c9f07f;  */

void FUN_103c9f014(void)

{
  FUN_103caaf90();
  return;
}



/* Entry: 103c9f080; end: 103c9f0b7;  */

uint FUN_103c9f080(long param_1,long param_2)

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
  func_0x000103ccb950();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 103c9f0b8; end: 103c9f0eb;  */

uint FUN_103c9f0b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_103cb66d0(uVar1,*(undefined1 *)(unaff_x20 + 1),unaff_x20[2],unaff_x20[3],*param_1,
                *(undefined1 *)(param_1 + 1),param_1[2],param_1[3]);
  return (uint)uVar1 & 1;
}



/* Entry: 103c9f0ec; end: 103c9f18b;  */

/* WARNING: Possible PIC construction at 0x000103c9f138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9f148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9f13c) */
/* WARNING: Removing unreachable block (ram,0x000103c9f14c) */

void FUN_103c9f0ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff138 != -1) {
    func_0x000107c61568(0x112fff138,FUN_103c9ef94);
  }
  uVar5 = uRam000000011380e0b8;
  uVar4 = uRam000000011380e0b0;
  uVar3 = uRam000000011380e0a8;
  uVar2 = uRam000000011380e0a0;
  uVar1 = uRam000000011380e098;
  *param_1 = uRam000000011380e090;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103c9f18c; end: 103c9f19f;  */

void FUN_103c9f18c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000410;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000410,&UNK_10dc74fe8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c9f1a0; end: 103c9f1d7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c9f1a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_103cbc758();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
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



/* Entry: 103c9f1d8; end: 103c9f253;  */

uint FUN_103c9f1d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_103cb66d0(uVar1,*(undefined1 *)(param_1 + 1),param_1[2],param_1[3],*param_2,
                *(undefined1 *)(param_2 + 1),param_2[2],param_2[3]);
  return (uint)uVar1 & 1;
}



/* Entry: 103c9f254; end: 103c9f2f3;  */

/* WARNING: Possible PIC construction at 0x000103c9f2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9f2b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9f2a4) */
/* WARNING: Removing unreachable block (ram,0x000103c9f2b4) */

void FUN_103c9f254(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff150 != -1) {
    func_0x000107c61568(0x112fff150,0x103c9f20c);
  }
  uVar5 = uRam000000011380e0e8;
  uVar4 = uRam000000011380e0e0;
  uVar3 = uRam000000011380e0d8;
  uVar2 = uRam000000011380e0d0;
  uVar1 = uRam000000011380e0c8;
  *param_1 = uRam000000011380e0c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103c9f2f4; end: 103c9f33b;  */

void FUN_103c9f2f4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc75a80,0x40,2);
  uRam000000011380e0f8 = uStack_38;
  uRam000000011380e0f0 = uStack_40;
  uRam000000011380e108 = uStack_28;
  uRam000000011380e100 = uStack_30;
  uRam000000011380e118 = uStack_18;
  uRam000000011380e110 = uStack_20;
  return;
}



/* Entry: 103c9f33c; end: 103c9f453;  */

/* WARNING: Removing unreachable block (ram,0x000103c9f444) */

void FUN_103c9f33c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) goto LAB_103c9f3b4;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_103c9f3a4:
        (*pcVar3)();
      }
      else {
        if (lVar1 != 3) {
          if (lVar1 == 4) {
            pcVar3 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 5) goto LAB_103c9f3b4;
            pcVar3 = *(code **)(param_3 + 0x150);
          }
          goto LAB_103c9f3a4;
        }
        pcVar3 = *(code **)(param_3 + 0x1a0);
        func_0x000103cb7c7c();
        (*pcVar3)(unaff_x20 + 0x30,&UNK_1106f8cc0,lVar1,param_2,param_3);
      }
LAB_103c9f3b4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103c9f454; end: 103c9f5a7;  */

void FUN_103c9f454(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  
  uVar2 = unaff_x20[1];
  uVar3 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar3 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[4];
    uVar1 = unaff_x20[5];
    uVar3 = uVar2 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar3 = uVar1 >> 0x38 & 0xf;
    }
    if ((uVar3 == 0) ||
       ((**(code **)(param_3 + 0x70))(uVar2,uVar1,2,param_2,param_3), unaff_x21 == 0)) {
      uVar3 = unaff_x20[6];
      if (*(long *)(uVar3 + 0x10) != 0) {
        pcVar4 = *(code **)(param_3 + 0x118);
        func_0x000103cb7c7c();
        (*pcVar4)(uVar3,3,&UNK_1106f8cc0,uVar2,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      uVar2 = unaff_x20[8];
      uVar3 = unaff_x20[7] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar3 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar3 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[7],uVar2,4,param_2,param_3), unaff_x21 == 0)) {
        uVar2 = unaff_x20[3];
        uVar3 = unaff_x20[2] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar3 = uVar2 >> 0x38 & 0xf;
        }
        if ((uVar3 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,5,param_2,param_3), unaff_x21 == 0)) {
          func_0x000100076224(param_1,unaff_x20[9],unaff_x20[10],param_2,param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 103c9f5a8; end: 103c9f60f;  */

void FUN_103c9f5a8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[7] = 0;
  param_1[8] = 0xe000000000000000;
  param_1[10] = 0xc000000000000000;
  param_1[9] = 0;
  return;
}



/* Entry: 103c9f610; end: 103c9f637;  */

void FUN_103c9f610(void)

{
  FUN_103c9f33c();
  return;
}



/* Entry: 103c9f638; end: 103c9f66f;  */

uint FUN_103c9f638(long param_1,long param_2)

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
  func_0x000103ccb910();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 103c9f670; end: 103c9f6d7;  */

uint FUN_103c9f670(undefined8 *param_1)

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
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
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
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_103cb57dc(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103c9f6d8; end: 103c9f777;  */

/* WARNING: Possible PIC construction at 0x000103c9f724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9f734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9f728) */
/* WARNING: Removing unreachable block (ram,0x000103c9f738) */

void FUN_103c9f6d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff158 != -1) {
    func_0x000107c61568(0x112fff158,FUN_103c9f2f4);
  }
  uVar5 = uRam000000011380e118;
  uVar4 = uRam000000011380e110;
  uVar3 = uRam000000011380e108;
  uVar2 = uRam000000011380e100;
  uVar1 = uRam000000011380e0f8;
  *param_1 = uRam000000011380e0f0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103c9f778; end: 103c9f78b;  */

void FUN_103c9f778(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000400;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000400,&UNK_10dc74fe0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c9f78c; end: 103c9f7bf;  */

void FUN_103c9f78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103c9f7c0; end: 103c9f8e3;  */

void FUN_103c9f7c0(undefined8 param_1,undefined8 param_2)

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
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c9f8e4; end: 103c9f993;  */

uint FUN_103c9f8e4(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
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
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_103cb57dc(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103c9f994; end: 103c9fa5f;  */

void FUN_103c9f994(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x60);
          goto LAB_103c9fa2c;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_103c9fa2c;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x60);
        }
        else {
          if (lVar1 != 4) goto LAB_103c9fa3c;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_103c9fa2c:
        (*pcVar3)();
      }
LAB_103c9fa3c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103c9fa60; end: 103c9fb43;  */

void FUN_103c9fa60(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *unaff_x20;
  long unaff_x21;
  
  if ((*unaff_x20 == 0) ||
     ((**(code **)(param_3 + 0x20))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[2];
    uVar1 = unaff_x20[1] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[1],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
       ((unaff_x20[3] == 0 ||
        ((**(code **)(param_3 + 0x20))(unaff_x20[3],3,param_2,param_3), unaff_x21 == 0)))) {
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,4,param_2,param_3), unaff_x21 == 0)) {
        func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 103c9fb44; end: 103c9fb9b;  */

void FUN_103c9fb44(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xe000000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 103c9fb9c; end: 103c9fbc3;  */

void FUN_103c9fb9c(void)

{
  FUN_103c9f994();
  return;
}



/* Entry: 103c9fbc4; end: 103c9fbfb;  */

uint FUN_103c9fbc4(long param_1,long param_2)

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
  func_0x000103ccb8d0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
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



/* Entry: 103c9fbfc; end: 103c9fc43;  */

uint FUN_103c9fbfc(undefined8 *param_1)

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
  FUN_103cb13b0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103c9fc44; end: 103c9fce3;  */

/* WARNING: Possible PIC construction at 0x000103c9fc90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9fca0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9fc94) */
/* WARNING: Removing unreachable block (ram,0x000103c9fca4) */

void FUN_103c9fc44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff170 != -1) {
    func_0x000107c61568(0x112fff170,0x103c9f94c);
  }
  uVar5 = uRam000000011380e148;
  uVar4 = uRam000000011380e140;
  uVar3 = uRam000000011380e138;
  uVar2 = uRam000000011380e130;
  uVar1 = uRam000000011380e128;
  *param_1 = uRam000000011380e120;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103c9fce4; end: 103c9fcf7;  */

void FUN_103c9fce4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130003f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130003f0,&UNK_10dc74fd8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c9fcf8; end: 103c9fdfb;  */

void FUN_103c9fcf8(undefined8 param_1,undefined8 param_2)

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
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c9fdfc; end: 103c9fe8b;  */

uint FUN_103c9fdfc(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103cb13b0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103c9fe8c; end: 103c9ff0f;  */

void FUN_103c9fe8c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 103c9ff10; end: 103c9ff97;  */

void FUN_103c9ff10(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long unaff_x21;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_7 + 0x70))(param_2,param_3,1,param_6,param_7), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 103c9ff98; end: 103c9ffcf;  */

undefined1  [16] FUN_103c9ff98(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b32c0;
  auVar1._0_8_ = 0xd000000000000035;
  return auVar1;
}


