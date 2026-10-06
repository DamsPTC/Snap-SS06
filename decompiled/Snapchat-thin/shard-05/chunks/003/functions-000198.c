/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c92d9c; end: 103c92e1f;  */

void FUN_103c92d9c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)((long)param_1 + 100) = 0;
  param_1[0xe] = 0xc000000000000000;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0xf000000000000000;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0xf000000000000000;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0xf000000000000000;
  return;
}



/* Entry: 103c92e20; end: 103c92e4f;  */

undefined1  [16] FUN_103c92e20(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x68);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return auVar1;
}



/* Entry: 103c92e50; end: 103c92e83;  */

void FUN_103c92e50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  return;
}



/* Entry: 103c92e84; end: 103c92e97;  */

undefined1  [16] FUN_103c92e84(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x68;
  auVar1._0_8_ = 0x103c92e94;
  return auVar1;
}



/* Entry: 103c92e98; end: 103c92eab;  */

void FUN_103c92e98(void)

{
  FUN_103c92840();
  return;
}



/* Entry: 103c92eac; end: 103c92f13;  */

void FUN_103c92eac(void)

{
  FUN_103c929d4();
  return;
}



/* Entry: 103c92f14; end: 103c92f17;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c92f14(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103c92f18; end: 103c92f4f;  */

uint FUN_103c92f18(long param_1,long param_2)

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
  func_0x000103ccc050();
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



/* Entry: 103c92f50; end: 103c92fff;  */

uint FUN_103c92f50(undefined8 *param_1)

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
  FUN_103caf440(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 103c93000; end: 103c9309f;  */

/* WARNING: Possible PIC construction at 0x000103c9304c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9305c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c93050) */
/* WARNING: Removing unreachable block (ram,0x000103c93060) */

void FUN_103c93000(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffee90 != -1) {
    func_0x000107c61568(0x112ffee90,FUN_103c927f8);
  }
  uVar5 = uRam000000011380d9c8;
  uVar4 = uRam000000011380d9c0;
  uVar3 = uRam000000011380d9b8;
  uVar2 = uRam000000011380d9b0;
  uVar1 = uRam000000011380d9a8;
  *param_1 = uRam000000011380d9a0;
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



/* Entry: 103c930a0; end: 103c930db;  */

void FUN_103c930a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130005d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130005d0,&UNK_10dc750c8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c930dc; end: 103c93247;  */

void FUN_103c930dc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103c93248; end: 103c932f7;  */

uint FUN_103c93248(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103caf440(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 103c932f8; end: 103c9333f;  */

void FUN_103c932f8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc76630,0x32,2);
  uRam000000011380d9d8 = uStack_38;
  uRam000000011380d9d0 = uStack_40;
  uRam000000011380d9e8 = uStack_28;
  uRam000000011380d9e0 = uStack_30;
  uRam000000011380d9f8 = uStack_18;
  uRam000000011380d9f0 = uStack_20;
  return;
}



/* Entry: 103c93340; end: 103c93413;  */

/* WARNING: Removing unreachable block (ram,0x000103c93410) */

void FUN_103c93340(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x000103cb707c();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x138))(unaff_x20 + 8,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103c93414; end: 103c934db;  */

void FUN_103c93414(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_7 + 0x118);
    uVar1 = param_1;
    func_0x000103cb707c();
    (*pcVar2)(param_2,1,&UNK_1106f7820,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((param_3 & 1) == 0) || ((**(code **)(param_7 + 0x68))(1,2,param_6,param_7), unaff_x21 == 0))
  {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 103c934dc; end: 103c93513;  */

undefined1  [16] FUN_103c934dc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b2d00;
  auVar1._0_8_ = 0xd000000000000026;
  return auVar1;
}



/* Entry: 103c93514; end: 103c9354f;  */

void FUN_103c93514(void)

{
  FUN_103c93340();
  return;
}



/* Entry: 103c93550; end: 103c93587;  */

uint FUN_103c93550(long param_1,long param_2)

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
  func_0x000103ccc010();
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



/* Entry: 103c93588; end: 103c9360b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103c93588(undefined8 *param_1)

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
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
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
  
  bVar26 = *(byte *)(param_1 + 1);
  lVar23 = param_1[2];
  uVar16 = param_1[3];
  uVar12 = *unaff_x20;
  uVar20 = unaff_x20[1];
  pbVar9 = (byte *)unaff_x20[2];
  pbVar24 = (byte *)unaff_x20[3];
  func_0x000103cad6ec(uVar12,*param_1);
  if (((uVar12 & 1) == 0) || (((bVar26 ^ (byte)uVar20) & 1) != 0)) {
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
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar23 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar12 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar12 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar12) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
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
          unaff_x24 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar23,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar20 == 0);
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
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar23 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar23 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar24;
        if ((pbVar9 == pbVar15) && (pbVar24 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar23 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar23 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar23);
          func_0x000107c61174();
          pbVar9 = pbVar22;
          func_0x000107c60118();
          func_0x000107c61170(pbVar22);
          func_0x000107c61170(lVar23);
          pbVar22 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar22 & 1) == 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar24, pbVar14 = pbVar22, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar24 == *(byte **)(pbVar13 + 0x10) && pbVar22 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar23 = *(long *)(pbVar13 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar24;
        if ((pbVar9 != pbVar15) || (pbVar24 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar13 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar13 + 0x18),lVar23,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar23 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar13 + 0x20);
        lVar23 = *(long *)(pbVar13 + 0x18);
        bVar26 = pbVar13[8] | (byte)lVar23;
        bVar27 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar13[0x10] | (byte)lVar25;
        bVar35 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar25 = *(long *)(pbVar13 + 0x20);
      lVar23 = *(long *)(pbVar13 + 0x18);
      bVar26 = pbVar13[8] | (byte)lVar23;
      bVar27 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar13[0x10] | (byte)lVar25;
      bVar35 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
      lVar23 = CONCAT17(bVar33 | auVar42[7],
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar25 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
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



/* Entry: 103c9360c; end: 103c936ab;  */

/* WARNING: Possible PIC construction at 0x000103c93658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c93668: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9365c) */
/* WARNING: Removing unreachable block (ram,0x000103c9366c) */

void FUN_103c9360c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffeea8 != -1) {
    func_0x000107c61568(0x112ffeea8,FUN_103c932f8);
  }
  uVar5 = uRam000000011380d9f8;
  uVar4 = uRam000000011380d9f0;
  uVar3 = uRam000000011380d9e8;
  uVar2 = uRam000000011380d9e0;
  uVar1 = uRam000000011380d9d8;
  *param_1 = uRam000000011380d9d0;
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



/* Entry: 103c936ac; end: 103c936bf;  */

void FUN_103c936ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130005c0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130005c0,&UNK_10dc750c0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c936c0; end: 103c937d3;  */

void FUN_103c936c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = *(undefined1 *)(unaff_x20 + 1);
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c937d4; end: 103c93853;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103c937d4(ulong *param_1,undefined8 *param_2)

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
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
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
  
  uVar18 = *param_1;
  uVar20 = param_1[1];
  pbVar9 = (byte *)param_1[2];
  pbVar24 = (byte *)param_1[3];
  bVar26 = *(byte *)(param_2 + 1);
  lVar23 = param_2[2];
  uVar15 = param_2[3];
  func_0x000103cad6ec(uVar18,*param_2);
  if (((uVar18 & 1) == 0) || ((((byte)uVar20 ^ bVar26) & 1) != 0)) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar15 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar20 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar20 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar18 = uVar15 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar20 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar18 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar18) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar17 < 2) {
          if (uVar17 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
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
          unaff_x24 = pbVar24;
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
          if (uVar17 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar25;
          if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar24;
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
        unaff_x20 = (ulong)pbVar24 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,
                            uVar15);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar20 == 0);
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
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar23 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar16 = *(byte **)(pbVar12 + 0x10);
        lVar23 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 == pbVar14) && (pbVar24 == pbVar16)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        lVar23 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar23 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar23);
          func_0x000107c61174();
          pbVar9 = pbVar22;
          func_0x000107c60118();
          func_0x000107c61170(pbVar22);
          func_0x000107c61170(lVar23);
          pbVar22 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar22 & 1) == 0) {
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
      )(pbVar11,pbVar13,pbVar14,pbVar16,0);
      return pbVar11;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar16 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) &&
           (pbVar11 = pbVar24, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar16 = *(byte **)(pbVar12 + 0x18),
           pbVar24 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
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
      pbVar16 = *(byte **)(pbVar12 + 0x10);
      lVar23 = *(long *)(pbVar12 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar16 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 != pbVar14) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar12 + 0x18),lVar23,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar23 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar23 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar23;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar25;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
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
      lVar25 = *(long *)(pbVar12 + 0x20);
      lVar23 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar23;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar25;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
      lVar23 = CONCAT17(bVar33 | auVar42[7],
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
    lVar23 = *(long *)(pbVar12 + 8);
    uVar15 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103c93854; end: 103c9389b;  */

void FUN_103c93854(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc76610,0x13,2);
  uRam000000011380da08 = uStack_38;
  uRam000000011380da00 = uStack_40;
  uRam000000011380da18 = uStack_28;
  uRam000000011380da10 = uStack_30;
  uRam000000011380da28 = uStack_18;
  uRam000000011380da20 = uStack_20;
  return;
}



/* Entry: 103c9389c; end: 103c938d3;  */

undefined1  [16] FUN_103c9389c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b2d30;
  auVar1._0_8_ = 0xd000000000000023;
  return auVar1;
}



/* Entry: 103c938d4; end: 103c9391b;  */

void FUN_103c938d4(void)

{
  FUN_103ca8fbc();
  return;
}



/* Entry: 103c9391c; end: 103c93953;  */

uint FUN_103c9391c(long param_1,long param_2)

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
  func_0x000103ccbfd0();
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



/* Entry: 103c93954; end: 103c939f3;  */

/* WARNING: Possible PIC construction at 0x000103c939a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c939b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c939a4) */
/* WARNING: Removing unreachable block (ram,0x000103c939b4) */

void FUN_103c93954(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffeec0 != -1) {
    func_0x000107c61568(0x112ffeec0,FUN_103c93854);
  }
  uVar5 = uRam000000011380da28;
  uVar4 = uRam000000011380da20;
  uVar3 = uRam000000011380da18;
  uVar2 = uRam000000011380da10;
  uVar1 = uRam000000011380da08;
  *param_1 = uRam000000011380da00;
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



/* Entry: 103c939f4; end: 103c93a07;  */

void FUN_103c939f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130005b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130005b0,&UNK_10dc750b8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c93a08; end: 103c93a3f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c93a08(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103cb707c();
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



/* Entry: 103c93a40; end: 103c93a87;  */

void FUN_103c93a40(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc765e0,0x29,2);
  uRam000000011380da38 = uStack_38;
  uRam000000011380da30 = uStack_40;
  uRam000000011380da48 = uStack_28;
  uRam000000011380da40 = uStack_30;
  uRam000000011380da58 = uStack_18;
  uRam000000011380da50 = uStack_20;
  return;
}



/* Entry: 103c93a88; end: 103c93b27;  */

