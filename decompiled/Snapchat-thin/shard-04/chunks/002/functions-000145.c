/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031ef9c8; end: 1031ef9f7;  */

void FUN_1031ef9c8(undefined8 *param_1)

{
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
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



/* Entry: 1031ef9f8; end: 1031efb0f;  */

undefined1 FUN_1031ef9f8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_b0 [32];
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
  
  iVar1 = (int)auStack_b0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  lVar4 = *(long *)(param_2 + 0x30);
  func_0x000107c614bc(&uStack_70,&uStack_60,param_3);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(auStack_b0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(auStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_b0,&uStack_90,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_b0[0] = 2;
  }
  return auStack_b0[0];
}



/* Entry: 1031efb10; end: 1031efc3b;  */

undefined8 FUN_1031efb10(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_b0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  lVar5 = *(long *)(param_2 + 0x30);
  func_0x000107c614bc(&uStack_70,&uStack_60,param_3);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(auStack_b0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(auStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  FUN_1031efc40(0,0x112d7a520,&PTR_PTR_1126b2390);
  func_0x000107c6147c(auStack_b0,&uStack_90,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_b0[0] = 0;
  }
  return auStack_b0[0];
}



/* Entry: 1031efc3c; end: 1031efc3f;  */

void FUN_1031efc3c(void)

{
  return;
}



/* Entry: 1031efc40; end: 1031efc7f;  */

void FUN_1031efc40(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1031efc80; end: 1031efc8b;  */

undefined8 * FUN_1031efc80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c615f0(uVar2);
  return param_1;
}



/* Entry: 1031efc8c; end: 1031efd4f;  */

undefined1  [16] FUN_1031efc8c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x657469726f766166;
  func_0x000107c5fadc(0x657469726f766166,0xe800000000000000);
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f130d60);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031efd50);
  (*pcVar1)();
}



/* Entry: 1031efd50; end: 1031efd5f;  */

void FUN_1031efd50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031efd60; end: 1031efd7f;  */

void FUN_1031efd60(void)

{
  func_0x000107c61168(&PTR_PTR_112f4bb18);
  return;
}



/* Entry: 1031efd80; end: 1031efeef;  */

void FUN_1031efd80(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_1031efd60();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0x657469726f766166;
  func_0x000107c5fadc(0x657469726f766166,0xed00006e6f63692d);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam0000000113807100 = puVar3;
  return;
}



/* Entry: 1031efef0; end: 1031effd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031efef0(ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_78;
  ulong uStack_70;
  undefined1 uStack_68;
  
  func_0x000100083b20(&uStack_70);
  uVar1 = uStack_70;
  if ((uStack_70 & 0xfffffffffffffffc) == 4) {
    func_0x000100083b20(&uStack_70);
    uVar3 = *(undefined8 *)(uStack_70 + _DAT_112fc2060);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(uStack_70);
    func_0x0001000d224c(&uStack_78);
    func_0x000107c61574(uVar3);
    uVar2 = uStack_78;
    func_0x000107c5ad40(uStack_78,param_3,uVar1,uStack_68);
    func_0x000107c615e8();
    if ((int)uVar2 != 0) {
      param_1[3] = (ulong)&UNK_110622048;
      FUN_1031effe8();
      param_1[4] = uStack_78;
      *param_1 = uVar1;
      return;
    }
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1031effd8; end: 1031effe7;  */

undefined1  [16] FUN_1031effd8(void)

{
  return ZEXT816(0x110621f68);
}



/* Entry: 1031effe8; end: 1031f0027;  */

void FUN_1031effe8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bb78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9b870;
  func_0x000107c61520(&DAT_10db9b870,&UNK_110622048);
  puRam0000000112f4bb78 = puVar1;
  return;
}



/* Entry: 1031f0028; end: 1031f007b;  */

undefined8 FUN_1031f0028(void)

{
  undefined8 uVar1;
  
  if (lRam0000000112f4bc68 != -1) {
    func_0x000107c61568(0x112f4bc68,FUN_1031f06d0);
  }
  uVar1 = uRam0000000113807108;
  func_0x000107c61174(uRam0000000113807108);
  return uVar1;
}



/* Entry: 1031f007c; end: 1031f025b;  */

void FUN_1031f007c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_2e0;
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
  undefined8 uStack_23f;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
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
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_157;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
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
  undefined8 uStack_5f;
  
  uVar2 = 0;
  uVar3 = 0xe000000000000000;
  if (param_7 < 6) {
    if (param_7 != 4) {
      if (param_7 != 5) goto LAB_1031f00e8;
LAB_1031f00dc:
      func_0x0001031f05d4();
      uVar2 = param_2;
      uVar3 = param_3;
      goto LAB_1031f00e8;
    }
  }
  else {
    if (param_7 == 6) goto LAB_1031f00dc;
    if (param_7 != 7) goto LAB_1031f00e8;
  }
  func_0x0001031f0508();
  uVar2 = param_2;
  uVar3 = param_3;
LAB_1031f00e8:
  if (param_6 == 0) {
    func_0x0001031e60c4(&lStack_100);
  }
  else {
    lStack_2e0 = param_6;
    func_0x0001031e60f0(&lStack_2e0);
    uStack_1a8 = uStack_258;
    uStack_1b0 = uStack_260;
    uStack_1a0 = uStack_250;
    uStack_18f = (undefined7)uStack_23f;
    uStack_188 = (undefined1)((ulong)uStack_23f >> 0x38);
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_1b8 = uStack_268;
    uStack_1c0 = uStack_270;
    uStack_228 = uStack_2d8;
    lStack_230 = lStack_2e0;
    uStack_218 = uStack_2c8;
    uStack_220 = uStack_2d0;
    uStack_208 = uStack_2b8;
    uStack_210 = uStack_2c0;
    lStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    func_0x0001031e6100(&lStack_230);
    uStack_78 = uStack_1a8;
    uStack_80 = uStack_1b0;
    uStack_70 = uStack_1a0;
    uStack_5f = CONCAT17(uStack_188,uStack_18f);
    uStack_b8 = uStack_1e8;
    uStack_c0 = uStack_1f0;
    uStack_a8 = uStack_1d8;
    uStack_b0 = uStack_1e0;
    uStack_98 = uStack_1c8;
    uStack_a0 = uStack_1d0;
    uStack_88 = uStack_1b8;
    uStack_90 = uStack_1c0;
    uStack_f8 = uStack_228;
    lStack_100 = lStack_230;
    uStack_e8 = uStack_218;
    uStack_f0 = uStack_220;
    uStack_d8 = uStack_208;
    uStack_e0 = uStack_210;
    uStack_c8 = lStack_1f8;
    uStack_d0 = uStack_200;
  }
  uStack_180 = uStack_88;
  uStack_188 = (undefined1)uStack_90;
  uStack_187 = (undefined7)((ulong)uStack_90 >> 8);
  uStack_170 = uStack_78;
  uStack_178 = uStack_80;
  uStack_168 = uStack_70;
  uStack_157 = uStack_5f;
  uStack_1c0 = uStack_c8;
  uStack_1c8 = uStack_d0;
  uStack_1b0 = uStack_b8;
  uStack_1b8 = uStack_c0;
  uStack_1a0 = uStack_a8;
  uStack_1a8 = uStack_b0;
  uStack_190 = (undefined1)uStack_98;
  uStack_18f = (undefined7)((ulong)uStack_98 >> 8);
  uStack_198 = (undefined1)uStack_a0;
  uStack_197 = (undefined7)((ulong)uStack_a0 >> 8);
  uStack_1f0 = uStack_f8;
  lStack_1f8 = lStack_100;
  uStack_1e0 = uStack_e8;
  uStack_1e8 = uStack_f0;
  uStack_1d0 = uStack_d8;
  uStack_1d8 = uStack_e0;
  puVar1 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(param_6);
  func_0x000107c43d70();
  func_0x000107c61180();
  lStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0x746e6f43696e696d;
  uStack_218 = 0xeb00000000747865;
  uStack_200 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0x100;
  uStack_118 = 0;
  uStack_110 = 1;
  uStack_210 = uVar2;
  uStack_208 = uVar3;
  puStack_138 = puVar1;
  func_0x0001031e60ec(&lStack_230);
  func_0x000107c610b4(param_1,&lStack_230,0x128);
  return;
}



/* Entry: 1031f025c; end: 1031f0267;  */

void FUN_1031f025c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_2e0;
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
  undefined8 uStack_23f;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
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
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_157;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
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
  undefined8 uStack_5f;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = 0;
  uVar4 = 0xe000000000000000;
  if (lVar2 < 6) {
    if (lVar2 != 4) {
      if (lVar2 != 5) goto LAB_1031f00e8;
LAB_1031f00dc:
      func_0x0001031f05d4();
      uVar3 = param_2;
      uVar4 = param_3;
      goto LAB_1031f00e8;
    }
  }
  else {
    if (lVar2 == 6) goto LAB_1031f00dc;
    if (lVar2 != 7) goto LAB_1031f00e8;
  }
  func_0x0001031f0508();
  uVar3 = param_2;
  uVar4 = param_3;
LAB_1031f00e8:
  if (param_6 == 0) {
    func_0x0001031e60c4(&lStack_100);
  }
  else {
    lStack_2e0 = param_6;
    func_0x0001031e60f0(&lStack_2e0);
    uStack_1a8 = uStack_258;
    uStack_1b0 = uStack_260;
    uStack_1a0 = uStack_250;
    uStack_18f = (undefined7)uStack_23f;
    uStack_188 = (undefined1)((ulong)uStack_23f >> 0x38);
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_1b8 = uStack_268;
    uStack_1c0 = uStack_270;
    uStack_228 = uStack_2d8;
    lStack_230 = lStack_2e0;
    uStack_218 = uStack_2c8;
    uStack_220 = uStack_2d0;
    uStack_208 = uStack_2b8;
    uStack_210 = uStack_2c0;
    lStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    func_0x0001031e6100(&lStack_230);
    uStack_78 = uStack_1a8;
    uStack_80 = uStack_1b0;
    uStack_70 = uStack_1a0;
    uStack_5f = CONCAT17(uStack_188,uStack_18f);
    uStack_b8 = uStack_1e8;
    uStack_c0 = uStack_1f0;
    uStack_a8 = uStack_1d8;
    uStack_b0 = uStack_1e0;
    uStack_98 = uStack_1c8;
    uStack_a0 = uStack_1d0;
    uStack_88 = uStack_1b8;
    uStack_90 = uStack_1c0;
    uStack_f8 = uStack_228;
    lStack_100 = lStack_230;
    uStack_e8 = uStack_218;
    uStack_f0 = uStack_220;
    uStack_d8 = uStack_208;
    uStack_e0 = uStack_210;
    uStack_c8 = lStack_1f8;
    uStack_d0 = uStack_200;
  }
  uStack_180 = uStack_88;
  uStack_188 = (undefined1)uStack_90;
  uStack_187 = (undefined7)((ulong)uStack_90 >> 8);
  uStack_170 = uStack_78;
  uStack_178 = uStack_80;
  uStack_168 = uStack_70;
  uStack_157 = uStack_5f;
  uStack_1c0 = uStack_c8;
  uStack_1c8 = uStack_d0;
  uStack_1b0 = uStack_b8;
  uStack_1b8 = uStack_c0;
  uStack_1a0 = uStack_a8;
  uStack_1a8 = uStack_b0;
  uStack_190 = (undefined1)uStack_98;
  uStack_18f = (undefined7)((ulong)uStack_98 >> 8);
  uStack_198 = (undefined1)uStack_a0;
  uStack_197 = (undefined7)((ulong)uStack_a0 >> 8);
  uStack_1f0 = uStack_f8;
  lStack_1f8 = lStack_100;
  uStack_1e0 = uStack_e8;
  uStack_1e8 = uStack_f0;
  uStack_1d0 = uStack_d8;
  uStack_1d8 = uStack_e0;
  puVar1 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(param_6);
  func_0x000107c43d70();
  func_0x000107c61180();
  lStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0x746e6f43696e696d;
  uStack_218 = 0xeb00000000747865;
  uStack_200 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0x100;
  uStack_118 = 0;
  uStack_110 = 1;
  uStack_210 = uVar3;
  uStack_208 = uVar4;
  puStack_138 = puVar1;
  func_0x0001031e60ec(&lStack_230);
  func_0x000107c610b4(param_1,&lStack_230,0x128);
  return;
}



