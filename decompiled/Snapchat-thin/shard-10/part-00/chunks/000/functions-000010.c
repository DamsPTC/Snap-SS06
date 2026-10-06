/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073398d4; end: 107339903;  */

void FUN_1073398d4(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x38) = extraout_w8;
  FUN_107339904();
  return;
}



/* Entry: 107339904; end: 107339943;  */

void FUN_107339904(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  func_0x0001072ca524();
  func_0x00010734709c();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_FUN_1109a1910);
    *(undefined4 *)(unaff_x19 + 0x38) = unaff_w21;
  }
  return;
}



/* Entry: 107339944; end: 107339957;  */

void FUN_107339944(void)

{
  return;
}



/* Entry: 107339958; end: 1073399a3;  */

void FUN_107339958(void)

{
  func_0x000107347bbc();
  func_0x0001073459fc();
  return;
}



/* Entry: 1073399a4; end: 1073399db;  */

void FUN_1073399a4(void)

{
  func_0x000107344fd4();
  FUN_10753532c();
  return;
}



/* Entry: 1073399dc; end: 107339a07;  */

void FUN_1073399dc(void)

{
  func_0x000107344d34();
  FUN_107339a08();
  return;
}



/* Entry: 107339a08; end: 107339a47;  */

void FUN_107339a08(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  FUN_1073391b0();
  func_0x0001073463a8();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_FUN_1109a1928);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 107339a48; end: 107339a63;  */

void FUN_107339a48(void)

{
  return;
}



/* Entry: 107339a64; end: 107339a97;  */

void FUN_107339a64(long param_1)

{
  long unaff_x20;
  
  func_0x000107345658();
  func_0x00010727d6bc();
  FUN_107339a98(param_1 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 107339a98; end: 107339ac3;  */

void FUN_107339a98(void)

{
  func_0x0001073456d0();
  FUN_107339ac4();
  return;
}



/* Entry: 107339ac4; end: 107339ad7;  */

void FUN_107339ac4(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    func_0x000107268400();
    func_0x000107347c48();
    return;
  }
  return;
}



/* Entry: 107339ad8; end: 107339aef;  */

void FUN_107339ad8(void)

{
  func_0x000107268400();
  func_0x000107347c48();
  return;
}



/* Entry: 107339af0; end: 107339b17;  */

void FUN_107339af0(void)

{
  undefined1 in_ZR;
  
  func_0x0001073455c4();
  if ((bool)in_ZR) {
    FUN_1073391b0();
  }
  return;
}



/* Entry: 107339b18; end: 107339b2f;  */

void FUN_107339b18(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107339b4c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107339b30; end: 107339b4b;  */

void FUN_107339b30(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107339b4c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107339b4c; end: 107339c23;  */

long FUN_107339b4c(long param_1)

{
  func_0x000107339b98(param_1 + 0x1a0);
  func_0x000107296ad0(param_1 + 0x128);
  func_0x000104c2f714(param_1 + 0xf0);
  FUN_107338e64(param_1 + 200);
  func_0x000107284d8c(param_1 + 0x68);
  func_0x000107284d8c(param_1 + 8);
  return param_1;
}



/* Entry: 107339c24; end: 107339cd7;  */

void FUN_107339c24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x21;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107344fb4();
  func_0x0001073466c8();
  FUN_107339e88(auStack_60,param_2,unaff_x21 + 8,auStack_48);
  func_0x000107345c88();
  func_0x0001073466c8();
  func_0x0001073479a0(auStack_78,param_2,unaff_x21 + 0x58);
  func_0x000107345c88();
  func_0x0001073466c8();
  func_0x0001073479a0(auStack_90,param_2,unaff_x21 + 0xa8);
  func_0x000107345c88();
  func_0x000107347778();
  func_0x000107345db4();
  func_0x0001073467f0(&PTR_DAT_1109a19f0);
  func_0x000107345944();
  func_0x000107346154();
  func_0x000107345f54();
  return;
}



/* Entry: 107339cd8; end: 107339d03;  */

void FUN_107339cd8(void)

{
  func_0x000100a2b988();
  FUN_107339d04();
  func_0x000107347938();
  func_0x000107347d50();
  FUN_107339d04();
  return;
}



/* Entry: 107339d04; end: 107339d2b;  */

void FUN_107339d04(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x48) = extraout_w8;
  FUN_107339d2c();
  return;
}



/* Entry: 107339d2c; end: 107339d6b;  */

void FUN_107339d2c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  func_0x00010727e9d0();
  func_0x000107347e2c();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_FUN_1109a19c8);
    *(undefined4 *)(unaff_x19 + 0x48) = unaff_w21;
  }
  return;
}



/* Entry: 107339d6c; end: 107339d9b;  */

void FUN_107339d6c(void)

{
  return;
}



/* Entry: 107339d9c; end: 107339e87;  */

void FUN_107339d9c(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107346244();
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(char *)(unaff_x19 + 0x40) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}



/* Entry: 107339e88; end: 107339f17;  */

