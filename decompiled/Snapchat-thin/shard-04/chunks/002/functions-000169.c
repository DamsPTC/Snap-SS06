/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10326a040; end: 10326a0a3;  */

undefined8 * FUN_10326a040(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10326a0a4; end: 10326a0e7;  */

undefined8 * FUN_10326a0a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10326a0e8; end: 10326a1a7;  */

int FUN_10326a0e8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10326a1a8; end: 10326a287;  */

undefined8
FUN_10326a1a8(ulong param_1,long param_2,ulong param_3,ulong param_4,long param_5,long param_6)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    if (param_5 != 0) {
      return 0;
    }
  }
  else {
    if (param_5 == 0) {
      return 0;
    }
    if (((param_1 != param_4) || (param_2 != param_5)) &&
       (func_0x000107c605b8(param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
      return 0;
    }
  }
  if (param_3 == 0) {
    if (param_6 == 0) {
      return 1;
    }
  }
  else if (param_6 != 0) {
    func_0x00010326a624(0,0x112f4c5b0,&PTR_PTR_1126b14b8);
    func_0x000107c61174(param_6);
    func_0x000107c61174();
    uVar1 = param_3;
    func_0x000107c60118();
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 10326a288; end: 10326a2f3;  */

void FUN_10326a288(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10326a2f4; end: 10326a327;  */

void FUN_10326a2f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 == 1) {
    return;
  }
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10326a328; end: 10326a33f;  */

void FUN_10326a328(byte *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
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
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_217;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
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
  undefined8 uStack_b7;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  bVar3 = *param_1;
  puVar5 = PTR_PTR_1126b5b00;
  uVar6 = uVar1;
  if (bVar3 < 2) {
    if (bVar3 == 0) {
LAB_1032694b4:
      func_0x0001000285a8(0x112f4f740,&UNK_10dba2f38);
      func_0x000100d3ecc8(&uStack_190);
      func_0x000107c610b4(&uStack_2b8,&uStack_190,0x128);
      func_0x000100854cb0(&uStack_2b8);
      return;
    }
    lStack_2c0 = *(long *)(unaff_x20 + 0x38);
    uStack_2c8 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_2d0 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x90);
    func_0x000107c61168();
    uVar4 = uVar8;
    func_0x000107c61174(uVar8);
    func_0x000107c61438(uVar2,2);
    func_0x000107c61174(uVar4);
    func_0x000107c5fadc(uVar1,uVar2);
    func_0x000107c43970();
    bVar10 = false;
    uVar9 = 1;
  }
  else {
    if (bVar3 == 2) goto LAB_1032694b4;
    lStack_2c0 = *(long *)(unaff_x20 + 0x38);
    uStack_2c8 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_2d0 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x90);
    func_0x000107c61168();
    uVar9 = 2;
    func_0x000107c61438(uVar2,2);
    func_0x000107c5fadc(uVar1,uVar2);
    func_0x000107c5da2c();
    uVar8 = 0;
    bVar10 = true;
  }
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  FUN_10326158c(lStack_2c0,uStack_2c8,uStack_2d0,uVar11,uVar12,uVar1,uVar2,uVar8,uVar9);
  if (lStack_2c0 == 0) {
    uStack_180 = 0x726574736f70;
    uStack_178 = 0xe600000000000000;
    if (bVar10) {
      func_0x00010326b650();
    }
    else {
      func_0x00010326b640();
    }
    func_0x0001000285a8(0x112f4f740,&UNK_10dba2f38);
    func_0x0001031e60c4(&uStack_2b8);
    uStack_e0 = uStack_240;
    uStack_e8 = uStack_248;
    uStack_d0 = uStack_230;
    uStack_d8 = uStack_238;
    uStack_c8 = uStack_228;
    uStack_b7 = uStack_217;
    uStack_120 = uStack_280;
    uStack_128 = uStack_288;
    uStack_110 = uStack_270;
    uStack_118 = uStack_278;
    uStack_100 = uStack_260;
    uStack_108 = uStack_268;
    uStack_f0 = uStack_250;
    uStack_f8 = uStack_258;
    uStack_150 = uStack_2b0;
    uStack_158 = uStack_2b8;
    uStack_140 = uStack_2a0;
    uStack_148 = uStack_2a8;
    uStack_130 = uStack_290;
    uStack_138 = uStack_298;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_a0 = 3;
    uStack_a8 = 0;
    uStack_160 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x100;
    uStack_78 = 0;
    uStack_70 = 1;
    lStack_170 = lStack_2c0;
    uStack_168 = uStack_2c8;
    puStack_98 = puVar5;
    func_0x00010326a33c(&uStack_190);
    FUN_10320d790(puVar5,0,0,0);
    func_0x000100854cb0(&uStack_190);
    FUN_103261930(uVar1,uVar2,uVar8,uVar9);
    FUN_103261930(uVar1,uVar2,uVar8,uVar9);
    FUN_1031e1b78(puVar5,0,0,0);
    FUN_10326a5e4(&uStack_190,0x112f4f6e0,&UNK_10dba2e70);
  }
  else {
    puVar7 = &UNK_11062d8f0;
    func_0x000107c613fc(&UNK_11062d8f0,0x59,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x726574736f70;
    *(undefined8 *)(puVar7 + 0x18) = 0xe600000000000000;
    *(undefined8 *)(puVar7 + 0x20) = uVar1;
    *(undefined8 *)(puVar7 + 0x28) = uVar2;
    *(undefined8 *)(puVar7 + 0x30) = uVar8;
    puVar7[0x38] = uVar9;
    *(undefined8 *)(puVar7 + 0x48) = 0;
    *(undefined8 *)(puVar7 + 0x50) = 0;
    *(undefined **)(puVar7 + 0x40) = puVar5;
    puVar7[0x58] = 0;
    func_0x0001032618ac(uVar1,uVar2,uVar8,uVar9);
    FUN_10320d790(puVar5,0,0,0);
    uVar6 = 0x112f4f6e0;
    func_0x0001000285a8(0x112f4f6e0,&UNK_10dba2e70);
    func_0x0001000bfde0(FUN_10326a340,puVar7,uVar6);
    FUN_103261930(uVar1,uVar2,uVar8,uVar9);
    FUN_103261930(uVar1,uVar2,uVar8,uVar9);
    func_0x000107c61574(lStack_2c0);
    func_0x000107c61574(puVar7);
    FUN_1031e1b78(puVar5,0,0,0);
  }
  return;
}



/* Entry: 10326a340; end: 10326a397;  */

void FUN_10326a340(undefined8 *param_1)

{
  long unaff_x20;
  
  FUN_103268a34(*param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined1 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 10326a398; end: 10326a4b7;  */

undefined8 FUN_10326a398(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_90;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c614bc(&uStack_50,&uStack_40,param_4);
  uStack_70 = uStack_50;
  uStack_68 = uStack_48;
  func_0x000107c61434(uStack_48);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_3 == 0) {
    func_0x000107c6142c(uStack_48);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(auStack_90,param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(uStack_48);
    func_0x000100102924(auStack_90,&uStack_70);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  func_0x00010326a624(0,0x112f4d740,&PTR_PTR_1126caaf8);
  func_0x000107c6147c(auStack_90,&uStack_70,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_90[0] = 0;
  }
  return auStack_90[0];
}



/* Entry: 10326a4b8; end: 10326a5e3;  */

undefined8
FUN_10326a4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_b0 [4];
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
  
  iVar1 = (int)auStack_b0;
  uStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x000107c614bc(&uStack_70,&uStack_60,param_6);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_5 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(auStack_b0,param_5);
    func_0x000107c615e8(param_5);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(auStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  func_0x00010326a624(0,param_7,param_8);
  func_0x000107c6147c(auStack_b0,&uStack_90,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_b0[0] = 0;
  }
  return auStack_b0[0];
}



/* Entry: 10326a5e4; end: 10326a663;  */

undefined8 FUN_10326a5e4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10326a664; end: 10326a67f;  */

void FUN_10326a664(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_2a0 [296];
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
  
  uVar3 = param_1[1];
  if (uVar3 < 2) {
    func_0x0001000285a8(0x112f4f740,&UNK_10dba2f38);
    func_0x000100d3ecc8(&uStack_178);
    func_0x000107c610b4(auStack_2a0,&uStack_178,0x128);
    func_0x000100854cb0(auStack_2a0);
  }
  else {
    uVar4 = param_1[2];
    uVar5 = *param_1;
    FUN_10326a2f4(uVar5,uVar3,uVar4);
    func_0x000107c61434(uVar3);
    uVar1 = uVar5;
    FUN_103261ff8(uVar5,uVar3);
    FUN_103269158(unaff_x20 + 0x10,&uStack_178);
    puVar2 = &UNK_11062d8c8;
    func_0x000107c613fc(&UNK_11062d8c8,0xb0,7);
    *(undefined8 *)(puVar2 + 0x80) = uStack_130;
    *(undefined8 *)(puVar2 + 0x78) = uStack_138;
    *(undefined8 *)(puVar2 + 0x90) = uStack_120;
    *(undefined8 *)(puVar2 + 0x88) = uStack_128;
    *(undefined8 *)(puVar2 + 0xa0) = uStack_110;
    *(undefined8 *)(puVar2 + 0x98) = uStack_118;
    *(undefined8 *)(puVar2 + 0x40) = uStack_170;
    *(undefined8 *)(puVar2 + 0x38) = uStack_178;
    *(undefined8 *)(puVar2 + 0x50) = uStack_160;
    *(undefined8 *)(puVar2 + 0x48) = uStack_168;
    *(undefined8 *)(puVar2 + 0x60) = uStack_150;
    *(undefined8 *)(puVar2 + 0x58) = uStack_158;
    *(undefined8 *)(puVar2 + 0x10) = uVar5;
    *(ulong *)(puVar2 + 0x18) = uVar3;
    *(undefined8 *)(puVar2 + 0x20) = uVar5;
    *(ulong *)(puVar2 + 0x28) = uVar3;
    *(undefined8 *)(puVar2 + 0x30) = uVar4;
    *(undefined8 *)(puVar2 + 0xa8) = uStack_108;
    *(undefined8 *)(puVar2 + 0x70) = uStack_140;
    *(undefined8 *)(puVar2 + 0x68) = uStack_148;
    func_0x000107c61174(uVar4);
    func_0x000107c61434(uVar3);
    uVar5 = 0x112f4f6e0;
    func_0x0001000285a8(0x112f4f6e0,&UNK_10dba2e70);
    func_0x00010068b194(FUN_10326a328,puVar2,uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c6142c(uVar3);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 10326a680; end: 10326aafb;  */

void FUN_10326a680(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined1 param_5,ulong param_6,ulong param_7,ulong param_8,undefined1 param_9)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_2f0;
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
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined8 uStack_24f;
  long lStack_240;
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
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  long lStack_190;
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
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  
  if (param_2 == 0) {
    func_0x0001031f4750(&lStack_190);
    func_0x000107c610b4(param_1,&lStack_190,0x130);
    return;
  }
  param_1[2] = param_3;
  param_1[3] = param_4;
  *(undefined1 *)(param_1 + 4) = param_5;
  func_0x000107c61174();
  func_0x000107c61434(param_4);
  uVar2 = param_6;
  func_0x000107c5cac8();
  if ((int)uVar2 == 3) {
    uVar2 = param_6;
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10326a8b0);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x000107c5faec();
    uVar4 = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(param_3);
    uVar2 = uVar3 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar2 = param_3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = param_6;
      func_0x000107c5c82c();
      func_0x000107c61180();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10326a8b4);
        (*pcVar1)();
      }
      param_7 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      param_8 = uVar4;
      goto LAB_10326a764;
    }
  }
  func_0x000107c61434(param_8);
LAB_10326a764:
  lStack_2f0 = param_2;
  func_0x0001031e60f0(&lStack_2f0);
  uStack_1b8 = uStack_268;
  uStack_1c0 = uStack_270;
  uStack_1a8 = uStack_258;
  uStack_1b0 = uStack_260;
  uStack_19f = uStack_24f;
  uStack_1a7 = uStack_257;
  uStack_1a0 = uStack_250;
  uStack_1f8 = uStack_2a8;
  uStack_200 = uStack_2b0;
  uStack_1e8 = uStack_298;
  uStack_1f0 = uStack_2a0;
  uStack_1d8 = uStack_288;
  uStack_1e0 = uStack_290;
  uStack_1c8 = uStack_278;
  uStack_1d0 = uStack_280;
  uStack_238 = uStack_2e8;
  lStack_240 = lStack_2f0;
  uStack_228 = uStack_2d8;
  uStack_230 = uStack_2e0;
  uStack_218 = uStack_2c8;
  uStack_220 = uStack_2d0;
  uStack_208 = uStack_2b8;
  uStack_210 = uStack_2c0;
  func_0x0001031e6100(&lStack_240);
  uStack_108 = uStack_1b8;
  uStack_110 = uStack_1c0;
  uStack_f8 = uStack_1a8;
  uStack_100 = uStack_1b0;
  uStack_ef = uStack_19f;
  uStack_f7 = uStack_1a7;
  uStack_f0 = uStack_1a0;
  uStack_148 = uStack_1f8;
  uStack_150 = uStack_200;
  uStack_138 = uStack_1e8;
  uStack_140 = uStack_1f0;
  uStack_128 = uStack_1d8;
  uStack_130 = uStack_1e0;
  uStack_118 = uStack_1c8;
  uStack_120 = uStack_1d0;
  uStack_188 = uStack_238;
  lStack_190 = lStack_240;
  uStack_178 = uStack_228;
  uStack_180 = uStack_230;
  uStack_168 = uStack_218;
  uStack_170 = uStack_220;
  uStack_158 = uStack_208;
  uStack_160 = uStack_210;
  func_0x000107c61174(param_2);
  func_0x000107c3cf80();
  func_0x000107c61180();
  if (param_6 != 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[5] = param_7;
    param_1[6] = param_8;
    param_1[7] = 0;
    param_1[0x19] = uStack_108;
    param_1[0x18] = uStack_110;
    param_1[0x1b] = CONCAT71(uStack_f7,uStack_f8);
    param_1[0x1a] = uStack_100;
    *(undefined8 *)((long)param_1 + 0xe1) = uStack_ef;
    *(ulong *)((long)param_1 + 0xd9) = CONCAT17(uStack_f0,uStack_f7);
    param_1[0x11] = uStack_148;
    param_1[0x10] = uStack_150;
    param_1[0x13] = uStack_138;
    param_1[0x12] = uStack_140;
    param_1[0x15] = uStack_128;
    param_1[0x14] = uStack_130;
    param_1[0x17] = uStack_118;
    param_1[0x16] = uStack_120;
    param_1[9] = uStack_188;
    param_1[8] = lStack_190;
    param_1[0xb] = uStack_178;
    param_1[10] = uStack_180;
    param_1[0xd] = uStack_168;
    param_1[0xc] = uStack_170;
    param_1[0xf] = uStack_158;
    param_1[0xe] = uStack_160;
    param_1[0x1f] = 1;
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x20] = param_6;
    *(undefined1 *)(param_1 + 0x23) = 0;
    *(undefined1 *)((long)param_1 + 0x119) = param_9;
    param_1[0x25] = 1;
    param_1[0x24] = 0;
    FUN_1031ee258(param_1);
    func_0x000107c61170(param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10326a8ac);
  (*pcVar1)();
}



/* Entry: 10326aafc; end: 10326ab9b;  */

void FUN_10326aafc(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  auStack_68[0] = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  uStack_58 = *(undefined8 *)(param_2 + 0x10);
  uStack_60 = uVar3;
  uStack_48 = uVar2;
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c614bc(param_1,auStack_68,param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10326ab9c; end: 10326aba3;  */

void FUN_10326ab9c(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  auStack_68[0] = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x18);
  uStack_58 = *(undefined8 *)(param_2 + 0x10);
  uStack_60 = uVar3;
  uStack_48 = uVar2;
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c614bc(param_1,auStack_68);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 10326aba4; end: 10326af3f;  */

void FUN_10326aba4(ulong *param_1)

{
  undefined *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = &UNK_10dba3080;
  func_0x000107c614e0();
  puVar4 = puVar8;
  FUN_103262a8c();
  func_0x000107c61574(puVar8);
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar8 = puVar4;
    }
    func_0x000107c60480();
  }
  if (puVar8 != (undefined *)0x0) {
    uVar9 = 0;
    do {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10326ad24);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(puVar4 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar9;
        FUN_10326b380(uVar9,puVar4,&PTR_PTR_1126df4c8,0x112f4f540);
      }
      puVar1 = (undefined *)(uVar9 + 1);
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10326ad20);
        (*pcVar3)();
      }
      uVar6 = uVar5;
      func_0x000107c446c8();
      if ((int)uVar6 != 0) {
        uVar6 = uVar5;
        func_0x000107c3cf80();
        func_0x000107c61180();
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10326ad74);
          (*pcVar3)();
        }
        uVar7 = uVar6;
        func_0x000107c3cfdc();
        func_0x000107c61170(uVar6);
        uVar2 = (int)uVar7 - 2;
        if (((uVar2 < 0x3f) && ((1L << ((ulong)uVar2 & 0x3f) & 0x52d99fdfeee0bfd9U) != 0)) &&
           (uVar6 = uVar5, func_0x000107c5c950(), (int)uVar6 == 2)) {
          uVar6 = uVar5;
          func_0x000107c44f7c();
          func_0x000107c61180();
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10326ad78);
            (*pcVar3)();
          }
          uVar7 = uVar6;
          func_0x000107c4472c();
          func_0x000107c61170(uVar6);
          if ((uVar7 & 1) != 0) {
            func_0x000107c6142c(puVar4);
            goto LAB_10326ad48;
          }
        }
      }
      func_0x000107c61170(uVar5);
      uVar9 = uVar9 + 1;
    } while (puVar1 != puVar8);
  }
  func_0x000107c6142c(puVar4);
  uVar5 = 0;
