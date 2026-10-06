/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f75308; end: 100f7550b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f75308(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
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
  
  func_0x000107c61428(param_2 + 0x10,auStack_c8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d4f368);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    uStack_108 = param_1[9];
    uStack_110 = param_1[8];
    uStack_f8 = param_1[0xb];
    uStack_100 = param_1[10];
    uStack_e8 = param_1[0xd];
    uStack_f0 = param_1[0xc];
    uStack_d8 = param_1[0xf];
    uStack_e0 = param_1[0xe];
    uStack_148 = param_1[1];
    uStack_150 = *param_1;
    uStack_138 = param_1[3];
    uStack_140 = param_1[2];
    uStack_128 = param_1[5];
    uStack_130 = param_1[4];
    uStack_118 = param_1[7];
    uStack_120 = param_1[6];
    func_0x000100f75a34(&uStack_150);
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    uStack_58 = uStack_f8;
    uStack_60 = uStack_100;
    uStack_48 = uStack_e8;
    uStack_50 = uStack_f0;
    uStack_38 = uStack_d8;
    uStack_40 = uStack_e0;
    uStack_a8 = uStack_148;
    uStack_b0 = uStack_150;
    uStack_98 = uStack_138;
    uStack_a0 = uStack_140;
    uStack_88 = uStack_128;
    uStack_90 = uStack_130;
    uStack_78 = uStack_118;
    uStack_80 = uStack_120;
    func_0x000103ba1ea0(&uStack_b0);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 100f7550c; end: 100f7550f; -[_TtC20ModularStickerCutout26CustomStickerFlowPresenter tray:positionDidChange:] */

void FUN_100f7550c(void)

{
  return;
}



/* Entry: 100f75510; end: 100f755cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f75510(double *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_6 + _DAT_112d4f3a0);
  if (lVar2 == 0) {
    param_2 = 400.0;
  }
  else {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f755d0);
      (*pcVar1)();
    }
    func_0x000107c438d4();
    func_0x000107c61170(lVar3);
    func_0x000107c609b0(param_2,param_3,param_4,param_5);
    func_0x000107c61170(lVar2);
    param_2 = param_2 * 0.5;
  }
  *param_1 = param_2;
  return;
}



/* Entry: 100f755d0; end: 100f75657; -[_TtC20ModularStickerCutout26CustomStickerFlowPresenter tray:heightForPosition:] */

undefined8 FUN_100f755d0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  func_0x000107c5fcec(0);
  uStack_50 = param_2;
  func_0x000107c61174(param_2);
  FUN_100f7a3d8(FUN_100f759c0,auStack_60,"ModularStickerCutout/CustomStickerFlowPresenter.swift",
                0x35,2,0x99);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 100f75658; end: 100f756cb;  */

void FUN_100f75658(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11036f260;
  func_0x000107c613fc(&UNK_11036f260,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c6157c(puVar1);
  FUN_100f75020(0x100f75950,puVar1);
  func_0x000107c61578(puVar1,2);
  return;
}



/* Entry: 100f756cc; end: 100f7578f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f756cc(long param_1,code *param_2)

{
  undefined8 uVar1;
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
  undefined1 auStack_d8 [24];
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d4f368);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_1);
    (*param_2)(&uStack_158);
    uStack_78 = uStack_110;
    uStack_80 = uStack_118;
    uStack_68 = uStack_100;
    uStack_70 = uStack_108;
    uStack_58 = uStack_f0;
    uStack_60 = uStack_f8;
    uStack_48 = uStack_e0;
    uStack_50 = uStack_e8;
    uStack_b8 = uStack_150;
    uStack_c0 = uStack_158;
    uStack_a8 = uStack_140;
    uStack_b0 = uStack_148;
    uStack_98 = uStack_130;
    uStack_a0 = uStack_138;
    uStack_88 = uStack_120;
    uStack_90 = uStack_128;
    func_0x000103ba1ea0(&uStack_c0);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 100f75790; end: 100f75807; -[_TtC20ModularStickerCutout26CustomStickerFlowPresenter trayDidDismiss:] */

void FUN_100f75790(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  func_0x000107c5fcec(0);
  uStack_40 = param_1;
  func_0x000107c61174(param_1);
  FUN_100f7a598(0x100f75938,auStack_50,"ModularStickerCutout/CustomStickerFlowPresenter.swift",0x35,
                2,0xa2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100f75808; end: 100f75867; -[_TtC20ModularStickerCutout26CustomStickerFlowPresenter init] */

void FUN_100f75808(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ModularStickerCutout.CustomStickerFlowPresenter",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f75834);
  (*pcVar1)();
}



/* Entry: 100f75868; end: 100f75917; -[_TtC20ModularStickerCutout26CustomStickerFlowPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f758fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f75900) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f75868(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d4f368));
  func_0x0001000834e4(param_1 + _DAT_112d4f370);
  FUN_100c9c958(*(undefined8 *)(param_1 + _DAT_112d4f378),
                ((undefined8 *)(param_1 + _DAT_112d4f378))[1]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d4f380 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d4f388));
  func_0x000107c61610(param_1 + _DAT_112d4f390);
  func_0x000107c61610(param_1 + _DAT_112d4f398);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4f3a0));
  return;
}



/* Entry: 100f75918; end: 100f7596f;  */

void FUN_100f75918(void)

{
  func_0x000107c61168(&PTR_PTR_1127a5bd8);
  return;
}



/* Entry: 100f75970; end: 100f759bf;  */

void FUN_100f75970(long param_1,long param_2)

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



/* Entry: 100f759c0; end: 100f759d7;  */

void FUN_100f759c0(void)

{
  long unaff_x20;
  
  FUN_100f75510(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100f759d8; end: 100f759df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f759d8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
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
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_c8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d4f368);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    uStack_108 = param_1[9];
    uStack_110 = param_1[8];
    uStack_f8 = param_1[0xb];
    uStack_100 = param_1[10];
    uStack_e8 = param_1[0xd];
    uStack_f0 = param_1[0xc];
    uStack_d8 = param_1[0xf];
    uStack_e0 = param_1[0xe];
    uStack_148 = param_1[1];
    uStack_150 = *param_1;
    uStack_138 = param_1[3];
    uStack_140 = param_1[2];
    uStack_128 = param_1[5];
    uStack_130 = param_1[4];
    uStack_118 = param_1[7];
    uStack_120 = param_1[6];
    func_0x000100f75a34(&uStack_150);
    uStack_68 = uStack_108;
    uStack_70 = uStack_110;
    uStack_58 = uStack_f8;
    uStack_60 = uStack_100;
    uStack_48 = uStack_e8;
    uStack_50 = uStack_f0;
    uStack_38 = uStack_d8;
    uStack_40 = uStack_e0;
    uStack_a8 = uStack_148;
    uStack_b0 = uStack_150;
    uStack_98 = uStack_138;
    uStack_a0 = uStack_140;
    uStack_88 = uStack_128;
    uStack_90 = uStack_130;
    uStack_78 = uStack_118;
    uStack_80 = uStack_120;
    func_0x000103ba1ea0(&uStack_b0);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 100f759e0; end: 100f759ff;  */

void FUN_100f759e0(void)

{
  FUN_100f756cc();
  return;
}



/* Entry: 100f75a00; end: 100f75a57;  */

void FUN_100f75a00(undefined8 *param_1)

{
  *param_1 = 2;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0x8000000000000000;
  return;
}



/* Entry: 100f75a58; end: 100f75abf;  */

/* WARNING: Possible PIC construction at 0x000100f75aa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f75aac) */

void FUN_100f75a58(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10d915220;
  func_0x000107c614e0(&UNK_10d915220);
  puVar2 = &UNK_10d915248;
  func_0x000107c614e0(&UNK_10d915248);
  func_0x000107c5f20c(param_1,uVar3,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 100f75ac0; end: 100f75b4b;  */

void FUN_100f75ac0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar4 = *param_1;
  uVar5 = *param_2;
  uVar1 = *(undefined1 *)(param_1 + 1);
  puVar2 = &UNK_10d915220;
  func_0x000107c614e0(&UNK_10d915220);
  puVar3 = &UNK_10d915248;
  func_0x000107c614e0(&UNK_10d915248);
  uStack_50 = uVar4;
  uStack_48 = uVar1;
  FUN_100f75b4c(uVar4,uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c5f210(&uStack_50,uVar5,puVar2,puVar3);
  return;
}



/* Entry: 100f75b4c; end: 100f75b7f;  */

void FUN_100f75b4c(undefined8 param_1,byte param_2)

{
  if (param_2 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
    return;
  }
  return;
}



/* Entry: 100f75b80; end: 100f75bc3;  */

long FUN_100f75b80(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100f75bc4; end: 100f75c13;  */

void FUN_100f75bc4(undefined8 *param_1)

{
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
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return;
}



/* Entry: 100f75c14; end: 100f7668b;  */

void FUN_100f75c14(ulong *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9)

{
  undefined1 *puVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  long extraout_x8;
  ulong *puVar16;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 uStack_440;
  undefined1 auStack_438 [8];
  undefined8 uStack_430;
  undefined1 auStack_428 [8];
  ulong auStack_420 [2];
  ulong uStack_410;
  undefined1 *puStack_408;
  ulong auStack_400 [2];
  ulong *apuStack_3f0 [2];
  long alStack_3e0 [18];
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined1 uStack_308;
  undefined7 uStack_307;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined1 uStack_2e0;
  undefined8 uStack_2df;
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
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined8 uStack_25f;
  ulong uStack_250;
  ulong uStack_248;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  ulong uStack_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  ulong uStack_228;
  ulong uStack_220;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined1 uStack_1f0;
  ulong uStack_1e8;
  undefined1 uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  ulong uStack_158;
  ulong uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  ulong uVar9;
  
  lVar6 = 0x112d4f488;
  puVar10 = &UNK_10d915338;
  func_0x0001000285a8(0x112d4f488,&UNK_10d915338);
  alStack_3e0[0] = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = (long)&uStack_410 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_3e0[1] = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar16 = (ulong *)(lVar6 - extraout_x12);
  lVar6 = 0;
  apuStack_3f0[0] = puVar16;
  func_0x000107c5eccc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar7 = 0;
  func_0x000107c5eca0();
  lVar23 = *(long *)(uVar7 - 8);
  uVar8 = uVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  lVar19 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar20 = lVar19 - extraout_x12_00;
  func_0x000100f97534();
  func_0x000107c5ecc8(lVar6);
  func_0x000107c5eca4(lVar19,uVar8,puVar10);
  uVar15 = (undefined1)lVar6;
  FUN_100f90c90(uVar20,5);
  (**(code **)(lVar23 + 8))(lVar19);
  uVar8 = uVar20;
  func_0x000107c5f5dc();
  uVar9 = uVar8;
  func_0x000107c5f570();
  uVar4 = (undefined1)uVar9;
  uVar24 = 0x4020000000000000;
  uVar5 = uVar4;
  func_0x000107c5f280();
  uVar9 = param_3;
  uVar21 = param_4;
  uVar12 = param_5;
  func_0x000107c5f574();
  uStack_218 = (undefined1)param_4;
  uStack_217 = (undefined7)((ulong)param_4 >> 8);
  uStack_210 = (undefined1)param_5;
  uStack_20f = (undefined7)((ulong)param_5 >> 8);
  uStack_208 = 0;
  uVar25 = 0x4030000000000000;
  uStack_250 = uVar8;
  uStack_248 = uVar7;
  uStack_240 = uVar15;
  uStack_238 = param_9;
  uStack_230 = uVar4;
  uStack_228 = uVar24;
  uStack_220 = param_3;
  func_0x000107c5f280();
  uStack_330 = CONCAT71(uStack_22f,uStack_230);
  uStack_328 = uStack_228;
  uStack_318 = uStack_218;
  uStack_320 = uStack_220;
  uStack_30f = uStack_20f;
  uStack_308 = uStack_208;
  uStack_317 = uStack_217;
  uStack_310 = uStack_210;
  uStack_340 = CONCAT71(uStack_23f,uStack_240);
  uStack_348 = uStack_248;
  uStack_350 = uStack_250;
  uStack_338 = uStack_238;
  uStack_1b8 = 0;
  uStack_200 = uVar8;
  uStack_1f8 = uVar7;
  uStack_1f0 = uVar15;
  uStack_1e8 = param_9;
  uStack_1e0 = uVar4;
  uStack_1d8 = uVar24;
  uStack_1d0 = param_3;
  uStack_1c8 = param_4;
  uStack_1c0 = param_5;
  func_0x000100f7991c(&uStack_250,&uStack_130,0x112d4f490,&UNK_10d915340);
  func_0x000100f79964(&uStack_200,0x112d4f490,&UNK_10d915340);
  uStack_178 = CONCAT71(uStack_317,uStack_318);
  uStack_188 = uStack_328;
  uStack_190 = uStack_330;
  uStack_180 = uStack_320;
  uStack_168 = CONCAT71(uStack_307,uStack_308);
  uVar8 = CONCAT71(uStack_30f,uStack_310);
  uStack_1a8 = uStack_348;
  uStack_1b0 = uStack_350;
  uStack_198 = uStack_338;
  uStack_1a0 = uStack_340;
  uStack_148 = (undefined1)uVar21;
  uStack_147 = (undefined7)((ulong)uVar21 >> 8);
  uStack_140 = (undefined1)uVar12;
  uStack_13f = (undefined7)((ulong)uVar12 >> 8);
  uStack_138 = 0;
  uStack_100 = uStack_320;
  uStack_118 = uStack_338;
  uStack_120 = uStack_340;
  uStack_108 = uStack_328;
  uStack_110 = uStack_330;
  uStack_128 = uStack_348;
  uStack_130 = uStack_350;
  uStack_b8 = 0;
  uVar7 = uStack_320;
  uVar24 = uStack_340;
  uStack_170 = uVar8;
  uStack_160 = uVar5;
  uStack_158 = uVar25;
  uStack_150 = uVar9;
  uStack_f8 = uStack_178;
  uStack_f0 = uVar8;
  uStack_e8 = uStack_168;
  uStack_e0 = uVar5;
  uStack_d8 = uVar25;
  uStack_d0 = uVar9;
  uStack_c8 = uVar21;
  uStack_c0 = uVar12;
  func_0x000100f7991c(&uStack_1b0,&uStack_2d0,0x112d4f498,&UNK_10d9d5ac0);
  func_0x000100f79964(&uStack_130,0x112d4f498,&UNK_10d9d5ac0);
  lVar6 = 0x112d4f4a0;
  func_0x0001000285a8(0x112d4f4a0,&UNK_10d915350);
  auStack_400[1] = *(long *)(*(long *)(lVar6 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(auStack_400[1] + 0xf & 0xfffffffffffffff0);
  puVar18 = (undefined1 *)(uVar20 - extraout_x8_02);
  uVar21 = *(undefined8 *)(param_6 + 8);
  puVar10 = &UNK_10d915358;
  func_0x000107c614e0(&UNK_10d915358);
  puVar11 = &UNK_10d915380;
  func_0x000107c614e0(&UNK_10d915380);
  auStack_400[0] = uVar21;
  func_0x000107c5f20c(&uStack_2d0,uVar21,puVar10,puVar11);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar11);
  uVar9 = uStack_2d0;
  uVar20 = uStack_2c8 & 0xff;
  apuStack_3f0[1] = (ulong *)param_6;
  if ((byte)uStack_2c8 < 2) {
    lVar6 = 0x112d4f4b0;
    func_0x0001000285a8(0x112d4f4b0,&UNK_10d9153a8);
    puStack_408 = puVar18;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar25 = (long)puVar18 - extraout_x8_03;
    FUN_100f7668c(uVar25,uVar9);
    FUN_100f78e70(uVar9,uVar20);
    lVar19 = 0x112d4f4a8;
    func_0x0001000285a8(0x112d4f4a8,&UNK_10d9153a0);
    uStack_410 = uVar25;
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar23 = uVar25 - extraout_x8_04;
    func_0x000100c9ca2c(uVar25,lVar23);
    func_0x000107c6159c(lVar23,lVar19,0);
    uVar21 = 0x112d4f4b8;
    func_0x0001000285a8(0x112d4f4b8,&UNK_10d9153b0);
    uVar14 = uVar21;
    FUN_100f78e84();
    uVar12 = 0x112d4f508;
    FUN_100f79490(0x112d4f508,0x112d4f4b8,&UNK_10d9153b0,FUN_100f7912c);
    func_0x000107c5f490(puVar18,lVar23,lVar6,uVar21,uVar14,uVar12);
    func_0x000100f79260(uVar25,0x112d4f4b0,&UNK_10d9153a8);
    puVar3 = puStack_408;
  }
  else {
    FUN_100f78e70();
    func_0x000107c5f7ac();
    uVar7 = uVar9;
    uVar25 = uVar20;
    func_0x000107c5f7ac();
    *(ulong *)(puVar18 + -0x10) = uVar7;
    *(ulong *)(puVar18 + -8) = uVar25;
    puVar18[-0x18] = 0;
    *(undefined8 *)(puVar18 + -0x20) = 0x7ff0000000000000;
    puVar18[-0x28] = 1;
    *(undefined8 *)(puVar18 + -0x30) = 0;
    func_0x000107c5f388(&uStack_2d0,0,1,0,1,0x7ff0000000000000,0,0,1);
    lVar6 = 0x112d4f4a8;
    func_0x0001000285a8(0x112d4f4a8,&UNK_10d9153a0);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar17 = (undefined8 *)(puVar18 + -extraout_x8_05);
    puVar17[1] = 2;
    *puVar17 = 0x81;
    puVar17[2] = uVar9;
    puVar17[3] = uVar20;
    puVar17[0xd] = uStack_288;
    puVar17[0xc] = uStack_290;
    puVar17[0xf] = uStack_278;
    puVar17[0xe] = uStack_280;
    puVar17[0x11] = CONCAT71(uStack_267,uStack_268);
    puVar17[0x10] = uStack_270;
    uVar7 = uStack_2c0;
    uVar9 = uStack_2d0;
    puVar17[5] = uStack_2c8;
    puVar17[4] = uVar9;
    puVar17[7] = uStack_2b8;
    puVar17[6] = uVar7;
    puVar17[9] = uStack_2a8;
    puVar17[8] = uStack_2b0;
    puVar17[0xb] = uStack_298;
    puVar17[10] = uStack_2a0;
    func_0x000107c6159c(puVar17);
    uVar21 = 0x112d4f4b0;
    func_0x0001000285a8(0x112d4f4b0,&UNK_10d9153a8);
    uVar12 = 0x112d4f4b8;
    func_0x0001000285a8(0x112d4f4b8,&UNK_10d9153b0);
    uVar13 = uVar12;
    FUN_100f78e84();
    uVar14 = 0x112d4f508;
    FUN_100f79490(0x112d4f508,0x112d4f4b8,&UNK_10d9153b0,FUN_100f7912c);
    func_0x000107c5f490(puVar18,puVar17,uVar21,uVar12,uVar13,uVar14);
    puVar3 = puVar18;
    uVar7 = uStack_2b0;
  }
  puVar10 = &UNK_10d915358;
  func_0x000107c614e0(&UNK_10d915358);
  puVar11 = &UNK_10d915380;
  func_0x000107c614e0(&UNK_10d915380);
  func_0x000107c5f20c(&uStack_2d0,auStack_400[0],puVar10,puVar11);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar11);
  uVar9 = uStack_2d0;
  if ((byte)uStack_2c8 < 2) {
    uVar22 = *(ulong *)(uStack_2d0 + 0x10);
    FUN_100f78e70();
    puVar16 = apuStack_3f0[1];
    if (uVar22 < 2) {
      uVar22 = 0;
      auStack_400[0] = 0;
      uStack_410 = 0;
      puStack_408 = (undefined1 *)CONCAT44(puStack_408._4_4_,1);
      uVar26 = 0;
      uVar20 = 0;
      uVar25 = 0;
      uVar29 = 0;
    }
    else {
      uStack_2c8 = *(ulong *)((long)apuStack_3f0[1] + 0x18);
      uStack_2d0 = *(ulong *)((long)apuStack_3f0[1] + 0x10);
      uStack_2c0 = *(undefined8 *)((long)apuStack_3f0[1] + 0x20);
      uVar20 = 0x112d4f558;
      func_0x0001000285a8(0x112d4f558,&UNK_10d915410);
      func_0x000107c5f72c(&uStack_350);
      auStack_400[0] = 0;
      if ((char)uStack_348 != '\x01') {
        auStack_400[0] = uStack_350;
      }
      func_0x000107c5f584();
      uVar26 = 0x4028000000000000;
      uVar9 = uVar20;
      func_0x000107c5f280();
      puStack_408 = (undefined1 *)((ulong)puStack_408 & 0xffffffff00000000);
      uStack_410 = uVar20 & 0xff;
      uVar20 = uVar7;
      uVar25 = uVar8;
      uVar29 = uVar24;
    }
  }
  else {
    FUN_100f78e70();
    uVar22 = 0;
    auStack_400[0] = 0;
    uStack_410 = 0;
    puStack_408 = (undefined1 *)CONCAT44(puStack_408._4_4_,1);
    uVar26 = 0;
    uVar20 = 0;
    uVar25 = 0;
    uVar29 = 0;
    puVar16 = apuStack_3f0[1];
  }
  uVar5 = SUB81(puVar16,0);
  func_0x000107c5f410();
  puVar2 = apuStack_3f0[0];
  *apuStack_3f0[0] = uVar9;
  puVar2[1] = 0x4028000000000000;
  *(undefined1 *)(puVar2 + 2) = 0;
  lVar6 = 0x112d4f538;
  func_0x0001000285a8(0x112d4f538,&UNK_10d9153f0);
  func_0x000100f76df4((long)puVar2 + (long)*(int *)(lVar6 + 0x2c));
  func_0x000107c5f568();
  uVar21 = 0x4030000000000000;
  func_0x000107c5f280();
  lVar6 = 0x112d4f540;
  uVar9 = uVar7;
  uVar27 = uVar8;
  uVar28 = uVar24;
  func_0x0001000285a8(0x112d4f540,&UNK_10d9153f8);
  puVar1 = (undefined1 *)((long)puVar2 + (long)*(int *)(lVar6 + 0x24));
  *puVar1 = uVar5;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(ulong *)(puVar1 + 0x10) = uVar7;
  *(ulong *)(puVar1 + 0x18) = uVar8;
  *(ulong *)(puVar1 + 0x20) = uVar24;
  puVar1[0x28] = 0;
  func_0x000107c5f570();
  uVar21 = 0x4030000000000000;
  func_0x000107c5f280();
  lVar19 = 0x112d4f548;
  uVar8 = uVar9;
  uVar7 = uVar27;
  uVar24 = uVar28;
  func_0x0001000285a8(0x112d4f548,&UNK_10d915400);
  puVar1 = (undefined1 *)((long)puVar2 + (long)*(int *)(lVar19 + 0x24));
  *puVar1 = (char)lVar6;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(ulong *)(puVar1 + 0x10) = uVar9;
  *(ulong *)(puVar1 + 0x18) = uVar27;
  *(ulong *)(puVar1 + 0x20) = uVar28;
  puVar1[0x28] = 0;
  func_0x000107c5f574();
  uVar21 = 0x4020000000000000;
  func_0x000107c5f280();
  puVar1 = (undefined1 *)((long)puVar2 + (long)*(int *)(alStack_3e0[0] + 0x24));
  *puVar1 = (char)lVar19;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(ulong *)(puVar1 + 0x10) = uVar8;
  *(ulong *)(puVar1 + 0x18) = uVar7;
  *(ulong *)(puVar1 + 0x20) = uVar24;
  puVar1[0x28] = 0;
  uStack_300 = CONCAT71(uStack_15f,uStack_160);
  uStack_308 = (undefined1)uStack_168;
  uStack_307 = (undefined7)((ulong)uStack_168 >> 8);
  uStack_310 = (undefined1)uStack_170;
  uStack_30f = (undefined7)(uStack_170 >> 8);
  uStack_2f8 = uStack_158;
  uStack_2e8 = uStack_148;
  uStack_2f0 = uStack_150;
  uStack_2df = CONCAT17(uStack_138,uStack_13f);
  uStack_2e7 = uStack_147;
  uStack_2e0 = uStack_140;
  uStack_348 = uStack_1a8;
  uStack_350 = uStack_1b0;
  uStack_338 = uStack_198;
  uStack_340 = uStack_1a0;
  uStack_328 = uStack_188;
  uStack_330 = uStack_190;
  uStack_318 = (undefined1)uStack_178;
  uStack_317 = (undefined7)((ulong)uStack_178 >> 8);
  uStack_320 = uStack_180;
  apuStack_3f0[1] = (ulong *)puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = (long)puVar3 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000100c9c9dc(puVar18,lVar23);
  lVar19 = alStack_3e0[1];
  func_0x000100f7991c(puVar2,alStack_3e0[1],0x112d4f488,&UNK_10d915338);
  uStack_288 = CONCAT71(uStack_307,uStack_308);
  uStack_290 = CONCAT71(uStack_30f,uStack_310);
  uStack_278 = uStack_2f8;
  uStack_280 = uStack_300;
  uStack_268 = uStack_2e8;
  uStack_270 = uStack_2f0;
  uStack_25f = uStack_2df;
  uStack_267 = uStack_2e7;
  uStack_260 = uStack_2e0;
  uStack_2c8 = uStack_348;
  uStack_2d0 = uStack_350;
  uStack_2b8 = uStack_338;
  uStack_2c0 = uStack_340;
  uStack_298 = CONCAT71(uStack_317,uStack_318);
  uStack_2a8 = uStack_328;
  uStack_2b0 = uStack_330;
  uStack_2a0 = uStack_320;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_2df;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_2e0,uStack_2e7);
  param_1[0xb] = uStack_2f8;
  param_1[10] = uStack_300;
  param_1[0xd] = CONCAT71(uStack_2e7,uStack_2e8);
  param_1[0xc] = uStack_2f0;
  param_1[7] = uStack_298;
  param_1[6] = uStack_320;
  param_1[9] = uStack_288;
  param_1[8] = uStack_290;
  param_1[3] = uStack_338;
  param_1[2] = uStack_340;
  param_1[5] = uStack_328;
  param_1[4] = uStack_330;
  param_1[1] = uStack_348;
  *param_1 = uStack_350;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  lVar6 = 0x112d4f550;
  func_0x0001000285a8(0x112d4f550,&UNK_10d915408);
  func_0x000100c9c9dc(lVar23,(long)param_1 + (long)*(int *)(lVar6 + 0x40));
  puVar16 = (ulong *)((long)param_1 + (long)*(int *)(lVar6 + 0x50));
  *puVar16 = uVar22;
  puVar16[1] = auStack_400[0];
  puVar16[2] = uStack_410;
  puVar16[3] = uVar26;
  puVar16[4] = uVar20;
  puVar16[5] = uVar25;
  puVar16[6] = uVar29;
  *(undefined1 *)(puVar16 + 7) = 0;
  *(char *)((long)puVar16 + 0x39) = (char)puStack_408;
  func_0x000100f7991c(lVar19,(long)param_1 + (long)*(int *)(lVar6 + 0x60),0x112d4f488,&UNK_10d915338
                     );
  func_0x000100f7991c(&uStack_2d0,alStack_3e0 + 2,0x112d4f498,&UNK_10d9d5ac0);
  func_0x000100f79964(puVar2,0x112d4f488,&UNK_10d915338);
  func_0x000100f79260(puVar18,0x112d4f4a0,&UNK_10d915350);
  func_0x000100f79964(lVar19,0x112d4f488,&UNK_10d915338);
  func_0x000100f79260(lVar23,0x112d4f4a0,&UNK_10d915350);
  func_0x000100f79964(&uStack_350,0x112d4f498,&UNK_10d9d5ac0);
  return;
}



/* Entry: 100f7668c; end: 100f7725b;  */

void FUN_100f7668c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined8 *unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  long alStack_1a0 [2];
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_110;
  undefined *puStack_108;
  long *plStack_100;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = 0x112d4f4f0;
  lStack_150 = param_1;
  func_0x0001000285a8(0x112d4f4f0,&UNK_10d9153d8);
  lStack_188 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_188 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&lStack_190 - extraout_x8;
  lVar3 = 0x112d4f4e8;
  func_0x0001000285a8(0x112d4f4e8,&UNK_10d9153d0);
  lStack_180 = *(long *)(lVar3 + -8);
  lStack_148 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_180 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar12 - extraout_x8_00;
  lVar3 = 0x112d4f4c8;
  func_0x0001000285a8(0x112d4f4c8,&UNK_10d9153b8);
  lStack_158 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d4f4e0;
  lStack_168 = lVar13 - extraout_x8_01;
  func_0x0001000285a8(0x112d4f4e0,&UNK_10d9153c8);
  lStack_160 = *(long *)(lVar3 + -8);
  lStack_170 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_160 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (lVar13 - extraout_x8_01) - extraout_x8_02;
  lStack_190 = lVar11;
  func_0x000107c5f55c();
  uVar15 = 0x112d4f560;
  plStack_100 = (long *)param_2;
  func_0x0001000285a8(0x112d4f560,&UNK_10d915418);
  uVar16 = 0x112d4f568;
  func_0x00010002969c(0x112d4f568,&UNK_10d915420);
  uVar17 = 0x112d4f570;
  func_0x000100f79a9c(0x112d4f570,0x112d4f568,&UNK_10d915420,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
  puVar4 = &uStack_80;
  uStack_80 = uVar16;
  uStack_78 = uVar17;
  func_0x000107c614f4(puVar4,
                      PTR___s7SwiftUI4ViewPAAE18scrollTargetLayout9isEnabledQrSb_tFQOMQ_110349558,1)
  ;
  func_0x000107c5f28c(lVar12,lVar3,1,FUN_100f79204,&lStack_110,uVar15,puVar4);
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_70 = unaff_x20[4];
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  uStack_120 = unaff_x20[4];
  uVar15 = 0x112d4f558;
  func_0x0001000285a8(0x112d4f558,&UNK_10d915410);
  uStack_178 = uVar15;
  func_0x000107c5f734(&lStack_110);
  uVar15 = 0x112d4f4f8;
  func_0x000100f79a9c(0x112d4f4f8,0x112d4f4f0,&UNK_10d9153d8,
                      PTR___s7SwiftUI10ScrollViewVyxGAA0D0AAMc_110348700);
  puVar10 = PTR___sSiN_11034deb0;
  func_0x000107c5f628(lVar13,&lStack_110,0,0,1,lVar2,PTR___sSiN_11034deb0,uVar15,
                      PTR___sSiSHsWP_11034dec0);
  func_0x000107c61574(puStack_108);
  func_0x000107c61574(lStack_110);
  (**(code **)(lStack_188 + 8))(lVar12,lVar2);
  lVar5 = 0;
  func_0x000107c5f52c();
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = lVar11 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f528(lVar11);
  puStack_108 = puVar10;
  plVar6 = &lStack_110;
  lStack_110 = lVar2;
  plStack_100 = (long *)uVar15;
  func_0x000107c614f4(plVar6,
                      PTR___s7SwiftUI4ViewPAAE14scrollPosition2id6anchorQrAA7BindingVyqd__SgG_AA9UnitPointVSgtSHRd__lFQOMQ_1103494e8
                      ,1);
  lVar3 = lStack_148;
  lVar2 = lStack_190;
  func_0x000107c5f660(lStack_190,lVar11,lStack_148,lVar5,plVar6,
                      PTR___s7SwiftUI26PagingScrollTargetBehaviorVAA0deF0AAWP_110349180);
  (**(code **)(lVar12 + 8))(lVar11,lVar5);
  (**(code **)(lStack_180 + 8))(lVar13,lVar3);
  lVar7 = 0;
  func_0x000107c5f51c();
  lVar14 = *(long *)(lVar7 + -8);
  lVar12 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = lVar11 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f518(lVar11);
  func_0x000107c5f564();
  lVar13 = lVar12;
  func_0x000107c5f55c();
  uVar1 = 0;
  func_0x000107c5f560(0);
  lVar3 = lVar12;
  func_0x000107c5f560(lVar12);
  func_0x000107c5f560((uint)lVar3 & uVar1);
  uVar1 = uVar1 | (uint)lVar12;
  func_0x000107c5f560(uVar1);
  lVar3 = lVar13;
  func_0x000107c5f560(lVar13);
  func_0x000107c5f560((uint)lVar3 & uVar1);
  uVar8 = (ulong)(uVar1 | (uint)lVar13);
  func_0x000107c5f560(uVar8);
  puVar10 = PTR___s7SwiftUI26PagingScrollTargetBehaviorVAA0deF0AAWP_110349180;
  lStack_110 = lStack_148;
  plVar9 = &lStack_110;
  puStack_108 = (undefined *)lVar5;
  plStack_100 = plVar6;
  func_0x000107c614f4(plVar9,
                      PTR___s7SwiftUI4ViewPAAE20scrollTargetBehavioryQrqd__AA06ScrolleF0Rd__lFQOMQ_1103495a0
                      ,1);
  lVar12 = lStack_168;
  lVar3 = lStack_170;
  func_0x000107c5f638(lStack_168,lVar11,uVar8,lStack_170,plVar9);
  (**(code **)(lVar14 + 8))(lVar11,lVar7);
  (**(code **)(lStack_160 + 8))();
  func_0x000107c5f7ac();
  *(long *)(lVar11 + -0x10) = lVar2;
  *(long *)(lVar11 + -8) = lVar3;
  *(undefined1 *)(lVar11 + -0x18) = 0;
  *(undefined8 *)(lVar11 + -0x20) = 0x7ff0000000000000;
  *(undefined1 *)(lVar11 + -0x28) = 1;
  *(undefined8 *)(lVar11 + -0x30) = 0;
  func_0x000107c5f388(&lStack_110,0,1,0,1,0x7ff0000000000000,0,0,1);
  lVar2 = lStack_158;
  plVar6 = (long *)(lVar12 + *(int *)(lStack_158 + 0x24));
  plVar6[9] = lStack_c8;
  plVar6[8] = lStack_d0;
  plVar6[0xb] = lStack_b8;
  plVar6[10] = lStack_c0;
  plVar6[0xd] = lStack_a8;
  plVar6[0xc] = lStack_b0;
  plVar6[1] = (long)puStack_108;
  *plVar6 = lStack_110;
  plVar6[3] = (long)puVar10;
  plVar6[2] = (long)plStack_100;
  plVar6[5] = lStack_e8;
  plVar6[4] = lStack_f0;
  plVar6[7] = lStack_d8;
  plVar6[6] = lStack_e0;
  uStack_128 = uStack_78;
  uStack_130 = uStack_80;
  uStack_120 = uStack_70;
  func_0x000107c5f72c(&uStack_90,uStack_178);
  uStack_140 = uStack_90;
  uStack_138 = (undefined1)uStack_88;
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_98 = unaff_x20[6];
  uStack_a0 = unaff_x20[5];
  puVar10 = &UNK_11036f430;
  func_0x000107c613fc(&UNK_11036f430,0x48,7);
  uVar15 = *unaff_x20;
  uVar17 = unaff_x20[3];
  uVar16 = unaff_x20[2];
  *(undefined8 *)(puVar10 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar10 + 0x10) = uVar15;
  *(undefined8 *)(puVar10 + 0x28) = uVar17;
  *(undefined8 *)(puVar10 + 0x20) = uVar16;
  uVar15 = unaff_x20[4];
  *(undefined8 *)(puVar10 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar10 + 0x30) = uVar15;
  *(undefined8 *)(puVar10 + 0x40) = unaff_x20[6];
  func_0x000100f7991c(&uStack_90,&uStack_130,0x112d4f578,&UNK_10d915428);
  func_0x000100f7991c(&uStack_80,&uStack_130,0x112d4f558,&UNK_10d915410);
  func_0x000100f7991c(&uStack_a0,&uStack_130,0x112d4f580,&UNK_10d915430);
  uVar15 = 0x112d4f4d0;
  func_0x0001000285a8(0x112d4f4d0,&UNK_10d9153c0);
  uVar16 = uVar15;
  FUN_100f78f58();
  uVar17 = uVar16;
  FUN_100f790c4();
  lVar3 = lStack_150;
  func_0x000107c5f6b0(lStack_150,&uStack_140,0,0x100f7920c,puVar10,lVar2,uVar15,uVar16,uVar17);
  func_0x000107c61574(puVar10);
  func_0x000100f79260(lVar12,0x112d4f4c8,&UNK_10d9153b8);
  puVar10 = &UNK_11036f458;
  func_0x000107c613fc(&UNK_11036f458,0x48,7);
  uVar15 = *unaff_x20;
  uVar17 = unaff_x20[3];
  uVar16 = unaff_x20[2];
  *(undefined8 *)(puVar10 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar10 + 0x10) = uVar15;
  *(undefined8 *)(puVar10 + 0x28) = uVar17;
  *(undefined8 *)(puVar10 + 0x20) = uVar16;
  uVar15 = unaff_x20[4];
  *(undefined8 *)(puVar10 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar10 + 0x30) = uVar15;
  *(undefined8 *)(puVar10 + 0x40) = unaff_x20[6];
  lVar2 = 0x112d4f4b0;
  func_0x0001000285a8(0x112d4f4b0,&UNK_10d9153a8);
  puVar4 = (undefined8 *)(lVar3 + *(int *)(lVar2 + 0x24));
  *puVar4 = 0x100f79214;
  puVar4[1] = puVar10;
  puVar4[2] = 0;
  puVar4[3] = 0;
  func_0x000100f7991c(&uStack_90,&uStack_130,0x112d4f578,&UNK_10d915428);
  func_0x000100f7991c(&uStack_80,&uStack_130,0x112d4f558,&UNK_10d915410);
  func_0x000100f7991c(&uStack_a0,&uStack_130,0x112d4f580,&UNK_10d915430);
  return;
}



/* Entry: 100f7725c; end: 100f772b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7725c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + _DAT_1137ff0d0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 == (code *)0x0) {
    return;
  }
  uVar3 = puVar1[1];
  func_0x000107c6157c(uVar3);
  (*pcVar2)();
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 100f772b4; end: 100f7770b;  */

void FUN_100f772b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_450;
  undefined1 auStack_448 [8];
  undefined8 uStack_440;
  undefined1 auStack_438 [8];
  long alStack_430 [2];
  undefined8 *puStack_420;
  undefined *puStack_418;
  undefined1 auStack_410 [192];
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined1 uStack_340;
  long lStack_338;
  undefined1 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 uStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
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
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
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
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
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
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  lVar5 = 0;
  puStack_420 = param_1;
  func_0x000107c5eccc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar11 = (long)&puStack_420 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x000107c5eca0();
  lVar15 = *(long *)(lVar6 + -8);
  lVar5 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  func_0x000100f97554();
  func_0x000107c5ecc8(lVar11);
  func_0x000107c5eca4(lVar13,lVar5,param_4,lVar11);
  FUN_100f90c90(lVar14,5);
  (**(code **)(lVar15 + 8))(lVar13);
  lVar5 = lVar14;
  func_0x000107c5f5dc();
  func_0x000107c5f590();
  uVar9 = 0;
  lVar13 = lVar5;
  lVar15 = lVar6;
  func_0x000107c5f5c8();
  func_0x000100f795bc(lVar5,lVar6,lVar11);
  func_0x000107c6142c(param_6);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puStack_418 = puVar7;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  puVar8 = puVar7;
  uVar10 = param_2;
  uVar12 = uVar9;
  lVar6 = lVar13;
  func_0x000107c5f5d0();
  func_0x000107c61574(puVar7);
  func_0x000100f795bc(param_2,uVar9,lVar13);
  func_0x000107c6142c();
  func_0x000107c5f56c();
  lVar5 = lVar15;
  func_0x000107c5f7ac();
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_7f = 0;
  uStack_88 = 0;
  uStack_87 = 0;
  uStack_78 = 1;
  puStack_c0 = puVar8;
  uStack_b8 = uVar10;
  uStack_b0 = (char)uVar12;
  lStack_a8 = lVar6;
  uStack_a0 = (char)lVar15;
  *(long *)(lVar14 + -0x10) = lVar5;
  *(undefined8 *)(lVar14 + -8) = uVar9;
  *(undefined1 *)(lVar14 + -0x18) = 1;
  *(undefined8 *)(lVar14 + -0x20) = 0;
  *(undefined1 *)(lVar14 + -0x28) = 1;
  *(undefined8 *)(lVar14 + -0x30) = 0;
  func_0x000107c5f388(&uStack_130,0,1,0,1,0x7ff0000000000000,0,0,1);
  uStack_160 = CONCAT71(uStack_9f,uStack_a0);
  uStack_158 = uStack_98;
  uStack_148 = uStack_88;
  uStack_150 = uStack_90;
  uStack_13f = uStack_7f;
  uStack_138 = uStack_78;
  uStack_147 = uStack_87;
  uStack_140 = uStack_80;
  uStack_170 = CONCAT71(uStack_af,uStack_b0);
  uStack_178 = uStack_b8;
  puStack_180 = puStack_c0;
  lStack_168 = lStack_a8;
  uStack_320 = 0;
  uStack_328 = 0;
  uStack_310 = 0;
  uStack_318 = 0;
  uStack_308 = 1;
  puStack_350 = puVar8;
  uStack_348 = uVar10;
  uStack_340 = (char)uVar12;
  lStack_338 = lVar6;
  uStack_330 = (char)lVar15;
  func_0x000100f7991c(&puStack_c0,&puStack_240,0x112d4f490,&UNK_10d915340);
  func_0x000100f79964(&puStack_350,0x112d4f490,&UNK_10d915340);
  puVar7 = puStack_418;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  lVar5 = 0x112d4f618;
  func_0x0001000285a8(0x112d4f618,&UNK_10d9154b8);
  puVar4 = puStack_420;
  puVar1 = (undefined8 *)((long)puStack_420 + (long)*(int *)(lVar5 + 0x24));
  lVar5 = 0x112d4f648;
  func_0x0001000285a8(0x112d4f648,&UNK_10d9158b0);
  iVar3 = *(int *)(lVar5 + 0x34);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar13 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar13 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar13);
  uStack_278 = uStack_f8;
  uStack_280 = uStack_100;
  uStack_268 = uStack_e8;
  uStack_270 = uStack_f0;
  uStack_258 = uStack_d8;
  uStack_260 = uStack_e0;
  uStack_248 = uStack_c8;
  uStack_250 = uStack_d0;
  uStack_2b8 = CONCAT71(uStack_137,uStack_138);
  uStack_2c0 = CONCAT71(uStack_13f,uStack_140);
  uStack_2c8 = CONCAT71(uStack_147,uStack_148);
  uStack_1f8 = CONCAT71(uStack_137,uStack_138);
  uStack_200 = CONCAT71(uStack_13f,uStack_140);
  uStack_2a8 = uStack_128;
  uStack_2b0 = uStack_130;
  uStack_298 = uStack_118;
  uStack_2a0 = uStack_120;
  uStack_288 = uStack_108;
  uStack_290 = uStack_110;
  uStack_2f8 = uStack_178;
  puStack_300 = puStack_180;
  lStack_2e8 = lStack_168;
  uStack_2f0 = uStack_170;
  uStack_2d8 = uStack_158;
  uStack_2e0 = uStack_160;
  uStack_2d0 = uStack_150;
  *puVar1 = puVar7;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x38)) = 0x100;
  puVar4[0x11] = uStack_f8;
  puVar4[0x10] = uStack_100;
  puVar4[0x13] = uStack_e8;
  puVar4[0x12] = uStack_f0;
  puVar4[0x15] = uStack_d8;
  puVar4[0x14] = uStack_e0;
  puVar4[0x17] = uStack_c8;
  puVar4[0x16] = uStack_d0;
  puVar4[9] = CONCAT71(uStack_137,uStack_138);
  puVar4[8] = CONCAT71(uStack_13f,uStack_140);
  puVar4[0xb] = uStack_128;
  puVar4[10] = uStack_130;
  puVar4[0xd] = uStack_118;
  puVar4[0xc] = uStack_120;
  puVar4[0xf] = uStack_108;
  puVar4[0xe] = uStack_110;
  puVar4[1] = uStack_178;
  *puVar4 = puStack_180;
  puVar4[3] = lStack_168;
  puVar4[2] = uStack_170;
  uStack_208 = CONCAT71(uStack_147,uStack_148);
  puVar4[5] = uStack_158;
  puVar4[4] = uStack_160;
  puVar4[7] = CONCAT71(uStack_147,uStack_148);
  puVar4[6] = uStack_150;
  uStack_1b8 = uStack_f8;
  uStack_1c0 = uStack_100;
  uStack_1a8 = uStack_e8;
  uStack_1b0 = uStack_f0;
  uStack_198 = uStack_d8;
  uStack_1a0 = uStack_e0;
  uStack_188 = uStack_c8;
  uStack_190 = uStack_d0;
  uStack_1e8 = uStack_128;
  uStack_1f0 = uStack_130;
  uStack_1d8 = uStack_118;
  uStack_1e0 = uStack_120;
  uStack_1c8 = uStack_108;
  uStack_1d0 = uStack_110;
  uStack_238 = uStack_178;
  puStack_240 = puStack_180;
  lStack_228 = lStack_168;
  uStack_230 = uStack_170;
  uStack_218 = uStack_158;
  uStack_220 = uStack_160;
  uStack_210 = uStack_150;
  func_0x000100f7991c(&puStack_300,auStack_410,0x112d4f630,&UNK_10d9154c0);
  func_0x000100f79964(&puStack_240,0x112d4f630,&UNK_10d9154c0);
  return;
}



/* Entry: 100f7770c; end: 100f777af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7770c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + _DAT_1137ff0c8);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 != (code *)0x0) {
    uVar4 = puVar1[1];
    uStack_48 = *(undefined8 *)(param_1 + 0x18);
    uStack_50 = *(undefined8 *)(param_1 + 0x10);
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c6157c(uVar4);
    func_0x0001000285a8(0x112d4f558,&UNK_10d915410);
    func_0x000107c5f72c(&uStack_60);
    uVar2 = 0;
    if (cStack_58 != '\x01') {
      uVar2 = uStack_60;
    }
    (*pcVar3)(uVar2);
    FUN_100c9ca7c(pcVar3,uVar4);
  }
  return;
}



/* Entry: 100f777b0; end: 100f78023;  */

void FUN_100f777b0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_270;
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  long alStack_250 [2];
  undefined1 auStack_240 [8];
  undefined8 *puStack_238;
  undefined *puStack_230;
  long lStack_228;
  undefined8 auStack_220 [10];
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  long lStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
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
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  
  lVar5 = 0;
  puStack_238 = param_1;
  lStack_228 = param_3;
  func_0x000107c5eccc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar10 = auStack_240 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x000107c5eca0();
  lVar15 = *(long *)(lVar6 + -8);
  lVar5 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  func_0x000100f97574();
  func_0x000107c5ecc8(puVar10);
  func_0x000107c5eca4(lVar13,lVar5,param_4,puVar10);
  FUN_100f90c90(lVar14,5);
  (**(code **)(lVar15 + 8))(lVar13);
  lVar5 = lVar14;
  func_0x000107c5f5dc();
  func_0x000107c5f590();
  uVar9 = 0;
  lVar13 = lVar5;
  lVar15 = lVar6;
  func_0x000107c5f5c8();
  func_0x000100f795bc(lVar5,lVar6,puVar10);
  func_0x000107c6142c(param_6);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puStack_230 = puVar7;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  puVar8 = puVar7;
  uVar12 = param_2;
  uVar11 = uVar9;
  lVar6 = lVar13;
  func_0x000107c5f5d0();
  func_0x000107c61574(puVar7);
  func_0x000100f795bc(param_2,uVar9,lVar13);
  func_0x000107c6142c();
  func_0x000107c5f56c();
  lVar5 = lVar15;
  func_0x000107c5f7ac();
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_7f = 0;
  uStack_88 = 0;
  uStack_87 = 0;
  uStack_78 = 1;
  puStack_c0 = puVar8;
  uStack_b8 = uVar12;
  uStack_b0 = (char)uVar11;
  lStack_a8 = lVar6;
  uStack_a0 = (char)lVar15;
  *(long *)(lVar14 + -0x10) = lVar5;
  *(undefined8 *)(lVar14 + -8) = uVar9;
  *(undefined1 *)(lVar14 + -0x18) = 1;
  *(undefined8 *)(lVar14 + -0x20) = 0;
  *(undefined1 *)(lVar14 + -0x28) = 1;
  *(undefined8 *)(lVar14 + -0x30) = 0;
  func_0x000107c5f388(&uStack_130,0,1,0,1,0x7ff0000000000000,0,0,1);
  uStack_160 = CONCAT71(uStack_9f,uStack_a0);
  uStack_158 = uStack_98;
  uStack_148 = uStack_88;
  uStack_150 = uStack_90;
  uStack_13f = uStack_7f;
  uStack_138 = uStack_78;
  uStack_147 = uStack_87;
  uStack_140 = uStack_80;
  uStack_170 = CONCAT71(uStack_af,uStack_b0);
  uStack_178 = uStack_b8;
  puStack_180 = puStack_c0;
  lStack_168 = lStack_a8;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_188 = 1;
  puStack_1d0 = puVar8;
  uStack_1c8 = uVar12;
  uStack_1c0 = (char)uVar11;
  lStack_1b8 = lVar6;
  uStack_1b0 = (char)lVar15;
  func_0x000100f7991c(&puStack_c0,auStack_220,0x112d4f490,&UNK_10d915340);
  func_0x000100f79964(&puStack_1d0,0x112d4f490,&UNK_10d915340);
  uVar12 = *(undefined8 *)(lStack_228 + 8);
  puVar7 = &UNK_10d915358;
  func_0x000107c614e0(&UNK_10d915358);
  puVar8 = &UNK_10d915380;
  func_0x000107c614e0(&UNK_10d915380);
  func_0x000107c5f20c(auStack_220,uVar12,puVar7,puVar8);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar8);
  FUN_100f78e70(auStack_220[0]);
  puVar7 = puStack_230;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  lVar5 = 0x112d4f618;
  func_0x0001000285a8(0x112d4f618,&UNK_10d9154b8);
  puVar4 = puStack_238;
  puVar1 = (undefined8 *)((long)puStack_238 + (long)*(int *)(lVar5 + 0x24));
  lVar5 = 0x112d4f648;
  func_0x0001000285a8(0x112d4f648,&UNK_10d9158b0);
  iVar3 = *(int *)(lVar5 + 0x34);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar13 = 0;
  func_0x000107c5f41c();
  (**(code **)(*(long *)(lVar13 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar13);
  *puVar1 = puVar7;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x38)) = 0x100;
  puVar4[0x11] = uStack_f8;
  puVar4[0x10] = uStack_100;
  puVar4[0x13] = uStack_e8;
  puVar4[0x12] = uStack_f0;
  puVar4[0x15] = uStack_d8;
  puVar4[0x14] = uStack_e0;
  puVar4[0x17] = uStack_c8;
  puVar4[0x16] = uStack_d0;
  puVar4[9] = CONCAT71(uStack_137,uStack_138);
  puVar4[8] = CONCAT71(uStack_13f,uStack_140);
  puVar4[0xb] = uStack_128;
  puVar4[10] = uStack_130;
  puVar4[0xd] = uStack_118;
  puVar4[0xc] = uStack_120;
  puVar4[0xf] = uStack_108;
  puVar4[0xe] = uStack_110;
  puVar4[1] = uStack_178;
  *puVar4 = puStack_180;
  puVar4[3] = lStack_168;
  puVar4[2] = uStack_170;
  puVar4[5] = uStack_158;
  puVar4[4] = uStack_160;
  puVar4[7] = CONCAT71(uStack_147,uStack_148);
  puVar4[6] = uStack_150;
  return;
}



/* Entry: 100f78024; end: 100f7824b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f78024(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte abStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uStack_48;
  func_0x000100f7991c(&uStack_38,abStack_68,0x112d4f590,&UNK_10d915440);
  uVar3 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(abStack_68);
  if ((abStack_68[0] & 1) == 0) {
    func_0x000100f79964(&uStack_50,0x112d4f580,&UNK_10d915430);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + _DAT_1137ff0d8);
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
      uVar3 = puVar1[1];
      func_0x000107c6157c(uVar3);
      (*pcVar2)();
      FUN_100c9ca7c(pcVar2,uVar3);
    }
  }
  else {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    abStack_68[0] = 0;
    func_0x000107c5f730(abStack_68,uVar3);
    func_0x000100f79964(&uStack_50,0x112d4f580,&UNK_10d915430);
  }
  return;
}



/* Entry: 100f7824c; end: 100f782b7;  */

void FUN_100f7824c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  uStack_30 = unaff_x20[6];
  func_0x000107c5f438();
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar1 = 0x112d4f480;
  func_0x0001000285a8(0x112d4f480,&UNK_10d915330);
  FUN_100f75c14((long)param_1 + (long)*(int *)(lVar1 + 0x2c),&uStack_60);
  return;
}



