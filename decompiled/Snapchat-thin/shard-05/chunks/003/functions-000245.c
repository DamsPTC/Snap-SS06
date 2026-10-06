/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d37f64; end: 103d38017;  */

void FUN_103d37f64(void)

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



/* Entry: 103d38018; end: 103d38253;  */

/* WARNING: Removing unreachable block (ram,0x000103d3810c) */
/* WARNING: Removing unreachable block (ram,0x000103d38210) */
/* WARNING: Removing unreachable block (ram,0x000103d38234) */
/* WARNING: Removing unreachable block (ram,0x000103d38140) */
/* WARNING: Removing unreachable block (ram,0x000103d381a4) */
/* WARNING: Removing unreachable block (ram,0x000103d38250) */
/* WARNING: Removing unreachable block (ram,0x000103d38178) */

void FUN_103d38018(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_78 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  lVar1 = param_3;
  lVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            func_0x000107c61428(param_1 + 0x10,auStack_78,0x21,0);
            pcVar3 = *(code **)(param_4 + 0x60);
            lVar1 = param_1 + 0x10;
            goto LAB_103d381ec;
          }
          if (lVar1 == 2) {
            FUN_103d38254(param_2,param_1,param_3,param_4);
          }
        }
        else if (lVar1 == 3) {
          FUN_103d382e8(param_2,param_1,param_3,param_4);
        }
        else if (lVar1 == 4) {
          FUN_103d3837c(param_2,param_1,param_3,param_4,0x103d5110c,&UNK_110706e50);
        }
      }
      else if (lVar1 < 7) {
        if (lVar1 == 5) {
          FUN_103d3841c(param_2,param_1,param_3,param_4,0x103d5114c,&UNK_110706fe8);
        }
        else if (lVar1 == 6) {
          FUN_103d384bc(param_2,param_1,param_3,param_4);
        }
      }
      else if (lVar1 == 7) {
        func_0x000107c61428(param_1 + 0x40,auStack_78,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x138);
        lVar1 = param_1 + 0x40;
LAB_103d381ec:
        (*pcVar3)(lVar1,param_3,param_4);
        func_0x000107c614a8(auStack_78);
      }
      else if (lVar1 == 8) {
        FUN_103d38550(param_2,param_1,param_3,param_4);
      }
      else if (lVar1 == 9) {
        FUN_103d385e4(param_2,param_1,param_3,param_4);
      }
      lVar1 = param_3;
      lVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d38254; end: 103d382e7;  */

void FUN_103d38254(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x18;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_103d5108c();
  (*pcVar2)(param_2 + 0x18,&UNK_110706d40,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d382e8; end: 103d3837b;  */

void FUN_103d382e8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x20;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  func_0x000103d510cc();
  (*pcVar2)(param_2 + 0x20,&UNK_110706dc8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d3837c; end: 103d3841b;  */

void FUN_103d3837c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x28;
  func_0x000107c61428(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  (*param_5)();
  (*pcVar2)(param_2 + 0x28,param_6,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 103d3841c; end: 103d384bb;  */

void FUN_103d3841c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [24];
  
  lVar1 = param_2 + 0x30;
  func_0x000107c61428(lVar1,auStack_68,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  (*param_5)();
  (*pcVar2)(param_2 + 0x30,param_6,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 103d384bc; end: 103d3854f;  */

void FUN_103d384bc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x38;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x1a0);
  FUN_103d46b48();
  (*pcVar2)(param_2 + 0x38,&UNK_110706340,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d38550; end: 103d385e3;  */

void FUN_103d38550(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x48;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103d42494();
  (*pcVar2)(param_2 + 0x48,&UNK_1107050d0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d385e4; end: 103d38677;  */

void FUN_103d385e4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x108;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103d46c44();
  (*pcVar2)(param_2 + 0x108,&UNK_1107063c8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d38678; end: 103d386e3;  */

void FUN_103d38678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  long unaff_x21;
  
  (*param_7)(param_4,param_1,param_5,param_6);
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}



/* Entry: 103d386e4; end: 103d389e3;  */

void FUN_103d386e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  code *pcVar2;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  if ((*(long *)(param_1 + 0x10) == 0) ||
     ((**(code **)(param_4 + 0x20))(*(long *)(param_1 + 0x10),1,param_3,param_4), unaff_x21 == 0)) {
    func_0x000107c61428(param_1 + 0x18,auStack_80,0,0);
    lVar1 = *(long *)(param_1 + 0x18);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      FUN_103d5108c();
      func_0x000107c61434(lVar1);
      (*pcVar2)();
      func_0x000107c6142c(lVar1);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000107c61428(param_1 + 0x20,auStack_98,0,0);
    lVar1 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x000103d510cc();
      func_0x000107c61434(lVar1);
      (*pcVar2)();
      func_0x000107c6142c(lVar1);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000107c61428(param_1 + 0x28,auStack_b0,0,0);
    lVar1 = *(long *)(param_1 + 0x28);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x000103d5110c();
      func_0x000107c61434(lVar1);
      (*pcVar2)();
      func_0x000107c6142c(lVar1);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000107c61428(param_1 + 0x30,auStack_c8,0,0);
    lVar1 = *(long *)(param_1 + 0x30);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      func_0x000103d5114c();
      func_0x000107c61434(lVar1);
      (*pcVar2)();
      func_0x000107c6142c(lVar1);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000107c61428(param_1 + 0x38,auStack_e0,0,0);
    lVar1 = *(long *)(param_1 + 0x38);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x118);
      FUN_103d46b48();
      func_0x000107c61434(lVar1);
      (*pcVar2)();
      func_0x000107c6142c(lVar1);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000107c61428(param_1 + 0x40,auStack_f8,0,0);
    if (((*(char *)(param_1 + 0x40) != '\x01') ||
        ((**(code **)(param_4 + 0x68))(1,7,param_3,param_4), unaff_x21 == 0)) &&
       (FUN_103d389e4(param_1,param_2,param_3,param_4), unaff_x21 == 0)) {
      FUN_103d38b40(param_1,param_2,param_3,param_4);
    }
  }
  return;
}



/* Entry: 103d389e4; end: 103d38b3f;  */

void FUN_103d389e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  undefined1 auStack_1d8 [24];
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
  
  func_0x000107c61428(param_1 + 0x48,auStack_1d8,0,0);
  uStack_138 = *(undefined8 *)(param_1 + 0xd0);
  uStack_140 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0xe0);
  uStack_130 = *(undefined8 *)(param_1 + 0xd8);
  uStack_118 = *(undefined8 *)(param_1 + 0xf0);
  uStack_120 = *(undefined8 *)(param_1 + 0xe8);
  uStack_108 = *(undefined8 *)(param_1 + 0x100);
  uStack_110 = *(undefined8 *)(param_1 + 0xf8);
  uStack_178 = *(undefined8 *)(param_1 + 0x90);
  uStack_180 = *(undefined8 *)(param_1 + 0x88);
  uStack_168 = *(undefined8 *)(param_1 + 0xa0);
  uStack_170 = *(undefined8 *)(param_1 + 0x98);
  uStack_158 = *(undefined8 *)(param_1 + 0xb0);
  uStack_160 = *(undefined8 *)(param_1 + 0xa8);
  uStack_148 = *(undefined8 *)(param_1 + 0xc0);
  uStack_150 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x50);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x48);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x58);
  uStack_198 = *(undefined8 *)(param_1 + 0x70);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x68);
  uStack_188 = *(undefined8 *)(param_1 + 0x80);
  uStack_190 = *(undefined8 *)(param_1 + 0x78);
  uStack_78 = *(undefined8 *)(param_1 + 0xd0);
  uStack_80 = *(undefined8 *)(param_1 + 200);
  uStack_68 = *(undefined8 *)(param_1 + 0xe0);
  uStack_70 = *(undefined8 *)(param_1 + 0xd8);
  uStack_58 = *(undefined8 *)(param_1 + 0xf0);
  uStack_60 = *(undefined8 *)(param_1 + 0xe8);
  uStack_48 = *(undefined8 *)(param_1 + 0x100);
  uStack_50 = *(undefined8 *)(param_1 + 0xf8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_98 = *(undefined8 *)(param_1 + 0xb0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_88 = *(undefined8 *)(param_1 + 0xc0);
  uStack_90 = *(undefined8 *)(param_1 + 0xb8);
  uStack_f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_100 = *(undefined8 *)(param_1 + 0x48);
  uStack_e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_d0 = *(undefined8 *)(param_1 + 0x78);
  puVar1 = &uStack_1c0;
  func_0x000100d6dc90();
  if ((int)puVar1 != 1) {
    uStack_218 = uStack_78;
    uStack_220 = uStack_80;
    uStack_208 = uStack_68;
    uStack_210 = uStack_70;
    uStack_1f8 = uStack_58;
    uStack_200 = uStack_60;
    uStack_1e8 = uStack_48;
    uStack_1f0 = uStack_50;
    uStack_258 = uStack_b8;
    uStack_260 = uStack_c0;
    uStack_248 = uStack_a8;
    uStack_250 = uStack_b0;
    uStack_238 = uStack_98;
    uStack_240 = uStack_a0;
    uStack_228 = uStack_88;
    uStack_230 = uStack_90;
    uStack_298 = uStack_f8;
    uStack_2a0 = uStack_100;
    uStack_288 = uStack_e8;
    uStack_290 = uStack_f0;
    uStack_278 = uStack_d8;
    uStack_280 = uStack_e0;
    uStack_268 = uStack_c8;
    uStack_270 = uStack_d0;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000103d42494();
    (*pcVar2)(&uStack_2a0,8,&UNK_1107050d0,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d38b40; end: 103d38bef;  */

void FUN_103d38b40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x108);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_68 = *(ulong *)(param_1 + 0x120);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_70 = *(undefined8 *)(param_1 + 0x118);
    uStack_78 = *(undefined8 *)(param_1 + 0x110);
    uStack_80 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    FUN_103d46c44();
    (*pcVar3)(&uStack_80,9,&UNK_1107063c8,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 103d38bf0; end: 103d3948b;  */

undefined8 FUN_103d38bf0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_960 [192];
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
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
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
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_138,0,0);
  lVar10 = *(long *)(param_1 + 0x10);
  func_0x000107c61428(param_2 + 0x10,auStack_150,0,0);
  if (lVar10 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x18,auStack_168,0,0);
  uVar11 = *(ulong *)(param_1 + 0x18);
  func_0x000107c61428(param_2 + 0x18,auStack_180,0,0);
  uVar12 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar12);
  uVar5 = uVar11;
  func_0x000103d3bdb0(uVar11,uVar12,0x103d5101c,FUN_103d52d6c,0x103d51058);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar12);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x20,auStack_198,0,0);
  uVar11 = *(ulong *)(param_1 + 0x20);
  func_0x000107c61428(param_2 + 0x20,auStack_1b0,0,0);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar12);
  uVar5 = uVar11;
  func_0x000103d3bdb0(uVar11,uVar12,0x103d50fac,FUN_103d53018,0x103d50fe8);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar12);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x28,auStack_1c8,0,0);
  uVar11 = *(ulong *)(param_1 + 0x28);
  func_0x000107c61428(param_2 + 0x28,auStack_1e0,0,0);
  uVar12 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar12);
  uVar5 = uVar11;
  FUN_103d3bea0(uVar11,uVar12);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar12);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x30,auStack_1f8,0,0);
  uVar11 = *(ulong *)(param_1 + 0x30);
  func_0x000107c61428(param_2 + 0x30,auStack_210,0,0);
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar12);
  uVar5 = uVar11;
  FUN_103d3bf90(uVar11,uVar12);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar12);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x38,auStack_228,0,0);
  uVar11 = *(ulong *)(param_1 + 0x38);
  func_0x000107c61428(param_2 + 0x38,auStack_240,0,0);
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar12);
  uVar5 = uVar11;
  FUN_103d3c49c(uVar11,uVar12);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(uVar12);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x40,auStack_258,0,0);
  cVar3 = *(char *)(param_1 + 0x40);
  func_0x000107c61428(param_2 + 0x40,auStack_270,0,0);
  if (cVar3 != *(char *)(param_2 + 0x40)) {
    return 0;
  }
  func_0x000107c61428(param_1 + 0x48,auStack_408,0,0);
  func_0x000107c61428(param_2 + 0x48,auStack_420,0,0);
  uStack_368 = *(undefined8 *)(param_1 + 0xd0);
  uStack_370 = *(undefined8 *)(param_1 + 200);
  uStack_358 = *(undefined8 *)(param_1 + 0xe0);
  uStack_360 = *(undefined8 *)(param_1 + 0xd8);
  uStack_348 = *(undefined8 *)(param_1 + 0xf0);
  uStack_350 = *(undefined8 *)(param_1 + 0xe8);
  uStack_338 = *(undefined8 *)(param_1 + 0x100);
  uStack_340 = *(undefined8 *)(param_1 + 0xf8);
  uStack_3a8 = *(undefined8 *)(param_1 + 0x90);
  uStack_3b0 = *(undefined8 *)(param_1 + 0x88);
  uStack_398 = *(undefined8 *)(param_1 + 0xa0);
  uStack_3a0 = *(undefined8 *)(param_1 + 0x98);
  uStack_388 = *(undefined8 *)(param_1 + 0xb0);
  uStack_390 = *(undefined8 *)(param_1 + 0xa8);
  uStack_378 = *(undefined8 *)(param_1 + 0xc0);
  uStack_380 = *(undefined8 *)(param_1 + 0xb8);
  uStack_3e8 = *(undefined8 *)(param_1 + 0x50);
  uStack_3f0 = *(undefined8 *)(param_1 + 0x48);
  uStack_3d8 = *(undefined8 *)(param_1 + 0x60);
  uStack_3e0 = *(undefined8 *)(param_1 + 0x58);
  uStack_3c8 = *(undefined8 *)(param_1 + 0x70);
  uStack_3d0 = *(undefined8 *)(param_1 + 0x68);
  uStack_3b8 = *(undefined8 *)(param_1 + 0x80);
  uStack_3c0 = *(undefined8 *)(param_1 + 0x78);
  uStack_518 = *(undefined8 *)(param_1 + 0xd0);
  uStack_520 = *(undefined8 *)(param_1 + 200);
  uStack_508 = *(undefined8 *)(param_1 + 0xe0);
  uStack_510 = *(undefined8 *)(param_1 + 0xd8);
  uStack_4f8 = *(undefined8 *)(param_1 + 0xf0);
  uStack_500 = *(undefined8 *)(param_1 + 0xe8);
  uStack_4e8 = *(undefined8 *)(param_1 + 0x100);
  uStack_4f0 = *(undefined8 *)(param_1 + 0xf8);
  uStack_558 = *(undefined8 *)(param_1 + 0x90);
  uStack_560 = *(undefined8 *)(param_1 + 0x88);
  uStack_548 = *(undefined8 *)(param_1 + 0xa0);
  uStack_550 = *(undefined8 *)(param_1 + 0x98);
  uStack_538 = *(undefined8 *)(param_1 + 0xb0);
  uStack_540 = *(undefined8 *)(param_1 + 0xa8);
  uStack_528 = *(undefined8 *)(param_1 + 0xc0);
  uStack_530 = *(undefined8 *)(param_1 + 0xb8);
  uStack_598 = *(undefined8 *)(param_1 + 0x50);
  uStack_5a0 = *(undefined8 *)(param_1 + 0x48);
  uStack_588 = *(undefined8 *)(param_1 + 0x60);
  uStack_590 = *(undefined8 *)(param_1 + 0x58);
  uStack_578 = *(undefined8 *)(param_1 + 0x70);
  uStack_580 = *(undefined8 *)(param_1 + 0x68);
  uStack_568 = *(undefined8 *)(param_1 + 0x80);
  uStack_570 = *(undefined8 *)(param_1 + 0x78);
  uStack_2a8 = *(undefined8 *)(param_2 + 0xd0);
  uStack_2b0 = *(undefined8 *)(param_2 + 200);
  uStack_298 = *(undefined8 *)(param_2 + 0xe0);
  uStack_2a0 = *(undefined8 *)(param_2 + 0xd8);
  uStack_288 = *(undefined8 *)(param_2 + 0xf0);
  uStack_290 = *(undefined8 *)(param_2 + 0xe8);
  uStack_278 = *(undefined8 *)(param_2 + 0x100);
  uStack_280 = *(undefined8 *)(param_2 + 0xf8);
  uStack_2e8 = *(undefined8 *)(param_2 + 0x90);
  uStack_2f0 = *(undefined8 *)(param_2 + 0x88);
  uStack_2d8 = *(undefined8 *)(param_2 + 0xa0);
  uStack_2e0 = *(undefined8 *)(param_2 + 0x98);
  uStack_2c8 = *(undefined8 *)(param_2 + 0xb0);
  uStack_2d0 = *(undefined8 *)(param_2 + 0xa8);
  uStack_2b8 = *(undefined8 *)(param_2 + 0xc0);
  uStack_2c0 = *(undefined8 *)(param_2 + 0xb8);
  uStack_328 = *(undefined8 *)(param_2 + 0x50);
  uStack_330 = *(undefined8 *)(param_2 + 0x48);
  uStack_318 = *(undefined8 *)(param_2 + 0x60);
  uStack_320 = *(undefined8 *)(param_2 + 0x58);
  uStack_308 = *(undefined8 *)(param_2 + 0x70);
  uStack_310 = *(undefined8 *)(param_2 + 0x68);
  uStack_2f8 = *(undefined8 *)(param_2 + 0x80);
  uStack_300 = *(undefined8 *)(param_2 + 0x78);
  uStack_458 = *(undefined8 *)(param_2 + 0xd0);
  uStack_460 = *(undefined8 *)(param_2 + 200);
  uStack_448 = *(undefined8 *)(param_2 + 0xe0);
  uStack_450 = *(undefined8 *)(param_2 + 0xd8);
  uStack_438 = *(undefined8 *)(param_2 + 0xf0);
  uStack_440 = *(undefined8 *)(param_2 + 0xe8);
  uStack_428 = *(undefined8 *)(param_2 + 0x100);
  uStack_430 = *(undefined8 *)(param_2 + 0xf8);
  uStack_498 = *(undefined8 *)(param_2 + 0x90);
  uStack_4a0 = *(undefined8 *)(param_2 + 0x88);
  uStack_488 = *(undefined8 *)(param_2 + 0xa0);
  uStack_490 = *(undefined8 *)(param_2 + 0x98);
  uStack_478 = *(undefined8 *)(param_2 + 0xb0);
  uStack_480 = *(undefined8 *)(param_2 + 0xa8);
  uStack_468 = *(undefined8 *)(param_2 + 0xc0);
  uStack_470 = *(undefined8 *)(param_2 + 0xb8);
  uStack_4d8 = *(undefined8 *)(param_2 + 0x50);
  uStack_4e0 = *(undefined8 *)(param_2 + 0x48);
  uStack_4c8 = *(undefined8 *)(param_2 + 0x60);
  uStack_4d0 = *(undefined8 *)(param_2 + 0x58);
  uStack_4b8 = *(undefined8 *)(param_2 + 0x70);
  uStack_4c0 = *(undefined8 *)(param_2 + 0x68);
  uStack_4a8 = *(undefined8 *)(param_2 + 0x80);
  uStack_4b0 = *(undefined8 *)(param_2 + 0x78);
  iVar4 = (int)&uStack_5a0;
  func_0x000100d6dc90();
  if (iVar4 == 1) {
    iVar4 = (int)&uStack_4e0;
    func_0x000100d6dc90();
    if (iVar4 != 1) {
LAB_103d3914c:
      func_0x000107c610b4(&uStack_720,&uStack_5a0,0x180);
      FUN_103d3e4c8(&uStack_3f0,&uStack_120,0x113004ce8,&UNK_10dc80c90);
      FUN_103d3e4c8(&uStack_330,&uStack_120,0x113004ce8,&UNK_10dc80c90);
      func_0x000103d5122c(&uStack_720,0x113004cf0,&UNK_10dc80c98);
      return 0;
    }
    uStack_698 = uStack_518;
    uStack_6a0 = uStack_520;
    uStack_688 = uStack_508;
    uStack_690 = uStack_510;
    uStack_678 = uStack_4f8;
    uStack_680 = uStack_500;
    uStack_668 = uStack_4e8;
    uStack_670 = uStack_4f0;
    uStack_6d8 = uStack_558;
    uStack_6e0 = uStack_560;
    uStack_6c8 = uStack_548;
    uStack_6d0 = uStack_550;
    uStack_6b8 = uStack_538;
    uStack_6c0 = uStack_540;
    uStack_6a8 = uStack_528;
    uStack_6b0 = uStack_530;
    uStack_718 = uStack_598;
    uStack_720 = uStack_5a0;
    uStack_708 = uStack_588;
    uStack_710 = uStack_590;
    uStack_6f8 = uStack_578;
    uStack_700 = uStack_580;
    uStack_6e8 = uStack_568;
    uStack_6f0 = uStack_570;
    FUN_103d3e4c8(&uStack_3f0,&uStack_120,0x113004ce8,&UNK_10dc80c90);
    FUN_103d3e4c8(&uStack_330,&uStack_120,0x113004ce8,&UNK_10dc80c90);
    func_0x000103d5122c(&uStack_720,0x113004ce8,&UNK_10dc80c90);
  }
  else {
    uStack_758 = uStack_518;
    uStack_760 = uStack_520;
    uStack_748 = uStack_508;
    uStack_750 = uStack_510;
    uStack_738 = uStack_4f8;
    uStack_740 = uStack_500;
    uStack_728 = uStack_4e8;
    uStack_730 = uStack_4f0;
    uStack_798 = uStack_558;
    uStack_7a0 = uStack_560;
    uStack_788 = uStack_548;
    uStack_790 = uStack_550;
    uStack_778 = uStack_538;
    uStack_780 = uStack_540;
    uStack_768 = uStack_528;
    uStack_770 = uStack_530;
    uStack_7d8 = uStack_598;
    uStack_7e0 = uStack_5a0;
    uStack_7c8 = uStack_588;
    uStack_7d0 = uStack_590;
    uStack_7b8 = uStack_578;
    uStack_7c0 = uStack_580;
    uStack_7a8 = uStack_568;
    uStack_7b0 = uStack_570;
    iVar4 = (int)&uStack_4e0;
    func_0x000100d6dc90();
    if (iVar4 == 1) goto LAB_103d3914c;
    uStack_818 = uStack_458;
    uStack_820 = uStack_460;
    uStack_808 = uStack_448;
    uStack_810 = uStack_450;
    uStack_7f8 = uStack_438;
    uStack_800 = uStack_440;
    uStack_7e8 = uStack_428;
    uStack_7f0 = uStack_430;
    uStack_858 = uStack_498;
    uStack_860 = uStack_4a0;
    uStack_848 = uStack_488;
    uStack_850 = uStack_490;
    uStack_838 = uStack_478;
    uStack_840 = uStack_480;
    uStack_828 = uStack_468;
    uStack_830 = uStack_470;
    uStack_898 = uStack_4d8;
    uStack_8a0 = uStack_4e0;
    uStack_888 = uStack_4c8;
    uStack_890 = uStack_4d0;
    uStack_878 = uStack_4b8;
    uStack_880 = uStack_4c0;
    uStack_868 = uStack_4a8;
    uStack_870 = uStack_4b0;
    uStack_698 = uStack_458;
    uStack_6a0 = uStack_460;
    uStack_688 = uStack_448;
    uStack_690 = uStack_450;
    uStack_678 = uStack_438;
    uStack_680 = uStack_440;
    uStack_668 = uStack_428;
    uStack_670 = uStack_430;
    uStack_6d8 = uStack_498;
    uStack_6e0 = uStack_4a0;
    uStack_6c8 = uStack_488;
    uStack_6d0 = uStack_490;
    uStack_6b8 = uStack_478;
    uStack_6c0 = uStack_480;
    uStack_6a8 = uStack_468;
    uStack_6b0 = uStack_470;
    uStack_718 = uStack_4d8;
    uStack_720 = uStack_4e0;
    uStack_708 = uStack_4c8;
    uStack_710 = uStack_4d0;
    uStack_6f8 = uStack_4b8;
    uStack_700 = uStack_4c0;
    uStack_6e8 = uStack_4a8;
    uStack_6f0 = uStack_4b0;
    uStack_98 = uStack_758;
    uStack_a0 = uStack_760;
    uStack_88 = uStack_748;
    uStack_90 = uStack_750;
    uStack_78 = uStack_738;
    uStack_80 = uStack_740;
    uStack_68 = uStack_728;
    uStack_70 = uStack_730;
    uStack_d8 = uStack_798;
    uStack_e0 = uStack_7a0;
    uStack_c8 = uStack_788;
    uStack_d0 = uStack_790;
    uStack_b8 = uStack_778;
    uStack_c0 = uStack_780;
    uStack_a8 = uStack_768;
    uStack_b0 = uStack_770;
    uStack_118 = uStack_7d8;
    uStack_120 = uStack_7e0;
    uStack_108 = uStack_7c8;
    uStack_110 = uStack_7d0;
    uStack_f8 = uStack_7b8;
    uStack_100 = uStack_7c0;
    uStack_e8 = uStack_7a8;
    uStack_f0 = uStack_7b0;
    FUN_103d3e4c8(&uStack_3f0,auStack_960,0x113004ce8,&UNK_10dc80c90);
    FUN_103d3e4c8(&uStack_330,auStack_960,0x113004ce8,&UNK_10dc80c90);
    puVar6 = &uStack_120;
    FUN_103d3e570(puVar6,&uStack_720);
    func_0x000103d5122c(&uStack_8a0,0x113004ce8,&UNK_10dc80c90);
    func_0x000103d5122c(&uStack_5a0,0x113004ce8,&UNK_10dc80c90);
    if (((ulong)puVar6 & 1) == 0) {
      return 0;
    }
  }
  func_0x000107c61428(param_1 + 0x108,&uStack_5a0,0,0);
  func_0x000107c61428(param_2 + 0x108,&uStack_7e0,0,0);
  lVar10 = *(long *)(param_1 + 0x108);
  lVar8 = *(long *)(param_1 + 0x110);
  uVar5 = *(ulong *)(param_1 + 0x118);
  uVar9 = *(ulong *)(param_1 + 0x120);
  lVar13 = *(long *)(param_2 + 0x108);
  lVar1 = *(long *)(param_2 + 0x110);
  uVar11 = *(ulong *)(param_2 + 0x118);
  uVar2 = *(ulong *)(param_2 + 0x120);
  if (uVar9 >> 0x3c < 0xf) {
    if (uVar2 >> 0x3c < 0xf) {
      if (lVar10 == lVar13) {
        FUN_103d3edd8(lVar10,lVar8,uVar5,uVar9);
        lVar13 = lVar10;
        if (lVar8 == lVar1) {
          FUN_103d3edd8(lVar10,lVar8,uVar11,uVar2);
          uVar7 = uVar5;
          func_0x000100e25fcc(uVar5,uVar9,uVar11,uVar2);
          func_0x000103d3edf4(lVar10,lVar8,uVar11,uVar2);
          if ((uVar7 & 1) != 0) goto LAB_103d39340;
          goto LAB_103d39464;
        }
      }
      else {
        FUN_103d3edd8(lVar10,lVar8,uVar5,uVar9);
      }
      FUN_103d3edd8(lVar13,lVar1,uVar11,uVar2);
      func_0x000103d3edf4(lVar13,lVar1,uVar11,uVar2);
      goto LAB_103d39464;
    }
  }
  else if (0xe < uVar2 >> 0x3c) {
    FUN_103d3edd8(lVar10,lVar8,uVar5,uVar9);
    FUN_103d3edd8(lVar13,lVar1,uVar11,uVar2);
LAB_103d39340:
    func_0x000103d3edf4(lVar10,lVar8,uVar5,uVar9);
    return 1;
  }
  FUN_103d3edd8(lVar10,lVar8,uVar5,uVar9);
  FUN_103d3edd8(lVar13,lVar1,uVar11,uVar2);
  func_0x000103d3edf4(lVar10,lVar8,uVar5,uVar9);
  lVar10 = lVar13;
  lVar8 = lVar1;
  uVar5 = uVar11;
  uVar9 = uVar2;
