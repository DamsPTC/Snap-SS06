/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073b72bc; end: 1073b737f;  */

uint FUN_1073b72bc(undefined4 param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  fVar1 = 255.0;
  uStack_74 = 0x437f0000;
  uStack_70 = param_1;
  fStack_6c = param_2;
  fStack_68 = param_3;
  fStack_64 = param_4;
  func_0x0001073b5d6c(&uStack_70,&uStack_74);
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0x437f0000437f0000;
  uStack_50 = 0x437f0000437f0000;
  uStack_60 = param_1;
  fStack_5c = param_2;
  fStack_58 = param_3;
  fStack_54 = param_4;
  func_0x0001073bc4b8(&uStack_60,&uStack_40);
  fStack_30 = fVar1;
  fStack_2c = param_2;
  fStack_28 = param_3;
  fStack_24 = param_4;
  func_0x0001073bc484(&fStack_30,&uStack_50);
  return (int)param_3 << 0x10 | (int)param_4 << 0x18 | (int)param_2 << 8 | (int)fVar1;
}



/* Entry: 1073b7380; end: 1073b74cf;  */

void FUN_1073b7380(ulong param_1,long param_2,long *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int extraout_w10;
  ulong uVar6;
  long *unaff_x19;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar7 = param_2;
  func_0x0001073bef30();
  if (param_1 < (ulong)unaff_x19[2]) {
    FUN_1073bc5bc();
    lVar9 = param_1 + 0xe0;
  }
  else {
    lVar9 = param_1 - *unaff_x19;
    uVar1 = lVar9 / 0xe0 + 1;
    if (0x124924924924924 < uVar1) {
      FUN_1073bc6d8();
LAB_1073b74cc:
      func_0x000104bd35f4();
      lStack_80 = lVar9;
      lStack_78 = param_2;
      if (param_3 == (long *)0x0) {
        param_3 = (long *)0x0;
      }
      else {
        (**(code **)(*param_3 + 0x80))();
      }
      lVar9 = *param_4;
      lVar5 = param_4[1];
      *(long *)(lVar9 + 0x40) = (long)param_3 + param_5;
      FUN_1073bc228(param_1 + 0x30,lVar9,lVar5);
      lVar5 = param_4[1];
      lVar9 = *param_4;
      if (param_4[1] != 0) {
        do {
          func_0x0001073becf8();
        } while (extraout_w10 != 0);
      }
      uStack_88 = *(undefined8 *)(lVar7 + 0x10);
      uStack_90 = *(undefined8 *)(lVar7 + 8);
      *(long *)(lVar7 + 0x10) = lVar5;
      *(long *)(lVar7 + 8) = lVar9;
      func_0x0001073b4ef8(&uStack_90);
      return;
    }
    uVar3 = (unaff_x19[2] - *unaff_x19) / 0xe0;
    uVar6 = uVar3 * 2;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0x92492492492491 < uVar3) {
      uVar6 = 0x124924924924924;
    }
    if (uVar6 == 0) {
      lVar7 = 0;
    }
    else {
      if (0x124924924924924 < uVar6) goto LAB_1073b74cc;
      lVar7 = uVar6 * 0xe0;
      __Znwm();
    }
    lVar9 = lVar7 + lVar9;
    FUN_1073bc5bc(lVar9,param_2);
    lVar8 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar10 = lVar9 + ((lVar2 - lVar8) / -0xe0) * 0xe0;
    lVar4 = lVar10;
    for (lVar5 = lVar8; lVar5 != lVar2; lVar5 = lVar5 + 0xe0) {
      FUN_1073bc5bc(lVar4,lVar5);
      lVar4 = lVar4 + 0xe0;
    }
    for (; lVar8 != lVar2; lVar8 = lVar8 + 0xe0) {
      FUN_1073bc6e4(lVar8);
    }
    lVar9 = lVar9 + 0xe0;
    lVar5 = *unaff_x19;
    *unaff_x19 = lVar10;
    unaff_x19[1] = lVar9;
    unaff_x19[2] = lVar7 + uVar6 * 0xe0;
    if (lVar5 != 0) {
      __ZdlPv();
    }
  }
  unaff_x19[1] = lVar9;
  return;
}



/* Entry: 1073b74d0; end: 1073b7557;  */

void FUN_1073b74d0(long param_1,long param_2,long *param_3,long *param_4,long param_5)

{
  int extraout_w10;
  long lVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == (long *)0x0) {
    param_3 = (long *)0x0;
  }
  else {
    (**(code **)(*param_3 + 0x80))();
  }
  lVar1 = *param_4;
  lVar2 = param_4[1];
  *(long *)(lVar1 + 0x40) = (long)param_3 + param_5;
  FUN_1073bc228(param_1 + 0x30,lVar1,lVar2);
  lVar2 = param_4[1];
  lVar1 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x0001073becf8();
    } while (extraout_w10 != 0);
  }
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  uStack_40 = *(undefined8 *)(param_2 + 8);
  *(long *)(param_2 + 0x10) = lVar2;
  *(long *)(param_2 + 8) = lVar1;
  func_0x0001073b4ef8(&uStack_40);
  return;
}



/* Entry: 1073b7558; end: 1073b7faf;  */

long * FUN_1073b7558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5,long param_6,long param_7,long param_8,undefined8 param_9)

{
  short *psVar1;
  undefined4 *puVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  byte bVar6;
  undefined1 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  long *plVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined4 uVar20;
  int extraout_w8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  undefined8 extraout_x8_11;
  undefined8 extraout_x8_12;
  uint uVar21;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar22;
  ulong extraout_x12;
  ulong uVar23;
  ulong extraout_x13;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  float unaff_s9;
  float unaff_s10;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 in_stack_00000090;
  long alStack_610 [25];
  undefined8 uStack_548;
  long lStack_540;
  long *plStack_538;
  undefined8 **ppuStack_530;
  code *pcStack_528;
  undefined1 auStack_518 [8];
  undefined8 *puStack_510;
  code *pcStack_508;
  long lStack_4f8;
  ulong uStack_4f0;
  long *plStack_4e8;
  long lStack_4e0;
  ulong uStack_4d8;
  undefined8 *puStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  float fStack_498;
  float fStack_494;
  float fStack_480;
  float fStack_47c;
  float fStack_478;
  float fStack_474;
  undefined4 uStack_470;
  float fStack_46c;
  undefined8 uStack_468;
  undefined8 uStack_460;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
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
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  undefined1 uStack_3e0;
  undefined8 uStack_3df;
  long lStack_3b0;
  char cStack_3a8;
  undefined1 uStack_3a0;
  undefined1 uStack_374;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long alStack_358 [3];
  long lStack_340;
  long alStack_310 [3];
  long lStack_2f8;
  long alStack_2c8 [3];
  long *plStack_2b0;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  long lStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long alStack_230 [5];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 auStack_138 [96];
  undefined2 auStack_d8 [96];
  undefined8 uStack_18;
  
  func_0x0001073bedf4();
  lVar14 = param_5;
  lVar18 = param_6;
  func_0x0001073beeb4();
  uVar3 = *(uint *)(lVar18 + 0x20);
  uVar24 = CONCAT44(uVar3,*(undefined4 *)(lVar18 + 0x18));
  uStack_18 = extraout_x8;
  FUN_1073b6c94(*(undefined8 *)(lVar14 + 0x58),uVar24);
  uStack_1a8 = *(ulong *)(param_6 + 0x1c8);
  uStack_1b0 = *(undefined8 *)(param_6 + 0x1c0);
  plVar8 = *(long **)(param_5 + 0x58);
  FUN_1073b6cb8(plVar8,&uStack_1b0,uVar24,param_9);
  plVar9 = plVar8;
  func_0x0001073befd0();
  uVar7 = 1;
  if ((int)plVar9 == 3) goto LAB_1073b7e90;
  lVar14 = *(long *)(param_6 + 0x38);
  lVar18 = *(long *)(param_6 + 0x40);
  FUN_1073b7048(&lStack_1c0,2,(ulong)&uStack_1b0 | 4,param_9,*(undefined4 *)(param_5 + 0x50),uVar24)
  ;
  uStack_1d0 = 0;
  uStack_1d8 = 0;
  uStack_1c8 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1e0 = 0;
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_1f8 = 0;
  uStack_4d8 = lVar14;
  if (param_8 == 0) {
    lVar14 = 0;
  }
  else {
    func_0x0001073bf390();
    lVar14 = param_8;
    func_0x0001073befc8();
  }
  plVar9 = (long *)(param_6 + 0x158);
  FUN_1073b7fb0(plVar9,*(long *)(param_8 + 0x18) + 8);
  puStack_4d0 = *(undefined8 **)(param_8 + 8);
  uStack_4f0 = CONCAT44(uStack_4f0._4_4_,*(int *)(lVar14 + 0x2f8));
  uVar20 = 0x11;
  if (*(int *)(lVar14 + 0x2f8) != 0) {
    uVar20 = 0x14;
  }
  plStack_4e8 = plVar8;
  lStack_4e0 = param_7;
  lStack_4c8 = param_8;
  FUN_1073bdc18(alStack_230,uVar20,plVar9,puStack_4d0 + 5);
  uStack_240 = 0;
  uVar24 = 0;
  uStack_258 = 0;
  lStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  lStack_278 = 0;
  lStack_280 = 0;
  puStack_268 = (undefined8 *)0x0;
  uStack_270 = 0;
  FUN_107380640(&plStack_250,5);
  FUN_107380640(&puStack_268,5);
  lVar10 = *plVar9;
  func_0x0001073bee24();
  (*extraout_x8_00)();
  *plStack_250 = lVar10;
  lVar11 = plVar9[1];
  func_0x0001073bee24();
  (*extraout_x8_01)();
  plStack_250[1] = lVar11;
  lVar12 = plVar9[2];
  func_0x0001073bee24();
  (*extraout_x8_02)();
  plStack_250[2] = lVar12;
  lVar13 = plVar9[3];
  func_0x0001073bee24();
  (*extraout_x8_03)();
  plStack_250[3] = lVar13;
  lVar14 = plVar9[4];
  func_0x0001073bee24();
  (*extraout_x8_04)();
  uVar25 = (long)(lVar18 - uStack_4d8) >> 2;
  lStack_4f8 = (ulong)uVar3 << 0x20;
  plStack_250[4] = lVar14;
  *puStack_268 = 0;
  uVar22 = lStack_260 - (long)puStack_268 >> 3;
  uVar23 = 1;
  uStack_4d8 = uVar25;
  while( true ) {
    fVar28 = (float)uVar24;
    fVar27 = (float)param_2;
    fVar34 = (float)param_4;
    fVar35 = (float)param_3;
    uVar7 = uVar22 <= uVar23;
    if ((bool)uVar7) break;
    func_0x0001073bf37c();
    lVar14 = extraout_x8_05;
    uVar22 = extraout_x12;
    uVar23 = extraout_x13;
  }
  func_0x000100651cb4(&lStack_280,lVar11 + lVar10 + lVar12 + lVar13 + lVar14);
  uVar22 = uStack_4d8;
  uStack_438 = &plStack_250;
  uStack_430 = &puStack_268;
  uStack_428 = &lStack_280;
  func_0x0001073bdf44(&uStack_438,*plVar9,0);
  if (plStack_250[1] != 0) {
    uVar7 = (ulong)(lStack_278 - lStack_280) <= (ulong)puStack_268[1];
    if (!(bool)uVar7) {
      (**(code **)(*(long *)plVar9[1] + 0x28))((long *)plVar9[1],lStack_280 + puStack_268[1]);
    }
  }
  if ((plStack_250[2] != 0) && (func_0x0001073bf354(puStack_268[2]), !(bool)uVar7)) {
    func_0x0001073bf0ec(plVar9[2]);
    func_0x0001073bef80();
  }
  func_0x0001073bdf44(&uStack_438,plVar9[3],3);
  if ((plStack_250[4] != 0) && (func_0x0001073bf354(puStack_268[4]), !(bool)uVar7)) {
    func_0x0001073bf0ec(plVar9[4]);
    func_0x0001073bef80();
  }
  func_0x0001073bf290(alStack_2c8);
  fVar32 = 1.0;
  if (*(int *)(alStack_230[0] + 8) == 2) {
    FUN_1073bdb98();
    func_0x0001073bf03c(alStack_2c8[0] + *plStack_2b0);
    func_0x0001073bf308();
    fVar33 = 1.0;
  }
  else {
    func_0x0001073bf308();
    fVar33 = 1.0;
    if (extraout_w8 == 1) {
      unaff_s9 = fVar35;
      fVar32 = fVar34;
      unaff_s10 = fVar27;
      fVar33 = fVar28;
      func_0x0001073bee84(*plVar9);
      (*extraout_x8_06)();
      fVar27 = unaff_s10;
      fVar28 = fVar33;
    }
  }
  FUN_1073bc368(alStack_2c8);
  func_0x0001073bf290(alStack_310);
  fVar34 = 0.0;
  fVar35 = 0.84;
  if (*(int *)(alStack_230[0] + 0x14) == 2) {
    FUN_1073bdb98();
    func_0x0001073bf240(alStack_310[0] + *(long *)(lStack_2f8 + 8));
  }
  else if (*(int *)(alStack_230[0] + 0x14) == 1) {
    fVar35 = fVar27;
    fVar34 = fVar28;
    func_0x0001073bee84(plVar9[1]);
    (*extraout_x8_07)();
    fVar28 = fVar34;
  }
  FUN_1073bc368(alStack_310);
  func_0x0001073bf290(alStack_358);
  lVar14 = lStack_4e0;
  plVar8 = plStack_4e8;
  fVar27 = 1.0;
  uVar7 = *(int *)(alStack_230[0] + 0x20) == 2;
  if ((bool)uVar7) {
    FUN_1073bdb98();
    lVar14 = lStack_4e0;
    plVar8 = plStack_4e8;
    func_0x0001073beedc(alStack_358[0] + *(long *)(lStack_340 + 0x10));
  }
  else {
    uVar7 = *(int *)(alStack_230[0] + 0x20) == 1;
    if ((bool)uVar7) {
      fVar27 = fVar28;
      func_0x0001073bee84(plVar9[2]);
      (*extraout_x8_08)();
    }
  }
  FUN_1073bc368(alStack_358);
  cStack_3a8 = '\0';
  uStack_3a0 = 0;
  uStack_374 = 0;
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3df = 0;
  uStack_3e7 = 0;
  uStack_3e0 = 0;
  uStack_368 = 0;
  uStack_360 = 0;
  uStack_370 = 0;
  uStack_438 = (long **)CONCAT44(unaff_s10 * fVar27,fVar33 * fVar27);
  uStack_430 = (undefined8 **)CONCAT44(fVar32 * fVar27,unaff_s9 * fVar27);
  uStack_428 = (long *)CONCAT44(fVar35,fVar34);
  puVar15 = &uStack_3f0;
  func_0x0001073beee4(puVar15,0x501);
  lVar18 = lStack_4c8;
  if ((int)uStack_4f0 == 0) {
LAB_1073b7c5c:
    func_0x0001073bef9c();
    if (!(bool)uVar7) {
      puVar26 = &uStack_3f0;
      func_0x0001073bee60(puVar26);
      puVar15 = (undefined8 *)((long)puVar26 + (long)puVar15);
    }
    func_0x00010089a97c(&uStack_420,(long)puVar15 * uVar22);
    lVar14 = 0;
    for (; uVar25 != 0; uVar25 = uVar25 - 1) {
      psVar1 = (short *)(*(long *)(param_6 + 0x38) + lVar14);
      func_0x0001073bf280((float)(int)*psVar1,(float)(int)psVar1[1]);
      func_0x0001073bef9c();
      if (!(bool)uVar7) {
        puVar16 = (undefined4 *)(extraout_x8_09 + lVar14 * 4);
        FUN_1073b72bc(*puVar16,puVar16[1],puVar16[2],puVar16[3]);
        func_0x0001073bef3c();
        func_0x0001073bf12c(&uStack_420);
      }
      lVar14 = lVar14 + 4;
    }
  }
  else {
    lVar10 = *(long *)(*(long *)(lVar14 + 0x220) + 8);
    uVar7 = 1;
    if ((*(long *)(lVar10 + 0x58) == *(long *)(lVar10 + 0x60)) ||
       (uVar7 = *(char *)(*(long *)(lVar10 + 0x58) + 0x18) == '\x01', !(bool)uVar7))
    goto LAB_1073b7c5c;
    puVar26 = &uStack_3f0;
    func_0x0001073beee4(puVar26,0x504);
    puVar15 = (undefined8 *)((long)puVar26 + (long)puVar15);
    func_0x0001073bef9c();
    if (!(bool)uVar7) {
      puVar26 = &uStack_3f0;
      func_0x0001073bee60(puVar26);
      puVar15 = (undefined8 *)((long)puVar26 + (long)puVar15);
    }
    func_0x00010089a97c(&uStack_420,(long)puVar15 * uVar22);
    puVar26 = *(undefined8 **)(lVar10 + 0x58);
    func_0x00010775f080(&uStack_198,"");
    func_0x00010775f080(auStack_138,"");
    FUN_1073b7fe4(auStack_d8,puStack_4d0 + 0x27,&uStack_198);
    func_0x0001073bc804(&uStack_198);
    (**(code **)(**(long **)(lVar14 + 0x220) + 0x18))
              (&uStack_198,*(long **)(lVar14 + 0x220),auStack_d8);
    puVar16 = &uStack_198;
    puStack_4d0 = puVar26;
    FUN_1073b805c();
    uStack_4f0 = (ulong)puVar16 >> 0x10 & 0xffff;
    FUN_1073bc854(&uStack_198);
    fVar27 = *(float *)(param_6 + 0x30);
    fVar28 = (float)(uint)(int)fVar27;
    fVar35 = (float)NEON_ucvtf((uint)*(byte *)(lStack_4e0 + 4));
    func_0x0001073bf1e8();
    func_0x0001073bf008();
    bVar6 = uStack_1b0._4_1_;
    dVar29 = 1.0;
    _ldexp((int)fVar27 - (uint)uStack_1b0._4_1_);
    dVar30 = 1.0;
    _ldexp(bVar6);
    dVar31 = (double)NEON_ucvtf(uStack_1a8 & 0xffffffff);
    uVar21 = (uint)((dVar31 + dVar30 * (double)(int)uStack_1b0._2_2_) *
                   (double)(int)(dVar29 * 512.0));
    uVar3 = uStack_1a8._4_4_ * (int)(dVar29 * 512.0);
    fStack_458 = (float)((uint)puVar16 & 0xffff);
    fStack_454 = (float)(uStack_4f0 & 0xffffffff);
    fStack_450 = (float)((ulong)puVar16 >> 0x20 & 0xffff);
    fStack_44c = (float)((ulong)puVar16 >> 0x30);
    fStack_480 = (float)((int)uVar21 >> 0x10);
    fStack_47c = (float)((int)uVar3 >> 0x10);
    fStack_478 = (float)(uVar21 & 0xffff);
    fStack_474 = (float)(uVar3 & 0xffff);
    uStack_470 = 0x3f800000;
    uStack_468 = *(undefined8 *)(*(long *)(lStack_4c8 + 8) + 0x1c);
    uStack_460 = NEON_ucvtf(*puStack_4d0,4);
    uVar24 = *(undefined8 *)(lVar10 + 0x58);
    fStack_46c = fVar35 / fVar28;
    fStack_448 = fStack_458;
    fStack_444 = fStack_454;
    fStack_440 = fStack_450;
    fStack_43c = fStack_44c;
    FUN_1073b8134(uVar24);
    FUN_1073b80a0(&uStack_198,uVar24);
    func_0x0001073bf260();
    func_0x0001073bc940(&uStack_198);
    uVar22 = uStack_4d8;
    uVar7 = cStack_3a8 == '\x01';
    if ((bool)uVar7) {
      lStack_3b0 = lStack_4f8 + 0x100000000;
      lVar18 = lStack_4c8;
      plVar8 = plStack_4e8;
    }
    else {
      FUN_1073be070(&fStack_498,0x800000008,0xff00ff);
      FUN_1073b80a0(&uStack_198,&fStack_498);
      lVar18 = lStack_4c8;
      plVar8 = plStack_4e8;
      func_0x0001073bf260();
      func_0x0001073bc940(&uStack_198);
      func_0x00010724e5f4(&fStack_498);
    }
    lVar14 = 0;
    for (; uVar25 != 0; uVar25 = uVar25 - 1) {
      psVar1 = (short *)(*(long *)(param_6 + 0x38) + lVar14);
      fStack_498 = (float)(int)*psVar1;
      fStack_494 = (float)(int)psVar1[1];
      FUN_1073b5944(&uStack_198,&fStack_498,&fStack_480,&fStack_458);
      func_0x0001073bf280(uStack_198,uStack_194);
      func_0x0001073bf280(uStack_190,uStack_18c);
      func_0x0001073bef9c();
      if (!(bool)uVar7) {
        puVar16 = (undefined4 *)(extraout_x8_10 + lVar14 * 4);
        FUN_1073b72bc(*puVar16,puVar16[1],puVar16[2],puVar16[3]);
        func_0x0001073bef3c();
        func_0x0001073bf12c(&uStack_420);
      }
      lVar14 = lVar14 + 4;
    }
    func_0x0001073bc804(auStack_d8);
  }
  uVar7 = uVar22 == 0xfffe;
  if (uVar22 < 0xffff) {
    func_0x00010730b9d0(&uStack_408,*(long *)(param_6 + 0x80) - *(long *)(param_6 + 0x78) >> 2);
    puVar2 = *(undefined4 **)(param_6 + 0x80);
    for (puVar16 = *(undefined4 **)(param_6 + 0x78); uVar7 = puVar16 == puVar2, !(bool)uVar7;
        puVar16 = puVar16 + 1) {
      auStack_d8[0] = (undefined2)*puVar16;
      func_0x0001073bc970(&uStack_408,auStack_d8);
    }
    FUN_1073b7380(lStack_1c0 + 0x48,&uStack_438);
  }
  else {
    lStack_4a8 = lStack_1b8;
    lStack_4b0 = lStack_1c0;
    if (lStack_1b8 != 0) {
      do {
        func_0x0001073becf8();
      } while (extraout_w10 != 0);
    }
    FUN_1073b8178(&lStack_4b0,param_6 + 0x78,&uStack_438,puVar15);
    func_0x0001073bd444(&lStack_4b0);
  }
  lStack_4b8 = lStack_1b8;
  lStack_4c0 = lStack_1c0;
  if (lStack_1b8 != 0) {
    do {
      func_0x0001073becf8();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001073beff0(plVar8,param_6,lVar18,&lStack_4c0);
  func_0x0001073bf2a4();
  FUN_1073bc6e4(&uStack_438);
  func_0x0001073bf238();
  func_0x0001073bc770(alStack_230);
  func_0x0001056d1ce4(&uStack_208);
  FUN_1073bc7a8(&uStack_1f0);
  func_0x0001073bc7e0(&uStack_1d8);
  plVar9 = &lStack_1c0;
  func_0x0001073bd444();
LAB_1073b7e90:
  func_0x0001073bed60(uStack_18);
  if ((bool)uVar7) {
    return plVar9;
  }
  ___stack_chk_fail();
  func_0x00010724e5f4(&fStack_498);
  func_0x0001073bc804(auStack_d8);
  FUN_1073bc6e4(&uStack_438);
  func_0x0001073bf238();
  func_0x0001073bc770(alStack_230);
  func_0x0001056d1ce4(&uStack_208);
  FUN_1073bc7a8(&uStack_1f0);
  func_0x0001073bc7e0(&uStack_1d8);
  plVar8 = &lStack_1c0;
  func_0x0001073bd444();
  func_0x0001073bedec();
  pcStack_508 = FUN_1073b7fb0;
  puVar19 = auStack_518;
  puStack_510 = &stack0x00000090;
  FUN_1073bdbb4();
  if (*plVar8 == 0) {
    func_0x0001073bf248();
    plVar8 = alStack_610;
    plVar17 = alStack_610;
    pcStack_528 = FUN_1073b7fe4;
    lStack_540 = param_6;
    plStack_538 = plVar9;
    ppuStack_530 = &puStack_510;
    func_0x0001073beeb4();
    uStack_548 = extraout_x8_12;
    FUN_1073bdf70(alStack_610);
    FUN_1073bdf8c(extraout_x8_11,alStack_610,puVar19);
    FUN_1073be050();
    func_0x0001073bed60(uStack_548);
    if (!(bool)uVar7) {
      ___stack_chk_fail();
      FUN_1073be050();
      func_0x0001073bedec();
      uVar4 = *(ushort *)((long)plVar17 + 4);
      uVar5 = *(ushort *)((long)plVar17 + 6);
      FUN_1073bc82c();
      return (long *)((ulong)((uint)plVar17 & 0xffff) << 0x20 | ((ulong)plVar17 >> 0x10) << 0x30 |
                      (ulong)((uint)uVar5 * 0x10000 + 0x10000) | (ulong)(uVar4 + 1) & 0xffff);
    }
    return plVar8;
  }
  return (long *)(*plVar8 + 0x58);
}



/* Entry: 1073b7fb0; end: 1073b7fe3;  */

undefined1 * FUN_1073b7fb0(long *param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_110 [200];
  undefined8 uStack_48;
  undefined1 auStack_18 [8];
  
  puVar5 = auStack_18;
  FUN_1073bdbb4(param_1,puVar5,param_2);
  if (*param_1 != 0) {
    return (undefined1 *)(*param_1 + 0x58);
  }
  func_0x0001073bf248();
  puVar3 = auStack_110;
  puVar4 = auStack_110;
  func_0x0001073beeb4();
  uStack_48 = extraout_x8_00;
  FUN_1073bdf70(auStack_110);
  FUN_1073bdf8c(extraout_x8,auStack_110,puVar5);
  FUN_1073be050();
  func_0x0001073bed60(uStack_48);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  FUN_1073be050();
  func_0x0001073bedec();
  uVar1 = *(ushort *)(puVar4 + 4);
  uVar2 = *(ushort *)(puVar4 + 6);
  FUN_1073bc82c();
  return (undefined1 *)
         ((ulong)((uint)puVar4 & 0xffff) << 0x20 | ((ulong)puVar4 >> 0x10) << 0x30 |
          (ulong)((uint)uVar2 * 0x10000 + 0x10000) | (ulong)(uVar1 + 1) & 0xffff);
}



/* Entry: 1073b7fe4; end: 1073b805b;  */

undefined1 * FUN_1073b7fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined1 auStack_f0 [200];
  undefined8 uStack_28;
  
  puVar3 = auStack_f0;
  puVar4 = auStack_f0;
  func_0x0001073beeb4();
  uStack_28 = extraout_x8;
  FUN_1073bdf70(auStack_f0);
  FUN_1073bdf8c(param_1,auStack_f0,param_3);
  FUN_1073be050();
  func_0x0001073bed60(uStack_28);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  FUN_1073be050();
  func_0x0001073bedec();
  uVar1 = *(ushort *)(puVar4 + 4);
  uVar2 = *(ushort *)(puVar4 + 6);
  FUN_1073bc82c();
  return (undefined1 *)
         ((ulong)((uint)puVar4 & 0xffff) << 0x20 | ((ulong)puVar4 >> 0x10) << 0x30 |
          (ulong)((uint)uVar2 * 0x10000 + 0x10000) | (ulong)(uVar1 + 1) & 0xffff);
}



/* Entry: 1073b805c; end: 1073b809f;  */

ulong FUN_1073b805c(ulong param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = *(ushort *)(param_1 + 6);
  FUN_1073bc82c();
  return (ulong)((uint)param_1 & 0xffff) << 0x20 | (param_1 >> 0x10) << 0x30 |
         (ulong)((uint)uVar2 * 0x10000 + 0x10000) | (ulong)(uVar1 + 1) & 0xffff;
}



/* Entry: 1073b80a0; end: 1073b8133;  */

void FUN_1073b80a0(undefined1 *param_1,uint *param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((char)param_2[4] == '\x01') {
    *param_1 = 0;
    param_1[0x30] = 0;
  }
  else {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000100651cb4(&uStack_50,(ulong)*param_2 * (ulong)param_2[1] * 4);
    func_0x0001073bf288(uStack_50,*(undefined8 *)(param_2 + 2));
    func_0x0001073bf210();
    func_0x000100100fec(&uStack_50);
  }
  return;
}



/* Entry: 1073b8134; end: 1073b8177;  */

void FUN_1073b8134(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010089aa04();
  return;
}



/* Entry: 1073b8178; end: 1073b85c3;  */

void FUN_1073b8178(undefined8 *param_1,long *param_2,undefined8 *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 ****ppppuVar5;
  code *pcVar6;
  undefined8 *****pppppuVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  int iStack_1bc;
  int aiStack_1b8 [16];
  ulong uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long alStack_158 [6];
  undefined8 ****ppppuStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [24];
  undefined8 uStack_e8;
  char cStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  ulong uStack_b3;
  undefined8 ****ppppuStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined8 ****ppppuStack_98;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  func_0x0001056c5718(&lStack_88,0xffff);
  uVar15 = 0;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  do {
    uVar10 = (uint)((ulong)(lVar2 - lVar1) >> 2);
    uVar4 = uVar10 - uVar15;
    if (uVar10 < uVar15 || uVar4 == 0) {
      func_0x00010731e26c(&lStack_88);
      return;
    }
    cStack_e0 = '\0';
    if (0xfffe < uVar4) {
      uVar4 = 0xffff;
    }
    uStack_d8 = uStack_d8 & 0xffffffffffffff00;
    uStack_b3 = uStack_b3 & 0xffffffffffffff;
    alStack_158[1] = 0;
    alStack_158[0] = 0;
    alStack_158[3] = 0;
    alStack_158[2] = 0;
    alStack_158[5] = 0;
    alStack_158[4] = 0;
    uStack_120 = 0;
    ppppuStack_128 = (undefined8 *****)0x0;
    uStack_117 = 0;
    auStack_110[0] = 0;
    uStack_11f = 0;
    uStack_118 = 0;
    ppppuStack_a0 = (undefined8 *****)0x0;
    ppppuStack_98 = (undefined8 *****)0x0;
    ppppuStack_a8 = (undefined8 *****)0x0;
    uStack_168 = param_3[1];
    uStack_170 = *param_3;
    uStack_160 = param_3[2];
    if (&uStack_170 != param_3) {
      lVar11 = param_3[10] - param_3[9];
      if (lVar11 == 0) {
        uStack_120 = 0;
        uStack_11f = 0;
      }
      else {
        lVar8 = lVar11 >> 2;
        pppppuVar7 = &ppppuStack_128;
        FUN_1073bc394();
        if ((ulong)pppppuVar7 >> 0x3e != 0) {
          FUN_1073bc408();
          goto LAB_1073b8594;
        }
        FUN_1073bc414();
        uStack_120 = SUB81(pppppuVar7,0);
        uStack_11f = (undefined7)((ulong)pppppuVar7 >> 8);
        lVar8 = (long)pppppuVar7 + lVar8 * 4;
        uStack_118 = (undefined1)lVar8;
        uStack_117 = (undefined7)((ulong)lVar8 >> 8);
        ppppuStack_128 = pppppuVar7;
        _memmove();
        uStack_120 = (undefined1)((long)pppppuVar7 + lVar11);
        uStack_11f = (undefined7)((ulong)((long)pppppuVar7 + lVar11) >> 8);
      }
    }
    if (cStack_e0 == *(char *)(param_3 + 0x12)) {
      if (cStack_e0 != '\0') {
        func_0x0001073bf2e8();
        func_0x0001006202b4(auStack_100,param_3 + 0xe);
        uStack_e8 = param_3[0x11];
      }
    }
    else if (cStack_e0 == '\0') {
      func_0x0001073bf2e8();
      func_0x00010054f8dc(auStack_100,param_3 + 0xe);
      uStack_e8 = param_3[0x11];
      cStack_e0 = '\x01';
    }
    else {
      func_0x0001073bc90c(auStack_110);
    }
    ppppuVar5 = ppppuStack_a8;
    if (&uStack_170 != param_3) {
      lVar11 = param_3[0x19];
      lVar8 = param_3[0x1a];
      uVar12 = lVar8 - lVar11;
      if ((ulong)((long)ppppuStack_98 - (long)ppppuStack_a8) < uVar12) {
        if ((undefined8 *****)ppppuStack_a8 != (undefined8 *****)0x0) {
          ppppuStack_a0 = ppppuStack_a8;
          __ZdlPv(ppppuStack_a8);
          ppppuStack_a8 = (undefined8 *****)0x0;
          ppppuStack_a0 = (undefined8 *****)0x0;
          ppppuStack_98 = (undefined8 *****)0x0;
        }
        lVar9 = (long)uVar12 >> 6;
        pppppuVar7 = &ppppuStack_a8;
        FUN_1073bcbe8();
        if ((ulong)pppppuVar7 >> 0x3a != 0) {
          func_0x0001073bcc28();
LAB_1073b8594:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1073b8598);
          (*pcVar6)();
        }
        FUN_1073bcc34();
        ppppuStack_98 = pppppuVar7 + lVar9 * 8;
        ppppuStack_a0 = pppppuVar7;
        ppppuStack_a8 = pppppuVar7;
        if (lVar8 != lVar11) {
LAB_1073b8388:
          ppppuVar5 = ppppuStack_a0;
          _memmove(ppppuStack_a0,lVar11,uVar12);
          ppppuStack_a0 = ppppuVar5;
        }
      }
      else {
        uVar16 = (long)ppppuStack_a0 - (long)ppppuStack_a8;
        if (uVar12 <= uVar16) {
          if (lVar8 != lVar11) {
            _memmove(ppppuStack_a8,lVar11,uVar12);
          }
          ppppuStack_a0 = (undefined8 ****)((long)ppppuVar5 + uVar12);
          goto LAB_1073b8410;
        }
        if (ppppuStack_a0 != ppppuStack_a8) {
          _memmove(ppppuStack_a8,lVar11,uVar16);
        }
        lVar11 = lVar11 + uVar16;
        uVar12 = lVar8 - lVar11;
        if (uVar12 != 0) goto LAB_1073b8388;
      }
      ppppuStack_a0 = (undefined8 ****)((long)ppppuStack_a0 + uVar12);
    }
LAB_1073b8410:
    func_0x00010730b9d0(alStack_158 + 3,(ulong)uVar4);
    uStack_d0 = param_3[0x14];
    uStack_d8 = param_3[0x13];
    uStack_c8 = param_3[0x15];
    uStack_c0 = (undefined5)param_3[0x16];
    uStack_b3 = *(ulong *)((long)param_3 + 0xbd);
    uStack_bb = (undefined3)*(undefined8 *)((long)param_3 + 0xb5);
    uStack_b8 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0xb5) >> 0x18);
    uStack_178 = 0;
    for (lVar11 = 0; lVar11 != 0x40; lVar11 = lVar11 + 8) {
      *(undefined8 *)((long)aiStack_1b8 + lVar11) = 0xffffffffffffffff;
    }
    uVar16 = uStack_178;
    for (uVar12 = 0; uVar12 != uVar4; uVar12 = uVar12 + 1) {
      iVar3 = *(int *)(*param_2 + (ulong)(uVar15 + (int)uVar12) * 4);
      iVar14 = (int)((ulong)(lStack_80 - lStack_88) >> 2);
      lVar11 = 8;
      piVar13 = (int *)((ulong)aiStack_1b8 | 4);
      do {
        if (piVar13[-1] == iVar3) {
          iVar14 = *piVar13;
          goto LAB_1073b84d0;
        }
        piVar13 = piVar13 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      aiStack_1b8[uVar16 * 2] = iVar3;
      aiStack_1b8[uVar16 * 2 + 1] = iVar14;
      iStack_1bc = iVar3 * param_4;
      func_0x00010014b0ec(&lStack_88,&iStack_1bc);
      uVar16 = (ulong)((int)uVar16 + 1) & 7;
LAB_1073b84d0:
      iStack_1bc = CONCAT22(iStack_1bc._2_2_,(short)iVar14);
      func_0x0001073bc970(alStack_158 + 3,&iStack_1bc);
    }
    lVar8 = lStack_80 - lStack_88 >> 2;
    func_0x000100651cb4(alStack_158,lVar8 * (ulong)param_4);
    uVar12 = 0;
    for (lVar11 = 0; lVar8 != lVar11; lVar11 = lVar11 + 1) {
      _memcpy(alStack_158[0] + uVar12,param_3[3] + (ulong)*(uint *)(lStack_88 + lVar11 * 4),
              (ulong)param_4);
      uVar12 = (ulong)((int)uVar12 + param_4);
    }
    lStack_80 = lStack_88;
    func_0x0001073bf224(*param_1);
    uVar15 = uVar4 + uVar15;
    func_0x0001073bf0f8();
  } while( true );
}



