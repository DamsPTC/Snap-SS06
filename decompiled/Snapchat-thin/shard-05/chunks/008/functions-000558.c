/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042124bc; end: 1042124fb;  */

void FUN_1042124bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce3d40;
  _swift_getWitnessTable(&UNK_10dce3d40,&UNK_110752c68);
  puRam0000000113069930 = puVar1;
  return;
}



/* Entry: 1042124fc; end: 10421259f;  */

int FUN_1042124fc(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x10] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1042125a0; end: 1042125fb;  */

byte FUN_1042125a0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  if ((uVar3 != *param_2 || param_1[1] != param_2[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar3 & 1) == 0)) {
    return 0;
  }
  return (byte)uVar1 ^ (byte)uVar2 ^ 1;
}



/* Entry: 1042125fc; end: 104212603;  */

void FUN_1042125fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104212604; end: 104212637;  */

undefined8 * FUN_104212604(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104212638; end: 10421268b;  */

undefined8 * FUN_104212638(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 10421268c; end: 1042126c7;  */

undefined8 * FUN_10421268c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1042126c8; end: 1042128df;  */

int FUN_1042126c8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1042128e0; end: 104212937;  */

uint FUN_1042128e0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_104212938(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 104212938; end: 104212cbf;  */

undefined8 FUN_104212938(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_320 [80];
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
  
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_218 = param_2[3];
  uStack_220 = param_2[2];
  uStack_118 = param_2[5];
  uStack_120 = param_2[4];
  uStack_208 = param_2[5];
  uStack_210 = param_2[4];
  uStack_108 = param_2[7];
  uStack_110 = param_2[6];
  uStack_1f8 = param_2[7];
  uStack_200 = param_2[6];
  uStack_f8 = param_2[9];
  uStack_100 = param_2[8];
  uStack_138 = param_2[1];
  uStack_140 = *param_2;
  uStack_128 = param_2[3];
  uStack_130 = param_2[2];
  uStack_228 = param_2[1];
  uStack_230 = *param_2;
  uStack_1e8 = param_2[9];
  uStack_1f0 = param_2[8];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_190 = uStack_230;
  uStack_188 = uStack_228;
  uStack_180 = uStack_220;
  uStack_178 = uStack_218;
  uStack_170 = uStack_210;
  uStack_168 = uStack_208;
  uStack_160 = uStack_200;
  uStack_158 = uStack_1f8;
  uStack_150 = uStack_1f0;
  uStack_148 = uStack_1e8;
  if (uStack_1e0 == 0) {
    if (uStack_230 != 0) goto LAB_104212a78;
    uStack_258 = param_1[5];
    uStack_260 = param_1[4];
    uStack_248 = param_1[7];
    uStack_250 = param_1[6];
    uStack_238 = param_1[9];
    uStack_240 = param_1[8];
    uStack_278 = param_1[1];
    uStack_280 = *param_1;
    uStack_268 = param_1[3];
    uStack_270 = param_1[2];
    func_0x000104213264(&uStack_f0,&uStack_a0,0x112dcc710,&UNK_10d98f0e0);
    func_0x000104213264(&uStack_140,&uStack_a0,0x112dcc710,&UNK_10d98f0e0);
    func_0x000104213224(&uStack_280,0x112dcc710,&UNK_10d98f0e0);
  }
  else {
    if (uStack_230 == 0) {
LAB_104212a78:
      uStack_280 = uStack_1e0;
      uStack_278 = uStack_1d8;
      uStack_270 = uStack_1d0;
      uStack_268 = uStack_1c8;
      uStack_260 = uStack_1c0;
      uStack_258 = uStack_1b8;
      uStack_250 = uStack_1b0;
      uStack_248 = uStack_1a8;
      uStack_240 = uStack_1a0;
      uStack_238 = uStack_198;
      func_0x000104213264(&uStack_f0,&uStack_a0,0x112dcc710,&UNK_10d98f0e0);
      func_0x000104213264(&uStack_140,&uStack_a0,0x112dcc710,&UNK_10d98f0e0);
      func_0x000104213224(&uStack_280,0x113069938,&UNK_10dce3eb0);
      return 0;
    }
    uStack_2a8 = param_2[5];
    uStack_2b0 = param_2[4];
    uStack_298 = param_2[7];
    uStack_2a0 = param_2[6];
    uStack_288 = param_2[9];
    uStack_290 = param_2[8];
    uStack_2c8 = param_2[1];
    uStack_2d0 = *param_2;
    uStack_2b8 = param_2[3];
    uStack_2c0 = param_2[2];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_58 = param_1[9];
    uStack_60 = param_1[8];
    uStack_280 = uStack_2d0;
    uStack_278 = uStack_2c8;
    uStack_270 = uStack_2c0;
    uStack_268 = uStack_2b8;
    uStack_260 = uStack_2b0;
    uStack_258 = uStack_2a8;
    uStack_250 = uStack_2a0;
    uStack_248 = uStack_298;
    uStack_240 = uStack_290;
    uStack_238 = uStack_288;
    func_0x000104213264(&uStack_f0,auStack_320,0x112dcc710,&UNK_10d98f0e0);
    func_0x000104213264(&uStack_140,auStack_320,0x112dcc710,&UNK_10d98f0e0);
    puVar1 = &uStack_a0;
    FUN_10421372c(puVar1,&uStack_280);
    func_0x000104213224(&uStack_2d0,0x112dcc710,&UNK_10d98f0e0);
    func_0x000104213224(&uStack_1e0,0x112dcc710,&UNK_10d98f0e0);
    if (((ulong)puVar1 & 1) == 0) {
      return 0;
    }
  }
  uVar5 = param_1[0xb];
  uVar3 = param_1[10];
  uVar6 = param_2[0xb];
  uVar4 = param_2[10];
  uStack_2d0 = uVar4;
  uStack_2c8 = uVar6;
  uStack_1e0 = uVar3;
  uStack_1d8 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (uVar6 >> 0x3c < 0xf) {
      func_0x000104213264(&uStack_1e0,auStack_320,0x112d56fe0,&UNK_10d91dda0);
      func_0x000104213264(&uStack_2d0,auStack_320,0x112d56fe0,&UNK_10d91dda0);
      uVar2 = uVar3;
      func_0x000100e25fcc(uVar3,uVar5,uVar4,uVar6);
      func_0x0001000b44c0(uVar4,uVar6);
      func_0x0001000b44c0(uVar3,uVar5);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  else if (0xe < uVar6 >> 0x3c) {
    func_0x000104213264(&uStack_1e0,auStack_320,0x112d56fe0,&UNK_10d91dda0);
    func_0x000104213264(&uStack_2d0,auStack_320,0x112d56fe0,&UNK_10d91dda0);
    func_0x0001000b44c0(uVar3,uVar5);
    return 1;
  }
  func_0x000104213264(&uStack_1e0,auStack_320,0x112d56fe0,&UNK_10d91dda0);
  func_0x000104213264(&uStack_2d0,auStack_320,0x112d56fe0,&UNK_10d91dda0);
  func_0x0001000b44c0(uVar3,uVar5);
  func_0x0001000b44c0(uVar4,uVar6);
  return 0;
}



/* Entry: 104212cc0; end: 104212d53;  */

long FUN_104212cc0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104212d54; end: 104213033;  */

long * FUN_104212d54(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*param_2 == 0) {
    lVar1 = param_2[4];
    lVar4 = param_2[7];
    lVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = lVar1;
    param_1[7] = lVar4;
    param_1[6] = lVar3;
    lVar1 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = lVar1;
    lVar4 = *param_2;
    lVar3 = param_2[3];
    lVar1 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar4;
    param_1[3] = lVar3;
    param_1[2] = lVar1;
  }
  else {
    lVar1 = param_2[1];
    lVar3 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    param_1[2] = lVar3;
    *(char *)(param_1 + 3) = (char)param_2[3];
    lVar3 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar3;
    uVar2 = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar1);
    if (uVar2 >> 0x3c < 0xf) {
      lVar1 = param_2[6];
      func_0x00010006c00c(lVar1,uVar2);
      param_1[6] = lVar1;
      param_1[7] = uVar2;
    }
    else {
      lVar1 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = lVar1;
    }
    lVar1 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = lVar1;
  }
  uVar2 = param_2[0xb];
  if (uVar2 >> 0x3c < 0xf) {
    lVar1 = param_2[10];
    func_0x00010006c00c(lVar1,uVar2);
    param_1[10] = lVar1;
    param_1[0xb] = uVar2;
  }
  else {
    lVar1 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = lVar1;
  }
  return param_1;
}



/* Entry: 104213034; end: 10421314b;  */

long * FUN_104213034(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    if (*param_2 != 0) {
      *param_1 = *param_2;
      _swift_bridgeObjectRelease();
      lVar1 = param_1[1];
      param_1[1] = param_2[1];
      _swift_bridgeObjectRelease(lVar1);
      param_1[2] = param_2[2];
      *(char *)(param_1 + 3) = (char)param_2[3];
      lVar1 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = lVar1;
      if ((ulong)param_1[7] >> 0x3c < 0xf) {
        uVar2 = param_2[7];
        if (0xe < uVar2 >> 0x3c) {
          func_0x0001006e5814(param_1 + 6);
          goto LAB_1042130b0;
        }
        lVar1 = param_1[6];
        param_1[6] = param_2[6];
        param_1[7] = uVar2;
        func_0x00010006c090(lVar1);
      }
      else {
LAB_1042130b0:
        lVar1 = param_2[6];
        param_1[7] = param_2[7];
        param_1[6] = lVar1;
      }
      lVar1 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = lVar1;
      goto LAB_1042130f8;
    }
    func_0x0001017b6434(param_1);
  }
  lVar1 = param_2[4];
  lVar4 = param_2[7];
  lVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = lVar1;
  param_1[7] = lVar4;
  param_1[6] = lVar3;
  lVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = lVar1;
  lVar4 = *param_2;
  lVar3 = param_2[3];
  lVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = lVar4;
  param_1[3] = lVar3;
  param_1[2] = lVar1;
LAB_1042130f8:
  if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
    uVar2 = param_2[0xb];
    if (uVar2 >> 0x3c < 0xf) {
      lVar1 = param_1[10];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar2;
      func_0x00010006c090(lVar1);
      return param_1;
    }
    func_0x0001006e5814(param_1 + 10);
  }
  lVar1 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = lVar1;
  return param_1;
}



/* Entry: 10421314c; end: 104213223;  */

