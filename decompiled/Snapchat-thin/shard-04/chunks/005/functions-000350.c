/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035ccf70; end: 1035cd043;  */

void FUN_1035ccf70(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [344];
  undefined1 auStack_198 [344];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c610b4(auStack_2f0,param_1,0x158);
  func_0x0001035dffd4(auStack_2f0);
  func_0x000107c61428(lVar2 + 0x508,auStack_308,1,0);
  func_0x000107c610b4(auStack_198,lVar2 + 0x508,0x158);
  func_0x000107c610b4(lVar2 + 0x508,auStack_2f0,0x158);
  func_0x0001035e0354(auStack_198,0x112f7bfb8,&UNK_10dbe3330);
  return;
}



/* Entry: 1035cd044; end: 1035cd1f3;  */

void FUN_1035cd044(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_258 [24];
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_178 = param_1[0x19];
  uStack_180 = param_1[0x18];
  uStack_168 = param_1[0x1b];
  uStack_170 = param_1[0x1a];
  uStack_158 = param_1[0x1d];
  uStack_160 = param_1[0x1c];
  uStack_148 = param_1[0x1f];
  uStack_150 = param_1[0x1e];
  uStack_1b8 = param_1[0x11];
  uStack_1c0 = param_1[0x10];
  uStack_1a8 = param_1[0x13];
  uStack_1b0 = param_1[0x12];
  uStack_198 = param_1[0x15];
  uStack_1a0 = param_1[0x14];
  uStack_188 = param_1[0x17];
  uStack_190 = param_1[0x16];
  uStack_1f8 = param_1[9];
  uStack_200 = param_1[8];
  uStack_1e8 = param_1[0xb];
  uStack_1f0 = param_1[10];
  uStack_1d8 = param_1[0xd];
  uStack_1e0 = param_1[0xc];
  uStack_1c8 = param_1[0xf];
  uStack_1d0 = param_1[0xe];
  uStack_238 = param_1[1];
  uStack_240 = *param_1;
  uStack_228 = param_1[3];
  uStack_230 = param_1[2];
  uStack_218 = param_1[5];
  uStack_220 = param_1[4];
  uStack_208 = param_1[7];
  uStack_210 = param_1[6];
  func_0x0001035e0018(&uStack_240);
  func_0x000107c61428(lVar2 + 0x660,auStack_258,1,0);
  uStack_78 = *(undefined8 *)(lVar2 + 0x728);
  uStack_80 = *(undefined8 *)(lVar2 + 0x720);
  uStack_68 = *(undefined8 *)(lVar2 + 0x738);
  uStack_70 = *(undefined8 *)(lVar2 + 0x730);
  uStack_58 = *(undefined8 *)(lVar2 + 0x748);
  uStack_60 = *(undefined8 *)(lVar2 + 0x740);
  uStack_48 = *(undefined8 *)(lVar2 + 0x758);
  uStack_50 = *(undefined8 *)(lVar2 + 0x750);
  uStack_b8 = *(undefined8 *)(lVar2 + 0x6e8);
  uStack_c0 = *(undefined8 *)(lVar2 + 0x6e0);
  uStack_a8 = *(undefined8 *)(lVar2 + 0x6f8);
  uStack_b0 = *(undefined8 *)(lVar2 + 0x6f0);
  uStack_98 = *(undefined8 *)(lVar2 + 0x708);
  uStack_a0 = *(undefined8 *)(lVar2 + 0x700);
  uStack_88 = *(undefined8 *)(lVar2 + 0x718);
  uStack_90 = *(undefined8 *)(lVar2 + 0x710);
  uStack_f8 = *(undefined8 *)(lVar2 + 0x6a8);
  uStack_100 = *(undefined8 *)(lVar2 + 0x6a0);
  uStack_e8 = *(undefined8 *)(lVar2 + 0x6b8);
  uStack_f0 = *(undefined8 *)(lVar2 + 0x6b0);
  uStack_d8 = *(undefined8 *)(lVar2 + 0x6c8);
  uStack_e0 = *(undefined8 *)(lVar2 + 0x6c0);
  uStack_c8 = *(undefined8 *)(lVar2 + 0x6d8);
  uStack_d0 = *(undefined8 *)(lVar2 + 0x6d0);
  uStack_138 = *(undefined8 *)(lVar2 + 0x668);
  uStack_140 = *(undefined8 *)(lVar2 + 0x660);
  uStack_128 = *(undefined8 *)(lVar2 + 0x678);
  uStack_130 = *(undefined8 *)(lVar2 + 0x670);
  uStack_118 = *(undefined8 *)(lVar2 + 0x688);
  uStack_120 = *(undefined8 *)(lVar2 + 0x680);
  uStack_108 = *(undefined8 *)(lVar2 + 0x698);
  uStack_110 = *(undefined8 *)(lVar2 + 0x690);
  *(undefined8 *)(lVar2 + 0x728) = uStack_178;
  *(undefined8 *)(lVar2 + 0x720) = uStack_180;
  *(undefined8 *)(lVar2 + 0x738) = uStack_168;
  *(undefined8 *)(lVar2 + 0x730) = uStack_170;
  *(undefined8 *)(lVar2 + 0x748) = uStack_158;
  *(undefined8 *)(lVar2 + 0x740) = uStack_160;
  *(undefined8 *)(lVar2 + 0x758) = uStack_148;
  *(undefined8 *)(lVar2 + 0x750) = uStack_150;
  *(undefined8 *)(lVar2 + 0x6e8) = uStack_1b8;
  *(undefined8 *)(lVar2 + 0x6e0) = uStack_1c0;
  *(undefined8 *)(lVar2 + 0x6f8) = uStack_1a8;
  *(undefined8 *)(lVar2 + 0x6f0) = uStack_1b0;
  *(undefined8 *)(lVar2 + 0x708) = uStack_198;
  *(undefined8 *)(lVar2 + 0x700) = uStack_1a0;
  *(undefined8 *)(lVar2 + 0x718) = uStack_188;
  *(undefined8 *)(lVar2 + 0x710) = uStack_190;
  *(undefined8 *)(lVar2 + 0x6a8) = uStack_1f8;
  *(undefined8 *)(lVar2 + 0x6a0) = uStack_200;
  *(undefined8 *)(lVar2 + 0x6b8) = uStack_1e8;
  *(undefined8 *)(lVar2 + 0x6b0) = uStack_1f0;
  *(undefined8 *)(lVar2 + 0x6c8) = uStack_1d8;
  *(undefined8 *)(lVar2 + 0x6c0) = uStack_1e0;
  *(undefined8 *)(lVar2 + 0x6d8) = uStack_1c8;
  *(undefined8 *)(lVar2 + 0x6d0) = uStack_1d0;
  *(undefined8 *)(lVar2 + 0x668) = uStack_238;
  *(undefined8 *)(lVar2 + 0x660) = uStack_240;
  *(undefined8 *)(lVar2 + 0x678) = uStack_228;
  *(undefined8 *)(lVar2 + 0x670) = uStack_230;
  *(undefined8 *)(lVar2 + 0x688) = uStack_218;
  *(undefined8 *)(lVar2 + 0x680) = uStack_220;
  *(undefined8 *)(lVar2 + 0x698) = uStack_208;
  *(undefined8 *)(lVar2 + 0x690) = uStack_210;
  func_0x0001035e0354(&uStack_140,0x112f7bfc8,&UNK_10dbe3340);
  return;
}



/* Entry: 1035cd1f4; end: 1035cd233;  */

void FUN_1035cd1f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x760,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x760));
  return;
}



/* Entry: 1035cd234; end: 1035cd34b;  */

void FUN_1035cd234(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x760,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x760);
  *(undefined8 *)(lVar3 + 0x760) = param_1;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1035cd34c; end: 1035cd41f;  */

void FUN_1035cd34c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [328];
  undefined1 auStack_188 [328];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c610b4(auStack_2d0,param_1,0x148);
  func_0x0001035e0064(auStack_2d0);
  func_0x000107c61428(lVar2 + 0x778,auStack_2e8,1,0);
  func_0x000107c610b4(auStack_188,lVar2 + 0x778,0x148);
  func_0x000107c610b4(lVar2 + 0x778,auStack_2d0,0x148);
  func_0x0001035e0354(auStack_188,0x112f7bfd8,&UNK_10dbe3350);
  return;
}



/* Entry: 1035cd420; end: 1035cd5eb;  */

void FUN_1035cd420(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x8c0,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x8c0);
  uVar3 = *(undefined8 *)(lVar5 + 0x8c8);
  uVar4 = *(undefined8 *)(lVar5 + 0x8d0);
  *(ulong *)(lVar5 + 0x8c0) = param_1 & 0xffffffff;
  *(undefined8 *)(lVar5 + 0x8c8) = param_2;
  *(undefined8 *)(lVar5 + 0x8d0) = param_3;
  func_0x000100d5628c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035cd5ec; end: 1035cd74b;  */

void FUN_1035cd5ec(uint param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x950,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x950);
  uVar3 = *(undefined8 *)(lVar5 + 0x958);
  uVar4 = *(undefined8 *)(lVar5 + 0x960);
  *(ulong *)(lVar5 + 0x950) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0x958) = param_2;
  *(undefined8 *)(lVar5 + 0x960) = param_3;
  func_0x000100d5628c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035cd74c; end: 1035cd7fb;  */

void FUN_1035cd74c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0x980,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0x980);
  uVar3 = *(undefined8 *)(lVar5 + 0x988);
  uVar4 = *(undefined8 *)(lVar5 + 0x990);
  *(ulong *)(lVar5 + 0x980) = param_1 & 0xffffffff;
  *(undefined8 *)(lVar5 + 0x988) = param_2;
  *(undefined8 *)(lVar5 + 0x990) = param_3;
  func_0x000100d5628c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035cd7fc; end: 1035cd913;  */

void FUN_1035cd7fc(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0x9b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0x9b0);
  *(undefined8 *)(lVar3 + 0x9b0) = param_1;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1035cd914; end: 1035cdb1b;  */

void FUN_1035cd914(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
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
  undefined1 auStack_3c8 [280];
  undefined1 auStack_2b0 [24];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
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
  undefined1 uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
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
  undefined8 *puVar3;
  
  func_0x000107c61428(param_4 + 0x9c0,auStack_2b0,0,0);
  func_0x000107c610b4(&uStack_180,param_4 + 0x9c0,0x118);
  iVar1 = (int)&uStack_180;
  func_0x0001035e009c();
  if (iVar1 == 1) {
    puVar3 = &uStack_298;
    FUN_1036056e4(&uStack_298);
    uStack_3e8 = uStack_1b0;
    uStack_3f0 = uStack_1b8;
    uStack_3d8 = uStack_190;
    uStack_3e0 = uStack_198;
    uStack_408 = uStack_1c0;
    uStack_410 = uStack_1c8;
    uStack_3f8 = uStack_1a0;
    uStack_400 = uStack_1a8;
    uStack_428 = uStack_1e0;
    uStack_430 = uStack_1e8;
    uStack_418 = uStack_1d0;
    uStack_420 = uStack_1d8;
    uStack_448 = uStack_210;
    uStack_450 = uStack_218;
    uStack_438 = uStack_1f0;
    uStack_440 = uStack_1f8;
    uStack_468 = uStack_220;
    uStack_470 = uStack_228;
    uStack_458 = uStack_200;
    uStack_460 = uStack_208;
    uStack_488 = uStack_240;
    uStack_490 = uStack_248;
    uStack_478 = uStack_230;
    uStack_480 = uStack_238;
    uStack_498 = uStack_250;
    uStack_4a0 = uStack_258;
    uStack_70 = uStack_188;
    uStack_158 = uStack_270;
    uStack_168 = uStack_280;
    uStack_178 = uStack_290;
    uStack_148 = uStack_260;
    uStack_150 = uStack_268;
    uStack_160 = uStack_278;
    uStack_170 = uStack_288;
  }
  else {
    uStack_498 = uStack_138;
    uStack_4a0 = uStack_140;
    uStack_488 = uStack_128;
    uStack_490 = uStack_130;
    uStack_478 = uStack_118;
    uStack_480 = uStack_120;
    uStack_468 = uStack_108;
    uStack_470 = uStack_110;
    uStack_458 = uStack_e8;
    uStack_460 = uStack_f0;
    uStack_448 = uStack_f8;
    uStack_450 = uStack_100;
    uStack_438 = uStack_d8;
    uStack_440 = uStack_e0;
    uStack_428 = uStack_c8;
    uStack_430 = uStack_d0;
    uStack_418 = uStack_b8;
    uStack_420 = uStack_c0;
    uStack_408 = uStack_a8;
    uStack_410 = uStack_b0;
    uStack_3f8 = uStack_88;
    uStack_400 = uStack_90;
    uStack_3e8 = uStack_98;
    uStack_3f0 = uStack_a0;
    uStack_3d8 = uStack_78;
    uStack_3e0 = uStack_80;
    puVar3 = &uStack_180;
  }
  uVar2 = *puVar3;
  FUN_1035e02d8(&uStack_180,auStack_3c8,0x112f7bff8,&UNK_10dbe3370);
  *param_1 = uVar2;
  param_1[1] = uStack_178;
  *(undefined1 *)(param_1 + 2) = uStack_170;
  param_1[3] = uStack_168;
  *(undefined1 *)(param_1 + 4) = uStack_160;
  param_1[5] = uStack_158;
  *(undefined1 *)(param_1 + 6) = uStack_150;
  param_1[7] = uStack_148;
  param_1[9] = uStack_498;
  param_1[8] = uStack_4a0;
  param_1[0xb] = uStack_488;
  param_1[10] = uStack_490;
  param_1[0xd] = uStack_478;
  param_1[0xc] = uStack_480;
  param_1[0xf] = uStack_468;
  param_1[0xe] = uStack_470;
  param_1[0x11] = uStack_448;
  param_1[0x10] = uStack_450;
  param_1[0x13] = uStack_458;
  param_1[0x12] = uStack_460;
  param_1[0x15] = uStack_438;
  param_1[0x14] = uStack_440;
  param_1[0x17] = uStack_428;
  param_1[0x16] = uStack_430;
  param_1[0x19] = uStack_418;
  param_1[0x18] = uStack_420;
  param_1[0x1b] = uStack_408;
  param_1[0x1a] = uStack_410;
  param_1[0x1d] = uStack_3e8;
  param_1[0x1c] = uStack_3f0;
  param_1[0x1f] = uStack_3f8;
  param_1[0x1e] = uStack_400;
  param_1[0x21] = uStack_3d8;
  param_1[0x20] = uStack_3e0;
  param_1[0x22] = uStack_70;
  return;
}



/* Entry: 1035cdb1c; end: 1035cdbef;  */

void FUN_1035cdb1c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [280];
  undefined1 auStack_158 [280];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c610b4(auStack_270,param_1,0x118);
  func_0x0001035e00b4(auStack_270);
  func_0x000107c61428(lVar2 + 0x9c0,auStack_288,1,0);
  func_0x000107c610b4(auStack_158,lVar2 + 0x9c0,0x118);
  func_0x000107c610b4(lVar2 + 0x9c0,auStack_270,0x118);
  func_0x0001035e0354(auStack_158,0x112f7bff8,&UNK_10dbe3370);
  return;
}



/* Entry: 1035cdbf0; end: 1035cdcff;  */

void FUN_1035cdbf0(byte param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0xb20,auStack_48,1,0);
  *(byte *)(lVar3 + 0xb20) = param_1 & 1;
  return;
}



/* Entry: 1035cdd00; end: 1035cddaf;  */

void FUN_1035cdd00(uint param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0xb28,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0xb28);
  uVar3 = *(undefined8 *)(lVar5 + 0xb30);
  uVar4 = *(undefined8 *)(lVar5 + 0xb38);
  *(ulong *)(lVar5 + 0xb28) = (ulong)param_1;
  *(undefined8 *)(lVar5 + 0xb30) = param_2;
  *(undefined8 *)(lVar5 + 0xb38) = param_3;
  func_0x000100d5628c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035cddb0; end: 1035cde3b;  */

void FUN_1035cddb0(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0xb40,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0xb40);
  *(undefined8 *)(lVar3 + 0xb40) = param_1;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1035cde3c; end: 1035cdf0f;  */

void FUN_1035cde3c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [312];
  undefined1 auStack_178 [312];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c610b4(auStack_2b0,param_1,0x138);
  func_0x0001035e00e8(auStack_2b0);
  func_0x000107c61428(lVar2 + 0xb48,auStack_2c8,1,0);
  func_0x000107c610b4(auStack_178,lVar2 + 0xb48,0x138);
  func_0x000107c610b4(lVar2 + 0xb48,auStack_2b0,0x138);
  func_0x0001035e0354(auStack_178,0x112f7c008,&UNK_10dbe3380);
  return;
}



/* Entry: 1035cdf10; end: 1035cdf97;  */

void FUN_1035cdf10(byte param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0xc80,auStack_48,1,0);
  *(byte *)(lVar3 + 0xc80) = param_1 & 1;
  return;
}



/* Entry: 1035cdf98; end: 1035ce043;  */

void FUN_1035cdf98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0xc88,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0xc88);
  uVar3 = *(undefined8 *)(lVar5 + 0xc90);
  uVar4 = *(undefined8 *)(lVar5 + 0xc98);
  *(undefined8 *)(lVar5 + 0xc88) = param_1;
  *(undefined8 *)(lVar5 + 0xc90) = param_2;
  *(undefined8 *)(lVar5 + 0xc98) = param_3;
  func_0x0001035e015c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035ce044; end: 1035ce157;  */

void FUN_1035ce044(byte param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0xca0,auStack_48,1,0);
  *(byte *)(lVar3 + 0xca0) = param_1 & 1;
  return;
}



/* Entry: 1035ce158; end: 1035ce207;  */

void FUN_1035ce158(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar5,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar5;
  }
  func_0x000107c61428(lVar5 + 0xcb8,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar5 + 0xcb8);
  uVar3 = *(undefined8 *)(lVar5 + 0xcc0);
  uVar4 = *(undefined8 *)(lVar5 + 0xcc8);
  *(ulong *)(lVar5 + 0xcb8) = param_1 & 0xffffffff;
  *(undefined8 *)(lVar5 + 0xcc0) = param_2;
  *(undefined8 *)(lVar5 + 0xcc8) = param_3;
  func_0x000100d5628c(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1035ce208; end: 1035ce423;  */

void FUN_1035ce208(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0xcd0,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0xcd0) = param_1;
  *(undefined1 *)(lVar3 + 0xcd8) = param_2;
  return;
}



/* Entry: 1035ce424; end: 1035ce5c3;  */

void FUN_1035ce424(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
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
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368();
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_158 = param_1[0x19];
  uStack_160 = param_1[0x18];
  uStack_148 = param_1[0x1b];
  uStack_150 = param_1[0x1a];
  uStack_178 = param_1[0x15];
  uStack_180 = param_1[0x14];
  uStack_168 = param_1[0x17];
  uStack_170 = param_1[0x16];
  uStack_138 = param_1[0x1d];
  uStack_140 = param_1[0x1c];
  uStack_198 = param_1[0x11];
  uStack_1a0 = param_1[0x10];
  uStack_188 = param_1[0x13];
  uStack_190 = param_1[0x12];
  uStack_1b8 = param_1[0xd];
  uStack_1c0 = param_1[0xc];
  uStack_1a8 = param_1[0xf];
  uStack_1b0 = param_1[0xe];
  uStack_1d8 = param_1[9];
  uStack_1e0 = param_1[8];
  uStack_1c8 = param_1[0xb];
  uStack_1d0 = param_1[10];
  uStack_218 = param_1[1];
  uStack_220 = *param_1;
  uStack_208 = param_1[3];
  uStack_210 = param_1[2];
  uStack_1f8 = param_1[5];
  uStack_200 = param_1[4];
  uStack_1e8 = param_1[7];
  uStack_1f0 = param_1[6];
  FUN_1035e0190(&uStack_220);
  func_0x000107c61428(lVar2 + 0xce0,auStack_238,1,0);
  uStack_78 = *(undefined8 *)(lVar2 + 0xd98);
  uStack_80 = *(undefined8 *)(lVar2 + 0xd90);
  uStack_68 = *(undefined8 *)(lVar2 + 0xda8);
  uStack_70 = *(undefined8 *)(lVar2 + 0xda0);
  uStack_58 = *(undefined8 *)(lVar2 + 0xdb8);
  uStack_60 = *(undefined8 *)(lVar2 + 0xdb0);
  uStack_48 = *(undefined8 *)(lVar2 + 0xdc8);
  uStack_50 = *(undefined8 *)(lVar2 + 0xdc0);
  uStack_b8 = *(undefined8 *)(lVar2 + 0xd58);
  uStack_c0 = *(undefined8 *)(lVar2 + 0xd50);
  uStack_a8 = *(undefined8 *)(lVar2 + 0xd68);
  uStack_b0 = *(undefined8 *)(lVar2 + 0xd60);
  uStack_98 = *(undefined8 *)(lVar2 + 0xd78);
  uStack_a0 = *(undefined8 *)(lVar2 + 0xd70);
  uStack_88 = *(undefined8 *)(lVar2 + 0xd88);
  uStack_90 = *(undefined8 *)(lVar2 + 0xd80);
  uStack_f8 = *(undefined8 *)(lVar2 + 0xd18);
  uStack_100 = *(undefined8 *)(lVar2 + 0xd10);
  uStack_e8 = *(undefined8 *)(lVar2 + 0xd28);
  uStack_f0 = *(undefined8 *)(lVar2 + 0xd20);
  uStack_d8 = *(undefined8 *)(lVar2 + 0xd38);
  uStack_e0 = *(undefined8 *)(lVar2 + 0xd30);
  uStack_c8 = *(undefined8 *)(lVar2 + 0xd48);
  uStack_d0 = *(undefined8 *)(lVar2 + 0xd40);
  uStack_128 = *(undefined8 *)(lVar2 + 0xce8);
  uStack_130 = *(undefined8 *)(lVar2 + 0xce0);
  uStack_118 = *(undefined8 *)(lVar2 + 0xcf8);
  uStack_120 = *(undefined8 *)(lVar2 + 0xcf0);
  uStack_108 = *(undefined8 *)(lVar2 + 0xd08);
  uStack_110 = *(undefined8 *)(lVar2 + 0xd00);
  *(undefined8 *)(lVar2 + 0xd98) = uStack_168;
  *(undefined8 *)(lVar2 + 0xd90) = uStack_170;
  *(undefined8 *)(lVar2 + 0xda8) = uStack_158;
  *(undefined8 *)(lVar2 + 0xda0) = uStack_160;
  *(undefined8 *)(lVar2 + 0xdb8) = uStack_148;
  *(undefined8 *)(lVar2 + 0xdb0) = uStack_150;
  *(undefined8 *)(lVar2 + 0xdc8) = uStack_138;
  *(undefined8 *)(lVar2 + 0xdc0) = uStack_140;
  *(undefined8 *)(lVar2 + 0xd58) = uStack_1a8;
  *(undefined8 *)(lVar2 + 0xd50) = uStack_1b0;
  *(undefined8 *)(lVar2 + 0xd68) = uStack_198;
  *(undefined8 *)(lVar2 + 0xd60) = uStack_1a0;
  *(undefined8 *)(lVar2 + 0xd78) = uStack_188;
  *(undefined8 *)(lVar2 + 0xd70) = uStack_190;
  *(undefined8 *)(lVar2 + 0xd88) = uStack_178;
  *(undefined8 *)(lVar2 + 0xd80) = uStack_180;
  *(undefined8 *)(lVar2 + 0xd18) = uStack_1e8;
  *(undefined8 *)(lVar2 + 0xd10) = uStack_1f0;
  *(undefined8 *)(lVar2 + 0xd28) = uStack_1d8;
  *(undefined8 *)(lVar2 + 0xd20) = uStack_1e0;
  *(undefined8 *)(lVar2 + 0xd38) = uStack_1c8;
  *(undefined8 *)(lVar2 + 0xd30) = uStack_1d0;
  *(undefined8 *)(lVar2 + 0xd48) = uStack_1b8;
  *(undefined8 *)(lVar2 + 0xd40) = uStack_1c0;
  *(undefined8 *)(lVar2 + 0xce8) = uStack_218;
  *(undefined8 *)(lVar2 + 0xce0) = uStack_220;
  *(undefined8 *)(lVar2 + 0xcf8) = uStack_208;
  *(undefined8 *)(lVar2 + 0xcf0) = uStack_210;
  *(undefined8 *)(lVar2 + 0xd08) = uStack_1f8;
  *(undefined8 *)(lVar2 + 0xd00) = uStack_200;
  func_0x0001035e0354(&uStack_130,0x112f7c018,&UNK_10dbe3390);
  return;
}



