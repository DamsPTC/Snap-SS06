/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107753c80; end: 107753d9f;  */

void FUN_107753c80(undefined8 *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)*param_1;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
    for (; (plVar3 != (long *)0x0 && (param_2 != (long *)param_3)); param_2 = (long *)*param_2) {
      *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(param_2 + 2);
      func_0x0001072a9124(plVar3 + 3,param_2 + 3);
      plVar3 = (long *)*plVar3;
      func_0x0001077542e8();
    }
    func_0x0001077542f4();
  }
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    puVar1 = (undefined8 *)0x38;
    __Znwm();
    uStack_48 = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
    puStack_58 = puVar1;
    puStack_50 = param_1 + 2;
    func_0x0001072a94f8(puVar1 + 3,param_2 + 3);
    uStack_48 = CONCAT71(uStack_48._1_7_,1);
    puVar1[1] = (ulong)*(uint *)(puVar1 + 2);
    func_0x0001077542e8();
    puStack_58 = (undefined8 *)0x0;
    func_0x0001072a9488(&puStack_58);
  }
  return;
}



/* Entry: 1077543ac; end: 107754983;  */

void FUN_1077543ac(long *param_1,long *param_2,long param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  code *extraout_x9;
  code *extraout_x9_00;
  long *plVar10;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [16];
  undefined1 uStack_238;
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [16];
  undefined1 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  byte bStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint5 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [144];
  char cStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined1 auStack_b0 [4];
  undefined1 uStack_ac;
  byte bStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  puVar9 = &uStack_270;
  func_0x000107755288();
  plVar10 = param_2 + 1;
  plVar7 = plVar10;
  uStack_58 = extraout_x8;
  (**(code **)(*param_2 + 0x20))();
  uVar6 = (long)plVar7 - 5U == 0xfffffffffffffffd;
  if ((long)plVar7 - 5U < 0xfffffffffffffffe) {
    func_0x000107878fec(auStack_168,(long)plVar7 + -1);
    func_0x0001004c3cd0(auStack_1b8,&UNK_10f42574c,auStack_168);
    func_0x00010756a668(param_3,auStack_1b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
    func_0x0001077552a0();
    func_0x000107755320();
LAB_1077547c8:
    func_0x000107755274(uStack_58);
    if ((bool)uVar6) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x000107755314();
    (*extraout_x9)(auStack_168,plVar10,1);
    auStack_1e8[0] = 0;
    uStack_1d8 = 0;
    auStack_b0[0] = 0;
    uStack_ac = 0;
    func_0x00010777067c(&uStack_1d0,param_3,auStack_168,1,param_4,auStack_1e8,auStack_b0);
    func_0x0001072c9854(auStack_1e8);
    func_0x0001072f5f6c(auStack_168);
    if ((bStack_1c0 & 1) == 0) {
      func_0x00010002b838(auStack_200,&UNK_10f4257b4);
      func_0x00010756a69c(param_3,auStack_200,1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_200);
      func_0x000107755320();
LAB_1077547c0:
      func_0x0001072c95d0(&uStack_1d0);
      goto LAB_1077547c8;
    }
    auStack_b0[0] = 0;
    bStack_78 = 0;
    uVar6 = plVar7 == (long *)0x4;
    if ((bool)uVar6) {
      func_0x000107755314();
      func_0x0001077552f8(&lStack_d0);
      (**(code **)(lStack_d0 + 0x68))(auStack_168,&uStack_c8);
      func_0x0001072e948c(auStack_b0,auStack_168);
      func_0x00010724b3d8(auStack_168);
      func_0x0001072f5f6c(&lStack_d0);
      if ((bStack_78 & 1) != 0) goto LAB_1077545b8;
      func_0x000107755314();
      func_0x0001077552f8(&uStack_70);
      func_0x00010754c3ec(&lStack_d0,&uStack_70);
      func_0x0001004c3cd0(auStack_168,&UNK_10f4257d9,&lStack_d0);
      func_0x00010048a6c8(auStack_218,auStack_168,&UNK_10f417b93);
      func_0x00010756a69c(param_3,auStack_218,2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_218);
      func_0x0001077552a0();
      func_0x0001077552b8();
      func_0x000107755304();
      func_0x000107755320();
LAB_1077547b8:
      func_0x00010724b3d8(auStack_b0);
      goto LAB_1077547c0;
    }
    func_0x000100060964(auStack_168,&DAT_10f2f5ad9);
    func_0x00010729515c(auStack_b0,auStack_168);
    func_0x000104c2f714(auStack_168);
LAB_1077545b8:
    func_0x00010724ef84(&lStack_d0,auStack_b0);
    func_0x0001000e3098(auStack_230,&lStack_d0,1);
    func_0x000107754984(auStack_168,param_4,auStack_230);
    func_0x0001000e30f4(auStack_230);
    func_0x0001077552b8();
    uVar1 = 2;
    if (plVar7 != (long *)0x3) {
      uVar1 = 3;
    }
    func_0x000107755314();
    (*extraout_x9_00)(&uStack_70,plVar10,uVar1);
    uVar6 = cStack_d8 == '\0';
    puVar2 = auStack_168;
    if ((bool)uVar6) {
      puVar2 = param_4;
    }
    auStack_248[0] = 0;
    uStack_238 = 0;
    uVar4 = (ulong)_uStack_180 >> 0x28;
    uVar3 = (uint)_uStack_180;
    uStack_180 = (uint5)(uVar3 & 0xffffff00);
    _uStack_180 = CONCAT35((int3)uVar4,uStack_180);
    func_0x00010777067c(&lStack_d0,param_3,&uStack_70,uVar1,puVar2,auStack_248,&uStack_180);
    func_0x0001072c9854(auStack_248);
    func_0x000107755304();
    if ((bStack_c0 & 1) == 0) {
      func_0x00010002b838(auStack_260,&UNK_10f42580c);
      func_0x00010756a69c(param_3,auStack_260,uVar1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_260);
      func_0x000107755320();
LAB_1077547a8:
      func_0x0001072c95d0(&lStack_d0);
      func_0x00010752b5b8(auStack_168);
      goto LAB_1077547b8;
    }
    uVar6 = *(char *)(param_3 + 0x51) == '\x01';
    if (!(bool)uVar6) {
      if ((bStack_78 & 1) == 0) {
        func_0x000104bdc2c8();
        goto LAB_107754800;
      }
      puVar9 = (undefined8 *)0xb8;
      __Znwm();
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_DAT_1109d4a10;
      uStack_68 = uStack_1c8;
      uStack_70 = uStack_1d0;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      uStack_178 = uStack_c8;
      _uStack_180 = lStack_d0;
      lStack_d0 = 0;
      uStack_c8 = 0;
      func_0x000107754f20(puVar9 + 3,&uStack_70,auStack_b0,&uStack_180);
      func_0x0001077552b0();
      func_0x00010775530c();
      *param_1 = (long)(puVar9 + 3);
      param_1[1] = (long)puVar9;
      uStack_190 = 0;
      uStack_188 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      puVar9 = &uStack_190;
LAB_1077547a4:
      func_0x000107755018(puVar9);
      goto LAB_1077547a8;
    }
    if ((bStack_78 & 1) != 0) {
      puVar8 = (undefined8 *)0xb8;
      __Znwm();
      uStack_178 = uStack_c8;
      _uStack_180 = lStack_d0;
      uStack_68 = uStack_1c8;
      uStack_70 = uStack_1d0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_DAT_1109d4a10;
      uStack_1d0 = 0;
      uStack_1c8 = 0;
      lStack_d0 = 0;
      uStack_c8 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      func_0x000107754f20(puVar8 + 3,&uStack_70,auStack_b0,&uStack_180);
      func_0x0001077552b0();
      func_0x00010775530c();
      func_0x0001002a8234(puVar8 + 8,param_4 + 0x40);
      func_0x0001072c9b9c(&uStack_1a0);
      func_0x0001072c9b9c(&uStack_190);
      *param_1 = (long)(puVar8 + 3);
      param_1[1] = (long)puVar8;
      uStack_270 = 0;
      uStack_268 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      goto LAB_1077547a4;
    }
  }
  func_0x000104bdc2c8();
LAB_107754800:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x107754804);
  (*pcVar5)();
}



/* Entry: 107754ea0; end: 107754eaf;  */

long FUN_107754ea0(long param_1)

{
  func_0x000100060934(param_1,&DAT_10f33c7a6);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 107755044; end: 10775505f;  */

bool FUN_107755044(long param_1)

{
  func_0x000107755060();
  return param_1 != 0;
}



/* Entry: 107755618; end: 10775567f;  */

/* WARNING: Possible PIC construction at 0x000107755dc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107755dcc) */
/* WARNING: Removing unreachable block (ram,0x000107755dec) */
/* WARNING: Removing unreachable block (ram,0x000107755e00) */
/* WARNING: Removing unreachable block (ram,0x000107755de0) */
/* WARNING: Removing unreachable block (ram,0x0001077563c8) */

long * FUN_107755618(undefined8 param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined4 *extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x9;
  code *extraout_x9_00;
  undefined8 uVar13;
  long *plStack_4c8;
  long *plStack_4c0;
  undefined1 *puStack_4b8;
  long *plStack_4b0;
  long *plStack_4a8;
  undefined8 **ppuStack_4a0;
  undefined *puStack_498;
  undefined1 auStack_490 [64];
  long *plStack_450;
  long *plStack_448;
  undefined8 **ppuStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long alStack_420 [3];
  undefined1 auStack_408 [64];
  undefined8 uStack_3c8;
  undefined1 *puStack_3c0;
  long *plStack_3b8;
  undefined1 **ppuStack_3b0;
  undefined *puStack_3a8;
  long lStack_3a0;
  undefined8 uStack_398;
  long alStack_390 [2];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [16];
  undefined1 uStack_358;
  long lStack_350;
  undefined8 uStack_348;
  byte bStack_340;
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [16];
  undefined1 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  byte bStack_2c0;
  long alStack_2b8 [3];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined1 auStack_258 [144];
  char cStack_1c8;
  undefined1 auStack_1c0 [56];
  byte bStack_188;
  uint5 uStack_180;
  undefined8 uStack_178;
  uint uStack_138;
  uint uStack_134;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [112];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  puVar11 = auStack_a0;
  plVar6 = (long *)auStack_a0;
  plVar7 = (long *)auStack_a0;
  func_0x0001077562f4(param_1);
  auStack_a0[0] = 0;
  uStack_30 = 0;
  puVar12 = (undefined1 *)0x1;
  uStack_28 = extraout_x8;
  func_0x0001074d1ee8();
  func_0x000107296ad0();
  func_0x0001077562e0(uStack_28);
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x000107296ad0();
  func_0x000107756310();
  puStack_a8 = &DAT_107755680;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x0001077562f4();
  plVar6 = plVar7 + 1;
  plVar8 = plVar6;
  uStack_f8 = extraout_x8_01;
  (**(code **)(*plVar7 + 0x20))();
  uVar5 = (undefined1 *)((long)plVar8 + -5) == (undefined1 *)0xfffffffffffffffd;
  if ((undefined1 *)((long)plVar8 + -5) < (undefined1 *)0xfffffffffffffffe) {
    func_0x000107878fec(auStack_258,(undefined1 *)((long)plVar8 + -1));
    func_0x0001004c3cd0(alStack_2b8,&UNK_10f425834,auStack_258);
    func_0x00010756a668(puVar11,alStack_2b8);
    plVar7 = alStack_2b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010775634c();
    func_0x0001077563e0();
    goto code_r0x000107755ab0;
  }
  func_0x0001077563d4();
  (*extraout_x9)(auStack_258,plVar6,1);
  auStack_2e8[0] = 0;
  uStack_2d8 = 0;
  uStack_138 = uStack_138 & 0xffffff00;
  uStack_134 = uStack_134 & 0xffffff00;
  func_0x00010777067c(&lStack_2d0,puVar11,auStack_258,1,puVar12,auStack_2e8,&uStack_138);
  func_0x0001072c9854(auStack_2e8);
  func_0x0001072f5f6c(auStack_258);
  if ((bStack_2c0 & 1) == 0) {
code_r0x000107755814:
    func_0x0001077563e0();
  }
  else {
    uVar5 = (*(uint *)(lStack_2d0 + 0x18) & 0xfffffffe) == 6;
    if (!(bool)uVar5) {
      func_0x00010002b838(auStack_300,&UNK_10f42589a);
      func_0x00010756a668(puVar11,auStack_300);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_300);
      goto code_r0x000107755814;
    }
    auStack_1c0[0] = 0;
    bStack_188 = 0;
    uVar5 = plVar8 == (long *)0x4;
    if ((bool)uVar5) {
      func_0x0001077563d4();
      func_0x000107756390(&uStack_138);
      (**(code **)(CONCAT44(uStack_134,uStack_138) + 0x68))(auStack_258,auStack_130);
      func_0x0001072e948c(auStack_1c0,auStack_258);
      func_0x00010724b3d8(auStack_258);
      func_0x0001077563a4();
      if ((bStack_188 & 1) != 0) {
        func_0x00010724ef84(&uStack_138,auStack_1c0);
        uVar13 = 3;
        goto code_r0x000107755830;
      }
      func_0x0001077563d4();
      func_0x000107756390(&uStack_180);
      func_0x00010754c3ec(&uStack_138,&uStack_180);
      func_0x0001004c3cd0(auStack_258,&UNK_10f4258b8,&uStack_138);
      func_0x00010048a6c8(auStack_318,auStack_258,&UNK_10f417b93);
      func_0x00010756a69c(puVar11,auStack_318,2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_318);
      func_0x00010775634c();
      func_0x00010775633c();
      func_0x0001072f5f6c(&uStack_180);
      func_0x0001077563e0();
    }
    else {
      func_0x00010002b838(&uStack_138,&DAT_10f2f5ad9);
      uVar13 = 2;
code_r0x000107755830:
      func_0x0001000e3098(auStack_330,&uStack_138,1);
      func_0x000107754984(auStack_258,puVar12,auStack_330);
      func_0x0001000e30f4(auStack_330);
      func_0x00010775633c();
      func_0x0001077563d4();
      (*extraout_x9_00)(&uStack_138,plVar6,uVar13);
      uVar5 = cStack_1c8 == '\0';
      puVar1 = auStack_258;
      if ((bool)uVar5) {
        puVar1 = puVar12;
      }
      auStack_368[0] = 0;
      uStack_358 = 0;
      uVar3 = (ulong)_uStack_180 >> 0x28;
      uVar2 = (uint)_uStack_180;
      uStack_180 = (uint5)(uVar2 & 0xffffff00);
      _uStack_180 = CONCAT35((int3)uVar3,uStack_180);
      func_0x00010777067c(&lStack_350,puVar11,&uStack_138,uVar13,puVar1,auStack_368,&uStack_180);
      func_0x0001072c9854(auStack_368);
      func_0x0001077563a4();
      if ((bStack_340 & 1) == 0) {
        func_0x00010002b838(auStack_380,&UNK_10f4258f4);
        func_0x00010756a69c(puVar11,auStack_380,uVar13);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_380);
        func_0x0001077563e0();
      }
      else {
        uVar5 = puVar11[0x51] == '\x01';
        if ((bool)uVar5) {
          __Znwm(0xc0);
          func_0x000107756354();
          uVar13 = uStack_2c8;
          lVar4 = lStack_2d0;
          lStack_290 = lStack_2d0;
          uStack_288 = uStack_2c8;
          lStack_2d0 = 0;
          uStack_2c8 = 0;
          func_0x000107263b58(&uStack_180,auStack_1c0);
          plVar6 = (long *)(puVar11 + 0x18);
          uStack_398 = uStack_348;
          lStack_3a0 = lStack_350;
          lStack_350 = 0;
          uStack_348 = 0;
          lStack_270 = lVar4;
          uStack_268 = uVar13;
          lStack_290 = 0;
          uStack_288 = 0;
          func_0x0001072649c8(&uStack_138,&uStack_180);
          uStack_278 = uStack_398;
          lStack_280 = lStack_3a0;
          uStack_2a0 = 0;
          uStack_298 = 0;
          func_0x000107755fa0(plVar6,&lStack_270,&uStack_138,&lStack_280);
          func_0x0001072c9b9c(&lStack_280);
          func_0x000107756344();
          func_0x000107756324();
          func_0x0001002a8234(puVar11 + 0x40,puVar12 + 0x40);
          func_0x0001072c9b9c(&uStack_2a0);
          func_0x00010724b3d8(&uStack_180);
          func_0x0001072c9b9c(&lStack_290);
          *extraout_x8_00 = (long)plVar6;
          extraout_x8_00[1] = (long)puVar11;
          alStack_390[0] = 0;
          alStack_390[1] = 0;
          *(undefined1 *)(extraout_x8_00 + 2) = 1;
          plVar7 = alStack_390;
        }
        else {
          __Znwm(0xc0);
          func_0x000107756354();
          uStack_178 = uStack_2c8;
          _uStack_180 = lStack_2d0;
          lStack_2d0 = 0;
          uStack_2c8 = 0;
          func_0x000107263b58(&uStack_138,auStack_1c0);
          puVar12 = puVar11 + 0x18;
          uStack_268 = uStack_348;
          lStack_270 = lStack_350;
          lStack_350 = 0;
          uStack_348 = 0;
          func_0x000107755fa0(puVar12,&uStack_180,&uStack_138,&lStack_270);
          func_0x000107756324();
          func_0x000107756344();
          func_0x0001072c9b9c(&uStack_180);
          *extraout_x8_00 = (long)puVar12;
          extraout_x8_00[1] = (long)puVar11;
          lStack_280 = 0;
          uStack_278 = 0;
          *(undefined1 *)(extraout_x8_00 + 2) = 1;
          plVar7 = &lStack_280;
        }
        func_0x0001077560c8(plVar7);
      }
      func_0x0001072c95d0(&lStack_350);
      func_0x00010752b5b8(auStack_258);
    }
    func_0x00010724b3d8(auStack_1c0);
  }
  plVar7 = &lStack_2d0;
  func_0x0001072c95d0();
code_r0x000107755ab0:
  func_0x0001077562e0(uStack_f8);
  if ((bool)uVar5) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x000107755f0c(plVar6);
  func_0x0001072c9b9c(&uStack_2a0);
  func_0x00010724b3d8(&uStack_180);
  func_0x0001072c9b9c(&lStack_290);
  __ZNSt3__119__shared_weak_countD2Ev(puVar11);
  __ZdlPv();
  func_0x0001072c95d0(&lStack_350);
  func_0x00010752b5b8(auStack_258);
  func_0x00010724b3d8(auStack_1c0);
  plVar8 = &lStack_2d0;
  func_0x0001072c95d0();
  func_0x000107756310();
  puStack_3a8 = &DAT_107755c6c;
  puStack_3c0 = puVar11;
  plStack_3b8 = plVar7;
  ppuStack_3b0 = &puStack_b0;
  func_0x0001077562f4();
  alStack_420[0] = 0;
  alStack_420[1] = 0;
  alStack_420[2] = 0;
  uStack_3c8 = extraout_x8_03;
  func_0x0001077563ac();
  func_0x0001074d2254(alStack_420,auStack_408);
  func_0x000104c2f714(auStack_408);
  func_0x0001077563ac();
  func_0x000107756378();
  func_0x00010775639c();
  uVar5 = (char)plVar8[0x12] == '\x01';
  if ((bool)uVar5) {
    plVar7 = plVar8 + 0xb;
    func_0x00010725ffc4(plVar7);
    func_0x0001077560f4(alStack_420,plVar7);
  }
  func_0x0001077563ac();
  func_0x000107756378();
  func_0x00010775639c();
  func_0x000107327958(&uStack_430,alStack_420);
  *extraout_x8_02 = 0;
  *(undefined8 *)(extraout_x8_02 + 4) = uStack_428;
  *(undefined8 *)(extraout_x8_02 + 2) = uStack_430;
  uStack_430 = 0;
  uStack_428 = 0;
  func_0x000104c33108(&uStack_430);
  plVar7 = alStack_420;
  func_0x000107269124();
  func_0x0001077562e0(uStack_3c8);
  if ((bool)uVar5) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x00010775639c();
  plVar9 = alStack_420;
  func_0x000107269124();
  func_0x000107756310();
  puStack_438 = &DAT_107755d8c;
  plVar10 = plVar9;
  plStack_450 = plVar8;
  plStack_448 = plVar7;
  ppuStack_440 = &ppuStack_3b0;
  func_0x0001077562f4();
  (**(code **)(*plVar10 + 0x40))(auStack_490);
  puStack_498 = &UNK_107755dcc;
  plStack_4c8 = (long *)0x0;
  plStack_4c0 = plVar6;
  puStack_4b8 = puVar12;
  plStack_4b0 = plVar8;
  plStack_4a8 = plVar9;
  ppuStack_4a0 = &ppuStack_440;
  func_0x0001073f26dc(&plStack_4c8,auStack_490);
  func_0x00010756af98(&plStack_4c8,plVar9 + 9);
  func_0x000107756258(&plStack_4c8,plVar9 + 0xb);
  func_0x00010756af98(&plStack_4c8,plVar9 + 0x13);
  return plStack_4c8;
}



/* Entry: 107755efc; end: 107755f0b;  */

long FUN_107755efc(long param_1)

{
  func_0x000100060934(param_1,&UNK_10f425911);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 107756134; end: 10775616b;  */

void FUN_107756134(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107756208(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x40;
  return;
}



/* Entry: 107756734; end: 107756ccf;  */

/* WARNING: Possible PIC construction at 0x000107756b60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107756b64) */
/* WARNING: Removing unreachable block (ram,0x000107756b8c) */
/* WARNING: Removing unreachable block (ram,0x000107756bb0) */
/* WARNING: Removing unreachable block (ram,0x000107756c1c) */
/* WARNING: Removing unreachable block (ram,0x000107756c54) */
/* WARNING: Removing unreachable block (ram,0x000107756c80) */
/* WARNING: Removing unreachable block (ram,0x000107756ccc) */
/* WARNING: Removing unreachable block (ram,0x000107756d3c) */
/* WARNING: Removing unreachable block (ram,0x000107756d50) */
/* WARNING: Removing unreachable block (ram,0x000107756db0) */
/* WARNING: Removing unreachable block (ram,0x000107756dc0) */
/* WARNING: Removing unreachable block (ram,0x000107756de4) */
/* WARNING: Removing unreachable block (ram,0x000107756e54) */
/* WARNING: Removing unreachable block (ram,0x000107756e64) */
/* WARNING: Removing unreachable block (ram,0x000107756e40) */
/* WARNING: Removing unreachable block (ram,0x000107756da0) */

long * FUN_107756734(long *param_1,long *param_2,long param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long *plVar8;
  undefined8 extraout_x8;
  code *extraout_x9;
  code *extraout_x9_00;
  long *plVar9;
  undefined8 uVar10;
  long alStack_2d0 [2];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [16];
  undefined1 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  byte bStack_280;
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [16];
  undefined1 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  byte bStack_220;
  long alStack_218 [3];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1b8 [144];
  char cStack_128;
  undefined1 auStack_120 [56];
  byte bStack_e8;
  uint5 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_98;
  uint uStack_94;
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  func_0x0001077570b8();
  plVar9 = param_2 + 1;
  plVar8 = plVar9;
  uStack_58 = extraout_x8;
  (**(code **)(*param_2 + 0x20))();
  uVar7 = (long)plVar8 - 5U == 0xfffffffffffffffd;
  if ((long)plVar8 - 5U < 0xfffffffffffffffe) {
    func_0x000107878fec(auStack_1b8,(long)plVar8 + -1);
    func_0x0001004c3cd0(alStack_218,&UNK_10f425916,auStack_1b8);
    func_0x00010756a668(param_3,alStack_218);
    plVar8 = alStack_218;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x000107757104();
    func_0x000107757190();
    goto LAB_107756b2c;
  }
  func_0x000107757184();
  (*extraout_x9)(auStack_1b8,plVar9,1);
  auStack_248[0] = 0;
  uStack_238 = 0;
  uStack_98 = uStack_98 & 0xffffff00;
  uStack_94 = uStack_94 & 0xffffff00;
  func_0x00010777067c(&lStack_230,param_3,auStack_1b8,1,param_4,auStack_248,&uStack_98);
  func_0x0001072c9854(auStack_248);
  func_0x0001072f5f6c(auStack_1b8);
  if ((bStack_220 & 1) == 0) {
    func_0x000107757190();
  }
  else {
    auStack_120[0] = 0;
    bStack_e8 = 0;
    uVar7 = plVar8 == (long *)0x4;
    if ((bool)uVar7) {
      func_0x000107757184();
      func_0x000107757148(&uStack_98);
      (**(code **)(CONCAT44(uStack_94,uStack_98) + 0x68))(auStack_1b8,auStack_90);
      func_0x0001072e948c(auStack_120,auStack_1b8);
      func_0x00010724b3d8(auStack_1b8);
      func_0x00010775715c();
      if ((bStack_e8 & 1) != 0) {
        func_0x00010724ef84(&uStack_98,auStack_120);
        uVar10 = 3;
        goto LAB_1077568ac;
      }
      func_0x000107757184();
      func_0x000107757148(&uStack_e0);
      func_0x00010754c3ec(&uStack_98,&uStack_e0);
      func_0x0001004c3cd0(auStack_1b8,&UNK_10f4258b8,&uStack_98);
      func_0x00010048a6c8(auStack_260,auStack_1b8,&UNK_10f417b93);
      func_0x00010756a69c(param_3,auStack_260,2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_260);
      func_0x000107757104();
      func_0x0001077570fc();
      func_0x0001072f5f6c(&uStack_e0);
      func_0x000107757190();
    }
    else {
      func_0x00010002b838(&uStack_98,&DAT_10f2f5ad9);
      uVar10 = 2;
LAB_1077568ac:
      func_0x0001000e3098(auStack_278,&uStack_98,1);
      func_0x000107754984(auStack_1b8,param_4,auStack_278);
      func_0x0001000e30f4(auStack_278);
      func_0x0001077570fc();
      func_0x000107757184();
      (*extraout_x9_00)(&uStack_98,plVar9,uVar10);
      uVar7 = cStack_128 == '\0';
      puVar1 = auStack_1b8;
      if ((bool)uVar7) {
        puVar1 = param_4;
      }
      auStack_2a8[0] = 0;
      uStack_298 = 0;
      uVar3 = (ulong)_uStack_e0 >> 0x28;
      uVar2 = (uint)_uStack_e0;
      uStack_e0 = (uint5)(uVar2 & 0xffffff00);
      _uStack_e0 = CONCAT35((int3)uVar3,uStack_e0);
      func_0x00010777067c(&lStack_290,param_3,&uStack_98,uVar10,puVar1,auStack_2a8,&uStack_e0);
      func_0x0001072c9854(auStack_2a8);
      func_0x00010775715c();
      if ((bStack_280 & 1) == 0) {
        func_0x00010002b838(auStack_2c0,&UNK_10f4258f4);
        func_0x00010756a69c(param_3,auStack_2c0,uVar10);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c0);
        func_0x000107757190();
      }
      else {
        uVar7 = *(char *)(param_3 + 0x51) == '\x01';
        if ((bool)uVar7) {
          __Znwm(0xc0);
          func_0x00010775710c();
          uVar6 = uStack_228;
          lVar5 = lStack_230;
          lStack_1f0 = lStack_230;
          uStack_1e8 = uStack_228;
          lStack_230 = 0;
          uStack_228 = 0;
          func_0x000107263b58(&uStack_e0,auStack_120);
          uVar10 = uStack_288;
          lVar4 = lStack_290;
          plVar9 = (long *)(param_3 + 0x18);
          lStack_290 = 0;
          uStack_288 = 0;
          lStack_1d0 = lVar5;
          uStack_1c8 = uVar6;
          lStack_1f0 = 0;
          uStack_1e8 = 0;
          func_0x0001072649c8(&uStack_98,&uStack_e0);
          uStack_1d8 = uVar10;
          lStack_1e0 = lVar4;
          uStack_200 = 0;
          uStack_1f8 = 0;
          func_0x000107756f74(plVar9,&lStack_1d0,&uStack_98,&lStack_1e0);
          func_0x0001072c9b9c(&lStack_1e0);
          func_0x0001077570f4();
          func_0x0001077570ec();
          func_0x0001002a8234(param_3 + 0x40,param_4 + 0x40);
          func_0x0001072c9b9c(&uStack_200);
          func_0x00010724b3d8(&uStack_e0);
          func_0x0001072c9b9c(&lStack_1f0);
          *param_1 = (long)plVar9;
          param_1[1] = param_3;
          alStack_2d0[0] = 0;
          alStack_2d0[1] = 0;
          *(undefined1 *)(param_1 + 2) = 1;
          plVar8 = alStack_2d0;
        }
        else {
          __Znwm(0xc0);
          func_0x00010775710c();
          uStack_d8 = uStack_228;
          _uStack_e0 = lStack_230;
          lStack_230 = 0;
          uStack_228 = 0;
          func_0x000107263b58(&uStack_98,auStack_120);
          uStack_1c8 = uStack_288;
          lStack_1d0 = lStack_290;
          lStack_290 = 0;
          uStack_288 = 0;
          func_0x000107756f74(param_3 + 0x18,&uStack_e0,&uStack_98,&lStack_1d0);
          func_0x0001077570ec();
          func_0x0001077570f4();
          func_0x0001072c9b9c(&uStack_e0);
          *param_1 = param_3 + 0x18;
          param_1[1] = param_3;
          lStack_1e0 = 0;
          uStack_1d8 = 0;
          *(undefined1 *)(param_1 + 2) = 1;
          plVar8 = &lStack_1e0;
        }
        func_0x00010775706c(plVar8);
      }
      func_0x0001072c95d0(&lStack_290);
      func_0x00010752b5b8(auStack_1b8);
    }
    func_0x00010724b3d8(auStack_120);
  }
  plVar8 = &lStack_230;
  func_0x0001072c95d0();
LAB_107756b2c:
  func_0x000107757098(uStack_58);
  if ((bool)uVar7) {
    return plVar8;
  }
  ___stack_chk_fail();
  *plVar9 = (long)&PTR_DAT_1109d4b38;
  func_0x0001072c9b9c(plVar9 + 0x13);
  func_0x00010724b3d8(plVar9 + 0xb);
  func_0x0001072c9b9c(plVar9 + 9);
  *plVar9 = (long)&PTR_DAT_1109d4888;
  func_0x0001001148fc(plVar9 + 5);
  func_0x0001072c9884(plVar9 + 2);
  return plVar9;
}



/* Entry: 107756f4c; end: 107756f4f;  */

void FUN_107756f4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d4bc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107757268; end: 1077572df;  */

void FUN_107757268(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 auStack_60 [6];
  int iStack_30;
  
  if ((*(byte *)(param_2 + 0x25) & 1) == 0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    func_0x00010775719c(auStack_60);
    if (iStack_30 == 0) {
      uVar1 = 1;
    }
    else {
      if (iStack_30 != 1) {
        auStack_60[0] = 0;
      }
      uVar1 = 2;
      if (iStack_30 != 1) {
        uVar1 = 0;
      }
    }
    *param_1 = auStack_60[0];
    *(undefined4 *)(param_1 + 1) = uVar1;
    func_0x00010756c434(auStack_60);
  }
  return;
}



/* Entry: 1077575ec; end: 107757667;  */

void FUN_1077575ec(undefined8 param_1,long param_2)

{
  int extraout_w8;
  long unaff_x19;
  undefined1 auStack_60 [48];
  
  func_0x0001077579f8();
  if (extraout_w8 == 2) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(param_2 + 0x18,unaff_x19 + 0x18);
    return;
  }
  func_0x0001077576c4(auStack_60);
  func_0x000107757668();
  func_0x0001077579c8();
  return;
}



