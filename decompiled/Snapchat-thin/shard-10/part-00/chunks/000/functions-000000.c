/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10731be20; end: 10731be2b;  */

undefined ** FUN_10731be20(void)

{
  return &PTR_DAT_1109a0bf0;
}



/* Entry: 10731be2c; end: 10731be57;  */

undefined8 * FUN_10731be2c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109a0b90;
  FUN_10731be98(param_1 + 1);
  return param_1;
}



/* Entry: 10731be58; end: 10731be97;  */

void FUN_10731be58(void)

{
  func_0x00010731cb28();
  func_0x00010731ca0c(&PTR_DAT_1109a0b90);
  func_0x00010731bb74();
  return;
}



/* Entry: 10731be98; end: 10731bf1b;  */

undefined8 FUN_10731be98(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010731bebc(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10731bf1c; end: 10731bf2f;  */

void FUN_10731bf1c(void)

{
  func_0x00010731bef0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731bf30; end: 10731bf63;  */

undefined8 FUN_10731bf30(undefined8 param_1)

{
  func_0x00010731cf8c();
  FUN_10731c160();
  return param_1;
}



/* Entry: 10731bf64; end: 10731bf87;  */

undefined8 FUN_10731bf64(long param_1,undefined8 param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010731c85c(&PTR_SUB_1109a0c10,param_2,param_1 + 8);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010731cc18();
  func_0x0001072d488c();
  return param_2;
}



/* Entry: 10731bf88; end: 10731c12b;  */

void FUN_10731bf88(undefined1 *param_1,long param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  undefined8 uVar2;
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [8];
  long lStack_220;
  undefined1 auStack_218 [112];
  char cStack_1a8;
  undefined1 auStack_1a0 [136];
  long lStack_118;
  undefined1 auStack_110 [112];
  byte bStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [56];
  undefined8 uStack_48;
  
  func_0x00010054bdbc();
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uStack_48 = extraout_x8;
  func_0x0001072a5348(auStack_80,param_2 + 0x18);
  func_0x00010724ef84(auStack_240,auStack_80);
  FUN_1073a6910(auStack_228,uVar2,auStack_240);
  lStack_118 = 0;
  auStack_110[0] = 0;
  bStack_a0 = 0;
  if (cStack_1a8 != '\0') {
    func_0x00010731bae4(auStack_110,auStack_218);
    FUN_10731c1a8(auStack_218);
  }
  lStack_118 = lStack_220;
  func_0x00010731cf04(bStack_a0);
  if ((extraout_x8_00 & 1) == 0) {
    func_0x00010731d328();
  }
  else {
    func_0x00010731d328();
    if (lStack_220 != 0) {
      if ((bStack_a0 & 1) == 0) {
        func_0x00010731d2a4(auStack_98);
        func_0x0001004c3cd0(auStack_1a0,&UNK_10f40a221,auStack_98);
        func_0x00010731cc5c();
        func_0x00010731cbbc();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
      }
      func_0x00010731bb00(param_1,auStack_110);
      uVar1 = 1;
      goto LAB_10731c090;
    }
  }
  uVar1 = 0;
  *param_1 = 0;
LAB_10731c090:
  param_1[0x70] = uVar1;
  func_0x00010731bb34(auStack_110);
  FUN_10731c1f8(auStack_228);
  func_0x00010731cb14();
  func_0x000104c2f714();
  func_0x00010054c318(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010731cbbc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
    func_0x00010731bb34(auStack_110);
    FUN_10731c1f8(auStack_228);
    func_0x00010731cb14();
    func_0x000104c2f714(auStack_80);
    func_0x00010731c938();
    func_0x00010731c9b0();
    func_0x00010731c970();
    func_0x00010731c874();
    return;
  }
  return;
}



/* Entry: 10731c12c; end: 10731c153;  */

void FUN_10731c12c(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_1109a0c80);
  func_0x00010731c874();
  return;
}



/* Entry: 10731c154; end: 10731c15f;  */

undefined ** FUN_10731c154(void)

{
  return &PTR_DAT_1109a0c80;
}



/* Entry: 10731c160; end: 10731c1a7;  */

undefined8 FUN_10731c160(undefined8 param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010731c85c(&PTR_SUB_1109a0c10);
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010731cc18();
  func_0x0001072d488c();
  return param_1;
}



/* Entry: 10731c1a8; end: 10731c1cb;  */

void FUN_10731c1a8(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x00010731bb54();
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



/* Entry: 10731c1cc; end: 10731c1f7;  */

void FUN_10731c1cc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010054c994();
  func_0x0001002a8208();
  func_0x00010731cb78();
  *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
  return;
}



/* Entry: 10731c1f8; end: 10731c243;  */

void FUN_10731c1f8(void)

{
  undefined8 uVar1;
  int extraout_w8;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  
  func_0x00010731cd64();
  if (extraout_w8 != 0) {
    FUN_10731c1a8(unaff_x19 + 2);
  }
  func_0x00010731bb34(unaff_x20 | 8);
  uVar1 = *unaff_x19;
  *unaff_x19 = 0;
  func_0x00010054cac4(uVar1);
  func_0x00010731bb34(unaff_x19 + 2);
  return;
}



/* Entry: 10731c244; end: 10731c2a3;  */

void FUN_10731c244(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010731c960();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010731c8d0(uVar1);
  return;
}



/* Entry: 10731c2a4; end: 10731c2b7;  */

void FUN_10731c2a4(void)

{
  func_0x00010731c278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731c2b8; end: 10731c2ef;  */

undefined8 FUN_10731c2b8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x230;
  __Znwm(0x230);
  FUN_10731c728();
  return uVar1;
}



/* Entry: 10731c2f0; end: 10731c313;  */

void FUN_10731c2f0(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_register_00005008;
  
  func_0x00010731d114(param_3,param_2 + 8);
  func_0x00010731c8b4(&PTR_SUB_1109a0ca0);
  *(undefined8 *)(param_3 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_3 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x000107319cc4(unaff_x20 + 0x18,unaff_x21 + 0x10);
  func_0x0001072d488c(unaff_x20 + 0x38,unaff_x21 + 0x30);
  return;
}



/* Entry: 10731c314; end: 10731c6f3;  */

void FUN_10731c314(long param_1,long param_2)

{
  ulong *puVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined1 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  code *extraout_x8_00;
  long *plVar7;
  ulong *unaff_x21;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  undefined1 auStack_280 [16];
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined2 uStack_268;
  undefined1 uStack_266;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong uStack_250;
  undefined1 uStack_248;
  undefined1 uStack_240;
  undefined1 uStack_238;
  undefined1 auStack_230 [24];
  undefined1 uStack_218;
  undefined1 uStack_210;
  undefined1 uStack_20c;
  undefined8 uStack_208;
  undefined1 auStack_200 [136];
  undefined1 uStack_178;
  undefined1 auStack_170 [128];
  long lStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined ***pppuStack_d0;
  undefined1 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined1 *puStack_a8;
  ulong uStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong *puStack_78;
  undefined1 auStack_70 [32];
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010054bdbc();
  uStack_48 = extraout_x8;
  if ((*(byte *)(param_2 + 0x70) & 1) == 0) {
    auStack_200[0] = 0;
    uStack_178 = 0;
    func_0x00010731d1c4();
    func_0x00010731cee4();
  }
  else {
    auStack_280[0] = 2;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    auStack_230[0] = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_20c = 0;
    uStack_208 = 0;
    uStack_270 = 0;
    uStack_269 = 0;
    uStack_268 = 0;
    uStack_266 = 0;
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = uStack_250 & 0xffffffffffffff00;
    func_0x0001002a969c(auStack_230);
    func_0x00010731ce78();
    uStack_248 = *(undefined1 *)(param_2 + 0x40);
    lVar2 = param_2 + 0x48;
    func_0x0001073166b8(lVar2,*(long *)(param_2 + 0x68) != 0,auStack_280);
    FUN_1075281c8(auStack_170,auStack_280);
    lStack_f0 = lVar2;
    func_0x00010731b38c(auStack_200,auStack_170);
    func_0x00010731d1c4();
    func_0x00010731cee4();
    func_0x00010724b340(auStack_170);
    unaff_x21 = *(ulong **)(param_1 + 8);
    func_0x0001072a5348(auStack_170,param_1 + 0x38);
    puVar3 = auStack_170;
    func_0x00010724ef84(&uStack_298);
    func_0x00010789a00c();
    in_ZR = *(char *)((long)unaff_x21 + 0x53) == '\x01';
    if ((bool)in_ZR) {
      puVar4 = unaff_x21 + 0x1f;
      __ZNSt3__115recursive_mutex4lockEv();
      uStack_b0 = uStack_288;
      uStack_b8 = uStack_290;
      uStack_c0 = uStack_298;
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      puStack_a8 = puVar3;
      func_0x00010731d1e8();
      uVar6 = uStack_b0;
      puVar4[3] = uStack_b8;
      puVar4[2] = uStack_c0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c0 = 0;
      puVar4[4] = uVar6;
      puVar4[5] = (ulong)puVar3;
      puVar4[1] = (ulong)(unaff_x21 + 0x27);
      uVar6 = unaff_x21[0x27];
      *puVar4 = uVar6;
      *(ulong **)(uVar6 + 8) = puVar4;
      unaff_x21[0x27] = (ulong)puVar4;
      unaff_x21[0x29] = unaff_x21[0x29] + 1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c0);
      in_ZR = unaff_x21[0x29] == 1;
      if ((bool)in_ZR) {
        uVar6 = unaff_x21[8];
        func_0x00010731874c(&uStack_90,unaff_x21[4],unaff_x21[5]);
        uStack_d8 = uStack_88;
        uStack_e0 = uStack_90;
        uStack_90 = 0;
        uStack_88 = 0;
        pppuStack_d0 = &ppuStack_e8;
        ppuStack_e8 = &PTR_DAT_1109a0a90;
        uStack_c0 = uStack_c0 & 0xffffffffffffff00;
        uStack_a0 = uStack_a0 & 0xffffffffffffff00;
        auStack_70[0] = 0;
        uStack_50 = 0;
        func_0x00010731d138();
        (*extraout_x8_00)(uVar6,&ppuStack_e8,&uStack_c0,auStack_70,&UNK_10f40a1f7,0xe,0x100000001);
        func_0x00010730e9d0(auStack_70);
        func_0x00010730b1b0(&uStack_c0);
        func_0x00010730ea24(&ppuStack_e8);
        func_0x0001072aefa0(&uStack_90);
      }
      __ZNSt3__115recursive_mutex6unlockEv(unaff_x21 + 0x1f);
    }
    else {
      plVar7 = (long *)unaff_x21[8];
      puVar4 = unaff_x21 + 4;
      puVar1 = unaff_x21 + 5;
      unaff_x21 = &uStack_c0;
      puVar5 = &uStack_c0;
      func_0x00010731874c(puVar5,*puVar4,*puVar1);
      uStack_a0 = uStack_288;
      puStack_a8 = (undefined1 *)uStack_290;
      uStack_b0 = uStack_298;
      uStack_290 = 0;
      uStack_288 = 0;
      uStack_298 = 0;
      puStack_78 = (ulong *)0x0;
      puStack_98 = puVar3;
      func_0x00010731cac0();
      *puVar5 = (ulong)&PTR_DAT_1109a0b10;
      puVar5[2] = uStack_b8;
      puVar5[1] = uStack_c0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      puVar5[4] = (ulong)puStack_a8;
      puVar5[3] = uStack_b0;
      uVar6 = uStack_a0;
      uStack_b0 = 0;
      puStack_a8 = (undefined1 *)0x0;
      uStack_a0 = 0;
      puVar5[5] = uVar6;
      puVar5[6] = (ulong)puVar3;
      auStack_70[0] = 0;
      uStack_50 = 0;
      ppuStack_e8 = (undefined **)((ulong)ppuStack_e8 & 0xffffffffffffff00);
      uStack_c8 = 0;
      puStack_78 = puVar5;
      (**(code **)(*plVar7 + 0x10))(plVar7,&uStack_90,auStack_70,&ppuStack_e8,&UNK_10f40a1f7,0xe,0);
      func_0x00010730e9d0(&ppuStack_e8);
      func_0x00010730b1b0(auStack_70);
      func_0x00010731cfa4();
      func_0x000107316c18(&uStack_c0);
    }
    func_0x00010731c9bc();
    func_0x000104c2f714(auStack_170);
    func_0x00010724b340();
  }
  func_0x00010054c318(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010730e9d0(auStack_70);
  func_0x00010730b1b0(&uStack_c0);
  func_0x00010730ea24(&ppuStack_e8);
  func_0x0001072aefa0(&uStack_90);
  __ZNSt3__115recursive_mutex6unlockEv(unaff_x21 + 0x1f);
  func_0x00010731c9bc();
  func_0x000104c2f714(auStack_170);
  func_0x00010724b340(auStack_280);
  func_0x00010731c938();
  func_0x00010731c9b0();
  func_0x00010731c970();
  func_0x00010731c874();
  return;
}



/* Entry: 10731c6f4; end: 10731c71b;  */

void FUN_10731c6f4(undefined8 param_1)

{
  func_0x00010731c9b0();
  func_0x00010731c970(param_1,&PTR_DAT_1109a0d10);
  func_0x00010731c874();
  return;
}



/* Entry: 10731c71c; end: 10731c727;  */

undefined ** FUN_10731c71c(void)

{
  return &PTR_DAT_1109a0d10;
}



/* Entry: 10731c728; end: 10731c79f;  */

void FUN_10731c728(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_register_00005008;
  
  func_0x00010731d114();
  func_0x00010731c8b4(&PTR_SUB_1109a0ca0);
  *(undefined8 *)(param_2 + 0x10) = in_register_00005008;
  *(undefined8 *)(param_2 + 8) = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010731c9a0();
    } while (extraout_w10 != 0);
  }
  func_0x000107319cc4(unaff_x20 + 0x18,unaff_x21 + 0x10);
  func_0x0001072d488c(unaff_x20 + 0x38,unaff_x21 + 0x30);
  return;
}



/* Entry: 10731c7a0; end: 10731c7d3;  */

void FUN_10731c7a0(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010731c960();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010731c8d0(uVar1);
  return;
}



/* Entry: 10731c7d4; end: 10731d3af;  */

void FUN_10731c7d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010731c7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340d510)();
  return;
}



