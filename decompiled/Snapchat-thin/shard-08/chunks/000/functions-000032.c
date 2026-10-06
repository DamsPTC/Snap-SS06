/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c3d774; end: 105c3d813;  */

undefined8 * FUN_105c3d774(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1108dea38;
  FUN_105c38be0(param_1 + 0x3c);
  __ZNSt3__15mutexD1Ev(param_1 + 0x34);
  func_0x0001001148fc(param_1 + 0x30);
  FUN_105c3ce98(param_1 + 0x28);
  FUN_105c3ce98(param_1 + 0x20);
  if (*(char *)(param_1 + 0x1f) == '\x01') {
    func_0x00010b93fbcc(param_1 + 0x10);
  }
  FUN_105c38be0(param_1 + 0xb);
  if (*(char *)(param_1 + 10) == '\x01') {
    func_0x0001003b6c64(param_1 + 8);
  }
  func_0x0001005f1e7c(param_1 + 6);
  func_0x000105c3836c(param_1 + 2);
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    func_0x000105c3e6e0();
  }
  return param_1;
}



/* Entry: 105c3d814; end: 105c3d817;  */

undefined8 * FUN_105c3d814(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108deba0;
  func_0x0001000df75c(param_1 + 1);
  return param_1;
}



/* Entry: 105c3d818; end: 105c3d82b;  */

void FUN_105c3d818(void)

{
  FUN_105c3d8c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c3d82c; end: 105c3d85b;  */

void FUN_105c3d82c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c3d838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 105c3d85c; end: 105c3d8a3;  */

void FUN_105c3d85c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  return;
}



/* Entry: 105c3d8a4; end: 105c3d8c3;  */

void FUN_105c3d8a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c3d8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}



/* Entry: 105c3d8c4; end: 105c3d8f3;  */

undefined8 * FUN_105c3d8c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108deba0;
  func_0x0001000df75c(param_1 + 1);
  return param_1;
}



/* Entry: 105c3d8f4; end: 105c3d973;  */

long FUN_105c3d8f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined8 uStack_50;
  
  func_0x000105c3e6b0();
  func_0x000105c3eaa0();
  func_0x000105c3ec28();
  FUN_105c3d9cc();
  func_0x000105c3e7e4();
  func_0x000105c3da6c();
  func_0x000105c3e68c(extraout_x8);
  if ((bool)in_ZR) {
    return uStack_50;
  }
  ___stack_chk_fail();
  func_0x000105c3eb2c();
  func_0x000105c3e71c();
  *(undefined8 *)(uStack_50 + 8) = param_2;
  lVar1 = uStack_50;
  FUN_105c3d99c();
  *(long *)(uStack_50 + 0x10) = lVar1;
  return uStack_50;
}



/* Entry: 105c3d974; end: 105c3d99b;  */

long FUN_105c3d974(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_105c3d99c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 105c3d99c; end: 105c3d9cb;  */

void FUN_105c3d99c(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x7e07e07e07e07f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x208);
    return;
  }
  func_0x000104bd35f4();
  func_0x000105c3ea28();
  FUN_105c3da1c();
  return;
}



/* Entry: 105c3d9cc; end: 105c3d9f7;  */

void FUN_105c3d9cc(void)

{
  func_0x000105c3ea28();
  FUN_105c3da1c();
  return;
}



/* Entry: 105c3d9f8; end: 105c3d9fb;  */

void FUN_105c3d9f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108deb00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c3d9fc; end: 105c3da0f;  */

void FUN_105c3d9fc(void)

{
  FUN_105c3da5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c3da10; end: 105c3da1b;  */

void FUN_105c3da10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c3ea60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105c3da1c; end: 105c3da5b;  */

undefined8 FUN_105c3da1c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000105c3ebfc();
  FUN_105c3af98();
  if (uStack_28 != 0) {
    func_0x000105c3e6e0();
  }
  return param_1;
}



/* Entry: 105c3da5c; end: 105c3da7b;  */

void FUN_105c3da5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108deb00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c3da7c; end: 105c3daa3;  */

long FUN_105c3da7c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105c3daa4; end: 105c3db17;  */