/* Entry: 1073b85c4; end: 1073b935b;  */

long * FUN_1073b85c4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,
                    long *param_5)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  bool bVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined *puVar25;
  int extraout_w8;
  undefined8 extraout_x8;
  long *plVar26;
  long lVar27;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  long lVar28;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  ulong uVar29;
  ulong extraout_x12;
  ulong uVar30;
  ulong extraout_x13;
  long lVar31;
  undefined4 *unaff_x21;
  undefined4 *puVar32;
  undefined4 *unaff_x22;
  undefined8 *unaff_x23;
  undefined4 *puVar33;
  undefined4 uVar34;
  undefined8 uVar36;
  float fVar37;
  undefined8 in_d3;
  float unaff_s9;
  float unaff_s10;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 in_stack_00000090;
  long lStack_770;
  long lStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 *puStack_750;
  undefined4 *puStack_748;
  long *plStack_740;
  undefined8 *puStack_738;
  undefined4 *puStack_730;
  undefined4 *puStack_728;
  undefined8 *puStack_720;
  long *plStack_718;
  undefined1 *puStack_710;
  code *pcStack_708;
  undefined8 *puStack_700;
  code *pcStack_6f8;
  float fStack_6ac;
  float fStack_6a8;
  float fStack_6a4;
  float fStack_6a0;
  undefined4 uStack_69c;
  float fStack_698;
  float fStack_694;
  long lStack_680;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  float fStack_608;
  float fStack_604;
  float fStack_600;
  undefined4 uStack_5fc;
  float fStack_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float fStack_5e8;
  float fStack_5e4;
  undefined4 uStack_5e0;
  undefined8 uStack_5dc;
  undefined4 uStack_5d4;
  long lStack_5d0;
  long lStack_5c8;
  long alStack_5c0 [3];
  long *plStack_5a8;
  long alStack_578 [3];
  long lStack_560;
  long alStack_530 [3];
  long lStack_518;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long alStack_4d0 [3];
  long lStack_4b8;
  long alStack_488 [3];
  long lStack_470;
  long alStack_440 [3];
  long lStack_428;
  long alStack_3f8 [3];
  long lStack_3e0;
  long lStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 *puStack_398;
  long lStack_390;
  undefined8 uStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long alStack_360 [5];
  undefined4 uStack_338;
  undefined4 uStack_334;
  float fStack_330;
  undefined2 uStack_32a;
  long lStack_328;
  long lStack_320;
  undefined8 uStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
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
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined8 uStack_247;
  undefined1 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  byte bStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_18;
  undefined8 uVar35;
  
  func_0x0001073bedf4();
  puVar11 = param_1;
  puVar20 = param_2;
  func_0x0001073beeb4();
  puVar33 = (undefined4 *)CONCAT44(*(undefined4 *)(puVar20 + 4),*(undefined4 *)(puVar20 + 3));
  uStack_18 = extraout_x8;
  FUN_1073b6c94(puVar11[0xb],puVar33);
  uStack_2a8 = param_2[0x3e];
  uStack_2b0 = param_2[0x3d];
  plVar12 = (long *)param_1[0xb];
  puVar11 = &uStack_2b0;
  plVar26 = param_5;
  FUN_1073b6cb8(plVar12,puVar11,puVar33);
  func_0x0001073bedc0();
  uVar9 = (int)plVar12 == 3;
  puVar32 = unaff_x21;
  if (!(bool)uVar9) {
    unaff_x22 = (undefined4 *)((long)(param_2[0x11] - param_2[0x10]) / 0x14);
    if (param_4 == 0) {
      lVar31 = 0;
    }
    else {
      func_0x0001073bf390();
      lVar31 = param_4;
      func_0x0001073befc8();
    }
    plVar26 = param_2 + 9;
    do {
      plVar26 = (long *)*plVar26;
      if (plVar26 == (long *)0x0) {
        fVar3 = 8192.0;
        goto LAB_1073b86b4;
      }
      lVar28 = plVar26[3];
    } while (((lVar28 == 0) || (*(long **)(lVar28 + 0x40) == *(long **)(lVar28 + 0x48))) ||
            (plVar12 = (long *)**(long **)(lVar28 + 0x40), plVar12 == (long *)0x0));
    (**(code **)(*plVar12 + 0x48))();
    fVar3 = (float)(int)plVar12;
LAB_1073b86b4:
    uVar36 = 0x41831bf8457c1093;
    lStack_2c0 = 0;
    lStack_2c8 = 0;
    uStack_2b8 = 0;
    lStack_2d8 = 0;
    lStack_2e0 = 0;
    uStack_2d0 = 0;
    lStack_2f0 = 0;
    lStack_2f8 = 0;
    uStack_2e8 = 0;
    fVar3 = fVar3 / (40075016.0 / (float)(1 << (ulong)(uStack_2b0._4_1_ & 0x1f)));
    lStack_308 = 0;
    lStack_310 = 0;
    uStack_300 = 0;
    lStack_320 = 0;
    lStack_328 = 0;
    uStack_318 = 0;
    uStack_32a = 0;
    uVar34 = 0;
    uVar35 = 0;
    if (*(int *)(lVar31 + 0x618) != 0) {
      uVar34 = 0x3f800000;
    }
    uStack_338 = 0x3f800000;
    plVar26 = param_2 + 0x22;
    uStack_334 = uVar34;
    fStack_330 = fVar3;
    FUN_1073b935c(plVar26,*(long *)(param_4 + 0x18) + 8);
    lVar27 = *(long *)(param_4 + 8);
    FUN_1073be238(alStack_360,0x17,plVar26,lVar27 + 0x28);
    uStack_370 = 0;
    uStack_388 = 0;
    lStack_390 = 0;
    uStack_378 = 0;
    plStack_380 = (long *)0x0;
    lStack_3a8 = 0;
    lStack_3b0 = 0;
    puStack_398 = (undefined8 *)0x0;
    uStack_3a0 = 0;
    FUN_107380640(&plStack_380,8);
    FUN_107380640(&puStack_398,8);
    lVar13 = *plVar26;
    func_0x0001073bee24();
    (*extraout_x8_00)();
    *plStack_380 = lVar13;
    lVar14 = plVar26[1];
    func_0x0001073bee24();
    (*extraout_x8_01)();
    plStack_380[1] = lVar14;
    lVar15 = plVar26[2];
    func_0x0001073bee24();
    (*extraout_x8_02)();
    plStack_380[2] = lVar15;
    lVar16 = plVar26[3];
    func_0x0001073bee24();
    (*extraout_x8_03)();
    plStack_380[3] = lVar16;
    lVar17 = plVar26[4];
    func_0x0001073bee24();
    (*extraout_x8_04)();
    plStack_380[4] = lVar17;
    lVar18 = plVar26[5];
    func_0x0001073bee24();
    (*extraout_x8_05)();
    plStack_380[5] = lVar18;
    lVar19 = plVar26[6];
    func_0x0001073bee24();
    (*extraout_x8_06)();
    plStack_380[6] = lVar19;
    lVar28 = plVar26[7];
    func_0x0001073bee24();
    (*extraout_x8_07)();
    plStack_380[7] = lVar28;
    *puStack_398 = 0;
    uVar29 = lStack_390 - (long)puStack_398 >> 3;
    uVar30 = 1;
    while( true ) {
      fVar39 = (float)uVar35;
      fVar42 = (float)uVar36;
      fVar37 = (float)in_d3;
      if (uVar29 <= uVar30) break;
      func_0x0001073bf37c();
      lVar28 = extraout_x8_08;
      uVar29 = extraout_x12;
      uVar30 = extraout_x13;
    }
    func_0x000100651cb4(&lStack_3b0,
                        lVar14 + lVar13 + lVar15 + lVar16 + lVar17 + lVar18 + lVar19 + lVar28);
    uStack_2a0 = &plStack_380;
    uStack_298 = &puStack_398;
    uStack_290 = &lStack_3b0;
    func_0x0001073be518(&uStack_2a0,*plVar26,0);
    func_0x0001073be544(&uStack_2a0,plVar26[1],1);
    func_0x0001073be518(&uStack_2a0,plVar26[2],2);
    if ((plStack_380[3] != 0) && ((ulong)puStack_398[3] < (ulong)(lStack_3a8 - lStack_3b0))) {
      func_0x0001073bf0ec(plVar26[3]);
      func_0x0001073bef80();
    }
    func_0x0001073be518(&uStack_2a0,plVar26[4],4);
    func_0x0001073be518(&uStack_2a0,plVar26[5],5);
    func_0x0001073be544(&uStack_2a0,plVar26[6],6);
    func_0x0001073be544(&uStack_2a0,plVar26[7],7);
    func_0x0001073bef20(alStack_3f8);
    fVar5 = 1.0;
    if (*(int *)(alStack_360[0] + 0x14) == 2) {
      FUN_1073bdb98();
      func_0x0001073bf03c(alStack_3f8[0] + *(long *)(lStack_3e0 + 8));
      fStack_694 = 1.0;
      fVar4 = 1.0;
      fStack_698 = 1.0;
    }
    else {
      fStack_694 = 1.0;
      fStack_698 = 1.0;
      fVar4 = 1.0;
      if (*(int *)(alStack_360[0] + 0x14) == 1) {
        fStack_694 = 1.0;
        func_0x0001073bee84(plVar26[1]);
        (*extraout_x8_09)();
        fStack_698 = fVar37;
        fVar4 = fVar42;
        fVar5 = fVar39;
      }
    }
    FUN_1073bc368(alStack_3f8);
    func_0x0001073bef20(alStack_440);
    uStack_69c = 0x3f800000;
    if (*(int *)(alStack_360[0] + 0x50) == 2) {
      FUN_1073bdb98();
      func_0x0001073bf03c(alStack_440[0] + *(long *)(lStack_428 + 0x30));
      fStack_6a4 = 1.0;
      fStack_6a0 = 1.0;
      fStack_6a8 = 1.0;
    }
    else {
      fStack_6a4 = 1.0;
      fStack_6a0 = 1.0;
      fStack_6a8 = 1.0;
      if (*(int *)(alStack_360[0] + 0x50) == 1) {
        uStack_69c = 0x3f800000;
        func_0x0001073bee84(plVar26[6]);
        (*extraout_x8_10)();
        fStack_6a8 = fVar37;
        fStack_6a4 = fVar42;
        fStack_6a0 = fVar39;
      }
    }
    FUN_1073bc368(alStack_440);
    func_0x0001073bef20(alStack_488);
    fVar37 = 1.0;
    fStack_6ac = 1.0;
    if (*(int *)(alStack_360[0] + 0x5c) == 2) {
      FUN_1073bdb98();
      func_0x0001073bf03c(alStack_488[0] + *(long *)(lStack_470 + 0x38));
      func_0x0001073bf308();
    }
    else {
      func_0x0001073bf308();
      if (extraout_w8 == 1) {
        unaff_s10 = fVar42;
        unaff_s9 = fVar39;
        func_0x0001073bee84(plVar26[7]);
        (*extraout_x8_11)();
        fVar39 = unaff_s9;
        fStack_6ac = fVar37;
      }
    }
    FUN_1073bc368(alStack_488);
    if (*(int *)(lVar31 + 0x290) == 0) {
      FUN_10742c194(&uStack_2a0);
      fVar42 = (float)uStack_200;
      fVar41 = uStack_200._4_4_;
      FUN_1073bc9f0(&uStack_2a0);
    }
    else {
      uStack_298 = (undefined8 **)0x0;
      uStack_2a0 = (long **)0x0;
      uStack_290 = (long *)0x0;
      func_0x0001073bef20(alStack_4d0);
      fVar41 = 1.0;
      if (*(int *)(alStack_360[0] + 0x2c) == 2) {
        FUN_1073bdb98();
        func_0x0001073bf240(alStack_4d0[0] + *(long *)(lStack_4b8 + 0x18));
        fVar42 = 1.0;
      }
      else {
        fVar42 = 1.0;
        if (*(int *)(alStack_360[0] + 0x2c) == 1) {
          fVar41 = fVar39;
          fVar42 = fVar37;
          func_0x0001073bee84(plVar26[3]);
          (*extraout_x8_12)();
          fVar37 = fVar42;
        }
      }
      FUN_1073bc368(alStack_4d0);
      FUN_1073bc7a8(&uStack_2a0);
    }
    uStack_4e0 = 0;
    uStack_4e8 = 0;
    uStack_4d8 = 0;
    func_0x0001073bef20(alStack_530);
    fVar39 = 1.0;
    if (*(int *)(alStack_360[0] + 0x38) == 2) {
      FUN_1073bdb98();
      func_0x0001073beedc(alStack_530[0] + *(long *)(lStack_518 + 0x20));
    }
    else if (*(int *)(alStack_360[0] + 0x38) == 1) {
      fVar39 = fVar37;
      func_0x0001073bee84(plVar26[4]);
      (*extraout_x8_13)();
      fVar37 = fVar39;
    }
    FUN_1073bc368(alStack_530);
    func_0x0001073bef20(alStack_578);
    fVar38 = 0.0;
    if (*(int *)(alStack_360[0] + 0x20) == 2) {
      FUN_1073bdb98();
      func_0x0001073beedc(alStack_578[0] + *(long *)(lStack_560 + 0x10));
    }
    else if (*(int *)(alStack_360[0] + 0x20) == 1) {
      fVar38 = fVar37;
      func_0x0001073bee84(plVar26[2]);
      (*extraout_x8_14)();
      fVar37 = fVar38;
    }
    FUN_1073bc368(alStack_578);
    func_0x0001073bef20(alStack_5c0);
    fVar40 = 0.0;
    if (*(int *)(alStack_360[0] + 8) == 2) {
      FUN_1073bdb98();
      func_0x0001073beedc(alStack_5c0[0] + *plStack_5a8);
    }
    else if (*(int *)(alStack_360[0] + 8) == 1) {
      fVar40 = fVar37;
      func_0x0001073bee84(*plVar26);
      (*extraout_x8_15)();
    }
    FUN_1073bc368(alStack_5c0);
    uStack_338 = NEON_ucvtf((uint)*(byte *)(lVar27 + 0x211));
    lVar28 = *(long *)(param_2[9] + 0x18);
    uStack_32a = CONCAT11(*(undefined1 *)(lVar28 + 0x3a),*(undefined1 *)(lVar28 + 0x38));
    uStack_334 = uVar34;
    fStack_330 = fVar3;
    FUN_1073b7048(&lStack_5d0,3,(ulong)&uStack_2b0 | 4,param_5,*(undefined4 *)(param_1 + 10),puVar33
                 );
    param_1 = &uStack_2a0;
    uStack_210 = 0;
    uStack_208 = uStack_208 & 0xffffffffffffff00;
    bStack_1dc = 0;
    uStack_280 = 0;
    uStack_288 = 0;
    uStack_270 = 0;
    uStack_278 = 0;
    uStack_260 = 0;
    uStack_268 = 0;
    uStack_250 = 0;
    uStack_258 = 0;
    uStack_247 = 0;
    uStack_24f = 0;
    uStack_248 = 0;
    uStack_1c8 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_2a0 = (long **)CONCAT44(fVar5 * fVar39,fStack_694 * fVar39);
    uStack_298 = (undefined8 **)CONCAT44(fStack_698 * fVar39,fVar4 * fVar39);
    uStack_290 = (long *)CONCAT44(fVar41,fVar42);
    puVar11 = &uStack_258;
    func_0x0001073bf034(puVar11,0x501);
    puVar20 = &uStack_258;
    func_0x0001073bf034(puVar20,0x502);
    unaff_x23 = &uStack_258;
    func_0x0001073bee60();
    puVar21 = &uStack_258;
    func_0x0001073beee4(puVar21,0x505);
    puVar22 = &uStack_258;
    func_0x0001073beee4(puVar22,0x506);
    puVar23 = &uStack_258;
    func_0x0001073bf034(puVar23,0x507);
    param_5 = (long *)((long)puVar20 + (long)puVar11 + (long)unaff_x23 + (long)puVar21 +
                      (long)puVar22 + (long)puVar23);
    if (uStack_32a._1_1_ == '\x01') {
      if ((bStack_1dc & 1) == 0) {
        bStack_1dc = 1;
      }
      uStack_200 = 0x3f80000000000000;
      uStack_208 = 0x3f800000;
      bVar10 = *(int *)(lVar31 + 0xe48) != 0;
      lVar28 = 0x32c;
      if (bVar10) {
        lVar28 = 0x334;
      }
      lVar13 = 0x330;
      if (bVar10) {
        lVar13 = 0x338;
      }
      uStack_1f4 = *(undefined4 *)(lVar27 + lVar13);
      uStack_1f8 = *(undefined4 *)(lVar27 + lVar28);
      bVar10 = *(int *)(lVar31 + 0xd70) != 0;
      lVar28 = 0x174;
      if (bVar10) {
        lVar28 = 0x30c;
      }
      lVar13 = 0x178;
      if (bVar10) {
        lVar13 = 0x310;
      }
      uStack_1ec = *(undefined4 *)(lVar27 + lVar13);
      uStack_1f0 = *(undefined4 *)(lVar27 + lVar28);
      lVar28 = 0x170;
      if (*(int *)(lVar31 + 0x988) != 0) {
        lVar28 = 0x294;
      }
      uStack_1e8 = *(undefined4 *)(lVar27 + lVar28);
      lVar28 = 0x168;
      if (*(int *)(lVar31 + 0x8b8) != 0) {
        lVar28 = 0x274;
      }
      uStack_1e4 = *(undefined4 *)(lVar27 + lVar28);
      lVar28 = 0x16c;
      if (*(int *)(lVar31 + 0x920) != 0) {
        lVar28 = 0x284;
      }
      uStack_1e0 = *(undefined4 *)(lVar27 + lVar28);
    }
    func_0x00010089a97c(&uStack_288,(long)param_5 * (long)unaff_x22);
    lVar31 = 0;
    puVar32 = (undefined4 *)0x0;
    for (puVar33 = (undefined4 *)0x0; unaff_x22 != puVar33;
        puVar33 = (undefined4 *)((long)puVar33 + 1)) {
      puVar1 = (undefined4 *)(param_2[0x10] + (long)puVar32);
      uStack_5e0 = *puVar1;
      uStack_5dc = *(undefined8 *)(puVar1 + 1);
      uStack_5d4 = puVar1[3];
      fStack_604 = fVar4;
      fStack_60c = fStack_694;
      fStack_608 = fVar5;
      fStack_600 = fStack_698;
      if (lStack_2c8 != lStack_2c0) {
        pfVar2 = (float *)(lStack_2c8 + lVar31);
        fStack_60c = *pfVar2;
        fStack_608 = pfVar2[1];
        fStack_604 = pfVar2[2];
        fStack_600 = pfVar2[3];
      }
      fStack_5f4 = fStack_6a4;
      uStack_5fc = uStack_69c;
      fStack_5f8 = fStack_6a0;
      fStack_5f0 = fStack_6a8;
      if (lStack_2e0 != lStack_2d8) {
        puVar1 = (undefined4 *)(lStack_2e0 + lVar31);
        uStack_5fc = *puVar1;
        fStack_5f8 = (float)puVar1[1];
        fStack_5f4 = (float)puVar1[2];
        fStack_5f0 = (float)puVar1[3];
      }
      fStack_5ec = fStack_6ac;
      fStack_5e8 = unaff_s9;
      fStack_5e4 = unaff_s10;
      if (lStack_328 != lStack_320) {
        pfVar2 = (float *)(lStack_328 + lVar31);
        fStack_5ec = *pfVar2;
        fStack_5e8 = pfVar2[1];
        fStack_5e4 = pfVar2[2];
      }
      fStack_614 = fVar40;
      if (lStack_310 != lStack_308) {
        fStack_614 = *(float *)(lStack_310 + (long)puVar33 * 4);
      }
      fStack_610 = fVar38;
      if (lStack_2f8 != lStack_2f0) {
        fStack_610 = *(float *)(lStack_2f8 + (long)puVar33 * 4);
      }
      FUN_1073b5acc(&uStack_658,&uStack_32a,&uStack_5e0,&uStack_338,&fStack_614);
      uVar8 = uStack_634;
      uVar7 = uStack_638;
      uVar6 = uStack_63c;
      uVar34 = uStack_640;
      func_0x0001073bf21c(uStack_658,uStack_654,uStack_650);
      func_0x0001073bf21c(uStack_64c,uStack_648,uStack_644);
      FUN_1073b72bc(uVar34,uVar6,uVar7,uVar8);
      func_0x0001073bef3c();
      func_0x0001073bf12c(&uStack_288);
      func_0x0001073b814c(uStack_630,uStack_62c,&uStack_288);
      func_0x0001073b814c(uStack_628,uStack_624,&uStack_288);
      func_0x0001073bf21c(uStack_620,uStack_61c,uStack_618);
      puVar32 = puVar32 + 5;
      lVar31 = lVar31 + 0x10;
    }
    uVar9 = unaff_x22 == (undefined4 *)0xffff;
    if (unaff_x22 < (undefined4 *)0xffff) {
      func_0x00010730b9d0(&uStack_270,(long)(param_2[0x15] - param_2[0x14]) >> 2);
      unaff_x22 = (undefined4 *)param_2[0x15];
      for (puVar32 = (undefined4 *)param_2[0x14]; uVar9 = puVar32 == unaff_x22, !(bool)uVar9;
          puVar32 = puVar32 + 1) {
        uStack_658 = CONCAT22(uStack_658._2_2_,(short)*puVar32);
        func_0x0001073bc970(&uStack_270,&uStack_658);
      }
      FUN_1073b7380(lStack_5d0 + 0x48,&uStack_2a0);
    }
    else {
      lStack_668 = lStack_5c8;
      lStack_670 = lStack_5d0;
      if (lStack_5c8 != 0) {
        do {
          func_0x0001073becf8();
        } while (extraout_w10 != 0);
      }
      FUN_1073b8178(&lStack_670,param_2 + 0x14,&uStack_2a0,param_5);
      func_0x0001073bd444(&lStack_670);
    }
    lStack_678 = lStack_5c8;
    lStack_680 = lStack_5d0;
    if (lStack_5c8 != 0) {
      do {
        func_0x0001073becf8();
      } while (extraout_w10_00 != 0);
    }
    plVar26 = &lStack_680;
    puVar11 = param_2;
    func_0x0001073beff0(unaff_x21,param_2,param_4);
    func_0x0001073bd444(&lStack_680);
    FUN_1073bc6e4(&uStack_2a0);
    func_0x0001073bf0dc();
    func_0x0001056d1ce4(&uStack_4e8);
    FUN_1073bc368(&lStack_3b0);
    func_0x0001073bc770(alStack_360);
    FUN_1073bc7e0(&lStack_328);
    func_0x0001056d1ce4(&lStack_310);
    func_0x0001056d1ce4(&lStack_2f8);
    FUN_1073bc7e0(&lStack_2e0);
    plVar12 = &lStack_2c8;
    FUN_1073bc7e0();
  }
  func_0x0001073bed60(uStack_18);
  if ((bool)uVar9) {
    return plVar12;
  }
  ___stack_chk_fail();
  FUN_1073bc368(&lStack_3b0);
  func_0x0001073bc770(alStack_360);
  FUN_1073bc7e0(&lStack_328);
  func_0x0001056d1ce4(&lStack_310);
  func_0x0001056d1ce4(&lStack_2f8);
  FUN_1073bc7e0(&lStack_2e0);
  plVar24 = &lStack_2c8;
  FUN_1073bc7e0();
  func_0x0001073bedec();
  pcStack_6f8 = FUN_1073b935c;
  puStack_700 = &stack0x00000090;
  FUN_1073be170();
  if (plVar24 != (long *)0x0) {
    return plVar24 + 9;
  }
  puVar25 = &UNK_10f639994;
  func_0x000104c03f28();
  pcStack_708 = FUN_1073b9384;
  puStack_750 = param_1;
  puStack_748 = puVar33;
  plStack_740 = param_5;
  puStack_738 = unaff_x23;
  puStack_730 = unaff_x22;
  puStack_728 = puVar32;
  puStack_720 = param_2;
  plStack_718 = plVar12;
  puStack_710 = (undefined1 *)&puStack_700;
  func_0x0001073befd8();
  uStack_758 = puVar11[0x23];
  uStack_760 = puVar11[0x22];
  plVar12 = *(long **)(puVar25 + 0x58);
  func_0x0001073befac(plVar12,&uStack_760);
  func_0x0001073bedc0();
  if ((int)plVar12 != 3) {
    func_0x0001073bf390();
    func_0x0001073befc8();
    if (((plVar26[0x14a] != 0) || (plVar26[0x14f] != 0)) ||
       ((plVar26[0x154] != 0 || (plVar12 = plVar26, plVar26[0x159] != 0)))) {
      func_0x0001073bef64(&lStack_770,6,(ulong)&uStack_760 | 4);
      func_0x0001073bf2fc();
      FUN_1073b94b8();
      func_0x0001073bf2fc();
      FUN_1073b94b8();
      func_0x0001073bf2fc();
      FUN_1073b94b8();
      func_0x0001073bf2fc();
      FUN_1073b94b8();
      if (lStack_768 != 0) {
        do {
          func_0x0001073becf8();
        } while (extraout_w10_01 != 0);
      }
      func_0x0001073bef4c();
      func_0x0001073bef28();
      plVar12 = &lStack_770;
      func_0x0001073bd444(plVar12);
    }
  }
  return plVar12;
}