/* Entry: 100f782b8; end: 100f7841f;  */

void FUN_100f782b8(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_168 [64];
  undefined *puStack_128;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined *puStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_de;
  undefined8 uStack_d6;
  undefined8 uStack_ce;
  undefined8 uStack_c6;
  undefined8 uStack_be;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined6 uStack_9e;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined1 auStack_70 [48];
  
  lVar3 = *param_2;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c5f6c0();
  puVar2 = puVar1;
  if (lVar3 != param_4) {
    func_0x000107c5f6d4(0x3fd3333333333333);
    func_0x000107c61574(puVar1);
  }
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(auStack_70,0x401c000000000000,0,0x401c000000000000,0,puVar1,param_3);
  uStack_98 = (undefined2)auStack_70._8_8_;
  uStack_96 = SUB86(auStack_70._8_8_,2);
  uStack_a0 = (undefined2)auStack_70._0_8_;
  uStack_9e = SUB86(auStack_70._0_8_,2);
  uStack_88 = (undefined2)auStack_70._24_8_;
  uStack_86 = SUB86(auStack_70._24_8_,2);
  uStack_90 = (undefined2)auStack_70._16_8_;
  uStack_8e = SUB86(auStack_70._16_8_,2);
  uStack_78 = (undefined2)auStack_70._40_8_;
  uStack_76 = SUB86(auStack_70._40_8_,2);
  uStack_80 = (undefined2)auStack_70._32_8_;
  uStack_7e = SUB86(auStack_70._32_8_,2);
  uStack_120 = 0x100;
  uStack_116 = uStack_9e;
  uStack_110 = uStack_98;
  uStack_11e = uStack_a6;
  uStack_118 = uStack_a0;
  uStack_106 = uStack_8e;
  uStack_100 = uStack_88;
  uStack_10e = uStack_96;
  uStack_108 = uStack_90;
  uStack_f6 = uStack_7e;
  uStack_fe = uStack_86;
  uStack_f8 = uStack_80;
  uStack_e0 = 0x100;
  uStack_d6 = CONCAT26(uStack_98,uStack_9e);
  uStack_de = CONCAT26(uStack_a0,uStack_a6);
  uStack_c6 = CONCAT26(uStack_88,uStack_8e);
  uStack_ce = CONCAT26(uStack_90,uStack_96);
  uStack_be = CONCAT26(uStack_80,uStack_86);
  uStack_b6 = uStack_7e;
  uStack_b0 = uStack_78;
  puStack_128 = puVar2;
  uStack_f0 = uStack_78;
  uStack_ee = uStack_76;
  puStack_e8 = puVar2;
  uStack_ae = uStack_76;
  func_0x000100f7991c(&puStack_128,auStack_168,0x112d4f680,&UNK_10d915678);
  func_0x000100f79964(&puStack_e8,0x112d4f680,&UNK_10d915678);
  param_1[1] = CONCAT62(uStack_11e,uStack_120);
  *param_1 = puStack_128;
  param_1[3] = CONCAT62(uStack_10e,uStack_110);
  param_1[2] = CONCAT62(uStack_116,uStack_118);
  param_1[5] = CONCAT62(uStack_fe,uStack_100);
  param_1[4] = CONCAT62(uStack_106,uStack_108);
  param_1[7] = CONCAT62(uStack_ee,uStack_f0);
  param_1[6] = CONCAT62(uStack_f6,uStack_f8);
  return;
}