/* Entry: 1031f0268; end: 1031f038f;  */

undefined8 FUN_1031f0268(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  
  uVar8 = *unaff_x20;
  uVar1 = 1;
  func_0x00010061b458(param_1,1);
  puVar2 = (undefined8 *)0x112d755d0;
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  FUN_10326da44();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  pcVar4 = FUN_1031f0028;
  FUN_10326d7dc(FUN_1031f0028,0,uVar3);
  func_0x000107c61170(uVar3);
  pcVar5 = pcVar4;
  func_0x0001006c733c(pcVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(pcVar4);
  puVar6 = &UNK_110622090;
  func_0x000107c613fc(&UNK_110622090,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar8;
  puVar7 = &UNK_1106220b8;
  func_0x000107c613fc(&UNK_1106220b8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1031f0500;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uVar1 = 0x112f4b548;
  func_0x0001000285a8(0x112f4b548,&UNK_10db9ab40);
  uVar3 = 0x1031f0504;
  func_0x0001000bfde0(0x1031f0504,puVar7,uVar1);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar7);
  return uVar3;
}



/* Entry: 1031f0390; end: 1031f03b3;  */

void FUN_1031f0390(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031f03b4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031f03b4; end: 1031f03f3;  */

void FUN_1031f03b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bb80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9b898;
  func_0x000107c61520(&DAT_10db9b898,&UNK_110622048);
  puRam0000000112f4bb80 = puVar1;
  return;
}



/* Entry: 1031f03f4; end: 1031f040f;  */

void FUN_1031f03f4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4b558 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b560;
  func_0x00010002969c(0x112f4b560,&UNK_10db9b890);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4b558 = puVar2;
  return;
}



/* Entry: 1031f0410; end: 1031f0447;  */

undefined * FUN_1031f0410(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_1031effe8();
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



/* Entry: 1031f0448; end: 1031f0457;  */

undefined1  [16] FUN_1031f0448(void)

{
  return ZEXT816(0x110622048);
}



/* Entry: 1031f0458; end: 1031f04a7;  */

void FUN_1031f0458(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f4bbc8 != 0) {
    return;
  }
  puVar1 = &UNK_110622070;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112f4bbc8 = param_1;
  return;
}



/* Entry: 1031f04a8; end: 1031f04ff;  */

void FUN_1031f04a8(undefined8 param_1,undefined1 *param_2)

{
  long unaff_x20;
  undefined1 auStack_158 [296];
  
  (**(code **)(unaff_x20 + 0x10))
            (auStack_158,*param_2,*(undefined8 *)(param_2 + 8),param_2[0x10],
             *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  func_0x000107c610b4(param_1,auStack_158,0x128);
  return;
}



/* Entry: 1031f0500; end: 1031f0507;  */

void FUN_1031f0500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_2e0;
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
  undefined8 uStack_23f;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
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
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_157;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
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
  undefined8 uStack_5f;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = 0;
  uVar4 = 0xe000000000000000;
  if (lVar2 < 6) {
    if (lVar2 != 4) {
      if (lVar2 != 5) goto LAB_1031f00e8;
LAB_1031f00dc:
      func_0x0001031f05d4();
      uVar3 = param_2;
      uVar4 = param_3;
      goto LAB_1031f00e8;
    }
  }
  else {
    if (lVar2 == 6) goto LAB_1031f00dc;
    if (lVar2 != 7) goto LAB_1031f00e8;
  }
  func_0x0001031f0508();
  uVar3 = param_2;
  uVar4 = param_3;
LAB_1031f00e8:
  if (param_6 == 0) {
    func_0x0001031e60c4(&lStack_100);
  }
  else {
    lStack_2e0 = param_6;
    func_0x0001031e60f0(&lStack_2e0);
    uStack_1a8 = uStack_258;
    uStack_1b0 = uStack_260;
    uStack_1a0 = uStack_250;
    uStack_18f = (undefined7)uStack_23f;
    uStack_188 = (undefined1)((ulong)uStack_23f >> 0x38);
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_1b8 = uStack_268;
    uStack_1c0 = uStack_270;
    uStack_228 = uStack_2d8;
    lStack_230 = lStack_2e0;
    uStack_218 = uStack_2c8;
    uStack_220 = uStack_2d0;
    uStack_208 = uStack_2b8;
    uStack_210 = uStack_2c0;
    lStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    func_0x0001031e6100(&lStack_230);
    uStack_78 = uStack_1a8;
    uStack_80 = uStack_1b0;
    uStack_70 = uStack_1a0;
    uStack_5f = CONCAT17(uStack_188,uStack_18f);
    uStack_b8 = uStack_1e8;
    uStack_c0 = uStack_1f0;
    uStack_a8 = uStack_1d8;
    uStack_b0 = uStack_1e0;
    uStack_98 = uStack_1c8;
    uStack_a0 = uStack_1d0;
    uStack_88 = uStack_1b8;
    uStack_90 = uStack_1c0;
    uStack_f8 = uStack_228;
    lStack_100 = lStack_230;
    uStack_e8 = uStack_218;
    uStack_f0 = uStack_220;
    uStack_d8 = uStack_208;
    uStack_e0 = uStack_210;
    uStack_c8 = lStack_1f8;
    uStack_d0 = uStack_200;
  }
  uStack_180 = uStack_88;
  uStack_188 = (undefined1)uStack_90;
  uStack_187 = (undefined7)((ulong)uStack_90 >> 8);
  uStack_170 = uStack_78;
  uStack_178 = uStack_80;
  uStack_168 = uStack_70;
  uStack_157 = uStack_5f;
  uStack_1c0 = uStack_c8;
  uStack_1c8 = uStack_d0;
  uStack_1b0 = uStack_b8;
  uStack_1b8 = uStack_c0;
  uStack_1a0 = uStack_a8;
  uStack_1a8 = uStack_b0;
  uStack_190 = (undefined1)uStack_98;
  uStack_18f = (undefined7)((ulong)uStack_98 >> 8);
  uStack_198 = (undefined1)uStack_a0;
  uStack_197 = (undefined7)((ulong)uStack_a0 >> 8);
  uStack_1f0 = uStack_f8;
  lStack_1f8 = lStack_100;
  uStack_1e0 = uStack_e8;
  uStack_1e8 = uStack_f0;
  uStack_1d0 = uStack_d8;
  uStack_1d8 = uStack_e0;
  puVar1 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(param_6);
  func_0x000107c43d70();
  func_0x000107c61180();
  lStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0x746e6f43696e696d;
  uStack_218 = 0xeb00000000747865;
  uStack_200 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0x100;
  uStack_118 = 0;
  uStack_110 = 1;
  uStack_210 = uVar3;
  uStack_208 = uVar4;
  puStack_138 = puVar1;
  func_0x0001031e60ec(&lStack_230);
  func_0x000107c610b4(param_1,&lStack_230,0x128);
  return;
}



/* Entry: 1031f0508; end: 1031f069f;  */

undefined1  [16] FUN_1031f0508(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f130d90);
  uVar3 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f130db0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f05d4);
  (*pcVar1)();
}



/* Entry: 1031f06a0; end: 1031f06af;  */

void FUN_1031f06a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031f06b0; end: 1031f06cf;  */

void FUN_1031f06b0(void)

{
  func_0x000107c61168(&PTR_PTR_112f4bc10);
  return;
}



/* Entry: 1031f06d0; end: 1031f07b7;  */

void FUN_1031f06d0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_1031f06b0();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f130e00);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam0000000113807108 = puVar3;
  return;
}



/* Entry: 1031f07b8; end: 1031f0867;  */

void FUN_1031f07b8(undefined8 param_1)

{
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1031f0804,param_1);
  return;
}



/* Entry: 1031f0868; end: 1031f0877;  */

undefined1  [16] FUN_1031f0868(void)

{
  return ZEXT816(0x110622198);
}



/* Entry: 1031f0878; end: 1031f08b7;  */

void FUN_1031f0878(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bc70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9b9e0;
  func_0x000107c61520(&DAT_10db9b9e0,&UNK_110622278);
  puRam0000000112f4bc70 = puVar1;
  return;
}



/* Entry: 1031f08b8; end: 1031f094b;  */

undefined8 FUN_1031f08b8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000112f4bd58 != -1) {
    func_0x000107c61568(0x112f4bd58,FUN_1031f0d84);
  }
  uVar1 = uRam0000000113807110;
  func_0x000107c61174(uRam0000000113807110);
  return uVar1;
}



/* Entry: 1031f094c; end: 1031f0a1b;  */

undefined8 FUN_1031f094c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  
  uVar1 = 1;
  func_0x00010061b458(1);
  puVar2 = (undefined8 *)0x112d755d0;
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  FUN_10326da44();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  pcVar4 = FUN_1031f08b8;
  FUN_10326d7dc(FUN_1031f08b8,0,uVar3);
  func_0x000107c61170(uVar3);
  pcVar5 = pcVar4;
  func_0x0001006c733c(pcVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(pcVar4);
  uVar1 = 0x112f4b548;
  func_0x0001000285a8(0x112f4b548,&UNK_10db9ab40);
  uVar3 = 0x1031f090c;
  func_0x0001000bfde0(0x1031f090c,0,uVar1);
  func_0x000107c61574(pcVar5);
  return uVar3;
}



/* Entry: 1031f0a1c; end: 1031f0a3f;  */

void FUN_1031f0a1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1031f0a40();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1031f0a40; end: 1031f0a7f;  */

void FUN_1031f0a40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bc78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9ba08;
  func_0x000107c61520(&DAT_10db9ba08,&UNK_110622278);
  puRam0000000112f4bc78 = puVar1;
  return;
}



/* Entry: 1031f0a80; end: 1031f0a9b;  */

void FUN_1031f0a80(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4b558 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4b560;
  func_0x00010002969c(0x112f4b560,&UNK_10db9b890);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4b558 = puVar2;
  return;
}



/* Entry: 1031f0a9c; end: 1031f0ad3;  */

undefined * FUN_1031f0a9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  FUN_1031f0878();
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



/* Entry: 1031f0ad4; end: 1031f0ae3;  */

undefined1  [16] FUN_1031f0ad4(void)

{
  return ZEXT816(0x110622278);
}



/* Entry: 1031f0ae4; end: 1031f0c87;  */