/* WARNING: Possible PIC construction at 0x000103c93ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c93ae4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c93ad8) */
/* WARNING: Removing unreachable block (ram,0x000103c93ae8) */

void FUN_103c93a88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffeed8 != -1) {
    func_0x000107c61568(0x112ffeed8,FUN_103c93a40);
  }
  uVar5 = uRam000000011380da58;
  uVar4 = uRam000000011380da50;
  uVar3 = uRam000000011380da48;
  uVar2 = uRam000000011380da40;
  uVar1 = uRam000000011380da38;
  *param_1 = uRam000000011380da30;
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



/* Entry: 103c93b28; end: 103c93b6f;  */

void FUN_103c93b28(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc765a0,0x3d,2);
  uRam000000011380da68 = uStack_38;
  uRam000000011380da60 = uStack_40;
  uRam000000011380da78 = uStack_28;
  uRam000000011380da70 = uStack_30;
  uRam000000011380da88 = uStack_18;
  uRam000000011380da80 = uStack_20;
  return;
}



/* Entry: 103c93b70; end: 103c93ea3;  */

void FUN_103c93b70(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  puVar4 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar4 = 0;
  func_0x000100d6b3f0(&uStack_338);
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 200) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_330;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_338;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_320;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0xe000000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_350,0,0);
  uStack_278 = *(undefined8 *)(param_1 + 0x38);
  uStack_280 = *(undefined8 *)(param_1 + 0x30);
  uStack_268 = *(undefined8 *)(param_1 + 0x48);
  uStack_270 = *(undefined8 *)(param_1 + 0x40);
  uStack_258 = *(undefined8 *)(param_1 + 0x58);
  uStack_260 = *(undefined8 *)(param_1 + 0x50);
  uStack_248 = *(undefined8 *)(param_1 + 0x68);
  uStack_250 = *(undefined8 *)(param_1 + 0x60);
  uStack_298 = *(undefined8 *)(param_1 + 0x18);
  uStack_2a0 = *(undefined8 *)(param_1 + 0x10);
  uStack_288 = *(undefined8 *)(param_1 + 0x28);
  uStack_290 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(puVar4,auStack_368,1,0);
  uStack_208 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_210 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_1f8 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_200 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_218 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_1e8 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_1f0 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_238 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_240 = *puVar4;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_298;
  *puVar4 = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_280;
  FUN_103ccc4d0(&uStack_2a0,&uStack_140,0x112ffe118,&UNK_10dc6e270);
  func_0x000103ccc92c(&uStack_240,0x112ffe118,&UNK_10dc6e270);
  func_0x000107c61428(param_1 + 0x70,auStack_380,0,0);
  uStack_178 = *(undefined8 *)(param_1 + 0xd8);
  uStack_180 = *(undefined8 *)(param_1 + 0xd0);
  uStack_168 = *(undefined8 *)(param_1 + 0xe8);
  uStack_170 = *(undefined8 *)(param_1 + 0xe0);
  uStack_158 = *(undefined8 *)(param_1 + 0xf8);
  uStack_160 = *(undefined8 *)(param_1 + 0xf0);
  uStack_150 = *(undefined8 *)(param_1 + 0x100);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x90);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_198 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_188 = *(undefined8 *)(param_1 + 200);
  uStack_190 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x78);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61428(unaff_x20 + 0x70,auStack_398,1,0);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 200);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 200) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_1d0;
  FUN_103ccc4d0(&uStack_1e0,&uStack_430,0x112ffe128,&UNK_10dc6e280);
  func_0x000103ccc92c(&uStack_140,0x112ffe128,&UNK_10dc6e280);
  func_0x000107c61428(param_1 + 0x108,auStack_448,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  func_0x000107c61428(unaff_x20 + 0x108,auStack_460,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x20 + 0x108) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x110) = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61428((undefined8 *)(param_1 + 0x118),auStack_478,0,0);
  uStack_78 = *(undefined8 *)(param_1 + 0x140);
  uStack_80 = *(undefined8 *)(param_1 + 0x138);
  uStack_68 = *(undefined8 *)(param_1 + 0x150);
  uStack_70 = *(undefined8 *)(param_1 + 0x148);
  uStack_60 = *(undefined8 *)(param_1 + 0x158);
  uStack_98 = *(undefined8 *)(param_1 + 0x120);
  uStack_a0 = *(undefined8 *)(param_1 + 0x118);
  uStack_88 = *(undefined8 *)(param_1 + 0x130);
  uStack_90 = *(undefined8 *)(param_1 + 0x128);
  FUN_103ccc4d0(&uStack_a0,&uStack_430,0x112ffe138,&UNK_10dc6e290);
  func_0x000107c61574(param_1);
  func_0x000107c61428(puVar1,auStack_490,1,0);
  uStack_408 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_410 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_3f8 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_400 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_3f0 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_428 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_430 = *puVar1;
  uStack_418 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_420 = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_98;
  *puVar1 = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_90;
  func_0x000103ccc92c(&uStack_430,0x112ffe138,&UNK_10dc6e290);
  return;
}



/* Entry: 103c93ea4; end: 103c93f27;  */

void FUN_103c93ea4(void)