/* Entry: 100f78420; end: 100f7855f;  */

void FUN_100f78420(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *unaff_x20;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar13 = *unaff_x20;
  lVar2 = unaff_x20[1];
  func_0x000107c5f410();
  *param_1 = param_2;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  if (-1 < lVar13) {
    lVar5 = 0x112d4f670;
    func_0x0001000285a8(0x112d4f670,&UNK_10d915648);
    iVar3 = *(int *)(lVar5 + 0x2c);
    uStack_60 = 0;
    puVar6 = &UNK_10d915658;
    lStack_58 = lVar13;
    func_0x000107c614e0(&UNK_10d915658);
    puVar7 = &UNK_11036f670;
    func_0x000107c613fc(&UNK_11036f670,0x20,7);
    *(long *)(puVar7 + 0x10) = lVar13;
    *(long *)(puVar7 + 0x18) = lVar2;
    uVar8 = 0x112d4f678;
    func_0x0001000285a8(0x112d4f678,&UNK_10d915670);
    uVar9 = 0x112d4f680;
    func_0x0001000285a8(0x112d4f680,&UNK_10d915678);
    uVar10 = uVar9;
    FUN_100f797cc();
    uVar11 = uVar10;
    FUN_100f79884();
    puVar12 = &uStack_60;
    func_0x000107c5f788((long)param_1 + (long)iVar3,puVar12,puVar6,0x100f797c4,puVar7,uVar8,uVar9,
                        uVar10,PTR___sSiSHsWP_11034dec0,uVar11);
    func_0x000107c5f7d4(0x3fc999999999999a);
    lVar13 = 0x112d4f6b0;
    func_0x0001000285a8(0x112d4f6b0,&UNK_10d915688);
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar13 + 0x24));
    *plVar1 = (long)puVar12;
    plVar1[1] = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100f78560);
  (*pcVar4)();
}