/* Entry: 1073b935c; end: 1073b9383;  */

undefined1 * FUN_1073b935c(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int extraout_w10;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_1073be170();
  if (param_1 == 0) {
    puVar1 = &UNK_10f639994;
    func_0x000104c03f28();
    func_0x0001073befd8();
    uStack_68 = *(undefined8 *)(param_2 + 0x118);
    uStack_70 = *(undefined8 *)(param_2 + 0x110);
    puVar2 = *(undefined1 **)(puVar1 + 0x58);
    func_0x0001073befac(puVar2,&uStack_70);
    func_0x0001073bedc0();
    if ((int)puVar2 != 3) {
      func_0x0001073bf390();
      func_0x0001073befc8();
      if ((((*(long *)(param_4 + 0xa50) != 0) || (*(long *)(param_4 + 0xa78) != 0)) ||
          (*(long *)(param_4 + 0xaa0) != 0)) || (puVar2 = param_4, *(long *)(param_4 + 0xac8) != 0))
      {
        func_0x0001073bef64(auStack_80,6,(ulong)&uStack_70 | 4);
        func_0x0001073bf2fc();
        FUN_1073b94b8();
        func_0x0001073bf2fc();
        FUN_1073b94b8();
        func_0x0001073bf2fc();
        FUN_1073b94b8();
        func_0x0001073bf2fc();
        FUN_1073b94b8();
        if (lStack_78 != 0) {
          do {
            func_0x0001073becf8();
          } while (extraout_w10 != 0);
        }
        func_0x0001073bef4c();
        func_0x0001073bef28();
        puVar2 = auStack_80;
        func_0x0001073bd444(puVar2);
      }
    }
    return puVar2;
  }
  return (undefined1 *)(param_1 + 0x48);
}



/* Entry: 1073b9384; end: 1073b94b7;  */

void FUN_1073b9384(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001073befd8();
  uStack_58 = *(undefined8 *)(param_2 + 0x118);
  uStack_60 = *(undefined8 *)(param_2 + 0x110);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x0001073befac(uVar2,&uStack_60);
  iVar1 = (int)uVar2;
  func_0x0001073bedc0();
  if (iVar1 != 3) {
    func_0x0001073bf390();
    func_0x0001073befc8();
    if ((((*(long *)(param_4 + 0xa50) != 0) || (*(long *)(param_4 + 0xa78) != 0)) ||
        (*(long *)(param_4 + 0xaa0) != 0)) || (*(long *)(param_4 + 0xac8) != 0)) {
      func_0x0001073bef64(auStack_70,6,(ulong)&uStack_60 | 4);
      func_0x0001073bf2fc();
      FUN_1073b94b8();
      func_0x0001073bf2fc();
      FUN_1073b94b8();
      func_0x0001073bf2fc();
      FUN_1073b94b8();
      func_0x0001073bf2fc();
      FUN_1073b94b8();
      if (lStack_68 != 0) {
        do {
          func_0x0001073becf8();
        } while (extraout_w10 != 0);
      }
      func_0x0001073bef4c();
      func_0x0001073bef28();
      func_0x0001073bd444(auStack_70);
    }
  }
  return;
}



/* Entry: 1073b94b8; end: 1073b9867;  */