undefined1 * FUN_105c3daa4(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000105c3e6b0();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_105c3db18();
  *puStack_30 = &PTR_FUN_1108deb50;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_1108dedd8;
  func_0x000105c3e7e4();
  func_0x000105c3db90();
  func_0x000105c3e68c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_105c3db40();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 105c3db18; end: 105c3db3f;  */

long FUN_105c3db18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_105c3db40();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 105c3db40; end: 105c3db5b;  */

void FUN_105c3db40(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1108deb50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c3db5c; end: 105c3db5f;  */

void FUN_105c3db5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108deb50;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c3db60; end: 105c3db73;  */

void FUN_105c3db60(void)

{
  func_0x000105c3db80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c3db74; end: 105c3db9f;  */

void FUN_105c3db74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c3ea60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105c3dba0; end: 105c3dbc7;  */

long FUN_105c3dba0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105c3dbc8; end: 105c3dc47;  */

undefined8 FUN_105c3dbc8(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_50;
  
  func_0x000105c3e6b0();
  func_0x000105c3eaa0();
  func_0x000105c3ec28(uStack_50);
  FUN_105c3dc48();
  func_0x000105c3e7e4();
  func_0x000105c3da6c();
  func_0x000105c3e68c(extraout_x8);
  if ((bool)in_ZR) {
    return uStack_50;
  }
  ___stack_chk_fail();
  func_0x000105c3eb2c();
  func_0x000105c3e71c();
  func_0x000105c3ea28();
  FUN_105c3dc74();
  return param_1;
}



/* Entry: 105c3dc48; end: 105c3dc73;  */

void FUN_105c3dc48(void)

{
  func_0x000105c3ea28();
  FUN_105c3dc74();
  return;
}



/* Entry: 105c3dc74; end: 105c3dccb;  */

undefined8 FUN_105c3dc74(undefined8 param_1,undefined8 *param_2)

{
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000105c3ebfc();
  FUN_105c3af98();
  if (lStack_38 != 0) {
    func_0x000105c3e6e0();
  }
  func_0x000105c3836c(&uStack_30);
  return param_1;
}



/* Entry: 105c3dccc; end: 105c3e4ab;  */

long * FUN_105c3dccc(long *param_1)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 in_x4;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_488 [56];
  undefined1 auStack_450 [24];
  ulong uStack_438;
  int iStack_418;
  byte bStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined1 uStack_3f8;
  ulong uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [56];
  undefined1 auStack_380 [56];
  byte bStack_348;
  undefined1 auStack_340 [64];
  undefined1 auStack_300 [64];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  ulong uStack_290;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  uint uStack_258;
  undefined1 auStack_248 [24];
  ulong uStack_230;
  undefined8 *puStack_228;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  long alStack_210 [11];
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [56];
  uint uStack_178;
  undefined1 auStack_138 [56];
  ulong *puStack_100;
  undefined1 *puStack_f8;
  byte bStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_a8;
  char cStack_50;
  undefined8 uStack_48;
  
  func_0x000105c3e6b0();
  plVar7 = (long *)**(ulong **)*param_1;
  alStack_210[0]._0_1_ = 0;
  uStack_1b8 = 0;
  uStack_48 = extraout_x8;
  FUN_105c3b044();
  if ((int)param_1 != 0) {
    FUN_105c3cce4(alStack_210);
    param_1 = alStack_210;
    FUN_105c3e4ac(param_1,&UNK_10f332adf);
    uStack_1b8 = 1;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  puStack_100 = (ulong *)((ulong)puStack_100 & 0xffffffffffffff00);
  uStack_e8 = 0;
  iVar2 = 1;
  func_0x000105c3f164(1,3,0,&puStack_100);
  func_0x000105c3e8ac();
  puStack_100 = (ulong *)((ulong)puStack_100 & 0xffffffffffffff00);
  uStack_a8 = 0;
  FUN_105c3b044();
  if (iVar2 != 0) {
    FUN_105c3b078(&puStack_100,&UNK_10f3327bd);
  }
  func_0x000105c3e9a0();
  uVar1 = (char)plVar7[0x2f] == '\x01';
  if ((bool)uVar1) {
    FUN_105c3b0a0(auStack_1b0,plVar7 + 0x28);
    uStack_178 = 1;
    FUN_105c3cdbc(auStack_450,auStack_1b0);
    func_0x000105c3eaf0();
    func_0x000105c3e70c();
  }
  else {
    func_0x000105c3e70c();
    (**(code **)(*plVar7 + 0x98))(auStack_1b0,plVar7);
    if ((uStack_178 & 1) == 0) {
      auStack_450[0] = 0;
      bStack_410 = 0;
    }
    else {
      FUN_105c3b0a0(&uStack_290,auStack_1b0);
      uStack_258 = 0;
      FUN_105c3cdbc(auStack_450,&uStack_290);
      func_0x00010b51ea44(&uStack_290);
    }
    func_0x000105c3e8ec();
  }
  FUN_105c3cd44(&puStack_100);
  if ((bStack_410 & 1) == 0) {
    func_0x000105c3ebac();
    (**(code **)(extraout_x8_00 + 0x30))();
    func_0x000105c3e838();
    func_0x000105c3ebac();
    (**(code **)(extraout_x8_01 + 0x28))();
    func_0x000105c3e838();
    goto LAB_105c3e280;
  }
  uVar1 = iStack_418 == 1;
  if ((bool)uVar1) {
    uStack_290 = 0;
    uStack_280 = CONCAT71(uStack_280._1_7_,1);
    plVar3 = plVar7 + 2;
    puStack_288 = param_1;
    FUN_105c3f2c0(plVar3,uStack_438 & 0xfffffffffffffffc);
    if (((ulong)plVar3 & 1) == 0) {
      FUN_105c403f0(plVar7 + 2,auStack_450);
    }
    else {
      FUN_105c3b0ac(&puStack_100,plVar7,auStack_450);
      uVar1 = cStack_50 == '\x01';
      if ((bool)uVar1) {
        FUN_105c3ceb8(auStack_1b0,&puStack_100);
        func_0x000105c3e9a0();
        FUN_105c3b544(plVar7 + 0x10,auStack_1b0);
        FUN_105c3b79c(plVar7 + 0x20,auStack_138);
        func_0x000105c3e70c();
        lVar8 = plVar7[0xd];
        puVar4 = &uStack_290;
        func_0x0001002acb3c(puVar4);
        FUN_105c42b70(lVar8,puVar4);
        FUN_105c3d4e0(auStack_1b0);
      }
      FUN_105c3d508(&puStack_100);
    }
  }
  else {
    puVar6 = auStack_450;
    FUN_105c3b0a0(auStack_488);
    FUN_105c4015c(auStack_340,plVar7 + 2);
    puStack_100 = (ulong *)((ulong)puStack_100 & 0xffffffffffffff00);
    uStack_e8 = 0;
    func_0x000105c3ebe8();
    func_0x000105c3ea50();
    func_0x000105c3e8ac();
    (**(code **)(*(long *)plVar7[0x3c] + 0x18))(&puStack_100);
    if ((bStack_f0 & 1) == 0) {
      (**(code **)(*(long *)plVar7[0x3c] + 0x20))(&uStack_290);
      puVar4 = &uStack_290;
      func_0x0001005d466c();
      puStack_100 = puVar4;
      puStack_f8 = puVar6;
      func_0x0001003a91d4(&UNK_10f332770);
      func_0x0001003a9204(auStack_1b0);
      func_0x0001002a82b4(&puStack_100,auStack_1b0);
      func_0x000105c3ebe8();
      func_0x000105c3e830();
      func_0x000105c3e8ac();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_290);
    }
    else {
      FUN_105c3d528(auStack_380,auStack_340);
      FUN_105c3b0a0(auStack_3b8,auStack_488);
      uStack_230 = 0;
      uStack_220 = 1;
      puStack_228 = param_1;
      func_0x000105c3ea88(&puStack_100);
      func_0x000105c3ea88(auStack_1b0);
      puStack_288 = puStack_228;
      uStack_290 = uStack_230;
      uStack_280 = CONCAT71(uStack_21f,uStack_220);
      plVar3 = plVar7;
      FUN_105c3b7d8(plVar7,&puStack_100,auStack_1b0,&uStack_290);
      func_0x000105c3eaf0();
      func_0x00010b51ea44(&puStack_100);
      if (((ulong)plVar3 & 1) == 0) {
        if ((bStack_348 & 1) == 0) {
          lVar8 = plVar7[0xd];
          puVar4 = &uStack_230;
          func_0x0001002acb3c(puVar4);
          FUN_105c42bd8(lVar8,puVar4);
        }
        else {
          FUN_105c3b0a0(&uStack_290,auStack_380);
          func_0x000105c3ea88(auStack_300);
          puStack_3e8 = puStack_228;
          uStack_3f0 = uStack_230;
          uStack_3e0 = CONCAT71(uStack_21f,uStack_220);
          FUN_105c3b7d8(plVar7,&uStack_290,auStack_300,&uStack_3f0);
          func_0x00010b51ea44(auStack_300);
          func_0x00010b51ea44(&uStack_290);
        }
      }
      func_0x00010b51ea44(auStack_3b8);
      FUN_105c3ce98(auStack_380);
      FUN_105c3b0a0(&uStack_3f0,auStack_488);
      uStack_408 = 0;
      uStack_3f8 = 1;
      plVar9 = (long *)plVar7[0x3c];
      puStack_400 = param_1;
      func_0x000105c3d584(auStack_1b0,&uStack_3f0);
      FUN_105c42720(&puStack_100,auStack_1b0);
      (**(code **)(*plVar9 + 0x10))(plVar9,&puStack_100);
      plVar3 = plVar9;
      func_0x000105c3e838();
      func_0x000105c3e8ec();
      if (((ulong)plVar9 & 1) == 0) {
        FUN_105c4015c(&puStack_100,plVar7 + 2);
        uStack_290 = uStack_290 & 0xffffffffffffff00;
        uStack_258 = uStack_258 & 0xffffff00;
        (**(code **)(*(long *)plVar7[0x3c] + 0x20))(auStack_2a8);
        func_0x000105c3e6cc(uStack_3c0);
        func_0x000105c3d59c(auStack_300);
        FUN_105c3ac2c(auStack_2c0,auStack_300);
        func_0x00010563bf9c(&uStack_230,auStack_2a8,auStack_2c0);
        func_0x0001003a91d4(&UNK_10f332746);
        func_0x000105c3ea80(auStack_248);
        func_0x0001002a82b4(&uStack_230,auStack_248);
        func_0x000105c3e830(&uStack_3f0,&uStack_290,5,9,in_x4,&uStack_230);
        func_0x0001001148fc(&uStack_230);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_248);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c0);
        FUN_105c3d5c0(auStack_300);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
        func_0x000105c3e9b0();
        FUN_105c42d78(plVar7[0xd],1);
        FUN_105c3ce98(&puStack_100);
      }
      else {
        func_0x000105c3e9a0();
        uVar1 = (char)plVar7[0x27] == '\x01';
        if ((bool)uVar1) {
          func_0x000105c3e8a0(plVar7[0x23]);
          func_0x000105c3e70c();
          if (((ulong)plVar3 & 1) != 0) goto LAB_105c3e214;
        }
        else {
          func_0x000105c3e70c();
        }
        FUN_105c403f0(plVar7 + 2,&uStack_3f0);
        lVar8 = plVar7[0xd];
        puVar5 = &uStack_408;
        func_0x0001002acb3c(puVar5);
        FUN_105c42ba4(lVar8,puVar5);
      }
LAB_105c3e214:
      func_0x00010b51ea44(&uStack_3f0);
    }
    FUN_105c3ce98(auStack_340);
    func_0x000105c3e9d0();
  }
  auStack_1b0[0] = 0;
  uStack_178 = uStack_178 & 0xffffff00;
  func_0x000105c3e9a0();
  func_0x000105c3d73c(auStack_1b0,plVar7 + 0x20);
  func_0x000105c3e70c();
  plVar7 = (long *)plVar7[0x3c];
  FUN_105c3d528(&uStack_290,auStack_1b0);
  FUN_105c42720(&puStack_100,&uStack_290);
  (**(code **)(*plVar7 + 0x28))(plVar7,&puStack_100);
  func_0x000105c3e838();
  func_0x000105c3e9b0();
  func_0x000105c3e8ec();
LAB_105c3e280:
  FUN_105c3e4e8(auStack_450);
  plVar3 = alStack_210;
  FUN_105c3cd44();
  func_0x000105c3e68c(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b51ea44(auStack_300);
    func_0x00010b51ea44(&uStack_290);
    func_0x00010b51ea44(auStack_3b8);
    FUN_105c3ce98(auStack_380);
    FUN_105c3ce98(auStack_340);
    func_0x000105c3e9d0();
    FUN_105c3e4e8(auStack_450);
    FUN_105c3cd44(alStack_210);
    func_0x000105c3e714();
    func_0x000105c3e7fc();
    func_0x000105c3e6ec(0x22);
    func_0x00010bd3f3dc();
    func_0x000105c3e904();
    return plVar7;
  }
  return plVar3;
}



/* Entry: 105c3e4ac; end: 105c3e4e7;  */

void FUN_105c3e4ac(void)

{
  func_0x000105c3e7fc();
  func_0x000105c3e6ec(0x22);
  func_0x00010bd3f3dc();
  func_0x000105c3e904();
  return;
}



/* Entry: 105c3e4e8; end: 105c3e507;  */

void FUN_105c3e4e8(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010b51ea44();
  }
  return;
}



/* Entry: 105c3e508; end: 105c3e663;  */

void FUN_105c3e508(undefined8 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong unaff_x21;
  uint uStack_a8;
  byte bStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  lVar3 = **(long **)*param_1;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x000105c3e840();
  (**(code **)(**(long **)(lVar3 + 0x1e0) + 0x20))(auStack_98);
  if (*(char *)(lVar3 + 0x138) == '\x01') {
    func_0x000105c3e6cc(*(undefined8 *)(lVar3 + 0x130));
    func_0x000105c3e8f4();
    unaff_x21 = (ulong)uStack_a8;
  }
  else {
    bStack_a0 = 0;
  }
  puVar1 = auStack_98;
  func_0x0001005d466c();
  uStack_40 = unaff_x21 & 0xffffffff;
  if ((bStack_a0 & 1) == 0) {
    uStack_40 = 0;
  }
  uStack_38 = 0;
  puStack_50 = puVar1;
  uStack_48 = param_2;
  func_0x0001003a91d4(&UNK_10f332706);
  func_0x0001003a9204(auStack_80);
  func_0x000100066230(&uStack_68,auStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  func_0x000105c3e7dc();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  func_0x000105c3e770();
  uVar2 = *(undefined8 *)(lVar3 + 0x68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&puStack_50,&uStack_68);
  FUN_105c42de0(uVar2,&puStack_50,1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_68);
  return;
}



/* Entry: 105c3e664; end: 105c3ec47;  */

void FUN_105c3e664(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  if (*param_1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000105c3ea60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)param_1[1])();
    return;
  }
  return;
}



/* Entry: 105c3ec48; end: 105c3f0a7;  */

void FUN_105c3ec48(long param_1,long param_2,uint param_3,uint param_4,uint param_5,
                  undefined8 param_6)