/* Entry: 100f78560; end: 100f785a3;  */

void FUN_100f78560(void)

{
  long unaff_x20;
  
  func_0x0001000b44c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f785a4; end: 100f785ff;  */

long FUN_100f785a4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100f78600; end: 100f786ff;  */

undefined8 * FUN_100f78600(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[4];
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[6];
  param_1[6] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 100f78700; end: 100f7876b;  */

undefined8 * FUN_100f78700(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c61574(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61574(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 100f7876c; end: 100f7881f;  */

int FUN_100f7876c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f78820; end: 100f78973;  */

undefined * FUN_100f78820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126bb2a0;
  func_0x000107c610f8(PTR_PTR_1126bb2a0);
  func_0x000107c453e4();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar2);
  func_0x000107c3fa94(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c53840(puVar2);
  func_0x000107c61170(puVar2);
  puVar3 = PTR_PTR_1126b2720;
  func_0x000107c61168(PTR_PTR_1126b2720);
  func_0x000107c61174(puVar2);
  func_0x00010006c00c(param_2,param_3);
  uVar4 = param_2;
  func_0x000107c5ee20(param_2,param_3);
  func_0x000107c51770(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c55258(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x0001000285a8(0x112d4f6b8,&UNK_10d915690);
  func_0x000107c5f530(&lStack_48);
  uVar4 = *(undefined8 *)(lStack_48 + 0x10);
  uVar1 = *(undefined8 *)(lStack_48 + 0x18);
  *(undefined8 *)(lStack_48 + 0x10) = param_2;
  *(undefined8 *)(lStack_48 + 0x18) = param_3;
  func_0x0001000b44c0(uVar4,uVar1);
  func_0x000107c61574(lStack_48);
  return puVar2;
}



/* Entry: 100f78974; end: 100f78b53;  */

void FUN_100f78974(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lStack_58;
  
  uVar5 = 0x112d4f6b8;
  func_0x0001000285a8(0x112d4f6b8,&UNK_10d915690);
  func_0x000107c5f530(&lStack_58);
  lVar4 = lStack_58;
  uVar1 = *(ulong *)(lStack_58 + 0x10);
  uVar2 = *(ulong *)(lStack_58 + 0x18);
  FUN_100de78a0(uVar1,uVar2);
  func_0x000107c61574(lVar4);
  if (uVar2 >> 0x3c < 0xf) {
    if (param_4 >> 0x3c < 0xf) {
      func_0x00010006c00c(param_3,param_4);
      FUN_100de78a0(uVar1,uVar2);
      func_0x00010006c00c(param_3,param_4);
      uVar7 = uVar1;
      FUN_100e25fcc(uVar1,uVar2,param_3,param_4);
      func_0x0001000b44c0(uVar1,uVar2);
      func_0x0001000b44c0(param_3,param_4);
      func_0x0001000b44c0(uVar1,uVar2);
      if ((uVar7 & 1) != 0) {
        func_0x00010006c090(param_3,param_4);
        return;
      }
      goto LAB_100f78a4c;
    }
  }
  else if (0xe < param_4 >> 0x3c) {
    func_0x00010006c00c(param_3,param_4);
    func_0x0001000b44c0(uVar1,uVar2);
    return;
  }
  func_0x00010006c00c(param_3,param_4);
  func_0x00010006c00c(param_3,param_4);
  func_0x0001000b44c0(uVar1,uVar2);
  func_0x0001000b44c0(param_3,param_4);
LAB_100f78a4c:
  func_0x000107c5f530(&lStack_58,uVar5);
  uVar5 = *(undefined8 *)(lStack_58 + 0x10);
  uVar3 = *(undefined8 *)(lStack_58 + 0x18);
  *(undefined8 *)(lStack_58 + 0x10) = param_3;
  *(ulong *)(lStack_58 + 0x18) = param_4;
  func_0x0001000b44c0(uVar5,uVar3);
  func_0x000107c61574(lStack_58);
  puVar6 = PTR_PTR_1126b2720;
  func_0x000107c61168(PTR_PTR_1126b2720);
  func_0x000107c5ee20(param_3,param_4);
  func_0x000107c51770(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c55258(param_1);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 100f78b54; end: 100f78b67;  */

undefined * FUN_100f78b54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  long lStack_48;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  puVar4 = PTR_PTR_1126bb2a0;
  func_0x000107c610f8(PTR_PTR_1126bb2a0);
  func_0x000107c453e4();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar4);
  func_0x000107c3fa94(puVar5);
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c53840(puVar4);
  func_0x000107c61170(puVar4);
  puVar5 = PTR_PTR_1126b2720;
  func_0x000107c61168(PTR_PTR_1126b2720);
  func_0x000107c61174(puVar4);
  func_0x00010006c00c(uVar1,uVar3);
  uVar6 = uVar1;
  func_0x000107c5ee20(uVar1,uVar3);
  func_0x000107c51770(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c55258(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x0001000285a8(0x112d4f6b8,&UNK_10d915690);
  func_0x000107c5f530(&lStack_48);
  uVar6 = *(undefined8 *)(lStack_48 + 0x10);
  uVar2 = *(undefined8 *)(lStack_48 + 0x18);
  *(undefined8 *)(lStack_48 + 0x10) = uVar1;
  *(undefined8 *)(lStack_48 + 0x18) = uVar3;
  func_0x0001000b44c0(uVar6,uVar2);
  func_0x000107c61574(lStack_48);
  return puVar4;
}



/* Entry: 100f78b68; end: 100f78ba7;  */

void FUN_100f78b68(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100f78584();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0xf000000000000000;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 100f78ba8; end: 100f78bdb;  */

void FUN_100f78ba8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb63e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE19_identifiedViewTree2inAA011_IdentifiedfG0O0C4TypeQz_tF_110348ea0
  )();
  return;
}



/* Entry: 100f78bdc; end: 100f78bef;  */

void FUN_100f78bdc(void)

{
  func_0x000107c5f46c();
  return;
}



/* Entry: 100f78bf0; end: 100f78c8f;  */

void FUN_100f78bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100f799a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb641c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE9_makeView4view6inputsAA01_F7OutputsVAA11_GraphValueVyxG_AA01_F6InputsVtFZ_110348ec8
  )(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 100f78c90; end: 100f78cb3;  */

void FUN_100f78c90(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_100f799a4();
  func_0x000107c5f480(param_1,uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f78cb4);
  (*pcVar1)();
}



/* Entry: 100f78cb4; end: 100f78e6f;  */

undefined * FUN_100f78cb4(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  long lVar17;
  
  lVar8 = *(long *)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar8 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    puVar16 = (undefined1 *)(param_1 + 0x31);
    lVar17 = 0;
    plVar15 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      plVar15 = plVar15 + 4;
      lVar13 = *(long *)(puVar16 + -0x11);
      lVar14 = *(long *)(puVar16 + -9);
      uVar3 = puVar16[-1];
      uVar2 = *puVar16;
      if (lVar11 == 0) {
        uVar9 = *(ulong *)(puVar12 + 0x18);
        if ((long)((uVar9 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100f78e6c);
          (*pcVar4)();
        }
        uVar10 = uVar9 & 0xfffffffffffffffe;
        if ((long)uVar9 < 2) {
          uVar10 = 1;
        }
        puVar5 = (undefined *)0x112d4f608;
        func_0x0001000285a8(0x112d4f608,&UNK_10d9154a8);
        func_0x000107c613fc();
        func_0x00010006c00c(lVar13,lVar14);
        puVar6 = puVar5;
        func_0x000107c610a4();
        puVar1 = puVar6 + -1;
        if (0x1f < (long)puVar6) {
          puVar1 = puVar6 + -0x20;
        }
        *(ulong *)(puVar5 + 0x10) = uVar10;
        *(long *)(puVar5 + 0x18) = ((long)puVar1 >> 5) << 1;
        lVar7 = (*(ulong *)(puVar12 + 0x18) >> 1) * 0x20;
        lVar11 = ((long)puVar1 >> 5 & 0x7fffffffffffffffU) - (*(ulong *)(puVar12 + 0x18) >> 1);
        plVar15 = (long *)(puVar5 + 0x20 + lVar7);
        if (*(long *)(puVar12 + 0x10) != 0) {
          if ((puVar5 != puVar12) || (puVar12 + lVar7 + 0x20 <= puVar5 + 0x20)) {
            func_0x000107c610b8();
          }
          *(undefined8 *)(puVar12 + 0x10) = 0;
        }
        func_0x000107c61574(puVar12);
        puVar12 = puVar5;
      }
      else {
        func_0x00010006c00c(lVar13,lVar14);
      }
      if (SBORROW8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100f78e68);
        (*pcVar4)();
      }
      lVar11 = lVar11 + -1;
      lVar7 = lVar17 + 1;
      puVar16 = puVar16 + 0x18;
      *plVar15 = lVar17;
      plVar15[1] = lVar13;
      plVar15[2] = lVar14;
      *(undefined1 *)(plVar15 + 3) = uVar3;
      *(undefined1 *)((long)plVar15 + 0x19) = uVar2;
      lVar17 = lVar7;
    } while (lVar8 != lVar7);
  }
  if (1 < *(ulong *)(puVar12 + 0x18)) {
    uVar9 = *(ulong *)(puVar12 + 0x18) >> 1;
    if (SBORROW8(uVar9,lVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100f78e70);
      (*pcVar4)();
    }
    *(ulong *)(puVar12 + 0x10) = uVar9 - lVar11;
  }
  return puVar12;
}



/* Entry: 100f78e70; end: 100f78e83;  */

void FUN_100f78e70(undefined8 param_1,byte param_2)

{
  if (param_2 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 100f78e84; end: 100f78f57;  */

void FUN_100f78e84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam0000000112d4f4c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4f4b0;
  func_0x00010002969c(0x112d4f4b0,&UNK_10d9153a8);
  uVar2 = 0x112d4f4c8;
  func_0x00010002969c(0x112d4f4c8,&UNK_10d9153b8);
  uVar3 = 0x112d4f4d0;
  func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
  uVar4 = uVar3;
  FUN_100f78f58();
  uVar5 = uVar4;
  FUN_100f790c4();
  puVar6 = &uStack_50;
  uStack_50 = uVar2;
  uStack_48 = uVar3;
  uStack_40 = uVar4;
  uStack_38 = uVar5;
  func_0x000107c614f4(puVar6,
                      PTR___s7SwiftUI4ViewPAAE8onChange2of7initial_Qrqd___SbyyctSQRd__lFQOMQ_110349680
                      ,1);
  puStack_58 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
  puVar7 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_60 = puVar6;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_60);
  puRam0000000112d4f4c0 = puVar7;
  return;
}



/* Entry: 100f78f58; end: 100f790c3;  */

void FUN_100f78f58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined *puStack_58;
  
  if (puRam0000000112d4f4d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4f4c8;
  func_0x00010002969c(0x112d4f4c8,&UNK_10d9153b8);
  uVar2 = 0x112d4f4e0;
  func_0x00010002969c(0x112d4f4e0,&UNK_10d9153c8);
  uVar3 = 0x112d4f4e8;
  func_0x00010002969c(0x112d4f4e8,&UNK_10d9153d0);
  uVar4 = 0xff;
  func_0x000107c5f52c();
  uVar5 = 0x112d4f4f0;
  func_0x00010002969c(0x112d4f4f0,&UNK_10d9153d8);
  uVar6 = 0x112d4f4f8;
  func_0x000100f79a9c(0x112d4f4f8,0x112d4f4f0,&UNK_10d9153d8,
                      PTR___s7SwiftUI10ScrollViewVyxGAA0D0AAMc_110348700);
  puStack_68 = (undefined8 *)PTR___sSiN_11034deb0;
  puStack_58 = PTR___sSiSHsWP_11034dec0;
  puVar7 = &uStack_70;
  uStack_70 = uVar5;
  puStack_60 = (undefined8 *)uVar6;
  func_0x000107c614f4(puVar7,
                      PTR___s7SwiftUI4ViewPAAE14scrollPosition2id6anchorQrAA7BindingVyqd__SgG_AA9UnitPointVSgtSHRd__lFQOMQ_1103494e8
                      ,1);
  puStack_58 = PTR___s7SwiftUI26PagingScrollTargetBehaviorVAA0deF0AAWP_110349180;
  puVar8 = &uStack_70;
  uStack_70 = uVar3;
  puStack_68 = (undefined8 *)uVar4;
  puStack_60 = puVar7;
  func_0x000107c614f4(puVar8,
                      PTR___s7SwiftUI4ViewPAAE20scrollTargetBehavioryQrqd__AA06ScrolleF0Rd__lFQOMQ_1103495a0
                      ,1);
  puVar7 = &uStack_70;
  uStack_70 = uVar2;
  puStack_68 = puVar8;
  func_0x000107c614f4(puVar7,
                      PTR___s7SwiftUI4ViewPAAE16scrollIndicators_4axesQrAA25ScrollIndicatorVisibilityV_AA4AxisO3SetVtFQOMQ_110349518
                      ,1);
  puStack_78 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar9 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_80 = puVar7;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_80);
  puRam0000000112d4f4d8 = puVar9;
  return;
}



/* Entry: 100f790c4; end: 100f7912b;  */

void FUN_100f790c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (puRam0000000112d4f500 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4f4d0;
  func_0x00010002969c(0x112d4f4d0,&UNK_10d9153c0);
  puStack_18 = PTR___sSiSQsWP_11034ded0;
  puVar2 = PTR___sxSgSQsSQRzlMc_11034f190;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&puStack_18);
  puRam0000000112d4f500 = puVar2;
  return;
}



/* Entry: 100f7912c; end: 100f791c3;  */

void FUN_100f7912c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112d4f510 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4f518;
  func_0x00010002969c(0x112d4f518,&UNK_10d9153e0);
  uVar2 = uVar1;
  FUN_100f791c4();
  uVar3 = 0x112d4f528;
  func_0x000100f79a9c(0x112d4f528,0x112d4f530,&UNK_10d915c20,
                      PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_110348bf0);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d4f510 = puVar4;
  return;
}



/* Entry: 100f791c4; end: 100f79203;  */

void FUN_100f791c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4f520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9167e8;
  func_0x000107c61520(&UNK_10d9167e8,&UNK_110370aa8);
  puRam0000000112d4f520 = puVar1;
  return;
}



/* Entry: 100f79204; end: 100f79227;  */

void FUN_100f79204(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 auStack_e0 [2];
  long alStack_d0 [2];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  lVar3 = 0x112d4f568;
  alStack_d0[1] = param_1;
  func_0x0001000285a8(0x112d4f568,&UNK_10d915420);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  plVar9 = (long *)((long)alStack_d0 + lVar2);
  func_0x000107c5f410();
  *plVar9 = lVar4;
  *(undefined8 *)(auStack_c0 + lVar2 + -8) = 0;
  auStack_c0[lVar2] = 0;
  lVar4 = 0x112d4f598;
  func_0x0001000285a8(0x112d4f598,&UNK_10d915448);
  alStack_d0[0] = (long)*(int *)(lVar4 + 0x2c);
  FUN_100f78cb4();
  puVar5 = &UNK_10d915450;
  uStack_a8 = uVar10;
  func_0x000107c614e0(&UNK_10d915450);
  uStack_68 = puVar1[1];
  uStack_70 = *puVar1;
  uStack_88 = puVar1[3];
  uStack_90 = puVar1[2];
  uStack_80 = puVar1[4];
  uStack_98 = puVar1[6];
  uStack_a0 = puVar1[5];
  puVar6 = &UNK_11036f480;
  func_0x000107c613fc(&UNK_11036f480,0x48,7);
  uVar10 = *puVar1;
  uVar12 = puVar1[3];
  uVar11 = puVar1[2];
  *(undefined8 *)(puVar6 + 0x18) = puVar1[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 *)(puVar6 + 0x28) = uVar12;
  *(undefined8 *)(puVar6 + 0x20) = uVar11;
  uVar10 = puVar1[4];
  *(undefined8 *)(puVar6 + 0x38) = puVar1[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar10;
  *(undefined8 *)(puVar6 + 0x40) = puVar1[6];
  puVar7 = &UNK_11036f4a8;
  func_0x000107c613fc(&UNK_11036f4a8,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x100f7921c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  func_0x000100f7991c(&uStack_70,auStack_c0,0x112d4f578,&UNK_10d915428);
  func_0x000100f7991c(&uStack_90,auStack_c0,0x112d4f558,&UNK_10d915410);
  func_0x000100f7991c(&uStack_a0,auStack_c0,0x112d4f580,&UNK_10d915430);
  uVar10 = 0x112d4f5a0;
  func_0x0001000285a8(0x112d4f5a0,&UNK_10d915470);
  uVar11 = 0x112d4f5a8;
  func_0x0001000285a8(0x112d4f5a8,&UNK_10d915478);
  uVar12 = 0x112d4f5b0;
  func_0x000100f79a9c(0x112d4f5b0,0x112d4f5a0,&UNK_10d915470,PTR___sSayxGSksMc_11034dd18);
  uVar8 = 0x112d4f5b8;
  func_0x000100f79a9c(0x112d4f5b8,0x112d4f5a8,&UNK_10d915478,
                      PTR___s7SwiftUI6IDViewVyxq_GAA4ViewAAMc_110349888);
  *(undefined8 *)((long)auStack_e0 + lVar2) = uVar8;
  func_0x000107c5f788((long)plVar9 + alStack_d0[0],&uStack_a8,puVar5,0x100f79228,puVar7,uVar10,
                      uVar11,uVar12,PTR___sSiSHsWP_11034dec0);
  uVar10 = 0x112d4f570;
  func_0x000100f79a9c(0x112d4f570,0x112d4f568,&UNK_10d915420,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
  func_0x000107c5f64c(alStack_d0[1],1,lVar3,uVar10);
  func_0x000100f79260(plVar9,0x112d4f568,&UNK_10d915420);
  return;
}



/* Entry: 100f79228; end: 100f793cf;  */

void FUN_100f79228(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2],*(undefined2 *)(param_1 + 3));
  return;
}



/* Entry: 100f793d0; end: 100f793d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f793d0(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_1137ff0d0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 == (code *)0x0) {
    return;
  }
  uVar3 = puVar1[1];
  func_0x000107c6157c(uVar3);
  (*pcVar2)();
  if (pcVar2 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 100f793d8; end: 100f7948f;  */

void FUN_100f793d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112d4f620 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4f618;
  func_0x00010002969c(0x112d4f618,&UNK_10d9154b8);
  uVar2 = 0x112d4f628;
  FUN_100f79490(0x112d4f628,0x112d4f630,&UNK_10d9154c0,FUN_100f79500);
  uVar3 = 0x112d4f640;
  func_0x000100f79a9c(0x112d4f640,0x112d4f648,&UNK_10d9158b0,
                      PTR___s7SwiftUI34_InsettableBackgroundShapeModifierVyxq_GAA04ViewF0AAMc_110349268
                     );
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d4f620 = puVar4;
  return;
}



/* Entry: 100f79490; end: 100f794ff;  */

void FUN_100f79490(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar1;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 100f79500; end: 100f7956f;  */

void FUN_100f79500(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam0000000112d4f638 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4f490;
  func_0x00010002969c(0x112d4f490,&UNK_10d915340);
  puStack_20 = PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8;
  puStack_18 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_20);
  puRam0000000112d4f638 = puVar2;
  return;
}



/* Entry: 100f79570; end: 100f79577;  */

void FUN_100f79570(byte *param_1)

{
  long unaff_x20;
  
  *param_1 = *param_1 & (*(byte *)(unaff_x20 + 0x10) ^ 0xff) & 1;
  return;
}



/* Entry: 100f79578; end: 100f795ab;  */

void FUN_100f79578(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100f795ac; end: 100f79637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f795ac(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_1137ff0c8);
  pcVar3 = (code *)*puVar1;
  if (pcVar3 != (code *)0x0) {
    uVar4 = puVar1[1];
    uStack_48 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_50 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_40 = *(undefined8 *)(unaff_x20 + 0x30);
    func_0x000107c6157c(uVar4);
    func_0x0001000285a8(0x112d4f558,&UNK_10d915410);
    func_0x000107c5f72c(&uStack_60);
    uVar2 = 0;
    if (cStack_58 != '\x01') {
      uVar2 = uStack_60;
    }
    (*pcVar3)(uVar2);
    FUN_100c9ca7c(pcVar3,uVar4);
  }
  return;
}



/* Entry: 100f79638; end: 100f7967b;  */

undefined8 * FUN_100f79638(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  return param_1;
}



/* Entry: 100f7967c; end: 100f796b3;  */

undefined8 * FUN_100f7967c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 100f796b4; end: 100f79773;  */

int FUN_100f796b4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100f79774; end: 100f797b3;  */

void FUN_100f79774(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4f668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d915520;
  func_0x000107c61520(&UNK_10d915520,&UNK_11036f648);
  puRam0000000112d4f668 = puVar1;
  return;
}



/* Entry: 100f797b4; end: 100f797cb;  */

void FUN_100f797b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e61bc54,1);
  return;
}