void FUN_107339e88(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 auStack_140 [112];
  
  func_0x00010734479c();
  uVar1 = *(int *)(param_3 + 0x48) == 1;
  if ((bool)uVar1) {
    func_0x0001073446ac();
    if ((bool)uVar1) {
      func_0x000107345ba8();
LAB_107339ed0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)();
      return;
    }
  }
  else if (*(int *)(param_3 + 0x48) == 0) {
    func_0x0001073446ac();
    if ((bool)uVar1) {
      func_0x000107346afc();
      goto LAB_107339ed0;
    }
  }
  else {
    func_0x000107346590();
    func_0x0001073465c0();
    func_0x000107345380();
    func_0x000107345728();
    func_0x00010734622c();
    func_0x0001073446ac();
    if ((bool)uVar1) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x000107345728();
  func_0x00010734622c();
  func_0x000107345604();
  func_0x00010734523c();
  func_0x0001073466c8();
  func_0x0001073451fc();
  func_0x00010734520c(auStack_140);
  FUN_107339f78();
  func_0x00010734736c();
  func_0x0001073470fc();
  func_0x000107346ab8();
  func_0x000107345c88();
  return;
}



/* Entry: 107339f18; end: 107339f77;  */

void FUN_107339f18(undefined8 param_1)

{
  undefined1 auStack_a0 [88];
  undefined1 auStack_48 [24];
  
  func_0x00010734523c();
  func_0x0001073466c8();
  func_0x0001073451fc();
  func_0x00010734520c(auStack_a0,param_1,auStack_48);
  FUN_107339f78();
  func_0x00010734736c();
  func_0x0001073470fc();
  func_0x000107346ab8();
  func_0x000107345c88();
  return;
}



/* Entry: 107339f78; end: 107339f93;  */

void FUN_107339f78(void)

{
  func_0x0001073446c4();
  FUN_10755627c();
  return;
}



/* Entry: 107339f94; end: 107339fd7;  */

long FUN_107339f94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_107339d04();
  FUN_107339d04(lVar1 + 0x50,param_3);
  FUN_107339d04(param_1 + 0xa0,param_4);
  return param_1;
}



/* Entry: 107339fd8; end: 10733a017;  */

void FUN_107339fd8(void)

{
  func_0x000107345708();
  func_0x00010727e9d0();
  return;
}



/* Entry: 10733a018; end: 10733a0cb;  */

undefined8 FUN_10733a018(undefined8 param_1)

{
  undefined1 in_ZR;
  int extraout_w8;
  undefined1 auStack_b0 [128];
  
  func_0x0001073447e0();
  func_0x000107347d18();
  if ((extraout_w8 == 0) || (in_ZR = extraout_w8 == 1, (bool)in_ZR)) {
    func_0x0001073465b4();
  }
  else {
    func_0x000107346660();
    func_0x000107346548();
    func_0x0001073473cc();
    func_0x0001073461d0();
    func_0x00010727f9d8();
    func_0x000107346540();
    func_0x0001073461b8();
  }
  func_0x000107347b40();
  func_0x000107345c64();
  func_0x000107347138();
  func_0x0001073454dc(&PTR_FUN_1109a1af8);
  func_0x0001073446ac();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107346540();
    func_0x0001073461b8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    func_0x000107345604();
    func_0x0001073455b8();
    return param_1;
  }
  return param_1;
}



/* Entry: 10733a0cc; end: 10733a143;  */

void FUN_10733a0cc(void)

{
  func_0x0001073455b8();
  return;
}



/* Entry: 10733a144; end: 10733a727;  */