void FUN_1031f0ae4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lStack_2e0;
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
  undefined8 uStack_23f;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
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
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_157;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
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
  undefined8 uStack_5f;
  
  lVar1 = param_2;
  FUN_1031f0c88();
  if (param_2 == 0) {
    func_0x0001031e60c4(&lStack_100);
  }
  else {
    lStack_2e0 = param_2;
    func_0x0001031e60f0(&lStack_2e0);
    uStack_1a8 = uStack_258;
    uStack_1b0 = uStack_260;
    uStack_1a0 = uStack_250;
    uStack_18f = (undefined7)uStack_23f;
    uStack_188 = (undefined1)((ulong)uStack_23f >> 0x38);
    uStack_1e8 = uStack_298;
    uStack_1f0 = uStack_2a0;
    uStack_1d8 = uStack_288;
    uStack_1e0 = uStack_290;
    uStack_1c8 = uStack_278;
    uStack_1d0 = uStack_280;
    uStack_1b8 = uStack_268;
    uStack_1c0 = uStack_270;
    uStack_228 = uStack_2d8;
    lStack_230 = lStack_2e0;
    uStack_218 = uStack_2c8;
    uStack_220 = uStack_2d0;
    uStack_208 = uStack_2b8;
    lStack_210 = uStack_2c0;
    lStack_1f8 = uStack_2a8;
    uStack_200 = uStack_2b0;
    func_0x0001031e6100(&lStack_230);
    uStack_78 = uStack_1a8;
    uStack_80 = uStack_1b0;
    uStack_70 = uStack_1a0;
    uStack_5f = CONCAT17(uStack_188,uStack_18f);
    uStack_b8 = uStack_1e8;
    uStack_c0 = uStack_1f0;
    uStack_a8 = uStack_1d8;
    uStack_b0 = uStack_1e0;
    uStack_98 = uStack_1c8;
    uStack_a0 = uStack_1d0;
    uStack_88 = uStack_1b8;
    uStack_90 = uStack_1c0;
    uStack_f8 = uStack_228;
    lStack_100 = lStack_230;
    uStack_e8 = uStack_218;
    uStack_f0 = uStack_220;
    uStack_d8 = uStack_208;
    uStack_e0 = lStack_210;
    uStack_c8 = lStack_1f8;
    uStack_d0 = uStack_200;
  }
  uStack_180 = uStack_88;
  uStack_188 = (undefined1)uStack_90;
  uStack_187 = (undefined7)((ulong)uStack_90 >> 8);
  uStack_170 = uStack_78;
  uStack_178 = uStack_80;
  uStack_168 = uStack_70;
  uStack_157 = uStack_5f;
  uStack_1c0 = uStack_c8;
  uStack_1c8 = uStack_d0;
  uStack_1b0 = uStack_b8;
  uStack_1b8 = uStack_c0;
  uStack_1a0 = uStack_a8;
  uStack_1a8 = uStack_b0;
  uStack_190 = (undefined1)uStack_98;
  uStack_18f = (undefined7)((ulong)uStack_98 >> 8);
  uStack_198 = (undefined1)uStack_a0;
  uStack_197 = (undefined7)((ulong)uStack_a0 >> 8);
  uStack_1f0 = uStack_f8;
  lStack_1f8 = lStack_100;
  uStack_1e0 = uStack_e8;
  uStack_1e8 = uStack_f0;
  uStack_1d0 = uStack_d8;
  uStack_1d8 = uStack_e0;
  puVar2 = PTR_PTR_1126b5b00;
  func_0x000107c61168();
  func_0x000107c61174(param_2);
  func_0x000107c43d70();
  func_0x000107c61180();
  lStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0x746e6f43696e696d;
  uStack_218 = 0xeb00000000747865;
  uStack_200 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0x100;
  uStack_118 = 0;
  uStack_110 = 1;
  lStack_210 = lVar1;
  uStack_208 = param_3;
  puStack_138 = puVar2;
  func_0x0001031e60ec(&lStack_230);
  func_0x000107c610b4(param_1,&lStack_230,0x128);
  return;
}



/* Entry: 1031f0c88; end: 1031f0d53;  */

undefined1  [16] FUN_1031f0c88(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f130e30);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f130e50);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f0d54);
  (*pcVar1)();
}



/* Entry: 1031f0d54; end: 1031f0d63;  */

void FUN_1031f0d54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031f0d64; end: 1031f0d83;  */

void FUN_1031f0d64(void)

{
  func_0x000107c61168(&PTR_PTR_112f4bd00);
  return;
}



/* Entry: 1031f0d84; end: 1031f0e6b;  */

void FUN_1031f0d84(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_1031f0d64();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f130e80);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam0000000113807110 = puVar3;
  return;
}



/* Entry: 1031f0e6c; end: 1031f0f03;  */

void FUN_1031f0e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4b508,&UNK_10db9aab0);
  puVar1 = &UNK_110622358;
  func_0x000107c613fc(&UNK_110622358,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1031f0f04,puVar1);
  return;
}



/* Entry: 1031f0f04; end: 1031f1047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031f0f04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c4f598();
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  func_0x000100083b20(&lStack_60);
  uVar2 = *(undefined8 *)(lStack_60 + _DAT_113091ad8);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_60);
  uVar3 = uVar2;
  func_0x000107c5d984(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c5faec(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000107c4b27c(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  uVar4 = 0;
  FUN_1031f32e8();
  func_0x000107c613fc();
  FUN_1031f1240(uVar1,uVar2,param_3,uVar3);
  param_1[3] = uVar4;
  uVar3 = uVar1;
  FUN_1031f1058();
  param_1[4] = uVar3;
  *param_1 = uVar1;
  return;
}



/* Entry: 1031f1048; end: 1031f1057;  */

undefined1  [16] FUN_1031f1048(void)

{
  return ZEXT816(0x110622380);
}



/* Entry: 1031f1058; end: 1031f109b;  */

void FUN_1031f1058(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4bd60 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1031f32e8(0xff);
  puVar2 = &DAT_10db9bb48;
  func_0x000107c61520(&DAT_10db9bb48,uVar1);
  puRam0000000112f4bd60 = puVar2;
  return;
}



/* Entry: 1031f109c; end: 1031f10cb;  */

void FUN_1031f109c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcab38;
  func_0x000107c5faec();
  *param_1 = ppuVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 1031f10cc; end: 1031f114f;  */

long FUN_1031f10cc(void)

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
  uVar4 = 0x112f4b538;
  func_0x0001000285a8(0x112f4b538,&UNK_10db9ab30);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 1031f1150; end: 1031f11cf;  */

uint FUN_1031f1150(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uStack_b0;
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
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = *(undefined1 *)(param_1 + 0xe);
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
  uStack_30 = *(undefined1 *)(param_2 + 0xe);
  FUN_1031f389c(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1031f11d0; end: 1031f123f;  */

long FUN_1031f11d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  return unaff_x20;
}



/* Entry: 1031f1240; end: 1031f1273;  */

void FUN_1031f1240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  return;
}



/* Entry: 1031f1274; end: 1031f1577;  */

code * FUN_1031f1274(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  
  puVar5 = &UNK_110622448;
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_110622448,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uVar2 = 0x112f4bd68;
  func_0x0001000285a8(0x112f4bd68,&UNK_10db9bb20);
  pcVar3 = FUN_1031f1578;
  func_0x00010068b194(FUN_1031f1578,puVar1,uVar2);
  func_0x000107c61574(puVar1);
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_110622448,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uVar2 = 0x112f4bd70;
  func_0x0001000285a8(0x112f4bd70,&UNK_10db9bb28);
  pcVar4 = FUN_1031f1640;
  func_0x0001000bfde0(FUN_1031f1640,puVar1,uVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar1);
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_110622448,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcVar3 = FUN_1031f1eb8;
  func_0x00010068b194(FUN_1031f1eb8,puVar1,uVar2);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar1);
  FUN_1031f1ec0();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar3);
  func_0x000107c613fc(&UNK_110622448,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  uVar2 = 0x112f4bd88;
  func_0x0001000285a8(0x112f4bd88,&UNK_10db9bb30);
  pcVar3 = FUN_1031f27e0;
  func_0x0001000bfde0(FUN_1031f27e0,puVar5,uVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar5);
  return pcVar3;
}



/* Entry: 1031f1578; end: 1031f157f;  */

