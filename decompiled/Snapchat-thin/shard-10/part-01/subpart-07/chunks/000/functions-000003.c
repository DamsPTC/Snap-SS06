/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1077560c8; end: 107756133;  */

long FUN_1077560c8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077566cc; end: 107756733;  */

long * FUN_1077566cc(undefined8 param_1)

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
  undefined8 extraout_x8_04;
  code *extraout_x9;
  code *extraout_x9_00;
  undefined8 uVar13;
  long alStack_470 [7];
  undefined8 uStack_438;
  long *plStack_430;
  long *plStack_428;
  undefined8 **ppuStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long alStack_400 [3];
  undefined1 auStack_3e8 [64];
  undefined8 uStack_3a8;
  undefined1 *puStack_3a0;
  long *plStack_398;
  undefined1 **ppuStack_390;
  undefined *puStack_388;
  long lStack_380;
  undefined8 uStack_378;
  long alStack_370 [2];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [16];
  undefined1 uStack_338;
  long lStack_330;
  undefined8 uStack_328;
  byte bStack_320;
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
  func_0x0001077570b8(param_1);
  auStack_a0[0] = 0;
  uStack_30 = 0;
  puVar12 = (undefined1 *)0x1;
  uStack_28 = extraout_x8;
  func_0x0001074d1ee8();
  func_0x000107296ad0();
  func_0x000107757098(uStack_28);
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x000107296ad0();
  func_0x0001077570d4();
  puStack_a8 = &DAT_107756734;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x0001077570b8();
  plVar6 = plVar7 + 1;
  plVar8 = plVar6;
  uStack_f8 = extraout_x8_01;
  (**(code **)(*plVar7 + 0x20))();
  uVar5 = (undefined1 *)((long)plVar8 + -5) == (undefined1 *)0xfffffffffffffffd;
  if ((undefined1 *)((long)plVar8 + -5) < (undefined1 *)0xfffffffffffffffe) {
    func_0x000107878fec(auStack_258,(undefined1 *)((long)plVar8 + -1));
    func_0x0001004c3cd0(alStack_2b8,&UNK_10f425916,auStack_258);
    func_0x00010756a668(puVar11,alStack_2b8);
    plVar7 = alStack_2b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x000107757104();
    func_0x000107757190();
    goto code_r0x000107756b2c;
  }
  func_0x000107757184();
  (*extraout_x9)(auStack_258,plVar6,1);
  auStack_2e8[0] = 0;
  uStack_2d8 = 0;
  uStack_138 = uStack_138 & 0xffffff00;
  uStack_134 = uStack_134 & 0xffffff00;
  func_0x00010777067c(&lStack_2d0,puVar11,auStack_258,1,puVar12,auStack_2e8,&uStack_138);
  func_0x0001072c9854(auStack_2e8);
  func_0x0001072f5f6c(auStack_258);
  if ((bStack_2c0 & 1) == 0) {
    func_0x000107757190();
  }
  else {
    auStack_1c0[0] = 0;
    bStack_188 = 0;
    uVar5 = plVar8 == (long *)0x4;
    if ((bool)uVar5) {
      func_0x000107757184();
      func_0x000107757148(&uStack_138);
      (**(code **)(CONCAT44(uStack_134,uStack_138) + 0x68))(auStack_258,auStack_130);
      func_0x0001072e948c(auStack_1c0,auStack_258);
      func_0x00010724b3d8(auStack_258);
      func_0x00010775715c();
      if ((bStack_188 & 1) != 0) {
        func_0x00010724ef84(&uStack_138,auStack_1c0);
        uVar13 = 3;
        goto code_r0x0001077568ac;
      }
      func_0x000107757184();
      func_0x000107757148(&uStack_180);
      func_0x00010754c3ec(&uStack_138,&uStack_180);
      func_0x0001004c3cd0(auStack_258,&UNK_10f4258b8,&uStack_138);
      func_0x00010048a6c8(auStack_300,auStack_258,&UNK_10f417b93);
      func_0x00010756a69c(puVar11,auStack_300,2);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_300);
      func_0x000107757104();
      func_0x0001077570fc();
      func_0x0001072f5f6c(&uStack_180);
      func_0x000107757190();
    }
    else {
      func_0x00010002b838(&uStack_138,&DAT_10f2f5ad9);
      uVar13 = 2;
code_r0x0001077568ac:
      func_0x0001000e3098(auStack_318,&uStack_138,1);
      func_0x000107754984(auStack_258,puVar12,auStack_318);
      func_0x0001000e30f4(auStack_318);
      func_0x0001077570fc();
      func_0x000107757184();
      (*extraout_x9_00)(&uStack_138,plVar6,uVar13);
      uVar5 = cStack_1c8 == '\0';
      puVar1 = auStack_258;
      if ((bool)uVar5) {
        puVar1 = puVar12;
      }
      auStack_348[0] = 0;
      uStack_338 = 0;
      uVar3 = (ulong)_uStack_180 >> 0x28;
      uVar2 = (uint)_uStack_180;
      uStack_180 = (uint5)(uVar2 & 0xffffff00);
      _uStack_180 = CONCAT35((int3)uVar3,uStack_180);
      func_0x00010777067c(&lStack_330,puVar11,&uStack_138,uVar13,puVar1,auStack_348,&uStack_180);
      func_0x0001072c9854(auStack_348);
      func_0x00010775715c();
      if ((bStack_320 & 1) == 0) {
        func_0x00010002b838(auStack_360,&UNK_10f4258f4);
        func_0x00010756a69c(puVar11,auStack_360,uVar13);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_360);
        func_0x000107757190();
      }
      else {
        uVar5 = puVar11[0x51] == '\x01';
        if ((bool)uVar5) {
          __Znwm(0xc0);
          func_0x00010775710c();
          uVar13 = uStack_2c8;
          lVar4 = lStack_2d0;
          lStack_290 = lStack_2d0;
          uStack_288 = uStack_2c8;
          lStack_2d0 = 0;
          uStack_2c8 = 0;
          func_0x000107263b58(&uStack_180,auStack_1c0);
          plVar6 = (long *)(puVar11 + 0x18);
          uStack_378 = uStack_328;
          lStack_380 = lStack_330;
          lStack_330 = 0;
          uStack_328 = 0;
          lStack_270 = lVar4;
          uStack_268 = uVar13;
          lStack_290 = 0;
          uStack_288 = 0;
          func_0x0001072649c8(&uStack_138,&uStack_180);
          uStack_278 = uStack_378;
          lStack_280 = lStack_380;
          uStack_2a0 = 0;
          uStack_298 = 0;
          func_0x000107756f74(plVar6,&lStack_270,&uStack_138,&lStack_280);
          func_0x0001072c9b9c(&lStack_280);
          func_0x0001077570f4();
          func_0x0001077570ec();
          func_0x0001002a8234(puVar11 + 0x40,puVar12 + 0x40);
          func_0x0001072c9b9c(&uStack_2a0);
          func_0x00010724b3d8(&uStack_180);
          func_0x0001072c9b9c(&lStack_290);
          *extraout_x8_00 = (long)plVar6;
          extraout_x8_00[1] = (long)puVar11;
          alStack_370[0] = 0;
          alStack_370[1] = 0;
          *(undefined1 *)(extraout_x8_00 + 2) = 1;
          plVar7 = alStack_370;
        }
        else {
          __Znwm(0xc0);
          func_0x00010775710c();
          uStack_178 = uStack_2c8;
          _uStack_180 = lStack_2d0;
          lStack_2d0 = 0;
          uStack_2c8 = 0;
          func_0x000107263b58(&uStack_138,auStack_1c0);
          uStack_268 = uStack_328;
          lStack_270 = lStack_330;
          lStack_330 = 0;
          uStack_328 = 0;
          func_0x000107756f74(puVar11 + 0x18,&uStack_180,&uStack_138,&lStack_270);
          func_0x0001077570ec();
          func_0x0001077570f4();
          func_0x0001072c9b9c(&uStack_180);
          *extraout_x8_00 = (long)(puVar11 + 0x18);
          extraout_x8_00[1] = (long)puVar11;
          lStack_280 = 0;
          uStack_278 = 0;
          *(undefined1 *)(extraout_x8_00 + 2) = 1;
          plVar7 = &lStack_280;
        }
        func_0x00010775706c(plVar7);
      }
      func_0x0001072c95d0(&lStack_330);
      func_0x00010752b5b8(auStack_258);
    }
    func_0x00010724b3d8(auStack_1c0);
  }
  plVar7 = &lStack_2d0;
  func_0x0001072c95d0();
code_r0x000107756b2c:
  func_0x000107757098(uStack_f8);
  if ((bool)uVar5) {
    return plVar7;
  }
  ___stack_chk_fail();
  FUN_107756f04(plVar6);
  func_0x0001072c9b9c(&uStack_2a0);
  func_0x00010724b3d8(&uStack_180);
  func_0x0001072c9b9c(&lStack_290);
  __ZNSt3__119__shared_weak_countD2Ev(puVar11);
  __ZdlPv();
  func_0x0001072c95d0(&lStack_330);
  func_0x00010752b5b8(auStack_258);
  func_0x00010724b3d8(auStack_1c0);
  plVar6 = &lStack_2d0;
  func_0x0001072c95d0();
  func_0x0001077570d4();
  puStack_388 = &DAT_107756cd0;
  puStack_3a0 = puVar11;
  plStack_398 = plVar7;
  ppuStack_390 = &puStack_b0;
  func_0x0001077570b8();
  alStack_400[0] = 0;
  alStack_400[1] = 0;
  alStack_400[2] = 0;
  uStack_3a8 = extraout_x8_03;
  func_0x000107757164();
  func_0x0001074d2254(alStack_400,auStack_3e8);
  func_0x000104c2f714(auStack_3e8);
  func_0x000107757164();
  func_0x00010775713c();
  func_0x000107757154();
  uVar5 = (char)plVar6[0x12] == '\x01';
  if ((bool)uVar5) {
    plVar7 = plVar6 + 0xb;
    func_0x00010725ffc4(plVar7);
    func_0x0001077560f4(alStack_400,plVar7);
  }
  func_0x000107757164();
  func_0x00010775713c();
  func_0x000107757154();
  func_0x000107327958(&uStack_410,alStack_400);
  *extraout_x8_02 = 0;
  *(undefined8 *)(extraout_x8_02 + 4) = uStack_408;
  *(undefined8 *)(extraout_x8_02 + 2) = uStack_410;
  uStack_410 = 0;
  uStack_408 = 0;
  func_0x000104c33108(&uStack_410);
  plVar7 = alStack_400;
  func_0x000107269124();
  func_0x000107757098(uStack_3a8);
  if ((bool)uVar5) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x000107757154();
  plVar8 = alStack_400;
  func_0x000107269124();
  func_0x0001077570d4();
  plVar10 = alStack_470;
  puStack_418 = &DAT_107756df0;
  plVar9 = plVar8;
  plStack_430 = plVar6;
  plStack_428 = plVar7;
  ppuStack_420 = &ppuStack_390;
  func_0x0001077570b8();
  uStack_438 = extraout_x8_04;
  (**(code **)(*plVar9 + 0x40))(alStack_470);
  func_0x000107755e04(alStack_470,plVar8 + 9,plVar8 + 0xb,plVar8 + 0x13);
  func_0x00010775716c();
  func_0x000107757098(uStack_438);
  if ((bool)uVar5) {
    return plVar8;
  }
  ___stack_chk_fail();
  func_0x00010775716c();
  func_0x0001077570d4();
  *plVar10 = (long)&PTR_DAT_1109d4b38;
  func_0x0001072c9b9c(plVar10 + 0x13);
  func_0x00010724b3d8(plVar10 + 0xb);
  func_0x0001072c9b9c(plVar10 + 9);
  *plVar10 = (long)&PTR_DAT_1109d4888;
  func_0x0001001148fc(plVar10 + 5);
  func_0x0001072c9884(plVar10 + 2);
  return plVar10;
}



/* Entry: 107756f04; end: 107756f4b;  */

undefined8 * FUN_107756f04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d4b38;
  func_0x0001072c9b9c(param_1 + 0x13);
  func_0x00010724b3d8(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10775719c; end: 107757267;  */

void FUN_10775719c(long param_1,undefined ***param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined8 *extraout_x8;
  undefined4 uVar3;
  undefined8 auStack_b0 [6];
  int iStack_80;
  undefined ***pppuStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined ***pppuStack_50;
  undefined **ppuStack_48;
  long lStack_40;
  undefined1 *puStack_38;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar1 = param_2;
  pppuStack_50 = param_2;
  (*(code *)(*param_2)[10])(param_1);
  if (*(char *)(param_1 + 0x38) != '\x01' || *(int *)(param_1 + 0x30) != 2) {
    ppuStack_48 = &PTR_DAT_1109d4c10;
    pppuStack_30 = &ppuStack_48;
    lStack_40 = param_1;
    puStack_38 = (undefined1 *)&pppuStack_50;
    (*(code *)(*param_2)[2])(param_2,&ppuStack_48);
    pppuVar1 = &ppuStack_48;
    func_0x00010745df78();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010745df78(&ppuStack_48);
  func_0x00010756c434(param_1);
  pppuVar2 = pppuVar1;
  __Unwind_Resume();
  puStack_58 = &UNK_107757268;
  if ((*(byte *)((long)pppuVar2 + 0x25) & 1) == 0) {
    *extraout_x8 = 0;
    *(undefined4 *)(extraout_x8 + 1) = 0;
  }
  else {
    pppuStack_70 = pppuVar1;
    lStack_68 = param_1;
    puStack_60 = &stack0xfffffffffffffff0;
    FUN_10775719c(auStack_b0);
    if (iStack_80 == 0) {
      uVar3 = 1;
    }
    else {
      if (iStack_80 != 1) {
        auStack_b0[0] = 0;
      }
      uVar3 = 2;
      if (iStack_80 != 1) {
        uVar3 = 0;
      }
    }
    *extraout_x8 = auStack_b0[0];
    *(undefined4 *)(extraout_x8 + 1) = uVar3;
    func_0x00010756c434(auStack_b0);
  }
  return;
}



/* Entry: 1077575bc; end: 1077575eb;  */

void FUN_1077575bc(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010756c464();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10775792c; end: 10775796f;  */

/* WARNING: Possible PIC construction at 0x000107757948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010775794c) */
/* WARNING: Removing unreachable block (ram,0x000107757964) */
/* WARNING: Removing unreachable block (ram,0x000107757950) */

bool FUN_10775792c(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  
  bVar4 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)((long)param_3 + 0x17);
  uVar2 = param_3[1];
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar6 = (long *)*param_2;
    if (-1 < (char)bVar4) {
      plVar6 = param_2;
    }
    plVar3 = (long *)*param_3;
    if (-1 < (char)bVar5) {
      plVar3 = param_3;
    }
    func_0x000107c610b0(plVar6,plVar3);
    return (int)plVar6 == 0;
  }
  return false;
}



/* Entry: 107758b38; end: 107758c03;  */

long * FUN_107758b38(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_1a0 [24];
  undefined8 *puStack_188;
  undefined1 auStack_180 [56];
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [120];
  undefined8 uStack_b8;
  long *plStack_68;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  plVar6 = param_1;
  func_0x00010775931c();
  uStack_28 = extraout_x8;
  (**(code **)(*plVar6 + 0x40))(auStack_60);
  plStack_68 = (long *)0x0;
  func_0x0001073f26dc(&plStack_68,auStack_60);
  func_0x00010756af98(&plStack_68,param_1 + 9);
  func_0x00010756af98(&plStack_68,param_1 + 0xb);
  func_0x0001073f26dc(&plStack_68,param_1 + 0xd);
  func_0x0001073f26dc(&plStack_68,param_1 + 0x14);
  func_0x000107756258(&plStack_68,param_1 + 0x1b);
  param_1 = param_1 + 0x23;
  func_0x00010756af98(&plStack_68);
  plVar6 = plStack_68;
  func_0x000104c2f714();
  func_0x000107759308(uStack_28);
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  puVar2 = auStack_60;
  func_0x000104c2f714();
  func_0x000107759334();
  puVar3 = puVar2;
  func_0x00010775931c();
  uStack_b8 = extraout_x8_00;
  (**(code **)(**(long **)(puVar3 + 0x58) + 0x48))();
  (**(code **)(**(long **)(puVar2 + 0x48) + 0x48))
            (*(long **)(puVar2 + 0x48),param_1,param_3,param_4);
  uVar1 = *(char *)(param_3 + 400) == '\x01';
  if ((bool)uVar1) {
    lVar4 = param_3;
    func_0x00010756ec34(param_3);
    auStack_180[0] = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    puVar5 = (undefined8 *)0x28;
    __Znwm();
    *puVar5 = &PTR_DAT_1109d4e58;
    puVar5[1] = puVar2;
    puVar5[2] = param_1;
    puVar5[3] = param_3;
    puVar5[4] = param_4;
    puStack_188 = puVar5;
    func_0x000107757aa4(auStack_138,puVar2,lVar4,auStack_180,auStack_1a0);
    func_0x00010727f7f8(auStack_130);
    func_0x000107758f48(auStack_1a0);
    plVar6 = (long *)auStack_180;
    func_0x00010724b3d8(plVar6);
    func_0x000107759308(uStack_b8);
    if ((bool)uVar1) {
      return plVar6;
    }
  }
  else {
    plVar6 = *(long **)(puVar2 + 0x118);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x48);
    func_0x000107759308(uStack_b8);
    if ((bool)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x000107758d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return plVar6;
    }
  }
  ___stack_chk_fail();
  func_0x0001077594cc();
  func_0x000107758f48();
  plVar6 = (long *)auStack_180;
  func_0x00010724b3d8();
  func_0x000107759334();
  *plVar6 = (long)&PTR_DAT_1109d4cf0;
  func_0x0001072c9b9c(plVar6 + 0x23);
  func_0x00010724b3d8(plVar6 + 0x1b);
  func_0x000104c2f714(plVar6 + 0x14);
  func_0x000104c2f714(plVar6 + 0xd);
  func_0x0001072c9b9c(plVar6 + 0xb);
  func_0x0001072c9b9c(plVar6 + 9);
  *plVar6 = (long)&PTR_DAT_1109d4888;
  func_0x0001001148fc(plVar6 + 5);
  func_0x0001072c9884(plVar6 + 2);
  return plVar6;
}



/* Entry: 107758e84; end: 107758ebf;  */

void FUN_107758e84(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_1109d4d78;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 107758fb4; end: 1077590f7;  */

undefined8 *
FUN_107758fb4(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,long *param_7)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 auStack_60 [16];
  
  func_0x0001072c9ff4(auStack_60,*param_3 + 0x10);
  uStack_70 = *(undefined4 *)(*param_2 + 0x20);
  uStack_6c = *(undefined2 *)(*param_2 + 0x24);
  uStack_78 = *(undefined4 *)(*param_3 + 0x20);
  uStack_74 = *(undefined2 *)(*param_3 + 0x24);
  uStack_80 = *(undefined4 *)(*param_7 + 0x20);
  uStack_7c = *(undefined2 *)(*param_7 + 0x24);
  puVar1 = &uStack_70;
  func_0x000107545a48(puVar1,&uStack_78,&uStack_80);
  uStack_68 = SUB84(puVar1,0);
  uStack_64 = (undefined2)((ulong)puVar1 >> 0x20);
  func_0x0001072c9f9c(param_1,0x1c,auStack_60,&uStack_68);
  func_0x0001072c9884(auStack_60);
  *param_1 = &PTR_DAT_1109d4cf0;
  lVar2 = *param_2;
  param_1[10] = param_2[1];
  param_1[9] = lVar2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *param_3;
  param_1[0xc] = param_3[1];
  param_1[0xb] = lVar2;
  *param_3 = 0;
  param_3[1] = 0;
  func_0x000104c2fe00(param_1 + 0xd,param_4);
  func_0x000104c2fe00(param_1 + 0x14,param_5);
  func_0x0001072649c8(param_1 + 0x1b,param_6);
  lVar2 = *param_7;
  param_1[0x24] = param_7[1];
  param_1[0x23] = lVar2;
  *param_7 = 0;
  param_7[1] = 0;
  return param_1;
}



/* Entry: 1077592c0; end: 1077592cb;  */

undefined ** FUN_1077592c0(void)

{
  return &PTR_DAT_1109d4eb8;
}



/* Entry: 10775abe4; end: 10775ac03;  */

undefined8 * FUN_10775abe4(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined4 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [64];
  undefined8 uStack_80;
  
  if (param_3 < (ulong)(param_2 - param_1 >> 8)) {
    return (undefined8 *)(param_1 + param_3 * 0x100);
  }
  func_0x00010775c008();
  func_0x00010775c2a0();
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_80 = extraout_x8_00;
  func_0x000100060964(auStack_c0,"format");
  func_0x0001074d2254(&uStack_d8,auStack_c0);
  func_0x000104c2f714(auStack_c0);
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  for (puVar3 = *(undefined8 **)(param_1 + 0x48); uVar2 = puVar3 == puVar1, !(bool)uVar2;
      puVar3 = puVar3 + 0x20) {
    func_0x00010775c384(*puVar3);
    func_0x00010775c310();
    func_0x0001072aad1c(&uStack_d8,auStack_c0);
    func_0x00010775c2e0();
    puStack_f8 = &UNK_10e52b660;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_f0 = 0;
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
    func_0x000104c33260(auStack_c0,&puStack_f8);
    func_0x0001075726d4(&uStack_d8,auStack_c0);
    func_0x000104c335c0(auStack_c0);
    func_0x000104c33548(&puStack_f8);
  }
  func_0x000107327958(&uStack_120,&uStack_d8);
  *extraout_x8 = 0;
  *(undefined8 *)(extraout_x8 + 4) = uStack_118;
  *(undefined8 *)(extraout_x8 + 2) = uStack_120;
  uStack_120 = 0;
  uStack_118 = 0;
  func_0x000104c33108(&uStack_120);
  puVar3 = &uStack_d8;
  func_0x000107269124(puVar3);
  func_0x00010775c25c(uStack_80);
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x000104c2f714(auStack_c0);
  do {
    func_0x000107269124(&uStack_d8);
    func_0x00010775c370();
    func_0x00010775c2e0();
  } while( true );
}



/* Entry: 10775be30; end: 10775be8b;  */

ulong * FUN_10775be30(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar7 = param_1 + 1;
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    uVar8 = 4;
  }
  else {
    puVar7 = (ulong *)param_1[1];
    uVar8 = param_1[2];
  }
  if (uVar6 >> 1 != uVar8) {
    uVar8 = param_2[1];
    uVar9 = *param_2;
    (puVar7 + (uVar6 >> 1) * 2)[1] = param_2[1];
    puVar7[(uVar6 >> 1) * 2] = uVar9;
    if (uVar8 != 0) {
      plVar1 = (long *)(uVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar6 = *param_1;
    }
    *param_1 = uVar6 + 2;
    return param_1;
  }
  puVar7 = param_1 + 1;
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    lVar5 = 8;
  }
  else {
    puVar7 = (ulong *)param_1[1];
    lVar5 = param_1[2] << 1;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  puVar4 = &uStack_50;
  puStack_58 = puVar7;
  func_0x0001072c9aa8(puVar4,lVar5);
  uVar6 = uVar6 >> 1;
  puVar4 = puVar4 + uVar6 * 2;
  uVar8 = param_2[1];
  uVar9 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar9;
  if (uVar8 != 0) {
    plVar1 = (long *)(uVar8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001072c9ac8(param_1,uStack_50,&puStack_58,uVar6);
  func_0x0001072c9af4(param_1,puVar7,uVar6);
  func_0x0001072c9b28(param_1);
  uVar8 = uStack_48;
  uVar6 = uStack_50;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[1] = uVar6;
  param_1[2] = uVar8;
  *param_1 = (*param_1 | 1) + 2;
  func_0x0001072c9b78(&uStack_50);
  return puVar4;
}



/* Entry: 10775c114; end: 10775c23b;  */

undefined1 *
FUN_10775c114(undefined1 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,ushort *param_7,ushort *param_8,ushort *param_9
             ,ushort *param_10,undefined8 *param_11,undefined8 *param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_268 [24];
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [81];
  undefined1 uStack_187;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  ushort *puStack_168;
  ushort *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [56];
  undefined8 uStack_68;
  
  func_0x00010775c2a0();
  uStack_68 = extraout_x8;
  func_0x000104c2fe00(auStack_a0);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  func_0x000107278b0c(auStack_b8,param_4);
  uStack_c8 = param_5[1];
  uStack_d0 = *param_5;
  uStack_c0 = *(undefined4 *)(param_5 + 2);
  uStack_130 = (ulong)*param_7;
  uStack_128 = (ulong)*param_8;
  uStack_120 = (ulong)*param_9;
  uStack_118 = (ulong)*param_10;
  uStack_e8 = param_11[1];
  uStack_f0 = *param_11;
  uStack_e0 = *(undefined4 *)(param_11 + 2);
  uStack_108 = *param_12;
  uStack_100 = param_12[1];
  puStack_110 = &uStack_f0;
  puVar4 = auStack_b8;
  func_0x000107545044(param_1,auStack_a0,uVar1,uVar2,puVar4,&uStack_d0,*param_6,param_6[1]);
  func_0x00010775c3e0();
  puVar3 = auStack_a0;
  func_0x000104c2f714();
  func_0x00010775c25c(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010775c3e0();
    func_0x000104c2f714(auStack_a0);
    func_0x00010775c370();
    puStack_138 = &UNK_10775c23c;
    uStack_180 = param_4;
    puStack_178 = param_5;
    puStack_170 = param_6;
    puStack_168 = param_7;
    puStack_160 = param_8;
    uStack_158 = uVar2;
    uStack_150 = uVar1;
    puStack_148 = puVar3;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x000100456794(auStack_220,param_6,&UNK_10f426c98,1,param_7);
    func_0x000107878fec(auStack_238,1);
    func_0x00010533a9c0(auStack_208,auStack_220,auStack_238);
    func_0x00010048a6c8(auStack_1f0,auStack_208,&UNK_10f426c9a);
    uStack_248 = param_6[9];
    uStack_250 = param_6[8];
    if (param_6[9] != 0) {
      do {
        func_0x000107771b38();
      } while (extraout_w10 != 0);
    }
    func_0x000107771650(auStack_268,puVar4);
    uStack_278 = param_6[7];
    uStack_280 = param_6[6];
    if (param_6[7] != 0) {
      do {
        func_0x000107771b38();
      } while (extraout_w10_00 != 0);
    }
    func_0x000107771c28(auStack_1d8,auStack_1f0,&uStack_250,auStack_268,&uStack_280);
    func_0x0001072c9830(&uStack_280);
    func_0x000107771c44();
    func_0x000107771c14();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_238);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_220);
    uStack_187 = 0;
    puVar4 = auStack_1d8;
    func_0x000107771b68(puVar4);
    func_0x000107771bbc();
    return puVar4;
  }
  return param_1;
}



/* Entry: 10775cd70; end: 10775ce07;  */

void FUN_10775cd70(void)

{
  long *unaff_x20;
  long lVar1;
  ulong unaff_x22;
  
  func_0x00010775e4f8();
  lVar1 = *unaff_x20;
  func_0x00010775e124();
  if ((unaff_x22 & 1) != 0) {
    func_0x00010775e4e4();
    *(undefined4 *)(lVar1 + 0x38) = 7;
  }
  func_0x00010775e518();
  return;
}



/* Entry: 10775e058; end: 10775e0a7;  */

void FUN_10775e058(void)

{
  undefined1 uStack_21;
  
  func_0x00010775f590(&uStack_21);
  func_0x00010775e458();
  return;
}



/* Entry: 10775e66c; end: 10775e723;  */

float FUN_10775e66c(double param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  double dVar4;
  undefined8 uStack_50;
  double dStack_48;
  
  plVar1 = param_3;
  uStack_50 = param_2;
  dStack_48 = param_1;
  func_0x00010775e724(param_3,&dStack_48);
  plVar2 = param_3;
  func_0x00010775e724(param_3,&uStack_50);
  plVar3 = param_3 + 1;
  if (((long *)*param_3 != plVar1 && plVar3 != plVar1) && (dStack_48 < (double)plVar1[4])) {
    func_0x00010002c810();
  }
  if (plVar1 == plVar3) {
    plVar1 = plVar3;
    func_0x00010002c810();
  }
  dVar4 = (double)plVar1[4];
  if (plVar3 == plVar2) {
    func_0x00010002c810();
  }
  return (float)dVar4;
}



/* Entry: 10775ed10; end: 10775ed73;  */

long * FUN_10775ed10(long param_1,long param_2)

{
  long *plVar1;
  
  if (*(int *)(param_2 + 8) == 0x20) {
    plVar1 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0x48));
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010775ed60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0x58));
      return plVar1;
    }
  }
  return (long *)0x0;
}



/* Entry: 10775eed8; end: 10775ef03;  */

long FUN_10775eed8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10775f38c; end: 10775f58f;  */