void FUN_10733a144(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  char cVar12;
  char cVar13;
  undefined1 *puVar14;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  undefined8 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined2 uStack_224;
  undefined1 uStack_222;
  undefined8 uStack_220;
  undefined8 uStack_218;
  ulong uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined1 auStack_1d8 [20];
  char cStack_1c4;
  char cStack_1c0;
  undefined1 auStack_1a0 [56];
  undefined1 uStack_168;
  undefined6 uStack_167;
  undefined1 uStack_161;
  undefined7 uStack_160;
  undefined1 uStack_158;
  undefined1 auStack_150 [20];
  undefined4 uStack_13c;
  undefined1 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  int iStack_90;
  undefined8 uStack_88;
  
  func_0x000107344b50();
  uStack_88 = extraout_x8;
  FUN_10733afa0(&uStack_108);
  puVar3 = auStack_1a0;
  func_0x000107346638();
  func_0x000107347974();
  uStack_108 = 0;
  uStack_100 = 0;
  cVar12 = (char)param_2 + -0x80;
  func_0x000107347960();
  uStack_168 = 0;
  uStack_158 = 0;
  if (*(int *)(param_2 + 0x118) == 0) {
    puVar14 = &uStack_168;
  }
  else {
    if (*(int *)(param_2 + 0x118) != 1) {
      auStack_150[0] = 0;
      uStack_118 = 0;
      uStack_110 = 0;
      FUN_10733b14c(&uStack_200,&uStack_168);
      func_0x000107346fc0(*(undefined8 *)(param_2 + 0xd0));
      if (iStack_90 == 1) {
        func_0x00010727f7dc(&uStack_108);
        func_0x0001077758b8(auStack_1d8);
      }
      else {
        auStack_1d8[0] = 0;
        cStack_1c0 = '\0';
      }
      func_0x000107345840(&uStack_108);
      puVar4 = (ulong *)(param_2 + 0xf8);
      if (*(char *)(param_2 + 0x110) == '\0') {
        puVar4 = &uStack_200;
      }
      puVar5 = (ulong *)auStack_1d8;
      if (cStack_1c0 == '\0') {
        puVar5 = puVar4;
      }
      FUN_10733b14c(&uStack_220,puVar5);
      FUN_10733a9b8(auStack_1d8);
      FUN_10733a8d0(&uStack_200);
      func_0x000107347958();
      goto LAB_10733a274;
    }
    puVar14 = (undefined1 *)(param_2 + 0xd0);
  }
  FUN_10733b14c(&uStack_220,puVar14);
LAB_10733a274:
  puVar4 = (ulong *)&uStack_168;
  FUN_10733a8d0();
  if (*(int *)(param_2 + 0x168) == 0) {
    uVar17 = 0;
    uVar16 = 0;
  }
  else if (*(int *)(param_2 + 0x168) == 1) {
    uVar17 = *(undefined1 *)(param_2 + 0x128);
    uStack_160 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x130) >> 8);
    uVar15 = *(undefined8 *)(param_2 + 0x129);
    uStack_168 = (undefined1)uVar15;
    uStack_167 = (undefined6)((ulong)uVar15 >> 8);
    uStack_161 = (undefined1)((ulong)uVar15 >> 0x38);
    uVar16 = *(undefined1 *)(param_2 + 0x138);
    uStack_222 = *(undefined1 *)(param_2 + 0x13b);
    uStack_224 = *(undefined2 *)(param_2 + 0x139);
  }
  else {
    auStack_150[0] = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_200 = uStack_200 & 0xffffffffffffff00;
    uStack_1f0 = uStack_1f0 & 0xffffffffffffff00;
    puVar4 = *(ulong **)(param_2 + 0x128);
    func_0x000107346fc0();
    if (iStack_90 == 1) {
      puVar4 = &uStack_108;
      func_0x00010727f7dc();
      func_0x000107775844(auStack_1d8);
    }
    else {
      auStack_1d8[0] = 0;
      cStack_1c4 = '\0';
    }
    func_0x000107345840(&uStack_108);
    puVar5 = (ulong *)(param_2 + 0x150);
    if (*(char *)(param_2 + 0x164) == '\0') {
      puVar5 = &uStack_200;
    }
    puVar6 = (ulong *)auStack_1d8;
    if (cStack_1c4 == '\0') {
      puVar6 = puVar5;
    }
    uVar17 = (undefined1)*puVar6;
    uVar15 = *(undefined8 *)((long)puVar6 + 1);
    uStack_168 = (undefined1)uVar15;
    uStack_167 = (undefined6)((ulong)uVar15 >> 8);
    uStack_161 = (undefined1)((ulong)uVar15 >> 0x38);
    uStack_161 = (undefined1)puVar6[1];
    uStack_160 = (undefined7)(puVar6[1] >> 8);
    uVar16 = (undefined1)puVar6[2];
    uStack_224 = *(undefined2 *)((long)puVar6 + 0x11);
    uStack_222 = *(undefined1 *)((long)puVar6 + 0x13);
    func_0x000107347958();
  }
  uStack_108 = 0;
  uStack_100 = 0;
  cVar13 = (char)param_2 + 'p';
  func_0x000107347960();
  puVar5 = puVar4;
  func_0x000107346f90();
  func_0x00010734540c();
  puVar6 = puVar5;
  func_0x000107346f90();
  func_0x00010734540c();
  puVar7 = puVar6;
  func_0x000107346f90();
  func_0x00010734540c();
  if (*(int *)(param_2 + 0x2c0) == 0) {
    uVar18 = 0;
    puVar8 = puVar7;
  }
  else {
    puVar8 = (ulong *)(param_2 + 0x290);
    if (*(int *)(param_2 + 0x2c0) == 1) {
      uVar18 = *(undefined4 *)puVar8;
    }
    else {
      uStack_108 = uStack_108 & 0xffffffffffffff00;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uVar18 = 0;
      func_0x00010727f6f4(puVar8,param_3,&uStack_108);
      func_0x000107346fe0();
    }
  }
  func_0x000107346f90();
  func_0x00010734540c();
  puVar9 = (ulong *)(param_2 + 0x310);
  uVar1 = *(int *)(param_2 + 0x358) == 1;
  if ((bool)uVar1) {
    uStack_1f8 = *(undefined8 *)(param_2 + 0x318);
    uStack_200 = *puVar9;
    uStack_1f0 = *(ulong *)(param_2 + 800);
  }
  else if (*(int *)(param_2 + 0x358) == 0) {
    uStack_200 = uStack_200 & 0xffffffffffffff00;
    uStack_1f0 = uStack_1f0 & 0xffffffff;
  }
  else {
    uStack_108 = uStack_108 & 0xffffffffffffff00;
    uStack_d0 = 0;
    uStack_c8 = 0;
    auStack_150[0] = 0;
    uStack_13c = 0;
    FUN_10733b350(&uStack_200,puVar9,param_3,&uStack_108,auStack_150);
    func_0x000107346fe0();
  }
  func_0x000107346f90();
  func_0x00010734540c();
  puVar10 = puVar9;
  func_0x000107346f90();
  func_0x00010734540c();
  FUN_10733b400(&uStack_108);
  func_0x000107346638(auStack_150);
  func_0x000107347974();
  FUN_10733b400(&uStack_108);
  func_0x000107346638(auStack_1d8);
  func_0x000107347974();
  if (*(int *)(param_2 + 0x510) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(int *)(param_2 + 0x510) == 1;
    if ((bool)uVar1) {
      uVar2 = *(undefined1 *)(param_2 + 0x4e0);
    }
    else {
      uStack_108 = uStack_108 & 0xffffffffffffff00;
      uStack_d0 = 0;
      uStack_c8 = 0;
      param_2 = param_2 + 0x4e0;
      FUN_10733b408(param_2,param_3,&uStack_108,0);
      uVar2 = (undefined1)param_2;
      func_0x000107346fe0();
    }
  }
  puVar11 = (undefined8 *)0x150;
  __Znwm();
  func_0x000104c318bc(puVar11 + 1,auStack_1a0);
  puVar11[8] = puVar3;
  *(char *)(puVar11 + 9) = cVar12;
  *(undefined1 *)(puVar11 + 10) = 0;
  *(undefined1 *)(puVar11 + 0xc) = 0;
  func_0x000107347d44();
  if ((bool)uVar1) {
    puVar11[0xb] = uStack_218;
    puVar11[10] = uStack_220;
    uStack_220 = 0;
    uStack_218 = 0;
    *(undefined1 *)(puVar11 + 0xc) = extraout_w8;
  }
  *(undefined1 *)(puVar11 + 0xd) = uVar17;
  *(ulong *)((long)puVar11 + 0x69) = CONCAT17(uStack_161,CONCAT61(uStack_167,uStack_168));
  puVar11[0xe] = CONCAT71(uStack_160,uStack_161);
  *(undefined1 *)(puVar11 + 0xf) = uVar16;
  *(undefined2 *)((long)puVar11 + 0x79) = uStack_224;
  *(undefined1 *)((long)puVar11 + 0x7b) = uStack_222;
  *(ulong **)((long)puVar11 + 0x7c) = puVar4;
  *(char *)((long)puVar11 + 0x84) = cVar13;
  puVar11[0x11] = puVar5;
  puVar11[0x12] = puVar6;
  puVar11[0x13] = puVar7;
  *(undefined4 *)(puVar11 + 0x14) = uVar18;
  *(ulong **)((long)puVar11 + 0xa4) = puVar8;
  *(ulong *)((long)puVar11 + 0xbc) = uStack_1f0;
  *(undefined8 *)((long)puVar11 + 0xb4) = uStack_1f8;
  *(ulong *)((long)puVar11 + 0xac) = uStack_200;
  *(ulong **)((long)puVar11 + 0xc4) = puVar9;
  *(ulong **)((long)puVar11 + 0xcc) = puVar10;
  func_0x000104c318bc(puVar11 + 0x1b,auStack_150);
  func_0x000104c318bc(puVar11 + 0x22,auStack_1d8);
  *(undefined1 *)(puVar11 + 0x29) = uVar2;
  *puVar11 = &PTR_DAT_1109a1d20;
  *param_1 = puVar11;
  func_0x0001073462e0();
  func_0x000104c2f714(auStack_150);
  FUN_10733a8d0(&uStack_220);
  func_0x000107346bc0();
  func_0x0001073447cc(uStack_88);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345840(&uStack_108);
  func_0x00010724b3d8(auStack_150);
  FUN_10733a8d0(&uStack_220);
  do {
    func_0x000104c2f714(auStack_1a0);
    func_0x000107345604();
  } while( true );
}



