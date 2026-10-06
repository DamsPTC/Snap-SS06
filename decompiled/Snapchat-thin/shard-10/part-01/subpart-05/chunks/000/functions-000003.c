/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107757578; end: 1077575af;  */

long FUN_107757578(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d4cd0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107757820; end: 10775789f;  */

void FUN_107757820(undefined8 param_1,undefined8 *param_2)

{
  int extraout_w8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x0001077579f8();
  if (extraout_w8 == 0) {
    *param_2 = *unaff_x19;
  }
  else {
    func_0x0001077579f0();
    *unaff_x20 = *unaff_x19;
    *(undefined4 *)(unaff_x20 + 6) = 0;
  }
  return;
}



/* Entry: 10775800c; end: 1077589eb;  */

void FUN_10775800c(long *param_1,long *param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  code *pcVar7;
  undefined1 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_490 [24];
  undefined1 auStack_478 [16];
  undefined1 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  byte bStack_450;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [16];
  undefined1 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  byte bStack_390;
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [16];
  undefined1 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  byte bStack_340;
  undefined1 auStack_338 [24];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 auStack_280 [7];
  undefined1 uStack_248;
  long lStack_240;
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [120];
  char cStack_1b0;
  undefined1 auStack_1a8 [56];
  byte bStack_170;
  undefined1 auStack_168 [56];
  byte bStack_130;
  undefined1 auStack_128 [56];
  byte bStack_f0;
  undefined1 auStack_e8 [4];
  undefined1 uStack_e4;
  undefined1 uStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined1 auStack_a0 [56];
  undefined8 uStack_68;
  
  func_0x00010775931c();
  plVar11 = param_2 + 1;
  plVar9 = plVar11;
  uStack_68 = extraout_x8;
  (**(code **)(*param_2 + 0x20))();
  uVar8 = plVar9 + -1 == (long *)0xfffffffffffffffd;
  if (plVar9 + -1 < (long *)0xfffffffffffffffe) {
    func_0x000107878fec(&lStack_240,(long)plVar9 + -1);
    func_0x0001004c3cd0(auStack_338,&UNK_10f425a53,&lStack_240);
    func_0x00010756a668(param_3,auStack_338);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_338);
    func_0x00010775932c();
    func_0x0001077593ac();
LAB_1077586ec:
    func_0x000107759308(uStack_68);
    if ((bool)uVar8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    func_0x00010775937c();
    (*extraout_x9)(&lStack_240,plVar11,1);
    auStack_368[0] = 0;
    uStack_358 = 0;
    uStack_a8 = uStack_a8 & 0xffffff00;
    uStack_a4 = uStack_a4 & 0xffffff00;
    func_0x00010777067c(&uStack_350,param_3,&lStack_240,1,param_4,auStack_368,&uStack_a8);
    func_0x0001072c9854(auStack_368);
    func_0x00010775933c();
    if ((bStack_340 & 1) == 0) {
      func_0x00010002b838(auStack_380,&UNK_10f4257b4);
      func_0x00010756a69c(param_3,auStack_380,1);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_380);
      func_0x0001077593ac();
LAB_1077586e4:
      func_0x0001072c95d0(&uStack_350);
      goto LAB_1077586ec;
    }
    func_0x00010775937c();
    (*extraout_x9_00)(&lStack_240,plVar11,2);
    auStack_3b8[0] = 0;
    uStack_3a8 = 0;
    uStack_a8 = uStack_a8 & 0xffffff00;
    uStack_a4 = uStack_a4 & 0xffffff00;
    func_0x00010777067c(&uStack_3a0,param_3,&lStack_240,2,param_4,auStack_3b8,&uStack_a8);
    func_0x0001072c9854(auStack_3b8);
    func_0x00010775933c();
    if ((bStack_390 & 1) == 0) {
      func_0x0001077593ac();
LAB_1077586dc:
      func_0x0001072c95d0(&uStack_3a0);
      goto LAB_1077586e4;
    }
    func_0x00010775937c();
    func_0x000107759448(&lStack_240);
    (**(code **)(lStack_240 + 0x68))(auStack_128,auStack_238);
    func_0x00010775933c();
    if ((bStack_f0 & 1) == 0) {
      func_0x00010775937c();
      func_0x000107759448(auStack_e8);
      func_0x000107759344();
      func_0x000107759390(&UNK_10f425afc);
      func_0x000107759490(auStack_3d0);
      func_0x00010756a69c(param_3,auStack_3d0,3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d0);
      func_0x00010775932c();
      func_0x000107759388();
      func_0x0001077593d0();
      func_0x0001077593ac();
LAB_1077586d4:
      func_0x00010724b3d8(auStack_128);
      goto LAB_1077586dc;
    }
    func_0x00010775937c();
    func_0x000107759454(&lStack_240);
    (**(code **)(lStack_240 + 0x68))(auStack_168,auStack_238);
    func_0x00010775933c();
    if ((bStack_130 & 1) == 0) {
      func_0x00010775937c();
      func_0x000107759454(auStack_e8);
      func_0x000107759344();
      func_0x000107759390(&UNK_10f425b3b);
      func_0x000107759490(auStack_3e8);
      func_0x00010756a69c(param_3,auStack_3e8,4);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3e8);
      func_0x00010775932c();
      func_0x000107759388();
      func_0x0001077593d0();
      func_0x0001077593ac();
LAB_1077586cc:
      func_0x00010724b3d8(auStack_168);
      goto LAB_1077586d4;
    }
    auStack_1a8[0] = 0;
    bStack_170 = 0;
    uVar8 = plVar9 == (long *)0x7;
    if ((bool)uVar8) {
      func_0x00010775937c();
      func_0x000107759460(&uStack_a8);
      (**(code **)(CONCAT44(uStack_a4,uStack_a8) + 0x68))(&lStack_240,auStack_a0);
      func_0x0001072e948c(auStack_1a8,&lStack_240);
      func_0x00010724b3d8(&lStack_240);
      func_0x0001077594a4();
      if ((bStack_170 & 1) != 0) {
        uVar12 = 6;
        goto LAB_107758300;
      }
      func_0x00010775937c();
      func_0x000107759460(auStack_e8);
      func_0x000107759344();
      func_0x000107759390(&UNK_10f425b76);
      func_0x000107759490(auStack_400);
      func_0x00010756a69c(param_3,auStack_400,5);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_400);
      func_0x00010775932c();
      func_0x000107759388();
      func_0x0001077593d0();
      func_0x0001077593ac();
LAB_1077586c4:
      func_0x00010724b3d8(auStack_1a8);
      goto LAB_1077586cc;
    }
    uVar12 = 5;
LAB_107758300:
    func_0x00010724ef84(&lStack_240,auStack_128);
    func_0x00010724ef84(auStack_228,auStack_168);
    func_0x0001000e3098(&uStack_420,&lStack_240,2);
    lVar13 = 0x18;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                (auStack_238 + lVar13 + -8);
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x18);
    if (bStack_170 == 1) {
      func_0x00010724ef84(&lStack_240,auStack_1a8);
      func_0x0001000fecf4(&uStack_420,&lStack_240);
      func_0x00010775932c();
    }
    uStack_438 = uStack_418;
    uStack_440 = uStack_420;
    uStack_430 = uStack_410;
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x000107754984(&lStack_240,param_4,&uStack_440);
    func_0x0001000e30f4(&uStack_440);
    func_0x00010775937c();
    (*extraout_x9_01)(&uStack_a8,plVar11,uVar12);
    uVar8 = cStack_1b0 == '\0';
    plVar9 = &lStack_240;
    if ((bool)uVar8) {
      plVar9 = param_4;
    }
    auStack_478[0] = 0;
    uStack_468 = 0;
    auStack_e8[0] = 0;
    uStack_e4 = 0;
    func_0x00010777067c(&uStack_460,param_3,&uStack_a8,uVar12,plVar9,auStack_478,auStack_e8);
    func_0x0001072c9854(auStack_478);
    func_0x0001077594a4();
    bVar6 = bStack_170;
    if ((bStack_450 & 1) == 0) {
      func_0x00010002b838(auStack_490,&UNK_10f42580c);
      func_0x00010756a69c(param_3,auStack_490,uVar12);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_490);
      func_0x0001077593ac();
LAB_1077586ac:
      func_0x0001072c95d0(&uStack_460);
      func_0x00010752b5b8(&lStack_240);
      func_0x0001000e30f4(&uStack_420);
      goto LAB_1077586c4;
    }
    if (*(char *)(param_3 + 0x51) != '\x01') {
      if ((bStack_f0 != 1) || ((bStack_130 & 1) == 0)) {
        func_0x000104bdc2c8();
        goto LAB_107758714;
      }
      uVar8 = bStack_170 == 1;
      if ((bool)uVar8) {
        func_0x000104c318bc(auStack_280,auStack_1a8);
        func_0x0001072627ac(auStack_e8,auStack_280);
      }
      else {
        auStack_e8[0] = 0;
        uStack_b0 = 0;
      }
      puVar10 = (undefined8 *)0x140;
      __Znwm();
      uStack_2b8 = uStack_348;
      uStack_2c0 = uStack_350;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_DAT_1109d4e08;
      uStack_350 = 0;
      uStack_348 = 0;
      uStack_2c8 = uStack_398;
      uStack_2d0 = uStack_3a0;
      uStack_3a0 = 0;
      uStack_398 = 0;
      func_0x0001077594ac();
      uStack_2d8 = uStack_458;
      uStack_2e0 = uStack_460;
      uStack_460 = 0;
      uStack_458 = 0;
      func_0x000107758fb4(puVar10 + 3,&uStack_2c0,&uStack_2d0,auStack_128,auStack_168,&uStack_a8,
                          &uStack_2e0);
      func_0x0001077593f0();
      func_0x0001077593f8();
      func_0x0001077593e8();
      func_0x0001072c9b9c(&uStack_2c0);
      *param_1 = (long)(puVar10 + 3);
      param_1[1] = (long)puVar10;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      func_0x000107759108(&uStack_2f0);
      func_0x0001077593c8();
      if (bVar6 != 0) {
        puVar10 = auStack_280;
        goto LAB_1077586a8;
      }
      goto LAB_1077586ac;
    }
    if ((bStack_f0 == 1) && ((bStack_130 & 1) != 0)) {
      uVar8 = bStack_170 == 1;
      if ((bool)uVar8) {
        func_0x000104c318bc(&uStack_2c0,auStack_1a8);
        func_0x0001072627ac(auStack_280,&uStack_2c0);
      }
      else {
        auStack_280[0]._0_1_ = 0;
        uStack_248 = 0;
      }
      puVar10 = (undefined8 *)0x140;
      __Znwm();
      uVar5 = uStack_348;
      uVar4 = uStack_350;
      uVar3 = uStack_398;
      uVar2 = uStack_3a0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      *puVar10 = &PTR_DAT_1109d4e08;
      uStack_350 = 0;
      uStack_348 = 0;
      uStack_3a0 = 0;
      uStack_398 = 0;
      func_0x0001072649c8(auStack_e8,auStack_280);
      uVar1 = uStack_458;
      uVar12 = uStack_460;
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_2d8 = uVar3;
      uStack_2e0 = uVar2;
      uStack_2c8 = uVar5;
      uStack_2d0 = uVar4;
      uStack_300 = 0;
      uStack_2f8 = 0;
      uStack_310 = 0;
      uStack_308 = 0;
      func_0x0001077594ac();
      uStack_2e8 = uVar1;
      uStack_2f0 = uVar12;
      uStack_320 = 0;
      uStack_318 = 0;
      func_0x000107758fb4(puVar10 + 3,&uStack_2d0,&uStack_2e0,auStack_128,auStack_168,&uStack_a8,
                          &uStack_2f0);
      func_0x0001072c9b9c(&uStack_2f0);
      func_0x0001077593f8();
      func_0x0001077593f0();
      func_0x0001077593e8();
      func_0x0001002a8234(puVar10 + 8,param_4 + 8);
      func_0x0001072c9b9c(&uStack_320);
      func_0x0001077593c8();
      func_0x0001072c9b9c(&uStack_310);
      func_0x0001072c9b9c(&uStack_300);
      *param_1 = (long)(puVar10 + 3);
      param_1[1] = (long)puVar10;
      uStack_4a0 = 0;
      uStack_498 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
      func_0x000107759108(&uStack_4a0);
      func_0x00010724b3d8(auStack_280);
      if (bVar6 != 0) {
        puVar10 = &uStack_2c0;
LAB_1077586a8:
        func_0x000104c2f714(puVar10);
      }
      goto LAB_1077586ac;
    }
  }
  func_0x000104bdc2c8();
LAB_107758714:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x107758718);
  (*pcVar7)();
}



/* Entry: 107758e1c; end: 107758e7b;  */

undefined8 * FUN_107758e1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d4cf0;
  func_0x0001072c9b9c(param_1 + 0x23);
  func_0x00010724b3d8(param_1 + 0x1b);
  func_0x000104c2f714(param_1 + 0x14);
  func_0x000104c2f714(param_1 + 0xd);
  func_0x0001072c9b9c(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107758f90; end: 107758fa3;  */

void FUN_107758f90(void)

{
  func_0x0001077590f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077591a4; end: 107759287;  */

undefined1 * FUN_1077591a4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long *plVar6;
  undefined1 auStack_1e0 [56];
  undefined1 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_48;
  
  puVar5 = auStack_1e0;
  lVar2 = param_2;
  func_0x00010775931c();
  lVar1 = *(long *)(lVar2 + 8);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  plVar6 = *(long **)(lVar1 + 0x118);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  uStack_48 = extraout_x8;
  func_0x00010756ec34(uVar3);
  func_0x0001077592cc(auStack_1e0,uVar3);
  (**(code **)(*plVar6 + 0x48))(plVar6,uVar4,auStack_1e0,*(undefined8 *)(param_2 + 0x20));
  func_0x0001074332fc(auStack_1e0);
  uVar3 = *(undefined8 *)(lVar1 + 0x118);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010756ec34();
  auStack_1e0[0] = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  func_0x000107753050(param_1,uVar3,uVar4,auStack_1e0);
  func_0x00010724b3d8(auStack_1e0);
  func_0x000107759308(uStack_48);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x0001077594cc();
  func_0x00010724b3d8();
  func_0x000107759334();
  func_0x0001004a5364(uVar4,&PTR_DAT_1109d4eb8);
  puVar5 = puVar5 + 8;
  if ((int)uVar4 == 0) {
    puVar5 = (undefined1 *)0x0;
  }
  return puVar5;
}



/* Entry: 10775a804; end: 10775a90b;  */

void FUN_10775a804(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x50);
  for (lVar2 = *(long *)(param_1 + 0x48); lVar2 != lVar1; lVar2 = lVar2 + 0x100) {
    func_0x00010775c300();
    if (*(char *)(lVar2 + 0x20) == '\x01') {
      func_0x00010775c300();
    }
    if (*(char *)(lVar2 + 0x38) == '\x01') {
      func_0x00010775c300();
    }
    if (*(char *)(lVar2 + 0x50) == '\x01') {
      func_0x00010775c300();
    }
    if (*(char *)(lVar2 + 0x68) == '\x01') {
      func_0x00010775c300();
    }
    if (*(char *)(lVar2 + 0x80) == '\x01') {
      func_0x00010775c300();
    }
    if (*(char *)(lVar2 + 0x98) == '\x01') {
      func_0x00010775c300();
    }
    if (*(char *)(lVar2 + 0xb0) == '\x01') {
      func_0x00010775c300();
    }
    if (*(char *)(lVar2 + 200) == '\x01') {
      func_0x00010775c300();
    }
    if (*(char *)(lVar2 + 0xe0) == '\x01') {
      func_0x00010775c300();
    }
    if (*(char *)(lVar2 + 0xf8) == '\x01') {
      func_0x00010775c300();
    }
  }
  return;
}



/* Entry: 10775bdb4; end: 10775bdc7;  */

void FUN_10775bdb4(void)

