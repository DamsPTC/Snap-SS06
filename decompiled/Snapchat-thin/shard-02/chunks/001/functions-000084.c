/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101907004; end: 101907007;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101907004(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101907008; end: 10190703f;  */

uint FUN_101907008(long param_1,long param_2)

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
  func_0x000101911bec();
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



/* Entry: 101907040; end: 1019070df;  */

uint FUN_101907040(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_58 = param_1[0x15];
  uStack_60 = param_1[0x14];
  uStack_48 = param_1[0x17];
  uStack_50 = param_1[0x16];
  uStack_38 = param_1[0x19];
  uStack_40 = param_1[0x18];
  uStack_28 = param_1[0x1b];
  uStack_30 = param_1[0x1a];
  uStack_98 = param_1[0xd];
  uStack_a0 = param_1[0xc];
  uStack_88 = param_1[0xf];
  uStack_90 = param_1[0xe];
  uStack_78 = param_1[0x11];
  uStack_80 = param_1[0x10];
  uStack_68 = param_1[0x13];
  uStack_70 = param_1[0x12];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_a8 = param_1[0xb];
  uStack_b0 = param_1[10];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  uStack_138 = unaff_x20[0x15];
  uStack_140 = unaff_x20[0x14];
  uStack_128 = unaff_x20[0x17];
  uStack_130 = unaff_x20[0x16];
  uStack_118 = unaff_x20[0x19];
  uStack_120 = unaff_x20[0x18];
  uStack_108 = unaff_x20[0x1b];
  uStack_110 = unaff_x20[0x1a];
  uStack_178 = unaff_x20[0xd];
  uStack_180 = unaff_x20[0xc];
  uStack_168 = unaff_x20[0xf];
  uStack_170 = unaff_x20[0xe];
  uStack_158 = unaff_x20[0x11];
  uStack_160 = unaff_x20[0x10];
  uStack_148 = unaff_x20[0x13];
  uStack_150 = unaff_x20[0x12];
  uStack_1b8 = unaff_x20[5];
  uStack_1c0 = unaff_x20[4];
  uStack_1a8 = unaff_x20[7];
  uStack_1b0 = unaff_x20[6];
  uStack_198 = unaff_x20[9];
  uStack_1a0 = unaff_x20[8];
  uStack_188 = unaff_x20[0xb];
  uStack_190 = unaff_x20[10];
  uStack_1d8 = unaff_x20[1];
  uStack_1e0 = *unaff_x20;
  uStack_1c8 = unaff_x20[3];
  uStack_1d0 = unaff_x20[2];
  FUN_10190a7c8(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 1019070e0; end: 10190717f;  */

/* WARNING: Possible PIC construction at 0x00010190712c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010190713c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101907130) */
/* WARNING: Removing unreachable block (ram,0x000101907140) */

void FUN_1019070e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dd2558 != -1) {
    func_0x000107c61568(0x112dd2558,FUN_101906c38);
  }
  uVar5 = uRam0000000113803800;
  uVar4 = uRam00000001138037f8;
  uVar3 = uRam00000001138037f0;
  uVar2 = uRam00000001138037e8;
  uVar1 = uRam00000001138037e0;
  *param_1 = uRam00000001138037d8;
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



/* Entry: 101907180; end: 1019071bb;  */

void FUN_101907180(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dd27e8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dd27e8,&UNK_10d994868);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1019071bc; end: 101907317;  */

void FUN_1019071bc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101907318; end: 1019073b7;  */

uint FUN_101907318(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_108 = param_1[0x1b];
  uStack_110 = param_1[0x1a];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  uStack_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_38 = param_2[0x19];
  uStack_40 = param_2[0x18];
  uStack_28 = param_2[0x1b];
  uStack_30 = param_2[0x1a];
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  uStack_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  FUN_10190a7c8(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 1019073b8; end: 101907453;  */

void FUN_1019073b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112dd24c8 != -1) {
    func_0x000107c61568(0x112dd24c8,FUN_101902d7c);
  }
  uVar2 = uRam0000000113803660;
  uVar1 = uRam0000000113803658;
  func_0x000107c61438(uRam0000000113803660,2);
  func_0x000107c5fb78(0xd000000000000012,0x800000010efc0580);
  func_0x000107c6142c(uVar2);
  uRam0000000113803808 = uVar1;
  uRam0000000113803810 = uVar2;
  return;
}



/* Entry: 101907454; end: 10190749b;  */

void FUN_101907454(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9934b0,0xf,2);
  uRam0000000113803820 = uStack_38;
  uRam0000000113803818 = uStack_40;
  uRam0000000113803830 = uStack_28;
  uRam0000000113803828 = uStack_30;
  uRam0000000113803840 = uStack_18;
  uRam0000000113803838 = uStack_20;
  return;
}



/* Entry: 10190749c; end: 101907533;  */

void FUN_10190749c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1019074f0:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x00010190750c;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_1019074d8;
code_r0x00010190750c:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_1019074d8:
    (*pcVar3)();
  }
  goto LAB_1019074f0;
}



/* Entry: 101907534; end: 1019075d7;  */

void FUN_101907534(undefined8 param_1,undefined8 param_2,long param_3)

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
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1019075d8; end: 10190762f;  */

void FUN_1019075d8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 101907630; end: 101907657;  */

void FUN_101907630(void)

{
  FUN_10190749c();
  return;
}



/* Entry: 101907658; end: 10190768f;  */

uint FUN_101907658(long param_1,long param_2)

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
  func_0x000101911bac();
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



/* Entry: 101907690; end: 1019076d7;  */

uint FUN_101907690(undefined8 *param_1)

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
  FUN_10190ac0c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1019076d8; end: 101907777;  */

/* WARNING: Possible PIC construction at 0x000101907724: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101907734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101907728) */
/* WARNING: Removing unreachable block (ram,0x000101907738) */

void FUN_1019076d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dd2570 != -1) {
    func_0x000107c61568(0x112dd2570,FUN_101907454);
  }
  uVar5 = uRam0000000113803840;
  uVar4 = uRam0000000113803838;
  uVar3 = uRam0000000113803830;
  uVar2 = uRam0000000113803828;
  uVar1 = uRam0000000113803820;
  *param_1 = uRam0000000113803818;
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



/* Entry: 101907778; end: 10190778b;  */

void FUN_101907778(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dd27d8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dd27d8,&UNK_10d994860);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10190778c; end: 1019077bf;  */

void FUN_10190778c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 1019077c0; end: 1019078d3;  */

void FUN_1019077c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019078d4; end: 101907917;  */

uint FUN_1019078d4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10190ac0c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101907918; end: 101907987;  */

void FUN_101907918(void)

{
  func_0x000107c5fb78(0xd000000000000018,0x800000010efc0560);
  uRam0000000113803848 = 0xd00000000000002d;
  uRam0000000113803850 = 0x800000010efc0530;
  return;
}



/* Entry: 101907988; end: 1019079cf;  */

void FUN_101907988(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d994a50,0x53,2);
  uRam0000000113803860 = uStack_38;
  uRam0000000113803858 = uStack_40;
  uRam0000000113803870 = uStack_28;
  uRam0000000113803868 = uStack_30;
  uRam0000000113803880 = uStack_18;
  uRam0000000113803878 = uStack_20;
  return;
}



/* Entry: 1019079d0; end: 101907b0f;  */

/* WARNING: Removing unreachable block (ram,0x000101907af8) */

void FUN_1019079d0(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) goto LAB_101907a5c;
          pcVar5 = *(code **)(param_3 + 0x150);
        }
LAB_101907a4c:
        (*pcVar5)();
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 400);
          func_0x00010190b598();
          lVar2 = unaff_x20 + 0x20;
          puVar3 = &UNK_110411738;
        }
        else {
          if (lVar1 == 4) {
            pcVar5 = *(code **)(param_3 + 0x160);
            goto LAB_101907a4c;
          }
          if (lVar1 != 5) goto LAB_101907a5c;
          pcVar5 = *(code **)(param_3 + 400);
          func_0x00010190b5d8();
          lVar2 = unaff_x20 + 0x30;
          puVar3 = &UNK_1104117c8;
        }
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_101907a5c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101907b10; end: 101907c67;  */