LAB_103d39464:
  func_0x000103d3edf4(lVar10,lVar8,uVar5,uVar9);
  return 0;
}



/* Entry: 103d3948c; end: 103d394a7;  */

void FUN_103d3948c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000113004db8 != -1) {
    func_0x000107c61568(0x113004db8,FUN_103d37a14);
  }
  uVar1 = uRam0000000113004dc0;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103d394a8; end: 103d394ff;  */

void FUN_103d394a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (*param_4 != -1) {
    func_0x000107c61568(param_4,param_6);
  }
  uVar1 = *param_5;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103d39500; end: 103d39537;  */

undefined1  [16] FUN_103d39500(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b6500;
  auVar1._0_8_ = 0xd000000000000036;
  return auVar1;
}



/* Entry: 103d39538; end: 103d39593;  */

void FUN_103d39538(void)

{
  FUN_103d37f64();
  return;
}



/* Entry: 103d39594; end: 103d395cb;  */

uint FUN_103d39594(long param_1,long param_2)

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
  func_0x000103d5013c();
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



/* Entry: 103d395cc; end: 103d395d7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d395cc(long *param_1)

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
    FUN_103d38bf0(uVar25,uVar26);
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



/* Entry: 103d395d8; end: 103d39683;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d395d8(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

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
    (*param_4)(uVar25,uVar26);
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



/* Entry: 103d39684; end: 103d39723;  */

/* WARNING: Possible PIC construction at 0x000103d396d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d396e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d396d4) */
/* WARNING: Removing unreachable block (ram,0x000103d396e4) */

void FUN_103d39684(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113005218 != -1) {
    func_0x000107c61568(0x113005218,FUN_103d379cc);
  }
  uVar5 = uRam0000000113810998;
  uVar4 = uRam0000000113810990;
  uVar3 = uRam0000000113810988;
  uVar2 = uRam0000000113810980;
  uVar1 = uRam0000000113810978;
  *param_1 = uRam0000000113810970;
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



/* Entry: 103d39724; end: 103d39737;  */

void FUN_103d39724(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005c48;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005c48,&UNK_10dc85c08);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d39738; end: 103d3976b;  */

void FUN_103d39738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d3976c; end: 103d3986f;  */

void FUN_103d3976c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d39870; end: 103d3987b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d39870(undefined8 *param_1,long *param_2)

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
    FUN_103d38bf0(uVar25,uVar26);
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



/* Entry: 103d3987c; end: 103d39927;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d3987c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    code *param_5)

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
    (*param_5)(uVar25,uVar26);
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



/* Entry: 103d39928; end: 103d3996f;  */

void FUN_103d39928(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc85f00,0x16d,2);
  uRam00000001138109a8 = uStack_38;
  uRam00000001138109a0 = uStack_40;
  uRam00000001138109b8 = uStack_28;
  uRam00000001138109b0 = uStack_30;
  uRam00000001138109c8 = uStack_18;
  uRam00000001138109c0 = uStack_20;
  return;
}



/* Entry: 103d39970; end: 103d39a0f;  */

/* WARNING: Possible PIC construction at 0x000103d399bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d399cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d399c0) */
/* WARNING: Removing unreachable block (ram,0x000103d399d0) */

void FUN_103d39970(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113005228 != -1) {
    func_0x000107c61568(0x113005228,FUN_103d39928);
  }
  uVar5 = uRam00000001138109c8;
  uVar4 = uRam00000001138109c0;
  uVar3 = uRam00000001138109b8;
  uVar2 = uRam00000001138109b0;
  uVar1 = uRam00000001138109a8;
  *param_1 = uRam00000001138109a0;
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



/* Entry: 103d39a10; end: 103d39a7f;  */

void FUN_103d39a10(void)

{
  func_0x000107c5fb78(0xd000000000000018,0x800000010f1b6610);
  uRam00000001138109d0 = 0xd000000000000036;
  uRam00000001138109d8 = 0x800000010f1b6500;
  return;
}



/* Entry: 103d39a80; end: 103d39ac7;  */

void FUN_103d39a80(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc85ee0,0x10,2);
  uRam00000001138109e8 = uStack_38;
  uRam00000001138109e0 = uStack_40;
  uRam00000001138109f8 = uStack_28;
  uRam00000001138109f0 = uStack_30;
  uRam0000000113810a08 = uStack_18;
  uRam0000000113810a00 = uStack_20;
  return;
}



/* Entry: 103d39ac8; end: 103d39b9b;  */

/* WARNING: Removing unreachable block (ram,0x000103d39b98) */

void FUN_103d39ac8(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103d431c4();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x30))(unaff_x20 + 0x10,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103d39b9c; end: 103d39c5b;  */

void FUN_103d39b9c(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000103d431c4();
    (*pcVar2)(&lStack_50,1,&UNK_1107062c8,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((unaff_x20[2] == 0) || ((**(code **)(param_3 + 0x10))(2,param_2,param_3), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 103d39c5c; end: 103d39c77;  */

void FUN_103d39c5c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xc000000000000000;
  return;
}



/* Entry: 103d39c78; end: 103d39cd3;  */

undefined1  [16] FUN_103d39c78(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000113005230 != -1) {
    func_0x000107c61568(0x113005230,FUN_103d39a10);
  }
  auVar1._8_8_ = uRam00000001138109d8;
  auVar1._0_8_ = uRam00000001138109d0;
  func_0x000107c61434(uRam00000001138109d8);
  return auVar1;
}



/* Entry: 103d39cd4; end: 103d39cef;  */

undefined8 FUN_103d39cd4(void)

{
  return 1;
}



/* Entry: 103d39cf0; end: 103d39d17;  */

void FUN_103d39cf0(void)

{
  FUN_103d39ac8();
  return;
}



/* Entry: 103d39d18; end: 103d39d4f;  */

uint FUN_103d39d18(long param_1,long param_2)

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
  func_0x000103d500fc();
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



/* Entry: 103d39d50; end: 103d39d97;  */

uint FUN_103d39d50(undefined8 *param_1)

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
  FUN_103d416a8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103d39d98; end: 103d39e37;  */

/* WARNING: Possible PIC construction at 0x000103d39de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d39df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d39de8) */
/* WARNING: Removing unreachable block (ram,0x000103d39df8) */

void FUN_103d39d98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113005238 != -1) {
    func_0x000107c61568(0x113005238,FUN_103d39a80);
  }
  uVar5 = uRam0000000113810a08;
  uVar4 = uRam0000000113810a00;
  uVar3 = uRam00000001138109f8;
  uVar2 = uRam00000001138109f0;
  uVar1 = uRam00000001138109e8;
  *param_1 = uRam00000001138109e0;
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



/* Entry: 103d39e38; end: 103d39e4b;  */

void FUN_103d39e38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005c38;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005c38,&UNK_10dc85c00);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d39e4c; end: 103d39e7f;  */

void FUN_103d39e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d39e80; end: 103d39fa3;  */

void FUN_103d39e80(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_50 = *(undefined1 *)(unaff_x20 + 1);
  uStack_48 = unaff_x20[2];
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d39fa4; end: 103d3a033;  */

uint FUN_103d39fa4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d416a8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103d3a034; end: 103d3a0cb;  */

void FUN_103d3a034(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_103d3a088:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000103d3a0a4;
  pcVar3 = *(code **)(param_3 + 0x60);
  goto LAB_103d3a070;
code_r0x000103d3a0a4:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x60);
LAB_103d3a070:
    (*pcVar3)();
  }
  goto LAB_103d3a088;
}



/* Entry: 103d3a0cc; end: 103d3a163;  */

void FUN_103d3a0cc(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if (((param_2 == 0) || ((**(code **)(param_7 + 0x20))(param_2,1,param_6,param_7), unaff_x21 == 0))
     && ((param_3 == 0 || ((**(code **)(param_7 + 0x20))(param_3,2,param_6,param_7), unaff_x21 == 0)
         ))) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 103d3a164; end: 103d3a1ab;  */

void FUN_103d3a164(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 103d3a1ac; end: 103d3a1e3;  */

void FUN_103d3a1ac(void)

{
  FUN_103d3a034();
  return;
}



/* Entry: 103d3a1e4; end: 103d3a21b;  */

uint FUN_103d3a1e4(long param_1,long param_2)

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
  func_0x000103d500bc();
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



/* Entry: 103d3a21c; end: 103d3a247;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d3a21c(long *param_1)

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
  long *unaff_x20;
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
  
  if (*unaff_x20 != *param_1 || unaff_x20[1] != param_1[1]) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)unaff_x20[2];
  pbVar25 = (byte *)unaff_x20[3];
  lVar24 = param_1[2];
  uVar16 = param_1[3];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(long **)(puVar7 + -0x20) = unaff_x20;
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
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
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
        unaff_x20 = (long *)((ulong)pbVar25 & 0x3fffffffffffffff);
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
    *(long **)(puVar7 + -0xa0) = unaff_x20;
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
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
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
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
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
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
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
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
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
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
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
    unaff_x20 = *(long **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103d3a248; end: 103d3a2e7;  */

/* WARNING: Possible PIC construction at 0x000103d3a294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d3a2a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d3a298) */
/* WARNING: Removing unreachable block (ram,0x000103d3a2a8) */

void FUN_103d3a248(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113005250 != -1) {
    func_0x000107c61568(0x113005250,0x103d39fec);
  }
  uVar5 = uRam0000000113810a38;
  uVar4 = uRam0000000113810a30;
  uVar3 = uRam0000000113810a28;
  uVar2 = uRam0000000113810a20;
  uVar1 = uRam0000000113810a18;
  *param_1 = uRam0000000113810a10;
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



/* Entry: 103d3a2e8; end: 103d3a2fb;  */

void FUN_103d3a2e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005c28;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005c28,&UNK_10dc85bf8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d3a2fc; end: 103d3a3ef;  */

void FUN_103d3a2fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d3a3f0; end: 103d3a417;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d3a3f0(long *param_1,long *param_2)

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
  
  if (*param_1 != *param_2 || param_1[1] != param_2[1]) {
    return (byte *)0x0;
  }
  lVar24 = param_2[2];
  uVar16 = param_2[3];
  pbVar10 = (byte *)param_1[2];
  pbVar25 = (byte *)param_1[3];
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
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
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
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
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
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
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
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
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
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
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
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
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



/* Entry: 103d3a418; end: 103d3a45f;  */

void FUN_103d3a418(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc85e90,0x1a,2);
  uRam0000000113810a48 = uStack_38;
  uRam0000000113810a40 = uStack_40;
  uRam0000000113810a58 = uStack_28;
  uRam0000000113810a50 = uStack_30;
  uRam0000000113810a68 = uStack_18;
  uRam0000000113810a60 = uStack_20;
  return;
}



/* Entry: 103d3a460; end: 103d3a4e3;  */

void FUN_103d3a460(undefined8 param_1,long param_2,long param_3)

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



/* Entry: 103d3a4e4; end: 103d3a56b;  */

void FUN_103d3a4e4(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
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



/* Entry: 103d3a56c; end: 103d3a5a3;  */

undefined1  [16] FUN_103d3a56c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b6570;
  auVar1._0_8_ = 0xd000000000000049;
  return auVar1;
}



/* Entry: 103d3a5a4; end: 103d3a5db;  */

uint FUN_103d3a5a4(long param_1,long param_2)

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
  func_0x000103d5007c();
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



/* Entry: 103d3a5dc; end: 103d3a6f3;  */

/* WARNING: Possible PIC construction at 0x000103d3a610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d3a614) */
/* WARNING: Removing unreachable block (ram,0x000103d3a63c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d3a5dc(undefined8 *param_1)

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
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  undefined8 *unaff_x20;
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
  
  lVar23 = param_1[2];
  uVar15 = param_1[3];
  pbVar9 = (byte *)unaff_x20[2];
  pbVar24 = (byte *)unaff_x20[3];
  pbVar11 = (byte *)*unaff_x20;
  pbVar13 = (byte *)unaff_x20[1];
  pbVar14 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  if ((byte *)*unaff_x20 != (byte *)*param_1 || (byte *)unaff_x20[1] != (byte *)param_1[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar16,0);
    return pbVar11;
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
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar15 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar15 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
        uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
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
        unaff_x20 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,
                            uVar15);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
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
          if (pbVar22 != (byte *)0x0) {
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
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
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
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
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
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103d3a6f4; end: 103d3a707;  */

void FUN_103d3a6f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005c18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005c18,&UNK_10dc85bf0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d3a708; end: 103d3a883;  */

void FUN_103d3a708(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = unaff_x20[1];
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d3a884; end: 103d3a8cb;  */

void FUN_103d3a884(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc85dd0,0xb9,2);
  uRam0000000113810a78 = uStack_38;
  uRam0000000113810a70 = uStack_40;
  uRam0000000113810a88 = uStack_28;
  uRam0000000113810a80 = uStack_30;
  uRam0000000113810a98 = uStack_18;
  uRam0000000113810a90 = uStack_20;
  return;
}



/* Entry: 103d3a8cc; end: 103d3a9f7;  */

/* WARNING: Removing unreachable block (ram,0x000103d3a9dc) */

void FUN_103d3a8cc(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x138);
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x138);
        }
        else {
          if (lVar1 != 3) goto LAB_103d3a944;
          pcVar3 = *(code **)(param_3 + 0x138);
        }
LAB_103d3a934:
        (*pcVar3)();
      }
      else {
        if (lVar1 != 4) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x138);
          }
          else {
            if (lVar1 != 6) goto LAB_103d3a944;
            pcVar3 = *(code **)(param_3 + 0x138);
          }
          goto LAB_103d3a934;
        }
        pcVar3 = *(code **)(param_3 + 0x1a0);
        func_0x000103d42660();
        (*pcVar3)(unaff_x20 + 8,&UNK_1107052f8,lVar1,param_2,param_3);
      }
LAB_103d3a944:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d3a9f8; end: 103d3ab3f;  */