LAB_10326ad48:
  *param_1 = uVar5;
  return;
}



/* Entry: 10326af40; end: 10326af4b;  */

code * FUN_10326af40(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_2b0 [296];
  undefined1 auStack_188 [296];
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar2 = (code *)auStack_2b0;
  lVar9 = *param_1;
  uVar7 = uVar6;
  func_0x00010326b748();
  if (lVar9 != 0) {
    func_0x000107c61174();
    lVar3 = lVar9;
    func_0x000107c44f7c();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10326af3c);
      (*pcVar2)();
    }
    lVar4 = lVar3;
    func_0x000107c3e214();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10326af40);
      (*pcVar2)();
    }
    lVar3 = lVar4;
    FUN_10326c954(lVar4,uVar6,uVar1,uVar8);
    func_0x000107c61170(lVar4);
    if (lVar3 != 0) {
      puVar5 = &UNK_11062da20;
      func_0x000107c613fc(&UNK_11062da20,0x39,7);
      *(undefined8 *)(puVar5 + 0x10) = 0x747865746e6f63;
      *(undefined8 *)(puVar5 + 0x18) = 0xe700000000000000;
      *(long *)(puVar5 + 0x20) = lVar9;
      *(long **)(puVar5 + 0x28) = param_1;
      *(undefined8 *)(puVar5 + 0x30) = uVar7;
      puVar5[0x38] = 2;
      func_0x000107c61174(lVar9);
      func_0x000107c61434(uVar7);
      uVar6 = 0x112f4f748;
      func_0x0001000285a8(0x112f4f748,&UNK_10dba2ff8);
      pcVar2 = FUN_10326b5c8;
      func_0x0001000bfde0(FUN_10326b5c8,puVar5,uVar6);
      func_0x000107c61170(lVar9);
      func_0x000107c61574(lVar3);
      func_0x000107c61574(puVar5);
      func_0x000107c6142c(uVar7);
      return pcVar2;
    }
    func_0x000107c61170(lVar9);
  }
  func_0x0001000285a8(0x112f4f798,&UNK_10dba3070);
  func_0x00010326b550(auStack_188);
  func_0x000107c610b4(auStack_2b0,auStack_188,0x128);
  func_0x000100854cb0(auStack_2b0);
  func_0x000107c6142c(uVar7);
  FUN_10326b580(auStack_2b0);
  return pcVar2;
}