void FUN_101907b10(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  
  uVar3 = unaff_x20[1];
  uVar2 = *unaff_x20 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar2 = uVar3 >> 0x38 & 0xf;
  }
  if ((uVar2 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar3,1,param_2,param_3), unaff_x21 == 0)) {
    uVar3 = unaff_x20[2];
    uVar1 = unaff_x20[3];
    uVar2 = uVar3 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if ((uVar2 == 0) ||
       ((**(code **)(param_3 + 0x70))(uVar3,uVar1,2,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[4];
      if (*(long *)(uVar2 + 0x10) != 0) {
        pcVar4 = *(code **)(param_3 + 400);
        func_0x00010190b598();
        (*pcVar4)(uVar2,3,&UNK_110411738,uVar3,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      uVar2 = unaff_x20[5];
      if ((*(long *)(uVar2 + 0x10) == 0) ||
         ((**(code **)(param_3 + 0x100))(uVar2,4,param_2,param_3), unaff_x21 == 0)) {
        uVar3 = unaff_x20[6];
        if (*(long *)(uVar3 + 0x10) != 0) {
          pcVar4 = *(code **)(param_3 + 400);
          func_0x00010190b5d8();
          (*pcVar4)(uVar3,5,&UNK_1104117c8,uVar2,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        func_0x000100076224(param_1,unaff_x20[7],unaff_x20[8],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 101907c68; end: 101907cbb;  */

void FUN_101907c68(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[4] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[5] = puVar1;
  param_1[6] = puVar1;
  param_1[8] = 0xc000000000000000;
  param_1[7] = 0;
  return;
}



/* Entry: 101907cbc; end: 101907ceb;  */

undefined1  [16] FUN_101907cbc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Entry: 101907cec; end: 101907d1f;  */

void FUN_101907cec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 101907d20; end: 101907d33;  */

undefined1  [16] FUN_101907d20(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x101907d30;
  return auVar1;
}



/* Entry: 101907d34; end: 101907d5b;  */

void FUN_101907d34(void)

{
  FUN_1019079d0();
  return;
}



/* Entry: 101907d5c; end: 101907d5f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101907d5c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101907d60; end: 101907d97;  */

uint FUN_101907d60(long param_1,long param_2)

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
  FUN_101911b6c();
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



/* Entry: 101907d98; end: 101907def;  */

uint FUN_101907d98(undefined8 *param_1)

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
  FUN_10190a4f8(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 101907df0; end: 101907e8f;  */

/* WARNING: Possible PIC construction at 0x000101907e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101907e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101907e40) */
/* WARNING: Removing unreachable block (ram,0x000101907e50) */

void FUN_101907df0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dd2588 != -1) {
    func_0x000107c61568(0x112dd2588,FUN_101907988);
  }
  uVar5 = uRam0000000113803880;
  uVar4 = uRam0000000113803878;
  uVar3 = uRam0000000113803870;
  uVar2 = uRam0000000113803868;
  uVar1 = uRam0000000113803860;
  *param_1 = uRam0000000113803858;
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



/* Entry: 101907e90; end: 101907ecb;  */

void FUN_101907e90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dd27c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dd27c8,&UNK_10d994858);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101907ecc; end: 101907fdf;  */

void FUN_101907ecc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101907fe0; end: 10190807f;  */

uint FUN_101907fe0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10190a4f8(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 101908080; end: 10190811f;  */

/* WARNING: Possible PIC construction at 0x0001019080cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019080dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019080d0) */
/* WARNING: Removing unreachable block (ram,0x0001019080e0) */

void FUN_101908080(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dd25a8 != -1) {
    func_0x000107c61568(0x112dd25a8,0x101908038);
  }
  uVar5 = uRam00000001138038b0;
  uVar4 = uRam00000001138038a8;
  uVar3 = uRam00000001138038a0;
  uVar2 = uRam0000000113803898;
  uVar1 = uRam0000000113803890;
  *param_1 = uRam0000000113803888;
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



/* Entry: 101908120; end: 101908167;  */

void FUN_101908120(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9948d0,0x43,2);
  uRam00000001138038c0 = uStack_38;
  uRam00000001138038b8 = uStack_40;
  uRam00000001138038d0 = uStack_28;
  uRam00000001138038c8 = uStack_30;
  uRam00000001138038e0 = uStack_18;
  uRam00000001138038d8 = uStack_20;
  return;
}



/* Entry: 101908168; end: 101908207;  */

/* WARNING: Possible PIC construction at 0x0001019081b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019081c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019081b8) */
/* WARNING: Removing unreachable block (ram,0x0001019081c8) */

void FUN_101908168(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dd25b0 != -1) {
    func_0x000107c61568(0x112dd25b0,FUN_101908120);
  }
  uVar5 = uRam00000001138038e0;
  uVar4 = uRam00000001138038d8;
  uVar3 = uRam00000001138038d0;
  uVar2 = uRam00000001138038c8;
  uVar1 = uRam00000001138038c0;
  *param_1 = uRam00000001138038b8;
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



/* Entry: 101908208; end: 1019084d3;  */

long FUN_101908208(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar1 != 0) && (param_1 != param_2)) {
    pcVar3 = (char *)(param_2 + 0x28);
    plVar2 = (long *)(param_1 + 0x20);
    do {
      if (*pcVar3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010190826c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10d9934cc)[*(long *)(pcVar3 + -8)] * 4 + 0x101908270))();
        return param_1;
      }
      if (*plVar2 != *(long *)(pcVar3 + -8)) {
        return 0;
      }
      pcVar3 = pcVar3 + 0x10;
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 2;
    } while (lVar1 != 0);
  }
  return 1;
}



/* Entry: 1019084d4; end: 101908a43;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_1019084d4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                   ulong param_6,undefined8 param_7,ulong param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  byte bVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  ulong *puVar22;
  ulong *puVar23;
  long lVar24;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *(long *)(param_1 + 0x10);
  if (lVar24 == *(long *)(param_2 + 0x10)) {
    if ((lVar24 != 0) && (param_1 != param_2)) {
      puVar22 = (ulong *)(param_1 + 0x40);
      puVar23 = (ulong *)(param_2 + 0x40);
      do {
        uVar17 = puVar22[-4];
        uVar4 = puVar22[-3];
        uVar19 = puVar22[-2];
        uVar2 = puVar22[-1];
        uVar13 = *puVar22;
        param_3 = puVar23[-4];
        uVar5 = puVar23[-3];
        uVar11 = puVar23[-2];
        uVar3 = puVar23[-1];
        uVar6 = *puVar23;
        param_4 = uVar5;
        if (uVar17 == param_3 && uVar4 == uVar5) {
          if ((int)uVar19 != (int)uVar11) goto LAB_1019089dc;
        }
        else {
          param_5 = 0;
          param_2 = uVar4;
          func_0x000107c605b8();
          uVar10 = 0;
          if (((uVar17 & 1) == 0) || ((int)uVar19 != (int)uVar11)) goto LAB_1019089e8;
        }
        uVar15 = (uint)(uVar13 >> 0x20);
        uVar14 = uVar15 >> 0x1e;
        uVar7 = (uint)(uVar6 >> 0x20);
        uVar18 = uVar7 >> 0x1e;
        iVar21 = (int)uVar2;
        if (uVar13 >> 0x3e == 3) {
          uVar17 = 0;
          if ((((uVar2 != 0) || (uVar13 != 0xc000000000000000)) || (uVar6 >> 0x3e < 3)) ||
             ((uVar17 = 0, uVar3 != 0 || (uVar6 != 0xc000000000000000))))
          goto joined_r0x0001019087fc;
        }
        else {
          if (uVar15 >> 0x1e < 2) {
            if (uVar14 == 0) {
              uVar17 = uVar13 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar16,iVar21)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x101908a2c);
                (*pcVar9)();
              }
              uVar17 = (ulong)(iVar16 - iVar21);
            }
joined_r0x0001019087fc:
            if (uVar7 >> 0x1e < 2) goto LAB_10190864c;
LAB_101908618:
            if (uVar18 != 2) {
              if (uVar17 == 0) goto LAB_101908534;
              goto LAB_1019089dc;
            }
            uVar19 = *(long *)(uVar3 + 0x18) - *(long *)(uVar3 + 0x10);
            if (SBORROW8(*(long *)(uVar3 + 0x18),*(long *)(uVar3 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x101908a28);
              (*pcVar9)();
            }
          }
          else {
            if (uVar14 == 2) {
              uVar17 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
              if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x101908a30);
                (*pcVar9)();
              }
              goto joined_r0x0001019087fc;
            }
            uVar17 = 0;
            if (1 < uVar18) goto LAB_101908618;
LAB_10190864c:
            if (uVar18 == 0) {
              uVar19 = uVar6 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uVar3 >> 0x20);
              if (SBORROW4(iVar16,(int)uVar3)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x101908a24);
                (*pcVar9)();
              }
              uVar19 = (ulong)(iVar16 - (int)uVar3);
            }
          }
          if (uVar17 != uVar19) goto LAB_1019089dc;
          if (0 < (long)uVar17) {
            param_3 = uVar3;
            param_4 = uVar6;
            if (uVar14 < 2) {
              if (uVar14 != 0) {
                lVar20 = (long)iVar21;
                uVar17 = ((long)uVar2 >> 0x20) - lVar20;
                if ((long)uVar2 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x101908a34);
                  (*pcVar9)();
                }
                func_0x000107c61434(uVar4);
                func_0x00010006c00c(uVar2,uVar13);
                func_0x000107c61434(uVar5);
                uVar19 = uVar3;
                func_0x00010006c00c(uVar3,uVar6);
                func_0x000107c5ec30();
                if (uVar19 == 0) {
                  func_0x000107c5ec38();
                  lVar20 = 0;
                  lVar12 = 0;
                }
                else {
                  uVar11 = uVar19;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar20,uVar11)) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x101908a40);
                    (*pcVar9)();
                  }
                  lVar1 = (lVar20 - uVar11) + uVar19;
                  func_0x000107c5ec38();
                  if ((long)uVar17 <= (long)uVar11) {
                    uVar11 = uVar17;
                  }
                  lVar20 = 0;
                  if (lVar1 != 0) {
                    lVar20 = lVar1;
                  }
                  lVar12 = 0;
                  if (lVar1 != 0) {
                    lVar12 = uVar11 + lVar1;
                  }
                }
                func_0x000100e25bdc(abStack_80,lVar20,lVar12);
                func_0x000107c6142c(uVar5);
                func_0x00010006c090(uVar3,uVar6);
                func_0x000107c6142c(uVar4);
                func_0x00010006c090(uVar2);
                param_2 = uVar13;
                if ((abStack_80[0] & 1) != 0) goto LAB_101908534;
                goto LAB_1019089dc;
              }
              abStack_80[0] = (byte)uVar2;
              abStack_80[1] = (byte)(uVar2 >> 8);
              abStack_80[2] = (byte)(uVar2 >> 0x10);
              abStack_80[3] = (byte)(uVar2 >> 0x18);
              abStack_80[4] = (byte)(uVar2 >> 0x20);
              abStack_80[5] = (byte)(uVar2 >> 0x28);
              abStack_80[6] = (byte)(uVar2 >> 0x30);
              abStack_80[7] = (byte)(uVar2 >> 0x38);
              abStack_80[8] = (byte)uVar13;
              abStack_80[9] = (byte)(uVar13 >> 8);
              abStack_80[10] = (byte)(uVar13 >> 0x10);
              abStack_80[0xb] = (byte)(uVar13 >> 0x18);
              abStack_80[0xc] = (byte)(uVar13 >> 0x20);
              abStack_80[0xd] = (byte)(uVar13 >> 0x28);
              func_0x000107c61434(uVar4);
              func_0x00010006c00c(uVar2,uVar13);
              func_0x000107c61434(uVar5);
              func_0x00010006c00c(uVar3,uVar6);
              func_0x000100e25bdc(&bStack_81,abStack_80,abStack_80 + (uVar13 >> 0x30 & 0xff));
              func_0x000107c6142c(uVar5);
              func_0x00010006c090(uVar3,uVar6);
LAB_101908908:
              func_0x000107c6142c(uVar4);
              func_0x00010006c090(uVar2);
              bVar8 = bStack_81;
            }
            else {
              if (uVar14 != 2) {
                abStack_80[8] = 0;
                abStack_80[9] = 0;
                abStack_80[10] = 0;
                abStack_80[0xb] = 0;
                abStack_80[0xc] = 0;
                abStack_80[0xd] = 0;
                abStack_80[0] = 0;
                abStack_80[1] = 0;
                abStack_80[2] = 0;
                abStack_80[3] = 0;
                abStack_80[4] = 0;
                abStack_80[5] = 0;
                abStack_80[6] = 0;
                abStack_80[7] = 0;
                func_0x000107c61434(uVar4);
                func_0x00010006c00c(uVar2,uVar13);
                func_0x000107c61434(uVar5);
                func_0x00010006c00c(uVar3,uVar6);
                func_0x000100e25bdc(&bStack_81,abStack_80,abStack_80);
                func_0x000107c6142c(uVar5);
                func_0x00010006c090(uVar3,uVar6);
                goto LAB_101908908;
              }
              lVar20 = *(long *)(uVar2 + 0x10);
              lVar12 = *(long *)(uVar2 + 0x18);
              func_0x000107c61434(uVar4);
              func_0x00010006c00c(uVar2,uVar13);
              func_0x000107c61434(uVar5);
              uVar17 = uVar3;
              func_0x00010006c00c(uVar3,uVar6);
              func_0x000107c5ec30();
              uVar19 = uVar17;
              if (uVar17 != 0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar20,uVar19)) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x101908a3c);
                  (*pcVar9)();
                }
                uVar17 = (lVar20 - uVar19) + uVar17;
              }
              uVar11 = lVar12 - lVar20;
              if (SBORROW8(lVar12,lVar20)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x101908a38);
                (*pcVar9)();
              }
              func_0x000107c5ec38();
              if (uVar17 == 0) {
                lVar20 = 0;
              }
              else {
                if ((long)uVar11 <= (long)uVar19) {
                  uVar19 = uVar11;
                }
                lVar20 = uVar19 + uVar17;
              }
              func_0x000100e25bdc(abStack_80,uVar17,lVar20);
              func_0x000107c6142c(uVar5);
              func_0x00010006c090(uVar3,uVar6);
              func_0x000107c6142c(uVar4);
              func_0x00010006c090(uVar2);
              bVar8 = abStack_80[0];
            }
            param_2 = uVar13;
            if ((bVar8 & 1) == 0) goto LAB_1019089dc;
          }
        }
LAB_101908534:
        puVar22 = puVar22 + 5;
        puVar23 = puVar23 + 5;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    uVar10 = 1;
  }
  else {
LAB_1019089dc:
    uVar10 = 0;
  }
LAB_1019089e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar10;
  }
  func_0x000107c60e78();
  uVar15 = (uint)(param_4 >> 0x3c) & 3;
  if (uVar15 == 0) {
    if ((param_8 & 0x3000000000000000) != 0) {
      return 0;
    }
    FUN_1019084d4();
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    func_0x000100e25fcc(param_2,param_3,param_6,param_7);
    param_3 = param_2;
    goto joined_r0x000101908ac8;
  }
  if (uVar15 == 1) {
    if ((param_8 & 0x3000000000000000) != 0x1000000000000000) {
      return 0;
    }
    if ((param_6 & 0xff) == 1) {
      if (param_5 == 0) {
LAB_101908af8:
        if (uVar10 != 0) {
          return 0;
        }
      }
      else if (param_5 == 1) {
LAB_101908b0c:
        if (uVar10 != 1) {
          return 0;
        }
      }
      else {
LAB_101908b20:
        if (uVar10 != 2) {
          return 0;
        }
      }
    }
    else {
LAB_101908b00:
      if (uVar10 != param_5) {
        return 0;
      }
    }
  }
  else {
    if ((param_8 & 0x3000000000000000) != 0x2000000000000000) {
      return 0;
    }
    if ((param_6 & 0xff) != 1) goto LAB_101908b00;
    if ((long)param_5 < 2) {
      if (param_5 != 0) goto LAB_101908b0c;
      goto LAB_101908af8;
    }
    if (param_5 == 2) goto LAB_101908b20;
    if (uVar10 != 3) {
      return 0;
    }
  }
  func_0x000100e25fcc(param_3,param_4 & 0xcfffffffffffffff,param_7,param_8 & 0xcfffffffffffffff);
joined_r0x000101908ac8:
  if ((param_3 & 1) == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 101908a44; end: 101908b67;  */

undefined8
FUN_101908a44(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
             undefined8 param_7,ulong param_8)

{
  uint uVar1;
  
  uVar1 = (uint)(param_4 >> 0x3c) & 3;
  if (uVar1 == 0) {
    if ((param_8 & 0x3000000000000000) != 0) {
      return 0;
    }
    FUN_1019084d4(param_1,param_5);
    if ((param_1 & 1) == 0) {
      return 0;
    }
    func_0x000100e25fcc(param_2,param_3,param_6,param_7);
    param_3 = param_2;
    goto joined_r0x000101908ac8;
  }
  if (uVar1 == 1) {
    if ((param_8 & 0x3000000000000000) != 0x1000000000000000) {
      return 0;
    }
    if ((param_6 & 0xff) == 1) {
      if (param_5 == 0) {
LAB_101908af8:
        if (param_1 != 0) {
          return 0;
        }
      }
      else if (param_5 == 1) {
LAB_101908b0c:
        if (param_1 != 1) {
          return 0;
        }
      }
      else {
LAB_101908b20:
        if (param_1 != 2) {
          return 0;
        }
      }
    }
    else {
LAB_101908b00:
      if (param_1 != param_5) {
        return 0;
      }
    }
  }
  else {
    if ((param_8 & 0x3000000000000000) != 0x2000000000000000) {
      return 0;
    }
    if ((param_6 & 0xff) != 1) goto LAB_101908b00;
    if ((long)param_5 < 2) {
      if (param_5 != 0) goto LAB_101908b0c;
      goto LAB_101908af8;
    }
    if (param_5 == 2) goto LAB_101908b20;
    if (param_1 != 3) {
      return 0;
    }
  }
  func_0x000100e25fcc(param_3,param_4 & 0xcfffffffffffffff,param_7,param_8 & 0xcfffffffffffffff);
joined_r0x000101908ac8:
  if ((param_3 & 1) == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 101908b68; end: 101908e93;  */

/* WARNING: Possible PIC construction at 0x000101908b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101908b9c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101908b68(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
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
  
  pbVar12 = (byte *)*param_1;
  pbVar14 = (byte *)param_1[1];
  pbVar15 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar15,pbVar17,0);
    return pbVar12;
  }
  pbVar12 = (byte *)param_1[2];
  FUN_101908208(pbVar12,param_2[2]);
  if (((ulong)pbVar12 & 1) != 0) {
    if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000101908bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10d9934e8)[param_2[3]] * 4 + 0x101908bdc))();
      return pbVar12;
    }
    if ((param_1[3] == param_2[3]) &&
       (((*(byte *)((long)param_1 + 0x21) ^ *(byte *)((long)param_2 + 0x21)) & 1) == 0)) {
      pbVar10 = (byte *)param_1[5];
      pbVar25 = (byte *)param_1[6];
      lVar24 = param_2[5];
      uVar16 = param_2[6];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar16 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
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
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar13 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar16;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar24 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar24 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar24,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar25;
            if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar24 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar13 + 0x10);
          lVar24 = *(long *)(pbVar13 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar12 = pbVar10;
            pbVar14 = pbVar25;
            if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar13 + 0x20);
            lVar24 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar24;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar26;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
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
          lVar26 = *(long *)(pbVar13 + 0x20);
          lVar24 = *(long *)(pbVar13 + 0x18);
          bVar27 = pbVar13[8] | (byte)lVar24;
          bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar13[0x10] | (byte)lVar26;
          bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 8);
        uVar16 = *(ulong *)(pbVar13 + 0x10);
        lVar26 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar26,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 101908e94; end: 10190931b;  */

uint FUN_101908e94(ulong *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined1 auStack_870 [208];
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
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
  
  uVar3 = *param_1;
  if (((uVar3 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar3 & 1) != 0))
     && ((uVar3 = param_1[2], uVar3 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar3 & 1) != 0)))) {
    uStack_3c8 = param_1[0x19];
    uStack_3d0 = param_1[0x18];
    uStack_148 = param_1[0x1b];
    uStack_150 = param_1[0x1a];
    uStack_3b8 = param_1[0x1b];
    uStack_3c0 = param_1[0x1a];
    uStack_138 = param_1[0x1d];
    uStack_140 = param_1[0x1c];
    uStack_3a8 = param_1[0x1d];
    uStack_3b0 = param_1[0x1c];
    uStack_128 = param_1[0x1f];
    uStack_130 = param_1[0x1e];
    uStack_408 = param_1[0x11];
    uStack_410 = param_1[0x10];
    uStack_188 = param_1[0x13];
    uStack_190 = param_1[0x12];
    uStack_3f8 = param_1[0x13];
    uStack_400 = param_1[0x12];
    uStack_178 = param_1[0x15];
    uStack_180 = param_1[0x14];
    uStack_3e8 = param_1[0x15];
    uStack_3f0 = param_1[0x14];
    uStack_168 = param_1[0x17];
    uStack_170 = param_1[0x16];
    uStack_3d8 = param_1[0x17];
    uStack_3e0 = param_1[0x16];
    uStack_158 = param_1[0x19];
    uStack_160 = param_1[0x18];
    uStack_448 = param_1[9];
    uStack_450 = param_1[8];
    uStack_1c8 = param_1[0xb];
    uStack_1d0 = param_1[10];
    uStack_438 = param_1[0xb];
    uStack_440 = param_1[10];
    uStack_1b8 = param_1[0xd];
    uStack_1c0 = param_1[0xc];
    uStack_428 = param_1[0xd];
    uStack_430 = param_1[0xc];
    uStack_1a8 = param_1[0xf];
    uStack_1b0 = param_1[0xe];
    uStack_418 = param_1[0xf];
    uStack_420 = param_1[0xe];
    uStack_198 = param_1[0x11];
    uStack_1a0 = param_1[0x10];
    uStack_1e8 = param_1[7];
    uStack_1f0 = param_1[6];
    uStack_1d8 = param_1[9];
    uStack_1e0 = param_1[8];
    uStack_458 = param_1[7];
    uStack_460 = param_1[6];
    uStack_2f8 = param_2[0x19];
    uStack_300 = param_2[0x18];
    uStack_218 = param_2[0x1b];
    uStack_220 = param_2[0x1a];
    uStack_2e8 = param_2[0x1b];
    uStack_2f0 = param_2[0x1a];
    uStack_208 = param_2[0x1d];
    uStack_210 = param_2[0x1c];
    uStack_2d8 = param_2[0x1d];
    uStack_2e0 = param_2[0x1c];
    uStack_1f8 = param_2[0x1f];
    uStack_200 = param_2[0x1e];
    uStack_338 = param_2[0x11];
    uStack_340 = param_2[0x10];
    uStack_258 = param_2[0x13];
    uStack_260 = param_2[0x12];
    uStack_328 = param_2[0x13];
    uStack_330 = param_2[0x12];
    uStack_248 = param_2[0x15];
    uStack_250 = param_2[0x14];
    uStack_318 = param_2[0x15];
    uStack_320 = param_2[0x14];
    uStack_238 = param_2[0x17];
    uStack_240 = param_2[0x16];
    uStack_308 = param_2[0x17];
    uStack_310 = param_2[0x16];
    uStack_228 = param_2[0x19];
    uStack_230 = param_2[0x18];
    uStack_378 = param_2[9];
    uStack_380 = param_2[8];
    uStack_298 = param_2[0xb];
    uStack_2a0 = param_2[10];
    uStack_368 = param_2[0xb];
    uStack_370 = param_2[10];
    uStack_288 = param_2[0xd];
    uStack_290 = param_2[0xc];
    uStack_358 = param_2[0xd];
    uStack_360 = param_2[0xc];
    uStack_278 = param_2[0xf];
    uStack_280 = param_2[0xe];
    uStack_348 = param_2[0xf];
    uStack_350 = param_2[0xe];
    uStack_270 = param_2[0x10];
    uStack_268 = param_2[0x11];
    uStack_2b8 = param_2[7];
    uStack_2c0 = param_2[6];
    uStack_2b0 = param_2[8];
    uStack_2a8 = param_2[9];
    uStack_388 = param_2[7];
    uStack_390 = param_2[6];
    uStack_2c8 = param_2[0x1f];
    uStack_2d0 = param_2[0x1e];
    uStack_398 = param_1[0x1f];
    uStack_3a0 = param_1[0x1e];
    iVar1 = (int)&uStack_460;
    func_0x000100cbea38();
    if (iVar1 == 1) {
      iVar1 = (int)&uStack_390;
      func_0x000100cbea38();
      if (iVar1 == 1) {
        uStack_558 = uStack_3b8;
        uStack_560 = uStack_3c0;
        uStack_548 = uStack_3a8;
        uStack_550 = uStack_3b0;
        uStack_538 = uStack_398;
        uStack_540 = uStack_3a0;
        uStack_598 = uStack_3f8;
        uStack_5a0 = uStack_400;
        uStack_588 = uStack_3e8;
        uStack_590 = uStack_3f0;
        uStack_578 = uStack_3d8;
        uStack_580 = uStack_3e0;
        uStack_568 = uStack_3c8;
        uStack_570 = uStack_3d0;
        uStack_5d8 = uStack_438;
        uStack_5e0 = uStack_440;
        uStack_5c8 = uStack_428;
        uStack_5d0 = uStack_430;
        uStack_5b8 = uStack_418;
        uStack_5c0 = uStack_420;
        uStack_5a8 = uStack_408;
        uStack_5b0 = uStack_410;
        uStack_5f8 = uStack_458;
        uStack_600 = uStack_460;
        uStack_5e8 = uStack_448;
        uStack_5f0 = uStack_450;
        func_0x000101912100(&uStack_1f0,&uStack_120,0x112dd2278,&UNK_10d993520);
        func_0x000101912100(&uStack_2c0,&uStack_120,0x112dd2278,&UNK_10d993520);
        func_0x0001019120c0(&uStack_600,0x112dd2278,&UNK_10d993520);
LAB_1019092f0:
        uVar3 = param_1[4];
        func_0x000100e25fcc(uVar3,param_1[5],param_2[4],param_2[5]);
        uVar2 = (uint)uVar3;
        goto LAB_1019092fc;
      }
    }
    else {
      uStack_628 = uStack_3b8;
      uStack_630 = uStack_3c0;
      uStack_618 = uStack_3a8;
      uStack_620 = uStack_3b0;
      uStack_608 = uStack_398;
      uStack_610 = uStack_3a0;
      uStack_668 = uStack_3f8;
      uStack_670 = uStack_400;
      uStack_658 = uStack_3e8;
      uStack_660 = uStack_3f0;
      uStack_648 = uStack_3d8;
      uStack_650 = uStack_3e0;
      uStack_638 = uStack_3c8;
      uStack_640 = uStack_3d0;
      uStack_6a8 = uStack_438;
      uStack_6b0 = uStack_440;
      uStack_698 = uStack_428;
      uStack_6a0 = uStack_430;
      uStack_688 = uStack_418;
      uStack_690 = uStack_420;
      uStack_678 = uStack_408;
      uStack_680 = uStack_410;
      uStack_6c8 = uStack_458;
      uStack_6d0 = uStack_460;
      uStack_6b8 = uStack_448;
      uStack_6c0 = uStack_450;
      iVar1 = (int)&uStack_390;
      func_0x000100cbea38();
      if (iVar1 != 1) {
        uStack_6f8 = uStack_2e8;
        uStack_700 = uStack_2f0;
        uStack_6e8 = uStack_2d8;
        uStack_6f0 = uStack_2e0;
        uStack_6d8 = uStack_2c8;
        uStack_6e0 = uStack_2d0;
        uStack_738 = uStack_328;
        uStack_740 = uStack_330;
        uStack_728 = uStack_318;
        uStack_730 = uStack_320;
        uStack_718 = uStack_308;
        uStack_720 = uStack_310;
        uStack_708 = uStack_2f8;
        uStack_710 = uStack_300;
        uStack_778 = uStack_368;
        uStack_780 = uStack_370;
        uStack_768 = uStack_358;
        uStack_770 = uStack_360;
        uStack_758 = uStack_348;
        uStack_760 = uStack_350;
        uStack_748 = uStack_338;
        uStack_750 = uStack_340;
        uStack_798 = uStack_388;
        uStack_7a0 = uStack_390;
        uStack_788 = uStack_378;
        uStack_790 = uStack_380;
        uStack_558 = uStack_2e8;
        uStack_560 = uStack_2f0;
        uStack_548 = uStack_2d8;
        uStack_550 = uStack_2e0;
        uStack_538 = uStack_2c8;
        uStack_540 = uStack_2d0;
        uStack_598 = uStack_328;
        uStack_5a0 = uStack_330;
        uStack_588 = uStack_318;
        uStack_590 = uStack_320;
        uStack_578 = uStack_308;
        uStack_580 = uStack_310;
        uStack_568 = uStack_2f8;
        uStack_570 = uStack_300;
        uStack_5d8 = uStack_368;
        uStack_5e0 = uStack_370;
        uStack_5c8 = uStack_358;
        uStack_5d0 = uStack_360;
        uStack_5b8 = uStack_348;
        uStack_5c0 = uStack_350;
        uStack_5a8 = uStack_338;
        uStack_5b0 = uStack_340;
        uStack_5f8 = uStack_388;
        uStack_600 = uStack_390;
        uStack_5e8 = uStack_378;
        uStack_5f0 = uStack_380;
        uStack_78 = uStack_628;
        uStack_80 = uStack_630;
        uStack_68 = uStack_618;
        uStack_70 = uStack_620;
        uStack_58 = uStack_608;
        uStack_60 = uStack_610;
        uStack_b8 = uStack_668;
        uStack_c0 = uStack_670;
        uStack_a8 = uStack_658;
        uStack_b0 = uStack_660;
        uStack_88 = uStack_638;
        uStack_90 = uStack_640;
        uStack_98 = uStack_648;
        uStack_a0 = uStack_650;
        uStack_f8 = uStack_6a8;
        uStack_100 = uStack_6b0;
        uStack_e8 = uStack_698;
        uStack_f0 = uStack_6a0;
        uStack_c8 = uStack_678;
        uStack_d0 = uStack_680;
        uStack_d8 = uStack_688;
        uStack_e0 = uStack_690;
        uStack_108 = uStack_6b8;
        uStack_110 = uStack_6c0;
        uStack_118 = uStack_6c8;
        uStack_120 = uStack_6d0;
        func_0x000101912100(&uStack_1f0,auStack_870,0x112dd2278,&UNK_10d993520);
        func_0x000101912100(&uStack_2c0,auStack_870,0x112dd2278,&UNK_10d993520);
        puVar4 = &uStack_120;
        func_0x000101908cb0(puVar4,&uStack_600);
        func_0x0001019120c0(&uStack_7a0,0x112dd2278,&UNK_10d993520);
        func_0x0001019120c0(&uStack_460,0x112dd2278,&UNK_10d993520);
        if (((ulong)puVar4 & 1) != 0) goto LAB_1019092f0;
        goto LAB_1019091bc;
      }
    }
    func_0x000107c610b4(&uStack_600,&uStack_460,0x1a0);
    func_0x000101912100(&uStack_1f0,&uStack_120,0x112dd2278,&UNK_10d993520);
    func_0x000101912100(&uStack_2c0,&uStack_120,0x112dd2278,&UNK_10d993520);
    func_0x0001019120c0(&uStack_600,0x112dd2280,&UNK_10d993528);
  }
LAB_1019091bc:
  uVar2 = 0;
LAB_1019092fc:
  return uVar2 & 1;
}



/* Entry: 10190931c; end: 10190a2cb;  */

uint FUN_10190931c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_b70 [208];
  ulong uStack_aa0;
  ulong uStack_a98;
  ulong uStack_a90;
  ulong uStack_a88;
  ulong uStack_a80;
  ulong uStack_a78;
  ulong uStack_a70;
  ulong uStack_a68;
  ulong uStack_a60;
  ulong uStack_a58;
  ulong uStack_a50;
  ulong uStack_a48;
  ulong uStack_a40;
  ulong uStack_a38;
  ulong uStack_a30;
  ulong uStack_a28;
  ulong uStack_a20;
  ulong uStack_a18;
  ulong uStack_a10;
  ulong uStack_a08;
  ulong uStack_a00;
  ulong uStack_9f8;
  ulong uStack_9f0;
  ulong uStack_9e8;
  ulong uStack_9e0;
  ulong uStack_9d8;
  ulong uStack_9d0;
  ulong uStack_9c8;
  ulong uStack_9c0;
  ulong uStack_9b8;
  ulong uStack_9b0;
  ulong uStack_9a8;
  ulong uStack_9a0;
  ulong uStack_998;
  ulong uStack_990;
  ulong uStack_988;
  ulong uStack_980;
  ulong uStack_978;
  ulong uStack_970;
  ulong uStack_968;
  ulong uStack_960;
  ulong uStack_958;
  ulong uStack_950;
  ulong uStack_948;
  ulong uStack_940;
  ulong uStack_938;
  ulong uStack_930;
  ulong uStack_928;
  ulong uStack_920;
  ulong uStack_918;
  ulong uStack_910;
  ulong uStack_908;
  ulong uStack_900;
  ulong uStack_8f8;
  ulong uStack_8f0;
  ulong uStack_8e8;
  ulong uStack_8e0;
  ulong uStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  ulong uStack_8b8;
  ulong uStack_8b0;
  ulong uStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong auStack_4b8 [33];
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
  
  func_0x000107c610b4(auStack_4b8,param_1,0x101);
  iVar7 = (int)auStack_4b8;
  func_0x00010190a67c();
  if (iVar7 < 2) {
    if (iVar7 == 0) {
      puVar11 = auStack_4b8;
      func_0x00010190a684();
      uVar9 = *puVar11;
      uVar10 = puVar11[1];
      uVar12 = puVar11[2];
      func_0x000107c610b4(&uStack_760,param_2,0x101);
      iVar7 = (int)&uStack_760;
      func_0x00010190a67c();
      if (iVar7 == 0) {
        puVar11 = &uStack_760;
        func_0x00010190a684();
        uVar3 = puVar11[1];
        uVar13 = puVar11[2];
        FUN_101908208(uVar9,*puVar11);
        if ((uVar9 & 1) != 0) {
          func_0x000100e25fcc(uVar10,uVar12,uVar3,uVar13);
joined_r0x000101909884:
          if ((uVar10 & 1) != 0) {
            uVar8 = 1;
            goto LAB_101909b20;
          }
        }
      }
    }
    else {
      puVar11 = auStack_4b8;
      func_0x00010190a6c8();
      uStack_8f8 = puVar11[1];
      uStack_900 = *puVar11;
      uStack_8e8 = puVar11[3];
      uStack_8f0 = puVar11[2];
      uStack_8d8 = puVar11[5];
      uStack_8e0 = puVar11[4];
      uStack_8d0 = puVar11[6];
      func_0x000107c610b4(&uStack_760,param_2,0x101);
      iVar7 = (int)&uStack_760;
      func_0x00010190a67c();
      if (iVar7 == 1) {
        puVar11 = &uStack_760;
        func_0x00010190a6c8();
        uStack_5b8 = puVar11[1];
        uStack_5c0 = *puVar11;
        uStack_5a8 = puVar11[3];
        uStack_5b0 = puVar11[2];
        uStack_598 = puVar11[5];
        uStack_5a0 = puVar11[4];
        uStack_590 = puVar11[6];
        puVar11 = &uStack_900;
        func_0x000101908b68(puVar11,&uStack_5c0);
        uVar8 = (uint)puVar11;
        goto LAB_101909b20;
      }
    }
  }
  else if (iVar7 == 2) {
    puVar11 = auStack_4b8;
    func_0x00010190a730();
    uStack_838 = puVar11[0x19];
    uStack_840 = puVar11[0x18];
    uStack_828 = puVar11[0x1b];
    uStack_830 = puVar11[0x1a];
    uStack_818 = puVar11[0x1d];
    uStack_820 = puVar11[0x1c];
    uStack_808 = puVar11[0x1f];
    uStack_810 = puVar11[0x1e];
    uStack_878 = puVar11[0x11];
    uStack_880 = puVar11[0x10];
    uStack_868 = puVar11[0x13];
    uStack_870 = puVar11[0x12];
    uStack_858 = puVar11[0x15];
    uStack_860 = puVar11[0x14];
    uStack_848 = puVar11[0x17];
    uStack_850 = puVar11[0x16];
    uStack_8b8 = puVar11[9];
    uStack_8c0 = puVar11[8];
    uStack_8a8 = puVar11[0xb];
    uStack_8b0 = puVar11[10];
    uStack_898 = puVar11[0xd];
    uStack_8a0 = puVar11[0xc];
    uStack_888 = puVar11[0xf];
    uStack_890 = puVar11[0xe];
    uStack_8f8 = puVar11[1];
    uStack_900 = *puVar11;
    uStack_8e8 = puVar11[3];
    uStack_8f0 = puVar11[2];
    uStack_8d8 = puVar11[5];
    uStack_8e0 = puVar11[4];
    uStack_8c8 = puVar11[7];
    uStack_8d0 = puVar11[6];
    func_0x000107c610b4(&uStack_760,param_2,0x101);
    iVar7 = (int)&uStack_760;
    func_0x00010190a67c();
    if (iVar7 == 2) {
      puVar11 = &uStack_760;
      func_0x00010190a730();
      uStack_4f8 = puVar11[0x19];
      uStack_500 = puVar11[0x18];
      uStack_4e8 = puVar11[0x1b];
      uStack_4f0 = puVar11[0x1a];
      uStack_4d8 = puVar11[0x1d];
      uStack_4e0 = puVar11[0x1c];
      uStack_4c8 = puVar11[0x1f];
      uStack_4d0 = puVar11[0x1e];
      uStack_538 = puVar11[0x11];
      uStack_540 = puVar11[0x10];
      uStack_528 = puVar11[0x13];
      uStack_530 = puVar11[0x12];
      uStack_518 = puVar11[0x15];
      uStack_520 = puVar11[0x14];
      uStack_508 = puVar11[0x17];
      uStack_510 = puVar11[0x16];
      uStack_578 = puVar11[9];
      uStack_580 = puVar11[8];
      uStack_568 = puVar11[0xb];
      uStack_570 = puVar11[10];
      uStack_558 = puVar11[0xd];
      uStack_560 = puVar11[0xc];
      uStack_548 = puVar11[0xf];
      uStack_550 = puVar11[0xe];
      uStack_5b8 = puVar11[1];
      uStack_5c0 = *puVar11;
      uStack_5a8 = puVar11[3];
      uStack_5b0 = puVar11[2];
      uStack_598 = puVar11[5];
      uStack_5a0 = puVar11[4];
      uStack_588 = puVar11[7];
      uStack_590 = puVar11[6];
      puVar11 = &uStack_900;
      FUN_101908e94(puVar11,&uStack_5c0);
      uVar8 = (uint)puVar11;
      goto LAB_101909b20;
    }
  }
  else if (iVar7 == 3) {
    puVar11 = auStack_4b8;
    FUN_10190a774();
    uVar10 = *puVar11;
    uVar9 = puVar11[1];
    uStack_308 = puVar11[0x17];
    uStack_310 = puVar11[0x16];
    uStack_2f8 = puVar11[0x19];
    uStack_300 = puVar11[0x18];
    uStack_2e8 = puVar11[0x1b];
    uStack_2f0 = puVar11[0x1a];
    uStack_348 = puVar11[0xf];
    uStack_350 = puVar11[0xe];
    uStack_338 = puVar11[0x11];
    uStack_340 = puVar11[0x10];
    uStack_328 = puVar11[0x13];
    uStack_330 = puVar11[0x12];
    uStack_318 = puVar11[0x15];
    uStack_320 = puVar11[0x14];
    uStack_388 = puVar11[7];
    uStack_390 = puVar11[6];
    uStack_378 = puVar11[9];
    uStack_380 = puVar11[8];
    uStack_368 = puVar11[0xb];
    uStack_370 = puVar11[10];
    uStack_358 = puVar11[0xd];
    uStack_360 = puVar11[0xc];
    uStack_3a8 = puVar11[3];
    uStack_3b0 = puVar11[2];
    uStack_398 = puVar11[5];
    uStack_3a0 = puVar11[4];
    func_0x000107c610b4(&uStack_5c0,param_2,0x101);
    iVar7 = (int)&uStack_5c0;
    func_0x00010190a67c();
    if (iVar7 == 3) {
      puVar11 = &uStack_5c0;
      FUN_10190a774();
      uVar12 = *puVar11;
      uVar3 = puVar11[1];
      uStack_178 = puVar11[0x15];
      uStack_180 = puVar11[0x14];
      uStack_168 = puVar11[0x17];
      uStack_170 = puVar11[0x16];
      uStack_1b8 = puVar11[0xd];
      uStack_1c0 = puVar11[0xc];
      uStack_1f8 = puVar11[5];
      uStack_200 = puVar11[4];
      uStack_208 = puVar11[3];
      uStack_210 = puVar11[2];
      uStack_158 = puVar11[0x19];
      uStack_160 = puVar11[0x18];
      uStack_148 = puVar11[0x1b];
      uStack_150 = puVar11[0x1a];
      uStack_1a8 = puVar11[0xf];
      uStack_1b0 = puVar11[0xe];
      uStack_198 = puVar11[0x11];
      uStack_1a0 = puVar11[0x10];
      uStack_188 = puVar11[0x13];
      uStack_190 = puVar11[0x12];
      uStack_1e8 = puVar11[7];
      uStack_1f0 = puVar11[6];
      uStack_1d8 = puVar11[9];
      uStack_1e0 = puVar11[8];
      uStack_1c8 = puVar11[0xb];
      uStack_1d0 = puVar11[10];
      uStack_218 = uStack_2e8;
      uStack_220 = uStack_2f0;
      uStack_238 = uStack_308;
      uStack_240 = uStack_310;
      uStack_228 = uStack_2f8;
      uStack_230 = uStack_300;
      uStack_278 = uStack_348;
      uStack_280 = uStack_350;
      uStack_268 = uStack_338;
      uStack_270 = uStack_340;
      uStack_248 = uStack_318;
      uStack_250 = uStack_320;
      uStack_258 = uStack_328;
      uStack_260 = uStack_330;
      uStack_2b8 = uStack_388;
      uStack_2c0 = uStack_390;
      uStack_2a8 = uStack_378;
      uStack_2b0 = uStack_380;
      uStack_288 = uStack_358;
      uStack_290 = uStack_360;
      uStack_298 = uStack_368;
      uStack_2a0 = uStack_370;
      uStack_2c8 = uStack_398;
      uStack_2d0 = uStack_3a0;
      uStack_2d8 = uStack_3a8;
      uStack_2e0 = uStack_3b0;
      uStack_728 = uStack_378;
      uStack_730 = uStack_380;
      uStack_738 = uStack_388;
      uStack_740 = uStack_390;
      uStack_6e8 = uStack_338;
      uStack_6f0 = uStack_340;
      uStack_6f8 = uStack_348;
      uStack_700 = uStack_350;
      uStack_718 = uStack_368;
      uStack_720 = uStack_370;
      uStack_708 = uStack_358;
      uStack_710 = uStack_360;
      uStack_698 = uStack_2e8;
      uStack_6a0 = uStack_2f0;
      uStack_6a8 = uStack_2f8;
      uStack_6b0 = uStack_300;
      uStack_6b8 = uStack_308;
      uStack_6c0 = uStack_310;
      uStack_6d8 = uStack_328;
      uStack_6e0 = uStack_330;
      uStack_6c8 = uStack_318;
      uStack_6d0 = uStack_320;
      uStack_748 = uStack_398;
      uStack_750 = uStack_3a0;
      uStack_758 = uStack_3a8;
      uStack_760 = uStack_3b0;
      uStack_688 = puVar11[3];
      uStack_690 = puVar11[2];
      uStack_678 = puVar11[5];
      uStack_680 = puVar11[4];
      uStack_668 = puVar11[7];
      uStack_670 = puVar11[6];
      uStack_658 = puVar11[9];
      uStack_660 = puVar11[8];
      uStack_648 = puVar11[0xb];
      uStack_650 = puVar11[10];
      uStack_638 = puVar11[0xd];
      uStack_640 = puVar11[0xc];
      uStack_628 = puVar11[0xf];
      uStack_630 = puVar11[0xe];
      uStack_618 = puVar11[0x11];
      uStack_620 = puVar11[0x10];
      uStack_608 = puVar11[0x13];
      uStack_610 = puVar11[0x12];
      uStack_5f8 = puVar11[0x15];
      uStack_600 = puVar11[0x14];
      uStack_5e8 = puVar11[0x17];
      uStack_5f0 = puVar11[0x16];
      uStack_5d8 = puVar11[0x19];
      uStack_5e0 = puVar11[0x18];
      uStack_5c8 = puVar11[0x1b];
      uStack_5d0 = puVar11[0x1a];
      iVar7 = (int)&uStack_760;
      func_0x000100cbea38();
      if (iVar7 == 1) {
        iVar7 = (int)&uStack_690;
        func_0x000100cbea38();
        if (iVar7 == 1) {
          uStack_858 = uStack_6b8;
          uStack_860 = uStack_6c0;
          uStack_848 = uStack_6a8;
          uStack_850 = uStack_6b0;
          uStack_838 = uStack_698;
          uStack_840 = uStack_6a0;
          uStack_898 = uStack_6f8;
          uStack_8a0 = uStack_700;
          uStack_888 = uStack_6e8;
          uStack_890 = uStack_6f0;
          uStack_878 = uStack_6d8;
          uStack_880 = uStack_6e0;
          uStack_868 = uStack_6c8;
          uStack_870 = uStack_6d0;
          uStack_8d8 = uStack_738;
          uStack_8e0 = uStack_740;
          uStack_8c8 = uStack_728;
          uStack_8d0 = uStack_730;
          uStack_8b8 = uStack_718;
          uStack_8c0 = uStack_720;
          uStack_8a8 = uStack_708;
          uStack_8b0 = uStack_710;
          uStack_8f8 = uStack_758;
          uStack_900 = uStack_760;
          uStack_8e8 = uStack_748;
          uStack_8f0 = uStack_750;
          func_0x000101912100(&uStack_2e0,&uStack_140,0x112dd2278,&UNK_10d993520);
          func_0x000101912100(&uStack_210,&uStack_140,0x112dd2278,&UNK_10d993520);
          func_0x0001019120c0(&uStack_900,0x112dd2278,&UNK_10d993520);
LAB_101909afc:
          func_0x000100e25fcc(uVar10,uVar9,uVar12,uVar3);
          goto joined_r0x000101909884;
        }
      }
      else {
        uStack_928 = uStack_6b8;
        uStack_930 = uStack_6c0;
        uStack_918 = uStack_6a8;
        uStack_920 = uStack_6b0;
        uStack_908 = uStack_698;
        uStack_910 = uStack_6a0;
        uStack_968 = uStack_6f8;
        uStack_970 = uStack_700;
        uStack_958 = uStack_6e8;
        uStack_960 = uStack_6f0;
        uStack_948 = uStack_6d8;
        uStack_950 = uStack_6e0;
        uStack_938 = uStack_6c8;
        uStack_940 = uStack_6d0;
        uStack_9a8 = uStack_738;
        uStack_9b0 = uStack_740;
        uStack_998 = uStack_728;
        uStack_9a0 = uStack_730;
        uStack_988 = uStack_718;
        uStack_990 = uStack_720;
        uStack_978 = uStack_708;
        uStack_980 = uStack_710;
        uStack_9c8 = uStack_758;
        uStack_9d0 = uStack_760;
        uStack_9b8 = uStack_748;
        uStack_9c0 = uStack_750;
        iVar7 = (int)&uStack_690;
        func_0x000100cbea38();
        if (iVar7 != 1) {
          uStack_9f8 = uStack_5e8;
          uStack_a00 = uStack_5f0;
          uStack_9e8 = uStack_5d8;
          uStack_9f0 = uStack_5e0;
          uStack_9d8 = uStack_5c8;
          uStack_9e0 = uStack_5d0;
          uStack_a38 = uStack_628;
          uStack_a40 = uStack_630;
          uStack_a28 = uStack_618;
          uStack_a30 = uStack_620;
          uStack_a18 = uStack_608;
          uStack_a20 = uStack_610;
          uStack_a08 = uStack_5f8;
          uStack_a10 = uStack_600;
          uStack_a78 = uStack_668;
          uStack_a80 = uStack_670;
          uStack_a68 = uStack_658;
          uStack_a70 = uStack_660;
          uStack_a58 = uStack_648;
          uStack_a60 = uStack_650;
          uStack_a48 = uStack_638;
          uStack_a50 = uStack_640;
          uStack_a98 = uStack_688;
          uStack_aa0 = uStack_690;
          uStack_a88 = uStack_678;
          uStack_a90 = uStack_680;
          uStack_858 = uStack_5e8;
          uStack_860 = uStack_5f0;
          uStack_848 = uStack_5d8;
          uStack_850 = uStack_5e0;
          uStack_838 = uStack_5c8;
          uStack_840 = uStack_5d0;
          uStack_898 = uStack_628;
          uStack_8a0 = uStack_630;
          uStack_888 = uStack_618;
          uStack_890 = uStack_620;
          uStack_878 = uStack_608;
          uStack_880 = uStack_610;
          uStack_868 = uStack_5f8;
          uStack_870 = uStack_600;
          uStack_8d8 = uStack_668;
          uStack_8e0 = uStack_670;
          uStack_8c8 = uStack_658;
          uStack_8d0 = uStack_660;
          uStack_8b8 = uStack_648;
          uStack_8c0 = uStack_650;
          uStack_8a8 = uStack_638;
          uStack_8b0 = uStack_640;
          uStack_8f8 = uStack_688;
          uStack_900 = uStack_690;
          uStack_8e8 = uStack_678;
          uStack_8f0 = uStack_680;
          uStack_98 = uStack_928;
          uStack_a0 = uStack_930;
          uStack_88 = uStack_918;
          uStack_90 = uStack_920;
          uStack_78 = uStack_908;
          uStack_80 = uStack_910;
          uStack_d8 = uStack_968;
          uStack_e0 = uStack_970;
          uStack_c8 = uStack_958;
          uStack_d0 = uStack_960;
          uStack_a8 = uStack_938;
          uStack_b0 = uStack_940;
          uStack_b8 = uStack_948;
          uStack_c0 = uStack_950;
          uStack_118 = uStack_9a8;
          uStack_120 = uStack_9b0;
          uStack_108 = uStack_998;
          uStack_110 = uStack_9a0;
          uStack_e8 = uStack_978;
          uStack_f0 = uStack_980;
          uStack_f8 = uStack_988;
          uStack_100 = uStack_990;
          uStack_128 = uStack_9b8;
          uStack_130 = uStack_9c0;
          uStack_138 = uStack_9c8;
          uStack_140 = uStack_9d0;
          func_0x000101912100(&uStack_2e0,auStack_b70,0x112dd2278,&UNK_10d993520);
          func_0x000101912100(&uStack_210,auStack_b70,0x112dd2278,&UNK_10d993520);
          puVar11 = &uStack_140;
          func_0x000101908cb0(puVar11,&uStack_900);
          func_0x0001019120c0(&uStack_aa0,0x112dd2278,&UNK_10d993520);
          func_0x0001019120c0(&uStack_760,0x112dd2278,&UNK_10d993520);
          if (((ulong)puVar11 & 1) != 0) goto LAB_101909afc;
          goto LAB_101909b1c;
        }
      }
      func_0x000107c610b4(&uStack_900,&uStack_760,0x1a0);
      func_0x000101912100(&uStack_2e0,&uStack_140,0x112dd2278,&UNK_10d993520);
      func_0x000101912100(&uStack_210,&uStack_140,0x112dd2278,&UNK_10d993520);
      func_0x0001019120c0(&uStack_900,0x112dd2280,&UNK_10d993528);
    }
  }
  else {
    puVar11 = auStack_4b8;
    FUN_10190a7b8();
    uVar9 = *puVar11;
    uVar3 = puVar11[1];
    uVar12 = puVar11[2];
    uVar13 = puVar11[3];
    uVar10 = puVar11[4];
    uVar4 = puVar11[5];
    func_0x000107c610b4(&uStack_760,param_2,0x101);
    iVar7 = (int)&uStack_760;
    func_0x00010190a67c();
    if (iVar7 == 4) {
      puVar11 = &uStack_760;
      FUN_10190a7b8();
      uVar1 = puVar11[2];
      uVar5 = puVar11[3];
      uVar2 = puVar11[4];
      uVar6 = puVar11[5];
      if ((((uVar9 == *puVar11) && (uVar3 == puVar11[1])) ||
          (func_0x000107c605b8(uVar9,uVar3,*puVar11,puVar11[1],0), (uVar9 & 1) != 0)) &&
         (((uVar12 == uVar1 && (uVar13 == uVar5)) ||
          (func_0x000107c605b8(uVar12,uVar13,uVar1,uVar5,0), (uVar12 & 1) != 0)))) {
        func_0x000100e25fcc(uVar10,uVar4,uVar2,uVar6);
        goto joined_r0x000101909884;
      }
    }
  }
LAB_101909b1c:
  uVar8 = 0;
LAB_101909b20:
  return uVar8 & 1;
}



/* Entry: 10190a2cc; end: 10190a4f7;  */

uint FUN_10190a2cc(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 auStack_a90 [264];
  undefined1 auStack_988 [264];
  undefined1 auStack_880 [264];
  undefined1 auStack_778 [528];
  undefined1 auStack_568 [264];
  undefined1 auStack_460 [264];
  undefined1 auStack_358 [264];
  undefined1 auStack_250 [264];
  undefined1 auStack_148 [264];
  undefined8 uVar4;
  
  func_0x000107c610b4(auStack_250,param_1,0x101);
  func_0x000107c610b4(auStack_358,param_2,0x101);
  func_0x000107c610b4(auStack_568,param_1,0x101);
  func_0x000107c610b4(auStack_460,param_2,0x101);
  iVar1 = (int)auStack_568;
  func_0x00010190a668();
  if (iVar1 == 1) {
    iVar1 = (int)auStack_460;
    func_0x00010190a668();
    if (iVar1 == 1) {
      func_0x000107c610b4(auStack_778,auStack_568,0x101);
      func_0x000101912100(auStack_250,auStack_148,0x112dd2170,&UNK_10d993510);
      func_0x000101912100(auStack_358,auStack_148,0x112dd2170,&UNK_10d993510);
      func_0x0001019120c0(auStack_778,0x112dd2170,&UNK_10d993510);
LAB_10190a4d0:
      uVar4 = *(undefined8 *)(param_1 + 0x108);
      func_0x000100e25fcc(uVar4,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_2 + 0x108),
                          *(undefined8 *)(param_2 + 0x110));
      uVar2 = (uint)uVar4;
      goto LAB_10190a4dc;
    }
LAB_10190a3cc:
    func_0x000107c610b4(auStack_778,auStack_568,0x209);
    func_0x000101912100(auStack_250,auStack_148,0x112dd2170,&UNK_10d993510);
    func_0x000101912100(auStack_358,auStack_148,0x112dd2170,&UNK_10d993510);
    func_0x0001019120c0(auStack_778,0x112dd28d0,&UNK_10d994e28);
  }
  else {
    func_0x000107c610b4(auStack_880,auStack_568,0x101);
    iVar1 = (int)auStack_460;
    func_0x00010190a668();
    if (iVar1 == 1) goto LAB_10190a3cc;
    func_0x000107c610b4(auStack_988,auStack_460,0x101);
    func_0x000107c610b4(auStack_778,auStack_460,0x101);
    func_0x000107c610b4(auStack_148,auStack_880,0x101);
    func_0x000101912100(auStack_250,auStack_a90,0x112dd2170,&UNK_10d993510);
    func_0x000101912100(auStack_358,auStack_a90,0x112dd2170,&UNK_10d993510);
    puVar3 = auStack_148;
    FUN_10190931c(puVar3,auStack_778);
    func_0x0001019120c0(auStack_988,0x112dd2170,&UNK_10d993510);
    func_0x0001019120c0(auStack_568,0x112dd2170,&UNK_10d993510);
    if (((ulong)puVar3 & 1) != 0) goto LAB_10190a4d0;
  }
  uVar2 = 0;
LAB_10190a4dc:
  return uVar2 & 1;
}



/* Entry: 10190a4f8; end: 10190a5a3;  */

/* WARNING: Possible PIC construction at 0x00010190a528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010190a52c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10190a4f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
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
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 == param_2[2] && param_1[3] == param_2[3]) ||
     (func_0x000107c605b8(), (uVar13 & 1) != 0)) {
    uVar13 = param_1[4];
    func_0x000101908314(uVar13,param_2[4]);
    if ((uVar13 & 1) != 0) {
      uVar13 = param_1[5];
      func_0x00010142cfc4(uVar13,param_2[5]);
      if ((uVar13 & 1) != 0) {
        uVar13 = param_1[6];
        func_0x000101908438(uVar13,param_2[6]);
        if ((uVar13 & 1) != 0) {
          pbVar10 = (byte *)param_1[7];
          pbVar25 = (byte *)param_1[8];
          lVar24 = param_2[7];
          uVar13 = param_2[8];
          puVar7 = (undefined1 *)register0x00000008;
          do {
            *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
            *(byte **)(puVar7 + -0x48) = unaff_x25;
            *(byte **)(puVar7 + -0x40) = unaff_x24;
            *(byte **)(puVar7 + -0x38) = unaff_x23;
            *(ulong *)(puVar7 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
            *(ulong *)(puVar7 + -0x20) = unaff_x20;
            *(byte **)(puVar7 + -0x18) = unaff_x19;
            *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
            *(undefined8 *)(puVar7 + -8) = unaff_x30;
            *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar4 = (uint)((ulong)pbVar25 >> 0x20);
            uVar18 = uVar4 >> 0x1e;
            uVar5 = (uint)(uVar13 >> 0x20);
            uVar21 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar14 = pbVar25;
            if ((ulong)pbVar25 >> 0x3e == 3) {
              uVar20 = 0;
              if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
                  (uVar13 >> 0x3e < 3)) ||
                 ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
              goto joined_r0x000100e26170;
code_r0x000100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar18 == 0) {
                uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
              }
              else {
                iVar19 = (int)((ulong)pbVar10 >> 0x20);
                if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                  (*pcVar6)();
                }
                uVar20 = (ulong)(iVar19 - iVar8);
              }
joined_r0x000100e26170:
              if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
              if (uVar21 == 0) {
                uVar22 = uVar13 >> 0x30 & 0xff;
                goto code_r0x000100e2608c;
              }
              iVar19 = (int)((ulong)lVar24 >> 0x20);
              if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
              pbVar9 = (byte *)0x0;
            }
            else {
              if (uVar18 == 2) {
                uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
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
                uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
                if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
code_r0x000100e2608c:
                if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
                if ((long)uVar20 < 1) goto code_r0x000100e26128;
                if (uVar18 < 2) {
                  if (uVar18 == 0) {
                    puVar7[-0x70] = (char)pbVar10;
                    puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                    puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                    puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                    puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                    puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                    puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                    puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                    puVar7[-0x68] = (char)pbVar25;
                    puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                    puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                    puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                    puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                    puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                    pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                    pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                    goto code_r0x000100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar8;
                  unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                  if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = pbVar25;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar14 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar14) {
                        pbVar14 = unaff_x23;
                      }
                      pbVar14 = pbVar14 + (long)pbVar10;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar14 = (byte *)0x0;
                }
                else {
                  if (uVar18 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar14 = puVar7 + -0x70;
                    goto code_r0x000100e26260;
                  }
                  lVar26 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar14 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
                  }
                  unaff_x23 = unaff_x24 + -lVar26;
                  if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  unaff_x25 = pbVar25;
                  if (pbVar10 == (byte *)0x0) {
                    pbVar14 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar14) {
                      pbVar14 = unaff_x23;
                    }
                    pbVar14 = pbVar14 + (long)pbVar10;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar13;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar20 == 0);
              }
            }
code_r0x000100e262b0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
              return pbVar9;
            }
            func_0x000107c60e78();
            *(byte **)(puVar7 + -0xc0) = unaff_x24;
            *(byte **)(puVar7 + -0xb8) = unaff_x23;
            *(ulong *)(puVar7 + -0xb0) = unaff_x22;
            *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
            *(ulong *)(puVar7 + -0xa0) = unaff_x20;
            *(byte **)(puVar7 + -0x98) = unaff_x19;
            *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
            *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
            pbVar12 = *(byte **)pbVar9;
            pbVar10 = *(byte **)(pbVar9 + 8);
            pbVar23 = *(byte **)(pbVar9 + 0x18);
            bVar27 = pbVar9[0x28];
            pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar15 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar14[0x28] == 0) {
                  lVar24 = *(long *)pbVar14;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar24,uVar11);
                  return (byte *)(ulong)((uint)pbVar12 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar27 == 1) {
                if (pbVar14[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)(pbVar14 + 8);
                pbVar17 = *(byte **)(pbVar14 + 0x10);
                lVar24 = *(long *)pbVar14;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar24,uVar11);
                if (((ulong)pbVar12 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar12 = pbVar10;
                pbVar15 = pbVar25;
                if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar14[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)pbVar14;
                pbVar17 = *(byte **)(pbVar14 + 8);
                lVar24 = *(long *)(pbVar14 + 0x18);
                if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
                  if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar23 != (byte *)0x0) {
                    if (lVar24 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar24);
                    func_0x000107c61174();
                    pbVar12 = pbVar23;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar23);
                    func_0x000107c61170(lVar24);
                    pbVar23 = pbVar12;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar24 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              goto code_r0x000107c605b8;
            }
            lVar26 = *(long *)(pbVar9 + 0x20);
            if (bVar27 < 5) {
              if (bVar27 != 3) {
                if (pbVar14[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)pbVar14;
                pbVar17 = *(byte **)(pbVar14 + 8);
                if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
                   (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
                   pbVar17 = *(byte **)(pbVar14 + 0x18),
                   pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
              }
              if (pbVar14[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar14 + 0x10);
              lVar24 = *(long *)(pbVar14 + 0x20);
              if (pbVar25 == (byte *)0x0) {
                if (pbVar17 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar17 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar16 = *(byte **)(pbVar14 + 8);
                pbVar12 = pbVar10;
                pbVar15 = pbVar25;
                if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
              }
              if (lVar26 != 0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar23 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar27 != 5) {
              if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                  lVar26 == 0) && pbVar25 == (byte *)0x0) {
                if (pbVar14[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar26 = *(long *)(pbVar14 + 0x20);
                lVar24 = *(long *)(pbVar14 + 0x18);
                bVar27 = pbVar14[8] | (byte)lVar24;
                bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
                bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
                bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
                bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
                bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
                bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
                bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
                bVar35 = pbVar14[0x10] | (byte)lVar26;
                bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
                bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
                bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
                bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
                bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
                bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
                bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar14 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
                  lVar26 == 0)) {
                if (pbVar14[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar14 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar14[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar14 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar26 = *(long *)(pbVar14 + 0x20);
              lVar24 = *(long *)(pbVar14 + 0x18);
              bVar27 = pbVar14[8] | (byte)lVar24;
              bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
              bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
              bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
              bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
              bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
              bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
              bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
              bVar35 = pbVar14[0x10] | (byte)lVar26;
              bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
              lVar24 = CONCAT17(bVar34 | auVar43[7],
                                CONCAT16(bVar33 | auVar43[6],
                                         CONCAT15(bVar32 | auVar43[5],
                                                  CONCAT14(bVar31 | auVar43[4],
                                                           CONCAT13(bVar30 | auVar43[3],
                                                                    CONCAT12(bVar29 | auVar43[2],
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar14[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar24 = *(long *)(pbVar14 + 8);
            uVar13 = *(ulong *)(pbVar14 + 0x10);
            lVar26 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar26,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
            unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
            unaff_x20 = *(ulong *)(puVar7 + -0xa0);
            unaff_x19 = *(byte **)(puVar7 + -0x98);
            unaff_x22 = *(ulong *)(puVar7 + -0xb0);
            unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
            unaff_x24 = *(byte **)(puVar7 + -0xc0);
            unaff_x23 = *(byte **)(puVar7 + -0xb8);
            puVar7 = puVar7 + -0x80;
          } while( true );
        }
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 10190a5a4; end: 10190a687;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10190a5a4(long param_1,undefined8 param_2,byte *param_3,byte *param_4,long param_5,
                    char param_6,long param_7,ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
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
  undefined1 auVar39 [16];
  
  if (param_6 == '\x01') {
    if (param_5 == 0) {
      if (param_1 == 0) goto SUB_100e25fcc;
    }
    else if (param_5 == 1) {
      if (param_1 == 1) {
SUB_100e25fcc:
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
          uVar4 = (uint)((ulong)param_4 >> 0x20);
          uVar15 = uVar4 >> 0x1e;
          uVar5 = (uint)(param_8 >> 0x20);
          uVar18 = uVar5 >> 0x1e;
          iVar7 = (int)param_3;
          pbVar11 = param_4;
          if ((ulong)param_4 >> 0x3e == 3) {
            uVar17 = 0;
            if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
                (param_8 >> 0x3e < 3)) ||
               ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar8 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar15 == 0) {
              uVar17 = (ulong)param_4 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)((ulong)param_3 >> 0x20);
              if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar17 = (ulong)(iVar16 - iVar7);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar18 == 0) {
              uVar19 = param_8 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar16 = (int)((ulong)param_7 >> 0x20);
            if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar17 == (long)(iVar16 - (int)param_7)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar8 = (byte *)0x0;
          }
          else {
            if (uVar15 == 2) {
              uVar17 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
              if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar17 = 0;
            if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar18 == 2) {
              uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
              if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar17 < 1) goto code_r0x000100e26128;
              if (uVar15 < 2) {
                if (uVar15 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)param_3;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_3 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_3 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_3 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_3 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_3 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_3 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_3 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)param_4;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_4 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_4 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_4 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_4 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_4 >> 0x28);
                  pbVar11 = (byte *)((long)register0x00000008 +
                                    (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar7;
                unaff_x23 = (byte *)(((long)param_3 >> 0x20) - (long)unaff_x25);
                if ((long)param_3 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = param_4;
                if (param_3 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  param_3 = (byte *)0x0;
                }
                else {
                  pbVar11 = param_3;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + ((long)unaff_x25 - (long)pbVar11);
                  func_0x000107c5ec38();
                  unaff_x19 = param_3;
                  if (param_3 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar11) {
                      pbVar11 = unaff_x23;
                    }
                    pbVar11 = pbVar11 + (long)param_3;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar11 = (byte *)0x0;
              }
              else {
                if (uVar15 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar11 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
                }
                lVar21 = *(long *)(param_3 + 0x10);
                unaff_x24 = *(byte **)(param_3 + 0x18);
                func_0x000107c5ec30();
                pbVar11 = param_3;
                if (param_3 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + (lVar21 - (long)pbVar11);
                }
                unaff_x23 = unaff_x24 + -lVar21;
                if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = param_3;
                unaff_x25 = param_4;
                if (param_3 == (byte *)0x0) {
                  pbVar11 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar11) {
                    pbVar11 = unaff_x23;
                  }
                  pbVar11 = pbVar11 + (long)param_3;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,
                                  param_7,param_8);
              pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = param_8;
            }
            else {
              pbVar8 = (byte *)(ulong)(uVar17 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
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
          pbVar10 = *(byte **)pbVar8;
          param_3 = *(byte **)(pbVar8 + 8);
          pbVar20 = *(byte **)(pbVar8 + 0x18);
          bVar23 = pbVar8[0x28];
          param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
          pbVar12 = param_3;
          if (bVar23 < 3) {
            if (bVar23 == 0) {
              if (pbVar11[0x28] == 0) {
                lVar21 = *(long *)pbVar11;
                uVar9 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar10,lVar21,uVar9);
                return (byte *)(ulong)((uint)pbVar10 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar23 == 1) {
              if (pbVar11[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar11 + 8);
              pbVar14 = *(byte **)(pbVar11 + 0x10);
              lVar21 = *(long *)pbVar11;
              uVar9 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar21,uVar9);
              if (((ulong)pbVar10 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 == pbVar13) && (param_4 == pbVar14)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar11[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)pbVar11;
              pbVar14 = *(byte **)(pbVar11 + 8);
              lVar21 = *(long *)(pbVar11 + 0x18);
              if ((pbVar10 == pbVar13) && (param_3 == pbVar14)) {
                if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar21 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar21);
                func_0x000107c61174();
                pbVar11 = pbVar20;
                func_0x000107c60118();
                func_0x000107c61170(pbVar20);
                func_0x000107c61170(lVar21);
                pbVar20 = pbVar11;
joined_r0x000100e266a4:
                if (((ulong)pbVar20 & 1) == 0) {
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
            )(pbVar10,pbVar12,pbVar13,pbVar14,0);
            return pbVar10;
          }
          lVar22 = *(long *)(pbVar8 + 0x20);
          if (bVar23 < 5) {
            if (bVar23 != 3) {
              if (pbVar11[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)pbVar11;
              pbVar14 = *(byte **)(pbVar11 + 8);
              if (((pbVar10 == pbVar13) && (param_3 == pbVar14)) &&
                 (pbVar10 = param_4, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
                 pbVar14 = *(byte **)(pbVar11 + 0x18),
                 param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar11[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar11 + 0x10);
            lVar21 = *(long *)(pbVar11 + 0x20);
            if (param_4 == (byte *)0x0) {
              if (pbVar14 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar14 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar11 + 8);
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 != pbVar13) || (param_4 != pbVar14)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar21 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar21 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar23 != 5) {
            if ((((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
                lVar22 == 0) && param_4 == (byte *)0x0) {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar11 + 0x20);
              lVar21 = *(long *)(pbVar11 + 0x18);
              bVar23 = pbVar11[8] | (byte)lVar21;
              bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
              bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
              bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
              bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
              bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
              bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
              bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
              bVar31 = pbVar11[0x10] | (byte)lVar22;
              bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar39[1] = bVar24;
              auVar39[0] = bVar23;
              auVar39[2] = bVar25;
              auVar39[3] = bVar26;
              auVar39[4] = bVar27;
              auVar39[5] = bVar28;
              auVar39[6] = bVar29;
              auVar39[7] = bVar30;
              auVar39[8] = bVar31;
              auVar39[9] = bVar32;
              auVar39[10] = bVar33;
              auVar39[0xb] = bVar34;
              auVar39[0xc] = bVar35;
              auVar39[0xd] = bVar36;
              auVar39[0xe] = bVar37;
              auVar39[0xf] = bVar38;
              auVar3[1] = bVar24;
              auVar3[0] = bVar23;
              auVar3[2] = bVar25;
              auVar3[3] = bVar26;
              auVar3[4] = bVar27;
              auVar3[5] = bVar28;
              auVar3[6] = bVar29;
              auVar3[7] = bVar30;
              auVar3[8] = bVar31;
              auVar3[9] = bVar32;
              auVar3[10] = bVar33;
              auVar3[0xb] = bVar34;
              auVar3[0xc] = bVar35;
              auVar3[0xd] = bVar36;
              auVar3[0xe] = bVar37;
              auVar3[0xf] = bVar38;
              auVar39 = NEON_ext(auVar39,auVar3,8,1);
              if (CONCAT17(bVar30 | auVar39[7],
                           CONCAT16(bVar29 | auVar39[6],
                                    CONCAT15(bVar28 | auVar39[5],
                                             CONCAT14(bVar27 | auVar39[4],
                                                      CONCAT13(bVar26 | auVar39[3],
                                                               CONCAT12(bVar25 | auVar39[2],
                                                                        CONCAT11(bVar24 | auVar39[1]
                                                                                 ,bVar23 | auVar39[0
                                                  ]))))))) == 0 && *(long *)pbVar11 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar10 == (byte *)0x1) &&
               (((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
                lVar22 == 0)) {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar11 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar11 != 2) {
                return (byte *)0x0;
              }
            }
            lVar22 = *(long *)(pbVar11 + 0x20);
            lVar21 = *(long *)(pbVar11 + 0x18);
            bVar23 = pbVar11[8] | (byte)lVar21;
            bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
            bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
            bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
            bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
            bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
            bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
            bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
            bVar31 = pbVar11[0x10] | (byte)lVar22;
            bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar1[1] = bVar24;
            auVar1[0] = bVar23;
            auVar1[2] = bVar25;
            auVar1[3] = bVar26;
            auVar1[4] = bVar27;
            auVar1[5] = bVar28;
            auVar1[6] = bVar29;
            auVar1[7] = bVar30;
            auVar1[8] = bVar31;
            auVar1[9] = bVar32;
            auVar1[10] = bVar33;
            auVar1[0xb] = bVar34;
            auVar1[0xc] = bVar35;
            auVar1[0xd] = bVar36;
            auVar1[0xe] = bVar37;
            auVar1[0xf] = bVar38;
            auVar2[1] = bVar24;
            auVar2[0] = bVar23;
            auVar2[2] = bVar25;
            auVar2[3] = bVar26;
            auVar2[4] = bVar27;
            auVar2[5] = bVar28;
            auVar2[6] = bVar29;
            auVar2[7] = bVar30;
            auVar2[8] = bVar31;
            auVar2[9] = bVar32;
            auVar2[10] = bVar33;
            auVar2[0xb] = bVar34;
            auVar2[0xc] = bVar35;
            auVar2[0xd] = bVar36;
            auVar2[0xe] = bVar37;
            auVar2[0xf] = bVar38;
            auVar39 = NEON_ext(auVar1,auVar2,8,1);
            lVar21 = CONCAT17(bVar30 | auVar39[7],
                              CONCAT16(bVar29 | auVar39[6],
                                       CONCAT15(bVar28 | auVar39[5],
                                                CONCAT14(bVar27 | auVar39[4],
                                                         CONCAT13(bVar26 | auVar39[3],
                                                                  CONCAT12(bVar25 | auVar39[2],
                                                                           CONCAT11(bVar24 | auVar39
                                                  [1],bVar23 | auVar39[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar11[0x28] != 5) {
            return (byte *)0x0;
          }
          param_7 = *(long *)(pbVar11 + 8);
          param_8 = *(ulong *)(pbVar11 + 0x10);
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          if (((ulong)pbVar10 & 1) == 0) {
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
    }
    else if (param_1 == 2) goto SUB_100e25fcc;
  }
  else if (param_1 == param_5) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 10190a688; end: 10190a6bb;  */

undefined8 FUN_10190a688(undefined8 param_1,undefined8 param_2)

{
  FUN_10190f6bc(param_2,param_1,&UNK_110411238);
  return param_2;
}



/* Entry: 10190a6bc; end: 10190a6d7;  */

void FUN_10190a6bc(long param_1)

{
  *(undefined1 *)(param_1 + 0x100) = 0;
  return;
}



/* Entry: 10190a6d8; end: 10190a70b;  */

undefined8 FUN_10190a6d8(undefined8 param_1,undefined8 param_2)

{
  FUN_101910360(param_2,param_1,&UNK_110411470);
  return param_2;
}



/* Entry: 10190a70c; end: 10190a73f;  */

void FUN_10190a70c(undefined8 *param_1)

{
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 10190a740; end: 10190a773;  */

undefined8 FUN_10190a740(undefined8 param_1,undefined8 param_2)

{
  FUN_101910610(param_2,param_1,&UNK_110411500);
  return param_2;
}



/* Entry: 10190a774; end: 10190a783;  */

void FUN_10190a774(void)

{
  return;
}



/* Entry: 10190a784; end: 10190a7b7;  */

undefined8 FUN_10190a784(undefined8 param_1,undefined8 param_2)

{
  FUN_101910eb4(param_2,param_1,&UNK_110411588);
  return param_2;
}



/* Entry: 10190a7b8; end: 10190a7c7;  */

void FUN_10190a7b8(void)

{
  return;
}



/* Entry: 10190a7c8; end: 10190ac0b;  */

uint FUN_10190a7c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auStack_870 [208];
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
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
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
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uVar4;
  
  uStack_3c8 = param_1[0x15];
  uStack_3d0 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_3b8 = param_1[0x17];
  uStack_3c0 = param_1[0x16];
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_3a8 = param_1[0x19];
  uStack_3b0 = param_1[0x18];
  uStack_128 = param_1[0x1b];
  uStack_130 = param_1[0x1a];
  uStack_408 = param_1[0xd];
  uStack_410 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_3f8 = param_1[0xf];
  uStack_400 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_3e8 = param_1[0x11];
  uStack_3f0 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_3d8 = param_1[0x13];
  uStack_3e0 = param_1[0x12];
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_448 = param_1[5];
  uStack_450 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_438 = param_1[7];
  uStack_440 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_428 = param_1[9];
  uStack_430 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_418 = param_1[0xb];
  uStack_420 = param_1[10];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_458 = param_1[3];
  uStack_460 = param_1[2];
  uStack_2f8 = param_2[0x15];
  uStack_300 = param_2[0x14];
  uStack_218 = param_2[0x17];
  uStack_220 = param_2[0x16];
  uStack_2e8 = param_2[0x17];
  uStack_2f0 = param_2[0x16];
  uStack_208 = param_2[0x19];
  uStack_210 = param_2[0x18];
  uStack_2d8 = param_2[0x19];
  uStack_2e0 = param_2[0x18];
  uStack_1f8 = param_2[0x1b];
  uStack_200 = param_2[0x1a];
  uStack_338 = param_2[0xd];
  uStack_340 = param_2[0xc];
  uStack_258 = param_2[0xf];
  uStack_260 = param_2[0xe];
  uStack_328 = param_2[0xf];
  uStack_330 = param_2[0xe];
  uStack_248 = param_2[0x11];
  uStack_250 = param_2[0x10];
  uStack_318 = param_2[0x11];
  uStack_320 = param_2[0x10];
  uStack_238 = param_2[0x13];
  uStack_240 = param_2[0x12];
  uStack_308 = param_2[0x13];
  uStack_310 = param_2[0x12];
  uStack_228 = param_2[0x15];
  uStack_230 = param_2[0x14];
  uStack_378 = param_2[5];
  uStack_380 = param_2[4];
  uStack_298 = param_2[7];
  uStack_2a0 = param_2[6];
  uStack_368 = param_2[7];
  uStack_370 = param_2[6];
  uStack_288 = param_2[9];
  uStack_290 = param_2[8];
  uStack_358 = param_2[9];
  uStack_360 = param_2[8];
  uStack_278 = param_2[0xb];
  uStack_280 = param_2[10];
  uStack_348 = param_2[0xb];
  uStack_350 = param_2[10];
  uStack_270 = param_2[0xc];
  uStack_268 = param_2[0xd];
  uStack_2b8 = param_2[3];
  uStack_2c0 = param_2[2];
  uStack_2b0 = param_2[4];
  uStack_2a8 = param_2[5];
  uStack_388 = param_2[3];
  uStack_390 = param_2[2];
  uStack_2c8 = param_2[0x1b];
  uStack_2d0 = param_2[0x1a];
  uStack_398 = param_1[0x1b];
  uStack_3a0 = param_1[0x1a];
  iVar1 = (int)&uStack_460;
  func_0x000100cbea38();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_390;
    func_0x000100cbea38();
    if (iVar1 == 1) {
      uStack_558 = uStack_3b8;
      uStack_560 = uStack_3c0;
      uStack_548 = uStack_3a8;
      uStack_550 = uStack_3b0;
      uStack_538 = uStack_398;
      uStack_540 = uStack_3a0;
      uStack_598 = uStack_3f8;
      uStack_5a0 = uStack_400;
      uStack_588 = uStack_3e8;
      uStack_590 = uStack_3f0;
      uStack_578 = uStack_3d8;
      uStack_580 = uStack_3e0;
      uStack_568 = uStack_3c8;
      uStack_570 = uStack_3d0;
      uStack_5d8 = uStack_438;
      uStack_5e0 = uStack_440;
      uStack_5c8 = uStack_428;
      uStack_5d0 = uStack_430;
      uStack_5b8 = uStack_418;
      uStack_5c0 = uStack_420;
      uStack_5a8 = uStack_408;
      uStack_5b0 = uStack_410;
      uStack_5f8 = uStack_458;
      uStack_600 = uStack_460;
      uStack_5e8 = uStack_448;
      uStack_5f0 = uStack_450;
      func_0x000101912100(&uStack_1f0,&uStack_120,0x112dd2278,&UNK_10d993520);
      func_0x000101912100(&uStack_2c0,&uStack_120,0x112dd2278,&UNK_10d993520);
      func_0x0001019120c0(&uStack_600,0x112dd2278,&UNK_10d993520);
LAB_10190abe0:
      uVar4 = *param_1;
      func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
      uVar2 = (uint)uVar4;
      goto LAB_10190abec;
    }
LAB_10190aa4c:
    func_0x000107c610b4(&uStack_600,&uStack_460,0x1a0);
    func_0x000101912100(&uStack_1f0,&uStack_120,0x112dd2278,&UNK_10d993520);
    func_0x000101912100(&uStack_2c0,&uStack_120,0x112dd2278,&UNK_10d993520);
    func_0x0001019120c0(&uStack_600,0x112dd2280,&UNK_10d993528);
  }
  else {
    uStack_628 = uStack_3b8;
    uStack_630 = uStack_3c0;
    uStack_618 = uStack_3a8;
    uStack_620 = uStack_3b0;
    uStack_608 = uStack_398;
    uStack_610 = uStack_3a0;
    uStack_668 = uStack_3f8;
    uStack_670 = uStack_400;
    uStack_658 = uStack_3e8;
    uStack_660 = uStack_3f0;
    uStack_648 = uStack_3d8;
    uStack_650 = uStack_3e0;
    uStack_638 = uStack_3c8;
    uStack_640 = uStack_3d0;
    uStack_6a8 = uStack_438;
    uStack_6b0 = uStack_440;
    uStack_698 = uStack_428;
    uStack_6a0 = uStack_430;
    uStack_688 = uStack_418;
    uStack_690 = uStack_420;
    uStack_678 = uStack_408;
    uStack_680 = uStack_410;
    uStack_6c8 = uStack_458;
    uStack_6d0 = uStack_460;
    uStack_6b8 = uStack_448;
    uStack_6c0 = uStack_450;
    iVar1 = (int)&uStack_390;
    func_0x000100cbea38();
    if (iVar1 == 1) goto LAB_10190aa4c;
    uStack_6f8 = uStack_2e8;
    uStack_700 = uStack_2f0;
    uStack_6e8 = uStack_2d8;
    uStack_6f0 = uStack_2e0;
    uStack_6d8 = uStack_2c8;
    uStack_6e0 = uStack_2d0;
    uStack_738 = uStack_328;
    uStack_740 = uStack_330;
    uStack_728 = uStack_318;
    uStack_730 = uStack_320;
    uStack_718 = uStack_308;
    uStack_720 = uStack_310;
    uStack_708 = uStack_2f8;
    uStack_710 = uStack_300;
    uStack_778 = uStack_368;
    uStack_780 = uStack_370;
    uStack_768 = uStack_358;
    uStack_770 = uStack_360;
    uStack_758 = uStack_348;
    uStack_760 = uStack_350;
    uStack_748 = uStack_338;
    uStack_750 = uStack_340;
    uStack_798 = uStack_388;
    uStack_7a0 = uStack_390;
    uStack_788 = uStack_378;
    uStack_790 = uStack_380;
    uStack_558 = uStack_2e8;
    uStack_560 = uStack_2f0;
    uStack_548 = uStack_2d8;
    uStack_550 = uStack_2e0;
    uStack_538 = uStack_2c8;
    uStack_540 = uStack_2d0;
    uStack_598 = uStack_328;
    uStack_5a0 = uStack_330;
    uStack_588 = uStack_318;
    uStack_590 = uStack_320;
    uStack_578 = uStack_308;
    uStack_580 = uStack_310;
    uStack_568 = uStack_2f8;
    uStack_570 = uStack_300;
    uStack_5d8 = uStack_368;
    uStack_5e0 = uStack_370;
    uStack_5c8 = uStack_358;
    uStack_5d0 = uStack_360;
    uStack_5b8 = uStack_348;
    uStack_5c0 = uStack_350;
    uStack_5a8 = uStack_338;
    uStack_5b0 = uStack_340;
    uStack_5f8 = uStack_388;
    uStack_600 = uStack_390;
    uStack_5e8 = uStack_378;
    uStack_5f0 = uStack_380;
    uStack_78 = uStack_628;
    uStack_80 = uStack_630;
    uStack_68 = uStack_618;
    uStack_70 = uStack_620;
    uStack_58 = uStack_608;
    uStack_60 = uStack_610;
    uStack_b8 = uStack_668;
    uStack_c0 = uStack_670;
    uStack_a8 = uStack_658;
    uStack_b0 = uStack_660;
    uStack_88 = uStack_638;
    uStack_90 = uStack_640;
    uStack_98 = uStack_648;
    uStack_a0 = uStack_650;
    uStack_f8 = uStack_6a8;
    uStack_100 = uStack_6b0;
    uStack_e8 = uStack_698;
    uStack_f0 = uStack_6a0;
    uStack_c8 = uStack_678;
    uStack_d0 = uStack_680;
    uStack_d8 = uStack_688;
    uStack_e0 = uStack_690;
    uStack_108 = uStack_6b8;
    uStack_110 = uStack_6c0;
    uStack_118 = uStack_6c8;
    uStack_120 = uStack_6d0;
    func_0x000101912100(&uStack_1f0,auStack_870,0x112dd2278,&UNK_10d993520);
    func_0x000101912100(&uStack_2c0,auStack_870,0x112dd2278,&UNK_10d993520);
    puVar3 = &uStack_120;
    func_0x000101908cb0(puVar3,&uStack_600);
    func_0x0001019120c0(&uStack_7a0,0x112dd2278,&UNK_10d993520);
    func_0x0001019120c0(&uStack_460,0x112dd2278,&UNK_10d993520);
    if (((ulong)puVar3 & 1) != 0) goto LAB_10190abe0;
  }
  uVar2 = 0;
LAB_10190abec:
  return uVar2 & 1;
}