/* Entry: 10733a728; end: 10733a74f;  */

void FUN_10733a728(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x38) = extraout_w8;
  FUN_10733a750();
  return;
}



/* Entry: 10733a750; end: 10733a78f;  */

void FUN_10733a750(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  FUN_10733a790();
  func_0x00010734709c();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_DAT_1109a1c08);
    *(undefined4 *)(unaff_x19 + 0x38) = unaff_w21;
  }
  return;
}



/* Entry: 10733a790; end: 10733a7c7;  */

void FUN_10733a790(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001073460ac();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a1bf0)[extraout_x8]);
  }
  func_0x000107347650();
  return;
}



/* Entry: 10733a7c8; end: 10733a7f7;  */

void FUN_10733a7c8(void)

{
  return;
}



/* Entry: 10733a7f8; end: 10733a817;  */

void FUN_10733a7f8(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000107346244();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 10733a818; end: 10733a83f;  */

void FUN_10733a818(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x48) = extraout_w8;
  FUN_10733a840();
  return;
}



/* Entry: 10733a840; end: 10733a87f;  */

void FUN_10733a840(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  FUN_10733a880();
  func_0x000107347e2c();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_FUN_1109a1c38);
    *(undefined4 *)(unaff_x19 + 0x48) = unaff_w21;
  }
  return;
}



/* Entry: 10733a880; end: 10733a8bb;  */

void FUN_10733a880(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010734747c();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a1c20)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x48) = 0xffffffff;
  return;
}



/* Entry: 10733a8bc; end: 10733a8cf;  */

void FUN_10733a8bc(void)

{
  return;
}



/* Entry: 10733a8d0; end: 10733a8ef;  */

void FUN_10733a8d0(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10733a8f0();
  }
  return;
}



/* Entry: 10733a8f0; end: 10733a937;  */

void FUN_10733a8f0(long param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_1;
  FUN_10733a938();
  if ((lVar1 == 1) && (func_0x0001073464b0(), extraout_x8 != 0)) {
    func_0x000107346aa8();
    func_0x000107346e70();
    func_0x000107346e68();
  }
  FUN_10733a974(param_1);
  return;
}



/* Entry: 10733a938; end: 10733a973;  */

long FUN_10733a938(long *param_1)

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



/* Entry: 10733a974; end: 10733a9b7;  */

void FUN_10733a974(long param_1)

{
  func_0x000107345acc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10733a9b8; end: 10733a9d7;  */

void FUN_10733a9b8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10733a8d0();
  }
  return;
}



/* Entry: 10733a9d8; end: 10733aa1b;  */

void FUN_10733a9d8(void)

{
  return;
}



/* Entry: 10733aa1c; end: 10733aa3f;  */

void FUN_10733aa1c(void)