/* Entry: 1035ce5c4; end: 1035ce64f;  */

void FUN_1035ce5c4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0xdd0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar3 + 0xdd0);
  *(undefined8 *)(lVar3 + 0xdd0) = param_1;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1035ce650; end: 1035ce743;  */

void FUN_1035ce650(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_118 [24];
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
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar4,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
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
  puVar1 = (undefined8 *)(lVar4 + 0xdd8);
  func_0x000107c61428(puVar1,auStack_118,1,0);
  uStack_78 = *(undefined8 *)(lVar4 + 0xe00);
  uStack_80 = *(undefined8 *)(lVar4 + 0xdf8);
  uStack_68 = *(undefined8 *)(lVar4 + 0xe10);
  uStack_70 = *(undefined8 *)(lVar4 + 0xe08);
  uStack_58 = *(undefined8 *)(lVar4 + 0xe20);
  uStack_60 = *(undefined8 *)(lVar4 + 0xe18);
  uStack_48 = *(undefined8 *)(lVar4 + 0xe30);
  uStack_50 = *(undefined8 *)(lVar4 + 0xe28);
  uStack_98 = *(undefined8 *)(lVar4 + 0xde0);
  uStack_a0 = *puVar1;
  uStack_88 = *(undefined8 *)(lVar4 + 0xdf0);
  uStack_90 = *(undefined8 *)(lVar4 + 0xde8);
  *(undefined8 *)(lVar4 + 0xe00) = uStack_d8;
  *(undefined8 *)(lVar4 + 0xdf8) = uStack_e0;
  *(undefined8 *)(lVar4 + 0xe10) = uStack_c8;
  *(undefined8 *)(lVar4 + 0xe08) = uStack_d0;
  *(undefined8 *)(lVar4 + 0xe20) = uStack_b8;
  *(undefined8 *)(lVar4 + 0xe18) = uStack_c0;
  *(undefined8 *)(lVar4 + 0xe30) = uStack_a8;
  *(undefined8 *)(lVar4 + 0xe28) = uStack_b0;
  *(undefined8 *)(lVar4 + 0xde0) = uStack_f8;
  *puVar1 = uStack_100;
  *(undefined8 *)(lVar4 + 0xdf0) = uStack_e8;
  *(undefined8 *)(lVar4 + 0xde8) = uStack_f0;
  func_0x0001035e0354(&uStack_a0,0x112f7c028,&UNK_10dbe33a0);
  return;
}



/* Entry: 1035ce744; end: 1035ce807;  */

void FUN_1035ce744(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_58 [24];
  
  uVar9 = *param_1;
  uVar14 = param_1[4];
  uVar13 = param_1[3];
  uVar12 = param_1[2];
  uVar11 = param_1[1];
  uVar10 = param_1[5];
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar8 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368();
    *(long *)(unaff_x20 + 0x10) = lVar8;
  }
  func_0x000107c61428(lVar8 + 0xe38,auStack_58,1,0);
  uVar2 = *(undefined8 *)(lVar8 + 0xe38);
  uVar3 = *(undefined8 *)(lVar8 + 0xe40);
  uVar4 = *(undefined8 *)(lVar8 + 0xe48);
  uVar5 = *(undefined8 *)(lVar8 + 0xe50);
  uVar6 = *(undefined8 *)(lVar8 + 0xe58);
  uVar7 = *(undefined8 *)(lVar8 + 0xe60);
  *(undefined8 *)(lVar8 + 0xe38) = uVar9;
  *(undefined8 *)(lVar8 + 0xe48) = uVar12;
  *(undefined8 *)(lVar8 + 0xe40) = uVar11;
  *(undefined8 *)(lVar8 + 0xe58) = uVar14;
  *(undefined8 *)(lVar8 + 0xe50) = uVar13;
  *(undefined8 *)(lVar8 + 0xe60) = uVar10;
  func_0x0001035e0224(uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}



/* Entry: 1035ce808; end: 1035cea47;  */

void FUN_1035ce808(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_c8 [24];
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
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar4,uVar3);
    *(long *)(unaff_x20 + 0x10) = lVar4;
  }
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  puVar1 = (undefined8 *)(lVar4 + 0xe68);
  func_0x000107c61428(puVar1,auStack_c8,1,0);
  uStack_68 = *(undefined8 *)(lVar4 + 0xe70);
  uStack_70 = *puVar1;
  uStack_58 = *(undefined8 *)(lVar4 + 0xe80);
  uStack_60 = *(undefined8 *)(lVar4 + 0xe78);
  uStack_48 = *(undefined8 *)(lVar4 + 0xe90);
  uStack_50 = *(undefined8 *)(lVar4 + 0xe88);
  uStack_38 = *(undefined8 *)(lVar4 + 0xea0);
  uStack_40 = *(undefined8 *)(lVar4 + 0xe98);
  *(undefined8 *)(lVar4 + 0xe70) = uStack_a8;
  *puVar1 = uStack_b0;
  *(undefined8 *)(lVar4 + 0xe80) = uStack_98;
  *(undefined8 *)(lVar4 + 0xe78) = uStack_a0;
  *(undefined8 *)(lVar4 + 0xe90) = uStack_88;
  *(undefined8 *)(lVar4 + 0xe88) = uStack_90;
  *(undefined8 *)(lVar4 + 0xea0) = uStack_78;
  *(undefined8 *)(lVar4 + 0xe98) = uStack_80;
  func_0x0001035e0354(&uStack_70,0x112f7c038,&UNK_10dbe33b0);
  return;
}



/* Entry: 1035cea48; end: 1035ceb8b;  */

void FUN_1035cea48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  undefined1 auStack_190 [152];
  undefined1 auStack_f8 [24];
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
  
  func_0x000107c61428((undefined8 *)(param_4 + 0xf48),auStack_f8,0,0);
  uStack_78 = *(undefined8 *)(param_4 + 0xfb0);
  uStack_80 = *(undefined8 *)(param_4 + 0xfa8);
  uStack_68 = *(undefined8 *)(param_4 + 0xfc0);
  uStack_70 = *(undefined8 *)(param_4 + 0xfb8);
  uStack_58 = *(undefined8 *)(param_4 + 0xfd0);
  uStack_60 = *(undefined8 *)(param_4 + 0xfc8);
  uStack_50 = *(undefined8 *)(param_4 + 0xfd8);
  uStack_b8 = *(undefined8 *)(param_4 + 0xf70);
  uStack_c0 = *(undefined8 *)(param_4 + 0xf68);
  uStack_a8 = *(undefined8 *)(param_4 + 0xf80);
  uStack_b0 = *(undefined8 *)(param_4 + 0xf78);
  uStack_98 = *(undefined8 *)(param_4 + 0xf90);
  uStack_a0 = *(undefined8 *)(param_4 + 0xf88);
  uStack_88 = *(undefined8 *)(param_4 + 4000);
  uStack_90 = *(undefined8 *)(param_4 + 0xf98);
  uStack_d8 = *(undefined8 *)(param_4 + 0xf50);
  uStack_e0 = *(undefined8 *)(param_4 + 0xf48);
  uStack_c8 = *(undefined8 *)(param_4 + 0xf60);
  uStack_d0 = *(undefined8 *)(param_4 + 0xf58);
  iVar1 = (int)&uStack_e0;
  FUN_1035e0284();
  if (iVar1 == 1) {
    uStack_1a8 = 0;
    uStack_1b0 = 0xf000000000000000;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0xc000000000000000;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_208 = 0xf000000000000000;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_198 = 0xf000000000000000;
    uStack_1a0 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 2;
  }
  else {
    uStack_1c8 = uStack_d8;
    uStack_1d0 = uStack_e0;
    uStack_1b8 = uStack_c8;
    uStack_1c0 = uStack_d0;
    uStack_1e8 = uStack_88;
    uStack_1f0 = uStack_90;
    uStack_1d8 = uStack_a8;
    uStack_1e0 = uStack_b0;
    uStack_1a8 = uStack_98;
    uStack_1b0 = uStack_a0;
    uStack_198 = uStack_b8;
    uStack_1a0 = uStack_c0;
    uStack_208 = uStack_68;
    uStack_210 = uStack_70;
    uStack_1f8 = uStack_78;
    uStack_200 = uStack_80;
    uVar2 = uStack_58;
    uVar3 = uStack_50;
    uVar4 = uStack_60;
  }
  FUN_1035e02d8(&uStack_e0,auStack_190,0x112f7c068,&UNK_10dbe33e0);
  param_1[1] = uStack_1c8;
  *param_1 = uStack_1d0;
  param_1[3] = uStack_1b8;
  param_1[2] = uStack_1c0;
  param_1[5] = uStack_198;
  param_1[4] = uStack_1a0;
  param_1[7] = uStack_1d8;
  param_1[6] = uStack_1e0;
  param_1[9] = uStack_1a8;
  param_1[8] = uStack_1b0;
  param_1[0xb] = uStack_1e8;
  param_1[10] = uStack_1f0;
  param_1[0xd] = uStack_1f8;
  param_1[0xc] = uStack_200;
  param_1[0xf] = uStack_208;
  param_1[0xe] = uStack_210;
  param_1[0x10] = uVar4;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar3;
  return;
}



/* Entry: 1035ceb8c; end: 1035cecc7;  */

void FUN_1035ceb8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
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
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) == 0) {
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368();
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_f0 = param_1[0x12];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  func_0x0001035e02a8(&uStack_180);
  puVar1 = (undefined8 *)(lVar3 + 0xf48);
  func_0x000107c61428(puVar1,auStack_198,1,0);
  uStack_78 = *(undefined8 *)(lVar3 + 0xfb0);
  uStack_80 = *(undefined8 *)(lVar3 + 0xfa8);
  uStack_68 = *(undefined8 *)(lVar3 + 0xfc0);
  uStack_70 = *(undefined8 *)(lVar3 + 0xfb8);
  uStack_58 = *(undefined8 *)(lVar3 + 0xfd0);
  uStack_60 = *(undefined8 *)(lVar3 + 0xfc8);
  uStack_50 = *(undefined8 *)(lVar3 + 0xfd8);
  uStack_b8 = *(undefined8 *)(lVar3 + 0xf70);
  uStack_c0 = *(undefined8 *)(lVar3 + 0xf68);
  uStack_a8 = *(undefined8 *)(lVar3 + 0xf80);
  uStack_b0 = *(undefined8 *)(lVar3 + 0xf78);
  uStack_98 = *(undefined8 *)(lVar3 + 0xf90);
  uStack_a0 = *(undefined8 *)(lVar3 + 0xf88);
  uStack_88 = *(undefined8 *)(lVar3 + 4000);
  uStack_90 = *(undefined8 *)(lVar3 + 0xf98);
  uStack_d8 = *(undefined8 *)(lVar3 + 0xf50);
  uStack_e0 = *puVar1;
  uStack_c8 = *(undefined8 *)(lVar3 + 0xf60);
  uStack_d0 = *(undefined8 *)(lVar3 + 0xf58);
  *(undefined8 *)(lVar3 + 0xfb0) = uStack_118;
  *(undefined8 *)(lVar3 + 0xfa8) = uStack_120;
  *(undefined8 *)(lVar3 + 0xfc0) = uStack_108;
  *(undefined8 *)(lVar3 + 0xfb8) = uStack_110;
  *(undefined8 *)(lVar3 + 0xfd0) = uStack_f8;
  *(undefined8 *)(lVar3 + 0xfc8) = uStack_100;
  *(undefined8 *)(lVar3 + 0xfd8) = uStack_f0;
  *(undefined8 *)(lVar3 + 0xf70) = uStack_158;
  *(undefined8 *)(lVar3 + 0xf68) = uStack_160;
  *(undefined8 *)(lVar3 + 0xf80) = uStack_148;
  *(undefined8 *)(lVar3 + 0xf78) = uStack_150;
  *(undefined8 *)(lVar3 + 0xf90) = uStack_138;
  *(undefined8 *)(lVar3 + 0xf88) = uStack_140;
  *(undefined8 *)(lVar3 + 4000) = uStack_128;
  *(undefined8 *)(lVar3 + 0xf98) = uStack_130;
  *(undefined8 *)(lVar3 + 0xf50) = uStack_178;
  *puVar1 = uStack_180;
  *(undefined8 *)(lVar3 + 0xf60) = uStack_168;
  *(undefined8 *)(lVar3 + 0xf58) = uStack_170;
  func_0x0001035e0354(&uStack_e0,0x112f7c068,&UNK_10dbe33e0);
  return;
}



/* Entry: 1035cecc8; end: 1035ced53;  */

void FUN_1035cecc8(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(lVar3,uVar2);
    *(long *)(unaff_x20 + 0x10) = lVar3;
  }
  func_0x000107c61428(lVar3 + 0xfe0,auStack_48,1,0);
  *(undefined8 *)(lVar3 + 0xfe0) = param_1;
  *(undefined1 *)(lVar3 + 0xfe8) = param_2;
  return;
}



/* Entry: 1035ced54; end: 1035cedaf;  */

undefined8 FUN_1035ced54(void)

{
  if (lRam0000000112f7c090 != -1) {
    func_0x000107c61568(0x112f7c090,FUN_1035cedf8);
  }
  func_0x000107c6157c(uRam0000000112f7c098);
  return 0;
}



/* Entry: 1035cedb0; end: 1035cedf7;  */

void FUN_1035cedb0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe37e0,0x7f7,2);
  uRam0000000113809338 = uStack_38;
  uRam0000000113809330 = uStack_40;
  uRam0000000113809348 = uStack_28;
  uRam0000000113809340 = uStack_30;
  uRam0000000113809358 = uStack_18;
  uRam0000000113809350 = uStack_20;
  return;
}



/* Entry: 1035cedf8; end: 1035cee33;  */

void FUN_1035cedf8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1035cb3e4();
  func_0x000107c613fc();
  FUN_1035cee34();
  uRam0000000112f7c098 = uVar1;
  return;
}



/* Entry: 1035cee34; end: 1035cf367;  */

void FUN_1035cee34(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined1 auStack_908 [336];
  undefined1 auStack_7b8 [344];
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
  undefined1 auStack_560 [328];
  undefined1 auStack_418 [280];
  undefined1 auStack_300 [312];
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
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 2;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0xf000000000000000;
  FUN_1034cbf6c(&uStack_9a8);
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_940;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_948;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_930;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_938;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_920;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_928;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_910;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_918;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_980;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_988;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_970;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_978;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_960;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_968;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_950;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_958;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_9a0;
  *(undefined8 *)(unaff_x20 + 200) = uStack_9a8;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_990;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_998;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x1a0) = 1;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 2;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined1 *)(unaff_x20 + 0x1f8) = 1;
  *(undefined8 *)(unaff_x20 + 0x200) = 2;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 2;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0xf000000000000000;
  FUN_1035dff68(auStack_908);
  func_0x000107c610b4(unaff_x20 + 0x248,auStack_908,0x150);
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x398) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x400) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x408) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x418) = 0;
  *(undefined8 *)(unaff_x20 + 0x410) = 0;
  *(undefined8 *)(unaff_x20 + 0x420) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x430) = 0;
  *(undefined8 *)(unaff_x20 + 0x428) = 0;
  *(undefined8 *)(unaff_x20 + 0x438) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x448) = 0;
  *(undefined8 *)(unaff_x20 + 0x440) = 0;
  *(undefined8 *)(unaff_x20 + 0x450) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x460) = 0;
  *(undefined8 *)(unaff_x20 + 0x458) = 0;
  *(undefined8 *)(unaff_x20 + 0x468) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x478) = 0;
  *(undefined8 *)(unaff_x20 + 0x470) = 0;
  *(undefined8 *)(unaff_x20 + 0x480) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x490) = 0;
  *(undefined8 *)(unaff_x20 + 0x488) = 0;
  *(undefined8 *)(unaff_x20 + 0x498) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x4a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x4c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x4d0) = 0;
  *(undefined1 *)(unaff_x20 + 0x4d8) = 1;
  *(undefined8 *)(unaff_x20 + 0x4e0) = 0;
  *(undefined1 *)(unaff_x20 + 0x4e8) = 1;
  *(undefined8 *)(unaff_x20 + 0x4f0) = 2;
  *(undefined8 *)(unaff_x20 + 0x500) = 0;
  *(undefined8 *)(unaff_x20 + 0x4f8) = 0;
  func_0x0001035dffd8(auStack_7b8);
  func_0x000107c610b4(unaff_x20 + 0x508,auStack_7b8,0x158);
  func_0x0001035e001c(&uStack_660);
  *(undefined8 *)(unaff_x20 + 0x728) = uStack_598;
  *(undefined8 *)(unaff_x20 + 0x720) = uStack_5a0;
  *(undefined8 *)(unaff_x20 + 0x738) = uStack_588;
  *(undefined8 *)(unaff_x20 + 0x730) = uStack_590;
  *(undefined8 *)(unaff_x20 + 0x748) = uStack_578;
  *(undefined8 *)(unaff_x20 + 0x740) = uStack_580;
  *(undefined8 *)(unaff_x20 + 0x758) = uStack_568;
  *(undefined8 *)(unaff_x20 + 0x750) = uStack_570;
  *(undefined8 *)(unaff_x20 + 0x6e8) = uStack_5d8;
  *(undefined8 *)(unaff_x20 + 0x6e0) = uStack_5e0;
  *(undefined8 *)(unaff_x20 + 0x6f8) = uStack_5c8;
  *(undefined8 *)(unaff_x20 + 0x6f0) = uStack_5d0;
  *(undefined8 *)(unaff_x20 + 0x708) = uStack_5b8;
  *(undefined8 *)(unaff_x20 + 0x700) = uStack_5c0;
  *(undefined8 *)(unaff_x20 + 0x718) = uStack_5a8;
  *(undefined8 *)(unaff_x20 + 0x710) = uStack_5b0;
  *(undefined8 *)(unaff_x20 + 0x6a8) = uStack_618;
  *(undefined8 *)(unaff_x20 + 0x6a0) = uStack_620;
  *(undefined8 *)(unaff_x20 + 0x6b8) = uStack_608;
  *(undefined8 *)(unaff_x20 + 0x6b0) = uStack_610;
  *(undefined8 *)(unaff_x20 + 0x6c8) = uStack_5f8;
  *(undefined8 *)(unaff_x20 + 0x6c0) = uStack_600;
  *(undefined8 *)(unaff_x20 + 0x6d8) = uStack_5e8;
  *(undefined8 *)(unaff_x20 + 0x6d0) = uStack_5f0;
  *(undefined8 *)(unaff_x20 + 0x668) = uStack_658;
  *(undefined8 *)(unaff_x20 + 0x660) = uStack_660;
  *(undefined8 *)(unaff_x20 + 0x678) = uStack_648;
  *(undefined8 *)(unaff_x20 + 0x670) = uStack_650;
  *(undefined8 *)(unaff_x20 + 0x688) = uStack_638;
  *(undefined8 *)(unaff_x20 + 0x680) = uStack_640;
  *(undefined8 *)(unaff_x20 + 0x698) = uStack_628;
  *(undefined8 *)(unaff_x20 + 0x690) = uStack_630;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x760) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x768) = 0;
  *(undefined1 *)(unaff_x20 + 0x770) = 1;
  func_0x0001035e0068(auStack_560);
  func_0x000107c610b4(unaff_x20 + 0x778,auStack_560,0x148);
  *(undefined8 *)(unaff_x20 + 0x8c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x8c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x8d0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x8e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x8d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x8f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x8e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x900) = 0;
  *(undefined8 *)(unaff_x20 + 0x8f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x910) = 0;
  *(undefined8 *)(unaff_x20 + 0x908) = 0;
  *(undefined8 *)(unaff_x20 + 0x920) = 0;
  *(undefined8 *)(unaff_x20 + 0x918) = 0;
  *(undefined8 *)(unaff_x20 + 0x930) = 0;
  *(undefined8 *)(unaff_x20 + 0x928) = 0;
  *(undefined8 *)(unaff_x20 + 0x940) = 0;
  *(undefined8 *)(unaff_x20 + 0x938) = 0;
  *(undefined8 *)(unaff_x20 + 0x950) = 0;
  *(undefined8 *)(unaff_x20 + 0x948) = 0;
  *(undefined8 *)(unaff_x20 + 0x958) = 0;
  *(undefined8 *)(unaff_x20 + 0x960) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x970) = 0;
  *(undefined8 *)(unaff_x20 + 0x968) = 0;
  *(undefined8 *)(unaff_x20 + 0x978) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x988) = 0;
  *(undefined8 *)(unaff_x20 + 0x980) = 0;
  *(undefined8 *)(unaff_x20 + 0x990) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x9a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x998) = 0;
  *(undefined8 *)(unaff_x20 + 0x9a8) = 0xf000000000000000;
  *(undefined **)(unaff_x20 + 0x9b0) = puVar1;
  *(undefined **)(unaff_x20 + 0x9b8) = puVar1;
  func_0x0001035e00b8(auStack_418);
  func_0x000107c610b4(unaff_x20 + 0x9c0,auStack_418,0x118);
  *(undefined8 *)(unaff_x20 + 0xae0) = 0;
  *(undefined8 *)(unaff_x20 + 0xad8) = 0;
  *(undefined8 *)(unaff_x20 + 0xae8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xaf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xaf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb00) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xb10) = 0;
  *(undefined8 *)(unaff_x20 + 0xb08) = 0;
  *(undefined8 *)(unaff_x20 + 0xb18) = 0xf000000000000000;
  *(undefined2 *)(unaff_x20 + 0xb20) = 0;
  *(undefined8 *)(unaff_x20 + 0xb30) = 0;
  *(undefined8 *)(unaff_x20 + 0xb28) = 0;
  *(undefined8 *)(unaff_x20 + 0xb38) = 0xf000000000000000;
  *(undefined **)(unaff_x20 + 0xb40) = puVar1;
  func_0x0001035e00ec(auStack_300);
  func_0x000107c610b4(unaff_x20 + 0xb48,auStack_300,0x138);
  *(undefined1 *)(unaff_x20 + 0xc80) = 0;
  *(undefined8 *)(unaff_x20 + 0xca8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc88) = 0;
  *(undefined8 *)(unaff_x20 + 0xc98) = 0;
  *(undefined8 *)(unaff_x20 + 0xc90) = 0;
  *(undefined1 *)(unaff_x20 + 0xca0) = 0;
  *(undefined1 *)(unaff_x20 + 0xcb0) = 1;
  *(undefined8 *)(unaff_x20 + 0xcc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xcb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xcc8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xcd0) = 0;
  *(undefined1 *)(unaff_x20 + 0xcd8) = 1;
  FUN_1035e0190(&uStack_1c8);
  *(undefined8 *)(unaff_x20 + 0xd98) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0xd90) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0xda8) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0xda0) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0xdb8) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0xdb0) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0xdc8) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0xdc0) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0xd58) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0xd50) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0xd68) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0xd60) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0xd78) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0xd70) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0xd88) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0xd80) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0xd18) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0xd10) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0xd28) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0xd20) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0xd38) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0xd30) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0xd48) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0xd40) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0xce8) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0xce0) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0xcf8) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0xcf0) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0xd08) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0xd00) = uStack_1a8;
  *(undefined **)(unaff_x20 + 0xdd0) = puVar1;
  *(undefined8 *)(unaff_x20 + 0xde0) = 0;
  *(undefined8 *)(unaff_x20 + 0xdd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xdf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xde8) = 0;
  *(undefined8 *)(unaff_x20 + 0xdf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe00) = 1;
  *(undefined8 *)(unaff_x20 + 0xe10) = 0;
  *(undefined8 *)(unaff_x20 + 0xe08) = 0;
  *(undefined8 *)(unaff_x20 + 0xe20) = 0;
  *(undefined8 *)(unaff_x20 + 0xe18) = 0;
  *(undefined8 *)(unaff_x20 + 0xe30) = 0;
  *(undefined8 *)(unaff_x20 + 0xe28) = 0;
  *(undefined8 *)(unaff_x20 + 0xe40) = 0;
  *(undefined8 *)(unaff_x20 + 0xe38) = 0;
  *(undefined8 *)(unaff_x20 + 0xe50) = 0;
  *(undefined8 *)(unaff_x20 + 0xe48) = 0;
  *(undefined8 *)(unaff_x20 + 0xe60) = 0;
  *(undefined8 *)(unaff_x20 + 0xe58) = 0;
  *(undefined8 *)(unaff_x20 + 0xe68) = 0;
  *(undefined8 *)(unaff_x20 + 0xe70) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xe80) = 0;
  *(undefined8 *)(unaff_x20 + 0xe78) = 0;
  *(undefined8 *)(unaff_x20 + 0xe90) = 0;
  *(undefined8 *)(unaff_x20 + 0xe88) = 0;
  *(undefined8 *)(unaff_x20 + 0xea0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe98) = 0;
  *(undefined8 *)(unaff_x20 + 0xea8) = 0;
  *(undefined1 *)(unaff_x20 + 0xeb0) = 1;
  *(undefined8 *)(unaff_x20 + 0xee0) = 0;
  *(undefined8 *)(unaff_x20 + 0xed8) = 0;
  *(undefined8 *)(unaff_x20 + 0xef0) = 0;
  *(undefined8 *)(unaff_x20 + 0xee8) = 0;
  *(undefined8 *)(unaff_x20 + 0xec0) = 0;
  *(undefined8 *)(unaff_x20 + 0xeb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xed0) = 0;
  *(undefined8 *)(unaff_x20 + 0xec8) = 0;
  *(undefined8 *)(unaff_x20 + 0xef8) = 1;
  *(undefined8 *)(unaff_x20 + 0xf08) = 0;
  *(undefined8 *)(unaff_x20 + 0xf00) = 0;
  *(undefined8 *)(unaff_x20 + 0xf18) = 0;
  *(undefined8 *)(unaff_x20 + 0xf10) = 0;
  *(undefined8 *)(unaff_x20 + 0xf28) = 0;
  *(undefined8 *)(unaff_x20 + 0xf20) = 0;
  *(undefined8 *)(unaff_x20 + 0xf38) = 0;
  *(undefined8 *)(unaff_x20 + 0xf30) = 0;
  *(undefined8 *)(unaff_x20 + 0xf40) = 0;
  func_0x0001035e02ac(&uStack_d8);
  *(undefined8 *)(unaff_x20 + 0xfb0) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0xfa8) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0xfc0) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0xfb8) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0xfd0) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0xfc8) = uStack_58;
  *(undefined8 *)(unaff_x20 + 0xfd8) = uStack_48;
  *(undefined8 *)(unaff_x20 + 0xf70) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0xf68) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0xf80) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0xf78) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0xf90) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0xf88) = uStack_98;
  *(undefined8 *)(unaff_x20 + 4000) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0xf98) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0xf50) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0xf48) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0xf60) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0xf58) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0xfe0) = 0;
  *(undefined2 *)(unaff_x20 + 0xfe8) = 1;
  *(undefined8 *)(unaff_x20 + 0xff8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xff0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1008) = 0;
  *(undefined8 *)(unaff_x20 + 0x1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x1018) = 0;
  *(undefined8 *)(unaff_x20 + 0x1010) = 0;
  *(undefined8 *)(unaff_x20 + 0x1028) = 0;
  *(undefined8 *)(unaff_x20 + 0x1020) = 0;
  *(undefined8 *)(unaff_x20 + 0x1030) = 0;
  *(undefined8 *)(unaff_x20 + 0x1038) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1048) = 0;
  *(undefined8 *)(unaff_x20 + 0x1040) = 0;
  *(undefined8 *)(unaff_x20 + 0x1058) = 0;
  *(undefined8 *)(unaff_x20 + 0x1050) = 0;
  *(undefined8 *)(unaff_x20 + 0x1068) = 0;
  *(undefined8 *)(unaff_x20 + 0x1060) = 0;
  *(undefined8 *)(unaff_x20 + 0x1078) = 0;
  *(undefined8 *)(unaff_x20 + 0x1070) = 0;
  *(undefined8 *)(unaff_x20 + 0x1088) = 0;
  *(undefined8 *)(unaff_x20 + 0x1080) = 0;
  *(undefined8 *)(unaff_x20 + 0x1098) = 0;
  *(undefined8 *)(unaff_x20 + 0x1090) = 0;
  return;
}