/* Entry: 10326af4c; end: 10326b0ab;  */

undefined8 FUN_10326af4c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined *apuStack_50 [2];
  
  uVar7 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar8 = unaff_x20[2];
  puVar2 = &UNK_10dba2f80;
  func_0x000107c614e0();
  puVar3 = &UNK_10dba2fa0;
  apuStack_50[0] = puVar2;
  func_0x000107c614e0(&UNK_10dba2fa0,apuStack_50);
  uVar4 = 0;
  FUN_10326b5f0(0,0x112f4d740,&PTR_PTR_1126caaf8);
  uVar5 = 0x10326b638;
  func_0x0001000d5158(0x10326b638,puVar3,uVar4);
  func_0x000107c61574(puVar3);
  uVar4 = 0x112f4f560;
  func_0x0001000285a8(0x112f4f560,&UNK_10dba2ba0);
  pcVar6 = FUN_10326aba4;
  func_0x0001000bfde0(FUN_10326aba4,0,uVar4);
  func_0x000107c61574(uVar5);
  func_0x000103263730();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar6);
  puVar2 = &UNK_11062d9f8;
  func_0x000107c613fc(&UNK_11062d9f8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar8;
  func_0x000107c6157c(uVar7);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar8);
  uVar4 = 0x112f4f748;
  func_0x0001000285a8(0x112f4f748,&UNK_10dba2ff8);
  uVar7 = 0x10326b63c;
  func_0x00010068b194(0x10326b63c,puVar2,uVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar2);
  return uVar7;
}



/* Entry: 10326b0ac; end: 10326b0cf;  */

void FUN_10326b0ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10326b0d0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10326b0d0; end: 10326b10f;  */

void FUN_10326b0d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4f750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dba3028;
  func_0x000107c61520(&DAT_10dba3028,&UNK_11062d9d0);
  puRam0000000112f4f750 = puVar1;
  return;
}



/* Entry: 10326b110; end: 10326b12b;  */

void FUN_10326b110(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4e7f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4e7e8;
  func_0x00010002969c(0x112f4e7e8,&UNK_10dba11d0);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4e7f0 = puVar2;
  return;
}



/* Entry: 10326b12c; end: 10326b163;  */

undefined * FUN_10326b12c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x0001031f583c();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 10326b164; end: 10326b193;  */

/* WARNING: Possible PIC construction at 0x00010326b180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010326b184) */

void FUN_10326b164(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 10326b194; end: 10326b253;  */

undefined8 * FUN_10326b194(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 10326b254; end: 10326b29f;  */

undefined8 * FUN_10326b254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10326b2a0; end: 10326b337;  */

int FUN_10326b2a0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10326b338; end: 10326b36b;  */

void FUN_10326b338(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10326b36c; end: 10326b37f;  */

ulong FUN_10326b36c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10326b464);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10326b468);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126df4c8;
    func_0x000107c61168(PTR_PTR_1126df4c8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126df4c8;
    func_0x000107c61168(PTR_PTR_1126df4c8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10326b5f0(0,0x112f4f540,&PTR_PTR_1126df4c8);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326b53c);
  (*pcVar2)();
}



/* Entry: 10326b380; end: 10326b53b;  */

ulong FUN_10326b380(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10326b464);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10326b468);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10326b5f0(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326b53c);
  (*pcVar2)();
}



/* Entry: 10326b53c; end: 10326b57f;  */