int FUN_10421314c(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104213224; end: 1042132ab;  */

undefined8 FUN_104213224(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1042132ac; end: 104213303;  */

uint FUN_1042132ac(undefined8 *param_1,undefined8 *param_2)

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
  FUN_104213304(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 104213304; end: 104213413;  */

undefined8 FUN_104213304(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  func_0x00010473e114(uVar1,param_1[1],param_1[2],param_1[3],*param_2,param_2[1],param_2[2],
                      param_2[3]);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar1 = param_2[5];
  if (param_1[5] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[4];
    if (((uVar2 != param_2[4]) || (param_1[5] != uVar1)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  uVar1 = param_1[6];
  lVar3 = param_2[6];
  if (uVar1 == 0) {
    if (lVar3 != 0) {
      return 0;
    }
  }
  else {
    if (lVar3 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar3);
    func_0x000101058cd4(uVar1,lVar3);
    _swift_bridgeObjectRelease(lVar3);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if ((int)param_1[7] == *(int *)(param_2 + 7)) {
    uVar1 = param_1[8];
    lVar3 = param_2[8];
    if (uVar1 == 0) {
      if (lVar3 == 0) {
        return 1;
      }
    }
    else if (lVar3 != 0) {
      _swift_bridgeObjectRetain(lVar3);
      FUN_104288098(uVar1,lVar3);
      _swift_bridgeObjectRelease(lVar3);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 104213414; end: 104213477;  */

long FUN_104213414(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104213478; end: 104213597;  */

undefined8 * FUN_104213478(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar3 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar2;
  uVar2 = param_2[8];
  param_1[8] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 104213598; end: 104213603;  */

undefined8 * FUN_104213598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[8];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 104213604; end: 1042136d3;  */

int FUN_104213604(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1042136d4; end: 10421372b;  */

uint FUN_1042136d4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10421372c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10421372c; end: 104213903;  */

bool FUN_10421372c(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  uVar2 = *param_1;
  FUN_1042294a0(uVar2,*param_2);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  uVar2 = param_1[1];
  if (uVar2 == 0) {
    if (param_2[1] != 0) {
      return false;
    }
  }
  else {
    if (param_2[1] == 0) {
      return false;
    }
    FUN_1042296b4();
    if ((uVar2 & 1) == 0) {
      return false;
    }
  }
  if ((int)param_1[2] != *(int *)(param_2 + 2)) {
    return false;
  }
  bVar1 = *(byte *)(param_2 + 3);
  if ((byte)param_1[3] == 2) {
    if (bVar1 != 2) {
      return false;
    }
  }
  else {
    if (bVar1 == 2) {
      return false;
    }
    if (((bVar1 ^ (byte)param_1[3]) & 1) != 0) {
      return false;
    }
  }
  if ((int)param_1[4] != *(int *)(param_2 + 4)) {
    return false;
  }
  if ((int)param_1[5] != *(int *)(param_2 + 5)) {
    return false;
  }
  uVar6 = param_1[7];
  uVar5 = param_1[6];
  uVar2 = param_2[7];
  uVar4 = param_2[6];
  uStack_70 = uVar4;
  uStack_68 = uVar2;
  uStack_60 = uVar5;
  uStack_58 = uVar6;
  if (uVar6 >> 0x3c < 0xf) {
    if (0xe < uVar2 >> 0x3c) goto LAB_104213840;
    func_0x00010105aabc(&uStack_60,auStack_80);
    func_0x00010105aabc(&uStack_70,auStack_80);
    uVar3 = uVar5;
    func_0x000100e25fcc(uVar5,uVar6,uVar4,uVar2);
    func_0x0001000b44c0(uVar4,uVar2);
    func_0x0001000b44c0(uVar5,uVar6);
    if ((uVar3 & 1) == 0) {
      return false;
    }
  }
  else {
    if (uVar2 >> 0x3c < 0xf) {
LAB_104213840:
      func_0x00010105aabc(&uStack_60,auStack_80);
      func_0x00010105aabc(&uStack_70,auStack_80);
      func_0x0001000b44c0(uVar5,uVar6);
      func_0x0001000b44c0(uVar4,uVar2);
      return false;
    }
    func_0x00010105aabc(&uStack_60,auStack_80);
    func_0x00010105aabc(&uStack_70,auStack_80);
    func_0x0001000b44c0(uVar5,uVar6);
  }
  if ((int)param_1[8] != *(int *)(param_2 + 8)) {
    return false;
  }
  return (int)param_1[9] == *(int *)(param_2 + 9);
}



/* Entry: 104213904; end: 10421397b;  */

long FUN_104213904(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10421397c; end: 104213b0b;  */

undefined8 * FUN_10421397c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  uVar1 = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[6] = uVar2;
    param_1[7] = uVar1;
  }
  else {
    uVar2 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
  }
  uVar2 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  return param_1;
}



/* Entry: 104213b0c; end: 104213bb3;  */

undefined8 * FUN_104213b0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar2 = param_2[7];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[6];
      param_1[6] = param_2[6];
      param_1[7] = uVar2;
      func_0x00010006c090(uVar1);
      goto LAB_104213b9c;
    }
    func_0x0001006e5814(param_1 + 6);
  }
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
LAB_104213b9c:
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 104213bb4; end: 104213c5f;  */

int FUN_104213bb4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104213c60; end: 104213caf;  */

undefined8 FUN_104213c60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x113069940;
  func_0x0001000285a8(0x113069940,&UNK_10dce3f80);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104213cb0; end: 104213cb3;  */

bool FUN_104213cb0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_430 [112];
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
  
  if (*param_1 != *param_2) {
    return false;
  }
  lVar3 = param_1[2];
  lVar2 = param_2[2];
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    uVar4 = param_1[1];
    if ((uVar4 != param_2[1] || lVar3 != lVar2) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,param_2[1],lVar2,0), (uVar4 & 1) == 0)) {
      return false;
    }
  }
  lVar3 = param_1[4];
  lVar2 = param_2[4];
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    uVar4 = param_1[3];
    if (((uVar4 != param_2[3]) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,param_2[3],lVar2,0), (uVar4 & 1) == 0)) {
      return false;
    }
  }
  uVar4 = param_1[5];
  lVar2 = param_2[5];
  if (uVar4 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    _swift_bridgeObjectRetain(lVar2);
    FUN_104229764(uVar4,lVar2);
    _swift_bridgeObjectRelease(lVar2);
    if ((uVar4 & 1) == 0) {
      return false;
    }
  }
  lStack_238 = param_1[0xd];
  lStack_240 = param_1[0xc];
  lStack_d8 = param_1[0xf];
  lStack_e0 = param_1[0xe];
  lStack_228 = param_1[0xf];
  lStack_230 = param_1[0xe];
  lStack_c8 = param_1[0x11];
  lStack_d0 = param_1[0x10];
  lStack_218 = param_1[0x11];
  lStack_220 = param_1[0x10];
  lStack_b8 = param_1[0x13];
  lStack_c0 = param_1[0x12];
  lStack_118 = param_1[7];
  lStack_120 = param_1[6];
  lStack_108 = param_1[9];
  lStack_110 = param_1[8];
  lStack_f8 = param_1[0xb];
  lStack_100 = param_1[10];
  lStack_e8 = param_1[0xd];
  lStack_f0 = param_1[0xc];
  lStack_268 = param_1[7];
  lStack_270 = param_1[6];
  lStack_258 = param_1[9];
  lStack_260 = param_1[8];
  lStack_248 = param_1[0xb];
  lStack_250 = param_1[10];
  lStack_188 = param_2[7];
  lStack_190 = param_2[6];
  lStack_178 = param_2[9];
  lStack_180 = param_2[8];
  lStack_288 = param_2[0x11];
  lStack_290 = param_2[0x10];
  lStack_128 = param_2[0x13];
  lStack_130 = param_2[0x12];
  lStack_2a8 = param_2[0xd];
  lStack_2b0 = param_2[0xc];
  lStack_148 = param_2[0xf];
  lStack_150 = param_2[0xe];
  lStack_298 = param_2[0xf];
  lStack_2a0 = param_2[0xe];
  lStack_138 = param_2[0x11];
  lStack_140 = param_2[0x10];
  lStack_168 = param_2[0xb];
  lStack_170 = param_2[10];
  lStack_158 = param_2[0xd];
  lStack_160 = param_2[0xc];
  lStack_2d8 = param_2[7];
  lStack_2e0 = param_2[6];
  lStack_2c8 = param_2[9];
  lStack_2d0 = param_2[8];
  lStack_2b8 = param_2[0xb];
  lStack_2c0 = param_2[10];
  lStack_208 = param_1[0x13];
  lStack_210 = param_1[0x12];
  lStack_278 = param_2[0x13];
  lStack_280 = param_2[0x12];
  lStack_200 = lStack_2e0;
  lStack_1f8 = lStack_2d8;
  lStack_1f0 = lStack_2d0;
  lStack_1e8 = lStack_2c8;
  lStack_1e0 = lStack_2c0;
  lStack_1d8 = lStack_2b8;
  lStack_1d0 = lStack_2b0;
  lStack_1c8 = lStack_2a8;
  lStack_1c0 = lStack_2a0;
  lStack_1b8 = lStack_298;
  lStack_1b0 = lStack_290;
  lStack_1a8 = lStack_288;
  lStack_1a0 = lStack_280;
  lStack_198 = lStack_278;
  if (lStack_258 == 1) {
    if (lStack_2c8 == 1) {
      lStack_308 = param_1[0xf];
      lStack_310 = param_1[0xe];
      lStack_2f8 = param_1[0x11];
      lStack_300 = param_1[0x10];
      lStack_2e8 = param_1[0x13];
      lStack_2f0 = param_1[0x12];
      lStack_348 = param_1[7];
      lStack_350 = param_1[6];
      lStack_338 = param_1[9];
      lStack_340 = param_1[8];
      lStack_328 = param_1[0xb];
      lStack_330 = param_1[10];
      lStack_318 = param_1[0xd];
      lStack_320 = param_1[0xc];
      FUN_104213c60(&lStack_120,&lStack_b0);
      FUN_104213c60(&lStack_190,&lStack_b0);
      FUN_104214774(&lStack_350,0x113069940,&UNK_10dce3f80);
LAB_1042140a0:
      if ((char)param_1[0x15] == '\x01') {
        if ((char)param_2[0x15] != '\x01') {
          return false;
        }
      }
      else {
        if ((char)param_2[0x15] == '\x01') {
          return false;
        }
        if (param_1[0x14] != param_2[0x14]) {
          return false;
        }
      }
      if ((char)param_1[0x17] == '\x01') {
        if ((char)param_2[0x17] != '\x01') {
          return false;
        }
      }
      else {
        if ((char)param_2[0x17] == '\x01') {
          return false;
        }
        if (param_1[0x16] != param_2[0x16]) {
          return false;
        }
      }
      return (int)param_1[0x18] == (int)param_2[0x18];
    }
  }
  else if (lStack_2c8 != 1) {
    lStack_378 = param_2[0xf];
    lStack_380 = param_2[0xe];
    lStack_368 = param_2[0x11];
    lStack_370 = param_2[0x10];
    lStack_358 = param_2[0x13];
    lStack_360 = param_2[0x12];
    lStack_3b8 = param_2[7];
    lStack_3c0 = param_2[6];
    lStack_3a8 = param_2[9];
    lStack_3b0 = param_2[8];
    lStack_398 = param_2[0xb];
    lStack_3a0 = param_2[10];
    lStack_388 = param_2[0xd];
    lStack_390 = param_2[0xc];
    lStack_68 = param_1[0xf];
    lStack_70 = param_1[0xe];
    lStack_58 = param_1[0x11];
    lStack_60 = param_1[0x10];
    lStack_48 = param_1[0x13];
    lStack_50 = param_1[0x12];
    lStack_a8 = param_1[7];
    lStack_b0 = param_1[6];
    lStack_98 = param_1[9];
    lStack_a0 = param_1[8];
    lStack_88 = param_1[0xb];
    lStack_90 = param_1[10];
    lStack_78 = param_1[0xd];
    lStack_80 = param_1[0xc];
    plVar1 = &lStack_b0;
    lStack_350 = lStack_3c0;
    lStack_348 = lStack_3b8;
    lStack_340 = lStack_3b0;
    lStack_338 = lStack_3a8;
    lStack_330 = lStack_3a0;
    lStack_328 = lStack_398;
    lStack_320 = lStack_390;
    lStack_318 = lStack_388;
    lStack_310 = lStack_380;
    lStack_308 = lStack_378;
    lStack_300 = lStack_370;
    lStack_2f8 = lStack_368;
    lStack_2f0 = lStack_360;
    lStack_2e8 = lStack_358;
    FUN_104255f3c(plVar1,&lStack_350);
    FUN_104213c60(&lStack_120,auStack_430);
    FUN_104213c60(&lStack_190,auStack_430);
    FUN_104214774(&lStack_3c0,0x113069940,&UNK_10dce3f80);
    FUN_104214774(&lStack_270,0x113069940,&UNK_10dce3f80);
    if (((ulong)plVar1 & 1) == 0) {
      return false;
    }
    goto LAB_1042140a0;
  }
  lStack_350 = lStack_270;
  lStack_348 = lStack_268;
  lStack_340 = lStack_260;
  lStack_338 = lStack_258;
  lStack_330 = lStack_250;
  lStack_328 = lStack_248;
  lStack_320 = lStack_240;
  lStack_318 = lStack_238;
  lStack_310 = lStack_230;
  lStack_308 = lStack_228;
  lStack_300 = lStack_220;
  lStack_2f8 = lStack_218;
  lStack_2f0 = lStack_210;
  lStack_2e8 = lStack_208;
  FUN_104213c60(&lStack_120,&lStack_b0);
  FUN_104213c60(&lStack_190,&lStack_b0);
  FUN_104214774(&lStack_350,0x113069948,&UNK_10dce3fc8);
  return false;
}



/* Entry: 104213cb4; end: 104213d53;  */

uint FUN_104213cb4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_100 = param_1[0x18];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_38 = param_2[0x17];
  uStack_40 = param_2[0x16];
  uStack_30 = param_2[0x18];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  FUN_104213cb0(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 104213d54; end: 104214123;  */

bool FUN_104213d54(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_430 [112];
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
  
  if (*param_1 != *param_2) {
    return false;
  }
  lVar3 = param_1[2];
  lVar2 = param_2[2];
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    uVar4 = param_1[1];
    if ((uVar4 != param_2[1] || lVar3 != lVar2) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,param_2[1],lVar2,0), (uVar4 & 1) == 0)) {
      return false;
    }
  }
  lVar3 = param_1[4];
  lVar2 = param_2[4];
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    uVar4 = param_1[3];
    if (((uVar4 != param_2[3]) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,param_2[3],lVar2,0), (uVar4 & 1) == 0)) {
      return false;
    }
  }
  uVar4 = param_1[5];
  lVar2 = param_2[5];
  if (uVar4 == 0) {
    if (lVar2 != 0) {
      return false;
    }
  }
  else {
    if (lVar2 == 0) {
      return false;
    }
    _swift_bridgeObjectRetain(lVar2);
    FUN_104229764(uVar4,lVar2);
    _swift_bridgeObjectRelease(lVar2);
    if ((uVar4 & 1) == 0) {
      return false;
    }
  }
  lStack_238 = param_1[0xd];
  lStack_240 = param_1[0xc];
  lStack_d8 = param_1[0xf];
  lStack_e0 = param_1[0xe];
  lStack_228 = param_1[0xf];
  lStack_230 = param_1[0xe];
  lStack_c8 = param_1[0x11];
  lStack_d0 = param_1[0x10];
  lStack_218 = param_1[0x11];
  lStack_220 = param_1[0x10];
  lStack_b8 = param_1[0x13];
  lStack_c0 = param_1[0x12];
  lStack_118 = param_1[7];
  lStack_120 = param_1[6];
  lStack_108 = param_1[9];
  lStack_110 = param_1[8];
  lStack_f8 = param_1[0xb];
  lStack_100 = param_1[10];
  lStack_e8 = param_1[0xd];
  lStack_f0 = param_1[0xc];
  lStack_268 = param_1[7];
  lStack_270 = param_1[6];
  lStack_258 = param_1[9];
  lStack_260 = param_1[8];
  lStack_248 = param_1[0xb];
  lStack_250 = param_1[10];
  lStack_188 = param_2[7];
  lStack_190 = param_2[6];
  lStack_178 = param_2[9];
  lStack_180 = param_2[8];
  lStack_288 = param_2[0x11];
  lStack_290 = param_2[0x10];
  lStack_128 = param_2[0x13];
  lStack_130 = param_2[0x12];
  lStack_2a8 = param_2[0xd];
  lStack_2b0 = param_2[0xc];
  lStack_148 = param_2[0xf];
  lStack_150 = param_2[0xe];
  lStack_298 = param_2[0xf];
  lStack_2a0 = param_2[0xe];
  lStack_138 = param_2[0x11];
  lStack_140 = param_2[0x10];
  lStack_168 = param_2[0xb];
  lStack_170 = param_2[10];
  lStack_158 = param_2[0xd];
  lStack_160 = param_2[0xc];
  lStack_2d8 = param_2[7];
  lStack_2e0 = param_2[6];
  lStack_2c8 = param_2[9];
  lStack_2d0 = param_2[8];
  lStack_2b8 = param_2[0xb];
  lStack_2c0 = param_2[10];
  lStack_208 = param_1[0x13];
  lStack_210 = param_1[0x12];
  lStack_278 = param_2[0x13];
  lStack_280 = param_2[0x12];
  lStack_200 = lStack_2e0;
  lStack_1f8 = lStack_2d8;
  lStack_1f0 = lStack_2d0;
  lStack_1e8 = lStack_2c8;
  lStack_1e0 = lStack_2c0;
  lStack_1d8 = lStack_2b8;
  lStack_1d0 = lStack_2b0;
  lStack_1c8 = lStack_2a8;
  lStack_1c0 = lStack_2a0;
  lStack_1b8 = lStack_298;
  lStack_1b0 = lStack_290;
  lStack_1a8 = lStack_288;
  lStack_1a0 = lStack_280;
  lStack_198 = lStack_278;
  if (lStack_258 == 1) {
    if (lStack_2c8 == 1) {
      lStack_308 = param_1[0xf];
      lStack_310 = param_1[0xe];
      lStack_2f8 = param_1[0x11];
      lStack_300 = param_1[0x10];
      lStack_2e8 = param_1[0x13];
      lStack_2f0 = param_1[0x12];
      lStack_348 = param_1[7];
      lStack_350 = param_1[6];
      lStack_338 = param_1[9];
      lStack_340 = param_1[8];
      lStack_328 = param_1[0xb];
      lStack_330 = param_1[10];
      lStack_318 = param_1[0xd];
      lStack_320 = param_1[0xc];
      FUN_104213c60(&lStack_120,&lStack_b0);
      FUN_104213c60(&lStack_190,&lStack_b0);
      FUN_104214774(&lStack_350,0x113069940,&UNK_10dce3f80);
LAB_1042140a0:
      if ((char)param_1[0x15] == '\x01') {
        if ((char)param_2[0x15] != '\x01') {
          return false;
        }
      }
      else {
        if ((char)param_2[0x15] == '\x01') {
          return false;
        }
        if (param_1[0x14] != param_2[0x14]) {
          return false;
        }
      }
      if ((char)param_1[0x17] == '\x01') {
        if ((char)param_2[0x17] != '\x01') {
          return false;
        }
      }
      else {
        if ((char)param_2[0x17] == '\x01') {
          return false;
        }
        if (param_1[0x16] != param_2[0x16]) {
          return false;
        }
      }
      return (int)param_1[0x18] == (int)param_2[0x18];
    }
  }
  else if (lStack_2c8 != 1) {
    lStack_378 = param_2[0xf];
    lStack_380 = param_2[0xe];
    lStack_368 = param_2[0x11];
    lStack_370 = param_2[0x10];
    lStack_358 = param_2[0x13];
    lStack_360 = param_2[0x12];
    lStack_3b8 = param_2[7];
    lStack_3c0 = param_2[6];
    lStack_3a8 = param_2[9];
    lStack_3b0 = param_2[8];
    lStack_398 = param_2[0xb];
    lStack_3a0 = param_2[10];
    lStack_388 = param_2[0xd];
    lStack_390 = param_2[0xc];
    lStack_68 = param_1[0xf];
    lStack_70 = param_1[0xe];
    lStack_58 = param_1[0x11];
    lStack_60 = param_1[0x10];
    lStack_48 = param_1[0x13];
    lStack_50 = param_1[0x12];
    lStack_a8 = param_1[7];
    lStack_b0 = param_1[6];
    lStack_98 = param_1[9];
    lStack_a0 = param_1[8];
    lStack_88 = param_1[0xb];
    lStack_90 = param_1[10];
    lStack_78 = param_1[0xd];
    lStack_80 = param_1[0xc];
    plVar1 = &lStack_b0;
    lStack_350 = lStack_3c0;
    lStack_348 = lStack_3b8;
    lStack_340 = lStack_3b0;
    lStack_338 = lStack_3a8;
    lStack_330 = lStack_3a0;
    lStack_328 = lStack_398;
    lStack_320 = lStack_390;
    lStack_318 = lStack_388;
    lStack_310 = lStack_380;
    lStack_308 = lStack_378;
    lStack_300 = lStack_370;
    lStack_2f8 = lStack_368;
    lStack_2f0 = lStack_360;
    lStack_2e8 = lStack_358;
    FUN_104255f3c(plVar1,&lStack_350);
    FUN_104213c60(&lStack_120,auStack_430);
    FUN_104213c60(&lStack_190,auStack_430);
    FUN_104214774(&lStack_3c0,0x113069940,&UNK_10dce3f80);
    FUN_104214774(&lStack_270,0x113069940,&UNK_10dce3f80);
    if (((ulong)plVar1 & 1) == 0) {
      return false;
    }
    goto LAB_1042140a0;
  }
  lStack_350 = lStack_270;
  lStack_348 = lStack_268;
  lStack_340 = lStack_260;
  lStack_338 = lStack_258;
  lStack_330 = lStack_250;
  lStack_328 = lStack_248;
  lStack_320 = lStack_240;
  lStack_318 = lStack_238;
  lStack_310 = lStack_230;
  lStack_308 = lStack_228;
  lStack_300 = lStack_220;
  lStack_2f8 = lStack_218;
  lStack_2f0 = lStack_210;
  lStack_2e8 = lStack_208;
  FUN_104213c60(&lStack_120,&lStack_b0);
  FUN_104213c60(&lStack_190,&lStack_b0);
  FUN_104214774(&lStack_350,0x113069948,&UNK_10dce3fc8);
  return false;
}



