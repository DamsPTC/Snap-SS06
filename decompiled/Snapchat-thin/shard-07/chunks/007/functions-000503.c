/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10596a734; end: 10596a75f;  */

undefined8 FUN_10596a734(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010595cc04(param_1 + 0x88);
  func_0x00010595cb7c(param_1 + 0x10);
  func_0x00010048d444();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10596a760; end: 10596a763;  */

undefined8 * FUN_10596a760(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c2dc0;
  func_0x000100558bb4(param_1 + 3);
  func_0x00010596aa7c();
  return param_1;
}



/* Entry: 10596a764; end: 10596a777;  */

void FUN_10596a764(void)

{
  FUN_10596a918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596a778; end: 10596a7cb;  */

undefined1 * FUN_10596a778(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    FUN_10596a7cc(param_1);
    param_1[0x18] = 1;
  }
  return param_1;
}



/* Entry: 10596a7cc; end: 10596a803;  */

undefined8 * FUN_10596a7cc(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10596a804(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 3);
  return param_1;
}



/* Entry: 10596a804; end: 10596a88f;  */

void FUN_10596a804(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  lStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10596a890(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  uStack_38 = 1;
  func_0x00010596a8cc(&lStack_40);
  return;
}



/* Entry: 10596a890; end: 10596a8f7;  */

long * FUN_10596a890(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_10595b7a0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
    return plVar1;
  }
  FUN_10595b78c();
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    FUN_10595b774(param_1);
  }
  return param_1;
}



/* Entry: 10596a8f8; end: 10596a917;  */

void FUN_10596a8f8(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_10595b740();
  }
  return;
}



/* Entry: 10596a918; end: 10596a94f;  */

undefined8 * FUN_10596a918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c2dc0;
  func_0x000100558bb4(param_1 + 3);
  func_0x00010596aa7c();
  return param_1;
}



/* Entry: 10596a950; end: 10596a96b;  */

void FUN_10596a950(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010596a968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,puVar1 + 2,puVar1 + 0x10,puVar1 + 0x12);
  return;
}



/* Entry: 10596a96c; end: 10596a98b;  */

void FUN_10596a96c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10596a300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10596a98c; end: 10596a9b3;  */

void FUN_10596a98c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10596a9b4; end: 10596a9d3;  */

void FUN_10596a9b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10596a538();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10596a9d4; end: 10596a9f7;  */

void FUN_10596a9d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10596a9f8; end: 10596aa17;  */

void FUN_10596a9f8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10596a734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10596aa18; end: 10596aacb;  */