/* Entry: 10190ac0c; end: 10190ac87;  */

/* WARNING: Possible PIC construction at 0x00010190ac3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010190ac40) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10190ac0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
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
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  lVar24 = param_2[4];
  uVar13 = param_2[5];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
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
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      lVar24 = CONCAT17(bVar34 | auVar43[7],
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
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 10190ac88; end: 10190ac93;  */

void FUN_10190ac88(void)

{
  return;
}



/* Entry: 10190ac94; end: 10190acbf;  */

undefined8 FUN_10190ac94(undefined8 param_1)

{
  FUN_10190fc54(param_1,&UNK_110411340);
  return param_1;
}



/* Entry: 10190acc0; end: 10190accb;  */

void FUN_10190acc0(void)

{
  return;
}



/* Entry: 10190accc; end: 10190b157;  */

uint FUN_10190accc(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined1 auStack_d60 [280];
  undefined1 auStack_c48 [280];
  undefined1 auStack_b30 [280];
  undefined8 auStack_a18 [35];
  undefined1 auStack_900 [280];
  undefined8 auStack_7e8 [70];
  undefined8 auStack_5b8 [35];
  undefined1 auStack_4a0 [280];
  undefined1 auStack_388 [280];
  undefined1 auStack_270 [280];
  undefined8 auStack_158 [35];
  undefined8 uVar3;
  
  puVar5 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)0x0;
  func_0x000107c610b4(auStack_270,param_1,0x118);
  func_0x000107c610b4(auStack_388,param_2,0x118);
  func_0x000107c610b4(auStack_5b8,param_1,0x118);
  func_0x000107c610b4(auStack_4a0,param_2,0x118);
  iVar1 = (int)auStack_5b8;
  func_0x0001018ff71c();
  if (iVar1 == 1) {
    iVar1 = (int)auStack_4a0;
    func_0x0001018ff71c();
    if (iVar1 != 1) {
LAB_10190add8:
      func_0x000107c610b4(auStack_7e8,auStack_5b8,0x230);
      func_0x000101912100(auStack_270,auStack_158,0x112dd2098,&UNK_10d9934f8);
      func_0x000101912100(auStack_388,auStack_158,0x112dd2098,&UNK_10d9934f8);
      uVar3 = 0x112dd28b8;
      puVar6 = &UNK_10d994dd0;
      puVar5 = auStack_7e8;
LAB_10190b134:
      func_0x0001019120c0(puVar5,uVar3,puVar6);
LAB_10190b138:
      uVar2 = 0;
      goto LAB_10190b13c;
    }
    func_0x000107c610b4(auStack_7e8,auStack_5b8,0x118);
    func_0x000101912100(auStack_270,auStack_158,0x112dd2098,&UNK_10d9934f8);
    func_0x000101912100(auStack_388,auStack_158,0x112dd2098,&UNK_10d9934f8);
    func_0x0001019120c0(auStack_7e8,0x112dd2098,&UNK_10d9934f8);
  }
  else {
    func_0x000107c610b4(auStack_900,auStack_5b8,0x118);
    iVar1 = (int)auStack_4a0;
    func_0x0001018ff71c();
    if (iVar1 == 1) goto LAB_10190add8;
    func_0x000107c610b4(auStack_d60,auStack_4a0,0x118);
    func_0x000107c610b4(auStack_c48,auStack_4a0,0x118);
    func_0x000107c610b4(auStack_b30,auStack_900,0x118);
    func_0x000107c610b4(auStack_a18,auStack_900,0x118);
    iVar1 = (int)auStack_b30;
    func_0x0001018ff734();
    if (iVar1 == 0) {
      puVar4 = auStack_a18;
      func_0x000100cbe840();
      uStack_f98 = puVar4[1];
      uStack_fa0 = *puVar4;
      uStack_f88 = puVar4[3];
      uStack_f90 = puVar4[2];
      uStack_f78 = puVar4[5];
      uStack_f80 = puVar4[4];
      func_0x000107c610b4(auStack_7e8,auStack_c48,0x118);
      iVar1 = (int)auStack_c48;
      func_0x0001018ff734();
      if (iVar1 != 0) {
LAB_10190b0a8:
        func_0x000101912100(auStack_270,auStack_158,0x112dd2098,&UNK_10d9934f8);
        puVar5 = auStack_158;
LAB_10190b104:
        func_0x000101912100(auStack_388,puVar5,0x112dd2098,&UNK_10d9934f8);
        func_0x0001019120c0(auStack_d60,0x112dd2098,&UNK_10d9934f8);
        uVar3 = 0x112dd2098;
        puVar6 = &UNK_10d9934f8;
        puVar5 = auStack_5b8;
        goto LAB_10190b134;
      }
      puVar4 = auStack_7e8;
      func_0x000100cbe840();
      uStack_e78 = puVar4[1];
      uStack_e80 = *puVar4;
      uStack_e68 = puVar4[3];
      uStack_e70 = puVar4[2];
      uStack_e58 = puVar4[5];
      uStack_e60 = puVar4[4];
      func_0x000101912100(auStack_270,auStack_158,0x112dd2098,&UNK_10d9934f8);
      func_0x000101912100(auStack_388,auStack_158,0x112dd2098,&UNK_10d9934f8);
      func_0x00010190a0ec(&uStack_fa0,&uStack_e80);
    }
    else if (iVar1 == 1) {
      puVar5 = auStack_a18;
      func_0x000100cbe840(puVar5);
      func_0x000107c610b4(auStack_158,puVar5,0x118);
      func_0x000107c610b4(&uStack_e80,auStack_c48,0x118);
      iVar1 = (int)auStack_c48;
      func_0x0001018ff734();
      if (iVar1 != 1) {
        func_0x000101912100(auStack_270,auStack_7e8,0x112dd2098,&UNK_10d9934f8);
        puVar5 = auStack_7e8;
        goto LAB_10190b104;
      }
      puVar5 = &uStack_e80;
      func_0x000100cbe840(puVar5);
      func_0x000107c610b4(auStack_7e8,puVar5,0x118);
      func_0x000101912100(auStack_270,&uStack_fa0,0x112dd2098,&UNK_10d9934f8);
      func_0x000101912100(auStack_388,&uStack_fa0,0x112dd2098,&UNK_10d9934f8);
      puVar5 = auStack_158;
      FUN_10190a2cc(puVar5,auStack_7e8);
    }
    else {
      puVar5 = auStack_a18;
      func_0x000100cbe840();
      uStack_f88 = puVar5[3];
      uStack_f90 = puVar5[2];
      uStack_f78 = puVar5[5];
      uStack_f80 = puVar5[4];
      uStack_f68 = puVar5[7];
      uStack_f70 = puVar5[6];
      uStack_f60 = puVar5[8];
      uStack_f98 = puVar5[1];
      uStack_fa0 = *puVar5;
      func_0x000107c610b4(auStack_7e8,auStack_c48,0x118);
      iVar1 = (int)auStack_c48;
      func_0x0001018ff734();
      if (iVar1 != 2) goto LAB_10190b0a8;
      puVar5 = auStack_7e8;
      func_0x000100cbe840();
      uStack_e68 = puVar5[3];
      uStack_e70 = puVar5[2];
      uStack_e58 = puVar5[5];
      uStack_e60 = puVar5[4];
      uStack_e48 = puVar5[7];
      uStack_e50 = puVar5[6];
      uStack_e40 = puVar5[8];
      uStack_e78 = puVar5[1];
      uStack_e80 = *puVar5;
      func_0x000101912100(auStack_270,auStack_158,0x112dd2098,&UNK_10d9934f8);
      func_0x000101912100(auStack_388,auStack_158,0x112dd2098,&UNK_10d9934f8);
      FUN_10190a4f8(&uStack_fa0,&uStack_e80);
      puVar5 = puVar4;
    }
    func_0x0001019120c0(auStack_d60,0x112dd2098,&UNK_10d9934f8);
    func_0x0001019120c0(auStack_5b8,0x112dd2098,&UNK_10d9934f8);
    if (((ulong)puVar5 & 1) == 0) goto LAB_10190b138;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x118);
  func_0x000100e25fcc(uVar3,*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_2 + 0x118),
                      *(undefined8 *)(param_2 + 0x120));
  uVar2 = (uint)uVar3;