/* Entry: 104214124; end: 1042141a3;  */

long FUN_104214124(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1042141a4; end: 1042142d3;  */

undefined8 * FUN_1042141a4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  lVar1 = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  if (lVar1 == 1) {
    uVar2 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
    uVar2 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    uVar4 = param_2[10];
    uVar3 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xd] = uVar3;
    param_1[0xc] = uVar2;
  }
  else {
    param_1[6] = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    param_1[10] = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    param_1[0xc] = param_2[0xc];
    param_1[0xe] = param_2[0xe];
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    param_1[0x10] = param_2[0x10];
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
    uVar2 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = uVar2;
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(uVar2);
  }
  param_1[0x14] = param_2[0x14];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  param_1[0x16] = param_2[0x16];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  param_1[0x18] = param_2[0x18];
  return param_1;
}



/* Entry: 1042142d4; end: 104214513;  */

undefined8 * FUN_1042142d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  lVar2 = param_1[9];
  if (lVar2 == 1) {
    if (param_2[9] == 1) {
      uVar3 = param_2[7];
      uVar1 = param_2[6];
      uVar4 = param_2[8];
      uVar6 = param_2[0xb];
      uVar5 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar4;
      param_1[0xb] = uVar6;
      param_1[10] = uVar5;
      param_1[7] = uVar3;
      param_1[6] = uVar1;
      uVar3 = param_2[0xd];
      uVar1 = param_2[0xc];
      uVar5 = param_2[0xf];
      uVar4 = param_2[0xe];
      uVar6 = param_2[0x10];
      uVar8 = param_2[0x13];
      uVar7 = param_2[0x12];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar6;
      param_1[0x13] = uVar8;
      param_1[0x12] = uVar7;
      param_1[0xd] = uVar3;
      param_1[0xc] = uVar1;
      param_1[0xf] = uVar5;
      param_1[0xe] = uVar4;
    }
    else {
      uVar1 = param_2[6];
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      param_1[6] = uVar1;
      *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
      uVar1 = param_2[10];
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
      param_1[10] = uVar1;
      uVar1 = param_2[0xc];
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
      param_1[0xc] = uVar1;
      uVar1 = param_2[0xe];
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      param_1[0xe] = uVar1;
      uVar1 = param_2[0x10];
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
      param_1[0x10] = uVar1;
      param_1[0x12] = param_2[0x12];
      uVar1 = param_2[0x13];
      param_1[0x13] = uVar1;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar1);
    }
  }
  else if (param_2[9] == 1) {
    FUN_104214514(param_1 + 6);
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    uVar3 = param_2[0xb];
    uVar1 = param_2[10];
    uVar6 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar6;
    param_1[9] = uVar5;
    param_1[8] = uVar4;
    param_1[0xb] = uVar3;
    param_1[10] = uVar1;
    uVar1 = param_2[0x10];
    uVar4 = param_2[0x13];
    uVar3 = param_2[0x12];
    uVar8 = param_2[0xd];
    uVar7 = param_2[0xc];
    uVar6 = param_2[0xf];
    uVar5 = param_2[0xe];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar1;
    param_1[0x13] = uVar4;
    param_1[0x12] = uVar3;
    param_1[0xd] = uVar8;
    param_1[0xc] = uVar7;
    param_1[0xf] = uVar6;
    param_1[0xe] = uVar5;
  }
  else {
    uVar1 = param_2[6];
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    param_1[6] = uVar1;
    *(undefined1 *)((long)param_1 + 0x39) = *(undefined1 *)((long)param_2 + 0x39);
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar2);
    uVar1 = param_2[10];
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    param_1[10] = uVar1;
    uVar1 = param_2[0xc];
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    param_1[0xc] = uVar1;
    uVar1 = param_2[0xe];
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    param_1[0xe] = uVar1;
    uVar1 = param_2[0x10];
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
    param_1[0x10] = uVar1;
    param_1[0x12] = param_2[0x12];
    uVar1 = param_1[0x13];
    param_1[0x13] = param_2[0x13];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
  }
  uVar1 = param_2[0x14];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  param_1[0x14] = uVar1;
  uVar1 = param_2[0x16];
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
  param_1[0x16] = uVar1;
  param_1[0x18] = param_2[0x18];
  return param_1;
}



/* Entry: 104214514; end: 104214683;  */

undefined8 FUN_104214514(undefined8 param_1)

{
  (*(code *)(undefined *)0x104256148)();
  return param_1;
}



/* Entry: 104214684; end: 104214773;  */

int FUN_104214684(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x32] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104214774; end: 1042147b3;  */