void FUN_1073b94b8(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar16 = (long *)(param_3 + 0x10);
  do {
    do {
      do {
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) {
          return;
        }
        uVar13 = 0;
        lVar11 = plVar16[0x14];
        for (lVar14 = plVar16[0x13]; lVar14 != lVar11; lVar14 = lVar14 + 0x174) {
          uVar5 = (int)lVar14 + 0x164;
          func_0x0001073bf100();
          uVar13 = uVar5 | uVar13;
        }
        lVar11 = plVar16[0x17];
        for (lVar14 = plVar16[0x16]; lVar14 != lVar11; lVar14 = lVar14 + 0x5c) {
          uVar5 = (int)lVar14 + 0x4c;
          func_0x0001073bf100();
          uVar13 = uVar5 | uVar13;
        }
      } while ((uVar13 & 1) == 0);
      uVar7 = (ulong)(plVar16 + 8);
      func_0x000104c2d614();
    } while (((uVar7 & 1) != 0) ||
            (lVar14 = plVar16[5],
            (ulong)(*(long *)(lVar14 + 0x38) - *(long *)(lVar14 + 0x30) >> 2) <=
            (ulong)*(uint *)((long)plVar16 + 0x24)));
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    func_0x00010724ef84(auStack_c0,plVar16 + 8);
    func_0x000100066230(&uStack_a8,auStack_c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
    uStack_80 = plVar16[3];
    uStack_8c = *(uint *)(plVar16 + 4);
    uStack_90 = *(uint *)(*(long *)(lVar14 + 0x30) + (ulong)*(uint *)((long)plVar16 + 0x24) * 4);
    if (((ulong)uStack_90 < (ulong)((*(long *)(lVar14 + 0x50) - *(long *)(lVar14 + 0x48)) / 0x90))
       && (lVar11 = *(long *)(lVar14 + 0x48) + (ulong)uStack_90 * 0x90,
          lVar14 = *(long *)(lVar11 + 0x18),
          (ulong)uStack_8c < (ulong)((*(long *)(lVar11 + 0x20) - lVar14) / 0x1f0))) {
      lVar14 = lVar14 + (ulong)uStack_8c * 0x1f0;
      uStack_88 = *(undefined4 *)(lVar14 + 0x160);
      if (*(char *)(plVar16 + 0x12) == '\x01') {
        lVar11 = (long)(plVar16 + 0xf);
        func_0x00010549026c(lVar11);
        lVar14 = lVar14 + 0x168;
        FUN_1073bcb20(lVar14,lVar11);
        if (lVar14 != 0) {
          uStack_88 = *(undefined4 *)(lVar14 + 0x28);
        }
      }
      lVar11 = plVar16[0x14];
      for (lVar14 = plVar16[0x13]; lVar14 != lVar11; lVar14 = lVar14 + 0x174) {
        iVar6 = (int)lVar14 + 0x164;
        func_0x0001073bf100();
        if (iVar6 != 0) {
          func_0x0001073bf298();
        }
      }
      lVar11 = plVar16[0x17];
      for (lVar14 = plVar16[0x16]; lVar14 != lVar11; lVar14 = lVar14 + 0x5c) {
        iVar6 = (int)lVar14 + 0x4c;
        func_0x0001073bf100();
        if (iVar6 != 0) {
          func_0x0001073bf298();
        }
      }
      lVar14 = *param_2;
      puVar9 = *(undefined8 **)(lVar14 + 0x80);
      if (puVar9 < *(undefined8 **)(lVar14 + 0x88)) {
        puVar9[2] = uStack_98;
        puVar9[1] = uStack_a0;
        *puVar9 = uStack_a8;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_a8 = 0;
        puVar9[4] = CONCAT44(uStack_84,uStack_88);
        puVar9[3] = CONCAT44(uStack_8c,uStack_90);
        puVar9[5] = uStack_80;
        puVar9[6] = 0;
        puVar9[7] = 0;
        puVar9[8] = 0;
        puVar9[7] = uStack_70;
        puVar9[6] = uStack_78;
        puVar9[8] = uStack_68;
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_68 = 0;
        puVar9 = puVar9 + 9;
      }
      else {
        lVar11 = (long)puVar9 - *(long *)(lVar14 + 0x78);
        uVar7 = lVar11 / 0x48 + 1;
        if (0x38e38e38e38e38e < uVar7) {
          FUN_1073bcca0();
LAB_1073b9840:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1073b9844);
          (*pcVar4)();
        }
        uVar3 = ((long)*(undefined8 **)(lVar14 + 0x88) - *(long *)(lVar14 + 0x78)) / 0x48;
        uVar12 = uVar3 * 2;
        if (uVar12 < uVar7 || uVar12 - uVar7 == 0) {
          uVar12 = uVar7;
        }
        if (0x1c71c71c71c71c6 < uVar3) {
          uVar12 = 0x38e38e38e38e38e;
        }
        if (uVar12 == 0) {
          lVar8 = 0;
        }
        else {
          if (0x38e38e38e38e38e < uVar12) {
            func_0x000104bd35f4();
            goto LAB_1073b9840;
          }
          lVar8 = uVar12 * 0x48;
          __Znwm();
        }
        puVar1 = (undefined8 *)(lVar8 + lVar11);
        puVar1[1] = uStack_a0;
        *puVar1 = uStack_a8;
        puVar1[2] = uStack_98;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_a8 = 0;
        puVar1[5] = uStack_80;
        puVar1[4] = CONCAT44(uStack_84,uStack_88);
        puVar1[3] = CONCAT44(uStack_8c,uStack_90);
        puVar1[7] = uStack_70;
        puVar1[6] = uStack_78;
        puVar1[8] = uStack_68;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_78 = 0;
        lVar15 = *(long *)(lVar14 + 0x78);
        lVar2 = *(long *)(lVar14 + 0x80);
        lVar10 = lVar2 - lVar15;
        puVar9 = puVar1 + (lVar10 / -0x48) * 9;
        for (lVar11 = lVar15; lVar11 != lVar2; lVar11 = lVar11 + 0x48) {
          FUN_1073bcc64(puVar9,lVar11);
          puVar9 = puVar9 + 9;
        }
        for (; lVar15 != lVar2; lVar15 = lVar15 + 0x48) {
          FUN_1073bccac(lVar15);
        }
        puVar9 = puVar1 + 9;
        lVar11 = *(long *)(lVar14 + 0x78);
        *(undefined8 **)(lVar14 + 0x78) = puVar1 + (lVar10 / -0x48) * 9;
        *(undefined8 **)(lVar14 + 0x80) = puVar9;
        *(ulong *)(lVar14 + 0x88) = lVar8 + uVar12 * 0x48;
        if (lVar11 != 0) {
          __ZdlPv();
        }
      }
      *(undefined8 **)(lVar14 + 0x80) = puVar9;
    }
    FUN_1073bccac(&uStack_a8);
  } while( true );
}



/* Entry: 1073b9868; end: 1073b9b37;  */

void FUN_1073b9868(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int extraout_w10;
  short *psVar8;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [48];
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined8 uStack_107;
  long lStack_d8;
  char cStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  uVar1 = *(uint *)(param_2 + 0x20);
  FUN_1073b6c94(*(undefined8 *)(param_1 + 0x58),CONCAT44(uVar1,*(undefined4 *)(param_2 + 0x18)));
  uVar7 = (ulong)*(byte *)(param_3 + 4);
  FUN_1073b9b38();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  lStack_70 = param_3;
  uStack_68 = uVar7;
  func_0x0001073befac(uVar4,&lStack_70);
  iVar3 = (int)uVar4;
  func_0x0001073bedc0();
  if ((iVar3 != 3) && ((*(byte *)(param_2 + 0x98) & 1) != 0)) {
    func_0x0001073bef64(&lStack_80,7,(ulong)&lStack_70 | 4);
    uStack_154 = *(undefined4 *)(*(long *)(param_4 + 8) + 0x30);
    cStack_d0 = '\0';
    uStack_c8 = 0;
    uStack_9c = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_107 = 0;
    uStack_10f = 0;
    uStack_108 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_160 = NEON_fmov(0x3f800000,4);
    uStack_158 = 0x3f800000;
    uStack_150 = 0;
    param_2 = param_2 + 0x80;
    FUN_1073b9c0c(param_2);
    FUN_1073b9b50(auStack_198,param_2);
    func_0x0001073bc89c((long)&uStack_107 + 7,auStack_198);
    func_0x0001073bc940(auStack_198);
    if (cStack_d0 == '\x01') {
      lStack_d8 = ((ulong)uVar1 << 0x20) + 0x100000000;
    }
    puVar5 = &uStack_118;
    func_0x0001073beee4(puVar5,0x501);
    puVar6 = &uStack_118;
    func_0x0001073beee4(puVar6,0x504);
    if ((bRam00000001136ca390 & 1) == 0) {
      iVar3 = 0x136ca390;
      ___cxa_guard_acquire();
      if (iVar3 != 0) {
        FUN_1075012f4(0x1136ca398,0x7f,0x2000);
        ___cxa_guard_release(0x1136ca390);
      }
    }
    func_0x00010089a97c(&uStack_148,
                        ((long)psRam00000001136ca3a0 - (long)psRam00000001136ca398 >> 2) *
                        ((long)puVar6 + (long)puVar5));
    psVar2 = psRam00000001136ca3a0;
    for (psVar8 = psRam00000001136ca398; psVar8 != psVar2; psVar8 = psVar8 + 2) {
      func_0x0001073b9c24((float)(int)*psVar8,(float)(int)psVar8[1],(float)(int)*psVar8 / 8192.0,
                          (float)(int)psVar8[1] / 8192.0,&uStack_148);
    }
    FUN_107501174(auStack_198,0x7f);
    func_0x0001073b734c(&uStack_130,auStack_190);
    func_0x00010730b05c(auStack_190);
    FUN_1073b7380(lStack_80 + 0x48,&uStack_160);
    if (lStack_78 != 0) {
      do {
        func_0x0001073becf8();
      } while (extraout_w10 != 0);
    }
    func_0x0001073bef4c();
    func_0x0001073bef28();
    FUN_1073bc6e4(&uStack_160);
    func_0x0001073bd444(&lStack_80);
  }
  return;
}



/* Entry: 1073b9b38; end: 1073b9b4f;  */

undefined1  [16] FUN_1073b9b38(undefined2 *param_1,undefined1 param_2)

{
  undefined1 auVar1 [16];
  undefined1 uStack_f;
  
  auVar1[1] = uStack_f;
  auVar1[0] = param_2;
  auVar1._2_2_ = *param_1;
  auVar1._4_8_ = *(undefined8 *)(param_1 + 2);
  auVar1._12_4_ = *(undefined4 *)(param_1 + 6);
  return auVar1;
}



/* Entry: 1073b9b50; end: 1073b9c0b;  */

void FUN_1073b9b50(undefined1 *param_1,long param_2)

{
  long lVar1;
  
  if (((*(int *)(param_2 + 4) == 0) || (*(int *)(param_2 + 8) == 0)) ||
     (lVar1 = *(long *)(param_2 + 0x10), *(long *)(lVar1 + 8) == 0)) {
    *param_1 = 0;
    param_1[0x30] = 0;
  }
  else {
    func_0x0001073da298(*(int *)(param_2 + 4),*(int *)(param_2 + 8),*(undefined1 *)(param_2 + 0xc));
    func_0x0001073bf254();
    func_0x0001073bf288(0,*(undefined8 *)(lVar1 + 8));
    func_0x0001073bf210();
    func_0x0001073bf0e4();
  }
  return;
}



/* Entry: 1073b9c0c; end: 1073b9c53;  */

void FUN_1073b9c0c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010089aa04();
  return;
}



/* Entry: 1073b9c54; end: 1073ba8b3;  */