ulong FUN_10326b53c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10326b464);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10326b468);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126acdc0;
    func_0x000107c61168(PTR_PTR_1126acdc0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126acdc0;
    func_0x000107c61168(PTR_PTR_1126acdc0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10326b5f0(0,0x112f4d150,&PTR_PTR_1126acdc0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10326b53c);
  (*pcVar2)();
}



/* Entry: 10326b580; end: 10326b5c7;  */

undefined8 FUN_10326b580(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f4f748;
  func_0x0001000285a8(0x112f4f748,&UNK_10dba2ff8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10326b5c8; end: 10326b5ef;  */

void FUN_10326b5c8(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lStack_2f0;
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
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined8 uStack_24f;
  long lStack_240;
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
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined8 uStack_19f;
  long lStack_190;
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
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  
  uVar8 = *(ulong *)(unaff_x20 + 0x20);
  uVar7 = *(ulong *)(unaff_x20 + 0x28);
  uVar11 = *(ulong *)(unaff_x20 + 0x30);
  lVar9 = *param_2;
  uVar6 = *(ulong *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x38);
  if (lVar9 == 0) {
    func_0x00010326b550(&lStack_190);
    func_0x000107c610b4(param_1,&lStack_190,0x128);
    return;
  }
  param_1[2] = uVar6;
  param_1[3] = uVar1;
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  uVar4 = uVar8;
  func_0x000107c5cac8();
  if ((int)uVar4 == 3) {
    uVar4 = uVar8;
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10326aaf8);
      (*pcVar3)();
    }
    uVar5 = uVar4;
    func_0x000107c5faec();
    uVar10 = uVar6;
    func_0x000107c61170(uVar4);
    func_0x000107c6142c(uVar6);
    uVar4 = uVar5 & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar4 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar4 != 0) {
      uVar6 = uVar8;
      func_0x000107c5c82c();
      func_0x000107c61180();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10326aafc);
        (*pcVar3)();
      }
      uVar7 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      uVar11 = uVar10;
      goto LAB_10326a994;
    }
  }
  func_0x000107c61434(uVar11);
LAB_10326a994:
  lStack_2f0 = lVar9;
  func_0x0001031e60f0(&lStack_2f0);
  uStack_1b8 = uStack_268;
  uStack_1c0 = uStack_270;
  uStack_1a8 = uStack_258;
  uStack_1b0 = uStack_260;
  uStack_19f = uStack_24f;
  uStack_1a7 = uStack_257;
  uStack_1a0 = uStack_250;
  uStack_1f8 = uStack_2a8;
  uStack_200 = uStack_2b0;
  uStack_1e8 = uStack_298;
  uStack_1f0 = uStack_2a0;
  uStack_1d8 = uStack_288;
  uStack_1e0 = uStack_290;
  uStack_1c8 = uStack_278;
  uStack_1d0 = uStack_280;
  uStack_238 = uStack_2e8;
  lStack_240 = lStack_2f0;
  uStack_228 = uStack_2d8;
  uStack_230 = uStack_2e0;
  uStack_218 = uStack_2c8;
  uStack_220 = uStack_2d0;
  uStack_208 = uStack_2b8;
  uStack_210 = uStack_2c0;
  func_0x0001031e6100(&lStack_240);
  uStack_108 = uStack_1b8;
  uStack_110 = uStack_1c0;
  uStack_f8 = uStack_1a8;
  uStack_100 = uStack_1b0;
  uStack_ef = uStack_19f;
  uStack_f7 = uStack_1a7;
  uStack_f0 = uStack_1a0;
  uStack_148 = uStack_1f8;
  uStack_150 = uStack_200;
  uStack_138 = uStack_1e8;
  uStack_140 = uStack_1f0;
  uStack_128 = uStack_1d8;
  uStack_130 = uStack_1e0;
  uStack_118 = uStack_1c8;
  uStack_120 = uStack_1d0;
  uStack_188 = uStack_238;
  lStack_190 = lStack_240;
  uStack_178 = uStack_228;
  uStack_180 = uStack_230;
  uStack_168 = uStack_218;
  uStack_170 = uStack_220;
  uStack_158 = uStack_208;
  uStack_160 = uStack_210;
  func_0x000107c61174(lVar9);
  func_0x000107c3cf80();
  func_0x000107c61180();
  if (uVar8 != 0) {
    param_1[0x16] = uStack_118;
    param_1[0x15] = uStack_120;
    param_1[0x18] = uStack_108;
    param_1[0x17] = uStack_110;
    param_1[0x1a] = CONCAT71(uStack_f7,uStack_f8);
    param_1[0x19] = uStack_100;
    *(undefined8 *)((long)param_1 + 0xd9) = uStack_ef;
    *(ulong *)((long)param_1 + 0xd1) = CONCAT17(uStack_f0,uStack_f7);
    param_1[0xe] = uStack_158;
    param_1[0xd] = uStack_160;
    param_1[0x10] = uStack_148;
    param_1[0xf] = uStack_150;
    param_1[0x12] = uStack_138;
    param_1[0x11] = uStack_140;
    param_1[0x14] = uStack_128;
    param_1[0x13] = uStack_130;
    param_1[8] = uStack_188;
    param_1[7] = lStack_190;
    param_1[10] = uStack_178;
    param_1[9] = uStack_180;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = uVar7;
    param_1[5] = uVar11;
    param_1[6] = 0;
    param_1[0xc] = uStack_168;
    param_1[0xb] = uStack_170;
    param_1[0x1e] = 1;
    param_1[0x1d] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1f] = uVar8;
    *(undefined1 *)(param_1 + 0x22) = 0;
    *(undefined1 *)((long)param_1 + 0x111) = uVar2;
    param_1[0x23] = 0;
    param_1[0x24] = 1;
    func_0x00010326b5e0(param_1);
    func_0x000107c61170(lVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10326aaf4);
  (*pcVar3)();
}



/* Entry: 10326b5f0; end: 10326b62f;  */

void FUN_10326b5f0(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10326b630; end: 10326b697;  */

undefined8 * FUN_10326b630(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 10326b698; end: 10326b813;  */

undefined1  [16] FUN_10326b698(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f132710);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10326b748);
  (*pcVar1)();
}



/* Entry: 10326b814; end: 10326b83b;  */