/* Entry: 107757970; end: 107757a07;  */

void FUN_107757970(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined8 *)*param_1 = *param_2;
  return;
}



/* Entry: 107758c04; end: 107758d57;  */

long * FUN_107758c04(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined1 auStack_130 [24];
  undefined8 *puStack_118;
  undefined1 auStack_110 [56];
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [120];
  undefined8 uStack_48;
  
  lVar2 = param_1;
  func_0x00010775931c();
  uStack_48 = extraout_x8;
  (**(code **)(**(long **)(lVar2 + 0x58) + 0x48))();
  (**(code **)(**(long **)(param_1 + 0x48) + 0x48))
            (*(long **)(param_1 + 0x48),param_2,param_3,param_4);
  uVar1 = *(char *)(param_3 + 400) == '\x01';
  if ((bool)uVar1) {
    lVar2 = param_3;
    func_0x00010756ec34(param_3);
    auStack_110[0] = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puVar3 = (undefined8 *)0x28;
    __Znwm();
    *puVar3 = &PTR_DAT_1109d4e58;
    puVar3[1] = param_1;
    puVar3[2] = param_2;
    puVar3[3] = param_3;
    puVar3[4] = param_4;
    puStack_118 = puVar3;
    func_0x000107757aa4(auStack_c8,param_1,lVar2,auStack_110,auStack_130);
    func_0x00010727f7f8(auStack_c0);
    func_0x000107758f48(auStack_130);
    plVar4 = (long *)auStack_110;
    func_0x00010724b3d8(plVar4);
    func_0x000107759308(uStack_48);
    if ((bool)uVar1) {
      return plVar4;
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x118);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x48);
    func_0x000107759308(uStack_48);
    if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x000107758d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return plVar4;
    }
  }
  ___stack_chk_fail();
  func_0x0001077594cc();
  func_0x000107758f48();
  plVar4 = (long *)auStack_110;
  func_0x00010724b3d8();
  func_0x000107759334();
  *plVar4 = (long)&PTR_DAT_1109d4cf0;
  func_0x0001072c9b9c(plVar4 + 0x23);
  func_0x00010724b3d8(plVar4 + 0x1b);
  func_0x000104c2f714(plVar4 + 0x14);
  func_0x000104c2f714(plVar4 + 0xd);
  func_0x0001072c9b9c(plVar4 + 0xb);
  func_0x0001072c9b9c(plVar4 + 9);
  *plVar4 = (long)&PTR_DAT_1109d4888;
  func_0x0001001148fc(plVar4 + 5);
  func_0x0001072c9884(plVar4 + 2);
  return plVar4;
}



/* Entry: 107758ec0; end: 107758f03;  */

void FUN_107758ec0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d4d78;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1077590f8; end: 107759107;  */

void FUN_1077590f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d4e08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1077592cc; end: 107759307;  */

void FUN_1077592cc(long param_1)

{
  func_0x000107751334();
  *(undefined1 *)(param_1 + 400) = 1;
  return;
}



/* Entry: 10775ac04; end: 10775afa7;  */

void FUN_10775ac04(undefined4 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  undefined8 *puVar3;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [64];
  undefined8 uStack_70;
  
  func_0x00010775c2a0();
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_70 = extraout_x8;
  func_0x000100060964(auStack_b0,"format");
  func_0x0001074d2254(&uStack_c8,auStack_b0);
  func_0x000104c2f714(auStack_b0);
  puVar1 = *(undefined8 **)(param_2 + 0x50);
  for (puVar3 = *(undefined8 **)(param_2 + 0x48); uVar2 = puVar3 == puVar1, !(bool)uVar2;
      puVar3 = puVar3 + 0x20) {
    func_0x00010775c384(*puVar3);
    func_0x00010775c310();
    func_0x0001072aad1c(&uStack_c8,auStack_b0);
    func_0x00010775c2e0();
    puStack_e8 = &UNK_10e52b660;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    if (*(char *)(puVar3 + 4) == '\x01') {
      func_0x00010775c384(puVar3[2]);
      func_0x00010775c310();
      func_0x00010775c290();
      func_0x00010775afb8();
      func_0x00010775c2e0();
    }
    if (*(char *)(puVar3 + 7) == '\x01') {
      func_0x00010775c384(puVar3[5]);
      func_0x00010775c310();
      func_0x00010775c290();
      func_0x00010775afb8();
      func_0x00010775c2e0();
    }
    if (*(char *)(puVar3 + 10) == '\x01') {
      func_0x00010775c384(puVar3[8]);
      func_0x00010775c310();
      func_0x00010775c290();
      func_0x00010775afb8();
      func_0x00010775c2e0();
    }
    if (*(char *)(puVar3 + 0xd) == '\x01') {
      func_0x00010775c384(puVar3[0xb]);
      func_0x00010775c310();
      func_0x00010775c290();
      func_0x00010775afb8();
      func_0x00010775c2e0();
    }
    if (*(char *)(puVar3 + 0x10) == '\x01') {
      func_0x00010775c384(puVar3[0xe]);
      func_0x00010775c310();
      func_0x00010775c290();
      func_0x00010775afb8();
      func_0x00010775c2e0();
    }
    if (*(char *)(puVar3 + 0x13) == '\x01') {
      func_0x00010775c384(puVar3[0x11]);
      func_0x00010775c310();
      func_0x00010775c290();
      func_0x00010775afb8();
      func_0x00010775c2e0();
    }
    if (*(char *)(puVar3 + 0x16) == '\x01') {
      func_0x00010775c384(puVar3[0x14]);
      func_0x00010775c310();
      func_0x00010775c290();
      func_0x00010775afb8();
      func_0x00010775c2e0();
    }
    if (*(char *)(puVar3 + 0x19) == '\x01') {
      func_0x00010775c384(puVar3[0x17]);
      func_0x00010775c310();
      func_0x00010775c290();
      func_0x00010775afb8();
      func_0x00010775c2e0();
    }
    if (*(char *)(puVar3 + 0x1c) == '\x01') {
      func_0x00010775c384(puVar3[0x1a]);
      func_0x00010775c310();
      func_0x00010775c290();
      func_0x00010775afb8();
      func_0x00010775c2e0();
    }
    if (*(char *)(puVar3 + 0x1f) == '\x01') {
      func_0x00010775c384(puVar3[0x1d]);
      func_0x00010775c310();
      func_0x00010775c290();
      func_0x00010775afb8();
      func_0x00010775c2e0();
    }
    func_0x000104c33260(auStack_b0,&puStack_e8);
    FUN_1075726d4(&uStack_c8,auStack_b0);
    func_0x000104c335c0(auStack_b0);
    func_0x000104c33548(&puStack_e8);
  }
  func_0x000107327958(&uStack_110,&uStack_c8);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_108;
  *(undefined8 *)(param_1 + 2) = uStack_110;
  uStack_110 = 0;
  uStack_108 = 0;
  func_0x000104c33108(&uStack_110);
  func_0x000107269124(&uStack_c8);
  func_0x00010775c25c(uStack_70);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_b0);
  do {
    func_0x000107269124(&uStack_c8);
    func_0x00010775c370();
    func_0x00010775c2e0();
  } while( true );
}



/* Entry: 10775be8c; end: 10775bfa7;  */

ulong * FUN_10775be8c(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar8 = param_1 + 1;
  uVar7 = *param_1;
  if ((uVar7 & 1) == 0) {
    lVar5 = 8;
  }
  else {
    puVar8 = (ulong *)param_1[1];
    lVar5 = param_1[2] << 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  puVar4 = &uStack_50;
  puStack_58 = puVar8;
  func_0x0001072c9aa8(puVar4,lVar5);
  uVar7 = uVar7 >> 1;
  puVar4 = puVar4 + uVar7 * 2;
  uVar6 = param_2[1];
  uVar9 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar9;
  if (uVar6 != 0) {
    plVar1 = (long *)(uVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001072c9ac8(param_1,uStack_50,&puStack_58,uVar7);
  func_0x0001072c9af4(param_1,puVar8,uVar7);
  func_0x0001072c9b28(param_1);
  uVar6 = uStack_48;
  uVar7 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[1] = uVar7;
  param_1[2] = uVar6;
  *param_1 = (*param_1 | 1) + 2;
  func_0x0001072c9b78(&uStack_50);
  return puVar4;
}



/* Entry: 10775c23c; end: 10775c4a7;  */

void FUN_10775c23c(void)

{
  undefined8 in_x4;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x24;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [81];
  undefined1 uStack_57;
  
  func_0x000100456794(auStack_f0);
  func_0x000107878fec(auStack_108,1);
  func_0x00010533a9c0(auStack_d8,auStack_f0,auStack_108);
  func_0x00010048a6c8(auStack_c0,auStack_d8,&UNK_10f426c9a);
  uStack_118 = *(undefined8 *)(unaff_x24 + 0x48);
  uStack_120 = *(undefined8 *)(unaff_x24 + 0x40);
  if (*(long *)(unaff_x24 + 0x48) != 0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10 != 0);
  }
  func_0x000107771650(auStack_138,in_x4);
  uStack_148 = *(undefined8 *)(unaff_x24 + 0x38);
  uStack_150 = *(undefined8 *)(unaff_x24 + 0x30);
  if (*(long *)(unaff_x24 + 0x38) != 0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10_00 != 0);
  }
  func_0x000107771c28(auStack_a8,auStack_c0,&uStack_120,auStack_138,&uStack_150);
  func_0x0001072c9830(&uStack_150);
  func_0x000107771c44();
  func_0x000107771c14();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  uStack_57 = 0;
  func_0x000107771b68(auStack_a8);
  func_0x000107771bbc();
  return;
}



/* Entry: 10775ce08; end: 10775dceb;  */

ulong * FUN_10775ce08(ulong *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 uVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  ulong *puVar10;
  undefined8 extraout_x8;
  undefined1 *puVar11;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  code *extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  code *extraout_x9_05;
  code *extraout_x9_06;
  code *extraout_x9_07;
  code *extraout_x9_08;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  ulong *unaff_x23;
  undefined1 uVar15;
  bool bVar16;
  int iVar17;
  undefined8 unaff_x24;
  ulong *puStack_528;
  undefined8 uStack_520;
  ulong *puStack_518;
  long *plStack_510;
  ulong *puStack_508;
  long *plStack_500;
  ulong *puStack_4f8;
  undefined1 *puStack_4f0;
  undefined *puStack_4e8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  undefined1 auStack_4a0 [24];
  undefined1 uStack_488;
  undefined1 auStack_480 [16];
  undefined1 uStack_470;
  ulong auStack_468 [2];
  undefined1 auStack_458 [24];
  undefined1 uStack_440;
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined8 uStack_430;
  byte bStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 auStack_410 [24];
  undefined1 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3e0 [24];
  undefined1 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 auStack_3b0 [24];
  undefined1 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [24];
  undefined1 uStack_368;
  ulong auStack_360 [2];
  ulong *puStack_350;
  undefined1 uStack_348;
  ulong uStack_340;
  undefined8 uStack_338;
  byte bStack_330;
  undefined8 uStack_328;
  ulong *puStack_320;
  undefined1 uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined1 uStack_300;
  ulong *puStack_2f8;
  undefined1 uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  ulong uStack_2c0;
  ulong auStack_2a8 [2];
  char cStack_298;
  ulong auStack_290 [2];
  char cStack_280;
  ulong auStack_278 [2];
  char cStack_268;
  ulong auStack_260 [2];
  char cStack_250;
  ulong auStack_248 [2];
  char cStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  byte bStack_1f8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  long lStack_188;
  undefined1 auStack_180 [8];
  char cStack_178;
  long alStack_170 [2];
  char cStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined1 auStack_148 [56];
  ulong auStack_110 [2];
  long lStack_100;
  byte bStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  byte bStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  
  plVar9 = param_3;
  func_0x00010775e4c8();
  puVar14 = (ulong *)(plVar9 + 1);
  puVar6 = puVar14;
  uStack_70 = extraout_x8;
  (**(code **)(*plVar9 + 0x18))();
  if ((int)puVar6 == 0) {
    puVar6 = puVar14;
    (**(code **)(*param_3 + 0x68))(&uStack_230,puVar14);
    uVar5 = bStack_1f8 == 1;
    if ((bool)uVar5) {
      puVar6 = &uStack_d0;
      puVar10 = &uStack_230;
      func_0x000107544d90(puVar6);
      param_1[1] = uStack_c8;
      *param_1 = uStack_d0;
      param_1[2] = uStack_c0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d0 = 0;
      *(undefined1 *)(param_1 + 3) = 1;
      func_0x00010726afc0();
    }
    else {
      puVar10 = (ulong *)&UNK_10f426033;
      func_0x00010775e5a0();
      func_0x00010775e438();
    }
    func_0x00010775e554();
  }
  else {
    unaff_x23 = (ulong *)0x0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    while( true ) {
      unaff_x24 = 0x120;
      puVar6 = puVar14;
      (**(code **)(*param_3 + 0x20))();
      uVar5 = unaff_x23 == puVar6;
      if (puVar6 <= unaff_x23) break;
      (**(code **)(*param_3 + 0x28))(&lStack_80,puVar14,unaff_x23);
      puVar7 = auStack_78;
      (**(code **)(lStack_80 + 0x20))();
      if (puVar7 == (undefined1 *)0x0) {
        puVar10 = (ulong *)&UNK_10f425ecc;
        func_0x00010775e5a0();
        func_0x00010775e438();
LAB_10775d98c:
        func_0x00010775e5d8();
        goto LAB_10775d990;
      }
      (**(code **)(lStack_80 + 0x28))(&lStack_90,auStack_78,0);
      iVar17 = (int)auStack_88;
      (**(code **)(lStack_90 + 0x18))();
      if (iVar17 == 0) {
        (**(code **)(lStack_90 + 0x68))(&uStack_d0,auStack_88);
        if ((bStack_98 & 1) == 0) {
          puVar10 = (ulong *)&UNK_10f425faf;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_4);
          goto LAB_10775d074;
        }
        puStack_2f8 = (ulong *)((ulong)puStack_2f8 & 0xffffffffffffff00);
        uStack_2f0 = 0;
        uStack_2d0 = uStack_2d0 & 0xffffffffffffff00;
        uStack_2c0 = uStack_2c0 & 0xffffffffffffff00;
        uStack_310 = uStack_310 & 0xffffffffffffff00;
        uStack_300 = 0;
        puStack_320 = (ulong *)((ulong)puStack_320 & 0xffffffffffffff00);
        uStack_318 = 0;
        uStack_328 = 0;
        uStack_340 = uStack_340 & 0xffffffffffffff00;
        bStack_330 = 0;
        puStack_350 = (ulong *)((ulong)puStack_350 & 0xffffffffffffff00);
        uStack_348 = 0;
        if (puVar7 == (undefined1 *)0x1) {
LAB_10775d020:
          puVar6 = &uStack_230;
          puVar10 = &uStack_d0;
          func_0x000104c2fe00(puVar6);
          uVar12 = uStack_2e0;
          if (uStack_2e0 < uStack_2d8) {
            func_0x00010775e3f8();
            func_0x00010775df28(uVar12);
            uVar12 = uVar12 + 0x120;
          }
          else {
            func_0x00010775e5c0((long)(uStack_2e0 - uStack_2e8) / 0x120);
            func_0x000107545178(auStack_110,puVar6,(long)(uStack_2e0 - uStack_2e8) / 0x120,
                                &uStack_2d8);
            func_0x00010775e3f8(lStack_100);
            func_0x00010775df28();
            lStack_100 = lStack_100 + 0x120;
            puVar10 = auStack_110;
            func_0x000107545134(&uStack_2e8);
            uVar12 = uStack_2e0;
            func_0x0001075452d0(auStack_110);
          }
          uStack_2e0 = uVar12;
          func_0x000104c2f714(&uStack_230);
          unaff_x24 = 0;
        }
        else {
          (**(code **)(lStack_80 + 0x28))(&lStack_158,auStack_78,1);
          puVar6 = &uStack_150;
          (**(code **)(lStack_158 + 0x30))();
          if (((ulong)puVar6 & 1) == 0) {
            puVar10 = (ulong *)&UNK_10f425fce;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_4);
            func_0x00010775e438();
LAB_10775d544:
            func_0x00010775e5f0();
          }
          else {
            func_0x00010775e44c();
            func_0x00010775e490(alStack_170);
            uVar5 = 0x2a;
            (*extraout_x9)();
            if (cStack_160 == '\x01') {
              func_0x00010775e628(*(undefined8 *)(alStack_170[0] + 0x60));
              uStack_2f0 = uVar5;
              puStack_2f8 = puVar6;
            }
            func_0x00010775e44c();
            func_0x00010775e490(&lStack_188);
            (*extraout_x9_00)();
            if (cStack_178 == '\x01') {
              iVar17 = (int)auStack_180;
              (**(code **)(lStack_188 + 0x18))();
              if (iVar17 == 0) {
                puVar10 = (ulong *)&UNK_10f426014;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_4)
                ;
                func_0x00010775e438();
              }
              else {
                uStack_198 = 0;
                uStack_1a0 = 0;
                uStack_190 = 0;
                uVar5 = (undefined1)*param_1;
                uVar15 = (undefined1)param_1[3];
                puVar7 = (undefined1 *)0x0;
                do {
                  puVar11 = puVar7;
                  puVar8 = auStack_180;
                  (**(code **)(lStack_188 + 0x20))();
                  if (puVar8 <= puVar11) {
                    *(undefined1 *)(param_1 + 3) = uVar15;
                    *(undefined1 *)param_1 = uVar5;
                    puVar10 = &uStack_1a0;
                    func_0x0001073fb2d4(&uStack_230);
                    if ((char)uStack_2c0 == '\x01') {
                      puVar10 = &uStack_230;
                      func_0x0001073c3510(&uStack_2d0);
                    }
                    else {
                      uStack_2c8 = uStack_228;
                      uStack_2d0 = uStack_230;
                      uStack_228 = 0;
                      uStack_230 = 0;
                      uStack_2c0 = CONCAT71(uStack_2c0._1_7_,1);
                    }
                    func_0x00010726b09c(&uStack_230);
                    goto LAB_10775d3ac;
                  }
                  (**(code **)(lStack_188 + 0x28))(auStack_110,auStack_180,puVar11);
                  func_0x00010775e5e0(&uStack_230);
                  func_0x0001072f5f6c(auStack_110);
                  bVar4 = bStack_1f8;
                  if (bStack_1f8 == 1) {
                    func_0x000104c318bc();
                    puVar10 = auStack_110;
                    func_0x0001072999ec(&uStack_1a0);
                    func_0x000104c2f714(auStack_110);
                  }
                  else {
                    puVar10 = (ulong *)&UNK_10f425ffb;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                              (param_4);
                    uVar15 = 0;
                    uVar5 = 0;
                  }
                  func_0x00010775e554();
                  puVar7 = puVar11 + 1;
                } while ((bVar4 & 1) != 0);
                *(undefined1 *)(param_1 + 3) = uVar15;
                *(undefined1 *)param_1 = uVar5;
LAB_10775d3ac:
                puVar6 = &uStack_1a0;
                func_0x00010726e078();
                if (puVar8 <= puVar11) goto LAB_10775d3c0;
              }
LAB_10775d53c:
              func_0x00010775e600();
              func_0x00010775e5f8();
              goto LAB_10775d544;
            }
LAB_10775d3c0:
            func_0x00010775e44c();
            func_0x00010775e490(auStack_110);
            (*extraout_x9_01)();
            if ((char)lStack_100 == '\x01') {
              auStack_360[0] = 0;
              auStack_360[1] = 0;
              uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
              uStack_190 = uStack_190 & 0xffffffffffffff00;
              auStack_248[0]._0_1_ = 0;
              cStack_238 = '\0';
              auStack_380[0] = 0;
              uStack_368 = 0;
              puVar10 = auStack_360;
              func_0x0001075375e8(&uStack_230,puVar10,&uStack_1a0,auStack_248,auStack_380);
              func_0x0001001148fc(auStack_380);
              func_0x000107323f70(auStack_248);
              func_0x000107323ef8(&uStack_1a0);
              func_0x000107323f90(auStack_360);
              puVar6 = auStack_110;
              func_0x00010775e61c(&uStack_1a0);
              uStack_300 = (char)uStack_190;
              uStack_308 = uStack_198;
              uStack_310 = uStack_1a0;
              if ((uStack_190 & 1) == 0) {
                func_0x00010775e324();
                func_0x00010775e608();
                goto LAB_10775d53c;
              }
              func_0x00010775e3d0();
            }
            func_0x00010775e44c();
            func_0x00010775e490(&uStack_1a0);
            uVar5 = 0x4a;
            (*extraout_x9_02)();
            if ((char)uStack_190 == '\x01') {
              func_0x00010775e628(*(undefined8 *)(uStack_1a0 + 0x60));
              uStack_318 = uVar5;
              puStack_320 = puVar6;
            }
            func_0x00010775e44c();
            func_0x00010775e490(auStack_248);
            (*extraout_x9_03)();
            if (cStack_238 == '\x01') {
              uStack_390 = 0;
              uStack_388 = 0;
              auStack_260[0]._0_1_ = 0;
              cStack_250 = '\0';
              auStack_278[0]._0_1_ = 0;
              cStack_268 = '\0';
              auStack_3b0[0] = 0;
              uStack_398 = 0;
              func_0x0001075375e8(&uStack_230,&uStack_390,auStack_260,auStack_278,auStack_3b0);
              func_0x0001001148fc(auStack_3b0);
              func_0x000107323f70(auStack_278);
              func_0x000107323ef8(auStack_260);
              func_0x000107323f90(&uStack_390);
              puVar6 = auStack_260;
              puVar10 = auStack_248;
              func_0x00010775e654();
              func_0x0001075342ac();
              uStack_328 = CONCAT26((short)puVar6,(undefined6)uStack_328);
              if (((uint)puVar6 >> 8 & 1) != 0) {
                func_0x00010775e3d0();
                goto LAB_10775d57c;
              }
              func_0x00010775e324();
              bVar16 = false;
            }
            else {
LAB_10775d57c:
              func_0x00010775e44c();
              func_0x00010775e490(auStack_260);
              (*extraout_x9_04)();
              if (cStack_250 == '\x01') {
                uStack_3c0 = 0;
                uStack_3b8 = 0;
                auStack_278[0]._0_1_ = 0;
                cStack_268 = '\0';
                auStack_290[0]._0_1_ = 0;
                cStack_280 = '\0';
                auStack_3e0[0] = 0;
                uStack_3c8 = 0;
                func_0x0001075375e8(&uStack_230,&uStack_3c0,auStack_278,auStack_290,auStack_3e0);
                func_0x0001001148fc(auStack_3e0);
                func_0x000107323f70(auStack_290);
                func_0x000107323ef8(auStack_278);
                func_0x000107323f90(&uStack_3c0);
                puVar6 = auStack_278;
                puVar10 = auStack_260;
                func_0x00010775e654();
                func_0x000107534324();
                uStack_328._0_6_ = CONCAT24((short)puVar6,(undefined4)uStack_328);
                if (((uint)puVar6 >> 8 & 1) != 0) {
                  func_0x00010775e3d0();
                  goto LAB_10775d61c;
                }
                func_0x00010775e324();
                bVar16 = false;
              }
              else {
LAB_10775d61c:
                func_0x00010775e44c();
                func_0x00010775e490(auStack_278);
                (*extraout_x9_05)();
                if (cStack_268 == '\x01') {
                  uStack_3f0 = 0;
                  uStack_3e8 = 0;
                  auStack_290[0]._0_1_ = 0;
                  cStack_280 = '\0';
                  auStack_2a8[0]._0_1_ = 0;
                  cStack_298 = '\0';
                  auStack_410[0] = 0;
                  uStack_3f8 = 0;
                  func_0x0001075375e8(&uStack_230,&uStack_3f0,auStack_290,auStack_2a8,auStack_410);
                  func_0x0001001148fc(auStack_410);
                  func_0x000107323f70(auStack_2a8);
                  func_0x000107323ef8(auStack_290);
                  func_0x000107323f90(&uStack_3f0);
                  puVar6 = auStack_290;
                  puVar10 = auStack_278;
                  func_0x00010775e654();
                  func_0x00010753439c();
                  uStack_328._0_4_ = CONCAT22((short)puVar6,(undefined2)uStack_328);
                  if (((uint)puVar6 >> 8 & 1) != 0) {
                    func_0x00010775e3d0();
                    goto LAB_10775d6bc;
                  }
                  func_0x00010775e324();
                  bVar16 = false;
                }
                else {
LAB_10775d6bc:
                  func_0x00010775e44c();
                  func_0x00010775e490(auStack_290);
                  (*extraout_x9_06)();
                  if (cStack_280 == '\x01') {
                    uStack_420 = 0;
                    uStack_418 = 0;
                    auStack_2a8[0]._0_1_ = 0;
                    cStack_298 = '\0';
                    uStack_438 = 0;
                    bStack_428 = 0;
                    auStack_458[0] = 0;
                    uStack_440 = 0;
                    func_0x0001075375e8(&uStack_230,&uStack_420,auStack_2a8,&uStack_438,auStack_458)
                    ;
                    func_0x0001001148fc(auStack_458);
                    func_0x000107323f70(&uStack_438);
                    func_0x000107323ef8(auStack_2a8);
                    func_0x000107323f90(&uStack_420);
                    puVar6 = auStack_2a8;
                    puVar10 = auStack_290;
                    func_0x00010775e654();
                    func_0x000107534414();
                    uStack_328 = CONCAT62(uStack_328._2_6_,(short)puVar6);
                    if (((uint)puVar6 >> 8 & 1) != 0) {
                      func_0x00010775e3d0();
                      goto LAB_10775d75c;
                    }
                    func_0x00010775e324();
                    bVar16 = false;
                  }
                  else {
LAB_10775d75c:
                    func_0x00010775e44c();
                    func_0x00010775e490(auStack_2a8);
                    (*extraout_x9_07)();
                    if (cStack_298 == '\x01') {
                      auStack_468[0] = 0;
                      auStack_468[1] = 0;
                      uStack_438 = 0;
                      bStack_428 = 0;
                      auStack_480[0] = 0;
                      uStack_470 = 0;
                      auStack_4a0[0] = 0;
                      uStack_488 = 0;
                      puVar10 = auStack_468;
                      func_0x0001075375e8(&uStack_230,puVar10,&uStack_438,auStack_480,auStack_4a0);
                      func_0x0001001148fc(auStack_4a0);
                      func_0x000107323f70(auStack_480);
                      func_0x000107323ef8(&uStack_438);
                      func_0x000107323f90(auStack_468);
                      puVar6 = auStack_2a8;
                      func_0x00010775e61c(&uStack_438);
                      bStack_330 = bStack_428;
                      uStack_340 = CONCAT71(uStack_437,uStack_438);
                      uStack_338 = uStack_430;
                      if ((bStack_428 & 1) != 0) {
                        func_0x00010775e3d0();
                        goto LAB_10775d7f8;
                      }
                      func_0x00010775e324();
                      bVar16 = false;
                    }
                    else {
LAB_10775d7f8:
                      func_0x00010775e44c();
                      func_0x00010775e490(&uStack_230);
                      puVar10 = (ulong *)&DAT_10f425e96;
                      (*extraout_x9_08)();
                      if ((char)uStack_220 == '\x01') {
                        func_0x00010775e628(*(undefined8 *)(uStack_230 + 0x60));
                        uStack_348 = SUB81(puVar10,0);
                        puStack_350 = puVar6;
                        if (((ulong)puVar10 & 1) != 0) goto LAB_10775d838;
                        bVar16 = false;
                        func_0x00010775e438();
                      }
                      else {
LAB_10775d838:
                        bVar16 = true;
                      }
                      func_0x0001072f5f4c(&uStack_230);
                    }
                    func_0x0001072f5f4c(auStack_2a8);
                  }
                  func_0x0001072f5f4c(auStack_290);
                }
                func_0x0001072f5f4c(auStack_278);
              }
              func_0x0001072f5f4c(auStack_260);
            }
            func_0x0001072f5f4c(auStack_248);
            func_0x0001072f5f4c(&uStack_1a0);
            func_0x00010775e608();
            func_0x00010775e600();
            func_0x00010775e5f8();
            func_0x00010775e5f0();
            if (bVar16) goto LAB_10775d020;
          }
          unaff_x24 = 1;
        }
        func_0x00010726b07c(&uStack_2d0);
      }
      else {
        puVar7 = auStack_88;
        (**(code **)(lStack_90 + 0x20))();
        uVar5 = puVar7 == (undefined1 *)0x1;
        if (puVar7 < (undefined1 *)0x2) {
          puVar10 = (ulong *)&UNK_10f425f0f;
          func_0x00010775e5a0();
          func_0x00010775e438();
          func_0x00010775e5e8();
          goto LAB_10775d98c;
        }
        (**(code **)(lStack_90 + 0x28))(&uStack_230,auStack_88,0);
        func_0x00010775e5e0(&uStack_d0);
        func_0x0001072f5f6c(&uStack_230);
        if (bStack_98 == 1) {
          puVar6 = &uStack_d0;
          func_0x000107278484(puVar6,"image");
          if (((ulong)puVar6 & 1) != 0) {
            (**(code **)(lStack_90 + 0x28))(&uStack_230,auStack_88,1);
            func_0x00010775e5e0(auStack_110);
            func_0x0001072f5f6c(&uStack_230);
            if ((bStack_d8 & 1) == 0) {
              puVar10 = (ulong *)&UNK_10f425f72;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_4);
              func_0x00010775e438();
              unaff_x24 = 1;
            }
            else {
              func_0x000104c2fe00(auStack_148,auStack_110);
              puVar6 = &uStack_230;
              func_0x00010775f02c(puVar6,auStack_148);
              uVar12 = uStack_2e0;
              if (uStack_2e0 < uStack_2d8) {
                puVar10 = &uStack_230;
                func_0x00010775debc(uStack_2e0);
                uVar12 = uVar12 + 0x120;
              }
              else {
                func_0x00010775e5c0((long)(uStack_2e0 - uStack_2e8) / 0x120);
                func_0x000107545178(&uStack_2d0,puVar6,(long)(uStack_2e0 - uStack_2e8) / 0x120,
                                    &uStack_2d8);
                func_0x00010775debc(uStack_2c0,&uStack_230);
                uStack_2c0 = uStack_2c0 + 0x120;
                puVar10 = &uStack_2d0;
                func_0x000107545134(&uStack_2e8);
                uVar12 = uStack_2e0;
                func_0x0001075452d0(&uStack_2d0);
              }
              uStack_2e0 = uVar12;
              func_0x00010726b164(&uStack_230);
              func_0x000104c2f714(auStack_148);
              unaff_x24 = 4;
            }
            func_0x00010724b3d8(auStack_110);
            goto LAB_10775d554;
          }
        }
        puVar10 = (ulong *)&UNK_10f425f38;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_4);
