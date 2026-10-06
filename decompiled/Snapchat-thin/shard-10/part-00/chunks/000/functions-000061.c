/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073f21cc; end: 1073f21e7;  */

void FUN_1073f21cc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073f21e8; end: 1073f21eb;  */

void FUN_1073f21e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073f21ec; end: 1073f21ff;  */

void FUN_1073f21ec(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073f2200; end: 1073f2207;  */

void FUN_1073f2200(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(*(long *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073f2208; end: 1073f223f;  */

long FUN_1073f2208(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ad0c8);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073f2240; end: 1073f2243;  */

void FUN_1073f2240(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073f2244; end: 1073f233b;  */

void FUN_1073f2244(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  
  func_0x0001073f2b20();
  func_0x0001073f28f0();
  func_0x000100061de0();
  lVar5 = *unaff_x19;
  if ((*(long *)(lVar5 + -8) == 0) && (*(char *)(lVar5 + (long)param_1) != -2)) {
    if (((ulong)unaff_x19[2] < 9) || ((ulong)(unaff_x19[2] * 0x19) < (ulong)(unaff_x19[3] << 5))) {
      FUN_1073f233c();
    }
    else {
      func_0x00010ae6c914();
    }
    param_1 = unaff_x19;
    param_2 = unaff_x20;
    func_0x000100061de0();
    lVar5 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  bVar3 = *(char *)(lVar5 + (long)param_1) == -0x80;
  *(ulong *)(lVar5 + -8) = *(long *)(lVar5 + -8) - (ulong)bVar3;
  bVar2 = (byte)unaff_x20 & 0x7f;
  uVar6 = unaff_x19[2];
  *(byte *)(lVar5 + (long)param_1) = bVar2;
  *(byte *)(lVar5 + (uVar6 & (long)param_1 - 7U) + (uVar6 & 7)) = bVar2;
  func_0x0001073f28a4(extraout_x8);
  if (bVar3) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = *param_1;
  lVar8 = param_1[1];
  lVar9 = param_1[2];
  param_1[2] = param_2;
  func_0x00010726d624();
  lVar10 = param_1[1];
  for (lVar5 = 0; lVar9 != lVar5; lVar5 = lVar5 + 1) {
    if (-1 < *(char *)(lVar1 + lVar5)) {
      lVar7 = lVar8;
      func_0x000104c2fe38();
      plVar4 = param_1;
      func_0x000100061de0(param_1,lVar7);
      bVar2 = (byte)lVar7 & 0x7f;
      uVar6 = param_1[2];
      lVar7 = *param_1;
      *(byte *)(lVar7 + (long)plVar4) = bVar2;
      *(byte *)(lVar7 + ((long)plVar4 - 7U & uVar6) + (uVar6 & 7)) = bVar2;
      FUN_1073f2400(lVar10 + (long)plVar4 * 0x50,lVar8);
    }
    lVar8 = lVar8 + 0x50;
  }
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 1073f233c; end: 1073f23ff;  */

void FUN_1073f233c(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  param_1[2] = param_2;
  func_0x00010726d624();
  lVar9 = param_1[1];
  for (lVar8 = 0; lVar7 != lVar8; lVar8 = lVar8 + 1) {
    if (-1 < *(char *)(lVar1 + lVar8)) {
      lVar5 = lVar6;
      func_0x000104c2fe38();
      plVar3 = param_1;
      func_0x000100061de0(param_1,lVar5);
      bVar2 = (byte)lVar5 & 0x7f;
      uVar4 = param_1[2];
      lVar5 = *param_1;
      *(byte *)(lVar5 + (long)plVar3) = bVar2;
      *(byte *)(lVar5 + ((long)plVar3 - 7U & uVar4) + (uVar4 & 7)) = bVar2;
      FUN_1073f2400(lVar9 + (long)plVar3 * 0x50,lVar6);
    }
    lVar6 = lVar6 + 0x50;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 1073f2400; end: 1073f2443;  */

long FUN_1073f2400(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  func_0x0001000e30f4(param_2 + 0x38);
  func_0x000104c2f714(param_2);
  return param_2;
}



/* Entry: 1073f2444; end: 1073f24af;  */

long FUN_1073f2444(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  if (lVar1 == -1) {
    lVar1 = param_2;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(param_2);
    func_0x0001001030f4(lVar1,lVar1 + param_2);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return lVar1;
}



/* Entry: 1073f24b0; end: 1073f250f;  */

long FUN_1073f24b0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001073f24ec();
    lVar2 = uVar1 + 0x70;
  }
  else {
    lVar2 = param_1;
    FUN_1073f2510();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x70;
}



/* Entry: 1073f2510; end: 1073f2583;  */

undefined8 FUN_1073f2510(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001073f2ae4();
  func_0x00010727776c();
  func_0x0001073f2958();
  func_0x000107277858();
  func_0x000107277488(lStack_48);
  lStack_48 = lStack_48 + 0x70;
  func_0x0001073f2b6c();
  func_0x0001072777cc();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107277a38(auStack_58);
  return uVar1;
}



/* Entry: 1073f2584; end: 1073f25a3;  */

void FUN_1073f2584(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1073f25a4(&uStack_18);
  return;
}



/* Entry: 1073f25a4; end: 1073f25a7;  */

void FUN_1073f25a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1073f25d8(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 1073f25a8; end: 1073f25d7;  */

void FUN_1073f25a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_1073f25d8(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 1073f25d8; end: 1073f2653;  */

void FUN_1073f25d8(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  func_0x00010726c9e8();
  if ((param_3 & 1) != 0) {
    FUN_1073f2654(*param_2,lVar2,param_4,param_5,param_6);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0xa8;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 1073f2654; end: 1073f267b;  */

void FUN_1073f2654(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_4;
  uStack_20 = *param_5;
  FUN_1073f26a4(*(long *)(param_1 + 8) + param_2 * 0xa8,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1073f267c; end: 1073f26a3;  */

void FUN_1073f267c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_1073f26a4(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1073f26a4; end: 1073f2727;  */

long FUN_1073f26a4(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c2fe00(param_1,*param_2);
  func_0x00010726cc04(lVar1 + 0x40,*param_3 + 8);
  return param_1;
}



/* Entry: 1073f2728; end: 1073f272b;  */

void FUN_1073f2728(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ad108;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073f272c; end: 1073f273f;  */

void FUN_1073f272c(void)

{
  FUN_1073f2788();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073f2740; end: 1073f2757;  */

undefined8 FUN_1073f2740(long param_1)

{
  undefined8 unaff_x19;
  
  if (*(long *)(param_1 + 0x610) != 0) {
    FUN_1073f1614((undefined8 *)(param_1 + 0x610));
    __ZdlPv(*(undefined8 *)(param_1 + 0x610));
  }
  if (*(long *)(param_1 + 0x5f8) != 0) {
    *(long *)(param_1 + 0x600) = *(long *)(param_1 + 0x5f8);
    __ZdlPv();
  }
  FUN_1073f16e8(param_1 + 0x210);
  func_0x000104c319e0(param_1 + 0x1c8);
  func_0x000107283194(param_1 + 0x1a8);
  func_0x000107283194(param_1 + 0x198);
  FUN_107330fdc(param_1 + 0x188);
  func_0x00010048b0a4(param_1 + 0x170);
  func_0x0001057f951c(param_1 + 0xd8);
  func_0x0001001148fc(param_1 + 0xb8);
  func_0x0001001148fc(param_1 + 0x98);
  func_0x0001001148fc(param_1 + 0x78);
  func_0x00010724b3d8(param_1 + 0x30);
  func_0x0001073f2938(param_1 + 0x18);
  FUN_1073f1514();
  return unaff_x19;
}



/* Entry: 1073f2758; end: 1073f2787;  */

void FUN_1073f2758(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073f2a14();
  _memcpy();
  func_0x000104c318bc(unaff_x20 + 0x50,unaff_x19 + 0x50);
  return;
}



/* Entry: 1073f2788; end: 1073f279f;  */

void FUN_1073f2788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ad108;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073f27a0; end: 1073f27cf;  */

void FUN_1073f27a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_DAT_1109ad168;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1073f27d0; end: 1073f2807;  */

void FUN_1073f27d0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109ad168;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073f2808; end: 1073f283f;  */

long FUN_1073f2808(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109ad1c8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1073f2840; end: 1073f284f;  */

undefined ** FUN_1073f2840(void)

{
  return &PTR_DAT_1109ad1c8;
}



/* Entry: 1073f2850; end: 1073f2863;  */

void FUN_1073f2850(void)

{
  func_0x0001073f2870();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073f2864; end: 1073f287f;  */

undefined8 * FUN_1073f2864(long param_1)

{
  func_0x000104c2f714(param_1 + 0xf0);
  func_0x000104c2f714(param_1 + 0xb8);
  func_0x000104c2f714(param_1 + 0x80);
  func_0x000107261dac(param_1 + 0x58);
  func_0x0001073f17cc(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ace68;
  func_0x0001073b4ef8(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 1073f2880; end: 1073f28a3;  */

void FUN_1073f2880(long param_1)

{
  func_0x0001073f2b80();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073f28a4; end: 1073f2ddb;  */

void FUN_1073f28a4(void)

{
  return;
}



/* Entry: 1073f2ddc; end: 1073f4603;  */

undefined8 *
FUN_1073f2ddc(undefined8 param_1,float param_2,undefined8 *param_3,long *param_4,undefined8 *param_5
             ,undefined8 *param_6)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  undefined *puVar8;
  byte bVar9;
  char cVar10;
  code *pcVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined4 extraout_w8;
  int iVar19;
  undefined8 extraout_x8;
  long *plVar20;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar21;
  long extraout_x8_06;
  ulong extraout_x8_07;
  long *plVar22;
  undefined8 *extraout_x9;
  undefined8 *puVar23;
  ulong extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar24;
  long extraout_x11;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  undefined8 *puVar30;
  long *plVar31;
  long lVar32;
  long *plVar33;
  undefined8 *puVar34;
  long lVar35;
  undefined8 *puVar36;
  long *plVar37;
  undefined8 *puVar38;
  long lVar39;
  undefined8 *puVar40;
  long lVar41;
  undefined4 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  float fVar45;
  long *unaff_d8;
  undefined8 auStack_c80 [3];
  long alStack_c68 [3];
  undefined8 *puStack_c50;
  undefined8 *puStack_c48;
  undefined8 *puStack_c40;
  undefined **ppuStack_c38;
  undefined8 uStack_c30;
  uint uStack_c24;
  long *plStack_c20;
  long *plStack_c18;
  undefined8 *puStack_c10;
  byte bStack_c08;
  undefined1 auStack_be8 [24];
  undefined2 uStack_bd0;
  undefined1 auStack_bc8 [8];
  char cStack_bc0;
  undefined8 uStack_b90;
  undefined4 uStack_b88;
  byte bStack_b84;
  uint uStack_b80;
  undefined1 uStack_b7c;
  uint uStack_b78;
  undefined1 uStack_b74;
  char cStack_b70;
  char cStack_b6f;
  char cStack_b6e;
  char cStack_b6d;
  undefined4 uStack_b6c;
  float fStack_b68;
  byte bStack_b64;
  undefined1 uStack_b63;
  undefined1 uStack_b62;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  long *plStack_b00;
  long lStack_af8;
  long *plStack_ac0;
  long lStack_ab8;
  undefined1 auStack_a78 [56];
  long *plStack_a40;
  long lStack_a38;
  undefined4 uStack_a30;
  undefined1 uStack_a2c;
  undefined1 auStack_a08 [56];
  undefined1 auStack_9d0 [56];
  undefined1 uStack_998;
  undefined8 *puStack_990;
  long *plStack_988;
  long *plStack_980;
  undefined8 uStack_978;
  undefined4 uStack_970;
  undefined8 uStack_960;
  undefined8 uStack_958;
  ulong uStack_950;
  undefined8 *puStack_948;
  undefined4 uStack_940;
  undefined1 uStack_93c;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  long lStack_8a0;
  undefined8 *puStack_898;
  long lStack_890;
  undefined ***pppuStack_888;
  undefined1 auStack_7f8 [56];
  undefined8 uStack_7c0;
  undefined8 auStack_7b8 [32];
  undefined1 auStack_6b8 [224];
  undefined8 *puStack_5d8;
  undefined8 uStack_80;
  
  puVar40 = param_3;
  puVar34 = param_5;
  func_0x0001073f9f38();
  *puVar40 = &PTR_DAT_1109ad238;
  puVar40[2] = 0;
  puVar40[1] = puVar40 + 2;
  puVar40[3] = 0;
  uStack_80 = extraout_x8;
  func_0x000104c2fe00(puVar40 + 4,*(long *)(*(long *)*puVar34 + 8) + 8);
  puVar34 = param_3 + 0xb;
  func_0x000104c2fe00(puVar34,*param_4 + 0x20);
  uVar43 = *(undefined8 *)*param_4;
  param_3[0x13] = ((undefined8 *)*param_4)[1];
  param_3[0x12] = uVar43;
  plVar31 = param_3 + 0x14;
  *plVar31 = 0;
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  uVar43 = *param_6;
  param_3[0x18] = param_6[1];
  param_3[0x17] = uVar43;
  *param_6 = 0;
  param_6[1] = 0;
  uVar42 = NEON_ucvtf((uint)*(byte *)*param_4);
  *(undefined4 *)(param_3 + 0x19) = uVar42;
  func_0x00010785f1f4();
  param_3[0x1c] = 0;
  plVar22 = param_3 + 0x1b;
  *plVar22 = (long)(param_3 + 0x1c);
  param_3[0x1a] = puVar34;
  param_3[0x1d] = 0;
  plVar20 = param_3 + 0x1e;
  param_3[0x1f] = 0;
  *plVar20 = 0;
  param_3[0x21] = 0;
  param_3[0x20] = 0;
  *(undefined4 *)(param_3 + 0x22) = 0x3f800000;
  puVar38 = param_3 + 0x23;
  *puVar38 = &UNK_10e52b660;
  param_3[0x24] = 0;
  param_3[0x25] = 0;
  param_3[0x26] = 0;
  param_3[0x27] = &UNK_10e52b660;
  param_3[0x28] = 0;
  param_3[0x29] = 0;
  param_3[0x2a] = 0;
  param_3[0x2b] = &UNK_10e52b660;
  param_3[0x2d] = 0;
  param_3[0x2e] = 0;
  param_3[0x2c] = 0;
  plStack_988._0_4_ = *(undefined4 *)(param_3 + 0x19);
  plStack_980 = (long *)param_4[6];
  uStack_978 = 0x7fffffffffffffff;
  uStack_960 = 0;
  uStack_958 = CONCAT71(uStack_958._1_7_,1);
  uStack_950 = 0;
  puStack_948 = puVar38;
  FUN_1073f4604(auStack_6b8,*(long *)(*(long *)*param_5 + 8) + 0x168,&plStack_988);
  puVar14 = (undefined8 *)0x650;
  __Znwm();
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = &PTR_FUN_1109ad3a8;
  puVar34 = puVar14 + 3;
  func_0x0001073f5b14(puVar34,auStack_6b8);
  auStack_7b8[0] = 0;
  uStack_7c0 = 0;
  func_0x0001073f5aec(&uStack_7c0);
  param_3[0x2f] = puVar34;
  param_3[0x30] = puVar14;
  plStack_c20 = (long *)0x0;
  plStack_c18 = (long *)0x0;
  func_0x0001073f5aec(&plStack_c20);
  func_0x0001073fa2c4();
  param_3[0x31] = param_4[9];
  FUN_1073dd510(param_3 + 0x32,param_4[0xb]);
  *(undefined1 *)(param_3 + 0x39) = 0;
  *(undefined1 *)(param_3 + 0x3a) = 0;
  *(undefined1 *)(param_3 + 0x42) = 0;
  param_3[0x35] = 0;
  param_3[0x36] = 0;
  param_3[0x34] = 0;
  *(undefined1 *)(param_3 + 0x37) = 0;
  plStack_988 = (long *)CONCAT44(plStack_988._4_4_,0x2f);
  uStack_970 = 0;
  uStack_950 = 0;
  uStack_958 = 0;
  func_0x0001073fa35c();
  uStack_960 = 0;
  puStack_948 = (undefined8 *)CONCAT44(puStack_948._4_4_,extraout_w8);
  uStack_940 = 0;
  uStack_93c = 1;
  uStack_928 = 0;
  uStack_938 = 0;
  uStack_930 = 0;
  FUN_10743cc34(auStack_6b8,&plStack_988,1);
  FUN_10743d7bc(&uStack_7c0,auStack_6b8);
  func_0x000107288cd8(auStack_6b8);
  func_0x000107262330(&plStack_988);
  func_0x0001073fa2a4(auStack_7f8);
  FUN_107371bc4(auStack_7b8,"source",auStack_7f8);
  func_0x000104c2f714(auStack_7f8);
  func_0x0001073fa164();
  func_0x00010729d56c(auStack_7b8);
  func_0x0001073fa4f4();
  lVar41 = *(long *)(*(long *)*param_5 + 8);
  puVar30 = (undefined8 *)((*(long *)(lVar41 + 0xfd0) - *(long *)(lVar41 + 0xfc8)) / 0xe98 & 0xffff)
  ;
  for (puVar14 = (undefined8 *)0x0; puVar14 != puVar30; puVar14 = (undefined8 *)((long)puVar14 + 1))
  {
    plStack_980 = *(long **)(*param_4 + 0x58);
    plStack_988 = (long *)CONCAT44(plStack_988._4_4_,*(undefined4 *)(param_3 + 0x19));
    uStack_978 = 0x7fffffffffffffff;
    uStack_960 = 0;
    uStack_958 = CONCAT71(uStack_958._1_7_,1);
    uStack_950 = 0;
    puStack_948 = puVar38;
    FUN_1073f4604(auStack_6b8,*(long *)(lVar41 + 0xfc8) + (long)puVar14 * 0xe98 + 0x38,&plStack_988)
    ;
    uVar21 = param_3[0x15];
    if (uVar21 < (ulong)param_3[0x16]) {
      func_0x0001073f5b14(uVar21,auStack_6b8);
      lVar32 = uVar21 + 0x638;
    }
    else {
      lVar32 = uVar21 - *plVar31;
      if (puVar34 < (undefined8 *)(lVar32 / 0x638 + 1U)) {
        FUN_1073f5f34();
        goto LAB_1073f4284;
      }
      func_0x0001073fa33c((param_3[0x16] - *plVar31) / 0x638);
      puVar23 = extraout_x9;
      if (0x149539e3b2d065 < extraout_x8_00) {
        puVar23 = puVar34;
      }
      if (puVar23 == (undefined8 *)0x0) {
        lVar15 = 0;
      }
      else {
        if (puVar34 < puVar23) {
          func_0x000104bd35f4();
          goto LAB_1073f4284;
        }
        lVar15 = (long)puVar23 * extraout_x11;
        __Znwm();
      }
      lVar32 = lVar15 + lVar32;
      func_0x0001073f5b14(lVar32,auStack_6b8);
      puVar36 = (undefined8 *)param_3[0x14];
      puVar4 = (undefined8 *)param_3[0x15];
      lVar35 = lVar32 + (((long)puVar4 - (long)puVar36) / -0x638) * 0x638;
      lVar16 = lVar35;
      for (puVar34 = puVar36; puVar34 != puVar4; puVar34 = puVar34 + 199) {
        func_0x0001073f5b14(lVar16,puVar34);
        lVar16 = lVar16 + 0x638;
      }
      func_0x0001073fa4f4(lVar16);
      for (; puVar36 != puVar4; puVar36 = puVar36 + 199) {
        func_0x0001073e6fa4(puVar36);
      }
      lVar32 = lVar32 + 0x638;
      lVar16 = param_3[0x14];
      param_3[0x14] = lVar35;
      param_3[0x15] = lVar32;
      param_3[0x16] = lVar15 + (long)puVar23 * 0x638;
      if (lVar16 != 0) {
        __ZdlPv();
      }
    }
    param_3[0x15] = lVar32;
    func_0x0001073fa2c4();
  }
  plVar17 = (long *)param_5[1];
  for (plVar33 = (long *)*param_5; plVar33 != plVar17; plVar33 = plVar33 + 2) {
    func_0x0001073dcf6c(puVar40 + 1,*(long *)(*plVar33 + 8) + 8,plVar33);
  }
  FUN_107338c30(param_3 + 0x37,lVar41 + 0xd0);
  lVar32 = param_4[8];
  uStack_c30 = param_3[0x31];
  ppuStack_c38 = &PTR_DAT_1109b27e0;
  plVar17 = (long *)param_3[0x17];
  (**(code **)(*plVar17 + 0x10))();
  plVar33 = (long *)(ulong)*(uint *)(param_3 + 0x19);
  func_0x0001077512dc(&plStack_988);
  lStack_890 = *param_4 + 4;
  lStack_8a0 = param_4[6];
  pppuStack_888 = &ppuStack_c38;
  puStack_898 = param_3 + 0x32;
  func_0x0001073fa2a4(&plStack_c20);
  func_0x0001073fa1c0();
  (**(code **)(extraout_x8_01 + 0x20))(auStack_be8);
  func_0x00010775147c(&plStack_988,&plStack_c20);
  func_0x000107751334(auStack_6b8,&plStack_988);
  func_0x000107267eac(&plStack_c20);
  func_0x0001073fa128();
  auStack_9d0[0] = 0;
  uStack_998 = 0;
  puStack_c50 = (undefined8 *)0x0;
  puStack_c48 = (undefined8 *)0x0;
  puStack_c40 = (undefined8 *)0x0;
  puStack_990 = puVar38;
  if (plVar17 != (long *)0x0) {
    if ((long *)0xaaaaaaaaaaaaaaa < plVar17) goto LAB_1073f4280;
    FUN_1073f7460(&plStack_988,plVar17,0,&puStack_c40);
    func_0x0001073f74cc(&puStack_c50,&plStack_988);
    FUN_1073f757c(&plStack_988);
  }
  for (plVar37 = (long *)0x0; puVar14 = puStack_c48, puVar34 = puStack_c50,
      puVar8 = PTR___ZSt7nothrow_1103469d8, fVar45 = SUB84(plVar33,0), plVar37 != plVar17;
      plVar37 = (long *)((long)plVar37 + 1)) {
    func_0x0001073fa1c0();
    (**(code **)(extraout_x8_02 + 0x18))(&plStack_ac0);
    (**(code **)(*plStack_ac0 + 0x30))();
    func_0x00010726236c(&plStack_988);
    func_0x000107262398(&plStack_c20,&plStack_988,0x1138369c0);
    lVar15 = lVar32;
    func_0x000107869b38(&plStack_a40,lVar32,&plStack_c20);
    func_0x00010786967c();
    FUN_1073dcf84(&uStack_b60,&plStack_a40,lVar15);
    FUN_1073de9d8(&plStack_a40);
    func_0x0001073fa130();
    func_0x0001073fa19c();
    lStack_af8 = lStack_ab8;
    plStack_b00 = plStack_ac0;
    plVar33 = plStack_ac0;
    if (lStack_ab8 != 0) {
      do {
        func_0x0001073fa1b0();
      } while (extraout_w10 != 0);
    }
    func_0x0001073fa2a4(&plStack_a40);
    func_0x0001073fa1c0();
    (**(code **)(extraout_x8_03 + 0x20))(auStack_a08);
    func_0x0001073fa440();
    func_0x000107751444(auStack_6b8,&plStack_b00,&plStack_c20);
    puStack_5d8 = &uStack_b60;
    func_0x0001073fa40c();
    func_0x000107267e8c(&plStack_c20);
    func_0x0001073fa2b4();
    func_0x000107267e44(&plStack_b00);
    uVar21 = lVar41 + 0xd0;
    func_0x0001073fa0b4();
    func_0x00010777faa8();
    if ((uVar21 & 1) != 0) {
      bVar3 = *(int *)(lVar41 + 0x2d0) == 0;
      if (bVar3) {
        unaff_d8 = (long *)(ulong)((uint)unaff_d8 & 0xffffff00);
      }
      else {
        plStack_c20 = (long *)((ulong)plStack_c20 & 0xffffffff00000000);
        FUN_1073f60e4(&plStack_988,auStack_9d0,param_3[0x2f] + 0x108,&plStack_c20);
        unaff_d8 = plVar33;
      }
      uStack_a2c = !bVar3;
      plStack_a40 = plStack_ac0;
      lStack_a38 = lStack_ab8;
      if (lStack_ab8 != 0) {
        plVar1 = (long *)(lStack_ab8 + 8);
        do {
          cVar6 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      uStack_a30 = SUB84(unaff_d8,0);
      if (puStack_c48 < puStack_c40) {
        *puStack_c48 = plStack_ac0;
        puStack_c48[1] = lStack_ab8;
        func_0x0001073fa508();
        puVar34 = (undefined8 *)(extraout_x8_04 + 0x18);
      }
      else {
        lVar15 = ((long)puStack_c48 - (long)puStack_c50) / 0x18;
        uVar21 = lVar15 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar21) {
          FUN_1073f7454();
          goto LAB_1073f4284;
        }
        uVar25 = ((long)puStack_c40 - (long)puStack_c50) / 0x18;
        uVar24 = uVar25 * 2;
        if (uVar24 < uVar21 || uVar24 - uVar21 == 0) {
          uVar24 = uVar21;
        }
        if (0x555555555555554 < uVar25) {
          uVar24 = 0xaaaaaaaaaaaaaaa;
        }
        FUN_1073f7460(&plStack_c20,uVar24,lVar15,&puStack_c40);
        puStack_c10[1] = lStack_a38;
        *puStack_c10 = plStack_a40;
        plVar33 = plStack_a40;
        func_0x0001073fa508();
        puStack_c10 = (undefined8 *)(extraout_x8_05 + 0x18);
        func_0x0001073f74cc(&puStack_c50,&plStack_c20);
        puVar34 = puStack_c48;
        FUN_1073f757c(&plStack_c20);
      }
      puStack_c48 = puVar34;
      FUN_107330fdc(&plStack_a40);
    }
    func_0x0001073fa128();
    func_0x00010726b264(&uStack_b60);
    FUN_107330fdc(&plStack_ac0);
  }
  plStack_980 = (long *)0x0;
  plStack_988 = (long *)0x0;
  plVar17 = (long *)(((long)puStack_c48 - (long)puStack_c50) / 0x18);
  plVar37 = plVar17;
  if ((long)puStack_c48 - (long)puStack_c50 < 1) {
    plVar37 = (long *)0x0;
  }
  else {
    for (; plVar37 != (long *)0x0; plVar37 = (long *)((ulong)plVar37 >> 1)) {
      lVar15 = (long)plVar37 * 0x18;
      __ZnwmRKSt9nothrow_t(lVar15,puVar8);
      fVar45 = SUB84(plVar33,0);
      if (lVar15 != 0) goto LAB_1073f3600;
    }
    lVar15 = 0;
LAB_1073f3600:
    plStack_c20 = (long *)0x0;
    plStack_c18 = plVar37;
    FUN_1073f78c4(&plStack_988,lVar15);
    plStack_980 = plVar37;
    func_0x0001073f75c4(&plStack_c20);
  }
  FUN_1073f75e4(puVar34,puVar14,plVar17,plStack_988,plVar37);
  func_0x0001073f75c4(&plStack_988);
  plStack_988 = (long *)((ulong)plStack_988 & 0xffffffff00000000);
  FUN_1073f60e4(auStack_6b8,auStack_9d0,param_3[0x2f] + 0x1f0,&plStack_988);
  FUN_1073f610c(alStack_c68,(*(long *)(lVar41 + 0xfd0) - *(long *)(lVar41 + 0xfc8)) / 0xe98);
  puVar34 = (undefined8 *)0x0;
  plVar33 = param_3 + 0x20;
  iVar19 = (int)fVar45;
LAB_1073f3690:
  if (puVar34 != puVar30) {
    if (*(int *)(*(long *)(lVar41 + 0xfc8) + (long)puVar34 * 0xe98 + 0x568) != 0) {
      lVar15 = *plVar31 + (long)puVar34 * 0x638;
      func_0x0001073f4dc0(auStack_a78);
      if (*(int *)(lVar15 + 0x4a0) == 0) {
        func_0x000104c2fe00(&plStack_a40,lVar15 + 0x438);
      }
      else {
        plStack_988 = (long *)((ulong)plStack_988 & 0xffffffffffffff00);
        uStack_950 = uStack_950 & 0xffffffffffffff00;
        puStack_948 = (undefined8 *)0x0;
        func_0x000104c2fe00(&plStack_c20,auStack_a78);
        FUN_1073393c0(&plStack_a40,lVar15 + 0x438,auStack_6b8,&plStack_988,&plStack_c20);
        func_0x0001073fa130();
        func_0x0001073fa19c();
      }
      func_0x000104c2f714(auStack_a78);
      uVar21 = 0;
      func_0x000104c2d614();
      if ((uVar21 & 1) == 0) {
        for (puVar40 = (undefined8 *)0x0; puVar40 != puVar30;
            puVar40 = (undefined8 *)((long)puVar40 + 1)) {
          lVar15 = *(long *)(lVar41 + 0xfc8) + (long)puVar40 * 0xe98;
          func_0x000104c32db4(lVar15,&plStack_a40);
          if ((int)lVar15 != 0) {
            if (puVar34 != (undefined8 *)((ulong)puVar40 & 0xffff)) {
              lVar15 = *plVar31 + (long)puVar34 * 0x638;
              if (*(int *)(lVar15 + 0x4d8) == 0) {
                uVar12 = *(undefined1 *)(lVar15 + 0x4a8);
              }
              else {
                plStack_988 = (long *)((ulong)plStack_988 & 0xffffffffffffff00);
                uStack_950 = uStack_950 & 0xffffffffffffff00;
                puStack_948 = (undefined8 *)0x0;
                lVar15 = lVar15 + 0x4a8;
                FUN_10733b408(lVar15,auStack_6b8,&plStack_988,0);
                uVar12 = (undefined1)lVar15;
                func_0x0001073fa19c();
              }
              puVar38 = (undefined8 *)param_3[0x1f];
              if (puVar38 == (undefined8 *)0x0) goto LAB_1073f3844;
              uVar21 = (long)puVar38 - 1;
              if (((ulong)puVar38 & uVar21) == 0) {
                puVar14 = (undefined8 *)((long)puVar38 + 0xffffU & (ulong)puVar34);
              }
              else {
                puVar14 = puVar34;
                if (puVar38 <= puVar34) {
                  uVar13 = (uint)puVar38 & 0xffff;
                  uVar2 = (uint)puVar34 & 0xffff;
                  uVar7 = 0;
                  if (((ulong)puVar38 & 0xffff) != 0) {
                    uVar7 = uVar2 / uVar13;
                  }
                  puVar14 = (undefined8 *)(ulong)(uVar2 - uVar7 * uVar13);
                }
              }
              plVar17 = *(long **)(*plVar20 + (long)puVar14 * 8);
              if (plVar17 != (long *)0x0) goto LAB_1073f37f8;
              goto LAB_1073f3844;
            }
            break;
          }
        }
      }
      goto LAB_1073f3720;
    }
    goto LAB_1073f3728;
  }
  plStack_c20 = (long *)0x0;
  plStack_c18 = (long *)0x0;
  puStack_c10 = (undefined8 *)0x0;
  plVar31 = plVar33;
  while (plVar17 = plStack_c18, plVar31 = (long *)*plVar31, plVar37 = plStack_c20,
        plVar31 != (long *)0x0) {
    plVar17 = plVar20;
    func_0x0001073f8380(plVar20,*(undefined2 *)((long)plVar31 + 0x12));
    if (plVar17 != (long *)0x0) {
      FUN_1073bcd74(&plStack_c20,plVar31 + 2);
    }
  }
  for (; plVar37 != plVar17; plVar37 = (long *)((long)plVar37 + 2)) {
    plVar31 = plVar20;
    func_0x0001073f8380(plVar20,(short)*plVar37);
    if (plVar31 != (long *)0x0) {
      uVar24 = param_3[0x1f];
      uVar21 = plVar31[1];
      uVar25 = uVar24 - 1;
      if ((uVar24 & uVar25) == 0) {
        uVar21 = uVar25 & uVar21;
      }
      else if (uVar24 <= uVar21) {
        uVar27 = 0;
        if (uVar24 != 0) {
          uVar27 = uVar21 / uVar24;
        }
        uVar21 = uVar21 - uVar27 * uVar24;
      }
      lVar15 = *plVar31;
      lVar16 = *plVar20;
      plVar1 = *(long **)(lVar16 + uVar21 * 8);
      do {
        plVar26 = plVar1;
        plVar1 = (long *)*plVar26;
      } while ((long *)*plVar26 != plVar31);
      if (plVar26 == plVar33) {
LAB_1073f3a50:
        if (lVar15 == 0) {
LAB_1073f3a84:
          *(undefined8 *)(lVar16 + uVar21 * 8) = 0;
          lVar15 = *plVar31;
          goto LAB_1073f3a8c;
        }
        uVar27 = *(ulong *)(lVar15 + 8);
        if ((uVar24 & uVar25) == 0) {
          uVar28 = uVar27 & uVar25;
        }
        else {
          uVar28 = uVar27;
          if (uVar24 <= uVar27) {
            uVar28 = 0;
            if (uVar24 != 0) {
              uVar28 = uVar27 / uVar24;
            }
            uVar28 = uVar27 - uVar28 * uVar24;
          }
        }
        if (uVar28 != uVar21) goto LAB_1073f3a84;
LAB_1073f3a94:
        if ((uVar24 & uVar25) == 0) {
          uVar27 = uVar27 & uVar25;
        }
        else if (uVar24 <= uVar27) {
          uVar25 = 0;
          if (uVar24 != 0) {
            uVar25 = uVar27 / uVar24;
          }
          uVar27 = uVar27 - uVar25 * uVar24;
        }
        if (uVar27 != uVar21) {
          *(long **)(lVar16 + uVar27 * 8) = plVar26;
          lVar15 = *plVar31;
        }
      }
      else {
        uVar27 = plVar26[1];
        if ((uVar24 & uVar25) == 0) {
          uVar27 = uVar27 & uVar25;
        }
        else if (uVar24 <= uVar27) {
          uVar28 = 0;
          if (uVar24 != 0) {
            uVar28 = uVar27 / uVar24;
          }
          uVar27 = uVar27 - uVar28 * uVar24;
        }
        if (uVar27 != uVar21) goto LAB_1073f3a50;
LAB_1073f3a8c:
        if (lVar15 != 0) {
          uVar27 = *(ulong *)(lVar15 + 8);
          goto LAB_1073f3a94;
        }
      }
      *plVar26 = lVar15;
      *plVar31 = 0;
      param_3[0x21] = param_3[0x21] + -1;
      uStack_978 = 1;
      plStack_988 = plVar31;
      plStack_980 = plVar33;
      func_0x0001073fa404();
    }
  }
  func_0x00010730b05c(&plStack_c20);
  puVar14 = puStack_c48;
  for (puVar34 = puStack_c50; uVar12 = 1, puVar34 != puVar14; puVar34 = puVar34 + 3) {
    plVar31 = (long *)*puVar34;
    (**(code **)(*plVar31 + 0x30))();
    func_0x000107269bac(&plStack_ac0,plVar31);
    func_0x00010726236c(&plStack_b00,&plStack_ac0);
    func_0x0001072e7640(&plStack_988,&plStack_b00,0x1138369c0);
    lVar15 = lVar32;
    func_0x000107869b38(&plStack_c20,lVar32,&plStack_988);
    func_0x00010786967c();
    FUN_1073dcf84(auStack_c80,&plStack_c20,lVar15);
    FUN_1073de9d8(&plStack_c20);
    func_0x000104c2f714(&plStack_988);
    uStack_b58 = puVar34[1];
    uVar43 = *puVar34;
    uStack_b60 = uVar43;
    if (puVar34[1] != 0) {
      do {
        func_0x0001073fa1b0();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001073fa2a4(&plStack_a40);
    func_0x0001073fa1c0();
    (**(code **)(extraout_x8_06 + 0x20))(auStack_a08);
    func_0x0001073fa440();
    func_0x000107751444(auStack_6b8,&uStack_b60,&plStack_c20);
    puStack_5d8 = auStack_c80;
    func_0x0001073fa40c();
    func_0x000107267e8c(&plStack_c20);
    func_0x0001073fa2b4();
    func_0x000107267e44(&uStack_b60);
    if ((iVar19 != 0) &&
       (uVar12 = param_3[0x1d] == (long)iVar19, (ulong)(long)iVar19 <= (ulong)param_3[0x1d])) {
      func_0x0001073fa128();
      func_0x0001073fa424();
      func_0x0001073fa438();
      func_0x0001073fa3e4();
      break;
    }
    plVar31 = plVar22;
    FUN_1073f4dc4(plVar22,&plStack_ac0);
    func_0x00010777fb74(&plStack_c20,lVar41 + 0xb0,&plStack_988);
    FUN_10737ef78(plVar31 + 6,&plStack_c20);
    func_0x000107283194(&plStack_c20);
    func_0x000107299380(plVar31 + 8,lVar41 + 0xc0);
    uVar42 = *(undefined4 *)(puVar34 + 2);
    *(undefined1 *)((long)plVar31 + 0x2c) = *(undefined1 *)((long)puVar34 + 0x14);
    *(undefined4 *)(plVar31 + 5) = uVar42;
    if (*(int *)(lVar41 + 0x298) != 0) {
      func_0x0001072d124c(&plStack_c20);
      func_0x0001073fa0b4(&plStack_a40);
      FUN_1073f6194();
      func_0x00010726b09c(&plStack_c20);
      func_0x0001073c3510(plVar31 + 3,&plStack_a40);
      func_0x00010726b09c(&plStack_a40);
      func_0x0001072d16b0(plVar31 + 3);
      FUN_1073f84f8(*(undefined8 *)plVar31[3],((undefined8 *)plVar31[3])[1]);
    }
    if (*(int *)(lVar41 + 0x1e0) != 0) {
      func_0x0001072d124c(&plStack_a40);
      func_0x0001073fa0b4(&uStack_b60);
      FUN_1073f6194();
      func_0x00010726b09c(&plStack_a40);
      FUN_1073ef584(&plStack_c20,&uStack_b60);
      func_0x00010726b09c(&uStack_b60);
      func_0x0001073730ac(&plStack_a40);
      FUN_10737ef78(plVar31 + 10,&plStack_a40);
      func_0x000107283194(&plStack_a40);
      func_0x0001073730cc(plVar31 + 10);
      FUN_1073f4f68(plVar31[10],plStack_c20,plStack_c18);
      func_0x00010726e078(&plStack_c20);
    }
    for (puVar40 = (undefined8 *)0x0; puVar40 != puVar30;
        puVar40 = (undefined8 *)((long)puVar40 + 1)) {
      lVar15 = *(long *)(lVar41 + 0xfc8) + (long)puVar40 * 0xe98;
      if (*(int *)(lVar15 + 0x6b8) == 0) {
LAB_1073f3da4:
        plStack_c20 = (long *)((ulong)plStack_c20 & 0xffffffff00000000);
        func_0x0001073fa0b4(lVar15 + 0x6f8);
        func_0x0001073837dc();
        if ((*(int *)(lVar15 + 0x728) != 0) && ((int)(float)uVar43 != 0)) {
          uVar13 = *(uint *)(alStack_c68[0] + (long)puVar40 * 4);
          if ((ulong)(long)(int)(float)uVar43 <= (ulong)uVar13) goto LAB_1073f41bc;
          *(uint *)(alStack_c68[0] + (long)puVar40 * 4) = uVar13 + 1;
        }
        FUN_1073f628c(&plStack_a40);
        if (*(int *)(lVar15 + 0x438) == 0) {
          plStack_c20 = (long *)((ulong)plStack_c20 & 0xffffffffffffff00);
          cStack_bc0 = '\0';
          uVar44 = uVar43;
          fVar45 = param_2;
        }
        else if (*(int *)(lVar15 + 0x438) == 1) {
          FUN_1073f62a4(&plStack_c20,lVar15 + 0x3a8);
          uVar44 = uVar43;
          fVar45 = param_2;
        }
        else {
          func_0x0001073fa0b4(&plStack_c20,lVar15 + 0x3a8);
          FUN_1073df130();
          uVar44 = uVar43;
          fVar45 = param_2;
        }
        if (cStack_bc0 == '\x01') {
          func_0x00010726ccd4(&uStack_b60,&plStack_c20);
        }
        else {
          func_0x000107278acc(&uStack_b60,&plStack_a40);
        }
        func_0x00010726b144(&plStack_c20);
        func_0x00010726b164(&plStack_a40);
        uVar21 = 0;
        func_0x000104c2d614();
        if ((uVar21 & 1) == 0) {
          plStack_c20 = (long *)((ulong)plStack_c20 & 0xffffffffffffff00);
          func_0x0001073dcf54(param_4[3],&uStack_b60,&plStack_c20);
        }
        func_0x0001073fa44c();
        bVar9 = bStack_c08;
        func_0x0001001148fc(&plStack_c20);
        if (bVar9 == 1) {
          func_0x0001073fa44c();
          if ((bStack_c08 & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_1073f4284;
          }
          func_0x0001000fecf4(param_3 + 0x34,&plStack_c20);
          func_0x0001001148fc(&plStack_c20);
        }
        plStack_c20 = (long *)0x0;
        func_0x0001073fa0b4(lVar15 + 0x4b8);
        FUN_1073f62c0();
        uVar43 = uVar44;
        param_2 = fVar45;
        FUN_1073f6414(&plStack_c20);
        func_0x0001073fa0b4(&plStack_a40,lVar15 + 0x440);
        FUN_10738380c();
        func_0x0001073fa130();
        if (*(int *)(lVar15 + 0x4b0) != 0) {
          func_0x000104c2d614(&plStack_a40);
        }
        func_0x000104c2fe00(&plStack_c20,&uStack_b60);
        func_0x00010724ef84(auStack_be8,&plStack_a40);
        uStack_bd0 = SUB82(puVar40,0);
        func_0x000104c2fe00(auStack_bc8,&uStack_b60);
        uStack_b90 = 0;
        uStack_b88 = 0;
        if (*(int *)(lVar15 + 0x328) == 0) {
          uVar13 = 0;
        }
        else if (*(int *)(lVar15 + 0x328) == 1) {
          uVar13 = *(byte *)(lVar15 + 0x2f8) | 0x100;
        }
        else {
          uVar13 = (int)lVar15 + 0x2f8;
          func_0x0001073fa0b4();
          FUN_10733b448();
        }
        bStack_b84 = (byte)uVar13 & (byte)((int)(uVar13 << 0x17) >> 0x1f);
        bVar3 = *(int *)(lVar15 + 0x5d8) == 0;
        if (bVar3) {
          uStack_b80 = uStack_b80 & 0xffffff00;
        }
        else {
          uStack_c24 = 0;
          func_0x0001073fa0b4(lVar15 + 0x5a8);
          func_0x0001073837dc();
          uStack_b80 = (uint)uVar43;
        }
        uStack_b7c = !bVar3;
        bVar3 = *(int *)(lVar15 + 0x610) == 0;
        if (bVar3) {
          uStack_b78 = uStack_b78 & 0xffffff00;
        }
        else {
          uStack_c24 = 0;
          func_0x0001073fa0b4(lVar15 + 0x5e0);
          func_0x0001073837dc();
          uStack_b78 = (uint)uVar43;
        }
        uStack_b74 = !bVar3;
        uStack_c24 = uStack_c24 & 0xffffff00;
        cVar6 = (char)lVar15;
        cVar10 = cVar6 + -0x40;
        func_0x0001073fa018();
        cStack_b70 = cVar10;
        uStack_c24 = uStack_c24 & 0xffffff00;
        cVar10 = cVar6 + 'h';
        func_0x0001073fa018();
        cStack_b6f = cVar10;
        uStack_c24 = uStack_c24 & 0xffffff00;
        cVar10 = cVar6 + '\x18';
        func_0x0001073fa018();
        cStack_b6e = cVar10;
        uStack_c24 = uStack_c24 & 0xffffff00;
        cVar6 = cVar6 + '0';
        func_0x0001073fa018();
        cStack_b6d = cVar6;
        uStack_b6c = (undefined4)uVar44;
        fStack_b68 = fVar45;
        if (*(int *)(lVar15 + 0x680) == 0) {
          uVar13 = 0;
        }
        else if (*(int *)(lVar15 + 0x680) == 1) {
          uVar13 = *(byte *)(lVar15 + 0x650) | 0x100;
        }
        else {
          uVar13 = (uint)*(undefined8 *)(lVar15 + 0x650);
          func_0x0001073fa0b4();
          FUN_1073f6498();
        }
        bStack_b64 = (byte)uVar13 & (byte)((int)(uVar13 << 0x17) >> 0x1f);
        if (*(int *)(lVar15 + 0x6f0) == 0) {
          uVar21 = 0;
        }
        else if (*(int *)(lVar15 + 0x6f0) == 1) {
          uVar21 = (ulong)(*(byte *)(lVar15 + 0x6c0) | 0x100);
        }
        else {
          uVar21 = *(ulong *)(lVar15 + 0x6c0);
          func_0x0001073fa0b4();
          FUN_1073f650c();
        }
        uStack_b63 = (undefined1)uVar21;
        if ((uVar21 & 0x100) == 0) {
          uStack_b63 = 1;
        }
        uStack_b62 = 0;
        uVar21 = plVar31[1];
        if (uVar21 < (ulong)plVar31[2]) {
          FUN_1073f6418(uVar21,&plStack_c20);
          lVar15 = uVar21 + 0xc0;
        }
        else {
          lVar15 = uVar21 - *plVar31;
          if (0x155555555555555 < lVar15 / 0xc0 + 1U) {
            FUN_1073f648c();
            goto LAB_1073f4284;
          }
          func_0x0001073fa33c((plVar31[2] - *plVar31) / 0xc0);
          uVar21 = extraout_x9_00;
          if (0xaaaaaaaaaaaaa9 < extraout_x8_07) {
            uVar21 = 0x155555555555555;
          }
          if (uVar21 == 0) {
            lVar16 = 0;
          }
          else {
            if (0x155555555555555 < uVar21) {
              func_0x000104bd35f4();
              goto LAB_1073f4284;
            }
            lVar16 = uVar21 * 0xc0;
            __Znwm();
          }
          lVar15 = lVar16 + lVar15;
          FUN_1073f6418(lVar15,&plStack_c20);
          lVar39 = *plVar31;
          lVar5 = plVar31[1];
          lVar29 = lVar15 + ((lVar5 - lVar39) / -0xc0) * 0xc0;
          lVar18 = lVar29;
          for (lVar35 = lVar39; lVar35 != lVar5; lVar35 = lVar35 + 0xc0) {
            FUN_1073f6418(lVar18,lVar35);
            lVar18 = lVar18 + 0xc0;
          }
          for (; lVar39 != lVar5; lVar39 = lVar39 + 0xc0) {
            func_0x0001073e6eac(lVar39);
          }
          lVar15 = lVar15 + 0xc0;
          lVar35 = *plVar31;
          *plVar31 = lVar29;
          plVar31[1] = lVar15;
          plVar31[2] = lVar16 + uVar21 * 0xc0;
          if (lVar35 != 0) {
            __ZdlPv();
          }
        }
        plVar31[1] = lVar15;
        func_0x0001073e6eac(&plStack_c20);
        func_0x0001073fa2bc();
        func_0x00010726b164(&uStack_b60);
      }
      else {
        if (*(int *)(lVar15 + 0x6b8) == 1) {
          uVar13 = *(byte *)(lVar15 + 0x688) | 0x100;
        }
        else {
          uVar13 = (uint)*(undefined8 *)(lVar15 + 0x688);
          func_0x0001073fa0b4();
          FUN_1073f6218();
        }
        if (((uVar13 ^ 0xffffffff) & 0x101) != 0) goto LAB_1073f3da4;
      }
LAB_1073f41bc:
    }
    func_0x0001073fa128();
    func_0x0001073fa424();
    func_0x0001073fa438();
    func_0x0001073fa3e4();
  }
  func_0x00010731e26c(alStack_c68);
  FUN_1073f4fa0(&puStack_c50);
  func_0x00010724b3d8(auStack_9d0);
  func_0x000107267da8(auStack_6b8);
  FUN_10743d7e4(&uStack_7c0);
  func_0x0001073f9f10(uStack_80);
  if ((bool)uVar12) {
    return param_3;
  }
  ___stack_chk_fail();
LAB_1073f4280:
  FUN_1073f7454();
LAB_1073f4284:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1073f4288);
  (*pcVar11)();
  while( true ) {
    if (((ulong)puVar38 & uVar21) == 0) {
      puVar23 = (undefined8 *)((ulong)puVar23 & uVar21);
    }
    else if (puVar38 <= puVar23) {
      uVar24 = 0;
      if (puVar38 != (undefined8 *)0x0) {
        uVar24 = (ulong)puVar23 / (ulong)puVar38;
      }
      puVar23 = (undefined8 *)((long)puVar23 - uVar24 * (long)puVar38);
    }
    if (puVar23 != puVar14) break;
LAB_1073f37f8:
    plVar17 = (long *)*plVar17;
    if (plVar17 == (long *)0x0) break;
    puVar23 = (undefined8 *)plVar17[1];
    if (puVar23 == puVar34) {
      if (puVar34 == (undefined8 *)(ulong)*(ushort *)(plVar17 + 2)) goto LAB_1073f3968;
      goto LAB_1073f37f8;
    }
  }
LAB_1073f3844:
  plVar17 = (long *)0x18;
  __Znwm();
  uStack_978 = 1;
  *plVar17 = 0;
  plVar17[1] = (long)puVar34;
  *(short *)(plVar17 + 2) = (short)puVar34;
  *(undefined4 *)((long)plVar17 + 0x12) = 0;
  param_2 = *(float *)(param_3 + 0x22);
  plStack_988 = plVar17;
  if ((puVar38 == (undefined8 *)0x0) ||
     (plStack_980 = plVar33, param_2 * (float)puVar38 < (float)(param_3[0x21] + 1))) {
    plStack_980 = plVar33;
    func_0x0001073fa3a8((long)puVar38 << 1);
    FUN_1073f8154(plVar20);
    puVar38 = (undefined8 *)param_3[0x1f];
    if (((ulong)puVar38 & (long)puVar38 - 1U) == 0) {
      puVar14 = (undefined8 *)((long)puVar38 + 0xffffU & (ulong)puVar34);
    }
    else {
      puVar14 = puVar34;
      if (puVar38 <= puVar34) {
        uVar21 = 0;
        if (puVar38 != (undefined8 *)0x0) {
          uVar21 = (ulong)puVar34 / (ulong)puVar38;
        }
        puVar14 = (undefined8 *)((long)puVar34 - uVar21 * (long)puVar38);
      }
    }
  }
  plVar17 = plStack_988;
  lVar15 = *plVar20;
  plVar37 = *(long **)(lVar15 + (long)puVar14 * 8);
  if (plVar37 == (long *)0x0) {
    *plStack_988 = *plVar33;
    *plVar33 = (long)plStack_988;
    *(long **)(lVar15 + (long)puVar14 * 8) = plVar33;
    if (*plStack_988 != 0) {
      puVar23 = *(undefined8 **)(*plStack_988 + 8);
      if (((ulong)puVar38 & (long)puVar38 - 1U) == 0) {
        puVar23 = (undefined8 *)((ulong)puVar23 & (long)puVar38 - 1U);
      }
      else if (puVar38 <= puVar23) {
        uVar21 = 0;
        if (puVar38 != (undefined8 *)0x0) {
          uVar21 = (ulong)puVar23 / (ulong)puVar38;
        }
        puVar23 = (undefined8 *)((long)puVar23 - uVar21 * (long)puVar38);
      }
      *(long **)(lVar15 + (long)puVar23 * 8) = plStack_988;
    }
  }
  else {
    *plStack_988 = *plVar37;
    *plVar37 = (long)plStack_988;
  }
  plStack_988 = (long *)0x0;
  param_3[0x21] = param_3[0x21] + 1;
  func_0x0001073fa404();
LAB_1073f3968:
  *(short *)((long)plVar17 + 0x12) = (short)puVar40;
  *(undefined1 *)((long)plVar17 + 0x14) = uVar12;
LAB_1073f3720:
  func_0x0001073fa2bc();
LAB_1073f3728:
  puVar34 = (undefined8 *)((long)puVar34 + 1);
  goto LAB_1073f3690;
}



/* Entry: 1073f4604; end: 1073f4daf;  */

void FUN_1073f4604(undefined8 param_1,undefined8 param_2,undefined8 **param_3)

{
  undefined1 in_ZR;
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long unaff_x19;
  long unaff_x20;
  undefined8 **ppuStack_690;
  undefined1 uStack_688;
  undefined8 *puStack_658;
  undefined1 uStack_650;
  undefined8 *puStack_620;
  undefined1 uStack_618;
  undefined8 *puStack_5e8;
  uint uStack_5e0;
  undefined8 *puStack_5b0;
  undefined4 uStack_5a8;
  undefined1 auStack_578 [56];
  undefined1 auStack_540 [56];
  undefined1 auStack_508 [56];
  undefined1 auStack_4d0 [56];
  undefined1 auStack_498 [56];
  undefined1 auStack_460 [56];
  undefined1 auStack_428 [56];
  undefined1 auStack_3f0 [56];
  undefined1 auStack_3b8 [72];
  undefined1 auStack_370 [56];
  undefined1 auStack_338 [72];
  undefined1 auStack_2f0 [56];
  undefined8 *puStack_2b8;
  undefined4 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 auStack_2a0 [14];
  undefined1 auStack_230 [64];
  undefined8 *puStack_1f0;
  undefined1 auStack_1e8 [120];
  undefined8 *puStack_170;
  undefined4 auStack_168 [38];
  undefined8 *puStack_d0;
  undefined1 uStack_c8;
  undefined8 *puStack_98;
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  ppuVar1 = param_3;
  func_0x0001073fa0f8();
  func_0x0001073f9f38();
  auStack_168[0] = 0;
  puStack_170 = ppuVar1;
  uStack_58 = extraout_x8;
  FUN_1073dd8d8(auStack_2f0,&puStack_170);
  func_0x0001072d124c(&puStack_1f0);
  puStack_170 = param_3;
  func_0x0001073fa4bc();
  FUN_1073f1a6c(auStack_338,&puStack_170,unaff_x20 + 0x38);
  func_0x00010726b09c(auStack_168);
  func_0x0001073fa294();
  auStack_168[0] = CONCAT31(auStack_168[0]._1_3_,1);
  puStack_170 = param_3;
  FUN_1073e9538(auStack_370,&puStack_170,unaff_x20 + 0x80);
  func_0x0001073fa288();
  ppuVar1 = &puStack_170;
  FUN_1073dd608(ppuVar1,unaff_x20 + 0xb8);
  func_0x0001072d124c(&puStack_1f0);
  puStack_170 = param_3;
  func_0x0001073fa4bc();
  FUN_1073f1a6c(auStack_3b8,&puStack_170,unaff_x20 + 0xf0);
  func_0x00010726b09c(auStack_168);
  func_0x0001073fa294();
  func_0x0001073fa4dc();
  FUN_1073dd8d8(auStack_3f0,&puStack_170,unaff_x20 + 0x138);
  func_0x0001073fa4dc();
  FUN_1073dd8d8(auStack_428,&puStack_170,unaff_x20 + 0x170);
  func_0x0001073fa4dc();
  FUN_1073dd8d8(auStack_460,&puStack_170,unaff_x20 + 0x1a8);
  auStack_168[0] = 0x3d4ccccd;
  puStack_170 = param_3;
  FUN_1073dd8d8(auStack_498,&puStack_170,unaff_x20 + 0x1e0);
  func_0x0001073fa288();
  FUN_1073f687c(unaff_x20 + 0x218);
  puStack_1f0 = &puStack_170;
  func_0x0001073fa3c0(*(undefined4 *)(unaff_x20 + 0x248));
  ppuVar2 = &puStack_1f0;
  (*(code *)(&PTR_FUN_1109ad2f0)[extraout_x8_00])(ppuVar2,unaff_x20 + 0x218);
  func_0x0001073fa4dc();
  FUN_1073dd8d8(auStack_4d0,&puStack_170,unaff_x20 + 0x250);
  func_0x0001073fa288();
  FUN_1073e9538(auStack_508,&puStack_170,unaff_x20 + 0x288);
  func_0x0001073fa288();
  FUN_1073f6a04(auStack_540,&puStack_170,unaff_x20 + 0x2c0);
  func_0x0001073fa288();
  ppuVar3 = &puStack_170;
  FUN_1073dd608(ppuVar3,unaff_x20 + 0x2f8);
  func_0x0001073fa288();
  FUN_1073e9538(auStack_578,&puStack_170,unaff_x20 + 0x330);
  FUN_1073f628c(&puStack_2a8);
  puStack_1f0 = param_3;
  func_0x00010726ccd4(auStack_1e8,&puStack_2a8);
  FUN_1073f6b50(&puStack_170,&puStack_1f0,unaff_x20 + 0x368);
  func_0x00010726b164(auStack_1e8);
  func_0x00010726b164(&puStack_2a8);
  FUN_1073f6414(&puStack_98);
  puStack_2a8 = param_3;
  func_0x000104c318bc(auStack_2a0,&puStack_98);
  FUN_1073ddb98(&puStack_1f0,&puStack_2a8,unaff_x20 + 0x408);
  func_0x0001073fa2e4();
  func_0x000104c2f714(&puStack_98);
  auStack_2a0[0] = 0;
  puStack_2a8 = param_3;
  FUN_1073f6e34(auStack_230,&puStack_2a8,unaff_x20 + 0x480);
  func_0x0001073f4dc0(&puStack_d0);
  puStack_98 = param_3;
  func_0x000104c318bc(auStack_90,&puStack_d0);
  FUN_1073ddb98(&puStack_2a8,&puStack_98,unaff_x20 + 0x4c0);
  func_0x0001073fa2e4();
  func_0x000104c2f714(&puStack_d0);
  uStack_c8 = 0;
  puStack_d0 = param_3;
  FUN_1073f6a04(&puStack_98,&puStack_d0,unaff_x20 + 0x538);
  uStack_5a8 = 0;
  puStack_5b0 = param_3;
  FUN_1073dd8d8(&puStack_d0,&puStack_5b0,unaff_x20 + 0x570);
  uStack_5e0 = 0;
  puStack_5e8 = param_3;
  FUN_1073dd8d8(&puStack_5b0,&puStack_5e8,unaff_x20 + 0x5a8);
  uStack_5e0 = uStack_5e0 & 0xffffff00;
  ppuVar4 = &puStack_5e8;
  puStack_5e8 = param_3;
  FUN_1073dd608(ppuVar4,unaff_x20 + 0x5e0);
  uStack_618 = 0;
  puStack_620 = param_3;
  func_0x0001073f7090(unaff_x20 + 0x618);
  puStack_658 = &puStack_620;
  func_0x0001073fa3c0(*(undefined4 *)(unaff_x20 + 0x648));
  (*(code *)(&PTR_DAT_1109ad350)[extraout_x8_01])(&puStack_5e8,&puStack_658,unaff_x20 + 0x618);
  uStack_650 = 0;
  puStack_658 = param_3;
  FUN_1073f71c0(unaff_x20 + 0x650);
  ppuStack_690 = &puStack_658;
  func_0x0001073fa3c0(*(undefined4 *)(unaff_x20 + 0x680));
  (*(code *)(&PTR_LAB_1109ad368)[extraout_x8_02])(&puStack_620,&ppuStack_690,unaff_x20 + 0x650);
  uStack_688 = 1;
  ppuStack_690 = param_3;
  FUN_1073f72f4(unaff_x20 + 0x688);
  puStack_2b8 = &ppuStack_690;
  func_0x0001073fa3c0(*(undefined4 *)(unaff_x20 + 0x6b8));
  (*(code *)(&PTR_LAB_1109ad380)[extraout_x8_03])(&puStack_658,&puStack_2b8,unaff_x20 + 0x688);
  uStack_2b0 = 0;
  puStack_2b8 = param_3;
  FUN_1073dd8d8(&ppuStack_690,&puStack_2b8,unaff_x20 + 0x6c0);
  FUN_1073dd9b0();
  FUN_1073f1b48(unaff_x19 + 0x38,auStack_338);
  FUN_1073e95fc(unaff_x19 + 0x80,auStack_370);
  *(char *)(unaff_x19 + 0xb8) = (char)ppuVar1;
  FUN_1073f1b48(unaff_x19 + 0xc0,auStack_3b8);
  FUN_1073dd9b0(unaff_x19 + 0x108,auStack_3f0);
  FUN_1073dd9b0(unaff_x19 + 0x140,auStack_428);
  FUN_1073dd9b0(unaff_x19 + 0x178,auStack_460);
  FUN_1073dd9b0(unaff_x19 + 0x1b0,auStack_498);
  *(char *)(unaff_x19 + 0x1e8) = (char)ppuVar2;
  FUN_1073dd9b0(unaff_x19 + 0x1f0,auStack_4d0);
  FUN_1073e95fc(unaff_x19 + 0x228,auStack_508);
  FUN_1073f5c5c(unaff_x19 + 0x260,auStack_540);
  *(char *)(unaff_x19 + 0x298) = (char)ppuVar3;
  FUN_1073e95fc(unaff_x19 + 0x2a0,auStack_578);
  FUN_1073f5cb4(unaff_x19 + 0x2e0,auStack_168);
  FUN_1073ddccc(unaff_x19 + 0x380,auStack_1e8);
  FUN_1073f5d44(unaff_x19 + 0x3f0,auStack_230);
  FUN_1073ddccc(unaff_x19 + 0x438,auStack_2a0);
  FUN_1073f5c5c(unaff_x19 + 0x4a8,&puStack_98);
  FUN_1073dd9b0(unaff_x19 + 0x4e0,&puStack_d0);
  FUN_1073dd9b0(unaff_x19 + 0x518,&puStack_5b0);
  *(char *)(unaff_x19 + 0x550) = (char)ppuVar4;
  FUN_1073f5dd8(unaff_x19 + 0x558,&puStack_5e8);
  FUN_1073f5e4c(unaff_x19 + 0x590,&puStack_620);
  FUN_1073f5ec0(unaff_x19 + 0x5c8,&puStack_658);
  FUN_1073dd9b0(unaff_x19 + 0x600,&ppuStack_690);
  FUN_1073dd4c4(&ppuStack_690);
  FUN_1073e7078(&puStack_658);
  FUN_1073e70b8(&puStack_620);
  FUN_1073e70f8(&puStack_5e8);
  FUN_1073dd4c4(&puStack_5b0);
  FUN_1073dd4c4(&puStack_d0);
  FUN_1073e7138(&puStack_98);
  FUN_1073dd470(auStack_2a0);
  FUN_1073deccc(auStack_230);
  FUN_1073dd470(auStack_1e8);
  func_0x0001073fa29c();
  FUN_1073e71cc(auStack_578);
  FUN_1073e7138(auStack_540);
  FUN_1073e71cc(auStack_508);
  FUN_1073dd4c4(auStack_4d0);
  FUN_1073dd4c4(auStack_498);
  FUN_1073dd4c4(auStack_460);
  FUN_1073dd4c4(auStack_428);
  FUN_1073dd4c4(auStack_3f0);
  FUN_1073e720c(auStack_3b8);
  FUN_1073e71cc(auStack_370);
  FUN_1073e720c(auStack_338);
  FUN_1073dd4c4(auStack_2f0);
  func_0x0001073f9f10(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1073e7078(&puStack_658);
  FUN_1073e70b8(&puStack_620);
  FUN_1073e70f8(&puStack_5e8);
  FUN_1073dd4c4(&puStack_5b0);
  FUN_1073dd4c4(&puStack_d0);
  FUN_1073e7138(&puStack_98);
  FUN_1073dd470(auStack_2a0);
  FUN_1073deccc(auStack_230);
  FUN_1073dd470(auStack_1e8);
  FUN_1073e7178(auStack_168);
  FUN_1073e71cc(auStack_578);
  FUN_1073e7138(auStack_540);
  FUN_1073e71cc(auStack_508);
  FUN_1073dd4c4(auStack_4d0);
  do {
    FUN_1073dd4c4(auStack_498);
    FUN_1073dd4c4(auStack_460);
    FUN_1073dd4c4(auStack_428);
    FUN_1073dd4c4(auStack_3f0);
    FUN_1073e720c(auStack_3b8);
    FUN_1073e71cc(auStack_370);
    FUN_1073e720c(auStack_338);
    FUN_1073dd4c4(auStack_2f0);
    func_0x0001073fa058();
  } while( true );
}



/* Entry: 1073f4db0; end: 1073f4dc3;  */

void FUN_1073f4db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073f4dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  return;
}



/* Entry: 1073f4dc4; end: 1073f4f67;  */

undefined8 * FUN_1073f4dc4(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  plVar6 = param_1 + 1;
  plVar3 = (long *)*plVar6;
  plVar4 = plVar6;
  while (plVar5 = plVar4, plVar3 != (long *)0x0) {
    while (plVar4 = plVar3, uVar1 = param_2, func_0x0001073f8420(param_2,plVar4 + 4),
          (int)uVar1 == 0) {
      plVar3 = plVar4 + 4;
      func_0x0001073f8420(plVar3,param_2);
      if ((int)plVar3 == 0) {
        puVar2 = (undefined8 *)*plVar5;
        if (puVar2 == (undefined8 *)0x0) goto LAB_1073f4e48;
        goto LAB_1073f4ef4;
      }
      plVar5 = plVar4 + 1;
      plVar3 = (long *)*plVar5;
      if ((long *)*plVar5 == (long *)0x0) goto LAB_1073f4e48;
    }
    plVar3 = (long *)*plVar4;
  }
LAB_1073f4e48:
  puVar2 = (undefined8 *)0xc8;
  __Znwm();
  uStack_48 = 0;
  puStack_58 = puVar2;
  plStack_50 = plVar6;
  func_0x000107269bac(puVar2 + 4,param_2);
  puVar2[0xd] = 0;
  puVar2[0xc] = 0;
  puVar2[0x18] = 0;
  puVar2[0x15] = 0;
  puVar2[0x14] = 0;
  puVar2[0x17] = 0;
  puVar2[0x16] = 0;
  puVar2[0x11] = 0;
  puVar2[0x10] = 0;
  puVar2[0x13] = 0;
  puVar2[0x12] = 0;
  puVar2[0xf] = 0;
  puVar2[0xe] = 0;
  func_0x0001072d124c(puVar2 + 0xf);
  *(undefined1 *)(puVar2 + 0x11) = 0;
  *(undefined1 *)((long)puVar2 + 0x8c) = 0;
  func_0x0001073730ac(puVar2 + 0x12);
  func_0x0001073730ac(puVar2 + 0x14);
  func_0x0001073730ac(puVar2 + 0x16);
  uStack_48 = CONCAT71(uStack_48._1_7_,1);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = plVar4;
  *plVar5 = (long)puVar2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x00010002c5b0(param_1[1],puVar2);
  param_1[2] = param_1[2] + 1;
  puStack_58 = (undefined8 *)0x0;
  FUN_1073f84b4(&puStack_58);
LAB_1073f4ef4:
  return puVar2 + 0xc;
}



/* Entry: 1073f4f68; end: 1073f4f9f;  */

void FUN_1073f4f68(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073fa1d0();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x38) {
    FUN_1073f9410();
  }
  return;
}



/* Entry: 1073f4fa0; end: 1073f4fe7;  */

long * FUN_1073f4fa0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      FUN_107330fdc();
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 1073f4fe8; end: 1073f4fff;  */

long ** FUN_1073f4fe8(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                     ulong param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 extraout_x8;
  long lVar15;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  uint uVar16;
  long *plVar17;
  long **pplVar18;
  undefined1 auStack_681 [9];
  long **pplStack_678;
  undefined1 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_658;
  long *plStack_650;
  long lStack_648;
  undefined1 auStack_638 [24];
  long *plStack_620;
  long lStack_618;
  undefined1 auStack_608 [56];
  undefined1 auStack_5d0 [56];
  undefined1 auStack_598 [56];
  undefined1 uStack_560;
  undefined8 uStack_558;
  undefined1 auStack_520 [400];
  undefined1 auStack_390 [64];
  undefined8 uStack_350;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  long *aplStack_2e0 [2];
  long lStack_2d0;
  undefined1 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  char cStack_260;
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined8 uStack_228;
  undefined1 *puStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1b8 [400];
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0xe8) != 0) {
    return (long **)0x1;
  }
  plVar9 = (long *)(param_1 + 0x1b8U);
  func_0x0001073ec044();
  uStack_28 = extraout_x8;
  func_0x000107751284(auStack_1b8);
  uVar2 = *(char *)(param_1 + 0x1c8) == '\x01';
  if ((bool)uVar2) {
    lVar15 = *(long *)(param_1 + 0x1b8U);
    uVar2 = *(char *)(lVar15 + 0x20) == '\x01';
    if ((bool)uVar2) {
      uVar16 = *(byte *)(lVar15 + 0x22) ^ 1;
    }
    else {
      uVar16 = 1;
    }
  }
  else {
    uVar16 = 0;
  }
  func_0x000107267da8(auStack_1b8);
  func_0x0001073ec008(uStack_28);
  if ((bool)uVar2) {
    return (long **)(ulong)(uVar16 & 1);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)0x0;
  pplVar5 = aplStack_2e0;
  pcStack_1c8 = FUN_1073eb6b8;
  puVar13 = param_4;
  uVar14 = param_5;
  puStack_1d0 = &stack0xfffffffffffffff0;
  func_0x0001073ec044();
  *(undefined4 *)(extraout_x8_00 + 0x10) = 1;
  *(undefined4 *)(extraout_x8_00 + 0x28) = 1;
  *(undefined4 *)(extraout_x8_00 + 0x40) = 1;
  puVar10 = (undefined1 *)*param_3;
  puVar11 = (undefined8 *)param_3[1];
  uStack_228 = extraout_x8_01;
  func_0x0001072d306c();
  plVar17 = (long *)lStack_2d0;
  do {
    if (plVar17 == (long *)0x0) {
      func_0x0001005d0538();
      func_0x0001073ec008(uStack_228);
      if ((bool)uVar2) {
        return pplVar5;
      }
      ___stack_chk_fail();
      func_0x0001073ebef4(extraout_x8_00);
      __Unwind_Resume(pplVar5);
      pcStack_2e8 = FUN_1073eb8e0;
      puVar12 = puVar11;
      uStack_658 = param_7;
      ppuStack_2f0 = &puStack_1d0;
      func_0x0001073ec044();
      pplVar6 = (long **)*puVar12;
      uStack_350 = extraout_x8_02;
      (*(code *)(*pplVar6)[2])();
      pplVar5 = pplVar6;
      for (pplVar18 = (long **)0x0; bVar3 = pplVar18 == pplVar6, !bVar3;
          pplVar18 = (long **)((long)pplVar18 + 1)) {
        (**(code **)(*(long *)*puVar11 + 0x18))(&plStack_620,(long *)*puVar11,pplVar18);
        (**(code **)(*plStack_620 + 0x30))();
        func_0x00010726236c(auStack_390);
        func_0x0001072e7640(auStack_520,auStack_390,0x1138369c0);
        uVar7 = param_6;
        func_0x000107869b38(auStack_598,param_6,auStack_520);
        func_0x00010786967c();
        FUN_1073dcf84(auStack_638,auStack_598,uVar7);
        FUN_1073de9d8(auStack_598);
        func_0x000104c2f714(auStack_520);
        lStack_648 = lStack_618;
        plStack_650 = plStack_620;
        if (lStack_618 != 0) {
          plVar9 = (long *)(lStack_618 + 8);
          do {
            cVar1 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = *plVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        func_0x000104c2fe00(auStack_608,puVar13);
        (**(code **)(*(long *)*puVar11 + 0x20))(auStack_5d0);
        func_0x0001073c4f74(auStack_598,auStack_608);
        func_0x000107751444(puVar10,&plStack_650,auStack_598);
        *(undefined1 **)(puVar10 + 0xe0) = auStack_638;
        func_0x000107751334(auStack_520,puVar10);
        func_0x000107267e8c(auStack_598);
        func_0x000107267eac(auStack_608);
        func_0x000107267e44(&plStack_650);
        auStack_598[0] = 0;
        uStack_560 = 0;
        uStack_558 = 0;
        uVar8 = uVar14;
        func_0x00010777faa8(uVar14,auStack_520,auStack_598);
        func_0x00010724b3d8(auStack_598);
        if ((uVar8 & 1) != 0) {
          FUN_1073ebfe0(uStack_658,auStack_520);
        }
        func_0x000107267da8(auStack_520);
        func_0x00010726b264(auStack_638);
        func_0x00010724b3d8(auStack_390);
        pplVar5 = &plStack_620;
        FUN_107330fdc();
      }
      func_0x0001073ec008(uStack_350);
      if (bVar3) {
        return pplVar5;
      }
      ___stack_chk_fail();
      func_0x000107267da8(auStack_520);
      func_0x00010726b264(auStack_638);
      func_0x00010724b3d8(auStack_390);
      FUN_107330fdc(&plStack_620);
      pplVar6 = pplVar5;
      __Unwind_Resume();
      pcStack_668 = FUN_1073ebb78;
      pplVar18 = pplVar6;
      if (*(uint *)(pplVar6 + 2) != 0xffffffff) {
        pplVar18 = (long **)auStack_681;
        auStack_681._1_8_ = param_6;
        pplStack_678 = pplVar5;
        pppuStack_670 = &ppuStack_2f0;
        (*(code *)(&PTR_FUN_1109acee0)[*(uint *)(pplVar6 + 2)])(pplVar18,pplVar6);
      }
      *(undefined4 *)(pplVar6 + 2) = 0xffffffff;
      return pplVar18;
    }
    if (((uint)param_5 >> 8 & 1) == 0) {
LAB_1073eb724:
      puVar10 = (undefined1 *)(plVar17 + 2);
      plVar4 = plVar9;
      puVar11 = param_4;
      FUN_10746e408();
      if ((int)plVar4 != 0) {
        puVar10 = (undefined1 *)(plVar17 + 2);
        puVar11 = param_4;
        FUN_10746e5cc(auStack_290,plVar9);
        uVar2 = false;
        if (cStack_260 == '\x01') {
          FUN_1073ebbdc(auStack_258,extraout_x8_00);
          FUN_1073ebbdc(auStack_240,auStack_290);
          uStack_2b0 = 2;
          puStack_2b8 = auStack_258;
          func_0x0001073ec054();
          FUN_1073ebc60(extraout_x8_00,auStack_2a8);
          FUN_1073ebb78(auStack_2a8);
          lVar15 = 0x18;
          do {
            FUN_1073ebb78(auStack_258 + lVar15);
            lVar15 = lVar15 + -0x18;
          } while (lVar15 != -0x18);
          FUN_1073ebbdc(auStack_258,extraout_x8_00 + 0x18);
          FUN_1073ebbdc(auStack_240,auStack_278);
          uStack_2b0 = 2;
          puStack_2b8 = auStack_258;
          func_0x0001073ec054();
          puVar10 = auStack_2a8;
          FUN_1073ebc60(extraout_x8_00 + 0x18);
          FUN_1073ebb78(auStack_2a8);
          lVar15 = 0x18;
          do {
            FUN_1073ebb78(auStack_258 + lVar15);
            lVar15 = lVar15 + -0x18;
            uVar2 = lVar15 == -0x18;
          } while (!(bool)uVar2);
        }
        plVar4 = (long *)0x0;
        FUN_1073ebeac();
      }
    }
    else if ((param_5 & 1) == 0) {
      func_0x0001073ec06c(*(undefined8 *)(*plVar9 + 0x30));
      if (((ulong)plVar4 & 1) == 0) goto LAB_1073eb724;
    }
    else {
      func_0x0001073ec06c(*(undefined8 *)(*plVar9 + 0x30));
      if (((ulong)plVar4 & 1) != 0) goto LAB_1073eb724;
    }
    plVar17 = (long *)*plVar17;
  } while( true );
}



/* Entry: 1073f5000; end: 1073f5263;  */

void FUN_1073f5000(long param_1,undefined1 *param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  ulong *puVar12;
  undefined8 ****ppppuVar13;
  undefined ***pppuVar14;
  char *pcVar15;
  long lVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 ****ppppuVar17;
  ulong extraout_x8_02;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar20;
  long lVar21;
  undefined1 *puVar22;
  undefined8 ****ppppuVar23;
  long lVar24;
  char *pcVar25;
  undefined8 ****ppppuVar26;
  undefined8 ****ppppuVar27;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined4 uStack_990;
  undefined8 uStack_980;
  undefined8 uStack_978;
  long *plStack_970;
  undefined8 uStack_968;
  undefined **ppuStack_960;
  undefined8 *puStack_958;
  undefined8 ***pppuStack_948;
  undefined8 ***pppuStack_940;
  undefined8 ***pppuStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined1 *puStack_920;
  undefined8 *puStack_918;
  undefined8 uStack_910;
  undefined4 uStack_900;
  undefined1 uStack_8fc;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 ***pppuStack_8d8;
  undefined8 ***pppuStack_8d0;
  undefined8 ***pppuStack_8c8;
  undefined1 uStack_8c0;
  undefined8 ***pppuStack_8b8;
  undefined8 ***pppuStack_8b0;
  undefined1 auStack_8a8 [56];
  undefined **ppuStack_870;
  undefined8 *puStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined4 uStack_848;
  long *plStack_840;
  undefined8 uStack_838;
  undefined8 ***pppuStack_830;
  undefined8 ***pppuStack_828;
  undefined8 ***pppuStack_820;
  undefined1 auStack_818 [16];
  uint uStack_808;
  undefined1 uStack_804;
  undefined1 auStack_800 [16];
  undefined1 auStack_7f0 [16];
  undefined1 auStack_7e0 [120];
  undefined1 auStack_768 [8];
  undefined1 auStack_760 [256];
  undefined8 uStack_660;
  undefined4 auStack_5f0 [6];
  undefined4 uStack_5d8;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined4 uStack_5a8;
  undefined1 uStack_5a4;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 auStack_580 [56];
  undefined1 auStack_548 [4];
  undefined8 uStack_544;
  undefined4 uStack_53c;
  undefined1 auStack_440 [8];
  undefined1 auStack_438 [256];
  undefined8 uStack_338;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 auStack_2c8 [9];
  undefined1 auStack_280 [96];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [8];
  undefined **ppuStack_200;
  undefined1 *puStack_1f8;
  long lStack_1f0;
  undefined ***pppuStack_1e8;
  undefined **appuStack_1e0 [51];
  undefined8 uStack_48;
  
  lVar24 = param_1;
  func_0x0001073f9f24();
  uStack_48 = extraout_x8;
  func_0x00010784b344(auStack_280,lVar24 + 0x94);
  auStack_2c8[0] = *(undefined8 *)(param_1 + 0xe8);
  FUN_1073eae54(appuStack_1e0,auStack_280,param_1 + 0x58,param_1 + 0x20,auStack_2c8);
  func_0x0001003a91d4(&UNK_10f41020c);
  func_0x0001003a9204(auStack_220);
  FUN_1073e937c(auStack_208,&UNK_10f4102af,auStack_220,5000000000,1000000000);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_220);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_280);
  FUN_1073e0964(auStack_280,param_1 + 0x118);
  func_0x000107751334(appuStack_1e0,param_2);
  FUN_1073eb6b8(auStack_2c8,param_1,*(undefined8 *)(param_1 + 0x188),param_1 + 0x1a0,appuStack_1e0,
                0x101);
  func_0x000107750330(auStack_2c8,auStack_280);
  uStack_2d8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_2e0 = *(undefined8 *)(param_1 + 0xb8);
  if (*(long *)(param_1 + 0xc0) != 0) {
    do {
      func_0x0001073fa1b0();
    } while (extraout_w10 != 0);
  }
  puStack_1f8 = auStack_280;
  ppuStack_200 = &PTR_FUN_1109ad3f8;
  pppuStack_1e8 = &ppuStack_200;
  pppuVar14 = appuStack_1e0;
  lStack_1f0 = param_1;
  FUN_1073eb8e0(param_1,pppuVar14,&uStack_2e0,param_1 + 0x58,param_1 + 0x1b8,param_3,&ppuStack_200);
  FUN_1073f97a4(&ppuStack_200);
  func_0x000107331000(&uStack_2e0);
  if (*(long *)(param_2 + 0xf0) != 0) {
    ppuStack_200 = &PTR_FUN_1109ad488;
    pppuVar14 = &ppuStack_200;
    puStack_1f8 = param_2;
    pppuStack_1e8 = &ppuStack_200;
    func_0x000107752018(auStack_280);
    func_0x0001072c9444(&ppuStack_200);
  }
  func_0x000107750290(auStack_280);
  func_0x0001073ebef4(auStack_2c8);
  func_0x000107267da8(appuStack_1e0);
  func_0x000107266af0(auStack_280);
  FUN_1073e9410();
  func_0x0001073f9f10(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072c9444(&ppuStack_200);
  func_0x0001073ebef4(auStack_2c8);
  func_0x000107267da8(appuStack_1e0);
  func_0x000107266af0(auStack_280);
  puVar6 = auStack_208;
  FUN_1073e9410();
  func_0x0001073fa058();
  func_0x0001073f9f38();
  auStack_5f0[0] = 0x39;
  uStack_5d8 = 0;
  uStack_5c0 = 0;
  uStack_5b8 = 0;
  uStack_338 = extraout_x8_00;
  func_0x0001073fa35c();
  uStack_5c8 = 0;
  uStack_5a8 = 0;
  uStack_5a4 = 1;
  uStack_598 = 0;
  uStack_590 = 0;
  uStack_5a0 = 0;
  FUN_10743cc34(auStack_548,auStack_5f0,1);
  FUN_10743d7bc(auStack_440,auStack_548);
  func_0x000107288cd8(auStack_548);
  func_0x000107262330(auStack_5f0);
  func_0x000104c2fe00(auStack_580,puVar6 + 0x58);
  pcVar15 = "source";
  FUN_107371bc4(auStack_438,"source",auStack_580);
  func_0x000104c2f714(auStack_580);
  func_0x0001073fa164();
  func_0x00010729d56c(auStack_438);
  puVar22 = *(undefined1 **)(puVar6 + 0xd8);
  while( true ) {
    uVar5 = puVar22 == puVar6 + 0xe0;
    if ((bool)uVar5) break;
    pcVar1 = *(char **)(puVar22 + 0x68);
    for (lVar24 = *(long *)(puVar22 + 0x60) + 0x58; pcVar25 = (char *)(lVar24 + -0x58),
        pcVar25 != pcVar1; lVar24 = lVar24 + 0xc0) {
      ppuVar7 = pppuVar14[3];
      pcVar15 = pcVar25;
      FUN_1073f9894();
      ppuVar8 = pppuVar14[3];
      if (ppuVar8 + 1 != ppuVar7) {
        func_0x0001073f9930(ppuVar8,auStack_5f0,pcVar25);
        if (*ppuVar8 == (undefined *)0x0) {
          func_0x000104c03f28("map::at:  key not found");
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1073f5404);
          (*pcVar4)();
        }
        FUN_1073f6580(auStack_548,*ppuVar8 + 0x58);
        func_0x000107262f3c(lVar24);
        *(undefined4 *)(lVar24 + 0x40) = uStack_53c;
        *(undefined8 *)(lVar24 + 0x38) = uStack_544;
        FUN_1073bc874(auStack_548);
        pcVar15 = pcVar25;
      }
    }
    func_0x00010002c7d4();
  }
  FUN_10743d7e4();
  func_0x0001073f9f10(uStack_338);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = auStack_440;
  FUN_10743d7e4();
  func_0x0001073fa058();
  func_0x0001073f9f38();
  pppuStack_948 = (undefined8 ***)CONCAT44(pppuStack_948._4_4_,0x36);
  uStack_930._0_4_ = 0;
  puStack_918 = (undefined8 *)0x0;
  uStack_910 = 0;
  uStack_660 = extraout_x8_01;
  func_0x0001073fa35c();
  uStack_928._0_4_ = (undefined4)extraout_x9;
  uStack_928._4_4_ = (undefined4)((ulong)extraout_x9 >> 0x20);
  puStack_920 = (undefined1 *)0x0;
  uStack_900 = 0;
  uStack_8fc = 1;
  uStack_8f0 = 0;
  uStack_8e8 = 0;
  uStack_8f8 = 0;
  FUN_10743cc34(&ppuStack_870,&pppuStack_948,7);
  FUN_10743d7bc(auStack_768,&ppuStack_870);
  func_0x000107288cd8(&ppuStack_870);
  func_0x000107262330(&pppuStack_948);
  func_0x000104c2fe00(auStack_8a8,puVar6 + 0x58);
  FUN_107371bc4(auStack_760,"source",auStack_8a8);
  func_0x000104c2f714(auStack_8a8);
  func_0x0001073fa164();
  func_0x00010729d56c(auStack_760);
  if (*(long *)(puVar6 + 0xe8) != 0) {
    ppppuVar17 = *(undefined8 *****)(pcVar15 + 0x30);
    (**(code **)(**(long **)(puVar6 + 0xb8) + 0x20))(&ppuStack_870);
    puVar9 = (undefined8 *)0x190;
    __Znwm();
    puVar9[1] = 0;
    puVar9[2] = 0;
    ppuVar7 = (undefined **)(puVar9 + 3);
    *puVar9 = &PTR_FUN_1109ad508;
    FUN_107457604(ppuVar7,puVar6 + 0x58,&ppuStack_870,puVar6 + 0x20,puVar6 + 0x90);
    ppuStack_960 = ppuVar7;
    puStack_958 = puVar9;
    func_0x000104c2f714(&ppuStack_870);
    plVar10 = *(long **)(puVar6 + 0xb8);
    (**(code **)(*plVar10 + 0x10))();
    for (plVar20 = (long *)0x0; uVar5 = plVar20 == plVar10, !(bool)uVar5;
        plVar20 = (long *)((long)plVar20 + 1)) {
      (**(code **)(**(long **)(puVar6 + 0xb8) + 0x18))
                (&plStack_970,*(long **)(puVar6 + 0xb8),plVar20);
      uStack_838 = uStack_968;
      plStack_840 = plStack_970;
      plStack_970 = (long *)0x0;
      uStack_968 = 0;
      uStack_860 = 0;
      puStack_868 = (undefined8 *)0x0;
      uStack_850 = 0;
      uStack_858 = 0;
      uStack_848 = 0x3f800000;
      ppuStack_870 = &PTR_DAT_1109ad5b8;
      uStack_980 = 0;
      uStack_978 = 0;
      pppuStack_828 = (undefined8 ****)0x0;
      pppuStack_820 = (undefined8 ****)0x0;
      pppuStack_830 = (undefined8 ****)0x0;
      func_0x0001072d124c(auStack_818);
      uStack_808 = uStack_808 & 0xffffff00;
      uStack_804 = 0;
      func_0x0001073730ac(auStack_800);
      func_0x0001073730ac(auStack_7f0);
      func_0x0001073730ac(auStack_7e0);
      func_0x000107330fdc(&uStack_980);
      plVar11 = plStack_840;
      (**(code **)(*plStack_840 + 0x30))();
      puVar12 = (ulong *)(puVar6 + 0xd8);
      FUN_1073f4dc4(puVar12,plVar11);
      uStack_9a8 = 0;
      uStack_9b0 = 0;
      uStack_998 = 0;
      uStack_9a0 = 0;
      uStack_990 = 0x3f800000;
      lVar2 = (long)(puVar12[1] - *puVar12) / 0xc0;
      FUN_107372aa4(&uStack_9b0,lVar2);
      for (lVar24 = 0; pppuVar3 = pppuStack_828, lVar24 != lVar2; lVar24 = lVar24 + 1) {
        if (pppuStack_828 < pppuStack_820) {
          func_0x0001073fa478();
          ppppuVar23 = (undefined8 ****)(pppuVar3 + 0x11);
        }
        else {
          lVar21 = (long)pppuStack_828 - (long)pppuStack_830;
          if (0x1e1e1e1e1e1e1e1 < lVar21 / 0x88 + 1U) {
            FUN_1073f66f8();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1073f59a4);
            (*pcVar4)();
          }
          func_0x0001073fa33c(((long)pppuStack_820 - (long)pppuStack_830) / 0x88);
          lVar16 = extraout_x9_00;
          if (0xf0f0f0f0f0f0ef < extraout_x8_02) {
            lVar16 = 0x1e1e1e1e1e1e1e1;
          }
          uStack_928 = &pppuStack_820;
          if (lVar16 == 0) {
            ppppuVar13 = (undefined8 ****)0x0;
          }
          else {
            ppppuVar13 = &pppuStack_820;
            FUN_1073f6704();
          }
          lVar21 = (long)ppppuVar13 + lVar21;
          pppuStack_948 = ppppuVar13;
          pppuStack_940 = (undefined8 ***)lVar21;
          pppuStack_938 = (undefined8 ***)lVar21;
          uStack_930 = ppppuVar13 + lVar16 * 0x11;
          func_0x0001073fa478();
          pppuVar3 = pppuStack_828;
          ppppuVar27 = (undefined8 ****)pppuStack_830;
          ppppuVar26 = (undefined8 ****)
                       (lVar21 + (((long)pppuStack_828 - (long)pppuStack_830) / -0x88) * 0x88);
          pppuStack_8d0 = &pppuStack_8b8;
          pppuStack_8c8 = &pppuStack_8b0;
          pppuStack_8b0 = ppppuVar26;
          pppuStack_8d8 = &pppuStack_820;
          pppuStack_8b8 = ppppuVar26;
          for (ppppuVar23 = (undefined8 ****)pppuStack_830; ppppuVar23 != (undefined8 ****)pppuVar3;
              ppppuVar23 = ppppuVar23 + 0x11) {
            func_0x0001073f6444(pppuStack_8b0,ppppuVar23);
            pppuStack_8b0 = pppuStack_8b0 + 0x11;
          }
          uStack_8c0 = 1;
          for (; ppppuVar27 != (undefined8 ****)pppuVar3; ppppuVar27 = ppppuVar27 + 0x11) {
            func_0x0001073e6ed8(ppppuVar27);
          }
          ppppuVar23 = (undefined8 ****)(lVar21 + 0x88);
          FUN_1073f6750(&pppuStack_8d8);
          pppuStack_938 = pppuStack_830;
          uStack_930._0_4_ = SUB84(pppuStack_820,0);
          uStack_930._4_4_ = (undefined4)((ulong)pppuStack_820 >> 0x20);
          pppuStack_948 = pppuStack_830;
          pppuStack_940 = pppuStack_830;
          pppuStack_830 = ppppuVar26;
          pppuStack_828 = ppppuVar23;
          pppuStack_820 = ppppuVar13 + lVar16 * 0x11;
          func_0x0001073f67d0(&pppuStack_948);
        }
        uVar18 = *puVar12;
        pppuStack_828 = ppppuVar23;
        func_0x000104c2d614();
        if ((uVar18 & 1) == 0) {
          func_0x0001072e89a4(&uStack_9b0,*puVar12 + lVar24 * 0xc0);
        }
      }
      func_0x000107295c74(auStack_818,puVar12 + 3);
      uStack_808 = (uint)puVar12[5];
      uStack_804 = *(undefined1 *)((long)puVar12 + 0x2c);
      func_0x000107299380(auStack_7e0,puVar12 + 10);
      func_0x000107299380(auStack_800,puVar12 + 6);
      func_0x000107299380(auStack_7f0,puVar12 + 8);
      pppuStack_948 = *(undefined8 ****)(pcVar15 + 0x28);
      uStack_930._0_4_ = *(undefined4 *)(puVar6 + 200);
      uVar19 = **(undefined8 **)(pcVar15 + 0x20);
      uStack_928._4_4_ = *(undefined4 *)(*(undefined8 **)(pcVar15 + 0x20) + 1);
      uStack_930._4_4_ = (undefined4)uVar19;
      uStack_928._0_4_ = (undefined4)((ulong)uVar19 >> 0x20);
      puStack_918 = &uStack_9b0;
      uStack_910 = CONCAT71(uStack_910._1_7_,pcVar15[0x19]);
      pppuStack_940 = ppppuVar17;
      pppuStack_938 = (undefined8 ***)(puVar6 + 8);
      puStack_920 = puVar6 + 0xf0;
      FUN_107457824(ppuStack_960,&ppuStack_870,&pppuStack_948);
      func_0x00010726ea70(&uStack_9b0);
      func_0x0001073f6818(&ppuStack_870);
      func_0x000107330fdc(&plStack_970);
    }
    *(char *)(ppuStack_960 + 0x2e) = pcVar15[0x19];
    puVar9 = (undefined8 *)(puVar6 + 0xe0);
    func_0x0001073e6d5c(puVar6 + 0xd8,*puVar9);
    *puVar9 = 0;
    *(undefined8 *)(puVar6 + 0xe8) = 0;
    *(undefined8 **)(puVar6 + 0xd8) = puVar9;
    ppuVar7 = ppuStack_960;
    FUN_107457798();
    if (((ulong)ppuVar7 & 1) != 0) {
      puVar22 = *(undefined1 **)(puVar6 + 8);
      while (puVar9 = puStack_958, ppuVar7 = ppuStack_960, uVar5 = puVar22 == puVar6 + 0x10,
            !(bool)uVar5) {
        ppuStack_960 = (undefined **)0x0;
        puStack_958 = (undefined8 *)0x0;
        uStack_858 = *(undefined8 *)(puVar22 + 0x60);
        uStack_860 = *(undefined8 *)(puVar22 + 0x58);
        puStack_868 = puVar9;
        ppuStack_870 = ppuVar7;
        if (*(long *)(puVar22 + 0x60) != 0) {
          do {
            func_0x0001073fa1b0();
          } while (extraout_w10_00 != 0);
        }
        FUN_1073e0254(&pppuStack_948);
        func_0x0001073e08f4(&ppuStack_870);
        func_0x00010002c7d4();
      }
    }
    FUN_1073f9ec0(&ppuStack_960);
  }
  FUN_10743d7e4(auStack_768);
  func_0x0001073f9f10(uStack_660);
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  FUN_1073f9ec0(&ppuStack_960);
  puVar6 = auStack_768;
  FUN_10743d7e4();
  func_0x0001073fa058();
                    /* WARNING: Could not recover jumptable at 0x0001073f5acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(puVar6 + 0x30) + 0x30))();
  return;
}



/* Entry: 1073f5264; end: 1073f544f;  */

void FUN_1073f5264(long param_1,long param_2)

{
  char *pcVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  long *plVar10;
  ulong *puVar11;
  undefined8 ****ppppuVar12;
  char *pcVar13;
  long lVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 ****ppppuVar15;
  ulong extraout_x8_01;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  long lVar18;
  long lVar19;
  undefined8 ****ppppuVar20;
  long lVar21;
  undefined1 *puVar22;
  char *pcVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuVar25;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined4 uStack_6b0;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  long *plStack_690;
  undefined8 uStack_688;
  undefined **ppuStack_680;
  undefined8 *puStack_678;
  undefined8 ***pppuStack_668;
  undefined8 ***pppuStack_660;
  undefined8 ***pppuStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined1 *puStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  undefined4 uStack_620;
  undefined1 uStack_61c;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 ***pppuStack_5f8;
  undefined8 ***pppuStack_5f0;
  undefined8 ***pppuStack_5e8;
  undefined1 uStack_5e0;
  undefined8 ***pppuStack_5d8;
  undefined8 ***pppuStack_5d0;
  undefined1 auStack_5c8 [56];
  undefined **ppuStack_590;
  undefined8 *puStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined4 uStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 ***pppuStack_550;
  undefined8 ***pppuStack_548;
  undefined8 ***pppuStack_540;
  undefined1 auStack_538 [16];
  uint uStack_528;
  undefined1 uStack_524;
  undefined1 auStack_520 [16];
  undefined1 auStack_510 [16];
  undefined1 auStack_500 [120];
  undefined1 auStack_488 [8];
  undefined1 auStack_480 [256];
  undefined8 uStack_380;
  undefined4 auStack_310 [6];
  undefined4 uStack_2f8;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2c8;
  undefined1 uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a0 [56];
  undefined1 auStack_268 [4];
  undefined8 uStack_264;
  undefined4 uStack_25c;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [256];
  undefined8 uStack_58;
  
  func_0x0001073f9f38();
  auStack_310[0] = 0x39;
  uStack_2f8 = 0;
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  uStack_58 = extraout_x8;
  func_0x0001073fa35c();
  uStack_2e8 = 0;
  uStack_2c8 = 0;
  uStack_2c4 = 1;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2c0 = 0;
  FUN_10743cc34(auStack_268,auStack_310,1);
  FUN_10743d7bc(auStack_160,auStack_268);
  func_0x000107288cd8(auStack_268);
  func_0x000107262330(auStack_310);
  func_0x000104c2fe00(auStack_2a0,param_1 + 0x58);
  pcVar13 = "source";
  FUN_107371bc4(auStack_158,"source",auStack_2a0);
  func_0x000104c2f714(auStack_2a0);
  func_0x0001073fa164();
  func_0x00010729d56c(auStack_158);
  lVar19 = *(long *)(param_1 + 0xd8);
  while( true ) {
    uVar4 = lVar19 == param_1 + 0xe0;
    if ((bool)uVar4) break;
    pcVar1 = *(char **)(lVar19 + 0x68);
    for (lVar21 = *(long *)(lVar19 + 0x60) + 0x58; pcVar23 = (char *)(lVar21 + -0x58),
        pcVar23 != pcVar1; lVar21 = lVar21 + 0xc0) {
      plVar5 = *(long **)(param_2 + 0x18);
      pcVar13 = pcVar23;
      FUN_1073f9894();
      plVar6 = *(long **)(param_2 + 0x18);
      if (plVar6 + 1 != plVar5) {
        func_0x0001073f9930(plVar6,auStack_310,pcVar23);
        if (*plVar6 == 0) {
          func_0x000104c03f28("map::at:  key not found");
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1073f5404);
          (*pcVar3)();
        }
        FUN_1073f6580(auStack_268,*plVar6 + 0x58);
        func_0x000107262f3c(lVar21);
        *(undefined4 *)(lVar21 + 0x40) = uStack_25c;
        *(undefined8 *)(lVar21 + 0x38) = uStack_264;
        FUN_1073bc874(auStack_268);
        pcVar13 = pcVar23;
      }
    }
    func_0x00010002c7d4();
  }
  FUN_10743d7e4();
  func_0x0001073f9f10(uStack_58);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = auStack_160;
  FUN_10743d7e4();
  func_0x0001073fa058();
  func_0x0001073f9f38();
  pppuStack_668 = (undefined8 ***)CONCAT44(pppuStack_668._4_4_,0x36);
  uStack_650._0_4_ = 0;
  puStack_638 = (undefined8 *)0x0;
  uStack_630 = 0;
  uStack_380 = extraout_x8_00;
  func_0x0001073fa35c();
  uStack_648._0_4_ = (undefined4)extraout_x9;
  uStack_648._4_4_ = (undefined4)((ulong)extraout_x9 >> 0x20);
  puStack_640 = (undefined1 *)0x0;
  uStack_620 = 0;
  uStack_61c = 1;
  uStack_610 = 0;
  uStack_608 = 0;
  uStack_618 = 0;
  FUN_10743cc34(&ppuStack_590,&pppuStack_668,7);
  FUN_10743d7bc(auStack_488,&ppuStack_590);
  func_0x000107288cd8(&ppuStack_590);
  func_0x000107262330(&pppuStack_668);
  func_0x000104c2fe00(auStack_5c8,puVar7 + 0x58);
  FUN_107371bc4(auStack_480,"source",auStack_5c8);
  func_0x000104c2f714(auStack_5c8);
  func_0x0001073fa164();
  func_0x00010729d56c(auStack_480);
  if (*(long *)(puVar7 + 0xe8) != 0) {
    ppppuVar15 = *(undefined8 *****)(pcVar13 + 0x30);
    (**(code **)(**(long **)(puVar7 + 0xb8) + 0x20))(&ppuStack_590);
    puVar8 = (undefined8 *)0x190;
    __Znwm();
    puVar8[1] = 0;
    puVar8[2] = 0;
    ppuVar9 = (undefined **)(puVar8 + 3);
    *puVar8 = &PTR_FUN_1109ad508;
    FUN_107457604(ppuVar9,puVar7 + 0x58,&ppuStack_590,puVar7 + 0x20,puVar7 + 0x90);
    ppuStack_680 = ppuVar9;
    puStack_678 = puVar8;
    func_0x000104c2f714(&ppuStack_590);
    plVar6 = *(long **)(puVar7 + 0xb8);
    (**(code **)(*plVar6 + 0x10))();
    for (plVar5 = (long *)0x0; uVar4 = plVar5 == plVar6, !(bool)uVar4;
        plVar5 = (long *)((long)plVar5 + 1)) {
      (**(code **)(**(long **)(puVar7 + 0xb8) + 0x18))
                (&plStack_690,*(long **)(puVar7 + 0xb8),plVar5);
      uStack_558 = uStack_688;
      plStack_560 = plStack_690;
      plStack_690 = (long *)0x0;
      uStack_688 = 0;
      uStack_580 = 0;
      puStack_588 = (undefined8 *)0x0;
      uStack_570 = 0;
      uStack_578 = 0;
      uStack_568 = 0x3f800000;
      ppuStack_590 = &PTR_DAT_1109ad5b8;
      uStack_6a0 = 0;
      uStack_698 = 0;
      pppuStack_548 = (undefined8 ****)0x0;
      pppuStack_540 = (undefined8 ****)0x0;
      pppuStack_550 = (undefined8 ****)0x0;
      func_0x0001072d124c(auStack_538);
      uStack_528 = uStack_528 & 0xffffff00;
      uStack_524 = 0;
      func_0x0001073730ac(auStack_520);
      func_0x0001073730ac(auStack_510);
      func_0x0001073730ac(auStack_500);
      FUN_107330fdc(&uStack_6a0);
      plVar10 = plStack_560;
      (**(code **)(*plStack_560 + 0x30))();
      puVar11 = (ulong *)(puVar7 + 0xd8);
      FUN_1073f4dc4(puVar11,plVar10);
      uStack_6c8 = 0;
      uStack_6d0 = 0;
      uStack_6b8 = 0;
      uStack_6c0 = 0;
      uStack_6b0 = 0x3f800000;
      lVar21 = (long)(puVar11[1] - *puVar11) / 0xc0;
      FUN_107372aa4(&uStack_6d0,lVar21);
      for (lVar19 = 0; pppuVar2 = pppuStack_548, lVar19 != lVar21; lVar19 = lVar19 + 1) {
        if (pppuStack_548 < pppuStack_540) {
          func_0x0001073fa478();
          ppppuVar20 = (undefined8 ****)(pppuVar2 + 0x11);
        }
        else {
          lVar18 = (long)pppuStack_548 - (long)pppuStack_550;
          if (0x1e1e1e1e1e1e1e1 < lVar18 / 0x88 + 1U) {
            FUN_1073f66f8();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1073f59a4);
            (*pcVar3)();
          }
          func_0x0001073fa33c(((long)pppuStack_540 - (long)pppuStack_550) / 0x88);
          lVar14 = extraout_x9_00;
          if (0xf0f0f0f0f0f0ef < extraout_x8_01) {
            lVar14 = 0x1e1e1e1e1e1e1e1;
          }
          uStack_648 = &pppuStack_540;
          if (lVar14 == 0) {
            ppppuVar12 = (undefined8 ****)0x0;
          }
          else {
            ppppuVar12 = &pppuStack_540;
            FUN_1073f6704();
          }
          lVar18 = (long)ppppuVar12 + lVar18;
          pppuStack_668 = ppppuVar12;
          pppuStack_660 = (undefined8 ***)lVar18;
          pppuStack_658 = (undefined8 ***)lVar18;
          uStack_650 = ppppuVar12 + lVar14 * 0x11;
          func_0x0001073fa478();
          pppuVar2 = pppuStack_548;
          ppppuVar25 = (undefined8 ****)pppuStack_550;
          ppppuVar24 = (undefined8 ****)
                       (lVar18 + (((long)pppuStack_548 - (long)pppuStack_550) / -0x88) * 0x88);
          pppuStack_5f0 = &pppuStack_5d8;
          pppuStack_5e8 = &pppuStack_5d0;
          pppuStack_5d0 = ppppuVar24;
          pppuStack_5f8 = &pppuStack_540;
          pppuStack_5d8 = ppppuVar24;
          for (ppppuVar20 = (undefined8 ****)pppuStack_550; ppppuVar20 != (undefined8 ****)pppuVar2;
              ppppuVar20 = ppppuVar20 + 0x11) {
            func_0x0001073f6444(pppuStack_5d0,ppppuVar20);
            pppuStack_5d0 = pppuStack_5d0 + 0x11;
          }
          uStack_5e0 = 1;
          for (; ppppuVar25 != (undefined8 ****)pppuVar2; ppppuVar25 = ppppuVar25 + 0x11) {
            func_0x0001073e6ed8(ppppuVar25);
          }
          ppppuVar20 = (undefined8 ****)(lVar18 + 0x88);
          FUN_1073f6750(&pppuStack_5f8);
          pppuStack_658 = pppuStack_550;
          uStack_650._0_4_ = SUB84(pppuStack_540,0);
          uStack_650._4_4_ = (undefined4)((ulong)pppuStack_540 >> 0x20);
          pppuStack_668 = pppuStack_550;
          pppuStack_660 = pppuStack_550;
          pppuStack_550 = ppppuVar24;
          pppuStack_548 = ppppuVar20;
          pppuStack_540 = ppppuVar12 + lVar14 * 0x11;
          func_0x0001073f67d0(&pppuStack_668);
        }
        uVar16 = *puVar11;
        pppuStack_548 = ppppuVar20;
        func_0x000104c2d614();
        if ((uVar16 & 1) == 0) {
          func_0x0001072e89a4(&uStack_6d0,*puVar11 + lVar19 * 0xc0);
        }
      }
      func_0x000107295c74(auStack_538,puVar11 + 3);
      uStack_528 = (uint)puVar11[5];
      uStack_524 = *(undefined1 *)((long)puVar11 + 0x2c);
      func_0x000107299380(auStack_500,puVar11 + 10);
      func_0x000107299380(auStack_520,puVar11 + 6);
      func_0x000107299380(auStack_510,puVar11 + 8);
      pppuStack_668 = *(undefined8 ****)(pcVar13 + 0x28);
      uStack_650._0_4_ = *(undefined4 *)(puVar7 + 200);
      uVar17 = **(undefined8 **)(pcVar13 + 0x20);
      uStack_648._4_4_ = *(undefined4 *)(*(undefined8 **)(pcVar13 + 0x20) + 1);
      uStack_650._4_4_ = (undefined4)uVar17;
      uStack_648._0_4_ = (undefined4)((ulong)uVar17 >> 0x20);
      puStack_638 = &uStack_6d0;
      uStack_630 = CONCAT71(uStack_630._1_7_,pcVar13[0x19]);
      pppuStack_660 = ppppuVar15;
      pppuStack_658 = (undefined8 ***)(puVar7 + 8);
      puStack_640 = puVar7 + 0xf0;
      FUN_107457824(ppuStack_680,&ppuStack_590,&pppuStack_668);
      func_0x00010726ea70(&uStack_6d0);
      func_0x0001073f6818(&ppuStack_590);
      FUN_107330fdc(&plStack_690);
    }
    *(char *)(ppuStack_680 + 0x2e) = pcVar13[0x19];
    puVar8 = (undefined8 *)(puVar7 + 0xe0);
    func_0x0001073e6d5c(puVar7 + 0xd8,*puVar8);
    *puVar8 = 0;
    *(undefined8 *)(puVar7 + 0xe8) = 0;
    *(undefined8 **)(puVar7 + 0xd8) = puVar8;
    ppuVar9 = ppuStack_680;
    FUN_107457798();
    if (((ulong)ppuVar9 & 1) != 0) {
      puVar22 = *(undefined1 **)(puVar7 + 8);
      while (puVar8 = puStack_678, ppuVar9 = ppuStack_680, uVar4 = puVar22 == puVar7 + 0x10,
            !(bool)uVar4) {
        ppuStack_680 = (undefined **)0x0;
        puStack_678 = (undefined8 *)0x0;
        uStack_578 = *(undefined8 *)(puVar22 + 0x60);
        uStack_580 = *(undefined8 *)(puVar22 + 0x58);
        puStack_588 = puVar8;
        ppuStack_590 = ppuVar9;
        if (*(long *)(puVar22 + 0x60) != 0) {
          do {
            func_0x0001073fa1b0();
          } while (extraout_w10 != 0);
        }
        FUN_1073e0254(&pppuStack_668);
        func_0x0001073e08f4(&ppuStack_590);
        func_0x00010002c7d4();
      }
    }
    FUN_1073f9ec0(&ppuStack_680);
  }
  FUN_10743d7e4(auStack_488);
  func_0x0001073f9f10(uStack_380);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  FUN_1073f9ec0(&ppuStack_680);
  puVar7 = auStack_488;
  FUN_10743d7e4();
  func_0x0001073fa058();
                    /* WARNING: Could not recover jumptable at 0x0001073f5acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(puVar7 + 0x30) + 0x30))();
  return;
}



/* Entry: 1073f5450; end: 1073f5abf;  */

void FUN_1073f5450(long param_1,long param_2)

{
  long lVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  undefined8 ****ppppuVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 extraout_x8;
  undefined8 ****ppppuVar12;
  ulong extraout_x8_00;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 extraout_x9;
  long extraout_x9_00;
  int extraout_w10;
  long *plVar15;
  long lVar16;
  undefined8 ****ppppuVar17;
  long lVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuVar20;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined **ppuStack_370;
  undefined8 *puStack_368;
  undefined8 ***pppuStack_358;
  undefined8 ***pppuStack_350;
  undefined8 ***pppuStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined4 uStack_310;
  undefined1 uStack_30c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 ***pppuStack_2e8;
  undefined8 ***pppuStack_2e0;
  undefined8 ***pppuStack_2d8;
  undefined1 uStack_2d0;
  undefined8 ***pppuStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined1 auStack_2b8 [56];
  undefined **ppuStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 ***pppuStack_240;
  undefined8 ***pppuStack_238;
  undefined8 ***pppuStack_230;
  undefined1 auStack_228 [16];
  uint uStack_218;
  undefined1 uStack_214;
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined1 auStack_1f0 [120];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [256];
  undefined8 uStack_70;
  
  func_0x0001073f9f38();
  pppuStack_358 = (undefined8 ***)CONCAT44(pppuStack_358._4_4_,0x36);
  uStack_340._0_4_ = 0;
  puStack_328 = (undefined8 *)0x0;
  uStack_320 = 0;
  uStack_70 = extraout_x8;
  func_0x0001073fa35c();
  uStack_338._0_4_ = (undefined4)extraout_x9;
  uStack_338._4_4_ = (undefined4)((ulong)extraout_x9 >> 0x20);
  lStack_330 = 0;
  uStack_310 = 0;
  uStack_30c = 1;
  uStack_300 = 0;
  uStack_2f8 = 0;
  uStack_308 = 0;
  FUN_10743cc34(&ppuStack_280,&pppuStack_358,7);
  FUN_10743d7bc(auStack_178,&ppuStack_280);
  func_0x000107288cd8(&ppuStack_280);
  func_0x000107262330(&pppuStack_358);
  func_0x000104c2fe00(auStack_2b8,param_1 + 0x58);
  FUN_107371bc4(auStack_170,"source",auStack_2b8);
  func_0x000104c2f714(auStack_2b8);
  func_0x0001073fa164();
  func_0x00010729d56c(auStack_170);
  if (*(long *)(param_1 + 0xe8) != 0) {
    ppppuVar12 = *(undefined8 *****)(param_2 + 0x30);
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))(&ppuStack_280);
    puVar4 = (undefined8 *)0x190;
    __Znwm();
    puVar4[1] = 0;
    puVar4[2] = 0;
    ppuVar5 = (undefined **)(puVar4 + 3);
    *puVar4 = &PTR_FUN_1109ad508;
    FUN_107457604(ppuVar5,param_1 + 0x58,&ppuStack_280,param_1 + 0x20,param_1 + 0x90);
    ppuStack_370 = ppuVar5;
    puStack_368 = puVar4;
    func_0x000104c2f714(&ppuStack_280);
    plVar6 = *(long **)(param_1 + 0xb8);
    (**(code **)(*plVar6 + 0x10))();
    for (plVar15 = (long *)0x0; in_ZR = plVar15 == plVar6, !(bool)in_ZR;
        plVar15 = (long *)((long)plVar15 + 1)) {
      (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))
                (&plStack_380,*(long **)(param_1 + 0xb8),plVar15);
      uStack_248 = uStack_378;
      plStack_250 = plStack_380;
      plStack_380 = (long *)0x0;
      uStack_378 = 0;
      uStack_270 = 0;
      puStack_278 = (undefined8 *)0x0;
      uStack_260 = 0;
      uStack_268 = 0;
      uStack_258 = 0x3f800000;
      ppuStack_280 = &PTR_DAT_1109ad5b8;
      uStack_390 = 0;
      uStack_388 = 0;
      pppuStack_238 = (undefined8 ****)0x0;
      pppuStack_230 = (undefined8 ****)0x0;
      pppuStack_240 = (undefined8 ****)0x0;
      func_0x0001072d124c(auStack_228);
      uStack_218 = uStack_218 & 0xffffff00;
      uStack_214 = 0;
      func_0x0001073730ac(auStack_210);
      func_0x0001073730ac(auStack_200);
      func_0x0001073730ac(auStack_1f0);
      FUN_107330fdc(&uStack_390);
      plVar7 = plStack_250;
      (**(code **)(*plStack_250 + 0x30))();
      puVar8 = (ulong *)(param_1 + 0xd8);
      FUN_1073f4dc4(puVar8,plVar7);
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_3a0 = 0x3f800000;
      lVar1 = (long)(puVar8[1] - *puVar8) / 0xc0;
      FUN_107372aa4(&uStack_3c0,lVar1);
      for (lVar18 = 0; pppuVar2 = pppuStack_238, lVar18 != lVar1; lVar18 = lVar18 + 1) {
        if (pppuStack_238 < pppuStack_230) {
          func_0x0001073fa478();
          ppppuVar17 = (undefined8 ****)(pppuVar2 + 0x11);
        }
        else {
          lVar16 = (long)pppuStack_238 - (long)pppuStack_240;
          if (0x1e1e1e1e1e1e1e1 < lVar16 / 0x88 + 1U) {
            FUN_1073f66f8();
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1073f59a4);
            (*pcVar3)();
          }
          func_0x0001073fa33c(((long)pppuStack_230 - (long)pppuStack_240) / 0x88);
          lVar11 = extraout_x9_00;
          if (0xf0f0f0f0f0f0ef < extraout_x8_00) {
            lVar11 = 0x1e1e1e1e1e1e1e1;
          }
          uStack_338 = &pppuStack_230;
          if (lVar11 == 0) {
            ppppuVar9 = (undefined8 ****)0x0;
          }
          else {
            ppppuVar9 = &pppuStack_230;
            FUN_1073f6704();
          }
          lVar16 = (long)ppppuVar9 + lVar16;
          pppuStack_358 = ppppuVar9;
          pppuStack_350 = (undefined8 ***)lVar16;
          pppuStack_348 = (undefined8 ***)lVar16;
          uStack_340 = ppppuVar9 + lVar11 * 0x11;
          func_0x0001073fa478();
          pppuVar2 = pppuStack_238;
          ppppuVar20 = (undefined8 ****)pppuStack_240;
          ppppuVar19 = (undefined8 ****)
                       (lVar16 + (((long)pppuStack_238 - (long)pppuStack_240) / -0x88) * 0x88);
          pppuStack_2e0 = &pppuStack_2c8;
          pppuStack_2d8 = &pppuStack_2c0;
          pppuStack_2c0 = ppppuVar19;
          pppuStack_2e8 = &pppuStack_230;
          pppuStack_2c8 = ppppuVar19;
          for (ppppuVar17 = (undefined8 ****)pppuStack_240; ppppuVar17 != (undefined8 ****)pppuVar2;
              ppppuVar17 = ppppuVar17 + 0x11) {
            func_0x0001073f6444(pppuStack_2c0,ppppuVar17);
            pppuStack_2c0 = pppuStack_2c0 + 0x11;
          }
          uStack_2d0 = 1;
          for (; ppppuVar20 != (undefined8 ****)pppuVar2; ppppuVar20 = ppppuVar20 + 0x11) {
            func_0x0001073e6ed8(ppppuVar20);
          }
          ppppuVar17 = (undefined8 ****)(lVar16 + 0x88);
          FUN_1073f6750(&pppuStack_2e8);
          pppuStack_348 = pppuStack_240;
          uStack_340._0_4_ = SUB84(pppuStack_230,0);
          uStack_340._4_4_ = (undefined4)((ulong)pppuStack_230 >> 0x20);
          pppuStack_358 = pppuStack_240;
          pppuStack_350 = pppuStack_240;
          pppuStack_240 = ppppuVar19;
          pppuStack_238 = ppppuVar17;
          pppuStack_230 = ppppuVar9 + lVar11 * 0x11;
          func_0x0001073f67d0(&pppuStack_358);
        }
        uVar13 = *puVar8;
        pppuStack_238 = ppppuVar17;
        func_0x000104c2d614();
        if ((uVar13 & 1) == 0) {
          func_0x0001072e89a4(&uStack_3c0,*puVar8 + lVar18 * 0xc0);
        }
      }
      func_0x000107295c74(auStack_228,puVar8 + 3);
      uStack_218 = (uint)puVar8[5];
      uStack_214 = *(undefined1 *)((long)puVar8 + 0x2c);
      func_0x000107299380(auStack_1f0,puVar8 + 10);
      func_0x000107299380(auStack_210,puVar8 + 6);
      func_0x000107299380(auStack_200,puVar8 + 8);
      pppuStack_358 = *(undefined8 ****)(param_2 + 0x28);
      uStack_340._0_4_ = *(undefined4 *)(param_1 + 200);
      uVar14 = **(undefined8 **)(param_2 + 0x20);
      uStack_338._4_4_ = *(undefined4 *)(*(undefined8 **)(param_2 + 0x20) + 1);
      uStack_340._4_4_ = (undefined4)uVar14;
      uStack_338._0_4_ = (undefined4)((ulong)uVar14 >> 0x20);
      puStack_328 = &uStack_3c0;
      uStack_320 = CONCAT71(uStack_320._1_7_,*(undefined1 *)(param_2 + 0x19));
      pppuStack_350 = ppppuVar12;
      pppuStack_348 = (undefined8 ****)(param_1 + 8);
      lStack_330 = param_1 + 0xf0;
      FUN_107457824(ppuStack_370,&ppuStack_280,&pppuStack_358);
      func_0x00010726ea70(&uStack_3c0);
      func_0x0001073f6818(&ppuStack_280);
      FUN_107330fdc(&plStack_380);
    }
    *(undefined1 *)(ppuStack_370 + 0x2e) = *(undefined1 *)(param_2 + 0x19);
    puVar4 = (undefined8 *)(param_1 + 0xe0);
    func_0x0001073e6d5c(param_1 + 0xd8,*puVar4);
    *puVar4 = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 **)(param_1 + 0xd8) = puVar4;
    ppuVar5 = ppuStack_370;
    FUN_107457798();
    if (((ulong)ppuVar5 & 1) != 0) {
      lVar18 = *(long *)(param_1 + 8);
      while (puVar4 = puStack_368, ppuVar5 = ppuStack_370, in_ZR = lVar18 == param_1 + 0x10,
            !(bool)in_ZR) {
        ppuStack_370 = (undefined **)0x0;
        puStack_368 = (undefined8 *)0x0;
        uStack_268 = *(undefined8 *)(lVar18 + 0x60);
        uStack_270 = *(undefined8 *)(lVar18 + 0x58);
        puStack_278 = puVar4;
        ppuStack_280 = ppuVar5;
        if (*(long *)(lVar18 + 0x60) != 0) {
          do {
            func_0x0001073fa1b0();
          } while (extraout_w10 != 0);
        }
        FUN_1073e0254(&pppuStack_358);
        func_0x0001073e08f4(&ppuStack_280);
        func_0x00010002c7d4();
      }
    }
    FUN_1073f9ec0(&ppuStack_370);
  }
  FUN_10743d7e4(auStack_178);
  func_0x0001073f9f10(uStack_70);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1073f9ec0(&ppuStack_370);
    puVar10 = auStack_178;
    FUN_10743d7e4();
    func_0x0001073fa058();
                    /* WARNING: Could not recover jumptable at 0x0001073f5acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(puVar10 + 0x30) + 0x30))();
    return;
  }
  return;
}



/* Entry: 1073f5ac0; end: 1073f5ad7;  */

void FUN_1073f5ac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073f5acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x30))();
  return;
}



/* Entry: 1073f5ad8; end: 1073f5aeb;  */

void FUN_1073f5ad8(void)

{
  func_0x0001073e6c04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073f5aec; end: 1073f5c5b;  */

long FUN_1073f5aec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073f5c5c; end: 1073f5ca7;  */

void FUN_1073f5c5c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x0001073f9fe0();
  FUN_1073e7138();
  func_0x0001073fa4b0();
  if (!(bool)in_ZR) {
    func_0x0001073fa038((&PTR_FUN_1109ad290)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  return;
}



/* Entry: 1073f5ca8; end: 1073f5cb3;  */

void FUN_1073f5ca8(undefined8 *param_1,undefined1 *param_2)

{
  *(undefined1 *)*param_1 = *param_2;
  return;
}



/* Entry: 1073f5cb4; end: 1073f5ce3;  */

undefined1 * FUN_1073f5cb4(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  FUN_1073f5ce4();
  return param_1;
}



/* Entry: 1073f5ce4; end: 1073f5d2b;  */

void FUN_1073f5ce4(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073fa0f8();
  FUN_1073e7178();
  uVar1 = *(uint *)(unaff_x20 + 0x90);
  if (uVar1 != 0xffffffff) {
    func_0x0001073fa038((&PTR_FUN_1109ad2a0)[uVar1]);
    *(uint *)(unaff_x19 + 0x90) = uVar1;
  }
  return;
}



/* Entry: 1073f5d2c; end: 1073f5d43;  */

void FUN_1073f5d2c(long *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *param_1;
  func_0x000104c318bc();
  uVar1 = *(undefined1 *)(param_2 + 0x38);
  *(undefined1 *)(lVar2 + 0x40) = 0;
  *(undefined1 *)(lVar2 + 0x38) = uVar1;
  *(undefined1 *)(lVar2 + 0x58) = 0;
  if (*(char *)(param_2 + 0x58) == '\x01') {
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(lVar2 + 0x48) = uVar4;
    *(undefined8 *)(lVar2 + 0x40) = uVar3;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined1 *)(lVar2 + 0x58) = 1;
  }
  return;
}



/* Entry: 1073f5d44; end: 1073f5d73;  */

undefined1 * FUN_1073f5d44(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  FUN_1073f5d74();
  return param_1;
}



/* Entry: 1073f5d74; end: 1073f5dbb;  */

void FUN_1073f5d74(void)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073fa0f8();
  FUN_1073deccc();
  uVar1 = *(uint *)(unaff_x20 + 0x38);
  if (uVar1 != 0xffffffff) {
    func_0x0001073fa038((&PTR_FUN_1109ad2b0)[uVar1]);
    *(uint *)(unaff_x19 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 1073f5dbc; end: 1073f5dd7;  */

void FUN_1073f5dbc(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined8 *)*param_1 = *param_2;
  return;
}



/* Entry: 1073f5dd8; end: 1073f5e23;  */

void FUN_1073f5dd8(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x0001073f9fe0();
  FUN_1073e70f8();
  func_0x0001073fa4b0();
  if (!(bool)in_ZR) {
    func_0x0001073fa038((&PTR_FUN_1109ad2c0)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  return;
}



/* Entry: 1073f5e24; end: 1073f5e2f;  */

void FUN_1073f5e24(undefined8 *param_1,undefined1 *param_2)

{
  *(undefined1 *)*param_1 = *param_2;
  return;
}



/* Entry: 1073f5e30; end: 1073f5e4b;  */

void FUN_1073f5e30(void)

{
  func_0x0001073fa3fc();
  func_0x0001073fa2f4();
  return;
}



/* Entry: 1073f5e4c; end: 1073f5e97;  */

void FUN_1073f5e4c(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x0001073f9fe0();
  FUN_1073e70b8();
  func_0x0001073fa4b0();
  if (!(bool)in_ZR) {
    func_0x0001073fa038((&PTR_FUN_1109ad2d0)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  return;
}



/* Entry: 1073f5e98; end: 1073f5ea3;  */

void FUN_1073f5e98(undefined8 *param_1,undefined1 *param_2)

{
  *(undefined1 *)*param_1 = *param_2;
  return;
}



/* Entry: 1073f5ea4; end: 1073f5ebf;  */

void FUN_1073f5ea4(void)

{
  func_0x0001073fa3fc();
  func_0x0001073fa2f4();
  return;
}



/* Entry: 1073f5ec0; end: 1073f5f0b;  */

void FUN_1073f5ec0(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  uint unaff_w21;
  
  func_0x0001073f9fe0();
  FUN_1073e7078();
  func_0x0001073fa4b0();
  if (!(bool)in_ZR) {
    func_0x0001073fa038((&PTR_FUN_1109ad2e0)[unaff_w21]);
    *(uint *)(unaff_x19 + 0x30) = unaff_w21;
  }
  return;
}



/* Entry: 1073f5f0c; end: 1073f5f17;  */

void FUN_1073f5f0c(undefined8 *param_1,undefined1 *param_2)

{
  *(undefined1 *)*param_1 = *param_2;
  return;
}



/* Entry: 1073f5f18; end: 1073f5f33;  */

void FUN_1073f5f18(void)

{
  func_0x0001073fa3fc();
  func_0x0001073fa2f4();
  return;
}



/* Entry: 1073f5f34; end: 1073f5f3f;  */

void FUN_1073f5f34(void)

{
  undefined8 *extraout_x8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001073fa0a8();
  FUN_1073f5f78(&uStack_40);
  extraout_x8[1] = uStack_38;
  *extraout_x8 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_1073f60bc(&uStack_40);
  return;
}



/* Entry: 1073f5f40; end: 1073f5f77;  */

void FUN_1073f5f40(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1073f5f78(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1073f60bc(&uStack_30);
  return;
}



/* Entry: 1073f5f78; end: 1073f5f97;  */

void FUN_1073f5f78(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1073f5f98(&uStack_11,param_1);
  return;
}



/* Entry: 1073f5f98; end: 1073f601f;  */

undefined1 * FUN_1073f5f98(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x0001073f9f24();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_1073f6020(auStack_40);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_FUN_1109ad568;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_1109b27e0;
  puStack_30[4] = *(undefined8 *)(param_2 + 8);
  puStack_30 = (undefined8 *)0x0;
  *unaff_x19 = (long)(puVar1 + 3);
  unaff_x19[1] = (long)puVar1;
  func_0x0001073f60ac();
  func_0x0001073f9f10(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_1073f6048();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1073f6020; end: 1073f6047;  */

long FUN_1073f6020(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1073f6048();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1073f6048; end: 1073f6073;  */

void FUN_1073f6048(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109ad568;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073f6074; end: 1073f6077;  */

void FUN_1073f6074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ad568;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1073f6078; end: 1073f608b;  */

void FUN_1073f6078(void)

{
  func_0x0001073f609c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073f608c; end: 1073f60bb;  */

void FUN_1073f608c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073f6094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1073f60bc; end: 1073f60e3;  */

long FUN_1073f60bc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1073f60e4; end: 1073f610b;  */

undefined4
FUN_1073f60e4(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_3[0xc] != 0) {
    uVar2 = *param_4;
    puVar1 = param_3;
    func_0x00010727f740(param_3,param_1,param_2);
    if (((ulong)puVar1 >> 0x20 & 1) == 0) {
      if (*(char *)(param_3 + 0xb) == '\x01') {
        uVar2 = param_3[10];
      }
    }
    else {
      uVar2 = SUB84(puVar1,0);
    }
    return uVar2;
  }
  return *param_3;
}



/* Entry: 1073f610c; end: 1073f616f;  */

undefined8 * FUN_1073f610c(undefined8 *param_1,long param_2)

{
  undefined8 *puStack_30;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = 0;
  puStack_30 = param_1;
  if (param_2 != 0) {
    func_0x000105536f6c(param_1);
    func_0x0001073fa26c();
    FUN_1073f6170();
  }
  uStack_28 = 1;
  FUN_10731e304(&puStack_30);
  return param_1;
}



/* Entry: 1073f6170; end: 1073f6193;  */

void FUN_1073f6170(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar1 = puVar2;
  for (lVar3 = param_2 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar2 + param_2;
  return;
}



/* Entry: 1073f6194; end: 1073f6217;  */

/* WARNING: Possible PIC construction at 0x0001073f61c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001073f61cc) */
/* WARNING: Removing unreachable block (ram,0x0001073f9ff8) */

long FUN_1073f6194(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_40 [16];
  
  puVar2 = auStack_40;
  puVar1 = &stack0xfffffffffffffff0;
  lVar3 = param_4;
  if (*(int *)(param_4 + 0x40) != 0) {
    unaff_x30 = 0x1073f61cc;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    param_1 = puVar2;
    lVar3 = param_5;
    unaff_x19 = param_4;
    unaff_x20 = param_3;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010727a6f4(param_1,lVar3);
  func_0x000107278b90();
  return unaff_x19;
}



/* Entry: 1073f6218; end: 1073f628b;  */

void FUN_1073f6218(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  
  func_0x0001073f9f38();
  func_0x0001073fa2ac();
  func_0x0001073fa540();
  if ((bool)in_ZR) {
    func_0x0001073fa2ec();
    func_0x000107775a8c();
    func_0x0001073fa534();
  }
  else {
    func_0x0001073fa528();
  }
  func_0x0001073f9f9c();
  func_0x0001073f9f10(extraout_x8);
  if ((bool)in_ZR) {
    func_0x0001073fa51c();
    return;
  }
  ___stack_chk_fail();
  func_0x0001073f9f9c();
  func_0x0001073fa058();
  extraout_x8_00[9] = 0;
  extraout_x8_00[8] = 0;
  extraout_x8_00[0xb] = 0;
  extraout_x8_00[10] = 0;
  extraout_x8_00[5] = 0;
  extraout_x8_00[4] = 0;
  extraout_x8_00[7] = 0;
  extraout_x8_00[6] = 0;
  extraout_x8_00[1] = 0;
  *extraout_x8_00 = 0;
  extraout_x8_00[3] = 0;
  extraout_x8_00[2] = 0;
  puVar1 = extraout_x8_00;
  func_0x000104c2f64c();
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  return;
}



/* Entry: 1073f628c; end: 1073f62a3;  */

void FUN_1073f628c(undefined8 *param_1)

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
  func_0x000104c2f64c();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 1073f62a4; end: 1073f62bf;  */

void FUN_1073f62a4(long param_1)

{
  func_0x000107278acc();
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}



/* Entry: 1073f62c0; end: 1073f62fb;  */

undefined4 FUN_1073f62c0(undefined4 param_1,uint param_2,undefined8 param_3,undefined4 *param_4)

{
  FUN_1073f62fc();
  if ((param_2 & 1) == 0) {
    param_1 = *param_4;
  }
  return param_1;
}



/* Entry: 1073f62fc; end: 1073f6413;  */

void FUN_1073f62fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_29;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 uStack_11;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  func_0x0001073f632c(param_1,&uStack_11,&uStack_28,&uStack_29);
  return;
}



/* Entry: 1073f6414; end: 1073f6417;  */

void FUN_1073f6414(undefined8 param_1)

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



/* Entry: 1073f6418; end: 1073f648b;  */

void FUN_1073f6418(long param_1)

{
  long unaff_x19;
  
  func_0x0001073fa0c0();
  func_0x000104c318bc();
  func_0x0001073f6444(param_1 + 0x38,unaff_x19 + 0x38);
  return;
}



/* Entry: 1073f648c; end: 1073f6497;  */

undefined8 * FUN_1073f648c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_169 [16];
  undefined8 uStack_e8;
  undefined8 auStack_b9 [16];
  undefined8 uStack_38;
  
  func_0x0001073fa0a8();
  func_0x0001073f9f38();
  uStack_38 = extraout_x8;
  func_0x0001073fa2ac();
  func_0x0001073fa540();
  if ((bool)in_ZR) {
    func_0x0001073fa2ec();
    param_2 = auStack_b9;
    func_0x000107775aa8();
    func_0x0001073fa534();
  }
  else {
    func_0x0001073fa528();
  }
  func_0x0001073f9f9c();
  func_0x0001073f9f10(uStack_38);
  if ((bool)in_ZR) {
    func_0x0001073fa51c();
  }
  else {
    ___stack_chk_fail();
    func_0x0001073f9f9c();
    func_0x0001073fa058();
    func_0x0001073f9f38();
    uStack_e8 = extraout_x8_00;
    func_0x0001073fa2ac();
    func_0x0001073fa540();
    if ((bool)in_ZR) {
      func_0x0001073fa2ec();
      param_2 = auStack_169;
      func_0x000107775ac4();
      func_0x0001073fa534();
    }
    else {
      func_0x0001073fa528();
    }
    func_0x0001073f9f9c();
    func_0x0001073f9f10(uStack_e8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      puVar1 = param_1;
      func_0x0001073f9f9c();
      func_0x0001073fa058();
      func_0x0001073fa0f8();
      uVar3 = param_2[1];
      uVar2 = *param_2;
      *(undefined8 *)((long)puVar1 + 0xd) = *(undefined8 *)((long)param_2 + 0xd);
      puVar1[1] = uVar3;
      *puVar1 = uVar2;
      func_0x00010724e660(puVar1 + 3,param_2 + 3);
      func_0x00010724e660(param_1 + 6,unaff_x20 + 0x30);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x51);
      *(undefined8 *)((long)param_1 + 0x59) = *(undefined8 *)(unaff_x20 + 0x59);
      *(undefined8 *)((long)param_1 + 0x51) = uVar4;
      param_1[10] = uVar3;
      param_1[9] = uVar2;
      return param_1;
    }
    func_0x0001073fa51c();
  }
  return param_1;
}



/* Entry: 1073f6498; end: 1073f650b;  */

undefined8 * FUN_1073f6498(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_159 [16];
  undefined8 uStack_d8;
  undefined8 auStack_a9 [16];
  undefined8 uStack_28;
  
  func_0x0001073f9f38();
  uStack_28 = extraout_x8;
  func_0x0001073fa2ac();
  func_0x0001073fa540();
  if ((bool)in_ZR) {
    func_0x0001073fa2ec();
    param_2 = auStack_a9;
    func_0x000107775aa8();
    func_0x0001073fa534();
  }
  else {
    func_0x0001073fa528();
  }
  func_0x0001073f9f9c();
  func_0x0001073f9f10(uStack_28);
  if ((bool)in_ZR) {
    func_0x0001073fa51c();
  }
  else {
    ___stack_chk_fail();
    func_0x0001073f9f9c();
    func_0x0001073fa058();
    func_0x0001073f9f38();
    uStack_d8 = extraout_x8_00;
    func_0x0001073fa2ac();
    func_0x0001073fa540();
    if ((bool)in_ZR) {
      func_0x0001073fa2ec();
      param_2 = auStack_159;
      func_0x000107775ac4();
      func_0x0001073fa534();
    }
    else {
      func_0x0001073fa528();
    }
    func_0x0001073f9f9c();
    func_0x0001073f9f10(uStack_d8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      puVar1 = param_1;
      func_0x0001073f9f9c();
      func_0x0001073fa058();
      func_0x0001073fa0f8();
      uVar3 = param_2[1];
      uVar2 = *param_2;
      *(undefined8 *)((long)puVar1 + 0xd) = *(undefined8 *)((long)param_2 + 0xd);
      puVar1[1] = uVar3;
      *puVar1 = uVar2;
      func_0x00010724e660(puVar1 + 3,param_2 + 3);
      func_0x00010724e660(param_1 + 6,unaff_x20 + 0x30);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x51);
      *(undefined8 *)((long)param_1 + 0x59) = *(undefined8 *)(unaff_x20 + 0x59);
      *(undefined8 *)((long)param_1 + 0x51) = uVar4;
      param_1[10] = uVar3;
      param_1[9] = uVar2;
      return param_1;
    }
    func_0x0001073fa51c();
  }
  return param_1;
}



/* Entry: 1073f650c; end: 1073f657f;  */

undefined8 * FUN_1073f650c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_a9 [16];
  undefined8 uStack_28;
  
  func_0x0001073f9f38();
  uStack_28 = extraout_x8;
  func_0x0001073fa2ac();
  func_0x0001073fa540();
  if ((bool)in_ZR) {
    func_0x0001073fa2ec();
    param_2 = auStack_a9;
    func_0x000107775ac4();
    func_0x0001073fa534();
  }
  else {
    func_0x0001073fa528();
  }
  func_0x0001073f9f9c();
  func_0x0001073f9f10(uStack_28);
  if ((bool)in_ZR) {
    func_0x0001073fa51c();
    return param_1;
  }
  ___stack_chk_fail();
  puVar1 = param_1;
  func_0x0001073f9f9c();
  func_0x0001073fa058();
  func_0x0001073fa0f8();
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *(undefined8 *)((long)puVar1 + 0xd) = *(undefined8 *)((long)param_2 + 0xd);
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  func_0x00010724e660(puVar1 + 3,param_2 + 3);
  func_0x00010724e660(param_1 + 6,unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x51);
  *(undefined8 *)((long)param_1 + 0x59) = *(undefined8 *)(unaff_x20 + 0x59);
  *(undefined8 *)((long)param_1 + 0x51) = uVar4;
  param_1[10] = uVar3;
  param_1[9] = uVar2;
  return param_1;
}



/* Entry: 1073f6580; end: 1073f65e3;  */

void FUN_1073f6580(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001073fa0f8();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 0xd) = *(undefined8 *)((long)param_2 + 0xd);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010724e660(param_1 + 3,param_2 + 3);
  func_0x00010724e660(unaff_x19 + 0x30,unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x51);
  *(undefined8 *)(unaff_x19 + 0x59) = *(undefined8 *)(unaff_x20 + 0x59);
  *(undefined8 *)(unaff_x19 + 0x51) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  return;
}



/* Entry: 1073f65e4; end: 1073f65f7;  */

void FUN_1073f65e4(void)

{
  func_0x0001073f6818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1073f65f8; end: 1073f6637;  */

void FUN_1073f65f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001073f6604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  return;
}



/* Entry: 1073f6638; end: 1073f6687;  */

void FUN_1073f6638(void)

{
  func_0x0001073f9fa8();
  func_0x0001073f665c();
  return;
}



/* Entry: 1073f6688; end: 1073f668f;  */

void FUN_1073f6688(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073fa0c0(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x88;
    func_0x0001073e6ed8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073f6690; end: 1073f66f7;  */

void FUN_1073f6690(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073fa0c0();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x88;
    func_0x0001073e6ed8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073f66f8; end: 1073f6703;  */

void FUN_1073f66f8(void)

{
  func_0x0001073fa0a8();
  FUN_1073f6728();
  return;
}



/* Entry: 1073f6704; end: 1073f6727;  */

void FUN_1073f6704(void)

{
  FUN_1073f6728();
  return;
}



/* Entry: 1073f6728; end: 1073f674f;  */

long FUN_1073f6728(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
    lVar1 = param_2 * 0x88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1073f6780(param_1);
  }
  return param_1;
}



/* Entry: 1073f6750; end: 1073f677f;  */

long FUN_1073f6750(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1073f6780(param_1);
  }
  return param_1;
}



/* Entry: 1073f6780; end: 1073f679f;  */

void FUN_1073f6780(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x88;
    func_0x0001073e6ed8();
  }
  return;
}



/* Entry: 1073f67a0; end: 1073f687b;  */

void FUN_1073f67a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x88;
    func_0x0001073e6ed8();
  }
  return;
}



/* Entry: 1073f687c; end: 1073f6897;  */

long * FUN_1073f687c(long *param_1)

{
  if ((int)param_1[6] != -1) {
    return param_1;
  }
  func_0x00010563ab98();
  return (long *)(ulong)*(byte *)(*param_1 + 8);
}



/* Entry: 1073f6898; end: 1073f68ab;  */

undefined1 FUN_1073f6898(long *param_1)

{
  return *(undefined1 *)(*param_1 + 8);
}