{
  func_0x00010734559c();
  func_0x0001073470f0();
  FUN_10733aa40();
  return;
}



/* Entry: 10733aa40; end: 10733aa6b;  */

undefined1 * FUN_10733aa40(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_10733aa6c();
  return param_1;
}



/* Entry: 10733aa6c; end: 10733aa7f;  */

void FUN_10733aa6c(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x00010733a9ec();
    func_0x000107347d90();
    return;
  }
  return;
}



/* Entry: 10733aa80; end: 10733aa97;  */

void FUN_10733aa80(void)

{
  func_0x00010733a9ec();
  func_0x000107347d90();
  return;
}



/* Entry: 10733aa98; end: 10733aabb;  */

void FUN_10733aa98(void)

{
  func_0x000107344d34();
  FUN_10733aabc();
  return;
}



/* Entry: 10733aabc; end: 10733aafb;  */

void FUN_10733aabc(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  FUN_10733aafc();
  func_0x0001073463a8();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_DAT_1109a1c68);
    *(undefined4 *)(unaff_x19 + 0x40) = unaff_w21;
  }
  return;
}



/* Entry: 10733aafc; end: 10733ab33;  */

void FUN_10733aafc(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x000107346090();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a1c50)[extraout_x8]);
  }
  func_0x00010734765c();
  return;
}



/* Entry: 10733ab34; end: 10733ab53;  */

void FUN_10733ab34(void)

{
  return;
}



/* Entry: 10733ab54; end: 10733ab6f;  */

void FUN_10733ab54(void)

{
  func_0x000107346244();
  func_0x000107347e04();
  return;
}



/* Entry: 10733ab70; end: 10733ab97;  */

void FUN_10733ab70(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x38) = extraout_w8;
  FUN_10733ab98();
  return;
}



/* Entry: 10733ab98; end: 10733abd7;  */

void FUN_10733ab98(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  FUN_10733abd8();
  func_0x00010734709c();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_DAT_1109a1c98);
    *(undefined4 *)(unaff_x19 + 0x38) = unaff_w21;
  }
  return;
}



/* Entry: 10733abd8; end: 10733ac0f;  */

void FUN_10733abd8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  
  func_0x0001073460ac();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a1c80)[extraout_x8]);
  }
  func_0x000107347650();
  return;
}



/* Entry: 10733ac10; end: 10733ac2f;  */

void FUN_10733ac10(void)

{
  return;
}



/* Entry: 10733ac30; end: 10733ac4b;  */

void FUN_10733ac30(void)

{
  func_0x000107346244();
  func_0x0001073459fc();
  return;
}



/* Entry: 10733ac4c; end: 10733ac73;  */

void FUN_10733ac4c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x48) = extraout_w8;
  FUN_10733ac74();
  return;
}



/* Entry: 10733ac74; end: 10733acb3;  */

void FUN_10733ac74(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined4 unaff_w21;
  
  func_0x000107345658();
  FUN_10733acb4();
  func_0x000107347e2c();
  if (!(bool)in_ZR) {
    func_0x0001073448fc(&PTR_DAT_1109a1cc8);
    *(undefined4 *)(unaff_x19 + 0x48) = unaff_w21;
  }
  return;
}



/* Entry: 10733acb4; end: 10733acef;  */

void FUN_10733acb4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010734747c();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a1cb0)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x48) = 0xffffffff;
  return;
}



/* Entry: 10733acf0; end: 10733ad0f;  */

void FUN_10733acf0(void)

{
  return;
}



/* Entry: 10733ad10; end: 10733ad2b;  */

void FUN_10733ad10(void)

{
  func_0x000107346244();
  func_0x000107347e18();
  return;
}



/* Entry: 10733ad2c; end: 10733ad53;  */

void FUN_10733ad2c(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_10733ad54();
  return;
}



/* Entry: 10733ad54; end: 10733ad97;  */

void FUN_10733ad54(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107345658();
  FUN_10733ad98();
  iVar1 = *(int *)(unaff_x20 + 0x30);
  if (iVar1 != -1) {
    func_0x0001073448fc(&PTR_DAT_1109a1cf8);
    *(int *)(unaff_x19 + 0x30) = iVar1;
  }
  return;
}



/* Entry: 10733ad98; end: 10733add3;  */