void FUN_103d3a9f8(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long unaff_x21;
  uint uVar2;
  code *pcVar3;
  
  uVar2 = (uint)param_2;
  uVar1 = param_1;
  if ((param_2 & 1) != 0) {
    uVar1 = 1;
    (**(code **)(param_7 + 0x68))(1,1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((uVar2 >> 8 & 1) != 0) {
    uVar1 = 1;
    (**(code **)(param_7 + 0x68))(1,2,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    uVar1 = 1;
    (**(code **)(param_7 + 0x68))(1,3,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (*(long *)(param_3 + 0x10) != 0) {
    pcVar3 = *(code **)(param_7 + 0x118);
    func_0x000103d42660();
    (*pcVar3)(param_3,4,&UNK_1107052f8,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((((uVar2 >> 0x18 & 1) == 0) ||
      ((**(code **)(param_7 + 0x68))(1,5,param_6,param_7), unaff_x21 == 0)) &&
     (((param_2 >> 0x20 & 1) == 0 ||
      ((**(code **)(param_7 + 0x68))(1,6,param_6,param_7), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 103d3ab40; end: 103d3ab9b;  */

void FUN_103d3ab40(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined **)(param_1 + 2) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(param_1 + 6) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



/* Entry: 103d3ab9c; end: 103d3ac27;  */

void FUN_103d3ab9c(void)

{
  FUN_103d3a8cc();
  return;
}



/* Entry: 103d3ac28; end: 103d3ac5f;  */

uint FUN_103d3ac28(long param_1,long param_2)

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
  FUN_103d5003c();
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



/* Entry: 103d3ac60; end: 103d3ad0b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d3ac60(byte *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulong uVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  byte *pbVar30;
  byte *unaff_x19;
  long lVar31;
  byte *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar32;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  undefined1 auVar49 [16];
  
  lVar31 = *(long *)(param_1 + 0x10);
  uVar24 = *(ulong *)(param_1 + 0x18);
  uVar29 = *(ulong *)(unaff_x20 + 8);
  pbVar16 = *(byte **)(unaff_x20 + 0x10);
  pbVar22 = *(byte **)(unaff_x20 + 0x18);
  uVar27 = 0x100;
  if ((unaff_x20[1] & 1) == 0) {
    uVar27 = 0;
  }
  uVar1 = 0x10000;
  if ((unaff_x20[2] & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x1000000;
  if ((unaff_x20[3] & 1) == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x100000000;
  if ((unaff_x20[4] & 1) == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x100;
  if ((param_1[1] & 1) == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x10000;
  if ((param_1[2] & 1) == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x1000000;
  if ((param_1[3] & 1) == 0) {
    uVar6 = 0;
  }
  uVar7 = 0x100000000;
  if ((param_1[4] & 1) == 0) {
    uVar7 = 0;
  }
  if (((uVar27 | (ulong)*unaff_x20 & 1 | uVar1 | uVar2 | uVar3) !=
       (uVar4 | (ulong)*param_1 & 1 | uVar5 | uVar6 | uVar7)) ||
     (FUN_103d3af98(uVar29,*(undefined8 *)(param_1 + 8)), (uVar29 & 1) == 0)) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar11 = (uint)((ulong)pbVar22 >> 0x20);
    uVar25 = uVar11 >> 0x1e;
    uVar12 = (uint)(uVar24 >> 0x20);
    uVar28 = uVar12 >> 0x1e;
    iVar14 = (int)pbVar16;
    pbVar19 = pbVar22;
    if ((ulong)pbVar22 >> 0x3e == 3) {
      uVar27 = 0;
      if ((((pbVar16 != (byte *)0x0) || (pbVar22 != (byte *)0xc000000000000000)) ||
          (uVar24 >> 0x3e < 3)) || ((uVar27 = 0, lVar31 != 0 || (uVar24 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar15 = (byte *)0x1;
    }
    else if (uVar11 >> 0x1e < 2) {
      if (uVar25 == 0) {
        uVar27 = (ulong)pbVar22 >> 0x30 & 0xff;
      }
      else {
        iVar26 = (int)((ulong)pbVar16 >> 0x20);
        if (SBORROW4(iVar26,iVar14)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar13)();
        }
        uVar27 = (ulong)(iVar26 - iVar14);
      }
joined_r0x000100e26170:
      if (1 < uVar12 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar28 == 0) {
        uVar29 = uVar24 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar26 = (int)((ulong)lVar31 >> 0x20);
      if (SBORROW4(iVar26,(int)lVar31)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar13)();
      }
      if (uVar27 == (long)(iVar26 - (int)lVar31)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar15 = (byte *)0x0;
    }
    else {
      if (uVar25 == 2) {
        uVar27 = *(long *)(pbVar16 + 0x18) - *(long *)(pbVar16 + 0x10);
        if (SBORROW8(*(long *)(pbVar16 + 0x18),*(long *)(pbVar16 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar13)();
        }
        goto joined_r0x000100e26170;
      }
      uVar27 = 0;
      if (uVar28 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar28 == 2) {
        uVar29 = *(long *)(lVar31 + 0x18) - *(long *)(lVar31 + 0x10);
        if (SBORROW8(*(long *)(lVar31 + 0x18),*(long *)(lVar31 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar13)();
        }
code_r0x000100e2608c:
        if (uVar27 != uVar29) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar27 < 1) goto code_r0x000100e26128;
        if (uVar25 < 2) {
          if (uVar25 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar16;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar16 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar16 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar16 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar16 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar16 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar16 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar16 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar22;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar22 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar22 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar22 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar22 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar22 >> 0x28);
            pbVar19 = (byte *)((long)register0x00000008 + (((ulong)pbVar22 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar15 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar14;
          unaff_x23 = (byte *)(((long)pbVar16 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar16 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar13)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar22;
          if (pbVar16 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar16 = (byte *)0x0;
          }
          else {
            pbVar19 = pbVar16;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar19)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar13)();
            }
            pbVar16 = pbVar16 + ((long)unaff_x25 - (long)pbVar19);
            func_0x000107c5ec38();
            unaff_x19 = pbVar16;
            if (pbVar16 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar19) {
                pbVar19 = unaff_x23;
              }
              pbVar19 = pbVar19 + (long)pbVar16;
              goto code_r0x000100e262a4;
            }
          }
          pbVar19 = (byte *)0x0;
        }
        else {
          if (uVar25 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar19 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar32 = *(long *)(pbVar16 + 0x10);
          unaff_x24 = *(byte **)(pbVar16 + 0x18);
          func_0x000107c5ec30();
          pbVar19 = pbVar16;
          if (pbVar16 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar32,(long)pbVar19)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar13)();
            }
            pbVar16 = pbVar16 + (lVar32 - (long)pbVar19);
          }
          unaff_x23 = unaff_x24 + -lVar32;
          if (SBORROW8((long)unaff_x24,lVar32)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar13)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar16;
          unaff_x25 = pbVar22;
          if (pbVar16 == (byte *)0x0) {
            pbVar19 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar19) {
              pbVar19 = unaff_x23;
            }
            pbVar19 = pbVar19 + (long)pbVar16;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (byte *)((ulong)pbVar22 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar16,pbVar19,lVar31,
                            uVar24);
        pbVar15 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar24;
      }
      else {
        pbVar15 = (byte *)(ulong)(uVar27 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar15;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(byte **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar18 = *(byte **)pbVar15;
    pbVar16 = *(byte **)(pbVar15 + 8);
    pbVar30 = *(byte **)(pbVar15 + 0x18);
    bVar33 = pbVar15[0x28];
    pbVar22 = (byte *)((ulong)*(uint *)(pbVar15 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar15 + 0x15) << 0x28 | (ulong)pbVar15[0x10]);
    pbVar20 = pbVar16;
    if (bVar33 < 3) {
      if (bVar33 == 0) {
        if (pbVar19[0x28] == 0) {
          lVar31 = *(long *)pbVar19;
          uVar17 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar18,lVar31,uVar17);
          return (byte *)(ulong)((uint)pbVar18 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar33 == 1) {
        if (pbVar19[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar21 = *(byte **)(pbVar19 + 8);
        pbVar23 = *(byte **)(pbVar19 + 0x10);
        lVar31 = *(long *)pbVar19;
        uVar17 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar18,lVar31,uVar17);
        if (((ulong)pbVar18 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar18 = pbVar16;
        pbVar20 = pbVar22;
        if ((pbVar16 == pbVar21) && (pbVar22 == pbVar23)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar19[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar21 = *(byte **)pbVar19;
        pbVar23 = *(byte **)(pbVar19 + 8);
        lVar31 = *(long *)(pbVar19 + 0x18);
        if ((pbVar18 == pbVar21) && (pbVar16 == pbVar23)) {
          if (((pbVar15[0x10] ^ pbVar19[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar30 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar31 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar31);
          func_0x000107c61174();
          pbVar16 = pbVar30;
          func_0x000107c60118();
          func_0x000107c61170(pbVar30);
          func_0x000107c61170(lVar31);
          pbVar30 = pbVar16;
joined_r0x000100e266a4:
          if (((ulong)pbVar30 & 1) == 0) {
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
      )(pbVar18,pbVar20,pbVar21,pbVar23,0);
      return pbVar18;
    }
    lVar32 = *(long *)(pbVar15 + 0x20);
    if (bVar33 < 5) {
      if (bVar33 != 3) {
        if (pbVar19[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar21 = *(byte **)pbVar19;
        pbVar23 = *(byte **)(pbVar19 + 8);
        if (((pbVar18 == pbVar21) && (pbVar16 == pbVar23)) &&
           (pbVar18 = pbVar22, pbVar20 = pbVar30, pbVar21 = *(byte **)(pbVar19 + 0x10),
           pbVar23 = *(byte **)(pbVar19 + 0x18),
           pbVar22 == *(byte **)(pbVar19 + 0x10) && pbVar30 == *(byte **)(pbVar19 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar19[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar19 != ((uint)pbVar18 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar23 = *(byte **)(pbVar19 + 0x10);
      lVar31 = *(long *)(pbVar19 + 0x20);
      if (pbVar22 == (byte *)0x0) {
        if (pbVar23 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar23 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar21 = *(byte **)(pbVar19 + 8);
        pbVar18 = pbVar16;
        pbVar20 = pbVar22;
        if ((pbVar16 != pbVar21) || (pbVar22 != pbVar23)) goto code_r0x000107c605b8;
      }
      if (lVar32 != 0) {
        if (lVar31 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar30 == *(byte **)(pbVar19 + 0x18)) && (lVar32 == lVar31)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar30,lVar32,*(byte **)(pbVar19 + 0x18),lVar31,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar31 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar33 != 5) {
      if ((((pbVar30 == (byte *)0x0 && pbVar16 == (byte *)0x0) && pbVar18 == (byte *)0x0) &&
          lVar32 == 0) && pbVar22 == (byte *)0x0) {
        if (pbVar19[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar32 = *(long *)(pbVar19 + 0x20);
        lVar31 = *(long *)(pbVar19 + 0x18);
        bVar33 = pbVar19[8] | (byte)lVar31;
        bVar34 = pbVar19[9] | (byte)((ulong)lVar31 >> 8);
        bVar35 = pbVar19[10] | (byte)((ulong)lVar31 >> 0x10);
        bVar36 = pbVar19[0xb] | (byte)((ulong)lVar31 >> 0x18);
        bVar37 = pbVar19[0xc] | (byte)((ulong)lVar31 >> 0x20);
        bVar38 = pbVar19[0xd] | (byte)((ulong)lVar31 >> 0x28);
        bVar39 = pbVar19[0xe] | (byte)((ulong)lVar31 >> 0x30);
        bVar40 = pbVar19[0xf] | (byte)((ulong)lVar31 >> 0x38);
        bVar41 = pbVar19[0x10] | (byte)lVar32;
        bVar42 = pbVar19[0x11] | (byte)((ulong)lVar32 >> 8);
        bVar43 = pbVar19[0x12] | (byte)((ulong)lVar32 >> 0x10);
        bVar44 = pbVar19[0x13] | (byte)((ulong)lVar32 >> 0x18);
        bVar45 = pbVar19[0x14] | (byte)((ulong)lVar32 >> 0x20);
        bVar46 = pbVar19[0x15] | (byte)((ulong)lVar32 >> 0x28);
        bVar47 = pbVar19[0x16] | (byte)((ulong)lVar32 >> 0x30);
        bVar48 = pbVar19[0x17] | (byte)((ulong)lVar32 >> 0x38);
        auVar49[1] = bVar34;
        auVar49[0] = bVar33;
        auVar49[2] = bVar35;
        auVar49[3] = bVar36;
        auVar49[4] = bVar37;
        auVar49[5] = bVar38;
        auVar49[6] = bVar39;
        auVar49[7] = bVar40;
        auVar49[8] = bVar41;
        auVar49[9] = bVar42;
        auVar49[10] = bVar43;
        auVar49[0xb] = bVar44;
        auVar49[0xc] = bVar45;
        auVar49[0xd] = bVar46;
        auVar49[0xe] = bVar47;
        auVar49[0xf] = bVar48;
        auVar10[1] = bVar34;
        auVar10[0] = bVar33;
        auVar10[2] = bVar35;
        auVar10[3] = bVar36;
        auVar10[4] = bVar37;
        auVar10[5] = bVar38;
        auVar10[6] = bVar39;
        auVar10[7] = bVar40;
        auVar10[8] = bVar41;
        auVar10[9] = bVar42;
        auVar10[10] = bVar43;
        auVar10[0xb] = bVar44;
        auVar10[0xc] = bVar45;
        auVar10[0xd] = bVar46;
        auVar10[0xe] = bVar47;
        auVar10[0xf] = bVar48;
        auVar49 = NEON_ext(auVar49,auVar10,8,1);
        if (CONCAT17(bVar40 | auVar49[7],
                     CONCAT16(bVar39 | auVar49[6],
                              CONCAT15(bVar38 | auVar49[5],
                                       CONCAT14(bVar37 | auVar49[4],
                                                CONCAT13(bVar36 | auVar49[3],
                                                         CONCAT12(bVar35 | auVar49[2],
                                                                  CONCAT11(bVar34 | auVar49[1],
                                                                           bVar33 | auVar49[0]))))))
                    ) == 0 && *(long *)pbVar19 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar18 == (byte *)0x1) &&
         (((pbVar30 == (byte *)0x0 && pbVar16 == (byte *)0x0) && pbVar22 == (byte *)0x0) &&
          lVar32 == 0)) {
        if (pbVar19[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar19 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar19[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar19 != 2) {
          return (byte *)0x0;
        }
      }
      lVar32 = *(long *)(pbVar19 + 0x20);
      lVar31 = *(long *)(pbVar19 + 0x18);
      bVar33 = pbVar19[8] | (byte)lVar31;
      bVar34 = pbVar19[9] | (byte)((ulong)lVar31 >> 8);
      bVar35 = pbVar19[10] | (byte)((ulong)lVar31 >> 0x10);
      bVar36 = pbVar19[0xb] | (byte)((ulong)lVar31 >> 0x18);
      bVar37 = pbVar19[0xc] | (byte)((ulong)lVar31 >> 0x20);
      bVar38 = pbVar19[0xd] | (byte)((ulong)lVar31 >> 0x28);
      bVar39 = pbVar19[0xe] | (byte)((ulong)lVar31 >> 0x30);
      bVar40 = pbVar19[0xf] | (byte)((ulong)lVar31 >> 0x38);
      bVar41 = pbVar19[0x10] | (byte)lVar32;
      bVar42 = pbVar19[0x11] | (byte)((ulong)lVar32 >> 8);
      bVar43 = pbVar19[0x12] | (byte)((ulong)lVar32 >> 0x10);
      bVar44 = pbVar19[0x13] | (byte)((ulong)lVar32 >> 0x18);
      bVar45 = pbVar19[0x14] | (byte)((ulong)lVar32 >> 0x20);
      bVar46 = pbVar19[0x15] | (byte)((ulong)lVar32 >> 0x28);
      bVar47 = pbVar19[0x16] | (byte)((ulong)lVar32 >> 0x30);
      bVar48 = pbVar19[0x17] | (byte)((ulong)lVar32 >> 0x38);
      auVar8[1] = bVar34;
      auVar8[0] = bVar33;
      auVar8[2] = bVar35;
      auVar8[3] = bVar36;
      auVar8[4] = bVar37;
      auVar8[5] = bVar38;
      auVar8[6] = bVar39;
      auVar8[7] = bVar40;
      auVar8[8] = bVar41;
      auVar8[9] = bVar42;
      auVar8[10] = bVar43;
      auVar8[0xb] = bVar44;
      auVar8[0xc] = bVar45;
      auVar8[0xd] = bVar46;
      auVar8[0xe] = bVar47;
      auVar8[0xf] = bVar48;
      auVar9[1] = bVar34;
      auVar9[0] = bVar33;
      auVar9[2] = bVar35;
      auVar9[3] = bVar36;
      auVar9[4] = bVar37;
      auVar9[5] = bVar38;
      auVar9[6] = bVar39;
      auVar9[7] = bVar40;
      auVar9[8] = bVar41;
      auVar9[9] = bVar42;
      auVar9[10] = bVar43;
      auVar9[0xb] = bVar44;
      auVar9[0xc] = bVar45;
      auVar9[0xd] = bVar46;
      auVar9[0xe] = bVar47;
      auVar9[0xf] = bVar48;
      auVar49 = NEON_ext(auVar8,auVar9,8,1);
      lVar31 = CONCAT17(bVar40 | auVar49[7],
                        CONCAT16(bVar39 | auVar49[6],
                                 CONCAT15(bVar38 | auVar49[5],
                                          CONCAT14(bVar37 | auVar49[4],
                                                   CONCAT13(bVar36 | auVar49[3],
                                                            CONCAT12(bVar35 | auVar49[2],
                                                                     CONCAT11(bVar34 | auVar49[1],
                                                                              bVar33 | auVar49[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar19[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar31 = *(long *)(pbVar19 + 8);
    uVar24 = *(ulong *)(pbVar19 + 0x10);
    lVar32 = *(long *)pbVar19;
    uVar17 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar18,lVar32,uVar17);
    if (((ulong)pbVar18 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(byte **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103d3ad0c; end: 103d3adab;  */

/* WARNING: Possible PIC construction at 0x000103d3ad58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d3ad68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d3ad5c) */
/* WARNING: Removing unreachable block (ram,0x000103d3ad6c) */

void FUN_103d3ad0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113005270 != -1) {
    func_0x000107c61568(0x113005270,FUN_103d3a884);
  }
  uVar5 = uRam0000000113810a98;
  uVar4 = uRam0000000113810a90;
  uVar3 = uRam0000000113810a88;
  uVar2 = uRam0000000113810a80;
  uVar1 = uRam0000000113810a78;
  *param_1 = uRam0000000113810a70;
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



/* Entry: 103d3adac; end: 103d3adbf;  */

void FUN_103d3adac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113005c08;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113005c08,&UNK_10dc85be8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d3adc0; end: 103d3adf3;  */

void FUN_103d3adc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d3adf4; end: 103d3aee7;  */

void FUN_103d3adf4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d3aee8; end: 103d3af97;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d3aee8(byte *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulong uVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  byte *pbVar30;
  byte *unaff_x19;
  long lVar31;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar32;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  undefined1 auVar49 [16];
  
  uVar29 = *(ulong *)(param_1 + 8);
  pbVar16 = *(byte **)(param_1 + 0x10);
  pbVar22 = *(byte **)(param_1 + 0x18);
  lVar31 = *(long *)(param_2 + 0x10);
  uVar24 = *(ulong *)(param_2 + 0x18);
  uVar27 = 0x100;
  if ((param_1[1] & 1) == 0) {
    uVar27 = 0;
  }
  uVar1 = 0x10000;
  if ((param_1[2] & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x1000000;
  if ((param_1[3] & 1) == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x100000000;
  if ((param_1[4] & 1) == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x100;
  if ((param_2[1] & 1) == 0) {
    uVar4 = 0;
  }
  uVar5 = 0x10000;
  if ((param_2[2] & 1) == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x1000000;
  if ((param_2[3] & 1) == 0) {
    uVar6 = 0;
  }
  uVar7 = 0x100000000;
  if ((param_2[4] & 1) == 0) {
    uVar7 = 0;
  }
  if (((uVar27 | (ulong)*param_1 & 1 | uVar1 | uVar2 | uVar3) !=
       (uVar4 | (ulong)*param_2 & 1 | uVar5 | uVar6 | uVar7)) ||
     (FUN_103d3af98(uVar29,*(undefined8 *)(param_2 + 8)), (uVar29 & 1) == 0)) {
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
    uVar11 = (uint)((ulong)pbVar22 >> 0x20);
    uVar25 = uVar11 >> 0x1e;
    uVar12 = (uint)(uVar24 >> 0x20);
    uVar28 = uVar12 >> 0x1e;
    iVar14 = (int)pbVar16;
    pbVar19 = pbVar22;
    if ((ulong)pbVar22 >> 0x3e == 3) {
      uVar27 = 0;
      if ((((pbVar16 != (byte *)0x0) || (pbVar22 != (byte *)0xc000000000000000)) ||
          (uVar24 >> 0x3e < 3)) || ((uVar27 = 0, lVar31 != 0 || (uVar24 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar15 = (byte *)0x1;
    }
    else if (uVar11 >> 0x1e < 2) {
      if (uVar25 == 0) {
        uVar27 = (ulong)pbVar22 >> 0x30 & 0xff;
      }
      else {
        iVar26 = (int)((ulong)pbVar16 >> 0x20);
        if (SBORROW4(iVar26,iVar14)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar13)();
        }
        uVar27 = (ulong)(iVar26 - iVar14);
      }
joined_r0x000100e26170:
      if (1 < uVar12 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar28 == 0) {
        uVar29 = uVar24 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar26 = (int)((ulong)lVar31 >> 0x20);
      if (SBORROW4(iVar26,(int)lVar31)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar13)();
      }
      if (uVar27 == (long)(iVar26 - (int)lVar31)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar15 = (byte *)0x0;
    }
    else {
      if (uVar25 == 2) {
        uVar27 = *(long *)(pbVar16 + 0x18) - *(long *)(pbVar16 + 0x10);
        if (SBORROW8(*(long *)(pbVar16 + 0x18),*(long *)(pbVar16 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar13)();
        }
        goto joined_r0x000100e26170;
      }
      uVar27 = 0;
      if (uVar28 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar28 == 2) {
        uVar29 = *(long *)(lVar31 + 0x18) - *(long *)(lVar31 + 0x10);
        if (SBORROW8(*(long *)(lVar31 + 0x18),*(long *)(lVar31 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar13)();
        }
code_r0x000100e2608c:
        if (uVar27 != uVar29) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar27 < 1) goto code_r0x000100e26128;
        if (uVar25 < 2) {
          if (uVar25 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar16;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar16 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar16 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar16 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar16 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar16 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar16 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar16 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar22;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar22 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar22 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar22 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar22 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar22 >> 0x28);
            pbVar19 = (byte *)((long)register0x00000008 + (((ulong)pbVar22 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar15 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar14;
          unaff_x23 = (byte *)(((long)pbVar16 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar16 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar13)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar22;
          if (pbVar16 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar16 = (byte *)0x0;
          }
          else {
            pbVar19 = pbVar16;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar19)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar13)();
            }
            pbVar16 = pbVar16 + ((long)unaff_x25 - (long)pbVar19);
            func_0x000107c5ec38();
            unaff_x19 = pbVar16;
            if (pbVar16 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar19) {
                pbVar19 = unaff_x23;
              }
              pbVar19 = pbVar19 + (long)pbVar16;
              goto code_r0x000100e262a4;
            }
          }
          pbVar19 = (byte *)0x0;
        }
        else {
          if (uVar25 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar19 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar32 = *(long *)(pbVar16 + 0x10);
          unaff_x24 = *(byte **)(pbVar16 + 0x18);
          func_0x000107c5ec30();
          pbVar19 = pbVar16;
          if (pbVar16 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar32,(long)pbVar19)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar13)();
            }
            pbVar16 = pbVar16 + (lVar32 - (long)pbVar19);
          }
          unaff_x23 = unaff_x24 + -lVar32;
          if (SBORROW8((long)unaff_x24,lVar32)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar13)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar16;
          unaff_x25 = pbVar22;
          if (pbVar16 == (byte *)0x0) {
            pbVar19 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar19) {
              pbVar19 = unaff_x23;
            }
            pbVar19 = pbVar19 + (long)pbVar16;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar22 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar16,pbVar19,lVar31,
                            uVar24);
        pbVar15 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar24;
      }
      else {
        pbVar15 = (byte *)(ulong)(uVar27 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar15;
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
    pbVar18 = *(byte **)pbVar15;
    pbVar16 = *(byte **)(pbVar15 + 8);
    pbVar30 = *(byte **)(pbVar15 + 0x18);
    bVar33 = pbVar15[0x28];
    pbVar22 = (byte *)((ulong)*(uint *)(pbVar15 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar15 + 0x15) << 0x28 | (ulong)pbVar15[0x10]);
    pbVar20 = pbVar16;
    if (bVar33 < 3) {
      if (bVar33 == 0) {
        if (pbVar19[0x28] == 0) {
          lVar31 = *(long *)pbVar19;
          uVar17 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar18,lVar31,uVar17);
          return (byte *)(ulong)((uint)pbVar18 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar33 == 1) {
        if (pbVar19[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar21 = *(byte **)(pbVar19 + 8);
        pbVar23 = *(byte **)(pbVar19 + 0x10);
        lVar31 = *(long *)pbVar19;
        uVar17 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar18,lVar31,uVar17);
        if (((ulong)pbVar18 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar18 = pbVar16;
        pbVar20 = pbVar22;
        if ((pbVar16 == pbVar21) && (pbVar22 == pbVar23)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar19[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar21 = *(byte **)pbVar19;
        pbVar23 = *(byte **)(pbVar19 + 8);
        lVar31 = *(long *)(pbVar19 + 0x18);
        if ((pbVar18 == pbVar21) && (pbVar16 == pbVar23)) {
          if (((pbVar15[0x10] ^ pbVar19[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar30 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar31 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar31);
          func_0x000107c61174();
          pbVar16 = pbVar30;
          func_0x000107c60118();
          func_0x000107c61170(pbVar30);
          func_0x000107c61170(lVar31);
          pbVar30 = pbVar16;
joined_r0x000100e266a4:
          if (((ulong)pbVar30 & 1) == 0) {
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
      )(pbVar18,pbVar20,pbVar21,pbVar23,0);
      return pbVar18;
    }
    lVar32 = *(long *)(pbVar15 + 0x20);
    if (bVar33 < 5) {
      if (bVar33 != 3) {
        if (pbVar19[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar21 = *(byte **)pbVar19;
        pbVar23 = *(byte **)(pbVar19 + 8);
        if (((pbVar18 == pbVar21) && (pbVar16 == pbVar23)) &&
           (pbVar18 = pbVar22, pbVar20 = pbVar30, pbVar21 = *(byte **)(pbVar19 + 0x10),
           pbVar23 = *(byte **)(pbVar19 + 0x18),
           pbVar22 == *(byte **)(pbVar19 + 0x10) && pbVar30 == *(byte **)(pbVar19 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar19[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar19 != ((uint)pbVar18 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar23 = *(byte **)(pbVar19 + 0x10);
      lVar31 = *(long *)(pbVar19 + 0x20);
      if (pbVar22 == (byte *)0x0) {
        if (pbVar23 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar23 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar21 = *(byte **)(pbVar19 + 8);
        pbVar18 = pbVar16;
        pbVar20 = pbVar22;
        if ((pbVar16 != pbVar21) || (pbVar22 != pbVar23)) goto code_r0x000107c605b8;
      }
      if (lVar32 != 0) {
        if (lVar31 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar30 == *(byte **)(pbVar19 + 0x18)) && (lVar32 == lVar31)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar30,lVar32,*(byte **)(pbVar19 + 0x18),lVar31,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar31 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar33 != 5) {
      if ((((pbVar30 == (byte *)0x0 && pbVar16 == (byte *)0x0) && pbVar18 == (byte *)0x0) &&
          lVar32 == 0) && pbVar22 == (byte *)0x0) {
        if (pbVar19[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar32 = *(long *)(pbVar19 + 0x20);
        lVar31 = *(long *)(pbVar19 + 0x18);
        bVar33 = pbVar19[8] | (byte)lVar31;
        bVar34 = pbVar19[9] | (byte)((ulong)lVar31 >> 8);
        bVar35 = pbVar19[10] | (byte)((ulong)lVar31 >> 0x10);
        bVar36 = pbVar19[0xb] | (byte)((ulong)lVar31 >> 0x18);
        bVar37 = pbVar19[0xc] | (byte)((ulong)lVar31 >> 0x20);
        bVar38 = pbVar19[0xd] | (byte)((ulong)lVar31 >> 0x28);
        bVar39 = pbVar19[0xe] | (byte)((ulong)lVar31 >> 0x30);
        bVar40 = pbVar19[0xf] | (byte)((ulong)lVar31 >> 0x38);
        bVar41 = pbVar19[0x10] | (byte)lVar32;
        bVar42 = pbVar19[0x11] | (byte)((ulong)lVar32 >> 8);
        bVar43 = pbVar19[0x12] | (byte)((ulong)lVar32 >> 0x10);
        bVar44 = pbVar19[0x13] | (byte)((ulong)lVar32 >> 0x18);
        bVar45 = pbVar19[0x14] | (byte)((ulong)lVar32 >> 0x20);
        bVar46 = pbVar19[0x15] | (byte)((ulong)lVar32 >> 0x28);
        bVar47 = pbVar19[0x16] | (byte)((ulong)lVar32 >> 0x30);
        bVar48 = pbVar19[0x17] | (byte)((ulong)lVar32 >> 0x38);
        auVar49[1] = bVar34;
        auVar49[0] = bVar33;
        auVar49[2] = bVar35;
        auVar49[3] = bVar36;
        auVar49[4] = bVar37;
        auVar49[5] = bVar38;
        auVar49[6] = bVar39;
        auVar49[7] = bVar40;
        auVar49[8] = bVar41;
        auVar49[9] = bVar42;
        auVar49[10] = bVar43;
        auVar49[0xb] = bVar44;
        auVar49[0xc] = bVar45;
        auVar49[0xd] = bVar46;
        auVar49[0xe] = bVar47;
        auVar49[0xf] = bVar48;
        auVar10[1] = bVar34;
        auVar10[0] = bVar33;
        auVar10[2] = bVar35;
        auVar10[3] = bVar36;
        auVar10[4] = bVar37;
        auVar10[5] = bVar38;
        auVar10[6] = bVar39;
        auVar10[7] = bVar40;
        auVar10[8] = bVar41;
        auVar10[9] = bVar42;
        auVar10[10] = bVar43;
        auVar10[0xb] = bVar44;
        auVar10[0xc] = bVar45;
        auVar10[0xd] = bVar46;
        auVar10[0xe] = bVar47;
        auVar10[0xf] = bVar48;
        auVar49 = NEON_ext(auVar49,auVar10,8,1);
        if (CONCAT17(bVar40 | auVar49[7],
                     CONCAT16(bVar39 | auVar49[6],
                              CONCAT15(bVar38 | auVar49[5],
                                       CONCAT14(bVar37 | auVar49[4],
                                                CONCAT13(bVar36 | auVar49[3],
                                                         CONCAT12(bVar35 | auVar49[2],
                                                                  CONCAT11(bVar34 | auVar49[1],
                                                                           bVar33 | auVar49[0]))))))
                    ) == 0 && *(long *)pbVar19 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar18 == (byte *)0x1) &&
         (((pbVar30 == (byte *)0x0 && pbVar16 == (byte *)0x0) && pbVar22 == (byte *)0x0) &&
          lVar32 == 0)) {
        if (pbVar19[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar19 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar19[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar19 != 2) {
          return (byte *)0x0;
        }
      }
      lVar32 = *(long *)(pbVar19 + 0x20);
      lVar31 = *(long *)(pbVar19 + 0x18);
      bVar33 = pbVar19[8] | (byte)lVar31;
      bVar34 = pbVar19[9] | (byte)((ulong)lVar31 >> 8);
      bVar35 = pbVar19[10] | (byte)((ulong)lVar31 >> 0x10);
      bVar36 = pbVar19[0xb] | (byte)((ulong)lVar31 >> 0x18);
      bVar37 = pbVar19[0xc] | (byte)((ulong)lVar31 >> 0x20);
      bVar38 = pbVar19[0xd] | (byte)((ulong)lVar31 >> 0x28);
      bVar39 = pbVar19[0xe] | (byte)((ulong)lVar31 >> 0x30);
      bVar40 = pbVar19[0xf] | (byte)((ulong)lVar31 >> 0x38);
      bVar41 = pbVar19[0x10] | (byte)lVar32;
      bVar42 = pbVar19[0x11] | (byte)((ulong)lVar32 >> 8);
      bVar43 = pbVar19[0x12] | (byte)((ulong)lVar32 >> 0x10);
      bVar44 = pbVar19[0x13] | (byte)((ulong)lVar32 >> 0x18);
      bVar45 = pbVar19[0x14] | (byte)((ulong)lVar32 >> 0x20);
      bVar46 = pbVar19[0x15] | (byte)((ulong)lVar32 >> 0x28);
      bVar47 = pbVar19[0x16] | (byte)((ulong)lVar32 >> 0x30);
      bVar48 = pbVar19[0x17] | (byte)((ulong)lVar32 >> 0x38);
      auVar8[1] = bVar34;
      auVar8[0] = bVar33;
      auVar8[2] = bVar35;
      auVar8[3] = bVar36;
      auVar8[4] = bVar37;
      auVar8[5] = bVar38;
      auVar8[6] = bVar39;
      auVar8[7] = bVar40;
      auVar8[8] = bVar41;
      auVar8[9] = bVar42;
      auVar8[10] = bVar43;
      auVar8[0xb] = bVar44;
      auVar8[0xc] = bVar45;
      auVar8[0xd] = bVar46;
      auVar8[0xe] = bVar47;
      auVar8[0xf] = bVar48;
      auVar9[1] = bVar34;
      auVar9[0] = bVar33;
      auVar9[2] = bVar35;
      auVar9[3] = bVar36;
      auVar9[4] = bVar37;
      auVar9[5] = bVar38;
      auVar9[6] = bVar39;
      auVar9[7] = bVar40;
      auVar9[8] = bVar41;
      auVar9[9] = bVar42;
      auVar9[10] = bVar43;
      auVar9[0xb] = bVar44;
      auVar9[0xc] = bVar45;
      auVar9[0xd] = bVar46;
      auVar9[0xe] = bVar47;
      auVar9[0xf] = bVar48;
      auVar49 = NEON_ext(auVar8,auVar9,8,1);
      lVar31 = CONCAT17(bVar40 | auVar49[7],
                        CONCAT16(bVar39 | auVar49[6],
                                 CONCAT15(bVar38 | auVar49[5],
                                          CONCAT14(bVar37 | auVar49[4],
                                                   CONCAT13(bVar36 | auVar49[3],
                                                            CONCAT12(bVar35 | auVar49[2],
                                                                     CONCAT11(bVar34 | auVar49[1],
                                                                              bVar33 | auVar49[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar19[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar31 = *(long *)(pbVar19 + 8);
    uVar24 = *(ulong *)(pbVar19 + 0x10);
    lVar32 = *(long *)pbVar19;
    uVar17 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar18,lVar32,uVar17);
    if (((ulong)pbVar18 & 1) == 0) {
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



/* Entry: 103d3af98; end: 103d3b0c7;  */

uint FUN_103d3af98(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_278 [184];
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_138 = puVar4[0x11];
        uStack_140 = puVar4[0x10];
        uStack_128 = puVar4[0x13];
        uStack_130 = puVar4[0x12];
        uStack_118 = puVar4[0x15];
        uStack_120 = puVar4[0x14];
        uStack_110 = puVar4[0x16];
        uStack_178 = puVar4[9];
        uStack_180 = puVar4[8];
        uStack_168 = puVar4[0xb];
        uStack_170 = puVar4[10];
        uStack_158 = puVar4[0xd];
        uStack_160 = puVar4[0xc];
        uStack_148 = puVar4[0xf];
        uStack_150 = puVar4[0xe];
        uStack_1b8 = puVar4[1];
        uStack_1c0 = *puVar4;
        uStack_1a8 = puVar4[3];
        uStack_1b0 = puVar4[2];
        uStack_198 = puVar4[5];
        uStack_1a0 = puVar4[4];
        uStack_188 = puVar4[7];
        uStack_190 = puVar4[6];
        uStack_78 = puVar5[0x11];
        uStack_80 = puVar5[0x10];
        uStack_68 = puVar5[0x13];
        uStack_70 = puVar5[0x12];
        uStack_58 = puVar5[0x15];
        uStack_60 = puVar5[0x14];
        uStack_50 = puVar5[0x16];
        uStack_b8 = puVar5[9];
        uStack_c0 = puVar5[8];
        uStack_a8 = puVar5[0xb];
        uStack_b0 = puVar5[10];
        uStack_98 = puVar5[0xd];
        uStack_a0 = puVar5[0xc];
        uStack_88 = puVar5[0xf];
        uStack_90 = puVar5[0xe];
        uStack_f8 = puVar5[1];
        uStack_100 = *puVar5;
        uStack_e8 = puVar5[3];
        uStack_f0 = puVar5[2];
        uStack_d8 = puVar5[5];
        uStack_e0 = puVar5[4];
        uStack_c8 = puVar5[7];
        uStack_d0 = puVar5[6];
        func_0x000101713564(&uStack_1c0,auStack_278);
        func_0x000101713564(&uStack_100,auStack_278);
        puVar1 = &uStack_1c0;
        FUN_103d3ca10(puVar1,&uStack_100);
        uVar3 = (uint)puVar1;
        func_0x0001017135a0(&uStack_100);
        func_0x0001017135a0(&uStack_1c0);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x17;
        puVar4 = puVar4 + 0x17;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 103d3b0c8; end: 103d3b677;  */

undefined1 * FUN_103d3b0c8(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  int iVar13;
  ulong uVar14;
  char *pcVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong uVar22;
  undefined1 auStack_230 [24];
  byte abStack_218 [136];
  ulong uStack_190;
  undefined1 *puStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  ulong uStack_158;
  undefined1 *puStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  ulong uStack_128;
  undefined1 *puStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_100;
  undefined1 *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 *puStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 == *(long *)(param_2 + 0x10)) {
    if ((lVar10 != 0) && (param_1 != param_2)) {
      puVar20 = (ulong *)(param_1 + 0x20);
      puVar21 = (ulong *)(param_2 + 0x20);
      do {
        lVar10 = lVar10 + -1;
        uStack_128 = puVar20[0xd];
        puStack_130 = (undefined1 *)puVar20[0xc];
        uStack_118 = puVar20[0xf];
        puStack_120 = (undefined1 *)puVar20[0xe];
        uStack_110 = puVar20[0x10];
        uStack_168 = puVar20[5];
        uStack_170 = puVar20[4];
        uStack_158 = puVar20[7];
        puStack_160 = (undefined1 *)puVar20[6];
        uStack_148 = puVar20[9];
        puStack_150 = (undefined1 *)puVar20[8];
        uStack_138 = puVar20[0xb];
        puStack_140 = (undefined1 *)puVar20[10];
        param_2 = (undefined1 *)puVar20[1];
        uVar22 = *puVar20;
        uStack_178 = puVar20[3];
        uStack_180 = puVar20[2];
        uStack_98 = puVar21[0xd];
        puStack_a0 = (undefined1 *)puVar21[0xc];
        uStack_88 = puVar21[0xf];
        puStack_90 = (undefined1 *)puVar21[0xe];
        uStack_80 = puVar21[0x10];
        uStack_d8 = puVar21[5];
        uStack_e0 = puVar21[4];
        uStack_c8 = puVar21[7];
        puStack_d0 = (undefined1 *)puVar21[6];
        uStack_b8 = puVar21[9];
        puStack_c0 = (undefined1 *)puVar21[8];
        uStack_a8 = puVar21[0xb];
        puStack_b0 = (undefined1 *)puVar21[10];
        puStack_f8 = (undefined1 *)puVar21[1];
        uStack_100 = *puVar21;
        uStack_e8 = puVar21[3];
        uStack_f0 = puVar21[2];
        uStack_190 = uVar22;
        puStack_188 = param_2;
        if (((uVar22 != uStack_100) || (param_2 != puStack_f8)) &&
           (func_0x000107c605b8(), (uVar22 & 1) == 0)) goto LAB_103d3b618;
        if ((char)uStack_e8 == '\x01') {
          if (uStack_f0 == 0) {
            if (uStack_180 != 0) goto LAB_103d3b618;
          }
          else if (uStack_f0 == 1) {
            if (uStack_180 != 1) goto LAB_103d3b618;
          }
          else if (uStack_180 != 2) goto LAB_103d3b618;
        }
        else if (uStack_180 != uStack_f0) goto LAB_103d3b618;
        if (((((uStack_170 != uStack_e0) ||
              (((uStack_168 != uStack_d8 || (puStack_160 != puStack_d0)) &&
               (uVar22 = uStack_168, param_2 = puStack_160, func_0x000107c605b8(), (uVar22 & 1) == 0
               )))) || (((uStack_158 != uStack_c8 || (puStack_150 != puStack_c0)) &&
                        (uVar22 = uStack_158, param_2 = puStack_150, func_0x000107c605b8(),
                        (uVar22 & 1) == 0)))) ||
            ((((uStack_148 != uStack_b8 || (puStack_140 != puStack_b0)) &&
              (uVar22 = uStack_148, param_2 = puStack_140, func_0x000107c605b8(), (uVar22 & 1) == 0)
              ) || (((uStack_138 != uStack_a8 || (puStack_130 != puStack_a0)) &&
                    (uVar22 = uStack_138, param_2 = puStack_130, func_0x000107c605b8(),
                    (uVar22 & 1) == 0)))))) ||
           (((param_2 = puStack_120, uStack_128 != uStack_98 || (puStack_120 != puStack_90)) &&
            (uVar22 = uStack_128, func_0x000107c605b8(), (uVar22 & 1) == 0)))) goto LAB_103d3b618;
        uVar3 = uStack_80;
        uVar22 = uStack_88;
        uVar1 = (uint)(uStack_110 >> 0x20);
        uVar11 = uVar1 >> 0x1e;
        uVar2 = (uint)(uStack_80 >> 0x20);
        uVar16 = uVar2 >> 0x1e;
        iVar9 = (int)uStack_118;
        if (uStack_110 >> 0x3e == 3) {
          uVar14 = 0;
          if ((((uStack_118 != 0) || (uStack_110 != 0xc000000000000000)) || (uStack_80 >> 0x3e < 3))
             || ((uVar14 = 0, uStack_88 != 0 || (uStack_80 != 0xc000000000000000))))
          goto joined_r0x000103d3b498;
        }
        else {
          if (uVar1 >> 0x1e < 2) {
            if (uVar11 == 0) {
              uVar14 = uStack_110 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)(uStack_118 >> 0x20);
              if (SBORROW4(iVar13,iVar9)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103d3b664);
                (*pcVar4)();
              }
              uVar14 = (ulong)(iVar13 - iVar9);
            }
joined_r0x000103d3b498:
            if (uVar2 >> 0x1e < 2) goto LAB_103d3b338;
LAB_103d3b304:
            if (uVar16 != 2) {
              if (uVar14 == 0) goto joined_r0x000103d3b60c;
              goto LAB_103d3b618;
            }
            uVar17 = *(long *)(uStack_88 + 0x18) - *(long *)(uStack_88 + 0x10);
            if (SBORROW8(*(long *)(uStack_88 + 0x18),*(long *)(uStack_88 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103d3b658);
              (*pcVar4)();
            }
          }
          else {
            if (uVar11 == 2) {
              uVar14 = *(long *)(uStack_118 + 0x18) - *(long *)(uStack_118 + 0x10);
              if (SBORROW8(*(long *)(uStack_118 + 0x18),*(long *)(uStack_118 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103d3b660);
                (*pcVar4)();
              }
              goto joined_r0x000103d3b498;
            }
            uVar14 = 0;
            if (1 < uVar16) goto LAB_103d3b304;
LAB_103d3b338:
            if (uVar16 == 0) {
              uVar17 = uStack_80 >> 0x30 & 0xff;
            }
            else {
              iVar13 = (int)(uStack_88 >> 0x20);
              if (SBORROW4(iVar13,(int)uStack_88)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103d3b65c);
                (*pcVar4)();
              }
              uVar17 = (ulong)(iVar13 - (int)uStack_88);
            }
          }
          if (uVar14 != uVar17) goto LAB_103d3b618;
          if (0 < (long)uVar14) {
            if (uVar11 < 2) {
              if (uVar11 == 0) {
                auStack_230[0] = (undefined1)uStack_118;
                auStack_230[1] = (undefined1)(uStack_118 >> 8);
                auStack_230[2] = (undefined1)(uStack_118 >> 0x10);
                auStack_230[3] = (undefined1)(uStack_118 >> 0x18);
                auStack_230[4] = (undefined1)(uStack_118 >> 0x20);
                auStack_230[5] = (undefined1)(uStack_118 >> 0x28);
                auStack_230[6] = (undefined1)(uStack_118 >> 0x30);
                auStack_230[7] = (undefined1)(uStack_118 >> 0x38);
                auStack_230[8] = (undefined1)uStack_110;
                auStack_230[9] = (undefined1)(uStack_110 >> 8);
                auStack_230[10] = (undefined1)(uStack_110 >> 0x10);
                auStack_230[0xb] = (undefined1)(uStack_110 >> 0x18);
                auStack_230[0xc] = (undefined1)(uStack_110 >> 0x20);
                auStack_230[0xd] = (undefined1)(uStack_110 >> 0x28);
                param_2 = auStack_230 + (uStack_110 >> 0x30 & 0xff);
                FUN_103d3d6bc(&uStack_190,abStack_218);
                FUN_103d3d6bc(&uStack_100,abStack_218);
                goto LAB_103d3b554;
              }
              lVar18 = (long)iVar9;
              puVar5 = (ulong *)(((long)uStack_118 >> 0x20) - lVar18);
              if ((long)uStack_118 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103d3b668);
                (*pcVar4)();
              }
              FUN_103d3d6bc(&uStack_190,abStack_218);
              puVar6 = &uStack_100;
              FUN_103d3d6bc(puVar6,abStack_218);
              func_0x000107c5ec30();
              if (puVar6 == (ulong *)0x0) {
                func_0x000107c5ec38();
                lVar18 = 0;
LAB_103d3b598:
                param_2 = (undefined1 *)0x0;
              }
              else {
                puVar7 = puVar6;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar18,(long)puVar7)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103d3b674);
                  (*pcVar4)();
                }
                lVar18 = (lVar18 - (long)puVar7) + (long)puVar6;
                func_0x000107c5ec38();
                if (lVar18 == 0) goto LAB_103d3b598;
                if ((long)puVar5 <= (long)puVar7) {
                  puVar7 = puVar5;
                }
                param_2 = (undefined1 *)((long)puVar7 + lVar18);
              }
              func_0x000100e25bdc(abStack_218,lVar18,param_2,uVar22,uVar3);
              func_0x000103d3d6f0(&uStack_100);
              func_0x000103d3d6f0(&uStack_190);
            }
            else {
              if (uVar11 != 2) {
                auStack_230[8] = 0;
                auStack_230[9] = 0;
                auStack_230[10] = 0;
                auStack_230[0xb] = 0;
                auStack_230[0xc] = 0;
                auStack_230[0xd] = 0;
                auStack_230[0] = 0;
                auStack_230[1] = 0;
                auStack_230[2] = 0;
                auStack_230[3] = 0;
                auStack_230[4] = 0;
                auStack_230[5] = 0;
                auStack_230[6] = 0;
                auStack_230[7] = 0;
                FUN_103d3d6bc(&uStack_190,abStack_218);
                FUN_103d3d6bc(&uStack_100,abStack_218);
                param_2 = auStack_230;
LAB_103d3b554:
                func_0x000100e25bdc(abStack_218,auStack_230,param_2,uVar22,uVar3);
                func_0x000103d3d6f0(&uStack_100);
                func_0x000103d3d6f0(&uStack_190);
                if ((abStack_218[0] & 1) != 0) goto joined_r0x000103d3b60c;
                goto LAB_103d3b618;
              }
              lVar18 = *(long *)(uStack_118 + 0x10);
              lVar19 = *(long *)(uStack_118 + 0x18);
              FUN_103d3d6bc(&uStack_190,abStack_218);
              puVar5 = &uStack_100;
              FUN_103d3d6bc(puVar5,abStack_218);
              func_0x000107c5ec30();
              puVar6 = puVar5;
              if (puVar5 != (ulong *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar18,(long)puVar6)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103d3b670);
                  (*pcVar4)();
                }
                puVar5 = (ulong *)((lVar18 - (long)puVar6) + (long)puVar5);
              }
              puVar7 = (ulong *)(lVar19 - lVar18);
              if (SBORROW8(lVar19,lVar18)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103d3b66c);
                (*pcVar4)();
              }
              func_0x000107c5ec38();
              if (puVar5 == (ulong *)0x0) {
                param_2 = (undefined1 *)0x0;
              }
              else {
                if ((long)puVar7 <= (long)puVar6) {
                  puVar6 = puVar7;
                }
                param_2 = (undefined1 *)((long)puVar6 + (long)puVar5);
              }
              func_0x000100e25bdc(abStack_218,puVar5,param_2,uVar22,uVar3);
              func_0x000103d3d6f0(&uStack_100);
              func_0x000103d3d6f0(&uStack_190);
            }
            if ((abStack_218[0] & 1) == 0) goto LAB_103d3b618;
          }
        }
joined_r0x000103d3b60c:
        if (lVar10 == 0) break;
        puVar20 = puVar20 + 0x11;
        puVar21 = puVar21 + 0x11;
      } while( true );
    }
    puVar8 = (undefined1 *)0x1;
  }
  else {
LAB_103d3b618:
    puVar8 = (undefined1 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar8;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)(puVar8 + 0x10);
  if (lVar10 != *(long *)(param_2 + 0x10)) {
    return (undefined1 *)0x0;
  }
  if ((lVar10 != 0) && (puVar8 != param_2)) {
    pcVar15 = param_2 + 0x28;
    plVar12 = (long *)(puVar8 + 0x20);
    do {
      lVar18 = *plVar12;
      lVar19 = *(long *)(pcVar15 + -8);
      if (*pcVar15 == '\x01') {
        if (lVar19 == 0) {
          if (lVar18 != 0) {
            return (undefined1 *)0x0;
          }
        }
        else if (lVar19 == 1) {
          if (lVar18 != 1) {
            return (undefined1 *)0x0;
          }
        }
        else if (lVar18 != 2) {
          return (undefined1 *)0x0;
        }
      }
      else if (lVar18 != lVar19) {
        return (undefined1 *)0x0;
      }
      pcVar15 = pcVar15 + 0x10;
      lVar10 = lVar10 + -1;
      plVar12 = plVar12 + 2;
    } while (lVar10 != 0);
  }
  return (undefined1 *)0x1;
}



/* Entry: 103d3b678; end: 103d3b6ff;  */

undefined8 FUN_103d3b678(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar1 != 0) && (param_1 != param_2)) {
    pcVar3 = (char *)(param_2 + 0x28);
    plVar2 = (long *)(param_1 + 0x20);
    do {
      lVar4 = *plVar2;
      lVar5 = *(long *)(pcVar3 + -8);
      if (*pcVar3 == '\x01') {
        if (lVar5 == 0) {
          if (lVar4 != 0) {
            return 0;
          }
        }
        else if (lVar5 == 1) {
          if (lVar4 != 1) {
            return 0;
          }
        }
        else if (lVar4 != 2) {
          return 0;
        }
      }
      else if (lVar4 != lVar5) {
        return 0;
      }
      pcVar3 = pcVar3 + 0x10;
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 2;
    } while (lVar1 != 0);
  }
  return 1;
}



/* Entry: 103d3b700; end: 103d3bbef;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_103d3b700(ulong param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long lVar15;
  int iVar16;
  ulong unaff_x22;
  ulong *unaff_x23;
  ulong *puVar17;
  ulong unaff_x24;
  ulong *puVar18;
  ulong *unaff_x25;
  ulong unaff_x26;
  long lVar19;
  undefined1 auStack_1f0 [80];
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
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 == *(long *)(param_2 + 0x10)) {
    if ((lVar19 != 0) && (param_1 != param_2)) {
      unaff_x21 = 0;
      unaff_x23 = (ulong *)(param_1 + 0x40);
      unaff_x25 = (ulong *)(param_2 + 0x40);
      do {
        if (unaff_x23[-4] != unaff_x25[-4]) goto LAB_103d3bb88;
        uVar12 = unaff_x23[-3];
        unaff_x20 = unaff_x23[-2];
        unaff_x22 = unaff_x23[-1];
        unaff_x19 = *unaff_x23;
        unaff_x26 = unaff_x25[-2];
        uVar7 = unaff_x25[-1];
        unaff_x24 = *unaff_x25;
        if ((uVar12 != unaff_x25[-3] || unaff_x20 != unaff_x26) &&
           (param_2 = unaff_x20, func_0x000107c605b8(), (uVar12 & 1) == 0)) goto LAB_103d3bb88;
        uVar2 = (uint)(unaff_x19 >> 0x20);
        uVar10 = uVar2 >> 0x1e;
        uVar3 = (uint)(unaff_x24 >> 0x20);
        uVar13 = uVar3 >> 0x1e;
        iVar16 = (int)unaff_x22;
        if (unaff_x19 >> 0x3e == 3) {
          uVar12 = 0;
          if ((((unaff_x22 != 0) || (unaff_x19 != 0xc000000000000000)) || (unaff_x24 >> 0x3e < 3))
             || ((uVar12 = 0, uVar7 != 0 || (unaff_x24 != 0xc000000000000000))))
          goto joined_r0x000103d3b9d0;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar10 == 0) {
              uVar12 = unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar11 = (int)(unaff_x22 >> 0x20);
              if (SBORROW4(iVar11,iVar16)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3bbdc);
                (*pcVar5)();
              }
              uVar12 = (ulong)(iVar11 - iVar16);
            }
joined_r0x000103d3b9d0:
            if (uVar3 >> 0x1e < 2) goto LAB_103d3b83c;
LAB_103d3b808:
            if (uVar13 != 2) {
              if (uVar12 == 0) goto LAB_103d3b760;
              goto LAB_103d3bb88;
            }
            uVar14 = *(long *)(uVar7 + 0x18) - *(long *)(uVar7 + 0x10);
            if (SBORROW8(*(long *)(uVar7 + 0x18),*(long *)(uVar7 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3bbd0);
              (*pcVar5)();
            }
          }
          else {
            if (uVar10 == 2) {
              uVar12 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3bbd8);
                (*pcVar5)();
              }
              goto joined_r0x000103d3b9d0;
            }
            uVar12 = 0;
            if (1 < uVar13) goto LAB_103d3b808;
LAB_103d3b83c:
            if (uVar13 == 0) {
              uVar14 = unaff_x24 >> 0x30 & 0xff;
            }
            else {
              iVar11 = (int)(uVar7 >> 0x20);
              if (SBORROW4(iVar11,(int)uVar7)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3bbd4);
                (*pcVar5)();
              }
              uVar14 = (ulong)(iVar11 - (int)uVar7);
            }
          }
          if (uVar12 != uVar14) goto LAB_103d3bb88;
          if (0 < (long)uVar12) {
            param_2 = unaff_x19;
            if (uVar10 < 2) {
              if (uVar10 != 0) {
                lVar15 = (long)iVar16;
                uStack_a8 = ((long)unaff_x22 >> 0x20) - lVar15;
                if ((long)unaff_x22 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3bbe0);
                  uStack_90 = unaff_x21;
                  (*pcVar5)();
                }
                uStack_98 = unaff_x20;
                uStack_90 = unaff_x21;
                func_0x000107c61434(unaff_x20);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(unaff_x26);
                uStack_a0 = uVar7;
                func_0x00010006c00c(uVar7,unaff_x24);
                func_0x000107c5ec30();
                if (uVar7 == 0) {
                  func_0x000107c5ec38();
                  lVar15 = 0;
                  lVar9 = 0;
                }
                else {
                  uVar12 = uVar7;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar15,uVar12)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3bbec);
                    (*pcVar5)();
                  }
                  lVar1 = (lVar15 - uVar12) + uVar7;
                  func_0x000107c5ec38();
                  if ((long)uStack_a8 <= (long)uVar12) {
                    uVar12 = uStack_a8;
                  }
                  lVar15 = 0;
                  if (lVar1 != 0) {
                    lVar15 = lVar1;
                  }
                  lVar9 = 0;
                  if (lVar1 != 0) {
                    lVar9 = uVar12 + lVar1;
                  }
                }
                unaff_x21 = uStack_90;
                unaff_x20 = uStack_a0;
                func_0x000100e25bdc(abStack_80,lVar15,lVar9,uStack_a0,unaff_x24);
                func_0x000107c6142c(unaff_x26);
                func_0x00010006c090(unaff_x20,unaff_x24);
                uVar6 = uStack_98;
LAB_103d3bb70:
                func_0x000107c6142c(uVar6);
                func_0x00010006c090(unaff_x22);
                if ((abStack_80[0] & 1) != 0) goto LAB_103d3b760;
                goto LAB_103d3bb88;
              }
              abStack_80[0] = (byte)unaff_x22;
              abStack_80[1] = (byte)(unaff_x22 >> 8);
              abStack_80[2] = (byte)(unaff_x22 >> 0x10);
              abStack_80[3] = (byte)(unaff_x22 >> 0x18);
              abStack_80[4] = (byte)(unaff_x22 >> 0x20);
              abStack_80[5] = (byte)(unaff_x22 >> 0x28);
              abStack_80[6] = (byte)(unaff_x22 >> 0x30);
              abStack_80[7] = (byte)(unaff_x22 >> 0x38);
              abStack_80[8] = (byte)unaff_x19;
              abStack_80[9] = (byte)(unaff_x19 >> 8);
              abStack_80[10] = (byte)(unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)(unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)(unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)(unaff_x19 >> 0x28);
              pbVar8 = abStack_80 + (unaff_x19 >> 0x30 & 0xff);
              uStack_90 = unaff_x21;
              func_0x000107c61434(unaff_x20);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x000107c61434(unaff_x26);
              func_0x00010006c00c(uVar7,unaff_x24);
              unaff_x21 = uStack_90;
            }
            else {
              if (uVar10 == 2) {
                lVar15 = *(long *)(unaff_x22 + 0x10);
                uStack_a8 = *(ulong *)(unaff_x22 + 0x18);
                uStack_98 = unaff_x20;
                uStack_90 = unaff_x21;
                func_0x000107c61434(unaff_x20);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(unaff_x26);
                uStack_a0 = uVar7;
                func_0x00010006c00c(uVar7,unaff_x24);
                func_0x000107c5ec30();
                uVar12 = uVar7;
                if (uVar7 != 0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar15,uVar12)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3bbe8);
                    (*pcVar5)();
                  }
                  uVar7 = (lVar15 - uVar12) + uVar7;
                }
                uVar14 = uStack_a8 - lVar15;
                if (SBORROW8(uStack_a8,lVar15)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3bbe4);
                  (*pcVar5)();
                }
                func_0x000107c5ec38();
                unaff_x21 = uStack_90;
                uVar6 = uStack_98;
                uVar4 = uStack_a0;
                if (uVar7 == 0) {
                  lVar15 = 0;
                }
                else {
                  if ((long)uVar14 <= (long)uVar12) {
                    uVar12 = uVar14;
                  }
                  lVar15 = uVar12 + uVar7;
                }
                func_0x000100e25bdc(abStack_80,uVar7,lVar15,uStack_a0,unaff_x24);
                func_0x000107c6142c(unaff_x26);
                func_0x00010006c090(uVar4,unaff_x24);
                unaff_x20 = uVar6;
                goto LAB_103d3bb70;
              }
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
              func_0x000107c61434(unaff_x20);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x000107c61434(unaff_x26);
              func_0x00010006c00c(uVar7,unaff_x24);
              pbVar8 = abStack_80;
            }
            func_0x000100e25bdc(&bStack_81,abStack_80,pbVar8,uVar7,unaff_x24);
            func_0x000107c6142c(unaff_x26);
            func_0x00010006c090(uVar7,unaff_x24);
            func_0x000107c6142c(unaff_x20);
            func_0x00010006c090(unaff_x22);
            if ((bStack_81 & 1) == 0) goto LAB_103d3bb88;
          }
        }
LAB_103d3b760:
        unaff_x23 = unaff_x23 + 5;
        unaff_x25 = unaff_x25 + 5;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    uVar7 = 1;
  }
  else {
LAB_103d3bb88:
    uVar7 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar7;
  }
  func_0x000107c60e78();
  lVar19 = *(long *)(uVar7 + 0x10);
  if (lVar19 == *(long *)(param_2 + 0x10)) {
    if ((lVar19 == 0) || (uVar7 == param_2)) {
      return 1;
    }
    pcStack_b8 = FUN_103d3bbf0;
    puVar17 = (ulong *)(uVar7 + 0x20);
    puVar18 = (ulong *)(param_2 + 0x20);
    uStack_100 = unaff_x26;
    puStack_f8 = unaff_x25;
    uStack_f0 = unaff_x24;
    puStack_e8 = unaff_x23;
    uStack_e0 = unaff_x22;
    uStack_d8 = unaff_x21;
    uStack_d0 = unaff_x20;
    uStack_c8 = unaff_x19;
    puStack_c0 = &stack0xfffffffffffffff0;
    while( true ) {
      lVar19 = lVar19 + -1;
      uStack_178 = puVar17[5];
      uStack_180 = puVar17[4];
      uStack_168 = puVar17[7];
      uStack_170 = puVar17[6];
      uStack_158 = puVar17[9];
      uStack_160 = puVar17[8];
      uStack_198 = puVar17[1];
      uVar7 = *puVar17;
      uStack_188 = puVar17[3];
      uStack_190 = puVar17[2];
      uStack_128 = puVar18[5];
      uStack_130 = puVar18[4];
      uStack_118 = puVar18[7];
      uStack_120 = puVar18[6];
      uStack_108 = puVar18[9];
      uStack_110 = puVar18[8];
      uStack_148 = puVar18[1];
      uStack_150 = *puVar18;
      uStack_138 = puVar18[3];
      uStack_140 = puVar18[2];
      uStack_1a0 = uVar7;
      if ((((uVar7 != uStack_150) || (uStack_198 != uStack_148)) &&
          (func_0x000107c605b8(), (uVar7 & 1) == 0)) ||
         ((((uStack_190 != uStack_140 || (uStack_188 != uStack_138)) &&
           (uVar7 = uStack_190, func_0x000107c605b8(), (uVar7 & 1) == 0)) ||
          (((uStack_180 != uStack_130 || (uStack_178 != uStack_128)) &&
           (uVar7 = uStack_180, func_0x000107c605b8(), (uVar7 & 1) == 0)))))) {
        return 0;
      }
      uVar4 = uStack_108;
      uVar14 = uStack_110;
      uVar12 = uStack_158;
      uVar7 = uStack_160;
      if ((char)uStack_118 == '\x01') {
        if (uStack_120 == 0) {
          if (uStack_170 != 0) {
            return 0;
          }
        }
        else if (uStack_120 == 1) {
          if (uStack_170 != 1) {
            return 0;
          }
        }
        else if (uStack_170 != 2) {
          return 0;
        }
      }
      else if (uStack_170 != uStack_120) {
        return 0;
      }
      FUN_103d3d520(&uStack_1a0,auStack_1f0);
      FUN_103d3d520(&uStack_150,auStack_1f0);
      func_0x000100e25fcc(uVar7,uVar12,uVar14,uVar4);
      func_0x0001017095a4(&uStack_150);
      func_0x0001017095a4(&uStack_1a0);
      if ((uVar7 & 1) == 0) break;
      if (lVar19 == 0) {
        return 1;
      }
      puVar17 = puVar17 + 10;
      puVar18 = puVar18 + 10;
    }
    return 0;
  }
  return 0;
}



/* Entry: 103d3bbf0; end: 103d3be9f;  */

undefined8 FUN_103d3bbf0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 auStack_140 [80];
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
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar4 != 0) && (param_1 != param_2)) {
    puVar5 = (ulong *)(param_1 + 0x20);
    puVar6 = (ulong *)(param_2 + 0x20);
    while( true ) {
      lVar4 = lVar4 + -1;
      uStack_c8 = puVar5[5];
      uStack_d0 = puVar5[4];
      uStack_b8 = puVar5[7];
      uStack_c0 = puVar5[6];
      uStack_a8 = puVar5[9];
      uStack_b0 = puVar5[8];
      uStack_e8 = puVar5[1];
      uVar7 = *puVar5;
      uStack_d8 = puVar5[3];
      uStack_e0 = puVar5[2];
      uStack_78 = puVar6[5];
      uStack_80 = puVar6[4];
      uStack_68 = puVar6[7];
      uStack_70 = puVar6[6];
      uStack_58 = puVar6[9];
      uStack_60 = puVar6[8];
      uStack_98 = puVar6[1];
      uStack_a0 = *puVar6;
      uStack_88 = puVar6[3];
      uStack_90 = puVar6[2];
      uStack_f0 = uVar7;
      if (((((uVar7 != uStack_a0) || (uStack_e8 != uStack_98)) &&
           (func_0x000107c605b8(), (uVar7 & 1) == 0)) ||
          (((uStack_e0 != uStack_90 || (uStack_d8 != uStack_88)) &&
           (uVar7 = uStack_e0, func_0x000107c605b8(), (uVar7 & 1) == 0)))) ||
         (((uStack_d0 != uStack_80 || (uStack_c8 != uStack_78)) &&
          (uVar7 = uStack_d0, func_0x000107c605b8(), (uVar7 & 1) == 0)))) {
        return 0;
      }
      uVar3 = uStack_58;
      uVar2 = uStack_60;
      uVar1 = uStack_a8;
      uVar7 = uStack_b0;
      if ((char)uStack_68 == '\x01') {
        if (uStack_70 == 0) {
          if (uStack_c0 != 0) {
            return 0;
          }
        }
        else if (uStack_70 == 1) {
          if (uStack_c0 != 1) {
            return 0;
          }
        }
        else if (uStack_c0 != 2) {
          return 0;
        }
      }
      else if (uStack_c0 != uStack_70) {
        return 0;
      }
      FUN_103d3d520(&uStack_f0,auStack_140);
      FUN_103d3d520(&uStack_a0,auStack_140);
      func_0x000100e25fcc(uVar7,uVar1,uVar2,uVar3);
      func_0x0001017095a4(&uStack_a0);
      func_0x0001017095a4(&uStack_f0);
      if ((uVar7 & 1) == 0) break;
      if (lVar4 == 0) {
        return 1;
      }
      puVar5 = puVar5 + 10;
      puVar6 = puVar6 + 10;
    }
    return 0;
  }
  return 1;
}



/* Entry: 103d3bea0; end: 103d3bf8f;  */

uint FUN_103d3bea0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_f8 [56];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_b8 = puVar4[1];
        uStack_c0 = *puVar4;
        uStack_a8 = puVar4[3];
        uStack_b0 = puVar4[2];
        uStack_98 = puVar4[5];
        uStack_a0 = puVar4[4];
        uStack_90 = puVar4[6];
        uStack_78 = puVar5[1];
        uStack_80 = *puVar5;
        uStack_68 = puVar5[3];
        uStack_70 = puVar5[2];
        uStack_58 = puVar5[5];
        uStack_60 = puVar5[4];
        uStack_50 = puVar5[6];
        FUN_103d50f3c(&uStack_c0,auStack_f8);
        FUN_103d50f3c(&uStack_80,auStack_f8);
        puVar1 = &uStack_c0;
        FUN_103d53538(puVar1,&uStack_80);
        uVar3 = (uint)puVar1;
        func_0x000103d50f78(&uStack_80);
        func_0x000103d50f78(&uStack_c0);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 7;
        puVar4 = puVar4 + 7;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 103d3bf90; end: 103d3c49b;  */

void FUN_103d3bf90(ulong param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  int iVar20;
  ulong unaff_x22;
  ulong *unaff_x23;
  ulong unaff_x24;
  ulong *unaff_x25;
  ulong unaff_x26;
  long lVar21;
  ulong unaff_x27;
  ulong *puVar22;
  long lVar23;
  ulong *puVar24;
  double dVar25;
  double dVar26;
  byte bStack_141;
  byte abStack_140 [24];
  long lStack_128;
  long lStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  byte bStack_91;
  byte abStack_90 [24];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 == *(long *)(param_2 + 0x10)) {
    if ((lVar23 != 0) && (param_1 != param_2)) {
      unaff_x21 = 0;
      unaff_x23 = (ulong *)(param_1 + 0x40);
      unaff_x25 = (ulong *)(param_2 + 0x40);
      do {
        uVar17 = unaff_x23[-4];
        unaff_x20 = unaff_x23[-3];
        dVar25 = (double)unaff_x23[-2];
        unaff_x22 = unaff_x23[-1];
        unaff_x19 = *unaff_x23;
        unaff_x26 = unaff_x25[-3];
        dVar26 = (double)unaff_x25[-2];
        unaff_x27 = unaff_x25[-1];
        unaff_x24 = *unaff_x25;
        if (uVar17 == unaff_x25[-4] && unaff_x20 == unaff_x26) {
          if (dVar25 != dVar26) goto LAB_103d3c430;
        }
        else {
          param_2 = unaff_x20;
          func_0x000107c605b8();
          uVar7 = 0;
          if (((uVar17 & 1) == 0) || (dVar25 != dVar26)) goto LAB_103d3c43c;
        }
        uVar2 = (uint)(unaff_x19 >> 0x20);
        uVar14 = uVar2 >> 0x1e;
        uVar3 = (uint)(unaff_x24 >> 0x20);
        uVar19 = uVar3 >> 0x1e;
        iVar20 = (int)unaff_x22;
        if (unaff_x19 >> 0x3e == 3) {
          uVar17 = 0;
          if ((((unaff_x22 != 0) || (unaff_x19 != 0xc000000000000000)) || (unaff_x24 >> 0x3e < 3))
             || ((uVar17 = 0, unaff_x27 != 0 || (unaff_x24 != 0xc000000000000000))))
          goto joined_r0x000103d3c278;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar14 == 0) {
              uVar17 = unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(unaff_x22 >> 0x20);
              if (SBORROW4(iVar16,iVar20)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c484);
                (*pcVar5)();
              }
              uVar17 = (ulong)(iVar16 - iVar20);
            }
joined_r0x000103d3c278:
            if (uVar3 >> 0x1e < 2) goto LAB_103d3c0e4;
LAB_103d3c0b0:
            if (uVar19 != 2) {
              if (uVar17 == 0) goto LAB_103d3bff4;
              goto LAB_103d3c430;
            }
            uVar7 = *(long *)(unaff_x27 + 0x18) - *(long *)(unaff_x27 + 0x10);
            if (SBORROW8(*(long *)(unaff_x27 + 0x18),*(long *)(unaff_x27 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c480);
              (*pcVar5)();
            }
          }
          else {
            if (uVar14 == 2) {
              uVar17 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c488);
                (*pcVar5)();
              }
              goto joined_r0x000103d3c278;
            }
            uVar17 = 0;
            if (1 < uVar19) goto LAB_103d3c0b0;
LAB_103d3c0e4:
            if (uVar19 == 0) {
              uVar7 = unaff_x24 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(unaff_x27 >> 0x20);
              if (SBORROW4(iVar16,(int)unaff_x27)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c47c);
                (*pcVar5)();
              }
              uVar7 = (ulong)(iVar16 - (int)unaff_x27);
            }
          }
          if (uVar17 != uVar7) goto LAB_103d3c430;
          if (0 < (long)uVar17) {
            param_2 = unaff_x19;
            if (uVar14 < 2) {
              if (uVar14 != 0) {
                lVar21 = (long)iVar20;
                uStack_b8 = ((long)unaff_x22 >> 0x20) - lVar21;
                if ((long)unaff_x22 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c48c);
                  uStack_a0 = unaff_x21;
                  (*pcVar5)();
                }
                uStack_a8 = unaff_x20;
                uStack_a0 = unaff_x21;
                func_0x000107c61434(unaff_x20);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(unaff_x26);
                uVar8 = unaff_x27;
                uStack_b0 = unaff_x27;
                func_0x00010006c00c(unaff_x27,unaff_x24);
                func_0x000107c5ec30();
                if (uVar8 == 0) {
                  func_0x000107c5ec38();
                  lVar21 = 0;
                  lVar13 = 0;
                  uVar8 = unaff_x27;
                }
                else {
                  uVar17 = uVar8;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,uVar17)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c498);
                    (*pcVar5)();
                  }
                  lVar1 = (lVar21 - uVar17) + uVar8;
                  func_0x000107c5ec38();
                  if ((long)uStack_b8 <= (long)uVar17) {
                    uVar17 = uStack_b8;
                  }
                  lVar21 = 0;
                  if (lVar1 != 0) {
                    lVar21 = lVar1;
                  }
                  lVar13 = 0;
                  if (lVar1 != 0) {
                    lVar13 = uVar17 + lVar1;
                  }
                }
                unaff_x21 = uStack_a0;
                unaff_x20 = uStack_b0;
                func_0x000100e25bdc(abStack_90,lVar21,lVar13,uStack_b0,unaff_x24);
                func_0x000107c6142c(unaff_x26);
                func_0x00010006c090(unaff_x20,unaff_x24);
                uVar9 = uStack_a8;
LAB_103d3c418:
                func_0x000107c6142c(uVar9);
                func_0x00010006c090(unaff_x22);
                unaff_x27 = uVar8;
                if ((abStack_90[0] & 1) != 0) goto LAB_103d3bff4;
                goto LAB_103d3c430;
              }
              abStack_90[0] = (byte)unaff_x22;
              abStack_90[1] = (byte)(unaff_x22 >> 8);
              abStack_90[2] = (byte)(unaff_x22 >> 0x10);
              abStack_90[3] = (byte)(unaff_x22 >> 0x18);
              abStack_90[4] = (byte)(unaff_x22 >> 0x20);
              abStack_90[5] = (byte)(unaff_x22 >> 0x28);
              abStack_90[6] = (byte)(unaff_x22 >> 0x30);
              abStack_90[7] = (byte)(unaff_x22 >> 0x38);
              abStack_90[8] = (byte)unaff_x19;
              abStack_90[9] = (byte)(unaff_x19 >> 8);
              abStack_90[10] = (byte)(unaff_x19 >> 0x10);
              abStack_90[0xb] = (byte)(unaff_x19 >> 0x18);
              abStack_90[0xc] = (byte)(unaff_x19 >> 0x20);
              abStack_90[0xd] = (byte)(unaff_x19 >> 0x28);
              pbVar12 = abStack_90 + (unaff_x19 >> 0x30 & 0xff);
              uStack_a0 = unaff_x21;
              func_0x000107c61434(unaff_x20);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x000107c61434(unaff_x26);
              func_0x00010006c00c(unaff_x27,unaff_x24);
              unaff_x21 = uStack_a0;
            }
            else {
              if (uVar14 == 2) {
                lVar21 = *(long *)(unaff_x22 + 0x10);
                uStack_b8 = *(ulong *)(unaff_x22 + 0x18);
                uStack_a8 = unaff_x20;
                uStack_a0 = unaff_x21;
                func_0x000107c61434(unaff_x20);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(unaff_x26);
                uStack_b0 = unaff_x27;
                func_0x00010006c00c(unaff_x27,unaff_x24);
                func_0x000107c5ec30();
                uVar17 = unaff_x27;
                if (unaff_x27 != 0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,uVar17)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c494);
                    (*pcVar5)();
                  }
                  unaff_x27 = (lVar21 - uVar17) + unaff_x27;
                }
                uVar7 = uStack_b8 - lVar21;
                if (SBORROW8(uStack_b8,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c490);
                  (*pcVar5)();
                }
                func_0x000107c5ec38();
                unaff_x21 = uStack_a0;
                uVar9 = uStack_a8;
                uVar8 = uStack_b0;
                if (unaff_x27 == 0) {
                  lVar21 = 0;
                }
                else {
                  if ((long)uVar7 <= (long)uVar17) {
                    uVar17 = uVar7;
                  }
                  lVar21 = uVar17 + unaff_x27;
                }
                func_0x000100e25bdc(abStack_90,unaff_x27,lVar21,uStack_b0,unaff_x24);
                func_0x000107c6142c(unaff_x26);
                func_0x00010006c090(uVar8,unaff_x24);
                unaff_x20 = uVar9;
                goto LAB_103d3c418;
              }
              abStack_90[8] = 0;
              abStack_90[9] = 0;
              abStack_90[10] = 0;
              abStack_90[0xb] = 0;
              abStack_90[0xc] = 0;
              abStack_90[0xd] = 0;
              abStack_90[0] = 0;
              abStack_90[1] = 0;
              abStack_90[2] = 0;
              abStack_90[3] = 0;
              abStack_90[4] = 0;
              abStack_90[5] = 0;
              abStack_90[6] = 0;
              abStack_90[7] = 0;
              func_0x000107c61434(unaff_x20);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x000107c61434(unaff_x26);
              func_0x00010006c00c(unaff_x27,unaff_x24);
              pbVar12 = abStack_90;
            }
            func_0x000100e25bdc(&bStack_91,abStack_90,pbVar12,unaff_x27,unaff_x24);
            func_0x000107c6142c(unaff_x26);
            func_0x00010006c090(unaff_x27,unaff_x24);
            func_0x000107c6142c(unaff_x20);
            func_0x00010006c090(unaff_x22);
            if ((bStack_91 & 1) == 0) goto LAB_103d3c430;
          }
        }
LAB_103d3bff4:
        unaff_x23 = unaff_x23 + 5;
        unaff_x25 = unaff_x25 + 5;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    uVar7 = 1;
  }
  else {
LAB_103d3c430:
    uVar7 = 0;
  }
LAB_103d3c43c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  func_0x000107c60e78();
  pcStack_c8 = FUN_103d3c49c;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar21 = *(long *)(uVar7 + 0x10);
  lStack_120 = lVar23;
  uStack_118 = unaff_x27;
  uStack_110 = unaff_x26;
  puStack_108 = unaff_x25;
  uStack_100 = unaff_x24;
  puStack_f8 = unaff_x23;
  uStack_f0 = unaff_x22;
  uStack_e8 = unaff_x21;
  uStack_e0 = unaff_x20;
  uStack_d8 = unaff_x19;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (lVar21 == *(long *)(param_2 + 0x10)) {
    if ((lVar21 != 0) && (uVar7 != param_2)) {
      puVar22 = (ulong *)(uVar7 + 0x40);
      puVar24 = (ulong *)(param_2 + 0x40);
      do {
        uVar15 = puVar22[-4];
        dVar25 = (double)puVar22[-2];
        uVar17 = puVar22[-1];
        uVar8 = *puVar22;
        uVar18 = puVar24[-4];
        dVar26 = (double)puVar24[-2];
        uVar7 = puVar24[-1];
        uVar9 = *puVar24;
        if ((char)puVar24[-3] == '\x01') {
          if ((long)uVar18 < 4) {
            if ((long)uVar18 < 2) {
              uVar10 = 0;
              if (uVar18 == 0) {
                if (uVar15 != 0) goto LAB_103d3c978;
              }
              else if (uVar15 != 1) goto LAB_103d3c978;
            }
            else if (uVar18 == 2) {
              uVar10 = 0;
              if (uVar15 != 2) goto LAB_103d3c978;
            }
            else {
              uVar10 = 0;
              if (uVar15 != 3) goto LAB_103d3c978;
            }
          }
          else if ((long)uVar18 < 6) {
            if (uVar18 == 4) {
              uVar10 = 0;
              if (uVar15 != 4) goto LAB_103d3c978;
            }
            else {
              uVar10 = 0;
              if (uVar15 != 5) goto LAB_103d3c978;
            }
          }
          else if (uVar18 == 6) {
            uVar10 = 0;
            if (uVar15 != 6) goto LAB_103d3c978;
          }
          else if (uVar18 == 7) {
            uVar10 = 0;
            if (uVar15 != 7) goto LAB_103d3c978;
          }
          else {
            uVar10 = 0;
            if (uVar15 != 8) goto LAB_103d3c978;
          }
          uVar10 = 0;
          if (dVar25 != dVar26) goto LAB_103d3c978;
        }
        else {
          bVar6 = false;
          if ((uVar15 == uVar18) && (bVar6 = false, !NAN(dVar25) && !NAN(dVar26))) {
            bVar6 = dVar25 == dVar26;
          }
          if (!bVar6) goto LAB_103d3c96c;
        }
        uVar2 = (uint)(uVar8 >> 0x20);
        uVar14 = uVar2 >> 0x1e;
        uVar3 = (uint)(uVar9 >> 0x20);
        uVar19 = uVar3 >> 0x1e;
        iVar20 = (int)uVar17;
        if (uVar8 >> 0x3e == 3) {
          uVar15 = 0;
          if ((((uVar17 != 0) || (uVar8 != 0xc000000000000000)) || (uVar9 >> 0x3e < 3)) ||
             ((uVar15 = 0, uVar7 != 0 || (uVar9 != 0xc000000000000000))))
          goto joined_r0x000103d3c7f0;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar14 == 0) {
              uVar15 = uVar8 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uVar17 >> 0x20);
              if (SBORROW4(iVar16,iVar20)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c9bc);
                (*pcVar5)();
              }
              uVar15 = (ulong)(iVar16 - iVar20);
            }
joined_r0x000103d3c7f0:
            if (uVar3 >> 0x1e < 2) goto LAB_103d3c694;
LAB_103d3c660:
            if (uVar19 != 2) {
              if (uVar15 == 0) goto LAB_103d3c500;
              goto LAB_103d3c96c;
            }
            uVar18 = *(long *)(uVar7 + 0x18) - *(long *)(uVar7 + 0x10);
            if (SBORROW8(*(long *)(uVar7 + 0x18),*(long *)(uVar7 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c9b8);
              (*pcVar5)();
            }
          }
          else {
            if (uVar14 == 2) {
              uVar15 = *(long *)(uVar17 + 0x18) - *(long *)(uVar17 + 0x10);
              if (SBORROW8(*(long *)(uVar17 + 0x18),*(long *)(uVar17 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c9c0);
                (*pcVar5)();
              }
              goto joined_r0x000103d3c7f0;
            }
            uVar15 = 0;
            if (1 < uVar19) goto LAB_103d3c660;
LAB_103d3c694:
            if (uVar19 == 0) {
              uVar18 = uVar9 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uVar7 >> 0x20);
              if (SBORROW4(iVar16,(int)uVar7)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c9b4);
                (*pcVar5)();
              }
              uVar18 = (ulong)(iVar16 - (int)uVar7);
            }
          }
          if (uVar15 != uVar18) goto LAB_103d3c96c;
          if (0 < (long)uVar15) {
            if (uVar14 < 2) {
              if (uVar14 != 0) {
                lVar23 = (long)iVar20;
                uVar15 = ((long)uVar17 >> 0x20) - lVar23;
                if ((long)uVar17 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c9c4);
                  (*pcVar5)();
                }
                func_0x00010006c00c(uVar17,uVar8);
                uVar18 = uVar7;
                func_0x00010006c00c(uVar7,uVar9);
                func_0x000107c5ec30();
                if (uVar18 == 0) {
                  func_0x000107c5ec38();
                  lVar23 = 0;
                  lVar13 = 0;
                }
                else {
                  uVar11 = uVar18;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar23,uVar11)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c9d0);
                    (*pcVar5)();
                  }
                  lVar1 = (lVar23 - uVar11) + uVar18;
                  func_0x000107c5ec38();
                  if ((long)uVar15 <= (long)uVar11) {
                    uVar11 = uVar15;
                  }
                  lVar23 = 0;
                  if (lVar1 != 0) {
                    lVar23 = lVar1;
                  }
                  lVar13 = 0;
                  if (lVar1 != 0) {
                    lVar13 = uVar11 + lVar1;
                  }
                }
                func_0x000100e25bdc(abStack_140,lVar23,lVar13,uVar7,uVar9);
                func_0x00010006c090(uVar7,uVar9);
                func_0x00010006c090(uVar17,uVar8);
                if ((abStack_140[0] & 1) != 0) goto LAB_103d3c500;
                goto LAB_103d3c96c;
              }
              abStack_140[0] = (byte)uVar17;
              abStack_140[1] = (byte)(uVar17 >> 8);
              abStack_140[2] = (byte)(uVar17 >> 0x10);
              abStack_140[3] = (byte)(uVar17 >> 0x18);
              abStack_140[4] = (byte)(uVar17 >> 0x20);
              abStack_140[5] = (byte)(uVar17 >> 0x28);
              abStack_140[6] = (byte)(uVar17 >> 0x30);
              abStack_140[7] = (byte)(uVar17 >> 0x38);
              abStack_140[8] = (byte)uVar8;
              abStack_140[9] = (byte)(uVar8 >> 8);
              abStack_140[10] = (byte)(uVar8 >> 0x10);
              abStack_140[0xb] = (byte)(uVar8 >> 0x18);
              abStack_140[0xc] = (byte)(uVar8 >> 0x20);
              abStack_140[0xd] = (byte)(uVar8 >> 0x28);
              pbVar12 = abStack_140 + (uVar8 >> 0x30 & 0xff);
              func_0x00010006c00c(uVar17,uVar8);
              func_0x00010006c00c(uVar7,uVar9);
LAB_103d3c8ac:
              func_0x000100e25bdc(&bStack_141,abStack_140,pbVar12,uVar7,uVar9);
              func_0x00010006c090(uVar7,uVar9);
              func_0x00010006c090(uVar17,uVar8);
              bVar4 = bStack_141;
            }
            else {
              if (uVar14 != 2) {
                abStack_140[8] = 0;
                abStack_140[9] = 0;
                abStack_140[10] = 0;
                abStack_140[0xb] = 0;
                abStack_140[0xc] = 0;
                abStack_140[0xd] = 0;
                abStack_140[0] = 0;
                abStack_140[1] = 0;
                abStack_140[2] = 0;
                abStack_140[3] = 0;
                abStack_140[4] = 0;
                abStack_140[5] = 0;
                abStack_140[6] = 0;
                abStack_140[7] = 0;
                func_0x00010006c00c(uVar17,uVar8);
                func_0x00010006c00c(uVar7,uVar9);
                pbVar12 = abStack_140;
                goto LAB_103d3c8ac;
              }
              lVar23 = *(long *)(uVar17 + 0x10);
              lVar13 = *(long *)(uVar17 + 0x18);
              func_0x00010006c00c(uVar17,uVar8);
              uVar15 = uVar7;
              func_0x00010006c00c(uVar7,uVar9);
              func_0x000107c5ec30();
              uVar18 = uVar15;
              if (uVar15 != 0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar23,uVar18)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c9cc);
                  (*pcVar5)();
                }
                uVar15 = (lVar23 - uVar18) + uVar15;
              }
              uVar11 = lVar13 - lVar23;
              if (SBORROW8(lVar13,lVar23)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d3c9c8);
                (*pcVar5)();
              }
              func_0x000107c5ec38();
              if (uVar15 == 0) {
                lVar23 = 0;
              }
              else {
                if ((long)uVar11 <= (long)uVar18) {
                  uVar18 = uVar11;
                }
                lVar23 = uVar18 + uVar15;
              }
              func_0x000100e25bdc(abStack_140,uVar15,lVar23,uVar7,uVar9);
              func_0x00010006c090(uVar7,uVar9);
              func_0x00010006c090(uVar17,uVar8);
              bVar4 = abStack_140[0];
            }
            if ((bVar4 & 1) == 0) goto LAB_103d3c96c;
          }
        }
LAB_103d3c500:
        puVar22 = puVar22 + 5;
        puVar24 = puVar24 + 5;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    uVar10 = 1;
  }
  else {
LAB_103d3c96c:
    uVar10 = 0;
  }
LAB_103d3c978:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
    func_0x000107c60e78(uVar10);
    return;
  }
  return;
}



/* Entry: 103d3c49c; end: 103d3c9d3;  */

void FUN_103d3c49c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  ulong *puVar23;
  ulong *puVar24;
  double dVar25;
  double dVar26;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = *(long *)(param_1 + 0x10);
  if (lVar22 == *(long *)(param_2 + 0x10)) {
    if ((lVar22 != 0) && (param_1 != param_2)) {
      puVar23 = (ulong *)(param_1 + 0x40);
      puVar24 = (ulong *)(param_2 + 0x40);
      do {
        uVar16 = puVar23[-4];
        dVar25 = (double)puVar23[-2];
        uVar2 = puVar23[-1];
        uVar4 = *puVar23;
        uVar18 = puVar24[-4];
        dVar26 = (double)puVar24[-2];
        uVar3 = puVar24[-1];
        uVar5 = *puVar24;
        if ((char)puVar24[-3] == '\x01') {
          if ((long)uVar18 < 4) {
            if ((long)uVar18 < 2) {
              uVar11 = 0;
              if (uVar18 == 0) {
                if (uVar16 != 0) goto LAB_103d3c978;
              }
              else if (uVar16 != 1) goto LAB_103d3c978;
            }
            else if (uVar18 == 2) {
              uVar11 = 0;
              if (uVar16 != 2) goto LAB_103d3c978;
            }
            else {
              uVar11 = 0;
              if (uVar16 != 3) goto LAB_103d3c978;
            }
          }
          else if ((long)uVar18 < 6) {
            if (uVar18 == 4) {
              uVar11 = 0;
              if (uVar16 != 4) goto LAB_103d3c978;
            }
            else {
              uVar11 = 0;
              if (uVar16 != 5) goto LAB_103d3c978;
            }
          }
          else if (uVar18 == 6) {
            uVar11 = 0;
            if (uVar16 != 6) goto LAB_103d3c978;
          }
          else if (uVar18 == 7) {
            uVar11 = 0;
            if (uVar16 != 7) goto LAB_103d3c978;
          }
          else {
            uVar11 = 0;
            if (uVar16 != 8) goto LAB_103d3c978;
          }
          uVar11 = 0;
          if (dVar25 != dVar26) goto LAB_103d3c978;
        }
        else {
          bVar10 = false;
          if ((uVar16 == uVar18) && (bVar10 = false, !NAN(dVar25) && !NAN(dVar26))) {
            bVar10 = dVar25 == dVar26;
          }
          if (!bVar10) goto LAB_103d3c96c;
        }
        uVar6 = (uint)(uVar4 >> 0x20);
        uVar15 = uVar6 >> 0x1e;
        uVar7 = (uint)(uVar5 >> 0x20);
        uVar19 = uVar7 >> 0x1e;
        iVar21 = (int)uVar2;
        if (uVar4 >> 0x3e == 3) {
          uVar16 = 0;
          if ((((uVar2 != 0) || (uVar4 != 0xc000000000000000)) || (uVar5 >> 0x3e < 3)) ||
             ((uVar16 = 0, uVar3 != 0 || (uVar5 != 0xc000000000000000))))
          goto joined_r0x000103d3c7f0;
        }
        else {
          if (uVar6 >> 0x1e < 2) {
            if (uVar15 == 0) {
              uVar16 = uVar4 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar17,iVar21)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x103d3c9bc);
                (*pcVar9)();
              }
              uVar16 = (ulong)(iVar17 - iVar21);
            }
joined_r0x000103d3c7f0:
            if (uVar7 >> 0x1e < 2) goto LAB_103d3c694;
LAB_103d3c660:
            if (uVar19 != 2) {
              if (uVar16 == 0) goto LAB_103d3c500;
              goto LAB_103d3c96c;
            }
            uVar18 = *(long *)(uVar3 + 0x18) - *(long *)(uVar3 + 0x10);
            if (SBORROW8(*(long *)(uVar3 + 0x18),*(long *)(uVar3 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x103d3c9b8);
              (*pcVar9)();
            }
          }
          else {
            if (uVar15 == 2) {
              uVar16 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
              if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x103d3c9c0);
                (*pcVar9)();
              }
              goto joined_r0x000103d3c7f0;
            }
            uVar16 = 0;
            if (1 < uVar19) goto LAB_103d3c660;
LAB_103d3c694:
            if (uVar19 == 0) {
              uVar18 = uVar5 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)(uVar3 >> 0x20);
              if (SBORROW4(iVar17,(int)uVar3)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x103d3c9b4);
                (*pcVar9)();
              }
              uVar18 = (ulong)(iVar17 - (int)uVar3);
            }
          }
          if (uVar16 != uVar18) goto LAB_103d3c96c;
          if (0 < (long)uVar16) {
            if (uVar15 < 2) {
              if (uVar15 != 0) {
                lVar20 = (long)iVar21;
                uVar16 = ((long)uVar2 >> 0x20) - lVar20;
                if ((long)uVar2 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x103d3c9c4);
                  (*pcVar9)();
                }
                func_0x00010006c00c(uVar2,uVar4);
                uVar18 = uVar3;
                func_0x00010006c00c(uVar3,uVar5);
                func_0x000107c5ec30();
                if (uVar18 == 0) {
                  func_0x000107c5ec38();
                  lVar20 = 0;
                  lVar14 = 0;
                }
                else {
                  uVar12 = uVar18;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar20,uVar12)) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x103d3c9d0);
                    (*pcVar9)();
                  }
                  lVar1 = (lVar20 - uVar12) + uVar18;
                  func_0x000107c5ec38();
                  if ((long)uVar16 <= (long)uVar12) {
                    uVar12 = uVar16;
                  }
                  lVar20 = 0;
                  if (lVar1 != 0) {
                    lVar20 = lVar1;
                  }
                  lVar14 = 0;
                  if (lVar1 != 0) {
                    lVar14 = uVar12 + lVar1;
                  }
                }
                func_0x000100e25bdc(abStack_80,lVar20,lVar14,uVar3,uVar5);
                func_0x00010006c090(uVar3,uVar5);
                func_0x00010006c090(uVar2,uVar4);
                if ((abStack_80[0] & 1) != 0) goto LAB_103d3c500;
                goto LAB_103d3c96c;
              }
              abStack_80[0] = (byte)uVar2;
              abStack_80[1] = (byte)(uVar2 >> 8);
              abStack_80[2] = (byte)(uVar2 >> 0x10);
              abStack_80[3] = (byte)(uVar2 >> 0x18);
              abStack_80[4] = (byte)(uVar2 >> 0x20);
              abStack_80[5] = (byte)(uVar2 >> 0x28);
              abStack_80[6] = (byte)(uVar2 >> 0x30);
              abStack_80[7] = (byte)(uVar2 >> 0x38);
              abStack_80[8] = (byte)uVar4;
              abStack_80[9] = (byte)(uVar4 >> 8);
              abStack_80[10] = (byte)(uVar4 >> 0x10);
              abStack_80[0xb] = (byte)(uVar4 >> 0x18);
              abStack_80[0xc] = (byte)(uVar4 >> 0x20);
              abStack_80[0xd] = (byte)(uVar4 >> 0x28);
              pbVar13 = abStack_80 + (uVar4 >> 0x30 & 0xff);
              func_0x00010006c00c(uVar2,uVar4);
              func_0x00010006c00c(uVar3,uVar5);
LAB_103d3c8ac:
              func_0x000100e25bdc(&bStack_81,abStack_80,pbVar13,uVar3,uVar5);
              func_0x00010006c090(uVar3,uVar5);
              func_0x00010006c090(uVar2,uVar4);
              bVar8 = bStack_81;
            }
            else {
              if (uVar15 != 2) {
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
                func_0x00010006c00c(uVar2,uVar4);
                func_0x00010006c00c(uVar3,uVar5);
                pbVar13 = abStack_80;
                goto LAB_103d3c8ac;
              }
              lVar20 = *(long *)(uVar2 + 0x10);
              lVar14 = *(long *)(uVar2 + 0x18);
              func_0x00010006c00c(uVar2,uVar4);
              uVar16 = uVar3;
              func_0x00010006c00c(uVar3,uVar5);
              func_0x000107c5ec30();
              uVar18 = uVar16;
              if (uVar16 != 0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar20,uVar18)) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x103d3c9cc);
                  (*pcVar9)();
                }
                uVar16 = (lVar20 - uVar18) + uVar16;
              }
              uVar12 = lVar14 - lVar20;
              if (SBORROW8(lVar14,lVar20)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x103d3c9c8);
                (*pcVar9)();
              }
              func_0x000107c5ec38();
              if (uVar16 == 0) {
                lVar20 = 0;
              }
              else {
                if ((long)uVar12 <= (long)uVar18) {
                  uVar18 = uVar12;
                }
                lVar20 = uVar18 + uVar16;
              }
              func_0x000100e25bdc(abStack_80,uVar16,lVar20,uVar3,uVar5);
              func_0x00010006c090(uVar3,uVar5);
              func_0x00010006c090(uVar2,uVar4);
              bVar8 = abStack_80[0];
            }
            if ((bVar8 & 1) == 0) goto LAB_103d3c96c;
          }
        }
LAB_103d3c500:
        puVar23 = puVar23 + 5;
        puVar24 = puVar24 + 5;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
    uVar11 = 1;
  }
  else {
LAB_103d3c96c:
    uVar11 = 0;
  }
LAB_103d3c978:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78(uVar11);
    return;
  }
  return;
}



/* Entry: 103d3c9d4; end: 103d3ca0f;  */

void FUN_103d3c9d4(void)

{
  return;
}



/* Entry: 103d3ca10; end: 103d3ce9b;  */

uint FUN_103d3ca10(ulong *param_1,ulong *param_2)

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
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_128 [56];
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uVar2 = param_1[4];
    if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
      uVar2 = param_1[6];
      FUN_103d3b0c8(uVar2,param_2[6]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[7];
        if (((uVar2 == param_2[7]) && (param_1[8] == param_2[8])) ||
           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
          uVar2 = param_1[9];
          if (((uVar2 == param_2[9]) && (param_1[10] == param_2[10])) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            uVar9 = param_1[0x11];
            uVar2 = param_1[0x10];
            uVar15 = param_1[0x13];
            uVar13 = param_1[0x12];
            uVar10 = param_1[0x15];
            uVar6 = param_1[0x14];
            uVar4 = param_1[0x16];
            uVar11 = param_2[0x11];
            uVar7 = param_2[0x10];
            uVar16 = param_2[0x13];
            uVar14 = param_2[0x12];
            uVar12 = param_2[0x15];
            uVar8 = param_2[0x14];
            uVar5 = param_2[0x16];
            uStack_f0 = uVar7;
            uStack_e8 = uVar11;
            uStack_e0 = uVar14;
            uStack_d8 = uVar16;
            uStack_d0 = uVar8;
            uStack_c8 = uVar12;
            uStack_c0 = uVar5;
            uStack_b0 = uVar2;
            uStack_a8 = uVar9;
            uStack_a0 = uVar13;
            uStack_98 = uVar15;
            uStack_90 = uVar6;
            uStack_88 = uVar10;
            uStack_80 = uVar4;
            if (uVar9 == 0) {
              if (uVar11 != 0) goto LAB_103d3cc18;
              FUN_103d3e4c8(&uStack_b0,auStack_128,0x113004b98,&UNK_10dc80c28);
              FUN_103d3e4c8(&uStack_f0,auStack_128,0x113004b98,&UNK_10dc80c28);
LAB_103d3cd50:
              FUN_103d3d4b8(uVar2,uVar9,uVar13,uVar15,uVar6,uVar10,uVar4);
              uVar2 = param_1[0xb];
              if (((uVar2 == param_2[0xb]) && (param_1[0xc] == param_2[0xc])) ||
                 (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
                uVar2 = param_1[0xd];
                FUN_103d3b678(uVar2,param_2[0xd]);
                if ((uVar2 & 1) != 0) {
                  uVar2 = param_1[0xe];
                  func_0x000100e25fcc(uVar2,param_1[0xf],param_2[0xe],param_2[0xf]);
                  uVar1 = (uint)uVar2;
                  goto LAB_103d3ce64;
                }
              }
            }
            else {
              if (uVar11 == 0) {
LAB_103d3cc18:
                FUN_103d3e4c8(&uStack_b0,auStack_128,0x113004b98,&UNK_10dc80c28);
                FUN_103d3e4c8(&uStack_f0,auStack_128,0x113004b98,&UNK_10dc80c28);
                FUN_103d3d4b8(uVar2,uVar9,uVar13,uVar15,uVar6,uVar10,uVar4);
                uVar2 = uVar7;
                uVar9 = uVar11;
                uVar13 = uVar14;
                uVar15 = uVar16;
                uVar6 = uVar8;
                uVar10 = uVar12;
                uVar4 = uVar5;
              }
              else {
                if (((uVar2 == uVar7) && (uVar9 == uVar11)) ||
                   (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar9,uVar7,uVar11,0), (uVar3 & 1) != 0
                   )) {
                  if (((uVar13 == uVar14) && (uVar15 == uVar16)) ||
                     (uVar3 = uVar13, func_0x000107c605b8(uVar13,uVar15,uVar14,uVar16,0),
                     (uVar3 & 1) != 0)) {
                    if ((((uint)uVar8 ^ (uint)uVar6) & 1) == 0) {
                      FUN_103d3e4c8(&uStack_b0,auStack_128,0x113004b98,&UNK_10dc80c28);
                      FUN_103d3e4c8(&uStack_f0,auStack_128,0x113004b98,&UNK_10dc80c28);
                      uVar3 = uVar10;
                      func_0x000100e25fcc(uVar10,uVar4,uVar12,uVar5);
                      FUN_103d3d4b8(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar5);
                      if ((uVar3 & 1) != 0) goto LAB_103d3cd50;
                      goto LAB_103d3ce5c;
                    }
                    FUN_103d3e4c8(&uStack_b0,auStack_128,0x113004b98,&UNK_10dc80c28);
                    FUN_103d3e4c8(&uStack_f0,auStack_128,0x113004b98,&UNK_10dc80c28);
                  }
                  else {
                    FUN_103d3e4c8(&uStack_b0,auStack_128,0x113004b98,&UNK_10dc80c28);
                    FUN_103d3e4c8(&uStack_f0,auStack_128,0x113004b98,&UNK_10dc80c28);
                  }
                }
                else {
                  FUN_103d3e4c8(&uStack_b0,auStack_128,0x113004b98,&UNK_10dc80c28);
                  FUN_103d3e4c8(&uStack_f0,auStack_128,0x113004b98,&UNK_10dc80c28);
                }
                FUN_103d3d4b8(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar5);
              }
LAB_103d3ce5c:
              FUN_103d3d4b8(uVar2,uVar9,uVar13,uVar15,uVar6,uVar10,uVar4);
            }
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_103d3ce64:
  return uVar1 & 1;
}



/* Entry: 103d3ce9c; end: 103d3cf8f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d3ce9c(char param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  
  if (param_1 == '\x02') {
    return;
  }
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 103d3cf90; end: 103d3d4b7;  */

ulong FUN_103d3cf90(ulong *param_1,ulong *param_2)

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
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_128 [56];
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar2 = *param_1;
  if ((((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0)
       ) && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)))) &&
     ((((((byte)param_1[4] ^ (byte)param_2[4]) & 1) == 0 && (param_1[5] == param_2[5])) &&
      (param_1[6] == param_2[6])))) {
    uVar2 = param_1[7];
    if (((uVar2 == param_2[7]) && (param_1[8] == param_2[8])) ||
       (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
      if ((char)param_2[10] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103d3d078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10dc80b84)[param_2[9]] * 4 + 0x103d3d07c))();
        return uVar2;
      }
      if (param_1[9] == param_2[9]) {
        uVar2 = param_1[0xb];
        if (((uVar2 == param_2[0xb]) && (param_1[0xc] == param_2[0xc])) ||
           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
          uVar2 = param_1[0xd];
          if (((uVar2 == param_2[0xd]) && (param_1[0xe] == param_2[0xe])) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            uVar9 = param_1[0x12];
            uVar2 = param_1[0x11];
            uVar10 = param_1[0x14];
            uVar6 = param_1[0x13];
            uVar15 = param_1[0x16];
            uVar13 = param_1[0x15];
            uVar4 = param_1[0x17];
            uVar11 = param_2[0x12];
            uVar7 = param_2[0x11];
            uVar16 = param_2[0x14];
            uVar14 = param_2[0x13];
            uVar12 = param_2[0x16];
            uVar8 = param_2[0x15];
            uVar5 = param_2[0x17];
            uStack_f0 = uVar7;
            uStack_e8 = uVar11;
            uStack_e0 = uVar14;
            uStack_d8 = uVar16;
            uStack_d0 = uVar8;
            uStack_c8 = uVar12;
            uStack_c0 = uVar5;
            uStack_b0 = uVar2;
            uStack_a8 = uVar9;
            uStack_a0 = uVar6;
            uStack_98 = uVar10;
            uStack_90 = uVar13;
            uStack_88 = uVar15;
            uStack_80 = uVar4;
            if (uVar9 == 0) {
              if (uVar11 == 0) {
                FUN_103d3e4c8(&uStack_b0,auStack_128,0x113004b98,&UNK_10dc80c28);
                FUN_103d3e4c8(&uStack_f0,auStack_128,0x113004b98,&UNK_10dc80c28);
LAB_103d3d3a0:
                FUN_103d3d4b8(uVar2,uVar9,uVar6,uVar10,uVar13,uVar15,uVar4);
                uVar2 = param_1[0xf];
                func_0x000100e25fcc(uVar2,param_1[0x10],param_2[0xf],param_2[0x10]);
                uVar1 = (uint)uVar2;
                goto LAB_103d3d480;
              }
LAB_103d3d1fc:
              FUN_103d3e4c8(&uStack_b0,auStack_128,0x113004b98,&UNK_10dc80c28);
              FUN_103d3e4c8(&uStack_f0,auStack_128,0x113004b98,&UNK_10dc80c28);
              FUN_103d3d4b8(uVar2,uVar9,uVar6,uVar10,uVar13,uVar15,uVar4);
              uVar2 = uVar7;
              uVar9 = uVar11;
              uVar6 = uVar14;
              uVar10 = uVar16;
              uVar13 = uVar8;
              uVar15 = uVar12;
              uVar4 = uVar5;
            }
            else {
              if (uVar11 == 0) goto LAB_103d3d1fc;
              if (((uVar2 == uVar7) && (uVar9 == uVar11)) ||
                 (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar9,uVar7,uVar11,0), (uVar3 & 1) != 0))
              {
                if (((uVar6 != uVar14) || (uVar10 != uVar16)) &&
                   (uVar3 = uVar6, func_0x000107c605b8(uVar6,uVar10,uVar14,uVar16,0),
                   (uVar3 & 1) == 0)) {
                  FUN_103d3e4c8(&uStack_b0,auStack_128,0x113004b98,&UNK_10dc80c28);
                  FUN_103d3e4c8(&uStack_f0,auStack_128,0x113004b98,&UNK_10dc80c28);
                  goto LAB_103d3d448;
                }
                if ((((uint)uVar8 ^ (uint)uVar13) & 1) != 0) {
                  FUN_103d3e4c8(&uStack_b0,auStack_128,0x113004b98,&UNK_10dc80c28);
                  FUN_103d3e4c8(&uStack_f0,auStack_128,0x113004b98,&UNK_10dc80c28);
                  goto LAB_103d3d448;
                }
                FUN_103d3e4c8(&uStack_b0,auStack_128,0x113004b98,&UNK_10dc80c28);
                FUN_103d3e4c8(&uStack_f0,auStack_128,0x113004b98,&UNK_10dc80c28);
                uVar3 = uVar15;
                func_0x000100e25fcc(uVar15,uVar4,uVar12,uVar5);
                FUN_103d3d4b8(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar5);
                if ((uVar3 & 1) != 0) goto LAB_103d3d3a0;
              }
              else {
                FUN_103d3e4c8(&uStack_b0,auStack_128,0x113004b98,&UNK_10dc80c28);
                FUN_103d3e4c8(&uStack_f0,auStack_128,0x113004b98,&UNK_10dc80c28);
LAB_103d3d448:
                FUN_103d3d4b8(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar5);
              }
            }
            FUN_103d3d4b8(uVar2,uVar9,uVar6,uVar10,uVar13,uVar15,uVar4);
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_103d3d480:
  return (ulong)(uVar1 & 1);
}



/* Entry: 103d3d4b8; end: 103d3d503;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d3d4b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  uVar1 = (uint)(param_7 >> 0x3e);
  if (uVar1 == 1) {
    param_6 = param_7 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_6);
  return;
}



/* Entry: 103d3d504; end: 103d3d51f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d3d504(void)

{
  ulong in_x3;
  ulong in_x4;
  uint uVar1;
  
  if (0xe < in_x4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(in_x4 >> 0x3e);
  if (uVar1 == 1) {
    in_x3 = in_x4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x3);
  return;
}



/* Entry: 103d3d520; end: 103d3d663;  */

undefined8 FUN_103d3d520(undefined8 param_1,undefined8 param_2)

{
  func_0x000100d6ddb4(param_2,param_1,&UNK_1107055a0);
  return param_2;
}



/* Entry: 103d3d664; end: 103d3d683;  */

void FUN_103d3d664(void)

{
  func_0x000107c61168(&PTR_PTR_1130058a8);
  return;
}



/* Entry: 103d3d684; end: 103d3d6bb;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d3d684(char param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_1 == '\x02') {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 103d3d6bc; end: 103d3d71b;  */

undefined8 FUN_103d3d6bc(undefined8 param_1,undefined8 param_2)

{
  FUN_103d471f8(param_2,param_1,&UNK_110704810);
  return param_2;
}



/* Entry: 103d3d71c; end: 103d3d737;  */

void FUN_103d3d71c(undefined8 *param_1)

{
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 103d3d738; end: 103d3d89f;  */

/* WARNING: Possible PIC construction at 0x000103d3d768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d3d808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d3d850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d3d854) */
/* WARNING: Removing unreachable block (ram,0x000103d3d80c) */
/* WARNING: Removing unreachable block (ram,0x000103d3d76c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d3d738(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
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
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar13 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1])
  goto code_r0x000107c605b8;
  lVar19 = param_1[2];
  lVar22 = param_2[2];
  if (*(char *)(param_2 + 3) == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 != 0) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 1) {
      if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 2) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  if (param_1[4] == param_2[4]) {
    uVar14 = param_1[5];
    if (((uVar14 == param_2[5]) && (param_1[6] == param_2[6])) ||
       (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
      pbVar12 = (byte *)param_1[7];
      pbVar16 = (byte *)param_1[8];
      pbVar17 = (byte *)param_2[7];
      pbVar13 = (byte *)param_2[8];
      if ((pbVar12 != pbVar17) || (pbVar16 != pbVar13)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(pbVar12,pbVar16,pbVar17,pbVar13,0);
        return pbVar12;
      }
      uVar14 = param_1[9];
      if (((uVar14 == param_2[9]) && (param_1[10] == param_2[10])) ||
         (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
        pbVar12 = (byte *)param_1[0xb];
        pbVar16 = (byte *)param_1[0xc];
        pbVar17 = (byte *)param_2[0xb];
        pbVar13 = (byte *)param_2[0xc];
        if ((pbVar12 != pbVar17) || (pbVar16 != pbVar13)) goto code_r0x000107c605b8;
        uVar14 = param_1[0xd];
        if (((uVar14 == param_2[0xd]) && (param_1[0xe] == param_2[0xe])) ||
           (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
          pbVar10 = (byte *)param_1[0xf];
          pbVar26 = (byte *)param_1[0x10];
          lVar19 = param_2[0xf];
          uVar14 = param_2[0x10];
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
            uVar4 = (uint)((ulong)pbVar26 >> 0x20);
            uVar18 = uVar4 >> 0x1e;
            uVar5 = (uint)(uVar14 >> 0x20);
            uVar23 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar15 = pbVar26;
            if ((ulong)pbVar26 >> 0x3e == 3) {
              uVar21 = 0;
              if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                  (uVar14 >> 0x3e < 3)) ||
                 ((uVar21 = 0, lVar19 != 0 || (uVar14 != 0xc000000000000000))))
              goto joined_r0x000100e26170;
code_r0x000100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar18 == 0) {
                uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
              }
              else {
                iVar20 = (int)((ulong)pbVar10 >> 0x20);
                if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                  (*pcVar6)();
                }
                uVar21 = (ulong)(iVar20 - iVar8);
              }
joined_r0x000100e26170:
              if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
              if (uVar23 == 0) {
                uVar24 = uVar14 >> 0x30 & 0xff;
                goto code_r0x000100e2608c;
              }
              iVar20 = (int)((ulong)lVar19 >> 0x20);
              if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
              pbVar9 = (byte *)0x0;
            }
            else {
              if (uVar18 == 2) {
                uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar6)();
                }
                goto joined_r0x000100e26170;
              }
              uVar21 = 0;
              if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
              if (uVar23 == 2) {
                uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
code_r0x000100e2608c:
                if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
                if ((long)uVar21 < 1) goto code_r0x000100e26128;
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
                    puVar7[-0x68] = (char)pbVar26;
                    puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                    puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                    puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                    puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                    puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                    pbVar15 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                  unaff_x24 = pbVar26;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar15 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar15) {
                        pbVar15 = unaff_x23;
                      }
                      pbVar15 = pbVar15 + (long)pbVar10;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if (uVar18 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar15 = puVar7 + -0x70;
                    goto code_r0x000100e26260;
                  }
                  lVar22 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar15 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar22,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar22 - (long)pbVar15);
                  }
                  unaff_x23 = unaff_x24 + -lVar22;
                  if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  unaff_x25 = pbVar26;
                  if (pbVar10 == (byte *)0x0) {
                    pbVar15 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar15) {
                      pbVar15 = unaff_x23;
                    }
                    pbVar15 = pbVar15 + (long)pbVar10;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar19,uVar14);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar14;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar21 == 0);
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
            pbVar25 = *(byte **)(pbVar9 + 0x18);
            bVar27 = pbVar9[0x28];
            pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar16 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar15[0x28] == 0) {
                  lVar19 = *(long *)pbVar15;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
                  return (byte *)(ulong)((uint)pbVar12 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar27 == 1) {
                if (pbVar15[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar13 = *(byte **)(pbVar15 + 0x10);
                lVar19 = *(long *)pbVar15;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
                if (((ulong)pbVar12 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar12 = pbVar10;
                pbVar16 = pbVar26;
                if ((pbVar10 == pbVar17) && (pbVar26 == pbVar13)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar15[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar13 = *(byte **)(pbVar15 + 8);
                lVar19 = *(long *)(pbVar15 + 0x18);
                if ((pbVar12 == pbVar17) && (pbVar10 == pbVar13)) {
                  if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar25 != (byte *)0x0) {
                    if (lVar19 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar19);
                    func_0x000107c61174();
                    pbVar13 = pbVar25;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(lVar19);
                    pbVar25 = pbVar13;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar19 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              goto code_r0x000107c605b8;
            }
            lVar22 = *(long *)(pbVar9 + 0x20);
            if (bVar27 < 5) {
              if (bVar27 != 3) {
                if (pbVar15[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar13 = *(byte **)(pbVar15 + 8);
                if (((pbVar12 == pbVar17) && (pbVar10 == pbVar13)) &&
                   (pbVar12 = pbVar26, pbVar16 = pbVar25, pbVar17 = *(byte **)(pbVar15 + 0x10),
                   pbVar13 = *(byte **)(pbVar15 + 0x18),
                   pbVar26 == *(byte **)(pbVar15 + 0x10) && pbVar25 == *(byte **)(pbVar15 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
              }
              if (pbVar15[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar15 != ((uint)pbVar12 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar15 + 0x10);
              lVar19 = *(long *)(pbVar15 + 0x20);
              if (pbVar26 == (byte *)0x0) {
                if (pbVar13 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar13 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar12 = pbVar10;
                pbVar16 = pbVar26;
                if ((pbVar10 != pbVar17) || (pbVar26 != pbVar13)) goto code_r0x000107c605b8;
              }
              if (lVar22 != 0) {
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar25 == *(byte **)(pbVar15 + 0x18)) && (lVar22 == lVar19)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar15 + 0x18),lVar19,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar27 != 5) {
              if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                  lVar22 == 0) && pbVar26 == (byte *)0x0) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar22 = *(long *)(pbVar15 + 0x20);
                lVar19 = *(long *)(pbVar15 + 0x18);
                bVar27 = pbVar15[8] | (byte)lVar19;
                bVar28 = pbVar15[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar15[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar15[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar15[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar15[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar15[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar15[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar15[0x10] | (byte)lVar22;
                bVar36 = pbVar15[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar15[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar15[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar15[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar15[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar15[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar15[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                    *(long *)pbVar15 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                  lVar22 == 0)) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar15 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar15 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar22 = *(long *)(pbVar15 + 0x20);
              lVar19 = *(long *)(pbVar15 + 0x18);
              bVar27 = pbVar15[8] | (byte)lVar19;
              bVar28 = pbVar15[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar15[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar15[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar15[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar15[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar15[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar15[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar15[0x10] | (byte)lVar22;
              bVar36 = pbVar15[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar15[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar15[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar15[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar15[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar15[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar15[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
              lVar19 = CONCAT17(bVar34 | auVar43[7],
                                CONCAT16(bVar33 | auVar43[6],
                                         CONCAT15(bVar32 | auVar43[5],
                                                  CONCAT14(bVar31 | auVar43[4],
                                                           CONCAT13(bVar30 | auVar43[3],
                                                                    CONCAT12(bVar29 | auVar43[2],
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar15[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar15 + 8);
            uVar14 = *(ulong *)(pbVar15 + 0x10);
            lVar22 = *(long *)pbVar15;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar22,uVar11);
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



/* Entry: 103d3d8a0; end: 103d3d8c3;  */

int FUN_103d3d8a0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d3d8c4; end: 103d3d8ef;  */

undefined8 FUN_103d3d8c4(undefined8 param_1)

{
  FUN_103d4cb20(param_1,&UNK_110705ed0);
  return param_1;
}



/* Entry: 103d3d8f0; end: 103d3d91f;  */

void FUN_103d3d8f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  return;
}



/* Entry: 103d3d920; end: 103d3e4a7;  */

uint FUN_103d3d920(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong auStack_290 [4];
  ulong uStack_270;
  long lStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  long lStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar7 = param_1[3];
  uVar5 = param_1[2];
  uVar12 = param_1[5];
  uVar9 = param_1[4];
  lVar8 = param_2[3];
  uVar6 = param_2[2];
  uVar13 = param_2[5];
  uVar11 = param_2[4];
  uStack_b0 = uVar6;
  lStack_a8 = lVar8;
  uStack_a0 = uVar11;
  uStack_98 = uVar13;
  uStack_90 = uVar5;
  lStack_88 = lVar7;
  uStack_80 = uVar9;
  uStack_78 = uVar12;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_103d3da14;
    FUN_103d3e4c8(&uStack_90,&uStack_270,0x112db6f40,&UNK_10d9681d0);
    FUN_103d3e4c8(&uStack_b0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
LAB_103d3da90:
    func_0x000101597ae4(uVar5,lVar7,uVar9,uVar12);
    lVar7 = param_1[7];
    uVar5 = param_1[6];
    uVar12 = param_1[9];
    uVar9 = param_1[8];
    lVar8 = param_2[7];
    uVar6 = param_2[6];
    uVar13 = param_2[9];
    uVar11 = param_2[8];
    uStack_f0 = uVar6;
    lStack_e8 = lVar8;
    uStack_e0 = uVar11;
    uStack_d8 = uVar13;
    uStack_d0 = uVar5;
    lStack_c8 = lVar7;
    uStack_c0 = uVar9;
    uStack_b8 = uVar12;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_103d3db68;
      FUN_103d3e4c8(&uStack_d0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
      FUN_103d3e4c8(&uStack_f0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
    }
    else {
      if (lVar8 == 0) {
LAB_103d3db68:
        uStack_270 = uVar5;
        lStack_268 = lVar7;
        uStack_260 = uVar9;
        uStack_258 = uVar12;
        uStack_250 = uVar6;
        lStack_248 = lVar8;
        uStack_240 = uVar11;
        uStack_238 = uVar13;
        FUN_103d3e4c8(&uStack_d0,&uStack_150,0x112db6f40,&UNK_10d9681d0);
        puVar2 = &uStack_f0;
        puVar4 = &uStack_150;
        goto LAB_103d3db9c;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar10 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar10 & 1) == 0)) {
        FUN_103d3e4c8(&uStack_d0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
        puVar2 = &uStack_f0;
        goto LAB_103d3de1c;
      }
      FUN_103d3e4c8(&uStack_d0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
      FUN_103d3e4c8(&uStack_f0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
      uVar10 = uVar9;
      func_0x000100e25fcc(uVar9,uVar12,uVar11,uVar13);
      func_0x000101597ae4(uVar6,lVar8,uVar11,uVar13);
      if ((uVar10 & 1) == 0) goto LAB_103d3de40;
    }
    func_0x000101597ae4(uVar5,lVar7,uVar9,uVar12);
    uVar9 = param_1[0xb];
    lVar7 = param_1[10];
    uVar5 = param_1[0xc];
    uVar10 = param_2[0xb];
    lVar8 = param_2[10];
    uVar6 = param_2[0xc];
    lStack_130 = lVar8;
    uStack_128 = uVar10;
    uStack_120 = uVar6;
    lStack_110 = lVar7;
    uStack_108 = uVar9;
    uStack_100 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_103d3dda4;
      if (lVar7 == lVar8) {
        FUN_103d3e4c8(&lStack_110,&uStack_270,0x112db6f48,&UNK_10d969b40);
        FUN_103d3e4c8(&lStack_130,&uStack_270,0x112db6f48,&UNK_10d969b40);
        uVar3 = uVar9;
        func_0x000100e25fcc(uVar9,uVar5,uVar10,uVar6);
        func_0x00010159fa64(lVar7,uVar10,uVar6);
        if ((uVar3 & 1) != 0) goto LAB_103d3dcb8;
      }
      else {
        FUN_103d3e4c8(&lStack_110,&uStack_270,0x112db6f48,&UNK_10d969b40);
        FUN_103d3e4c8(&lStack_130,&uStack_270,0x112db6f48,&UNK_10d969b40);
        func_0x00010159fa64(lVar8,uVar10,uVar6);
      }
    }
    else {
      if (0xe < uVar6 >> 0x3c) {
        FUN_103d3e4c8(&lStack_110,&uStack_270,0x112db6f48,&UNK_10d969b40);
        FUN_103d3e4c8(&lStack_130,&uStack_270,0x112db6f48,&UNK_10d969b40);
LAB_103d3dcb8:
        func_0x00010159fa64(lVar7,uVar9,uVar5);
        lVar7 = param_1[0xe];
        uVar5 = param_1[0xd];
        uVar12 = param_1[0x10];
        uVar9 = param_1[0xf];
        lVar8 = param_2[0xe];
        uVar6 = param_2[0xd];
        uVar13 = param_2[0x10];
        uVar11 = param_2[0xf];
        uStack_170 = uVar6;
        lStack_168 = lVar8;
        uStack_160 = uVar11;
        uStack_158 = uVar13;
        uStack_150 = uVar5;
        lStack_148 = lVar7;
        uStack_140 = uVar9;
        uStack_138 = uVar12;
        if (lVar7 == 0) {
          if (lVar8 != 0) goto LAB_103d3df50;
          FUN_103d3e4c8(&uStack_150,&uStack_270,0x112db6f40,&UNK_10d9681d0);
          FUN_103d3e4c8(&uStack_170,&uStack_270,0x112db6f40,&UNK_10d9681d0);
        }
        else {
          if (lVar8 == 0) {
LAB_103d3df50:
            uStack_270 = uVar5;
            lStack_268 = lVar7;
            uStack_260 = uVar9;
            uStack_258 = uVar12;
            uStack_250 = uVar6;
            lStack_248 = lVar8;
            uStack_240 = uVar11;
            uStack_238 = uVar13;
            FUN_103d3e4c8(&uStack_150,&uStack_190,0x112db6f40,&UNK_10d9681d0);
            puVar2 = &uStack_170;
            puVar4 = &uStack_190;
            goto LAB_103d3db9c;
          }
          if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
             (uVar10 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar10 & 1) == 0)) {
            FUN_103d3e4c8(&uStack_150,&uStack_270,0x112db6f40,&UNK_10d9681d0);
            puVar2 = &uStack_170;
            goto LAB_103d3de1c;
          }
          FUN_103d3e4c8(&uStack_150,&uStack_270,0x112db6f40,&UNK_10d9681d0);
          FUN_103d3e4c8(&uStack_170,&uStack_270,0x112db6f40,&UNK_10d9681d0);
          uVar10 = uVar9;
          func_0x000100e25fcc(uVar9,uVar12,uVar11,uVar13);
          func_0x000101597ae4(uVar6,lVar8,uVar11,uVar13);
          if ((uVar10 & 1) == 0) goto LAB_103d3de40;
        }
        func_0x000101597ae4(uVar5,lVar7,uVar9,uVar12);
        lVar7 = param_1[0x12];
        uVar5 = param_1[0x11];
        uVar12 = param_1[0x14];
        uVar9 = param_1[0x13];
        lVar8 = param_2[0x12];
        uVar6 = param_2[0x11];
        uVar13 = param_2[0x14];
        uVar11 = param_2[0x13];
        uStack_1b0 = uVar6;
        lStack_1a8 = lVar8;
        uStack_1a0 = uVar11;
        uStack_198 = uVar13;
        uStack_190 = uVar5;
        lStack_188 = lVar7;
        uStack_180 = uVar9;
        uStack_178 = uVar12;
        if (lVar7 == 0) {
          if (lVar8 != 0) goto LAB_103d3e0b4;
          FUN_103d3e4c8(&uStack_190,&uStack_270,0x112db6f40,&UNK_10d9681d0);
          FUN_103d3e4c8(&uStack_1b0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
        }
        else {
          if (lVar8 == 0) {
LAB_103d3e0b4:
            uStack_270 = uVar5;
            lStack_268 = lVar7;
            uStack_260 = uVar9;
            uStack_258 = uVar12;
            uStack_250 = uVar6;
            lStack_248 = lVar8;
            uStack_240 = uVar11;
            uStack_238 = uVar13;
            FUN_103d3e4c8(&uStack_190,&uStack_1d0,0x112db6f40,&UNK_10d9681d0);
            puVar2 = &uStack_1b0;
            puVar4 = &uStack_1d0;
            goto LAB_103d3db9c;
          }
          if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
             (uVar10 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar10 & 1) == 0)) {
            FUN_103d3e4c8(&uStack_190,&uStack_270,0x112db6f40,&UNK_10d9681d0);
            puVar2 = &uStack_1b0;
            goto LAB_103d3de1c;
          }
          FUN_103d3e4c8(&uStack_190,&uStack_270,0x112db6f40,&UNK_10d9681d0);
          FUN_103d3e4c8(&uStack_1b0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
          uVar10 = uVar9;
          func_0x000100e25fcc(uVar9,uVar12,uVar11,uVar13);
          func_0x000101597ae4(uVar6,lVar8,uVar11,uVar13);
          if ((uVar10 & 1) == 0) goto LAB_103d3de40;
        }
        func_0x000101597ae4(uVar5,lVar7,uVar9,uVar12);
        lVar7 = param_1[0x16];
        uVar5 = param_1[0x15];
        uVar12 = param_1[0x18];
        uVar9 = param_1[0x17];
        lVar8 = param_2[0x16];
        uVar6 = param_2[0x15];
        uVar13 = param_2[0x18];
        uVar11 = param_2[0x17];
        uStack_1f0 = uVar6;
        lStack_1e8 = lVar8;
        uStack_1e0 = uVar11;
        uStack_1d8 = uVar13;
        uStack_1d0 = uVar5;
        lStack_1c8 = lVar7;
        uStack_1c0 = uVar9;
        uStack_1b8 = uVar12;
        if (lVar7 == 0) {
          if (lVar8 != 0) goto LAB_103d3e244;
          FUN_103d3e4c8(&uStack_1d0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
          FUN_103d3e4c8(&uStack_1f0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
        }
        else {
          if (lVar8 == 0) {
LAB_103d3e244:
            uStack_270 = uVar5;
            lStack_268 = lVar7;
            uStack_260 = uVar9;
            uStack_258 = uVar12;
            uStack_250 = uVar6;
            lStack_248 = lVar8;
            uStack_240 = uVar11;
            uStack_238 = uVar13;
            FUN_103d3e4c8(&uStack_1d0,&uStack_210,0x112db6f40,&UNK_10d9681d0);
            puVar2 = &uStack_1f0;
            puVar4 = &uStack_210;
            goto LAB_103d3db9c;
          }
          if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
             (uVar10 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar10 & 1) == 0)) {
            FUN_103d3e4c8(&uStack_1d0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
            puVar2 = &uStack_1f0;
            goto LAB_103d3de1c;
          }
          FUN_103d3e4c8(&uStack_1d0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
          FUN_103d3e4c8(&uStack_1f0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
          uVar10 = uVar9;
          func_0x000100e25fcc(uVar9,uVar12,uVar11,uVar13);
          func_0x000101597ae4(uVar6,lVar8,uVar11,uVar13);
          if ((uVar10 & 1) == 0) goto LAB_103d3de40;
        }
        func_0x000101597ae4(uVar5,lVar7,uVar9,uVar12);
        lVar7 = param_1[0x1a];
        uVar5 = param_1[0x19];
        uVar12 = param_1[0x1c];
        uVar9 = param_1[0x1b];
        lVar8 = param_2[0x1a];
        uVar6 = param_2[0x19];
        uVar13 = param_2[0x1c];
        uVar11 = param_2[0x1b];
        uStack_230 = uVar6;
        lStack_228 = lVar8;
        uStack_220 = uVar11;
        uStack_218 = uVar13;
        uStack_210 = uVar5;
        lStack_208 = lVar7;
        uStack_200 = uVar9;
        uStack_1f8 = uVar12;
        if (lVar7 == 0) {
          if (lVar8 != 0) goto LAB_103d3e3c8;
          FUN_103d3e4c8(&uStack_210,&uStack_270,0x112db6f40,&UNK_10d9681d0);
          FUN_103d3e4c8(&uStack_230,&uStack_270,0x112db6f40,&UNK_10d9681d0);
        }
        else {
          if (lVar8 == 0) {
LAB_103d3e3c8:
            uStack_270 = uVar5;
            lStack_268 = lVar7;
            uStack_260 = uVar9;
            uStack_258 = uVar12;
            uStack_250 = uVar6;
            lStack_248 = lVar8;
            uStack_240 = uVar11;
            uStack_238 = uVar13;
            FUN_103d3e4c8(&uStack_210,auStack_290,0x112db6f40,&UNK_10d9681d0);
            puVar2 = &uStack_230;
            puVar4 = auStack_290;
            goto LAB_103d3db9c;
          }
          if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
             (uVar10 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar10 & 1) == 0)) {
            FUN_103d3e4c8(&uStack_210,&uStack_270,0x112db6f40,&UNK_10d9681d0);
            puVar2 = &uStack_230;
            goto LAB_103d3de1c;
          }
          FUN_103d3e4c8(&uStack_210,&uStack_270,0x112db6f40,&UNK_10d9681d0);
          FUN_103d3e4c8(&uStack_230,&uStack_270,0x112db6f40,&UNK_10d9681d0);
          uVar10 = uVar9;
          func_0x000100e25fcc(uVar9,uVar12,uVar11,uVar13);
          func_0x000101597ae4(uVar6,lVar8,uVar11,uVar13);
          if ((uVar10 & 1) == 0) goto LAB_103d3de40;
        }
        func_0x000101597ae4(uVar5,lVar7,uVar9,uVar12);
        uVar12 = *param_1;
        func_0x000100e25fcc(uVar12,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar12;
        goto LAB_103d3de58;
      }
LAB_103d3dda4:
      FUN_103d3e4c8(&lStack_110,&uStack_270,0x112db6f48,&UNK_10d969b40);
      FUN_103d3e4c8(&lStack_130,&uStack_270,0x112db6f48,&UNK_10d969b40);
      func_0x00010159fa64(lVar7,uVar9,uVar5);
      lVar7 = lVar8;
      uVar9 = uVar10;
      uVar5 = uVar6;
    }
    func_0x00010159fa64(lVar7,uVar9,uVar5);
  }
  else if (lVar8 == 0) {
LAB_103d3da14:
    uStack_270 = uVar5;
    lStack_268 = lVar7;
    uStack_260 = uVar9;
    uStack_258 = uVar12;
    uStack_250 = uVar6;
    lStack_248 = lVar8;
    uStack_240 = uVar11;
    uStack_238 = uVar13;
    FUN_103d3e4c8(&uStack_90,&uStack_d0,0x112db6f40,&UNK_10d9681d0);
    puVar2 = &uStack_b0;
    puVar4 = &uStack_d0;
LAB_103d3db9c:
    FUN_103d3e4c8(puVar2,puVar4,0x112db6f40,&UNK_10d9681d0);
    func_0x000103d5122c(&uStack_270,0x112db7ec0,&UNK_10d966840);
  }
  else {
    if (((uVar5 == uVar6) && (lVar7 == lVar8)) ||
       (uVar10 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar10 & 1) != 0)) {
      FUN_103d3e4c8(&uStack_90,&uStack_270,0x112db6f40,&UNK_10d9681d0);
      FUN_103d3e4c8(&uStack_b0,&uStack_270,0x112db6f40,&UNK_10d9681d0);
      uVar10 = uVar9;
      func_0x000100e25fcc(uVar9,uVar12,uVar11,uVar13);
      func_0x000101597ae4(uVar6,lVar8,uVar11,uVar13);
      if ((uVar10 & 1) != 0) goto LAB_103d3da90;
    }
    else {
      FUN_103d3e4c8(&uStack_90,&uStack_270,0x112db6f40,&UNK_10d9681d0);
      puVar2 = &uStack_b0;
LAB_103d3de1c:
      FUN_103d3e4c8(puVar2,&uStack_270,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar6,lVar8,uVar11,uVar13);
    }
LAB_103d3de40:
    func_0x000101597ae4(uVar5,lVar7,uVar9,uVar12);
  }
  uVar1 = 0;
LAB_103d3de58:
  return uVar1 & 1;
}



/* Entry: 103d3e4a8; end: 103d3e4c7;  */

void FUN_103d3e4a8(void)

{
  func_0x000107c61168(&PTR_PTR_113005a88);
  return;
}



/* Entry: 103d3e4c8; end: 103d3e56f;  */

undefined8 FUN_103d3e4c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}