void FUN_1031f1578(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  uVar4 = *param_1;
  lVar1 = param_1[1];
  uVar5 = param_1[2];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112f4bec0,&UNK_10db9bc90);
    uStack_60 = 0;
    func_0x000100854cb0(&uStack_60);
  }
  else {
    puVar3 = &UNK_10db9bc98;
    func_0x000107c614e0(&UNK_10db9bc98);
    if (lVar1 == 0) {
      func_0x000107c61574();
      uVar4 = 0;
    }
    else {
      func_0x000107c61434(lVar1);
      FUN_1031f3b34(uVar4,lVar1,uVar5,puVar3);
      func_0x000107c61574(puVar3);
      func_0x000107c6142c(lVar1);
    }
    puVar3 = &UNK_110622728;
    func_0x000107c613fc(&UNK_110622728,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar4;
    func_0x0001000285a8(0x112f4bec8,&UNK_10db9bcb8);
    func_0x000107c613fc();
    func_0x000107c61174(uVar4);
    func_0x0001000b64ac(0x1031f3dc8,puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1031f1580; end: 1031f163f;  */

void FUN_1031f1580(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_c0 [24];
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
  undefined1 uStack_38;
  
  uVar1 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_c0,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    FUN_1031f1648(&uStack_a8,uVar1);
    func_0x000107c61574(param_3);
    param_1[9] = uStack_60;
    param_1[8] = uStack_68;
    param_1[0xb] = uStack_50;
    param_1[10] = uStack_58;
    param_1[0xd] = uStack_40;
    param_1[0xc] = uStack_48;
    *(undefined1 *)(param_1 + 0xe) = uStack_38;
    param_1[1] = uStack_a0;
    *param_1 = uStack_a8;
    param_1[3] = uStack_90;
    param_1[2] = uStack_98;
    param_1[5] = uStack_80;
    param_1[4] = uStack_88;
    param_1[7] = uStack_70;
    param_1[6] = uStack_78;
  }
  return;
}



/* Entry: 1031f1640; end: 1031f1647;  */

void FUN_1031f1640(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_c0 [24];
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
  undefined1 uStack_38;
  
  uVar2 = *param_2;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_c0,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    FUN_1031f1648(&uStack_a8,uVar2);
    func_0x000107c61574(lVar1);
    param_1[9] = uStack_60;
    param_1[8] = uStack_68;
    param_1[0xb] = uStack_50;
    param_1[10] = uStack_58;
    param_1[0xd] = uStack_40;
    param_1[0xc] = uStack_48;
    *(undefined1 *)(param_1 + 0xe) = uStack_38;
    param_1[1] = uStack_a0;
    *param_1 = uStack_a8;
    param_1[3] = uStack_90;
    param_1[2] = uStack_98;
    param_1[5] = uStack_80;
    param_1[4] = uStack_88;
    param_1[7] = uStack_70;
    param_1[6] = uStack_78;
  }
  return;
}



/* Entry: 1031f1648; end: 1031f1deb;  */

void FUN_1031f1648(undefined8 *param_1,undefined8 ****param_2,undefined8 ****param_3,
                  undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  uint uVar9;
  uint uVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  long unaff_x20;
  undefined8 ****ppppuVar15;
  int iVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 uVar22;
  undefined8 ***pppuStack_68;
  
  if (param_2 == (undefined8 ****)0x0) {
LAB_1031f1840:
    ppppuVar19 = (undefined8 ****)0x0;
LAB_1031f185c:
    ppppuVar18 = (undefined8 ****)0x0;
    ppppuVar20 = ppppuVar19;
  }
  else {
    ppppuVar3 = param_2;
    func_0x000107c40414();
    func_0x000107c61180();
    if (ppppuVar3 == (undefined8 ****)0x0) goto LAB_1031f1840;
    ppppuVar4 = ppppuVar3;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c61170(ppppuVar3);
    if (ppppuVar4 != (undefined8 ****)0x0) {
      ppppuVar3 = ppppuVar4;
      func_0x000107c5faec();
      func_0x000107c61170(ppppuVar4);
      ppppuVar4 = param_2;
      func_0x000107c40568();
      func_0x000107c61180();
      if (ppppuVar4 == (undefined8 ****)0x0) {
        func_0x000107c6142c(param_3);
        ppppuVar20 = (undefined8 ****)0x0;
        ppppuVar18 = ppppuVar4;
        goto LAB_1031f1864;
      }
      ppppuVar5 = (undefined8 ****)PTR_PTR_1126b5c10;
      func_0x000107c61168();
      ppppuVar19 = ppppuVar4;
      func_0x000107c6148c();
      if (ppppuVar19 != (undefined8 ****)0x0) {
        ppppuVar6 = ppppuVar19;
        func_0x000107c44924();
        if ((int)ppppuVar6 == 0) {
          func_0x000107c615e8(ppppuVar4);
LAB_1031f183c:
          func_0x000107c6142c(param_3);
          goto LAB_1031f1840;
        }
        ppppuVar6 = ppppuVar19;
        func_0x000107c4afb0();
        func_0x000107c61180();
        if (ppppuVar6 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031f1dd0);
          (*pcVar2)();
        }
        ppppuVar7 = ppppuVar6;
        func_0x000107c4f490();
        func_0x000107c61180();
        func_0x000107c61170(ppppuVar6);
        if (ppppuVar7 == (undefined8 ****)0x0) {
          func_0x000107c615e8(ppppuVar4);
LAB_1031f18f4:
          func_0x000107c6142c(param_3);
          goto LAB_1031f18f8;
        }
        ppppuVar6 = ppppuVar7;
        func_0x000107c5faec();
        ppppuVar14 = ppppuVar5;
        func_0x000107c61170(ppppuVar7);
        uVar1 = (ulong)ppppuVar6 & 0xffffffffffff;
        if (((ulong)ppppuVar5 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)ppppuVar5 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          func_0x000107c615e8(ppppuVar4);
          func_0x000107c6142c(param_3);
          param_3 = ppppuVar5;
          goto LAB_1031f183c;
        }
        ppppuVar7 = ppppuVar19;
        func_0x000107c4afb0();
        func_0x000107c61180();
        if (ppppuVar7 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031f1dd4);
          (*pcVar2)();
        }
        ppppuVar20 = ppppuVar7;
        func_0x000107c427d4();
        func_0x000107c61180();
        func_0x000107c61170(ppppuVar7);
        if (ppppuVar20 == (undefined8 ****)0x0) {
          func_0x000107c6142c(param_3);
          func_0x000107c615e8(ppppuVar4);
          param_3 = ppppuVar5;
          goto LAB_1031f18f4;
        }
        ppppuVar13 = ppppuVar20;
        func_0x000107c5ee30();
        ppppuVar7 = ppppuVar14;
        func_0x000107c61170(ppppuVar20);
        uVar9 = (uint)((ulong)ppppuVar14 >> 0x20);
        uVar10 = uVar9 >> 0x1e;
        if (1 < uVar9 >> 0x1e) {
          if (uVar10 == 2) {
            pppuVar11 = ppppuVar13[2];
            pppuVar12 = ppppuVar13[3];
            goto LAB_1031f193c;
          }
LAB_1031f1944:
          func_0x000107c615e8(ppppuVar4);
          func_0x000107c6142c(param_3);
          func_0x00010006c090(ppppuVar13,ppppuVar14);
          param_3 = ppppuVar5;
          goto LAB_1031f183c;
        }
        if (uVar10 == 0) {
          if (((ulong)ppppuVar14 & 0xff000000000000) == 0) goto LAB_1031f1944;
        }
        else {
          pppuVar11 = (undefined8 ***)(long)(int)ppppuVar13;
          pppuVar12 = (undefined8 ***)((long)ppppuVar13 >> 0x20);
LAB_1031f193c:
          if (pppuVar11 == pppuVar12) goto LAB_1031f1944;
        }
        ppppuVar20 = ppppuVar19;
        func_0x000107c4afb0();
        func_0x000107c61180();
        if (ppppuVar20 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031f1dd8);
          (*pcVar2)();
        }
        ppppuVar17 = ppppuVar20;
        func_0x000107c4f710();
        func_0x000107c61170(ppppuVar20);
        ppppuVar20 = ppppuVar19;
        func_0x000107c5c730();
        func_0x000107c61180();
        if (ppppuVar20 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031f1ddc);
          (*pcVar2)();
        }
        ppppuVar15 = ppppuVar20;
        func_0x000107c4246c();
        func_0x000107c61180();
        func_0x000107c61170(ppppuVar20);
        ppppuVar20 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
        if (ppppuVar15 != (undefined8 ****)0x0) {
          pppuStack_68 = (undefined8 ****)0x0;
          param_4 = 0;
          FUN_1031f3dd0(0,0x112d5b150,&PTR_PTR_1126d2bc8);
          ppppuVar7 = &pppuStack_68;
          func_0x000107c5fc50(ppppuVar15);
          func_0x000107c61170(ppppuVar15);
          if ((undefined8 ****)pppuStack_68 != (undefined8 ****)0x0) {
            ppppuVar20 = (undefined8 ****)pppuStack_68;
          }
        }
        uVar9 = (uint)param_4;
        iVar16 = (int)ppppuVar17;
        if (iVar16 != 3) {
          ppppuVar17 = (undefined8 ****)((ulong)ppppuVar20 & 0xffffffffffffff8);
          if ((ulong)ppppuVar20 >> 0x3e == 0) {
            ppppuVar15 = (undefined8 ****)ppppuVar17[2];
          }
          else {
            ppppuVar15 = ppppuVar17;
            if ((undefined8 ****)0x7fffffffffffffff < ppppuVar20) {
              ppppuVar15 = ppppuVar20;
            }
            func_0x000107c60480();
          }
          ppppuVar21 = (undefined8 ****)0x0;
          do {
            uVar9 = (uint)param_4;
            if (ppppuVar15 == ppppuVar21) goto LAB_1031f1a18;
            if (((ulong)ppppuVar20 & 0xc000000000000001) == 0) {
              if (ppppuVar17[2] <= ppppuVar21) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1031f1db8);
                (*pcVar2)();
              }
              ppppuVar18 = (undefined8 ****)ppppuVar20[(long)((long)ppppuVar21 + 4)];
              func_0x000107c61174();
            }
            else {
              ppppuVar18 = ppppuVar21;
              ppppuVar7 = ppppuVar20;
              func_0x0001010c3f28();
            }
            if (SCARRY8((long)ppppuVar21,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1031f1b54);
              (*pcVar2)();
            }
            ppppuVar8 = ppppuVar18;
            func_0x000107c5d0f0();
            func_0x000107c61170(ppppuVar18);
            ppppuVar21 = (undefined8 ****)((long)ppppuVar21 + 1);
          } while ((int)ppppuVar8 != 8);
          func_0x000107c6142c(param_3);
          func_0x000107c6142c(ppppuVar5);
          func_0x000107c6142c(ppppuVar20);
          func_0x00010006c090(ppppuVar13,ppppuVar14);
          func_0x000107c615e8(ppppuVar4);
          goto LAB_1031f1840;
        }
LAB_1031f1a18:
        func_0x000107c6142c(ppppuVar20);
        ppppuVar20 = ppppuVar19;
        func_0x000107c4afb0();
        func_0x000107c61180();
        if (ppppuVar20 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031f1de0);
          (*pcVar2)();
        }
        ppppuVar17 = ppppuVar20;
        func_0x000107c44a5c();
        func_0x000107c61170(ppppuVar20);
        if ((int)ppppuVar17 == 0) {
          ppppuVar20 = (undefined8 ****)0x0;
LAB_1031f1b58:
          ppppuVar17 = (undefined8 ****)0x0;
          ppppuVar15 = (undefined8 ****)0x0;
        }
        else {
          ppppuVar17 = ppppuVar19;
          func_0x000107c4afb0();
          func_0x000107c61180();
          if (ppppuVar17 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1031f1de8);
            (*pcVar2)();
          }
          ppppuVar20 = ppppuVar17;
          func_0x000107c4f480();
          func_0x000107c61180();
          func_0x000107c61170(ppppuVar17);
          if (ppppuVar20 == (undefined8 ****)0x0) goto LAB_1031f1b58;
          ppppuVar7 = ppppuVar20;
          func_0x000107c61174();
          ppppuVar17 = ppppuVar7;
          func_0x000107c44e64();
          ppppuVar21 = ppppuVar7;
          func_0x000107c4c0fc();
          func_0x000107c61170(ppppuVar7);
          func_0x000103ee3894();
          ppppuVar15 = ppppuVar21;
          func_0x000107c5fb1c();
          ppppuVar7 = ppppuVar15;
          func_0x000107c6142c(ppppuVar21);
        }
        ppppuVar21 = ppppuVar19;
        func_0x000107c4afb0();
        func_0x000107c61180();
        if (ppppuVar21 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031f1de4);
          (*pcVar2)();
        }
        ppppuVar18 = ppppuVar21;
        func_0x000107c44a68();
        func_0x000107c61170(ppppuVar21);
        if ((int)ppppuVar18 == 0) {
LAB_1031f1c10:
          ppppuVar18 = *(undefined8 *****)(unaff_x20 + 0x18);
          ppppuVar19 = *(undefined8 *****)(unaff_x20 + 0x20);
          if (ppppuVar15 == (undefined8 ****)0x0) {
LAB_1031f1cc0:
            func_0x000107c61434(ppppuVar19);
          }
          else {
            if ((ppppuVar17 != ppppuVar18) || (ppppuVar15 != ppppuVar19)) {
              ppppuVar21 = ppppuVar17;
              ppppuVar7 = ppppuVar15;
              ppppuVar8 = ppppuVar18;
              func_0x000107c605b8();
              uVar9 = (uint)ppppuVar8;
              if (((ulong)ppppuVar21 & 1) == 0) goto LAB_1031f1cc0;
            }
            func_0x000107c61434(ppppuVar19);
            ppppuVar21 = param_2;
            func_0x000107c5d8c4();
            func_0x000107c61180();
            if (ppppuVar21 != (undefined8 ****)0x0) {
              ppppuVar8 = ppppuVar21;
              func_0x000107c44fdc();
              func_0x000107c61180();
              func_0x000107c61170();
              if (ppppuVar8 != (undefined8 ****)0x0) {
                func_0x000103210078();
                func_0x000107c61170(ppppuVar8);
                if (ppppuVar7 != (undefined8 ****)0x0) {
                  uVar1 = (ulong)ppppuVar21 & 0xffffffffffff;
                  if (((ulong)ppppuVar7 & 0x2000000000000000) != 0) {
                    uVar1 = (ulong)ppppuVar7 >> 0x38 & 0xf;
                  }
                  if (uVar1 == 0) {
                    func_0x000107c6142c(ppppuVar7);
                  }
                  else {
                    func_0x000107c6142c(ppppuVar19);
                    ppppuVar19 = ppppuVar7;
                    ppppuVar18 = ppppuVar21;
                  }
                }
              }
            }
          }
          uVar1 = (ulong)ppppuVar18 & 0xffffffffffff;
          if (((ulong)ppppuVar19 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)ppppuVar19 >> 0x38 & 0xf;
          }
          if (uVar1 == 0) {
            func_0x000107c6142c(ppppuVar19);
            ppppuVar18 = (undefined8 ****)0x0;
            ppppuVar19 = (undefined8 ****)0x0;
            ppppuVar21 = (undefined8 ****)0x0;
          }
          else {
            ppppuVar21 = (undefined8 ****)PTR_PTR_1126afad0;
            func_0x000107c610f8();
            func_0x000107c453e4();
            func_0x000103ee34e0(ppppuVar18,ppppuVar19);
            if (((uVar9 & 0xff) != 1) && (ppppuVar21 != (undefined8 ****)0x0)) {
              func_0x000107c55138(ppppuVar21);
              func_0x000107c5616c(ppppuVar21);
            }
          }
        }
        else {
          func_0x000107c4afb0();
          func_0x000107c61180();
          if (ppppuVar19 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1031f1dec);
            (*pcVar2)();
          }
          ppppuVar21 = ppppuVar19;
          func_0x000107c4f4c0();
          func_0x000107c61180();
          func_0x000107c61170(ppppuVar19);
          if (ppppuVar21 == (undefined8 ****)0x0) goto LAB_1031f1c10;
          ppppuVar19 = ppppuVar21;
          func_0x000107c61174();
          ppppuVar18 = ppppuVar19;
          func_0x000107c44e64();
          ppppuVar7 = ppppuVar19;
          func_0x000107c4c0fc();
          func_0x000107c61170(ppppuVar19);
          func_0x000103ee3894();
          ppppuVar19 = ppppuVar7;
          func_0x000107c5fb1c();
          func_0x000107c6142c(ppppuVar7);
        }
        uVar22 = 2;
        if (iVar16 == 3) {
          uVar22 = 3;
        }
        if (iVar16 == 1) {
          uVar22 = 1;
        }
        func_0x000107c4ab80();
        func_0x000107c615e8(ppppuVar4);
        goto LAB_1031f1878;
      }
      func_0x000107c6142c(param_3);
      func_0x000107c615e8(ppppuVar4);
      goto LAB_1031f185c;
    }