{
  uint uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [64];
  undefined1 auStack_240 [64];
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined2 uStack_1d8;
  undefined1 auStack_1d0 [24];
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined1 uStack_198;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  ulong uStack_178;
  undefined1 uStack_170;
  undefined1 auStack_168 [24];
  undefined1 uStack_150;
  ulong uStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 auStack_138 [24];
  undefined1 uStack_120;
  undefined1 auStack_118 [24];
  undefined1 uStack_100;
  long *plStack_f8;
  long alStack_f0 [2];
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
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010002b838(&uStack_c8,&UNK_10f332b02);
  uStack_a0 = uStack_b8;
  uStack_a8 = uStack_c0;
  uStack_b0 = uStack_c8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0xc;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x000100100fec(&uStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
  func_0x000100100ed0(alStack_f0);
  if (alStack_f0[0] != 0) {
    FUN_105c3af5c(&plStack_f8,alStack_f0);
    if (plStack_f8 != (long *)0x0) {
      plVar2 = plStack_f8;
      (**(code **)(*plStack_f8 + 0x20))(plStack_f8,&uStack_b0);
      if ((((uint)plVar2 ^ 0xffffffff) & 0x101) == 0) {
        ppuStack_1e8 = &PTR_DAT_110cee410;
        ppuStack_1e0 = &PTR_DAT_110cee478;
        uStack_1d8 = 0;
        auStack_1d0[0] = 0;
        uStack_1b8 = 0;
        auStack_1b0[0] = 0;
        uStack_198 = 0;
        uStack_190 = uStack_190 & 0xffffff00;
        uStack_18c = uStack_18c & 0xffffff00;
        uStack_188 = uStack_188 & 0xffffff00;
        uStack_184 = uStack_184 & 0xffffff00;
        uStack_180 = uStack_180 & 0xffffff00;
        uStack_17c = uStack_17c & 0xffffff00;
        uStack_178 = uStack_178 & 0xffffffffffffff00;
        uStack_170 = 0;
        auStack_168[0] = 0;
        uStack_150 = 0;
        uStack_148 = uStack_148 & 0xffffffffffffff00;
        uStack_140 = 0;
        auStack_138[0] = 0;
        uStack_120 = 0;
        auStack_118[0] = 0;
        uStack_100 = 0;
        if ((param_1 != 0) && (lVar6 = param_1, func_0x00010b51ec78(), lVar6 != 0)) {
          uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
          lVar6 = (long)*(char *)(uVar5 + 0x17);
          if (lVar6 < 0) {
            lVar6 = *(long *)(uVar5 + 8);
          }
          if (lVar6 != 0) {
            func_0x0001002a8234(auStack_1d0);
          }
          if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
            uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x30);
            if (uVar1 != 0) {
              uStack_170 = 1;
              uStack_178 = (ulong)uVar1;
            }
            func_0x000105c3d59c(auStack_240);
            FUN_105c3f0a8(&puStack_200,auStack_240);
            func_0x000105c3f25c(auStack_118);
            func_0x000105c3f248();
            FUN_105c3d5c0(auStack_240);
          }
        }
        if ((param_2 != 0) && (lVar6 = param_2, func_0x00010b51ec78(), lVar6 != 0)) {
          uVar5 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
          lVar6 = (long)*(char *)(uVar5 + 0x17);
          if (lVar6 < 0) {
            lVar6 = *(long *)(uVar5 + 8);
          }
          if (lVar6 != 0) {
            func_0x0001002a8234(auStack_168);
          }
          if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
            uVar1 = *(uint *)(*(long *)(param_2 + 0x30) + 0x30);
            if (uVar1 != 0) {
              uStack_140 = 1;
              uStack_148 = (ulong)uVar1;
            }
            func_0x000105c3d59c(auStack_280);
            FUN_105c3f0a8(&puStack_200,auStack_280);
            func_0x000105c3f25c(auStack_138);
            func_0x000105c3f248();
            FUN_105c3d5c0(auStack_280);
          }
        }
        func_0x000104bff97c(&puStack_200,param_6,"");
        puVar3 = auStack_1b0;
        func_0x000105c3f25c(puVar3);
        func_0x000105c3f248();
        uStack_18c = CONCAT31(uStack_18c._1_3_,1);
        uStack_184 = CONCAT31(uStack_184._1_3_,1);
        uStack_17c = CONCAT31(uStack_17c._1_3_,1);
        uStack_190 = param_3;
        uStack_188 = param_4;
        uStack_180 = param_5;
        func_0x00010044fab4();
        puVar4 = (undefined8 *)0x108;
        __Znwm();
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = &PTR_FUN_1108dec10;
        puVar4[3] = &PTR_DAT_110cee410;
        puVar4[4] = &PTR_DAT_110cee478;
        *(undefined2 *)(puVar4 + 5) = uStack_1d8;
        func_0x00010028af84(puVar4 + 6,auStack_1d0);
        func_0x00010028af84(puVar4 + 10,auStack_1b0);
        puVar4[0xf] = CONCAT44(uStack_184,uStack_188);
        puVar4[0xe] = CONCAT44(uStack_18c,uStack_190);
        puVar4[0x11] = uStack_178;
        puVar4[0x10] = CONCAT44(uStack_17c,uStack_180);
        *(undefined1 *)(puVar4 + 0x12) = uStack_170;
        func_0x00010028af84(puVar4 + 0x13,auStack_168);
        puVar4[0x18] = CONCAT71(uStack_13f,uStack_140);
        puVar4[0x17] = uStack_148;
        func_0x00010028af84(puVar4 + 0x19,auStack_138);
        func_0x00010028af84(puVar4 + 0x1d,auStack_118);
        uStack_290 = 0;
        uStack_288 = 0;
        puStack_200 = puVar4 + 3;
        puStack_1f8 = puVar4;
        func_0x00010b4a72ec(puVar3,&puStack_200);
        func_0x000105979594(&puStack_200);
        FUN_105c3f210(&uStack_290);
        FUN_105c3f180(&ppuStack_1e8);
      }
      plVar2 = plStack_f8;
      plStack_f8 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        func_0x000105c3f250();
      }
    }
  }
  func_0x0001000df75c(alStack_f0);
  func_0x000100114924(&uStack_b0);
  return;
}



/* Entry: 105c3f0a8; end: 105c3f153;  */

undefined * FUN_105c3f0a8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 unaff_x19;
  undefined *unaff_x20;
  
  if ((*(byte *)(param_2 + 0x38) & 1) != 0) {
    puVar1 = &UNK_10f3326fa;
    func_0x0001003a91d4(&UNK_10f3326fa);
    func_0x0001003a9204(param_1);
    return puVar1;
  }
  puVar1 = &UNK_10f3326f1;
  func_0x00010002b82c(param_1,&UNK_10f3326f1);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(unaff_x20,unaff_x19,puVar1);
  return unaff_x20;
}



/* Entry: 105c3f154; end: 105c3f17f;  */

void FUN_105c3f154(long param_1,long param_2,uint param_3,uint param_4,uint param_5,
                  undefined8 param_6)

{
  uint uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [64];
  undefined1 auStack_240 [64];
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined2 uStack_1d8;
  undefined1 auStack_1d0 [24];
  undefined1 uStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined1 uStack_198;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  ulong uStack_178;
  undefined1 uStack_170;
  undefined1 auStack_168 [24];
  undefined1 uStack_150;
  ulong uStack_148;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 auStack_138 [24];
  undefined1 uStack_120;
  undefined1 auStack_118 [24];
  undefined1 uStack_100;
  long *plStack_f8;
  long alStack_f0 [2];
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
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (*(char *)(param_2 + 0x38) == '\0') {
    param_2 = 0;
  }
  func_0x00010002b838(&uStack_c8,&UNK_10f332b02);
  uStack_a0 = uStack_b8;
  uStack_a8 = uStack_c0;
  uStack_b0 = uStack_c8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0xc;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x000100100fec(&uStack_e0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c8);
  func_0x000100100ed0(alStack_f0);
  if (alStack_f0[0] != 0) {
    FUN_105c3af5c(&plStack_f8,alStack_f0);
    if (plStack_f8 != (long *)0x0) {
      plVar2 = plStack_f8;
      (**(code **)(*plStack_f8 + 0x20))(plStack_f8,&uStack_b0);
      if ((((uint)plVar2 ^ 0xffffffff) & 0x101) == 0) {
        ppuStack_1e8 = &PTR_DAT_110cee410;
        ppuStack_1e0 = &PTR_DAT_110cee478;
        uStack_1d8 = 0;
        auStack_1d0[0] = 0;
        uStack_1b8 = 0;
        auStack_1b0[0] = 0;
        uStack_198 = 0;
        uStack_190 = uStack_190 & 0xffffff00;
        uStack_18c = uStack_18c & 0xffffff00;
        uStack_188 = uStack_188 & 0xffffff00;
        uStack_184 = uStack_184 & 0xffffff00;
        uStack_180 = uStack_180 & 0xffffff00;
        uStack_17c = uStack_17c & 0xffffff00;
        uStack_178 = uStack_178 & 0xffffffffffffff00;
        uStack_170 = 0;
        auStack_168[0] = 0;
        uStack_150 = 0;
        uStack_148 = uStack_148 & 0xffffffffffffff00;
        uStack_140 = 0;
        auStack_138[0] = 0;
        uStack_120 = 0;
        auStack_118[0] = 0;
        uStack_100 = 0;
        if ((param_1 != 0) && (lVar6 = param_1, func_0x00010b51ec78(), lVar6 != 0)) {
          uVar5 = *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffc;
          lVar6 = (long)*(char *)(uVar5 + 0x17);
          if (lVar6 < 0) {
            lVar6 = *(long *)(uVar5 + 8);
          }
          if (lVar6 != 0) {
            func_0x0001002a8234(auStack_1d0);
          }
          if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
            uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x30);
            if (uVar1 != 0) {
              uStack_170 = 1;
              uStack_178 = (ulong)uVar1;
            }
            func_0x000105c3d59c(auStack_240);
            FUN_105c3f0a8(&puStack_200,auStack_240);
            func_0x000105c3f25c(auStack_118);
            func_0x000105c3f248();
            FUN_105c3d5c0(auStack_240);
          }
        }
        if ((param_2 != 0) && (lVar6 = param_2, func_0x00010b51ec78(), lVar6 != 0)) {
          uVar5 = *(ulong *)(param_2 + 0x20) & 0xfffffffffffffffc;
          lVar6 = (long)*(char *)(uVar5 + 0x17);
          if (lVar6 < 0) {
            lVar6 = *(long *)(uVar5 + 8);
          }
          if (lVar6 != 0) {
            func_0x0001002a8234(auStack_168);
          }
          if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
            uVar1 = *(uint *)(*(long *)(param_2 + 0x30) + 0x30);
            if (uVar1 != 0) {
              uStack_140 = 1;
              uStack_148 = (ulong)uVar1;
            }
            func_0x000105c3d59c(auStack_280);
            FUN_105c3f0a8(&puStack_200,auStack_280);
            func_0x000105c3f25c(auStack_138);
            func_0x000105c3f248();
            FUN_105c3d5c0(auStack_280);
          }
        }
        func_0x000104bff97c(&puStack_200,param_6,"");
        puVar3 = auStack_1b0;
        func_0x000105c3f25c(puVar3);
        func_0x000105c3f248();
        uStack_18c = CONCAT31(uStack_18c._1_3_,1);
        uStack_184 = CONCAT31(uStack_184._1_3_,1);
        uStack_17c = CONCAT31(uStack_17c._1_3_,1);
        uStack_190 = param_3;
        uStack_188 = param_4;
        uStack_180 = param_5;
        func_0x00010044fab4();
        puVar4 = (undefined8 *)0x108;
        __Znwm();
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = &PTR_FUN_1108dec10;
        puVar4[3] = &PTR_DAT_110cee410;
        puVar4[4] = &PTR_DAT_110cee478;
        *(undefined2 *)(puVar4 + 5) = uStack_1d8;
        func_0x00010028af84(puVar4 + 6,auStack_1d0);
        func_0x00010028af84(puVar4 + 10,auStack_1b0);
        puVar4[0xf] = CONCAT44(uStack_184,uStack_188);
        puVar4[0xe] = CONCAT44(uStack_18c,uStack_190);
        puVar4[0x11] = uStack_178;
        puVar4[0x10] = CONCAT44(uStack_17c,uStack_180);
        *(undefined1 *)(puVar4 + 0x12) = uStack_170;
        func_0x00010028af84(puVar4 + 0x13,auStack_168);
        puVar4[0x18] = CONCAT71(uStack_13f,uStack_140);
        puVar4[0x17] = uStack_148;
        func_0x00010028af84(puVar4 + 0x19,auStack_138);
        func_0x00010028af84(puVar4 + 0x1d,auStack_118);
        uStack_290 = 0;
        uStack_288 = 0;
        puStack_200 = puVar4 + 3;
        puStack_1f8 = puVar4;
        func_0x00010b4a72ec(puVar3,&puStack_200);
        func_0x000105979594(&puStack_200);
        FUN_105c3f210(&uStack_290);
        FUN_105c3f180(&ppuStack_1e8);
      }
      plVar2 = plStack_f8;
      plStack_f8 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        func_0x000105c3f250();
      }
    }
  }
  func_0x0001000df75c(alStack_f0);
  func_0x000100114924(&uStack_b0);
  return;
}