void FUN_10775f38c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  long *plVar4;
  undefined1 uStack_181;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined1 auStack_168 [56];
  undefined1 auStack_130 [56];
  long lStack_f8;
  undefined1 auStack_f0 [88];
  undefined1 auStack_98 [56];
  byte bStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  plVar3 = param_2;
  func_0x00010775f634();
  plVar4 = plVar3 + 1;
  plVar1 = plVar4;
  uStack_48 = extraout_x8;
  (**(code **)(*plVar3 + 0x18))();
  if ((int)plVar1 == 0) {
    (**(code **)(*param_2 + 0x68))(auStack_98,plVar4);
    in_ZR = bStack_60 == 1;
    if ((bool)in_ZR) {
      func_0x000104c2fe00(auStack_168,auStack_98);
      func_0x00010775f62c(&lStack_f8,auStack_168);
      func_0x00010775f614();
      func_0x00010726b164(&lStack_f8);
      func_0x000104c2f714(auStack_168);
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (param_3,&UNK_10f4260a7);
      *unaff_x19 = 0;
      unaff_x19[0x60] = 0;
    }
    func_0x00010775f5f4();
  }
  else {
    (**(code **)(*param_2 + 0x28))(&lStack_58,plVar4,0);
    puVar2 = auStack_50;
    (**(code **)(lStack_58 + 0x20))();
    if (puVar2 == (undefined1 *)0x0) {
      func_0x00010775f5e4();
      *unaff_x19 = 0;
      unaff_x19[0x60] = 0;
    }
    else {
      (**(code **)(lStack_58 + 0x28))(&lStack_f8,auStack_50,0);
      (**(code **)(lStack_f8 + 0x68))(auStack_98,auStack_f0);
      func_0x0001072f5f6c(&lStack_f8);
      if ((bStack_60 & 1) == 0) {
        func_0x00010775f5e4();
        *unaff_x19 = 0;
        unaff_x19[0x60] = 0;
      }
      else {
        func_0x000104c2fe00(auStack_130,auStack_98);
        func_0x00010775f62c(&lStack_f8,auStack_130);
        func_0x00010775f614();
        func_0x00010726b164(&lStack_f8);
        func_0x000104c2f714(auStack_130);
      }
      func_0x00010775f5f4();
    }
    func_0x0001072f5f6c(&lStack_58);
  }
  func_0x00010775f5b0(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010775f5f4();
  func_0x0001072f5f6c(&lStack_58);
  func_0x00010775f5dc();
  puStack_178 = &SUB_10775f590;
  puStack_180 = &stack0xfffffffffffffff0;
  func_0x00010726364c(&uStack_181);
  return;
}



/* Entry: 10775faf0; end: 10775fb27;  */

long * FUN_10775faf0(long param_1,long param_2)

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



/* Entry: 1077601e0; end: 1077601e7;  */

void FUN_1077601e0(void)

{
  return;
}



/* Entry: 107760608; end: 10776062f;  */

void FUN_107760608(undefined8 param_1)

{
  func_0x000107760b74();
  func_0x000107760b08(param_1,&PTR_DAT_1109d5270);
  func_0x000107760af0();
  return;
}



/* Entry: 1077608f0; end: 107760917;  */

void FUN_1077608f0(undefined8 param_1)

{
  func_0x000107760b74();
  func_0x000107760b08(param_1,&PTR_DAT_1109d5260);
  func_0x000107760af0();
  return;
}



/* Entry: 107760ddc; end: 107760ddf;  */

undefined8 * FUN_107760ddc(undefined8 *param_1)

{
  func_0x000107261dac(param_1 + 0xd);
  func_0x0001072c9b9c(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10776186c; end: 10776186f;  */

/* WARNING: Possible PIC construction at 0x0001074d24e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001074d24e8) */
/* WARNING: Removing unreachable block (ram,0x0001074d2590) */
/* WARNING: Removing unreachable block (ram,0x0001074d25b0) */
/* WARNING: Removing unreachable block (ram,0x0001074d2548) */

undefined8 FUN_10776186c(long *param_1)

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



/* Entry: 107761a4c; end: 107761c1f;  */

byte * FUN_107761a4c(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  byte bVar6;
  undefined8 uStack_130;
  undefined4 uStack_128;
  long lStack_120;
  ulong uStack_118;
  undefined4 uStack_110;
  undefined1 uStack_e0;
  byte abStack_d8 [8];
  undefined1 auStack_d0 [112];
  int iStack_60;
  
  lVar5 = param_1;
  func_0x0001077623b4();
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar1 = *(char *)(param_1 + 0x68) == '\x01';
  if (!(bool)uVar1) {
    bVar6 = 1;
    goto LAB_107761af0;
  }
  func_0x000107753050(abStack_d8,*(undefined8 *)(param_1 + 0x58),param_2,param_3);
  uVar1 = iStack_60 == 1;
  if ((bool)uVar1) {
    pbVar3 = abStack_d8;
    func_0x00010727f7dc();
    uVar1 = *(int *)(pbVar3 + 0x68) == 1;
    if (!(bool)uVar1) goto LAB_107761ae0;
    pbVar3 = abStack_d8;
    func_0x00010727f7dc();
    func_0x000107280568();
    bVar6 = *pbVar3;
  }
  else {
LAB_107761ae0:
    bVar6 = 1;
  }
  func_0x00010727f7f8(auStack_d0);
LAB_107761af0:
  func_0x000107572618(abStack_d8,param_3);
  if ((bVar6 & 1) == 0) {
    uStack_118 = uStack_118 & 0xffffffffffffff00;
    uStack_e0 = 0;
  }
  else {
    func_0x00010729807c(&uStack_118,param_1 + 0x70);
  }
  func_0x0001072e948c(abStack_d8,&uStack_118);
  func_0x00010724b3d8(&uStack_118);
  lVar4 = *(long *)(param_1 + 0x48);
  func_0x000107753050(lVar4,param_2,abStack_d8);
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_120 = (lVar4 - lVar5) / 1000;
  if ((bVar6 & 1) != 0) {
    uStack_118 = **(ulong **)(param_1 + 0xa8);
    uStack_110 = 3;
    func_0x00010743f9dc(*(ulong **)(param_1 + 0xa8),param_1 + 0x120,&lStack_120,&uStack_118,7);
    uStack_118 = CONCAT44(uStack_118._4_4_,1);
    uStack_110 = 0;
    uStack_130 = **(undefined8 **)(param_1 + 0xa8);
    uStack_128 = 3;
    param_2 = param_1 + 0xb0;
    func_0x00010743fa9c(*(undefined8 **)(param_1 + 0xa8),param_2,&uStack_118,&uStack_130,7);
  }
  pbVar3 = abStack_d8;
  func_0x00010724b3d8();
  func_0x00010776239c();
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010727f7f8(unaff_x19 + 8);
    func_0x00010724b3d8(abStack_d8);
    __Unwind_Resume();
    pbVar2 = *(byte **)(param_2 + 0x18);
    if (pbVar2 != (byte *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)pbVar2 + 0x30))();
      return pbVar2;
    }
    func_0x000104bfeb48(0,*(undefined8 *)(pbVar3 + 0x48));
    pbVar3 = *(byte **)(pbVar2 + 0x18);
    if (pbVar3 == pbVar2) {
      lVar5 = 0x20;
    }
    else {
      if (pbVar3 == (byte *)0x0) {
        return pbVar2;
      }
      lVar5 = 0x28;
    }
    (**(code **)(*(long *)pbVar3 + lVar5))();
    return pbVar2;
  }
  return pbVar3;
}



/* Entry: 1077622fc; end: 107762337;  */

long FUN_1077622fc(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d54b0);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107763a80; end: 107763aeb;  */

void FUN_107763a80(void)

{
  undefined8 in_x5;
  long extraout_x11;
  long unaff_x19;
  
  func_0x000107765b00();
  if (extraout_x11 != 0) {
    func_0x000107765ef8();
  }
  func_0x000107765be0();
  func_0x000107765de8();
  func_0x000107765de0();
  func_0x0001002a8234(unaff_x19 + 0x28,in_x5);
  return;
}



/* Entry: 1077641e4; end: 10776427f;  */

undefined1 * FUN_1077641e4(long *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 auStack_60 [7];
  undefined8 uStack_28;
  
  puVar3 = auStack_60;
  puVar2 = auStack_60;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = (int)param_1[1] == 1;
  if ((bool)uVar1) {
    (**(code **)(*param_1 + 0x40))(auStack_60);
    param_2 = (long *)&DAT_10f34b835;
    func_0x000107278484(auStack_60);
    func_0x000104c2f714();
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  func_0x000107765aec(uStack_28);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000104c2f714();
    func_0x000107765c04();
    if (puVar2[2] == param_2[2]) {
      puVar3 = (undefined8 *)*puVar2;
      lVar4 = *param_2;
      while (puVar5 = (undefined1 *)(ulong)(puVar3 == puVar2 + 1), puVar3 != puVar2 + 1) {
        puVar3 = puVar3 + 4;
        func_0x000107764378(puVar3,lVar4 + 0x20);
        if ((int)puVar3 == 0) {
          return puVar5;
        }
        func_0x000107765ec0();
        func_0x00010002c7d4();
      }
    }
    else {
      puVar5 = (undefined1 *)0x0;
    }
    return puVar5;
  }
  return (undefined1 *)puVar3;
}



/* Entry: 107764404; end: 107764433;  */

void FUN_107764404(int param_1)

{
  undefined1 extraout_w8;
  undefined1 uVar1;
  undefined1 *unaff_x19;
  
  func_0x000107765c34();
  if (param_1 == 0) {
    uVar1 = 0;
    *unaff_x19 = 0;
  }
  else {
    func_0x000107765ed8();
    uVar1 = extraout_w8;
  }
  unaff_x19[0x38] = uVar1;
  return;
}



/* Entry: 1077649b8; end: 107764a03;  */

double FUN_1077649b8(long *param_1,long param_2)

{
  float fVar1;
  float fVar3;
  float fVar4;
  double dVar2;
  
  fVar3 = (float)*(double *)*param_1;
  fVar4 = (float)((double *)*param_1)[1] - fVar3;
  fVar1 = 0.0;
  if (fVar4 != 0.0) {
    fVar1 = ((float)*(double *)param_1[1] - fVar3) / fVar4;
  }
  dVar2 = (double)fVar1;
  func_0x0001073b42a0(dVar2,0x3eb0c6f7a0b5ed8d);
  return dVar2 * (*(double *)(param_2 + 0x18) +
                 dVar2 * (*(double *)(param_2 + 0x20) + dVar2 * *(double *)(param_2 + 0x28)));
}



/* Entry: 107764b1c; end: 107764b27;  */

void FUN_107764b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107765d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10776506c; end: 10776506f;  */

void FUN_10776506c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d5718;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107765658; end: 1077657a7;  */

void FUN_107765658(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plStack_e0;
  long alStack_d8 [4];
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  plVar1 = param_1;
  func_0x000107765e1c();
  plVar2 = plVar1;
  func_0x000107766084();
  uStack_98 = param_4[1];
  uStack_a0 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  plVar3 = (long *)*param_5;
  plVar5 = param_5 + 1;
  lStack_b0 = *plVar5;
  lStack_a8 = param_5[2];
  plVar4 = alStack_d8;
  if (lStack_a8 != 0) {
    *(long **)(lStack_b0 + 0x10) = alStack_d8;
    *param_5 = (long)plVar5;
    *plVar5 = 0;
    param_5[2] = 0;
    plVar4 = plVar3;
  }
  uStack_88 = param_3[1];
  uStack_90 = *param_3;
  uStack_78 = param_3[3];
  uStack_80 = param_3[2];
  uStack_68 = param_3[5];
  uStack_70 = param_3[4];
  uStack_60 = param_3[6];
  alStack_d8[2] = 0;
  alStack_d8[3] = 0;
  plStack_b8 = &lStack_b0;
  plStack_e0 = plVar4;
  alStack_d8[0] = lStack_b0;
  if (lStack_a8 != 0) {
    *(long **)(lStack_b0 + 0x10) = plStack_b8;
    alStack_d8[0] = 0;
    plStack_e0 = alStack_d8;
    plStack_b8 = plVar4;
  }
  alStack_d8[1] = 0;
  func_0x0001077638fc(plVar2 + 3,param_2,&uStack_90,&uStack_a0,&plStack_b8);
  func_0x000107545fd8(&plStack_b8);
  func_0x0001072c9b9c(&uStack_a0);
  plVar1[3] = (long)&PTR_DAT_1109d5768;
  func_0x000107545fd8(&plStack_e0);
  func_0x0001072c9b9c(alStack_d8 + 2);
  *param_1 = (long)(plVar2 + 3);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 107765834; end: 10776586b;  */

long FUN_107765834(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d5890);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077659ec; end: 107765a43;  */

undefined8 FUN_1077659ec(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined4 *puStack_38;
  
  func_0x000107765d00();
  func_0x000107765ce4();
  uVar1 = *unaff_x20;
  *puStack_38 = 3;
  *(undefined8 *)(puStack_38 + 2) = uVar1;
  func_0x000107766008();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107765ed0();
  return uVar1;
}



/* Entry: 107766794; end: 1077667a7;  */

void FUN_107766794(void)

{
  func_0x0001077667bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107766ac0; end: 107766b23;  */

void FUN_107766ac0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1 + 0x48;
  lVar2 = param_2;
  func_0x000107375ad0();
  lStack_30 = lVar1;
  lStack_28 = lVar2;
  while (lStack_30 != 0) {
    func_0x00010745df58(param_2,*(undefined8 *)(lStack_28 + 0x38));
    func_0x000107375b30(&lStack_30);
  }
  func_0x00010745df58(param_2,*(undefined8 *)(param_1 + 0x68));
  return;
}



/* Entry: 107767680; end: 107767683;  */

void FUN_107767680(void)

{
  return;
}



/* Entry: 1077680b4; end: 1077680c7;  */

void FUN_1077680b4(void)

{
  func_0x0001077681d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107768218; end: 10776821f;  */

void FUN_107768218(void)

{
  return;
}



/* Entry: 107768430; end: 107768457;  */

long FUN_107768430(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x000107768458();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10776852c; end: 107768547;  */

void FUN_10776852c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d5bc8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10776872c; end: 10776873b;  */

undefined ** FUN_10776872c(void)

{
  return &PTR_DAT_1109d5ca8;
}



/* Entry: 107768e6c; end: 10776922f;  */

/* WARNING: Removing unreachable block (ram,0x000107769388) */

long * FUN_107768e6c(long *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined4 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  long lVar7;
  long *plVar8;
  long *plStack_338;
  long alStack_330 [7];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  undefined1 **ppuStack_2e0;
  undefined *puStack_2d8;
  undefined1 uStack_2c1;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2a8 [72];
  long alStack_260 [7];
  long alStack_228 [8];
  undefined1 auStack_1e8 [64];
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined8 *puStack_190;
  long *plStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  uint uStack_158;
  long lStack_150;
  char cStack_148;
  undefined1 auStack_140 [24];
  long alStack_128 [3];
  undefined1 auStack_110 [16];
  long lStack_100;
  long lStack_f8;
  char cStack_f0;
  undefined7 uStack_ef;
  char cStack_e8;
  long alStack_d8 [13];
  uint uStack_70;
  byte bStack_68;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  plVar3 = param_2;
  func_0x0001077698dc();
  plVar8 = plVar3 + 1;
  plVar4 = plVar8;
  uStack_48 = extraout_x8;
  (**(code **)(*plVar3 + 0x30))();
  if ((int)plVar4 == 0) {
    plVar3 = plVar8;
    (**(code **)(*param_2 + 0x18))();
    if ((int)plVar3 == 0) {
      func_0x000107768a7c(alStack_d8,param_2,param_3);
      func_0x000107769934();
LAB_107769004:
      param_1[1] = lStack_f8;
      *param_1 = lStack_100;
      lStack_100 = 0;
      lStack_f8 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      FUN_1075795dc(&lStack_100);
    }
    else {
      func_0x0001077698fc();
      in_ZR = plVar3 == (long *)0x2;
      if (!(bool)in_ZR) {
        func_0x0001077698fc();
        func_0x000107878fec(&lStack_100,(long)plVar3 + -1);
        func_0x0001004c3cd0(alStack_d8,&UNK_10f4266bc,&lStack_100);
        func_0x00010048a6c8(auStack_140,alStack_d8,&UNK_10f417b93);
        func_0x00010756a668(param_3,auStack_140);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_d8);
        plVar3 = &lStack_100;
        goto LAB_107768ed0;
      }
      (**(code **)(*param_2 + 0x28))(&lStack_100,plVar8,1);
      func_0x000107768a7c(alStack_d8,&lStack_100,param_3);
      func_0x0001072f5f6c(&lStack_100);
      if ((bStack_68 & 1) != 0) {
        func_0x000107769924(&lStack_100);
        in_ZR = cStack_f0 == '\x01';
        if ((bool)in_ZR) {
          func_0x000107769924(auStack_160);
          plVar8 = (long *)(ulong)uStack_158;
          param_2 = (long *)(ulong)uStack_70;
          func_0x0001072c9854(auStack_160);
          func_0x00010776992c();
          in_ZR = uStack_158 == 7 && uStack_70 == 8;
          if (uStack_158 == 7 && uStack_70 == 8) {
            func_0x000107775f1c(auStack_160,alStack_d8);
            puVar6 = auStack_160;
            func_0x00010756dcfc(puVar6);
            func_0x0001072ca108(&lStack_100,puVar6);
            func_0x0001077698f4();
            puVar6 = auStack_60;
            func_0x000107769924(puVar6);
            func_0x00010756dcfc();
            func_0x0001072ca108(auStack_160,puVar6);
            func_0x0001072c9854(auStack_60);
            in_ZR = cStack_e8 == '\x01';
            if ((((bool)in_ZR) && (CONCAT71(uStack_ef,cStack_f0) == 0)) &&
               ((in_ZR = cStack_148 == '\x01', !(bool)in_ZR || (lStack_150 == 0)))) {
              plVar8 = alStack_d8;
              func_0x0001075725f8(plVar8);
              func_0x0001075794c4(auStack_60,1);
              puVar1 = puStack_50;
              puStack_50[2] = 0;
              *puStack_50 = &PTR_DAT_1109d0da0;
              puStack_50[1] = 0;
              func_0x000107278c90(auStack_110,plVar8);
              func_0x000107769788(puVar1 + 3,auStack_160,auStack_110);
              func_0x00010726b188(auStack_110);
              param_3 = puStack_50;
              puStack_50 = (undefined8 *)0x0;
              plVar8 = param_3 + 3;
              func_0x000107579550(auStack_60);
              *param_1 = (long)plVar8;
              param_1[1] = (long)param_3;
              uStack_170 = 0;
              uStack_168 = 0;
              *(undefined1 *)(param_1 + 2) = 1;
              FUN_1075795dc(&uStack_170);
              func_0x0001077698f4();
              func_0x0001072c9884(&lStack_100);
              goto LAB_107769020;
            }
            func_0x0001077698f4();
            func_0x0001072c9884(&lStack_100);
          }
        }
        else {
          func_0x00010776992c();
        }
        func_0x000107769934();
        goto LAB_107769004;
      }
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
LAB_107769020:
    plVar3 = alStack_d8;
    func_0x000107296ad0();
  }
  else {
    func_0x00010002b838(alStack_128,&UNK_10f426686);
    func_0x00010756a668(param_3,alStack_128);
    plVar3 = alStack_128;
LAB_107768ed0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  func_0x0001077698c8(uStack_48);
  if ((bool)in_ZR) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00010726b188(auStack_110);
  __ZNSt3__119__shared_weak_countD2Ev(param_3);
  func_0x000107579550(auStack_60);
  func_0x0001077698f4();
  func_0x0001072c9884(&lStack_100);
  plVar4 = alStack_d8;
  func_0x000107296ad0();
  func_0x0001077698ec();
  puStack_178 = &DAT_107769230;
  plVar5 = plVar4;
  plStack_1a0 = param_2;
  plStack_198 = plVar8;
  puStack_190 = param_3;
  plStack_188 = plVar3;
  puStack_180 = &stack0xfffffffffffffff0;
  func_0x0001077698dc();
  uVar2 = (*(uint *)(plVar5 + 3) | 2) == 7;
  uStack_1a8 = extraout_x8_01;
  if ((bool)uVar2) {
    (**(code **)(*plVar4 + 0x40))(alStack_260,plVar4);
    func_0x000104c33004(alStack_228,alStack_260);
    func_0x00010729d318(auStack_2a8,plVar4 + 9,&uStack_2c1);
    func_0x000104c32a18(auStack_1e8,auStack_2a8);
    func_0x000107268bc4(&uStack_2c0,alStack_228,2);
    *extraout_x8_00 = 0;
    *(undefined8 *)(extraout_x8_00 + 4) = uStack_2b8;
    *(undefined8 *)(extraout_x8_00 + 2) = uStack_2c0;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    func_0x000104c33108(&uStack_2c0);
    lVar7 = 0x40;
    do {
      func_0x000104c3323c((long)alStack_228 + lVar7);
      lVar7 = lVar7 + -0x40;
      uVar2 = lVar7 == -0x40;
    } while (!(bool)uVar2);
    func_0x000107267ed0(auStack_2a8);
    plVar8 = alStack_260;
    func_0x000104c2f714();
  }
  else {
    func_0x00010729d318(alStack_228,plVar4 + 9,auStack_2a8);
    func_0x000104c32a18(extraout_x8_00,alStack_228);
    plVar8 = alStack_228;
    func_0x000107267ed0();
  }
  func_0x0001077698c8(uStack_1a8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar6 = auStack_1e8;
    lVar7 = -0x80;
    do {
      func_0x000104c3323c(puVar6);
      puVar6 = puVar6 + -0x40;
      lVar7 = lVar7 + 0x40;
    } while (lVar7 != 0);
    func_0x000107267ed0(auStack_2a8);
    plVar3 = alStack_260;
    func_0x000104c2f714();
    func_0x0001077698ec();
    uStack_2f0 = 1;
    puStack_2d8 = &DAT_10776939c;
    plVar4 = plVar3;
    plStack_2e8 = plVar8;
    ppuStack_2e0 = &puStack_180;
    func_0x0001077698dc();
    uStack_2f8 = extraout_x8_02;
    (**(code **)(*plVar4 + 0x40))(alStack_330);
    plStack_338 = (long *)0x0;
    func_0x0001073f26dc(&plStack_338,alStack_330);
    func_0x00010772db3c(&plStack_338,plVar3 + 9);
    plVar8 = plStack_338;
    func_0x000104c2f714();
    func_0x0001077698c8(uStack_2f8);
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      plVar8 = alStack_330;
      func_0x000104c2f714();
      func_0x0001077698ec();
      *plVar8 = (long)&PTR_DAT_1109d5d18;
      func_0x00010726af18(plVar8 + 10);
      *plVar8 = (long)&PTR_DAT_1109d4888;
      func_0x0001001148fc(plVar8 + 5);
      func_0x0001072c9884(plVar8 + 2);
      return plVar8;
    }
    return plVar8;
  }
  return plVar8;
}



/* Entry: 10776950c; end: 10776954b;  */

void FUN_10776950c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_1109d5da0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10776994c; end: 10776a34f;  */

/* WARNING: Possible PIC construction at 0x000107769c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107769fc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107769ca0) */
/* WARNING: Removing unreachable block (ram,0x000107769f18) */
/* WARNING: Removing unreachable block (ram,0x000107769ca4) */
/* WARNING: Removing unreachable block (ram,0x000107769cd4) */
/* WARNING: Removing unreachable block (ram,0x000107769cec) */
/* WARNING: Removing unreachable block (ram,0x000107769d68) */
/* WARNING: Removing unreachable block (ram,0x000107769dd4) */
/* WARNING: Removing unreachable block (ram,0x000107769dbc) */
/* WARNING: Removing unreachable block (ram,0x000107769df8) */
/* WARNING: Removing unreachable block (ram,0x000107769e0c) */
/* WARNING: Removing unreachable block (ram,0x000107769d30) */
/* WARNING: Removing unreachable block (ram,0x000107769d4c) */
/* WARNING: Removing unreachable block (ram,0x000107769f5c) */
/* WARNING: Removing unreachable block (ram,0x000107769d5c) */
/* WARNING: Removing unreachable block (ram,0x000107769fc4) */
/* WARNING: Removing unreachable block (ram,0x000107769fc8) */
/* WARNING: Removing unreachable block (ram,0x000107769ff0) */

undefined8 *** FUN_10776994c(long *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long ***ppplVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 ***pppuVar7;
  undefined ***pppuVar8;
  long **pplVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar13;
  long lVar14;
  undefined8 ***pppuVar15;
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  long lStack_2e8;
  byte bStack_2e0;
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 **ppuStack_260;
  long lStack_258;
  ulong uStack_250;
  long lStack_248;
  undefined8 **ppuStack_240;
  undefined8 ***pppuStack_238;
  undefined **ppuStack_228;
  undefined1 auStack_220 [48];
  undefined8 *apuStack_1f0 [3];
  long lStack_1d8;
  undefined8 **ppuStack_180;
  long lStack_178;
  byte bStack_170;
  byte bStack_168;
  undefined8 **appuStack_160 [7];
  byte bStack_128;
  undefined1 auStack_120 [16];
  undefined ***pppuStack_110;
  undefined8 ***pppuStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 **ppuStack_d8;
  long alStack_d0 [2];
  long **pplStack_c0;
  long lStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar13 = param_2 + 1;
  uVar10 = 1;
  (**(code **)(*param_2 + 0x28))(&ppuStack_228,plVar13,1);
  (*(code *)ppuStack_228[0xd])(appuStack_160,auStack_220);
  func_0x0001072f5f6c(&ppuStack_228);
  if ((bStack_128 & 1) == 0) {
    func_0x00010002b838(auStack_2a8,&UNK_10f4266fb);
    func_0x00010776a440();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    pppuVar15 = (undefined8 ***)*param_4;
    ppplVar3 = appuStack_160;
    func_0x000107264c5c();
    func_0x000107551314(&ppuStack_228,pppuVar15,ppplVar3,uVar10,param_3,param_4);
    if ((bStack_168 & 1) == 0) {
      func_0x00010776a4a4();
      pppuStack_110 = (undefined ***)pppuVar15;
      pppuStack_108 = ppplVar3;
      func_0x0001003a91d4(&UNK_10f426735);
      func_0x00010776a448(auStack_2c0);
      func_0x00010776a440();
      puVar6 = auStack_2c0;
LAB_107769bd4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6);
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      if ((bStack_170 & 1) == 0) {
        func_0x00010776a4a4();
        pppuStack_110 = (undefined ***)pppuVar15;
        pppuStack_108 = ppplVar3;
        func_0x0001003a91d4(&UNK_10f426747);
        func_0x00010776a448(auStack_2d8);
        func_0x00010776a440();
        puVar6 = auStack_2d8;
        goto LAB_107769bd4;
      }
      pplVar9 = apuStack_1f0;
      if ((lStack_1d8 == 1) &&
         (plVar4 = plVar13, (**(code **)(*param_2 + 0x20))(), plVar4 == (long *)0x3)) {
        func_0x000107552d68(pplVar9);
        (**(code **)(*param_2 + 0x28))(&pppuStack_110,plVar13,2);
        func_0x00010776a36c(&ppuStack_240,ppplVar3 + 0xe);
        uVar11 = (ulong)pplStack_c0 >> 0x28;
        uVar1 = (uint)pplStack_c0;
        pplStack_c0._0_5_ = (uint5)(uVar1 & 0xffffff00);
        pplStack_c0 = (long **)CONCAT35((int3)uVar11,(uint5)pplStack_c0);
        func_0x00010777067c(&ppuStack_260,param_3,&pppuStack_110,2,param_4,&ppuStack_240,
                            &pplStack_c0);
        func_0x0001072c9854(&ppuStack_240);
        func_0x0001072f5f6c(&pppuStack_110);
        if ((uStack_250 & 1) == 0) {
          func_0x00010776a388();
          func_0x00010776a4ac();
          func_0x00010776a468();
          ppplVar3 = &pplStack_c0;
          func_0x00010776a440();
          func_0x00010776a460();
          func_0x00010776a498();
        }
        else {
          func_0x000104c2fe00();
          alStack_d0[0] = lStack_258;
          ppuStack_d8 = ppuStack_260;
          if (lStack_258 != 0) {
            do {
              func_0x00010776a488();
            } while (extraout_w10 != 0);
          }
          func_0x000107579918(&pplStack_c0,1,&uStack_278,auStack_290,auStack_120);
          for (lVar14 = 0; lVar14 != 0x48; lVar14 = lVar14 + 0x48) {
            ppplVar3 = &pplStack_c0;
            uVar11 = (long)&pppuStack_110 + lVar14;
            func_0x000107324c18();
            if ((uVar11 & 1) != 0) {
              lVar5 = lStack_b8 + (long)ppplVar3 * 0x48;
              func_0x000104c2fe00(lVar5,(long)&pppuStack_110 + lVar14);
              lVar12 = *(long *)((long)alStack_d0 + lVar14);
              uVar10 = *(undefined8 *)((long)&ppuStack_d8 + lVar14);
              *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)((long)alStack_d0 + lVar14);
              *(undefined8 *)(lVar5 + 0x38) = uVar10;
              if (lVar12 != 0) {
                do {
                  func_0x00010776a488();
                } while (extraout_w10_00 != 0);
              }
            }
          }
          ppplVar3 = &pplStack_c0;
          func_0x000107324e30(auStack_300);
          func_0x0001072c9500(&pplStack_c0);
          func_0x0001072c9578(&pppuStack_110);
        }
        pppuVar7 = &ppuStack_260;
        func_0x0001072c95d0();
      }
      else {
        plVar4 = plVar13;
        (**(code **)(*param_2 + 0x20))();
        if (((ulong)plVar4 & 1) == 0) {
          ppuStack_260 = (undefined8 **)&UNK_10e52b660;
          lStack_258 = 0;
          uStack_250 = 0;
          lStack_248 = 0;
          if ((long)plVar4 - 2U == 0) {
            func_0x00010776a420();
            if (lStack_248 == lStack_1d8) {
              ppplVar3 = &ppuStack_260;
              func_0x000107324e30(auStack_300);
            }
            else {
              func_0x000107552d68();
              ppuStack_240 = pplVar9;
              pppuStack_238 = ppplVar3;
              if (pplVar9 != (long **)0x0) {
                pppuVar15 = &ppuStack_260;
                goto code_r0x00010776a350;
              }
              func_0x00010776a498();
            }
          }
          else {
            (**(code **)(*param_2 + 0x28))(&pplStack_c0,plVar13,2);
            (*(code *)pplStack_c0[0xd])(&pppuStack_110,&lStack_b8);
            func_0x0001072f5f6c(&pplStack_c0);
            lVar14 = 3;
            (**(code **)(*param_2 + 0x28))(auStack_120,plVar13);
            if (((ulong)ppuStack_d8 & 1) != 0) {
              pppuVar15 = &ppuStack_260;
              goto code_r0x00010776a350;
            }
            func_0x00010776a420();
            pppuVar8 = &ppuStack_228;
            func_0x0001072bb3b4();
            puStack_b0 = (undefined8 *)0x1;
            uStack_a8 = 0;
            pplStack_c0 = (long **)pppuVar8;
            lStack_b8 = lVar14;
            func_0x0001003a91d4(&UNK_10f42680b);
            func_0x0001003a9204(&ppuStack_240);
            ppplVar3 = &ppuStack_240;
            func_0x00010776a440();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_240);
            func_0x00010776a498();
            func_0x00010776a478();
            func_0x00010776a480();
          }
          pppuVar7 = &ppuStack_260;
          func_0x0001072c9500();
        }
        else {
          pppuVar15 = (undefined8 ***)&ppuStack_228;
          func_0x0001072bb3b4();
          uStack_f8 = 0;
          pppuVar7 = (undefined8 ***)&UNK_10f4267c4;
          pppuStack_110 = (undefined ***)pppuVar15;
          pppuStack_108 = ppplVar3;
          lStack_100 = (long)plVar4 - 2U;
          func_0x0001003a91d4();
          func_0x0001003a9204(&pplStack_c0);
          ppplVar3 = &pplStack_c0;
          func_0x00010776a440();
          func_0x00010776a460();
          func_0x00010776a498();
        }
      }
      if ((bStack_2e0 & 1) == 0) {
        func_0x00010776a4a4();
        pppuStack_110 = (undefined ***)pppuVar7;
        pppuStack_108 = ppplVar3;
        func_0x0001003a91d4(&UNK_10f426760);
        func_0x00010776a448(auStack_318);
        func_0x00010776a440();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_318);
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
      }
      else if (lStack_2e8 == 0) {
        func_0x000107543954(param_1,&ppuStack_180);
      }
      else {
        FUN_107768430(&pplStack_c0,1);
        puVar2 = puStack_b0;
        puStack_b0[2] = 0;
        *puStack_b0 = &PTR_DAT_1109d5b78;
        puStack_b0[1] = 0;
        func_0x000107579804(&pppuStack_110,auStack_300);
        lStack_258 = lStack_178;
        ppuStack_260 = ppuStack_180;
        if (lStack_178 != 0) {
          do {
            func_0x00010776a488();
          } while (extraout_w10_01 != 0);
        }
        func_0x000107768318(puVar2 + 3,&pppuStack_110,&ppuStack_260);
        func_0x0001072c9b9c(&ppuStack_260);
        func_0x0001072c9500(&pppuStack_110);
        puVar2 = puStack_b0;
        puStack_b0 = (undefined8 *)0x0;
        func_0x0001077684bc(&pplStack_c0);
        uStack_278 = 0;
        uStack_270 = 0;
        func_0x0001077684cc(&uStack_278);
        *param_1 = (long)(puVar2 + 3);
        param_1[1] = (long)puVar2;
        ppuStack_240 = (long **)0x0;
        pppuStack_238 = (long ***)0x0;
        *(undefined1 *)(param_1 + 2) = 1;
        func_0x0001072c9b9c(&ppuStack_240);
      }
      func_0x0001072c94e0(auStack_300);
    }
    func_0x00010776a3ec(&ppuStack_228);
  }
  pppuVar15 = appuStack_160;
  func_0x00010724b3d8(pppuVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pppuVar15;
  }
  ___stack_chk_fail();
  func_0x0001072c9500(&ppuStack_260);
  func_0x00010776a3ec(&ppuStack_228);
  func_0x00010724b3d8(appuStack_160);
  __Unwind_Resume(pppuVar15);