/* Entry: 10731d3b0; end: 10731d43f;  */

long * FUN_10731d3b0(long *param_1,long param_2,long param_3,long param_4,long *param_5,long param_6
                    )

{
  long lVar1;
  long *plVar2;
  int extraout_w10;
  long lVar3;
  
  func_0x00010724b408(param_1);
  param_1[2] = (long)param_1;
  plVar2 = (long *)*param_1;
  lVar1 = plVar2[1];
  lVar3 = *plVar2;
  param_1[4] = plVar2[1];
  param_1[3] = lVar3;
  if (lVar1 != 0) {
    do {
      func_0x00010731e89c();
    } while (extraout_w10 != 0);
  }
  param_1[5] = (long)&UNK_10e52b660;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_2;
  param_1[10] = param_3;
  param_1[0xb] = param_4;
  lVar1 = *param_5;
  param_1[0xd] = param_5[1];
  param_1[0xc] = lVar1;
  *param_5 = 0;
  param_5[1] = 0;
  param_1[0xe] = param_6;
  param_1[0xf] = (long)param_1;
  param_1[0x10] = 0;
  return param_1;
}



/* Entry: 10731d440; end: 10731d4bb;  */

void FUN_10731d440(long param_1,long param_2)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x28;
  FUN_10731d4bc();
  lStack_30 = lVar1;
  lStack_28 = param_2;
  while (lStack_30 != 0) {
    FUN_10731d4e4(param_1,lStack_28 + 0x38);
    func_0x00010731d524(&lStack_30);
  }
  func_0x00010725b238(param_1 + 0x78);
  func_0x00010725b6e0(param_1 + 0x60);
  FUN_10731d6e4(param_1 + 0x28);
  func_0x00010724ae28(param_1 + 0x18);
  func_0x00010724b54c(param_1);
  return;
}