void FUN_1073b9c54(undefined8 param_1,ulong param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [12];
  ulong *puVar7;
  code *pcVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  float *pfVar13;
  long lVar14;
  double *pdVar15;
  float fVar16;
  undefined8 extraout_x8;
  long lVar17;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long lVar18;
  ulong uVar19;
  undefined1 *puVar20;
  ulong extraout_x8_02;
  long lVar21;
  ulong uVar22;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  uint *puVar23;
  float *pfVar24;
  ulong extraout_x11;
  char *pcVar25;
  long extraout_x12;
  long lVar26;
  long lVar27;
  long lVar28;
  byte bVar29;
  long lVar30;
  long lVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  undefined8 uVar36;
  float fVar37;
  undefined8 uVar38;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s2_01;
  uint uVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 extraout_s3;
  undefined4 extraout_s3_00;
  undefined4 extraout_s3_01;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 in_stack_00000090;
  double dStack_2d0;
  double dStack_2c8;
  undefined1 uStack_2c0;
  undefined8 *puStack_2b0;
  code *pcStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  float fStack_290;
  float fStack_284;
  undefined8 uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  long lStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  uint uStack_22c;
  undefined4 uStack_228;
  float fStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  long *plStack_210;
  ulong uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  ulong uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  long lStack_1c0;
  long lStack_1b8;
  double dStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  double dStack_180;
  long lStack_178;
  long *plStack_170;
  long lStack_168;
  long *aplStack_160 [2];
  double dStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  long lStack_128;
  undefined1 uStack_100;
  long alStack_b8 [2];
  long lStack_a8;
  char acStack_a0 [8];
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  func_0x0001073bedf4();
  lVar17 = param_3;
  lVar28 = param_4;
  lStack_268 = param_6;
  func_0x0001073beeb4();
  uVar44 = *(uint *)(lVar28 + 0x20);
  uVar38 = CONCAT44(uVar44,*(undefined4 *)(lVar28 + 0x18));
  uStack_10 = extraout_x8;
  FUN_1073b6c94(*(undefined8 *)(lVar17 + 0x58),uVar38);
  uStack_138 = *(undefined8 *)(param_4 + 0xab8);
  uStack_140 = *(undefined8 *)(param_4 + 0xab0);
  uVar10 = *(undefined8 *)(param_3 + 0x58);
  lStack_1b8 = param_4;
  FUN_1073b6cb8(uVar10,&uStack_140,uVar38,param_8);
  if (param_5 == 0) {
    uStack_278 = 0;
    lVar17 = *(long *)(lRam0000000000000220 + 8);
  }
  else {
    lVar17 = *(long *)(*(long *)(param_5 + 0x220) + 8);
    uStack_278 = *(ulong *)(lVar17 + 0x70);
  }
  lVar28 = *(long *)(lVar17 + 0x58);
  if ((lVar28 == *(long *)(lVar17 + 0x60)) || (*(char *)(lVar28 + 0x18) != '\x01')) {
    bVar29 = 0;
  }
  else {
    bVar29 = *(byte *)(lVar28 + 0x10) ^ 1;
  }
  lStack_1c0 = *(long *)(param_3 + 0x48);
  uStack_280 = uVar10;
  if (lStack_1c0 == 0) {
    lStack_1f0 = 0;
LAB_1073b9da0:
    lStack_1e0 = 0;
  }
  else {
    lStack_1f0 = lStack_1c0 + 0x11e8;
    if (*(long *)(lStack_1c0 + 0x1200) == 0) goto LAB_1073b9da0;
    lStack_1e0 = 0;
    puVar2 = *(uint **)(lStack_1b8 + 0x188);
    for (puVar23 = (uint *)(*(long *)(lStack_1b8 + 0x180) + 0x88); puVar23 + -0x22 != puVar2;
        puVar23 = puVar23 + 0x2a) {
      if ((*puVar23 != 0) &&
         (lVar17 = lStack_1f0, func_0x0001073be570(lStack_1f0,puVar23), lVar17 != 0)) {
        lStack_1e0 = lStack_1e0 * 0x1f + (ulong)*puVar23 * 7 + (ulong)*(byte *)(lVar17 + 0x24) + 1;
      }
    }
  }
  uVar10 = uStack_280;
  FUN_1073b6ee8(uStack_280,lStack_1b8,lStack_268,uStack_278);
  uVar9 = (int)uVar10 == 3;
  if ((bool)uVar9) {
    dStack_130 = *(double *)(lStack_1b8 + 8);
    if (dStack_130 != 0.0) {
      lStack_128 = *(long *)(lStack_1b8 + 0x10);
      if (lStack_128 != 0) {
        plVar12 = (long *)(lStack_128 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = *plVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      bVar3 = *(byte *)((long)dStack_130 + 0x130);
      lVar17 = *(long *)((long)dStack_130 + 0x138);
      func_0x0001073bd444(&dStack_130);
      if (((bVar3 & bVar29 & 1) == 0) && (uVar9 = 1, lVar17 == lStack_1e0)) goto LAB_1073ba7c0;
      goto LAB_1073b9e0c;
    }
    dStack_130 = 0.0;
    lStack_128 = 0;
    pdVar15 = &dStack_130;
  }
  else {
LAB_1073b9e0c:
    FUN_1073b7048(&dStack_150,8,(ulong)&uStack_140 | 4,param_8,*(undefined4 *)(param_3 + 0x50),
                  uVar38);
    lVar27 = *(long *)(lStack_268 + 0x18);
    lVar28 = *(long *)(param_7 + 0x10);
    uVar32 = 0;
    uStack_1a8 = 0x3f80000000000000;
    dStack_1b0 = 0.0;
    lStack_128 = 0x3f80000000000000;
    dStack_130 = 0.0;
    func_0x0001073bf0c4(lVar28 + 0x20);
    uStack_188 = (undefined4)param_2;
    dStack_130 = 0.0;
    lStack_128 = 0;
    uStack_190 = extraout_s3;
    uStack_18c = extraout_s2;
    uStack_184 = uVar32;
    func_0x0001073bf0c4(lVar28 + 0xa0);
    lVar17 = lStack_1b8;
    lStack_128 = uStack_1a8;
    dStack_130 = dStack_1b0;
    dVar35 = dStack_1b0;
    uStack_194 = uVar32;
    func_0x0001073bf0c4(lVar28 + 0x1d8);
    uStack_1c8 = (undefined4)param_2;
    uStack_1c4 = SUB84(dVar35,0);
    dStack_130 = 0.0;
    lStack_128 = 0;
    uStack_1d0 = extraout_s3_00;
    uStack_1cc = extraout_s2_00;
    func_0x0001073bf0c4(lVar28 + 600);
    uStack_218 = (undefined4)param_2;
    uStack_214 = SUB84(dVar35,0);
    lVar28 = lVar17;
    uStack_220 = extraout_s3_01;
    uStack_21c = extraout_s2_01;
    FUN_10745bd98();
    if ((int)lVar28 == 0) {
LAB_1073b9ef8:
      uStack_22c = 0;
      lStack_1d8 = 0;
    }
    else {
      lVar28 = lVar17 + 200;
      FUN_1073be628(lVar28,lVar27 + 8);
      if (lVar17 + 0xd0 == lVar28) goto LAB_1073b9ef8;
      lVar27 = *(long *)(lVar28 + 0x148);
      if (lVar27 == 0) {
        lStack_1d8 = 0;
      }
      else {
        func_0x0001073befc8(lVar27,&PTR_DAT_1109ab960,&PTR_DAT_1109ab970);
        lStack_1d8 = lVar27;
      }
      uStack_22c = *(uint *)(lVar28 + 0x230);
    }
    lVar26 = (ulong)uVar44 << 0x20;
    lVar27 = *(long *)(*(long *)(param_5 + 0x220) + 8);
    lVar28 = *(long *)(lVar27 + 0x58);
    if ((lVar28 != *(long *)(lVar27 + 0x60)) && (*(char *)(lVar28 + 0x18) == '\x01')) {
      FUN_1073b8134(lVar28);
      FUN_1073b80a0(&dStack_130,lVar28);
      func_0x0001073bc89c((long)dStack_150 + 0xf8,&dStack_130);
      func_0x0001073bc940(&dStack_130);
      if (*(char *)((long)dStack_150 + 0x128) == '\x01') {
        *(ulong *)((long)dStack_150 + 0x120) = lVar26 + (uStack_278 & 0xffffffff) + 0x100000000;
      }
    }
    lVar28 = *(long *)(*(long *)(param_5 + 0x220) + 8);
    if (*(char *)(lVar28 + 0x50) == '\x01') {
      func_0x0001073bf1f4();
      if (*(char *)(lVar28 + 0x48) == '\x01') {
        dStack_130 = (double)((ulong)dStack_130 & 0xffffffffffffff00);
        uStack_100 = 0;
      }
      else {
        uStack_64 = *(undefined4 *)(lVar28 + 0x38);
        uStack_60 = *(undefined4 *)(lVar28 + 0x3c);
        auStack_68[0] = 1;
        dVar35 = 0.0;
        uStack_50 = 0;
        uStack_58 = 0;
        uStack_40 = 0;
        uStack_48 = 0;
        func_0x0001073bf254();
        func_0x0001073bf288(uStack_58,*(undefined8 *)(lVar28 + 0x40));
        FUN_1073bccd0(&dStack_130,auStack_68);
        func_0x0001073bf0e4();
      }
      func_0x0001073bc89c((long)dStack_150 + 0xc0,&dStack_130);
      func_0x0001073bc940(&dStack_130);
      if (*(char *)((long)dStack_150 + 0xf0) == '\x01') {
        *(long *)((long)dStack_150 + 0xe8) = lVar26 + 0x100000000;
      }
    }
    fVar33 = (float)((int)*(undefined8 *)(lVar17 + 0x28) + 0x778);
    FUN_1073be6c4(aplStack_160);
    func_0x0001073bf1dc();
    uVar11 = *(ulong *)(lVar17 + 0xe0);
    dVar35 = (double)(ulong)(uint)(float)dVar35;
    func_0x0001073bee24(dVar35);
    (*extraout_x8_00)();
    fVar16 = fVar33;
    uStack_1e8 = uVar11;
    func_0x0001073bf1dc();
    uVar11 = *(ulong *)(lVar17 + 0x410);
    func_0x0001073bee24((float)dVar35);
    (*extraout_x8_01)();
    fStack_284 = (float)(uStack_1e8 >> 0x20);
    uStack_228 = (undefined4)(uVar11 >> 0x20);
    dStack_1b0 = *(double *)(lVar17 + 0x80);
    plStack_210 = alStack_b8;
    uStack_270 = (ulong)uStack_22c;
    lVar14 = lStack_1c0;
    fStack_224 = fVar33;
    uStack_208 = uVar11;
    lStack_200 = lVar28;
    lStack_1f8 = lVar27;
    for (lVar26 = *(long *)(lVar17 + 0x78); uVar9 = (double)lVar26 == dStack_1b0, !(bool)uVar9;
        lVar26 = lVar26 + 0x670) {
      auStack_68[0] = 0;
      uStack_30 = 0;
      lStack_20 = 0;
      uStack_18 = 0;
      uStack_28 = 0;
      plVar12 = *(long **)(lVar26 + 0x660);
      lStack_168 = *(long *)(lVar26 + 0x668);
      plStack_170 = plVar12;
      if (lStack_168 != 0) {
        do {
          func_0x0001073becf8();
        } while (extraout_w10 != 0);
      }
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x30))();
        func_0x00010726236c(&dStack_130);
        func_0x0001072e948c(auStack_68,&dStack_130);
        func_0x00010724b3d8(&dStack_130);
      }
      bVar29 = *(byte *)(lVar26 + 0x30);
      if ((bVar29 & 1) != 0) {
        fVar33 = 1.0;
        param_2 = 0x3f800000;
        uVar38 = 0;
        if (*(char *)(lVar28 + 0x50) == '\x01') {
          if (*(int *)(lVar28 + 0x38) != 0) {
            func_0x0001073bf1f4();
            fVar33 = *(float *)(lVar28 + 0x38);
            func_0x0001073bf2dc(fVar33);
            fVar33 = (float)param_2 / fVar33;
            if (*(char *)(lVar28 + 0x50) != '\x01') goto LAB_1073ba194;
          }
          if (*(int *)(lVar28 + 0x3c) != 0) {
            func_0x0001073bf1f4();
            fVar37 = (float)param_2;
            fVar34 = *(float *)(lVar28 + 0x3c);
            func_0x0001073bf2dc();
            param_2 = (ulong)(uint)(fVar37 / fVar34);
            uVar38 = 0;
          }
        }
LAB_1073ba194:
        lStack_a8 = *(undefined8 *)(lVar26 + 0x5e8);
        acStack_a0[0] = *(char *)(lVar26 + 0x5f0);
        uStack_98 = *(undefined8 *)(lVar26 + 0x5f8);
        uStack_90 = *(undefined1 *)(lVar26 + 0x600);
        uStack_88 = *(undefined8 *)(lVar26 + 0x608);
        uStack_80 = *(undefined1 *)(lVar26 + 0x610);
        uStack_70 = *(undefined1 *)(lVar26 + 0x620);
        uStack_78 = *(undefined8 *)(lVar26 + 0x618);
        lVar18 = *(long *)(lVar17 + 0x180);
        for (lVar21 = 0; lVar21 != 0x40; lVar21 = lVar21 + 0x10) {
          if ((acStack_a0[lVar21] == '\x01') &&
             (lVar31 = *(long *)(acStack_a0 + lVar21 + -8),
             *(char *)(lVar18 + lVar31 * 0xa8 + 0x78) != '\x01')) goto LAB_1073ba234;
        }
        lVar21 = 0x40;
        plVar12 = plStack_210;
        do {
          if (lVar21 == 0) goto LAB_1073ba410;
          plVar1 = plVar12 + 3;
          plVar12 = plVar12 + 2;
          lVar21 = lVar21 + -0x10;
        } while ((char)*plVar1 != '\x01');
        lVar31 = *plVar12;
LAB_1073ba234:
        fStack_290 = fStack_224;
        if (((uint)uStack_1e8 >> 8 & 1) == 0) {
          lVar21 = lVar18 + lVar31 * 0xa8;
          fStack_290 = *(float *)(lVar21 + 0x18);
          if ((uStack_1e8 & 1) == 0) {
            fStack_290 = fStack_290 + (*(float *)(lVar21 + 0x1c) - fStack_290) * fStack_284;
          }
        }
        if (lStack_1d8 != 0) {
          uVar19 = *(ulong *)(lVar18 + lVar31 * 0xa8 + 0x80);
          uVar22 = uVar19;
          if ((uStack_22c != 0) && (uVar22 = 0, uStack_270 != 0)) {
            uVar22 = uVar19 / uStack_270;
          }
          if (uVar22 < (ulong)(*(long *)(lStack_1d8 + 200) - *(long *)(lStack_1d8 + 0xc0) >> 3)) {
            uVar10 = *(undefined8 *)(*(long *)(lStack_1d8 + 0xc0) + uVar22 * 8);
            auVar39._0_4_ = (uint)(float)uVar10;
            uVar44 = (uint)(float)((ulong)uVar10 >> 0x20);
            auVar39._4_4_ = auVar39._0_4_;
            auVar39._8_4_ = uVar44;
            auVar39._12_4_ = uVar44;
            auVar45._0_4_ = auVar39._0_4_ >> 8;
            auVar45._4_4_ = auVar39._0_4_ >> 8;
            auVar45._8_4_ = uVar44 >> 8;
            auVar45._12_4_ = uVar44 >> 8;
            auVar6._4_8_ = auVar39._8_8_;
            auVar6._0_4_ = auVar39._0_4_ & 0xffff00ff;
            auVar40._0_8_ = auVar6._0_8_ << 0x20;
            auVar40._8_4_ = uVar44 & 0xffff00ff;
            auVar40._12_4_ = uVar44 & 0xffff00ff;
            auVar46 = NEON_rev64(auVar45,4);
            auVar41._4_12_ = auVar40._4_12_;
            auVar41._0_4_ = auVar46._4_4_;
            auVar43._0_8_ = auVar41._0_8_;
            auVar43._8_4_ = auVar46._12_4_;
            auVar43._12_4_ = auVar40._12_4_;
            auVar42._8_8_ = auVar43._8_8_;
            uVar22 = CONCAT44(auVar39._0_4_,auVar46._4_4_);
            auVar42._0_8_ = uVar22 & 0xffff00ffffffffff;
            auVar46._0_12_ = auVar42._0_12_;
            auVar46._12_4_ = auVar40._12_4_;
            NEON_ucvtf(auVar46,4);
          }
        }
        uStack_2a0 = uStack_214;
        uStack_29c = uStack_218;
        uStack_298 = uStack_21c;
        uStack_294 = uStack_220;
        FUN_1073baa20(fVar33,&dStack_130,lVar17 + 0x100,0,lVar31);
        func_0x0001073bedd4();
        func_0x0001073bef70();
        if (((lVar14 == 0) || (*(int *)(*(long *)(lVar17 + 0x180) + lVar31 * 0xa8 + 0x88) == 0)) ||
           (lVar21 = lStack_1f0, func_0x0001073be570(), lVar21 == 0)) {
          puVar20 = (undefined1 *)*aplStack_160[0];
          if ((puVar20 != (undefined1 *)aplStack_160[0][1]) &&
             (lVar21 = *(long *)(lVar26 + 0x60), lVar21 != *(long *)(lVar26 + 0x68))) {
            param_2 = *(ulong *)(lVar21 + 0xc);
            uVar38 = 0;
            uVar10 = CONCAT44((float)((ulong)*(undefined8 *)(lVar21 + 0x14) >> 0x20) -
                              (float)(param_2 >> 0x20),
                              (float)*(undefined8 *)(lVar21 + 0x14) - (float)param_2);
            pfVar24 = (float *)(lVar26 + 0x648);
            pfVar13 = (float *)(lVar26 + 0x64c);
            puVar23 = (uint *)(lVar26 + 0x650);
            goto LAB_1073ba37c;
          }
        }
        else {
          puVar20 = (undefined1 *)(lVar21 + 0x24);
          pfVar13 = (float *)(lVar21 + 0x14);
          uVar10 = *(undefined8 *)(lVar21 + 0x1c);
          pfVar24 = (float *)(lVar21 + 0x28);
          puVar23 = (uint *)(lVar21 + 0x18);
LAB_1073ba37c:
          uVar22 = (ulong)(uint)*pfVar24;
          uVar36 = 0;
          if (0.0 < *pfVar24) {
            uVar9 = *puVar20;
            uVar19 = (ulong)*puVar23;
            fVar33 = *pfVar13;
            uStack_238 = 0;
            uStack_240 = uVar22;
            func_0x0001078253e8(uVar9);
            uStack_260 = param_2;
            uStack_258 = uVar38;
            uStack_250 = uVar22;
            uStack_248 = uVar36;
            FUN_1073fe9e0(uVar9);
            *(undefined1 *)(lStack_20 + -0x7f) = 1;
            puVar7 = *(ulong **)(lStack_20 + -0x30);
            param_2 = uVar19;
            for (uVar22 = (ulong)(*(long *)(lStack_20 + -0x28) -
                                 (long)*(ulong **)(lStack_20 + -0x30)) >> 4; uVar22 != 0;
                uVar22 = uVar22 - 1) {
              param_2 = CONCAT44((float)(*puVar7 >> 0x20) +
                                 ((float)uVar19 -
                                 ((float)((ulong)uVar10 >> 0x20) * ((float)uStack_260 + -0.5)) /
                                 (float)uStack_240) * 32.0,
                                 (float)*puVar7 +
                                 (fVar33 - ((float)uVar10 * ((float)uStack_250 + -0.5)) /
                                           (float)uStack_240) * 32.0);
              *puVar7 = param_2;
              puVar7 = puVar7 + 2;
            }
          }
        }
LAB_1073ba410:
        bVar29 = *(byte *)(lVar26 + 0x30);
      }
      uVar44 = (uint)uVar11;
      if ((bVar29 & 6) != 0) {
        puVar23 = *(uint **)(lVar27 + 0x58);
        fVar33 = 0.0;
        if (puVar23 == *(uint **)(lVar27 + 0x60)) {
          uVar22 = 0;
        }
        else {
          uVar22 = 0;
          if ((char)puVar23[6] == '\x01') {
            if (*puVar23 != 0) {
              param_2 = 0x3f800000;
              fVar33 = 1.0 / (float)*puVar23;
            }
            if (puVar23[1] != 0) {
              param_2 = 0x3f800000;
              uVar22 = (ulong)(uint)(1.0 / (float)puVar23[1]);
            }
          }
        }
        if (*(char *)(lVar26 + 0x630) == '\x01') {
          if (((uVar44 >> 8 & 1) == 0) &&
             (func_0x0001073bf348(*(undefined8 *)(lVar17 + 0x498),fVar16), (uVar11 & 1) == 0)) {
            func_0x0001073bee30();
          }
          func_0x0001073bf33c();
          func_0x0001073befb8();
          param_2 = uVar22;
          func_0x0001073bece4(fVar33,uVar22);
          func_0x0001073bedd4();
          func_0x0001073bef70();
        }
        if (*(char *)(lVar26 + 0x640) == '\x01') {
          if (((uVar44 >> 8 & 1) == 0) &&
             (func_0x0001073bf348(*(undefined8 *)(lVar17 + 0x498),fVar16), (uVar11 & 1) == 0)) {
            func_0x0001073bee30();
          }
          func_0x0001073bf33c();
          func_0x0001073befb8();
          func_0x0001073bece4(fVar33,uVar22);
          func_0x0001073bedd4();
          func_0x0001073bef70();
          param_2 = uVar22;
        }
      }
      if ((*(byte *)(lVar26 + 0x30) >> 2 & 1) != 0) {
        pfVar13 = *(float **)(lVar27 + 0x58);
        uVar22 = 0;
        if (*(char *)(pfVar13 + 6) == '\x01') {
          FUN_1073b8134();
          fVar33 = *pfVar13;
          func_0x0001073bf2dc(fVar33);
          fVar33 = (float)param_2 / fVar33;
          lVar21 = *(long *)(lVar27 + 0x58);
          if (*(char *)(lVar21 + 0x18) == '\x01') {
            FUN_1073b8134();
            fVar34 = *(float *)(lVar21 + 4);
            func_0x0001073bf2dc(fVar34);
            uVar22 = (ulong)(uint)((float)param_2 / fVar34);
          }
        }
        else {
          fVar33 = 0.0;
        }
        if (*(char *)(lVar26 + 0x630) == '\x01') {
          if (((uVar44 >> 8 & 1) == 0) &&
             (func_0x0001073bf348(*(undefined8 *)(lVar17 + 0x7a8),fVar16), (uVar11 & 1) == 0)) {
            func_0x0001073bee30();
          }
          func_0x0001073bf33c();
          func_0x0001073befb8();
          param_2 = uVar22;
          func_0x0001073bece4(fVar33);
          func_0x0001073bedd4();
          func_0x0001073bef70();
        }
        if (*(char *)(lVar26 + 0x640) == '\x01') {
          if (((uVar44 >> 8 & 1) == 0) &&
             (func_0x0001073bf348(*(undefined8 *)(lVar17 + 0x7a8),fVar16), (uVar11 & 1) == 0)) {
            func_0x0001073bee30();
          }
          func_0x0001073bf33c();
          func_0x0001073befb8();
          func_0x0001073bece4(fVar33);
          func_0x0001073bedd4();
          func_0x0001073bef70();
          param_2 = uVar22;
        }
      }
      dVar35 = dStack_150;
      uVar22 = *(ulong *)((long)dStack_150 + 0x98);
      if (uVar22 < *(ulong *)((long)dStack_150 + 0xa0)) {
        func_0x0001073bce28(uVar22,auStack_68);
        lVar21 = uVar22 + 0x58;
      }
      else {
        lVar21 = uVar22 - *(long *)((long)dStack_150 + 0x90);
        if (0x2e8ba2e8ba2e8ba < lVar21 / 0x58 + 1U) {
          FUN_1073bce64();
LAB_1073ba7e4:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1073ba7e8);
          (*pcVar8)();
        }
        func_0x0001073beec4();
        uVar11 = extraout_x9;
        if (0x1745d1745d1745c < extraout_x8_02) {
          uVar11 = extraout_x11;
        }
        if (uVar11 == 0) {
          lVar17 = 0;
        }
        else {
          if (extraout_x11 < uVar11) {
            func_0x000104bd35f4();
            goto LAB_1073ba7e4;
          }
          lVar17 = uVar11 * extraout_x12;
          __Znwm();
        }
        lVar21 = lVar17 + lVar21;
        func_0x0001073bce28(lVar21,auStack_68);
        lVar18 = *(long *)((long)dVar35 + 0x90);
        lVar31 = *(long *)((long)dVar35 + 0x98);
        lVar30 = lVar21 + ((lVar31 - lVar18) / -0x58) * 0x58;
        lVar14 = lVar30;
        for (lVar28 = lVar18; lVar27 = lStack_1f8, lVar28 != lVar31; lVar28 = lVar28 + 0x58) {
          func_0x0001073bce28(lVar14,lVar28);
          lVar14 = lVar14 + 0x58;
        }
        for (; lVar18 != lVar31; lVar18 = lVar18 + 0x58) {
          FUN_1073bce70(lVar18);
        }
        lVar21 = lVar21 + 0x58;
        lVar18 = *(long *)((long)dVar35 + 0x90);
        *(long *)((long)dVar35 + 0x90) = lVar30;
        *(long *)((long)dVar35 + 0x98) = lVar21;
        *(ulong *)((long)dVar35 + 0xa0) = lVar17 + uVar11 * 0x58;
        lVar14 = lStack_1c0;
        lVar17 = lStack_1b8;
        lVar28 = lStack_200;
        uVar11 = uStack_208;
        if (lVar18 != 0) {
          __ZdlPv();
          lVar14 = lStack_1c0;
          lVar17 = lStack_1b8;
          lVar28 = lStack_200;
          uVar11 = uStack_208;
        }
      }
      *(long *)((long)dVar35 + 0x98) = lVar21;
      FUN_107330fdc(&plStack_170);
      FUN_1073bce70(auStack_68);
    }
    if ((*(byte *)((long)dStack_150 + 0x128) & 1) == 0) {
      lVar28 = *(long *)((long)dStack_150 + 0x90);
      while (uVar9 = true, lVar28 != *(long *)((long)dStack_150 + 0x98)) {
        pcVar25 = *(char **)(lVar28 + 0x40);
        while (uVar9 = pcVar25 == *(char **)(lVar28 + 0x48), !(bool)uVar9) {
          cVar4 = *pcVar25;
          pcVar25 = pcVar25 + 0x80;
          if (cVar4 != '\0') {
            *(undefined1 *)((long)dStack_150 + 0x130) = 1;
            goto LAB_1073ba778;
          }
        }
        lVar28 = lVar28 + 0x58;
        uVar9 = true;
        if (*(char *)((long)dStack_150 + 0x130) == '\x01') break;
      }
    }
LAB_1073ba778:
    *(long *)((long)dStack_150 + 0x138) = lStack_1e0;
    dStack_180 = dStack_150;
    lStack_178 = lStack_148;
    if (lStack_148 != 0) {
      do {
        func_0x0001073becf8();
      } while (extraout_w10_00 != 0);
    }
    FUN_1073b74d0(uStack_280,lVar17,lStack_268,&dStack_180,uStack_278);
    func_0x0001073bf0dc();
    FUN_1073bcebc(aplStack_160);
    pdVar15 = &dStack_150;
  }
  func_0x0001073bd444(pdVar15);
LAB_1073ba7c0:
  func_0x0001073bed60(uStack_10);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073bf0e4();
  pdVar15 = &dStack_150;
  func_0x0001073bd444();
  func_0x0001073bedec();
  pcStack_2a8 = FUN_1073ba8b4;
  uStack_2c0 = *(int *)(pdVar15 + 8) == 0;
  if ((bool)uStack_2c0) {
    dStack_2c8 = pdVar15[1];
    dStack_2d0 = *pdVar15;
  }
  else {
    dStack_2d0 = (double)((ulong)dStack_2d0 & 0xffffffffffffff00);
  }
  puStack_2b0 = &stack0x00000090;
  func_0x0001073be610(&dStack_2d0);
  return;
}



/* Entry: 1073ba8b4; end: 1073ba90f;  */

void FUN_1073ba8b4(ulong *param_1)

{
  ulong uStack_30;
  ulong uStack_28;
  undefined1 uStack_20;
  
  uStack_20 = (int)param_1[8] == 0;
  if ((bool)uStack_20) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
  }
  else {
    uStack_30 = uStack_30 & 0xffffffffffffff00;
  }
  func_0x0001073be610(&uStack_30);
  return;
}



/* Entry: 1073ba910; end: 1073baa1f;  */

void FUN_1073ba910(float param_1,float param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 *param_7,long *param_8,
                  undefined1 param_9,long param_10)

{
  long lVar1;
  long lVar2;
  undefined1 in_CY;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long extraout_x8;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long *unaff_x19;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 unaff_w24;
  ulong uVar15;
  ulong uVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined4 uVar17;
  short sStack_c2;
  
  plVar6 = param_8;
  func_0x00010014b0d8();
  if ((bool)in_CY) {
    lVar12 = (long)param_7 - *unaff_x19;
    uVar16 = (lVar12 >> 7) + 1;
    if (uVar16 >> 0x39 != 0) {
      FUN_1073bcd68();
LAB_1073baa1c:
      func_0x000104bd35f4();
      puVar8 = (undefined4 *)(plVar6[0x10] + param_10 * 0xa8);
      lVar12 = *(long *)(puVar8 + 0x18);
      lVar3 = *(long *)(puVar8 + 0x1a);
      uVar7 = *(ulong *)(puVar8 + 0x20);
      *param_7 = param_9;
      *(undefined2 *)(param_7 + 1) = 0x100;
      *(undefined4 *)(param_7 + 4) = *puVar8;
      *(undefined4 *)(param_7 + 8) = puVar8[1];
      uVar17 = puVar8[2];
      puVar13 = (undefined8 *)(param_7 + 0x38);
      *(undefined8 *)(param_7 + 0x40) = 0;
      *puVar13 = 0;
      *(undefined4 *)(param_7 + 0xc) = uVar17;
      *(undefined4 *)(param_7 + 0x10) = param_3;
      *(undefined4 *)(param_7 + 0x14) = param_4;
      *(undefined4 *)(param_7 + 0x18) = param_5;
      *(undefined4 *)(param_7 + 0x1c) = param_6;
      *(undefined8 *)(param_7 + 0x28) = unaff_x25;
      *(undefined8 *)(param_7 + 0x20) = unaff_x26;
      *(undefined4 *)(param_7 + 0x30) = unaff_w24;
      puVar11 = (undefined8 *)(param_7 + 0x68);
      *(undefined8 *)(param_7 + 0x70) = 0;
      *puVar11 = 0;
      *(undefined8 *)(param_7 + 0x78) = 0;
      *(undefined8 *)(param_7 + 0x50) = 0;
      *(undefined8 *)(param_7 + 0x48) = 0;
      *(undefined8 *)(param_7 + 0x60) = 0;
      *(undefined8 *)(param_7 + 0x58) = 0;
      puVar5 = puVar13;
      func_0x0001073beee4(puVar13,0x501);
      func_0x0001073beee4(puVar13,0x504);
      uVar15 = lVar3 - lVar12;
      func_0x00010089a97c(param_7 + 0x50,((long)puVar13 + (long)puVar5) * uVar15);
      lVar14 = ((uVar15 >> 1) + ((long)uVar15 >> 2)) * 2;
      lVar3 = (uVar7 >> 2) * 2 + (uVar7 >> 2);
      uVar9 = lVar3 * 2;
      lVar12 = uVar7 * 0x18;
      for (uVar16 = uVar7; uVar16 < uVar15 + uVar7; uVar16 = uVar16 + 1) {
        lVar4 = *plVar6 + lVar12;
        func_0x0001073b9c24((float)(int)*(short *)(lVar4 + 4),(float)(int)*(short *)(lVar4 + 6),
                            param_1 * (float)(int)*(short *)(lVar4 + 8),
                            param_2 * (float)(int)*(short *)(lVar4 + 10),param_7 + 0x50);
        lVar12 = lVar12 + 0x18;
      }
      func_0x00010730b9d0(puVar11,lVar14);
      for (; uVar9 < (ulong)(lVar14 + lVar3 * 2); uVar9 = uVar9 + 1) {
        sStack_c2 = *(short *)(plVar6[10] + uVar9 * 2) - (short)uVar7;
        FUN_1073bcd74(puVar11,&sStack_c2);
      }
      return;
    }
    uVar7 = extraout_x8 - *unaff_x19;
    uVar9 = (long)uVar7 >> 6;
    if (uVar9 <= uVar16) {
      uVar9 = uVar16;
    }
    if (0x7fffffffffffff7f < uVar7) {
      uVar9 = 0x1ffffffffffffff;
    }
    if (uVar9 == 0) {
      lVar3 = 0;
    }
    else {
      if (uVar9 >> 0x39 != 0) goto LAB_1073baa1c;
      lVar3 = uVar9 << 7;
      __Znwm();
    }
    lVar12 = lVar3 + lVar12;
    FUN_1073bccec(lVar12,param_8);
    lVar10 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lVar1 = lVar12 + (lVar10 - lVar2);
    lVar4 = lVar1;
    for (lVar14 = lVar10; lVar14 != lVar2; lVar14 = lVar14 + 0x80) {
      FUN_1073bccec(lVar4,lVar14);
      lVar4 = lVar4 + 0x80;
    }
    for (; lVar10 != lVar2; lVar10 = lVar10 + 0x80) {
      FUN_1073bcdf4(lVar10);
    }
    param_7 = (undefined1 *)(lVar12 + 0x80);
    lVar12 = *unaff_x19;
    *unaff_x19 = lVar1;
    unaff_x19[1] = (long)param_7;
    unaff_x19[2] = lVar3 + uVar9 * 0x80;
    if (lVar12 != 0) {
      __ZdlPv();
    }
  }
  else {
    FUN_1073bccec();
    param_7 = param_7 + 0x80;
  }
  unaff_x19[1] = (long)param_7;
  return;
}