LAB_1031f18f8:
    ppppuVar18 = (undefined8 ****)0x0;
    ppppuVar20 = (undefined8 ****)0x0;
  }
LAB_1031f1864:
  ppppuVar19 = (undefined8 ****)0x0;
  ppppuVar17 = (undefined8 ****)0x0;
  ppppuVar15 = (undefined8 ****)0x0;
  ppppuVar6 = (undefined8 ****)0x0;
  ppppuVar5 = (undefined8 ****)0x0;
  ppppuVar3 = (undefined8 ****)0x0;
  param_3 = (undefined8 ****)0x0;
  ppppuVar21 = (undefined8 ****)0x0;
  ppppuVar13 = (undefined8 ****)0x0;
  ppppuVar14 = (undefined8 ****)0x0;
  param_2 = (undefined8 ****)0x0;
  uVar22 = 0;
LAB_1031f1878:
  *param_1 = ppppuVar3;
  param_1[1] = param_3;
  param_1[2] = ppppuVar6;
  param_1[3] = ppppuVar5;
  param_1[4] = ppppuVar17;
  param_1[5] = ppppuVar15;
  param_1[6] = ppppuVar20;
  param_1[7] = ppppuVar18;
  param_1[8] = ppppuVar19;
  param_1[9] = ppppuVar21;
  param_1[10] = ppppuVar13;
  param_1[0xb] = ppppuVar14;
  param_1[0xc] = uVar22;
  param_1[0xd] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}



/* Entry: 1031f1dec; end: 1031f1eb7;  */

void FUN_1031f1dec(undefined8 *param_1,long param_2)

{
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
  undefined1 uStack_d0;
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
  undefined1 uStack_40;
  
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_40 = *(undefined1 *)(param_1 + 0xe);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  func_0x000107c61428(param_2 + 0x10,auStack_c8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112f4bea8,&UNK_10db9bc70);
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    func_0x000100854cb0(&uStack_140);
  }
  else {
    FUN_1031f1f70(&uStack_b0);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1031f1eb8; end: 1031f1ebf;  */

void FUN_1031f1eb8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
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
  undefined1 uStack_d0;
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
  undefined1 uStack_40;
  
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_40 = *(undefined1 *)(param_1 + 0xe);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_c8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112f4bea8,&UNK_10db9bc70);
    uStack_d0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    func_0x000100854cb0(&uStack_140);
  }
  else {
    FUN_1031f1f70(&uStack_b0);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1031f1ec0; end: 1031f1f2f;  */

void FUN_1031f1ec0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f4bd78 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4bd70;
  func_0x00010002969c(0x112f4bd70,&UNK_10db9bb28);
  uVar2 = uVar1;
  FUN_1031f1f30();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f4bd78 = puVar3;
  return;
}



/* Entry: 1031f1f30; end: 1031f1f6f;  */

void FUN_1031f1f30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4bd80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9bc44;
  func_0x000107c61520(&UNK_10db9bc44,&UNK_110622578);
  puRam0000000112f4bd80 = puVar1;
  return;
}



/* Entry: 1031f1f70; end: 1031f27df;  */

void FUN_1031f1f70(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_1d8 [120];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  char cStack_78;
  
  lVar10 = param_1[1];
  if (lVar10 == 0) {
LAB_1031f208c:
    func_0x0001000285a8(0x112f4bea8,&UNK_10db9bc70);
    uStack_118 = param_1[9];
    uStack_120 = param_1[8];
    uStack_108 = param_1[0xb];
    uStack_110 = param_1[10];
    uStack_f8 = param_1[0xd];
    uStack_100 = param_1[0xc];
    uStack_158 = param_1[1];
    puStack_160 = (undefined *)*param_1;
    puStack_148 = (undefined *)param_1[3];
    pcStack_150 = (code *)param_1[2];
    puStack_138 = (undefined *)param_1[5];
    pcStack_140 = (code *)param_1[4];
    uStack_128 = param_1[7];
    uStack_130 = param_1[6];
    uStack_f0 = *(undefined1 *)(param_1 + 0xe);
    func_0x000100854cb0(&puStack_160);
    return;
  }
  uStack_e8 = *param_1;
  uStack_90 = param_1[0xb];
  uStack_98 = param_1[10];
  lStack_80 = param_1[0xd];
  uStack_88 = param_1[0xc];
  cStack_78 = *(char *)(param_1 + 0xe);
  uVar12 = param_1[3];
  uVar11 = param_1[2];
  lStack_c0 = param_1[5];
  uStack_c8 = param_1[4];
  uStack_b0 = param_1[7];
  uStack_b8 = param_1[6];
  uStack_a0 = param_1[9];
  uStack_a8 = param_1[8];
  lStack_e0 = lVar10;
  uStack_d8 = uVar11;
  uStack_d0 = uVar12;
  if ((int)uStack_88 != 3) goto LAB_1031f208c;
  uVar2 = uVar11 & 0xffffffffffff;
  if ((uVar12 & 0x2000000000000000) != 0) {
    uVar2 = uVar12 >> 0x38 & 0xf;
  }
  if ((uVar2 == 0) || (lVar10 = *(long *)(unaff_x20 + 0x10), lVar10 == 0)) goto LAB_1031f208c;
  puVar1 = &UNK_1106225c0;
  func_0x000107c613fc(&UNK_1106225c0,0x18,7);
  *(long *)(puVar1 + 0x10) = lVar10;
  if (((lStack_c0 == 0) ||
      (((uStack_c8 != *(ulong *)(unaff_x20 + 0x18) || (lStack_c0 != *(long *)(unaff_x20 + 0x20))) &&
       (uVar2 = uStack_c8, func_0x000107c605b8(), (uVar2 & 1) == 0)))) || (cStack_78 == '\x01')) {
LAB_1031f20fc:
    if ((*(byte *)(unaff_x20 + 0x38) & 1) == 0) {
      func_0x000107c61174();
      func_0x000107c61174();
      FUN_1031f3cbc(param_1,&puStack_160);
      func_0x000107c61434(uVar12);
      lVar3 = lVar10;
      func_0x000107c5c734();
      func_0x000107c61180();
      puVar8 = PTR___NSConcreteStackBlock_11034bd00;
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c41048();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        puVar5 = &UNK_110622448;
        func_0x000107c613fc(&UNK_110622448,0x18,7);
        func_0x000107c61644(puVar5 + 0x10);
        puVar6 = &UNK_110622660;
        func_0x000107c613fc(&UNK_110622660,0x28,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(ulong *)(puVar6 + 0x18) = uVar11;
        *(ulong *)(puVar6 + 0x20) = uVar12;
        pcStack_140 = FUN_1031f3d70;
        puStack_160 = puVar8;
        uStack_158 = 0x42000000;
        pcStack_150 = FUN_1031f2c24;
        puStack_148 = &UNK_110622678;
        ppuVar7 = &puStack_160;
        puStack_138 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar8 = puStack_138;
        func_0x000107c61434(uVar12);
        func_0x000107c61574(puVar8);
        lVar3 = lVar4;
        func_0x000107c5c320(lVar4);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(lVar4);
        func_0x000107c3e924(lVar3);
        puVar8 = PTR___NSConcreteStackBlock_11034bd00;
        func_0x000107c61170(lVar3);
      }
      lVar3 = lVar10;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = lVar3;
        func_0x000107c4104c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar3);
        puVar5 = &UNK_110622448;
        func_0x000107c613fc(&UNK_110622448,0x18,7);
        func_0x000107c61644(puVar5 + 0x10);
        puVar6 = &UNK_110622610;
        func_0x000107c613fc(&UNK_110622610,0x28,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(ulong *)(puVar6 + 0x18) = uVar11;
        *(ulong *)(puVar6 + 0x20) = uVar12;
        pcStack_140 = (code *)0x1031f3d1c;
        uStack_158 = 0x42000000;
        pcStack_150 = FUN_1031f2c24;
        puStack_148 = &UNK_110622628;
        ppuVar7 = &puStack_160;
        puStack_160 = puVar8;
        puStack_138 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar8 = puStack_138;
        func_0x000107c61434(uVar12);
        func_0x000107c61574(puVar8);
        lVar3 = lVar4;
        func_0x000107c5c320(lVar4);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(lVar4);
        func_0x000107c3e924(lVar3);
        func_0x000107c61170(lVar3);
      }
      puVar8 = &UNK_1106225e8;
      func_0x000107c613fc(&UNK_1106225e8,0xa8,7);
      *(undefined8 *)(puVar8 + 0x58) = uStack_a0;
      *(undefined8 *)(puVar8 + 0x50) = uStack_a8;
      *(undefined8 *)(puVar8 + 0x68) = uStack_90;
      *(undefined8 *)(puVar8 + 0x60) = uStack_98;
      *(long *)(puVar8 + 0x78) = lStack_80;
      *(undefined8 *)(puVar8 + 0x70) = uStack_88;
      puVar8[0x80] = cStack_78;
      *(long *)(puVar8 + 0x18) = lStack_e0;
      *(undefined8 *)(puVar8 + 0x10) = uStack_e8;
      *(ulong *)(puVar8 + 0x28) = uStack_d0;
      *(ulong *)(puVar8 + 0x20) = uStack_d8;
      *(long *)(puVar8 + 0x38) = lStack_c0;
      *(ulong *)(puVar8 + 0x30) = uStack_c8;
      *(undefined8 *)(puVar8 + 0x48) = uStack_b0;
      *(undefined8 *)(puVar8 + 0x40) = uStack_b8;
      *(code **)(puVar8 + 0x88) = FUN_1031f3ca0;
      *(undefined **)(puVar8 + 0x90) = puVar1;
      *(ulong *)(puVar8 + 0x98) = uVar11;
      *(ulong *)(puVar8 + 0xa0) = uVar12;
      uVar9 = 0x112f4beb0;
      func_0x0001000285a8(0x112f4beb0,&UNK_10db9bc78);
      func_0x000107c613fc();
      func_0x0001000b64ac(FUN_1031f3d0c,puVar8,uVar9);
      func_0x000107c61170(lVar10);
      return;
    }
  }
  else {
    if (lStack_80 - 9U < 2) {
      func_0x000107c61174(lVar10);
      func_0x000107c61174();
      FUN_1031f3cbc(param_1,&puStack_160);
      FUN_1031f2998(&uStack_e8);
      goto LAB_1031f2158;
    }
    if (lStack_80 != 0x14) goto LAB_1031f20fc;
  }
  func_0x0001000285a8(0x112f4bea8,&UNK_10db9bc70);
  uStack_f0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  puStack_148 = (undefined *)0x0;
  pcStack_150 = (code *)0x0;
  puStack_138 = (undefined *)0x0;
  pcStack_140 = (code *)0x0;
  uStack_158 = 0;
  puStack_160 = (undefined *)0x0;
  func_0x000107c61174(lVar10);
  func_0x000107c61174();
  FUN_1031f3cbc(param_1,auStack_1d8);
  func_0x000100854cb0(&puStack_160);