void FUN_10326b814(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x000103b93a28();
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 10326b83c; end: 10326b8bf;  */

long FUN_10326b83c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar3 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = 0x112f4d148;
  func_0x0001000285a8(0x112f4d148,&UNK_10db9ece8);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 10326b8c0; end: 10326bb9b;  */

undefined * FUN_10326b8c0(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  long lStack_98;
  undefined1 auStack_90 [32];
  undefined *puStack_70;
  
  lVar3 = 0;
  func_0x000107c5ed50();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar4 = &UNK_10dba30b0;
  func_0x000107c614e0(&UNK_10dba30b0);
  if (param_2 == 0) {
    func_0x000107c61574();
  }
  else {
    func_0x000107c61434(param_2);
    FUN_10326a398(param_1,param_2,param_3,puVar4);
    func_0x000107c6142c(param_2);
    func_0x000107c61574(puVar4);
    if (param_1 != 0) {
      lVar5 = param_1;
      func_0x000107c4ebac();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10326bb98);
        (*pcVar2)();
      }
      lVar6 = lVar5;
      func_0x000107c3d00c();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10326bb9c);
        (*pcVar2)();
      }
      lStack_c8 = param_1;
      lStack_c0 = lVar11;
      func_0x000107c600f4(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c61170(lVar6);
      func_0x000100e15a08();
      func_0x000107c601c0(auStack_b0,lVar3,lVar6);
      puVar10 = PTR___sypN_11034f1a8;
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if (lStack_98 == 0) {
          (**(code **)(lStack_c0 + 8))
                    (auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
          func_0x00010006e7f4(auStack_b0);
          puVar10 = puVar4;
          func_0x000103218ff0(puVar4);
          func_0x000107c61170(lStack_c8);
          func_0x000107c61574(puVar4);
          return puVar10;
        }
        func_0x000100102924(auStack_b0,auStack_90);
        func_0x0001000bb420(auStack_90,auStack_b0);
        uVar7 = 0;
        FUN_10326c144(0,0x112f4d158,&PTR_PTR_1126d4b28);
        plVar8 = &lStack_b8;
        func_0x000107c6147c(plVar8,auStack_b0,puVar10 + 8,uVar7,6);
        lVar11 = lStack_b8;
        if ((int)plVar8 == 0) {
LAB_10326ba00:
          func_0x000100183ab8(auStack_90);
        }
        else {
          lVar5 = lStack_b8;
          func_0x000107c3cf80();
          func_0x000107c61180();
          func_0x000107c61170(lVar11);
          if (lVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10326bb94);
            (*pcVar2)();
          }
          lVar11 = lVar5;
          func_0x000107c3cfdc();
          func_0x000107c61170(lVar5);
          if (1 < (int)lVar11 - 0xbU) goto LAB_10326ba00;
          puVar9 = puVar4;
          func_0x000107c61558();
          puStack_70 = puVar4;
          if (((ulong)puVar9 & 1) == 0) {
            func_0x000100c077e4(0,*(long *)(puVar4 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(puStack_70 + 0x10);
          if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar1) {
            func_0x000100c077e4(1 < *(ulong *)(puStack_70 + 0x18),uVar1 + 1,1);
          }
          puVar4 = puStack_70;
          *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
          func_0x000100102924(auStack_90,puStack_70 + uVar1 * 0x20 + 0x20);
        }
        func_0x000107c601c0(auStack_b0,lVar3,lVar6);
      } while( true );
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10326bb9c; end: 10326bd47;  */

ulong FUN_10326bb9c(ulong param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = &UNK_10dba30b0;
  func_0x000107c614e0(&UNK_10dba30b0);
  if (param_2 == 0) {
    func_0x000107c61574();
  }
  else {
    func_0x000107c61434(param_2);
    FUN_10326a398(param_1,param_2,param_3,puVar2);
    func_0x000107c61574(puVar2);
    func_0x000107c6142c(param_2);
    if (param_1 != 0) {
      uVar3 = param_1;
      func_0x000107c44a38();
      if ((uVar3 & 1) == 0) {
        uVar3 = param_1;
        func_0x000107c40ddc();
        func_0x000107c61180();
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10326bd34);
          (*pcVar1)();
        }
        uVar4 = uVar3;
        func_0x000107c5ea0c();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10326bd38);
          (*pcVar1)();
        }
        uVar3 = uVar4;
        func_0x000107c44910();
        func_0x000107c61170(uVar4);
        if ((int)uVar3 == 0) {
          uVar3 = param_1;
          func_0x000107c40ddc();
          func_0x000107c61180();
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10326bd3c);
            (*pcVar1)();
          }
          uVar4 = uVar3;
          func_0x000107c5ea0c();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10326bd40);
            (*pcVar1)();
          }
          uVar3 = uVar4;
          func_0x000107c4478c();
          func_0x000107c61170(uVar4);
          if ((int)uVar3 == 0) {
            uVar3 = param_1;
            func_0x000107c40ddc();
            func_0x000107c61180();
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10326bd44);
              (*pcVar1)();
            }
            uVar4 = uVar3;
            func_0x000107c5ea0c();
            func_0x000107c61180();
            func_0x000107c61170(uVar3);
            if (uVar4 != 0) {
              uVar3 = uVar4;
              func_0x000107c44bcc(uVar4);
              func_0x000107c61170(param_1);
              func_0x000107c61170(uVar4);
              return uVar3;
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10326bd48);
            (*pcVar1)();
          }
        }
      }
      func_0x000107c61170(param_1);
      return 1;
    }
  }
  return 0;
}



/* Entry: 10326bd48; end: 10326bfe7;  */