/* Entry: 1035cf368; end: 1035d1ebf;  */

void FUN_1035cf368(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auStack_30d0 [24];
  undefined1 auStack_30b8 [24];
  undefined1 auStack_30a0 [24];
  undefined1 auStack_3088 [24];
  undefined1 auStack_3070 [24];
  undefined1 auStack_3058 [24];
  undefined1 auStack_3040 [24];
  undefined1 auStack_3028 [24];
  undefined8 uStack_3010;
  undefined8 uStack_3008;
  undefined8 uStack_3000;
  undefined8 uStack_2ff8;
  undefined8 uStack_2ff0;
  undefined8 uStack_2fe8;
  undefined8 uStack_2fe0;
  undefined8 uStack_2fd8;
  undefined8 uStack_2fd0;
  undefined8 uStack_2fc8;
  undefined8 uStack_2fc0;
  undefined8 uStack_2fb8;
  undefined8 uStack_2fb0;
  undefined8 uStack_2fa8;
  undefined1 auStack_2f70 [24];
  undefined1 auStack_2f58 [24];
  undefined1 auStack_2f40 [24];
  undefined1 auStack_2f28 [24];
  undefined1 auStack_2f10 [24];
  undefined1 auStack_2ef8 [24];
  undefined1 auStack_2ee0 [24];
  undefined1 auStack_2ec8 [24];
  undefined1 auStack_2eb0 [24];
  undefined1 auStack_2e98 [24];
  undefined1 auStack_2e80 [24];
  undefined1 auStack_2e68 [24];
  undefined1 auStack_2e50 [24];
  undefined1 auStack_2e38 [24];
  undefined1 auStack_2e20 [24];
  undefined1 auStack_2e08 [24];
  undefined8 uStack_2df0;
  undefined8 uStack_2de8;
  undefined8 uStack_2de0;
  undefined8 uStack_2dd8;
  undefined8 uStack_2dd0;
  undefined8 uStack_2dc8;
  undefined8 uStack_2dc0;
  undefined8 uStack_2db8;
  undefined8 uStack_2db0;
  undefined8 uStack_2da8;
  undefined8 uStack_2da0;
  undefined8 uStack_2d98;
  undefined8 uStack_2d90;
  undefined8 uStack_2d88;
  undefined8 uStack_2d80;
  undefined8 uStack_2d78;
  undefined8 uStack_2d70;
  undefined8 uStack_2d68;
  undefined8 uStack_2d60;
  undefined1 auStack_2d00 [24];
  undefined1 auStack_2ce8 [24];
  undefined1 auStack_2cd0 [24];
  undefined1 auStack_2cb8 [24];
  undefined1 auStack_2ca0 [24];
  undefined1 auStack_2c88 [24];
  undefined1 auStack_2c70 [24];
  undefined1 auStack_2c58 [24];
  undefined1 auStack_2c40 [24];
  undefined1 auStack_2c28 [24];
  undefined1 auStack_2c10 [24];
  undefined1 auStack_2bf8 [24];
  undefined1 auStack_2be0 [24];
  undefined1 auStack_2bc8 [24];
  undefined8 uStack_2bb0;
  undefined8 uStack_2ba8;
  undefined8 uStack_2ba0;
  undefined8 uStack_2b98;
  undefined8 uStack_2b90;
  undefined8 uStack_2b88;
  undefined8 uStack_2b80;
  undefined8 uStack_2b78;
  undefined8 uStack_2b70;
  undefined8 uStack_2b68;
  undefined8 uStack_2b60;
  undefined8 uStack_2b58;
  undefined8 uStack_2b50;
  undefined8 uStack_2b48;
  undefined8 uStack_2b40;
  undefined8 uStack_2b38;
  undefined8 uStack_2b30;
  undefined8 uStack_2b28;
  undefined8 uStack_2b20;
  undefined8 uStack_2b18;
  undefined8 uStack_2b10;
  undefined8 uStack_2b08;
  undefined8 uStack_2b00;
  undefined8 uStack_2af8;
  undefined8 uStack_2af0;
  undefined8 uStack_2ae8;
  undefined8 uStack_2ae0;
  undefined8 uStack_2ad8;
  undefined8 uStack_2ad0;
  undefined8 uStack_2ac8;
  undefined1 auStack_2a78 [24];
  undefined1 auStack_2a60 [24];
  undefined1 auStack_2a48 [24];
  undefined1 auStack_2a30 [24];
  undefined1 auStack_2a18 [24];
  undefined1 auStack_2a00 [24];
  undefined1 auStack_29e8 [24];
  undefined1 auStack_29d0 [24];
  undefined1 auStack_29b8 [24];
  undefined1 auStack_29a0 [24];
  undefined1 auStack_2988 [24];
  undefined1 auStack_2970 [24];
  undefined1 auStack_2958 [24];
  undefined1 auStack_2940 [24];
  undefined1 auStack_2928 [24];
  undefined1 auStack_2910 [24];
  undefined1 auStack_28f8 [24];
  undefined1 auStack_28e0 [24];
  undefined1 auStack_28c8 [24];
  undefined1 auStack_28b0 [24];
  undefined1 auStack_2898 [24];
  undefined1 auStack_2880 [24];
  undefined1 auStack_2868 [24];
  undefined1 auStack_2850 [24];
  undefined1 auStack_2838 [24];
  undefined1 auStack_2820 [24];
  undefined1 auStack_2808 [24];
  undefined1 auStack_27f0 [24];
  undefined1 auStack_27d8 [24];
  undefined1 auStack_27c0 [24];
  undefined1 auStack_27a8 [24];
  undefined1 auStack_2790 [24];
  undefined1 auStack_2778 [24];
  undefined1 auStack_2760 [24];
  undefined1 auStack_2748 [328];
  undefined1 auStack_2600 [24];
  undefined1 auStack_25e8 [24];
  undefined1 auStack_25d0 [24];
  undefined1 auStack_25b8 [24];
  undefined1 auStack_25a0 [24];
  undefined1 auStack_2588 [24];
  undefined1 auStack_2570 [24];
  undefined1 auStack_2558 [24];
  undefined1 auStack_2540 [344];
  undefined1 auStack_23e8 [24];
  undefined1 auStack_23d0 [24];
  undefined1 auStack_23b8 [24];
  undefined1 auStack_23a0 [24];
  undefined1 auStack_2388 [24];
  undefined1 auStack_2370 [24];
  undefined1 auStack_2358 [24];
  undefined1 auStack_2340 [24];
  undefined1 auStack_2328 [24];
  undefined1 auStack_2310 [24];
  undefined1 auStack_22f8 [24];
  undefined1 auStack_22e0 [24];
  undefined1 auStack_22c8 [24];
  undefined1 auStack_22b0 [24];
  undefined1 auStack_2298 [24];
  undefined1 auStack_2280 [24];
  undefined1 auStack_2268 [24];
  undefined1 auStack_2250 [24];
  undefined1 auStack_2238 [24];
  undefined1 auStack_2220 [24];
  undefined1 auStack_2208 [24];
  undefined1 auStack_21f0 [24];
  undefined1 auStack_21d8 [24];
  undefined1 auStack_21c0 [24];
  undefined1 auStack_21a8 [24];
  undefined1 auStack_2190 [24];
  undefined1 auStack_2178 [24];
  undefined1 auStack_2160 [24];
  undefined1 auStack_2148 [24];
  undefined1 auStack_2130 [24];
  undefined1 auStack_2118 [24];
  undefined1 auStack_2100 [24];
  undefined1 auStack_20e8 [24];
  undefined1 auStack_20d0 [24];
  undefined1 auStack_20b8 [24];
  undefined1 auStack_20a0 [24];
  undefined1 auStack_2088 [24];
  undefined1 auStack_2070 [24];
  undefined1 auStack_2058 [24];
  undefined1 auStack_2040 [24];
  undefined1 auStack_2028 [24];
  undefined1 auStack_2010 [24];
  undefined1 auStack_1ff8 [24];
  undefined1 auStack_1fe0 [24];
  undefined1 auStack_1fc8 [24];
  undefined1 auStack_1fb0 [24];
  undefined1 auStack_1f98 [24];
  undefined1 auStack_1f80 [24];
  undefined1 auStack_1f68 [24];
  undefined1 auStack_1f50 [24];
  undefined1 auStack_1f38 [24];
  undefined1 auStack_1f20 [24];
  undefined1 auStack_1f08 [24];
  undefined1 auStack_1ef0 [24];
  undefined1 auStack_1ed8 [24];
  undefined1 auStack_1ec0 [24];
  undefined1 auStack_1ea8 [24];
  undefined1 auStack_1e90 [24];
  undefined1 auStack_1e78 [24];
  undefined1 auStack_1e60 [24];
  undefined1 auStack_1e48 [24];
  undefined1 auStack_1e30 [24];
  undefined1 auStack_1e18 [24];
  undefined1 auStack_1e00 [24];
  undefined1 auStack_1de8 [24];
  undefined1 auStack_1dd0 [24];
  undefined1 auStack_1db8 [24];
  undefined1 auStack_1da0 [24];
  undefined1 auStack_1d88 [24];
  undefined1 auStack_1d70 [24];
  undefined1 auStack_1d58 [24];
  undefined1 auStack_1d40 [24];
  undefined1 auStack_1d28 [24];
  undefined1 auStack_1d10 [24];
  undefined8 uStack_1cf8;
  undefined8 uStack_1cf0;
  undefined8 uStack_1ce8;
  undefined8 uStack_1ce0;
  undefined8 uStack_1cd8;
  undefined8 uStack_1cd0;
  undefined8 uStack_1cc8;
  undefined8 uStack_1cc0;
  undefined8 uStack_1cb8;
  undefined8 uStack_1cb0;
  undefined8 uStack_1ca8;
  undefined8 uStack_1ca0;
  undefined8 uStack_1c98;
  undefined8 uStack_1c90;
  undefined8 uStack_1c88;
  undefined8 uStack_1c80;
  undefined8 uStack_1c78;
  undefined8 uStack_1c70;
  undefined8 uStack_1c68;
  undefined8 uStack_1c60;
  undefined1 auStack_1c58 [336];
  undefined1 auStack_1b08 [344];
  undefined8 uStack_19b0;
  undefined8 uStack_19a8;
  undefined8 uStack_19a0;
  undefined8 uStack_1998;
  undefined8 uStack_1990;
  undefined8 uStack_1988;
  undefined8 uStack_1980;
  undefined8 uStack_1978;
  undefined8 uStack_1970;
  undefined8 uStack_1968;
  undefined8 uStack_1960;
  undefined8 uStack_1958;
  undefined8 uStack_1950;
  undefined8 uStack_1948;
  undefined8 uStack_1940;
  undefined8 uStack_1938;
  undefined8 uStack_1930;
  undefined8 uStack_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  undefined8 uStack_1910;
  undefined8 uStack_1908;
  undefined8 uStack_1900;
  undefined8 uStack_18f8;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 uStack_18d8;
  undefined8 uStack_18d0;
  undefined8 uStack_18c8;
  undefined8 uStack_18c0;
  undefined8 uStack_18b8;
  undefined1 auStack_18b0 [328];
  undefined1 auStack_1768 [280];
  undefined1 auStack_1650 [312];
  undefined8 uStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 uStack_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 uStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 uStack_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined1 auStack_1250 [336];
  undefined1 auStack_1100 [336];
  undefined1 auStack_fb0 [344];
  undefined1 auStack_e58 [344];
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined1 auStack_af8 [328];
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
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
  undefined1 auStack_8b8 [280];
  undefined1 auStack_7a0 [280];
  undefined1 auStack_688 [312];
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
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar20 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar20 = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xf000000000000000;
  puVar9 = (undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *puVar9 = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xf000000000000000;
  puVar10 = (undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *puVar10 = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 2;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  puVar11 = (undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *puVar11 = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0xf000000000000000;
  puVar12 = (undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *puVar12 = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0xc000000000000000;
  puVar13 = (undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *puVar13 = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0xf000000000000000;
  FUN_1034cbf6c(&uStack_1cf8);
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_1c90;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_1c98;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_1c80;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_1c88;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_1c70;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_1c78;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_1c60;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_1c68;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_1cd0;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_1cd8;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_1cc0;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_1cc8;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_1cb0;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_1cb8;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_1ca0;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_1ca8;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_1cf0;
  *(undefined8 *)(unaff_x20 + 200) = uStack_1cf8;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_1ce0;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_1ce8;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x198) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x1a0) = 1;
  *(undefined8 *)(unaff_x20 + 0x1a8) = 2;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1d8) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1e8) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x1f8) = 1;
  *(undefined8 *)(unaff_x20 + 0x200) = 2;
  *(undefined8 *)(unaff_x20 + 0x210) = 0;
  *(undefined8 *)(unaff_x20 + 0x208) = 0;
  *(undefined8 *)(unaff_x20 + 0x218) = 2;
  *(undefined8 *)(unaff_x20 + 0x228) = 0;
  *(undefined8 *)(unaff_x20 + 0x220) = 0;
  *(undefined8 *)(unaff_x20 + 0x238) = 0;
  *(undefined8 *)(unaff_x20 + 0x230) = 0;
  *(undefined8 *)(unaff_x20 + 0x240) = 0xf000000000000000;
  FUN_1035dff68(auStack_1c58);
  func_0x000107c610b4(unaff_x20 + 0x248,auStack_1c58,0x150);
  *(undefined8 *)(unaff_x20 + 0x3a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x398) = 0;
  *(undefined8 *)(unaff_x20 + 0x3a8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x3d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x3d8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x3e0) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x400) = 0;
  *(undefined8 *)(unaff_x20 + 0x3f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x408) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x418) = 0;
  *(undefined8 *)(unaff_x20 + 0x410) = 0;
  *(undefined8 *)(unaff_x20 + 0x420) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x430) = 0;
  *(undefined8 *)(unaff_x20 + 0x428) = 0;
  *(undefined8 *)(unaff_x20 + 0x438) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x448) = 0;
  *(undefined8 *)(unaff_x20 + 0x440) = 0;
  *(undefined8 *)(unaff_x20 + 0x450) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x460) = 0;
  *(undefined8 *)(unaff_x20 + 0x458) = 0;
  *(undefined8 *)(unaff_x20 + 0x468) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x478) = 0;
  *(undefined8 *)(unaff_x20 + 0x470) = 0;
  *(undefined8 *)(unaff_x20 + 0x480) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x490) = 0;
  *(undefined8 *)(unaff_x20 + 0x488) = 0;
  *(undefined8 *)(unaff_x20 + 0x498) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x4a8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b0) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x4c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4b8) = 0;
  *(undefined8 *)(unaff_x20 + 0x4d0) = 0;
  *(undefined8 *)(unaff_x20 + 0x4c8) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0x4d8) = 1;
  *(undefined8 *)(unaff_x20 + 0x4e0) = 0;
  *(undefined1 *)(unaff_x20 + 0x4e8) = 1;
  *(undefined8 *)(unaff_x20 + 0x4f0) = 2;
  *(undefined8 *)(unaff_x20 + 0x500) = 0;
  *(undefined8 *)(unaff_x20 + 0x4f8) = 0;
  func_0x0001035dffd8(auStack_1b08);
  func_0x000107c610b4(unaff_x20 + 0x508,auStack_1b08,0x158);
  func_0x0001035e001c(&uStack_19b0);
  *(undefined8 *)(unaff_x20 + 0x728) = uStack_18e8;
  *(undefined8 *)(unaff_x20 + 0x720) = uStack_18f0;
  *(undefined8 *)(unaff_x20 + 0x738) = uStack_18d8;
  *(undefined8 *)(unaff_x20 + 0x730) = uStack_18e0;
  *(undefined8 *)(unaff_x20 + 0x748) = uStack_18c8;
  *(undefined8 *)(unaff_x20 + 0x740) = uStack_18d0;
  *(undefined8 *)(unaff_x20 + 0x758) = uStack_18b8;
  *(undefined8 *)(unaff_x20 + 0x750) = uStack_18c0;
  *(undefined8 *)(unaff_x20 + 0x6e8) = uStack_1928;
  *(undefined8 *)(unaff_x20 + 0x6e0) = uStack_1930;
  *(undefined8 *)(unaff_x20 + 0x6f8) = uStack_1918;
  *(undefined8 *)(unaff_x20 + 0x6f0) = uStack_1920;
  *(undefined8 *)(unaff_x20 + 0x708) = uStack_1908;
  *(undefined8 *)(unaff_x20 + 0x700) = uStack_1910;
  *(undefined8 *)(unaff_x20 + 0x718) = uStack_18f8;
  *(undefined8 *)(unaff_x20 + 0x710) = uStack_1900;
  *(undefined8 *)(unaff_x20 + 0x6a8) = uStack_1968;
  *(undefined8 *)(unaff_x20 + 0x6a0) = uStack_1970;
  *(undefined8 *)(unaff_x20 + 0x6b8) = uStack_1958;
  *(undefined8 *)(unaff_x20 + 0x6b0) = uStack_1960;
  *(undefined8 *)(unaff_x20 + 0x6c8) = uStack_1948;
  *(undefined8 *)(unaff_x20 + 0x6c0) = uStack_1950;
  *(undefined8 *)(unaff_x20 + 0x6d8) = uStack_1938;
  *(undefined8 *)(unaff_x20 + 0x6d0) = uStack_1940;
  *(undefined8 *)(unaff_x20 + 0x668) = uStack_19a8;
  *(undefined8 *)(unaff_x20 + 0x660) = uStack_19b0;
  *(undefined8 *)(unaff_x20 + 0x678) = uStack_1998;
  *(undefined8 *)(unaff_x20 + 0x670) = uStack_19a0;
  *(undefined8 *)(unaff_x20 + 0x688) = uStack_1988;
  *(undefined8 *)(unaff_x20 + 0x680) = uStack_1990;
  *(undefined8 *)(unaff_x20 + 0x698) = uStack_1978;
  *(undefined8 *)(unaff_x20 + 0x690) = uStack_1980;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x760) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x768) = 0;
  *(undefined1 *)(unaff_x20 + 0x770) = 1;
  func_0x0001035e0068(auStack_18b0);
  func_0x000107c610b4(unaff_x20 + 0x778,auStack_18b0,0x148);
  *(undefined8 *)(unaff_x20 + 0x8c8) = 0;
  *(undefined8 *)(unaff_x20 + 0x8c0) = 0;
  *(undefined8 *)(unaff_x20 + 0x8d0) = 0xf000000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + 0x8d8);
  *(undefined8 *)(unaff_x20 + 0x8e0) = 0;
  *puVar1 = 0;
  *(undefined8 *)(unaff_x20 + 0x8f0) = 0;
  *(undefined8 *)(unaff_x20 + 0x8e8) = 0;
  *(undefined8 *)(unaff_x20 + 0x900) = 0;
  *(undefined8 *)(unaff_x20 + 0x8f8) = 0;
  *(undefined8 *)(unaff_x20 + 0x910) = 0;
  *(undefined8 *)(unaff_x20 + 0x908) = 0;
  *(undefined8 *)(unaff_x20 + 0x920) = 0;
  *(undefined8 *)(unaff_x20 + 0x918) = 0;
  *(undefined8 *)(unaff_x20 + 0x930) = 0;
  *(undefined8 *)(unaff_x20 + 0x928) = 0;
  *(undefined8 *)(unaff_x20 + 0x940) = 0;
  *(undefined8 *)(unaff_x20 + 0x938) = 0;
  *(undefined8 *)(unaff_x20 + 0x950) = 0;
  *(undefined8 *)(unaff_x20 + 0x948) = 0;
  *(undefined8 *)(unaff_x20 + 0x958) = 0;
  *(undefined8 *)(unaff_x20 + 0x960) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x970) = 0;
  *(undefined8 *)(unaff_x20 + 0x968) = 0;
  *(undefined8 *)(unaff_x20 + 0x978) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x988) = 0;
  *(undefined8 *)(unaff_x20 + 0x980) = 0;
  *(undefined8 *)(unaff_x20 + 0x990) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x9a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x998) = 0;
  *(undefined8 *)(unaff_x20 + 0x9a8) = 0xf000000000000000;
  *(undefined **)(unaff_x20 + 0x9b0) = puVar8;
  *(undefined **)(unaff_x20 + 0x9b8) = puVar8;
  func_0x0001035e00b8(auStack_1768);
  func_0x000107c610b4(unaff_x20 + 0x9c0,auStack_1768,0x118);
  *(undefined8 *)(unaff_x20 + 0xae0) = 0;
  *(undefined8 *)(unaff_x20 + 0xad8) = 0;
  *(undefined8 *)(unaff_x20 + 0xae8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xaf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xaf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb00) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xb10) = 0;
  *(undefined8 *)(unaff_x20 + 0xb08) = 0;
  *(undefined8 *)(unaff_x20 + 0xb18) = 0xf000000000000000;
  *(undefined2 *)(unaff_x20 + 0xb20) = 0;
  *(undefined8 *)(unaff_x20 + 0xb30) = 0;
  *(undefined8 *)(unaff_x20 + 0xb28) = 0;
  *(undefined8 *)(unaff_x20 + 0xb38) = 0xf000000000000000;
  *(undefined **)(unaff_x20 + 0xb40) = puVar8;
  func_0x0001035e00ec(auStack_1650);
  func_0x000107c610b4(unaff_x20 + 0xb48,auStack_1650,0x138);
  *(undefined1 *)(unaff_x20 + 0xc80) = 0;
  *(undefined8 *)(unaff_x20 + 0xca8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc88) = 0;
  *(undefined8 *)(unaff_x20 + 0xc98) = 0;
  *(undefined8 *)(unaff_x20 + 0xc90) = 0;
  *(undefined1 *)(unaff_x20 + 0xca0) = 0;
  *(undefined1 *)(unaff_x20 + 0xcb0) = 1;
  *(undefined8 *)(unaff_x20 + 0xcc0) = 0;
  *(undefined8 *)(unaff_x20 + 0xcb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xcd0) = 0;
  *(undefined8 *)(unaff_x20 + 0xcc8) = 0xf000000000000000;
  *(undefined1 *)(unaff_x20 + 0xcd8) = 1;
  FUN_1035e0190(&uStack_1518);
  *(undefined8 *)(unaff_x20 + 0xd98) = uStack_1460;
  *(undefined8 *)(unaff_x20 + 0xd90) = uStack_1468;
  *(undefined8 *)(unaff_x20 + 0xda8) = uStack_1450;
  *(undefined8 *)(unaff_x20 + 0xda0) = uStack_1458;
  *(undefined8 *)(unaff_x20 + 0xdb8) = uStack_1440;
  *(undefined8 *)(unaff_x20 + 0xdb0) = uStack_1448;
  *(undefined8 *)(unaff_x20 + 0xdc8) = uStack_1430;
  *(undefined8 *)(unaff_x20 + 0xdc0) = uStack_1438;
  *(undefined8 *)(unaff_x20 + 0xd58) = uStack_14a0;
  *(undefined8 *)(unaff_x20 + 0xd50) = uStack_14a8;
  *(undefined8 *)(unaff_x20 + 0xd68) = uStack_1490;
  *(undefined8 *)(unaff_x20 + 0xd60) = uStack_1498;
  *(undefined8 *)(unaff_x20 + 0xd78) = uStack_1480;
  *(undefined8 *)(unaff_x20 + 0xd70) = uStack_1488;
  *(undefined8 *)(unaff_x20 + 0xd88) = uStack_1470;
  *(undefined8 *)(unaff_x20 + 0xd80) = uStack_1478;
  *(undefined8 *)(unaff_x20 + 0xd18) = uStack_14e0;
  *(undefined8 *)(unaff_x20 + 0xd10) = uStack_14e8;
  *(undefined8 *)(unaff_x20 + 0xd28) = uStack_14d0;
  *(undefined8 *)(unaff_x20 + 0xd20) = uStack_14d8;
  *(undefined8 *)(unaff_x20 + 0xd38) = uStack_14c0;
  *(undefined8 *)(unaff_x20 + 0xd30) = uStack_14c8;
  *(undefined8 *)(unaff_x20 + 0xd48) = uStack_14b0;
  *(undefined8 *)(unaff_x20 + 0xd40) = uStack_14b8;
  *(undefined8 *)(unaff_x20 + 0xce8) = uStack_1510;
  *(undefined8 *)(unaff_x20 + 0xce0) = uStack_1518;
  *(undefined8 *)(unaff_x20 + 0xcf8) = uStack_1500;
  *(undefined8 *)(unaff_x20 + 0xcf0) = uStack_1508;
  *(undefined8 *)(unaff_x20 + 0xd08) = uStack_14f0;
  *(undefined8 *)(unaff_x20 + 0xd00) = uStack_14f8;
  *(undefined **)(unaff_x20 + 0xdd0) = puVar8;
  puVar2 = (undefined8 *)(unaff_x20 + 0xdd8);
  *(undefined8 *)(unaff_x20 + 0xde0) = 0;
  *puVar2 = 0;
  *(undefined8 *)(unaff_x20 + 0xdf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xde8) = 0;
  *(undefined8 *)(unaff_x20 + 0xdf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe00) = 1;
  puVar3 = (undefined8 *)(unaff_x20 + 0xe68);
  *(undefined8 *)(unaff_x20 + 0xe10) = 0;
  *(undefined8 *)(unaff_x20 + 0xe08) = 0;
  *(undefined8 *)(unaff_x20 + 0xe20) = 0;
  *(undefined8 *)(unaff_x20 + 0xe18) = 0;
  *(undefined8 *)(unaff_x20 + 0xe30) = 0;
  *(undefined8 *)(unaff_x20 + 0xe28) = 0;
  *(undefined8 *)(unaff_x20 + 0xe40) = 0;
  *(undefined8 *)(unaff_x20 + 0xe38) = 0;
  *(undefined8 *)(unaff_x20 + 0xe50) = 0;
  *(undefined8 *)(unaff_x20 + 0xe48) = 0;
  *(undefined8 *)(unaff_x20 + 0xe60) = 0;
  *(undefined8 *)(unaff_x20 + 0xe58) = 0;
  *(undefined8 *)(unaff_x20 + 0xe68) = 0;
  *(undefined8 *)(unaff_x20 + 0xe70) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xe80) = 0;
  *(undefined8 *)(unaff_x20 + 0xe78) = 0;
  *(undefined8 *)(unaff_x20 + 0xe90) = 0;
  *(undefined8 *)(unaff_x20 + 0xe88) = 0;
  *(undefined8 *)(unaff_x20 + 0xea0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe98) = 0;
  *(undefined8 *)(unaff_x20 + 0xea8) = 0;
  *(undefined1 *)(unaff_x20 + 0xeb0) = 1;
  puVar4 = (undefined8 *)(unaff_x20 + 0xeb8);
  puVar5 = (undefined8 *)(unaff_x20 + 0xef8);
  *(undefined8 *)(unaff_x20 + 0xee0) = 0;
  *(undefined8 *)(unaff_x20 + 0xed8) = 0;
  *(undefined8 *)(unaff_x20 + 0xef0) = 0;
  *(undefined8 *)(unaff_x20 + 0xee8) = 0;
  *(undefined8 *)(unaff_x20 + 0xec0) = 0;
  *puVar4 = 0;
  *(undefined8 *)(unaff_x20 + 0xed0) = 0;
  *(undefined8 *)(unaff_x20 + 0xec8) = 0;
  *(undefined8 *)(unaff_x20 + 0xef8) = 1;
  puVar6 = (undefined8 *)(unaff_x20 + 0xf48);
  *(undefined8 *)(unaff_x20 + 0xf08) = 0;
  *(undefined8 *)(unaff_x20 + 0xf00) = 0;
  *(undefined8 *)(unaff_x20 + 0xf18) = 0;
  *(undefined8 *)(unaff_x20 + 0xf10) = 0;
  *(undefined8 *)(unaff_x20 + 0xf28) = 0;
  *(undefined8 *)(unaff_x20 + 0xf20) = 0;
  *(undefined8 *)(unaff_x20 + 0xf38) = 0;
  *(undefined8 *)(unaff_x20 + 0xf30) = 0;
  *(undefined8 *)(unaff_x20 + 0xf40) = 0;
  func_0x0001035e02ac(&uStack_1428);
  *(undefined8 *)(unaff_x20 + 0xfb0) = uStack_13c0;
  *(undefined8 *)(unaff_x20 + 0xfa8) = uStack_13c8;
  *(undefined8 *)(unaff_x20 + 0xfc0) = uStack_13b0;
  *(undefined8 *)(unaff_x20 + 0xfb8) = uStack_13b8;
  *(undefined8 *)(unaff_x20 + 0xfd0) = uStack_13a0;
  *(undefined8 *)(unaff_x20 + 0xfc8) = uStack_13a8;
  *(undefined8 *)(unaff_x20 + 0xfd8) = uStack_1398;
  *(undefined8 *)(unaff_x20 + 0xf70) = uStack_1400;
  *(undefined8 *)(unaff_x20 + 0xf68) = uStack_1408;
  *(undefined8 *)(unaff_x20 + 0xf80) = uStack_13f0;
  *(undefined8 *)(unaff_x20 + 0xf78) = uStack_13f8;
  *(undefined8 *)(unaff_x20 + 0xf90) = uStack_13e0;
  *(undefined8 *)(unaff_x20 + 0xf88) = uStack_13e8;
  *(undefined8 *)(unaff_x20 + 4000) = uStack_13d0;
  *(undefined8 *)(unaff_x20 + 0xf98) = uStack_13d8;
  *(undefined8 *)(unaff_x20 + 0xf50) = uStack_1420;
  *puVar6 = uStack_1428;
  *(undefined8 *)(unaff_x20 + 0xf60) = uStack_1410;
  *(undefined8 *)(unaff_x20 + 0xf58) = uStack_1418;
  *(undefined8 *)(unaff_x20 + 0xfe0) = 0;
  *(undefined2 *)(unaff_x20 + 0xfe8) = 1;
  *(undefined8 *)(unaff_x20 + 0xff8) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xff0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1008) = 0;
  *(undefined8 *)(unaff_x20 + 0x1000) = 0;
  *(undefined8 *)(unaff_x20 + 0x1018) = 0;
  *(undefined8 *)(unaff_x20 + 0x1010) = 0;
  *(undefined8 *)(unaff_x20 + 0x1028) = 0;
  *(undefined8 *)(unaff_x20 + 0x1020) = 0;
  *(undefined8 *)(unaff_x20 + 0x1030) = 0;
  *(undefined8 *)(unaff_x20 + 0x1038) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x1048) = 0;
  *(undefined8 *)(unaff_x20 + 0x1040) = 0;
  *(undefined8 *)(unaff_x20 + 0x1058) = 0;
  *(undefined8 *)(unaff_x20 + 0x1050) = 0;
  *(undefined8 *)(unaff_x20 + 0x1068) = 0;
  *(undefined8 *)(unaff_x20 + 0x1060) = 0;
  *(undefined8 *)(unaff_x20 + 0x1078) = 0;
  *(undefined8 *)(unaff_x20 + 0x1070) = 0;
  *(undefined8 *)(unaff_x20 + 0x1088) = 0;
  *(undefined8 *)(unaff_x20 + 0x1080) = 0;
  *(undefined8 *)(unaff_x20 + 0x1098) = 0;
  *(undefined8 *)(unaff_x20 + 0x1090) = 0;
  func_0x000107c61428(param_1 + 0x10,auStack_1d10,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  uVar18 = *(undefined8 *)(param_1 + 0x18);
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61428(puVar20,auStack_1d28,1,0);
  uVar17 = *puVar20;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x20);
  *puVar20 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar15;
  func_0x000100d56270(uVar14,uVar18,uVar15);
  func_0x000100d5628c(uVar17,uVar16,uVar21);
  func_0x000107c61428(param_1 + 0x28,auStack_1d40,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(puVar9,auStack_1d58,1,0);
  uVar17 = *puVar9;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar9 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar15;
  func_0x000100d56270(uVar14,uVar18,uVar15);
  func_0x000100d5628c(uVar17,uVar16,uVar21);
  func_0x000107c61428(param_1 + 0x40,auStack_1d70,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  uVar18 = *(undefined8 *)(param_1 + 0x48);
  uVar15 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61428(puVar10,auStack_1d88,1,0);
  uVar17 = *puVar10;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x50);
  *puVar10 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar15;
  func_0x000100d56270(uVar14,uVar18,uVar15);
  func_0x000100d5628c(uVar17,uVar16,uVar21);
  func_0x000107c61428(param_1 + 0x58,auStack_1da0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x58);
  uVar18 = *(undefined8 *)(param_1 + 0x60);
  uVar15 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(unaff_x20 + 0x58,auStack_1db8,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar15;
  func_0x000101541464(uVar14,uVar18,uVar15);
  func_0x000101556278(uVar16,uVar21,uVar17);
  func_0x000107c61428(param_1 + 0x70,auStack_1dd0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x70);
  uVar18 = *(undefined8 *)(param_1 + 0x78);
  uVar15 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61428(puVar11,auStack_1de8,1,0);
  uVar17 = *puVar11;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x80);
  *puVar11 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar15;
  func_0x000100d56270(uVar14,uVar18,uVar15);
  func_0x000100d5628c(uVar17,uVar16,uVar21);
  func_0x000107c61428(param_1 + 0x88,auStack_1e00,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x88);
  uVar18 = *(undefined8 *)(param_1 + 0x90);
  uVar15 = *(undefined8 *)(param_1 + 0x98);
  func_0x000107c61428(puVar12,auStack_1e18,1,0);
  uVar17 = *puVar12;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x98);
  *puVar12 = uVar14;
  *(undefined8 *)(unaff_x20 + 0x90) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar15;
  func_0x000100d56270(uVar14,uVar18,uVar15);
  func_0x000100d5628c(uVar17,uVar16,uVar21);
  func_0x000107c61428(param_1 + 0xa0,auStack_1e30,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xa0);
  uVar18 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c61428(unaff_x20 + 0xa0,auStack_1e48,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar18;
  func_0x00010006c00c(uVar14,uVar18);
  func_0x00010006c090(uVar16,uVar21);
  func_0x000107c61428(param_1 + 0xb0,auStack_1e60,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xb0);
  uVar18 = *(undefined8 *)(param_1 + 0xb8);
  uVar15 = *(undefined8 *)(param_1 + 0xc0);
  func_0x000107c61428(puVar13,auStack_1e78,1,0);
  uVar17 = *puVar13;
  uVar16 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xc0);
  *puVar13 = uVar14;
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar18;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar15;
  func_0x000100d56270(uVar14,uVar18,uVar15);
  func_0x000100d5628c(uVar17,uVar16,uVar21);
  func_0x000107c61428(param_1 + 200,auStack_1e90,0,0);
  uStack_1328 = *(undefined8 *)(param_1 + 0x130);
  uStack_1330 = *(undefined8 *)(param_1 + 0x128);
  uStack_1318 = *(undefined8 *)(param_1 + 0x140);
  uStack_1320 = *(undefined8 *)(param_1 + 0x138);
  uStack_1308 = *(undefined8 *)(param_1 + 0x150);
  uStack_1310 = *(undefined8 *)(param_1 + 0x148);
  uStack_12f8 = *(undefined8 *)(param_1 + 0x160);
  uStack_1300 = *(undefined8 *)(param_1 + 0x158);
  uStack_1368 = *(undefined8 *)(param_1 + 0xf0);
  uStack_1370 = *(undefined8 *)(param_1 + 0xe8);
  uStack_1358 = *(undefined8 *)(param_1 + 0x100);
  uStack_1360 = *(undefined8 *)(param_1 + 0xf8);
  uStack_1348 = *(undefined8 *)(param_1 + 0x110);
  uStack_1350 = *(undefined8 *)(param_1 + 0x108);
  uStack_1338 = *(undefined8 *)(param_1 + 0x120);
  uStack_1340 = *(undefined8 *)(param_1 + 0x118);
  uStack_1388 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1390 = *(undefined8 *)(param_1 + 200);
  uStack_1378 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1380 = *(undefined8 *)(param_1 + 0xd8);
  func_0x000107c61428(unaff_x20 + 200,auStack_1ea8,1,0);
  uStack_1288 = *(undefined8 *)(unaff_x20 + 0x130);
  uStack_1290 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_1278 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_1280 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_1268 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_1270 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_1258 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_1260 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_12c8 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_12d0 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_12b8 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_12c0 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_12a8 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_12b0 = *(undefined8 *)(unaff_x20 + 0x108);
  uStack_1298 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_12a0 = *(undefined8 *)(unaff_x20 + 0x118);
  uStack_12e8 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_12f0 = *(undefined8 *)(unaff_x20 + 200);
  uStack_12d8 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_12e0 = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_1328;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_1330;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_1318;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_1320;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_1308;
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_1310;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_12f8;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_1300;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_1368;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_1370;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_1358;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_1360;
  *(undefined8 *)(unaff_x20 + 0x110) = uStack_1348;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_1350;
  *(undefined8 *)(unaff_x20 + 0x120) = uStack_1338;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_1340;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_1388;
  *(undefined8 *)(unaff_x20 + 200) = uStack_1390;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_1378;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_1380;
  FUN_1035e02d8(&uStack_1390,auStack_e58,0x112f7bf98,&UNK_10dbe3310);
  func_0x0001035e0354(&uStack_12f0,0x112f7bf98,&UNK_10dbe3310);
  func_0x000107c61428(param_1 + 0x168,auStack_1ec0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x168);
  uVar18 = *(undefined8 *)(param_1 + 0x170);
  uVar15 = *(undefined8 *)(param_1 + 0x178);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x168),auStack_1ed8,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x170);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x178);
  *(undefined8 *)(unaff_x20 + 0x168) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x170) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x178) = uVar15;
  func_0x000100d56270(uVar14,uVar18,uVar15);
  func_0x000100d5628c(uVar16,uVar21,uVar17);
  func_0x000107c61428(param_1 + 0x180,auStack_1ef0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x180);
  uVar18 = *(undefined8 *)(param_1 + 0x188);
  uVar15 = *(undefined8 *)(param_1 + 400);
  func_0x000107c61428(unaff_x20 + 0x180,auStack_1f08,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar17 = *(undefined8 *)(unaff_x20 + 400);
  *(undefined8 *)(unaff_x20 + 0x180) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x188) = uVar18;
  *(undefined8 *)(unaff_x20 + 400) = uVar15;
  func_0x000100d56270(uVar14,uVar18,uVar15);
  func_0x000100d5628c(uVar16,uVar21,uVar17);
  func_0x000107c61428(param_1 + 0x198,auStack_1f20,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x198);
  uVar7 = *(undefined1 *)(param_1 + 0x1a0);
  func_0x000107c61428(unaff_x20 + 0x198,auStack_1f38,1,0);
  *(undefined8 *)(unaff_x20 + 0x198) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x1a0) = uVar7;
  func_0x000107c61428(param_1 + 0x1a8,auStack_1f50,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x1a8);
  uVar18 = *(undefined8 *)(param_1 + 0x1b0);
  uVar15 = *(undefined8 *)(param_1 + 0x1b8);
  func_0x000107c61428(unaff_x20 + 0x1a8,auStack_1f68,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x1a8);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x1b0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1b8);
  *(undefined8 *)(unaff_x20 + 0x1a8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x1b0) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uVar15;
  func_0x000101541464(uVar14,uVar18,uVar15);
  func_0x000101556278(uVar16,uVar21,uVar17);
  func_0x000107c61428(param_1 + 0x1c0,auStack_1f80,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x1c0);
  uVar18 = *(undefined8 *)(param_1 + 0x1c8);
  uVar15 = *(undefined8 *)(param_1 + 0x1d0);
  func_0x000107c61428(unaff_x20 + 0x1c0,auStack_1f98,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x1c0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x1c8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1d0);
  *(undefined8 *)(unaff_x20 + 0x1c0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x1c8) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x1d0) = uVar15;
  func_0x000100d56270(uVar14,uVar18,uVar15);
  func_0x000100d5628c(uVar16,uVar21,uVar17);
  func_0x000107c61428(param_1 + 0x1d8,auStack_1fb0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x1d8);
  uVar18 = *(undefined8 *)(param_1 + 0x1e0);
  uVar15 = *(undefined8 *)(param_1 + 0x1e8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x1d8),auStack_1fc8,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x1d8);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x1e0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x1e8);
  *(undefined8 *)(unaff_x20 + 0x1d8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x1e0) = uVar18;
  *(undefined8 *)(unaff_x20 + 0x1e8) = uVar15;
  func_0x000100d56270(uVar14,uVar18,uVar15);
  func_0x000100d5628c(uVar16,uVar21,uVar17);
  func_0x000107c61428(param_1 + 0x1f0,auStack_1fe0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x1f0);
  uVar7 = *(undefined1 *)(param_1 + 0x1f8);
  func_0x000107c61428(unaff_x20 + 0x1f0,auStack_1ff8,1,0);
  *(undefined8 *)(unaff_x20 + 0x1f0) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x1f8) = uVar7;
  func_0x000107c61428(param_1 + 0x200,auStack_2010,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x200);
  uVar16 = *(undefined8 *)(param_1 + 0x208);
  uVar18 = *(undefined8 *)(param_1 + 0x210);
  func_0x000107c61428(unaff_x20 + 0x200,auStack_2028,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x200);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x208);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x210);
  *(undefined8 *)(unaff_x20 + 0x200) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x208) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x210) = uVar18;
  func_0x000101541464(uVar14,uVar16,uVar18);
  func_0x000101556278(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x218,auStack_2040,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x218);
  uVar16 = *(undefined8 *)(param_1 + 0x220);
  uVar18 = *(undefined8 *)(param_1 + 0x228);
  func_0x000107c61428(unaff_x20 + 0x218,auStack_2058,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x218);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x220);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x228);
  *(undefined8 *)(unaff_x20 + 0x218) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x220) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x228) = uVar18;
  func_0x000101541464(uVar14,uVar16,uVar18);
  func_0x000101556278(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x230,auStack_2070,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x230);
  uVar16 = *(undefined8 *)(param_1 + 0x238);
  uVar18 = *(undefined8 *)(param_1 + 0x240);
  func_0x000107c61428(unaff_x20 + 0x230,auStack_2088,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x230);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x238);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x240);
  *(undefined8 *)(unaff_x20 + 0x230) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x238) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x240) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x248,auStack_20a0,0,0);
  func_0x000107c610b4(auStack_1250,param_1 + 0x248,0x150);
  func_0x000107c61428(unaff_x20 + 0x248,auStack_20b8,1,0);
  func_0x000107c610b4(auStack_1100,unaff_x20 + 0x248,0x150);
  func_0x000107c610b4(unaff_x20 + 0x248,auStack_1250,0x150);
  FUN_1035e02d8(auStack_1250,auStack_e58,0x112f7bfa8,&UNK_10dbe3320);
  func_0x0001035e0354(auStack_1100,0x112f7bfa8,&UNK_10dbe3320);
  func_0x000107c61428(param_1 + 0x398,auStack_20d0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x398);
  uVar16 = *(undefined8 *)(param_1 + 0x3a0);
  uVar18 = *(undefined8 *)(param_1 + 0x3a8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x398),auStack_20e8,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x398);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x3a0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x3a8);
  *(undefined8 *)(unaff_x20 + 0x398) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x3a0) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x3a8) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x3b0,auStack_2100,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x3b0);
  uVar16 = *(undefined8 *)(param_1 + 0x3b8);
  uVar18 = *(undefined8 *)(param_1 + 0x3c0);
  func_0x000107c61428(unaff_x20 + 0x3b0,auStack_2118,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x3b0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x3b8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x3c0);
  *(undefined8 *)(unaff_x20 + 0x3b0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x3b8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x3c0) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x3c8,auStack_2130,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x3c8);
  uVar16 = *(undefined8 *)(param_1 + 0x3d0);
  uVar18 = *(undefined8 *)(param_1 + 0x3d8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x3c8),auStack_2148,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x3c8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x3d0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x3d8);
  *(undefined8 *)(unaff_x20 + 0x3c8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x3d0) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x3d8) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x3e0,auStack_2160,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x3e0);
  uVar16 = *(undefined8 *)(param_1 + 1000);
  uVar18 = *(undefined8 *)(param_1 + 0x3f0);
  func_0x000107c61428(unaff_x20 + 0x3e0,auStack_2178,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x3e0);
  uVar15 = *(undefined8 *)(unaff_x20 + 1000);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x3f0);
  *(undefined8 *)(unaff_x20 + 0x3e0) = uVar14;
  *(undefined8 *)(unaff_x20 + 1000) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x3f0) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x3f8,auStack_2190,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x3f8);
  uVar16 = *(undefined8 *)(param_1 + 0x400);
  uVar18 = *(undefined8 *)(param_1 + 0x408);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x3f8),auStack_21a8,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x3f8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x400);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x408);
  *(undefined8 *)(unaff_x20 + 0x3f8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x400) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x408) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x410,auStack_21c0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x410);
  uVar16 = *(undefined8 *)(param_1 + 0x418);
  uVar18 = *(undefined8 *)(param_1 + 0x420);
  func_0x000107c61428(unaff_x20 + 0x410,auStack_21d8,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x410);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x418);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x420);
  *(undefined8 *)(unaff_x20 + 0x410) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x418) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x420) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x428,auStack_21f0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x428);
  uVar16 = *(undefined8 *)(param_1 + 0x430);
  uVar18 = *(undefined8 *)(param_1 + 0x438);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x428),auStack_2208,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x428);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x430);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x438);
  *(undefined8 *)(unaff_x20 + 0x428) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x430) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x438) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x440,auStack_2220,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x440);
  uVar16 = *(undefined8 *)(param_1 + 0x448);
  uVar18 = *(undefined8 *)(param_1 + 0x450);
  func_0x000107c61428(unaff_x20 + 0x440,auStack_2238,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x440);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x448);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x450);
  *(undefined8 *)(unaff_x20 + 0x440) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x448) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x450) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x458,auStack_2250,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x458);
  uVar16 = *(undefined8 *)(param_1 + 0x460);
  uVar18 = *(undefined8 *)(param_1 + 0x468);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x458),auStack_2268,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x458);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x460);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x468);
  *(undefined8 *)(unaff_x20 + 0x458) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x460) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x468) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x470,auStack_2280,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x470);
  uVar16 = *(undefined8 *)(param_1 + 0x478);
  uVar18 = *(undefined8 *)(param_1 + 0x480);
  func_0x000107c61428(unaff_x20 + 0x470,auStack_2298,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x470);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x478);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x480);
  *(undefined8 *)(unaff_x20 + 0x470) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x478) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x480) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x488,auStack_22b0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x488);
  uVar16 = *(undefined8 *)(param_1 + 0x490);
  uVar18 = *(undefined8 *)(param_1 + 0x498);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x488),auStack_22c8,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x488);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x490);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x498);
  *(undefined8 *)(unaff_x20 + 0x488) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x490) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x498) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x4a0,auStack_22e0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x4a0);
  uVar16 = *(undefined8 *)(param_1 + 0x4a8);
  uVar18 = *(undefined8 *)(param_1 + 0x4b0);
  func_0x000107c61428(unaff_x20 + 0x4a0,auStack_22f8,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x4a0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x4a8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x4b0);
  *(undefined8 *)(unaff_x20 + 0x4a0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x4a8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x4b0) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x4b8,auStack_2310,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x4b8);
  uVar16 = *(undefined8 *)(param_1 + 0x4c0);
  uVar18 = *(undefined8 *)(param_1 + 0x4c8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x4b8),auStack_2328,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x4b8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x4c0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x4c8);
  *(undefined8 *)(unaff_x20 + 0x4b8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x4c0) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x4c8) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x4d0,auStack_2340,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x4d0);
  uVar7 = *(undefined1 *)(param_1 + 0x4d8);
  func_0x000107c61428(unaff_x20 + 0x4d0,auStack_2358,1,0);
  *(undefined8 *)(unaff_x20 + 0x4d0) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x4d8) = uVar7;
  func_0x000107c61428(param_1 + 0x4e0,auStack_2370,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x4e0);
  uVar7 = *(undefined1 *)(param_1 + 0x4e8);
  func_0x000107c61428(unaff_x20 + 0x4e0,auStack_2388,1,0);
  *(undefined8 *)(unaff_x20 + 0x4e0) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x4e8) = uVar7;
  func_0x000107c61428(param_1 + 0x4f0,auStack_23a0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x4f0);
  uVar16 = *(undefined8 *)(param_1 + 0x4f8);
  uVar18 = *(undefined8 *)(param_1 + 0x500);
  func_0x000107c61428(unaff_x20 + 0x4f0,auStack_23b8,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x4f0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x4f8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x500);
  *(undefined8 *)(unaff_x20 + 0x4f0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x4f8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x500) = uVar18;
  func_0x000101541464(uVar14,uVar16,uVar18);
  func_0x000101556278(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x508,auStack_23d0,0,0);
  func_0x000107c610b4(auStack_fb0,param_1 + 0x508,0x158);
  func_0x000107c61428(unaff_x20 + 0x508,auStack_23e8,1,0);
  func_0x000107c610b4(auStack_e58,unaff_x20 + 0x508,0x158);
  func_0x000107c610b4(unaff_x20 + 0x508,auStack_fb0,0x158);
  FUN_1035e02d8(auStack_fb0,auStack_2540,0x112f7bfb8,&UNK_10dbe3330);
  func_0x0001035e0354(auStack_e58,0x112f7bfb8,&UNK_10dbe3330);
  func_0x000107c61428(param_1 + 0x660,auStack_2558,0,0);
  uStack_c38 = *(undefined8 *)(param_1 + 0x728);
  uStack_c40 = *(undefined8 *)(param_1 + 0x720);
  uStack_c28 = *(undefined8 *)(param_1 + 0x738);
  uStack_c30 = *(undefined8 *)(param_1 + 0x730);
  uStack_c18 = *(undefined8 *)(param_1 + 0x748);
  uStack_c20 = *(undefined8 *)(param_1 + 0x740);
  uStack_c08 = *(undefined8 *)(param_1 + 0x758);
  uStack_c10 = *(undefined8 *)(param_1 + 0x750);
  uStack_c78 = *(undefined8 *)(param_1 + 0x6e8);
  uStack_c80 = *(undefined8 *)(param_1 + 0x6e0);
  uStack_c68 = *(undefined8 *)(param_1 + 0x6f8);
  uStack_c70 = *(undefined8 *)(param_1 + 0x6f0);
  uStack_c58 = *(undefined8 *)(param_1 + 0x708);
  uStack_c60 = *(undefined8 *)(param_1 + 0x700);
  uStack_c48 = *(undefined8 *)(param_1 + 0x718);
  uStack_c50 = *(undefined8 *)(param_1 + 0x710);
  uStack_cb8 = *(undefined8 *)(param_1 + 0x6a8);
  uStack_cc0 = *(undefined8 *)(param_1 + 0x6a0);
  uStack_ca8 = *(undefined8 *)(param_1 + 0x6b8);
  uStack_cb0 = *(undefined8 *)(param_1 + 0x6b0);
  uStack_c98 = *(undefined8 *)(param_1 + 0x6c8);
  uStack_ca0 = *(undefined8 *)(param_1 + 0x6c0);
  uStack_c88 = *(undefined8 *)(param_1 + 0x6d8);
  uStack_c90 = *(undefined8 *)(param_1 + 0x6d0);
  uStack_cf8 = *(undefined8 *)(param_1 + 0x668);
  uStack_d00 = *(undefined8 *)(param_1 + 0x660);
  uStack_ce8 = *(undefined8 *)(param_1 + 0x678);
  uStack_cf0 = *(undefined8 *)(param_1 + 0x670);
  uStack_cd8 = *(undefined8 *)(param_1 + 0x688);
  uStack_ce0 = *(undefined8 *)(param_1 + 0x680);
  uStack_cc8 = *(undefined8 *)(param_1 + 0x698);
  uStack_cd0 = *(undefined8 *)(param_1 + 0x690);
  func_0x000107c61428(unaff_x20 + 0x660,auStack_2570,1,0);
  uStack_b38 = *(undefined8 *)(unaff_x20 + 0x728);
  uStack_b40 = *(undefined8 *)(unaff_x20 + 0x720);
  uStack_b28 = *(undefined8 *)(unaff_x20 + 0x738);
  uStack_b30 = *(undefined8 *)(unaff_x20 + 0x730);
  uStack_b18 = *(undefined8 *)(unaff_x20 + 0x748);
  uStack_b20 = *(undefined8 *)(unaff_x20 + 0x740);
  uStack_b08 = *(undefined8 *)(unaff_x20 + 0x758);
  uStack_b10 = *(undefined8 *)(unaff_x20 + 0x750);
  uStack_b78 = *(undefined8 *)(unaff_x20 + 0x6e8);
  uStack_b80 = *(undefined8 *)(unaff_x20 + 0x6e0);
  uStack_b68 = *(undefined8 *)(unaff_x20 + 0x6f8);
  uStack_b70 = *(undefined8 *)(unaff_x20 + 0x6f0);
  uStack_b58 = *(undefined8 *)(unaff_x20 + 0x708);
  uStack_b60 = *(undefined8 *)(unaff_x20 + 0x700);
  uStack_b48 = *(undefined8 *)(unaff_x20 + 0x718);
  uStack_b50 = *(undefined8 *)(unaff_x20 + 0x710);
  uStack_bb8 = *(undefined8 *)(unaff_x20 + 0x6a8);
  uStack_bc0 = *(undefined8 *)(unaff_x20 + 0x6a0);
  uStack_ba8 = *(undefined8 *)(unaff_x20 + 0x6b8);
  uStack_bb0 = *(undefined8 *)(unaff_x20 + 0x6b0);
  uStack_b98 = *(undefined8 *)(unaff_x20 + 0x6c8);
  uStack_ba0 = *(undefined8 *)(unaff_x20 + 0x6c0);
  uStack_b88 = *(undefined8 *)(unaff_x20 + 0x6d8);
  uStack_b90 = *(undefined8 *)(unaff_x20 + 0x6d0);
  uStack_bf8 = *(undefined8 *)(unaff_x20 + 0x668);
  uStack_c00 = *(undefined8 *)(unaff_x20 + 0x660);
  uStack_be8 = *(undefined8 *)(unaff_x20 + 0x678);
  uStack_bf0 = *(undefined8 *)(unaff_x20 + 0x670);
  uStack_bd8 = *(undefined8 *)(unaff_x20 + 0x688);
  uStack_be0 = *(undefined8 *)(unaff_x20 + 0x680);
  uStack_bc8 = *(undefined8 *)(unaff_x20 + 0x698);
  uStack_bd0 = *(undefined8 *)(unaff_x20 + 0x690);
  *(undefined8 *)(unaff_x20 + 0x728) = uStack_c38;
  *(undefined8 *)(unaff_x20 + 0x720) = uStack_c40;
  *(undefined8 *)(unaff_x20 + 0x738) = uStack_c28;
  *(undefined8 *)(unaff_x20 + 0x730) = uStack_c30;
  *(undefined8 *)(unaff_x20 + 0x748) = uStack_c18;
  *(undefined8 *)(unaff_x20 + 0x740) = uStack_c20;
  *(undefined8 *)(unaff_x20 + 0x758) = uStack_c08;
  *(undefined8 *)(unaff_x20 + 0x750) = uStack_c10;
  *(undefined8 *)(unaff_x20 + 0x6e8) = uStack_c78;
  *(undefined8 *)(unaff_x20 + 0x6e0) = uStack_c80;
  *(undefined8 *)(unaff_x20 + 0x6f8) = uStack_c68;
  *(undefined8 *)(unaff_x20 + 0x6f0) = uStack_c70;
  *(undefined8 *)(unaff_x20 + 0x708) = uStack_c58;
  *(undefined8 *)(unaff_x20 + 0x700) = uStack_c60;
  *(undefined8 *)(unaff_x20 + 0x718) = uStack_c48;
  *(undefined8 *)(unaff_x20 + 0x710) = uStack_c50;
  *(undefined8 *)(unaff_x20 + 0x6a8) = uStack_cb8;
  *(undefined8 *)(unaff_x20 + 0x6a0) = uStack_cc0;
  *(undefined8 *)(unaff_x20 + 0x6b8) = uStack_ca8;
  *(undefined8 *)(unaff_x20 + 0x6b0) = uStack_cb0;
  *(undefined8 *)(unaff_x20 + 0x6c8) = uStack_c98;
  *(undefined8 *)(unaff_x20 + 0x6c0) = uStack_ca0;
  *(undefined8 *)(unaff_x20 + 0x6d8) = uStack_c88;
  *(undefined8 *)(unaff_x20 + 0x6d0) = uStack_c90;
  *(undefined8 *)(unaff_x20 + 0x668) = uStack_cf8;
  *(undefined8 *)(unaff_x20 + 0x660) = uStack_d00;
  *(undefined8 *)(unaff_x20 + 0x678) = uStack_ce8;
  *(undefined8 *)(unaff_x20 + 0x670) = uStack_cf0;
  *(undefined8 *)(unaff_x20 + 0x688) = uStack_cd8;
  *(undefined8 *)(unaff_x20 + 0x680) = uStack_ce0;
  *(undefined8 *)(unaff_x20 + 0x698) = uStack_cc8;
  *(undefined8 *)(unaff_x20 + 0x690) = uStack_cd0;
  FUN_1035e02d8(&uStack_d00,auStack_2540,0x112f7bfc8,&UNK_10dbe3340);
  func_0x0001035e0354(&uStack_c00,0x112f7bfc8,&UNK_10dbe3340);
  func_0x000107c61428(param_1 + 0x760,auStack_2588,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x760);
  func_0x000107c61428(unaff_x20 + 0x760,auStack_25a0,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x760);
  *(undefined8 *)(unaff_x20 + 0x760) = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0x768,auStack_25b8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x768);
  uVar7 = *(undefined1 *)(param_1 + 0x770);
  func_0x000107c61428(unaff_x20 + 0x768,auStack_25d0,1,0);
  *(undefined8 *)(unaff_x20 + 0x768) = uVar14;
  *(undefined1 *)(unaff_x20 + 0x770) = uVar7;
  func_0x000107c61428(param_1 + 0x778,auStack_25e8,0,0);
  func_0x000107c610b4(auStack_af8,param_1 + 0x778,0x148);
  func_0x000107c61428(unaff_x20 + 0x778,auStack_2600,1,0);
  func_0x000107c610b4(auStack_2540,unaff_x20 + 0x778,0x148);
  func_0x000107c610b4(unaff_x20 + 0x778,auStack_af8,0x148);
  FUN_1035e02d8(auStack_af8,auStack_2748,0x112f7bfd8,&UNK_10dbe3350);
  func_0x0001035e0354(auStack_2540,0x112f7bfd8,&UNK_10dbe3350);
  func_0x000107c61428(param_1 + 0x8c0,auStack_2760,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x8c0);
  uVar16 = *(undefined8 *)(param_1 + 0x8c8);
  uVar18 = *(undefined8 *)(param_1 + 0x8d0);
  func_0x000107c61428(unaff_x20 + 0x8c0,auStack_2778,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x8c0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x8c8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x8d0);
  *(undefined8 *)(unaff_x20 + 0x8c0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x8c8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x8d0) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428((undefined8 *)(param_1 + 0x8d8),auStack_2790,0,0);
  uStack_968 = *(undefined8 *)(param_1 + 0x920);
  uStack_970 = *(undefined8 *)(param_1 + 0x918);
  uStack_958 = *(undefined8 *)(param_1 + 0x930);
  uStack_960 = *(undefined8 *)(param_1 + 0x928);
  uStack_948 = *(undefined8 *)(param_1 + 0x940);
  uStack_950 = *(undefined8 *)(param_1 + 0x938);
  uStack_940 = *(undefined8 *)(param_1 + 0x948);
  uStack_9a8 = *(undefined8 *)(param_1 + 0x8e0);
  uStack_9b0 = *(undefined8 *)(param_1 + 0x8d8);
  uStack_998 = *(undefined8 *)(param_1 + 0x8f0);
  uStack_9a0 = *(undefined8 *)(param_1 + 0x8e8);
  uStack_988 = *(undefined8 *)(param_1 + 0x900);
  uStack_990 = *(undefined8 *)(param_1 + 0x8f8);
  uStack_978 = *(undefined8 *)(param_1 + 0x910);
  uStack_980 = *(undefined8 *)(param_1 + 0x908);
  func_0x000107c61428(puVar1,auStack_27a8,1,0);
  uStack_8e8 = *(undefined8 *)(unaff_x20 + 0x920);
  uStack_8f0 = *(undefined8 *)(unaff_x20 + 0x918);
  uStack_8d8 = *(undefined8 *)(unaff_x20 + 0x930);
  uStack_8e0 = *(undefined8 *)(unaff_x20 + 0x928);
  uStack_8c8 = *(undefined8 *)(unaff_x20 + 0x940);
  uStack_8d0 = *(undefined8 *)(unaff_x20 + 0x938);
  uStack_8c0 = *(undefined8 *)(unaff_x20 + 0x948);
  uStack_928 = *(undefined8 *)(unaff_x20 + 0x8e0);
  uStack_930 = *puVar1;
  uStack_918 = *(undefined8 *)(unaff_x20 + 0x8f0);
  uStack_920 = *(undefined8 *)(unaff_x20 + 0x8e8);
  uStack_908 = *(undefined8 *)(unaff_x20 + 0x900);
  uStack_910 = *(undefined8 *)(unaff_x20 + 0x8f8);
  uStack_8f8 = *(undefined8 *)(unaff_x20 + 0x910);
  uStack_900 = *(undefined8 *)(unaff_x20 + 0x908);
  *(undefined8 *)(unaff_x20 + 0x900) = uStack_988;
  *(undefined8 *)(unaff_x20 + 0x8f8) = uStack_990;
  *(undefined8 *)(unaff_x20 + 0x910) = uStack_978;
  *(undefined8 *)(unaff_x20 + 0x908) = uStack_980;
  *(undefined8 *)(unaff_x20 + 0x8e0) = uStack_9a8;
  *puVar1 = uStack_9b0;
  *(undefined8 *)(unaff_x20 + 0x8f0) = uStack_998;
  *(undefined8 *)(unaff_x20 + 0x8e8) = uStack_9a0;
  *(undefined8 *)(unaff_x20 + 0x948) = uStack_940;
  *(undefined8 *)(unaff_x20 + 0x930) = uStack_958;
  *(undefined8 *)(unaff_x20 + 0x928) = uStack_960;
  *(undefined8 *)(unaff_x20 + 0x940) = uStack_948;
  *(undefined8 *)(unaff_x20 + 0x938) = uStack_950;
  *(undefined8 *)(unaff_x20 + 0x920) = uStack_968;
  *(undefined8 *)(unaff_x20 + 0x918) = uStack_970;
  FUN_1035e02d8(&uStack_9b0,auStack_2748,0x112f7bfe8,&UNK_10dbe3360);
  func_0x0001035e0354(&uStack_930,0x112f7bfe8,&UNK_10dbe3360);
  func_0x000107c61428(param_1 + 0x950,auStack_27c0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x950);
  uVar16 = *(undefined8 *)(param_1 + 0x958);
  uVar18 = *(undefined8 *)(param_1 + 0x960);
  func_0x000107c61428(unaff_x20 + 0x950,auStack_27d8,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x950);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x958);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x960);
  *(undefined8 *)(unaff_x20 + 0x950) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x958) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x960) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x968,auStack_27f0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x968);
  uVar16 = *(undefined8 *)(param_1 + 0x970);
  uVar18 = *(undefined8 *)(param_1 + 0x978);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x968),auStack_2808,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x968);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x970);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x978);
  *(undefined8 *)(unaff_x20 + 0x968) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x970) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x978) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x980,auStack_2820,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x980);
  uVar16 = *(undefined8 *)(param_1 + 0x988);
  uVar18 = *(undefined8 *)(param_1 + 0x990);
  func_0x000107c61428(unaff_x20 + 0x980,auStack_2838,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x980);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x988);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x990);
  *(undefined8 *)(unaff_x20 + 0x980) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x988) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x990) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x998,auStack_2850,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x998);
  uVar16 = *(undefined8 *)(param_1 + 0x9a0);
  uVar18 = *(undefined8 *)(param_1 + 0x9a8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0x998),auStack_2868,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x998);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x9a0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x9a8);
  *(undefined8 *)(unaff_x20 + 0x998) = uVar14;
  *(undefined8 *)(unaff_x20 + 0x9a0) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x9a8) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0x9b0,auStack_2880,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x9b0);
  func_0x000107c61428(unaff_x20 + 0x9b0,auStack_2898,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x9b0);
  *(undefined8 *)(unaff_x20 + 0x9b0) = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0x9b8,auStack_28b0,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x9b8);
  func_0x000107c61428(unaff_x20 + 0x9b8,auStack_28c8,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x9b8);
  *(undefined8 *)(unaff_x20 + 0x9b8) = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0x9c0,auStack_28e0,0,0);
  func_0x000107c610b4(auStack_8b8,param_1 + 0x9c0,0x118);
  func_0x000107c61428(unaff_x20 + 0x9c0,auStack_28f8,1,0);
  func_0x000107c610b4(auStack_7a0,unaff_x20 + 0x9c0,0x118);
  func_0x000107c610b4(unaff_x20 + 0x9c0,auStack_8b8,0x118);
  FUN_1035e02d8(auStack_8b8,auStack_2748,0x112f7bff8,&UNK_10dbe3370);
  func_0x0001035e0354(auStack_7a0,0x112f7bff8,&UNK_10dbe3370);
  func_0x000107c61428(param_1 + 0xad8,auStack_2910,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xad8);
  uVar16 = *(undefined8 *)(param_1 + 0xae0);
  uVar18 = *(undefined8 *)(param_1 + 0xae8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0xad8),auStack_2928,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xad8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xae0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0xae8);
  *(undefined8 *)(unaff_x20 + 0xad8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0xae0) = uVar16;
  *(undefined8 *)(unaff_x20 + 0xae8) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0xaf0,auStack_2940,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xaf0);
  uVar16 = *(undefined8 *)(param_1 + 0xaf8);
  uVar18 = *(undefined8 *)(param_1 + 0xb00);
  func_0x000107c61428(unaff_x20 + 0xaf0,auStack_2958,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xaf0);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xaf8);
  uVar17 = *(undefined8 *)(unaff_x20 + 0xb00);
  *(undefined8 *)(unaff_x20 + 0xaf0) = uVar14;
  *(undefined8 *)(unaff_x20 + 0xaf8) = uVar16;
  *(undefined8 *)(unaff_x20 + 0xb00) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0xb08,auStack_2970,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xb08);
  uVar16 = *(undefined8 *)(param_1 + 0xb10);
  uVar18 = *(undefined8 *)(param_1 + 0xb18);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0xb08),auStack_2988,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xb08);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xb10);
  uVar17 = *(undefined8 *)(unaff_x20 + 0xb18);
  *(undefined8 *)(unaff_x20 + 0xb08) = uVar14;
  *(undefined8 *)(unaff_x20 + 0xb10) = uVar16;
  *(undefined8 *)(unaff_x20 + 0xb18) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0xb20,auStack_29a0,0,0);
  uVar7 = *(undefined1 *)(param_1 + 0xb20);
  func_0x000107c61428(unaff_x20 + 0xb20,auStack_29b8,1,0);
  *(undefined1 *)(unaff_x20 + 0xb20) = uVar7;
  func_0x000107c61428(param_1 + 0xb21,auStack_29d0,0,0);
  uVar7 = *(undefined1 *)(param_1 + 0xb21);
  func_0x000107c61428(unaff_x20 + 0xb21,auStack_29e8,1,0);
  *(undefined1 *)(unaff_x20 + 0xb21) = uVar7;
  func_0x000107c61428(param_1 + 0xb28,auStack_2a00,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xb28);
  uVar16 = *(undefined8 *)(param_1 + 0xb30);
  uVar18 = *(undefined8 *)(param_1 + 0xb38);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0xb28),auStack_2a18,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xb28);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xb30);
  uVar17 = *(undefined8 *)(unaff_x20 + 0xb38);
  *(undefined8 *)(unaff_x20 + 0xb28) = uVar14;
  *(undefined8 *)(unaff_x20 + 0xb30) = uVar16;
  *(undefined8 *)(unaff_x20 + 0xb38) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0xb40,auStack_2a30,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xb40);
  func_0x000107c61428(unaff_x20 + 0xb40,auStack_2a48,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0xb40);
  *(undefined8 *)(unaff_x20 + 0xb40) = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428(param_1 + 0xb48,auStack_2a60,0,0);
  func_0x000107c610b4(auStack_688,param_1 + 0xb48,0x138);
  func_0x000107c61428(unaff_x20 + 0xb48,auStack_2a78,1,0);
  func_0x000107c610b4(auStack_2748,unaff_x20 + 0xb48,0x138);
  func_0x000107c610b4(unaff_x20 + 0xb48,auStack_688,0x138);
  FUN_1035e02d8(auStack_688,&uStack_2bb0,0x112f7c008,&UNK_10dbe3380);
  func_0x0001035e0354(auStack_2748,0x112f7c008,&UNK_10dbe3380);
  func_0x000107c61428(param_1 + 0xc80,auStack_2bc8,0,0);
  uVar7 = *(undefined1 *)(param_1 + 0xc80);
  func_0x000107c61428(unaff_x20 + 0xc80,auStack_2be0,1,0);
  *(undefined1 *)(unaff_x20 + 0xc80) = uVar7;
  func_0x000107c61428(param_1 + 0xc88,auStack_2bf8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xc88);
  uVar16 = *(undefined8 *)(param_1 + 0xc90);
  uVar18 = *(undefined8 *)(param_1 + 0xc98);
  func_0x000107c61428(unaff_x20 + 0xc88,auStack_2c10,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xc88);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xc90);
  uVar17 = *(undefined8 *)(unaff_x20 + 0xc98);
  *(undefined8 *)(unaff_x20 + 0xc88) = uVar14;
  *(undefined8 *)(unaff_x20 + 0xc90) = uVar16;
  *(undefined8 *)(unaff_x20 + 0xc98) = uVar18;
  FUN_1035e0128(uVar14,uVar16,uVar18);
  func_0x0001035e015c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0xca0,auStack_2c28,0,0);
  uVar7 = *(undefined1 *)(param_1 + 0xca0);
  func_0x000107c61428(unaff_x20 + 0xca0,auStack_2c40,1,0);
  *(undefined1 *)(unaff_x20 + 0xca0) = uVar7;
  func_0x000107c61428(param_1 + 0xca8,auStack_2c58,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xca8);
  uVar7 = *(undefined1 *)(param_1 + 0xcb0);
  func_0x000107c61428(unaff_x20 + 0xca8,auStack_2c70,1,0);
  *(undefined8 *)(unaff_x20 + 0xca8) = uVar14;
  *(undefined1 *)(unaff_x20 + 0xcb0) = uVar7;
  func_0x000107c61428(param_1 + 0xcb8,auStack_2c88,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xcb8);
  uVar16 = *(undefined8 *)(param_1 + 0xcc0);
  uVar18 = *(undefined8 *)(param_1 + 0xcc8);
  func_0x000107c61428((undefined8 *)(unaff_x20 + 0xcb8),auStack_2ca0,1,0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xcb8);
  uVar15 = *(undefined8 *)(unaff_x20 + 0xcc0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0xcc8);
  *(undefined8 *)(unaff_x20 + 0xcb8) = uVar14;
  *(undefined8 *)(unaff_x20 + 0xcc0) = uVar16;
  *(undefined8 *)(unaff_x20 + 0xcc8) = uVar18;
  func_0x000100d56270(uVar14,uVar16,uVar18);
  func_0x000100d5628c(uVar21,uVar15,uVar17);
  func_0x000107c61428(param_1 + 0xcd0,auStack_2cb8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xcd0);
  uVar7 = *(undefined1 *)(param_1 + 0xcd8);
  func_0x000107c61428(unaff_x20 + 0xcd0,auStack_2cd0,1,0);
  *(undefined8 *)(unaff_x20 + 0xcd0) = uVar14;
  *(undefined1 *)(unaff_x20 + 0xcd8) = uVar7;
  func_0x000107c61428(param_1 + 0xce0,auStack_2ce8,0,0);
  uStack_498 = *(undefined8 *)(param_1 + 0xd98);
  uStack_4a0 = *(undefined8 *)(param_1 + 0xd90);
  uStack_488 = *(undefined8 *)(param_1 + 0xda8);
  uStack_490 = *(undefined8 *)(param_1 + 0xda0);
  uStack_478 = *(undefined8 *)(param_1 + 0xdb8);
  uStack_480 = *(undefined8 *)(param_1 + 0xdb0);
  uStack_468 = *(undefined8 *)(param_1 + 0xdc8);
  uStack_470 = *(undefined8 *)(param_1 + 0xdc0);
  uStack_4d8 = *(undefined8 *)(param_1 + 0xd58);
  uStack_4e0 = *(undefined8 *)(param_1 + 0xd50);
  uStack_4c8 = *(undefined8 *)(param_1 + 0xd68);
  uStack_4d0 = *(undefined8 *)(param_1 + 0xd60);
  uStack_4b8 = *(undefined8 *)(param_1 + 0xd78);
  uStack_4c0 = *(undefined8 *)(param_1 + 0xd70);
  uStack_4a8 = *(undefined8 *)(param_1 + 0xd88);
  uStack_4b0 = *(undefined8 *)(param_1 + 0xd80);
  uStack_518 = *(undefined8 *)(param_1 + 0xd18);
  uStack_520 = *(undefined8 *)(param_1 + 0xd10);
  uStack_508 = *(undefined8 *)(param_1 + 0xd28);
  uStack_510 = *(undefined8 *)(param_1 + 0xd20);
  uStack_4f8 = *(undefined8 *)(param_1 + 0xd38);
  uStack_500 = *(undefined8 *)(param_1 + 0xd30);
  uStack_4e8 = *(undefined8 *)(param_1 + 0xd48);
  uStack_4f0 = *(undefined8 *)(param_1 + 0xd40);
  uStack_548 = *(undefined8 *)(param_1 + 0xce8);
  uStack_550 = *(undefined8 *)(param_1 + 0xce0);
  uStack_538 = *(undefined8 *)(param_1 + 0xcf8);
  uStack_540 = *(undefined8 *)(param_1 + 0xcf0);
  uStack_528 = *(undefined8 *)(param_1 + 0xd08);
  uStack_530 = *(undefined8 *)(param_1 + 0xd00);
  func_0x000107c61428(unaff_x20 + 0xce0,auStack_2d00,1,0);
  uStack_2af8 = *(undefined8 *)(unaff_x20 + 0xd98);
  uStack_2b00 = *(undefined8 *)(unaff_x20 + 0xd90);
  uStack_2ae8 = *(undefined8 *)(unaff_x20 + 0xda8);
  uStack_2af0 = *(undefined8 *)(unaff_x20 + 0xda0);
  uStack_2ad8 = *(undefined8 *)(unaff_x20 + 0xdb8);
  uStack_2ae0 = *(undefined8 *)(unaff_x20 + 0xdb0);
  uStack_2ac8 = *(undefined8 *)(unaff_x20 + 0xdc8);
  uStack_2ad0 = *(undefined8 *)(unaff_x20 + 0xdc0);
  uStack_2b38 = *(undefined8 *)(unaff_x20 + 0xd58);
  uStack_2b40 = *(undefined8 *)(unaff_x20 + 0xd50);
  uStack_2b28 = *(undefined8 *)(unaff_x20 + 0xd68);
  uStack_2b30 = *(undefined8 *)(unaff_x20 + 0xd60);
  uStack_2b18 = *(undefined8 *)(unaff_x20 + 0xd78);
  uStack_2b20 = *(undefined8 *)(unaff_x20 + 0xd70);
  uStack_2b08 = *(undefined8 *)(unaff_x20 + 0xd88);
  uStack_2b10 = *(undefined8 *)(unaff_x20 + 0xd80);
  uStack_2b78 = *(undefined8 *)(unaff_x20 + 0xd18);
  uStack_2b80 = *(undefined8 *)(unaff_x20 + 0xd10);
  uStack_2b68 = *(undefined8 *)(unaff_x20 + 0xd28);
  uStack_2b70 = *(undefined8 *)(unaff_x20 + 0xd20);
  uStack_2b58 = *(undefined8 *)(unaff_x20 + 0xd38);
  uStack_2b60 = *(undefined8 *)(unaff_x20 + 0xd30);
  uStack_2b48 = *(undefined8 *)(unaff_x20 + 0xd48);
  uStack_2b50 = *(undefined8 *)(unaff_x20 + 0xd40);
  uStack_2ba8 = *(undefined8 *)(unaff_x20 + 0xce8);
  uStack_2bb0 = *(undefined8 *)(unaff_x20 + 0xce0);
  uStack_2b98 = *(undefined8 *)(unaff_x20 + 0xcf8);
  uStack_2ba0 = *(undefined8 *)(unaff_x20 + 0xcf0);
  uStack_2b88 = *(undefined8 *)(unaff_x20 + 0xd08);
  uStack_2b90 = *(undefined8 *)(unaff_x20 + 0xd00);
  *(undefined8 *)(unaff_x20 + 0xd98) = uStack_498;
  *(undefined8 *)(unaff_x20 + 0xd90) = uStack_4a0;
  *(undefined8 *)(unaff_x20 + 0xda8) = uStack_488;
  *(undefined8 *)(unaff_x20 + 0xda0) = uStack_490;
  *(undefined8 *)(unaff_x20 + 0xdb8) = uStack_478;
  *(undefined8 *)(unaff_x20 + 0xdb0) = uStack_480;
  *(undefined8 *)(unaff_x20 + 0xdc8) = uStack_468;
  *(undefined8 *)(unaff_x20 + 0xdc0) = uStack_470;
  *(undefined8 *)(unaff_x20 + 0xd58) = uStack_4d8;
  *(undefined8 *)(unaff_x20 + 0xd50) = uStack_4e0;
  *(undefined8 *)(unaff_x20 + 0xd68) = uStack_4c8;
  *(undefined8 *)(unaff_x20 + 0xd60) = uStack_4d0;
  *(undefined8 *)(unaff_x20 + 0xd78) = uStack_4b8;
  *(undefined8 *)(unaff_x20 + 0xd70) = uStack_4c0;
  *(undefined8 *)(unaff_x20 + 0xd88) = uStack_4a8;
  *(undefined8 *)(unaff_x20 + 0xd80) = uStack_4b0;
  *(undefined8 *)(unaff_x20 + 0xd18) = uStack_518;
  *(undefined8 *)(unaff_x20 + 0xd10) = uStack_520;
  *(undefined8 *)(unaff_x20 + 0xd28) = uStack_508;
  *(undefined8 *)(unaff_x20 + 0xd20) = uStack_510;
  *(undefined8 *)(unaff_x20 + 0xd38) = uStack_4f8;
  *(undefined8 *)(unaff_x20 + 0xd30) = uStack_500;
  *(undefined8 *)(unaff_x20 + 0xd48) = uStack_4e8;
  *(undefined8 *)(unaff_x20 + 0xd40) = uStack_4f0;
  *(undefined8 *)(unaff_x20 + 0xce8) = uStack_548;
  *(undefined8 *)(unaff_x20 + 0xce0) = uStack_550;
  *(undefined8 *)(unaff_x20 + 0xcf8) = uStack_538;
  *(undefined8 *)(unaff_x20 + 0xcf0) = uStack_540;
  *(undefined8 *)(unaff_x20 + 0xd08) = uStack_528;
  *(undefined8 *)(unaff_x20 + 0xd00) = uStack_530;
  FUN_1035e02d8(&uStack_550,&uStack_2df0,0x112f7c018,&UNK_10dbe3390);
  func_0x0001035e0354(&uStack_2bb0,0x112f7c018,&UNK_10dbe3390);
  func_0x000107c61428(param_1 + 0xdd0,auStack_2e08,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xdd0);
  func_0x000107c61428(unaff_x20 + 0xdd0,auStack_2e20,1,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0xdd0);
  *(undefined8 *)(unaff_x20 + 0xdd0) = uVar14;
  func_0x000107c61434(uVar14);
  func_0x000107c6142c(uVar16);
  func_0x000107c61428((undefined8 *)(param_1 + 0xdd8),auStack_2e38,0,0);
  uStack_438 = *(undefined8 *)(param_1 + 0xe00);
  uStack_440 = *(undefined8 *)(param_1 + 0xdf8);
  uStack_428 = *(undefined8 *)(param_1 + 0xe10);
  uStack_430 = *(undefined8 *)(param_1 + 0xe08);
  uStack_418 = *(undefined8 *)(param_1 + 0xe20);
  uStack_420 = *(undefined8 *)(param_1 + 0xe18);
  uStack_408 = *(undefined8 *)(param_1 + 0xe30);
  uStack_410 = *(undefined8 *)(param_1 + 0xe28);
  uStack_458 = *(undefined8 *)(param_1 + 0xde0);
  uStack_460 = *(undefined8 *)(param_1 + 0xdd8);
  uStack_448 = *(undefined8 *)(param_1 + 0xdf0);
  uStack_450 = *(undefined8 *)(param_1 + 0xde8);
  func_0x000107c61428(puVar2,auStack_2e50,1,0);
  uStack_3d8 = *(undefined8 *)(unaff_x20 + 0xe00);
  uStack_3e0 = *(undefined8 *)(unaff_x20 + 0xdf8);
  uStack_3c8 = *(undefined8 *)(unaff_x20 + 0xe10);
  uStack_3d0 = *(undefined8 *)(unaff_x20 + 0xe08);
  uStack_3b8 = *(undefined8 *)(unaff_x20 + 0xe20);
  uStack_3c0 = *(undefined8 *)(unaff_x20 + 0xe18);
  uStack_3a8 = *(undefined8 *)(unaff_x20 + 0xe30);
  uStack_3b0 = *(undefined8 *)(unaff_x20 + 0xe28);
  uStack_3f8 = *(undefined8 *)(unaff_x20 + 0xde0);
  uStack_400 = *puVar2;
  uStack_3e8 = *(undefined8 *)(unaff_x20 + 0xdf0);
  uStack_3f0 = *(undefined8 *)(unaff_x20 + 0xde8);
  *(undefined8 *)(unaff_x20 + 0xe00) = uStack_438;
  *(undefined8 *)(unaff_x20 + 0xdf8) = uStack_440;
  *(undefined8 *)(unaff_x20 + 0xe10) = uStack_428;
  *(undefined8 *)(unaff_x20 + 0xe08) = uStack_430;
  *(undefined8 *)(unaff_x20 + 0xe20) = uStack_418;
  *(undefined8 *)(unaff_x20 + 0xe18) = uStack_420;
  *(undefined8 *)(unaff_x20 + 0xe30) = uStack_408;
  *(undefined8 *)(unaff_x20 + 0xe28) = uStack_410;
  *(undefined8 *)(unaff_x20 + 0xde0) = uStack_458;
  *puVar2 = uStack_460;
  *(undefined8 *)(unaff_x20 + 0xdf0) = uStack_448;
  *(undefined8 *)(unaff_x20 + 0xde8) = uStack_450;
  FUN_1035e02d8(&uStack_460,&uStack_2df0,0x112f7c028,&UNK_10dbe33a0);
  func_0x0001035e0354(&uStack_400,0x112f7c028,&UNK_10dbe33a0);
  func_0x000107c61428(param_1 + 0xe38,auStack_2e68,0,0);
  uVar15 = *(undefined8 *)(param_1 + 0xe38);
  uVar17 = *(undefined8 *)(param_1 + 0xe40);
  uVar19 = *(undefined8 *)(param_1 + 0xe48);
  uVar22 = *(undefined8 *)(param_1 + 0xe50);
  uVar23 = *(undefined8 *)(param_1 + 0xe58);
  uVar24 = *(undefined8 *)(param_1 + 0xe60);
  func_0x000107c61428(unaff_x20 + 0xe38,auStack_2e80,1,0);
  uVar25 = *(undefined8 *)(unaff_x20 + 0xe38);
  uVar26 = *(undefined8 *)(unaff_x20 + 0xe40);
  uVar18 = *(undefined8 *)(unaff_x20 + 0xe48);
  uVar14 = *(undefined8 *)(unaff_x20 + 0xe50);
  uVar21 = *(undefined8 *)(unaff_x20 + 0xe58);
  uVar16 = *(undefined8 *)(unaff_x20 + 0xe60);
  *(undefined8 *)(unaff_x20 + 0xe38) = uVar15;
  *(undefined8 *)(unaff_x20 + 0xe40) = uVar17;
  *(undefined8 *)(unaff_x20 + 0xe48) = uVar19;
  *(undefined8 *)(unaff_x20 + 0xe50) = uVar22;
  *(undefined8 *)(unaff_x20 + 0xe58) = uVar23;
  *(undefined8 *)(unaff_x20 + 0xe60) = uVar24;
  FUN_1035e01c4(uVar15,uVar17,uVar19,uVar22,uVar23,uVar24);
  func_0x0001035e0224(uVar25,uVar26,uVar18,uVar14,uVar21,uVar16);
  func_0x000107c61428((undefined8 *)(param_1 + 0xe68),auStack_2e98,0,0);
  uStack_398 = *(undefined8 *)(param_1 + 0xe70);
  uStack_3a0 = *(undefined8 *)(param_1 + 0xe68);
  uStack_388 = *(undefined8 *)(param_1 + 0xe80);
  uStack_390 = *(undefined8 *)(param_1 + 0xe78);
  uStack_378 = *(undefined8 *)(param_1 + 0xe90);
  uStack_380 = *(undefined8 *)(param_1 + 0xe88);
  uStack_368 = *(undefined8 *)(param_1 + 0xea0);
  uStack_370 = *(undefined8 *)(param_1 + 0xe98);
  func_0x000107c61428(puVar3,auStack_2eb0,1,0);
  uStack_358 = *(undefined8 *)(unaff_x20 + 0xe70);
  uStack_360 = *puVar3;
  uStack_348 = *(undefined8 *)(unaff_x20 + 0xe80);
  uStack_350 = *(undefined8 *)(unaff_x20 + 0xe78);
  uStack_338 = *(undefined8 *)(unaff_x20 + 0xe90);
  uStack_340 = *(undefined8 *)(unaff_x20 + 0xe88);
  uStack_328 = *(undefined8 *)(unaff_x20 + 0xea0);
  uStack_330 = *(undefined8 *)(unaff_x20 + 0xe98);
  *(undefined8 *)(unaff_x20 + 0xe70) = uStack_398;
  *puVar3 = uStack_3a0;
  *(undefined8 *)(unaff_x20 + 0xe80) = uStack_388;
  *(undefined8 *)(unaff_x20 + 0xe78) = uStack_390;
  *(undefined8 *)(unaff_x20 + 0xe90) = uStack_378;
  *(undefined8 *)(unaff_x20 + 0xe88) = uStack_380;
  *(undefined8 *)(unaff_x20 + 0xea0) = uStack_368;
  *(undefined8 *)(unaff_x20 + 0xe98) = uStack_370;
  FUN_1035e02d8(&uStack_3a0,&uStack_2df0,0x112f7c038,&UNK_10dbe33b0);
  func_0x0001035e0354(&uStack_360,0x112f7c038,&UNK_10dbe33b0);
  func_0x000107c61428(param_1 + 0xea8,auStack_2ec8,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xea8);
  uVar7 = *(undefined1 *)(param_1 + 0xeb0);
  func_0x000107c61428(unaff_x20 + 0xea8,auStack_2ee0,1,0);
  *(undefined8 *)(unaff_x20 + 0xea8) = uVar14;
  *(undefined1 *)(unaff_x20 + 0xeb0) = uVar7;
  func_0x000107c61428((undefined8 *)(param_1 + 0xeb8),auStack_2ef8,0,0);
  uStack_318 = *(undefined8 *)(param_1 + 0xec0);
  uStack_320 = *(undefined8 *)(param_1 + 0xeb8);
  uStack_308 = *(undefined8 *)(param_1 + 0xed0);
  uStack_310 = *(undefined8 *)(param_1 + 0xec8);
  uStack_2f8 = *(undefined8 *)(param_1 + 0xee0);
  uStack_300 = *(undefined8 *)(param_1 + 0xed8);
  uStack_2e8 = *(undefined8 *)(param_1 + 0xef0);
  uStack_2f0 = *(undefined8 *)(param_1 + 0xee8);
  func_0x000107c61428(puVar4,auStack_2f10,1,0);
  uStack_2d8 = *(undefined8 *)(unaff_x20 + 0xec0);
  uStack_2e0 = *puVar4;
  uStack_2c8 = *(undefined8 *)(unaff_x20 + 0xed0);
  uStack_2d0 = *(undefined8 *)(unaff_x20 + 0xec8);
  uStack_2b8 = *(undefined8 *)(unaff_x20 + 0xee0);
  uStack_2c0 = *(undefined8 *)(unaff_x20 + 0xed8);
  uStack_2a8 = *(undefined8 *)(unaff_x20 + 0xef0);
  uStack_2b0 = *(undefined8 *)(unaff_x20 + 0xee8);
  *(undefined8 *)(unaff_x20 + 0xec0) = uStack_318;
  *puVar4 = uStack_320;
  *(undefined8 *)(unaff_x20 + 0xed0) = uStack_308;
  *(undefined8 *)(unaff_x20 + 0xec8) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0xee0) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0xed8) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0xef0) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0xee8) = uStack_2f0;
  FUN_1035e02d8(&uStack_320,&uStack_2df0,0x112f7c048,&UNK_10dbe33c0);
  func_0x0001035e0354(&uStack_2e0,0x112f7c048,&UNK_10dbe33c0);
  func_0x000107c61428((undefined8 *)(param_1 + 0xef8),auStack_2f28,0,0);
  uStack_278 = *(undefined8 *)(param_1 + 0xf20);
  uStack_280 = *(undefined8 *)(param_1 + 0xf18);
  uStack_268 = *(undefined8 *)(param_1 + 0xf30);
  uStack_270 = *(undefined8 *)(param_1 + 0xf28);
  uStack_258 = *(undefined8 *)(param_1 + 0xf40);
  uStack_260 = *(undefined8 *)(param_1 + 0xf38);
  uStack_298 = *(undefined8 *)(param_1 + 0xf00);
  uStack_2a0 = *(undefined8 *)(param_1 + 0xef8);
  uStack_288 = *(undefined8 *)(param_1 + 0xf10);
  uStack_290 = *(undefined8 *)(param_1 + 0xf08);
  func_0x000107c61428(puVar5,auStack_2f40,1,0);
  uStack_228 = *(undefined8 *)(unaff_x20 + 0xf20);
  uStack_230 = *(undefined8 *)(unaff_x20 + 0xf18);
  uStack_218 = *(undefined8 *)(unaff_x20 + 0xf30);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0xf28);
  uStack_208 = *(undefined8 *)(unaff_x20 + 0xf40);
  uStack_210 = *(undefined8 *)(unaff_x20 + 0xf38);
  uStack_248 = *(undefined8 *)(unaff_x20 + 0xf00);
  uStack_250 = *puVar5;
  uStack_238 = *(undefined8 *)(unaff_x20 + 0xf10);
  uStack_240 = *(undefined8 *)(unaff_x20 + 0xf08);
  *(undefined8 *)(unaff_x20 + 0xf20) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0xf18) = uStack_280;
  *(undefined8 *)(unaff_x20 + 0xf30) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0xf28) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0xf40) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0xf38) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0xf00) = uStack_298;
  *puVar5 = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0xf10) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0xf08) = uStack_290;
  FUN_1035e02d8(&uStack_2a0,&uStack_2df0,0x112f7c058,&UNK_10dbe33d0);
  func_0x0001035e0354(&uStack_250,0x112f7c058,&UNK_10dbe33d0);
  func_0x000107c61428((undefined8 *)(param_1 + 0xf48),auStack_2f58,0,0);
  uStack_198 = *(undefined8 *)(param_1 + 0xfb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xfa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xfc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xfb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xfd0);
  uStack_180 = *(undefined8 *)(param_1 + 0xfc8);
  uStack_170 = *(undefined8 *)(param_1 + 0xfd8);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xf70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0xf68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xf80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xf78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xf90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xf88);
  uStack_1a8 = *(undefined8 *)(param_1 + 4000);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xf98);
  uStack_1f8 = *(undefined8 *)(param_1 + 0xf50);
  uStack_200 = *(undefined8 *)(param_1 + 0xf48);
  uStack_1e8 = *(undefined8 *)(param_1 + 0xf60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0xf58);
  func_0x000107c61428(puVar6,auStack_2f70,1,0);
  uStack_2d88 = *(undefined8 *)(unaff_x20 + 0xfb0);
  uStack_2d90 = *(undefined8 *)(unaff_x20 + 0xfa8);
  uStack_2d78 = *(undefined8 *)(unaff_x20 + 0xfc0);
  uStack_2d80 = *(undefined8 *)(unaff_x20 + 0xfb8);
  uStack_2d68 = *(undefined8 *)(unaff_x20 + 0xfd0);
  uStack_2d70 = *(undefined8 *)(unaff_x20 + 0xfc8);
  uStack_2d60 = *(undefined8 *)(unaff_x20 + 0xfd8);
  uStack_2dc8 = *(undefined8 *)(unaff_x20 + 0xf70);
  uStack_2dd0 = *(undefined8 *)(unaff_x20 + 0xf68);
  uStack_2db8 = *(undefined8 *)(unaff_x20 + 0xf80);
  uStack_2dc0 = *(undefined8 *)(unaff_x20 + 0xf78);
  uStack_2da8 = *(undefined8 *)(unaff_x20 + 0xf90);
  uStack_2db0 = *(undefined8 *)(unaff_x20 + 0xf88);
  uStack_2d98 = *(undefined8 *)(unaff_x20 + 4000);
  uStack_2da0 = *(undefined8 *)(unaff_x20 + 0xf98);
  uStack_2de8 = *(undefined8 *)(unaff_x20 + 0xf50);
  uStack_2df0 = *puVar6;
  uStack_2dd8 = *(undefined8 *)(unaff_x20 + 0xf60);
  uStack_2de0 = *(undefined8 *)(unaff_x20 + 0xf58);
  *(undefined8 *)(unaff_x20 + 0xfb0) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0xfa8) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0xfc0) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0xfb8) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0xfd0) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0xfc8) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0xfd8) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0xf70) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0xf68) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0xf80) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0xf78) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0xf90) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0xf88) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 4000) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0xf98) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0xf50) = uStack_1f8;
  *puVar6 = uStack_200;
  *(undefined8 *)(unaff_x20 + 0xf60) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0xf58) = uStack_1f0;
  FUN_1035e02d8(&uStack_200,&uStack_3010,0x112f7c068,&UNK_10dbe33e0);
  func_0x0001035e0354(&uStack_2df0,0x112f7c068,&UNK_10dbe33e0);
  func_0x000107c61428(param_1 + 0xfe0,auStack_3028,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0xfe0);
  uVar7 = *(undefined1 *)(param_1 + 0xfe8);
  func_0x000107c61428(unaff_x20 + 0xfe0,auStack_3040,1,0);
  *(undefined8 *)(unaff_x20 + 0xfe0) = uVar14;
  *(undefined1 *)(unaff_x20 + 0xfe8) = uVar7;
  func_0x000107c61428(param_1 + 0xfe9,auStack_3058,0,0);
  uVar7 = *(undefined1 *)(param_1 + 0xfe9);
  func_0x000107c61428(unaff_x20 + 0xfe9,auStack_3070,1,0);
  *(undefined1 *)(unaff_x20 + 0xfe9) = uVar7;
  func_0x000107c61428(param_1 + 0xff0,auStack_3088,0,0);
  uStack_158 = *(undefined8 *)(param_1 + 0xff8);
  uStack_160 = *(undefined8 *)(param_1 + 0xff0);
  uStack_148 = *(undefined8 *)(param_1 + 0x1008);
  uStack_150 = *(undefined8 *)(param_1 + 0x1000);
  uStack_138 = *(undefined8 *)(param_1 + 0x1018);
  uStack_140 = *(undefined8 *)(param_1 + 0x1010);
  uStack_128 = *(undefined8 *)(param_1 + 0x1028);
  uStack_130 = *(undefined8 *)(param_1 + 0x1020);
  func_0x000107c61428(unaff_x20 + 0xff0,auStack_30a0,1,0);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0xff8);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0xff0);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x1008);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x1000);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x1018);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x1010);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x1028);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x1020);
  *(undefined8 *)(unaff_x20 + 0xff8) = uStack_158;
  *(undefined8 *)(unaff_x20 + 0xff0) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x1008) = uStack_148;
  *(undefined8 *)(unaff_x20 + 0x1000) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x1018) = uStack_138;
  *(undefined8 *)(unaff_x20 + 0x1010) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x1028) = uStack_128;
  *(undefined8 *)(unaff_x20 + 0x1020) = uStack_130;
  FUN_1035e02d8(&uStack_160,&uStack_3010,0x112f7c078,&UNK_10dbe33f0);
  func_0x0001035e0354(&uStack_120,0x112f7c078,&UNK_10dbe33f0);
  func_0x000107c61428(param_1 + 0x1030,auStack_30b8,0,0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x1068);
  uStack_b0 = *(undefined8 *)(param_1 + 0x1060);
  uStack_98 = *(undefined8 *)(param_1 + 0x1078);
  uStack_a0 = *(undefined8 *)(param_1 + 0x1070);
  uStack_88 = *(undefined8 *)(param_1 + 0x1088);
  uStack_90 = *(undefined8 *)(param_1 + 0x1080);
  uStack_78 = *(undefined8 *)(param_1 + 0x1098);
  uStack_80 = *(undefined8 *)(param_1 + 0x1090);
  uStack_d8 = *(undefined8 *)(param_1 + 0x1038);
  uStack_e0 = *(undefined8 *)(param_1 + 0x1030);
  uStack_c8 = *(undefined8 *)(param_1 + 0x1048);
  uStack_d0 = *(undefined8 *)(param_1 + 0x1040);
  uStack_b8 = *(undefined8 *)(param_1 + 0x1058);
  uStack_c0 = *(undefined8 *)(param_1 + 0x1050);
  FUN_1035e02d8(&uStack_e0,&uStack_3010,0x112f73208,&UNK_10dbce5b0);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x1030,auStack_30d0,1,0);
  uStack_2fd8 = *(undefined8 *)(unaff_x20 + 0x1068);
  uStack_2fe0 = *(undefined8 *)(unaff_x20 + 0x1060);
  uStack_2fc8 = *(undefined8 *)(unaff_x20 + 0x1078);
  uStack_2fd0 = *(undefined8 *)(unaff_x20 + 0x1070);
  uStack_2fb8 = *(undefined8 *)(unaff_x20 + 0x1088);
  uStack_2fc0 = *(undefined8 *)(unaff_x20 + 0x1080);
  uStack_2fa8 = *(undefined8 *)(unaff_x20 + 0x1098);
  uStack_2fb0 = *(undefined8 *)(unaff_x20 + 0x1090);
  uStack_3008 = *(undefined8 *)(unaff_x20 + 0x1038);
  uStack_3010 = *(undefined8 *)(unaff_x20 + 0x1030);
  uStack_2ff8 = *(undefined8 *)(unaff_x20 + 0x1048);
  uStack_3000 = *(undefined8 *)(unaff_x20 + 0x1040);
  uStack_2fe8 = *(undefined8 *)(unaff_x20 + 0x1058);
  uStack_2ff0 = *(undefined8 *)(unaff_x20 + 0x1050);
  *(undefined8 *)(unaff_x20 + 0x1058) = uStack_b8;
  *(undefined8 *)(unaff_x20 + 0x1050) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0x1048) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0x1040) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x1038) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x1030) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x1088) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x1080) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x1078) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x1070) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x1068) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x1060) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x1098) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x1090) = uStack_80;
  func_0x0001035e0354(&uStack_3010,0x112f73208,&UNK_10dbce5b0);
  return;
}