{
  func_0x000107547a88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10775c090; end: 10775c0f7;  */

long FUN_10775c090(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000104c2f64c();
  func_0x00010775c0f8(lVar1 + 0x38,param_2);
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  return param_1;
}



/* Entry: 10775c700; end: 10775c76b;  */

bool FUN_10775c700(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar1 = param_1[1];
  if (lVar5 == lVar1) {
    bVar2 = true;
  }
  else {
    while ((bVar2 = lVar5 == lVar1, !bVar2 &&
           (lVar4 = lVar5, func_0x000104c2d614(), (int)lVar4 != 0))) {
      if (*(char *)(lVar5 + 0x98) == '\x01') {
        iVar3 = (int)lVar5 + 0x38;
        func_0x000104c2d614();
        if (iVar3 == 0) {
          return bVar2;
        }
      }
      lVar5 = lVar5 + 0x120;
    }
  }
  return bVar2;
}



/* Entry: 10775debc; end: 10775df27;  */

ushort ** FUN_10775debc(ushort **param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                       undefined8 *param_5,undefined8 *param_6,ushort *param_7,ushort *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  ushort **ppuVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_1e1 [9];
  undefined1 *puStack_1d8;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  ushort *puStack_90;
  ushort *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_28;
  
  func_0x00010775e4c8();
  uStack_28 = extraout_x8;
  func_0x00010726ccd4(&puStack_88);
  FUN_10775c090(param_1,&puStack_88);
  func_0x00010726b164();
  func_0x00010775e3d8(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_88;
  func_0x00010726b164(ppuVar3);
  func_0x00010775e534();
  puStack_98 = &UNK_10775df28;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010775e4c8();
  uStack_f8 = extraout_x8_00;
  func_0x000104c318bc(auStack_130);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  func_0x000107278b0c(auStack_148,param_4);
  uStack_158 = param_5[1];
  uStack_160 = *param_5;
  uStack_150 = *(undefined4 *)(param_5 + 2);
  uStack_1c0 = (ulong)*param_7;
  uStack_1b8 = (ulong)*param_8;
  uStack_1b0 = (ulong)*puStack_90;
  uStack_1a8 = (ulong)*puStack_88;
  uStack_178 = puStack_80[1];
  uStack_180 = *puStack_80;
  uStack_170 = *(undefined4 *)(puStack_80 + 2);
  uStack_198 = *puStack_78;
  uStack_190 = puStack_78[1];
  puStack_1a0 = &uStack_180;
  func_0x000107545044(ppuVar3,auStack_130,uVar1,uVar2,auStack_148,&uStack_160,*param_6,param_6[1]);
  func_0x00010726b07c(auStack_148);
  puVar4 = auStack_130;
  func_0x000104c2f714();
  func_0x00010775e3d8(uStack_f8);
  if ((bool)in_ZR) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  func_0x00010726b07c(auStack_148);
  func_0x000104c2f714(auStack_130);
  func_0x00010775e534();
  puStack_1c8 = &UNK_10775e058;
  ppuVar3 = (ushort **)auStack_1e1;
  auStack_1e1._1_8_ = uVar1;
  puStack_1d8 = puVar4;
  ppuStack_1d0 = &puStack_a0;
  func_0x00010775f590(ppuVar3);
  func_0x00010775e458();
  return ppuVar3;
}



/* Entry: 10775e288; end: 10775e2eb;  */

void FUN_10775e288(ulong param_1)

{
  uint extraout_w8;
  long unaff_x28;
  
  func_0x00010775e57c();
  func_0x00010775e358();
  func_0x00010775e2f8();
  while( true ) {
    func_0x00010775e3ac();
    while (unaff_x28 != 0) {
      func_0x00010775e388();
      func_0x00010775e2ec();
      if ((param_1 & 1) != 0) {
        return;
      }
      func_0x00010775e63c();
    }
    func_0x00010775e49c();
    if ((extraout_w8 & 1) != 0) break;
    func_0x00010775e630();
  }
  func_0x00010775e3ec();
  func_0x00010775e660();
  return;
}



/* Entry: 10775ecf8; end: 10775ecfb;  */

undefined8 * FUN_10775ecf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d4fb0;
  func_0x0001072c9b9c(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 10775edf0; end: 10775eec7;  */

undefined8 * FUN_10775edf0(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 auStack_40 [16];
  
  func_0x0001072c9ff4(auStack_40,*param_2 + 0x10);
  uStack_50 = *(undefined4 *)(*param_2 + 0x20);
  uStack_4c = *(undefined2 *)(*param_2 + 0x24);
  uStack_58 = *(undefined4 *)(*param_3 + 0x20);
  uStack_54 = *(undefined2 *)(*param_3 + 0x24);
  puVar1 = &uStack_50;
  func_0x0001075457c8(puVar1,&uStack_58);
  uStack_48 = SUB84(puVar1,0);
  uStack_44 = (undefined2)((ulong)puVar1 >> 0x20);
  func_0x0001072c9f9c(param_1,0x20,auStack_40,&uStack_48);
  func_0x0001072c9884(auStack_40);
  *param_1 = &PTR_FUN_1109d4fb0;
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
  return param_1;
}



/* Entry: 10775f0dc; end: 10775f12b;  */

bool FUN_10775f0dc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = param_1;
  func_0x000104c32db4();
  if (((int)lVar8 == 0) || (*(char *)(param_1 + 0x38) != *(char *)(param_2 + 0x38))) {
    return false;
  }
  cVar6 = *(char *)(param_1 + 0x58);
  if (cVar6 != *(char *)(param_2 + 0x58) || cVar6 == '\0') {
    return cVar6 == *(char *)(param_2 + 0x58);
  }
  bVar4 = *(byte *)(param_1 + 0x57);
  uVar1 = *(ulong *)(param_1 + 0x48);
  if (-1 < (char)bVar4) {
    uVar1 = (ulong)bVar4;
  }
  bVar5 = *(byte *)(param_2 + 0x57);
  uVar2 = *(ulong *)(param_2 + 0x48);
  if (-1 < (char)bVar5) {
    uVar2 = (ulong)bVar5;
  }
  if (uVar1 == uVar2) {
    plVar7 = (long *)*(long *)(param_1 + 0x40);
    if (-1 < (char)bVar4) {
      plVar7 = (long *)(param_1 + 0x40);
    }
    plVar3 = (long *)*(long *)(param_2 + 0x40);
    if (-1 < (char)bVar5) {
      plVar3 = (long *)(param_2 + 0x40);
    }
    func_0x000107c610b0(plVar7,plVar3);
    return (int)plVar7 == 0;
  }
  return false;
}



/* Entry: 10775f8a4; end: 10775f8a7;  */

undefined8 * FUN_10775f8a4(undefined8 *param_1)

{
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107760170; end: 107760183;  */

void FUN_107760170(void)

{
  func_0x000107547c54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107760294; end: 1077602af;  */

void FUN_107760294(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109d5190;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107760840; end: 107760863;  */

void FUN_107760840(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109d5200;
  param_2[1] = uVar1;
  return;
}



/* Entry: 107760b80; end: 107760da3;  */

/* WARNING: Possible PIC construction at 0x000107760d98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107760d9c) */

undefined8 * FUN_107760b80(undefined8 *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  uint *unaff_x24;
  long lVar12;
  undefined1 auStack_128 [8];
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  uint uStack_100;
  undefined2 uStack_fc;
  undefined1 auStack_f8 [96];
  int iStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined8 uStack_58;
  
  plVar7 = param_2;
  plVar8 = param_3;
  func_0x000107761954();
  uStack_120 = 2;
  uStack_90 = *(undefined4 *)(*plVar7 + 0x20);
  uStack_8c = *(undefined2 *)(*plVar7 + 0x24);
  uStack_118 = (undefined8 *)
               CONCAT44(CONCAT22(uStack_118._6_2_,*(undefined2 *)(*plVar8 + 0x24)),
                        *(undefined4 *)(*plVar8 + 0x20));
  puVar3 = &uStack_90;
  uStack_58 = extraout_x8;
  func_0x0001075457c8(puVar3,&uStack_118);
  uStack_100 = (uint)puVar3;
  uStack_fc = (undefined2)((ulong)puVar3 >> 0x20);
  func_0x0001072c9f9c(param_1,0x16,auStack_128,&uStack_100);
  puVar4 = auStack_128;
  func_0x0001072c9884();
  *param_1 = &PTR_DAT_1109d5310;
  lVar12 = *param_2;
  param_1[10] = param_2[1];
  param_1[9] = lVar12;
  *param_2 = 0;
  param_2[1] = 0;
  lVar12 = *param_3;
  plVar7 = param_1 + 0xb;
  param_1[0xc] = param_3[1];
  *plVar7 = lVar12;
  *param_3 = 0;
  param_3[1] = 0;
  puVar10 = param_1 + 0xd;
  *puVar10 = &UNK_10e52b660;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  func_0x00010785f1f4();
  uStack_100 = uStack_100 & 0xffffff00;
  puVar4 = puVar4 + 0x4c0;
  func_0x00010724e2c8(puVar4,&uStack_100);
  if ((int)puVar4 != 0) {
    in_ZR = 0;
    if (*(int *)(*plVar7 + 8) == 2) {
      unaff_x24 = &uStack_100;
      lVar12 = *plVar7 + 0x50;
      func_0x0001072786d8(auStack_f8);
      in_ZR = false;
      if (iStack_98 == 8) {
        puVar5 = &uStack_100;
        func_0x0001075725f8();
        lVar11 = **(long **)puVar5;
        lVar2 = (*(long **)puVar5)[1];
        lVar9 = lVar11;
LAB_107760cb0:
        if (lVar9 != lVar2) goto code_r0x000107760cb8;
        puVar6 = puVar10;
        func_0x0001072621e0();
        uStack_118 = puVar10;
        puStack_110 = puVar6;
        lStack_108 = lVar12;
        for (; in_ZR = lVar11 == lVar2, !(bool)in_ZR; lVar11 = lVar11 + 0x70) {
          lVar12 = lVar11;
          func_0x00010732393c(lVar11);
          func_0x000104c2fe00(&uStack_90,lVar12);
          func_0x000107761870(&uStack_118,&uStack_90);
          func_0x0001077619c8();
        }
      }
LAB_107760cc8:
      func_0x00010726af18(auStack_f8);
    }
  }
  func_0x000107761940(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x24 + 2);
  func_0x000107261dac(puVar10);
  func_0x0001072c9b9c(plVar7);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
code_r0x000107760cb8:
  piVar1 = (int *)(lVar9 + 0x68);
  lVar9 = lVar9 + 0x70;
  in_ZR = *piVar1 == 3;
  if (!(bool)in_ZR) goto LAB_107760cc8;
  goto LAB_107760cb0;
}



/* Entry: 107761848; end: 107761857;  */

long FUN_107761848(long param_1)

{
  func_0x000100060934(param_1,&DAT_10f416776);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  return param_1;
}



/* Entry: 107761914; end: 10776193f;  */

long FUN_107761914(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1077622d0; end: 1077622e3;  */

void FUN_1077622d0(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10776351c; end: 1077638fb;  */

undefined8 * FUN_10776351c(ulong *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  byte bVar2;
  uint6 uVar3;
  undefined8 uVar4;
  undefined1 in_ZR;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined **ppuVar13;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  ulong uVar14;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  undefined8 *unaff_x19;
  long *unaff_x22;
  long *unaff_x23;
  long *plVar15;
  long *unaff_x24;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined4 uStack_158;
  undefined2 uStack_154;
  undefined4 uStack_150;
  ushort uStack_14c;
  undefined4 uStack_148;
  undefined2 uStack_144;
  undefined1 auStack_140 [16];
  undefined4 uStack_130;
  undefined2 uStack_12c;
  undefined4 uStack_128;
  undefined2 uStack_124;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  ulong *puStack_108;
  long *plStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [32];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_58;
  
  puVar5 = param_1;
  plVar12 = param_5;
  func_0x000107765ba4();
  iVar1 = (int)puVar5[1];
  uStack_58 = extraout_x8;
  if (iVar1 == 0) {
    func_0x000107765b8c();
    func_0x000107765b68();
    func_0x000107765a58();
    func_0x000107765a44();
    func_0x000107765b5c();
    plVar10 = param_3;
    plVar11 = param_4;
  }
  else {
    in_ZR = iVar1 == 1;
    plVar10 = param_3;
    plVar11 = param_4;
    if ((bool)in_ZR) {
      __Znwm(0xa8);
      func_0x000107765c94();
      uVar4 = extraout_x9;
      if (extraout_x11 != 0) {
        *(undefined8 *)(extraout_x10 + 0x10) = extraout_x9;
        *param_4 = (long)extraout_x8_00;
        *extraout_x8_00 = 0;
        extraout_x8_00[1] = 0;
        uVar4 = uStack_90;
      }
      uStack_90 = uVar4;
      func_0x000107765f28();
      func_0x000107764aac();
      func_0x000107766024();
      func_0x000107765f8c();
      *unaff_x19 = param_5;
      puVar6 = (undefined8 *)0x20;
      __Znwm();
      ppuVar13 = &PTR_DAT_1109d57f0;
LAB_107763628:
      *puVar6 = ppuVar13;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = param_5;
      unaff_x19[1] = puVar6;
      func_0x000107766054();
      goto LAB_107763638;
    }
    in_ZR = iVar1 == 2;
    unaff_x22 = param_2;
    unaff_x23 = param_4;
    unaff_x24 = param_3;
    if ((bool)in_ZR) {
      func_0x000107765b8c();
      func_0x000107765b68();
      func_0x000107765a58();
      func_0x000107765a44();
      func_0x000107765b5c();
    }
    else {
      in_ZR = iVar1 == 3;
      if ((bool)in_ZR) {
        func_0x000107765b8c();
        func_0x000107765b68();
        func_0x000107765a58();
        func_0x000107765a44();
        func_0x000107765b5c();
      }
      else {
        in_ZR = iVar1 == 4;
        if ((bool)in_ZR) {
          __Znwm(0xa8);
          func_0x000107765c94();
          uVar4 = extraout_x9_00;
          if (extraout_x11_00 != 0) {
            *(undefined8 *)(extraout_x10_00 + 0x10) = extraout_x9_00;
            *param_4 = (long)extraout_x8_01;
            *extraout_x8_01 = 0;
            extraout_x8_01[1] = 0;
            uVar4 = uStack_90;
          }
          uStack_90 = uVar4;
          func_0x000107765f28();
          func_0x000107765014();
          func_0x000107766024();
          func_0x000107765f8c();
          *unaff_x19 = param_5;
          puVar6 = (undefined8 *)0x20;
          __Znwm();
          ppuVar13 = &PTR_DAT_1109d5850;
          goto LAB_107763628;
        }
        in_ZR = iVar1 == 5;
        if ((bool)in_ZR) {
          func_0x000107765b8c();
          func_0x000107765b68();
          func_0x000107765a58();
          func_0x000107765a44();
          func_0x000107765b5c();
        }
        else {
          in_ZR = iVar1 == 6;
          if ((bool)in_ZR) {
            func_0x000107765b8c();
            func_0x000107765b68();
            func_0x000107765a58();
            func_0x000107765a44();
            func_0x000107765b5c();
          }
          else {
            in_ZR = iVar1 == 7;
            if ((bool)in_ZR) {
              uVar16 = *param_1;
              uStack_88 = CONCAT44(uStack_88._4_4_,1);
              uVar14 = uVar16;
              func_0x0001074d1ed0(uVar16,&uStack_90);
              if ((uVar14 & 1) == 0) {
                bVar2 = *(byte *)(uVar16 + 0x18);
                func_0x00010776601c();
                if ((bVar2 & 1) != 0) {
                  plVar10 = param_2;
                  plVar11 = param_3;
                  plVar12 = param_4;
                  func_0x000107765658(&uStack_90,param_1);
                  unaff_x19[1] = uStack_88;
                  *unaff_x19 = uStack_90;
                  uStack_90 = 0;
                  uStack_88 = 0;
                  func_0x000107766054();
                  puVar6 = &uStack_90;
                  func_0x000107765630();
                  goto LAB_107763638;
                }
              }
              else {
                func_0x00010776601c();
              }
              func_0x000107765b8c();
              func_0x000107765b68();
              func_0x000107765a58();
              func_0x000107765a44();
              func_0x000107765b5c();
            }
            else {
              in_ZR = iVar1 == 8;
              if ((bool)in_ZR) {
                func_0x000107765b8c();
                func_0x000107765b68();
                func_0x000107765a58();
                func_0x000107765a44();
                func_0x000107765b5c();
              }
              else {
                in_ZR = iVar1 == 9;
                if ((bool)in_ZR) {
                  func_0x000107765b8c();
                  func_0x000107765b68();
                  func_0x000107765a58();
                  func_0x000107765a44();
                  func_0x000107765b5c();
                }
                else {
                  in_ZR = iVar1 == 10;
                  if ((bool)in_ZR) {
                    func_0x000107765b8c();
                    func_0x000107765b68();
                    func_0x000107765a58();
                    func_0x000107765a44();
                    func_0x000107765b5c();
                  }
                  else {
                    func_0x000107765b8c();
                    func_0x000107765b68();
                    func_0x000107765a58();
                    func_0x000107765a44();
                    func_0x000107765b5c();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  puVar6 = &uStack_90;
  func_0x000104c2f714();
  func_0x000107765eb4();
  param_2 = unaff_x22;
  param_4 = unaff_x23;
  param_3 = unaff_x24;
LAB_107763638:
  func_0x000107765aec(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
    puVar7 = &uStack_90;
    func_0x000104c2f714();
    func_0x000107765c04();
    puStack_e8 = &UNK_1077638fc;
    plStack_120 = param_3;
    plStack_118 = param_4;
    plStack_110 = param_2;
    puStack_108 = param_1;
    plStack_100 = param_5;
    puStack_f8 = puVar6;
    puStack_f0 = &stack0xfffffffffffffff0;
    func_0x0001072c9ff4(auStack_140);
    lVar8 = *plVar11;
    uVar3 = *(uint6 *)(lVar8 + 0x20);
    if ((uVar3 >> 0x28 & 1) == 0) {
      func_0x0001077641e4();
      uStack_14c = 0x100;
      if ((int)lVar8 == 0) {
        uStack_14c = 0;
      }
    }
    else {
      uStack_14c = 0x100;
    }
    uVar14 = (ulong)uVar3 & 0xffffffffff;
    uStack_14c = uStack_14c | (ushort)(uVar14 >> 0x20);
    uStack_150 = (undefined4)uVar14;
    uStack_128 = 0x1010101;
    uStack_124 = 1;
    plVar15 = (long *)*plVar12;
    while (plVar15 != plVar12 + 1) {
      uStack_130 = *(undefined4 *)(plVar15[5] + 0x20);
      uStack_12c = *(undefined2 *)(plVar15[5] + 0x24);
      puVar9 = &uStack_128;
      func_0x0001075457c8(puVar9,&uStack_130);
      uStack_128 = SUB84(puVar9,0);
      uStack_124 = (undefined2)((ulong)puVar9 >> 0x20);
      func_0x00010002c7d4();
    }
    uStack_154 = uStack_124;
    uStack_158 = uStack_128;
    puVar9 = &uStack_150;
    func_0x0001075457c8(puVar9,&uStack_158);
    uStack_148 = SUB84(puVar9,0);
    uStack_144 = (undefined2)((ulong)puVar9 >> 0x20);
    func_0x0001072c9f9c(puVar7,4,auStack_140,&uStack_148);
    func_0x0001072c9884(auStack_140);
    *puVar7 = &PTR_DAT_1109d54d0;
    lVar17 = plVar10[1];
    lVar8 = *plVar10;
    lVar19 = plVar10[3];
    lVar18 = plVar10[2];
    lVar21 = plVar10[5];
    lVar20 = plVar10[4];
    puVar7[0xf] = plVar10[6];
    puVar7[0xe] = lVar21;
    puVar7[0xd] = lVar20;
    puVar7[0xc] = lVar19;
    puVar7[0xb] = lVar18;
    puVar7[10] = lVar17;
    puVar7[9] = lVar8;
    lVar8 = *plVar11;
    puVar7[0x11] = plVar11[1];
    puVar7[0x10] = lVar8;
    *plVar11 = 0;
    plVar11[1] = 0;
    func_0x000107545f9c(puVar7 + 0x12,plVar12);
    return puVar7;
  }
  return puVar6;
}



/* Entry: 107764114; end: 1077641d3;  */

bool FUN_107764114(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (*(int *)(param_2 + 8) == 4) {
    uVar1 = *(uint *)(param_1 + 0x78);
    if (uVar1 == 0xffffffff || *(uint *)(param_2 + 0x78) != uVar1) {
      if (*(uint *)(param_2 + 0x78) != uVar1) {
        return false;
      }
    }
    else {
      puVar3 = &stack0xffffffffffffffd8;
      (*(code *)(&PTR_DAT_1109d5548)[uVar1])(puVar3,param_1 + 0x48,param_2 + 0x48);
      if (((ulong)puVar3 & 1) == 0) {
        return false;
      }
    }
    plVar4 = *(long **)(param_1 + 0x80);
    (**(code **)(*plVar4 + 0x18))(plVar4,*(undefined8 *)(param_2 + 0x80));
    if (((int)plVar4 != 0) && (*(long *)(param_1 + 0xa0) == *(long *)(param_2 + 0xa0))) {
      if (*(long *)(param_1 + 0xa0) == *(long *)(param_2 + 0xa0)) {
        lVar5 = *(long *)(param_1 + 0x90);
        lVar6 = *(long *)(param_2 + 0x90);
        while (bVar2 = lVar5 == param_1 + 0x98, !bVar2) {
          lVar5 = lVar5 + 0x20;
          func_0x000107764378(lVar5,lVar6 + 0x20);
          if ((int)lVar5 == 0) {
            return bVar2;
          }
          func_0x000107765ec0();
          func_0x00010002c7d4();
        }
      }
      else {
        bVar2 = false;
      }
      return bVar2;
    }
  }
  return false;
}



/* Entry: 1077643e4; end: 1077643ef;  */

void FUN_1077643e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107765d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 107764950; end: 107764983;  */

double FUN_107764950(double *param_1,long *param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 6) != 0) {
    fVar2 = (float)*(double *)*param_2;
    fVar3 = (float)((double *)*param_2)[1] - fVar2;
    fVar4 = 0.0;
    if (fVar3 != 0.0) {
      fVar4 = ((float)*(double *)param_2[1] - fVar2) / fVar3;
    }
    dVar1 = (double)fVar4;
    func_0x0001073b42a0(dVar1,0x3eb0c6f7a0b5ed8d);
    return dVar1 * (param_1[3] + dVar1 * (param_1[4] + dVar1 * param_1[5]));
  }
  fVar4 = (float)*param_1;
  FUN_107874ea8(fVar4,(float)*(double *)*param_2,(float)((double *)*param_2)[1],
                (float)*(double *)param_2[1]);
  return (double)fVar4;
}



/* Entry: 107764b04; end: 107764b07;  */

void FUN_107764b04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d5640;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107764fec; end: 107765013;  */

long FUN_107764fec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107765624; end: 10776562f;  */

void FUN_107765624(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d5718;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107765810; end: 107765823;  */

void FUN_107765810(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107765970; end: 10776599f;  */

undefined1  [16] FUN_107765970(double *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  
  auVar2 = NEON_fmov(0x4008000000000000,8);
  dVar1 = auVar2._0_8_;
  dVar3 = auVar2._8_8_;
  auVar2._0_8_ = (*param_1 + param_1[1] + (*param_1 * dVar1) / dVar1) / dVar1;
  auVar2._8_8_ = (param_1[3] + param_1[4] + (param_1[3] * dVar3) / dVar3) / dVar3;
  return auVar2;
}



/* Entry: 10776653c; end: 10776678f;  */

long * FUN_10776653c(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 extraout_x8;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  byte bStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined4 uStack_58;
  undefined8 uStack_48;
  
  plVar6 = param_2;
  func_0x000107766888();
  plVar7 = plVar6 + 1;
  uStack_48 = extraout_x8;
  (**(code **)(*plVar6 + 0x20))();
  uVar5 = plVar7 == (long *)0x2;
  if ((bool)uVar5) {
    (**(code **)(*param_2 + 0x28))(&lStack_60,plVar6 + 1,1);
    auStack_b8[0] = 0;
    uStack_a8 = 0;
    uVar2 = (ulong)uStack_70 >> 0x28;
    uVar1 = (uint)uStack_70;
    uStack_70._0_5_ = (uint5)(uVar1 & 0xffffff00);
    uStack_70 = CONCAT35((int3)uVar2,(uint5)uStack_70);
    func_0x00010777067c(&lStack_a0,param_3,&lStack_60,1,param_4,auStack_b8,&uStack_70);
    func_0x0001072c9854(auStack_b8);
    func_0x0001072f5f6c(&lStack_60);
    if ((bStack_90 & 1) == 0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 2) = 0;
    }
    else {
      func_0x0001072c9ff4(auStack_c8,lStack_a0 + 0x10);
      puVar8 = (undefined8 *)0x70;
      __Znwm();
      uVar4 = uStack_98;
      lVar3 = lStack_a0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = &PTR_DAT_1109d5938;
      lStack_a0 = 0;
      uStack_98 = 0;
      uStack_58 = 1;
      uStack_70 = CONCAT44(CONCAT22(uStack_70._6_2_,*(undefined2 *)(lVar3 + 0x24)),
                           *(undefined4 *)(lVar3 + 0x20));
      func_0x0001072c9f9c(puVar8 + 3,6,&lStack_60,&uStack_70);
      func_0x0001072c9884(&lStack_60);
      puVar8[3] = &PTR_DAT_1109d58b0;
      puVar8[0xd] = uVar4;
      puVar8[0xc] = lVar3;
      uStack_70 = 0;
      uStack_68 = 0;
      func_0x0001072c9b9c(&uStack_70);
      *param_1 = (long)(puVar8 + 3);
      param_1[1] = (long)puVar8;
      *(undefined1 *)(param_1 + 2) = 1;
      func_0x0001072c9884(auStack_c8);
    }
    plVar6 = &lStack_a0;
    func_0x0001072c95d0();
  }
  else {
    func_0x000107878fec(&lStack_60);
    func_0x0001004c3cd0(&lStack_a0,&UNK_10f4264bb,&lStack_60);
    func_0x00010048a6c8(auStack_88,&lStack_a0,&UNK_10f417b93);
    func_0x00010756a668(param_3,auStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
    func_0x0001077668b0();
    plVar6 = &lStack_60;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  func_0x000107766874(uStack_48);
  if ((bool)uVar5) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x0001072c9884(auStack_c8);
  plVar6 = &lStack_a0;
  func_0x0001072c95d0();
  func_0x0001077668b8();
  *plVar6 = (long)&PTR_DAT_1109d58b0;
  func_0x0001072c9b9c(plVar6 + 9);
  *plVar6 = (long)&PTR_DAT_1109d4888;
  func_0x0001001148fc(plVar6 + 5);
  func_0x0001072c9884(plVar6 + 2);
  return plVar6;
}



/* Entry: 1077668d4; end: 10776696b;  */

/* WARNING: Possible PIC construction at 0x00010776692c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107766930) */
/* WARNING: Removing unreachable block (ram,0x000107766948) */
/* WARNING: Removing unreachable block (ram,0x00010776695c) */
/* WARNING: Removing unreachable block (ram,0x000107766940) */
/* WARNING: Removing unreachable block (ram,0x000107768930) */

void FUN_1077668d4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puStack_2a0;
  undefined1 *puStack_298;
  long lStack_290;
  undefined8 *puStack_288;
  undefined1 **ppuStack_280;
  undefined *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined1 auStack_240 [280];
  undefined1 auStack_128 [120];
  undefined1 auStack_b0 [16];
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  undefined8 *puStack_40;
  
  func_0x00010776884c();
  puVar1 = (undefined8 *)(param_1 + 8);
  func_0x0001075725a0();
  func_0x0001077688f4();
  *puVar1 = &PTR_DAT_1109d5af8;
  puVar1[1] = param_1;
  puVar1[2] = param_2;
  puVar1[3] = param_4;
  uStack_68 = 0x107766930;
  uStack_90 = param_4;
  lStack_88 = param_2;
  lStack_80 = param_3;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  puStack_40 = puVar1;
  func_0x00010776884c(param_3,param_3);
  uStack_260 = *(undefined8 *)(param_3 + 0x118);
  lStack_258 = *(long *)(param_3 + 0x120);
  uStack_98 = extraout_x8;
  if (lStack_258 != 0) {
    do {
      func_0x0001077688e4();
    } while (extraout_w10 != 0);
  }
  func_0x000107751334(auStack_240);
  func_0x0001075796ac(auStack_b0,1);
  puVar1 = puStack_a0;
  puStack_a0[2] = 0;
  *puStack_a0 = &PTR_FUN_1109d0c88;
  puStack_a0[1] = 0;
  lStack_248 = lStack_258;
  uStack_250 = uStack_260;
  if (lStack_258 != 0) {
    do {
      func_0x0001077688e4();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001075797c0(puVar1 + 3,param_2 + 0x48,&uStack_250);
  func_0x000107267e68(&uStack_250);
  puStack_268 = puStack_a0;
  puStack_a0 = (undefined8 *)0x0;
  puStack_270 = puStack_268 + 3;
  func_0x000107579a38(auStack_b0);
  func_0x00010757945c(auStack_128,&puStack_270);
  func_0x000107267e68(&puStack_270);
  puVar4 = auStack_240;
  func_0x0001073ebfe0(auStack_58);
  func_0x000107267da8(auStack_240);
  puVar1 = &uStack_260;
  func_0x000107267e68();
  func_0x000107768838(uStack_98);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107267da8(auStack_240);
  puVar2 = &uStack_260;
  func_0x000107267e68();
  func_0x00010776886c();
  puStack_278 = &DAT_107766ac0;
  puVar3 = puVar2 + 9;
  puVar5 = puVar4;
  lStack_290 = param_2 + 0x48;
  puStack_288 = puVar1;
  ppuStack_280 = &puStack_70;
  func_0x000107375ad0();
  puStack_2a0 = puVar3;
  puStack_298 = puVar5;
  while (puStack_2a0 != (undefined8 *)0x0) {
    func_0x00010745df58(puVar4,*(undefined8 *)(puStack_298 + 0x38));
    func_0x000107375b30(&puStack_2a0);
  }
  func_0x00010745df58(puVar4,puVar2[0xd]);
  return;
}



/* Entry: 107767440; end: 10776744f;  */

void FUN_107767440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010776744c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x68) + 0x50))();
  return;
}



/* Entry: 107768064; end: 107768077;  */

void FUN_107768064(void)

{
  func_0x000107768190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10776818c; end: 10776818f;  */

void FUN_10776818c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107768318; end: 1077683af;  */

undefined8 * FUN_107768318(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  func_0x000107768940();
  func_0x0001077683b0();
  func_0x000107768a44(*param_3);
  func_0x0001077689d0();
  func_0x000107768998();
  func_0x0001072c9f9c(param_1,8);
  func_0x000107768968();
  *param_1 = &PTR_DAT_1109d5988;
  func_0x000107324e48(param_1 + 9,param_2);
  uVar1 = *param_3;
  param_1[0xe] = param_3[1];
  param_1[0xd] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  return param_1;
}



/* Entry: 1077684f4; end: 1077684fb;  */

void FUN_1077684f4(void)

{
  return;
}



/* Entry: 10776865c; end: 107768703;  */

void FUN_10776865c(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_d9;
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [104];
  undefined8 uStack_28;
  
  func_0x00010776884c();
  uStack_28 = extraout_x8;
  (**(code **)(**(long **)(param_2 + 8) + 0x28))(auStack_d8);
  func_0x0001077765a4(auStack_98,auStack_d8,&uStack_d9);
  FUN_107776500(param_1,auStack_98);
  func_0x00010726af18(auStack_90);
  func_0x000104c3323c();
  func_0x000107768838(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(auStack_90);
  func_0x000104c3323c(auStack_d8);
  func_0x00010776886c();
  func_0x000107768a70();
  func_0x000107768970();
  func_0x000107768988();
  return;
}



/* Entry: 107768838; end: 107768a7b;  */

void FUN_107768838(void)

{
  return;
}



/* Entry: 107769468; end: 1077694e3;  */

undefined1 * FUN_107769468(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  long extraout_x9;
  undefined1 auStack_a0 [120];
  undefined8 uStack_28;
  
  puVar1 = auStack_a0;
  func_0x0001077698dc();
  uStack_28 = extraout_x8;
  func_0x000107753a9c(auStack_a0,extraout_x9 + 0x48);
  func_0x0001074d1ee8(param_1,auStack_a0,1);
  func_0x000107296ad0();
  func_0x0001077698c8(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000107296ad0(auStack_a0);
  func_0x0001077698ec();
  func_0x000100060934(extraout_x8_00,&DAT_10f3dd68b);
  *(undefined8 *)(extraout_x8_00 + 0x30) = 0xffffffffffffffff;
  return extraout_x8_00;
}



/* Entry: 107769804; end: 1077698b3;  */

/* WARNING: Possible PIC construction at 0x000107776770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001077766d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107776774) */
/* WARNING: Removing unreachable block (ram,0x0001077766d8) */

int * FUN_107769804(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 *param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined1 in_ZR;
  bool bVar5;
  undefined1 uVar6;
  long *plVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined1 extraout_w8;
  int iVar18;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined4 *extraout_x8_04;
  long lVar19;
  long extraout_x8_05;
  long *plVar20;
  int *piVar21;
  long lVar22;
  undefined1 *unaff_x22;
  long *plVar23;
  int *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  int aiStack_50 [2];
  undefined1 auStack_48 [8];
  int *piStack_40;
  undefined8 uStack_38;
  
  piVar8 = aiStack_50;
  puVar12 = &stack0xfffffffffffffff0;
  func_0x0001077698dc();
  uStack_38 = extraout_x8_01;
  func_0x0001075794c4(aiStack_50,1);
  piVar21 = piStack_40;
  piStack_40[4] = 0;
  piStack_40[5] = 0;
  *(undefined ***)piStack_40 = &PTR_DAT_1109d0da0;
  piStack_40[2] = 0;
  piStack_40[3] = 0;
  func_0x000107539b24(piStack_40 + 6,param_6);
  piVar4 = piStack_40;
  piStack_40 = (int *)0x0;
  *param_5 = piVar4 + 6;
  param_5[1] = piVar4;
  func_0x000107579550();
  func_0x0001077698c8(uStack_38);
  if ((bool)in_ZR) {
    return piVar8;
  }
  ___stack_chk_fail();
  __ZNSt3__119__shared_weak_countD2Ev(piVar21);
  func_0x000107579550(aiStack_50);
  puVar24 = &UNK_1077698b4;
  func_0x0001077698ec();
  piVar4 = aiStack_50;
  piVar9 = (int *)&stack0xfffffffffffffff0;
  puVar16 = auStack_48;
  puVar11 = &stack0x00000040;
  while( true ) {
    puVar15 = puVar16;
    *(undefined8 *)((long)piVar4 + -0x40) = unaff_x24;
    *(int **)((long)piVar4 + -0x38) = unaff_x23;
    *(undefined1 **)((long)piVar4 + -0x30) = unaff_x22;
    *(int **)((long)piVar4 + -0x28) = piVar21;
    *(undefined1 **)((long)piVar4 + -0x20) = puVar11;
    *(int **)((long)piVar4 + -0x18) = piVar8;
    *(undefined1 **)((long)piVar4 + -0x10) = puVar12;
    *(undefined **)((long)piVar4 + -8) = puVar24;
    puVar12 = (undefined1 *)((long)piVar4 + -0x10);
    func_0x00010777d250();
    *(undefined8 *)((long)piVar4 + -0x48) = extraout_x8_02;
    iVar18 = *piVar9;
    piVar10 = piVar9;
    puVar16 = puVar15;
    if (iVar18 == 7) break;
    if (iVar18 == 5) {
      param_1 = (double)NEON_ucvtf(*(undefined8 *)(piVar9 + 2));
      goto code_r0x000107776628;
    }
    if (iVar18 == 6) {
      *(char *)(piVar8 + 2) = (char)piVar9[2];
      iVar18 = 1;
code_r0x000107776630:
      uVar6 = 1;
      piVar8[0x1a] = iVar18;
      puVar15 = puVar11;
      goto code_r0x000107776634;
    }
    if (iVar18 == 3) {
      param_1 = *(double *)(piVar9 + 2);
code_r0x000107776628:
      *(double *)(piVar8 + 2) = param_1;
      iVar18 = 2;
      goto code_r0x000107776630;
    }
    if (iVar18 == 4) {
      param_1 = (double)*(long *)(piVar9 + 2);
      goto code_r0x000107776628;
    }
    uVar6 = iVar18 == 1;
    puVar11 = puVar15;
    if ((bool)uVar6) {
      *(undefined **)((long)piVar4 + -0xe0) = &UNK_10e52b660;
      *(undefined8 *)((long)piVar4 + -0xd8) = 0;
      *(undefined8 *)((long)piVar4 + -0xd0) = 0;
      *(undefined8 *)((long)piVar4 + -200) = 0;
      puVar16 = *(undefined1 **)(*(long *)(piVar9 + 2) + 0x18);
      func_0x0001072962ac((undefined1 *)((long)piVar4 + -0xe0));
      piVar10 = piVar9 + 2;
      func_0x000104c2db28();
      *(int **)((long)piVar4 + -0xf0) = piVar10;
      *(undefined1 **)((long)piVar4 + -0xe8) = puVar16;
      unaff_x22 = (undefined1 *)((long)piVar4 + -0xc0);
      if (piVar10 == (int *)0x0) {
        puVar16 = (undefined1 *)((long)piVar4 + -0xe0);
        func_0x000107278fec((undefined1 *)((long)piVar4 + -0xc0));
        param_1 = *(double *)((long)piVar4 + -0xc0);
        *(undefined8 *)(piVar8 + 4) = *(undefined8 *)((long)piVar4 + -0xb8);
        *(double *)(piVar8 + 2) = param_1;
        *(undefined8 *)((long)piVar4 + -0xc0) = 0;
        *(undefined8 *)((long)piVar4 + -0xb8) = 0;
        piVar8[0x1a] = 9;
        func_0x00010726b264((undefined1 *)((long)piVar4 + -0xc0));
        piVar10 = (int *)((long)piVar4 + -0xe0);
        func_0x00010726ae88();
        goto code_r0x000107776634;
      }
      piVar21 = *(int **)((long)piVar4 + -0xe8);
      func_0x00010777db48((undefined1 *)((long)piVar4 + -0xc0));
      puVar24 = &UNK_1077766d8;
      piVar4 = (int *)((long)piVar4 + -0x110);
      piVar9 = piVar10;
    }
    else {
      bVar5 = iVar18 == 2;
      if (bVar5) {
        func_0x00010777d23c(*(undefined8 *)((long)piVar4 + -0x48));
        if (bVar5) {
          *(undefined8 *)((long)piVar4 + -0x20) = *(undefined8 *)((long)piVar4 + -0x20);
          *(undefined8 *)((long)piVar4 + -0x18) = *(undefined8 *)((long)piVar4 + -0x18);
          *(undefined8 *)((long)piVar4 + -0x10) = *(undefined8 *)((long)piVar4 + -0x10);
          *(undefined8 *)((long)piVar4 + -8) = *(undefined8 *)((long)piVar4 + -8);
          func_0x0001072ddd80(piVar8 + 2,piVar9 + 2);
          return piVar8;
        }
        goto code_r0x0001077767c0;
      }
      *(undefined8 *)((long)piVar4 + -0xd8) = 0;
      *(undefined8 *)((long)piVar4 + -0xd0) = 0;
      *(undefined8 *)((long)piVar4 + -0xe0) = 0;
      puVar16 = (undefined1 *)((*(long **)(piVar9 + 2))[1] - **(long **)(piVar9 + 2) >> 6);
      piVar10 = (int *)((long)piVar4 + -0xe0);
      func_0x0001074b01dc();
      piVar21 = (int *)**(undefined8 **)(piVar9 + 2);
      unaff_x23 = (int *)(*(undefined8 **)(piVar9 + 2))[1];
      unaff_x22 = (undefined1 *)((long)piVar4 + -0xc0);
      uVar6 = piVar21 == unaff_x23;
      if ((bool)uVar6) {
        puVar16 = (undefined1 *)((long)piVar4 + -0xe0);
        func_0x000107277aa4((undefined1 *)((long)piVar4 + -0xc0));
        param_1 = *(double *)((long)piVar4 + -0xc0);
        *(undefined8 *)(piVar8 + 4) = *(undefined8 *)((long)piVar4 + -0xb8);
        *(double *)(piVar8 + 2) = param_1;
        *(undefined8 *)((long)piVar4 + -0xc0) = 0;
        *(undefined8 *)((long)piVar4 + -0xb8) = 0;
        piVar8[0x1a] = 8;
        func_0x00010726b188((undefined1 *)((long)piVar4 + -0xc0));
        piVar10 = (int *)((long)piVar4 + -0xe0);
        func_0x000107277d70();
        piVar9 = piVar21;
        goto code_r0x000107776634;
      }
      func_0x00010777dcd4((undefined1 *)((long)piVar4 + -0xc0));
      puVar24 = &UNK_107776774;
      piVar4 = (int *)((long)piVar4 + -0x110);
      piVar9 = piVar10;
    }
  }
  piVar8[0x1a] = 0;
  uVar6 = 1;
  puVar15 = puVar11;
  piVar9 = piVar21;
code_r0x000107776634:
  func_0x00010777d23c(*(undefined8 *)((long)piVar4 + -0x48));
  if ((bool)uVar6) {
    return piVar10;
  }
code_r0x0001077767c0:
  uVar6 = 0;
  ___stack_chk_fail();
  puVar11 = (undefined1 *)((long)piVar4 + -0xe0);
  func_0x00010726ae88();
  func_0x00010777d638();
  *(undefined8 *)((long)piVar4 + -0x170) = unaff_x28;
  *(undefined8 *)((long)piVar4 + -0x168) = unaff_x27;
  *(undefined8 *)((long)piVar4 + -0x160) = unaff_x26;
  *(undefined8 *)((long)piVar4 + -0x158) = unaff_x25;
  *(undefined8 *)((long)piVar4 + -0x150) = unaff_x24;
  *(int **)((long)piVar4 + -0x148) = unaff_x23;
  *(undefined1 **)((long)piVar4 + -0x140) = unaff_x22;
  *(int **)((long)piVar4 + -0x138) = piVar9;
  *(undefined1 **)((long)piVar4 + -0x130) = puVar15;
  *(int **)((long)piVar4 + -0x128) = piVar10;
  *(undefined1 **)((long)piVar4 + -0x120) = puVar12;
  *(undefined **)((long)piVar4 + -0x118) = &LAB_107776804;
  func_0x00010777d250();
  *(undefined8 *)((long)piVar4 + -0x180) = extraout_x8_03;
  iVar18 = *(int *)(puVar11 + 0x68);
  if (iVar18 == 0) {
code_r0x000107776900:
    *piVar10 = 7;
    puVar16 = puVar15;
  }
  else {
    uVar6 = iVar18 + -1 == 3;
    puVar12 = puVar11;
    switch(iVar18 + -1) {
    case 0:
      uVar3 = puVar11[8];
      *piVar10 = 6;
      *(undefined1 *)(piVar10 + 2) = uVar3;
      puVar16 = puVar15;
      break;
    case 1:
      uVar17 = *(undefined8 *)(puVar11 + 8);
      *piVar10 = 3;
      *(undefined8 *)(piVar10 + 2) = uVar17;
      puVar16 = puVar15;
      break;
    case 2:
      func_0x000104c2fe00((undefined1 *)((long)piVar4 + -0x200),puVar11 + 8);
      func_0x000104c33004(piVar10,(undefined1 *)((long)piVar4 + -0x200));
      puVar11 = (undefined1 *)((long)piVar4 + -0x200);
      func_0x000104c2f714();
      puVar16 = puVar15;
      break;
    case 3:
      func_0x00010777d23c(*(undefined8 *)((long)piVar4 + -0x180));
      puVar16 = puVar15;
      if ((bool)uVar6) {
        uVar17 = *(undefined8 *)((long)piVar4 + -0x120);
        uVar25 = *(undefined8 *)((long)piVar4 + -0x118);
        func_0x00010777de70(piVar10,puVar11 + 8);
        *(undefined8 *)((long)piVar4 + -0x350) = unaff_d11;
        *(undefined8 *)((long)piVar4 + -0x348) = unaff_d10;
        *(undefined8 *)((long)piVar4 + -0x340) = unaff_d9;
        *(undefined8 *)((long)piVar4 + -0x338) = unaff_d8;
        *(undefined1 **)((long)piVar4 + -0x330) = puVar11;
        *(int **)((long)piVar4 + -0x328) = piVar9;
        *(undefined1 **)((long)piVar4 + -800) = puVar15;
        *(int **)((long)piVar4 + -0x318) = piVar10;
        *(undefined8 *)((long)piVar4 + -0x310) = uVar17;
        *(undefined8 *)((long)piVar4 + -0x308) = uVar25;
        *(undefined8 *)((long)piVar4 + -0x358) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        func_0x00010785e024();
        func_0x00010002b838((undefined1 *)((long)piVar4 + -0x4c8),&UNK_10f42b453);
        puVar12 = (undefined1 *)((long)piVar4 + -0x498);
        func_0x000107268798((undefined1 *)((long)piVar4 + -0x498),
                            (undefined1 *)((long)piVar4 + -0x4c8));
        *(undefined4 *)((long)piVar4 + -0x458) = 3;
        *(double *)((long)piVar4 + -0x450) = param_1;
        *(undefined4 *)((long)piVar4 + -0x418) = 3;
        *(undefined8 *)((long)piVar4 + -0x410) = param_2;
        *(undefined4 *)((long)piVar4 + -0x3d8) = 3;
        *(undefined8 *)((long)piVar4 + -0x3d0) = param_3;
        *(undefined4 *)((long)piVar4 + -0x398) = 3;
        *(undefined8 *)((long)piVar4 + -0x390) = param_4;
        puVar16 = (undefined1 *)((long)piVar4 + -0x498);
        func_0x000107268bc4((undefined1 *)((long)piVar4 + -0x4b0),puVar16,5);
        *extraout_x8_04 = 0;
        uVar17 = *(undefined8 *)((long)piVar4 + -0x4b0);
        *(undefined8 *)(extraout_x8_04 + 4) = *(undefined8 *)((long)piVar4 + -0x4a8);
        *(undefined8 *)(extraout_x8_04 + 2) = uVar17;
        *(undefined8 *)((long)piVar4 + -0x4b0) = 0;
        *(undefined8 *)((long)piVar4 + -0x4a8) = 0;
        func_0x000104c33108((undefined1 *)((long)piVar4 + -0x4b0));
        lVar19 = 0x100;
        do {
          piVar21 = (int *)(puVar12 + lVar19);
          func_0x000104c3323c();
          lVar19 = lVar19 + -0x40;
          uVar6 = lVar19 == -0x40;
        } while (!(bool)uVar6);
        func_0x00010785e438();
        func_0x00010785e450(*(undefined8 *)((long)piVar4 + -0x358));
        if ((bool)uVar6) {
          return piVar21;
        }
        ___stack_chk_fail();
        lVar19 = 0x100;
        do {
          func_0x000104c3323c(puVar12 + lVar19);
          lVar19 = lVar19 + -0x40;
        } while (lVar19 != -0x40);
        func_0x00010785e438();
        __Unwind_Resume(piVar21);
        *(undefined1 **)((long)piVar4 + -0x4f0) = puVar12;
        *(int **)((long)piVar4 + -0x4e8) = piVar21;
        *(undefined1 **)((long)piVar4 + -0x4e0) = (undefined1 *)((long)piVar4 + -0x310);
        *(undefined **)((long)piVar4 + -0x4d8) = &UNK_10785e3b0;
        *(undefined8 *)((long)piVar4 + -0x4f8) = 0;
        func_0x0001073ca0ec((undefined1 *)((long)piVar4 + -0x4f8),puVar16 + 0xc);
        func_0x0001073ca0ec((undefined1 *)((long)piVar4 + -0x4f8),puVar16);
        func_0x0001073ca0ec((undefined1 *)((long)piVar4 + -0x4f8),puVar16 + 4);
        func_0x0001073ca0ec((undefined1 *)((long)piVar4 + -0x4f8),puVar16 + 8);
        return *(int **)((long)piVar4 + -0x4f8);
      }
      goto code_r0x000107776e28;
    default:
      uVar6 = iVar18 + -5 == 3;
      puVar15 = puVar16;
      switch(iVar18 + -5) {
      case 0:
        goto code_r0x000107776900;
      case 1:
        *(undefined8 *)((long)piVar4 + -0x290) = 0;
        *(undefined8 *)((long)piVar4 + -0x288) = 0;
        *(undefined8 *)((long)piVar4 + -0x280) = 0;
        puVar12 = (undefined1 *)((long)piVar4 + -0x290);
        func_0x000107289660(puVar12,1);
        func_0x000107289720((undefined1 *)((long)piVar4 + -0x200),puVar12,
                            *(long *)((long)piVar4 + -0x288) - *(long *)((long)piVar4 + -0x290) >> 6
                            ,(undefined1 *)((long)piVar4 + -0x280));
        func_0x000107777c14(*(undefined8 *)((long)piVar4 + -0x1f0));
        *(long *)((long)piVar4 + -0x1f0) = *(long *)((long)piVar4 + -0x1f0) + 0x40;
        func_0x0001072896a0((undefined1 *)((long)piVar4 + -0x290),
                            (undefined1 *)((long)piVar4 + -0x200));
        uVar17 = *(undefined8 *)((long)piVar4 + -0x288);
        func_0x00010777db68();
        lVar19 = *(long *)(puVar11 + 8);
        lVar1 = *(long *)(puVar11 + 0x10);
        *(undefined8 *)((long)piVar4 + -0x288) = uVar17;
        for (; uVar6 = lVar19 == lVar1, !(bool)uVar6; lVar19 = lVar19 + 0x120) {
          if (*(char *)(lVar19 + 0x98) == '\x01') {
            func_0x00010002b838((undefined1 *)((long)piVar4 + -0x2a8),&UNK_10f4271a1);
            func_0x000107268798((undefined1 *)((long)piVar4 + -0x200),
                                (undefined1 *)((long)piVar4 + -0x2a8));
            func_0x000104c2fe00((undefined1 *)((long)piVar4 + -0x238),lVar19 + 0x38);
            func_0x000104c33004((undefined1 *)((long)piVar4 + -0x1c0),
                                (undefined1 *)((long)piVar4 + -0x238));
            func_0x000107268bc4((undefined1 *)((long)piVar4 + -0x278),
                                (undefined1 *)((long)piVar4 + -0x200),2);
            func_0x000107765870((undefined1 *)((long)piVar4 + -0x290),
                                (undefined1 *)((long)piVar4 + -0x278));
            func_0x000104c33108((undefined1 *)((long)piVar4 + -0x278));
            lVar22 = 0x40;
            do {
              func_0x000104c3323c((undefined1 *)((long)piVar4 + lVar22 + -0x200));
              lVar22 = lVar22 + -0x40;
            } while (lVar22 != -0x40);
            func_0x000104c2f714((undefined1 *)((long)piVar4 + -0x238));
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      ((undefined1 *)((long)piVar4 + -0x2a8));
          }
          else {
            func_0x0001077560f4((undefined1 *)((long)piVar4 + -0x290),lVar19);
            *(undefined **)((long)piVar4 + -0x2c8) = &UNK_10e52b660;
            *(undefined8 *)((long)piVar4 + -0x2b8) = 0;
            *(undefined8 *)((long)piVar4 + -0x2b0) = 0;
            *(undefined8 *)((long)piVar4 + -0x2c0) = 0;
            if (*(char *)(lVar19 + 0xa8) == '\x01') {
              puVar12 = (undefined1 *)((long)piVar4 + -0x2c8);
              puVar24 = &UNK_10f4271a7;
              func_0x000107777c54();
              if (((ulong)puVar24 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                uVar17 = *(undefined8 *)(lVar19 + 0xa0);
                *(undefined4 *)(puVar12 + 0x38) = 3;
                *(undefined8 *)(puVar12 + 0x40) = uVar17;
              }
            }
            if (*(char *)(lVar19 + 0xc0) == '\x01') {
              *(undefined8 *)((long)piVar4 + -0x278) = 0;
              *(undefined8 *)((long)piVar4 + -0x270) = 0;
              *(undefined8 *)((long)piVar4 + -0x268) = 0;
              lVar2 = (*(long **)(lVar19 + 0xb0))[1];
              for (lVar22 = **(long **)(lVar19 + 0xb0); lVar22 != lVar2; lVar22 = lVar22 + 0x38) {
                func_0x0001077560f4((undefined1 *)((long)piVar4 + -0x278),lVar22);
              }
              *(undefined8 *)((long)piVar4 + -0x2e0) = 0;
              *(undefined8 *)((long)piVar4 + -0x2d8) = 0;
              *(undefined8 *)((long)piVar4 + -0x2d0) = 0;
              func_0x00010002b838((undefined1 *)((long)piVar4 + -0x300),&DAT_10f3dd68b);
              uVar13 = *(ulong *)((long)piVar4 + -0x2d8);
              if (uVar13 < *(ulong *)((long)piVar4 + -0x2d0)) {
                func_0x000107777cd8(uVar13,(undefined1 *)((long)piVar4 + -0x300));
                lVar22 = uVar13 + 0x40;
              }
              else {
                puVar12 = (undefined1 *)((long)piVar4 + -0x2e0);
                func_0x000107289660(puVar12,((long)(uVar13 - *(long *)((long)piVar4 + -0x2e0)) >> 6)
                                            + 1);
                func_0x000107289720((undefined1 *)((long)piVar4 + -0x200),puVar12,
                                    *(long *)((long)piVar4 + -0x2d8) -
                                    *(long *)((long)piVar4 + -0x2e0) >> 6,
                                    (undefined1 *)((long)piVar4 + -0x2d0));
                func_0x000107777cd8(*(undefined8 *)((long)piVar4 + -0x1f0),
                                    (undefined1 *)((long)piVar4 + -0x300));
                *(long *)((long)piVar4 + -0x1f0) = *(long *)((long)piVar4 + -0x1f0) + 0x40;
                func_0x0001072896a0((undefined1 *)((long)piVar4 + -0x2e0),
                                    (undefined1 *)((long)piVar4 + -0x200));
                lVar22 = *(long *)((long)piVar4 + -0x2d8);
                func_0x00010777db68();
              }
              *(long *)((long)piVar4 + -0x2d8) = lVar22;
              func_0x00010777dab8();
              func_0x00010777dd48();
              func_0x000107765870((undefined1 *)((long)piVar4 + -0x2e0),
                                  (undefined1 *)((long)piVar4 + -0x200));
              func_0x000104c33108((undefined1 *)((long)piVar4 + -0x200));
              func_0x000107327958((undefined1 *)((long)piVar4 + -0x300),
                                  (undefined1 *)((long)piVar4 + -0x2e0));
              puVar12 = (undefined1 *)((long)piVar4 + -0x2c8);
              uVar13 = 0;
              func_0x00010775e124();
              if ((uVar13 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                uVar25 = *(undefined8 *)((long)piVar4 + -0x2f8);
                uVar17 = *(undefined8 *)((long)piVar4 + -0x300);
                *(undefined8 *)((long)piVar4 + -0x300) = 0;
                *(undefined8 *)((long)piVar4 + -0x2f8) = 0;
                *(undefined4 *)(puVar12 + 0x38) = 0;
                *(undefined8 *)(puVar12 + 0x48) = uVar25;
                *(undefined8 *)(puVar12 + 0x40) = uVar17;
                *(undefined8 *)((long)piVar4 + -0x200) = 0;
                *(undefined8 *)((long)piVar4 + -0x1f8) = 0;
                func_0x000104c33108((undefined1 *)((long)piVar4 + -0x200));
              }
              func_0x000104c33108((undefined1 *)((long)piVar4 + -0x300));
              func_0x000107269124((undefined1 *)((long)piVar4 + -0x2e0));
              func_0x000107269124((undefined1 *)((long)piVar4 + -0x278));
            }
            if (*(char *)(lVar19 + 0xd8) == '\x01') {
              uVar17 = *(undefined8 *)(lVar19 + 200);
              *(undefined8 *)((long)piVar4 + -0x1f0) = *(undefined8 *)(lVar19 + 0xd0);
              *(undefined8 *)((long)piVar4 + -0x1f8) = uVar17;
              *(undefined4 *)((long)piVar4 + -0x198) = 4;
              func_0x00010777daf4((undefined1 *)((long)piVar4 + -0x278),
                                  (undefined1 *)((long)piVar4 + -0x200));
              puVar24 = &DAT_10f415bdb;
              func_0x000107777c54((undefined1 *)((long)piVar4 + -0x2c8));
              if (((ulong)puVar24 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                func_0x00010777ddb8();
              }
              func_0x00010777dd1c();
              func_0x00010777ddb0();
            }
            if (*(char *)(lVar19 + 0x108) == '\x01') {
              uVar17 = *(undefined8 *)(lVar19 + 0xf8);
              *(undefined8 *)((long)piVar4 + -0x1f0) = *(undefined8 *)(lVar19 + 0x100);
              *(undefined8 *)((long)piVar4 + -0x1f8) = uVar17;
              *(undefined4 *)((long)piVar4 + -0x198) = 4;
              func_0x00010777daf4((undefined1 *)((long)piVar4 + -0x278),
                                  (undefined1 *)((long)piVar4 + -0x200));
              uVar13 = 0;
              func_0x000107777d1c((undefined1 *)((long)piVar4 + -0x2c8));
              if ((uVar13 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                func_0x00010777ddb8();
              }
              func_0x00010777dd1c();
              func_0x00010777ddb0();
            }
            if (*(char *)(lVar19 + 0x118) == '\x01') {
              puVar12 = (undefined1 *)((long)piVar4 + -0x2c8);
              uVar13 = 0;
              func_0x000107777d1c();
              if ((uVar13 & 1) != 0) {
                func_0x00010777dcec();
                func_0x000100060964();
                uVar17 = *(undefined8 *)(lVar19 + 0x110);
                *(undefined4 *)(puVar12 + 0x38) = 3;
                *(undefined8 *)(puVar12 + 0x40) = uVar17;
              }
            }
            func_0x000104c33260((undefined1 *)((long)piVar4 + -0x200),
                                (undefined1 *)((long)piVar4 + -0x2c8));
            func_0x0001075726d4((undefined1 *)((long)piVar4 + -0x290),
                                (undefined1 *)((long)piVar4 + -0x200));
            func_0x000104c335c0((undefined1 *)((long)piVar4 + -0x200));
            func_0x000104c33548((undefined1 *)((long)piVar4 + -0x2c8));
          }
        }
        func_0x000107327958((undefined1 *)((long)piVar4 + -0x200),
                            (undefined1 *)((long)piVar4 + -0x290));
        func_0x00010777db2c();
        puVar11 = (undefined1 *)((long)piVar4 + -0x290);
        break;
      case 2:
        func_0x00010777d23c(*(undefined8 *)((long)piVar4 + -0x180));
        if ((bool)uVar6) {
          puVar12 = puVar11 + 8;
          uVar17 = *(undefined8 *)((long)piVar4 + -0x120);
          uVar25 = *(undefined8 *)((long)piVar4 + -0x118);
          func_0x00010777de70(piVar10);
          *(undefined8 *)((long)piVar4 + -0x350) = unaff_x28;
          *(undefined8 *)((long)piVar4 + -0x348) = unaff_x27;
          *(undefined8 *)((long)piVar4 + -0x340) = unaff_x24;
          *(undefined **)((long)piVar4 + -0x338) = &UNK_10e52b660;
          *(undefined1 **)((long)piVar4 + -0x330) = puVar11;
          *(int **)((long)piVar4 + -0x328) = piVar9;
          *(undefined1 **)((long)piVar4 + -800) = puVar16;
          *(int **)((long)piVar4 + -0x318) = piVar10;
          *(undefined8 *)((long)piVar4 + -0x310) = uVar17;
          *(undefined8 *)((long)piVar4 + -0x308) = uVar25;
          piVar8 = (int *)((long)piVar4 + -0x530);
          func_0x00010775f634();
          *(undefined8 *)((long)piVar4 + -0x358) = extraout_x8;
          func_0x000100060964((undefined1 *)((long)piVar4 + -0x480),&DAT_10f68f148);
          func_0x00010735d778((undefined1 *)((long)piVar4 + -0x448),
                              (undefined1 *)((long)piVar4 + -0x480),puVar12);
          func_0x000100060964((undefined1 *)((long)piVar4 + -0x4b8),&DAT_10f3682ba);
          func_0x000104c318bc((undefined1 *)((long)piVar4 + -0x3d0),
                              (undefined1 *)((long)piVar4 + -0x4b8));
          uVar6 = puVar12[0x38];
          *(undefined4 *)((long)piVar4 + -0x398) = 6;
          *(undefined1 *)((long)piVar4 + -0x390) = uVar6;
          piVar21 = (int *)((long)piVar4 + -0x4f9);
          func_0x000107268194((undefined1 *)((long)piVar4 + -0x4f8),2,piVar21,
                              (undefined1 *)((long)piVar4 + -0x4fa),
                              (undefined1 *)((long)piVar4 + -0x4fb));
          for (lVar19 = 0; lVar19 != 0xf0; lVar19 = lVar19 + 0x78) {
            *(undefined1 **)((long)piVar4 + -0x4c0) = (undefined1 *)((long)piVar4 + -0x4f8);
            piVar21 = (int *)((long)piVar4 + lVar19 + -0x410);
            func_0x000107268220((undefined1 *)((long)piVar4 + -0x4d8),
                                (undefined1 *)((long)piVar4 + -0x4c0));
          }
          lVar19 = 0x78;
          do {
            func_0x000104c32ad0((undefined1 *)((long)piVar4 + -0x448) + lVar19);
            lVar19 = lVar19 + -0x78;
          } while (lVar19 != -0x78);
          func_0x000104c2f714((undefined1 *)((long)piVar4 + -0x4b8));
          func_0x00010775f604();
          uVar6 = puVar12[0x58] == '\x01';
          if ((bool)uVar6) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      ((undefined1 *)((long)piVar4 + -0x518),puVar12 + 0x40);
            func_0x000107268798((undefined1 *)((long)piVar4 + -0x448),
                                (undefined1 *)((long)piVar4 + -0x518));
            func_0x000100060964((undefined1 *)((long)piVar4 + -0x480),&UNK_10f63898c);
            func_0x000107267f10((undefined1 *)((long)piVar4 + -0x4f8),
                                (undefined1 *)((long)piVar4 + -0x480));
            func_0x000104c3302c();
            func_0x00010775f604();
            func_0x000104c3323c((undefined1 *)((long)piVar4 + -0x448));
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      ((undefined1 *)((long)piVar4 + -0x518));
          }
          plVar23 = (long *)((long)piVar4 + -0x4f8);
          func_0x000104c33260((undefined1 *)((long)piVar4 + -0x530));
          *piVar10 = 1;
          uVar17 = *(undefined8 *)((long)piVar4 + -0x530);
          *(undefined8 *)(piVar10 + 4) = *(undefined8 *)((long)piVar4 + -0x528);
          *(undefined8 *)(piVar10 + 2) = uVar17;
          *(undefined8 *)((long)piVar4 + -0x530) = 0;
          *(undefined8 *)((long)piVar4 + -0x528) = 0;
          func_0x000104c335c0();
          func_0x00010775f60c();
          func_0x00010775f5b0(*(undefined8 *)((long)piVar4 + -0x358));
          if ((bool)uVar6) {
            return piVar8;
          }
          ___stack_chk_fail();
          func_0x00010775f604();
          func_0x000104c3323c((undefined1 *)((long)piVar4 + -0x448));
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((undefined1 *)((long)piVar4 + -0x518));
          func_0x00010775f60c();
          func_0x00010775f5dc();
          *(undefined8 *)((long)piVar4 + -0x570) = unaff_x28;
          *(undefined8 *)((long)piVar4 + -0x568) = unaff_x27;
          *(undefined1 **)((long)piVar4 + -0x560) = (undefined1 *)((long)piVar4 + -0x448);
          *(undefined1 **)((long)piVar4 + -0x558) = puVar12;
          *(undefined8 *)((long)piVar4 + -0x550) = 0xffffffffffffff88;
          *(int **)((long)piVar4 + -0x548) = piVar8;
          *(undefined1 **)((long)piVar4 + -0x540) = (undefined1 *)((long)piVar4 + -0x310);
          *(undefined **)((long)piVar4 + -0x538) = &UNK_10775f38c;
          plVar14 = plVar23;
          func_0x00010775f634();
          *(undefined8 *)((long)piVar4 + -0x578) = extraout_x8_00;
          plVar20 = plVar14 + 1;
          plVar7 = plVar20;
          (**(code **)(*plVar14 + 0x18))();
          if ((int)plVar7 == 0) {
            (**(code **)(*plVar23 + 0x68))((undefined1 *)((long)piVar4 + -0x5c8),plVar20);
            uVar6 = *(char *)((long)piVar4 + -0x590) == '\x01';
            if ((bool)uVar6) {
              func_0x000104c2fe00((undefined1 *)((long)piVar4 + -0x698),
                                  (undefined1 *)((long)piVar4 + -0x5c8));
              func_0x00010775f62c((undefined1 *)((long)piVar4 + -0x628),
                                  (undefined1 *)((long)piVar4 + -0x698));
              func_0x00010775f614();
              func_0x00010726b164((undefined1 *)((long)piVar4 + -0x628));
              piVar21 = (int *)((long)piVar4 + -0x698);
              func_0x000104c2f714(piVar21);
            }
            else {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                        (piVar21,&UNK_10f4260a7);
              *(undefined1 *)piVar8 = 0;
              *(undefined1 *)(piVar8 + 0x18) = 0;
            }
            func_0x00010775f5f4();
          }
          else {
            (**(code **)(*plVar23 + 0x28))((undefined1 *)((long)piVar4 + -0x588),plVar20,0);
            puVar12 = (undefined1 *)((long)piVar4 + -0x580);
            (**(code **)(*(long *)((long)piVar4 + -0x588) + 0x20))();
            if (puVar12 == (undefined1 *)0x0) {
              func_0x00010775f5e4();
              *(undefined1 *)piVar8 = 0;
              *(undefined1 *)(piVar8 + 0x18) = 0;
            }
            else {
              (**(code **)(*(long *)((long)piVar4 + -0x588) + 0x28))
                        ((undefined1 *)((long)piVar4 + -0x628),(undefined1 *)((long)piVar4 + -0x580)
                         ,0);
              (**(code **)(*(long *)((long)piVar4 + -0x628) + 0x68))
                        ((undefined1 *)((long)piVar4 + -0x5c8),(undefined1 *)((long)piVar4 + -0x620)
                        );
              func_0x0001072f5f6c((undefined1 *)((long)piVar4 + -0x628));
              if ((*(byte *)((long)piVar4 + -0x590) & 1) == 0) {
                func_0x00010775f5e4();
                *(undefined1 *)piVar8 = 0;
                *(undefined1 *)(piVar8 + 0x18) = 0;
              }
              else {
                func_0x000104c2fe00((undefined1 *)((long)piVar4 + -0x660),
                                    (undefined1 *)((long)piVar4 + -0x5c8));
                func_0x00010775f62c((undefined1 *)((long)piVar4 + -0x628),
                                    (undefined1 *)((long)piVar4 + -0x660));
                func_0x00010775f614();
                func_0x00010726b164((undefined1 *)((long)piVar4 + -0x628));
                func_0x000104c2f714((undefined1 *)((long)piVar4 + -0x660));
              }
              func_0x00010775f5f4();
            }
            piVar21 = (int *)((long)piVar4 + -0x588);
            func_0x0001072f5f6c(piVar21);
          }
          func_0x00010775f5b0(*(undefined8 *)((long)piVar4 + -0x578));
          if ((bool)uVar6) {
            return piVar21;
          }
          ___stack_chk_fail();
          func_0x00010775f5f4();
          func_0x0001072f5f6c((undefined1 *)((long)piVar4 + -0x588));
          func_0x00010775f5dc();
          *(undefined1 **)((long)piVar4 + -0x6b0) = (undefined1 *)((long)piVar4 + -0x540);
          *(undefined **)((long)piVar4 + -0x6a8) = &UNK_10775f590;
          piVar21 = (int *)((long)piVar4 + -0x6b1);
          func_0x00010726364c(piVar21);
          return piVar21;
        }
        goto code_r0x000107776e28;
      case 3:
        *(undefined8 *)((long)piVar4 + -0x270) = 0;
        *(undefined8 *)((long)piVar4 + -0x268) = 0;
        *(undefined8 *)((long)piVar4 + -0x278) = 0;
        func_0x00010777d398(*(undefined8 *)(puVar11 + 8));
        func_0x0001072ac134((undefined1 *)((long)piVar4 + -0x278));
        lVar1 = (*(long **)(puVar11 + 8))[1];
        for (lVar19 = **(long **)(puVar11 + 8); uVar6 = lVar19 == lVar1, !(bool)uVar6;
            lVar19 = lVar19 + 0x70) {
          func_0x00010777daf4((undefined1 *)((long)piVar4 + -0x200),lVar19);
          func_0x0001072aad1c((undefined1 *)((long)piVar4 + -0x278),
                              (undefined1 *)((long)piVar4 + -0x200));
          func_0x00010777db60();
        }
        func_0x00010777dd48();
        func_0x00010777db2c();
        puVar11 = (undefined1 *)((long)piVar4 + -0x278);
        break;
      default:
        plVar23 = (long *)(puVar11 + 8);
        lVar19 = *plVar23;
        *(undefined **)((long)piVar4 + -0x278) = &UNK_10e52b660;
        *(undefined8 *)((long)piVar4 + -0x270) = 0;
        *(undefined8 *)((long)piVar4 + -0x268) = 0;
        *(undefined8 *)((long)piVar4 + -0x260) = 0;
        uVar17 = *(undefined8 *)(lVar19 + 0x18);
        func_0x000104c32780((undefined1 *)((long)piVar4 + -0x278));
        func_0x000107348ee8();
        *(long **)((long)piVar4 + -0x2c8) = plVar23;
        *(undefined8 *)((long)piVar4 + -0x2c0) = uVar17;
        while (plVar23 != (long *)0x0) {
          uVar17 = *(undefined8 *)((long)piVar4 + -0x2c0);
          func_0x00010777da30((undefined1 *)((long)piVar4 + -0x200));
          func_0x000104c32844((undefined1 *)((long)piVar4 + -0x238),
                              (undefined1 *)((long)piVar4 + -0x278),uVar17,
                              (undefined1 *)((long)piVar4 + -0x200));
          func_0x00010777db60();
          func_0x0001072963cc((undefined1 *)((long)piVar4 + -0x2c8));
          plVar23 = *(long **)((long)piVar4 + -0x2c8);
        }
        func_0x000104c33260((undefined1 *)((long)piVar4 + -0x200),
                            (undefined1 *)((long)piVar4 + -0x278));
        *piVar10 = 1;
        uVar17 = *(undefined8 *)((long)piVar4 + -0x200);
        *(undefined8 *)(piVar10 + 4) = *(undefined8 *)((long)piVar4 + -0x1f8);
        *(undefined8 *)(piVar10 + 2) = uVar17;
        *(undefined8 *)((long)piVar4 + -0x200) = 0;
        *(undefined8 *)((long)piVar4 + -0x1f8) = 0;
        func_0x000104c335c0();
        puVar11 = (undefined1 *)((long)piVar4 + -0x278);
        func_0x000104c33548();
        goto code_r0x000107776908;
      }
      func_0x000107269124();
    }
  }
code_r0x000107776908:
  func_0x00010777d23c(*(undefined8 *)((long)piVar4 + -0x180));
  puVar12 = puVar11;
  if ((bool)uVar6) {
    piVar21 = *(int **)((long)piVar4 + -0x118);
    func_0x00010777de70(piVar21);
    return piVar21;
  }
code_r0x000107776e28:
  ___stack_chk_fail();
  piVar21 = (int *)((long)piVar4 + -0x278);
  func_0x000104c33548();
  func_0x00010777d638();
  *(undefined1 **)((long)piVar4 + -800) = puVar16;
  *(undefined1 **)((long)piVar4 + -0x318) = puVar12;
  *(undefined1 **)((long)piVar4 + -0x310) = (undefined1 *)((long)piVar4 + -0x120);
  *(undefined **)((long)piVar4 + -0x308) = &UNK_107776f6c;
  if (piVar21[0x1a] == 3) {
    func_0x00010732393c();
    func_0x00010724ef84((undefined1 *)((long)piVar4 + -0x338));
    func_0x00010777ddf0();
    *(undefined8 *)((long)piVar4 + -0x330) = 0;
    *(undefined8 *)((long)piVar4 + -0x328) = 0;
    *(undefined8 *)((long)piVar4 + -0x338) = 0;
    func_0x00010777d650();
    uVar6 = 1;
  }
  else {
    func_0x00010777d748();
    uVar6 = extraout_w8;
  }
  *(undefined1 *)(extraout_x8_05 + 0x18) = uVar6;
  return piVar21;
}



/* Entry: 10776a4b8; end: 10776a59b;  */

/* WARNING: Possible PIC construction at 0x00010776a4e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010776a4e4) */

long * FUN_10776a4b8(void)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x00010776dc60();
  if (*(long *)(unaff_x20 + 0x68) == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + 0x18);
    unaff_x30 = 0x10776a4e4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x29 = puVar1;
  }
  plVar2 = *(long **)(unaff_x19 + 0x18);
  if (plVar2 == (long *)0x0) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000104bfeb48(0,uVar4);
    *(long *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x18) = &SUB_10745df78;
    plVar3 = (long *)plVar2[3];
    if (plVar3 == plVar2) {
      lVar5 = 0x20;
    }
    else {
      if (plVar3 == (long *)0x0) {
        return plVar2;
      }
      lVar5 = 0x28;
    }
    (**(code **)(*plVar3 + lVar5))();
    return plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))();
  return plVar2;
}



/* Entry: 10776aeac; end: 10776af0b;  */

/* WARNING: Possible PIC construction at 0x00010776af34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010776af38) */

long * FUN_10776aeac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 ****ppppuVar6;
  undefined *puVar7;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  
  puVar1 = auStack_50;
  func_0x00010776d99c(param_1,param_2,param_3,param_4);
  func_0x00010776e068();
  func_0x00010776ad24();
  func_0x00010776dd18();
  func_0x00010776d950(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010776dd18();
  func_0x00010776da9c();
  puStack_58 = &DAT_10776af0c;
  pppuStack_60 = (undefined8 ***)&stack0xfffffffffffffff0;
  func_0x00010776dc60();
  if (*(long *)(unaff_x20 + 0x68) == 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
    ppppuVar6 = (undefined8 ****)pppuStack_60;
    puVar7 = puStack_58;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + 0x48);
    puVar1 = &stack0xffffffffffffff80;
    ppppuVar6 = &pppuStack_60;
    puVar7 = &UNK_10776af38;
  }
  plVar2 = (long *)param_1[3];
  if (plVar2 == (long *)0x0) {
    *(undefined8 *****)(puVar1 + -0x10) = ppppuVar6;
    *(undefined **)(puVar1 + -8) = puVar7;
    func_0x000104bfeb48(0,uVar4);
    *(long *)(puVar1 + -0x30) = unaff_x20;
    *(long **)(puVar1 + -0x28) = param_1;
    *(undefined1 **)(puVar1 + -0x20) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x18) = &SUB_10745df78;
    plVar3 = (long *)plVar2[3];
    if (plVar3 == plVar2) {
      lVar5 = 0x20;
    }
    else {
      if (plVar3 == (long *)0x0) {
        return plVar2;
      }
      lVar5 = 0x28;
    }
    (**(code **)(*plVar3 + lVar5))();
    return plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010745df68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))();
  return plVar2;
}



/* Entry: 10776b6a8; end: 10776bacb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10776b6a8(undefined8 param_1,float param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  double dVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  code *pcVar6;
  undefined1 uVar7;
  int iVar8;
  long *plVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined8 extraout_x8;
  undefined1 *extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  uint5 *puVar12;
  long extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  long extraout_x9_02;
  code *extraout_x9_03;
  code *extraout_x9_04;
  ulong uVar13;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  ulong uVar14;
  uint5 *puVar15;
  long *plVar16;
  uint5 *puVar17;
  undefined1 *unaff_x19;
  long lVar18;
  uint5 *puVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  uint5 *puVar23;
  long *unaff_x28;
  uint5 *puVar24;
  float fVar25;
  long lVar26;
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
  undefined1 auStack_450 [4];
  undefined1 uStack_44c;
  byte bStack_440;
  undefined1 auStack_430 [8];
  undefined4 uStack_428;
  undefined1 uStack_420;
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  long *plStack_3e8;
  long *plStack_3e0;
  long *plStack_3d8;
  undefined1 auStack_3d0 [16];
  byte bStack_3c0;
  undefined1 auStack_3b8 [8];
  int iStack_3b0;
  undefined1 uStack_3a8;
  uint5 auStack_3a0 [3];
  undefined1 auStack_388 [24];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [16];
  long *plStack_338;
  uint5 uStack_330;
  uint5 *puStack_328;
  long *plStack_320;
  long lStack_318;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long alStack_2e0 [2];
  byte bStack_2d0;
  long *plStack_2c0;
  long **pplStack_2b8;
  long *plStack_2b0;
  char cStack_2a8;
  undefined7 uStack_2a7;
  byte bStack_278;
  long *plStack_270;
  undefined4 uStack_268;
  byte bStack_260;
  undefined8 uStack_258;
  long alStack_1e0 [3];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [16];
  byte bStack_1a0;
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  int aiStack_150 [2];
  double adStack_148 [7];
  char cStack_110;
  long alStack_108 [9];
  undefined1 uStack_c0;
  undefined1 auStack_b8 [8];
  double dStack_b0;
  undefined1 uStack_a8;
  char cStack_a0;
  undefined4 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  plVar11 = alStack_1e0;
  func_0x00010776d97c();
  alStack_108[0]._0_1_ = 0;
  uStack_c0 = 0;
  auStack_1b0[0] = 0;
  bStack_1a0 = 0;
  uStack_68 = extraout_x8;
  (**(code **)(*param_4 + 0x70))(aiStack_150,param_4 + 1);
  uVar7 = cStack_110 == '\x01';
  if (!(bool)uVar7) {
    func_0x00010002b838(auStack_1c8,&UNK_10f4268ae);
    func_0x00010776d990();
    puVar10 = auStack_1c8;
    goto LAB_10776b8e4;
  }
  uVar7 = aiStack_150[0] + -1 == 6;
  switch(aiStack_150[0] + -1) {
  case 0:
    func_0x00010776d9c4();
    func_0x00010776d990();
    break;
  case 1:
    dStack_b0 = (double)CONCAT44(dStack_b0._4_4_,3);
    uStack_a8 = 1;
    func_0x00010776da78();
    func_0x00010776dc50();
    func_0x000104c2fe00(&dStack_b0,adStack_148);
    uStack_78 = 1;
    uStack_70 = 1;
    func_0x00010776da6c();
    goto code_r0x00010776b85c;
  case 2:
    if ((ulong)(long)ABS(adStack_148[0]) >> 0x35 != 0) {
      func_0x00010776dbbc();
      func_0x00010776da18();
      func_0x00010776da04();
      func_0x00010776d990();
code_r0x00010776b8d0:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
      puVar10 = auStack_180;
      goto LAB_10776b8e4;
    }
    uVar7 = adStack_148[0] == (double)(long)adStack_148[0];
    if (!(bool)uVar7) {
      func_0x00010002b838(auStack_198,&UNK_10f426990);
      func_0x00010776d990();
      puVar10 = auStack_198;
      goto LAB_10776b8e4;
    }
    dStack_b0 = (double)CONCAT44(dStack_b0._4_4_,1);
    uStack_a8 = 1;
    func_0x00010776da78();
    func_0x00010776dc50();
    dStack_b0 = (double)(long)adStack_148[0];
    uStack_78 = 0;
    uStack_70 = 1;
    func_0x00010776da6c();
    goto code_r0x00010776b85c;
  case 3:
    uVar7 = adStack_148[0] == 0.0;
    dVar1 = (double)-(long)adStack_148[0];
    if (-1 < (long)adStack_148[0]) {
      dVar1 = adStack_148[0];
    }
    if ((ulong)dVar1 >> 0x35 != 0) {
      func_0x00010776dbbc();
      func_0x00010776da18();
      func_0x00010776da04();
      func_0x00010776d990();
      goto code_r0x00010776b8d0;
    }
    dStack_b0 = (double)CONCAT44(dStack_b0._4_4_,1);
    uStack_a8 = 1;
    func_0x00010776da78();
    func_0x00010776dc50();
    dStack_b0 = adStack_148[0];
    uStack_78 = 0;
    uStack_70 = 1;
    func_0x00010776da6c();
    goto code_r0x00010776b85c;
  case 4:
    if ((ulong)adStack_148[0] >> 0x35 != 0) {
      func_0x00010776dbbc();
      func_0x00010776da18();
      func_0x00010776da04();
      func_0x00010776d990();
      goto code_r0x00010776b8d0;
    }
    dStack_b0 = (double)CONCAT44(dStack_b0._4_4_,1);
    uStack_a8 = 1;
    func_0x00010776da78();
    func_0x00010776dc50();
    dStack_b0 = adStack_148[0];
    uStack_78 = 0;
    uStack_70 = 1;
    func_0x00010776da6c();
code_r0x00010776b85c:
    FUN_10776cc58(auStack_b8);
    goto code_r0x00010776b8e8;
  case 5:
    func_0x00010776d9c4();
    func_0x00010776d990();
    break;
  case 6:
    func_0x00010776d9c4();
    func_0x00010776d990();
    break;
  default:
    func_0x00010776d9c4();
    func_0x00010776d990();
  }
  puVar10 = auStack_b8;
LAB_10776b8e4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10);
code_r0x00010776b8e8:
  if ((bStack_1a0 & 1) == 0) {
LAB_10776b954:
    plVar11 = alStack_108;
    func_0x00010776cb44();
  }
  else {
    if ((*(byte *)(param_7 + 0x10) & 1) == 0) {
      func_0x000107570410(param_7,auStack_1b0);
      goto LAB_10776b954;
    }
    func_0x00010756f724(auStack_b8,param_7,auStack_1b0);
    uVar7 = cStack_a0 == '\x01';
    if (!(bool)uVar7) {
      func_0x00010776df40();
      goto LAB_10776b954;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(alStack_1e0,auStack_b8)
    ;
    func_0x00010776d990();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_1e0);
    *unaff_x19 = 0;
    unaff_x19[0x48] = 0;
    func_0x00010776df40();
  }
  func_0x000107267ed0(aiStack_150);
  func_0x0001072c9854(auStack_1b0);
  FUN_10776cc58();
  func_0x00010776d950(uStack_68);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  FUN_10776cc58(auStack_b8);
  func_0x000107267ed0(aiStack_150);
  func_0x0001072c9854(auStack_1b0);
  puVar15 = (uint5 *)alStack_108;
  FUN_10776cc58();
  func_0x00010776da9c();
  puVar23 = puVar15;
  func_0x00010776d99c();
  puVar17 = puVar23 + 1;
  puVar19 = puVar17;
  uStack_258 = extraout_x8_01;
  (**(code **)(*(long *)puVar23 + 0x20))();
  uVar7 = puVar19 == (uint5 *)0x4;
  if (puVar19 < (uint5 *)0x5) {
    func_0x000107878fec(&uStack_330,(long)puVar19 + -1);
    func_0x0001004c3cd0(&plStack_2c0,&UNK_10f4268d8,&uStack_330);
    func_0x00010048a6c8(auStack_388,&plStack_2c0,&DAT_10f62a9de);
    func_0x00010756a668(plVar11,auStack_388);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_388);
    func_0x00010776dbd0();
    puVar15 = &uStack_330;
code_r0x00010776bb9c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar15);
    func_0x00010776dc7c();
  }
  else {
    if (((ulong)puVar19 & 1) == 0) {
      func_0x00010002b838(auStack_3a0,&UNK_10f42690f);
      func_0x00010756a668(plVar11,auStack_3a0);
      puVar15 = auStack_3a0;
      goto code_r0x00010776bb9c;
    }
    auStack_3b8[0] = 0;
    uStack_3a8 = 0;
    auStack_3d0[0] = 0;
    bStack_3c0 = 0;
    func_0x00010776df38(&plStack_2c0);
    if ((char)plStack_2b0 == '\x01') {
      func_0x00010776df38(&uStack_330);
      uStack_268 = 6;
      puVar23 = &uStack_330;
      func_0x0001074d1ed0(puVar23,&plStack_270);
      func_0x0001072c9884(&plStack_270);
      func_0x0001072c9854(&uStack_330);
      func_0x0001072c9854(&plStack_2c0);
      if ((int)puVar23 != 0) {
        func_0x00010776df38();
        func_0x00010756bb10(auStack_3d0,&plStack_2c0);
        goto code_r0x00010776bc1c;
      }
    }
    else {
code_r0x00010776bc1c:
      func_0x0001072c9854();
    }
    plStack_3e8 = (long *)0x0;
    plStack_3e0 = (long *)0x0;
    plStack_3d8 = (long *)0x0;
    if (0xccccccccccccccc < (long)puVar19 - 3U) goto code_r0x00010776c804;
    func_0x00010776cc94();
    func_0x00010776de5c();
    plVar21 = (long *)(extraout_x8_02 + extraout_x9 * 0x28);
    _memcpy(plVar21);
    plVar9 = plStack_3e8;
    plStack_3d8 = (long *)CONCAT71(uStack_2a7,cStack_2a8);
    plStack_3e0 = plStack_2b0;
    plStack_3e8 = plVar21;
    func_0x00010776dcd0(plVar9);
    uVar22 = 2;
    while( true ) {
      puVar23 = (uint5 *)(uVar22 | 1);
      uVar7 = puVar23 == puVar19;
      if (puVar19 <= puVar23) break;
      func_0x00010776dfd8();
      (*extraout_x9_00)(alStack_2e0,puVar17,uVar22);
      _uStack_330 = 0;
      puStack_328 = (uint5 *)0x0;
      plStack_320 = (long *)0x0;
      iVar8 = (int)alStack_2e0 + 8;
      (**(code **)(alStack_2e0[0] + 0x18))();
      if (iVar8 == 0) {
        func_0x00010776de04(&plStack_2c0,alStack_2e0);
        bVar5 = bStack_278;
        if ((bStack_278 & 1) == 0) {
          func_0x00010776dbd8();
        }
        else {
          func_0x00010776df50();
        }
        FUN_10776cc58(&plStack_2c0);
        if ((bVar5 & 1) == 0) goto code_r0x00010776c0a8;
      }
      else {
        plVar9 = alStack_2e0 + 1;
        (**(code **)(alStack_2e0[0] + 0x20))();
        if (plVar9 == (long *)0x0) {
          func_0x00010002b838(auStack_400,&UNK_10f42693d);
          func_0x00010756a69c(plVar11,auStack_400,uVar22);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_400);
          func_0x00010776dc7c();
code_r0x00010776c0a8:
          func_0x00010776df48();
          func_0x0001072f5f6c(alStack_2e0);
          goto code_r0x00010776c0b4;
        }
        if ((long *)(((long)plStack_320 - _uStack_330) / 0x48) < plVar9) {
          if ((long *)0x38e38e38e38e38e < plVar9) {
            func_0x00010776cd5c();
            goto code_r0x00010776c828;
          }
          func_0x00010776ce24(&plStack_2c0,plVar9,((long)puStack_328 - _uStack_330) / 0x48,
                              &plStack_320);
          func_0x00010776cd68(&uStack_330,&plStack_2c0);
          func_0x00010776ce80(&plStack_2c0);
        }
        unaff_x28 = (long *)0x0;
        while (uVar7 = plVar9 == unaff_x28, !(bool)uVar7) {
          (**(code **)(alStack_2e0[0] + 0x28))(&plStack_270,alStack_2e0 + 1,unaff_x28);
          func_0x00010776de04(&plStack_2c0,&plStack_270);
          func_0x0001072f5f6c(&plStack_270);
          bVar5 = bStack_278;
          if ((bStack_278 & 1) == 0) {
            func_0x00010776dbd8();
          }
          else {
            func_0x00010776df50();
          }
          FUN_10776cc58(&plStack_2c0);
          unaff_x28 = (long *)((long)unaff_x28 + 1);
          if ((bVar5 & 1) == 0) goto code_r0x00010776c0a8;
        }
      }
      func_0x00010776dfd8();
      (*extraout_x9_01)(&plStack_2c0,puVar17,puVar23);
      func_0x00010756f360(auStack_418,auStack_3d0);
      auStack_450[0] = 0;
      uStack_44c = 0;
      func_0x00010777067c(&plStack_270,plVar11,&plStack_2c0,puVar23,param_5,auStack_418,auStack_450)
      ;
      func_0x0001072c9854(auStack_418);
      func_0x00010776ddc0();
      bVar5 = bStack_260;
      if ((bStack_260 & 1) == 0) {
        func_0x00010776dbd8();
      }
      else {
        if ((bStack_3c0 & 1) == 0) {
          func_0x00010756f300(auStack_3d0,plStack_270 + 2);
        }
        uVar7 = plStack_3e0 == plStack_3d8;
        if (plStack_3e0 < plStack_3d8) {
          *plStack_3e0 = 0;
          plStack_3e0[1] = 0;
          plStack_3e0[2] = 0;
          func_0x00010776db58();
          plStack_3e0 = unaff_x28;
        }
        else {
          lVar18 = ((long)plStack_3e0 - (long)plStack_3e8) / 0x28;
          uVar13 = lVar18 + 1;
          if (0x666666666666666 < uVar13) {
            func_0x00010776cc88();
            goto code_r0x00010776c828;
          }
          uVar3 = ((long)plStack_3d8 - (long)plStack_3e8) / 0x28;
          uVar14 = uVar3 * 2;
          if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
            uVar14 = uVar13;
          }
          uVar7 = uVar3 == 0x333333333333333;
          if (0x333333333333332 < uVar3) {
            uVar14 = 0x666666666666666;
          }
          func_0x00010776cc94(&plStack_2c0,uVar14,lVar18,&plStack_3d8);
          plStack_2b0[1] = 0;
          plStack_2b0[2] = 0;
          *plStack_2b0 = 0;
          func_0x00010776db58();
          func_0x00010776de5c();
          plVar21 = (long *)(extraout_x8_03 + extraout_x9_02 * 0x28);
          _memcpy(plVar21);
          plVar9 = plStack_3e8;
          plStack_3d8 = (long *)CONCAT71(uStack_2a7,cStack_2a8);
          plStack_3e8 = plVar21;
          plStack_3e0 = unaff_x28;
          func_0x00010776dcd0(plVar9);
          plStack_3e0 = unaff_x28;
        }
      }
      func_0x0001072c95d0(&plStack_270);
      func_0x00010776df48();
      func_0x0001072f5f6c(alStack_2e0);
      if (bVar5 == 0) goto code_r0x00010776c0b4;
      uVar22 = uVar22 + 2;
    }
    func_0x00010776dfd8();
    (*extraout_x9_03)(&plStack_2c0,puVar17,1);
    uStack_428 = 6;
    uStack_420 = 1;
    uVar22 = (ulong)_uStack_330 >> 0x28;
    uStack_330._0_4_ = (uint)_uStack_330 & 0xffffff00;
    uStack_330 = (uint5)(uint)uStack_330;
    _uStack_330 = CONCAT35((int3)uVar22,uStack_330);
    func_0x00010777067c(alStack_2e0,plVar11,&plStack_2c0,1,param_5,auStack_430,&uStack_330);
    func_0x0001072c9854(auStack_430);
    func_0x00010776ddc0();
    if ((bStack_2d0 & 1) == 0) {
      func_0x00010776dc7c();
    }
    else {
      func_0x00010776dfd8();
      (*extraout_x9_04)(&plStack_2c0,puVar17,(long)puVar19 + -1);
      func_0x00010756f360(auStack_468,auStack_3d0);
      uVar22 = (ulong)_uStack_330 >> 0x28;
      uStack_330._0_4_ = (uint)_uStack_330 & 0xffffff00;
      uStack_330 = (uint5)(uint)uStack_330;
      _uStack_330 = CONCAT35((int3)uVar22,uStack_330);
      func_0x00010777067c(auStack_450,plVar11,&plStack_2c0,(long)puVar19 + -1,param_5,auStack_468,
                          &uStack_330);
      func_0x0001072c9854(auStack_468);
      func_0x00010776ddc0();
      if ((bStack_440 & 1) == 0) {
        func_0x00010776dc7c();
      }
      else {
        pplStack_2b8 = (long **)CONCAT44(pplStack_2b8._4_4_,6);
        plVar9 = (long *)(alStack_2e0[0] + 0x10);
        func_0x0001074d1ed0(plVar9,&plStack_2c0);
        func_0x0001072c9884(&plStack_2c0);
        if ((int)plVar9 != 0) {
          func_0x00010756f724(&plStack_2c0,auStack_3b8,alStack_2e0[0] + 0x10);
          uVar7 = cStack_2a8 == '\x01';
          if ((bool)uVar7) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_480,&plStack_2c0);
            func_0x00010756a69c(plVar11,auStack_480,1);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_480);
            func_0x00010776dc7c();
            func_0x00010776df68();
            goto code_r0x00010776c700;
          }
          func_0x00010776df68();
        }
        if (iStack_3b0 == 0) {
          func_0x00010776dbd8();
        }
        else {
          if (iStack_3b0 == 1) {
            func_0x00010776debc();
            plVar21 = plStack_3e8;
            alStack_2e0[0] = 0;
            alStack_2e0[1] = 0;
            plStack_270 = plStack_3e8;
            func_0x00010776daac();
            func_0x00010776e054((long)plVar9 - (long)plVar21);
            func_0x000107546cd0(&uStack_330);
            lVar18 = 2;
            for (; uVar7 = plVar21 == plVar9, !(bool)uVar7; plVar21 = plVar21 + 5) {
              lStack_2e8 = plVar21[4];
              lStack_2f0 = plVar21[3];
              if (plVar21[4] != 0) {
                do {
                  func_0x00010776da3c();
                } while (extraout_w10 != 0);
              }
              lVar2 = plVar21[1];
              for (lVar20 = *plVar21; lVar4 = lStack_2e8, lVar26 = lStack_2f0, puVar23 = puStack_328
                  , lVar20 != lVar2; lVar20 = lVar20 + 0x48) {
                if (*(int *)(lVar20 + 0x40) != 0) {
                  func_0x00010563ab98();
                  goto code_r0x00010776c828;
                }
                puVar19 = *(uint5 **)(lVar20 + 8);
                if (puStack_328 != (uint5 *)0x0) {
                  uVar22 = 0;
                  if (puStack_328 != (uint5 *)0x0) {
                    uVar22 = (ulong)puVar19 / (ulong)puStack_328;
                  }
                  if (lStack_318 != 0) {
                    uVar13 = (long)puStack_328 - 1;
                    if (((ulong)puStack_328 & uVar13) == 0) {
                      puVar15 = (uint5 *)(uVar13 & (ulong)puVar19);
                    }
                    else {
                      puVar15 = puVar19;
                      if (puStack_328 <= puVar19) {
                        puVar15 = (uint5 *)((long)puVar19 - uVar22 * (long)puStack_328);
                      }
                    }
                    plVar16 = *(long **)(_uStack_330 + (long)puVar15 * 8);
                    if (plVar16 != (long *)0x0) {
                      do {
                        while( true ) {
                          plVar16 = (long *)*plVar16;
                          if (plVar16 == (long *)0x0) goto code_r0x00010776c22c;
                          puVar17 = (uint5 *)plVar16[1];
                          if (puVar17 != puVar19) break;
                          uVar7 = (uint5 *)plVar16[2] == puVar19;
                          if ((bool)uVar7) {
                            func_0x00010776dd38();
                            func_0x00010756a69c(plVar11,&plStack_2c0,lVar18);
                            func_0x00010776dbd0();
                            func_0x00010776dc7c();
                            func_0x00010776daa4();
                            goto code_r0x00010776c6cc;
                          }
                        }
                        if (((ulong)puStack_328 & uVar13) == 0) {
                          puVar17 = (uint5 *)((ulong)puVar17 & uVar13);
                        }
                        else if (puStack_328 <= puVar17) {
                          uVar14 = 0;
                          if (puStack_328 != (uint5 *)0x0) {
                            uVar14 = (ulong)puVar17 / (ulong)puStack_328;
                          }
                          puVar17 = (uint5 *)((long)puVar17 - uVar14 * (long)puStack_328);
                        }
                      } while (puVar17 == puVar15);
                    }
                  }
code_r0x00010776c22c:
                  uVar13 = (long)puStack_328 - 1;
                  if (((ulong)puStack_328 & uVar13) == 0) {
                    puVar15 = (uint5 *)(uVar13 & (ulong)puVar19);
                  }
                  else {
                    puVar15 = puVar19;
                    if (puStack_328 <= puVar19) {
                      puVar15 = (uint5 *)((long)puVar19 - uVar22 * (long)puStack_328);
                    }
                  }
                  plVar16 = *(long **)(_uStack_330 + (long)puVar15 * 8);
                  if (plVar16 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar16 = (long *)*plVar16;
                        if (plVar16 == (long *)0x0) goto code_r0x00010776c2b0;
                        puVar17 = (uint5 *)plVar16[1];
                        if (puVar17 != puVar19) break;
                        if ((uint5 *)plVar16[2] == puVar19) goto code_r0x00010776c3b0;
                      }
                      if (((ulong)puStack_328 & uVar13) == 0) {
                        puVar17 = (uint5 *)((ulong)puVar17 & uVar13);
                      }
                      else if (puStack_328 <= puVar17) {
                        uVar22 = 0;
                        if (puStack_328 != (uint5 *)0x0) {
                          uVar22 = (ulong)puVar17 / (ulong)puStack_328;
                        }
                        puVar17 = (uint5 *)((long)puVar17 - uVar22 * (long)puStack_328);
                      }
                    } while (puVar17 == puVar15);
                  }
                }
code_r0x00010776c2b0:
                plVar16 = (long *)0x28;
                __Znwm();
                plStack_2b0 = (long *)0x1;
                *plVar16 = 0;
                plVar16[1] = (long)puVar19;
                plVar16[2] = (long)puVar19;
                plVar16[4] = lVar4;
                plVar16[3] = lVar26;
                plStack_2c0 = plVar16;
                pplStack_2b8 = &plStack_320;
                if (lVar4 != 0) {
                  do {
                    func_0x00010776da3c();
                  } while (extraout_w10_00 != 0);
                }
                fVar25 = (float)lVar26;
                func_0x00010776dff8();
                if ((puVar23 == (uint5 *)0x0) || (param_2 * (float)puVar23 < fVar25)) {
                  func_0x00010776dfe4();
                  func_0x00010776de2c();
                  func_0x000107546cd0(&uStack_330);
                  puVar23 = puStack_328;
                  if (((ulong)puStack_328 & (long)puStack_328 - 1U) == 0) {
                    puVar15 = (uint5 *)((long)puStack_328 - 1U & (ulong)puVar19);
                  }
                  else {
                    puVar15 = puVar19;
                    if (puStack_328 <= puVar19) {
                      uVar22 = 0;
                      if (puStack_328 != (uint5 *)0x0) {
                        uVar22 = (ulong)puVar19 / (ulong)puStack_328;
                      }
                      puVar15 = (uint5 *)((long)puVar19 - uVar22 * (long)puStack_328);
                    }
                  }
                }
                plVar16 = *(long **)(_uStack_330 + (long)puVar15 * 8);
                if (plVar16 == (long *)0x0) {
                  *plStack_2c0 = (long)plStack_320;
                  plStack_320 = plStack_2c0;
                  *(long ***)(_uStack_330 + (long)puVar15 * 8) = &plStack_320;
                  if (*plStack_2c0 != 0) {
                    puVar19 = *(uint5 **)(*plStack_2c0 + 8);
                    if (((ulong)puVar23 & (long)puVar23 - 1U) == 0) {
                      puVar19 = (uint5 *)((ulong)puVar19 & (long)puVar23 - 1U);
                    }
                    else if (puVar23 <= puVar19) {
                      uVar22 = 0;
                      if (puVar23 != (uint5 *)0x0) {
                        uVar22 = (ulong)puVar19 / (ulong)puVar23;
                      }
                      puVar19 = (uint5 *)((long)puVar19 - uVar22 * (long)puVar23);
                    }
                    *(long **)(_uStack_330 + (long)puVar19 * 8) = plStack_2c0;
                  }
                }
                else {
                  *plStack_2c0 = *plVar16;
                  *plVar16 = (long)plStack_2c0;
                }
                func_0x00010776de14();
                func_0x000107546e6c();
code_r0x00010776c3b0:
              }
              func_0x00010776daa4();
              lVar18 = lVar18 + 2;
            }
            __Znwm(0x90);
            func_0x00010776dde8();
            func_0x000107546edc();
            uStack_2f8 = uStack_368;
            uStack_300 = uStack_370;
            uStack_370 = 0;
            uStack_368 = 0;
            func_0x00010776de44();
            func_0x000107546f28();
            plStack_338 = plVar11;
            func_0x00010776dcb4();
            func_0x0001075470f4(&plStack_2c0);
            func_0x00010776daa4();
            puVar10 = extraout_x8_00;
            func_0x000107547048(extraout_x8_00,&plStack_338);
            puVar10[0x10] = 1;
            func_0x00010776dfcc();
            if (puVar10 != (undefined1 *)0x0) {
              func_0x00010776da84();
            }
code_r0x00010776c6cc:
            func_0x0001075470f4(&uStack_330);
          }
          else {
            uVar7 = true;
            if ((iStack_3b0 == 2) || (uVar7 = iStack_3b0 == 3, !(bool)uVar7)) {
              *extraout_x8_00 = 0;
              extraout_x8_00[0x10] = 0;
              goto code_r0x00010776c700;
            }
            func_0x00010776debc();
            plVar21 = plStack_3e8;
            alStack_2e0[0] = 0;
            alStack_2e0[1] = 0;
            plStack_270 = plStack_3e8;
            func_0x00010776daac();
            func_0x00010776e054((long)plVar9 - (long)plVar21);
            puVar15 = &uStack_330;
            func_0x0001075473c0();
            lVar18 = 2;
            for (; uVar7 = plVar21 == plVar9, !(bool)uVar7; plVar21 = plVar21 + 5) {
              lStack_2e8 = plVar21[4];
              lStack_2f0 = plVar21[3];
              if (plVar21[4] != 0) {
                do {
                  func_0x00010776da3c();
                } while (extraout_w10_01 != 0);
              }
              lVar2 = plVar21[1];
              for (lVar20 = *plVar21; puVar19 = puStack_328, lVar20 != lVar2; lVar20 = lVar20 + 0x48
                  ) {
                if (*(int *)(lVar20 + 0x40) != 1) {
                  func_0x00010563ab98();
                  goto code_r0x00010776c828;
                }
                puVar17 = puVar15;
                if ((puStack_328 != (uint5 *)0x0) && (lStack_318 != 0)) {
                  func_0x00010776ddd8();
                  puVar23 = (uint5 *)((long)puVar19 + -1);
                  if (((ulong)puVar19 & (ulong)puVar23) == 0) {
                    puVar24 = (uint5 *)((ulong)puVar15 & (ulong)puVar23);
                  }
                  else {
                    puVar24 = puVar15;
                    if (puVar19 <= puVar15) {
                      uVar22 = 0;
                      if (puVar19 != (uint5 *)0x0) {
                        uVar22 = (ulong)puVar15 / (ulong)puVar19;
                      }
                      puVar24 = (uint5 *)((long)puVar15 - uVar22 * (long)puVar19);
                    }
                  }
                  plVar16 = *(long **)(_uStack_330 + (long)puVar24 * 8);
                  puVar17 = puVar15;
                  if (plVar16 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar16 = (long *)*plVar16;
                        if (plVar16 == (long *)0x0) goto code_r0x00010776c4f0;
                        puVar12 = (uint5 *)plVar16[1];
                        uVar7 = puVar12 == puVar15;
                        if (!(bool)uVar7) break;
                        func_0x00010776df5c();
                        if ((int)puVar17 != 0) {
                          func_0x00010776dd38();
                          func_0x00010756a69c(plVar11,&plStack_2c0,lVar18);
                          func_0x00010776dbd0();
                          func_0x00010776dc7c();
                          func_0x00010776daa4();
                          goto code_r0x00010776c738;
                        }
                      }
                      if (((ulong)puVar19 & (ulong)puVar23) == 0) {
                        puVar12 = (uint5 *)((ulong)puVar12 & (ulong)puVar23);
                      }
                      else if (puVar19 <= puVar12) {
                        uVar22 = 0;
                        if (puVar19 != (uint5 *)0x0) {
                          uVar22 = (ulong)puVar12 / (ulong)puVar19;
                        }
                        puVar12 = (uint5 *)((long)puVar12 - uVar22 * (long)puVar19);
                      }
                    } while (puVar12 == puVar24);
                  }
                }
code_r0x00010776c4f0:
                func_0x00010776ddd8();
                puVar19 = puStack_328;
                if (puStack_328 != (uint5 *)0x0) {
                  uVar22 = (long)puStack_328 - 1;
                  if (((ulong)puStack_328 & uVar22) == 0) {
                    puVar23 = (uint5 *)(uVar22 & (ulong)puVar17);
                  }
                  else {
                    puVar23 = puVar17;
                    if (puStack_328 <= puVar17) {
                      uVar13 = 0;
                      if (puStack_328 != (uint5 *)0x0) {
                        uVar13 = (ulong)puVar17 / (ulong)puStack_328;
                      }
                      puVar23 = (uint5 *)((long)puVar17 - uVar13 * (long)puStack_328);
                    }
                  }
                  plVar16 = *(long **)(_uStack_330 + (long)puVar23 * 8);
                  puVar15 = puVar17;
                  if (plVar16 != (long *)0x0) {
                    do {
                      while( true ) {
                        plVar16 = (long *)*plVar16;
                        if (plVar16 == (long *)0x0) goto code_r0x00010776c57c;
                        puVar24 = (uint5 *)plVar16[1];
                        if (puVar24 != puVar17) break;
                        func_0x00010776df5c();
                        if (((ulong)puVar15 & 1) != 0) goto code_r0x00010776c68c;
                      }
                      if (((ulong)puVar19 & uVar22) == 0) {
                        puVar24 = (uint5 *)((ulong)puVar24 & uVar22);
                      }
                      else if (puVar19 <= puVar24) {
                        uVar13 = 0;
                        if (puVar19 != (uint5 *)0x0) {
                          uVar13 = (ulong)puVar24 / (ulong)puVar19;
                        }
                        puVar24 = (uint5 *)((long)puVar24 - uVar13 * (long)puVar19);
                      }
                    } while (puVar24 == puVar23);
                  }
                }
code_r0x00010776c57c:
                plVar16 = (long *)0x58;
                __Znwm();
                plStack_2b0 = (long *)0x1;
                puVar15 = (uint5 *)(plVar16 + 2);
                *plVar16 = 0;
                plVar16[1] = (long)puVar17;
                plStack_2c0 = plVar16;
                pplStack_2b8 = &plStack_320;
                func_0x000104c2fe00(puVar15,lVar20 + 8);
                plVar16[10] = lStack_2e8;
                plVar16[9] = lStack_2f0;
                lVar26 = lStack_2f0;
                if (lStack_2e8 != 0) {
                  do {
                    func_0x00010776da3c();
                  } while (extraout_w10_02 != 0);
                }
                fVar25 = (float)lVar26;
                func_0x00010776dff8();
                if ((puVar19 == (uint5 *)0x0) || (param_2 * (float)puVar19 < fVar25)) {
                  func_0x00010776dfe4();
                  func_0x00010776de2c();
                  puVar15 = &uStack_330;
                  func_0x0001075473c0();
                  puVar19 = puStack_328;
                  if (((ulong)puStack_328 & (long)puStack_328 - 1U) == 0) {
                    puVar23 = (uint5 *)((long)puStack_328 - 1U & (ulong)puVar17);
                  }
                  else {
                    puVar23 = puVar17;
                    if (puStack_328 <= puVar17) {
                      uVar22 = 0;
                      if (puStack_328 != (uint5 *)0x0) {
                        uVar22 = (ulong)puVar17 / (ulong)puStack_328;
                      }
                      puVar23 = (uint5 *)((long)puVar17 - uVar22 * (long)puStack_328);
                    }
                  }
                }
                plVar16 = *(long **)(_uStack_330 + (long)puVar23 * 8);
                if (plVar16 == (long *)0x0) {
                  *plStack_2c0 = (long)plStack_320;
                  plStack_320 = plStack_2c0;
                  *(long ***)(_uStack_330 + (long)puVar23 * 8) = &plStack_320;
                  if (*plStack_2c0 != 0) {
                    puVar17 = *(uint5 **)(*plStack_2c0 + 8);
                    if (((ulong)puVar19 & (long)puVar19 - 1U) == 0) {
                      puVar17 = (uint5 *)((ulong)puVar17 & (long)puVar19 - 1U);
                    }
                    else if (puVar19 <= puVar17) {
                      uVar22 = 0;
                      if (puVar19 != (uint5 *)0x0) {
                        uVar22 = (ulong)puVar17 / (ulong)puVar19;
                      }
                      puVar17 = (uint5 *)((long)puVar17 - uVar22 * (long)puVar19);
                    }
                    *(long **)(_uStack_330 + (long)puVar17 * 8) = plStack_2c0;
                  }
                }
                else {
                  *plStack_2c0 = *plVar16;
                  *plVar16 = (long)plStack_2c0;
                }
                func_0x00010776de14();
                func_0x00010754755c();
code_r0x00010776c68c:
              }
              func_0x00010776daa4();
              lVar18 = lVar18 + 2;
            }
            __Znwm(0x90);
            func_0x00010776dde8();
            func_0x0001075475cc();
            uStack_2f8 = uStack_368;
            uStack_300 = uStack_370;
            uStack_370 = 0;
            uStack_368 = 0;
            func_0x00010776de44();
            func_0x000107547618();
            plStack_338 = plVar11;
            func_0x00010776dcb4();
            func_0x0001075477d8(&plStack_2c0);
            func_0x00010776daa4();
            puVar10 = extraout_x8_00;
            func_0x00010754772c(extraout_x8_00,&plStack_338);
            extraout_x8_00[0x10] = 1;
            func_0x00010776dfcc();
            if (puVar10 != (undefined1 *)0x0) {
              func_0x00010776da84();
            }
code_r0x00010776c738:
            func_0x0001075477d8(&uStack_330);
          }
          func_0x0001072c9b9c(&uStack_370);
          func_0x00010776d06c(&plStack_270);
          func_0x0001072c9b9c(auStack_360);
          func_0x0001072c9884(auStack_348);
        }
      }
code_r0x00010776c700:
      func_0x0001072c95d0(auStack_450);
    }
    func_0x0001072c95d0(alStack_2e0);
code_r0x00010776c0b4:
    func_0x00010776d06c(&plStack_3e8);
    func_0x0001072c9854(auStack_3d0);
    func_0x0001072c9854(auStack_3b8);
  }
  func_0x00010776d950(uStack_258);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
code_r0x00010776c804:
  func_0x00010776cc88();
code_r0x00010776c828:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10776c82c);
  (*pcVar6)();
}



/* Entry: 10776cc58; end: 10776cc87;  */

long FUN_10776cc58(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x00010776cbf4(param_1 + 8);
  }
  return param_1;
}



/* Entry: 10776cecc; end: 10776cfbf;  */

void FUN_10776cecc(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x19;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010776dc08();
  uVar5 = *(ulong *)(param_1 + 8);
  if (uVar5 < *(ulong *)(param_1 + 0x10)) {
    func_0x00010776deec();
    lVar4 = uVar5 + 0x48;
    unaff_x19[1] = lVar4;
  }
  else {
    uVar5 = (long)(uVar5 - *unaff_x19) / 0x48 + 1;
    if (0x38e38e38e38e38e < uVar5) {
      func_0x00010776cd5c();
      func_0x00010776ce80(auStack_58);
      func_0x00010776db2c();
      func_0x00010776dbe8();
      uVar1 = *(uint *)(param_1 + 0x38);
      if (uVar1 != 0xffffffff) {
        func_0x00010776df04((&PTR_DAT_1109d5e30)[uVar1]);
        *(uint *)(unaff_x19 + 7) = uVar1;
      }
      return;
    }
    uVar2 = (long)(*(ulong *)(param_1 + 0x10) - *unaff_x19) / 0x48;
    uVar3 = uVar2 * 2;
    if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
      uVar3 = uVar5;
    }
    if (0x1c71c71c71c71c6 < uVar2) {
      uVar3 = 0x38e38e38e38e38e;
    }
    func_0x00010776ce24(auStack_58,uVar3);
    func_0x00010776deec();
    lStack_48 = lStack_48 + 0x48;
    func_0x00010776cd68();
    lVar4 = unaff_x19[1];
    func_0x00010776ce80(auStack_58);
  }
  unaff_x19[1] = lVar4;
  return;
}



/* Entry: 10776d210; end: 10776d25b;  */

long * FUN_10776d210(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)(param_1 + 8);
  plVar3 = plVar1;
  plVar4 = plVar1;
  while (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
    lVar2 = 8;
    if (param_2 <= (ulong)plVar5[4]) {
      lVar2 = 0;
    }
    plVar4 = (long *)((long)plVar5 + lVar2);
    if (param_2 <= (ulong)plVar5[4]) {
      plVar3 = plVar5;
    }
  }
  if ((plVar1 == plVar3) || (param_2 < (ulong)plVar3[4])) {
    plVar3 = plVar1;
  }
  return plVar3;
}



/* Entry: 10776d400; end: 10776d443;  */

long * FUN_10776d400(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10776d518; end: 10776d53f;  */

void FUN_10776d518(undefined8 param_1)

{
  func_0x00010776dcbc();
  func_0x00010776dc00(param_1,&PTR_DAT_1109d5fc0);
  func_0x00010776da2c();
  return;
}



/* Entry: 10776d704; end: 10776d727;  */

void FUN_10776d704(void)

{
  func_0x00010776da54();
  func_0x00010776d9d4(&PTR_DAT_1109d6060);
  return;
}



/* Entry: 10776d804; end: 10776d8b3;  */

/* WARNING: Possible PIC construction at 0x00010776d878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010776d87c) */

void FUN_10776d804(long param_1,long param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  puVar1 = &stack0xfffffffffffffff0;
  cVar3 = *(char *)(param_1 + 0x48);
  if (cVar3 == *(char *)(param_2 + 0x48)) {
    if (cVar3 == '\0') {
      return;
    }
    uVar2 = *(uint *)(param_2 + 0x40);
    if (*(int *)(param_1 + 0x40) == -1 && uVar2 == 0xffffffff) {
      return;
    }
    lStack_28 = param_1 + 8;
    if (uVar2 != 0xffffffff) {
      (*(code *)(&PTR_DAT_1109d6150)[uVar2])(&lStack_28,lStack_28,param_2 + 8);
      return;
    }
  }
  else {
    if (cVar3 == '\0') {
      func_0x00010776cba8(param_1 + 8,param_2 + 8);
      *(undefined1 *)(param_1 + 0x48) = 1;
      return;
    }
    unaff_x30 = 0x10776d87c;
    register0x00000008 = (BADSPACEBASE *)auStack_30;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
    (*(code *)(&PTR_DAT_1109d5e10)[*(uint *)(param_1 + 0x40)])
              ((undefined1 *)((long)register0x00000008 + -0x21),param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  return;
}



/* Entry: 10776e568; end: 10776e5cf;  */

void FUN_10776e568(undefined8 param_1)

{
  uint uVar1;
  uint6 uVar2;
  undefined6 uVar3;
  uint6 uVar4;
  uint uVar5;
  bool bVar6;
  undefined3 uVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ushort uVar16;
  ushort uVar17;
  uint uVar18;
  ushort uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  uint *puVar22;
  undefined4 *extraout_x8_02;
  undefined8 extraout_x8_03;
  uint uVar23;
  uint uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  long *plVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined *puStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_4f8 [64];
  undefined8 uStack_4b8;
  undefined8 *puStack_4b0;
  long *plStack_4a8;
  undefined1 **ppuStack_4a0;
  undefined *puStack_498;
  long lStack_490;
  undefined8 uStack_488;
  long lStack_480;
  undefined8 uStack_478;
  long lStack_470;
  undefined8 uStack_468;
  long lStack_460;
  undefined8 uStack_458;
  long lStack_450;
  undefined8 uStack_448;
  ulong uStack_438;
  ulong uStack_430;
  uint uStack_424;
  long lStack_420;
  undefined8 uStack_418;
  long lStack_410;
  undefined8 uStack_408;
  long lStack_400;
  undefined8 uStack_3f8;
  long lStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [8];
  undefined4 uStack_3b8;
  undefined1 uStack_3b0;
  undefined1 auStack_3a8 [8];
  undefined4 uStack_3a0;
  uint uStack_390;
  uint uStack_38c;
  undefined8 uStack_388;
  byte bStack_380;
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [8];
  undefined4 uStack_350;
  undefined1 uStack_348;
  uint uStack_340;
  uint uStack_33c;
  undefined8 uStack_338;
  byte bStack_330;
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [8];
  undefined4 uStack_300;
  undefined1 uStack_2f8;
  uint uStack_2f0;
  uint uStack_2ec;
  undefined8 uStack_2e8;
  byte bStack_2e0;
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [8];
  undefined4 uStack_2b8;
  undefined1 uStack_2b0;
  undefined1 auStack_2a8 [24];
  uint uStack_290;
  uint uStack_28c;
  undefined8 uStack_288;
  byte bStack_280;
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [8];
  int iStack_258;
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [8];
  undefined4 uStack_230;
  undefined1 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  byte bStack_210;
  undefined1 auStack_208 [24];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [16];
  char cStack_190;
  undefined1 auStack_188 [16];
  char cStack_178;
  long alStack_170 [2];
  undefined1 auStack_160 [16];
  char cStack_150;
  undefined1 auStack_128 [16];
  char cStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [112];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  puVar14 = (undefined8 *)auStack_a0;
  plVar10 = (long *)auStack_a0;
  func_0x00010776f478(param_1);
  auStack_a0[0] = 0;
  uStack_30 = 0;
  uStack_28 = extraout_x8;
  func_0x0001074d1ee8();
  func_0x000107296ad0();
  func_0x00010776f430(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107296ad0();
  func_0x00010776f4d4();
  puStack_a8 = &DAT_10776e5d0;
  plVar11 = plVar10;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010776f478();
  plVar32 = plVar11 + 1;
  plVar12 = plVar32;
  uStack_110 = extraout_x8_01;
  (**(code **)(*plVar11 + 0x20))();
  uVar8 = plVar12 == (long *)0x3;
  if (!(bool)uVar8) {
    func_0x000107878fec(&lStack_220);
    func_0x0001004c3cd0(auStack_160,&UNK_10f4269dc,&lStack_220);
    func_0x00010048a6c8(auStack_208,auStack_160,&UNK_10f417b93);
    func_0x00010776f488();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
    plVar10 = &lStack_220;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010776f498();
    goto code_r0x00010776ee54;
  }
  (**(code **)(*plVar10 + 0x28))(auStack_160,plVar32,1);
  uStack_230 = 1;
  uStack_228 = 1;
  uStack_290 = uStack_290 & 0xffffff00;
  uStack_28c = uStack_28c & 0xffffff00;
  func_0x00010776f420(&lStack_220);
  func_0x0001072c9854(auStack_238);
  func_0x0001072f5f6c(auStack_160);
  if ((bStack_210 & 1) == 0) {
    func_0x00010002b838(auStack_250,&UNK_10f426a0f);
    func_0x00010776f488();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_250);
    func_0x00010776f498();
  }
  else {
    func_0x0001072c9ff4(auStack_260,lStack_220 + 0x10);
    uVar8 = iStack_258 == 1;
    if ((bool)uVar8) {
      (**(code **)(*plVar10 + 0x28))(alStack_170,plVar32,2);
      uVar13 = 0;
      (**(code **)(alStack_170[0] + 0x30))();
      if ((uVar13 & 1) == 0) {
        func_0x00010002b838(auStack_2a8,&UNK_10f426a68);
        func_0x00010776f488();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
        func_0x00010776f498();
      }
      else {
        func_0x00010776f514();
        func_0x00010776f4bc(auStack_160);
        uStack_290 = uStack_290 & 0xffffff00;
        bStack_280 = 0;
        uVar8 = cStack_150 == '\x01';
        if ((bool)uVar8) {
          uStack_2b8 = 3;
          uStack_2b0 = 1;
          uStack_2f0 = uStack_2f0 & 0xffffff00;
          uStack_2ec = uStack_2ec & 0xffffff00;
          func_0x00010776f420(auStack_128);
          func_0x0001075530c4(&uStack_290,auStack_128);
          func_0x0001072c95d0(auStack_128);
          func_0x0001072c9854(auStack_2c0);
          if ((bStack_280 & 1) != 0) goto code_r0x00010776e740;
          func_0x00010002b838(auStack_2d8,&UNK_10f426a9a);
          func_0x00010776f488();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d8);
          func_0x00010776f498();
        }
        else {
code_r0x00010776e740:
          func_0x00010776f514();
          func_0x00010776f4bc(auStack_128);
          uStack_2f0 = uStack_2f0 & 0xffffff00;
          bStack_2e0 = 0;
          uVar8 = cStack_118 == '\x01';
          if ((bool)uVar8) {
            uStack_300 = 3;
            uStack_2f8 = 1;
            uStack_340 = uStack_340 & 0xffffff00;
            uStack_33c = uStack_33c & 0xffffff00;
            func_0x00010776f420(auStack_188);
            func_0x0001075530c4(&uStack_2f0,auStack_188);
            func_0x0001072c95d0(auStack_188);
            func_0x0001072c9854(auStack_308);
            if ((bStack_2e0 & 1) != 0) goto code_r0x00010776e7b8;
            func_0x00010002b838(auStack_320,&UNK_10f426abf);
            func_0x00010776f488();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_320);
            func_0x00010776f498();
          }
          else {
code_r0x00010776e7b8:
            func_0x00010776f514();
            func_0x00010776f4bc(auStack_188);
            uStack_340 = uStack_340 & 0xffffff00;
            bStack_330 = 0;
            uVar8 = cStack_178 == '\x01';
            if ((bool)uVar8) {
              uStack_350 = 1;
              uStack_348 = 1;
              uStack_390 = uStack_390 & 0xffffff00;
              uStack_38c = uStack_38c & 0xffffff00;
              func_0x00010776f420(auStack_1a0);
              func_0x0001075530c4(&uStack_340,auStack_1a0);
              func_0x0001072c95d0(auStack_1a0);
              func_0x0001072c9854(auStack_358);
              if ((bStack_330 & 1) != 0) goto code_r0x00010776e82c;
              func_0x00010002b838(auStack_370,&UNK_10f426ae6);
              func_0x00010776f488();
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_370);
              func_0x00010776f498();
            }
            else {
code_r0x00010776e82c:
              func_0x00010776f514();
              func_0x00010776f4bc(auStack_1a0);
              uStack_390 = uStack_390 & 0xffffff00;
              bStack_380 = 0;
              uVar8 = cStack_190 == '\x01';
              if ((bool)uVar8) {
                uStack_3b8 = 1;
                uStack_3b0 = 1;
                uVar7 = auStack_1b0._5_3_;
                auStack_1b0._0_4_ = auStack_1b0._0_4_ & 0xffffff00;
                auStack_1b0._0_5_ = CONCAT14(0,auStack_1b0._0_4_);
                auStack_1b0 = (undefined1  [8])CONCAT35(uVar7,auStack_1b0._0_5_);
                func_0x00010776f420(auStack_3a8);
                func_0x0001075530c4(&uStack_390,auStack_3a8);
                func_0x0001072c95d0(auStack_3a8);
                func_0x0001072c9854(auStack_3c0);
                if ((bStack_380 & 1) != 0) goto code_r0x00010776e8a0;
                func_0x00010002b838(auStack_3d8,&UNK_10f426b18);
                func_0x00010776f488();
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d8);
                func_0x00010776f498();
              }
              else {
code_r0x00010776e8a0:
                if (bStack_280 == 1) {
                  lStack_3f0 = CONCAT44(uStack_28c,uStack_290);
                  uStack_3e8 = uStack_288;
                  puVar22 = &uStack_290;
                }
                else {
                  puVar22 = (uint *)&lStack_3f0;
                }
                puVar22[0] = 0;
                puVar22[1] = 0;
                puVar22[2] = 0;
                puVar22[3] = 0;
                if (bStack_2e0 == 1) {
                  lStack_400 = CONCAT44(uStack_2ec,uStack_2f0);
                  uStack_3f8 = uStack_2e8;
                  puVar22 = &uStack_2f0;
                }
                else {
                  puVar22 = (uint *)&lStack_400;
                }
                puVar22[0] = 0;
                puVar22[1] = 0;
                puVar22[2] = 0;
                puVar22[3] = 0;
                if (bStack_330 == 1) {
                  lStack_410 = CONCAT44(uStack_33c,uStack_340);
                  uStack_408 = uStack_338;
                  puVar22 = &uStack_340;
                }
                else {
                  puVar22 = (uint *)&lStack_410;
                }
                puVar22[0] = 0;
                puVar22[1] = 0;
                puVar22[2] = 0;
                puVar22[3] = 0;
                if (cStack_190 == '\0') {
                  puVar22 = (uint *)&lStack_420;
                }
                else {
                  lStack_420 = CONCAT44(uStack_38c,uStack_390);
                  uStack_418 = uStack_388;
                  puVar22 = &uStack_390;
                }
                puVar22[0] = 0;
                puVar22[1] = 0;
                puVar22[2] = 0;
                puVar22[3] = 0;
                puVar14 = (undefined8 *)0x98;
                __Znwm();
                uStack_448 = uStack_218;
                lStack_450 = lStack_220;
                uStack_458 = uStack_3e8;
                lStack_460 = lStack_3f0;
                uStack_468 = uStack_3f8;
                lStack_470 = lStack_400;
                uStack_478 = uStack_408;
                lStack_480 = lStack_410;
                uStack_488 = uStack_418;
                lStack_490 = lStack_420;
                uStack_218 = 0;
                lStack_220 = 0;
                lStack_3f0 = 0;
                uStack_3e8 = 0;
                lStack_400 = 0;
                uStack_3f8 = 0;
                lStack_410 = 0;
                uStack_408 = 0;
                lStack_420 = 0;
                uStack_418 = 0;
                uStack_3a0 = 3;
                uVar4 = *(uint6 *)(lStack_450 + 0x20);
                if (lStack_460 == 0) {
                  uStack_424 = 0;
                  uVar23 = 1;
                  uStack_430 = 1;
                  uStack_438 = 1;
                  uVar24 = 1;
                  uVar25 = 1;
                }
                else {
                  uVar23 = *(uint *)(lStack_460 + 0x20);
                  uVar2 = *(uint6 *)(lStack_460 + 0x20);
                  uStack_424 = *(ushort *)(lStack_460 + 0x24) >> 8 & 1;
                  uStack_430 = (ulong)(uVar2 >> 8) & 1;
                  uStack_438 = (ulong)(uVar2 >> 0x10) & 1;
                  uVar24 = (uint)(uVar2 >> 0x18) & 1;
                  uVar25 = *(ushort *)(lStack_460 + 0x24) & 1;
                }
                if (lStack_470 == 0) {
                  uVar28 = 1;
                  uVar29 = 1;
                  uVar30 = 1;
                  uVar9 = 1;
                  uVar16 = 1;
                  uVar26 = 0;
                }
                else {
                  uVar28 = *(uint *)(lStack_470 + 0x20);
                  uVar3 = *(undefined6 *)(lStack_470 + 0x20);
                  uVar26 = *(ushort *)(lStack_470 + 0x24) >> 8 & 1;
                  uVar29 = (uint)((uint6)uVar3 >> 8) & 1;
                  uVar9 = (uint)((uint6)uVar3 >> 0x10);
                  uVar30 = uVar9 & 1;
                  uVar9 = uVar9 >> 8 & 1;
                  uVar16 = *(ushort *)(lStack_470 + 0x24) & 1;
                }
                if (lStack_480 == 0) {
                  uVar19 = 0;
                  uVar20 = 1;
                  uVar31 = 1;
                  uVar21 = 1;
                  uVar18 = 1;
                  uVar17 = 1;
                }
                else {
                  uVar20 = *(uint *)(lStack_480 + 0x20);
                  uVar3 = *(undefined6 *)(lStack_480 + 0x20);
                  uVar19 = *(ushort *)(lStack_480 + 0x24) >> 8 & 1;
                  uVar17 = *(ushort *)(lStack_480 + 0x24) & 1;
                  uVar21 = (uint)((uint6)uVar3 >> 0x10);
                  uVar18 = uVar21 >> 8 & 1;
                  uVar21 = uVar21 & 1;
                  uVar31 = (uint)((uint6)uVar3 >> 8) & 1;
                }
                if (lStack_490 == 0) {
                  uVar33 = 1;
                  uVar36 = 1;
                  uVar35 = 1;
                  uVar34 = 1;
                  uVar27 = 1;
                  uVar13 = 0;
                }
                else {
                  uVar27 = *(ushort *)(lStack_490 + 0x24);
                  uVar33 = *(uint *)(lStack_490 + 0x20);
                  uVar2 = *(uint6 *)(lStack_490 + 0x20);
                  uVar36 = (ulong)(uVar2 >> 8);
                  uVar35 = (ulong)(uVar2 >> 0x10);
                  uVar34 = (uint)(uint3)(uVar2 >> 0x18);
                  uVar13 = (ulong)(uVar27 >> 8);
                }
                uVar5 = (uint)(uVar4 >> 0x10);
                uVar1 = (uint)((uVar36 & 0xff) << 8);
                if (((uint)(uVar4 >> 8) & 1 & (uint)uStack_430 & uVar29 & uVar31) == 0) {
                  uVar1 = 0;
                }
                uVar29 = (uint)((uVar35 & 0xff) << 0x10);
                if ((uVar5 & 1 & (uint)uStack_438 & uVar30 & uVar21) == 0) {
                  uVar29 = 0;
                }
                uVar34 = uVar34 << 0x18;
                if ((uVar5 >> 8 & 1 & uVar24 & uVar9 & uVar18) == 0) {
                  uVar34 = 0;
                }
                uVar27 = uVar27 & 0xff;
                if (((ushort)(uVar4 >> 0x20) & 1 & uVar25 & uVar16 & uVar17) == 0) {
                  uVar27 = 0;
                }
                bVar6 = (uVar4 & 0x10000000000) == 0;
                uVar8 = bVar6 && ((uStack_424 == 0 && uVar26 == 0) && uVar19 == 0);
                uVar25 = 0x100;
                if (bVar6 && ((uStack_424 == 0 && uVar26 == 0) && uVar19 == 0)) {
                  uVar25 = (ushort)((uVar13 << 0x28) >> 0x20);
                }
                auStack_1b0._4_2_ = uVar27 | uVar25;
                auStack_1b0._0_4_ =
                     uVar1 | (uint)uVar4 & uVar23 & uVar28 & uVar20 & uVar33 & 1 | uVar29 | uVar34;
                func_0x0001072c9f9c(puVar14,0x14,auStack_3a8,auStack_1b0);
                func_0x0001072c9884(auStack_3a8);
                *puVar14 = &PTR_DAT_1109d6170;
                puVar14[10] = uStack_448;
                puVar14[9] = lStack_450;
                auStack_1b0 = (undefined1  [8])0x0;
                uStack_1a8 = 0;
                puVar14[0xc] = uStack_458;
                puVar14[0xb] = lStack_460;
                uStack_1b8 = 0;
                uStack_1c0 = 0;
                puVar14[0xe] = uStack_468;
                puVar14[0xd] = lStack_470;
                uStack_1c8 = 0;
                uStack_1d0 = 0;
                puVar14[0x10] = uStack_478;
                puVar14[0xf] = lStack_480;
                uStack_1d8 = 0;
                uStack_1e0 = 0;
                puVar14[0x12] = uStack_488;
                puVar14[0x11] = lStack_490;
                uStack_1e8 = 0;
                uStack_1f0 = 0;
                puStack_3e0 = puVar14;
                func_0x0001072c9b9c(&uStack_1f0);
                func_0x0001072c9b9c(&uStack_1e0);
                func_0x0001072c9b9c(&uStack_1d0);
                func_0x0001072c9b9c(&uStack_1c0);
                func_0x0001072c9b9c(auStack_1b0);
                *extraout_x8_00 = puVar14;
                puVar15 = (undefined8 *)0x20;
                __Znwm();
                *puVar15 = &PTR_DAT_1109d61f8;
                puVar15[1] = 0;
                puVar15[2] = 0;
                puVar15[3] = puVar14;
                extraout_x8_00[1] = puVar15;
                puStack_3e0 = (undefined8 *)0x0;
                *(undefined1 *)(extraout_x8_00 + 2) = 1;
                func_0x00010776f3f0(&puStack_3e0);
                func_0x0001072c9b9c(&lStack_420);
                func_0x0001072c9b9c(&lStack_410);
                func_0x0001072c9b9c(&lStack_400);
                func_0x0001072c9b9c(&lStack_3f0);
              }
              func_0x0001072c95d0(&uStack_390);
              func_0x0001072f5f4c(auStack_1a0);
            }
            func_0x0001072c95d0(&uStack_340);
            func_0x0001072f5f4c(auStack_188);
          }
          func_0x0001072c95d0(&uStack_2f0);
          func_0x0001072f5f4c(auStack_128);
        }
        func_0x0001072c95d0(&uStack_290);
        func_0x0001072f5f4c(auStack_160);
      }
      func_0x0001072f5f6c(alStack_170);
    }
    else {
      func_0x00010756a788(auStack_160,auStack_260);
      func_0x00010724ef84(auStack_128,auStack_160);
      func_0x0001004c3cd0(&uStack_290,&UNK_10f426a2b,auStack_128);
      func_0x00010048a6c8(auStack_278,&uStack_290,&UNK_10f417b93);
      func_0x00010776f488();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_278);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_290);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
      func_0x000104c2f714(auStack_160);
      func_0x00010776f498();
    }
    func_0x0001072c9884(auStack_260);
  }
  plVar10 = &lStack_220;
  func_0x0001072c95d0();
code_r0x00010776ee54:
  func_0x00010776f430(uStack_110);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d8);
  func_0x0001072c95d0(&uStack_390);
  func_0x0001072f5f4c(auStack_1a0);
  func_0x0001072c95d0(&uStack_340);
  func_0x0001072f5f4c(auStack_188);
  func_0x0001072c95d0(&uStack_2f0);
  func_0x0001072f5f4c(auStack_128);
  func_0x0001072c95d0(&uStack_290);
  func_0x0001072f5f4c(auStack_160);
  func_0x0001072f5f6c(alStack_170);
  func_0x0001072c9884(auStack_260);
  plVar11 = &lStack_220;
  func_0x0001072c95d0();
  func_0x00010776f4d4();
  puStack_498 = &DAT_10776f094;
  puStack_4b0 = puVar14;
  plStack_4a8 = plVar10;
  ppuStack_4a0 = &puStack_b0;
  func_0x00010776f478();
  uStack_548 = 0;
  uStack_540 = 0;
  uStack_538 = 0;
  uStack_4b8 = extraout_x8_03;
  func_0x000100060964(auStack_4f8,&UNK_10f426b4a);
  func_0x0001074d2254(&uStack_548,auStack_4f8);
  func_0x000104c2f714(auStack_4f8);
  func_0x00010776f4f4(plVar11[9]);
  func_0x00010776f4ac();
  func_0x0001072aad1c(&uStack_548,auStack_4f8);
  func_0x00010776f490();
  puStack_568 = &UNK_10e52b660;
  uStack_560 = 0;
  uStack_558 = 0;
  uStack_550 = 0;
  if (plVar11[0xb] != 0) {
    func_0x00010776f4f4();
    func_0x00010776f4ac();
    func_0x00010776f4c4();
    func_0x00010776f460();
    func_0x00010776f4cc();
    func_0x00010776f4a4();
    func_0x00010776f490();
  }
  if (plVar11[0xd] != 0) {
    func_0x00010776f4f4();
    func_0x00010776f4ac();
    func_0x00010776f4c4();
    func_0x00010776f460();
    func_0x00010776f4cc();
    func_0x00010776f4a4();
    func_0x00010776f490();
  }
  if (plVar11[0xf] != 0) {
    func_0x00010776f4f4();
    func_0x00010776f4ac();
    func_0x00010776f4c4();
    func_0x00010776f460();
    func_0x00010776f4cc();
    func_0x00010776f4a4();
    func_0x00010776f490();
  }
  if (plVar11[0x11] != 0) {
    func_0x00010776f4f4();
    func_0x00010776f4ac();
    func_0x00010776f4c4();
    func_0x00010776f460();
    func_0x00010776f4cc();
    func_0x00010776f4a4();
    func_0x00010776f490();
  }
  func_0x000104c33260(auStack_4f8,&puStack_568);
  func_0x0001075726d4(&uStack_548,auStack_4f8);
  func_0x000104c335c0(auStack_4f8);
  func_0x000107327958(&uStack_580,&uStack_548);
  *extraout_x8_02 = 0;
  *(undefined8 *)(extraout_x8_02 + 4) = uStack_578;
  *(undefined8 *)(extraout_x8_02 + 2) = uStack_580;
  uStack_580 = 0;
  uStack_578 = 0;
  func_0x000104c33108(&uStack_580);
  func_0x000104c33548(&puStack_568);
  func_0x000107269124(&uStack_548);
  func_0x00010776f430(uStack_4b8);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010776f4a4();
  func_0x00010776f490();
  func_0x000104c33548(&puStack_568);
  do {
    func_0x000107269124(&uStack_548);
    func_0x00010776f4d4();
    func_0x00010776f490();
  } while( true );
}



/* Entry: 10776f398; end: 10776f3d3;  */

long FUN_10776f398(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109d6238);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10776fbd0; end: 10776fd0b;  */

undefined *** FUN_10776fbd0(undefined ***param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined ***pppuVar3;
  char *pcVar4;
  undefined1 uVar5;
  uint extraout_w8;
  undefined1 auStack_80 [16];
  undefined **ppuStack_70;
  undefined1 *puStack_68;
  undefined ***pppuStack_58;
  
  pppuVar3 = param_1;
  func_0x00010777006c();
  uVar1 = *(int *)(pppuVar3 + 1) - 1U >> 2 | (*(int *)(pppuVar3 + 1) - 1U) * 0x40000000;
  uVar2 = uVar1 == 9;
  uVar5 = 0;
  switch(uVar1) {
  case 0:
    func_0x00010777013c();
    pcVar4 = "error";
    pppuVar3 = &ppuStack_70;
    func_0x000107278484(pppuVar3,"error");
    if (((ulong)pppuVar3 & 1) != 0) {
code_r0x00010776fc40:
      func_0x0001077700b8();
      uVar5 = 0;
      goto code_r0x00010776fcc0;
    }
    pppuVar3 = param_1;
    func_0x00010776fdfc();
    if (((ulong)pppuVar3 & 1) == 0) {
      pppuVar3 = &ppuStack_70;
      func_0x000107264c5c();
      func_0x00010772cf1c(param_1);
      func_0x00010772cd44(pppuVar3,pcVar4,auStack_80);
      if (((ulong)pppuVar3 & 1) == 0) goto code_r0x00010776fc40;
    }
    func_0x0001077700b8();
    break;
  case 2:
  case 5:
  case 9:
    goto code_r0x00010776fcc0;
  }
  auStack_80[0] = 1;
  ppuStack_70 = &PTR_FUN_1109d6258;
  pppuStack_58 = &ppuStack_70;
  puStack_68 = auStack_80;
  func_0x0001077700d8((*param_1)[2]);
  func_0x0001077700c0();
  uVar5 = auStack_80[0];
code_r0x00010776fcc0:
  func_0x000107770090(uVar5);
  if ((bool)uVar2) {
    return (undefined ***)(ulong)(extraout_w8 & 1);
  }
  ___stack_chk_fail();
  func_0x0001077700b8();
  func_0x0001077700b0();
  return pppuVar3;
}



/* Entry: 10776fea4; end: 10776feab;  */

void FUN_10776fea4(void)

{
  return;
}



/* Entry: 10776ffd4; end: 10776fff7;  */

void FUN_10776ffd4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109d62d8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1077707e8; end: 107770e0f;  */

void FUN_1077707e8(undefined8 *param_1,uint *param_2,undefined8 *****param_3,undefined8 *****param_4
                  ,uint *param_5,undefined8 *****param_6,undefined8 param_7)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined **ppuVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 ****ppppuVar8;
  uint **ppuVar9;
  undefined *puVar10;
  undefined8 *****pppppuVar11;
  uint *puVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  uint uVar13;
  code *extraout_x9;
  int extraout_w10;
  undefined1 auStack_4d0 [16];
  undefined1 uStack_4c0;
  undefined1 auStack_4b8 [16];
  undefined1 auStack_4a8 [24];
  uint *puStack_490;
  uint *puStack_488;
  undefined1 auStack_478 [24];
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [4];
  undefined1 uStack_444;
  undefined1 auStack_430 [24];
  undefined1 auStack_418 [81];
  undefined1 uStack_3c7;
  undefined8 **ppuStack_368;
  undefined8 uStack_360;
  undefined8 ***apppuStack_358 [3];
  undefined1 auStack_340 [24];
  char cStack_328;
  undefined8 ***apppuStack_320 [3];
  undefined8 ***apppuStack_308 [3];
  uint *puStack_2f0;
  undefined8 uStack_2e8;
  byte bStack_2e0;
  undefined8 ***pppuStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 ****ppppuStack_280;
  undefined *apuStack_278 [14];
  int iStack_208;
  undefined8 ****ppppuStack_200;
  undefined *puStack_1f8;
  undefined1 uStack_1f0;
  byte bStack_1c8;
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  undefined8 uStack_58;
  
  pppppuVar4 = param_3;
  pppppuVar11 = param_4;
  puVar12 = param_5;
  func_0x000107771b50();
  puStack_2f0 = (uint *)((ulong)puStack_2f0 & 0xffffffffffffff00);
  bStack_2e0 = 0;
  pppppuVar3 = pppppuVar4 + 1;
  pppppuVar2 = pppppuVar3;
  uStack_58 = extraout_x8;
  (*(code *)(*pppppuVar4)[3])();
  if ((int)pppppuVar2 == 0) {
    func_0x000107771be8(&ppppuStack_200);
    func_0x000107768e6c();
    func_0x000107771c00();
    func_0x0001072c95d0(&ppppuStack_200);
LAB_1077709e8:
    puVar6 = puStack_2f0;
    if ((bStack_2e0 & 1) != 0) {
      if ((char)param_2[10] == '\x01') {
        uVar1 = param_2[8];
        if (uVar1 < 0xc) {
          uVar13 = 1 << (ulong)(uVar1 & 0x1f);
          if ((uVar13 & 0xae) == 0) {
            if ((uVar13 & 0xa10) == 0) goto LAB_107770a54;
LAB_107770a64:
            uVar13 = puStack_2f0[6];
            if (uVar13 != 3 && uVar13 != 6) goto LAB_107770bac;
LAB_107770a74:
            uVar1 = *param_5;
            if ((char)param_5[1] == '\0') {
              uVar1 = 0;
            }
            puVar12 = (uint *)(ulong)uVar1;
            func_0x000107771bac();
          }
          else {
            uVar13 = puStack_2f0[6];
            if (uVar13 != 6) {
              if (uVar1 == 4) goto LAB_107770a64;
              goto LAB_107770bac;
            }
            uVar1 = *param_5;
            if ((char)param_5[1] == '\0') {
              uVar1 = 1;
            }
            puVar12 = (uint *)(ulong)uVar1;
            func_0x000107771bac();
          }
          puStack_1f8 = apuStack_278[0];
          ppppuStack_200 = ppppuStack_280;
          ppppuStack_280 = (undefined8 *****)0x0;
          apuStack_278[0] = (undefined *)0x0;
          uStack_1f0 = 1;
          func_0x000107771c00();
          func_0x0001072c95d0(&ppppuStack_200);
          func_0x0001072c9b9c(&ppppuStack_280);
        }
        else {
LAB_107770a54:
          uVar13 = puStack_2f0[6];
LAB_107770bac:
          if (uVar1 == 7 && uVar13 == 7) {
            puVar7 = puStack_2f0 + 4;
            func_0x00010756aea8();
            if (puVar7[2] == 3) {
              puVar7 = param_2 + 6;
              func_0x00010756aea8();
              if (puVar7[2] != 3) goto LAB_107770a74;
            }
          }
          pppppuVar4 = (undefined8 *****)(puVar6 + 4);
          func_0x00010756f724(auStack_340,param_2 + 6,pppppuVar4);
          if (cStack_328 == '\x01') {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (&ppppuStack_200,auStack_340);
            pppppuVar4 = &ppppuStack_200;
            func_0x000107771b60();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_200);
          }
          func_0x0001001148fc(auStack_340);
          in_ZR = **(long **)(param_2 + 0x10) == (*(long **)(param_2 + 0x10))[1];
          if (!(bool)in_ZR) goto LAB_107770c30;
        }
      }
      param_5 = puStack_2f0;
      if (((puStack_2f0[2] == 2) || (puStack_2f0[6] == 0xb)) ||
         (puVar6 = puStack_2f0, func_0x000107770440(), (int)puVar6 == 0)) {
        func_0x000107771b98();
        in_ZR = bStack_2e0 == 1;
        if ((bool)in_ZR) {
          param_1[1] = uStack_2e8;
          *param_1 = puStack_2f0;
          puStack_2f0 = (uint *)0x0;
          uStack_2e8 = 0;
          *(undefined1 *)(param_1 + 2) = 1;
        }
      }
      else {
        func_0x000107751284(&ppppuStack_200);
        uStack_290 = 0;
        uStack_2a8 = 0;
        uStack_2b0 = 0;
        uStack_298 = 0;
        uStack_2a0 = 0;
        uStack_2c8 = 0;
        pppuStack_2d0 = (undefined8 ****)0x0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        pppppuVar11 = (undefined8 *****)&pppuStack_2d0;
        func_0x000107753050(&ppppuStack_280,param_5,&ppppuStack_200,pppppuVar11);
        func_0x00010724b3d8(&pppuStack_2d0);
        in_ZR = iStack_208 == 1;
        if ((bool)in_ZR) {
          in_ZR = param_5[6] == 7;
          if ((bool)in_ZR) {
            pppppuVar2 = (undefined8 *****)(param_5 + 4);
            func_0x00010756aea8();
            pppppuVar11 = &ppppuStack_280;
            func_0x0001073405dc();
            func_0x000107325cc8();
            func_0x000107771c60();
            func_0x000107771bc4();
            pppuStack_68 = pppppuVar11[1];
            pppuStack_70 = *pppppuVar11;
            *pppppuVar11 = (undefined8 ****)0x0;
            pppppuVar11[1] = (undefined8 ****)0x0;
            pppppuVar11 = (undefined8 *****)&pppuStack_70;
            pppppuVar4 = pppppuVar2;
            func_0x000107769788(param_5 + 6,pppppuVar2,pppppuVar11);
            func_0x00010726b188(&pppuStack_70);
            func_0x000107771b7c();
            *param_1 = param_5;
            param_1[1] = pppppuVar2;
            ppuStack_368 = (undefined8 ***)0x0;
            uStack_360 = 0;
            *(undefined1 *)(param_1 + 2) = 1;
            ppppuVar8 = (undefined8 ****)&ppuStack_368;
          }
          else {
            pppppuVar2 = &ppppuStack_280;
            func_0x0001073405dc();
            func_0x000107771c60();
            func_0x000107771bc4();
            pppppuVar4 = pppppuVar2;
            func_0x000107539b24(param_5 + 6,pppppuVar2);
            func_0x000107771b7c();
            *param_1 = param_5;
            param_1[1] = pppppuVar2;
            pppuStack_70 = (undefined8 ****)0x0;
            pppuStack_68 = (undefined8 ****)0x0;
            *(undefined1 *)(param_1 + 2) = 1;
            ppppuVar8 = &pppuStack_70;
          }
          func_0x0001075795dc(ppppuVar8);
        }
        else {
          func_0x00010756dd74(&ppppuStack_280);
          func_0x00010724ef84(apppuStack_358);
          pppppuVar4 = (undefined8 *****)apppuStack_358;
          func_0x000107771b60();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_358);
          func_0x000107771b98();
        }
        func_0x000107771c38();
        func_0x000107267da8(&ppppuStack_200);
      }
      goto LAB_107770c34;
    }
  }
  else {
    (*(code *)(*param_3)[4])();
    if (pppppuVar3 != (undefined8 *****)0x0) {
      func_0x000107771c54(&ppppuStack_280);
      (*(code *)ppppuStack_280[0xd])(&ppppuStack_200,apuStack_278);
      func_0x0001072f5f6c(&ppppuStack_280);
      if ((bStack_1c8 & 1) == 0) {
        func_0x000107771c54(&pppuStack_70);
        func_0x00010754c3ec(&pppuStack_2d0,&pppuStack_70);
        func_0x0001004c3cd0(&ppppuStack_280,&UNK_10f426cfd,&pppuStack_2d0);
        func_0x00010048a6c8(apppuStack_320,&ppppuStack_280,&UNK_10f426d2a);
        pppppuVar4 = (undefined8 *****)apppuStack_320;
        pppppuVar11 = (undefined8 *****)0x0;
        func_0x00010756a69c(param_2,pppppuVar4,0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_320);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_280);
        func_0x000107771be0();
        func_0x0001072f5f6c(&pppuStack_70);
        func_0x000107771b98();
      }
      else {
        puVar10 = &UNK_10f426f08;
        pppppuVar4 = &ppppuStack_200;
        pppppuVar11 = (undefined8 *****)0x5;
        func_0x000107278530(pppppuVar4,&UNK_10f426f08,5);
        if ((int)pppppuVar4 == 0) {
          pppppuVar4 = &ppppuStack_200;
          func_0x000107264c5c();
          ppuVar5 = &PTR_DAT_1109d63c8;
          ppppuStack_280 = pppppuVar4;
          apuStack_278[0] = puVar10;
          func_0x000107771040(&PTR_DAT_1109d63c8,&ppppuStack_280);
          in_ZR = ppuVar5 == (undefined **)&UNK_1109d67e8;
          if ((bool)in_ZR) {
            func_0x000107264c5c(&ppppuStack_200);
            puVar12 = param_2;
            func_0x00010772b91c(&ppppuStack_280);
            pppppuVar11 = param_3;
            param_6 = param_4;
          }
          else {
            func_0x000107771be8(&ppppuStack_280);
            (*extraout_x9)();
          }
        }
        else {
          func_0x000107771be8(&ppppuStack_280);
          func_0x00010776994c();
        }
        pppppuVar4 = &ppppuStack_280;
        func_0x0001075530c4(&puStack_2f0,pppppuVar4);
        func_0x0001072c95d0(&ppppuStack_280);
      }
      func_0x00010724b3d8(&ppppuStack_200);
      if ((bStack_1c8 & 1) == 0) goto LAB_107770c34;
      goto LAB_1077709e8;
    }
    func_0x00010002b838(apppuStack_308,&UNK_10f426c9c);
    pppppuVar4 = (undefined8 *****)apppuStack_308;
    func_0x000107771b60();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apppuStack_308);
  }
LAB_107770c30:
  func_0x000107771b98();
LAB_107770c34:
  func_0x0001072c95d0();
  func_0x000107771b24(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726b188(&pppuStack_70);
  __ZNSt3__119__shared_weak_countD2Ev(param_5);
  func_0x000107579550(&pppuStack_2d0);
  func_0x000107771c38();
  func_0x000107267da8(&ppppuStack_200);
  ppuVar9 = &puStack_2f0;
  func_0x0001072c95d0();
  func_0x000107771b48();
  func_0x000100456794(auStack_460);
  func_0x000107878fec(auStack_478,pppppuVar11);
  func_0x00010533a9c0(auStack_448,auStack_460,auStack_478);
  func_0x00010048a6c8(auStack_430,auStack_448,&UNK_10f426c9a);
  puStack_488 = ppuVar9[9];
  puStack_490 = ppuVar9[8];
  if (ppuVar9[9] != (uint *)0x0) {
    do {
      func_0x000107771b38();
    } while (extraout_w10 != 0);
  }
  FUN_107771650(auStack_4a8,param_6);
  func_0x00010777193c(auStack_4b8,param_7,ppuVar9 + 6);
  func_0x000107771c28(auStack_418,auStack_430,&puStack_490,auStack_4a8,auStack_4b8);
  func_0x0001072c9830(auStack_4b8);
  func_0x0001072c9854(auStack_4a8);
  func_0x0001072c97fc(&puStack_490);
  func_0x000107771be0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_448);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_478);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_460);
  uStack_3c7 = 0;
  auStack_4d0[0] = 0;
  uStack_4c0 = 0;
  auStack_448[0] = 0;
  uStack_444 = 0;
  func_0x00010777067c(extraout_x8_00,auStack_418,pppppuVar4,0,puVar12,auStack_4d0,auStack_448);
  func_0x0001072c9854(auStack_4d0);
  func_0x000107771bbc();
  return;
}