void FUN_10733ad98(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001073474cc();
  if (!(bool)in_ZR) {
    func_0x000107344d8c((&PTR_FUN_1109a1ce0)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x30) = 0xffffffff;
  return;
}



/* Entry: 10733add4; end: 10733adf3;  */

void FUN_10733add4(void)

{
  return;
}



/* Entry: 10733adf4; end: 10733af23;  */

void FUN_10733adf4(long param_1)

{
  long unaff_x19;
  
  func_0x000107346244();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(unaff_x19 + 0x28);
  return;
}



/* Entry: 10733af24; end: 10733af9f;  */

long FUN_10733af24(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_c0 [144];
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010734479c();
  if (*(int *)(param_3 + 0x70) == 0) {
    func_0x0001073446ac();
    if ((bool)in_ZR) {
      func_0x000107346afc();
      goto SUB_104c2fe00;
    }
  }
  else {
    func_0x000107347e9c();
    if ((bool)in_ZR) {
      func_0x0001073446ac();
      if ((bool)in_ZR) {
        func_0x0001073470b8();
        goto SUB_104c2fe00;
      }
    }
    else {
      func_0x000107344da4();
      func_0x000107344f44();
      func_0x000107345e20();
      func_0x000107346168();
      func_0x0001073446ac();
      if ((bool)in_ZR) {
        return param_1;
      }
    }
  }
  ___stack_chk_fail();
  func_0x000107345820();
  func_0x000107346168();
  unaff_x30 = FUN_10733afa0;
  func_0x000107345604();
  register0x00000008 = (BADSPACEBASE *)auStack_c0;
  unaff_x29 = puVar1;
SUB_104c2fe00:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return unaff_x19;
}



/* Entry: 10733afa0; end: 10733afa3;  */

void FUN_10733afa0(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 10733afa4; end: 10733b02f;  */

undefined1  [16]
FUN_10733afa4(undefined8 *param_1,undefined1 *param_2,long *param_3,ulong param_4,uint param_5)

{
  ulong *puVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 *extraout_x8;
  int extraout_w9;
  undefined8 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 uStack_141;
  ulong uStack_140;
  undefined1 auStack_138 [120];
  int iStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_70 [80];
  
  func_0x000107344b40();
  func_0x000107346430();
  if ((bool)in_ZR) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    puVar5 = (undefined1 *)(ulong)*(uint *)(param_2 + 0x10);
  }
  else if (extraout_w9 == 0) {
    puVar4 = (undefined8 *)*param_3;
    puVar5 = (undefined1 *)(ulong)*(uint *)(param_3 + 1);
  }
  else {
    func_0x000107347ffc();
    param_5 = *(uint *)(param_3 + 1);
    func_0x000107345920();
    puVar4 = (undefined8 *)(param_2 + 8);
    puVar5 = extraout_x8;
    FUN_10733b030(puVar4,extraout_x8,auStack_70);
    param_1 = puVar4;
    param_2 = puVar5;
    func_0x000107345e18();
  }
  func_0x00010734471c();
  if ((bool)in_ZR) {
    auVar9._8_8_ = (ulong)puVar5 & 0xff;
    auVar9._0_8_ = puVar4;
    return auVar9;
  }
  ___stack_chk_fail();
  func_0x0001073451b4();
  func_0x000107345604();
  puVar4 = param_1;
  func_0x0001073449c4();
  uStack_140 = param_4;
  func_0x000107753050(auStack_138,*puVar4);
  uVar3 = iStack_c0 == 1;
  if ((bool)uVar3) {
    puVar5 = auStack_138;
    func_0x00010727f7dc(puVar5);
    param_2 = &uStack_141;
    FUN_10733b134();
    uVar7 = (ulong)puVar5 & 0xffffffffffffff00;
    uVar8 = (ulong)puVar5 & 0xff;
    uVar3 = ((ulong)param_2 & 0x100000000) == 0;
    puVar5 = param_2;
    bVar2 = (bool)uVar3;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    uVar7 = 0;
    uVar8 = 0;
    bVar2 = true;
  }
  uVar6 = (uint)puVar5;
  func_0x000107345840(auStack_138);
  if (bVar2) {
    puVar1 = param_1 + 5;
    if (*(char *)((long)param_1 + 0x34) == '\0') {
      puVar1 = &uStack_140;
    }
    uVar3 = *(char *)((long)param_1 + 0x34) == '\x01';
    uVar6 = param_5;
    if ((bool)uVar3) {
      uVar6 = (uint)*(byte *)(param_1 + 6);
    }
    uVar8 = *puVar1;
  }
  else {
    uVar8 = uVar8 | uVar7;
  }
  func_0x0001073447cc(uStack_b8,uVar8);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x000107345840(auStack_138);
    func_0x000107345604();
    func_0x0001077757f4();
    auVar11._8_8_ = (ulong)param_2 & 0xffffffffff;
    auVar11._0_8_ = uVar8;
    return auVar11;
  }
  auVar10._8_4_ = uVar6 & 0xff;
  auVar10._0_8_ = uVar8;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 10733b030; end: 10733b133;  */

void FUN_10733b030(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong *puVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 uStack_d1;
  ulong uStack_d0;
  undefined1 auStack_c8 [120];
  int iStack_50;
  undefined8 uStack_48;
  
  puVar4 = param_1;
  func_0x0001073449c4();
  uStack_d0 = param_4;
  func_0x000107753050(auStack_c8,*puVar4);
  uVar3 = iStack_50 == 1;
  if ((bool)uVar3) {
    puVar5 = auStack_c8;
    func_0x00010727f7dc(puVar5);
    puVar6 = &uStack_d1;
    FUN_10733b134();
    uVar7 = (ulong)puVar5 & 0xffffffffffffff00;
    uVar8 = (ulong)puVar5 & 0xff;
    uVar3 = ((ulong)puVar6 & 0x100000000) == 0;
    bVar2 = (bool)uVar3;
  }
  else {
    uVar7 = 0;
    uVar8 = 0;
    bVar2 = true;
  }
  func_0x000107345840(auStack_c8);
  if (bVar2) {
    puVar1 = param_1 + 5;
    if (*(char *)((long)param_1 + 0x34) == '\0') {
      puVar1 = &uStack_d0;
    }
    uVar3 = *(char *)((long)param_1 + 0x34) == '\x01';
    uVar8 = *puVar1;
  }
  else {
    uVar8 = uVar8 | uVar7;
  }
  func_0x0001073447cc(uStack_48,uVar8);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345840(auStack_c8);
  func_0x000107345604();
  func_0x0001077757f4();
  return;
}



/* Entry: 10733b134; end: 10733b14b;  */

void FUN_10733b134(void)

{
  func_0x0001077757f4();
  return;
}



/* Entry: 10733b14c; end: 10733b177;  */

void FUN_10733b14c(void)

{
  func_0x0001073456d0();
  FUN_10733b178();
  return;
}



/* Entry: 10733b178; end: 10733b18b;  */

void FUN_10733b178(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    FUN_10733b1a4();
    func_0x000107347c48();
    return;
  }
  return;
}