LAB_1031f2158:
  func_0x000107c61170(lVar10);
  func_0x000107c61574(puVar1);
  FUN_1031f3c54(param_1);
  return;
}



/* Entry: 1031f27e0; end: 1031f27e7;  */

void FUN_1031f27e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
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
  undefined8 uStack_2ef;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
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
  undefined8 uStack_23f;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_157;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  long lStack_e8;
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
  undefined1 uStack_80;
  
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_80 = *(undefined1 *)(param_2 + 0xe);
  lStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_108,0,0);
  lVar6 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if ((lVar6 == 0) ||
     (func_0x000107c61574(), uVar4 = uStack_98, uVar12 = uStack_a0, uVar13 = uStack_c0,
     uVar1 = uStack_d8, uVar11 = uStack_e0, lVar6 = lStack_e8, uVar10 = uStack_f0, lStack_e8 == 0))
  {
    FUN_1031f3b04(&puStack_230);
  }
  else {
    iVar5 = (int)uStack_90;
    puVar7 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    uVar3 = uStack_b0;
    uVar2 = uStack_c8;
    func_0x000107c61174();
    func_0x000107c61434(lVar6);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x000107c61174(uVar13);
    func_0x000107c61434(uVar3);
    uVar13 = uVar4;
    func_0x00010006c00c(uVar12);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c45098(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170();
    if (iVar5 == 3) {
      FUN_1031f3e80();
    }
    else {
      func_0x0001031f3f4c();
    }
    if (puVar7 == (undefined *)0x0) {
      func_0x0001031e60c4(&puStack_2e0);
    }
    else {
      puStack_390 = puVar7;
      func_0x0001031e60f0(&puStack_390);
      uStack_1a8 = uStack_308;
      uStack_1b0 = uStack_310;
      uStack_1a0 = uStack_300;
      uStack_18f = (undefined7)uStack_2ef;
      uStack_188 = (undefined1)((ulong)uStack_2ef >> 0x38);
      uStack_1e8 = uStack_348;
      uStack_1f0 = uStack_350;
      puStack_1d8 = (undefined *)uStack_338;
      uStack_1e0 = uStack_340;
      uStack_1c8 = uStack_328;
      uStack_1d0 = uStack_330;
      uStack_1b8 = uStack_318;
      uStack_1c0 = uStack_320;
      uStack_228 = uStack_388;
      puStack_230 = puStack_390;
      uStack_218 = uStack_378;
      uStack_220 = uStack_380;
      uStack_208 = uStack_368;
      puStack_210 = puStack_370;
      puStack_1f8 = (undefined *)uStack_358;
      uStack_200 = uStack_360;
      func_0x0001031e6100(&puStack_230);
      uStack_258 = uStack_1a8;
      uStack_260 = uStack_1b0;
      uStack_250 = uStack_1a0;
      uStack_23f = CONCAT17(uStack_188,uStack_18f);
      uStack_298 = uStack_1e8;
      uStack_2a0 = uStack_1f0;
      uStack_288 = puStack_1d8;
      uStack_290 = uStack_1e0;
      uStack_278 = uStack_1c8;
      uStack_280 = uStack_1d0;
      uStack_268 = uStack_1b8;
      uStack_270 = uStack_1c0;
      uStack_2d8 = uStack_228;
      puStack_2e0 = puStack_230;
      uStack_2c8 = uStack_218;
      uStack_2d0 = uStack_220;
      uStack_2b8 = uStack_208;
      puStack_2c0 = puStack_210;
      uStack_2a8 = puStack_1f8;
      uStack_2b0 = uStack_200;
    }
    uStack_180 = uStack_268;
    uStack_188 = (undefined1)uStack_270;
    uStack_187 = (undefined7)((ulong)uStack_270 >> 8);
    uStack_170 = uStack_258;
    uStack_178 = uStack_260;
    uStack_168 = uStack_250;
    uStack_157 = uStack_23f;
    uStack_1c0 = uStack_2a8;
    uStack_1c8 = uStack_2b0;
    uStack_1b0 = uStack_298;
    uStack_1b8 = uStack_2a0;
    uStack_1a0 = uStack_288;
    uStack_1a8 = uStack_290;
    uStack_190 = (undefined1)uStack_278;
    uStack_18f = (undefined7)((ulong)uStack_278 >> 8);
    uStack_198 = (undefined1)uStack_280;
    uStack_197 = (undefined7)((ulong)uStack_280 >> 8);
    uStack_1f0 = uStack_2d8;
    puStack_1f8 = puStack_2e0;
    uStack_1e0 = uStack_2c8;
    uStack_1e8 = uStack_2d0;
    uStack_1d0 = uStack_2b8;
    puStack_1d8 = puStack_2c0;
    puVar9 = PTR_PTR_1126b5b00;
    func_0x000107c61168();
    func_0x000107c61174(puVar7);
    func_0x000107c5fadc(uVar10,lVar6);
    func_0x000107c5fadc(uVar11,uVar1);
    func_0x000107c5ee20(uVar12,uVar4);
    func_0x000107c4f49c();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    FUN_1031f3c54(&uStack_f0);
    puStack_230 = (undefined *)0x0;
    uStack_228 = 0;
    uStack_220 = 0x74736f70;
    uStack_218 = 0xe400000000000000;
    uStack_200 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_120 = 0x300;
    uStack_118 = 0;
    uStack_110 = 2;
    puStack_210 = puVar8;
    uStack_208 = uVar13;
    puStack_138 = puVar9;
    FUN_1031f3c9c(&puStack_230);
  }
  func_0x000107c610b4(param_1,&puStack_230,0x128);
  return;
}



/* Entry: 1031f27e8; end: 1031f2997;  */

void FUN_1031f27e8(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_58;
  
  if (param_2 != 0) {
    uVar2 = param_2;
    func_0x000107c61174();
    uVar3 = uVar2;
    func_0x000107c40568();
    func_0x000107c61180();
    if (uVar3 == 0) {
      func_0x000107c61170(uVar2);
    }
    else {
      puVar4 = PTR_PTR_1126b5c10;
      func_0x000107c61168();
      uVar5 = uVar3;
      func_0x000107c6148c();
      if ((uVar5 != 0) && (uVar6 = uVar5, func_0x000107c44924(), (int)uVar6 != 0)) {
        func_0x000107c4afb0();
        func_0x000107c61180();
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f2994);
          (*pcVar1)();
        }
        uVar6 = uVar5;
        func_0x000107c4f490();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1031f2998);
          (*pcVar1)();
        }
        uVar5 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
        func_0x000107c6142c(puVar4);
        uVar5 = uVar5 & 0xffffffffffff;
        if (((ulong)puVar4 & 0x2000000000000000) != 0) {
          uVar5 = (ulong)puVar4 >> 0x38 & 0xf;
        }
        if (uVar5 != 0) {
          uStack_58 = param_2;
          func_0x000107c61174(uVar2);
          func_0x000100087f6c(&uStack_58);
          func_0x000107c61170(uVar2);
          func_0x0001000b6d30(0);
          func_0x000107c613fc();
          func_0x0001000b6d50(0,0);
          func_0x000107c615e8(uVar3);
          func_0x000107c61170(uVar2);
          return;
        }
      }
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(uVar3);
    }
  }
  uStack_58 = 0;
  func_0x000100087f6c(&uStack_58);
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1031f2998; end: 1031f2c23;  */