LAB_10190b13c:
  return uVar2 & 1;
}



/* Entry: 10190b158; end: 10190b657;  */

void FUN_10190b158(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2420 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993b28;
  func_0x000107c61520(&UNK_10d993b28,&UNK_110410c58);
  puRam0000000112dd2420 = puVar1;
  return;
}



/* Entry: 10190b658; end: 10190b66b;  */

void FUN_10190b658(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10190b66c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10190b6ac)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10190b66c; end: 10190b717;  */

void FUN_10190b66c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd25b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993628;
  func_0x000107c61520(&UNK_10d993628,&UNK_110411018);
  puRam0000000112dd25b8 = puVar1;
  return;
}



/* Entry: 10190b718; end: 10190b71b;  */

void FUN_10190b718(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd25d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993668;
  func_0x000107c61520(&UNK_10d993668,&UNK_110411018);
  puRam0000000112dd25d8 = puVar1;
  return;
}



/* Entry: 10190b71c; end: 10190b75b;  */

void FUN_10190b71c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd25d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993668;
  func_0x000107c61520(&UNK_10d993668,&UNK_110411018);
  puRam0000000112dd25d8 = puVar1;
  return;
}



/* Entry: 10190b75c; end: 10190b76f;  */

void FUN_10190b75c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10190b770();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10190b7b0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10190b770; end: 10190b81b;  */