undefined8 FUN_104214774(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1042147b4; end: 10421492f;  */

undefined1  [16] FUN_1042147b4(undefined8 param_1,ulong param_2,byte *param_3,byte *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  long extraout_x8;
  char *pcVar3;
  byte *unaff_x19;
  byte *pbVar4;
  byte *unaff_x20;
  byte *pbVar5;
  long unaff_x21;
  long unaff_x22;
  byte *unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_70 [96];
  undefined1 auStack_10 [16];
  
  pbVar4 = (byte *)0xd000000000000028;
  pcVar3 = "exitCoordEndSwipeTapPositionY";
  pcVar2 = (char *)(param_2 & 0xff);
  pbVar1 = pbVar4;
  pbVar5 = unaff_x20;
  switch(pcVar2) {
  case (char *)0x0:
    goto code_r0x00010421489c;
  default:
    pcVar2 = "allAttachmentAdNetworkAttributionWrapper.swift";
  case (char *)0x28:
  case (char *)0x36:
  case (char *)0x50:
  case (char *)0x5e:
  case (char *)0x78:
  case (char *)0x86:
  case (char *)0xc4:
  case (char *)0xd2:
  case (char *)0xec:
  case (char *)0xfa:
    pcVar2 = pcVar2 + 0xec0;
    goto code_r0x0001042147f4;
  case (char *)0x2:
    pcVar2 = "topSnapFullyPresentTimestampInMillis";
    goto code_r0x00010421486c;
  case (char *)0x3:
  case (char *)0x1d:
  case (char *)0x45:
  case (char *)0x6d:
    pcVar2 = "attachmentPageLoadedTimestampInMillis";
    goto code_r0x000104214894;
  case (char *)0x4:
    pcVar2 = "attachmentTriggeredTimestampInMillis";
    goto code_r0x00010421486c;
  case (char *)0x5:
  case (char *)0x44:
    pcVar3 = "attachmentFullyPresentedTimestampInMillis";
    break;
  case (char *)0x6:
    pcVar3 = "attachmentDismissTriggerTimestampInMillis";
    break;
  case (char *)0x7:
    pcVar2 = "allAttachmentAdNetworkAttributionWrapper.swift";
  case (char *)0x3d:
  case (char *)0x65:
  case (char *)0x8d:
  case (char *)0xd9:
    pcVar3 = pcVar2 + 0xfc0;
code_r0x0001042148b0:
    auVar13._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
    auVar13._0_8_ = 0xd000000000000026;
    return auVar13;
  case (char *)0x8:
    pcVar3 = "iggerTimestampInMillis";
  case (char *)0xc8:
    pbVar4 = (byte *)0xd000000000000020;
    param_3 = (byte *)((ulong)pcVar3 | 0x8000000000000000);
code_r0x000104214918:
    auVar16._8_8_ = param_3;
    auVar16._0_8_ = pbVar4;
    return auVar16;
  case (char *)0x9:
    auVar10._8_8_ = 0x800000010f1f0020;
    auVar10._0_8_ = 0xd00000000000001f;
    return auVar10;
  case (char *)0xa:
    pcVar2 = "Millis";
  case (char *)0x90:
    pcVar2 = pcVar2 + 0x60;
code_r0x0001042148f4:
    pcVar3 = pcVar2 + -0x20;
code_r0x0001042148f8:
    auVar15._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
    auVar15._0_8_ = 0xd000000000000021;
    return auVar15;
  case (char *)0xb:
  case (char *)0xcd:
  case (char *)0xf5:
    pcVar3 = "TimestampInMillis";
  case (char *)0x14:
  case (char *)0x6c:
    pbVar4 = (byte *)0xd000000000000016;
code_r0x000104214820:
    auVar8._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
    auVar8._0_8_ = pbVar4;
    return auVar8;
  case (char *)0xc:
    pcVar2 = "fullyLoadedTimestampInMillis";
  case (char *)0x10:
  case (char *)0x3c:
    auVar9._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
    auVar9._0_8_ = 0xd00000000000001c;
    return auVar9;
  case (char *)0xd:
    pcVar2 = "navigationFinishTimestampInMillis";
    goto code_r0x0001042148f4;
  case (char *)0xe:
  case (char *)0x26:
  case (char *)0x4e:
  case (char *)0x76:
  case (char *)0xc2:
  case (char *)0xea:
    pcVar2 = "firstGATimestampInMillis";
  case (char *)0x3f:
  case (char *)0x67:
  case (char *)0x8f:
  case (char *)0xdb:
    auVar7._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
    auVar7._0_8_ = 0xd000000000000018;
    return auVar7;
  case (char *)0xf:
    pcVar2 = "topSnapPlaybackBeginTimestampInMillis";
  case (char *)0xb9:
  case (char *)0xe1:
code_r0x000104214894:
    pcVar3 = pcVar2 + -0x20;
    pbVar4 = (byte *)0xd000000000000025;
code_r0x00010421489c:
    auVar12._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
    auVar12._0_8_ = pbVar4;
    return auVar12;
  case (char *)0x11:
  case (char *)0x80:
    goto code_r0x000104214bdc;
  case (char *)0x12:
    goto code_r0x000104214b2c;
  case (char *)0x18:
    goto code_r0x000104214af0;
  case (char *)0x19:
  case (char *)0x2d:
  case (char *)0x41:
  case (char *)0x55:
  case (char *)0x69:
  case (char *)0x7d:
  case (char *)0xb5:
  case (char *)0xc9:
  case (char *)0xdd:
  case (char *)0xf1:
    goto code_r0x000104214bb0;
  case (char *)0x1a:
  case (char *)0x2e:
  case (char *)0x42:
  case (char *)0x56:
  case (char *)0x6a:
  case (char *)0x7e:
  case (char *)0xb6:
  case (char *)0xca:
  case (char *)0xde:
  case (char *)0xf2:
    unaff_x29 = &stack0x00000040;
    register0x00000008 = (BADSPACEBASE *)auStack_10;
    unaff_x24 = unaff_x21;
  case (char *)0x40:
    pbVar1 = &DAT_113069000;
    pbVar5 = pbVar4;
    unaff_x23 = unaff_x20;
code_r0x000104214a9c:
    pbVar4 = pbVar1 + 0x950;
    func_0x0001000285a8(pbVar4,&UNK_10dce3fe0);
    unaff_x19 = pbVar4;
code_r0x000104214ab0:
    unaff_x27 = *(long *)(pbVar4 + -8);
    pcVar2 = (char *)(*(long *)(unaff_x27 + 0x40) + 0xfU & 0xfffffffffffffff0);
code_r0x000104214ac0:
    (*(code *)PTR____chkstk_darwin_11034bd40)(pcVar2);
    unaff_x22 = (long)register0x00000008 - extraout_x8;
    unaff_x25 = *(undefined8 *)(pbVar5 + 0x18);
    unaff_x26 = *(undefined8 *)(pbVar5 + 0x20);
    unaff_x20 = pbVar5;
code_r0x000104214adc:
    pbVar1 = unaff_x20;
    func_0x0001000a8868(pbVar1,unaff_x25);
    FUN_104214f6c();
code_r0x000104214af0:
    pbVar4 = &UNK_110753198;
    param_4 = pbVar1;
code_r0x000104214afc:
    unaff_x21 = unaff_x24;
    __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
              (unaff_x22,pbVar4,pbVar4,param_4,unaff_x25,unaff_x26);
    uVar6 = *(undefined8 *)unaff_x23;
    unaff_x29[-0x41] = 0;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(uVar6,unaff_x29 + -0x41,unaff_x19);
code_r0x000104214b2c:
    if (unaff_x21 == 0) {
      param_1 = *(undefined8 *)(unaff_x23 + 8);
      unaff_x29[-0x41] = 1;
      unaff_x21 = 0;
code_r0x000104214b3c:
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(param_1,unaff_x29 + -0x41,unaff_x19);
      if (unaff_x21 == 0) {
        uVar6 = *(undefined8 *)(unaff_x23 + 0x10);
        unaff_x29[-0x41] = 2;
        __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(uVar6,unaff_x29 + -0x41,unaff_x19);
        param_1 = *(undefined8 *)(unaff_x23 + 0x18);
        unaff_x29[-0x41] = 3;
        unaff_x21 = 0;
code_r0x000104214b7c:
        __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(param_1,unaff_x29 + -0x41,unaff_x19);
        if (unaff_x21 == 0) {
          uVar6 = *(undefined8 *)(unaff_x23 + 0x20);
          unaff_x29[-0x41] = 4;
          __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(uVar6,unaff_x29 + -0x41,unaff_x19);
          unaff_x21 = 0;
code_r0x000104214bb0:
          param_3 = unaff_x19;
          param_1 = *(undefined8 *)(unaff_x23 + 0x28);
          unaff_x29[-0x41] = 5;
          pbVar4 = unaff_x29 + -0x41;
          unaff_x19 = param_3;
code_r0x000104214bc4:
          __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(param_1,pbVar4,param_3);
code_r0x000104214bcc:
          if (unaff_x21 == 0) {
            param_1 = *(undefined8 *)(unaff_x23 + 0x30);
            unaff_x29[-0x41] = 6;
            unaff_x21 = 0;
code_r0x000104214bdc:
            __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                      (param_1,unaff_x29 + -0x41,unaff_x19);
            if (unaff_x21 == 0) {
              uVar6 = *(undefined8 *)(unaff_x23 + 0x38);
              unaff_x29[-0x41] = 7;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x40);
              unaff_x29[-0x41] = 8;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x48);
              unaff_x29[-0x41] = 9;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x50);
              unaff_x29[-0x41] = 10;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x58);
              unaff_x29[-0x41] = 0xb;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x60);
              unaff_x29[-0x41] = 0xc;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x68);
              unaff_x29[-0x41] = 0xd;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x70);
              unaff_x29[-0x41] = 0xe;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x78);
              unaff_x29[-0x41] = 0xf;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
              goto LAB_104214c44;
            }
          }
        }
      }
    }
    (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
LAB_104214c44:
    auVar23._8_8_ = unaff_x19;
    auVar23._0_8_ = unaff_x22;
    return auVar23;
  case (char *)0x1b:
  case (char *)0x2f:
  case (char *)0x43:
  case (char *)0x57:
  case (char *)0x6b:
  case (char *)0x7f:
  case (char *)0xb7:
  case (char *)0xcb:
  case (char *)0xdf:
  case (char *)0xf3:
    goto code_r0x0001042147f4;
  case (char *)0x1c:
  case (char *)0xf4:
    goto code_r0x00010421495c;
  case (char *)0x1e:
  case (char *)0x46:
  case (char *)0x6e:
  case (char *)0xba:
  case (char *)0xe2:
    goto code_r0x000104214ab0;
  case (char *)0x2c:
    goto code_r0x000104214ac0;
  case (char *)0x30:
    auVar22._8_8_ = param_3;
    auVar22._0_8_ = 0xd000000000000028;
    return auVar22;
  case (char *)0x31:
  case (char *)0x59:
  case (char *)0x81:
    goto code_r0x000104214820;
  case (char *)0x32:
  case (char *)0x5a:
  case (char *)0x82:
  case (char *)0xce:
  case (char *)0xf6:
  case (char *)0x9b:
code_r0x000104214940:
    pbVar4 = (byte *)(ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(&stack0x00000008,0);
    __ss6HasherV8_combineyySuF(pbVar4);
code_r0x00010421495c:
    __ss6HasherV9_finalizeSiyF();
code_r0x000104214970:
    auVar18._8_8_ = param_3;
    auVar18._0_8_ = pbVar4;
    return auVar18;
  case (char *)0x33:
  case (char *)0x5b:
  case (char *)0x83:
  case (char *)0xcf:
  case (char *)0xf7:
    goto code_r0x000104214bc4;
  case (char *)0x3e:
  case (char *)0x66:
  case (char *)0x8e:
  case (char *)0xda:
    goto code_r0x000104214a38;
  case (char *)0x54:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss9CodingKeyPsE11descriptionSSvg_11034f120)();
    auVar24._8_8_ = param_3;
    auVar24._0_8_ = unaff_x19;
    return auVar24;
  case (char *)0x58:
    goto code_r0x000104214b3c;
  case (char *)0x64:
  case (char *)0x99:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (char *)0x9d:
  case (char *)0xa2:
    *(byte **)((long)register0x00000008 + 0x50) = unaff_x20;
    *(byte **)((long)register0x00000008 + 0x58) = unaff_x19;
code_r0x0001042149a4:
    *(undefined1 **)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
code_r0x0001042149a8:
code_r0x0001042149ac:
    unaff_x19 = (byte *)(ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)register0x00000008 + 8));
code_r0x0001042149b8:
code_r0x0001042149bc:
    pbVar4 = unaff_x19;
    __ss6HasherV8_combineyySuF(pbVar4);
    __ss6HasherV9_finalizeSiyF();
code_r0x0001042149d0:
    auVar20._8_8_ = param_3;
    auVar20._0_8_ = pbVar4;
    return auVar20;
  case (char *)0x68:
    FUN_104214f6c();
    param_3 = pbVar4;
    goto code_r0x000104214a38;
  case (char *)0x7c:
    auVar21._8_8_ = param_3;
    auVar21._0_8_ = 0xd000000000000028;
    return auVar21;
  case (char *)0x8c:
    goto code_r0x000104214afc;
  case (char *)0x91:
  case (char *)0xa8:
    goto code_r0x00010421497c;
  case (char *)0x92:
    auVar17._1_7_ = 0;
    auVar17[0] = bRamd000000000000028 == *param_3;
    auVar17._8_8_ = param_3;
    return auVar17;
  case (char *)0x93:
  case (char *)0x9c:
  case (char *)0xa9:
    goto code_r0x000104214990;
  case (char *)0x94:
    goto code_r0x000104214984;
  case (char *)0x95:
  case (char *)0x9a:
  case (char *)0x9e:
  case (char *)0xad:
    goto code_r0x000104214980;
  case (char *)0x96:
  case (char *)0x98:
    goto code_r0x00010421497c;
  case (char *)0x97:
  case (char *)0xae:
    goto code_r0x0001042149d0;
  case (char *)0x9f:
  case (char *)0xa4:
  case (char *)0xaf:
    goto code_r0x0001042149b8;
  case (char *)0xa0:
    goto code_r0x0001042149bc;
  case (char *)0xa1:
    goto code_r0x000104214970;
  case (char *)0xa3:
    goto code_r0x0001042149ac;
  case (char *)0xa6:
    goto code_r0x0001042148f8;
  case (char *)0xa7:
    goto code_r0x0001042149a8;
  case (char *)0xaa:
    goto code_r0x0001042149a4;
  case (char *)0xab:
    goto code_r0x000104214988;
  case (char *)0xac:
    goto code_r0x000104214918;
  case (char *)0xb4:
    goto code_r0x000104214940;
  case (char *)0xb8:
    goto code_r0x000104214b7c;
  case (char *)0xcc:
    goto code_r0x000104214a9c;
  case (char *)0xd8:
    goto code_r0x000104214bcc;
  case (char *)0xdc:
    goto code_r0x0001042148e0;
  case (char *)0xe0:
    goto code_r0x000104214adc;
  case (char *)0xf0:
    goto code_r0x0001042148b0;
  }
  pcVar3 = pcVar3 + -0x20;