/* Entry: 1073baa20; end: 1073babe3;  */

void FUN_1073baa20(float param_1,float param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 *param_7,long *param_8,
                  undefined1 param_9,long param_10)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  short sStack_72;
  
  puVar4 = (undefined4 *)(param_8[0x10] + param_10 * 0xa8);
  lVar12 = *(long *)(puVar4 + 0x18);
  lVar2 = *(long *)(puVar4 + 0x1a);
  uVar5 = *(ulong *)(puVar4 + 0x20);
  *param_7 = param_9;
  *(undefined2 *)(param_7 + 1) = 0x100;
  *(undefined4 *)(param_7 + 4) = *puVar4;
  *(undefined4 *)(param_7 + 8) = puVar4[1];
  uVar13 = puVar4[2];
  puVar7 = (undefined8 *)(param_7 + 0x38);
  *(undefined8 *)(param_7 + 0x40) = 0;
  *puVar7 = 0;
  *(undefined4 *)(param_7 + 0xc) = uVar13;
  *(undefined4 *)(param_7 + 0x10) = param_3;
  *(undefined4 *)(param_7 + 0x14) = param_4;
  *(undefined4 *)(param_7 + 0x18) = param_5;
  *(undefined4 *)(param_7 + 0x1c) = param_6;
  *(undefined8 *)(param_7 + 0x28) = in_stack_00000008;
  *(undefined8 *)(param_7 + 0x20) = in_stack_00000000;
  *(undefined4 *)(param_7 + 0x30) = in_stack_00000010;
  puVar6 = (undefined8 *)(param_7 + 0x68);
  *(undefined8 *)(param_7 + 0x70) = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_7 + 0x78) = 0;
  *(undefined8 *)(param_7 + 0x50) = 0;
  *(undefined8 *)(param_7 + 0x48) = 0;
  *(undefined8 *)(param_7 + 0x60) = 0;
  *(undefined8 *)(param_7 + 0x58) = 0;
  puVar3 = puVar7;
  func_0x0001073beee4(puVar7,0x501);
  func_0x0001073beee4(puVar7,0x504);
  uVar9 = lVar2 - lVar12;
  func_0x00010089a97c(param_7 + 0x50,((long)puVar7 + (long)puVar3) * uVar9);
  lVar8 = ((uVar9 >> 1) + ((long)uVar9 >> 2)) * 2;
  lVar2 = (uVar5 >> 2) * 2 + (uVar5 >> 2);
  uVar11 = lVar2 * 2;
  lVar12 = uVar5 * 0x18;
  for (uVar10 = uVar5; uVar10 < uVar9 + uVar5; uVar10 = uVar10 + 1) {
    lVar1 = *param_8 + lVar12;
    func_0x0001073b9c24((float)(int)*(short *)(lVar1 + 4),(float)(int)*(short *)(lVar1 + 6),
                        param_1 * (float)(int)*(short *)(lVar1 + 8),
                        param_2 * (float)(int)*(short *)(lVar1 + 10),param_7 + 0x50);
    lVar12 = lVar12 + 0x18;
  }
  func_0x00010730b9d0(puVar6,lVar8);
  for (; uVar11 < (ulong)(lVar8 + lVar2 * 2); uVar11 = uVar11 + 1) {
    sStack_72 = *(short *)(param_8[10] + uVar11 * 2) - (short)uVar5;
    FUN_1073bcd74(puVar6,&sStack_72);
  }
  return;
}



/* Entry: 1073babe4; end: 1073bbb43;  */