void FUN_10190b770(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd25e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993728;
  func_0x000107c61520(&UNK_10d993728,&UNK_110411128);
  puRam0000000112dd25e0 = puVar1;
  return;
}



/* Entry: 10190b81c; end: 10190b81f;  */

void FUN_10190b81c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993768;
  func_0x000107c61520(&UNK_10d993768,&UNK_110411128);
  puRam0000000112dd2600 = puVar1;
  return;
}



/* Entry: 10190b820; end: 10190b85f;  */

void FUN_10190b820(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993768;
  func_0x000107c61520(&UNK_10d993768,&UNK_110411128);
  puRam0000000112dd2600 = puVar1;
  return;
}



/* Entry: 10190b860; end: 10190b873;  */

void FUN_10190b860(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10190b874();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10190b8b4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10190b874; end: 10190b91f;  */

void FUN_10190b874(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993850;
  func_0x000107c61520(&UNK_10d993850,&UNK_1104112c8);
  puRam0000000112dd2608 = puVar1;
  return;
}



/* Entry: 10190b920; end: 10190b923;  */

void FUN_10190b920(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993890;
  func_0x000107c61520(&UNK_10d993890,&UNK_1104112c8);
  puRam0000000112dd2628 = puVar1;
  return;
}



/* Entry: 10190b924; end: 10190b963;  */

void FUN_10190b924(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993890;
  func_0x000107c61520(&UNK_10d993890,&UNK_1104112c8);
  puRam0000000112dd2628 = puVar1;
  return;
}



/* Entry: 10190b964; end: 10190b977;  */

void FUN_10190b964(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10190b978();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10190b9b8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10190b978; end: 10190ba23;  */

void FUN_10190b978(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993950;
  func_0x000107c61520(&UNK_10d993950,&UNK_110411738);
  puRam0000000112dd2630 = puVar1;
  return;
}



/* Entry: 10190ba24; end: 10190ba27;  */

void FUN_10190ba24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993990;
  func_0x000107c61520(&UNK_10d993990,&UNK_110411738);
  puRam0000000112dd2650 = puVar1;
  return;
}



/* Entry: 10190ba28; end: 10190ba67;  */

void FUN_10190ba28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993990;
  func_0x000107c61520(&UNK_10d993990,&UNK_110411738);
  puRam0000000112dd2650 = puVar1;
  return;
}