/* Entry: 105c3f180; end: 105c3f1d7;  */

undefined8 * FUN_105c3f180(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cee410;
  param_1[1] = &PTR_DAT_110cee478;
  func_0x0001001148fc(param_1 + 0x1a);
  func_0x0001001148fc(param_1 + 0x16);
  func_0x0001001148fc(param_1 + 0x10);
  func_0x0001001148fc(param_1 + 7);
  func_0x0001001148fc(param_1 + 3);
  return param_1;
}



/* Entry: 105c3f1d8; end: 105c3f1db;  */

void FUN_105c3f1d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108dec10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c3f1dc; end: 105c3f1ef;  */

void FUN_105c3f1dc(void)

{
  func_0x000105c3f200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c3f1f0; end: 105c3f20f;  */

void FUN_105c3f1f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105c3f1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 105c3f210; end: 105c3f23b;  */

long FUN_105c3f210(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 105c3f23c; end: 105c3f2bf;  */

void FUN_105c3f23c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000090);
  return;
}



/* Entry: 105c3f2c0; end: 105c3f353;  */

long * FUN_105c3f2c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long *extraout_x8_02;
  long lVar6;
  int extraout_w10;
  long lVar7;
  long *plStack_198;
  undefined1 ***pppuStack_190;
  long **pplStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  long *aplStack_158 [2];
  undefined1 auStack_148 [16];
  long alStack_138 [11];
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  byte abStack_a0 [24];
  undefined1 auStack_88 [88];
  undefined1 uStack_30;
  undefined8 uStack_28;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000105c421a4();
  iVar1 = (int)uVar2;
  auStack_88[0] = 0;
  uStack_30 = 0;
  uStack_28 = extraout_x8;
  FUN_105c3b044();
  if (iVar1 != 0) {
    FUN_105c3c1f0(auStack_88,&UNK_10f332b2c);
  }
  FUN_105c3f354(abStack_a0,param_1,param_2);
  FUN_105c3cd44();
  func_0x000105c42164(uStack_28);
  if ((bool)in_ZR) {
    return (long *)(ulong)abStack_a0[0];
  }
  ___stack_chk_fail();
  iVar1 = (int)auStack_88;
  FUN_105c3cd44();
  func_0x000105c4219c();
  pcStack_a8 = FUN_105c3f354;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000105c42218();
  func_0x000105c421a4();
  alStack_138[0]._0_1_ = 0;
  uStack_e0 = 0;
  uStack_d8 = extraout_x8_01;
  FUN_105c3b044();
  if (iVar1 != 0) {
    FUN_105c3c1f0(alStack_138,&UNK_10f332b4a);
  }
  func_0x00010b152000(auStack_148);
  func_0x000105c4257c(aplStack_158);
  (**(code **)(*aplStack_158[0] + 0x28))(extraout_x8_00,aplStack_158[0],auStack_148);
  func_0x0001005f1e7c(aplStack_158);
  func_0x00010529fde0(auStack_148);
  plVar3 = alStack_138;
  FUN_105c3cd44();
  func_0x000105c42164(uStack_d8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001005f1e7c(aplStack_158);
    func_0x00010529fde0(auStack_148);
    plVar4 = alStack_138;
    FUN_105c3cd44();
    func_0x000105c4219c();
    pcStack_168 = FUN_105c3f430;
    plVar5 = plVar4 + 3;
    plStack_198 = plVar4;
    uStack_180 = param_1;
    plStack_178 = plVar3;
    ppuStack_170 = &puStack_b0;
    if (*plVar5 != -1) {
      pplStack_188 = &plStack_198;
      pppuStack_190 = (undefined1 ***)&pplStack_188;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(plVar5,&pppuStack_190,FUN_105c41cb4);
    }
    lVar6 = plVar4[5];
    lVar7 = plVar4[4];
    extraout_x8_02[1] = plVar4[5];
    *extraout_x8_02 = lVar7;
    if (lVar6 != 0) {
      do {
        func_0x000105c42178();
      } while (extraout_w10 != 0);
    }
    return plVar5;
  }
  return plVar3;
}



/* Entry: 105c3f354; end: 105c3f42f;  */

void FUN_105c3f354(int param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined1 *puStack_f8;
  undefined1 ***pppuStack_f0;
  undefined1 **ppuStack_e8;
  long *aplStack_b8 [2];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [88];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  func_0x000105c42218();
  func_0x000105c421a4();
  auStack_98[0] = 0;
  uStack_40 = 0;
  uStack_38 = extraout_x8_00;
  FUN_105c3b044();
  if (param_1 != 0) {
    FUN_105c3c1f0(auStack_98,&UNK_10f332b4a);
  }
  func_0x00010b152000(auStack_a8);
  func_0x000105c4257c(aplStack_b8);
  (**(code **)(*aplStack_b8[0] + 0x28))(extraout_x8,aplStack_b8[0],auStack_a8);
  func_0x0001005f1e7c(aplStack_b8);
  func_0x00010529fde0(auStack_a8);
  FUN_105c3cd44();
  func_0x000105c42164(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001005f1e7c(aplStack_b8);
    func_0x00010529fde0(auStack_a8);
    puVar1 = auStack_98;
    FUN_105c3cd44();
    func_0x000105c4219c();
    puStack_f8 = puVar1;
    if (*(long *)(puVar1 + 0x18) != -1) {
      ppuStack_e8 = &puStack_f8;
      pppuStack_f0 = &ppuStack_e8;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(puVar1 + 0x18,&pppuStack_f0,FUN_105c41cb4);
    }
    lVar2 = *(long *)(puVar1 + 0x28);
    uVar3 = *(undefined8 *)(puVar1 + 0x20);
    extraout_x8_01[1] = *(undefined8 *)(puVar1 + 0x28);
    *extraout_x8_01 = uVar3;
    if (lVar2 != 0) {
      do {
        func_0x000105c42178();
      } while (extraout_w10 != 0);
    }
    return;
  }
  return;
}



/* Entry: 105c3f430; end: 105c3f49f;  */