/* Entry: 1035d1ec0; end: 1035d23d7;  */

void FUN_1035d1ec0(void)

{
  long unaff_x20;
  
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                      *(undefined8 *)(unaff_x20 + 0x98));
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0));
  func_0x0001035e0354(unaff_x20 + 200,0x112f7bf98,&UNK_10dbe3310);
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x168),*(undefined8 *)(unaff_x20 + 0x170),
                      *(undefined8 *)(unaff_x20 + 0x178));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                      *(undefined8 *)(unaff_x20 + 400));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x1a8),*(undefined8 *)(unaff_x20 + 0x1b0),
                      *(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                      *(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x1d8),*(undefined8 *)(unaff_x20 + 0x1e0),
                      *(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                      *(undefined8 *)(unaff_x20 + 0x210));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x218),*(undefined8 *)(unaff_x20 + 0x220),
                      *(undefined8 *)(unaff_x20 + 0x228));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238),
                      *(undefined8 *)(unaff_x20 + 0x240));
  func_0x0001035e0354(unaff_x20 + 0x248,0x112f7bfa8,&UNK_10dbe3320);
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x398),*(undefined8 *)(unaff_x20 + 0x3a0),
                      *(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x3b0),*(undefined8 *)(unaff_x20 + 0x3b8),
                      *(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x3c8),*(undefined8 *)(unaff_x20 + 0x3d0),
                      *(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x3e0),*(undefined8 *)(unaff_x20 + 1000),
                      *(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x3f8),*(undefined8 *)(unaff_x20 + 0x400),
                      *(undefined8 *)(unaff_x20 + 0x408));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x410),*(undefined8 *)(unaff_x20 + 0x418),
                      *(undefined8 *)(unaff_x20 + 0x420));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x428),*(undefined8 *)(unaff_x20 + 0x430),
                      *(undefined8 *)(unaff_x20 + 0x438));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x440),*(undefined8 *)(unaff_x20 + 0x448),
                      *(undefined8 *)(unaff_x20 + 0x450));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x458),*(undefined8 *)(unaff_x20 + 0x460),
                      *(undefined8 *)(unaff_x20 + 0x468));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x470),*(undefined8 *)(unaff_x20 + 0x478),
                      *(undefined8 *)(unaff_x20 + 0x480));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x488),*(undefined8 *)(unaff_x20 + 0x490),
                      *(undefined8 *)(unaff_x20 + 0x498));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x4a0),*(undefined8 *)(unaff_x20 + 0x4a8),
                      *(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x4b8),*(undefined8 *)(unaff_x20 + 0x4c0),
                      *(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000101556278(*(undefined8 *)(unaff_x20 + 0x4f0),*(undefined8 *)(unaff_x20 + 0x4f8),
                      *(undefined8 *)(unaff_x20 + 0x500));
  func_0x0001035e0354(unaff_x20 + 0x508,0x112f7bfb8,&UNK_10dbe3330);
  func_0x0001035e0354(unaff_x20 + 0x660,0x112f7bfc8,&UNK_10dbe3340);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x760));
  func_0x0001035e0354(unaff_x20 + 0x778,0x112f7bfd8,&UNK_10dbe3350);
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x8c0),*(undefined8 *)(unaff_x20 + 0x8c8),
                      *(undefined8 *)(unaff_x20 + 0x8d0));
  FUN_1035e0660(*(undefined8 *)(unaff_x20 + 0x8d8),*(undefined8 *)(unaff_x20 + 0x8e0),
                *(undefined8 *)(unaff_x20 + 0x8e8),*(undefined8 *)(unaff_x20 + 0x8f0),
                *(undefined8 *)(unaff_x20 + 0x8f8),*(undefined8 *)(unaff_x20 + 0x900),
                *(undefined8 *)(unaff_x20 + 0x908),*(undefined8 *)(unaff_x20 + 0x910),
                *(undefined8 *)(unaff_x20 + 0x918),*(undefined8 *)(unaff_x20 + 0x920),
                *(undefined8 *)(unaff_x20 + 0x928),*(undefined8 *)(unaff_x20 + 0x930),
                *(undefined8 *)(unaff_x20 + 0x938),*(undefined8 *)(unaff_x20 + 0x940),
                *(undefined8 *)(unaff_x20 + 0x948));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x950),*(undefined8 *)(unaff_x20 + 0x958),
                      *(undefined8 *)(unaff_x20 + 0x960));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x968),*(undefined8 *)(unaff_x20 + 0x970),
                      *(undefined8 *)(unaff_x20 + 0x978));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x980),*(undefined8 *)(unaff_x20 + 0x988),
                      *(undefined8 *)(unaff_x20 + 0x990));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0x998),*(undefined8 *)(unaff_x20 + 0x9a0),
                      *(undefined8 *)(unaff_x20 + 0x9a8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x9b0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x9b8));
  func_0x0001035e0354(unaff_x20 + 0x9c0,0x112f7bff8,&UNK_10dbe3370);
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0xad8),*(undefined8 *)(unaff_x20 + 0xae0),
                      *(undefined8 *)(unaff_x20 + 0xae8));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0xaf0),*(undefined8 *)(unaff_x20 + 0xaf8),
                      *(undefined8 *)(unaff_x20 + 0xb00));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0xb08),*(undefined8 *)(unaff_x20 + 0xb10),
                      *(undefined8 *)(unaff_x20 + 0xb18));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0xb28),*(undefined8 *)(unaff_x20 + 0xb30),
                      *(undefined8 *)(unaff_x20 + 0xb38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb40));
  func_0x0001035e0354(unaff_x20 + 0xb48,0x112f7c008,&UNK_10dbe3380);
  func_0x0001035e015c(*(undefined8 *)(unaff_x20 + 0xc88),*(undefined8 *)(unaff_x20 + 0xc90),
                      *(undefined8 *)(unaff_x20 + 0xc98));
  func_0x000100d5628c(*(undefined8 *)(unaff_x20 + 0xcb8),*(undefined8 *)(unaff_x20 + 0xcc0),
                      *(undefined8 *)(unaff_x20 + 0xcc8));
  func_0x0001035e0354(unaff_x20 + 0xce0,0x112f7c018,&UNK_10dbe3390);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xdd0));
  FUN_1035e0734(*(undefined8 *)(unaff_x20 + 0xdd8),*(undefined8 *)(unaff_x20 + 0xde0),
                *(undefined8 *)(unaff_x20 + 0xde8),*(undefined8 *)(unaff_x20 + 0xdf0),
                *(undefined8 *)(unaff_x20 + 0xdf8),*(undefined8 *)(unaff_x20 + 0xe00),
                *(undefined8 *)(unaff_x20 + 0xe08),*(undefined8 *)(unaff_x20 + 0xe10),
                *(undefined8 *)(unaff_x20 + 0xe18),*(undefined8 *)(unaff_x20 + 0xe20),
                *(undefined8 *)(unaff_x20 + 0xe28),*(undefined8 *)(unaff_x20 + 0xe30));
  func_0x0001035e0224(*(undefined8 *)(unaff_x20 + 0xe38),*(undefined8 *)(unaff_x20 + 0xe40),
                      *(undefined8 *)(unaff_x20 + 0xe48),*(undefined8 *)(unaff_x20 + 0xe50),
                      *(undefined8 *)(unaff_x20 + 0xe58),*(undefined8 *)(unaff_x20 + 0xe60));
  func_0x0001035e08b0(*(undefined8 *)(unaff_x20 + 0xe68),*(undefined8 *)(unaff_x20 + 0xe70),
                      *(undefined8 *)(unaff_x20 + 0xe78),*(undefined8 *)(unaff_x20 + 0xe80),
                      *(undefined8 *)(unaff_x20 + 0xe88),*(undefined8 *)(unaff_x20 + 0xe90),
                      *(undefined8 *)(unaff_x20 + 0xe98),*(undefined8 *)(unaff_x20 + 0xea0));
  FUN_1035e07b8(*(undefined8 *)(unaff_x20 + 0xeb8),*(undefined8 *)(unaff_x20 + 0xec0),
                *(undefined8 *)(unaff_x20 + 0xec8),*(undefined8 *)(unaff_x20 + 0xed0),
                *(undefined8 *)(unaff_x20 + 0xed8),*(undefined8 *)(unaff_x20 + 0xee0),
                *(undefined8 *)(unaff_x20 + 0xee8),*(undefined8 *)(unaff_x20 + 0xef0));
  FUN_1035e081c(*(undefined8 *)(unaff_x20 + 0xef8),*(undefined8 *)(unaff_x20 + 0xf00),
                *(undefined8 *)(unaff_x20 + 0xf08),*(undefined8 *)(unaff_x20 + 0xf10),
                *(undefined8 *)(unaff_x20 + 0xf18),*(undefined8 *)(unaff_x20 + 0xf20),
                *(undefined8 *)(unaff_x20 + 0xf28),*(undefined8 *)(unaff_x20 + 0xf30),
                *(undefined8 *)(unaff_x20 + 0xf38),*(undefined8 *)(unaff_x20 + 0xf40));
  func_0x0001035e0354(unaff_x20 + 0xf48,0x112f7c068,&UNK_10dbe33e0);
  func_0x0001035e08b0(*(undefined8 *)(unaff_x20 + 0xff0),*(undefined8 *)(unaff_x20 + 0xff8),
                      *(undefined8 *)(unaff_x20 + 0x1000),*(undefined8 *)(unaff_x20 + 0x1008),
                      *(undefined8 *)(unaff_x20 + 0x1010),*(undefined8 *)(unaff_x20 + 0x1018),
                      *(undefined8 *)(unaff_x20 + 0x1020),*(undefined8 *)(unaff_x20 + 0x1028));
  FUN_1035e0920(*(undefined8 *)(unaff_x20 + 0x1030),*(undefined8 *)(unaff_x20 + 0x1038),
                *(undefined8 *)(unaff_x20 + 0x1040),*(undefined8 *)(unaff_x20 + 0x1048),
                *(undefined8 *)(unaff_x20 + 0x1050),*(undefined8 *)(unaff_x20 + 0x1058),
                *(undefined8 *)(unaff_x20 + 0x1060),*(undefined8 *)(unaff_x20 + 0x1068),
                *(undefined8 *)(unaff_x20 + 0x1070),*(undefined8 *)(unaff_x20 + 0x1078),
                *(undefined8 *)(unaff_x20 + 0x1080),*(undefined8 *)(unaff_x20 + 0x1088),
                *(undefined8 *)(unaff_x20 + 0x1090),*(undefined8 *)(unaff_x20 + 0x1098));
  return;
}



