/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108826ac4; end: 108826adb;  */

long FUN_108826ac4(long param_1)

{
  func_0x000108826b18(param_1 + 0xb8);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xb0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x70);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x40);
  return param_1 + 0x18;
}



/* Entry: 108826adc; end: 108826b3b;  */

long FUN_108826adc(long param_1)

{
  func_0x000108826b18(param_1 + 0xa0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0x98);
  __ZNSt3__15mutexD1Ev(param_1 + 0x58);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x28);
  return param_1;
}



/* Entry: 108826b3c; end: 108826b4b;  */

void FUN_108826b3c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108826b4c; end: 108826c07;  */

void FUN_108826b4c(void)

{
  undefined8 *puVar1;
  long *unaff_x19;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  func_0x00010882ed24();
  func_0x00010882ecd4();
  func_0x0001052c2884();
  func_0x00010882f6f8();
  func_0x0001052c28ac();
  func_0x0001052c2af4(auStack_40);
  func_0x00010882f7f8();
  func_0x00010882f8cc();
  puVar1 = (undefined8 *)*unaff_x19;
  if (*(char *)(puStack_30 + 4) == '\x01') {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    uVar4 = *(undefined8 *)((long)puVar1 + 9);
    *(undefined8 *)((long)puStack_30 + 0x11) = *(undefined8 *)((long)puVar1 + 0x11);
    *(undefined8 *)((long)puStack_30 + 9) = uVar4;
    puStack_30[1] = uVar3;
    *puStack_30 = uVar2;
  }
  else {
    uVar2 = *puVar1;
    uVar4 = puVar1[3];
    uVar3 = puVar1[2];
    puStack_30[1] = puVar1[1];
    *puStack_30 = uVar2;
    puStack_30[3] = uVar4;
    puStack_30[2] = uVar3;
    *(undefined1 *)(puStack_30 + 4) = 1;
  }
  func_0x00010882ecb4();
  if (unaff_x19 == (long *)0x0) {
    func_0x00010882f178();
  }
  else {
    func_0x000107c33a10();
    func_0x00010882eba0();
    func_0x00010882e43c();
  }
  func_0x00010882f98c();
  return;
}



/* Entry: 108826c08; end: 108826c5f;  */

long FUN_108826c08(long param_1)

{
  long extraout_x8;
  
  func_0x00010882f0a8(&UNK_110a78de0);
  if (extraout_x8 != 0) {
    func_0x00010882ecc4();
    func_0x000107c33ad4();
    FUN_108826c60();
    func_0x00010882f9f4();
  }
  func_0x0001052c2af4(param_1 + 0x18);
  func_0x0001052c2af4();
  return param_1;
}



/* Entry: 108826c60; end: 108826c9b;  */

void FUN_108826c60(void)

{
  func_0x00010882e6e8();
  func_0x000107c33ad4();
  FUN_108826c9c();
  func_0x000107c33aa0();
  func_0x00010882f3f0();
  return;
}



/* Entry: 108826c9c; end: 108826cb7;  */

void FUN_108826c9c(void)

{
  func_0x00010882f704();
  FUN_108826cb8();
  return;
}



/* Entry: 108826cb8; end: 108826d47;  */

void FUN_108826cb8(void)

{
  long unaff_x19;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  func_0x00010882ed24();
  func_0x00010882ecd4();
  func_0x0001052c2884();
  func_0x00010882f6f8();
  func_0x0001052c28ac();
  func_0x0001052c2af4(auStack_40);
  func_0x00010882f7f8();
  func_0x00010882f8cc();
  func_0x00010882f3ac();
  FUN_108826d48();
  func_0x00010882ecb4(uStack_30);
  if (unaff_x19 == 0) {
    func_0x00010882f178();
  }
  else {
    func_0x000107c33a10();
    func_0x00010882eba0();
    func_0x00010882e43c();
  }
  func_0x00010882f98c();
  return;
}



/* Entry: 108826d48; end: 108826d5b;  */

void FUN_108826d48(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0x98,*param_1);
  return;
}



/* Entry: 108826d5c; end: 108826d6f;  */

void FUN_108826d5c(void)

{
  FUN_108829edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108826d70; end: 108826d7b;  */

void FUN_108826d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010056fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108826d7c; end: 108826d8f;  */

void FUN_108826d7c(void)

{
  FUN_1088289fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108826d90; end: 108826fef;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *****
FUN_108826d90(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long *param_8)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 in_ZR;
  char **ppcVar12;
  undefined8 *****pppppuVar13;
  undefined8 *puVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined4 uVar21;
  code *pcVar22;
  undefined1 uVar23;
  undefined8 uVar24;
  undefined8 ***pppuVar25;
  code *pcVar26;
  undefined1 uVar27;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  undefined8 **extraout_x8_10;
  undefined8 extraout_x8_11;
  code *extraout_x8_12;
  undefined8 extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  code *extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  code *extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  code *extraout_x8_24;
  code *extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  code *extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  code *extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  code *extraout_x8_34;
  code *extraout_x8_35;
  undefined8 extraout_x8_36;
  code *extraout_x8_37;
  code *extraout_x8_38;
  undefined8 extraout_x9;
  undefined8 **extraout_x9_00;
  undefined8 extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  int extraout_w10_29;
  int extraout_w10_30;
  long unaff_x19;
  undefined8 ****ppppuVar28;
  undefined8 ****ppppuVar29;
  undefined8 ****ppppuVar30;
  undefined8 *****pppppuVar31;
  long lStack_918;
  long lStack_910;
  undefined1 *puStack_908;
  long *plStack_900;
  code *pcStack_8f8;
  undefined1 uStack_8f0;
  undefined7 uStack_8ef;
  undefined1 uStack_8e8;
  undefined7 uStack_8e7;
  undefined1 uStack_8e0;
  undefined8 ****ppppuStack_8d8;
  undefined8 ****ppppuStack_8d0;
  long lStack_8c8;
  long lStack_8c0;
  long lStack_8b8;
  undefined8 ****ppppuStack_8b0;
  undefined8 ****ppppuStack_8a8;
  long lStack_8a0;
  long lStack_898;
  long lStack_890;
  undefined *puStack_888;
  long lStack_880;
  long lStack_878;
  undefined1 *puStack_870;
  long lStack_868;
  code *pcStack_860;
  undefined1 uStack_858;
  undefined1 uStack_850;
  undefined8 uStack_84f;
  undefined8 ****ppppuStack_840;
  undefined8 ****ppppuStack_838;
  code *pcStack_830;
  undefined **ppuStack_828;
  undefined1 uStack_820;
  undefined7 uStack_81f;
  long lStack_818;
  long lStack_810;
  long lStack_808;
  undefined8 *****pppppuStack_800;
  long lStack_7f8;
  long lStack_7f0;
  long lStack_7e8;
  code *pcStack_7e0;
  undefined **ppuStack_7d8;
  long *plStack_7d0;
  undefined8 uStack_780;
  undefined8 *******pppppppuStack_770;
  undefined8 ****appppuStack_768 [3];
  undefined8 ****ppppuStack_750;
  undefined4 uStack_748;
  undefined8 ****ppppuStack_740;
  undefined8 ****ppppuStack_738;
  undefined1 auStack_730 [8];
  undefined1 auStack_728 [8];
  undefined8 *******apppppppuStack_720 [2];
  undefined8 ****ppppuStack_710;
  long lStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined *puStack_6e8;
  undefined *puStack_6e0;
  undefined1 auStack_6d8 [88];
  undefined8 uStack_680;
  code *pcStack_670;
  undefined **ppuStack_668;
  undefined8 uStack_660;
  code *pcStack_658;
  undefined **ppuStack_650;
  code *pcStack_648;
  undefined **ppuStack_640;
  undefined8 uStack_610;
  undefined8 uStack_5e0;
  undefined8 *****pppppuStack_5d8;
  undefined8 *****pppppuStack_5d0;
  undefined8 ****ppppuStack_5c8;
  undefined8 *******pppppppuStack_5c0;
  undefined8 *****pppppuStack_5b8;
  undefined8 *******pppppppuStack_5b0;
  code *pcStack_5a8;
  undefined8 *****apppppuStack_598 [2];
  undefined8 ****ppppuStack_588;
  long lStack_580;
  undefined1 uStack_578;
  undefined8 *****pppppuStack_570;
  undefined8 ***pppuStack_568;
  undefined1 auStack_558 [8];
  undefined8 **ppuStack_550;
  undefined8 **ppuStack_548;
  undefined8 ****appppuStack_540 [2];
  undefined8 ****ppppuStack_530;
  long lStack_528;
  undefined8 **ppuStack_520;
  undefined8 **ppuStack_518;
  undefined8 **ppuStack_510;
  char *pcStack_508;
  undefined1 auStack_500 [8];
  undefined *puStack_4f8;
  code *pcStack_4f0;
  undefined **ppuStack_4e8;
  undefined8 uStack_4b8;
  undefined8 ***pppuStack_4b0;
  undefined1 uStack_4a8;
  undefined8 **ppuStack_4a0;
  undefined8 **ppuStack_498;
  undefined8 **ppuStack_490;
  undefined8 **ppuStack_488;
  undefined8 **ppuStack_480;
  undefined8 **ppuStack_478;
  undefined8 **ppuStack_470;
  code *pcStack_468;
  undefined **ppuStack_460;
  undefined8 uStack_440;
  undefined8 *******pppppppuStack_430;
  code *pcStack_428;
  char *pcStack_400;
  char *pcStack_3f8;
  undefined8 *******pppppppuStack_3f0;
  code *pcStack_3e8;
  undefined8 *******pppppppuStack_3e0;
  undefined8 ****ppppuStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined8 *****pppppuStack_3c8;
  undefined8 *****pppppuStack_3c0;
  code *pcStack_3b8;
  undefined8 ****appppuStack_3b0 [2];
  undefined8 ***pppuStack_3a0;
  undefined8 ***pppuStack_398;
  undefined1 auStack_390 [32];
  undefined8 auStack_370 [4];
  undefined8 ***pppuStack_350;
  undefined8 ***pppuStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  char *pcStack_320;
  undefined1 auStack_318 [104];
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  code *pcStack_288;
  undefined **ppuStack_280;
  undefined8 ******ppppppuStack_220;
  char **ppcStack_218;
  undefined8 ******ppppppuStack_210;
  undefined8 ****ppppuStack_208;
  undefined8 ****ppppuStack_200;
  undefined8 *****pppppuStack_1f8;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 ****ppppuStack_1d8;
  char *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ****ppppuStack_1c0;
  char *pcStack_1b8;
  undefined4 uStack_1b0;
  undefined2 uStack_1ac;
  undefined8 ****ppppuStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  char *pcStack_190;
  undefined8 ******ppppppuStack_188;
  undefined8 ****ppppuStack_180;
  char *pcStack_178;
  char *pcStack_168;
  char *pcStack_160;
  undefined8 ******ppppppuStack_158;
  undefined *puStack_150;
  undefined8 ****ppppuStack_148;
  char *pcStack_140;
  undefined4 uStack_138;
  undefined2 uStack_134;
  undefined8 ****ppppuStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  char *pcStack_108;
  char *pcStack_100;
  undefined8 ******ppppppuStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  char **ppcStack_c0;
  undefined8 uStack_70;
  
  func_0x000107c337b0();
  pcStack_178 = (char *)param_4[1];
  ppppuStack_180 = (undefined8 ****)*param_4;
  uStack_70 = extraout_x8;
  if (param_4[1] != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c29cf8(&pcStack_198,param_2);
  uVar24 = *(undefined8 *)(unaff_x19 + 0x10);
  func_0x000107c29cfc(&ppppuStack_1c0,*(undefined8 *)(unaff_x19 + 8),uVar24);
  uStack_1b0 = (undefined4)param_2;
  uStack_1ac = *(undefined2 *)param_3;
  pcStack_1a0 = pcStack_178;
  ppppuStack_1a8 = ppppuStack_180;
  if (pcStack_178 != (char *)0x0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  puStack_150 = &UNK_10f4bcdd9;
  func_0x00010882f098(&pcStack_198);
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_00)();
  func_0x000107c337e4();
  func_0x000107c338d4();
  func_0x000107c3396c();
  func_0x00010882f090();
  ppcVar12 = &pcStack_168;
  uVar21 = SUB84(&ppppuStack_148,0);
  func_0x000107c33954();
  func_0x00010882eef4();
  pcVar9 = pcStack_1a0;
  ppppuVar29 = ppppuStack_1a8;
  pcVar8 = pcStack_1b8;
  uStack_1c8 = *(undefined8 *)(unaff_x19 + 0x28);
  ppppuStack_1d8 = ppppuStack_1c0;
  ppppuStack_148 = ppppuStack_1c0;
  pcStack_140 = pcStack_1b8;
  pcStack_1b8 = (char *)0x0;
  ppppuStack_1c0 = (undefined8 ****)0x0;
  uStack_138 = uStack_1b0;
  uStack_134 = uStack_1ac;
  ppppuStack_130 = ppppuStack_1a8;
  pcStack_128 = pcStack_1a0;
  ppppuStack_1a8 = (undefined8 ****)0x0;
  pcStack_1a0 = (char *)0x0;
  pcStack_120 = (char *)0x0;
  uStack_110 = 1;
  pcStack_108 = pcStack_198;
  pcStack_100 = pcStack_190;
  pcStack_1d0 = (char *)(unaff_x19 + 0x38);
  pcStack_118 = param_3;
  func_0x000107c33ae0();
  ppppppuVar17 = ppppppuStack_158;
  pcVar11 = pcStack_160;
  pcVar10 = pcStack_168;
  ppppppuStack_f8 = ppppppuStack_188;
  pcStack_e8 = pcStack_168;
  pcStack_e0 = pcStack_160;
  ppppppuStack_d8 = ppppppuStack_158;
  pcStack_168 = (char *)0x0;
  pcStack_160 = (char *)0x0;
  ppppppuStack_158 = (undefined8 ******)0x0;
  ppuStack_d0 = (undefined **)FUN_108828a5c;
  ppuStack_c8 = &PTR_FUN_110a77fe8;
  pcStack_f0 = (char *)(unaff_x19 + 0x38);
  func_0x000107c33b78();
  *ppcVar12 = (char *)ppppuStack_1d8;
  ppcVar12[1] = pcVar8;
  ppppuStack_148 = (undefined8 ****)0x0;
  pcStack_140 = (char *)0x0;
  *(undefined4 *)(ppcVar12 + 2) = uStack_1b0;
  *(undefined2 *)((long)ppcVar12 + 0x14) = uStack_1ac;
  ppcVar12[3] = (char *)ppppuVar29;
  ppcVar12[4] = pcVar9;
  pcVar8 = pcStack_120;
  ppppuStack_130 = (undefined8 ****)0x0;
  pcStack_128 = (char *)0x0;
  ppcVar12[6] = pcStack_118;
  ppcVar12[5] = pcVar8;
  ppcVar12[7] = (char *)CONCAT71(uStack_10f,uStack_110);
  ppcVar12[8] = pcStack_198;
  ppcVar12[9] = pcStack_190;
  ppcVar12[10] = (char *)ppppppuStack_188;
  pcStack_108 = (char *)0x0;
  pcStack_100 = (char *)0x0;
  ppppppuStack_f8 = (undefined8 ******)0x0;
  ppcVar12[0xb] = pcStack_1d0;
  ppcVar12[0xc] = pcVar10;
  ppcVar12[0xd] = pcVar11;
  ppcVar12[0xe] = (char *)ppppppuVar17;
  pcStack_e0 = (char *)0x0;
  ppppppuStack_d8 = (undefined8 ******)0x0;
  pcStack_e8 = (char *)0x0;
  ppcStack_c0 = ppcVar12;
  func_0x000107c339ac(uStack_1c8);
  func_0x00010882fc6c();
  func_0x00010882eb54();
  func_0x000108828a34(&ppppuStack_148);
  func_0x000107c280f8(&pcStack_168);
  pppppuVar31 = &ppppuStack_1c0;
  FUN_108828b34();
  func_0x000107c33a40();
  func_0x00010882f144();
  func_0x000107c337a8(uStack_70);
  if ((bool)in_ZR) {
    return pppppuVar31;
  }
  ___stack_chk_fail();
  func_0x00010882eb54();
  func_0x000108828a34(&ppppuStack_148);
  func_0x000107c280f8(&pcStack_168);
  ppppuVar29 = &ppppuStack_1c0;
  FUN_108828b34();
  func_0x000107c33a40();
  func_0x00010882f144();
  func_0x00010882edf0();
  func_0x00010882fac4();
  func_0x000107c3378c();
  func_0x000107c33978();
  pppuVar25 = ppppuVar29[2];
  func_0x00010882efb8();
  func_0x000107c29cfc();
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uVar21);
  func_0x000107c279d4(ppppppuStack_188 + 3,uVar24);
  pcStack_168 = "queryFeedAutoPaginated";
  func_0x00010882e60c();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_01)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x000107c339cc();
  func_0x000107c337bc();
  func_0x00010882ee48();
  func_0x00010882e6c8();
  FUN_108828c2c();
  func_0x00010882de84(pppppuVar31 + 7);
  ppppppuStack_d8 = (undefined8 ******)FUN_108828b78;
  ppuStack_d0 = &PTR_FUN_110a78000;
  func_0x000107c339b8();
  func_0x00010882efe0();
  FUN_108828c2c();
  func_0x00010882de30();
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x000108828b54(&pcStack_160);
  func_0x000107c3394c();
  pppppuVar13 = &ppppuStack_1d8;
  FUN_108828c5c(pppppuVar13);
  func_0x000107c33948();
  func_0x000107c33784();
  if ((bool)in_ZR) {
    return pppppuVar13;
  }
  ___stack_chk_fail();
  func_0x00010882e104();
  func_0x000108828b54(&pcStack_160);
  func_0x000107c3394c();
  ppppuVar29 = &ppppuStack_1d8;
  FUN_108828c5c();
  func_0x000107c33948();
  func_0x00010882edf0();
  func_0x000107c33bfc();
  func_0x000107c3378c();
  func_0x00010882eda8();
  if (extraout_x8_02 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882eb94();
  func_0x00010882ed88();
  func_0x00010882eca4();
  if (extraout_x8_03 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_02 != 0);
  }
  ppppppuStack_158 = (undefined8 ******)&UNK_10f4bcdeb;
  func_0x00010882ebcc();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_04)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_108828d50();
  func_0x00010882e15c();
  ppuStack_c8 = (undefined **)FUN_108828ca0;
  ppcStack_c0 = &PTR_FUN_110a78030;
  func_0x000107c339b8();
  func_0x00010882f2a0();
  FUN_108828d50();
  func_0x00010882e080();
  func_0x00010882df0c(pcStack_f0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x000108828c7c(&puStack_150);
  func_0x00010882ee40();
  FUN_108828d78(&ppppuStack_1d8);
  func_0x000107c33948();
  pppppuVar13 = &ppppuStack_180;
  func_0x000108625d80(pppppuVar13);
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x000108828c7c(&puStack_150);
    func_0x00010882ee40();
    FUN_108828d78(&ppppuStack_1d8);
    func_0x000107c33948();
    ppppuVar30 = &ppppuStack_180;
    func_0x000108625d80();
    func_0x00010882edf0();
    func_0x000107c33bfc();
    func_0x000107c3378c();
    func_0x00010882eda8();
    if (extraout_x8_05 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_03 != 0);
    }
    func_0x00010882ebd8();
    func_0x00010882eb94();
    func_0x00010882f2ec();
    func_0x000107c27994();
    func_0x00010882eca4();
    if (extraout_x8_06 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_04 != 0);
    }
    ppppppuStack_158 = (undefined8 ******)&UNK_10f4bce0f;
    func_0x00010882ebcc();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_07)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    ppppuVar28 = pppppuVar31[5];
    func_0x00010882e9f0();
    FUN_108828e70();
    func_0x00010882e15c();
    ppuStack_c8 = (undefined **)FUN_108828dc0;
    ppcStack_c0 = &PTR_FUN_110a78048;
    func_0x000107c339b8();
    func_0x00010882f2a0();
    FUN_108828e70();
    func_0x00010882e080();
    func_0x00010882df0c(pcStack_f0);
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x000108828d9c(&puStack_150);
    func_0x00010882ee40();
    pppppuVar13 = &ppppuStack_1d8;
    FUN_108828e98(pppppuVar13);
    func_0x000107c33948();
    func_0x00010882f144();
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108828d9c(&puStack_150);
      func_0x00010882ee40();
      FUN_108828e98(&ppppuStack_1d8);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x00010882edf0();
      pppppuVar13 = appppuStack_3b0;
      ppppppuStack_220 = ppppppuVar17;
      ppppppuStack_210 = ppppppuStack_188;
      pcStack_1e8 = FUN_108827404;
      ppcStack_218 = &pcStack_160;
      ppppuStack_208 = ppppuVar28;
      ppppuStack_200 = ppppuVar29;
      pppppuStack_1f8 = pppppuVar31;
      pppuStack_1f0 = (undefined8 ***)&stack0xffffffffffffffd0;
      func_0x000107c3378c();
      pppuVar1 = *ppppuVar30;
      pppuVar2 = ppppuVar30[1];
      pppuStack_350 = pppuVar1;
      pppuStack_348 = pppuVar2;
      if (pppuVar2 != (undefined8 ***)0x0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_05 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882fbf8();
      pppuStack_3a0 = pppuVar1;
      pppuStack_398 = pppuVar2;
      if (pppuVar2 != (undefined8 ***)0x0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_06 != 0);
      }
      func_0x000107c279a0(auStack_390,pppuVar25);
      pcStack_320 = "onFeedExited";
      puVar14 = auStack_370;
      func_0x00010882f098();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_08)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f090();
      func_0x00010882e42c();
      func_0x00010882eef4();
      ppppuVar29 = pppppuVar31[5];
      func_0x00010882ea30();
      FUN_108828f94();
      func_0x00010882f0bc();
      func_0x000107c337a0();
      uStack_298 = uStack_338;
      uStack_2a0 = uStack_340;
      uStack_2b0 = extraout_x9;
      func_0x00010882e62c();
      pcStack_288 = FUN_108828edc;
      ppuStack_280 = &PTR_FUN_110a78060;
      func_0x000107c339e0();
      func_0x00010882f34c();
      FUN_108828f94();
      func_0x00010882e13c();
      func_0x00010882df40(uStack_2b0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x000108828eb8(auStack_318);
      func_0x00010882ee40();
      FUN_108828fd4(appppuStack_3b0);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x000107c33784();
      if ((bool)in_ZR) {
        return pppppuVar13;
      }
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108828eb8(auStack_318);
      func_0x00010882ee40();
      FUN_108828fd4(appppuStack_3b0);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x00010882edf0();
      pcStack_400 = pcStack_190;
      pcStack_3f8 = pcVar9;
      pppppppuStack_3f0 = (undefined8 *******)ppppppuVar17;
      pppppppuStack_3e0 = (undefined8 *******)ppppppuStack_188;
      pcStack_3b8 = FUN_108827598;
      pcStack_3e8 = (code *)auStack_318;
      ppppuStack_3d8 = ppppuVar29;
      pppuStack_3d0 = pppuVar25;
      pppppuStack_3c8 = pppppuVar31;
      pppppuStack_3c0 = (undefined8 *****)&pppuStack_1f0;
      func_0x000107c33a68();
      func_0x00010882e2d0();
      ppppuVar30 = (undefined8 ****)*puVar14;
      lVar3 = puVar14[1];
      ppppuStack_530 = ppppuVar30;
      lStack_528 = lVar3;
      if (lVar3 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_07 != 0);
      }
      func_0x00010882eee8();
      func_0x00010882efb8();
      func_0x000107c29cfc();
      ppppuStack_588 = ppppuVar30;
      lStack_580 = lVar3;
      if (lVar3 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_08 != 0);
      }
      uStack_578 = SUB81(ppppuVar29,0);
      func_0x000107c279a0(&pppppuStack_570,pppuVar25);
      pcStack_508 = "onFeedEntered";
      func_0x000107c29bbc(&ppuStack_550,&pcStack_508);
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_09)();
      func_0x00010882e2e8();
      func_0x00010882e728();
      func_0x000107c3396c();
      func_0x00010882f9d4();
      func_0x00010882ed04();
      func_0x00010882f3dc();
      func_0x00010882f698();
      FUN_1088290dc();
      uStack_4b8 = 0;
      uStack_4a8 = 1;
      ppuStack_498 = ppuStack_548;
      ppuStack_4a0 = ppuStack_550;
      pppuStack_4b0 = pppuVar25;
      func_0x00010882eee8(pppppuVar31 + 7);
      ppuStack_478 = ppuStack_518;
      ppuStack_480 = ppuStack_520;
      ppuStack_470 = ppuStack_510;
      ppuStack_490 = extraout_x9_00;
      ppuStack_488 = extraout_x8_10;
      func_0x000107c33b64();
      pcStack_468 = FUN_108829020;
      ppuStack_460 = &PTR_FUN_110a78078;
      func_0x000107c33a48();
      func_0x00010882ff48();
      FUN_1088290dc();
      pppppuVar31 = ppppppuStack_188[9];
      pppuVar25[10] = ppppppuStack_188[10];
      pppuVar25[9] = pppppuVar31;
      pppuVar25[0xb] = ppppppuStack_188[0xb];
      pppuVar25[0xd] = ppuStack_498;
      pppuVar25[0xc] = ppuStack_4a0;
      pppuVar25[0xe] = ppuStack_490;
      ppppppuStack_188[0xd] = (undefined8 *****)0x0;
      ppppppuStack_188[0xe] = (undefined8 *****)0x0;
      ppppppuStack_188[0xc] = (undefined8 *****)0x0;
      pppuVar25[0x10] = ppuStack_480;
      pppuVar25[0xf] = ppuStack_488;
      pppuVar25[0x12] = ppuStack_470;
      pppuVar25[0x11] = ppuStack_478;
      ppppppuStack_188[0x11] = (undefined8 *****)0x0;
      ppppppuStack_188[0x12] = (undefined8 *****)0x0;
      ppppppuStack_188[0x10] = (undefined8 *****)0x0;
      func_0x00010882e960();
      func_0x00010882e828();
      func_0x00010882e4b4();
      func_0x000108828ffc(auStack_500);
      func_0x000107c33a4c();
      FUN_108829124(apppppuStack_598);
      func_0x00010882ee74();
      pppppuVar31 = &ppppuStack_530;
      func_0x000104be3970(pppppuVar31);
      func_0x00010882e28c();
      if ((bool)in_ZR) {
        return pppppuVar31;
      }
      ___stack_chk_fail();
      func_0x00010882e2fc();
      func_0x000108828ffc(auStack_500);
      func_0x000107c33a4c();
      FUN_108829124(apppppuStack_598);
      func_0x00010882ee74();
      ppppuVar29 = &ppppuStack_530;
      func_0x000104be3970();
      func_0x00010882edf0();
      pcVar22 = FUN_1088277a4;
      func_0x000107c33b24();
      pppppppuStack_430 = (undefined8 *******)&pppppuStack_3c0;
      pcStack_428 = pcVar22;
      func_0x000107c337b0();
      ppuStack_490 = (undefined8 **)extraout_x8_11;
      func_0x000107c33b9c();
      func_0x000107c29cfc(apppppuStack_598,ppppuVar29[1],ppppuVar29[2]);
      puStack_4f8 = &UNK_10f4bce23;
      func_0x000107c338f0();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_12)();
      func_0x000107c337f8();
      func_0x000107c338e4();
      func_0x000107c3396c();
      func_0x000107c33a9c();
      func_0x000107c33814();
      func_0x00010882f02c();
      func_0x000107c33794();
      pcStack_4f0 = FUN_10882916c;
      ppuStack_4e8 = &PTR_FUN_110a78090;
      func_0x000107c33a64();
      func_0x000107c33780();
      func_0x000107c338f4();
      func_0x000107c337b8();
      pppppuVar31 = &pppppuStack_570;
      func_0x00010882914c();
      func_0x000107c33a04();
      func_0x00010882f0f8();
      func_0x000107c33a50();
      func_0x000107c337a8(ppuStack_490);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107c337b8();
        pppppuVar13 = &pppppuStack_570;
        func_0x00010882914c();
        func_0x000107c33a04();
        func_0x00010882f0f8();
        func_0x000107c33a50();
        func_0x00010882edf0();
        pcVar22 = FUN_1088278b4;
        func_0x000107c33b24();
        pppppppuStack_430 = &pppppppuStack_430;
        pcStack_428 = pcVar22;
        func_0x000107c337b0();
        ppuStack_490 = (undefined8 **)extraout_x8_13;
        func_0x000107c33b9c();
        pppppuVar15 = apppppuStack_598;
        func_0x000107c29cfc(pppppuVar15,pppppuVar13[1],pppppuVar13[2]);
        puStack_4f8 = &UNK_10f4bce35;
        func_0x000107c338f0();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_14)();
        func_0x000107c337f8();
        func_0x000107c338e4();
        func_0x000107c3396c();
        func_0x000107c33a9c();
        func_0x000107c33814();
        pppppuVar13 = pppppuVar31 + 7;
        func_0x00010882f02c();
        func_0x000107c33794();
        pcStack_4f0 = FUN_108829240;
        ppuStack_4e8 = &PTR_FUN_110a780a8;
        func_0x000107c33a64();
        func_0x000107c33780();
        func_0x000107c338f4();
        func_0x000107c337b8();
        pppppuVar31 = &pppppuStack_570;
        FUN_108829220();
        func_0x000107c33a04();
        func_0x00010882f0f8();
        func_0x000107c33a50();
        func_0x000107c337a8(ppuStack_490);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107c337b8();
          FUN_108829220(&pppppuStack_570);
          func_0x000107c33a04();
          func_0x00010882f0f8();
          func_0x000107c33a50();
          func_0x00010882edf0();
          pcVar22 = FUN_1088279c4;
          func_0x00010882ff54();
          pppppppuStack_3e0 = &pppppppuStack_430;
          ppppuStack_3d8 = (undefined8 ****)pcVar22;
          func_0x000107c337b0();
          func_0x00010882fa64();
          if (pppuVar25 != (undefined8 ***)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_09 != 0);
          }
          func_0x000107c33ae0();
          ppppuVar29 = pppppuVar31[2];
          func_0x00010882f63c();
          pppppuStack_570 = pppppuVar15;
          pppuStack_568 = pppuVar25;
          if (pppuVar25 != (undefined8 ***)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_10 != 0);
          }
          ppuStack_518 = (undefined8 **)&UNK_10f4bce52;
          func_0x00010882f018(auStack_558);
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_15)();
          func_0x000107c337e4();
          func_0x000107c338d4();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e78c();
          ppuStack_4a0 = (undefined8 **)FUN_108829314;
          ppuStack_498 = (undefined8 **)&PTR_FUN_110a780c0;
          func_0x000107c33a44();
          func_0x00010882e8dc();
          func_0x000107c338ec();
          func_0x00010882ea00();
          FUN_1088292f0(&ppuStack_510);
          func_0x00010882ee40();
          FUN_1088293cc(&lStack_580);
          func_0x000107c33a40();
          pppppuVar15 = appppuStack_540;
          func_0x000108625da4();
          func_0x000107c337a8(uStack_440);
          if ((bool)in_ZR) {
            return pppppuVar15;
          }
          ___stack_chk_fail();
          func_0x00010882ea00();
          FUN_1088292f0(&ppuStack_510);
          func_0x00010882ee40();
          FUN_1088293cc(&lStack_580);
          func_0x000107c33a40();
          func_0x000108625da4(appppuStack_540);
          func_0x00010882edf0();
          pcVar22 = FUN_108827b0c;
          func_0x000107c33bfc();
          pppppppuStack_3f0 = &pppppppuStack_3e0;
          pcStack_3e8 = pcVar22;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_16 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_11 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_17 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_12 != 0);
          }
          ppuStack_518 = (undefined8 **)&UNK_10f4bce6d;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_18)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_1088294c0();
          func_0x00010882e15c();
          ppuStack_488 = (undefined8 **)FUN_108829410;
          ppuStack_480 = (undefined8 **)&PTR_FUN_110a780d8;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_1088294c0();
          func_0x00010882e080();
          func_0x00010882df0c(pppuStack_4b0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x0001088293ec(&ppuStack_510);
          func_0x00010882ee40();
          pppppuVar16 = apppppuStack_598;
          FUN_1088294e8(pppppuVar16);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar16;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x0001088293ec(&ppuStack_510);
          func_0x00010882ee40();
          ppppppuVar17 = apppppuStack_598;
          FUN_1088294e8();
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x00010882edf0();
          pcVar22 = FUN_108827c6c;
          func_0x000107c33bfc();
          pppppppuStack_3f0 = &pppppppuStack_3f0;
          pcStack_3e8 = pcVar22;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_19 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_13 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_20 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_14 != 0);
          }
          ppuStack_518 = (undefined8 **)&UNK_10f4bce85;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_21)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_1088295dc();
          func_0x00010882e15c();
          ppuStack_488 = (undefined8 **)FUN_10882952c;
          ppuStack_480 = (undefined8 **)&PTR_FUN_110a780f0;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_1088295dc();
          func_0x00010882e080();
          func_0x00010882df0c(pppuStack_4b0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829508(&ppuStack_510);
          func_0x00010882ee40();
          pppppuVar16 = apppppuStack_598;
          FUN_108829604(pppppuVar16);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar16;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829508(&ppuStack_510);
          func_0x00010882ee40();
          FUN_108829604(apppppuStack_598);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x00010882edf0();
          pcVar22 = FUN_108827dcc;
          func_0x000107c33bfc();
          pppppppuStack_3f0 = &pppppppuStack_3f0;
          pcStack_3e8 = pcVar22;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_22 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_15 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882f2ec();
          func_0x000107c27994();
          func_0x00010882eca4();
          uVar21 = SUB84(ppppuVar29,0);
          if (extraout_x8_23 != 0) {
            do {
              func_0x000107c3383c();
              uVar21 = SUB84(ppppuVar29,0);
            } while (extraout_w10_16 != 0);
          }
          ppuStack_518 = (undefined8 **)&UNK_10f4bce90;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_24)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          ppppuVar29 = pppppuVar15[5];
          func_0x00010882e9f0();
          FUN_1088296f8();
          func_0x00010882e15c();
          ppuStack_488 = (undefined8 **)FUN_108829648;
          ppuStack_480 = (undefined8 **)&PTR_FUN_110a78108;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_1088296f8();
          func_0x00010882e080();
          func_0x00010882df0c(pppuStack_4b0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829624(&ppuStack_510);
          func_0x00010882ee40();
          FUN_108829720(apppppuStack_598);
          func_0x000107c33948();
          pppppuVar16 = appppuStack_540;
          func_0x000108625dc8(pppppuVar16);
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar16;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829624(&ppuStack_510);
          func_0x00010882ee40();
          FUN_108829720(apppppuStack_598);
          func_0x000107c33948();
          func_0x000108625dc8(appppuStack_540);
          func_0x00010882edf0();
          pppppppuVar18 = &pppppppuStack_770;
          uStack_5e0 = 1;
          pcStack_5a8 = FUN_108827f38;
          pppppuStack_5d8 = pppppuVar31 + 7;
          pppppuStack_5d0 = pppppuVar13;
          ppppuStack_5c8 = ppppuVar29;
          pppppppuStack_5c0 = (undefined8 *******)ppppppuVar17;
          pppppuStack_5b8 = pppppuVar15;
          pppppppuStack_5b0 = &pppppppuStack_3f0;
          func_0x000107c3378c();
          lStack_708 = *(long *)(pcVar22 + 8);
          ppppuStack_710 = *(undefined8 *****)pcVar22;
          if (*(long *)(pcVar22 + 8) != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_17 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882fbf8();
          func_0x00010882e694();
          ppppuStack_738 = (undefined8 ****)lStack_708;
          ppppuStack_740 = ppppuStack_710;
          uStack_748 = uVar21;
          if (lStack_708 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_18 != 0);
          }
          puStack_6e0 = &UNK_10f4b12f2;
          func_0x00010882f098(auStack_730);
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_25)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f090();
          func_0x00010882e42c();
          func_0x00010882eef4();
          func_0x00010882ea30();
          FUN_108829820();
          func_0x00010882f0bc();
          func_0x000107c337a0();
          pcStack_658 = (code *)uStack_6f8;
          uStack_660 = uStack_700;
          pcStack_670 = (code *)extraout_x9_01;
          func_0x00010882e62c();
          pcStack_648 = FUN_108829768;
          ppuStack_640 = &PTR_FUN_110a78120;
          func_0x000107c339e0();
          func_0x00010882f34c();
          FUN_108829820();
          func_0x00010882e13c();
          func_0x00010882df40(pcStack_670);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829744(auStack_6d8);
          func_0x00010882ee40();
          FUN_10882985c(&pppppppuStack_770);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppppuVar18;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829744(auStack_6d8);
          func_0x00010882ee40();
          FUN_10882985c(&pppppppuStack_770);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x00010882edf0();
          pcVar22 = FUN_1088280d4;
          func_0x000107c33bfc();
          pppppppuStack_5c0 = &pppppppuStack_5b0;
          pppppuStack_5b8 = (undefined8 *****)pcVar22;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_26 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_19 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_27 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_20 != 0);
          }
          puStack_6e8 = &UNK_10f4bcea8;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_28)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_108829950();
          func_0x00010882e15c();
          pcStack_658 = FUN_1088298a0;
          ppuStack_650 = &PTR_FUN_110a78138;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_108829950();
          func_0x00010882e080();
          func_0x00010882df0c(uStack_680);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x00010882987c(&puStack_6e0);
          func_0x00010882ee40();
          pppppuVar31 = appppuStack_768;
          FUN_108829978(pppppuVar31);
          func_0x000107c33948();
          func_0x00010882f8b4();
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar31;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x00010882987c(&puStack_6e0);
          func_0x00010882ee40();
          ppppuVar29 = appppuStack_768;
          FUN_108829978();
          func_0x000107c33948();
          func_0x00010882f8b4();
          func_0x00010882edf0();
          pcVar22 = FUN_108828234;
          func_0x000107c33bfc();
          pppppppuStack_5c0 = &pppppppuStack_5c0;
          pppppuStack_5b8 = (undefined8 *****)pcVar22;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_29 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_21 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_30 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_22 != 0);
          }
          puStack_6e8 = &UNK_10f4bceb9;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_31)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_108829a70();
          func_0x00010882e15c();
          pcStack_658 = FUN_1088299c0;
          ppuStack_650 = &PTR_FUN_110a78150;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_108829a70();
          func_0x00010882e080();
          func_0x00010882df0c(uStack_680);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x00010882999c(&puStack_6e0);
          func_0x00010882ee40();
          FUN_108829a98(appppuStack_768);
          func_0x000107c33948();
          pppppuVar31 = &ppppuStack_710;
          func_0x000108625e10(pppppuVar31);
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar31;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x00010882999c(&puStack_6e0);
          func_0x00010882ee40();
          FUN_108829a98(appppuStack_768);
          func_0x000107c33948();
          func_0x000108625e10(&ppppuStack_710);
          func_0x00010882edf0();
          pcVar22 = FUN_10882839c;
          func_0x000107c33bfc();
          pppppppuStack_5c0 = &pppppppuStack_5c0;
          pppppuStack_5b8 = (undefined8 *****)pcVar22;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_32 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_23 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_33 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_24 != 0);
          }
          puStack_6e8 = &UNK_10f4bcee0;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_34)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          ppppuVar30 = pppppuVar15[5];
          func_0x00010882e9f0();
          FUN_108829b90();
          func_0x00010882e15c();
          pcStack_658 = FUN_108829ae0;
          ppuStack_650 = &PTR_FUN_110a78168;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_108829b90();
          func_0x00010882e080();
          func_0x00010882df0c(uStack_680);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829abc(&puStack_6e0);
          func_0x00010882ee40();
          FUN_108829bb8(appppuStack_768);
          func_0x000107c33948();
          pppppuVar31 = &ppppuStack_710;
          func_0x000108625e34(pppppuVar31);
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar31;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829abc(&puStack_6e0);
          func_0x00010882ee40();
          FUN_108829bb8(appppuStack_768);
          func_0x000107c33948();
          func_0x000108625e34(&ppppuStack_710);
          func_0x00010882edf0();
          pcVar26 = FUN_108828504;
          func_0x00010882ff54();
          pppppppuStack_5b0 = &pppppppuStack_5c0;
          pcStack_5a8 = pcVar26;
          func_0x000107c337b0();
          func_0x00010882fa64();
          if (ppppuVar29 != (undefined8 ****)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_25 != 0);
          }
          func_0x000107c33ae0();
          ppppuVar28 = pppppuVar15[2];
          func_0x00010882f63c();
          uVar27 = (undefined1)param_5;
          uVar23 = SUB81(ppppuVar28,0);
          ppppuStack_740 = ppppuVar30;
          ppppuStack_738 = ppppuVar29;
          if (ppppuVar29 != (undefined8 ****)0x0) {
            do {
              func_0x000107c3383c();
              uVar27 = (undefined1)param_5;
              uVar23 = SUB81(ppppuVar28,0);
            } while (extraout_w10_26 != 0);
          }
          puStack_6e8 = &UNK_10f4bcef9;
          puVar19 = auStack_728;
          func_0x00010882f018();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_35)();
          func_0x000107c337e4();
          func_0x000107c338d4();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e78c();
          pcStack_670 = FUN_108829c00;
          ppuStack_668 = &PTR_FUN_110a78180;
          func_0x000107c33a44();
          func_0x00010882e8dc();
          func_0x000107c338ec();
          func_0x00010882ea00();
          func_0x000108829bdc(&puStack_6e0);
          func_0x00010882ee40();
          pppppuVar31 = &ppppuStack_750;
          FUN_108829cb8();
          func_0x000107c33a40();
          func_0x00010882f8b4();
          func_0x000107c337a8(uStack_610);
          if ((bool)in_ZR) {
            return pppppuVar31;
          }
          ___stack_chk_fail();
          func_0x00010882ea00();
          func_0x000108829bdc(&puStack_6e0);
          func_0x00010882ee40();
          FUN_108829cb8(&ppppuStack_750);
          func_0x000107c33a40();
          func_0x00010882f8b4();
          func_0x00010882edf0();
          func_0x000107c33c58(FUN_108828644);
          apppppppuStack_720[0] = &pppppppuStack_5b0;
          func_0x000107c337b0();
          ppppuVar29 = (undefined8 ****)*param_8;
          ppppuVar30 = (undefined8 ****)param_8[1];
          ppppuStack_8b0 = ppppuVar29;
          ppppuStack_8a8 = ppppuVar30;
          uStack_780 = extraout_x8_36;
          if (ppppuVar30 != (undefined8 ****)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_27 != 0);
          }
          lStack_8c8 = 0;
          lStack_8c0 = 0;
          lStack_8b8 = 0;
          func_0x000107c29cfc(&lStack_918,pppppuVar31[1],pppppuVar31[2]);
          plStack_900 = (long *)CONCAT71(plStack_900._1_7_,uVar23);
          uStack_8e8 = (undefined1)param_6;
          uStack_8e7 = (undefined7)((ulong)param_6 >> 8);
          uStack_8e0 = (undefined1)param_7;
          puStack_908 = puVar19;
          pcStack_8f8 = pcVar22;
          uStack_8f0 = uVar27;
          ppppuStack_8d8 = ppppuVar29;
          ppppuStack_8d0 = ppppuVar30;
          if (ppppuVar30 != (undefined8 ****)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_28 != 0);
          }
          puStack_888 = &UNK_10f4bcf15;
          plVar20 = &lStack_8c8;
          func_0x00010882f338();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_37)();
          func_0x000107c337f8();
          func_0x000107c33960();
          func_0x000107c3396c();
          func_0x000107c33a9c();
          func_0x00010882e55c();
          func_0x00010882f02c();
          lVar7 = lStack_8b8;
          lVar6 = lStack_8c0;
          lVar5 = lStack_8c8;
          ppppuVar30 = ppppuStack_8d0;
          ppppuVar29 = ppppuStack_8d8;
          lVar4 = lStack_910;
          lVar3 = lStack_918;
          ppppuVar28 = pppppuVar31[5];
          lStack_880 = lStack_918;
          lStack_878 = lStack_910;
          lStack_910 = 0;
          lStack_918 = 0;
          lStack_868 = (long)plStack_900;
          puStack_870 = puStack_908;
          uStack_858 = uStack_8f0;
          pcStack_860 = pcStack_8f8;
          uStack_84f = CONCAT17(uStack_8e0,uStack_8e7);
          uStack_850 = uStack_8e8;
          ppppuStack_840 = ppppuStack_8d8;
          ppppuStack_838 = ppppuStack_8d0;
          ppppuStack_8d8 = (undefined8 ****)0x0;
          ppppuStack_8d0 = (undefined8 ****)0x0;
          pcStack_830 = (code *)0x0;
          uStack_820 = 1;
          lStack_818 = lStack_8c8;
          lStack_810 = lStack_8c0;
          lStack_8c8 = 0;
          lStack_8c0 = 0;
          lStack_8b8 = 0;
          lStack_808 = lVar7;
          lStack_7f8 = lStack_8a0;
          lStack_7f0 = lStack_898;
          lStack_7e8 = lStack_890;
          ppuStack_828 = (undefined **)param_7;
          pppppuStack_800 = pppppuVar31 + 7;
          func_0x00010882f710();
          pcStack_7e0 = FUN_108829cfc;
          ppuStack_7d8 = &PTR_FUN_110a78198;
          func_0x000107c33a2c();
          *plVar20 = lVar3;
          plVar20[1] = lVar4;
          pcVar22 = pcStack_8f8;
          puVar19 = puStack_908;
          lStack_880 = 0;
          lStack_878 = 0;
          lVar3 = CONCAT71(uStack_8ef,uStack_8f0);
          plVar20[3] = (long)plStack_900;
          plVar20[2] = (long)puVar19;
          plVar20[5] = lVar3;
          plVar20[4] = (long)pcVar22;
          uVar24 = CONCAT17(uStack_8e8,uStack_8ef);
          *(ulong *)((long)plVar20 + 0x31) = CONCAT17(uStack_8e0,uStack_8e7);
          *(undefined8 *)((long)plVar20 + 0x29) = uVar24;
          plVar20[8] = (long)ppppuVar29;
          plVar20[9] = (long)ppppuVar30;
          pcVar22 = pcStack_830;
          ppppuStack_840 = (undefined8 ****)0x0;
          ppppuStack_838 = (undefined8 ****)0x0;
          lVar3 = CONCAT71(uStack_81f,uStack_820);
          plVar20[0xb] = (long)ppuStack_828;
          plVar20[10] = (long)pcVar22;
          plVar20[0xc] = lVar3;
          plVar20[0xd] = lVar5;
          plVar20[0xe] = lVar6;
          plVar20[0xf] = lVar7;
          lStack_818 = 0;
          lStack_810 = 0;
          lStack_808 = 0;
          plVar20[0x10] = (long)(pppppuVar31 + 7);
          plVar20[0x11] = lStack_8a0;
          plVar20[0x12] = lStack_898;
          plVar20[0x13] = lStack_890;
          lStack_7f0 = 0;
          lStack_7e8 = 0;
          lStack_7f8 = 0;
          plStack_7d0 = plVar20;
          func_0x000107c339ac(ppppuVar28);
          func_0x00010882fc6c();
          func_0x00010882eb54();
          func_0x000108829cd8(&lStack_880);
          func_0x000107c33a04();
          FUN_108829dc0(&lStack_918);
          func_0x000107c280f8(&lStack_8c8);
          pppppuVar31 = &ppppuStack_8b0;
          func_0x000108625dec();
          func_0x000107c337a8(uStack_780);
          if ((bool)in_ZR) {
            return pppppuVar31;
          }
          ___stack_chk_fail();
          func_0x00010882eb54();
          func_0x000108829cd8(&lStack_880);
          func_0x000107c33a04();
          FUN_108829dc0(&lStack_918);
          func_0x000107c280f8(&lStack_8c8);
          func_0x000108625dec(&ppppuStack_8b0);
          func_0x00010882edf0();
          pcVar22 = FUN_1088288b4;
          func_0x00010882ff54();
          pppppppuStack_770 = apppppppuStack_720;
          appppuStack_768[0] = (undefined8 ****)pcVar22;
          func_0x000107c337b0();
          func_0x00010882fa64();
          if (lVar5 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_29 != 0);
          }
          func_0x000107c33ae0();
          func_0x00010882f63c();
          pcStack_8f8 = (code *)lVar5;
          plStack_900 = &lStack_880;
          if (lVar5 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_30 != 0);
          }
          ppppuStack_8a8 = (undefined8 ****)&UNK_10f4bcf38;
          func_0x00010882f018(&uStack_8e8);
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_38)();
          func_0x000107c337e4();
          func_0x000107c338d4();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e78c();
          pcStack_830 = FUN_108829e04;
          ppuStack_828 = &PTR_FUN_110a781b0;
          func_0x000107c33a44();
          func_0x00010882e8dc();
          func_0x000107c338ec();
          func_0x00010882ea00();
          func_0x000108829de0(&lStack_8a0);
          func_0x00010882ee40();
          FUN_108829ebc(&lStack_910);
          func_0x000107c33a40();
          pppppuVar31 = &ppppuStack_8d0;
          func_0x000108625e58();
          func_0x000107c337a8(plStack_7d0);
          if ((bool)in_ZR) {
            return pppppuVar31;
          }
          ___stack_chk_fail();
          func_0x00010882ea00();
          func_0x000108829de0(&lStack_8a0);
          func_0x00010882ee40();
          FUN_108829ebc(&lStack_910);
          func_0x000107c33a40();
          pppppuVar31 = &ppppuStack_8d0;
          func_0x000108625e58(pppppuVar31);
          func_0x00010882edf0();
          func_0x00010882eb68(&PTR_DAT_110a77e80);
          func_0x000107c29344(pppppuVar31 + 3);
          func_0x000107c29cf4(lVar5);
          return pppppuVar31;
        }
      }
      return pppppuVar31;
    }
  }
  return pppppuVar13;
}



/* Entry: 108826ff0; end: 108827137;  */

undefined8 *****
FUN_108826ff0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long *param_8)

{
  long lVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 in_ZR;
  undefined8 *****pppppuVar7;
  undefined8 *puVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  long lVar18;
  code *pcVar19;
  undefined8 ****ppppuVar20;
  code *pcVar21;
  undefined1 uVar22;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  undefined8 extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  undefined8 extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  code *extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  code *extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  code *extraout_x8_22;
  code *extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  code *extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  code *extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  code *extraout_x8_32;
  code *extraout_x8_33;
  undefined8 extraout_x8_34;
  code *extraout_x8_35;
  code *extraout_x8_36;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  long unaff_x19;
  undefined8 uVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuVar25;
  long unaff_x22;
  undefined4 in_stack_00000018;
  char *in_stack_00000078;
  undefined *in_stack_00000088;
  undefined8 in_stack_000000f0;
  code *in_stack_00000108;
  undefined **in_stack_00000110;
  code *in_stack_00000118;
  undefined **in_stack_00000120;
  undefined8 in_stack_000001a0;
  undefined8 *in_stack_000001b0;
  code *in_stack_000001b8;
  long lStack_738;
  long lStack_730;
  undefined1 *puStack_728;
  long *plStack_720;
  code *pcStack_718;
  undefined1 uStack_710;
  undefined7 uStack_70f;
  undefined1 uStack_708;
  undefined7 uStack_707;
  undefined1 uStack_700;
  undefined8 ***pppuStack_6f8;
  undefined8 ***pppuStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  undefined8 ***pppuStack_6d0;
  undefined8 ***pppuStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  undefined *puStack_6a8;
  long lStack_6a0;
  long lStack_698;
  undefined1 *puStack_690;
  long lStack_688;
  code *pcStack_680;
  undefined1 uStack_678;
  undefined1 uStack_670;
  undefined8 uStack_66f;
  undefined8 ***pppuStack_660;
  undefined8 ***pppuStack_658;
  code *pcStack_650;
  undefined **ppuStack_648;
  undefined1 uStack_640;
  undefined7 uStack_63f;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  undefined8 ****ppppuStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  code *pcStack_600;
  undefined **ppuStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5a0;
  undefined8 ******ppppppuStack_590;
  undefined8 ***apppuStack_588 [3];
  undefined8 ***pppuStack_570;
  undefined4 uStack_568;
  undefined8 ***pppuStack_560;
  code ***pppcStack_558;
  undefined1 auStack_550 [8];
  undefined1 auStack_548 [8];
  undefined8 ******appppppuStack_540 [2];
  undefined8 ***pppuStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined1 auStack_4f8 [88];
  undefined8 uStack_4a0;
  code *pcStack_490;
  undefined **ppuStack_488;
  undefined8 uStack_480;
  code *pcStack_478;
  undefined **ppuStack_470;
  code *pcStack_468;
  undefined **ppuStack_460;
  undefined8 uStack_430;
  undefined8 uStack_400;
  undefined8 ****ppppuStack_3f8;
  undefined8 ****ppppuStack_3f0;
  undefined8 ***pppuStack_3e8;
  undefined8 ******ppppppuStack_3e0;
  undefined8 ****ppppuStack_3d8;
  undefined8 ******ppppppuStack_3d0;
  code *pcStack_3c8;
  undefined8 ****appppuStack_3b8 [2];
  undefined8 ***pppuStack_3a8;
  long lStack_3a0;
  undefined1 uStack_398;
  undefined8 ****ppppuStack_390;
  long lStack_388;
  undefined1 auStack_378 [8];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 ***apppuStack_360 [2];
  undefined8 ***pppuStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  char *pcStack_328;
  undefined1 auStack_320 [8];
  undefined *puStack_318;
  code *pcStack_310;
  undefined **ppuStack_308;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined1 uStack_2c8;
  code *pcStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_260;
  undefined8 ******ppppppuStack_250;
  code *pcStack_248;
  undefined8 ****ppppuStack_1e0;
  code *pcStack_1d8;
  undefined8 ***apppuStack_1d0 [2];
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined1 auStack_1b0 [32];
  undefined8 auStack_190 [4];
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  char *pcStack_140;
  undefined1 auStack_138 [104];
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 **ppuStack_10;
  code *pcStack_8;
  
  func_0x00010882fac4();
  func_0x000107c3378c();
  func_0x000107c33978();
  lVar18 = *(long *)(param_1 + 0x10);
  func_0x00010882efb8();
  func_0x000107c29cfc();
  in_stack_00000018 = param_2;
  func_0x000107c279d4(unaff_x22 + 0x18,param_3);
  in_stack_00000078 = "queryFeedAutoPaginated";
  func_0x00010882e60c();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x000107c339cc();
  func_0x000107c337bc();
  func_0x00010882ee48();
  func_0x00010882e6c8();
  FUN_108828c2c();
  func_0x00010882de84(unaff_x19 + 0x38);
  in_stack_00000108 = FUN_108828b78;
  in_stack_00000110 = &PTR_FUN_110a78000;
  func_0x000107c339b8();
  func_0x00010882efe0();
  FUN_108828c2c();
  func_0x00010882de30();
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x000108828b54(&stack0x00000080);
  func_0x000107c3394c();
  pppppuVar7 = (undefined8 *****)&stack0x00000008;
  FUN_108828c5c(pppppuVar7);
  func_0x000107c33948();
  func_0x000107c33784();
  if ((bool)in_ZR) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  func_0x00010882e104();
  func_0x000108828b54(&stack0x00000080);
  func_0x000107c3394c();
  FUN_108828c5c();
  func_0x000107c33948();
  func_0x00010882edf0();
  pcVar21 = FUN_108827138;
  func_0x000107c33bfc();
  in_stack_000001b0 = &stack0x000001a0;
  in_stack_000001b8 = pcVar21;
  func_0x000107c3378c();
  func_0x00010882eda8();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882eb94();
  func_0x00010882ed88();
  func_0x00010882eca4();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000088 = &UNK_10f4bcdeb;
  func_0x00010882ebcc();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_02)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_108828d50();
  func_0x00010882e15c();
  in_stack_00000118 = FUN_108828ca0;
  in_stack_00000120 = &PTR_FUN_110a78030;
  func_0x000107c339b8();
  func_0x00010882f2a0();
  FUN_108828d50();
  func_0x00010882e080();
  func_0x00010882df0c(in_stack_000000f0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x000108828c7c(&stack0x00000090);
  func_0x00010882ee40();
  FUN_108828d78(&stack0x00000008);
  func_0x000107c33948();
  pppppuVar7 = (undefined8 *****)&stack0x00000060;
  func_0x000108625d80(pppppuVar7);
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x000108828c7c(&stack0x00000090);
    func_0x00010882ee40();
    FUN_108828d78(&stack0x00000008);
    func_0x000107c33948();
    puVar8 = (undefined8 *)&stack0x00000060;
    func_0x000108625d80();
    func_0x00010882edf0();
    pcVar21 = FUN_1088272a0;
    func_0x000107c33bfc();
    in_stack_000001b0 = &stack0x000001b0;
    in_stack_000001b8 = pcVar21;
    func_0x000107c3378c();
    func_0x00010882eda8();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010882ebd8();
    func_0x00010882eb94();
    func_0x00010882f2ec();
    func_0x000107c27994();
    func_0x00010882eca4();
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_02 != 0);
    }
    in_stack_00000088 = &UNK_10f4bce0f;
    func_0x00010882ebcc();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_05)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    func_0x00010882e9f0();
    FUN_108828e70();
    func_0x00010882e15c();
    in_stack_00000118 = FUN_108828dc0;
    in_stack_00000120 = &PTR_FUN_110a78048;
    func_0x000107c339b8();
    func_0x00010882f2a0();
    FUN_108828e70();
    func_0x00010882e080();
    func_0x00010882df0c(in_stack_000000f0);
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x000108828d9c(&stack0x00000090);
    func_0x00010882ee40();
    pppppuVar7 = (undefined8 *****)&stack0x00000008;
    FUN_108828e98(pppppuVar7);
    func_0x000107c33948();
    func_0x00010882f144();
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108828d9c(&stack0x00000090);
      func_0x00010882ee40();
      FUN_108828e98(&stack0x00000008);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x00010882edf0();
      pppppuVar7 = (undefined8 *****)apppuStack_1d0;
      pcStack_8 = FUN_108827404;
      ppuStack_10 = &stack0x000001b0;
      func_0x000107c3378c();
      uVar23 = *puVar8;
      lVar1 = puVar8[1];
      uStack_170 = uVar23;
      lStack_168 = lVar1;
      if (lVar1 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_03 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882fbf8();
      uStack_1c0 = uVar23;
      lStack_1b8 = lVar1;
      if (lVar1 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c279a0(auStack_1b0,lVar18);
      pcStack_140 = "onFeedExited";
      puVar8 = auStack_190;
      func_0x00010882f098();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_06)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f090();
      func_0x00010882e42c();
      func_0x00010882eef4();
      uVar23 = *(undefined8 *)(unaff_x19 + 0x28);
      func_0x00010882ea30();
      FUN_108828f94();
      func_0x00010882f0bc();
      func_0x000107c337a0();
      uStack_b8 = uStack_158;
      uStack_c0 = uStack_160;
      uStack_d0 = extraout_x9;
      func_0x00010882e62c();
      pcStack_a8 = FUN_108828edc;
      ppuStack_a0 = &PTR_FUN_110a78060;
      func_0x000107c339e0();
      func_0x00010882f34c();
      FUN_108828f94();
      func_0x00010882e13c();
      func_0x00010882df40(uStack_d0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x000108828eb8(auStack_138);
      func_0x00010882ee40();
      FUN_108828fd4(apppuStack_1d0);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x000107c33784();
      if ((bool)in_ZR) {
        return pppppuVar7;
      }
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108828eb8(auStack_138);
      func_0x00010882ee40();
      FUN_108828fd4(apppuStack_1d0);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x00010882edf0();
      pcStack_1d8 = FUN_108827598;
      ppppuStack_1e0 = (undefined8 ****)&ppuStack_10;
      func_0x000107c33a68();
      func_0x00010882e2d0();
      ppppuVar24 = (undefined8 ****)*puVar8;
      lVar1 = puVar8[1];
      pppuStack_350 = ppppuVar24;
      lStack_348 = lVar1;
      if (lVar1 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_05 != 0);
      }
      func_0x00010882eee8();
      func_0x00010882efb8();
      func_0x000107c29cfc();
      pppuStack_3a8 = ppppuVar24;
      lStack_3a0 = lVar1;
      if (lVar1 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_06 != 0);
      }
      uStack_398 = (undefined1)uVar23;
      func_0x000107c279a0(&ppppuStack_390,lVar18);
      pcStack_328 = "onFeedEntered";
      func_0x000107c29bbc(&uStack_370,&pcStack_328);
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_07)();
      func_0x00010882e2e8();
      func_0x00010882e728();
      func_0x000107c3396c();
      func_0x00010882f9d4();
      func_0x00010882ed04();
      func_0x00010882f3dc();
      func_0x00010882f698();
      FUN_1088290dc();
      uStack_2d8 = 0;
      uStack_2c8 = 1;
      ppuStack_2b8 = (undefined **)uStack_368;
      pcStack_2c0 = (code *)uStack_370;
      lStack_2d0 = lVar18;
      func_0x00010882eee8(unaff_x19 + 0x38);
      uStack_298 = puStack_338;
      ppuStack_2a0 = (undefined **)uStack_340;
      uStack_290 = uStack_330;
      uStack_2b0 = extraout_x9_00;
      pcStack_2a8 = (code *)extraout_x8_08;
      func_0x000107c33b64();
      pcStack_288 = FUN_108829020;
      ppuStack_280 = &PTR_FUN_110a78078;
      func_0x000107c33a48();
      func_0x00010882ff48();
      FUN_1088290dc();
      uVar23 = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(lVar18 + 0x50) = *(undefined8 *)(unaff_x22 + 0x50);
      *(undefined8 *)(lVar18 + 0x48) = uVar23;
      *(undefined8 *)(lVar18 + 0x58) = *(undefined8 *)(unaff_x22 + 0x58);
      *(undefined ***)(lVar18 + 0x68) = ppuStack_2b8;
      *(code **)(lVar18 + 0x60) = pcStack_2c0;
      *(undefined8 *)(lVar18 + 0x70) = uStack_2b0;
      *(undefined8 *)(unaff_x22 + 0x68) = 0;
      *(undefined8 *)(unaff_x22 + 0x70) = 0;
      *(undefined8 *)(unaff_x22 + 0x60) = 0;
      *(undefined ***)(lVar18 + 0x80) = ppuStack_2a0;
      *(code **)(lVar18 + 0x78) = pcStack_2a8;
      *(undefined8 *)(lVar18 + 0x90) = uStack_290;
      *(undefined8 *)(lVar18 + 0x88) = uStack_298;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x80) = 0;
      func_0x00010882e960();
      func_0x00010882e828();
      func_0x00010882e4b4();
      func_0x000108828ffc(auStack_320);
      func_0x000107c33a4c();
      FUN_108829124(appppuStack_3b8);
      func_0x00010882ee74();
      pppppuVar7 = (undefined8 *****)&pppuStack_350;
      func_0x000104be3970(pppppuVar7);
      func_0x00010882e28c();
      if ((bool)in_ZR) {
        return pppppuVar7;
      }
      ___stack_chk_fail();
      func_0x00010882e2fc();
      func_0x000108828ffc(auStack_320);
      func_0x000107c33a4c();
      FUN_108829124(appppuStack_3b8);
      func_0x00010882ee74();
      ppppuVar24 = &pppuStack_350;
      func_0x000104be3970();
      func_0x00010882edf0();
      pcVar21 = FUN_1088277a4;
      func_0x000107c33b24();
      ppppppuStack_250 = (undefined8 ******)&ppppuStack_1e0;
      pcStack_248 = pcVar21;
      func_0x000107c337b0();
      uStack_2b0 = extraout_x8_09;
      func_0x000107c33b9c();
      func_0x000107c29cfc(appppuStack_3b8,ppppuVar24[1],ppppuVar24[2]);
      puStack_318 = &UNK_10f4bce23;
      func_0x000107c338f0();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_10)();
      func_0x000107c337f8();
      func_0x000107c338e4();
      func_0x000107c3396c();
      func_0x000107c33a9c();
      func_0x000107c33814();
      func_0x00010882f02c();
      func_0x000107c33794();
      pcStack_310 = FUN_10882916c;
      ppuStack_308 = &PTR_FUN_110a78090;
      func_0x000107c33a64();
      func_0x000107c33780();
      func_0x000107c338f4();
      func_0x000107c337b8();
      pppppuVar7 = &ppppuStack_390;
      func_0x00010882914c();
      func_0x000107c33a04();
      func_0x00010882f0f8();
      func_0x000107c33a50();
      func_0x000107c337a8(uStack_2b0);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107c337b8();
        pppppuVar9 = &ppppuStack_390;
        func_0x00010882914c();
        func_0x000107c33a04();
        func_0x00010882f0f8();
        func_0x000107c33a50();
        func_0x00010882edf0();
        pcVar21 = FUN_1088278b4;
        func_0x000107c33b24();
        ppppppuStack_250 = &ppppppuStack_250;
        pcStack_248 = pcVar21;
        func_0x000107c337b0();
        uStack_2b0 = extraout_x8_11;
        func_0x000107c33b9c();
        pppppuVar10 = appppuStack_3b8;
        func_0x000107c29cfc(pppppuVar10,pppppuVar9[1],pppppuVar9[2]);
        puStack_318 = &UNK_10f4bce35;
        func_0x000107c338f0();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_12)();
        func_0x000107c337f8();
        func_0x000107c338e4();
        func_0x000107c3396c();
        func_0x000107c33a9c();
        func_0x000107c33814();
        pppppuVar9 = pppppuVar7 + 7;
        func_0x00010882f02c();
        func_0x000107c33794();
        pcStack_310 = FUN_108829240;
        ppuStack_308 = &PTR_FUN_110a780a8;
        func_0x000107c33a64();
        func_0x000107c33780();
        func_0x000107c338f4();
        func_0x000107c337b8();
        pppppuVar7 = &ppppuStack_390;
        FUN_108829220();
        func_0x000107c33a04();
        func_0x00010882f0f8();
        func_0x000107c33a50();
        func_0x000107c337a8(uStack_2b0);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107c337b8();
          FUN_108829220(&ppppuStack_390);
          func_0x000107c33a04();
          func_0x00010882f0f8();
          func_0x000107c33a50();
          func_0x00010882edf0();
          func_0x00010882ff54();
          func_0x000107c337b0();
          func_0x00010882fa64();
          if (lVar18 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_07 != 0);
          }
          func_0x000107c33ae0();
          ppppuVar24 = pppppuVar7[2];
          func_0x00010882f63c();
          ppppuStack_390 = pppppuVar10;
          lStack_388 = lVar18;
          if (lVar18 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_08 != 0);
          }
          puStack_338 = &UNK_10f4bce52;
          func_0x00010882f018(auStack_378);
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_13)();
          func_0x000107c337e4();
          func_0x000107c338d4();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e78c();
          pcStack_2c0 = FUN_108829314;
          ppuStack_2b8 = &PTR_FUN_110a780c0;
          func_0x000107c33a44();
          func_0x00010882e8dc();
          func_0x000107c338ec();
          func_0x00010882ea00();
          FUN_1088292f0(&uStack_330);
          func_0x00010882ee40();
          FUN_1088293cc(&lStack_3a0);
          func_0x000107c33a40();
          pppppuVar10 = (undefined8 *****)apppuStack_360;
          func_0x000108625da4();
          func_0x000107c337a8(uStack_260);
          if ((bool)in_ZR) {
            return pppppuVar10;
          }
          ___stack_chk_fail();
          func_0x00010882ea00();
          FUN_1088292f0(&uStack_330);
          func_0x00010882ee40();
          FUN_1088293cc(&lStack_3a0);
          func_0x000107c33a40();
          func_0x000108625da4(apppuStack_360);
          func_0x00010882edf0();
          func_0x000107c33bfc();
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_14 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_09 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_15 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_10 != 0);
          }
          puStack_338 = &UNK_10f4bce6d;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_16)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_1088294c0();
          func_0x00010882e15c();
          pcStack_2a8 = FUN_108829410;
          ppuStack_2a0 = &PTR_FUN_110a780d8;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_1088294c0();
          func_0x00010882e080();
          func_0x00010882df0c(lStack_2d0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x0001088293ec(&uStack_330);
          func_0x00010882ee40();
          pppppuVar11 = appppuStack_3b8;
          FUN_1088294e8(pppppuVar11);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar11;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x0001088293ec(&uStack_330);
          func_0x00010882ee40();
          ppppppuVar12 = (undefined8 ******)appppuStack_3b8;
          FUN_1088294e8();
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x00010882edf0();
          func_0x000107c33bfc();
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_17 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_11 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_18 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_12 != 0);
          }
          puStack_338 = &UNK_10f4bce85;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_19)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_1088295dc();
          func_0x00010882e15c();
          pcStack_2a8 = FUN_10882952c;
          ppuStack_2a0 = &PTR_FUN_110a780f0;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_1088295dc();
          func_0x00010882e080();
          func_0x00010882df0c(lStack_2d0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829508(&uStack_330);
          func_0x00010882ee40();
          pppppuVar11 = appppuStack_3b8;
          FUN_108829604(pppppuVar11);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar11;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829508(&uStack_330);
          func_0x00010882ee40();
          FUN_108829604(appppuStack_3b8);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x00010882edf0();
          pcVar21 = FUN_108827dcc;
          func_0x000107c33bfc();
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_20 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_13 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882f2ec();
          func_0x000107c27994();
          func_0x00010882eca4();
          uVar17 = SUB84(ppppuVar24,0);
          if (extraout_x8_21 != 0) {
            do {
              func_0x000107c3383c();
              uVar17 = SUB84(ppppuVar24,0);
            } while (extraout_w10_14 != 0);
          }
          puStack_338 = &UNK_10f4bce90;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_22)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          ppppuVar24 = pppppuVar10[5];
          func_0x00010882e9f0();
          FUN_1088296f8();
          func_0x00010882e15c();
          pcStack_2a8 = FUN_108829648;
          ppuStack_2a0 = &PTR_FUN_110a78108;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_1088296f8();
          func_0x00010882e080();
          func_0x00010882df0c(lStack_2d0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829624(&uStack_330);
          func_0x00010882ee40();
          FUN_108829720(appppuStack_3b8);
          func_0x000107c33948();
          pppppuVar11 = (undefined8 *****)apppuStack_360;
          func_0x000108625dc8(pppppuVar11);
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar11;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829624(&uStack_330);
          func_0x00010882ee40();
          FUN_108829720(appppuStack_3b8);
          func_0x000107c33948();
          func_0x000108625dc8(apppuStack_360);
          func_0x00010882edf0();
          pppppppuVar13 = &ppppppuStack_590;
          uStack_400 = 1;
          pcStack_3c8 = FUN_108827f38;
          ppppuStack_3f8 = pppppuVar7 + 7;
          ppppuStack_3f0 = pppppuVar9;
          pppuStack_3e8 = ppppuVar24;
          ppppppuStack_3e0 = ppppppuVar12;
          ppppuStack_3d8 = pppppuVar10;
          ppppppuStack_3d0 = (undefined8 ******)&stack0xfffffffffffffdf0;
          func_0x000107c3378c();
          lStack_528 = *(long *)(pcVar21 + 8);
          pppuStack_530 = *(undefined8 ****)pcVar21;
          if (*(long *)(pcVar21 + 8) != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_15 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882fbf8();
          func_0x00010882e694();
          pppcStack_558 = (code ***)lStack_528;
          pppuStack_560 = pppuStack_530;
          uStack_568 = uVar17;
          if (lStack_528 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_16 != 0);
          }
          puStack_500 = &UNK_10f4b12f2;
          func_0x00010882f098(auStack_550);
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_23)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f090();
          func_0x00010882e42c();
          func_0x00010882eef4();
          func_0x00010882ea30();
          FUN_108829820();
          func_0x00010882f0bc();
          func_0x000107c337a0();
          pcStack_478 = (code *)uStack_518;
          uStack_480 = uStack_520;
          pcStack_490 = (code *)extraout_x9_01;
          func_0x00010882e62c();
          pcStack_468 = FUN_108829768;
          ppuStack_460 = &PTR_FUN_110a78120;
          func_0x000107c339e0();
          func_0x00010882f34c();
          FUN_108829820();
          func_0x00010882e13c();
          func_0x00010882df40(pcStack_490);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829744(auStack_4f8);
          func_0x00010882ee40();
          FUN_10882985c(&ppppppuStack_590);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppppuVar13;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829744(auStack_4f8);
          func_0x00010882ee40();
          FUN_10882985c(&ppppppuStack_590);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x00010882edf0();
          pcVar21 = FUN_1088280d4;
          func_0x000107c33bfc();
          ppppppuStack_3e0 = &ppppppuStack_3d0;
          ppppuStack_3d8 = (undefined8 ****)pcVar21;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_24 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_17 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_25 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_18 != 0);
          }
          puStack_508 = &UNK_10f4bcea8;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_26)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_108829950();
          func_0x00010882e15c();
          pcStack_478 = FUN_1088298a0;
          ppuStack_470 = &PTR_FUN_110a78138;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_108829950();
          func_0x00010882e080();
          func_0x00010882df0c(uStack_4a0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x00010882987c(&puStack_500);
          func_0x00010882ee40();
          pppppuVar7 = (undefined8 *****)apppuStack_588;
          FUN_108829978(pppppuVar7);
          func_0x000107c33948();
          func_0x00010882f8b4();
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar7;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x00010882987c(&puStack_500);
          func_0x00010882ee40();
          ppppuVar24 = apppuStack_588;
          FUN_108829978();
          func_0x000107c33948();
          func_0x00010882f8b4();
          func_0x00010882edf0();
          pcVar21 = FUN_108828234;
          func_0x000107c33bfc();
          ppppppuStack_3e0 = &ppppppuStack_3e0;
          ppppuStack_3d8 = (undefined8 ****)pcVar21;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_27 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_19 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_28 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_20 != 0);
          }
          puStack_508 = &UNK_10f4bceb9;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_29)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_108829a70();
          func_0x00010882e15c();
          pcStack_478 = FUN_1088299c0;
          ppuStack_470 = &PTR_FUN_110a78150;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_108829a70();
          func_0x00010882e080();
          func_0x00010882df0c(uStack_4a0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x00010882999c(&puStack_500);
          func_0x00010882ee40();
          FUN_108829a98(apppuStack_588);
          func_0x000107c33948();
          pppppuVar7 = (undefined8 *****)&pppuStack_530;
          func_0x000108625e10(pppppuVar7);
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar7;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x00010882999c(&puStack_500);
          func_0x00010882ee40();
          FUN_108829a98(apppuStack_588);
          func_0x000107c33948();
          func_0x000108625e10(&pppuStack_530);
          func_0x00010882edf0();
          pcVar21 = FUN_10882839c;
          func_0x000107c33bfc();
          ppppppuStack_3e0 = &ppppppuStack_3e0;
          ppppuStack_3d8 = (undefined8 ****)pcVar21;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_30 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_21 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_31 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_22 != 0);
          }
          puStack_508 = &UNK_10f4bcee0;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_32)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          ppppuVar25 = pppppuVar10[5];
          func_0x00010882e9f0();
          FUN_108829b90();
          func_0x00010882e15c();
          pcStack_478 = FUN_108829ae0;
          ppuStack_470 = &PTR_FUN_110a78168;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_108829b90();
          func_0x00010882e080();
          func_0x00010882df0c(uStack_4a0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829abc(&puStack_500);
          func_0x00010882ee40();
          FUN_108829bb8(apppuStack_588);
          func_0x000107c33948();
          pppppuVar7 = (undefined8 *****)&pppuStack_530;
          func_0x000108625e34(pppppuVar7);
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar7;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829abc(&puStack_500);
          func_0x00010882ee40();
          FUN_108829bb8(apppuStack_588);
          func_0x000107c33948();
          func_0x000108625e34(&pppuStack_530);
          func_0x00010882edf0();
          pcVar19 = FUN_108828504;
          func_0x00010882ff54();
          ppppppuStack_3d0 = &ppppppuStack_3e0;
          pcStack_3c8 = pcVar19;
          func_0x000107c337b0();
          func_0x00010882fa64();
          if (ppppuVar24 != (undefined8 ****)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_23 != 0);
          }
          func_0x000107c33ae0();
          ppppuVar20 = pppppuVar10[2];
          func_0x00010882f63c();
          uVar22 = (undefined1)param_5;
          uVar16 = SUB81(ppppuVar20,0);
          pppuStack_560 = ppppuVar25;
          pppcStack_558 = (code ***)ppppuVar24;
          if (ppppuVar24 != (undefined8 ****)0x0) {
            do {
              func_0x000107c3383c();
              uVar22 = (undefined1)param_5;
              uVar16 = SUB81(ppppuVar20,0);
            } while (extraout_w10_24 != 0);
          }
          puStack_508 = &UNK_10f4bcef9;
          puVar14 = auStack_548;
          func_0x00010882f018();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_33)();
          func_0x000107c337e4();
          func_0x000107c338d4();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e78c();
          pcStack_490 = FUN_108829c00;
          ppuStack_488 = &PTR_FUN_110a78180;
          func_0x000107c33a44();
          func_0x00010882e8dc();
          func_0x000107c338ec();
          func_0x00010882ea00();
          func_0x000108829bdc(&puStack_500);
          func_0x00010882ee40();
          pppppuVar7 = (undefined8 *****)&pppuStack_570;
          FUN_108829cb8();
          func_0x000107c33a40();
          func_0x00010882f8b4();
          func_0x000107c337a8(uStack_430);
          if ((bool)in_ZR) {
            return pppppuVar7;
          }
          ___stack_chk_fail();
          func_0x00010882ea00();
          func_0x000108829bdc(&puStack_500);
          func_0x00010882ee40();
          FUN_108829cb8(&pppuStack_570);
          func_0x000107c33a40();
          func_0x00010882f8b4();
          func_0x00010882edf0();
          func_0x000107c33c58(FUN_108828644);
          appppppuStack_540[0] = &ppppppuStack_3d0;
          func_0x000107c337b0();
          ppppuVar24 = (undefined8 ****)*param_8;
          ppppuVar25 = (undefined8 ****)param_8[1];
          pppuStack_6d0 = ppppuVar24;
          pppuStack_6c8 = ppppuVar25;
          uStack_5a0 = extraout_x8_34;
          if (ppppuVar25 != (undefined8 ****)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_25 != 0);
          }
          lStack_6e8 = 0;
          lStack_6e0 = 0;
          lStack_6d8 = 0;
          func_0x000107c29cfc(&lStack_738,pppppuVar7[1],pppppuVar7[2]);
          plStack_720 = (long *)CONCAT71(plStack_720._1_7_,uVar16);
          uStack_708 = (undefined1)param_6;
          uStack_707 = (undefined7)((ulong)param_6 >> 8);
          uStack_700 = (undefined1)param_7;
          puStack_728 = puVar14;
          pcStack_718 = pcVar21;
          uStack_710 = uVar22;
          pppuStack_6f8 = ppppuVar24;
          pppuStack_6f0 = ppppuVar25;
          if (ppppuVar25 != (undefined8 ****)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_26 != 0);
          }
          puStack_6a8 = &UNK_10f4bcf15;
          plVar15 = &lStack_6e8;
          func_0x00010882f338();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_35)();
          func_0x000107c337f8();
          func_0x000107c33960();
          func_0x000107c3396c();
          func_0x000107c33a9c();
          func_0x00010882e55c();
          func_0x00010882f02c();
          lVar6 = lStack_6d8;
          lVar5 = lStack_6e0;
          lVar4 = lStack_6e8;
          pppuVar3 = pppuStack_6f0;
          pppuVar2 = pppuStack_6f8;
          lVar1 = lStack_730;
          lVar18 = lStack_738;
          ppppuVar24 = pppppuVar7[5];
          lStack_6a0 = lStack_738;
          lStack_698 = lStack_730;
          lStack_730 = 0;
          lStack_738 = 0;
          lStack_688 = (long)plStack_720;
          puStack_690 = puStack_728;
          uStack_678 = uStack_710;
          pcStack_680 = pcStack_718;
          uStack_66f = CONCAT17(uStack_700,uStack_707);
          uStack_670 = uStack_708;
          pppuStack_660 = pppuStack_6f8;
          pppuStack_658 = pppuStack_6f0;
          pppuStack_6f8 = (undefined8 ***)0x0;
          pppuStack_6f0 = (undefined8 ****)0x0;
          pcStack_650 = (code *)0x0;
          uStack_640 = 1;
          lStack_638 = lStack_6e8;
          lStack_630 = lStack_6e0;
          lStack_6e8 = 0;
          lStack_6e0 = 0;
          lStack_6d8 = 0;
          lStack_628 = lVar6;
          lStack_618 = lStack_6c0;
          lStack_610 = lStack_6b8;
          lStack_608 = lStack_6b0;
          ppuStack_648 = (undefined **)param_7;
          ppppuStack_620 = pppppuVar7 + 7;
          func_0x00010882f710();
          pcStack_600 = FUN_108829cfc;
          ppuStack_5f8 = &PTR_FUN_110a78198;
          func_0x000107c33a2c();
          *plVar15 = lVar18;
          plVar15[1] = lVar1;
          pcVar21 = pcStack_718;
          puVar14 = puStack_728;
          lStack_6a0 = 0;
          lStack_698 = 0;
          lVar18 = CONCAT71(uStack_70f,uStack_710);
          plVar15[3] = (long)plStack_720;
          plVar15[2] = (long)puVar14;
          plVar15[5] = lVar18;
          plVar15[4] = (long)pcVar21;
          uVar23 = CONCAT17(uStack_708,uStack_70f);
          *(ulong *)((long)plVar15 + 0x31) = CONCAT17(uStack_700,uStack_707);
          *(undefined8 *)((long)plVar15 + 0x29) = uVar23;
          plVar15[8] = (long)pppuVar2;
          plVar15[9] = (long)pppuVar3;
          pcVar21 = pcStack_650;
          pppuStack_660 = (undefined8 ***)0x0;
          pppuStack_658 = (undefined8 ***)0x0;
          lVar18 = CONCAT71(uStack_63f,uStack_640);
          plVar15[0xb] = (long)ppuStack_648;
          plVar15[10] = (long)pcVar21;
          plVar15[0xc] = lVar18;
          plVar15[0xd] = lVar4;
          plVar15[0xe] = lVar5;
          plVar15[0xf] = lVar6;
          lStack_638 = 0;
          lStack_630 = 0;
          lStack_628 = 0;
          plVar15[0x10] = (long)(pppppuVar7 + 7);
          plVar15[0x11] = lStack_6c0;
          plVar15[0x12] = lStack_6b8;
          plVar15[0x13] = lStack_6b0;
          lStack_610 = 0;
          lStack_608 = 0;
          lStack_618 = 0;
          plStack_5f0 = plVar15;
          func_0x000107c339ac(ppppuVar24);
          func_0x00010882fc6c();
          func_0x00010882eb54();
          func_0x000108829cd8(&lStack_6a0);
          func_0x000107c33a04();
          FUN_108829dc0(&lStack_738);
          func_0x000107c280f8(&lStack_6e8);
          pppppuVar7 = (undefined8 *****)&pppuStack_6d0;
          func_0x000108625dec();
          func_0x000107c337a8(uStack_5a0);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010882eb54();
            func_0x000108829cd8(&lStack_6a0);
            func_0x000107c33a04();
            FUN_108829dc0(&lStack_738);
            func_0x000107c280f8(&lStack_6e8);
            func_0x000108625dec(&pppuStack_6d0);
            func_0x00010882edf0();
            pcVar21 = FUN_1088288b4;
            func_0x00010882ff54();
            ppppppuStack_590 = appppppuStack_540;
            apppuStack_588[0] = (undefined8 ***)pcVar21;
            func_0x000107c337b0();
            func_0x00010882fa64();
            if (lVar4 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_27 != 0);
            }
            func_0x000107c33ae0();
            func_0x00010882f63c();
            pcStack_718 = (code *)lVar4;
            plStack_720 = &lStack_6a0;
            if (lVar4 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_28 != 0);
            }
            pppuStack_6c8 = (undefined8 ***)&UNK_10f4bcf38;
            func_0x00010882f018(&uStack_708);
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_36)();
            func_0x000107c337e4();
            func_0x000107c338d4();
            func_0x000107c3396c();
            func_0x00010882f010();
            func_0x00010882e3f0();
            func_0x00010882eed0();
            func_0x00010882e78c();
            pcStack_650 = FUN_108829e04;
            ppuStack_648 = &PTR_FUN_110a781b0;
            func_0x000107c33a44();
            func_0x00010882e8dc();
            func_0x000107c338ec();
            func_0x00010882ea00();
            func_0x000108829de0(&lStack_6c0);
            func_0x00010882ee40();
            FUN_108829ebc(&lStack_730);
            func_0x000107c33a40();
            pppppuVar7 = (undefined8 *****)&pppuStack_6f0;
            func_0x000108625e58();
            func_0x000107c337a8(plStack_5f0);
            if ((bool)in_ZR) {
              return pppppuVar7;
            }
            ___stack_chk_fail();
            func_0x00010882ea00();
            func_0x000108829de0(&lStack_6c0);
            func_0x00010882ee40();
            FUN_108829ebc(&lStack_730);
            func_0x000107c33a40();
            pppppuVar7 = (undefined8 *****)&pppuStack_6f0;
            func_0x000108625e58(pppppuVar7);
            func_0x00010882edf0();
            func_0x00010882eb68(&PTR_DAT_110a77e80);
            func_0x000107c29344(pppppuVar7 + 3);
            func_0x000107c29cf4(lVar4);
            return pppppuVar7;
          }
          return pppppuVar7;
        }
      }
      return pppppuVar7;
    }
  }
  return pppppuVar7;
}



/* Entry: 108827138; end: 10882729f;  */

undefined8 *****
FUN_108827138(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long *param_8)

{
  long lVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 in_ZR;
  undefined8 *****pppppuVar8;
  undefined8 *puVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined1 *puVar15;
  long *plVar16;
  code *pcVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  code *pcVar20;
  undefined8 ****ppppuVar21;
  undefined1 uVar22;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined8 extraout_x8_08;
  code *extraout_x8_09;
  undefined8 extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  code *extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  code *extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  code *extraout_x8_21;
  code *extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  code *extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  code *extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  code *extraout_x8_31;
  code *extraout_x8_32;
  undefined8 extraout_x8_33;
  code *extraout_x8_34;
  code *extraout_x8_35;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  long unaff_x19;
  undefined8 uVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuVar25;
  long unaff_x22;
  undefined *in_stack_00000088;
  undefined8 in_stack_000000f0;
  code *in_stack_00000118;
  undefined **in_stack_00000120;
  undefined8 *in_stack_000001b0;
  long lStack_738;
  long lStack_730;
  undefined1 *puStack_728;
  long *plStack_720;
  code *pcStack_718;
  undefined1 uStack_710;
  undefined7 uStack_70f;
  undefined1 uStack_708;
  undefined7 uStack_707;
  undefined1 uStack_700;
  undefined8 ***pppuStack_6f8;
  undefined8 ***pppuStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  undefined8 ***pppuStack_6d0;
  undefined8 ***pppuStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  undefined *puStack_6a8;
  long lStack_6a0;
  long lStack_698;
  undefined1 *puStack_690;
  long lStack_688;
  code *pcStack_680;
  undefined1 uStack_678;
  undefined1 uStack_670;
  undefined8 uStack_66f;
  undefined8 ***pppuStack_660;
  undefined8 ***pppuStack_658;
  code *pcStack_650;
  undefined **ppuStack_648;
  undefined1 uStack_640;
  undefined7 uStack_63f;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  undefined8 ****ppppuStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  code *pcStack_600;
  undefined **ppuStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5a0;
  undefined8 ******ppppppuStack_590;
  undefined8 ***apppuStack_588 [3];
  undefined8 ***pppuStack_570;
  undefined4 uStack_568;
  undefined8 ***pppuStack_560;
  code ***pppcStack_558;
  undefined1 auStack_550 [8];
  undefined1 auStack_548 [8];
  undefined8 ******appppppuStack_540 [2];
  undefined8 ***pppuStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined1 auStack_4f8 [88];
  undefined8 uStack_4a0;
  code *pcStack_490;
  undefined **ppuStack_488;
  undefined8 uStack_480;
  code *pcStack_478;
  undefined **ppuStack_470;
  code *pcStack_468;
  undefined **ppuStack_460;
  undefined8 uStack_430;
  undefined8 uStack_400;
  undefined8 ****ppppuStack_3f8;
  undefined8 ****ppppuStack_3f0;
  undefined8 ***pppuStack_3e8;
  undefined8 ******ppppppuStack_3e0;
  undefined8 ****ppppuStack_3d8;
  undefined8 ******ppppppuStack_3d0;
  code *pcStack_3c8;
  undefined8 ****appppuStack_3b8 [2];
  undefined8 ***pppuStack_3a8;
  long lStack_3a0;
  undefined1 uStack_398;
  undefined8 ****ppppuStack_390;
  long lStack_388;
  undefined1 auStack_378 [8];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 ***apppuStack_360 [2];
  undefined8 ***pppuStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  char *pcStack_328;
  undefined1 auStack_320 [8];
  undefined *puStack_318;
  code *pcStack_310;
  undefined **ppuStack_308;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined1 uStack_2c8;
  code *pcStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_260;
  undefined8 ******ppppppuStack_250;
  code *pcStack_248;
  undefined8 ****ppppuStack_1e0;
  code *pcStack_1d8;
  undefined8 ***apppuStack_1d0 [2];
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined1 auStack_1b0 [32];
  undefined8 auStack_190 [4];
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  char *pcStack_140;
  undefined1 auStack_138 [104];
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 **ppuStack_10;
  code *pcStack_8;
  
  func_0x000107c33bfc();
  func_0x000107c3378c();
  func_0x00010882eda8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882eb94();
  func_0x00010882ed88();
  func_0x00010882eca4();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000088 = &UNK_10f4bcdeb;
  func_0x00010882ebcc();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_01)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_108828d50();
  func_0x00010882e15c();
  in_stack_00000118 = FUN_108828ca0;
  in_stack_00000120 = &PTR_FUN_110a78030;
  func_0x000107c339b8();
  func_0x00010882f2a0();
  FUN_108828d50();
  func_0x00010882e080();
  func_0x00010882df0c(in_stack_000000f0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x000108828c7c(&stack0x00000090);
  func_0x00010882ee40();
  FUN_108828d78(&stack0x00000008);
  func_0x000107c33948();
  pppppuVar8 = (undefined8 *****)&stack0x00000060;
  func_0x000108625d80(pppppuVar8);
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x000108828c7c(&stack0x00000090);
    func_0x00010882ee40();
    FUN_108828d78(&stack0x00000008);
    func_0x000107c33948();
    puVar9 = (undefined8 *)&stack0x00000060;
    func_0x000108625d80();
    func_0x00010882edf0();
    func_0x000107c33bfc();
    in_stack_000001b0 = &stack0x000001b0;
    func_0x000107c3378c();
    func_0x00010882eda8();
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010882ebd8();
    func_0x00010882eb94();
    func_0x00010882f2ec();
    func_0x000107c27994();
    func_0x00010882eca4();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_02 != 0);
    }
    in_stack_00000088 = &UNK_10f4bce0f;
    func_0x00010882ebcc();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_04)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    func_0x00010882e9f0();
    FUN_108828e70();
    func_0x00010882e15c();
    in_stack_00000118 = FUN_108828dc0;
    in_stack_00000120 = &PTR_FUN_110a78048;
    func_0x000107c339b8();
    func_0x00010882f2a0();
    FUN_108828e70();
    func_0x00010882e080();
    func_0x00010882df0c(in_stack_000000f0);
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x000108828d9c(&stack0x00000090);
    func_0x00010882ee40();
    pppppuVar8 = (undefined8 *****)&stack0x00000008;
    FUN_108828e98(pppppuVar8);
    func_0x000107c33948();
    func_0x00010882f144();
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108828d9c(&stack0x00000090);
      func_0x00010882ee40();
      FUN_108828e98(&stack0x00000008);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x00010882edf0();
      pppppuVar8 = (undefined8 *****)apppuStack_1d0;
      pcStack_8 = FUN_108827404;
      ppuStack_10 = &stack0x000001b0;
      func_0x000107c3378c();
      uVar23 = *puVar9;
      lVar1 = puVar9[1];
      uStack_170 = uVar23;
      lStack_168 = lVar1;
      if (lVar1 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_03 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882fbf8();
      uStack_1c0 = uVar23;
      lStack_1b8 = lVar1;
      if (lVar1 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_04 != 0);
      }
      func_0x000107c279a0(auStack_1b0,param_3);
      pcStack_140 = "onFeedExited";
      puVar9 = auStack_190;
      func_0x00010882f098();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_05)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f090();
      func_0x00010882e42c();
      func_0x00010882eef4();
      uVar23 = *(undefined8 *)(unaff_x19 + 0x28);
      func_0x00010882ea30();
      FUN_108828f94();
      func_0x00010882f0bc();
      func_0x000107c337a0();
      uStack_b8 = uStack_158;
      uStack_c0 = uStack_160;
      uStack_d0 = extraout_x9;
      func_0x00010882e62c();
      pcStack_a8 = FUN_108828edc;
      ppuStack_a0 = &PTR_FUN_110a78060;
      func_0x000107c339e0();
      func_0x00010882f34c();
      FUN_108828f94();
      func_0x00010882e13c();
      func_0x00010882df40(uStack_d0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x000108828eb8(auStack_138);
      func_0x00010882ee40();
      FUN_108828fd4(apppuStack_1d0);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x000107c33784();
      if ((bool)in_ZR) {
        return pppppuVar8;
      }
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108828eb8(auStack_138);
      func_0x00010882ee40();
      FUN_108828fd4(apppuStack_1d0);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x00010882edf0();
      pcStack_1d8 = FUN_108827598;
      ppppuStack_1e0 = (undefined8 ****)&ppuStack_10;
      func_0x000107c33a68();
      func_0x00010882e2d0();
      ppppuVar24 = (undefined8 ****)*puVar9;
      lVar1 = puVar9[1];
      pppuStack_350 = ppppuVar24;
      lStack_348 = lVar1;
      if (lVar1 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_05 != 0);
      }
      func_0x00010882eee8();
      func_0x00010882efb8();
      func_0x000107c29cfc();
      pppuStack_3a8 = ppppuVar24;
      lStack_3a0 = lVar1;
      if (lVar1 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_06 != 0);
      }
      uStack_398 = (undefined1)uVar23;
      func_0x000107c279a0(&ppppuStack_390,param_3);
      pcStack_328 = "onFeedEntered";
      func_0x000107c29bbc(&uStack_370,&pcStack_328);
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_06)();
      func_0x00010882e2e8();
      func_0x00010882e728();
      func_0x000107c3396c();
      func_0x00010882f9d4();
      func_0x00010882ed04();
      func_0x00010882f3dc();
      func_0x00010882f698();
      FUN_1088290dc();
      uStack_2d8 = 0;
      uStack_2c8 = 1;
      ppuStack_2b8 = (undefined **)uStack_368;
      pcStack_2c0 = (code *)uStack_370;
      lStack_2d0 = param_3;
      func_0x00010882eee8(unaff_x19 + 0x38);
      uStack_298 = puStack_338;
      ppuStack_2a0 = (undefined **)uStack_340;
      uStack_290 = uStack_330;
      uStack_2b0 = extraout_x9_00;
      pcStack_2a8 = (code *)extraout_x8_07;
      func_0x000107c33b64();
      pcStack_288 = FUN_108829020;
      ppuStack_280 = &PTR_FUN_110a78078;
      func_0x000107c33a48();
      func_0x00010882ff48();
      FUN_1088290dc();
      uVar23 = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(unaff_x22 + 0x50);
      *(undefined8 *)(param_3 + 0x48) = uVar23;
      *(undefined8 *)(param_3 + 0x58) = *(undefined8 *)(unaff_x22 + 0x58);
      *(undefined ***)(param_3 + 0x68) = ppuStack_2b8;
      *(code **)(param_3 + 0x60) = pcStack_2c0;
      *(undefined8 *)(param_3 + 0x70) = uStack_2b0;
      *(undefined8 *)(unaff_x22 + 0x68) = 0;
      *(undefined8 *)(unaff_x22 + 0x70) = 0;
      *(undefined8 *)(unaff_x22 + 0x60) = 0;
      *(undefined ***)(param_3 + 0x80) = ppuStack_2a0;
      *(code **)(param_3 + 0x78) = pcStack_2a8;
      *(undefined8 *)(param_3 + 0x90) = uStack_290;
      *(undefined8 *)(param_3 + 0x88) = uStack_298;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x80) = 0;
      func_0x00010882e960();
      func_0x00010882e828();
      func_0x00010882e4b4();
      func_0x000108828ffc(auStack_320);
      func_0x000107c33a4c();
      FUN_108829124(appppuStack_3b8);
      func_0x00010882ee74();
      pppppuVar8 = (undefined8 *****)&pppuStack_350;
      func_0x000104be3970(pppppuVar8);
      func_0x00010882e28c();
      if ((bool)in_ZR) {
        return pppppuVar8;
      }
      ___stack_chk_fail();
      func_0x00010882e2fc();
      func_0x000108828ffc(auStack_320);
      func_0x000107c33a4c();
      FUN_108829124(appppuStack_3b8);
      func_0x00010882ee74();
      ppppuVar24 = &pppuStack_350;
      func_0x000104be3970();
      func_0x00010882edf0();
      pcVar17 = FUN_1088277a4;
      func_0x000107c33b24();
      ppppppuStack_250 = (undefined8 ******)&ppppuStack_1e0;
      pcStack_248 = pcVar17;
      func_0x000107c337b0();
      uStack_2b0 = extraout_x8_08;
      func_0x000107c33b9c();
      func_0x000107c29cfc(appppuStack_3b8,ppppuVar24[1],ppppuVar24[2]);
      puStack_318 = &UNK_10f4bce23;
      func_0x000107c338f0();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_09)();
      func_0x000107c337f8();
      func_0x000107c338e4();
      func_0x000107c3396c();
      func_0x000107c33a9c();
      func_0x000107c33814();
      func_0x00010882f02c();
      func_0x000107c33794();
      pcStack_310 = FUN_10882916c;
      ppuStack_308 = &PTR_FUN_110a78090;
      func_0x000107c33a64();
      func_0x000107c33780();
      func_0x000107c338f4();
      func_0x000107c337b8();
      pppppuVar8 = &ppppuStack_390;
      func_0x00010882914c();
      func_0x000107c33a04();
      func_0x00010882f0f8();
      func_0x000107c33a50();
      func_0x000107c337a8(uStack_2b0);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x000107c337b8();
        pppppuVar10 = &ppppuStack_390;
        func_0x00010882914c();
        func_0x000107c33a04();
        func_0x00010882f0f8();
        func_0x000107c33a50();
        func_0x00010882edf0();
        pcVar17 = FUN_1088278b4;
        func_0x000107c33b24();
        ppppppuStack_250 = &ppppppuStack_250;
        pcStack_248 = pcVar17;
        func_0x000107c337b0();
        uStack_2b0 = extraout_x8_10;
        func_0x000107c33b9c();
        pppppuVar11 = appppuStack_3b8;
        func_0x000107c29cfc(pppppuVar11,pppppuVar10[1],pppppuVar10[2]);
        puStack_318 = &UNK_10f4bce35;
        func_0x000107c338f0();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_11)();
        func_0x000107c337f8();
        func_0x000107c338e4();
        func_0x000107c3396c();
        func_0x000107c33a9c();
        func_0x000107c33814();
        pppppuVar10 = pppppuVar8 + 7;
        func_0x00010882f02c();
        func_0x000107c33794();
        pcStack_310 = FUN_108829240;
        ppuStack_308 = &PTR_FUN_110a780a8;
        func_0x000107c33a64();
        func_0x000107c33780();
        func_0x000107c338f4();
        func_0x000107c337b8();
        pppppuVar8 = &ppppuStack_390;
        FUN_108829220();
        func_0x000107c33a04();
        func_0x00010882f0f8();
        func_0x000107c33a50();
        func_0x000107c337a8(uStack_2b0);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x000107c337b8();
          FUN_108829220(&ppppuStack_390);
          func_0x000107c33a04();
          func_0x00010882f0f8();
          func_0x000107c33a50();
          func_0x00010882edf0();
          func_0x00010882ff54();
          func_0x000107c337b0();
          func_0x00010882fa64();
          if (param_3 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_07 != 0);
          }
          func_0x000107c33ae0();
          ppppuVar24 = pppppuVar8[2];
          func_0x00010882f63c();
          ppppuStack_390 = pppppuVar11;
          lStack_388 = param_3;
          if (param_3 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_08 != 0);
          }
          puStack_338 = &UNK_10f4bce52;
          func_0x00010882f018(auStack_378);
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_12)();
          func_0x000107c337e4();
          func_0x000107c338d4();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e78c();
          pcStack_2c0 = FUN_108829314;
          ppuStack_2b8 = &PTR_FUN_110a780c0;
          func_0x000107c33a44();
          func_0x00010882e8dc();
          func_0x000107c338ec();
          func_0x00010882ea00();
          FUN_1088292f0(&uStack_330);
          func_0x00010882ee40();
          FUN_1088293cc(&lStack_3a0);
          func_0x000107c33a40();
          pppppuVar11 = (undefined8 *****)apppuStack_360;
          func_0x000108625da4();
          func_0x000107c337a8(uStack_260);
          if ((bool)in_ZR) {
            return pppppuVar11;
          }
          ___stack_chk_fail();
          func_0x00010882ea00();
          FUN_1088292f0(&uStack_330);
          func_0x00010882ee40();
          FUN_1088293cc(&lStack_3a0);
          func_0x000107c33a40();
          func_0x000108625da4(apppuStack_360);
          func_0x00010882edf0();
          func_0x000107c33bfc();
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_13 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_09 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_14 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_10 != 0);
          }
          puStack_338 = &UNK_10f4bce6d;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_15)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_1088294c0();
          func_0x00010882e15c();
          pcStack_2a8 = FUN_108829410;
          ppuStack_2a0 = &PTR_FUN_110a780d8;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_1088294c0();
          func_0x00010882e080();
          func_0x00010882df0c(lStack_2d0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x0001088293ec(&uStack_330);
          func_0x00010882ee40();
          pppppuVar12 = appppuStack_3b8;
          FUN_1088294e8(pppppuVar12);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar12;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x0001088293ec(&uStack_330);
          func_0x00010882ee40();
          ppppppuVar13 = (undefined8 ******)appppuStack_3b8;
          FUN_1088294e8();
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x00010882edf0();
          func_0x000107c33bfc();
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_16 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_11 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_17 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_12 != 0);
          }
          puStack_338 = &UNK_10f4bce85;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_18)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_1088295dc();
          func_0x00010882e15c();
          pcStack_2a8 = FUN_10882952c;
          ppuStack_2a0 = &PTR_FUN_110a780f0;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_1088295dc();
          func_0x00010882e080();
          func_0x00010882df0c(lStack_2d0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829508(&uStack_330);
          func_0x00010882ee40();
          pppppuVar12 = appppuStack_3b8;
          FUN_108829604(pppppuVar12);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar12;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829508(&uStack_330);
          func_0x00010882ee40();
          FUN_108829604(appppuStack_3b8);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x00010882edf0();
          pcVar17 = FUN_108827dcc;
          func_0x000107c33bfc();
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_19 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_13 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882f2ec();
          func_0x000107c27994();
          func_0x00010882eca4();
          uVar19 = SUB84(ppppuVar24,0);
          if (extraout_x8_20 != 0) {
            do {
              func_0x000107c3383c();
              uVar19 = SUB84(ppppuVar24,0);
            } while (extraout_w10_14 != 0);
          }
          puStack_338 = &UNK_10f4bce90;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_21)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          ppppuVar24 = pppppuVar11[5];
          func_0x00010882e9f0();
          FUN_1088296f8();
          func_0x00010882e15c();
          pcStack_2a8 = FUN_108829648;
          ppuStack_2a0 = &PTR_FUN_110a78108;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_1088296f8();
          func_0x00010882e080();
          func_0x00010882df0c(lStack_2d0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829624(&uStack_330);
          func_0x00010882ee40();
          FUN_108829720(appppuStack_3b8);
          func_0x000107c33948();
          pppppuVar12 = (undefined8 *****)apppuStack_360;
          func_0x000108625dc8(pppppuVar12);
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar12;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829624(&uStack_330);
          func_0x00010882ee40();
          FUN_108829720(appppuStack_3b8);
          func_0x000107c33948();
          func_0x000108625dc8(apppuStack_360);
          func_0x00010882edf0();
          pppppppuVar14 = &ppppppuStack_590;
          uStack_400 = 1;
          pcStack_3c8 = FUN_108827f38;
          ppppuStack_3f8 = pppppuVar8 + 7;
          ppppuStack_3f0 = pppppuVar10;
          pppuStack_3e8 = ppppuVar24;
          ppppppuStack_3e0 = ppppppuVar13;
          ppppuStack_3d8 = pppppuVar11;
          ppppppuStack_3d0 = (undefined8 ******)&stack0xfffffffffffffdf0;
          func_0x000107c3378c();
          lStack_528 = *(long *)(pcVar17 + 8);
          pppuStack_530 = *(undefined8 ****)pcVar17;
          if (*(long *)(pcVar17 + 8) != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_15 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882fbf8();
          func_0x00010882e694();
          pppcStack_558 = (code ***)lStack_528;
          pppuStack_560 = pppuStack_530;
          uStack_568 = uVar19;
          if (lStack_528 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_16 != 0);
          }
          puStack_500 = &UNK_10f4b12f2;
          func_0x00010882f098(auStack_550);
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_22)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f090();
          func_0x00010882e42c();
          func_0x00010882eef4();
          func_0x00010882ea30();
          FUN_108829820();
          func_0x00010882f0bc();
          func_0x000107c337a0();
          pcStack_478 = (code *)uStack_518;
          uStack_480 = uStack_520;
          pcStack_490 = (code *)extraout_x9_01;
          func_0x00010882e62c();
          pcStack_468 = FUN_108829768;
          ppuStack_460 = &PTR_FUN_110a78120;
          func_0x000107c339e0();
          func_0x00010882f34c();
          FUN_108829820();
          func_0x00010882e13c();
          func_0x00010882df40(pcStack_490);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829744(auStack_4f8);
          func_0x00010882ee40();
          FUN_10882985c(&ppppppuStack_590);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppppuVar14;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829744(auStack_4f8);
          func_0x00010882ee40();
          FUN_10882985c(&ppppppuStack_590);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x00010882edf0();
          pcVar17 = FUN_1088280d4;
          func_0x000107c33bfc();
          ppppppuStack_3e0 = &ppppppuStack_3d0;
          ppppuStack_3d8 = (undefined8 ****)pcVar17;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_23 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_17 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_24 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_18 != 0);
          }
          puStack_508 = &UNK_10f4bcea8;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_25)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_108829950();
          func_0x00010882e15c();
          pcStack_478 = FUN_1088298a0;
          ppuStack_470 = &PTR_FUN_110a78138;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_108829950();
          func_0x00010882e080();
          func_0x00010882df0c(uStack_4a0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x00010882987c(&puStack_500);
          func_0x00010882ee40();
          pppppuVar8 = (undefined8 *****)apppuStack_588;
          FUN_108829978(pppppuVar8);
          func_0x000107c33948();
          func_0x00010882f8b4();
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar8;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x00010882987c(&puStack_500);
          func_0x00010882ee40();
          ppppuVar24 = apppuStack_588;
          FUN_108829978();
          func_0x000107c33948();
          func_0x00010882f8b4();
          func_0x00010882edf0();
          pcVar17 = FUN_108828234;
          func_0x000107c33bfc();
          ppppppuStack_3e0 = &ppppppuStack_3e0;
          ppppuStack_3d8 = (undefined8 ****)pcVar17;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_26 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_19 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_27 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_20 != 0);
          }
          puStack_508 = &UNK_10f4bceb9;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_28)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_108829a70();
          func_0x00010882e15c();
          pcStack_478 = FUN_1088299c0;
          ppuStack_470 = &PTR_FUN_110a78150;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_108829a70();
          func_0x00010882e080();
          func_0x00010882df0c(uStack_4a0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x00010882999c(&puStack_500);
          func_0x00010882ee40();
          FUN_108829a98(apppuStack_588);
          func_0x000107c33948();
          pppppuVar8 = (undefined8 *****)&pppuStack_530;
          func_0x000108625e10(pppppuVar8);
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar8;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x00010882999c(&puStack_500);
          func_0x00010882ee40();
          FUN_108829a98(apppuStack_588);
          func_0x000107c33948();
          func_0x000108625e10(&pppuStack_530);
          func_0x00010882edf0();
          pcVar17 = FUN_10882839c;
          func_0x000107c33bfc();
          ppppppuStack_3e0 = &ppppppuStack_3e0;
          ppppuStack_3d8 = (undefined8 ****)pcVar17;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_29 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_21 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_30 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_22 != 0);
          }
          puStack_508 = &UNK_10f4bcee0;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_31)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          ppppuVar25 = pppppuVar11[5];
          func_0x00010882e9f0();
          FUN_108829b90();
          func_0x00010882e15c();
          pcStack_478 = FUN_108829ae0;
          ppuStack_470 = &PTR_FUN_110a78168;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_108829b90();
          func_0x00010882e080();
          func_0x00010882df0c(uStack_4a0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829abc(&puStack_500);
          func_0x00010882ee40();
          FUN_108829bb8(apppuStack_588);
          func_0x000107c33948();
          pppppuVar8 = (undefined8 *****)&pppuStack_530;
          func_0x000108625e34(pppppuVar8);
          func_0x000107c33784();
          if ((bool)in_ZR) {
            return pppppuVar8;
          }
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829abc(&puStack_500);
          func_0x00010882ee40();
          FUN_108829bb8(apppuStack_588);
          func_0x000107c33948();
          func_0x000108625e34(&pppuStack_530);
          func_0x00010882edf0();
          pcVar20 = FUN_108828504;
          func_0x00010882ff54();
          ppppppuStack_3d0 = &ppppppuStack_3e0;
          pcStack_3c8 = pcVar20;
          func_0x000107c337b0();
          func_0x00010882fa64();
          if (ppppuVar24 != (undefined8 ****)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_23 != 0);
          }
          func_0x000107c33ae0();
          ppppuVar21 = pppppuVar11[2];
          func_0x00010882f63c();
          uVar22 = (undefined1)param_5;
          uVar18 = SUB81(ppppuVar21,0);
          pppuStack_560 = ppppuVar25;
          pppcStack_558 = (code ***)ppppuVar24;
          if (ppppuVar24 != (undefined8 ****)0x0) {
            do {
              func_0x000107c3383c();
              uVar22 = (undefined1)param_5;
              uVar18 = SUB81(ppppuVar21,0);
            } while (extraout_w10_24 != 0);
          }
          puStack_508 = &UNK_10f4bcef9;
          puVar15 = auStack_548;
          func_0x00010882f018();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_32)();
          func_0x000107c337e4();
          func_0x000107c338d4();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e78c();
          pcStack_490 = FUN_108829c00;
          ppuStack_488 = &PTR_FUN_110a78180;
          func_0x000107c33a44();
          func_0x00010882e8dc();
          func_0x000107c338ec();
          func_0x00010882ea00();
          func_0x000108829bdc(&puStack_500);
          func_0x00010882ee40();
          pppppuVar8 = (undefined8 *****)&pppuStack_570;
          FUN_108829cb8();
          func_0x000107c33a40();
          func_0x00010882f8b4();
          func_0x000107c337a8(uStack_430);
          if ((bool)in_ZR) {
            return pppppuVar8;
          }
          ___stack_chk_fail();
          func_0x00010882ea00();
          func_0x000108829bdc(&puStack_500);
          func_0x00010882ee40();
          FUN_108829cb8(&pppuStack_570);
          func_0x000107c33a40();
          func_0x00010882f8b4();
          func_0x00010882edf0();
          func_0x000107c33c58(FUN_108828644);
          appppppuStack_540[0] = &ppppppuStack_3d0;
          func_0x000107c337b0();
          ppppuVar24 = (undefined8 ****)*param_8;
          ppppuVar25 = (undefined8 ****)param_8[1];
          pppuStack_6d0 = ppppuVar24;
          pppuStack_6c8 = ppppuVar25;
          uStack_5a0 = extraout_x8_33;
          if (ppppuVar25 != (undefined8 ****)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_25 != 0);
          }
          lStack_6e8 = 0;
          lStack_6e0 = 0;
          lStack_6d8 = 0;
          func_0x000107c29cfc(&lStack_738,pppppuVar8[1],pppppuVar8[2]);
          plStack_720 = (long *)CONCAT71(plStack_720._1_7_,uVar18);
          uStack_708 = (undefined1)param_6;
          uStack_707 = (undefined7)((ulong)param_6 >> 8);
          uStack_700 = (undefined1)param_7;
          puStack_728 = puVar15;
          pcStack_718 = pcVar17;
          uStack_710 = uVar22;
          pppuStack_6f8 = ppppuVar24;
          pppuStack_6f0 = ppppuVar25;
          if (ppppuVar25 != (undefined8 ****)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_26 != 0);
          }
          puStack_6a8 = &UNK_10f4bcf15;
          plVar16 = &lStack_6e8;
          func_0x00010882f338();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_34)();
          func_0x000107c337f8();
          func_0x000107c33960();
          func_0x000107c3396c();
          func_0x000107c33a9c();
          func_0x00010882e55c();
          func_0x00010882f02c();
          lVar7 = lStack_6d8;
          lVar6 = lStack_6e0;
          lVar5 = lStack_6e8;
          pppuVar4 = pppuStack_6f0;
          pppuVar3 = pppuStack_6f8;
          lVar2 = lStack_730;
          lVar1 = lStack_738;
          ppppuVar24 = pppppuVar8[5];
          lStack_6a0 = lStack_738;
          lStack_698 = lStack_730;
          lStack_730 = 0;
          lStack_738 = 0;
          lStack_688 = (long)plStack_720;
          puStack_690 = puStack_728;
          uStack_678 = uStack_710;
          pcStack_680 = pcStack_718;
          uStack_66f = CONCAT17(uStack_700,uStack_707);
          uStack_670 = uStack_708;
          pppuStack_660 = pppuStack_6f8;
          pppuStack_658 = pppuStack_6f0;
          pppuStack_6f8 = (undefined8 ***)0x0;
          pppuStack_6f0 = (undefined8 ****)0x0;
          pcStack_650 = (code *)0x0;
          uStack_640 = 1;
          lStack_638 = lStack_6e8;
          lStack_630 = lStack_6e0;
          lStack_6e8 = 0;
          lStack_6e0 = 0;
          lStack_6d8 = 0;
          lStack_628 = lVar7;
          lStack_618 = lStack_6c0;
          lStack_610 = lStack_6b8;
          lStack_608 = lStack_6b0;
          ppuStack_648 = (undefined **)param_7;
          ppppuStack_620 = pppppuVar8 + 7;
          func_0x00010882f710();
          pcStack_600 = FUN_108829cfc;
          ppuStack_5f8 = &PTR_FUN_110a78198;
          func_0x000107c33a2c();
          *plVar16 = lVar1;
          plVar16[1] = lVar2;
          pcVar17 = pcStack_718;
          puVar15 = puStack_728;
          lStack_6a0 = 0;
          lStack_698 = 0;
          lVar1 = CONCAT71(uStack_70f,uStack_710);
          plVar16[3] = (long)plStack_720;
          plVar16[2] = (long)puVar15;
          plVar16[5] = lVar1;
          plVar16[4] = (long)pcVar17;
          uVar23 = CONCAT17(uStack_708,uStack_70f);
          *(ulong *)((long)plVar16 + 0x31) = CONCAT17(uStack_700,uStack_707);
          *(undefined8 *)((long)plVar16 + 0x29) = uVar23;
          plVar16[8] = (long)pppuVar3;
          plVar16[9] = (long)pppuVar4;
          pcVar17 = pcStack_650;
          pppuStack_660 = (undefined8 ***)0x0;
          pppuStack_658 = (undefined8 ***)0x0;
          lVar1 = CONCAT71(uStack_63f,uStack_640);
          plVar16[0xb] = (long)ppuStack_648;
          plVar16[10] = (long)pcVar17;
          plVar16[0xc] = lVar1;
          plVar16[0xd] = lVar5;
          plVar16[0xe] = lVar6;
          plVar16[0xf] = lVar7;
          lStack_638 = 0;
          lStack_630 = 0;
          lStack_628 = 0;
          plVar16[0x10] = (long)(pppppuVar8 + 7);
          plVar16[0x11] = lStack_6c0;
          plVar16[0x12] = lStack_6b8;
          plVar16[0x13] = lStack_6b0;
          lStack_610 = 0;
          lStack_608 = 0;
          lStack_618 = 0;
          plStack_5f0 = plVar16;
          func_0x000107c339ac(ppppuVar24);
          func_0x00010882fc6c();
          func_0x00010882eb54();
          func_0x000108829cd8(&lStack_6a0);
          func_0x000107c33a04();
          FUN_108829dc0(&lStack_738);
          func_0x000107c280f8(&lStack_6e8);
          pppppuVar8 = (undefined8 *****)&pppuStack_6d0;
          func_0x000108625dec();
          func_0x000107c337a8(uStack_5a0);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010882eb54();
            func_0x000108829cd8(&lStack_6a0);
            func_0x000107c33a04();
            FUN_108829dc0(&lStack_738);
            func_0x000107c280f8(&lStack_6e8);
            func_0x000108625dec(&pppuStack_6d0);
            func_0x00010882edf0();
            pcVar17 = FUN_1088288b4;
            func_0x00010882ff54();
            ppppppuStack_590 = appppppuStack_540;
            apppuStack_588[0] = (undefined8 ***)pcVar17;
            func_0x000107c337b0();
            func_0x00010882fa64();
            if (lVar5 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_27 != 0);
            }
            func_0x000107c33ae0();
            func_0x00010882f63c();
            pcStack_718 = (code *)lVar5;
            plStack_720 = &lStack_6a0;
            if (lVar5 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_28 != 0);
            }
            pppuStack_6c8 = (undefined8 ***)&UNK_10f4bcf38;
            func_0x00010882f018(&uStack_708);
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_35)();
            func_0x000107c337e4();
            func_0x000107c338d4();
            func_0x000107c3396c();
            func_0x00010882f010();
            func_0x00010882e3f0();
            func_0x00010882eed0();
            func_0x00010882e78c();
            pcStack_650 = FUN_108829e04;
            ppuStack_648 = &PTR_FUN_110a781b0;
            func_0x000107c33a44();
            func_0x00010882e8dc();
            func_0x000107c338ec();
            func_0x00010882ea00();
            func_0x000108829de0(&lStack_6c0);
            func_0x00010882ee40();
            FUN_108829ebc(&lStack_730);
            func_0x000107c33a40();
            pppppuVar8 = (undefined8 *****)&pppuStack_6f0;
            func_0x000108625e58();
            func_0x000107c337a8(plStack_5f0);
            if ((bool)in_ZR) {
              return pppppuVar8;
            }
            ___stack_chk_fail();
            func_0x00010882ea00();
            func_0x000108829de0(&lStack_6c0);
            func_0x00010882ee40();
            FUN_108829ebc(&lStack_730);
            func_0x000107c33a40();
            pppppuVar8 = (undefined8 *****)&pppuStack_6f0;
            func_0x000108625e58(pppppuVar8);
            func_0x00010882edf0();
            func_0x00010882eb68(&PTR_DAT_110a77e80);
            func_0x000107c29344(pppppuVar8 + 3);
            func_0x000107c29cf4(lVar5);
            return pppppuVar8;
          }
          return pppppuVar8;
        }
      }
      return pppppuVar8;
    }
  }
  return pppppuVar8;
}



/* Entry: 1088272a0; end: 108827403;  */

undefined8 *****
FUN_1088272a0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long *param_8)

{
  long lVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 in_ZR;
  undefined8 *****pppppuVar8;
  undefined8 *puVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined1 *puVar15;
  long *plVar16;
  code *pcVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  code *pcVar20;
  undefined8 ****ppppuVar21;
  undefined1 uVar22;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  code *extraout_x8_06;
  undefined8 extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  code *extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  code *extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  code *extraout_x8_18;
  code *extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  code *extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  code *extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  code *extraout_x8_28;
  code *extraout_x8_29;
  undefined8 extraout_x8_30;
  code *extraout_x8_31;
  code *extraout_x8_32;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  long unaff_x19;
  undefined8 uVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuVar25;
  long unaff_x22;
  undefined *in_stack_00000088;
  undefined8 in_stack_000000f0;
  code *in_stack_00000118;
  undefined **in_stack_00000120;
  undefined8 in_stack_000001b0;
  long lStack_738;
  long lStack_730;
  undefined1 *puStack_728;
  long *plStack_720;
  code *pcStack_718;
  undefined1 uStack_710;
  undefined7 uStack_70f;
  undefined1 uStack_708;
  undefined7 uStack_707;
  undefined1 uStack_700;
  undefined8 ***pppuStack_6f8;
  undefined8 ***pppuStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  undefined8 ***pppuStack_6d0;
  undefined8 ***pppuStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  undefined *puStack_6a8;
  long lStack_6a0;
  long lStack_698;
  undefined1 *puStack_690;
  long lStack_688;
  code *pcStack_680;
  undefined1 uStack_678;
  undefined1 uStack_670;
  undefined8 uStack_66f;
  undefined8 ***pppuStack_660;
  undefined8 ***pppuStack_658;
  code *pcStack_650;
  undefined **ppuStack_648;
  undefined1 uStack_640;
  undefined7 uStack_63f;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  undefined8 ****ppppuStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  code *pcStack_600;
  undefined **ppuStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5a0;
  undefined8 ******ppppppuStack_590;
  undefined8 ***apppuStack_588 [3];
  undefined8 ***pppuStack_570;
  undefined4 uStack_568;
  undefined8 ***pppuStack_560;
  code ***pppcStack_558;
  undefined1 auStack_550 [8];
  undefined1 auStack_548 [8];
  undefined8 ******appppppuStack_540 [2];
  undefined8 ***pppuStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined1 auStack_4f8 [88];
  undefined8 uStack_4a0;
  code *pcStack_490;
  undefined **ppuStack_488;
  undefined8 uStack_480;
  code *pcStack_478;
  undefined **ppuStack_470;
  code *pcStack_468;
  undefined **ppuStack_460;
  undefined8 uStack_430;
  undefined8 uStack_400;
  undefined8 ****ppppuStack_3f8;
  undefined8 ****ppppuStack_3f0;
  undefined8 ***pppuStack_3e8;
  undefined8 ******ppppppuStack_3e0;
  undefined8 ****ppppuStack_3d8;
  undefined8 ******ppppppuStack_3d0;
  code *pcStack_3c8;
  undefined8 ****appppuStack_3b8 [2];
  undefined8 ***pppuStack_3a8;
  long lStack_3a0;
  undefined1 uStack_398;
  undefined8 ****ppppuStack_390;
  long lStack_388;
  undefined1 auStack_378 [8];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 ***apppuStack_360 [2];
  undefined8 ***pppuStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  char *pcStack_328;
  undefined1 auStack_320 [8];
  undefined *puStack_318;
  code *pcStack_310;
  undefined **ppuStack_308;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined1 uStack_2c8;
  code *pcStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_260;
  undefined8 ******ppppppuStack_250;
  code *pcStack_248;
  undefined8 ****ppppuStack_1e0;
  code *pcStack_1d8;
  undefined8 ***apppuStack_1d0 [2];
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined1 auStack_1b0 [32];
  undefined8 auStack_190 [4];
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  char *pcStack_140;
  undefined1 auStack_138 [104];
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 **ppuStack_10;
  code *pcStack_8;
  
  func_0x000107c33bfc();
  func_0x000107c3378c();
  func_0x00010882eda8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882eb94();
  func_0x00010882f2ec();
  func_0x000107c27994();
  func_0x00010882eca4();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000088 = &UNK_10f4bce0f;
  func_0x00010882ebcc();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_01)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_108828e70();
  func_0x00010882e15c();
  in_stack_00000118 = FUN_108828dc0;
  in_stack_00000120 = &PTR_FUN_110a78048;
  func_0x000107c339b8();
  func_0x00010882f2a0();
  FUN_108828e70();
  func_0x00010882e080();
  func_0x00010882df0c(in_stack_000000f0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x000108828d9c(&stack0x00000090);
  func_0x00010882ee40();
  pppppuVar8 = (undefined8 *****)&stack0x00000008;
  FUN_108828e98(pppppuVar8);
  func_0x000107c33948();
  func_0x00010882f144();
  func_0x000107c33784();
  if ((bool)in_ZR) {
    return pppppuVar8;
  }
  ___stack_chk_fail();
  func_0x00010882e104();
  func_0x000108828d9c(&stack0x00000090);
  func_0x00010882ee40();
  FUN_108828e98(&stack0x00000008);
  func_0x000107c33948();
  func_0x00010882f144();
  func_0x00010882edf0();
  pppppuVar8 = (undefined8 *****)apppuStack_1d0;
  pcStack_8 = FUN_108827404;
  ppuStack_10 = (undefined8 **)&stack0x000001b0;
  func_0x000107c3378c();
  uVar23 = *param_1;
  lVar1 = param_1[1];
  uStack_170 = uVar23;
  lStack_168 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882fbf8();
  uStack_1c0 = uVar23;
  lStack_1b8 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_02 != 0);
  }
  func_0x000107c279a0(auStack_1b0,param_3);
  pcStack_140 = "onFeedExited";
  puVar9 = auStack_190;
  func_0x00010882f098();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_02)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f090();
  func_0x00010882e42c();
  func_0x00010882eef4();
  uVar23 = *(undefined8 *)(unaff_x19 + 0x28);
  func_0x00010882ea30();
  FUN_108828f94();
  func_0x00010882f0bc();
  func_0x000107c337a0();
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uStack_d0 = extraout_x9;
  func_0x00010882e62c();
  pcStack_a8 = FUN_108828edc;
  ppuStack_a0 = &PTR_FUN_110a78060;
  func_0x000107c339e0();
  func_0x00010882f34c();
  FUN_108828f94();
  func_0x00010882e13c();
  func_0x00010882df40(uStack_d0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x000108828eb8(auStack_138);
  func_0x00010882ee40();
  FUN_108828fd4(apppuStack_1d0);
  func_0x000107c33948();
  func_0x00010882f144();
  func_0x000107c33784();
  if ((bool)in_ZR) {
    return pppppuVar8;
  }
  ___stack_chk_fail();
  func_0x00010882e104();
  func_0x000108828eb8(auStack_138);
  func_0x00010882ee40();
  FUN_108828fd4(apppuStack_1d0);
  func_0x000107c33948();
  func_0x00010882f144();
  func_0x00010882edf0();
  pcStack_1d8 = FUN_108827598;
  ppppuStack_1e0 = (undefined8 ****)&ppuStack_10;
  func_0x000107c33a68();
  func_0x00010882e2d0();
  ppppuVar24 = (undefined8 ****)*puVar9;
  lVar1 = puVar9[1];
  pppuStack_350 = ppppuVar24;
  lStack_348 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_03 != 0);
  }
  func_0x00010882eee8();
  func_0x00010882efb8();
  func_0x000107c29cfc();
  pppuStack_3a8 = ppppuVar24;
  lStack_3a0 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_04 != 0);
  }
  uStack_398 = (undefined1)uVar23;
  func_0x000107c279a0(&ppppuStack_390,param_3);
  pcStack_328 = "onFeedEntered";
  func_0x000107c29bbc(&uStack_370,&pcStack_328);
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_03)();
  func_0x00010882e2e8();
  func_0x00010882e728();
  func_0x000107c3396c();
  func_0x00010882f9d4();
  func_0x00010882ed04();
  func_0x00010882f3dc();
  func_0x00010882f698();
  FUN_1088290dc();
  uStack_2d8 = 0;
  uStack_2c8 = 1;
  ppuStack_2b8 = (undefined **)uStack_368;
  pcStack_2c0 = (code *)uStack_370;
  lStack_2d0 = param_3;
  func_0x00010882eee8(unaff_x19 + 0x38);
  uStack_298 = puStack_338;
  ppuStack_2a0 = (undefined **)uStack_340;
  uStack_290 = uStack_330;
  uStack_2b0 = extraout_x9_00;
  pcStack_2a8 = (code *)extraout_x8_04;
  func_0x000107c33b64();
  pcStack_288 = FUN_108829020;
  ppuStack_280 = &PTR_FUN_110a78078;
  func_0x000107c33a48();
  func_0x00010882ff48();
  FUN_1088290dc();
  uVar23 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(param_3 + 0x48) = uVar23;
  *(undefined8 *)(param_3 + 0x58) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined ***)(param_3 + 0x68) = ppuStack_2b8;
  *(code **)(param_3 + 0x60) = pcStack_2c0;
  *(undefined8 *)(param_3 + 0x70) = uStack_2b0;
  *(undefined8 *)(unaff_x22 + 0x68) = 0;
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0;
  *(undefined ***)(param_3 + 0x80) = ppuStack_2a0;
  *(code **)(param_3 + 0x78) = pcStack_2a8;
  *(undefined8 *)(param_3 + 0x90) = uStack_290;
  *(undefined8 *)(param_3 + 0x88) = uStack_298;
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  *(undefined8 *)(unaff_x22 + 0x80) = 0;
  func_0x00010882e960();
  func_0x00010882e828();
  func_0x00010882e4b4();
  func_0x000108828ffc(auStack_320);
  func_0x000107c33a4c();
  FUN_108829124(appppuStack_3b8);
  func_0x00010882ee74();
  pppppuVar8 = (undefined8 *****)&pppuStack_350;
  func_0x000104be3970(pppppuVar8);
  func_0x00010882e28c();
  if ((bool)in_ZR) {
    return pppppuVar8;
  }
  ___stack_chk_fail();
  func_0x00010882e2fc();
  func_0x000108828ffc(auStack_320);
  func_0x000107c33a4c();
  FUN_108829124(appppuStack_3b8);
  func_0x00010882ee74();
  ppppuVar24 = &pppuStack_350;
  func_0x000104be3970();
  func_0x00010882edf0();
  pcVar17 = FUN_1088277a4;
  func_0x000107c33b24();
  ppppppuStack_250 = (undefined8 ******)&ppppuStack_1e0;
  pcStack_248 = pcVar17;
  func_0x000107c337b0();
  uStack_2b0 = extraout_x8_05;
  func_0x000107c33b9c();
  func_0x000107c29cfc(appppuStack_3b8,ppppuVar24[1],ppppuVar24[2]);
  puStack_318 = &UNK_10f4bce23;
  func_0x000107c338f0();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_06)();
  func_0x000107c337f8();
  func_0x000107c338e4();
  func_0x000107c3396c();
  func_0x000107c33a9c();
  func_0x000107c33814();
  func_0x00010882f02c();
  func_0x000107c33794();
  pcStack_310 = FUN_10882916c;
  ppuStack_308 = &PTR_FUN_110a78090;
  func_0x000107c33a64();
  func_0x000107c33780();
  func_0x000107c338f4();
  func_0x000107c337b8();
  pppppuVar8 = &ppppuStack_390;
  func_0x00010882914c();
  func_0x000107c33a04();
  func_0x00010882f0f8();
  func_0x000107c33a50();
  func_0x000107c337a8(uStack_2b0);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c337b8();
    pppppuVar10 = &ppppuStack_390;
    func_0x00010882914c();
    func_0x000107c33a04();
    func_0x00010882f0f8();
    func_0x000107c33a50();
    func_0x00010882edf0();
    pcVar17 = FUN_1088278b4;
    func_0x000107c33b24();
    ppppppuStack_250 = &ppppppuStack_250;
    pcStack_248 = pcVar17;
    func_0x000107c337b0();
    uStack_2b0 = extraout_x8_07;
    func_0x000107c33b9c();
    pppppuVar11 = appppuStack_3b8;
    func_0x000107c29cfc(pppppuVar11,pppppuVar10[1],pppppuVar10[2]);
    puStack_318 = &UNK_10f4bce35;
    func_0x000107c338f0();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_08)();
    func_0x000107c337f8();
    func_0x000107c338e4();
    func_0x000107c3396c();
    func_0x000107c33a9c();
    func_0x000107c33814();
    pppppuVar10 = pppppuVar8 + 7;
    func_0x00010882f02c();
    func_0x000107c33794();
    pcStack_310 = FUN_108829240;
    ppuStack_308 = &PTR_FUN_110a780a8;
    func_0x000107c33a64();
    func_0x000107c33780();
    func_0x000107c338f4();
    func_0x000107c337b8();
    pppppuVar8 = &ppppuStack_390;
    FUN_108829220();
    func_0x000107c33a04();
    func_0x00010882f0f8();
    func_0x000107c33a50();
    func_0x000107c337a8(uStack_2b0);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107c337b8();
      FUN_108829220(&ppppuStack_390);
      func_0x000107c33a04();
      func_0x00010882f0f8();
      func_0x000107c33a50();
      func_0x00010882edf0();
      func_0x00010882ff54();
      func_0x000107c337b0();
      func_0x00010882fa64();
      if (param_3 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_05 != 0);
      }
      func_0x000107c33ae0();
      ppppuVar24 = pppppuVar8[2];
      func_0x00010882f63c();
      ppppuStack_390 = pppppuVar11;
      lStack_388 = param_3;
      if (param_3 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_06 != 0);
      }
      puStack_338 = &UNK_10f4bce52;
      func_0x00010882f018(auStack_378);
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_09)();
      func_0x000107c337e4();
      func_0x000107c338d4();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e78c();
      pcStack_2c0 = FUN_108829314;
      ppuStack_2b8 = &PTR_FUN_110a780c0;
      func_0x000107c33a44();
      func_0x00010882e8dc();
      func_0x000107c338ec();
      func_0x00010882ea00();
      FUN_1088292f0(&uStack_330);
      func_0x00010882ee40();
      FUN_1088293cc(&lStack_3a0);
      func_0x000107c33a40();
      pppppuVar11 = (undefined8 *****)apppuStack_360;
      func_0x000108625da4();
      func_0x000107c337a8(uStack_260);
      if ((bool)in_ZR) {
        return pppppuVar11;
      }
      ___stack_chk_fail();
      func_0x00010882ea00();
      FUN_1088292f0(&uStack_330);
      func_0x00010882ee40();
      FUN_1088293cc(&lStack_3a0);
      func_0x000107c33a40();
      func_0x000108625da4(apppuStack_360);
      func_0x00010882edf0();
      func_0x000107c33bfc();
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_10 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_07 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882ed88();
      func_0x00010882eca4();
      if (extraout_x8_11 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_08 != 0);
      }
      puStack_338 = &UNK_10f4bce6d;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_12)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e9f0();
      FUN_1088294c0();
      func_0x00010882e15c();
      pcStack_2a8 = FUN_108829410;
      ppuStack_2a0 = &PTR_FUN_110a780d8;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_1088294c0();
      func_0x00010882e080();
      func_0x00010882df0c(lStack_2d0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x0001088293ec(&uStack_330);
      func_0x00010882ee40();
      pppppuVar12 = appppuStack_3b8;
      FUN_1088294e8(pppppuVar12);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x000107c33784();
      if ((bool)in_ZR) {
        return pppppuVar12;
      }
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x0001088293ec(&uStack_330);
      func_0x00010882ee40();
      ppppppuVar13 = (undefined8 ******)appppuStack_3b8;
      FUN_1088294e8();
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x00010882edf0();
      func_0x000107c33bfc();
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_13 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_09 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882ed88();
      func_0x00010882eca4();
      if (extraout_x8_14 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_10 != 0);
      }
      puStack_338 = &UNK_10f4bce85;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_15)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e9f0();
      FUN_1088295dc();
      func_0x00010882e15c();
      pcStack_2a8 = FUN_10882952c;
      ppuStack_2a0 = &PTR_FUN_110a780f0;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_1088295dc();
      func_0x00010882e080();
      func_0x00010882df0c(lStack_2d0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x000108829508(&uStack_330);
      func_0x00010882ee40();
      pppppuVar12 = appppuStack_3b8;
      FUN_108829604(pppppuVar12);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x000107c33784();
      if ((bool)in_ZR) {
        return pppppuVar12;
      }
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108829508(&uStack_330);
      func_0x00010882ee40();
      FUN_108829604(appppuStack_3b8);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x00010882edf0();
      pcVar17 = FUN_108827dcc;
      func_0x000107c33bfc();
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_16 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_11 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882f2ec();
      func_0x000107c27994();
      func_0x00010882eca4();
      uVar19 = SUB84(ppppuVar24,0);
      if (extraout_x8_17 != 0) {
        do {
          func_0x000107c3383c();
          uVar19 = SUB84(ppppuVar24,0);
        } while (extraout_w10_12 != 0);
      }
      puStack_338 = &UNK_10f4bce90;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_18)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      ppppuVar24 = pppppuVar11[5];
      func_0x00010882e9f0();
      FUN_1088296f8();
      func_0x00010882e15c();
      pcStack_2a8 = FUN_108829648;
      ppuStack_2a0 = &PTR_FUN_110a78108;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_1088296f8();
      func_0x00010882e080();
      func_0x00010882df0c(lStack_2d0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x000108829624(&uStack_330);
      func_0x00010882ee40();
      FUN_108829720(appppuStack_3b8);
      func_0x000107c33948();
      pppppuVar12 = (undefined8 *****)apppuStack_360;
      func_0x000108625dc8(pppppuVar12);
      func_0x000107c33784();
      if ((bool)in_ZR) {
        return pppppuVar12;
      }
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108829624(&uStack_330);
      func_0x00010882ee40();
      FUN_108829720(appppuStack_3b8);
      func_0x000107c33948();
      func_0x000108625dc8(apppuStack_360);
      func_0x00010882edf0();
      pppppppuVar14 = &ppppppuStack_590;
      uStack_400 = 1;
      pcStack_3c8 = FUN_108827f38;
      ppppuStack_3f8 = pppppuVar8 + 7;
      ppppuStack_3f0 = pppppuVar10;
      pppuStack_3e8 = ppppuVar24;
      ppppppuStack_3e0 = ppppppuVar13;
      ppppuStack_3d8 = pppppuVar11;
      ppppppuStack_3d0 = (undefined8 ******)&stack0xfffffffffffffdf0;
      func_0x000107c3378c();
      lStack_528 = *(long *)(pcVar17 + 8);
      pppuStack_530 = *(undefined8 ****)pcVar17;
      if (*(long *)(pcVar17 + 8) != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_13 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882fbf8();
      func_0x00010882e694();
      pppcStack_558 = (code ***)lStack_528;
      pppuStack_560 = pppuStack_530;
      uStack_568 = uVar19;
      if (lStack_528 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_14 != 0);
      }
      puStack_500 = &UNK_10f4b12f2;
      func_0x00010882f098(auStack_550);
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_19)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f090();
      func_0x00010882e42c();
      func_0x00010882eef4();
      func_0x00010882ea30();
      FUN_108829820();
      func_0x00010882f0bc();
      func_0x000107c337a0();
      pcStack_478 = (code *)uStack_518;
      uStack_480 = uStack_520;
      pcStack_490 = (code *)extraout_x9_01;
      func_0x00010882e62c();
      pcStack_468 = FUN_108829768;
      ppuStack_460 = &PTR_FUN_110a78120;
      func_0x000107c339e0();
      func_0x00010882f34c();
      FUN_108829820();
      func_0x00010882e13c();
      func_0x00010882df40(pcStack_490);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x000108829744(auStack_4f8);
      func_0x00010882ee40();
      FUN_10882985c(&ppppppuStack_590);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x000107c33784();
      if ((bool)in_ZR) {
        return pppppppuVar14;
      }
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108829744(auStack_4f8);
      func_0x00010882ee40();
      FUN_10882985c(&ppppppuStack_590);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x00010882edf0();
      pcVar17 = FUN_1088280d4;
      func_0x000107c33bfc();
      ppppppuStack_3e0 = &ppppppuStack_3d0;
      ppppuStack_3d8 = (undefined8 ****)pcVar17;
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_20 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_15 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882ed88();
      func_0x00010882eca4();
      if (extraout_x8_21 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_16 != 0);
      }
      puStack_508 = &UNK_10f4bcea8;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_22)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e9f0();
      FUN_108829950();
      func_0x00010882e15c();
      pcStack_478 = FUN_1088298a0;
      ppuStack_470 = &PTR_FUN_110a78138;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_108829950();
      func_0x00010882e080();
      func_0x00010882df0c(uStack_4a0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x00010882987c(&puStack_500);
      func_0x00010882ee40();
      pppppuVar8 = (undefined8 *****)apppuStack_588;
      FUN_108829978(pppppuVar8);
      func_0x000107c33948();
      func_0x00010882f8b4();
      func_0x000107c33784();
      if ((bool)in_ZR) {
        return pppppuVar8;
      }
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x00010882987c(&puStack_500);
      func_0x00010882ee40();
      ppppuVar24 = apppuStack_588;
      FUN_108829978();
      func_0x000107c33948();
      func_0x00010882f8b4();
      func_0x00010882edf0();
      pcVar17 = FUN_108828234;
      func_0x000107c33bfc();
      ppppppuStack_3e0 = &ppppppuStack_3e0;
      ppppuStack_3d8 = (undefined8 ****)pcVar17;
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_23 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_17 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882ed88();
      func_0x00010882eca4();
      if (extraout_x8_24 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_18 != 0);
      }
      puStack_508 = &UNK_10f4bceb9;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_25)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e9f0();
      FUN_108829a70();
      func_0x00010882e15c();
      pcStack_478 = FUN_1088299c0;
      ppuStack_470 = &PTR_FUN_110a78150;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_108829a70();
      func_0x00010882e080();
      func_0x00010882df0c(uStack_4a0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x00010882999c(&puStack_500);
      func_0x00010882ee40();
      FUN_108829a98(apppuStack_588);
      func_0x000107c33948();
      pppppuVar8 = (undefined8 *****)&pppuStack_530;
      func_0x000108625e10(pppppuVar8);
      func_0x000107c33784();
      if ((bool)in_ZR) {
        return pppppuVar8;
      }
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x00010882999c(&puStack_500);
      func_0x00010882ee40();
      FUN_108829a98(apppuStack_588);
      func_0x000107c33948();
      func_0x000108625e10(&pppuStack_530);
      func_0x00010882edf0();
      pcVar17 = FUN_10882839c;
      func_0x000107c33bfc();
      ppppppuStack_3e0 = &ppppppuStack_3e0;
      ppppuStack_3d8 = (undefined8 ****)pcVar17;
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_26 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_19 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882ed88();
      func_0x00010882eca4();
      if (extraout_x8_27 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_20 != 0);
      }
      puStack_508 = &UNK_10f4bcee0;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_28)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      ppppuVar25 = pppppuVar11[5];
      func_0x00010882e9f0();
      FUN_108829b90();
      func_0x00010882e15c();
      pcStack_478 = FUN_108829ae0;
      ppuStack_470 = &PTR_FUN_110a78168;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_108829b90();
      func_0x00010882e080();
      func_0x00010882df0c(uStack_4a0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x000108829abc(&puStack_500);
      func_0x00010882ee40();
      FUN_108829bb8(apppuStack_588);
      func_0x000107c33948();
      pppppuVar8 = (undefined8 *****)&pppuStack_530;
      func_0x000108625e34(pppppuVar8);
      func_0x000107c33784();
      if ((bool)in_ZR) {
        return pppppuVar8;
      }
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108829abc(&puStack_500);
      func_0x00010882ee40();
      FUN_108829bb8(apppuStack_588);
      func_0x000107c33948();
      func_0x000108625e34(&pppuStack_530);
      func_0x00010882edf0();
      pcVar20 = FUN_108828504;
      func_0x00010882ff54();
      ppppppuStack_3d0 = &ppppppuStack_3e0;
      pcStack_3c8 = pcVar20;
      func_0x000107c337b0();
      func_0x00010882fa64();
      if (ppppuVar24 != (undefined8 ****)0x0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_21 != 0);
      }
      func_0x000107c33ae0();
      ppppuVar21 = pppppuVar11[2];
      func_0x00010882f63c();
      uVar22 = (undefined1)param_5;
      uVar18 = SUB81(ppppuVar21,0);
      pppuStack_560 = ppppuVar25;
      pppcStack_558 = (code ***)ppppuVar24;
      if (ppppuVar24 != (undefined8 ****)0x0) {
        do {
          func_0x000107c3383c();
          uVar22 = (undefined1)param_5;
          uVar18 = SUB81(ppppuVar21,0);
        } while (extraout_w10_22 != 0);
      }
      puStack_508 = &UNK_10f4bcef9;
      puVar15 = auStack_548;
      func_0x00010882f018();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_29)();
      func_0x000107c337e4();
      func_0x000107c338d4();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e78c();
      pcStack_490 = FUN_108829c00;
      ppuStack_488 = &PTR_FUN_110a78180;
      func_0x000107c33a44();
      func_0x00010882e8dc();
      func_0x000107c338ec();
      func_0x00010882ea00();
      func_0x000108829bdc(&puStack_500);
      func_0x00010882ee40();
      pppppuVar8 = (undefined8 *****)&pppuStack_570;
      FUN_108829cb8();
      func_0x000107c33a40();
      func_0x00010882f8b4();
      func_0x000107c337a8(uStack_430);
      if ((bool)in_ZR) {
        return pppppuVar8;
      }
      ___stack_chk_fail();
      func_0x00010882ea00();
      func_0x000108829bdc(&puStack_500);
      func_0x00010882ee40();
      FUN_108829cb8(&pppuStack_570);
      func_0x000107c33a40();
      func_0x00010882f8b4();
      func_0x00010882edf0();
      func_0x000107c33c58(FUN_108828644);
      appppppuStack_540[0] = &ppppppuStack_3d0;
      func_0x000107c337b0();
      ppppuVar24 = (undefined8 ****)*param_8;
      ppppuVar25 = (undefined8 ****)param_8[1];
      pppuStack_6d0 = ppppuVar24;
      pppuStack_6c8 = ppppuVar25;
      uStack_5a0 = extraout_x8_30;
      if (ppppuVar25 != (undefined8 ****)0x0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_23 != 0);
      }
      lStack_6e8 = 0;
      lStack_6e0 = 0;
      lStack_6d8 = 0;
      func_0x000107c29cfc(&lStack_738,pppppuVar8[1],pppppuVar8[2]);
      plStack_720 = (long *)CONCAT71(plStack_720._1_7_,uVar18);
      uStack_708 = (undefined1)param_6;
      uStack_707 = (undefined7)((ulong)param_6 >> 8);
      uStack_700 = (undefined1)param_7;
      puStack_728 = puVar15;
      pcStack_718 = pcVar17;
      uStack_710 = uVar22;
      pppuStack_6f8 = ppppuVar24;
      pppuStack_6f0 = ppppuVar25;
      if (ppppuVar25 != (undefined8 ****)0x0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_24 != 0);
      }
      puStack_6a8 = &UNK_10f4bcf15;
      plVar16 = &lStack_6e8;
      func_0x00010882f338();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_31)();
      func_0x000107c337f8();
      func_0x000107c33960();
      func_0x000107c3396c();
      func_0x000107c33a9c();
      func_0x00010882e55c();
      func_0x00010882f02c();
      lVar7 = lStack_6d8;
      lVar6 = lStack_6e0;
      lVar5 = lStack_6e8;
      pppuVar4 = pppuStack_6f0;
      pppuVar3 = pppuStack_6f8;
      lVar2 = lStack_730;
      lVar1 = lStack_738;
      ppppuVar24 = pppppuVar8[5];
      lStack_6a0 = lStack_738;
      lStack_698 = lStack_730;
      lStack_730 = 0;
      lStack_738 = 0;
      lStack_688 = (long)plStack_720;
      puStack_690 = puStack_728;
      uStack_678 = uStack_710;
      pcStack_680 = pcStack_718;
      uStack_66f = CONCAT17(uStack_700,uStack_707);
      uStack_670 = uStack_708;
      pppuStack_660 = pppuStack_6f8;
      pppuStack_658 = pppuStack_6f0;
      pppuStack_6f8 = (undefined8 ***)0x0;
      pppuStack_6f0 = (undefined8 ****)0x0;
      pcStack_650 = (code *)0x0;
      uStack_640 = 1;
      lStack_638 = lStack_6e8;
      lStack_630 = lStack_6e0;
      lStack_6e8 = 0;
      lStack_6e0 = 0;
      lStack_6d8 = 0;
      lStack_628 = lVar7;
      lStack_618 = lStack_6c0;
      lStack_610 = lStack_6b8;
      lStack_608 = lStack_6b0;
      ppuStack_648 = (undefined **)param_7;
      ppppuStack_620 = pppppuVar8 + 7;
      func_0x00010882f710();
      pcStack_600 = FUN_108829cfc;
      ppuStack_5f8 = &PTR_FUN_110a78198;
      func_0x000107c33a2c();
      *plVar16 = lVar1;
      plVar16[1] = lVar2;
      pcVar17 = pcStack_718;
      puVar15 = puStack_728;
      lStack_6a0 = 0;
      lStack_698 = 0;
      lVar1 = CONCAT71(uStack_70f,uStack_710);
      plVar16[3] = (long)plStack_720;
      plVar16[2] = (long)puVar15;
      plVar16[5] = lVar1;
      plVar16[4] = (long)pcVar17;
      uVar23 = CONCAT17(uStack_708,uStack_70f);
      *(ulong *)((long)plVar16 + 0x31) = CONCAT17(uStack_700,uStack_707);
      *(undefined8 *)((long)plVar16 + 0x29) = uVar23;
      plVar16[8] = (long)pppuVar3;
      plVar16[9] = (long)pppuVar4;
      pcVar17 = pcStack_650;
      pppuStack_660 = (undefined8 ***)0x0;
      pppuStack_658 = (undefined8 ***)0x0;
      lVar1 = CONCAT71(uStack_63f,uStack_640);
      plVar16[0xb] = (long)ppuStack_648;
      plVar16[10] = (long)pcVar17;
      plVar16[0xc] = lVar1;
      plVar16[0xd] = lVar5;
      plVar16[0xe] = lVar6;
      plVar16[0xf] = lVar7;
      lStack_638 = 0;
      lStack_630 = 0;
      lStack_628 = 0;
      plVar16[0x10] = (long)(pppppuVar8 + 7);
      plVar16[0x11] = lStack_6c0;
      plVar16[0x12] = lStack_6b8;
      plVar16[0x13] = lStack_6b0;
      lStack_610 = 0;
      lStack_608 = 0;
      lStack_618 = 0;
      plStack_5f0 = plVar16;
      func_0x000107c339ac(ppppuVar24);
      func_0x00010882fc6c();
      func_0x00010882eb54();
      func_0x000108829cd8(&lStack_6a0);
      func_0x000107c33a04();
      FUN_108829dc0(&lStack_738);
      func_0x000107c280f8(&lStack_6e8);
      pppppuVar8 = (undefined8 *****)&pppuStack_6d0;
      func_0x000108625dec();
      func_0x000107c337a8(uStack_5a0);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882eb54();
        func_0x000108829cd8(&lStack_6a0);
        func_0x000107c33a04();
        FUN_108829dc0(&lStack_738);
        func_0x000107c280f8(&lStack_6e8);
        func_0x000108625dec(&pppuStack_6d0);
        func_0x00010882edf0();
        pcVar17 = FUN_1088288b4;
        func_0x00010882ff54();
        ppppppuStack_590 = appppppuStack_540;
        apppuStack_588[0] = (undefined8 ***)pcVar17;
        func_0x000107c337b0();
        func_0x00010882fa64();
        if (lVar5 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_25 != 0);
        }
        func_0x000107c33ae0();
        func_0x00010882f63c();
        pcStack_718 = (code *)lVar5;
        plStack_720 = &lStack_6a0;
        if (lVar5 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_26 != 0);
        }
        pppuStack_6c8 = (undefined8 ***)&UNK_10f4bcf38;
        func_0x00010882f018(&uStack_708);
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_32)();
        func_0x000107c337e4();
        func_0x000107c338d4();
        func_0x000107c3396c();
        func_0x00010882f010();
        func_0x00010882e3f0();
        func_0x00010882eed0();
        func_0x00010882e78c();
        pcStack_650 = FUN_108829e04;
        ppuStack_648 = &PTR_FUN_110a781b0;
        func_0x000107c33a44();
        func_0x00010882e8dc();
        func_0x000107c338ec();
        func_0x00010882ea00();
        func_0x000108829de0(&lStack_6c0);
        func_0x00010882ee40();
        FUN_108829ebc(&lStack_730);
        func_0x000107c33a40();
        pppppuVar8 = (undefined8 *****)&pppuStack_6f0;
        func_0x000108625e58();
        func_0x000107c337a8(plStack_5f0);
        if ((bool)in_ZR) {
          return pppppuVar8;
        }
        ___stack_chk_fail();
        func_0x00010882ea00();
        func_0x000108829de0(&lStack_6c0);
        func_0x00010882ee40();
        FUN_108829ebc(&lStack_730);
        func_0x000107c33a40();
        pppppuVar8 = (undefined8 *****)&pppuStack_6f0;
        func_0x000108625e58(pppppuVar8);
        func_0x00010882edf0();
        func_0x00010882eb68(&PTR_DAT_110a77e80);
        func_0x000107c29344(pppppuVar8 + 3);
        func_0x000107c29cf4(lVar5);
        return pppppuVar8;
      }
      return pppppuVar8;
    }
  }
  return pppppuVar8;
}



/* Entry: 108827404; end: 108827597;  */

undefined8 *****
FUN_108827404(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long *param_8)

{
  long lVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 in_ZR;
  undefined8 *puVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined1 *puVar15;
  long *plVar16;
  code *pcVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  code *pcVar20;
  undefined8 ****ppppuVar21;
  undefined1 uVar22;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x8_03;
  undefined8 extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  code *extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  code *extraout_x8_15;
  code *extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  code *extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  code *extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  code *extraout_x8_25;
  code *extraout_x8_26;
  undefined8 extraout_x8_27;
  code *extraout_x8_28;
  code *extraout_x8_29;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  long unaff_x19;
  undefined8 uVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuVar25;
  long unaff_x22;
  long lStack_738;
  long lStack_730;
  undefined1 *puStack_728;
  long *plStack_720;
  code *pcStack_718;
  undefined1 uStack_710;
  undefined7 uStack_70f;
  undefined1 uStack_708;
  undefined7 uStack_707;
  undefined1 uStack_700;
  undefined8 ***pppuStack_6f8;
  undefined8 ***pppuStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  undefined8 ***pppuStack_6d0;
  undefined8 ***pppuStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  undefined *puStack_6a8;
  long lStack_6a0;
  long lStack_698;
  undefined1 *puStack_690;
  long lStack_688;
  code *pcStack_680;
  undefined1 uStack_678;
  undefined1 uStack_670;
  undefined8 uStack_66f;
  undefined8 ***pppuStack_660;
  undefined8 ***pppuStack_658;
  code *pcStack_650;
  undefined **ppuStack_648;
  undefined1 uStack_640;
  undefined7 uStack_63f;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  undefined8 ****ppppuStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  code *pcStack_600;
  undefined **ppuStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5a0;
  undefined8 ******ppppppuStack_590;
  undefined8 ***apppuStack_588 [3];
  undefined8 ***pppuStack_570;
  undefined4 uStack_568;
  undefined8 ***pppuStack_560;
  code ***pppcStack_558;
  undefined1 auStack_550 [8];
  undefined1 auStack_548 [8];
  undefined8 ******appppppuStack_540 [2];
  undefined8 ***pppuStack_530;
  long lStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined1 auStack_4f8 [88];
  undefined8 uStack_4a0;
  code *pcStack_490;
  undefined **ppuStack_488;
  undefined8 uStack_480;
  code *pcStack_478;
  undefined **ppuStack_470;
  code *pcStack_468;
  undefined **ppuStack_460;
  undefined8 uStack_430;
  undefined8 uStack_400;
  undefined8 ****ppppuStack_3f8;
  undefined8 ****ppppuStack_3f0;
  undefined8 ***pppuStack_3e8;
  undefined8 ******ppppppuStack_3e0;
  undefined8 ****ppppuStack_3d8;
  undefined8 ******ppppppuStack_3d0;
  code *pcStack_3c8;
  undefined8 ****appppuStack_3b8 [2];
  undefined8 ***pppuStack_3a8;
  long lStack_3a0;
  undefined1 uStack_398;
  undefined8 ****ppppuStack_390;
  long lStack_388;
  undefined1 auStack_378 [8];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 ***apppuStack_360 [2];
  undefined8 ***pppuStack_350;
  long lStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  char *pcStack_328;
  undefined1 auStack_320 [8];
  undefined *puStack_318;
  code *pcStack_310;
  undefined **ppuStack_308;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined1 uStack_2c8;
  code *pcStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_260;
  undefined8 ******ppppppuStack_250;
  code *pcStack_248;
  undefined8 ****ppppuStack_1e0;
  code *pcStack_1d8;
  undefined8 ***apppuStack_1d0 [2];
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined1 auStack_1b0 [32];
  undefined8 auStack_190 [4];
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  char *pcStack_140;
  undefined1 auStack_138 [104];
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  
  pppppuVar9 = (undefined8 *****)apppuStack_1d0;
  func_0x000107c3378c();
  uVar23 = *param_2;
  lVar1 = param_2[1];
  uStack_170 = uVar23;
  lStack_168 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882fbf8();
  uStack_1c0 = uVar23;
  lStack_1b8 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c279a0(auStack_1b0,param_3);
  pcStack_140 = "onFeedExited";
  puVar8 = auStack_190;
  func_0x00010882f098();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f090();
  func_0x00010882e42c();
  func_0x00010882eef4();
  uVar23 = *(undefined8 *)(unaff_x19 + 0x28);
  func_0x00010882ea30();
  FUN_108828f94();
  func_0x00010882f0bc();
  func_0x000107c337a0();
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uStack_d0 = extraout_x9;
  func_0x00010882e62c();
  pcStack_a8 = FUN_108828edc;
  ppuStack_a0 = &PTR_FUN_110a78060;
  func_0x000107c339e0();
  func_0x00010882f34c();
  FUN_108828f94();
  func_0x00010882e13c();
  func_0x00010882df40(uStack_d0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x000108828eb8(auStack_138);
  func_0x00010882ee40();
  FUN_108828fd4(apppuStack_1d0);
  func_0x000107c33948();
  func_0x00010882f144();
  func_0x000107c33784();
  if ((bool)in_ZR) {
    return pppppuVar9;
  }
  ___stack_chk_fail();
  func_0x00010882e104();
  func_0x000108828eb8(auStack_138);
  func_0x00010882ee40();
  FUN_108828fd4(apppuStack_1d0);
  func_0x000107c33948();
  func_0x00010882f144();
  func_0x00010882edf0();
  pcStack_1d8 = FUN_108827598;
  ppppuStack_1e0 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x000107c33a68();
  func_0x00010882e2d0();
  ppppuVar24 = (undefined8 ****)*puVar8;
  lVar1 = puVar8[1];
  pppuStack_350 = ppppuVar24;
  lStack_348 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010882eee8();
  func_0x00010882efb8();
  func_0x000107c29cfc();
  pppuStack_3a8 = ppppuVar24;
  lStack_3a0 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_02 != 0);
  }
  uStack_398 = (undefined1)uVar23;
  func_0x000107c279a0(&ppppuStack_390,param_3);
  pcStack_328 = "onFeedEntered";
  func_0x000107c29bbc(&uStack_370,&pcStack_328);
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_00)();
  func_0x00010882e2e8();
  func_0x00010882e728();
  func_0x000107c3396c();
  func_0x00010882f9d4();
  func_0x00010882ed04();
  func_0x00010882f3dc();
  func_0x00010882f698();
  FUN_1088290dc();
  uStack_2d8 = 0;
  uStack_2c8 = 1;
  ppuStack_2b8 = (undefined **)uStack_368;
  pcStack_2c0 = (code *)uStack_370;
  lStack_2d0 = param_3;
  func_0x00010882eee8(unaff_x19 + 0x38);
  uStack_298 = puStack_338;
  ppuStack_2a0 = (undefined **)uStack_340;
  uStack_290 = uStack_330;
  uStack_2b0 = extraout_x9_00;
  pcStack_2a8 = (code *)extraout_x8_01;
  func_0x000107c33b64();
  pcStack_288 = FUN_108829020;
  ppuStack_280 = &PTR_FUN_110a78078;
  func_0x000107c33a48();
  func_0x00010882ff48();
  FUN_1088290dc();
  uVar23 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(param_3 + 0x48) = uVar23;
  *(undefined8 *)(param_3 + 0x58) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined ***)(param_3 + 0x68) = ppuStack_2b8;
  *(code **)(param_3 + 0x60) = pcStack_2c0;
  *(undefined8 *)(param_3 + 0x70) = uStack_2b0;
  *(undefined8 *)(unaff_x22 + 0x68) = 0;
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0;
  *(undefined ***)(param_3 + 0x80) = ppuStack_2a0;
  *(code **)(param_3 + 0x78) = pcStack_2a8;
  *(undefined8 *)(param_3 + 0x90) = uStack_290;
  *(undefined8 *)(param_3 + 0x88) = uStack_298;
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  *(undefined8 *)(unaff_x22 + 0x80) = 0;
  func_0x00010882e960();
  func_0x00010882e828();
  func_0x00010882e4b4();
  func_0x000108828ffc(auStack_320);
  func_0x000107c33a4c();
  FUN_108829124(appppuStack_3b8);
  func_0x00010882ee74();
  pppppuVar9 = (undefined8 *****)&pppuStack_350;
  func_0x000104be3970(pppppuVar9);
  func_0x00010882e28c();
  if ((bool)in_ZR) {
    return pppppuVar9;
  }
  ___stack_chk_fail();
  func_0x00010882e2fc();
  func_0x000108828ffc(auStack_320);
  func_0x000107c33a4c();
  FUN_108829124(appppuStack_3b8);
  func_0x00010882ee74();
  ppppuVar24 = &pppuStack_350;
  func_0x000104be3970();
  func_0x00010882edf0();
  pcVar17 = FUN_1088277a4;
  func_0x000107c33b24();
  ppppppuStack_250 = (undefined8 ******)&ppppuStack_1e0;
  pcStack_248 = pcVar17;
  func_0x000107c337b0();
  uStack_2b0 = extraout_x8_02;
  func_0x000107c33b9c();
  func_0x000107c29cfc(appppuStack_3b8,ppppuVar24[1],ppppuVar24[2]);
  puStack_318 = &UNK_10f4bce23;
  func_0x000107c338f0();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_03)();
  func_0x000107c337f8();
  func_0x000107c338e4();
  func_0x000107c3396c();
  func_0x000107c33a9c();
  func_0x000107c33814();
  func_0x00010882f02c();
  func_0x000107c33794();
  pcStack_310 = FUN_10882916c;
  ppuStack_308 = &PTR_FUN_110a78090;
  func_0x000107c33a64();
  func_0x000107c33780();
  func_0x000107c338f4();
  func_0x000107c337b8();
  pppppuVar9 = &ppppuStack_390;
  func_0x00010882914c();
  func_0x000107c33a04();
  func_0x00010882f0f8();
  func_0x000107c33a50();
  func_0x000107c337a8(uStack_2b0);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c337b8();
    pppppuVar10 = &ppppuStack_390;
    func_0x00010882914c();
    func_0x000107c33a04();
    func_0x00010882f0f8();
    func_0x000107c33a50();
    func_0x00010882edf0();
    pcVar17 = FUN_1088278b4;
    func_0x000107c33b24();
    ppppppuStack_250 = &ppppppuStack_250;
    pcStack_248 = pcVar17;
    func_0x000107c337b0();
    uStack_2b0 = extraout_x8_04;
    func_0x000107c33b9c();
    pppppuVar11 = appppuStack_3b8;
    func_0x000107c29cfc(pppppuVar11,pppppuVar10[1],pppppuVar10[2]);
    puStack_318 = &UNK_10f4bce35;
    func_0x000107c338f0();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_05)();
    func_0x000107c337f8();
    func_0x000107c338e4();
    func_0x000107c3396c();
    func_0x000107c33a9c();
    func_0x000107c33814();
    pppppuVar10 = pppppuVar9 + 7;
    func_0x00010882f02c();
    func_0x000107c33794();
    pcStack_310 = FUN_108829240;
    ppuStack_308 = &PTR_FUN_110a780a8;
    func_0x000107c33a64();
    func_0x000107c33780();
    func_0x000107c338f4();
    func_0x000107c337b8();
    pppppuVar9 = &ppppuStack_390;
    FUN_108829220();
    func_0x000107c33a04();
    func_0x00010882f0f8();
    func_0x000107c33a50();
    func_0x000107c337a8(uStack_2b0);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107c337b8();
      FUN_108829220(&ppppuStack_390);
      func_0x000107c33a04();
      func_0x00010882f0f8();
      func_0x000107c33a50();
      func_0x00010882edf0();
      func_0x00010882ff54();
      func_0x000107c337b0();
      func_0x00010882fa64();
      if (param_3 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_03 != 0);
      }
      func_0x000107c33ae0();
      ppppuVar24 = pppppuVar9[2];
      func_0x00010882f63c();
      ppppuStack_390 = pppppuVar11;
      lStack_388 = param_3;
      if (param_3 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_04 != 0);
      }
      puStack_338 = &UNK_10f4bce52;
      func_0x00010882f018(auStack_378);
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_06)();
      func_0x000107c337e4();
      func_0x000107c338d4();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e78c();
      pcStack_2c0 = FUN_108829314;
      ppuStack_2b8 = &PTR_FUN_110a780c0;
      func_0x000107c33a44();
      func_0x00010882e8dc();
      func_0x000107c338ec();
      func_0x00010882ea00();
      FUN_1088292f0(&uStack_330);
      func_0x00010882ee40();
      FUN_1088293cc(&lStack_3a0);
      func_0x000107c33a40();
      pppppuVar11 = (undefined8 *****)apppuStack_360;
      func_0x000108625da4();
      func_0x000107c337a8(uStack_260);
      if ((bool)in_ZR) {
        return pppppuVar11;
      }
      ___stack_chk_fail();
      func_0x00010882ea00();
      FUN_1088292f0(&uStack_330);
      func_0x00010882ee40();
      FUN_1088293cc(&lStack_3a0);
      func_0x000107c33a40();
      func_0x000108625da4(apppuStack_360);
      func_0x00010882edf0();
      func_0x000107c33bfc();
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_07 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_05 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882ed88();
      func_0x00010882eca4();
      if (extraout_x8_08 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_06 != 0);
      }
      puStack_338 = &UNK_10f4bce6d;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_09)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e9f0();
      FUN_1088294c0();
      func_0x00010882e15c();
      pcStack_2a8 = FUN_108829410;
      ppuStack_2a0 = &PTR_FUN_110a780d8;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_1088294c0();
      func_0x00010882e080();
      func_0x00010882df0c(lStack_2d0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x0001088293ec(&uStack_330);
      func_0x00010882ee40();
      pppppuVar12 = appppuStack_3b8;
      FUN_1088294e8(pppppuVar12);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x000107c33784();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x0001088293ec(&uStack_330);
        func_0x00010882ee40();
        ppppppuVar13 = (undefined8 ******)appppuStack_3b8;
        FUN_1088294e8();
        func_0x000107c33948();
        func_0x00010882f144();
        func_0x00010882edf0();
        func_0x000107c33bfc();
        func_0x000107c3378c();
        func_0x00010882eda8();
        if (extraout_x8_10 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_07 != 0);
        }
        func_0x00010882ebd8();
        func_0x00010882eb94();
        func_0x00010882ed88();
        func_0x00010882eca4();
        if (extraout_x8_11 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_08 != 0);
        }
        puStack_338 = &UNK_10f4bce85;
        func_0x00010882ebcc();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_12)();
        func_0x000107c33790();
        func_0x000107c33824();
        func_0x000107c3396c();
        func_0x00010882f010();
        func_0x00010882e3f0();
        func_0x00010882eed0();
        func_0x00010882e9f0();
        FUN_1088295dc();
        func_0x00010882e15c();
        pcStack_2a8 = FUN_10882952c;
        ppuStack_2a0 = &PTR_FUN_110a780f0;
        func_0x000107c339b8();
        func_0x00010882f2a0();
        FUN_1088295dc();
        func_0x00010882e080();
        func_0x00010882df0c(lStack_2d0);
        func_0x000107c33820();
        func_0x000107c337b4();
        func_0x000108829508(&uStack_330);
        func_0x00010882ee40();
        pppppuVar12 = appppuStack_3b8;
        FUN_108829604(pppppuVar12);
        func_0x000107c33948();
        func_0x00010882f144();
        func_0x000107c33784();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829508(&uStack_330);
          func_0x00010882ee40();
          FUN_108829604(appppuStack_3b8);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x00010882edf0();
          pcVar17 = FUN_108827dcc;
          func_0x000107c33bfc();
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_13 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_09 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882f2ec();
          func_0x000107c27994();
          func_0x00010882eca4();
          uVar19 = SUB84(ppppuVar24,0);
          if (extraout_x8_14 != 0) {
            do {
              func_0x000107c3383c();
              uVar19 = SUB84(ppppuVar24,0);
            } while (extraout_w10_10 != 0);
          }
          puStack_338 = &UNK_10f4bce90;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_15)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          ppppuVar24 = pppppuVar11[5];
          func_0x00010882e9f0();
          FUN_1088296f8();
          func_0x00010882e15c();
          pcStack_2a8 = FUN_108829648;
          ppuStack_2a0 = &PTR_FUN_110a78108;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_1088296f8();
          func_0x00010882e080();
          func_0x00010882df0c(lStack_2d0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829624(&uStack_330);
          func_0x00010882ee40();
          FUN_108829720(appppuStack_3b8);
          func_0x000107c33948();
          pppppuVar12 = (undefined8 *****)apppuStack_360;
          func_0x000108625dc8(pppppuVar12);
          func_0x000107c33784();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010882e104();
            func_0x000108829624(&uStack_330);
            func_0x00010882ee40();
            FUN_108829720(appppuStack_3b8);
            func_0x000107c33948();
            func_0x000108625dc8(apppuStack_360);
            func_0x00010882edf0();
            pppppppuVar14 = &ppppppuStack_590;
            uStack_400 = 1;
            pcStack_3c8 = FUN_108827f38;
            ppppuStack_3f8 = pppppuVar9 + 7;
            ppppuStack_3f0 = pppppuVar10;
            pppuStack_3e8 = ppppuVar24;
            ppppppuStack_3e0 = ppppppuVar13;
            ppppuStack_3d8 = pppppuVar11;
            ppppppuStack_3d0 = (undefined8 ******)&stack0xfffffffffffffdf0;
            func_0x000107c3378c();
            lStack_528 = *(long *)(pcVar17 + 8);
            pppuStack_530 = *(undefined8 ****)pcVar17;
            if (*(long *)(pcVar17 + 8) != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_11 != 0);
            }
            func_0x00010882ebd8();
            func_0x00010882fbf8();
            func_0x00010882e694();
            pppcStack_558 = (code ***)lStack_528;
            pppuStack_560 = pppuStack_530;
            uStack_568 = uVar19;
            if (lStack_528 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_12 != 0);
            }
            puStack_500 = &UNK_10f4b12f2;
            func_0x00010882f098(auStack_550);
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_16)();
            func_0x000107c33790();
            func_0x000107c33824();
            func_0x000107c3396c();
            func_0x00010882f090();
            func_0x00010882e42c();
            func_0x00010882eef4();
            func_0x00010882ea30();
            FUN_108829820();
            func_0x00010882f0bc();
            func_0x000107c337a0();
            pcStack_478 = (code *)uStack_518;
            uStack_480 = uStack_520;
            pcStack_490 = (code *)extraout_x9_01;
            func_0x00010882e62c();
            pcStack_468 = FUN_108829768;
            ppuStack_460 = &PTR_FUN_110a78120;
            func_0x000107c339e0();
            func_0x00010882f34c();
            FUN_108829820();
            func_0x00010882e13c();
            func_0x00010882df40(pcStack_490);
            func_0x000107c33820();
            func_0x000107c337b4();
            func_0x000108829744(auStack_4f8);
            func_0x00010882ee40();
            FUN_10882985c(&ppppppuStack_590);
            func_0x000107c33948();
            func_0x00010882f144();
            func_0x000107c33784();
            if ((bool)in_ZR) {
              return pppppppuVar14;
            }
            ___stack_chk_fail();
            func_0x00010882e104();
            func_0x000108829744(auStack_4f8);
            func_0x00010882ee40();
            FUN_10882985c(&ppppppuStack_590);
            func_0x000107c33948();
            func_0x00010882f144();
            func_0x00010882edf0();
            pcVar17 = FUN_1088280d4;
            func_0x000107c33bfc();
            ppppppuStack_3e0 = &ppppppuStack_3d0;
            ppppuStack_3d8 = (undefined8 ****)pcVar17;
            func_0x000107c3378c();
            func_0x00010882eda8();
            if (extraout_x8_17 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_13 != 0);
            }
            func_0x00010882ebd8();
            func_0x00010882eb94();
            func_0x00010882ed88();
            func_0x00010882eca4();
            if (extraout_x8_18 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_14 != 0);
            }
            puStack_508 = &UNK_10f4bcea8;
            func_0x00010882ebcc();
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_19)();
            func_0x000107c33790();
            func_0x000107c33824();
            func_0x000107c3396c();
            func_0x00010882f010();
            func_0x00010882e3f0();
            func_0x00010882eed0();
            func_0x00010882e9f0();
            FUN_108829950();
            func_0x00010882e15c();
            pcStack_478 = FUN_1088298a0;
            ppuStack_470 = &PTR_FUN_110a78138;
            func_0x000107c339b8();
            func_0x00010882f2a0();
            FUN_108829950();
            func_0x00010882e080();
            func_0x00010882df0c(uStack_4a0);
            func_0x000107c33820();
            func_0x000107c337b4();
            func_0x00010882987c(&puStack_500);
            func_0x00010882ee40();
            pppppuVar12 = (undefined8 *****)apppuStack_588;
            FUN_108829978(pppppuVar12);
            func_0x000107c33948();
            func_0x00010882f8b4();
            func_0x000107c33784();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010882e104();
              func_0x00010882987c(&puStack_500);
              func_0x00010882ee40();
              ppppuVar24 = apppuStack_588;
              FUN_108829978();
              func_0x000107c33948();
              func_0x00010882f8b4();
              func_0x00010882edf0();
              pcVar17 = FUN_108828234;
              func_0x000107c33bfc();
              ppppppuStack_3e0 = &ppppppuStack_3e0;
              ppppuStack_3d8 = (undefined8 ****)pcVar17;
              func_0x000107c3378c();
              func_0x00010882eda8();
              if (extraout_x8_20 != 0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_15 != 0);
              }
              func_0x00010882ebd8();
              func_0x00010882eb94();
              func_0x00010882ed88();
              func_0x00010882eca4();
              if (extraout_x8_21 != 0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_16 != 0);
              }
              puStack_508 = &UNK_10f4bceb9;
              func_0x00010882ebcc();
              func_0x000107c28258();
              func_0x000107c3379c();
              (*extraout_x8_22)();
              func_0x000107c33790();
              func_0x000107c33824();
              func_0x000107c3396c();
              func_0x00010882f010();
              func_0x00010882e3f0();
              func_0x00010882eed0();
              func_0x00010882e9f0();
              FUN_108829a70();
              func_0x00010882e15c();
              pcStack_478 = FUN_1088299c0;
              ppuStack_470 = &PTR_FUN_110a78150;
              func_0x000107c339b8();
              func_0x00010882f2a0();
              FUN_108829a70();
              func_0x00010882e080();
              func_0x00010882df0c(uStack_4a0);
              func_0x000107c33820();
              func_0x000107c337b4();
              func_0x00010882999c(&puStack_500);
              func_0x00010882ee40();
              FUN_108829a98(apppuStack_588);
              func_0x000107c33948();
              pppppuVar12 = (undefined8 *****)&pppuStack_530;
              func_0x000108625e10(pppppuVar12);
              func_0x000107c33784();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x00010882e104();
                func_0x00010882999c(&puStack_500);
                func_0x00010882ee40();
                FUN_108829a98(apppuStack_588);
                func_0x000107c33948();
                func_0x000108625e10(&pppuStack_530);
                func_0x00010882edf0();
                pcVar17 = FUN_10882839c;
                func_0x000107c33bfc();
                ppppppuStack_3e0 = &ppppppuStack_3e0;
                ppppuStack_3d8 = (undefined8 ****)pcVar17;
                func_0x000107c3378c();
                func_0x00010882eda8();
                if (extraout_x8_23 != 0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_17 != 0);
                }
                func_0x00010882ebd8();
                func_0x00010882eb94();
                func_0x00010882ed88();
                func_0x00010882eca4();
                if (extraout_x8_24 != 0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_18 != 0);
                }
                puStack_508 = &UNK_10f4bcee0;
                func_0x00010882ebcc();
                func_0x000107c28258();
                func_0x000107c3379c();
                (*extraout_x8_25)();
                func_0x000107c33790();
                func_0x000107c33824();
                func_0x000107c3396c();
                func_0x00010882f010();
                func_0x00010882e3f0();
                func_0x00010882eed0();
                ppppuVar25 = pppppuVar11[5];
                func_0x00010882e9f0();
                FUN_108829b90();
                func_0x00010882e15c();
                pcStack_478 = FUN_108829ae0;
                ppuStack_470 = &PTR_FUN_110a78168;
                func_0x000107c339b8();
                func_0x00010882f2a0();
                FUN_108829b90();
                func_0x00010882e080();
                func_0x00010882df0c(uStack_4a0);
                func_0x000107c33820();
                func_0x000107c337b4();
                func_0x000108829abc(&puStack_500);
                func_0x00010882ee40();
                FUN_108829bb8(apppuStack_588);
                func_0x000107c33948();
                pppppuVar12 = (undefined8 *****)&pppuStack_530;
                func_0x000108625e34(pppppuVar12);
                func_0x000107c33784();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x00010882e104();
                  func_0x000108829abc(&puStack_500);
                  func_0x00010882ee40();
                  FUN_108829bb8(apppuStack_588);
                  func_0x000107c33948();
                  func_0x000108625e34(&pppuStack_530);
                  func_0x00010882edf0();
                  pcVar20 = FUN_108828504;
                  func_0x00010882ff54();
                  ppppppuStack_3d0 = &ppppppuStack_3e0;
                  pcStack_3c8 = pcVar20;
                  func_0x000107c337b0();
                  func_0x00010882fa64();
                  if (ppppuVar24 != (undefined8 ****)0x0) {
                    do {
                      func_0x000107c3383c();
                    } while (extraout_w10_19 != 0);
                  }
                  func_0x000107c33ae0();
                  ppppuVar21 = pppppuVar11[2];
                  func_0x00010882f63c();
                  uVar22 = (undefined1)param_5;
                  uVar18 = SUB81(ppppuVar21,0);
                  pppuStack_560 = ppppuVar25;
                  pppcStack_558 = (code ***)ppppuVar24;
                  if (ppppuVar24 != (undefined8 ****)0x0) {
                    do {
                      func_0x000107c3383c();
                      uVar22 = (undefined1)param_5;
                      uVar18 = SUB81(ppppuVar21,0);
                    } while (extraout_w10_20 != 0);
                  }
                  puStack_508 = &UNK_10f4bcef9;
                  puVar15 = auStack_548;
                  func_0x00010882f018();
                  func_0x000107c28258();
                  func_0x000107c3379c();
                  (*extraout_x8_26)();
                  func_0x000107c337e4();
                  func_0x000107c338d4();
                  func_0x000107c3396c();
                  func_0x00010882f010();
                  func_0x00010882e3f0();
                  func_0x00010882eed0();
                  func_0x00010882e78c();
                  pcStack_490 = FUN_108829c00;
                  ppuStack_488 = &PTR_FUN_110a78180;
                  func_0x000107c33a44();
                  func_0x00010882e8dc();
                  func_0x000107c338ec();
                  func_0x00010882ea00();
                  func_0x000108829bdc(&puStack_500);
                  func_0x00010882ee40();
                  pppppuVar9 = (undefined8 *****)&pppuStack_570;
                  FUN_108829cb8();
                  func_0x000107c33a40();
                  func_0x00010882f8b4();
                  func_0x000107c337a8(uStack_430);
                  if ((bool)in_ZR) {
                    return pppppuVar9;
                  }
                  ___stack_chk_fail();
                  func_0x00010882ea00();
                  func_0x000108829bdc(&puStack_500);
                  func_0x00010882ee40();
                  FUN_108829cb8(&pppuStack_570);
                  func_0x000107c33a40();
                  func_0x00010882f8b4();
                  func_0x00010882edf0();
                  func_0x000107c33c58(FUN_108828644);
                  appppppuStack_540[0] = &ppppppuStack_3d0;
                  func_0x000107c337b0();
                  ppppuVar24 = (undefined8 ****)*param_8;
                  ppppuVar25 = (undefined8 ****)param_8[1];
                  pppuStack_6d0 = ppppuVar24;
                  pppuStack_6c8 = ppppuVar25;
                  uStack_5a0 = extraout_x8_27;
                  if (ppppuVar25 != (undefined8 ****)0x0) {
                    do {
                      func_0x000107c3383c();
                    } while (extraout_w10_21 != 0);
                  }
                  lStack_6e8 = 0;
                  lStack_6e0 = 0;
                  lStack_6d8 = 0;
                  func_0x000107c29cfc(&lStack_738,pppppuVar9[1],pppppuVar9[2]);
                  plStack_720 = (long *)CONCAT71(plStack_720._1_7_,uVar18);
                  uStack_708 = (undefined1)param_6;
                  uStack_707 = (undefined7)((ulong)param_6 >> 8);
                  uStack_700 = (undefined1)param_7;
                  puStack_728 = puVar15;
                  pcStack_718 = pcVar17;
                  uStack_710 = uVar22;
                  pppuStack_6f8 = ppppuVar24;
                  pppuStack_6f0 = ppppuVar25;
                  if (ppppuVar25 != (undefined8 ****)0x0) {
                    do {
                      func_0x000107c3383c();
                    } while (extraout_w10_22 != 0);
                  }
                  puStack_6a8 = &UNK_10f4bcf15;
                  plVar16 = &lStack_6e8;
                  func_0x00010882f338();
                  func_0x000107c28258();
                  func_0x000107c3379c();
                  (*extraout_x8_28)();
                  func_0x000107c337f8();
                  func_0x000107c33960();
                  func_0x000107c3396c();
                  func_0x000107c33a9c();
                  func_0x00010882e55c();
                  func_0x00010882f02c();
                  lVar7 = lStack_6d8;
                  lVar6 = lStack_6e0;
                  lVar5 = lStack_6e8;
                  pppuVar4 = pppuStack_6f0;
                  pppuVar3 = pppuStack_6f8;
                  lVar2 = lStack_730;
                  lVar1 = lStack_738;
                  ppppuVar24 = pppppuVar9[5];
                  lStack_6a0 = lStack_738;
                  lStack_698 = lStack_730;
                  lStack_730 = 0;
                  lStack_738 = 0;
                  lStack_688 = (long)plStack_720;
                  puStack_690 = puStack_728;
                  uStack_678 = uStack_710;
                  pcStack_680 = pcStack_718;
                  uStack_66f = CONCAT17(uStack_700,uStack_707);
                  uStack_670 = uStack_708;
                  pppuStack_660 = pppuStack_6f8;
                  pppuStack_658 = pppuStack_6f0;
                  pppuStack_6f8 = (undefined8 ***)0x0;
                  pppuStack_6f0 = (undefined8 ****)0x0;
                  pcStack_650 = (code *)0x0;
                  uStack_640 = 1;
                  lStack_638 = lStack_6e8;
                  lStack_630 = lStack_6e0;
                  lStack_6e8 = 0;
                  lStack_6e0 = 0;
                  lStack_6d8 = 0;
                  lStack_628 = lVar7;
                  lStack_618 = lStack_6c0;
                  lStack_610 = lStack_6b8;
                  lStack_608 = lStack_6b0;
                  ppuStack_648 = (undefined **)param_7;
                  ppppuStack_620 = pppppuVar9 + 7;
                  func_0x00010882f710();
                  pcStack_600 = FUN_108829cfc;
                  ppuStack_5f8 = &PTR_FUN_110a78198;
                  func_0x000107c33a2c();
                  *plVar16 = lVar1;
                  plVar16[1] = lVar2;
                  pcVar17 = pcStack_718;
                  puVar15 = puStack_728;
                  lStack_6a0 = 0;
                  lStack_698 = 0;
                  lVar1 = CONCAT71(uStack_70f,uStack_710);
                  plVar16[3] = (long)plStack_720;
                  plVar16[2] = (long)puVar15;
                  plVar16[5] = lVar1;
                  plVar16[4] = (long)pcVar17;
                  uVar23 = CONCAT17(uStack_708,uStack_70f);
                  *(ulong *)((long)plVar16 + 0x31) = CONCAT17(uStack_700,uStack_707);
                  *(undefined8 *)((long)plVar16 + 0x29) = uVar23;
                  plVar16[8] = (long)pppuVar3;
                  plVar16[9] = (long)pppuVar4;
                  pcVar17 = pcStack_650;
                  pppuStack_660 = (undefined8 ***)0x0;
                  pppuStack_658 = (undefined8 ***)0x0;
                  lVar1 = CONCAT71(uStack_63f,uStack_640);
                  plVar16[0xb] = (long)ppuStack_648;
                  plVar16[10] = (long)pcVar17;
                  plVar16[0xc] = lVar1;
                  plVar16[0xd] = lVar5;
                  plVar16[0xe] = lVar6;
                  plVar16[0xf] = lVar7;
                  lStack_638 = 0;
                  lStack_630 = 0;
                  lStack_628 = 0;
                  plVar16[0x10] = (long)(pppppuVar9 + 7);
                  plVar16[0x11] = lStack_6c0;
                  plVar16[0x12] = lStack_6b8;
                  plVar16[0x13] = lStack_6b0;
                  lStack_610 = 0;
                  lStack_608 = 0;
                  lStack_618 = 0;
                  plStack_5f0 = plVar16;
                  func_0x000107c339ac(ppppuVar24);
                  func_0x00010882fc6c();
                  func_0x00010882eb54();
                  func_0x000108829cd8(&lStack_6a0);
                  func_0x000107c33a04();
                  FUN_108829dc0(&lStack_738);
                  func_0x000107c280f8(&lStack_6e8);
                  pppppuVar9 = (undefined8 *****)&pppuStack_6d0;
                  func_0x000108625dec();
                  func_0x000107c337a8(uStack_5a0);
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x00010882eb54();
                    func_0x000108829cd8(&lStack_6a0);
                    func_0x000107c33a04();
                    FUN_108829dc0(&lStack_738);
                    func_0x000107c280f8(&lStack_6e8);
                    func_0x000108625dec(&pppuStack_6d0);
                    func_0x00010882edf0();
                    pcVar17 = FUN_1088288b4;
                    func_0x00010882ff54();
                    ppppppuStack_590 = appppppuStack_540;
                    apppuStack_588[0] = (undefined8 ***)pcVar17;
                    func_0x000107c337b0();
                    func_0x00010882fa64();
                    if (lVar5 != 0) {
                      do {
                        func_0x000107c3383c();
                      } while (extraout_w10_23 != 0);
                    }
                    func_0x000107c33ae0();
                    func_0x00010882f63c();
                    pcStack_718 = (code *)lVar5;
                    plStack_720 = &lStack_6a0;
                    if (lVar5 != 0) {
                      do {
                        func_0x000107c3383c();
                      } while (extraout_w10_24 != 0);
                    }
                    pppuStack_6c8 = (undefined8 ***)&UNK_10f4bcf38;
                    func_0x00010882f018(&uStack_708);
                    func_0x000107c28258();
                    func_0x000107c3379c();
                    (*extraout_x8_29)();
                    func_0x000107c337e4();
                    func_0x000107c338d4();
                    func_0x000107c3396c();
                    func_0x00010882f010();
                    func_0x00010882e3f0();
                    func_0x00010882eed0();
                    func_0x00010882e78c();
                    pcStack_650 = FUN_108829e04;
                    ppuStack_648 = &PTR_FUN_110a781b0;
                    func_0x000107c33a44();
                    func_0x00010882e8dc();
                    func_0x000107c338ec();
                    func_0x00010882ea00();
                    func_0x000108829de0(&lStack_6c0);
                    func_0x00010882ee40();
                    FUN_108829ebc(&lStack_730);
                    func_0x000107c33a40();
                    pppppuVar9 = (undefined8 *****)&pppuStack_6f0;
                    func_0x000108625e58();
                    func_0x000107c337a8(plStack_5f0);
                    if ((bool)in_ZR) {
                      return pppppuVar9;
                    }
                    ___stack_chk_fail();
                    func_0x00010882ea00();
                    func_0x000108829de0(&lStack_6c0);
                    func_0x00010882ee40();
                    FUN_108829ebc(&lStack_730);
                    func_0x000107c33a40();
                    pppppuVar9 = (undefined8 *****)&pppuStack_6f0;
                    func_0x000108625e58(pppppuVar9);
                    func_0x00010882edf0();
                    func_0x00010882eb68(&PTR_DAT_110a77e80);
                    func_0x000107c29344(pppppuVar9 + 3);
                    func_0x000107c29cf4(lVar5);
                    return pppppuVar9;
                  }
                  return pppppuVar9;
                }
              }
            }
          }
        }
      }
      return pppppuVar12;
    }
  }
  return pppppuVar9;
}



/* Entry: 108827598; end: 1088277a3;  */

undefined8 *****
FUN_108827598(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long *param_8)

{
  long lVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 in_ZR;
  undefined8 *****pppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined1 *puVar14;
  long *plVar15;
  code *pcVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  code *pcVar19;
  undefined8 ****ppppuVar20;
  undefined1 uVar21;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  code *extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  code *extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  code *extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  code *extraout_x8_24;
  code *extraout_x8_25;
  undefined8 extraout_x8_26;
  code *extraout_x8_27;
  code *extraout_x8_28;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  long unaff_x19;
  long unaff_x20;
  undefined8 ****ppppuVar22;
  undefined8 ****ppppuVar23;
  long unaff_x22;
  undefined8 uVar24;
  long lStack_568;
  long lStack_560;
  undefined1 *puStack_558;
  long *plStack_550;
  code *pcStack_548;
  undefined1 uStack_540;
  undefined7 uStack_53f;
  undefined1 uStack_538;
  undefined7 uStack_537;
  undefined1 uStack_530;
  undefined8 ***pppuStack_528;
  undefined8 ***pppuStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  undefined8 ***pppuStack_500;
  undefined8 ***pppuStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  undefined *puStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  undefined1 *puStack_4c0;
  long lStack_4b8;
  code *pcStack_4b0;
  undefined1 uStack_4a8;
  undefined1 uStack_4a0;
  undefined8 uStack_49f;
  undefined8 ***pppuStack_490;
  undefined8 ***pppuStack_488;
  code *pcStack_480;
  undefined **ppuStack_478;
  undefined1 uStack_470;
  undefined7 uStack_46f;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  undefined8 ****ppppuStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  code *pcStack_430;
  undefined **ppuStack_428;
  long *plStack_420;
  undefined8 uStack_3d0;
  undefined8 ******ppppppuStack_3c0;
  undefined8 ***apppuStack_3b8 [3];
  undefined8 ***pppuStack_3a0;
  undefined4 uStack_398;
  undefined8 ***pppuStack_390;
  code ***pppcStack_388;
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [8];
  undefined8 ******appppppuStack_370 [2];
  undefined8 ***pppuStack_360;
  long lStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined1 auStack_328 [88];
  undefined8 uStack_2d0;
  code *pcStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined **ppuStack_2a0;
  code *pcStack_298;
  undefined **ppuStack_290;
  undefined8 uStack_260;
  undefined8 uStack_230;
  undefined8 ****ppppuStack_228;
  undefined8 ****ppppuStack_220;
  undefined8 ***pppuStack_218;
  undefined8 ******ppppppuStack_210;
  undefined8 ****ppppuStack_208;
  undefined8 ******ppppppuStack_200;
  code *pcStack_1f8;
  undefined8 ****appppuStack_1e8 [2];
  undefined8 ***pppuStack_1d8;
  long alStack_1d0 [2];
  undefined8 ****ppppuStack_1c0;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 ***apppuStack_190 [2];
  undefined8 ***pppuStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  char *pcStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_108;
  undefined8 uStack_90;
  undefined8 ******ppppppuStack_80;
  code *pcStack_78;
  
  func_0x000107c33a68();
  func_0x00010882e2d0();
  ppppuVar22 = (undefined8 ****)*param_2;
  lVar1 = param_2[1];
  pppuStack_180 = ppppuVar22;
  lStack_178 = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882eee8();
  func_0x00010882efb8();
  func_0x000107c29cfc();
  pppuStack_1d8 = ppppuVar22;
  alStack_1d0[0] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107c279a0(&ppppuStack_1c0);
  pcStack_158 = "onFeedEntered";
  func_0x000107c29bbc(&uStack_1a0,&pcStack_158);
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8)();
  func_0x00010882e2e8();
  func_0x00010882e728();
  func_0x000107c3396c();
  func_0x00010882f9d4();
  func_0x00010882ed04();
  func_0x00010882f3dc();
  func_0x00010882f698();
  FUN_1088290dc();
  uStack_108 = 0;
  func_0x00010882eee8(unaff_x19 + 0x38);
  func_0x000107c33b64();
  func_0x000107c33a48();
  func_0x00010882ff48();
  FUN_1088290dc();
  uVar24 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar24;
  *(undefined8 *)(unaff_x20 + 0x58) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_198;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x70) = extraout_x9;
  *(undefined8 *)(unaff_x22 + 0x68) = 0;
  *(undefined8 *)(unaff_x22 + 0x70) = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0x78) = extraout_x8_00;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_160;
  *(undefined **)(unaff_x20 + 0x88) = puStack_168;
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  *(undefined8 *)(unaff_x22 + 0x80) = 0;
  func_0x00010882e960();
  func_0x00010882e828();
  func_0x00010882e4b4();
  func_0x000108828ffc(auStack_150);
  func_0x000107c33a4c();
  FUN_108829124(appppuStack_1e8);
  func_0x00010882ee74();
  pppppuVar8 = (undefined8 *****)&pppuStack_180;
  func_0x000104be3970(pppppuVar8);
  func_0x00010882e28c();
  if ((bool)in_ZR) {
    return pppppuVar8;
  }
  ___stack_chk_fail();
  func_0x00010882e2fc();
  func_0x000108828ffc(auStack_150);
  func_0x000107c33a4c();
  FUN_108829124(appppuStack_1e8);
  func_0x00010882ee74();
  ppppuVar22 = &pppuStack_180;
  func_0x000104be3970();
  func_0x00010882edf0();
  pcVar16 = FUN_1088277a4;
  func_0x000107c33b24();
  ppppppuStack_80 = (undefined8 ******)&stack0xfffffffffffffff0;
  pcStack_78 = pcVar16;
  func_0x000107c337b0();
  func_0x000107c33b9c();
  func_0x000107c29cfc(appppuStack_1e8,ppppuVar22[1],ppppuVar22[2]);
  puStack_148 = &UNK_10f4bce23;
  func_0x000107c338f0();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_02)();
  func_0x000107c337f8();
  func_0x000107c338e4();
  func_0x000107c3396c();
  func_0x000107c33a9c();
  func_0x000107c33814();
  func_0x00010882f02c();
  func_0x000107c33794();
  pcStack_140 = FUN_10882916c;
  ppuStack_138 = &PTR_FUN_110a78090;
  func_0x000107c33a64();
  func_0x000107c33780();
  func_0x000107c338f4();
  func_0x000107c337b8();
  pppppuVar8 = &ppppuStack_1c0;
  func_0x00010882914c();
  func_0x000107c33a04();
  func_0x00010882f0f8();
  func_0x000107c33a50();
  func_0x000107c337a8(extraout_x8_01);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c337b8();
    pppppuVar9 = &ppppuStack_1c0;
    func_0x00010882914c();
    func_0x000107c33a04();
    func_0x00010882f0f8();
    func_0x000107c33a50();
    func_0x00010882edf0();
    pcVar16 = FUN_1088278b4;
    func_0x000107c33b24();
    ppppppuStack_80 = &ppppppuStack_80;
    pcStack_78 = pcVar16;
    func_0x000107c337b0();
    func_0x000107c33b9c();
    pppppuVar10 = appppuStack_1e8;
    func_0x000107c29cfc(pppppuVar10,pppppuVar9[1],pppppuVar9[2]);
    puStack_148 = &UNK_10f4bce35;
    func_0x000107c338f0();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_04)();
    func_0x000107c337f8();
    func_0x000107c338e4();
    func_0x000107c3396c();
    func_0x000107c33a9c();
    func_0x000107c33814();
    pppppuVar9 = pppppuVar8 + 7;
    func_0x00010882f02c();
    func_0x000107c33794();
    pcStack_140 = FUN_108829240;
    ppuStack_138 = &PTR_FUN_110a780a8;
    func_0x000107c33a64();
    func_0x000107c33780();
    func_0x000107c338f4();
    func_0x000107c337b8();
    pppppuVar8 = &ppppuStack_1c0;
    FUN_108829220();
    func_0x000107c33a04();
    func_0x00010882f0f8();
    func_0x000107c33a50();
    func_0x000107c337a8(extraout_x8_03);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107c337b8();
      FUN_108829220(&ppppuStack_1c0);
      func_0x000107c33a04();
      func_0x00010882f0f8();
      func_0x000107c33a50();
      func_0x00010882edf0();
      func_0x00010882ff54();
      func_0x000107c337b0();
      func_0x00010882fa64();
      if (unaff_x20 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_01 != 0);
      }
      func_0x000107c33ae0();
      ppppuVar22 = pppppuVar8[2];
      func_0x00010882f63c();
      ppppuStack_1c0 = pppppuVar10;
      if (unaff_x20 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_02 != 0);
      }
      puStack_168 = &UNK_10f4bce52;
      func_0x00010882f018(auStack_1a8);
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_05)();
      func_0x000107c337e4();
      func_0x000107c338d4();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e78c();
      func_0x000107c33a44();
      func_0x00010882e8dc();
      func_0x000107c338ec();
      func_0x00010882ea00();
      FUN_1088292f0(&uStack_160);
      func_0x00010882ee40();
      FUN_1088293cc(alStack_1d0);
      func_0x000107c33a40();
      pppppuVar10 = (undefined8 *****)apppuStack_190;
      func_0x000108625da4();
      func_0x000107c337a8(uStack_90);
      if ((bool)in_ZR) {
        return pppppuVar10;
      }
      ___stack_chk_fail();
      func_0x00010882ea00();
      FUN_1088292f0(&uStack_160);
      func_0x00010882ee40();
      FUN_1088293cc(alStack_1d0);
      func_0x000107c33a40();
      func_0x000108625da4(apppuStack_190);
      func_0x00010882edf0();
      func_0x000107c33bfc();
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_03 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882ed88();
      func_0x00010882eca4();
      if (extraout_x8_07 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_04 != 0);
      }
      puStack_168 = &UNK_10f4bce6d;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_08)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e9f0();
      FUN_1088294c0();
      func_0x00010882e15c();
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_1088294c0();
      func_0x00010882e080();
      func_0x00010882df0c(unaff_x20);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x0001088293ec(&uStack_160);
      func_0x00010882ee40();
      pppppuVar11 = appppuStack_1e8;
      FUN_1088294e8(pppppuVar11);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x000107c33784();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x0001088293ec(&uStack_160);
        func_0x00010882ee40();
        ppppppuVar12 = (undefined8 ******)appppuStack_1e8;
        FUN_1088294e8();
        func_0x000107c33948();
        func_0x00010882f144();
        func_0x00010882edf0();
        func_0x000107c33bfc();
        func_0x000107c3378c();
        func_0x00010882eda8();
        if (extraout_x8_09 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_05 != 0);
        }
        func_0x00010882ebd8();
        func_0x00010882eb94();
        func_0x00010882ed88();
        func_0x00010882eca4();
        if (extraout_x8_10 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_06 != 0);
        }
        puStack_168 = &UNK_10f4bce85;
        func_0x00010882ebcc();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_11)();
        func_0x000107c33790();
        func_0x000107c33824();
        func_0x000107c3396c();
        func_0x00010882f010();
        func_0x00010882e3f0();
        func_0x00010882eed0();
        func_0x00010882e9f0();
        FUN_1088295dc();
        func_0x00010882e15c();
        func_0x000107c339b8();
        func_0x00010882f2a0();
        FUN_1088295dc();
        func_0x00010882e080();
        func_0x00010882df0c(unaff_x20);
        func_0x000107c33820();
        func_0x000107c337b4();
        func_0x000108829508(&uStack_160);
        func_0x00010882ee40();
        pppppuVar11 = appppuStack_1e8;
        FUN_108829604(pppppuVar11);
        func_0x000107c33948();
        func_0x00010882f144();
        func_0x000107c33784();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829508(&uStack_160);
          func_0x00010882ee40();
          FUN_108829604(appppuStack_1e8);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x00010882edf0();
          pcVar16 = FUN_108827dcc;
          func_0x000107c33bfc();
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_12 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_07 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882f2ec();
          func_0x000107c27994();
          func_0x00010882eca4();
          uVar18 = SUB84(ppppuVar22,0);
          if (extraout_x8_13 != 0) {
            do {
              func_0x000107c3383c();
              uVar18 = SUB84(ppppuVar22,0);
            } while (extraout_w10_08 != 0);
          }
          puStack_168 = &UNK_10f4bce90;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_14)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          ppppuVar22 = pppppuVar10[5];
          func_0x00010882e9f0();
          FUN_1088296f8();
          func_0x00010882e15c();
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_1088296f8();
          func_0x00010882e080();
          func_0x00010882df0c(unaff_x20);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829624(&uStack_160);
          func_0x00010882ee40();
          FUN_108829720(appppuStack_1e8);
          func_0x000107c33948();
          pppppuVar11 = (undefined8 *****)apppuStack_190;
          func_0x000108625dc8(pppppuVar11);
          func_0x000107c33784();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010882e104();
            func_0x000108829624(&uStack_160);
            func_0x00010882ee40();
            FUN_108829720(appppuStack_1e8);
            func_0x000107c33948();
            func_0x000108625dc8(apppuStack_190);
            func_0x00010882edf0();
            pppppppuVar13 = &ppppppuStack_3c0;
            uStack_230 = 1;
            pcStack_1f8 = FUN_108827f38;
            ppppuStack_228 = pppppuVar8 + 7;
            ppppuStack_220 = pppppuVar9;
            pppuStack_218 = ppppuVar22;
            ppppppuStack_210 = ppppppuVar12;
            ppppuStack_208 = pppppuVar10;
            ppppppuStack_200 = (undefined8 ******)&stack0xffffffffffffffc0;
            func_0x000107c3378c();
            lStack_358 = *(long *)(pcVar16 + 8);
            pppuStack_360 = *(undefined8 ****)pcVar16;
            if (*(long *)(pcVar16 + 8) != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_09 != 0);
            }
            func_0x00010882ebd8();
            func_0x00010882fbf8();
            func_0x00010882e694();
            pppcStack_388 = (code ***)lStack_358;
            pppuStack_390 = pppuStack_360;
            uStack_398 = uVar18;
            if (lStack_358 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_10 != 0);
            }
            puStack_330 = &UNK_10f4b12f2;
            func_0x00010882f098(auStack_380);
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_15)();
            func_0x000107c33790();
            func_0x000107c33824();
            func_0x000107c3396c();
            func_0x00010882f090();
            func_0x00010882e42c();
            func_0x00010882eef4();
            func_0x00010882ea30();
            FUN_108829820();
            func_0x00010882f0bc();
            func_0x000107c337a0();
            pcStack_2a8 = (code *)uStack_348;
            uStack_2b0 = uStack_350;
            pcStack_2c0 = (code *)extraout_x9_00;
            func_0x00010882e62c();
            pcStack_298 = FUN_108829768;
            ppuStack_290 = &PTR_FUN_110a78120;
            func_0x000107c339e0();
            func_0x00010882f34c();
            FUN_108829820();
            func_0x00010882e13c();
            func_0x00010882df40(pcStack_2c0);
            func_0x000107c33820();
            func_0x000107c337b4();
            func_0x000108829744(auStack_328);
            func_0x00010882ee40();
            FUN_10882985c(&ppppppuStack_3c0);
            func_0x000107c33948();
            func_0x00010882f144();
            func_0x000107c33784();
            if ((bool)in_ZR) {
              return pppppppuVar13;
            }
            ___stack_chk_fail();
            func_0x00010882e104();
            func_0x000108829744(auStack_328);
            func_0x00010882ee40();
            FUN_10882985c(&ppppppuStack_3c0);
            func_0x000107c33948();
            func_0x00010882f144();
            func_0x00010882edf0();
            pcVar16 = FUN_1088280d4;
            func_0x000107c33bfc();
            ppppppuStack_210 = &ppppppuStack_200;
            ppppuStack_208 = (undefined8 ****)pcVar16;
            func_0x000107c3378c();
            func_0x00010882eda8();
            if (extraout_x8_16 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_11 != 0);
            }
            func_0x00010882ebd8();
            func_0x00010882eb94();
            func_0x00010882ed88();
            func_0x00010882eca4();
            if (extraout_x8_17 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_12 != 0);
            }
            puStack_338 = &UNK_10f4bcea8;
            func_0x00010882ebcc();
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_18)();
            func_0x000107c33790();
            func_0x000107c33824();
            func_0x000107c3396c();
            func_0x00010882f010();
            func_0x00010882e3f0();
            func_0x00010882eed0();
            func_0x00010882e9f0();
            FUN_108829950();
            func_0x00010882e15c();
            pcStack_2a8 = FUN_1088298a0;
            ppuStack_2a0 = &PTR_FUN_110a78138;
            func_0x000107c339b8();
            func_0x00010882f2a0();
            FUN_108829950();
            func_0x00010882e080();
            func_0x00010882df0c(uStack_2d0);
            func_0x000107c33820();
            func_0x000107c337b4();
            func_0x00010882987c(&puStack_330);
            func_0x00010882ee40();
            pppppuVar11 = (undefined8 *****)apppuStack_3b8;
            FUN_108829978(pppppuVar11);
            func_0x000107c33948();
            func_0x00010882f8b4();
            func_0x000107c33784();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010882e104();
              func_0x00010882987c(&puStack_330);
              func_0x00010882ee40();
              ppppuVar22 = apppuStack_3b8;
              FUN_108829978();
              func_0x000107c33948();
              func_0x00010882f8b4();
              func_0x00010882edf0();
              pcVar16 = FUN_108828234;
              func_0x000107c33bfc();
              ppppppuStack_210 = &ppppppuStack_210;
              ppppuStack_208 = (undefined8 ****)pcVar16;
              func_0x000107c3378c();
              func_0x00010882eda8();
              if (extraout_x8_19 != 0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_13 != 0);
              }
              func_0x00010882ebd8();
              func_0x00010882eb94();
              func_0x00010882ed88();
              func_0x00010882eca4();
              if (extraout_x8_20 != 0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_14 != 0);
              }
              puStack_338 = &UNK_10f4bceb9;
              func_0x00010882ebcc();
              func_0x000107c28258();
              func_0x000107c3379c();
              (*extraout_x8_21)();
              func_0x000107c33790();
              func_0x000107c33824();
              func_0x000107c3396c();
              func_0x00010882f010();
              func_0x00010882e3f0();
              func_0x00010882eed0();
              func_0x00010882e9f0();
              FUN_108829a70();
              func_0x00010882e15c();
              pcStack_2a8 = FUN_1088299c0;
              ppuStack_2a0 = &PTR_FUN_110a78150;
              func_0x000107c339b8();
              func_0x00010882f2a0();
              FUN_108829a70();
              func_0x00010882e080();
              func_0x00010882df0c(uStack_2d0);
              func_0x000107c33820();
              func_0x000107c337b4();
              func_0x00010882999c(&puStack_330);
              func_0x00010882ee40();
              FUN_108829a98(apppuStack_3b8);
              func_0x000107c33948();
              pppppuVar11 = (undefined8 *****)&pppuStack_360;
              func_0x000108625e10(pppppuVar11);
              func_0x000107c33784();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x00010882e104();
                func_0x00010882999c(&puStack_330);
                func_0x00010882ee40();
                FUN_108829a98(apppuStack_3b8);
                func_0x000107c33948();
                func_0x000108625e10(&pppuStack_360);
                func_0x00010882edf0();
                pcVar16 = FUN_10882839c;
                func_0x000107c33bfc();
                ppppppuStack_210 = &ppppppuStack_210;
                ppppuStack_208 = (undefined8 ****)pcVar16;
                func_0x000107c3378c();
                func_0x00010882eda8();
                if (extraout_x8_22 != 0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_15 != 0);
                }
                func_0x00010882ebd8();
                func_0x00010882eb94();
                func_0x00010882ed88();
                func_0x00010882eca4();
                if (extraout_x8_23 != 0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_16 != 0);
                }
                puStack_338 = &UNK_10f4bcee0;
                func_0x00010882ebcc();
                func_0x000107c28258();
                func_0x000107c3379c();
                (*extraout_x8_24)();
                func_0x000107c33790();
                func_0x000107c33824();
                func_0x000107c3396c();
                func_0x00010882f010();
                func_0x00010882e3f0();
                func_0x00010882eed0();
                ppppuVar23 = pppppuVar10[5];
                func_0x00010882e9f0();
                FUN_108829b90();
                func_0x00010882e15c();
                pcStack_2a8 = FUN_108829ae0;
                ppuStack_2a0 = &PTR_FUN_110a78168;
                func_0x000107c339b8();
                func_0x00010882f2a0();
                FUN_108829b90();
                func_0x00010882e080();
                func_0x00010882df0c(uStack_2d0);
                func_0x000107c33820();
                func_0x000107c337b4();
                func_0x000108829abc(&puStack_330);
                func_0x00010882ee40();
                FUN_108829bb8(apppuStack_3b8);
                func_0x000107c33948();
                pppppuVar11 = (undefined8 *****)&pppuStack_360;
                func_0x000108625e34(pppppuVar11);
                func_0x000107c33784();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x00010882e104();
                  func_0x000108829abc(&puStack_330);
                  func_0x00010882ee40();
                  FUN_108829bb8(apppuStack_3b8);
                  func_0x000107c33948();
                  func_0x000108625e34(&pppuStack_360);
                  func_0x00010882edf0();
                  pcVar19 = FUN_108828504;
                  func_0x00010882ff54();
                  ppppppuStack_200 = &ppppppuStack_210;
                  pcStack_1f8 = pcVar19;
                  func_0x000107c337b0();
                  func_0x00010882fa64();
                  if (ppppuVar22 != (undefined8 ****)0x0) {
                    do {
                      func_0x000107c3383c();
                    } while (extraout_w10_17 != 0);
                  }
                  func_0x000107c33ae0();
                  ppppuVar20 = pppppuVar10[2];
                  func_0x00010882f63c();
                  uVar21 = (undefined1)param_5;
                  uVar17 = SUB81(ppppuVar20,0);
                  pppuStack_390 = ppppuVar23;
                  pppcStack_388 = (code ***)ppppuVar22;
                  if (ppppuVar22 != (undefined8 ****)0x0) {
                    do {
                      func_0x000107c3383c();
                      uVar21 = (undefined1)param_5;
                      uVar17 = SUB81(ppppuVar20,0);
                    } while (extraout_w10_18 != 0);
                  }
                  puStack_338 = &UNK_10f4bcef9;
                  puVar14 = auStack_378;
                  func_0x00010882f018();
                  func_0x000107c28258();
                  func_0x000107c3379c();
                  (*extraout_x8_25)();
                  func_0x000107c337e4();
                  func_0x000107c338d4();
                  func_0x000107c3396c();
                  func_0x00010882f010();
                  func_0x00010882e3f0();
                  func_0x00010882eed0();
                  func_0x00010882e78c();
                  pcStack_2c0 = FUN_108829c00;
                  ppuStack_2b8 = &PTR_FUN_110a78180;
                  func_0x000107c33a44();
                  func_0x00010882e8dc();
                  func_0x000107c338ec();
                  func_0x00010882ea00();
                  func_0x000108829bdc(&puStack_330);
                  func_0x00010882ee40();
                  pppppuVar8 = (undefined8 *****)&pppuStack_3a0;
                  FUN_108829cb8();
                  func_0x000107c33a40();
                  func_0x00010882f8b4();
                  func_0x000107c337a8(uStack_260);
                  if ((bool)in_ZR) {
                    return pppppuVar8;
                  }
                  ___stack_chk_fail();
                  func_0x00010882ea00();
                  func_0x000108829bdc(&puStack_330);
                  func_0x00010882ee40();
                  FUN_108829cb8(&pppuStack_3a0);
                  func_0x000107c33a40();
                  func_0x00010882f8b4();
                  func_0x00010882edf0();
                  func_0x000107c33c58(FUN_108828644);
                  appppppuStack_370[0] = &ppppppuStack_200;
                  func_0x000107c337b0();
                  ppppuVar22 = (undefined8 ****)*param_8;
                  ppppuVar23 = (undefined8 ****)param_8[1];
                  pppuStack_500 = ppppuVar22;
                  pppuStack_4f8 = ppppuVar23;
                  uStack_3d0 = extraout_x8_26;
                  if (ppppuVar23 != (undefined8 ****)0x0) {
                    do {
                      func_0x000107c3383c();
                    } while (extraout_w10_19 != 0);
                  }
                  lStack_518 = 0;
                  lStack_510 = 0;
                  lStack_508 = 0;
                  func_0x000107c29cfc(&lStack_568,pppppuVar8[1],pppppuVar8[2]);
                  plStack_550 = (long *)CONCAT71(plStack_550._1_7_,uVar17);
                  uStack_538 = (undefined1)param_6;
                  uStack_537 = (undefined7)((ulong)param_6 >> 8);
                  uStack_530 = (undefined1)param_7;
                  puStack_558 = puVar14;
                  pcStack_548 = pcVar16;
                  uStack_540 = uVar21;
                  pppuStack_528 = ppppuVar22;
                  pppuStack_520 = ppppuVar23;
                  if (ppppuVar23 != (undefined8 ****)0x0) {
                    do {
                      func_0x000107c3383c();
                    } while (extraout_w10_20 != 0);
                  }
                  puStack_4d8 = &UNK_10f4bcf15;
                  plVar15 = &lStack_518;
                  func_0x00010882f338();
                  func_0x000107c28258();
                  func_0x000107c3379c();
                  (*extraout_x8_27)();
                  func_0x000107c337f8();
                  func_0x000107c33960();
                  func_0x000107c3396c();
                  func_0x000107c33a9c();
                  func_0x00010882e55c();
                  func_0x00010882f02c();
                  lVar7 = lStack_508;
                  lVar6 = lStack_510;
                  lVar5 = lStack_518;
                  pppuVar4 = pppuStack_520;
                  pppuVar3 = pppuStack_528;
                  lVar2 = lStack_560;
                  lVar1 = lStack_568;
                  ppppuVar22 = pppppuVar8[5];
                  lStack_4d0 = lStack_568;
                  lStack_4c8 = lStack_560;
                  lStack_560 = 0;
                  lStack_568 = 0;
                  lStack_4b8 = (long)plStack_550;
                  puStack_4c0 = puStack_558;
                  uStack_4a8 = uStack_540;
                  pcStack_4b0 = pcStack_548;
                  uStack_49f = CONCAT17(uStack_530,uStack_537);
                  uStack_4a0 = uStack_538;
                  pppuStack_490 = pppuStack_528;
                  pppuStack_488 = pppuStack_520;
                  pppuStack_528 = (undefined8 ***)0x0;
                  pppuStack_520 = (undefined8 ****)0x0;
                  pcStack_480 = (code *)0x0;
                  uStack_470 = 1;
                  lStack_468 = lStack_518;
                  lStack_460 = lStack_510;
                  lStack_518 = 0;
                  lStack_510 = 0;
                  lStack_508 = 0;
                  lStack_458 = lVar7;
                  lStack_448 = lStack_4f0;
                  lStack_440 = lStack_4e8;
                  lStack_438 = lStack_4e0;
                  ppuStack_478 = (undefined **)param_7;
                  ppppuStack_450 = pppppuVar8 + 7;
                  func_0x00010882f710();
                  pcStack_430 = FUN_108829cfc;
                  ppuStack_428 = &PTR_FUN_110a78198;
                  func_0x000107c33a2c();
                  *plVar15 = lVar1;
                  plVar15[1] = lVar2;
                  pcVar16 = pcStack_548;
                  puVar14 = puStack_558;
                  lStack_4d0 = 0;
                  lStack_4c8 = 0;
                  lVar1 = CONCAT71(uStack_53f,uStack_540);
                  plVar15[3] = (long)plStack_550;
                  plVar15[2] = (long)puVar14;
                  plVar15[5] = lVar1;
                  plVar15[4] = (long)pcVar16;
                  uVar24 = CONCAT17(uStack_538,uStack_53f);
                  *(ulong *)((long)plVar15 + 0x31) = CONCAT17(uStack_530,uStack_537);
                  *(undefined8 *)((long)plVar15 + 0x29) = uVar24;
                  plVar15[8] = (long)pppuVar3;
                  plVar15[9] = (long)pppuVar4;
                  pcVar16 = pcStack_480;
                  pppuStack_490 = (undefined8 ***)0x0;
                  pppuStack_488 = (undefined8 ***)0x0;
                  lVar1 = CONCAT71(uStack_46f,uStack_470);
                  plVar15[0xb] = (long)ppuStack_478;
                  plVar15[10] = (long)pcVar16;
                  plVar15[0xc] = lVar1;
                  plVar15[0xd] = lVar5;
                  plVar15[0xe] = lVar6;
                  plVar15[0xf] = lVar7;
                  lStack_468 = 0;
                  lStack_460 = 0;
                  lStack_458 = 0;
                  plVar15[0x10] = (long)(pppppuVar8 + 7);
                  plVar15[0x11] = lStack_4f0;
                  plVar15[0x12] = lStack_4e8;
                  plVar15[0x13] = lStack_4e0;
                  lStack_440 = 0;
                  lStack_438 = 0;
                  lStack_448 = 0;
                  plStack_420 = plVar15;
                  func_0x000107c339ac(ppppuVar22);
                  func_0x00010882fc6c();
                  func_0x00010882eb54();
                  func_0x000108829cd8(&lStack_4d0);
                  func_0x000107c33a04();
                  FUN_108829dc0(&lStack_568);
                  func_0x000107c280f8(&lStack_518);
                  pppppuVar8 = (undefined8 *****)&pppuStack_500;
                  func_0x000108625dec();
                  func_0x000107c337a8(uStack_3d0);
                  if ((bool)in_ZR) {
                    return pppppuVar8;
                  }
                  ___stack_chk_fail();
                  func_0x00010882eb54();
                  func_0x000108829cd8(&lStack_4d0);
                  func_0x000107c33a04();
                  FUN_108829dc0(&lStack_568);
                  func_0x000107c280f8(&lStack_518);
                  func_0x000108625dec(&pppuStack_500);
                  func_0x00010882edf0();
                  pcVar16 = FUN_1088288b4;
                  func_0x00010882ff54();
                  ppppppuStack_3c0 = appppppuStack_370;
                  apppuStack_3b8[0] = (undefined8 ***)pcVar16;
                  func_0x000107c337b0();
                  func_0x00010882fa64();
                  if (lVar5 != 0) {
                    do {
                      func_0x000107c3383c();
                    } while (extraout_w10_21 != 0);
                  }
                  func_0x000107c33ae0();
                  func_0x00010882f63c();
                  pcStack_548 = (code *)lVar5;
                  plStack_550 = &lStack_4d0;
                  if (lVar5 != 0) {
                    do {
                      func_0x000107c3383c();
                    } while (extraout_w10_22 != 0);
                  }
                  pppuStack_4f8 = (undefined8 ***)&UNK_10f4bcf38;
                  func_0x00010882f018(&uStack_538);
                  func_0x000107c28258();
                  func_0x000107c3379c();
                  (*extraout_x8_28)();
                  func_0x000107c337e4();
                  func_0x000107c338d4();
                  func_0x000107c3396c();
                  func_0x00010882f010();
                  func_0x00010882e3f0();
                  func_0x00010882eed0();
                  func_0x00010882e78c();
                  pcStack_480 = FUN_108829e04;
                  ppuStack_478 = &PTR_FUN_110a781b0;
                  func_0x000107c33a44();
                  func_0x00010882e8dc();
                  func_0x000107c338ec();
                  func_0x00010882ea00();
                  func_0x000108829de0(&lStack_4f0);
                  func_0x00010882ee40();
                  FUN_108829ebc(&lStack_560);
                  func_0x000107c33a40();
                  pppppuVar8 = (undefined8 *****)&pppuStack_520;
                  func_0x000108625e58();
                  func_0x000107c337a8(plStack_420);
                  if ((bool)in_ZR) {
                    return pppppuVar8;
                  }
                  ___stack_chk_fail();
                  func_0x00010882ea00();
                  func_0x000108829de0(&lStack_4f0);
                  func_0x00010882ee40();
                  FUN_108829ebc(&lStack_560);
                  func_0x000107c33a40();
                  pppppuVar8 = (undefined8 *****)&pppuStack_520;
                  func_0x000108625e58(pppppuVar8);
                  func_0x00010882edf0();
                  func_0x00010882eb68(&PTR_DAT_110a77e80);
                  func_0x000107c29344(pppppuVar8 + 3);
                  func_0x000107c29cf4(lVar5);
                  return pppppuVar8;
                }
              }
            }
          }
        }
      }
      return pppppuVar11;
    }
  }
  return pppppuVar8;
}



/* Entry: 1088277a4; end: 1088278b3;  */

code ** FUN_1088277a4(long param_1)

{
  code **ppcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 in_ZR;
  code **ppcVar8;
  undefined8 *puVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined8 ******ppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  undefined1 uVar21;
  undefined8 in_x4;
  undefined8 in_x5;
  long in_x6;
  long *in_x7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  code *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  code *extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  code *extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  code *extraout_x8_22;
  code *extraout_x8_23;
  undefined8 extraout_x8_24;
  code *extraout_x8_25;
  code *extraout_x8_26;
  undefined8 extraout_x9;
  code *pcVar22;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  long unaff_x20;
  code *in_stack_00000030;
  undefined *in_stack_00000088;
  undefined *in_stack_000000a8;
  code *in_stack_000000b0;
  undefined **in_stack_000000b8;
  undefined8 in_stack_000000f0;
  code *in_stack_00000100;
  undefined **in_stack_00000108;
  undefined8 in_stack_00000110;
  code *in_stack_00000118;
  undefined **in_stack_00000120;
  undefined8 in_stack_00000160;
  undefined8 *in_stack_00000170;
  undefined8 *in_stack_000001b0;
  code *in_stack_000001b8;
  undefined8 *in_stack_000001c0;
  code *in_stack_000001c8;
  long lStack_378;
  long lStack_370;
  undefined1 *puStack_368;
  long *plStack_360;
  code *pcStack_358;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  code *pcStack_338;
  code *pcStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  code *pcStack_310;
  code *pcStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined1 *puStack_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2af;
  code *pcStack_2a0;
  code *pcStack_298;
  code *pcStack_290;
  undefined **ppuStack_288;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  code **ppcStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  code *pcStack_240;
  undefined **ppuStack_238;
  long *plStack_230;
  undefined8 uStack_1e0;
  undefined8 ******ppppppuStack_1d0;
  code *apcStack_1c8 [3];
  code *pcStack_1b0;
  undefined4 uStack_1a8;
  code *pcStack_1a0;
  code **ppcStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 ******appppppuStack_180 [2];
  code *pcStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [88];
  undefined8 uStack_e0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_70;
  undefined8 uStack_40;
  code **ppcStack_38;
  code **ppcStack_30;
  code *pcStack_28;
  undefined8 ******ppppppuStack_20;
  code **ppcStack_18;
  undefined8 ******ppppppuStack_10;
  code *pcStack_8;
  
  func_0x000107c33b24();
  func_0x000107c337b0();
  in_stack_00000110 = extraout_x8;
  func_0x000107c33b9c();
  func_0x000107c29cfc(&stack0x00000008,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10))
  ;
  in_stack_000000a8 = &UNK_10f4bce23;
  func_0x000107c338f0();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_00)();
  func_0x000107c337f8();
  func_0x000107c338e4();
  func_0x000107c3396c();
  func_0x000107c33a9c();
  func_0x000107c33814();
  func_0x00010882f02c();
  func_0x000107c33794();
  in_stack_000000b0 = FUN_10882916c;
  in_stack_000000b8 = &PTR_FUN_110a78090;
  func_0x000107c33a64();
  func_0x000107c33780();
  func_0x000107c338f4();
  func_0x000107c337b8();
  ppcVar8 = &stack0x00000030;
  func_0x00010882914c();
  func_0x000107c33a04();
  func_0x00010882f0f8();
  func_0x000107c33a50();
  func_0x000107c337a8(in_stack_00000110);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c337b8();
    puVar9 = &stack0x00000030;
    func_0x00010882914c();
    func_0x000107c33a04();
    func_0x00010882f0f8();
    func_0x000107c33a50();
    func_0x00010882edf0();
    func_0x000107c33b24();
    in_stack_00000170 = &stack0x00000170;
    func_0x000107c337b0();
    in_stack_00000110 = extraout_x8_01;
    func_0x000107c33b9c();
    pcVar20 = (code *)&stack0x00000008;
    func_0x000107c29cfc(pcVar20,puVar9[1],puVar9[2]);
    in_stack_000000a8 = &UNK_10f4bce35;
    func_0x000107c338f0();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_02)();
    func_0x000107c337f8();
    func_0x000107c338e4();
    func_0x000107c3396c();
    func_0x000107c33a9c();
    func_0x000107c33814();
    ppcVar1 = ppcVar8 + 7;
    func_0x00010882f02c();
    func_0x000107c33794();
    in_stack_000000b0 = FUN_108829240;
    in_stack_000000b8 = &PTR_FUN_110a780a8;
    func_0x000107c33a64();
    func_0x000107c33780();
    func_0x000107c338f4();
    func_0x000107c337b8();
    ppcVar8 = &stack0x00000030;
    FUN_108829220();
    func_0x000107c33a04();
    func_0x00010882f0f8();
    func_0x000107c33a50();
    func_0x000107c337a8(in_stack_00000110);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000107c337b8();
      FUN_108829220(&stack0x00000030);
      func_0x000107c33a04();
      func_0x00010882f0f8();
      func_0x000107c33a50();
      func_0x00010882edf0();
      pcVar18 = FUN_1088279c4;
      func_0x00010882ff54();
      in_stack_000001c0 = &stack0x00000170;
      in_stack_000001c8 = pcVar18;
      func_0x000107c337b0();
      func_0x00010882fa64();
      if (unaff_x20 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10 != 0);
      }
      func_0x000107c33ae0();
      pcVar18 = ppcVar8[2];
      func_0x00010882f63c();
      in_stack_00000030 = pcVar20;
      if (unaff_x20 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_00 != 0);
      }
      in_stack_00000088 = &UNK_10f4bce52;
      func_0x00010882f018(&stack0x00000048);
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_03)();
      func_0x000107c337e4();
      func_0x000107c338d4();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e78c();
      in_stack_00000100 = FUN_108829314;
      in_stack_00000108 = &PTR_FUN_110a780c0;
      func_0x000107c33a44();
      func_0x00010882e8dc();
      func_0x000107c338ec();
      func_0x00010882ea00();
      FUN_1088292f0(&stack0x00000090);
      func_0x00010882ee40();
      FUN_1088293cc(&stack0x00000020);
      func_0x000107c33a40();
      ppcVar10 = (code **)&stack0x00000060;
      func_0x000108625da4();
      func_0x000107c337a8(in_stack_00000160);
      if ((bool)in_ZR) {
        return ppcVar10;
      }
      ___stack_chk_fail();
      func_0x00010882ea00();
      FUN_1088292f0(&stack0x00000090);
      func_0x00010882ee40();
      FUN_1088293cc(&stack0x00000020);
      func_0x000107c33a40();
      func_0x000108625da4(&stack0x00000060);
      func_0x00010882edf0();
      pcVar20 = FUN_108827b0c;
      func_0x000107c33bfc();
      in_stack_000001b0 = &stack0x000001c0;
      in_stack_000001b8 = pcVar20;
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_04 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882ed88();
      func_0x00010882eca4();
      if (extraout_x8_05 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_02 != 0);
      }
      in_stack_00000088 = &UNK_10f4bce6d;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_06)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e9f0();
      FUN_1088294c0();
      func_0x00010882e15c();
      in_stack_00000118 = FUN_108829410;
      in_stack_00000120 = &PTR_FUN_110a780d8;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_1088294c0();
      func_0x00010882e080();
      func_0x00010882df0c(in_stack_000000f0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x0001088293ec(&stack0x00000090);
      func_0x00010882ee40();
      ppcVar11 = (code **)&stack0x00000008;
      FUN_1088294e8(ppcVar11);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x000107c33784();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x0001088293ec(&stack0x00000090);
        func_0x00010882ee40();
        ppppppuVar12 = (undefined8 ******)&stack0x00000008;
        FUN_1088294e8();
        func_0x000107c33948();
        func_0x00010882f144();
        func_0x00010882edf0();
        pcVar20 = FUN_108827c6c;
        func_0x000107c33bfc();
        in_stack_000001b0 = &stack0x000001b0;
        in_stack_000001b8 = pcVar20;
        func_0x000107c3378c();
        func_0x00010882eda8();
        if (extraout_x8_07 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_03 != 0);
        }
        func_0x00010882ebd8();
        func_0x00010882eb94();
        func_0x00010882ed88();
        func_0x00010882eca4();
        if (extraout_x8_08 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_04 != 0);
        }
        in_stack_00000088 = &UNK_10f4bce85;
        func_0x00010882ebcc();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_09)();
        func_0x000107c33790();
        func_0x000107c33824();
        func_0x000107c3396c();
        func_0x00010882f010();
        func_0x00010882e3f0();
        func_0x00010882eed0();
        func_0x00010882e9f0();
        FUN_1088295dc();
        func_0x00010882e15c();
        in_stack_00000118 = FUN_10882952c;
        in_stack_00000120 = &PTR_FUN_110a780f0;
        func_0x000107c339b8();
        func_0x00010882f2a0();
        FUN_1088295dc();
        func_0x00010882e080();
        func_0x00010882df0c(in_stack_000000f0);
        func_0x000107c33820();
        func_0x000107c337b4();
        func_0x000108829508(&stack0x00000090);
        func_0x00010882ee40();
        ppcVar11 = (code **)&stack0x00000008;
        FUN_108829604(ppcVar11);
        func_0x000107c33948();
        func_0x00010882f144();
        func_0x000107c33784();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829508(&stack0x00000090);
          func_0x00010882ee40();
          FUN_108829604(&stack0x00000008);
          func_0x000107c33948();
          func_0x00010882f144();
          func_0x00010882edf0();
          pcVar20 = FUN_108827dcc;
          func_0x000107c33bfc();
          in_stack_000001b0 = &stack0x000001b0;
          in_stack_000001b8 = pcVar20;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_10 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_05 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882f2ec();
          func_0x000107c27994();
          func_0x00010882eca4();
          uVar17 = SUB84(pcVar18,0);
          if (extraout_x8_11 != 0) {
            do {
              func_0x000107c3383c();
              uVar17 = SUB84(pcVar18,0);
            } while (extraout_w10_06 != 0);
          }
          in_stack_00000088 = &UNK_10f4bce90;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_12)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          pcVar18 = ppcVar10[5];
          func_0x00010882e9f0();
          FUN_1088296f8();
          func_0x00010882e15c();
          in_stack_00000118 = FUN_108829648;
          in_stack_00000120 = &PTR_FUN_110a78108;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_1088296f8();
          func_0x00010882e080();
          func_0x00010882df0c(in_stack_000000f0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829624(&stack0x00000090);
          func_0x00010882ee40();
          FUN_108829720(&stack0x00000008);
          func_0x000107c33948();
          ppcVar11 = (code **)&stack0x00000060;
          func_0x000108625dc8(ppcVar11);
          func_0x000107c33784();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010882e104();
            func_0x000108829624(&stack0x00000090);
            func_0x00010882ee40();
            FUN_108829720(&stack0x00000008);
            func_0x000107c33948();
            func_0x000108625dc8(&stack0x00000060);
            func_0x00010882edf0();
            pppppppuVar13 = &ppppppuStack_1d0;
            uStack_40 = 1;
            pcStack_8 = FUN_108827f38;
            ppcStack_38 = ppcVar8 + 7;
            ppcStack_30 = ppcVar1;
            pcStack_28 = pcVar18;
            ppppppuStack_20 = ppppppuVar12;
            ppcStack_18 = ppcVar10;
            ppppppuStack_10 = (undefined8 ******)&stack0x000001b0;
            func_0x000107c3378c();
            lStack_168 = *(long *)(pcVar20 + 8);
            pcStack_170 = *(code **)pcVar20;
            if (*(long *)(pcVar20 + 8) != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_07 != 0);
            }
            func_0x00010882ebd8();
            func_0x00010882fbf8();
            func_0x00010882e694();
            ppcStack_198 = (code **)lStack_168;
            pcStack_1a0 = pcStack_170;
            uStack_1a8 = uVar17;
            if (lStack_168 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_08 != 0);
            }
            puStack_140 = &UNK_10f4b12f2;
            func_0x00010882f098(auStack_190);
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_13)();
            func_0x000107c33790();
            func_0x000107c33824();
            func_0x000107c3396c();
            func_0x00010882f090();
            func_0x00010882e42c();
            func_0x00010882eef4();
            func_0x00010882ea30();
            FUN_108829820();
            func_0x00010882f0bc();
            func_0x000107c337a0();
            pcStack_b8 = (code *)uStack_158;
            uStack_c0 = uStack_160;
            pcStack_d0 = (code *)extraout_x9;
            func_0x00010882e62c();
            pcStack_a8 = FUN_108829768;
            ppuStack_a0 = &PTR_FUN_110a78120;
            func_0x000107c339e0();
            func_0x00010882f34c();
            FUN_108829820();
            func_0x00010882e13c();
            func_0x00010882df40(pcStack_d0);
            func_0x000107c33820();
            func_0x000107c337b4();
            func_0x000108829744(auStack_138);
            func_0x00010882ee40();
            FUN_10882985c(&ppppppuStack_1d0);
            func_0x000107c33948();
            func_0x00010882f144();
            func_0x000107c33784();
            if ((bool)in_ZR) {
              return (code **)pppppppuVar13;
            }
            ___stack_chk_fail();
            func_0x00010882e104();
            func_0x000108829744(auStack_138);
            func_0x00010882ee40();
            FUN_10882985c(&ppppppuStack_1d0);
            func_0x000107c33948();
            func_0x00010882f144();
            func_0x00010882edf0();
            pcVar20 = FUN_1088280d4;
            func_0x000107c33bfc();
            ppppppuStack_20 = &ppppppuStack_10;
            ppcStack_18 = (code **)pcVar20;
            func_0x000107c3378c();
            func_0x00010882eda8();
            if (extraout_x8_14 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_09 != 0);
            }
            func_0x00010882ebd8();
            func_0x00010882eb94();
            func_0x00010882ed88();
            func_0x00010882eca4();
            if (extraout_x8_15 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_10 != 0);
            }
            puStack_148 = &UNK_10f4bcea8;
            func_0x00010882ebcc();
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_16)();
            func_0x000107c33790();
            func_0x000107c33824();
            func_0x000107c3396c();
            func_0x00010882f010();
            func_0x00010882e3f0();
            func_0x00010882eed0();
            func_0x00010882e9f0();
            FUN_108829950();
            func_0x00010882e15c();
            pcStack_b8 = FUN_1088298a0;
            ppuStack_b0 = &PTR_FUN_110a78138;
            func_0x000107c339b8();
            func_0x00010882f2a0();
            FUN_108829950();
            func_0x00010882e080();
            func_0x00010882df0c(uStack_e0);
            func_0x000107c33820();
            func_0x000107c337b4();
            func_0x00010882987c(&puStack_140);
            func_0x00010882ee40();
            ppcVar11 = apcStack_1c8;
            FUN_108829978(ppcVar11);
            func_0x000107c33948();
            func_0x00010882f8b4();
            func_0x000107c33784();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010882e104();
              func_0x00010882987c(&puStack_140);
              func_0x00010882ee40();
              ppcVar8 = apcStack_1c8;
              FUN_108829978();
              func_0x000107c33948();
              func_0x00010882f8b4();
              func_0x00010882edf0();
              pcVar20 = FUN_108828234;
              func_0x000107c33bfc();
              ppppppuStack_20 = &ppppppuStack_20;
              ppcStack_18 = (code **)pcVar20;
              func_0x000107c3378c();
              func_0x00010882eda8();
              if (extraout_x8_17 != 0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_11 != 0);
              }
              func_0x00010882ebd8();
              func_0x00010882eb94();
              func_0x00010882ed88();
              func_0x00010882eca4();
              if (extraout_x8_18 != 0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_12 != 0);
              }
              puStack_148 = &UNK_10f4bceb9;
              func_0x00010882ebcc();
              func_0x000107c28258();
              func_0x000107c3379c();
              (*extraout_x8_19)();
              func_0x000107c33790();
              func_0x000107c33824();
              func_0x000107c3396c();
              func_0x00010882f010();
              func_0x00010882e3f0();
              func_0x00010882eed0();
              func_0x00010882e9f0();
              FUN_108829a70();
              func_0x00010882e15c();
              pcStack_b8 = FUN_1088299c0;
              ppuStack_b0 = &PTR_FUN_110a78150;
              func_0x000107c339b8();
              func_0x00010882f2a0();
              FUN_108829a70();
              func_0x00010882e080();
              func_0x00010882df0c(uStack_e0);
              func_0x000107c33820();
              func_0x000107c337b4();
              func_0x00010882999c(&puStack_140);
              func_0x00010882ee40();
              FUN_108829a98(apcStack_1c8);
              func_0x000107c33948();
              ppcVar11 = &pcStack_170;
              func_0x000108625e10(ppcVar11);
              func_0x000107c33784();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x00010882e104();
                func_0x00010882999c(&puStack_140);
                func_0x00010882ee40();
                FUN_108829a98(apcStack_1c8);
                func_0x000107c33948();
                func_0x000108625e10(&pcStack_170);
                func_0x00010882edf0();
                pcVar20 = FUN_10882839c;
                func_0x000107c33bfc();
                ppppppuStack_20 = &ppppppuStack_20;
                ppcStack_18 = (code **)pcVar20;
                func_0x000107c3378c();
                func_0x00010882eda8();
                if (extraout_x8_20 != 0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_13 != 0);
                }
                func_0x00010882ebd8();
                func_0x00010882eb94();
                func_0x00010882ed88();
                func_0x00010882eca4();
                if (extraout_x8_21 != 0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_14 != 0);
                }
                puStack_148 = &UNK_10f4bcee0;
                func_0x00010882ebcc();
                func_0x000107c28258();
                func_0x000107c3379c();
                (*extraout_x8_22)();
                func_0x000107c33790();
                func_0x000107c33824();
                func_0x000107c3396c();
                func_0x00010882f010();
                func_0x00010882e3f0();
                func_0x00010882eed0();
                pcVar18 = ppcVar10[5];
                func_0x00010882e9f0();
                FUN_108829b90();
                func_0x00010882e15c();
                pcStack_b8 = FUN_108829ae0;
                ppuStack_b0 = &PTR_FUN_110a78168;
                func_0x000107c339b8();
                func_0x00010882f2a0();
                FUN_108829b90();
                func_0x00010882e080();
                func_0x00010882df0c(uStack_e0);
                func_0x000107c33820();
                func_0x000107c337b4();
                func_0x000108829abc(&puStack_140);
                func_0x00010882ee40();
                FUN_108829bb8(apcStack_1c8);
                func_0x000107c33948();
                ppcVar11 = &pcStack_170;
                func_0x000108625e34(ppcVar11);
                func_0x000107c33784();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x00010882e104();
                  func_0x000108829abc(&puStack_140);
                  func_0x00010882ee40();
                  FUN_108829bb8(apcStack_1c8);
                  func_0x000107c33948();
                  func_0x000108625e34(&pcStack_170);
                  func_0x00010882edf0();
                  pcVar19 = FUN_108828504;
                  func_0x00010882ff54();
                  ppppppuStack_10 = &ppppppuStack_20;
                  pcStack_8 = pcVar19;
                  func_0x000107c337b0();
                  func_0x00010882fa64();
                  if (ppcVar8 != (code **)0x0) {
                    do {
                      func_0x000107c3383c();
                    } while (extraout_w10_15 != 0);
                  }
                  func_0x000107c33ae0();
                  pcVar19 = ppcVar10[2];
                  func_0x00010882f63c();
                  uVar21 = (undefined1)in_x4;
                  uVar16 = SUB81(pcVar19,0);
                  pcStack_1a0 = pcVar18;
                  ppcStack_198 = ppcVar8;
                  if (ppcVar8 != (code **)0x0) {
                    do {
                      func_0x000107c3383c();
                      uVar21 = (undefined1)in_x4;
                      uVar16 = SUB81(pcVar19,0);
                    } while (extraout_w10_16 != 0);
                  }
                  puStack_148 = &UNK_10f4bcef9;
                  puVar14 = auStack_188;
                  func_0x00010882f018();
                  func_0x000107c28258();
                  func_0x000107c3379c();
                  (*extraout_x8_23)();
                  func_0x000107c337e4();
                  func_0x000107c338d4();
                  func_0x000107c3396c();
                  func_0x00010882f010();
                  func_0x00010882e3f0();
                  func_0x00010882eed0();
                  func_0x00010882e78c();
                  pcStack_d0 = FUN_108829c00;
                  ppuStack_c8 = &PTR_FUN_110a78180;
                  func_0x000107c33a44();
                  func_0x00010882e8dc();
                  func_0x000107c338ec();
                  func_0x00010882ea00();
                  func_0x000108829bdc(&puStack_140);
                  func_0x00010882ee40();
                  ppcVar8 = &pcStack_1b0;
                  FUN_108829cb8();
                  func_0x000107c33a40();
                  func_0x00010882f8b4();
                  func_0x000107c337a8(uStack_70);
                  if ((bool)in_ZR) {
                    return ppcVar8;
                  }
                  ___stack_chk_fail();
                  func_0x00010882ea00();
                  func_0x000108829bdc(&puStack_140);
                  func_0x00010882ee40();
                  FUN_108829cb8(&pcStack_1b0);
                  func_0x000107c33a40();
                  func_0x00010882f8b4();
                  func_0x00010882edf0();
                  func_0x000107c33c58(FUN_108828644);
                  appppppuStack_180[0] = &ppppppuStack_10;
                  func_0x000107c337b0();
                  pcVar18 = (code *)*in_x7;
                  pcVar19 = (code *)in_x7[1];
                  pcStack_310 = pcVar18;
                  pcStack_308 = pcVar19;
                  uStack_1e0 = extraout_x8_24;
                  if (pcVar19 != (code *)0x0) {
                    do {
                      func_0x000107c3383c();
                    } while (extraout_w10_17 != 0);
                  }
                  lStack_328 = 0;
                  lStack_320 = 0;
                  lStack_318 = 0;
                  func_0x000107c29cfc(&lStack_378,ppcVar8[1],ppcVar8[2]);
                  plStack_360 = (long *)CONCAT71(plStack_360._1_7_,uVar16);
                  uStack_348 = (undefined1)in_x5;
                  uStack_347 = (undefined7)((ulong)in_x5 >> 8);
                  uStack_340 = (undefined1)in_x6;
                  puStack_368 = puVar14;
                  pcStack_358 = pcVar20;
                  uStack_350 = uVar21;
                  pcStack_338 = pcVar18;
                  pcStack_330 = pcVar19;
                  if (pcVar19 != (code *)0x0) {
                    do {
                      func_0x000107c3383c();
                    } while (extraout_w10_18 != 0);
                  }
                  puStack_2e8 = &UNK_10f4bcf15;
                  plVar15 = &lStack_328;
                  func_0x00010882f338();
                  func_0x000107c28258();
                  func_0x000107c3379c();
                  (*extraout_x8_25)();
                  func_0x000107c337f8();
                  func_0x000107c33960();
                  func_0x000107c3396c();
                  func_0x000107c33a9c();
                  func_0x00010882e55c();
                  func_0x00010882f02c();
                  lVar7 = lStack_318;
                  lVar6 = lStack_320;
                  lVar5 = lStack_328;
                  pcVar19 = pcStack_330;
                  pcVar18 = pcStack_338;
                  lVar4 = lStack_370;
                  lVar2 = lStack_378;
                  pcVar22 = ppcVar8[5];
                  lStack_2e0 = lStack_378;
                  lStack_2d8 = lStack_370;
                  lStack_370 = 0;
                  lStack_378 = 0;
                  lStack_2c8 = (long)plStack_360;
                  puStack_2d0 = puStack_368;
                  uStack_2b8 = uStack_350;
                  pcStack_2c0 = pcStack_358;
                  uStack_2af = CONCAT17(uStack_340,uStack_347);
                  uStack_2b0 = uStack_348;
                  pcStack_2a0 = pcStack_338;
                  pcStack_298 = pcStack_330;
                  pcStack_338 = (code *)0x0;
                  pcStack_330 = (code *)0x0;
                  pcStack_290 = (code *)0x0;
                  uStack_280 = 1;
                  lStack_278 = lStack_328;
                  lStack_270 = lStack_320;
                  lStack_328 = 0;
                  lStack_320 = 0;
                  lStack_318 = 0;
                  lStack_268 = lVar7;
                  lStack_258 = lStack_300;
                  lStack_250 = lStack_2f8;
                  lStack_248 = lStack_2f0;
                  ppuStack_288 = (undefined **)in_x6;
                  ppcStack_260 = ppcVar8 + 7;
                  func_0x00010882f710();
                  pcStack_240 = FUN_108829cfc;
                  ppuStack_238 = &PTR_FUN_110a78198;
                  func_0x000107c33a2c();
                  *plVar15 = lVar2;
                  plVar15[1] = lVar4;
                  pcVar20 = pcStack_358;
                  puVar14 = puStack_368;
                  lStack_2e0 = 0;
                  lStack_2d8 = 0;
                  lVar2 = CONCAT71(uStack_34f,uStack_350);
                  plVar15[3] = (long)plStack_360;
                  plVar15[2] = (long)puVar14;
                  plVar15[5] = lVar2;
                  plVar15[4] = (long)pcVar20;
                  uVar3 = CONCAT17(uStack_348,uStack_34f);
                  *(ulong *)((long)plVar15 + 0x31) = CONCAT17(uStack_340,uStack_347);
                  *(undefined8 *)((long)plVar15 + 0x29) = uVar3;
                  plVar15[8] = (long)pcVar18;
                  plVar15[9] = (long)pcVar19;
                  pcVar20 = pcStack_290;
                  pcStack_2a0 = (code *)0x0;
                  pcStack_298 = (code *)0x0;
                  lVar2 = CONCAT71(uStack_27f,uStack_280);
                  plVar15[0xb] = (long)ppuStack_288;
                  plVar15[10] = (long)pcVar20;
                  plVar15[0xc] = lVar2;
                  plVar15[0xd] = lVar5;
                  plVar15[0xe] = lVar6;
                  plVar15[0xf] = lVar7;
                  lStack_278 = 0;
                  lStack_270 = 0;
                  lStack_268 = 0;
                  plVar15[0x10] = (long)(ppcVar8 + 7);
                  plVar15[0x11] = lStack_300;
                  plVar15[0x12] = lStack_2f8;
                  plVar15[0x13] = lStack_2f0;
                  lStack_250 = 0;
                  lStack_248 = 0;
                  lStack_258 = 0;
                  plStack_230 = plVar15;
                  func_0x000107c339ac(pcVar22);
                  func_0x00010882fc6c();
                  func_0x00010882eb54();
                  func_0x000108829cd8(&lStack_2e0);
                  func_0x000107c33a04();
                  FUN_108829dc0(&lStack_378);
                  func_0x000107c280f8(&lStack_328);
                  ppcVar8 = &pcStack_310;
                  func_0x000108625dec();
                  func_0x000107c337a8(uStack_1e0);
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x00010882eb54();
                    func_0x000108829cd8(&lStack_2e0);
                    func_0x000107c33a04();
                    FUN_108829dc0(&lStack_378);
                    func_0x000107c280f8(&lStack_328);
                    func_0x000108625dec(&pcStack_310);
                    func_0x00010882edf0();
                    pcVar20 = FUN_1088288b4;
                    func_0x00010882ff54();
                    ppppppuStack_1d0 = appppppuStack_180;
                    apcStack_1c8[0] = pcVar20;
                    func_0x000107c337b0();
                    func_0x00010882fa64();
                    if (lVar5 != 0) {
                      do {
                        func_0x000107c3383c();
                      } while (extraout_w10_19 != 0);
                    }
                    func_0x000107c33ae0();
                    func_0x00010882f63c();
                    pcStack_358 = (code *)lVar5;
                    plStack_360 = &lStack_2e0;
                    if (lVar5 != 0) {
                      do {
                        func_0x000107c3383c();
                      } while (extraout_w10_20 != 0);
                    }
                    pcStack_308 = (code *)&UNK_10f4bcf38;
                    func_0x00010882f018(&uStack_348);
                    func_0x000107c28258();
                    func_0x000107c3379c();
                    (*extraout_x8_26)();
                    func_0x000107c337e4();
                    func_0x000107c338d4();
                    func_0x000107c3396c();
                    func_0x00010882f010();
                    func_0x00010882e3f0();
                    func_0x00010882eed0();
                    func_0x00010882e78c();
                    pcStack_290 = FUN_108829e04;
                    ppuStack_288 = &PTR_FUN_110a781b0;
                    func_0x000107c33a44();
                    func_0x00010882e8dc();
                    func_0x000107c338ec();
                    func_0x00010882ea00();
                    func_0x000108829de0(&lStack_300);
                    func_0x00010882ee40();
                    FUN_108829ebc(&lStack_370);
                    func_0x000107c33a40();
                    ppcVar8 = &pcStack_330;
                    func_0x000108625e58();
                    func_0x000107c337a8(plStack_230);
                    if ((bool)in_ZR) {
                      return ppcVar8;
                    }
                    ___stack_chk_fail();
                    func_0x00010882ea00();
                    func_0x000108829de0(&lStack_300);
                    func_0x00010882ee40();
                    FUN_108829ebc(&lStack_370);
                    func_0x000107c33a40();
                    ppcVar8 = &pcStack_330;
                    func_0x000108625e58(ppcVar8);
                    func_0x00010882edf0();
                    func_0x00010882eb68(&PTR_DAT_110a77e80);
                    func_0x000107c29344(ppcVar8 + 3);
                    func_0x000107c29cf4(lVar5);
                    return ppcVar8;
                  }
                  return ppcVar8;
                }
              }
            }
          }
        }
      }
      return ppcVar11;
    }
  }
  return ppcVar8;
}



/* Entry: 1088278b4; end: 1088279c3;  */

code ** FUN_1088278b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 in_ZR;
  code **ppcVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 ******ppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  code *pcVar16;
  code *pcVar17;
  code *pcVar18;
  undefined1 uVar19;
  undefined8 in_x4;
  undefined8 in_x5;
  long in_x6;
  long *in_x7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  code *extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  code *extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  code *extraout_x8_20;
  code *extraout_x8_21;
  undefined8 extraout_x8_22;
  code *extraout_x8_23;
  code *extraout_x8_24;
  undefined8 extraout_x9;
  code *pcVar20;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  long unaff_x19;
  long unaff_x20;
  code *in_stack_00000030;
  undefined *in_stack_00000088;
  undefined *in_stack_000000a8;
  code *in_stack_000000b0;
  undefined **in_stack_000000b8;
  undefined8 in_stack_000000f0;
  code *in_stack_00000100;
  undefined **in_stack_00000108;
  undefined8 in_stack_00000110;
  code *in_stack_00000118;
  undefined **in_stack_00000120;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000170;
  undefined8 *in_stack_000001b0;
  code *in_stack_000001b8;
  undefined8 *in_stack_000001c0;
  code *in_stack_000001c8;
  long lStack_378;
  long lStack_370;
  undefined1 *puStack_368;
  long *plStack_360;
  code *pcStack_358;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  code *pcStack_338;
  code *pcStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  code *pcStack_310;
  code *pcStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined1 *puStack_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2af;
  code *pcStack_2a0;
  code *pcStack_298;
  code *pcStack_290;
  undefined **ppuStack_288;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  code **ppcStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  code *pcStack_240;
  undefined **ppuStack_238;
  long *plStack_230;
  undefined8 uStack_1e0;
  undefined8 ******ppppppuStack_1d0;
  code *apcStack_1c8 [3];
  code *pcStack_1b0;
  undefined4 uStack_1a8;
  code *pcStack_1a0;
  code **ppcStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 ******appppppuStack_180 [2];
  code *pcStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [88];
  undefined8 uStack_e0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_70;
  undefined8 uStack_40;
  code **ppcStack_38;
  long lStack_30;
  code *pcStack_28;
  undefined8 ******ppppppuStack_20;
  code **ppcStack_18;
  undefined8 ******ppppppuStack_10;
  code *pcStack_8;
  
  func_0x000107c33b24();
  func_0x000107c337b0();
  in_stack_00000110 = extraout_x8;
  func_0x000107c33b9c();
  pcVar18 = (code *)&stack0x00000008;
  func_0x000107c29cfc(pcVar18,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  in_stack_000000a8 = &UNK_10f4bce35;
  func_0x000107c338f0();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_00)();
  func_0x000107c337f8();
  func_0x000107c338e4();
  func_0x000107c3396c();
  func_0x000107c33a9c();
  func_0x000107c33814();
  func_0x00010882f02c();
  func_0x000107c33794();
  in_stack_000000b0 = FUN_108829240;
  in_stack_000000b8 = &PTR_FUN_110a780a8;
  func_0x000107c33a64();
  func_0x000107c33780();
  func_0x000107c338f4();
  func_0x000107c337b8();
  ppcVar7 = &stack0x00000030;
  FUN_108829220();
  func_0x000107c33a04();
  func_0x00010882f0f8();
  func_0x000107c33a50();
  func_0x000107c337a8(in_stack_00000110);
  if ((bool)in_ZR) {
    return ppcVar7;
  }
  ___stack_chk_fail();
  func_0x000107c337b8();
  FUN_108829220(&stack0x00000030);
  func_0x000107c33a04();
  func_0x00010882f0f8();
  func_0x000107c33a50();
  func_0x00010882edf0();
  pcVar16 = FUN_1088279c4;
  func_0x00010882ff54();
  in_stack_000001c0 = &stack0x00000170;
  in_stack_000001c8 = pcVar16;
  func_0x000107c337b0();
  func_0x00010882fa64();
  if (unaff_x20 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c33ae0();
  pcVar16 = ppcVar7[2];
  func_0x00010882f63c();
  in_stack_00000030 = pcVar18;
  if (unaff_x20 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000088 = &UNK_10f4bce52;
  func_0x00010882f018(&stack0x00000048);
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_01)();
  func_0x000107c337e4();
  func_0x000107c338d4();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e78c();
  in_stack_00000100 = FUN_108829314;
  in_stack_00000108 = &PTR_FUN_110a780c0;
  func_0x000107c33a44();
  func_0x00010882e8dc();
  func_0x000107c338ec();
  func_0x00010882ea00();
  FUN_1088292f0(&stack0x00000090);
  func_0x00010882ee40();
  FUN_1088293cc(&stack0x00000020);
  func_0x000107c33a40();
  ppcVar8 = (code **)&stack0x00000060;
  func_0x000108625da4();
  func_0x000107c337a8(in_stack_00000160);
  if ((bool)in_ZR) {
    return ppcVar8;
  }
  ___stack_chk_fail();
  func_0x00010882ea00();
  FUN_1088292f0(&stack0x00000090);
  func_0x00010882ee40();
  FUN_1088293cc(&stack0x00000020);
  func_0x000107c33a40();
  func_0x000108625da4(&stack0x00000060);
  func_0x00010882edf0();
  pcVar18 = FUN_108827b0c;
  func_0x000107c33bfc();
  in_stack_000001b0 = &stack0x000001c0;
  in_stack_000001b8 = pcVar18;
  func_0x000107c3378c();
  func_0x00010882eda8();
  if (extraout_x8_02 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882eb94();
  func_0x00010882ed88();
  func_0x00010882eca4();
  if (extraout_x8_03 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_02 != 0);
  }
  in_stack_00000088 = &UNK_10f4bce6d;
  func_0x00010882ebcc();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_04)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_1088294c0();
  func_0x00010882e15c();
  in_stack_00000118 = FUN_108829410;
  in_stack_00000120 = &PTR_FUN_110a780d8;
  func_0x000107c339b8();
  func_0x00010882f2a0();
  FUN_1088294c0();
  func_0x00010882e080();
  func_0x00010882df0c(in_stack_000000f0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x0001088293ec(&stack0x00000090);
  func_0x00010882ee40();
  ppcVar9 = (code **)&stack0x00000008;
  FUN_1088294e8(ppcVar9);
  func_0x000107c33948();
  func_0x00010882f144();
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x0001088293ec(&stack0x00000090);
    func_0x00010882ee40();
    ppppppuVar10 = (undefined8 ******)&stack0x00000008;
    FUN_1088294e8();
    func_0x000107c33948();
    func_0x00010882f144();
    func_0x00010882edf0();
    pcVar18 = FUN_108827c6c;
    func_0x000107c33bfc();
    in_stack_000001b0 = &stack0x000001b0;
    in_stack_000001b8 = pcVar18;
    func_0x000107c3378c();
    func_0x00010882eda8();
    if (extraout_x8_05 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_03 != 0);
    }
    func_0x00010882ebd8();
    func_0x00010882eb94();
    func_0x00010882ed88();
    func_0x00010882eca4();
    if (extraout_x8_06 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_04 != 0);
    }
    in_stack_00000088 = &UNK_10f4bce85;
    func_0x00010882ebcc();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_07)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    func_0x00010882e9f0();
    FUN_1088295dc();
    func_0x00010882e15c();
    in_stack_00000118 = FUN_10882952c;
    in_stack_00000120 = &PTR_FUN_110a780f0;
    func_0x000107c339b8();
    func_0x00010882f2a0();
    FUN_1088295dc();
    func_0x00010882e080();
    func_0x00010882df0c(in_stack_000000f0);
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x000108829508(&stack0x00000090);
    func_0x00010882ee40();
    ppcVar9 = (code **)&stack0x00000008;
    FUN_108829604(ppcVar9);
    func_0x000107c33948();
    func_0x00010882f144();
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108829508(&stack0x00000090);
      func_0x00010882ee40();
      FUN_108829604(&stack0x00000008);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x00010882edf0();
      pcVar18 = FUN_108827dcc;
      func_0x000107c33bfc();
      in_stack_000001b0 = &stack0x000001b0;
      in_stack_000001b8 = pcVar18;
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_08 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_05 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882f2ec();
      func_0x000107c27994();
      func_0x00010882eca4();
      uVar15 = SUB84(pcVar16,0);
      if (extraout_x8_09 != 0) {
        do {
          func_0x000107c3383c();
          uVar15 = SUB84(pcVar16,0);
        } while (extraout_w10_06 != 0);
      }
      in_stack_00000088 = &UNK_10f4bce90;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_10)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      pcVar16 = ppcVar8[5];
      func_0x00010882e9f0();
      FUN_1088296f8();
      func_0x00010882e15c();
      in_stack_00000118 = FUN_108829648;
      in_stack_00000120 = &PTR_FUN_110a78108;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_1088296f8();
      func_0x00010882e080();
      func_0x00010882df0c(in_stack_000000f0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x000108829624(&stack0x00000090);
      func_0x00010882ee40();
      FUN_108829720(&stack0x00000008);
      func_0x000107c33948();
      ppcVar9 = (code **)&stack0x00000060;
      func_0x000108625dc8(ppcVar9);
      func_0x000107c33784();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x000108829624(&stack0x00000090);
        func_0x00010882ee40();
        FUN_108829720(&stack0x00000008);
        func_0x000107c33948();
        func_0x000108625dc8(&stack0x00000060);
        func_0x00010882edf0();
        pppppppuVar11 = &ppppppuStack_1d0;
        uStack_40 = 1;
        pcStack_8 = FUN_108827f38;
        ppcStack_38 = ppcVar7 + 7;
        lStack_30 = unaff_x19 + 0x38;
        pcStack_28 = pcVar16;
        ppppppuStack_20 = ppppppuVar10;
        ppcStack_18 = ppcVar8;
        ppppppuStack_10 = (undefined8 ******)&stack0x000001b0;
        func_0x000107c3378c();
        lStack_168 = *(long *)(pcVar18 + 8);
        pcStack_170 = *(code **)pcVar18;
        if (*(long *)(pcVar18 + 8) != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_07 != 0);
        }
        func_0x00010882ebd8();
        func_0x00010882fbf8();
        func_0x00010882e694();
        ppcStack_198 = (code **)lStack_168;
        pcStack_1a0 = pcStack_170;
        uStack_1a8 = uVar15;
        if (lStack_168 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_08 != 0);
        }
        puStack_140 = &UNK_10f4b12f2;
        func_0x00010882f098(auStack_190);
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_11)();
        func_0x000107c33790();
        func_0x000107c33824();
        func_0x000107c3396c();
        func_0x00010882f090();
        func_0x00010882e42c();
        func_0x00010882eef4();
        func_0x00010882ea30();
        FUN_108829820();
        func_0x00010882f0bc();
        func_0x000107c337a0();
        pcStack_b8 = (code *)uStack_158;
        uStack_c0 = uStack_160;
        pcStack_d0 = (code *)extraout_x9;
        func_0x00010882e62c();
        pcStack_a8 = FUN_108829768;
        ppuStack_a0 = &PTR_FUN_110a78120;
        func_0x000107c339e0();
        func_0x00010882f34c();
        FUN_108829820();
        func_0x00010882e13c();
        func_0x00010882df40(pcStack_d0);
        func_0x000107c33820();
        func_0x000107c337b4();
        func_0x000108829744(auStack_138);
        func_0x00010882ee40();
        FUN_10882985c(&ppppppuStack_1d0);
        func_0x000107c33948();
        func_0x00010882f144();
        func_0x000107c33784();
        if ((bool)in_ZR) {
          return (code **)pppppppuVar11;
        }
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x000108829744(auStack_138);
        func_0x00010882ee40();
        FUN_10882985c(&ppppppuStack_1d0);
        func_0x000107c33948();
        func_0x00010882f144();
        func_0x00010882edf0();
        pcVar18 = FUN_1088280d4;
        func_0x000107c33bfc();
        ppppppuStack_20 = &ppppppuStack_10;
        ppcStack_18 = (code **)pcVar18;
        func_0x000107c3378c();
        func_0x00010882eda8();
        if (extraout_x8_12 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_09 != 0);
        }
        func_0x00010882ebd8();
        func_0x00010882eb94();
        func_0x00010882ed88();
        func_0x00010882eca4();
        if (extraout_x8_13 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_10 != 0);
        }
        puStack_148 = &UNK_10f4bcea8;
        func_0x00010882ebcc();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_14)();
        func_0x000107c33790();
        func_0x000107c33824();
        func_0x000107c3396c();
        func_0x00010882f010();
        func_0x00010882e3f0();
        func_0x00010882eed0();
        func_0x00010882e9f0();
        FUN_108829950();
        func_0x00010882e15c();
        pcStack_b8 = FUN_1088298a0;
        ppuStack_b0 = &PTR_FUN_110a78138;
        func_0x000107c339b8();
        func_0x00010882f2a0();
        FUN_108829950();
        func_0x00010882e080();
        func_0x00010882df0c(uStack_e0);
        func_0x000107c33820();
        func_0x000107c337b4();
        func_0x00010882987c(&puStack_140);
        func_0x00010882ee40();
        ppcVar9 = apcStack_1c8;
        FUN_108829978(ppcVar9);
        func_0x000107c33948();
        func_0x00010882f8b4();
        func_0x000107c33784();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x00010882987c(&puStack_140);
          func_0x00010882ee40();
          ppcVar7 = apcStack_1c8;
          FUN_108829978();
          func_0x000107c33948();
          func_0x00010882f8b4();
          func_0x00010882edf0();
          pcVar18 = FUN_108828234;
          func_0x000107c33bfc();
          ppppppuStack_20 = &ppppppuStack_20;
          ppcStack_18 = (code **)pcVar18;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_15 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_11 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_16 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_12 != 0);
          }
          puStack_148 = &UNK_10f4bceb9;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_17)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_108829a70();
          func_0x00010882e15c();
          pcStack_b8 = FUN_1088299c0;
          ppuStack_b0 = &PTR_FUN_110a78150;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_108829a70();
          func_0x00010882e080();
          func_0x00010882df0c(uStack_e0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x00010882999c(&puStack_140);
          func_0x00010882ee40();
          FUN_108829a98(apcStack_1c8);
          func_0x000107c33948();
          ppcVar9 = &pcStack_170;
          func_0x000108625e10(ppcVar9);
          func_0x000107c33784();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010882e104();
            func_0x00010882999c(&puStack_140);
            func_0x00010882ee40();
            FUN_108829a98(apcStack_1c8);
            func_0x000107c33948();
            func_0x000108625e10(&pcStack_170);
            func_0x00010882edf0();
            pcVar18 = FUN_10882839c;
            func_0x000107c33bfc();
            ppppppuStack_20 = &ppppppuStack_20;
            ppcStack_18 = (code **)pcVar18;
            func_0x000107c3378c();
            func_0x00010882eda8();
            if (extraout_x8_18 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_13 != 0);
            }
            func_0x00010882ebd8();
            func_0x00010882eb94();
            func_0x00010882ed88();
            func_0x00010882eca4();
            if (extraout_x8_19 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_14 != 0);
            }
            puStack_148 = &UNK_10f4bcee0;
            func_0x00010882ebcc();
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_20)();
            func_0x000107c33790();
            func_0x000107c33824();
            func_0x000107c3396c();
            func_0x00010882f010();
            func_0x00010882e3f0();
            func_0x00010882eed0();
            pcVar16 = ppcVar8[5];
            func_0x00010882e9f0();
            FUN_108829b90();
            func_0x00010882e15c();
            pcStack_b8 = FUN_108829ae0;
            ppuStack_b0 = &PTR_FUN_110a78168;
            func_0x000107c339b8();
            func_0x00010882f2a0();
            FUN_108829b90();
            func_0x00010882e080();
            func_0x00010882df0c(uStack_e0);
            func_0x000107c33820();
            func_0x000107c337b4();
            func_0x000108829abc(&puStack_140);
            func_0x00010882ee40();
            FUN_108829bb8(apcStack_1c8);
            func_0x000107c33948();
            ppcVar9 = &pcStack_170;
            func_0x000108625e34(ppcVar9);
            func_0x000107c33784();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010882e104();
              func_0x000108829abc(&puStack_140);
              func_0x00010882ee40();
              FUN_108829bb8(apcStack_1c8);
              func_0x000107c33948();
              func_0x000108625e34(&pcStack_170);
              func_0x00010882edf0();
              pcVar17 = FUN_108828504;
              func_0x00010882ff54();
              ppppppuStack_10 = &ppppppuStack_20;
              pcStack_8 = pcVar17;
              func_0x000107c337b0();
              func_0x00010882fa64();
              if (ppcVar7 != (code **)0x0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_15 != 0);
              }
              func_0x000107c33ae0();
              pcVar17 = ppcVar8[2];
              func_0x00010882f63c();
              uVar19 = (undefined1)in_x4;
              uVar14 = SUB81(pcVar17,0);
              pcStack_1a0 = pcVar16;
              ppcStack_198 = ppcVar7;
              if (ppcVar7 != (code **)0x0) {
                do {
                  func_0x000107c3383c();
                  uVar19 = (undefined1)in_x4;
                  uVar14 = SUB81(pcVar17,0);
                } while (extraout_w10_16 != 0);
              }
              puStack_148 = &UNK_10f4bcef9;
              puVar12 = auStack_188;
              func_0x00010882f018();
              func_0x000107c28258();
              func_0x000107c3379c();
              (*extraout_x8_21)();
              func_0x000107c337e4();
              func_0x000107c338d4();
              func_0x000107c3396c();
              func_0x00010882f010();
              func_0x00010882e3f0();
              func_0x00010882eed0();
              func_0x00010882e78c();
              pcStack_d0 = FUN_108829c00;
              ppuStack_c8 = &PTR_FUN_110a78180;
              func_0x000107c33a44();
              func_0x00010882e8dc();
              func_0x000107c338ec();
              func_0x00010882ea00();
              func_0x000108829bdc(&puStack_140);
              func_0x00010882ee40();
              ppcVar7 = &pcStack_1b0;
              FUN_108829cb8();
              func_0x000107c33a40();
              func_0x00010882f8b4();
              func_0x000107c337a8(uStack_70);
              if ((bool)in_ZR) {
                return ppcVar7;
              }
              ___stack_chk_fail();
              func_0x00010882ea00();
              func_0x000108829bdc(&puStack_140);
              func_0x00010882ee40();
              FUN_108829cb8(&pcStack_1b0);
              func_0x000107c33a40();
              func_0x00010882f8b4();
              func_0x00010882edf0();
              func_0x000107c33c58(FUN_108828644);
              appppppuStack_180[0] = &ppppppuStack_10;
              func_0x000107c337b0();
              pcVar16 = (code *)*in_x7;
              pcVar17 = (code *)in_x7[1];
              pcStack_310 = pcVar16;
              pcStack_308 = pcVar17;
              uStack_1e0 = extraout_x8_22;
              if (pcVar17 != (code *)0x0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_17 != 0);
              }
              lStack_328 = 0;
              lStack_320 = 0;
              lStack_318 = 0;
              func_0x000107c29cfc(&lStack_378,ppcVar7[1],ppcVar7[2]);
              plStack_360 = (long *)CONCAT71(plStack_360._1_7_,uVar14);
              uStack_348 = (undefined1)in_x5;
              uStack_347 = (undefined7)((ulong)in_x5 >> 8);
              uStack_340 = (undefined1)in_x6;
              puStack_368 = puVar12;
              pcStack_358 = pcVar18;
              uStack_350 = uVar19;
              pcStack_338 = pcVar16;
              pcStack_330 = pcVar17;
              if (pcVar17 != (code *)0x0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_18 != 0);
              }
              puStack_2e8 = &UNK_10f4bcf15;
              plVar13 = &lStack_328;
              func_0x00010882f338();
              func_0x000107c28258();
              func_0x000107c3379c();
              (*extraout_x8_23)();
              func_0x000107c337f8();
              func_0x000107c33960();
              func_0x000107c3396c();
              func_0x000107c33a9c();
              func_0x00010882e55c();
              func_0x00010882f02c();
              lVar6 = lStack_318;
              lVar5 = lStack_320;
              lVar4 = lStack_328;
              pcVar17 = pcStack_330;
              pcVar16 = pcStack_338;
              lVar3 = lStack_370;
              lVar1 = lStack_378;
              pcVar20 = ppcVar7[5];
              lStack_2e0 = lStack_378;
              lStack_2d8 = lStack_370;
              lStack_370 = 0;
              lStack_378 = 0;
              lStack_2c8 = (long)plStack_360;
              puStack_2d0 = puStack_368;
              uStack_2b8 = uStack_350;
              pcStack_2c0 = pcStack_358;
              uStack_2af = CONCAT17(uStack_340,uStack_347);
              uStack_2b0 = uStack_348;
              pcStack_2a0 = pcStack_338;
              pcStack_298 = pcStack_330;
              pcStack_338 = (code *)0x0;
              pcStack_330 = (code *)0x0;
              pcStack_290 = (code *)0x0;
              uStack_280 = 1;
              lStack_278 = lStack_328;
              lStack_270 = lStack_320;
              lStack_328 = 0;
              lStack_320 = 0;
              lStack_318 = 0;
              lStack_268 = lVar6;
              lStack_258 = lStack_300;
              lStack_250 = lStack_2f8;
              lStack_248 = lStack_2f0;
              ppuStack_288 = (undefined **)in_x6;
              ppcStack_260 = ppcVar7 + 7;
              func_0x00010882f710();
              pcStack_240 = FUN_108829cfc;
              ppuStack_238 = &PTR_FUN_110a78198;
              func_0x000107c33a2c();
              *plVar13 = lVar1;
              plVar13[1] = lVar3;
              pcVar18 = pcStack_358;
              puVar12 = puStack_368;
              lStack_2e0 = 0;
              lStack_2d8 = 0;
              lVar1 = CONCAT71(uStack_34f,uStack_350);
              plVar13[3] = (long)plStack_360;
              plVar13[2] = (long)puVar12;
              plVar13[5] = lVar1;
              plVar13[4] = (long)pcVar18;
              uVar2 = CONCAT17(uStack_348,uStack_34f);
              *(ulong *)((long)plVar13 + 0x31) = CONCAT17(uStack_340,uStack_347);
              *(undefined8 *)((long)plVar13 + 0x29) = uVar2;
              plVar13[8] = (long)pcVar16;
              plVar13[9] = (long)pcVar17;
              pcVar18 = pcStack_290;
              pcStack_2a0 = (code *)0x0;
              pcStack_298 = (code *)0x0;
              lVar1 = CONCAT71(uStack_27f,uStack_280);
              plVar13[0xb] = (long)ppuStack_288;
              plVar13[10] = (long)pcVar18;
              plVar13[0xc] = lVar1;
              plVar13[0xd] = lVar4;
              plVar13[0xe] = lVar5;
              plVar13[0xf] = lVar6;
              lStack_278 = 0;
              lStack_270 = 0;
              lStack_268 = 0;
              plVar13[0x10] = (long)(ppcVar7 + 7);
              plVar13[0x11] = lStack_300;
              plVar13[0x12] = lStack_2f8;
              plVar13[0x13] = lStack_2f0;
              lStack_250 = 0;
              lStack_248 = 0;
              lStack_258 = 0;
              plStack_230 = plVar13;
              func_0x000107c339ac(pcVar20);
              func_0x00010882fc6c();
              func_0x00010882eb54();
              func_0x000108829cd8(&lStack_2e0);
              func_0x000107c33a04();
              FUN_108829dc0(&lStack_378);
              func_0x000107c280f8(&lStack_328);
              ppcVar7 = &pcStack_310;
              func_0x000108625dec();
              func_0x000107c337a8(uStack_1e0);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x00010882eb54();
                func_0x000108829cd8(&lStack_2e0);
                func_0x000107c33a04();
                FUN_108829dc0(&lStack_378);
                func_0x000107c280f8(&lStack_328);
                func_0x000108625dec(&pcStack_310);
                func_0x00010882edf0();
                pcVar18 = FUN_1088288b4;
                func_0x00010882ff54();
                ppppppuStack_1d0 = appppppuStack_180;
                apcStack_1c8[0] = pcVar18;
                func_0x000107c337b0();
                func_0x00010882fa64();
                if (lVar4 != 0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_19 != 0);
                }
                func_0x000107c33ae0();
                func_0x00010882f63c();
                pcStack_358 = (code *)lVar4;
                plStack_360 = &lStack_2e0;
                if (lVar4 != 0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_20 != 0);
                }
                pcStack_308 = (code *)&UNK_10f4bcf38;
                func_0x00010882f018(&uStack_348);
                func_0x000107c28258();
                func_0x000107c3379c();
                (*extraout_x8_24)();
                func_0x000107c337e4();
                func_0x000107c338d4();
                func_0x000107c3396c();
                func_0x00010882f010();
                func_0x00010882e3f0();
                func_0x00010882eed0();
                func_0x00010882e78c();
                pcStack_290 = FUN_108829e04;
                ppuStack_288 = &PTR_FUN_110a781b0;
                func_0x000107c33a44();
                func_0x00010882e8dc();
                func_0x000107c338ec();
                func_0x00010882ea00();
                func_0x000108829de0(&lStack_300);
                func_0x00010882ee40();
                FUN_108829ebc(&lStack_370);
                func_0x000107c33a40();
                ppcVar7 = &pcStack_330;
                func_0x000108625e58();
                func_0x000107c337a8(plStack_230);
                if ((bool)in_ZR) {
                  return ppcVar7;
                }
                ___stack_chk_fail();
                func_0x00010882ea00();
                func_0x000108829de0(&lStack_300);
                func_0x00010882ee40();
                FUN_108829ebc(&lStack_370);
                func_0x000107c33a40();
                ppcVar7 = &pcStack_330;
                func_0x000108625e58(ppcVar7);
                func_0x00010882edf0();
                func_0x00010882eb68(&PTR_DAT_110a77e80);
                func_0x000107c29344(ppcVar7 + 3);
                func_0x000107c29cf4(lVar4);
                return ppcVar7;
              }
              return ppcVar7;
            }
          }
        }
      }
    }
  }
  return ppcVar9;
}



/* Entry: 1088279c4; end: 108827b0b;  */

code ** FUN_1088279c4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 in_ZR;
  code **ppcVar6;
  code **ppcVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *******pppppppuVar9;
  code **ppcVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  code *pcVar17;
  undefined1 uVar18;
  undefined8 in_x4;
  undefined8 in_x5;
  long in_x6;
  long *in_x7;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  code *extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  code *extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  code *extraout_x8_18;
  code *extraout_x8_19;
  undefined8 extraout_x8_20;
  code *extraout_x8_21;
  code *extraout_x8_22;
  undefined8 extraout_x9;
  code *pcVar19;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  long unaff_x19;
  long unaff_x20;
  code *pcVar20;
  undefined *in_stack_00000088;
  undefined8 in_stack_000000f0;
  code *in_stack_00000100;
  undefined **in_stack_00000108;
  code *in_stack_00000118;
  undefined **in_stack_00000120;
  undefined8 in_stack_00000160;
  undefined8 *in_stack_000001b0;
  code *in_stack_000001b8;
  undefined8 in_stack_000001c0;
  long lStack_378;
  long lStack_370;
  undefined1 *puStack_368;
  long *plStack_360;
  code *pcStack_358;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  code *pcStack_338;
  code *pcStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  code *pcStack_310;
  code *pcStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined1 *puStack_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2af;
  code *pcStack_2a0;
  code *pcStack_298;
  code *pcStack_290;
  undefined **ppuStack_288;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  code **ppcStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  code *pcStack_240;
  undefined **ppuStack_238;
  long *plStack_230;
  undefined8 uStack_1e0;
  undefined8 ******ppppppuStack_1d0;
  code *apcStack_1c8 [3];
  code *pcStack_1b0;
  undefined4 uStack_1a8;
  code *pcStack_1a0;
  code **ppcStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 ******appppppuStack_180 [2];
  code *pcStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [88];
  undefined8 uStack_e0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_70;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 ******ppppppuStack_20;
  code **ppcStack_18;
  undefined8 ******ppppppuStack_10;
  code *pcStack_8;
  
  func_0x00010882ff54();
  func_0x000107c337b0();
  func_0x00010882fa64();
  if (unaff_x20 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c33ae0();
  uVar15 = *(undefined8 *)(unaff_x19 + 0x10);
  func_0x00010882f63c();
  if (unaff_x20 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000088 = &UNK_10f4bce52;
  func_0x00010882f018(&stack0x00000048);
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8)();
  func_0x000107c337e4();
  func_0x000107c338d4();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e78c();
  in_stack_00000100 = FUN_108829314;
  in_stack_00000108 = &PTR_FUN_110a780c0;
  func_0x000107c33a44();
  func_0x00010882e8dc();
  func_0x000107c338ec();
  func_0x00010882ea00();
  FUN_1088292f0(&stack0x00000090);
  func_0x00010882ee40();
  FUN_1088293cc(&stack0x00000020);
  func_0x000107c33a40();
  ppcVar6 = (code **)&stack0x00000060;
  func_0x000108625da4();
  func_0x000107c337a8(in_stack_00000160);
  if ((bool)in_ZR) {
    return ppcVar6;
  }
  ___stack_chk_fail();
  func_0x00010882ea00();
  FUN_1088292f0(&stack0x00000090);
  func_0x00010882ee40();
  FUN_1088293cc(&stack0x00000020);
  func_0x000107c33a40();
  func_0x000108625da4(&stack0x00000060);
  func_0x00010882edf0();
  pcVar17 = FUN_108827b0c;
  func_0x000107c33bfc();
  in_stack_000001b0 = &stack0x000001c0;
  in_stack_000001b8 = pcVar17;
  func_0x000107c3378c();
  func_0x00010882eda8();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882eb94();
  func_0x00010882ed88();
  func_0x00010882eca4();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_02 != 0);
  }
  in_stack_00000088 = &UNK_10f4bce6d;
  func_0x00010882ebcc();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_02)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_1088294c0();
  func_0x00010882e15c();
  in_stack_00000118 = FUN_108829410;
  in_stack_00000120 = &PTR_FUN_110a780d8;
  func_0x000107c339b8();
  func_0x00010882f2a0();
  FUN_1088294c0();
  func_0x00010882e080();
  func_0x00010882df0c(in_stack_000000f0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x0001088293ec(&stack0x00000090);
  func_0x00010882ee40();
  ppcVar7 = (code **)&stack0x00000008;
  FUN_1088294e8(ppcVar7);
  func_0x000107c33948();
  func_0x00010882f144();
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x0001088293ec(&stack0x00000090);
    func_0x00010882ee40();
    ppppppuVar8 = (undefined8 ******)&stack0x00000008;
    FUN_1088294e8();
    func_0x000107c33948();
    func_0x00010882f144();
    func_0x00010882edf0();
    pcVar17 = FUN_108827c6c;
    func_0x000107c33bfc();
    in_stack_000001b0 = &stack0x000001b0;
    in_stack_000001b8 = pcVar17;
    func_0x000107c3378c();
    func_0x00010882eda8();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_03 != 0);
    }
    func_0x00010882ebd8();
    func_0x00010882eb94();
    func_0x00010882ed88();
    func_0x00010882eca4();
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_04 != 0);
    }
    in_stack_00000088 = &UNK_10f4bce85;
    func_0x00010882ebcc();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_05)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    func_0x00010882e9f0();
    FUN_1088295dc();
    func_0x00010882e15c();
    in_stack_00000118 = FUN_10882952c;
    in_stack_00000120 = &PTR_FUN_110a780f0;
    func_0x000107c339b8();
    func_0x00010882f2a0();
    FUN_1088295dc();
    func_0x00010882e080();
    func_0x00010882df0c(in_stack_000000f0);
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x000108829508(&stack0x00000090);
    func_0x00010882ee40();
    ppcVar7 = (code **)&stack0x00000008;
    FUN_108829604(ppcVar7);
    func_0x000107c33948();
    func_0x00010882f144();
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108829508(&stack0x00000090);
      func_0x00010882ee40();
      FUN_108829604(&stack0x00000008);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x00010882edf0();
      pcVar17 = FUN_108827dcc;
      func_0x000107c33bfc();
      in_stack_000001b0 = &stack0x000001b0;
      in_stack_000001b8 = pcVar17;
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_05 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882f2ec();
      func_0x000107c27994();
      func_0x00010882eca4();
      uVar14 = (undefined4)uVar15;
      if (extraout_x8_07 != 0) {
        do {
          func_0x000107c3383c();
          uVar14 = (undefined4)uVar15;
        } while (extraout_w10_06 != 0);
      }
      in_stack_00000088 = &UNK_10f4bce90;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_08)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e9f0();
      FUN_1088296f8();
      func_0x00010882e15c();
      in_stack_00000118 = FUN_108829648;
      in_stack_00000120 = &PTR_FUN_110a78108;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_1088296f8();
      func_0x00010882e080();
      func_0x00010882df0c(in_stack_000000f0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x000108829624(&stack0x00000090);
      func_0x00010882ee40();
      FUN_108829720(&stack0x00000008);
      func_0x000107c33948();
      ppcVar7 = (code **)&stack0x00000060;
      func_0x000108625dc8(ppcVar7);
      func_0x000107c33784();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x000108829624(&stack0x00000090);
        func_0x00010882ee40();
        FUN_108829720(&stack0x00000008);
        func_0x000107c33948();
        func_0x000108625dc8(&stack0x00000060);
        func_0x00010882edf0();
        pppppppuVar9 = &ppppppuStack_1d0;
        uStack_40 = 1;
        pcStack_8 = FUN_108827f38;
        lStack_38 = unaff_x19 + 0x38;
        ppppppuStack_20 = ppppppuVar8;
        ppcStack_18 = ppcVar6;
        ppppppuStack_10 = (undefined8 ******)&stack0x000001b0;
        func_0x000107c3378c();
        lStack_168 = *(long *)(pcVar17 + 8);
        pcStack_170 = *(code **)pcVar17;
        if (*(long *)(pcVar17 + 8) != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_07 != 0);
        }
        func_0x00010882ebd8();
        func_0x00010882fbf8();
        func_0x00010882e694();
        ppcStack_198 = (code **)lStack_168;
        pcStack_1a0 = pcStack_170;
        uStack_1a8 = uVar14;
        if (lStack_168 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_08 != 0);
        }
        puStack_140 = &UNK_10f4b12f2;
        func_0x00010882f098(auStack_190);
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_09)();
        func_0x000107c33790();
        func_0x000107c33824();
        func_0x000107c3396c();
        func_0x00010882f090();
        func_0x00010882e42c();
        func_0x00010882eef4();
        func_0x00010882ea30();
        FUN_108829820();
        func_0x00010882f0bc();
        func_0x000107c337a0();
        pcStack_b8 = (code *)uStack_158;
        uStack_c0 = uStack_160;
        pcStack_d0 = (code *)extraout_x9;
        func_0x00010882e62c();
        pcStack_a8 = FUN_108829768;
        ppuStack_a0 = &PTR_FUN_110a78120;
        func_0x000107c339e0();
        func_0x00010882f34c();
        FUN_108829820();
        func_0x00010882e13c();
        func_0x00010882df40(pcStack_d0);
        func_0x000107c33820();
        func_0x000107c337b4();
        func_0x000108829744(auStack_138);
        func_0x00010882ee40();
        FUN_10882985c(&ppppppuStack_1d0);
        func_0x000107c33948();
        func_0x00010882f144();
        func_0x000107c33784();
        if ((bool)in_ZR) {
          return (code **)pppppppuVar9;
        }
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x000108829744(auStack_138);
        func_0x00010882ee40();
        FUN_10882985c(&ppppppuStack_1d0);
        func_0x000107c33948();
        func_0x00010882f144();
        func_0x00010882edf0();
        pcVar17 = FUN_1088280d4;
        func_0x000107c33bfc();
        ppppppuStack_20 = &ppppppuStack_10;
        ppcStack_18 = (code **)pcVar17;
        func_0x000107c3378c();
        func_0x00010882eda8();
        if (extraout_x8_10 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_09 != 0);
        }
        func_0x00010882ebd8();
        func_0x00010882eb94();
        func_0x00010882ed88();
        func_0x00010882eca4();
        if (extraout_x8_11 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_10 != 0);
        }
        puStack_148 = &UNK_10f4bcea8;
        func_0x00010882ebcc();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_12)();
        func_0x000107c33790();
        func_0x000107c33824();
        func_0x000107c3396c();
        func_0x00010882f010();
        func_0x00010882e3f0();
        func_0x00010882eed0();
        func_0x00010882e9f0();
        FUN_108829950();
        func_0x00010882e15c();
        pcStack_b8 = FUN_1088298a0;
        ppuStack_b0 = &PTR_FUN_110a78138;
        func_0x000107c339b8();
        func_0x00010882f2a0();
        FUN_108829950();
        func_0x00010882e080();
        func_0x00010882df0c(uStack_e0);
        func_0x000107c33820();
        func_0x000107c337b4();
        func_0x00010882987c(&puStack_140);
        func_0x00010882ee40();
        ppcVar7 = apcStack_1c8;
        FUN_108829978(ppcVar7);
        func_0x000107c33948();
        func_0x00010882f8b4();
        func_0x000107c33784();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x00010882987c(&puStack_140);
          func_0x00010882ee40();
          ppcVar10 = apcStack_1c8;
          FUN_108829978();
          func_0x000107c33948();
          func_0x00010882f8b4();
          func_0x00010882edf0();
          pcVar17 = FUN_108828234;
          func_0x000107c33bfc();
          ppppppuStack_20 = &ppppppuStack_20;
          ppcStack_18 = (code **)pcVar17;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_13 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_11 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_14 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_12 != 0);
          }
          puStack_148 = &UNK_10f4bceb9;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_15)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_108829a70();
          func_0x00010882e15c();
          pcStack_b8 = FUN_1088299c0;
          ppuStack_b0 = &PTR_FUN_110a78150;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_108829a70();
          func_0x00010882e080();
          func_0x00010882df0c(uStack_e0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x00010882999c(&puStack_140);
          func_0x00010882ee40();
          FUN_108829a98(apcStack_1c8);
          func_0x000107c33948();
          ppcVar7 = &pcStack_170;
          func_0x000108625e10(ppcVar7);
          func_0x000107c33784();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010882e104();
            func_0x00010882999c(&puStack_140);
            func_0x00010882ee40();
            FUN_108829a98(apcStack_1c8);
            func_0x000107c33948();
            func_0x000108625e10(&pcStack_170);
            func_0x00010882edf0();
            pcVar17 = FUN_10882839c;
            func_0x000107c33bfc();
            ppppppuStack_20 = &ppppppuStack_20;
            ppcStack_18 = (code **)pcVar17;
            func_0x000107c3378c();
            func_0x00010882eda8();
            if (extraout_x8_16 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_13 != 0);
            }
            func_0x00010882ebd8();
            func_0x00010882eb94();
            func_0x00010882ed88();
            func_0x00010882eca4();
            if (extraout_x8_17 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_14 != 0);
            }
            puStack_148 = &UNK_10f4bcee0;
            func_0x00010882ebcc();
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_18)();
            func_0x000107c33790();
            func_0x000107c33824();
            func_0x000107c3396c();
            func_0x00010882f010();
            func_0x00010882e3f0();
            func_0x00010882eed0();
            pcVar20 = ppcVar6[5];
            func_0x00010882e9f0();
            FUN_108829b90();
            func_0x00010882e15c();
            pcStack_b8 = FUN_108829ae0;
            ppuStack_b0 = &PTR_FUN_110a78168;
            func_0x000107c339b8();
            func_0x00010882f2a0();
            FUN_108829b90();
            func_0x00010882e080();
            func_0x00010882df0c(uStack_e0);
            func_0x000107c33820();
            func_0x000107c337b4();
            func_0x000108829abc(&puStack_140);
            func_0x00010882ee40();
            FUN_108829bb8(apcStack_1c8);
            func_0x000107c33948();
            ppcVar7 = &pcStack_170;
            func_0x000108625e34(ppcVar7);
            func_0x000107c33784();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010882e104();
              func_0x000108829abc(&puStack_140);
              func_0x00010882ee40();
              FUN_108829bb8(apcStack_1c8);
              func_0x000107c33948();
              func_0x000108625e34(&pcStack_170);
              func_0x00010882edf0();
              pcVar16 = FUN_108828504;
              func_0x00010882ff54();
              ppppppuStack_10 = &ppppppuStack_20;
              pcStack_8 = pcVar16;
              func_0x000107c337b0();
              func_0x00010882fa64();
              if (ppcVar10 != (code **)0x0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_15 != 0);
              }
              func_0x000107c33ae0();
              pcVar16 = ppcVar6[2];
              func_0x00010882f63c();
              uVar18 = (undefined1)in_x4;
              uVar13 = SUB81(pcVar16,0);
              pcStack_1a0 = pcVar20;
              ppcStack_198 = ppcVar10;
              if (ppcVar10 != (code **)0x0) {
                do {
                  func_0x000107c3383c();
                  uVar18 = (undefined1)in_x4;
                  uVar13 = SUB81(pcVar16,0);
                } while (extraout_w10_16 != 0);
              }
              puStack_148 = &UNK_10f4bcef9;
              puVar11 = auStack_188;
              func_0x00010882f018();
              func_0x000107c28258();
              func_0x000107c3379c();
              (*extraout_x8_19)();
              func_0x000107c337e4();
              func_0x000107c338d4();
              func_0x000107c3396c();
              func_0x00010882f010();
              func_0x00010882e3f0();
              func_0x00010882eed0();
              func_0x00010882e78c();
              pcStack_d0 = FUN_108829c00;
              ppuStack_c8 = &PTR_FUN_110a78180;
              func_0x000107c33a44();
              func_0x00010882e8dc();
              func_0x000107c338ec();
              func_0x00010882ea00();
              func_0x000108829bdc(&puStack_140);
              func_0x00010882ee40();
              ppcVar6 = &pcStack_1b0;
              FUN_108829cb8();
              func_0x000107c33a40();
              func_0x00010882f8b4();
              func_0x000107c337a8(uStack_70);
              if ((bool)in_ZR) {
                return ppcVar6;
              }
              ___stack_chk_fail();
              func_0x00010882ea00();
              func_0x000108829bdc(&puStack_140);
              func_0x00010882ee40();
              FUN_108829cb8(&pcStack_1b0);
              func_0x000107c33a40();
              func_0x00010882f8b4();
              func_0x00010882edf0();
              func_0x000107c33c58(FUN_108828644);
              appppppuStack_180[0] = &ppppppuStack_10;
              func_0x000107c337b0();
              pcVar20 = (code *)*in_x7;
              pcVar16 = (code *)in_x7[1];
              pcStack_310 = pcVar20;
              pcStack_308 = pcVar16;
              uStack_1e0 = extraout_x8_20;
              if (pcVar16 != (code *)0x0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_17 != 0);
              }
              lStack_328 = 0;
              lStack_320 = 0;
              lStack_318 = 0;
              func_0x000107c29cfc(&lStack_378,ppcVar6[1],ppcVar6[2]);
              plStack_360 = (long *)CONCAT71(plStack_360._1_7_,uVar13);
              uStack_348 = (undefined1)in_x5;
              uStack_347 = (undefined7)((ulong)in_x5 >> 8);
              uStack_340 = (undefined1)in_x6;
              puStack_368 = puVar11;
              pcStack_358 = pcVar17;
              uStack_350 = uVar18;
              pcStack_338 = pcVar20;
              pcStack_330 = pcVar16;
              if (pcVar16 != (code *)0x0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_18 != 0);
              }
              puStack_2e8 = &UNK_10f4bcf15;
              plVar12 = &lStack_328;
              func_0x00010882f338();
              func_0x000107c28258();
              func_0x000107c3379c();
              (*extraout_x8_21)();
              func_0x000107c337f8();
              func_0x000107c33960();
              func_0x000107c3396c();
              func_0x000107c33a9c();
              func_0x00010882e55c();
              func_0x00010882f02c();
              lVar5 = lStack_318;
              lVar4 = lStack_320;
              lVar3 = lStack_328;
              pcVar16 = pcStack_330;
              pcVar20 = pcStack_338;
              lVar2 = lStack_370;
              lVar1 = lStack_378;
              pcVar19 = ppcVar6[5];
              lStack_2e0 = lStack_378;
              lStack_2d8 = lStack_370;
              lStack_370 = 0;
              lStack_378 = 0;
              lStack_2c8 = (long)plStack_360;
              puStack_2d0 = puStack_368;
              uStack_2b8 = uStack_350;
              pcStack_2c0 = pcStack_358;
              uStack_2af = CONCAT17(uStack_340,uStack_347);
              uStack_2b0 = uStack_348;
              pcStack_2a0 = pcStack_338;
              pcStack_298 = pcStack_330;
              pcStack_338 = (code *)0x0;
              pcStack_330 = (code *)0x0;
              pcStack_290 = (code *)0x0;
              uStack_280 = 1;
              lStack_278 = lStack_328;
              lStack_270 = lStack_320;
              lStack_328 = 0;
              lStack_320 = 0;
              lStack_318 = 0;
              lStack_268 = lVar5;
              lStack_258 = lStack_300;
              lStack_250 = lStack_2f8;
              lStack_248 = lStack_2f0;
              ppuStack_288 = (undefined **)in_x6;
              ppcStack_260 = ppcVar6 + 7;
              func_0x00010882f710();
              pcStack_240 = FUN_108829cfc;
              ppuStack_238 = &PTR_FUN_110a78198;
              func_0x000107c33a2c();
              *plVar12 = lVar1;
              plVar12[1] = lVar2;
              pcVar17 = pcStack_358;
              puVar11 = puStack_368;
              lStack_2e0 = 0;
              lStack_2d8 = 0;
              lVar1 = CONCAT71(uStack_34f,uStack_350);
              plVar12[3] = (long)plStack_360;
              plVar12[2] = (long)puVar11;
              plVar12[5] = lVar1;
              plVar12[4] = (long)pcVar17;
              uVar15 = CONCAT17(uStack_348,uStack_34f);
              *(ulong *)((long)plVar12 + 0x31) = CONCAT17(uStack_340,uStack_347);
              *(undefined8 *)((long)plVar12 + 0x29) = uVar15;
              plVar12[8] = (long)pcVar20;
              plVar12[9] = (long)pcVar16;
              pcVar17 = pcStack_290;
              pcStack_2a0 = (code *)0x0;
              pcStack_298 = (code *)0x0;
              lVar1 = CONCAT71(uStack_27f,uStack_280);
              plVar12[0xb] = (long)ppuStack_288;
              plVar12[10] = (long)pcVar17;
              plVar12[0xc] = lVar1;
              plVar12[0xd] = lVar3;
              plVar12[0xe] = lVar4;
              plVar12[0xf] = lVar5;
              lStack_278 = 0;
              lStack_270 = 0;
              lStack_268 = 0;
              plVar12[0x10] = (long)(ppcVar6 + 7);
              plVar12[0x11] = lStack_300;
              plVar12[0x12] = lStack_2f8;
              plVar12[0x13] = lStack_2f0;
              lStack_250 = 0;
              lStack_248 = 0;
              lStack_258 = 0;
              plStack_230 = plVar12;
              func_0x000107c339ac(pcVar19);
              func_0x00010882fc6c();
              func_0x00010882eb54();
              func_0x000108829cd8(&lStack_2e0);
              func_0x000107c33a04();
              FUN_108829dc0(&lStack_378);
              func_0x000107c280f8(&lStack_328);
              ppcVar6 = &pcStack_310;
              func_0x000108625dec();
              func_0x000107c337a8(uStack_1e0);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x00010882eb54();
                func_0x000108829cd8(&lStack_2e0);
                func_0x000107c33a04();
                FUN_108829dc0(&lStack_378);
                func_0x000107c280f8(&lStack_328);
                func_0x000108625dec(&pcStack_310);
                func_0x00010882edf0();
                pcVar17 = FUN_1088288b4;
                func_0x00010882ff54();
                ppppppuStack_1d0 = appppppuStack_180;
                apcStack_1c8[0] = pcVar17;
                func_0x000107c337b0();
                func_0x00010882fa64();
                if (lVar3 != 0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_19 != 0);
                }
                func_0x000107c33ae0();
                func_0x00010882f63c();
                pcStack_358 = (code *)lVar3;
                plStack_360 = &lStack_2e0;
                if (lVar3 != 0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_20 != 0);
                }
                pcStack_308 = (code *)&UNK_10f4bcf38;
                func_0x00010882f018(&uStack_348);
                func_0x000107c28258();
                func_0x000107c3379c();
                (*extraout_x8_22)();
                func_0x000107c337e4();
                func_0x000107c338d4();
                func_0x000107c3396c();
                func_0x00010882f010();
                func_0x00010882e3f0();
                func_0x00010882eed0();
                func_0x00010882e78c();
                pcStack_290 = FUN_108829e04;
                ppuStack_288 = &PTR_FUN_110a781b0;
                func_0x000107c33a44();
                func_0x00010882e8dc();
                func_0x000107c338ec();
                func_0x00010882ea00();
                func_0x000108829de0(&lStack_300);
                func_0x00010882ee40();
                FUN_108829ebc(&lStack_370);
                func_0x000107c33a40();
                ppcVar6 = &pcStack_330;
                func_0x000108625e58();
                func_0x000107c337a8(plStack_230);
                if ((bool)in_ZR) {
                  return ppcVar6;
                }
                ___stack_chk_fail();
                func_0x00010882ea00();
                func_0x000108829de0(&lStack_300);
                func_0x00010882ee40();
                FUN_108829ebc(&lStack_370);
                func_0x000107c33a40();
                ppcVar6 = &pcStack_330;
                func_0x000108625e58(ppcVar6);
                func_0x00010882edf0();
                func_0x00010882eb68(&PTR_DAT_110a77e80);
                func_0x000107c29344(ppcVar6 + 3);
                func_0x000107c29cf4(lVar3);
                return ppcVar6;
              }
              return ppcVar6;
            }
          }
        }
      }
    }
  }
  return ppcVar7;
}



/* Entry: 108827b0c; end: 108827c6b;  */

code ** FUN_108827b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,long param_7,long *param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 in_ZR;
  code **ppcVar7;
  undefined8 ***pppuVar8;
  undefined8 ****ppppuVar9;
  code **ppcVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  code *pcVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined1 uVar18;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  code *extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  code *extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  code *extraout_x8_17;
  code *extraout_x8_18;
  undefined8 extraout_x8_19;
  code *extraout_x8_20;
  code *extraout_x8_21;
  undefined8 extraout_x9;
  code *pcVar19;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  long unaff_x19;
  undefined8 uVar20;
  undefined *in_stack_00000088;
  undefined8 in_stack_000000f0;
  code *in_stack_00000118;
  undefined **in_stack_00000120;
  undefined8 *in_stack_000001b0;
  long lStack_378;
  long lStack_370;
  undefined1 *puStack_368;
  long *plStack_360;
  code *pcStack_358;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  code *pcStack_338;
  code *pcStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  code *pcStack_310;
  code *pcStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined1 *puStack_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2af;
  code *pcStack_2a0;
  code *pcStack_298;
  code *pcStack_290;
  undefined **ppuStack_288;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  code **ppcStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  code *pcStack_240;
  undefined **ppuStack_238;
  long *plStack_230;
  undefined8 uStack_1e0;
  undefined8 ***pppuStack_1d0;
  code *apcStack_1c8 [3];
  code *pcStack_1b0;
  undefined4 uStack_1a8;
  code *pcStack_1a0;
  code **ppcStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 ***apppuStack_180 [2];
  code *pcStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [88];
  undefined8 uStack_e0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_70;
  undefined8 ***pppuStack_20;
  undefined8 ***pppuStack_10;
  code *pcStack_8;
  
  func_0x000107c33bfc();
  func_0x000107c3378c();
  func_0x00010882eda8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882eb94();
  func_0x00010882ed88();
  func_0x00010882eca4();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000088 = &UNK_10f4bce6d;
  func_0x00010882ebcc();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_01)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_1088294c0();
  func_0x00010882e15c();
  in_stack_00000118 = FUN_108829410;
  in_stack_00000120 = &PTR_FUN_110a780d8;
  func_0x000107c339b8();
  func_0x00010882f2a0();
  FUN_1088294c0();
  func_0x00010882e080();
  func_0x00010882df0c(in_stack_000000f0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x0001088293ec(&stack0x00000090);
  func_0x00010882ee40();
  ppcVar7 = (code **)&stack0x00000008;
  FUN_1088294e8(ppcVar7);
  func_0x000107c33948();
  func_0x00010882f144();
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x0001088293ec(&stack0x00000090);
    func_0x00010882ee40();
    pppuVar8 = (undefined8 ***)&stack0x00000008;
    FUN_1088294e8();
    func_0x000107c33948();
    func_0x00010882f144();
    func_0x00010882edf0();
    func_0x000107c33bfc();
    in_stack_000001b0 = &stack0x000001b0;
    func_0x000107c3378c();
    func_0x00010882eda8();
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010882ebd8();
    func_0x00010882eb94();
    func_0x00010882ed88();
    func_0x00010882eca4();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_02 != 0);
    }
    in_stack_00000088 = &UNK_10f4bce85;
    func_0x00010882ebcc();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_04)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    func_0x00010882e9f0();
    FUN_1088295dc();
    func_0x00010882e15c();
    in_stack_00000118 = FUN_10882952c;
    in_stack_00000120 = &PTR_FUN_110a780f0;
    func_0x000107c339b8();
    func_0x00010882f2a0();
    FUN_1088295dc();
    func_0x00010882e080();
    func_0x00010882df0c(in_stack_000000f0);
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x000108829508(&stack0x00000090);
    func_0x00010882ee40();
    ppcVar7 = (code **)&stack0x00000008;
    FUN_108829604(ppcVar7);
    func_0x000107c33948();
    func_0x00010882f144();
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108829508(&stack0x00000090);
      func_0x00010882ee40();
      FUN_108829604(&stack0x00000008);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x00010882edf0();
      pcVar17 = FUN_108827dcc;
      func_0x000107c33bfc();
      in_stack_000001b0 = &stack0x000001b0;
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_05 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_03 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882f2ec();
      func_0x000107c27994();
      func_0x00010882eca4();
      uVar14 = (undefined4)param_3;
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c3383c();
          uVar14 = (undefined4)param_3;
        } while (extraout_w10_04 != 0);
      }
      in_stack_00000088 = &UNK_10f4bce90;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_07)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e9f0();
      FUN_1088296f8();
      func_0x00010882e15c();
      in_stack_00000118 = FUN_108829648;
      in_stack_00000120 = &PTR_FUN_110a78108;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_1088296f8();
      func_0x00010882e080();
      func_0x00010882df0c(in_stack_000000f0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x000108829624(&stack0x00000090);
      func_0x00010882ee40();
      FUN_108829720(&stack0x00000008);
      func_0x000107c33948();
      ppcVar7 = (code **)&stack0x00000060;
      func_0x000108625dc8(ppcVar7);
      func_0x000107c33784();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x000108829624(&stack0x00000090);
        func_0x00010882ee40();
        FUN_108829720(&stack0x00000008);
        func_0x000107c33948();
        func_0x000108625dc8(&stack0x00000060);
        func_0x00010882edf0();
        ppppuVar9 = &pppuStack_1d0;
        pcStack_8 = FUN_108827f38;
        pppuStack_20 = pppuVar8;
        pppuStack_10 = (undefined8 ***)&stack0x000001b0;
        func_0x000107c3378c();
        lStack_168 = *(long *)(pcVar17 + 8);
        pcStack_170 = *(code **)pcVar17;
        if (*(long *)(pcVar17 + 8) != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_05 != 0);
        }
        func_0x00010882ebd8();
        func_0x00010882fbf8();
        func_0x00010882e694();
        ppcStack_198 = (code **)lStack_168;
        pcStack_1a0 = pcStack_170;
        uStack_1a8 = uVar14;
        if (lStack_168 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_06 != 0);
        }
        puStack_140 = &UNK_10f4b12f2;
        func_0x00010882f098(auStack_190);
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_08)();
        func_0x000107c33790();
        func_0x000107c33824();
        func_0x000107c3396c();
        func_0x00010882f090();
        func_0x00010882e42c();
        func_0x00010882eef4();
        func_0x00010882ea30();
        FUN_108829820();
        func_0x00010882f0bc();
        func_0x000107c337a0();
        pcStack_b8 = (code *)uStack_158;
        uStack_c0 = uStack_160;
        pcStack_d0 = (code *)extraout_x9;
        func_0x00010882e62c();
        pcStack_a8 = FUN_108829768;
        ppuStack_a0 = &PTR_FUN_110a78120;
        func_0x000107c339e0();
        func_0x00010882f34c();
        FUN_108829820();
        func_0x00010882e13c();
        func_0x00010882df40(pcStack_d0);
        func_0x000107c33820();
        func_0x000107c337b4();
        func_0x000108829744(auStack_138);
        func_0x00010882ee40();
        FUN_10882985c(&pppuStack_1d0);
        func_0x000107c33948();
        func_0x00010882f144();
        func_0x000107c33784();
        if ((bool)in_ZR) {
          return (code **)ppppuVar9;
        }
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x000108829744(auStack_138);
        func_0x00010882ee40();
        FUN_10882985c(&pppuStack_1d0);
        func_0x000107c33948();
        func_0x00010882f144();
        func_0x00010882edf0();
        func_0x000107c33bfc();
        pppuStack_20 = &pppuStack_10;
        func_0x000107c3378c();
        func_0x00010882eda8();
        if (extraout_x8_09 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_07 != 0);
        }
        func_0x00010882ebd8();
        func_0x00010882eb94();
        func_0x00010882ed88();
        func_0x00010882eca4();
        if (extraout_x8_10 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_08 != 0);
        }
        puStack_148 = &UNK_10f4bcea8;
        func_0x00010882ebcc();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_11)();
        func_0x000107c33790();
        func_0x000107c33824();
        func_0x000107c3396c();
        func_0x00010882f010();
        func_0x00010882e3f0();
        func_0x00010882eed0();
        func_0x00010882e9f0();
        FUN_108829950();
        func_0x00010882e15c();
        pcStack_b8 = FUN_1088298a0;
        ppuStack_b0 = &PTR_FUN_110a78138;
        func_0x000107c339b8();
        func_0x00010882f2a0();
        FUN_108829950();
        func_0x00010882e080();
        func_0x00010882df0c(uStack_e0);
        func_0x000107c33820();
        func_0x000107c337b4();
        func_0x00010882987c(&puStack_140);
        func_0x00010882ee40();
        ppcVar7 = apcStack_1c8;
        FUN_108829978(ppcVar7);
        func_0x000107c33948();
        func_0x00010882f8b4();
        func_0x000107c33784();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x00010882987c(&puStack_140);
          func_0x00010882ee40();
          ppcVar10 = apcStack_1c8;
          FUN_108829978();
          func_0x000107c33948();
          func_0x00010882f8b4();
          func_0x00010882edf0();
          func_0x000107c33bfc();
          pppuStack_20 = &pppuStack_20;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_12 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_09 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_13 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_10 != 0);
          }
          puStack_148 = &UNK_10f4bceb9;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_14)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e9f0();
          FUN_108829a70();
          func_0x00010882e15c();
          pcStack_b8 = FUN_1088299c0;
          ppuStack_b0 = &PTR_FUN_110a78150;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_108829a70();
          func_0x00010882e080();
          func_0x00010882df0c(uStack_e0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x00010882999c(&puStack_140);
          func_0x00010882ee40();
          FUN_108829a98(apcStack_1c8);
          func_0x000107c33948();
          ppcVar7 = &pcStack_170;
          func_0x000108625e10(ppcVar7);
          func_0x000107c33784();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010882e104();
            func_0x00010882999c(&puStack_140);
            func_0x00010882ee40();
            FUN_108829a98(apcStack_1c8);
            func_0x000107c33948();
            func_0x000108625e10(&pcStack_170);
            func_0x00010882edf0();
            pcVar17 = FUN_10882839c;
            func_0x000107c33bfc();
            pppuStack_20 = &pppuStack_20;
            func_0x000107c3378c();
            func_0x00010882eda8();
            if (extraout_x8_15 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_11 != 0);
            }
            func_0x00010882ebd8();
            func_0x00010882eb94();
            func_0x00010882ed88();
            func_0x00010882eca4();
            if (extraout_x8_16 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_12 != 0);
            }
            puStack_148 = &UNK_10f4bcee0;
            func_0x00010882ebcc();
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_17)();
            func_0x000107c33790();
            func_0x000107c33824();
            func_0x000107c3396c();
            func_0x00010882f010();
            func_0x00010882e3f0();
            func_0x00010882eed0();
            uVar20 = *(undefined8 *)(unaff_x19 + 0x28);
            func_0x00010882e9f0();
            FUN_108829b90();
            func_0x00010882e15c();
            pcStack_b8 = FUN_108829ae0;
            ppuStack_b0 = &PTR_FUN_110a78168;
            func_0x000107c339b8();
            func_0x00010882f2a0();
            FUN_108829b90();
            func_0x00010882e080();
            func_0x00010882df0c(uStack_e0);
            func_0x000107c33820();
            func_0x000107c337b4();
            func_0x000108829abc(&puStack_140);
            func_0x00010882ee40();
            FUN_108829bb8(apcStack_1c8);
            func_0x000107c33948();
            ppcVar7 = &pcStack_170;
            func_0x000108625e34(ppcVar7);
            func_0x000107c33784();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010882e104();
              func_0x000108829abc(&puStack_140);
              func_0x00010882ee40();
              FUN_108829bb8(apcStack_1c8);
              func_0x000107c33948();
              func_0x000108625e34(&pcStack_170);
              func_0x00010882edf0();
              pcVar15 = FUN_108828504;
              func_0x00010882ff54();
              pppuStack_10 = &pppuStack_20;
              pcStack_8 = pcVar15;
              func_0x000107c337b0();
              func_0x00010882fa64();
              if (ppcVar10 != (code **)0x0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_13 != 0);
              }
              func_0x000107c33ae0();
              uVar16 = *(undefined8 *)(unaff_x19 + 0x10);
              func_0x00010882f63c();
              uVar18 = (undefined1)param_5;
              uVar13 = (undefined1)uVar16;
              pcStack_1a0 = (code *)uVar20;
              ppcStack_198 = ppcVar10;
              if (ppcVar10 != (code **)0x0) {
                do {
                  func_0x000107c3383c();
                  uVar18 = (undefined1)param_5;
                  uVar13 = (undefined1)uVar16;
                } while (extraout_w10_14 != 0);
              }
              puStack_148 = &UNK_10f4bcef9;
              puVar11 = auStack_188;
              func_0x00010882f018();
              func_0x000107c28258();
              func_0x000107c3379c();
              (*extraout_x8_18)();
              func_0x000107c337e4();
              func_0x000107c338d4();
              func_0x000107c3396c();
              func_0x00010882f010();
              func_0x00010882e3f0();
              func_0x00010882eed0();
              func_0x00010882e78c();
              pcStack_d0 = FUN_108829c00;
              ppuStack_c8 = &PTR_FUN_110a78180;
              func_0x000107c33a44();
              func_0x00010882e8dc();
              func_0x000107c338ec();
              func_0x00010882ea00();
              func_0x000108829bdc(&puStack_140);
              func_0x00010882ee40();
              ppcVar7 = &pcStack_1b0;
              FUN_108829cb8();
              func_0x000107c33a40();
              func_0x00010882f8b4();
              func_0x000107c337a8(uStack_70);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x00010882ea00();
                func_0x000108829bdc(&puStack_140);
                func_0x00010882ee40();
                FUN_108829cb8(&pcStack_1b0);
                func_0x000107c33a40();
                func_0x00010882f8b4();
                func_0x00010882edf0();
                func_0x000107c33c58(FUN_108828644);
                apppuStack_180[0] = &pppuStack_10;
                func_0x000107c337b0();
                pcVar15 = (code *)*param_8;
                pcVar1 = (code *)param_8[1];
                pcStack_310 = pcVar15;
                pcStack_308 = pcVar1;
                uStack_1e0 = extraout_x8_19;
                if (pcVar1 != (code *)0x0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_15 != 0);
                }
                lStack_328 = 0;
                lStack_320 = 0;
                lStack_318 = 0;
                func_0x000107c29cfc(&lStack_378,ppcVar7[1],ppcVar7[2]);
                plStack_360 = (long *)CONCAT71(plStack_360._1_7_,uVar13);
                uStack_348 = (undefined1)param_6;
                uStack_347 = (undefined7)((ulong)param_6 >> 8);
                uStack_340 = (undefined1)param_7;
                puStack_368 = puVar11;
                pcStack_358 = pcVar17;
                uStack_350 = uVar18;
                pcStack_338 = pcVar15;
                pcStack_330 = pcVar1;
                if (pcVar1 != (code *)0x0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_16 != 0);
                }
                puStack_2e8 = &UNK_10f4bcf15;
                plVar12 = &lStack_328;
                func_0x00010882f338();
                func_0x000107c28258();
                func_0x000107c3379c();
                (*extraout_x8_20)();
                func_0x000107c337f8();
                func_0x000107c33960();
                func_0x000107c3396c();
                func_0x000107c33a9c();
                func_0x00010882e55c();
                func_0x00010882f02c();
                lVar6 = lStack_318;
                lVar5 = lStack_320;
                lVar4 = lStack_328;
                pcVar1 = pcStack_330;
                pcVar15 = pcStack_338;
                lVar3 = lStack_370;
                lVar2 = lStack_378;
                pcVar19 = ppcVar7[5];
                lStack_2e0 = lStack_378;
                lStack_2d8 = lStack_370;
                lStack_370 = 0;
                lStack_378 = 0;
                lStack_2c8 = (long)plStack_360;
                puStack_2d0 = puStack_368;
                uStack_2b8 = uStack_350;
                pcStack_2c0 = pcStack_358;
                uStack_2af = CONCAT17(uStack_340,uStack_347);
                uStack_2b0 = uStack_348;
                pcStack_2a0 = pcStack_338;
                pcStack_298 = pcStack_330;
                pcStack_338 = (code *)0x0;
                pcStack_330 = (code *)0x0;
                pcStack_290 = (code *)0x0;
                uStack_280 = 1;
                lStack_278 = lStack_328;
                lStack_270 = lStack_320;
                lStack_328 = 0;
                lStack_320 = 0;
                lStack_318 = 0;
                lStack_268 = lVar6;
                lStack_258 = lStack_300;
                lStack_250 = lStack_2f8;
                lStack_248 = lStack_2f0;
                ppuStack_288 = (undefined **)param_7;
                ppcStack_260 = ppcVar7 + 7;
                func_0x00010882f710();
                pcStack_240 = FUN_108829cfc;
                ppuStack_238 = &PTR_FUN_110a78198;
                func_0x000107c33a2c();
                *plVar12 = lVar2;
                plVar12[1] = lVar3;
                pcVar17 = pcStack_358;
                puVar11 = puStack_368;
                lStack_2e0 = 0;
                lStack_2d8 = 0;
                lVar2 = CONCAT71(uStack_34f,uStack_350);
                plVar12[3] = (long)plStack_360;
                plVar12[2] = (long)puVar11;
                plVar12[5] = lVar2;
                plVar12[4] = (long)pcVar17;
                uVar20 = CONCAT17(uStack_348,uStack_34f);
                *(ulong *)((long)plVar12 + 0x31) = CONCAT17(uStack_340,uStack_347);
                *(undefined8 *)((long)plVar12 + 0x29) = uVar20;
                plVar12[8] = (long)pcVar15;
                plVar12[9] = (long)pcVar1;
                pcVar17 = pcStack_290;
                pcStack_2a0 = (code *)0x0;
                pcStack_298 = (code *)0x0;
                lVar2 = CONCAT71(uStack_27f,uStack_280);
                plVar12[0xb] = (long)ppuStack_288;
                plVar12[10] = (long)pcVar17;
                plVar12[0xc] = lVar2;
                plVar12[0xd] = lVar4;
                plVar12[0xe] = lVar5;
                plVar12[0xf] = lVar6;
                lStack_278 = 0;
                lStack_270 = 0;
                lStack_268 = 0;
                plVar12[0x10] = (long)(ppcVar7 + 7);
                plVar12[0x11] = lStack_300;
                plVar12[0x12] = lStack_2f8;
                plVar12[0x13] = lStack_2f0;
                lStack_250 = 0;
                lStack_248 = 0;
                lStack_258 = 0;
                plStack_230 = plVar12;
                func_0x000107c339ac(pcVar19);
                func_0x00010882fc6c();
                func_0x00010882eb54();
                func_0x000108829cd8(&lStack_2e0);
                func_0x000107c33a04();
                FUN_108829dc0(&lStack_378);
                func_0x000107c280f8(&lStack_328);
                ppcVar7 = &pcStack_310;
                func_0x000108625dec();
                func_0x000107c337a8(uStack_1e0);
                if ((bool)in_ZR) {
                  return ppcVar7;
                }
                ___stack_chk_fail();
                func_0x00010882eb54();
                func_0x000108829cd8(&lStack_2e0);
                func_0x000107c33a04();
                FUN_108829dc0(&lStack_378);
                func_0x000107c280f8(&lStack_328);
                func_0x000108625dec(&pcStack_310);
                func_0x00010882edf0();
                pcVar17 = FUN_1088288b4;
                func_0x00010882ff54();
                pppuStack_1d0 = apppuStack_180;
                apcStack_1c8[0] = pcVar17;
                func_0x000107c337b0();
                func_0x00010882fa64();
                if (lVar4 != 0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_17 != 0);
                }
                func_0x000107c33ae0();
                func_0x00010882f63c();
                pcStack_358 = (code *)lVar4;
                plStack_360 = &lStack_2e0;
                if (lVar4 != 0) {
                  do {
                    func_0x000107c3383c();
                  } while (extraout_w10_18 != 0);
                }
                pcStack_308 = (code *)&UNK_10f4bcf38;
                func_0x00010882f018(&uStack_348);
                func_0x000107c28258();
                func_0x000107c3379c();
                (*extraout_x8_21)();
                func_0x000107c337e4();
                func_0x000107c338d4();
                func_0x000107c3396c();
                func_0x00010882f010();
                func_0x00010882e3f0();
                func_0x00010882eed0();
                func_0x00010882e78c();
                pcStack_290 = FUN_108829e04;
                ppuStack_288 = &PTR_FUN_110a781b0;
                func_0x000107c33a44();
                func_0x00010882e8dc();
                func_0x000107c338ec();
                func_0x00010882ea00();
                func_0x000108829de0(&lStack_300);
                func_0x00010882ee40();
                FUN_108829ebc(&lStack_370);
                func_0x000107c33a40();
                ppcVar7 = &pcStack_330;
                func_0x000108625e58();
                func_0x000107c337a8(plStack_230);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x00010882ea00();
                  func_0x000108829de0(&lStack_300);
                  func_0x00010882ee40();
                  FUN_108829ebc(&lStack_370);
                  func_0x000107c33a40();
                  ppcVar7 = &pcStack_330;
                  func_0x000108625e58(ppcVar7);
                  func_0x00010882edf0();
                  func_0x00010882eb68(&PTR_DAT_110a77e80);
                  func_0x000107c29344(ppcVar7 + 3);
                  func_0x000107c29cf4(lVar4);
                  return ppcVar7;
                }
              }
              return ppcVar7;
            }
          }
        }
      }
    }
  }
  return ppcVar7;
}



/* Entry: 108827c6c; end: 108827dcb;  */

code ** FUN_108827c6c(undefined8 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                     ,undefined8 param_5,undefined8 param_6,long param_7,long *param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 in_ZR;
  code **ppcVar7;
  undefined8 ****ppppuVar8;
  code **ppcVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined1 uVar17;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  code *extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  undefined8 extraout_x8_16;
  code *extraout_x8_17;
  code *extraout_x8_18;
  undefined8 extraout_x9;
  code *pcVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  long unaff_x19;
  undefined8 uVar19;
  undefined *in_stack_00000088;
  undefined8 in_stack_000000f0;
  code *in_stack_00000118;
  undefined **in_stack_00000120;
  undefined8 *in_stack_000001b0;
  long lStack_378;
  long lStack_370;
  undefined1 *puStack_368;
  long *plStack_360;
  code *pcStack_358;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  code *pcStack_338;
  code *pcStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  code *pcStack_310;
  code *pcStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined1 *puStack_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2af;
  code *pcStack_2a0;
  code *pcStack_298;
  code *pcStack_290;
  undefined **ppuStack_288;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  code **ppcStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  code *pcStack_240;
  undefined **ppuStack_238;
  long *plStack_230;
  undefined8 uStack_1e0;
  undefined8 ***pppuStack_1d0;
  code *apcStack_1c8 [3];
  code *pcStack_1b0;
  undefined4 uStack_1a8;
  code *pcStack_1a0;
  code **ppcStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 ***apppuStack_180 [2];
  code *pcStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [88];
  undefined8 uStack_e0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_70;
  undefined8 ***pppuStack_20;
  undefined8 ***pppuStack_10;
  code *pcStack_8;
  
  func_0x000107c33bfc();
  func_0x000107c3378c();
  func_0x00010882eda8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882eb94();
  func_0x00010882ed88();
  func_0x00010882eca4();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000088 = &UNK_10f4bce85;
  func_0x00010882ebcc();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_01)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_1088295dc();
  func_0x00010882e15c();
  in_stack_00000118 = FUN_10882952c;
  in_stack_00000120 = &PTR_FUN_110a780f0;
  func_0x000107c339b8();
  func_0x00010882f2a0();
  FUN_1088295dc();
  func_0x00010882e080();
  func_0x00010882df0c(in_stack_000000f0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x000108829508(&stack0x00000090);
  func_0x00010882ee40();
  ppcVar7 = (code **)&stack0x00000008;
  FUN_108829604(ppcVar7);
  func_0x000107c33948();
  func_0x00010882f144();
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x000108829508(&stack0x00000090);
    func_0x00010882ee40();
    FUN_108829604(&stack0x00000008);
    func_0x000107c33948();
    func_0x00010882f144();
    func_0x00010882edf0();
    pcVar16 = FUN_108827dcc;
    func_0x000107c33bfc();
    in_stack_000001b0 = &stack0x000001b0;
    func_0x000107c3378c();
    func_0x00010882eda8();
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010882ebd8();
    func_0x00010882eb94();
    func_0x00010882f2ec();
    func_0x000107c27994();
    func_0x00010882eca4();
    uVar13 = (undefined4)param_3;
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c3383c();
        uVar13 = (undefined4)param_3;
      } while (extraout_w10_02 != 0);
    }
    in_stack_00000088 = &UNK_10f4bce90;
    func_0x00010882ebcc();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_04)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    func_0x00010882e9f0();
    FUN_1088296f8();
    func_0x00010882e15c();
    in_stack_00000118 = FUN_108829648;
    in_stack_00000120 = &PTR_FUN_110a78108;
    func_0x000107c339b8();
    func_0x00010882f2a0();
    FUN_1088296f8();
    func_0x00010882e080();
    func_0x00010882df0c(in_stack_000000f0);
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x000108829624(&stack0x00000090);
    func_0x00010882ee40();
    FUN_108829720(&stack0x00000008);
    func_0x000107c33948();
    ppcVar7 = (code **)&stack0x00000060;
    func_0x000108625dc8(ppcVar7);
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108829624(&stack0x00000090);
      func_0x00010882ee40();
      FUN_108829720(&stack0x00000008);
      func_0x000107c33948();
      func_0x000108625dc8(&stack0x00000060);
      func_0x00010882edf0();
      ppppuVar8 = &pppuStack_1d0;
      pcStack_8 = FUN_108827f38;
      pppuStack_20 = param_1;
      pppuStack_10 = (undefined8 ***)&stack0x000001b0;
      func_0x000107c3378c();
      lStack_168 = *(long *)(pcVar16 + 8);
      pcStack_170 = *(code **)pcVar16;
      if (*(long *)(pcVar16 + 8) != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_03 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882fbf8();
      func_0x00010882e694();
      ppcStack_198 = (code **)lStack_168;
      pcStack_1a0 = pcStack_170;
      uStack_1a8 = uVar13;
      if (lStack_168 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_04 != 0);
      }
      puStack_140 = &UNK_10f4b12f2;
      func_0x00010882f098(auStack_190);
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_05)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f090();
      func_0x00010882e42c();
      func_0x00010882eef4();
      func_0x00010882ea30();
      FUN_108829820();
      func_0x00010882f0bc();
      func_0x000107c337a0();
      pcStack_b8 = (code *)uStack_158;
      uStack_c0 = uStack_160;
      pcStack_d0 = (code *)extraout_x9;
      func_0x00010882e62c();
      pcStack_a8 = FUN_108829768;
      ppuStack_a0 = &PTR_FUN_110a78120;
      func_0x000107c339e0();
      func_0x00010882f34c();
      FUN_108829820();
      func_0x00010882e13c();
      func_0x00010882df40(pcStack_d0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x000108829744(auStack_138);
      func_0x00010882ee40();
      FUN_10882985c(&pppuStack_1d0);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x000107c33784();
      if ((bool)in_ZR) {
        return (code **)ppppuVar8;
      }
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108829744(auStack_138);
      func_0x00010882ee40();
      FUN_10882985c(&pppuStack_1d0);
      func_0x000107c33948();
      func_0x00010882f144();
      func_0x00010882edf0();
      func_0x000107c33bfc();
      pppuStack_20 = &pppuStack_10;
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_05 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882ed88();
      func_0x00010882eca4();
      if (extraout_x8_07 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_06 != 0);
      }
      puStack_148 = &UNK_10f4bcea8;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_08)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e9f0();
      FUN_108829950();
      func_0x00010882e15c();
      pcStack_b8 = FUN_1088298a0;
      ppuStack_b0 = &PTR_FUN_110a78138;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_108829950();
      func_0x00010882e080();
      func_0x00010882df0c(uStack_e0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x00010882987c(&puStack_140);
      func_0x00010882ee40();
      ppcVar7 = apcStack_1c8;
      FUN_108829978(ppcVar7);
      func_0x000107c33948();
      func_0x00010882f8b4();
      func_0x000107c33784();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x00010882987c(&puStack_140);
        func_0x00010882ee40();
        ppcVar9 = apcStack_1c8;
        FUN_108829978();
        func_0x000107c33948();
        func_0x00010882f8b4();
        func_0x00010882edf0();
        func_0x000107c33bfc();
        pppuStack_20 = &pppuStack_20;
        func_0x000107c3378c();
        func_0x00010882eda8();
        if (extraout_x8_09 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_07 != 0);
        }
        func_0x00010882ebd8();
        func_0x00010882eb94();
        func_0x00010882ed88();
        func_0x00010882eca4();
        if (extraout_x8_10 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_08 != 0);
        }
        puStack_148 = &UNK_10f4bceb9;
        func_0x00010882ebcc();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_11)();
        func_0x000107c33790();
        func_0x000107c33824();
        func_0x000107c3396c();
        func_0x00010882f010();
        func_0x00010882e3f0();
        func_0x00010882eed0();
        func_0x00010882e9f0();
        FUN_108829a70();
        func_0x00010882e15c();
        pcStack_b8 = FUN_1088299c0;
        ppuStack_b0 = &PTR_FUN_110a78150;
        func_0x000107c339b8();
        func_0x00010882f2a0();
        FUN_108829a70();
        func_0x00010882e080();
        func_0x00010882df0c(uStack_e0);
        func_0x000107c33820();
        func_0x000107c337b4();
        func_0x00010882999c(&puStack_140);
        func_0x00010882ee40();
        FUN_108829a98(apcStack_1c8);
        func_0x000107c33948();
        ppcVar7 = &pcStack_170;
        func_0x000108625e10(ppcVar7);
        func_0x000107c33784();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x00010882999c(&puStack_140);
          func_0x00010882ee40();
          FUN_108829a98(apcStack_1c8);
          func_0x000107c33948();
          func_0x000108625e10(&pcStack_170);
          func_0x00010882edf0();
          pcVar16 = FUN_10882839c;
          func_0x000107c33bfc();
          pppuStack_20 = &pppuStack_20;
          func_0x000107c3378c();
          func_0x00010882eda8();
          if (extraout_x8_12 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_09 != 0);
          }
          func_0x00010882ebd8();
          func_0x00010882eb94();
          func_0x00010882ed88();
          func_0x00010882eca4();
          if (extraout_x8_13 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_10 != 0);
          }
          puStack_148 = &UNK_10f4bcee0;
          func_0x00010882ebcc();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_14)();
          func_0x000107c33790();
          func_0x000107c33824();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          uVar19 = *(undefined8 *)(unaff_x19 + 0x28);
          func_0x00010882e9f0();
          FUN_108829b90();
          func_0x00010882e15c();
          pcStack_b8 = FUN_108829ae0;
          ppuStack_b0 = &PTR_FUN_110a78168;
          func_0x000107c339b8();
          func_0x00010882f2a0();
          FUN_108829b90();
          func_0x00010882e080();
          func_0x00010882df0c(uStack_e0);
          func_0x000107c33820();
          func_0x000107c337b4();
          func_0x000108829abc(&puStack_140);
          func_0x00010882ee40();
          FUN_108829bb8(apcStack_1c8);
          func_0x000107c33948();
          ppcVar7 = &pcStack_170;
          func_0x000108625e34(ppcVar7);
          func_0x000107c33784();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010882e104();
            func_0x000108829abc(&puStack_140);
            func_0x00010882ee40();
            FUN_108829bb8(apcStack_1c8);
            func_0x000107c33948();
            func_0x000108625e34(&pcStack_170);
            func_0x00010882edf0();
            pcVar14 = FUN_108828504;
            func_0x00010882ff54();
            pppuStack_10 = &pppuStack_20;
            pcStack_8 = pcVar14;
            func_0x000107c337b0();
            func_0x00010882fa64();
            if (ppcVar9 != (code **)0x0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_11 != 0);
            }
            func_0x000107c33ae0();
            uVar15 = *(undefined8 *)(unaff_x19 + 0x10);
            func_0x00010882f63c();
            uVar17 = (undefined1)param_5;
            uVar12 = (undefined1)uVar15;
            pcStack_1a0 = (code *)uVar19;
            ppcStack_198 = ppcVar9;
            if (ppcVar9 != (code **)0x0) {
              do {
                func_0x000107c3383c();
                uVar17 = (undefined1)param_5;
                uVar12 = (undefined1)uVar15;
              } while (extraout_w10_12 != 0);
            }
            puStack_148 = &UNK_10f4bcef9;
            puVar10 = auStack_188;
            func_0x00010882f018();
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_15)();
            func_0x000107c337e4();
            func_0x000107c338d4();
            func_0x000107c3396c();
            func_0x00010882f010();
            func_0x00010882e3f0();
            func_0x00010882eed0();
            func_0x00010882e78c();
            pcStack_d0 = FUN_108829c00;
            ppuStack_c8 = &PTR_FUN_110a78180;
            func_0x000107c33a44();
            func_0x00010882e8dc();
            func_0x000107c338ec();
            func_0x00010882ea00();
            func_0x000108829bdc(&puStack_140);
            func_0x00010882ee40();
            ppcVar7 = &pcStack_1b0;
            FUN_108829cb8();
            func_0x000107c33a40();
            func_0x00010882f8b4();
            func_0x000107c337a8(uStack_70);
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010882ea00();
              func_0x000108829bdc(&puStack_140);
              func_0x00010882ee40();
              FUN_108829cb8(&pcStack_1b0);
              func_0x000107c33a40();
              func_0x00010882f8b4();
              func_0x00010882edf0();
              func_0x000107c33c58(FUN_108828644);
              apppuStack_180[0] = &pppuStack_10;
              func_0x000107c337b0();
              pcVar14 = (code *)*param_8;
              pcVar1 = (code *)param_8[1];
              pcStack_310 = pcVar14;
              pcStack_308 = pcVar1;
              uStack_1e0 = extraout_x8_16;
              if (pcVar1 != (code *)0x0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_13 != 0);
              }
              lStack_328 = 0;
              lStack_320 = 0;
              lStack_318 = 0;
              func_0x000107c29cfc(&lStack_378,ppcVar7[1],ppcVar7[2]);
              plStack_360 = (long *)CONCAT71(plStack_360._1_7_,uVar12);
              uStack_348 = (undefined1)param_6;
              uStack_347 = (undefined7)((ulong)param_6 >> 8);
              uStack_340 = (undefined1)param_7;
              puStack_368 = puVar10;
              pcStack_358 = pcVar16;
              uStack_350 = uVar17;
              pcStack_338 = pcVar14;
              pcStack_330 = pcVar1;
              if (pcVar1 != (code *)0x0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_14 != 0);
              }
              puStack_2e8 = &UNK_10f4bcf15;
              plVar11 = &lStack_328;
              func_0x00010882f338();
              func_0x000107c28258();
              func_0x000107c3379c();
              (*extraout_x8_17)();
              func_0x000107c337f8();
              func_0x000107c33960();
              func_0x000107c3396c();
              func_0x000107c33a9c();
              func_0x00010882e55c();
              func_0x00010882f02c();
              lVar6 = lStack_318;
              lVar5 = lStack_320;
              lVar4 = lStack_328;
              pcVar1 = pcStack_330;
              pcVar14 = pcStack_338;
              lVar3 = lStack_370;
              lVar2 = lStack_378;
              pcVar18 = ppcVar7[5];
              lStack_2e0 = lStack_378;
              lStack_2d8 = lStack_370;
              lStack_370 = 0;
              lStack_378 = 0;
              lStack_2c8 = (long)plStack_360;
              puStack_2d0 = puStack_368;
              uStack_2b8 = uStack_350;
              pcStack_2c0 = pcStack_358;
              uStack_2af = CONCAT17(uStack_340,uStack_347);
              uStack_2b0 = uStack_348;
              pcStack_2a0 = pcStack_338;
              pcStack_298 = pcStack_330;
              pcStack_338 = (code *)0x0;
              pcStack_330 = (code *)0x0;
              pcStack_290 = (code *)0x0;
              uStack_280 = 1;
              lStack_278 = lStack_328;
              lStack_270 = lStack_320;
              lStack_328 = 0;
              lStack_320 = 0;
              lStack_318 = 0;
              lStack_268 = lVar6;
              lStack_258 = lStack_300;
              lStack_250 = lStack_2f8;
              lStack_248 = lStack_2f0;
              ppuStack_288 = (undefined **)param_7;
              ppcStack_260 = ppcVar7 + 7;
              func_0x00010882f710();
              pcStack_240 = FUN_108829cfc;
              ppuStack_238 = &PTR_FUN_110a78198;
              func_0x000107c33a2c();
              *plVar11 = lVar2;
              plVar11[1] = lVar3;
              pcVar16 = pcStack_358;
              puVar10 = puStack_368;
              lStack_2e0 = 0;
              lStack_2d8 = 0;
              lVar2 = CONCAT71(uStack_34f,uStack_350);
              plVar11[3] = (long)plStack_360;
              plVar11[2] = (long)puVar10;
              plVar11[5] = lVar2;
              plVar11[4] = (long)pcVar16;
              uVar19 = CONCAT17(uStack_348,uStack_34f);
              *(ulong *)((long)plVar11 + 0x31) = CONCAT17(uStack_340,uStack_347);
              *(undefined8 *)((long)plVar11 + 0x29) = uVar19;
              plVar11[8] = (long)pcVar14;
              plVar11[9] = (long)pcVar1;
              pcVar16 = pcStack_290;
              pcStack_2a0 = (code *)0x0;
              pcStack_298 = (code *)0x0;
              lVar2 = CONCAT71(uStack_27f,uStack_280);
              plVar11[0xb] = (long)ppuStack_288;
              plVar11[10] = (long)pcVar16;
              plVar11[0xc] = lVar2;
              plVar11[0xd] = lVar4;
              plVar11[0xe] = lVar5;
              plVar11[0xf] = lVar6;
              lStack_278 = 0;
              lStack_270 = 0;
              lStack_268 = 0;
              plVar11[0x10] = (long)(ppcVar7 + 7);
              plVar11[0x11] = lStack_300;
              plVar11[0x12] = lStack_2f8;
              plVar11[0x13] = lStack_2f0;
              lStack_250 = 0;
              lStack_248 = 0;
              lStack_258 = 0;
              plStack_230 = plVar11;
              func_0x000107c339ac(pcVar18);
              func_0x00010882fc6c();
              func_0x00010882eb54();
              func_0x000108829cd8(&lStack_2e0);
              func_0x000107c33a04();
              FUN_108829dc0(&lStack_378);
              func_0x000107c280f8(&lStack_328);
              ppcVar7 = &pcStack_310;
              func_0x000108625dec();
              func_0x000107c337a8(uStack_1e0);
              if ((bool)in_ZR) {
                return ppcVar7;
              }
              ___stack_chk_fail();
              func_0x00010882eb54();
              func_0x000108829cd8(&lStack_2e0);
              func_0x000107c33a04();
              FUN_108829dc0(&lStack_378);
              func_0x000107c280f8(&lStack_328);
              func_0x000108625dec(&pcStack_310);
              func_0x00010882edf0();
              pcVar16 = FUN_1088288b4;
              func_0x00010882ff54();
              pppuStack_1d0 = apppuStack_180;
              apcStack_1c8[0] = pcVar16;
              func_0x000107c337b0();
              func_0x00010882fa64();
              if (lVar4 != 0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_15 != 0);
              }
              func_0x000107c33ae0();
              func_0x00010882f63c();
              pcStack_358 = (code *)lVar4;
              plStack_360 = &lStack_2e0;
              if (lVar4 != 0) {
                do {
                  func_0x000107c3383c();
                } while (extraout_w10_16 != 0);
              }
              pcStack_308 = (code *)&UNK_10f4bcf38;
              func_0x00010882f018(&uStack_348);
              func_0x000107c28258();
              func_0x000107c3379c();
              (*extraout_x8_18)();
              func_0x000107c337e4();
              func_0x000107c338d4();
              func_0x000107c3396c();
              func_0x00010882f010();
              func_0x00010882e3f0();
              func_0x00010882eed0();
              func_0x00010882e78c();
              pcStack_290 = FUN_108829e04;
              ppuStack_288 = &PTR_FUN_110a781b0;
              func_0x000107c33a44();
              func_0x00010882e8dc();
              func_0x000107c338ec();
              func_0x00010882ea00();
              func_0x000108829de0(&lStack_300);
              func_0x00010882ee40();
              FUN_108829ebc(&lStack_370);
              func_0x000107c33a40();
              ppcVar7 = &pcStack_330;
              func_0x000108625e58();
              func_0x000107c337a8(plStack_230);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x00010882ea00();
                func_0x000108829de0(&lStack_300);
                func_0x00010882ee40();
                FUN_108829ebc(&lStack_370);
                func_0x000107c33a40();
                ppcVar7 = &pcStack_330;
                func_0x000108625e58(ppcVar7);
                func_0x00010882edf0();
                func_0x00010882eb68(&PTR_DAT_110a77e80);
                func_0x000107c29344(ppcVar7 + 3);
                func_0x000107c29cf4(lVar4);
                return ppcVar7;
              }
            }
            return ppcVar7;
          }
        }
      }
    }
  }
  return ppcVar7;
}



/* Entry: 108827dcc; end: 108827f37;  */

code ** FUN_108827dcc(undefined8 param_1,undefined8 **param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,long param_7,long *param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 in_ZR;
  code **ppcVar9;
  undefined8 ***pppuVar10;
  code **ppcVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined1 uVar19;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  undefined8 extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  long unaff_x19;
  undefined8 uVar20;
  undefined8 *unaff_x30;
  undefined *in_stack_00000088;
  undefined8 in_stack_000000f0;
  code *in_stack_00000118;
  undefined **in_stack_00000120;
  undefined8 in_stack_000001b0;
  long lStack_378;
  long lStack_370;
  undefined1 *puStack_368;
  undefined8 *puStack_360;
  code *pcStack_358;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  undefined *puStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined1 *puStack_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2af;
  long lStack_2a0;
  long lStack_298;
  code *pcStack_290;
  undefined **ppuStack_288;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long *plStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  code *pcStack_240;
  undefined **ppuStack_238;
  long *plStack_230;
  undefined8 uStack_1e0;
  undefined8 **ppuStack_1d0;
  code *apcStack_1c8 [3];
  long lStack_1b0;
  undefined4 uStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 **appuStack_180 [2];
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [88];
  undefined8 uStack_e0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_70;
  undefined8 **ppuStack_20;
  undefined8 **ppuStack_10;
  code *pcStack_8;
  
  func_0x000107c33bfc();
  func_0x000107c3378c();
  func_0x00010882eda8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882eb94();
  func_0x00010882f2ec();
  func_0x000107c27994();
  func_0x00010882eca4();
  uVar15 = (undefined4)param_3;
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
      uVar15 = (undefined4)param_3;
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000088 = &UNK_10f4bce90;
  func_0x00010882ebcc();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_01)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_1088296f8();
  func_0x00010882e15c();
  in_stack_00000118 = FUN_108829648;
  in_stack_00000120 = &PTR_FUN_110a78108;
  func_0x000107c339b8();
  func_0x00010882f2a0();
  FUN_1088296f8();
  func_0x00010882e080();
  func_0x00010882df0c(in_stack_000000f0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x000108829624(&stack0x00000090);
  func_0x00010882ee40();
  FUN_108829720(&stack0x00000008);
  func_0x000107c33948();
  ppcVar9 = (code **)&stack0x00000060;
  func_0x000108625dc8(ppcVar9);
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x000108829624(&stack0x00000090);
    func_0x00010882ee40();
    FUN_108829720(&stack0x00000008);
    func_0x000107c33948();
    func_0x000108625dc8(&stack0x00000060);
    func_0x00010882edf0();
    pppuVar10 = &ppuStack_1d0;
    pcStack_8 = FUN_108827f38;
    ppuStack_20 = param_2;
    ppuStack_10 = (undefined8 **)&stack0x000001b0;
    func_0x000107c3378c();
    lStack_168 = unaff_x30[1];
    lStack_170 = *unaff_x30;
    if (unaff_x30[1] != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010882ebd8();
    func_0x00010882fbf8();
    func_0x00010882e694();
    puStack_198 = (undefined8 *)lStack_168;
    lStack_1a0 = lStack_170;
    uStack_1a8 = uVar15;
    if (lStack_168 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_02 != 0);
    }
    puStack_140 = &UNK_10f4b12f2;
    func_0x00010882f098(auStack_190);
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_02)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x00010882f090();
    func_0x00010882e42c();
    func_0x00010882eef4();
    func_0x00010882ea30();
    FUN_108829820();
    func_0x00010882f0bc();
    func_0x000107c337a0();
    pcStack_b8 = (code *)uStack_158;
    uStack_c0 = uStack_160;
    pcStack_d0 = (code *)extraout_x9;
    func_0x00010882e62c();
    pcStack_a8 = FUN_108829768;
    ppuStack_a0 = &PTR_FUN_110a78120;
    func_0x000107c339e0();
    func_0x00010882f34c();
    FUN_108829820();
    func_0x00010882e13c();
    func_0x00010882df40(pcStack_d0);
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x000108829744(auStack_138);
    func_0x00010882ee40();
    FUN_10882985c(&ppuStack_1d0);
    func_0x000107c33948();
    func_0x00010882f144();
    func_0x000107c33784();
    if ((bool)in_ZR) {
      return (code **)pppuVar10;
    }
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x000108829744(auStack_138);
    func_0x00010882ee40();
    FUN_10882985c(&ppuStack_1d0);
    func_0x000107c33948();
    func_0x00010882f144();
    func_0x00010882edf0();
    func_0x000107c33bfc();
    ppuStack_20 = &ppuStack_10;
    func_0x000107c3378c();
    func_0x00010882eda8();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_03 != 0);
    }
    func_0x00010882ebd8();
    func_0x00010882eb94();
    func_0x00010882ed88();
    func_0x00010882eca4();
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_04 != 0);
    }
    puStack_148 = &UNK_10f4bcea8;
    func_0x00010882ebcc();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_05)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    func_0x00010882e9f0();
    FUN_108829950();
    func_0x00010882e15c();
    pcStack_b8 = FUN_1088298a0;
    ppuStack_b0 = &PTR_FUN_110a78138;
    func_0x000107c339b8();
    func_0x00010882f2a0();
    FUN_108829950();
    func_0x00010882e080();
    func_0x00010882df0c(uStack_e0);
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x00010882987c(&puStack_140);
    func_0x00010882ee40();
    ppcVar9 = apcStack_1c8;
    FUN_108829978(ppcVar9);
    func_0x000107c33948();
    func_0x00010882f8b4();
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x00010882987c(&puStack_140);
      func_0x00010882ee40();
      ppcVar11 = apcStack_1c8;
      FUN_108829978();
      func_0x000107c33948();
      func_0x00010882f8b4();
      func_0x00010882edf0();
      func_0x000107c33bfc();
      ppuStack_20 = &ppuStack_20;
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_05 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882ed88();
      func_0x00010882eca4();
      if (extraout_x8_07 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_06 != 0);
      }
      puStack_148 = &UNK_10f4bceb9;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_08)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e9f0();
      FUN_108829a70();
      func_0x00010882e15c();
      pcStack_b8 = FUN_1088299c0;
      ppuStack_b0 = &PTR_FUN_110a78150;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_108829a70();
      func_0x00010882e080();
      func_0x00010882df0c(uStack_e0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x00010882999c(&puStack_140);
      func_0x00010882ee40();
      FUN_108829a98(apcStack_1c8);
      func_0x000107c33948();
      ppcVar9 = (code **)&lStack_170;
      func_0x000108625e10(ppcVar9);
      func_0x000107c33784();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x00010882999c(&puStack_140);
        func_0x00010882ee40();
        FUN_108829a98(apcStack_1c8);
        func_0x000107c33948();
        func_0x000108625e10(&lStack_170);
        func_0x00010882edf0();
        pcVar18 = FUN_10882839c;
        func_0x000107c33bfc();
        ppuStack_20 = &ppuStack_20;
        func_0x000107c3378c();
        func_0x00010882eda8();
        if (extraout_x8_09 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_07 != 0);
        }
        func_0x00010882ebd8();
        func_0x00010882eb94();
        func_0x00010882ed88();
        func_0x00010882eca4();
        if (extraout_x8_10 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_08 != 0);
        }
        puStack_148 = &UNK_10f4bcee0;
        func_0x00010882ebcc();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_11)();
        func_0x000107c33790();
        func_0x000107c33824();
        func_0x000107c3396c();
        func_0x00010882f010();
        func_0x00010882e3f0();
        func_0x00010882eed0();
        uVar20 = *(undefined8 *)(unaff_x19 + 0x28);
        func_0x00010882e9f0();
        FUN_108829b90();
        func_0x00010882e15c();
        pcStack_b8 = FUN_108829ae0;
        ppuStack_b0 = &PTR_FUN_110a78168;
        func_0x000107c339b8();
        func_0x00010882f2a0();
        FUN_108829b90();
        func_0x00010882e080();
        func_0x00010882df0c(uStack_e0);
        func_0x000107c33820();
        func_0x000107c337b4();
        func_0x000108829abc(&puStack_140);
        func_0x00010882ee40();
        FUN_108829bb8(apcStack_1c8);
        func_0x000107c33948();
        ppcVar9 = (code **)&lStack_170;
        func_0x000108625e34(ppcVar9);
        func_0x000107c33784();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010882e104();
          func_0x000108829abc(&puStack_140);
          func_0x00010882ee40();
          FUN_108829bb8(apcStack_1c8);
          func_0x000107c33948();
          func_0x000108625e34(&lStack_170);
          func_0x00010882edf0();
          pcVar16 = FUN_108828504;
          func_0x00010882ff54();
          ppuStack_10 = &ppuStack_20;
          pcStack_8 = pcVar16;
          func_0x000107c337b0();
          func_0x00010882fa64();
          if (ppcVar11 != (code **)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_09 != 0);
          }
          func_0x000107c33ae0();
          uVar17 = *(undefined8 *)(unaff_x19 + 0x10);
          func_0x00010882f63c();
          uVar19 = (undefined1)param_5;
          uVar14 = (undefined1)uVar17;
          lStack_1a0 = uVar20;
          puStack_198 = ppcVar11;
          if (ppcVar11 != (code **)0x0) {
            do {
              func_0x000107c3383c();
              uVar19 = (undefined1)param_5;
              uVar14 = (undefined1)uVar17;
            } while (extraout_w10_10 != 0);
          }
          puStack_148 = &UNK_10f4bcef9;
          puVar12 = auStack_188;
          func_0x00010882f018();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_12)();
          func_0x000107c337e4();
          func_0x000107c338d4();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e78c();
          pcStack_d0 = FUN_108829c00;
          ppuStack_c8 = &PTR_FUN_110a78180;
          func_0x000107c33a44();
          func_0x00010882e8dc();
          func_0x000107c338ec();
          func_0x00010882ea00();
          func_0x000108829bdc(&puStack_140);
          func_0x00010882ee40();
          ppcVar9 = (code **)&lStack_1b0;
          FUN_108829cb8();
          func_0x000107c33a40();
          func_0x00010882f8b4();
          func_0x000107c337a8(uStack_70);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010882ea00();
            func_0x000108829bdc(&puStack_140);
            func_0x00010882ee40();
            FUN_108829cb8(&lStack_1b0);
            func_0x000107c33a40();
            func_0x00010882f8b4();
            func_0x00010882edf0();
            func_0x000107c33c58(FUN_108828644);
            appuStack_180[0] = &ppuStack_10;
            func_0x000107c337b0();
            pcVar16 = (code *)*param_8;
            pcVar1 = (code *)param_8[1];
            lStack_310 = (long)pcVar16;
            puStack_308 = pcVar1;
            uStack_1e0 = extraout_x8_13;
            if (pcVar1 != (code *)0x0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_11 != 0);
            }
            lStack_328 = 0;
            lStack_320 = 0;
            lStack_318 = 0;
            func_0x000107c29cfc(&lStack_378,ppcVar9[1],ppcVar9[2]);
            puStack_360 = (undefined8 *)CONCAT71(puStack_360._1_7_,uVar14);
            uStack_348 = (undefined1)param_6;
            uStack_347 = (undefined7)((ulong)param_6 >> 8);
            uStack_340 = (undefined1)param_7;
            puStack_368 = puVar12;
            pcStack_358 = pcVar18;
            uStack_350 = uVar19;
            lStack_338 = (long)pcVar16;
            lStack_330 = (long)pcVar1;
            if (pcVar1 != (code *)0x0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_12 != 0);
            }
            puStack_2e8 = &UNK_10f4bcf15;
            plVar13 = &lStack_328;
            func_0x00010882f338();
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_14)();
            func_0x000107c337f8();
            func_0x000107c33960();
            func_0x000107c3396c();
            func_0x000107c33a9c();
            func_0x00010882e55c();
            func_0x00010882f02c();
            lVar8 = lStack_318;
            lVar7 = lStack_320;
            lVar6 = lStack_328;
            lVar5 = lStack_330;
            lVar4 = lStack_338;
            lVar3 = lStack_370;
            lVar2 = lStack_378;
            pcVar16 = ppcVar9[5];
            lStack_2e0 = lStack_378;
            lStack_2d8 = lStack_370;
            lStack_370 = 0;
            lStack_378 = 0;
            lStack_2c8 = (long)puStack_360;
            puStack_2d0 = puStack_368;
            uStack_2b8 = uStack_350;
            pcStack_2c0 = pcStack_358;
            uStack_2af = CONCAT17(uStack_340,uStack_347);
            uStack_2b0 = uStack_348;
            lStack_2a0 = lStack_338;
            lStack_298 = lStack_330;
            lStack_338 = 0;
            lStack_330 = 0;
            pcStack_290 = (code *)0x0;
            uStack_280 = 1;
            lStack_278 = lStack_328;
            lStack_270 = lStack_320;
            lStack_328 = 0;
            lStack_320 = 0;
            lStack_318 = 0;
            lStack_268 = lVar8;
            lStack_258 = lStack_300;
            lStack_250 = lStack_2f8;
            lStack_248 = lStack_2f0;
            ppuStack_288 = (undefined **)param_7;
            plStack_260 = (long *)(ppcVar9 + 7);
            func_0x00010882f710();
            pcStack_240 = FUN_108829cfc;
            ppuStack_238 = &PTR_FUN_110a78198;
            func_0x000107c33a2c();
            *plVar13 = lVar2;
            plVar13[1] = lVar3;
            pcVar18 = pcStack_358;
            puVar12 = puStack_368;
            lStack_2e0 = 0;
            lStack_2d8 = 0;
            lVar2 = CONCAT71(uStack_34f,uStack_350);
            plVar13[3] = (long)puStack_360;
            plVar13[2] = (long)puVar12;
            plVar13[5] = lVar2;
            plVar13[4] = (long)pcVar18;
            uVar20 = CONCAT17(uStack_348,uStack_34f);
            *(ulong *)((long)plVar13 + 0x31) = CONCAT17(uStack_340,uStack_347);
            *(undefined8 *)((long)plVar13 + 0x29) = uVar20;
            plVar13[8] = lVar4;
            plVar13[9] = lVar5;
            pcVar18 = pcStack_290;
            lStack_2a0 = 0;
            lStack_298 = 0;
            lVar2 = CONCAT71(uStack_27f,uStack_280);
            plVar13[0xb] = (long)ppuStack_288;
            plVar13[10] = (long)pcVar18;
            plVar13[0xc] = lVar2;
            plVar13[0xd] = lVar6;
            plVar13[0xe] = lVar7;
            plVar13[0xf] = lVar8;
            lStack_278 = 0;
            lStack_270 = 0;
            lStack_268 = 0;
            plVar13[0x10] = (long)(ppcVar9 + 7);
            plVar13[0x11] = lStack_300;
            plVar13[0x12] = lStack_2f8;
            plVar13[0x13] = lStack_2f0;
            lStack_250 = 0;
            lStack_248 = 0;
            lStack_258 = 0;
            plStack_230 = plVar13;
            func_0x000107c339ac(pcVar16);
            func_0x00010882fc6c();
            func_0x00010882eb54();
            func_0x000108829cd8(&lStack_2e0);
            func_0x000107c33a04();
            FUN_108829dc0(&lStack_378);
            func_0x000107c280f8(&lStack_328);
            ppcVar9 = (code **)&lStack_310;
            func_0x000108625dec();
            func_0x000107c337a8(uStack_1e0);
            if ((bool)in_ZR) {
              return ppcVar9;
            }
            ___stack_chk_fail();
            func_0x00010882eb54();
            func_0x000108829cd8(&lStack_2e0);
            func_0x000107c33a04();
            FUN_108829dc0(&lStack_378);
            func_0x000107c280f8(&lStack_328);
            func_0x000108625dec(&lStack_310);
            func_0x00010882edf0();
            pcVar18 = FUN_1088288b4;
            func_0x00010882ff54();
            ppuStack_1d0 = appuStack_180;
            apcStack_1c8[0] = pcVar18;
            func_0x000107c337b0();
            func_0x00010882fa64();
            if (lVar6 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_13 != 0);
            }
            func_0x000107c33ae0();
            func_0x00010882f63c();
            pcStack_358 = (code *)lVar6;
            puStack_360 = &lStack_2e0;
            if (lVar6 != 0) {
              do {
                func_0x000107c3383c();
              } while (extraout_w10_14 != 0);
            }
            puStack_308 = &UNK_10f4bcf38;
            func_0x00010882f018(&uStack_348);
            func_0x000107c28258();
            func_0x000107c3379c();
            (*extraout_x8_15)();
            func_0x000107c337e4();
            func_0x000107c338d4();
            func_0x000107c3396c();
            func_0x00010882f010();
            func_0x00010882e3f0();
            func_0x00010882eed0();
            func_0x00010882e78c();
            pcStack_290 = FUN_108829e04;
            ppuStack_288 = &PTR_FUN_110a781b0;
            func_0x000107c33a44();
            func_0x00010882e8dc();
            func_0x000107c338ec();
            func_0x00010882ea00();
            func_0x000108829de0(&lStack_300);
            func_0x00010882ee40();
            FUN_108829ebc(&lStack_370);
            func_0x000107c33a40();
            ppcVar9 = (code **)&lStack_330;
            func_0x000108625e58();
            func_0x000107c337a8(plStack_230);
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x00010882ea00();
              func_0x000108829de0(&lStack_300);
              func_0x00010882ee40();
              FUN_108829ebc(&lStack_370);
              func_0x000107c33a40();
              ppcVar9 = (code **)&lStack_330;
              func_0x000108625e58(ppcVar9);
              func_0x00010882edf0();
              func_0x00010882eb68(&PTR_DAT_110a77e80);
              func_0x000107c29344(ppcVar9 + 3);
              func_0x000107c29cf4(lVar6);
              return ppcVar9;
            }
          }
          return ppcVar9;
        }
      }
    }
  }
  return ppcVar9;
}



/* Entry: 108827f38; end: 1088280d3;  */

undefined1 ***
FUN_108827f38(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long *param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 in_ZR;
  undefined1 ***pppuVar9;
  code **ppcVar10;
  code **ppcVar11;
  undefined1 *puVar12;
  long *plVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined1 uVar17;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  undefined8 extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  undefined8 extraout_x9;
  code *pcVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  long unaff_x19;
  undefined8 uVar19;
  long lStack_378;
  long lStack_370;
  undefined1 *puStack_368;
  undefined8 *puStack_360;
  code *pcStack_358;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  undefined *puStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  undefined *puStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined1 *puStack_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b0;
  undefined8 uStack_2af;
  long lStack_2a0;
  long lStack_298;
  code *pcStack_290;
  undefined **ppuStack_288;
  undefined1 uStack_280;
  undefined7 uStack_27f;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long *plStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  code *pcStack_240;
  undefined **ppuStack_238;
  long *plStack_230;
  undefined8 uStack_1e0;
  undefined1 **ppuStack_1d0;
  code *apcStack_1c8 [3];
  long lStack_1b0;
  undefined4 uStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 *apuStack_180 [2];
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [88];
  undefined8 uStack_e0;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_70;
  
  pppuVar9 = &ppuStack_1d0;
  func_0x000107c3378c();
  lStack_168 = param_4[1];
  lStack_170 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882fbf8();
  func_0x00010882e694();
  puStack_198 = (undefined8 *)lStack_168;
  lStack_1a0 = lStack_170;
  uStack_1a8 = param_3;
  if (lStack_168 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  puStack_140 = &UNK_10f4b12f2;
  func_0x00010882f098(auStack_190);
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f090();
  func_0x00010882e42c();
  func_0x00010882eef4();
  func_0x00010882ea30();
  FUN_108829820();
  func_0x00010882f0bc();
  func_0x000107c337a0();
  pcStack_b8 = (code *)uStack_158;
  uStack_c0 = uStack_160;
  pcStack_d0 = (code *)extraout_x9;
  func_0x00010882e62c();
  pcStack_a8 = FUN_108829768;
  ppuStack_a0 = &PTR_FUN_110a78120;
  func_0x000107c339e0();
  func_0x00010882f34c();
  FUN_108829820();
  func_0x00010882e13c();
  func_0x00010882df40(pcStack_d0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x000108829744(auStack_138);
  func_0x00010882ee40();
  FUN_10882985c(&ppuStack_1d0);
  func_0x000107c33948();
  func_0x00010882f144();
  func_0x000107c33784();
  if ((bool)in_ZR) {
    return pppuVar9;
  }
  ___stack_chk_fail();
  func_0x00010882e104();
  func_0x000108829744(auStack_138);
  func_0x00010882ee40();
  FUN_10882985c(&ppuStack_1d0);
  func_0x000107c33948();
  func_0x00010882f144();
  func_0x00010882edf0();
  func_0x000107c33bfc();
  func_0x000107c3378c();
  func_0x00010882eda8();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882eb94();
  func_0x00010882ed88();
  func_0x00010882eca4();
  if (extraout_x8_01 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_02 != 0);
  }
  puStack_148 = &UNK_10f4bcea8;
  func_0x00010882ebcc();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_02)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_108829950();
  func_0x00010882e15c();
  pcStack_b8 = FUN_1088298a0;
  ppuStack_b0 = &PTR_FUN_110a78138;
  func_0x000107c339b8();
  func_0x00010882f2a0();
  FUN_108829950();
  func_0x00010882e080();
  func_0x00010882df0c(uStack_e0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x00010882987c(&puStack_140);
  func_0x00010882ee40();
  ppcVar10 = apcStack_1c8;
  FUN_108829978(ppcVar10);
  func_0x000107c33948();
  func_0x00010882f8b4();
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x00010882987c(&puStack_140);
    func_0x00010882ee40();
    ppcVar11 = apcStack_1c8;
    FUN_108829978();
    func_0x000107c33948();
    func_0x00010882f8b4();
    func_0x00010882edf0();
    func_0x000107c33bfc();
    func_0x000107c3378c();
    func_0x00010882eda8();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_03 != 0);
    }
    func_0x00010882ebd8();
    func_0x00010882eb94();
    func_0x00010882ed88();
    func_0x00010882eca4();
    if (extraout_x8_04 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_04 != 0);
    }
    puStack_148 = &UNK_10f4bceb9;
    func_0x00010882ebcc();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_05)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    func_0x00010882e9f0();
    FUN_108829a70();
    func_0x00010882e15c();
    pcStack_b8 = FUN_1088299c0;
    ppuStack_b0 = &PTR_FUN_110a78150;
    func_0x000107c339b8();
    func_0x00010882f2a0();
    FUN_108829a70();
    func_0x00010882e080();
    func_0x00010882df0c(uStack_e0);
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x00010882999c(&puStack_140);
    func_0x00010882ee40();
    FUN_108829a98(apcStack_1c8);
    func_0x000107c33948();
    ppcVar10 = (code **)&lStack_170;
    func_0x000108625e10(ppcVar10);
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x00010882999c(&puStack_140);
      func_0x00010882ee40();
      FUN_108829a98(apcStack_1c8);
      func_0x000107c33948();
      func_0x000108625e10(&lStack_170);
      func_0x00010882edf0();
      pcVar16 = FUN_10882839c;
      func_0x000107c33bfc();
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_05 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882ed88();
      func_0x00010882eca4();
      if (extraout_x8_07 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_06 != 0);
      }
      puStack_148 = &UNK_10f4bcee0;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_08)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      uVar19 = *(undefined8 *)(unaff_x19 + 0x28);
      func_0x00010882e9f0();
      FUN_108829b90();
      func_0x00010882e15c();
      pcStack_b8 = FUN_108829ae0;
      ppuStack_b0 = &PTR_FUN_110a78168;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_108829b90();
      func_0x00010882e080();
      func_0x00010882df0c(uStack_e0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x000108829abc(&puStack_140);
      func_0x00010882ee40();
      FUN_108829bb8(apcStack_1c8);
      func_0x000107c33948();
      ppcVar10 = (code **)&lStack_170;
      func_0x000108625e34(ppcVar10);
      func_0x000107c33784();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x000108829abc(&puStack_140);
        func_0x00010882ee40();
        FUN_108829bb8(apcStack_1c8);
        func_0x000107c33948();
        func_0x000108625e34(&lStack_170);
        func_0x00010882edf0();
        func_0x00010882ff54();
        func_0x000107c337b0();
        func_0x00010882fa64();
        if (ppcVar11 != (code **)0x0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_07 != 0);
        }
        func_0x000107c33ae0();
        uVar15 = *(undefined8 *)(unaff_x19 + 0x10);
        func_0x00010882f63c();
        uVar17 = (undefined1)param_5;
        uVar14 = (undefined1)uVar15;
        lStack_1a0 = uVar19;
        puStack_198 = ppcVar11;
        if (ppcVar11 != (code **)0x0) {
          do {
            func_0x000107c3383c();
            uVar17 = (undefined1)param_5;
            uVar14 = (undefined1)uVar15;
          } while (extraout_w10_08 != 0);
        }
        puStack_148 = &UNK_10f4bcef9;
        puVar12 = auStack_188;
        func_0x00010882f018();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_09)();
        func_0x000107c337e4();
        func_0x000107c338d4();
        func_0x000107c3396c();
        func_0x00010882f010();
        func_0x00010882e3f0();
        func_0x00010882eed0();
        func_0x00010882e78c();
        pcStack_d0 = FUN_108829c00;
        ppuStack_c8 = &PTR_FUN_110a78180;
        func_0x000107c33a44();
        func_0x00010882e8dc();
        func_0x000107c338ec();
        func_0x00010882ea00();
        func_0x000108829bdc(&puStack_140);
        func_0x00010882ee40();
        ppcVar10 = (code **)&lStack_1b0;
        FUN_108829cb8();
        func_0x000107c33a40();
        func_0x00010882f8b4();
        func_0x000107c337a8(uStack_70);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010882ea00();
          func_0x000108829bdc(&puStack_140);
          func_0x00010882ee40();
          FUN_108829cb8(&lStack_1b0);
          func_0x000107c33a40();
          func_0x00010882f8b4();
          func_0x00010882edf0();
          func_0x000107c33c58(FUN_108828644);
          apuStack_180[0] = &stack0xfffffffffffffff0;
          func_0x000107c337b0();
          pcVar18 = (code *)*param_8;
          pcVar1 = (code *)param_8[1];
          lStack_310 = (long)pcVar18;
          puStack_308 = pcVar1;
          uStack_1e0 = extraout_x8_10;
          if (pcVar1 != (code *)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_09 != 0);
          }
          lStack_328 = 0;
          lStack_320 = 0;
          lStack_318 = 0;
          func_0x000107c29cfc(&lStack_378,ppcVar10[1],ppcVar10[2]);
          puStack_360 = (undefined8 *)CONCAT71(puStack_360._1_7_,uVar14);
          uStack_348 = (undefined1)param_6;
          uStack_347 = (undefined7)((ulong)param_6 >> 8);
          uStack_340 = (undefined1)param_7;
          puStack_368 = puVar12;
          pcStack_358 = pcVar16;
          uStack_350 = uVar17;
          lStack_338 = (long)pcVar18;
          lStack_330 = (long)pcVar1;
          if (pcVar1 != (code *)0x0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_10 != 0);
          }
          puStack_2e8 = &UNK_10f4bcf15;
          plVar13 = &lStack_328;
          func_0x00010882f338();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_11)();
          func_0x000107c337f8();
          func_0x000107c33960();
          func_0x000107c3396c();
          func_0x000107c33a9c();
          func_0x00010882e55c();
          func_0x00010882f02c();
          lVar8 = lStack_318;
          lVar7 = lStack_320;
          lVar6 = lStack_328;
          lVar5 = lStack_330;
          lVar4 = lStack_338;
          lVar3 = lStack_370;
          lVar2 = lStack_378;
          pcVar18 = ppcVar10[5];
          lStack_2e0 = lStack_378;
          lStack_2d8 = lStack_370;
          lStack_370 = 0;
          lStack_378 = 0;
          lStack_2c8 = (long)puStack_360;
          puStack_2d0 = puStack_368;
          uStack_2b8 = uStack_350;
          pcStack_2c0 = pcStack_358;
          uStack_2af = CONCAT17(uStack_340,uStack_347);
          uStack_2b0 = uStack_348;
          lStack_2a0 = lStack_338;
          lStack_298 = lStack_330;
          lStack_338 = 0;
          lStack_330 = 0;
          pcStack_290 = (code *)0x0;
          uStack_280 = 1;
          lStack_278 = lStack_328;
          lStack_270 = lStack_320;
          lStack_328 = 0;
          lStack_320 = 0;
          lStack_318 = 0;
          lStack_268 = lVar8;
          lStack_258 = lStack_300;
          lStack_250 = lStack_2f8;
          lStack_248 = lStack_2f0;
          ppuStack_288 = (undefined **)param_7;
          plStack_260 = (long *)(ppcVar10 + 7);
          func_0x00010882f710();
          pcStack_240 = FUN_108829cfc;
          ppuStack_238 = &PTR_FUN_110a78198;
          func_0x000107c33a2c();
          *plVar13 = lVar2;
          plVar13[1] = lVar3;
          pcVar16 = pcStack_358;
          puVar12 = puStack_368;
          lStack_2e0 = 0;
          lStack_2d8 = 0;
          lVar2 = CONCAT71(uStack_34f,uStack_350);
          plVar13[3] = (long)puStack_360;
          plVar13[2] = (long)puVar12;
          plVar13[5] = lVar2;
          plVar13[4] = (long)pcVar16;
          uVar19 = CONCAT17(uStack_348,uStack_34f);
          *(ulong *)((long)plVar13 + 0x31) = CONCAT17(uStack_340,uStack_347);
          *(undefined8 *)((long)plVar13 + 0x29) = uVar19;
          plVar13[8] = lVar4;
          plVar13[9] = lVar5;
          pcVar16 = pcStack_290;
          lStack_2a0 = 0;
          lStack_298 = 0;
          lVar2 = CONCAT71(uStack_27f,uStack_280);
          plVar13[0xb] = (long)ppuStack_288;
          plVar13[10] = (long)pcVar16;
          plVar13[0xc] = lVar2;
          plVar13[0xd] = lVar6;
          plVar13[0xe] = lVar7;
          plVar13[0xf] = lVar8;
          lStack_278 = 0;
          lStack_270 = 0;
          lStack_268 = 0;
          plVar13[0x10] = (long)(ppcVar10 + 7);
          plVar13[0x11] = lStack_300;
          plVar13[0x12] = lStack_2f8;
          plVar13[0x13] = lStack_2f0;
          lStack_250 = 0;
          lStack_248 = 0;
          lStack_258 = 0;
          plStack_230 = plVar13;
          func_0x000107c339ac(pcVar18);
          func_0x00010882fc6c();
          func_0x00010882eb54();
          func_0x000108829cd8(&lStack_2e0);
          func_0x000107c33a04();
          FUN_108829dc0(&lStack_378);
          func_0x000107c280f8(&lStack_328);
          ppcVar10 = (code **)&lStack_310;
          func_0x000108625dec();
          func_0x000107c337a8(uStack_1e0);
          if ((bool)in_ZR) {
            return (undefined1 ***)ppcVar10;
          }
          ___stack_chk_fail();
          func_0x00010882eb54();
          func_0x000108829cd8(&lStack_2e0);
          func_0x000107c33a04();
          FUN_108829dc0(&lStack_378);
          func_0x000107c280f8(&lStack_328);
          func_0x000108625dec(&lStack_310);
          func_0x00010882edf0();
          pcVar16 = FUN_1088288b4;
          func_0x00010882ff54();
          ppuStack_1d0 = apuStack_180;
          apcStack_1c8[0] = pcVar16;
          func_0x000107c337b0();
          func_0x00010882fa64();
          if (lVar6 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_11 != 0);
          }
          func_0x000107c33ae0();
          func_0x00010882f63c();
          pcStack_358 = (code *)lVar6;
          puStack_360 = &lStack_2e0;
          if (lVar6 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_12 != 0);
          }
          puStack_308 = &UNK_10f4bcf38;
          func_0x00010882f018(&uStack_348);
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_12)();
          func_0x000107c337e4();
          func_0x000107c338d4();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e78c();
          pcStack_290 = FUN_108829e04;
          ppuStack_288 = &PTR_FUN_110a781b0;
          func_0x000107c33a44();
          func_0x00010882e8dc();
          func_0x000107c338ec();
          func_0x00010882ea00();
          func_0x000108829de0(&lStack_300);
          func_0x00010882ee40();
          FUN_108829ebc(&lStack_370);
          func_0x000107c33a40();
          ppcVar10 = (code **)&lStack_330;
          func_0x000108625e58();
          func_0x000107c337a8(plStack_230);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010882ea00();
            func_0x000108829de0(&lStack_300);
            func_0x00010882ee40();
            FUN_108829ebc(&lStack_370);
            func_0x000107c33a40();
            ppcVar10 = (code **)&lStack_330;
            func_0x000108625e58(ppcVar10);
            func_0x00010882edf0();
            func_0x00010882eb68(&PTR_DAT_110a77e80);
            func_0x000107c29344(ppcVar10 + 3);
            func_0x000107c29cf4(lVar6);
            return (undefined1 ***)ppcVar10;
          }
        }
        return (undefined1 ***)ppcVar10;
      }
    }
  }
  return (undefined1 ***)ppcVar10;
}



/* Entry: 1088280d4; end: 108828233;  */

long * FUN_1088280d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 in_ZR;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined1 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined1 uVar16;
  undefined8 in_x4;
  undefined8 in_x5;
  long in_x6;
  long *in_x7;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  undefined8 extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  long lVar17;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  long unaff_x19;
  undefined8 uVar18;
  code *in_stack_00000008;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined *in_stack_00000088;
  undefined8 in_stack_000000f0;
  code *in_stack_00000100;
  undefined **in_stack_00000108;
  code *in_stack_00000118;
  undefined **in_stack_00000120;
  undefined8 in_stack_00000160;
  undefined8 *in_stack_000001b0;
  undefined8 *in_stack_000001c0;
  code *in_stack_000001c8;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  undefined8 *puStack_190;
  code *pcStack_188;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  long lStack_f8;
  code *pcStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  long lStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  code *pcStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  undefined8 uStack_10;
  
  func_0x000107c33bfc();
  func_0x000107c3378c();
  func_0x00010882eda8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882eb94();
  func_0x00010882ed88();
  func_0x00010882eca4();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000088 = &UNK_10f4bcea8;
  func_0x00010882ebcc();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_01)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_108829950();
  func_0x00010882e15c();
  in_stack_00000118 = FUN_1088298a0;
  in_stack_00000120 = &PTR_FUN_110a78138;
  func_0x000107c339b8();
  func_0x00010882f2a0();
  FUN_108829950();
  func_0x00010882e080();
  func_0x00010882df0c(in_stack_000000f0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x00010882987c(&stack0x00000090);
  func_0x00010882ee40();
  plVar8 = (long *)&stack0x00000008;
  FUN_108829978(plVar8);
  func_0x000107c33948();
  func_0x00010882f8b4();
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x00010882987c(&stack0x00000090);
    func_0x00010882ee40();
    puVar9 = &stack0x00000008;
    FUN_108829978();
    func_0x000107c33948();
    func_0x00010882f8b4();
    func_0x00010882edf0();
    func_0x000107c33bfc();
    in_stack_000001b0 = &stack0x000001b0;
    func_0x000107c3378c();
    func_0x00010882eda8();
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010882ebd8();
    func_0x00010882eb94();
    func_0x00010882ed88();
    func_0x00010882eca4();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_02 != 0);
    }
    in_stack_00000088 = &UNK_10f4bceb9;
    func_0x00010882ebcc();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_04)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    func_0x00010882e9f0();
    FUN_108829a70();
    func_0x00010882e15c();
    in_stack_00000118 = FUN_1088299c0;
    in_stack_00000120 = &PTR_FUN_110a78150;
    func_0x000107c339b8();
    func_0x00010882f2a0();
    FUN_108829a70();
    func_0x00010882e080();
    func_0x00010882df0c(in_stack_000000f0);
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x00010882999c(&stack0x00000090);
    func_0x00010882ee40();
    FUN_108829a98(&stack0x00000008);
    func_0x000107c33948();
    plVar8 = (long *)&stack0x00000060;
    func_0x000108625e10(plVar8);
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x00010882999c(&stack0x00000090);
      func_0x00010882ee40();
      FUN_108829a98(&stack0x00000008);
      func_0x000107c33948();
      func_0x000108625e10(&stack0x00000060);
      func_0x00010882edf0();
      pcVar15 = FUN_10882839c;
      func_0x000107c33bfc();
      in_stack_000001b0 = &stack0x000001b0;
      func_0x000107c3378c();
      func_0x00010882eda8();
      if (extraout_x8_05 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_03 != 0);
      }
      func_0x00010882ebd8();
      func_0x00010882eb94();
      func_0x00010882ed88();
      func_0x00010882eca4();
      if (extraout_x8_06 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_04 != 0);
      }
      in_stack_00000088 = &UNK_10f4bcee0;
      func_0x00010882ebcc();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_07)();
      func_0x000107c33790();
      func_0x000107c33824();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      uVar18 = *(undefined8 *)(unaff_x19 + 0x28);
      func_0x00010882e9f0();
      FUN_108829b90();
      func_0x00010882e15c();
      in_stack_00000118 = FUN_108829ae0;
      in_stack_00000120 = &PTR_FUN_110a78168;
      func_0x000107c339b8();
      func_0x00010882f2a0();
      FUN_108829b90();
      func_0x00010882e080();
      func_0x00010882df0c(in_stack_000000f0);
      func_0x000107c33820();
      func_0x000107c337b4();
      func_0x000108829abc(&stack0x00000090);
      func_0x00010882ee40();
      FUN_108829bb8(&stack0x00000008);
      func_0x000107c33948();
      plVar8 = (long *)&stack0x00000060;
      func_0x000108625e34(plVar8);
      func_0x000107c33784();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882e104();
        func_0x000108829abc(&stack0x00000090);
        func_0x00010882ee40();
        FUN_108829bb8(&stack0x00000008);
        func_0x000107c33948();
        func_0x000108625e34(&stack0x00000060);
        func_0x00010882edf0();
        pcVar13 = FUN_108828504;
        func_0x00010882ff54();
        in_stack_000001c0 = &stack0x000001b0;
        in_stack_000001c8 = pcVar13;
        func_0x000107c337b0();
        func_0x00010882fa64();
        if (puVar9 != (undefined8 *)0x0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_05 != 0);
        }
        func_0x000107c33ae0();
        uVar14 = *(undefined8 *)(unaff_x19 + 0x10);
        func_0x00010882f63c();
        uVar16 = (undefined1)in_x4;
        uVar12 = (undefined1)uVar14;
        in_stack_00000030 = uVar18;
        in_stack_00000038 = puVar9;
        if (puVar9 != (undefined8 *)0x0) {
          do {
            func_0x000107c3383c();
            uVar16 = (undefined1)in_x4;
            uVar12 = (undefined1)uVar14;
          } while (extraout_w10_06 != 0);
        }
        in_stack_00000088 = &UNK_10f4bcef9;
        puVar10 = &stack0x00000048;
        func_0x00010882f018();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_08)();
        func_0x000107c337e4();
        func_0x000107c338d4();
        func_0x000107c3396c();
        func_0x00010882f010();
        func_0x00010882e3f0();
        func_0x00010882eed0();
        func_0x00010882e78c();
        in_stack_00000100 = FUN_108829c00;
        in_stack_00000108 = &PTR_FUN_110a78180;
        func_0x000107c33a44();
        func_0x00010882e8dc();
        func_0x000107c338ec();
        func_0x00010882ea00();
        func_0x000108829bdc(&stack0x00000090);
        func_0x00010882ee40();
        plVar8 = (long *)&stack0x00000020;
        FUN_108829cb8();
        func_0x000107c33a40();
        func_0x00010882f8b4();
        func_0x000107c337a8(in_stack_00000160);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010882ea00();
          func_0x000108829bdc(&stack0x00000090);
          func_0x00010882ee40();
          FUN_108829cb8(&stack0x00000020);
          func_0x000107c33a40();
          func_0x00010882f8b4();
          func_0x00010882edf0();
          func_0x000107c33c58(FUN_108828644);
          in_stack_00000050 = &stack0x000001c0;
          func_0x000107c337b0();
          lVar1 = *in_x7;
          lVar2 = in_x7[1];
          lStack_140 = lVar1;
          puStack_138 = (undefined *)lVar2;
          uStack_10 = extraout_x8_09;
          if (lVar2 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_07 != 0);
          }
          lStack_158 = 0;
          lStack_150 = 0;
          lStack_148 = 0;
          func_0x000107c29cfc(&lStack_1a8,plVar8[1],plVar8[2]);
          puStack_190 = (undefined8 *)CONCAT71(puStack_190._1_7_,uVar12);
          uStack_178 = (undefined1)in_x5;
          uStack_177 = (undefined7)((ulong)in_x5 >> 8);
          uStack_170 = (undefined1)in_x6;
          puStack_198 = puVar10;
          pcStack_188 = pcVar15;
          uStack_180 = uVar16;
          lStack_168 = lVar1;
          lStack_160 = lVar2;
          if (lVar2 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_08 != 0);
          }
          puStack_118 = &UNK_10f4bcf15;
          plVar11 = &lStack_158;
          func_0x00010882f338();
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_10)();
          func_0x000107c337f8();
          func_0x000107c33960();
          func_0x000107c3396c();
          func_0x000107c33a9c();
          func_0x00010882e55c();
          func_0x00010882f02c();
          lVar7 = lStack_148;
          lVar6 = lStack_150;
          lVar5 = lStack_158;
          lVar4 = lStack_160;
          lVar3 = lStack_168;
          lVar2 = lStack_1a0;
          lVar1 = lStack_1a8;
          lVar17 = plVar8[5];
          lStack_110 = lStack_1a8;
          lStack_108 = lStack_1a0;
          lStack_1a0 = 0;
          lStack_1a8 = 0;
          lStack_f8 = (long)puStack_190;
          puStack_100 = puStack_198;
          uStack_e8 = uStack_180;
          pcStack_f0 = pcStack_188;
          uStack_df = CONCAT17(uStack_170,uStack_177);
          uStack_e0 = uStack_178;
          lStack_d0 = lStack_168;
          lStack_c8 = lStack_160;
          lStack_168 = 0;
          lStack_160 = 0;
          pcStack_c0 = (code *)0x0;
          uStack_b0 = 1;
          lStack_a8 = lStack_158;
          lStack_a0 = lStack_150;
          lStack_158 = 0;
          lStack_150 = 0;
          lStack_148 = 0;
          lStack_98 = lVar7;
          lStack_88 = lStack_130;
          lStack_80 = lStack_128;
          lStack_78 = lStack_120;
          ppuStack_b8 = (undefined **)in_x6;
          plStack_90 = plVar8 + 7;
          func_0x00010882f710();
          pcStack_70 = FUN_108829cfc;
          ppuStack_68 = &PTR_FUN_110a78198;
          func_0x000107c33a2c();
          *plVar11 = lVar1;
          plVar11[1] = lVar2;
          pcVar15 = pcStack_188;
          puVar10 = puStack_198;
          lStack_110 = 0;
          lStack_108 = 0;
          lVar1 = CONCAT71(uStack_17f,uStack_180);
          plVar11[3] = (long)puStack_190;
          plVar11[2] = (long)puVar10;
          plVar11[5] = lVar1;
          plVar11[4] = (long)pcVar15;
          uVar18 = CONCAT17(uStack_178,uStack_17f);
          *(ulong *)((long)plVar11 + 0x31) = CONCAT17(uStack_170,uStack_177);
          *(undefined8 *)((long)plVar11 + 0x29) = uVar18;
          plVar11[8] = lVar3;
          plVar11[9] = lVar4;
          pcVar15 = pcStack_c0;
          lStack_d0 = 0;
          lStack_c8 = 0;
          lVar1 = CONCAT71(uStack_af,uStack_b0);
          plVar11[0xb] = (long)ppuStack_b8;
          plVar11[10] = (long)pcVar15;
          plVar11[0xc] = lVar1;
          plVar11[0xd] = lVar5;
          plVar11[0xe] = lVar6;
          plVar11[0xf] = lVar7;
          lStack_a8 = 0;
          lStack_a0 = 0;
          lStack_98 = 0;
          plVar11[0x10] = (long)(plVar8 + 7);
          plVar11[0x11] = lStack_130;
          plVar11[0x12] = lStack_128;
          plVar11[0x13] = lStack_120;
          lStack_80 = 0;
          lStack_78 = 0;
          lStack_88 = 0;
          plStack_60 = plVar11;
          func_0x000107c339ac(lVar17);
          func_0x00010882fc6c();
          func_0x00010882eb54();
          func_0x000108829cd8(&lStack_110);
          func_0x000107c33a04();
          FUN_108829dc0(&lStack_1a8);
          func_0x000107c280f8(&lStack_158);
          plVar8 = &lStack_140;
          func_0x000108625dec();
          func_0x000107c337a8(uStack_10);
          if ((bool)in_ZR) {
            return plVar8;
          }
          ___stack_chk_fail();
          func_0x00010882eb54();
          func_0x000108829cd8(&lStack_110);
          func_0x000107c33a04();
          FUN_108829dc0(&lStack_1a8);
          func_0x000107c280f8(&lStack_158);
          func_0x000108625dec(&lStack_140);
          func_0x00010882edf0();
          pcVar15 = FUN_1088288b4;
          func_0x00010882ff54();
          in_stack_00000008 = pcVar15;
          func_0x000107c337b0();
          func_0x00010882fa64();
          if (lVar5 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_09 != 0);
          }
          func_0x000107c33ae0();
          func_0x00010882f63c();
          pcStack_188 = (code *)lVar5;
          puStack_190 = &lStack_110;
          if (lVar5 != 0) {
            do {
              func_0x000107c3383c();
            } while (extraout_w10_10 != 0);
          }
          puStack_138 = &UNK_10f4bcf38;
          func_0x00010882f018(&uStack_178);
          func_0x000107c28258();
          func_0x000107c3379c();
          (*extraout_x8_11)();
          func_0x000107c337e4();
          func_0x000107c338d4();
          func_0x000107c3396c();
          func_0x00010882f010();
          func_0x00010882e3f0();
          func_0x00010882eed0();
          func_0x00010882e78c();
          pcStack_c0 = FUN_108829e04;
          ppuStack_b8 = &PTR_FUN_110a781b0;
          func_0x000107c33a44();
          func_0x00010882e8dc();
          func_0x000107c338ec();
          func_0x00010882ea00();
          func_0x000108829de0(&lStack_130);
          func_0x00010882ee40();
          FUN_108829ebc(&lStack_1a0);
          func_0x000107c33a40();
          plVar8 = &lStack_160;
          func_0x000108625e58();
          func_0x000107c337a8(plStack_60);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x00010882ea00();
            func_0x000108829de0(&lStack_130);
            func_0x00010882ee40();
            FUN_108829ebc(&lStack_1a0);
            func_0x000107c33a40();
            plVar8 = &lStack_160;
            func_0x000108625e58(plVar8);
            func_0x00010882edf0();
            func_0x00010882eb68(&PTR_DAT_110a77e80);
            func_0x000107c29344(plVar8 + 3);
            func_0x000107c29cf4(lVar5);
            return plVar8;
          }
        }
        return plVar8;
      }
    }
  }
  return plVar8;
}



/* Entry: 108828234; end: 10882839b;  */

long * FUN_108828234(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 in_ZR;
  long *plVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined1 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined1 uVar15;
  undefined8 in_x4;
  undefined8 in_x5;
  long in_x6;
  long *in_x7;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  undefined8 extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  long lVar16;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  long unaff_x19;
  undefined8 uVar17;
  code *in_stack_00000008;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined *in_stack_00000088;
  undefined8 in_stack_000000f0;
  code *in_stack_00000100;
  undefined **in_stack_00000108;
  code *in_stack_00000118;
  undefined **in_stack_00000120;
  undefined8 in_stack_00000160;
  undefined8 *in_stack_000001b0;
  undefined8 *in_stack_000001c0;
  code *in_stack_000001c8;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  undefined8 *puStack_190;
  code *pcStack_188;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  long lStack_f8;
  code *pcStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  long lStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  code *pcStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  undefined8 uStack_10;
  
  func_0x000107c33bfc();
  func_0x000107c3378c();
  func_0x00010882eda8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882eb94();
  func_0x00010882ed88();
  func_0x00010882eca4();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000088 = &UNK_10f4bceb9;
  func_0x00010882ebcc();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_01)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e9f0();
  FUN_108829a70();
  func_0x00010882e15c();
  in_stack_00000118 = FUN_1088299c0;
  in_stack_00000120 = &PTR_FUN_110a78150;
  func_0x000107c339b8();
  func_0x00010882f2a0();
  FUN_108829a70();
  func_0x00010882e080();
  func_0x00010882df0c(in_stack_000000f0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x00010882999c(&stack0x00000090);
  func_0x00010882ee40();
  FUN_108829a98(&stack0x00000008);
  func_0x000107c33948();
  plVar8 = (long *)&stack0x00000060;
  func_0x000108625e10(plVar8);
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x00010882999c(&stack0x00000090);
    func_0x00010882ee40();
    FUN_108829a98(&stack0x00000008);
    func_0x000107c33948();
    func_0x000108625e10(&stack0x00000060);
    func_0x00010882edf0();
    pcVar14 = FUN_10882839c;
    func_0x000107c33bfc();
    in_stack_000001b0 = &stack0x000001b0;
    func_0x000107c3378c();
    func_0x00010882eda8();
    if (extraout_x8_02 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010882ebd8();
    func_0x00010882eb94();
    func_0x00010882ed88();
    func_0x00010882eca4();
    if (extraout_x8_03 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_02 != 0);
    }
    in_stack_00000088 = &UNK_10f4bcee0;
    func_0x00010882ebcc();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_04)();
    func_0x000107c33790();
    func_0x000107c33824();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    uVar17 = *(undefined8 *)(unaff_x19 + 0x28);
    func_0x00010882e9f0();
    FUN_108829b90();
    func_0x00010882e15c();
    in_stack_00000118 = FUN_108829ae0;
    in_stack_00000120 = &PTR_FUN_110a78168;
    func_0x000107c339b8();
    func_0x00010882f2a0();
    FUN_108829b90();
    func_0x00010882e080();
    func_0x00010882df0c(in_stack_000000f0);
    func_0x000107c33820();
    func_0x000107c337b4();
    func_0x000108829abc(&stack0x00000090);
    func_0x00010882ee40();
    FUN_108829bb8(&stack0x00000008);
    func_0x000107c33948();
    plVar8 = (long *)&stack0x00000060;
    func_0x000108625e34(plVar8);
    func_0x000107c33784();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882e104();
      func_0x000108829abc(&stack0x00000090);
      func_0x00010882ee40();
      FUN_108829bb8(&stack0x00000008);
      func_0x000107c33948();
      func_0x000108625e34(&stack0x00000060);
      func_0x00010882edf0();
      pcVar12 = FUN_108828504;
      func_0x00010882ff54();
      in_stack_000001c0 = &stack0x000001b0;
      in_stack_000001c8 = pcVar12;
      func_0x000107c337b0();
      func_0x00010882fa64();
      if (param_1 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_03 != 0);
      }
      func_0x000107c33ae0();
      uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
      func_0x00010882f63c();
      uVar15 = (undefined1)in_x4;
      uVar11 = (undefined1)uVar13;
      in_stack_00000030 = uVar17;
      in_stack_00000038 = param_1;
      if (param_1 != 0) {
        do {
          func_0x000107c3383c();
          uVar15 = (undefined1)in_x4;
          uVar11 = (undefined1)uVar13;
        } while (extraout_w10_04 != 0);
      }
      in_stack_00000088 = &UNK_10f4bcef9;
      puVar9 = &stack0x00000048;
      func_0x00010882f018();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_05)();
      func_0x000107c337e4();
      func_0x000107c338d4();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e78c();
      in_stack_00000100 = FUN_108829c00;
      in_stack_00000108 = &PTR_FUN_110a78180;
      func_0x000107c33a44();
      func_0x00010882e8dc();
      func_0x000107c338ec();
      func_0x00010882ea00();
      func_0x000108829bdc(&stack0x00000090);
      func_0x00010882ee40();
      plVar8 = (long *)&stack0x00000020;
      FUN_108829cb8();
      func_0x000107c33a40();
      func_0x00010882f8b4();
      func_0x000107c337a8(in_stack_00000160);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882ea00();
        func_0x000108829bdc(&stack0x00000090);
        func_0x00010882ee40();
        FUN_108829cb8(&stack0x00000020);
        func_0x000107c33a40();
        func_0x00010882f8b4();
        func_0x00010882edf0();
        func_0x000107c33c58(FUN_108828644);
        in_stack_00000050 = &stack0x000001c0;
        func_0x000107c337b0();
        lVar1 = *in_x7;
        lVar2 = in_x7[1];
        lStack_140 = lVar1;
        puStack_138 = (undefined *)lVar2;
        uStack_10 = extraout_x8_06;
        if (lVar2 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_05 != 0);
        }
        lStack_158 = 0;
        lStack_150 = 0;
        lStack_148 = 0;
        func_0x000107c29cfc(&lStack_1a8,plVar8[1],plVar8[2]);
        puStack_190 = (undefined8 *)CONCAT71(puStack_190._1_7_,uVar11);
        uStack_178 = (undefined1)in_x5;
        uStack_177 = (undefined7)((ulong)in_x5 >> 8);
        uStack_170 = (undefined1)in_x6;
        puStack_198 = puVar9;
        pcStack_188 = pcVar14;
        uStack_180 = uVar15;
        lStack_168 = lVar1;
        lStack_160 = lVar2;
        if (lVar2 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_06 != 0);
        }
        puStack_118 = &UNK_10f4bcf15;
        plVar10 = &lStack_158;
        func_0x00010882f338();
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_07)();
        func_0x000107c337f8();
        func_0x000107c33960();
        func_0x000107c3396c();
        func_0x000107c33a9c();
        func_0x00010882e55c();
        func_0x00010882f02c();
        lVar7 = lStack_148;
        lVar6 = lStack_150;
        lVar5 = lStack_158;
        lVar4 = lStack_160;
        lVar3 = lStack_168;
        lVar2 = lStack_1a0;
        lVar1 = lStack_1a8;
        lVar16 = plVar8[5];
        lStack_110 = lStack_1a8;
        lStack_108 = lStack_1a0;
        lStack_1a0 = 0;
        lStack_1a8 = 0;
        lStack_f8 = (long)puStack_190;
        puStack_100 = puStack_198;
        uStack_e8 = uStack_180;
        pcStack_f0 = pcStack_188;
        uStack_df = CONCAT17(uStack_170,uStack_177);
        uStack_e0 = uStack_178;
        lStack_d0 = lStack_168;
        lStack_c8 = lStack_160;
        lStack_168 = 0;
        lStack_160 = 0;
        pcStack_c0 = (code *)0x0;
        uStack_b0 = 1;
        lStack_a8 = lStack_158;
        lStack_a0 = lStack_150;
        lStack_158 = 0;
        lStack_150 = 0;
        lStack_148 = 0;
        lStack_98 = lVar7;
        lStack_88 = lStack_130;
        lStack_80 = lStack_128;
        lStack_78 = lStack_120;
        ppuStack_b8 = (undefined **)in_x6;
        plStack_90 = plVar8 + 7;
        func_0x00010882f710();
        pcStack_70 = FUN_108829cfc;
        ppuStack_68 = &PTR_FUN_110a78198;
        func_0x000107c33a2c();
        *plVar10 = lVar1;
        plVar10[1] = lVar2;
        pcVar14 = pcStack_188;
        puVar9 = puStack_198;
        lStack_110 = 0;
        lStack_108 = 0;
        lVar1 = CONCAT71(uStack_17f,uStack_180);
        plVar10[3] = (long)puStack_190;
        plVar10[2] = (long)puVar9;
        plVar10[5] = lVar1;
        plVar10[4] = (long)pcVar14;
        uVar17 = CONCAT17(uStack_178,uStack_17f);
        *(ulong *)((long)plVar10 + 0x31) = CONCAT17(uStack_170,uStack_177);
        *(undefined8 *)((long)plVar10 + 0x29) = uVar17;
        plVar10[8] = lVar3;
        plVar10[9] = lVar4;
        pcVar14 = pcStack_c0;
        lStack_d0 = 0;
        lStack_c8 = 0;
        lVar1 = CONCAT71(uStack_af,uStack_b0);
        plVar10[0xb] = (long)ppuStack_b8;
        plVar10[10] = (long)pcVar14;
        plVar10[0xc] = lVar1;
        plVar10[0xd] = lVar5;
        plVar10[0xe] = lVar6;
        plVar10[0xf] = lVar7;
        lStack_a8 = 0;
        lStack_a0 = 0;
        lStack_98 = 0;
        plVar10[0x10] = (long)(plVar8 + 7);
        plVar10[0x11] = lStack_130;
        plVar10[0x12] = lStack_128;
        plVar10[0x13] = lStack_120;
        lStack_80 = 0;
        lStack_78 = 0;
        lStack_88 = 0;
        plStack_60 = plVar10;
        func_0x000107c339ac(lVar16);
        func_0x00010882fc6c();
        func_0x00010882eb54();
        func_0x000108829cd8(&lStack_110);
        func_0x000107c33a04();
        FUN_108829dc0(&lStack_1a8);
        func_0x000107c280f8(&lStack_158);
        plVar8 = &lStack_140;
        func_0x000108625dec();
        func_0x000107c337a8(uStack_10);
        if ((bool)in_ZR) {
          return plVar8;
        }
        ___stack_chk_fail();
        func_0x00010882eb54();
        func_0x000108829cd8(&lStack_110);
        func_0x000107c33a04();
        FUN_108829dc0(&lStack_1a8);
        func_0x000107c280f8(&lStack_158);
        func_0x000108625dec(&lStack_140);
        func_0x00010882edf0();
        pcVar14 = FUN_1088288b4;
        func_0x00010882ff54();
        in_stack_00000008 = pcVar14;
        func_0x000107c337b0();
        func_0x00010882fa64();
        if (lVar5 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_07 != 0);
        }
        func_0x000107c33ae0();
        func_0x00010882f63c();
        pcStack_188 = (code *)lVar5;
        puStack_190 = &lStack_110;
        if (lVar5 != 0) {
          do {
            func_0x000107c3383c();
          } while (extraout_w10_08 != 0);
        }
        puStack_138 = &UNK_10f4bcf38;
        func_0x00010882f018(&uStack_178);
        func_0x000107c28258();
        func_0x000107c3379c();
        (*extraout_x8_08)();
        func_0x000107c337e4();
        func_0x000107c338d4();
        func_0x000107c3396c();
        func_0x00010882f010();
        func_0x00010882e3f0();
        func_0x00010882eed0();
        func_0x00010882e78c();
        pcStack_c0 = FUN_108829e04;
        ppuStack_b8 = &PTR_FUN_110a781b0;
        func_0x000107c33a44();
        func_0x00010882e8dc();
        func_0x000107c338ec();
        func_0x00010882ea00();
        func_0x000108829de0(&lStack_130);
        func_0x00010882ee40();
        FUN_108829ebc(&lStack_1a0);
        func_0x000107c33a40();
        plVar8 = &lStack_160;
        func_0x000108625e58();
        func_0x000107c337a8(plStack_60);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x00010882ea00();
          func_0x000108829de0(&lStack_130);
          func_0x00010882ee40();
          FUN_108829ebc(&lStack_1a0);
          func_0x000107c33a40();
          plVar8 = &lStack_160;
          func_0x000108625e58(plVar8);
          func_0x00010882edf0();
          func_0x00010882eb68(&PTR_DAT_110a77e80);
          func_0x000107c29344(plVar8 + 3);
          func_0x000107c29cf4(lVar5);
          return plVar8;
        }
      }
      return plVar8;
    }
  }
  return plVar8;
}



/* Entry: 10882839c; end: 108828503;  */

long * FUN_10882839c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,long param_7,long *param_8,
                    undefined4 param_9,undefined4 param_10,code *param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 in_ZR;
  long *plVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined1 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long lVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  long unaff_x19;
  undefined8 uVar16;
  long unaff_x30;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined *in_stack_00000088;
  undefined8 in_stack_000000f0;
  code *in_stack_00000100;
  undefined **in_stack_00000108;
  code *in_stack_00000118;
  undefined **in_stack_00000120;
  undefined8 in_stack_00000160;
  undefined8 in_stack_000001b0;
  undefined8 *in_stack_000001c0;
  code *in_stack_000001c8;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  long *plStack_190;
  long lStack_188;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  long lStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  code *pcStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  undefined8 uStack_10;
  
  func_0x000107c33bfc();
  func_0x000107c3378c();
  func_0x00010882eda8();
  if (extraout_x8 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x00010882ebd8();
  func_0x00010882eb94();
  func_0x00010882ed88();
  func_0x00010882eca4();
  if (extraout_x8_00 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000088 = &UNK_10f4bcee0;
  func_0x00010882ebcc();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_01)();
  func_0x000107c33790();
  func_0x000107c33824();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  uVar16 = *(undefined8 *)(unaff_x19 + 0x28);
  func_0x00010882e9f0();
  FUN_108829b90();
  func_0x00010882e15c();
  in_stack_00000118 = FUN_108829ae0;
  in_stack_00000120 = &PTR_FUN_110a78168;
  func_0x000107c339b8();
  func_0x00010882f2a0();
  FUN_108829b90();
  func_0x00010882e080();
  func_0x00010882df0c(in_stack_000000f0);
  func_0x000107c33820();
  func_0x000107c337b4();
  func_0x000108829abc(&stack0x00000090);
  func_0x00010882ee40();
  FUN_108829bb8(&param_11);
  func_0x000107c33948();
  plVar8 = (long *)&stack0x00000060;
  func_0x000108625e34(plVar8);
  func_0x000107c33784();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882e104();
    func_0x000108829abc(&stack0x00000090);
    func_0x00010882ee40();
    FUN_108829bb8(&param_11);
    func_0x000107c33948();
    func_0x000108625e34(&stack0x00000060);
    func_0x00010882edf0();
    pcVar12 = FUN_108828504;
    func_0x00010882ff54();
    in_stack_000001c0 = &stack0x000001b0;
    in_stack_000001c8 = pcVar12;
    func_0x000107c337b0();
    func_0x00010882fa64();
    if (param_2 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c33ae0();
    uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
    func_0x00010882f63c();
    uVar14 = (undefined1)param_5;
    uVar11 = (undefined1)uVar13;
    in_stack_00000030 = uVar16;
    in_stack_00000038 = param_2;
    if (param_2 != 0) {
      do {
        func_0x000107c3383c();
        uVar14 = (undefined1)param_5;
        uVar11 = (undefined1)uVar13;
      } while (extraout_w10_02 != 0);
    }
    in_stack_00000088 = &UNK_10f4bcef9;
    puVar9 = &stack0x00000048;
    func_0x00010882f018();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_02)();
    func_0x000107c337e4();
    func_0x000107c338d4();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    func_0x00010882e78c();
    in_stack_00000100 = FUN_108829c00;
    in_stack_00000108 = &PTR_FUN_110a78180;
    func_0x000107c33a44();
    func_0x00010882e8dc();
    func_0x000107c338ec();
    func_0x00010882ea00();
    func_0x000108829bdc(&stack0x00000090);
    func_0x00010882ee40();
    plVar8 = (long *)&stack0x00000020;
    FUN_108829cb8();
    func_0x000107c33a40();
    func_0x00010882f8b4();
    func_0x000107c337a8(in_stack_00000160);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882ea00();
      func_0x000108829bdc(&stack0x00000090);
      func_0x00010882ee40();
      FUN_108829cb8(&stack0x00000020);
      func_0x000107c33a40();
      func_0x00010882f8b4();
      func_0x00010882edf0();
      func_0x000107c33c58(FUN_108828644);
      in_stack_00000050 = &stack0x000001c0;
      func_0x000107c337b0();
      lVar1 = *param_8;
      lVar2 = param_8[1];
      lStack_140 = lVar1;
      puStack_138 = (undefined *)lVar2;
      uStack_10 = extraout_x8_03;
      if (lVar2 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_03 != 0);
      }
      lStack_158 = 0;
      lStack_150 = 0;
      lStack_148 = 0;
      func_0x000107c29cfc(&lStack_1a8,plVar8[1],plVar8[2]);
      plStack_190 = (long *)CONCAT71(plStack_190._1_7_,uVar11);
      uStack_178 = (undefined1)param_6;
      uStack_177 = (undefined7)((ulong)param_6 >> 8);
      uStack_170 = (undefined1)param_7;
      puStack_198 = puVar9;
      lStack_188 = unaff_x30;
      uStack_180 = uVar14;
      lStack_168 = lVar1;
      lStack_160 = lVar2;
      if (lVar2 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_04 != 0);
      }
      puStack_118 = &UNK_10f4bcf15;
      plVar10 = &lStack_158;
      func_0x00010882f338();
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_04)();
      func_0x000107c337f8();
      func_0x000107c33960();
      func_0x000107c3396c();
      func_0x000107c33a9c();
      func_0x00010882e55c();
      func_0x00010882f02c();
      lVar7 = lStack_148;
      lVar6 = lStack_150;
      lVar5 = lStack_158;
      lVar4 = lStack_160;
      lVar3 = lStack_168;
      lVar2 = lStack_1a0;
      lVar1 = lStack_1a8;
      lVar15 = plVar8[5];
      lStack_110 = lStack_1a8;
      lStack_108 = lStack_1a0;
      lStack_1a0 = 0;
      lStack_1a8 = 0;
      lStack_f8 = (long)plStack_190;
      puStack_100 = puStack_198;
      uStack_e8 = uStack_180;
      lStack_f0 = lStack_188;
      uStack_df = CONCAT17(uStack_170,uStack_177);
      uStack_e0 = uStack_178;
      lStack_d0 = lStack_168;
      lStack_c8 = lStack_160;
      lStack_168 = 0;
      lStack_160 = 0;
      pcStack_c0 = (code *)0x0;
      uStack_b0 = 1;
      lStack_a8 = lStack_158;
      lStack_a0 = lStack_150;
      lStack_158 = 0;
      lStack_150 = 0;
      lStack_148 = 0;
      lStack_98 = lVar7;
      lStack_88 = lStack_130;
      lStack_80 = lStack_128;
      lStack_78 = lStack_120;
      ppuStack_b8 = (undefined **)param_7;
      plStack_90 = plVar8 + 7;
      func_0x00010882f710();
      pcStack_70 = FUN_108829cfc;
      ppuStack_68 = &PTR_FUN_110a78198;
      func_0x000107c33a2c();
      *plVar10 = lVar1;
      plVar10[1] = lVar2;
      puVar9 = puStack_198;
      lStack_110 = 0;
      lStack_108 = 0;
      lVar1 = CONCAT71(uStack_17f,uStack_180);
      plVar10[3] = (long)plStack_190;
      plVar10[2] = (long)puVar9;
      plVar10[5] = lVar1;
      plVar10[4] = lStack_188;
      uVar16 = CONCAT17(uStack_178,uStack_17f);
      *(ulong *)((long)plVar10 + 0x31) = CONCAT17(uStack_170,uStack_177);
      *(undefined8 *)((long)plVar10 + 0x29) = uVar16;
      plVar10[8] = lVar3;
      plVar10[9] = lVar4;
      pcVar12 = pcStack_c0;
      lStack_d0 = 0;
      lStack_c8 = 0;
      lVar1 = CONCAT71(uStack_af,uStack_b0);
      plVar10[0xb] = (long)ppuStack_b8;
      plVar10[10] = (long)pcVar12;
      plVar10[0xc] = lVar1;
      plVar10[0xd] = lVar5;
      plVar10[0xe] = lVar6;
      plVar10[0xf] = lVar7;
      lStack_a8 = 0;
      lStack_a0 = 0;
      lStack_98 = 0;
      plVar10[0x10] = (long)(plVar8 + 7);
      plVar10[0x11] = lStack_130;
      plVar10[0x12] = lStack_128;
      plVar10[0x13] = lStack_120;
      lStack_80 = 0;
      lStack_78 = 0;
      lStack_88 = 0;
      plStack_60 = plVar10;
      func_0x000107c339ac(lVar15);
      func_0x00010882fc6c();
      func_0x00010882eb54();
      func_0x000108829cd8(&lStack_110);
      func_0x000107c33a04();
      FUN_108829dc0(&lStack_1a8);
      func_0x000107c280f8(&lStack_158);
      plVar8 = &lStack_140;
      func_0x000108625dec();
      func_0x000107c337a8(uStack_10);
      if ((bool)in_ZR) {
        return plVar8;
      }
      ___stack_chk_fail();
      func_0x00010882eb54();
      func_0x000108829cd8(&lStack_110);
      func_0x000107c33a04();
      FUN_108829dc0(&lStack_1a8);
      func_0x000107c280f8(&lStack_158);
      func_0x000108625dec(&lStack_140);
      func_0x00010882edf0();
      pcVar12 = FUN_1088288b4;
      func_0x00010882ff54();
      param_11 = pcVar12;
      func_0x000107c337b0();
      func_0x00010882fa64();
      if (lVar5 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_05 != 0);
      }
      func_0x000107c33ae0();
      func_0x00010882f63c();
      lStack_188 = lVar5;
      plStack_190 = &lStack_110;
      if (lVar5 != 0) {
        do {
          func_0x000107c3383c();
        } while (extraout_w10_06 != 0);
      }
      puStack_138 = &UNK_10f4bcf38;
      func_0x00010882f018(&uStack_178);
      func_0x000107c28258();
      func_0x000107c3379c();
      (*extraout_x8_05)();
      func_0x000107c337e4();
      func_0x000107c338d4();
      func_0x000107c3396c();
      func_0x00010882f010();
      func_0x00010882e3f0();
      func_0x00010882eed0();
      func_0x00010882e78c();
      pcStack_c0 = FUN_108829e04;
      ppuStack_b8 = &PTR_FUN_110a781b0;
      func_0x000107c33a44();
      func_0x00010882e8dc();
      func_0x000107c338ec();
      func_0x00010882ea00();
      func_0x000108829de0(&lStack_130);
      func_0x00010882ee40();
      FUN_108829ebc(&lStack_1a0);
      func_0x000107c33a40();
      plVar8 = &lStack_160;
      func_0x000108625e58();
      func_0x000107c337a8(plStack_60);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00010882ea00();
        func_0x000108829de0(&lStack_130);
        func_0x00010882ee40();
        FUN_108829ebc(&lStack_1a0);
        func_0x000107c33a40();
        plVar8 = &lStack_160;
        func_0x000108625e58(plVar8);
        func_0x00010882edf0();
        func_0x00010882eb68(&PTR_DAT_110a77e80);
        func_0x000107c29344(plVar8 + 3);
        func_0x000107c29cf4(lVar5);
        return plVar8;
      }
    }
    return plVar8;
  }
  return plVar8;
}



/* Entry: 108828504; end: 108828643;  */

long * FUN_108828504(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 in_ZR;
  undefined1 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  long in_x3;
  undefined1 uVar14;
  undefined8 in_x4;
  undefined8 in_x5;
  long in_x6;
  long *in_x7;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long lVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x19;
  long unaff_x20;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined *in_stack_00000088;
  code *in_stack_00000100;
  undefined **in_stack_00000108;
  undefined8 in_stack_00000160;
  undefined8 in_stack_000001c0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  long lStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  code *pcStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  undefined8 uStack_10;
  
  func_0x00010882ff54();
  func_0x000107c337b0();
  func_0x00010882fa64();
  if (unaff_x20 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c33ae0();
  uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
  func_0x00010882f63c();
  uVar14 = (undefined1)in_x4;
  uVar12 = (undefined1)uVar13;
  if (unaff_x20 != 0) {
    do {
      func_0x000107c3383c();
      uVar14 = (undefined1)in_x4;
      uVar12 = (undefined1)uVar13;
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000088 = &UNK_10f4bcef9;
  puVar9 = &stack0x00000048;
  func_0x00010882f018();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8)();
  func_0x000107c337e4();
  func_0x000107c338d4();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e78c();
  in_stack_00000100 = FUN_108829c00;
  in_stack_00000108 = &PTR_FUN_110a78180;
  func_0x000107c33a44();
  func_0x00010882e8dc();
  func_0x000107c338ec();
  func_0x00010882ea00();
  func_0x000108829bdc(&stack0x00000090);
  func_0x00010882ee40();
  plVar10 = (long *)&stack0x00000020;
  FUN_108829cb8();
  func_0x000107c33a40();
  func_0x00010882f8b4();
  func_0x000107c337a8(in_stack_00000160);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882ea00();
    func_0x000108829bdc(&stack0x00000090);
    func_0x00010882ee40();
    FUN_108829cb8(&stack0x00000020);
    func_0x000107c33a40();
    func_0x00010882f8b4();
    func_0x00010882edf0();
    func_0x000107c33c58(FUN_108828644);
    in_stack_00000050 = &stack0x000001c0;
    func_0x000107c337b0();
    lVar1 = *in_x7;
    lVar2 = in_x7[1];
    lStack_140 = lVar1;
    puStack_138 = (undefined *)lVar2;
    uStack_10 = extraout_x8_00;
    if (lVar2 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    func_0x000107c29cfc(&lStack_1a8,plVar10[1],plVar10[2]);
    puStack_190 = (undefined8 *)CONCAT71(puStack_190._1_7_,uVar12);
    uStack_178 = (undefined1)in_x5;
    uStack_177 = (undefined7)((ulong)in_x5 >> 8);
    uStack_170 = (undefined1)in_x6;
    puStack_198 = puVar9;
    lStack_188 = in_x3;
    uStack_180 = uVar14;
    lStack_168 = lVar1;
    lStack_160 = lVar2;
    if (lVar2 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_02 != 0);
    }
    puStack_118 = &UNK_10f4bcf15;
    plVar11 = &lStack_158;
    func_0x00010882f338();
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_01)();
    func_0x000107c337f8();
    func_0x000107c33960();
    func_0x000107c3396c();
    func_0x000107c33a9c();
    func_0x00010882e55c();
    func_0x00010882f02c();
    lVar7 = lStack_148;
    lVar6 = lStack_150;
    lVar5 = lStack_158;
    lVar4 = lStack_160;
    lVar3 = lStack_168;
    lVar2 = lStack_1a0;
    lVar1 = lStack_1a8;
    lVar15 = plVar10[5];
    lStack_110 = lStack_1a8;
    lStack_108 = lStack_1a0;
    lStack_1a0 = 0;
    lStack_1a8 = 0;
    lStack_f8 = (long)puStack_190;
    puStack_100 = puStack_198;
    uStack_e8 = uStack_180;
    lStack_f0 = lStack_188;
    uStack_df = CONCAT17(uStack_170,uStack_177);
    uStack_e0 = uStack_178;
    lStack_d0 = lStack_168;
    lStack_c8 = lStack_160;
    lStack_168 = 0;
    lStack_160 = 0;
    pcStack_c0 = (code *)0x0;
    uStack_b0 = 1;
    lStack_a8 = lStack_158;
    lStack_a0 = lStack_150;
    lStack_158 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    lStack_98 = lVar7;
    lStack_88 = lStack_130;
    lStack_80 = lStack_128;
    lStack_78 = lStack_120;
    ppuStack_b8 = (undefined **)in_x6;
    plStack_90 = plVar10 + 7;
    func_0x00010882f710();
    pcStack_70 = FUN_108829cfc;
    ppuStack_68 = &PTR_FUN_110a78198;
    func_0x000107c33a2c();
    *plVar11 = lVar1;
    plVar11[1] = lVar2;
    lVar2 = lStack_188;
    puVar9 = puStack_198;
    lStack_110 = 0;
    lStack_108 = 0;
    lVar1 = CONCAT71(uStack_17f,uStack_180);
    plVar11[3] = (long)puStack_190;
    plVar11[2] = (long)puVar9;
    plVar11[5] = lVar1;
    plVar11[4] = lVar2;
    uVar13 = CONCAT17(uStack_178,uStack_17f);
    *(ulong *)((long)plVar11 + 0x31) = CONCAT17(uStack_170,uStack_177);
    *(undefined8 *)((long)plVar11 + 0x29) = uVar13;
    plVar11[8] = lVar3;
    plVar11[9] = lVar4;
    pcVar8 = pcStack_c0;
    lStack_d0 = 0;
    lStack_c8 = 0;
    lVar1 = CONCAT71(uStack_af,uStack_b0);
    plVar11[0xb] = (long)ppuStack_b8;
    plVar11[10] = (long)pcVar8;
    plVar11[0xc] = lVar1;
    plVar11[0xd] = lVar5;
    plVar11[0xe] = lVar6;
    plVar11[0xf] = lVar7;
    lStack_a8 = 0;
    lStack_a0 = 0;
    lStack_98 = 0;
    plVar11[0x10] = (long)(plVar10 + 7);
    plVar11[0x11] = lStack_130;
    plVar11[0x12] = lStack_128;
    plVar11[0x13] = lStack_120;
    lStack_80 = 0;
    lStack_78 = 0;
    lStack_88 = 0;
    plStack_60 = plVar11;
    func_0x000107c339ac(lVar15);
    func_0x00010882fc6c();
    func_0x00010882eb54();
    func_0x000108829cd8(&lStack_110);
    func_0x000107c33a04();
    FUN_108829dc0(&lStack_1a8);
    func_0x000107c280f8(&lStack_158);
    plVar10 = &lStack_140;
    func_0x000108625dec();
    func_0x000107c337a8(uStack_10);
    if ((bool)in_ZR) {
      return plVar10;
    }
    ___stack_chk_fail();
    func_0x00010882eb54();
    func_0x000108829cd8(&lStack_110);
    func_0x000107c33a04();
    FUN_108829dc0(&lStack_1a8);
    func_0x000107c280f8(&lStack_158);
    func_0x000108625dec(&lStack_140);
    func_0x00010882edf0();
    func_0x00010882ff54();
    func_0x000107c337b0();
    func_0x00010882fa64();
    if (lVar5 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_03 != 0);
    }
    func_0x000107c33ae0();
    func_0x00010882f63c();
    lStack_188 = lVar5;
    puStack_190 = &lStack_110;
    if (lVar5 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_04 != 0);
    }
    puStack_138 = &UNK_10f4bcf38;
    func_0x00010882f018(&uStack_178);
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_02)();
    func_0x000107c337e4();
    func_0x000107c338d4();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    func_0x00010882e78c();
    pcStack_c0 = FUN_108829e04;
    ppuStack_b8 = &PTR_FUN_110a781b0;
    func_0x000107c33a44();
    func_0x00010882e8dc();
    func_0x000107c338ec();
    func_0x00010882ea00();
    func_0x000108829de0(&lStack_130);
    func_0x00010882ee40();
    FUN_108829ebc(&lStack_1a0);
    func_0x000107c33a40();
    plVar10 = &lStack_160;
    func_0x000108625e58();
    func_0x000107c337a8(plStack_60);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882ea00();
      func_0x000108829de0(&lStack_130);
      func_0x00010882ee40();
      FUN_108829ebc(&lStack_1a0);
      func_0x000107c33a40();
      plVar10 = &lStack_160;
      func_0x000108625e58(plVar10);
      func_0x00010882edf0();
      func_0x00010882eb68(&PTR_DAT_110a77e80);
      func_0x000107c29344(plVar10 + 3);
      func_0x000107c29cf4(lVar5);
      return plVar10;
    }
  }
  return plVar10;
}



/* Entry: 108828644; end: 1088288b3;  */

long * FUN_108828644(undefined8 param_1,long param_2,undefined1 param_3,long param_4,
                    undefined1 param_5,undefined8 param_6,long param_7,long *param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined1 in_ZR;
  long *plVar11;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined8 uVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long unaff_x19;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long *plStack_190;
  long lStack_188;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  long lStack_d0;
  long lStack_c8;
  code *pcStack_c0;
  undefined **ppuStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  code *pcStack_70;
  undefined **ppuStack_68;
  long *plStack_60;
  undefined8 uStack_10;
  
  func_0x000107c33c58();
  func_0x000107c337b0();
  lVar1 = *param_8;
  lVar2 = param_8[1];
  lStack_140 = lVar1;
  puStack_138 = (undefined *)lVar2;
  uStack_10 = extraout_x8;
  if (lVar2 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  func_0x000107c29cfc(&lStack_1a8,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
  plStack_190 = (long *)CONCAT71(plStack_190._1_7_,param_3);
  uStack_178 = (undefined1)param_6;
  uStack_177 = (undefined7)((ulong)param_6 >> 8);
  uStack_170 = (undefined1)param_7;
  lStack_198 = param_2;
  lStack_188 = param_4;
  uStack_180 = param_5;
  lStack_168 = lVar1;
  lStack_160 = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  puStack_118 = &UNK_10f4bcf15;
  plVar11 = &lStack_158;
  func_0x00010882f338();
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8_00)();
  func_0x000107c337f8();
  func_0x000107c33960();
  func_0x000107c3396c();
  func_0x000107c33a9c();
  func_0x00010882e55c();
  func_0x00010882f02c();
  lVar9 = lStack_148;
  lVar8 = lStack_150;
  lVar7 = lStack_158;
  lVar6 = lStack_160;
  lVar5 = lStack_168;
  lVar2 = lStack_1a0;
  lVar1 = lStack_1a8;
  uVar12 = *(undefined8 *)(unaff_x19 + 0x28);
  lStack_110 = lStack_1a8;
  lStack_108 = lStack_1a0;
  lStack_1a0 = 0;
  lStack_1a8 = 0;
  lStack_f8 = (long)plStack_190;
  lStack_100 = lStack_198;
  uStack_e8 = uStack_180;
  lStack_f0 = lStack_188;
  uStack_df = CONCAT17(uStack_170,uStack_177);
  uStack_e0 = uStack_178;
  lStack_d0 = lStack_168;
  lStack_c8 = lStack_160;
  lStack_168 = 0;
  lStack_160 = 0;
  pcStack_c0 = (code *)0x0;
  uStack_b0 = 1;
  lStack_a8 = lStack_158;
  lStack_a0 = lStack_150;
  lStack_158 = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_98 = lVar9;
  lStack_88 = lStack_130;
  lStack_80 = lStack_128;
  lStack_78 = lStack_120;
  ppuStack_b8 = (undefined **)param_7;
  lStack_90 = unaff_x19 + 0x38;
  func_0x00010882f710();
  pcStack_70 = FUN_108829cfc;
  ppuStack_68 = &PTR_FUN_110a78198;
  func_0x000107c33a2c();
  *plVar11 = lVar1;
  plVar11[1] = lVar2;
  lVar4 = lStack_188;
  lVar2 = lStack_198;
  lStack_110 = 0;
  lStack_108 = 0;
  lVar1 = CONCAT71(uStack_17f,uStack_180);
  plVar11[3] = (long)plStack_190;
  plVar11[2] = lVar2;
  plVar11[5] = lVar1;
  plVar11[4] = lVar4;
  uVar3 = CONCAT17(uStack_178,uStack_17f);
  *(ulong *)((long)plVar11 + 0x31) = CONCAT17(uStack_170,uStack_177);
  *(undefined8 *)((long)plVar11 + 0x29) = uVar3;
  plVar11[8] = lVar5;
  plVar11[9] = lVar6;
  pcVar10 = pcStack_c0;
  lStack_d0 = 0;
  lStack_c8 = 0;
  lVar1 = CONCAT71(uStack_af,uStack_b0);
  plVar11[0xb] = (long)ppuStack_b8;
  plVar11[10] = (long)pcVar10;
  plVar11[0xc] = lVar1;
  plVar11[0xd] = lVar7;
  plVar11[0xe] = lVar8;
  plVar11[0xf] = lVar9;
  lStack_a8 = 0;
  lStack_a0 = 0;
  lStack_98 = 0;
  plVar11[0x10] = unaff_x19 + 0x38;
  plVar11[0x11] = lStack_130;
  plVar11[0x12] = lStack_128;
  plVar11[0x13] = lStack_120;
  lStack_80 = 0;
  lStack_78 = 0;
  lStack_88 = 0;
  plStack_60 = plVar11;
  func_0x000107c339ac(uVar12);
  func_0x00010882fc6c();
  func_0x00010882eb54();
  func_0x000108829cd8(&lStack_110);
  func_0x000107c33a04();
  FUN_108829dc0(&lStack_1a8);
  func_0x000107c280f8(&lStack_158);
  plVar11 = &lStack_140;
  func_0x000108625dec();
  func_0x000107c337a8(uStack_10);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882eb54();
    func_0x000108829cd8(&lStack_110);
    func_0x000107c33a04();
    FUN_108829dc0(&lStack_1a8);
    func_0x000107c280f8(&lStack_158);
    func_0x000108625dec(&lStack_140);
    func_0x00010882edf0();
    func_0x00010882ff54();
    func_0x000107c337b0();
    func_0x00010882fa64();
    if (lVar7 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c33ae0();
    func_0x00010882f63c();
    lStack_188 = lVar7;
    plStack_190 = &lStack_110;
    if (lVar7 != 0) {
      do {
        func_0x000107c3383c();
      } while (extraout_w10_02 != 0);
    }
    puStack_138 = &UNK_10f4bcf38;
    func_0x00010882f018(&uStack_178);
    func_0x000107c28258();
    func_0x000107c3379c();
    (*extraout_x8_01)();
    func_0x000107c337e4();
    func_0x000107c338d4();
    func_0x000107c3396c();
    func_0x00010882f010();
    func_0x00010882e3f0();
    func_0x00010882eed0();
    func_0x00010882e78c();
    pcStack_c0 = FUN_108829e04;
    ppuStack_b8 = &PTR_FUN_110a781b0;
    func_0x000107c33a44();
    func_0x00010882e8dc();
    func_0x000107c338ec();
    func_0x00010882ea00();
    func_0x000108829de0(&lStack_130);
    func_0x00010882ee40();
    FUN_108829ebc(&lStack_1a0);
    func_0x000107c33a40();
    plVar11 = &lStack_160;
    func_0x000108625e58();
    func_0x000107c337a8(plStack_60);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010882ea00();
      func_0x000108829de0(&lStack_130);
      func_0x00010882ee40();
      FUN_108829ebc(&lStack_1a0);
      func_0x000107c33a40();
      plVar11 = &lStack_160;
      func_0x000108625e58(plVar11);
      func_0x00010882edf0();
      func_0x00010882eb68(&PTR_DAT_110a77e80);
      func_0x000107c29344(plVar11 + 3);
      func_0x000107c29cf4(lVar7);
      return plVar11;
    }
    return plVar11;
  }
  return plVar11;
}



/* Entry: 1088288b4; end: 1088289fb;  */

undefined1 * FUN_1088288b4(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  code *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x20;
  undefined *in_stack_00000088;
  code *in_stack_00000100;
  undefined **in_stack_00000108;
  undefined8 in_stack_00000160;
  
  func_0x00010882ff54();
  func_0x000107c337b0();
  func_0x00010882fa64();
  if (unaff_x20 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c33ae0();
  func_0x00010882f63c();
  if (unaff_x20 != 0) {
    do {
      func_0x000107c3383c();
    } while (extraout_w10_00 != 0);
  }
  in_stack_00000088 = &UNK_10f4bcf38;
  func_0x00010882f018(&stack0x00000048);
  func_0x000107c28258();
  func_0x000107c3379c();
  (*extraout_x8)();
  func_0x000107c337e4();
  func_0x000107c338d4();
  func_0x000107c3396c();
  func_0x00010882f010();
  func_0x00010882e3f0();
  func_0x00010882eed0();
  func_0x00010882e78c();
  in_stack_00000100 = FUN_108829e04;
  in_stack_00000108 = &PTR_FUN_110a781b0;
  func_0x000107c33a44();
  func_0x00010882e8dc();
  func_0x000107c338ec();
  func_0x00010882ea00();
  func_0x000108829de0(&stack0x00000090);
  func_0x00010882ee40();
  FUN_108829ebc(&stack0x00000020);
  func_0x000107c33a40();
  puVar1 = &stack0x00000060;
  func_0x000108625e58();
  func_0x000107c337a8(in_stack_00000160);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010882ea00();
    func_0x000108829de0(&stack0x00000090);
    func_0x00010882ee40();
    FUN_108829ebc(&stack0x00000020);
    func_0x000107c33a40();
    puVar1 = &stack0x00000060;
    func_0x000108625e58(puVar1);
    func_0x00010882edf0();
    func_0x00010882eb68(&PTR_DAT_110a77e80);
    func_0x000107c29344(puVar1 + 0x18);
    func_0x000107c29cf4();
    return puVar1;
  }
  return puVar1;
}



/* Entry: 1088289fc; end: 108828a5b;  */

long FUN_1088289fc(long param_1)

{
  func_0x00010882eb68(&PTR_DAT_110a77e80);
  func_0x000107c29344(param_1 + 0x18);
  func_0x000107c29cf4();
  return param_1;
}



/* Entry: 108828a5c; end: 108828b0f;  */

void FUN_108828a5c(void)

{
  code *extraout_x8;
  long unaff_x20;
  
  func_0x000107c33984();
  func_0x000107c29bc4();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882f868();
  func_0x000107c3397c();
  func_0x000107c3395c();
  if ((**(byte **)(unaff_x20 + 0x58) & 1) == 0) {
    func_0x000107c33a90();
    func_0x000107c33a5c();
    (*extraout_x8)();
    func_0x00010882f868();
    func_0x000107c33980();
    func_0x000107c33958();
    func_0x000107c28288(unaff_x20 + 0x28);
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 108828b10; end: 108828b2f;  */

void FUN_108828b10(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108828a34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108828b30; end: 108828b33;  */

void FUN_108828b30(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108828b34; end: 108828b77;  */

long FUN_108828b34(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c33b14();
  func_0x000104be3970();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108828b78; end: 108828c07;  */

void FUN_108828b78(void)

{
  uint extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_var;
  
  func_0x00010882e350();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882ee30();
  func_0x000107c3397c();
  func_0x00010882e370();
  func_0x00010882ef78();
  if ((extraout_w8 & 1) == 0) {
    func_0x000107c33a90();
    func_0x00010882f4b4();
    (*(code *)CONCAT44(extraout_var,extraout_w8_00))();
    func_0x00010882ee30();
    func_0x000107c33980();
    func_0x00010882e360();
    func_0x00010882eea0();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 108828c08; end: 108828c27;  */

void FUN_108828c08(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108828b54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108828c28; end: 108828c2b;  */

void FUN_108828c28(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108828c2c; end: 108828c5b;  */

void FUN_108828c2c(long param_1,long param_2)

{
  func_0x000107c338c4();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  func_0x000107c33c38();
  return;
}



/* Entry: 108828c5c; end: 108828c9f;  */

long FUN_108828c5c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c33b14();
  func_0x000107c279dc();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108828ca0; end: 108828d2b;  */

void FUN_108828ca0(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x00010882e350();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882ee30();
  func_0x000107c3397c();
  func_0x00010882e370();
  func_0x00010882ef78();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882e4c4();
    func_0x00010882eec8(*(undefined8 *)(extraout_x8_00 + 0x30));
    func_0x00010882ee30();
    func_0x000107c33980();
    func_0x00010882e360();
    func_0x00010882eea0();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 108828d2c; end: 108828d4b;  */

void FUN_108828d2c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108828c7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108828d4c; end: 108828d4f;  */

void FUN_108828d4c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108828d50; end: 108828d77;  */

void FUN_108828d50(void)

{
  func_0x00010882e244();
  func_0x000107c279ac();
  func_0x00010882e938();
  return;
}



/* Entry: 108828d78; end: 108828dbf;  */

long FUN_108828d78(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882ef64();
  func_0x000108625d80();
  func_0x00010882f254();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108828dc0; end: 108828e4b;  */

void FUN_108828dc0(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x00010882e350();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882ee30();
  func_0x000107c3397c();
  func_0x00010882e370();
  func_0x00010882ef78();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882e4c4();
    func_0x00010882eec8(*(undefined8 *)(extraout_x8_00 + 0x38));
    func_0x00010882ee30();
    func_0x000107c33980();
    func_0x00010882e360();
    func_0x00010882eea0();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 108828e4c; end: 108828e6b;  */

void FUN_108828e4c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108828d9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108828e6c; end: 108828e6f;  */

void FUN_108828e6c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108828e70; end: 108828e97;  */

void FUN_108828e70(void)

{
  func_0x00010882e244();
  func_0x000107c27994();
  func_0x00010882e938();
  return;
}



/* Entry: 108828e98; end: 108828edb;  */

long FUN_108828e98(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882e75c();
  func_0x00010882ee28();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108828edc; end: 108828f6f;  */

void FUN_108828edc(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  
  func_0x000107c337c0();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x000107c3399c();
  func_0x000107c3397c();
  func_0x000107c337cc();
  func_0x000107c33a1c();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882ee08(*unaff_x20);
    func_0x00010882eec8(*(undefined8 *)(extraout_x8_00 + 0x40));
    func_0x000107c3399c();
    func_0x000107c33980();
    func_0x000107c337c8();
    func_0x000107c339f4();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 108828f70; end: 108828f8f;  */

void FUN_108828f70(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108828eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108828f90; end: 108828f93;  */

void FUN_108828f90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108828f94; end: 108828fd3;  */

void FUN_108828f94(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000107c338c4();
  func_0x00010882fe14();
  func_0x000107c279a0(unaff_x20 + 0x10,param_2 + 0x20);
  return;
}



/* Entry: 108828fd4; end: 10882901f;  */

long FUN_108828fd4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c33a60();
  func_0x000107c279a4();
  func_0x000104be3970(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108829020; end: 1088290b7;  */

void FUN_108829020(void)

{
  uint extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 extraout_var;
  
  func_0x00010882e56c();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882f008();
  func_0x000107c3397c();
  func_0x00010882e59c();
  func_0x00010882f4c0();
  if ((extraout_w8 & 1) == 0) {
    func_0x000107c33adc();
    func_0x00010882f950();
    (*(code *)CONCAT44(extraout_var,extraout_w8_00))();
    func_0x00010882f008();
    func_0x000107c33980();
    func_0x00010882e58c();
    func_0x00010882f2b4();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 1088290b8; end: 1088290d7;  */

void FUN_1088290b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108828ffc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1088290d8; end: 1088290db;  */

void FUN_1088290d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1088290dc; end: 108829123;  */

void FUN_1088290dc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000107c338c4();
  func_0x00010882fe14();
  *(undefined1 *)(unaff_x20 + 0x10) = *(undefined1 *)(param_2 + 0x20);
  func_0x000107c279a0(unaff_x20 + 0x18,param_2 + 0x28);
  return;
}



/* Entry: 108829124; end: 10882916b;  */

long FUN_108829124(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882ef64();
  func_0x000107c279a4();
  func_0x000104be3970(unaff_x19 + 0x10);
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10882916c; end: 1088291fb;  */

void FUN_10882916c(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  
  func_0x000107c3389c();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x000107c33a58();
  func_0x000107c3397c();
  func_0x000107c338a8();
  func_0x000107c33b94();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882ee08(*unaff_x20);
    (**(code **)(extraout_x8_00 + 0x50))();
    func_0x000107c33a58();
    func_0x000107c33980();
    func_0x000107c338a4();
    func_0x000107c33afc();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 1088291fc; end: 10882921b;  */

void FUN_1088291fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010882914c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10882921c; end: 10882921f;  */

void FUN_10882921c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108829220; end: 10882923f;  */

long FUN_108829220(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c338f8();
  func_0x000107c33ae4();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108829240; end: 1088292cb;  */

void FUN_108829240(void)

{
  ulong extraout_x8;
  code *extraout_x8_00;
  undefined8 *unaff_x20;
  
  func_0x000107c3389c();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x000107c33a58();
  func_0x000107c3397c();
  func_0x000107c338a8();
  func_0x000107c33b94();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882e540(*unaff_x20);
    (*extraout_x8_00)();
    func_0x000107c33a58();
    func_0x000107c33980();
    func_0x000107c338a4();
    func_0x000107c33afc();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 1088292cc; end: 1088292eb;  */

void FUN_1088292cc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108829220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1088292ec; end: 1088292ef;  */

void FUN_1088292ec(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1088292f0; end: 108829313;  */

long FUN_1088292f0(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c338dc();
  func_0x000107c33ac0();
  func_0x000107c33a24();
  func_0x000108625da4();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108829314; end: 1088293a7;  */

void FUN_108829314(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x20;
  
  func_0x000107c3385c();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x000107c33a38();
  func_0x000107c3397c();
  func_0x000107c33874();
  func_0x000107c33b60();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882ee08(*unaff_x20);
    (**(code **)(extraout_x8_00 + 0x60))();
    func_0x000107c33a38();
    func_0x000107c33980();
    func_0x000107c3386c();
    func_0x000107c33ac4();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 1088293a8; end: 1088293c7;  */

void FUN_1088293a8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1088292f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1088293c8; end: 1088293cb;  */

void FUN_1088293c8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1088293cc; end: 10882940f;  */

long FUN_1088293cc(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c33a24();
  func_0x000108625da4();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108829410; end: 10882949b;  */

void FUN_108829410(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x00010882e350();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882ee30();
  func_0x000107c3397c();
  func_0x00010882e370();
  func_0x00010882ef78();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882e4c4();
    func_0x00010882eec8(*(undefined8 *)(extraout_x8_00 + 0x68));
    func_0x00010882ee30();
    func_0x000107c33980();
    func_0x00010882e360();
    func_0x00010882eea0();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 10882949c; end: 1088294bb;  */

void FUN_10882949c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001088293ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1088294bc; end: 1088294bf;  */

void FUN_1088294bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1088294c0; end: 1088294e7;  */

void FUN_1088294c0(void)

{
  func_0x00010882e244();
  func_0x000107c279ac();
  func_0x00010882e938();
  return;
}



/* Entry: 1088294e8; end: 10882952b;  */

long FUN_1088294e8(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882e75c();
  func_0x00010882f254();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10882952c; end: 1088295b7;  */

void FUN_10882952c(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x00010882e350();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882ee30();
  func_0x000107c3397c();
  func_0x00010882e370();
  func_0x00010882ef78();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882e4c4();
    func_0x00010882eec8(*(undefined8 *)(extraout_x8_00 + 0x70));
    func_0x00010882ee30();
    func_0x000107c33980();
    func_0x00010882e360();
    func_0x00010882eea0();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 1088295b8; end: 1088295d7;  */

void FUN_1088295b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108829508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1088295d8; end: 1088295db;  */

void FUN_1088295d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1088295dc; end: 108829603;  */

void FUN_1088295dc(void)

{
  func_0x00010882e244();
  func_0x000107c279ac();
  func_0x00010882e938();
  return;
}



/* Entry: 108829604; end: 108829647;  */

long FUN_108829604(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882e75c();
  func_0x00010882f254();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108829648; end: 1088296d3;  */

void FUN_108829648(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x00010882e350();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882ee30();
  func_0x000107c3397c();
  func_0x00010882e370();
  func_0x00010882ef78();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882e4c4();
    func_0x00010882eec8(*(undefined8 *)(extraout_x8_00 + 0x78));
    func_0x00010882ee30();
    func_0x000107c33980();
    func_0x00010882e360();
    func_0x00010882eea0();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 1088296d4; end: 1088296f3;  */

void FUN_1088296d4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108829624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1088296f4; end: 1088296f7;  */

void FUN_1088296f4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1088296f8; end: 10882971f;  */

void FUN_1088296f8(void)

{
  func_0x00010882e244();
  func_0x000107c27994();
  func_0x00010882e938();
  return;
}



/* Entry: 108829720; end: 108829767;  */

long FUN_108829720(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882ef64();
  func_0x000108625dc8();
  func_0x00010882ee28();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108829768; end: 1088297fb;  */

void FUN_108829768(long *param_1)

{
  ulong extraout_x8;
  
  func_0x000107c337c0();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x000107c3399c();
  func_0x000107c3397c();
  func_0x000107c337cc();
  func_0x000107c33a1c();
  if ((extraout_x8 & 1) == 0) {
    func_0x000107c33adc();
    func_0x00010882e880(*(undefined8 *)(*param_1 + 0x80));
    func_0x000107c3399c();
    func_0x000107c33980();
    func_0x000107c337c8();
    func_0x000107c339f4();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 1088297fc; end: 10882981b;  */

void FUN_1088297fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000108829744();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10882981c; end: 10882981f;  */

void FUN_10882981c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108829820; end: 10882985b;  */

void FUN_108829820(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010882e244();
  func_0x000107c27994();
  *(undefined4 *)(unaff_x19 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Entry: 10882985c; end: 10882989f;  */

long FUN_10882985c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882e850();
  func_0x00010882ee28();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1088298a0; end: 10882992b;  */

void FUN_1088298a0(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x00010882e350();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882ee30();
  func_0x000107c3397c();
  func_0x00010882e370();
  func_0x00010882ef78();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882e4c4();
    func_0x00010882eec8(*(undefined8 *)(extraout_x8_00 + 0x88));
    func_0x00010882ee30();
    func_0x000107c33980();
    func_0x00010882e360();
    func_0x00010882eea0();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 10882992c; end: 10882994b;  */

void FUN_10882992c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010882987c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10882994c; end: 10882994f;  */

void FUN_10882994c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108829950; end: 108829977;  */

void FUN_108829950(void)

{
  func_0x00010882e244();
  func_0x000107c279ac();
  func_0x00010882e938();
  return;
}



/* Entry: 108829978; end: 1088299bf;  */

long FUN_108829978(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010882ef64();
  func_0x000108625dec();
  func_0x00010882f254();
  lVar1 = unaff_x19;
  func_0x0001000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1088299c0; end: 108829a4b;  */

void FUN_1088299c0(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x00010882e350();
  func_0x000107c337ac();
  func_0x000107c33808();
  func_0x000107c33964();
  func_0x000107c33938();
  func_0x00010882ee30();
  func_0x000107c3397c();
  func_0x00010882e370();
  func_0x00010882ef78();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010882e4c4();
    func_0x00010882eec8(*(undefined8 *)(extraout_x8_00 + 0x90));
    func_0x00010882ee30();
    func_0x000107c33980();
    func_0x00010882e360();
    func_0x00010882eea0();
  }
  func_0x000107c33940();
  func_0x000107c3393c();
  return;
}



/* Entry: 108829a4c; end: 108829a6b;  */

void FUN_108829a4c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010882999c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