/* Entry: 100f797cc; end: 100f79843;  */

void FUN_100f797cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112d4f688 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4f678;
  func_0x00010002969c(0x112d4f678,&UNK_10d915670);
  uVar2 = uVar1;
  FUN_100f79844();
  puStack_30 = PTR___sSiSxsWP_11034dee8;
  puVar3 = PTR___sSnyxGSksSxRzSZ6StrideRpzrlMc_11034e120;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSnyxGSksSxRzSZ6StrideRpzrlMc_11034e120,uVar1,&puStack_30);
  puRam0000000112d4f688 = puVar3;
  return;
}



/* Entry: 100f79844; end: 100f79883;  */

void FUN_100f79844(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4f690 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSiSZsMc_11034ded8;
  func_0x000107c61520(PTR___sSiSZsMc_11034ded8,PTR___sSiN_11034deb0);
  puRam0000000112d4f690 = puVar1;
  return;
}



/* Entry: 100f79884; end: 100f799a3;  */

void FUN_100f79884(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112d4f698 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4f680;
  func_0x00010002969c(0x112d4f680,&UNK_10d915678);
  uVar2 = 0x112d4f6a0;
  func_0x000100f79a9c(0x112d4f6a0,0x112d4f6a8,&UNK_10d915680,
                      PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718);
  puStack_28 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_110348848;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d4f698 = puVar3;
  return;
}