code_r0x0001042148e0:
  auVar14._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
  auVar14._0_8_ = 0xd000000000000029;
  return auVar14;
code_r0x000104214a38:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)();
  auVar25._8_8_ = param_3;
  auVar25._0_8_ = unaff_x19;
  return auVar25;
code_r0x00010421497c:
code_r0x000104214980:
  pcVar2 = (char *)pbVar4;
code_r0x000104214984:
  pbVar4 = (byte *)(ulong)*unaff_x20;
code_r0x000104214988:
  __ss6HasherV8_combineyySuF(pcVar2,pbVar4);
code_r0x000104214990:
  auVar19._8_8_ = param_3;
  auVar19._0_8_ = pbVar4;
  return auVar19;
code_r0x0001042147f4:
code_r0x00010421486c:
  auVar11._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
  auVar11._0_8_ = 0xd000000000000024;
  return auVar11;
}



/* Entry: 104214930; end: 1042149db;  */

void FUN_104214930(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1042149dc; end: 1042149e3;  */

undefined1  [16] FUN_1042149dc(undefined8 param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  long extraout_x8;
  char *pcVar3;
  byte *pbVar4;
  byte *unaff_x19;
  byte *unaff_x20;
  byte *pbVar5;
  long unaff_x21;
  long unaff_x22;
  byte *unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_70 [96];
  undefined1 auStack_10 [16];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  pbVar4 = (byte *)0xd000000000000028;
  pcVar3 = "exitCoordEndSwipeTapPositionY";
  pbVar2 = pbVar4;
  pbVar5 = unaff_x20;
  switch(*unaff_x20) {
  case 0:
    goto code_r0x00010421489c;
  default:
    pcVar1 = "allAttachmentAdNetworkAttributionWrapper.swift";
  case 0x28:
  case 0x36:
  case 0x50:
  case 0x5e:
  case 0x78:
  case 0x86:
  case 0xc4:
  case 0xd2:
  case 0xec:
  case 0xfa:
    pcVar1 = pcVar1 + 0xec0;
    goto code_r0x0001042147f4;
  case 2:
    pcVar1 = "topSnapFullyPresentTimestampInMillis";
    goto code_r0x00010421486c;
  case 3:
  case 0x1d:
  case 0x45:
  case 0x6d:
    pcVar1 = "attachmentPageLoadedTimestampInMillis";
    goto code_r0x000104214894;
  case 4:
    pcVar1 = "attachmentTriggeredTimestampInMillis";
    goto code_r0x00010421486c;
  case 5:
  case 0x44:
    pcVar3 = "attachmentFullyPresentedTimestampInMillis";
    break;
  case 6:
    pcVar3 = "attachmentDismissTriggerTimestampInMillis";
    break;
  case 7:
    pcVar1 = "allAttachmentAdNetworkAttributionWrapper.swift";
  case 0x3d:
  case 0x65:
  case 0x8d:
  case 0xd9:
    pcVar3 = pcVar1 + 0xfc0;
code_r0x0001042148b0:
    auVar13._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
    auVar13._0_8_ = 0xd000000000000026;
    return auVar13;
  case 8:
    pcVar3 = "iggerTimestampInMillis";
  case 200:
    pbVar4 = (byte *)0xd000000000000020;
    param_3 = (byte *)((ulong)pcVar3 | 0x8000000000000000);
code_r0x000104214918:
    auVar16._8_8_ = param_3;
    auVar16._0_8_ = pbVar4;
    return auVar16;
  case 9:
    auVar10._8_8_ = 0x800000010f1f0020;
    auVar10._0_8_ = 0xd00000000000001f;
    return auVar10;
  case 10:
    pcVar1 = "Millis";
  case 0x90:
    pcVar1 = pcVar1 + 0x60;
code_r0x0001042148f4:
    pcVar3 = pcVar1 + -0x20;
code_r0x0001042148f8:
    auVar15._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
    auVar15._0_8_ = 0xd000000000000021;
    return auVar15;
  case 0xb:
  case 0xcd:
  case 0xf5:
    pcVar3 = "TimestampInMillis";
  case 0x14:
  case 0x6c:
    pbVar4 = (byte *)0xd000000000000016;
code_r0x000104214820:
    auVar8._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
    auVar8._0_8_ = pbVar4;
    return auVar8;
  case 0xc:
    pcVar1 = "fullyLoadedTimestampInMillis";
  case 0x10:
  case 0x3c:
    auVar9._8_8_ = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
    auVar9._0_8_ = 0xd00000000000001c;
    return auVar9;
  case 0xd:
    pcVar1 = "navigationFinishTimestampInMillis";
    goto code_r0x0001042148f4;
  case 0xe:
  case 0x26:
  case 0x4e:
  case 0x76:
  case 0xc2:
  case 0xea:
    pcVar1 = "firstGATimestampInMillis";
  case 0x3f:
  case 0x67:
  case 0x8f:
  case 0xdb:
    auVar7._8_8_ = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
    auVar7._0_8_ = 0xd000000000000018;
    return auVar7;
  case 0xf:
    pcVar1 = "topSnapPlaybackBeginTimestampInMillis";
  case 0xb9:
  case 0xe1:
code_r0x000104214894:
    pcVar3 = pcVar1 + -0x20;
    pbVar4 = (byte *)0xd000000000000025;
code_r0x00010421489c:
    auVar12._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
    auVar12._0_8_ = pbVar4;
    return auVar12;
  case 0x11:
  case 0x80:
    goto code_r0x000104214bdc;
  case 0x12:
    goto code_r0x000104214b2c;
  case 0x18:
    goto code_r0x000104214af0;
  case 0x19:
  case 0x2d:
  case 0x41:
  case 0x55:
  case 0x69:
  case 0x7d:
  case 0xb5:
  case 0xc9:
  case 0xdd:
  case 0xf1:
    goto code_r0x000104214bb0;
  case 0x1a:
  case 0x2e:
  case 0x42:
  case 0x56:
  case 0x6a:
  case 0x7e:
  case 0xb6:
  case 0xca:
  case 0xde:
  case 0xf2:
    unaff_x29 = &stack0x00000040;
    register0x00000008 = (BADSPACEBASE *)auStack_10;
    unaff_x24 = unaff_x21;
  case 0x40:
    pbVar2 = &DAT_113069000;
    pbVar5 = pbVar4;
    unaff_x23 = unaff_x20;
code_r0x000104214a9c:
    pbVar4 = pbVar2 + 0x950;
    func_0x0001000285a8(pbVar4,&UNK_10dce3fe0);
    unaff_x19 = pbVar4;
code_r0x000104214ab0:
    unaff_x27 = *(long *)(pbVar4 + -8);
    pcVar1 = (char *)(*(long *)(unaff_x27 + 0x40) + 0xfU & 0xfffffffffffffff0);
code_r0x000104214ac0:
    (*(code *)PTR____chkstk_darwin_11034bd40)(pcVar1);
    unaff_x22 = (long)register0x00000008 - extraout_x8;
    unaff_x25 = *(undefined8 *)(pbVar5 + 0x18);
    unaff_x26 = *(undefined8 *)(pbVar5 + 0x20);
    unaff_x20 = pbVar5;
code_r0x000104214adc:
    pbVar2 = unaff_x20;
    func_0x0001000a8868(pbVar2,unaff_x25);
    FUN_104214f6c();
code_r0x000104214af0:
    pbVar4 = &UNK_110753198;
    param_4 = pbVar2;
code_r0x000104214afc:
    unaff_x21 = unaff_x24;
    __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
              (unaff_x22,pbVar4,pbVar4,param_4,unaff_x25,unaff_x26);
    uVar6 = *(undefined8 *)unaff_x23;
    unaff_x29[-0x41] = 0;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(uVar6,unaff_x29 + -0x41,unaff_x19);
code_r0x000104214b2c:
    if (unaff_x21 == 0) {
      param_1 = *(undefined8 *)(unaff_x23 + 8);
      unaff_x29[-0x41] = 1;
      unaff_x21 = 0;
code_r0x000104214b3c:
      __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(param_1,unaff_x29 + -0x41,unaff_x19);
      if (unaff_x21 == 0) {
        uVar6 = *(undefined8 *)(unaff_x23 + 0x10);
        unaff_x29[-0x41] = 2;
        __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(uVar6,unaff_x29 + -0x41,unaff_x19);
        param_1 = *(undefined8 *)(unaff_x23 + 0x18);
        unaff_x29[-0x41] = 3;
        unaff_x21 = 0;
code_r0x000104214b7c:
        __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(param_1,unaff_x29 + -0x41,unaff_x19);
        if (unaff_x21 == 0) {
          uVar6 = *(undefined8 *)(unaff_x23 + 0x20);
          unaff_x29[-0x41] = 4;
          __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(uVar6,unaff_x29 + -0x41,unaff_x19);
          unaff_x21 = 0;
code_r0x000104214bb0:
          param_3 = unaff_x19;
          param_1 = *(undefined8 *)(unaff_x23 + 0x28);
          unaff_x29[-0x41] = 5;
          pbVar4 = unaff_x29 + -0x41;
          unaff_x19 = param_3;
code_r0x000104214bc4:
          __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(param_1,pbVar4,param_3);
code_r0x000104214bcc:
          if (unaff_x21 == 0) {
            param_1 = *(undefined8 *)(unaff_x23 + 0x30);
            unaff_x29[-0x41] = 6;
            unaff_x21 = 0;
code_r0x000104214bdc:
            __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                      (param_1,unaff_x29 + -0x41,unaff_x19);
            if (unaff_x21 == 0) {
              uVar6 = *(undefined8 *)(unaff_x23 + 0x38);
              unaff_x29[-0x41] = 7;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x40);
              unaff_x29[-0x41] = 8;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x48);
              unaff_x29[-0x41] = 9;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x50);
              unaff_x29[-0x41] = 10;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x58);
              unaff_x29[-0x41] = 0xb;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x60);
              unaff_x29[-0x41] = 0xc;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x68);
              unaff_x29[-0x41] = 0xd;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x70);
              unaff_x29[-0x41] = 0xe;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              uVar6 = *(undefined8 *)(unaff_x23 + 0x78);
              unaff_x29[-0x41] = 0xf;
              __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF
                        (uVar6,unaff_x29 + -0x41,unaff_x19);
              (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
              goto LAB_104214c44;
            }
          }
        }
      }
    }
    (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
LAB_104214c44:
    auVar23._8_8_ = unaff_x19;
    auVar23._0_8_ = unaff_x22;
    return auVar23;
  case 0x1b:
  case 0x2f:
  case 0x43:
  case 0x57:
  case 0x6b:
  case 0x7f:
  case 0xb7:
  case 0xcb:
  case 0xdf:
  case 0xf3:
    goto code_r0x0001042147f4;
  case 0x1c:
  case 0xf4:
    goto code_r0x00010421495c;
  case 0x1e:
  case 0x46:
  case 0x6e:
  case 0xba:
  case 0xe2:
    goto code_r0x000104214ab0;
  case 0x2c:
    goto code_r0x000104214ac0;
  case 0x30:
    auVar22._8_8_ = param_3;
    auVar22._0_8_ = 0xd000000000000028;
    return auVar22;
  case 0x31:
  case 0x59:
  case 0x81:
    goto code_r0x000104214820;
  case 0x32:
  case 0x5a:
  case 0x82:
  case 0xce:
  case 0xf6:
  case 0x9b:
code_r0x000104214940:
    pbVar4 = (byte *)(ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(&stack0x00000008,0);
    __ss6HasherV8_combineyySuF(pbVar4);
code_r0x00010421495c:
    __ss6HasherV9_finalizeSiyF();
code_r0x000104214970:
    auVar18._8_8_ = param_3;
    auVar18._0_8_ = pbVar4;
    return auVar18;
  case 0x33:
  case 0x5b:
  case 0x83:
  case 0xcf:
  case 0xf7:
    goto code_r0x000104214bc4;
  case 0x3e:
  case 0x66:
  case 0x8e:
  case 0xda:
    goto code_r0x000104214a38;
  case 0x54:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss9CodingKeyPsE11descriptionSSvg_11034f120)();
    auVar24._8_8_ = param_3;
    auVar24._0_8_ = unaff_x19;
    return auVar24;
  case 0x58:
    goto code_r0x000104214b3c;
  case 100:
  case 0x99:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case 0x9d:
  case 0xa2:
    *(byte **)((long)register0x00000008 + 0x50) = unaff_x20;
    *(byte **)((long)register0x00000008 + 0x58) = unaff_x19;
code_r0x0001042149a4:
    *(undefined1 **)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
code_r0x0001042149a8:
code_r0x0001042149ac:
    unaff_x19 = (byte *)(ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)register0x00000008 + 8));
code_r0x0001042149b8:
code_r0x0001042149bc:
    pbVar4 = unaff_x19;
    __ss6HasherV8_combineyySuF(pbVar4);
    __ss6HasherV9_finalizeSiyF();