void FUN_105c3f430(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  long lStack_38;
  undefined8 **ppuStack_30;
  long *plStack_28;
  
  lStack_38 = param_2;
  if (*(long *)(param_2 + 0x18) != -1) {
    plStack_28 = &lStack_38;
    ppuStack_30 = &plStack_28;
    __ZNSt3__111__call_onceERVmPvPFvS2_E((long *)(param_2 + 0x18),&ppuStack_30,FUN_105c41cb4);
  }
  lVar1 = *(long *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000105c42178();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 105c3f4a0; end: 105c3fb97;  */

void FUN_105c3f4a0(ulong *param_1,ulong param_2,long param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  int iVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long **pplVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar11;
  ulong uVar12;
  long *plStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  long *plStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined1 uStack_1f0;
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [16];
  undefined8 uStack_1c0;
  ulong *puStack_1b8;
  undefined1 uStack_1b0;
  undefined1 auStack_1a8 [56];
  undefined1 *puStack_170;
  undefined *puStack_168;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 uStack_140;
  undefined auStack_138 [24];
  char cStack_120;
  char cStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte bStack_c8;
  undefined1 auStack_b8 [88];
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  uVar10 = param_2;
  func_0x000105c421a4();
  iVar3 = (int)uVar10;
  auStack_b8[0] = 0;
  uStack_60 = 0;
  uStack_58 = extraout_x8;
  FUN_105c3b044();
  if (iVar3 != 0) {
    FUN_105c3b078(auStack_b8,&UNK_10f332b68);
  }
  FUN_105c42898(*(undefined8 *)(param_2 + 0x10),1);
  func_0x000100100ed0(&plStack_250);
  if (plStack_250 == (long *)0x0) {
    func_0x000105c42560();
LAB_105c3f684:
    uVar10 = param_2;
    FUN_105c3f2c0(param_2,*(ulong *)(param_3 + 0x18) & 0xfffffffffffffffc);
    if ((uVar10 & 1) == 0) {
      func_0x000105c423ac();
      func_0x00010002b838(&uStack_158,&UNK_10f332b8c);
      uStack_140 = 1;
      func_0x000105c42144();
      func_0x000105c4223c();
      func_0x000105c42224();
    }
    else {
      func_0x000105c423ac();
      uStack_158 = uStack_158 & 0xffffffffffffff00;
      uStack_140 = 0;
      func_0x000105c42188();
      func_0x000105c4229c();
      func_0x000105c4223c();
      func_0x000105c42224();
      plStack_250 = (long *)0x0;
      __ZNSt3__16chrono12steady_clock3nowEv();
      uStack_240 = CONCAT71(uStack_240._1_7_,1);
      uStack_248 = uVar10;
      func_0x000105c42524(&uStack_1c0);
      func_0x000105c424bc(auStack_1a8);
      FUN_105c3fb98(auStack_1e8,param_2,&uStack_1c0,auStack_1a8);
      func_0x00010b51ea44(auStack_1a8);
      func_0x0001052a460c(&uStack_110,auStack_1e8);
      in_ZR = (char)uStack_d0 == '\x01';
      if ((bool)in_ZR) {
        func_0x000105c42510();
        plStack_228 = (long *)((ulong)plStack_228 & 0xffffffffffffff00);
        uStack_210 = 0;
        func_0x000105c421d0(param_3,&uStack_158);
        func_0x000105c422cc();
        func_0x000105c423fc();
        uVar11 = *(undefined8 *)(param_2 + 0x10);
        pplVar7 = &plStack_250;
        func_0x0001002acb3c(pplVar7);
        FUN_105c42900(uVar11,pplVar7);
        puVar5 = &uStack_110;
        FUN_105c40364();
        uVar10 = puVar5[1];
        uVar12 = *puVar5;
        param_1[1] = puVar5[1];
        *param_1 = uVar12;
        if (uVar10 != 0) {
          do {
            func_0x000105c42178();
          } while (extraout_w10_00 != 0);
        }
        *(undefined1 *)(param_1 + 2) = 1;
        func_0x000105c42568();
        func_0x000105c425f0();
        func_0x000105c424f0();
        goto LAB_105c3f8e0;
      }
      func_0x000105c42568();
      func_0x000105c423ac();
      FUN_105c4097c(&uStack_158,&UNK_10f332bc8);
      func_0x000105c42144();
      func_0x000105c4223c();
      func_0x000105c42224();
      func_0x000105c425f0();
      func_0x000105c424f0();
    }
LAB_105c3f8d8:
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    func_0x00010002b838(&uStack_158,&UNK_10ddcc172);
    uStack_100 = uStack_148;
    uStack_108 = uStack_150;
    uStack_110 = uStack_158;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_158 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0xc;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    plStack_228 = (long *)0x0;
    func_0x000100100fec(&plStack_228);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_158);
    plVar4 = plStack_250;
    (**(code **)(*plStack_250 + 0x38))(plStack_250,&uStack_110);
    puVar5 = &uStack_110;
    func_0x000100114924();
    func_0x000105c42560();
    if ((((uint)plVar4 ^ 0xffffffff) & 0x101) != 0) goto LAB_105c3f684;
    func_0x000105c423ac();
    uStack_158 = uStack_158 & 0xffffffffffffff00;
    uStack_140 = 0;
    func_0x000105c42188();
    func_0x000105c4229c();
    func_0x000105c4223c();
    func_0x000105c42224();
    uStack_1c0 = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_1b0 = 1;
    puStack_1b8 = puVar5;
    func_0x000105c42524(auStack_1d0);
    FUN_105c3f430(&plStack_228,param_2);
    uStack_158 = uStack_158 & 0xffffffffffffff00;
    uStack_148 = uStack_148 & 0xffffffffffffff00;
    (**(code **)(*plStack_228 + 0x50))(&uStack_110,plStack_228,auStack_1d0,&uStack_158);
    func_0x0001005f1e7c(&plStack_228);
    bVar1 = bStack_c8;
    in_ZR = bStack_c8 == 1;
    if ((bool)in_ZR) {
      func_0x000105c42510();
      plStack_228 = (long *)((ulong)plStack_228 & 0xffffffffffffff00);
      uStack_210 = 0;
      func_0x000105c421d0(param_3,&uStack_158);
      func_0x000105c422cc();
      func_0x000105c423fc();
      uVar11 = *(undefined8 *)(param_2 + 0x10);
      puVar6 = &uStack_1c0;
      func_0x0001002acb3c(puVar6);
      FUN_105c42900(uVar11,puVar6);
      if ((bStack_c8 & 1) == 0) goto LAB_105c3f914;
      param_1[1] = uStack_108;
      *param_1 = uStack_110;
      if (uStack_108 != 0) {
        do {
          func_0x000105c42178();
        } while (extraout_w10 != 0);
      }
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      func_0x000105c425c4();
      in_ZR = cStack_118 == '\x01';
      if ((bool)in_ZR) {
        in_ZR = cStack_120 == '\x01';
        if (!(bool)in_ZR) {
          puVar9 = &UNK_10f332bed;
          goto LAB_105c3f838;
        }
        puVar9 = auStack_138;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1e8);
      }
      else {
        puVar9 = &UNK_10f332c06;
LAB_105c3f838:
        func_0x00010002b838(auStack_1e8);
      }
      plStack_228 = (long *)((ulong)plStack_228 & 0xffffffffffffff00);
      uStack_1f0 = 0;
      puVar8 = auStack_1e8;
      func_0x0001005d466c();
      puStack_170 = puVar8;
      puStack_168 = puVar9;
      func_0x0001003a91d4(&UNK_10f332c25);
      func_0x0001003a9204(&plStack_268);
      uStack_248 = uStack_260;
      plStack_250 = plStack_268;
      uStack_240 = uStack_258;
      plStack_268 = (long *)0x0;
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_238 = 1;
      func_0x000105c42144();
      func_0x0001001148fc(&plStack_250);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_268);
      FUN_105c3ce98(&plStack_228);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
      func_0x0001052a038c(&uStack_158);
    }
    func_0x0001052a08f8(&uStack_110);
    func_0x00010529fde0(auStack_1d0);
    if ((bVar1 & 1) == 0) goto LAB_105c3f8d8;
  }
LAB_105c3f8e0:
  FUN_105c3cd44(auStack_b8);
  func_0x000105c42164(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_105c3f914:
  uVar11 = 0x50;
  ___cxa_allocate_exception(0x50);
  func_0x000105c425c4();
  func_0x0001052a07a8(uVar11,&uStack_158);
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x105c3f948);
  (*pcVar2)();
}



/* Entry: 105c3fb98; end: 105c4015b;  */

void FUN_105c3fb98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  long extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puStack_d0;
  long *plStack_c8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  long lStack_a8;
  undefined1 uStack_78;
  undefined8 *apuStack_70 [3];
  undefined8 uStack_58;
  
  func_0x000105c42218();
  puVar3 = (undefined8 *)0x3a0;
  __Znwm();
  *puVar3 = FUN_105c41d34;
  puVar3[1] = FUN_105c420d0;
  puVar3[0x72] = unaff_x20;
  FUN_105c3b0a0(puVar3 + 0x41,param_3);
  func_0x000105c40d24(puVar3 + 2);
  puVar4 = puVar3 + 2;
  FUN_105c407c0(extraout_x8);
  *(undefined1 *)(puVar3 + 0x23) = 0;
  *(undefined1 *)(puVar3 + 0x2e) = 0;
  FUN_105c3b044();
  if ((int)puVar4 != 0) {
    FUN_105c3cce4(puVar3 + 0x23);
    puVar3[0x23] = 0;
    puVar3[0x24] = 0;
    puVar3[0x25] = 0;
    puVar3[0x26] = &UNK_10f332c73;
    puVar3[0x27] = 0x1f;
    *(undefined1 *)(puVar3 + 0x28) = 0;
    *(undefined1 *)(puVar3 + 0x29) = 0;
    func_0x00010bd3f3dc(puVar3 + 0x2a,&UNK_10f332c73,0x1f);
    puVar4 = puVar3 + 0x23;
    func_0x00010b9a7630();
    *(undefined1 *)(puVar3 + 0x2e) = 1;
  }
  puVar10 = puVar3 + 0x58;
  puVar5 = puVar3 + 0x5e;
  puVar7 = puVar3 + 0x61;
  *puVar10 = 0;
  puVar3[0x59] = 0;
  *(undefined1 *)(puVar3 + 0x5a) = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar3[0x59] = puVar4;
  *(undefined1 *)(puVar3 + 0x5a) = 1;
  puVar3[0x5f] = 0;
  puVar3[0x60] = 0;
  *puVar5 = 0;
  *(undefined1 *)(puVar3 + 0x48) = 0;
  *(undefined1 *)(puVar3 + 0x4b) = 0;
  *(undefined1 *)(puVar3 + 0x4c) = 0;
  *(undefined1 *)(puVar3 + 0x4f) = 0;
  *(undefined4 *)(puVar3 + 0x14) = 0x2a;
  *(undefined1 *)((long)puVar3 + 0xa4) = 0;
  *(undefined4 *)(puVar3 + 0x15) = 0;
  puVar3[0x5c] = 0;
  puVar3[0x5d] = 0;
  puVar3[0x5b] = 0;
  *(undefined1 *)(puVar3 + 0x1e) = 0;
  *(undefined1 *)(puVar3 + 0x1f) = 0;
  *(undefined1 *)(puVar3 + 0x22) = 0;
  *(undefined8 *)((long)puVar3 + 0xd1) = 0;
  *(undefined8 *)((long)puVar3 + 0xc9) = 0;
  puVar3[0x17] = 0;
  puVar3[0x16] = 0;
  puVar3[0x19] = 0;
  puVar3[0x18] = 0;
  func_0x0001001148fc(puVar3 + 0x4c);
  func_0x0001001148fc(puVar3 + 0x48);
  func_0x0001000e30f4(puVar3 + 0x5b);
  func_0x0001000e30f4();
  func_0x000105c42570();
  puVar3[0x62] = puVar5;
  *(undefined1 *)(puVar3 + 99) = 1;
  func_0x000105c4257c(&uStack_b0);
  puVar4 = puVar3 + 0x70;
  (**(code **)(*(long *)CONCAT71(uStack_af,uStack_b0) + 0x10))
            (puVar4,(long *)CONCAT71(uStack_af,uStack_b0),puVar3 + 0x14);
  plVar1 = puVar3 + 0x38;
  func_0x0001005f1e7c(&uStack_b0);
  (**(code **)(*(long *)*puVar4 + 0x18))(plVar1);
  plVar6 = plVar1;
  FUN_105c413d0();
  puStack_d0 = puVar3;
  if (((ulong)plVar6 & 1) == 0) {
    *(undefined1 *)(puVar3 + 0x73) = 0;
    plStack_c8 = plVar1;
    FUN_105c4145c(&uStack_b0,plVar1,&puStack_d0);
    if (lStack_a8 == 0) {
      return;
    }
    do {
      func_0x000105c4244c();
      lVar11 = extraout_x9;
    } while (extraout_w11 != 0);
  }
  else {
    FUN_105c407d8(puVar3 + 0x2f,plVar1);
    lVar11 = puVar3[0x72];
    func_0x0001052a4560(plVar1);
    uVar12 = *(undefined8 *)(lVar11 + 0x10);
    func_0x0001002acb3c(puVar7);
    FUN_105c42d10(uVar12,puVar7);
    puVar5 = puVar3 + 100;
    func_0x000105c4252c();
    puVar7 = puVar3 + 0x50;
    uVar12 = *puVar5;
    puVar3[0x51] = puVar5[1];
    *puVar7 = uVar12;
    puVar3[0x52] = puVar5[2];
    func_0x000105c42284();
    func_0x000105c42600();
    puVar5 = puVar3 + 0x41;
    func_0x00010b51ec78(puVar5);
    func_0x000100291d50(puVar3 + 0x6a,puVar5);
    puVar5 = puVar3 + 0x41;
    func_0x00010b4d1758(puVar5,puVar3[0x6a],*(int *)(puVar3 + 0x6b) - (int)puVar3[0x6a]);
    puVar8 = puVar3 + 0x6d;
    *puVar8 = 0;
    puVar3[0x6e] = 0;
    *(undefined1 *)(puVar3 + 0x6f) = 0;
    __ZNSt3__16chrono12steady_clock3nowEv();
    puVar3[0x6e] = puVar5;
    *(undefined1 *)(puVar3 + 0x6f) = 1;
    plVar13 = (long *)puVar3[0x70];
    func_0x000105c424f8();
    plVar6 = puVar3 + 0x12;
    (**(code **)(*plVar13 + 0x38))(plVar6,plVar13,puVar7,puVar3 + 0x67,puVar3 + 0x54);
    plVar13 = plVar6;
    FUN_105c417a8();
    if (((ulong)plVar13 & 1) != 0) {
      FUN_105c40888(plVar1,plVar6);
      func_0x0001052a55c0(plVar6);
      func_0x000105c422fc();
      uVar12 = *(undefined8 *)(puVar3[0x72] + 0x10);
      func_0x0001002acb3c(puVar8);
      FUN_105c42d44(uVar12,puVar8);
      uVar2 = 0;
      if (*(char *)(puVar3 + 0x40) == '\x01') {
        FUN_105c42a04(*(undefined8 *)(puVar3[0x72] + 0x10),1);
        uVar2 = *(char *)(puVar3 + 0x3f) == '\x01';
        if ((bool)uVar2) {
          puVar5 = puVar3 + 0x3c;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b0);
        }
        else {
          puVar5 = (undefined8 *)&DAT_10f332cb8;
          func_0x00010002b838(&uStack_b0);
        }
        puVar9 = &uStack_b0;
        func_0x0001005d466c();
        *plVar6 = (long)puVar9;
        puVar3[0x13] = puVar5;
        func_0x000105c425dc();
        func_0x0001003a9204(apuStack_70);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
        uStack_b0 = 0;
        uStack_78 = 0;
        func_0x0001002a82b4(&puStack_d0,apuStack_70);
        func_0x000105c421c0(puVar3 + 0x41,&uStack_b0);
        func_0x000105c423f4();
        FUN_105c3ce98(&uStack_b0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_70);
      }
      uVar12 = *(undefined8 *)(puVar3[0x72] + 0x10);
      func_0x0001002acb3c();
      FUN_105c42cdc(uVar12);
      func_0x000105c4258c();
      func_0x0001052a038c(plVar1);
      func_0x000105c42304();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar7);
      func_0x000105c4231c();
      func_0x00010529fe38(puVar4);
      func_0x000105c42314();
      func_0x000105c422f4();
      func_0x000105c423d0();
      if ((bool)uVar2) {
        apuStack_70[0] = puVar10;
        FUN_105c4120c(puVar3 + 2,apuStack_70);
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&uStack_58);
        apuStack_70[0] = &uStack_58;
        FUN_105c410b8(puVar3 + 2,apuStack_70);
        __ZNSt13exception_ptrD1Ev(&uStack_58);
      }
      func_0x000105c42368();
      func_0x000105c4238c();
      func_0x000105c42540();
      return;
    }
    *(undefined1 *)(puVar3 + 0x73) = 1;
    plStack_c8 = plVar6;
    FUN_105c41834(&uStack_b0,plVar6,&puStack_d0);
    if (lStack_a8 == 0) {
      return;
    }
    do {
      func_0x000105c4244c();
      lVar11 = extraout_x9_00;
    } while (extraout_w11_00 != 0);
  }
  if (lVar11 == 0) {
    func_0x000105c4240c();
    __ZNSt3__119__shared_weak_count14__release_weakEv(lStack_a8);
  }
  return;
}