/* Entry: 100f799a4; end: 100f799e3;  */

void FUN_100f799a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4f6c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d915570;
  func_0x000107c61520(&UNK_10d915570,&UNK_11036f648);
  puRam0000000112d4f6c0 = puVar1;
  return;
}



/* Entry: 100f799e4; end: 100f79adf;  */

void FUN_100f799e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112d4f6c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d4f6b0;
  func_0x00010002969c(0x112d4f6b0,&UNK_10d915688);
  uVar2 = 0x112d4f6d0;
  func_0x000100f79a9c(0x112d4f6d0,0x112d4f6d8,&UNK_10d915698,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878);
  uVar3 = 0x112d4f6e0;
  func_0x000100f79a9c(0x112d4f6e0,0x112d4f6e8,&UNK_10d9156a0,
                      PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_110348d80);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112d4f6c8 = puVar4;
  return;
}



/* Entry: 100f79ae0; end: 100f79b07;  */

void FUN_100f79ae0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 100f79b08; end: 100f79b5f; -[_TtC20ModularStickerCutout34StickerCutoutPreviewViewController initWithCoder:] */

void FUN_100f79b08(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ModularStickerCutout/StickerCutoutPreviewViewController.swift",0x3d,2,0x12,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f79b60);
  (*pcVar1)();
}