void FUN_1073babe4(long param_1,long param_2,undefined8 param_3,undefined8 ****param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 ****ppppuVar15;
  undefined8 extraout_x8;
  undefined8 ****ppppuVar16;
  undefined8 ***pppuVar17;
  undefined8 **ppuVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****extraout_x8_00;
  ulong *puVar21;
  float *pfVar22;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 ***pppuVar23;
  undefined8 ****extraout_x9;
  ulong uVar24;
  undefined8 ****ppppuVar25;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar26;
  undefined8 ***pppuVar27;
  undefined8 ***pppuVar28;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  byte bVar29;
  undefined8 ***pppuVar30;
  long lVar31;
  undefined8 ****ppppuVar32;
  undefined8 *****pppppuVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 ****ppppuVar36;
  long *plVar37;
  undefined8 ****ppppuVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  float fVar44;
  undefined8 uVar43;
  undefined8 uVar45;
  undefined8 **ppuVar46;
  undefined8 uVar47;
  undefined8 ***pppuStack_190;
  long lStack_188;
  float afStack_180 [5];
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined8 ***pppuStack_160;
  undefined8 ***pppuStack_158;
  undefined8 ***pppuStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 ***apppuStack_120 [2];
  ulong uStack_110;
  ulong uStack_108;
  undefined8 ****ppppuStack_f0;
  undefined8 ***pppuStack_e8;
  long lStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_78;
  long lStack_70;
  undefined1 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  ulong uStack_18;
  undefined8 uStack_10;
  double dVar42;
  
  func_0x0001073bedf4();
  func_0x0001073beeb4();
  uStack_10 = extraout_x8;
  func_0x0001073befd8();
  uStack_138 = *(undefined8 *)(param_2 + 0x168);
  uStack_140 = *(undefined8 *)(param_2 + 0x160);
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  func_0x0001073befac(uVar12,&uStack_140);
  uVar47 = uVar12;
  func_0x0001073befd0(uVar12,param_2,param_4);
  uVar9 = (int)uVar47 == 3;
  if (!(bool)uVar9) {
    pppppuVar33 = (undefined8 *****)&pppuStack_150;
    func_0x0001073bef64(pppppuVar33,9,(ulong)&uStack_140 | 4);
    pppuVar23 = pppuStack_150;
    if ((int)uVar47 == 1) {
      ppppuVar16 = *(undefined8 *****)(param_2 + 8);
      if (ppppuVar16 == (undefined8 ****)0x0) {
        pppuStack_78 = (undefined8 ****)0x0;
        lStack_70 = 0;
      }
      else {
        lStack_70 = *(long *)(param_2 + 0x10);
        pppuStack_78 = ppppuVar16;
        if (lStack_70 != 0) {
          plVar13 = (long *)(lStack_70 + 8);
          do {
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar10) {
              *plVar13 = *plVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      if ((undefined8 ****)pppuStack_150 != ppppuVar16) {
        *(undefined4 *)(pppuStack_150 + 0x2c) = *(undefined4 *)(ppppuVar16 + 0x2c);
        pppuVar30 = ppppuVar16[0x2a];
        pppuVar17 = (undefined8 ***)pppuStack_150[0x29];
        if (pppuVar17 != (undefined8 ***)0x0) {
          pppuVar27 = (undefined8 ***)pppuStack_150[0x28];
          for (; pppuVar17 != (undefined8 ***)0x0;
              pppuVar17 = (undefined8 ***)((long)pppuVar17 + -1)) {
            *pppuVar27 = (undefined8 **)0x0;
            pppuVar27 = pppuVar27 + 1;
          }
          pppppuVar33 = (undefined8 *****)pppuStack_150[0x2a];
          pppuStack_150[0x2a] = (undefined8 ***)0x0;
          pppuStack_150[0x2b] = (undefined8 ***)0x0;
          for (pppuVar17 = pppuVar30;
              (pppuVar30 = pppuVar17, pppppuVar33 != (undefined8 *****)0x0 &&
              (pppuVar30 = (undefined8 ***)0x0, pppuVar17 != (undefined8 ***)0x0));
              pppuVar17 = (undefined8 ***)*pppuVar17) {
            func_0x000107262f3c(pppppuVar33 + 2,pppuVar17 + 2);
            FUN_1073bbc1c(pppppuVar33 + 9,pppuVar17[9],pppuVar17[10]);
            pppppuVar33 = (undefined8 *****)*pppppuVar33;
            func_0x0001073bf204();
          }
          FUN_1073bd6c8();
        }
        for (; pppuVar30 != (undefined8 ***)0x0; pppuVar30 = (undefined8 ***)*pppuVar30) {
          func_0x0001073bf1fc();
          lStack_e0 = 1;
          ppppuStack_f0 = pppppuVar33;
          pppuStack_e8 = pppuVar23 + 0x2a;
          *pppppuVar33 = (undefined8 ****)0x0;
          pppppuVar33[1] = (undefined8 ****)0x0;
          func_0x000104c2fe00(pppppuVar33 + 2,pppuVar30 + 2);
          ppuVar18 = pppuVar30[10];
          ppppuVar16 = (undefined8 ****)pppuVar30[9];
          pppppuVar33[10] = (undefined8 ****)pppuVar30[10];
          pppppuVar33[9] = ppppuVar16;
          if (ppuVar18 != (undefined8 **)0x0) {
            do {
              func_0x0001073becf8();
            } while (extraout_w10 != 0);
          }
          ppppuVar16 = (undefined8 ****)(pppuVar23 + 0x2b);
          func_0x00010726364c(ppppuVar16,pppppuVar33 + 2);
          pppppuVar33[1] = ppppuVar16;
          func_0x0001073bf204();
          ppppuStack_f0 = (undefined8 ****)0x0;
          pppppuVar33 = &ppppuStack_f0;
          FUN_1073beb20();
        }
      }
      func_0x0001073bd444(&pppuStack_78);
    }
    if (param_4 == (undefined8 ****)0x0) {
      ppppuVar16 = (undefined8 ****)0x0;
    }
    else {
      ppppuVar16 = param_4;
      func_0x0001073bf390();
      func_0x0001073befc8();
    }
    uVar2 = (*(long *)(param_2 + 0x30) - *(long *)(param_2 + 0x28)) / 0xa0;
    ppppuVar36 = (undefined8 ****)(pppuStack_150 + 0x15);
    pppuVar23 = *ppppuVar36;
    if ((ulong)(((long)pppuStack_150[0x17] - (long)pppuVar23) / 0x68) < uVar2) {
      if (0x276276276276276 < uVar2) goto LAB_1073bba0c;
      FUN_1073bd00c(&ppppuStack_f0,uVar2,((long)pppuStack_150[0x16] - (long)pppuVar23) / 0x68);
      FUN_1073bcf88(ppppuVar36,&ppppuStack_f0);
      func_0x0001073bd0b8(&ppppuStack_f0);
    }
    uVar26 = 0;
    uVar47 = NEON_fmov(0x3f800000,4);
    dVar41 = (double)NEON_fmov(0x3e800000,4);
    dVar42 = dVar41;
    for (; uVar26 != uVar2; uVar26 = uVar26 + 1) {
      plVar37 = (long *)(*(long *)(param_2 + 0x28) + uVar26 * 0xa0);
      lVar31 = *(long *)(param_2 + 0x40);
      plVar13 = plVar37;
      FUN_1073bbb44();
      plVar14 = plVar37;
      (**(code **)(*plVar37 + 0x48))(plVar37);
      FUN_1073bbb84((ulong)&uStack_140 | 4,plVar14);
      ppppuVar36 = (undefined8 ****)(lVar31 + uVar26 * 0x100);
      pppuVar23 = ppppuVar36[0x15];
      pppuStack_78 = (undefined8 ***)((ulong)pppuStack_78 & 0xffffffffffffff00);
      uStack_40 = 0;
      uStack_20 = 0;
      uStack_18 = 0;
      uStack_28 = 0;
      (**(code **)(*plVar37 + 0x30))(plVar37);
      func_0x00010726236c(&ppppuStack_f0);
      fVar39 = SUB84(pppuVar23,0) * (float)dVar42;
      fVar44 = (float)((ulong)pppuVar23 >> 0x20) * (float)dVar42;
      dVar42 = (double)CONCAT44(fVar44,fVar39);
      uVar45 = NEON_scvtf(CONCAT44((int)plVar13 >> 0x10,(int)(short)plVar13),4);
      uVar45 = CONCAT44(fVar44 + (float)((ulong)uVar45 >> 0x20),fVar39 + (float)uVar45);
      func_0x0001072e948c(&pppuStack_78,&ppppuStack_f0);
      func_0x00010724b3d8(&ppppuStack_f0);
      uStack_30 = 0;
      uVar3 = ((long)ppppuVar36[10] - (long)ppppuVar36[9]) / 0x1a8;
      uStack_38 = uVar45;
      if ((ulong)((long)(uStack_18 - uStack_28) / 0x70) < uVar3) {
        if (0x249249249249249 < uVar3) {
          FUN_1073bd100();
          goto LAB_1073bba4c;
        }
        FUN_1073bd190(&ppppuStack_f0,uVar3,(long)(uStack_20 - uStack_28) / 0x70,&uStack_18);
        FUN_1073bd10c(&uStack_28,&ppppuStack_f0);
        FUN_1073bd270(&ppppuStack_f0);
      }
      bVar29 = 0;
      for (uVar34 = 0; pppuVar23 = pppuStack_150, uVar34 != uVar3; uVar34 = uVar34 + 1) {
        pppuVar23 = ppppuVar36[9] + uVar34 * 0x35;
        iVar11 = (int)pppuVar23 + 8;
        func_0x000104c2d614();
        if (iVar11 == 0) {
          pppuVar17 = pppuVar23 + 1;
          ppppuVar25 = ppppuVar16;
          FUN_1074c26ec();
          pppuVar30 = pppuStack_150;
          if (((ulong)pppuVar17 & 1) == 0) goto LAB_1073bb020;
          pppuStack_160 = (undefined8 ****)0x0;
          pppuStack_158 = (undefined8 ****)0x0;
          ppppuVar32 = (undefined8 ****)pppuStack_150[0x29];
          ppppuVar15 = ppppuVar25;
          ppppuVar38 = ppppuVar36;
          if ((ppppuVar32 != (undefined8 ****)0x0) &&
             ((undefined8 ***)pppuStack_150[0x2b] != (undefined8 ***)0x0)) {
            ppppuVar20 = (undefined8 ****)(pppuStack_150 + 0x2b);
            func_0x00010726364c(ppppuVar20,pppuVar23 + 1);
            uVar35 = (long)ppppuVar32 - 1;
            if (((ulong)ppppuVar32 & uVar35) == 0) {
              ppppuVar38 = (undefined8 ****)((ulong)ppppuVar20 & uVar35);
            }
            else {
              ppppuVar38 = ppppuVar20;
              if (ppppuVar32 <= ppppuVar20) {
                uVar24 = 0;
                if (ppppuVar32 != (undefined8 ****)0x0) {
                  uVar24 = (ulong)ppppuVar20 / (ulong)ppppuVar32;
                }
                ppppuVar38 = (undefined8 ****)((long)ppppuVar20 - uVar24 * (long)ppppuVar32);
              }
            }
            ppuVar18 = (undefined8 **)pppuVar30[0x28][(long)ppppuVar38];
            ppppuVar15 = ppppuVar20;
            if (ppuVar18 != (undefined8 **)0x0) {
              do {
                while( true ) {
                  ppuVar18 = (undefined8 **)*ppuVar18;
                  if (ppuVar18 == (undefined8 **)0x0) goto LAB_1073bb0a8;
                  ppppuVar19 = (undefined8 ****)ppuVar18[1];
                  if (ppppuVar19 != ppppuVar20) break;
                  ppppuVar15 = (undefined8 ****)(ppuVar18 + 2);
                  func_0x000104c32db4(ppppuVar15,pppuVar23 + 1);
                  if ((int)ppppuVar15 != 0) {
                    if ((undefined8 ****)*ppuVar18[9] == ppppuVar25) {
                      FUN_1073bbc1c(&pppuStack_160,ppuVar18[9],ppuVar18[10]);
                      goto LAB_1073bb47c;
                    }
                    goto LAB_1073bb0a8;
                  }
                }
                if (((ulong)ppppuVar32 & uVar35) == 0) {
                  ppppuVar19 = (undefined8 ****)((ulong)ppppuVar19 & uVar35);
                }
                else if (ppppuVar32 <= ppppuVar19) {
                  uVar24 = 0;
                  if (ppppuVar32 != (undefined8 ****)0x0) {
                    uVar24 = (ulong)ppppuVar19 / (ulong)ppppuVar32;
                  }
                  ppppuVar19 = (undefined8 ****)((long)ppppuVar19 - uVar24 * (long)ppppuVar32);
                }
              } while (ppppuVar19 == ppppuVar38);
            }
          }
LAB_1073bb0a8:
          func_0x0001073bf1fc();
          ppppuVar32 = ppppuVar15 + 1;
          *ppppuVar32 = (undefined8 ***)0x0;
          ppppuVar15[2] = (undefined8 ***)0x0;
          *ppppuVar15 = (undefined8 ***)&PTR_FUN_1109ab920;
          dVar42 = 0.0;
          ppppuVar20 = ppppuVar15 + 3;
          ppppuVar15[4] = (undefined8 ***)0x0;
          *ppppuVar20 = (undefined8 ***)0x0;
          ppppuVar15[6] = (undefined8 ***)0x0;
          ppppuVar15[5] = (undefined8 ***)0x0;
          ppppuVar15[8] = (undefined8 ***)0x0;
          ppppuVar15[7] = (undefined8 ***)0x0;
          ppppuVar15[10] = (undefined8 ***)0x0;
          ppppuVar15[9] = (undefined8 ***)0x0;
          apppuStack_120[0] = (undefined8 ***)0x0;
          apppuStack_120[1] = (undefined8 ****)0x0;
          ppppuStack_f0 = (undefined8 ****)0x0;
          pppuStack_e8 = (undefined8 ****)0x0;
          pppuStack_160 = ppppuVar20;
          pppuStack_158 = ppppuVar15;
          func_0x0001073bd420(&ppppuStack_f0);
          func_0x0001073bd420(apppuStack_120);
          *ppppuVar20 = ppppuVar25;
          FUN_1073b9b50(&ppppuStack_f0,ppppuVar25);
          func_0x0001073bc89c(ppppuVar15 + 4,&ppppuStack_f0);
          func_0x0001073bc940(&ppppuStack_f0);
          pppuVar17 = pppuStack_150;
          func_0x000104c2fe00(&ppppuStack_f0,pppuVar23 + 1);
          do {
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(ppppuVar32,0x10);
            if (bVar10) {
              *ppppuVar32 = (undefined8 ***)((long)*ppppuVar32 + 1);
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppppuVar25 = (undefined8 ****)(pppuVar17 + 0x2b);
          pppuStack_b8 = ppppuVar20;
          pppuStack_b0 = ppppuVar15;
          func_0x00010726364c(ppppuVar25,&ppppuStack_f0);
          ppppuVar32 = (undefined8 ****)pppuVar17[0x29];
          ppppuVar15 = ppppuVar25;
          if (ppppuVar32 != (undefined8 ****)0x0) {
            uVar35 = (long)ppppuVar32 - 1;
            if (((ulong)ppppuVar32 & uVar35) == 0) {
              ppppuVar38 = (undefined8 ****)(uVar35 & (ulong)ppppuVar25);
            }
            else {
              ppppuVar38 = ppppuVar25;
              if (ppppuVar32 <= ppppuVar25) {
                uVar24 = 0;
                if (ppppuVar32 != (undefined8 ****)0x0) {
                  uVar24 = (ulong)ppppuVar25 / (ulong)ppppuVar32;
                }
                ppppuVar38 = (undefined8 ****)((long)ppppuVar25 - uVar24 * (long)ppppuVar32);
              }
            }
            ppuVar18 = (undefined8 **)pppuVar17[0x28][(long)ppppuVar38];
            if (ppuVar18 != (undefined8 **)0x0) {
              do {
                while( true ) {
                  ppuVar18 = (undefined8 **)*ppuVar18;
                  if (ppuVar18 == (undefined8 **)0x0) goto LAB_1073bb1e0;
                  ppppuVar20 = (undefined8 ****)ppuVar18[1];
                  if (ppppuVar20 != ppppuVar25) break;
                  ppppuVar15 = (undefined8 ****)(ppuVar18 + 2);
                  func_0x000104c32db4(ppppuVar15,&ppppuStack_f0);
                  if (((ulong)ppppuVar15 & 1) != 0) goto LAB_1073bb474;
                }
                if (((ulong)ppppuVar32 & uVar35) == 0) {
                  ppppuVar20 = (undefined8 ****)((ulong)ppppuVar20 & uVar35);
                }
                else if (ppppuVar32 <= ppppuVar20) {
                  uVar24 = 0;
                  if (ppppuVar32 != (undefined8 ****)0x0) {
                    uVar24 = (ulong)ppppuVar20 / (ulong)ppppuVar32;
                  }
                  ppppuVar20 = (undefined8 ****)((long)ppppuVar20 - uVar24 * (long)ppppuVar32);
                }
              } while (ppppuVar20 == ppppuVar38);
            }
          }
LAB_1073bb1e0:
          func_0x0001073bf1fc();
          ppppuVar20 = (undefined8 ****)(pppuVar17 + 0x2a);
          uStack_110 = 1;
          *ppppuVar15 = (undefined8 ***)0x0;
          ppppuVar15[1] = ppppuVar25;
          apppuStack_120[0] = ppppuVar15;
          apppuStack_120[1] = ppppuVar20;
          func_0x000104c2fe00(ppppuVar15 + 2,&ppppuStack_f0);
          ppppuVar15[10] = pppuStack_b0;
          ppppuVar15[9] = pppuStack_b8;
          pppuStack_b8 = (undefined8 ****)0x0;
          pppuStack_b0 = (undefined8 ****)0x0;
          dVar42 = (double)(ulong)(uint)(float)((long)pppuVar17[0x2b] + 1);
          if ((ppppuVar32 == (undefined8 ****)0x0) ||
             (*(float *)(pppuVar17 + 0x2c) * (float)ppppuVar32 < (float)((long)pppuVar17[0x2b] + 1))
             ) {
            bVar8 = (undefined8 ****)0x2 < ppppuVar32;
            bVar10 = ppppuVar32 == (undefined8 ****)0x3;
            func_0x0001073bf368((long)ppppuVar32 << 1);
            ppppuVar38 = extraout_x8_00;
            if (!bVar8 || bVar10) {
              ppppuVar38 = extraout_x9;
            }
            if ((long)ppppuVar38 - 1U == 0) {
              ppppuVar38 = (undefined8 ****)0x2;
            }
            else if (((ulong)ppppuVar38 & (long)ppppuVar38 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            ppppuVar32 = (undefined8 ****)pppuVar17[0x29];
            if (ppppuVar32 < ppppuVar38) {
LAB_1073bb290:
              ppppuVar32 = ppppuVar38;
              ppppuVar38 = ppppuVar32;
              FUN_1073beb04(ppppuVar32);
              FUN_1073beaec(pppuVar17 + 0x28,ppppuVar38);
              pppuVar17[0x29] = ppppuVar32;
              pppuVar30 = (undefined8 ***)pppuVar17[0x28];
              for (ppppuVar38 = (undefined8 ****)0x0; ppppuVar32 != ppppuVar38;
                  ppppuVar38 = (undefined8 ****)((long)ppppuVar38 + 1)) {
                pppuVar30[(long)ppppuVar38] = (undefined8 **)0x0;
              }
              pppuVar27 = *ppppuVar20;
              if (pppuVar27 != (undefined8 ***)0x0) {
                ppppuVar38 = (undefined8 ****)pppuVar27[1];
                uVar24 = (long)ppppuVar32 - 1;
                uVar35 = 0;
                if (ppppuVar32 != (undefined8 ****)0x0) {
                  uVar35 = (ulong)ppppuVar38 / (ulong)ppppuVar32;
                }
                ppppuVar19 = ppppuVar38;
                if (ppppuVar32 <= ppppuVar38) {
                  ppppuVar19 = (undefined8 ****)((long)ppppuVar38 - uVar35 * (long)ppppuVar32);
                }
                if (((ulong)ppppuVar32 & uVar24) == 0) {
                  ppppuVar19 = (undefined8 ****)((ulong)ppppuVar38 & uVar24);
                }
                pppuVar30[(long)ppppuVar19] = ppppuVar20;
                while (pppuVar28 = pppuVar27, pppuVar27 = (undefined8 ***)*pppuVar28,
                      pppuVar27 != (undefined8 ***)0x0) {
                  ppppuVar38 = (undefined8 ****)pppuVar27[1];
                  if (((ulong)ppppuVar32 & uVar24) == 0) {
                    ppppuVar38 = (undefined8 ****)((ulong)ppppuVar38 & uVar24);
                  }
                  else if (ppppuVar32 <= ppppuVar38) {
                    uVar35 = 0;
                    if (ppppuVar32 != (undefined8 ****)0x0) {
                      uVar35 = (ulong)ppppuVar38 / (ulong)ppppuVar32;
                    }
                    ppppuVar38 = (undefined8 ****)((long)ppppuVar38 - uVar35 * (long)ppppuVar32);
                  }
                  if (ppppuVar38 != ppppuVar19) {
                    if (pppuVar30[(long)ppppuVar38] == (undefined8 **)0x0) {
                      pppuVar30[(long)ppppuVar38] = pppuVar28;
                      ppppuVar19 = ppppuVar38;
                    }
                    else {
                      *pppuVar28 = *pppuVar27;
                      *pppuVar27 = (undefined8 **)*pppuVar30[(long)ppppuVar38];
                      *pppuVar30[(long)ppppuVar38] = pppuVar27;
                      pppuVar27 = pppuVar28;
                    }
                  }
                }
              }
            }
            else if (ppppuVar38 < ppppuVar32) {
              dVar42 = (double)(ulong)(uint)((float)pppuVar17[0x2b] / *(float *)(pppuVar17 + 0x2c));
              ppppuVar19 = (undefined8 ****)
                           (long)((float)pppuVar17[0x2b] / *(float *)(pppuVar17 + 0x2c));
              if ((ppppuVar32 < (undefined8 ****)0x3) ||
                 (((ulong)ppppuVar32 & (long)ppppuVar32 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else {
                func_0x0001073bf058();
              }
              if (ppppuVar38 <= ppppuVar19) {
                ppppuVar38 = ppppuVar19;
              }
              if (ppppuVar38 < ppppuVar32) {
                if (ppppuVar38 != (undefined8 ****)0x0) goto LAB_1073bb290;
                FUN_1073beaec(pppuVar17 + 0x28,0);
                ppppuVar32 = (undefined8 ****)0x0;
                pppuVar17[0x29] = (undefined8 ***)0x0;
              }
              else {
                ppppuVar32 = (undefined8 ****)pppuVar17[0x29];
              }
            }
            if (((ulong)ppppuVar32 & (long)ppppuVar32 - 1U) == 0) {
              ppppuVar38 = (undefined8 ****)((long)ppppuVar32 - 1U & (ulong)ppppuVar25);
            }
            else {
              ppppuVar38 = ppppuVar25;
              if (ppppuVar32 <= ppppuVar25) {
                uVar35 = 0;
                if (ppppuVar32 != (undefined8 ****)0x0) {
                  uVar35 = (ulong)ppppuVar25 / (ulong)ppppuVar32;
                }
                ppppuVar38 = (undefined8 ****)((long)ppppuVar25 - uVar35 * (long)ppppuVar32);
              }
            }
          }
          pppuVar30 = (undefined8 ***)pppuVar17[0x28];
          ppuVar18 = pppuVar30[(long)ppppuVar38];
          if (ppuVar18 == (undefined8 **)0x0) {
            *ppppuVar15 = *ppppuVar20;
            *ppppuVar20 = ppppuVar15;
            pppuVar30[(long)ppppuVar38] = ppppuVar20;
            if (*ppppuVar15 != (undefined8 ***)0x0) {
              ppppuVar25 = (undefined8 ****)(*ppppuVar15)[1];
              if (((ulong)ppppuVar32 & (long)ppppuVar32 - 1U) == 0) {
                ppppuVar25 = (undefined8 ****)((ulong)ppppuVar25 & (long)ppppuVar32 - 1U);
              }
              else if (ppppuVar32 <= ppppuVar25) {
                uVar35 = 0;
                if (ppppuVar32 != (undefined8 ****)0x0) {
                  uVar35 = (ulong)ppppuVar25 / (ulong)ppppuVar32;
                }
                ppppuVar25 = (undefined8 ****)((long)ppppuVar25 - uVar35 * (long)ppppuVar32);
              }
              pppuVar30[(long)ppppuVar25] = ppppuVar15;
            }
          }
          else {
            *ppppuVar15 = (undefined8 ***)*ppuVar18;
            *ppuVar18 = ppppuVar15;
          }
          apppuStack_120[0] = (undefined8 ***)0x0;
          pppuVar17[0x2b] = (undefined8 ***)((long)pppuVar17[0x2b] + 1);
          FUN_1073beb20(apppuStack_120);
LAB_1073bb474:
          func_0x0001073bd2b8(&ppppuStack_f0);
LAB_1073bb47c:
          if (((ulong)pppuStack_160[7] & 1) == 0) {
            if ((bVar29 & 1) == 0) {
              bVar29 = *(byte *)((long)pppuVar23 + 0x173);
            }
            else {
              bVar29 = 1;
            }
          }
          else {
            pppuStack_e8 = (undefined8 ****)0x0;
            lStack_e0 = 0;
            uStack_c0 = 0;
            uStack_c8 = 0;
            pppuStack_b0 = (undefined8 ****)0x0;
            pppuStack_b8 = (undefined8 ****)0x0;
            uStack_a0 = 0;
            uStack_a8 = 0;
            uStack_90 = 0;
            uStack_98 = 0;
            uStack_88 = 0;
            ppppuStack_f0 = (undefined8 ****)CONCAT44(ppppuStack_f0._4_4_,(int)uVar34);
            FUN_1073bbc1c(&pppuStack_e8,pppuStack_160,pppuStack_158);
            uStack_d8 = *(undefined4 *)(pppuVar23 + 0x22);
            uStack_d4 = *(undefined4 *)((long)pppuVar23 + 0x114);
            uStack_d0 = *(undefined4 *)(pppuVar23 + 0x23);
            uStack_cc = *(undefined4 *)((long)pppuVar23 + 0x11c);
            FUN_1073bd2e4(&uStack_c8,0x20501);
            FUN_1073bd2e4(&uStack_c8,0x20504);
            func_0x00010089a97c(&pppuStack_b0,0x28);
            pppuVar17 = pppuStack_e8;
            FUN_1073bbc60(pppuStack_e8 + 1);
            pppuVar30 = pppuStack_e8;
            iVar11 = *(int *)((long)pppuVar17 + 0xc);
            FUN_1073bbc60(pppuStack_e8 + 1);
            iVar1 = *(int *)(pppuVar30 + 2);
            uVar43 = NEON_ucvtf(CONCAT44(iVar1,iVar11),4);
            ppuVar18 = pppuVar23[0x27];
            fVar39 = (float)((ulong)uVar43 >> 0x20);
            uVar45 = uVar47;
            if (((ulong)pppuVar23[0x26] >> 0x20 & 1) == 0) {
              if (((iVar1 != 0) && (iVar11 != 0)) && (((ulong)ppuVar18 >> 0x20 & 1) != 0)) {
                fVar44 = SUB84(ppuVar18,0) / fVar39;
                uVar45 = CONCAT44(fVar44,fVar44);
              }
            }
            else if ((iVar11 != 0) && (iVar1 != 0)) {
              fVar44 = SUB84(pppuVar23[0x26],0) / (float)uVar43;
              uVar45 = CONCAT44(fVar44,fVar44);
              if (((ulong)ppuVar18 >> 0x20 & 1) != 0) {
                uVar45 = CONCAT44(SUB84(ppuVar18,0) / fVar39,fVar44);
              }
            }
            fVar44 = *(float *)(pppuVar23 + 0x24);
            ppuVar18 = pppuVar23[0x2d];
            switch(*(undefined1 *)(pppuVar23 + 8)) {
            default:
              puVar21 = (ulong *)&UNK_10de64470;
              break;
            case 1:
              puVar21 = (ulong *)&UNK_10de64370;
              break;
            case 2:
              puVar21 = (ulong *)&UNK_10de64390;
              break;
            case 3:
              puVar21 = (ulong *)&UNK_10de643b0;
              break;
            case 4:
              puVar21 = (ulong *)&UNK_10de643d0;
              break;
            case 5:
              puVar21 = (ulong *)&UNK_10de643f0;
              break;
            case 6:
              puVar21 = (ulong *)&UNK_10de64410;
              break;
            case 7:
              puVar21 = (ulong *)&UNK_10de64430;
              break;
            case 8:
              puVar21 = (ulong *)&UNK_10de64450;
            }
            apppuStack_120[1] = (undefined8 ****)puVar21[1];
            apppuStack_120[0] = (undefined8 ***)*puVar21;
            uStack_108 = puVar21[3];
            uStack_110 = puVar21[2];
            fVar40 = *(float *)(pppuVar23 + 0x2c);
            cVar4 = *(char *)((long)pppuVar23 + 0x164);
            ppuVar46 = pppuVar23[0x2b];
            for (lVar31 = 0; lVar31 != 0x20; lVar31 = lVar31 + 8) {
              *(ulong *)((long)afStack_180 + lVar31) =
                   CONCAT44((float)((ulong)ppuVar46 >> 0x20) +
                            (float)((ulong)uVar45 >> 0x20) * fVar44 * fVar39 *
                            (float)((ulong)*(undefined8 *)((long)apppuStack_120 + lVar31) >> 0x20),
                            SUB84(ppuVar46,0) +
                            (float)uVar45 * fVar44 * (float)uVar43 *
                            (float)*(undefined8 *)((long)apppuStack_120 + lVar31));
            }
            if (fVar40 != 0.0) {
              uStack_128 = 0x3f80000000000000;
              uStack_130 = 0x3f800000;
              func_0x00010787668c(fVar40 * -0.017453292,&uStack_130,&uStack_130);
              uVar43 = uStack_128;
              uVar45 = uStack_130;
              if (((cVar4 != '\x02') && (ppuVar18 = ppuVar46, cVar4 != '\x01')) &&
                 (ppuVar18 = (undefined8 **)0x0, cVar4 == '\0')) {
                ppuVar18 = (undefined8 **)
                           CONCAT44((afStack_180[1] + afStack_180[3] + fStack_16c + fStack_164) *
                                    (float)((ulong)dVar41 >> 0x20),
                                    (afStack_180[0] + afStack_180[2] + afStack_180[4] + fStack_168)
                                    * SUB84(dVar41,0));
              }
              fVar39 = (float)((ulong)ppuVar18 >> 0x20);
              lVar31 = 4;
              pfVar22 = afStack_180;
              do {
                fVar44 = *pfVar22 - SUB84(ppuVar18,0);
                fVar40 = pfVar22[1] - fVar39;
                *(ulong *)pfVar22 =
                     CONCAT44(fVar39 + (float)((ulong)uVar43 >> 0x20) * fVar40 +
                                       (float)((ulong)uVar45 >> 0x20) * fVar44,
                              SUB84(ppuVar18,0) + (float)uVar43 * fVar40 + (float)uVar45 * fVar44);
                lVar31 = lVar31 + -1;
                pfVar22 = pfVar22 + 2;
              } while (lVar31 != 0);
            }
            fVar6 = fStack_164;
            fVar5 = fStack_16c;
            fVar40 = afStack_180[4];
            fVar44 = afStack_180[3];
            fVar39 = afStack_180[2];
            dVar42 = (double)(ulong)(uint)fStack_168;
            func_0x0001073b9c24(afStack_180[0],afStack_180[1],0,0,&pppuStack_b0);
            func_0x0001073b9c24(fVar39,fVar44,0x3f800000,0,&pppuStack_b0);
            func_0x0001073b9c24(fVar40,fVar5,0,0x3f800000,&pppuStack_b0);
            func_0x0001073b9c24(dVar42,fVar6,0x3f800000,0x3f800000,&pppuStack_b0);
            apppuStack_120[0] = (undefined8 ***)((ulong)apppuStack_120[0] & 0xffffffffffff0000);
            func_0x0001073bed74();
            apppuStack_120[0]._0_2_ = 1;
            func_0x0001073bed74();
            apppuStack_120[0]._0_2_ = 2;
            func_0x0001073bed74();
            apppuStack_120[0]._0_2_ = 1;
            func_0x0001073bed74();
            apppuStack_120[0]._0_2_ = 3;
            func_0x0001073bed74();
            apppuStack_120[0] = (undefined8 ***)CONCAT62(apppuStack_120[0]._2_6_,2);
            func_0x0001073bed74();
            if (uStack_20 < uStack_18) {
              FUN_1073bd1f0(uStack_20,&ppppuStack_f0);
              uVar35 = uStack_20 + 0x70;
            }
            else {
              if (0x249249249249249 < (long)(uStack_20 - uStack_28) / 0x70 + 1U) {
                FUN_1073bd100();
                goto LAB_1073bba4c;
              }
              func_0x0001073beec4();
              uVar45 = extraout_x9_00;
              if (0x124924924924923 < extraout_x8_01) {
                uVar45 = extraout_x11;
              }
              FUN_1073bd190(apppuStack_120,uVar45);
              FUN_1073bd1f0(uStack_110,&ppppuStack_f0);
              uStack_110 = uStack_110 + 0x70;
              FUN_1073bd10c(&uStack_28,apppuStack_120);
              uVar35 = uStack_20;
              FUN_1073bd270(apppuStack_120);
            }
            uStack_20 = uVar35;
            func_0x0001073bd398(&ppppuStack_f0);
          }
          func_0x0001073bd420(&pppuStack_160);
        }
        else {
LAB_1073bb020:
          if ((bVar29 & 1) == 0) {
            bVar29 = *(byte *)((long)pppuVar23 + 0x173);
          }
          else {
            bVar29 = 1;
          }
        }
      }
      if (uStack_28 != uStack_20 && (bVar29 & 1) == 0) {
        pppuVar17 = (undefined8 ***)pppuStack_150[0x16];
        if (pppuVar17 < pppuStack_150[0x17]) {
          func_0x0001073bd06c(pppuVar17,&pppuStack_78);
          pppuVar17 = pppuVar17 + 0xd;
        }
        else {
          if (0x276276276276276 < ((long)pppuVar17 - (long)pppuStack_150[0x15]) / 0x68 + 1U) {
            FUN_1073bcf7c();
            goto LAB_1073bba4c;
          }
          func_0x0001073beec4();
          uVar45 = extraout_x9_01;
          if (0x13b13b13b13b13a < extraout_x8_02) {
            uVar45 = extraout_x11_00;
          }
          FUN_1073bd00c(&ppppuStack_f0,uVar45);
          func_0x0001073bd06c(lStack_e0,&pppuStack_78);
          lStack_e0 = lStack_e0 + 0x68;
          FUN_1073bcf88(pppuVar23 + 0x15,&ppppuStack_f0);
          pppuVar17 = (undefined8 ***)pppuVar23[0x16];
          func_0x0001073bd0b8(&ppppuStack_f0);
        }
        pppuVar23[0x16] = pppuVar17;
      }
      func_0x0001073bd3d4(&pppuStack_78);
    }
    uVar9 = pppuStack_150[0x15] == pppuStack_150[0x16];
    if (!(bool)uVar9) {
      pppuStack_190 = pppuStack_150;
      lStack_188 = lStack_148;
      if (lStack_148 != 0) {
        do {
          func_0x0001073becf8();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001073beff0(uVar12,param_2,param_4,&pppuStack_190);
      func_0x0001073bd444(&pppuStack_190);
    }
    func_0x0001073bd444(&pppuStack_150);
  }
  func_0x0001073bed60(uStack_10);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_1073bba0c:
  FUN_1073bcf7c();
LAB_1073bba4c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1073bba50);
  (*pcVar7)();
}



/* Entry: 1073bbb44; end: 1073bbb83;  */

undefined4 FUN_1073bbb44(long param_1)

{
  undefined8 *puVar1;
  undefined8 auStack_20 [2];
  
  puVar1 = auStack_20;
  (**(code **)(**(long **)(param_1 + 0x30) + 0x38))(auStack_20);
  FUN_107330078();
  return **(undefined4 **)*puVar1;
}



/* Entry: 1073bbb84; end: 1073bbc1b;  */

double FUN_1073bbb84(byte *param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  double dStack_40;
  double dStack_38;
  
  auVar3._0_8_ = *(ulong *)(param_1 + 4) & 0xffffffff;
  auVar3._8_8_ = *(ulong *)(param_1 + 4) >> 0x20;
  auVar3 = NEON_ucvtf(auVar3,8);
  auVar5 = NEON_fmov(0x3fe0000000000000,8);
  dStack_40 = (auVar3._0_8_ + auVar5._0_8_) * 512.0;
  dStack_38 = (auVar3._8_8_ + auVar5._8_8_) * 512.0;
  uVar1 = func_0x000107282130((double)(1 << (ulong)(*param_1 & 0x1f)),&dStack_40,0);
  uVar4 = NEON_ucvtf((ulong)*param_1);
  dVar2 = (double)func_0x000107246334(uVar1,uVar4,0,0x4039800000000000);
  return (double)param_2 / (dVar2 * 512.0);
}



/* Entry: 1073bbc1c; end: 1073bbc5f;  */

undefined8 * FUN_1073bbc1c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 != 0) {
    do {
      func_0x0001073becf8();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x0001073bd420(&uStack_30);
  return param_1;
}



/* Entry: 1073bbc60; end: 1073bbc77;  */

void FUN_1073bbc60(long param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  return;
}



/* Entry: 1073bbc78; end: 1073bbc83;  */

void FUN_1073bbc78(void)

{
  return;
}



/* Entry: 1073bbc84; end: 1073bbcfb;  */

long * FUN_1073bbc84(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long alStack_48 [5];
  
  if ((ulong)(param_1[2] - *param_1 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_1073bbd38();
      func_0x0001073bf078();
      FUN_1073bbdfc();
      func_0x0001073bedec();
      uVar1 = param_1[1];
      if (uVar1 < (ulong)param_1[2]) {
        FUN_1073bbe64();
        plVar2 = (long *)(uVar1 + 0x10);
      }
      else {
        plVar2 = param_1;
        FUN_1073bbe98();
      }
      param_1[1] = (long)plVar2;
      return plVar2 + -2;
    }
    FUN_1073bbd78(alStack_48,param_2,param_1[1] - *param_1 >> 4);
    func_0x00010014b278();
    FUN_1073bbd44();
    param_1 = alStack_48;
    FUN_1073bbdfc(param_1);
  }
  return param_1;
}



/* Entry: 1073bbcfc; end: 1073bbd37;  */

long FUN_1073bbcfc(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1073bbe64();
    lVar2 = uVar1 + 0x10;
  }
  else {
    lVar2 = param_1;
    FUN_1073bbe98();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x10;
}



/* Entry: 1073bbd38; end: 1073bbd43;  */

void FUN_1073bbd38(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001073becbc();
  func_0x0001073bed28();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001073bec50();
  return;
}



/* Entry: 1073bbd44; end: 1073bbd77;  */

void FUN_1073bbd44(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001073bed28();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001073bec50();
  return;
}



/* Entry: 1073bbd78; end: 1073bbddf;  */

long * FUN_1073bbd78(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001073bbdc0();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 1073bbde0; end: 1073bbdfb;  */

long * FUN_1073bbde0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1073bbe28();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073bbdfc; end: 1073bbe27;  */

long * FUN_1073bbdfc(long *param_1)

{
  FUN_1073bbe28();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073bbe28; end: 1073bbe2f;  */

void FUN_1073bbe28(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073bee44(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001073bd444();
  }
  return;
}



/* Entry: 1073bbe30; end: 1073bbe63;  */

void FUN_1073bbe30(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073bee44();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x0001073bd444();
  }
  return;
}



/* Entry: 1073bbe64; end: 1073bbe97;  */

void FUN_1073bbe64(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  lVar5 = param_2[1];
  uVar6 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined8 **)(param_1 + 8) = puVar4 + 2;
  return;
}



/* Entry: 1073bbe98; end: 1073bbf4b;  */

void FUN_1073bbe98(long *param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  int extraout_w10;
  ulong uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  undefined8 *puStack_38;
  
  if ((param_1[1] - *param_1 >> 4) + 1U >> 0x3c != 0) {
    FUN_1073bbd38();
    func_0x0001073bf078();
    FUN_1073bbdfc();
    func_0x0001073bedec();
    func_0x0001073beff8();
    func_0x0001073bbf70();
    return;
  }
  func_0x0001073bee90();
  uVar2 = param_1[2] - extraout_x8 >> 3;
  if (uVar2 <= extraout_x9) {
    uVar2 = extraout_x9;
  }
  if (0x7fffffffffffffef < (ulong)(param_1[2] - extraout_x8)) {
    uVar2 = 0xfffffffffffffff;
  }
  FUN_1073bbd78(auStack_48,uVar2);
  lVar1 = unaff_x20[1];
  uVar3 = *unaff_x20;
  puStack_38[1] = unaff_x20[1];
  *puStack_38 = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x0001073becf8();
    } while (extraout_w10 != 0);
  }
  puStack_38 = puStack_38 + 2;
  func_0x00010014b278();
  FUN_1073bbd44();
  func_0x00010014b314();
  FUN_1073bbdfc();
  return;
}



/* Entry: 1073bbf4c; end: 1073bbfa7;  */

void FUN_1073bbf4c(void)

{
  func_0x0001073beff8();
  func_0x0001073bbf70();
  return;
}



/* Entry: 1073bbfa8; end: 1073bbfaf;  */

void FUN_1073bbfa8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073bee44(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001073bd444();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073bbfb0; end: 1073bc01b;  */

void FUN_1073bbfb0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073bee44();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x0001073bd444();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073bc01c; end: 1073bc0b3;  */

void FUN_1073bc01c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010014b124();
  FUN_1073bc0b4();
  lVar1 = *unaff_x19;
  lVar2 = unaff_x19[1];
  plVar3 = unaff_x19 + 2;
  if (param_1 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    FUN_1073bc134();
  }
  *(undefined8 *)((long)plVar3 + (lVar2 - lVar1)) = *unaff_x20;
  func_0x00010014b278();
  FUN_1073bc0f4();
  func_0x00010014b314();
  FUN_1073bc170();
  return;
}



/* Entry: 1073bc0b4; end: 1073bc0f3;  */

long * FUN_1073bc0b4(long *param_1,long *param_2)

{
  long *plVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 2);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x1fffffffffffffff;
    }
    return plVar1;
  }
  FUN_1073bc128();
  func_0x0001073bed28();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001073bec50();
  return param_1;
}



/* Entry: 1073bc0f4; end: 1073bc127;  */

void FUN_1073bc0f4(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001073bed28();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001073bec50();
  return;
}



/* Entry: 1073bc128; end: 1073bc133;  */

void FUN_1073bc128(void)

{
  func_0x0001073becbc();
  FUN_1073bc154();
  return;
}



/* Entry: 1073bc134; end: 1073bc153;  */

void FUN_1073bc134(void)

{
  FUN_1073bc154();
  return;
}



/* Entry: 1073bc154; end: 1073bc16f;  */

long * FUN_1073bc154(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1073bc19c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073bc170; end: 1073bc19b;  */

long * FUN_1073bc170(long *param_1)

{
  FUN_1073bc19c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073bc19c; end: 1073bc1f3;  */

void FUN_1073bc19c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1073bc1f4; end: 1073bc21b;  */

void FUN_1073bc1f4(void)

{
  long unaff_x19;
  
  func_0x0001073bf39c();
  func_0x0001073bd444();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(unaff_x19 + 0x18);
  return;
}



/* Entry: 1073bc21c; end: 1073bc227;  */

undefined8 * FUN_1073bc21c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x0001073becbc();
  if (param_3 != 0) {
    do {
      func_0x0001073becf8();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x0001073bef28();
  return param_1;
}



/* Entry: 1073bc228; end: 1073bc267;  */

undefined8 * FUN_1073bc228(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  if (param_3 != 0) {
    do {
      func_0x0001073becf8();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x0001073bef28();
  return param_1;
}



/* Entry: 1073bc268; end: 1073bc2bf;  */

void FUN_1073bc268(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073bee90();
  func_0x00010054f8dc();
  FUN_1073bc2c0(param_1 + 0x18,unaff_x20 + 0x18);
  FUN_1073bc2c0(unaff_x19 + 0x30,unaff_x20 + 0x30);
  return;
}



/* Entry: 1073bc2c0; end: 1073bc2f7;  */

undefined8 * FUN_1073bc2c0(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1073bc2f8(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
  return param_1;
}



/* Entry: 1073bc2f8; end: 1073bc367;  */

void FUN_1073bc2f8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001073bee90();
    func_0x0001057f91bc();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      func_0x0001073bf0a4();
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  uStack_38 = 1;
  func_0x0001057f9220(&uStack_40);
  return;
}



/* Entry: 1073bc368; end: 1073bc393;  */

void FUN_1073bc368(void)

{
  long unaff_x19;
  
  func_0x0001073bf39c();
  func_0x0001057f951c();
  func_0x0001057f951c(unaff_x19 + 0x18);
  func_0x000100100fd4(&stack0xffffffffffffffd8);
  return;
}



/* Entry: 1073bc394; end: 1073bc3d3;  */

long * FUN_1073bc394(long *param_1,long *param_2)

{
  long *plVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 1);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7ffffffffffffffb < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x3fffffffffffffff;
    }
    return plVar1;
  }
  FUN_1073bc408();
  func_0x0001073bed28();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001073bec50();
  return param_1;
}



/* Entry: 1073bc3d4; end: 1073bc407;  */

void FUN_1073bc3d4(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001073bed28();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x21;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001073bec50();
  return;
}



/* Entry: 1073bc408; end: 1073bc413;  */

undefined1  [16] FUN_1073bc408(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  func_0x0001073becbc();
  if ((ulong)param_1 >> 0x3e == 0) {
    lVar1 = (long)param_1 << 2;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -4;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1073bc414; end: 1073bc483;  */

undefined1  [16] FUN_1073bc414(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3e == 0) {
    lVar1 = (long)param_1 << 2;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -4;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1073bc484; end: 1073bc4f7;  */

float FUN_1073bc484(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2;
  if (*param_1 <= *param_2) {
    fVar1 = *param_1;
  }
  return fVar1;
}



/* Entry: 1073bc4f8; end: 1073bc5bb;  */

void FUN_1073bc4f8(long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  uVar2 = param_4;
  func_0x0001073bee90();
  lVar3 = *param_1;
  if ((ulong)(param_1[2] - lVar3 >> 1) < uVar2) {
    func_0x000100171efc();
    func_0x00010730bcd0();
    func_0x000100b56b04();
    lVar3 = *(long *)(unaff_x19 + 8);
  }
  else {
    lVar4 = *(long *)(unaff_x19 + 8);
    if ((ulong)(lVar4 - lVar3 >> 1) < param_4) {
      lVar1 = unaff_x20 + (lVar4 - lVar3);
      if (lVar4 != lVar3) {
        _memmove(lVar3);
        lVar4 = *(long *)(unaff_x19 + 8);
      }
      param_3 = param_3 - lVar1;
      if (param_3 != 0) {
        _memmove(lVar4,lVar1,param_3);
      }
      lVar3 = lVar4 + param_3;
      goto LAB_1073bc5b0;
    }
  }
  if (param_3 - unaff_x20 != 0) {
    func_0x0001073bf0a4();
  }
  lVar3 = lVar3 + (param_3 - unaff_x20);
LAB_1073bc5b0:
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}



/* Entry: 1073bc5bc; end: 1073bc683;  */

void FUN_1073bc5bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001073bee90();
  uVar2 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  func_0x0001073bf3a8();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  param_1[0xb] = param_2[0xb];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (*(char *)(param_2 + 0x12) == '\x01') {
    FUN_1073bc684(param_1 + 0xc,unaff_x20 + 0x60);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar5;
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar4;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x98) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xd0) = 0;
  *(undefined8 *)(unaff_x19 + 0xd8) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x19 + 200) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xd8) = *(undefined8 *)(unaff_x20 + 0xd8);
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  return;
}



/* Entry: 1073bc684; end: 1073bc69f;  */

void FUN_1073bc684(long param_1)

{
  FUN_1073bc6a0();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1073bc6a0; end: 1073bc6d7;  */

void FUN_1073bc6a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_1[5] = uVar1;
  return;
}



/* Entry: 1073bc6d8; end: 1073bc6e3;  */

long FUN_1073bc6d8(long param_1)

{
  func_0x0001073becbc();
  func_0x0001073bc728(param_1 + 200);
  func_0x0001073bc940(param_1 + 0x60);
  func_0x0001073bc74c(param_1 + 0x48);
  func_0x00010730b05c(param_1 + 0x30);
  func_0x000100100fec(param_1 + 0x18);
  return param_1;
}



/* Entry: 1073bc6e4; end: 1073bc793;  */

long FUN_1073bc6e4(long param_1)

{
  func_0x0001073bc728(param_1 + 200);
  func_0x0001073bc940(param_1 + 0x60);
  func_0x0001073bc74c(param_1 + 0x48);
  func_0x00010730b05c(param_1 + 0x30);
  func_0x000100100fec(param_1 + 0x18);
  return param_1;
}



/* Entry: 1073bc794; end: 1073bc7a7;  */

void FUN_1073bc794(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073bc7a8; end: 1073bc7cb;  */

void FUN_1073bc7a8(void)

{
  func_0x0001073beff8();
  FUN_1073bc7cc();
  return;
}



/* Entry: 1073bc7cc; end: 1073bc7df;  */

void FUN_1073bc7cc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073bc7e0; end: 1073bc82b;  */

void FUN_1073bc7e0(long param_1)

{
  func_0x000100171ef0();
  if (param_1 != 0) {
    func_0x0001073bf02c();
  }
  return;
}



/* Entry: 1073bc82c; end: 1073bc853;  */

int FUN_1073bc82c(long param_1)

{
  return (((uint)*(ushort *)(param_1 + 4) + (uint)*(ushort *)(param_1 + 8)) - 1 & 0xffff |
         ((uint)*(ushort *)(param_1 + 6) + (uint)*(ushort *)(param_1 + 10)) * 0x10000) - 0x10000;
}



/* Entry: 1073bc854; end: 1073bc873;  */

void FUN_1073bc854(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    FUN_1073bc874();
  }
  return;
}



/* Entry: 1073bc874; end: 1073bc9a7;  */

void FUN_1073bc874(void)

{
  long unaff_x19;
  
  func_0x0001073bf39c();
  func_0x00010724e0ac();
  func_0x00010724e0ac(unaff_x19 + 0x18);
  return;
}



/* Entry: 1073bc9a8; end: 1073bc9ef;  */

void FUN_1073bc9a8(void)

{
  func_0x00010014b124();
  func_0x0001073bf26c();
  func_0x0001073bef04();
  func_0x0001073bf2c8();
  func_0x00010014b278();
  func_0x00010730ba50();
  func_0x00010014b314();
  func_0x00010730bb04();
  return;
}



/* Entry: 1073bc9f0; end: 1073bca87;  */

long FUN_1073bc9f0(long param_1)

{
  func_0x00010730b284(param_1 + 0x278);
  func_0x0001073bca34(param_1 + 0x1d8);
  func_0x0001073bca34(param_1 + 0x148);
  func_0x0001073bca34(param_1 + 0xa8);
  func_0x0001073bca34(param_1 + 0x10);
  return param_1;
}



/* Entry: 1073bca88; end: 1073bcb1f;  */

void FUN_1073bca88(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long lVar4;
  long unaff_x21;
  
  func_0x0001073bee90();
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    func_0x0001073bf198();
  }
  else {
    lVar3 = ((long)(*(ulong *)(param_1 + 8) - *unaff_x19) >> 6) + 1;
    plVar1 = unaff_x19;
    FUN_1073bcbe8();
    lVar2 = *unaff_x19;
    unaff_x21 = unaff_x19[1];
    if (plVar1 == (long *)0x0) {
      lVar3 = 0;
    }
    else {
      FUN_1073bcc34();
    }
    func_0x0001073bf198((long)plVar1 + (unaff_x21 - lVar2));
    lVar4 = extraout_x8 - (unaff_x19[1] - *unaff_x19);
    _memcpy(lVar4);
    lVar2 = *unaff_x19;
    *unaff_x19 = lVar4;
    unaff_x19[1] = unaff_x21;
    unaff_x19[2] = (long)(plVar1 + lVar3 * 8);
    if (lVar2 != 0) {
      __ZdlPv();
    }
  }
  unaff_x19[1] = unaff_x21;
  return;
}



/* Entry: 1073bcb20; end: 1073bcbe7;  */

long FUN_1073bcb20(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1073bcbe8; end: 1073bcc33;  */

/* WARNING: Possible PIC construction at 0x0001073bcc24: Changing call to branch */

undefined1  [16] FUN_1073bcbe8(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((ulong)param_2 >> 0x3a == 0) {
    plVar2 = (long *)(param_1[2] - *param_1 >> 5);
    if (plVar2 <= param_2) {
      plVar2 = param_2;
    }
    if (0x7fffffffffffffbf < (ulong)(param_1[2] - *param_1)) {
      plVar2 = (long *)0x3ffffffffffffff;
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar2;
    return auVar4;
  }
  func_0x0001073becbc();
  if ((ulong)param_1 >> 0x3a == 0) {
    lVar1 = (long)param_1 << 6;
    __Znwm(lVar1);
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = lVar1;
    return auVar6;
  }
  func_0x000104bd35f4();
  lVar3 = param_2[1];
  lVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  *param_1 = lVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  lVar3 = param_2[3];
  lVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[3] = lVar3;
  param_1[5] = lVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  func_0x0001073bf3a8();
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 1073bcc34; end: 1073bcc63;  */

void FUN_1073bcc34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((ulong)param_1 >> 0x3a == 0) {
    __Znwm((long)param_1 << 6);
    return;
  }
  func_0x000104bd35f4();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[3];
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  func_0x0001073bf3a8();
  return;
}



/* Entry: 1073bcc64; end: 1073bcc9f;  */

void FUN_1073bcc64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_2[3];
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  func_0x0001073bf3a8();
  return;
}



/* Entry: 1073bcca0; end: 1073bccab;  */

void FUN_1073bcca0(void)

{
  func_0x0001073becbc();
  func_0x0001073bf39c();
  func_0x0001073bc728();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 1073bccac; end: 1073bcccf;  */

void FUN_1073bccac(void)

{
  func_0x0001073bf39c();
  func_0x0001073bc728();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 1073bccd0; end: 1073bcceb;  */

void FUN_1073bccd0(long param_1)

{
  FUN_1073bc6a0();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 1073bccec; end: 1073bcd67;  */

void FUN_1073bccec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xc] = param_2[0xc];
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  param_1[0xf] = param_2[0xf];
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return;
}



/* Entry: 1073bcd68; end: 1073bcd73;  */

undefined2 * FUN_1073bcd68(undefined2 *param_1,undefined2 *param_2)

{
  undefined1 in_CY;
  undefined2 *puVar1;
  undefined2 *unaff_x19;
  
  func_0x0001073becbc();
  func_0x00010014b0d8();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_1073bcdac();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  *(undefined2 **)(unaff_x19 + 4) = puVar1;
  return puVar1 + -1;
}



/* Entry: 1073bcd74; end: 1073bcdab;  */

undefined2 * FUN_1073bcd74(undefined2 *param_1,undefined2 *param_2)

{
  undefined1 in_CY;
  undefined2 *puVar1;
  undefined2 *unaff_x19;
  
  func_0x00010014b0d8();
  if ((bool)in_CY) {
    puVar1 = unaff_x19;
    FUN_1073bcdac();
  }
  else {
    puVar1 = param_1 + 1;
    *param_1 = *param_2;
  }
  *(undefined2 **)(unaff_x19 + 4) = puVar1;
  return puVar1 + -1;
}



/* Entry: 1073bcdac; end: 1073bcdf3;  */

void FUN_1073bcdac(void)

{
  func_0x00010014b124();
  func_0x0001073bf26c();
  func_0x0001073bef04();
  func_0x0001073bf2c8();
  func_0x00010014b278();
  func_0x00010730ba50();
  func_0x00010014b314();
  func_0x00010730bb04();
  return;
}



/* Entry: 1073bcdf4; end: 1073bce63;  */

long FUN_1073bcdf4(long param_1)

{
  func_0x00010730b05c(param_1 + 0x68);
  func_0x000100100fec(param_1 + 0x50);
  func_0x0001073bc74c(param_1 + 0x38);
  return param_1;
}



/* Entry: 1073bce64; end: 1073bce6f;  */

long FUN_1073bce64(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x0001073becbc();
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x48);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x80;
      FUN_1073bcdf4();
    }
    *(long *)(param_1 + 0x48) = lVar2;
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000104c2f714(param_1);
  }
  return param_1;
}



/* Entry: 1073bce70; end: 1073bcebb;  */

long FUN_1073bce70(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x48);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x80;
      FUN_1073bcdf4();
    }
    *(long *)(param_1 + 0x48) = lVar2;
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000104c2f714(param_1);
  }
  return param_1;
}



/* Entry: 1073bcebc; end: 1073bcf1b;  */

void FUN_1073bcebc(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_1073bcf1c();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_1073bcf58(param_1);
  return;
}



/* Entry: 1073bcf1c; end: 1073bcf57;  */

long FUN_1073bcf1c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 1073bcf58; end: 1073bcf7b;  */

void FUN_1073bcf58(long param_1)

{
  func_0x0001073bef30();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073bcf7c; end: 1073bcf87;  */

void FUN_1073bcf7c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001073becbc();
  func_0x0001073bee44();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x68) * 0x68;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x68) {
    FUN_1073bd06c(lVar2,lVar3);
    lVar2 = lVar2 + 0x68;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x68) {
    func_0x0001073bd3d4(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x0001073bec50();
  return;
}



/* Entry: 1073bcf88; end: 1073bd00b;  */

void FUN_1073bcf88(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001073bee44();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x68) * 0x68;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x68) {
    FUN_1073bd06c(lVar2,lVar3);
    lVar2 = lVar2 + 0x68;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x68) {
    func_0x0001073bd3d4(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x0001073bec50();
  return;
}



/* Entry: 1073bd00c; end: 1073bd06b;  */

void FUN_1073bd00c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong unaff_x20;
  
  func_0x0001073bee90();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    if (0x276276276276276 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x0001072649c8();
      uVar1 = *(undefined8 *)(param_2 + 0x40);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x40) = uVar1;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      uVar1 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(param_1 + 0x50) = uVar1;
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
      return;
    }
    __Znwm(unaff_x20 * 0x68);
  }
  func_0x0001073bf180(0x68);
  return;
}



/* Entry: 1073bd06c; end: 1073bd0ff;  */

void FUN_1073bd06c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x0001072649c8();
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  return;
}



/* Entry: 1073bd100; end: 1073bd10b;  */

void FUN_1073bd100(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001073becbc();
  func_0x0001073bee44();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x70) * 0x70;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x70) {
    FUN_1073bd1f0(lVar2,lVar3);
    lVar2 = lVar2 + 0x70;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x70) {
    FUN_1073bd398(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x0001073bec50();
  return;
}