/* Entry: 10733b18c; end: 10733b1a3;  */

void FUN_10733b18c(void)

{
  FUN_10733b1a4();
  func_0x000107347c48();
  return;
}



/* Entry: 10733b1a4; end: 10733b1c3;  */

void FUN_10733b1a4(void)

{
  func_0x000107347740();
  FUN_10733b1c4();
  return;
}



/* Entry: 10733b1c4; end: 10733b207;  */

void FUN_10733b1c4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  lVar4 = param_3[1];
  uVar5 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    do {
      func_0x000107345624();
    } while (extraout_w10 != 0);
  }
  if (*param_2 != 0) {
    piVar1 = (int *)(*param_2 + 0x18);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10733b208; end: 10733b267;  */

ulong FUN_10733b208(ulong param_1,undefined8 param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined1 in_ZR;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_w9;
  ulong unaff_x19;
  ulong uStack_a0;
  ulong uStack_98;
  
  uVar5 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = (uint)param_2;
  func_0x000107344b40();
  func_0x000107346430();
  if ((bool)in_ZR) {
    unaff_x19 = *(ulong *)(CONCAT44(uVar5,uVar4) + 8);
  }
  else if (extraout_w9 == 0) {
    unaff_x19 = *param_3;
  }
  else {
    func_0x000107347ffc();
    func_0x000107345920();
    func_0x000107345bf4();
    func_0x0001073451b4();
  }
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return unaff_x19 & 0xffffffffff;
  }
  ___stack_chk_fail();
  func_0x0001073451b4();
  func_0x000107345604();
  uVar3 = param_1;
  uStack_98 = param_4;
  FUN_10733b2b8();
  uStack_a0 = uVar3;
  puVar1 = (ulong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) == '\0') {
    puVar1 = &uStack_98;
  }
  puVar2 = &uStack_a0;
  if ((uVar4 & 1) == 0) {
    puVar2 = puVar1;
  }
  return *puVar2 & 0xffffffffff;
}



/* Entry: 10733b268; end: 10733b2b7;  */

ulong FUN_10733b268(ulong param_1,uint param_2,undefined8 param_3,ulong param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_30;
  ulong uStack_28;
  
  uVar3 = param_1;
  uStack_28 = param_4;
  FUN_10733b2b8();
  uStack_30 = uVar3;
  puVar1 = (ulong *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x30) == '\0') {
    puVar1 = &uStack_28;
  }
  puVar2 = &uStack_30;
  if ((param_2 & 1) == 0) {
    puVar2 = puVar1;
  }
  return *puVar2 & 0xffffffffff;
}



/* Entry: 10733b2b8; end: 10733b337;  */

undefined1  [16] FUN_10733b2b8(ulong *param_1,ulong param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  func_0x000107344818();
  uVar1 = *param_1;
  func_0x000107346350(uVar1);
  func_0x000107346ce4();
  if ((bool)in_ZR) {
    func_0x0001073462f0();
    param_2 = 0xffffffffffffff47;
    FUN_10733b338();
    unaff_x20 = uVar1 & 0xffffffffffffff00;
    unaff_x21 = uVar1 & 0xff;
    unaff_x19 = param_2 & 0xff;
  }
  else {
    func_0x000107346750();
  }
  func_0x000107344f10();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    auVar3._0_8_ = unaff_x21 | unaff_x20;
    auVar3._8_8_ = unaff_x19;
    return auVar3;
  }
  ___stack_chk_fail();
  func_0x000107344f10();
  func_0x000107345604();
  func_0x0001077757a4();
  auVar2._8_8_ = param_2 & 0xff;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 10733b338; end: 10733b34f;  */

void FUN_10733b338(void)

{
  func_0x0001077757a4();
  return;
}



/* Entry: 10733b350; end: 10733b3a7;  */

void FUN_10733b350(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar3;
  undefined8 auStack_4c [3];
  char cStack_34;
  
  func_0x000107346830();
  FUN_10733b3a8(auStack_4c);
  puVar1 = (undefined8 *)(unaff_x20 + 0x28);
  if (*(char *)(unaff_x20 + 0x40) == '\0') {
    puVar1 = unaff_x19;
  }
  puVar2 = auStack_4c;
  if (cStack_34 == '\0') {
    puVar2 = puVar1;
  }
  uVar3 = *puVar2;
  unaff_x21[1] = puVar2[1];
  *unaff_x21 = uVar3;
  unaff_x21[2] = puVar2[2];
  return;
}



/* Entry: 10733b3a8; end: 10733b3ff;  */

void FUN_10733b3a8(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_a8 [136];
  
  func_0x0001073447e0();
  func_0x0001073476ec();
  func_0x000107346350();
  func_0x000107346ce4();
  if ((bool)in_ZR) {
    unaff_x20 = auStack_a8;
    func_0x0001073462f0();
  }
  func_0x00010734615c();
  func_0x000107344f10();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107347c0c();
  func_0x000107345604();
  func_0x0001000d03a8();
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined1 **)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 10733b400; end: 10733b407;  */

void FUN_10733b400(undefined8 param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,0x1138369c0);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 10733b408; end: 10733b447;  */