code_r0x0001042149d0:
    auVar20._8_8_ = param_3;
    auVar20._0_8_ = pbVar4;
    return auVar20;
  case 0x68:
    FUN_104214f6c();
    param_3 = pbVar4;
    goto code_r0x000104214a38;
  case 0x7c:
    auVar21._8_8_ = param_3;
    auVar21._0_8_ = 0xd000000000000028;
    return auVar21;
  case 0x8c:
    goto code_r0x000104214afc;
  case 0x91:
  case 0xa8:
    goto code_r0x00010421497c;
  case 0x92:
    auVar17._1_7_ = 0;
    auVar17[0] = bRamd000000000000028 == *param_3;
    auVar17._8_8_ = param_3;
    return auVar17;
  case 0x93:
  case 0x9c:
  case 0xa9:
    goto code_r0x000104214990;
  case 0x94:
    goto code_r0x000104214984;
  case 0x95:
  case 0x9a:
  case 0x9e:
  case 0xad:
    goto code_r0x000104214980;
  case 0x96:
  case 0x98:
    goto code_r0x00010421497c;
  case 0x97:
  case 0xae:
    goto code_r0x0001042149d0;
  case 0x9f:
  case 0xa4:
  case 0xaf:
    goto code_r0x0001042149b8;
  case 0xa0:
    goto code_r0x0001042149bc;
  case 0xa1:
    goto code_r0x000104214970;
  case 0xa3:
    goto code_r0x0001042149ac;
  case 0xa6:
    goto code_r0x0001042148f8;
  case 0xa7:
    goto code_r0x0001042149a8;
  case 0xaa:
    goto code_r0x0001042149a4;
  case 0xab:
    goto code_r0x000104214988;
  case 0xac:
    goto code_r0x000104214918;
  case 0xb4:
    goto code_r0x000104214940;
  case 0xb8:
    goto code_r0x000104214b7c;
  case 0xcc:
    goto code_r0x000104214a9c;
  case 0xd8:
    goto code_r0x000104214bcc;
  case 0xdc:
    goto code_r0x0001042148e0;
  case 0xe0:
    goto code_r0x000104214adc;
  case 0xf0:
    goto code_r0x0001042148b0;
  }
  pcVar3 = pcVar3 + -0x20;
code_r0x0001042148e0:
  auVar14._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
  auVar14._0_8_ = 0xd000000000000029;
  return auVar14;
code_r0x000104214a38:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)();
  auVar25._8_8_ = param_3;
  auVar25._0_8_ = unaff_x19;
  return auVar25;
code_r0x00010421497c:
code_r0x000104214980:
  pcVar1 = (char *)pbVar4;
code_r0x000104214984:
  pbVar4 = (byte *)(ulong)*unaff_x20;
code_r0x000104214988:
  __ss6HasherV8_combineyySuF(pcVar1,pbVar4);
code_r0x000104214990:
  auVar19._8_8_ = param_3;
  auVar19._0_8_ = pbVar4;
  return auVar19;
code_r0x0001042147f4:
code_r0x00010421486c:
  auVar11._8_8_ = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  auVar11._0_8_ = 0xd000000000000024;
  return auVar11;
}



/* Entry: 1042149e4; end: 104214a07;  */

void FUN_1042149e4(undefined1 *param_1,undefined1 param_2)

{
  FUN_104214fac();
  *param_1 = param_2;
  return;
}



/* Entry: 104214a08; end: 104214a1f;  */

undefined1  [16] FUN_104214a08(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104214a20; end: 104214a6f;  */

void FUN_104214a20(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104214f6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 104214a70; end: 104214d8b;  */

void FUN_104214a70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [15];
  undefined1 uStack_51;
  
  lVar3 = 0x113069950;
  func_0x0001000285a8(0x113069950,&UNK_10dce3fe0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_104214f6c();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&UNK_110753198,&UNK_110753198,param_1,uVar1,uVar2);
  uStack_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(*unaff_x20,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_51 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[1],&uStack_51,lVar3);
    uStack_51 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[2],&uStack_51,lVar3);
    uStack_51 = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[3],&uStack_51,lVar3);
    uStack_51 = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[4],&uStack_51,lVar3);
    uStack_51 = 5;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[5],&uStack_51,lVar3);
    uStack_51 = 6;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[6],&uStack_51,lVar3);
    uStack_51 = 7;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[7],&uStack_51,lVar3);
    uStack_51 = 8;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[8],&uStack_51,lVar3);
    uStack_51 = 9;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[9],&uStack_51,lVar3);
    uStack_51 = 10;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[10],&uStack_51,lVar3);
    uStack_51 = 0xb;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[0xb],&uStack_51,lVar3);
    uStack_51 = 0xc;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[0xc],&uStack_51,lVar3);
    uStack_51 = 0xd;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[0xd],&uStack_51,lVar3);
    uStack_51 = 0xe;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[0xe],&uStack_51,lVar3);
    uStack_51 = 0xf;
    __ss22KeyedEncodingContainerV6encode_6forKeyySd_xtKF(unaff_x20[0xf],&uStack_51,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 104214d8c; end: 104214dfb;  */

uint FUN_104214d8c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_28 = param_2[0xf];
  uStack_30 = param_2[0xe];
  FUN_104214e60(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 104214dfc; end: 104214e4b;  */

void FUN_104214dfc(undefined8 *param_1)

{
  long unaff_x21;
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
  
  FUN_10421548c(&uStack_a0);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_58;
    param_1[8] = uStack_60;
    param_1[0xb] = uStack_48;
    param_1[10] = uStack_50;
    param_1[0xd] = uStack_38;
    param_1[0xc] = uStack_40;
    param_1[0xf] = uStack_28;
    param_1[0xe] = uStack_30;
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
  }
  return;
}



/* Entry: 104214e4c; end: 104214e5f;  */

void FUN_104214e4c(void)

{
  FUN_104214a70();
  return;
}



/* Entry: 104214e60; end: 104214f6b;  */

bool FUN_104214e60(double *param_1,double *param_2)

{
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      (((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) &&
       ((param_1[5] == param_2[5] && ((param_1[6] == param_2[6] && (param_1[7] == param_2[7]))))))))
     && ((param_1[8] == param_2[8] &&
         (((((param_1[9] == param_2[9] && (param_1[10] == param_2[10])) &&
            (param_1[0xb] == param_2[0xb])) &&
           ((param_1[0xc] == param_2[0xc] && (param_1[0xd] == param_2[0xd])))) &&
          (param_1[0xe] == param_2[0xe])))))) {
    return param_1[0xf] == param_2[0xf];
  }
  return false;
}



/* Entry: 104214f6c; end: 104214fab;  */

void FUN_104214f6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce413c;
  _swift_getWitnessTable(&UNK_10dce413c,&UNK_110753198);
  puRam0000000113069958 = puVar1;
  return;
}



/* Entry: 104214fac; end: 10421548b;  */

undefined4 FUN_104214fac(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if ((param_1 == -0x2fffffffffffffd8 && param_2 == -0x7ffffffef0e10190) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000028,0x800000010f1efe70,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    return 0;
  }
  if ((param_1 != -0x2fffffffffffffdc) || (param_2 != -0x7ffffffef0e10160)) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000024,0x800000010f1efea0,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      if ((param_1 != -0x2fffffffffffffdc) || (param_2 != -0x7ffffffef0e10130)) {
        uVar1 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000024,0x800000010f1efed0,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          uVar1 = 0xd000000000000025;
          if (((param_1 == -0x2fffffffffffffdb) && (param_2 == -0x7ffffffef0e10100)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000025,0x800000010f1eff00,param_1,param_2,0), (uVar1 & 1) != 0)
             ) {
            _swift_bridgeObjectRelease(param_2);
            return 3;
          }
          if ((param_1 != -0x2fffffffffffffdc) || (param_2 != -0x7ffffffef0e100d0)) {
            uVar1 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000024,0x800000010f1eff30,param_1,param_2,0);
            if ((uVar1 & 1) == 0) {
              uVar1 = 0xd000000000000029;
              if (((param_1 == -0x2fffffffffffffd7) && (param_2 == -0x7ffffffef0e100a0)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0xd000000000000029,0x800000010f1eff60,param_1,param_2,0),
                 (uVar1 & 1) != 0)) {
                _swift_bridgeObjectRelease(param_2);
                return 5;
              }
              if ((param_1 != -0x2fffffffffffffd7) || (param_2 != -0x7ffffffef0e10070)) {
                uVar1 = 0xd000000000000029;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (0xd000000000000029,0x800000010f1eff90,param_1,param_2,0);
                if ((uVar1 & 1) == 0) {
                  uVar1 = 0;
                  if (((param_1 == -0x2fffffffffffffda) && (param_2 == -0x7ffffffef0e10040)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd000000000000026,0x800000010f1effc0,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 7;
                  }
                  uVar1 = 0;
                  if (((param_1 == -0x2fffffffffffffe0) && (param_2 == -0x7ffffffef0e10010)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd000000000000020,0x800000010f1efff0,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 8;
                  }
                  uVar1 = 0xd00000000000001f;
                  if (((param_1 == -0x2fffffffffffffe1) && (param_2 == -0x7ffffffef0e0ffe0)) ||
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd00000000000001f,0x800000010f1f0020,param_1,param_2,0),
                     (uVar1 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 9;
                  }
                  uVar1 = 0xd000000000000021;
                  if (((param_1 == -0x2fffffffffffffdf) && (param_2 == -0x7ffffffef0e0ffc0)) ||
                     (uVar2 = uVar1,
                     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                               (0xd000000000000021,0x800000010f1f0040,param_1,param_2,0),
                     (uVar2 & 1) != 0)) {
                    _swift_bridgeObjectRelease(param_2);
                    return 10;
                  }
                  uVar2 = 0;
                  if (((param_1 != -0x2fffffffffffffea) || (param_2 != -0x7ffffffef0e0ff90)) &&
                     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd000000000000016,0x800000010f1f0070,param_1,param_2,0),
                     (uVar2 & 1) == 0)) {
                    uVar2 = 0;
                    if (((param_1 == -0x2fffffffffffffe4) && (param_2 == -0x7ffffffef0e0ff70)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0xd00000000000001c,0x800000010f1f0090,param_1,param_2,0),
                       (uVar2 & 1) != 0)) {
                      _swift_bridgeObjectRelease(param_2);
                      return 0xc;
                    }
                    if (((param_1 == -0x2fffffffffffffdf) && (param_2 == -0x7ffffffef0e0ff50)) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0xd000000000000021,0x800000010f1f00b0,param_1,param_2,0),
                       (uVar1 & 1) != 0)) {
                      _swift_bridgeObjectRelease(param_2);
                      return 0xd;
                    }
                    uVar1 = 0;
                    if (((param_1 != -0x2fffffffffffffe8) || (param_2 != -0x7ffffffef0e0ff20)) &&
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0xd000000000000018,0x800000010f1f00e0,param_1,param_2,0),
                       (uVar1 & 1) == 0)) {
                      if ((param_1 == -0x2fffffffffffffdb) && (param_2 == -0x7ffffffef0e0ff00)) {
                        _swift_bridgeObjectRelease(0x800000010f1f0100);
                        return 0xf;
                      }
                      uVar1 = 0xd000000000000025;
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0xd000000000000025,0x800000010f1f0100,param_1,param_2,0);
                      _swift_bridgeObjectRelease(param_2);
                      if ((uVar1 & 1) != 0) {
                        return 0xf;
                      }
                      return 0x10;
                    }
                    _swift_bridgeObjectRelease(param_2);
                    return 0xe;
                  }
                  _swift_bridgeObjectRelease(param_2);
                  return 0xb;
                }
              }
              _swift_bridgeObjectRelease(param_2);
              return 6;
            }
          }
          _swift_bridgeObjectRelease(param_2);
          return 4;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 1;
}



/* Entry: 10421548c; end: 104215827;  */

/* WARNING: Removing unreachable block (ram,0x000104215648) */
/* WARNING: Removing unreachable block (ram,0x00010421564c) */

void FUN_10421548c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_51;
  
  lVar1 = 0x113069978;
  func_0x0001000285a8(0x113069978,&UNK_10dce4190);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  lVar2 = param_3;
  func_0x0001000a8868(param_3,uVar4);
  FUN_104214f6c();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&uStack_e0 - extraout_x8,&UNK_110753198,&UNK_110753198,lVar2,uVar4,uVar5);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 1;
    uVar4 = param_2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 2;
    uVar5 = uVar4;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 3;
    uVar6 = uVar5;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 4;
    uVar7 = uVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 5;
    uVar8 = uVar7;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 6;
    uVar9 = uVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 7;
    uVar10 = uVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 8;
    uStack_a8 = uVar10;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 9;
    uVar11 = uVar10;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 10;
    uStack_b0 = uVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 0xb;
    uStack_b8 = uVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 0xc;
    uStack_c0 = uVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 0xd;
    uStack_c8 = uVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 0xe;
    uStack_d0 = uVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_51 = 0xf;
    uStack_d8 = uVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&uStack_51,lVar1);
    uStack_e0 = uVar11;
    (**(code **)(lVar3 + 8))((long)&uStack_e0 - extraout_x8,lVar1);
    func_0x0001000834e4(param_3);
    *param_1 = param_2;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    param_1[6] = uVar9;
    param_1[7] = uStack_a8;
    param_1[8] = uVar10;
    param_1[9] = uStack_b0;
    param_1[10] = uStack_b8;
    param_1[0xb] = uStack_c0;
    param_1[0xc] = uStack_c8;
    param_1[0xd] = uStack_d0;
    param_1[0xe] = uStack_d8;
    param_1[0xf] = uStack_e0;
  }
  else {
    func_0x0001000834e4(param_3);
  }
  return;
}