/* Entry: 1035d23d8; end: 1035d2467;  */

void FUN_1035d23d8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_1035cb3e4(0);
    func_0x000107c613fc();
    FUN_1035cf368(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_1035d2468();
  return;
}



/* Entry: 1035d2468; end: 1035d2ddf;  */

/* WARNING: Removing unreachable block (ram,0x0001035d256c) */
/* WARNING: Removing unreachable block (ram,0x0001035d2838) */
/* WARNING: Removing unreachable block (ram,0x0001035d276c) */
/* WARNING: Removing unreachable block (ram,0x0001035d2a38) */
/* WARNING: Removing unreachable block (ram,0x0001035d2a1c) */
/* WARNING: Removing unreachable block (ram,0x0001035d27c8) */
/* WARNING: Removing unreachable block (ram,0x0001035d26bc) */
/* WARNING: Removing unreachable block (ram,0x0001035d2684) */
/* WARNING: Removing unreachable block (ram,0x0001035d2a00) */
/* WARNING: Removing unreachable block (ram,0x0001035d2934) */
/* WARNING: Removing unreachable block (ram,0x0001035d2aa8) */
/* WARNING: Removing unreachable block (ram,0x0001035d281c) */
/* WARNING: Removing unreachable block (ram,0x0001035d2bc0) */
/* WARNING: Removing unreachable block (ram,0x0001035d2b6c) */
/* WARNING: Removing unreachable block (ram,0x0001035d2a54) */
/* WARNING: Removing unreachable block (ram,0x0001035d2a70) */
/* WARNING: Removing unreachable block (ram,0x0001035d2668) */
/* WARNING: Removing unreachable block (ram,0x0001035d2630) */
/* WARNING: Removing unreachable block (ram,0x0001035d2ba4) */
/* WARNING: Removing unreachable block (ram,0x0001035d2788) */
/* WARNING: Removing unreachable block (ram,0x0001035d2b18) */
/* WARNING: Removing unreachable block (ram,0x0001035d26a0) */
/* WARNING: Removing unreachable block (ram,0x0001035d2c38) */
/* WARNING: Removing unreachable block (ram,0x0001035d26f4) */
/* WARNING: Removing unreachable block (ram,0x0001035d2588) */
/* WARNING: Removing unreachable block (ram,0x0001035d2c1c) */
/* WARNING: Removing unreachable block (ram,0x0001035d25f8) */
/* WARNING: Removing unreachable block (ram,0x0001035d2b34) */
/* WARNING: Removing unreachable block (ram,0x0001035d2988) */
/* WARNING: Removing unreachable block (ram,0x0001035d2c8c) */
/* WARNING: Removing unreachable block (ram,0x0001035d2d18) */
/* WARNING: Removing unreachable block (ram,0x0001035d2cc4) */
/* WARNING: Removing unreachable block (ram,0x0001035d2da4) */
/* WARNING: Removing unreachable block (ram,0x0001035d2ddc) */
/* WARNING: Removing unreachable block (ram,0x0001035d2dc0) */
/* WARNING: Removing unreachable block (ram,0x0001035d2ca8) */
/* WARNING: Removing unreachable block (ram,0x0001035d2cfc) */
/* WARNING: Removing unreachable block (ram,0x0001035d2d50) */
/* WARNING: Removing unreachable block (ram,0x0001035d2d88) */
/* WARNING: Removing unreachable block (ram,0x0001035d2d34) */
/* WARNING: Removing unreachable block (ram,0x0001035d2d6c) */
/* WARNING: Removing unreachable block (ram,0x0001035d2870) */
/* WARNING: Removing unreachable block (ram,0x0001035d2950) */
/* WARNING: Removing unreachable block (ram,0x0001035d2afc) */
/* WARNING: Removing unreachable block (ram,0x0001035d2c00) */
/* WARNING: Removing unreachable block (ram,0x0001035d2c54) */
/* WARNING: Removing unreachable block (ram,0x0001035d2750) */
/* WARNING: Removing unreachable block (ram,0x0001035d25dc) */
/* WARNING: Removing unreachable block (ram,0x0001035d2a8c) */
/* WARNING: Removing unreachable block (ram,0x0001035d25a4) */
/* WARNING: Removing unreachable block (ram,0x0001035d2918) */
/* WARNING: Removing unreachable block (ram,0x0001035d2ac4) */
/* WARNING: Removing unreachable block (ram,0x0001035d25c0) */
/* WARNING: Removing unreachable block (ram,0x0001035d2614) */
/* WARNING: Removing unreachable block (ram,0x0001035d26d8) */
/* WARNING: Removing unreachable block (ram,0x0001035d28e0) */
/* WARNING: Removing unreachable block (ram,0x0001035d2b88) */
/* WARNING: Removing unreachable block (ram,0x0001035d264c) */
/* WARNING: Removing unreachable block (ram,0x0001035d2800) */
/* WARNING: Removing unreachable block (ram,0x0001035d2b50) */
/* WARNING: Removing unreachable block (ram,0x0001035d29a4) */
/* WARNING: Removing unreachable block (ram,0x0001035d2ae0) */
/* WARNING: Removing unreachable block (ram,0x0001035d28fc) */
/* WARNING: Removing unreachable block (ram,0x0001035d2854) */
/* WARNING: Removing unreachable block (ram,0x0001035d29c0) */
/* WARNING: Removing unreachable block (ram,0x0001035d2734) */
/* WARNING: Removing unreachable block (ram,0x0001035d27e4) */
/* WARNING: Removing unreachable block (ram,0x0001035d28a8) */
/* WARNING: Removing unreachable block (ram,0x0001035d296c) */
/* WARNING: Removing unreachable block (ram,0x0001035d288c) */
/* WARNING: Removing unreachable block (ram,0x0001035d28c4) */
/* WARNING: Removing unreachable block (ram,0x0001035d2ce0) */