code_r0x00010776a350:
  func_0x00010757e728();
  return (undefined8 ***)(ulong)(pppuVar15 != (undefined8 ***)0x0);
}



/* Entry: 10776a640; end: 10776a913;  */

/* WARNING: Possible PIC construction at 0x00010776a738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010776a73c) */
/* WARNING: Removing unreachable block (ram,0x00010776a740) */

undefined8 ****** FUN_10776a640(long param_1)

{
  undefined1 uVar1;
  undefined8 ******ppppppuVar2;
  long *plVar3;
  undefined8 ******ppppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 extraout_x8;
  undefined4 *puVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ******ppppppuVar8;
  long lVar9;
  undefined8 *****pppppuVar10;
  long *plVar11;
  undefined8 ******ppppppuVar12;
  undefined8 *****pppppuStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 uStack_e8;
  undefined8 *****pppppuStack_e0;
  undefined8 ****appppuStack_d8 [2];
  undefined1 auStack_c8 [24];
  undefined8 ****appppuStack_b0 [2];
  undefined4 *puStack_a0;
  undefined8 uStack_70;
  
  func_0x00010776d99c();
  uStack_70 = extraout_x8;
  func_0x00010776dfb8();
  func_0x00010776dca4();
  func_0x0001074d2254(auStack_c8,appppuStack_b0);
  func_0x00010776dc94();
  func_0x00010776ddac(*(undefined8 *)(param_1 + 0x48));
  func_0x00010776dca4();
  func_0x00010776dbb0();
  func_0x00010776db9c();
  pppppuVar5 = *(undefined8 ******)(param_1 + 0x68);
  ppppppuVar2 = &pppppuStack_e0;
  func_0x00010776d0d4();
  ppppuStack_f0 = (undefined8 *****)0x0;
  uStack_e8 = 0;
  pppppuStack_f8 = &ppppuStack_f0;
  ppppppuVar8 = (undefined8 ******)pppppuStack_e0;
  do {
    if (ppppppuVar8 == (undefined8 ******)appppuStack_d8) {
      lVar9 = 8;
      while( true ) {
        uVar1 = (undefined8 *)(lVar9 + -8) == (undefined8 *)0x0;
        if ((bool)uVar1) break;
        func_0x00010776e00c();
        if ((bool)uVar1) {
          func_0x0001072d7f34(auStack_c8);
        }
        else {
          func_0x00010776ded4();
        }
        func_0x00010776ddac(*(undefined8 *)(lVar9 + -8));
        func_0x00010776dca4();
        func_0x00010776dbb0();
        func_0x00010776db9c();
        lVar9 = lVar9 + 0x18;
      }
      func_0x00010776ddac(*(undefined8 *)(param_1 + 0x80));
      func_0x00010776dca4();
      func_0x00010776dbb0();
      func_0x00010776db9c();
      func_0x00010776def8();
      func_0x00010776d9ac();
      func_0x00010776dd84();
      func_0x00010776dcac();
      ppppppuVar2 = &pppppuStack_e0;
      func_0x00010754718c();
      func_0x00010776dc9c();
      func_0x00010776d950(uStack_70);
      if ((bool)uVar1) {
        return ppppppuVar2;
      }
      ___stack_chk_fail();
      func_0x00010776db9c();
      func_0x00010776dd84();
      func_0x00010776dcac();
      ppppppuVar2 = &pppppuStack_e0;
      func_0x00010754718c();
      func_0x00010776dc9c();
      func_0x00010776da9c();
code_r0x00010776a914:
      pppppuVar5 = (undefined8 *****)*pppppuVar5;
      ppppppuVar7 = (undefined8 ******)ppppppuVar2[1];
      ppppppuVar8 = ppppppuVar2 + 1;
      do {
        ppppppuVar12 = ppppppuVar8;
        if (ppppppuVar7 == (undefined8 ******)0x0) {
code_r0x00010776a978:
          ppppppuVar4 = (undefined8 ******)0x30;
          __Znwm();
          ppppppuVar4[4] = pppppuVar5;
          ppppppuVar4[5] = (undefined8 *****)0x0;
          *ppppppuVar4 = (undefined8 *****)0x0;
          ppppppuVar4[1] = (undefined8 *****)0x0;
          ppppppuVar4[2] = ppppppuVar8;
          *ppppppuVar12 = ppppppuVar4;
          if ((undefined8 *****)**ppppppuVar2 != (undefined8 *****)0x0) {
            *ppppppuVar2 = (undefined8 *****)**ppppppuVar2;
          }
          func_0x00010002c5b0(ppppppuVar2[1],ppppppuVar4);
          ppppppuVar2[2] = (undefined8 *****)((long)ppppppuVar2[2] + 1);
code_r0x00010776a9c0:
          return ppppppuVar4 + 5;
        }
        while (ppppppuVar4 = ppppppuVar7, ppppppuVar8 = ppppppuVar4, ppppppuVar4[4] <= pppppuVar5) {
          if (pppppuVar5 <= ppppppuVar4[4]) goto code_r0x00010776a9c0;
          ppppppuVar7 = (undefined8 ******)ppppppuVar4[1];
          if ((undefined8 ******)ppppppuVar4[1] == (undefined8 ******)0x0) {
            ppppppuVar12 = ppppppuVar4 + 1;
            goto code_r0x00010776a978;
          }
        }
        ppppppuVar7 = (undefined8 ******)*ppppppuVar4;
      } while( true );
    }
    pppppuVar10 = ppppppuVar8[5];
    func_0x00010776dfac();
    if ((undefined8 ******)&ppppuStack_f0 == ppppppuVar2) {
      appppuStack_b0[0] = pppppuVar10;
      ppppppuVar2 = &pppppuStack_f8;
      pppppuVar5 = appppuStack_b0;
      goto code_r0x00010776a914;
    }
    pppppuVar10 = ppppppuVar2[5];
    ppppppuVar2 = (undefined8 ******)((long)pppppuVar10 * 0x18 + 8);
    func_0x000107289354();
    plVar11 = *(long **)((long)pppppuVar10 * 0x18 + 8);
    puVar6 = (undefined4 *)plVar11[1];
    if (puVar6 < (undefined4 *)plVar11[2]) {
      pppppuVar10 = ppppppuVar8[4];
      *puVar6 = 4;
      *(undefined8 ******)(puVar6 + 2) = pppppuVar10;
      puVar6 = puVar6 + 0x10;
    }
    else {
      plVar3 = plVar11;
      func_0x000107289660(plVar11,((long)puVar6 - *plVar11 >> 6) + 1);
      func_0x000107289720(appppuStack_b0,plVar3,plVar11[1] - *plVar11 >> 6,plVar11 + 2);
      pppppuVar5 = ppppppuVar8[4];
      *puStack_a0 = 4;
      *(undefined8 ******)(puStack_a0 + 2) = pppppuVar5;
      puStack_a0 = puStack_a0 + 0x10;
      pppppuVar5 = appppuStack_b0;
      func_0x0001072896a0(plVar11);
      puVar6 = (undefined4 *)plVar11[1];
      ppppppuVar2 = (undefined8 ******)appppuStack_b0;
      func_0x000107289820();
    }
    plVar11[1] = (long)puVar6;
    func_0x00010776df10();
    ppppppuVar8 = ppppppuVar2;
  } while( true );
}



/* Entry: 10776aff0; end: 10776b093;  */

void FUN_10776aff0(void)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lStack_58;
  long lStack_50;
  
  func_0x00010776dea4();
  while (unaff_x22 = (long *)*unaff_x22, unaff_x22 != (long *)0x0) {
    func_0x00010776e048(unaff_x22[9]);
    func_0x00010776dd30();
    for (lVar1 = lStack_58; lVar1 != lStack_50; lVar1 = lVar1 + 0x78) {
      func_0x00010776dfa0();
    }
    func_0x00010776dbc8();
  }
  func_0x00010776e048(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x00010776dd30();
  for (; lStack_58 != lStack_50; lStack_58 = lStack_58 + 0x78) {
    func_0x00010776df94();
  }
  func_0x00010776dbc8();
  return;
}



/* Entry: 10776caec; end: 10776caf7;  */

long * FUN_10776caec(long *param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010776db90();
  lVar2 = *param_1;
  if (lVar2 != 0) {
    for (lVar1 = param_1[1]; lVar1 != lVar2; lVar1 = lVar1 + -0x18) {
      func_0x000104c33108(lVar1 + -0x10);
    }
    func_0x00010776db84();
  }
  return param_1;
}



/* Entry: 10776cc94; end: 10776cceb;  */

long * FUN_10776cc94(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x20;
  long lVar1;
  
  func_0x00010776dc08();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    if (0x666666666666666 < unaff_x20) {
      func_0x000104bd35f4();
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
    func_0x00010776df18(unaff_x20 * 5);
  }
  func_0x00010776de74(0x28);
  return param_1;
}



/* Entry: 10776d018; end: 10776d023;  */

void FUN_10776d018(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined8 *)*param_1 = *param_2;
  return;
}



/* Entry: 10776d32c; end: 10776d35f;  */

undefined8 FUN_10776d32c(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x000107268464(auStack_30);
  func_0x00010776d9ac();
  return param_1;
}



/* Entry: 10776d44c; end: 10776d46f;  */

void FUN_10776d44c(void)

{
  func_0x00010776da54();
  func_0x00010776d9d4(&PTR_DAT_1109d5ee0);
  return;
}



/* Entry: 10776d54c; end: 10776d65b;  */

void FUN_10776d54c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar5;
  long lStack_60;
  
  func_0x00010776dc08();
  func_0x00010776e020();
  do {
    if (param_2 == 0) {
      return;
    }
    plVar1 = unaff_x21;
    if (unaff_x21 == (long *)*unaff_x19) {
LAB_10776d5a0:
      if (*unaff_x21 != 0) {
        plVar1 = plVar1 + 1;
        goto LAB_10776d5c8;
      }
LAB_10776d5dc:
      lVar3 = 0x68;
      __Znwm();
      lStack_60 = lVar3;
      func_0x000104c2fe00(lVar3 + 0x20,unaff_x20 + 2);
      lVar4 = unaff_x20[10];
      uVar5 = unaff_x20[9];
      *(long *)(lVar3 + 0x60) = unaff_x20[10];
      *(undefined8 *)(lVar3 + 0x58) = uVar5;
      if (lVar4 != 0) {
        do {
          func_0x00010776da3c();
        } while (extraout_w10 != 0);
      }
      func_0x0001075472fc();
      lStack_60 = 0;
      func_0x000107547324(&lStack_60);
    }
    else {
      func_0x00010002c810();
      plVar2 = plVar1 + 4;
      func_0x000104c2fc44(plVar2,unaff_x20 + 2);
      if ((int)plVar2 != 0) goto LAB_10776d5a0;
      plVar1 = unaff_x19;
      func_0x000107547284();
LAB_10776d5c8:
      if (*plVar1 == 0) goto LAB_10776d5dc;
    }
    unaff_x20 = (long *)*unaff_x20;
    param_2 = (long)unaff_x20;
  } while( true );
}



/* Entry: 10776d748; end: 10776d76f;  */

void FUN_10776d748(undefined8 param_1)

{
  func_0x00010776dcbc();
  func_0x00010776dc00(param_1,&PTR_DAT_1109d60c0);
  func_0x00010776da2c();
  return;
}



/* Entry: 10776d950; end: 10776e07b;  */

void FUN_10776d950(void)

{
  return;
}



/* Entry: 10776f094; end: 10776f2bb;  */