/* Entry: 100f79b60; end: 100f7a097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f79b60(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined1 uStack_68;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d4f6f0);
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x000107c6157c(uVar14);
  uVar13 = 0x112d4f4d0;
  func_0x0001000285a8(0x112d4f4d0,&UNK_10d9153c0);
  func_0x000107c5f728(&uStack_a8,&uStack_70,uVar13);
  uVar2 = uStack_98;
  uVar13 = uStack_a8;
  uVar1 = (undefined1)uStack_a0;
  uStack_70 = uStack_70 & 0xffffffffffffff00;
  func_0x000107c5f728(&uStack_a8,&uStack_70,PTR___sSbN_11034dd40);
  uVar4 = 0;
  FUN_100f7a2a4();
  uVar5 = uVar4;
  func_0x000100f7a150();
  func_0x000107c5f31c(uVar14,uVar4,uVar5);
  uStack_98 = uVar13;
  uStack_90 = uVar1;
  uStack_88 = uVar2;
  uStack_80 = (undefined1)uStack_a8;
  uStack_78 = uStack_a0;
  uStack_a8 = uVar14;
  uStack_a0 = uVar4;
  func_0x0001000285a8(0x112d4f728,&UNK_10d9156e0);
  func_0x000107c610f8();
  puVar6 = &uStack_a8;
  func_0x000107c5f458();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d614();
  puVar7 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f7a06c);
    (*pcVar3)();
  }
  func_0x000107c5a050();
  func_0x000107c61170(puVar7);
  puVar7 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f7a070);
    (*pcVar3)();
  }
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f7a074);
    (*pcVar3)();
  }
  puVar7 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f7a078);
    (*pcVar3)();
  }
  func_0x000107c3d89c(lVar9);
  func_0x000107c61170(lVar9);
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  puVar7[3] = 9;
  puVar7[2] = 4;
  puVar10 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f7a07c);
    (*pcVar3)();
  }
  puVar11 = puVar10;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f7a080);
    (*pcVar3)();
  }
  lVar12 = lVar9;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  puVar10 = puVar11;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar12);
  puVar7[4] = puVar10;
  puVar10 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f7a084);
    (*pcVar3)();
  }
  puVar11 = puVar10;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  lVar9 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar9 != 0) {
    lVar12 = lVar9;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    puVar10 = puVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    func_0x000107c61170(lVar12);
    puVar7[5] = puVar10;
    puVar10 = puVar6;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f7a08c);
      (*pcVar3)();
    }
    puVar11 = puVar10;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    lVar9 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f7a090);
      (*pcVar3)();
    }
    lVar12 = lVar9;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    puVar10 = puVar11;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    func_0x000107c61170(lVar12);
    puVar7[6] = puVar10;
    puVar10 = puVar6;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f7a094);
      (*pcVar3)();
    }
    puVar11 = puVar10;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar9 = unaff_x20;
      func_0x000107c3ec1c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      puVar10 = puVar11;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(lVar9);
      puVar7[7] = puVar10;
      uVar13 = 0;
      func_0x000100847984(0);
      puVar10 = puVar7;
      func_0x000107c5fc48(puVar7,uVar13);
      func_0x000107c61574(puVar7);
      func_0x000107c3d048(puVar8);
      func_0x000107c61170(puVar10);
      func_0x000107c41c30(puVar6);
      func_0x000107c61170(puVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100f7a098);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100f7a088);
  (*pcVar3)();
}



/* Entry: 100f7a098; end: 100f7a0bf; -[_TtC20ModularStickerCutout34StickerCutoutPreviewViewController viewDidLoad] */

void FUN_100f7a098(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f79b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f7a0c0; end: 100f7a11f; -[_TtC20ModularStickerCutout34StickerCutoutPreviewViewController initWithNibName:bundle:] */

void FUN_100f7a0c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ModularStickerCutout.StickerCutoutPreviewViewController",0x37,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f7a0ec);
  (*pcVar1)();
}



/* Entry: 100f7a120; end: 100f7a12f; -[_TtC20ModularStickerCutout34StickerCutoutPreviewViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7a120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4f6f0));
  return;
}



/* Entry: 100f7a130; end: 100f7a193;  */

void FUN_100f7a130(void)

{
  func_0x000107c61168(&PTR_PTR_1127a5ce0);
  return;
}



/* Entry: 100f7a194; end: 100f7a207;  */

undefined1  [16] FUN_100f7a194(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  unkuint9 Stack_40;
  
  puVar1 = &UNK_10d915768;
  func_0x000107c614e0(&UNK_10d915768);
  puVar2 = &UNK_10d915790;
  func_0x000107c614e0(&UNK_10d915790);
  func_0x000107c5f20c(&Stack_40);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  auVar3._9_7_ = 0;
  auVar3._0_9_ = Stack_40;
  return auVar3;
}



/* Entry: 100f7a208; end: 100f7a29b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7a208(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112d4f730;
  lVar2 = 0x112d4f808;
  func_0x0001000285a8(0x112d4f808,&UNK_10d915760);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000100c9cb64(*(undefined8 *)(unaff_x20 + _DAT_1137ff0c8),
                      ((undefined8 *)(unaff_x20 + _DAT_1137ff0c8))[1]);
  func_0x000100c9cb64(*(undefined8 *)(unaff_x20 + _DAT_1137ff0d0),
                      ((undefined8 *)(unaff_x20 + _DAT_1137ff0d0))[1]);
  func_0x000100c9cb64(*(undefined8 *)(unaff_x20 + _DAT_1137ff0d8),
                      ((undefined8 *)(unaff_x20 + _DAT_1137ff0d8))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f7a29c; end: 100f7a2a3;  */

void FUN_100f7a29c(void)

{
  if (lRam0000000112d4f760 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61bcb8);
  return;
}



/* Entry: 100f7a2a4; end: 100f7a2db;  */

void FUN_100f7a2a4(undefined8 param_1)

{
  if (lRam0000000112d4f760 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61bcb8);
  return;
}



/* Entry: 100f7a2dc; end: 100f7a353;  */

void FUN_100f7a2dc(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_100f7a354();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10d915710;
    puStack_30 = &UNK_10d915710;
    puStack_28 = &UNK_10d915710;
    func_0x000107c61630(param_1,0x100,4,&lStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 100f7a354; end: 100f7a3a3;  */

void FUN_100f7a354(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d4f770 != 0) {
    return;
  }
  puVar1 = &UNK_1106deed0;
  func_0x000107c5f214();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d4f770 = param_1;
  return;
}



/* Entry: 100f7a3a4; end: 100f7a3af;  */

undefined * FUN_100f7a3a4(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_11034ae28;
}



/* Entry: 100f7a3b0; end: 100f7a3d7;  */

void FUN_100f7a3b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5f1e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 100f7a3d8; end: 100f7a597;  */

undefined8
FUN_100f7a3d8(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 unaff_d8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = param_1;
  func_0x000107c5fce8();
  func_0x000107c61574();
  func_0x000107c615c4();
  func_0x000107c615cc();
  if (((ulong)pcVar1 & 1) == 0) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x42);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef1ceb0);
    uVar4 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,param_3,param_4,param_5,param_6,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f7a598);
    (*pcVar1)();
  }
  puVar2 = &UNK_11036f7d8;
  func_0x000107c613fc(&UNK_11036f7d8,0x20,7);
  *(code **)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  (*param_1)(&uStack_70);
  if (unaff_x21 == 0) {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    unaff_d8 = uStack_70;
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f7a4fc);
      (*pcVar1)();
    }
  }
  else {
    puVar3 = puVar2;
    func_0x000107c61544(puVar2,"",0,0,0,0);
    func_0x000107c61574(puVar2);
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f7a498);
      (*pcVar1)();
    }
  }
  return unaff_d8;
}



/* Entry: 100f7a598; end: 100f7a71f;  */

void FUN_100f7a598(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x21;
  
  pcVar1 = param_2;
  func_0x000107c5fce8();
  func_0x000107c61574();
  func_0x000107c615c4();
  func_0x000107c615cc();
  if (((ulong)pcVar1 & 1) == 0) {
    func_0x000107c602fc(0x42);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef1ceb0);
    uVar4 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,param_4,param_5,param_6,param_7,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f7a720);
    (*pcVar1)();
  }
  puVar2 = &UNK_11036f828;
  func_0x000107c613fc(&UNK_11036f828,0x20,7);
  *(code **)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  (*param_2)(param_1);
  puVar3 = puVar2;
  func_0x000107c61544(puVar2,"",0,0,0,0);
  func_0x000107c61574(puVar2);
  if (unaff_x21 == 0) {
    if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f7a684);
      (*pcVar1)();
    }
  }
  else if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100f7a658);
    (*pcVar1)();
  }
  return;
}



/* Entry: 100f7a720; end: 100f7a7fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_100f7a720(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4f810;
  pcVar2 = *(code **)(unaff_x20 + _DAT_112d4f810);
  pcVar3 = pcVar2;
  if (pcVar2 == (code *)0x0) {
    FUN_100f7a97c();
    pcVar3 = (code *)PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    func_0x000107c61170(pcVar2);
    pcVar2 = pcVar3;
    func_0x000107c5a070();
    FUN_100f7a8dc();
    (*pcVar2)();
    func_0x000107c61574(param_2);
    func_0x000107c5921c(pcVar3);
    func_0x000107c5a074(pcVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c61174(pcVar3);
    func_0x000107c61170(uVar4);
    pcVar2 = (code *)0x0;
  }
  func_0x000107c61174(pcVar2);
  return pcVar3;
}



/* Entry: 100f7a7fc; end: 100f7a8db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_100f7a7fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4f818;
  pcVar2 = *(code **)(unaff_x20 + _DAT_112d4f818);
  pcVar3 = pcVar2;
  if (pcVar2 == (code *)0x0) {
    FUN_100f7a8dc();
    (*pcVar2)();
    func_0x000107c61574(param_2);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar3 = (code *)PTR__OBJC_CLASS___UIViewController_1126af898;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c5677c();
      pcVar2 = pcVar3;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (pcVar2 == (code *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100f7a8dc);
        (*pcVar3)();
      }
      func_0x000107c52b50();
      func_0x000107c61170(pcVar2);
    }
    else {
      pcVar3 = (code *)0x0;
      func_0x000100f8b41c();
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    pcVar2 = (code *)0x0;
  }
  func_0x000107c61174(pcVar2);
  return pcVar3;
}



/* Entry: 100f7a8dc; end: 100f7a97b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100f7a8dc(void)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar1 = (long *)(unaff_x20 + _DAT_112d4f840);
  lVar2 = *plVar1;
  puVar3 = (undefined *)plVar1[1];
  puVar4 = puVar3;
  lVar5 = lVar2;
  if (lVar2 == 0) {
    puVar4 = &UNK_11036f800;
    func_0x000107c613fc(&UNK_11036f800,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *plVar1 = 0x100f7d348;
    plVar1[1] = (long)puVar4;
    func_0x000107c61174();
    func_0x000107c6157c(puVar4);
    FUN_100c9cba0(0,puVar3);
    lVar5 = 0x100f7d348;
  }
  func_0x000100f7d350(lVar2,puVar3);
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = lVar5;
  return auVar6;
}



/* Entry: 100f7a97c; end: 100f7aa07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f7a97c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d4f820;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d4f820);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = (undefined *)0x2;
    func_0x000100029b9c(2,0x11,0,0);
    if ((int)puVar3 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIViewController_1126af898;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    else {
      FUN_100f7aa08();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100f7aa08; end: 100f7af27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_100f7aa08(void)

{
  long *plVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long unaff_x20;
  long lVar15;
  undefined8 uVar16;
  ulong *puVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  undefined8 uVar21;
  ulong *puStack_2c8;
  undefined1 auStack_2c0 [192];
  ulong uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [24];
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  ulong *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  long lStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  lVar19 = *(long *)(unaff_x20 + _DAT_112d4f858);
  plVar1 = (long *)(lVar19 + _DAT_112ff2278);
  puVar17 = (ulong *)*plVar1;
  puStack_2c8 = puVar17;
  if ((char)plVar1[1] == '\x02') {
    func_0x000100f74158(puVar17,2);
    lVar15 = unaff_x20;
    func_0x000107c61174();
    FUN_100f7be5c();
    FUN_100f72e4c(puVar17,2);
    func_0x000107c61170(lVar15);
  }
  else if ((char)plVar1[1] == '\0') {
    func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
    func_0x000107c61174();
    func_0x000100759c94();
    FUN_100f72e4c(puVar17,0);
  }
  else {
    func_0x0001000285a8(0x112d4f918,&UNK_10d933050);
    uStack_128 = 0;
    puStack_2c8 = &uStack_128;
    func_0x000104888f7c();
  }
  uVar16 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d4f860) + _DAT_112e98970);
  puVar11 = &UNK_10d915820;
  func_0x0001000285a8(0x112d4f908,&UNK_10d915820);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d4f870);
  func_0x000107c6157c(uVar16);
  func_0x000107c410ec();
  func_0x000107c61180();
  uVar8 = uVar18;
  func_0x0001000bda74();
  func_0x000107c61170(uVar18);
  puVar4 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d4f8c8) + _DAT_112ff2a80);
  uVar21 = puVar4[1];
  pcVar20 = (code *)*puVar4;
  pcVar7 = pcVar20;
  func_0x000107c615f0();
  FUN_100f7a8dc();
  (*pcVar7)();
  func_0x000107c61574(puVar11);
  puVar11 = &UNK_11036f770;
  puVar9 = puVar11;
  func_0x000107c613fc(&UNK_11036f770,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar10 = puVar11;
  func_0x000107c613fc(&UNK_11036f770,0x18,7);
  func_0x000107c61614(puVar10 + 0x10);
  lVar15 = _DAT_112ff2298;
  uVar14 = *(undefined8 *)(lVar19 + _DAT_112ff2270);
  func_0x000107c61428(lVar19 + _DAT_112ff2298,auStack_140,0,0);
  uVar3 = *(undefined1 *)(lVar19 + lVar15);
  lVar15 = *plVar1;
  lVar19 = plVar1[1];
  func_0x000107c613fc(&UNK_11036f770,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  uStack_200 = 0;
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(puVar10);
  func_0x000107c6157c(puVar11);
  func_0x000100f74158(lVar15,(char)lVar19);
  func_0x000107c5f728(&uStack_128,&uStack_200,&UNK_110370ee8);
  uVar6 = uStack_120;
  uVar2 = uStack_128;
  uStack_200 = 0;
  uStack_1f8 = CONCAT71(uStack_1f8._1_7_,1);
  uVar18 = 0x112d4f4d0;
  func_0x0001000285a8(0x112d4f4d0,&UNK_10d9153c0);
  func_0x000107c5f728(&uStack_128,&uStack_200,uVar18);
  uVar18 = uStack_118;
  uVar13 = uStack_128;
  uVar5 = (undefined1)uStack_120;
  uStack_200 = uStack_200 & 0xffffffffffffff00;
  func_0x000107c5f728(&uStack_128,&uStack_200,PTR___sSbN_11034dd40);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar11);
  uStack_f0 = uStack_120;
  uStack_f8 = (undefined1)uStack_128;
  uStack_128 = 0x4075e00000000000;
  uStack_120 = uVar2;
  uStack_118 = uVar6;
  uStack_110 = uVar13;
  uStack_108 = uVar5;
  uStack_100 = uVar18;
  puStack_e8 = puStack_2c8;
  bStack_c0 = (byte)pcVar7 & 1;
  uStack_b8 = 0x100f7d934;
  uStack_a8 = 0x100f7d93c;
  uStack_78 = 0x100f7d944;
  uStack_e0 = uVar16;
  uStack_d8 = uVar8;
  pcStack_d0 = pcVar20;
  uStack_c8 = uVar21;
  puStack_b0 = puVar9;
  puStack_a0 = puVar10;
  uStack_98 = uVar14;
  uStack_90 = uVar3;
  lStack_88 = lVar15;
  uStack_80 = (char)lVar19;
  puStack_70 = puVar11;
  FUN_100f972c4(0);
  func_0x000107c610f8();
  uStack_168 = CONCAT71(uStack_8f,uStack_90);
  puStack_178 = puStack_a0;
  uStack_180 = uStack_a8;
  uStack_170 = uStack_98;
  uStack_158 = CONCAT71(uStack_7f,uStack_80);
  lStack_160 = lStack_88;
  puStack_148 = puStack_70;
  uStack_150 = uStack_78;
  uStack_1b8 = uStack_e0;
  puStack_1c0 = puStack_e8;
  pcStack_1a8 = pcStack_d0;
  uStack_1b0 = uStack_d8;
  uStack_198 = CONCAT71(uStack_bf,bStack_c0);
  uStack_1a0 = uStack_c8;
  puStack_188 = puStack_b0;
  uStack_190 = uStack_b8;
  uStack_1f8 = uStack_120;
  uStack_200 = uStack_128;
  uStack_1e8 = uStack_110;
  uStack_1f0 = uStack_118;
  uStack_1e0 = CONCAT71(uStack_107,uStack_108);
  uStack_1d0 = CONCAT71(uStack_f7,uStack_f8);
  uStack_1d8 = uStack_100;
  uStack_1c8 = uStack_f0;
  FUN_100f7d94c(&uStack_128,auStack_2c0);
  puVar17 = &uStack_200;
  func_0x000107c5f458();
  puVar12 = puVar17;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar12 != (ulong *)0x0) {
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(puVar12);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    pcVar7 = *(code **)(unaff_x20 + _DAT_112d4f840);
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112d4f840))[1];
    uVar13 = uVar2;
    func_0x000107c6157c();
    (*pcVar7)();
    FUN_100c9cba0(pcVar7,uVar2);
    if ((uVar13 & 1) == 0) {
      func_0x000100f7d988(&uStack_128);
    }
    else {
      puVar12 = puVar17;
      func_0x000107c61174(puVar17);
      func_0x000107c5f354();
      func_0x000107c5f448();
      func_0x000100f7d988(&uStack_128);
      func_0x000107c61170(puVar12);
    }
    return puVar17;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100f7af28);
  (*pcVar7)();
}



/* Entry: 100f7af28; end: 100f7afe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100f7af28(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_112ff2298;
  lVar6 = *(long *)(param_1 + _DAT_112d4f858);
  func_0x000107c61428(lVar6 + _DAT_112ff2298,auStack_48,0,0);
  if ((*(byte *)(lVar6 + lVar3) & 1) == 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_112d4f8c8) + _DAT_112ff2a80);
    uVar2 = *puVar1;
    lVar3 = puVar1[1];
    uVar4 = uVar2;
    func_0x000107c614f0(uVar2);
    pcVar7 = *(code **)(lVar3 + 8);
    func_0x000107c615f0(uVar2);
    (*pcVar7)(uVar4,lVar3);
    uVar5 = (uint)uVar4;
    func_0x000107c615e8(uVar2);
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 1;
}



/* Entry: 100f7afe4; end: 100f7b387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100f7afe4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d4f810) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f818) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f820) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f828) = 0x400199999999999a;
  *(undefined1 *)(unaff_x20 + _DAT_112d4f830) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f838) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f840);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f848) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f850) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f858) = param_1;
  uVar7 = *(undefined8 *)(param_2 + _DAT_112e989a8);
  *(undefined8 *)(unaff_x20 + _DAT_112d4f860) = uVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f868) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f870) = param_4;
  func_0x000107c61174();
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar3 = param_5;
  func_0x000107c40480();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x0001000285a8(0x112d4f878,&UNK_10d9157b0);
    lVar4 = lVar3;
    func_0x0001000bda74();
    func_0x000107c61170(lVar3);
    *(long *)(unaff_x20 + _DAT_112d4f880) = lVar4;
    func_0x0001000285a8(0x112d4f888,&UNK_10d9157b8);
    uVar7 = param_6;
    func_0x000107c5bd94();
    func_0x000107c61180();
    uVar5 = uVar7;
    func_0x0001000bda74();
    func_0x000107c61170(uVar7);
    *(undefined8 *)(unaff_x20 + _DAT_112d4f890) = uVar5;
    *(undefined8 *)(unaff_x20 + _DAT_112d4f898) = param_7;
    *(undefined8 *)(unaff_x20 + _DAT_112d4f8a0) = param_8;
    func_0x0001000285a8(0x112d4f8a8,&UNK_10d9157c0);
    func_0x000107c61174();
    func_0x000107c61174(param_8);
    uVar7 = param_9;
    func_0x000107c5bd60();
    func_0x000107c61180();
    uVar5 = uVar7;
    func_0x0001000bda74();
    func_0x000107c61170(uVar7);
    *(undefined8 *)(unaff_x20 + _DAT_112d4f8b0) = uVar5;
    *(undefined8 *)(unaff_x20 + _DAT_112d4f8b8) = param_10;
    *(undefined8 *)(unaff_x20 + _DAT_112d4f8c0) = param_11;
    *(undefined8 *)(unaff_x20 + _DAT_112d4f8c8) = param_12;
    func_0x0001000285a8(0x112d4f8d0,&UNK_10dc15330);
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_11);
    func_0x000107c61174(param_12);
    uVar7 = param_13;
    func_0x000107c5c360();
    func_0x000107c61180();
    uVar5 = uVar7;
    func_0x0001000bda74();
    func_0x000107c61170(uVar7);
    *(undefined8 *)(unaff_x20 + _DAT_112d4f8d8) = uVar5;
    puVar6 = auStack_70;
    func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f7b388);
  (*pcVar2)();
}



/* Entry: 100f7b388; end: 100f7b51f;  */