{
  long unaff_x20;
  
  FUN_103ccaf7c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000103ccc92c(unaff_x20 + 0x70,0x112ffe128,&UNK_10dc6e280);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000103ccafe4(*(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                      *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                      *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                      *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                      *(undefined8 *)(unaff_x20 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c93f28; end: 103c9407b;  */

/* WARNING: Removing unreachable block (ram,0x000103c94028) */
/* WARNING: Removing unreachable block (ram,0x000103c94078) */
/* WARNING: Removing unreachable block (ram,0x000103c94054) */

void FUN_103c93f28(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  undefined1 auStack_68 [24];
  
  pcVar3 = *(code **)(param_4 + 0x10);
  lVar1 = param_3;
  lVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          FUN_103c9c158(param_2,param_1,param_3,param_4,FUN_103cbb230,&UNK_1106f7ac8);
        }
        else if (lVar1 == 2) {
          FUN_103c9407c(param_2,param_1,param_3,param_4);
        }
      }
      else if (lVar1 == 3) {
        func_0x000107c61428(param_1 + 0x108,auStack_68,0x21,0);
        (**(code **)(param_4 + 0x150))(param_1 + 0x108,param_3,param_4);
        func_0x000107c614a8(auStack_68);
      }
      else if (lVar1 == 4) {
        FUN_103c94110(param_2,param_1,param_3,param_4);
      }
      lVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103c9407c; end: 103c9410f;  */

void FUN_103c9407c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103cbcb08();
  (*pcVar2)(param_2 + 0x70,&UNK_1106f8dd0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103c94110; end: 103c941a3;  */

void FUN_103c94110(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x118;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103cbb038();
  (*pcVar2)(param_2 + 0x118,&UNK_1106f79b8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103c941a4; end: 103c9428b;  */

void FUN_103c941a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  FUN_103c9428c();
  if (unaff_x21 == 0) {
    FUN_103c94340(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x108,auStack_68,0,0);
    uVar2 = *(ulong *)(param_1 + 0x108);
    uVar3 = *(ulong *)(param_1 + 0x110);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar4 = *(code **)(param_4 + 0x70);
      func_0x000107c61434(uVar3);
      (*pcVar4)(uVar2,uVar3,3,param_3,param_4);
      func_0x000107c6142c(uVar3);
    }
    FUN_103c9446c(param_1,param_2,param_3,param_4);
  }
  return;
}



/* Entry: 103c9428c; end: 103c9433f;  */

void FUN_103c9428c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_a8 = *(long *)(param_1 + 0x28);
  if (lStack_a8 != 0) {
    uStack_b8 = *(undefined8 *)(param_1 + 0x18);
    uStack_c0 = *(undefined8 *)(param_1 + 0x10);
    uStack_b0 = *(undefined8 *)(param_1 + 0x20);
    uStack_98 = *(undefined8 *)(param_1 + 0x38);
    uStack_a0 = *(undefined8 *)(param_1 + 0x30);
    uStack_88 = *(undefined8 *)(param_1 + 0x48);
    uStack_90 = *(undefined8 *)(param_1 + 0x40);
    uStack_78 = *(undefined8 *)(param_1 + 0x58);
    uStack_80 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103cbb230();
    (*pcVar2)(&uStack_c0,1,&UNK_1106f7ac8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103c94340; end: 103c9446b;  */

void FUN_103c94340(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined1 auStack_198 [24];
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
  
  func_0x000107c61428(param_1 + 0x70,auStack_198,0,0);
  uStack_78 = *(undefined8 *)(param_1 + 0xd8);
  uStack_80 = *(undefined8 *)(param_1 + 0xd0);
  uStack_108 = *(undefined8 *)(param_1 + 0xe8);
  uStack_110 = *(undefined8 *)(param_1 + 0xe0);
  uStack_88 = *(undefined8 *)(param_1 + 200);
  uStack_90 = *(undefined8 *)(param_1 + 0xc0);
  uStack_118 = *(undefined8 *)(param_1 + 0xd8);
  uStack_120 = *(undefined8 *)(param_1 + 0xd0);
  uStack_68 = *(undefined8 *)(param_1 + 0xe8);
  uStack_70 = *(undefined8 *)(param_1 + 0xe0);
  uStack_f8 = *(undefined8 *)(param_1 + 0xf8);
  uStack_100 = *(undefined8 *)(param_1 + 0xf0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x98);
  uStack_c0 = *(undefined8 *)(param_1 + 0x90);
  uStack_148 = *(undefined8 *)(param_1 + 0xa8);
  uStack_150 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c8 = *(undefined8 *)(param_1 + 0x88);
  uStack_d0 = *(undefined8 *)(param_1 + 0x80);
  uStack_158 = *(undefined8 *)(param_1 + 0x98);
  uStack_160 = *(undefined8 *)(param_1 + 0x90);
  uStack_a8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_138 = *(undefined8 *)(param_1 + 0xb8);
  uStack_140 = *(undefined8 *)(param_1 + 0xb0);
  uStack_98 = *(undefined8 *)(param_1 + 0xb8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_128 = *(undefined8 *)(param_1 + 200);
  uStack_130 = *(undefined8 *)(param_1 + 0xc0);
  uStack_178 = *(undefined8 *)(param_1 + 0x78);
  uStack_180 = *(undefined8 *)(param_1 + 0x70);
  uStack_168 = *(undefined8 *)(param_1 + 0x88);
  uStack_170 = *(undefined8 *)(param_1 + 0x80);
  uStack_d8 = *(undefined8 *)(param_1 + 0x78);
  uStack_e0 = *(undefined8 *)(param_1 + 0x70);
  uStack_58 = *(undefined8 *)(param_1 + 0xf8);
  uStack_60 = *(undefined8 *)(param_1 + 0xf0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x100);
  uStack_50 = *(undefined8 *)(param_1 + 0x100);
  puVar1 = &uStack_180;
  func_0x000100d6b3c0();
  if ((int)puVar1 != 1) {
    uStack_1c8 = uStack_78;
    uStack_1d0 = uStack_80;
    uStack_1b8 = uStack_68;
    uStack_1c0 = uStack_70;
    uStack_1a8 = uStack_58;
    uStack_1b0 = uStack_60;
    uStack_1a0 = uStack_50;
    uStack_208 = uStack_b8;
    uStack_210 = uStack_c0;
    uStack_1f8 = uStack_a8;
    uStack_200 = uStack_b0;
    uStack_1e8 = uStack_98;
    uStack_1f0 = uStack_a0;
    uStack_1d8 = uStack_88;
    uStack_1e0 = uStack_90;
    uStack_228 = uStack_d8;
    uStack_230 = uStack_e0;
    uStack_218 = uStack_c8;
    uStack_220 = uStack_d0;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103cbcb08();
    (*pcVar2)(&uStack_230,2,&UNK_1106f8dd0,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103c9446c; end: 103c94523;  */

void FUN_103c9446c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x118);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  lStack_90 = *(long *)(param_1 + 0x128);
  if (lStack_90 != 0) {
    uStack_98 = *(undefined8 *)(param_1 + 0x120);
    uStack_a0 = *puVar1;
    uStack_80 = *(undefined8 *)(param_1 + 0x138);
    uStack_88 = *(undefined8 *)(param_1 + 0x130);
    uStack_70 = *(undefined8 *)(param_1 + 0x148);
    uStack_78 = *(undefined8 *)(param_1 + 0x140);
    uStack_60 = *(undefined8 *)(param_1 + 0x158);
    uStack_68 = *(undefined8 *)(param_1 + 0x150);
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_103cbb038();
    (*pcVar3)(&uStack_a0,4,&UNK_1106f79b8,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 103c94524; end: 103c94e0f;  */

undefined8 FUN_103c94524(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_830;
  undefined8 uStack_828;
  long lStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  long lStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined1 auStack_798 [72];
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined1 auStack_700 [24];
  undefined1 auStack_6e8 [24];
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  long lStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined1 auStack_688 [24];
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  long lStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_540;
  undefined8 uStack_538;
  long lStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  long lStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  long lStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
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
  long lStack_f8;
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
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61428(param_1 + 0x10,auStack_288,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_2a0,0,0);
  uStack_518 = *(undefined8 *)(param_1 + 0x38);
  uStack_520 = *(undefined8 *)(param_1 + 0x30);
  uStack_508 = *(undefined8 *)(param_1 + 0x48);
  uStack_510 = *(undefined8 *)(param_1 + 0x40);
  uStack_4f8 = *(undefined8 *)(param_1 + 0x58);
  uStack_500 = *(undefined8 *)(param_1 + 0x50);
  lStack_4e8 = *(undefined8 *)(param_1 + 0x68);
  uStack_4f0 = *(undefined8 *)(param_1 + 0x60);
  uStack_538 = *(undefined8 *)(param_1 + 0x18);
  uStack_540 = *(undefined8 *)(param_1 + 0x10);
  lStack_528 = *(long *)(param_1 + 0x28);
  lStack_530 = *(undefined8 *)(param_1 + 0x20);
  uStack_5c8 = *(undefined8 *)(param_2 + 0x58);
  uStack_5d0 = *(undefined8 *)(param_2 + 0x50);
  uStack_5b8 = *(undefined8 *)(param_2 + 0x68);
  uStack_5c0 = *(undefined8 *)(param_2 + 0x60);
  uStack_5e8 = *(undefined8 *)(param_2 + 0x38);
  uStack_5f0 = *(undefined8 *)(param_2 + 0x30);
  uStack_5d8 = *(undefined8 *)(param_2 + 0x48);
  uStack_5e0 = *(undefined8 *)(param_2 + 0x40);
  uStack_608 = *(undefined8 *)(param_2 + 0x18);
  uStack_610 = *(undefined8 *)(param_2 + 0x10);
  lStack_5f8 = *(long *)(param_2 + 0x28);
  uStack_600 = *(undefined8 *)(param_2 + 0x20);
  uStack_4e0 = uStack_610;
  uStack_4d8 = uStack_608;
  uStack_4d0 = uStack_600;
  lStack_4c8 = lStack_5f8;
  uStack_4c0 = uStack_5f0;
  uStack_4b8 = uStack_5e8;
  uStack_4b0 = uStack_5e0;
  uStack_4a8 = uStack_5d8;
  uStack_4a0 = uStack_5d0;
  uStack_498 = uStack_5c8;
  uStack_490 = uStack_5c0;
  uStack_488 = uStack_5b8;
  uStack_110 = uStack_540;
  uStack_108 = uStack_538;
  uStack_100 = lStack_530;
  lStack_f8 = lStack_528;
  uStack_f0 = uStack_520;
  uStack_e8 = uStack_518;
  uStack_e0 = uStack_510;
  uStack_d8 = uStack_508;
  uStack_d0 = uStack_500;
  uStack_c8 = uStack_4f8;
  uStack_c0 = uStack_4f0;
  uStack_b8 = lStack_4e8;
  uStack_b0 = uStack_610;
  uStack_a8 = uStack_608;
  uStack_a0 = uStack_600;
  lStack_98 = lStack_5f8;
  uStack_90 = uStack_5f0;
  uStack_88 = uStack_5e8;
  uStack_80 = uStack_5e0;
  uStack_78 = uStack_5d8;
  uStack_70 = uStack_5d0;
  uStack_68 = uStack_5c8;
  uStack_60 = uStack_5c0;
  uStack_58 = uStack_5b8;
  if (lStack_528 == 0) {
    if (lStack_5f8 != 0) goto LAB_103c946a8;
    uStack_648 = *(undefined8 *)(param_1 + 0x38);
    uStack_650 = *(undefined8 *)(param_1 + 0x30);
    uStack_638 = *(undefined8 *)(param_1 + 0x48);
    uStack_640 = *(undefined8 *)(param_1 + 0x40);
    uStack_628 = *(undefined8 *)(param_1 + 0x58);
    uStack_630 = *(undefined8 *)(param_1 + 0x50);
    uStack_618 = *(undefined8 *)(param_1 + 0x68);
    uStack_620 = *(undefined8 *)(param_1 + 0x60);
    uStack_668 = *(undefined8 *)(param_1 + 0x18);
    uStack_670 = *(undefined8 *)(param_1 + 0x10);
    lStack_658 = *(undefined8 *)(param_1 + 0x28);
    uStack_660 = *(undefined8 *)(param_1 + 0x20);
    FUN_103ccc4d0(&uStack_110,&uStack_270,0x112ffe118,&UNK_10dc6e270);
    FUN_103ccc4d0(&uStack_b0,&uStack_270,0x112ffe118,&UNK_10dc6e270);
    func_0x000103ccc92c(&uStack_670,0x112ffe118,&UNK_10dc6e270);
  }
  else {
    if (lStack_5f8 == 0) {
LAB_103c946a8:
      uStack_670 = uStack_540;
      uStack_668 = uStack_538;
      uStack_660 = lStack_530;
      lStack_658 = lStack_528;
      uStack_650 = uStack_520;
      uStack_648 = uStack_518;
      uStack_640 = uStack_510;
      uStack_638 = uStack_508;
      uStack_630 = uStack_500;
      uStack_628 = uStack_4f8;
      uStack_620 = uStack_4f0;
      uStack_618 = lStack_4e8;
      FUN_103ccc4d0(&uStack_110,&uStack_270,0x112ffe118,&UNK_10dc6e270);
      FUN_103ccc4d0(&uStack_b0,&uStack_270,0x112ffe118,&UNK_10dc6e270);
      func_0x000103ccc92c(&uStack_670,0x112ffe120,&UNK_10dc6e278);
      return 0;
    }
    uStack_648 = *(undefined8 *)(param_2 + 0x38);
    uStack_650 = *(undefined8 *)(param_2 + 0x30);
    uStack_638 = *(undefined8 *)(param_2 + 0x48);
    uStack_640 = *(undefined8 *)(param_2 + 0x40);
    uStack_628 = *(undefined8 *)(param_2 + 0x58);
    uStack_630 = *(undefined8 *)(param_2 + 0x50);
    uStack_618 = *(undefined8 *)(param_2 + 0x68);
    uStack_620 = *(undefined8 *)(param_2 + 0x60);
    uStack_668 = *(undefined8 *)(param_2 + 0x18);
    uStack_670 = *(undefined8 *)(param_2 + 0x10);
    lStack_658 = *(undefined8 *)(param_2 + 0x28);
    uStack_660 = *(undefined8 *)(param_2 + 0x20);
    uStack_1a8 = *(undefined8 *)(param_1 + 0x38);
    uStack_1b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_198 = *(undefined8 *)(param_1 + 0x48);
    uStack_1a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_188 = *(undefined8 *)(param_1 + 0x58);
    uStack_190 = *(undefined8 *)(param_1 + 0x50);
    uStack_178 = *(undefined8 *)(param_1 + 0x68);
    uStack_180 = *(undefined8 *)(param_1 + 0x60);
    uStack_1c8 = *(undefined8 *)(param_1 + 0x18);
    uStack_1d0 = *(undefined8 *)(param_1 + 0x10);
    uStack_1b8 = *(undefined8 *)(param_1 + 0x28);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x20);
    uStack_170 = uStack_670;
    uStack_168 = uStack_668;
    uStack_160 = uStack_660;
    uStack_158 = lStack_658;
    uStack_150 = uStack_650;
    uStack_148 = uStack_648;
    uStack_140 = uStack_640;
    uStack_138 = uStack_638;
    uStack_130 = uStack_630;
    uStack_128 = uStack_628;
    uStack_120 = uStack_620;
    uStack_118 = uStack_618;
    FUN_103ccc4d0(&uStack_110,&uStack_270,0x112ffe118,&UNK_10dc6e270);
    FUN_103ccc4d0(&uStack_b0,&uStack_270,0x112ffe118,&UNK_10dc6e270);
    puVar4 = &uStack_1d0;
    func_0x000103caeaf0(puVar4,&uStack_170);
    func_0x000103ccc92c(&uStack_670,0x112ffe118,&UNK_10dc6e270);
    func_0x000103ccc92c(&uStack_540,0x112ffe118,&UNK_10dc6e270);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x70,auStack_3f8,0,0);
  func_0x000107c61428(param_2 + 0x70,auStack_410,0,0);
  iVar3 = (int)&uStack_4a8;
  uStack_4d8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_4e0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_368 = *(undefined8 *)(param_1 + 0xe8);
  uStack_370 = *(undefined8 *)(param_1 + 0xe0);
  lStack_4e8 = *(undefined8 *)(param_1 + 200);
  uStack_4f0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_378 = *(undefined8 *)(param_1 + 0xd8);
  uStack_380 = *(undefined8 *)(param_1 + 0xd0);
  lStack_4c8 = *(undefined8 *)(param_1 + 0xe8);
  uStack_4d0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_358 = *(undefined8 *)(param_1 + 0xf8);
  uStack_360 = *(undefined8 *)(param_1 + 0xf0);
  uStack_518 = *(undefined8 *)(param_1 + 0x98);
  uStack_520 = *(undefined8 *)(param_1 + 0x90);
  uStack_3a8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_3b0 = *(undefined8 *)(param_1 + 0xa0);
  lStack_528 = *(undefined8 *)(param_1 + 0x88);
  lStack_530 = *(undefined8 *)(param_1 + 0x80);
  uStack_3b8 = *(undefined8 *)(param_1 + 0x98);
  uStack_3c0 = *(undefined8 *)(param_1 + 0x90);
  uStack_508 = *(undefined8 *)(param_1 + 0xa8);
  uStack_510 = *(undefined8 *)(param_1 + 0xa0);
  uStack_398 = *(undefined8 *)(param_1 + 0xb8);
  uStack_3a0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_4f8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_500 = *(undefined8 *)(param_1 + 0xb0);
  uStack_388 = *(undefined8 *)(param_1 + 200);
  uStack_390 = *(undefined8 *)(param_1 + 0xc0);
  uStack_3d8 = *(undefined8 *)(param_1 + 0x78);
  uStack_3e0 = *(undefined8 *)(param_1 + 0x70);
  uStack_3c8 = *(undefined8 *)(param_1 + 0x88);
  uStack_3d0 = *(undefined8 *)(param_1 + 0x80);
  uStack_538 = *(undefined8 *)(param_1 + 0x78);
  uStack_540 = *(undefined8 *)(param_1 + 0x70);
  uStack_4b8 = *(undefined8 *)(param_1 + 0xf8);
  uStack_4c0 = *(undefined8 *)(param_1 + 0xf0);
  uStack_440 = *(undefined8 *)(param_2 + 0xd8);
  uStack_448 = *(undefined8 *)(param_2 + 0xd0);
  uStack_2c8 = *(undefined8 *)(param_2 + 0xe8);
  uStack_2d0 = *(undefined8 *)(param_2 + 0xe0);
  uStack_450 = *(undefined8 *)(param_2 + 200);
  uStack_458 = *(undefined8 *)(param_2 + 0xc0);
  uStack_2d8 = *(undefined8 *)(param_2 + 0xd8);
  uStack_2e0 = *(undefined8 *)(param_2 + 0xd0);
  uStack_430 = *(undefined8 *)(param_2 + 0xe8);
  uStack_438 = *(undefined8 *)(param_2 + 0xe0);
  uStack_2b8 = *(undefined8 *)(param_2 + 0xf8);
  uStack_2c0 = *(undefined8 *)(param_2 + 0xf0);
  uStack_480 = *(undefined8 *)(param_2 + 0x98);
  uStack_488 = *(undefined8 *)(param_2 + 0x90);
  uStack_308 = *(undefined8 *)(param_2 + 0xa8);
  uStack_310 = *(undefined8 *)(param_2 + 0xa0);
  uStack_490 = *(undefined8 *)(param_2 + 0x88);
  uStack_498 = *(undefined8 *)(param_2 + 0x80);
  uStack_318 = *(undefined8 *)(param_2 + 0x98);
  uStack_320 = *(undefined8 *)(param_2 + 0x90);
  uStack_470 = *(undefined8 *)(param_2 + 0xa8);
  uStack_478 = *(undefined8 *)(param_2 + 0xa0);
  uStack_2f8 = *(undefined8 *)(param_2 + 0xb8);
  uStack_300 = *(undefined8 *)(param_2 + 0xb0);
  uStack_460 = *(undefined8 *)(param_2 + 0xb8);
  uStack_468 = *(undefined8 *)(param_2 + 0xb0);
  uStack_2e8 = *(undefined8 *)(param_2 + 200);
  uStack_2f0 = *(undefined8 *)(param_2 + 0xc0);
  uStack_338 = *(undefined8 *)(param_2 + 0x78);
  uStack_340 = *(undefined8 *)(param_2 + 0x70);
  uStack_328 = *(undefined8 *)(param_2 + 0x88);
  uStack_330 = *(undefined8 *)(param_2 + 0x80);
  uStack_4a0 = *(undefined8 *)(param_2 + 0x78);
  uStack_4a8 = *(undefined8 *)(param_2 + 0x70);
  uStack_420 = *(undefined8 *)(param_2 + 0xf8);
  uStack_428 = *(undefined8 *)(param_2 + 0xf0);
  uStack_350 = *(undefined8 *)(param_1 + 0x100);
  uStack_4b0 = *(undefined8 *)(param_1 + 0x100);
  uStack_2b0 = *(undefined8 *)(param_2 + 0x100);
  uStack_418 = *(undefined8 *)(param_2 + 0x100);
  iVar2 = (int)&uStack_540;
  func_0x000100d6b3c0();
  if (iVar2 == 1) {
    func_0x000100d6b3c0();
    if (iVar3 != 1) {
LAB_103c949d4:
      func_0x000107c610b4(&uStack_670,&uStack_540,0x130);
      FUN_103ccc4d0(&uStack_3e0,&uStack_270,0x112ffe128,&UNK_10dc6e280);
      FUN_103ccc4d0(&uStack_340,&uStack_270,0x112ffe128,&UNK_10dc6e280);
      func_0x000103ccc92c(&uStack_670,0x112ffe130,&UNK_10dc6e288);
      return 0;
    }
    uStack_608 = uStack_4d8;
    uStack_610 = uStack_4e0;
    lStack_5f8 = lStack_4c8;
    uStack_600 = uStack_4d0;
    uStack_5e8 = uStack_4b8;
    uStack_5f0 = uStack_4c0;
    uStack_5e0 = uStack_4b0;
    uStack_648 = uStack_518;
    uStack_650 = uStack_520;
    uStack_638 = uStack_508;
    uStack_640 = uStack_510;
    uStack_628 = uStack_4f8;
    uStack_630 = uStack_500;
    uStack_618 = lStack_4e8;
    uStack_620 = uStack_4f0;
    uStack_668 = uStack_538;
    uStack_670 = uStack_540;
    lStack_658 = lStack_528;
    uStack_660 = lStack_530;
    FUN_103ccc4d0(&uStack_3e0,&uStack_270,0x112ffe128,&UNK_10dc6e280);
    FUN_103ccc4d0(&uStack_340,&uStack_270,0x112ffe128,&UNK_10dc6e280);
    func_0x000103ccc92c(&uStack_670,0x112ffe128,&UNK_10dc6e280);
  }
  else {
    uStack_7c8 = uStack_4d8;
    uStack_7d0 = uStack_4e0;
    uStack_7b8 = lStack_4c8;
    uStack_7c0 = uStack_4d0;
    uStack_7a8 = uStack_4b8;
    uStack_7b0 = uStack_4c0;
    uStack_7a0 = uStack_4b0;
    uStack_808 = uStack_518;
    uStack_810 = uStack_520;
    uStack_7f8 = uStack_508;
    uStack_800 = uStack_510;
    uStack_7e8 = uStack_4f8;
    uStack_7f0 = uStack_500;
    lStack_7d8 = lStack_4e8;
    uStack_7e0 = uStack_4f0;
    uStack_828 = uStack_538;
    uStack_830 = uStack_540;
    uStack_818 = lStack_528;
    lStack_820 = lStack_530;
    func_0x000100d6b3c0();
    if (iVar3 == 1) goto LAB_103c949d4;
    uStack_868 = uStack_440;
    uStack_870 = uStack_448;
    uStack_858 = uStack_430;
    uStack_860 = uStack_438;
    uStack_848 = uStack_420;
    uStack_850 = uStack_428;
    uStack_8a8 = uStack_480;
    uStack_8b0 = uStack_488;
    uStack_898 = uStack_470;
    uStack_8a0 = uStack_478;
    uStack_888 = uStack_460;
    uStack_890 = uStack_468;
    uStack_878 = uStack_450;
    uStack_880 = uStack_458;
    uStack_8c8 = uStack_4a0;
    uStack_8d0 = uStack_4a8;
    uStack_8b8 = uStack_490;
    uStack_8c0 = uStack_498;
    uStack_608 = uStack_440;
    uStack_610 = uStack_448;
    lStack_5f8 = uStack_430;
    uStack_600 = uStack_438;
    uStack_5e8 = uStack_420;
    uStack_5f0 = uStack_428;
    uStack_648 = uStack_480;
    uStack_650 = uStack_488;
    uStack_638 = uStack_470;
    uStack_640 = uStack_478;
    uStack_628 = uStack_460;
    uStack_630 = uStack_468;
    uStack_618 = uStack_450;
    uStack_620 = uStack_458;
    uStack_840 = uStack_418;
    uStack_5e0 = uStack_418;
    uStack_668 = uStack_4a0;
    uStack_670 = uStack_4a8;
    lStack_658 = uStack_490;
    uStack_660 = uStack_498;
    uStack_208 = uStack_7c8;
    uStack_210 = uStack_7d0;
    uStack_1f8 = uStack_7b8;
    uStack_200 = uStack_7c0;
    uStack_1e8 = uStack_7a8;
    uStack_1f0 = uStack_7b0;
    uStack_1e0 = uStack_7a0;
    uStack_248 = uStack_808;
    uStack_250 = uStack_810;
    uStack_238 = uStack_7f8;
    uStack_240 = uStack_800;
    uStack_228 = uStack_7e8;
    uStack_230 = uStack_7f0;
    uStack_218 = lStack_7d8;
    uStack_220 = uStack_7e0;
    uStack_268 = uStack_828;
    uStack_270 = uStack_830;
    uStack_258 = uStack_818;
    uStack_260 = lStack_820;
    FUN_103ccc4d0(&uStack_3e0,&uStack_970,0x112ffe128,&UNK_10dc6e280);
    FUN_103ccc4d0(&uStack_340,&uStack_970,0x112ffe128,&UNK_10dc6e280);
    puVar4 = &uStack_270;
    func_0x000103caec90(puVar4,&uStack_670);
    func_0x000103ccc92c(&uStack_8d0,0x112ffe128,&UNK_10dc6e280);
    func_0x000103ccc92c(&uStack_540,0x112ffe128,&UNK_10dc6e280);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x108,auStack_688,0,0);
  func_0x000107c61428(param_2 + 0x108,&uStack_540,0x20,0);
  uVar5 = *(ulong *)(param_1 + 0x108);
  if ((uVar5 == *(ulong *)(param_2 + 0x108)) &&
     (*(long *)(param_1 + 0x110) == *(long *)(param_2 + 0x110))) {
    func_0x000107c614a8(&uStack_540);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_540);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  puVar4 = (undefined8 *)(param_1 + 0x118);
  func_0x000107c61428(puVar4,auStack_6e8,0,0);
  puVar1 = (undefined8 *)(param_2 + 0x118);
  func_0x000107c61428(puVar1,auStack_700,0,0);
  uStack_930 = *(undefined8 *)(param_2 + 0x158);
  uStack_6a8 = *(undefined8 *)(param_1 + 0x140);
  uStack_6b0 = *(undefined8 *)(param_1 + 0x138);
  uStack_698 = *(undefined8 *)(param_1 + 0x150);
  uStack_6a0 = *(undefined8 *)(param_1 + 0x148);
  uStack_690 = *(undefined8 *)(param_1 + 0x158);
  uStack_6c8 = *(undefined8 *)(param_1 + 0x120);
  uStack_6d0 = *puVar4;
  uStack_6b8 = *(undefined8 *)(param_1 + 0x130);
  lStack_6c0 = *(long *)(param_1 + 0x128);
  uStack_968 = *(undefined8 *)(param_2 + 0x120);
  uStack_970 = *puVar1;
  uStack_4e0 = *(undefined8 *)(param_2 + 0x130);
  lStack_4e8 = *(long *)(param_2 + 0x128);
  uStack_948 = *(undefined8 *)(param_2 + 0x140);
  uStack_950 = *(undefined8 *)(param_2 + 0x138);
  uStack_938 = *(undefined8 *)(param_2 + 0x150);
  uStack_940 = *(undefined8 *)(param_2 + 0x148);
  uStack_958 = *(undefined8 *)(param_2 + 0x130);
  uStack_960 = *(undefined8 *)(param_2 + 0x128);
  uStack_4d0 = *(undefined8 *)(param_2 + 0x140);
  uStack_4d8 = *(undefined8 *)(param_2 + 0x138);
  uStack_4f0 = *(undefined8 *)(param_2 + 0x120);
  uStack_4f8 = *puVar1;
  uStack_4c0 = *(undefined8 *)(param_2 + 0x150);
  lStack_4c8 = *(undefined8 *)(param_2 + 0x148);
  uStack_4b8 = *(undefined8 *)(param_2 + 0x158);
  uStack_540 = uStack_6d0;
  uStack_538 = uStack_6c8;
  lStack_530 = lStack_6c0;
  lStack_528 = uStack_6b8;
  uStack_520 = uStack_6b0;
  uStack_518 = uStack_6a8;
  uStack_510 = uStack_6a0;
  uStack_508 = uStack_698;
  uStack_500 = uStack_690;
  if (lStack_6c0 == 0) {
    if (lStack_4e8 == 0) {
      uStack_808 = *(undefined8 *)(param_1 + 0x140);
      uStack_810 = *(undefined8 *)(param_1 + 0x138);
      uStack_7f8 = *(undefined8 *)(param_1 + 0x150);
      uStack_800 = *(undefined8 *)(param_1 + 0x148);
      uStack_7f0 = *(undefined8 *)(param_1 + 0x158);
      uStack_828 = *(undefined8 *)(param_1 + 0x120);
      uStack_830 = *puVar4;
      uStack_818 = *(undefined8 *)(param_1 + 0x130);
      lStack_820 = *(undefined8 *)(param_1 + 0x128);
      FUN_103ccc4d0(&uStack_6d0,&uStack_8d0,0x112ffe138,&UNK_10dc6e290);
      FUN_103ccc4d0(&uStack_970,&uStack_8d0,0x112ffe138,&UNK_10dc6e290);
      func_0x000103ccc92c(&uStack_830,0x112ffe138,&UNK_10dc6e290);
      return 1;
    }
  }
  else if (lStack_4e8 != 0) {
    uStack_808 = *(undefined8 *)(param_2 + 0x140);
    uStack_810 = *(undefined8 *)(param_2 + 0x138);
    uStack_7f8 = *(undefined8 *)(param_2 + 0x150);
    uStack_800 = *(undefined8 *)(param_2 + 0x148);
    uStack_7f0 = *(undefined8 *)(param_2 + 0x158);
    uStack_828 = *(undefined8 *)(param_2 + 0x120);
    uStack_830 = *puVar1;
    uStack_818 = *(undefined8 *)(param_2 + 0x130);
    lStack_820 = *(undefined8 *)(param_2 + 0x128);
    uStack_8c8 = *(undefined8 *)(param_1 + 0x120);
    uStack_8d0 = *puVar4;
    uStack_8b8 = *(undefined8 *)(param_1 + 0x130);
    uStack_8c0 = *(undefined8 *)(param_1 + 0x128);
    uStack_8a8 = *(undefined8 *)(param_1 + 0x140);
    uStack_8b0 = *(undefined8 *)(param_1 + 0x138);
    uStack_898 = *(undefined8 *)(param_1 + 0x150);
    uStack_8a0 = *(undefined8 *)(param_1 + 0x148);
    uStack_890 = *(undefined8 *)(param_1 + 0x158);
    uStack_750 = uStack_830;
    uStack_748 = uStack_828;
    uStack_740 = lStack_820;
    uStack_738 = uStack_818;
    uStack_730 = uStack_810;
    uStack_728 = uStack_808;
    uStack_720 = uStack_800;
    uStack_718 = uStack_7f8;
    uStack_710 = uStack_7f0;
    FUN_103ccc4d0(&uStack_6d0,auStack_798,0x112ffe138,&UNK_10dc6e290);
    FUN_103ccc4d0(&uStack_970,auStack_798,0x112ffe138,&UNK_10dc6e290);
    puVar4 = &uStack_8d0;
    func_0x000103caf0c8(puVar4,&uStack_830);
    func_0x000103ccc92c(&uStack_750,0x112ffe138,&UNK_10dc6e290);
    func_0x000103ccc92c(&uStack_540,0x112ffe138,&UNK_10dc6e290);
    if (((ulong)puVar4 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  uStack_830 = uStack_6d0;
  uStack_828 = uStack_6c8;
  lStack_820 = lStack_6c0;
  uStack_818 = uStack_6b8;
  uStack_810 = uStack_6b0;
  uStack_808 = uStack_6a8;
  uStack_800 = uStack_6a0;
  uStack_7f8 = uStack_698;
  uStack_7f0 = uStack_690;
  uStack_7e8 = uStack_4f8;
  uStack_7e0 = uStack_4f0;
  lStack_7d8 = lStack_4e8;
  uStack_7d0 = uStack_4e0;
  uStack_7c8 = uStack_4d8;
  uStack_7c0 = uStack_4d0;
  uStack_7b8 = lStack_4c8;
  uStack_7b0 = uStack_4c0;
  uStack_7a8 = uStack_4b8;
  FUN_103ccc4d0(&uStack_6d0,&uStack_8d0,0x112ffe138,&UNK_10dc6e290);
  FUN_103ccc4d0(&uStack_970,&uStack_8d0,0x112ffe138,&UNK_10dc6e290);
  func_0x000103ccc92c(&uStack_830,0x112ffe140,&UNK_10dc6e298);
  return 0;
}



/* Entry: 103c94e10; end: 103c94e5b;  */

void FUN_103c94e10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103caeaa4();
  func_0x000107c61538();
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
  return;
}



/* Entry: 103c94e5c; end: 103c94eb7;  */

void FUN_103c94e5c(void)

{
  FUN_103c963f8();
  return;
}



/* Entry: 103c94eb8; end: 103c94eef;  */

uint FUN_103c94eb8(long param_1,long param_2)

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
  func_0x000103ccbf90();
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



/* Entry: 103c94ef0; end: 103c94efb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103c94ef0(long *param_1)

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
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong uVar26;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_103c94524(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
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
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
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
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
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
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103c94efc; end: 103c94f9b;  */

/* WARNING: Possible PIC construction at 0x000103c94f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c94f58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c94f4c) */
/* WARNING: Removing unreachable block (ram,0x000103c94f5c) */

void FUN_103c94efc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffeee0 != -1) {
    func_0x000107c61568(0x112ffeee0,FUN_103c93b28);
  }
  uVar5 = uRam000000011380da88;
  uVar4 = uRam000000011380da80;
  uVar3 = uRam000000011380da78;
  uVar2 = uRam000000011380da70;
  uVar1 = uRam000000011380da68;
  *param_1 = uRam000000011380da60;
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



/* Entry: 103c94f9c; end: 103c94faf;  */

void FUN_103c94f9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130005a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130005a0,&UNK_10dc750b0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c94fb0; end: 103c94fe7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c94fb0(undefined8 *param_1,undefined8 param_2)

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
  FUN_103cbaf3c();
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



/* Entry: 103c94fe8; end: 103c94ff3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103c94fe8(undefined8 *param_1,long *param_2)

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
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong uVar26;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_103c94524(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
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
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
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
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
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
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar22 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103c94ff4; end: 103c9503b;  */

void FUN_103c94ff4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc76570,0x22,2);
  uRam000000011380da98 = uStack_38;
  uRam000000011380da90 = uStack_40;
  uRam000000011380daa8 = uStack_28;
  uRam000000011380daa0 = uStack_30;
  uRam000000011380dab8 = uStack_18;
  uRam000000011380dab0 = uStack_20;
  return;
}



/* Entry: 103c9503c; end: 103c95123;  */

/* WARNING: Removing unreachable block (ram,0x000103c95120) */

void FUN_103c9503c(undefined8 param_1,long param_2,long param_3)

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
        func_0x0001015efcec();
        (*pcVar3)(unaff_x20 + 0x28,&UNK_11078f958,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 1) goto LAB_103c950c8;
          pcVar3 = *(code **)(param_3 + 0x138);
        }
        (*pcVar3)();
      }
LAB_103c950c8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103c95124; end: 103c951d7;  */

void FUN_103c95124(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  char *unaff_x20;
  long unaff_x21;
  
  if ((*unaff_x20 != '\x01') || ((**(code **)(param_3 + 0x68))(1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar2 = *(ulong *)(unaff_x20 + 0x10);
    uVar1 = *(ulong *)(unaff_x20 + 8) & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 8),uVar2,2,param_2,param_3),
        unaff_x21 == 0)) && (FUN_103c951d8(), unaff_x21 == 0)) {
      func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x18),
                          *(undefined8 *)(unaff_x20 + 0x20),param_2,param_3);
    }
  }
  return;
}



/* Entry: 103c951d8; end: 103c95263;  */

void FUN_103c951d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x40);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015efcec();
    (*pcVar1)(&uStack_60,3,&UNK_11078f958,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103c95264; end: 103c952af;  */

void FUN_103c95264(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xe000000000000000;
  *(undefined8 *)(param_1 + 0x20) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0xf000000000000000;
  return;
}



/* Entry: 103c952b0; end: 103c952df;  */

undefined1  [16] FUN_103c952b0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 103c952e0; end: 103c95313;  */

void FUN_103c952e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 103c95314; end: 103c95327;  */

undefined1  [16] FUN_103c95314(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x103c95324;
  return auVar1;
}



/* Entry: 103c95328; end: 103c9533b;  */

void FUN_103c95328(void)

{
  FUN_103c9503c();
  return;
}



/* Entry: 103c9533c; end: 103c9537b;  */

void FUN_103c9533c(void)

{
  FUN_103c95124();
  return;
}



/* Entry: 103c9537c; end: 103c953b3;  */

uint FUN_103c9537c(long param_1,long param_2)

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
  func_0x000103ccbf50();
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



/* Entry: 103c953b4; end: 103c9540b;  */

uint FUN_103c953b4(undefined8 *param_1)

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
  func_0x000103caf0c8(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103c9540c; end: 103c954ab;  */

/* WARNING: Possible PIC construction at 0x000103c95458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c95468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c9545c) */
/* WARNING: Removing unreachable block (ram,0x000103c9546c) */

void FUN_103c9540c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffeef0 != -1) {
    func_0x000107c61568(0x112ffeef0,FUN_103c94ff4);
  }
  uVar5 = uRam000000011380dab8;
  uVar4 = uRam000000011380dab0;
  uVar3 = uRam000000011380daa8;
  uVar2 = uRam000000011380daa0;
  uVar1 = uRam000000011380da98;
  *param_1 = uRam000000011380da90;
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



/* Entry: 103c954ac; end: 103c954bf;  */

void FUN_103c954ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000590;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000590,&UNK_10dc750a8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c954c0; end: 103c955d3;  */

void FUN_103c954c0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103c955d4; end: 103c95673;  */

uint FUN_103c955d4(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000103caf0c8(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103c95674; end: 103c9577f;  */

void FUN_103c95674(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x000103cb71fc();
LAB_103c956fc:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000103cb723c();
          goto LAB_103c956fc;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000103cb6ffc();
          goto LAB_103c956fc;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103c95780; end: 103c958ab;  */

void FUN_103c95780(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar2 = &lStack_50;
  plVar3 = &lStack_50;
  puVar1 = param_1;
  if (unaff_x20[2] != 0) {
    uStack_48 = (undefined1)unaff_x20[3];
    pcVar4 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[2];
    func_0x000103cb6ffc();
    (*pcVar4)(&lStack_50,1,&UNK_11072f788,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    lStack_50 = *unaff_x20;
    func_0x000103cb723c();
    (*pcVar4)(&lStack_50,2,&UNK_11072f818,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar3;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[4] != 0) {
    uStack_48 = (undefined1)unaff_x20[5];
    pcVar4 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[4];
    func_0x000103cb71fc();
    (*pcVar4)(&lStack_50,3,&UNK_11072f6f8,puVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  return;
}



/* Entry: 103c958ac; end: 103c958e3;  */

undefined1  [16] FUN_103c958ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b2dc0;
  auVar1._0_8_ = 0xd000000000000023;
  return auVar1;
}



/* Entry: 103c958e4; end: 103c9590b;  */

void FUN_103c958e4(void)

{
  FUN_103c95674();
  return;
}



/* Entry: 103c9590c; end: 103c95943;  */

uint FUN_103c9590c(long param_1,long param_2)

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
  func_0x000103ccbf10();
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



/* Entry: 103c95944; end: 103c9598b;  */

uint FUN_103c95944(undefined8 *param_1)

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
  FUN_103cb1ae8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103c9598c; end: 103c95a2b;  */

/* WARNING: Possible PIC construction at 0x000103c959d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c959e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c959dc) */
/* WARNING: Removing unreachable block (ram,0x000103c959ec) */

void FUN_103c9598c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffef00 != -1) {
    func_0x000107c61568(0x112ffef00,0x103c9562c);
  }
  uVar5 = uRam000000011380dae8;
  uVar4 = uRam000000011380dae0;
  uVar3 = uRam000000011380dad8;
  uVar2 = uRam000000011380dad0;
  uVar1 = uRam000000011380dac8;
  *param_1 = uRam000000011380dac0;
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



/* Entry: 103c95a2c; end: 103c95a3f;  */

void FUN_103c95a2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000580;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000580,&UNK_10dc750a0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c95a40; end: 103c95a77;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c95a40(undefined8 *param_1,undefined8 param_2)

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
  FUN_103cbb134();
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



/* Entry: 103c95a78; end: 103c95b07;  */

uint FUN_103c95a78(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103cb1ae8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103c95b08; end: 103c95c1f;  */

/* WARNING: Removing unreachable block (ram,0x000103c95c1c) */

void FUN_103c95b08(undefined8 param_1,long param_2,long param_3)

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
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000103cb72bc();
          (*pcVar3)();
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x10;
          goto LAB_103c95b70;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x20;
        }
        else if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x30;
        }
        else {
          if (lVar1 != 5) goto LAB_103c95b80;
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x40;
        }
LAB_103c95b70:
        (*pcVar3)(lVar1,param_2,param_3);
      }
LAB_103c95b80:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103c95c20; end: 103c95d7b;  */

void FUN_103c95c20(undefined8 param_1,undefined8 param_2,long param_3)

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
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[5];
    uVar1 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[7];
      uVar1 = unaff_x20[6] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,4,param_2,param_3), unaff_x21 == 0)) {
        uVar2 = unaff_x20[9];
        uVar1 = unaff_x20[8] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if ((uVar1 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[8],uVar2,5,param_2,param_3), unaff_x21 == 0)) {
          func_0x000100076224(param_1,unaff_x20[10],unaff_x20[0xb],param_2,param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 103c95d7c; end: 103c95de3;  */

void FUN_103c95d7c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[0xb] = 0xc000000000000000;
  param_1[10] = 0;
  return;
}



/* Entry: 103c95de4; end: 103c95e0b;  */

void FUN_103c95de4(void)

{
  FUN_103c95b08();
  return;
}



/* Entry: 103c95e0c; end: 103c95e43;  */

uint FUN_103c95e0c(long param_1,long param_2)

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
  func_0x000103ccbed0();
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



/* Entry: 103c95e44; end: 103c95e9b;  */

uint FUN_103c95e44(undefined8 *param_1)

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
  func_0x000103caeaf0(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103c95e9c; end: 103c95f3b;  */

/* WARNING: Possible PIC construction at 0x000103c95ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c95ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c95eec) */
/* WARNING: Removing unreachable block (ram,0x000103c95efc) */

void FUN_103c95e9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffef20 != -1) {
    func_0x000107c61568(0x112ffef20,0x103c95ac0);
  }
  uVar5 = uRam000000011380db18;
  uVar4 = uRam000000011380db10;
  uVar3 = uRam000000011380db08;
  uVar2 = uRam000000011380db00;
  uVar1 = uRam000000011380daf8;
  *param_1 = uRam000000011380daf0;
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



/* Entry: 103c95f3c; end: 103c95f4f;  */

void FUN_103c95f3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000570;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000570,&UNK_10dc75098);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c95f50; end: 103c95f83;  */

void FUN_103c95f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103c95f84; end: 103c9609f;  */

void FUN_103c95f84(undefined8 param_1,undefined8 param_2)

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
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c960a0; end: 103c9613f;  */

uint FUN_103c960a0(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000103caeaf0(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103c96140; end: 103c963af;  */

void FUN_103c96140(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [240];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  
  FUN_103caf418(&uStack_340);
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_280;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 200) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_338;
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_340;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_330;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_318;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_320;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0xe000000000000000;
  func_0x000107c61428(param_1 + 0x10,auStack_358,0,0);
  uStack_188 = *(undefined8 *)(param_1 + 0xd8);
  uStack_190 = *(undefined8 *)(param_1 + 0xd0);
  uStack_178 = *(undefined8 *)(param_1 + 0xe8);
  uStack_180 = *(undefined8 *)(param_1 + 0xe0);
  uStack_168 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined8 *)(param_1 + 0xf0);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x90);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_198 = *(undefined8 *)(param_1 + 200);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_208 = *(undefined8 *)(param_1 + 0x58);
  uStack_210 = *(undefined8 *)(param_1 + 0x50);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x68);
  uStack_200 = *(undefined8 *)(param_1 + 0x60);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x78);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_248 = *(undefined8 *)(param_1 + 0x18);
  uStack_250 = *(undefined8 *)(param_1 + 0x10);
  uStack_238 = *(undefined8 *)(param_1 + 0x28);
  uStack_240 = *(undefined8 *)(param_1 + 0x20);
  uStack_228 = *(undefined8 *)(param_1 + 0x38);
  uStack_230 = *(undefined8 *)(param_1 + 0x30);
  uStack_218 = *(undefined8 *)(param_1 + 0x48);
  uStack_220 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_370,1,0);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 200);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 200) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_208;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_200;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_230;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_220;
  FUN_103ccc4d0(&uStack_250,auStack_460,0x112ffe2b0,&UNK_10dc6e2a8);
  func_0x000103ccc92c(&uStack_160,0x112ffe2b0,&UNK_10dc6e2a8);
  func_0x000107c61428(param_1 + 0x100,auStack_460,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  uVar4 = *(undefined8 *)(param_1 + 0x108);
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  func_0x000107c61428(unaff_x20 + 0x100,auStack_478,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x100) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x108) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x110) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar5;
  FUN_103cafad8(uVar1,uVar4,uVar2,uVar5);
  func_0x000103cafb0c(uVar8,uVar6,uVar3,uVar7);
  func_0x000107c61428(param_1 + 0x120,auStack_490,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  uVar2 = *(undefined8 *)(param_1 + 0x128);
  func_0x000107c61434(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x120,auStack_4a8,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x20 + 0x120) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x128) = uVar2;
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 103c963b0; end: 103c963f7;  */