void FUN_10596aa18(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10596aacc; end: 10596b0bb;  */

void FUN_10596aacc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  long *plVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *puVar9;
  long lVar10;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  undefined8 *unaff_x19;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined2 uStack_298;
  byte bStack_296;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined1 auStack_218 [48];
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined1 auStack_190 [16];
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined1 auStack_158 [16];
  ulong uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined2 uStack_108;
  byte bStack_106;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  uVar8 = param_2;
  func_0x000100901694();
  uStack_68 = extraout_x8;
  func_0x000100901560(auStack_158,uVar8);
  func_0x00010090171c(&uStack_170,param_1,auStack_158);
  func_0x00010044fc54(&uStack_180,param_6,0x17,1,0);
  func_0x00010054fd30(auStack_190,param_5);
  func_0x000100901a08(&uStack_1a0,param_4,auStack_190);
  func_0x000100901bd4(&uStack_1b0);
  uStack_148 = uStack_148 & 0xffffffffffffff00;
  func_0x00010090260c(&uStack_1c0,&uStack_148);
  func_0x000100902748(&uStack_1d0);
  func_0x000100903658(&uStack_1e0,param_2);
  func_0x000100902c14(auStack_218,param_2);
  func_0x000100902f48(&uStack_230,uStack_1e8);
  lStack_248 = lStack_168;
  uStack_250 = uStack_170;
  if (lStack_168 != 0) {
    do {
      func_0x000100901a68();
    } while (extraout_w10 != 0);
  }
  lStack_258 = lStack_1a8;
  uStack_260 = uStack_1b0;
  if (lStack_1a8 != 0) {
    do {
      func_0x000100901a68();
    } while (extraout_w10_00 != 0);
  }
  uStack_268 = param_7[1];
  uStack_270 = *param_7;
  if (param_7[1] != 0) {
    do {
      func_0x000100901a68();
    } while (extraout_w10_01 != 0);
  }
  func_0x000100902fac(&uStack_240,&uStack_250,&uStack_260,&uStack_270,auStack_218);
  func_0x000100902b24(&uStack_270);
  func_0x000100902af4(&uStack_260);
  func_0x000100902b48(&uStack_250);
  uStack_288 = param_7[1];
  uStack_290 = *param_7;
  if (param_7[1] != 0) {
    do {
      func_0x000100901a68();
    } while (extraout_w10_02 != 0);
  }
  uStack_148 = 0;
  lStack_140 = 0;
  func_0x000100903684(&uStack_280,&uStack_290,&uStack_180,param_3,param_2,&uStack_148,auStack_190,
                      param_8);
  func_0x0001009048c0(&uStack_148);
  func_0x000100902b24(&uStack_290);
  uStack_2d8 = uStack_1c0;
  lStack_2d0 = lStack_1b8;
  if (lStack_1b8 != 0) {
    do {
      func_0x000100901a68();
    } while (extraout_w10_03 != 0);
  }
  lStack_2c0 = lStack_1c8;
  uStack_2c8 = uStack_1d0;
  if (lStack_1c8 != 0) {
    do {
      func_0x000100901a68();
    } while (extraout_w10_04 != 0);
  }
  lStack_2b0 = lStack_1d8;
  uStack_2b8 = uStack_1e0;
  if (lStack_1d8 != 0) {
    do {
      func_0x000100901a68();
    } while (extraout_w10_05 != 0);
  }
  lStack_2a0 = lStack_228;
  uStack_2a8 = uStack_230;
  if (lStack_228 != 0) {
    do {
      func_0x000100901a68();
    } while (extraout_w10_06 != 0);
  }
  bVar2 = *(byte *)(param_3 + 0x80);
  uVar3 = *(undefined1 *)(param_3 + 0x78);
  uVar7 = bVar2 == 0;
  if ((bool)uVar7) {
    uVar3 = 0;
  }
  bStack_296 = bVar2 & *(byte *)(param_3 + 0x79);
  uStack_298 = CONCAT11(uVar3,bVar2);
  func_0x000100903fec(auStack_80,1);
  puStack_70[2] = 0;
  *puStack_70 = &PTR_DAT_1108c2fa0;
  puStack_70[1] = 0;
  lStack_88 = lStack_168;
  uStack_90 = uStack_170;
  puVar9 = puStack_70;
  if (lStack_168 != 0) {
    do {
      func_0x00010596b218();
      puVar9 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  lStack_98 = lStack_198;
  uStack_a0 = uStack_1a0;
  if (lStack_198 != 0) {
    do {
      func_0x00010596b218();
      puVar9 = extraout_x8_01;
    } while (extraout_w11_00 != 0);
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  lStack_b8 = lStack_178;
  uStack_c0 = uStack_180;
  if (lStack_178 != 0) {
    do {
      func_0x00010596b218();
      puVar9 = extraout_x8_02;
    } while (extraout_w11_01 != 0);
  }
  lStack_c8 = lStack_1a8;
  uStack_d0 = uStack_1b0;
  if (lStack_1a8 != 0) {
    do {
      func_0x00010596b218();
      puVar9 = extraout_x8_03;
    } while (extraout_w11_02 != 0);
  }
  uStack_d8 = param_7[1];
  uStack_e0 = *param_7;
  if (param_7[1] != 0) {
    do {
      func_0x00010596b218();
      puVar9 = extraout_x8_04;
    } while (extraout_w11_03 != 0);
  }
  lStack_e8 = lStack_238;
  uStack_f0 = uStack_240;
  if (lStack_238 != 0) {
    do {
      func_0x00010596b218();
      puVar9 = extraout_x8_05;
    } while (extraout_w11_04 != 0);
  }
  lStack_130 = lStack_2c0;
  uStack_138 = uStack_2c8;
  lStack_f8 = lStack_278;
  uStack_100 = uStack_280;
  if (lStack_278 != 0) {
    plVar1 = (long *)(lStack_278 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uStack_148 = uStack_1c0;
  lStack_140 = lStack_2d0;
  uStack_2d8 = 0;
  lStack_2d0 = 0;
  uStack_2c8 = 0;
  lStack_2c0 = 0;
  lStack_120 = lStack_2b0;
  uStack_128 = uStack_2b8;
  uStack_2b8 = 0;
  lStack_2b0 = 0;
  lStack_110 = lStack_2a0;
  uStack_118 = uStack_2a8;
  uStack_2a8 = 0;
  lStack_2a0 = 0;
  bStack_106 = bStack_296;
  uStack_108 = uStack_298;
  func_0x000100904080(puVar9 + 3,&uStack_90,&uStack_a0,&uStack_b0,&uStack_c0,&uStack_d0,&uStack_e0,
                      &uStack_f0,&uStack_100,&uStack_148);
  func_0x000100904120(&uStack_148);
  func_0x000100904158(&uStack_100);
  func_0x00010090417c(&uStack_f0);
  func_0x000100902b24(&uStack_e0);
  func_0x000100902af4(&uStack_d0);
  func_0x000100450be4(&uStack_c0);
  func_0x000100902bd8(&uStack_b0);
  func_0x000100901b38(&uStack_a0);
  func_0x000100902b48(&uStack_90);
  puVar9 = puStack_70;
  puStack_70 = (undefined8 *)0x0;
  func_0x0001009041a0(auStack_80);
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  func_0x000100904774(&uStack_2f8);
  lVar6 = lStack_178;
  uVar8 = uStack_180;
  uStack_180 = 0;
  lStack_178 = 0;
  lVar10 = param_7[1];
  uVar12 = param_7[1];
  uVar11 = *param_7;
  unaff_x19[1] = lVar6;
  *unaff_x19 = uVar8;
  unaff_x19[3] = uVar12;
  unaff_x19[2] = uVar11;
  if (lVar10 != 0) {
    do {
      func_0x000100901a68();
    } while (extraout_w10_07 != 0);
  }
  unaff_x19[4] = puVar9 + 3;
  unaff_x19[5] = puVar9;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  func_0x0001009044a8(&uStack_2e8);
  func_0x000100904120(&uStack_2d8);
  func_0x000100904158(&uStack_280);
  func_0x00010090417c(&uStack_240);
  func_0x000100902aac(&uStack_230);
  func_0x000100902aac(&uStack_1e0);
  func_0x000100902ad0(&uStack_1d0);
  func_0x0001009026a8(&uStack_1c0);
  func_0x0001009047e4(&uStack_1b0);
  func_0x000100904808(&uStack_1a0);
  func_0x000100558bb4(auStack_190);
  func_0x000100450be4(&uStack_180);
  func_0x000100902b48(&uStack_170);
  func_0x000100902ad0(auStack_158);
  func_0x000100901968(uStack_68);
  if (!(bool)uVar7) {
    ___stack_chk_fail();
    func_0x000100904120(&uStack_2d8);
    func_0x000100904158(&uStack_280);
    func_0x00010090417c(&uStack_240);
    func_0x000100902aac(&uStack_230);
    func_0x000100902aac(&uStack_1e0);
    do {
      func_0x000100902ad0(&uStack_1d0);
      func_0x0001009026a8(&uStack_1c0);
      func_0x0001009047e4(&uStack_1b0);
      func_0x000100904808(&uStack_1a0);
      func_0x000100558bb4(auStack_190);
      func_0x000100450be4(&uStack_180);
      func_0x000100902b48(&uStack_170);
      func_0x000100902ad0(auStack_158);
      func_0x00010596b228();
    } while( true );
  }
  return;
}



/* Entry: 10596b0bc; end: 10596b0bf;  */

void FUN_10596b0bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c2e58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596b0c0; end: 10596b0d3;  */

void FUN_10596b0c0(void)

{
  func_0x00010596b0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596b0d4; end: 10596b0eb;  */

void FUN_10596b0d4(long param_1)

{
  func_0x00010596b11c(param_1 + 0x60);
  FUN_105275748(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 10596b0ec; end: 10596b14f;  */

void FUN_10596b0ec(long param_1)

{
  func_0x00010596b11c(param_1 + 0x48);
  FUN_105275748(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10596b150; end: 10596b153;  */

void FUN_10596b150(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c2ea8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596b154; end: 10596b167;  */

void FUN_10596b154(void)

{
  func_0x00010596b170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596b168; end: 10596b17f;  */

void FUN_10596b168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100902c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596b180; end: 10596b193;  */

void FUN_10596b180(void)

{
  func_0x00010596b1ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596b194; end: 10596b1bb;  */

void FUN_10596b194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100902c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596b1bc; end: 10596b1cf;  */

void FUN_10596b1bc(void)

{
  FUN_10596b1d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596b1d0; end: 10596b1e3;  */

void FUN_10596b1d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596b1e4; end: 10596b1f7;  */

void FUN_10596b1e4(void)

{
  func_0x00010596b200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596b1f8; end: 10596b23b;  */

void FUN_10596b1f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100902c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596b23c; end: 10596b28b;  */

void FUN_10596b23c(undefined8 *param_1,long *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  if (*param_2 == 0) {
    func_0x000100901cc0(auStack_30);
    func_0x00010596b4c8();
    func_0x0001009047bc();
  }
  else {
    FUN_10596b28c(auStack_30);
    func_0x00010596b4c8();
    FUN_10596b450();
  }
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  return;
}



/* Entry: 10596b28c; end: 10596b2af;  */

void FUN_10596b28c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10596b2b0(&uStack_11,param_1);
  return;
}



/* Entry: 10596b2b0; end: 10596b317;  */

long FUN_10596b2b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x000100901c48();
  FUN_10596b318(auStack_40,1);
  FUN_10596b36c();
  func_0x000100902338();
  func_0x00010596b440();
  func_0x000100902360();
  if ((bool)in_ZR) {
    return lStack_30;
  }
  lVar1 = lStack_30;
  ___stack_chk_fail();
  func_0x00010596b440(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_10596b340();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 10596b318; end: 10596b33f;  */

long FUN_10596b318(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10596b340();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10596b340; end: 10596b36b;  */

undefined8 * FUN_10596b340(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c3090;
  param_1[1] = 0;
  FUN_10596b3cc(param_1 + 3);
  return param_1;
}



/* Entry: 10596b36c; end: 10596b3ab;  */

undefined8 * FUN_10596b36c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c3090;
  param_1[1] = 0;
  FUN_10596b3cc(param_1 + 3);
  return param_1;
}



/* Entry: 10596b3ac; end: 10596b3af;  */

void FUN_10596b3ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3090;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596b3b0; end: 10596b3c3;  */

void FUN_10596b3b0(void)

{
  FUN_10596b434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596b3c4; end: 10596b3cb;  */

void FUN_10596b3c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010596b4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596b3cc; end: 10596b433;  */

undefined8 * FUN_10596b3cc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = &PTR_FUN_1108c46c8;
  param_1[2] = uVar5;
  param_1[1] = uVar4;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_10595d480(&uStack_30);
  return param_1;
}



/* Entry: 10596b434; end: 10596b44f;  */

void FUN_10596b434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3090;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596b450; end: 10596b477;  */

long FUN_10596b450(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10596b478; end: 10596b47b;  */

void FUN_10596b478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c30e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596b47c; end: 10596b48f;  */

void FUN_10596b47c(void)

{
  func_0x00010596b498();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596b490; end: 10596b4db;  */

void FUN_10596b490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010596b4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596b4dc; end: 10596b537;  */

void FUN_10596b4dc(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10596b538(param_1 + 8);
  uStack_28 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x000100904678(&uStack_30);
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  func_0x000100902bd8(&uStack_30);
  return;
}



/* Entry: 10596b538; end: 10596b563;  */

void FUN_10596b538(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001009044a8(&uStack_20);
  return;
}



/* Entry: 10596b564; end: 10596b603;  */

void FUN_10596b564(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010596b57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10596b604; end: 10596b7c3;  */

void FUN_10596b604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  int unaff_w20;
  undefined1 auStack_498 [112];
  undefined1 auStack_428 [112];
  long alStack_3b8 [33];
  byte bStack_2b0;
  long alStack_2a8 [33];
  byte bStack_1a0;
  undefined1 auStack_198 [280];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_10596b708;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0x10596bdac;
  ppuStack_60 = &PTR_DAT_1108c3390;
  puStack_50 = &uStack_80;
  uStack_58 = param_3;
  func_0x00010596e6f0(auStack_198);
  FUN_10596b7c4(alStack_2a8,auStack_198);
  _bzero(alStack_3b8,0x110);
  while (((bStack_1a0 & 1) != 0 || ((bStack_2b0 & 1) != 0))) {
    in_ZR = alStack_2a8[0] == alStack_3b8[0];
    if ((bool)in_ZR) break;
    plVar1 = alStack_2a8;
    FUN_10596b7dc(plVar1);
    FUN_105987688(auStack_498,plVar1,1);
    FUN_105966214(auStack_428,auStack_498);
    func_0x00010595cb7c(auStack_498);
    FUN_10596b88c(&uStack_80,auStack_428);
    func_0x00010595cb7c(auStack_428);
    FUN_105962364(alStack_2a8);
  }
  func_0x00010596bff8(alStack_3b8);
  func_0x00010596bff8(alStack_2a8);
  FUN_10596bdd4(auStack_198);
  while( true ) {
    func_0x0001005ed4a0(&uStack_68);
    func_0x00010596778c(&uStack_80);
LAB_10596b708:
    func_0x0001009048ac(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x00010596bfec();
    FUN_10596bdd4(auStack_198);
    while (in_ZR = unaff_w20 == 1, !(bool)in_ZR) {
      func_0x0001005ed4a0(&uStack_68);
      func_0x00010596778c(&uStack_80);
      func_0x00010596bfe4();
      func_0x00010596bfec();
    }
    ___cxa_begin_catch();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 10596b7c4; end: 10596b7db;  */

void FUN_10596b7c4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_2 = param_2 + 8;
  func_0x00010596c000(param_1,param_2);
  FUN_10596bee8(param_1 + 1,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 10596b7dc; end: 10596b873;  */

long * FUN_10596b7dc(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 0x21) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x0001004c3cd0(auStack_38,&UNK_10f315796,auStack_50);
    func_0x00010bcc7444(uVar1,0x65,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 10596b874; end: 10596b877;  */

undefined8 * FUN_10596b874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3130;
  func_0x000100902b48(param_1 + 7);
  func_0x000100902bd8(param_1 + 5);
  func_0x000100904678(param_1 + 3);
  func_0x0001009044a8(param_1 + 1);
  return param_1;
}



/* Entry: 10596b878; end: 10596b88b;  */

void FUN_10596b878(void)

{
  func_0x00010596bc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596b88c; end: 10596b8eb;  */

long FUN_10596b88c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010596b8c8();
    lVar2 = uVar1 + 0x70;
  }
  else {
    lVar2 = param_1;
    FUN_10596b8ec();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x70;
}



/* Entry: 10596b8ec; end: 10596b98f;  */

long FUN_10596b8ec(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010596bfec();
  FUN_10596b9f4();
  FUN_10596badc(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x70,unaff_x19 + 2);
  FUN_10596b990(lStack_48);
  lStack_48 = lStack_48 + 0x70;
  FUN_10596ba54();
  lVar1 = unaff_x19[1];
  func_0x00010596bbf8(auStack_58);
  return lVar1;
}



/* Entry: 10596b990; end: 10596b9f3;  */

void FUN_10596b990(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000100626f0c();
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  if (*(char *)(param_2 + 0x48) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x59);
  *(undefined8 *)(param_1 + 0x61) = *(undefined8 *)(param_2 + 0x61);
  *(undefined8 *)(param_1 + 0x59) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  return;
}



/* Entry: 10596b9f4; end: 10596ba53;  */

long * FUN_10596b9f4(long *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar4;
  
  if (param_2 < (long *)0x24924924924924a) {
    uVar1 = (param_1[2] - *param_1) / 0x70;
    plVar3 = (long *)(uVar1 * 2);
    if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
      plVar3 = param_2;
    }
    if (0x124924924924923 < uVar1) {
      plVar3 = (long *)0x249249249249249;
    }
    return plVar3;
  }
  FUN_1059675d4();
  func_0x00010596c000();
  plVar3 = param_1 + 2;
  lVar4 = param_2[1] + ((param_1[1] - *param_1) / -0x70) * 0x70;
  FUN_10596bb28(plVar3,*param_1,param_1[1],lVar4);
  unaff_x19[1] = lVar4;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 10596ba54; end: 10596badb;  */

void FUN_10596ba54(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010596c000();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x70) * 0x70;
  FUN_10596bb28(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10596badc; end: 10596bb27;  */

long * FUN_10596badc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_1059675e8();
  }
  lVar1 = param_4 + param_3 * 0x70;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x70;
  return param_1;
}



/* Entry: 10596bb28; end: 10596bbc7;  */

void FUN_10596bb28(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x00010596bfc8();
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x70) {
    FUN_10596b990(param_4,param_2);
    param_4 = lStack_38 + 0x70;
  }
  uStack_48 = 1;
  FUN_10596bbc8();
  FUN_10596763c(&uStack_60);
  return;
}



/* Entry: 10596bbc8; end: 10596bc23;  */

void FUN_10596bbc8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x70) {
    func_0x00010595cb7c();
  }
  return;
}



/* Entry: 10596bc24; end: 10596bc2b;  */

void FUN_10596bc24(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010596c000(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x70;
    func_0x00010595cb7c();
  }
  return;
}



/* Entry: 10596bc2c; end: 10596bcab;  */

void FUN_10596bc2c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010596c000();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x70;
    func_0x00010595cb7c();
  }
  return;
}



/* Entry: 10596bcac; end: 10596bcaf;  */

void FUN_10596bcac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c31c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596bcb0; end: 10596bcc3;  */

void FUN_10596bcb0(void)

{
  FUN_10596bcc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596bcc4; end: 10596bcd3;  */

void FUN_10596bcc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c31c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596bcd4; end: 10596bce7;  */

void FUN_10596bcd4(void)

{
  func_0x00010596bcf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596bce8; end: 10596bcff;  */

void FUN_10596bce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100904870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596bd00; end: 10596bd13;  */

void FUN_10596bd00(void)

{
  func_0x00010596bd1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596bd14; end: 10596bd2b;  */

void FUN_10596bd14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100904870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596bd2c; end: 10596bd3f;  */

void FUN_10596bd2c(void)

{
  func_0x00010596bd48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596bd40; end: 10596bd57;  */

void FUN_10596bd40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100904870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596bd58; end: 10596bd6b;  */

void FUN_10596bd58(void)

{
  func_0x00010596bd74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596bd6c; end: 10596bd83;  */

void FUN_10596bd6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100904870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596bd84; end: 10596bd97;  */

void FUN_10596bd84(void)

{
  func_0x00010596bda0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596bd98; end: 10596bdd3;  */

void FUN_10596bd98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100904870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596bdd4; end: 10596be3f;  */

undefined8 * FUN_10596bdd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [264];
  
  _bzero(auStack_140,0x110);
  FUN_10596be40(param_1 + 1,auStack_140);
  FUN_1059626f4(auStack_138);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x00010054cac4(uVar1);
  FUN_1059626f4(param_1 + 2);
  return param_1;
}



/* Entry: 10596be40; end: 10596be67;  */

undefined8 * FUN_10596be40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10596be68(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10596be68; end: 10596be8b;  */

undefined8 FUN_10596be68(undefined8 param_1)

{
  FUN_10596be8c();
  return param_1;
}



/* Entry: 10596be8c; end: 10596beb3;  */

void FUN_10596be8c(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x100);
  if (cVar1 != *(char *)(param_2 + 0x100)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x100) == '\x01') {
        func_0x0001059626bc();
        *(undefined1 *)(param_1 + 0x100) = 0;
      }
      return;
    }
    func_0x0001059625e0();
    *(undefined1 *)(param_1 + 0x100) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000105963f38();
    func_0x000105964028();
    func_0x000105963f00();
    func_0x0001002a8208();
    func_0x000105964264(unaff_x20 + 0x68,unaff_x19 + 0x68);
    func_0x0001002a8208(unaff_x20 + 0xc0,unaff_x19 + 0xc0);
    func_0x0001002a8208(unaff_x20 + 0xe0,unaff_x19 + 0xe0);
    return;
  }
  return;
}



/* Entry: 10596beb4; end: 10596bee7;  */

void FUN_10596beb4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010596c000();
  FUN_10596bee8(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 10596bee8; end: 10596bf5f;  */

void FUN_10596bee8(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_130 [256];
  
  func_0x00010596c000();
  cVar1 = *(char *)(param_1 + 0x100);
  if (cVar1 != *(char *)(param_2 + 0x100)) {
    if (cVar1 == '\0') {
      FUN_1059625c4();
    }
    else {
      FUN_1059625c4();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x100) == '\x01') {
      func_0x0001059626bc();
      *(undefined1 *)(unaff_x19 + 0x100) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010596c000();
    FUN_1059625e0(auStack_130,unaff_x20);
    func_0x000105962578(unaff_x20,unaff_x19);
    func_0x000105962578(unaff_x19,auStack_130);
    func_0x0001059626bc(auStack_130);
    return;
  }
  return;
}



/* Entry: 10596bf60; end: 10596bfb7;  */

void FUN_10596bf60(void)

{
  undefined1 auStack_130 [256];
  
  func_0x00010596c000();
  FUN_1059625e0(auStack_130);
  func_0x000105962578();
  func_0x000105962578();
  func_0x0001059626bc(auStack_130);
  return;
}



/* Entry: 10596bfb8; end: 10596c017;  */

void FUN_10596bfb8(void)

{
  return;
}



/* Entry: 10596c018; end: 10596c2af;  */

void FUN_10596c018(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  func_0x00010007847c(auStack_88,&UNK_10f3157c1);
  FUN_10596b28c(&puStack_a0,param_5);
  func_0x00010002b838(&puStack_e8,&UNK_10f3157f4);
  puStack_58 = (undefined8 *)lStack_98;
  puStack_60 = puStack_a0;
  if (lStack_98 != 0) {
    plVar8 = (long *)(lStack_98 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10596aacc(&puStack_d0,param_2 + 0x18,param_2 + 0x30,param_2 + 0x60,param_3,param_4,&puStack_e8
                ,&puStack_60,param_6);
  func_0x000100902b24(&puStack_60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_e8);
  puVar6 = (undefined8 *)0x30;
  __Znwm();
  uVar5 = uStack_a8;
  uVar4 = uStack_b0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_1108c3410;
  puVar9 = puVar6 + 3;
  *puVar9 = &PTR_DAT_1108c33b8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  puVar6[5] = uVar5;
  puVar6[4] = uVar4;
  puStack_e8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  func_0x0001009044a8(&puStack_e8);
  puVar7 = (undefined8 *)0x68;
  puStack_f8 = puVar9;
  puStack_f0 = puVar6;
  __Znwm();
  puStack_58 = puStack_c8;
  puStack_60 = puStack_d0;
  plVar8 = puVar7 + 1;
  *plVar8 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_1108c3460;
  puVar1 = puVar7 + 3;
  puStack_f8 = (undefined8 *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  puStack_d0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  puStack_e8 = puVar9;
  puStack_e0 = puVar6;
  func_0x000105967c38(puVar1,&puStack_e8,&puStack_60,&uStack_70);
  func_0x000100902b24(&uStack_70);
  func_0x000100450be4(&puStack_60);
  func_0x00010595d4a8(&puStack_e8);
  puVar6 = (undefined8 *)puVar7[5];
  if ((puVar6 == (undefined8 *)0x0) || (puVar6[1] == -1)) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar8 = puVar7 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = *plVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_e8 = (undefined8 *)puVar7[4];
    puVar7[4] = puVar1;
    puVar7[5] = puVar7;
    puStack_108 = puVar1;
    puStack_100 = puVar7;
    puStack_e0 = puVar6;
    puStack_60 = puVar1;
    puStack_58 = puVar7;
    func_0x000105968400(&puStack_e8);
    func_0x00010596838c(&puStack_60);
  }
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar7;
  puStack_108 = (undefined8 *)0x0;
  puStack_100 = (undefined8 *)0x0;
  func_0x00010596838c(&puStack_108);
  FUN_10596c3ec(&puStack_f8);
  FUN_10596c35c(&puStack_d0);
  FUN_10596b450(&puStack_a0);
  func_0x000100078bd8(auStack_88);
  return;
}



/* Entry: 10596c2b0; end: 10596c2b7;  */

void FUN_10596c2b0(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x0001009044a8(&uStack_20);
  return;
}



/* Entry: 10596c2b8; end: 10596c313;  */

void FUN_10596c2b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    uStack_30 = 0;
    uStack_28 = 0;
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,&uStack_30,param_3);
    func_0x00010595cc04(&uStack_30);
  }
  return;
}



/* Entry: 10596c314; end: 10596c347;  */

void FUN_10596c314(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010596c324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
    return;
  }
  return;
}



/* Entry: 10596c348; end: 10596c35b;  */

void FUN_10596c348(void)

{
  func_0x00010596c38c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596c35c; end: 10596c3bb;  */

undefined8 FUN_10596c35c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001009044a8(param_1 + 0x20);
  func_0x000100902b24(param_1 + 0x10);
  func_0x000100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10596c3bc; end: 10596c3bf;  */

void FUN_10596c3bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3410;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596c3c0; end: 10596c3d3;  */

void FUN_10596c3c0(void)

{
  func_0x00010596c3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596c3d4; end: 10596c3eb;  */

void FUN_10596c3d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010596c45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596c3ec; end: 10596c417;  */

long FUN_10596c3ec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10596c418; end: 10596c41b;  */

void FUN_10596c418(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3460;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596c41c; end: 10596c42f;  */

void FUN_10596c41c(void)

{
  func_0x00010596c438();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596c430; end: 10596c45f;  */

void FUN_10596c430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010596c45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596c460; end: 10596c5e3;  */

void FUN_10596c460(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  func_0x00010007847c(auStack_58,&UNK_10f315812);
  FUN_10596b23c(auStack_68,param_5);
  func_0x00010002b838(auStack_b0,&UNK_10f31584a);
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_10596aacc(auStack_98,param_2,param_2 + 0x18,param_2 + 0x48,param_3,param_4,auStack_b0,
                auStack_68,&uStack_c0);
  func_0x000100903fbc(&uStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  FUN_10596c5e4(auStack_b0,auStack_78);
  func_0x00010596c608(&uStack_c0,auStack_b0,auStack_98,auStack_88);
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  FUN_1059695dc(&uStack_c0);
  FUN_10596c878(auStack_b0);
  FUN_10596c35c(auStack_98);
  func_0x000100902b24(auStack_68);
  func_0x000100078bd8(auStack_58);
  return;
}



/* Entry: 10596c5e4; end: 10596c633;  */

void FUN_10596c5e4(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10596c6dc(&uStack_11,param_1);
  return;
}



/* Entry: 10596c634; end: 10596c69b;  */

void FUN_10596c634(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x0001009044a8(&uStack_20);
  return;
}


