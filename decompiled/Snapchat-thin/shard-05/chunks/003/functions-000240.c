/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d28290; end: 103d282a3;  */

void FUN_103d28290(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005ef8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005ef8,&UNK_10dc85d60);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d282a4; end: 103d282db;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d282a4(undefined8 *param_1,undefined8 param_2)

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
  FUN_103d44938();
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



/* Entry: 103d282dc; end: 103d2836b;  */

uint FUN_103d282dc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  func_0x000103d3ceb8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103d2836c; end: 103d2844f;  */

void FUN_103d2836c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x000103d42660();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_1107052f8;
LAB_103d283f4:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        FUN_103d44938();
        lVar2 = unaff_x20 + 200;
        puVar3 = &UNK_1107049c8;
        goto LAB_103d283f4;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d28450; end: 103d284c3;  */

void FUN_103d28450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103d284c4();
  if (unaff_x21 == 0) {
    FUN_103d285b8();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103d284c4; end: 103d285b7;  */

void FUN_103d284c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  
  uStack_78 = *(undefined8 *)(param_1 + 0x98);
  uStack_80 = *(undefined8 *)(param_1 + 0x90);
  uStack_68 = *(undefined8 *)(param_1 + 0xa8);
  uStack_70 = *(undefined8 *)(param_1 + 0xa0);
  uStack_58 = *(undefined8 *)(param_1 + 0xb8);
  uStack_60 = *(undefined8 *)(param_1 + 0xb0);
  uStack_50 = *(undefined8 *)(param_1 + 0xc0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_98 = *(undefined8 *)(param_1 + 0x78);
  uStack_a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_88 = *(undefined8 *)(param_1 + 0x88);
  uStack_90 = *(undefined8 *)(param_1 + 0x80);
  uStack_f8 = *(undefined8 *)(param_1 + 0x18);
  uStack_100 = *(undefined8 *)(param_1 + 0x10);
  uStack_e8 = *(undefined8 *)(param_1 + 0x28);
  uStack_f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_d8 = *(undefined8 *)(param_1 + 0x38);
  uStack_e0 = *(undefined8 *)(param_1 + 0x30);
  uStack_c8 = *(undefined8 *)(param_1 + 0x48);
  uStack_d0 = *(undefined8 *)(param_1 + 0x40);
  puVar1 = &uStack_100;
  func_0x000100d6dc90();
  if ((int)puVar1 != 1) {
    uStack_138 = uStack_78;
    uStack_140 = uStack_80;
    uStack_128 = uStack_68;
    uStack_130 = uStack_70;
    uStack_118 = uStack_58;
    uStack_120 = uStack_60;
    uStack_110 = uStack_50;
    uStack_178 = uStack_b8;
    uStack_180 = uStack_c0;
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_1b8 = uStack_f8;
    uStack_1c0 = uStack_100;
    uStack_1a8 = uStack_e8;
    uStack_1b0 = uStack_f0;
    uStack_198 = uStack_d8;
    uStack_1a0 = uStack_e0;
    uStack_188 = uStack_c8;
    uStack_190 = uStack_d0;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103d42660();
    (*pcVar2)(&uStack_1c0,1,&UNK_1107052f8,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d285b8; end: 103d2863f;  */

void FUN_103d285b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(ulong *)(param_1 + 200);
  if ((uStack_68 & 0xff) != 2) {
    uStack_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_60 = *(undefined8 *)(param_1 + 0xd0);
    uStack_48 = *(undefined8 *)(param_1 + 0xe8);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d44938();
    (*pcVar1)(&uStack_68,2,&UNK_1107049c8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d28640; end: 103d286cb;  */

void FUN_103d28640(undefined8 *param_1)

{
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
  
  func_0x000103d3c9ec(&uStack_d8);
  param_1[0x15] = uStack_40;
  param_1[0x14] = uStack_48;
  param_1[0x17] = uStack_30;
  param_1[0x16] = uStack_38;
  param_1[0xd] = uStack_80;
  param_1[0xc] = uStack_88;
  param_1[0xf] = uStack_70;
  param_1[0xe] = uStack_78;
  param_1[0x11] = uStack_60;
  param_1[0x10] = uStack_68;
  param_1[0x13] = uStack_50;
  param_1[0x12] = uStack_58;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = uStack_d0;
  param_1[2] = uStack_d8;
  param_1[5] = uStack_c0;
  param_1[4] = uStack_c8;
  param_1[7] = uStack_b0;
  param_1[6] = uStack_b8;
  param_1[9] = uStack_a0;
  param_1[8] = uStack_a8;
  param_1[0xb] = uStack_90;
  param_1[10] = uStack_98;
  param_1[0x18] = uStack_28;
  param_1[0x19] = 2;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  return;
}



/* Entry: 103d286cc; end: 103d286ef;  */

undefined1  [16] FUN_103d286cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b5c70;
  auVar1._0_8_ = 0xd00000000000003a;
  return auVar1;
}



/* Entry: 103d286f0; end: 103d2871f;  */

undefined1  [16] FUN_103d286f0(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103d28720; end: 103d28753;  */

void FUN_103d28720(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103d28754; end: 103d28767;  */

undefined8 FUN_103d28754(void)

{
  return 0x103d28764;
}



/* Entry: 103d28768; end: 103d2877b;  */

void FUN_103d28768(void)

{
  FUN_103d2836c();
  return;
}



/* Entry: 103d2877c; end: 103d287e3;  */

void FUN_103d2877c(void)

{
  FUN_103d28450();
  return;
}



/* Entry: 103d287e4; end: 103d287e7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d287e4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d287e8; end: 103d2881f;  */

uint FUN_103d287e8(long param_1,long param_2)

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
  func_0x000103d50bbc();
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



/* Entry: 103d28820; end: 103d288cf;  */

uint FUN_103d28820(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  uStack_48 = param_1[0x19];
  uStack_50 = param_1[0x18];
  uStack_38 = param_1[0x1b];
  uStack_40 = param_1[0x1a];
  uStack_28 = param_1[0x1d];
  uStack_30 = param_1[0x1c];
  uStack_88 = param_1[0x11];
  uStack_90 = param_1[0x10];
  uStack_78 = param_1[0x13];
  uStack_80 = param_1[0x12];
  uStack_68 = param_1[0x15];
  uStack_70 = param_1[0x14];
  uStack_58 = param_1[0x17];
  uStack_60 = param_1[0x16];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  uStack_b8 = param_1[0xb];
  uStack_c0 = param_1[10];
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_138 = unaff_x20[0x19];
  uStack_140 = unaff_x20[0x18];
  uStack_128 = unaff_x20[0x1b];
  uStack_130 = unaff_x20[0x1a];
  uStack_118 = unaff_x20[0x1d];
  uStack_120 = unaff_x20[0x1c];
  uStack_178 = unaff_x20[0x11];
  uStack_180 = unaff_x20[0x10];
  uStack_168 = unaff_x20[0x13];
  uStack_170 = unaff_x20[0x12];
  uStack_158 = unaff_x20[0x15];
  uStack_160 = unaff_x20[0x14];
  uStack_148 = unaff_x20[0x17];
  uStack_150 = unaff_x20[0x16];
  uStack_1b8 = unaff_x20[9];
  uStack_1c0 = unaff_x20[8];
  uStack_1a8 = unaff_x20[0xb];
  uStack_1b0 = unaff_x20[10];
  uStack_198 = unaff_x20[0xd];
  uStack_1a0 = unaff_x20[0xc];
  uStack_188 = unaff_x20[0xf];
  uStack_190 = unaff_x20[0xe];
  uStack_1f8 = unaff_x20[1];
  uStack_200 = *unaff_x20;
  uStack_1e8 = unaff_x20[3];
  uStack_1f0 = unaff_x20[2];
  uStack_1d8 = unaff_x20[5];
  uStack_1e0 = unaff_x20[4];
  uStack_1c8 = unaff_x20[7];
  uStack_1d0 = unaff_x20[6];
  FUN_103d41ba0(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 103d288d0; end: 103d2896f;  */

/* WARNING: Possible PIC construction at 0x000103d2891c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d2892c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d28920) */
/* WARNING: Removing unreachable block (ram,0x000103d28930) */

void FUN_103d288d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113004ef8 != -1) {
    func_0x000107c61568(0x113004ef8,0x103d28324);
  }
  uVar5 = uRam0000000113810158;
  uVar4 = uRam0000000113810150;
  uVar3 = uRam0000000113810148;
  uVar2 = uRam0000000113810140;
  uVar1 = uRam0000000113810138;
  *param_1 = uRam0000000113810130;
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



/* Entry: 103d28970; end: 103d289ab;  */

void FUN_103d28970(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005ee8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005ee8,&UNK_10dc85d58);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d289ac; end: 103d28b17;  */

void FUN_103d289ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_168 [72];
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
  
  uStack_58 = unaff_x20[0x19];
  uStack_60 = unaff_x20[0x18];
  uStack_48 = unaff_x20[0x1b];
  uStack_50 = unaff_x20[0x1a];
  uStack_38 = unaff_x20[0x1d];
  uStack_40 = unaff_x20[0x1c];
  uStack_98 = unaff_x20[0x11];
  uStack_a0 = unaff_x20[0x10];
  uStack_88 = unaff_x20[0x13];
  uStack_90 = unaff_x20[0x12];
  uStack_78 = unaff_x20[0x15];
  uStack_80 = unaff_x20[0x14];
  uStack_68 = unaff_x20[0x17];
  uStack_70 = unaff_x20[0x16];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  func_0x000107c6068c(auStack_168,0);
  func_0x000107c5fa50(auStack_168,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d28b18; end: 103d28bc7;  */

uint FUN_103d28b18(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_128 = param_1[0x1b];
  uStack_130 = param_1[0x1a];
  uStack_118 = param_1[0x1d];
  uStack_120 = param_1[0x1c];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_48 = param_2[0x19];
  uStack_50 = param_2[0x18];
  uStack_38 = param_2[0x1b];
  uStack_40 = param_2[0x1a];
  uStack_28 = param_2[0x1d];
  uStack_30 = param_2[0x1c];
  uStack_88 = param_2[0x11];
  uStack_90 = param_2[0x10];
  uStack_78 = param_2[0x13];
  uStack_80 = param_2[0x12];
  uStack_68 = param_2[0x15];
  uStack_70 = param_2[0x14];
  uStack_58 = param_2[0x17];
  uStack_60 = param_2[0x16];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_b8 = param_2[0xb];
  uStack_c0 = param_2[10];
  uStack_a8 = param_2[0xd];
  uStack_b0 = param_2[0xc];
  uStack_98 = param_2[0xf];
  uStack_a0 = param_2[0xe];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  FUN_103d41ba0(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 103d28bc8; end: 103d28c0f;  */

void FUN_103d28bc8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc86b60,0x33,2);
  uRam0000000113810168 = uStack_38;
  uRam0000000113810160 = uStack_40;
  uRam0000000113810178 = uStack_28;
  uRam0000000113810170 = uStack_30;
  uRam0000000113810188 = uStack_18;
  uRam0000000113810180 = uStack_20;
  return;
}



/* Entry: 103d28c10; end: 103d28c47;  */

undefined1  [16] FUN_103d28c10(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b5cb0;
  auVar1._0_8_ = 0xd000000000000029;
  return auVar1;
}



/* Entry: 103d28c48; end: 103d28c8f;  */

void FUN_103d28c48(void)

{
  FUN_103d2e62c();
  return;
}



/* Entry: 103d28c90; end: 103d28cc7;  */

uint FUN_103d28c90(long param_1,long param_2)

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
  func_0x000103d50b7c();
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



/* Entry: 103d28cc8; end: 103d28d1f;  */

uint FUN_103d28cc8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x000103d3fc04(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103d28d20; end: 103d28dbf;  */

/* WARNING: Possible PIC construction at 0x000103d28d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d28d7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d28d70) */
/* WARNING: Removing unreachable block (ram,0x000103d28d80) */

void FUN_103d28d20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113004f08 != -1) {
    func_0x000107c61568(0x113004f08,FUN_103d28bc8);
  }
  uVar5 = uRam0000000113810188;
  uVar4 = uRam0000000113810180;
  uVar3 = uRam0000000113810178;
  uVar2 = uRam0000000113810170;
  uVar1 = uRam0000000113810168;
  *param_1 = uRam0000000113810160;
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



/* Entry: 103d28dc0; end: 103d28dd3;  */

void FUN_103d28dc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005ed8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005ed8,&UNK_10dc85d50);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d28dd4; end: 103d28e0b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d28dd4(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103cd564c();
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



/* Entry: 103d28e0c; end: 103d28eab;  */

uint FUN_103d28e0c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x000103d3fc04(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103d28eac; end: 103d28ee3;  */

undefined1  [16] FUN_103d28eac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b5ce0;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 103d28ee4; end: 103d28f1b;  */

uint FUN_103d28ee4(long param_1,long param_2)

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
  func_0x000103d50b3c();
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



/* Entry: 103d28f1c; end: 103d28fbb;  */

/* WARNING: Possible PIC construction at 0x000103d28f68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d28f78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d28f6c) */
/* WARNING: Removing unreachable block (ram,0x000103d28f7c) */

void FUN_103d28f1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113004f18 != -1) {
    func_0x000107c61568(0x113004f18,0x103d28e64);
  }
  uVar5 = uRam00000001138101b8;
  uVar4 = uRam00000001138101b0;
  uVar3 = uRam00000001138101a8;
  uVar2 = uRam00000001138101a0;
  uVar1 = uRam0000000113810198;
  *param_1 = uRam0000000113810190;
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



/* Entry: 103d28fbc; end: 103d28fcf;  */

void FUN_103d28fbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005ec8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005ec8,&UNK_10dc85d48);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d28fd0; end: 103d29007;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d28fd0(undefined8 *param_1,undefined8 param_2)

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
  FUN_103cd58c8();
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



/* Entry: 103d29008; end: 103d2904f;  */

void FUN_103d29008(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc86b10,0x16,2);
  uRam00000001138101c8 = uStack_38;
  uRam00000001138101c0 = uStack_40;
  uRam00000001138101d8 = uStack_28;
  uRam00000001138101d0 = uStack_30;
  uRam00000001138101e8 = uStack_18;
  uRam00000001138101e0 = uStack_20;
  return;
}



/* Entry: 103d29050; end: 103d29087;  */

undefined1  [16] FUN_103d29050(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b5d10;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 103d29088; end: 103d290bf;  */

uint FUN_103d29088(long param_1,long param_2)

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
  func_0x000103d50afc();
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



/* Entry: 103d290c0; end: 103d2915f;  */

/* WARNING: Possible PIC construction at 0x000103d2910c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d2911c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d29110) */
/* WARNING: Removing unreachable block (ram,0x000103d29120) */

void FUN_103d290c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113004f28 != -1) {
    func_0x000107c61568(0x113004f28,FUN_103d29008);
  }
  uVar5 = uRam00000001138101e8;
  uVar4 = uRam00000001138101e0;
  uVar3 = uRam00000001138101d8;
  uVar2 = uRam00000001138101d0;
  uVar1 = uRam00000001138101c8;
  *param_1 = uRam00000001138101c0;
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



/* Entry: 103d29160; end: 103d29173;  */

void FUN_103d29160(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005eb8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005eb8,&UNK_10dc85d40);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d29174; end: 103d291ab;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d29174(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103cd5908();
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



/* Entry: 103d291ac; end: 103d291f3;  */

void FUN_103d291ac(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc86b10,0x16,2);
  uRam00000001138101f8 = uStack_38;
  uRam00000001138101f0 = uStack_40;
  uRam0000000113810208 = uStack_28;
  uRam0000000113810200 = uStack_30;
  uRam0000000113810218 = uStack_18;
  uRam0000000113810210 = uStack_20;
  return;
}



/* Entry: 103d291f4; end: 103d292a7;  */

void FUN_103d291f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x000103cb723c();
    (*pcVar2)(&lStack_50,1,&UNK_11072f818,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_103d296d4();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103d292a8; end: 103d292df;  */

undefined1  [16] FUN_103d292a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b5d40;
  auVar1._0_8_ = 0xd00000000000002a;
  return auVar1;
}



/* Entry: 103d292e0; end: 103d29317;  */

uint FUN_103d292e0(long param_1,long param_2)

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
  func_0x000103d50abc();
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



/* Entry: 103d29318; end: 103d293b7;  */

/* WARNING: Possible PIC construction at 0x000103d29364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d29374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d29368) */
/* WARNING: Removing unreachable block (ram,0x000103d29378) */

void FUN_103d29318(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113004f38 != -1) {
    func_0x000107c61568(0x113004f38,FUN_103d291ac);
  }
  uVar5 = uRam0000000113810218;
  uVar4 = uRam0000000113810210;
  uVar3 = uRam0000000113810208;
  uVar2 = uRam0000000113810200;
  uVar1 = uRam00000001138101f8;
  *param_1 = uRam00000001138101f0;
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



/* Entry: 103d293b8; end: 103d293cb;  */

void FUN_103d293b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005ea8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005ea8,&UNK_10dc85d38);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d293cc; end: 103d29403;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d293cc(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103cd568c();
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



/* Entry: 103d29404; end: 103d2944b;  */

void FUN_103d29404(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc86b30,0x29,2);
  uRam0000000113810228 = uStack_38;
  uRam0000000113810220 = uStack_40;
  uRam0000000113810238 = uStack_28;
  uRam0000000113810230 = uStack_30;
  uRam0000000113810248 = uStack_18;
  uRam0000000113810240 = uStack_20;
  return;
}



/* Entry: 103d2944c; end: 103d29483;  */

undefined1  [16] FUN_103d2944c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b5d70;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 103d29484; end: 103d294bb;  */

uint FUN_103d29484(long param_1,long param_2)

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
  func_0x000103d50a7c();
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



/* Entry: 103d294bc; end: 103d2955b;  */

/* WARNING: Possible PIC construction at 0x000103d29508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d29518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d2950c) */
/* WARNING: Removing unreachable block (ram,0x000103d2951c) */

void FUN_103d294bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113004f48 != -1) {
    func_0x000107c61568(0x113004f48,FUN_103d29404);
  }
  uVar5 = uRam0000000113810248;
  uVar4 = uRam0000000113810240;
  uVar3 = uRam0000000113810238;
  uVar2 = uRam0000000113810230;
  uVar1 = uRam0000000113810228;
  *param_1 = uRam0000000113810220;
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



/* Entry: 103d2955c; end: 103d2956f;  */

void FUN_103d2955c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005e98;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005e98,&UNK_10dc85d30);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d29570; end: 103d295a7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d29570(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103cd5c20();
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



/* Entry: 103d295a8; end: 103d295ef;  */

void FUN_103d295a8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc86b10,0x16,2);
  uRam0000000113810258 = uStack_38;
  uRam0000000113810250 = uStack_40;
  uRam0000000113810268 = uStack_28;
  uRam0000000113810260 = uStack_30;
  uRam0000000113810278 = uStack_18;
  uRam0000000113810270 = uStack_20;
  return;
}



/* Entry: 103d295f0; end: 103d296d3;  */

void FUN_103d295f0(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103cb723c();
LAB_103d29678:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000103d42394();
        goto LAB_103d29678;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103d296d4; end: 103d297b7;  */

void FUN_103d296d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
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
  
  uStack_78 = *(undefined8 *)(param_1 + 0xa8);
  uStack_80 = *(undefined8 *)(param_1 + 0xa0);
  uStack_68 = *(undefined8 *)(param_1 + 0xb8);
  uStack_70 = *(undefined8 *)(param_1 + 0xb0);
  uStack_58 = *(undefined8 *)(param_1 + 200);
  uStack_60 = *(undefined8 *)(param_1 + 0xc0);
  uStack_48 = *(undefined8 *)(param_1 + 0xd8);
  uStack_50 = *(undefined8 *)(param_1 + 0xd0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x68);
  uStack_c0 = *(undefined8 *)(param_1 + 0x60);
  uStack_a8 = *(undefined8 *)(param_1 + 0x78);
  uStack_b0 = *(undefined8 *)(param_1 + 0x70);
  uStack_98 = *(undefined8 *)(param_1 + 0x88);
  uStack_a0 = *(undefined8 *)(param_1 + 0x80);
  uStack_88 = *(undefined8 *)(param_1 + 0x98);
  uStack_90 = *(undefined8 *)(param_1 + 0x90);
  uStack_f8 = *(undefined8 *)(param_1 + 0x28);
  uStack_100 = *(undefined8 *)(param_1 + 0x20);
  uStack_e8 = *(undefined8 *)(param_1 + 0x38);
  uStack_f0 = *(undefined8 *)(param_1 + 0x30);
  uStack_d8 = *(undefined8 *)(param_1 + 0x48);
  uStack_e0 = *(undefined8 *)(param_1 + 0x40);
  uStack_c8 = *(undefined8 *)(param_1 + 0x58);
  uStack_d0 = *(undefined8 *)(param_1 + 0x50);
  puVar1 = &uStack_100;
  func_0x000100d6dc90();
  if ((int)puVar1 != 1) {
    uStack_138 = uStack_78;
    uStack_140 = uStack_80;
    uStack_128 = uStack_68;
    uStack_130 = uStack_70;
    uStack_118 = uStack_58;
    uStack_120 = uStack_60;
    uStack_108 = uStack_48;
    uStack_110 = uStack_50;
    uStack_178 = uStack_b8;
    uStack_180 = uStack_c0;
    uStack_168 = uStack_a8;
    uStack_170 = uStack_b0;
    uStack_158 = uStack_98;
    uStack_160 = uStack_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_1b8 = uStack_f8;
    uStack_1c0 = uStack_100;
    uStack_1a8 = uStack_e8;
    uStack_1b0 = uStack_f0;
    uStack_198 = uStack_d8;
    uStack_1a0 = uStack_e0;
    uStack_188 = uStack_c8;
    uStack_190 = uStack_d0;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103d42394();
    (*pcVar2)(&uStack_1c0,2,&UNK_110704f20,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d297b8; end: 103d2982b;  */

void FUN_103d297b8(undefined8 *param_1)

{
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
  
  func_0x000100d6dca8(&uStack_e0);
  param_1[0x17] = uStack_48;
  param_1[0x16] = uStack_50;
  param_1[0x19] = uStack_38;
  param_1[0x18] = uStack_40;
  param_1[0x1b] = uStack_28;
  param_1[0x1a] = uStack_30;
  param_1[0xf] = uStack_88;
  param_1[0xe] = uStack_90;
  param_1[0x11] = uStack_78;
  param_1[0x10] = uStack_80;
  param_1[0x13] = uStack_68;
  param_1[0x12] = uStack_70;
  param_1[0x15] = uStack_58;
  param_1[0x14] = uStack_60;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = uStack_d8;
  param_1[4] = uStack_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[9] = uStack_b8;
  param_1[8] = uStack_c0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[0xb] = uStack_a8;
  param_1[10] = uStack_b0;
  param_1[0xd] = uStack_98;
  param_1[0xc] = uStack_a0;
  return;
}



/* Entry: 103d2982c; end: 103d29863;  */

undefined1  [16] FUN_103d2982c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b5da0;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 103d29864; end: 103d2989b;  */

uint FUN_103d29864(long param_1,long param_2)

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
  func_0x000103d50a3c();
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



/* Entry: 103d2989c; end: 103d2993b;  */

/* WARNING: Possible PIC construction at 0x000103d298e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d298f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d298ec) */
/* WARNING: Removing unreachable block (ram,0x000103d298fc) */

void FUN_103d2989c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113004f58 != -1) {
    func_0x000107c61568(0x113004f58,FUN_103d295a8);
  }
  uVar5 = uRam0000000113810278;
  uVar4 = uRam0000000113810270;
  uVar3 = uRam0000000113810268;
  uVar2 = uRam0000000113810260;
  uVar1 = uRam0000000113810258;
  *param_1 = uRam0000000113810250;
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



/* Entry: 103d2993c; end: 103d2994f;  */

void FUN_103d2993c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005e88;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005e88,&UNK_10dc85d28);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d29950; end: 103d29983;  */

void FUN_103d29950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d29984; end: 103d29adf;  */

void FUN_103d29984(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_158 [72];
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
  
  uStack_68 = unaff_x20[0x15];
  uStack_70 = unaff_x20[0x14];
  uStack_58 = unaff_x20[0x17];
  uStack_60 = unaff_x20[0x16];
  uStack_48 = unaff_x20[0x19];
  uStack_50 = unaff_x20[0x18];
  uStack_38 = unaff_x20[0x1b];
  uStack_40 = unaff_x20[0x1a];
  uStack_a8 = unaff_x20[0xd];
  uStack_b0 = unaff_x20[0xc];
  uStack_98 = unaff_x20[0xf];
  uStack_a0 = unaff_x20[0xe];
  uStack_88 = unaff_x20[0x11];
  uStack_90 = unaff_x20[0x10];
  uStack_78 = unaff_x20[0x13];
  uStack_80 = unaff_x20[0x12];
  uStack_e8 = unaff_x20[5];
  uStack_f0 = unaff_x20[4];
  uStack_d8 = unaff_x20[7];
  uStack_e0 = unaff_x20[6];
  uStack_c8 = unaff_x20[9];
  uStack_d0 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  uStack_108 = unaff_x20[1];
  uStack_110 = *unaff_x20;
  uStack_f8 = unaff_x20[3];
  uStack_100 = unaff_x20[2];
  func_0x000107c6068c(auStack_158,0);
  func_0x000107c5fa50(auStack_158,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d29ae0; end: 103d29b27;  */

void FUN_103d29ae0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc86ad0,0x31,2);
  uRam0000000113810288 = uStack_38;
  uRam0000000113810280 = uStack_40;
  uRam0000000113810298 = uStack_28;
  uRam0000000113810290 = uStack_30;
  uRam00000001138102a8 = uStack_18;
  uRam00000001138102a0 = uStack_20;
  return;
}



/* Entry: 103d29b28; end: 103d29c0f;  */

/* WARNING: Removing unreachable block (ram,0x000103d29c0c) */

void FUN_103d29b28(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        (*pcVar3)(unaff_x20 + 0x20,&UNK_110790c80,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 1) goto LAB_103d29bb4;
          pcVar3 = *(code **)(param_3 + 0x60);
        }
        (*pcVar3)();
      }
LAB_103d29bb4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d29c10; end: 103d29cab;  */

void FUN_103d29c10(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if ((((*unaff_x20 == 0) ||
       ((**(code **)(param_3 + 0x20))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
      (((int)unaff_x20[1] == 0 ||
       ((**(code **)(param_3 + 0x18))((int)unaff_x20[1],2,param_2,param_3), unaff_x21 == 0)))) &&
     (FUN_103d29cac(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103d29cac; end: 103d29d2f;  */

void FUN_103d29cac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x28);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,3,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d29d30; end: 103d29d73;  */

void FUN_103d29d30(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}



/* Entry: 103d29d74; end: 103d29da3;  */

undefined1  [16] FUN_103d29d74(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103d29da4; end: 103d29dd7;  */

void FUN_103d29da4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103d29dd8; end: 103d29deb;  */

undefined1  [16] FUN_103d29dd8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103d29de8;
  return auVar1;
}



/* Entry: 103d29dec; end: 103d29dff;  */

void FUN_103d29dec(void)

{
  FUN_103d29b28();
  return;
}



/* Entry: 103d29e00; end: 103d29e37;  */

void FUN_103d29e00(void)

{
  FUN_103d29c10();
  return;
}



/* Entry: 103d29e38; end: 103d29e6f;  */

uint FUN_103d29e38(long param_1,long param_2)

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
  func_0x000103d509fc();
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



/* Entry: 103d29e70; end: 103d29eb7;  */

uint FUN_103d29e70(undefined8 *param_1)

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
  FUN_103d40df0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103d29eb8; end: 103d29f57;  */

/* WARNING: Possible PIC construction at 0x000103d29f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d29f14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d29f08) */
/* WARNING: Removing unreachable block (ram,0x000103d29f18) */

void FUN_103d29eb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113004f68 != -1) {
    func_0x000107c61568(0x113004f68,FUN_103d29ae0);
  }
  uVar5 = uRam00000001138102a8;
  uVar4 = uRam00000001138102a0;
  uVar3 = uRam0000000113810298;
  uVar2 = uRam0000000113810290;
  uVar1 = uRam0000000113810288;
  *param_1 = uRam0000000113810280;
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



/* Entry: 103d29f58; end: 103d29f6b;  */

void FUN_103d29f58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005e78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005e78,&UNK_10dc85d20);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d29f6c; end: 103d2a06f;  */

void FUN_103d29f6c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d2a070; end: 103d2a0ff;  */

uint FUN_103d2a070(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d40df0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103d2a100; end: 103d2a20f;  */

/* WARNING: Removing unreachable block (ram,0x000103d2a1c8) */
/* WARNING: Removing unreachable block (ram,0x000103d2a20c) */

void FUN_103d2a100(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar5 = *(code **)(param_3 + 0x198);
        FUN_103d44938();
        lVar2 = unaff_x20 + 0x20;
        puVar3 = &UNK_1107049c8;
LAB_103d2a1f8:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x1a0);
          func_0x000103d42394();
          lVar2 = unaff_x20 + 8;
          puVar3 = &UNK_110704f20;
          goto LAB_103d2a1f8;
        }
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x60))();
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d2a210; end: 103d2a2db;  */

void FUN_103d2a210(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *unaff_x20;
  if ((lVar1 == 0) || ((**(code **)(param_3 + 0x20))(lVar1,1,param_2,param_3), unaff_x21 == 0)) {
    lVar2 = unaff_x20[1];
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      func_0x000103d42394();
      (*pcVar3)(lVar2,2,&UNK_110704f20,lVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    FUN_103d2a2dc();
    if (unaff_x21 == 0) {
      func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103d2a2dc; end: 103d2a367;  */

void FUN_103d2a2dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(ulong *)(param_1 + 0x20);
  if ((uStack_68 & 0xff) != 2) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d44938();
    (*pcVar1)(&uStack_68,3,&UNK_1107049c8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d2a368; end: 103d2a3bb;  */

void FUN_103d2a368(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = 0;
  param_1[1] = puVar1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = 2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 103d2a3bc; end: 103d2a3eb;  */

undefined1  [16] FUN_103d2a3bc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103d2a3ec; end: 103d2a41f;  */

void FUN_103d2a3ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103d2a420; end: 103d2a433;  */

undefined1  [16] FUN_103d2a420(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103d2a430;
  return auVar1;
}



/* Entry: 103d2a434; end: 103d2a447;  */

void FUN_103d2a434(void)

{
  FUN_103d2a100();
  return;
}



/* Entry: 103d2a448; end: 103d2a487;  */

void FUN_103d2a448(void)

{
  FUN_103d2a210();
  return;
}



/* Entry: 103d2a488; end: 103d2a4bf;  */

uint FUN_103d2a488(long param_1,long param_2)

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
  func_0x000103d509bc();
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



/* Entry: 103d2a4c0; end: 103d2a517;  */

uint FUN_103d2a4c0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  func_0x000103d4104c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103d2a518; end: 103d2a5b7;  */

/* WARNING: Possible PIC construction at 0x000103d2a564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d2a574: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d2a568) */
/* WARNING: Removing unreachable block (ram,0x000103d2a578) */

void FUN_103d2a518(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113004f78 != -1) {
    func_0x000107c61568(0x113004f78,0x103d2a0b8);
  }
  uVar5 = uRam00000001138102d8;
  uVar4 = uRam00000001138102d0;
  uVar3 = uRam00000001138102c8;
  uVar2 = uRam00000001138102c0;
  uVar1 = uRam00000001138102b8;
  *param_1 = uRam00000001138102b0;
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



/* Entry: 103d2a5b8; end: 103d2a5cb;  */

void FUN_103d2a5b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005e68;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005e68,&UNK_10dc85d18);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d2a5cc; end: 103d2a6df;  */

void FUN_103d2a5cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d2a6e0; end: 103d2a77f;  */

uint FUN_103d2a6e0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  func_0x000103d4104c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103d2a780; end: 103d2a8e3;  */

/* WARNING: Removing unreachable block (ram,0x000103d2a8d4) */

void FUN_103d2a780(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x138);
        break;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x60);
        break;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x60);
        break;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103cb71fc();
        lVar2 = unaff_x20 + 0x48;
        puVar3 = &UNK_11072f6f8;
        goto code_r0x000103d2a8c0;
      case 8:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x150);
        break;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_103d45a9c();
        lVar2 = unaff_x20 + 0x88;
        puVar3 = &UNK_110705630;
code_r0x000103d2a8c0:
        (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
      default:
        goto LAB_103d2a808;
      }
      (*pcVar4)();
LAB_103d2a808:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103d2a8e4; end: 103d2aaef;  */

void FUN_103d2a8e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar3 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar3,1,param_2,param_3), unaff_x21 == 0)) {
    uVar3 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (((((uVar1 == 0) ||
          ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar3,2,param_2,param_3), unaff_x21 == 0)) &&
         (((char)unaff_x20[4] != '\x01' ||
          ((**(code **)(param_3 + 0x68))(1,3,param_2,param_3), unaff_x21 == 0)))) &&
        ((unaff_x20[5] == 0 ||
         ((**(code **)(param_3 + 0x20))(unaff_x20[5],4,param_2,param_3), unaff_x21 == 0)))) &&
       ((unaff_x20[6] == 0 ||
        ((**(code **)(param_3 + 0x20))(unaff_x20[6],5,param_2,param_3), unaff_x21 == 0)))) {
      uVar3 = unaff_x20[7];
      uVar2 = unaff_x20[8];
      uVar1 = uVar3 & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(uVar3,uVar2,6,param_2,param_3), unaff_x21 == 0)) {
        if (unaff_x20[9] != 0) {
          uStack_48 = (undefined1)unaff_x20[10];
          pcVar4 = *(code **)(param_3 + 0x80);
          uStack_50 = unaff_x20[9];
          func_0x000103cb71fc();
          (*pcVar4)(&uStack_50,7,&UNK_11072f6f8,uVar3,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        uVar3 = unaff_x20[0xc];
        uVar1 = unaff_x20[0xb] & 0xffffffffffff;
        if ((uVar3 & 0x2000000000000000) != 0) {
          uVar1 = uVar3 >> 0x38 & 0xf;
        }
        if ((uVar1 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[0xb],uVar3,8,param_2,param_3), unaff_x21 == 0))
        {
          uVar3 = unaff_x20[0xe];
          uVar1 = unaff_x20[0xd] & 0xffffffffffff;
          if ((uVar3 & 0x2000000000000000) != 0) {
            uVar1 = uVar3 >> 0x38 & 0xf;
          }
          if (((uVar1 == 0) ||
              ((**(code **)(param_3 + 0x70))(unaff_x20[0xd],uVar3,9,param_2,param_3), unaff_x21 == 0
              )) && (FUN_103d2aaf0(), unaff_x21 == 0)) {
            func_0x000100076224(param_1,unaff_x20[0xf],unaff_x20[0x10],param_2,param_3);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 103d2aaf0; end: 103d2ab7f;  */

void FUN_103d2aaf0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_70 = *(long *)(param_1 + 0x90);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x88);
    uStack_60 = *(undefined8 *)(param_1 + 0xa0);
    uStack_68 = *(undefined8 *)(param_1 + 0x98);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    uStack_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_48 = *(undefined8 *)(param_1 + 0xb8);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d45a9c();
    (*pcVar1)(&uStack_78,10,&UNK_110705630,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d2ab80; end: 103d2abf3;  */

void FUN_103d2ab80(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xe000000000000000;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0xe000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0xe000000000000000;
  param_1[0x10] = 0xc000000000000000;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  return;
}



/* Entry: 103d2abf4; end: 103d2ac23;  */

undefined1  [16] FUN_103d2abf4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x78);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  return auVar1;
}