void FUN_1031f2998(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  undefined1 uStack_50;
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112f4bea8,&UNK_10db9bc70);
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    func_0x000100854cb0(&uStack_c0);
  }
  else {
    func_0x0001000285a8(0x112f4beb8,&UNK_10db9bc80);
    uVar5 = *param_1;
    func_0x000107c5fadc(uVar5,param_1[1]);
    lVar2 = lVar1;
    func_0x000107c4b28c(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    lVar3 = lVar2;
    func_0x000100759c94(lVar2,0);
    func_0x000107c61170(lVar2);
    func_0x0001000285a8(0x112d59888,&UNK_10d923170);
    lVar2 = lVar3;
    func_0x000100775284(lVar3,0,1);
    puVar4 = &UNK_1106226b0;
    func_0x000107c613fc(&UNK_1106226b0,0x81,7);
    uVar5 = param_1[8];
    uVar7 = param_1[0xb];
    uVar6 = param_1[10];
    *(undefined8 *)(puVar4 + 0x58) = param_1[9];
    *(undefined8 *)(puVar4 + 0x50) = uVar5;
    *(undefined8 *)(puVar4 + 0x68) = uVar7;
    *(undefined8 *)(puVar4 + 0x60) = uVar6;
    uVar5 = param_1[0xc];
    *(undefined8 *)(puVar4 + 0x78) = param_1[0xd];
    *(undefined8 *)(puVar4 + 0x70) = uVar5;
    puVar4[0x80] = *(undefined1 *)(param_1 + 0xe);
    uVar5 = *param_1;
    uVar7 = param_1[3];
    uVar6 = param_1[2];
    *(undefined8 *)(puVar4 + 0x18) = param_1[1];
    *(undefined8 *)(puVar4 + 0x10) = uVar5;
    *(undefined8 *)(puVar4 + 0x28) = uVar7;
    *(undefined8 *)(puVar4 + 0x20) = uVar6;
    uVar5 = param_1[4];
    uVar7 = param_1[7];
    uVar6 = param_1[6];
    *(undefined8 *)(puVar4 + 0x38) = param_1[5];
    *(undefined8 *)(puVar4 + 0x30) = uVar5;
    *(undefined8 *)(puVar4 + 0x48) = uVar7;
    *(undefined8 *)(puVar4 + 0x40) = uVar6;
    FUN_1031f3d84(param_1,&uStack_c0);
    uVar5 = 0x112f4bd70;
    func_0x0001000285a8(0x112f4bd70,&UNK_10db9bb28);
    func_0x0001000bfde0(0x1031f3d7c,puVar4,uVar5);
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 1031f2c24; end: 1031f2c6f;  */

void FUN_1031f2c24(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1031f2c70; end: 1031f2d5f;  */

void FUN_1031f2c70(ulong param_1,long param_2,ulong param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [24];
  
  puVar2 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x38) == '\x01') {
    func_0x000107c4f490();
    func_0x000107c61180();
    uVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    if ((uVar1 == param_3) && (puVar2 == param_4)) {
      func_0x000107c6142c(puVar2);
    }
    else {
      func_0x000107c605b8(uVar1,puVar2,param_3,param_4,0);
      func_0x000107c6142c(puVar2);
      if ((uVar1 & 1) == 0) goto LAB_1031f2d38;
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
LAB_1031f2d38:
  func_0x000107c42194(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 1031f2d60; end: 1031f2f43;  */

void FUN_1031f2d60(long param_1,undefined8 *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
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
  undefined1 uStack_70;
  
  ppuVar5 = &puStack_110;
  if ((param_2[5] == 0) || (lVar6 = param_2[8], lVar6 == 0)) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    func_0x000100087f6c(&uStack_e0);
  }
  else {
    uVar7 = param_2[7];
    lVar1 = param_1;
    (*param_3)();
    if (lVar1 != 0) {
      uVar2 = param_5;
      func_0x000107c5fadc(param_5,param_6);
      uVar3 = param_2[10];
      func_0x000107c5ee20(uVar3,param_2[0xb]);
      func_0x000107c5fadc(uVar7,lVar6);
      puVar4 = &UNK_1106226d8;
      func_0x000107c613fc(&UNK_1106226d8,0xa0,7);
      *(undefined8 *)(puVar4 + 0x10) = param_5;
      *(undefined8 *)(puVar4 + 0x18) = param_6;
      uVar8 = param_2[8];
      uVar10 = param_2[0xb];
      uVar9 = param_2[10];
      *(undefined8 *)(puVar4 + 0x68) = param_2[9];
      *(undefined8 *)(puVar4 + 0x60) = uVar8;
      *(undefined8 *)(puVar4 + 0x78) = uVar10;
      *(undefined8 *)(puVar4 + 0x70) = uVar9;
      uVar8 = param_2[0xc];
      *(undefined8 *)(puVar4 + 0x88) = param_2[0xd];
      *(undefined8 *)(puVar4 + 0x80) = uVar8;
      puVar4[0x90] = *(undefined1 *)(param_2 + 0xe);
      uVar8 = *param_2;
      uVar10 = param_2[3];
      uVar9 = param_2[2];
      *(undefined8 *)(puVar4 + 0x28) = param_2[1];
      *(undefined8 *)(puVar4 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + 0x38) = uVar10;
      *(undefined8 *)(puVar4 + 0x30) = uVar9;
      uVar8 = param_2[4];
      uVar10 = param_2[7];
      uVar9 = param_2[6];
      *(undefined8 *)(puVar4 + 0x48) = param_2[5];
      *(undefined8 *)(puVar4 + 0x40) = uVar8;
      *(undefined8 *)(puVar4 + 0x58) = uVar10;
      *(undefined8 *)(puVar4 + 0x50) = uVar9;
      *(long *)(puVar4 + 0x98) = param_1;
      pcStack_f0 = FUN_1031f3db8;
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0x42000000;
      pcStack_100 = FUN_1031f3148;
      puStack_f8 = &UNK_1106226f0;
      puStack_e8 = puVar4;
      func_0x000107c60bc4(&puStack_110);
      puVar4 = puStack_e8;
      func_0x000107c61434(param_6);
      FUN_1031f3d84(param_2,&uStack_e0);
      func_0x000107c6157c(param_1);
      func_0x000107c61574(puVar4);
      func_0x000107c44214(lVar1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar7);
    }
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1031f2f44; end: 1031f3147;  */

void FUN_1031f2f44(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong *param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_1c8 [120];
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
  undefined1 uStack_e0;
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
  undefined1 uStack_60;
  
  uStack_88 = param_5[9];
  uStack_90 = param_5[8];
  uStack_78 = param_5[0xb];
  uStack_80 = param_5[10];
  uStack_68 = param_5[0xd];
  uStack_70 = param_5[0xc];
  uStack_60 = (undefined1)param_5[0xe];
  uStack_c8 = param_5[1];
  uStack_d0 = *param_5;
  uStack_b8 = param_5[3];
  uStack_c0 = param_5[2];
  uStack_a8 = param_5[5];
  uStack_b0 = param_5[4];
  uStack_98 = param_5[7];
  uStack_a0 = param_5[6];
  if ((param_1 != 0) && (param_2 == 0)) {
    func_0x000107c61174();
    uVar1 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      if ((uVar2 == *param_5) && (param_2 == param_5[1])) {
        func_0x000107c6142c(param_2);
LAB_1031f300c:
        uVar1 = param_1;
        func_0x000107c5d0a8();
        func_0x000107c61180();
        if (uVar1 == 0) {
          uStack_108 = param_5[9];
          uStack_110 = param_5[8];
          uStack_f8 = param_5[0xb];
          uStack_100 = param_5[10];
          uStack_e8 = param_5[0xd];
          uStack_f0 = param_5[0xc];
          uStack_148 = param_5[1];
          uStack_150 = *param_5;
          uStack_138 = param_5[3];
          uStack_140 = param_5[2];
          uStack_128 = param_5[5];
          uStack_130 = param_5[4];
          uStack_118 = param_5[7];
          uStack_120 = param_5[6];
          uStack_e0 = (undefined1)param_5[0xe];
          FUN_1031f3d84(param_5,auStack_1c8);
          func_0x000100087f6c(&uStack_150);
        }
        else {
          uVar2 = uVar1;
          func_0x000107c49b78();
          if (((uVar2 & 1) != 0) || (uVar2 = uVar1, func_0x000107c49bf8(), (uVar2 & 1) == 0)) {
            uStack_e0 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            func_0x000100087f6c(&uStack_150);
            func_0x000107c61170(uVar1);
            func_0x000107c61170(param_1);
            return;
          }
          uStack_f8 = uStack_78;
          uStack_100 = uStack_80;
          uStack_e8 = uStack_68;
          uStack_f0 = uStack_70;
          uStack_148 = uStack_c8;
          uStack_150 = uStack_d0;
          uStack_138 = uStack_b8;
          uStack_140 = uStack_c0;
          uStack_128 = uStack_a8;
          uStack_130 = uStack_b0;
          uStack_e0 = uStack_60;
          uStack_118 = uStack_98;
          uStack_120 = uStack_a0;
          uStack_108 = uStack_88;
          uStack_110 = uStack_90;
          FUN_1031f3d84(param_5,auStack_1c8);
          func_0x000100087f6c(&uStack_150);
          func_0x000107c61170(uVar1);
        }
        func_0x000107c61170(param_1);
        FUN_1031f3c54(&uStack_150);
        return;
      }
      func_0x000107c605b8(uVar2,param_2,*param_5,param_5[1],0);
      func_0x000107c6142c(param_2);
      if ((uVar2 & 1) != 0) goto LAB_1031f300c;
    }
    func_0x000107c61170(param_1);
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  func_0x000100087f6c(&uStack_150);
  return;
}



/* Entry: 1031f3148; end: 1031f31bf;  */

/* WARNING: Possible PIC construction at 0x0001031f31a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031f31a8) */

void FUN_1031f3148(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1031f31c0; end: 1031f3257;  */

void FUN_1031f31c0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [120];
  
  if ((((char)param_2[1] == '\x01') || (lVar1 = *param_2, lVar1 == 0)) ||
     (func_0x000107c4a55c(), (int)lVar1 == 0)) {
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    uVar2 = param_3[8];
    uVar4 = param_3[0xb];
    uVar3 = param_3[10];
    param_1[9] = param_3[9];
    param_1[8] = uVar2;
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
    uVar2 = param_3[0xc];
    param_1[0xd] = param_3[0xd];
    param_1[0xc] = uVar2;
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_3 + 0xe);
    uVar2 = *param_3;
    uVar4 = param_3[3];
    uVar3 = param_3[2];
    param_1[1] = param_3[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    uVar2 = param_3[4];
    uVar4 = param_3[7];
    uVar3 = param_3[6];
    param_1[5] = param_3[5];
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    FUN_1031f3d84(param_3,auStack_98);
  }
  return;
}



/* Entry: 1031f3258; end: 1031f3293;  */

void FUN_1031f3258(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031f3294; end: 1031f32e7;  */

void FUN_1031f3294(void)

{
  FUN_1031f1274();
  return;
}



/* Entry: 1031f32e8; end: 1031f3307;  */

void FUN_1031f32e8(void)

{
  func_0x000107c61168(&PTR_PTR_112f4be28);
  return;
}



/* Entry: 1031f3308; end: 1031f330b;  */

void FUN_1031f3308(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4bd98 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4bda0;
  func_0x00010002969c(0x112f4bda0,&UNK_10db9c0c0);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4bd98 = puVar2;
  return;
}



/* Entry: 1031f330c; end: 1031f335b;  */

void FUN_1031f330c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4bd98 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4bda0;
  func_0x00010002969c(0x112f4bda0,&UNK_10db9c0c0);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4bd98 = puVar2;
  return;
}



/* Entry: 1031f335c; end: 1031f3373;  */

undefined ** FUN_1031f335c(void)

{
  return &PTR_DAT_110622460;
}



/* Entry: 1031f3374; end: 1031f33bb;  */

undefined * FUN_1031f3374(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = 0x112f4bd60;
  FUN_1031f3ac8(0x112f4bd60,&DAT_10db9bb48);
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



/* Entry: 1031f33bc; end: 1031f33c3;  */

void FUN_1031f33bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1031f33c4; end: 1031f3433;  */

undefined8 * FUN_1031f33c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1031f3434; end: 1031f34c7;  */

int FUN_1031f3434(int *param_1,int param_2)

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



/* Entry: 1031f34c8; end: 1031f3543;  */

long FUN_1031f34c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1031f3544; end: 1031f3607;  */

undefined8 * FUN_1031f3544(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar2 = param_2[6];
  uVar5 = param_2[7];
  param_1[6] = uVar2;
  param_1[7] = uVar5;
  uVar5 = param_2[8];
  uVar6 = param_2[9];
  param_1[8] = uVar5;
  param_1[9] = uVar6;
  uVar1 = param_2[10];
  uVar7 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar2);
  func_0x000107c61434(uVar5);
  func_0x000107c61174(uVar6);
  func_0x00010006c00c(uVar1,uVar7);
  param_1[10] = uVar1;
  param_1[0xb] = uVar7;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



/* Entry: 1031f3608; end: 1031f3717;  */

undefined8 * FUN_1031f3608(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  param_1[7] = param_2[7];
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = param_2[10];
  uVar2 = param_2[0xb];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[10];
  uVar3 = param_1[0xb];
  param_1[10] = uVar4;
  param_1[0xb] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  uVar4 = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xd] = uVar4;
  return param_1;
}



/* Entry: 1031f3718; end: 1031f37c3;  */

undefined8 * FUN_1031f3718(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  func_0x000107c6142c(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c61170(uVar2);
  param_1[7] = param_2[7];
  func_0x000107c6142c(param_1[8]);
  uVar2 = param_1[9];
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  func_0x000107c61170(uVar2);
  uVar2 = param_1[10];
  uVar1 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0xd] = param_2[0xd];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



/* Entry: 1031f37c4; end: 1031f389b;  */

int FUN_1031f37c4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x71) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1031f389c; end: 1031f3ac7;  */

undefined8 FUN_1031f389c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if ((uVar1 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar1 & 1) == 0))
  {
    return 0;
  }
  uVar1 = param_1[2];
  if ((uVar1 != param_2[2] || param_1[3] != param_2[3]) && (func_0x000107c605b8(), (uVar1 & 1) == 0)
     ) {
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
       (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  uVar2 = param_1[6];
  uVar1 = param_2[6];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    FUN_1031f3dd0(0,0x112dc0130,&PTR_PTR_1126afad0);
    func_0x000107c61174(uVar1);
    func_0x000107c61174();
    uVar3 = uVar2;
    func_0x000107c60118();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar1 = param_2[8];
  if (param_1[8] == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = param_1[7];
    if (((uVar2 != param_2[7]) || (param_1[8] != uVar1)) &&
       (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
      return 0;
    }
  }
  uVar2 = param_1[9];
  uVar1 = param_2[9];
  if (uVar2 == 0) {
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    if (uVar1 == 0) {
      return 0;
    }
    FUN_1031f3dd0(0,0x112dc0130,&PTR_PTR_1126afad0);
    func_0x000107c61174(uVar1);
    func_0x000107c61174();
    uVar3 = uVar2;
    func_0x000107c60118();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar1 = param_1[10];
  func_0x000100e25fcc(uVar1,param_1[0xb],param_2[10],param_2[0xb]);
  if (((uVar1 & 1) != 0) && ((int)param_1[0xc] == (int)param_2[0xc])) {
    if ((char)param_1[0xe] == '\x01') {
      if ((char)param_2[0xe] == '\x01') {
        return 1;
      }
    }
    else if (((char)param_2[0xe] != '\x01') && (param_1[0xd] == param_2[0xd])) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 1031f3ac8; end: 1031f3b03;  */

void FUN_1031f3ac8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    FUN_1031f32e8();
    func_0x000107c61520(param_2,lVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1031f3b04; end: 1031f3b33;  */

void FUN_1031f3b04(undefined8 *param_1)

{
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
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



/* Entry: 1031f3b34; end: 1031f3c53;  */

undefined8 FUN_1031f3b34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_1031f3dd0(0,0x112d7a520,&PTR_PTR_1126b2390);
  func_0x000107c6147c(auStack_90,&uStack_70,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_90[0] = 0;
  }
  return auStack_90[0];
}



/* Entry: 1031f3c54; end: 1031f3c9b;  */

undefined8 FUN_1031f3c54(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f4bd70;
  func_0x0001000285a8(0x112f4bd70,&UNK_10db9bb28);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1031f3c9c; end: 1031f3c9f;  */

void FUN_1031f3c9c(void)

{
  return;
}



/* Entry: 1031f3ca0; end: 1031f3cbb;  */

void FUN_1031f3ca0(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1031f3cbc; end: 1031f3d0b;  */

undefined8 FUN_1031f3cbc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f4bd70;
  func_0x0001000285a8(0x112f4bd70,&UNK_10db9bb28);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1031f3d0c; end: 1031f3d43;  */

void FUN_1031f3d0c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
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
  undefined1 uStack_70;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  puVar1 = (undefined8 *)(unaff_x20 + 0x10);
  ppuVar7 = &puStack_110;
  if ((*(long *)(unaff_x20 + 0x38) == 0) || (lVar8 = *(long *)(unaff_x20 + 0x50), lVar8 == 0)) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    func_0x000100087f6c(&uStack_e0,puVar1,*(code **)(unaff_x20 + 0x88),
                        *(undefined8 *)(unaff_x20 + 0x90));
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
    lVar3 = param_1;
    (**(code **)(unaff_x20 + 0x88))();
    if (lVar3 != 0) {
      uVar4 = uVar10;
      func_0x000107c5fadc(uVar10,uVar2);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
      func_0x000107c5ee20(uVar5,*(undefined8 *)(unaff_x20 + 0x68));
      func_0x000107c5fadc(uVar9,lVar8);
      puVar6 = &UNK_1106226d8;
      func_0x000107c613fc(&UNK_1106226d8,0xa0,7);
      *(undefined8 *)(puVar6 + 0x10) = uVar10;
      *(undefined8 *)(puVar6 + 0x18) = uVar2;
      uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x68);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x60);
      *(undefined8 *)(puVar6 + 0x68) = *(undefined8 *)(unaff_x20 + 0x58);
      *(undefined8 *)(puVar6 + 0x60) = uVar10;
      *(undefined8 *)(puVar6 + 0x78) = uVar12;
      *(undefined8 *)(puVar6 + 0x70) = uVar11;
      uVar10 = *(undefined8 *)(unaff_x20 + 0x70);
      *(undefined8 *)(puVar6 + 0x88) = *(undefined8 *)(unaff_x20 + 0x78);
      *(undefined8 *)(puVar6 + 0x80) = uVar10;
      puVar6[0x90] = *(undefined1 *)(unaff_x20 + 0x80);
      uVar10 = *puVar1;
      uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
      *(undefined8 *)(puVar6 + 0x28) = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined8 *)(puVar6 + 0x20) = uVar10;
      *(undefined8 *)(puVar6 + 0x38) = uVar12;
      *(undefined8 *)(puVar6 + 0x30) = uVar11;
      uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
      *(undefined8 *)(puVar6 + 0x48) = *(undefined8 *)(unaff_x20 + 0x38);
      *(undefined8 *)(puVar6 + 0x40) = uVar10;
      *(undefined8 *)(puVar6 + 0x58) = uVar12;
      *(undefined8 *)(puVar6 + 0x50) = uVar11;
      *(long *)(puVar6 + 0x98) = param_1;
      pcStack_f0 = FUN_1031f3db8;
      puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_108 = 0x42000000;
      pcStack_100 = FUN_1031f3148;
      puStack_f8 = &UNK_1106226f0;
      puStack_e8 = puVar6;
      func_0x000107c60bc4(&puStack_110);
      puVar6 = puStack_e8;
      func_0x000107c61434(uVar2);
      FUN_1031f3d84(puVar1,&uStack_e0);
      func_0x000107c6157c(param_1);
      func_0x000107c61574(puVar6);
      func_0x000107c44214(lVar3);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar9);
    }
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1031f3d44; end: 1031f3d6f;  */

void FUN_1031f3d44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031f3d70; end: 1031f3d83;  */

void FUN_1031f3d70(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  puVar5 = *(undefined1 **)(unaff_x20 + 0x20);
  puVar4 = auStack_58;
  func_0x000107c61428(lVar2 + 0x10,puVar4,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4f490();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  if ((uVar3 == uVar1) && (puVar4 == puVar5)) {
    func_0x000107c6142c(puVar4);
  }
  else {
    func_0x000107c605b8(uVar3,puVar4,uVar1,puVar5,0);
    func_0x000107c6142c(puVar4);
    if ((uVar3 & 1) == 0) goto LAB_1031f2c04;
  }
  *(undefined1 *)(lVar2 + 0x38) = 1;
LAB_1031f2c04:
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 1031f3d84; end: 1031f3db7;  */

undefined8 FUN_1031f3d84(undefined8 param_1,undefined8 param_2)

{
  FUN_1031f3544(param_2,param_1,&UNK_110622578);
  return param_2;
}



/* Entry: 1031f3db8; end: 1031f3dcf;  */

void FUN_1031f3db8(ulong param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_1c8 [120];
  ulong uStack_150;
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
  undefined1 uStack_e0;
  ulong uStack_d0;
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
  undefined1 uStack_60;
  
  puVar1 = (ulong *)(unaff_x20 + 0x20);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_60 = *(undefined1 *)(unaff_x20 + 0x90);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_d0 = *puVar1;
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x50);
  if ((param_1 != 0) && (param_2 == 0)) {
    func_0x000107c61174(param_1,0,*(undefined8 *)(unaff_x20 + 0x10),
                        *(undefined8 *)(unaff_x20 + 0x18),puVar1,*(undefined8 *)(unaff_x20 + 0x98));
    uVar2 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      if ((uVar3 == *puVar1) && (param_2 == *(long *)(unaff_x20 + 0x28))) {
        func_0x000107c6142c(param_2);
LAB_1031f300c:
        uVar2 = param_1;
        func_0x000107c5d0a8();
        func_0x000107c61180();
        if (uVar2 == 0) {
          uStack_108 = *(undefined8 *)(unaff_x20 + 0x68);
          uStack_110 = *(undefined8 *)(unaff_x20 + 0x60);
          uStack_f8 = *(undefined8 *)(unaff_x20 + 0x78);
          uStack_100 = *(undefined8 *)(unaff_x20 + 0x70);
          uStack_e8 = *(undefined8 *)(unaff_x20 + 0x88);
          uStack_f0 = *(undefined8 *)(unaff_x20 + 0x80);
          uStack_148 = *(undefined8 *)(unaff_x20 + 0x28);
          uStack_150 = *puVar1;
          uStack_138 = *(undefined8 *)(unaff_x20 + 0x38);
          uStack_140 = *(undefined8 *)(unaff_x20 + 0x30);
          uStack_128 = *(undefined8 *)(unaff_x20 + 0x48);
          uStack_130 = *(undefined8 *)(unaff_x20 + 0x40);
          uStack_118 = *(undefined8 *)(unaff_x20 + 0x58);
          uStack_120 = *(undefined8 *)(unaff_x20 + 0x50);
          uStack_e0 = *(undefined1 *)(unaff_x20 + 0x90);
          FUN_1031f3d84(puVar1,auStack_1c8);
          func_0x000100087f6c(&uStack_150);
        }
        else {
          uVar3 = uVar2;
          func_0x000107c49b78();
          if (((uVar3 & 1) != 0) || (uVar3 = uVar2, func_0x000107c49bf8(), (uVar3 & 1) == 0)) {
            uStack_e0 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            uStack_128 = 0;
            uStack_130 = 0;
            uStack_148 = 0;
            uStack_150 = 0;
            func_0x000100087f6c(&uStack_150);
            func_0x000107c61170(uVar2);
            func_0x000107c61170(param_1);
            return;
          }
          uStack_f8 = uStack_78;
          uStack_100 = uStack_80;
          uStack_e8 = uStack_68;
          uStack_f0 = uStack_70;
          uStack_148 = uStack_c8;
          uStack_150 = uStack_d0;
          uStack_138 = uStack_b8;
          uStack_140 = uStack_c0;
          uStack_128 = uStack_a8;
          uStack_130 = uStack_b0;
          uStack_e0 = uStack_60;
          uStack_118 = uStack_98;
          uStack_120 = uStack_a0;
          uStack_108 = uStack_88;
          uStack_110 = uStack_90;
          FUN_1031f3d84(puVar1,auStack_1c8);
          func_0x000100087f6c(&uStack_150);
          func_0x000107c61170(uVar2);
        }
        func_0x000107c61170(param_1);
        FUN_1031f3c54(&uStack_150);
        return;
      }
      func_0x000107c605b8(uVar3,param_2,*puVar1,*(long *)(unaff_x20 + 0x28),0);
      func_0x000107c6142c(param_2);
      if ((uVar3 & 1) != 0) goto LAB_1031f300c;
    }
    func_0x000107c61170(param_1);
  }
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  func_0x000100087f6c(&uStack_150);
  return;
}