void FUN_1035d2468(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_1035d2de0(param_2,param_1,param_3,param_4);
        break;
      case 2:
        FUN_1035d2e74(param_2,param_1,param_3,param_4);
        break;
      case 3:
        FUN_1035d2f08(param_2,param_1,param_3,param_4);
        break;
      case 4:
        FUN_1035d2f9c(param_2,param_1,param_3,param_4);
        break;
      case 5:
        FUN_1035d3030(param_2,param_1,param_3,param_4);
        break;
      case 6:
        FUN_1035d30c4(param_2,param_1,param_3,param_4);
        break;
      case 7:
        func_0x000107c61428(param_1 + 0xa0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x168);
        lVar2 = param_1 + 0xa0;
        goto code_r0x0001035d24f8;
      case 8:
        FUN_1035d3158(param_2,param_1,param_3,param_4);
        break;
      case 9:
        FUN_1035d31ec(param_2,param_1,param_3,param_4);
        break;
      case 10:
        FUN_1035d3280(param_2,param_1,param_3,param_4);
        break;
      case 0xb:
        FUN_1035d3314(param_2,param_1,param_3,param_4);
        break;
      case 0xc:
        FUN_1035d33a8(param_2,param_1,param_3,param_4);
        break;
      case 0xd:
        FUN_1035d343c(param_2,param_1,param_3,param_4);
        break;
      case 0xe:
        FUN_1035d34d0(param_2,param_1,param_3,param_4);
        break;
      case 0xf:
        FUN_1035d3564(param_2,param_1,param_3,param_4);
        break;
      case 0x10:
        FUN_1035d35f8(param_2,param_1,param_3,param_4);
        break;
      case 0x11:
        FUN_1035d368c(param_2,param_1,param_3,param_4);
        break;
      case 0x12:
        FUN_1035d3720(param_2,param_1,param_3,param_4);
        break;
      case 0x13:
        FUN_1035d37b4(param_2,param_1,param_3,param_4);
        break;
      case 0x14:
        FUN_1035d3848(param_2,param_1,param_3,param_4);
        break;
      case 0x15:
        FUN_1035d38dc(param_2,param_1,param_3,param_4);
        break;
      case 0x16:
        FUN_1035d3970(param_2,param_1,param_3,param_4);
        break;
      case 0x17:
        FUN_1035d3a04(param_2,param_1,param_3,param_4);
        break;
      case 0x18:
        FUN_1035d3a98(param_2,param_1,param_3,param_4);
        break;
      case 0x19:
        FUN_1035d3b2c(param_2,param_1,param_3,param_4);
        break;
      case 0x1a:
        FUN_1035d3bc0(param_2,param_1,param_3,param_4);
        break;
      case 0x1b:
        FUN_1035d3c54(param_2,param_1,param_3,param_4);
        break;
      case 0x1c:
        FUN_1035d3ce8(param_2,param_1,param_3,param_4);
        break;
      case 0x1d:
        FUN_1035d3d7c(param_2,param_1,param_3,param_4);
        break;
      case 0x1e:
        FUN_1035d3e10(param_2,param_1,param_3,param_4);
        break;
      case 0x1f:
        FUN_1035d3ea4(param_2,param_1,param_3,param_4);
        break;
      case 0x20:
        FUN_1035d3f38(param_2,param_1,param_3,param_4);
        break;
      case 0x21:
        FUN_1035d3fcc(param_2,param_1,param_3,param_4);
        break;
      case 0x22:
        FUN_1035d4060(param_2,param_1,param_3,param_4);
        break;
      case 0x23:
        FUN_1035d40f4(param_2,param_1,param_3,param_4);
        break;
      case 0x24:
        FUN_1035d4188(param_2,param_1,param_3,param_4);
        break;
      case 0x25:
        FUN_1035d421c(param_2,param_1,param_3,param_4);
        break;
      case 0x26:
        FUN_1035d42b0(param_2,param_1,param_3,param_4);
        break;
      case 0x27:
        FUN_1035d4344(param_2,param_1,param_3,param_4);
        break;
      case 0x28:
        FUN_1035d43d8(param_2,param_1,param_3,param_4);
        break;
      case 0x29:
        FUN_1035d446c(param_2,param_1,param_3,param_4);
        break;
      case 0x2a:
        FUN_1035d4500(param_2,param_1,param_3,param_4);
        break;
      case 0x2b:
        FUN_1035d4594(param_2,param_1,param_3,param_4);
        break;
      case 0x2c:
        FUN_1035d4628(param_2,param_1,param_3,param_4);
        break;
      case 0x2d:
        FUN_1035d46bc(param_2,param_1,param_3,param_4);
        break;
      case 0x2e:
        FUN_1035d4750(param_2,param_1,param_3,param_4);
        break;
      case 0x2f:
        FUN_1035d47e4(param_2,param_1,param_3,param_4);
        break;
      case 0x30:
        FUN_1035d4878(param_2,param_1,param_3,param_4);
        break;
      case 0x31:
        FUN_1035d490c(param_2,param_1,param_3,param_4);
        break;
      case 0x32:
        FUN_1035d49a0(param_2,param_1,param_3,param_4);
        break;
      case 0x33:
        FUN_1035d4a34(param_2,param_1,param_3,param_4);
        break;
      case 0x34:
        FUN_1035d4ac8(param_2,param_1,param_3,param_4);
        break;
      case 0x35:
        FUN_1035d4b5c(param_2,param_1,param_3,param_4);
        break;
      case 0x36:
        func_0x000107c61428(param_1 + 0xb20,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0xb20;
        goto code_r0x0001035d24f8;
      case 0x37:
        func_0x000107c61428(param_1 + 0xb21,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0xb21;
        goto code_r0x0001035d24f8;
      case 0x38:
        FUN_1035d4bf0(param_2,param_1,param_3,param_4);
        break;
      case 0x39:
        FUN_1035d4c84(param_2,param_1,param_3,param_4);
        break;
      case 0x3a:
        FUN_1035d4d18(param_2,param_1,param_3,param_4);
        break;
      case 0x3b:
        func_0x000107c61428(param_1 + 0xc80,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0xc80;
        goto code_r0x0001035d24f8;
      case 0x3c:
        FUN_1035d4dac(param_2,param_1,param_3,param_4);
        break;
      case 0x3d:
        func_0x000107c61428(param_1 + 0xca0,auStack_68,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar2 = param_1 + 0xca0;
code_r0x0001035d24f8:
        (*pcVar3)(lVar2,param_3,param_4);
        func_0x000107c614a8(auStack_68);
        break;
      case 0x3e:
        FUN_1035d4e40(param_2,param_1,param_3,param_4);
        break;
      case 0x3f:
        FUN_1035d4ed4(param_2,param_1,param_3,param_4);
        break;
      case 0x40:
        FUN_1035d4f68(param_2,param_1,param_3,param_4);
        break;
      default:
        switch(uVar1) {
        case 0x41:
          FUN_1035d4ffc(param_2,param_1,param_3,param_4);
          break;
        case 0x42:
          FUN_1035d5090(param_2,param_1,param_3,param_4);
          break;
        case 0x43:
          FUN_1035d5124(param_2,param_1,param_3,param_4);
          break;
        case 0x44:
          FUN_1035d51b8(param_2,param_1,param_3,param_4);
          break;
        case 0x45:
          FUN_1035d524c(param_2,param_1,param_3,param_4);
          break;
        case 0x46:
          FUN_1035d52e0(param_2,param_1,param_3,param_4);
          break;
        case 0x47:
          FUN_1035d5374(param_2,param_1,param_3,param_4);
          break;
        case 0x48:
          FUN_1035d5408(param_2,param_1,param_3,param_4);
          break;
        case 0x49:
          FUN_1035d549c(param_2,param_1,param_3,param_4);
          break;
        case 0x4a:
          FUN_1035d5530(param_2,param_1,param_3,param_4);
          break;
        case 0x4b:
          FUN_1035d55c4(param_2,param_1,param_3,param_4);
          break;
        case 0x4c:
          FUN_1035d5648(param_2,param_1,param_3,param_4);
          break;
        case 0x4d:
          FUN_1035d56dc(param_2,param_1,param_3,param_4);
        }
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035d2de0; end: 1035d2e73;  */

void FUN_1035d2de0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x10,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d2e74; end: 1035d2f07;  */

void FUN_1035d2e74(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x28;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x28,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d2f08; end: 1035d2f9b;  */

void FUN_1035d2f08(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x40,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d2f9c; end: 1035d302f;  */

void FUN_1035d2f9c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x58;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x58,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3030; end: 1035d30c3;  */

void FUN_1035d3030(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x70;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x70,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d30c4; end: 1035d3157;  */

void FUN_1035d30c4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x88;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x88,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3158; end: 1035d31eb;  */

void FUN_1035d3158(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0xb0,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d31ec; end: 1035d327f;  */

void FUN_1035d31ec(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 200;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035e11f8();
  (*pcVar2)(param_2 + 200,&UNK_110675188,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3280; end: 1035d3313;  */

void FUN_1035d3280(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x168;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x168,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3314; end: 1035d33a7;  */

void FUN_1035d3314(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x180;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x180,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d33a8; end: 1035d343b;  */

void FUN_1035d33a8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x198;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001035e0d78();
  (*pcVar2)(param_2 + 0x198,&UNK_110674fc0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d343c; end: 1035d34cf;  */

void FUN_1035d343c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1a8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x1a8,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d34d0; end: 1035d3563;  */

void FUN_1035d34d0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1c0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x1c0,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3564; end: 1035d35f7;  */

void FUN_1035d3564(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1d8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x1d8,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d35f8; end: 1035d368b;  */

void FUN_1035d35f8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x1f0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001015718fc();
  (*pcVar2)(param_2 + 0x1f0,&UNK_11066ad20,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d368c; end: 1035d371f;  */

void FUN_1035d368c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x200;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x200,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3720; end: 1035d37b3;  */

void FUN_1035d3720(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x218;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x218,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d37b4; end: 1035d3847;  */

void FUN_1035d37b4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x230;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x230,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3848; end: 1035d38db;  */

void FUN_1035d3848(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x248;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035e11b8();
  (*pcVar2)(param_2 + 0x248,&UNK_11066cb18,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d38dc; end: 1035d396f;  */

void FUN_1035d38dc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x398;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x398,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3970; end: 1035d3a03;  */

void FUN_1035d3970(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x3b0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x3b0,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3a04; end: 1035d3a97;  */

void FUN_1035d3a04(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x3c8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x3c8,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3a98; end: 1035d3b2b;  */

void FUN_1035d3a98(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x3e0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x3e0,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3b2c; end: 1035d3bbf;  */

void FUN_1035d3b2c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x3f8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x3f8,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3bc0; end: 1035d3c53;  */

void FUN_1035d3bc0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x410;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x410,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3c54; end: 1035d3ce7;  */

void FUN_1035d3c54(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x428;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x428,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3ce8; end: 1035d3d7b;  */

void FUN_1035d3ce8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x440;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x440,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3d7c; end: 1035d3e0f;  */

void FUN_1035d3d7c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x458;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x458,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3e10; end: 1035d3ea3;  */

void FUN_1035d3e10(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x470;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x470,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3ea4; end: 1035d3f37;  */

void FUN_1035d3ea4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x488;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x488,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3f38; end: 1035d3fcb;  */

void FUN_1035d3f38(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x4a0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x4a0,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d3fcc; end: 1035d405f;  */

void FUN_1035d3fcc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x4b8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0x4b8,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4060; end: 1035d40f3;  */

void FUN_1035d4060(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x4d0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001035e0d38();
  (*pcVar2)(param_2 + 0x4d0,&UNK_11066b2b8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d40f4; end: 1035d4187;  */

void FUN_1035d40f4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x4e0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001035e0d38();
  (*pcVar2)(param_2 + 0x4e0,&UNK_11066b2b8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4188; end: 1035d421b;  */

void FUN_1035d4188(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x4f0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfec();
  (*pcVar2)(param_2 + 0x4f0,&UNK_110790c00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d421c; end: 1035d42af;  */

void FUN_1035d421c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x508;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035e1178();
  (*pcVar2)(param_2 + 0x508,&UNK_110673f68,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d42b0; end: 1035d4343;  */

void FUN_1035d42b0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x660;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035e1138();
  (*pcVar2)(param_2 + 0x660,&UNK_11066db80,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4344; end: 1035d43d7;  */

void FUN_1035d4344(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x760;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_1035e0b38();
  (*pcVar2)(param_2 + 0x760,&UNK_110673618,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d43d8; end: 1035d446b;  */

void FUN_1035d43d8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x768;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001035e0cf8();
  (*pcVar2)(param_2 + 0x768,&UNK_11066b448,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d446c; end: 1035d44ff;  */

void FUN_1035d446c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x778;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035e10f8();
  (*pcVar2)(param_2 + 0x778,&UNK_11066b6e0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4500; end: 1035d4593;  */

void FUN_1035d4500(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x8c0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x8c0,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4594; end: 1035d4627;  */

void FUN_1035d4594(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x8d8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035e10b8();
  (*pcVar2)(param_2 + 0x8d8,&UNK_11066ba18,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4628; end: 1035d46bb;  */

void FUN_1035d4628(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x950;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x950,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d46bc; end: 1035d474f;  */

void FUN_1035d46bc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x968;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0x968,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4750; end: 1035d47e3;  */

void FUN_1035d4750(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x980;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x980,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d47e4; end: 1035d4877;  */

void FUN_1035d47e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x998;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0x998,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4878; end: 1035d490b;  */

void FUN_1035d4878(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x9b0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001035e0b78();
  (*pcVar2)(param_2 + 0x9b0,&UNK_11066c308,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d490c; end: 1035d499f;  */

void FUN_1035d490c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x9b8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001035e0bb8();
  (*pcVar2)(param_2 + 0x9b8,&UNK_110674d40,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d49a0; end: 1035d4a33;  */

void FUN_1035d49a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x9c0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035e1078();
  (*pcVar2)(param_2 + 0x9c0,&UNK_11066d728,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4a34; end: 1035d4ac7;  */

void FUN_1035d4a34(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xad8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0xad8,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4ac8; end: 1035d4b5b;  */

void FUN_1035d4ac8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xaf0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0xaf0,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4b5c; end: 1035d4bef;  */

void FUN_1035d4b5c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb08;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015c5cfc();
  (*pcVar2)(param_2 + 0xb08,&UNK_110790a00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4bf0; end: 1035d4c83;  */

void FUN_1035d4bf0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb28;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x00010157193c();
  (*pcVar2)(param_2 + 0xb28,&UNK_110790980,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4c84; end: 1035d4d17;  */

void FUN_1035d4c84(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb40;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_1034bbb40();
  (*pcVar2)(param_2 + 0xb40,&UNK_11066d350,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4d18; end: 1035d4dab;  */

void FUN_1035d4d18(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xb48;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035e1038();
  (*pcVar2)(param_2 + 0xb48,&UNK_11066afb8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4dac; end: 1035d4e3f;  */

void FUN_1035d4dac(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xc88;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035e0ff8();
  (*pcVar2)(param_2 + 0xc88,&UNK_1106747a8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4e40; end: 1035d4ed3;  */

void FUN_1035d4e40(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xca8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x0001035e0cb8();
  (*pcVar2)(param_2 + 0xca8,&UNK_11066f990,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4ed4; end: 1035d4f67;  */

void FUN_1035d4ed4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xcb8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001015d5420();
  (*pcVar2)(param_2 + 0xcb8,&UNK_110790b00,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4f68; end: 1035d4ffb;  */

void FUN_1035d4f68(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xcd0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  FUN_103559c30();
  (*pcVar2)(param_2 + 0xcd0,&UNK_11066ffa0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d4ffc; end: 1035d508f;  */

void FUN_1035d4ffc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xce0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035e0fb8();
  (*pcVar2)(param_2 + 0xce0,&UNK_11066bbd0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d5090; end: 1035d5123;  */

void FUN_1035d5090(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xdd0;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x0001035e0bf8();
  (*pcVar2)(param_2 + 0xdd0,&UNK_110674410,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d5124; end: 1035d51b7;  */

void FUN_1035d5124(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xdd8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035e0f78();
  (*pcVar2)(param_2 + 0xdd8,&UNK_110672f88,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d51b8; end: 1035d524b;  */

void FUN_1035d51b8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xe38;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035e0f38();
  (*pcVar2)(param_2 + 0xe38,&UNK_110672d98,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1035d524c; end: 1035d52df;  */

void FUN_1035d524c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xe68;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x0001035e0ef8();
  (*pcVar2)(param_2 + 0xe68,&UNK_110675348,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}