/* Entry: 10190ba68; end: 10190ba7b;  */

void FUN_10190ba68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10190ba7c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10190babc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10190ba7c; end: 10190bb27;  */

void FUN_10190ba7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993a50;
  func_0x000107c61520(&UNK_10d993a50,&UNK_1104117c8);
  puRam0000000112dd2658 = puVar1;
  return;
}



/* Entry: 10190bb28; end: 10190bb6b;  */

void FUN_10190bb28(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 10190bb6c; end: 10190bb6f;  */

void FUN_10190bb6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993a90;
  func_0x000107c61520(&UNK_10d993a90,&UNK_1104117c8);
  puRam0000000112dd2678 = puVar1;
  return;
}



/* Entry: 10190bb70; end: 10190bbaf;  */

void FUN_10190bb70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993a90;
  func_0x000107c61520(&UNK_10d993a90,&UNK_1104117c8);
  puRam0000000112dd2678 = puVar1;
  return;
}



/* Entry: 10190bbb0; end: 10190bbd3;  */

void FUN_10190bbb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10190bbd4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10190bbd4; end: 10190bc13;  */

void FUN_10190bbd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993b00;
  func_0x000107c61520(&UNK_10d993b00,&UNK_110410c58);
  puRam0000000112dd2680 = puVar1;
  return;
}