LAB_10775d074:
        func_0x00010775e438();
        unaff_x24 = 1;
      }
LAB_10775d554:
      func_0x00010724b3d8(&uStack_d0);
      func_0x00010775e5e8();
      func_0x00010775e5d8();
      iVar17 = (int)unaff_x24;
      if ((iVar17 != 0) && (iVar17 != 4)) {
        uVar5 = iVar17 == 2;
        if (!(bool)uVar5) goto LAB_10775d990;
        break;
      }
      unaff_x23 = (ulong *)((long)unaff_x23 + 1);
    }
    puVar10 = &uStack_2e8;
    func_0x0001072787e4(&uStack_4c0);
    uVar3 = uStack_4b0;
    uVar1 = uStack_4b8;
    uVar12 = uStack_4c0;
    uStack_4b8 = 0;
    uStack_4b0 = 0;
    uStack_4c0 = 0;
    param_1[1] = uVar1;
    *param_1 = uVar12;
    param_1[2] = uVar3;
    uStack_220 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    func_0x00010726afc0(&uStack_230);
    func_0x00010726afc0(&uStack_4c0);
LAB_10775d990:
    unaff_x20 = &lStack_90;
    puVar6 = &uStack_2e8;
    func_0x00010726afc0(puVar6);
  }
  func_0x00010775e3d8(uStack_70);
  if ((bool)uVar5) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010775e484();
  func_0x0001072f5f4c();
  func_0x0001072f5f4c(auStack_2a8);
  func_0x0001072f5f4c(auStack_290);
  func_0x0001072f5f4c(auStack_278);
  func_0x0001072f5f4c(auStack_260);
  func_0x0001072f5f4c(auStack_248);
  func_0x0001072f5f4c(&uStack_1a0);
  func_0x00010775e608();
  func_0x00010775e600();
  func_0x00010775e5f8();
  func_0x00010775e5f0();
  func_0x00010726b07c(&uStack_2d0);
  func_0x00010724b3d8(&uStack_d0);
  func_0x00010775e5e8();
  func_0x00010775e5d8();
  func_0x00010726afc0(&uStack_2e8);
  __Unwind_Resume(unaff_x20);
  puStack_4e8 = &UNK_10775dcec;
  puStack_528 = (ulong *)0x0;
  uVar1 = puVar10[1];
  uStack_520 = unaff_x24;
  puStack_518 = unaff_x23;
  plStack_510 = param_3;
  puStack_508 = puVar14;
  plStack_500 = unaff_x20;
  puStack_4f8 = param_1;
  puStack_4f0 = &stack0xfffffffffffffff0;
  for (uVar12 = *puVar10; uVar12 != uVar1; uVar12 = uVar12 + 0x120) {
    func_0x0001073f26dc(&puStack_528,uVar12);
    if (*(char *)(uVar12 + 0x98) == '\x01') {
      func_0x00010775e058(&puStack_528,uVar12 + 0x38);
    }
    if (*(char *)(uVar12 + 0xa8) == '\x01') {
      func_0x00010727ac44(uVar12 + 0xa0);
      func_0x00010775e4bc();
    }
    if (*(char *)(uVar12 + 0xc0) == '\x01') {
      lVar2 = (*(long **)(uVar12 + 0xb0))[1];
      for (lVar13 = **(long **)(uVar12 + 0xb0); lVar13 != lVar2; lVar13 = lVar13 + 0x38) {
        func_0x0001073f26dc(&puStack_528,lVar13);
      }
    }
    if (*(char *)(uVar12 + 0xd8) == '\x01') {
      func_0x000107506760(uVar12 + 200);
      func_0x00010775e5cc();
    }
    if (*(char *)(uVar12 + 0xe8) == '\x01') {
      func_0x00010727ac44(uVar12 + 0xe0);
      func_0x00010775e4bc();
    }
    if (*(char *)(uVar12 + 0xf1) == '\x01') {
      func_0x00010775e36c(*(undefined1 *)(uVar12 + 0xf0));
    }
    if (*(char *)(uVar12 + 0xf3) == '\x01') {
      func_0x00010775e36c(*(undefined1 *)(uVar12 + 0xf2));
    }
    if (*(char *)(uVar12 + 0xf5) == '\x01') {
      func_0x00010775e36c(*(undefined1 *)(uVar12 + 0xf4));
    }
    if (*(char *)(uVar12 + 0xf7) == '\x01') {
      puVar7 = (undefined1 *)(uVar12 + 0xf6);
      FUN_10775e0a8();
      func_0x00010775e36c(*puVar7);
    }
    if (*(char *)(uVar12 + 0x108) == '\x01') {
      func_0x000107506760(uVar12 + 0xf8);
      func_0x00010775e5cc();
    }
    if (*(char *)(uVar12 + 0x118) == '\x01') {
      func_0x00010727ac44(uVar12 + 0x110);
      func_0x00010775e4bc();
    }
  }
  return puStack_528;
}



/* Entry: 10775e0a8; end: 10775e0bf;  */

void FUN_10775e0a8(ulong param_1)

{
  ulong extraout_x8;
  long unaff_x28;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x00010775e57c();
  func_0x00010775e358();
  func_0x00010775e2f8();
  while( true ) {
    func_0x00010775e3ac();
    while (unaff_x28 != 0) {
      func_0x00010775e388();
      func_0x00010731e83c();
      if ((param_1 & 1) != 0) {
        return;
      }
      func_0x00010775e63c();
    }
    func_0x00010775e49c();
    if ((extraout_x8 & 1) != 0) break;
    func_0x00010775e630();
  }
  func_0x00010775e3ec();
  func_0x00010775e660();
  return;
}



/* Entry: 10775e724; end: 10775e75b;  */

long * FUN_10775e724(long param_1,double *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 8);
  for (plVar2 = (long *)*plVar3; plVar2 != (long *)0x0; plVar2 = *(long **)((long)plVar2 + lVar1)) {
    lVar1 = 8;
    if (*param_2 <= (double)plVar2[4]) {
      lVar1 = 0;
      plVar3 = plVar2;
    }
  }
  return plVar3;
}



/* Entry: 10775ed74; end: 10775ed87;  */

/* WARNING: Possible PIC construction at 0x0001074d24e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074d24e8) */
/* WARNING: Removing unreachable block (ram,0x0001074d2590) */
/* WARNING: Removing unreachable block (ram,0x0001074d25b0) */
/* WARNING: Removing unreachable block (ram,0x0001074d2548) */

undefined8 FUN_10775ed74(long *param_1)

{
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_70 [64];
  
  func_0x0001074d3a84();
  (**(code **)(*param_1 + 0x40))(auStack_70);
  puStack_88 = &UNK_1074d24e8;
  uStack_98 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001073f26dc(&uStack_98,auStack_70);
  return uStack_98;
}



/* Entry: 10775ef04; end: 10775ef4b;  */

void FUN_10775ef04(void)

{
  return;
}



/* Entry: 10775f590; end: 10775f5af;  */

void FUN_10775f590(void)

{
  undefined1 uStack_11;
  
  func_0x00010726364c(&uStack_11);
  return;
}



/* Entry: 10775fb28; end: 10775fc1b;  */

/* WARNING: Possible PIC construction at 0x00010775fb50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010775fb54) */
/* WARNING: Removing unreachable block (ram,0x00010775fbe0) */
/* WARNING: Removing unreachable block (ram,0x00010775fbf4) */
/* WARNING: Removing unreachable block (ram,0x00010775fc18) */
/* WARNING: Removing unreachable block (ram,0x00010775fbd0) */

undefined1 * FUN_10775fb28(void)

{
  undefined1 auStack_a0 [128];
  
  func_0x000107760a0c();
  func_0x000100060934(auStack_a0,"image");
  return auStack_a0;
}



/* Entry: 1077601e8; end: 10776020f;  */

void FUN_1077601e8(void)

{
  func_0x000107760ac4();
  func_0x000107760a54(&PTR_DAT_1109d5110);
  return;
}



/* Entry: 107760630; end: 10776063b;  */

undefined ** FUN_107760630(void)

{
  return &PTR_DAT_1109d5270;
}



/* Entry: 107760918; end: 10776092b;  */

undefined ** FUN_107760918(void)

{
  return &PTR_DAT_1109d5260;
}



/* Entry: 107760de0; end: 107761203;  */

/* WARNING: Possible PIC construction at 0x000107761220: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107761224) */

long * FUN_107760de0(long *param_1,long param_2,long **param_3,undefined8 param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long **pplVar10;
  long lVar11;
  undefined8 extraout_x8;
  undefined1 auStack_220 [8];
  uint uStack_218;
  long lStack_1c8;
  uint uStack_1c0;
  long *plStack_1b8;
  undefined4 uStack_1b0;
  long *plStack_180;
  undefined4 uStack_178;
  long *plStack_148;
  undefined4 uStack_140;
  int iStack_d0;
  long *aplStack_c8 [15];
  int iStack_50;
  undefined8 uStack_48;
  
  uVar7 = 0;
  puVar8 = auStack_220;
  lVar11 = param_2;
  func_0x000107761954();
  uStack_48 = extraout_x8;
  func_0x000107753050(aplStack_c8,*(undefined8 *)(lVar11 + 0x48));
  uVar1 = iStack_50 == 1;
  if (!(bool)uVar1) {
    param_3 = aplStack_c8;
    func_0x00010756dd74();
    func_0x00010756dd30();
    goto LAB_1077610d0;
  }
  func_0x0001077619d0();
  func_0x000107775f1c(&lStack_1c8);
  if (*(long *)(param_2 + 0x80) == 0) {
    func_0x000107753050(&plStack_148,*(undefined8 *)(param_2 + 0x58),param_3,param_4);
    uVar1 = iStack_d0 == 1;
    if ((bool)uVar1) {
      uVar1 = uStack_1c0 == 4;
      if (uStack_1c0 < 4) {
        func_0x0001077619fc();
        func_0x000107775f1c(auStack_220);
        uVar1 = uStack_218 == 7;
        if ((7 < uStack_218) ||
           (uVar1 = (1 << (ulong)(uStack_218 & 0x1f) & 0x89U) == 0, (bool)uVar1)) {
          func_0x00010756a788(&plStack_1b8,auStack_220);
          func_0x0001077619f0();
          func_0x0001077619e4(&UNK_10f417ff2);
          func_0x00010776197c();
          func_0x000107761a0c();
          func_0x000107761a18();
          func_0x000104c2f714(&plStack_180);
          func_0x0001077619b0();
          func_0x000107761974();
          func_0x0001077619a0();
          pplVar10 = &plStack_1b8;
LAB_107761060:
          func_0x000104c2f714(pplVar10);
        }
        else {
          uStack_178 = 0;
          uVar6 = 0;
          param_3 = &plStack_180;
          func_0x00010745de74();
          if ((uVar6 & 1) == 0) {
            uStack_1b0 = 0;
            param_3 = &plStack_1b8;
            func_0x00010745de74();
            func_0x0001072c9884(&plStack_1b8);
            func_0x000107761998();
            if ((uVar7 & 1) == 0) {
              uStack_178 = 3;
              func_0x00010745de74(auStack_220,&plStack_180);
              puVar9 = puVar8;
              func_0x000107761998();
              if ((int)puVar8 != 0) {
                func_0x0001077619fc();
                func_0x00010732393c();
                func_0x000104c2fe00(&plStack_180,puVar9);
                func_0x0001077619d0();
                func_0x0001077760fc(&plStack_1b8);
                param_3 = &plStack_1b8;
                func_0x000107264c5c();
                pplVar10 = &plStack_180;
                func_0x0001072784dc(pplVar10,param_3,puVar9,0);
                uVar1 = pplVar10 == (long **)0xffffffffffffffff;
                *(bool *)(param_1 + 2) = !(bool)uVar1;
                func_0x000107761964();
                func_0x000107761990();
                pplVar10 = &plStack_180;
                goto LAB_107761060;
              }
              func_0x0001077619fc();
              func_0x0001075725f8();
              pplVar10 = &plStack_180;
              func_0x000107278c90(pplVar10,puVar9);
              lVar11 = *plStack_180;
              param_3 = (long **)plStack_180[1];
              func_0x0001077619d0();
              func_0x0001075793d4(lVar11,param_3,pplVar10);
              uVar1 = plStack_180[1] == lVar11;
              *(bool *)(param_1 + 2) = !(bool)uVar1;
              func_0x000107761964();
              func_0x00010726b188(&plStack_180);
              goto LAB_1077610b8;
            }
          }
          else {
            func_0x000107761998();
          }
          *(undefined1 *)(param_1 + 2) = 0;
          func_0x000107761964();
        }
LAB_1077610b8:
        func_0x0001072c9884(auStack_220);
      }
      else {
        func_0x00010756a788(&plStack_1b8,&lStack_1c8);
        func_0x0001077619f0();
        func_0x0001077619e4(&UNK_10f417fa6);
        func_0x00010776197c();
        func_0x000107761a0c();
        func_0x000107761a18();
        func_0x000104c2f714(&plStack_180);
        func_0x0001077619b0();
        func_0x000107761974();
        func_0x0001077619a0();
        func_0x000107761990();
      }
    }
    else {
      param_3 = &plStack_148;
      func_0x00010756dd74();
      func_0x00010756dd30(param_1);
    }
    func_0x0001077619a8(&plStack_148);
  }
  else {
    uStack_140 = 3;
    iVar3 = (int)&lStack_1c8;
    pplVar10 = &plStack_148;
    func_0x0001074d1ed0();
    param_3 = &plStack_148;
    func_0x0001072c9884();
    if (iVar3 == 0) {
      func_0x0001077619d0();
      func_0x00010732393c();
      cVar2 = (char)param_2 + 'h';
      func_0x0001072a02dc();
      *(char *)(param_1 + 2) = cVar2;
    }
    else {
      *(undefined1 *)(param_1 + 2) = 0;
      param_3 = pplVar10;
    }
    func_0x000107761964();
  }
  param_1 = &lStack_1c8;
  func_0x0001072c9884();
LAB_1077610d0:
  func_0x0001077619a8(aplStack_c8);
  func_0x000107761940(uStack_48);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000107761990();
  func_0x000104c2f714(&plStack_180);
  func_0x0001072c9884(auStack_220);
  func_0x0001077619a8(&plStack_148);
  plVar5 = &lStack_1c8;
  func_0x0001072c9884();
  func_0x0001077619a8(aplStack_c8);
  func_0x000107761a04();
  plVar4 = param_3[3];
  if (plVar4 == (long *)0x0) {
    func_0x000104bfeb48(0,plVar5[9]);
    plVar5 = (long *)plVar4[3];
    if (plVar5 == plVar4) {
      lVar11 = 0x20;
    }
    else {
      if (plVar5 == (long *)0x0) {
        return plVar4;
      }
      lVar11 = 0x28;
    }
    (**(code **)(*plVar5 + lVar11))();
    return plVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))();
  return plVar4;
}



/* Entry: 107761870; end: 1077618b7;  */

undefined8 * FUN_107761870(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  puVar3 = param_1 + 1;
  uVar2 = *puVar3;
  func_0x0001077618b8(uVar1,uVar2,param_1[2],param_2);
  *puVar3 = uVar1;
  param_1[2] = uVar2;
  func_0x000107262260(puVar3);
  return param_1;
}



/* Entry: 107761c20; end: 107761c63;  */

long * FUN_107761c20(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48(0,*(undefined8 *)(param_1 + 0x48));
  plVar2 = (long *)plVar1[3];
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 107762338; end: 10776233b;  */

void FUN_107762338(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107763aec; end: 107763b2b;  */

undefined8 * FUN_107763aec(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d54d0;
  func_0x000107545fd8(param_1 + 0x12);
  func_0x0001072c9b9c(param_1 + 0x10);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107764280; end: 1077642f7;  */

bool FUN_107764280(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_1[2] == param_2[2]) {
    puVar2 = (undefined8 *)*param_1;
    lVar3 = *param_2;
    while (bVar1 = puVar2 == param_1 + 1, !bVar1) {
      puVar2 = puVar2 + 4;
      func_0x000107764378(puVar2,lVar3 + 0x20);
      if ((int)puVar2 == 0) {
        return bVar1;
      }
      func_0x000107765ec0();
      func_0x00010002c7d4();
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 107764434; end: 10776488f;  */

void FUN_107764434(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  double *pdVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x23;
  double dVar8;
  float fVar9;
  undefined1 auStack_210 [56];
  undefined1 auStack_1d8 [120];
  int iStack_160;
  double dStack_158;
  undefined8 uStack_150;
  int iStack_e0;
  undefined1 auStack_d8 [120];
  int iStack_60;
  undefined8 uStack_58;
  
  lVar3 = param_1;
  func_0x000107765ba4();
  uStack_58 = extraout_x8;
  func_0x000107753050(auStack_d8,*(undefined8 *)(lVar3 + 0x80));
  uVar1 = iStack_60 == 1;
  if (!(bool)uVar1) {
    func_0x00010756dd74(auStack_d8);
    func_0x000107765c64();
    goto LAB_1077646e0;
  }
  puVar4 = auStack_d8;
  func_0x00010727f7dc();
  func_0x000107776fc4();
  fVar9 = SUB84(puVar4,0);
  uVar1 = !NAN(fVar9) && !NAN(fVar9);
  if (NAN(fVar9)) goto LAB_107764704;
  if (*(long *)(param_1 + 0xa0) == 0) {
    if ((bRam00000001137260c0 & 1) == 0) {
      iVar2 = 0x137260c0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107765d74(0x113726120);
        ___cxa_guard_release(0x1137260c0);
      }
    }
    uVar7 = 0x113726120;
    goto LAB_107764520;
  }
  dStack_158 = (double)fVar9;
  func_0x00010776602c();
  func_0x000107765f08();
  if ((bool)uVar1) {
    func_0x00010002c810();
    func_0x000107765a94(*(undefined8 *)(puVar4 + 0x28));
    goto LAB_1077646e0;
  }
  uVar1 = *(long *)(param_1 + 0x90) == unaff_x23;
  if ((bool)uVar1) {
    func_0x000107765a94(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x28));
    goto LAB_1077646e0;
  }
  func_0x000107765c6c();
  dVar8 = *(double *)(puVar4 + 0x20);
  uStack_150 = *(undefined8 *)(unaff_x23 + 0x20);
  dStack_158 = dVar8;
  func_0x000107765e2c();
  fVar9 = (float)dVar8;
  uVar1 = fVar9 == 0.0;
  if ((bool)uVar1) {
    func_0x000107765c6c();
    func_0x000107765a94(*(undefined8 *)(puVar4 + 0x28));
    goto LAB_1077646e0;
  }
  uVar1 = fVar9 == 1.0;
  if ((bool)uVar1) {
    func_0x000107765a94(*(undefined8 *)(unaff_x23 + 0x28));
    goto LAB_1077646e0;
  }
  func_0x000107765c6c();
  func_0x000107765ae0(&dStack_158,*(undefined8 *)(puVar4 + 0x28));
  uVar1 = iStack_e0 == 1;
  if ((bool)uVar1) {
    pdVar5 = *(double **)(unaff_x23 + 0x28);
    func_0x000107765ae0(auStack_1d8);
    uVar1 = iStack_160 == 1;
    if ((bool)uVar1) {
      func_0x000107765db8();
      uVar1 = *(int *)(pdVar5 + 0xd) == 2;
      if ((bool)uVar1) {
        func_0x000107765e24();
        uVar1 = *(int *)(pdVar5 + 0xd) == 2;
        if ((bool)uVar1) {
          func_0x000107765db8();
          func_0x00010757fc08();
          pdVar6 = pdVar5;
          func_0x000107765e24();
          func_0x00010757fc08();
          *(double *)(unaff_x19 + 0x10) = *pdVar6 * (double)fVar9 + (1.0 - (double)fVar9) * *pdVar5;
          func_0x000107765ee8(2);
          goto LAB_1077646d0;
        }
        func_0x000107765c0c();
        func_0x000107765c28();
        func_0x000107765acc();
        func_0x000107765ab8();
        func_0x000107765e24();
        func_0x000107765db0();
        func_0x000107765bc4();
        func_0x000107765bb8();
        func_0x000107765b4c();
        func_0x000107765aa4();
      }
      else {
        func_0x000107765c0c();
        func_0x000107765c28();
        func_0x000107765acc();
        func_0x000107765ab8();
        func_0x000107765db8();
        func_0x000107765db0();
        func_0x000107765bc4();
        func_0x000107765bb8();
        func_0x000107765b4c();
        func_0x000107765aa4();
      }
      func_0x000107765f74(auStack_210);
      func_0x000107765dc0();
      func_0x000104c2f714(auStack_210);
      func_0x000107765f6c();
      func_0x000107765da8();
      func_0x000107765df8();
      func_0x000107765d8c();
      func_0x000107765da0();
      func_0x000107765c7c();
      func_0x000107765c84();
      func_0x000107765c8c();
      func_0x000107765e84();
      func_0x000107765df0();
    }
    else {
      func_0x00010756dd74(auStack_1d8);
      func_0x000107765c64();
    }
LAB_1077646d0:
    func_0x000107765bfc(auStack_1d8);
  }
  else {
    func_0x00010756dd74(&dStack_158);
    func_0x000107765c64();
  }
  func_0x000107765bfc(&dStack_158);
LAB_1077646e0:
  while( true ) {
    func_0x000107765bfc(auStack_d8);
    func_0x000107765aec(uStack_58);
    if ((bool)uVar1) break;
    ___stack_chk_fail();
LAB_107764704:
    if ((bRam00000001137260b8 & 1) == 0) {
      iVar2 = 0x137260b8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        func_0x000107765e10(0x1137260e8);
        ___cxa_guard_release(0x1137260b8);
      }
    }
    uVar7 = 0x1137260e8;
LAB_107764520:
    func_0x000104c2fe00(&dStack_158,uVar7);
    func_0x000107765dc0();
    func_0x000104c2f714(&dStack_158);
  }
  return;
}



/* Entry: 107764a04; end: 107764a2f;  */

undefined8 FUN_107764a04(undefined8 param_1,long param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000107764a30(&uStack_18,-param_2);
  return uStack_18;
}



/* Entry: 107764b28; end: 107764b3b;  */

void FUN_107764b28(void)

{
  FUN_107763aec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107765070; end: 107765083;  */

void FUN_107765070(void)

{
  func_0x000107765624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077657a8; end: 1077657ab;  */

void FUN_1077657a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10776586c; end: 10776586f;  */

void FUN_10776586c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107765a44; end: 107766097;  */

void FUN_107765a44(void)

{
  func_0x000107c60c58(&stack0x00000030,&stack0x00000018,&UNK_10f426484);
  func_0x00010048a6e8();
  return;
}



/* Entry: 1077667a8; end: 1077667bb;  */

/* WARNING: Possible PIC construction at 0x0001074d24e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074d24e8) */
/* WARNING: Removing unreachable block (ram,0x0001074d2590) */
/* WARNING: Removing unreachable block (ram,0x0001074d25b0) */
/* WARNING: Removing unreachable block (ram,0x0001074d2548) */

undefined8 FUN_1077667a8(long *param_1)

{
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_70 [64];
  
  func_0x0001074d3a84();
  (**(code **)(*param_1 + 0x40))(auStack_70);
  puStack_88 = &UNK_1074d24e8;
  uStack_98 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001073f26dc(&uStack_98,auStack_70);
  return uStack_98;
}



/* Entry: 107766b24; end: 107766b33;  */

void FUN_107766b24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107766b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x68) + 0x20))();
  return;
}



/* Entry: 107767684; end: 1077676eb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_107767684(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  uint5 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong *puVar13;
  code *extraout_x9;
  int extraout_w10;
  long *plVar14;
  uint5 auStack_398 [2];
  undefined1 auStack_388 [24];
  ulong uStack_370;
  undefined8 uStack_368;
  undefined1 uStack_360;
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined1 uStack_300;
  undefined7 uStack_2ff;
  undefined1 auStack_2f8 [24];
  undefined1 uStack_2e0;
  undefined8 auStack_290 [9];
  undefined1 auStack_248 [56];
  undefined1 auStack_210 [56];
  byte bStack_1d8;
  undefined1 auStack_1d0 [16];
  char cStack_1c0;
  uint5 uStack_188;
  undefined8 auStack_180 [6];
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_118;
  ulong auStack_a0 [14];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  puVar10 = (undefined1 *)auStack_a0;
  puVar13 = auStack_a0;
  func_0x00010776884c(param_1);
  auStack_a0[0]._0_1_ = 0;
  uStack_30 = 0;
  lVar12 = 1;
  uStack_28 = extraout_x8;
  func_0x0001074d1ee8();
  func_0x000107296ad0();
  func_0x000107768838(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107296ad0();
  func_0x00010776886c();
  puVar6 = puVar13;
  func_0x00010776884c();
  puVar7 = puVar6 + 1;
  uStack_118 = extraout_x8_01;
  (**(code **)(*puVar6 + 0x20))();
  uVar4 = (undefined1 *)((long)puVar7 + -1) == (undefined1 *)0x0;
  if (puVar7 == (ulong *)0x0 || (bool)uVar4) {
    func_0x00010002b838(auStack_338,&UNK_10f4265a9);
    func_0x0001077689f8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_338);
    func_0x0001077688fc();
  }
  else {
    func_0x000107768a58();
    (*extraout_x9)(&uStack_300,puVar6 + 1,1);
    (**(code **)(CONCAT71(uStack_2ff,uStack_300) + 0x68))(auStack_210,auStack_2f8);
    func_0x000107768a0c();
    if ((bStack_1d8 & 1) == 0) {
      func_0x00010002b838(auStack_350,&UNK_10f4265e9);
      func_0x0001077689f8();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_350);
      func_0x0001077688fc();
    }
    else {
      func_0x000104c2fe00(auStack_248,auStack_210);
      plVar14 = *(long **)(puVar10 + 0x30);
      if (plVar14 != (long *)0x0) {
code_r0x0001077677b8:
        lVar8 = *plVar14;
        puVar11 = auStack_248;
        func_0x00010757e728();
        if (lVar8 == 0) goto code_r0x0001077677c8;
        uStack_368 = *(undefined8 *)(puVar11 + 0x40);
        uStack_370 = *(ulong *)(puVar11 + 0x38);
        if (*(long *)(puVar11 + 0x40) != 0) {
          do {
            func_0x0001077688e4();
          } while (extraout_w10 != 0);
        }
        uStack_360 = 1;
        auStack_290[0] = 0;
        func_0x000107539a30(auStack_290,(undefined1 *)((long)puVar7 + -1));
        for (puVar13 = (ulong *)0x2; uVar4 = puVar7 == puVar13, puVar13 < puVar7;
            puVar13 = (ulong *)(ulong)((int)puVar13 + 1)) {
          func_0x000107768a58();
          func_0x0001077688d8(&uStack_300);
          iVar5 = (int)&uStack_300;
          func_0x000107766098();
          func_0x000107768a0c();
          if (iVar5 == 0) {
            func_0x000107768a58();
            func_0x0001077688d8(&uStack_188);
            (**(code **)(_uStack_188 + 0x70))(auStack_1d0,auStack_180);
            func_0x0001077765a4(&uStack_300,auStack_1d0,&uStack_310);
            func_0x00010774f3fc(&uStack_150,&uStack_300);
            func_0x0001072c995c(auStack_290,&uStack_150);
            func_0x000107768908();
            func_0x00010726af18(auStack_2f8);
            func_0x000107267ed0(auStack_1d0);
            func_0x0001072f5f6c(&uStack_188);
          }
          else {
            func_0x000107768a58();
            func_0x0001077688d8(&uStack_150);
            uVar2 = (ulong)_uStack_188 >> 0x28;
            uVar1 = (uint)_uStack_188;
            uStack_188 = (uint5)(uVar1 & 0xffffff00);
            _uStack_188 = CONCAT35((int3)uVar2,uStack_188);
            uStack_300 = 0;
            uStack_2e0 = 0;
            func_0x000107771274(auStack_1d0,puVar10,&uStack_150,lVar12,&uStack_188,&uStack_300);
            func_0x0001072c94e0(&uStack_300);
            func_0x0001072f5f6c(&uStack_150);
            if (cStack_1c0 == '\x01') {
              func_0x0001072c995c(auStack_290,auStack_1d0);
            }
            func_0x0001072c95d0(auStack_1d0);
          }
        }
        if ((puVar10[0x51] & 1) == 0) {
          lVar12 = 0xf0;
          __Znwm();
          puVar13 = &uStack_310;
          func_0x0001077689b0();
          func_0x000104c2fe00(auStack_1d0,auStack_248);
          uStack_148 = uStack_368;
          uStack_150 = uStack_370;
          uStack_370 = 0;
          uStack_368 = 0;
          func_0x0001072c9bc0(&uStack_300,auStack_290);
          func_0x000107768758(lVar12 + 0x18,auStack_1d0,&uStack_150,&uStack_300);
          func_0x000107768960();
          func_0x000107768908();
          func_0x000104c2f714(auStack_1d0);
          *extraout_x8_00 = lVar12 + 0x18;
          extraout_x8_00[1] = (long)puVar10;
          _uStack_188 = 0;
          auStack_180[0] = 0;
          func_0x000107768a38();
          puVar9 = &uStack_188;
        }
        else {
          lVar8 = 0xf0;
          __Znwm();
          func_0x0001077689b0();
          puVar13 = (ulong *)(lVar8 + 0x18);
          func_0x000104c2fe00(&uStack_188,auStack_248);
          uVar3 = uStack_368;
          uVar2 = uStack_370;
          uStack_370 = 0;
          uStack_368 = 0;
          func_0x0001072c9bc0(auStack_1d0,auStack_290);
          func_0x000104c318bc(&uStack_150,&uStack_188);
          uStack_308 = uVar3;
          uStack_310 = uVar2;
          uStack_320 = 0;
          uStack_318 = 0;
          func_0x0001072c9bc0(&uStack_300,auStack_1d0);
          func_0x000107768758(puVar13,&uStack_150,&uStack_310,&uStack_300);
          func_0x000107768960();
          func_0x0001072c9b9c(&uStack_310);
          func_0x000104c2f714(&uStack_150);
          func_0x0001002a8234(puVar10 + 0x40,lVar12 + 0x40);
          func_0x0001072c9c34(auStack_1d0);
          func_0x0001072c9b9c(&uStack_320);
          func_0x000104c2f714(&uStack_188);
          *extraout_x8_00 = (long)puVar13;
          extraout_x8_00[1] = (long)puVar10;
          auStack_398[0]._0_8_ = 0;
          auStack_398[1]._0_8_ = 0;
          func_0x000107768a38();
          puVar9 = auStack_398;
        }
        func_0x000107768810(puVar9);
        func_0x0001072c9c34(auStack_290);
        goto code_r0x000107767b20;
      }
code_r0x0001077677d0:
      uStack_370 = uStack_370 & 0xffffffffffffff00;
      uStack_360 = 0;
      func_0x00010724ef84(&uStack_150,auStack_248);
      func_0x0001004c3cd0(auStack_290,&UNK_10f42661d,&uStack_150);
      func_0x00010048a6c8(auStack_1d0,auStack_290,&UNK_10f426630);
      func_0x00010724ef84(&uStack_188,auStack_248);
      func_0x00010533a9c0(&uStack_300,auStack_1d0,&uStack_188);
      func_0x00010048a6c8(auStack_388,&uStack_300,&UNK_10f42663f);
      func_0x000107768a00();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_388);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_300);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_188);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_290);
      func_0x0001077688a0();
      func_0x0001077688fc();
code_r0x000107767b20:
      func_0x0001072c95d0(&uStack_370);
      func_0x000104c2f714(auStack_248);
    }
    func_0x00010724b3d8(auStack_210);
  }
  func_0x000107768838(uStack_118);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x0001077681d0(puVar13);
    func_0x0001072c9c34(auStack_1d0);
    func_0x0001072c9b9c(&uStack_320);
    func_0x000104c2f714(&uStack_188);
    __ZNSt3__119__shared_weak_countD2Ev(puVar10);
    __ZdlPv();
    func_0x0001072c9c34(auStack_290);
    func_0x0001072c95d0(&uStack_370);
    do {
      func_0x000104c2f714(auStack_248);
      func_0x00010724b3d8(auStack_210);
      func_0x00010776886c();
    } while( true );
  }
  return;
code_r0x0001077677c8:
  plVar14 = (long *)plVar14[1];
  if (plVar14 == (long *)0x0) goto code_r0x0001077677d0;
  goto code_r0x0001077677b8;
}



/* Entry: 1077680c8; end: 107768123;  */