void FUN_103c963b0(void)

{
  long unaff_x20;
  
  func_0x000103ccc92c(unaff_x20 + 0x10,0x112ffe2b0,&UNK_10dc6e2a8);
  func_0x000103cafb0c(*(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                      *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x128));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c963f8; end: 103c964ab;  */

void FUN_103c963f8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *in_x3;
  code *in_x5;
  code *in_x6;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    (*in_x3)(0);
    func_0x000107c613fc();
    (*in_x5)(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  (*in_x6)();
  return;
}



/* Entry: 103c964ac; end: 103c965d3;  */

/* WARNING: Removing unreachable block (ram,0x000103c96588) */
/* WARNING: Removing unreachable block (ram,0x000103c965d0) */

void FUN_103c964ac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  undefined1 auStack_68 [24];
  
  pcVar3 = *(code **)(param_4 + 0x10);
  lVar1 = param_3;
  lVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        func_0x000107c61428(param_1 + 0x120,auStack_68,0x21,0);
        (**(code **)(param_4 + 0x150))(param_1 + 0x120,param_3,param_4);
        func_0x000107c614a8(auStack_68);
      }
      else if (lVar1 == 2) {
        FUN_103c965d4(param_2,param_1,param_3,param_4);
      }
      else if (lVar1 == 1) {
        FUN_103c9c158(param_2,param_1,param_3,param_4,0x103cb6f3c,&UNK_1106f76e8);
      }
      lVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103c965d4; end: 103c96667;  */