/* Entry: 10190bc14; end: 10190bc27;  */

void FUN_10190bc14(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10190b158();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10190bc28();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10190bc28; end: 10190bc67;  */

void FUN_10190bc28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d993ab8;
  func_0x000107c61520(&DAT_10d993ab8,&UNK_110410c58);
  puRam0000000112dd2688 = puVar1;
  return;
}



/* Entry: 10190bc68; end: 10190bc6b;  */

void FUN_10190bc68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993b68;
  func_0x000107c61520(&UNK_10d993b68,&UNK_110410c58);
  puRam0000000112dd2690 = puVar1;
  return;
}



/* Entry: 10190bc6c; end: 10190bcab;  */

void FUN_10190bc6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993b68;
  func_0x000107c61520(&UNK_10d993b68,&UNK_110410c58);
  puRam0000000112dd2690 = puVar1;
  return;
}



/* Entry: 10190bcac; end: 10190bccf;  */

void FUN_10190bcac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10190bcd0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10190bcd0; end: 10190bd0f;  */

void FUN_10190bcd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd2698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993bd8;
  func_0x000107c61520(&UNK_10d993bd8,&UNK_110410d68);
  puRam0000000112dd2698 = puVar1;
  return;
}



/* Entry: 10190bd10; end: 10190bd23;  */