long * FUN_1077680c8(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  if (*(int *)(param_2 + 8) == 9) {
    lVar1 = param_1 + 0x48;
    func_0x000104c32db4(lVar1,param_2 + 0x48);
    if ((int)lVar1 != 0) {
      plVar2 = *(long **)(param_1 + 0x80);
                    /* WARNING: Could not recover jumptable at 0x000107768110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(param_2 + 0x80));
      return plVar2;
    }
  }
  return (long *)0x0;
}



/* Entry: 107768220; end: 10776824f;  */

void FUN_107768220(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001077688f4();
  func_0x000107768978(&PTR_DAT_1109d5af8);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 107768458; end: 107768487;  */

void FUN_107768458(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1c71c71c71c71c8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x90);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_DAT_1109d5b78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107768548; end: 1077685cb;  */

void FUN_107768548(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined8 extraout_x8;
  undefined1 auStack_1d0 [408];
  undefined8 uStack_38;
  
  lVar3 = param_1;
  func_0x00010776884c();
  uVar1 = *(undefined8 *)(lVar3 + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  uStack_38 = extraout_x8;
  FUN_1077592cc(auStack_1d0);
  func_0x0001077533f4(uVar1,uVar2,auStack_1d0,*(undefined8 *)(param_1 + 0x18));
  func_0x0001074332fc();
  func_0x000107768838(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001074332fc(auStack_1d0);
  func_0x00010776886c();
  func_0x000107768a70();
  func_0x000107768970();
  func_0x000107768988();
  return;
}



/* Entry: 10776873c; end: 10776874f;  */

void FUN_10776873c(void)

{
  func_0x000107768800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107769230; end: 10776939b;  */

/* WARNING: Removing unreachable block (ram,0x000107769388) */

long * FUN_107769230(undefined4 *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar6;
  long *plStack_1c8;
  long alStack_1c0 [7];
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined1 uStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_138 [72];
  long alStack_f0 [7];
  long alStack_b8 [8];
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  plVar2 = param_2;
  func_0x0001077698dc();
  uVar1 = (*(uint *)(plVar2 + 3) | 2) == 7;
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    (**(code **)(*param_2 + 0x40))(alStack_f0,param_2);
    func_0x000104c33004(alStack_b8,alStack_f0);
    func_0x00010729d318(auStack_138,param_2 + 9,&uStack_151);
    func_0x000104c32a18(auStack_78,auStack_138);
    func_0x000107268bc4(&uStack_150,alStack_b8,2);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 4) = uStack_148;
    *(undefined8 *)(param_1 + 2) = uStack_150;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x000104c33108(&uStack_150);
    lVar6 = 0x40;
    do {
      func_0x000104c3323c((long)alStack_b8 + lVar6);
      lVar6 = lVar6 + -0x40;
      uVar1 = lVar6 == -0x40;
    } while (!(bool)uVar1);
    func_0x000107267ed0(auStack_138);
    plVar2 = alStack_f0;
    func_0x000104c2f714();
  }
  else {
    func_0x00010729d318(alStack_b8,param_2 + 9,auStack_138);
    func_0x000104c32a18(param_1,alStack_b8);
    plVar2 = alStack_b8;
    func_0x000107267ed0();
  }
  func_0x0001077698c8(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar3 = auStack_78;
    lVar6 = -0x80;
    do {
      func_0x000104c3323c(puVar3);
      puVar3 = puVar3 + -0x40;
      lVar6 = lVar6 + 0x40;
    } while (lVar6 != 0);
    func_0x000107267ed0(auStack_138);
    plVar4 = alStack_f0;
    func_0x000104c2f714();
    func_0x0001077698ec();
    uStack_180 = 1;
    puStack_168 = &DAT_10776939c;
    plVar5 = plVar4;
    plStack_178 = plVar2;
    puStack_170 = &stack0xfffffffffffffff0;
    func_0x0001077698dc();
    uStack_188 = extraout_x8_00;
    (**(code **)(*plVar5 + 0x40))(alStack_1c0);
    plStack_1c8 = (long *)0x0;
    func_0x0001073f26dc(&plStack_1c8,alStack_1c0);
    func_0x00010772db3c(&plStack_1c8,plVar4 + 9);
    plVar2 = plStack_1c8;
    func_0x000104c2f714();
    func_0x0001077698c8(uStack_188);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      plVar2 = alStack_1c0;
      func_0x000104c2f714();
      func_0x0001077698ec();
      *plVar2 = (long)&PTR_DAT_1109d5d18;
      func_0x00010726af18(plVar2 + 10);
      *plVar2 = (long)&PTR_DAT_1109d4888;
      func_0x0001001148fc(plVar2 + 5);
      func_0x0001072c9884(plVar2 + 2);
      return plVar2;
    }
    return plVar2;
  }
  return plVar2;
}



/* Entry: 10776954c; end: 107769583;  */

void FUN_10776954c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d5da0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10776a350; end: 10776a387;  */

bool FUN_10776a350(long param_1)

{
  func_0x00010757e728();
  return param_1 != 0;
}



/* Entry: 10776a914; end: 10776a9d7;  */

long * FUN_10776a914(long *param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  
  uVar4 = *param_2;
  plVar2 = (long *)param_1[1];
  plVar3 = param_1 + 1;
  do {
    plVar5 = plVar3;
    if (plVar2 == (long *)0x0) {
LAB_10776a978:
      plVar1 = (long *)0x30;
      __Znwm();
      plVar1[4] = uVar4;
      plVar1[5] = 0;
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = (long)plVar3;
      *plVar5 = (long)plVar1;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      func_0x00010002c5b0(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
LAB_10776a9c0:
      return plVar1 + 5;
    }
    while (plVar1 = plVar2, plVar3 = plVar1, (ulong)plVar1[4] <= uVar4) {
      if (uVar4 <= (ulong)plVar1[4]) goto LAB_10776a9c0;
      plVar2 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar5 = plVar1 + 1;
        goto LAB_10776a978;
      }
    }
    plVar2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 10776b094; end: 10776b2f3;  */

/* WARNING: Possible PIC construction at 0x00010776b450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010776b67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010776b454) */
/* WARNING: Removing unreachable block (ram,0x00010776b680) */
/* WARNING: Removing unreachable block (ram,0x00010776b698) */
/* WARNING: Removing unreachable block (ram,0x00010776b744) */
/* WARNING: Removing unreachable block (ram,0x00010776b70c) */
/* WARNING: Removing unreachable block (ram,0x00010776b814) */
/* WARNING: Removing unreachable block (ram,0x00010776b71c) */
/* WARNING: Removing unreachable block (ram,0x00010776b878) */
/* WARNING: Removing unreachable block (ram,0x00010776b868) */
/* WARNING: Removing unreachable block (ram,0x00010776b764) */
/* WARNING: Removing unreachable block (ram,0x00010776b88c) */
/* WARNING: Removing unreachable block (ram,0x00010776b770) */
/* WARNING: Removing unreachable block (ram,0x00010776b7d8) */
/* WARNING: Removing unreachable block (ram,0x00010776b7e0) */
/* WARNING: Removing unreachable block (ram,0x00010776b8bc) */
/* WARNING: Removing unreachable block (ram,0x00010776b7ec) */
/* WARNING: Removing unreachable block (ram,0x00010776b798) */
/* WARNING: Removing unreachable block (ram,0x00010776b8a4) */
/* WARNING: Removing unreachable block (ram,0x00010776b8d0) */
/* WARNING: Removing unreachable block (ram,0x00010776b7ac) */
/* WARNING: Removing unreachable block (ram,0x00010776b7b0) */
/* WARNING: Removing unreachable block (ram,0x00010776b7b4) */
/* WARNING: Removing unreachable block (ram,0x00010776b9a4) */
/* WARNING: Removing unreachable block (ram,0x00010776b7b8) */
/* WARNING: Removing unreachable block (ram,0x00010776b824) */
/* WARNING: Removing unreachable block (ram,0x00010776b85c) */
/* WARNING: Removing unreachable block (ram,0x00010776b734) */
/* WARNING: Removing unreachable block (ram,0x00010776b884) */
/* WARNING: Removing unreachable block (ram,0x00010776b8e4) */
/* WARNING: Removing unreachable block (ram,0x00010776b8e8) */
/* WARNING: Removing unreachable block (ram,0x00010776b8f0) */
/* WARNING: Removing unreachable block (ram,0x00010776b940) */
/* WARNING: Removing unreachable block (ram,0x00010776b8f8) */
/* WARNING: Removing unreachable block (ram,0x00010776b950) */
/* WARNING: Removing unreachable block (ram,0x00010776b954) */
/* WARNING: Removing unreachable block (ram,0x00010776b914) */
/* WARNING: Removing unreachable block (ram,0x00010776b960) */
/* WARNING: Removing unreachable block (ram,0x00010776b9d0) */
/* WARNING: Removing unreachable block (ram,0x00010776ba44) */
/* WARNING: Removing unreachable block (ram,0x00010776baa8) */
/* WARNING: Removing unreachable block (ram,0x00010776bab8) */
/* WARNING: Removing unreachable block (ram,0x00010776bb78) */
/* WARNING: Removing unreachable block (ram,0x00010776bba8) */
/* WARNING: Removing unreachable block (ram,0x00010776bbcc) */
/* WARNING: Removing unreachable block (ram,0x00010776bc08) */
/* WARNING: Removing unreachable block (ram,0x00010776bc1c) */
/* WARNING: Removing unreachable block (ram,0x00010776bc20) */
/* WARNING: Removing unreachable block (ram,0x00010776bc3c) */
/* WARNING: Removing unreachable block (ram,0x00010776bc90) */
/* WARNING: Removing unreachable block (ram,0x00010776bf2c) */
/* WARNING: Removing unreachable block (ram,0x00010776c070) */
/* WARNING: Removing unreachable block (ram,0x00010776bf94) */
/* WARNING: Removing unreachable block (ram,0x00010776c0f8) */
/* WARNING: Removing unreachable block (ram,0x00010776bff4) */
/* WARNING: Removing unreachable block (ram,0x00010776c01c) */
/* WARNING: Removing unreachable block (ram,0x00010776c100) */
/* WARNING: Removing unreachable block (ram,0x00010776c104) */
/* WARNING: Removing unreachable block (ram,0x00010776c3cc) */
/* WARNING: Removing unreachable block (ram,0x00010776c10c) */
/* WARNING: Removing unreachable block (ram,0x00010776c3d4) */
/* WARNING: Removing unreachable block (ram,0x00010776c3dc) */
/* WARNING: Removing unreachable block (ram,0x00010776c6f8) */
/* WARNING: Removing unreachable block (ram,0x00010776c3e4) */
/* WARNING: Removing unreachable block (ram,0x00010776c41c) */
/* WARNING: Removing unreachable block (ram,0x00010776c7a0) */
/* WARNING: Removing unreachable block (ram,0x00010776c7f8) */
/* WARNING: Removing unreachable block (ram,0x00010776c424) */
/* WARNING: Removing unreachable block (ram,0x00010776c438) */
/* WARNING: Removing unreachable block (ram,0x00010776c43c) */
/* WARNING: Removing unreachable block (ram,0x00010776c444) */
/* WARNING: Removing unreachable block (ram,0x00010776c448) */
/* WARNING: Removing unreachable block (ram,0x00010776c694) */
/* WARNING: Removing unreachable block (ram,0x00010776c450) */
/* WARNING: Removing unreachable block (ram,0x00010776c824) */
/* WARNING: Removing unreachable block (ram,0x00010776c45c) */
/* WARNING: Removing unreachable block (ram,0x00010776c464) */
/* WARNING: Removing unreachable block (ram,0x00010776c46c) */
/* WARNING: Removing unreachable block (ram,0x00010776c498) */
/* WARNING: Removing unreachable block (ram,0x00010776c480) */
/* WARNING: Removing unreachable block (ram,0x00010776c48c) */
/* WARNING: Removing unreachable block (ram,0x00010776c49c) */
/* WARNING: Removing unreachable block (ram,0x00010776c4a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c4b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c4c8) */
/* WARNING: Removing unreachable block (ram,0x00010776c4e4) */
/* WARNING: Removing unreachable block (ram,0x00010776c4d0) */
/* WARNING: Removing unreachable block (ram,0x00010776c4d8) */
/* WARNING: Removing unreachable block (ram,0x00010776c4e8) */
/* WARNING: Removing unreachable block (ram,0x00010776c4f0) */
/* WARNING: Removing unreachable block (ram,0x00010776c500) */
/* WARNING: Removing unreachable block (ram,0x00010776c524) */
/* WARNING: Removing unreachable block (ram,0x00010776c50c) */
/* WARNING: Removing unreachable block (ram,0x00010776c518) */
/* WARNING: Removing unreachable block (ram,0x00010776c528) */
/* WARNING: Removing unreachable block (ram,0x00010776c534) */
/* WARNING: Removing unreachable block (ram,0x00010776c53c) */
/* WARNING: Removing unreachable block (ram,0x00010776c554) */
/* WARNING: Removing unreachable block (ram,0x00010776c570) */
/* WARNING: Removing unreachable block (ram,0x00010776c55c) */
/* WARNING: Removing unreachable block (ram,0x00010776c564) */
/* WARNING: Removing unreachable block (ram,0x00010776c574) */
/* WARNING: Removing unreachable block (ram,0x00010776c57c) */
/* WARNING: Removing unreachable block (ram,0x00010776c5b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c5b4) */
/* WARNING: Removing unreachable block (ram,0x00010776c5bc) */
/* WARNING: Removing unreachable block (ram,0x00010776c5c4) */
/* WARNING: Removing unreachable block (ram,0x00010776c5cc) */
/* WARNING: Removing unreachable block (ram,0x00010776c5d0) */
/* WARNING: Removing unreachable block (ram,0x00010776c5d4) */
/* WARNING: Removing unreachable block (ram,0x00010776c5e0) */
/* WARNING: Removing unreachable block (ram,0x00010776c610) */
/* WARNING: Removing unreachable block (ram,0x00010776c600) */
/* WARNING: Removing unreachable block (ram,0x00010776c618) */
/* WARNING: Removing unreachable block (ram,0x00010776c608) */
/* WARNING: Removing unreachable block (ram,0x00010776c620) */
/* WARNING: Removing unreachable block (ram,0x00010776c640) */
/* WARNING: Removing unreachable block (ram,0x00010776c658) */
/* WARNING: Removing unreachable block (ram,0x00010776c67c) */
/* WARNING: Removing unreachable block (ram,0x00010776c668) */
/* WARNING: Removing unreachable block (ram,0x00010776c670) */
/* WARNING: Removing unreachable block (ram,0x00010776c680) */
/* WARNING: Removing unreachable block (ram,0x00010776c630) */
/* WARNING: Removing unreachable block (ram,0x00010776c684) */
/* WARNING: Removing unreachable block (ram,0x00010776c548) */
/* WARNING: Removing unreachable block (ram,0x00010776c550) */
/* WARNING: Removing unreachable block (ram,0x00010776c68c) */
/* WARNING: Removing unreachable block (ram,0x00010776c4bc) */
/* WARNING: Removing unreachable block (ram,0x00010776c4c4) */
/* WARNING: Removing unreachable block (ram,0x00010776c714) */
/* WARNING: Removing unreachable block (ram,0x00010776c738) */
/* WARNING: Removing unreachable block (ram,0x00010776c118) */
/* WARNING: Removing unreachable block (ram,0x00010776c154) */
/* WARNING: Removing unreachable block (ram,0x00010776c744) */
/* WARNING: Removing unreachable block (ram,0x00010776c798) */
/* WARNING: Removing unreachable block (ram,0x00010776c15c) */
/* WARNING: Removing unreachable block (ram,0x00010776c16c) */
/* WARNING: Removing unreachable block (ram,0x00010776c170) */
/* WARNING: Removing unreachable block (ram,0x00010776c178) */
/* WARNING: Removing unreachable block (ram,0x00010776c17c) */
/* WARNING: Removing unreachable block (ram,0x00010776c3b8) */
/* WARNING: Removing unreachable block (ram,0x00010776c184) */
/* WARNING: Removing unreachable block (ram,0x00010776c81c) */
/* WARNING: Removing unreachable block (ram,0x00010776c18c) */
/* WARNING: Removing unreachable block (ram,0x00010776c1c4) */
/* WARNING: Removing unreachable block (ram,0x00010776c198) */
/* WARNING: Removing unreachable block (ram,0x00010776c19c) */
/* WARNING: Removing unreachable block (ram,0x00010776c1a4) */
/* WARNING: Removing unreachable block (ram,0x00010776c1d0) */
/* WARNING: Removing unreachable block (ram,0x00010776c1b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c1bc) */
/* WARNING: Removing unreachable block (ram,0x00010776c1d4) */
/* WARNING: Removing unreachable block (ram,0x00010776c1e0) */
/* WARNING: Removing unreachable block (ram,0x00010776c1e8) */
/* WARNING: Removing unreachable block (ram,0x00010776c204) */
/* WARNING: Removing unreachable block (ram,0x00010776c220) */
/* WARNING: Removing unreachable block (ram,0x00010776c20c) */
/* WARNING: Removing unreachable block (ram,0x00010776c214) */
/* WARNING: Removing unreachable block (ram,0x00010776c224) */
/* WARNING: Removing unreachable block (ram,0x00010776c22c) */
/* WARNING: Removing unreachable block (ram,0x00010776c24c) */
/* WARNING: Removing unreachable block (ram,0x00010776c238) */
/* WARNING: Removing unreachable block (ram,0x00010776c244) */
/* WARNING: Removing unreachable block (ram,0x00010776c250) */
/* WARNING: Removing unreachable block (ram,0x00010776c264) */
/* WARNING: Removing unreachable block (ram,0x00010776c26c) */
/* WARNING: Removing unreachable block (ram,0x00010776c288) */
/* WARNING: Removing unreachable block (ram,0x00010776c2a4) */
/* WARNING: Removing unreachable block (ram,0x00010776c290) */
/* WARNING: Removing unreachable block (ram,0x00010776c298) */
/* WARNING: Removing unreachable block (ram,0x00010776c2a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c2b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c2d8) */
/* WARNING: Removing unreachable block (ram,0x00010776c2dc) */
/* WARNING: Removing unreachable block (ram,0x00010776c2e4) */
/* WARNING: Removing unreachable block (ram,0x00010776c2ec) */
/* WARNING: Removing unreachable block (ram,0x00010776c2f4) */
/* WARNING: Removing unreachable block (ram,0x00010776c2f8) */
/* WARNING: Removing unreachable block (ram,0x00010776c2fc) */
/* WARNING: Removing unreachable block (ram,0x00010776c304) */
/* WARNING: Removing unreachable block (ram,0x00010776c334) */
/* WARNING: Removing unreachable block (ram,0x00010776c324) */
/* WARNING: Removing unreachable block (ram,0x00010776c33c) */
/* WARNING: Removing unreachable block (ram,0x00010776c32c) */
/* WARNING: Removing unreachable block (ram,0x00010776c344) */
/* WARNING: Removing unreachable block (ram,0x00010776c364) */
/* WARNING: Removing unreachable block (ram,0x00010776c37c) */
/* WARNING: Removing unreachable block (ram,0x00010776c3a0) */
/* WARNING: Removing unreachable block (ram,0x00010776c38c) */
/* WARNING: Removing unreachable block (ram,0x00010776c394) */
/* WARNING: Removing unreachable block (ram,0x00010776c3a4) */
/* WARNING: Removing unreachable block (ram,0x00010776c354) */
/* WARNING: Removing unreachable block (ram,0x00010776c3a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c278) */
/* WARNING: Removing unreachable block (ram,0x00010776c284) */
/* WARNING: Removing unreachable block (ram,0x00010776c3b0) */
/* WARNING: Removing unreachable block (ram,0x00010776c1f4) */
/* WARNING: Removing unreachable block (ram,0x00010776c200) */
/* WARNING: Removing unreachable block (ram,0x00010776c6a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c6cc) */
/* WARNING: Removing unreachable block (ram,0x00010776c6d4) */
/* WARNING: Removing unreachable block (ram,0x00010776c03c) */
/* WARNING: Removing unreachable block (ram,0x00010776c700) */
/* WARNING: Removing unreachable block (ram,0x00010776c708) */
/* WARNING: Removing unreachable block (ram,0x00010776bc9c) */
/* WARNING: Removing unreachable block (ram,0x00010776bdb0) */
/* WARNING: Removing unreachable block (ram,0x00010776bdcc) */
/* WARNING: Removing unreachable block (ram,0x00010776bdc4) */
/* WARNING: Removing unreachable block (ram,0x00010776bdd0) */
/* WARNING: Removing unreachable block (ram,0x00010776bccc) */
/* WARNING: Removing unreachable block (ram,0x00010776c078) */
/* WARNING: Removing unreachable block (ram,0x00010776bce4) */
/* WARNING: Removing unreachable block (ram,0x00010776bcf4) */
/* WARNING: Removing unreachable block (ram,0x00010776bd00) */
/* WARNING: Removing unreachable block (ram,0x00010776c80c) */
/* WARNING: Removing unreachable block (ram,0x00010776bd18) */
/* WARNING: Removing unreachable block (ram,0x00010776bd24) */
/* WARNING: Removing unreachable block (ram,0x00010776bd50) */
/* WARNING: Removing unreachable block (ram,0x00010776bd54) */
/* WARNING: Removing unreachable block (ram,0x00010776bddc) */
/* WARNING: Removing unreachable block (ram,0x00010776be70) */
/* WARNING: Removing unreachable block (ram,0x00010776be38) */
/* WARNING: Removing unreachable block (ram,0x00010776be40) */
/* WARNING: Removing unreachable block (ram,0x00010776be50) */
/* WARNING: Removing unreachable block (ram,0x00010776be78) */
/* WARNING: Removing unreachable block (ram,0x00010776be80) */
/* WARNING: Removing unreachable block (ram,0x00010776c814) */
/* WARNING: Removing unreachable block (ram,0x00010776be98) */
/* WARNING: Removing unreachable block (ram,0x00010776bea0) */
/* WARNING: Removing unreachable block (ram,0x00010776beac) */
/* WARNING: Removing unreachable block (ram,0x00010776bebc) */
/* WARNING: Removing unreachable block (ram,0x00010776be60) */
/* WARNING: Removing unreachable block (ram,0x00010776bf08) */
/* WARNING: Removing unreachable block (ram,0x00010776bf0c) */
/* WARNING: Removing unreachable block (ram,0x00010776bf24) */
/* WARNING: Removing unreachable block (ram,0x00010776bd5c) */
/* WARNING: Removing unreachable block (ram,0x00010776bd98) */
/* WARNING: Removing unreachable block (ram,0x00010776bd90) */
/* WARNING: Removing unreachable block (ram,0x00010776bd9c) */
/* WARNING: Removing unreachable block (ram,0x00010776bdac) */
/* WARNING: Removing unreachable block (ram,0x00010776c0a8) */
/* WARNING: Removing unreachable block (ram,0x00010776c0b4) */
/* WARNING: Removing unreachable block (ram,0x00010776bb7c) */
/* WARNING: Removing unreachable block (ram,0x00010776bb24) */
/* WARNING: Removing unreachable block (ram,0x00010776bb9c) */
/* WARNING: Removing unreachable block (ram,0x00010776c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010776c800) */
/* WARNING: Removing unreachable block (ram,0x00010776c804) */
/* WARNING: Removing unreachable block (ram,0x00010776c828) */
/* WARNING: Removing unreachable block (ram,0x00010776c0d8) */
/* WARNING: Removing unreachable block (ram,0x00010776b984) */
/* WARNING: Removing unreachable block (ram,0x00010776b690) */
/* WARNING: Removing unreachable block (ram,0x00010776dee0) */
/* WARNING: Recovered jumptable eliminated as dead code */

long *****
FUN_10776b094(long param_1,undefined8 param_2,long *****param_3,long ****param_4,long ****param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long *****ppppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *****ppppplVar8;
  long *****ppppplVar9;
  long ***ppplVar10;
  long *****ppppplVar11;
  long ****pppplVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long ****pppplVar13;
  long *****ppppplVar14;
  ulong uVar15;
  long *****unaff_x26;
  long ***unaff_x27;
  undefined8 unaff_x28;
  undefined1 ***pppuVar16;
  undefined *puVar17;
  undefined1 auStack_310 [24];
  long ****pppplStack_2f8;
  undefined8 uStack_228;
  long ****pppplStack_220;
  long ****pppplStack_218;
  long ****pppplStack_210;
  long ****pppplStack_208;
  long ****pppplStack_200;
  long ****pppplStack_1f8;
  undefined1 **ppuStack_1f0;
  undefined *puStack_1e8;
  long ****pppplStack_1d8;
  long ****pppplStack_1d0;
  long ***ppplStack_1c8;
  long lStack_1c0;
  undefined8 uStack_198;
  long ****pppplStack_190;
  long **pplStack_188;
  long lStack_180;
  long ****pppplStack_178;
  undefined1 *puStack_170;
  undefined *puStack_168;
  long ***appplStack_150 [2];
  long **pplStack_140;
  long ****pppplStack_138;
  undefined8 uStack_130;
  long ****pppplStack_128;
  long ***ppplStack_120;
  undefined8 uStack_118;
  long ****pppplStack_110;
  long ***appplStack_108 [2];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [56];
  long ***appplStack_a8 [8];
  undefined8 uStack_68;
  
  func_0x00010776d99c();
  uStack_68 = extraout_x8;
  func_0x00010776dfb8();
  func_0x00010776ddb8();
  func_0x0001074d2254(auStack_f8,appplStack_a8);
  func_0x000104c2f714(appplStack_a8);
  func_0x00010776ddac(*(undefined8 *)(param_1 + 0x48));
  func_0x00010776ddb8();
  func_0x00010776dba4();
  func_0x00010776db34();
  ppppplVar4 = &pppplStack_110;
  func_0x00010776d54c(ppppplVar4,*(undefined8 *)(param_1 + 0x68));
  ppplStack_120 = (long ***)0x0;
  uStack_118 = 0;
  uStack_130 = 0;
  pppplStack_128 = &ppplStack_120;
  pplStack_140 = (long **)0x0;
  pppplStack_138 = (long ****)0x0;
  ppppplVar14 = (long *****)appplStack_108;
  uVar15 = 0x18;
  ppppplVar5 = (long *****)pppplStack_110;
  while (pppplVar13 = pppplStack_138, ppppplVar5 != ppppplVar14) {
    pppplVar13 = ppppplVar5[0xb];
    func_0x00010776dfac();
    ppppplVar8 = (long *****)pppplStack_138;
    ppplVar10 = (long ***)pplStack_140;
    if ((long *****)&ppplStack_120 == ppppplVar4) {
      ppppplVar4 = &pppplStack_128;
      appplStack_a8[0] = (long ***)pppplVar13;
      FUN_10776a914(ppppplVar4,appplStack_a8);
      *ppppplVar4 = (long ****)(((long)ppppplVar8 - (long)ppplVar10) / 0x18);
      func_0x000104c2fe00(auStack_e0,ppppplVar5 + 4);
      func_0x000104c33004(appplStack_a8,auStack_e0);
      ppppplVar4 = (long *****)appplStack_150;
      param_3 = (long *****)0x1;
      func_0x000107268bc4(ppppplVar4,appplStack_a8);
      func_0x00010776dd6c();
      func_0x00010776dd8c();
      func_0x00010776db34();
      func_0x00010776dc94();
    }
    else {
      pppplVar13 = ppppplVar4[5];
      func_0x000107289354(pplStack_140 + (long)pppplVar13 * 3 + 1);
      ppppplVar4 = (long *****)ppplVar10[(long)pppplVar13 * 3 + 1];
      func_0x0001077560f4(ppppplVar4,ppppplVar5 + 4);
      ppppplVar8 = unaff_x26;
      ppplVar10 = unaff_x27;
    }
    func_0x00010776df10();
    ppppplVar5 = ppppplVar4;
    unaff_x26 = ppppplVar8;
    unaff_x27 = ppplVar10;
  }
  ppplVar10 = (long ***)(pplStack_140 + 1);
  while( true ) {
    ppppplVar4 = (long *****)(ppplVar10 + -1);
    uVar3 = ppppplVar4 == (long *****)pppplVar13;
    if ((bool)uVar3) break;
    func_0x00010776e00c();
    if ((bool)uVar3) {
      func_0x0001072d7f34(auStack_f8);
    }
    else {
      func_0x00010776ded4();
    }
    func_0x00010776ddac(*ppppplVar4);
    func_0x00010776ddb8();
    func_0x00010776dba4();
    func_0x00010776db34();
    ppplVar10 = ppplVar10 + 3;
  }
  func_0x00010776ddac(*(undefined8 *)(param_1 + 0x80));
  func_0x00010776ddb8();
  func_0x00010776dba4();
  func_0x00010776db34();
  func_0x00010776def8();
  func_0x00010776d9ac();
  func_0x00010776dd84();
  func_0x00010776dcac();
  ppppplVar5 = &pppplStack_110;
  func_0x000107547870();
  func_0x00010776dc9c();
  func_0x00010776d950(uStack_68);
  if ((bool)uVar3) {
    return ppppplVar5;
  }
  ___stack_chk_fail();
  func_0x00010776db34();
  func_0x00010776dd84();
  func_0x00010776dcac();
  ppppplVar8 = &pppplStack_110;
  func_0x000107547870();
  func_0x00010776dc9c();
  func_0x00010776da9c();
  pppplStack_190 = pppplVar13;
  puStack_168 = &DAT_10776b2f4;
  pplStack_188 = (long **)ppplVar10;
  lStack_180 = param_1;
  pppplStack_178 = (long ****)ppppplVar5;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010776d97c();
  uStack_198 = extraout_x8_00;
  (*(code *)(*ppppplVar8)[8])(&pppplStack_1d0);
  func_0x00010776df2c();
  func_0x00010776dd94();
  func_0x00010776d54c(&pppplStack_1d0,ppppplVar5[0xd]);
  pppplStack_1d8 =
       (long ****)
       ((long)ppppplVar8 * 0x1000 + ((ulong)ppppplVar8 >> 4) + lStack_1c0 + -0x61c8864680b583eb ^
       (ulong)ppppplVar8);
  ppppplVar8 = (long *****)pppplStack_1d0;
  while( true ) {
    uVar3 = ppppplVar8 == (long *****)&ppplStack_1c8;
    if ((bool)uVar3) break;
    func_0x0001073f26dc(&pppplStack_1d8,ppppplVar8 + 4);
    ppppplVar6 = &pppplStack_1d8;
    func_0x00010756af98(ppppplVar6,ppppplVar8 + 0xb);
    func_0x00010776df10();
    ppppplVar8 = ppppplVar6;
  }
  ppppplVar5 = ppppplVar5 + 0x10;
  func_0x00010756af98(&pppplStack_1d8);
  pppplVar13 = pppplStack_1d8;
  ppppplVar6 = &pppplStack_1d0;
  func_0x000107547870();
  func_0x00010776d950(uStack_198);
  if ((bool)uVar3) {
    return (long *****)pppplVar13;
  }
  ___stack_chk_fail();
  ppppplVar7 = ppppplVar6;
  func_0x00010776dd94();
  func_0x00010776da9c();
  puStack_1e8 = &DAT_10776b3ec;
  pppuVar16 = &ppuStack_1f0;
  ppppplVar9 = ppppplVar5;
  ppppplVar11 = param_3;
  pppplStack_220 = (long ****)ppppplVar14;
  pppplStack_218 = (long ****)ppppplVar4;
  pppplStack_210 = (long ****)&pppplStack_1d0;
  pppplStack_208 = (long ****)ppppplVar8;
  pppplStack_200 = &ppplStack_1c8;
  pppplStack_1f8 = (long ****)ppppplVar6;
  ppuStack_1f0 = &puStack_170;
  func_0x00010776d97c();
  uVar3 = *(char *)(ppppplVar11 + 0x32) == '\x01';
  if ((bool)uVar3) {
    func_0x00010776db3c();
    ppppplVar8 = param_3;
    func_0x00010756ec34();
    func_0x00010776e034();
    func_0x00010776db08();
    *ppppplVar8 = (long ****)&PTR_FUN_1109d5fe0;
    ppppplVar8[1] = (long ****)ppppplVar5;
    ppppplVar8[2] = (long ****)param_3;
    ppppplVar8[3] = param_4;
    pppplStack_2f8 = (long ****)ppppplVar8;
    func_0x00010776dd48();
    puVar17 = &UNK_10776b454;
    puVar2 = auStack_310;
    ppppplVar7 = ppppplVar6;
  }
  else {
    uStack_228 = extraout_x8_01;
    func_0x00010776db08();
    func_0x00010776de8c(&PTR_DAT_1109d6060);
    func_0x00010776df20();
    func_0x00010776dd64();
    func_0x00010776d950(uStack_228);
    if ((bool)uVar3) {
      return ppppplVar7;
    }
    ___stack_chk_fail();
    func_0x00010776dcc8();
    func_0x00010776dd7c();
    puVar17 = &UNK_10776b4bc;
    func_0x00010776da9c();
    puVar2 = auStack_310;
  }
  do {
    pppplVar13 = param_5;
    ppppplVar6 = ppppplVar9;
    *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
    *(long ****)(puVar2 + -0x58) = unaff_x27;
    *(long ******)(puVar2 + -0x50) = unaff_x26;
    *(ulong *)(puVar2 + -0x48) = uVar15;
    *(long ******)(puVar2 + -0x40) = ppppplVar14;
    *(long ******)(puVar2 + -0x38) = ppppplVar4;
    *(long ******)(puVar2 + -0x30) = ppppplVar5;
    *(long ******)(puVar2 + -0x28) = param_3;
    *(long *****)(puVar2 + -0x20) = param_4;
    *(long ******)(puVar2 + -0x18) = ppppplVar7;
    *(undefined1 ****)(puVar2 + -0x10) = pppuVar16;
    *(undefined **)(puVar2 + -8) = puVar17;
    ppppplVar8 = ppppplVar6;
    func_0x00010776d97c();
    *(undefined8 *)(puVar2 + -0x68) = extraout_x8_02;
    ppppplVar8 = (long *****)ppppplVar8[9];
    func_0x00010776dd20();
    uVar3 = *(int *)(puVar2 + -0x70) == 1;
    ppppplVar7 = ppppplVar8;
    if ((bool)uVar3) {
      func_0x00010776dd10();
      uVar3 = *(int *)(ppppplVar8 + 0xd) == 3;
      ppppplVar7 = ppppplVar8;
      if (!(bool)uVar3) goto code_r0x00010776b560;
      func_0x00010776dd10();
      func_0x00010732393c();
      ppppplVar14 = (long *****)ppppplVar6[0xc];
      ppppplVar7 = ppppplVar8;
      ppplVar10 = unaff_x27;
      if ((ppppplVar14 == (long *****)0x0) ||
         (ppppplVar9 = ppppplVar6 + 0xe, ppppplVar7 = ppppplVar9, ppppplVar5 = ppppplVar8,
         *ppppplVar9 == (long ****)0x0)) {
code_r0x00010776b5e8:
        unaff_x27 = ppplVar10;
        ppppplVar11 = ppppplVar6 + 0x10;
        ppppplVar8 = ppppplVar5;
        ppppplVar9 = ppppplVar4;
      }
      else {
        func_0x00010726364c(ppppplVar9,ppppplVar8);
        uVar15 = (long)ppppplVar14 - 1;
        if (((ulong)ppppplVar14 & uVar15) == 0) {
          unaff_x26 = (long *****)((ulong)ppppplVar9 & uVar15);
          uVar3 = true;
        }
        else {
          uVar3 = ppppplVar9 == ppppplVar14;
          unaff_x26 = ppppplVar9;
          if (ppppplVar14 <= ppppplVar9) {
            uVar1 = 0;
            if (ppppplVar14 != (long *****)0x0) {
              uVar1 = (ulong)ppppplVar9 / (ulong)ppppplVar14;
            }
            unaff_x26 = (long *****)((long)ppppplVar9 - uVar1 * (long)ppppplVar14);
          }
        }
        unaff_x27 = ppppplVar6[0xb][(long)unaff_x26];
        ppppplVar7 = ppppplVar9;
        ppppplVar4 = ppppplVar9;
        ppplVar10 = (long ***)0x0;
        if (unaff_x27 == (long ***)0x0) goto code_r0x00010776b5e8;
        do {
          while( true ) {
            unaff_x27 = (long ***)*unaff_x27;
            if (unaff_x27 == (long ***)0x0) goto code_r0x00010776b5d4;
            ppppplVar4 = (long *****)unaff_x27[1];
            if (ppppplVar9 != ppppplVar4) break;
            ppppplVar7 = (long *****)(unaff_x27 + 2);
            func_0x000104c32db4(ppppplVar7,ppppplVar8);
            if (((ulong)ppppplVar7 & 1) != 0) goto code_r0x00010776b5d4;
          }
          if (((ulong)ppppplVar14 & uVar15) == 0) {
            ppppplVar4 = (long *****)((ulong)ppppplVar4 & uVar15);
          }
          else if (ppppplVar14 <= ppppplVar4) {
            uVar1 = 0;
            if (ppppplVar14 != (long *****)0x0) {
              uVar1 = (ulong)ppppplVar4 / (ulong)ppppplVar14;
            }
            ppppplVar4 = (long *****)((long)ppppplVar4 - uVar1 * (long)ppppplVar14);
          }
        } while (ppppplVar4 == unaff_x26);
        unaff_x27 = (long ***)0x0;
code_r0x00010776b5d4:
        uVar3 = unaff_x27 == (long ***)0x0;
        ppppplVar11 = ppppplVar6 + 0x10;
        if (!(bool)uVar3) {
          ppppplVar11 = (long *****)(unaff_x27 + 9);
        }
      }
      pppplVar12 = *ppppplVar11;
      ppplVar10 = pppplVar13[3];
      func_0x00010776dc58();
      ppppplVar5 = ppppplVar8;
      ppppplVar4 = ppppplVar9;
    }
    else {
code_r0x00010776b560:
      pppplVar12 = ppppplVar6[0x10];
      ppplVar10 = pppplVar13[3];
      func_0x00010776dc58();
    }
    func_0x00010776da60();
    func_0x00010776d950(*(undefined8 *)(puVar2 + -0x68));
    if ((bool)uVar3) {
      return ppppplVar7;
    }
    ___stack_chk_fail();
    ppppplVar9 = ppppplVar7;
    func_0x00010776da60();
    func_0x00010776da9c();
    *(long *****)(puVar2 + -0x110) = pppplVar13;
    *(long ******)(puVar2 + -0x108) = ppppplVar7;
    *(undefined1 **)(puVar2 + -0x100) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0xf8) = &DAT_10776b648;
    pppuVar16 = (undefined1 ***)(puVar2 + -0x100);
    func_0x00010776d99c(extraout_x8_03,ppppplVar9,ppplVar10,pppplVar12);
    func_0x00010776e068();
    param_5 = (long ****)(puVar2 + -0x138);
    puVar17 = &UNK_10776b680;
    puVar2 = puVar2 + -0x140;
    param_4 = pppplVar13;
    param_3 = ppppplVar6;
  } while( true );
}



/* Entry: 10776caf8; end: 10776cb43;  */

long * FUN_10776caf8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0x18) {
      func_0x000104c33108(lVar1 + -0x10);
    }
    func_0x00010776db84();
  }
  return param_1;
}



/* Entry: 10776ccec; end: 10776cd5b;  */

long * FUN_10776ccec(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x28;
    func_0x00010776cd34();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10776d024; end: 10776d06b;  */

long * FUN_10776d024(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x48) {
      func_0x00010776cbf4(lVar2 + -0x40);
    }
    func_0x00010776db84();
  }
  return param_1;
}



/* Entry: 10776d360; end: 10776d367;  */

void FUN_10776d360(void)

{
  return;
}



/* Entry: 10776d470; end: 10776d48f;  */

void FUN_10776d470(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d5ee0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10776d65c; end: 10776d663;  */

void FUN_10776d65c(void)

{
  return;
}



/* Entry: 10776d770; end: 10776d783;  */

undefined ** FUN_10776d770(void)

{
  return &PTR_DAT_1109d60c0;
}



/* Entry: 10776e07c; end: 10776e0c3;  */

undefined8 * FUN_10776e07c(undefined8 *param_1)

{
  func_0x0001072c9b9c(param_1 + 0x11);
  func_0x0001072c9b9c(param_1 + 0xf);
  func_0x0001072c9b9c(param_1 + 0xd);
  func_0x0001072c9b9c(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10776f2bc; end: 10776f2cb;  */

long FUN_10776f2bc(long param_1)

{
  func_0x000100060934(param_1,&UNK_10f426b4a);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 10776f3f0; end: 10776f41f;  */

long * FUN_10776f3f0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010776f3d8();
  }
  return param_1;
}



/* Entry: 10776fd4c; end: 10776fd7f;  */

void FUN_10776fd4c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109d6358;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10776fef8; end: 10776ff63;  */

void FUN_10776fef8(long param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(param_1 + 8);
  if (*pcVar1 == '\x01') {
    func_0x00010776fbd0();
    pcVar1 = *(char **)(param_1 + 8);
  }
  else {
    param_2 = '\0';
  }
  *pcVar1 = param_2;
  return;
}



/* Entry: 10777016c; end: 10777027f;  */

/* WARNING: Possible PIC construction at 0x000107770234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077703a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107770238) */
/* WARNING: Removing unreachable block (ram,0x000107770250) */
/* WARNING: Removing unreachable block (ram,0x000107770278) */
/* WARNING: Removing unreachable block (ram,0x00010777036c) */
/* WARNING: Removing unreachable block (ram,0x0001077702ec) */
/* WARNING: Removing unreachable block (ram,0x000107770300) */
/* WARNING: Removing unreachable block (ram,0x000107770318) */
/* WARNING: Removing unreachable block (ram,0x000107770378) */
/* WARNING: Removing unreachable block (ram,0x000107770350) */
/* WARNING: Removing unreachable block (ram,0x000107770380) */
/* WARNING: Removing unreachable block (ram,0x000107770394) */
/* WARNING: Removing unreachable block (ram,0x00010777023c) */
/* WARNING: Removing unreachable block (ram,0x0001077703ac) */
/* WARNING: Removing unreachable block (ram,0x0001077703c4) */
/* WARNING: Removing unreachable block (ram,0x0001077703ec) */
/* WARNING: Removing unreachable block (ram,0x0001077703fc) */
/* WARNING: Removing unreachable block (ram,0x00010777040c) */
/* WARNING: Removing unreachable block (ram,0x000107770424) */
/* WARNING: Removing unreachable block (ram,0x0001077703b0) */

void FUN_10777016c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [56];
  char cStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_1 + 1;
  plVar1 = plVar2;
  (**(code **)(*param_1 + 0x18))();
  if (((int)plVar1 != 0) &&
     (plVar1 = plVar2, (**(code **)(*param_1 + 0x20))(), plVar1 == (long *)0x4)) {
    (**(code **)(*param_1 + 0x28))(&lStack_78,plVar2,0);
    (**(code **)(lStack_78 + 0x68))(auStack_68,auStack_70);
    func_0x0001072f5f6c(&lStack_78);
    if (cStack_30 == '\x01') {
      func_0x000107278484(auStack_68,&UNK_10f426c94);
    }
    func_0x00010724b3d8(auStack_68);
  }
  return;
}



/* Entry: 107771014; end: 10777109b;  */

bool FUN_107771014(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107771040();
  return param_1 + 0x420 != lVar1;
}



/* Entry: 107771708; end: 107771787;  */

long FUN_107771708(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = (param_2 - param_1) / 0x18;
  while (lVar2 = param_1, uVar1 != 0) {
    uVar5 = uVar1 >> 1;
    lVar4 = lVar2 + uVar5 * 0x18;
    lVar3 = lVar4;
    func_0x000107771788(lVar4,param_3);
    uVar1 = uVar1 + (uVar1 >> 1 ^ 0xffffffffffffffff);
    param_1 = lVar4 + 0x18;
    if ((int)lVar3 == 0) {
      uVar1 = uVar5;
      param_1 = lVar2;
    }
  }
  return lVar2;
}



/* Entry: 10777193c; end: 107771963;  */

void FUN_10777193c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x000107771964(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 107771ab8; end: 107771b03;  */

undefined8 * FUN_107771ab8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_3[1];
  uVar1 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001072c9830(&uStack_30);
  return param_1;
}



/* Entry: 107772814; end: 10777295f;  */

void FUN_107772814(undefined4 *param_1,long param_2)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong *puVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong *extraout_x8_01;
  ulong uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uStack_118;
  ulong auStack_110 [7];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long alStack_90 [3];
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  func_0x000107772bc8();
  alStack_90[0] = 0;
  alStack_90[1] = 0;
  alStack_90[2] = 0;
  uStack_38 = extraout_x8;
  func_0x000107772be8();
  func_0x0001074d2254(alStack_90,auStack_78);
  func_0x000104c2f714(auStack_78);
  func_0x000107772be8();
  func_0x000107772c34();
  func_0x000107772bfc();
  lVar10 = *(long *)(param_2 + 0x58);
  while (uVar1 = lVar10 == param_2 + 0x60, !(bool)uVar1) {
    if ((*(double *)(lVar10 + 0x20) != -INFINITY) && (!NAN(*(double *)(lVar10 + 0x20)))) {
      func_0x0001077659a0(alStack_90);
    }
    func_0x000107772be8();
    func_0x000107772c34();
    func_0x000107772bfc();
    func_0x00010002c7d4();
  }
  func_0x000107327958(&uStack_a0,alStack_90);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_98;
  *(undefined8 *)(param_1 + 2) = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  func_0x000104c33108(&uStack_a0);
  plVar4 = alStack_90;
  func_0x000107269124();
  func_0x000107772b94(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107772bfc();
  plVar5 = alStack_90;
  func_0x000107269124();
  func_0x000107772be0();
  uStack_d0 = 0xfff0000000000000;
  puStack_a8 = &DAT_107772960;
  plVar6 = plVar5;
  lStack_c8 = lVar10;
  lStack_c0 = param_2 + 0x60;
  plStack_b8 = plVar4;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107772bc8();
  uStack_d8 = extraout_x8_00;
  (**(code **)(*plVar6 + 0x40))(auStack_110);
  lVar10 = plVar5[0xd];
  uStack_118 = 0;
  func_0x0001073f26dc(&uStack_118,auStack_110);
  func_0x00010756af98(&uStack_118,plVar5 + 9);
  uVar8 = lVar10 + uStack_118 * 0x1000 + (uStack_118 >> 4) + 0x9e3779b97f4a7c15 ^ uStack_118;
  func_0x000104c2f714(auStack_110);
  puVar9 = (ulong *)plVar5[0xb];
  auStack_110[0] = uVar8;
  while (bVar2 = puVar9 == (ulong *)(plVar5 + 0xc), !bVar2) {
    if (((double)puVar9[4] != -INFINITY) && (!NAN((double)puVar9[4]))) {
      func_0x000107451500(auStack_110);
    }
    puVar7 = auStack_110;
    func_0x00010756af98(puVar7,puVar9 + 5);
    func_0x000107772c20();
    puVar9 = puVar7;
  }
  uVar8 = auStack_110[0];
  func_0x000107772b94(uStack_d8);
  if (bVar2) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  iVar3 = (int)*(undefined8 *)(uVar8 + 0x48);
  func_0x000107772aa0();
  if (iVar3 == 0) {
    *(undefined1 *)extraout_x8_01 = 0;
  }
  else {
    *extraout_x8_01 = uVar8;
    *(undefined4 *)(extraout_x8_01 + 6) = 1;
  }
  *(bool *)(extraout_x8_01 + 7) = iVar3 != 0;
  return;
}



/* Entry: 107772b94; end: 107772c4b;  */

void FUN_107772b94(void)

{
  return;
}



/* Entry: 107773c70; end: 107773d0f;  */

undefined8 * FUN_107773c70(long *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 *puStack_68;
  undefined8 auStack_60 [7];
  undefined8 uStack_28;
  
  plVar2 = param_1;
  func_0x0001077740c4();
  uStack_28 = extraout_x8;
  (**(code **)(*plVar2 + 0x40))(auStack_60);
  puStack_68 = (undefined8 *)0x0;
  func_0x0001073f26dc(&puStack_68,auStack_60);
  func_0x00010756af98(&puStack_68,param_1 + 9);
  func_0x0001073f26dc(&puStack_68,param_1 + 0xb);
  func_0x0001073f26dc(&puStack_68,param_1 + 0x12);
  func_0x00010756af98(&puStack_68,param_1 + 0x19);
  puVar1 = puStack_68;
  puVar3 = auStack_60;
  func_0x000104c2f714();
  func_0x0001077740b0(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *puVar3 = &PTR_DAT_1109d6950;
  func_0x0001072c9b9c(puVar3 + 0x19);
  func_0x000104c2f714(puVar3 + 0x12);
  func_0x000104c2f714(puVar3 + 0xb);
  func_0x0001072c9b9c(puVar3 + 9);
  *puVar3 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(puVar3 + 5);
  func_0x0001072c9884(puVar3 + 2);
  return puVar3;
}



/* Entry: 107773e50; end: 107773e93;  */

void FUN_107773e50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d69d8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10777407c; end: 10777408f;  */

void FUN_10777407c(void)

{
  func_0x0001077740a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107774978; end: 1077749a3;  */

void FUN_107774978(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  func_0x0001072ca12c(param_1 + 2,param_2 + 2);
  if (*(uint *)(param_2 + 3) != 0xffffffff) {
    func_0x0001072ce6fc((&PTR_DAT_11099acf0)[*(uint *)(param_2 + 3)]);
  }
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  return;
}



/* Entry: 1077750d4; end: 107775107;  */

void FUN_1077750d4(void)

{
  func_0x00010777d5d0();
  func_0x00010777d520();
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 1077752fc; end: 10777532f;  */

void FUN_1077752fc(void)

{
  func_0x00010777d5d0();
  func_0x00010777d520();
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 107775554; end: 1077755df;  */

void FUN_107775554(undefined8 *param_1)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 auStack_a8 [120];
  
  func_0x00010777d1f4();
  func_0x00010777d860();
  func_0x00010777dda8();
  lVar1 = ((long *)*param_1)[1];
  for (lVar3 = *(long *)*param_1; uVar2 = lVar3 == lVar1, !(bool)uVar2; lVar3 = lVar3 + 0x38) {
    func_0x0001072ddd58(auStack_a8,lVar3);
    func_0x00010777d7d8();
    func_0x00010777d640();
  }
  func_0x00010777d83c();
  func_0x00010777d9b8();
  func_0x00010777d1dc();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010777d9b8();
    func_0x00010777d638();
    func_0x00010777d428();
    func_0x0001077755fc();
    return;
  }
  return;
}



/* Entry: 1077758b8; end: 1077758d7;  */

void FUN_1077758b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  func_0x00010777ae10(param_1,&uStack_18);
  return;
}



/* Entry: 107775ee4; end: 107775f1b;  */

void FUN_107775ee4(void)

{
  func_0x00010777d738();
  func_0x000107775f00();
  return;
}



/* Entry: 107776f6c; end: 107776fc3;  */

void FUN_107776f6c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 extraout_w8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(int *)(param_2 + 0x68) == 3) {
    func_0x00010732393c();
    func_0x00010724ef84(&uStack_38);
    func_0x00010777ddf0();
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = 0;
    func_0x00010777d650();
    uVar1 = 1;
  }
  else {
    func_0x00010777d748();
    uVar1 = extraout_w8;
  }
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 10777762c; end: 10777765b;  */

void FUN_10777762c(void)

{
  func_0x00010777d3b8(6);
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 107777a44; end: 107777a8b;  */

void FUN_107777a44(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x00010724ef84(auStack_38,param_2);
  func_0x00010777784c(param_1,auStack_38);
  func_0x00010777d650();
  return;
}



/* Entry: 107777cd8; end: 107777d1b;  */

undefined8 FUN_107777cd8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x000107268798(param_1,&uStack_40);
  func_0x00010777dab8();
  return param_1;
}



/* Entry: 107778054; end: 10777812f;  */

void FUN_107778054(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int extraout_w10;
  
  lVar4 = *param_2;
  lVar1 = param_2[1];
  if (lVar4 == lVar1) {
    if ((bRam00000001137262f0 & 1) == 0) {
      iVar2 = 0x137262f0;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        lVar4 = 0x38;
        __Znwm();
        func_0x00010777de50();
        *(undefined8 *)(lVar4 + 0x30) = 0;
        *(undefined8 *)(lVar4 + 0x28) = 0;
        puRam00000001137262e0 = (undefined8 *)(lVar4 + 0x18);
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *puRam00000001137262e0 = 0;
        lRam00000001137262e8 = lVar4;
        ___cxa_guard_release(0x1137262f0);
      }
    }
    lVar4 = lRam00000001137262e8;
    *param_1 = puRam00000001137262e0;
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
  }
  else {
    lVar3 = 0x38;
    __Znwm();
    func_0x00010777de50();
    lVar5 = param_2[2];
    *(long *)(lVar3 + 0x20) = lVar1;
    *(long *)(lVar3 + 0x28) = lVar5;
    *(undefined4 *)(lVar3 + 0x30) = 0;
    param_1[1] = lVar3;
    *(long *)(lVar3 + 0x18) = lVar4;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_1 = (long *)(lVar3 + 0x18);
  }
  return;
}



/* Entry: 1077782ac; end: 10777832b;  */

void FUN_1077782ac(long *param_1,undefined1 *param_2)

{
  byte bVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int extraout_w8;
  undefined8 extraout_x8;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int extraout_w10;
  undefined8 unaff_x19;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  long lVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar14;
  undefined *puVar15;
  long lVar16;
  byte abStack_450 [736];
  long lStack_170;
  long lStack_168;
  undefined4 uStack_108;
  long *plStack_f0;
  undefined8 ******ppppppuStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [24];
  byte bStack_b8;
  long alStack_a0 [16];
  
  pbVar3 = auStack_d0;
  pppppppuVar14 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d224();
  plVar8 = alStack_a0;
  func_0x00010777dc20(*param_2);
  plVar7 = (long *)*param_1;
  func_0x00010777d68c();
  func_0x00010777d648();
  if ((bStack_b8 & 1) == 0) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777d698();
    func_0x00010777d440();
    func_0x00010777d2ec();
    func_0x00010777d89c();
  }
  func_0x00010777d8a4();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d6ec();
  func_0x00010777d8a4();
  puVar15 = &UNK_10777832c;
  func_0x00010777d638();
  uVar4 = (int)param_1[0xd] == 2;
  if ((bool)uVar4) {
    plVar5 = plVar7 + 1;
    param_1 = param_1 + 1;
    pbVar3 = abStack_450 + 0x2b0;
    puStack_d8 = &UNK_10777832c;
    plStack_f0 = plVar8;
    ppppppuStack_e0 = pppppppuVar14;
    func_0x00010777d224();
    plVar8 = &lStack_170;
    lStack_168 = *param_1;
    uStack_108 = 2;
    plVar7 = (long *)*plVar5;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((abStack_450[0x2c8] & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar5;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      param_1 = plVar5;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    puVar15 = &UNK_1077783d8;
    func_0x00010777d638();
    pppppppuVar14 = &ppppppuStack_e0;
  }
  uVar4 = (int)param_1[0xd] == 3;
  if ((bool)uVar4) {
    plVar5 = plVar7 + 1;
    *(undefined8 *)(pbVar3 + -0x30) = unaff_x22;
    *(undefined1 **)(pbVar3 + -0x28) = unaff_x21;
    *(long **)(pbVar3 + -0x20) = plVar8;
    *(undefined8 *)(pbVar3 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar14;
    *(undefined **)(pbVar3 + -8) = puVar15;
    pppppppuVar14 = (undefined8 *******)(pbVar3 + -0x10);
    func_0x00010777d1f4(plVar5,param_1 + 1);
    unaff_x21 = pbVar3 + -0xb0;
    param_1 = (long *)(pbVar3 + -0xb0);
    func_0x0001072ddd58();
    plVar7 = (long *)*plVar5;
    func_0x00010777d68c();
    func_0x00010777d640();
    if ((pbVar3[-200] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
    }
    func_0x00010777d8a4();
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    puVar15 = &UNK_107778484;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0xe0;
    plVar8 = plVar5;
  }
  uVar4 = (int)param_1[0xd] == 4;
  if ((bool)uVar4) {
    plVar5 = plVar7 + 1;
    param_1 = param_1 + 1;
    *(long **)(pbVar3 + -0x20) = plVar8;
    *(undefined8 *)(pbVar3 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar14;
    *(undefined **)(pbVar3 + -8) = puVar15;
    pppppppuVar14 = (undefined8 *******)(pbVar3 + -0x10);
    func_0x00010777d224();
    plVar8 = (long *)(pbVar3 + -0xa0);
    lVar10 = *param_1;
    *(long *)(pbVar3 + -0x90) = param_1[1];
    *(long *)(pbVar3 + -0x98) = lVar10;
    *(undefined4 *)(pbVar3 + -0x38) = 4;
    plVar7 = (long *)*plVar5;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((pbVar3[-0xb8] & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar5;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      param_1 = plVar5;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    puVar15 = &UNK_107778530;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0xd0;
  }
  *(undefined8 *)(pbVar3 + -0x60) = unaff_x28;
  *(undefined8 *)(pbVar3 + -0x58) = unaff_x27;
  *(undefined8 *)(pbVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(pbVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(pbVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(pbVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(pbVar3 + -0x28) = unaff_x21;
  *(long **)(pbVar3 + -0x20) = plVar8;
  *(undefined8 *)(pbVar3 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar14;
  *(undefined **)(pbVar3 + -8) = puVar15;
  plVar8 = plVar7;
  func_0x00010777d250();
  *(undefined8 *)(pbVar3 + -0x70) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar4) {
    lVar10 = param_1[2];
    lVar16 = param_1[1];
    *(long *)(pbVar3 + -0xd0) = param_1[2];
    *(long *)(pbVar3 + -0xd8) = lVar16;
    if (lVar10 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc30();
    func_0x00010777d7a0();
    func_0x00010777d640();
    if ((pbVar3[-0x100] & 1) == 0) goto code_r0x0001077787a0;
    func_0x00010777d818();
    func_0x00010777d550();
code_r0x000107778790:
    func_0x00010777d2ec();
    func_0x0001072dbd40(pbVar3 + -0xf8);
code_r0x0001077787a4:
    func_0x0001072dbe34(pbVar3 + -0x110);
  }
  else {
    uVar4 = extraout_w8 == 6;
    if ((bool)uVar4) {
      func_0x000107348eb0(pbVar3 + -0xd8,param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((pbVar3[-0x100] & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
code_r0x0001077787a0:
      func_0x00010777d724();
      goto code_r0x0001077787a4;
    }
    uVar4 = extraout_w8 == 7;
    if ((bool)uVar4) {
      func_0x000107348ecc(pbVar3 + -0xd8,param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((pbVar3[-0x100] & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
      goto code_r0x0001077787a0;
    }
    uVar4 = extraout_w8 == 8;
    if (!(bool)uVar4) {
      func_0x0001074fd134(pbVar3 + -0xd8,param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((pbVar3[-0x100] & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
      goto code_r0x0001077787a0;
    }
    *(undefined8 *)(pbVar3 + -0x108) = 0;
    *(undefined8 *)(pbVar3 + -0x100) = 0;
    *(undefined8 *)(pbVar3 + -0x110) = 0;
    lVar10 = *(long *)param_1[1];
    lVar16 = ((long *)param_1[1])[1];
    if (lVar16 - lVar10 != 0) {
      uVar6 = (lVar16 - lVar10) / 0x70;
      if (uVar6 >> 0x3c != 0) {
        func_0x000107778164();
        goto code_r0x00010777880c;
      }
      *(byte **)(pbVar3 + -0xc0) = pbVar3 + -0x100;
      func_0x000107778178();
      *(ulong *)(pbVar3 + -0xe0) = uVar6;
      *(ulong *)(pbVar3 + -0xd8) = uVar6;
      *(ulong *)(pbVar3 + -0xd0) = uVar6;
      *(ulong *)(pbVar3 + -200) = uVar6 + (long)plVar8 * 0x10;
      func_0x00010777dd9c();
      func_0x00010777dd68();
      lVar10 = *(long *)param_1[1];
      lVar16 = ((long *)param_1[1])[1];
    }
    do {
      uVar4 = lVar10 == lVar16;
      if ((bool)uVar4) {
        FUN_107778054(pbVar3 + -0xe0,pbVar3 + -0x110);
        func_0x00010777d58c();
        func_0x00010777d960();
        func_0x00010773b158(pbVar3 + -0xe0);
        goto code_r0x0001077787f0;
      }
      lVar9 = *plVar7;
      func_0x0001077754c8(pbVar3 + -0xf8,lVar10);
      bVar1 = pbVar3[-0xe8];
      if ((bVar1 & 1) != 0) {
        uVar6 = *(ulong *)(pbVar3 + -0x108);
        uVar11 = *(ulong *)(pbVar3 + -0x100);
        uVar4 = uVar6 == uVar11;
        if (uVar6 < uVar11) {
          func_0x0001072f64f4(uVar6,pbVar3 + -0xf8);
          lVar9 = uVar6 + 0x10;
        }
        else {
          lVar13 = uVar6 - *(long *)(pbVar3 + -0x110);
          uVar6 = (lVar13 >> 4) + 1;
          if (uVar6 >> 0x3c != 0) goto code_r0x000107778800;
          uVar11 = uVar11 - *(long *)(pbVar3 + -0x110);
          uVar12 = (long)uVar11 >> 3;
          if ((ulong)((long)uVar11 >> 3) <= uVar6) {
            uVar12 = uVar6;
          }
          uVar4 = uVar11 == 0x7ffffffffffffff0;
          if (0x7fffffffffffffef < uVar11) {
            uVar12 = 0xfffffffffffffff;
          }
          *(byte **)(pbVar3 + -0xc0) = pbVar3 + -0x100;
          if (uVar12 == 0) {
            uVar12 = 0;
            lVar9 = 0;
          }
          else {
            func_0x000107778178();
          }
          lVar13 = uVar12 + lVar13;
          *(ulong *)(pbVar3 + -0xe0) = uVar12;
          *(long *)(pbVar3 + -0xd8) = lVar13;
          *(long *)(pbVar3 + -0xd0) = lVar13;
          *(ulong *)(pbVar3 + -200) = uVar12 + lVar9 * 0x10;
          func_0x0001072f64f4(lVar13,pbVar3 + -0xf8);
          *(long *)(pbVar3 + -0xd0) = lVar13 + 0x10;
          func_0x00010777dd9c();
          lVar9 = *(long *)(pbVar3 + -0x108);
          func_0x00010777dd68();
        }
        *(long *)(pbVar3 + -0x108) = lVar9;
      }
      func_0x0001072dbe34(pbVar3 + -0xf8);
      lVar10 = lVar10 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777db54();
code_r0x0001077787f0:
    func_0x000107778278(pbVar3 + -0x110);
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar3 + -0x70));
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
code_r0x000107778800:
  func_0x000107778164();
code_r0x00010777880c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107778810);
  (*pcVar2)();
}



/* Entry: 1077788c0; end: 107778997;  */

void FUN_1077788c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  puVar3 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar3 + (param_2[1] - (long)puVar2));
  puStack_60 = param_1 + 2;
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = puVar1;
  for (puVar5 = puVar3; puVar5 != puVar2; puVar5 = puVar5 + 2) {
    uVar4 = *puVar5;
    puStack_38[1] = puVar5[1];
    *puStack_38 = uVar4;
    *puVar5 = 0;
    puVar5[1] = 0;
    puStack_38 = puStack_38 + 2;
  }
  uStack_48 = 1;
  puStack_40 = puVar1;
  for (; puVar3 != puVar2; puVar3 = puVar3 + 2) {
    func_0x0001072dbd40();
  }
  func_0x0001077781ac(&puStack_60);
  param_2[1] = puVar1;
  uVar4 = *param_1;
  param_1[1] = uVar4;
  *param_1 = param_2[1];
  param_2[1] = uVar4;
  uVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar4;
  uVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 107778e0c; end: 107778e6b;  */

void FUN_107778e0c(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  int extraout_w8;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar5;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  
  iVar3 = (int)((ulong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  if ((((*(int *)(param_2 + 0x68) == 0) || (*(int *)(param_2 + 0x68) == 1)) ||
      (*(int *)(param_2 + 0x68) == 2)) ||
     ((*(int *)(param_2 + 0x68) == 3 || (bVar1 = *(int *)(param_2 + 0x68) == 4, bVar1)))) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x24) = 0;
    return;
  }
  func_0x00010777da78();
  if ((((bVar1) || ((extraout_w8 == 6 || (extraout_w8 == 7)))) || (extraout_w8 != 8)) ||
     (func_0x00010777dbe0(), extraout_x8 != 0x3f0)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x24) = 0;
  }
  else {
    puVar5 = &uStack_54;
    for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x70) {
      func_0x00010777ddc4();
      if (iVar3 == 0) {
        *(undefined1 *)param_1 = 0;
        uVar4 = 0;
        goto code_r0x000107778f04;
      }
      *(undefined4 *)puVar5 = uVar2;
      puVar5 = (undefined8 *)((long)puVar5 + 4);
    }
    param_1[1] = uStack_4c;
    *param_1 = uStack_54;
    param_1[3] = uStack_3c;
    param_1[2] = uStack_44;
    *(undefined4 *)(param_1 + 4) = uStack_34;
    uVar4 = 1;
code_r0x000107778f04:
    *(undefined1 *)((long)param_1 + 0x24) = uVar4;
  }
  return;
}



/* Entry: 1077790d0; end: 1077790f3;  */

void FUN_1077790d0(long *param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 uVar19;
  undefined1 extraout_w8;
  undefined1 uVar20;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  long lVar21;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *unaff_x19;
  undefined4 uVar22;
  ulong unaff_x20;
  long *unaff_x21;
  undefined1 *puVar23;
  undefined1 *unaff_x22;
  undefined1 *puVar24;
  undefined8 unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar25;
  code *pcVar26;
  long lVar27;
  undefined8 uVar28;
  byte abStack_1350 [4764];
  undefined4 uStack_b4;
  
  uVar9 = (int)param_1[0xd] == 3;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4();
    func_0x00010777dd10();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      uStack_b4 = (int)unaff_x20;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = &LAB_107779164;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_1350 + 0x1290);
    unaff_x19 = plVar14;
  }
  uVar9 = (int)param_1[0xd] == 4;
  if ((bool)uVar9) {
    plVar14 = param_2 + 1;
    param_2 = param_1 + 1;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(int *)((long)register0x00000008 + -0xb4) = (int)unaff_x20;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)unaff_x19 = 0;
    }
    *(bool *)(unaff_x19 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = &UNK_1077791fc;
    param_1 = plVar14;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar14;
  }
  puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar23 = (undefined1 *)((long)register0x00000008 + -0x10);
  plVar14 = param_1;
  func_0x00010777d1f4();
  func_0x00010777da78();
  uVar22 = SUB84(param_1,0);
  if ((bool)uVar9) {
    lVar21 = param_1[2];
    lVar27 = param_1[1];
    *(long *)((long)register0x00000008 + -0xa0) = param_1[2];
    *(long *)((long)register0x00000008 + -0xa8) = lVar27;
    if (lVar21 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d958();
    func_0x00010777d478();
    if ((ulong)param_1 >> 0x20 != 0) {
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
code_r0x000107779334:
    uVar19 = (undefined1)((ulong)param_1 >> 0x20);
    *(undefined1 *)unaff_x19 = 0;
code_r0x000107779368:
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
  }
  else {
    uVar9 = extraout_w8_05 == 6;
    if ((bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
code_r0x00010777935c:
      func_0x00010777d2c0();
      func_0x0001072dbd40();
      uVar19 = 1;
      goto code_r0x000107779368;
    }
    uVar9 = extraout_w8_05 == 7;
    if ((bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    uVar9 = extraout_w8_05 == 8;
    if (!(bool)uVar9) {
      unaff_x21 = (long *)((long)register0x00000008 + -0xb0);
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)param_1 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)((long)register0x00000008 + -0xc0) = uVar22;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    func_0x00010777dce0();
    func_0x00010777d398(param_1[1]);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x0001073b504c();
    unaff_x21 = (long *)((undefined8 *)param_1[1])[1];
    for (param_1 = *(long **)param_1[1]; uVar9 = param_1 == unaff_x21, !(bool)uVar9;
        param_1 = param_1 + 0xe) {
      func_0x00010777ddc4();
      *(int *)((long)register0x00000008 + -0xc0) = (int)puVar3;
      *(char *)((long)register0x00000008 + -0xbc) = (char)((ulong)puVar3 >> 0x20);
      if ((ulong)puVar3 >> 0x20 == 0) {
        func_0x00010777d724();
        goto code_r0x000107779380;
      }
      func_0x00010777d700();
      func_0x0001073b50ac();
    }
    func_0x00010777dac0();
    func_0x000107535bd0();
    func_0x00010777d338();
    func_0x0001072dbd40();
code_r0x000107779380:
    plVar14 = (long *)((long)register0x00000008 + -0xb0);
    func_0x0001056d1ce4();
  }
  func_0x00010777d1dc();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar25 = &UNK_1077793bc;
  func_0x00010777d638();
  if ((int)plVar14[0xd] == 0) {
    plVar15 = param_2 + 1;
    puVar8 = (undefined1 *)((long)register0x00000008 + -0x1b0);
    *(long **)((long)register0x00000008 + -0xe0) = param_1;
    *(long **)((long)register0x00000008 + -0xd8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0xd0) = puVar23;
    *(undefined **)((long)register0x00000008 + -200) = &UNK_1077793bc;
    puVar23 = (undefined1 *)((long)register0x00000008 + -0xd0);
    func_0x00010777d224(plVar15,plVar14 + 1);
    *(undefined4 *)((long)register0x00000008 + -0x130) = 0;
    param_2 = (long *)*plVar15;
    param_1 = (long *)((long)register0x00000008 + -0x198);
    func_0x00010777d824();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xf0) & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779450;
    func_0x00010777d638();
  }
  uVar9 = (int)plVar14[0xd] == 1;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15,plVar14 + 1);
    func_0x00010777d8d4();
    param_2 = (long *)*plVar15;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_1077794e4;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  uVar9 = (int)plVar14[0xd] == 2;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15,plVar14 + 1);
    func_0x00010777d904();
    param_2 = (long *)*plVar15;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar14 = plVar15;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar14 = plVar15;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779578;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  uVar9 = (int)plVar14[0xd] == 3;
  if ((bool)uVar9) {
    plVar15 = param_2 + 1;
    param_2 = plVar14 + 1;
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(plVar15);
    unaff_x19 = (long *)(puVar8 + -0x60);
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    plVar14 = unaff_x19;
    func_0x00010777dbd0();
    puVar25 = &UNK_1077795e4;
    func_0x00010777d638();
    puVar8 = puVar8 + -0x70;
  }
  uVar9 = (int)plVar14[0xd] == 4;
  if ((bool)uVar9) {
    *(long **)(puVar8 + -0x20) = param_1;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d224(param_2 + 1,plVar14 + 1);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar8[-0x30] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar25 = &UNK_107779678;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xf0;
  }
  puVar3 = puVar8 + -0x120;
  *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
  *(ulong *)(puVar8 + -0x48) = unaff_x25;
  *(long **)(puVar8 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar8 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
  *(long **)(puVar8 + -0x28) = unaff_x21;
  *(long **)(puVar8 + -0x20) = param_1;
  *(long **)(puVar8 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar8 + -0x10) = puVar23;
  *(undefined **)(puVar8 + -8) = puVar25;
  puVar23 = puVar8 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar8 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar9) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    puVar17 = (undefined1 *)param_1[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((puVar8[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar11 = (undefined8 *)(puVar8 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar9 = extraout_w8_06 == 6;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6c8();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar9 = extraout_w8_06 == 7;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6bc();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar9 = extraout_w8_06 == 8;
    if (!(bool)uVar9) {
      unaff_x22 = puVar8 + -0x110;
      func_0x00010777d6d4();
      puVar17 = (undefined1 *)param_1[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar8[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)(puVar8 + -0x90) = 0;
    *(undefined8 *)(puVar8 + -0x88) = 0;
    *(undefined8 *)(puVar8 + -0x98) = 0;
    func_0x00010777d398(unaff_x21[1]);
    func_0x0001072dd514(puVar8 + -0x98);
    func_0x00010777de3c();
    do {
      uVar9 = unaff_x21 == unaff_x24;
      if ((bool)uVar9) {
        puVar17 = puVar8 + -0x98;
        func_0x0001073fb2d4(puVar8 + -0x110);
        lVar21 = *(long *)(puVar8 + -0x110);
        unaff_x19[1] = *(long *)(puVar8 + -0x108);
        *unaff_x19 = lVar21;
        *(undefined8 *)(puVar8 + -0x110) = 0;
        *(undefined8 *)(puVar8 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(puVar8 + -0x110);
        goto code_r0x000107779838;
      }
      puVar17 = (undefined1 *)*param_1;
      func_0x000107323900(puVar8 + -0x110,unaff_x21);
      bVar2 = puVar8[-0xd8];
      unaff_x25 = (ulong)bVar2;
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar17 = puVar8 + -0x110;
        func_0x0001072d17f4(puVar8 + -0x98);
      }
      func_0x00010724b3d8(puVar8 + -0x110);
      unaff_x21 = unaff_x21 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar11 = (undefined8 *)(puVar8 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar8 + -0x58));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar12 = (undefined8 *)(puVar8 + -0x98);
  func_0x00010724b3d8();
  pcVar26 = FUN_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar12 + 0xd) == 0) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar3 = puVar8 + -0x250;
    *(undefined8 *)(puVar8 + -0x150) = unaff_x28;
    *(undefined8 *)(puVar8 + -0x148) = unaff_x27;
    *(undefined8 **)(puVar8 + -0x140) = puVar11;
    *(long **)(puVar8 + -0x138) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x130) = puVar23;
    *(code **)(puVar8 + -0x128) = FUN_1077798bc;
    puVar23 = puVar8 + -0x130;
    func_0x00010777d1f4(puVar13,puVar12 + 1);
    *(undefined4 *)(puVar8 + -0x1e8) = 0;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar8[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&LAB_107779964;
    func_0x00010777d638();
    puVar11 = (undefined8 *)(puVar8 + -0x250);
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 1;
  if ((bool)uVar9) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar12 = puVar12 + 1;
    puVar4 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    puVar3[-0x128] = *(undefined1 *)puVar12;
    *(undefined4 *)(puVar3 + -200) = 1;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&UNK_107779a1c;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar4;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 2;
  if ((bool)uVar9) {
    puVar13 = (undefined8 *)(puVar17 + 8);
    puVar12 = puVar12 + 1;
    puVar5 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar3 + -0x128) = *puVar12;
    *(undefined4 *)(puVar3 + -200) = 2;
    puVar17 = (undefined1 *)*puVar13;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar13;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar13;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&UNK_107779ad4;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar5;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 3;
  if ((bool)uVar9) {
    puVar13 = puVar12 + 1;
    puVar12 = (undefined8 *)(puVar3 + -0x130);
    plVar6 = (long *)(puVar3 + -0x130);
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(long **)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4(puVar17 + 8,puVar13);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = FUN_107779b94;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = (undefined8 *)(puVar17 + 8);
    unaff_x21 = plVar6;
  }
  uVar9 = *(int *)(puVar12 + 0xd) == 4;
  if ((bool)uVar9) {
    puVar12 = puVar12 + 1;
    puVar7 = (undefined8 *)(puVar3 + -0x130);
    *(undefined8 *)(puVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar3 + -0x20) = puVar11;
    *(long **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar23;
    *(code **)(puVar3 + -8) = pcVar26;
    puVar23 = puVar3 + -0x10;
    func_0x00010777d1f4();
    uVar28 = *puVar12;
    *(undefined8 *)(puVar3 + -0x120) = puVar12[1];
    *(undefined8 *)(puVar3 + -0x128) = uVar28;
    *(undefined4 *)(puVar3 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar3[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar26 = (code *)&LAB_107779c4c;
    func_0x00010777d638();
    puVar3 = puVar3 + -0x130;
    puVar11 = puVar7;
  }
  puVar8 = puVar3 + -0x150;
  puVar24 = puVar3 + -0x150;
  puVar17 = puVar3 + -0x150;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(ulong *)(puVar3 + -0x48) = unaff_x25;
  *(long **)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar3 + -0x20) = puVar11;
  *(long **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar23;
  *(code **)(puVar3 + -8) = pcVar26;
  puVar23 = puVar3 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar3 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar9) {
    lVar21 = unaff_x21[2];
    lVar27 = unaff_x21[1];
    *(long *)(puVar3 + -0x140) = unaff_x21[2];
    *(long *)(puVar3 + -0x148) = lVar27;
    if (lVar21 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar3 + -0xe8) = 5;
    puVar18 = (undefined1 *)puVar11[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = (long *)(puVar3 + -0x150);
    puVar17 = unaff_x22;
    if ((puVar3[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = (long *)(puVar3 + -0x150);
      puVar24 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    plVar14 = (long *)(puVar3 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar17;
  }
  else {
    uVar9 = extraout_w8_07 == 6;
    if ((bool)uVar9) {
      func_0x00010777d6c8();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar17 = puVar3 + -0x150;
      if ((puVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar24 = puVar3 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar17 = puVar24;
      goto code_r0x000107779dfc;
    }
    uVar9 = extraout_w8_07 == 7;
    if ((bool)uVar9) {
      func_0x00010777d6bc();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar17 = puVar3 + -0x150;
      if ((puVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar24 = puVar3 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar9 = extraout_w8_07 == 8;
    if (!(bool)uVar9) {
      func_0x00010777d6d4();
      puVar18 = (undefined1 *)puVar11[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((puVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(puVar3 + -0xd8) = 0;
    *(undefined8 *)(puVar3 + -0xd0) = 0;
    *(undefined8 *)(puVar3 + -0xe0) = 0;
    func_0x00010777d398(unaff_x21[1]);
    func_0x0001072ac134(puVar3 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar9 = unaff_x21 == unaff_x24;
      if ((bool)uVar9) {
        puVar18 = puVar3 + -0xe0;
        func_0x000107327958(puVar3 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(puVar3 + -0xa0,unaff_x21,*puVar11);
      puVar18 = puVar3 + -0xa0;
      func_0x00010729d394(puVar3 + -0x150);
      func_0x000104c3323c(puVar3 + -0xa0);
      bVar2 = puVar3[-0x110];
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar18 = puVar3 + -0x150;
        func_0x0001072d7f34(puVar3 + -0xe0);
      }
      func_0x000107267ed0(puVar3 + -0x150);
      unaff_x21 = unaff_x21 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    plVar14 = (long *)(puVar3 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar3 + -0x58));
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  plVar15 = (long *)(puVar3 + -0xa0);
  func_0x000107267ed0();
  puVar25 = &UNK_107779ed8;
  func_0x00010777d9d0();
  uVar10 = (uint)plVar14;
  uVar19 = SUB81(plVar14,0);
  if ((int)plVar15[0xd] == 0) {
    plVar16 = (long *)(puVar18 + 8);
    puVar8 = puVar3 + -0x210;
    *(undefined1 **)(puVar3 + -0x180) = unaff_x22;
    *(long **)(puVar3 + -0x178) = unaff_x21;
    *(long **)(puVar3 + -0x170) = plVar14;
    *(long **)(puVar3 + -0x168) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x160) = puVar23;
    *(undefined **)(puVar3 + -0x158) = &UNK_107779ed8;
    puVar23 = puVar3 + -0x160;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    *(undefined4 *)(puVar3 + -0x198) = 0;
    puVar18 = (undefined1 *)*plVar16;
    unaff_x21 = (long *)(puVar3 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8;
    }
    else {
      puVar3[-0x201] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_107779f6c;
    plVar15 = plVar16;
    func_0x00010777d638();
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 1;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777dae0();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_00;
    }
    else {
      puVar8[-0xb1] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a170;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 2;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777dacc();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_01;
    }
    else {
      puVar8[-0xb1] = uVar19;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a208;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 3;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    plVar14 = plVar16;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    func_0x00010777dd10();
    puVar18 = (undefined1 *)*plVar16;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar16 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_02;
    }
    else {
      puVar8[-0xb1] = (char)plVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a2a0;
    plVar15 = plVar14;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar14;
    plVar14 = plVar16;
  }
  uVar9 = (int)plVar15[0xd] == 4;
  if ((bool)uVar9) {
    plVar16 = (long *)(puVar18 + 8);
    *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
    *(long **)(puVar8 + -0x28) = unaff_x21;
    *(long **)(puVar8 + -0x20) = plVar14;
    *(long **)(puVar8 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar8 + -0x10) = puVar23;
    *(undefined **)(puVar8 + -8) = puVar25;
    puVar23 = puVar8 + -0x10;
    func_0x00010777d1f4(plVar16,plVar15 + 1);
    unaff_x21 = (long *)(puVar8 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar14 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar19 = extraout_w8_03;
    }
    else {
      puVar8[-0xb1] = (char)plVar14;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar19 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar19;
    func_0x00010777d1dc();
    if ((bool)uVar9) {
      return;
    }
    ___stack_chk_fail();
    puVar25 = &UNK_10777a338;
    plVar15 = plVar16;
    func_0x00010777d638();
    puVar8 = puVar8 + -0xc0;
    unaff_x19 = plVar16;
  }
  uVar10 = (uint)plVar15;
  *(undefined1 **)(puVar8 + -0x30) = unaff_x22;
  *(long **)(puVar8 + -0x28) = unaff_x21;
  *(long **)(puVar8 + -0x20) = plVar14;
  *(long **)(puVar8 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar8 + -0x10) = puVar23;
  *(undefined **)(puVar8 + -8) = puVar25;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar9) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar14 >> 8 & 1) != 0) {
      puVar8[-0xc0] = (char)plVar14;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar19 = extraout_w8_04;
  }
  else {
    uVar9 = extraout_w8_08 == 6;
    if ((bool)uVar9) {
      unaff_x22 = puVar8 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar8[-0xc0] = (char)uVar10;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar9 = extraout_w8_08 == 7;
      if ((bool)uVar9) {
        unaff_x22 = puVar8 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar8[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar9 = extraout_w8_08 == 8;
        if ((bool)uVar9) {
          func_0x00010777dce0();
          func_0x00010777d398(unaff_x21[1]);
          func_0x0001075356bc(puVar8 + -0xb0);
          unaff_x22 = (undefined1 *)((undefined8 *)unaff_x21[1])[1];
          for (puVar23 = *(undefined1 **)unaff_x21[1]; uVar9 = puVar23 == unaff_x22, !(bool)uVar9;
              puVar23 = puVar23 + 0x70) {
            puVar3 = puVar23;
            func_0x000107775a54(puVar23,*plVar14);
            *(short *)(puVar8 + -0xc0) = (short)puVar3;
            if (((uint)puVar3 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar8 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar8 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar10 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar8[-0xc0] = (char)uVar10;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar19 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar19;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar8 + -0xd0) = puVar8 + -0x10;
  *(undefined **)(puVar8 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779474; end: 1077794e3;  */

void FUN_107779474(undefined8 *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 extraout_w8;
  undefined1 uVar15;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar16;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar17;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar18;
  undefined1 *unaff_x22;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar21;
  undefined *puVar22;
  code *pcVar23;
  undefined8 uVar24;
  byte abStack_1020 [3856];
  undefined8 ******ppppppuStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [192];
  byte bStack_30;
  byte *pbVar3;
  
  pbVar3 = auStack_f0;
  pppppppuVar21 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d224();
  func_0x00010777d8d4();
  puVar12 = (undefined8 *)*param_1;
  func_0x00010777d824();
  func_0x00010777d648();
  if ((bStack_30 & 1) == 0) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777d80c();
    func_0x00010777d564();
    func_0x00010777d304();
    func_0x00010777d9c8();
  }
  func_0x00010777d9c0();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d854();
  func_0x00010777d9c0();
  puVar22 = &UNK_1077794e4;
  func_0x00010777d638();
  uVar8 = *(int *)(param_1 + 0xd) == 2;
  if ((bool)uVar8) {
    puVar11 = puVar12 + 1;
    pbVar3 = abStack_1020 + 0xe40;
    puStack_f8 = &UNK_1077794e4;
    ppppppuStack_100 = pppppppuVar21;
    func_0x00010777d224(puVar11,param_1 + 1);
    func_0x00010777d904();
    puVar12 = (undefined8 *)*puVar11;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((abStack_1020[0xf00] & 1) == 0) {
      func_0x00010777d724();
      param_1 = puVar11;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      param_1 = puVar11;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar22 = &UNK_107779578;
    func_0x00010777d638();
    pppppppuVar21 = &ppppppuStack_100;
  }
  uVar8 = *(int *)(param_1 + 0xd) == 3;
  if ((bool)uVar8) {
    puVar11 = puVar12 + 1;
    puVar12 = param_1 + 1;
    *(long **)(pbVar3 + -0x20) = unaff_x20;
    *(undefined8 **)(pbVar3 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar21;
    *(undefined **)(pbVar3 + -8) = puVar22;
    pppppppuVar21 = (undefined8 *******)(pbVar3 + -0x10);
    func_0x00010777d224(puVar11);
    unaff_x19 = (undefined8 *)(pbVar3 + -0x60);
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    param_1 = unaff_x19;
    func_0x00010777dbd0();
    puVar22 = &UNK_1077795e4;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0x70;
  }
  uVar8 = *(int *)(param_1 + 0xd) == 4;
  if ((bool)uVar8) {
    *(long **)(pbVar3 + -0x20) = unaff_x20;
    *(undefined8 **)(pbVar3 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar21;
    *(undefined **)(pbVar3 + -8) = puVar22;
    pppppppuVar21 = (undefined8 *******)(pbVar3 + -0x10);
    func_0x00010777d224(puVar12 + 1,param_1 + 1);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((pbVar3[-0x30] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    puVar22 = &UNK_107779678;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0xf0;
  }
  puVar2 = pbVar3 + -0x120;
  *(undefined8 *)(pbVar3 + -0x50) = unaff_x26;
  *(ulong *)(pbVar3 + -0x48) = unaff_x25;
  *(undefined1 **)(pbVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar3 + -0x38) = unaff_x23;
  *(undefined1 **)(pbVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(pbVar3 + -0x28) = unaff_x21;
  *(long **)(pbVar3 + -0x20) = unaff_x20;
  *(undefined8 **)(pbVar3 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar21;
  *(undefined **)(pbVar3 + -8) = puVar22;
  puVar18 = pbVar3 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(pbVar3 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar8) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    puVar13 = (undefined1 *)unaff_x20[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((pbVar3[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar12 = (undefined8 *)(pbVar3 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar8 = extraout_w8_05 == 6;
    if ((bool)uVar8) {
      unaff_x22 = pbVar3 + -0x110;
      func_0x00010777d6c8();
      puVar13 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar3[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar8 = extraout_w8_05 == 7;
    if ((bool)uVar8) {
      unaff_x22 = pbVar3 + -0x110;
      func_0x00010777d6bc();
      puVar13 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar3[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar8 = extraout_w8_05 == 8;
    if (!(bool)uVar8) {
      unaff_x22 = pbVar3 + -0x110;
      func_0x00010777d6d4();
      puVar13 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((pbVar3[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    *(undefined8 *)(pbVar3 + -0x90) = 0;
    *(undefined8 *)(pbVar3 + -0x88) = 0;
    *(undefined8 *)(pbVar3 + -0x98) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072dd514(pbVar3 + -0x98);
    func_0x00010777de3c();
    do {
      uVar8 = unaff_x21 == unaff_x24;
      if ((bool)uVar8) {
        puVar13 = pbVar3 + -0x98;
        func_0x0001073fb2d4(pbVar3 + -0x110);
        uVar24 = *(undefined8 *)(pbVar3 + -0x110);
        unaff_x19[1] = *(undefined8 *)(pbVar3 + -0x108);
        *unaff_x19 = uVar24;
        *(undefined8 *)(pbVar3 + -0x110) = 0;
        *(undefined8 *)(pbVar3 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(pbVar3 + -0x110);
        goto code_r0x000107779838;
      }
      puVar13 = (undefined1 *)*unaff_x20;
      func_0x000107323900(pbVar3 + -0x110,unaff_x21);
      bVar1 = pbVar3[-0xd8];
      unaff_x25 = (ulong)bVar1;
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar13 = pbVar3 + -0x110;
        func_0x0001072d17f4(pbVar3 + -0x98);
      }
      func_0x00010724b3d8(pbVar3 + -0x110);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779838:
    puVar12 = (undefined8 *)(pbVar3 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar3 + -0x58));
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar11 = (undefined8 *)(pbVar3 + -0x98);
  func_0x00010724b3d8();
  pcVar23 = FUN_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar11 + 0xd) == 0) {
    puVar10 = (undefined8 *)(puVar13 + 8);
    puVar2 = pbVar3 + -0x250;
    *(undefined8 *)(pbVar3 + -0x150) = unaff_x28;
    *(undefined8 *)(pbVar3 + -0x148) = unaff_x27;
    *(undefined8 **)(pbVar3 + -0x140) = puVar12;
    *(undefined8 **)(pbVar3 + -0x138) = unaff_x19;
    *(undefined1 **)(pbVar3 + -0x130) = puVar18;
    *(code **)(pbVar3 + -0x128) = FUN_1077798bc;
    puVar18 = pbVar3 + -0x130;
    func_0x00010777d1f4(puVar10,puVar11 + 1);
    *(undefined4 *)(pbVar3 + -0x1e8) = 0;
    puVar13 = (undefined1 *)*puVar10;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar3[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar10;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar10;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar23 = (code *)&LAB_107779964;
    func_0x00010777d638();
    puVar12 = (undefined8 *)(pbVar3 + -0x250);
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 1;
  if ((bool)uVar8) {
    puVar10 = (undefined8 *)(puVar13 + 8);
    puVar11 = puVar11 + 1;
    puVar4 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar12;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar18;
    *(code **)(puVar2 + -8) = pcVar23;
    puVar18 = puVar2 + -0x10;
    func_0x00010777d1f4();
    puVar2[-0x128] = *(undefined1 *)puVar11;
    *(undefined4 *)(puVar2 + -200) = 1;
    puVar13 = (undefined1 *)*puVar10;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar10;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar10;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar23 = (code *)&UNK_107779a1c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar12 = puVar4;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 2;
  if ((bool)uVar8) {
    puVar10 = (undefined8 *)(puVar13 + 8);
    puVar11 = puVar11 + 1;
    puVar5 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar12;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar18;
    *(code **)(puVar2 + -8) = pcVar23;
    puVar18 = puVar2 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar2 + -0x128) = *puVar11;
    *(undefined4 *)(puVar2 + -200) = 2;
    puVar13 = (undefined1 *)*puVar10;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar10;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar10;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar23 = (code *)&UNK_107779ad4;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar12 = puVar5;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 3;
  if ((bool)uVar8) {
    puVar10 = puVar11 + 1;
    puVar11 = (undefined8 *)(puVar2 + -0x130);
    puVar6 = puVar2 + -0x130;
    *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x20) = puVar12;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar18;
    *(code **)(puVar2 + -8) = pcVar23;
    puVar18 = puVar2 + -0x10;
    func_0x00010777d1f4(puVar13 + 8,puVar10);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar23 = FUN_107779b94;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar12 = (undefined8 *)(puVar13 + 8);
    unaff_x21 = puVar6;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 4;
  if ((bool)uVar8) {
    puVar11 = puVar11 + 1;
    puVar7 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar12;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar18;
    *(code **)(puVar2 + -8) = pcVar23;
    puVar18 = puVar2 + -0x10;
    func_0x00010777d1f4();
    uVar24 = *puVar11;
    *(undefined8 *)(puVar2 + -0x120) = puVar11[1];
    *(undefined8 *)(puVar2 + -0x128) = uVar24;
    *(undefined4 *)(puVar2 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    pcVar23 = (code *)&LAB_107779c4c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar12 = puVar7;
  }
  puVar13 = puVar2 + -0x150;
  puVar19 = puVar2 + -0x150;
  puVar20 = puVar2 + -0x150;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(ulong *)(puVar2 + -0x48) = unaff_x25;
  *(undefined1 **)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar2 + -0x20) = puVar12;
  *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar18;
  *(code **)(puVar2 + -8) = pcVar23;
  puVar18 = puVar2 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar2 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar8) {
    lVar17 = *(long *)(unaff_x21 + 0x10);
    uVar24 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)(puVar2 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)(puVar2 + -0x148) = uVar24;
    if (lVar17 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    *(undefined4 *)(puVar2 + -0xe8) = 5;
    puVar14 = (undefined1 *)puVar12[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = puVar2 + -0x150;
    puVar20 = unaff_x22;
    if ((puVar2[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = puVar2 + -0x150;
      puVar19 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar12 = (undefined8 *)(puVar2 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar20;
  }
  else {
    uVar8 = extraout_w8_06 == 6;
    if ((bool)uVar8) {
      func_0x00010777d6c8();
      puVar14 = (undefined1 *)puVar12[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar20 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar19 = puVar2 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar20 = puVar19;
      goto code_r0x000107779dfc;
    }
    uVar8 = extraout_w8_06 == 7;
    if ((bool)uVar8) {
      func_0x00010777d6bc();
      puVar14 = (undefined1 *)puVar12[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar20 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar19 = puVar2 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar8 = extraout_w8_06 == 8;
    if (!(bool)uVar8) {
      func_0x00010777d6d4();
      puVar14 = (undefined1 *)puVar12[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(puVar2 + -0xd8) = 0;
    *(undefined8 *)(puVar2 + -0xd0) = 0;
    *(undefined8 *)(puVar2 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072ac134(puVar2 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar8 = unaff_x21 == unaff_x24;
      if ((bool)uVar8) {
        puVar14 = puVar2 + -0xe0;
        func_0x000107327958(puVar2 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(puVar2 + -0xa0,unaff_x21,*puVar12);
      puVar14 = puVar2 + -0xa0;
      func_0x00010729d394(puVar2 + -0x150);
      func_0x000104c3323c(puVar2 + -0xa0);
      bVar1 = puVar2[-0x110];
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar14 = puVar2 + -0x150;
        func_0x0001072d7f34(puVar2 + -0xe0);
      }
      func_0x000107267ed0(puVar2 + -0x150);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar12 = (undefined8 *)(puVar2 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar2 + -0x58));
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar11 = (undefined8 *)(puVar2 + -0xa0);
  func_0x000107267ed0();
  puVar22 = &UNK_107779ed8;
  func_0x00010777d9d0();
  uVar9 = (uint)puVar12;
  uVar16 = SUB81(puVar12,0);
  if (*(int *)(puVar11 + 0xd) == 0) {
    puVar10 = (undefined8 *)(puVar14 + 8);
    puVar13 = puVar2 + -0x210;
    *(undefined1 **)(puVar2 + -0x180) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x178) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x170) = puVar12;
    *(undefined8 **)(puVar2 + -0x168) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x160) = puVar18;
    *(undefined **)(puVar2 + -0x158) = &UNK_107779ed8;
    puVar18 = puVar2 + -0x160;
    func_0x00010777d1f4(puVar10,puVar11 + 1);
    *(undefined4 *)(puVar2 + -0x198) = 0;
    puVar14 = (undefined1 *)*puVar10;
    unaff_x21 = puVar2 + -0x200;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8;
    }
    else {
      puVar2[-0x201] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar22 = &UNK_107779f6c;
    puVar11 = puVar10;
    func_0x00010777d638();
    unaff_x19 = puVar10;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 1;
  if ((bool)uVar8) {
    puVar10 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar13 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar13 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar13 + -0x20) = puVar12;
    *(undefined8 **)(puVar13 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar13 + -0x10) = puVar18;
    *(undefined **)(puVar13 + -8) = puVar22;
    puVar18 = puVar13 + -0x10;
    func_0x00010777d1f4(puVar10,puVar11 + 1);
    unaff_x21 = puVar13 + -0xb0;
    func_0x00010777dae0();
    puVar14 = (undefined1 *)*puVar10;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_00;
    }
    else {
      puVar13[-0xb1] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar22 = &UNK_10777a170;
    puVar11 = puVar10;
    func_0x00010777d638();
    puVar13 = puVar13 + -0xc0;
    unaff_x19 = puVar10;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 2;
  if ((bool)uVar8) {
    puVar10 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar13 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar13 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar13 + -0x20) = puVar12;
    *(undefined8 **)(puVar13 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar13 + -0x10) = puVar18;
    *(undefined **)(puVar13 + -8) = puVar22;
    puVar18 = puVar13 + -0x10;
    func_0x00010777d1f4(puVar10,puVar11 + 1);
    unaff_x21 = puVar13 + -0xb0;
    func_0x00010777dacc();
    puVar14 = (undefined1 *)*puVar10;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_01;
    }
    else {
      puVar13[-0xb1] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar22 = &UNK_10777a208;
    puVar11 = puVar10;
    func_0x00010777d638();
    puVar13 = puVar13 + -0xc0;
    unaff_x19 = puVar10;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 3;
  if ((bool)uVar8) {
    puVar10 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar13 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar13 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar13 + -0x20) = puVar12;
    *(undefined8 **)(puVar13 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar13 + -0x10) = puVar18;
    *(undefined **)(puVar13 + -8) = puVar22;
    puVar18 = puVar13 + -0x10;
    puVar12 = puVar10;
    func_0x00010777d1f4(puVar10,puVar11 + 1);
    func_0x00010777dd10();
    puVar14 = (undefined1 *)*puVar10;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_02;
    }
    else {
      puVar13[-0xb1] = (char)puVar10;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar22 = &UNK_10777a2a0;
    puVar11 = puVar12;
    func_0x00010777d638();
    puVar13 = puVar13 + -0xc0;
    unaff_x19 = puVar12;
    puVar12 = puVar10;
  }
  uVar8 = *(int *)(puVar11 + 0xd) == 4;
  if ((bool)uVar8) {
    puVar10 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar13 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar13 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar13 + -0x20) = puVar12;
    *(undefined8 **)(puVar13 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar13 + -0x10) = puVar18;
    *(undefined **)(puVar13 + -8) = puVar22;
    puVar18 = puVar13 + -0x10;
    func_0x00010777d1f4(puVar10,puVar11 + 1);
    unaff_x21 = puVar13 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar12 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_03;
    }
    else {
      puVar13[-0xb1] = (char)puVar12;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    puVar22 = &UNK_10777a338;
    puVar11 = puVar10;
    func_0x00010777d638();
    puVar13 = puVar13 + -0xc0;
    unaff_x19 = puVar10;
  }
  uVar9 = (uint)puVar11;
  *(undefined1 **)(puVar13 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar13 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar13 + -0x20) = puVar12;
  *(undefined8 **)(puVar13 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar13 + -0x10) = puVar18;
  *(undefined **)(puVar13 + -8) = puVar22;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar8) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar12 >> 8 & 1) != 0) {
      puVar13[-0xc0] = (char)puVar12;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar16 = extraout_w8_04;
  }
  else {
    uVar8 = extraout_w8_07 == 6;
    if ((bool)uVar8) {
      unaff_x22 = puVar13 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar13[-0xc0] = (char)uVar9;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar8 = extraout_w8_07 == 7;
      if ((bool)uVar8) {
        unaff_x22 = puVar13 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar13[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar8 = extraout_w8_07 == 8;
        if ((bool)uVar8) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar13 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar18 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar8 = puVar18 == unaff_x22, !(bool)uVar8; puVar18 = puVar18 + 0x70) {
            puVar2 = puVar18;
            func_0x000107775a54(puVar18,*puVar12);
            *(short *)(puVar13 + -0xc0) = (short)puVar2;
            if (((uint)puVar2 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar13 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar13 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar13[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar16 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar16;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar13 + -0xd0) = puVar13 + -0x10;
  *(undefined **)(puVar13 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 1077798bc; end: 1077798db;  */

void FUN_1077798bc(long *param_1,long param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 in_ZR;
  undefined1 uVar7;
  uint uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 extraout_w8;
  undefined1 uVar15;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar16;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  undefined8 extraout_x8;
  long lVar17;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar18;
  undefined1 *unaff_x22;
  undefined1 *puVar19;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar20;
  undefined8 uVar21;
  byte abStack_bc0 [2960];
  
  if ((int)param_1[0xd] == 0) {
    plVar9 = (long *)(param_2 + 8);
    unaff_x20 = abStack_bc0 + 0xa90;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4(plVar9,param_1 + 1);
    abStack_bc0[0xaf8] = 0;
    abStack_bc0[0xaf9] = 0;
    abStack_bc0[0xafa] = 0;
    abStack_bc0[0xafb] = 0;
    param_2 = *plVar9;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((abStack_bc0[0xb80] & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar9;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      param_1 = plVar9;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = (code *)&LAB_107779964;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_bc0 + 0xa90);
  }
  uVar7 = (int)param_1[0xd] == 1;
  if ((bool)uVar7) {
    plVar9 = (long *)(param_2 + 8);
    param_1 = param_1 + 1;
    puVar2 = (undefined8 *)((long)register0x00000008 + -0x130);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x27;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    *(char *)((long)register0x00000008 + -0x128) = (char)*param_1;
    *(undefined4 *)((long)register0x00000008 + -200) = 1;
    param_2 = *plVar9;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x40) & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar9;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      param_1 = plVar9;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = (code *)&UNK_107779a1c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
    unaff_x20 = (byte *)puVar2;
  }
  uVar7 = (int)param_1[0xd] == 2;
  if ((bool)uVar7) {
    plVar9 = (long *)(param_2 + 8);
    param_1 = param_1 + 1;
    puVar3 = (undefined8 *)((long)register0x00000008 + -0x130);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x27;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    *(long *)((long)register0x00000008 + -0x128) = *param_1;
    *(undefined4 *)((long)register0x00000008 + -200) = 2;
    param_2 = *plVar9;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x40) & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar9;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      param_1 = plVar9;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = (code *)&UNK_107779ad4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
    unaff_x20 = (byte *)puVar3;
  }
  uVar7 = (int)param_1[0xd] == 3;
  if ((bool)uVar7) {
    plVar9 = param_1 + 1;
    param_1 = (long *)((long)register0x00000008 + -0x130);
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x130);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4((undefined8 *)(param_2 + 8),plVar9);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0x40) & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = FUN_107779b94;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
    unaff_x20 = (byte *)(param_2 + 8);
    unaff_x21 = puVar4;
  }
  uVar7 = (int)param_1[0xd] == 4;
  if ((bool)uVar7) {
    param_1 = param_1 + 1;
    puVar5 = (undefined8 *)((long)register0x00000008 + -0x130);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x27;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4();
    lVar17 = *param_1;
    *(long *)((long)register0x00000008 + -0x120) = param_1[1];
    *(long *)((long)register0x00000008 + -0x128) = lVar17;
    *(undefined4 *)((long)register0x00000008 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x40) & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = (code *)&LAB_107779c4c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
    unaff_x20 = (byte *)puVar5;
  }
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x150);
  puVar19 = (undefined1 *)((long)register0x00000008 + -0x150);
  puVar13 = (undefined1 *)((long)register0x00000008 + -0x150);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar18 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar7) {
    lVar17 = *(long *)(unaff_x21 + 0x10);
    uVar21 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)((long)register0x00000008 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x148) = uVar21;
    if (lVar17 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    *(undefined4 *)((long)register0x00000008 + -0xe8) = 5;
    puVar14 = *(undefined1 **)((long)unaff_x20 + 8);
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x150);
    puVar13 = unaff_x22;
    if ((*(byte *)((long)register0x00000008 + -0x60) & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x150);
      puVar19 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar10 = (undefined8 *)((long)register0x00000008 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar13;
  }
  else {
    uVar7 = extraout_w8_05 == 6;
    if ((bool)uVar7) {
      func_0x00010777d6c8();
      puVar14 = *(undefined1 **)((long)unaff_x20 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar13 = (undefined1 *)((long)register0x00000008 + -0x150);
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar19 = (undefined1 *)((long)register0x00000008 + -0x150);
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar13 = puVar19;
      goto code_r0x000107779dfc;
    }
    uVar7 = extraout_w8_05 == 7;
    if ((bool)uVar7) {
      func_0x00010777d6bc();
      puVar14 = *(undefined1 **)((long)unaff_x20 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar13 = (undefined1 *)((long)register0x00000008 + -0x150);
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar19 = (undefined1 *)((long)register0x00000008 + -0x150);
      goto code_r0x000107779dec;
    }
    uVar7 = extraout_w8_05 == 8;
    if (!(bool)uVar7) {
      func_0x00010777d6d4();
      puVar14 = *(undefined1 **)((long)unaff_x20 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072ac134((undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x00010777de3c();
    do {
      uVar7 = unaff_x21 == unaff_x24;
      if ((bool)uVar7) {
        puVar14 = (undefined1 *)((long)register0x00000008 + -0xe0);
        func_0x000107327958((undefined1 *)((long)register0x00000008 + -0x150));
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804((undefined1 *)((long)register0x00000008 + -0xa0),unaff_x21,
                          *(undefined8 *)unaff_x20);
      puVar14 = (undefined1 *)((long)register0x00000008 + -0xa0);
      func_0x00010729d394((undefined1 *)((long)register0x00000008 + -0x150));
      func_0x000104c3323c((undefined1 *)((long)register0x00000008 + -0xa0));
      bVar1 = *(byte *)((long)register0x00000008 + -0x110);
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar14 = (undefined1 *)((long)register0x00000008 + -0x150);
        func_0x0001072d7f34((undefined1 *)((long)register0x00000008 + -0xe0));
      }
      func_0x000107267ed0((undefined1 *)((long)register0x00000008 + -0x150));
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar10 = (undefined8 *)((long)register0x00000008 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)((long)register0x00000008 + -0x58));
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar11 = (undefined8 *)((long)register0x00000008 + -0xa0);
  func_0x000107267ed0();
  puVar20 = &UNK_107779ed8;
  func_0x00010777d9d0();
  uVar8 = (uint)puVar10;
  uVar16 = SUB81(puVar10,0);
  if (*(int *)(puVar11 + 0xd) == 0) {
    puVar12 = (undefined8 *)(puVar14 + 8);
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x210);
    *(undefined1 **)((long)register0x00000008 + -0x180) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x178) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x170) = puVar10;
    *(undefined8 **)((long)register0x00000008 + -0x168) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x160) = puVar18;
    *(undefined **)((long)register0x00000008 + -0x158) = &UNK_107779ed8;
    puVar18 = (undefined1 *)((long)register0x00000008 + -0x160);
    func_0x00010777d1f4(puVar12,puVar11 + 1);
    *(undefined4 *)((long)register0x00000008 + -0x198) = 0;
    puVar14 = (undefined1 *)*puVar12;
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0x201) = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    puVar20 = &UNK_107779f6c;
    puVar11 = puVar12;
    func_0x00010777d638();
    unaff_x19 = puVar12;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 1;
  if ((bool)uVar7) {
    puVar12 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar6 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar6 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar6 + -0x20) = puVar10;
    *(undefined8 **)(puVar6 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar6 + -0x10) = puVar18;
    *(undefined **)(puVar6 + -8) = puVar20;
    puVar18 = puVar6 + -0x10;
    func_0x00010777d1f4(puVar12,puVar11 + 1);
    unaff_x21 = puVar6 + -0xb0;
    func_0x00010777dae0();
    puVar14 = (undefined1 *)*puVar12;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_00;
    }
    else {
      puVar6[-0xb1] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    puVar20 = &UNK_10777a170;
    puVar11 = puVar12;
    func_0x00010777d638();
    puVar6 = puVar6 + -0xc0;
    unaff_x19 = puVar12;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 2;
  if ((bool)uVar7) {
    puVar12 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar6 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar6 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar6 + -0x20) = puVar10;
    *(undefined8 **)(puVar6 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar6 + -0x10) = puVar18;
    *(undefined **)(puVar6 + -8) = puVar20;
    puVar18 = puVar6 + -0x10;
    func_0x00010777d1f4(puVar12,puVar11 + 1);
    unaff_x21 = puVar6 + -0xb0;
    func_0x00010777dacc();
    puVar14 = (undefined1 *)*puVar12;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_01;
    }
    else {
      puVar6[-0xb1] = uVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    puVar20 = &UNK_10777a208;
    puVar11 = puVar12;
    func_0x00010777d638();
    puVar6 = puVar6 + -0xc0;
    unaff_x19 = puVar12;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 3;
  if ((bool)uVar7) {
    puVar12 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar6 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar6 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar6 + -0x20) = puVar10;
    *(undefined8 **)(puVar6 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar6 + -0x10) = puVar18;
    *(undefined **)(puVar6 + -8) = puVar20;
    puVar18 = puVar6 + -0x10;
    puVar10 = puVar12;
    func_0x00010777d1f4(puVar12,puVar11 + 1);
    func_0x00010777dd10();
    puVar14 = (undefined1 *)*puVar12;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar12 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_02;
    }
    else {
      puVar6[-0xb1] = (char)puVar12;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    puVar20 = &UNK_10777a2a0;
    puVar11 = puVar10;
    func_0x00010777d638();
    puVar6 = puVar6 + -0xc0;
    unaff_x19 = puVar10;
    puVar10 = puVar12;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 4;
  if ((bool)uVar7) {
    puVar12 = (undefined8 *)(puVar14 + 8);
    *(undefined1 **)(puVar6 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar6 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar6 + -0x20) = puVar10;
    *(undefined8 **)(puVar6 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar6 + -0x10) = puVar18;
    *(undefined **)(puVar6 + -8) = puVar20;
    puVar18 = puVar6 + -0x10;
    func_0x00010777d1f4(puVar12,puVar11 + 1);
    unaff_x21 = puVar6 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_03;
    }
    else {
      puVar6[-0xb1] = (char)puVar10;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar16 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar16;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    puVar20 = &UNK_10777a338;
    puVar11 = puVar12;
    func_0x00010777d638();
    puVar6 = puVar6 + -0xc0;
    unaff_x19 = puVar12;
  }
  uVar8 = (uint)puVar11;
  *(undefined1 **)(puVar6 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar6 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar6 + -0x20) = puVar10;
  *(undefined8 **)(puVar6 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar6 + -0x10) = puVar18;
  *(undefined **)(puVar6 + -8) = puVar20;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar7) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar10 >> 8 & 1) != 0) {
      puVar6[-0xc0] = (char)puVar10;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar16 = extraout_w8_04;
  }
  else {
    uVar7 = extraout_w8_06 == 6;
    if ((bool)uVar7) {
      unaff_x22 = puVar6 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar6[-0xc0] = (char)uVar8;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar7 = extraout_w8_06 == 7;
      if ((bool)uVar7) {
        unaff_x22 = puVar6 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar6[-0xc0] = (char)uVar8;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar7 = extraout_w8_06 == 8;
        if ((bool)uVar7) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar6 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar18 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar7 = puVar18 == unaff_x22, !(bool)uVar7; puVar18 = puVar18 + 0x70) {
            puVar13 = puVar18;
            func_0x000107775a54(puVar18,*puVar10);
            *(short *)(puVar6 + -0xc0) = (short)puVar13;
            if (((uint)puVar13 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar6 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar6 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar6[-0xc0] = (char)uVar8;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar16 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar16;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar6 + -0xd0) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779b94; end: 107779bb7;  */

void FUN_107779b94(long param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 extraout_w8;
  undefined1 uVar10;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar11;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  undefined8 extraout_x8;
  long lVar12;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar13;
  undefined1 *unaff_x22;
  undefined1 *puVar14;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar15;
  undefined8 uVar16;
  byte abStack_700 [1496];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_c8;
  byte bStack_40;
  
  uVar3 = *(int *)(param_1 + 0x68) == 4;
  if ((bool)uVar3) {
    puVar5 = (undefined8 *)(param_1 + 8);
    unaff_x20 = abStack_700 + 0x5d0;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4();
    uStack_120 = puVar5[1];
    uStack_128 = *puVar5;
    uStack_c8 = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((bStack_40 & 1) == 0) {
      func_0x00010777d724();
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    unaff_x30 = &LAB_107779c4c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_700 + 0x5d0);
  }
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x150);
  puVar14 = (undefined1 *)((long)register0x00000008 + -0x150);
  puVar8 = (undefined1 *)((long)register0x00000008 + -0x150);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar13 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar3) {
    lVar12 = *(long *)(unaff_x21 + 0x10);
    uVar16 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)((long)register0x00000008 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)((long)register0x00000008 + -0x148) = uVar16;
    if (lVar12 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    *(undefined4 *)((long)register0x00000008 + -0xe8) = 5;
    puVar9 = *(undefined1 **)((long)unaff_x20 + 8);
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x150);
    puVar8 = unaff_x22;
    if ((*(byte *)((long)register0x00000008 + -0x60) & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x150);
      puVar14 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar5 = (undefined8 *)((long)register0x00000008 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar8;
  }
  else {
    uVar3 = extraout_w8_05 == 6;
    if ((bool)uVar3) {
      func_0x00010777d6c8();
      puVar9 = *(undefined1 **)((long)unaff_x20 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar8 = (undefined1 *)((long)register0x00000008 + -0x150);
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar14 = (undefined1 *)((long)register0x00000008 + -0x150);
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar8 = puVar14;
      goto code_r0x000107779dfc;
    }
    uVar3 = extraout_w8_05 == 7;
    if ((bool)uVar3) {
      func_0x00010777d6bc();
      puVar9 = *(undefined1 **)((long)unaff_x20 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar8 = (undefined1 *)((long)register0x00000008 + -0x150);
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar14 = (undefined1 *)((long)register0x00000008 + -0x150);
      goto code_r0x000107779dec;
    }
    uVar3 = extraout_w8_05 == 8;
    if (!(bool)uVar3) {
      func_0x00010777d6d4();
      puVar9 = *(undefined1 **)((long)unaff_x20 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072ac134((undefined1 *)((long)register0x00000008 + -0xe0));
    func_0x00010777de3c();
    do {
      uVar3 = unaff_x21 == unaff_x24;
      if ((bool)uVar3) {
        puVar9 = (undefined1 *)((long)register0x00000008 + -0xe0);
        func_0x000107327958((undefined1 *)((long)register0x00000008 + -0x150));
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804((undefined1 *)((long)register0x00000008 + -0xa0),unaff_x21,
                          *(undefined8 *)unaff_x20);
      puVar9 = (undefined1 *)((long)register0x00000008 + -0xa0);
      func_0x00010729d394((undefined1 *)((long)register0x00000008 + -0x150));
      func_0x000104c3323c((undefined1 *)((long)register0x00000008 + -0xa0));
      bVar1 = *(byte *)((long)register0x00000008 + -0x110);
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar9 = (undefined1 *)((long)register0x00000008 + -0x150);
        func_0x0001072d7f34((undefined1 *)((long)register0x00000008 + -0xe0));
      }
      func_0x000107267ed0((undefined1 *)((long)register0x00000008 + -0x150));
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar5 = (undefined8 *)((long)register0x00000008 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)((long)register0x00000008 + -0x58));
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar6 = (undefined8 *)((long)register0x00000008 + -0xa0);
  func_0x000107267ed0();
  puVar15 = &UNK_107779ed8;
  func_0x00010777d9d0();
  uVar4 = (uint)puVar5;
  uVar11 = SUB81(puVar5,0);
  if (*(int *)(puVar6 + 0xd) == 0) {
    puVar7 = (undefined8 *)(puVar9 + 8);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x210);
    *(undefined1 **)((long)register0x00000008 + -0x180) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x178) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x170) = puVar5;
    *(undefined8 **)((long)register0x00000008 + -0x168) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x160) = puVar13;
    *(undefined **)((long)register0x00000008 + -0x158) = &UNK_107779ed8;
    puVar13 = (undefined1 *)((long)register0x00000008 + -0x160);
    func_0x00010777d1f4(puVar7,puVar6 + 1);
    *(undefined4 *)((long)register0x00000008 + -0x198) = 0;
    puVar9 = (undefined1 *)*puVar7;
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar4 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar10 = extraout_w8;
    }
    else {
      *(undefined1 *)((long)register0x00000008 + -0x201) = uVar11;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar10 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar10;
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    puVar15 = &UNK_107779f6c;
    puVar6 = puVar7;
    func_0x00010777d638();
    unaff_x19 = puVar7;
  }
  uVar3 = *(int *)(puVar6 + 0xd) == 1;
  if ((bool)uVar3) {
    puVar7 = (undefined8 *)(puVar9 + 8);
    *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x20) = puVar5;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar13;
    *(undefined **)(puVar2 + -8) = puVar15;
    puVar13 = puVar2 + -0x10;
    func_0x00010777d1f4(puVar7,puVar6 + 1);
    unaff_x21 = puVar2 + -0xb0;
    func_0x00010777dae0();
    puVar9 = (undefined1 *)*puVar7;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar4 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar10 = extraout_w8_00;
    }
    else {
      puVar2[-0xb1] = uVar11;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar10 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar10;
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    puVar15 = &UNK_10777a170;
    puVar6 = puVar7;
    func_0x00010777d638();
    puVar2 = puVar2 + -0xc0;
    unaff_x19 = puVar7;
  }
  uVar3 = *(int *)(puVar6 + 0xd) == 2;
  if ((bool)uVar3) {
    puVar7 = (undefined8 *)(puVar9 + 8);
    *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x20) = puVar5;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar13;
    *(undefined **)(puVar2 + -8) = puVar15;
    puVar13 = puVar2 + -0x10;
    func_0x00010777d1f4(puVar7,puVar6 + 1);
    unaff_x21 = puVar2 + -0xb0;
    func_0x00010777dacc();
    puVar9 = (undefined1 *)*puVar7;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar4 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar11 = extraout_w8_01;
    }
    else {
      puVar2[-0xb1] = uVar11;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar11 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar11;
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    puVar15 = &UNK_10777a208;
    puVar6 = puVar7;
    func_0x00010777d638();
    puVar2 = puVar2 + -0xc0;
    unaff_x19 = puVar7;
  }
  uVar3 = *(int *)(puVar6 + 0xd) == 3;
  if ((bool)uVar3) {
    puVar7 = (undefined8 *)(puVar9 + 8);
    *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x20) = puVar5;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar13;
    *(undefined **)(puVar2 + -8) = puVar15;
    puVar13 = puVar2 + -0x10;
    puVar5 = puVar7;
    func_0x00010777d1f4(puVar7,puVar6 + 1);
    func_0x00010777dd10();
    puVar9 = (undefined1 *)*puVar7;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar11 = extraout_w8_02;
    }
    else {
      puVar2[-0xb1] = (char)puVar7;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar11 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar11;
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    puVar15 = &UNK_10777a2a0;
    puVar6 = puVar5;
    func_0x00010777d638();
    puVar2 = puVar2 + -0xc0;
    unaff_x19 = puVar5;
    puVar5 = puVar7;
  }
  uVar3 = *(int *)(puVar6 + 0xd) == 4;
  if ((bool)uVar3) {
    puVar7 = (undefined8 *)(puVar9 + 8);
    *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x20) = puVar5;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar13;
    *(undefined **)(puVar2 + -8) = puVar15;
    puVar13 = puVar2 + -0x10;
    func_0x00010777d1f4(puVar7,puVar6 + 1);
    unaff_x21 = puVar2 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar11 = extraout_w8_03;
    }
    else {
      puVar2[-0xb1] = (char)puVar5;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar11 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar11;
    func_0x00010777d1dc();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    puVar15 = &UNK_10777a338;
    puVar6 = puVar7;
    func_0x00010777d638();
    puVar2 = puVar2 + -0xc0;
    unaff_x19 = puVar7;
  }
  uVar4 = (uint)puVar6;
  *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar2 + -0x20) = puVar5;
  *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar13;
  *(undefined **)(puVar2 + -8) = puVar15;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar3) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar5 >> 8 & 1) != 0) {
      puVar2[-0xc0] = (char)puVar5;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar11 = extraout_w8_04;
  }
  else {
    uVar3 = extraout_w8_06 == 6;
    if ((bool)uVar3) {
      unaff_x22 = puVar2 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar4 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar2[-0xc0] = (char)uVar4;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar3 = extraout_w8_06 == 7;
      if ((bool)uVar3) {
        unaff_x22 = puVar2 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar4 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar2[-0xc0] = (char)uVar4;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar3 = extraout_w8_06 == 8;
        if ((bool)uVar3) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar2 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar13 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar3 = puVar13 == unaff_x22, !(bool)uVar3; puVar13 = puVar13 + 0x70) {
            puVar8 = puVar13;
            func_0x000107775a54(puVar13,*puVar5);
            *(short *)(puVar2 + -0xc0) = (short)puVar8;
            if (((uint)puVar8 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar2 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar2 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar4 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar2[-0xc0] = (char)uVar4;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar11 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar11;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar2 + -0xd0) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 10777a000; end: 10777a077;  */

void FUN_10777a000(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x00010777a078(param_1,param_4);
    func_0x00010777a0b0(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x00010777a0d0(&uStack_40);
  return;
}



/* Entry: 10777a22c; end: 10777a29f;  */

void FUN_10777a22c(long *param_1)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar9;
  undefined1 extraout_w8_01;
  undefined1 uVar10;
  int extraout_w8_02;
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  uint uVar11;
  undefined1 *unaff_x21;
  undefined1 *puVar12;
  undefined1 *unaff_x22;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  undefined1 auStack_240 [207];
  undefined1 uStack_171;
  undefined1 auStack_170 [128];
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [15];
  undefined1 uStack_b1;
  
  puVar1 = auStack_c0;
  pppppppuVar13 = (undefined8 *******)&stack0xfffffffffffffff0;
  plVar4 = param_1;
  func_0x00010777d1f4();
  func_0x00010777dd10();
  lVar8 = *param_1;
  func_0x00010777d948();
  func_0x00010777d5ec();
  uVar11 = (uint)param_1;
  uVar10 = SUB81(param_1,0);
  if ((uVar11 >> 8 & 1) == 0) {
    func_0x00010777d748();
    uVar2 = extraout_w8;
  }
  else {
    uStack_b1 = uVar10;
    func_0x00010777d530();
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar2 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar2;
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar14 = &UNK_10777a2a0;
  plVar5 = plVar4;
  func_0x00010777d638();
  uVar2 = (int)plVar5[0xd] == 4;
  if ((bool)uVar2) {
    plVar6 = (long *)(lVar8 + 8);
    puVar1 = auStack_240 + 0xc0;
    puStack_c8 = &UNK_10777a2a0;
    ppppppuStack_d0 = pppppppuVar13;
    func_0x00010777d1f4(plVar6,plVar5 + 1);
    unaff_x21 = auStack_170;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8_00;
    }
    else {
      uStack_171 = uVar10;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar9 = 1;
    }
    *(undefined1 *)(plVar4 + 2) = uVar9;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    puVar14 = &UNK_10777a338;
    plVar5 = plVar6;
    func_0x00010777d638();
    plVar4 = plVar6;
    pppppppuVar13 = &ppppppuStack_d0;
  }
  uVar3 = (uint)plVar5;
  *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
  *(long **)(puVar1 + -0x20) = param_1;
  *(long **)(puVar1 + -0x18) = plVar4;
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar13;
  *(undefined **)(puVar1 + -8) = puVar14;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar2) {
    func_0x00010777dc50();
    if (extraout_x8 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar11 >> 8 & 1) != 0) {
      puVar1[-0xc0] = uVar10;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar10 = extraout_w8_01;
  }
  else {
    uVar2 = extraout_w8_02 == 6;
    if ((bool)uVar2) {
      unaff_x22 = puVar1 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar3 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar1[-0xc0] = (char)uVar3;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar2 = extraout_w8_02 == 7;
      if ((bool)uVar2) {
        unaff_x22 = puVar1 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar3 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar1[-0xc0] = (char)uVar3;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar2 = extraout_w8_02 == 8;
        if ((bool)uVar2) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar1 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar12 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar2 = puVar12 == unaff_x22, !(bool)uVar2; puVar12 = puVar12 + 0x70) {
            puVar7 = puVar12;
            func_0x000107775a54(puVar12,*param_1);
            *(short *)(puVar1 + -0xc0) = (short)puVar7;
            if (((uint)puVar7 >> 8 & 1) == 0) {
              func_0x00010777d724();
              goto code_r0x00010777a4b4;
            }
            func_0x00010777d700();
            func_0x0001075357bc();
          }
          func_0x00010777dac0();
          func_0x000107535890();
          func_0x00010777d338();
          func_0x0001073bcebc();
code_r0x00010777a4b4:
          func_0x0001074048e8(puVar1 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar1 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar3 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar1[-0xc0] = (char)uVar3;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar10 = 1;
  }
  *(undefined1 *)(plVar4 + 2) = uVar10;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 10777a674; end: 10777a7bb;  */

undefined1  [16] FUN_10777a674(long param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong extraout_x8;
  long extraout_x9;
  ulong uVar4;
  int extraout_w10;
  ulong unaff_x19;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  func_0x00010777d31c(param_1);
  switch(*(int *)(param_1 + 0x68)) {
  case 3:
    func_0x00010777dd90();
    func_0x00010777d940();
    break;
  case 4:
    func_0x00010777ddd8();
    func_0x00010777d940();
    break;
  case 5:
    func_0x00010777ddd8();
    if (extraout_x9 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777d940();
    break;
  case 6:
    func_0x00010777de64();
    func_0x000107348eb0();
    func_0x00010777d940();
    break;
  case 7:
    func_0x00010777de64();
    func_0x000107348ecc();
    func_0x00010777d940();
    break;
  default:
    if (*(int *)(param_1 + 0x68) == 8) {
      func_0x00010777de64();
      func_0x0001075726b8();
      func_0x00010777d940();
    }
    else {
      func_0x00010777de64();
      func_0x0001074fd134();
      func_0x00010777d940();
    }
  }
  func_0x00010777d380();
  uVar4 = unaff_x19 & 0x1ffffff00;
  uVar1 = unaff_x19;
  if (unaff_x19 < 0x100000001) {
    uVar1 = 0x100000000;
  }
  uVar3 = unaff_x19 >> 0x20;
  bVar2 = uVar3 == 0;
  if (bVar2) {
    uVar4 = 0;
  }
  func_0x00010777d490(uVar1,uVar4);
  if (!bVar2) {
    ___stack_chk_fail();
    func_0x00010777d380();
    func_0x00010777d638();
    func_0x00010777a7d4();
    auVar5._8_8_ = uVar3 & 0xffffffffff;
    auVar5._0_8_ = uVar4;
    return auVar5;
  }
  auVar6._0_8_ = uVar4 & 0xffffffffffffff00 | extraout_x8 & 0xff;
  auVar6._8_8_ = uVar3;
  return auVar6;
}



/* Entry: 10777ab28; end: 10777ab4b;  */

long * FUN_10777ab28(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  undefined1 extraout_w8_05;
  undefined1 extraout_w8_06;
  undefined1 extraout_w8_07;
  undefined1 extraout_w8_08;
  undefined1 extraout_w8_09;
  undefined1 uVar9;
  long lVar10;
  undefined1 *extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined1 *unaff_x19;
  undefined8 *puVar11;
  long *unaff_x20;
  undefined8 uVar12;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar13;
  code *unaff_x30;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  char acStack_91c [2300];
  
  uVar5 = (int)param_1[0xd] == 2;
  if ((bool)uVar5) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224(param_2,param_1 + 1);
    func_0x00010777d904();
    plVar6 = (long *)*param_2;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((acStack_91c[0x880] & 1U) == 0) {
      func_0x00010777d748();
      param_1 = param_2;
      param_2 = plVar6;
      uVar9 = extraout_w8_00;
    }
    else {
      func_0x00010777d410();
      param_1 = param_2;
      param_2 = plVar6;
      uVar9 = extraout_w8;
    }
    unaff_x19[0x14] = uVar9;
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    unaff_x30 = (code *)&LAB_10777aba4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(acStack_91c + 0x86c);
  }
  uVar5 = (int)param_1[0xd] == 3;
  plVar6 = param_2;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    param_1 = param_2;
    func_0x00010777d1f4(param_2,plVar6);
    func_0x00010777dd3c();
    plVar6 = (long *)*param_2;
    func_0x00010777d484();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0xac) & 1) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8_02;
    }
    else {
      func_0x00010777d410();
      uVar9 = extraout_w8_01;
    }
    unaff_x19[0x14] = uVar9;
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d38c();
    unaff_x30 = (code *)&UNK_10777ac28;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x20 = param_2;
  }
  uVar5 = (int)param_1[0xd] == 4;
  if ((bool)uVar5) {
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224(plVar6,param_1 + 1);
    func_0x00010777d8ec();
    plVar7 = (long *)*plVar6;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x9c) & 1) == 0) {
      func_0x00010777d748();
      param_1 = plVar6;
      plVar6 = plVar7;
      uVar9 = extraout_w8_04;
    }
    else {
      func_0x00010777d410();
      param_1 = plVar6;
      plVar6 = plVar7;
      uVar9 = extraout_w8_03;
    }
    unaff_x19[0x14] = uVar9;
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    unaff_x30 = (code *)&UNK_10777aca4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  uVar5 = (int)param_1[0xd] == 5;
  if ((bool)uVar5) {
    param_1 = param_1 + 1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    lVar10 = param_1[1];
    lVar15 = *param_1;
    *(long *)((long)register0x00000008 + -0x88) = param_1[1];
    *(long *)((long)register0x00000008 + -0x90) = lVar15;
    param_1 = plVar6;
    if (lVar10 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d484();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x9c) & 1) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8_06;
    }
    else {
      func_0x00010777d410();
      uVar9 = extraout_w8_05;
    }
    unaff_x19[0x14] = uVar9;
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    unaff_x30 = FUN_10777ad3c;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  puVar3 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar13 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    plVar6 = (long *)*unaff_x20;
    func_0x00010777d484();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      plVar6 = (long *)*unaff_x20;
      func_0x00010777d484();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        plVar6 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        plVar6 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
    }
  }
  func_0x00010777d640();
  if ((*(byte *)((long)register0x00000008 + -0xac) & 1) == 0) {
    func_0x00010777d748();
    uVar9 = extraout_w8_08;
  }
  else {
    func_0x00010777d410();
    uVar9 = extraout_w8_07;
  }
  unaff_x19[0x14] = uVar9;
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar14 = &SUB_10777ae10;
  func_0x00010777d638();
  if ((int)param_1[0xd] == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    return param_1;
  }
  uVar5 = (int)param_1[0xd] == 1;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x170);
    *(long **)((long)register0x00000008 + -0xe0) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0xd8) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0xd0) = puVar13;
    *(undefined **)((long)register0x00000008 + -200) = &SUB_10777ae10;
    puVar13 = (undefined1 *)((long)register0x00000008 + -0xd0);
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x160) & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar14 = &UNK_10777aeac;
    func_0x00010777d638();
  }
  uVar5 = (int)param_1[0xd] == 2;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    puVar13 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar14 = &UNK_10777af30;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar5 = (int)param_1[0xd] == 3;
  plVar7 = plVar6;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    puVar13 = puVar3 + -0x10;
    param_1 = plVar6;
    func_0x00010777d1f4();
    func_0x00010777dd3c();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar14 = &UNK_10777afbc;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x20 = plVar6;
  }
  uVar5 = (int)param_1[0xd] == 4;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    puVar13 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar14 = &UNK_10777b040;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar5 = (int)param_1[0xd] == 5;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar13;
    *(undefined **)(puVar3 + -8) = puVar14;
    puVar13 = puVar3 + -0x10;
    func_0x00010777d224();
    lVar10 = plVar6[1];
    lVar15 = *plVar6;
    *(long *)(puVar3 + -0x88) = plVar6[1];
    *(long *)(puVar3 + -0x90) = lVar15;
    param_1 = plVar7;
    plVar7 = plVar6;
    if (lVar10 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar14 = &UNK_10777b0e0;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  puVar4 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar13;
  *(undefined **)(puVar3 + -8) = puVar14;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar3[-0xb0] & 1) == 0) {
code_r0x00010777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(long **)(puVar3 + -0xe0) = unaff_x20;
  *(undefined1 **)(puVar3 + -0xd8) = unaff_x19;
  *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -200) = &UNK_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9;
  if ((int)param_1[0xd] == 0) {
    *(undefined4 *)(puVar3 + -0xf0) = 0;
    unaff_x19 = puVar3 + -0x158;
    func_0x00010777dd30();
    plVar6 = (long *)(puVar3 + -0x150);
    func_0x00010726af18(plVar6);
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return plVar6;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(long **)(puVar3 + -0x180) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x178) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x170) = puVar3 + -0xd0;
    *(undefined **)(puVar3 + -0x168) = &UNK_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)plVar7 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8_00 = (int)plVar7;
      extraout_x8_00[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8_00 = 0;
    }
    *(bool *)(extraout_x8_00 + 5) = bVar1;
    return plVar7;
  }
  func_0x00010777d490();
  if (!(bool)uVar5) goto code_r0x00010777b254;
  uVar12 = *(undefined8 *)(puVar3 + -0xe0);
  puVar11 = *(undefined8 **)(puVar3 + -0xd8);
  *(undefined8 *)(puVar3 + -0xe0) = uVar12;
  *(undefined8 **)(puVar3 + -0xd8) = puVar11;
  *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
  *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
  puVar13 = puVar3 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9_00;
  uVar5 = (int)param_1[0xd] == 1;
  if ((bool)uVar5) {
    puVar11 = (undefined8 *)(puVar3 + -0x158);
    puVar3[-0x150] = (char)param_1[1];
    *(undefined4 *)(puVar3 + -0xf0) = 1;
    func_0x00010777dd30();
    param_1 = (long *)(puVar3 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar14 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar4 = puVar3 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar5) goto code_r0x00010777b310;
    puVar13 = *(undefined1 **)(puVar3 + -0xd0);
    puVar14 = *(undefined **)(puVar3 + -200);
    uVar12 = *(undefined8 *)(puVar3 + -0xe0);
    puVar11 = *(undefined8 **)(puVar3 + -0xd8);
  }
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar4 + -0x28) = puVar3 + -0xa8;
  *(undefined8 *)(puVar4 + -0x20) = uVar12;
  *(undefined8 **)(puVar4 + -0x18) = puVar11;
  *(undefined1 **)(puVar4 + -0x10) = puVar13;
  *(undefined **)(puVar4 + -8) = puVar14;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 2;
  if ((bool)uVar5) {
    *(undefined8 *)(puVar4 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar4 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar5 = iVar2 == 3;
    if ((bool)uVar5) {
      param_1 = (long *)(puVar4 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar5 = iVar2 == 4;
      if ((bool)uVar5) {
        uVar16 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar4 + -0xa0) = uVar16;
        *(undefined4 *)(puVar4 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar10 = *(long *)(extraout_x9_01 + 0x10);
        uVar16 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar4 + -0xa0) = uVar16;
        uVar5 = 1;
        if (lVar10 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_01 != 0);
        }
        *(undefined4 *)(puVar4 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar5 = iVar2 == 6;
        if ((bool)uVar5) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar5 = iVar2 == 7;
          if ((bool)uVar5) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar5 = iVar2 == 8;
            if ((bool)uVar5) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar5 = puVar4[-0xac] == '\x01';
              if ((bool)uVar5) {
                uVar16 = *(undefined8 *)(puVar4 + -0xbc);
                puVar11[1] = *(undefined8 *)(puVar4 + -0xb4);
                *puVar11 = uVar16;
                *(undefined4 *)(puVar11 + 2) = 1;
                uVar9 = 1;
              }
              else {
                func_0x00010777d748();
                uVar9 = extraout_w8_09;
              }
              *(undefined1 *)((long)puVar11 + 0x14) = uVar9;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if (((((int)param_1[0xd] != 0) && ((int)param_1[0xd] != 1)) && ((int)param_1[0xd] != 2)) &&
     ((int)param_1[0xd] == 3)) {
    pcVar8 = FUN_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar4 + -0xe0) = uVar12;
    *(undefined8 **)(puVar4 + -0xd8) = puVar11;
    *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0x10;
    *(code **)(puVar4 + -200) = pcVar8;
    func_0x00010777d264();
    func_0x00010777d1c4();
    FUN_1077f2c70();
    func_0x00010777d374();
    return (long *)(ulong)((uint)puVar11 & 0xffff);
  }
  return (long *)0x0;
}



/* Entry: 10777ad3c; end: 10777ae0f;  */

long * FUN_10777ad3c(long *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar9;
  undefined1 *extraout_x8;
  long lVar10;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  undefined8 *puVar11;
  long *unaff_x20;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  char acStack_64c [1388];
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [20];
  byte bStack_ac;
  undefined1 auStack_a8 [120];
  char *pcVar4;
  
  pcVar4 = auStack_c0;
  pppppppuVar13 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    plVar7 = (long *)*unaff_x20;
    func_0x00010777d484();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      plVar7 = (long *)*unaff_x20;
      func_0x00010777d484();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        plVar7 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        plVar7 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
    }
  }
  func_0x00010777d640();
  if ((bStack_ac & 1) == 0) {
    func_0x00010777d748();
    uVar9 = extraout_w8_00;
  }
  else {
    func_0x00010777d410();
    uVar9 = extraout_w8;
  }
  unaff_x19[0x14] = uVar9;
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar15 = &SUB_10777ae10;
  func_0x00010777d638();
  if ((int)param_1[0xd] == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    return param_1;
  }
  uVar5 = (int)param_1[0xd] == 1;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    pcVar4 = acStack_64c + 0x4dc;
    puStack_c8 = &SUB_10777ae10;
    ppppppuStack_d0 = pppppppuVar13;
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((acStack_64c[0x4ec] & 1U) == 0) {
      func_0x00010777db94();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar15 = &UNK_10777aeac;
    func_0x00010777d638();
    pppppppuVar13 = &ppppppuStack_d0;
  }
  uVar5 = (int)param_1[0xd] == 2;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    *(long **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
    *(undefined **)(pcVar4 + -8) = puVar15;
    pppppppuVar13 = (undefined8 *******)(pcVar4 + -0x10);
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pcVar4[-0xa0] & 1U) == 0) {
      func_0x00010777db94();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar7;
      plVar7 = plVar6;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar15 = &UNK_10777af30;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  uVar5 = (int)param_1[0xd] == 3;
  plVar6 = plVar7;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
    *(undefined1 **)(pcVar4 + -0x28) = auStack_a8;
    *(long **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
    *(undefined **)(pcVar4 + -8) = puVar15;
    pppppppuVar13 = (undefined8 *******)(pcVar4 + -0x10);
    param_1 = plVar7;
    func_0x00010777d1f4();
    func_0x00010777dd3c();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((pcVar4[-0xb0] & 1U) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar15 = &UNK_10777afbc;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xc0;
    unaff_x20 = plVar7;
  }
  uVar5 = (int)param_1[0xd] == 4;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    *(long **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
    *(undefined **)(pcVar4 + -8) = puVar15;
    pppppppuVar13 = (undefined8 *******)(pcVar4 + -0x10);
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pcVar4[-0xa0] & 1U) == 0) {
      func_0x00010777db94();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar6;
      plVar6 = plVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar15 = &UNK_10777b040;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  uVar5 = (int)param_1[0xd] == 5;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    *(long **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
    *(undefined **)(pcVar4 + -8) = puVar15;
    pppppppuVar13 = (undefined8 *******)(pcVar4 + -0x10);
    func_0x00010777d224();
    lVar10 = plVar7[1];
    lVar16 = *plVar7;
    *(long *)(pcVar4 + -0x88) = plVar7[1];
    *(long *)(pcVar4 + -0x90) = lVar16;
    param_1 = plVar6;
    plVar6 = plVar7;
    if (lVar10 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pcVar4[-0xa0] & 1U) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    puVar15 = &UNK_10777b0e0;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  puVar3 = pcVar4 + -0xc0;
  *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
  *(undefined1 **)(pcVar4 + -0x28) = auStack_a8;
  *(long **)(pcVar4 + -0x20) = unaff_x20;
  *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
  *(undefined **)(pcVar4 + -8) = puVar15;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 6;
  if ((bool)uVar5) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar5 = iVar2 == 7;
    if ((bool)uVar5) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar5 = iVar2 == 8;
      if ((bool)uVar5) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((pcVar4[-0xb0] & 1U) == 0) {
code_r0x00010777b1ac:
          func_0x00010777db94();
        }
        else {
          func_0x00010777d4d8();
        }
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((pcVar4[-0xb0] & 1U) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(long **)(pcVar4 + -0xe0) = unaff_x20;
  *(undefined1 **)(pcVar4 + -0xd8) = unaff_x19;
  *(char **)(pcVar4 + -0xd0) = pcVar4 + -0x10;
  *(undefined **)(pcVar4 + -200) = &UNK_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(pcVar4 + -0xe8) = extraout_x9;
  if ((int)param_1[0xd] == 0) {
    *(undefined4 *)(pcVar4 + -0xf0) = 0;
    unaff_x19 = pcVar4 + -0x158;
    func_0x00010777dd30();
    plVar7 = (long *)(pcVar4 + -0x150);
    func_0x00010726af18(plVar7);
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return plVar7;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(long **)(pcVar4 + -0x180) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x178) = unaff_x19;
    *(char **)(pcVar4 + -0x170) = pcVar4 + -0xd0;
    *(undefined **)(pcVar4 + -0x168) = &UNK_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)plVar6 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8_00 = (int)plVar6;
      extraout_x8_00[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8_00 = 0;
    }
    *(bool *)(extraout_x8_00 + 5) = bVar1;
    return plVar6;
  }
  func_0x00010777d490();
  if (!(bool)uVar5) goto code_r0x00010777b254;
  uVar12 = *(undefined8 *)(pcVar4 + -0xe0);
  puVar11 = *(undefined8 **)(pcVar4 + -0xd8);
  *(undefined8 *)(pcVar4 + -0xe0) = uVar12;
  *(undefined8 **)(pcVar4 + -0xd8) = puVar11;
  *(undefined8 *)(pcVar4 + -0xd0) = *(undefined8 *)(pcVar4 + -0xd0);
  *(undefined8 *)(pcVar4 + -200) = *(undefined8 *)(pcVar4 + -200);
  puVar14 = pcVar4 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(pcVar4 + -0xe8) = extraout_x9_00;
  uVar5 = (int)param_1[0xd] == 1;
  if ((bool)uVar5) {
    puVar11 = (undefined8 *)(pcVar4 + -0x158);
    pcVar4[-0x150] = (char)param_1[1];
    *(undefined4 *)(pcVar4 + -0xf0) = 1;
    func_0x00010777dd30();
    param_1 = (long *)(pcVar4 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar5) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar15 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar3 = pcVar4 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar5) goto code_r0x00010777b310;
    puVar14 = *(undefined1 **)(pcVar4 + -0xd0);
    puVar15 = *(undefined **)(pcVar4 + -200);
    uVar12 = *(undefined8 *)(pcVar4 + -0xe0);
    puVar11 = *(undefined8 **)(pcVar4 + -0xd8);
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
  *(undefined8 *)(puVar3 + -0x20) = uVar12;
  *(undefined8 **)(puVar3 + -0x18) = puVar11;
  *(undefined1 **)(puVar3 + -0x10) = puVar14;
  *(undefined **)(puVar3 + -8) = puVar15;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar5 = iVar2 == 2;
  if ((bool)uVar5) {
    *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar3 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar5 = iVar2 == 3;
    if ((bool)uVar5) {
      param_1 = (long *)(puVar3 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar5 = iVar2 == 4;
      if ((bool)uVar5) {
        uVar17 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar17;
        *(undefined4 *)(puVar3 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar10 = *(long *)(extraout_x9_01 + 0x10);
        uVar17 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar17;
        uVar5 = 1;
        if (lVar10 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_00 != 0);
        }
        *(undefined4 *)(puVar3 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar5 = iVar2 == 6;
        if ((bool)uVar5) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar5 = iVar2 == 7;
          if ((bool)uVar5) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar5 = iVar2 == 8;
            if ((bool)uVar5) {
              func_0x00010777d9ac();
              func_0x0001075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar5 = puVar3[-0xac] == '\x01';
              if ((bool)uVar5) {
                uVar17 = *(undefined8 *)(puVar3 + -0xbc);
                puVar11[1] = *(undefined8 *)(puVar3 + -0xb4);
                *puVar11 = uVar17;
                *(undefined4 *)(puVar11 + 2) = 1;
                uVar9 = 1;
              }
              else {
                func_0x00010777d748();
                uVar9 = extraout_w8_01;
              }
              *(undefined1 *)((long)puVar11 + 0x14) = uVar9;
              goto code_r0x00010777b450;
            }
            func_0x00010777d9ac();
            func_0x0001074fd134();
            func_0x00010777d3e4();
          }
        }
      }
    }
  }
  func_0x00010777d640();
code_r0x00010777b450:
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if (((((int)param_1[0xd] != 0) && ((int)param_1[0xd] != 1)) && ((int)param_1[0xd] != 2)) &&
     ((int)param_1[0xd] == 3)) {
    pcVar8 = FUN_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar3 + -0xe0) = uVar12;
    *(undefined8 **)(puVar3 + -0xd8) = puVar11;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
    *(code **)(puVar3 + -200) = pcVar8;
    func_0x00010777d264();
    func_0x00010777d1c4();
    FUN_1077f2c70();
    func_0x00010777d374();
    return (long *)(ulong)((uint)puVar11 & 0xffff);
  }
  return (long *)0x0;
}