void FUN_103c965d4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x100;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103cbad84();
  (*pcVar2)(param_2 + 0x100,&UNK_1106f7798,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103c96668; end: 103c9672f;  */

void FUN_103c96668(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  FUN_103c96730();
  if (unaff_x21 == 0) {
    FUN_103c9688c(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x120,auStack_58,0,0);
    uVar2 = *(ulong *)(param_1 + 0x120);
    uVar3 = *(ulong *)(param_1 + 0x128);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar4 = *(code **)(param_4 + 0x70);
      func_0x000107c61434(uVar3);
      (*pcVar4)(uVar2,uVar3,3,param_3,param_4);
      func_0x000107c6142c(uVar3);
    }
  }
  return;
}



/* Entry: 103c96730; end: 103c9688b;  */

void FUN_103c96730(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_238,0,0);
  uStack_78 = *(undefined8 *)(param_1 + 200);
  uStack_80 = *(undefined8 *)(param_1 + 0xc0);
  uStack_158 = *(undefined8 *)(param_1 + 0xd8);
  uStack_160 = *(undefined8 *)(param_1 + 0xd0);
  uStack_68 = *(undefined8 *)(param_1 + 0xd8);
  uStack_70 = *(undefined8 *)(param_1 + 0xd0);
  uStack_148 = *(undefined8 *)(param_1 + 0xe8);
  uStack_150 = *(undefined8 *)(param_1 + 0xe0);
  uStack_58 = *(undefined8 *)(param_1 + 0xe8);
  uStack_60 = *(undefined8 *)(param_1 + 0xe0);
  uStack_138 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined8 *)(param_1 + 0xf0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x88);
  uStack_c0 = *(undefined8 *)(param_1 + 0x80);
  uStack_198 = *(undefined8 *)(param_1 + 0x98);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x90);
  uStack_a8 = *(undefined8 *)(param_1 + 0x98);
  uStack_b0 = *(undefined8 *)(param_1 + 0x90);
  uStack_188 = *(undefined8 *)(param_1 + 0xa8);
  uStack_190 = *(undefined8 *)(param_1 + 0xa0);
  uStack_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_178 = *(undefined8 *)(param_1 + 0xb8);
  uStack_180 = *(undefined8 *)(param_1 + 0xb0);
  uStack_88 = *(undefined8 *)(param_1 + 0xb8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  uStack_168 = *(undefined8 *)(param_1 + 200);
  uStack_170 = *(undefined8 *)(param_1 + 0xc0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x48);
  uStack_100 = *(undefined8 *)(param_1 + 0x40);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x58);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x50);
  uStack_e8 = *(undefined8 *)(param_1 + 0x58);
  uStack_f0 = *(undefined8 *)(param_1 + 0x50);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x68);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = *(undefined8 *)(param_1 + 0x68);
  uStack_e0 = *(undefined8 *)(param_1 + 0x60);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x78);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x70);
  uStack_c8 = *(undefined8 *)(param_1 + 0x78);
  uStack_d0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x80);
  uStack_218 = *(undefined8 *)(param_1 + 0x18);
  uStack_220 = *(undefined8 *)(param_1 + 0x10);
  uStack_208 = *(undefined8 *)(param_1 + 0x28);
  uStack_210 = *(undefined8 *)(param_1 + 0x20);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x38);
  uStack_200 = *(undefined8 *)(param_1 + 0x30);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x48);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x40);
  uStack_128 = *(undefined8 *)(param_1 + 0x18);
  uStack_130 = *(undefined8 *)(param_1 + 0x10);
  uStack_118 = *(undefined8 *)(param_1 + 0x28);
  uStack_120 = *(undefined8 *)(param_1 + 0x20);
  uStack_108 = *(undefined8 *)(param_1 + 0x38);
  uStack_110 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined8 *)(param_1 + 0xf0);
  puVar1 = &uStack_220;
  func_0x000100d6b3c0();
  if ((int)puVar1 != 1) {
    uStack_268 = uStack_68;
    uStack_270 = uStack_70;
    uStack_258 = uStack_58;
    uStack_260 = uStack_60;
    uStack_248 = uStack_48;
    uStack_250 = uStack_50;
    uStack_2a8 = uStack_a8;
    uStack_2b0 = uStack_b0;
    uStack_298 = uStack_98;
    uStack_2a0 = uStack_a0;
    uStack_288 = uStack_88;
    uStack_290 = uStack_90;
    uStack_278 = uStack_78;
    uStack_280 = uStack_80;
    uStack_2e8 = uStack_e8;
    uStack_2f0 = uStack_f0;
    uStack_2d8 = uStack_d8;
    uStack_2e0 = uStack_e0;
    uStack_2c8 = uStack_c8;
    uStack_2d0 = uStack_d0;
    uStack_2b8 = uStack_b8;
    uStack_2c0 = uStack_c0;
    uStack_328 = uStack_128;
    uStack_330 = uStack_130;
    uStack_318 = uStack_118;
    uStack_320 = uStack_120;
    uStack_308 = uStack_108;
    uStack_310 = uStack_110;
    uStack_2f8 = uStack_f8;
    uStack_300 = uStack_100;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103cb6f3c();
    (*pcVar2)(&uStack_330,1,&UNK_1106f76e8,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103c9688c; end: 103c96937;  */

void FUN_103c9688c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x100;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_78 = *(long *)(param_1 + 0x100);
  if (lStack_78 != 0) {
    bStack_70 = *(byte *)(param_1 + 0x108) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x118);
    uStack_68 = *(undefined8 *)(param_1 + 0x110);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103cbad84();
    (*pcVar2)(&lStack_78,2,&UNK_1106f7798,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103c96938; end: 103c96fdb;  */

undefined8 FUN_103c96938(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a00 [240];
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_358,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_370,0,0);
  uStack_498 = *(undefined8 *)(param_1 + 200);
  uStack_4a0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_188 = *(undefined8 *)(param_1 + 0xd8);
  uStack_190 = *(undefined8 *)(param_1 + 0xd0);
  uStack_488 = *(undefined8 *)(param_1 + 0xd8);
  uStack_490 = *(undefined8 *)(param_1 + 0xd0);
  uStack_178 = *(undefined8 *)(param_1 + 0xe8);
  uStack_180 = *(undefined8 *)(param_1 + 0xe0);
  uStack_478 = *(undefined8 *)(param_1 + 0xe8);
  uStack_480 = *(undefined8 *)(param_1 + 0xe0);
  uStack_168 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined8 *)(param_1 + 0xf0);
  uStack_4d8 = *(undefined8 *)(param_1 + 0x88);
  uStack_4e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x90);
  uStack_4c8 = *(undefined8 *)(param_1 + 0x98);
  uStack_4d0 = *(undefined8 *)(param_1 + 0x90);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_4b8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_4c0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_4a8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_4b0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_198 = *(undefined8 *)(param_1 + 200);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_518 = *(undefined8 *)(param_1 + 0x48);
  uStack_520 = *(undefined8 *)(param_1 + 0x40);
  uStack_208 = *(undefined8 *)(param_1 + 0x58);
  uStack_210 = *(undefined8 *)(param_1 + 0x50);
  uStack_508 = *(undefined8 *)(param_1 + 0x58);
  uStack_510 = *(undefined8 *)(param_1 + 0x50);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x68);
  uStack_200 = *(undefined8 *)(param_1 + 0x60);
  uStack_4f8 = *(undefined8 *)(param_1 + 0x68);
  uStack_500 = *(undefined8 *)(param_1 + 0x60);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x78);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_4e8 = *(undefined8 *)(param_1 + 0x78);
  uStack_4f0 = *(undefined8 *)(param_1 + 0x70);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x88);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x80);
  uStack_248 = *(undefined8 *)(param_1 + 0x18);
  uStack_250 = *(undefined8 *)(param_1 + 0x10);
  uStack_238 = *(undefined8 *)(param_1 + 0x28);
  uStack_240 = *(undefined8 *)(param_1 + 0x20);
  uStack_228 = *(undefined8 *)(param_1 + 0x38);
  uStack_230 = *(undefined8 *)(param_1 + 0x30);
  uStack_218 = *(undefined8 *)(param_1 + 0x48);
  uStack_220 = *(undefined8 *)(param_1 + 0x40);
  uStack_548 = *(undefined8 *)(param_1 + 0x18);
  uStack_550 = *(undefined8 *)(param_1 + 0x10);
  uStack_538 = *(undefined8 *)(param_1 + 0x28);
  uStack_540 = *(undefined8 *)(param_1 + 0x20);
  uStack_528 = *(undefined8 *)(param_1 + 0x38);
  uStack_530 = *(undefined8 *)(param_1 + 0x30);
  uStack_3a8 = *(undefined8 *)(param_2 + 200);
  uStack_3b0 = *(undefined8 *)(param_2 + 0xc0);
  uStack_98 = *(undefined8 *)(param_2 + 0xd8);
  uStack_a0 = *(undefined8 *)(param_2 + 0xd0);
  uStack_398 = *(undefined8 *)(param_2 + 0xd8);
  uStack_3a0 = *(undefined8 *)(param_2 + 0xd0);
  uStack_88 = *(undefined8 *)(param_2 + 0xe8);
  uStack_90 = *(undefined8 *)(param_2 + 0xe0);
  uStack_388 = *(undefined8 *)(param_2 + 0xe8);
  uStack_390 = *(undefined8 *)(param_2 + 0xe0);
  uStack_78 = *(undefined8 *)(param_2 + 0xf8);
  uStack_80 = *(undefined8 *)(param_2 + 0xf0);
  uStack_3e8 = *(undefined8 *)(param_2 + 0x88);
  uStack_3f0 = *(undefined8 *)(param_2 + 0x80);
  uStack_d8 = *(undefined8 *)(param_2 + 0x98);
  uStack_e0 = *(undefined8 *)(param_2 + 0x90);
  uStack_3d8 = *(undefined8 *)(param_2 + 0x98);
  uStack_3e0 = *(undefined8 *)(param_2 + 0x90);
  uStack_c8 = *(undefined8 *)(param_2 + 0xa8);
  uStack_d0 = *(undefined8 *)(param_2 + 0xa0);
  uStack_3c8 = *(undefined8 *)(param_2 + 0xa8);
  uStack_3d0 = *(undefined8 *)(param_2 + 0xa0);
  uStack_b8 = *(undefined8 *)(param_2 + 0xb8);
  uStack_c0 = *(undefined8 *)(param_2 + 0xb0);
  uStack_3b8 = *(undefined8 *)(param_2 + 0xb8);
  uStack_3c0 = *(undefined8 *)(param_2 + 0xb0);
  uStack_a8 = *(undefined8 *)(param_2 + 200);
  uStack_b0 = *(undefined8 *)(param_2 + 0xc0);
  uStack_428 = *(undefined8 *)(param_2 + 0x48);
  uStack_430 = *(undefined8 *)(param_2 + 0x40);
  uStack_118 = *(undefined8 *)(param_2 + 0x58);
  uStack_120 = *(undefined8 *)(param_2 + 0x50);
  uStack_418 = *(undefined8 *)(param_2 + 0x58);
  uStack_420 = *(undefined8 *)(param_2 + 0x50);
  uStack_108 = *(undefined8 *)(param_2 + 0x68);
  uStack_110 = *(undefined8 *)(param_2 + 0x60);
  uStack_408 = *(undefined8 *)(param_2 + 0x68);
  uStack_410 = *(undefined8 *)(param_2 + 0x60);
  uStack_f8 = *(undefined8 *)(param_2 + 0x78);
  uStack_100 = *(undefined8 *)(param_2 + 0x70);
  uStack_3f8 = *(undefined8 *)(param_2 + 0x78);
  uStack_400 = *(undefined8 *)(param_2 + 0x70);
  uStack_e8 = *(undefined8 *)(param_2 + 0x88);
  uStack_f0 = *(undefined8 *)(param_2 + 0x80);
  uStack_158 = *(undefined8 *)(param_2 + 0x18);
  uStack_160 = *(undefined8 *)(param_2 + 0x10);
  uStack_148 = *(undefined8 *)(param_2 + 0x28);
  uStack_150 = *(undefined8 *)(param_2 + 0x20);
  uStack_138 = *(undefined8 *)(param_2 + 0x38);
  uStack_140 = *(undefined8 *)(param_2 + 0x30);
  uStack_128 = *(undefined8 *)(param_2 + 0x48);
  uStack_130 = *(undefined8 *)(param_2 + 0x40);
  uStack_458 = *(undefined8 *)(param_2 + 0x18);
  uStack_460 = *(undefined8 *)(param_2 + 0x10);
  uStack_448 = *(undefined8 *)(param_2 + 0x28);
  uStack_450 = *(undefined8 *)(param_2 + 0x20);
  uStack_438 = *(undefined8 *)(param_2 + 0x38);
  uStack_440 = *(undefined8 *)(param_2 + 0x30);
  uStack_378 = *(undefined8 *)(param_2 + 0xf8);
  uStack_380 = *(undefined8 *)(param_2 + 0xf0);
  uStack_468 = *(undefined8 *)(param_1 + 0xf8);
  uStack_470 = *(undefined8 *)(param_1 + 0xf0);
  iVar5 = (int)&uStack_550;
  func_0x000100d6b3c0();
  if (iVar5 == 1) {
    iVar5 = (int)&uStack_460;
    func_0x000100d6b3c0();
    if (iVar5 != 1) {
LAB_103c96c30:
      func_0x000107c610b4(&uStack_730,&uStack_550,0x1e0);
      FUN_103ccc4d0(&uStack_250,&uStack_340,0x112ffe2b0,&UNK_10dc6e2a8);
      FUN_103ccc4d0(&uStack_160,&uStack_340,0x112ffe2b0,&UNK_10dc6e2a8);
      func_0x000103ccc92c(&uStack_730,0x112ffe2b8,&UNK_10dc6e2b0);
      return 0;
    }
    uStack_668 = uStack_488;
    uStack_670 = uStack_490;
    uStack_658 = uStack_478;
    uStack_660 = uStack_480;
    uStack_648 = uStack_468;
    uStack_650 = uStack_470;
    uStack_6a8 = uStack_4c8;
    uStack_6b0 = uStack_4d0;
    uStack_698 = uStack_4b8;
    uStack_6a0 = uStack_4c0;
    uStack_688 = uStack_4a8;
    uStack_690 = uStack_4b0;
    uStack_678 = uStack_498;
    uStack_680 = uStack_4a0;
    uStack_6e8 = uStack_508;
    uStack_6f0 = uStack_510;
    uStack_6d8 = uStack_4f8;
    uStack_6e0 = uStack_500;
    uStack_6c8 = uStack_4e8;
    uStack_6d0 = uStack_4f0;
    uStack_6b8 = uStack_4d8;
    uStack_6c0 = uStack_4e0;
    uStack_728 = uStack_548;
    uStack_730 = uStack_550;
    uStack_718 = uStack_538;
    uStack_720 = uStack_540;
    uStack_708 = uStack_528;
    uStack_710 = uStack_530;
    uStack_6f8 = uStack_518;
    uStack_700 = uStack_520;
    FUN_103ccc4d0(&uStack_250,&uStack_340,0x112ffe2b0,&UNK_10dc6e2a8);
    FUN_103ccc4d0(&uStack_160,&uStack_340,0x112ffe2b0,&UNK_10dc6e2a8);
    func_0x000103ccc92c(&uStack_730,0x112ffe2b0,&UNK_10dc6e2a8);
  }
  else {
    uStack_758 = uStack_488;
    uStack_760 = uStack_490;
    uStack_748 = uStack_478;
    uStack_750 = uStack_480;
    uStack_738 = uStack_468;
    uStack_740 = uStack_470;
    uStack_798 = uStack_4c8;
    uStack_7a0 = uStack_4d0;
    uStack_788 = uStack_4b8;
    uStack_790 = uStack_4c0;
    uStack_778 = uStack_4a8;
    uStack_780 = uStack_4b0;
    uStack_768 = uStack_498;
    uStack_770 = uStack_4a0;
    uStack_7d8 = uStack_508;
    uStack_7e0 = uStack_510;
    uStack_7c8 = uStack_4f8;
    uStack_7d0 = uStack_500;
    uStack_7b8 = uStack_4e8;
    uStack_7c0 = uStack_4f0;
    uStack_7a8 = uStack_4d8;
    uStack_7b0 = uStack_4e0;
    uStack_818 = uStack_548;
    uStack_820 = uStack_550;
    uStack_808 = uStack_538;
    uStack_810 = uStack_540;
    uStack_7f8 = uStack_528;
    uStack_800 = uStack_530;
    uStack_7e8 = uStack_518;
    uStack_7f0 = uStack_520;
    iVar5 = (int)&uStack_460;
    func_0x000100d6b3c0();
    if (iVar5 == 1) goto LAB_103c96c30;
    uStack_848 = uStack_398;
    uStack_850 = uStack_3a0;
    uStack_838 = uStack_388;
    uStack_840 = uStack_390;
    uStack_828 = uStack_378;
    uStack_830 = uStack_380;
    uStack_888 = uStack_3d8;
    uStack_890 = uStack_3e0;
    uStack_878 = uStack_3c8;
    uStack_880 = uStack_3d0;
    uStack_868 = uStack_3b8;
    uStack_870 = uStack_3c0;
    uStack_858 = uStack_3a8;
    uStack_860 = uStack_3b0;
    uStack_8c8 = uStack_418;
    uStack_8d0 = uStack_420;
    uStack_8b8 = uStack_408;
    uStack_8c0 = uStack_410;
    uStack_8a8 = uStack_3f8;
    uStack_8b0 = uStack_400;
    uStack_898 = uStack_3e8;
    uStack_8a0 = uStack_3f0;
    uStack_908 = uStack_458;
    uStack_910 = uStack_460;
    uStack_8f8 = uStack_448;
    uStack_900 = uStack_450;
    uStack_8e8 = uStack_438;
    uStack_8f0 = uStack_440;
    uStack_8d8 = uStack_428;
    uStack_8e0 = uStack_430;
    uStack_668 = uStack_398;
    uStack_670 = uStack_3a0;
    uStack_658 = uStack_388;
    uStack_660 = uStack_390;
    uStack_648 = uStack_378;
    uStack_650 = uStack_380;
    uStack_6a8 = uStack_3d8;
    uStack_6b0 = uStack_3e0;
    uStack_698 = uStack_3c8;
    uStack_6a0 = uStack_3d0;
    uStack_688 = uStack_3b8;
    uStack_690 = uStack_3c0;
    uStack_678 = uStack_3a8;
    uStack_680 = uStack_3b0;
    uStack_6e8 = uStack_418;
    uStack_6f0 = uStack_420;
    uStack_6d8 = uStack_408;
    uStack_6e0 = uStack_410;
    uStack_6c8 = uStack_3f8;
    uStack_6d0 = uStack_400;
    uStack_6b8 = uStack_3e8;
    uStack_6c0 = uStack_3f0;
    uStack_728 = uStack_458;
    uStack_730 = uStack_460;
    uStack_718 = uStack_448;
    uStack_720 = uStack_450;
    uStack_708 = uStack_438;
    uStack_710 = uStack_440;
    uStack_6f8 = uStack_428;
    uStack_700 = uStack_430;
    uStack_278 = uStack_758;
    uStack_280 = uStack_760;
    uStack_268 = uStack_748;
    uStack_270 = uStack_750;
    uStack_258 = uStack_738;
    uStack_260 = uStack_740;
    uStack_2b8 = uStack_798;
    uStack_2c0 = uStack_7a0;
    uStack_2a8 = uStack_788;
    uStack_2b0 = uStack_790;
    uStack_288 = uStack_768;
    uStack_290 = uStack_770;
    uStack_298 = uStack_778;
    uStack_2a0 = uStack_780;
    uStack_2f8 = uStack_7d8;
    uStack_300 = uStack_7e0;
    uStack_2e8 = uStack_7c8;
    uStack_2f0 = uStack_7d0;
    uStack_2c8 = uStack_7a8;
    uStack_2d0 = uStack_7b0;
    uStack_2d8 = uStack_7b8;
    uStack_2e0 = uStack_7c0;
    uStack_338 = uStack_818;
    uStack_340 = uStack_820;
    uStack_328 = uStack_808;
    uStack_330 = uStack_810;
    uStack_308 = uStack_7e8;
    uStack_310 = uStack_7f0;
    uStack_318 = uStack_7f8;
    uStack_320 = uStack_800;
    FUN_103ccc4d0(&uStack_250,auStack_a00,0x112ffe2b0,&UNK_10dc6e2a8);
    FUN_103ccc4d0(&uStack_160,auStack_a00,0x112ffe2b0,&UNK_10dc6e2a8);
    puVar6 = &uStack_340;
    FUN_103caf440(puVar6,&uStack_730);
    func_0x000103ccc92c(&uStack_910,0x112ffe2b0,&UNK_10dc6e2a8);
    func_0x000103ccc92c(&uStack_550,0x112ffe2b0,&UNK_10dc6e2a8);
    if (((ulong)puVar6 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x100,&uStack_550,0,0);
  func_0x000107c61428(param_2 + 0x100,&uStack_820,0,0);
  uVar8 = *(ulong *)(param_1 + 0x100);
  uVar9 = *(undefined8 *)(param_1 + 0x108);
  uVar10 = *(ulong *)(param_1 + 0x110);
  uVar11 = *(undefined8 *)(param_1 + 0x118);
  uVar1 = *(ulong *)(param_2 + 0x100);
  uVar3 = *(undefined8 *)(param_2 + 0x108);
  uVar2 = *(ulong *)(param_2 + 0x110);
  uVar4 = *(undefined8 *)(param_2 + 0x118);
  if (uVar8 == 0) {
    if (uVar1 == 0) {
      FUN_103cafad8(0,uVar9,uVar10,uVar11);
      FUN_103cafad8(0,uVar3,uVar2,uVar4);
LAB_103c96f5c:
      func_0x000103cafb0c(uVar8,uVar9,uVar10,uVar11);
      func_0x000107c61428(param_1 + 0x120,&uStack_910,0,0);
      func_0x000107c61428(param_2 + 0x120,auStack_a00,0x20,0);
      uVar8 = *(ulong *)(param_1 + 0x120);
      if ((uVar8 == *(ulong *)(param_2 + 0x120)) &&
         (*(long *)(param_1 + 0x128) == *(long *)(param_2 + 0x128))) {
        func_0x000107c614a8(auStack_a00);
        return 1;
      }
      func_0x000107c605b8();
      func_0x000107c614a8(auStack_a00);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  else if (uVar1 != 0) {
    FUN_103cafad8(uVar8,uVar9,uVar10,uVar11);
    FUN_103cafad8(uVar1,uVar3,uVar2,uVar4);
    uVar7 = uVar8;
    func_0x000103cad6ec(uVar8,uVar1);
    if (((uVar7 & 1) == 0) || ((((uint)uVar3 ^ (uint)uVar9) & 1) != 0)) {
      func_0x000103cafb0c(uVar1,uVar3,uVar2,uVar4);
    }
    else {
      uVar7 = uVar10;
      func_0x000100e25fcc(uVar10,uVar11,uVar2,uVar4);
      func_0x000103cafb0c(uVar1,uVar3,uVar2,uVar4);
      if ((uVar7 & 1) != 0) goto LAB_103c96f5c;
    }
    goto LAB_103c96f0c;
  }
  FUN_103cafad8(uVar8,uVar9,uVar10,uVar11);
  FUN_103cafad8(uVar1,uVar3,uVar2,uVar4);
  func_0x000103cafb0c(uVar8,uVar9,uVar10,uVar11);
  uVar8 = uVar1;
  uVar9 = uVar3;
  uVar10 = uVar2;
  uVar11 = uVar4;
LAB_103c96f0c:
  func_0x000103cafb0c(uVar8,uVar9,uVar10,uVar11);
  return 0;
}



/* Entry: 103c96fdc; end: 103c97027;  */

void FUN_103c96fdc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103caf398();
  func_0x000107c61538();
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
  return;
}



/* Entry: 103c97028; end: 103c97083;  */

void FUN_103c97028(void)

{
  FUN_103c963f8();
  return;
}