/* Entry: 107771650; end: 10777167b;  */

undefined1 * FUN_107771650(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  func_0x00010777167c();
  return param_1;
}



/* Entry: 10777186c; end: 10777189b;  */

void FUN_10777186c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109d67f8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107771a94; end: 107771a97;  */

void FUN_107771a94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109d6878;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107772034; end: 10777208f;  */

bool FUN_107772034(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)(param_2 + 8) == 7) {
    plVar2 = *(long **)(param_1 + 0x48);
    (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(param_2 + 0x48));
    if ((int)plVar2 != 0) {
      if (*(long *)(param_1 + 0x68) == *(long *)(param_2 + 0x68)) {
        lVar3 = *(long *)(param_1 + 0x58);
        lVar4 = *(long *)(param_2 + 0x58);
        while (bVar1 = lVar3 == param_1 + 0x60, !bVar1) {
          lVar3 = lVar3 + 0x20;
          func_0x000107764378(lVar3,lVar4 + 0x20);
          if ((int)lVar3 == 0) {
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
  }
  return false;
}



/* Entry: 107772b30; end: 107772b43;  */

void FUN_107772b30(void)

{
  func_0x000107772b54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077733b0; end: 107773413;  */

void FUN_1077733b0(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined1 uVar10;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  code *extraout_x9;
  code *extraout_x9_00;
  long *plVar11;
  long lVar12;
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [16];
  undefined1 uStack_348;
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [16];
  undefined1 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  byte bStack_2d0;
  undefined1 auStack_2c8 [24];
  long lStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_287;
  byte bStack_286;
  byte bStack_285;
  byte bStack_284;
  byte bStack_283;
  byte bStack_282;
  undefined1 uStack_281;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [4];
  undefined1 uStack_26c;
  long lStack_260;
  undefined8 uStack_258;
  byte bStack_250;
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  long lStack_210;
  undefined1 auStack_208 [136];
  char cStack_180;
  undefined1 auStack_178 [56];
  byte bStack_140;
  undefined1 auStack_138 [4];
  undefined1 uStack_134;
  byte bStack_100;
  undefined8 uStack_f8;
  long alStack_a0 [14];
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  plVar8 = alStack_a0;
  plVar4 = alStack_a0;
  func_0x0001077740c4(param_1);
  alStack_a0[0]._0_1_ = 0;
  uStack_30 = 0;
  plVar9 = (long *)0x1;
  uStack_28 = extraout_x8;
  func_0x0001074d1ee8();
  func_0x000107296ad0();
  func_0x0001077740b0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107774138();
  func_0x000107296ad0();
  func_0x0001077740e0();
  func_0x0001077740c4();
  plVar11 = plVar4 + 1;
  plVar5 = plVar11;
  uStack_f8 = extraout_x8_01;
  (**(code **)(*plVar4 + 0x20))();
  uVar3 = plVar5 == (long *)0x5;
  if ((bool)uVar3) {
    func_0x000107774124();
    (*extraout_x9)(&lStack_210,plVar11,1);
    auStack_2f8[0] = 0;
    uStack_2e8 = 0;
    auStack_138[0] = 0;
    uStack_134 = 0;
    func_0x00010777067c(&lStack_2e0,plVar8,&lStack_210,1,plVar9,auStack_2f8,auStack_138);
    func_0x0001072c9854(auStack_2f8);
    func_0x000107774104();
    if ((bStack_2d0 & 1) == 0) {
      func_0x0001077741cc();
    }
    else {
      func_0x000107774124();
      func_0x000107774170(&lStack_210);
      (**(code **)(lStack_210 + 0x68))(auStack_138,auStack_208);
      func_0x000107774104();
      if ((bStack_100 & 1) == 0) {
        func_0x000107774124();
        func_0x000107774170(auStack_240);
        func_0x00010754c3ec(auStack_178,auStack_240);
        func_0x0001004c3cd0(&lStack_210,&UNK_10f4257d9,auStack_178);
        func_0x00010048a6c8(auStack_310,&lStack_210,&UNK_10f417b93);
        func_0x00010756a69c(plVar8,auStack_310,2);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_310);
        func_0x0001077740e8();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
        func_0x000107774198();
        func_0x0001077741cc();
      }
      else {
        func_0x000107774124();
        func_0x000107774164(&lStack_210);
        (**(code **)(lStack_210 + 0x68))(auStack_178,auStack_208);
        func_0x000107774104();
        if ((bStack_140 & 1) == 0) {
          func_0x000107774124();
          func_0x000107774164(&lStack_260);
          func_0x00010754c3ec(auStack_240,&lStack_260);
          func_0x0001004c3cd0(&lStack_210,&UNK_10f4270d7,auStack_240);
          func_0x00010048a6c8(auStack_328,&lStack_210,&UNK_10f417b93);
          func_0x00010756a69c(plVar8,auStack_328,3);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_328);
          func_0x0001077740e8();
          func_0x0001077741a0();
          func_0x0001072f5f6c(&lStack_260);
          func_0x0001077741cc();
        }
        else {
          func_0x00010724ef84(auStack_240,auStack_138);
          func_0x00010724ef84(auStack_228,auStack_178);
          func_0x0001000e3098(auStack_340,auStack_240,2);
          func_0x000107754984(&lStack_210,plVar9,auStack_340);
          func_0x0001000e30f4(auStack_340);
          lVar12 = 0x18;
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                      (auStack_240 + lVar12);
            lVar12 = lVar12 + -0x18;
          } while (lVar12 != -0x18);
          func_0x000107774124();
          (*extraout_x9_00)(auStack_240,plVar11,4);
          uVar3 = cStack_180 == '\0';
          plVar4 = &lStack_210;
          if ((bool)uVar3) {
            plVar4 = plVar9;
          }
          auStack_358[0] = 0;
          uStack_348 = 0;
          auStack_270[0] = 0;
          uStack_26c = 0;
          func_0x00010777067c(&lStack_260,plVar8,auStack_240,4,plVar4,auStack_358,auStack_270);
          func_0x0001072c9854(auStack_358);
          func_0x000107774198();
          if ((bStack_250 & 1) == 0) {
            func_0x00010002b838(auStack_370,&UNK_10f4258f4);
            func_0x00010756a69c(plVar8,auStack_370,4);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_370);
            uVar10 = 0;
            *(undefined1 *)extraout_x8_00 = 0;
          }
          else {
            if ((bStack_100 != 1) || ((bStack_140 & 1) == 0)) goto code_r0x000107773980;
            puVar6 = (undefined8 *)0xf0;
            __Znwm();
            lVar12 = lStack_260;
            uStack_298 = uStack_2d8;
            lStack_2a0 = lStack_2e0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            *puVar6 = &PTR_DAT_1109d6ad8;
            lStack_2e0 = 0;
            uStack_2d8 = 0;
            uStack_2a8 = uStack_258;
            lStack_2b0 = lStack_260;
            lStack_260 = 0;
            uStack_258 = 0;
            iVar1 = *(int *)(lStack_2a0 + 0x18);
            if (iVar1 == 7) {
              func_0x0001072c9ff4(auStack_280,lVar12 + 0x10);
              func_0x0001072f5dec(auStack_240,auStack_280);
              puVar7 = auStack_270;
              func_0x0001072f6ad4(puVar7,auStack_240);
            }
            else {
              puVar7 = auStack_270;
              func_0x0001072c9ff4(puVar7,lStack_2a0 + 0x10);
            }
            func_0x00010785f1f4();
            uStack_287 = 0;
            puVar7 = puVar7 + 0x2e0;
            func_0x00010724e2c8(puVar7,&uStack_287);
            if ((((ulong)puVar7 & 1) == 0) && (*(char *)(lStack_2a0 + 0x20) == '\x01')) {
              bStack_286 = *(byte *)(lStack_2b0 + 0x20);
            }
            else {
              bStack_286 = 0;
            }
            bStack_286 = bStack_286 & 1;
            if (*(char *)(lStack_2a0 + 0x21) == '\x01') {
              bStack_285 = *(byte *)(lStack_2b0 + 0x21);
            }
            else {
              bStack_285 = 0;
            }
            bStack_285 = bStack_285 & 1;
            if (*(char *)(lStack_2a0 + 0x22) == '\x01') {
              bStack_284 = *(byte *)(lStack_2b0 + 0x22);
            }
            else {
              bStack_284 = 0;
            }
            bStack_284 = bStack_284 & 1;
            if (*(char *)(lStack_2a0 + 0x23) == '\x01') {
              bStack_283 = *(byte *)(lStack_2b0 + 0x23);
            }
            else {
              bStack_283 = 0;
            }
            bStack_283 = bStack_283 & 1;
            if (*(char *)(lStack_2a0 + 0x24) == '\x01') {
              bStack_282 = *(byte *)(lStack_2b0 + 0x24);
            }
            else {
              bStack_282 = 0;
            }
            bStack_282 = bStack_282 & 1;
            uStack_281 = 0;
            func_0x0001072c9f9c(puVar6 + 3,0x1b,auStack_270,&bStack_286);
            func_0x0001072c9884(auStack_270);
            uVar3 = iVar1 == 7;
            if ((bool)uVar3) {
              func_0x0001072c9884(auStack_240);
              func_0x0001072c9884(auStack_280);
            }
            puVar6[3] = &PTR_DAT_1109d6950;
            puVar6[0xd] = uStack_298;
            puVar6[0xc] = lStack_2a0;
            lStack_2a0 = 0;
            uStack_298 = 0;
            func_0x000104c2fe00(puVar6 + 0xe,auStack_138);
            func_0x000104c2fe00(puVar6 + 0x15,auStack_178);
            puVar6[0x1d] = uStack_2a8;
            puVar6[0x1c] = lStack_2b0;
            lStack_2b0 = 0;
            uStack_2a8 = 0;
            func_0x0001072c9b9c(&lStack_2b0);
            func_0x0001072c9b9c(&lStack_2a0);
            *extraout_x8_00 = (long)(puVar6 + 3);
            extraout_x8_00[1] = (long)puVar6;
            uVar10 = 1;
          }
          *(undefined1 *)(extraout_x8_00 + 2) = uVar10;
          func_0x0001072c95d0(&lStack_260);
          func_0x00010752b5b8(&lStack_210);
        }
        func_0x00010724b3d8(auStack_178);
      }
      func_0x00010724b3d8(auStack_138);
    }
    func_0x0001072c95d0(&lStack_2e0);
  }
  else {
    func_0x000107878fec(&lStack_210,(undefined1 *)((long)plVar5 + -1));
    func_0x0001004c3cd0(auStack_2c8,&UNK_10f42707b,&lStack_210);
    func_0x00010756a668(plVar8,auStack_2c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c8);
    func_0x0001077740e8();
    func_0x0001077741cc();
  }
  func_0x0001077740b0(uStack_f8);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
code_r0x000107773980:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x107773988);
  (*pcVar2)();
}