/* Entry: 104215828; end: 104215853;  */

long FUN_104215828(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104215854; end: 104215a27;  */

int FUN_104215854(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 104215a28; end: 104215a67;  */

void FUN_104215a28(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce4114;
  _swift_getWitnessTable(&UNK_10dce4114,&UNK_110753198);
  puRam0000000113069960 = puVar1;
  return;
}



/* Entry: 104215a68; end: 104215a6b;  */

void FUN_104215a68(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce40ac;
  _swift_getWitnessTable(&UNK_10dce40ac,&UNK_110753198);
  puRam0000000113069968 = puVar1;
  return;
}



/* Entry: 104215a6c; end: 104215aab;  */

void FUN_104215a6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce40ac;
  _swift_getWitnessTable(&UNK_10dce40ac,&UNK_110753198);
  puRam0000000113069968 = puVar1;
  return;
}



/* Entry: 104215aac; end: 104215aaf;  */

void FUN_104215aac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce4084;
  _swift_getWitnessTable(&UNK_10dce4084,&UNK_110753198);
  puRam0000000113069970 = puVar1;
  return;
}



/* Entry: 104215ab0; end: 104215aef;  */

void FUN_104215ab0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce4084;
  _swift_getWitnessTable(&UNK_10dce4084,&UNK_110753198);
  puRam0000000113069970 = puVar1;
  return;
}



/* Entry: 104215af0; end: 104215b0b;  */

undefined8 FUN_104215af0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar2 = *param_2;
  lVar4 = param_2[1];
  lVar5 = param_2[2];
  lVar6 = param_1[2];
  lVar8 = *(long *)(lVar1 + 0x10);
  if (lVar8 == *(long *)(lVar2 + 0x10)) {
    if (lVar8 != 0 && lVar1 != lVar2) {
      plVar9 = (long *)(lVar2 + 0x28);
      plVar10 = (long *)(lVar1 + 0x28);
      do {
        uVar7 = plVar10[-1];
        if ((uVar7 != plVar9[-1] || *plVar10 != *plVar9) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar7 & 1) == 0)) {
          return 0;
        }
        plVar9 = plVar9 + 2;
        plVar10 = plVar10 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if ((char)lVar6 == '\x01') {
      if ((char)lVar5 == '\x01') {
        return 1;
      }
    }
    else if (((char)lVar5 != '\x01') && (lVar3 == lVar4)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104215b0c; end: 104215bdf;  */

undefined8
FUN_104215b0c(long param_1,long param_2,char param_3,long param_4,long param_5,char param_6)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_4 + 0x10)) {
    if (lVar2 != 0 && param_1 != param_4) {
      plVar3 = (long *)(param_4 + 0x28);
      plVar4 = (long *)(param_1 + 0x28);
      do {
        uVar1 = plVar4[-1];
        if ((uVar1 != plVar3[-1] || *plVar4 != *plVar3) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar1 & 1) == 0)) {
          return 0;
        }
        plVar3 = plVar3 + 2;
        plVar4 = plVar4 + 2;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (param_3 == '\x01') {
      if (param_6 == '\x01') {
        return 1;
      }
    }
    else if ((param_6 != '\x01') && (param_2 == param_5)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 104215be0; end: 104215be7;  */

void FUN_104215be0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 104215be8; end: 104215c3b;  */

undefined8 * FUN_104215be8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar1;
  return param_1;
}



/* Entry: 104215c3c; end: 104215c7f;  */

undefined8 * FUN_104215c3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 104215c80; end: 104215d1f;  */

int FUN_104215c80(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104215d20; end: 104215d87;  */

uint FUN_104215d20(uint5 *param_1,uint5 *param_2)

{
  uint5 uVar1;
  uint5 uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar1 = *(uint5 *)((long)param_1 + 5);
  uVar2 = *(uint5 *)((long)param_2 + 5);
  uVar4 = (ulong)*param_1;
  FUN_104215db8(uVar4,(ulong)*param_2);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulong)uVar1;
    FUN_104215db8(uVar4,(ulong)uVar2);
    uVar3 = (uint)uVar4;
  }
  return uVar3 & 1;
}



/* Entry: 104215d88; end: 104215db7;  */

uint FUN_104215d88(uint5 *param_1,uint5 *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_1;
  FUN_104215db8(uVar1,(ulong)*param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 104215db8; end: 1042161bb;  */

undefined8 FUN_104215db8(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  uVar1 = (uint)param_1;
  if ((param_1 & 0xff) == 2) {
    if ((uVar2 & 0xff) != 2) {
      return 0;
    }
  }
  else {
    if ((uVar2 & 0xff) == 2) {
      return 0;
    }
    if (((uVar1 ^ uVar2) & 1) != 0) {
      return 0;
    }
  }
  if ((param_1 & 0xff00) == 0x200) {
    if ((uVar2 & 0xff00) != 0x200) {
      return 0;
    }
  }
  else {
    if ((uVar2 & 0xff00) == 0x200) {
      return 0;
    }
    if (((uVar1 ^ uVar2) >> 8 & 1) != 0) {
      return 0;
    }
  }
  if ((param_1 & 0xff0000) == 0x20000) {
    if ((uVar2 & 0xff0000) != 0x20000) {
      return 0;
    }
  }
  else {
    if ((uVar2 & 0xff0000) == 0x20000) {
      return 0;
    }
    if (((uVar1 ^ uVar2) >> 0x10 & 1) != 0) {
      return 0;
    }
  }
  if ((param_1 & 0xff000000) == 0x2000000) {
    if ((uVar2 & 0xff000000) != 0x2000000) {
      return 0;
    }
  }
  else {
    if ((uVar2 & 0xff000000) == 0x2000000) {
      return 0;
    }
    if (((uVar1 ^ uVar2) >> 0x18 & 1) != 0) {
      return 0;
    }
  }
  uVar1 = (uint)(param_2 >> 0x20) & 0xff;
  if ((param_1 & 0xff00000000) == 0x200000000) {
    if (uVar1 != 2) {
      return 0;
    }
  }
  else {
    if (uVar1 == 2) {
      return 0;
    }
    if (((param_1 ^ param_2) >> 0x20 & 1) != 0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 1042161bc; end: 104216267;  */

void FUN_1042161bc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104216268; end: 10421626f;  */

undefined1  [16] FUN_104216268(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  bVar3 = *unaff_x20;
  if (bVar3 < 4) {
    pcVar4 = "playableCtaDsiplayedTsMs";
    if (bVar3 != 2) {
      pcVar4 = "playableCtaTapTsMs";
    }
    pcVar5 = "eginTimestampInMillis";
    uVar6 = 0xd000000000000012;
    if (bVar3 != 0) {
      pcVar5 = "containsPlayableAd";
      uVar6 = 0xd000000000000018;
    }
    uVar7 = 0xd000000000000012;
    if (bVar3 < 2) {
      pcVar4 = pcVar5;
      uVar7 = uVar6;
    }
    auVar9._8_8_ = (ulong)pcVar4 | 0x8000000000000000;
    auVar9._0_8_ = uVar7;
    return auVar9;
  }
  uVar1 = 0x800000010f1f0210;
  uVar6 = 0xd000000000000010;
  if (bVar3 != 7) {
    uVar1 = 0xeb00000000797274;
    uVar6 = 0x6552706154646964;
  }
  uVar2 = 0x800000010f1f01f0;
  uVar7 = 0xd000000000000012;
  if (bVar3 != 6) {
    uVar2 = uVar1;
    uVar7 = uVar6;
  }
  pcVar4 = "playableLoadedTsMs";
  uVar6 = 0xd000000000000016;
  if (bVar3 != 4) {
    pcVar4 = "playableDismissTapTsMs";
    uVar6 = 0xd000000000000013;
  }
  if (bVar3 < 6) {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
    uVar7 = uVar6;
  }
  auVar8._8_8_ = uVar2;
  auVar8._0_8_ = uVar7;
  return auVar8;
}



/* Entry: 104216270; end: 104216293;  */

void FUN_104216270(undefined1 *param_1,undefined1 param_2)

{
  FUN_104216890();
  *param_1 = param_2;
  return;
}



/* Entry: 104216294; end: 1042162ab;  */

undefined1  [16] FUN_104216294(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1042162ac; end: 1042162fb;  */

void FUN_1042162ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104216850();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1042162fc; end: 10421651f;  */

void FUN_1042162fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [7];
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x113069980;
  func_0x0001000285a8(0x113069980,&UNK_10dce42e0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_104216850();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&UNK_1107535b8,&UNK_1107535b8,param_1,uVar1,uVar2);
  uStack_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySb_xtKF(*unaff_x20,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySuSg_xtKF
              (*(undefined8 *)(unaff_x20 + 8),unaff_x20[0x10],&uStack_52,lVar3);
    uStack_53 = 2;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySuSg_xtKF
              (*(undefined8 *)(unaff_x20 + 0x18),unaff_x20[0x20],&uStack_53,lVar3);
    uStack_54 = 3;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySuSg_xtKF
              (*(undefined8 *)(unaff_x20 + 0x28),unaff_x20[0x30],&uStack_54,lVar3);
    uStack_55 = 4;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySuSg_xtKF
              (*(undefined8 *)(unaff_x20 + 0x38),unaff_x20[0x40],&uStack_55,lVar3);
    uStack_56 = 5;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySuSg_xtKF
              (*(undefined8 *)(unaff_x20 + 0x48),unaff_x20[0x50],&uStack_56,lVar3);
    uStack_57 = 6;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySSSg_xtKF
              (*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),&uStack_57,lVar3)
    ;
    uStack_58 = 7;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySiSg_xtKF
              (*(undefined8 *)(unaff_x20 + 0x68),unaff_x20[0x70],&uStack_58,lVar3);
    uStack_59 = 8;
    __ss22KeyedEncodingContainerV15encodeIfPresent_6forKeyySbSg_xtKF
              (unaff_x20[0x71],&uStack_59,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 104216520; end: 10421659f;  */

uint FUN_104216520(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined2 uStack_b0;
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
  undefined2 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = *(undefined2 *)(param_1 + 0xe);
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = *(undefined2 *)(param_2 + 0xe);
  FUN_104216618(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1042165a0; end: 104216603;  */

void FUN_1042165a0(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined2 uStack_28;
  
  FUN_104216b74(&uStack_98);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_50;
    param_1[8] = uStack_58;
    param_1[0xb] = uStack_40;
    param_1[10] = uStack_48;
    param_1[0xd] = uStack_30;
    param_1[0xc] = uStack_38;
    *(undefined2 *)(param_1 + 0xe) = uStack_28;
    param_1[1] = uStack_90;
    *param_1 = uStack_98;
    param_1[3] = uStack_80;
    param_1[2] = uStack_88;
    param_1[5] = uStack_70;
    param_1[4] = uStack_78;
    param_1[7] = uStack_60;
    param_1[6] = uStack_68;
  }
  return;
}



/* Entry: 104216604; end: 104216617;  */

void FUN_104216604(void)

{
  FUN_1042162fc();
  return;
}



/* Entry: 104216618; end: 10421684f;  */

undefined8 FUN_104216618(byte *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_98 [120];
  
  if (((*param_1 ^ *param_2) & 1) != 0) {
    return 0;
  }
  if (param_1[0x10] == 1) {
    if (param_2[0x10] != 1) {
      return 0;
    }
  }
  else if (param_2[0x10] == 1 || *(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
    return 0;
  }
  if (param_1[0x20] == 1) {
    if (param_2[0x20] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x20] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x18) != *(long *)(param_2 + 0x18)) {
      return 0;
    }
  }
  if (param_1[0x30] == 1) {
    if (param_2[0x30] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x30] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x28) != *(long *)(param_2 + 0x28)) {
      return 0;
    }
  }
  if (param_1[0x40] == 1) {
    if (param_2[0x40] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x40] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x38) != *(long *)(param_2 + 0x38)) {
      return 0;
    }
  }
  if (param_1[0x50] == 1) {
    if (param_2[0x50] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x50] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x48) != *(long *)(param_2 + 0x48)) {
      return 0;
    }
  }
  lVar3 = *(long *)(param_1 + 0x60);
  lVar2 = *(long *)(param_2 + 0x60);
  if (lVar3 == 0) {
    if (lVar2 != 0) {
      return 0;
    }
    func_0x0001034bbb04(param_2,auStack_98);
  }
  else {
    if (lVar2 == 0) {
      func_0x0001034bbb04(param_2,auStack_98);
      return 0;
    }
    uVar4 = *(ulong *)(param_1 + 0x58);
    if (((uVar4 != *(ulong *)(param_2 + 0x58)) || (lVar3 != lVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,lVar3,*(ulong *)(param_2 + 0x58),lVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  if (param_1[0x70] == 1) {
    if (param_2[0x70] != 1) {
      return 0;
    }
  }
  else {
    if (param_2[0x70] == 1) {
      return 0;
    }
    if (*(long *)(param_1 + 0x68) != *(long *)(param_2 + 0x68)) {
      return 0;
    }
  }
  bVar1 = param_2[0x71];
  if (param_1[0x71] == 2) {
    if (bVar1 == 2) {
      return 1;
    }
  }
  else if ((bVar1 != 2) && (((param_1[0x71] ^ bVar1) & 1) == 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 104216850; end: 10421688f;  */

void FUN_104216850(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069988 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce443c;
  _swift_getWitnessTable(&UNK_10dce443c,&UNK_1107535b8);
  puRam0000000113069988 = puVar1;
  return;
}



/* Entry: 104216890; end: 104216b73;  */

undefined4 FUN_104216890(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef0e0fed0)) {
    uVar1 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000012,0x800000010f1f0130,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if (((param_1 == -0x2fffffffffffffe8) && (param_2 == -0x7ffffffef0e0feb0)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000018,0x800000010f1f0150,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef0e0fe90)) {
        uVar1 = 0;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000012,0x800000010f1f0170,param_1,param_2,0);
        if ((uVar1 & 1) == 0) {
          if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef0e0fe70)) {
            uVar1 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000012,0x800000010f1f0190,param_1,param_2,0);
            if ((uVar1 & 1) == 0) {
              uVar1 = 0;
              if (((param_1 == -0x2fffffffffffffea) && (param_2 == -0x7ffffffef0e0fe50)) ||
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0xd000000000000016,0x800000010f1f01b0,param_1,param_2,0),
                 (uVar1 & 1) != 0)) {
                _swift_bridgeObjectRelease(param_2);
                return 4;
              }
              uVar1 = 0xd000000000000013;
              if (((param_1 != -0x2fffffffffffffed) || (param_2 != -0x7ffffffef0e0fe30)) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0xd000000000000013,0x800000010f1f01d0,param_1,param_2,0),
                 (uVar1 & 1) == 0)) {
                if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffef0e0fe10)) {
                  uVar1 = 0;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (0xd000000000000012,0x800000010f1f01f0,param_1,param_2,0);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = 0;
                    if (((param_1 != -0x2ffffffffffffff0) || (param_2 != -0x7ffffffef0e0fdf0)) &&
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (0xd000000000000010,0x800000010f1f0210,param_1,param_2,0),
                       (uVar1 & 1) == 0)) {
                      uVar1 = 0;
                      if ((param_1 == 0x6552706154646964) && (param_2 == -0x14ffffffff868d8c)) {
                        _swift_bridgeObjectRelease(0xeb00000000797274);
                        return 8;
                      }
                      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                (0x6552706154646964,0xeb00000000797274,param_1,param_2,0);
                      _swift_bridgeObjectRelease(param_2);
                      if ((uVar1 & 1) != 0) {
                        return 8;
                      }
                      return 9;
                    }
                    _swift_bridgeObjectRelease(param_2);
                    return 7;
                  }
                }
                _swift_bridgeObjectRelease(param_2);
                return 6;
              }
              _swift_bridgeObjectRelease(param_2);
              return 5;
            }
          }
          _swift_bridgeObjectRelease(param_2);
          return 3;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Entry: 104216b74; end: 104216e73;  */