undefined * FUN_10326bd48(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [32];
  long lStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = &UNK_10dba30b0;
  func_0x000107c614e0(&UNK_10dba30b0);
  if (param_2 == 0) {
    func_0x000107c61574();
  }
  else {
    func_0x000107c61434(param_2);
    FUN_10326a398(param_1,param_2,param_3,puVar10);
    func_0x000107c6142c(param_2);
    func_0x000107c61574(puVar10);
    if (param_1 != 0) {
      lVar5 = param_1;
      func_0x000107c4cf80();
      if (lVar5 == 0) {
        func_0x000107c61170(param_1);
        return PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar5 = param_1;
      func_0x000107c4cf7c();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lStack_e8 = lVar5;
        lStack_e0 = param_1;
        lStack_d8 = lVar12;
        func_0x000107c600f4(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000100e15a08();
        func_0x000107c601c0(auStack_88,lVar4,lVar5);
        puVar2 = PTR___sypN_11034f1a8;
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
        while (lStack_70 != 0) {
          func_0x000100102924(auStack_88,auStack_a8);
          func_0x000100102924(auStack_a8,auStack_d0);
          uVar8 = 0;
          FUN_10326c144(0,0x112f4d150,&PTR_PTR_1126acdc0);
          plVar9 = &lStack_b0;
          func_0x000107c6147c(plVar9,auStack_d0,puVar2 + 8,uVar8,6);
          lVar12 = lStack_b0;
          if ((((ulong)plVar9 & 1) != 0) && (lStack_b0 != 0)) {
            puVar7 = puVar10;
            func_0x000107c61550();
            if (((int)puVar7 == 0) ||
               (((long)puVar10 < 0 || (puVar7 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
              if ((ulong)puVar10 >> 0x3e == 0) {
                puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar10) {
                  puVar6 = puVar10;
                }
                func_0x000107c60480(puVar6);
              }
              puVar7 = (undefined *)0x0;
              FUN_103222c2c(0,puVar6 + 1,1,puVar10);
            }
            uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
            uVar1 = *(ulong *)(uVar11 + 0x10);
            puVar10 = puVar7;
            if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
              puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
              FUN_103222c2c(puVar10,uVar1 + 1,1,puVar7);
              uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
            *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar12;
          }
          func_0x000107c601c0(auStack_88,lVar4,lVar5);
        }
        func_0x000107c61170(lStack_e8);
        func_0x000107c61170(lStack_e0);
        (**(code **)(lStack_d8 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
        return puVar10;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10326bfe8);
      (*pcVar3)();
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10326bfe8; end: 10326bfef;  */

void FUN_10326bfe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10326bff0; end: 10326c05f;  */

undefined8 * FUN_10326bff0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10326c060; end: 10326c0f3;  */

int FUN_10326c060(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10326c0f4; end: 10326c143;  */

void FUN_10326c0f4(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f4f7a0 != 0) {
    return;
  }
  puVar1 = &UNK_11062dba0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112f4f7a0 = param_1;
  return;
}



/* Entry: 10326c144; end: 10326c183;  */

void FUN_10326c144(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10326c184; end: 10326c19b;  */

undefined8 * FUN_10326c184(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10326c19c; end: 10326c2fb;  */

long FUN_10326c19c(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar2 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4d658;
  func_0x0001000285a8(0x112f4d658,&UNK_10dba3140);
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0x78) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x70) = uVar3;
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_98;
  *(undefined8 *)(lVar1 + 0x98) = uStack_a0;
  FUN_10326c2fc(&uStack_70,auStack_b0,0x112f4b538,&UNK_10db9ab30);
  FUN_10326c2fc(&uStack_80,auStack_b0,0x112f4d658,&UNK_10dba3140);
  FUN_10326c2fc(&uStack_90,auStack_b0,0x112f4b520,&UNK_10db9b280);
  FUN_10326c2fc(&uStack_a0,auStack_b0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 10326c2fc; end: 10326c37f;  */

undefined8 FUN_10326c2fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10326c380; end: 10326c383;  */

long FUN_10326c380(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uVar2 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4d658;
  func_0x0001000285a8(0x112f4d658,&UNK_10dba3140);
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  uVar2 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar2;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  uVar3 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0x78) = unaff_x20[5];
  *(undefined8 *)(lVar1 + 0x70) = uVar3;
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_98;
  *(undefined8 *)(lVar1 + 0x98) = uStack_a0;
  FUN_10326c2fc(&uStack_70,auStack_b0,0x112f4b538,&UNK_10db9ab30);
  FUN_10326c2fc(&uStack_80,auStack_b0,0x112f4d658,&UNK_10dba3140);
  FUN_10326c2fc(&uStack_90,auStack_b0,0x112f4b520,&UNK_10db9b280);
  FUN_10326c2fc(&uStack_a0,auStack_b0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 10326c384; end: 10326c647;  */

undefined8 * FUN_10326c384(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_140 [64];
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
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_10dba3150;
  func_0x000107c614e0(&UNK_10dba3150);
  lStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  if (lStack_78 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_f8 = unaff_x20[1];
    uStack_100 = *unaff_x20;
    uStack_e8 = unaff_x20[3];
    uStack_f0 = unaff_x20[2];
    uStack_d8 = unaff_x20[5];
    uStack_e0 = unaff_x20[4];
    uStack_c8 = unaff_x20[7];
    uStack_d0 = unaff_x20[6];
    uStack_c0 = uStack_100;
    uStack_b8 = uStack_f8;
    uStack_b0 = uStack_f0;
    uStack_a8 = uStack_e8;
    uStack_a0 = uStack_e0;
    uStack_98 = uStack_d8;
    uStack_90 = uStack_d0;
    uStack_88 = uStack_c8;
    FUN_1031e7474(&uStack_100,auStack_140);
    puVar2 = &uStack_c0;
    FUN_1031e7358();
    func_0x0001031e74b0(&uStack_80);
    func_0x000107c61574(puVar1);
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
      func_0x000107c40110(puVar2);
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      puVar2 = puVar3;
      func_0x000107c4a324(puVar3);
      func_0x000107c61170(puVar3);
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}



/* Entry: 10326c648; end: 10326c6d3;  */

/* WARNING: Possible PIC construction at 0x00010326c6a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010326c6a4) */

void FUN_10326c648(void)

{
  undefined **ppuVar1;
  
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dcab38);
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0e558;
  func_0x000107c5faec();
  func_0x000103b93e44();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(ppuVar1[1]);
  return;
}



/* Entry: 10326c6d4; end: 10326c737;  */

long FUN_10326c6d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10326c738; end: 10326c847;  */

undefined8 * FUN_10326c738(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 10326c848; end: 10326c8ab;  */

undefined8 * FUN_10326c848(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10326c8ac; end: 10326c953;  */

int FUN_10326c8ac(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10326c954; end: 10326ca03;  */

long FUN_10326c954(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar2 = param_1;
  uVar4 = param_2;
  func_0x000107c5b9c4();
  if ((int)lVar2 == 2) {
    lVar2 = param_1;
    lVar6 = param_3;
    func_0x000107c4fe14();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      func_0x000107c5caa0();
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_3 == 0) {
        func_0x000107c6142c(lVar6);
        lVar2 = 0;
      }
      else {
        lVar2 = param_3;
        func_0x000107c614f0();
        uVar4 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61538();
        FUN_10326db34(lVar3,lVar6,0x5a0,uVar4,lVar2);
        func_0x000107c615e8(param_3);
        puVar5 = &UNK_11062dd20;
        func_0x000107c613fc(&UNK_11062dd20,0x14,7);
        *(int *)(puVar5 + 0x10) = (int)param_1;
        uVar4 = 0x112d36838;
        func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
        lVar2 = 0x10326d0f4;
        func_0x0001000bfde0(0x10326d0f4,puVar5,uVar4);
        func_0x000107c61574(lVar3);
        func_0x000107c61574(puVar5);
        func_0x000107c6142c(lVar6);
      }
      return lVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10326cf18);
    (*pcVar1)();
  }
  if ((int)lVar2 == 1) {
    func_0x000107c4b7e4();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10326ca04);
      (*pcVar1)();
    }
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x00010326ccec(lVar2,uVar4,param_2);
    func_0x000107c6142c(uVar4);
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 10326ca04; end: 10326cbb7;  */

code * FUN_10326ca04(code *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  pcVar1 = param_1;
  uVar6 = param_2;
  func_0x000107c5b9c4();
  if ((int)pcVar1 == 2) {
    pcVar1 = param_1;
    func_0x000107c4fe14();
    func_0x000107c61180();
    if (pcVar1 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10326cbb8);
      (*pcVar1)();
    }
    pcVar2 = pcVar1;
    func_0x000107c5faec();
    func_0x000107c61170(pcVar1);
    func_0x000107c5caa0();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_3 != 0) {
      lVar3 = param_3;
      func_0x000107c614f0();
      uVar4 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      FUN_10326db34(pcVar2,uVar6,0x5a0,uVar4,lVar3);
      func_0x000107c615e8(param_3);
      puVar5 = &UNK_11062dc70;
      func_0x000107c613fc(&UNK_11062dc70,0x14,7);
      *(int *)(puVar5 + 0x10) = (int)param_1;
      uVar4 = 0x112d36838;
      func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
      pcVar1 = FUN_10326cf18;
      func_0x0001000bfde0(FUN_10326cf18,puVar5,uVar4);
      func_0x000107c61574(pcVar2);
      func_0x000107c61574(puVar5);
      func_0x000107c6142c(uVar6);
      return pcVar1;
    }
    func_0x000107c6142c(uVar6);
  }
  else if ((int)pcVar1 == 1) {
    func_0x000107c4b7e4();
    func_0x000107c61180();
    if (param_1 != (code *)0x0) {
      pcVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x00010326ccec(pcVar1,uVar6,param_2);
      func_0x000107c6142c(uVar6);
      return pcVar1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10326cbb4);
    (*pcVar1)();
  }
  return (code *)0x0;
}



/* Entry: 10326cbb8; end: 10326cc3f;  */

void FUN_10326cbb8(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    *param_1 = 0;
  }
  else {
    if (param_3 < 1) {
LAB_10326cbe0:
      *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
    if (param_3 == 1) {
      func_0x000107c45154(lVar1,1,2);
    }
    else {
      if (param_3 != 2) goto LAB_10326cbe0;
      func_0x000107c45154(lVar1,2,1);
    }
    func_0x000107c61180();
    *param_1 = lVar1;
  }
  return;
}



/* Entry: 10326cc40; end: 10326cc4b;  */

void FUN_10326cc40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10326cc4c; end: 10326cdcf;  */

void FUN_10326cc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_6 == 0) {
    func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
    uStack_38 = 0;
    func_0x000100854cb0(&uStack_38);
  }
  else {
    lVar1 = param_6;
    func_0x000107c614f0();
    FUN_10326d3a8(param_1,param_2,param_3,lVar1);
    func_0x000107c615e8(param_6);
  }
  return;
}



/* Entry: 10326cdd0; end: 10326cf17;  */

undefined8 FUN_10326cdd0(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar2 = param_1;
  lVar6 = param_2;
  func_0x000107c4fe14();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    func_0x000107c5caa0();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_2 == 0) {
      func_0x000107c6142c(lVar6);
      uVar7 = 0;
    }
    else {
      lVar2 = param_2;
      func_0x000107c614f0();
      uVar7 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c61538();
      FUN_10326db34(lVar3,lVar6,0x5a0,uVar7,lVar2);
      func_0x000107c615e8(param_2);
      puVar4 = &UNK_11062dd20;
      func_0x000107c613fc(&UNK_11062dd20,0x14,7);
      *(int *)(puVar4 + 0x10) = (int)param_1;
      uVar5 = 0x112d36838;
      func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
      uVar7 = 0x10326d0f4;
      func_0x0001000bfde0(0x10326d0f4,puVar4,uVar5);
      func_0x000107c61574(lVar3);
      func_0x000107c61574(puVar4);
      func_0x000107c6142c(lVar6);
    }
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10326cf18);
  (*pcVar1)();
}



/* Entry: 10326cf18; end: 10326cf1f;  */

void FUN_10326cf18(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(unaff_x20 + 0x10);
  lVar2 = *param_2;
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    if (iVar1 < 1) {
LAB_10326cbe0:
      *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)();
      return;
    }
    if (iVar1 == 1) {
      func_0x000107c45154(lVar2,1,2);
    }
    else {
      if (iVar1 != 2) goto LAB_10326cbe0;
      func_0x000107c45154(lVar2,2,1);
    }
    func_0x000107c61180();
    *param_1 = lVar2;
  }
  return;
}



/* Entry: 10326cf20; end: 10326cf4f;  */

/* WARNING: Possible PIC construction at 0x00010326cf3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010326cf40) */

void FUN_10326cf20(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 10326cf50; end: 10326d00f;  */

undefined8 * FUN_10326cf50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 10326d010; end: 10326d05b;  */

undefined8 * FUN_10326d010(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10326d05c; end: 10326d0ff;  */

int FUN_10326d05c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10326d100; end: 10326d297;  */

void FUN_10326d100(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ffd8();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5f80c(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar6 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar5 = uVar6;
  func_0x00010002964c();
  func_0x000107c60264(lVar8,&puStack_68,uVar6,uVar5,lVar2,uVar4);
  (**(code **)(lVar9 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lVar1);
  uVar6 = 0xd000000000000024;
  func_0x000107c5ffec(0xd000000000000024,0x800000010f132740,lVar3,lVar8,puVar7,0);
  uRam0000000113516f20 = uVar6;
  return;
}



/* Entry: 10326d298; end: 10326d3a7;  */

void FUN_10326d298(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  uVar5 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
    uStack_48 = 0;
    func_0x000100854cb0(&uStack_48);
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    puVar3 = &UNK_11062ddc8;
    func_0x000107c613fc(&UNK_11062ddc8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_11062ddf0;
    func_0x000107c613fc(&UNK_11062ddf0,0x38,7);
    *(undefined8 *)(puVar4 + 0x10) = param_2;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(long *)(puVar4 + 0x20) = param_1;
    *(long *)(puVar4 + 0x28) = lVar2;
    *(undefined8 *)(puVar4 + 0x30) = uVar5;
    func_0x0001000285a8(0x112e155f0,&UNK_10d9f26d0);
    func_0x000107c613fc();
    func_0x000107c61174(param_1);
    func_0x0001000b64ac(0x10326d580,puVar4);
  }
  return;
}



/* Entry: 10326d3a8; end: 10326d6ff;  */

undefined8 *** FUN_10326d3a8(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  long lVar6;
  undefined8 **ppuStack_58;
  
  if (param_3 != 0) {
    lVar1 = param_3;
    lVar5 = param_2;
    func_0x000107c3e978();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c3ea1c();
      func_0x000107c61180();
      if (param_3 == 0) {
        func_0x000107c5fadc(param_1,param_2);
LAB_10326d4f8:
        lVar6 = 0;
      }
      else {
        lVar6 = param_3;
        func_0x000107c5faec();
        func_0x000107c61170(param_3);
        func_0x000107c5fadc(param_1,param_2);
        if (lVar5 == 0) goto LAB_10326d4f8;
        func_0x000107c5fadc(lVar6,lVar5);
        func_0x000107c6142c(lVar5);
      }
      pppuVar4 = (undefined8 ***)PTR_PTR_1126b4bc0;
      func_0x000107c610f8(PTR_PTR_1126b4bc0);
      func_0x000107c491d0();
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar6);
      pppuVar3 = pppuVar4;
      FUN_10326d298(pppuVar4,param_4);
      goto LAB_10326d55c;
    }
  }
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  func_0x000107c5fadc(param_1,param_2);
  uVar2 = param_1;
  func_0x000108ffe710();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  pppuVar3 = (undefined8 ***)0x1;
  func_0x000108ffef38(1,uVar2,1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  pppuVar4 = pppuVar3;
  func_0x000107c45154();
  func_0x000107c61180();
  func_0x000107c61170(pppuVar3);
  pppuVar3 = &ppuStack_58;
  ppuStack_58 = pppuVar4;
  func_0x000100854cb0(pppuVar3);
LAB_10326d55c:
  func_0x000107c61170(pppuVar4);
  return pppuVar3;
}



/* Entry: 10326d700; end: 10326d7bf;  */

void FUN_10326d700(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_38;
  
  lVar3 = param_1;
  if (param_1 == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x20));
    uVar2 = uVar1;
    func_0x000108ffe710();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    lVar3 = 1;
    func_0x000108ffef38(1,uVar2,1);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    param_1 = 0;
  }
  func_0x000107c61174(param_1);
  lVar4 = lVar3;
  func_0x000107c45154();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lStack_38 = lVar4;
  func_0x000100087f6c(&lStack_38);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 10326d7c0; end: 10326d7db;  */

void FUN_10326d7c0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10326d7dc; end: 10326d897;  */

void FUN_10326d7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_11062dee8;
  func_0x000107c613fc(&UNK_11062dee8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = &UNK_11062df10;
  func_0x000107c613fc(&UNK_11062df10,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  func_0x0001000285a8(0x112e155f0,&UNK_10d9f26d0);
  func_0x000107c613fc();
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_2);
  func_0x0001000b64ac(FUN_10326d96c,puVar2);
  return;
}



/* Entry: 10326d898; end: 10326d96b;  */

void FUN_10326d898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c614f0(param_2);
  puVar1 = &UNK_11062df38;
  func_0x000107c613fc(&UNK_11062df38,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x00010090569c(FUN_10326da38,puVar1,param_2);
  func_0x000107c61574(puVar1);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 10326d96c; end: 10326d977;  */

void FUN_10326d96c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c614f0(uVar4);
  puVar5 = &UNK_11062df38;
  func_0x000107c613fc(&UNK_11062df38,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar3;
  *(undefined8 *)(puVar5 + 0x28) = param_1;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(param_1);
  func_0x00010090569c(FUN_10326da38,puVar5,uVar4);
  func_0x000107c61574(puVar5);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 10326d978; end: 10326da37;  */

void FUN_10326d978(long param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    (*param_2)();
    lVar2 = lVar1;
  }
  func_0x000107c61428(param_1 + 0x10,auStack_70,1,0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar2;
  func_0x000100f01e38(lVar3);
  lVar1 = lVar2;
  func_0x000107c61174(lVar2);
  func_0x000100f01e18(uVar4);
  lStack_78 = lVar2;
  func_0x000100087f6c(&lStack_78);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 10326da38; end: 10326da43;  */

void FUN_10326da38(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  lVar3 = lVar1 + 0x10;
  func_0x000107c61428(lVar3,auStack_58,0,0);
  lVar5 = *(long *)(lVar1 + 0x10);
  lVar4 = lVar5;
  if (lVar5 == 1) {
    (*pcVar2)();
    lVar4 = lVar3;
  }
  func_0x000107c61428(lVar1 + 0x10,auStack_70,1,0);
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  *(long *)(lVar1 + 0x10) = lVar4;
  func_0x000100f01e38(lVar5);
  lVar3 = lVar4;
  func_0x000107c61174(lVar4);
  func_0x000100f01e18(uVar6);
  lStack_78 = lVar4;
  func_0x000100087f6c(&lStack_78);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 10326da44; end: 10326da83;  */

undefined8 FUN_10326da44(void)

{
  if (lRam0000000112f4f7a8 != -1) {
    func_0x000107c61568(0x112f4f7a8,FUN_10326da84);
  }
  return 0x113807180;
}



/* Entry: 10326da84; end: 10326db33;  */

void FUN_10326da84(void)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001010415e8(0);
  (**(code **)(lVar4 + 0x68))
            (puVar3,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1);
  puVar2 = puVar3;
  func_0x000104188018(puVar3,0,0);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  puRam0000000113807180 = puVar2;
  return;
}



/* Entry: 10326db34; end: 10326dcdf;  */

code * FUN_10326db34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126b08b0;
  func_0x000107c61168(PTR_PTR_1126b08b0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c3f71c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar2 = PTR_PTR_1126b17d8;
  func_0x000107c610f8();
  func_0x000107c61174(puVar1);
  func_0x000107c5fc48(param_4,PTR___sSSN_11034da80);
  func_0x000107c460ec();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  if (puVar2 == (undefined *)0x0) {
    func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
    uStack_58 = 0;
    pcVar6 = (code *)&uStack_58;
    func_0x000100854cb0(pcVar6);
  }
  else {
    func_0x000107c56498(puVar2);
    puVar3 = &UNK_11062df60;
    func_0x000107c613fc(&UNK_11062df60,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_11062df88;
    func_0x000107c613fc(&UNK_11062df88,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = param_5;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    *(undefined **)(puVar4 + 0x20) = puVar2;
    uVar5 = 0x112e155f0;
    func_0x0001000285a8(0x112e155f0,&UNK_10d9f26d0);
    func_0x000107c613fc();
    pcVar6 = FUN_10326ddf8;
    func_0x0001000b64ac(FUN_10326ddf8,puVar4,uVar5);
  }
  func_0x000107c61170(puVar1);
  return pcVar6;
}



/* Entry: 10326dce0; end: 10326ddf7;  */

void FUN_10326dce0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    puStack_88 = (undefined *)0x0;
    func_0x000100087f6c(&puStack_88);
  }
  else {
    pcStack_68 = FUN_10326df38;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_100f17d9c;
    puStack_70 = &UNK_11062dfa0;
    ppuVar2 = &puStack_88;
    uStack_60 = param_1;
    func_0x000107c60bc4(ppuVar2);
    uVar1 = uStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar1);
    func_0x000107c5078c(param_2);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(param_2);
  }
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 10326ddf8; end: 10326de03;  */

void FUN_10326ddf8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    puStack_88 = (undefined *)0x0;
    func_0x000100087f6c(&puStack_88);
  }
  else {
    pcStack_68 = FUN_10326df38;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_100f17d9c;
    puStack_70 = &UNK_11062dfa0;
    ppuVar3 = &puStack_88;
    uStack_60 = param_1;
    func_0x000107c60bc4(ppuVar3);
    uVar1 = uStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar1);
    func_0x000107c5078c(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar2);
  }
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 10326de04; end: 10326df37;  */

void FUN_10326de04(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  undefined *puStack_48;
  
  func_0x000107c30a1c();
  func_0x000107c61180();
  if (param_1 == 0) goto LAB_10326df14;
  lVar2 = param_1;
  func_0x000107c5ee30();
  func_0x000107c61170(param_1);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((param_2 & 0xff000000000000) != 0) {
LAB_10326de8c:
        puVar3 = PTR_PTR_1126b2720;
        func_0x000107c61168();
        lVar4 = lVar2;
        func_0x000107c5ee20(lVar2,param_2);
        func_0x000107c51770();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (puVar3 != (undefined *)0x0) {
          puStack_48 = puVar3;
          func_0x000107c61174(puVar3);
          func_0x000100087f6c(&puStack_48);
          func_0x00010006c090(lVar2,param_2);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar3);
          return;
        }
      }
    }
    else if ((long)(int)lVar2 != lVar2 >> 0x20) goto LAB_10326de8c;
  }
  else if ((uVar5 == 2) && (*(long *)(lVar2 + 0x10) != *(long *)(lVar2 + 0x18))) goto LAB_10326de8c;
  func_0x00010006c090(lVar2,param_2);
LAB_10326df14:
  puStack_48 = (undefined *)0x0;
  func_0x000100087f6c(&puStack_48);
  return;
}



/* Entry: 10326df38; end: 10326df5b;  */

void FUN_10326df38(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  ulong unaff_x20;
  undefined *puStack_48;
  
  func_0x000107c30a1c();
  func_0x000107c61180();
  if (param_1 == 0) goto LAB_10326df14;
  lVar2 = param_1;
  func_0x000107c5ee30();
  func_0x000107c61170(param_1);
  uVar1 = (uint)(unaff_x20 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20 & 0xff000000000000) != 0) {
LAB_10326de8c:
        puVar3 = PTR_PTR_1126b2720;
        func_0x000107c61168();
        lVar4 = lVar2;
        func_0x000107c5ee20(lVar2,unaff_x20);
        func_0x000107c51770();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (puVar3 != (undefined *)0x0) {
          puStack_48 = puVar3;
          func_0x000107c61174(puVar3);
          func_0x000100087f6c(&puStack_48);
          func_0x00010006c090(lVar2,unaff_x20);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar3);
          return;
        }
      }
    }
    else if ((long)(int)lVar2 != lVar2 >> 0x20) goto LAB_10326de8c;
  }
  else if ((uVar5 == 2) && (*(long *)(lVar2 + 0x10) != *(long *)(lVar2 + 0x18))) goto LAB_10326de8c;
  func_0x00010006c090(lVar2,unaff_x20);
LAB_10326df14:
  puStack_48 = (undefined *)0x0;
  func_0x000100087f6c(&puStack_48);
  return;
}