void FUN_10776f094(undefined4 *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x00010776f478();
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_28 = extraout_x8;
  func_0x000100060964(auStack_68,&UNK_10f426b4a);
  func_0x0001074d2254(&uStack_b8,auStack_68);
  func_0x000104c2f714(auStack_68);
  func_0x00010776f4f4(*(undefined8 *)(param_2 + 0x48));
  func_0x00010776f4ac();
  func_0x0001072aad1c(&uStack_b8,auStack_68);
  func_0x00010776f490();
  puStack_d8 = &UNK_10e52b660;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  if (*(long *)(param_2 + 0x58) != 0) {
    func_0x00010776f4f4();
    func_0x00010776f4ac();
    func_0x00010776f4c4();
    func_0x00010776f460();
    func_0x00010776f4cc();
    func_0x00010776f4a4();
    func_0x00010776f490();
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    func_0x00010776f4f4();
    func_0x00010776f4ac();
    func_0x00010776f4c4();
    func_0x00010776f460();
    func_0x00010776f4cc();
    func_0x00010776f4a4();
    func_0x00010776f490();
  }
  if (*(long *)(param_2 + 0x78) != 0) {
    func_0x00010776f4f4();
    func_0x00010776f4ac();
    func_0x00010776f4c4();
    func_0x00010776f460();
    func_0x00010776f4cc();
    func_0x00010776f4a4();
    func_0x00010776f490();
  }
  if (*(long *)(param_2 + 0x88) != 0) {
    func_0x00010776f4f4();
    func_0x00010776f4ac();
    func_0x00010776f4c4();
    func_0x00010776f460();
    func_0x00010776f4cc();
    func_0x00010776f4a4();
    func_0x00010776f490();
  }
  func_0x000104c33260(auStack_68,&puStack_d8);
  func_0x0001075726d4(&uStack_b8,auStack_68);
  func_0x000104c335c0(auStack_68);
  func_0x000107327958(&uStack_f0,&uStack_b8);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_e8;
  *(undefined8 *)(param_1 + 2) = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  func_0x000104c33108(&uStack_f0);
  func_0x000104c33548(&puStack_d8);
  func_0x000107269124(&uStack_b8);
  func_0x00010776f430(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010776f4a4();
  func_0x00010776f490();
  func_0x000104c33548(&puStack_d8);
  do {
    func_0x000107269124(&uStack_b8);
    func_0x00010776f4d4();
    func_0x00010776f490();
  } while( true );
}



/* Entry: 10776f3d8; end: 10776f3ef;  */

void FUN_10776f3d8(long param_1)

{
  if (param_1 != 0) {
    func_0x00010776e07c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10776fd14; end: 10776fd4b;  */

void FUN_10776fd14(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_1109d6358;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10776fed4; end: 10776fef7;  */

void FUN_10776fed4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109d6258;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107770060; end: 10777016b;  */

undefined ** FUN_107770060(void)

{
  return &PTR_DAT_1109d6338;
}



/* Entry: 107770fc8; end: 107771013;  */

void FUN_107770fc8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x000107771014(&PTR_DAT_1109d63c8,&uStack_20);
  if ((uVar1 & 1) == 0) {
    func_0x0001000633dc(uStack_20,uStack_18,&UNK_10f426f08,5);
  }
  return;
}



/* Entry: 107771690; end: 107771707;  */

undefined8 *
FUN_107771690(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 param_6)

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
  func_0x000107771650(param_1 + 3,param_4);
  uVar1 = *param_5;
  param_1[7] = param_5[1];
  param_1[6] = uVar1;
  *param_5 = 0;
  param_5[1] = 0;
  uVar1 = *param_3;
  param_1[9] = param_3[1];
  param_1[8] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined1 *)(param_1 + 10) = param_6;
  *(undefined1 *)((long)param_1 + 0x51) = 1;
  return param_1;
}



/* Entry: 107771930; end: 10777193b;  */

undefined ** FUN_107771930(void)

{
  return &PTR_DAT_1109d6858;
}



/* Entry: 107771aac; end: 107771ab7;  */

void FUN_107771aac(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x0001072cea78();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 107772148; end: 107772813;  */

void FUN_107772148(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double *pdVar8;
  undefined8 extraout_x8;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  code *extraout_x9_02;
  long *plVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_228 [4];
  undefined1 uStack_224;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  byte bStack_1b0;
  undefined1 auStack_1a8 [16];
  byte bStack_198;
  double *pdStack_190;
  double dStack_188;
  long lStack_180;
  undefined1 auStack_178 [8];
  undefined4 uStack_170;
  undefined1 uStack_168;
  double dStack_160;
  ulong uStack_158;
  byte bStack_150;
  double adStack_140 [3];
  undefined1 auStack_128 [24];
  double dStack_110;
  ulong uStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double *pdStack_e8;
  double dStack_e0;
  long lStack_d8;
  char cStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 *puStack_90;
  undefined8 uStack_88;
  
  func_0x000107772bc8();
  plVar9 = param_2 + 1;
  plVar5 = plVar9;
  uStack_88 = extraout_x8;
  (**(code **)(*param_2 + 0x20))();
  uVar6 = (long)plVar5 - 1;
  uVar3 = uVar6 == 3;
  if (uVar6 < 4) {
    func_0x000107878fec(&uStack_a0);
    func_0x0001004c3cd0(&pdStack_e8,&UNK_10f426f26,&uStack_a0);
    func_0x00010048a6c8(auStack_128,&pdStack_e8,&DAT_10f62a9de);
    func_0x00010756a668(param_3,auStack_128);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pdStack_e8);
    pdVar8 = (double *)&uStack_a0;
  }
  else {
    if ((uVar6 & 1) == 0) {
      func_0x000107772c40();
      (*extraout_x9)(&pdStack_e8,plVar9,1);
      uStack_170 = 1;
      uStack_168 = 1;
      uStack_a0._0_4_ = (uint)uStack_a0 & 0xffffff00;
      uStack_a0._4_4_ = uStack_a0._4_4_ & 0xffffff00;
      func_0x00010777067c(&dStack_160,param_3,&pdStack_e8,1,param_4,auStack_178,&uStack_a0);
      func_0x0001072c9854(auStack_178);
      func_0x000107772bd8();
      if ((bStack_150 & 1) == 0) {
        *(undefined1 *)param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
      }
      else {
        dStack_188 = 0.0;
        lStack_180 = 0;
        auStack_1a8[0] = 0;
        bStack_198 = 0;
        pdStack_190 = &dStack_188;
        func_0x000107772c18();
        uVar3 = (char)lStack_d8 == '\x01';
        if ((bool)uVar3) {
          iVar4 = (int)&uStack_a0;
          func_0x000107772c18();
          uStack_1b8 = 6;
          func_0x0001074d1ed0();
          func_0x0001072c9884(&uStack_1c0);
          func_0x0001072c9854(&uStack_a0);
          func_0x0001072c9854(&pdStack_e8);
          if (iVar4 != 0) {
            func_0x000107772c18();
            func_0x00010756bb10(auStack_1a8,&pdStack_e8);
            goto LAB_1077722d0;
          }
        }
        else {
LAB_1077722d0:
          func_0x0001072c9854();
        }
        func_0x000107772c40();
        (*extraout_x9_00)(&pdStack_e8,plVar9,2);
        func_0x00010756f360(auStack_1d8,auStack_1a8);
        uStack_a0._0_4_ = (uint)uStack_a0 & 0xffffff00;
        uStack_a0._4_4_ = uStack_a0._4_4_ & 0xffffff00;
        func_0x00010777067c(&uStack_1c0,param_3,&pdStack_e8,2,param_4,auStack_1d8,&uStack_a0);
        func_0x0001072c9854(auStack_1d8);
        func_0x000107772bd8();
        if ((bStack_1b0 & 1) == 0) {
          *(undefined1 *)param_1 = 0;
          *(undefined1 *)(param_1 + 2) = 0;
        }
        else {
          if ((bStack_198 & 1) == 0) {
            func_0x000107772c04(uStack_1c0);
          }
          pdStack_e8 = (double *)0xfff0000000000000;
          func_0x0001075454ac(&pdStack_190,&pdStack_e8,&uStack_1c0);
          uVar11 = (undefined1)*param_1;
          lVar10 = 3;
          uVar12 = (undefined1)param_1[2];
          dVar13 = -INFINITY;
          do {
            plVar1 = (long *)(lVar10 + 1);
            uVar3 = plVar1 == plVar5;
            if (plVar5 <= plVar1) {
              *(undefined1 *)(param_1 + 2) = uVar12;
              *(undefined1 *)param_1 = uVar11;
              func_0x000107545e30(&uStack_a0,1);
              puStack_90[2] = 0;
              *puStack_90 = &PTR_DAT_1109ba880;
              puStack_90[1] = 0;
              uStack_108 = uStack_158;
              dStack_110 = dStack_160;
              dStack_160 = 0.0;
              uStack_158 = 0;
              pdStack_e8 = pdStack_190;
              dStack_e0 = dStack_188;
              lStack_d8 = lStack_180;
              pdVar8 = &dStack_e0;
              if (lStack_180 != 0) {
                *(double **)((long)dStack_188 + 0x10) = &dStack_e0;
                dStack_188 = 0.0;
                lStack_180 = 0;
                pdStack_190 = &dStack_188;
                pdVar8 = pdStack_e8;
              }
              pdStack_e8 = pdVar8;
              func_0x000107771c6c(puStack_90 + 3,auStack_1a8,&dStack_110,&pdStack_e8);
              func_0x000107545fd8(&pdStack_e8);
              func_0x0001072c9b9c(&dStack_110);
              puVar2 = puStack_90;
              puStack_90 = (undefined8 *)0x0;
              func_0x000107545f68(&uStack_a0);
              *param_1 = (long)(puVar2 + 3);
              param_1[1] = (long)puVar2;
              uStack_f8 = 0;
              uStack_f0 = 0;
              *(undefined1 *)(param_1 + 2) = 1;
              func_0x000107545f78(&uStack_f8);
              goto LAB_10777263c;
            }
            func_0x000107772c40();
            (*extraout_x9_01)(&uStack_a0,plVar9,lVar10);
            (**(code **)(CONCAT44(uStack_a0._4_4_,(uint)uStack_a0) + 0x70))(&pdStack_e8,auStack_98);
            func_0x0001072f5f6c(&uStack_a0);
            dStack_110 = (double)((ulong)dStack_110 & 0xffffffffffffff00);
            uVar6 = uStack_108 >> 8;
            uStack_108 = uStack_108 & 0xffffffffffffff00;
            uVar3 = cStack_a8 == '\x01';
            if ((bool)uVar3) {
              if ((int)pdStack_e8 == 3) {
                dVar14 = INFINITY;
                if (dStack_e0 <= 1.79769313486232e+308) {
                  dVar14 = dStack_e0;
                }
              }
              else if ((int)pdStack_e8 == 4) {
                dVar14 = (double)(long)dStack_e0;
              }
              else {
                uVar3 = (int)pdStack_e8 == 5;
                if (!(bool)uVar3) goto LAB_1077723ec;
                dVar14 = (double)NEON_ucvtf(dStack_e0);
              }
              uStack_108 = CONCAT71((int7)uVar6,1);
              uVar3 = dVar14 == dVar13;
              dStack_110 = dVar14;
              if (dVar14 <= dVar13) {
                func_0x00010002b838(auStack_208,&UNK_10f427011);
                func_0x000107772c28();
                puVar7 = auStack_208;
                goto LAB_1077724e8;
              }
              func_0x000107772c40();
              (*extraout_x9_02)(&uStack_f8,plVar9,plVar1);
              func_0x00010756f360(auStack_220,auStack_1a8);
              auStack_228[0] = 0;
              uStack_224 = 0;
              func_0x00010777067c(&uStack_a0,param_3,&uStack_f8,plVar1,param_4,auStack_220,
                                  auStack_228);
              func_0x0001072c9854(auStack_220);
              func_0x0001072f5f6c(&uStack_f8);
              uVar6 = (ulong)puStack_90 & 0xff;
              if (((ulong)puStack_90 & 1) == 0) {
                uVar12 = 0;
                uVar11 = 0;
              }
              else {
                if ((bStack_198 & 1) == 0) {
                  func_0x000107772c04(CONCAT44(uStack_a0._4_4_,(uint)uStack_a0));
                }
                func_0x000107548da0(&pdStack_190,&dStack_110,&uStack_a0);
              }
              func_0x0001072c95d0(&uStack_a0);
              dVar13 = dVar14;
            }
            else {
LAB_1077723ec:
              func_0x00010002b838(auStack_1f0,&UNK_10f426f89);
              func_0x000107772c28();
              puVar7 = auStack_1f0;
LAB_1077724e8:
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
              uVar12 = 0;
              uVar11 = 0;
              uVar6 = 0;
            }
            func_0x000107267ed0(&pdStack_e8);
            lVar10 = lVar10 + 2;
          } while ((uVar6 & 1) != 0);
          *(undefined1 *)(param_1 + 2) = uVar12;
          *(undefined1 *)param_1 = uVar11;
        }
LAB_10777263c:
        func_0x0001072c95d0(&uStack_1c0);
        func_0x0001072c9854(auStack_1a8);
        func_0x000107545fd8(&pdStack_190);
      }
      pdVar8 = &dStack_160;
      func_0x0001072c95d0(pdVar8);
      goto LAB_10777265c;
    }
    func_0x00010002b838(adStack_140,&UNK_10f426f5c);
    func_0x00010756a668(param_3,adStack_140);
    pdVar8 = adStack_140;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pdVar8);
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
LAB_10777265c:
  func_0x000107772b94(uStack_88);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072c95d0(&uStack_1c0);
  func_0x0001072c9854(auStack_1a8);
  func_0x000107545fd8(&pdStack_190);
  func_0x0001072c95d0(&dStack_160);
  do {
    __Unwind_Resume(pdVar8);
  } while( true );
}



/* Entry: 107772b54; end: 107772b93;  */

undefined8 * FUN_107772b54(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d68c8;
  func_0x000107545fd8(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107773b58; end: 107773c6f;  */

long * FUN_107773b58(undefined4 *param_1,long param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plStack_f8;
  long alStack_f0 [7];
  undefined8 uStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_80 [3];
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x0001077740c4();
  alStack_80[0] = 0;
  alStack_80[1] = 0;
  alStack_80[2] = 0;
  uStack_28 = extraout_x8;
  func_0x000107774188();
  func_0x0001074d2254(alStack_80,auStack_68);
  func_0x000104c2f714(auStack_68);
  func_0x000107774188();
  func_0x00010777417c();
  func_0x000107774150();
  func_0x0001077560f4(alStack_80,param_2 + 0x58);
  func_0x0001077560f4(alStack_80,param_2 + 0x90);
  func_0x000107774188();
  func_0x00010777417c();
  func_0x000107774150();
  func_0x000107327958(&uStack_90,alStack_80);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_88;
  *(undefined8 *)(param_1 + 2) = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x000104c33108(&uStack_90);
  plVar1 = alStack_80;
  func_0x000107269124();
  func_0x0001077740b0(uStack_28);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x000107774150();
  plVar2 = alStack_80;
  func_0x000107269124();
  func_0x0001077740e0();
  puStack_98 = &DAT_107773c70;
  plVar3 = plVar2;
  lStack_b0 = param_2;
  plStack_a8 = plVar1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x0001077740c4();
  uStack_b8 = extraout_x8_00;
  (**(code **)(*plVar3 + 0x40))(alStack_f0);
  plStack_f8 = (long *)0x0;
  func_0x0001073f26dc(&plStack_f8,alStack_f0);
  func_0x00010756af98(&plStack_f8,plVar2 + 9);
  func_0x0001073f26dc(&plStack_f8,plVar2 + 0xb);
  func_0x0001073f26dc(&plStack_f8,plVar2 + 0x12);
  func_0x00010756af98(&plStack_f8,plVar2 + 0x19);
  plVar2 = plStack_f8;
  plVar1 = alStack_f0;
  func_0x000104c2f714();
  func_0x0001077740b0(uStack_b8);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *plVar1 = (long)&PTR_DAT_1109d6950;
  func_0x0001072c9b9c(plVar1 + 0x19);
  func_0x000104c2f714(plVar1 + 0x12);
  func_0x000104c2f714(plVar1 + 0xb);
  func_0x0001072c9b9c(plVar1 + 9);
  *plVar1 = (long)&PTR_DAT_1109d4888;
  func_0x0001001148fc(plVar1 + 5);
  func_0x0001072c9884(plVar1 + 2);
  return plVar1;
}



/* Entry: 107773e14; end: 107773e4f;  */

void FUN_107773e14(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_1109d69d8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 10777406c; end: 10777407b;  */

undefined ** FUN_10777406c(void)

{
  return &PTR_DAT_1109d6ab8;
}



/* Entry: 10777496c; end: 107774977;  */

void FUN_10777496c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = *param_2;
  uStack_18 = param_2[1];
  func_0x000100062cf8(&uStack_20);
  return;
}



/* Entry: 10777509c; end: 1077750d3;  */

void FUN_10777509c(void)

{
  func_0x00010777d428();
  func_0x0001077750b8();
  return;
}



/* Entry: 1077752bc; end: 1077752fb;  */

void FUN_1077752bc(void)

{
  func_0x00010777d738();
  func_0x0001077752dc();
  return;
}



/* Entry: 107775500; end: 107775553;  */

void FUN_107775500(void)

{
  func_0x00010777d3b8(3);
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 107775864; end: 1077758b7;  */

void FUN_107775864(void)

{
  undefined1 auStack_50 [48];
  
  func_0x00010777d5b8();
  func_0x00010777da50();
  func_0x00010777da64();
  func_0x00010777d71c();
  func_0x00010777daac();
  func_0x00010777d8b4(auStack_50);
  func_0x00010777d70c();
  func_0x00010777da64();
  func_0x00010777d6f8();
  func_0x00010777da5c();
  return;
}



/* Entry: 107775ea8; end: 107775ee3;  */

void FUN_107775ea8(void)

{
  func_0x00010777d520();
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 107776804; end: 107776f6b;  */

undefined **
FUN_107776804(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  long **pplVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined4 *extraout_x8_02;
  long extraout_x8_03;
  undefined4 *unaff_x19;
  long lVar16;
  undefined ***pppuVar17;
  long lVar18;
  long *plVar19;
  undefined **unaff_x30;
  undefined1 auStack_5a1 [9];
  undefined *puStack_598;
  undefined *apuStack_588 [7];
  undefined1 auStack_550 [56];
  long lStack_518;
  undefined1 auStack_510 [88];
  undefined1 auStack_4b8 [56];
  byte bStack_480;
  undefined *puStack_478;
  undefined1 auStack_470 [8];
  undefined8 uStack_468;
  undefined1 **ppuStack_430;
  code *pcStack_428;
  undefined *puStack_420;
  undefined8 uStack_418;
  undefined1 auStack_408 [29];
  undefined1 uStack_3eb;
  undefined1 uStack_3ea;
  undefined1 uStack_3e9;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined1 **ppuStack_3d0;
  undefined *apuStack_3c8 [2];
  undefined1 auStack_3b8 [8];
  undefined ***pppuStack_3b0;
  undefined1 auStack_3a8 [8];
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *apuStack_388 [3];
  undefined1 auStack_370 [40];
  undefined4 uStack_348;
  undefined8 uStack_340;
  undefined1 auStack_338 [48];
  undefined4 uStack_308;
  undefined *apuStack_300 [7];
  undefined4 uStack_2c8;
  undefined8 auStack_2c0 [7];
  undefined4 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_248;
  undefined1 *puStack_200;
  undefined *puStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  long lStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  long *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [24];
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_128 [56];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 auStack_b0 [40];
  undefined4 uStack_88;
  undefined8 uStack_70;
  
  func_0x00010777d250();
  iVar3 = *(int *)(param_5 + 0x68);
  uStack_70 = extraout_x8_01;
  if (iVar3 == 0) {
LAB_107776900:
    *unaff_x19 = 7;
  }
  else {
    in_ZR = iVar3 + -1 == 3;
    switch(iVar3 + -1) {
    case 0:
      uVar5 = *(undefined1 *)(param_5 + 8);
      *unaff_x19 = 6;
      *(undefined1 *)(unaff_x19 + 2) = uVar5;
      break;
    case 1:
      uVar15 = *(undefined8 *)(param_5 + 8);
      *unaff_x19 = 3;
      *(undefined8 *)(unaff_x19 + 2) = uVar15;
      break;
    case 2:
      func_0x000104c2fe00(&uStack_f0,param_5 + 8);
      func_0x000104c33004();
      func_0x000104c2f714();
      break;
    case 3:
      func_0x00010777d23c(extraout_x8_01);
      if ((bool)in_ZR) {
        func_0x00010777de70(param_5 + 8);
        uStack_248 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        func_0x00010785e024();
        func_0x00010002b838(auStack_3b8,&UNK_10f42b453);
        func_0x000107268798(apuStack_388,auStack_3b8);
        uStack_348 = 3;
        uStack_308 = 3;
        uStack_2c8 = 3;
        uStack_288 = 3;
        ppuVar9 = apuStack_388;
        uStack_340 = param_1;
        apuStack_300[0] = param_2;
        auStack_2c0[0] = param_3;
        uStack_280 = param_4;
        func_0x000107268bc4(&uStack_3a0,ppuVar9,5);
        *extraout_x8_02 = 0;
        *(undefined8 *)(extraout_x8_02 + 4) = uStack_398;
        *(undefined8 *)(extraout_x8_02 + 2) = uStack_3a0;
        uStack_3a0 = 0;
        uStack_398 = 0;
        func_0x000104c33108(&uStack_3a0);
        lVar16 = 0x100;
        do {
          ppuVar6 = (undefined **)((long)apuStack_388 + lVar16);
          func_0x000104c3323c();
          lVar16 = lVar16 + -0x40;
          uVar5 = lVar16 == -0x40;
        } while (!(bool)uVar5);
        func_0x00010785e438();
        func_0x00010785e450(uStack_248);
        if ((bool)uVar5) {
          return ppuVar6;
        }
        ___stack_chk_fail();
        lVar16 = 0x100;
        do {
          func_0x000104c3323c((long)apuStack_388 + lVar16);
          lVar16 = lVar16 + -0x40;
        } while (lVar16 != -0x40);
        func_0x00010785e438();
        __Unwind_Resume(ppuVar6);
        apuStack_3c8[0] = &UNK_10785e3b0;
        ppuStack_3e8 = (undefined **)0x0;
        ppuStack_3e0 = apuStack_388;
        ppuStack_3d8 = ppuVar6;
        ppuStack_3d0 = &puStack_200;
        func_0x0001073ca0ec(&ppuStack_3e8,(long)ppuVar9 + 0xc);
        func_0x0001073ca0ec(&ppuStack_3e8,ppuVar9);
        func_0x0001073ca0ec(&ppuStack_3e8,(long)ppuVar9 + 4);
        func_0x0001073ca0ec(&ppuStack_3e8,ppuVar9 + 1);
        return ppuStack_3e8;
      }
      goto LAB_107776e28;
    default:
      in_ZR = iVar3 + -5 == 3;
      switch(iVar3 + -5) {
      case 0:
        goto LAB_107776900;
      case 1:
        lStack_180 = 0;
        lStack_178 = 0;
        uStack_170 = 0;
        plVar19 = &lStack_180;
        func_0x000107289660(plVar19,1);
        func_0x000107289720(&uStack_f0,plVar19,lStack_178 - lStack_180 >> 6,&uStack_170);
        func_0x000107777c14(lStack_e0);
        lStack_e0 = lStack_e0 + 0x40;
        func_0x0001072896a0(&lStack_180,&uStack_f0);
        lVar18 = lStack_178;
        func_0x00010777db68();
        lVar1 = *(long *)(param_5 + 0x10);
        lStack_178 = lVar18;
        for (lVar16 = *(long *)(param_5 + 8); in_ZR = lVar16 == lVar1, !(bool)in_ZR;
            lVar16 = lVar16 + 0x120) {
          if (*(char *)(lVar16 + 0x98) == '\x01') {
            func_0x00010002b838(auStack_198,&UNK_10f4271a1);
            func_0x000107268798(&uStack_f0,auStack_198);
            func_0x000104c2fe00(auStack_128,lVar16 + 0x38);
            func_0x000104c33004(auStack_b0,auStack_128);
            func_0x000107268bc4(&puStack_168,&uStack_f0,2);
            func_0x000107765870(&lStack_180,&puStack_168);
            func_0x000104c33108(&puStack_168);
            lVar18 = 0x40;
            do {
              func_0x000104c3323c((long)&uStack_f0 + lVar18);
              lVar18 = lVar18 + -0x40;
            } while (lVar18 != -0x40);
            func_0x000104c2f714(auStack_128);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
          }
          else {
            func_0x0001077560f4(&lStack_180,lVar16);
            plStack_1b8 = (long *)&UNK_10e52b660;
            uStack_1a8 = 0;
            uStack_1a0 = 0;
            uStack_1b0 = 0;
            if (*(char *)(lVar16 + 0xa8) == '\x01') {
              pplVar10 = &plStack_1b8;
              puVar13 = &UNK_10f4271a7;
              FUN_107777c54();
              if (((ulong)puVar13 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                plVar19 = *(long **)(lVar16 + 0xa0);
                *(undefined4 *)(pplVar10 + 7) = 3;
                pplVar10[8] = plVar19;
              }
            }
            if (*(char *)(lVar16 + 0xc0) == '\x01') {
              puStack_168 = (undefined *)0x0;
              uStack_160 = 0;
              uStack_158 = 0;
              lVar2 = (*(long **)(lVar16 + 0xb0))[1];
              for (lVar18 = **(long **)(lVar16 + 0xb0); lVar18 != lVar2; lVar18 = lVar18 + 0x38) {
                func_0x0001077560f4(&puStack_168,lVar18);
              }
              lStack_1d0 = 0;
              uStack_1c8 = 0;
              uStack_1c0 = 0;
              func_0x00010002b838(&plStack_1f0,&DAT_10f3dd68b);
              if (uStack_1c8 < uStack_1c0) {
                func_0x000107777cd8(uStack_1c8,&plStack_1f0);
                uVar14 = uStack_1c8 + 0x40;
              }
              else {
                plVar19 = &lStack_1d0;
                func_0x000107289660(plVar19,((long)(uStack_1c8 - lStack_1d0) >> 6) + 1);
                func_0x000107289720(&uStack_f0,plVar19,(long)(uStack_1c8 - lStack_1d0) >> 6,
                                    &uStack_1c0);
                func_0x000107777cd8(lStack_e0,&plStack_1f0);
                lStack_e0 = lStack_e0 + 0x40;
                func_0x0001072896a0(&lStack_1d0,&uStack_f0);
                uVar14 = uStack_1c8;
                func_0x00010777db68();
              }
              uStack_1c8 = uVar14;
              func_0x00010777dab8();
              func_0x00010777dd48();
              func_0x000107765870(&lStack_1d0,&uStack_f0);
              func_0x000104c33108(&uStack_f0);
              func_0x000107327958(&plStack_1f0,&lStack_1d0);
              pplVar10 = &plStack_1b8;
              uVar14 = 0;
              func_0x00010775e124();
              if ((uVar14 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                plVar4 = plStack_1e8;
                plVar19 = plStack_1f0;
                plStack_1f0 = (long *)0x0;
                plStack_1e8 = (long *)0x0;
                *(undefined4 *)(pplVar10 + 7) = 0;
                pplVar10[9] = plVar4;
                pplVar10[8] = plVar19;
                uStack_f0 = 0;
                uStack_e8 = 0;
                func_0x000104c33108(&uStack_f0);
              }
              func_0x000104c33108(&plStack_1f0);
              func_0x000107269124(&lStack_1d0);
              func_0x000107269124(&puStack_168);
            }
            if (*(char *)(lVar16 + 0xd8) == '\x01') {
              lStack_e0 = *(long *)(lVar16 + 0xd0);
              uStack_e8 = *(undefined8 *)(lVar16 + 200);
              uStack_88 = 4;
              func_0x00010777daf4(&puStack_168,&uStack_f0);
              puVar13 = &DAT_10f415bdb;
              FUN_107777c54(&plStack_1b8);
              if (((ulong)puVar13 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                func_0x00010777ddb8();
              }
              func_0x00010777dd1c();
              func_0x00010777ddb0();
            }
            if (*(char *)(lVar16 + 0x108) == '\x01') {
              lStack_e0 = *(long *)(lVar16 + 0x100);
              uStack_e8 = *(undefined8 *)(lVar16 + 0xf8);
              uStack_88 = 4;
              func_0x00010777daf4(&puStack_168,&uStack_f0);
              uVar14 = 0;
              func_0x000107777d1c(&plStack_1b8);
              if ((uVar14 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                func_0x00010777ddb8();
              }
              func_0x00010777dd1c();
              func_0x00010777ddb0();
            }
            if (*(char *)(lVar16 + 0x118) == '\x01') {
              pplVar10 = &plStack_1b8;
              uVar14 = 0;
              func_0x000107777d1c();
              if ((uVar14 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                plVar19 = *(long **)(lVar16 + 0x110);
                *(undefined4 *)(pplVar10 + 7) = 3;
                pplVar10[8] = plVar19;
              }
            }
            func_0x000104c33260(&uStack_f0,&plStack_1b8);
            func_0x0001075726d4(&lStack_180,&uStack_f0);
            func_0x000104c335c0(&uStack_f0);
            func_0x000104c33548(&plStack_1b8);
          }
        }
        func_0x000107327958(&uStack_f0,&lStack_180);
        func_0x00010777db2c();
        break;
      case 2:
        func_0x00010777d23c(extraout_x8_01);
        if ((bool)in_ZR) {
          param_5 = param_5 + 8;
          func_0x00010777de70();
          ppuVar6 = &puStack_420;
          func_0x00010775f634();
          uStack_248 = extraout_x8;
          func_0x000100060964(auStack_370,&DAT_10f68f148);
          func_0x00010735d778(auStack_338,auStack_370,param_5);
          func_0x000100060964(auStack_3a8,&DAT_10f3682ba);
          func_0x000104c318bc(auStack_2c0,auStack_3a8);
          uStack_288 = 6;
          uStack_280 = CONCAT71(uStack_280._1_7_,*(undefined1 *)(param_5 + 0x38));
          ppuVar9 = (undefined **)&uStack_3e9;
          func_0x000107268194(&ppuStack_3e8,2,ppuVar9,&uStack_3ea,&uStack_3eb);
          for (lVar16 = 0; lVar16 != 0xf0; lVar16 = lVar16 + 0x78) {
            ppuVar9 = (undefined **)((long)apuStack_300 + lVar16);
            pppuStack_3b0 = &ppuStack_3e8;
            func_0x000107268220(apuStack_3c8,&pppuStack_3b0);
          }
          lVar16 = 0x78;
          do {
            func_0x000104c32ad0(auStack_338 + lVar16);
            lVar16 = lVar16 + -0x78;
          } while (lVar16 != -0x78);
          func_0x000104c2f714(auStack_3a8);
          func_0x00010775f604();
          uVar5 = *(char *)(param_5 + 0x58) == '\x01';
          if ((bool)uVar5) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_408,param_5 + 0x40);
            func_0x000107268798(auStack_338,auStack_408);
            func_0x000100060964(auStack_370,&UNK_10f63898c);
            func_0x000107267f10(&ppuStack_3e8,auStack_370);
            func_0x000104c3302c();
            func_0x00010775f604();
            func_0x000104c3323c(auStack_338);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_408);
          }
          pppuVar11 = &ppuStack_3e8;
          func_0x000104c33260(&puStack_420);
          *unaff_x19 = 1;
          *(undefined8 *)(unaff_x19 + 4) = uStack_418;
          *(undefined **)(unaff_x19 + 2) = puStack_420;
          puStack_420 = (undefined *)0x0;
          uStack_418 = 0;
          func_0x000104c335c0();
          func_0x00010775f60c();
          func_0x00010775f5b0(uStack_248);
          if ((bool)uVar5) {
            return ppuVar6;
          }
          ___stack_chk_fail();
          func_0x00010775f604();
          func_0x000104c3323c(auStack_338);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_408);
          func_0x00010775f60c();
          func_0x00010775f5dc();
          pcStack_428 = FUN_10775f38c;
          pppuVar12 = pppuVar11;
          ppuStack_430 = &puStack_200;
          func_0x00010775f634();
          pppuVar17 = pppuVar12 + 1;
          pppuVar7 = pppuVar17;
          uStack_468 = extraout_x8_00;
          (*(code *)(*pppuVar12)[3])();
          if ((int)pppuVar7 == 0) {
            (*(code *)(*pppuVar11)[0xd])(auStack_4b8,pppuVar17);
            uVar5 = bStack_480 == 1;
            if ((bool)uVar5) {
              func_0x000104c2fe00(apuStack_588,auStack_4b8);
              func_0x00010775f62c(&lStack_518,apuStack_588);
              func_0x00010775f614();
              func_0x00010726b164(&lStack_518);
              ppuVar9 = apuStack_588;
              func_0x000104c2f714(ppuVar9);
            }
            else {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                        (ppuVar9,&UNK_10f4260a7);
              *(undefined1 *)ppuVar6 = 0;
              *(undefined1 *)(ppuVar6 + 0xc) = 0;
            }
            func_0x00010775f5f4();
          }
          else {
            (*(code *)(*pppuVar11)[5])(&puStack_478,pppuVar17,0);
            puVar8 = auStack_470;
            (**(code **)(puStack_478 + 0x20))();
            if (puVar8 == (undefined1 *)0x0) {
              func_0x00010775f5e4();
              *(undefined1 *)ppuVar6 = 0;
              *(undefined1 *)(ppuVar6 + 0xc) = 0;
            }
            else {
              (**(code **)(puStack_478 + 0x28))(&lStack_518,auStack_470,0);
              (**(code **)(lStack_518 + 0x68))(auStack_4b8,auStack_510);
              func_0x0001072f5f6c(&lStack_518);
              if ((bStack_480 & 1) == 0) {
                func_0x00010775f5e4();
                *(undefined1 *)ppuVar6 = 0;
                *(undefined1 *)(ppuVar6 + 0xc) = 0;
              }
              else {
                func_0x000104c2fe00(auStack_550,auStack_4b8);
                func_0x00010775f62c(&lStack_518,auStack_550);
                func_0x00010775f614();
                func_0x00010726b164(&lStack_518);
                func_0x000104c2f714(auStack_550);
              }
              func_0x00010775f5f4();
            }
            ppuVar9 = &puStack_478;
            func_0x0001072f5f6c(ppuVar9);
          }
          func_0x00010775f5b0(uStack_468);
          if ((bool)uVar5) {
            return ppuVar9;
          }
          ___stack_chk_fail();
          func_0x00010775f5f4();
          func_0x0001072f5f6c(&puStack_478);
          func_0x00010775f5dc();
          puStack_598 = &SUB_10775f590;
          ppuVar9 = (undefined **)auStack_5a1;
          auStack_5a1._1_8_ = &ppuStack_430;
          func_0x00010726364c(ppuVar9);
          return ppuVar9;
        }
        goto LAB_107776e28;
      case 3:
        uStack_160 = 0;
        uStack_158 = 0;
        puStack_168 = (undefined *)0x0;
        func_0x00010777d398(*(undefined8 *)(param_5 + 8));
        func_0x0001072ac134(&puStack_168);
        lVar1 = (*(long **)(param_5 + 8))[1];
        for (lVar16 = **(long **)(param_5 + 8); in_ZR = lVar16 == lVar1, !(bool)in_ZR;
            lVar16 = lVar16 + 0x70) {
          func_0x00010777daf4(&uStack_f0,lVar16);
          func_0x0001072aad1c(&puStack_168,&uStack_f0);
          func_0x00010777db60();
        }
        func_0x00010777dd48();
        func_0x00010777db2c();
        break;
      default:
        plVar19 = (long *)(param_5 + 8);
        puStack_168 = &UNK_10e52b660;
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_150 = 0;
        uVar15 = *(undefined8 *)(*plVar19 + 0x18);
        func_0x000104c32780(&puStack_168);
        func_0x000107348ee8();
        plStack_1b8 = plVar19;
        while (uStack_1b0 = uVar15, plStack_1b8 != (long *)0x0) {
          func_0x00010777da30(&uStack_f0);
          func_0x000104c32844(auStack_128,&puStack_168,uVar15,&uStack_f0);
          func_0x00010777db60();
          func_0x0001072963cc(&plStack_1b8);
          uVar15 = uStack_1b0;
        }
        func_0x000104c33260(&uStack_f0,&puStack_168);
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 4) = uStack_e8;
        *(undefined8 *)(unaff_x19 + 2) = uStack_f0;
        uStack_f0 = 0;
        uStack_e8 = 0;
        func_0x000104c335c0();
        func_0x000104c33548();
        goto LAB_107776908;
      }
      func_0x000107269124();
    }
  }
LAB_107776908:
  func_0x00010777d23c(uStack_70);
  if ((bool)in_ZR) {
    func_0x00010777de70(unaff_x30);
    return unaff_x30;
  }
LAB_107776e28:
  ___stack_chk_fail();
  ppuVar9 = &puStack_168;
  func_0x000104c33548();
  func_0x00010777d638();
  puStack_1f8 = &UNK_107776f6c;
  puStack_200 = &stack0xfffffffffffffff0;
  if (*(int *)(ppuVar9 + 0xd) == 3) {
    func_0x00010732393c();
    func_0x00010724ef84(&stack0xfffffffffffffdd8);
    func_0x00010777ddf0();
    func_0x00010777d650();
    uVar5 = 1;
  }
  else {
    func_0x00010777d748();
    uVar5 = extraout_w8;
  }
  *(undefined1 *)(extraout_x8_03 + 0x18) = uVar5;
  return ppuVar9;
}



/* Entry: 107777548; end: 10777762b;  */

void FUN_107777548(long param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x10;
  undefined1 *unaff_x19;
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [96];
  undefined8 uStack_28;
  
  func_0x00010777d224();
  iVar1 = *(int *)(param_1 + 0x68);
  if (((iVar1 == 0) || (in_ZR = 1, iVar1 == 1)) || (in_ZR = 1, iVar1 == 2)) {
LAB_10777759c:
    *unaff_x19 = 0;
    unaff_x19[0x60] = 0;
  }
  else {
    in_ZR = iVar1 + -3 == 4;
    switch(iVar1 + -3) {
    case 0:
      func_0x000104c2fe00(auStack_c0,param_1 + 8);
      func_0x00010775f02c(auStack_88,auStack_c0);
      func_0x00010775c0f8();
      func_0x00010726b164(auStack_88);
      func_0x000104c2f714(auStack_c0);
      break;
    default:
      goto LAB_10777759c;
    case 4:
      func_0x00010777d620(uStack_28);
      if (extraout_x10 == extraout_x8) {
        func_0x000107278acc();
        unaff_x19[0x60] = 1;
        return;
      }
      goto LAB_10777761c;
    }
  }
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return;
  }
LAB_10777761c:
  ___stack_chk_fail();
  func_0x00010777d754();
  func_0x000104c2f714();
  func_0x00010777d638();
  func_0x00010777d3b8(6);
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 107777920; end: 107777a43;  */

int * FUN_107777920(int *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  long *plVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x9_03;
  long extraout_x9_04;
  undefined1 *extraout_x9_05;
  undefined1 uVar11;
  undefined1 *extraout_x10;
  undefined1 *extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined1 *puVar12;
  long *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar13;
  undefined1 auStack_38 [8];
  
  if (*param_1 == 7) {
    lVar2 = *param_2;
    func_0x000107349544(lVar2,0);
    func_0x00010734ac10(lVar2);
    func_0x000107349658();
    func_0x00010734aa78();
    *extraout_x9 = 0x6e;
    func_0x00010734aa78();
    *extraout_x9_00 = 0x75;
    func_0x00010734aa78();
    *extraout_x9_01 = 0x6c;
    func_0x00010734ab28();
    *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
    *extraout_x10 = extraout_w8;
    return (int *)0x1;
  }
  if (*param_1 == 6) {
    func_0x00010734ab1c(*param_2);
    func_0x000107349544();
    plVar5 = unaff_x19;
    func_0x00010734ac10();
    if ((int)plVar5 == 0) {
      func_0x000107349658();
      func_0x00010734aa78();
      *extraout_x9_03 = 0x66;
      uVar9 = 0x73;
      uVar10 = 0x6c;
      uVar11 = 0x61;
    }
    else {
      func_0x000107349658();
      uVar9 = 0x75;
      uVar10 = 0x72;
      uVar11 = 0x74;
    }
    puVar12 = *(undefined1 **)(*unaff_x19 + 0x18);
    *(undefined1 **)(*unaff_x19 + 0x18) = puVar12 + 1;
    *puVar12 = uVar11;
    puVar12 = *(undefined1 **)(*unaff_x19 + 0x18);
    *(undefined1 **)(*unaff_x19 + 0x18) = puVar12 + 1;
    *puVar12 = uVar10;
    func_0x00010734ab28(uVar9);
    *(undefined8 *)(extraout_x9_04 + 0x18) = extraout_x11_00;
    *extraout_x10_00 = extraout_w8_00;
    func_0x00010734aa78();
    *extraout_x9_05 = 0x65;
    return (int *)0x1;
  }
  if (*param_1 == 5) {
    piVar6 = *(int **)(param_1 + 2);
    func_0x00010734aad8(*param_2);
    uVar9 = *unaff_x20;
    func_0x0001073499a4(uVar9,0x14);
    func_0x00010734a574(piVar6,uVar9);
    func_0x00010734aac4();
    func_0x00010734ac1c();
  }
  else {
    if (*param_1 != 4) {
      if (*param_1 == 3) {
        lVar2 = *param_2;
        uVar13 = *(ulong *)(param_1 + 2);
        func_0x000107349544(lVar2,6);
        if ((uVar13 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
          func_0x00010734ac10();
          func_0x0001073499a4();
          lVar1 = lVar2;
          func_0x0001073499e8(uVar13);
          *(long *)(*unaff_x19 + 0x18) = *(long *)(*unaff_x19 + 0x18) + (lVar1 - lVar2) + -0x19;
        }
        return (int *)(ulong)((uVar13 & 0x7fffffffffffffff) < 0x7ff0000000000000);
      }
      if (*param_1 != 2) {
        piVar6 = param_1 + 2;
        if (*param_1 != 1) {
          puVar4 = (undefined8 *)*param_2;
          func_0x0001073493cc();
          lVar1 = (*(long **)piVar6)[1];
          for (lVar2 = **(long **)piVar6; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
            func_0x0001077778dc(puVar4,lVar2);
          }
          puVar4[4] = puVar4[4] + -0x10;
          func_0x000107349610(*puVar4,0x5d);
          return (int *)0x1;
        }
        lVar2 = *param_2;
        piVar7 = piVar6;
        func_0x00010734936c();
        func_0x000104c2db28();
        piVar8 = piVar7;
        while (piVar6 != (int *)0x0) {
          piVar3 = piVar7;
          func_0x000107264c5c(piVar7);
          func_0x000107349430(lVar2,piVar3,piVar8,0);
          piVar8 = piVar7 + 0xe;
          func_0x00010777dd7c();
          func_0x000104c2de10(&stack0xffffffffffffffd0);
        }
        func_0x00010777dd84();
        return piVar6;
      }
      piVar6 = (int *)*param_2;
      func_0x00010724ef84(auStack_38,param_1 + 2);
      func_0x00010777784c(piVar6,auStack_38);
      func_0x00010777d650();
      return piVar6;
    }
    piVar6 = *(int **)(param_1 + 2);
    func_0x00010734aad8(*param_2);
    uVar9 = *unaff_x20;
    func_0x0001073499a4(uVar9,0x15);
    func_0x00010734a55c(piVar6,uVar9);
    func_0x00010734aac4();
    func_0x00010734ac1c();
  }
  return piVar6;
}



/* Entry: 107777c54; end: 107777cd7;  */

undefined1  [16] FUN_107777c54(ulong param_1)

{
  undefined8 uVar1;
  ulong unaff_x22;
  ulong unaff_x28;
  byte bVar2;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined1 auVar3 [16];
  
  func_0x00010777db18();
  func_0x00010777d9e0();
  do {
    func_0x00010777dc8c();
    for (; unaff_x28 != 0; unaff_x28 = unaff_x28 - 1 & unaff_x28) {
      func_0x00010777d98c();
      if ((param_1 & 1) != 0) {
        uVar1 = 0;
        goto LAB_107777cbc;
      }
    }
    bVar2 = NEON_umaxv(CONCAT17(-((char)((ulong)unaff_d10 >> 0x38) ==
                                 (char)((ulong)unaff_d9 >> 0x38)),
                                CONCAT16(-((char)((ulong)unaff_d10 >> 0x30) ==
                                          (char)((ulong)unaff_d9 >> 0x30)),
                                         CONCAT15(-((char)((ulong)unaff_d10 >> 0x28) ==
                                                   (char)((ulong)unaff_d9 >> 0x28)),
                                                  CONCAT14(-((char)((ulong)unaff_d10 >> 0x20) ==
                                                            (char)((ulong)unaff_d9 >> 0x20)),
                                                           CONCAT13(-((char)((ulong)unaff_d10 >>
                                                                            0x18) ==
                                                                     (char)((ulong)unaff_d9 >> 0x18)
                                                                     ),CONCAT12(-((char)((ulong)
                                                  unaff_d10 >> 0x10) ==
                                                  (char)((ulong)unaff_d9 >> 0x10)),
                                                  CONCAT11(-((char)((ulong)unaff_d10 >> 8) ==
                                                            (char)((ulong)unaff_d9 >> 8)),
                                                           -((char)unaff_d10 == (char)unaff_d9))))))
                                        )),1);
  } while ((bVar2 & 1) == 0);
  func_0x00010777dd70();
  uVar1 = 1;
  unaff_x22 = param_1;
LAB_107777cbc:
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = unaff_x22;
  return auVar3;
}



/* Entry: 107777f38; end: 107778053;  */

void FUN_107777f38(undefined8 param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uStack_98;
  ulong uStack_90;
  long alStack_88 [3];
  long *plStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  undefined1 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  func_0x00010777d8bc();
  if (param_3 != 0) {
    if (param_3 >> 0x3c != 0) {
      func_0x000107778164();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x107778024);
      (*pcVar1)();
    }
    uVar2 = param_3;
    lVar3 = param_2;
    func_0x000107778178();
    plStack_70 = alStack_88;
    alStack_88[0] = uVar2 + lVar3 * 0x10;
    puStack_68 = &uStack_50;
    puStack_60 = &uStack_48;
    uStack_58 = 0;
    uStack_98 = uVar2;
    uStack_90 = uVar2;
    uStack_50 = uVar2;
    for (lVar3 = param_3 << 4; uStack_48 = uVar2, lVar3 != 0; lVar3 = lVar3 + -0x10) {
      func_0x0001072f64f4(uVar2,param_2);
      param_2 = param_2 + 0x10;
      uVar2 = uStack_48 + 0x10;
    }
    uStack_58 = 1;
    func_0x0001077781ac(&plStack_70);
    uStack_90 = uVar2;
  }
  func_0x00010777dc60();
  func_0x0001077781f0();
  func_0x000107778054();
  FUN_107778278(&uStack_98);
  return;
}



/* Entry: 107778278; end: 1077782ab;  */

undefined8 FUN_107778278(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010777821c(&uStack_28);
  return param_1;
}



/* Entry: 107778530; end: 1077788bf;  */

void FUN_107778530(long param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int extraout_w8;
  undefined8 extraout_x8;
  ulong uVar6;
  ulong uVar7;
  int extraout_w10;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined1 auStack_f8 [16];
  byte bStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_70;
  
  plVar4 = param_2;
  func_0x00010777d250();
  uStack_70 = extraout_x8;
  func_0x00010777da78();
  if ((bool)in_ZR) {
    uStack_d0 = *(ulong *)(param_1 + 0x10);
    uStack_d8 = *(ulong *)(param_1 + 8);
    if (*(long *)(param_1 + 0x10) != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc30();
    func_0x00010777d7a0();
    func_0x00010777d640();
    if ((uStack_100 & 1) != 0) {
      func_0x00010777d818();
      func_0x00010777d550();
      goto LAB_107778790;
    }
LAB_1077787a0:
    func_0x00010777d724();
LAB_1077787a4:
    func_0x0001072dbe34(&lStack_110);
  }
  else {
    in_ZR = extraout_w8 == 6;
    if ((bool)in_ZR) {
      func_0x000107348eb0(&uStack_d8,param_1 + 8);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((uStack_100 & 1) == 0) goto LAB_1077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
LAB_107778790:
      func_0x00010777d2ec();
      func_0x0001072dbd40(auStack_f8);
      goto LAB_1077787a4;
    }
    in_ZR = extraout_w8 == 7;
    if ((bool)in_ZR) {
      func_0x000107348ecc(&uStack_d8,param_1 + 8);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((uStack_100 & 1) == 0) goto LAB_1077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
      goto LAB_107778790;
    }
    in_ZR = extraout_w8 == 8;
    if (!(bool)in_ZR) {
      func_0x0001074fd134(&uStack_d8,param_1 + 8);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((uStack_100 & 1) == 0) goto LAB_1077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
      goto LAB_107778790;
    }
    uStack_108 = 0;
    uStack_100 = 0;
    lStack_110 = 0;
    lVar8 = **(long **)(param_1 + 8);
    lVar10 = (*(long **)(param_1 + 8))[1];
    if (lVar10 - lVar8 != 0) {
      uVar3 = (lVar10 - lVar8) / 0x70;
      if (uVar3 >> 0x3c != 0) {
        func_0x000107778164();
        goto LAB_10777880c;
      }
      puStack_c0 = &uStack_100;
      func_0x000107778178();
      lStack_c8 = uVar3 + (long)plVar4 * 0x10;
      uStack_e0 = uVar3;
      uStack_d8 = uVar3;
      uStack_d0 = uVar3;
      func_0x00010777dd9c();
      func_0x00010777dd68();
      lVar8 = **(long **)(param_1 + 8);
      lVar10 = (*(long **)(param_1 + 8))[1];
    }
    do {
      in_ZR = lVar8 == lVar10;
      if ((bool)in_ZR) {
        func_0x000107778054(&uStack_e0,&lStack_110);
        func_0x00010777d58c();
        func_0x00010777d960();
        func_0x00010773b158(&uStack_e0);
        goto LAB_1077787f0;
      }
      lVar5 = *param_2;
      func_0x0001077754c8(auStack_f8,lVar8);
      bVar1 = bStack_e8;
      uVar3 = uStack_108;
      if ((bStack_e8 & 1) != 0) {
        in_ZR = uStack_108 == uStack_100;
        if (uStack_108 < uStack_100) {
          func_0x0001072f64f4(uStack_108,auStack_f8);
          uStack_108 = uVar3 + 0x10;
        }
        else {
          lVar9 = uStack_108 - lStack_110;
          uVar3 = (lVar9 >> 4) + 1;
          if (uVar3 >> 0x3c != 0) goto LAB_107778800;
          uVar6 = uStack_100 - lStack_110;
          uVar7 = (long)uVar6 >> 3;
          if ((ulong)((long)uVar6 >> 3) <= uVar3) {
            uVar7 = uVar3;
          }
          in_ZR = uVar6 == 0x7ffffffffffffff0;
          if (0x7fffffffffffffef < uVar6) {
            uVar7 = 0xfffffffffffffff;
          }
          if (uVar7 == 0) {
            uVar7 = 0;
            lVar5 = 0;
            puStack_c0 = &uStack_100;
          }
          else {
            puStack_c0 = &uStack_100;
            func_0x000107778178();
          }
          uVar3 = uVar7 + lVar9;
          lStack_c8 = uVar7 + lVar5 * 0x10;
          uStack_e0 = uVar7;
          uStack_d8 = uVar3;
          uStack_d0 = uVar3;
          func_0x0001072f64f4(uVar3,auStack_f8);
          uStack_d0 = uVar3 + 0x10;
          func_0x00010777dd9c();
          uVar3 = uStack_108;
          func_0x00010777dd68();
          uStack_108 = uVar3;
        }
      }
      func_0x0001072dbe34(auStack_f8);
      lVar8 = lVar8 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777db54();
LAB_1077787f0:
    FUN_107778278(&lStack_110);
  }
  func_0x00010777d23c(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_107778800:
  func_0x000107778164();
LAB_10777880c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107778810);
  (*pcVar2)();
}



/* Entry: 107778d74; end: 107778e0b;  */

void FUN_107778d74(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  int extraout_w8;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar2 = (int)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  puVar4 = &uStack_40;
  func_0x00010777da78();
  if (((((bool)in_ZR) || (extraout_w8 == 6)) || (extraout_w8 == 7)) ||
     ((extraout_w8 != 8 || (func_0x00010777dbe0(), extraout_x8 != 0x1c0)))) {
    func_0x00010777d724();
  }
  else {
    for (; unaff_x20 != unaff_x21; unaff_x20 = unaff_x20 + 0x70) {
      func_0x00010777ddc4();
      if (iVar2 == 0) {
        *(undefined1 *)param_1 = 0;
        uVar3 = 0;
        goto LAB_107778e04;
      }
      *(undefined4 *)puVar4 = uVar1;
      puVar4 = (undefined8 *)((long)puVar4 + 4);
    }
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    uVar3 = 1;
LAB_107778e04:
    *(undefined1 *)(param_1 + 2) = uVar3;
  }
  return;
}



/* Entry: 10777905c; end: 1077790cf;  */

void FUN_10777905c(long *param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 in_ZR;
  undefined1 uVar10;
  uint uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 uVar20;
  undefined1 extraout_w8;
  undefined1 uVar21;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  int extraout_w8_08;
  long lVar22;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined1 *unaff_x19;
  undefined4 uVar23;
  ulong unaff_x20;
  long *plVar24;
  undefined1 *puVar25;
  undefined1 *unaff_x22;
  undefined1 *puVar26;
  undefined8 unaff_x23;
  long *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar27;
  undefined *puVar28;
  code *pcVar29;
  long lVar30;
  undefined8 uVar31;
  byte abStack_1410 [4764];
  undefined4 uStack_174;
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [12];
  undefined4 uStack_b4;
  long alStack_b0 [16];
  
  pbVar3 = auStack_c0;
  pppppppuVar27 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  plVar24 = alStack_b0;
  func_0x00010777dacc();
  func_0x00010777d958();
  func_0x00010777d478();
  bVar1 = unaff_x20 >> 0x20 != 0;
  uVar23 = (undefined4)unaff_x20;
  if (bVar1) {
    uStack_b4 = uVar23;
    func_0x00010777d510();
    func_0x00010777d2c0();
    func_0x0001072dbd40();
  }
  else {
    *unaff_x19 = 0;
  }
  unaff_x19[0x10] = bVar1;
  func_0x00010777d1dc();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar28 = &UNK_1077790d0;
  plVar16 = param_1;
  func_0x00010777d638();
  uVar10 = (int)plVar16[0xd] == 3;
  if ((bool)uVar10) {
    plVar17 = param_2 + 1;
    param_2 = plVar16 + 1;
    pbVar3 = abStack_1410 + 0x1290;
    puStack_c8 = &UNK_1077790d0;
    ppppppuStack_d0 = pppppppuVar27;
    func_0x00010777d1f4();
    func_0x00010777dd10();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      uStack_174 = uVar23;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)param_1 = 0;
    }
    *(bool *)(param_1 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    puVar28 = &UNK_107779164;
    plVar16 = plVar17;
    func_0x00010777d638();
    param_1 = plVar17;
    pppppppuVar27 = &ppppppuStack_d0;
  }
  uVar10 = (int)plVar16[0xd] == 4;
  if ((bool)uVar10) {
    plVar17 = param_2 + 1;
    param_2 = plVar16 + 1;
    *(undefined1 **)(pbVar3 + -0x30) = unaff_x22;
    *(long **)(pbVar3 + -0x28) = plVar24;
    *(ulong *)(pbVar3 + -0x20) = unaff_x20;
    *(long **)(pbVar3 + -0x18) = param_1;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar27;
    *(undefined **)(pbVar3 + -8) = puVar28;
    pppppppuVar27 = (undefined8 *******)(pbVar3 + -0x10);
    func_0x00010777d1f4();
    plVar24 = (long *)(pbVar3 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d958();
    func_0x00010777d478();
    bVar1 = unaff_x20 >> 0x20 != 0;
    if (bVar1) {
      *(undefined4 *)(pbVar3 + -0xb4) = uVar23;
      func_0x00010777d510();
      func_0x00010777d2c0();
      func_0x0001072dbd40();
    }
    else {
      *(undefined1 *)param_1 = 0;
    }
    *(bool *)(param_1 + 2) = bVar1;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    puVar28 = &UNK_1077791fc;
    plVar16 = plVar17;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0xc0;
    param_1 = plVar17;
  }
  puVar9 = pbVar3 + -0xc0;
  *(undefined1 **)(pbVar3 + -0x30) = unaff_x22;
  *(long **)(pbVar3 + -0x28) = plVar24;
  *(ulong *)(pbVar3 + -0x20) = unaff_x20;
  *(long **)(pbVar3 + -0x18) = param_1;
  *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar27;
  *(undefined **)(pbVar3 + -8) = puVar28;
  puVar25 = pbVar3 + -0x10;
  plVar17 = plVar16;
  func_0x00010777d1f4();
  func_0x00010777da78();
  uVar23 = SUB84(plVar16,0);
  if ((bool)uVar10) {
    lVar22 = plVar16[2];
    lVar30 = plVar16[1];
    *(long *)(pbVar3 + -0xa0) = plVar16[2];
    *(long *)(pbVar3 + -0xa8) = lVar30;
    if (lVar22 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d958();
    func_0x00010777d478();
    if ((ulong)plVar16 >> 0x20 != 0) {
      *(undefined4 *)(pbVar3 + -0xc0) = uVar23;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
code_r0x000107779334:
    uVar20 = (undefined1)((ulong)plVar16 >> 0x20);
    *(undefined1 *)param_1 = 0;
code_r0x000107779368:
    *(undefined1 *)(param_1 + 2) = uVar20;
  }
  else {
    uVar10 = extraout_w8_05 == 6;
    if ((bool)uVar10) {
      plVar24 = (long *)(pbVar3 + -0xb0);
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)plVar16 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)(pbVar3 + -0xc0) = uVar23;
      func_0x00010777d400();
      func_0x0001072f8d90();
code_r0x00010777935c:
      func_0x00010777d2c0();
      func_0x0001072dbd40();
      uVar20 = 1;
      goto code_r0x000107779368;
    }
    uVar10 = extraout_w8_05 == 7;
    if ((bool)uVar10) {
      plVar24 = (long *)(pbVar3 + -0xb0);
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)plVar16 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)(pbVar3 + -0xc0) = uVar23;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    uVar10 = extraout_w8_05 == 8;
    if (!(bool)uVar10) {
      plVar24 = (long *)(pbVar3 + -0xb0);
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d958();
      func_0x00010777d478();
      if ((ulong)plVar16 >> 0x20 == 0) goto code_r0x000107779334;
      *(undefined4 *)(pbVar3 + -0xc0) = uVar23;
      func_0x00010777d400();
      func_0x0001072f8d90();
      goto code_r0x00010777935c;
    }
    func_0x00010777dce0();
    func_0x00010777d398(plVar16[1]);
    puVar4 = pbVar3 + -0xb0;
    func_0x0001073b504c();
    plVar24 = (long *)((undefined8 *)plVar16[1])[1];
    for (plVar16 = *(long **)plVar16[1]; uVar10 = plVar16 == plVar24, !(bool)uVar10;
        plVar16 = plVar16 + 0xe) {
      func_0x00010777ddc4();
      *(int *)(pbVar3 + -0xc0) = (int)puVar4;
      pbVar3[-0xbc] = (char)((ulong)puVar4 >> 0x20);
      if ((ulong)puVar4 >> 0x20 == 0) {
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
    plVar17 = (long *)(pbVar3 + -0xb0);
    func_0x0001056d1ce4();
  }
  func_0x00010777d1dc();
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  pcVar29 = (code *)&UNK_1077793bc;
  func_0x00010777d638();
  if ((int)plVar17[0xd] == 0) {
    plVar12 = param_2 + 1;
    puVar9 = pbVar3 + -0x1b0;
    *(long **)(pbVar3 + -0xe0) = plVar16;
    *(long **)(pbVar3 + -0xd8) = param_1;
    *(undefined1 **)(pbVar3 + -0xd0) = puVar25;
    *(undefined **)(pbVar3 + -200) = &UNK_1077793bc;
    puVar25 = pbVar3 + -0xd0;
    func_0x00010777d224(plVar12,plVar17 + 1);
    *(undefined4 *)(pbVar3 + -0x130) = 0;
    param_2 = (long *)*plVar12;
    plVar16 = (long *)(pbVar3 + -0x198);
    func_0x00010777d824();
    func_0x00010777d648();
    if ((pbVar3[-0xf0] & 1) == 0) {
      func_0x00010777d724();
      plVar17 = plVar12;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar17 = plVar12;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar29 = FUN_107779450;
    func_0x00010777d638();
  }
  uVar10 = (int)plVar17[0xd] == 1;
  if ((bool)uVar10) {
    plVar12 = param_2 + 1;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d224(plVar12,plVar17 + 1);
    func_0x00010777d8d4();
    param_2 = (long *)*plVar12;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar9[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar17 = plVar12;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar17 = plVar12;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar29 = (code *)&LAB_1077794e4;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xf0;
  }
  uVar10 = (int)plVar17[0xd] == 2;
  if ((bool)uVar10) {
    plVar12 = param_2 + 1;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d224(plVar12,plVar17 + 1);
    func_0x00010777d904();
    param_2 = (long *)*plVar12;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar9[-0x30] & 1) == 0) {
      func_0x00010777d724();
      plVar17 = plVar12;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      plVar17 = plVar12;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar29 = (code *)&UNK_107779578;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xf0;
  }
  uVar10 = (int)plVar17[0xd] == 3;
  if ((bool)uVar10) {
    plVar12 = param_2 + 1;
    param_2 = plVar17 + 1;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d224(plVar12);
    param_1 = (long *)(puVar9 + -0x60);
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    plVar17 = param_1;
    func_0x00010777dbd0();
    pcVar29 = (code *)&UNK_1077795e4;
    func_0x00010777d638();
    puVar9 = puVar9 + -0x70;
  }
  uVar10 = (int)plVar17[0xd] == 4;
  if ((bool)uVar10) {
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d224(param_2 + 1,plVar17 + 1);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((puVar9[-0x30] & 1) == 0) {
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
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    pcVar29 = FUN_107779678;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xf0;
  }
  puVar4 = puVar9 + -0x120;
  *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
  *(ulong *)(puVar9 + -0x48) = unaff_x25;
  *(long **)(puVar9 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar9 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
  *(long **)(puVar9 + -0x28) = plVar24;
  *(long **)(puVar9 + -0x20) = plVar16;
  *(long **)(puVar9 + -0x18) = param_1;
  *(undefined1 **)(puVar9 + -0x10) = puVar25;
  *(code **)(puVar9 + -8) = pcVar29;
  puVar25 = puVar9 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar9 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar10) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    puVar18 = (undefined1 *)plVar16[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((puVar9[-0x60] & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto LAB_1077797d4;
    }
LAB_1077797e0:
    func_0x00010777d724();
LAB_1077797e4:
    puVar13 = (undefined8 *)(puVar9 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar10 = extraout_w8_06 == 6;
    if ((bool)uVar10) {
      unaff_x22 = puVar9 + -0x110;
      func_0x00010777d6c8();
      puVar18 = (undefined1 *)plVar16[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar9[-0x60] & 1) == 0) goto LAB_1077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
LAB_1077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto LAB_1077797e4;
    }
    uVar10 = extraout_w8_06 == 7;
    if ((bool)uVar10) {
      unaff_x22 = puVar9 + -0x110;
      func_0x00010777d6bc();
      puVar18 = (undefined1 *)plVar16[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar9[-0x60] & 1) == 0) goto LAB_1077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto LAB_1077797d4;
    }
    uVar10 = extraout_w8_06 == 8;
    if (!(bool)uVar10) {
      unaff_x22 = puVar9 + -0x110;
      func_0x00010777d6d4();
      puVar18 = (undefined1 *)plVar16[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar9[-0x60] & 1) == 0) goto LAB_1077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto LAB_1077797d4;
    }
    *(undefined8 *)(puVar9 + -0x90) = 0;
    *(undefined8 *)(puVar9 + -0x88) = 0;
    *(undefined8 *)(puVar9 + -0x98) = 0;
    func_0x00010777d398(plVar24[1]);
    func_0x0001072dd514(puVar9 + -0x98);
    func_0x00010777de3c();
    do {
      uVar10 = plVar24 == unaff_x24;
      if ((bool)uVar10) {
        puVar18 = puVar9 + -0x98;
        func_0x0001073fb2d4(puVar9 + -0x110);
        lVar22 = *(long *)(puVar9 + -0x110);
        param_1[1] = *(long *)(puVar9 + -0x108);
        *param_1 = lVar22;
        *(undefined8 *)(puVar9 + -0x110) = 0;
        *(undefined8 *)(puVar9 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c(puVar9 + -0x110);
        goto LAB_107779838;
      }
      puVar18 = (undefined1 *)*plVar16;
      func_0x000107323900(puVar9 + -0x110,plVar24);
      bVar2 = puVar9[-0xd8];
      unaff_x25 = (ulong)bVar2;
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar18 = puVar9 + -0x110;
        func_0x0001072d17f4(puVar9 + -0x98);
      }
      func_0x00010724b3d8(puVar9 + -0x110);
      plVar24 = plVar24 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
LAB_107779838:
    puVar13 = (undefined8 *)(puVar9 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar9 + -0x58));
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar14 = (undefined8 *)(puVar9 + -0x98);
  func_0x00010724b3d8();
  puVar28 = &UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar14 + 0xd) == 0) {
    puVar15 = (undefined8 *)(puVar18 + 8);
    puVar4 = puVar9 + -0x250;
    *(undefined8 *)(puVar9 + -0x150) = unaff_x28;
    *(undefined8 *)(puVar9 + -0x148) = unaff_x27;
    *(undefined8 **)(puVar9 + -0x140) = puVar13;
    *(long **)(puVar9 + -0x138) = param_1;
    *(undefined1 **)(puVar9 + -0x130) = puVar25;
    *(undefined **)(puVar9 + -0x128) = &UNK_1077798bc;
    puVar25 = puVar9 + -0x130;
    func_0x00010777d1f4(puVar15,puVar14 + 1);
    *(undefined4 *)(puVar9 + -0x1e8) = 0;
    puVar18 = (undefined1 *)*puVar15;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar9[-0x160] & 1) == 0) {
      func_0x00010777d724();
      puVar14 = puVar15;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar14 = puVar15;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779964;
    func_0x00010777d638();
    puVar13 = (undefined8 *)(puVar9 + -0x250);
  }
  uVar10 = *(int *)(puVar14 + 0xd) == 1;
  if ((bool)uVar10) {
    puVar15 = (undefined8 *)(puVar18 + 8);
    puVar14 = puVar14 + 1;
    puVar5 = (undefined8 *)(puVar4 + -0x130);
    *(undefined8 *)(puVar4 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar4 + -0x20) = puVar13;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar25;
    *(undefined **)(puVar4 + -8) = puVar28;
    puVar25 = puVar4 + -0x10;
    func_0x00010777d1f4();
    puVar4[-0x128] = *(undefined1 *)puVar14;
    *(undefined4 *)(puVar4 + -200) = 1;
    puVar18 = (undefined1 *)*puVar15;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar4[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar14 = puVar15;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar14 = puVar15;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779a1c;
    func_0x00010777d638();
    puVar4 = puVar4 + -0x130;
    puVar13 = puVar5;
  }
  uVar10 = *(int *)(puVar14 + 0xd) == 2;
  if ((bool)uVar10) {
    puVar15 = (undefined8 *)(puVar18 + 8);
    puVar14 = puVar14 + 1;
    puVar6 = (undefined8 *)(puVar4 + -0x130);
    *(undefined8 *)(puVar4 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar4 + -0x20) = puVar13;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar25;
    *(undefined **)(puVar4 + -8) = puVar28;
    puVar25 = puVar4 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar4 + -0x128) = *puVar14;
    *(undefined4 *)(puVar4 + -200) = 2;
    puVar18 = (undefined1 *)*puVar15;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar4[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar14 = puVar15;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar14 = puVar15;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779ad4;
    func_0x00010777d638();
    puVar4 = puVar4 + -0x130;
    puVar13 = puVar6;
  }
  uVar10 = *(int *)(puVar14 + 0xd) == 3;
  if ((bool)uVar10) {
    puVar15 = puVar14 + 1;
    puVar14 = (undefined8 *)(puVar4 + -0x130);
    plVar7 = (long *)(puVar4 + -0x130);
    *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
    *(long **)(puVar4 + -0x28) = plVar24;
    *(undefined8 **)(puVar4 + -0x20) = puVar13;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar25;
    *(undefined **)(puVar4 + -8) = puVar28;
    puVar25 = puVar4 + -0x10;
    func_0x00010777d1f4(puVar18 + 8,puVar15);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((puVar4[-0x40] & 1) == 0) {
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
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779b94;
    func_0x00010777d638();
    puVar4 = puVar4 + -0x130;
    puVar13 = (undefined8 *)(puVar18 + 8);
    plVar24 = plVar7;
  }
  uVar10 = *(int *)(puVar14 + 0xd) == 4;
  if ((bool)uVar10) {
    puVar14 = puVar14 + 1;
    puVar8 = (undefined8 *)(puVar4 + -0x130);
    *(undefined8 *)(puVar4 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar4 + -0x20) = puVar13;
    *(long **)(puVar4 + -0x18) = param_1;
    *(undefined1 **)(puVar4 + -0x10) = puVar25;
    *(undefined **)(puVar4 + -8) = puVar28;
    puVar25 = puVar4 + -0x10;
    func_0x00010777d1f4();
    uVar31 = *puVar14;
    *(undefined8 *)(puVar4 + -0x120) = puVar14[1];
    *(undefined8 *)(puVar4 + -0x128) = uVar31;
    *(undefined4 *)(puVar4 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar4[-0x40] & 1) == 0) {
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
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar28 = &UNK_107779c4c;
    func_0x00010777d638();
    puVar4 = puVar4 + -0x130;
    puVar13 = puVar8;
  }
  puVar9 = puVar4 + -0x150;
  puVar26 = puVar4 + -0x150;
  puVar18 = puVar4 + -0x150;
  *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
  *(ulong *)(puVar4 + -0x48) = unaff_x25;
  *(long **)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
  *(long **)(puVar4 + -0x28) = plVar24;
  *(undefined8 **)(puVar4 + -0x20) = puVar13;
  *(long **)(puVar4 + -0x18) = param_1;
  *(undefined1 **)(puVar4 + -0x10) = puVar25;
  *(undefined **)(puVar4 + -8) = puVar28;
  puVar25 = puVar4 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar4 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar10) {
    lVar22 = plVar24[2];
    lVar30 = plVar24[1];
    *(long *)(puVar4 + -0x140) = plVar24[2];
    *(long *)(puVar4 + -0x148) = lVar30;
    if (lVar22 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar4 + -0xe8) = 5;
    puVar19 = (undefined1 *)puVar13[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    plVar24 = (long *)(puVar4 + -0x150);
    puVar18 = unaff_x22;
    if ((puVar4[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      plVar24 = (long *)(puVar4 + -0x150);
      puVar26 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    plVar16 = (long *)(puVar4 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar18;
  }
  else {
    uVar10 = extraout_w8_07 == 6;
    if ((bool)uVar10) {
      func_0x00010777d6c8();
      puVar19 = (undefined1 *)puVar13[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar18 = puVar4 + -0x150;
      if ((puVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar26 = puVar4 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar18 = puVar26;
      goto code_r0x000107779dfc;
    }
    uVar10 = extraout_w8_07 == 7;
    if ((bool)uVar10) {
      func_0x00010777d6bc();
      puVar19 = (undefined1 *)puVar13[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar18 = puVar4 + -0x150;
      if ((puVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar26 = puVar4 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar10 = extraout_w8_07 == 8;
    if (!(bool)uVar10) {
      func_0x00010777d6d4();
      puVar19 = (undefined1 *)puVar13[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((puVar4[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(puVar4 + -0xd8) = 0;
    *(undefined8 *)(puVar4 + -0xd0) = 0;
    *(undefined8 *)(puVar4 + -0xe0) = 0;
    func_0x00010777d398(plVar24[1]);
    func_0x0001072ac134(puVar4 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar10 = plVar24 == unaff_x24;
      if ((bool)uVar10) {
        puVar19 = puVar4 + -0xe0;
        func_0x000107327958(puVar4 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      FUN_107776804(puVar4 + -0xa0,plVar24,*puVar13);
      puVar19 = puVar4 + -0xa0;
      func_0x00010729d394(puVar4 + -0x150);
      func_0x000104c3323c(puVar4 + -0xa0);
      bVar2 = puVar4[-0x110];
      if ((bVar2 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar19 = puVar4 + -0x150;
        func_0x0001072d7f34(puVar4 + -0xe0);
      }
      func_0x000107267ed0(puVar4 + -0x150);
      plVar24 = plVar24 + 0xe;
    } while ((bVar2 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    plVar16 = (long *)(puVar4 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar4 + -0x58));
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  plVar17 = (long *)(puVar4 + -0xa0);
  func_0x000107267ed0();
  pcVar29 = (code *)&UNK_107779ed8;
  func_0x00010777d9d0();
  uVar11 = (uint)plVar16;
  uVar20 = SUB81(plVar16,0);
  if ((int)plVar17[0xd] == 0) {
    plVar12 = (long *)(puVar19 + 8);
    puVar9 = puVar4 + -0x210;
    *(undefined1 **)(puVar4 + -0x180) = unaff_x22;
    *(long **)(puVar4 + -0x178) = plVar24;
    *(long **)(puVar4 + -0x170) = plVar16;
    *(long **)(puVar4 + -0x168) = param_1;
    *(undefined1 **)(puVar4 + -0x160) = puVar25;
    *(undefined **)(puVar4 + -0x158) = &UNK_107779ed8;
    puVar25 = puVar4 + -0x160;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    *(undefined4 *)(puVar4 + -0x198) = 0;
    puVar19 = (undefined1 *)*plVar12;
    plVar24 = (long *)(puVar4 + -0x200);
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar21 = extraout_w8;
    }
    else {
      puVar4[-0x201] = uVar20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar21 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar21;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar29 = (code *)&UNK_107779f6c;
    plVar17 = plVar12;
    func_0x00010777d638();
    param_1 = plVar12;
  }
  uVar10 = (int)plVar17[0xd] == 1;
  if ((bool)uVar10) {
    plVar12 = (long *)(puVar19 + 8);
    *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = plVar24;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    plVar24 = (long *)(puVar9 + -0xb0);
    func_0x00010777dae0();
    puVar19 = (undefined1 *)*plVar12;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar21 = extraout_w8_00;
    }
    else {
      puVar9[-0xb1] = uVar20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar21 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar21;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar29 = (code *)&UNK_10777a170;
    plVar17 = plVar12;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xc0;
    param_1 = plVar12;
  }
  uVar10 = (int)plVar17[0xd] == 2;
  if ((bool)uVar10) {
    plVar12 = (long *)(puVar19 + 8);
    *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = plVar24;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    plVar24 = (long *)(puVar9 + -0xb0);
    func_0x00010777dacc();
    puVar19 = (undefined1 *)*plVar12;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_01;
    }
    else {
      puVar9[-0xb1] = uVar20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar29 = FUN_10777a208;
    plVar17 = plVar12;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xc0;
    param_1 = plVar12;
  }
  uVar10 = (int)plVar17[0xd] == 3;
  if ((bool)uVar10) {
    plVar12 = (long *)(puVar19 + 8);
    *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = plVar24;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    plVar16 = plVar12;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    func_0x00010777dd10();
    puVar19 = (undefined1 *)*plVar12;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar12 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_02;
    }
    else {
      puVar9[-0xb1] = (char)plVar12;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar29 = (code *)&LAB_10777a2a0;
    plVar17 = plVar16;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xc0;
    param_1 = plVar16;
    plVar16 = plVar12;
  }
  uVar10 = (int)plVar17[0xd] == 4;
  if ((bool)uVar10) {
    plVar12 = (long *)(puVar19 + 8);
    *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
    *(long **)(puVar9 + -0x28) = plVar24;
    *(long **)(puVar9 + -0x20) = plVar16;
    *(long **)(puVar9 + -0x18) = param_1;
    *(undefined1 **)(puVar9 + -0x10) = puVar25;
    *(code **)(puVar9 + -8) = pcVar29;
    puVar25 = puVar9 + -0x10;
    func_0x00010777d1f4(plVar12,plVar17 + 1);
    plVar24 = (long *)(puVar9 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar16 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar20 = extraout_w8_03;
    }
    else {
      puVar9[-0xb1] = (char)plVar16;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar20 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar20;
    func_0x00010777d1dc();
    if ((bool)uVar10) {
      return;
    }
    ___stack_chk_fail();
    pcVar29 = (code *)&UNK_10777a338;
    plVar17 = plVar12;
    func_0x00010777d638();
    puVar9 = puVar9 + -0xc0;
    param_1 = plVar12;
  }
  uVar11 = (uint)plVar17;
  *(undefined1 **)(puVar9 + -0x30) = unaff_x22;
  *(long **)(puVar9 + -0x28) = plVar24;
  *(long **)(puVar9 + -0x20) = plVar16;
  *(long **)(puVar9 + -0x18) = param_1;
  *(undefined1 **)(puVar9 + -0x10) = puVar25;
  *(code **)(puVar9 + -8) = pcVar29;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar10) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_02 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar16 >> 8 & 1) != 0) {
      puVar9[-0xc0] = (char)plVar16;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar20 = extraout_w8_04;
  }
  else {
    uVar10 = extraout_w8_08 == 6;
    if ((bool)uVar10) {
      unaff_x22 = puVar9 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar11 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar9[-0xc0] = (char)uVar11;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar10 = extraout_w8_08 == 7;
      if ((bool)uVar10) {
        unaff_x22 = puVar9 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar11 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar9[-0xc0] = (char)uVar11;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar10 = extraout_w8_08 == 8;
        if ((bool)uVar10) {
          func_0x00010777dce0();
          func_0x00010777d398(plVar24[1]);
          func_0x0001075356bc(puVar9 + -0xb0);
          unaff_x22 = (undefined1 *)((undefined8 *)plVar24[1])[1];
          for (puVar25 = *(undefined1 **)plVar24[1]; uVar10 = puVar25 == unaff_x22, !(bool)uVar10;
              puVar25 = puVar25 + 0x70) {
            puVar4 = puVar25;
            func_0x000107775a54(puVar25,*plVar16);
            *(short *)(puVar9 + -0xc0) = (short)puVar4;
            if (((uint)puVar4 >> 8 & 1) == 0) {
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
          func_0x0001074048e8(puVar9 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar9 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar11 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar9[-0xc0] = (char)uVar11;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar20 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar20;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar9 + -0xd0) = puVar9 + -0x10;
  *(undefined **)(puVar9 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779450; end: 107779473;  */

void FUN_107779450(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 extraout_w8;
  undefined1 uVar14;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar15;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  int extraout_w8_07;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar16;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar17;
  undefined1 *unaff_x22;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar20;
  code *pcVar21;
  undefined8 uVar22;
  byte abStack_1020 [4096];
  
  uVar7 = *(int *)(param_1 + 0xd) == 1;
  if ((bool)uVar7) {
    puVar10 = param_2 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224(puVar10,param_1 + 1);
    func_0x00010777d8d4();
    param_2 = (undefined8 *)*puVar10;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((abStack_1020[0xff0] & 1) == 0) {
      func_0x00010777d724();
      param_1 = puVar10;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      param_1 = puVar10;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    unaff_x30 = (code *)&LAB_1077794e4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_1020 + 0xf30);
  }
  uVar7 = *(int *)(param_1 + 0xd) == 2;
  if ((bool)uVar7) {
    puVar10 = param_2 + 1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224(puVar10,param_1 + 1);
    func_0x00010777d904();
    param_2 = (undefined8 *)*puVar10;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x30) & 1) == 0) {
      func_0x00010777d724();
      param_1 = puVar10;
    }
    else {
      func_0x00010777d80c();
      func_0x00010777d564();
      func_0x00010777d304();
      func_0x00010777d9c8();
      param_1 = puVar10;
    }
    func_0x00010777d9c0();
    func_0x00010777d20c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    unaff_x30 = (code *)&UNK_107779578;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  uVar7 = *(int *)(param_1 + 0xd) == 3;
  if ((bool)uVar7) {
    puVar10 = param_2 + 1;
    param_2 = param_1 + 1;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224(puVar10);
    unaff_x19 = (undefined8 *)((long)register0x00000008 + -0x60);
    func_0x000104c2fe00();
    func_0x00010777d454();
    func_0x00010777d304();
    func_0x00010777dbd0();
    func_0x00010777d20c();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    param_1 = unaff_x19;
    func_0x00010777dbd0();
    unaff_x30 = (code *)&UNK_1077795e4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  uVar7 = *(int *)(param_1 + 0xd) == 4;
  if ((bool)uVar7) {
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224(param_2 + 1,param_1 + 1);
    func_0x00010777d8ec();
    func_0x00010777d824();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x30) & 1) == 0) {
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
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    unaff_x30 = FUN_107779678;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x120);
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined1 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  puVar17 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)((long)register0x00000008 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar7) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    puVar12 = (undefined1 *)unaff_x20[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0x60) & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto LAB_1077797d4;
    }
LAB_1077797e0:
    func_0x00010777d724();
LAB_1077797e4:
    puVar10 = (undefined8 *)((long)register0x00000008 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar7 = extraout_w8_05 == 6;
    if ((bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6c8();
      puVar12 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto LAB_1077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
LAB_1077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto LAB_1077797e4;
    }
    uVar7 = extraout_w8_05 == 7;
    if ((bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6bc();
      puVar12 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto LAB_1077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto LAB_1077797d4;
    }
    uVar7 = extraout_w8_05 == 8;
    if (!(bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6d4();
      puVar12 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto LAB_1077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto LAB_1077797d4;
    }
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072dd514((undefined1 *)((long)register0x00000008 + -0x98));
    func_0x00010777de3c();
    do {
      uVar7 = unaff_x21 == unaff_x24;
      if ((bool)uVar7) {
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x98);
        func_0x0001073fb2d4((undefined1 *)((long)register0x00000008 + -0x110));
        uVar22 = *(undefined8 *)((long)register0x00000008 + -0x110);
        unaff_x19[1] = *(undefined8 *)((long)register0x00000008 + -0x108);
        *unaff_x19 = uVar22;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        func_0x00010777d960();
        func_0x00010726b09c((undefined1 *)((long)register0x00000008 + -0x110));
        goto LAB_107779838;
      }
      puVar12 = (undefined1 *)*unaff_x20;
      func_0x000107323900((undefined1 *)((long)register0x00000008 + -0x110),unaff_x21);
      bVar1 = *(byte *)((long)register0x00000008 + -0xd8);
      unaff_x25 = (ulong)bVar1;
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar12 = (undefined1 *)((long)register0x00000008 + -0x110);
        func_0x0001072d17f4((undefined1 *)((long)register0x00000008 + -0x98));
      }
      func_0x00010724b3d8((undefined1 *)((long)register0x00000008 + -0x110));
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
LAB_107779838:
    puVar10 = (undefined8 *)((long)register0x00000008 + -0x98);
    func_0x00010726e078();
  }
  func_0x00010777d23c(*(undefined8 *)((long)register0x00000008 + -0x58));
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar11 = (undefined8 *)((long)register0x00000008 + -0x98);
  func_0x00010724b3d8();
  puVar20 = &UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar11 + 0xd) == 0) {
    puVar9 = (undefined8 *)(puVar12 + 8);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x250);
    *(undefined8 *)((long)register0x00000008 + -0x150) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x148) = unaff_x27;
    *(undefined8 **)((long)register0x00000008 + -0x140) = puVar10;
    *(undefined8 **)((long)register0x00000008 + -0x138) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x130) = puVar17;
    *(undefined **)((long)register0x00000008 + -0x128) = &UNK_1077798bc;
    puVar17 = (undefined1 *)((long)register0x00000008 + -0x130);
    func_0x00010777d1f4(puVar9,puVar11 + 1);
    *(undefined4 *)((long)register0x00000008 + -0x1e8) = 0;
    puVar12 = (undefined1 *)*puVar9;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0x160) & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar9;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar9;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779964;
    func_0x00010777d638();
    puVar10 = (undefined8 *)((long)register0x00000008 + -0x250);
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 1;
  if ((bool)uVar7) {
    puVar9 = (undefined8 *)(puVar12 + 8);
    puVar11 = puVar11 + 1;
    puVar3 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar10;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar17;
    *(undefined **)(puVar2 + -8) = puVar20;
    puVar17 = puVar2 + -0x10;
    func_0x00010777d1f4();
    puVar2[-0x128] = *(undefined1 *)puVar11;
    *(undefined4 *)(puVar2 + -200) = 1;
    puVar12 = (undefined1 *)*puVar9;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar9;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar9;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779a1c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar10 = puVar3;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 2;
  if ((bool)uVar7) {
    puVar9 = (undefined8 *)(puVar12 + 8);
    puVar11 = puVar11 + 1;
    puVar4 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar10;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar17;
    *(undefined **)(puVar2 + -8) = puVar20;
    puVar17 = puVar2 + -0x10;
    func_0x00010777d1f4();
    *(undefined8 *)(puVar2 + -0x128) = *puVar11;
    *(undefined4 *)(puVar2 + -200) = 2;
    puVar12 = (undefined1 *)*puVar9;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((puVar2[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar11 = puVar9;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar11 = puVar9;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779ad4;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar10 = puVar4;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 3;
  if ((bool)uVar7) {
    puVar9 = puVar11 + 1;
    puVar11 = (undefined8 *)(puVar2 + -0x130);
    puVar5 = puVar2 + -0x130;
    *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x20) = puVar10;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar17;
    *(undefined **)(puVar2 + -8) = puVar20;
    puVar17 = puVar2 + -0x10;
    func_0x00010777d1f4(puVar12 + 8,puVar9);
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
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779b94;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar10 = (undefined8 *)(puVar12 + 8);
    unaff_x21 = puVar5;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 4;
  if ((bool)uVar7) {
    puVar11 = puVar11 + 1;
    puVar6 = (undefined8 *)(puVar2 + -0x130);
    *(undefined8 *)(puVar2 + -0x30) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x27;
    *(undefined8 **)(puVar2 + -0x20) = puVar10;
    *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar17;
    *(undefined **)(puVar2 + -8) = puVar20;
    puVar17 = puVar2 + -0x10;
    func_0x00010777d1f4();
    uVar22 = *puVar11;
    *(undefined8 *)(puVar2 + -0x120) = puVar11[1];
    *(undefined8 *)(puVar2 + -0x128) = uVar22;
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
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779c4c;
    func_0x00010777d638();
    puVar2 = puVar2 + -0x130;
    puVar10 = puVar6;
  }
  puVar12 = puVar2 + -0x150;
  puVar18 = puVar2 + -0x150;
  puVar19 = puVar2 + -0x150;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(ulong *)(puVar2 + -0x48) = unaff_x25;
  *(undefined1 **)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
  *(undefined1 **)(puVar2 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar2 + -0x20) = puVar10;
  *(undefined8 **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar17;
  *(undefined **)(puVar2 + -8) = puVar20;
  puVar17 = puVar2 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(puVar2 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar7) {
    lVar16 = *(long *)(unaff_x21 + 0x10);
    uVar22 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)(puVar2 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)(puVar2 + -0x148) = uVar22;
    if (lVar16 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    *(undefined4 *)(puVar2 + -0xe8) = 5;
    puVar13 = (undefined1 *)puVar10[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = puVar2 + -0x150;
    puVar19 = unaff_x22;
    if ((puVar2[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = puVar2 + -0x150;
      puVar18 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar10 = (undefined8 *)(puVar2 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar19;
  }
  else {
    uVar7 = extraout_w8_06 == 6;
    if ((bool)uVar7) {
      func_0x00010777d6c8();
      puVar13 = (undefined1 *)puVar10[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar19 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar18 = puVar2 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar19 = puVar18;
      goto code_r0x000107779dfc;
    }
    uVar7 = extraout_w8_06 == 7;
    if ((bool)uVar7) {
      func_0x00010777d6bc();
      puVar13 = (undefined1 *)puVar10[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar19 = puVar2 + -0x150;
      if ((puVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar18 = puVar2 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar7 = extraout_w8_06 == 8;
    if (!(bool)uVar7) {
      func_0x00010777d6d4();
      puVar13 = (undefined1 *)puVar10[1];
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
      uVar7 = unaff_x21 == unaff_x24;
      if ((bool)uVar7) {
        puVar13 = puVar2 + -0xe0;
        func_0x000107327958(puVar2 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      FUN_107776804(puVar2 + -0xa0,unaff_x21,*puVar10);
      puVar13 = puVar2 + -0xa0;
      func_0x00010729d394(puVar2 + -0x150);
      func_0x000104c3323c(puVar2 + -0xa0);
      bVar1 = puVar2[-0x110];
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar13 = puVar2 + -0x150;
        func_0x0001072d7f34(puVar2 + -0xe0);
      }
      func_0x000107267ed0(puVar2 + -0x150);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar10 = (undefined8 *)(puVar2 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(puVar2 + -0x58));
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar11 = (undefined8 *)(puVar2 + -0xa0);
  func_0x000107267ed0();
  pcVar21 = (code *)&UNK_107779ed8;
  func_0x00010777d9d0();
  uVar8 = (uint)puVar10;
  uVar15 = SUB81(puVar10,0);
  if (*(int *)(puVar11 + 0xd) == 0) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    puVar12 = puVar2 + -0x210;
    *(undefined1 **)(puVar2 + -0x180) = unaff_x22;
    *(undefined1 **)(puVar2 + -0x178) = unaff_x21;
    *(undefined8 **)(puVar2 + -0x170) = puVar10;
    *(undefined8 **)(puVar2 + -0x168) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x160) = puVar17;
    *(undefined **)(puVar2 + -0x158) = &UNK_107779ed8;
    puVar17 = puVar2 + -0x160;
    func_0x00010777d1f4(puVar9,puVar11 + 1);
    *(undefined4 *)(puVar2 + -0x198) = 0;
    puVar13 = (undefined1 *)*puVar9;
    unaff_x21 = puVar2 + -0x200;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar14 = extraout_w8;
    }
    else {
      puVar2[-0x201] = uVar15;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar14 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar14;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&UNK_107779f6c;
    puVar11 = puVar9;
    func_0x00010777d638();
    unaff_x19 = puVar9;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 1;
  if ((bool)uVar7) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar12 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar12 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar12 + -0x20) = puVar10;
    *(undefined8 **)(puVar12 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar12 + -0x10) = puVar17;
    *(code **)(puVar12 + -8) = pcVar21;
    puVar17 = puVar12 + -0x10;
    func_0x00010777d1f4(puVar9,puVar11 + 1);
    unaff_x21 = puVar12 + -0xb0;
    func_0x00010777dae0();
    puVar13 = (undefined1 *)*puVar9;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar14 = extraout_w8_00;
    }
    else {
      puVar12[-0xb1] = uVar15;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar14 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar14;
    func_0x00010777d1dc();
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    pcVar21 = (code *)&UNK_10777a170;
    puVar11 = puVar9;
    func_0x00010777d638();
    puVar12 = puVar12 + -0xc0;
    unaff_x19 = puVar9;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 2;
  if ((bool)uVar7) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar12 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar12 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar12 + -0x20) = puVar10;
    *(undefined8 **)(puVar12 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar12 + -0x10) = puVar17;
    *(code **)(puVar12 + -8) = pcVar21;
    puVar17 = puVar12 + -0x10;
    func_0x00010777d1f4(puVar9,puVar11 + 1);
    unaff_x21 = puVar12 + -0xb0;
    func_0x00010777dacc();
    puVar13 = (undefined1 *)*puVar9;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar8 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_01;
    }
    else {
      puVar12[-0xb1] = uVar15;
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
    pcVar21 = FUN_10777a208;
    puVar11 = puVar9;
    func_0x00010777d638();
    puVar12 = puVar12 + -0xc0;
    unaff_x19 = puVar9;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 3;
  if ((bool)uVar7) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar12 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar12 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar12 + -0x20) = puVar10;
    *(undefined8 **)(puVar12 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar12 + -0x10) = puVar17;
    *(code **)(puVar12 + -8) = pcVar21;
    puVar17 = puVar12 + -0x10;
    puVar10 = puVar9;
    func_0x00010777d1f4(puVar9,puVar11 + 1);
    func_0x00010777dd10();
    puVar13 = (undefined1 *)*puVar9;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_02;
    }
    else {
      puVar12[-0xb1] = (char)puVar9;
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
    pcVar21 = (code *)&LAB_10777a2a0;
    puVar11 = puVar10;
    func_0x00010777d638();
    puVar12 = puVar12 + -0xc0;
    unaff_x19 = puVar10;
    puVar10 = puVar9;
  }
  uVar7 = *(int *)(puVar11 + 0xd) == 4;
  if ((bool)uVar7) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar12 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar12 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar12 + -0x20) = puVar10;
    *(undefined8 **)(puVar12 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar12 + -0x10) = puVar17;
    *(code **)(puVar12 + -8) = pcVar21;
    puVar17 = puVar12 + -0x10;
    func_0x00010777d1f4(puVar9,puVar11 + 1);
    unaff_x21 = puVar12 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar10 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_03;
    }
    else {
      puVar12[-0xb1] = (char)puVar10;
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
    pcVar21 = (code *)&UNK_10777a338;
    puVar11 = puVar9;
    func_0x00010777d638();
    puVar12 = puVar12 + -0xc0;
    unaff_x19 = puVar9;
  }
  uVar8 = (uint)puVar11;
  *(undefined1 **)(puVar12 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar12 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar12 + -0x20) = puVar10;
  *(undefined8 **)(puVar12 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar12 + -0x10) = puVar17;
  *(code **)(puVar12 + -8) = pcVar21;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar7) {
    func_0x00010777dc50();
    if (extraout_x8_02 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar10 >> 8 & 1) != 0) {
      puVar12[-0xc0] = (char)puVar10;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar15 = extraout_w8_04;
  }
  else {
    uVar7 = extraout_w8_07 == 6;
    if ((bool)uVar7) {
      unaff_x22 = puVar12 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar12[-0xc0] = (char)uVar8;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar7 = extraout_w8_07 == 7;
      if ((bool)uVar7) {
        unaff_x22 = puVar12 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar12[-0xc0] = (char)uVar8;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar7 = extraout_w8_07 == 8;
        if ((bool)uVar7) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar12 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar17 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar7 = puVar17 == unaff_x22, !(bool)uVar7; puVar17 = puVar17 + 0x70) {
            puVar2 = puVar17;
            func_0x000107775a54(puVar17,*puVar10);
            *(short *)(puVar12 + -0xc0) = (short)puVar2;
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
          func_0x0001074048e8(puVar12 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar12 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar8 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar12[-0xc0] = (char)uVar8;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar15 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar15;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar12 + -0xd0) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779678; end: 1077798bb;  */

void FUN_107779678(void)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
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
  undefined8 *unaff_x22;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  code *pcVar21;
  undefined8 uVar22;
  byte abStack_ce0 [2960];
  undefined8 ******ppppppuStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined8 uStack_108;
  byte bStack_d8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_60;
  undefined8 uStack_58;
  
  pbVar6 = auStack_120;
  pppppppuVar18 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777db88();
  func_0x00010777d250();
  uStack_58 = extraout_x8;
  func_0x00010777da78();
  if ((bool)in_ZR) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    puVar13 = (undefined8 *)unaff_x20[1];
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((bStack_60 & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto LAB_1077797d4;
    }
LAB_1077797e0:
    func_0x00010777d724();
LAB_1077797e4:
    pbVar10 = (byte *)&uStack_98;
    func_0x00010724b3d8();
  }
  else {
    in_ZR = extraout_w8_05 == 6;
    if ((bool)in_ZR) {
      unaff_x22 = &uStack_110;
      func_0x00010777d6c8();
      puVar13 = (undefined8 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((bStack_60 & 1) == 0) goto LAB_1077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
LAB_1077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto LAB_1077797e4;
    }
    in_ZR = extraout_w8_05 == 7;
    if ((bool)in_ZR) {
      unaff_x22 = &uStack_110;
      func_0x00010777d6bc();
      puVar13 = (undefined8 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((bStack_60 & 1) == 0) goto LAB_1077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto LAB_1077797d4;
    }
    in_ZR = extraout_w8_05 == 8;
    if (!(bool)in_ZR) {
      unaff_x22 = &uStack_110;
      func_0x00010777d6d4();
      puVar13 = (undefined8 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((bStack_60 & 1) == 0) goto LAB_1077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto LAB_1077797d4;
    }
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072dd514(&uStack_98);
    func_0x00010777de3c();
    do {
      in_ZR = unaff_x21 == unaff_x24;
      if ((bool)in_ZR) {
        puVar13 = &uStack_98;
        func_0x0001073fb2d4(&uStack_110);
        unaff_x19[1] = uStack_108;
        *unaff_x19 = uStack_110;
        uStack_110 = 0;
        uStack_108 = 0;
        func_0x00010777d960();
        func_0x00010726b09c(&uStack_110);
        goto LAB_107779838;
      }
      puVar13 = (undefined8 *)*unaff_x20;
      func_0x000107323900(&uStack_110,unaff_x21);
      bVar1 = bStack_d8;
      unaff_x25 = (ulong)bStack_d8;
      if ((bStack_d8 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar13 = &uStack_110;
        func_0x0001072d17f4(&uStack_98);
      }
      func_0x00010724b3d8(&uStack_110);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
LAB_107779838:
    pbVar10 = (byte *)&uStack_98;
    func_0x00010726e078();
  }
  func_0x00010777d23c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbd0();
  puVar12 = &uStack_98;
  func_0x00010724b3d8();
  puVar20 = &UNK_1077798bc;
  func_0x00010777d9d0();
  if (*(int *)(puVar12 + 0xd) == 0) {
    puVar11 = puVar13 + 1;
    pbVar6 = abStack_ce0 + 0xa90;
    pbVar10 = abStack_ce0 + 0xa90;
    puStack_128 = &UNK_1077798bc;
    ppppppuStack_130 = pppppppuVar18;
    func_0x00010777d1f4(puVar11,puVar12 + 1);
    abStack_ce0[0xaf8] = 0;
    abStack_ce0[0xaf9] = 0;
    abStack_ce0[0xafa] = 0;
    abStack_ce0[0xafb] = 0;
    puVar13 = (undefined8 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((abStack_ce0[0xb80] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779964;
    func_0x00010777d638();
    pppppppuVar18 = &ppppppuStack_130;
  }
  uVar8 = *(int *)(puVar12 + 0xd) == 1;
  if ((bool)uVar8) {
    puVar11 = puVar13 + 1;
    puVar12 = puVar12 + 1;
    puVar2 = (undefined8 *)(pbVar6 + -0x130);
    *(undefined8 *)(pbVar6 + -0x30) = unaff_x28;
    *(undefined8 *)(pbVar6 + -0x28) = unaff_x27;
    *(byte **)(pbVar6 + -0x20) = pbVar10;
    *(undefined8 **)(pbVar6 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar6 + -0x10) = pppppppuVar18;
    *(undefined **)(pbVar6 + -8) = puVar20;
    pppppppuVar18 = (undefined8 *******)(pbVar6 + -0x10);
    func_0x00010777d1f4();
    pbVar6[-0x128] = *(undefined1 *)puVar12;
    *(undefined4 *)(pbVar6 + -200) = 1;
    puVar13 = (undefined8 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar6[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779a1c;
    func_0x00010777d638();
    pbVar6 = pbVar6 + -0x130;
    pbVar10 = (byte *)puVar2;
  }
  uVar8 = *(int *)(puVar12 + 0xd) == 2;
  if ((bool)uVar8) {
    puVar11 = puVar13 + 1;
    puVar12 = puVar12 + 1;
    puVar3 = (undefined8 *)(pbVar6 + -0x130);
    *(undefined8 *)(pbVar6 + -0x30) = unaff_x28;
    *(undefined8 *)(pbVar6 + -0x28) = unaff_x27;
    *(byte **)(pbVar6 + -0x20) = pbVar10;
    *(undefined8 **)(pbVar6 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar6 + -0x10) = pppppppuVar18;
    *(undefined **)(pbVar6 + -8) = puVar20;
    pppppppuVar18 = (undefined8 *******)(pbVar6 + -0x10);
    func_0x00010777d1f4();
    *(undefined8 *)(pbVar6 + -0x128) = *puVar12;
    *(undefined4 *)(pbVar6 + -200) = 2;
    puVar13 = (undefined8 *)*puVar11;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar6[-0x40] & 1) == 0) {
      func_0x00010777d724();
      puVar12 = puVar11;
    }
    else {
      func_0x00010777d6a4();
      func_0x00010777d2ac();
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar12 = puVar11;
    }
    func_0x00010777d8ac();
    func_0x00010777d1dc();
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar20 = &UNK_107779ad4;
    func_0x00010777d638();
    pbVar6 = pbVar6 + -0x130;
    pbVar10 = (byte *)puVar3;
  }
  uVar8 = *(int *)(puVar12 + 0xd) == 3;
  if ((bool)uVar8) {
    puVar11 = puVar12 + 1;
    puVar12 = (undefined8 *)(pbVar6 + -0x130);
    puVar4 = pbVar6 + -0x130;
    *(undefined8 **)(pbVar6 + -0x30) = unaff_x22;
    *(undefined1 **)(pbVar6 + -0x28) = unaff_x21;
    *(byte **)(pbVar6 + -0x20) = pbVar10;
    *(undefined8 **)(pbVar6 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar6 + -0x10) = pppppppuVar18;
    *(undefined **)(pbVar6 + -8) = puVar20;
    pppppppuVar18 = (undefined8 *******)(pbVar6 + -0x10);
    func_0x00010777d1f4(puVar13 + 1,puVar11);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((pbVar6[-0x40] & 1) == 0) {
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
    puVar20 = &UNK_107779b94;
    func_0x00010777d638();
    pbVar6 = pbVar6 + -0x130;
    pbVar10 = (byte *)(puVar13 + 1);
    unaff_x21 = puVar4;
  }
  uVar8 = *(int *)(puVar12 + 0xd) == 4;
  if ((bool)uVar8) {
    puVar12 = puVar12 + 1;
    puVar5 = (undefined8 *)(pbVar6 + -0x130);
    *(undefined8 *)(pbVar6 + -0x30) = unaff_x28;
    *(undefined8 *)(pbVar6 + -0x28) = unaff_x27;
    *(byte **)(pbVar6 + -0x20) = pbVar10;
    *(undefined8 **)(pbVar6 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar6 + -0x10) = pppppppuVar18;
    *(undefined **)(pbVar6 + -8) = puVar20;
    pppppppuVar18 = (undefined8 *******)(pbVar6 + -0x10);
    func_0x00010777d1f4();
    uVar22 = *puVar12;
    *(undefined8 *)(pbVar6 + -0x120) = puVar12[1];
    *(undefined8 *)(pbVar6 + -0x128) = uVar22;
    *(undefined4 *)(pbVar6 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar6[-0x40] & 1) == 0) {
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
    puVar20 = &UNK_107779c4c;
    func_0x00010777d638();
    pbVar6 = pbVar6 + -0x130;
    pbVar10 = (byte *)puVar5;
  }
  puVar7 = pbVar6 + -0x150;
  puVar12 = (undefined8 *)(pbVar6 + -0x150);
  puVar13 = (undefined8 *)(pbVar6 + -0x150);
  *(undefined8 *)(pbVar6 + -0x50) = unaff_x26;
  *(ulong *)(pbVar6 + -0x48) = unaff_x25;
  *(undefined1 **)(pbVar6 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar6 + -0x38) = unaff_x23;
  *(undefined8 **)(pbVar6 + -0x30) = unaff_x22;
  *(undefined1 **)(pbVar6 + -0x28) = unaff_x21;
  *(byte **)(pbVar6 + -0x20) = pbVar10;
  *(undefined8 **)(pbVar6 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar6 + -0x10) = pppppppuVar18;
  *(undefined **)(pbVar6 + -8) = puVar20;
  puVar19 = pbVar6 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(pbVar6 + -0x58) = extraout_x8_01;
  func_0x00010777da78();
  if ((bool)uVar8) {
    lVar17 = *(long *)(unaff_x21 + 0x10);
    uVar22 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)(pbVar6 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)(pbVar6 + -0x148) = uVar22;
    if (lVar17 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    *(undefined4 *)(pbVar6 + -0xe8) = 5;
    puVar14 = *(undefined1 **)((long)pbVar10 + 8);
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = pbVar6 + -0x150;
    puVar13 = unaff_x22;
    if ((pbVar6[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = pbVar6 + -0x150;
      puVar12 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar12 = (undefined8 *)(pbVar6 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar13;
  }
  else {
    uVar8 = extraout_w8_06 == 6;
    if ((bool)uVar8) {
      func_0x00010777d6c8();
      puVar14 = *(undefined1 **)((long)pbVar10 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar13 = (undefined8 *)(pbVar6 + -0x150);
      if ((pbVar6[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar12 = (undefined8 *)(pbVar6 + -0x150);
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar13 = puVar12;
      goto code_r0x000107779dfc;
    }
    uVar8 = extraout_w8_06 == 7;
    if ((bool)uVar8) {
      func_0x00010777d6bc();
      puVar14 = *(undefined1 **)((long)pbVar10 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar13 = (undefined8 *)(pbVar6 + -0x150);
      if ((pbVar6[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar12 = (undefined8 *)(pbVar6 + -0x150);
      goto code_r0x000107779dec;
    }
    uVar8 = extraout_w8_06 == 8;
    if (!(bool)uVar8) {
      func_0x00010777d6d4();
      puVar14 = *(undefined1 **)((long)pbVar10 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((pbVar6[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(pbVar6 + -0xd8) = 0;
    *(undefined8 *)(pbVar6 + -0xd0) = 0;
    *(undefined8 *)(pbVar6 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072ac134(pbVar6 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar8 = unaff_x21 == unaff_x24;
      if ((bool)uVar8) {
        puVar14 = pbVar6 + -0xe0;
        func_0x000107327958(pbVar6 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      FUN_107776804(pbVar6 + -0xa0,unaff_x21,*(undefined8 *)pbVar10);
      puVar14 = pbVar6 + -0xa0;
      func_0x00010729d394(pbVar6 + -0x150);
      func_0x000104c3323c(pbVar6 + -0xa0);
      bVar1 = pbVar6[-0x110];
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar14 = pbVar6 + -0x150;
        func_0x0001072d7f34(pbVar6 + -0xe0);
      }
      func_0x000107267ed0(pbVar6 + -0x150);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar12 = (undefined8 *)(pbVar6 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar6 + -0x58));
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar13 = (undefined8 *)(pbVar6 + -0xa0);
  func_0x000107267ed0();
  pcVar21 = (code *)&UNK_107779ed8;
  func_0x00010777d9d0();
  uVar9 = (uint)puVar12;
  uVar16 = SUB81(puVar12,0);
  if (*(int *)(puVar13 + 0xd) == 0) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    puVar7 = pbVar6 + -0x210;
    *(undefined8 **)(pbVar6 + -0x180) = unaff_x22;
    *(undefined1 **)(pbVar6 + -0x178) = unaff_x21;
    *(undefined8 **)(pbVar6 + -0x170) = puVar12;
    *(undefined8 **)(pbVar6 + -0x168) = unaff_x19;
    *(undefined1 **)(pbVar6 + -0x160) = puVar19;
    *(undefined **)(pbVar6 + -0x158) = &UNK_107779ed8;
    puVar19 = pbVar6 + -0x160;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    *(undefined4 *)(pbVar6 + -0x198) = 0;
    puVar14 = (undefined1 *)*puVar11;
    unaff_x21 = pbVar6 + -0x200;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8;
    }
    else {
      pbVar6[-0x201] = uVar16;
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
    pcVar21 = (code *)&UNK_107779f6c;
    puVar13 = puVar11;
    func_0x00010777d638();
    unaff_x19 = puVar11;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 1;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined8 **)(puVar7 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = puVar12;
    *(undefined8 **)(puVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x10) = puVar19;
    *(code **)(puVar7 + -8) = pcVar21;
    puVar19 = puVar7 + -0x10;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    unaff_x21 = puVar7 + -0xb0;
    func_0x00010777dae0();
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_00;
    }
    else {
      puVar7[-0xb1] = uVar16;
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
    pcVar21 = (code *)&UNK_10777a170;
    puVar13 = puVar11;
    func_0x00010777d638();
    puVar7 = puVar7 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 2;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined8 **)(puVar7 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = puVar12;
    *(undefined8 **)(puVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x10) = puVar19;
    *(code **)(puVar7 + -8) = pcVar21;
    puVar19 = puVar7 + -0x10;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    unaff_x21 = puVar7 + -0xb0;
    func_0x00010777dacc();
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_01;
    }
    else {
      puVar7[-0xb1] = uVar16;
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
    pcVar21 = FUN_10777a208;
    puVar13 = puVar11;
    func_0x00010777d638();
    puVar7 = puVar7 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 3;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined8 **)(puVar7 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = puVar12;
    *(undefined8 **)(puVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x10) = puVar19;
    *(code **)(puVar7 + -8) = pcVar21;
    puVar19 = puVar7 + -0x10;
    puVar12 = puVar11;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    func_0x00010777dd10();
    puVar14 = (undefined1 *)*puVar11;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar11 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_02;
    }
    else {
      puVar7[-0xb1] = (char)puVar11;
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
    pcVar21 = (code *)&LAB_10777a2a0;
    puVar13 = puVar12;
    func_0x00010777d638();
    puVar7 = puVar7 + -0xc0;
    unaff_x19 = puVar12;
    puVar12 = puVar11;
  }
  uVar8 = *(int *)(puVar13 + 0xd) == 4;
  if ((bool)uVar8) {
    puVar11 = (undefined8 *)(puVar14 + 8);
    *(undefined8 **)(puVar7 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = puVar12;
    *(undefined8 **)(puVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x10) = puVar19;
    *(code **)(puVar7 + -8) = pcVar21;
    puVar19 = puVar7 + -0x10;
    func_0x00010777d1f4(puVar11,puVar13 + 1);
    unaff_x21 = puVar7 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar12 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar16 = extraout_w8_03;
    }
    else {
      puVar7[-0xb1] = (char)puVar12;
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
    pcVar21 = (code *)&UNK_10777a338;
    puVar13 = puVar11;
    func_0x00010777d638();
    puVar7 = puVar7 + -0xc0;
    unaff_x19 = puVar11;
  }
  uVar9 = (uint)puVar13;
  *(undefined8 **)(puVar7 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar7 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar7 + -0x20) = puVar12;
  *(undefined8 **)(puVar7 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar7 + -0x10) = puVar19;
  *(code **)(puVar7 + -8) = pcVar21;
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
      puVar7[-0xc0] = (char)puVar12;
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
      unaff_x22 = (undefined8 *)(puVar7 + -0xb0);
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar7[-0xc0] = (char)uVar9;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar8 = extraout_w8_07 == 7;
      if ((bool)uVar8) {
        unaff_x22 = (undefined8 *)(puVar7 + -0xb0);
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar7[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar8 = extraout_w8_07 == 8;
        if ((bool)uVar8) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar7 + -0xb0);
          unaff_x22 = (undefined8 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar13 = (undefined8 *)**(undefined8 **)(unaff_x21 + 8);
              uVar8 = puVar13 == unaff_x22, !(bool)uVar8; puVar13 = puVar13 + 0xe) {
            puVar11 = puVar13;
            func_0x000107775a54(puVar13,*puVar12);
            *(short *)(puVar7 + -0xc0) = (short)puVar11;
            if (((uint)puVar11 >> 8 & 1) == 0) {
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
          func_0x0001074048e8(puVar7 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = (undefined8 *)(puVar7 + -0xb0);
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar9 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar7[-0xc0] = (char)uVar9;
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
  func_0x00010726af18(unaff_x22 + 1);
  func_0x00010777d638();
  *(undefined1 **)(puVar7 + -0xd0) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779af8; end: 107779b93;  */

void FUN_107779af8(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 extraout_w8;
  undefined1 uVar12;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 uVar13;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 extraout_w8_04;
  int extraout_w8_05;
  int extraout_w8_06;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *unaff_x22;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar18;
  undefined *puVar19;
  code *pcVar20;
  byte abStack_830 [1496];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_1f8;
  byte bStack_170;
  undefined8 ******ppppppuStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  long lStack_120;
  byte bStack_40;
  
  pbVar2 = auStack_130;
  puVar6 = auStack_130;
  puVar15 = auStack_130;
  puVar14 = auStack_130;
  puVar10 = auStack_130;
  pppppppuVar18 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  func_0x0001072ddd58();
  func_0x00010777d4cc();
  func_0x00010777d6b0();
  func_0x00010777d928();
  func_0x00010777d640();
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
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d6e0();
  func_0x00010777d8ac();
  puVar19 = &UNK_107779b94;
  func_0x00010777d638();
  uVar4 = *(int *)(puVar6 + 0x68) == 4;
  if ((bool)uVar4) {
    puVar7 = (undefined8 *)(puVar6 + 8);
    pbVar2 = abStack_830 + 0x5d0;
    param_1 = abStack_830 + 0x5d0;
    puStack_138 = &UNK_107779b94;
    ppppppuStack_140 = pppppppuVar18;
    func_0x00010777d1f4();
    uStack_250 = puVar7[1];
    uStack_258 = *puVar7;
    uStack_1f8 = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((bStack_170 & 1) == 0) {
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
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar19 = &UNK_107779c4c;
    func_0x00010777d638();
    pppppppuVar18 = &ppppppuStack_140;
  }
  puVar3 = pbVar2 + -0x150;
  puVar16 = pbVar2 + -0x150;
  puVar17 = pbVar2 + -0x150;
  *(undefined8 *)(pbVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(pbVar2 + -0x48) = unaff_x25;
  *(undefined1 **)(pbVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar2 + -0x38) = unaff_x23;
  *(undefined1 **)(pbVar2 + -0x30) = unaff_x22;
  *(undefined1 **)(pbVar2 + -0x28) = auStack_130;
  *(byte **)(pbVar2 + -0x20) = param_1;
  *(undefined8 **)(pbVar2 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar2 + -0x10) = pppppppuVar18;
  *(undefined **)(pbVar2 + -8) = puVar19;
  puVar6 = pbVar2 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(pbVar2 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar4) {
    *(long *)(pbVar2 + -0x140) = lStack_120;
    *(undefined8 *)(pbVar2 + -0x148) = uStack_128;
    if (lStack_120 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    *(undefined4 *)(pbVar2 + -0xe8) = 5;
    puVar11 = *(undefined1 **)((long)param_1 + 8);
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    puVar10 = pbVar2 + -0x150;
    puVar17 = unaff_x22;
    if ((pbVar2[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar14 = pbVar2 + -0x150;
      puVar16 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
    puVar15 = puVar10;
code_r0x000107779dfc:
    puVar7 = (undefined8 *)(pbVar2 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar17;
  }
  else {
    uVar4 = extraout_w8_05 == 6;
    if ((bool)uVar4) {
      func_0x00010777d6c8();
      puVar11 = *(undefined1 **)((long)param_1 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar10 = auStack_130;
      puVar17 = pbVar2 + -0x150;
      if ((pbVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar14 = auStack_130;
      puVar16 = pbVar2 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar15 = puVar14;
      puVar17 = puVar16;
      goto code_r0x000107779dfc;
    }
    uVar4 = extraout_w8_05 == 7;
    if ((bool)uVar4) {
      func_0x00010777d6bc();
      puVar11 = *(undefined1 **)((long)param_1 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar10 = auStack_130;
      puVar17 = pbVar2 + -0x150;
      if ((pbVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar14 = auStack_130;
      puVar16 = pbVar2 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar4 = extraout_w8_05 == 8;
    if (!(bool)uVar4) {
      func_0x00010777d6d4();
      puVar11 = *(undefined1 **)((long)param_1 + 8);
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((pbVar2[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(pbVar2 + -0xd8) = 0;
    *(undefined8 *)(pbVar2 + -0xd0) = 0;
    *(undefined8 *)(pbVar2 + -0xe0) = 0;
    func_0x00010777d398(uStack_128);
    func_0x0001072ac134(pbVar2 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar4 = puVar15 == unaff_x24;
      if ((bool)uVar4) {
        puVar11 = pbVar2 + -0xe0;
        func_0x000107327958(pbVar2 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      FUN_107776804(pbVar2 + -0xa0,puVar15,*(undefined8 *)param_1);
      puVar11 = pbVar2 + -0xa0;
      func_0x00010729d394(pbVar2 + -0x150);
      func_0x000104c3323c(pbVar2 + -0xa0);
      bVar1 = pbVar2[-0x110];
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar11 = pbVar2 + -0x150;
        func_0x0001072d7f34(pbVar2 + -0xe0);
      }
      func_0x000107267ed0(pbVar2 + -0x150);
      puVar15 = puVar15 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar7 = (undefined8 *)(pbVar2 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar2 + -0x58));
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar8 = (undefined8 *)(pbVar2 + -0xa0);
  func_0x000107267ed0();
  pcVar20 = (code *)&UNK_107779ed8;
  func_0x00010777d9d0();
  uVar5 = (uint)puVar7;
  uVar13 = SUB81(puVar7,0);
  if (*(int *)(puVar8 + 0xd) == 0) {
    puVar9 = (undefined8 *)(puVar11 + 8);
    puVar3 = pbVar2 + -0x210;
    *(undefined1 **)(pbVar2 + -0x180) = unaff_x22;
    *(undefined1 **)(pbVar2 + -0x178) = puVar15;
    *(undefined8 **)(pbVar2 + -0x170) = puVar7;
    *(undefined8 **)(pbVar2 + -0x168) = unaff_x19;
    *(undefined1 **)(pbVar2 + -0x160) = puVar6;
    *(undefined **)(pbVar2 + -0x158) = &UNK_107779ed8;
    puVar6 = pbVar2 + -0x160;
    func_0x00010777d1f4(puVar9,puVar8 + 1);
    *(undefined4 *)(pbVar2 + -0x198) = 0;
    puVar11 = (undefined1 *)*puVar9;
    puVar15 = pbVar2 + -0x200;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar12 = extraout_w8;
    }
    else {
      pbVar2[-0x201] = uVar13;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar12 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar12;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    pcVar20 = (code *)&UNK_107779f6c;
    puVar8 = puVar9;
    func_0x00010777d638();
    unaff_x19 = puVar9;
  }
  uVar4 = *(int *)(puVar8 + 0xd) == 1;
  if ((bool)uVar4) {
    puVar9 = (undefined8 *)(puVar11 + 8);
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar3 + -0x28) = puVar15;
    *(undefined8 **)(puVar3 + -0x20) = puVar7;
    *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar6;
    *(code **)(puVar3 + -8) = pcVar20;
    puVar6 = puVar3 + -0x10;
    func_0x00010777d1f4(puVar9,puVar8 + 1);
    puVar15 = puVar3 + -0xb0;
    func_0x00010777dae0();
    puVar11 = (undefined1 *)*puVar9;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar12 = extraout_w8_00;
    }
    else {
      puVar3[-0xb1] = uVar13;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar12 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar12;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    pcVar20 = (code *)&UNK_10777a170;
    puVar8 = puVar9;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x19 = puVar9;
  }
  uVar4 = *(int *)(puVar8 + 0xd) == 2;
  if ((bool)uVar4) {
    puVar9 = (undefined8 *)(puVar11 + 8);
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar3 + -0x28) = puVar15;
    *(undefined8 **)(puVar3 + -0x20) = puVar7;
    *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar6;
    *(code **)(puVar3 + -8) = pcVar20;
    puVar6 = puVar3 + -0x10;
    func_0x00010777d1f4(puVar9,puVar8 + 1);
    puVar15 = puVar3 + -0xb0;
    func_0x00010777dacc();
    puVar11 = (undefined1 *)*puVar9;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar5 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar13 = extraout_w8_01;
    }
    else {
      puVar3[-0xb1] = uVar13;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar13 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar13;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    pcVar20 = FUN_10777a208;
    puVar8 = puVar9;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x19 = puVar9;
  }
  uVar4 = *(int *)(puVar8 + 0xd) == 3;
  if ((bool)uVar4) {
    puVar9 = (undefined8 *)(puVar11 + 8);
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar3 + -0x28) = puVar15;
    *(undefined8 **)(puVar3 + -0x20) = puVar7;
    *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar6;
    *(code **)(puVar3 + -8) = pcVar20;
    puVar6 = puVar3 + -0x10;
    puVar7 = puVar9;
    func_0x00010777d1f4(puVar9,puVar8 + 1);
    func_0x00010777dd10();
    puVar11 = (undefined1 *)*puVar9;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar13 = extraout_w8_02;
    }
    else {
      puVar3[-0xb1] = (char)puVar9;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar13 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar13;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    pcVar20 = (code *)&LAB_10777a2a0;
    puVar8 = puVar7;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x19 = puVar7;
    puVar7 = puVar9;
  }
  uVar4 = *(int *)(puVar8 + 0xd) == 4;
  if ((bool)uVar4) {
    puVar9 = (undefined8 *)(puVar11 + 8);
    *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar3 + -0x28) = puVar15;
    *(undefined8 **)(puVar3 + -0x20) = puVar7;
    *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar6;
    *(code **)(puVar3 + -8) = pcVar20;
    puVar6 = puVar3 + -0x10;
    func_0x00010777d1f4(puVar9,puVar8 + 1);
    puVar15 = puVar3 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar13 = extraout_w8_03;
    }
    else {
      puVar3[-0xb1] = (char)puVar7;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar13 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar13;
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return;
    }
    ___stack_chk_fail();
    pcVar20 = (code *)&UNK_10777a338;
    puVar8 = puVar9;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x19 = puVar9;
  }
  uVar5 = (uint)puVar8;
  *(undefined1 **)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = puVar15;
  *(undefined8 **)(puVar3 + -0x20) = puVar7;
  *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar6;
  *(code **)(puVar3 + -8) = pcVar20;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar4) {
    func_0x00010777dc50();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar7 >> 8 & 1) != 0) {
      puVar3[-0xc0] = (char)puVar7;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar13 = extraout_w8_04;
  }
  else {
    uVar4 = extraout_w8_06 == 6;
    if ((bool)uVar4) {
      unaff_x22 = puVar3 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar5 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar3[-0xc0] = (char)uVar5;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar4 = extraout_w8_06 == 7;
      if ((bool)uVar4) {
        unaff_x22 = puVar3 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar5 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar3[-0xc0] = (char)uVar5;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar4 = extraout_w8_06 == 8;
        if ((bool)uVar4) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(puVar15 + 8));
          func_0x0001075356bc(puVar3 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(puVar15 + 8))[1];
          for (puVar15 = (undefined1 *)**(undefined8 **)(puVar15 + 8); uVar4 = puVar15 == unaff_x22,
              !(bool)uVar4; puVar15 = puVar15 + 0x70) {
            puVar10 = puVar15;
            func_0x000107775a54(puVar15,*puVar7);
            *(short *)(puVar3 + -0xc0) = (short)puVar10;
            if (((uint)puVar10 >> 8 & 1) == 0) {
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
          func_0x0001074048e8(puVar3 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar3 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar5 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar3[-0xc0] = (char)uVar5;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar13 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar13;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779fd0; end: 107779fff;  */

undefined8 * FUN_107779fd0(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010777a000(param_1,param_2,param_2 + param_3,param_3);
  return param_1;
}



/* Entry: 10777a208; end: 10777a22b;  */

void FUN_10777a208(long *param_1,long param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 extraout_w8;
  undefined1 uVar5;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  int extraout_w8_02;
  long extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar6;
  undefined1 *unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_240 [528];
  
  uVar1 = (int)param_1[0xd] == 3;
  if ((bool)uVar1) {
    unaff_x20 = (long *)(param_2 + 8);
    unaff_x29 = &stack0xfffffffffffffff0;
    plVar3 = unaff_x20;
    func_0x00010777d1f4(unaff_x20,param_1 + 1);
    func_0x00010777dd10();
    param_2 = *unaff_x20;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar5 = extraout_w8;
    }
    else {
      auStack_240[399] = SUB81(unaff_x20,0);
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar5 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = &LAB_10777a2a0;
    param_1 = plVar3;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(auStack_240 + 0x180);
    unaff_x19 = plVar3;
  }
  uVar1 = (int)param_1[0xd] == 4;
  if ((bool)uVar1) {
    plVar3 = (long *)(param_2 + 8);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(plVar3,param_1 + 1);
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar5 = extraout_w8_00;
    }
    else {
      *(char *)((long)register0x00000008 + -0xb1) = (char)unaff_x20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar5 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = &UNK_10777a338;
    param_1 = plVar3;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar3;
  }
  uVar2 = (uint)param_1;
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar1) {
    func_0x00010777dc50();
    if (extraout_x8 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dbf0();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) != 0) {
      *(char *)((long)register0x00000008 + -0xc0) = (char)unaff_x20;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar5 = extraout_w8_01;
  }
  else {
    uVar1 = extraout_w8_02 == 6;
    if ((bool)uVar1) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xb0);
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar2 >> 8 & 1) == 0) goto code_r0x00010777a468;
      *(char *)((long)register0x00000008 + -0xc0) = (char)uVar2;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar1 = extraout_w8_02 == 7;
      if ((bool)uVar1) {
        unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar2 >> 8 & 1) == 0) goto code_r0x00010777a468;
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar2;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar1 = extraout_w8_02 == 8;
        if ((bool)uVar1) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc((undefined1 *)((long)register0x00000008 + -0xb0));
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar6 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8); uVar1 = puVar6 == unaff_x22,
              !(bool)uVar1; puVar6 = puVar6 + 0x70) {
            puVar4 = puVar6;
            func_0x000107775a54(puVar6,*unaff_x20);
            *(short *)((long)register0x00000008 + -0xc0) = (short)puVar4;
            if (((uint)puVar4 >> 8 & 1) == 0) {
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
          func_0x0001074048e8((undefined1 *)((long)register0x00000008 + -0xb0));
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = (undefined1 *)((long)register0x00000008 + -0xb0);
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar2 >> 8 & 1) == 0) goto code_r0x00010777a468;
        *(char *)((long)register0x00000008 + -0xc0) = (char)uVar2;
        func_0x00010777d400();
        func_0x000107779f90();
      }
    }
code_r0x00010777a490:
    func_0x00010777d2c0();
    func_0x0001073bcebc();
    uVar5 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar5;
code_r0x00010777a4a0:
  func_0x00010777d1dc();
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 10777a614; end: 10777a673;  */

undefined1  [16] FUN_10777a614(void)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  long extraout_x9;
  int extraout_w10;
  ulong unaff_x19;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  func_0x00010777d298();
  func_0x00010777de10();
  func_0x00010777d940();
  func_0x00010777d380();
  uVar4 = unaff_x19 & 0x1ffffff00;
  uVar2 = unaff_x19;
  if (unaff_x19 < 0x100000001) {
    uVar2 = 0x100000000;
  }
  uVar3 = unaff_x19 >> 0x20;
  bVar1 = uVar3 == 0;
  if (bVar1) {
    uVar4 = 0;
  }
  func_0x00010777d490(uVar2);
  if (bVar1) {
    uVar2 = uVar4 & 0xffffffffffffff00 | extraout_x8 & 0xff;
  }
  else {
    ___stack_chk_fail();
    func_0x00010777d380();
    func_0x00010777d638();
    func_0x00010777d31c(uVar4);
    switch(*(int *)(uVar4 + 0x68)) {
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
      if (*(int *)(uVar4 + 0x68) == 8) {
        func_0x00010777de64();
        FUN_1075726b8();
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
    uVar2 = unaff_x19;
    if (unaff_x19 < 0x100000001) {
      uVar2 = 0x100000000;
    }
    uVar3 = unaff_x19 >> 0x20;
    bVar1 = uVar3 == 0;
    if (bVar1) {
      uVar4 = 0;
    }
    func_0x00010777d490(uVar2,uVar4);
    if (!bVar1) {
      ___stack_chk_fail();
      func_0x00010777d380();
      func_0x00010777d638();
      func_0x00010777a7d4();
      auVar5._8_8_ = uVar3 & 0xffffffffff;
      auVar5._0_8_ = uVar4;
      return auVar5;
    }
    uVar2 = uVar4 & 0xffffffffffffff00 | extraout_x8_00 & 0xff;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Entry: 10777aad0; end: 10777ab27;  */

long * FUN_10777aad0(long *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar5;
  undefined1 in_ZR;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
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
  undefined1 extraout_w8_10;
  undefined1 extraout_w8_11;
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
  undefined8 *******pppppppuVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  char acStack_9cc [2300];
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [20];
  byte bStack_9c;
  char *pcVar4;
  
  pcVar4 = auStack_b0;
  pppppppuVar13 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d224();
  func_0x00010777d8d4();
  plVar7 = (long *)*param_1;
  func_0x00010777d484();
  func_0x00010777d648();
  if ((bStack_9c & 1) == 0) {
    func_0x00010777d748();
    uVar6 = extraout_w8_00;
  }
  else {
    func_0x00010777d410();
    uVar6 = extraout_w8;
  }
  unaff_x19[0x14] = uVar6;
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d380();
  puVar15 = &UNK_10777ab28;
  func_0x00010777d638();
  uVar6 = (int)param_1[0xd] == 2;
  if ((bool)uVar6) {
    pcVar4 = acStack_9cc + 0x86c;
    puStack_b8 = &UNK_10777ab28;
    ppppppuStack_c0 = pppppppuVar13;
    func_0x00010777d224(plVar7,param_1 + 1);
    func_0x00010777d904();
    plVar8 = (long *)*plVar7;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((acStack_9cc[0x880] & 1U) == 0) {
      func_0x00010777d748();
      param_1 = plVar7;
      plVar7 = plVar8;
      uVar9 = extraout_w8_02;
    }
    else {
      func_0x00010777d410();
      param_1 = plVar7;
      plVar7 = plVar8;
      uVar9 = extraout_w8_01;
    }
    unaff_x19[0x14] = uVar9;
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    puVar15 = &UNK_10777aba4;
    func_0x00010777d638();
    pppppppuVar13 = &ppppppuStack_c0;
  }
  uVar6 = (int)param_1[0xd] == 3;
  plVar8 = plVar7;
  if ((bool)uVar6) {
    plVar8 = param_1 + 1;
    *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
    *(undefined8 *)(pcVar4 + -0x28) = unaff_x21;
    *(long **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
    *(undefined **)(pcVar4 + -8) = puVar15;
    pppppppuVar13 = (undefined8 *******)(pcVar4 + -0x10);
    param_1 = plVar7;
    func_0x00010777d1f4(plVar7,plVar8);
    func_0x00010777dd3c();
    plVar8 = (long *)*plVar7;
    func_0x00010777d484();
    func_0x00010777d640();
    if ((pcVar4[-0xac] & 1U) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8_04;
    }
    else {
      func_0x00010777d410();
      uVar9 = extraout_w8_03;
    }
    unaff_x19[0x14] = uVar9;
    func_0x00010777d1dc();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d38c();
    puVar15 = &UNK_10777ac28;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xc0;
    unaff_x20 = plVar7;
  }
  uVar6 = (int)param_1[0xd] == 4;
  if ((bool)uVar6) {
    *(long **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
    *(undefined **)(pcVar4 + -8) = puVar15;
    pppppppuVar13 = (undefined8 *******)(pcVar4 + -0x10);
    func_0x00010777d224(plVar8,param_1 + 1);
    func_0x00010777d8ec();
    plVar7 = (long *)*plVar8;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((pcVar4[-0x9c] & 1U) == 0) {
      func_0x00010777d748();
      param_1 = plVar8;
      plVar8 = plVar7;
      uVar9 = extraout_w8_06;
    }
    else {
      func_0x00010777d410();
      param_1 = plVar8;
      plVar8 = plVar7;
      uVar9 = extraout_w8_05;
    }
    unaff_x19[0x14] = uVar9;
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    puVar15 = &UNK_10777aca4;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  uVar6 = (int)param_1[0xd] == 5;
  if ((bool)uVar6) {
    param_1 = param_1 + 1;
    *(long **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
    *(undefined **)(pcVar4 + -8) = puVar15;
    pppppppuVar13 = (undefined8 *******)(pcVar4 + -0x10);
    func_0x00010777d224();
    lVar10 = param_1[1];
    lVar17 = *param_1;
    *(long *)(pcVar4 + -0x88) = param_1[1];
    *(long *)(pcVar4 + -0x90) = lVar17;
    param_1 = plVar8;
    if (lVar10 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d484();
    func_0x00010777d648();
    if ((pcVar4[-0x9c] & 1U) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8_08;
    }
    else {
      func_0x00010777d410();
      uVar9 = extraout_w8_07;
    }
    unaff_x19[0x14] = uVar9;
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d380();
    puVar15 = &UNK_10777ad3c;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  puVar3 = pcVar4 + -0xc0;
  *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(pcVar4 + -0x28) = unaff_x21;
  *(long **)(pcVar4 + -0x20) = unaff_x20;
  *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
  *(undefined **)(pcVar4 + -8) = puVar15;
  puVar14 = pcVar4 + -0x10;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar6 = iVar2 == 6;
  if ((bool)uVar6) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    plVar7 = (long *)*unaff_x20;
    func_0x00010777d484();
  }
  else {
    uVar6 = iVar2 == 7;
    if ((bool)uVar6) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      plVar7 = (long *)*unaff_x20;
      func_0x00010777d484();
    }
    else {
      uVar6 = iVar2 == 8;
      if ((bool)uVar6) {
        func_0x00010777d9ac();
        FUN_1075726b8();
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
  if ((pcVar4[-0xac] & 1U) == 0) {
    func_0x00010777d748();
    uVar9 = extraout_w8_10;
  }
  else {
    func_0x00010777d410();
    uVar9 = extraout_w8_09;
  }
  unaff_x19[0x14] = uVar9;
  func_0x00010777d1dc();
  if ((bool)uVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  pcVar16 = (code *)&UNK_10777ae10;
  func_0x00010777d638();
  if ((int)param_1[0xd] == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    return param_1;
  }
  uVar6 = (int)param_1[0xd] == 1;
  if ((bool)uVar6) {
    plVar8 = param_1 + 1;
    puVar3 = pcVar4 + -0x170;
    *(long **)(pcVar4 + -0xe0) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0xd8) = unaff_x19;
    *(undefined1 **)(pcVar4 + -0xd0) = puVar14;
    *(undefined **)(pcVar4 + -200) = &UNK_10777ae10;
    puVar14 = pcVar4 + -0xd0;
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pcVar4[-0x160] & 1U) == 0) {
      func_0x00010777db94();
      param_1 = plVar7;
      plVar7 = plVar8;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar7;
      plVar7 = plVar8;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar16 = (code *)&UNK_10777aeac;
    func_0x00010777d638();
  }
  uVar6 = (int)param_1[0xd] == 2;
  if ((bool)uVar6) {
    plVar8 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(code **)(puVar3 + -8) = pcVar16;
    puVar14 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar7;
      plVar7 = plVar8;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar7;
      plVar7 = plVar8;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar16 = (code *)&UNK_10777af30;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar6 = (int)param_1[0xd] == 3;
  plVar8 = plVar7;
  if ((bool)uVar6) {
    plVar8 = param_1 + 1;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(code **)(puVar3 + -8) = pcVar16;
    puVar14 = puVar3 + -0x10;
    param_1 = plVar7;
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
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar16 = FUN_10777afbc;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x20 = plVar7;
  }
  uVar6 = (int)param_1[0xd] == 4;
  if ((bool)uVar6) {
    plVar7 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(code **)(puVar3 + -8) = pcVar16;
    puVar14 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      param_1 = plVar8;
      plVar8 = plVar7;
    }
    else {
      func_0x00010777d4d8();
      param_1 = plVar8;
      plVar8 = plVar7;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar16 = (code *)&LAB_10777b040;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar6 = (int)param_1[0xd] == 5;
  if ((bool)uVar6) {
    plVar7 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(code **)(puVar3 + -8) = pcVar16;
    puVar14 = puVar3 + -0x10;
    func_0x00010777d224();
    lVar10 = plVar7[1];
    lVar17 = *plVar7;
    *(long *)(puVar3 + -0x88) = plVar7[1];
    *(long *)(puVar3 + -0x90) = lVar17;
    param_1 = plVar8;
    plVar8 = plVar7;
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
    if ((bool)uVar6) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar16 = (code *)&UNK_10777b0e0;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  puVar5 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
  *(long **)(puVar3 + -0x20) = unaff_x20;
  *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar14;
  *(code **)(puVar3 + -8) = pcVar16;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar6 = iVar2 == 6;
  if ((bool)uVar6) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar6 = iVar2 == 7;
    if ((bool)uVar6) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar6 = iVar2 == 8;
      if ((bool)uVar6) {
        func_0x00010777d9ac();
        FUN_1075726b8();
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
  if ((bool)uVar6) {
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
    plVar7 = (long *)(puVar3 + -0x150);
    func_0x00010726af18(plVar7);
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return plVar7;
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
    bVar1 = (ulong)plVar8 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8_00 = (int)plVar8;
      extraout_x8_00[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8_00 = 0;
    }
    *(bool *)(extraout_x8_00 + 5) = bVar1;
    return plVar8;
  }
  func_0x00010777d490();
  if (!(bool)uVar6) goto code_r0x00010777b254;
  uVar12 = *(undefined8 *)(puVar3 + -0xe0);
  puVar11 = *(undefined8 **)(puVar3 + -0xd8);
  *(undefined8 *)(puVar3 + -0xe0) = uVar12;
  *(undefined8 **)(puVar3 + -0xd8) = puVar11;
  *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
  *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
  puVar14 = puVar3 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9_00;
  uVar6 = (int)param_1[0xd] == 1;
  if ((bool)uVar6) {
    puVar11 = (undefined8 *)(puVar3 + -0x158);
    puVar3[-0x150] = (char)param_1[1];
    *(undefined4 *)(puVar3 + -0xf0) = 1;
    func_0x00010777dd30();
    param_1 = (long *)(puVar3 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    pcVar16 = FUN_10777b31c;
    func_0x00010777d638();
    puVar5 = puVar3 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar6) goto code_r0x00010777b310;
    puVar14 = *(undefined1 **)(puVar3 + -0xd0);
    pcVar16 = *(code **)(puVar3 + -200);
    uVar12 = *(undefined8 *)(puVar3 + -0xe0);
    puVar11 = *(undefined8 **)(puVar3 + -0xd8);
  }
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar5 + -0x28) = puVar3 + -0xa8;
  *(undefined8 *)(puVar5 + -0x20) = uVar12;
  *(undefined8 **)(puVar5 + -0x18) = puVar11;
  *(undefined1 **)(puVar5 + -0x10) = puVar14;
  *(code **)(puVar5 + -8) = pcVar16;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar6 = iVar2 == 2;
  if ((bool)uVar6) {
    *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar5 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar6 = iVar2 == 3;
    if ((bool)uVar6) {
      param_1 = (long *)(puVar5 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar6 = iVar2 == 4;
      if ((bool)uVar6) {
        uVar18 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar5 + -0xa0) = uVar18;
        *(undefined4 *)(puVar5 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar10 = *(long *)(extraout_x9_01 + 0x10);
        uVar18 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar5 + -0xa0) = uVar18;
        uVar6 = 1;
        if (lVar10 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_01 != 0);
        }
        *(undefined4 *)(puVar5 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar6 = iVar2 == 6;
        if ((bool)uVar6) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar6 = iVar2 == 7;
          if ((bool)uVar6) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar6 = iVar2 == 8;
            if ((bool)uVar6) {
              func_0x00010777d9ac();
              FUN_1075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar6 = puVar5[-0xac] == '\x01';
              if ((bool)uVar6) {
                uVar18 = *(undefined8 *)(puVar5 + -0xbc);
                puVar11[1] = *(undefined8 *)(puVar5 + -0xb4);
                *puVar11 = uVar18;
                *(undefined4 *)(puVar11 + 2) = 1;
                uVar9 = 1;
              }
              else {
                func_0x00010777d748();
                uVar9 = extraout_w8_11;
              }
              *(undefined1 *)((long)puVar11 + 0x14) = uVar9;
              goto LAB_10777b450;
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
LAB_10777b450:
  func_0x00010777d1dc();
  if ((bool)uVar6) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if (((((int)param_1[0xd] != 0) && ((int)param_1[0xd] != 1)) && ((int)param_1[0xd] != 2)) &&
     ((int)param_1[0xd] == 3)) {
    puVar15 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar5 + -0xe0) = uVar12;
    *(undefined8 **)(puVar5 + -0xd8) = puVar11;
    *(undefined1 **)(puVar5 + -0xd0) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -200) = puVar15;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (long *)(ulong)((uint)puVar11 & 0xffff);
  }
  return (long *)0x0;
}



/* Entry: 10777acc8; end: 10777ad3b;  */

long * FUN_10777acc8(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  undefined1 uVar9;
  undefined1 *extraout_x8;
  long lVar10;
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
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar13;
  undefined1 *puVar14;
  code *pcVar15;
  long lVar16;
  undefined8 uVar17;
  char acStack_6fc [1388];
  undefined8 ******ppppppuStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [20];
  byte bStack_15c;
  undefined1 auStack_158 [120];
  undefined8 *****pppppuStack_c0;
  undefined *puStack_b8;
  byte bStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char *pcVar4;
  
  func_0x00010777d224();
  uStack_88 = param_2[1];
  uStack_90 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010777d468();
    } while (extraout_w10 != 0);
  }
  func_0x00010777dc70();
  func_0x00010777d484();
  func_0x00010777d648();
  if ((bStack_9c & 1) == 0) {
    func_0x00010777d748();
    uVar5 = extraout_w8_00;
  }
  else {
    func_0x00010777d410();
    uVar5 = extraout_w8;
  }
  unaff_x19[0x14] = uVar5;
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d380();
  func_0x00010777d638();
  pcVar4 = auStack_170;
  puStack_b8 = &UNK_10777ad3c;
  pppppppuVar13 = (undefined8 *******)&pppppuStack_c0;
  pppppuStack_c0 = (undefined8 *****)&stack0xfffffffffffffff0;
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
        FUN_1075726b8();
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
  if ((bStack_15c & 1) == 0) {
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
  pcVar15 = (code *)&UNK_10777ae10;
  func_0x00010777d638();
  if ((int)param_1[0xd] == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    return param_1;
  }
  uVar5 = (int)param_1[0xd] == 1;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    pcVar4 = acStack_6fc + 0x4dc;
    puStack_178 = &UNK_10777ae10;
    ppppppuStack_180 = pppppppuVar13;
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((acStack_6fc[0x4ec] & 1U) == 0) {
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
    pcVar15 = (code *)&UNK_10777aeac;
    func_0x00010777d638();
    pppppppuVar13 = &ppppppuStack_180;
  }
  uVar5 = (int)param_1[0xd] == 2;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    *(long **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar15;
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
    pcVar15 = (code *)&UNK_10777af30;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  uVar5 = (int)param_1[0xd] == 3;
  plVar6 = plVar7;
  if ((bool)uVar5) {
    plVar6 = param_1 + 1;
    *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
    *(undefined1 **)(pcVar4 + -0x28) = auStack_158;
    *(long **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar15;
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
    pcVar15 = FUN_10777afbc;
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
    *(code **)(pcVar4 + -8) = pcVar15;
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
    pcVar15 = (code *)&LAB_10777b040;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  uVar5 = (int)param_1[0xd] == 5;
  if ((bool)uVar5) {
    plVar7 = param_1 + 1;
    *(long **)(pcVar4 + -0x20) = unaff_x20;
    *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
    *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
    *(code **)(pcVar4 + -8) = pcVar15;
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
      } while (extraout_w10_00 != 0);
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
    pcVar15 = (code *)&UNK_10777b0e0;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  puVar3 = pcVar4 + -0xc0;
  *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
  *(undefined1 **)(pcVar4 + -0x28) = auStack_158;
  *(long **)(pcVar4 + -0x20) = unaff_x20;
  *(undefined1 **)(pcVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(pcVar4 + -0x10) = pppppppuVar13;
  *(code **)(pcVar4 + -8) = pcVar15;
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
        FUN_1075726b8();
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
    pcVar15 = FUN_10777b31c;
    func_0x00010777d638();
    puVar3 = pcVar4 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar5) goto code_r0x00010777b310;
    puVar14 = *(undefined1 **)(pcVar4 + -0xd0);
    pcVar15 = *(code **)(pcVar4 + -200);
    uVar12 = *(undefined8 *)(pcVar4 + -0xe0);
    puVar11 = *(undefined8 **)(pcVar4 + -0xd8);
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
  *(undefined8 *)(puVar3 + -0x20) = uVar12;
  *(undefined8 **)(puVar3 + -0x18) = puVar11;
  *(undefined1 **)(puVar3 + -0x10) = puVar14;
  *(code **)(puVar3 + -8) = pcVar15;
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
          } while (extraout_w10_01 != 0);
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
              FUN_1075726b8();
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
                uVar9 = extraout_w8_03;
              }
              *(undefined1 *)((long)puVar11 + 0x14) = uVar9;
              goto LAB_10777b450;
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
LAB_10777b450:
  func_0x00010777d1dc();
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if (((((int)param_1[0xd] != 0) && ((int)param_1[0xd] != 1)) && ((int)param_1[0xd] != 2)) &&
     ((int)param_1[0xd] == 3)) {
    puVar8 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar3 + -0xe0) = uVar12;
    *(undefined8 **)(puVar3 + -0xd8) = puVar11;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -200) = puVar8;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (long *)(ulong)((uint)puVar11 & 0xffff);
  }
  return (long *)0x0;
}



/* Entry: 10777afbc; end: 10777afdf;  */

undefined8 * FUN_10777afbc(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined1 extraout_w8;
  undefined1 uVar7;
  long lVar8;
  undefined4 *extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  undefined *unaff_x30;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_36c [844];
  
  uVar4 = *(int *)(param_1 + 0xd) == 4;
  if ((bool)uVar4) {
    puVar5 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((acStack_36c[0x2cc] & 1U) == 0) {
      func_0x00010777db94();
      param_1 = param_2;
      param_2 = puVar5;
    }
    else {
      func_0x00010777d4d8();
      param_1 = param_2;
      param_2 = puVar5;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = &LAB_10777b040;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(acStack_36c + 700);
  }
  uVar4 = *(int *)(param_1 + 0xd) == 5;
  if ((bool)uVar4) {
    puVar5 = param_1 + 1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    lVar8 = puVar5[1];
    uVar11 = *puVar5;
    *(undefined8 *)((long)register0x00000008 + -0x88) = puVar5[1];
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar11;
    param_1 = param_2;
    param_2 = puVar5;
    if (lVar8 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xa0) & 1) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = &UNK_10777b0e0;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  puVar3 = (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar4 = iVar2 == 6;
  if ((bool)uVar4) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar4 = iVar2 == 7;
    if ((bool)uVar4) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar4 = iVar2 == 8;
      if ((bool)uVar4) {
        func_0x00010777d9ac();
        FUN_1075726b8();
        func_0x00010777d4c0();
        func_0x00010777d640();
        if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) {
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
        if ((*(byte *)((long)register0x00000008 + -0xb0) & 1) == 0) goto code_r0x00010777b1ac;
        func_0x00010777d4d8();
      }
    }
  }
  func_0x00010777d7c8();
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0xd8) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -200) = &UNK_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)((long)register0x00000008 + -0xe8) = extraout_x9;
  if (*(int *)(param_1 + 0xd) == 0) {
    *(undefined4 *)((long)register0x00000008 + -0xf0) = 0;
    unaff_x19 = (undefined1 *)((long)register0x00000008 + -0x158);
    func_0x00010777dd30();
    puVar5 = (undefined8 *)((long)register0x00000008 + -0x150);
    func_0x00010726af18(puVar5);
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return puVar5;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(undefined8 *)((long)register0x00000008 + -0x180) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x178) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0xd0);
    *(undefined **)((long)register0x00000008 + -0x168) = &UNK_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)param_2 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8 = (int)param_2;
      extraout_x8[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8 = 0;
    }
    *(bool *)(extraout_x8 + 5) = bVar1;
    return param_2;
  }
  func_0x00010777d490();
  if (!(bool)uVar4) goto code_r0x00010777b254;
  uVar11 = *(undefined8 *)((long)register0x00000008 + -0xe0);
  puVar5 = *(undefined8 **)((long)register0x00000008 + -0xd8);
  *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar11;
  *(undefined8 **)((long)register0x00000008 + -0xd8) = puVar5;
  *(undefined8 *)((long)register0x00000008 + -0xd0) =
       *(undefined8 *)((long)register0x00000008 + -0xd0);
  *(undefined8 *)((long)register0x00000008 + -200) =
       *(undefined8 *)((long)register0x00000008 + -200);
  puVar9 = (undefined1 *)((long)register0x00000008 + -0xd0);
  func_0x00010777d31c();
  *(undefined8 *)((long)register0x00000008 + -0xe8) = extraout_x9_00;
  uVar4 = *(int *)(param_1 + 0xd) == 1;
  if ((bool)uVar4) {
    puVar5 = (undefined8 *)((long)register0x00000008 + -0x158);
    *(undefined1 *)((long)register0x00000008 + -0x150) = *(undefined1 *)(param_1 + 1);
    *(undefined4 *)((long)register0x00000008 + -0xf0) = 1;
    func_0x00010777dd30();
    param_1 = (undefined8 *)((long)register0x00000008 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_1;
    }
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    pcVar10 = FUN_10777b31c;
    func_0x00010777d638();
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x160);
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar4) goto code_r0x00010777b310;
    puVar9 = *(undefined1 **)((long)register0x00000008 + -0xd0);
    pcVar10 = *(code **)((long)register0x00000008 + -200);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    puVar5 = *(undefined8 **)((long)register0x00000008 + -0xd8);
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
  *(undefined8 *)(puVar3 + -0x20) = uVar11;
  *(undefined8 **)(puVar3 + -0x18) = puVar5;
  *(undefined1 **)(puVar3 + -0x10) = puVar9;
  *(code **)(puVar3 + -8) = pcVar10;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = *(int *)(param_1 + 0xd);
  uVar4 = iVar2 == 2;
  if ((bool)uVar4) {
    *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(extraout_x9_01 + 8);
    *(undefined4 *)(puVar3 + -0x40) = 2;
    func_0x00010777d3e4();
  }
  else {
    uVar4 = iVar2 == 3;
    if ((bool)uVar4) {
      param_1 = (undefined8 *)(puVar3 + -0xa8);
      func_0x0001072ddd58(param_1,extraout_x9_01 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar4 = iVar2 == 4;
      if ((bool)uVar4) {
        uVar12 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar12;
        *(undefined4 *)(puVar3 + -0x40) = 4;
        func_0x00010777d3e4();
      }
      else if (iVar2 == 5) {
        lVar8 = *(long *)(extraout_x9_01 + 0x10);
        uVar12 = *(undefined8 *)(extraout_x9_01 + 8);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(extraout_x9_01 + 0x10);
        *(undefined8 *)(puVar3 + -0xa0) = uVar12;
        uVar4 = 1;
        if (lVar8 != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10_00 != 0);
        }
        *(undefined4 *)(puVar3 + -0x40) = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar4 = iVar2 == 6;
        if ((bool)uVar4) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar4 = iVar2 == 7;
          if ((bool)uVar4) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar4 = iVar2 == 8;
            if ((bool)uVar4) {
              func_0x00010777d9ac();
              FUN_1075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar4 = puVar3[-0xac] == '\x01';
              if ((bool)uVar4) {
                uVar12 = *(undefined8 *)(puVar3 + -0xbc);
                puVar5[1] = *(undefined8 *)(puVar3 + -0xb4);
                *puVar5 = uVar12;
                *(undefined4 *)(puVar5 + 2) = 1;
                uVar7 = 1;
              }
              else {
                func_0x00010777d748();
                uVar7 = extraout_w8;
              }
              *(undefined1 *)((long)puVar5 + 0x14) = uVar7;
              goto LAB_10777b450;
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
LAB_10777b450:
  func_0x00010777d1dc();
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(param_1 + 0xd) != 0) && (*(int *)(param_1 + 0xd) != 1)) &&
      (*(int *)(param_1 + 0xd) != 2)) && (*(int *)(param_1 + 0xd) == 3)) {
    puVar6 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar3 + -0xe0) = uVar11;
    *(undefined8 **)(puVar3 + -0xd8) = puVar5;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -200) = puVar6;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (undefined8 *)(ulong)((uint)puVar5 & 0xffff);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10777b31c; end: 10777b49b;  */

undefined1 * FUN_10777b31c(undefined1 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 extraout_w8;
  undefined1 uVar3;
  long extraout_x9;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  char cStack_ac;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int iStack_40;
  
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = iVar1 == 2;
  if ((bool)uVar2) {
    uStack_a0 = *(undefined8 *)(extraout_x9 + 8);
    iStack_40 = iVar1;
    func_0x00010777d3e4();
  }
  else {
    uVar2 = iVar1 == 3;
    if ((bool)uVar2) {
      param_1 = auStack_a8;
      func_0x0001072ddd58(param_1,extraout_x9 + 8);
      func_0x00010777d3e4();
    }
    else {
      uVar2 = iVar1 == 4;
      if ((bool)uVar2) {
        uStack_98 = *(undefined8 *)(extraout_x9 + 0x10);
        uStack_a0 = *(undefined8 *)(extraout_x9 + 8);
        iStack_40 = iVar1;
        func_0x00010777d3e4();
      }
      else if (iVar1 == 5) {
        uStack_98 = *(undefined8 *)(extraout_x9 + 0x10);
        uStack_a0 = *(undefined8 *)(extraout_x9 + 8);
        uVar2 = 1;
        if (*(long *)(extraout_x9 + 0x10) != 0) {
          do {
            func_0x00010777d468();
          } while (extraout_w10 != 0);
        }
        iStack_40 = 5;
        func_0x00010777d3e4();
      }
      else {
        uVar2 = iVar1 == 6;
        if ((bool)uVar2) {
          func_0x00010777d9ac();
          func_0x000107348eb0();
          func_0x00010777d3e4();
        }
        else {
          uVar2 = iVar1 == 7;
          if ((bool)uVar2) {
            func_0x00010777d9ac();
            func_0x000107348ecc();
            func_0x00010777d3e4();
          }
          else {
            uVar2 = iVar1 == 8;
            if ((bool)uVar2) {
              func_0x00010777d9ac();
              FUN_1075726b8();
              func_0x00010777d484();
              func_0x00010777d640();
              uVar2 = cStack_ac == '\x01';
              if ((bool)uVar2) {
                unaff_x19[1] = uStack_b4;
                *unaff_x19 = uStack_bc;
                *(undefined4 *)(unaff_x19 + 2) = 1;
                uVar3 = 1;
              }
              else {
                func_0x00010777d748();
                uVar3 = extraout_w8;
              }
              *(undefined1 *)((long)unaff_x19 + 0x14) = uVar3;
              goto LAB_10777b450;
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
LAB_10777b450:
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)unaff_x19 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777b68c; end: 10777b6bb;  */

undefined2 FUN_10777b68c(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f25d8();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777b8ac; end: 10777b8db;  */

undefined2 FUN_10777b8ac(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f278c();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777bacc; end: 10777bafb;  */

undefined2 FUN_10777bacc(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2a00();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777bcec; end: 10777bd1b;  */

undefined2 FUN_10777bcec(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2b98();
  func_0x00010777d374();
  return unaff_w19;
}