/* Entry: 105c4015c; end: 105c40363;  */

undefined8 * FUN_105c4015c(undefined1 *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  undefined1 auStack_1c0 [64];
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  long lStack_118;
  long lStack_110;
  char cStack_100;
  long *aplStack_f8 [2];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 uStack_a0;
  undefined1 auStack_98 [88];
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = 0;
  puVar2 = param_2;
  func_0x000105c421a4();
  auStack_98[0] = 0;
  uStack_40 = 0;
  uStack_38 = extraout_x8;
  FUN_105c3b044();
  if ((int)puVar2 != 0) {
    puVar2 = auStack_98;
    FUN_105c3c1f0(puVar2,&UNK_10f332cc6);
  }
  uStack_b0 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_a0 = 1;
  puStack_a8 = puVar2;
  func_0x00010002b838(&uStack_e8,&UNK_10ddcc159);
  uStack_c8 = uStack_e0;
  uStack_d0 = uStack_e8;
  uStack_c0 = uStack_d8;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_e8 = 0;
  uStack_b8 = 0x2a;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_e8);
  func_0x000105c4257c(&ppuStack_160);
  (**(code **)(*ppuStack_160 + 0x40))(aplStack_f8);
  func_0x000105c423ec();
  if (aplStack_f8[0] == (long *)0x0) {
    *param_1 = 0;
    param_1[0x38] = 0;
    goto LAB_105c402d8;
  }
  (**(code **)(*aplStack_f8[0] + 0x20))(auStack_128,aplStack_f8[0],&uStack_d0);
  in_ZR = cStack_100 == '\x01';
  if ((bool)in_ZR) {
    in_ZR = lStack_118 == lStack_110;
    if ((bool)in_ZR) goto LAB_105c402a8;
    uStack_150 = 0;
    uStack_158 = 0;
    ppuStack_160 = &PTR_DAT_110cfbcd0;
    puStack_148 = &DAT_11383d918;
    puStack_140 = &DAT_11383d918;
    puStack_138 = &DAT_11383d918;
    uStack_130 = 0;
    func_0x00010006369c(&ppuStack_160,lStack_118,(int)lStack_110 - (int)lStack_118);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      param_1[0x38] = 0;
    }
    else {
      param_2 = *(undefined1 **)(param_2 + 0x10);
      puVar4 = &uStack_b0;
      func_0x0001002acb3c(puVar4);
      FUN_105c42ca8(param_2,puVar4);
      FUN_105c3d638(param_1,&ppuStack_160);
    }
    func_0x00010b51ea44(&ppuStack_160);
  }
  else {
LAB_105c402a8:
    *param_1 = 0;
    param_1[0x38] = 0;
  }
  func_0x0001052a8008(auStack_128);
LAB_105c402d8:
  func_0x0001052a0348(aplStack_f8);
  puVar4 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar4);
  func_0x000105c42394();
  func_0x000105c42164(uStack_38);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x000105c422c0();
  func_0x00010b51ea44();
  func_0x0001052a8008(auStack_128);
  func_0x0001052a0348(aplStack_f8);
  puVar4 = &uStack_d0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x000105c42394();
  func_0x000105c4219c();
  pcStack_168 = FUN_105c40364;
  if ((*(byte *)(puVar4 + 8) & 1) != 0) {
    return puVar4;
  }
  uVar5 = 0x48;
  puStack_180 = param_2;
  puStack_178 = param_1;
  puStack_170 = &stack0xfffffffffffffff0;
  ___cxa_allocate_exception(0x48);
  func_0x0001052a0760(auStack_1c0,puVar4);
  func_0x0001052a4718(uVar5,auStack_1c0);
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105c403d0);
  (*pcVar1)();
}



/* Entry: 105c40364; end: 105c403ef;  */

long FUN_105c40364(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [64];
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    return param_1;
  }
  uVar2 = 0x48;
  ___cxa_allocate_exception(0x48);
  func_0x0001052a0760(auStack_60,param_1);
  func_0x0001052a4718(uVar2,auStack_60);
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105c403d0);
  (*pcVar1)();
}



/* Entry: 105c403f0; end: 105c40793;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_105c403f0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  ulong auStack_230 [2];
  undefined1 *puStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined1 auStack_200 [56];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [56];
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 auStack_140 [56];
  undefined1 uStack_108;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long alStack_c0 [5];
  undefined1 auStack_98 [88];
  undefined1 uStack_40;
  undefined8 uStack_38;
  ulong uVar5;
  
  uVar5 = param_1;
  func_0x000105c421a4();
  iVar4 = (int)uVar5;
  auStack_98[0] = 0;
  uStack_40 = 0;
  uStack_38 = extraout_x8;
  FUN_105c3b044();
  if (iVar4 != 0) {
    FUN_105c3c008(auStack_98,&UNK_10f332c4e);
  }
  FUN_105c428cc(*(undefined8 *)(param_1 + 0x10),1);
  auStack_140[0] = 0;
  uStack_108 = 0;
  auStack_230[0] = auStack_230[0] & 0xffffffffffffff00;
  uStack_218 = 0;
  func_0x000105c4229c(param_2,auStack_140,0,param_4,param_5,auStack_230);
  func_0x000105c423f4();
  puVar6 = auStack_140;
  FUN_105c3ce98();
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x000105c42524(&uStack_170);
  func_0x000105c424bc(auStack_1b8);
  FUN_105c3fb98(auStack_180,param_1,&uStack_170,auStack_1b8);
  func_0x00010b51ea44(auStack_1b8);
  auStack_230[1] = 0;
  uStack_218 = 1;
  lStack_208 = lStack_168;
  uStack_210 = uStack_170;
  auStack_230[0] = param_1;
  puStack_220 = puVar6;
  if (lStack_168 != 0) {
    do {
      func_0x000105c42178();
    } while (extraout_w10 != 0);
  }
  func_0x000105c424bc(auStack_200);
  alStack_c0[3] = 0;
  alStack_c0[4] = 0;
  alStack_c0[1] = 0;
  alStack_c0[2] = 0;
  func_0x0001052a42fc(auStack_140,auStack_180,alStack_c0 + 1);
  func_0x0001052a4324(alStack_c0 + 3,auStack_140);
  func_0x0001052a4560(auStack_140);
  func_0x0001052a4560(alStack_c0 + 1);
  func_0x0001003b69cc(alStack_c0);
  func_0x0001003b6c18(&uStack_d0,alStack_c0[0]);
  FUN_105c40998(auStack_140,auStack_230);
  lStack_d8 = alStack_c0[0];
  alStack_c0[0] = 0;
  lStack_150 = 0;
  lStack_148 = 0;
  lStack_160 = alStack_c0[3] + 0x80;
  lStack_158 = CONCAT71(lStack_158._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  lVar8 = alStack_c0[3];
  func_0x0001052a4348();
  if ((int)lVar8 == 0) {
    puVar7 = (undefined8 *)0x78;
    __Znwm();
    *puVar7 = &PTR_SUB_1108dec60;
    FUN_105c40998(puVar7 + 1,auStack_140);
    lVar8 = lStack_d8;
    lStack_d8 = 0;
    puVar7[0xe] = lVar8;
    lVar8 = *(long *)(alStack_c0[3] + 200);
    *(undefined8 **)(alStack_c0[3] + 200) = puVar7;
    if (lVar8 != 0) {
      func_0x000105c42138();
    }
  }
  else {
    func_0x0001052a4324(&lStack_150,alStack_c0 + 3);
  }
  func_0x0001000df5a0(&lStack_160);
  if (lStack_150 != 0) {
    lStack_160 = lStack_150;
    lStack_158 = lStack_148;
    if (lStack_148 != 0) {
      do {
        func_0x000105c42178();
      } while (extraout_w10_00 != 0);
    }
    FUN_105c409f0(auStack_140);
    func_0x0001052a4560(&lStack_160);
  }
  uVar2 = uStack_c8;
  uVar1 = uStack_d0;
  uStack_1c8 = uStack_d0;
  uStack_1c0 = uStack_c8;
  uStack_d0 = 0;
  uStack_c8 = 0;
  func_0x0001052a4560(&lStack_150);
  FUN_105c40c54(auStack_140);
  func_0x0001003b6c64(&uStack_d0);
  lVar8 = alStack_c0[0];
  alStack_c0[0] = 0;
  if (lVar8 != 0) {
    func_0x000105c42138();
  }
  func_0x0001052a4560(alStack_c0 + 3);
  uVar3 = *(char *)(param_1 + 0x40) == '\x01';
  if ((bool)uVar3) {
    func_0x0001003b8400(param_1 + 0x30,&uStack_1c8);
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  func_0x0001003b6c64(&uStack_1c8);
  FUN_105c40794(auStack_230);
  func_0x0001052a4560(auStack_180);
  puVar7 = &uStack_170;
  func_0x00010529fde0();
  func_0x000105c42394();
  func_0x000105c42164(uStack_38);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    __ZdlPv(uVar1);
    func_0x0001000df5a0(&lStack_160);
    func_0x0001052a4560(&lStack_150);
    FUN_105c40c54(auStack_140);
    func_0x0001003b6c64(&uStack_d0);
    lVar8 = alStack_c0[0];
    alStack_c0[0] = 0;
    if (lVar8 != 0) {
      func_0x000105c42138();
    }
    func_0x0001052a4560(alStack_c0 + 3);
    FUN_105c40794(auStack_230);
    func_0x0001052a4560(auStack_180);
    puVar7 = &uStack_170;
    func_0x00010529fde0(puVar7);
    func_0x000105c42394();
    func_0x000105c4219c();
    func_0x00010b51ea44(puVar7 + 6);
    func_0x00010529fde0(puVar7 + 4);
    return puVar7;
  }
  return puVar7;
}



/* Entry: 105c40794; end: 105c407bf;  */

