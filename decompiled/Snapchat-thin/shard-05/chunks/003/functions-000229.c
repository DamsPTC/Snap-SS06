/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d02134; end: 103d021c7;  */

void FUN_103d02134(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x60;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000103cdfb40();
  (*pcVar2)(param_2 + 0x60,&UNK_1106ff058,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d021c8; end: 103d0225b;  */

void FUN_103d021c8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x68;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103cdfc00();
  (*pcVar2)(param_2 + 0x68,&UNK_110700950,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d0225c; end: 103d022ef;  */

void FUN_103d0225c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x78;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103ce44b0();
  (*pcVar2)(param_2 + 0x78,&UNK_1106ffde8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d022f0; end: 103d02383;  */

void FUN_103d022f0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xd8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x180);
  func_0x000103cdfbc0();
  (*pcVar2)(param_2 + 0xd8,&UNK_1106fef40,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d02384; end: 103d02417;  */

void FUN_103d02384(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xe8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103d14d18();
  (*pcVar2)(param_2 + 0xe8,&UNK_1107000a8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d02418; end: 103d024ab;  */

void FUN_103d02418(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x108;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000103cdfb80();
  (*pcVar2)(param_2 + 0x108,&UNK_1106ffe70,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d024ac; end: 103d0288f;  */

void FUN_103d024ac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x21;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_120 [24];
  long lStack_108;
  undefined1 uStack_100;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined1 auStack_d8 [24];
  long lStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  uVar2 = *(ulong *)(param_1 + 0x10);
  uVar4 = *(ulong *)(param_1 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar8 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar8)(uVar2,uVar4,1,param_3,param_4);
    if (unaff_x21 != 0) goto LAB_103d02540;
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c61428(param_1 + 0x20,auStack_90,0,0);
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(ulong *)(param_1 + 0x28);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar8 = *(code **)(param_4 + 0x70);
    func_0x000107c61434(uVar4);
    (*pcVar8)(uVar2,uVar4,2,param_3,param_4);
    func_0x000107c6142c(uVar4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar6 = param_1 + 0x30;
  func_0x000107c61428(lVar6,auStack_a8,0,0);
  if (*(long *)(param_1 + 0x30) != 0) {
    uStack_b8 = *(undefined1 *)(param_1 + 0x38);
    pcVar8 = *(code **)(param_4 + 0x80);
    lStack_c0 = *(long *)(param_1 + 0x30);
    func_0x000103d1cc5c();
    (*pcVar8)(&lStack_c0,3,&UNK_1106fec70,lVar6,param_3,param_4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_103d02890(param_1,param_2,param_3,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  func_0x000107c61428(param_1 + 0x60,&lStack_c0,0,0);
  lVar6 = *(long *)(param_1 + 0x60);
  if (*(long *)(lVar6 + 0x10) != 0) {
    pcVar8 = *(code **)(param_4 + 0x118);
    func_0x000103cdfb40();
    func_0x000107c61434(lVar6);
    (*pcVar8)();
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c61428(param_1 + 0x68,auStack_d8,0,0);
  lVar7 = *(long *)(param_1 + 0x68);
  uVar3 = *(undefined1 *)(param_1 + 0x70);
  lVar6 = lVar7;
  func_0x000103d1d830(lVar7,uVar3);
  lVar5 = 0;
  func_0x000103d1d830(0,1);
  if (lVar6 != lVar5) {
    pcVar8 = *(code **)(param_4 + 0x80);
    lStack_f0 = lVar7;
    uStack_e8 = uVar3;
    func_0x000103cdfc00();
    (*pcVar8)(&lStack_f0,6,&UNK_110700950,lVar5,param_3,param_4);
  }
  FUN_103d02940(param_1,param_2,param_3,param_4);
  lVar6 = param_1 + 0xd8;
  func_0x000107c61428(lVar6,&lStack_f0,0,0);
  if (*(long *)(param_1 + 0xd8) != 0) {
    uStack_100 = *(undefined1 *)(param_1 + 0xe0);
    pcVar8 = *(code **)(param_4 + 0x80);
    lStack_108 = *(long *)(param_1 + 0xd8);
    func_0x000103cdfbc0();
    (*pcVar8)(&lStack_108,8,&UNK_1106fef40,lVar6,param_3,param_4);
  }
  FUN_103d02a04(param_1,param_2,param_3,param_4);
  func_0x000107c61428(param_1 + 0x108,&lStack_108,0,0);
  lVar6 = *(long *)(param_1 + 0x108);
  if (*(long *)(lVar6 + 0x10) != 0) {
    pcVar8 = *(code **)(param_4 + 0x118);
    func_0x000103cdfb80();
    func_0x000107c61434(lVar6);
    (*pcVar8)();
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c61428(param_1 + 0x110,auStack_120,0,0);
  uVar2 = *(ulong *)(param_1 + 0x110);
  uVar4 = *(ulong *)(param_1 + 0x118);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    return;
  }
  pcVar8 = *(code **)(param_4 + 0x70);
  func_0x000107c61434(uVar4);
  (*pcVar8)(uVar2,uVar4,0xb,param_3,param_4);
LAB_103d02540:
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 103d02890; end: 103d0293f;  */

void FUN_103d02890(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x40;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x58);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x50);
    uStack_78 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = (undefined4)*(undefined8 *)(param_1 + 0x48);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015efcec();
    (*pcVar2)(&uStack_78,4,&UNK_11078f958,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d02940; end: 103d02a03;  */

void FUN_103d02940(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x78;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_a8 = *(ulong *)(param_1 + 0x90);
  if (uStack_a8 >> 0x3c < 0xf) {
    uStack_b8 = *(undefined8 *)(param_1 + 0x80);
    uStack_c0 = *(undefined8 *)(param_1 + 0x78);
    uStack_b0 = *(undefined8 *)(param_1 + 0x88);
    uStack_98 = *(undefined8 *)(param_1 + 0xa0);
    uStack_a0 = *(undefined8 *)(param_1 + 0x98);
    uStack_88 = *(undefined8 *)(param_1 + 0xb0);
    uStack_90 = *(undefined8 *)(param_1 + 0xa8);
    uStack_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_80 = *(undefined8 *)(param_1 + 0xb8);
    uStack_68 = *(undefined8 *)(param_1 + 0xd0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103ce44b0();
    (*pcVar2)(&uStack_c0,7,&UNK_1106ffde8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d02a04; end: 103d02aaf;  */

void FUN_103d02a04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lStack_78;
  byte bStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xe8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_78 = *(long *)(param_1 + 0xe8);
  if (lStack_78 != 0) {
    bStack_70 = *(byte *)(param_1 + 0xf0) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x100);
    uStack_68 = *(undefined8 *)(param_1 + 0xf8);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103d14d18();
    (*pcVar2)(&lStack_78,9,&UNK_1107000a8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d02ab0; end: 103d03403;  */

undefined8 FUN_103d02ab0(long param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 auStack_570 [96];
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
  undefined1 auStack_4a8 [24];
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  ulong uStack_418;
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
  ulong uStack_3b8;
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
  ulong uStack_358;
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
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
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
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_e8,0,0);
  func_0x000107c61428(param_2 + 0x10,&uStack_370,0x20,0);
  uVar9 = *(ulong *)(param_1 + 0x10);
  if (uVar9 == *(ulong *)(param_2 + 0x10) && *(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18))
  {
    func_0x000107c614a8(&uStack_370);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_370);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x20,auStack_100,0,0);
  func_0x000107c61428(param_2 + 0x20,&uStack_370,0x20,0);
  uVar9 = *(ulong *)(param_1 + 0x20);
  if ((uVar9 == *(ulong *)(param_2 + 0x20)) &&
     (*(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28))) {
    func_0x000107c614a8(&uStack_370);
  }
  else {
    func_0x000107c605b8();
    func_0x000107c614a8(&uStack_370);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x30,auStack_118,0,0);
  lVar14 = *(long *)(param_1 + 0x30);
  func_0x000107c61428(param_2 + 0x30,auStack_130,0,0);
  lVar13 = *(long *)(param_2 + 0x30);
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (lVar13 < 4) {
      if (lVar13 < 2) {
        if (lVar13 == 0) {
          if (lVar14 != 0) {
            return 0;
          }
        }
        else if (lVar14 != 1) {
          return 0;
        }
      }
      else if (lVar13 == 2) {
        if (lVar14 != 2) {
          return 0;
        }
      }
      else if (lVar14 != 3) {
        return 0;
      }
    }
    else if (lVar13 < 6) {
      if (lVar13 == 4) {
        if (lVar14 != 4) {
          return 0;
        }
      }
      else if (lVar14 != 5) {
        return 0;
      }
    }
    else if (lVar13 == 6) {
      if (lVar14 != 6) {
        return 0;
      }
    }
    else if (lVar14 != 7) {
      return 0;
    }
  }
  else if (lVar14 != lVar13) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x40,auStack_148,0,0);
  func_0x000107c61428(param_2 + 0x40,auStack_160,0,0);
  lVar13 = *(long *)(param_1 + 0x40);
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  uVar9 = *(ulong *)(param_1 + 0x50);
  uVar12 = *(ulong *)(param_1 + 0x58);
  lVar14 = *(long *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar15 = *(ulong *)(param_2 + 0x50);
  uVar2 = *(ulong *)(param_2 + 0x58);
  if (uVar12 >> 0x3c < 0xf) {
    if (uVar2 >> 0x3c < 0xf) {
      if (lVar13 == lVar14) {
        func_0x0001015d316c(lVar13,uVar16,uVar9,uVar12);
        func_0x0001015d316c(lVar13,uVar1,uVar15,uVar2);
        lVar14 = lVar13;
        if ((int)uVar16 == (int)uVar1) {
          uVar10 = uVar9;
          func_0x000100e25fcc(uVar9,uVar12,uVar15,uVar2);
          func_0x0001015d38c8(lVar13,uVar1,uVar15,uVar2);
          if ((uVar10 & 1) == 0) goto LAB_103d02fd8;
          goto LAB_103d02c74;
        }
      }
      else {
        func_0x0001015d316c(lVar13,uVar16,uVar9,uVar12);
        func_0x0001015d316c(lVar14,uVar1,uVar15,uVar2);
      }
      func_0x0001015d38c8(lVar14,uVar1,uVar15,uVar2);
      goto LAB_103d02fd8;
    }
  }
  else if (0xe < uVar2 >> 0x3c) {
    func_0x0001015d316c(lVar13,uVar16,uVar9,uVar12);
    func_0x0001015d316c(lVar14,uVar1,uVar15,uVar2);
LAB_103d02c74:
    func_0x0001015d38c8(lVar13,uVar16,uVar9,uVar12);
    func_0x000107c61428(param_1 + 0x60,auStack_178,0,0);
    uVar15 = *(ulong *)(param_1 + 0x60);
    func_0x000107c61428(param_2 + 0x60,auStack_190,0,0);
    uVar16 = *(undefined8 *)(param_2 + 0x60);
    func_0x000107c61434(uVar15);
    func_0x000107c61434(uVar16);
    uVar9 = uVar15;
    FUN_103d0ceec(uVar15,uVar16);
    func_0x000107c6142c(uVar15);
    func_0x000107c6142c(uVar16);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    func_0x000107c61428(param_1 + 0x68,auStack_1a8,0,0);
    lVar13 = *(long *)(param_1 + 0x68);
    uVar6 = *(undefined1 *)(param_1 + 0x70);
    func_0x000107c61428(param_2 + 0x68,auStack_1c0,0,0);
    lVar14 = *(long *)(param_2 + 0x68);
    uVar7 = *(undefined1 *)(param_2 + 0x70);
    func_0x000103d1d830(lVar13,uVar6);
    func_0x000103d1d830(lVar14,uVar7);
    if (lVar13 != lVar14) {
      return 0;
    }
    func_0x000107c61428(param_1 + 0x78,auStack_298,0,0);
    func_0x000107c61428(param_2 + 0x78,auStack_2b0,0,0);
    uStack_348 = *(undefined8 *)(param_1 + 0xa0);
    uStack_350 = *(undefined8 *)(param_1 + 0x98);
    uStack_338 = *(undefined8 *)(param_1 + 0xb0);
    uStack_340 = *(undefined8 *)(param_1 + 0xa8);
    uStack_328 = *(undefined8 *)(param_1 + 0xc0);
    uStack_330 = *(undefined8 *)(param_1 + 0xb8);
    uStack_318 = *(undefined8 *)(param_1 + 0xd0);
    uStack_320 = *(undefined8 *)(param_1 + 200);
    uStack_368 = *(undefined8 *)(param_1 + 0x80);
    uStack_370 = *(undefined8 *)(param_1 + 0x78);
    uStack_358 = *(ulong *)(param_1 + 0x90);
    uStack_360 = *(undefined8 *)(param_1 + 0x88);
    uStack_378 = *(undefined8 *)(param_2 + 0xd0);
    uStack_380 = *(undefined8 *)(param_2 + 200);
    uStack_388 = *(undefined8 *)(param_2 + 0xc0);
    uStack_390 = *(undefined8 *)(param_2 + 0xb8);
    uStack_398 = *(undefined8 *)(param_2 + 0xb0);
    uStack_3a0 = *(undefined8 *)(param_2 + 0xa8);
    uStack_3a8 = *(undefined8 *)(param_2 + 0xa0);
    uStack_3b0 = *(undefined8 *)(param_2 + 0x98);
    uStack_3b8 = *(ulong *)(param_2 + 0x90);
    uStack_3c0 = *(undefined8 *)(param_2 + 0x88);
    uStack_3c8 = *(undefined8 *)(param_2 + 0x80);
    uStack_3d0 = *(undefined8 *)(param_2 + 0x78);
    uStack_310 = uStack_3d0;
    uStack_308 = uStack_3c8;
    uStack_300 = uStack_3c0;
    uStack_2f8 = uStack_3b8;
    uStack_2f0 = uStack_3b0;
    uStack_2e8 = uStack_3a8;
    uStack_2e0 = uStack_3a0;
    uStack_2d8 = uStack_398;
    uStack_2d0 = uStack_390;
    uStack_2c8 = uStack_388;
    uStack_2c0 = uStack_380;
    uStack_2b8 = uStack_378;
    uStack_280 = uStack_370;
    uStack_278 = uStack_368;
    uStack_270 = uStack_360;
    uStack_268 = uStack_358;
    uStack_260 = uStack_350;
    uStack_258 = uStack_348;
    uStack_250 = uStack_340;
    uStack_248 = uStack_338;
    uStack_240 = uStack_330;
    uStack_238 = uStack_328;
    uStack_230 = uStack_320;
    uStack_228 = uStack_318;
    uStack_220 = uStack_3d0;
    uStack_218 = uStack_3c8;
    uStack_210 = uStack_3c0;
    uStack_208 = uStack_3b8;
    uStack_200 = uStack_3b0;
    uStack_1f8 = uStack_3a8;
    uStack_1f0 = uStack_3a0;
    uStack_1e8 = uStack_398;
    uStack_1e0 = uStack_390;
    uStack_1d8 = uStack_388;
    uStack_1d0 = uStack_380;
    uStack_1c8 = uStack_378;
    if (uStack_358 >> 0x3c < 0xf) {
      if (0xe < uStack_3b8 >> 0x3c) goto LAB_103d03008;
      uStack_4e8 = *(undefined8 *)(param_2 + 0xa0);
      uStack_4f0 = *(undefined8 *)(param_2 + 0x98);
      uStack_4d8 = *(undefined8 *)(param_2 + 0xb0);
      uStack_4e0 = *(undefined8 *)(param_2 + 0xa8);
      uStack_4c8 = *(undefined8 *)(param_2 + 0xc0);
      uStack_4d0 = *(undefined8 *)(param_2 + 0xb8);
      uStack_4b8 = *(undefined8 *)(param_2 + 0xd0);
      uStack_4c0 = *(undefined8 *)(param_2 + 200);
      uStack_508 = *(undefined8 *)(param_2 + 0x80);
      uStack_510 = *(undefined8 *)(param_2 + 0x78);
      uStack_4f8 = *(undefined8 *)(param_2 + 0x90);
      uStack_500 = *(undefined8 *)(param_2 + 0x88);
      uStack_a8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_b0 = *(undefined8 *)(param_1 + 0x98);
      uStack_98 = *(undefined8 *)(param_1 + 0xb0);
      uStack_a0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_88 = *(undefined8 *)(param_1 + 0xc0);
      uStack_90 = *(undefined8 *)(param_1 + 0xb8);
      uStack_78 = *(undefined8 *)(param_1 + 0xd0);
      uStack_80 = *(undefined8 *)(param_1 + 200);
      uStack_c8 = *(undefined8 *)(param_1 + 0x80);
      uStack_d0 = *(undefined8 *)(param_1 + 0x78);
      uStack_b8 = *(undefined8 *)(param_1 + 0x90);
      uStack_c0 = *(undefined8 *)(param_1 + 0x88);
      uStack_430 = uStack_510;
      uStack_428 = uStack_508;
      uStack_420 = uStack_500;
      uStack_418 = uStack_4f8;
      uStack_410 = uStack_4f0;
      uStack_408 = uStack_4e8;
      uStack_400 = uStack_4e0;
      uStack_3f8 = uStack_4d8;
      uStack_3f0 = uStack_4d0;
      uStack_3e8 = uStack_4c8;
      uStack_3e0 = uStack_4c0;
      uStack_3d8 = uStack_4b8;
      FUN_103d0f578(&uStack_280,auStack_570,0x113000f38,&UNK_10dc76f20);
      FUN_103d0f578(&uStack_220,auStack_570,0x113000f38,&UNK_10dc76f20);
      puVar11 = &uStack_d0;
      FUN_103d0db5c(puVar11,&uStack_430);
      FUN_103d1ccb8(&uStack_510,0x113000f38,&UNK_10dc76f20);
      FUN_103d1ccb8(&uStack_370,0x113000f38,&UNK_10dc76f20);
      if (((ulong)puVar11 & 1) == 0) {
        return 0;
      }
    }
    else {
      if (uStack_3b8 >> 0x3c < 0xf) {
LAB_103d03008:
        uStack_430 = uStack_370;
        uStack_428 = uStack_368;
        uStack_420 = uStack_360;
        uStack_418 = uStack_358;
        uStack_410 = uStack_350;
        uStack_408 = uStack_348;
        uStack_400 = uStack_340;
        uStack_3f8 = uStack_338;
        uStack_3f0 = uStack_330;
        uStack_3e8 = uStack_328;
        uStack_3e0 = uStack_320;
        uStack_3d8 = uStack_318;
        FUN_103d0f578(&uStack_280,&uStack_d0,0x113000f38,&UNK_10dc76f20);
        FUN_103d0f578(&uStack_220,&uStack_d0,0x113000f38,&UNK_10dc76f20);
        FUN_103d1ccb8(&uStack_430,0x113000f40,&UNK_10dc7ad80);
        return 0;
      }
      uStack_408 = *(undefined8 *)(param_1 + 0xa0);
      uStack_410 = *(undefined8 *)(param_1 + 0x98);
      uStack_3f8 = *(undefined8 *)(param_1 + 0xb0);
      uStack_400 = *(undefined8 *)(param_1 + 0xa8);
      uStack_3e8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_3f0 = *(undefined8 *)(param_1 + 0xb8);
      uStack_3d8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_3e0 = *(undefined8 *)(param_1 + 200);
      uStack_428 = *(undefined8 *)(param_1 + 0x80);
      uStack_430 = *(undefined8 *)(param_1 + 0x78);
      uStack_418 = *(undefined8 *)(param_1 + 0x90);
      uStack_420 = *(undefined8 *)(param_1 + 0x88);
      FUN_103d0f578(&uStack_280,&uStack_d0,0x113000f38,&UNK_10dc76f20);
      FUN_103d0f578(&uStack_220,&uStack_d0,0x113000f38,&UNK_10dc76f20);
      FUN_103d1ccb8(&uStack_430,0x113000f38,&UNK_10dc76f20);
    }
    func_0x000107c61428(param_1 + 0xd8,&uStack_370,0,0);
    uVar15 = *(ulong *)(param_1 + 0xd8);
    cVar8 = *(char *)(param_1 + 0xe0);
    func_0x000107c61428(param_2 + 0xd8,&uStack_510,0,0);
    uVar9 = (ulong)(uVar15 != 0);
    if (cVar8 != '\x01') {
      uVar9 = uVar15;
    }
    if (*(char *)(param_2 + 0xe0) == '\x01') {
      if (*(ulong *)(param_2 + 0xd8) == 0) {
        if (uVar9 != 0) {
          return 0;
        }
      }
      else if (uVar9 != 1) {
        return 0;
      }
    }
    else if (uVar9 != *(ulong *)(param_2 + 0xd8)) {
      return 0;
    }
    func_0x000107c61428(param_1 + 0xe8,auStack_570,0,0);
    func_0x000107c61428(param_2 + 0xe8,auStack_448,0,0);
    uVar9 = *(ulong *)(param_1 + 0xe8);
    uVar1 = *(undefined8 *)(param_1 + 0xf0);
    uVar15 = *(ulong *)(param_1 + 0xf8);
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    lVar13 = *(long *)(param_2 + 0xe8);
    uVar4 = *(undefined8 *)(param_2 + 0xf0);
    uVar16 = *(undefined8 *)(param_2 + 0xf8);
    uVar5 = *(undefined8 *)(param_2 + 0x100);
    if (uVar9 == 0) {
      if (lVar13 == 0) {
        FUN_103d0dfe0(0,uVar1,uVar15,uVar3);
        FUN_103d0dfe0(0,uVar4,uVar16,uVar5);
LAB_103d03320:
        func_0x000103d0e014(uVar9,uVar1,uVar15,uVar3);
        func_0x000107c61428(param_1 + 0x108,auStack_460,0,0);
        uVar15 = *(ulong *)(param_1 + 0x108);
        func_0x000107c61428(param_2 + 0x108,auStack_478,0,0);
        uVar16 = *(undefined8 *)(param_2 + 0x108);
        func_0x000107c61434(uVar15);
        func_0x000107c61434(uVar16);
        uVar9 = uVar15;
        FUN_103cddff8(uVar15,uVar16);
        func_0x000107c6142c(uVar15);
        func_0x000107c6142c(uVar16);
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        func_0x000107c61428(param_1 + 0x110,auStack_490,0,0);
        func_0x000107c61428(param_2 + 0x110,auStack_4a8,0x20,0);
        uVar9 = *(ulong *)(param_1 + 0x110);
        if ((uVar9 == *(ulong *)(param_2 + 0x110)) &&
           (*(long *)(param_1 + 0x118) == *(long *)(param_2 + 0x118))) {
          func_0x000107c614a8(auStack_4a8);
        }
        else {
          func_0x000107c605b8();
          func_0x000107c614a8(auStack_4a8);
          if ((uVar9 & 1) == 0) {
            return 0;
          }
        }
        return 1;
      }
    }
    else if (lVar13 != 0) {
      FUN_103d0dfe0(uVar9,uVar1,uVar15,uVar3);
      FUN_103d0dfe0(lVar13,uVar4,uVar16,uVar5);
      uVar12 = uVar9;
      FUN_103d0d0a8(uVar9,lVar13);
      if (((uVar12 & 1) == 0) || ((((uint)uVar4 ^ (uint)uVar1) & 1) != 0)) {
        func_0x000103d0e014(lVar13,uVar4,uVar16,uVar5);
      }
      else {
        uVar12 = uVar15;
        func_0x000100e25fcc(uVar15,uVar3,uVar16,uVar5);
        func_0x000103d0e014(lVar13,uVar4,uVar16,uVar5);
        if ((uVar12 & 1) != 0) goto LAB_103d03320;
      }
      func_0x000103d0e014(uVar9,uVar1,uVar15,uVar3);
      return 0;
    }
    FUN_103d0dfe0(uVar9,uVar1,uVar15,uVar3);
    FUN_103d0dfe0(lVar13,uVar4,uVar16,uVar5);
    func_0x000103d0e014(uVar9,uVar1,uVar15,uVar3);
    func_0x000103d0e014(lVar13,uVar4,uVar16,uVar5);
    return 0;
  }
  func_0x0001015d316c(lVar13,uVar16,uVar9,uVar12);
  func_0x0001015d316c(lVar14,uVar1,uVar15,uVar2);
  func_0x0001015d38c8(lVar13,uVar16,uVar9,uVar12);
  lVar13 = lVar14;
  uVar16 = uVar1;
  uVar9 = uVar15;
  uVar12 = uVar2;
LAB_103d02fd8:
  func_0x0001015d38c8(lVar13,uVar16,uVar9,uVar12);
  return 0;
}



/* Entry: 103d03404; end: 103d03457;  */

void FUN_103d03404(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam00000001130024f0 != -1) {
    func_0x000107c61568(0x1130024f0,0x103d0181c);
  }
  uVar1 = uRam00000001130024f8;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103d03458; end: 103d034b3;  */

void FUN_103d03458(void)

{
  FUN_103d06940();
  return;
}



/* Entry: 103d034b4; end: 103d034eb;  */

uint FUN_103d034b4(long param_1,long param_2)

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
  func_0x000103d1c53c();
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



/* Entry: 103d034ec; end: 103d034f7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d034ec(long *param_1)

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
    FUN_103d02ab0(uVar25,uVar26);
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



/* Entry: 103d034f8; end: 103d03597;  */

/* WARNING: Possible PIC construction at 0x000103d03544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d03554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d03548) */
/* WARNING: Removing unreachable block (ram,0x000103d03558) */

void FUN_103d034f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130028f8 != -1) {
    func_0x000107c61568(0x1130028f8,FUN_103d017d4);
  }
  uVar5 = uRam000000011380f708;
  uVar4 = uRam000000011380f700;
  uVar3 = uRam000000011380f6f8;
  uVar2 = uRam000000011380f6f0;
  uVar1 = uRam000000011380f6e8;
  *param_1 = uRam000000011380f6e0;
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



/* Entry: 103d03598; end: 103d035ab;  */

void FUN_103d03598(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003460;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003460,&UNK_10dc7e458);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d035ac; end: 103d035e3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d035ac(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103d11aa4();
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



/* Entry: 103d035e4; end: 103d035ef;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d035e4(undefined8 *param_1,long *param_2)

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
    FUN_103d02ab0(uVar25,uVar26);
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



/* Entry: 103d035f0; end: 103d03637;  */

void FUN_103d035f0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7eb70,0x2a,2);
  uRam000000011380f718 = uStack_38;
  uRam000000011380f710 = uStack_40;
  uRam000000011380f728 = uStack_28;
  uRam000000011380f720 = uStack_30;
  uRam000000011380f738 = uStack_18;
  uRam000000011380f730 = uStack_20;
  return;
}



/* Entry: 103d03638; end: 103d0373b;  */

void FUN_103d03638(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 4) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015efcec();
LAB_103d036c0:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015efcec();
          goto LAB_103d036c0;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103d120ac();
          goto LAB_103d036c0;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103d0373c; end: 103d03807;  */

void FUN_103d0373c(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000103d120ac();
    (*pcVar2)(&lStack_50,1,&UNK_1106fed00,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_103d03808();
  if (unaff_x21 == 0) {
    FUN_103d03894();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103d03808; end: 103d03893;  */

void FUN_103d03808(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x58);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015efcec();
    (*pcVar1)(&uStack_60,3,&UNK_11078f958,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d03894; end: 103d0391f;  */

void FUN_103d03894(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x38);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015efcec();
    (*pcVar1)(&uStack_60,4,&UNK_11078f958,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d03920; end: 103d03977;  */

uint FUN_103d03920(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long alStack_150 [4];
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  plVar4 = alStack_150;
  lVar6 = param_1[5];
  lVar7 = param_1[4];
  uVar11 = param_1[7];
  uVar9 = param_1[6];
  lVar8 = param_2[5];
  lVar5 = param_2[4];
  uVar12 = param_2[7];
  lVar10 = param_2[6];
  lStack_b0 = lVar5;
  lStack_a8 = lVar8;
  lStack_a0 = lVar10;
  uStack_98 = uVar12;
  lStack_90 = lVar7;
  lStack_88 = lVar6;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  if (uVar11 >> 0x3c < 0xf) {
    if (0xe < uVar12 >> 0x3c) goto LAB_103d0dc40;
    if (lVar7 == lVar5) {
      if ((int)lVar6 != (int)lVar8) {
        FUN_103d0f578(&lStack_90,&lStack_130,0x112db8dc0,&UNK_10d969810);
        plVar4 = &lStack_b0;
LAB_103d0de8c:
        FUN_103d0f578(plVar4,&lStack_130,0x112db8dc0,&UNK_10d969810);
        lVar5 = lVar7;
        goto LAB_103d0dea0;
      }
      FUN_103d0f578(&lStack_90,&lStack_130,0x112db8dc0,&UNK_10d969810);
      FUN_103d0f578(&lStack_b0,&lStack_130,0x112db8dc0,&UNK_10d969810);
      uVar3 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,lVar10,uVar12);
      func_0x0001015d38c8(lVar7,lVar8,lVar10,uVar12);
      if ((uVar3 & 1) != 0) goto LAB_103d0dbf4;
    }
    else {
      FUN_103d0f578(&lStack_90,&lStack_130,0x112db8dc0,&UNK_10d969810);
      plVar4 = &lStack_b0;
LAB_103d0ddf0:
      FUN_103d0f578(plVar4,&lStack_130,0x112db8dc0,&UNK_10d969810);
LAB_103d0dea0:
      func_0x0001015d38c8(lVar5,lVar8,lVar10,uVar12);
    }
LAB_103d0deb4:
    func_0x0001015d38c8(lVar7,lVar6,uVar9,uVar11);
  }
  else if (uVar12 >> 0x3c < 0xf) {
LAB_103d0dc40:
    lStack_130 = lVar7;
    lStack_128 = lVar6;
    uStack_120 = uVar9;
    uStack_118 = uVar11;
    lStack_110 = lVar5;
    lStack_108 = lVar8;
    lStack_100 = lVar10;
    uStack_f8 = uVar12;
    FUN_103d0f578(&lStack_90,&lStack_d0,0x112db8dc0,&UNK_10d969810);
    plVar2 = &lStack_b0;
    plVar4 = &lStack_d0;
LAB_103d0dc7c:
    FUN_103d0f578(plVar2,plVar4,0x112db8dc0,&UNK_10d969810);
    FUN_103d1ccb8(&lStack_130,0x112fca6d0,&UNK_10dc3ab60);
  }
  else {
    FUN_103d0f578(&lStack_90,&lStack_130,0x112db8dc0,&UNK_10d969810);
    FUN_103d0f578(&lStack_b0,&lStack_130,0x112db8dc0,&UNK_10d969810);
LAB_103d0dbf4:
    func_0x0001015d38c8(lVar7,lVar6,uVar9,uVar11);
    lVar5 = *param_1;
    lVar6 = *param_2;
    if ((char)param_2[1] != '\x01') {
      if (lVar5 == lVar6) goto LAB_103d0dd30;
      goto LAB_103d0dec8;
    }
    if (lVar6 < 2) {
      if (lVar6 == 0) {
        if (lVar5 == 0) {
LAB_103d0dd30:
          lVar6 = param_1[9];
          lVar7 = param_1[8];
          uVar11 = param_1[0xb];
          uVar9 = param_1[10];
          lVar8 = param_2[9];
          lVar5 = param_2[8];
          uVar12 = param_2[0xb];
          lVar10 = param_2[10];
          lStack_f0 = lVar5;
          lStack_e8 = lVar8;
          lStack_e0 = lVar10;
          uStack_d8 = uVar12;
          lStack_d0 = lVar7;
          lStack_c8 = lVar6;
          uStack_c0 = uVar9;
          uStack_b8 = uVar11;
          if (uVar11 >> 0x3c < 0xf) {
            if (0xe < uVar12 >> 0x3c) goto LAB_103d0de24;
            if (lVar7 != lVar5) {
              FUN_103d0f578(&lStack_d0,&lStack_130,0x112db8dc0,&UNK_10d969810);
              plVar4 = &lStack_f0;
              goto LAB_103d0ddf0;
            }
            if ((int)lVar6 != (int)lVar8) {
              FUN_103d0f578(&lStack_d0,&lStack_130,0x112db8dc0,&UNK_10d969810);
              plVar4 = &lStack_f0;
              goto LAB_103d0de8c;
            }
            FUN_103d0f578(&lStack_d0,&lStack_130,0x112db8dc0,&UNK_10d969810);
            FUN_103d0f578(&lStack_f0,&lStack_130,0x112db8dc0,&UNK_10d969810);
            uVar3 = uVar9;
            func_0x000100e25fcc(uVar9,uVar11,lVar10,uVar12);
            func_0x0001015d38c8(lVar7,lVar8,lVar10,uVar12);
            if ((uVar3 & 1) == 0) goto LAB_103d0deb4;
          }
          else {
            if (uVar12 >> 0x3c < 0xf) {
LAB_103d0de24:
              lStack_130 = lVar7;
              lStack_128 = lVar6;
              uStack_120 = uVar9;
              uStack_118 = uVar11;
              lStack_110 = lVar5;
              lStack_108 = lVar8;
              lStack_100 = lVar10;
              uStack_f8 = uVar12;
              FUN_103d0f578(&lStack_d0,alStack_150,0x112db8dc0,&UNK_10d969810);
              plVar2 = &lStack_f0;
              goto LAB_103d0dc7c;
            }
            FUN_103d0f578(&lStack_d0,&lStack_130,0x112db8dc0,&UNK_10d969810);
            FUN_103d0f578(&lStack_f0,&lStack_130,0x112db8dc0,&UNK_10d969810);
          }
          func_0x0001015d38c8(lVar7,lVar6,uVar9,uVar11);
          lVar5 = param_1[2];
          func_0x000100e25fcc(lVar5,param_1[3],param_2[2],param_2[3]);
          uVar1 = (uint)lVar5;
          goto LAB_103d0decc;
        }
      }
      else if (lVar5 == 1) goto LAB_103d0dd30;
    }
    else if (lVar6 == 2) {
      if (lVar5 == 2) goto LAB_103d0dd30;
    }
    else if (lVar5 == 3) goto LAB_103d0dd30;
  }
LAB_103d0dec8:
  uVar1 = 0;
LAB_103d0decc:
  return uVar1 & 1;
}



/* Entry: 103d03978; end: 103d039a7;  */

undefined1  [16] FUN_103d03978(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103d039a8; end: 103d039db;  */

void FUN_103d039a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103d039dc; end: 103d039ef;  */

undefined1  [16] FUN_103d039dc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103d039ec;
  return auVar1;
}



/* Entry: 103d039f0; end: 103d03a03;  */

void FUN_103d039f0(void)

{
  FUN_103d03638();
  return;
}



/* Entry: 103d03a04; end: 103d03a43;  */

void FUN_103d03a04(void)

{
  FUN_103d0373c();
  return;
}



/* Entry: 103d03a44; end: 103d03a7b;  */

uint FUN_103d03a44(long param_1,long param_2)

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
  func_0x000103d1c4fc();
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



/* Entry: 103d03a7c; end: 103d03ad3;  */

uint FUN_103d03a7c(undefined8 *param_1)

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
  FUN_103d0db5c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103d03ad4; end: 103d03b73;  */

/* WARNING: Possible PIC construction at 0x000103d03b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d03b30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d03b24) */
/* WARNING: Removing unreachable block (ram,0x000103d03b34) */

void FUN_103d03ad4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002908 != -1) {
    func_0x000107c61568(0x113002908,FUN_103d035f0);
  }
  uVar5 = uRam000000011380f738;
  uVar4 = uRam000000011380f730;
  uVar3 = uRam000000011380f728;
  uVar2 = uRam000000011380f720;
  uVar1 = uRam000000011380f718;
  *param_1 = uRam000000011380f710;
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



/* Entry: 103d03b74; end: 103d03b87;  */

void FUN_103d03b74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003450;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003450,&UNK_10dc7e450);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d03b88; end: 103d03ca3;  */

void FUN_103d03b88(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d03ca4; end: 103d03d43;  */

uint FUN_103d03ca4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d0db5c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103d03d44; end: 103d03e53;  */

/* WARNING: Removing unreachable block (ram,0x000103d03de4) */
/* WARNING: Removing unreachable block (ram,0x000103d03e24) */

void FUN_103d03d44(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_103d03d98:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 < 4) {
    if (lVar1 != 1) {
      if (lVar1 == 2) {
        pcVar3 = *(code **)(param_3 + 0x150);
        goto LAB_103d03d80;
      }
      if (lVar1 == 3) {
        FUN_103d03e54();
      }
      goto LAB_103d03d98;
    }
    pcVar3 = *(code **)(param_3 + 0x150);
  }
  else {
    if (lVar1 == 4) {
      FUN_103d0406c();
      goto LAB_103d03d98;
    }
    if (lVar1 == 5) {
      pcVar3 = *(code **)(param_3 + 0x150);
      goto LAB_103d03d80;
    }
    if (lVar1 != 6) goto LAB_103d03d98;
    pcVar3 = *(code **)(param_3 + 0x150);
  }
LAB_103d03d80:
  (*pcVar3)();
  goto LAB_103d03d98;
}



/* Entry: 103d03e54; end: 103d0406b;  */

/* WARNING: Removing unreachable block (ram,0x000103d03fbc) */

void FUN_103d03e54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x21;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_110 [64];
  ulong uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0xf000000000000000;
  uVar10 = *(ulong *)(param_1 + 0x20);
  uVar9 = *(ulong *)(param_1 + 0x30);
  uVar4 = *(ulong *)(param_1 + 0x58);
  bVar2 = (uVar4 & 0x3000000000000000) != 0;
  lVar3 = param_1;
  if (((uVar4 >> 0x3d & 1) == 0) && (bVar2 || (uVar10 < 0xffffffff00000000 || 1 < uVar9))) {
    uStack_a0 = *(undefined8 *)(param_1 + 0x50);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uStack_a8 = *(undefined8 *)(param_1 + 0x48);
    uStack_b0 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(ulong *)(param_1 + 0x40);
    uStack_d0 = uVar10;
    uStack_c8 = uVar8;
    uStack_c0 = uVar9;
    uStack_b8 = uVar6;
    uStack_98 = uVar4;
    FUN_103d0f320(&uStack_d0,auStack_110);
    lVar3 = 0;
    FUN_103d1cc9c(0,0,0,0,0xf000000000000000);
    uStack_90 = uVar10 & 0xffffffff;
    uStack_80 = uVar9 & 0xff;
    uStack_88 = uVar8;
    uStack_78 = uVar6;
    uStack_70 = uVar5;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_103d14b20();
  (*pcVar7)(&uStack_90,&UNK_1106fff90,lVar3,param_3,param_4);
  uVar1 = uStack_70;
  uVar8 = uStack_78;
  uVar5 = uStack_80;
  uVar6 = uStack_88;
  uVar4 = uStack_90;
  if ((unaff_x21 == 0) && (uStack_70 >> 0x3c < 0xf)) {
    if (bVar2 || (uVar10 < 0xffffffff00000000 || 1 < uVar9)) {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_78,uStack_70);
      (*pcVar7)(param_3,param_4);
    }
    else {
      func_0x00010006c00c(uStack_78,uStack_70);
    }
    FUN_103d1cc9c(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
    uStack_c8 = *(undefined8 *)(param_1 + 0x28);
    uStack_d0 = *(ulong *)(param_1 + 0x20);
    uStack_b8 = *(undefined8 *)(param_1 + 0x38);
    uStack_c0 = *(undefined8 *)(param_1 + 0x30);
    uStack_a8 = *(undefined8 *)(param_1 + 0x48);
    uStack_b0 = *(undefined8 *)(param_1 + 0x40);
    uStack_98 = *(undefined8 *)(param_1 + 0x58);
    uStack_a0 = *(undefined8 *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0x20) = uVar4 & 0xffffffff;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(ulong *)(param_1 + 0x30) = uVar5 & 1;
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    *(ulong *)(param_1 + 0x40) = uVar1;
    *(undefined8 *)(param_1 + 0x58) = 0;
    FUN_103d1ccb8(&uStack_d0,0x113002518,&UNK_10dc7adc0);
  }
  else {
    FUN_103d1cc9c(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70);
  }
  return;
}



/* Entry: 103d0406c; end: 103d042ff;  */

/* WARNING: Removing unreachable block (ram,0x000103d04264) */

void FUN_103d0406c(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_170 [64];
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
  
  uVar14 = param_1[4];
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uVar15 = param_1[6];
  uVar10 = param_1[0xb];
  bVar6 = (uVar10 & 0x3000000000000000) != 0;
  puVar7 = param_1;
  if (((uVar10 >> 0x3d & 1) != 0) && (bVar6 || (uVar14 < 0xffffffff00000000 || 1 < uVar15))) {
    uVar1 = param_1[9];
    uVar3 = param_1[10];
    uVar2 = param_1[7];
    uVar4 = param_1[8];
    uVar13 = param_1[5];
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_f0 = uVar14;
    uStack_e8 = uVar13;
    uStack_e0 = uVar15;
    uStack_d8 = uVar2;
    uStack_d0 = uVar4;
    uStack_c8 = uVar1;
    uStack_c0 = uVar3;
    uStack_b8 = uVar10;
    FUN_103d0f320(&uStack_f0,auStack_170);
    puVar7 = &uStack_130;
    FUN_103d1ccb8(puVar7,0x113003618,&UNK_10dc7eb20);
    uStack_b0 = uVar14;
    uStack_a8 = uVar13;
    uStack_a0 = uVar15;
    uStack_98 = uVar2;
    uStack_90 = uVar4;
    uStack_88 = uVar1;
    uStack_80 = uVar3;
    uStack_78 = uVar10 & 0xdfffffffffffffff;
  }
  pcVar12 = *(code **)(param_4 + 0x198);
  FUN_103d14c1c();
  (*pcVar12)(&uStack_b0,&UNK_110700018,puVar7,param_3,param_4);
  uVar5 = uStack_78;
  uVar13 = uStack_80;
  uVar4 = uStack_88;
  uVar3 = uStack_90;
  uVar2 = uStack_98;
  uVar1 = uStack_a0;
  uVar10 = uStack_a8;
  if (unaff_x21 == 0) {
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    uStack_d8 = uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    uStack_b8 = uStack_78;
    uStack_c0 = uStack_80;
    if (uStack_88 != 0) {
      uVar11 = uStack_b0 & 0xffffffff;
      if (bVar6 || (uVar14 < 0xffffffff00000000 || 1 < uVar15)) {
        pcVar12 = *(code **)(param_4 + 8);
        uStack_128 = uStack_a8;
        uStack_130 = uStack_b0;
        uStack_118 = uStack_98;
        uStack_120 = uStack_a0;
        uStack_108 = uStack_88;
        uStack_110 = uStack_90;
        uStack_f8 = uStack_78;
        uStack_100 = uStack_80;
        func_0x000103d0f354(&uStack_130,auStack_170);
        (*pcVar12)(param_3,param_4);
      }
      else {
        uStack_128 = uStack_a8;
        uStack_130 = uStack_b0;
        uStack_118 = uStack_98;
        uStack_120 = uStack_a0;
        uStack_108 = uStack_88;
        uStack_110 = uStack_90;
        uStack_f8 = uStack_78;
        uStack_100 = uStack_80;
        func_0x000103d0f354(&uStack_130,auStack_170);
      }
      FUN_103d1ccb8(&uStack_b0,0x113003618,&UNK_10dc7eb20);
      uStack_128 = param_1[5];
      uStack_130 = param_1[4];
      uStack_118 = param_1[7];
      uStack_120 = param_1[6];
      uStack_108 = param_1[9];
      uStack_110 = param_1[8];
      uStack_f8 = param_1[0xb];
      uStack_100 = param_1[10];
      param_1[4] = uVar11;
      param_1[5] = uVar10;
      param_1[6] = uVar1 & 1;
      param_1[10] = uVar13;
      param_1[9] = uVar4;
      param_1[8] = uVar3;
      param_1[7] = uVar2;
      param_1[0xb] = uVar5 & 0xcfffffffffffffff | 0x2000000000000000;
      uVar8 = 0x113002518;
      puVar9 = &UNK_10dc7adc0;
      puVar7 = &uStack_130;
      goto LAB_103d0419c;
    }
  }
  uVar8 = 0x113003618;
  puVar9 = &UNK_10dc7eb20;
  puVar7 = &uStack_b0;
LAB_103d0419c:
  FUN_103d1ccb8(puVar7,uVar8,puVar9);
  return;
}



/* Entry: 103d04300; end: 103d0444f;  */

void FUN_103d04300(undefined8 param_1,undefined8 param_2,long param_3)

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
      if ((unaff_x20[4] < 0xffffffff00000000 || 1 < unaff_x20[6]) ||
          (unaff_x20[0xb] & 0x3000000000000000) != 0) {
        if ((unaff_x20[0xb] >> 0x3d & 1) == 0) {
          FUN_103d04450();
        }
        else {
          FUN_103d04500();
        }
        if (unaff_x21 != 0) {
          return;
        }
      }
      uVar2 = unaff_x20[0xd];
      uVar1 = unaff_x20[0xc] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[0xc],uVar2,5,param_2,param_3), unaff_x21 == 0)) {
        uVar2 = unaff_x20[0xf];
        uVar1 = unaff_x20[0xe] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if ((uVar1 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[0xe],uVar2,6,param_2,param_3), unaff_x21 == 0))
        {
          func_0x000100076224(param_1,unaff_x20[0x10],unaff_x20[0x11],param_2,param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 103d04450; end: 103d044ff;  */

void FUN_103d04450(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(ulong *)(param_1 + 0x20);
  uStack_58 = *(ulong *)(param_1 + 0x30);
  if (((*(ulong *)(param_1 + 0x58) >> 0x3d & 1) == 0) &&
     ((*(ulong *)(param_1 + 0x58) & 0x3000000000000000) != 0 ||
      (uStack_68 < 0xffffffff00000000 || 1 < uStack_58))) {
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d14b20();
    (*pcVar1)(&uStack_68,3,&UNK_1106fff90,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103d04500);
  (*pcVar1)();
}



/* Entry: 103d04500; end: 103d045bb;  */

void FUN_103d04500(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_80 = *(ulong *)(param_1 + 0x20);
  uStack_70 = *(ulong *)(param_1 + 0x30);
  uStack_48 = *(ulong *)(param_1 + 0x58);
  if (((uStack_48 >> 0x3d & 1) != 0) &&
     ((uStack_48 & 0x3000000000000000) != 0 || (uStack_80 < 0xffffffff00000000 || 1 < uStack_70))) {
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = uStack_48 & 0xdfffffffffffffff;
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d14c1c();
    (*pcVar1)(&uStack_80,4,&UNK_110700018,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103d045bc);
  (*pcVar1)();
}



/* Entry: 103d045bc; end: 103d04623;  */

uint FUN_103d045bc(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined4 auStack_280 [2];
  ulong uStack_278;
  undefined1 uStack_270;
  ulong uStack_268;
  ulong uStack_260;
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
  
  puVar3 = (ulong *)0x0;
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uStack_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_a8 = param_1[7];
    uStack_b0 = param_1[6];
    uStack_98 = param_1[9];
    uStack_a0 = param_1[8];
    uStack_88 = param_1[0xb];
    uStack_90 = param_1[10];
    uStack_178 = param_1[5];
    uStack_180 = param_1[4];
    uStack_168 = param_1[7];
    uStack_170 = param_1[6];
    uStack_f8 = param_2[5];
    uStack_100 = param_2[4];
    uStack_e8 = param_2[7];
    uStack_f0 = param_2[6];
    uStack_d8 = param_2[9];
    uStack_e0 = param_2[8];
    uStack_c8 = param_2[0xb];
    uStack_d0 = param_2[10];
    uStack_1b8 = param_2[5];
    uStack_1c0 = param_2[4];
    uStack_1a8 = param_2[7];
    uStack_1b0 = param_2[6];
    uStack_158 = param_1[9];
    uStack_160 = param_1[8];
    uStack_148 = param_1[0xb];
    uStack_150 = param_1[10];
    uStack_198 = param_2[9];
    uStack_1a0 = param_2[8];
    uStack_188 = param_2[0xb];
    uStack_190 = param_2[10];
    uStack_140 = uStack_1c0;
    uStack_138 = uStack_1b8;
    uStack_130 = uStack_1b0;
    uStack_128 = uStack_1a8;
    uStack_120 = uStack_1a0;
    uStack_118 = uStack_198;
    uStack_110 = uStack_190;
    uStack_108 = uStack_188;
    if (((uStack_180 < 0xffffffff00000000) || (1 < uStack_170)) ||
       ((uStack_148 & 0x3000000000000000) != 0)) {
      if (((0xfffffffeffffffff < uStack_1c0) && (uStack_1b0 < 2)) &&
         ((uStack_188 & 0x3000000000000000) == 0)) goto LAB_103d0e438;
      uStack_238 = param_2[5];
      uStack_240 = param_2[4];
      uStack_228 = param_2[7];
      uStack_230 = param_2[6];
      uStack_218 = param_2[9];
      uStack_220 = param_2[8];
      uStack_208 = param_2[0xb];
      uStack_210 = param_2[10];
      if ((uStack_148 >> 0x3d & 1) == 0) {
        auStack_280[0] = (undefined4)uStack_180;
        uStack_270 = (undefined1)uStack_170;
        uStack_278 = uStack_178;
        uStack_268 = uStack_168;
        uStack_260 = uStack_160;
        if ((uStack_208 >> 0x3d & 1) != 0) {
LAB_103d0e578:
          FUN_103d0f578(&uStack_c0,&uStack_200,0x113002518,&UNK_10dc7adc0);
          FUN_103d0f578(&uStack_100,&uStack_200,0x113002518,&UNK_10dc7adc0);
          FUN_103d1ccb8(&uStack_240,0x113002518,&UNK_10dc7adc0);
          FUN_103d1ccb8(&uStack_180,0x113002518,&UNK_10dc7adc0);
          goto LAB_103d0e4a8;
        }
        uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_240);
        uStack_70 = CONCAT71(uStack_70._1_7_,(char)uStack_230);
        uStack_78 = uStack_238;
        uStack_68 = uStack_228;
        uStack_60 = uStack_220;
        FUN_103d0f578(&uStack_c0,&uStack_200,0x113002518,&UNK_10dc7adc0);
        FUN_103d0f578(&uStack_100,&uStack_200,0x113002518,&UNK_10dc7adc0);
        FUN_103d0e0f4(auStack_280,&uStack_80);
      }
      else {
        uStack_48 = uStack_148 & 0xdfffffffffffffff;
        uStack_80 = uStack_180;
        uStack_78 = uStack_178;
        uStack_70 = uStack_170;
        uStack_68 = uStack_168;
        uStack_60 = uStack_160;
        uStack_58 = uStack_158;
        uStack_50 = uStack_150;
        if ((uStack_208 >> 0x3d & 1) == 0) goto LAB_103d0e578;
        uStack_1c8 = uStack_208 & 0xdfffffffffffffff;
        uStack_200 = uStack_240;
        uStack_1f8 = uStack_238;
        uStack_1f0 = uStack_230;
        uStack_1e8 = uStack_228;
        uStack_1e0 = uStack_220;
        uStack_1d8 = uStack_218;
        uStack_1d0 = uStack_210;
        FUN_103d0f578(&uStack_c0,auStack_280,0x113002518,&UNK_10dc7adc0);
        FUN_103d0f578(&uStack_100,auStack_280,0x113002518,&UNK_10dc7adc0);
        puVar3 = &uStack_80;
        FUN_103d0e178(puVar3,&uStack_200);
      }
      FUN_103d1ccb8(&uStack_240,0x113002518,&UNK_10dc7adc0);
      FUN_103d1ccb8(&uStack_180,0x113002518,&UNK_10dc7adc0);
      if (((ulong)puVar3 & 1) != 0) goto LAB_103d0e3ac;
    }
    else if (((uStack_1c0 < 0xffffffff00000000) || (1 < uStack_1b0)) ||
            ((uStack_188 & 0x3000000000000000) != 0)) {
LAB_103d0e438:
      uStack_200 = uStack_180;
      uStack_1f8 = uStack_178;
      uStack_1f0 = uStack_170;
      uStack_1e8 = uStack_168;
      uStack_1e0 = uStack_160;
      uStack_1d8 = uStack_158;
      uStack_1d0 = uStack_150;
      uStack_1c8 = uStack_148;
      FUN_103d0f578(&uStack_c0,&uStack_80,0x113002518,&UNK_10dc7adc0);
      FUN_103d0f578(&uStack_100,&uStack_80,0x113002518,&UNK_10dc7adc0);
      FUN_103d1ccb8(&uStack_200,0x113003610,&UNK_10dc7eb18);
    }
    else {
      uStack_1f8 = param_1[5];
      uStack_200 = param_1[4];
      uStack_1e8 = param_1[7];
      uStack_1f0 = param_1[6];
      uStack_1d8 = param_1[9];
      uStack_1e0 = param_1[8];
      uStack_1c8 = param_1[0xb];
      uStack_1d0 = param_1[10];
      FUN_103d0f578(&uStack_c0,&uStack_80,0x113002518,&UNK_10dc7adc0);
      FUN_103d0f578(&uStack_100,&uStack_80,0x113002518,&UNK_10dc7adc0);
      FUN_103d1ccb8(&uStack_200,0x113002518,&UNK_10dc7adc0);
LAB_103d0e3ac:
      uVar2 = param_1[0xc];
      if (((uVar2 == param_2[0xc]) && (param_1[0xd] == param_2[0xd])) ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
        uVar2 = param_1[0xe];
        if (((uVar2 == param_2[0xe]) && (param_1[0xf] == param_2[0xf])) ||
           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
          uVar2 = param_1[0x10];
          func_0x000100e25fcc(uVar2,param_1[0x11],param_2[0x10],param_2[0x11]);
          uVar1 = (uint)uVar2;
          goto LAB_103d0e4ac;
        }
      }
    }
  }
LAB_103d0e4a8:
  uVar1 = 0;
LAB_103d0e4ac:
  return uVar1 & 1;
}



/* Entry: 103d04624; end: 103d04653;  */

undefined1  [16] FUN_103d04624(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x80);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x80),
                      *(undefined8 *)(unaff_x20 + 0x88));
  return auVar1;
}



/* Entry: 103d04654; end: 103d04687;  */

void FUN_103d04654(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  *(undefined8 *)(unaff_x20 + 0x80) = param_1;
  *(undefined8 *)(unaff_x20 + 0x88) = param_2;
  return;
}



/* Entry: 103d04688; end: 103d0469b;  */

undefined1  [16] FUN_103d04688(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x80;
  auVar1._0_8_ = 0x103d04698;
  return auVar1;
}



/* Entry: 103d0469c; end: 103d046af;  */

void FUN_103d0469c(void)

{
  FUN_103d03d44();
  return;
}



/* Entry: 103d046b0; end: 103d046ff;  */

void FUN_103d046b0(void)

{
  FUN_103d04300();
  return;
}



/* Entry: 103d04700; end: 103d04703;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d04700(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d04704; end: 103d0473b;  */

uint FUN_103d04704(long param_1,long param_2)

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
  func_0x000103d1c4bc();
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



/* Entry: 103d0473c; end: 103d047bb;  */

uint FUN_103d0473c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_28 = param_1[0x11];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_b8 = unaff_x20[0x11];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  FUN_103d0e260(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 103d047bc; end: 103d0485b;  */

/* WARNING: Possible PIC construction at 0x000103d04808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d04818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d0480c) */
/* WARNING: Removing unreachable block (ram,0x000103d0481c) */

void FUN_103d047bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002920 != -1) {
    func_0x000107c61568(0x113002920,0x103d03cfc);
  }
  uVar5 = uRam000000011380f768;
  uVar4 = uRam000000011380f760;
  uVar3 = uRam000000011380f758;
  uVar2 = uRam000000011380f750;
  uVar1 = uRam000000011380f748;
  *param_1 = uRam000000011380f740;
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



/* Entry: 103d0485c; end: 103d04897;  */

void FUN_103d0485c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003440;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003440,&UNK_10dc7e448);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d04898; end: 103d049d3;  */

void FUN_103d04898(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_108 [72];
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
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_38 = unaff_x20[0x11];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  func_0x000107c6068c(auStack_108,0);
  func_0x000107c5fa50(auStack_108,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d049d4; end: 103d04a53;  */

uint FUN_103d049d4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_b8 = param_1[0x11];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_28 = param_2[0x11];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_103d0e260(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 103d04a54; end: 103d04a9b;  */

void FUN_103d04a54(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7eb00,0x13,2);
  uRam000000011380f778 = uStack_38;
  uRam000000011380f770 = uStack_40;
  uRam000000011380f788 = uStack_28;
  uRam000000011380f780 = uStack_30;
  uRam000000011380f798 = uStack_18;
  uRam000000011380f790 = uStack_20;
  return;
}



/* Entry: 103d04a9c; end: 103d04b6f;  */

/* WARNING: Removing unreachable block (ram,0x000103d04b6c) */

void FUN_103d04a9c(undefined8 param_1,long param_2,long param_3)

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
        (**(code **)(param_3 + 0x48))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103d120ac();
        (*pcVar4)(unaff_x20 + 8,&UNK_1106fed00,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103d04b70; end: 103d04c2b;  */

void FUN_103d04b70(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  uVar1 = (ulong)*unaff_x20;
  if ((*unaff_x20 == 0) || ((**(code **)(param_3 + 0x18))(uVar1,1,param_2,param_3), unaff_x21 == 0))
  {
    if (*(long *)(unaff_x20 + 2) != 0) {
      uStack_48 = (undefined1)unaff_x20[4];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = *(long *)(unaff_x20 + 2);
      func_0x000103d120ac();
      (*pcVar2)(&lStack_50,2,&UNK_1106fed00,uVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 6),*(undefined8 *)(unaff_x20 + 8),
                        param_2,param_3);
  }
  return;
}



/* Entry: 103d04c2c; end: 103d04c83;  */

void FUN_103d04c2c(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 8) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 6) = 0;
  return;
}



/* Entry: 103d04c84; end: 103d04cab;  */

void FUN_103d04c84(void)

{
  FUN_103d04a9c();
  return;
}



/* Entry: 103d04cac; end: 103d04ce3;  */

uint FUN_103d04cac(long param_1,long param_2)

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
  func_0x000103d1c47c();
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



/* Entry: 103d04ce4; end: 103d04d2b;  */

uint FUN_103d04ce4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_103d0e0f4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103d04d2c; end: 103d04dcb;  */

/* WARNING: Possible PIC construction at 0x000103d04d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d04d88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d04d7c) */
/* WARNING: Removing unreachable block (ram,0x000103d04d8c) */

void FUN_103d04d2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002930 != -1) {
    func_0x000107c61568(0x113002930,FUN_103d04a54);
  }
  uVar5 = uRam000000011380f798;
  uVar4 = uRam000000011380f790;
  uVar3 = uRam000000011380f788;
  uVar2 = uRam000000011380f780;
  uVar1 = uRam000000011380f778;
  *param_1 = uRam000000011380f770;
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



/* Entry: 103d04dcc; end: 103d04ddf;  */

void FUN_103d04dcc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003430;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003430,&UNK_10dc7e440);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d04de0; end: 103d04f03;  */

void FUN_103d04de0(undefined8 param_1,undefined8 param_2)

{
  undefined4 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_50 = *(undefined8 *)(unaff_x20 + 2);
  uStack_48 = *(undefined1 *)(unaff_x20 + 4);
  uStack_38 = *(undefined8 *)(unaff_x20 + 8);
  uStack_40 = *(undefined8 *)(unaff_x20 + 6);
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d04f04; end: 103d04f93;  */

uint FUN_103d04f04(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d0e0f4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103d04f94; end: 103d05097;  */

/* WARNING: Removing unreachable block (ram,0x000103d0506c) */

void FUN_103d04f94(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x48);
          goto LAB_103d04ffc;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103d120ac();
          (*pcVar4)(unaff_x20 + 8,&UNK_1106fed00,lVar1,param_2,param_3);
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x90);
        }
        else {
          if (lVar1 != 4) goto LAB_103d0500c;
          pcVar4 = *(code **)(param_3 + 0x150);
        }
LAB_103d04ffc:
        (*pcVar4)();
      }
LAB_103d0500c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103d05098; end: 103d051a3;  */

void FUN_103d05098(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_50;
  undefined1 uStack_48;
  
  uVar2 = (ulong)*unaff_x20;
  if ((*unaff_x20 == 0) || ((**(code **)(param_3 + 0x18))(uVar2,1,param_2,param_3), unaff_x21 == 0))
  {
    if (*(long *)(unaff_x20 + 2) != 0) {
      uStack_48 = (undefined1)unaff_x20[4];
      pcVar3 = *(code **)(param_3 + 0x80);
      lStack_50 = *(long *)(unaff_x20 + 2);
      func_0x000103d120ac();
      (*pcVar3)(&lStack_50,2,&UNK_1106fed00,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    if ((*(long *)(unaff_x20 + 6) == 0) ||
       ((**(code **)(param_3 + 0x30))(*(long *)(unaff_x20 + 6),3,param_2,param_3), unaff_x21 == 0))
    {
      uVar1 = *(ulong *)(unaff_x20 + 10);
      uVar2 = *(ulong *)(unaff_x20 + 8) & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar2 = uVar1 >> 0x38 & 0xf;
      }
      if ((uVar2 == 0) ||
         ((**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 8),uVar1,4,param_2,param_3),
         unaff_x21 == 0)) {
        func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0xc),
                            *(undefined8 *)(unaff_x20 + 0xe),param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 103d051a4; end: 103d05207;  */

void FUN_103d051a4(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0xe000000000000000;
  *(undefined8 *)(param_1 + 0xe) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return;
}



/* Entry: 103d05208; end: 103d0522f;  */

void FUN_103d05208(void)

{
  FUN_103d04f94();
  return;
}



/* Entry: 103d05230; end: 103d05267;  */

uint FUN_103d05230(long param_1,long param_2)

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
  func_0x000103d1c43c();
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



/* Entry: 103d05268; end: 103d052af;  */

uint FUN_103d05268(undefined8 *param_1)

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
  FUN_103d0e178(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103d052b0; end: 103d0534f;  */

/* WARNING: Possible PIC construction at 0x000103d052fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d0530c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d05300) */
/* WARNING: Removing unreachable block (ram,0x000103d05310) */

void FUN_103d052b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002940 != -1) {
    func_0x000107c61568(0x113002940,0x103d04f4c);
  }
  uVar5 = uRam000000011380f7c8;
  uVar4 = uRam000000011380f7c0;
  uVar3 = uRam000000011380f7b8;
  uVar2 = uRam000000011380f7b0;
  uVar1 = uRam000000011380f7a8;
  *param_1 = uRam000000011380f7a0;
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



/* Entry: 103d05350; end: 103d05363;  */

void FUN_103d05350(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003420;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003420,&UNK_10dc7e438);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d05364; end: 103d05397;  */

void FUN_103d05364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d05398; end: 103d0549b;  */

void FUN_103d05398(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d0549c; end: 103d0552b;  */

uint FUN_103d0549c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d0e178(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103d0552c; end: 103d055ff;  */

/* WARNING: Removing unreachable block (ram,0x000103d055fc) */

void FUN_103d0552c(undefined8 param_1,long param_2,long param_3)

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
        func_0x000103d121ec();
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



/* Entry: 103d05600; end: 103d056c7;  */

void FUN_103d05600(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_7 + 0x118);
    uVar1 = param_1;
    func_0x000103d121ec();
    (*pcVar2)(param_2,1,&UNK_110700130,uVar1,param_6,param_7);
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



/* Entry: 103d056c8; end: 103d0571f;  */

void FUN_103d056c8(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 103d05720; end: 103d0575b;  */

void FUN_103d05720(void)

{
  FUN_103d0552c();
  return;
}



/* Entry: 103d0575c; end: 103d05793;  */

uint FUN_103d0575c(long param_1,long param_2)

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
  func_0x000103d1c3fc();
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



/* Entry: 103d05794; end: 103d05817;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d05794(undefined8 *param_1)

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
  FUN_103d0d0a8(uVar12,*param_1);
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



/* Entry: 103d05818; end: 103d058b7;  */

/* WARNING: Possible PIC construction at 0x000103d05864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d05874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d05868) */
/* WARNING: Removing unreachable block (ram,0x000103d05878) */

void FUN_103d05818(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002950 != -1) {
    func_0x000107c61568(0x113002950,0x103d054e4);
  }
  uVar5 = uRam000000011380f7f8;
  uVar4 = uRam000000011380f7f0;
  uVar3 = uRam000000011380f7e8;
  uVar2 = uRam000000011380f7e0;
  uVar1 = uRam000000011380f7d8;
  *param_1 = uRam000000011380f7d0;
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



/* Entry: 103d058b8; end: 103d058cb;  */

void FUN_103d058b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003410;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003410,&UNK_10dc7e430);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d058cc; end: 103d058ff;  */

void FUN_103d058cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d05900; end: 103d05a13;  */

void FUN_103d05900(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d05a14; end: 103d05a93;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d05a14(ulong *param_1,undefined8 *param_2)

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
  FUN_103d0d0a8(uVar18,*param_2);
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



/* Entry: 103d05a94; end: 103d05adb;  */

void FUN_103d05a94(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7ea50,0x13,2);
  uRam000000011380f808 = uStack_38;
  uRam000000011380f800 = uStack_40;
  uRam000000011380f818 = uStack_28;
  uRam000000011380f810 = uStack_30;
  uRam000000011380f828 = uStack_18;
  uRam000000011380f820 = uStack_20;
  return;
}



/* Entry: 103d05adc; end: 103d05baf;  */

/* WARNING: Removing unreachable block (ram,0x000103d05bac) */

void FUN_103d05adc(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103d1226c();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_1107001d0,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103d05bb0; end: 103d05c7b;  */

void FUN_103d05bb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = uVar3 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || ((**(code **)(param_3 + 0x70))(uVar3,uVar2,1,param_2,param_3), unaff_x21 == 0)
     ) {
    if (unaff_x20[2] != 0) {
      uStack_48 = (undefined1)unaff_x20[3];
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[2];
      func_0x000103d1226c();
      (*pcVar4)(&uStack_50,2,&UNK_1107001d0,uVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 103d05c7c; end: 103d05cd7;  */

void FUN_103d05c7c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 103d05cd8; end: 103d05cff;  */

void FUN_103d05cd8(void)

{
  FUN_103d05adc();
  return;
}



/* Entry: 103d05d00; end: 103d05d37;  */

uint FUN_103d05d00(long param_1,long param_2)

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
  func_0x000103d1c3bc();
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



/* Entry: 103d05d38; end: 103d05d7f;  */

uint FUN_103d05d38(undefined8 *param_1)

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
  FUN_103d0f934(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103d05d80; end: 103d05e1f;  */

/* WARNING: Possible PIC construction at 0x000103d05dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d05ddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d05dd0) */
/* WARNING: Removing unreachable block (ram,0x000103d05de0) */

void FUN_103d05d80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002968 != -1) {
    func_0x000107c61568(0x113002968,FUN_103d05a94);
  }
  uVar5 = uRam000000011380f828;
  uVar4 = uRam000000011380f820;
  uVar3 = uRam000000011380f818;
  uVar2 = uRam000000011380f810;
  uVar1 = uRam000000011380f808;
  *param_1 = uRam000000011380f800;
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



/* Entry: 103d05e20; end: 103d05e33;  */

void FUN_103d05e20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003400;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003400,&UNK_10dc7e428);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d05e34; end: 103d05e67;  */

void FUN_103d05e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d05e68; end: 103d05f8b;  */

void FUN_103d05e68(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = *(undefined1 *)(unaff_x20 + 3);
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d05f8c; end: 103d06017;  */

uint FUN_103d05f8c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d0f934(&uStack_70,&uStack_40);
  return uVar1 & 1;
}