/* WARNING: Possible PIC construction at 0x000100f7b4a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f7b4a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7b388(void)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  iVar2 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  lVar1 = _DAT_112ff2280;
  lVar5 = *(long *)(unaff_x20 + _DAT_112d4f858);
  if ((iVar2 != 0) && (*(char *)((undefined8 *)(lVar5 + _DAT_112ff2278) + 1) == '\x01')) {
    uVar6 = *(undefined8 *)(lVar5 + _DAT_112ff2278);
    puVar3 = &UNK_11036f770;
    func_0x000107c613fc(&UNK_11036f770,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_11036f850;
    func_0x000107c613fc(&UNK_11036f850,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = uVar6;
    puVar3 = &UNK_11036f878;
    func_0x000107c613fc(&UNK_11036f878,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10d915808;
    *(undefined **)(puVar3 + 0x18) = puVar4;
    func_0x000100f74158(uVar6,1);
    func_0x000107c61174(uVar6);
    func_0x0001001ca524(0x10,3,0x2c,4,0,0,&UNK_10d915818,puVar3,PTR___sytN_11034f1b0 + 8);
    FUN_100f72e4c(uVar6,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar3);
    return;
  }
  func_0x000107c61428(lVar5 + _DAT_112ff2280,auStack_48,0,0);
  lVar5 = lVar5 + lVar1;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c4d0f0();
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 100f7b520; end: 100f7b833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7b520(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  ulong uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar5 = (undefined *)0x2;
  func_0x000100029b9c(2,0x11,0,0);
  lVar8 = _DAT_112ff2280;
  if ((int)puVar5 == 0) {
    lVar9 = *(long *)(unaff_x20 + _DAT_112d4f858);
    func_0x000107c61428(lVar9 + _DAT_112ff2280,&puStack_70,0,0);
    lVar9 = lVar9 + lVar8;
    func_0x000107c61618();
    if (lVar9 == 0) {
      return;
    }
    func_0x000107c4d0f0();
  }
  else {
    func_0x0001000d224c(&puStack_70);
    if (puStack_70 != (undefined *)0x0) {
      func_0x000107c4befc(puStack_70);
      func_0x000107c615e8();
      puVar5 = puStack_70;
    }
    FUN_100f7a7fc();
    puVar6 = puVar5;
    func_0x000107c614f0();
    func_0x000107c61440();
    if ((puVar6 != (undefined *)0x0) && (puVar5 != (undefined *)0x0)) {
      puVar6 = &UNK_11036f770;
      func_0x000107c613fc(&UNK_11036f770,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar1 = (undefined8 *)(puVar5 + _DAT_112d4feb8);
      uVar10 = *puVar1;
      uVar3 = puVar1[1];
      *puVar1 = 0x100f7d92c;
      puVar1[1] = puVar6;
      func_0x000107c6157c(puVar6);
      FUN_100c9cba0(uVar10,uVar3);
      func_0x000107c61574(puVar6);
    }
    func_0x000107c61170(puVar5);
    lVar13 = *(long *)(unaff_x20 + _DAT_112d4f858);
    uVar10 = *(undefined8 *)(lVar13 + _DAT_112ff2268);
    pcVar11 = *(code **)(unaff_x20 + _DAT_112d4f818);
    puVar5 = &UNK_11036f770;
    func_0x000107c613fc(&UNK_11036f770,0x18,7);
    lVar8 = unaff_x20;
    func_0x000107c61614(puVar5 + 0x10);
    uStack_50 = 0x100f7d924;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_11036f930;
    ppuVar7 = &puStack_70;
    puStack_48 = puVar5;
    func_0x000107c60bc4(ppuVar7);
    puVar5 = puStack_48;
    func_0x000107c61174(uVar10);
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    func_0x000107c4f018(uVar10);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar10);
    func_0x000107c61170();
    FUN_100f7a8dc();
    (*pcVar11)();
    func_0x000107c61574(lVar8);
    lVar8 = _DAT_112ff22a0;
    if (((ulong)pcVar11 & 1) == 0) {
      return;
    }
    plVar2 = (long *)(*(long *)(unaff_x20 + _DAT_112d4f8c8) + _DAT_112ff2a80);
    lVar9 = *plVar2;
    lVar4 = plVar2[1];
    uVar10 = *(undefined8 *)(lVar13 + _DAT_112ff2270);
    func_0x000107c61428(lVar13 + _DAT_112ff22a0,&puStack_70,0,0);
    uVar12 = *(ulong *)(lVar13 + lVar8);
    if (3 < uVar12) {
      uStack_78 = uVar12;
      func_0x000107c615f0(lVar9);
      func_0x000107c60614(&UNK_1106dd908,&uStack_78,&UNK_1106dd908,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100f7b834);
      (*pcVar11)();
    }
    lVar8 = lVar9;
    func_0x000107c614f0(lVar9);
    pcVar11 = *(code **)(lVar4 + 0x30);
    func_0x000107c615f0(lVar9);
    (*pcVar11)(uVar10,uVar12,lVar8,lVar4);
  }
  func_0x000107c615e8(lVar9);
  return;
}



/* Entry: 100f7b834; end: 100f7b9df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f7b834(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d4f858) + _DAT_112ff2278);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar5 = *puVar1;
    lVar6 = *(long *)(unaff_x20 + _DAT_112d4f850);
    if (lVar6 == 0) {
      func_0x000107c61174(uVar5);
    }
    else {
      func_0x000100f74158(uVar5,1);
      func_0x000107c6157c(lVar6);
      func_0x000107c5fd50();
      func_0x000107c61574(lVar6);
    }
    iVar2 = 2;
    func_0x000100029b9c(2,0x11,0,0);
    if ((iVar2 != 0) && (lVar6 = *(long *)(unaff_x20 + _DAT_112d4f848), lVar6 != 0)) {
      FUN_100f75918(0);
      lVar3 = lVar6;
      func_0x000107c615f0();
      func_0x000107c61480();
      if (lVar3 != 0) {
        uVar4 = 0;
        func_0x000107c5fcec(0);
        lStack_40 = lVar3;
        FUN_100f7a598(FUN_100f7ba8c,auStack_50,
                      "ModularStickerCutout/ModularStickerCutoutEntryPoint.swift",0x39,2,0x79,uVar4)
        ;
        FUN_100f72e4c(uVar5,1);
        func_0x000107c615e8(lVar6);
        return 0;
      }
      func_0x000107c615e8(lVar6);
    }
    FUN_100f72e4c(uVar5,1);
  }
  else {
    FUN_100f7a7fc();
    lVar6 = param_1;
    func_0x000107c4f090();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (lVar6 != 0) {
      func_0x000107c61170(lVar6);
      func_0x000107c420a8(*(undefined8 *)(unaff_x20 + _DAT_112d4f818));
    }
  }
  return 0;
}



/* Entry: 100f7b9e0; end: 100f7ba8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7b9e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_112d4f390;
  func_0x000107c61618();
  if (lVar1 == 0) {
LAB_100f7ba28:
    lVar3 = *(long *)(param_1 + _DAT_112d4f3a0);
    if (lVar3 == 0) {
      return;
    }
    func_0x000107c61174();
    lVar2 = lVar3;
    func_0x000107c4f090();
    func_0x000107c61180();
    lVar1 = lVar3;
    if (lVar2 == 0) goto LAB_100f7ba6c;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4f090();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
      goto LAB_100f7ba28;
    }
  }
  lVar3 = lVar2;
  func_0x000107c420a8();
  func_0x000107c61170(lVar1);
LAB_100f7ba6c:
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 100f7ba8c; end: 100f7baa3;  */

void FUN_100f7ba8c(void)

{
  long unaff_x20;
  
  FUN_100f7b9e0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100f7baa4; end: 100f7baa7; -[_TtC20ModularStickerCutout30ModularStickerCutoutEntryPoint tray:positionDidChange:] */

void FUN_100f7baa4(void)

{
  return;
}



/* Entry: 100f7baa8; end: 100f7bb07; -[_TtC20ModularStickerCutout30ModularStickerCutoutEntryPoint tray:heightForPosition:] */

undefined8
FUN_100f7baa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_100f7d160();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}