/* Entry: 10731d4bc; end: 10731d4e3;  */

undefined1  [16] FUN_10731d4bc(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10731d864(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10731d4e4; end: 10731d597;  */

void FUN_10731d4e4(long param_1,undefined4 *param_2)

{
  (**(code **)(**(long **)(param_1 + 0x50) + 0x18))(*(long **)(param_1 + 0x50),*param_2);
                    /* WARNING: Could not recover jumptable at 0x00010731d520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 2) + 0xa8))(*(long **)(param_2 + 2),param_2[1]);
  return;
}



/* Entry: 10731d598; end: 10731d59f;  */

long FUN_10731d598(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  
  puVar5 = (undefined8 *)*param_1;
  func_0x00010731e880();
  Hint_Prefetch(*puVar5,0,2,0);
  func_0x0001072a02f8(*puVar5);
  lVar7 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar8 = *unaff_x20;
  uVar6 = uVar8 >> 0xc ^ (ulong)puVar5 >> 7;
  bVar3 = (byte)puVar5;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar13 = *(undefined8 *)(uVar8 + uVar6);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                            CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                     CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                              CONCAT12(-(cVar15 ==
                                                                        (char)(uVar12 >> 0x10)),
                                                                       CONCAT11(-(cVar14 ==
                                                                                 (char)(uVar12 >> 8)
                                                                                 ),-((char)uVar13 ==
                                                                                    (char)uVar12))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
      iVar4 = (int)&stack0xffffffffffffff70;
      FUN_10731d6cc(&stack0xffffffffffffff70,uVar1 + uVar10 * 0x78);
      if (iVar4 != 0) {
        return *unaff_x20 + uVar10;
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6;
  }
  return 0;
}



/* Entry: 10731d5a0; end: 10731d5d3;  */

long FUN_10731d5a0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  
  func_0x00010731e880();
  Hint_Prefetch(*param_1,0,2,0);
  func_0x0001072a02f8(*param_1);
  lVar6 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar7 = *unaff_x20;
  uVar5 = uVar7 >> 0xc ^ (ulong)param_1 >> 7;
  bVar3 = (byte)param_1;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      iVar4 = (int)&stack0xffffffffffffff70;
      FUN_10731d6cc(&stack0xffffffffffffff70,uVar1 + uVar9 * 0x78);
      if (iVar4 != 0) {
        return *unaff_x20 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 10731d5d4; end: 10731d6cb;  */

long FUN_10731d5d4(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  undefined8 uStack_90;
  ulong *puStack_88;
  
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ param_3 >> 7;
  bVar3 = (byte)param_3;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      uStack_90 = param_2;
      puStack_88 = param_1;
      iVar4 = (int)&uStack_90;
      FUN_10731d6cc(&uStack_90,uVar1 + uVar9 * 0x78);
      if (iVar4 != 0) {
        return *param_1 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 10731d6cc; end: 10731d6e3;  */

bool FUN_10731d6cc(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001072856b0(param_2,*param_1,param_2 + 0x38);
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  uVar1 = unaff_x19[1];
  puVar2 = (undefined8 *)*unaff_x19;
  if (-1 < (char)*(byte *)((long)unaff_x19 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)unaff_x19 + 0x17);
    puVar2 = unaff_x19;
  }
  iVar3 = (int)&stack0xffffffffffffffe0;
  if (unaff_x20 == uVar1) {
    func_0x000100067218(&stack0xffffffffffffffe0,puVar2,uVar1);
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



/* Entry: 10731d6e4; end: 10731d713;  */

void FUN_10731d6e4(void)

{
  long extraout_x8;
  
  func_0x00010731e900();
  if (extraout_x8 != 0) {
    FUN_10731d714();
    func_0x00010731e8c0();
  }
  return;
}



/* Entry: 10731d714; end: 10731d77b;  */

void FUN_10731d714(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x00010731d750(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x50;
  }
  return;
}



/* Entry: 10731d77c; end: 10731d79b;  */

void FUN_10731d77c(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_10731d79c();
  }
  return;
}



/* Entry: 10731d79c; end: 10731d803;  */

long FUN_10731d79c(long param_1)

{
  func_0x000104c2f714(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 10731d804; end: 10731d863;  */

undefined8 *
FUN_10731d804(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  func_0x0001072bb3b4();
  uVar2 = uVar1;
  func_0x0001005d466c();
  uVar3 = uVar2;
  func_0x0001005d466c();
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  param_1[4] = param_4;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 10731d864; end: 10731d89f;  */

void FUN_10731d864(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010731e8d4();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10731d8a0; end: 10731d97f;  */

undefined8 FUN_10731d8a0(undefined8 param_1,long param_2,long param_3)

{
  FUN_10731d9bc(param_1,param_2,param_2 + param_3 * 0x58);
  return param_1;
}



/* Entry: 10731d980; end: 10731d987;  */

void FUN_10731d980(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010731e880(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    FUN_10731de40();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10731d988; end: 10731d9bb;  */

void FUN_10731d988(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010731e880();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x58;
    FUN_10731de40();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10731d9bc; end: 10731d9cb;  */

void FUN_10731d9bc(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  
  uVar1 = (param_3 - param_2) / 0x58;
  uVar2 = uVar1;
  func_0x00010731e900();
  if ((ulong)((extraout_x8 - *param_1) / 0x58) < uVar2) {
    FUN_10731daec();
    FUN_10731db70();
    func_0x00010731db24();
  }
  else {
    lVar3 = *(long *)(unaff_x19 + 8) - *param_1;
    if (uVar1 <= (ulong)(lVar3 / 0x58)) {
      FUN_10731dccc(param_2,param_3);
      lVar3 = unaff_x19;
      func_0x00010731e880();
      lVar3 = *(long *)(lVar3 + 8);
      while (lVar3 != unaff_x19) {
        lVar3 = lVar3 + -0x58;
        FUN_10731de40();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_10731dccc(param_2,param_2 + lVar3);
    param_2 = param_2 + lVar3;
  }
  lVar3 = unaff_x19 + 0x10;
  func_0x00010731dbd0(lVar3,param_2,param_3,*(undefined8 *)(unaff_x19 + 8));
  *(long *)(unaff_x19 + 8) = lVar3;
  return;
}



/* Entry: 10731d9cc; end: 10731dab7;  */

void FUN_10731d9cc(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  uVar1 = param_4;
  func_0x00010731e900();
  if ((ulong)((extraout_x8 - *param_1) / 0x58) < uVar1) {
    FUN_10731daec();
    FUN_10731db70();
    func_0x00010731db24();
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 8) - *param_1;
    if (param_4 <= (ulong)(lVar2 / 0x58)) {
      FUN_10731dccc(param_2,param_3);
      lVar2 = unaff_x19;
      func_0x00010731e880();
      lVar2 = *(long *)(lVar2 + 8);
      while (lVar2 != unaff_x19) {
        lVar2 = lVar2 + -0x58;
        FUN_10731de40();
      }
      *(long *)(unaff_x20 + 8) = unaff_x19;
      return;
    }
    FUN_10731dccc(param_2,param_2 + lVar2);
    param_2 = param_2 + lVar2;
  }
  lVar2 = unaff_x19 + 0x10;
  func_0x00010731dbd0(lVar2,param_2,param_3,*(undefined8 *)(unaff_x19 + 8));
  *(long *)(unaff_x19 + 8) = lVar2;
  return;
}



/* Entry: 10731dab8; end: 10731daeb;  */

void FUN_10731dab8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x00010731dbd0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10731daec; end: 10731db6f;  */

void FUN_10731daec(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10731d980();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10731db70; end: 10731dbe3;  */

long * FUN_10731db70(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if ((long *)0x2e8ba2e8ba2e8ba < param_2) {
    FUN_10731ddd8();
    FUN_10731dbe4();
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x58;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x1745d1745d1745c < uVar1) {
    plVar2 = (long *)0x2e8ba2e8ba2e8ba;
  }
  return plVar2;
}



/* Entry: 10731dbe4; end: 10731dc4b;  */

long FUN_10731dbe4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_38;
  
  func_0x00010731e90c();
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    func_0x00010731d8c8(param_4,param_2);
    param_4 = uStack_38 + 0x58;
    uStack_38 = param_4;
  }
  func_0x00010731e8cc();
  return param_4;
}



/* Entry: 10731dc4c; end: 10731dc7b;  */

long FUN_10731dc4c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10731dc7c(param_1);
  }
  return param_1;
}



/* Entry: 10731dc7c; end: 10731dc9b;  */

void FUN_10731dc7c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x58;
    FUN_10731de40();
  }
  return;
}



/* Entry: 10731dc9c; end: 10731dccb;  */

void FUN_10731dc9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x58;
    FUN_10731de40();
  }
  return;
}



/* Entry: 10731dccc; end: 10731dcf3;  */

void FUN_10731dccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10731dcf4(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10731dcf4; end: 10731dd4f;  */

undefined1  [16] FUN_10731dcf4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    FUN_10731dd50(lVar1,param_2);
    lVar1 = lVar1 + 0x58;
    param_4 = param_4 + 0x58;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 10731dd50; end: 10731ddd7;  */

void FUN_10731dd50(undefined4 *param_1,undefined4 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010731e880();
  *param_1 = *param_2;
  func_0x000107262f3c(param_1 + 2,param_2 + 2);
  func_0x00010731dd8c(unaff_x20 + 0x40,unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
  return;
}



/* Entry: 10731ddd8; end: 10731ddeb;  */

void FUN_10731ddd8(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_10731de10();
  return;
}



/* Entry: 10731ddec; end: 10731de0f;  */

void FUN_10731ddec(void)

{
  FUN_10731de10();
  return;
}



/* Entry: 10731de10; end: 10731de3f;  */

long FUN_10731de10(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar1 = param_2 * 0x58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  func_0x00010730b220(param_1 + 0x40);
  func_0x000104c2f714(param_1 + 8);
  return param_1;
}



/* Entry: 10731de40; end: 10731decf;  */

long FUN_10731de40(long param_1)

{
  func_0x00010730b220(param_1 + 0x40);
  func_0x000104c2f714(param_1 + 8);
  return param_1;
}



/* Entry: 10731ded0; end: 10731df6f;  */

long FUN_10731ded0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  FUN_10731db70(param_1,(param_1[1] - *param_1) / 0x58 + 1);
  FUN_10731dff8(auStack_58,plVar1,(param_1[1] - *param_1) / 0x58,param_1 + 2);
  func_0x00010731d8c8(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x58;
  FUN_10731df70(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x00010731e144(auStack_58);
  return lVar2;
}



/* Entry: 10731df70; end: 10731dff7;  */

void FUN_10731df70(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010731e880();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x58) * 0x58;
  FUN_10731e044(param_1 + 2,*param_1,param_1[1],lVar2);
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



/* Entry: 10731dff8; end: 10731e043;  */

long * FUN_10731dff8(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10731ddec();
  }
  lVar1 = param_4 + param_3 * 0x58;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x58;
  return param_1;
}



/* Entry: 10731e044; end: 10731e0d7;  */

void FUN_10731e044(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_38;
  
  lVar1 = param_2;
  func_0x00010731e90c();
  for (; lVar1 != param_3; lVar1 = lVar1 + 0x58) {
    func_0x00010731e108(param_4,lVar1);
    param_4 = uStack_38 + 0x58;
    uStack_38 = param_4;
  }
  func_0x00010731e0d8(param_1,param_2,param_3);
  func_0x00010731e8cc();
  return;
}



/* Entry: 10731e0d8; end: 10731e16f;  */

void FUN_10731e0d8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    FUN_10731de40();
  }
  return;
}



/* Entry: 10731e170; end: 10731e177;  */

void FUN_10731e170(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010731e880(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x58;
    FUN_10731de40();
  }
  return;
}



/* Entry: 10731e178; end: 10731e1ab;  */

void FUN_10731e178(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010731e880();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x58;
    FUN_10731de40();
  }
  return;
}



/* Entry: 10731e1ac; end: 10731e1f7;  */

void FUN_10731e1ac(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x78) != 0xffffffff) {
    (*(code *)(&PTR_FUN_1109a0d20)[*(uint *)(param_1 + 0x78)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  return;
}



/* Entry: 10731e1f8; end: 10731e20b;  */

long FUN_10731e1f8(undefined8 param_1,long param_2)

{
  func_0x00010726e078(param_2 + 0x50);
  func_0x00010726dd08(param_2 + 0x40);
  func_0x00010731e248(param_2 + 0x20);
  func_0x00010731e26c(param_2 + 8);
  return param_2;
}



/* Entry: 10731e20c; end: 10731e297;  */

long FUN_10731e20c(long param_1)

{
  func_0x00010726e078(param_1 + 0x50);
  func_0x00010726dd08(param_1 + 0x40);
  func_0x00010731e248(param_1 + 0x20);
  func_0x00010731e26c(param_1 + 8);
  return param_1;
}



/* Entry: 10731e298; end: 10731e2af;  */

void FUN_10731e298(undefined8 *param_1)

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



/* Entry: 10731e2b0; end: 10731e2e7;  */

undefined8 * FUN_10731e2b0(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000105536ef4(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
  return param_1;
}



/* Entry: 10731e2e8; end: 10731e303;  */

long FUN_10731e2e8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3e == 0) {
    lVar1 = param_2 << 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10731e298(param_1);
  }
  return param_1;
}



/* Entry: 10731e304; end: 10731e32f;  */

long FUN_10731e304(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10731e298(param_1);
  }
  return param_1;
}



/* Entry: 10731e330; end: 10731e34f;  */

void FUN_10731e330(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10731e350(param_1,param_2,&uStack_11);
  return;
}



/* Entry: 10731e350; end: 10731e45f;  */

long * FUN_10731e350(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lStack_50;
  undefined8 *puStack_48;
  
  FUN_10731e460(param_1,0,param_2,param_2,param_3);
  puVar9 = *(undefined8 **)(param_2 + 0x18);
  if (puVar9 != (undefined8 *)0x0) {
    puVar6 = puVar9;
    FUN_10731e4a8(param_1);
    FUN_10731e678();
    lStack_50 = param_2;
    while (lStack_50 != 0) {
      puVar7 = puVar6;
      puStack_48 = puVar6;
      FUN_10731e624();
      plVar5 = param_1;
      func_0x00010ae6c8b4(param_1,puVar7);
      bVar4 = (byte)puVar7 & 0x7f;
      lVar1 = param_1[1];
      uVar2 = param_1[2];
      lVar8 = *param_1;
      *(byte *)(lVar8 + (long)plVar5) = bVar4;
      *(byte *)(lVar8 + ((long)plVar5 - 7U & uVar2) + (uVar2 & 7)) = bVar4;
      puVar7 = (undefined8 *)(lVar1 + (long)plVar5 * 0xc);
      uVar3 = *(undefined4 *)(puVar6 + 1);
      *puVar7 = *puVar6;
      *(undefined4 *)(puVar7 + 1) = uVar3;
      FUN_10731e6dc(&lStack_50);
      puVar6 = puStack_48;
    }
    param_1[3] = (long)puVar9;
    *(long *)(*param_1 + -8) = *(long *)(*param_1 + -8) - (long)puVar9;
  }
  return param_1;
}



/* Entry: 10731e460; end: 10731e4a7;  */

undefined8 * FUN_10731e460(undefined8 *param_1,long param_2)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    param_1[2] = 0xffffffffffffffff >> (LZCOUNT(param_2) & 0x3fU);
    FUN_10731e4fc(param_1);
  }
  return param_1;
}



/* Entry: 10731e4a8; end: 10731e4fb;  */

void FUN_10731e4a8(long *param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  if (param_2 <= (ulong)(*(long *)(*param_1 + -8) + param_1[3])) {
    return;
  }
  if (param_2 == 7) {
    lVar4 = 8;
  }
  else {
    lVar4 = (long)(param_2 - 1) / 7 + param_2;
  }
  uVar6 = 0xffffffffffffffff >> (LZCOUNT(lVar4) & 0x3fU);
  if (lVar4 == 0) {
    uVar6 = 1;
  }
  lVar1 = *param_1;
  puVar9 = (undefined8 *)param_1[1];
  lVar10 = param_1[2];
  param_1[2] = uVar6;
  FUN_10731e4fc();
  lVar11 = param_1[1];
  for (lVar4 = 0; lVar10 != lVar4; lVar4 = lVar4 + 1) {
    if (-1 < *(char *)(lVar1 + lVar4)) {
      puVar5 = puVar9;
      FUN_10731e624();
      plVar3 = param_1;
      func_0x000100061de0(param_1,puVar5);
      bVar2 = (byte)puVar5 & 0x7f;
      uVar6 = param_1[2];
      lVar8 = *param_1;
      *(byte *)(lVar8 + (long)plVar3) = bVar2;
      *(byte *)(lVar8 + ((long)plVar3 - 7U & uVar6) + (uVar6 & 7)) = bVar2;
      puVar5 = (undefined8 *)(lVar11 + (long)plVar3 * 0xc);
      uVar7 = *puVar9;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar9 + 1);
      *puVar5 = uVar7;
    }
    puVar9 = (undefined8 *)((long)puVar9 + 0xc);
  }
  if (lVar10 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
  return;
}



/* Entry: 10731e4fc; end: 10731e547;  */

void FUN_10731e4fc(void)

{
  undefined1 *puVar1;
  long extraout_x8;
  long *unaff_x19;
  ulong uVar2;
  undefined1 uStack_21;
  
  func_0x00010731e900();
  uVar2 = extraout_x8 + 0x13U & 0xfffffffffffffffc;
  puVar1 = &uStack_21;
  func_0x000100063148(puVar1,uVar2 + extraout_x8 * 0xc);
  *unaff_x19 = (long)(puVar1 + 8);
  unaff_x19[1] = (long)(puVar1 + uVar2);
  func_0x0001000631d0();
  return;
}



/* Entry: 10731e548; end: 10731e623;  */

void FUN_10731e548(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = *param_1;
  puVar8 = (undefined8 *)param_1[1];
  lVar9 = param_1[2];
  param_1[2] = param_2;
  FUN_10731e4fc();
  lVar11 = param_1[1];
  for (lVar10 = 0; lVar9 != lVar10; lVar10 = lVar10 + 1) {
    if (-1 < *(char *)(lVar1 + lVar10)) {
      puVar4 = puVar8;
      FUN_10731e624();
      plVar3 = param_1;
      func_0x000100061de0(param_1,puVar4);
      bVar2 = (byte)puVar4 & 0x7f;
      uVar5 = param_1[2];
      lVar7 = *param_1;
      *(byte *)(lVar7 + (long)plVar3) = bVar2;
      *(byte *)(lVar7 + ((long)plVar3 - 7U & uVar5) + (uVar5 & 7)) = bVar2;
      puVar4 = (undefined8 *)(lVar11 + (long)plVar3 * 0xc);
      uVar6 = *puVar8;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar8 + 1);
      *puVar4 = uVar6;
    }
    puVar8 = (undefined8 *)((long)puVar8 + 0xc);
  }
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10731e624; end: 10731e633;  */

ulong FUN_10731e624(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined1 uStack_21;
  
  puVar2 = &uStack_21;
  func_0x00010784b234(puVar2,param_1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = puVar2 + 0x110c8acd8;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         (long)(puVar2 + 0x110c8acd8) * -0x622015f714c7d297;
}



/* Entry: 10731e634; end: 10731e677;  */

ulong FUN_10731e634(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined1 uStack_21;
  
  puVar2 = &uStack_21;
  func_0x00010784b234(puVar2);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = puVar2 + param_1;
  return SUB168(auVar1 * ZEXT816(0x9ddfea08eb382d69),8) ^
         (long)(puVar2 + param_1) * -0x622015f714c7d297;
}



/* Entry: 10731e678; end: 10731e69f;  */

undefined1  [16] FUN_10731e678(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10731e6a0(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10731e6a0; end: 10731e6db;  */

void FUN_10731e6a0(undefined8 *param_1)

{
  char *pcVar1;
  char *extraout_x8;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    func_0x00010731e8d4();
    pcVar1 = extraout_x8;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10731e6dc; end: 10731e70f;  */

long * FUN_10731e6dc(long *param_1)

{
  param_1[1] = param_1[1] + 0xc;
  *param_1 = *param_1 + 1;
  FUN_10731e6a0();
  return param_1;
}



/* Entry: 10731e710; end: 10731e7b7;  */

undefined2 * FUN_10731e710(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_10731e2b0(param_1 + 4,param_2 + 4);
  FUN_10731e330(param_1 + 0x10,param_2 + 0x10);
  FUN_10731e7b8(param_1 + 0x20,param_2 + 0x20);
  func_0x00010726fe1c(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x34);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  return param_1;
}



/* Entry: 10731e7b8; end: 10731e7cf;  */

void FUN_10731e7b8(void)

{
  func_0x0001072c0298();
  return;
}



/* Entry: 10731e7d0; end: 10731e83b;  */

undefined2 * FUN_10731e7d0(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  FUN_10731e330(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10731e83c; end: 10731e91f;  */

bool FUN_10731e83c(undefined8 *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x00010727a3f0(param_2,*param_1,param_2 + 0x38);
  _strlen();
  func_0x00010014c53c();
  func_0x00010014c2bc();
  func_0x000104c2fcd4();
  func_0x000104c2fcf0();
  iVar1 = (int)&stack0xffffffffffffffe0;
  if (unaff_x21 == unaff_x19) {
    func_0x000100067218(&stack0xffffffffffffffe0,unaff_x20,unaff_x19);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10731e920; end: 10731e9cf;  */

undefined8 * FUN_10731e920(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_1109a0d58;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010731fa20();
    } while (extraout_w10 != 0);
  }
  FUN_1073af27c(&uStack_40,0,0);
  param_1[4] = uStack_38;
  param_1[3] = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010724b8b8(&uStack_40);
  func_0x00010726ed14(param_1 + 5);
  param_1[7] = param_1;
  return param_1;
}



/* Entry: 10731e9d0; end: 10731ebe3;  */

void FUN_10731e9d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  int extraout_w10;
  long *plVar2;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [32];
  undefined1 uStack_258;
  undefined1 uStack_240;
  undefined1 uStack_238;
  undefined1 uStack_220;
  undefined1 uStack_218;
  undefined1 uStack_1e0;
  undefined1 uStack_1d8;
  undefined1 uStack_1d4;
  long lStack_1d0;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [32];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [32];
  undefined1 auStack_138 [24];
  undefined8 *puStack_120;
  undefined1 auStack_118 [208];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = *(long **)(param_1 + 0x18);
  lStack_1d0 = param_1;
  FUN_10731ecb0(auStack_1c8);
  func_0x00010731f100(auStack_1b0,param_3);
  uStack_188 = *(undefined8 *)(param_1 + 0x30);
  uStack_190 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    do {
      func_0x00010731fa20();
    } while (extraout_w10 != 0);
  }
  uStack_180 = *(undefined8 *)(param_1 + 0x38);
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_288 = 0;
  uStack_280 = 0;
  func_0x00010725b1d4(&uStack_288);
  func_0x00010725b1d4(&uStack_298);
  FUN_10731ec50(&uStack_178,&lStack_1d0);
  puStack_120 = (undefined8 *)0x0;
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *puVar1 = &PTR_SUB_1109a0da8;
  puVar1[2] = uStack_188;
  puVar1[1] = uStack_190;
  uStack_190 = 0;
  uStack_188 = 0;
  puVar1[4] = uStack_178;
  puVar1[3] = uStack_180;
  FUN_10731ecb0(puVar1 + 5,auStack_170);
  FUN_10731f90c(puVar1 + 8,auStack_158);
  puStack_120 = puVar1;
  FUN_10731ef9c(auStack_278,&UNK_10f40a24c);
  uStack_258 = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d4 = 0;
  func_0x000107273dcc(auStack_118,auStack_138,auStack_278);
  (**(code **)(*plVar2 + 0x18))(plVar2,auStack_118);
  func_0x000107273efc(auStack_118);
  func_0x000107273f24(auStack_278);
  func_0x0001006393ec(auStack_138);
  FUN_10731ebe4(&uStack_190);
  func_0x00010731ec0c(&lStack_1d0);
  func_0x00010731fa88(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107273efc(auStack_118);
    func_0x000107273f24(auStack_278);
    func_0x0001006393ec(auStack_138);
    FUN_10731ebe4(&uStack_190);
    func_0x00010731ec0c(&lStack_1d0);
    do {
      func_0x00010731fa5c();
      func_0x00010731ef68(&uStack_188);
    } while( true );
  }
  return;
}



/* Entry: 10731ebe4; end: 10731ec37;  */

undefined8 FUN_10731ebe4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010731ec0c(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10731ec38; end: 10731ec3b;  */

undefined8 * FUN_10731ec38(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1109a0d58;
  plVar1 = param_1 + 5;
  if (*plVar1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(plVar1);
  func_0x0001072508cc(plVar1);
  func_0x00010724b8b8(param_1 + 3);
  func_0x0001072ac928(param_1 + 1);
  return param_1;
}



/* Entry: 10731ec3c; end: 10731ec4f;  */

void FUN_10731ec3c(void)

{
  func_0x00010731f0a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10731ec50; end: 10731ecaf;  */

undefined8 * FUN_10731ec50(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10731ecb0(param_1 + 1,param_2 + 1);
  func_0x00010731f100(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 10731ecb0; end: 10731edd7;  */

undefined8 * FUN_10731ecb0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar6 = *param_2;
  lVar1 = param_2[1];
  uStack_78 = 0;
  lVar2 = lVar1 - lVar6;
  puStack_80 = param_1;
  if (lVar2 != 0) {
    uVar5 = lVar2 / 0xa8;
    if (0x186186186186186 < uVar5) {
      FUN_10731edd8();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10731edb4);
      (*pcVar3)();
    }
    puVar4 = param_1 + 2;
    FUN_10731edec();
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + uVar5 * 0x15;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    uStack_58 = 0;
    puStack_70 = param_1 + 2;
    puStack_50 = puVar4;
    for (; puStack_48 = puVar4, lVar6 != lVar1; lVar6 = lVar6 + 0xa8) {
      FUN_10731efe8(puVar4,lVar6);
      puVar4 = puStack_48 + 0x15;
    }
    uStack_58 = 1;
    FUN_10731ee40(&puStack_70);
    param_1[1] = puVar4;
  }
  uStack_78 = 1;
  func_0x00010731eec0(&puStack_80);
  return param_1;
}



/* Entry: 10731edd8; end: 10731edeb;  */

void FUN_10731edd8(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  FUN_10731ee10();
  return;
}



/* Entry: 10731edec; end: 10731ee0f;  */

void FUN_10731edec(void)

{
  FUN_10731ee10();
  return;
}



/* Entry: 10731ee10; end: 10731ee3f;  */

long FUN_10731ee10(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x186186186186187) {
    lVar1 = param_2 * 0xa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10731ee70(param_1);
  }
  return param_1;
}



/* Entry: 10731ee40; end: 10731ee6f;  */

long FUN_10731ee40(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10731ee70(param_1);
  }
  return param_1;
}



/* Entry: 10731ee70; end: 10731ee8f;  */

void FUN_10731ee70(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xa8;
    FUN_10731f070();
  }
  return;
}



/* Entry: 10731ee90; end: 10731ef27;  */

void FUN_10731ee90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0xa8;
    FUN_10731f070();
  }
  return;
}



/* Entry: 10731ef28; end: 10731ef2f;  */

void FUN_10731ef28(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xa8;
    FUN_10731f070();
  }
  param_1[1] = lVar2;
  return;
}