/* WARNING: Removing unreachable block (ram,0x000104216d88) */
/* WARNING: Removing unreachable block (ram,0x000104216db8) */
/* WARNING: Removing unreachable block (ram,0x000104216d24) */

void FUN_104216b74(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [120];
  ulong uStack_160;
  ulong *puStack_158;
  ulong uStack_150;
  ulong *puStack_148;
  ulong uStack_140;
  ulong *puStack_138;
  ulong uStack_130;
  ulong *puStack_128;
  ulong uStack_120;
  ulong *puStack_118;
  ulong uStack_110;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  undefined2 uStack_f0;
  undefined1 uStack_e9;
  byte bStack_e8;
  undefined7 uStack_e7;
  ulong *puStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  ulong *puStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  ulong *puStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  ulong *puStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  ulong *puStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  ulong *puStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  undefined2 uStack_78;
  
  uVar3 = 0x1130699a8;
  func_0x0001000285a8(0x1130699a8,&UNK_10dce4490);
  lVar10 = *(long *)(uVar3 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_104216850();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_1e0 + -extraout_x8,&UNK_1107535b8,&UNK_1107535b8,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_160 = uStack_160 & 0xffffffffffffff00;
    puVar5 = &uStack_160;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar5,uVar3);
    bStack_e8 = (byte)puVar5 & 1;
    uStack_160._0_1_ = 1;
    puVar5 = &uStack_160;
    uVar8 = uVar3;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySuSgSum_xtKF();
    uStack_d8 = (undefined1)uVar8;
    uStack_160._0_1_ = 2;
    puVar6 = &uStack_160;
    uVar8 = uVar3;
    puStack_e0 = puVar5;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySuSgSum_xtKF();
    uStack_c8 = (undefined1)uVar8;
    uStack_160._0_1_ = 3;
    puVar5 = &uStack_160;
    uVar8 = uVar3;
    puStack_d0 = puVar6;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySuSgSum_xtKF();
    uStack_b8 = (undefined1)uVar8;
    uStack_160._0_1_ = 4;
    puVar6 = &uStack_160;
    uVar8 = uVar3;
    puStack_c0 = puVar5;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySuSgSum_xtKF();
    uStack_a8 = (undefined1)uVar8;
    uStack_160._0_1_ = 5;
    puVar5 = &uStack_160;
    uVar8 = uVar3;
    puStack_b0 = puVar6;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySuSgSum_xtKF();
    uStack_98 = (undefined1)uVar8;
    uStack_160._0_1_ = 6;
    puVar6 = &uStack_160;
    uVar8 = uVar3;
    puStack_a0 = puVar5;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    uStack_160 = CONCAT71(uStack_160._1_7_,7);
    puVar5 = &uStack_160;
    uVar9 = uVar3;
    puStack_90 = puVar6;
    uStack_88 = uVar8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    uStack_78 = CONCAT11(uStack_78._1_1_,(char)uVar9);
    uStack_e9 = 8;
    puVar7 = &uStack_e9;
    puStack_80 = puVar5;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySbSgSbm_xtKF(puVar7,uVar3);
    (**(code **)(lVar10 + 8))(auStack_1e0 + -extraout_x8,uVar3);
    uStack_120 = CONCAT71(uStack_a7,uStack_a8);
    uStack_110 = CONCAT71(uStack_97,uStack_98);
    puStack_108 = puStack_90;
    puStack_f8 = puStack_80;
    uStack_100 = uStack_88;
    uStack_160 = CONCAT71(uStack_e7,bStack_e8);
    uStack_150 = CONCAT71(uStack_d7,uStack_d8);
    puStack_158 = puStack_e0;
    uStack_140 = CONCAT71(uStack_c7,uStack_c8);
    uStack_130 = CONCAT71(uStack_b7,uStack_b8);
    puStack_148 = puStack_d0;
    puStack_138 = puStack_c0;
    uStack_78 = CONCAT11((char)puVar7,(undefined1)uStack_78);
    puStack_128 = puStack_b0;
    puStack_118 = puStack_a0;
    uStack_f0 = uStack_78;
    func_0x0001034bbb04(&uStack_160,auStack_1d8);
    func_0x0001000834e4(param_2);
    func_0x000101865840(&bStack_e8);
    param_1[9] = (ulong)puStack_118;
    param_1[8] = uStack_120;
    param_1[0xb] = (ulong)puStack_108;
    param_1[10] = uStack_110;
    param_1[0xd] = (ulong)puStack_f8;
    param_1[0xc] = uStack_100;
    param_1[1] = (ulong)puStack_158;
    *param_1 = uStack_160;
    param_1[3] = (ulong)puStack_148;
    param_1[2] = uStack_150;
    *(undefined2 *)(param_1 + 0xe) = uStack_f0;
    param_1[5] = (ulong)puStack_138;
    param_1[4] = uStack_140;
    param_1[7] = (ulong)puStack_128;
    param_1[6] = uStack_130;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 104216e74; end: 104216e9f;  */

long FUN_104216e74(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104216ea0; end: 104216ea7;  */

void FUN_104216ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 104216ea8; end: 104216f3b;  */

undefined1 * FUN_104216ea8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  param_1[0x40] = param_2[0x40];
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  param_1[0x50] = param_2[0x50];
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_2 + 0x70);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104216f3c; end: 104216ff7;  */

undefined1 * FUN_104216f3c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[0x40] = param_2[0x40];
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  param_1[0x50] = param_2[0x50];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[0x70] = param_2[0x70];
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  param_1[0x71] = param_2[0x71];
  return param_1;
}



/* Entry: 104216ff8; end: 104217023;  */

void FUN_104216ff8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Entry: 104217024; end: 1042170bf;  */

undefined1 * FUN_104217024(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x20] = param_2[0x20];
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  param_1[0x30] = param_2[0x30];
  param_1[0x40] = param_2[0x40];
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  param_1[0x50] = param_2[0x50];
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_2 + 0x70);
  return param_1;
}



/* Entry: 1042170c0; end: 104217307;  */

int FUN_1042170c0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x72) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
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



/* Entry: 104217308; end: 104217347;  */

void FUN_104217308(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce4414;
  _swift_getWitnessTable(&UNK_10dce4414,&UNK_1107535b8);
  puRam0000000113069990 = puVar1;
  return;
}



/* Entry: 104217348; end: 10421734b;  */

void FUN_104217348(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069998 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce43ac;
  _swift_getWitnessTable(&UNK_10dce43ac,&UNK_1107535b8);
  puRam0000000113069998 = puVar1;
  return;
}



/* Entry: 10421734c; end: 10421738b;  */

void FUN_10421734c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113069998 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce43ac;
  _swift_getWitnessTable(&UNK_10dce43ac,&UNK_1107535b8);
  puRam0000000113069998 = puVar1;
  return;
}



/* Entry: 10421738c; end: 10421738f;  */

void FUN_10421738c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130699a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce4384;
  _swift_getWitnessTable(&UNK_10dce4384,&UNK_1107535b8);
  puRam00000001130699a0 = puVar1;
  return;
}



/* Entry: 104217390; end: 1042173cf;  */

void FUN_104217390(void)

{
  undefined *puVar1;
  
  if (puRam00000001130699a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce4384;
  _swift_getWitnessTable(&UNK_10dce4384,&UNK_1107535b8);
  puRam00000001130699a0 = puVar1;
  return;
}



/* Entry: 1042173d0; end: 1042173e3;  */

bool FUN_1042173d0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1042173e4; end: 10421748f;  */

void FUN_1042173e4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104217490; end: 10421753b;  */

undefined1  [16] FUN_104217490(void)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar3 = *unaff_x20;
  uVar6 = 0xee00646f506e4974;
  pcVar4 = "loadingErrorCode";
  uVar5 = 0xd000000000000010;
  if (bVar3 != 3) {
    pcVar4 = "podIndexPosition";
    uVar5 = 0xd000000000000011;
  }
  uVar1 = 0x6449646f70;
  if (bVar3 != 2) {
    uVar1 = uVar5;
  }
  uVar2 = 0xe500000000000000;
  if (bVar3 != 2) {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
  }
  uVar5 = 0x6e656d6563616c70;
  if (bVar3 != 0) {
    uVar6 = 0xe900000000000064;
    uVar5 = 0x6f50726550736461;
  }
  if (bVar3 < 2) {
    uVar2 = uVar6;
    uVar1 = uVar5;
  }
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = uVar1;
  return auVar7;
}



/* Entry: 10421753c; end: 10421755f;  */

void FUN_10421753c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1042178c8();
  *param_1 = param_2;
  return;
}



/* Entry: 104217560; end: 104217577;  */

undefined1  [16] FUN_104217560(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 104217578; end: 1042175c7;  */

void FUN_104217578(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_104217888();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1042175c8; end: 104217753;  */

void FUN_1042175c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [11];
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x1130699b0;
  func_0x0001000285a8(0x1130699b0,&UNK_10dce4498);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_104217888();
  __ss7EncoderP9container7keyedBys22KeyedEncodingContainerVyqd__Gqd__m_ts9CodingKeyRd__lFTj
            (puVar4,&UNK_110753788,&UNK_110753788,param_1,uVar1,uVar2);
  uStack_51 = 0;
  __ss22KeyedEncodingContainerV6encode_6forKeyySu_xtKF(*unaff_x20,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    __ss22KeyedEncodingContainerV6encode_6forKeyySu_xtKF(unaff_x20[1],&uStack_52,lVar3);
    uStack_53 = 2;
    __ss22KeyedEncodingContainerV6encode_6forKeyySS_xtKF(unaff_x20[2],unaff_x20[3],&uStack_53,lVar3)
    ;
    uStack_54 = 3;
    __ss22KeyedEncodingContainerV6encode_6forKeyySu_xtKF(unaff_x20[4],&uStack_54,lVar3);
    uStack_55 = 4;
    __ss22KeyedEncodingContainerV6encode_6forKeyySu_xtKF(unaff_x20[5],&uStack_55,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 104217754; end: 104217797;  */

uint FUN_104217754(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1042177ec(&uStack_70,&uStack_40);
  return uVar1 & 1;
}