void FUN_10190bd10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10190b198)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10190bd24();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10190bd24; end: 10190bd63;  */

void FUN_10190bd24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd26a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d993b90;
  func_0x000107c61520(&DAT_10d993b90,&UNK_110410d68);
  puRam0000000112dd26a0 = puVar1;
  return;
}



/* Entry: 10190bd64; end: 10190bd67;  */

void FUN_10190bd64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd26a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993c40;
  func_0x000107c61520(&UNK_10d993c40,&UNK_110410d68);
  puRam0000000112dd26a8 = puVar1;
  return;
}



/* Entry: 10190bd68; end: 10190bda7;  */

void FUN_10190bd68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd26a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993c40;
  func_0x000107c61520(&UNK_10d993c40,&UNK_110410d68);
  puRam0000000112dd26a8 = puVar1;
  return;
}



/* Entry: 10190bda8; end: 10190bdcb;  */

void FUN_10190bda8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10190bdcc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10190bdcc; end: 10190be0b;  */

void FUN_10190bdcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd26b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d993cb0;
  func_0x000107c61520(&UNK_10d993cb0,&UNK_110410e78);
  puRam0000000112dd26b0 = puVar1;
  return;
}



/* Entry: 10190be0c; end: 10190be1f;  */

void FUN_10190be0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10190b218)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10190be20();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10190be20; end: 10190be5f;  */

void FUN_10190be20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd26b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d993c68;
  func_0x000107c61520(&DAT_10d993c68,&UNK_110410e78);
  puRam0000000112dd26b8 = puVar1;
  return;
}