/* Entry: 10326df5c; end: 10326e00f;  */

void FUN_10326df5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_11062e058;
  func_0x000107c613fc(&UNK_11062e058,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  func_0x0001000285a8(0x112e155f0,&UNK_10d9f26d0);
  func_0x000107c613fc();
  func_0x000107c615f0(param_3);
  func_0x000107c615f0();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x0001000b64ac(FUN_10326e010,puVar1);
  return;
}



/* Entry: 10326e010; end: 10326e143;  */

void FUN_10326e010(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar5 = &UNK_11062e080;
  func_0x000107c613fc(&UNK_11062e080,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,uVar2);
  puVar6 = &UNK_11062e0a8;
  func_0x000107c613fc(&UNK_11062e0a8,0x38,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar8;
  *(undefined8 *)(puVar6 + 0x30) = param_1;
  pcStack_60 = FUN_10326e144;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11062e0c0;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar5 = puStack_58;
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar7);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 10326e144; end: 10326e21b;  */

void FUN_10326e144(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    pcStack_68 = FUN_10326e238;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_100f4f500;
    puStack_70 = &UNK_11062e0e8;
    ppuVar4 = &puStack_88;
    uStack_60 = uVar1;
    func_0x000107c60bc4(ppuVar4);
    uVar2 = uStack_60;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c4226c(lVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 10326e21c; end: 10326e237;  */

void FUN_10326e21c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10326e238; end: 10326e25b;  */

void FUN_10326e238(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100087f6c(&uStack_18);
  return;
}



/* Entry: 10326e25c; end: 10326e263;  */

void FUN_10326e25c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10326e264; end: 10326e3ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10326e264(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f4f7b0;
  func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
  func_0x000107c613fc();
  uVar3 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4f7b8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10326e3ac; end: 10326e3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10326e3ac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f4f7b0));
  return;
}



/* Entry: 10326e3bc; end: 10326e43b; -[_TtC30SCContextUserFriendingListener28ContextUserFriendingListener didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

/* WARNING: Possible PIC construction at 0x00010326e418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010326e41c) */

void FUN_10326e3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  FUN_10326e4b0(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10326e43c; end: 10326e43f; -[_TtC30SCContextUserFriendingListener28ContextUserFriendingListener didStartSnapchattersUpdateDataRequest:] */

void FUN_10326e43c(void)

{
  return;
}



/* Entry: 10326e440; end: 10326e473;  */

void FUN_10326e440(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10326e474; end: 10326e4af; -[_TtC30SCContextUserFriendingListener28ContextUserFriendingListener .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10326e474(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f4f7b8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4f7b0));
  return;
}



/* Entry: 10326e4b0; end: 10326e5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10326e4b0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10326e5cc);
    (*pcVar2)();
  }
  uVar3 = param_1;
  uVar6 = param_2;
  func_0x000107c3e1d8();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112f4f7b8);
    uVar1 = ((ulong *)(unaff_x20 + _DAT_112f4f7b8))[1];
    if (uVar3 == uVar4 && uVar1 == uVar6) {
      func_0x000107c6142c(uVar6);
    }
    else {
      func_0x000107c605b8(uVar3,uVar1,uVar4,uVar6,0);
      func_0x000107c6142c(uVar6);
      if ((uVar3 & 1) == 0) {
        return;
      }
    }
    if ((param_2 & 1) != 0) {
      uVar3 = param_1;
      func_0x000107c3e1b4();
      func_0x000107c61180();
      if (uVar3 == 0) {
        func_0x000107c3e1c0();
        func_0x000107c61180();
        if (param_1 == 0) {
          return;
        }
        func_0x000107c61170();
        uStack_41 = 0;
        puVar5 = &uStack_41;
      }
      else {
        func_0x000107c61170();
        uStack_42 = 1;
        puVar5 = &uStack_42;
      }
      func_0x000100087c34(puVar5);
    }
  }
  return;
}



/* Entry: 10326e5cc; end: 10326e5eb;  */

void FUN_10326e5cc(void)

{
  func_0x000107c61168(&PTR_PTR_1128c3f98);
  return;
}



/* Entry: 10326e5ec; end: 10326e707; -[SCCTXAction heroContextLabelType] */

undefined8 FUN_10326e5ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010326e620();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10326e708; end: 10326e7ab; -[SCCTXAction setHeroContextLabelType:] */

void FUN_10326e708(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61174(param_1);
  func_0x000107c46ed0(puVar1);
  func_0x000107c61428(0x112f4f7e8,auStack_48,0x20,0);
  func_0x000107c61188(param_1,0x112f4f7e8,puVar1,1);
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10326e7ac; end: 10326e7cf;  */

void FUN_10326e7ac(undefined8 *param_1,undefined8 param_2)

{
  func_0x000103ee3c34();
  *param_1 = param_2;
  return;
}