/* Entry: 107773dbc; end: 107773e0b;  */

undefined8 * FUN_107773dbc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d6950;
  func_0x0001072c9b9c(param_1 + 0x19);
  func_0x000104c2f714(param_1 + 0x12);
  func_0x000104c2f714(param_1 + 0xb);
  func_0x0001072c9b9c(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107773f4c; end: 107774033;  */

undefined8 * FUN_107773f4c(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long *plVar7;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_48;
  
  puVar6 = &uStack_1e0;
  lVar3 = param_2;
  func_0x0001077740c4();
  lVar2 = *(long *)(lVar3 + 8);
  uVar5 = *(undefined8 *)(lVar3 + 0x10);
  plVar7 = *(long **)(lVar2 + 200);
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  uStack_48 = extraout_x8;
  func_0x00010756ec34(uVar4);
  func_0x0001077592cc(&uStack_1e0,uVar4);
  (**(code **)(*plVar7 + 0x48))(plVar7,uVar5,&uStack_1e0,*(undefined8 *)(param_2 + 0x20));
  func_0x0001074332fc(&uStack_1e0);
  uVar4 = *(undefined8 *)(lVar2 + 200);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010756ec34();
  uStack_1a0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  func_0x000107753050(param_1,uVar4,uVar5,&uStack_1e0);
  func_0x00010724b3d8(&uStack_1e0);
  func_0x0001077740b0(uStack_48);
  if ((bool)in_ZR) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x000107774138();
  func_0x00010724b3d8();
  func_0x0001077740e0();
  func_0x0001004a5364(uVar5,&PTR_DAT_1109d6ab8);
  puVar1 = (undefined1 *)((long)puVar6 + 8);
  if ((int)uVar5 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return (undefined8 *)puVar1;
}



/* Entry: 107774884; end: 107774897;  */

bool FUN_107774884(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uStack_20;
  long lStack_18;
  
  uStack_20 = *param_3;
  lStack_18 = param_3[1];
  iVar1 = (int)&uStack_20;
  if (lStack_18 == param_2) {
    func_0x000100067218(&uStack_20,param_1,param_2);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 107774dcc; end: 107774dff;  */

void FUN_107774dcc(void)

{
  undefined8 *puVar1;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar1 = (undefined8 *)&stack0x00000008;
  func_0x000107c60c6c(puVar1,0,&UNK_10f427113);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 107775240; end: 10777527f;  */

void FUN_107775240(void)

{
  func_0x00010777d738();
  func_0x000107775260();
  return;
}



/* Entry: 107775430; end: 1077754c7;  */

void FUN_107775430(undefined8 *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long lVar3;
  
  func_0x00010777d250();
  func_0x00010777d860();
  func_0x00010777dda8();
  lVar1 = ((long *)*param_1)[1];
  for (lVar3 = *(long *)*param_1; uVar2 = lVar3 == lVar1, !(bool)uVar2; lVar3 = lVar3 + 4) {
    func_0x00010777d7d8();
    func_0x00010777d648();
  }
  func_0x00010777d83c();
  func_0x00010777d9b8();
  func_0x00010777d23c(extraout_x8);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d9b8();
  func_0x00010777d638();
  func_0x00010777d428();
  func_0x0001077754e4();
  return;
}



/* Entry: 10777573c; end: 10777576b;  */

void FUN_10777573c(void)

{
  func_0x00010777d3b8(3);
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 107775e38; end: 107775e6f;  */

void FUN_107775e38(void)

{
  func_0x00010777dca4();
  func_0x000107775204();
  func_0x00010777d520();
  func_0x00010777d3f4();
  func_0x00010777d71c();
  func_0x00010777d6f8();
  return;
}



/* Entry: 107776500; end: 1077765a3;  */

void FUN_107776500(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 0x100;
  puStack_90 = &uStack_50;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_60 = 0x200;
  uStack_58 = 0x144;
  uStack_54 = 0;
  func_0x00010777630c(&puStack_90,param_2);
  puVar1 = &uStack_50;
  func_0x000107326be8(puVar1);
  func_0x00010002b838(param_1,puVar1);
  func_0x000107302960(&uStack_88);
  func_0x000107302960(&uStack_50);
  return;
}



/* Entry: 107777380; end: 1077774f3;  */

void FUN_107777380(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined1 extraout_w8;
  undefined1 uVar4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined1 auStack_158 [24];
  undefined8 *puStack_140;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined8 *puStack_130;
  long lStack_110;
  undefined8 auStack_100 [4];
  undefined8 auStack_e0 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte bStack_60;
  undefined8 uStack_58;
  
  func_0x00010777d250();
  iVar1 = *(int *)(param_1 + 0xd);
  uStack_58 = extraout_x8;
  if ((((((iVar1 == 0) || (in_ZR = 1, iVar1 == 1)) || (in_ZR = 1, iVar1 == 2)) ||
       ((in_ZR = 1, iVar1 == 3 || (in_ZR = 1, iVar1 == 4)))) ||
      ((in_ZR = 1, iVar1 == 5 || ((in_ZR = 1, iVar1 == 6 || (in_ZR = 1, iVar1 == 7)))))) ||
     (in_ZR = iVar1 == 8, (bool)in_ZR)) {
    func_0x00010777d724();
  }
  else {
    func_0x00010777da84();
    func_0x000104c32780(auStack_100);
    func_0x000107348ee8();
    func_0x00010777dc10();
    while (unaff_x21 != 0) {
      func_0x00010777da30(auStack_e0);
      param_2 = auStack_e0;
      func_0x00010729d394(&uStack_a0);
      func_0x000104c3323c(auStack_e0);
      bVar2 = bStack_60;
      if ((bStack_60 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        func_0x00010777de30();
        func_0x000107269164();
        param_2 = &uStack_a0;
        func_0x0001072d80fc();
      }
      func_0x000107267ed0(&uStack_a0);
      if (bVar2 == 0) {
        func_0x00010777d890();
        goto LAB_1077774b4;
      }
      func_0x00010777db40();
      unaff_x21 = lStack_110;
    }
    param_2 = auStack_100;
    func_0x000104c33260(&uStack_a0);
    unaff_x19[1] = uStack_98;
    *unaff_x19 = uStack_a0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x00010777d960();
    func_0x000104c335c0(&uStack_a0);
LAB_1077774b4:
    param_1 = auStack_100;
    func_0x000104c33548();
  }
  func_0x00010777d23c(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar3 = auStack_100;
    func_0x000104c33548();
    func_0x00010777d9d0();
    puStack_130 = param_1;
    func_0x0001077752bc();
    uStack_138 = SUB84(param_2,0);
    uStack_134 = (undefined1)((ulong)param_2 >> 0x20);
    puStack_140 = puVar3;
    if (((ulong)param_2 >> 0x20 & 1) == 0) {
      func_0x00010777d748();
      uVar4 = extraout_w8;
    }
    else {
      func_0x0001074e8e04(auStack_158,&puStack_140);
      func_0x00010777ddf0();
      uVar4 = 1;
    }
    *(undefined1 *)(extraout_x8_00 + 0x18) = uVar4;
    return;
  }
  return;
}



/* Entry: 10777786c; end: 1077778db;  */

void FUN_10777786c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d0 [104];
  undefined1 auStack_68 [72];
  
  func_0x00010777d298();
  puVar1 = auStack_d0;
  func_0x000107348eb0();
  func_0x00010777dbc0();
  puVar2 = auStack_68;
  func_0x00010777dd7c();
  func_0x00010777dbb0();
  func_0x00010777d648();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777dbb0();
  func_0x00010777d648();
  func_0x00010777d638();
  puStack_e8 = &SUB_1077778dc;
  puStack_f8 = puVar1;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000107777904(puVar2,&puStack_f8);
  return;
}



/* Entry: 107777b6c; end: 107777bdb;  */

long * FUN_107777b6c(void)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 in_ZR;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong extraout_x8;
  long extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  byte *pbVar8;
  undefined1 *puVar9;
  char *pcVar10;
  ulong uVar11;
  byte abStack_d8 [8];
  long alStack_d0 [13];
  ulong auStack_68 [9];
  
  func_0x00010777d298();
  plVar4 = alStack_d0;
  func_0x000107348ecc();
  func_0x00010777dbc0();
  puVar7 = auStack_68;
  func_0x00010777dd7c();
  func_0x00010777dbb0();
  func_0x00010777d648();
  func_0x00010777d20c();
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  plVar5 = plVar4;
  func_0x00010777dbb0();
  func_0x00010777d648();
  func_0x00010777d638();
  uVar11 = *puVar7;
  uVar6 = uVar11;
  _strlen();
  func_0x00010734ac28(plVar5,uVar11,uVar6,0);
  func_0x000107349544();
  func_0x00010734ac10();
  func_0x000107349658();
  func_0x00010734ab28(0);
  *(undefined8 *)(extraout_x9 + 0x18) = extraout_x11;
  *extraout_x10 = 0x22;
  for (uVar11 = extraout_x8; uVar11 < (uVar6 & 0xffffffff); uVar11 = uVar11 + 1) {
    bVar1 = abStack_d8[uVar11];
    cVar2 = (&UNK_10de4e441)[bVar1];
    pbVar8 = *(byte **)(*plVar4 + 0x18);
    *(byte **)(*plVar4 + 0x18) = pbVar8 + 1;
    if (cVar2 == '\0') {
      *pbVar8 = bVar1;
    }
    else {
      *pbVar8 = 0x5c;
      pcVar10 = *(char **)(*plVar4 + 0x18);
      *(char **)(*plVar4 + 0x18) = pcVar10 + 1;
      *pcVar10 = cVar2;
      if (cVar2 == 'u') {
        puVar9 = *(undefined1 **)(*plVar4 + 0x18);
        *(undefined1 **)(*plVar4 + 0x18) = puVar9 + 1;
        *puVar9 = 0x30;
        puVar9 = *(undefined1 **)(*plVar4 + 0x18);
        *(undefined1 **)(*plVar4 + 0x18) = puVar9 + 1;
        *puVar9 = 0x30;
        uVar3 = (&UNK_10de4e431)[bVar1 >> 4];
        puVar9 = *(undefined1 **)(*plVar4 + 0x18);
        *(undefined1 **)(*plVar4 + 0x18) = puVar9 + 1;
        *puVar9 = uVar3;
        uVar3 = (&UNK_10de4e431)[(ulong)bVar1 & 0xf];
        puVar9 = *(undefined1 **)(*plVar4 + 0x18);
        *(undefined1 **)(*plVar4 + 0x18) = puVar9 + 1;
        *puVar9 = uVar3;
      }
    }
  }
  func_0x00010734aa78();
  *extraout_x9_00 = 0x22;
  return (long *)0x1;
}



/* Entry: 107777e98; end: 107777f13;  */

void FUN_107777e98(long *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int extraout_w8;
  undefined8 extraout_x8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int extraout_w10;
  undefined8 unaff_x19;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  long lVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar13;
  code *pcVar14;
  long lVar15;
  byte abStack_520 [944];
  long alStack_170 [16];
  long *plStack_f0;
  undefined8 ******ppppppuStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [24];
  byte bStack_b8;
  long alStack_a0 [13];
  undefined4 uStack_38;
  
  pbVar2 = auStack_d0;
  pppppppuVar13 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d224();
  uStack_38 = 0;
  plVar6 = (long *)*param_1;
  plVar7 = alStack_a0;
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
  pcVar14 = (code *)&UNK_107777f14;
  func_0x00010777d638();
  uVar3 = (int)param_1[0xd] == 1;
  if ((bool)uVar3) {
    plVar4 = plVar6 + 1;
    param_1 = param_1 + 1;
    pbVar2 = abStack_520 + 0x380;
    puStack_d8 = &UNK_107777f14;
    plStack_f0 = plVar7;
    ppppppuStack_e0 = pppppppuVar13;
    func_0x00010777d224();
    plVar7 = alStack_170;
    func_0x00010777dc20((char)*param_1);
    plVar6 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((abStack_520[0x398] & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar4;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      param_1 = plVar4;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    pcVar14 = (code *)&UNK_10777832c;
    func_0x00010777d638();
    pppppppuVar13 = &ppppppuStack_e0;
  }
  uVar3 = (int)param_1[0xd] == 2;
  if ((bool)uVar3) {
    plVar4 = plVar6 + 1;
    param_1 = param_1 + 1;
    *(long **)(pbVar2 + -0x20) = plVar7;
    *(undefined8 *)(pbVar2 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar2 + -0x10) = pppppppuVar13;
    *(code **)(pbVar2 + -8) = pcVar14;
    pppppppuVar13 = (undefined8 *******)(pbVar2 + -0x10);
    func_0x00010777d224();
    plVar7 = (long *)(pbVar2 + -0xa0);
    *(long *)(pbVar2 + -0x98) = *param_1;
    *(undefined4 *)(pbVar2 + -0x38) = 2;
    plVar6 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((pbVar2[-0xb8] & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar4;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      param_1 = plVar4;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    pcVar14 = (code *)&UNK_1077783d8;
    func_0x00010777d638();
    pbVar2 = pbVar2 + -0xd0;
  }
  uVar3 = (int)param_1[0xd] == 3;
  if ((bool)uVar3) {
    plVar4 = plVar6 + 1;
    *(undefined8 *)(pbVar2 + -0x30) = unaff_x22;
    *(undefined1 **)(pbVar2 + -0x28) = unaff_x21;
    *(long **)(pbVar2 + -0x20) = plVar7;
    *(undefined8 *)(pbVar2 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar2 + -0x10) = pppppppuVar13;
    *(code **)(pbVar2 + -8) = pcVar14;
    pppppppuVar13 = (undefined8 *******)(pbVar2 + -0x10);
    func_0x00010777d1f4(plVar4,param_1 + 1);
    unaff_x21 = pbVar2 + -0xb0;
    param_1 = (long *)(pbVar2 + -0xb0);
    func_0x0001072ddd58();
    plVar6 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d640();
    if ((pbVar2[-200] & 1) == 0) {
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
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    pcVar14 = FUN_107778484;
    func_0x00010777d638();
    pbVar2 = pbVar2 + -0xe0;
    plVar7 = plVar4;
  }
  uVar3 = (int)param_1[0xd] == 4;
  if ((bool)uVar3) {
    plVar4 = plVar6 + 1;
    param_1 = param_1 + 1;
    *(long **)(pbVar2 + -0x20) = plVar7;
    *(undefined8 *)(pbVar2 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar2 + -0x10) = pppppppuVar13;
    *(code **)(pbVar2 + -8) = pcVar14;
    pppppppuVar13 = (undefined8 *******)(pbVar2 + -0x10);
    func_0x00010777d224();
    plVar7 = (long *)(pbVar2 + -0xa0);
    lVar9 = *param_1;
    *(long *)(pbVar2 + -0x90) = param_1[1];
    *(long *)(pbVar2 + -0x98) = lVar9;
    *(undefined4 *)(pbVar2 + -0x38) = 4;
    plVar6 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((pbVar2[-0xb8] & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar4;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      param_1 = plVar4;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    pcVar14 = (code *)&LAB_107778530;
    func_0x00010777d638();
    pbVar2 = pbVar2 + -0xd0;
  }
  *(undefined8 *)(pbVar2 + -0x60) = unaff_x28;
  *(undefined8 *)(pbVar2 + -0x58) = unaff_x27;
  *(undefined8 *)(pbVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(pbVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(pbVar2 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(pbVar2 + -0x30) = unaff_x22;
  *(undefined1 **)(pbVar2 + -0x28) = unaff_x21;
  *(long **)(pbVar2 + -0x20) = plVar7;
  *(undefined8 *)(pbVar2 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar2 + -0x10) = pppppppuVar13;
  *(code **)(pbVar2 + -8) = pcVar14;
  plVar7 = plVar6;
  func_0x00010777d250();
  *(undefined8 *)(pbVar2 + -0x70) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar3) {
    lVar9 = param_1[2];
    lVar15 = param_1[1];
    *(long *)(pbVar2 + -0xd0) = param_1[2];
    *(long *)(pbVar2 + -0xd8) = lVar15;
    if (lVar9 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc30();
    func_0x00010777d7a0();
    func_0x00010777d640();
    if ((pbVar2[-0x100] & 1) == 0) goto code_r0x0001077787a0;
    func_0x00010777d818();
    func_0x00010777d550();
code_r0x000107778790:
    func_0x00010777d2ec();
    func_0x0001072dbd40(pbVar2 + -0xf8);
code_r0x0001077787a4:
    func_0x0001072dbe34(pbVar2 + -0x110);
  }
  else {
    uVar3 = extraout_w8 == 6;
    if ((bool)uVar3) {
      func_0x000107348eb0(pbVar2 + -0xd8,param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((pbVar2[-0x100] & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
code_r0x0001077787a0:
      func_0x00010777d724();
      goto code_r0x0001077787a4;
    }
    uVar3 = extraout_w8 == 7;
    if ((bool)uVar3) {
      func_0x000107348ecc(pbVar2 + -0xd8,param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((pbVar2[-0x100] & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
      goto code_r0x0001077787a0;
    }
    uVar3 = extraout_w8 == 8;
    if (!(bool)uVar3) {
      func_0x0001074fd134(pbVar2 + -0xd8,param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((pbVar2[-0x100] & 1) != 0) {
        func_0x00010777d818();
        func_0x00010777d550();
        goto code_r0x000107778790;
      }
      goto code_r0x0001077787a0;
    }
    *(undefined8 *)(pbVar2 + -0x108) = 0;
    *(undefined8 *)(pbVar2 + -0x100) = 0;
    *(undefined8 *)(pbVar2 + -0x110) = 0;
    lVar9 = *(long *)param_1[1];
    lVar15 = ((long *)param_1[1])[1];
    if (lVar15 - lVar9 != 0) {
      uVar5 = (lVar15 - lVar9) / 0x70;
      if (uVar5 >> 0x3c != 0) {
        func_0x000107778164();
        goto code_r0x00010777880c;
      }
      *(byte **)(pbVar2 + -0xc0) = pbVar2 + -0x100;
      FUN_107778178();
      *(ulong *)(pbVar2 + -0xe0) = uVar5;
      *(ulong *)(pbVar2 + -0xd8) = uVar5;
      *(ulong *)(pbVar2 + -0xd0) = uVar5;
      *(ulong *)(pbVar2 + -200) = uVar5 + (long)plVar7 * 0x10;
      func_0x00010777dd9c();
      func_0x00010777dd68();
      lVar9 = *(long *)param_1[1];
      lVar15 = ((long *)param_1[1])[1];
    }
    do {
      uVar3 = lVar9 == lVar15;
      if ((bool)uVar3) {
        func_0x000107778054(pbVar2 + -0xe0,pbVar2 + -0x110);
        func_0x00010777d58c();
        func_0x00010777d960();
        func_0x00010773b158(pbVar2 + -0xe0);
        goto code_r0x0001077787f0;
      }
      lVar8 = *plVar6;
      func_0x0001077754c8(pbVar2 + -0xf8,lVar9);
      bVar1 = pbVar2[-0xe8];
      if ((bVar1 & 1) != 0) {
        uVar5 = *(ulong *)(pbVar2 + -0x108);
        uVar10 = *(ulong *)(pbVar2 + -0x100);
        uVar3 = uVar5 == uVar10;
        if (uVar5 < uVar10) {
          func_0x0001072f64f4(uVar5,pbVar2 + -0xf8);
          lVar8 = uVar5 + 0x10;
        }
        else {
          lVar12 = uVar5 - *(long *)(pbVar2 + -0x110);
          uVar5 = (lVar12 >> 4) + 1;
          if (uVar5 >> 0x3c != 0) goto code_r0x000107778800;
          uVar10 = uVar10 - *(long *)(pbVar2 + -0x110);
          uVar11 = (long)uVar10 >> 3;
          if ((ulong)((long)uVar10 >> 3) <= uVar5) {
            uVar11 = uVar5;
          }
          uVar3 = uVar10 == 0x7ffffffffffffff0;
          if (0x7fffffffffffffef < uVar10) {
            uVar11 = 0xfffffffffffffff;
          }
          *(byte **)(pbVar2 + -0xc0) = pbVar2 + -0x100;
          if (uVar11 == 0) {
            uVar11 = 0;
            lVar8 = 0;
          }
          else {
            FUN_107778178();
          }
          lVar12 = uVar11 + lVar12;
          *(ulong *)(pbVar2 + -0xe0) = uVar11;
          *(long *)(pbVar2 + -0xd8) = lVar12;
          *(long *)(pbVar2 + -0xd0) = lVar12;
          *(ulong *)(pbVar2 + -200) = uVar11 + lVar8 * 0x10;
          func_0x0001072f64f4(lVar12,pbVar2 + -0xf8);
          *(long *)(pbVar2 + -0xd0) = lVar12 + 0x10;
          func_0x00010777dd9c();
          lVar8 = *(long *)(pbVar2 + -0x108);
          func_0x00010777dd68();
        }
        *(long *)(pbVar2 + -0x108) = lVar8;
      }
      func_0x0001072dbe34(pbVar2 + -0xf8);
      lVar9 = lVar9 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777db54();
code_r0x0001077787f0:
    func_0x000107778278(pbVar2 + -0x110);
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar2 + -0x70));
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
code_r0x000107778800:
  func_0x000107778164();
code_r0x00010777880c:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x107778810);
  (*pcVar14)();
}



/* Entry: 107778178; end: 10777821b;  */

undefined1  [16] FUN_107778178(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 >> 0x3c == 0) {
    lVar1 = param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104bd35f4();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x10;
      func_0x0001072dbd40();
    }
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 107778484; end: 1077784a7;  */

void FUN_107778484(long *param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int extraout_w8;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int extraout_w10;
  undefined8 unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar10;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  long lVar11;
  byte abStack_1d0 [256];
  undefined1 auStack_d0 [24];
  byte bStack_b8;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  undefined4 uStack_38;
  
  uVar3 = (int)param_1[0xd] == 4;
  if ((bool)uVar3) {
    plVar4 = param_2 + 1;
    param_1 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224();
    unaff_x20 = auStack_a0;
    lStack_90 = param_1[1];
    lStack_98 = *param_1;
    uStack_38 = 4;
    param_2 = (long *)*plVar4;
    func_0x00010777d68c();
    func_0x00010777d648();
    if ((bStack_b8 & 1) == 0) {
      func_0x00010777d724();
      param_1 = plVar4;
    }
    else {
      func_0x00010777d698();
      func_0x00010777d440();
      func_0x00010777d2ec();
      func_0x00010777d89c();
      param_1 = plVar4;
    }
    func_0x00010777d8a4();
    func_0x00010777d20c();
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6ec();
    func_0x00010777d8a4();
    unaff_x30 = &LAB_107778530;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)auStack_d0;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  plVar4 = param_2;
  func_0x00010777d250();
  *(undefined8 *)((long)register0x00000008 + -0x70) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar3) {
    lVar7 = param_1[2];
    lVar11 = param_1[1];
    *(long *)((long)register0x00000008 + -0xd0) = param_1[2];
    *(long *)((long)register0x00000008 + -0xd8) = lVar11;
    if (lVar7 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc30();
    func_0x00010777d7a0();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0x100) & 1) != 0) {
      func_0x00010777d818();
      func_0x00010777d550();
      goto code_r0x000107778790;
    }
code_r0x0001077787a0:
    func_0x00010777d724();
code_r0x0001077787a4:
    func_0x0001072dbe34((undefined1 *)((long)register0x00000008 + -0x110));
  }
  else {
    uVar3 = extraout_w8 == 6;
    if ((bool)uVar3) {
      func_0x000107348eb0((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) == 0) goto code_r0x0001077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
code_r0x000107778790:
      func_0x00010777d2ec();
      func_0x0001072dbd40((undefined1 *)((long)register0x00000008 + -0xf8));
      goto code_r0x0001077787a4;
    }
    uVar3 = extraout_w8 == 7;
    if ((bool)uVar3) {
      func_0x000107348ecc((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) == 0) goto code_r0x0001077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
      goto code_r0x000107778790;
    }
    uVar3 = extraout_w8 == 8;
    if (!(bool)uVar3) {
      func_0x0001074fd134((undefined1 *)((long)register0x00000008 + -0xd8),param_1 + 1);
      func_0x00010777d7a0();
      func_0x00010777d640();
      if ((*(byte *)((long)register0x00000008 + -0x100) & 1) == 0) goto code_r0x0001077787a0;
      func_0x00010777d818();
      func_0x00010777d550();
      goto code_r0x000107778790;
    }
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    lVar7 = *(long *)param_1[1];
    lVar11 = ((long *)param_1[1])[1];
    if (lVar11 - lVar7 != 0) {
      uVar5 = (lVar11 - lVar7) / 0x70;
      if (uVar5 >> 0x3c != 0) {
        func_0x000107778164();
        goto code_r0x00010777880c;
      }
      *(undefined1 **)((long)register0x00000008 + -0xc0) =
           (undefined1 *)((long)register0x00000008 + -0x100);
      FUN_107778178();
      *(ulong *)((long)register0x00000008 + -0xe0) = uVar5;
      *(ulong *)((long)register0x00000008 + -0xd8) = uVar5;
      *(ulong *)((long)register0x00000008 + -0xd0) = uVar5;
      *(ulong *)((long)register0x00000008 + -200) = uVar5 + (long)plVar4 * 0x10;
      func_0x00010777dd9c();
      func_0x00010777dd68();
      lVar7 = *(long *)param_1[1];
      lVar11 = ((long *)param_1[1])[1];
    }
    do {
      uVar3 = lVar7 == lVar11;
      if ((bool)uVar3) {
        func_0x000107778054((undefined1 *)((long)register0x00000008 + -0xe0),
                            (undefined1 *)((long)register0x00000008 + -0x110));
        func_0x00010777d58c();
        func_0x00010777d960();
        func_0x00010773b158((undefined1 *)((long)register0x00000008 + -0xe0));
        goto code_r0x0001077787f0;
      }
      lVar6 = *param_2;
      func_0x0001077754c8((undefined1 *)((long)register0x00000008 + -0xf8),lVar7);
      bVar1 = *(byte *)((long)register0x00000008 + -0xe8);
      if ((bVar1 & 1) != 0) {
        uVar5 = *(ulong *)((long)register0x00000008 + -0x108);
        uVar8 = *(ulong *)((long)register0x00000008 + -0x100);
        uVar3 = uVar5 == uVar8;
        if (uVar5 < uVar8) {
          func_0x0001072f64f4(uVar5,(undefined1 *)((long)register0x00000008 + -0xf8));
          lVar6 = uVar5 + 0x10;
        }
        else {
          lVar10 = uVar5 - *(long *)((long)register0x00000008 + -0x110);
          uVar5 = (lVar10 >> 4) + 1;
          if (uVar5 >> 0x3c != 0) goto code_r0x000107778800;
          uVar8 = uVar8 - *(long *)((long)register0x00000008 + -0x110);
          uVar9 = (long)uVar8 >> 3;
          if ((ulong)((long)uVar8 >> 3) <= uVar5) {
            uVar9 = uVar5;
          }
          uVar3 = uVar8 == 0x7ffffffffffffff0;
          if (0x7fffffffffffffef < uVar8) {
            uVar9 = 0xfffffffffffffff;
          }
          *(undefined1 **)((long)register0x00000008 + -0xc0) =
               (undefined1 *)((long)register0x00000008 + -0x100);
          if (uVar9 == 0) {
            uVar9 = 0;
            lVar6 = 0;
          }
          else {
            FUN_107778178();
          }
          lVar10 = uVar9 + lVar10;
          *(ulong *)((long)register0x00000008 + -0xe0) = uVar9;
          *(long *)((long)register0x00000008 + -0xd8) = lVar10;
          *(long *)((long)register0x00000008 + -0xd0) = lVar10;
          *(ulong *)((long)register0x00000008 + -200) = uVar9 + lVar6 * 0x10;
          func_0x0001072f64f4(lVar10,(undefined1 *)((long)register0x00000008 + -0xf8));
          *(long *)((long)register0x00000008 + -0xd0) = lVar10 + 0x10;
          func_0x00010777dd9c();
          lVar6 = *(long *)((long)register0x00000008 + -0x108);
          func_0x00010777dd68();
        }
        *(long *)((long)register0x00000008 + -0x108) = lVar6;
      }
      func_0x0001072dbe34((undefined1 *)((long)register0x00000008 + -0xf8));
      lVar7 = lVar7 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777db54();
code_r0x0001077787f0:
    func_0x000107778278((undefined1 *)((long)register0x00000008 + -0x110));
  }
  func_0x00010777d23c(*(undefined8 *)((long)register0x00000008 + -0x70));
  if ((bool)uVar3) {
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



/* Entry: 107778c3c; end: 107778d13;  */

void FUN_107778c3c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 auStack_40 [4];
  
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 4:
    return;
  case 5:
    return;
  case 6:
    return;
  case 8:
    puVar4 = auStack_40;
    uVar3 = **(ulong **)(param_1 + 8);
    uVar1 = (*(ulong **)(param_1 + 8))[1];
    if (uVar1 - uVar3 == 0x150) {
      while ((uVar3 != uVar1 && (uVar2 = uVar3, func_0x000107776fc4(), uVar2 >> 0x20 != 0))) {
        *puVar4 = (int)uVar2;
        uVar3 = uVar3 + 0x70;
        puVar4 = puVar4 + 1;
      }
    }
  }
  return;
}



/* Entry: 107778fc4; end: 107779037;  */

void FUN_107778fc4(long *param_1,long *param_2)

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
  byte abStack_14d0 [4956];
  undefined4 uStack_174;
  long alStack_170 [16];
  undefined8 ******ppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [12];
  undefined4 uStack_b4;
  long alStack_b0 [16];
  
  pbVar3 = auStack_c0;
  pppppppuVar27 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  plVar24 = alStack_b0;
  func_0x00010777dae0();
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
  puVar28 = &UNK_107779038;
  plVar16 = param_1;
  func_0x00010777d638();
  uVar10 = (int)plVar16[0xd] == 2;
  if ((bool)uVar10) {
    plVar17 = param_2 + 1;
    param_2 = plVar16 + 1;
    pbVar3 = abStack_14d0 + 0x1350;
    puStack_c8 = &UNK_107779038;
    ppppppuStack_d0 = pppppppuVar27;
    func_0x00010777d1f4();
    plVar24 = alStack_170;
    func_0x00010777dacc();
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
    puVar28 = &UNK_1077790d0;
    plVar16 = plVar17;
    func_0x00010777d638();
    param_1 = plVar17;
    pppppppuVar27 = &ppppppuStack_d0;
  }
  uVar10 = (int)plVar16[0xd] == 3;
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
    func_0x00010777dd10();
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
    puVar28 = &UNK_107779164;
    plVar16 = plVar17;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0xc0;
    param_1 = plVar17;
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
  pcVar29 = FUN_1077793bc;
  func_0x00010777d638();
  if ((int)plVar17[0xd] == 0) {
    plVar12 = param_2 + 1;
    puVar9 = pbVar3 + -0x1b0;
    *(long **)(pbVar3 + -0xe0) = plVar16;
    *(long **)(pbVar3 + -0xd8) = param_1;
    *(undefined1 **)(pbVar3 + -0xd0) = puVar25;
    *(code **)(pbVar3 + -200) = FUN_1077793bc;
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
    pcVar29 = (code *)&LAB_107779450;
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
    pcVar29 = (code *)&UNK_1077794e4;
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
    pcVar29 = FUN_1077795e4;
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
    pcVar29 = (code *)&LAB_107779678;
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
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
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
      if ((puVar9[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar10 = extraout_w8_06 == 7;
    if ((bool)uVar10) {
      unaff_x22 = puVar9 + -0x110;
      func_0x00010777d6bc();
      puVar18 = (undefined1 *)plVar16[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar9[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar10 = extraout_w8_06 == 8;
    if (!(bool)uVar10) {
      unaff_x22 = puVar9 + -0x110;
      func_0x00010777d6d4();
      puVar18 = (undefined1 *)plVar16[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((puVar9[-0x60] & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
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
        goto code_r0x000107779838;
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
code_r0x000107779838:
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
      func_0x000107776804(puVar4 + -0xa0,plVar24,*puVar13);
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
    pcVar29 = FUN_107779f6c;
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
    pcVar29 = FUN_10777a170;
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
    pcVar29 = (code *)&LAB_10777a208;
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
    pcVar29 = (code *)&UNK_10777a2a0;
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



/* Entry: 1077793bc; end: 1077793db;  */

void FUN_1077793bc(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 in_ZR;
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
  byte *unaff_x20;
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
  byte abStack_1110 [4336];
  
  if (*(int *)(param_1 + 0xd) == 0) {
    puVar10 = param_2 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224(puVar10,param_1 + 1);
    abStack_1110[0x10a0] = 0;
    abStack_1110[0x10a1] = 0;
    abStack_1110[0x10a2] = 0;
    abStack_1110[0x10a3] = 0;
    param_2 = (undefined8 *)*puVar10;
    unaff_x20 = abStack_1110 + 0x1038;
    func_0x00010777d824();
    func_0x00010777d648();
    if ((abStack_1110[0x10e0] & 1) == 0) {
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
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    unaff_x30 = (code *)&LAB_107779450;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_1110 + 0x1020);
  }
  uVar7 = *(int *)(param_1 + 0xd) == 1;
  if ((bool)uVar7) {
    puVar10 = param_2 + 1;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224(puVar10,param_1 + 1);
    func_0x00010777d8d4();
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
    unaff_x30 = (code *)&UNK_1077794e4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  uVar7 = *(int *)(param_1 + 0xd) == 2;
  if ((bool)uVar7) {
    puVar10 = param_2 + 1;
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
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
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
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
    unaff_x30 = FUN_1077795e4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  }
  uVar7 = *(int *)(param_1 + 0xd) == 4;
  if ((bool)uVar7) {
    *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
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
    unaff_x30 = (code *)&LAB_107779678;
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
  *(byte **)((long)register0x00000008 + -0x20) = unaff_x20;
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
    puVar12 = *(undefined1 **)(unaff_x20 + 8);
    func_0x00010777d7e4();
    func_0x00010777d640();
    if ((*(byte *)((long)register0x00000008 + -0x60) & 1) != 0) {
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
    puVar10 = (undefined8 *)((long)register0x00000008 + -0x98);
    func_0x00010724b3d8();
  }
  else {
    uVar7 = extraout_w8_05 == 6;
    if ((bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6c8();
      puVar12 = *(undefined1 **)(unaff_x20 + 8);
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar7 = extraout_w8_05 == 7;
    if ((bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6bc();
      puVar12 = *(undefined1 **)(unaff_x20 + 8);
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar7 = extraout_w8_05 == 8;
    if (!(bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6d4();
      puVar12 = *(undefined1 **)(unaff_x20 + 8);
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
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
        goto code_r0x000107779838;
      }
      puVar12 = *(undefined1 **)unaff_x20;
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
code_r0x000107779838:
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
      func_0x000107776804(puVar2 + -0xa0,unaff_x21,*puVar10);
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
    pcVar21 = FUN_107779f6c;
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
    pcVar21 = FUN_10777a170;
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
    pcVar21 = (code *)&LAB_10777a208;
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
    pcVar21 = (code *)&UNK_10777a2a0;
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



/* Entry: 1077795e4; end: 107779607;  */

void FUN_1077795e4(long param_1,long param_2)

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
  undefined *unaff_x30;
  undefined *puVar20;
  code *pcVar21;
  undefined8 uVar22;
  byte abStack_dd0 [3488];
  byte bStack_30;
  
  uVar7 = *(int *)(param_1 + 0x68) == 4;
  if ((bool)uVar7) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d224(param_2 + 8,param_1 + 8);
    func_0x00010777d8ec();
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
    if ((bool)uVar7) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d854();
    func_0x00010777d9c0();
    unaff_x30 = &LAB_107779678;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(abStack_dd0 + 0xce0);
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
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
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
      goto code_r0x0001077797d4;
    }
code_r0x0001077797e0:
    func_0x00010777d724();
code_r0x0001077797e4:
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
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
code_r0x0001077797d4:
      func_0x00010777d304();
      func_0x00010777dbd0();
      goto code_r0x0001077797e4;
    }
    uVar7 = extraout_w8_05 == 7;
    if ((bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6bc();
      puVar12 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
    }
    uVar7 = extraout_w8_05 == 8;
    if (!(bool)uVar7) {
      unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x110);
      func_0x00010777d6d4();
      puVar12 = (undefined1 *)unaff_x20[1];
      func_0x00010777d7e4();
      func_0x00010777d660();
      if ((*(byte *)((long)register0x00000008 + -0x60) & 1) == 0) goto code_r0x0001077797e0;
      func_0x00010777d848();
      func_0x00010777d454();
      goto code_r0x0001077797d4;
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
        goto code_r0x000107779838;
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
code_r0x000107779838:
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
      func_0x000107776804(puVar2 + -0xa0,unaff_x21,*puVar10);
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
    pcVar21 = FUN_107779f6c;
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
    pcVar21 = FUN_10777a170;
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
    pcVar21 = (code *)&LAB_10777a208;
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
    pcVar21 = (code *)&UNK_10777a2a0;
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



/* Entry: 107779a40; end: 107779ad3;  */

void FUN_107779a40(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long *plVar12;
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
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  byte *unaff_x21;
  undefined1 *puVar16;
  undefined1 *unaff_x22;
  undefined1 *puVar17;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar18;
  undefined *puVar19;
  code *pcVar20;
  undefined8 uVar21;
  byte abStack_960 [2048];
  undefined8 ******ppppppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_c8;
  byte bStack_40;
  
  pbVar3 = (byte *)&uStack_130;
  puVar7 = &uStack_130;
  pppppppuVar18 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  uStack_128 = *param_2;
  uStack_c8 = 2;
  lVar11 = *(long *)param_1;
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
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d6e0();
  func_0x00010777d8ac();
  puVar19 = &UNK_107779ad4;
  func_0x00010777d638();
  uVar5 = (int)*(long *)((long)param_1 + 0x68) == 3;
  if ((bool)uVar5) {
    puVar7 = (undefined8 *)(lVar11 + 8);
    plVar12 = (long *)((long)param_1 + 8);
    pbVar3 = abStack_960 + 0x700;
    param_1 = abStack_960 + 0x700;
    unaff_x21 = abStack_960 + 0x700;
    puStack_138 = &UNK_107779ad4;
    ppppppuStack_140 = pppppppuVar18;
    func_0x00010777d1f4(puVar7,plVar12);
    func_0x0001072ddd58();
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d640();
    if ((abStack_960[0x7f0] & 1) == 0) {
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
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar19 = &UNK_107779b94;
    func_0x00010777d638();
    pppppppuVar18 = &ppppppuStack_140;
  }
  uVar5 = (int)*(long *)((long)param_1 + 0x68) == 4;
  if ((bool)uVar5) {
    plVar12 = (long *)((long)param_1 + 8);
    puVar2 = (undefined8 *)(pbVar3 + -0x130);
    *(undefined8 *)(pbVar3 + -0x30) = unaff_x28;
    *(undefined8 *)(pbVar3 + -0x28) = unaff_x27;
    *(undefined8 **)(pbVar3 + -0x20) = puVar7;
    *(undefined8 **)(pbVar3 + -0x18) = unaff_x19;
    *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar18;
    *(undefined **)(pbVar3 + -8) = puVar19;
    pppppppuVar18 = (undefined8 *******)(pbVar3 + -0x10);
    func_0x00010777d1f4();
    lVar11 = *plVar12;
    *(long *)(pbVar3 + -0x120) = plVar12[1];
    *(long *)(pbVar3 + -0x128) = lVar11;
    *(undefined4 *)(pbVar3 + -200) = 4;
    func_0x00010777d4cc();
    func_0x00010777d6b0();
    func_0x00010777d928();
    func_0x00010777d648();
    if ((pbVar3[-0x40] & 1) == 0) {
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
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010777d6e0();
    func_0x00010777d8ac();
    puVar19 = &UNK_107779c4c;
    func_0x00010777d638();
    pbVar3 = pbVar3 + -0x130;
    puVar7 = puVar2;
  }
  puVar4 = pbVar3 + -0x150;
  puVar17 = pbVar3 + -0x150;
  puVar10 = pbVar3 + -0x150;
  *(undefined8 *)(pbVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(pbVar3 + -0x48) = unaff_x25;
  *(undefined1 **)(pbVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(pbVar3 + -0x38) = unaff_x23;
  *(undefined1 **)(pbVar3 + -0x30) = unaff_x22;
  *(byte **)(pbVar3 + -0x28) = unaff_x21;
  *(undefined8 **)(pbVar3 + -0x20) = puVar7;
  *(undefined8 **)(pbVar3 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar3 + -0x10) = pppppppuVar18;
  *(undefined **)(pbVar3 + -8) = puVar19;
  puVar16 = pbVar3 + -0x10;
  func_0x00010777db88();
  func_0x00010777d250();
  *(undefined8 *)(pbVar3 + -0x58) = extraout_x8;
  func_0x00010777da78();
  if ((bool)uVar5) {
    lVar11 = *(long *)(unaff_x21 + 0x10);
    uVar21 = *(undefined8 *)(unaff_x21 + 8);
    *(undefined8 *)(pbVar3 + -0x140) = *(undefined8 *)(unaff_x21 + 0x10);
    *(undefined8 *)(pbVar3 + -0x148) = uVar21;
    if (lVar11 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    *(undefined4 *)(pbVar3 + -0xe8) = 5;
    puVar13 = (undefined1 *)puVar7[1];
    func_0x00010777d4cc();
    func_0x00010777d7f0();
    func_0x00010777d928();
    func_0x00010777d640();
    unaff_x21 = pbVar3 + -0x150;
    puVar10 = unaff_x22;
    if ((pbVar3[-0x60] & 1) != 0) {
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      unaff_x21 = pbVar3 + -0x150;
      puVar17 = unaff_x22;
      goto code_r0x000107779dec;
    }
code_r0x000107779df8:
    func_0x00010777d724();
code_r0x000107779dfc:
    puVar7 = (undefined8 *)(pbVar3 + -0xa0);
    func_0x000107267ed0();
    unaff_x22 = puVar10;
  }
  else {
    uVar5 = extraout_w8_05 == 6;
    if ((bool)uVar5) {
      func_0x00010777d6c8();
      puVar13 = (undefined1 *)puVar7[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar10 = pbVar3 + -0x150;
      if ((pbVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar17 = pbVar3 + -0x150;
code_r0x000107779dec:
      func_0x00010777d2d4();
      func_0x00010777d7d0();
      puVar10 = puVar17;
      goto code_r0x000107779dfc;
    }
    uVar5 = extraout_w8_05 == 7;
    if ((bool)uVar5) {
      func_0x00010777d6bc();
      puVar13 = (undefined1 *)puVar7[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      puVar10 = pbVar3 + -0x150;
      if ((pbVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      puVar17 = pbVar3 + -0x150;
      goto code_r0x000107779dec;
    }
    uVar5 = extraout_w8_05 == 8;
    if (!(bool)uVar5) {
      func_0x00010777d6d4();
      puVar13 = (undefined1 *)puVar7[1];
      func_0x00010777d4cc();
      func_0x00010777d7f0();
      func_0x00010777d928();
      func_0x00010777d660();
      if ((pbVar3[-0x60] & 1) == 0) goto code_r0x000107779df8;
      func_0x00010777d7bc();
      func_0x00010777d2ac();
      goto code_r0x000107779dec;
    }
    *(undefined8 *)(pbVar3 + -0xd8) = 0;
    *(undefined8 *)(pbVar3 + -0xd0) = 0;
    *(undefined8 *)(pbVar3 + -0xe0) = 0;
    func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
    func_0x0001072ac134(pbVar3 + -0xe0);
    func_0x00010777de3c();
    do {
      uVar5 = unaff_x21 == unaff_x24;
      if ((bool)uVar5) {
        puVar13 = pbVar3 + -0xe0;
        func_0x000107327958(pbVar3 + -0x150);
        func_0x00010777d338();
        func_0x000104c33108();
        goto code_r0x000107779e40;
      }
      func_0x000107776804(pbVar3 + -0xa0,unaff_x21,*puVar7);
      puVar13 = pbVar3 + -0xa0;
      func_0x00010729d394(pbVar3 + -0x150);
      func_0x000104c3323c(pbVar3 + -0xa0);
      bVar1 = pbVar3[-0x110];
      if ((bVar1 & 1) == 0) {
        func_0x00010777dc80();
      }
      else {
        puVar13 = pbVar3 + -0x150;
        func_0x0001072d7f34(pbVar3 + -0xe0);
      }
      func_0x000107267ed0(pbVar3 + -0x150);
      unaff_x21 = unaff_x21 + 0x70;
    } while ((bVar1 & 1) != 0);
    func_0x00010777d890();
code_r0x000107779e40:
    puVar7 = (undefined8 *)(pbVar3 + -0xe0);
    func_0x000107269124();
  }
  func_0x00010777d23c(*(undefined8 *)(pbVar3 + -0x58));
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010777d7d0();
  puVar8 = (undefined8 *)(pbVar3 + -0xa0);
  func_0x000107267ed0();
  pcVar20 = (code *)&UNK_107779ed8;
  func_0x00010777d9d0();
  uVar6 = (uint)puVar7;
  uVar15 = SUB81(puVar7,0);
  if (*(int *)(puVar8 + 0xd) == 0) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    puVar4 = pbVar3 + -0x210;
    *(undefined1 **)(pbVar3 + -0x180) = unaff_x22;
    *(byte **)(pbVar3 + -0x178) = unaff_x21;
    *(undefined8 **)(pbVar3 + -0x170) = puVar7;
    *(undefined8 **)(pbVar3 + -0x168) = unaff_x19;
    *(undefined1 **)(pbVar3 + -0x160) = puVar16;
    *(undefined **)(pbVar3 + -0x158) = &UNK_107779ed8;
    puVar16 = pbVar3 + -0x160;
    func_0x00010777d1f4(puVar9,puVar8 + 1);
    *(undefined4 *)(pbVar3 + -0x198) = 0;
    puVar13 = (undefined1 *)*puVar9;
    unaff_x21 = pbVar3 + -0x200;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar6 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar14 = extraout_w8;
    }
    else {
      pbVar3[-0x201] = uVar15;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar14 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar14;
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    pcVar20 = FUN_107779f6c;
    puVar8 = puVar9;
    func_0x00010777d638();
    unaff_x19 = puVar9;
  }
  uVar5 = *(int *)(puVar8 + 0xd) == 1;
  if ((bool)uVar5) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
    *(byte **)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar4 + -0x20) = puVar7;
    *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar16;
    *(code **)(puVar4 + -8) = pcVar20;
    puVar16 = puVar4 + -0x10;
    func_0x00010777d1f4(puVar9,puVar8 + 1);
    unaff_x21 = puVar4 + -0xb0;
    func_0x00010777dae0();
    puVar13 = (undefined1 *)*puVar9;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar6 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar14 = extraout_w8_00;
    }
    else {
      puVar4[-0xb1] = uVar15;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar14 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar14;
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    pcVar20 = FUN_10777a170;
    puVar8 = puVar9;
    func_0x00010777d638();
    puVar4 = puVar4 + -0xc0;
    unaff_x19 = puVar9;
  }
  uVar5 = *(int *)(puVar8 + 0xd) == 2;
  if ((bool)uVar5) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
    *(byte **)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar4 + -0x20) = puVar7;
    *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar16;
    *(code **)(puVar4 + -8) = pcVar20;
    puVar16 = puVar4 + -0x10;
    func_0x00010777d1f4(puVar9,puVar8 + 1);
    unaff_x21 = puVar4 + -0xb0;
    func_0x00010777dacc();
    puVar13 = (undefined1 *)*puVar9;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if ((uVar6 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_01;
    }
    else {
      puVar4[-0xb1] = uVar15;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    pcVar20 = (code *)&LAB_10777a208;
    puVar8 = puVar9;
    func_0x00010777d638();
    puVar4 = puVar4 + -0xc0;
    unaff_x19 = puVar9;
  }
  uVar5 = *(int *)(puVar8 + 0xd) == 3;
  if ((bool)uVar5) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
    *(byte **)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar4 + -0x20) = puVar7;
    *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar16;
    *(code **)(puVar4 + -8) = pcVar20;
    puVar16 = puVar4 + -0x10;
    puVar7 = puVar9;
    func_0x00010777d1f4(puVar9,puVar8 + 1);
    func_0x00010777dd10();
    puVar13 = (undefined1 *)*puVar9;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar9 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_02;
    }
    else {
      puVar4[-0xb1] = (char)puVar9;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    pcVar20 = (code *)&UNK_10777a2a0;
    puVar8 = puVar7;
    func_0x00010777d638();
    puVar4 = puVar4 + -0xc0;
    unaff_x19 = puVar7;
    puVar7 = puVar9;
  }
  uVar5 = *(int *)(puVar8 + 0xd) == 4;
  if ((bool)uVar5) {
    puVar9 = (undefined8 *)(puVar13 + 8);
    *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
    *(byte **)(puVar4 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar4 + -0x20) = puVar7;
    *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar16;
    *(code **)(puVar4 + -8) = pcVar20;
    puVar16 = puVar4 + -0x10;
    func_0x00010777d1f4(puVar9,puVar8 + 1);
    unaff_x21 = puVar4 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)puVar7 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar15 = extraout_w8_03;
    }
    else {
      puVar4[-0xb1] = (char)puVar7;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar15 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar15;
    func_0x00010777d1dc();
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    pcVar20 = (code *)&UNK_10777a338;
    puVar8 = puVar9;
    func_0x00010777d638();
    puVar4 = puVar4 + -0xc0;
    unaff_x19 = puVar9;
  }
  uVar6 = (uint)puVar8;
  *(undefined1 **)(puVar4 + -0x30) = unaff_x22;
  *(byte **)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 **)(puVar4 + -0x20) = puVar7;
  *(undefined8 **)(puVar4 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar4 + -0x10) = puVar16;
  *(code **)(puVar4 + -8) = pcVar20;
  func_0x00010777db88();
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar5) {
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
      puVar4[-0xc0] = (char)puVar7;
      func_0x00010777d400();
      func_0x000107779f90();
      goto code_r0x00010777a490;
    }
code_r0x00010777a468:
    func_0x00010777d748();
    uVar15 = extraout_w8_04;
  }
  else {
    uVar5 = extraout_w8_06 == 6;
    if ((bool)uVar5) {
      unaff_x22 = puVar4 + -0xb0;
      func_0x00010777d6c8();
      func_0x00010777d948();
      func_0x00010777d660();
      if ((uVar6 >> 8 & 1) == 0) goto code_r0x00010777a468;
      puVar4[-0xc0] = (char)uVar6;
      func_0x00010777d400();
      func_0x000107779f90();
    }
    else {
      uVar5 = extraout_w8_06 == 7;
      if ((bool)uVar5) {
        unaff_x22 = puVar4 + -0xb0;
        func_0x00010777d6bc();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar6 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar4[-0xc0] = (char)uVar6;
        func_0x00010777d400();
        func_0x000107779f90();
      }
      else {
        uVar5 = extraout_w8_06 == 8;
        if ((bool)uVar5) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc(puVar4 + -0xb0);
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar16 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8);
              uVar5 = puVar16 == unaff_x22, !(bool)uVar5; puVar16 = puVar16 + 0x70) {
            puVar10 = puVar16;
            func_0x000107775a54(puVar16,*puVar7);
            *(short *)(puVar4 + -0xc0) = (short)puVar10;
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
          func_0x0001074048e8(puVar4 + -0xb0);
          goto code_r0x00010777a4a0;
        }
        unaff_x22 = puVar4 + -0xb0;
        func_0x00010777d6d4();
        func_0x00010777d948();
        func_0x00010777d660();
        if ((uVar6 >> 8 & 1) == 0) goto code_r0x00010777a468;
        puVar4[-0xc0] = (char)uVar6;
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
  if ((bool)uVar5) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010726af18(unaff_x22 + 8);
  func_0x00010777d638();
  *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -200) = &UNK_10777a500;
  func_0x00010777a518();
  return;
}



/* Entry: 107779f6c; end: 107779f8f;  */

void FUN_107779f6c(long *param_1,long param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 extraout_w8;
  undefined1 uVar6;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 extraout_w8_03;
  int extraout_w8_04;
  long extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar7;
  undefined1 *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_3c0 [784];
  undefined1 auStack_b0 [128];
  
  uVar1 = (int)param_1[0xd] == 1;
  if ((bool)uVar1) {
    plVar3 = (long *)(param_2 + 8);
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4(plVar3,param_1 + 1);
    unaff_x21 = auStack_b0;
    func_0x00010777dae0();
    param_2 = *plVar3;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar6 = extraout_w8;
    }
    else {
      auStack_3c0[0x30f] = (char)unaff_x20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar6 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar6;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = FUN_10777a170;
    param_1 = plVar3;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(auStack_3c0 + 0x300);
    unaff_x19 = plVar3;
  }
  uVar1 = (int)param_1[0xd] == 2;
  if ((bool)uVar1) {
    plVar3 = (long *)(param_2 + 8);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(plVar3,param_1 + 1);
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x00010777dacc();
    param_2 = *plVar3;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar6 = extraout_w8_00;
    }
    else {
      *(char *)((long)register0x00000008 + -0xb1) = (char)unaff_x20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar6 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar6;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&LAB_10777a208;
    param_1 = plVar3;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar3;
  }
  uVar1 = (int)param_1[0xd] == 3;
  if ((bool)uVar1) {
    plVar3 = (long *)(param_2 + 8);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar4 = plVar3;
    func_0x00010777d1f4(plVar3,param_1 + 1);
    func_0x00010777dd10();
    param_2 = *plVar3;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar3 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar6 = extraout_w8_01;
    }
    else {
      *(char *)((long)register0x00000008 + -0xb1) = (char)plVar3;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar6 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar6;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&UNK_10777a2a0;
    param_1 = plVar4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar4;
    unaff_x20 = plVar3;
  }
  uVar1 = (int)param_1[0xd] == 4;
  if ((bool)uVar1) {
    plVar3 = (long *)(param_2 + 8);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d1f4(plVar3,param_1 + 1);
    unaff_x21 = (undefined1 *)((long)register0x00000008 + -0xb0);
    func_0x00010777da1c();
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar6 = extraout_w8_02;
    }
    else {
      *(char *)((long)register0x00000008 + -0xb1) = (char)unaff_x20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar6 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar6;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = (code *)&UNK_10777a338;
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
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
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
    uVar6 = extraout_w8_03;
  }
  else {
    uVar1 = extraout_w8_04 == 6;
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
      uVar1 = extraout_w8_04 == 7;
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
        uVar1 = extraout_w8_04 == 8;
        if ((bool)uVar1) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc((undefined1 *)((long)register0x00000008 + -0xb0));
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar7 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8); uVar1 = puVar7 == unaff_x22,
              !(bool)uVar1; puVar7 = puVar7 + 0x70) {
            puVar5 = puVar7;
            func_0x000107775a54(puVar7,*unaff_x20);
            *(short *)((long)register0x00000008 + -0xc0) = (short)puVar5;
            if (((uint)puVar5 >> 8 & 1) == 0) {
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
    uVar6 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar6;
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



/* Entry: 10777a170; end: 10777a193;  */

void FUN_10777a170(long *param_1,long param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 extraout_w8;
  undefined1 uVar6;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  int extraout_w8_03;
  long extraout_x8;
  int extraout_w10;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar7;
  undefined1 *unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_300 [592];
  undefined1 auStack_b0 [128];
  
  uVar1 = (int)param_1[0xd] == 2;
  if ((bool)uVar1) {
    plVar3 = (long *)(param_2 + 8);
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x00010777d1f4(plVar3,param_1 + 1);
    unaff_x21 = auStack_b0;
    func_0x00010777dacc();
    param_2 = *plVar3;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)unaff_x20 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar6 = extraout_w8;
    }
    else {
      auStack_300[0x24f] = SUB81(unaff_x20,0);
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar6 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar6;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = &LAB_10777a208;
    param_1 = plVar3;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(auStack_300 + 0x240);
    unaff_x19 = plVar3;
  }
  uVar1 = (int)param_1[0xd] == 3;
  if ((bool)uVar1) {
    plVar3 = (long *)(param_2 + 8);
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined1 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    plVar4 = plVar3;
    func_0x00010777d1f4(plVar3,param_1 + 1);
    func_0x00010777dd10();
    param_2 = *plVar3;
    func_0x00010777d948();
    func_0x00010777d5ec();
    if (((uint)plVar3 >> 8 & 1) == 0) {
      func_0x00010777d748();
      uVar6 = extraout_w8_00;
    }
    else {
      *(char *)((long)register0x00000008 + -0xb1) = (char)plVar3;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar6 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar6;
    func_0x00010777d1dc();
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    unaff_x30 = &UNK_10777a2a0;
    param_1 = plVar4;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = plVar4;
    unaff_x20 = plVar3;
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
      uVar6 = extraout_w8_01;
    }
    else {
      *(char *)((long)register0x00000008 + -0xb1) = (char)unaff_x20;
      func_0x00010777d530();
      func_0x00010777d2c0();
      func_0x0001073bcebc();
      uVar6 = 1;
    }
    *(undefined1 *)(unaff_x19 + 2) = uVar6;
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
    uVar6 = extraout_w8_02;
  }
  else {
    uVar1 = extraout_w8_03 == 6;
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
      uVar1 = extraout_w8_03 == 7;
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
        uVar1 = extraout_w8_03 == 8;
        if ((bool)uVar1) {
          func_0x00010777dce0();
          func_0x00010777d398(*(undefined8 *)(unaff_x21 + 8));
          func_0x0001075356bc((undefined1 *)((long)register0x00000008 + -0xb0));
          unaff_x22 = (undefined1 *)(*(undefined8 **)(unaff_x21 + 8))[1];
          for (puVar7 = (undefined1 *)**(undefined8 **)(unaff_x21 + 8); uVar1 = puVar7 == unaff_x22,
              !(bool)uVar1; puVar7 = puVar7 + 0x70) {
            puVar5 = puVar7;
            func_0x000107775a54(puVar7,*unaff_x20);
            *(short *)((long)register0x00000008 + -0xc0) = (short)puVar5;
            if (((uint)puVar5 >> 8 & 1) == 0) {
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
    uVar6 = 1;
  }
  *(undefined1 *)(unaff_x19 + 2) = uVar6;
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



/* Entry: 10777a578; end: 10777a5db;  */

undefined1  [16] FUN_10777a578(undefined8 param_1,undefined1 *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  int extraout_w9;
  ulong uVar4;
  ulong unaff_x19;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  func_0x00010777d298();
  func_0x00010777dc40(*param_2);
  func_0x00010777d940();
  func_0x00010777d380();
  uVar4 = unaff_x19 & 0x1ffffff00;
  uVar3 = unaff_x19;
  if (unaff_x19 < 0x100000001) {
    uVar3 = 0x100000000;
  }
  uVar2 = unaff_x19 >> 0x20;
  bVar1 = uVar2 == 0;
  if (bVar1) {
    uVar4 = 0;
  }
  func_0x00010777d490(uVar3,uVar4);
  if (bVar1) {
    auVar6._0_8_ = uVar4 & 0xffffffffffffff00 | extraout_x8 & 0xff;
    auVar6._8_8_ = uVar2;
    return auVar6;
  }
  ___stack_chk_fail();
  func_0x00010777d380();
  func_0x00010777d638();
  func_0x00010777de24();
  if (extraout_w9 == 2) {
    uVar3 = uVar4 + 8;
    uVar4 = extraout_x8_00;
    func_0x00010777a614(extraout_x8_00,uVar3);
  }
  else {
    uVar3 = extraout_x8_00;
    func_0x00010777a674();
  }
  auVar5._8_8_ = uVar3 & 0xff;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 10777a930; end: 10777aa93;  */

undefined1  [16] FUN_10777a930(long *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 *puVar3;
  undefined1 *puVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
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
  undefined1 uVar14;
  undefined1 *extraout_x8;
  long lVar15;
  undefined1 *extraout_x8_00;
  undefined4 *extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 extraout_x11;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  char acStack_a7c [2476];
  long *plStack_d0;
  long *plStack_c8;
  undefined8 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [104];
  undefined4 uStack_40;
  char *pcVar4;
  
  pcVar4 = auStack_b0;
  ppppuVar18 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x00010777d31c(param_1);
  switch((int)param_1[0xd]) {
  case 3:
    func_0x00010777dd90();
    plVar11 = (long *)*param_2;
    func_0x00010777d938();
    break;
  case 4:
    plVar11 = (long *)*param_2;
    func_0x00010777ddd8();
    uStack_40 = 4;
    func_0x00010777d938();
    break;
  case 5:
    func_0x00010777ddd8();
    if (extraout_x9 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    uStack_40 = 5;
    plVar11 = (long *)*param_2;
    func_0x00010777d938();
    break;
  case 6:
    func_0x00010777dde4();
    func_0x000107348eb0();
    plVar11 = (long *)*param_2;
    func_0x00010777d938();
    break;
  case 7:
    func_0x00010777dde4();
    func_0x000107348ecc();
    plVar11 = (long *)*param_2;
    func_0x00010777d938();
    break;
  default:
    if ((int)param_1[0xd] == 8) {
      func_0x00010777dde4();
      func_0x0001075726b8();
      plVar11 = (long *)*param_2;
      func_0x00010777d938();
    }
    else {
      func_0x00010777dde4();
      func_0x0001074fd134();
      plVar11 = (long *)*param_2;
      func_0x00010777d938();
    }
  }
  plVar13 = plVar11;
  func_0x00010777d640();
  bVar8 = ((ulong)plVar11 & 1) == 0;
  plVar10 = param_1;
  if (bVar8) {
    plVar10 = (long *)0x0;
  }
  func_0x00010777d1dc();
  if (bVar8) {
    auVar30._8_8_ = (ulong)plVar11 & 0xff | ((ulong)plVar11 & 1) << 0x20;
    auVar30._0_8_ = plVar10;
    return auVar30;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  puVar20 = &UNK_10777aa94;
  func_0x00010777d638();
  if ((int)plVar10[0xd] == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x14] = 0;
    auVar24._8_8_ = plVar13;
    auVar24._0_8_ = plVar10;
    return auVar24;
  }
  uVar9 = (int)plVar10[0xd] == 1;
  if ((bool)uVar9) {
    pcVar4 = acStack_a7c + 0x91c;
    puStack_b8 = &UNK_10777aa94;
    plStack_d0 = param_1;
    plStack_c8 = plVar11;
    pppuStack_c0 = ppppuVar18;
    func_0x00010777d224(plVar13,plVar10 + 1);
    func_0x00010777d8d4();
    plVar12 = (long *)*plVar13;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((acStack_a7c[0x930] & 1U) == 0) {
      func_0x00010777d748();
      plVar10 = plVar13;
      uVar14 = extraout_w8_00;
    }
    else {
      func_0x00010777d410();
      plVar10 = plVar13;
      uVar14 = extraout_w8;
    }
    *(undefined1 *)((long)plVar11 + 0x14) = uVar14;
    func_0x00010777d20c();
    if ((bool)uVar9) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d380();
    puVar20 = &UNK_10777ab28;
    func_0x00010777d638();
    plVar13 = plVar12;
    ppppuVar18 = &pppuStack_c0;
  }
  uVar9 = (int)plVar10[0xd] == 2;
  if ((bool)uVar9) {
    *(long **)(pcVar4 + -0x20) = param_1;
    *(long **)(pcVar4 + -0x18) = plVar11;
    *(undefined8 *****)(pcVar4 + -0x10) = ppppuVar18;
    *(undefined **)(pcVar4 + -8) = puVar20;
    ppppuVar18 = (undefined8 ****)(pcVar4 + -0x10);
    func_0x00010777d224(plVar13,plVar10 + 1);
    func_0x00010777d904();
    plVar12 = (long *)*plVar13;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((pcVar4[-0x9c] & 1U) == 0) {
      func_0x00010777d748();
      plVar10 = plVar13;
      uVar14 = extraout_w8_02;
    }
    else {
      func_0x00010777d410();
      plVar10 = plVar13;
      uVar14 = extraout_w8_01;
    }
    *(undefined1 *)((long)plVar11 + 0x14) = uVar14;
    func_0x00010777d20c();
    if ((bool)uVar9) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d380();
    puVar20 = &UNK_10777aba4;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
    plVar13 = plVar12;
  }
  uVar9 = (int)plVar10[0xd] == 3;
  plVar12 = plVar13;
  if ((bool)uVar9) {
    plVar12 = plVar10 + 1;
    *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
    *(undefined1 **)(pcVar4 + -0x28) = auStack_a8;
    *(long **)(pcVar4 + -0x20) = param_1;
    *(long **)(pcVar4 + -0x18) = plVar11;
    *(undefined8 *****)(pcVar4 + -0x10) = ppppuVar18;
    *(undefined **)(pcVar4 + -8) = puVar20;
    ppppuVar18 = (undefined8 ****)(pcVar4 + -0x10);
    plVar10 = plVar13;
    func_0x00010777d1f4(plVar13,plVar12);
    func_0x00010777dd3c();
    plVar12 = (long *)*plVar13;
    func_0x00010777d484();
    func_0x00010777d640();
    if ((pcVar4[-0xac] & 1U) == 0) {
      func_0x00010777d748();
      uVar14 = extraout_w8_04;
    }
    else {
      func_0x00010777d410();
      uVar14 = extraout_w8_03;
    }
    *(undefined1 *)((long)plVar11 + 0x14) = uVar14;
    func_0x00010777d1dc();
    if ((bool)uVar9) goto LAB_10777d288;
    ___stack_chk_fail();
    func_0x00010777d38c();
    puVar20 = &UNK_10777ac28;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xc0;
    param_1 = plVar13;
  }
  uVar9 = (int)plVar10[0xd] == 4;
  if ((bool)uVar9) {
    *(long **)(pcVar4 + -0x20) = param_1;
    *(long **)(pcVar4 + -0x18) = plVar11;
    *(undefined8 *****)(pcVar4 + -0x10) = ppppuVar18;
    *(undefined **)(pcVar4 + -8) = puVar20;
    ppppuVar18 = (undefined8 ****)(pcVar4 + -0x10);
    func_0x00010777d224(plVar12,plVar10 + 1);
    func_0x00010777d8ec();
    plVar13 = (long *)*plVar12;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((pcVar4[-0x9c] & 1U) == 0) {
      func_0x00010777d748();
      plVar10 = plVar12;
      plVar12 = plVar13;
      uVar14 = extraout_w8_06;
    }
    else {
      func_0x00010777d410();
      plVar10 = plVar12;
      plVar12 = plVar13;
      uVar14 = extraout_w8_05;
    }
    *(undefined1 *)((long)plVar11 + 0x14) = uVar14;
    func_0x00010777d20c();
    if ((bool)uVar9) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d380();
    puVar20 = &UNK_10777aca4;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  uVar9 = (int)plVar10[0xd] == 5;
  if ((bool)uVar9) {
    plVar10 = plVar10 + 1;
    *(long **)(pcVar4 + -0x20) = param_1;
    *(long **)(pcVar4 + -0x18) = plVar11;
    *(undefined8 *****)(pcVar4 + -0x10) = ppppuVar18;
    *(undefined **)(pcVar4 + -8) = puVar20;
    ppppuVar18 = (undefined8 ****)(pcVar4 + -0x10);
    func_0x00010777d224();
    lVar15 = plVar10[1];
    lVar22 = *plVar10;
    *(long *)(pcVar4 + -0x88) = plVar10[1];
    *(long *)(pcVar4 + -0x90) = lVar22;
    plVar10 = plVar12;
    if (lVar15 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010777dc70();
    plVar12 = (long *)*plVar10;
    func_0x00010777d484();
    func_0x00010777d648();
    if ((pcVar4[-0x9c] & 1U) == 0) {
      func_0x00010777d748();
      uVar14 = extraout_w8_08;
    }
    else {
      func_0x00010777d410();
      uVar14 = extraout_w8_07;
    }
    *(undefined1 *)((long)plVar11 + 0x14) = uVar14;
    func_0x00010777d20c();
    if ((bool)uVar9) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d380();
    puVar20 = &UNK_10777ad3c;
    func_0x00010777d638();
    pcVar4 = pcVar4 + -0xb0;
  }
  puVar3 = pcVar4 + -0xc0;
  *(undefined8 *)(pcVar4 + -0x30) = unaff_x22;
  *(undefined1 **)(pcVar4 + -0x28) = auStack_a8;
  *(long **)(pcVar4 + -0x20) = param_1;
  *(long **)(pcVar4 + -0x18) = plVar11;
  *(undefined8 *****)(pcVar4 + -0x10) = ppppuVar18;
  *(undefined **)(pcVar4 + -8) = puVar20;
  puVar19 = pcVar4 + -0x10;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar1 = (int)plVar10[0xd];
  uVar9 = iVar1 == 6;
  if ((bool)uVar9) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    plVar12 = (long *)*param_1;
    func_0x00010777d484();
  }
  else {
    uVar9 = iVar1 == 7;
    if ((bool)uVar9) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      plVar12 = (long *)*param_1;
      func_0x00010777d484();
    }
    else {
      uVar9 = iVar1 == 8;
      if ((bool)uVar9) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        plVar12 = (long *)*param_1;
        func_0x00010777d484();
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        plVar12 = (long *)*param_1;
        func_0x00010777d484();
      }
    }
  }
  func_0x00010777d640();
  if ((pcVar4[-0xac] & 1U) == 0) {
    func_0x00010777d748();
    uVar14 = extraout_w8_10;
  }
  else {
    func_0x00010777d410();
    uVar14 = extraout_w8_09;
  }
  *(undefined1 *)((long)plVar11 + 0x14) = uVar14;
  func_0x00010777d1dc();
  if ((bool)uVar9) goto LAB_10777d288;
  ___stack_chk_fail();
  func_0x00010777d38c();
  pcVar21 = (code *)&UNK_10777ae10;
  func_0x00010777d638();
  if ((int)plVar10[0xd] == 0) {
    *extraout_x8_00 = 0;
    extraout_x8_00[0x18] = 0;
    auVar25._8_8_ = plVar12;
    auVar25._0_8_ = plVar10;
    return auVar25;
  }
  uVar9 = (int)plVar10[0xd] == 1;
  plVar13 = plVar12;
  if ((bool)uVar9) {
    plVar13 = plVar10 + 1;
    puVar3 = pcVar4 + -0x170;
    *(long **)(pcVar4 + -0xe0) = param_1;
    *(long **)(pcVar4 + -0xd8) = plVar11;
    *(undefined1 **)(pcVar4 + -0xd0) = puVar19;
    *(undefined **)(pcVar4 + -200) = &UNK_10777ae10;
    puVar19 = pcVar4 + -0xd0;
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pcVar4[-0x160] & 1U) == 0) {
      func_0x00010777db94();
      plVar10 = plVar12;
      plVar12 = plVar13;
    }
    else {
      func_0x00010777d4d8();
      plVar10 = plVar12;
      plVar12 = plVar13;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar9) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar21 = (code *)&UNK_10777aeac;
    func_0x00010777d638();
    plVar13 = plVar12;
  }
  uVar9 = (int)plVar10[0xd] == 2;
  if ((bool)uVar9) {
    plVar12 = plVar10 + 1;
    *(long **)(puVar3 + -0x20) = param_1;
    *(long **)(puVar3 + -0x18) = plVar11;
    *(undefined1 **)(puVar3 + -0x10) = puVar19;
    *(code **)(puVar3 + -8) = pcVar21;
    puVar19 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d904();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      plVar10 = plVar13;
    }
    else {
      func_0x00010777d4d8();
      plVar10 = plVar13;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar9) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar21 = FUN_10777af30;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
    plVar13 = plVar12;
  }
  uVar9 = (int)plVar10[0xd] == 3;
  plVar12 = plVar13;
  if ((bool)uVar9) {
    plVar12 = plVar10 + 1;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
    *(long **)(puVar3 + -0x20) = param_1;
    *(long **)(puVar3 + -0x18) = plVar11;
    *(undefined1 **)(puVar3 + -0x10) = puVar19;
    *(code **)(puVar3 + -8) = pcVar21;
    puVar19 = puVar3 + -0x10;
    plVar10 = plVar13;
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
    if ((bool)uVar9) goto LAB_10777d288;
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar21 = (code *)&LAB_10777afbc;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    param_1 = plVar13;
  }
  uVar9 = (int)plVar10[0xd] == 4;
  if ((bool)uVar9) {
    plVar13 = plVar10 + 1;
    *(long **)(puVar3 + -0x20) = param_1;
    *(long **)(puVar3 + -0x18) = plVar11;
    *(undefined1 **)(puVar3 + -0x10) = puVar19;
    *(code **)(puVar3 + -8) = pcVar21;
    puVar19 = puVar3 + -0x10;
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((puVar3[-0xa0] & 1) == 0) {
      func_0x00010777db94();
      plVar10 = plVar12;
      plVar12 = plVar13;
    }
    else {
      func_0x00010777d4d8();
      plVar10 = plVar12;
      plVar12 = plVar13;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar9) goto LAB_10777d4b4;
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar21 = (code *)&UNK_10777b040;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar9 = (int)plVar10[0xd] == 5;
  if ((bool)uVar9) {
    plVar13 = plVar10 + 1;
    *(long **)(puVar3 + -0x20) = param_1;
    *(long **)(puVar3 + -0x18) = plVar11;
    *(undefined1 **)(puVar3 + -0x10) = puVar19;
    *(code **)(puVar3 + -8) = pcVar21;
    puVar19 = puVar3 + -0x10;
    func_0x00010777d224();
    lVar15 = plVar13[1];
    lVar22 = *plVar13;
    *(long *)(puVar3 + -0x88) = plVar13[1];
    *(long *)(puVar3 + -0x90) = lVar22;
    plVar10 = plVar12;
    plVar12 = plVar13;
    if (lVar15 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10_01 != 0);
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
    if ((bool)uVar9) {
LAB_10777d4b4:
      auVar29._8_8_ = plVar12;
      auVar29._0_8_ = plVar10;
      return auVar29;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    pcVar21 = (code *)&UNK_10777b0e0;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  puVar5 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(char **)(puVar3 + -0x28) = pcVar4 + -0xa8;
  *(long **)(puVar3 + -0x20) = param_1;
  *(long **)(puVar3 + -0x18) = plVar11;
  *(undefined1 **)(puVar3 + -0x10) = puVar19;
  *(code **)(puVar3 + -8) = pcVar21;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar1 = (int)plVar10[0xd];
  uVar9 = iVar1 == 6;
  if ((bool)uVar9) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
    func_0x00010777d4d8();
  }
  else {
    uVar9 = iVar1 == 7;
    if ((bool)uVar9) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d4c0();
      func_0x00010777d640();
      if ((puVar3[-0xb0] & 1) == 0) goto code_r0x00010777b1ac;
      func_0x00010777d4d8();
    }
    else {
      uVar9 = iVar1 == 8;
      if ((bool)uVar9) {
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
  if ((bool)uVar9) goto LAB_10777d288;
  ___stack_chk_fail();
  func_0x00010777d608();
  func_0x00010777d638();
  *(long **)(puVar3 + -0xe0) = param_1;
  *(long **)(puVar3 + -0xd8) = plVar11;
  *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -200) = &UNK_10777b1f8;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9_00;
  if ((int)plVar10[0xd] == 0) {
    *(undefined4 *)(puVar3 + -0xf0) = 0;
    plVar11 = (long *)(puVar3 + -0x158);
    func_0x00010777dd30();
    plVar10 = (long *)(puVar3 + -0x150);
    func_0x00010726af18(plVar10);
    func_0x00010777d20c();
    if ((bool)uVar9) {
code_r0x00010777ddcc:
      auVar31._8_8_ = plVar12;
      auVar31._0_8_ = plVar10;
      return auVar31;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(long **)(puVar3 + -0x180) = param_1;
    *(long **)(puVar3 + -0x178) = plVar11;
    *(undefined1 **)(puVar3 + -0x170) = puVar3 + -0xd0;
    *(code **)(puVar3 + -0x168) = FUN_10777b260;
    plVar11 = plVar12;
    func_0x000107776fc4();
    bVar8 = (ulong)plVar12 >> 0x20 != 0;
    if (bVar8) {
      *extraout_x8_01 = (int)plVar12;
      extraout_x8_01[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8_01 = 0;
    }
    *(bool *)(extraout_x8_01 + 5) = bVar8;
    auVar26._8_8_ = plVar11;
    auVar26._0_8_ = plVar12;
    return auVar26;
  }
  func_0x00010777d490();
  if (!(bool)uVar9) goto code_r0x00010777b254;
  puVar17 = *(undefined8 **)(puVar3 + -0xe0);
  puVar16 = *(undefined8 **)(puVar3 + -0xd8);
  *(undefined8 **)(puVar3 + -0xe0) = puVar17;
  *(undefined8 **)(puVar3 + -0xd8) = puVar16;
  *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
  *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
  puVar19 = puVar3 + -0xd0;
  func_0x00010777d31c();
  *(undefined8 *)(puVar3 + -0xe8) = extraout_x9_01;
  uVar9 = (int)plVar10[0xd] == 1;
  if ((bool)uVar9) {
    puVar16 = (undefined8 *)(puVar3 + -0x158);
    puVar3[-0x150] = (char)plVar10[1];
    *(undefined4 *)(puVar3 + -0xf0) = 1;
    func_0x00010777dd30();
    plVar10 = (long *)(puVar3 + -0x150);
    func_0x00010726af18();
    func_0x00010777d20c();
    if ((bool)uVar9) goto code_r0x00010777ddcc;
code_r0x00010777b310:
    ___stack_chk_fail();
    func_0x00010777db78();
    puVar20 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar5 = puVar3 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar9) goto code_r0x00010777b310;
    puVar19 = *(undefined1 **)(puVar3 + -0xd0);
    puVar20 = *(undefined **)(puVar3 + -200);
    puVar17 = *(undefined8 **)(puVar3 + -0xe0);
    puVar16 = *(undefined8 **)(puVar3 + -0xd8);
  }
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar5 + -0x28) = puVar3 + -0xa8;
  *(undefined8 **)(puVar5 + -0x20) = puVar17;
  *(undefined8 **)(puVar5 + -0x18) = puVar16;
  *(undefined1 **)(puVar5 + -0x10) = puVar19;
  *(undefined **)(puVar5 + -8) = puVar20;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar1 = (int)plVar10[0xd];
  uVar9 = iVar1 == 2;
  if ((bool)uVar9) {
    *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(extraout_x9_02 + 8);
    *(undefined4 *)(puVar5 + -0x40) = 2;
    func_0x00010777d3e4();
code_r0x00010777b44c:
    func_0x00010777d640();
  }
  else {
    uVar9 = iVar1 == 3;
    if ((bool)uVar9) {
      plVar10 = (long *)(puVar5 + -0xa8);
      plVar12 = (long *)(extraout_x9_02 + 8);
      func_0x0001072ddd58(plVar10,plVar12);
      func_0x00010777d3e4();
      goto code_r0x00010777b44c;
    }
    uVar9 = iVar1 == 4;
    if ((bool)uVar9) {
      uVar23 = *(undefined8 *)(extraout_x9_02 + 8);
      *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(extraout_x9_02 + 0x10);
      *(undefined8 *)(puVar5 + -0xa0) = uVar23;
      *(undefined4 *)(puVar5 + -0x40) = 4;
      func_0x00010777d3e4();
      goto code_r0x00010777b44c;
    }
    if (iVar1 == 5) {
      lVar15 = *(long *)(extraout_x9_02 + 0x10);
      uVar23 = *(undefined8 *)(extraout_x9_02 + 8);
      *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(extraout_x9_02 + 0x10);
      *(undefined8 *)(puVar5 + -0xa0) = uVar23;
      uVar9 = 1;
      if (lVar15 != 0) {
        do {
          func_0x00010777d468();
        } while (extraout_w10_02 != 0);
      }
      *(undefined4 *)(puVar5 + -0x40) = 5;
      func_0x00010777d3e4();
      goto code_r0x00010777b44c;
    }
    uVar9 = iVar1 == 6;
    if ((bool)uVar9) {
      func_0x00010777d9ac();
      func_0x000107348eb0();
      func_0x00010777d3e4();
      goto code_r0x00010777b44c;
    }
    uVar9 = iVar1 == 7;
    if ((bool)uVar9) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      func_0x00010777d3e4();
      goto code_r0x00010777b44c;
    }
    uVar9 = iVar1 == 8;
    if (!(bool)uVar9) {
      func_0x00010777d9ac();
      func_0x0001074fd134();
      func_0x00010777d3e4();
      goto code_r0x00010777b44c;
    }
    func_0x00010777d9ac();
    func_0x0001075726b8();
    plVar12 = (long *)*puVar17;
    func_0x00010777d484();
    func_0x00010777d640();
    uVar9 = puVar5[-0xac] == '\x01';
    if ((bool)uVar9) {
      uVar23 = *(undefined8 *)(puVar5 + -0xbc);
      puVar16[1] = *(undefined8 *)(puVar5 + -0xb4);
      *puVar16 = uVar23;
      *(undefined4 *)(puVar16 + 2) = 1;
      uVar14 = 1;
    }
    else {
      func_0x00010777d748();
      uVar14 = extraout_w8_11;
    }
    *(undefined1 *)((long)puVar16 + 0x14) = uVar14;
  }
  func_0x00010777d1dc();
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    func_0x00010777d38c();
    func_0x00010777d638();
    if ((((int)plVar10[0xd] != 0) && ((int)plVar10[0xd] != 1)) && ((int)plVar10[0xd] != 2)) {
      iVar1 = (int)plVar10[0xd];
      cVar6 = SBORROW4(iVar1,3);
      cVar7 = iVar1 + -3 < 0;
      if (iVar1 == 3) {
        puVar20 = &UNK_10777b49c;
        func_0x00010777de8c();
        *(undefined8 **)(puVar5 + -0xe0) = puVar17;
        *(undefined8 **)(puVar5 + -0xd8) = puVar16;
        *(undefined1 **)(puVar5 + -0xd0) = puVar5 + -0x10;
        *(undefined **)(puVar5 + -200) = puVar20;
        func_0x00010777d264();
        func_0x00010777d1c4();
        uVar23 = extraout_x11;
        if (cVar7 == cVar6) {
          uVar23 = extraout_x8_02;
        }
        func_0x0001077f2c70();
        func_0x00010777d374();
        auVar28._4_4_ = 0;
        auVar28._0_4_ = (uint)puVar16 & 0xffff;
        auVar28._8_8_ = uVar23;
        return auVar28;
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = plVar12;
    return auVar2 << 0x40;
  }
LAB_10777d288:
  auVar27._8_8_ = plVar12;
  auVar27._0_8_ = plVar10;
  return auVar27;
}



/* Entry: 10777ac4c; end: 10777aca3;  */

long * FUN_10777ac4c(long *param_1)

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
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  char acStack_7ac [1440];
  byte abStack_20c [192];
  byte bStack_14c;
  long lStack_140;
  long lStack_138;
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [20];
  byte bStack_9c;
  byte *pbVar4;
  
  pbVar4 = auStack_b0;
  pppppppuVar13 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d224();
  func_0x00010777d8ec();
  plVar8 = (long *)*param_1;
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
  puVar15 = &UNK_10777aca4;
  func_0x00010777d638();
  uVar6 = (int)param_1[0xd] == 5;
  if ((bool)uVar6) {
    plVar7 = param_1 + 1;
    pbVar4 = abStack_20c + 0xac;
    puStack_b8 = &UNK_10777aca4;
    ppppppuStack_c0 = pppppppuVar13;
    func_0x00010777d224();
    lStack_138 = plVar7[1];
    lStack_140 = *plVar7;
    param_1 = plVar8;
    if (plVar7[1] != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    func_0x00010777dc70();
    func_0x00010777d484();
    func_0x00010777d648();
    if ((bStack_14c & 1) == 0) {
      func_0x00010777d748();
      uVar9 = extraout_w8_02;
    }
    else {
      func_0x00010777d410();
      uVar9 = extraout_w8_01;
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
    pppppppuVar13 = &ppppppuStack_c0;
  }
  puVar3 = pbVar4 + -0xc0;
  *(undefined8 *)(pbVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(pbVar4 + -0x28) = unaff_x21;
  *(long **)(pbVar4 + -0x20) = unaff_x20;
  *(undefined1 **)(pbVar4 + -0x18) = unaff_x19;
  *(undefined8 ********)(pbVar4 + -0x10) = pppppppuVar13;
  *(undefined **)(pbVar4 + -8) = puVar15;
  puVar14 = pbVar4 + -0x10;
  func_0x00010777de04();
  func_0x00010777d1f4();
  iVar2 = (int)param_1[0xd];
  uVar6 = iVar2 == 6;
  if ((bool)uVar6) {
    func_0x00010777d9ac();
    func_0x000107348eb0();
    plVar8 = (long *)*unaff_x20;
    func_0x00010777d484();
  }
  else {
    uVar6 = iVar2 == 7;
    if ((bool)uVar6) {
      func_0x00010777d9ac();
      func_0x000107348ecc();
      plVar8 = (long *)*unaff_x20;
      func_0x00010777d484();
    }
    else {
      uVar6 = iVar2 == 8;
      if ((bool)uVar6) {
        func_0x00010777d9ac();
        func_0x0001075726b8();
        plVar8 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
      else {
        func_0x00010777d9ac();
        func_0x0001074fd134();
        plVar8 = (long *)*unaff_x20;
        func_0x00010777d484();
      }
    }
  }
  func_0x00010777d640();
  if ((pbVar4[-0xac] & 1) == 0) {
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
  pcVar16 = (code *)&UNK_10777ae10;
  func_0x00010777d638();
  if ((int)param_1[0xd] == 0) {
    *extraout_x8 = 0;
    extraout_x8[0x18] = 0;
    return param_1;
  }
  uVar6 = (int)param_1[0xd] == 1;
  if ((bool)uVar6) {
    plVar7 = param_1 + 1;
    puVar3 = pbVar4 + -0x170;
    *(long **)(pbVar4 + -0xe0) = unaff_x20;
    *(undefined1 **)(pbVar4 + -0xd8) = unaff_x19;
    *(undefined1 **)(pbVar4 + -0xd0) = puVar14;
    *(undefined **)(pbVar4 + -200) = &UNK_10777ae10;
    puVar14 = pbVar4 + -0xd0;
    func_0x00010777d224();
    func_0x00010777d8d4();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((pbVar4[-0x160] & 1) == 0) {
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
    pcVar16 = (code *)&UNK_10777aeac;
    func_0x00010777d638();
  }
  uVar6 = (int)param_1[0xd] == 2;
  if ((bool)uVar6) {
    plVar7 = param_1 + 1;
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
    pcVar16 = FUN_10777af30;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar6 = (int)param_1[0xd] == 3;
  plVar7 = plVar8;
  if ((bool)uVar6) {
    plVar7 = param_1 + 1;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(byte **)(puVar3 + -0x28) = pbVar4 + -0xa8;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(code **)(puVar3 + -8) = pcVar16;
    puVar14 = puVar3 + -0x10;
    param_1 = plVar8;
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
    pcVar16 = (code *)&LAB_10777afbc;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xc0;
    unaff_x20 = plVar8;
  }
  uVar6 = (int)param_1[0xd] == 4;
  if ((bool)uVar6) {
    plVar8 = param_1 + 1;
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
    pcVar16 = (code *)&UNK_10777b040;
    func_0x00010777d638();
    puVar3 = puVar3 + -0xb0;
  }
  uVar6 = (int)param_1[0xd] == 5;
  if ((bool)uVar6) {
    plVar8 = param_1 + 1;
    *(long **)(puVar3 + -0x20) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar14;
    *(code **)(puVar3 + -8) = pcVar16;
    puVar14 = puVar3 + -0x10;
    func_0x00010777d224();
    lVar10 = plVar8[1];
    lVar17 = *plVar8;
    *(long *)(puVar3 + -0x88) = plVar8[1];
    *(long *)(puVar3 + -0x90) = lVar17;
    param_1 = plVar7;
    plVar7 = plVar8;
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
  *(byte **)(puVar3 + -0x28) = pbVar4 + -0xa8;
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
    plVar8 = (long *)(puVar3 + -0x150);
    func_0x00010726af18(plVar8);
    func_0x00010777d20c();
    if ((bool)uVar6) {
      return plVar8;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(long **)(puVar3 + -0x180) = unaff_x20;
    *(undefined1 **)(puVar3 + -0x178) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x170) = puVar3 + -0xd0;
    *(code **)(puVar3 + -0x168) = FUN_10777b260;
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
    puVar15 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar5 = puVar3 + -0x160;
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar6) goto code_r0x00010777b310;
    puVar14 = *(undefined1 **)(puVar3 + -0xd0);
    puVar15 = *(undefined **)(puVar3 + -200);
    uVar12 = *(undefined8 *)(puVar3 + -0xe0);
    puVar11 = *(undefined8 **)(puVar3 + -0xd8);
  }
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar5 + -0x28) = puVar3 + -0xa8;
  *(undefined8 *)(puVar5 + -0x20) = uVar12;
  *(undefined8 **)(puVar5 + -0x18) = puVar11;
  *(undefined1 **)(puVar5 + -0x10) = puVar14;
  *(undefined **)(puVar5 + -8) = puVar15;
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
              func_0x0001075726b8();
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
                uVar9 = extraout_w8_05;
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



/* Entry: 10777af30; end: 10777af53;  */

undefined8 * FUN_10777af30(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
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
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar9;
  undefined *unaff_x30;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char acStack_42c [1020];
  
  uVar4 = *(int *)(param_1 + 0xd) == 3;
  puVar5 = param_2;
  if ((bool)uVar4) {
    puVar5 = param_1 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    param_1 = param_2;
    func_0x00010777d1f4();
    func_0x00010777dd3c();
    func_0x00010777d4c0();
    func_0x00010777d640();
    if ((acStack_42c[0x37c] & 1U) == 0) {
      func_0x00010777db94();
    }
    else {
      func_0x00010777d4d8();
    }
    func_0x00010777d7c8();
    func_0x00010777d1dc();
    if ((bool)uVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = &LAB_10777afbc;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)(acStack_42c + 0x36c);
    unaff_x20 = param_2;
  }
  uVar4 = *(int *)(param_1 + 0xd) == 4;
  if ((bool)uVar4) {
    puVar6 = param_1 + 1;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    func_0x00010777d8ec();
    func_0x00010777d4c0();
    func_0x00010777d648();
    if ((*(byte *)((long)register0x00000008 + -0xa0) & 1) == 0) {
      func_0x00010777db94();
      param_1 = puVar5;
      puVar5 = puVar6;
    }
    else {
      func_0x00010777d4d8();
      param_1 = puVar5;
      puVar5 = puVar6;
    }
    func_0x00010777d7c8();
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return param_1;
    }
    ___stack_chk_fail();
    func_0x00010777d608();
    unaff_x30 = &UNK_10777b040;
    func_0x00010777d638();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
  }
  uVar4 = *(int *)(param_1 + 0xd) == 5;
  if ((bool)uVar4) {
    puVar6 = param_1 + 1;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010777d224();
    lVar8 = puVar6[1];
    uVar11 = *puVar6;
    *(undefined8 *)((long)register0x00000008 + -0x88) = puVar6[1];
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar11;
    param_1 = puVar5;
    puVar5 = puVar6;
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
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
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
        func_0x0001075726b8();
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
  *(undefined8 **)((long)register0x00000008 + -0xe0) = unaff_x20;
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
    puVar6 = (undefined8 *)((long)register0x00000008 + -0x150);
    func_0x00010726af18(puVar6);
    func_0x00010777d20c();
    if ((bool)uVar4) {
      return puVar6;
    }
code_r0x00010777b254:
    ___stack_chk_fail();
    func_0x00010777db78();
    func_0x00010777d638();
    *(undefined8 **)((long)register0x00000008 + -0x180) = unaff_x20;
    *(undefined1 **)((long)register0x00000008 + -0x178) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x170) =
         (undefined1 *)((long)register0x00000008 + -0xd0);
    *(code **)((long)register0x00000008 + -0x168) = FUN_10777b260;
    func_0x000107776fc4();
    bVar1 = (ulong)puVar5 >> 0x20 != 0;
    if (bVar1) {
      *extraout_x8 = (int)puVar5;
      extraout_x8[4] = 0;
    }
    else {
      *(undefined1 *)extraout_x8 = 0;
    }
    *(bool *)(extraout_x8 + 5) = bVar1;
    return puVar5;
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
    puVar10 = &UNK_10777b31c;
    func_0x00010777d638();
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x160);
  }
  else {
    func_0x00010777d490();
    if (!(bool)uVar4) goto code_r0x00010777b310;
    puVar9 = *(undefined1 **)((long)register0x00000008 + -0xd0);
    puVar10 = *(undefined **)((long)register0x00000008 + -200);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    puVar5 = *(undefined8 **)((long)register0x00000008 + -0xd8);
  }
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar3 + -0x28) = (undefined1 *)((long)register0x00000008 + -0xa8);
  *(undefined8 *)(puVar3 + -0x20) = uVar11;
  *(undefined8 **)(puVar3 + -0x18) = puVar5;
  *(undefined1 **)(puVar3 + -0x10) = puVar9;
  *(undefined **)(puVar3 + -8) = puVar10;
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
              func_0x0001075726b8();
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
  if ((bool)uVar4) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010777d38c();
  func_0x00010777d638();
  if ((((*(int *)(param_1 + 0xd) != 0) && (*(int *)(param_1 + 0xd) != 1)) &&
      (*(int *)(param_1 + 0xd) != 2)) && (*(int *)(param_1 + 0xd) == 3)) {
    puVar10 = &UNK_10777b49c;
    func_0x00010777de8c();
    *(undefined8 *)(puVar3 + -0xe0) = uVar11;
    *(undefined8 **)(puVar3 + -0xd8) = puVar5;
    *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -200) = puVar10;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2c70();
    func_0x00010777d374();
    return (undefined8 *)(ulong)((uint)puVar5 & 0xffff);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10777b260; end: 10777b2a3;  */

void FUN_10777b260(undefined4 *param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  
  func_0x000107776fc4();
  bVar1 = param_3 >> 0x20 != 0;
  if (bVar1) {
    *param_1 = (int)param_3;
    param_1[4] = 0;
  }
  else {
    *(undefined1 *)param_1 = 0;
  }
  *(bool *)(param_1 + 5) = bVar1;
  return;
}



/* Entry: 10777b604; end: 10777b633;  */

undefined2 FUN_10777b604(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2550();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777b824; end: 10777b853;  */

undefined2 FUN_10777b824(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f273c();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777ba44; end: 10777ba73;  */

undefined2 FUN_10777ba44(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2928();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777bc64; end: 10777bc93;  */

undefined2 FUN_10777bc64(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2b10();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777be84; end: 10777beb3;  */

undefined2 FUN_10777be84(void)

{
  undefined2 unaff_w19;
  
  func_0x00010777d264();
  func_0x00010777d1c4();
  func_0x0001077f2d48();
  func_0x00010777d374();
  return unaff_w19;
}



/* Entry: 10777c0d8; end: 10777c14b;  */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_10777c0d8(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 extraout_w8;
  undefined1 uVar5;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined1 uVar6;
  int extraout_w8_03;
  long lVar7;
  int extraout_w10;
  long unaff_x19;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 *******pppppppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 auStack_300 [400];
  undefined1 auStack_170 [128];
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [15];
  undefined1 uStack_b1;
  undefined1 auStack_b0 [128];
  
  puVar1 = auStack_c0;
  pppppppuVar10 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x00010777d1f4();
  puVar4 = auStack_b0;
  func_0x00010777dacc();
  func_0x00010777d950();
  func_0x00010777d5e0();
  uVar9 = (uint)unaff_x21;
  uVar2 = uVar9 == 0xff;
  uVar6 = SUB81(unaff_x21,0);
  if (uVar9 < 0x100) {
    func_0x00010777d748();
    uVar5 = extraout_w8;
  }
  else {
    uStack_b1 = uVar6;
    func_0x00010777d540();
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar5 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x10) = uVar5;
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar11 = &UNK_10777c14c;
  puVar8 = param_1;
  func_0x00010777d638();
  if (*(int *)(puVar8 + 0x68) == 3) {
    puVar4 = param_2 + 8;
    param_2 = puVar8 + 8;
    puVar1 = auStack_300 + 0x180;
    puStack_c8 = &UNK_10777c14c;
    pppppppuStack_d0 = pppppppuVar10;
    func_0x00010777d1f4(puVar4);
    puVar4 = auStack_170;
    puVar3 = auStack_170;
    func_0x0001072ddd58();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_00;
    }
    else {
      auStack_300[399] = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    param_1[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return puVar3;
    }
    ___stack_chk_fail();
    puVar11 = &UNK_10777c1e8;
    puVar8 = puVar3;
    func_0x00010777d638();
    param_1 = puVar3;
    pppppppuVar10 = &pppppppuStack_d0;
  }
  uVar2 = 0;
  if (*(int *)(puVar8 + 0x68) == 4) {
    param_2 = param_2 + 8;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
    *(undefined1 **)(puVar1 + -0x20) = puVar4;
    *(undefined1 **)(puVar1 + -0x18) = param_1;
    *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar10;
    *(undefined **)(puVar1 + -8) = puVar11;
    pppppppuVar10 = (undefined8 *******)(puVar1 + -0x10);
    func_0x00010777d1f4(param_2,puVar8 + 8);
    puVar4 = puVar1 + -0xb0;
    func_0x00010777da1c();
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar9 == 0xff;
    if (uVar9 < 0x100) {
      func_0x00010777d748();
      uVar5 = extraout_w8_01;
    }
    else {
      puVar1[-0xb1] = uVar6;
      func_0x00010777d540();
      func_0x00010777d2c0();
      func_0x000107404cc4();
      uVar5 = 1;
    }
    param_1[0x10] = uVar5;
    func_0x00010777d1dc();
    if ((bool)uVar2) {
      return param_2;
    }
    ___stack_chk_fail();
    puVar11 = &UNK_10777c280;
    puVar8 = param_2;
    func_0x00010777d638();
    puVar1 = puVar1 + -0xc0;
    param_1 = param_2;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined1 **)(puVar1 + -0x28) = unaff_x21;
  *(undefined1 **)(puVar1 + -0x20) = puVar4;
  *(undefined1 **)(puVar1 + -0x18) = param_1;
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar10;
  *(undefined **)(puVar1 + -8) = puVar11;
  puVar4 = puVar8;
  func_0x00010777d1f4();
  func_0x00010777da78();
  if ((bool)uVar2) {
    lVar7 = *(long *)(puVar8 + 0x10);
    uVar12 = *(undefined8 *)(puVar8 + 8);
    *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar8 + 0x10);
    *(undefined8 *)(puVar1 + -0xa8) = uVar12;
    if (lVar7 != 0) {
      do {
        func_0x00010777d468();
      } while (extraout_w10 != 0);
    }
    puVar8 = puVar1 + -0xb0;
    *(undefined4 *)(puVar1 + -0x48) = 5;
    func_0x00010777d950();
    func_0x00010777d5e0();
    uVar2 = uVar9 == 0xff;
    if (uVar9 < 0x100) goto code_r0x00010777c3d0;
    puVar1[-0xc0] = uVar6;
    func_0x00010777d400();
    func_0x00010777bfb4();
code_r0x00010777c3f8:
    func_0x00010777d2c0();
    func_0x000107404cc4();
    uVar6 = 1;
  }
  else {
    if (extraout_w8_03 == 6) {
      unaff_x21 = puVar1 + -0xb0;
      func_0x00010777da44();
      func_0x000107348eb0();
      func_0x00010777d950();
      uVar9 = (uint)puVar4 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar2 = uVar9 == 0xff;
      if (0xff < uVar9) {
        puVar1[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else if (extraout_w8_03 == 7) {
      unaff_x21 = puVar1 + -0xb0;
      func_0x00010777da44();
      func_0x000107348ecc();
      func_0x00010777d950();
      uVar9 = (uint)puVar4 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar2 = uVar9 == 0xff;
      if (0xff < uVar9) {
        puVar1[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
    else {
      if (extraout_w8_03 == 8) {
        func_0x00010777dce0();
        func_0x00010777d398(*(undefined8 *)(puVar8 + 8));
        func_0x000107535980(puVar1 + -0xb0);
        unaff_x21 = (undefined1 *)(*(undefined8 **)(puVar8 + 8))[1];
        for (puVar8 = (undefined1 *)**(undefined8 **)(puVar8 + 8); uVar2 = puVar8 == unaff_x21,
            !(bool)uVar2; puVar8 = puVar8 + 0x70) {
          puVar4 = puVar8;
          func_0x00010777bf6c();
          uVar9 = (uint)puVar4 & 0xffff;
          *(short *)(puVar1 + -0xc0) = (short)puVar4;
          uVar2 = uVar9 == 0x100;
          if (uVar9 < 0x100) {
            func_0x00010777d724();
            goto code_r0x00010777c41c;
          }
          func_0x00010777d700();
          func_0x000107535a48();
        }
        func_0x00010777dac0();
        func_0x000107535ae0();
        func_0x00010777d338();
        func_0x000107404cc4();
code_r0x00010777c41c:
        puVar4 = puVar1 + -0xb0;
        func_0x0001073e7720();
        goto code_r0x00010777c408;
      }
      unaff_x21 = puVar1 + -0xb0;
      func_0x00010777da44();
      func_0x0001074fd134();
      func_0x00010777d950();
      uVar9 = (uint)puVar4 & 0xffff;
      puVar8 = (undefined1 *)(ulong)uVar9;
      func_0x00010777d640();
      uVar2 = uVar9 == 0xff;
      if (0xff < uVar9) {
        puVar1[-0xc0] = (char)uVar9;
        func_0x00010777d400();
        func_0x00010777bfb4();
        goto code_r0x00010777c3f8;
      }
    }
code_r0x00010777c3d0:
    func_0x00010777d748();
    uVar6 = extraout_w8_02;
  }
  param_1[0x10] = uVar6;
code_r0x00010777c408:
  func_0x00010777d1dc();
  if ((bool)uVar2) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar3 = unaff_x21 + 8;
  func_0x00010726af18();
  func_0x00010777d638();
  if ((((*(int *)(puVar3 + 0x68) != 0) && (*(int *)(puVar3 + 0x68) != 1)) &&
      (*(int *)(puVar3 + 0x68) != 2)) && (*(int *)(puVar3 + 0x68) == 3)) {
    puVar11 = &UNK_10777c468;
    func_0x00010777de8c();
    *(undefined1 **)(puVar1 + -0xe0) = puVar8;
    *(undefined1 **)(puVar1 + -0xd8) = puVar4;
    *(undefined1 **)(puVar1 + -0xd0) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -200) = puVar11;
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f2dd0();
    func_0x00010777d374();
    return (undefined1 *)(ulong)((uint)puVar4 & 0xffff);
  }
  return (undefined1 *)0x0;
}



/* Entry: 10777c4f0; end: 10777c5a7;  */

ulong FUN_10777c4f0(ulong param_1)

{
  func_0x00010777c508();
  return param_1 & 0xffffffffff;
}



/* Entry: 10777c83c; end: 10777c893;  */

undefined2 FUN_10777c83c(long param_1)

{
  undefined2 unaff_w19;
  
  if ((((*(int *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 0x68) != 1)) &&
      (*(int *)(param_1 + 0x68) != 2)) && (*(int *)(param_1 + 0x68) == 3)) {
    func_0x00010777de8c();
    func_0x00010777d264();
    func_0x00010777d1c4();
    func_0x0001077f31f4();
    func_0x00010777d374();
    return unaff_w19;
  }
  return 0;
}