long FUN_105c40794(long param_1)

{
  func_0x00010b51ea44(param_1 + 0x30);
  func_0x00010529fde0(param_1 + 0x20);
  return param_1;
}



/* Entry: 105c407c0; end: 105c407d7;  */

void FUN_105c407c0(void)

{
  func_0x000105c41c1c();
  return;
}



/* Entry: 105c407d8; end: 105c40887;  */

void FUN_105c407d8(void)

{
  undefined8 extraout_x9;
  int extraout_w11;
  int extraout_w12;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  func_0x000105c42620();
  func_0x0001052a42fc(auStack_40);
  func_0x0001052a4324(auStack_30,auStack_40);
  func_0x000105c42234();
  func_0x000105c4227c();
  if (lStack_28 == 0) {
    uStack_38 = 0;
  }
  else {
    do {
      func_0x000105c422e4();
      uStack_38 = extraout_x9;
    } while (extraout_w12 != 0);
    do {
      func_0x000105c422d4();
    } while (extraout_w11 != 0);
  }
  func_0x0001052a460c(auStack_40);
  func_0x000105c42234();
  func_0x000105c421ec();
  func_0x000105c42424();
  return;
}



/* Entry: 105c40888; end: 105c40937;  */

void FUN_105c40888(void)

{
  undefined8 extraout_x9;
  int extraout_w11;
  int extraout_w12;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  func_0x000105c42620();
  func_0x0001052a5474(auStack_40);
  func_0x0001052a549c(auStack_30,auStack_40);
  func_0x000105c4230c();
  func_0x000105c42340();
  if (lStack_28 == 0) {
    uStack_38 = 0;
  }
  else {
    do {
      func_0x000105c422e4();
      uStack_38 = extraout_x9;
    } while (extraout_w12 != 0);
    do {
      func_0x000105c422d4();
    } while (extraout_w11 != 0);
  }
  func_0x0001052a5804(auStack_40);
  func_0x000105c4230c();
  func_0x000105c42324();
  func_0x000105c4241c();
  return;
}



/* Entry: 105c40938; end: 105c4097b;  */

void FUN_105c40938(long param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x000105c4251c();
  FUN_105c41c68(param_1 + 0x28,&UNK_10ddb182d,auStack_28);
  func_0x000105c4222c();
  return;
}



/* Entry: 105c4097c; end: 105c40997;  */

void FUN_105c4097c(long param_1)

{
  func_0x00010002b838();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 105c40998; end: 105c409ef;  */

undefined8 * FUN_105c40998(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_105c3b0a0(param_1 + 6,param_2 + 6);
  return param_1;
}



/* Entry: 105c409f0; end: 105c40c53;  */

void FUN_105c409f0(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uStack_178;
  long lStack_170;
  undefined1 auStack_168 [64];
  undefined1 auStack_128 [24];
  undefined1 uStack_110;
  undefined1 auStack_e8 [56];
  undefined1 uStack_b0;
  undefined1 auStack_78 [64];
  char cStack_38;
  
  if (param_3 != 0) {
    do {
      func_0x000105c42178();
    } while (extraout_w10 != 0);
    do {
      func_0x000105c42178();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = *param_1;
  uStack_178 = param_2;
  lStack_170 = param_3;
  func_0x0001052a460c(auStack_78,&uStack_178);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  if (cStack_38 == '\x01') {
    plVar4 = param_1 + 1;
    func_0x0001002acb3c(plVar4);
    FUN_105c42934(uVar3,plVar4);
    FUN_105c4015c(auStack_e8,lVar2);
    auStack_128[0] = 0;
    uStack_110 = 0;
    func_0x000105c421d0(param_1 + 6,auStack_e8);
    func_0x000105c425f8();
    FUN_105c3ce98(auStack_e8);
    plVar4 = *(long **)(lVar2 + 0x48);
    FUN_105c40d08(auStack_128,param_1 + 6);
    FUN_105c42720(auStack_e8,auStack_128);
    (**(code **)(*plVar4 + 0x10))(plVar4,auStack_e8);
    func_0x000105c423a4();
    FUN_105c3ce98(auStack_128);
    if (((ulong)plVar4 & 1) == 0) goto LAB_105c40b54;
    plVar4 = *(long **)(lVar2 + 0x48);
    FUN_105c40d08(auStack_168,param_1 + 6);
    FUN_105c42720(auStack_e8,auStack_168);
    (**(code **)(*plVar4 + 0x30))(plVar4,auStack_e8);
    func_0x000105c423a4();
    puVar1 = auStack_168;
  }
  else {
    FUN_105c42968(uVar3,1);
    auStack_e8[0] = 0;
    uStack_b0 = 0;
    func_0x00010002b838(auStack_128,&UNK_10f332ce4);
    uStack_110 = 1;
    func_0x000105c421c0(param_1 + 6,auStack_e8);
    func_0x000105c425f8();
    puVar1 = auStack_e8;
  }
  FUN_105c3ce98(puVar1);
LAB_105c40b54:
  func_0x0001052a4808(auStack_78);
  func_0x0001052a4560(&uStack_178);
  func_0x000105c42378();
  func_0x0001003b8370(param_1[0xd]);
  return;
}



/* Entry: 105c40c54; end: 105c40ca7;  */

long FUN_105c40c54(long param_1)

{
  func_0x0001003b6cec(param_1 + 0x68);
  func_0x00010b51ea44(param_1 + 0x30);
  func_0x00010529fde0(param_1 + 0x20);
  return param_1;
}



/* Entry: 105c40ca8; end: 105c40cbb;  */

void FUN_105c40ca8(void)

{
  func_0x000105c40c7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c40cbc; end: 105c40d07;  */

void FUN_105c40cbc(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x000105c42178();
    } while (extraout_w10 != 0);
  }
  FUN_105c409f0(param_1 + 8);
  func_0x000105c421ec();
  return;
}



/* Entry: 105c40d08; end: 105c40d63;  */

void FUN_105c40d08(long param_1)

{
  FUN_105c3b0a0();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 105c40d64; end: 105c40da3;  */

void FUN_105c40d64(long param_1)

{
  int extraout_w10;
  long unaff_x19;
  
  func_0x000105c4245c();
  func_0x000105c40dbc(param_1 + 8);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 8);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    do {
      func_0x000105c42178();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 105c40da4; end: 105c40da7;  */

void FUN_105c40da4(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x000105c4245c();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_105c41034();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052a4560(unaff_x19 + 0x18);
  func_0x0001052a4560((long *)(param_1 + 8));
  return;
}



/* Entry: 105c40da8; end: 105c40dd7;  */

void FUN_105c40da8(void)

{
  FUN_105c40fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c40dd8; end: 105c40ddb;  */

void FUN_105c40dd8(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x000105c4245c();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_105c41034();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052a4560(unaff_x19 + 0x18);
  func_0x0001052a4560((long *)(param_1 + 8));
  return;
}



/* Entry: 105c40ddc; end: 105c40def;  */

void FUN_105c40ddc(void)

{
  FUN_105c40fd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c40df0; end: 105c40ea3;  */

undefined1 * FUN_105c40df0(long *param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  func_0x000105c421a4();
  uVar4 = 1;
  uStack_28 = extraout_x8;
  FUN_105c40ea4(auStack_40);
  puVar1 = puStack_30;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_1108ded48;
  puStack_30[1] = 0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xd] = 0x3cb0b1bb;
  puStack_30[0xf] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x13] = 0x32aaaba7;
  puStack_30[0x15] = 0;
  puStack_30[0x14] = 0;
  puStack_30[0x17] = 0;
  puStack_30[0x16] = 0;
  puStack_30[0x19] = 0;
  puStack_30[0x18] = 0;
  puStack_30[0x1b] = 0;
  puStack_30[0x1a] = 0;
  puStack_30[0x1c] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  FUN_105c40fc0();
  func_0x000105c42164(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_105c40ecc();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 105c40ea4; end: 105c40ecb;  */

long FUN_105c40ea4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_105c40ecc();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 105c40ecc; end: 105c40efb;  */

void FUN_105c40ecc(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x11a7b9611a7b962) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xe8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1108ded48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c40efc; end: 105c40eff;  */

void FUN_105c40efc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108ded48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105c40f00; end: 105c40f13;  */

void FUN_105c40f00(void)

{
  func_0x000105c40f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c40f14; end: 105c40f33;  */

void FUN_105c40f14(long param_1)

{
  func_0x000105c40f74(param_1 + 0xe0);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xd8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x98);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x68);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x0001052a4808();
  }
  return;
}



/* Entry: 105c40f34; end: 105c40f9f;  */

void FUN_105c40f34(long param_1)

{
  func_0x000105c40f74(param_1 + 200);
  __ZNSt13exception_ptrD1Ev(param_1 + 0xc0);
  __ZNSt3__15mutexD1Ev(param_1 + 0x80);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x50);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0001052a4808();
  }
  return;
}



/* Entry: 105c40fa0; end: 105c40fbf;  */

void FUN_105c40fa0(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x0001052a4808();
  }
  return;
}



/* Entry: 105c40fc0; end: 105c40fcf;  */

void FUN_105c40fc0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105c40fd0; end: 105c41033;  */

void FUN_105c40fd0(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  func_0x000105c4245c();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_105c41034();
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052a4560(unaff_x19 + 0x18);
  func_0x0001052a4560((long *)(param_1 + 8));
  return;
}



/* Entry: 105c41034; end: 105c41097;  */

void FUN_105c41034(undefined8 param_1)

{
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  ppuStack_30 = &PTR_DAT_1107e6938;
  func_0x000104bdfe3c(auStack_28,&ppuStack_30);
  FUN_105c41098(param_1,auStack_28);
  func_0x000105c4222c();
  __ZNSt9exceptionD2Ev(&ppuStack_30);
  return;
}



/* Entry: 105c41098; end: 105c410b7;  */

void FUN_105c41098(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_105c410b8(param_1,&uStack_18);
  return;
}



/* Entry: 105c410b8; end: 105c4114b;  */

void FUN_105c410b8(undefined8 param_1,long *param_2)

{
  code *extraout_x8;
  
  func_0x000105c42434();
  func_0x000105c42554();
  func_0x000105c4227c();
  func_0x000105c421ec();
  __ZNSt3__15mutex4lockEv(0x80);
  func_0x000105c42380();
  FUN_105c4114c();
  func_0x000105c4232c();
  if (param_2 == (long *)0x0) {
    func_0x000105c425d0();
  }
  else {
    func_0x000105c42380(*(undefined8 *)(*param_2 + 0x10));
    (*extraout_x8)();
    func_0x000105c421f4();
  }
  func_0x000105c42234();
  return;
}



/* Entry: 105c4114c; end: 105c4115f;  */

void FUN_105c4114c(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13exception_ptraSERKS__1103461a0)(*param_2 + 0xc0,*param_1);
  return;
}