uint FUN_10733b408(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = param_1;
  FUN_10733b448();
  uVar1 = (uint)lVar2;
  if ((((uint)lVar2 >> 8 & 1) == 0) && (uVar1 = param_4, *(char *)(param_1 + 0x29) == '\x01')) {
    uVar1 = (uint)*(byte *)(param_1 + 0x28);
  }
  return uVar1 & 0xff;
}



/* Entry: 10733b448; end: 10733b4cb;  */

undefined1 * FUN_10733b448(long *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long extraout_x8;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 auStack_218 [72];
  undefined1 uStack_1d0;
  
  func_0x00010734490c();
  puVar1 = (undefined1 *)*param_1;
  func_0x000107346350();
  func_0x000107346ce4();
  if ((bool)in_ZR) {
    func_0x0001073462f0();
    func_0x000107775bd4();
    uVar3 = (uint)puVar1 >> 8 & 0xff;
    puVar2 = puVar1;
  }
  else {
    uVar3 = 0;
    puVar2 = (undefined1 *)0x0;
  }
  func_0x000107344f10();
  func_0x00010734471c();
  if ((bool)in_ZR) {
    return (undefined1 *)(ulong)((uint)puVar2 & 0xff | uVar3 << 8);
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x000107344f10();
  func_0x000107345604();
  func_0x0001073446e8();
  func_0x000107344ab4();
  FUN_107323db4();
  func_0x00010734661c();
  func_0x000107345c90();
  func_0x0001073461c8();
  func_0x000107345b64();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000107345d9c();
  func_0x000107345b64();
  func_0x000107345604();
  func_0x00010734479c();
  FUN_10733b5b4(auStack_218);
  func_0x000107346ae4(uStack_1d0);
  FUN_10733b5d0(puVar1 + 8,extraout_x8 + 8);
  puVar1 = auStack_218;
  func_0x00010733b664(puVar1);
  func_0x000107345944();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = auStack_218;
  func_0x00010733b664(puVar1);
  func_0x000107345944();
  func_0x000107345604();
  func_0x000107347fe8();
  FUN_107559004();
  return puVar1;
}



/* Entry: 10733b4cc; end: 10733b523;  */

void FUN_10733b4cc(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  undefined1 auStack_168 [72];
  undefined1 uStack_120;
  
  func_0x0001073446e8();
  func_0x000107344ab4();
  FUN_107323db4();
  func_0x00010734661c();
  func_0x000107345c90();
  func_0x0001073461c8();
  func_0x000107345b64();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107345d9c();
  func_0x000107345b64();
  func_0x000107345604();
  func_0x00010734479c();
  FUN_10733b5b4(auStack_168);
  func_0x000107346ae4(uStack_120);
  FUN_10733b5d0(unaff_x19 + 8,extraout_x8 + 8);
  func_0x00010733b664(auStack_168);
  func_0x000107345944();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010733b664(auStack_168);
  func_0x000107345944();
  func_0x000107345604();
  func_0x000107347fe8();
  FUN_107559004();
  return;
}



/* Entry: 10733b524; end: 10733b5b3;  */

void FUN_10733b524(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  undefined1 auStack_88 [72];
  undefined1 uStack_40;
  
  func_0x00010734479c();
  FUN_10733b5b4(auStack_88);
  func_0x000107346ae4(uStack_40);
  FUN_10733b5d0(unaff_x19 + 8,extraout_x8 + 8);
  func_0x00010733b664(auStack_88);
  func_0x000107345944();
  func_0x0001073446ac();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010733b664(auStack_88);
  func_0x000107345944();
  func_0x000107345604();
  func_0x000107347fe8();
  FUN_107559004();
  return;
}



/* Entry: 10733b5b4; end: 10733b5cf;  */

void FUN_10733b5b4(void)

{
  func_0x000107347fe8();
  FUN_107559004();
  return;
}



/* Entry: 10733b5d0; end: 10733b62b;  */

void FUN_10733b5d0(long param_1)

{
  undefined1 in_ZR;
  undefined4 extraout_w8;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x000107344d7c();
  *(undefined4 *)(param_1 + 0x38) = extraout_w8;
  FUN_10733a790();
  func_0x00010734709c();
  if (!(bool)in_ZR) {
    func_0x000107344c48((&PTR_FUN_1109a1d90)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x38) = unaff_w21;
  }
  return;
}



/* Entry: 10733b62c; end: 10733b643;  */

void FUN_10733b62c(void)

{
  return;
}



/* Entry: 10733b644; end: 10733b687;  */

void FUN_10733b644(long param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000107346940();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 10733b688; end: 10733b693;  */

void FUN_10733b688(void)

{
  return;
}



/* Entry: 10733b694; end: 10733b6bb;  */

void FUN_10733b694(void)

{
  func_0x000107345bd8();
  func_0x000107347f50();
  FUN_10733b6bc();
  return;
}



/* Entry: 10733b6bc; end: 10733b6ef;  */

undefined1 * FUN_10733b6bc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_10733b6f0();
  return param_1;
}



/* Entry: 10733b6f0; end: 10733b703;  */

void FUN_10733b6f0(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10733b14c();
    func_0x000107347d90();
    return;
  }
  return;
}



/* Entry: 10733b704; end: 10733b71b;  */

void FUN_10733b704(void)

{
  FUN_10733b14c();
  func_0x000107347d90();
  return;
}



/* Entry: 10733b71c; end: 10733b74b;  */

long FUN_10733b71c(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_10733a880(param_1 + 8);
  }
  return param_1;
}