/* Entry: 105c41160; end: 105c4117b;  */

void FUN_105c41160(long param_1)

{
  func_0x00010054f8dc();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 105c4117c; end: 105c411a3;  */

long FUN_105c4117c(long param_1)

{
  long unaff_x19;
  undefined **ppuStack_28;
  
  FUN_105c411a4(param_1 + 0x28);
  func_0x000105c4245c();
  if (*(long *)(param_1 + 8) != 0) {
    ppuStack_28 = &PTR_DAT_1107e6938;
    FUN_105c41034(unaff_x19,&ppuStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_28);
  }
  func_0x0001052a4560(unaff_x19 + 0x18);
  func_0x0001052a4560((long *)(param_1 + 8));
  return unaff_x19;
}



/* Entry: 105c411a4; end: 105c4120b;  */

void FUN_105c411a4(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x000105c411c4();
  }
  return;
}



/* Entry: 105c4120c; end: 105c412bb;  */

void FUN_105c4120c(undefined8 param_1,long *param_2)

{
  code *extraout_x8;
  
  func_0x000105c42434();
  func_0x000105c42554();
  func_0x000105c4227c();
  func_0x000105c421ec();
  __ZNSt3__15mutex4lockEv(0x80);
  func_0x000105c42380();
  FUN_105c412bc();
  func_0x000105c4232c();
  if (param_2 == (long *)0x0) {
    func_0x000105c425d0();
  }
  else {
    func_0x000105c42380(*(undefined8 *)(*param_2 + 0x10));
    (*extraout_x8)();
    func_0x000105c421f4();
  }
  func_0x000105c42234();
  return;
}



/* Entry: 105c412bc; end: 105c412cb;  */

long FUN_105c412bc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*(char *)(lVar1 + 0x48) == '\x01') {
    FUN_105c4131c();
  }
  else {
    FUN_105c41300(lVar1,*param_1);
  }
  return lVar1;
}



/* Entry: 105c412cc; end: 105c412ff;  */

long FUN_105c412cc(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_105c4131c();
  }
  else {
    FUN_105c41300();
  }
  return param_1;
}



/* Entry: 105c41300; end: 105c4131b;  */

void FUN_105c41300(long param_1)

{
  func_0x0001052a47b4();
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



/* Entry: 105c4131c; end: 105c4136b;  */

void FUN_105c4131c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (((*(byte *)(param_1 + 8) & 1) == 0) && ((*(byte *)(param_2 + 8) & 1) != 0)) {
    func_0x0001052a03ac();
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    FUN_105c4136c(param_1,param_2);
  }
  return;
}



/* Entry: 105c4136c; end: 105c413cf;  */

undefined8 * FUN_105c4136c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 8) != '\x01') {
    if ((*(byte *)(param_2 + 8) & 1) != 0) {
      return param_1;
    }
    func_0x000100066230();
    param_1[3] = param_2[3];
    func_0x0001002a8208(param_1 + 4,param_2 + 4);
    return param_1;
  }
  if (*(byte *)(param_2 + 8) != 0) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    param_1[1] = uVar2;
    *param_1 = uVar1;
    func_0x0001000ff1ac(&uStack_30);
    return param_1;
  }
  func_0x0001000ff1ac();
  func_0x0001052a0844();
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 105c413d0; end: 105c41417;  */

void FUN_105c413d0(void)

{
  undefined8 auStack_30 [2];
  
  FUN_105c41418(auStack_30);
  func_0x000105c4248c();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a4348(auStack_30[0]);
  func_0x000105c425a0();
  func_0x000105c4227c();
  return;
}



/* Entry: 105c41418; end: 105c4145b;  */

void FUN_105c41418(undefined8 param_1)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  
  func_0x000105c425ac();
  __ZNSt3__18__sp_mut4lockEv();
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x21[1] = unaff_x20[1];
  *unaff_x21 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000105c42178();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(param_1);
  return;
}



/* Entry: 105c4145c; end: 105c415cf;  */

void FUN_105c4145c(void)

{
  long *plVar1;
  long *plVar2;
  int extraout_w10;
  long lStack_b8;
  long lStack_b0;
  long *aplStack_a8 [3];
  long lStack_90;
  long lStack_88;
  long alStack_80 [4];
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int aiStack_30 [4];
  
  func_0x000105c42620();
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001052a42fc(alStack_80);
  func_0x0001052a4324(aiStack_30,alStack_80);
  func_0x0001052a4560(alStack_80);
  func_0x0001052a4560(&uStack_40);
  func_0x0001003b69cc(&uStack_48);
  func_0x0001003b6c18(auStack_60,uStack_48);
  func_0x000105c42244();
  __ZNSt3__15mutex4lockEv();
  func_0x0001052a4348();
  if (aiStack_30[0] == 0) {
    plVar1 = alStack_80;
    FUN_105c41690(aplStack_a8);
    func_0x000105c42474();
    plVar2 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      func_0x000105c42138();
      plVar2 = aplStack_a8[0];
      aplStack_a8[0] = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        func_0x000105c42138();
      }
    }
  }
  else {
    plVar2 = &lStack_90;
    func_0x0001052a4324(plVar2,aiStack_30);
  }
  func_0x000105c423c8();
  if (lStack_90 != 0) {
    lStack_b8 = lStack_90;
    lStack_b0 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x000105c42178();
      } while (extraout_w10 != 0);
    }
    plVar2 = alStack_80;
    FUN_105c415d0(plVar2,&lStack_b8);
    func_0x000105c42378();
  }
  func_0x000105c4262c();
  func_0x0001052a4560();
  func_0x000105c42614();
  if (plVar2 != (long *)0x0) {
    func_0x000105c42138();
  }
  func_0x000105c4239c();
  func_0x000105c42654();
  if (plVar2 != (long *)0x0) {
    func_0x000105c42138();
  }
  func_0x000105c42424();
  return;
}



/* Entry: 105c415d0; end: 105c4168f;  */

void FUN_105c415d0(long param_1,long param_2)

{
  int extraout_w11;
  int extraout_w12;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x000105c422e4();
    } while (extraout_w12 != 0);
    do {
      func_0x000105c422d4();
    } while (extraout_w11 != 0);
  }
  func_0x000105c42380();
  FUN_105c41744();
  func_0x000105c42234();
  func_0x000105c4227c();
  func_0x0001003b8370(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 105c41690; end: 105c416b3;  */

void FUN_105c41690(void)

{
  func_0x000105c423b8();
  func_0x000105c42348(&PTR_FUN_1108ded98);
  return;
}



/* Entry: 105c416b4; end: 105c416b7;  */

undefined8 * FUN_105c416b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108ded98;
  func_0x0001003b6cec(param_1 + 3);
  return param_1;
}



/* Entry: 105c416b8; end: 105c416cb;  */

void FUN_105c416b8(void)

{
  FUN_105c41718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105c416cc; end: 105c41717;  */

void FUN_105c416cc(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x000105c42178();
    } while (extraout_w10 != 0);
  }
  FUN_105c415d0(param_1 + 8,&uStack_30);
  func_0x000105c421ec();
  return;
}



/* Entry: 105c41718; end: 105c41743;  */

undefined8 * FUN_105c41718(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108ded98;
  func_0x0001003b6cec(param_1 + 3);
  return param_1;
}



/* Entry: 105c41744; end: 105c4177f;  */

void FUN_105c41744(void)

{
  func_0x000105c42640();
  FUN_105c41418();
  FUN_105c41780();
  func_0x000105c421ec();
  func_0x000105c42504();
  return;
}



/* Entry: 105c41780; end: 105c417a7;  */

void FUN_105c41780(void)

{
  func_0x000105c425b8();
  __ZNSt3__18__sp_mut4lockEv();
  func_0x000105c424a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)();
  return;
}


